#include <stdio.h>
void change(int*);
int main() {
	int a=10;
	change(&a);
	printf("%d", a);
	return 0;
}
void change(int *x) {
	*x=20;
}
