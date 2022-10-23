#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("C Program to calculate sum of student degrees, and average of each subject.\n");
        int std;
        printf("number of students::");
        scanf("%d",&std);
        int *arr=(int *) malloc(std *sizeof(int));
        int sub;
        for(int i=0;i<std;i++){

        printf("number of subjects::%d\n",i);
        scanf("%d",&sub);


       /* for(int index = 0; index < sub; index++)
          {
        arr[index] = (int*) malloc(sub*sizeof(int));
           }*/
        int degree_std=0;
       // float degree_subs[sub];
        for(int i=0;i<sub;i++){
            printf("enter degree of %d sub::\n",i);
            scanf("%d",&arr[i]);
            degree_std+=arr[i];

        }

     /*   for(int i=0;i<sub;i++){
             degree_subs[i]=0;
         for(int j=0;j<std;j++){
            degree_subs[j]+=arr[j][i];

        }}*/
        float avg;
        printf("sum of %d student degree::",i);
        printf("%d\n",degree_std);
        printf("avg of %d stuject degree::",i);
        avg=degree_std/sub;
        printf("%f\n",avg);
        }





    return 0;
}
