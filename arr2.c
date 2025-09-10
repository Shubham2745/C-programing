#include<stdio.h>
int main()
{
    int a[10],i;

    printf("Enter 10 values : ");

    for (i=0 ; i<10 ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d %d %d\n",a[3],a[6],a[8]);
    return 0;
}