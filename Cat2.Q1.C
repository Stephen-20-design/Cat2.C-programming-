 //c structure 
#include<string.h>
#include<stdio.h>
struct employee {
     char name [30];
     int ID;
     char department[15];
     float salary;
     char email [40];
     };
 struct employee employee1;
 int main(){
     struct employee employee1;
     strcpy(employee1.name,"John Doe");
     strcpy(employee1.department,"human resources");
     employee1.ID=1234;
     employee1.salary=55000.50;
     
     printf("name%s\n", employee1.name);
     printf("ID%d\n", employee1.ID);
     printf("department%s\n", employee1.department);
     printf("salary%f\n", employee1.salary);
     
     return 0;
     }


 //c structure 
#include<string.h>
#include<stdio.h>
struct employee {
     char name [25];
     int ID;
     char department[20];
     float salary;
     char email [50];
     };
 struct employee employee1;
 int main(){
     struct employee employee1;
     printf("enter name");
     scanf("%s", & employee1.name);
     printf("enter ID");
     scanf("%d", & employee1.ID);
     printf("enter department");
     scanf("%s", & employee1.department);
     printf("enter salary");
     scanf("%f", & employee1.salary);
     printf("enter email");
     scanf("%s", & employee1.email);
     
     return 0;
     }
