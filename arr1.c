#include<stdio.h>
int main()
{
    int a[5],i;

    printf("Enter 5 values : ");
    
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&a[i]);

        printf(" %d value is %d \n", i+1,a[i]);
    }
    return 0;
}