#include <stdio.h>

// using nested loops print this out
int main() 
{
  int size = 10;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        
        if(i == 0 || i == size - 1|| j== 0 || j == size - 1|| i == j || i == (size - 1) )
        {
          printf("x");
        }
        else
        {
          printf(" ");
        }
        
    }
    printf("\n");
}

}