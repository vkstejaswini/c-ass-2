#include<stdio.h>
void main()
{
	name();
	address();
}
void name()

{
int i;
char name[5];
	for(i=0;i<=4;i++){
		
		scanf("%c",&name[i]);
	}
	for(i=0;i<=5;i++){
		
		printf("%c",name[i]);
	}
	
}
void address()
{
int j;
char address[20];	
	for(j=0;j<=19;j++){
		
		scanf("%c",&address[j]);
	}
	for(j=0;j<=19;j++){
		
		printf("%c",address[j]);
	}
	
}

