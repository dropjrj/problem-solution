#include <stdio.h>

int main(){
    int row, column;
    while(scanf("%d%d", &row, &column) != EOF){;
        int input[column][row];
        // 讀的順序由 for 的 i j 決定，存的位置由 input 的 i j 決定
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                scanf("%d", &input[j][i]);
            }
        }
        for(int i = 0; i < column; i++){
            for(int j = 0; j < row; j++){
                printf("%d ", input[i][j]);
            }
            puts("");
        }
    }
    
    return 0;
}
