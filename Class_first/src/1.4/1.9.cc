#include <iostream>
int main()
{
	int i = 50;
	int sum = 0;
	while(i < 100){
		sum += i;
		++i;
	}
	std::cout << i << std::endl;
	return 0;
}
