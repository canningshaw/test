#include<stdio.h>
int global=0;

int rect(int a,int b)
{
static int count=0;
count++;
global++;
int s=a*b;
return s;

}

int zfx(int a)
{
static int count=0;
count++;
global++;
int s=rect(a,a);
return s;

}


int main()
{
int count=0;
int a=3;
int b=4;
int *pa=&a;
int *pb=&b;
int *pglobal=&global;
int (*pzfx)(int a)=&zfx;
int s=zfx(a);
printf("%d\n,%d\n",s,count);
return 0;
}
