#include <stdio.h>

int romanToDecimal(char romanNumeral[]) {
    int i, decimalNum = 0;

    for(i = 0; romanNumeral[i] != '\0'; i++) {
        if(romanNumeral[i] == 'I') {
            if(romanNumeral[i+1] == 'V' || romanNumeral[i+1] == 'X')
                decimalNum -= 1;
            else
                decimalNum += 1;
        }
        else if(romanNumeral[i] == 'V')
            decimalNum += 5;
        else if(romanNumeral[i] == 'X') {
            if(romanNumeral[i+1] == 'L' || romanNumeral[i+1] == 'C')
                decimalNum -= 10;
            else
                decimalNum += 10;
        }
        else if(romanNumeral[i] == 'L')
            decimalNum += 50;
        else if(romanNumeral[i] == 'C') {
            if(romanNumeral[i+1] == 'D' || romanNumeral[i+1] == 'M')
                decimalNum -= 100;
            else
                decimalNum += 100;
        }
        else if(romanNumeral[i] == 'D')
            decimalNum += 500;
        else if(romanNumeral[i] == 'M')
            decimalNum += 1000;
    }

    return decimalNum;
}

int main() {
    char romanNumeral[20];
    int decimalNum;

    printf("Enter a Roman numeral: ");
    scanf("%s", romanNumeral);

    decimalNum = romanToDecimal(romanNumeral);

    printf("The decimal equivalent of %s is %d.\n", romanNumeral, decimalNum);

    return 0;
}
