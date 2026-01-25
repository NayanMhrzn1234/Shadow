#include <stdio.h>
#include <string.h>
int main()
{
	char s1[20]="Happy";
	char s2[]="New Year 2026";
	char s3[50]="";
	printf("s1=%s\n s2=%s\n", s1,s2);
	printf("\n strcat(s1,s2) = %s\n", strcat(s1,s2));
	return 0;
}
