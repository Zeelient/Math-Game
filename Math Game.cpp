// Chapter 4, Programming Challenge 11: Math Tutor
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function
#include <iomanip>
using namespace std;

int main()
{
    int menu_math_choice;

	const int MIN = 50;
	const int MAX = 450,
	 addition = 1,
	 subtraction = 2,
     multiplication = 3,
     division = 4,
     quit = 0;

	 
     
     
	unsigned seed = time(0);

	srand(seed);


    
    cout << "Press 1 for addition, 2 for subtraction, 3 for multiplication,\n4 for division and 0 for quit.\n" << endl;
    
    do
    {
    
    cout<< "addition\n" << endl;
	cout<< "subtraction\n" << endl; 
	cout<< "multiplication\n" << endl; 
	cout<< "division\n" << endl; 
	cout<< "quit\n";
	
	while(menu_math_choice < 1 || menu_math_choice > 4)

{

	cin >> menu_math_choice;
	}
	if (menu_math_choice !=4)


	cout << "This math item is not available. Please only choose\n what is." << endl;
	
	switch(menu_math_choice)
	{
	
	case 1:
	{
		
		// Generate two random numbers.
	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;
	int answer;						// To hold the answer

	// Display the addition problem.
	cout << setw(5) << num1 << endl
         << "+" << setw(4) << num2 << endl
         << "-----\n\n";

	// Wait for the user to press the Enter key.
	cout << "Enter to the answer here: ";
	cin >> answer;

	// Calculate the sum.
	int correctAnswer = num1 + num2;

	// Display the answer to the addition problem.
	cout << (answer == correctAnswer ? 
		     "\nCongratulations!\n" : 
	         "\nSorry that is incorrect.\n") 
		 << "The answer is " << correctAnswer 
		 << endl << endl;
		 
		 
	if(answer !=correctAnswer)

		{
		cout << "Wrong answer, please try again" << endl;

		}
}
	break;

	case 2:
	{

	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;
	int answer;						// To hold the answer

	// Display the addition problem.
	cout << setw(5) << num1 << endl
         << "-" << setw(4) << num2 << endl
         << "-----\n\n";

	// Wait for the user to press the Enter key.
	cout << "Enter to the answer here: ";
	cin >> answer;

	// Calculate the sum.
	int correctAnswer = num1 - num2;

	// Display the answer to the addition problem.
	cout << (answer == correctAnswer ? 
		     "\nCongratulations!\n" : 
	         "\nSorry that is incorrect.\n") 
		 << "The answer is " << correctAnswer 
		 << endl << endl;
		 
		 
	if(answer !=correctAnswer)

		{
		cout << "Wrong answer, please try again" << endl;

		}
}
	break;

		case 3:
        {
	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;
	int answer;						// To hold the answer

	// Display the addition problem.
	cout << setw(5) << num1 << endl
         << "x" << setw(4) << num2 << endl
         << "-----\n\n";

	// Wait for the user to press the Enter key.
	cout << "Enter to the answer here: ";
	cin >> answer;

	// Calculate the sum.
	int correctAnswer = num1 * num2;

	// Display the answer to the addition problem.
	cout << (answer == correctAnswer ? 
		     "\nCongratulations!\n" : 
	         "\nSorry that is incorrect.\n") 
		 << "The answer is " << correctAnswer 
		 << endl << endl;
		 
		 
	if(answer !=correctAnswer)

		{
		cout << "Wrong answer, please try again" << endl;

		}

	break;
        }
		case 4:
        {
	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;
	int answer;						// To hold the answer

	// Display the addition problem.
	cout << setw(5) << num1 << endl
         << "÷" << setw(4) << num2 << endl
         << "-----\n\n";

	// Wait for the user to press the Enter key.
	cout << "Enter to the answer here: ";
	cin >> answer;

	// Calculate the sum.
	int correctAnswer = num1 / num2;

	// Display the answer to the addition problem.
	cout << (answer == correctAnswer ? 
		     "\nCongratulations!\n" : 
	         "\nSorry that is incorrect.\n") 
		 << "The answer is " << correctAnswer 
		 << endl << endl;
		 
		 
	if(answer !=correctAnswer)

		{
		cout << "Wrong answer, please try again" << endl;

		}
        }
	break;
	
    case 0:
    {
        cout << endl;
    }
}

	

	
	} while(menu_math_choice != quit);
	

	return 0;
}
