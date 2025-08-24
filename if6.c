#include<stdio.h>
int main()
{
    int marks;

    printf("Enter marks between 0 to 100 = ");
    scanf("%d",&marks);

    if(marks >= 70)
    {
        printf("student grade = distinction");
    }
    else if(marks >= 60)
    {
        printf("student grade = first");
    }
    else if(marks >= 50)
    {
        printf("student grade = second");
    }
    else if(marks >= 35)
    {
        printf("student grade = third class");
    }
    else{
        printf("FAIL!!");
    }

    return 0;
}