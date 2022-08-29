#include <string>
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
	std::vector<std::string> answer;
	std::string sent, word;
	std::stringstream *ss;
	std::vector<std::string>::iterator iter = answer.begin();
	bool check = true;


	while (true)
	{
		std::getline(std::cin, sent);
		if (sent == "END")
			return 0;
		ss = new std::stringstream(sent);
		while (*ss >> word)
		{
			check = true;
			if (answer.size() == 0)
				answer.push_back(word);

			for (iter = answer.begin(); iter != answer.end(); ++iter)
			{
				if (word == *iter)
				{
					check = false;
					break;
				}
			}
			if (check == true)
			{
				answer.push_back(word);
				check = false;
			}
		}
		for (iter = answer.begin(); iter != answer.end(); ++iter)
			std::cout << *iter << " ";
		std::cout << std::endl;
	}
	return 0;
}