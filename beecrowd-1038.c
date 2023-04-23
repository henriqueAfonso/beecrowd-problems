#include <stdio.h>
 
int main() {
 
    int code, amount;
    double price;
    
    scanf("%d %d", &code, &amount);
    
    switch(code) {
        case 1: price = amount * 4.0; break;
        case 2: price = amount * 4.5; break;
        case 3: price = amount * 5.0; break;
        case 4: price = amount * 2.0; break;
        case 5: price = amount * 1.5; break;
    }
 
    printf("Total: R$ %.2lf\n", price);
    
    return 0;
}
