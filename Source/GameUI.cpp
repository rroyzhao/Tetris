//
// Created by ruirui on 20.5.28.
//

#include "../Header/GameUI.h"
#include <iostream>
#include "../Header/Common.h"

using namespace std;

void GameUI::GameFirstUI() {
    system("cls");    // 清屏
    cout << "----------------------------------"
         << endl;
    cout << "----------1.Start Game------------"
         << endl;
    cout << "----------2.Setting---------------"
         << endl;
    cout << "----------3.Exit Game-------------"
         << endl;
    cout << "----------------------------------"
         << endl;
}

void GameUI::TetrisGame(Board *pBoard) {
    system("cls");    // 清屏
    for (int row = 0; row < GAME_WIDTH; row++) {
        for (int col = 0; col < GAME_HEIGHT; col++) {
            if (row == 0 || row == GAME_WIDTH - 1 ||
                col == 0 || col == GAME_HEIGHT - 1)
                cout << BORDER;
            else if (pBoard->getGameBoard()[row][col] == BLOCK)
                cout << BLOCKf;
            else
                cout << " ";
        }
        cout << endl;
    }
    //system("pause");
}

