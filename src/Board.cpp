#include "Board.h"
using namespace std;

Board::Board()
{
    width = 10;
    height = 10;

    board.resize(width);
    for (int i = 0; i < width; i++)
    {
        board[i].resize(height);
    }

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            board[i][j] = OrdinaryCell(i, j, 'C');
        }
    }
}

Board::Board(int _width, int _height)
{
    this->width = _width;
    this->height = _height;
    
    board.resize(_width);
    for (int i = 0; i < _width; i++)
    {
        board[i].resize(_height);
    }

    for (int i = 0; i < _width; i++)
    {
        for (int j = 0; j < _height; j++)
        {
            board[i][j] = OrdinaryCell(i, j, 'C');
        }
    }
}

void Board::setWidth(int _width)
{
    this->width = _width;
}

void Board::setHeight(int _height)
{
    this->height = _height;
}

int Board::getWidth()
{
    return width;
}

int Board::getHeight()
{
    return height;
}

void Board::setCell(int _x, int _y, char _value)
{
    board[_x][_y].setValue(_value);
}

Cell Board::getCell(int x, int y)
{
    return board[x][y];
}

void Board::printBoard()
{
    for (int i = 0; i < width; i++)
    {
        cout << " ";
        for (int j = 0; j < height; j++)
        {
            if (j != height - 1)
                cout << board[i][j].getValue() << " | ";
            else
                cout << board[i][j].getValue();
        }
        cout << " " << endl;

        if (i != width - 1)
            for (int j = 0; j < height; j++)
            {
                if (j != height - 1)
                    cout << "---"
                         << "|";
                else
                    cout << "---";
            }
        cout << endl;
    }
    cout << endl;
}
