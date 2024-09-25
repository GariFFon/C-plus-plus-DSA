//
//  Pascal_Triangle.cpp
//  Suhani_Ma'am
//
//  Created by Gourav Dash on 24/08/24.
//

#include <stdio.h>
//
void printPascalsTriangle(int n) {
    for (int line = 0; line < n; line++) {
        for(int j=0; j< n-line;j++)
        {
            printf(" ");
        }
        int value = 1; // First value in each line is always 1
        for (int i = 0; i <= line; i++) {
            printf("%d ", value);
            value = value * (line - i) / (i + 1); // Calculate the next value
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main23() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printPascalsTriangle(n);

    return 0;
}

#include <stdio.h>
//
//int main23()
//{
//    int i,j,k;
//    int rows = 5;
//
//    // outer loop for rows
//    for (i = 1; i <= rows; i++) {
//
//        // inner loop 1 for leading white spaces
//        for (j = 0; j < rows - i; j++) {
//            printf(" ");
//        }
//
//        int C = 1; // coefficient
//
//        // inner loop 2 for printing numbers
//        for (k = 1; k <= i; k++) {
//            printf("%d ", C);
//            C = C * (i - k) / k;
//        }
//        printf("\n");
//    }
//    return 0;
//}
