#include <stdio.h>

int similar_word(const char *str, int *result_w)
{
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
      // printf("%s \n", word);

      if (word[0] == word[j - 1]) {
        printf("%s \n", word);
        point++;
      }
    }
  }
  *result_w = point;
  return 0;
}

int main() {

  int result;

  if (similar_word("abcda, aaaa, jfjfd kjkf.", &result) == 0)
  {
    printf("Result: %d", result);
  }

  return 0;
}
