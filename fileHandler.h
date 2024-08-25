#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <map>
#include <string>
#include <fstream>
#include <memory>
#include <iostream>
#include <cctype>

using namespace std;

class FileHandler 
{
	private:
		string StripNonAlphaNumChars(string s);

	public:
		void Log(map<string, int>* wordsAndFrequencies, string outputFile);
		map<string, int>* IntakeFileData(string inputFile);
};
#endif
