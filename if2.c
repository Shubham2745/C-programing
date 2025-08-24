#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter 3 values : ");
    scanf("%d %d %d",&a,&b,&c);

    if( a>b && a>c)
        printf("largest number is : %d\n",a);
    else if( b>c && b>a)
        printf("largest number is : %d\n",b);
    else if( c>a && c>b)
        printf("largest number is : %d\n",c);
     if(a<b && a<c)
        printf("smallest number is : %d\n",a);
    else if(b<c && b<a)
        printf("smallest number is : %d\n",b);
    else if( c<b && c<a)
        printf("smallest number is : %d\n",c);
        else
            printf("all numbers are equale!!");
    
       return 0;
             
}