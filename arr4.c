#include<stdio.h>
int main()
{
    int n,i,rs;
    int _500 = 0;int _200 = 0;int _100 = 0;
    int _50 = 0;int _20 = 0;int _10 = 0;
    int _5 = 0;int _2 = 0;int _1 = 0;

    printf("Enter amount : ");
    scanf("%d",&n);
    printf("total amount is : %d\n",n);

    for(i=0 ; i<=n ; i++)//for 500 rs...
    {
        if(n>=500)
        {
            rs = n - 500;
            _500++;
        }
        n = rs;
    }

    printf("total uses notes of 500 is = %d\n",_500);

    for(i=0 ; i<=n ; i++)//for 200 rs...
    {
        if(n>=200)
        {
            rs = n - 200;
            _200++;
        }
        n = rs;
    }

    printf("total uses notes of 200 is = %d\n",_200);

    for(i=0 ; i<=n ; i++)//for 100 rs...
    {
        if(n>=100)
        {
            rs = n - 100;
            _100++;
        }
        n = rs;
    }

    printf("total uses notes of 100 is = %d\n",_100);

    for(i=0 ; i<=n ; i++)//for 50 rs...
    {
        if(n>=50)
        {
            rs = n - 50;
            _50++;
        }
        n = rs;
    }

    printf("total uses notes of 50 is = %d\n",_50);

    for(i=0 ; i<=n ; i++)//for 20 rs...
    {
        if(n>=20)
        {
            rs = n - 20;
            _20++;
        }
        n = rs;
    }

    printf("total uses notes of 20 is = %d\n",_20);

    for(i=0 ; i<=n ; i++)//for 10 rs...
    {
        if(n>=10)
        {
            rs = n - 10;
            _10++;
        }
        n = rs;
    }

    printf("total uses notes of 10 is = %d\n",_10);

    for(i=0 ; i<=n ; i++)//for 5 rs...
    {
        if(n>=5)
        {
            rs = n - 5;
            _5++;
        }
        n = rs;
    }

    printf("total uses notes of 5 is = %d\n",_5);

    for(i=0 ; i<=n ; i++)//for 2 rs...
    {
        if(n>=2)
        {
            rs = n - 2;
            _2++;
        }
        n = rs;
    }

    printf("total uses notes of 2 is = %d\n",_2);

    for(i=0 ; i<=n ; i++)//for 1 rs...
    {
        if(n>=1)
        {
            rs = n - 1;
            _1++;
        }
        n = rs;
    }

    printf("total uses notes of 1 is = %d\n",_1);

    printf("total minimum notes are %d\n",_500+_200+_100+_50+_20+_10+_5+_2+_1);
    
    return 0;
}