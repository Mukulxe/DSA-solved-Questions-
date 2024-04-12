#include <iostream>
#include <string>
bool palindrome(const std::string &s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    std::string s;
    std::cout << "Enter the string: ";
    std::cin >> s;

    int i = 0;
    int j = s.length() - 1;
    int ans = 0;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            if (palindrome(s, i + 1, j) || palindrome(s, i, j - 1))
            {
                ans = 1;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
         i++;
                j--;
    }
    if (ans == 1)
    {
        std::cout << "This is not a palindrome" << std::endl;
    }
    else
    {
        std::cout << "This is a palindrome" << std::endl;
    }

    return 0;
}
