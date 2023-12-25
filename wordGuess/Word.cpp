#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<string> phrases = {"goggle boy", "suburbus", "victoria", "this wifi sucks", "shift trade", "hero", "joyjoy", "horse show", "minecraft", "snoopy", "ocean shores", "guatemala", "ticket to ride"};

string choosePhrase() {
    srand(time(0));
    int index = rand() % phrases.size();
    return phrases[index];
}

bool contains(const string& phrase, char letter) {
    for (char c : phrase) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}

int main() {
    string selectedPhrase = choosePhrase();

    // Initialize guessed phrase with underscores for letters and spaces for spaces
    string guessedPhrase;
    for (char c : selectedPhrase) {
        if (c == ' ') {
            guessedPhrase += ' ';
        } else {
            guessedPhrase += '_';
        }
    }

    int attempts = 6; // Total attempts allowed
    vector<char> guessedLetters; // Store guessed letters

    while (attempts > 0 && guessedPhrase != selectedPhrase) {
        cout << "Guess the phrase: " << guessedPhrase << endl;
        cout << "Attempts left: " << attempts << endl;
        cout << "Guessed letters: ";
        for (char letter : guessedLetters) {
            cout << letter << " ";
        }
        cout << endl;

        string guess;
        cout << "Enter a letter or a space: ";
        cin >> guess;

        if (guess.length() == 1 && contains(selectedPhrase, guess[0])) {
            cout << "Correct guess!" << endl;
            for (int i = 0; i < selectedPhrase.length(); ++i) {
                if (selectedPhrase[i] == guess[0]) {
                    guessedPhrase[i] = guess[0];
                }
            }
        } else {
            cout << "Incorrect guess." << endl;
            attempts--;
        }

        guessedLetters.push_back(guess[0]);
    }

    if (guessedPhrase == selectedPhrase) {
        cout << "Congratulations! You guessed the phrase: " << selectedPhrase << endl;
    } else {
        cout << "Out of attempts! The phrase was: " << selectedPhrase << endl;
    }

    return 0;
}
