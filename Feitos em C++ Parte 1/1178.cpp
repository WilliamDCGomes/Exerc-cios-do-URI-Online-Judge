#include <stdio.h>
int main() {
    double n[100];
    int i;
    scanf("%lf", &n[0]);
    printf("N[0] = %.4f\n", n[0]);
    for(i = 1 ; i < 100 ; i++){
        n[i] = n[i-1] / 2.0;
        printf("N[%i] = %.4f\n", i, n[i]);
    }
    return 0;
}
