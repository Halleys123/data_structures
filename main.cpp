#include <iostream>
#include "source/other/sign.h"
#include "source/recursion/print_name_5_times.h"
#include "source/recursion/sum_of_n_numbers.h"
#include "source/recursion/print_to_backtrack.h"

using namespace std;

int main()
{
    int sum = 0;
    cout << "Main Running" << endl;
    parameterized_sum_of_n(10, sum);
    cout << "Sum: " << sum << endl;
    return 0;
}