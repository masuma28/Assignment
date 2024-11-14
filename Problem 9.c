#include<stdio.h>
int main(){
int angle1,angle2,angle3;
scanf("%d%d%d",&angle1,&angle2,&angle3);
if (angle1+angle2>angle3)
if (angle2+angle3>angle1)
if (angle1+angle3>angle2)
printf("It is valid triangle");
else
printf("It is not valid triangle");
return 0;
}
