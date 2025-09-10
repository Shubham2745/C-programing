#include<stdio.h>
int main()
{
    int i,n,sum;

    printf("Enter natural number : ");
    scanf("%d",&n);

    sum = 0;
    for(i=1 ; i<=n ; i++)
    {
        sum = sum + i;
    }
    
    printf("%d\n",sum);
    return 0;
}