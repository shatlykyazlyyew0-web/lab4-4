#include <stdio.h>

int main()
{
    // int flag = 1;
    int point = 0;
    int f = 1;
    char str[100] = ")()(())";
    // test: "()()(())"  ")())(())" "())("

    for (int i = 0; f && str[i] != '\0'; i++) {
        if (str[i] == '(') {
            point += 1;
        }
        if (str[i] == ')') {
            point -= 1;
        }
        if (point < 0) {
            f = 0;
            printf("%s", "here i am \n");
        }
    }
    if (point == 0) {
        printf("Balanced");
    }
    else {
        printf("not balanced");
    }
    return 0;
}
