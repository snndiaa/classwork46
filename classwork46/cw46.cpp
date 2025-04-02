#include <iostream>
using namespace std;

void add_element(int*& arr, int& size, int element)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = element;
	size++;
	delete[] arr;
	arr = temp;
}

int main() 
{

	//int* ptrB = nullptr;
	//ptrB = new int[5] { 6,2,9,3,4 };
	//cout << "ptrB[0] = " << ptrB[0] << endl;
	//
	//delete[] ptrB;
	////ptrB = nullptr;

	////ptrB = new int[3] {1, 2, 3};
	//
	//if (ptrB != nullptr)
	//{
	//	delete[] ptrB;
	//}

	int size = 5;
	int* arr = new int[size] {1, 2, 3, 4, 5};

	int new_element;
	cout << "Enter a new element: ";
	cin >> new_element;

	cout << "Before adding new element: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}	

	add_element(arr, size, new_element);

	cout << "After adding new element: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
	return 0;
}