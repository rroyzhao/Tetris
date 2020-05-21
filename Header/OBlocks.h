//
// Created by ruirui on 20.5.21.
//

#ifndef TETRIS_OBLOCKS_H
#define TETRIS_OBLOCKS_H

#include "./Blocks.h"

class OBlocks : public Blocks {

public:
    OBlocks();
    ~OBlocks();

    virtual void rotate();      // 翻转
    virtual void rotateBack();  // 逆时针旋转
};

#endif //TETRIS_OBLOCKS_H
