#include<stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    // Conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f", celsius);
    return 0;
}
