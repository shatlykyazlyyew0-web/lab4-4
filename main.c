#include<stdio.h>

int balance_brackets(char brackets[]);

int main(){

  char brackets[] = "(()";

  int result = balance_brackets(brackets);

  if(result == 1)
  {
    printf("%s", "All is right, Balanced!!!");
  }
  else if (result == 0)
        {
          printf("%s", "Not Balanced");
        }else printf ("%s", "Error!!!");

  return 0;
}

int balance_brackets(char brackets[])
{
  if (brackets == NULL)
  {
    return -1;
  }

  int a = 0, found_brackets = 0;

  for (int i=0; brackets[i] != '\0'; i++)
  {
    if (brackets[i] == '(')
    {
      a++;
      found_brackets = 1;
    }
    else
    {
      if (brackets[i] == ')')
      {
        a--;
        found_brackets = 1;
        if (a < 0)
        {
          return 0;
        }
      }
  }
  }

  if (found_brackets != 1)
  {
    return  -1;
  }

  if (a == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }

}


// // Тест 1: Баланс
//     "()"
//     "(())"
//     "a+(b+c)"

//     // Тест 2: Дисбаланс
//     "("
//     ")"
//     ")("
//     "(()"

//     // Тест 3: Особые случаи
//     (NULL)
//     ("")
//     ("abc")
