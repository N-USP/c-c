#include<stdio.h>
int get()
{
    char a;
    int x = 0;
    a = getchar();
    //There may be possibility that the input starts with whitespace
    //In this case variable x will be whitespace (with your code), so need to skip those whitespaces
    while (a == ' ')
    {
        a = getchar();
        // You may add some debug code like `printf` somewhere
    }
    while(a != ' ')
    {
        a = a - '0';
        x = x*10 + a;
        a = getchar();
    }
    return x;
}

int main()
{
    int i = 0;
    int input = 0;
    int max = 0;
    while(i < 10)
    {
        input = get();
        if (max < input)
        {
            max = input;
        }
        ++i;
    }

    printf("Max number is: %d\n", max);
}
