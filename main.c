// Задача 2: Выполнить конвертапцию строки в число

#include<stdio.h>

int str_to_number(const char *str, int *out_result)
{
  if ((str == NULL) || (out_result == NULL))
  {
    return -1;
  }

  int i = 0;
  int sign = 1;
  int result = 0;
  while (str[i] == ' ')
  {
    i++;
  }

  if (str[i] == '+' || str[i] == '-')
  {
    if (str[i]=='-')
    {
      sign *= -1;
    }
    i++;
  }

  if (str[i] < '0' || str[i] > '9')
  {
    return -1;
  }


  for (; str[i] != '\0'; i++)
  {
    if(str[i] < '0' || str[i] > '9')
    {
      return -1;
    }

    int digit = str[i] - '0';
    if (result > 2147483647 / 10)
    {
        return -1;
    }

    if (result == 2147483647 / 10 && digit > 2147483647 % 10) {
            return -1;
        }

    result = result * 10 + digit;

  }

  if (sign == -1)
  {
    result *= -1;
    *out_result = result;
    return 0;
  }
  else if (sign == 1)
       {
          *out_result = result;
          return 0;
        }
}

int main(){

  int str;
  if (str_to_number("99999999999999", &str) == 0)
  {
    printf("Result: %d", str);
  }else{
         printf("%s", "Error!!!");
       }

  return 0;
}




// test1: "123"
// test2: "-456"
// test3: "   789"
// test4: "12a3"
// test5: "999999999999" !!!
// test6: "2147483647"
// test7: "2147483648" !!!
// test8: ""
