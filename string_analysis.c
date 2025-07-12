#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    // Compare two strings
    char a[] = "hello";
    char b[] = "world";
    if (strcmp(a, b) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    // Concatenate strings
    char stra[50] = "Hello, ";
    char strb[] = "World!";
    strcat(stra, strb);
    printf("Concatenated String: %s\n", stra);

    return 0;
}
