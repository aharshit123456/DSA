#include <iostream>
#include <stack>
#include <string.h>
#include "stdio.h"

using namespace std;

void ReverseString(char *C, int n){
	stack<char> S;
	for(int i=0;i<n;i++){
		S.push(C[i]);
	}
	for(int i=0; i<n;i++){
		C[i] = S.top();
		S.pop();
	}
}


int main(){
	char str[30];
        printf("Enter a string: ");
	scanf("%s", str);
        ReverseString(str, strlen(str));
        printf("Output- %s \n", str);
	return 0;
}
