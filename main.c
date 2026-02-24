#include<stdio.h>
int main() {
        char str_1[] = "12345";
        int result = 0;
        for (int i = 0; str_1[i] != '\0'; i++) {
                if ((str_1[i] < '0') || (str_1[i] > '9'))
                {
                        printf("error!!!");
                        return 1;
                }
                result = result * 10 + (str_1[i] - '0');
        }
        printf("%d", result);
        return 0;
}
