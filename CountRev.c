//Write a program to perform following operations on strings: 
//a) Calculate number of vowels in the string 
//b) Reverse the string

#include <stdio.h>
int countVowels(char *str) {
    int count = 0;

    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }

        str++;
    }

    return count;
    }
void reverseString(char *str) {
    char *end = str;
    char temp;
    while (*end != '\0') {
        end++;
    }
    end--; 

    while (str < end) {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString);

    printf("Number of vowels: %d\n", countVowels(inputString));

    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);

    return 0;
}
