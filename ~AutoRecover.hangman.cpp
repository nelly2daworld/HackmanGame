﻿/*
Hang Man Game Creation. 7/16 bad guesses &
Hangman picture is drawn and resuolt in a lost game.
*/
// Each arm and each leg are separate
// if num of errors = 1 -> print head
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

bool is_hung(int);

int main() {
	cout << "***************************** MY HANG MAN GAME ***********************************" << endl << endl;
	ifstream myfile;
	myfile.open("infile.txt");
	//declare variables
	string question, ans_1, ans_2, ans_3, ans_4, correct_ans;
	char user_ans;
	bool hangman;
	//For function to  all of the functions
	int no_errors=0;
	while (myfile && no_errors <= 7)
	{

		//Read and display question
		getline(myfile, question);
		getline(myfile, ans_1); // Read and display each answer
		getline(myfile, ans_2);
		getline(myfile, ans_3);
		getline(myfile, ans_4);
		getline(myfile, correct_ans);
		//make the string variablee into char
		char correctCompare = correct_ans.at(16);
		//Show the answer options
		cout << question << endl << endl;
		cout << ans_1 << endl;
		cout << ans_2 << endl;
		cout << ans_3 << endl;
		cout << ans_4 << endl << endl;
		cout << "Enter the capital letter of your answer: " << endl;
		cin >> user_ans; //Get answer fr<< endl;om user
						 //	cout << "Enter the capital letter of your
		//use the string compare symbol
		if (user_ans == correctCompare) {
			cout << "CORRECT !!!!" << endl; //correct answer
		}
		else {
			cout << "INCORRECT !!!!" << endl; //incorrect answer
			no_errors++;
			hangman = is_hung(no_errors);
		}
		cout << "*******************************************************************************" << endl;

	}
	//cout << correct_ans << endl;
	
	//Determine if user answer is correct
	system("pause");
	system("cls");
	myfile.close();
	return 0;
}
int no_errors = 0; //initialize no_errors
bool is_hung(int no_errors) {
	//Hang man display function 
	bool hung = false;
	
 if (no_errors == 1) {
		cout << "\t \t \t" << " O " << endl;
		hung = false;
		no_errors++;
	}
 else if (no_errors == 2) {
		 cout << "\t \t \t" << " O " << endl;
		 cout << "\t \t \t" << " | " << endl;
		hung = false;
		no_errors++;
	}
	else if (no_errors == 3) {
		cout << "\t \t \t" << " O " << endl;
		cout << "\t \t \t" << "/|" << endl;
		hung = false;
		no_errors++;
	}
	else if (no_errors == 4) {
		cout << "\t \t \t" << " O " << endl;
		cout << "\t \t \t" << "/|\\" << endl;
		hung = false;
		no_errors++;
	}
	else if (no_errors == 5) {
		cout << "\t \t \t" << " O " << endl;
		cout << "\t \t \t" << "/|\\" << endl;
		cout << "\t \t \t" << " | " << endl;
		hung = false;
		no_errors++;
	}
	else if (no_errors == 6) {
		cout << "\t \t \t" << " O " << endl;
		cout << "\t \t \t" << "/|\\" << endl;
		cout << "\t \t \t" << " | " << endl;
		cout << "\t \t \t" << "/ " << endl;
		hung = false;
		no_errors++;
	}
	else {
		cout << "\t \t \t" << " O " << endl;
		cout << "\t \t \t" << "/|\\" << endl;
		cout << "\t \t \t" << " | " << endl;
		cout << "\t \t \t" << "/ \\" << endl;
		cout << " YOU ARE HUNG" << endl;
		return false;
		hung = false;
		no_errors++;
	}

	return hung;
}
