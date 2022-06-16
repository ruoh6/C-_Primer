#include <iostream>
int main()
{
	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;
	if(v1 > v2){//使用>=才行，而=>则不行。
		while(v1 > v2){
			std::cout << v2 << " ";
			++v2;
		}
	}else {
		while(v1 <= v2){
			std::cout << v1 << " ";
		        ++v1;	
		}
	}
	std::cout << std::endl;
	return 0;
}
