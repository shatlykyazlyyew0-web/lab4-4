#include <stdio.h>

int main() {
    char str[] = "abcda,efge abcd.";
    char word[1000];
    int point = 0;

    for (int i = 0; str[i] != '\0';) {
        while (str[i] == '.' || str[i] == ',' || str[i] == ' ') {
            i++;
        }

        int j = 0;
        while (str[i] != ',' && str[i] != '.' && str[i] != ' ' && str[i] != '\0') {
            word[j] = str[i];
            j++;
            i++;
        }
        word[j] = '\0';

        if (j > 0) {
            printf("%s \n", word);

            if (word[0] == word[j - 1]) {
                point++;
            }
        }
    }

    printf("Summ: %d\n", point);
    return 0;
}
