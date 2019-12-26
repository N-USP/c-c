#include<stdio.h>
int getline(char s[],int lim)//将一行读入s返回长度i
{
    int c, i;
    for(i = 0;i<lim-1 && (c = getchar()) !=EOF &&c !='\n';++i)
       s[i] = c;
       if (c == '\n'){
           s[i] = c;
           ++i;
       }
       s[i] = '\0';
       return i;
}
