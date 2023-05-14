#include<stdio.h>

int main (){

	int num;
	float fl;
	char ch;
//pointer
	int *numptr;
	float *flptr;
	char *chptr;

	num = 154;
	fl = 78.5;
	ch = 'g';

	numptr = &num;
	flptr = &fl;
	chptr = &ch;
//print output
	printf("*numptr : %d ",*numptr);
	printf("\nnumptr  : %d ",numptr);
	printf("\n&numptr : %d ",&numptr);

    printf("\n\n*flptr : %f ",*flptr);
	printf("\nflptr  : %d ",flptr);
	printf("\n&flptr : %d ",&flptr);

    printf("\n\n*chptr : %d ",*chptr);
	printf("\nchptr  : %d ",chptr);
	printf("\n&chptr : %d ",&chptr);

// summation one value
	(*chptr)++;
	(*numptr)++;
	(*flptr)++;

	printf("\n\nValue of ch : %c\n",ch);
    printf("Value of num : %d\n",num);
    printf("Value of fl : %f\n",fl);

	return ;
}
