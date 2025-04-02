#include <iostream>
using namespace std;

void print_array(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int* add_element(int* arr, const int size, int element)
{
	int new_size = size + 1;
	if (new_size > 0)
	{
		int* new_array = new int[new_size];
		for (int i = 0; i < size; i++)
		{
			new_array[i] = arr[i];
		}
		new_array[new_size-1] = element;
		delete[] arr;
		return new_array;
	}
	return nullptr;
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
	print_array(arr, size);

	arr=add_element(arr, size, new_element);

	cout << "After adding new element: ";
	print_array(arr, size + 1);

	cout << endl;

	delete[] arr;
	return 0;
}
