#include<stdio.h>
int Maximum(int a,int b,int c);
int Minimum(int a,int b,int c);
main()
{
    int a,b;
    int max,min;
    printf("\n Enter the first number: ");
    scanf("%d",&a);
    printf(" Enter the second number: ");
    scanf("%d",&b);
    
    max= Max(a,b);
    printf("\nThe largest number is: %d",max);
    min= Min(a,b);
    printf("\nThe smallest number is: %d",min);
}
Min(int a,int b)
{
    int min=(a < b)  ? a : b ;
    return min;
}
int Max(int a,int b,int c)
{
    int max = (a > b)  ? a : b ;
    return max;
}

