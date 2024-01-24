//Write a program to perform following operations on strings: 
//a) Concatenate two strings without using strcat() function. 
//b) Compare two strings without using strcmp()

#include <stdio.h>
void concatenateStrings(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

int compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; 
        }

        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char string1[100], string2[100];
    printf("Enter the first string: ");
    gets(string1);
    printf("Enter the second string: ");
    gets(string2);
    concatenateStrings(string1, string2);
    printf("Concatenated string: %s\n", string1);
    if (compareStrings(string1, string2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
