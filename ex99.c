#include <stdio.h>

int main(){
  int mat;
  float nh,vh,sal;
  scanf("%d %f %f",&mat,&nh,&vh);
  getchar();
  while(mat!=0){
      sal = vh*nh;
      printf("%d %.2f\n",mat,sal);
      scanf("%d %f %f",&mat,&nh,&vh);
  }
return 0;
}