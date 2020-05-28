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

// 消除行
int Board::removeRow() { // 原理：逐行判断
    int col;
    for (int row = 0; row < GAME_HEIGHT - 1; row++) { // 遍历每一行(去除边界)
        for (col = 1; col < GAME_WIDTH - 1; col++) {  // 遍历每一列(去除边界)
            if (col == GAME_WIDTH - 1)
                downRow(row);
        }
    }
    return 0;
}

// row行开始下落
void Board::downRow(int row) {
    for (int r = row; r > 1; r--) { // 最上面(0行)为空
        for (int c = 0; c < GAME_WIDTH - 1; c++) {
            this->pGameBoard[r][c] = this->pGameBoard[r - 1][r];
        }
    }
    for (int c = 1; c < GAME_WIDTH - 1; c++) {
        this->pGameBoard[1][c] = EMPTY; // 第一行(0行)全部清空
    }
}

// 插入blocks
bool Board::insertBlocks(Blocks *pBlocks) {
    if (isInserting(pBlocks)) {
        for (int i = 0; i < 4; i++) {
            int row = pBlocks->getBlock()[i].getRow();
            int col = pBlocks->getBlock()[i].getCol();
            pGameBoard[row][col] = BLOCK;
        }
        return true; // 插入成功
    }
    return false;    // 插入失败
}


// 删除blocks
void Board::deleteBlocks(Blocks *pBlocks) {
    for (int i = 0; i < 4; i++) {
        int row = pBlocks->getBlock()[i].getRow();
        int col = pBlocks->getBlock()[i].getCol();
        pGameBoard[row][col] = EMPTY;
    }
}

// 判断是否可以插入blocks
bool Board::isInserting(Blocks *pBlocks) {  // true:可以放置
    for (int i = 0; i < 4; i++) {           // false:不可以放置
        int row = pBlocks->getBlock()[i].getRow(); // 插入行
        int col = pBlocks->getBlock()[i].getCol(); // 插入列
        if (row == 0 || row == GAME_WIDTH - 1 ||
            col == 0 || col == GAME_HEIGHT - 1 ||
            pGameBoard[row][col] != EMPTY) {

            return false;
        }
    }
    return true;
}

int **Board::getGameBoard() {
    return this->pGameBoard;
}

