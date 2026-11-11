#include"header.c"
void save(sll *q)
{
FILE *fp=fopen("data","w");
if(q==0)
{
printf("no records\n");
return;
}
int j=1;
while(q)
{
fprintf(fp,"%d %s %f\n",j,q->n,q->p);
q=q->next;
j++;
}
printf("Saved Successfuly\n");
}