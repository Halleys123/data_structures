#include "./print_name_5_times.h"
#include <iostream>

using namespace std;

static int count = 0;

void print_name()
{
    if (::count == 5)
        return;
    cout << "Arnav Chhabra" << endl;
}