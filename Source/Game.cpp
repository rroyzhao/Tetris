//
// Created by ruirui on 20.5.28.
//

#include "../Header/Game.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

Game::Game() {
    this->board = new Board();
    this->gameUi = new GameUI();
}

Game::~Game() {
    delete this->board;     // 释放指针
    delete this->gameUi;
}

void Game::startGame() {
    while (1) {

        this->gameUi->GameFirstUI(); // 显示游戏首页
        char ch;                     // 获取用户选项
        fflush(stdin);               // 清除
        cin >> ch;

        switch (ch) {
            case '1':
                // todo: 进入游戏
                startTetris();
                break;
            case '2':
                // todo: 游戏设置界面
                break;
            case '3':
                // todo: 退出游戏
                return;
            default:
                ; // 无操作
        }
    }
}

void Game::startTetris() {
    this->gameUi->TetrisGame(this->board);
}

