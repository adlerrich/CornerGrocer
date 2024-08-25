#ifndef ITEMHANDLER_H 
#define ITEMHANDLER_H 
#include <map>
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

class ItemHandler 
{
	private:
		map<string, int>* m_WordsAndFrequenciesPtr;

	public:
		ItemHandler(map<string, int>* WordsAndFrequenciesPtr);
		map<string, int>* ExposeMemberPtr();
		void PrintSingleItemFrequency();
		void PrintAllItemFrequency();
		void PrintAllItemFrequencyHistogram();
		void FreeMemberPtr();

};
#endif
