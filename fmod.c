#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>


//our main fxn
int main()
{
  
  // Declare our var
  int num1;
  int num2;

  // seed and generate a random numbers
  srand(time(NULL));

   num1 = (rand() % 5);
   num2 = (rand() % 5);

  double exponent =  pow(num1, num2);
  // Now that we have these two numbers
  // Lets print what num1^num2 is :)
  printf("Exponent: %.2lf\n", exponent);
  
  // how do we convert the double and mod it
  // the % does not support doubles

  // we can use fmod
  double remainder = fmod(exponent, 2.0);

  // so now if the remainder == 0 or 1 we know how to check 
  // if its even or odd
  // now find if its even or odd

  if(remainder  == 0)
  {
    printf("%.2lf is even\n", exponent);
  }
  else if(remainder == 1)
  {
    printf("%.2lf is odd\n", exponent);
  }

  return 0;
  
}