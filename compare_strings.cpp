#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings
    if (strcmp(str1, str2) == 0) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}

