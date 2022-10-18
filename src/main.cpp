#include "header/Board.h"
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    system("cls");

    Board board = Board(10, 10);

    board.InitializeBoard();

    board.PrintBoard();

    return 0;
}