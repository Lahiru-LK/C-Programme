#include<stdio.h>

int factorial(int f);

void main(){

	int answer,f;
		
	printf("Enter number : ");
	scanf("%d",&f);
	
	answer=factorial(f);

printf("%d",answer);		
}


int factorial(int num)
{
	int value;
	
	if(num!=0){
		
		value=num*factorial(num-1);
	}
	else{
			value=1;
	}
	return value;
}
/*#include<stdio.h>
int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, multiplyNumbers(n));
    return 0;
}

int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}*/
