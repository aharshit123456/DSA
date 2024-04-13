#include <stdio.h>
#include <stdbool.h>

void main(){
int a[10], n; //Declaration of array and n


//WAP to enter 10 integers from user and display it

/**/
printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}
for(int i = 0; i < n ; i++){
	printf("%d \n", a[i]);
}

//WAP to sub the elements of array


printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}

int sum = 0;
for(int i = 0; i < n ; i++){
	sum += a[i];
}

printf("The sum is %d \n", sum);


// WAP to find the max and minumum


printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}

int max = a[0];
int min = a[0];

for(int i = 0; i < n ; i++){
	if(max < a[i])
		max = a[i];
		
	if(min > a[i])
		min = a[i];
}

printf("The max and min are %d and %d \n", max,min);


//WAP to search an element in an array
printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}
int k;
printf("Enter the number you want to find in the array: ");
scanf("%d", &k);
bool flag = false;
for(int i = 0; i < n ; i++){

	if(a[i] == k){
		printf("Found %d at %dth position of array.", k, i+1);
		flag = true;
		break;
		}
}
if(flag != true)
	printf("Didn't find %d in array", k);




//WAP to reverse the content of array (Complexity = O(2n)

printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}

int rev_a[10] ;

for(int i = 0; i < n ; i++){
	rev_a[i] = a[n-i-1];
}


for(int i = 0; i < n ; i++){
	printf("%d \n", rev_a[i]);
}


//WAP to reverse an array (Complexity = O(n)
printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}

int temp = 0;
for(int i = 0; i < n/2 ; i++){
	temp = a[i];
	a[i] = a[n-i-1];
	a[n-i-1] = temp;
}
for(int i = 0; i < n ; i++){
	printf("%d \n", a[i]);
}


// WAP to display sum of max and min element from an array
printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}

int max = a[0];
int min = a[0];

for(int i = 0; i < n ; i++){
	if(max < a[i])
		max = a[i];
		
	if(min > a[i])
		min = a[i];
}

printf("The max and min are %d and %d amd their sum is %d \n", max, min, max+min);




//Wap to swap consecutive element from an array and display modified array
printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}

int temp = 0;
for(int i = 0; i < (n-1) ; i+= 2){
	temp = a[i];
	a[i] = a[i+1];
	a[i+1] = temp;
}
for(int i = 0; i < n ; i++){
	printf("%d \n", a[i]);
}

//Wap to display all odd numbers from the array followed by all even numbers

printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}
printf("The odd numbers are ");
for(int i = 0; i < n; i++){
	if(a[i]%2 != 0)
		printf("%d ", a[i]);
}
printf("The even numbers are ");
for(int i = 0; i < n; i++){
	if(a[i]%2 == 0)
		printf("%d ", a[i]);
}


// Wap to find avg from a set of numbers and count how many elements are more than average


printf("Enter the number of integers (n<10): ");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
	printf("Enter the %d th number: ", i+1);
	scanf("%d",&a[i]);
}

int sum = 0;
for(int i = 0; i < n ; i++){
	sum += a[i];
}
int avg = sum/n; 
printf("The average is %d \n", avg);

int counter = 0;
for(int i = 0; i < n ; i++){
	if(a[i] > avg)
		counter++;
}
printf("%d numbers in the array are greater than %d \n",counter, avg);


}
