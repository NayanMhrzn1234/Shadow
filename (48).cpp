#include <stdio.h>
long fact(int);
int main() {
	int a;
	printf("\n enter the a number:");
	scanf("%d", &a);
	printf("\n enter the factorial of the %d number is %d",a,fact(a));
	return 0;
}
long fact(int n) {
	if(n==0)
	return 1;
	else
	return (n* fact(n-1));
}
