#include <stdio.h>
#include <conio.h>
struct student
   {
   	char name[20];
   	int roll;
   	float marks;
   	char remarks;
   };
int main() {
	struct student s[15];
	int i;
	float temp;
	for(i=0;i<5;i++) {
		printf("\n Enter information about students %d",i+1);
		printf("\n Name:\t");
		scanf("%s",s[i].name);
		printf("\n Roll:\t");
		scanf("%d",s[i].roll);
		printf("\n Marks:\t");
		scanf("%f",s[i].marks);
		printf("\n Remarks(P/F):\t");
		s[i].remarks=getche();
	}
	printf("\n");
	printf("\n Student name\tRoll\tMarks\t\tRemarks");
	for(i=0;i<5;i++)
	{
		printf("\n%s\t\t %d\t%f\t%c\n",s[i].name, s[i].roll, s[i].marks, s[i].remarks);
	}
	return 0;
}
