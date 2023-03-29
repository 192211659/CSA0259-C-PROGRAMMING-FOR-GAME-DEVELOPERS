#include <stdio.h>
#include <string.h>

void remove_chars(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i, j, k;
    
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                for (k = j; k < len2 - 1; k++) {
                    str2[k] = str2[k + 1];
                }
                str2[k] = '\0';
                len2--;
                j--;
            }
        }
    }
    
    printf("Resultant String: %s\n", str2);
}

int main() {
    char str1[50], str2[50];
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    remove_chars(str1, str2);
    
    return 0;
}
