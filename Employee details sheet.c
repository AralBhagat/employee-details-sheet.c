#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int phone number;
    int age;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //Phone number
        printf("phone number: ");
        scanf("%d",&employees[i]. phone number);
        //Age
        Printf("age:");
        Scanf("%d", employee [i].age);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("phone number \t: ");
        printf("%d \n",employees[i]. phone number);
        
        printf("age \t: ");
        printf("%d \n",employees[i].age);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
