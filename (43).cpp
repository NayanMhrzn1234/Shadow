#include <stdio.h>
#include <string.h>
int main()
{
	char x[30];
	int length,i,vowel=0,consonant=0;
	printf("\n Enter a string1: ");
	scanf("%s",x);
	length=strlen(x);
	printf("\n length of the string is: %d", length);
	for(i=0; i<length; i++)
	{
		if(x[i]=='a'|| x[i]=='e'|| x[i]=='i'|| x[i]=='o'|| x[i]=='u') {
			vowel++;
			printf("\n %c is a vowel",x[i]);
		} else {
			consonant++;
		}
	}
	printf("\n Total number of vowels: %d", vowel);
		printf("\n Total number of consonants: %d\n", consonant);
		return 0;
}
