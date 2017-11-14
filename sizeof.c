

#include<stdio.h>

int main() {
   float a = 3.14, *fptr;
   fptr = &a;

   printf("Size of Float Pointer : %d", sizeof(fptr));
   return (0);
}
