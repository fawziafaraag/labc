#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct line{
int x1,x2,y1,y2;

}line;
void change_Position(line *L, int newX, int newY){

float lenth=  (float)sqrt(pow((*L).x2 - newX, 2) + pow((*L).y2 - newX, 2));
printf("line Length::%f\n",lenth);


}

void line_length(line *l){

float lenth=  (float)sqrt(pow((*l).x2 - (*l).x1, 2) + pow((*l).y2 - (*l).y1, 2));
printf("line Length::%f\n",lenth);


}

int main()
{/*
  printf("C Program have a function changes the position of the first point\n");
  line L;
  int x,y;
  printf("enter x1::\n");
  scanf("%d",&L.x1);
  printf("enter y1::\n");
  scanf("%d",&L.y1);
  printf("enter x2::\n");
  scanf("%d",&L.x2);
  printf("enter y2::\n");
  scanf("%d",&L.y2);
  printf("enter newx::\n");
  scanf("%d",&x);
  printf("enter newy::\n");
  scanf("%d",&y);
  printf("the new coordinates::\n(%d,%d)\n(%d,%d)\n",x,y,L.x2,L.y2);
  change_Position(&L,x,y);
*/
  printf("C Program that asks the user for number of Lines he want line is a struct, each line have 2 points\n");
  int n;
  printf("enter number of line::\n");
  scanf("%d",&n);
  line *p=(line *) malloc (n *sizeof(line));
  for(int i=0;i<n;i++){

    // scanf("%d",&*(p+i));
      printf("the x1 point \t");
      scanf("%d", &(p+i)->x1);
      printf("the y1 point \t");
      scanf("%d", &(p+i)->y1);
      printf("the x2 point \t");
      scanf("%d", &(p+i)->x2);
      printf("the y2 point \t");
      scanf("%d", &(p+i)->y2);
  }
  for(int i=0;i<n;i++){
    line_length((p+i));
  }

    return 0;
}
