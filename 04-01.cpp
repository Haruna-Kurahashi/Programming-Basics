#include <iostream>
using namespace std;
int main {
    double r;
    cin >> r;
    double pi = 3.141692;
    double volume = (4/3) * pi * r * r * r;
    double area = 4 * pi * r * r;
    
    if(area == volume) {
    std::cout << "equal!" << std::endl;
    }
    else if(volume > area) {
     std::cout << "Volume is larger" << std::endl;
    }
    else(area >volume) {
    std::cout << "Area is larger" << std::endl;
    }
}
