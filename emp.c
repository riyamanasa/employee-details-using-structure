#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int salary;
    int number;
 
} Employee;
 
int main()
{
    int i, n=3;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s",employees[i].name);
    
        printf("Age: ");
        scanf("%d",&employees[i].age);
        
        printf("Number: ");
        scanf("%d",&employees[i].number);
 
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        
        printf("\n");
    }
    printf("\n");
    {
        printf("Name \t Age \t Number \t Salary");
         for(i=0; i<n; i++)
        printf("%s\t%d\t%d\t%d",employees[i].name,employees[i].age,employees[i].number,employees[i].salary);
        printf("\n");
    }
 
    return 0;
 
}
