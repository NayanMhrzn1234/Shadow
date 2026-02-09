#include <stdio.h>
int main() {
	struct employee
	{
		int id;
		char name[80];
		char sex;
		float salary;
	};
	struct employee e;
	printf("\n Enter data for an employee:");
	printf("\n Enter id:");
	scanf("%s",&e.id);
	printf("\n Enter employee name:");
	scanf("%s",&e.name);
	printf("\n Enter sex:");
	scanf("%s",&e.sex);
	printf("\n Enter salary:");
	scanf("%f",&e.salary);
	printf("\n ===The records of an employee is====:\n");
	printf("\n Id: %d\t",e.id);
	printf("\n Name: %d\t",e.name);
	printf("\n Sex: %c\t",e.sex);
	printf("\n Salary: %f\t",e.salary);
	return 0;
}
