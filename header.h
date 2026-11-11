#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st
{
//int r;
char n[30];
float p;
struct st *next;
}sll;
extern void sort(sll *);
extern void show(sll *);
extern void menu();
extern void add(sll **,int *);
extern void save(sll *);
extern void del(sll **);
extern void del1(sll **);
extern void rev(sll **);
extern void mod(sll **);