#include"header.c"
void rev(sll **p)
{
if(p==0)
{
printf("No Records Found\n");
return;
}
int i,c=0;
sll **a,*t=*p;
while(t)
{
c++;
t=t->next;
}
t=*p;
if(c>1)
{
a=malloc(sizeof(sll*)*c);
for(i=0;i<c;i++)
{
a[i]=t;
t=t->next;
}
for(i=c-1;i>=0;i--)
a[i]->next=a[i-1];
a[0]->next=0;
*p=a[c-1];
}
}