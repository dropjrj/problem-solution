#include <iostream>
#include <cstdlib>
using namespace std;

int method = 0, queenC, castleC;
// positive imply queen, negative imply castle

bool conflict(int index, int layer, int *board) {
    for (int i = 0; i < layer; i++) {
        if (board[i] > 0 || board[layer] > 0) { // any of the pawns is queen do a full check (*)
            if (index == abs(board[i])) return true;
            if (layer + index == i + abs(board[i])) return true;
            if (layer - index == i - abs(board[i])) return true;
        }
        else {
            if (index == abs(board[i])) return true;
        }
    }
    return false;
}

/*
//print all methods
void print(int *board) {
    cout << "(" << method << ")" << endl;
    for (int i = 0; i < queenC + castleC; i++) {
        for (int j = 1; j <= queenC + castleC; j++) {
            if (board[i] > 0) {
                if (board[i] != j) cout << "_";
                else cout << "*";
            }
            else {
                if (board[i] != j * -1) cout << "_";
                else cout << "+";
            }
        }
        cout << endl;
    }
    cout << endl << endl;
}
*/

void checker(int queen, int castle, int layer, int *board) {
    if (queenC + castleC == queen + castle) {
        method++;
        //print(board);
        return;
    }
    if (queen < queenC) {
        for (int i = 1; i <= queenC + castleC; i++) {
            board[layer] = i;
            if (!conflict(i, layer, board)) {
                checker(queen + 1, castle, layer + 1, board);
            }
        }
    }
    if (castle < castleC) {
        for (int i = 1; i <= queenC + castleC; i++) {
            board[layer] = i * -1;
            if (!conflict(i, layer, board)) {
                checker(queen, castle + 1, layer + 1, board);
            }
        }
    }
}

int main(){
    cin >> queenC >> castleC;
    int board[queenC + castleC] = {0};
    checker(0, 0, 0, board);
    cout << method << endl;

    return 0;
}
