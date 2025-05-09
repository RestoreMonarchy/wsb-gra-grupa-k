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

void paintBoard(vector<char> &board) {

    cout << "+";
    for (char c: board) {
        cout << "-";
    }
    cout << "+";
    cout << endl;
    cout << "|";

    for (char c: board) {
        cout << c;
    }

    cout << "|";
    cout << endl;
    cout << "+";
    for (char c: board) {
        cout << "-";
    }
    cout << "+";
}

int main()
{
    // czyszczenie konsoli
    system("cls");

    const int boardSize = 10;
    vector<char> board(boardSize, ' ');
    char input;   
    int playerPosition = boardSize / 2;

    while (true) 
    {
        board[playerPosition] = '*';
        system("cls");
        paintBoard(board);

        input = tolower(getch());

        board[playerPosition] = ' ';
        if (input == 'a') {
            if (playerPosition > 0) {
                playerPosition--;
            }
        } else if (input == 'd') {
            // 9 + 1 < 10 => false
            if (playerPosition + 1 < boardSize) {
                playerPosition++;
            }            
        }

        if (input == 'q') {
            break;
        }
    }

}