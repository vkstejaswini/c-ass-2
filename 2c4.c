#include <stdio.h> 
#include <stdlib.h> 
  
void showheading(); 
int hivalue(int stu[4][5]); 
int lovalue(int stu[4][5]); 
void displaymenu()
{ 
printf("                         MENU                                  \n"); 

printf(" 1.View all student records\n"); 
printf(" 2.View a student records by ID\n"); 
printf(" 3.Show the highest and the lowest scores\n"); 
} 
void viewall(int stu[4][5]) 
{ 
 int i,j; 
 showheading(); 
 for(i=0;i<4;i++)
 { 
   for(j=0;j<5;j++)
   printf("\t%d",stu[i][j]);
   printf("\t"); 
   printf("\n"); 
 } 
} 
void viewbyid(int stu[4][5]) 
{ 
    int id,i,j; 
    int l=0; 
    printf("Please enter a student's ID:"); 
    scanf("%d",&id); 
    for(i=0;i<4;i++)
	{ 
    if(stu[i][0]==id)
	{ 
    showheading();
	l=1; 
    for(j=0;j<5;j++)
	printf("\t%d",stu[i][j]);
	printf("\t\t");
	} 
    printf("\n");
	} 
    if(l==0) printf("Not found!\n"); 
} 
showhl(int stu[4][5])
{ 
    printf("The higest final score is:%d",hivalue(stu)); 
    printf("\n"); 
    printf("The lowest final score is:%d",lovalue(stu)); 
    printf("\n"); 
} 
void showheading()
{ 
printf("\n\n");
printf("    StudentID  Quiz1  Quiz2  Mid-term  Final\n"); 
printf("    =========  =====  =====  ========  =====\n"); 
} 
hivalue(int stu[4][5])
{ 
    int max,i; 
    max=stu[0][4]; 
    for(i=0;i<4;i++) 
    if(max<stu[i][4])
    max=stu[i][4]; 
    return(max); 
    
} 
lovalue(int stu[4][5])
{ 
    int min,i; 
    min=stu[0][4]; 
    for(i=0;i<4;i++) 
      if(min>stu[i][4]) 
	  min=stu[i][4]; 
    return(min); 
} 
main(int argc, char *argv[]) 
{ 
int stu[4][5]={{1232,10,23,45,56},{2343,45,43,24,78},{2323,34,45,45,45},{3423,67,06,65,56}}; 
  displaymenu(); 
  int choice;  
  do 
  { 
    A:printf("Enter your choice(1-3):"); 
    scanf("%d",&choice); 
    switch(choice)
    { 
    case 1:viewall(stu);break; 
    case 2:viewbyid(stu);break; 
    case 3:showhl(stu);break;
    default:printf("incorrect choice plz enter cottect choice\n");
	}               
    }while(0);
	goto A;  
} 
