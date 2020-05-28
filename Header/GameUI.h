//
// Created by ruirui on 20.5.28.
//

#ifndef TETRIS_GAMEUI_H
#define TETRIS_GAMEUI_H

#include "./Board.h"

class GameUI {

public:
    void GameFirstUI();             // 游戏首页
    void TetrisGame(Board *pBoard); // 开始俄罗斯方块游戏
};

#endif //TETRIS_GAMEUI_H
