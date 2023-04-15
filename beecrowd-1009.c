#include <stdio.h>
 
int main() {
    char name;
    double salary, sales, TOTAL;
    
    scanf("%s %lf %lf", &name, &salary, &sales);
    
    TOTAL = salary + sales*0.15;
    
    printf("TOTAL = R$ %.2f\n", TOTAL);
 
    return 0;
}
