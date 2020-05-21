//
// Created by ruirui on 20.5.20.
//

#ifndef TETRIS_BLOCK_H
#define TETRIS_BLOCK_H

//方块类
class Block {

private:
    int row;  // 行
    int col;  // 列

public:
    // 访问器：get/set函数
    void setRow(int r);
    int getRow();

    void setCol(int c);
    int getCol();

    Block(int r = 0, int c = 0); // 构造函数
    ~Block();                    // 析构函数

    void move(int r, int c); // Block移动函数

};

#endif //TETRIS_BLOCK_H
