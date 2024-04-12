#include <iostream>
#include <cstring>
int main()
{
    char arr[100];
    std::cout << "enter the array";
    std::cin.getline(arr, 100);
    for (int i = 0; i <= strlen(arr); i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
    }

    std::cout << arr;
}
