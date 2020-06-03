//
// Created by ruirui on 20.5.20.
//

#include "../Header/Block.h"

Block::Block(int r, int c) {
    row = r;
    col = c;
}

Block::~Block() {

}

void Block::setRow(int r) {
    this->row = r;
}

int Block::getRow() {
    return this->row;
}

void Block::setCol(int c) {
    this->col = c;
}

int Block::getCol() {
    return this->col;
}

void Block::move(int r, int c) {
    this->row += r;
    this->col += c;
}

