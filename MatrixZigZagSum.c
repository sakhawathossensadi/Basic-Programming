#include<stdio.h>
int main()
{
    int n,m,i,j,k,sum=0,sum1=0,sum2=0,sum3=0;
    printf("Enter the order of the matrix : \n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Input the matrix elements : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum1=sum1+arr[0][j];
    }
    for(j=0;j<m;j++)
    {
        sum2=sum2+arr[n-1][j];
    }
    k=m-2;
    for(i=1;i<n-1;i++)
    {
        sum3=sum3+arr[i][k];
        k--;
    }
    sum=sum1+sum2+sum3;
    printf("Sum of Zig-Zag pattern : %d\n",sum);
    return 0;
}
