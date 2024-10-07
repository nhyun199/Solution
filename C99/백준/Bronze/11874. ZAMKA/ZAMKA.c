#include <stdio.h>

int sumOfDigit(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findMinimum(int L, int D, int X) {
    for (int i = L; i <= D; i++) {
        if (sumOfDigit(i) == X) {
            return i;
        }
    }
    return -1;
}

int findMaximum(int L, int D, int X) {
    for (int i = D; i >= L; i--) {
        if (sumOfDigit(i) == X) {
            return i;
        }
    }
    return -1;
}

int main() {
    int L, D, X;
    scanf("%d %d %d", &L, &D, &X);

    int N = findMinimum(L, D, X);
    int M = findMaximum(L, D, X);

    printf("%d\n%d", N, M);

    return 0;
}
