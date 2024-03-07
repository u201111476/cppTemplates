#include <iostream>
#include <string>
#include <complex>

using std::cout;
using std::endl;

template<typename T>
T max(T a, T b)
{
    cout << typeid(T).name() << endl;
    return a < b ? b : a;
}

int main()
{
    cout<<::max(1, 2)<<endl;
    cout << ::max(3.0, 4.0) << endl;
    std::string str1 = "mathmatics";
    std::string str2 = "math";
    cout << ::max(str1, str2) << endl;
    std::complex<float> c1, c2;
    //max(c1, c2);        //报错，对重载函数的调用不明确
    return 0;
}