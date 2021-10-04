#include <stdio.h>

// print
// * * * * *
// * * * *
// * * *
// * *
// *
// then reverse int
// print this code check it out

int main() 
{
  int size = 10;
for (int i = 0; i < size; i++) {
    for (int j = 0; j < i; j++) {
        printf("*");
    }
    printf("\n");
}

for (int i = size; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        printf("*");
    }
    printf("\n");
    
}
// or the reverse


}