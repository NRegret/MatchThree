#include "RocketCell.h"

RocketCell::RocketCell()
{
    this->x = 0;
    this->y = 0;
    this->type = CellType::ROCKET;
    this->value = 'R';
}

RocketCell::RocketCell(int _x, int _y, char _value)
{
    this->x = _x;
    this->y = _y;
    this->type = CellType::ROCKET;
    this->value = _value;
}

void RocketCell::setX(int _x)
{
    this->x = _x;
}

void RocketCell::setY(int _y)
{
    this->y = _y;
}

int RocketCell::getX()
{
    return x;
}

int RocketCell::getY()
{
    return y;
}

void RocketCell::setValue(char _value)
{
    this->value = _value;
}

char RocketCell::getValue()
{
    return value;
}

bool RocketCell::checkCell(Cell *_cell)
{
    if (_cell->getType() == CellType::ROCKET)
        return true;
    else
        return false;
}