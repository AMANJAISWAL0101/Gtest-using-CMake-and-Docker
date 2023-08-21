#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
#ifndef GTEST_ENABLED
int main()
{
    std::cout<<add(5,6)<<std::endl;
    return 0;
}
#else
int controllermain() {
    std::cout<<"Controller main "<<std::endl;
    return 0;
}

#endif
