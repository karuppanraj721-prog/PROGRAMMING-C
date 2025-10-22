#include <stdio.h>
int countWords(const char *sentence) {
    int count = 0, i = 0;
    int inWord = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int words = countWords(sentence);
    printf("Number of words in the sentence: %d\n", words);
    return 0;
}

