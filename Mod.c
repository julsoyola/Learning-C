#include <stdio.h> 
#include <stdlib.h>
#include <time.h>


int main()
{
  // Generate a random number
  // 
  srand(time(NULL));
  
  int randomNumber = (rand() % 1000 + 1);

  if(randomNumber % 2 == 0)
  {
    printf("%d is even\n", randomNumber);
  }
  else if(randomNumber % 2 == 1)
  {
    printf("%d is odd\n", randomNumber);
  }
}