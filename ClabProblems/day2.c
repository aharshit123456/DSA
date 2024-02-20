#include <stdio.h>
#include <math.h>

void main()
{
/*
//WAP to show area of circle
int radius;
float area;
printf("Enter radius of circle: ");
scanf("%d", &radius);
area = 3.14*radius*radius;
printf("Area of a circle with radius %d is %f \n", radius, area);
*/

/*
//WAP to convert Farenheit to Celsius
float Farenheit, Celsius;
printf("Enter temperature in Farenheit: ");
scanf("%f", &Farenheit);
Celsius = (Farenheit * 5 / 9) + 32 ;
printf("Temperature from Farenheit %3f to Celsius to %3f", Farenheit, Celsius);
*/

//WAP to show area of triangle with 3 sides
int a,b,c ;
float area, s;
printf("Enter 3 sides of the triangle (space seperated): ");
scanf("%d %d %d", &a, &b, &c);

s = (a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of the triangle with sides %d %d %d is %f", a,b,c, area);


//WAP to swap 2 numbers without using third

//WAP to swap 2 numbers by using third

//WAP to show Time in HH MM SS Format

//WAP to calculate total percentage in 5 subjects



}