#include <iostream>
#include <test.hpp>

using namespace std;

int main()
{
    S s;
    s.num = 20;
    s.str = "hello, world!";
    cout << s.str << endl;

    return 0;
}
