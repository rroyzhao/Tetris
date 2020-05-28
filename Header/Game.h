//
// Created by ruirui on 20.5.28.
//

#ifndef TETRIS_GAME_H
#define TETRIS_GAME_H

#include "./Blocks.h"
#include "./Board.h"
#include "./GameUI.h"

class Game {

private:
    Blocks *blocks;     // 多种方块
    Board *board;       // 游戏棋盘
    GameUI *gameUi;     // 游戏界面

public:
    Game();             // 构造函数
    ~Game();            // 析构函数
    void startGame();   // 启动游戏
    void startTetris(); // 开始游戏
};

#endif //TETRIS_GAME_H
