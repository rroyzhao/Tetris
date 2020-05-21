//
// Created by ruirui on 20.5.21.
//

#include "../Header/OBlocks.h"
#include "../Header/Common.h"

OBlocks::OBlocks() {
    // 田字形坐标(绝对坐标)
    block[0].setRow(0);
    block[0].setCol(GAME_WIDTH / 2);

    block[1].setRow(0);
    block[1].setCol(GAME_WIDTH / 2 + 1);

    block[2].setRow(-1);
    block[2].setCol(GAME_WIDTH / 2 + 1);

    block[3].setRow(-1);
    block[3].setCol(GAME_WIDTH / 2);
}

OBlocks::~OBlocks() {

}

//
void OBlocks::rotate() {

}

void OBlocks::rotateBack() {

}

