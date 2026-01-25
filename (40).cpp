#include <stdio.h>
#include <string.h>
int main()
{
	char x[20];
	printf("Enter a string:");
	scanf("%s",x);
	strupr(x);
	printf("Uppercase string: \n",x);
	return 0;
}
