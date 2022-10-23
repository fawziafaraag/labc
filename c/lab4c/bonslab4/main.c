#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("C Program to Copy String Without Using strcpy()\n");
    char str1[20]="fawzia",str2[20];
    for(int i=0;i<20;i++){
        str2[i]=str1[i];
    }
    printf("%s",str2);

    int c=0;
    printf("\nC Program to Find the Length of a String without Using strlen()\n");
    char str[20]="fawzia";
    for(int i=0;i<20;i++)
    {
        if(str[i]!='\0')
        c++;

    }
    printf("%s\n",str);
    printf("%d",c);

    printf("C Program to Remove all Characters in a String Except Alphabet\n");
    char string[20]= {};
    scanf("%s",&string);
    for(int i=0;string[i]!='/0';i++)
    {
    if ((string[i] >= 'a' && string[i] <= 'z') || (string[i]>= 'A' && string[i]<= 'Z'))
       {printf("%c", string[i]);}
      else {

      }
    }










    return 0;
}
