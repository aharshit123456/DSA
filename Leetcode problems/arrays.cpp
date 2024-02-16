#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    //Syntax for creating a dynamic array

    /*
        dataType *nameOfTheDynamicArray;

    */


   int *myDynamicArray;
   myDynamicArray = new int[3];

   myDynamicArray[0] = 100; 
   myDynamicArray[1] = 200; 
   myDynamicArray[2] = 300; 

   for(int i = 0; i<3 ; i++){
    printf("%d \n", myDynamicArray[i]);
   }

   return 0;
}
