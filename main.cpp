#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

// ---------
// | *     |
// ---------

// ┌───────┐
// │ *     │
// └───────┘

void paintBoard(vector<vector<char>> &board) {

    int width = board[0].size();
    int height = board.size();

    cout << "+";
    for (int i  = 0; i < width; i++) {
        cout << "-" ;
    }
    cout << "+" << endl;
    for (int y  = 0; y < height; y++) {
        cout << "|";
        for (int x = 0; x < width; x++) {
            cout << board[y][x];
        }
        cout << "|" << endl;
    }

    cout << "+";
    for (int i  = 0; i < width; i++) {
        cout << "-" ;
    }
    cout << "+" << endl;
}

int main()
{
    // czyszczenie konsoli
    system("cls");

    const int boardWidth = 20;
    const int boardHeight = 20;
    vector<vector<char>> board(boardHeight, vector<char>(boardWidth, ' '));
    char input;   
    int playerXPosition = boardWidth / 2;
    const int playerYPosition = boardHeight - 1;
    while (true) 
    {
        board[playerYPosition][playerXPosition] = '*';
        system("cls");
        paintBoard(board);

        // _getch() zamiast getch()
        input = tolower(_getch());

        board[playerYPosition][playerXPosition] = ' ';
        if (input == 'a') {
            if (playerXPosition > 0) {
                playerXPosition--;
            }
        } else if (input == 'd') {
            // 9 + 1 < 10 => false
            if (playerXPosition + 1 < boardWidth) {
                playerXPosition++;
            }            
        }

        if (input == 'q') {
            break;
        }
    }

}