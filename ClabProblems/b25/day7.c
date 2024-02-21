#include <stdio.h>

void main(){

/*
int n;
printf("Enter a number: ");
scanf("%d", &n);


for(int i=1; i<=n; i++){
printf("%d \n",i);

}



int i =1;
while(i<= n){
printf("%d \n",i);
i++ ;
}
*/

/*
int sum = 0;
for(int i=1; i<=n; i++){
sum = sum + i;
}


printf("The summation required is %d \n",sum);



int i =1;
while(i<= n){
sum = sum + i;
i++ ;
}
printf("The summation required is %d \n",sum);

*/


/*
int fact = 1;

for(int i=1; i<=n; i++){
fact = fact * i;

}

printf("The factorial required is %d \n",fact);

int i =1;
while(i<= n){
fact = fact * i;
i++ ;
}
printf("The factorial required is %d \n",fact);

int fact = 1;

for(int i=n; i>=n; i--){
fact = fact * i;

}

printf("The factorial required is %d \n",fact);


*/
/*
int sum, rem = 0;
for(int num1 = num, num >0,num/10)
{
rem = num % 10
sum = sum += rem
}
printf("The summation required is %d \n",sum);
*/

/*
int sum, rem = 0;
for(int num1 = num, num >0,num/10)
{
rem = num1 % 10
sum = sum += (rem*rem*rem)
}

if(num != sum){
printf(" %d is not an armstrong \n",num);
}
else{
printf(" %d is an armstrong \n",num);
}
*/

/*
int num;
printf("Enter a number: ");
scanf("%d", &num);

int rem = 0;
int rev_num = 0;
for(int num1 = num; num1 > 0; num1 = num1/10)
{
rem = num1 % 10;
rev_num = rev_num * 10 + rem;

}

if(num != rev_num){
printf(" %d is not a palindrome \n",num);
}
else{
printf(" %d is a palindrome \n",num);
}

*/
/*
int low, high;
printf("Enter the lower limit: ");
scanf("%d",&low);
printf("Enter the higher limit: ");
scanf("%d",&high);

for(int i = low; i < high; i++){
printf("%d \n", i);
}
*/


int unsigned n;
printf("Enter the power: ");
scanf("%d",&n);

int x;
printf("Enter the number: ");
scanf("%d",&x);

int y = x;
for(int i = 1; i< n; i++){
y = y*x ;
printf("%d \n", y);
}

printf("%d", y);



}
