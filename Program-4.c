//Program to find the average
//Input : 10 20 30 
   // Output :20.000000

#include <stdio.h>
struct math {
    float num1;
    float num2;
    float num3;
    float average;
};


int main()
{
    struct math enternum;
    struct math avg;
   
    scanf("%f%f%f", &enternum.num1,&enternum.num2,&enternum.num3);
     //compute and print the average
     avg.average=(enternum.num1+enternum.num2+enternum.num3)/3;
      printf("    %f",avg.average);
    return 0;
} 
