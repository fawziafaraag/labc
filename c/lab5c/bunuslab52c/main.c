#include <stdio.h>
#include <stdlib.h>
typedef struct time {

int hour;
int minutes;
int seconds;


}time;


int main()
{

printf("C Program to Calculate Difference Between Two Time Period (Time_struct)\n");

time time[2];
printf("first time:::::\n");
printf("enter hour:\n");
scanf("%d",&time[0].hour);
printf("enter minutes:\n");
scanf("%d",&time[0].minutes);
printf("enter seconds:\n");
scanf("%d",&time[0].seconds);


printf("second time:::::\n");
printf("enter hour:\n");
scanf("%d",&time[1].hour);
printf("enter minutes:\n");
scanf("%d",&time[1].minutes);
printf("enter seconds:\n");
scanf("%d",&time[1].seconds);


int h,m,s;
h = time[0].hour - time[1].hour;
m = time[0].minutes-time[1].minutes;
s = time[0].seconds- time[1].seconds;
if(time[1].seconds>time[0].seconds){
    m--;
    s=(time[0].seconds+60)- time[1].seconds;

}
if(time[1].minutes>time[0].minutes)
{
    h--;
    m = (time[0].minutes+60)-time[1].minutes;

}
printf("different between time ::\n");
printf("%d:%d:%d",h,m,s);





    return 0;
}
