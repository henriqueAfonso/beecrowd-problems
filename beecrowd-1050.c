#include <stdio.h>
 
int main() {
 
    int ddd;
    
    scanf("%d", &ddd);
    
    switch(ddd) {
        case 61: printf("%s\n", "Brasilia"); break;
        case 71: printf("%s\n", "Salvador"); break;
        case 11: printf("%s\n", "Sao Paulo"); break;
        case 21: printf("%s\n", "Rio de Janeiro"); break;
        case 32: printf("%s\n", "Juiz de Fora"); break;
        case 19: printf("%s\n", "Campinas"); break;
        case 27: printf("%s\n", "Vitoria"); break;
        case 31: printf("%s\n", "Belo Horizonte"); break;
        
        
        
        default: printf("%s\n", "DDD nao cadastrado"); break;
    }
 
    return 0;
}
