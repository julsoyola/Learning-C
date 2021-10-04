

#include<stdio.h>

//To Scan and print a double
int main()
{

int x;
int y;
double z;

printf("Scan in x and y\n\n");

//scan x and y
scanf("%d", &x);
scanf("%d", &y);

//Divide them
z = x/y;

//print the output
printf("%.2lf = %d / %d\n\n", z, x, y);
printf("z = %f\n\n",z);


  return 0;
}