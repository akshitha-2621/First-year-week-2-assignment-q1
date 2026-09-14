#include <stdio.h>
int main() {
float fahrenheit, celsius;
printf("Enter temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);
celsius = (fahrenheit - 32) * 5 / 9;
printf("conversion result\n");
printf("Fahrenheit: %.2f f\n", fahrenheit);
printf("celsius: %.2f c\n", celsius);
return 0;
}
