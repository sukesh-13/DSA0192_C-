#include <iostream>
#include <array>
 
struct S
{
    static const int c;
};
 
const int d = 10 * S::c; 
                        
const int S::c = 5;     
 
int main()
{
    std::cout << "d = " << d << '\n';
    std::array<int, S::c> a1; 

}
