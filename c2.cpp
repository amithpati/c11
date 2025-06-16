#include<stdio.h>
int main(){
int p,t,r;
float si;
printf("Enter Principal Value:");
scanf("%d",&p);
printf("Enter Time(In Years):");
scanf("%d",&t);
printf("Enter Rate of Intrest:");
scanf("%d",&r);
si=(float)(p*t*r)/100;
printf("Simple Intrest:%.3f",si);
return 0;
}

