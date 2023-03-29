#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int result;
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("The two strings are equal.\n");
    } else if (result < 0) {
        printf("%s is less than %s.\n", str1, str2);
    } else {
        printf("%s is greater than %s.\n", str1, str2);
    }
    
    return 0;
}
