#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	system("Color 13"); 
	cout << "\n\t\t\tWelcome to Guess The Number game!!!"<< endl<<"\n\n";
  	cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!"<< endl;

	while (true) {
		cout << "\nEnter the difficulty level: \n";
		cout << "1 for easy!\t";
		cout << "2 for medium!\t";
		cout << "3 for Hard!\t";
		cout << "0 for ending the game!\n" << endl;
		int Level_choice;
		cout << "Enter the number: ";
		cin >> Level_choice;
		srand(time(0));
		int randomnumber = 1 + (rand() % 100);
		int user_input;
		if (Level_choice == 1) {
			cout << "\nYou have 10 choices for finding the Computer Generated  number between 1 and 100.";
			int choicesLeft = 10;
			for (int i = 1; i <= 10; i++) {
				cout << "\n\nEnter the number: ";
				cin >> user_input;
				if (user_input == randomnumber) {
					cout << "Well played! You won, "<< user_input<< " is the Computer Generated number" << endl;
          			cout << " Thanks for playing...."<< endl;
          			cout << "Play the game again with us!!\n\n"<< endl;
					break;
				}
				else {
					cout << "Nope, " << user_input<< " is not the right number\n";
					if (user_input > randomnumber) {
						cout << "The secret number is smaller than the number you have chosen"<< endl;
					}
					else {
						cout << "The Computer Generated number is greater than the number you have chosen"<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the Computer Generated number, it was "<< randomnumber << ", You lose!!\n\n";
            			cout << "Play the game again to win!!!\n\n";
					}
				}
			}
		}

		else if (Level_choice == 2) {
			cout << "\nYou have 7 choices for finding the Computer Generated  number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {
				cout << "\n\nEnter the number: ";
				cin >> user_input;
				if (user_input == randomnumber) {
					cout << "Well played! You won, " << user_input << " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...." << endl;
					cout << "Play the game again with us!!\n\n" << endl;
					break;
				}
				else {
					cout << "Nope, " << user_input << " is not the right number\n";
					if (user_input > randomnumber) {
						cout << "The secret number is smaller than the number you have chosen" << endl;
					}
					else {
						cout << "The secret number is greater than the number you have chosen"<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the secret number, it was " << randomnumber << ", You lose!!\n\n";
						cout << "Play the game again to win!!!\n\n";
					}
				}
			}
		}

		else if (Level_choice == 3) {
			cout << "\nYou have 5 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {
				cout << "\n\nEnter the number: ";
				cin >> user_input;
				if (user_input == randomnumber) {
					cout << "Well played! You won, " << user_input << " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."<< endl;
					cout << "Play the game again with us!!\n\n"<< endl;
					break;
				}
				else {
					cout << "Nope, " << user_input << " is not the right number\n";
					if (user_input > randomnumber) {
						cout << "The secret number is smaller than the number you have chosen"<< endl;
					}
					else {
						cout << "The secret number is greater than the number you have chosen"<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the secret number, it was " << randomnumber << ", You lose!!\n\n";
						cout << "Play the game again to win!!!\n\n";
					}
				}
			}
		} else if (Level_choice == 0) {
			exit(0);
		} else {
			cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<< endl;
		}
	}
	return 0;
}
