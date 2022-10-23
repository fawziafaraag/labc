#include <stdio.h>
#include <stdlib.h>



    int largest(int n1 , int n2,int n3){
    printf("Enter 3 number: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
         {printf("the first number is the largest\n");
         return n1;}
    else if(n2>n1&&n2>n3)
        { printf("the second number is the largest\n");
         return n2;}
    else
        { printf("the third number is the largest\n");
        return n3;}


 }
 typedef struct Emp_Dept Emp_Dept;
  struct Emp_Dept{

   char dept[20];


 };
 typedef struct Emp_Struct Emp_Struct;
  struct Emp_Struct{

   int id;
   char name[20];
   int age;
   Emp_Dept d;

 };

int main()
{/*
   printf(" write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it\n");
   int num1,num2,num3;
   printf("%d\n", largest(num1,num2,num3));


   printf("C Program to take single Employee's information, and display them\n");

   Emp_Struct emp;
   printf("enter employ id:");
   scanf("%d",&emp.id);
   printf("enter employ name:");
   scanf("%s",&emp.name);
   printf("enter employ age:");
   scanf("%d",&emp.age);
   printf("Employee's information\n");
   printf("%d\n",emp.id);
   printf("%s\n",emp.name);
   printf("%d\n",emp.age);

   printf("C Program to take information of Array of Employees, then display them.\n");
   Emp_Struct e[3];
   for(int i=0;i<3;i++){
   printf("enter%d employ id:",i);
   scanf("%d",&e[i].id);
   printf("enter%d employ name:",i);
   scanf("%s",&e[i].name);
   printf("enter %d employ age:",i);
   scanf("%d",&e[i].age);
   printf("%d Employee's information\n",i);
   printf("%d\n",e[i].id);
   printf("%s\n",e[i].name);
   printf("%d\n",e[i].age);
   }

*/

   printf("Struct inside struct (Dept has Multiple Employees)\n");
   Emp_Struct emp2;
   printf("enter employ id:");
   scanf("%d",&emp2.id);
   printf("enter employ name:");
   scanf("%s",&emp2.name);
   printf("enter employ age:");
   scanf("%d",&emp2.age);
   printf("enter employ dept:");
   scanf("%s",&emp2.d.dept);
   printf("Employee's information\n");
   printf("%d\n",emp2.id);
   printf("%s\n",emp2.name);
   printf("%d\n",emp2.age);
   printf("%s\n",emp2.d.dept);





    return 0;
}
