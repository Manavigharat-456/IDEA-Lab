#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int num, reversedNum = 0, remainder, originalNum = x;

    // Reverse the number

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original and reversed numbers are equal

    if (x == reversedNum)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("%d", isPalindrome(-121));
    // isPalindrome(121);
    // isPalindrome(10);
    return 0;
}