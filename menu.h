#ifndef MENU_H
#define MENU_H
#include <string>
#include <iostream>
#include <limits>

using namespace std;

class Menu 
{
	private:
		int ValidateMenuInput(string inputParamter);
	
	public:
		void DisplayMainMenu();
		int GetMainMenuInput();
};
#endif
