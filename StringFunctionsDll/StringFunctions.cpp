#include "pch.h"
#include "StringFunctions.h"
#include <map>

int countChar(const char* text, char target)
{
	int count = 0;
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == target)
		{
			count++;
		}
	}
	return count;
}

 char mostFrequentChar(const char* text)
 {
	 std::map<char, int> dictionary;
	 char mostFrequent = '\0';
	 int count = 0;

	 for (int i = 0; text[i] != '\0'; i++)
	 {
		 dictionary[text[i]]++;
		 if (dictionary[text[i]] > count)
		 {
			 count = dictionary[text[i]];
			 mostFrequent = text[i];
		 }
	 }
	 return mostFrequent;
 }