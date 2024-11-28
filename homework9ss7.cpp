#include <stdio.h>

int main() {
    int row, col;
    printf("Moi nhap so hang ");
    scanf("%d", &row);
    printf("Moi nhap so cot ");
    scanf("%d", &col);

    int array[row][col];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("array[%d][%d] ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for(int j = 0; j < col; j++) {
        printf("%d ", array[0][j]);
    }

    for(int i = 1; i < row - 1; i++) {
        printf("%d ", array[i][0]);
        for(int j = 1; j < col - 1; j++) {
            printf("  ");
        }
        printf("%d ", array[i][col - 1]);
    }

    if (row > 1) {
        for(int j = 0; j < col; j++) {
            printf("%d ", array[row - 1][j]);
        }
    }

    return 0;
}

