#pragma once

#include <iostream>

class Cell
{
public:
    Cell(char _value = ' ');

    char GetValue();
    void SetValue(char _value);

    virtual void Pop();

protected:
    char value;
};