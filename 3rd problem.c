 #include <stdio.h>
int main() {
float A, B, Y;
printf("Enter the value of A: ");
scanf("%f", &A);
printf("Enter the value of B: ");
scanf("%f", &B);
Y = B * (A + B) / 2;
printf("The result of Y = B(A + B)/2 is: %.2f\n", Y);
return 0;
}
