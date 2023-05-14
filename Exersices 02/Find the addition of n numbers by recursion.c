#include<stdio.h>

int getSum(int n);

int main()
{
	int n,sum;
	printf("Enter a positive interger: ");
	scanf("%d",&n);
	
	sum=getSum(n);
	printf("sum= %d",sum);
	
	return 0;
	
}

int getSum(int n){
	
	int sum;
	if(n>0)
		sum=n+getSum(n-1);

	else
		sum=n;

return sum;
}

