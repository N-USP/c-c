#include<stdio.h>
int get(void){
    char a;
    int x = 0;
    a = getchar();
    while(a !=' '){
        a = a - '0';
        x = x*10 + a;
        a = getchar();
    }
    return x;
}

int main()
{
    int i = 0;
    int o = 0;
    char p[10];
    while(i <= 8){
        p[o] = get();
        ++i;
        ++o;
    }
    char a;
    int x = 0;
    a = getchar();
    while(a !='\n'){
        a = a - '0';
        x = x*10 + a;
        a = getchar();
    }
    printf("%s",p);
    printf("%d\n",x);
}