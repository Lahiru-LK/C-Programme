#define SIZE 20
#include<stdio.h>
#include<string.h>


struct bookdetail
{
          char title[20];
          char author[20];
          int isbn;
          float price;

};

void display(struct bookdetail v[],int n);
void displayauthor(struct bookdetail v[],int n);

void main()
{
          struct bookdetail b[SIZE];

          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)

          {

                   printf("\t=:Book %d Detail:=\n",i+1);

                   printf("\nEnter the Book Title:\n");
                   scanf("%s",b[i].title);

                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);

                   printf("Enter the ISBN number of Book:\n");
                   scanf("%d",&b[i].isbn);

                   printf("Enter the Price of Book:\n");
                   scanf("%f",&b[i].price);

          }

          display(b,num);
          displayauthor(b,num);

}

void display(struct bookdetail v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {
              if(v[i].price<2000){
                printf("\n");
                printf("\nBooks prices of which are below Rs.2000.00.");
                printf("Book No.%d\n",t);
                printf("\t\tBook %d Name is=%s \n",t,v[i].title);
                printf("\t\tBook %d Price is=%f \n",t,v[i].price);
                printf("\n");
              }
          }
}


void displayauthor(struct bookdetail v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {
              if(v[i].author=="Kernighan"){

                printf("\n");
                printf("\nBooks prices of which are below Rs.2000.00.");
                printf("Book No.%d\n",t);
                printf("\t\tBook %d Name is=%s \n",t,v[i].title);
                printf("\t\tBook %d Price is=%f \n",t,v[i].price);
                printf("\n");
              }
          }
}
