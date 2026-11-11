#include"header.c"
void add(struct st **q,int *i)
{
struct st *new;
new=malloc(sizeof(sll));
printf("----->Enter the student details<-----\n");
printf("Enter the name and marks\n");
scanf("%s %f",new->n,&new->p);
*i++;
new->next=*q;
*q=new;
}