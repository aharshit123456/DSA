#include <stdio.h>
void main(){

/*
int x;
int n;

printf("Enter a number: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
	for(int j = 1; j <= 10; j++){
		x = i * j;
		printf("%d * %d = %d \n",i,j,x);
	}
	printf("************* \n");

}
*/
/*
int a,b,c,n;
printf("Enter a number: ");
scanf("%d", &n);
a = 0;
b = 1;
printf("%d %d ", a, b);
for(int i = 1; i <= (n-2) ; i++){
	c = a + b;
	a = b;
	b = c;
	printf("%d ",c);
}
*/

/*
int fact,low, high;
printf("Enter a lower limit: ");
scanf("%d", &low);
printf("Enter a higher limit: ");
scanf("%d", &high);


for(int i = low; i <= high; i++){
	fact = 1;
	for(int j = 1; j <= i; j++){
		fact = fact * j;
	}
	printf("%d is the factorial of %d \n", fact, i);
}
*/
/*
int n;
printf("Enter a number: ");
scanf("%d", &n);
for(int i = 1;i<= n; i++ ){
	for(int j = 1; j <= i; j++){
		printf("* ");
	}
	printf("\n");
}

*/

/*
int n;
printf("Enter a number: ");
scanf("%d", &n);
char ch;

for(int i = 1;i<= n; i++ ){
	ch = 'A' ;
	for(int j = 1; j <= i; j++){
		printf("%c ", ch);
		ch++;
	}
	printf("\n");
}
*/
/*
int n;
printf("Enter a number: ");
scanf("%d", &n);
int k = 1;

for(int i = 1;i<= n; i++ ){
	for(int j = 1; j <= i; j++){
		printf("%d ", k);
		k++;
	}
	printf("\n");
}
*/
int n;
printf("Enter a number: ");
scanf("%d", &n);
for(int i = 1;i<= n; i++ ){
	for(int k = 1; k <= n-i; k++){
		printf("  ");
	}
	for(int j = 1; j <= i; j++){
		printf("* ");
	}
	printf("\n");
}


printf("Enter a number: ");
scanf("%d", &n);
for(int i = 1;i<= n; i++ ){
	for(int k = 1; k <= n-i; k++){
		printf(" ");
	}
	for(int j = 1; j <= i; j++){
		printf("* ");
	}
	printf("\n");
}

}
