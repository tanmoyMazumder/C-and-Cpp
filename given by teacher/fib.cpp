#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n-1; ++i) {

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("fib: %d, ", t1);

    return 0;
}
