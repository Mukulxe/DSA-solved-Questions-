#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[10];
    std::cout << "enter the string";
    std::cin >> arr;
    int i = 0;
    int count = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    std::cout<<"length of string is:"<<count;
}