#include <stdio.h>
#include <string.h>

int main() {
    int aa;

    printf("Enter the user case (1–9): ");
    scanf("%d", &aa);

    switch (aa) {
        case 1: {
            char str[] = "Hello, World!";
            printf("Length: %lu\n", strlen(str));
            break;
        }

        case 2: {
            char source[] = "C Programming";
            char destination[50];
            strcpy(destination, source);
            printf("Copied String: %s\n", destination);
            break;
        }

        case 3: {
            char src[] = "Welcome";
            char dest[10];
            strncpy(dest, src, 4);
            dest[4] = '\0';  // Null terminate
            printf("Partial Copy: %s\n", dest);
            break;
        }

        case 4: {
            char str1[50] = "Hello, ";
            char str2[] = "World!";
            strcat(str1, str2);
            printf("Concatenated String: %s\n", str1);
            break;
        }

        case 5: {
            char str5[20];
            memset(str5, '*', 10);
            str5[10] = '\0';  // Null terminate
            printf("After memset: %s\n", str5);
            break;
        }

        case 6: {
            char str6[] = "C,is,a,powerful,language";
            char *token = strtok(str6, ",");
            while (token != NULL) {
                printf("%s\n", token);
                token = strtok(NULL, ",");
            }
            break;
        }

        case 7: {
            char text[] = "Learn C programming";
            char *sub = strstr(text, "p");
            if (sub)
                printf("Substring found at: %s\n", sub);
            else
                printf("Substring not found.\n");
            break;
        }

        case 8: {
            char str8[] = "development";
            char *ptr = strchr(str8, 'e');
            if (ptr)
                printf("First 'e' found at position: %ld\n", ptr - str8);
            else
                printf("'e' not found in string.\n");
            break;
        }

        case 9: {
            char str10[50] = "Good ";
            char str11[] = "Morning";
            strncat(str10, str11, 4);  // Append only first 4 characters
            printf("Partial Concatenation: %s\n", str10);
            break;
        }

        default:
            printf("Invalid case number.\n");
    }

    return 0;
}
