#include <stdio.h>
#include <string.h>

void removeExtraSpaces(char *str) {
    int i, j, len;
    len = strlen(str);
    j = 0;
    for (i = 0; i < len; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    removeExtraSpaces(str);
    printf("Resulting string: %s\n", str);
    return 0;
}
