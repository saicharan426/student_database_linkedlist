#include"header.c"
void show(sll *q)
{
if(q==0)
{
printf("no records\n");
return;
}
int j=1;
printf("------------------------------------\n");
printf("Roll.no  Name      Marks\n");
printf("------------------------------------\n");
while(q)
{
printf("%d       %s        %f\n",j,q->n,q->p);
q=q->next;
j++;
}
printf("\n");
printf("------------------------------------\n");
}