#include<stdio.h>
int main() {
        // char str_1[] = "12345";
        char str_1[] = "  -12345";
        int i = 0;
        int sign = 1;
        int result = 0;

        while(str_1[i] == ' '){
          i++;
        }

        if(str_1[i] == '-' || str_1[i] == '+'){
          if(str_1[i] == '-'){
            sign = -1;
          }
          i++;
        }

        for (; str_1[i] != '\0'; i++) {
                if ((str_1[i] < '0') || (str_1[i] > '9'))
                {
                        printf("error!!!");
                        return 1;
                }
                result = result * 10 + (str_1[i] - '0');
        }
        result = result * sign;
        printf("%d", result);
        return 0;
}
