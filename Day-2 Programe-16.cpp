#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // remove newline character from fgets input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    strcat(str1, str2);
    
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}
