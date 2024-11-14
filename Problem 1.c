#include<stdio.h>
int main(){
int number;
printf("Enter any number\n: ");
scanf("%d",&number);
if (number%5==0)
printf("Number is divisible by 5");
else
printf("Number is not divisible by 5");
return 0;
}
