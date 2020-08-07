#include <iostream>
#include <map>

using namespace std;

void case1()
{
    int i = 0;
    double x = 1.0;

    std::string str = "hello";
    std::map<int, std::string> m = {{1,"a"},{2,"b"}};

    std::map<int, std::string>::const_iterator iter = m.begin();
}

void case2()
{
    auto i = 0;
    auto x = 1.0;

    auto str = "hello";
    std::map<int, std::string> m = {{1,"a"},{2,"b"}};

    auto iter = m.begin();

    auto f = bind1st(std::less<int>(),2);
}

void case3()
{
    auto x = 0L;
    auto y = &x;
    auto z{&x};
    //auto err;
}

class X final
{
    //auto a = 10;
    int b = 10;
};

void case4()
{
    auto x = 10L;

    auto& x1 = x;
    auto* x2 = &x;
    const auto& x3 = x;
    auto x4 = &x3;

    cout << *x2 << endl;
    cout << *x4 << endl;
}

void case5()
{
    int x = 0;

    decltype(x) x1;
    decltype(x)& x2 = x;
    decltype(x)* x3;
    decltype(&x) x4;
    decltype(&x)* x5;
    decltype(x2) x6 = x2;

    using int_ptr = decltype(&x);
    using int_ref = decltype(x)&;
}

void case6()
{
    int x = 0;
    decltype(auto) x1 = (x);
    decltype(auto) x2 = &x;
    decltype(auto) x3 = x1;
}

int main()
{
    using namespace std;

    case1();
    case2();
    case3();
    case4();
    case5();
    case6();

    return 0;
}