//show arguments
#include <stdio.h>

int main(int argc, char* argv[]){

	//print argc
	printf("\nN. argumentos: %d\n\n", argc);

	//print all the arguments
	for(int i=0; i<argc; i++){
		printf("%d: %s\n", i, argv[i]);
	}

	return 0;
}
