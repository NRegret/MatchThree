#include "CellType.h"

class Cell
{
public:
    virtual void setX(int _x) = 0;
    virtual void setY(int _y) = 0;
    virtual int getX() = 0;
    virtual int getY() = 0;
    virtual void setType(CellType _type) = 0;
    virtual CellType getType() = 0;
    virtual void setValue(char _value) = 0;
    virtual char getValue() = 0;

    virtual bool checkCell(Cell *_cell) = 0;
};
