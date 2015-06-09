#include<stdio.h>
int rect(int a,int b)
{
int s=a*b;
return s;
}

int zfx(int a)
{
int s=rect(a,a);
return s;
}


int main()
{
int a=3;
int b=4;
int s=zfx(a);
printf("%d\n",s);
return 0;
}
