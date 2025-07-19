#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function declarations
void rock(int pcChoice, int& userScore, int& pcScore);
void paper(int pcChoice, int& userScore, int& pcScore);
void scissor(int pcChoice, int& userScore, int& pcScore);

int main() {
    char opt;
    int userScore = 0;
    int pcScore = 0;

    srand(time(0)); // Seed random once

    do {
        cout << "Welcome to the Rock, Paper, Scissors game!!!" << "\n";
        cout << "Please select one: 1:Rock, 2:Paper, 3:Scissors, 4:EXIT" << "\n";
        cin >> opt;

        int pcChoice = (rand() % 3) + 1;

        switch (opt) {
            case '1':
                rock(pcChoice, userScore, pcScore);
                break;
            case '2':
                paper(pcChoice, userScore, pcScore);
                break;
            case '3':
                scissor(pcChoice, userScore, pcScore);
                break;
            case '4':
                cout << "Exiting game..." << "\n";
                break;
            default:
                cout << "Invalid choice" << "\n";
                break;
        }

        if (opt != '4') {
            cout << "Your Score: " << userScore << " | PC Score: " << pcScore << "\n";
            cout << "-----------------------------------\n";
        }

    } while (opt != '4');

    cout << "Final Score - You: " << userScore << " | PC: " << pcScore << "\n";
    cout << "Thanks for playing!\n";
    return 0;
}

// ROCK
void rock(int pcChoice, int& userScore, int& pcScore) {
    cout << "PC chose: " << pcChoice << " (1:Rock, 2:Paper, 3:Scissors)\n";
    if (pcChoice == 1) {
        cout << "Draw\n";
    } else if (pcChoice == 2) {
        cout << "You Lose!!!\n";
        pcScore++;
    } else {
        cout << "You Win!!!\n";
        userScore++;
    }
}

// PAPER
void paper(int pcChoice, int& userScore, int& pcScore) {
    cout << "PC chose: " << pcChoice << " (1:Rock, 2:Paper, 3:Scissors)\n";
    if (pcChoice == 2) {
        cout << "Draw\n";
    } else if (pcChoice == 3) {
        cout << "You Lose!!!\n";
        pcScore++;
    } else {
        cout << "You Win!!!\n";
        userScore++;
    }
}

// SCISSORS
void scissor(int pcChoice, int& userScore, int& pcScore) {
    cout << "PC chose: " << pcChoice << " (1:Rock, 2:Paper, 3:Scissors)\n";
    if (pcChoice == 3) {
        cout << "Draw\n";
    } else if (pcChoice == 1) {
        cout << "You Lose!!!\n";
        pcScore++;
    } else {
        cout << "You Win!!!\n";
        userScore++;
    }
}
