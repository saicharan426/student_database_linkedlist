#include"header.c"
void del1(sll **p)
{
if(p==0)
{
printf("No Records Found\n");
return;
}
char c,s[20];
int i=1,j;
sll *del=*p,*q;
printf("Select your option\n");
printf("R/r:Enter roll number to delete\n");
printf("N/n:Enter name to delete\n");
scanf(" %c",&c);
switch(c)
{
case 'r':
scanf("%d",&j);
while(del){
if(j==i)
{
if(del==*p)
*p=del->next;
else
q->next=del->next;
free(del);
del=0;
return;
}
q=del;
del=del->next;
i++;
}
break;
case 'R':scanf("%d",&j);
while(del){
if(j==i)
{
if(del==*p)
*p=del->next;
else
q->next=del->next;
free(del);
del=0;
return;
}
q=del;
del=del->next;
i++;
}
break;
case 'n':
scanf("%s",s);
while(del){
if(strcmp(del->n,s)==0)
{
if(del==*p)
*p=del->next;
else
q->next=del->next;
free(del);
del=0;
return;
}
q=del;
del=del->next;
i++;
}
break;
case 'N':scanf("%s",s);
while(del){
if(strcmp(del->n,s)==0)
{
if(del==*p)
*p=del->next;
else
q->next=del->next;
free(del);
del=0;
return;
}
q=del;
del=del->next;
i++;
}
break;
}
}