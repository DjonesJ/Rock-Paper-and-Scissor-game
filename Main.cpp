#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <time.h>

using namespace std;
int main() {

	vector <string> rockPaperScissor;


	string input;
	int track = 0;
	int wins = 0;
	int i = 0;
	int timesToPlay = 0;

	cout << "how many times do you want to play?";
	cin >> timesToPlay;
	while (i < timesToPlay) {
		++i;
		cout << "pick either rock, paper or scissor (be careful to type it right): " << endl;
		cin >> input;
		if (input == rockPaperScissor[0]) {
			cout << endl << endl;
			track = 0;
		}
		else if (input == rockPaperScissor[1]) {
			cout << endl << endl;
			track = 1;
		}
		else if (input == rockPaperScissor[2]) {
			cout << endl << endl;
			track = 2;
		}
		else {
			cout << "I don't know that input" << endl;
			break;
		}
		int random;
		srand(time(NULL));
		random = rand() % 3; // gives a random number between 0 and 2
		int result = track - random;

		if (result == 1 || result == -2) {
			cout << "Player Wins " << endl << "Player choice: " << rockPaperScissor[track] << endl << "Computer choice: " << rockPaperScissor[random] << endl;
			++wins;
		}
		else if (result == 2 || result == -1) {
			cout << "Computer Wins " << endl << "Computer choice: " << rockPaperScissor[random] << endl << "Player choice: " << rockPaperScissor[track] << endl;
		}
		else {
			cout << "Drawn" << endl;

			cout << "Random choice were: " << rockPaperScissor[random] << flush << endl << endl;
		}
	}
	cout << "Player win: " << wins << " times" << endl;
}
