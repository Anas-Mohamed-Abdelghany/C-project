/* this code take int numbers and return the minnimum */
#include <stdio.h>
int n = 5;
int minimum(int x[]) {
    int min = x[0];
    for (int z = 1; z < n; z++) {
        if (x[z] < min) {
            min = x[z];
        }
    }
    return min;
}
int main() {
    int x[n];
    printf("Please input 5 integer numbers to get the minimum value of them:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    printf("The smallest number is: %d\n", minimum(x));
    return 0;
}
