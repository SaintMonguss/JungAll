#include <iostream>

class Array
{
public:
	int arr[100][100] = { 0, };
	int length = 0;
	int xp = 0;
	int yp = 0;
	bool isUp = false;
	int count = 1;

	void UpInsert()
	{
		if (xp == 0)
		{
			xp = yp;
			for(int i = yp; i >=0 ; i--)
			{
				arr[yp-i][i] = count;
				count++;
			}
			yp = 0;
			xp == (length - 1) ? yp += 1 : xp += 1;
		}
		else
		{
			yp = xp +1;
			for (int i = xp; i < length; i++)
			{
				arr[i][(length -1) - (i - xp)] = count;
				count++;
			}
			xp = length - 1;
		}
		isUp = false;
	}

	void DownInsert()
	{
		if (yp == 0)
		{
			yp = xp;
			for (int i = xp; i >= 0; i--)
			{
				arr[i][xp-i] = count;
				count++;
			}
			xp = 0;
			yp == (length - 1) ? xp += 1 : yp += 1;
		}
		else
		{
			xp = yp+1;
			for (int i = yp; i < length; i++)
			{
				arr[(length-1)-(i-yp)][i] = count;
				count++;
			}
			yp = length - 1;
		}
		isUp = true;
	}



	void print()
	{
		for (int i = 0; i < length; i++)
		{
			for (int j = 0; j < length; j++)
			{
				std::cout << arr[j][i] << " ";
			}
			std::cout << std::endl;
		}
	}
	
};

int main()
{
	Array array;
	std::cin >> array.length;
	for (int i = 0; i < (array.length * 2) - 1; i++)
	{
		array.isUp ? array.UpInsert() : array.DownInsert();
	}
	array.print();
	return 0;

}