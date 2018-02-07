#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day, month, year;
};

int f(int, int);
int g(int);
int daysElapsed(struct Date, struct Date);
int addDays(struct Date);

int main() {
    struct Date date1, date2;
    
    printf("Enter the first date\nFormat mm/dd/yyyy:\n\n");
    scanf("%2d/%2d/%4d", &date1.month, &date1.day, &date1.year);

    printf("\nEnter the second date\nFormat mm/dd/yyyy:\n\n");
    scanf("%2d/%2d/%4d", &date2.month, &date2.day, &date2.year);

    printf("\nThere are %i days between %i/%i/%i and %i/%i/%i.\n\n",
            daysElapsed(date1, date2),
            date1.month, date1.day, date1.year,
            date2.month, date2.day, date2.year
           );
    
    return 0;
}

int f(int year, int month) {
    return (month <= 2) ? year - 1 : year;
}

int g(int month) {
    return (month <= 2) ? month + 13 : month + 1;
}

int calculateN(struct Date date) {
    int n = (1461 * f(date.year, date.month) / 4) + (153 * g(date.month) / 5) + date.day;
    return n + addDays(date);
}

int addDays(struct Date date) {
    if (date.year >= 2000) return 0;
    
    int n = date.year / 100;
    if (date.month < 3) n += 1;
    return 19 - n;
}

int daysElapsed(struct Date date1, struct Date date2) {
    return abs(calculateN(date1) - calculateN(date2));
}
