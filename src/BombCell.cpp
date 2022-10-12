#include "BombCell.h"

BombCell::BombCell()
{
    this->x = 0;
    this->y = 0;
    this->type = CellType::BOMB;
    this->value = 'B';
}

BombCell::BombCell(int _x, int _y, char _value)
{
    this->x = _x;
    this->y = _y;
    this->type = CellType::BOMB;
    this->value = _value;
}

void BombCell::setX(int _x)
{
    this->x = _x;
}

void BombCell::setY(int _y)
{
    this->y = _y;
}

int BombCell::getX()
{
    return x;
}

int BombCell::getY()
{
    return y;
}

void BombCell::setValue(char _value)
{
    this->value = _value;
}

char BombCell::getValue()
{
    return value;
}

bool BombCell::checkCell(Cell *_cell)
{
    if (_cell->getType() == CellType::BOMB)
        return true;
    else
        return false;
}