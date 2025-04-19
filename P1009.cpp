#include <iostream>
#include <vector>

using std::cin;
using std::cout;

int main()
{
    int num;
    size_t result = 0;
	std::vector<size_t> numList(51, 1);

	cin >> num;

	for (int i = 2; i <= num; i++)
	{
		numList[i] = i * numList[i - 1];
	}

	for (int j = 1; j <= num; j++)
	{
		result += numList[j];
	}

	cout << result;
}
