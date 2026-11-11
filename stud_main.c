#include"header.c"
int main()
{
sll *det=0;
int j=1,k=0;
char c;
while(1)
{
menu();
scanf(" %c",&c);
switch(c)
{
case 't':
case 'T':sort(det);break;
case 'm':mod(&det);break;
case 'M':mod(&det);break;
case 'R':rev(&det);break;
case 'r':rev(&det);break;
case 'd':del1(&det);break;
case 'D':del1(&det);break;
case 'l':del(&det);break;
case 'L':del(&det);break;
case 'a':
add(&det,&j);
break;
case 'A':
add(&det,&j);
break;
case 's':
show(det);
break;
case 'S':
show(det);
break;
case 'v':
save(det);
break;
case 'V':
save(det);
break;
case 'e':
printf("Enter your choice\n");
printf("s/S:save and exit\n");
printf("e/E:exit\n");
scanf(" %c",&c);
switch(c)
{
case 's':save(det);
return 0;
case 'S':save(det);
return 0;
case 'e':return 0;
case 'E':return 0;
}
break;
case 'E':
printf("Enter your choice\n");
printf("s/S:save and exit\n");
printf("e/E:exit\n");
scanf(" %c",&c);
switch(c)
{
case 's':save(det);
return 0;
case 'S':save(det);
return 0;
case 'e':return 0;
case 'E':return 0;
}
break;
default:printf("Wrong option\n");
}
}
l1:
return 0;
}