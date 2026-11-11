#include"header.c"
void sort(sll *q)
{
if(q==0)
{
printf("no records\n");
return;
}
sll *p1=q,*p2,*b=q,t;
int i=0,j,k;
while(b)
{
i++;
b=b->next;
}
char c;
printf("slect your option\nN/n:sort with name\np/P:sort with percentage\n");
scanf(" %c",&c);
switch(c)
{
case 'n':
case 'N':
for(j=0;j<i-1;j++)
{
p2=p1->next;
for(k=0;k<i-1-j;k++)
{
if(strcmp(p1->n,p2->n)==1)
{
strcpy(t.n,p1->n);
t.p=p1->p;
p1->p=p2->p;
strcpy(p1->n,p2->n);
p2->p=t.p;
strcpy(p2->n,t.n);
}
p2=p2->next;
}
p1=p1->next;
}

break;
case 'P':
case 'p':
for(j=0;j<i-1;j++)
{
p2=p1->next;
for(k=0;k<i-1-j;k++)
{
if(p1->p>p2->p)
{
strcpy(t.n,p1->n);
t.p=p1->p;
p1->p=p2->p;
strcpy(p1->n,p2->n);
p2->p=t.p;
strcpy(p2->n,t.n);
}
p2=p2->next;
}
p1=p1->next;
}
break;
}
}