#include <stdio.h>

int main () {
	char name[10], Na[10];

	 FILE *filewrite;
	 filewrite=fopen("nameDetails.txt","w+");
	 printf("Enter name: ");
	 scanf("%s",name);
	 fprintf(filewrite,"%s",name);
	 
	 fscanf(filewrite,"%s",name);
	 
	 printf("%s",name);
	
fclose(filewrite);
 return 0;
}
