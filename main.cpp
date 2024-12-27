#include <iostream>
#include "source/other/sign.h"
#include "source/recursion/print_name_5_times.h"
#include "source/recursion/sum_of_n_numbers.h"
#include "source/recursion/print_to_backtrack.h"
#include "source/recursion/factorial.h"
#include "source/recursion/reverse_array.h"
#include "source/recursion/is_palindrome.h"

#include "source/multiple_recursion/fibonacci.h"

using namespace std;

string count(int num)
{
    if (num == 0)
        return "th";
    if (num == 1)
        return "st";
    if (num == 2)
        return "nd";
    if (num == 4)
        return "rd";
    return "th";
}

void array_print(int *arr, int size)
{
    int i = 0;
    while (i < size)
    {
        cout << arr[i] << " ";
        i += 1;
    }
    cout << endl;
}

int main()
{
    cout << "Main Running" << endl;

    string str = "madam";

    int size = 5;
    int *array = new int[size];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    array_print(array, size);
    reverse_array(array, 1, size);
    array_print(array, size);

    int sum = 0;
    int fibonacci_index = 5;

    parameterized_sum_of_n(10, sum);
    cout << "Parameter Sum: " << sum << endl;
    cout << "Functional Sum: " << functional_sum_of_n(10) << endl;
    cout << "Factorial: " << factorial(3) << endl;
    cout << "Factorial: " << factorial(-1) << endl;
    printf("%s is %s palindrome\n", str.c_str(), is_palindrome(str) ? "a" : "not");

    cout << fibonacci_index << count(fibonacci_index) << " fibonacci number is " << fibonacci(fibonacci_index) << endl;

    delete[] array;
    return 0;
}