#include <stdio.h>

int main(void) {
    int a, b, c;
    int temp;

    while (1) {
        if (scanf("%d %d %d", &a, &b, &c) != 3) break;

        if (a == 0 && b == 0 && c == 0) break; 


        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        
        if (a * a + b * b == c * c) {
            printf("right\n");
        } 
        else {
            printf("wrong\n");
        }
    }
    
    return 0;
}