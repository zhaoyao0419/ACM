#include<stdio.h>
 
int main(void)
{
    char ch;
    int d = 0;
 
    while(ch = getchar(), ch != '\n')
        d = d * 2 + (ch - '0'); //d左移一位（乘以2），新读入的ch做个位
 
    printf("%d\n", d);
    return 0;
}



