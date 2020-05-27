//
// Created by ruirui on 20.5.21.
//

#include "../Header/Blocks.h"

void Blocks::moveLeft() {  // 向左移动一步
    for (auto & i : block) {
        i.move(0, -1);
    }
}

void Blocks::moveRight() {  // 向右移动一步
    for (auto & i : block) {
        i.move(0, +1);
    }
}

void Blocks::moveDown() {  // 向下移动一步
    for (auto & i : block) {
        i.move(+1, 0);
    }
}

void Blocks::moveUp() {    // 向上移动一步
    for (auto & i : block) {
        i.move(-1, 0);
    }
}

Block *Blocks::getBlock() {
    return this->block;
}

