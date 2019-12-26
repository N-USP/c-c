#include<stdio.h>
int main()
{
    char a[100];
    int i = 0;
    a[i] = getchar();
    while (a[i] !='\n'){
        i++;
        a[i] = getchar();
        }
    char b[100];   
    char *x = a;
    char *y = b;
    while (*x != '\n'){
        *y++ = *x++;
    }
    printf("%s\n",b);
}