// Assignment 2 Solution: Roman to Decimal
// 
// Krzysztof Szczurowski
// Sept. 30th, 2019

#include <iostream>
#include <cctype>

using namespace std;

int main() 
{
	int const NUMBERAL_INPUT = 10; //setup for a total number of iterations per application run;
	
	cout << "10 Roman numeral values will be input and converted into\ntheir equivalent Hindu-Arabic numeric values.\n" ;

	int counter; // couter of the display purposes;
	for (int i = 0; i < NUMBERAL_INPUT; i++)  //iteratiing 10 times as per app specification;
	{
		//initial setup of required variables used in an app;
		int currentChar = 0;	// current value of a Roman character from the input;
		int prevChar = 0;		// value of the previous Roman character from the input
		int result = 0;			// parial result from the calculation (either the number analyzed or a subtraction i.e. IX)
		int sum = 0;				// total sum of Roman digits;
		bool errorFlag = false;// flag is to protect from displaying the rest of calculation of the Roman number, in case there is an input error;
										// initial set to false as no error assumed;

		int testValue;				// testValue => current value evaluated from the input;

		counter = i;
		cout << "\nInput Roman numeral #" << ++counter << ": ";

		while ((testValue = toupper(cin.get())) != '\n')		// getting one char at a time from the input;
		{
			switch (testValue)	// testing each Roman character;
			{
			case 'I':
				if (errorFlag)
				{
					continue;			//skipping this block if flag not affected by faulty input character;
				}

				currentChar = 1;	// setting value of Roman I = 1;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					//subtract higher value from current value and add to result;
					sum -= prevChar;							
					result = currentChar - prevChar;		
				}
				else
				{
					result = currentChar;		// setting result to the current input as value needs to be added to the total sum i.e. add X to the sum;
				}

				sum += result;					// summing result of the character input analysis
				prevChar = currentChar;		// setting variables for the next iteration;
				cout << 'I';						// setting input character for the display;
				break;
			case 'V':					// setting value of Roman V = 5;
				if (errorFlag)			//skipping this block if flag not affected by faulty input character;
				{
					continue;
				}
				currentChar = 5;
				if (prevChar > 0 && currentChar > prevChar&& currentChar != prevChar)
				{
					//subtract higher value from current value and add to result;
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;			// setting result to the current input as value needs to be added to the total sum i.e. add X to the sum;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'V';
				break;
			case 'X':					// setting value of Roman X = 10;
				if (errorFlag)			//skipping this block if flag not affected by faulty input character;
				{
					continue;
				}
				currentChar = 10;
				if (prevChar > 0 && currentChar > prevChar && currentChar != prevChar)
				{
					//subtract higher value from current value and add to result;
					sum -= prevChar;
					result = currentChar - prevChar;
				}
				else
				{
					result = currentChar;			// setting result to the current input as value needs to be added to the total sum i.e. add X to the sum;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'X';
				break;
			case 'L':						// setting value of Roman L = 50;
				if (errorFlag)			//skipping this block if flag not affected by faulty input character;
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
					result = currentChar;			// setting result to the current input as value needs to be added to the total sum i.e. add X to the sum;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'L';			
				break;
			case 'C':				// setting value of Roman C = 100;
				if (errorFlag)		//skipping this block if flag not affected by faulty input character;
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
					result = currentChar;			// setting result to the current input as value needs to be added to the total sum i.e. add X to the sum;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'C';
				break;
			case 'D':				// setting value of Roman D = 500;
				if (errorFlag)		//skipping this block if flag not affected by faulty input character;
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
					result = currentChar;			// setting result to the current input as value needs to be added to the total sum i.e. add X to the sum;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'D';
				break;
			case 'M':					// setting value of Roman D = 1000;
				if (errorFlag)			//skipping this block if flag not affected by faulty input character;
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
					result = currentChar;			// setting result to the current input as value needs to be added to the total sum i.e. add X to the sum;
				}

				sum += result;
				prevChar = currentChar;
				cout << 'M';
				break;
			default:							// handlig input character erros;
				cerr << static_cast<char>(testValue) << " Error - last character was not valid!!!\n";
				errorFlag = true;		//	setting errorFlag to skip calculating the rest of the input characters, if any are valid;
				break;
			}
		}
		
		// only display sum when errorFlag is NOT raised;
		if (!errorFlag)
		{
			cout << " = " << sum << endl;	// sum of all Roman characters calculations;
			errorFlag = false;						//	resetting the errorFlag;
		}
	}
	cout << "\nTHAT'S ALL FOLKS :)\n"; //required end of application => display
	return 0;
}// end main app;
