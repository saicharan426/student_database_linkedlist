#include"header.c"
void mod(sll **z)
{
if(z==0)
{
printf("no records\n");
return;
}
struct st *q=*z;
char c;
printf("Select the option\n");
printf("n/N:serach by name\n");
printf("r/R:search by rollno\n");
printf("m/M:search by marks\n");
scanf(" %c",&c);
switch(c)
{
case 'n':
case 'N':
{
char s[20];
printf("enter name\n");
scanf("%s",s);
while(q)
{
if(strcmp(q->n,s)==0)
{
printf("%s %f\n",q->n,q->p);
float f;
char a[20];
printf("enter chaning name and marks\n");
scanf("%s",a);
scanf("%f",&f);
strcpy(q->n,a);
q->p=f;
break;
}
q=q->next;
}
}
break;
case 'R':
case 'r':
{
int i,j=1;
printf("enter rollno\n");
scanf("%d",&i);
while(q)
{
if(i==j)
{
printf("%s %f\n",q->n,q->p);
float f;
char a[20];
printf("enter chaning name and marks\n");
scanf("%s",a);
scanf("%f",&f);
strcpy(q->n,a);
q->p=f;
break;
}
j++;
q=q->next;
}
}
break;
case 'M':
case 'm':
{
float d;
printf("enter marks\n");
scanf("%f",&d);
while(q)
{
if(q->p==d)
{
printf("%s %f\n",q->n,q->p);
float f;
char a[20];
printf("enter chaning name and marks\n");
scanf("%s",a);
scanf("%f",&f);
strcpy(q->n,a);
q->p=f;
break;
}
q=q->next;
}
}
break;
}
}