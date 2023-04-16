#include <stdio.h>
 
int main() {
 
    float number;
    scanf("%f", &number);
    
    if(number >= 0.0) {
        if(number > 25.0) {
            if(number > 50.0) {
                if(number > 75.0) {
                    if(number > 100.0) {
                        printf("%s\n", "Fora de intervalo");
                    } else {
                        printf("%s\n", "Intervalo (75,100]");
                    }
                } else {
                    printf("%s\n", "Intervalo (50,75]");
                }
            } else {
                printf("%s\n", "Intervalo (25,50]");
            }
        } else {
            printf("%s\n", "Intervalo [0,25]");
        }
    } else {
        printf("%s\n", "Fora de intervalo");
    }
 
    return 0;
}
