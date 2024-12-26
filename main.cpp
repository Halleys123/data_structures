#include <iostream>

using namespace std;

static int count = 0;

void function()
{
    if (::count == 4)
        return;
    ::count++;
    function();
}

int main()
{
    function();
    cout << "count = " << ::count << endl;
    return 0;
}