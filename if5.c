#include<stdio.h>
int main()
{
    int N_sale,g_sale,dis;

    printf("Enter value of gross salary : ");
    scanf("%d",&g_sale);

    if(g_sale > 20000)
    {
        dis = g_sale*0.15;
        printf("net sales is = %d\n",g_sale-dis);
    }
    else if (g_sale > 10000)
    {
        dis = g_sale*0.1;
        printf("net sales is = %d\n",g_sale-dis);
    }
    else
    {
        dis = g_sale*0.05;
        printf("net sales is = %d",g_sale-dis);
    }

    return 0;
}