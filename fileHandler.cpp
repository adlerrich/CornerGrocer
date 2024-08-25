#include "fileHandler.h"
#include <cctype>

using namespace std;

bool isNotAlphaNumeric(char c)
{
	return isalnum(c) == 0;
}

// strip all non-alpha numeric characters from input string to expunge the newline at the end of the string
string FileHandler::StripNonAlphaNumChars(string s)
{
		size_t i = 0;
		size_t len = s.length();
		while (i < len)
		{
			if(!isalnum(s[i]))
			{
				s.erase(i);
				len--;
			}
			else 
			{
				i++;
			}
		}
		return s;
}
// passes the Words in a file into a map, if the word exists already, update its value, else create an entry for that word with a frequency of 1
map<string, int>* FileHandler::IntakeFileData(string inputFile)
{
	ifstream InFile(inputFile);

	map<string, int>* WordsAndFrequencies = new map<string, int>; 

	// increment count if the item is found, add the item if it isn't
	string key;
	while (getline(InFile, key))
	{
		key = StripNonAlphaNumChars(key);
		if (!key.empty())
		{
			if (WordsAndFrequencies->count(key) == 1)
			{
				WordsAndFrequencies->at(key) += 1;
			}
			else {
				WordsAndFrequencies->emplace(key, 1);
			}
		}
	}

	InFile.close();

	return WordsAndFrequencies;
}


void FileHandler::Log(map<string, int>* WordsAndFrequenciesPtr, string outputFile)
{
	ofstream OutFile;
	OutFile.open(outputFile);

	if (!OutFile)
	{
		throw runtime_error("Unable to open " + outputFile);
	}

	map<string, int>::iterator MapIterator = WordsAndFrequenciesPtr->begin();
	while (MapIterator != WordsAndFrequenciesPtr->end())
	{
		string word = MapIterator->first;
		int frequencey = MapIterator->second;

		OutFile << word << " " << frequencey << endl;
		++MapIterator;
	}
	
}
