#include <stdio.h>
#include <math.h>

//Scan three numbers 
// print the volume  of a Cube
// print (Resize the cube by a 1/3)
// Print the original area 
int main()
{
float num1 = 0;//Length
float num2 = 0;//Width
float num3 = 0;//Height

printf("Enter the Length.\n");
scanf("%f", &num1);

printf("Enter the Width.\n"); 
scanf("%f", &num2);

printf("Enter the Height.\n");
scanf("%f", &num3);

float volume = num1 * num2 * num3;

printf("The volume of the cube is %.2f\n", volume);

float resized_volume = volume * 1/3;

printf("The resized volume of the cube is %.2f\n", resized_volume);

printf("The original volume of the cube is %.2f", volume);

//Print the Volume of the cube l * w * h

  return 0;
}