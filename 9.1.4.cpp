#include <stdio.h>

void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {
    int a = 1, b = 2, c = 3;
    printf("Before swapValue: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swapValue: a=%d, b=%d, c=%d\n", a, b, c);

    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {9, 8, 7, 6};

    printf("Before swapArray:\n");
    for(int i=0; i<4; i++) {
        printf("arr1[%d]=%d arr2[%d]=%d\n", i, arr1[i], i, arr2[i]);
    }

    swapArray(arr1, arr2, 4);

    printf("After swapArray:\n");
    for(int i=0; i<4; i++) {
        printf("arr1[%d]=%d arr2[%d]=%d\n", i, arr1[i], i, arr2[i]);
    }

    return 0;
}

void swapValue(int *a, int *b, int *c) {
    int tempA = *a;
    int tempB = *b;
    int tempC = *c;

    *a = tempB;
    *b = tempC;
    *c = tempA;
}

void swapArray(int a[], int b[], int size) {
    for(int i=0; i<size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

