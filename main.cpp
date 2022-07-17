#include <iostream>

int main()
{
	int scores[10];
	int extra;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Input Score: ";
		std::cin >> scores[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (scores[i] < scores[j])
			{
				extra = scores[j];
				scores[j] = scores[i];
				scores[i] = extra;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << scores[i] << std::endl;
	}
}