#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define UP 72
#define DW 80
#define END 79
#define HOME 71
#define ENTER 13

void SetColor(int ForgC)
 {
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

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
  //printf("Menu of Array_Of_Struct");

    int c=1,z=1;
    char str[3][20]={"add\n","display\n","quit\n"};
            SetColor(12);
            printf("%s \n", str[0]);
            SetColor(15);
            printf("%s \n", str[1]);
            printf("%s \n", str[2]);


   do{

     char ch = getche();

      if(ch== UP)
      {
          c--;
      }
      else if (ch== DW)
      {
          c++;
      }
      else if (ch==END)
      {
          system("cls");
      }
      else if(ch==HOME){
            c=1;
            system("cls");
            SetColor(12);
            printf("%s \n", str[0]);
            SetColor(15);
            printf("%s \n", str[1]);
            printf("%s \n", str[2]);

      }

      switch(c)
      {
        case 1:
              {
            system("cls");
            SetColor(12);
            printf("%s \n", str[0]);
            SetColor(15);
            printf("%s \n", str[1]);
            printf("%s \n", str[2]);
            if (ch==ENTER)
            {
                system("cls");
                SetColor(12);
                printf("%s \n", str [0]);
                int num;
                printf("enter num of emp:");
                scanf("%d",&num);
                Emp_Struct emp[num];
                AddEmployee(num);

                break;
            }
            else
            {
                break;
            }
            }
            break;

        case 2:
          {
            system("cls");
            SetColor(15);
            printf("%s \n", str[0]);
            SetColor(12);
            printf("%s \n", str [1]);
            SetColor(15);
            printf("%s \n", str[2]);
            if (ch==ENTER)
            {
                system("cls");
                SetColor(12);
                printf("%s \n", str [1]);
                int num;
                printf("enter num of emp:");
                scanf("%d",&num);
                Emp_Struct emp[num];
                DisplayEmployee(num);
                break;
            }
            else
            {
                break;
            }
            }
            break;
        case 3:
          {
            system("cls");
            SetColor(15);
            printf("%s \n", str[0]);
            printf("%s \n", str [1]);
            SetColor(12);
            printf("%s \n", str[2]);
           if (ch==ENTER)
            {
                system("cls");
                printf("\n");
                break;
            }
            else
            {
                break;
            }
          }
         break;
        default :
          {
            system("cls");
            SetColor(12);
            printf("%s \n", str[0]);
            SetColor(15);
            printf("%s \n", str[1]);
            printf("%s \n", str[2]);
            printf("%s \n", str[3]);
            break;}
           }

     z++;}while(z<11);






    return 0;
}
