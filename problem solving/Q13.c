#include <stdio.h>
#include <string.h>
char firstRepeatingChar(const char *str) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] == 2)
            return str[i];
    }
    return '\0'; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char result = firstRepeatingChar(str);
    if (result != '\0')
        printf("First repeating character: %c\n", result);
    else
        printf("No repeating character found.\n");
    return 0;
}

