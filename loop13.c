#include<stdio.h>
int main()
{
    int i,sum;

    sum = 0;
    for(i=1 ; i<=100 ; i++)
    {
        if(i%13 != 0)
        continue;
        sum = sum + i;
    }
    printf("%d\n",sum);
    return 0;
}