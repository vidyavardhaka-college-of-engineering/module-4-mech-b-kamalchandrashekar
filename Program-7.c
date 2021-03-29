//Program in C to find the maximum number between two numbers using a pointer.
//Input: 7 21   
// Output: 21 is the maximum number                                                                           


#include <stdio.h>
#include <stdlib.h>
void main()
{	
 int fno,sno,*ptr1=&fno,*ptr2=&sno;
 
 scanf("%d%d", ptr1,ptr2);
//write the code for testing the condition
if(fno>sno)
 {
  printf("%d is the maximum number",*ptr1);
 }
 else
 {
  printf("  %d is the maximum number",*ptr2);
 }
}
