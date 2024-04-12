// #include <bits/stdc++.h>
// #include <math.h>
// // #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {1, 2, 3, 4, 5};
//     vector<int> v2;
//     int high = v1.size() - 1;
//     int low = 0;
//     int mid;
//     int k;
//     std::cout << "enter the value of k";
//     std::cin >> k;
//     int x;
//     std::cout << "enter the value of x";
//     std::cin >> x;
//     while (abs(high - low) >= k)
//     {
//         if ((x - v1[low]) < (x - v1[high]))
//         {
//             high--;
//         }
//         else
//         {
//             low++;
//         }
//     }
//     for (int i = low; i <=high; i++)
//     {
//         v2.push_back(v2[i]);
//     }
//     for (int i = 0; i < v2.size(); i++)
//     {
//         std::cout<<"your element is:"<<v2[i];
//     }
// }
#include <bits/stdc++.h>
using namespace std;
void binarysearch(vector<int> v1, int size, int x, int k)
{
    int start = 0;
    int end = size;
    int mid;
    int ans = -1;
    mid = start + (end - start) / 2;
    int element = v1[mid];
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (x < v1[mid])
        {
            end = mid - 1;
        }
        else if (x > v1[mid])
        {
            start = mid + 1;
        }
        else if (x == v1[mid])

        {
            ans = mid;
            break;
        }
    }
    int low = ans - 1;
    int high = ans;
    while (k > 0)
    {
        if (x - v1[low] <= v1[high] - x && low!=-1)
        {
            low--;
        }
        else
        {
            high++;
        }
        k--;
    }
    for (int i = low+1; i < high ; i++)
    {
        std::cout << v1[i]<<" ";
    }
    std::cout << std::endl;
}
int main()
{
    // vector<int> v1 = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    vector<int> v1 = {1,2,3,4,5};
    int x;
    int ans;
    int k;
    std::cout << "enter the x element";
    std::cin >> x;
    std::cout << "enter the k element";
    std::cin >> k;
    int size = v1.size() - 1;
    binarysearch(v1, size, x, k);
}