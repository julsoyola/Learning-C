 #include<stdio.h>
#include<math.h>

int main()
{ 
  //Scan two numbers in 
  // Print the Exp 
  // Print the sqr

//Declare
  int a;
  int b;

//Scan
scanf("%d", &a);
scanf("%d", &b);

float c = pow(a, b);

//Now lets print the exp of these two numbers
printf("Exponent a ^ b = %.2f\n", c);

//Now lets print the sqr
c = sqrt(c);
printf("Sqrt = %.2f\n", c);

  return 0;
}