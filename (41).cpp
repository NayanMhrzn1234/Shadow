#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100];
	char str2[100];
	printf("\n Enter first string : ");
	gets(str1);
	printf("\n Enter second string : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("Two string are the idential, which are string1-%s and string2-%s,str1,str2");
	if(strcmp(str1,str2)<0)
	printf("String1 is lexxicographically smaller than String2");
	if(strcmp(str1,str2)>0)
	printf("String1 is lexicographically greater than String2");
	return 0;
}
