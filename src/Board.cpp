#include "header/Board.h"

using namespace std;

Board::Board(int _width, int _height)
{
    this->width = _width;
    this->height = _height;
}

int Board::GetWidth()
{
    return this->width;
}

int Board::GetHeight()
{
    return this->height;
}

Cell Board::GetCell(int _x, int _y)
{
    return this->cells[_x][_y];
}

void Board::SetCell(int _x, int _y, Cell _cell)
{
    this->cells[_x][_y] = _cell;
}

void Board::InitializeBoard()
{
    for (int i = 0; i < this->width; i++)
    {
        vector<Cell> row;
        for (int j = 0; j < this->height; j++)
        {
            int random = rand() % 3;
            if (random == 0)
            {
                int randomNormal = rand() % 3;
                if (randomNormal == 0)
                    row.push_back(NormalCell('A'));
                else if (randomNormal == 1)
                    row.push_back(NormalCell('S'));
                else
                    row.push_back(NormalCell('U'));
            }
            else if (random == 1)
                row.push_back(BombCell());
            else
                row.push_back(RocketCell());
        }
        this->cells.push_back(row);
    }
}

void Board::PrintBoard()
{
    cout << "      01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10\n\n";

    for (int i = 0; i < GetWidth(); i++)
    {
        int row = i + 1;
        if (row < 10)
            cout << " 0" << row << "  ";
        else
            cout << " " << row << "  ";

        cout << " ";
        for (int j = 0; j < GetHeight(); j++)
        {
            if (j != 10 - 1)
                cout << " " << GetCell(i, j).GetValue() << " | ";
            else
                cout << " " << GetCell(i, j).GetValue();
        }
        cout << " ";

        cout << endl;
        if (i != GetWidth() - 1)
        {
            cout << "     ";
            for (int j = 0; j < GetHeight(); j++)
            {
                if (j != GetHeight() - 1)
                    cout << "----+";
                else
                    cout << "----";
            }
        }
        cout << endl;
    }
    cout << endl;
}