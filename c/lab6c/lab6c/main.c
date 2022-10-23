#include <stdio.h>
#include <stdlib.h>

int swap(int *n1 ,int *n2){

int temp;
temp=*n1;
*n1=*n2;
*n2=temp;
return 0;
}
void mularray(int arr[],int s){
    for(int i=0;i<s;i++){
        arr[i]=arr[i]*10;}
       for(int i=0;i<s;i++){
        printf("%d\n",arr[i]);}


    }
void mularrayallocate(int *p,int s){
       for(int i=0;i<s;i++){
        *(p+i)= *(p+i)*10;}
        for(int i=0;i<s;i++){
        printf("%d\n",*(p+i));

    }

}


int main()
{
  /*  printf(" C Program to swap 2 integer values. (Swap function, calling by address)\n");
    int n1,n2;
    printf("enter two number to swap::\n");
    scanf("%d %d",&n1,&n2);
    swap(&n1,&n2);
    printf("%d %d\n",n1,n2);

*/
   // printf(" C Program that takes an array of integers and pass that array to a function to print array values after multiplying them to 10.\n");
    int s;
    printf("enter array size::\n");
    scanf("%d",&s);
    int arr[s];
    printf("enter array elements:\n");
    for(int i=0;i<s;i++){

        scanf("%d",&arr[i]);
    }

    mularray(arr,s);

/*
    int *p=(int *)malloc(3* sizeof(int));

     for(int i=0;i<3;i++){

        scanf("%d",&*(p+i));
    }
     mularrayallocate( p ,3);*/

    return 0;
}
