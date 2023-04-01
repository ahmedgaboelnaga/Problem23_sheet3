#include <iostream>

using namespace std;

int main()
{
	//Write programs that read a sequence of integer inputs and print:
	//  a.The smallest and largest of the inputs.
	//	b.The number of even and odd inputs.

	int input;
	int largest = 0;
	int smallest = 0;
	int evens = 0;
	int odds = 0;
	
	int size;
	cout << "Enter the size of the sequence: ";
	cin >> size;

	int i = 1;
	bool first_input = true;
	while (i <= size)
	{
		cout << "Enter the #" << i << " number: ";
		cin >> input;

		if (first_input)
		{
			first_input = false;
			largest = input;
			smallest = input;
		}
		else if (input < smallest)
		{
			smallest = input;
		}
		else if (input > largest)
		{
			largest = input;
		}

		if (input % 2 == 0)
		{
			evens += 1;
		}
		else
		{
			odds += 1;
		}

		i++;
	}
	cout << endl << endl;
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;
	cout << "The number of evens is: " << evens << endl;
	cout << "The number of odds: " << odds << endl;


	return 0;
}