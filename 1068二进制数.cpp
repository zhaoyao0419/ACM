#include<stdio.h>
 
int main(void)
{
    char ch;
    int d = 0;
 
    while(ch = getchar(), ch != '\n')
        d = d * 2 + (ch - '0'); //d����һλ������2�����¶����ch����λ
 
    printf("%d\n", d);
    return 0;
}



