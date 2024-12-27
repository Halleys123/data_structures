#include <string>

std::string ordinal_number(int num)
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
