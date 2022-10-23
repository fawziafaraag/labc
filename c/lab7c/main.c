#include <stdio.h>
#include <stdlib.h>

typedef struct employee{

int id;
char name[20];
int salary;

}employee;


int main()
{
    printf(" C Program that has Array of pointers to struct Employee. (Array of pointers to struct) Array size is 3.\n");
   // employee emp;
     employee arr[3];
   // employee *arr[3]=(line *) malloc (3 *sizeof(employee));

    for(int i=0;i<3;i++){
        printf("enter employee id::\n");
        scanf("%d",&arr[i].id);
        printf("enter employee name::\n");
        scanf("%s",&arr[i].name);
        printf("enter employee salary::\n");
        scanf("%d",&arr[i].salary);

    }
    for(int i=0;i<3;i++){
        printf("enter %d employee id::",i);
        printf("%d\n",arr[i].id);
        printf("enter %d employee name::",i);
        printf("%s\n",arr[i].name);
        printf("enter %d employee salary::",i);
        printf("%d\n",arr[i].salary);

    }
/*
        printf("C Program to calculate sum of student degrees, and average of each subject.\n");
        int std,sub;
        printf("number of students::");
        scanf("%d",&std);
        printf("number of subjects::");
        scanf("%d",&sub);
        int **arr=(int **) malloc(std *sizeof(int*));
        for(int index = 0; index < sub; index++)
          {
        arr[index] = (int*) malloc(sub*sizeof(int));
           }
        int degree_std[sub];

        for(int i=0;i<std;i++){
            printf("enter degree of %d student::\n",i);
            degree_std[i]=0;
        for(int j=0;j<sub;j++){
            scanf("%d",&arr[i][j]);
            degree_std[i]+=arr[i][j];

        }}

        float avg[std];
        for(int i=0;i<std;i++){
        printf("sum of %d student degree::",i);
        printf("%d\n",degree_std[i]);
        printf("avg of %d stuject degree::",i);
        avg[i]=degree_std[i]/sub;
        printf("%f\n",avg[i]);
        }





*/
    return 0;
}
