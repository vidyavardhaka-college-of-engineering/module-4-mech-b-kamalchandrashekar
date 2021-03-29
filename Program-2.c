// Program to add information of student and display marks

//Input: 10 20 30
 //Output: 10 20 30
#include<stdio.h>  
struct student  
{  //char name[10];
    //int id;
    int marks;  
}s[100];  
int main()  
{  
  struct student s1,s2,s3; 
  int i; 
   
// Read the marks of three students
 scanf("%d %d %d",&s1.marks,&s2.marks,&s3.marks);
  printf("  %d %d %d",s1.marks,s2.marks,s3.marks);
   
  return 0;
}  
