#include <stdio.h>

int main(){
  int x, conti, contp, somai, somap;
  float mp,mi;
  scanf("%d",&x);
  conti = contp = somai = somap = 0;
  
  while(x!=0){
    if(x%2==0){
        contp++;
        somap += x;
    }else{
        conti++;
        somai += x;
    } 
    scanf("%d",&x);
  }
  if(contp==0){
      mp = 0;
  }else{
      mp = (float)somap/contp;
  }
  if(conti==0){
      mi = 0;
  }else{
      mi = (float)somai/conti;
  }
    printf("MEDIA PAR: %f\n",mp);
    printf("MEDIA IMPAR: %f\n",mi);
return 0;
}