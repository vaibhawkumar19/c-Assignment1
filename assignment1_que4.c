//4. WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.
// Author Name:- Vaibhaw kumar
#include<stdio.h>
int main()
{
	int r;
	float a;
	printf("Enter the radious of circle ");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("Area of circle is %f having the radius %d",a,r);
	return 0;
}
