#include <stdio.h>
#include <string.h>
int main()
{
	char x[]="Happy New Year 2026";
	char y[50],z[50];
	printf("\n Original string: %s\n", x);
	strcpy(y,x);
	printf("\n Copied string: %s \n", y);
	strcpy(z,y);
	return 0;
}
