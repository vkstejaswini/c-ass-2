#include<stdio.h>
int Maximum(int a,int b,int c);
int Minimum(int a,int b,int c);
main()
{
    int a,b,c;
    int max,min;
    printf("\n Enter the first number: ");
    scanf("%d",&a);
    printf(" Enter the second number: ");
    scanf("%d",&b);
    printf(" Enter the third number: ");
    scanf("%d",&c);
    max= Max(a,b,c);
    printf("\nThe largest number is: %d",max);
    min= Min(a,b,c);
    printf("\nThe smallest number is: %d",min);
}
Min(int a,int b,int c)
{
    int min=(((a < b) && (a < c)) ? a : (b < c) ? b : c);
    return min;
}
int Max(int a,int b,int c)
{
    int max = (((a > b) && (a > c)) ? a : (b > c) ? b : c);
    return max;
}

