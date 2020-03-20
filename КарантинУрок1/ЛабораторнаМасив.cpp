#include "ЛабораторнаМасив.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

void FillArrya(int arr[], const int size, int range)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand()%range;
	}
}

void DisplayArray(int arr[], const int size, int range) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % range;
		cout << arr[i] << " ";
	}
	cout << endl;
}

void FindElementArray(int arr[], const int size, int range) {
	srand(time(0));
	int element = 0;
	cout << "Enter the element of the array you are looking for";
	cin >> element;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % range;
		if (arr[i] == element) {
			cout << "Element " << element << " № " << i << endl;
		}
		else {
			cout<< "There is no such element in this array"<<endl;
		}
	}
}