#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int player, computer;

    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> player;
    
    srand(time(0));
    computer = rand() % 3 + 1;

    cout << "Computer chose: " << computer << endl;

    if (player == computer)
        cout << "It's a draw!";
    else if ((player == 1 && computer == 3) ||
             (player == 2 && computer == 1) ||
             (player == 3 && computer == 2))
        cout << "You win!";
    else
        cout << "Computer wins!";

    return 0;
}
