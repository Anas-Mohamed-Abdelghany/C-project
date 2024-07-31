/* this code take int numbers and return the maximum */
#include <stdio.h>
int n = 5;
int maximum(int x[]) {
    int max = x[0];
    for (int z = 1; z < n; z++) {
        if (x[z] > max) {
            max = x[z];
        }
    }
    return max;
}
int main() {
    int x[n];
    printf("Please input 5 integer numbers to get the maximum value of them:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    printf("The biggest number is: %d\n", maximum(x));
    return 0;
}
