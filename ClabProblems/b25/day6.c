#include <stdio.h>
#include <math.h>

void main(){

/*int input;
printf("Enter the number: ");
scanf("%d", &input);
*/

/*

if(input % 2 == 0){
	printf("is even");
}else{
	printf("is odd");
}

*/

/*
char ch;
printf("Enter the character: ");
scanf("%c", &ch);

if(ch >= '0' && ch <= '9'){
	printf("%c is a digit", ch);
}else if(ch >= 'A' && ch <= 'Z'){
	printf("%c is a capital alphabet", ch);
}else if(ch >= 'a' && ch <= 'z'){
	printf("%c is a lower case alphabet", ch);
}else{
	printf("%c is a special character", ch);
}

*/

/*
int input2;
printf("Enter the number: ");
scanf("%d", &input2);

if(input > input2){
	printf("%d is the greatest", input);
}else{
	printf("%d is the greatest", input2);
}
*/

/*
int input3;
printf("Enter the number: ");
scanf("%d", &input3);
*/

/*

if(input>input2){
	if(input>input3){
		printf("%d is the greatest", input);
	}else{
		printf("%d is the greatest", input3);
	}
}else if{
	if(input2>input3){
		printf("%d is the greatest", input2);
	}else{
		printf("%d is the greatest", input3);
	}
}else{
	printf("%d is the greatest", input3);
}
*/

//a,b,c
/*
float x1. x2,D;
D = b^2 - (4*a*c)
if(D<0){
	D = -D
	
}else{
	x1= (-b + sqrt(D))/2a
	x2= (-b - sqrt(D))/2a
	printf(" x = %f and x = %f are the two solutions of the equation.",x1,x2);-
}

*/

/*
switch(input){
	case 1:
		printf("Monday");	
	break;	
	case 2:
		printf("Tuesday");	
	break;	
	case 3:
		printf("Wednesday");	
	break;	
	case 4:
		printf("Thursday");	
	break;	
	case 5:
		printf("Friday");	
	break;	
	case 6:
		printf("Saturday");	
	break;
	case 7:
		printf("Sunday");	
	break;	
	default:
		printf("Invalid");
}
*/

/*
char ch;
printf("Enter the character: ");
scanf("%c", &ch);

if(ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e'){
	printf("%c is a vowel", ch);
}else if(ch >= 'a' && ch <= 'z'){
	printf("%c is a consonant", ch);
}else{
	printf("%c is a not an alphabet", ch);
}
*/

/*
int a, b, opp;

printf("Enter the integer for operations of 1 for add, 2 for subtract, 3 for multiply, 4 for division: ");
scanf("%d", &opp);

printf("Enter the number: ");
scanf("%d", &a);


printf("Enter the number: ");
scanf("%d", &b);


switch(opp){
	case 1:
		printf("%d is the sum", a+b);
	break;
	case 2:
		printf("%d is the difference", a-b);
	break;
	case 3:
		printf("%d is the multiply", a*b);
	break;	
	case 4:
		printf("%d is the divide", a/b);
	break;
	default:
		printf("Invalid Input");
}

*/
int year;
printf("Enter the year: ");
scanf("%d", &year);

if(year % 100 == 0 && year%400 != 0){
	printf("leap");

}else if(year % 100 != 0 && year % 4 == 0){
	printf("leap");
}


}
