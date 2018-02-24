#include<stdio.h>
main()
{
char ch;
int a=2,b=3;
int e,f,g,h,i;
int *p,*q,*r,*s,*t;
e=a+b;
f=a-b;
g=a*b;
h=a/b;
i=a%b;
p=&e;
q=&f;
r=&g;
s=&h;
t=&i;
printf("enter the character:");
scanf("%c",&ch);
switch(ch)
{
	case '+':
     	printf("%d",*p);
	break;
	case '-':
		printf("%d",*q);
	break;
	case '*':
		printf("%d",*r);
	break;
	case '/':
	    printf("%d",*s);
	break;
	case '%':
	   printf("%d",*t);
	break;
	default:
	printf("NO OPERATION");
		
	
}
	
	
	
	
	
	
	
	
	
	
}
