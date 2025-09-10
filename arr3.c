#include<stdio.h>
int main()
{
    int a[5],i,c;

    printf("Enter 5 values : ");
    
    for(i=0 ; i<5 ; i++)
    {
     scanf("%d",&a[i]);
    }

    printf("original arrey : \n");

    for(i=0 ; i<5 ; i++)
    printf("%d \n",a[i]);

    do
    {
        c = 0;

        for(i=0 ; i<=3 ; i++)
        {
            if(a[i] > a[i+1])
            {
            int t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
            c++;
            }
        }
    }while(c);

    printf("sorted arrey : \n");
    
    for(i=0 ; i<5 ; i++)
    printf("%d \n",a[i]);
    
    return 0;
}