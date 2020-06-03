//
// Created by ruirui on 20.5.28.
//

#include "../Header/Game.h"

#include "../Header/Common.h"
#include "../Header/OBlocks.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

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
    createBlock(); // 随机生成Blocks

    while (1) {
        if (this->board->isInserting(this->blocks)) {
            board->insertBlocks(blocks);
        }
        this->gameUi->TetrisGame(this->board);
        board->deleteBlocks(blocks);
        blocks->moveDown();
        // 按键操作

    }
}

void Game::createBlock() {
    srand((unsigned) time(NULL)); // time() --时间戳
    int randNumber = rand() % BLOCKNUMBER + 1;
    switch (randNumber) {
        case 1:
            // 生成田字形方块
            blocks = new OBlocks();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
    }
}

