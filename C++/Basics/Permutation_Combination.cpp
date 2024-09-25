//
//  Permutation_Combination.cpp
//  Basics
//
//  Created by Gourav Dash on 04/09/24.
//

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main25() {
    int n, r;
    
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    
    int perm = permutation(n, r);
    int comb = combination(n, r);
    
    printf("P(%d, %d) = %d\n", n, r, perm);
    printf("C(%d, %d) = %d\n", n, r, comb);
    
    return 0;
}
