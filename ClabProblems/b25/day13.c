#include <stdio.h>

void main(){

int a[3][3] ;

// WAP to take input of 1 matrix and display it

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		printf("enter element %d %d: ", i+1,j+1);
		scanf("%d", &a[i][j]);
	}
}

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		printf("%d ",a[i][j]);
	}
	printf("\n");
}

/* WAP to display the following types of outputs based on user choice
	0. Exit
	1. Sum of row
	2. Sum of column
	3. Major diag
	4. Minor diag
	5. Lower TM
	6. Upper TM

int choice;
printf("These are the available options: \n 0. Exit \n 1. Sum of row \n 2. Sum of column \n 3. Major diag \n 4. Minor diag \n 5. Lower TM \n 6. Upper TM \n");

while(1){
printf("Kindly choose from these options:");
scanf("%d", &choice);
}*/


// 2 WAP to display Sum of rows and Sum of columns

for(int i = 0; i<3; i++){
	int sumR = 0;
	for(int j = 0; j<3; j++){
		sumR += a[i][j];
	}
	printf("%d", sumR);
}

for(int i = 0; i<3; i++){
	int sumC = 0;
	for(int j = 0; j<3; j++){
		sumC += a[j][i];
	}
	printf("%d", sumC);
}

// 3 WAP to display major and minor diagonal
for(int i = 0; i<3; i++){
	printf("%d", a[i][i]);
}

for(int i = 0; i<3; i++){

	for(int j = 0; j<3; j++){
		if(i+j == 2){
			printf("%d", a[i][j]);
		}
	}
	printf("\n");
}

// 4 WAP to display lower and upper triangular matrix

for(int i = 0; i<3; i++){

	for(int j = 0; j<3; j++){
		if(i > j){
			printf("%d", a[i][j]);
		}
	}
	printf("\n");
}

for(int i = 0; i<3; i++){

	for(int j = 0; j<3; j++){
		if(i < j){
			printf("%d", a[i][j]);
		}
	}
	printf("\n");
}

// 5. WAP to transpose a matrix -> aij = aji
int b[3][3] ;
for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		b[j][i] = a[i][j];
	}
}
printf("Transposed Matrix is : \n");
for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		printf("%d ", b[i][j]);
	}
	printf("\n");
}

//2 MATRICES

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		printf("enter element %d %d: ", i+1,j+1);
		scanf("%d", &b[i][j]);
	}
}

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		printf("%d ",b[i][j]);
	}
	printf("\n");
}

int c[3][3] ;
// 6. Add 2

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		c[i][j] = a[i][j] + b[i][j];
	}
	printf("\n");
}

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		printf("%d ",c[i][j]);
	}
	printf("\n");
}

// 7. Multiply 2 Complexity O(n^3) 

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		for(int l = 0; l <3; l++){
			c[i][j] += a[i][l] * b[l][j];
		}
	}
	printf("\n");
}

for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		printf("%d ",c[i][j]);
	}
	printf("\n");
}

// 8. check 2 matrices are same or not
int flag;
for(int i=0; i < 3;i++){
	for(int j = 0; j < 3; j++){
		if(a[i][j] != b[i][j]){
			flag = 1;
			break;
		}
	}
}
if(flag ==0){
	printf("Same matrices");
}else{
	printf("Not same matrices");
}
printf("\n");

}
