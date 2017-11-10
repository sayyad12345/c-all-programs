#include<stdio.h>

long factorial(int);

int main()

{
int number;
long fact=1;

 printf("Enter a number to calculate it's factorial\n");
scanf("%d",&number);
printf("%d!=%ld\n",number,factorial(number));
return 0;
}

long factorial(int number)

{
int c;
long result=1;
for (c=1;c<=number;c++)
result=result*c;

return result;
}
