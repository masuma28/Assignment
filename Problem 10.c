#include<stdio.h>
int main(){
int a1,a2,a3;
printf("Please enter 3 angle: /n");
scanf("%d%d%d",&a1,&a2,&a3);
if (a1+a2+a3==180)
printf("It is valid triangle");
else
printf("It is not valid triangle");
return 0;}
