//
// Created by ruirui on 20.5.21.
//

#ifndef TETRIS_BOARD_H
#define TETRIS_BOARD_H

#include "./Blocks.h"

class Board {

private:
    int **pGameBoard; // 二维数组

public:
    Board();   // 构造函数
    ~Board();  // 析构函数
    int removeRow(); // 消除行
    void downRow(int row);  // 下落， 参数为从第Row行开始下落
    void insertBlocks(Blocks *pBlocks); // 把blocks放入棋盘
    void deleteBlocks(Blocks *pBlocks); // 把blocks删除
    bool isInserting(Blocks *pBlocks);  // 是否可以在当前位置插入blocks
};

#endif //TETRIS_BOARD_H
