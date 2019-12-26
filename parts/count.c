#include<stdio.h>
int count(char str[]){
    int i = 0;
    while(str[i] !='\0'){
        ++i;
    }
    return i;
}
int main()
{
    char c[100];
    int i = 0;
    c[i] = getchar();
    while (c[i] !='\n'){
        i++;
        c[i] = getchar();
    }
    printf("%d\n",count(c));
}
//  "输入qwe，打印4"