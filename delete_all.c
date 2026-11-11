#include"header.c"
void del(sll **p)
{
if(p==0)
{
printf("No Records Found\n");
return;
}
int c=1;
sll  *del=*p;
while(del)
{
*p=del->next;
printf("node deleted:%d\n",c++);
free(del);
del=*p;
}
printf("all records deleted\n");
}