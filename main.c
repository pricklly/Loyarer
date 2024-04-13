#include<stdio.h>

int x;
int assrv[3];

int main(void)
{
printf("Number assotiation world\n");
printf("Cofe Mashine\n");
scanf("%d\n",&assrv[0]);
printf("Red\n");
scanf("%d\n",&assrv[1]);
printf("River\n");
scanf("%d\n",&assrv[2]);	
for(x=2;x>0;x--)
{
printf("River %d\nRed %d\nCofe mashine %d\n",assrv[2],assrv[1],assrv[0]);	
}
}