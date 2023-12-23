#include <iostream>



bool iseven(int n){
	if(n % 2 == 0) return true;
	return false;	
}

int main(){
	int n;
	std::cin >> n;

	if (!iseven(n))
		std::cout << "NO" << std::endl;

	if (iseven(n) && n <= 2)
		std::cout << "NO" << std::endl;
	
	if (iseven(n) && n > 3)
		std::cout << "YES" << std::endl;

    return 0;
}

