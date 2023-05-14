#include <stdio.h>

int main(){

	char name[] = "Lahiru";
	int x = sizeof(name);
	
	for(int i=0; i<x; i++){
		printf("\n%c",name[i]);
	}


	return 0;
}

