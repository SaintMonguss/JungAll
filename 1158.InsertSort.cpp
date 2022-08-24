#include <iostream>

class InsertSort
{
public:
	static void insertSort(int* arr, int length)
	{
		int tmp = 0;
		for (int i = 1; i < length; i++)
		{
			int key = i;
			for (int j = i - 1; j >= 0; j--)
			{
				if (arr[key] < arr[j])
				{
					tmp = arr[j];
					arr[j] = arr[key];
					arr[key] = tmp;
					key = j;
				}

			}
			for (int z = 0; z < length; z++)
			{
				std::cout << arr[z] << " ";
			}
			std::cout << std:: endl;
		}
	}
};



int main()
{
	int length = 0;
	std::cin >> length;
	int* arr = new int[length];
	for (int i = 0; i < length; i++) { std::cin >> arr[i]; }
	InsertSort::insertSort(arr, length);
}