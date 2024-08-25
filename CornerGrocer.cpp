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
