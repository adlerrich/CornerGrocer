// CornerGrocer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "\\apporto.com\dfs\SNHU\Users\richardadler_snhu\Desktop\CornerGrocer\menu.h"
#include "\\apporto.com\dfs\SNHU\Users\richardadler_snhu\Desktop\CornerGrocer\itemHandler.h"
#include "\\apporto.com\dfs\SNHU\USERS\richardadler_snhu\Desktop\CornerGrocer\fileHandler.h"
#include <iostream>

using namespace std;

int main()
{

	FileHandler FileProcessor;
	Menu MainMenu;
	int userInput;
	ItemHandler ItemProcessor(FileProcessor.IntakeFileData("CS210_Project_Three_Input_File.txt"));

	cout << "Daily sales tracker for Corner Grocer" << endl << endl;

	do
	{
		userInput = MainMenu.GetMainMenuInput();
		switch (userInput)
		{
		case 1:
			ItemProcessor.PrintSingleItemFrequency();
			break;
		case 2:
			ItemProcessor.PrintAllItemFrequency();
			break;
		case 3:
			ItemProcessor.PrintAllItemFrequencyHistogram();
			break;
		case 4:
			cout << "Exiting program" << endl;
			break;
		default:
			cout << "Error - Should not be possible to escape validiation" << endl;
			break;
		}
	} while (userInput != 4);

	FileProcessor.Log(ItemProcessor.ExposeMemberPtr(), "Frequency.dat");
	ItemProcessor.FreeMemberPtr();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
