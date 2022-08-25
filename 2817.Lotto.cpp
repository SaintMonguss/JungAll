#include <iostream>
#include <vector>

class Picker
{
public : 
	int check= 1;
	int* arr;
	int answer[6];
	std::vector<int>::iterator ptr;

	void LottoSet(int check ,int length,int count)
	{
		if (count == 6)
		{
			for (int i = 0 ; i < 6 ; i ++)
			{
				std::cout << answer[i] << " ";
			}
			std::cout << std::endl;
			return;

		}
		for (int i = check; i < length-6+check+1; i++)
		{
			answer[count] = arr[i];
			LottoSet(check + 1, length, count+1);
		}
	}
};

int main()
{
	int length;
	Picker *picker = new Picker;
	std::cin >> length;
	picker->arr = new int[length];
	for (int i = 0; i < length; i++)
	{
		std::cin >> picker->arr[i];
	}
	picker->LottoSet(0, length, 0);
	return 0;
}