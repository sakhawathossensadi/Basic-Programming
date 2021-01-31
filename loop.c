//print 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1
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