#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	char s[20];
	printf("\n Enter name of 5 students : \n");
	scanf("%s",s);
	char names[5] [20];
	for(i=0; i<5; i++)
	{
		printf("enter name %d", i+1);
	scanf("%s",names[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++) {
			if(strcmp(names[i], names[j])>0) {
				char temp[20];
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	printf("\n names in alphabetical order: \n");
	for(i=0; i<5; i++)
	{
		printf("%s\n", names[i]);
	}
	return 0;
}
