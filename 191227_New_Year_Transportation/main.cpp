#include <iostream>

int main(void)
{
	unsigned int n, ind = 1, temp, temp2, answer;

	std::cin >> n >> answer;

	for (unsigned int i = 1; i < n && ind < answer; i++)
	{
		std::cin >> temp;
		ind += temp;

		for (unsigned int j = 1; j < temp; j++)
			std::cin >> temp2;
	}

	if (ind == answer)
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}