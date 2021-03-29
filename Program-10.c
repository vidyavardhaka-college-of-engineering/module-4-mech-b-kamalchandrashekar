//To store n elements in an array and print the elements using pointer.
// Input : 5 4 6 1 7 3       
// Output: 4 6 1 7 3                                                    
                                                                                                                                                   
                                                                                  
#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   
   scanf("%d",&n);
  
   for(i=0;i<n;i++)
      {
	   scanf(" %d",&arr1[i]);
	  }
   
   for(i=0;i<n;i++)
      {
	 //print the array elements
   printf("%d ",arr1[i]);
	  }
	   return 0;
}
