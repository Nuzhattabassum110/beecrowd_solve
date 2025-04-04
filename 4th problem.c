#include <stdio.h>

int main() {

    int NUMBER, SALARY;
    double dollar, mult;
 scanf("%d %d %lf", &NUMBER, &SALARY, &dollar);
 mult = SALARY * dollar;
 printf("NUMBER = %d\n", NUMBER);
 printf("SALARY = U$%.2lf\n", mult);

    return 0;
}
