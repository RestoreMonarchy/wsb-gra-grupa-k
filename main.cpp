#include <iostream>
#include <vector>

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

    int num = 0;
    while (true) 
    {
        board[playerPosition] = '*';
        system("cls");        
        paintBoard(board);

        cin >> input;
        num++;
        if (num == 10) {
            break;
        }        
    }

}