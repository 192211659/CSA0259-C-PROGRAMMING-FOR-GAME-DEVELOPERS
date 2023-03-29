#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char *str) {
    int len = strlen(str);
    int i, j;

    // Trim leading spaces
    i = 0;
    while (isspace(str[i])) {
        i++;
    }

    // Shift remaining characters to the left
    if (i > 0) {
        for (j = 0; j < len - i + 1; j++) {
            str[j] = str[j + i];
        }
    }

    // Trim trailing spaces
    len = strlen(str);
    i = len - 1;
    while (i >= 0 && isspace(str[i])) {
        i--;
    }

    // Replace trailing spaces with null character
    str[i + 1] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    trim(str);

    printf("Trimmed string: %s\n", str);

    return 0;
}
