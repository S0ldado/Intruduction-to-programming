#include <stdio.h>
#define M 6.0
#define F 96
int main(){
    int fr;
    unsigned int mat;
    double p1,p2,p3,p4,p5,p6,p7,p8,l1,l2,l3,l4,l5,t,media;
    scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d",&mat, &p1, &p2,&p3, &p4, &p5,&p6,&p7, &p8,&l1,&l2,&l3,&l4,&l5,&t,&fr);
    
    while(mat!= -1){
        media = 0.7*((p1+p2+p3+p4+p5+p6+p7+p8)/8) + (0.15*((l1+l2+l3+l4+l5)/5)) + (0.15*t);
        if((media>=M)&&(fr>F))
          printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: APROVADO\n",mat,media);
           else if((media>=M)&&(fr<F))
             printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n",mat,media);
              else if((media<M)&&(fr>F))
               printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mat,media);
                else if((media<M)&&(fr<F))
                 printf("Matricula: %u, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n",mat,media);
        
        scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d",&mat, &p1, &p2,&p3, &p4, &p5,&p6,&p7, &p8,&l1,&l2,&l3,&l4,&l5,&t,&fr);     
    }
    
    
    
    return 0;
}