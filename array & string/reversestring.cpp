// #include <bits/stdc++.h>
// #include <string.h>
// int main()
// {
//     char arr[] = {'l', 'u', 'v'};
//     int i=0;
//     int j=strlen(arr)-1;
//     while (i <= j)
//     {
//         std::swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for (int i = 0; i < strlen(arr); i++)
//     {
//         std::cout<<arr[i];
//     }
//     std::cout << std::endl;
    
// }
#include <iostream>
#include <cstring>

int main() {
    char arr[10] = {'l', 'u', 'v'};
    int i = 0;
    int j = strlen(arr) - 1;
    while (i <= j) {
        std::swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < strlen(arr); i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;

    return 0;
}
