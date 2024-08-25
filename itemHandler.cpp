#include "itemHandler.h"

ItemHandler::ItemHandler(map<string, int>* WordsAndFrequenciesPtr)
{
	this->m_WordsAndFrequenciesPtr = WordsAndFrequenciesPtr;
}

void ItemHandler::PrintSingleItemFrequency()
{
	cout << "Input the item you wish to search for. Note this is case sensitive." << endl;
	cout << "Item: ";
	string item;
	cin >> item;

	cout << endl;
	
	if (this->m_WordsAndFrequenciesPtr->find(item) != this->m_WordsAndFrequenciesPtr->end())
	{
		cout << "Total Sales of  " << item << ": " << this->m_WordsAndFrequenciesPtr->at(item) << endl;
	}
	else
	{
		cout << item << " not found in system." << endl;
	}
	
	// ignore the rest of the line
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << endl;
}

void ItemHandler::PrintAllItemFrequency()
{
	map<string, int>::iterator MapIterator = this->m_WordsAndFrequenciesPtr->begin();
	while (MapIterator != this->m_WordsAndFrequenciesPtr->end())
	{
		string word = MapIterator->first;
		int frequencey = MapIterator->second;

		cout << word << " - " << frequencey << endl;
		++MapIterator;
	}

	cout << endl;

}

void ItemHandler::PrintAllItemFrequencyHistogram()
{
	map<string, int>::iterator MapIterator = this->m_WordsAndFrequenciesPtr->begin();
	while (MapIterator != this->m_WordsAndFrequenciesPtr->end())
	{
		string word = MapIterator->first;
		int frequencey = MapIterator->second;
		string histogramRepresentation = "";

		for (int i = 0; i < frequencey; i ++)
		{
			histogramRepresentation += "*";
		}
		cout << setw(12) << word << setfill(' ');
		cout << flush;
		cout << " - "<< histogramRepresentation << endl;
		++MapIterator;
	}

	cout << endl;

}

map<string, int>* ItemHandler::ExposeMemberPtr()
{
	return this->m_WordsAndFrequenciesPtr;
}

void ItemHandler::FreeMemberPtr()
{
	delete this->m_WordsAndFrequenciesPtr;
}
