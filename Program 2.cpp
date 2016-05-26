#include <stdio.h>
#include <stdlib.h>

int main ()

{

float b,h,a;


	printf("Area of a Triangle");
	printf("\n\nEnter Base and Height: ");
	scanf("%f%f", &b,&h);
	a=b*h/2;
	
	printf("The area is %.2f",a);
	
	return 0;
	system ("PAUSE");
}
