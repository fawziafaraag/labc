#include <stdio.h>
#include <stdlib.h>


typedef struct Emp_Struct Emp_Struct;
struct Emp_Struct{
   int id;
   char name[20];
   int age;

 };
int AddEmployee(int num){

   Emp_Struct e[num];
   for(int i=0;i<num;i++){
   printf("enter%d employ id:",i);
   scanf("%d",&e[i].id);
   printf("enter%d employ name:",i);
   scanf("%s",&e[i].name);
   printf("enter %d employ age:",i);
   scanf("%d",&e[i].age);

   }
return num;

};
int DisplayEmployee(int num){

   Emp_Struct emp[num];
   for(int i=0;i<num;i++){
   printf("%d Employee's information\n",i);
   printf("%d\n",emp[i].id);
   printf("%s\n",emp[i].name);
   printf("%d\n",emp[i].age);
   }
   return num;

};
int main()
{
    printf("try to divide Ass#2 into 2 functions:\n");
    int num=3;
    Emp_Struct emp[num];
    AddEmployee(num);
    DisplayEmployee(3);

    return 0;
}
