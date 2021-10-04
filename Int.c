
#include <stdio.h>

//We wil be scanning, storing, and printing ints or integers
// We will also be adding the var



//Why do we need a main function? 
int main() 
{
  //Print statement w/ a '\n'
  printf("Hi I am learning C\n\n");

  printf("Let's do some Math\n\n");

//Intializing the Var to start at 0 so we don't get 
// a garbo number
  int a = 0;
  int b = 0;
  int c = 0;

//Try with both, see if you get the same output
//Un comment Below:
    // int a;
    // int b;
    // int c;

  //scan in each variable
  printf("Type in a then b\n");

  scanf("%d", &a);
  scanf("%d", &b);

   printf("\n");

//assign c 
  c = a + b;

  printf("Thank you!\n\n");

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  //Declaring multiple var in one print statement
  printf("%d = %d + %d\n\n", c, a, b);



// why should we have a return 0 or a return at all?
  return 0;
}