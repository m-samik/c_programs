//return function struct
#include <stdio.h>
struct Employee {
int Id;
char status;
};
Employee data(Employee E)
{

E.Id = 45;
E.status='A';
return (E);
}
int main()
{
struct Employee Emp;
Emp = data(Emp);

printf("Employee Id: %d",Emp.Id);
printf("\nEmployee Status: %c",Emp.status);
}
