#include <iostream>

class Prime
{
public:
	int start;
	int end;
	int* arry;
	int count = 0;

	void prime()
	{
		if (arry == nullptr)
		{
			std::cout << "error" << std::endl;
			return;
		}
		arry[0] = 1;
		arry[1] = 1;

		for (int i = 2; i * i <= end; i++)
		{
			if (arry[i] == 0)
			{
				for (int j = i * i; j <= end; j += i) // i�� �������� n���� i�� ����
				{
					arry[j] = 1; // i�� ��� �����ϱ�
				}
			}
		}
		for (int i = start; i <= end; i++)
		{
			if (arry[i] == 0)
				count++;
		}
		std::cout << count;
	}
};

int main()
{
	Prime prime;
	std::cin >> prime.start;
	std::cin >> prime.end;
	prime.arry = new int[prime.end + 1]{};
	prime.prime();
	return 0;
}