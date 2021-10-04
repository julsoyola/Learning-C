#include <stdio.h>


int main() {
 int a=1, b=5, c=0;
 while (a<b) {
 a+=2;
 b++;
 c = c + a + b;
 printf("a = %d, b = %d, c = %d\n", a, b, c);
 }
 return 0;
}
