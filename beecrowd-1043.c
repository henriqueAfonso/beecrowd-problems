#include <stdio.h>
 
int main() {
 
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if(((fabsf(a-b) < c)&&(c < (a+b))) || ((fabsf(a-c) < b)&&(b < (a+c))) || (((fabsf(c-b) < a)&&( a < (b+c))))) {
        printf("Perimetro = %.1f\n", a+b+c);
    } else {
        float area = ((a+b)*c)/2;
        printf("Area = %.1f\n", area);
    }
    return 0;
}
