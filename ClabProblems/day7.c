#include <stdio.h>
void main(){

    int s = 0,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1 ; i <= n; i++)
        s = s+i;

    printf("Sum %d", s);
}