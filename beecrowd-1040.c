#include <stdio.h>
 
int main() {
    double n1, n2, n3, n4, media;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    media = (n1*2 + n2*3 + n3*4 + n4)/10;
    
    printf("Media: %.1lf\n", media);
    
    if(media >= 5.0) {
        if(media >= 7.0) {
            printf("%s\n", "Aluno aprovado.");
        } else {
            printf("%s\n", "Aluno em exame.");
            
            double exame, mediaFinal;
            scanf("%lf", &exame);
            
            printf("Nota do exame: %.1lf\n", exame);
            
            mediaFinal = (media + exame)/2;
            
            if(mediaFinal >= 5.0) {
                printf("%s\n", "Aluno aprovado.");
            } else {
                printf("%s\n", "Aluno reprovado.");
            }
            
            printf("Media final: %.1lf\n", mediaFinal);
        }
    } else {
        printf("%s\n", "Aluno reprovado.");
    }
    
 
    return 0;
}
