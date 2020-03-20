#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "ЛабораторнаМасив.h"

using namespace std;

int main() {
	int action = 0;
	const int size = 100;
	int arr[size];
	int range = 0;
	cout << " Enter the range to fill the array: ";
	cin >> range;

	do
	{
		cout << "1. Fill in an array with random numbers " << endl;
		cout << "2. Display the array" << endl;
		cout << "3. Find the element in the array" << endl;
		cout << "4. Sort the array" << endl;
		cout << "5. Determine the average value of the array elements" << endl;
		cout << "6. Find the number of elements that are multiples of 5" << endl;
		cout << "7. Move the array elements" << endl;
		cout << "8. Exit" << endl;
		cin >> action;
		switch (action)
		{
		
		case 1:
		{
			FillArrya(arr, size,range);
			break;
		}

		case 2: 
		{
			DisplayArray(arr,size,range);
			break;
		}
		case 3:
		{
			FindElementArray(arr, size,range);
			break;
		}
		}
	} while (action !=8);
	



	system("pause");
	return 0;
}
