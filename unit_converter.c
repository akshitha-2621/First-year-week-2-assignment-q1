#include <stdio.h>
int main() {
float fahrenheit, celsius;
prinf("Enter temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);
celsius = (fahrenheit- 32) * 5 / 9;
printf("conversion result\n");
printf("Fahrenheit: %.2f f\n", fahrenheit);
printf("Celsius: %.2f c\n", celsius);
return 0;
}