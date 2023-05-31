#include <stdio.h>

int main()
{
    int a,b,anos;
    scanf("%d",&a);
    scanf("%d",&b);
    anos = 0;
    while(a<b){
        a = a*1.03;
        b = b*1.015;
        anos = anos + 1;
    }
    
    printf("ANOS = %d\n",anos);
    
    
    
    return 0;
}
