#include <iostream>
using namespace std;
int ucln(int a, int b)
{
    int r;
    while (a % b != 0)
    {
    r = a % b;
    a = b;
    b = r;
    }
    return b;
}
int main()
{
    long a, b;
    cin >> a >> b;
    cout << "ucln = " << ucln(a, b) << endl;
    cout << "bcnn = " << a * b / ucln(a, b) << endl;
    return 0;
}

