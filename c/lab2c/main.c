#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    printf("************************* C Program to Check Whether a Number is Even or Odd************************\n");
    int x;
    printf("enter your number:");
    scanf("%d",&x);
    if(x%2==0)
       { printf("number is even\n");}
    else
        {printf("number is odd\n");}


    printf("************************* C Program to Find the Largest Number Among Three Numbers************************\n");
    int n1,n2,n3;
    printf("Enter 3 number: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
         {printf("the first number is the largest\n");}
    else if(n2>n1&&n2>n3)
        { printf("the second number is the largest\n");}
    else
        { printf("the third number is the largest\n");}



     printf("************************* C Program that takes the degree from user, and switch on it to print the corresponding Grade************************\n");
     int g;
     printf("enter your grade between [0,100]:");
     scanf("%d",&g);
     if(g>85)
       { printf("A => Excellent\n");}
     else if(g>75)
       { printf("B => very good\n");}
     else if(g>65)
        {printf("C => good\n");}
     else
       { printf("D => failed\n");}


     printf("************************* C Program to print total of numbers when it gets to 100. (sum)************************\n");
     int sum=0,x1;
     for(int i=1;sum<=100;i++){
        printf("enter your number:");
        scanf("%d",&x1);
        sum+=x1;

     }
     printf("the of numbers when it gets to 100 is: %d\n",sum);




      printf("*************************C Program to display simple menu.************************\n");

      int z;
      do{
         printf("1 => item1\n");
         printf("2 => item2\n");
         printf("3 => item3\n");
         printf("4 => item14\n");
         printf("5 => quit\n");

      printf("Enter your choice ");
      scanf("%d", &z);
      switch(z)
      {
        case 1:
         printf("item1\n");
         break;
        case 2:
         printf("item2\n");
         break;
        case 3:
         printf("item3\n");
         break;
        case 4:
         printf("item4\n");
         break;
        case 5:
         system("cls");
      }
      }while(z!=5);



      printf("*************************C Program to Generate Multiplication Table 1*3=3, 2*3=6, ...************************\n");
      for(int i=1;i<=12;i++){
          printf("%d*3=%d\n",i,(i*3));
      }


     printf("*************************C Program to Check Whether a Character is an Alphabet or not************************\n");
     char c;
     printf("Enter a character: ");
     c = getchar();
     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
       {printf("%c is an alphabet.\n", c);}
     else
        {printf("%c is not an alphabet.\n", c);}


     printf("*************************C Program to count number of Alphabets & number of words in a sentence.************************\n");
     char s[200];
     int count1 = 0,count2=0;

     printf("Enter the string:\n");
     scanf("%[^\n]s", s);
     for (int i = 0;s[i] != '\0';i++)
     {
        if (s[i] == ' ' && s[i+1] != ' ')
           {count1++;}
        else
            {count2++;}
     }
    printf("Number of words in given string are: %d\n", count1 + 1);
    printf("Number of characters in given string are: %d\n", count2 );
*/

    printf("*************************C Program to display MagicBox************************\n");


          int col=0,row=0,size=3;
          for(int n=1;n<=9;n++)
          {
                if(n==1)
                {
                  col =1;
                  row=(size+1)/2;
                }else if(((n-1) % size) == 0){
                  col++;
                }else{
                   row-=1;
                   col-=1;
                  if(col<= 0)
                   col = size;
                  if(row <= 0)
                   row = size;
                }
                printf("%d",n);
                printf("(%d,%d)\n",row,col);



          }

return 0;
    }

