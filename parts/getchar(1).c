#include <stdio.h>
int main()
{
    char a;
    int b = 0;
    a = getchar();
    while(a !='\n'){
        a = a - '0';
        b = b*10 + a;
        a = getchar();
    }
    printf("%d\n",b);
}