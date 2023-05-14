#include<stdio.h>
#include<math.h>

 int cube();
 int cubenum,x;

int main(){
	
		printf("Enter number : ");
		scanf("%d",&x);
		
		cubenum=cube(x);
		printf("Cube number is: %d",cubenum);
	
	return 0;		
}


cube(int x){
	 int cu;
			
			cu=pow(x,3);
			
	return cu;
}