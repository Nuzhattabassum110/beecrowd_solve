   #include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);


    if (A >= B && A >= C) {
        printf("%d is greater.\n", A);
    } else if (B >= A && B >= C) {
        printf("%d is greater.\n", B);
    } else {
        printf("%d is greater.\n", C);
    }

    return 0;
}
