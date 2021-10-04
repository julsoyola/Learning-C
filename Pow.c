// Always include the correct libraries 
#include<stdio.h>
#include<math.h>

// This file includes:
// POW function, scanning, ints 


//our main fxn
int main()
{
  int num1;
  int num2;

  //scan in num1 and num2
  scanf("%d", &num1);
  scanf("%d", &num2);

  // Now that we have these two numbers
  // Lets print what num1^num2 is :)
  printf("Exponent: %.2f\n", pow(num1, num2));
  
  //PSA if you are having trouble running This
  //in the Shell line make sure u have: gcc Pow.c -lm
  // The -lm will help execute :)
}
