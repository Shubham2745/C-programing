#include<stdio.h>
int main()
{
    int i,n,sum;
    float mean;

    printf("Enter natural number : ");
    scanf("%d",&n);

    sum = 0;
    for(i=n ; i<n+10 ; i++)
    {
        sum = sum + i;
    }
    printf("%d\n",sum);
    
    mean = sum*0.1;
    printf("%.2f\n",mean);

    return 0;
}