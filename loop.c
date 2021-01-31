#include<stdio.h>
int main()
{
    int i,val=2;
    for(i=1;i<20;i++)
    {
        if(i<=10)
        {
            printf("%d ",i);
        }
        else
        {
            printf("%d ",(i-val));
            val=val+2;
        }
    }
    return 0;
}