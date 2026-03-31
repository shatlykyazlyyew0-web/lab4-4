#include <stdio.h>
void balance_brackets(char str[])
{
    int point = 0;
    int f = 1;
    for (int i = 0; f && str[i] != '\0'; i++) {
        if (str[i] == '(') {
            point += 1;
        }
        if (str[i] == ')') {
            point -= 1;
        }
        if (point < 0 && f == 1) {
            f = 0;
            printf("%s", "here i am \n");
        }
    }
    if (point == 0 && f == 1) {
        printf("Balanced");
    }
    else {
        printf("not balanced");
    }
}
int main()
{
    // int flag = 1;
    balance_brackets("()((()))(");
    // test: "()()(())"  ")())(())" "())("


    return 0;
}
