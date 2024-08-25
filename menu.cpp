#include "menu.h"

using namespace std;

void Menu::DisplayMainMenu()
{
	cout << "[1] Search frequencey of specific item" << endl;
	cout << "[2] See all item frequencies as a number" << endl;
	cout << "[3] See all item frequencies as a histogram" << endl;
	cout << "[4] Exit program" << endl;
	cout << endl;
	cout << "Menu Input: ";
}

int Menu::ValidateMenuInput(string inputParameter)
{
	int userInput;
	cin >> userInput;
	while(cin.fail() || userInput < 1 || userInput > 4)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << inputParameter << endl;
		DisplayMainMenu();
		cin >> userInput;
	}

	cout << endl;

	return userInput;
}

int Menu::GetMainMenuInput()
{
	string inputParameter = "Please choose a valid option from the menu.";

	DisplayMainMenu();
	return ValidateMenuInput(inputParameter);
}
