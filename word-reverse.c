//reverse word in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    wordReverse(str);
    return 0;
}

void wordReverse(char str[])
{
    int len,i,j,count=0;
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    count=count+1;
    char s[count][100];
    int m=0,n=0;
    for(i=0;i<=len;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            s[m][n]=str[i];
            n++;
        }
        else
        {
            s[m][n]='\0';
            m++;
            n=0;
        }
    }
    for(i=count-1;i>=0;i--)
    {
        j=0;
        while (s[i][j]!='\0')
        {
            printf("%c",s[i][j]);
            j++;
        }
        printf(" ");
    }
}