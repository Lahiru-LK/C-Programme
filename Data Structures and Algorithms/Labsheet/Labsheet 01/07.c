#include<stdio.h>

int a = 46;
int b = 89;
int x = 34;
int y = 71;

//user de4fine function
void change(int x, int y);
void pchange(int *a, int *b);

void main (){

    printf("Swapping: x = %d, y = %d\n", x, y);
    printf("Swapping: a = %d, b = %d\n\n", a, b);
    
//calling user define funtion with paramitr
    change(x,y);
    pchange(&a,&b);

    printf("\npass the parameters \nSwapping: a = %d, b = %d\n\n", a, b);

}

void change(int x, int y){

    int te = x;
    x = y;
    y = te;

    printf("\npass the parameters \nSwapping: x = %d, y = %d\n\n", x, y);
}

void pchange(int *a, int *b){

    int te;
    te = *b;
    *b = *a;
    *a = te;

}
