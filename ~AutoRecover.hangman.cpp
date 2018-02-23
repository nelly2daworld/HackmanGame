/*
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
/****************************** MY HANG MAN GAME ***********************************

Question: What relational operator means greater than or equal to?

A Answer: >
B Answer: >=
C Answer: =>
D Answer: <

Enter the capital letter of your answer:
A
INCORRECT !!!!
                         O
*******************************************************************************
Question: What two values does a bool variable allow?

A Answer: 0 and 1
B Answer: True or false
C Answer: Yes and no
D Answer: 1 and 2

Enter the capital letter of your answer:
C
INCORRECT !!!!
                         O
                         |
*******************************************************************************
Question: Which relational expression (where x is 4 and y is 8) is true?

A Answer: x = y
B Answer: x > y
C Answer: x < = y
D Answer: x >= y

Enter the capital letter of your answer:
D
INCORRECT !!!!
                         O
                        /|
*******************************************************************************
Question: If we place an if statement within an if statement, we are creating a

A Answer: If-Then-Else statement
B Answer: Multiway branch
C Answer: If-Then-Else-If statement
D Answer: Nested control structure

Enter the capital letter of your answer:
A
INCORRECT !!!!
                         O
                        /|\
*******************************************************************************
Question: The && and || operators are

Answer A: Binary operators
Answer B: Unary operators
Answer C: Secondary operators
Answer D: Primary operators

Enter the capital letter of your answer:
A
CORRECT !!!!
*******************************************************************************
Question: To find out if either the test grade is an A or the quiz grade is an A we would write the expression

Answer A: testGrade = `A' || quizGrade = `A'
Answer B: testGrade = `A' && quizGrade = `A'
Answer C: testGrade == `A' && quizGrade == `A'
Answer D: testGrade ==`A' || quizGrade == `A'

Enter the capital letter of your answer:
C
INCORRECT !!!!
                         O
                        /|\
                         |
*******************************************************************************
Question: Which two pairs of expressions are equivalent?

A Answer: !(a == b) and a != b
B Answer: !(a == b) and a =! B
C Answer: (a == b)! and a != b
D Answer: (a == b)! and a =! B

Enter the capital letter of your answer:
D
INCORRECT !!!!
                         O
                        /|\
                         |
                        /
*******************************************************************************
Question: Which operator has the lowest precedence?

A Answer: &&
B Answer: ==
C Answer: ||
D Answer: =

Enter the capital letter of your answer:
A
INCORRECT !!!!
                         O
                        /|\
                         |
                        / \
 YOU ARE HUNG
*******************************************************************************
Question: An assertion that must be true before a module is executed for the module to execute correctly is a

A Answer: Postcondition
B Answer: Precondition
C Answer: Priorcondition
D Answer: Subsequentcondition

Enter the capital letter of your answer:
D
INCORRECT !!!!
                         O
                        /|\
                         |
                        / \
 YOU ARE HUNG
*******************************************************************************
Press any key to continue . . .
*/



/*Priming Read
//int val
myfile >> val
while(myfile){
cout << val << endl;
myfile >> val;
}
*/

/*for(bool is_hung = false; no_errors <=7; no_errors --){
cout << "\t \t \t" << " O " << endl;
cout << "\t \t \t" << "/|\\" << endl;
cout << "\t \t \t" << " | " << endl;
cout << "\t \t \t" << "/ \\" << endl;
cout << " YOU ARE HUNG" << endl;
return false;
}
*/
/*
Hang Man Game Creation. 7/16 bad guesses &
Hangman picture is drawn and resuolt in a lost game.

// Each arm and each leg are separate
// if num of errors = 1 -> print head
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

string is_hung();
void heading(); //inform computer about the heading function

int main() {

	heading(); // call heading function
	ifstream myfile;
	myfile.open("infile.txt");
	//declare variables
	string question, ans_1, ans_2, ans_3, ans_4, correct_ans;
	string user_ans;
	//For function to loop all of the functions
	for (int i = 0; i < 14; i++) {
		
		int no_errors = 0;
		while (myfile && no_errors <= 7) {
			myfile >> question >> ans_1 >> ans_2 >> ans_3 >> ans_4 >> correct_ans; // link the text file to program
			
			cout << question << ":" << endl << endl;
			cout << ans_1 << endl;
			cout << ans_2 << endl;
			cout << ans_3 << endl;
			cout << ans_4 << endl << endl;
			cout << "Enter the capital letter of your answer: ";
			cin >> user_ans; //Get answer from user
			cout << user_ans << endl;
			no_errors++;
			//Determine if user answer is correct
			if (user_ans == correct_ans) {
				cout << "CORRECT!!!!" << endl; //correct answer
			}
			else {
				cout << "INCORRECT!!!!" << endl; //incorrect answer
				bool is_hung(int);
			}

		}
		system("pause");
		system("cls");
		/*while(no_errors <= 7){
		cin >>

		}
		

		return 0;
	}
}

void heading() {
	cout << "***************************** MY HANG MAN GAME ***********************************" << endl;
}

bool is_hung(int no_errors) {
	//Hang man display function 
	bool hung = false;
	if (no_errors = 1) {
		cout << "\t \t \t" << " O " << endl;
		hung = false;
	}
	else if (no_errors = 2) {
		cout << "\t \t \t" << "|\\" << endl;
		hung = false;
	}
	else if (no_errors = 3) {
		cout << "\t \t \t" << " /| " << endl;
		hung = false;
	}
	else if (no_errors = 4) {
		cout << "\t \t \t" << " | " << endl;
		hung = false;
	}
	else if (no_errors = 5) {
		cout << "\t \t \t" << " \\" << endl;
		hung = false;
	}
	else if (no_errors = 6) {
		cout << "\t \t \t" << "/ " << endl;
		hung = false;
	}
	else if (no_errors = 7) {
		cout << "\t \t \t" << " \\" << endl;
		hung = false;
	}
	else {
		cout << " YOU ARE HUNG" << endl;
		hung = true;
	}
	return hung;
}




Priming Read
//int val
myfile >> val
while(myfile){
cout << val << endl;
myfile >> val;
}


for(bool is_hung = false; no_errors <=7; no_errors --){
cout << "\t \t \t" << " O " << endl;
cout << "\t \t \t" << "/|\\" << endl;
cout << "\t \t \t" << " | " << endl;
cout << "\t \t \t" << "/ \\" << endl;
cout << " YOU ARE HUNG" << endl;
return false;
}
*/
