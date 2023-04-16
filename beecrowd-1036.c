#include <stdio.h>
 
int main() {
 
    double a, b, c, delta, x1, x2;
    
    scanf("%lf %lf %lf",&a, &b, &c);
    
    delta = (b*b) - 4*a*c;
    
    if(delta < 0 || a == 0) {
        printf("%s\n", "Impossivel calcular");
    } else {
        x1 = ((-1)*b + sqrt(delta))/(2*a);
        x2 = ((-1)*b - sqrt(delta))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
 
    return 0;
}
