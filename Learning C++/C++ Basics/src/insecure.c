#include <stdio.h>
#include <unistd.h>

void hackMe(){

}

int insecure(){
	
	char buffer[200];
	int input;
	input = read(0, buffer,400);
	printf("\n[+] user supplied: %d bytes!",input);
	printf("\n[+] buffer content --> %s!", buffer);
	return 0;
}


int main(int argc, char* argv[]){

	insecure();
	return 0;
}

