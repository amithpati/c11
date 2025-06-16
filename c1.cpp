#include<stdio.h>
int main(){
int n1,n2,n3,n4,n5,sum;
float avg;
char name[15];
printf ("Enter Name of Student:");
scanf("%s",name);
fflush(stdin);
printf("Enter Subject 1 Marks:");
scanf("%d",&n1);
printf("Enter Subject 2 Marks:");
scanf("%d",&n2);
printf("Enter Subject 3 Marks:");
scanf("%d",&n3);
printf("Enter Subject 4 Marks:");
scanf("%d",&n4);
printf("Enter Subject 5 Marks:");
scanf("%d",&n5);
sum=n1+n2+n3+n4+n5;
avg=(float)sum/5;
printf("Total Of 5 Subject Marks:%d\n",sum);
printf("Average Of 5 Subject Marks:%.3f",avg);
return 0;
}

