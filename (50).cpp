#include <stdio.h>
long sum(int);
int main() {
	int a;
	printf("\n enter the a number:");
	scanf("%d", &a);
	printf("\n enter the sum of the %d numbers:",a,sum(a));
	return 0;
}
long sum (int n) {
	if(n==0)
	return 1;
	else
	return (n*sum(n-1));
}
