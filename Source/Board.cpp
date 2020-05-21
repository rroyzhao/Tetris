//
// Created by ruirui on 20.5.21.
//

#include "../Header/Board.h"
#include "../Header/Common.h"

Board::Board() {
    this->pGameBoard = new int*[GAME_HEIGHT];  // 行数

    for (int row = 0; row < GAME_HEIGHT; row++) {
        pGameBoard[row] = new int[GAME_WIDTH]; // 列数

        for (int col = 0; col < GAME_WIDTH; col++) {
            pGameBoard[row][col] = EMPTY;      // 设置为空
        }
    }
}

Board::~Board() {
    for (int row = 0; row < GAME_HEIGHT; row++) {
        delete []pGameBoard[row];  // 删除指针数组
    }

    delete [] pGameBoard;          // 删除指针
}
