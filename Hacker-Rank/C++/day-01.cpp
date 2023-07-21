#include <iostream>
#include <iomanip>
#include <limits>

typedef std::numeric_limits< double > dbl;

int main() {

    int i = 4;
    double d = 4.0;
    std::string s = "HackerRank ";
    
    
    int integer;
    double d_integer;
    std::string str;
    
    std::cin >> integer;
    std::cin >> d_integer;
    getline(std::cin >> std::ws,str);
    std::string new_s = s + str;
    
    std::cout << i + integer << "\n";
    std::cout.precision(1);
   std::cout << std::fixed << d + d_integer << "\n";
    std::cout << new_s << "\n"; 


    return 0;
}
