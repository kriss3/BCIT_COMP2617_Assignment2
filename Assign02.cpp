// Assignment 2 Solution: Roman to Decimal
// 
// Krzysztof Szczurowski
// Sept. 30th, 2019

#include <iostream>
#include <cctype>

using namespace std;

int main() 
{
	int const NUMBERAL_INPUT = 10;
	//char romNum;
	
	cout << "10 Roman numeral values will be input and converted into\ntheir equivalent Hindu-Arabic numeric values.\n" ;

	int counter;
	for (int i = 0; i < NUMBERAL_INPUT; i++)
	{
		int currentChar = 0;
		int prevChar = 0;
		int result = 0;
		int sum = 0;
		bool errorFlag = false;

		int testValue;

		counter = i;
		cout << "\nInput Roman numeral #" << ++counter << ": ";

		while ((testValue = toupper(cin.get())) != '\n')
		{
			switch (testValue)
			{
			case 'I':
				if (errorFlag)
				{
					continue;
				}

				currentChar = 1;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'I';
				break;
			case 'V':
				if (errorFlag)
				{
					continue;
				}
				currentChar = 5;
				if (prevChar > 0 && currentChar > prevChar&& currentChar != prevChar)
				{
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'V';
				break;
			case 'X':
				if (errorFlag)
				{
					continue;
				}
				currentChar = 10;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'X';
				break;
			case 'L':
				if (errorFlag)
				{
					continue;
				}

				currentChar = 50;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					//subtract higher value from current value and add to result;
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'L';
				break;
			case 'C':
				if (errorFlag)
				{
					continue;
				}

				currentChar = 100;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					//subtract higher value from current value and add to result;
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'C';
				break;
			case 'D':
				if (errorFlag)
				{
					continue;
				}

				currentChar = 500;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					//subtract higher value from current value and add to result;
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'D';
				break;
			case 'M':
				if (errorFlag)
				{
					continue;
				}

				currentChar = 1000;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					//subtract higher value from current value and add to result;
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'M';
				break;
			default:
				cerr << static_cast<char>(testValue) << " Error - last character was not valid!!!\n";
				errorFlag = true;
				break;
			}
		}
		
		if (!errorFlag)
		{
			cout << " = " << sum << endl;
			errorFlag = false;
		}
	}
	cout << "\nTHAT'S ALL FOLKS :)\n";
	return 0;
}
