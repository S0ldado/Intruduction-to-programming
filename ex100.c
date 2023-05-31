#include <stdio.h>

int main(){
  double n,ei,r,ra,e;
  scanf("%lf", &n);
  scanf("%lf", &ei);
  e = 1;
  r = 1;
  while(e > ei){
    ra = (r + (n/r))/2.0;
    e = (ra*ra)-n;
    printf("r: %.9lf, err: %.9lf\n",ra, e);
    r = ra;
  }
return 0;
}
