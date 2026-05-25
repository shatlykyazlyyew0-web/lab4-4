// Задача3: Дана не пустая последовательность непустых слов из латинских букв;
// соседниеслова отделены друг от друга запятой или пробелом, за последним словам точка.
// Определить количество слов, которыенвчинаются и оканчиваются одной и той же буквой

#include <stdio.h>

int similar_word(const char *str, int *result_w)
{
  if(str == NULL || result_w == NULL)
  {
    return -1;
  }
  char word[1000];
  int point = 0;

  for (int i = 0; str[i] != '\0';)
  {
    while (str[i] == '.' || str[i] == ',' || str[i] == ' ')
    {
      i++;
    }

    int j = 0;
    while (str[i] != ',' && str[i] != '.' && str[i] != ' ' && str[i] != '\0')
    {
      word[j] = str[i];
      j++;
      i++;
    }

    word[j] = '\0';

    if (j > 0)
    {
      if (word[0] == word[j - 1])
      {
        printf("%s \n", word);
        point++;
      }
    }
  }
  *result_w = point;
  return 0;
}

int main(){

  int result;

  if (similar_word("aba.", &result) == 0)
  {
    printf("Result: %d", result);
  }else {
          printf("%s", "Error!!!");
        }

  return 0;
}


// "aba."
// "abc, def."
// "a, b, c."
// "aba bcb,cdc."
// "AbA, aBa."
// ""
// " . , . "
