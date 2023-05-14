#include <stdio.h>
int main()
{ 
int sum = 0;

const int MAX_SIZE=10;
 int arr[MAX_SIZE]; //Declares an array of MAX_SIZE
 int i;
 /* Reads size and elements in array */
 printf("Enter %d elements in the array : ");
 for(i=0; i< MAX_SIZE; i++) {
 scanf("%d", &arr[i]);
 }
 /* Prints all elements of array */
 printf("\nElements in array are: ");
 for(i=0; i<MAX_SIZE; i++) {
 printf("%d, ", arr[i]);
 }
 
  //Sum of array.

 
 for(i=0; i<MAX_SIZE; i++) {
 	sum = sum + arr[i] ;
 }
  printf("\nSum of numbers array : %d",sum);
 
  return 0;
} 