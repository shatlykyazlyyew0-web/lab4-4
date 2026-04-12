// #include <stdio.h>
// #include <ctype.h>
// #include <limits.h>

// int str_to_number(const char *str, int *out_result) {
//     if (!str || !out_result) return -1;

//     int i = 0;
//     int sign = 1;
//     long result = 0;  // Используем long для проверки переполнения

//     // Пропуск пробелов
//     while (str[i] == ' ') i++;

//     // Обработка знака
//     if (str[i] == '-' || str[i] == '+') {
//         if (str[i] == '-') sign = -1;
//         i++;
//     }

//     // Проверка: есть ли цифры после знака?
//     if (!isdigit((unsigned char)str[i])) {
//         printf("error: no digits\n");
//         return -1;
//     }

//     // Преобразование
//     for (; str[i] != '\0'; i++) {
//         if (!isdigit((unsigned char)str[i])) {
//             printf("error: invalid character '%c'\n", str[ i]);
//             return -1;
//         }

//         // Проверка переполнения
//         result = result * 10 + (str[i] - '0');
//         if (sign == 1 && result > INT_MAX) {
//             printf("error: overflow\n");
//             return -1;
//         }
//         if (sign == -1 && -result < INT_MIN) {
//             printf("error: underflow\n");
//             return -1;
//         }
//     }

//     *out_result = (int)(result * sign);
//     return 0;
// }

// int main() {
//     int result;
//     if (str_to_number("  -12345", &result) == 0) {
//         printf("Result: %d\n", result);
//     }
//     return 0;
// }



#include<stdio.h>

int str_to_number(const char *str, int *out_result)
{
  if ((str == NULL) || (out_result == NULL))
  {
    printf("%s", "Error!!");
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
    printf("%s", "Error, is not digit!!!");
    return -1;
  }


  for (; str[i] != '\0'; i++)
  {
    if(str[i] < '0' || str[i] > '9')
    {
      printf("%s", "It is not digit!!!");
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
  if (str_to_number("  -1243", &str) == 0)
  {
    printf("Result: %d", str);
  }



  return 0;
}







