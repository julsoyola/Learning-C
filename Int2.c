#include <stdio.h>

//We will be scanning, storing, and printing ints or integers
// We will also be adding the var

//Why do we need a main function?
int main()
{
//Print statement w/ a '\n'
  printf("Hi I'm leaarning C\n\n");
  printf("Let's do some math\n\n");

//Intializing the Var to start at 0 so we don't get 
// a garbo number
  int a=0, b=0, c=0;

//Try with both, see if you get the same output
//Un comment Below:
    // int a;
    // int b;
    // int c;

  //Scan in each varialbe
  printf("Type in a number for a then b: \n");
  scanf("%d %d", &a, &b);

//Assign c
  c = a+b;

//Declaring multiple vars in one print statement
  printf("%d=%d+%d\n\n", c, a, b);

//Why should we have a return 0 or any return at all??
  return 0;

}