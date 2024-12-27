/**
 * Returns the sign of the difference between two numbers (to - from).
 * @param from The first number
 * @param to The second number
 * @return 0 if the numbers are equal, 1 if the second number is greater than the first, -1 otherwise
 */
int sign(int from, int to)
{
    if (from == to)
        return 0;
    return to - from > 0 ? 1 : -1;
}
