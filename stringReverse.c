#include<stdio.h>
#include<string.h>
//void stringReverse(char str[]);
int main()
{
    char str[100];
    gets(str);
    stringReverse(str);
    return 0;
}


void stringReverse(char str[])
{
    char temp;
    int l,u,len;
    len = strlen(str);
    l=0;
    u=len-1;
    for(int i=0;i<(len/2);i++)
    {
        temp =str[l];
        str[l]=str[u];
        str[u]=temp;
        l++;
        u--;
    }
    printf("%s",str);
}