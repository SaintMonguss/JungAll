#include <iostream>
#include <array>

int main()
{
	int* building;
	int building_num;
	std::cin >> building_num;
	int answer;

	building = new int[building_num];
	for (int i = 0; i < building_num; i++)
	{
		std::cin >> building[i];
	}
	for (int i = 0; i < building_num; i++)
	{
		answer = 0;
		for (int j = i + 1; j < building_num; j++)
		{
			if (building[i] < building[j])
			{
				answer = j+1;
				break;
			}
		}
		std::cout << answer << std::endl;
	}
	return 0;
}

// 시간 초과 뜸 수정 필요