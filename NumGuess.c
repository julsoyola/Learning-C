#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Random Number game
int main()
{
  int numGuess = 0;
  int UserGuess = 0;

  srand(time(NULL));

  int randomNumber = (rand() % 1000 + 1);

  while(UserGuess != randomNumber)
  {
    printf("what is your guess?\n");
    scanf("%d", &UserGuess);

    numGuess++;

    if(UserGuess < randomNumber)
    {
      printf("Your guess is too low\n");
    }
    else if(UserGuess > randomNumber)
    {
      printf("Your guess too high\n");
    }
    else
    {
      printf("That is right!\n");
    }
  }
printf("You took this many guesses %d\n", numGuess);
  return 0;
}