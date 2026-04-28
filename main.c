
#include<stdio.h>

int str_to_number(const char *str, int *out_result)
{
  if ((str == NULL) || (out_result == NULL))
  {
    // printf("%s", "Error!!");
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
    // printf("%s", "Error, is not digit!!!");
    return -1;
  }


  for (; str[i] != '\0'; i++)
  {
    if(str[i] < '0' || str[i] > '9')
    {
      // printf("%s", "It is not digit!!!");
      return -1;
    }

    result = result * 10 + (str[i] - '0');
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
  if (str_to_number(" -1123", &str) == 0)
  {
    printf("Result: %d", str);
  }else{
         printf("%s", "Error!!!");
       }




  return 0;
}







