#include<stdio.h>
#include<Windows.h>
#include<unistd.h>
int main()
{
    char c[]={"belated pongal wishes "};
    int delay;
    for (delay= 0; c[delay] != '\0'; delay++)
    {
        printf("%c", c[delay]);
        Sleep(100);
    }
    return 0;
}

