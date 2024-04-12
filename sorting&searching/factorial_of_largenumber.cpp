// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     int x;
//     std::cin >> n;
//     int carry = 0;
//     vector<int> array;
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 0; j< array.size(); j++)
//         {
//             x = array[j] * i + carry;
//             array[j] = x % 10;
//             carry = x / 10;
//         }

//         if (carry)
//         {
           
//             array.push_back(carry%10);
//             carry=carry/10;
//         }
//         carry=0;
//     }
//     std::reverse(array.begin(),array.end());
//    cout<<array;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x;
    std::cout<<"enter the number";
    std::cin >> n;
    int carry = 0;
    vector<int> array;
    array.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < array.size(); j++)
        {
            x = array[j] * i + carry;
            array[j] = x % 10;
            carry = x / 10;
        }

        while (carry)
        {
            array.push_back(carry % 10);
            carry = carry / 10;
        }
        carry = 0;
    }
    reverse(array.begin(), array.end());
    for (int i = 0; i < array.size(); i++)
    {
        std::cout<<array[i];
    }   
}
