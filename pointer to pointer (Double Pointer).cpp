#include <stdio.h>
int main ()
{
	int x=10;
	int *p;
	int **q;
	p=&x;
	printf("Value of x=%d",x);
	printf("\n Address of x=%u", &x);
	printf("\n Value of x=%d", *p);
	printf("\n Address of x (or value of p)=%u",p);
	printf("\n Address of p=%u", &p);
	q=&p;
	printf("\n Value of x=%d", **q);
	printf("\n Address of x=%u", *q);
	printf("\n Address of p=%u", q);
	return 0;
}
