#include<stdio.h>
// Agenda 
// If and else statements
// Declaring Strimgs

int main()
{ 
  // Scan 2 numbers 
  // if the first number is greater than the second number 
  // we are going to add those two numbers together
  // else return the original numbers

  //Declare some variables
  int num1;
  int num2;
  int result;

  //Print statement to notify user what to Scan
  printf("Enter Num1\n");
  scanf("%d", &num1);
  printf("Enter num2\n");
  scanf("%d", &num2);

  //start our if statement, if num1 is greater
  //then num2 add them
  if(num1 > num2)
  {
    //add num1 + num2
    // Two ways to do this

    //1st way store using a result var 
    result = num1 + num2;
    //Now print the result
    printf("Result = %d\n" , result);

    //2nd way just adding them inside the print
    printf("Result = %d\n", num1 + num2);
  }
  //conditional for whenn num1 is not greater num2
  else
  {
    printf("Num1 is not greater than num2\n");
    //print the original numbers
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);
  }
  return 0;
}