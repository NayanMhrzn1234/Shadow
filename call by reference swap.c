#include <stdio.h>
void swap (int*,int*);
int main () {
	int a,b;
a=99,b=89;
printf("\n Before function calling , a and b: %d\t %d", a,b);
swap(&a, &b);
printf("\n After function calling , a and b are: %d\t %d", a,b);
return 0;
}
void swap (int *x, int *y) {
	int temp;
	temp= *x;
	*x=*y;
	*y=temp;
	printf("\n The value of within function are: %d\t%d", x,y);
}
