#include "Cell.h"

class RocketCell : public Cell
{
public:
    RocketCell();
    RocketCell(int _x, int _y, char _value);
    void setX(int _x);
    void setY(int y);
    int getX();
    int getY();
    void setValue(char _value);
    char getValue();

    bool checkCell(Cell *_cell);

private:
    int x;
    int y;
    CellType type;
    char value;
};
