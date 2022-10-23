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
COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int main()
{/*
    printf("C Program to take firstName and lastName from user, then displays fullName\n");
    char fname[20],lname[20],fullname[40];
    printf("enter your first name:\n");
    gets(fname);
    printf("enter your last name:\n");
    gets(lname);
    printf("%s %s",fname,lname);





    printf(" C Program to Find the Frequency of Characters in a String\n");


     char s[100];
     int c=0 , count[26] = {0};

     printf("Input a string\n");
     gets(s);

     while (s[c] != '\0') {
     if (s[c] >= 'a' && s[c] <= 'z' )
     count[s[c]-'a']++;
     c++;}

     printf("Character Count\n");

     for (c = 0 ; c < 26 ; c++)
     printf("%c \t  %d\n", c + 'a', count[c]);

*/

    printf("C Program to take char and displays if it is Normal or Extended key along with its Ascii value.\n");
    char ch = getche();
    printf("%d\n", ch);

    if(ch == -32)
    {   ch = getche();
        printf("Extended : %d", ch);

    }
    else
    {
        printf("Normal");
    }


// printf("C Program to New Colored Menu with Arrows\n");


    int c=1,z=1;
    char str[4][20]={"item1\n","item2\n","item3\n","quit\n"};
            SetColor(12);
            printf("%s \n", str[0]);
            SetColor(15);
            printf("%s \n", str[1]);
            printf("%s \n", str[2]);
            printf("%s \n", str[3]);

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
            printf("%s \n", str[3]);

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
            printf("%s \n", str[3]);
            if (ch==ENTER)
            {
                system("cls");
                SetColor(12);
                printf("%s \n", str [0]);
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
            printf("%s \n", str[3]);
            if (ch==ENTER)
            {
                system("cls");
                SetColor(12);
                printf("%s \n", str [1]);
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
            SetColor(15);
            printf("%s \n", str[3]);
           if (ch==ENTER)
            {
                system("cls");
                SetColor(12);
                printf("%s \n", str [2]);
                break;
            }
            else
            {
                break;
            }
          }
         break;
         case 4:
          {
            system("cls");
            SetColor(15);
            printf("%s \n", str[0]);
            printf("%s \n", str [1]);
            printf("%s \n", str[2]);
            SetColor(12);
            printf("%s \n", str[3]);
            if (ch==ENTER)
               {system("cls");
                SetColor(12);
                printf("%s \n", str [3]);
                break;}
            else
            {break;}
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
