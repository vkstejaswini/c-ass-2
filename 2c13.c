#include <stdio.h>
int sum(int arr[], int start, int len);
main()
{
    int arr[100];
    int n,i,sumofarray;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);
    }
    sumofarray=sum(arr,0,n);
    printf("Sum of array elements: %d", sumofarray);
    return 0;
}
int sum(int arr[], int start, int len) 
{
    if(start>=len)
    return 0;
    return (arr[start] + sum(arr, start + 1, len));
}
