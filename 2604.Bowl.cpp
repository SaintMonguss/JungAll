#include <iostream>

class Calculater
{
public:
	char arr[51];

	int calculate()
	{
		int answer=0;
		int i = 0;
		while (arr[i] != '\0')
		{
			if (i == 0)
			{
				answer += 10;
				i++;
				continue;
			}
			if (arr[i] != arr[i - 1])
				answer += 10;
			else
				answer += 5;
			i++;
		}
		return answer;
	}
};

int main()
{
	Calculater *cal = new Calculater;
	std::cin >> cal->arr;
	std::cout << cal->calculate();
}