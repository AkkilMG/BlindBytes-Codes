#include <stdio.h>

void main() {
int fact=1,i;
printf("Enter the number");
scanf("%d",&fact);
for(i=0;i<fact;i++){fact*=i;}
}
printf(fact);
