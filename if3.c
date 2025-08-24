#include<stdio.h>
int main()
{
    int g_sal,allo,ded,N_sal;

    printf("Enter value of goss salary : ");
    scanf("%d",&g_sal);

    if(g_sal > 10000)
    {
        allo = g_sal*0.1;
        ded = g_sal*0.03;
        printf("net salary is = %d",(g_sal+allo-ded));
    }
    else if(g_sal > 5000)
    {
        allo = g_sal*0.07;
        ded = g_sal*0.02;
        printf("net salary is = %d",(g_sal+allo-ded));
    };

    return 0;
}