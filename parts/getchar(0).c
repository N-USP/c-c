#include <stdio.h>
int main()
{
    char c[100];
    int i = 0;
    c[i] = getchar();
    while (c[i] !='\n'){
        ++i;
        c[i] = getchar();
    }
    printf("%s\n",c);
}