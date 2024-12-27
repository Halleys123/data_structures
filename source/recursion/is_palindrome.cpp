#include <string>
#include "is_palindrome.h"

bool is_palindrome(std::string str, int i)
{
    if (i >= str.length() / 2)
        return true;

    if (str[i] == str[str.length() - i - 1])
        return is_palindrome(str, i + 1);
    else
        return false;
}

bool is_palindrome(std::string str)
{
    return is_palindrome(str, 0);
}