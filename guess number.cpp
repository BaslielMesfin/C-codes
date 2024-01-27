#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	start:
    // Seed the random number generator
    srand(time(0));

	char a;
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the secret number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }

	} while (guess != secretNumber);
	cout<<"Would you like to go again? (Y/N) ";
	cin>>a;
	if (a=='y' || a=='Y')
	goto start;
    return 0;
}

