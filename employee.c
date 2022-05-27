#include <stdio.h> 
#include <string.h> 

struct Employee { 
	char	fname[32]; 
	char	lname[32];
	char	email[80];
	int	salary;
};

void init_employees(struct Employee employees[3])
{
	
	struct Employee Employee1;
	struct Employee Employee2;
	struct Employee Employee3;
	

	strcpy( Employee1.fname, "Mac");
	strcpy( Employee1.lname, "Jones");
	strcpy( Employee1.email, "mac10@patriots.ne");
	Employee1.salary = 5000000;
	employees[0] = Employee1;	

	strcpy( Employee2.fname, "Damien");
	strcpy( Employee2.lname, "Harris");
	strcpy( Employee2.email, "harryRB@patriots.ne");
	Employee2.salary = 3000000;
	employees[1] = Employee2;

	strcpy( Employee3.fname, "Joe");
	strcpy( Employee3.lname, "Judge");
	strcpy( Employee3.email, "thejudge@patriots.ne");
	Employee1.salary = 15;
	employees[2] = Employee3;

}


int main() 
{

	struct Employee employees[3];

	printf("Initializing employees...\n");
	init_employees(employees);
	printf("Employees initialized!\n");
	
	size_t employee_count = sizeof(employees) / sizeof(employees[0]); 
	printf("\nNumber of Employees: %ld\n", employee_count);

	for (int i=0; i<employee_count; i++) {
		printf("\n%s %s\n", employees[i].fname, employees[i].lname);
	}

	return 0;
}
