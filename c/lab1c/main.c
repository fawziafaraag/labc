#include <stdio.h>
#include <stdlib.h>

char str[100];
int main() {


	printf("************C Program to print 'Hello World'**********\n");
    printf("Hello world!\n");


    printf("************C Program to print ASCII number of a char**********\n");
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    printf("ASCII NUMBER OF CHAR : %d \n",ch);


    printf("************C Program to print a float number entered by the user*******\n");
    float f;
    printf("enter the float number:");
    scanf("%f",&f);
    printf("float number is : %f\n",f);



    printf("************ C Program to add two integers***********\n");
    int n1,n2;
    printf("enter the two numbers:");
    scanf("%d  %d",&n1,&n2);
    printf("sum of the two numbers: %d\n",(n1+n2));



     printf("************C Program to make simple calculations (add, sub, multiply, divid) on two integers**********\n");
    int m1,m2;
    printf("enter the two numbers:");
    scanf("%d  %d",&m1,&m2);
        //add
    printf("add of the two numbers: %d\n",(m1+m2));
       //sub
    if (m1>m2)
       printf("sub of the two numbers: %d \n",(m1-m2));
    else
       printf("sub of the two numbers: %d\n",(m2-m1));

      //multiply
    printf("multiply of the two numbers: %d\n",(m1*m2));
      //divid
    printf("divid of the two numbers: %f\n",(m1/m2));


    printf("********C Program to print Hexa of a number*********\n");
    int num;
	printf("Enter an Integer Number:");
	scanf("%d",&num);
	printf("Equivalent Hex Value: %x\n",num);



    printf("************C Program to compute Quotient and Remainder********\n");
    int num1,num2;
    printf("enter the two numbers:");
    scanf("%d  %d",&num1,&num2);
    printf("quotient :%d\n",num1/num2);
    printf("remainder :%d\n",num1%num2);



	return 0;
}
