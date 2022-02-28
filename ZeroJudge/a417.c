#include <stdio.h>
#include <string.h>

void clockwise(int);
void counterclockwise(int);

int main()
{
    int task, size, mode;
    void (*f[3])(int) = {clockwise, counterclockwise};
    scanf("%d", &task);
    for (; task > 0; task--) {
        scanf("%d%d", &size, &mode);
        (*f[mode - 1])(size);
        puts("");
    }

    return 0;
}

void clockwise(int size) {
    int cube[size][size];
    memset(cube, 0, sizeof(cube));
    cube[0][0] = 1;
    int x, y, turn, sign;
    x = y = 0;
    turn = sign = 1;
    for (int value = 2; value <= size * size; value++) {
        if (turn % 2) {
            if ((y == size - 1 && sign == 1) || (y == 0 && sign == -1) || cube[x][y + sign]) {
                turn++;
            }
        }
        else {
            if ((x == size - 1 && sign == 1) || (x == 0 && sign == -1) || cube[x + sign][y]) {
                turn++;
                sign *= -1;
            }
        }
        
        if (turn % 2) {
            y += sign;
        }
        else {
            x += sign;
        }
        
        cube[x][y] = value;
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%5d", cube[i][j]);
        }
        puts("");
    }
}

void counterclockwise(int size) {
    int cube[size][size];
    memset(cube, 0, sizeof(cube));
    cube[0][0] = 1;
    int x, y, turn, sign;
    x = y = 0;
    turn = sign = 1;
    for (int value = 2; value <= size * size; value++) {
        if (!(turn % 2)) {
            if ((y == size - 1 && sign == 1) || (y == 0 && sign == -1) || cube[x][y + sign]) {
                turn++;
                sign *= -1;
            }
        }
        else {
            if ((x == size - 1 && sign == 1) || (x == 0 && sign == -1) || cube[x + sign][y]) {
                turn++;
                
            }
        }
        
        if (!(turn % 2)) {
            y += sign;
        }
        else {
            x += sign;
        }
        
        cube[x][y] = value;
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%5d", cube[i][j]);
        }
        puts("");
    }
}
