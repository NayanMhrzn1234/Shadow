#include <stdio.h>
#include <string.h>
int main()
{
	char x[50];
	printf("Enter a string :");
	scanf("%s",x);
	strrev(x);
	printf("Reversrd the string: %s\n",x);
	return 0;
}
