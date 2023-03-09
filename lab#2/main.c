/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
typedef struct employee{
    int em_id;
    char em_name[10];
    int em_age;
    char em_phone[12];
    float em_salary;
}employee_t;

void employee_info(employee_t my_emp){
    printf("%d\n",my_emp.em_id);
    printf("%s\n",my_emp.em_name);
    printf("%d\n",my_emp.em_age);
    printf("%s\n",my_emp.em_phone);
    printf("%f\n",my_emp.em_salary);
}
int main()
{
    employee_t employee;
    printf("%d\n",(int)sizeof(employee_t));
    employee.em_id=23;
    strcpy(employee.em_name,"IU Lee");
    employee.em_age=18;
    strcpy(employee.em_phone,"0937123456");
    employee.em_salary=1000.30;
    employee_info(employee);
    return 0;
}
