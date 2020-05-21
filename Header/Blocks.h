//
// Created by ruirui on 20.5.21.
//

#ifndef TETRIS_BLOCKS_H
#define TETRIS_BLOCKS_H
#include "./Block.h"

class Blocks {               // Blocks代表所有田，L的父类
                             // Blocks包含Block组成关系
protected:
    Block block[4];          // 4个小block

public:
    void moveLeft();         // 向左移动
    void moveRight();        // 向右移动
    void moveDown();         // 向下移动
    virtual void rotate()=0; // 翻转

    void moveUp();           // 向上移动
    virtual void rotateBack()=0; // 逆时针旋转
};

#endif //TETRIS_BLOCKS_H
