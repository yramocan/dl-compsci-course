#include <stdio.h>

#define arrayLength(array) (sizeof((array))/sizeof((array)[0]))

float avgFromFloatArray(void);

int main() {
    printf("avgFromFloatArray() = %f\n", avgFromFloatArray());
    return 0;
}

float avgFromFloatArray(void) {
    float sum = 0, arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    for (int i = 0; i < arrayLength(arr); ++i) {
        sum += arr[i];
    }
    
    return sum / arrayLength(arr);
}
