#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("C Program to take an array elements from user, then print them out\n");
    printf("enter your array size:");
    int s,n;
    scanf("%d",&s);
    printf("enter your array element:\n");
    int arr[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&n);
        arr[i]=n;
    }
    printf("your array:\n");
    printf("[");
    for(int i=0;i<s;i++)
    {
     printf("%d   ",arr[i]);
    }
    printf("]\n");







    printf("C Program to find the maximum value of array elements\n");
    printf("enter your array size:");
    int sss,n4;
    scanf("%d",&sss);
    printf("enter your array element:\n");
    int array1[sss];
    for(int i=0;i<sss;i++)
    {
        scanf("%d",&n4);
        array1[i]=n4;
    }
    printf("your array:\n");
    printf("[");
    for(int i=0;i<sss;i++)
    {
     printf("%d   ",array1[i]);
    }
    printf("]\n");

    int temp= array1[0];
    for(int i=1;i<sss;i++)
    {
    if(array1[i]>temp)
    {
        temp = array1[i];
    }
    }
    printf("the maximum value of array ::%d\n",temp);







    printf("C Program to add two matrix and put the result in a third one, then print the result\n");
    int s1,n1,n2;
    printf("enter your array size:");
    scanf("%d",&s1);
    int arr1[s1][s1],arr2[s1][s1],arr3[s1][s1];
    printf("enter your first matrix element:\n");
    for(int i=0;i<s1;i++)
    {for(int j=0;j<s1;j++)
    {
        scanf("%d",&n1);
        arr1[i][j]=n1;
    }}
    printf("enter your second matrix element:\n");
    for(int i=0;i<s1;i++)
    {for(int j=0;j<s1;j++)
    {
        scanf("%d",&n2);
        arr2[i][j]=n2;
    }}

    for(int i=0;i<s1;i++)
    {for(int j=0;j<s1;j++)
    {
    arr3[i][j]=arr1[i][j]+arr2[i][j];

    }}
    printf("sum of two array:\n");
    printf("[");
    for(int i=0;i<s1;i++)
    {{for(int j=0;j<s1;j++)
    {
     printf("%d   ",arr3[i][j]);
    }
    printf("\n");
    }

    }
    printf("]\n");


    printf("C Program to find Sum & Average of 2D Array\n");
    printf("enter your 2D array size:");
    int ss1,ss2,num,sum=0;
    scanf("%d",&ss1);
    scanf("%d",&ss2);
    int array[ss1][ss2];
    printf("enter your array element:\n");
    for(int i=0;i<ss1;i++)
    {
    for(int j=0;j<ss2;j++)
    {
        scanf("%d",&num);
        array[i][j]=num;
        sum+=num;
    }
    }
    printf("array sum::%d\n",sum);
    float avg= sum/(ss1*ss2);
    printf("array average::%f\n",(sum/avg));




    return 0;
}
