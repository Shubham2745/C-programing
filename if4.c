#include<stdio.h>
int main()
{
    int x;

    printf("Enter value of x : ");
    scanf("%d",&x);

    if(x % 7 == 0)
    {
        printf("valid");
    }
    else
    {
        printf("not valid!!");
    }

    return 0;
}