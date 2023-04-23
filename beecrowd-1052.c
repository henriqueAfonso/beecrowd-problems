#include <stdio.h>
 
int main() {
 
    int month;
    
    scanf("%d", &month);
    
    switch(month) {
        case 1: printf("%s\n", "January"); break;
        case 2: printf("%s\n", "February"); break;
        case 3: printf("%s\n", "March"); break;
        case 4: printf("%s\n", "April"); break;
        case 5: printf("%s\n", "May"); break;
        case 6: printf("%s\n", "June"); break;
        case 7: printf("%s\n", "July"); break;
        case 8: printf("%s\n", "August"); break;
        case 9: printf("%s\n", "September"); break;
        case 10: printf("%s\n", "October"); break;
        case 11: printf("%s\n", "November"); break;
        case 12: printf("%s\n", "December"); break;
    }
 
    return 0;
}
