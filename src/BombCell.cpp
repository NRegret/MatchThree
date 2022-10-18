#include "header/BombCell.h"

BombCell::BombCell() : Cell('*'){};

BombCell::BombCell(char _value) : Cell(_value)
{
    this->value = _value;
};

char BombCell::GetValue()
{
    return this->value;
};

void BombCell::SetValue(char _value)
{
    this->value = _value;
};

void BombCell::Pop()
{
    this->value = 'X';
};
