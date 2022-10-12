#include "Cell.h"
#include <vector>

class Board
{
public:
    Board();
    Board(int _width, int _height);
    void setWidth(int _width);
    void setHeight(int _height);
    int getWidth();
    int getHeight();
    void setCell(int _x, int _y, Cell *_cell);
    Cell getCell(int _x, int _y);
    void printBoard();

    void clearHorizontal(int _y);
    void clearVertical(int _x);
    void clearArea(int _x, int _y);

private:
    int width;
    int height;
    vector<vector<Cell>> board;
};