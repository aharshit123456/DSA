/*
Array manipulations

insert() delete() leftshift()

*/

#include <stdio.h>

void insert(int a[10]){


}



void main(){



// declaration of array
int a[10], n;

printf("Enter number of elements in array (n<10)): ");
scanf("%d", &n);


printf("Enter the numbers below - \n");
for(int i = 0; i < n ; i++)
	scanf("%d", &a[i]);


/*
// insertion at position pos from user
int item, pos;

printf("Enter the pos of new element in array: ");
scanf("%d", &pos);	
printf("Enter the new element in array: ");
scanf("%d", &item);
		
n = n +1;
for(int i = n; i >= pos ; i--)
	a[i+1] = a[i];

a[pos] = item ;

for(int i = 0; i < n ; i++)
	printf("%d \n", a[i]);
*/


// deletion at pos


/* remove duplicates (two pointers solution)
step 1 : binary sort the array
step 2 : remove duplicates using two pointer

Time complexicity = O(n)
*/


/* remove duplicates (brute force solution)
Time complexicity = O(n^3)
*/

for(int i = 0; i< n-1; i++){
	for(int j = i +1
                                            
}



/*
Matrix - 2D Array
*/


int a[10], n;

printf("Enter number of elements in array (n<10)): ");
scanf("%d", &n);


printf("Enter the numbers below - \n");
for(int i = 0; i < n ; i++)
	scanf("%d", &a[i]);

int sec_small = 

}


