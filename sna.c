#include<stdio.h>
main()
{
	int n,i,sum=0,a,c;
	float avg=0;
	printf("enter how many numbers you waant to insert");
	scanf("%d",&n);
	printf("enter the input");
	scanf("%d",&a);
	sum=sum+a;
	for(i=0;i<n-1;i++)
	{
		printf("enter the input");
		scanf("%d",&c);
		sum=sum+c;
		if(a<c)
		{
			c=a;
		}
		if(a>c)
		{
			a=c;
		}
	//	n--;
	}
		if(a>c)
	{
		avg=(float)(sum/n);
		printf("sum=%d\navg=%f\nmin=%d",sum,avg,c);
	}
	else
	{
		avg=(float)(sum/n);
		printf("sum=%d\navg=%f\nmin=%d",sum,avg,a);
	}
}

