#include "OrdinaryCell.h"

OrdinaryCell::OrdinaryCell()
{
    x = 0;
    y = 0;
    value = 'C';
}

OrdinaryCell::OrdinaryCell(int _x, int _y, char _value)
{
    this->x = _x;
    this->y = _y;
    this->value = _value;
}

void OrdinaryCell::setX(int _x)
{
    this->x = _x;
}

void OrdinaryCell::setY(int _y)
{
    this->y = _y;
}

int OrdinaryCell::getX()
{
    return x;
}

int OrdinaryCell::getY()
{
    return y;
}

void OrdinaryCell::setValue(char _value)
{
    this->value = _value;
}

char OrdinaryCell::getValue()
{
    return value;
}

bool OrdinaryCell::checkCell(Cell *_cell)
{
    if (_cell->getType() == CellType::ORDINARY)
        return true;
    else
        return false;
}