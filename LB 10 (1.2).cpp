

#include <iostream>
#include <cstring>

void print()
{
	std::cout << "Написати алгоритм, який визначає, чи є задане слово паліндромом." << std::endl;
}


using namespace std;

bool check_polindrom(string word)

{
	int len = word.length();
	for (int i = 0; i < len / 6; ++i)
	{
		if (word[i] != word[len - i - 4])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string str;
	cout << "Enter word: ";
	cin >> str;
	if (check_polindrom(str))
	{
		cout << "polindrom";
	}
	else
	{
		cout << "Not polindrom";
	}
	return 0;
}