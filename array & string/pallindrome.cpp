#include <iostream>
#include <cstring>
int main()
{
    char arr[100];
    int ans;
    std::cout << "enter the array :";
    std::cin.getline(arr, 100);
    for (int i = 0, j = strlen(arr) - 1; i < strlen(arr); i++, j--)
    {
        if (arr[i] == arr[j])
        {
            ans=1;
        }
        else
        {
             ans=-1;
        } 
    }
    if (ans==1)
    {
        std::cout<<"this is pallandrome";
    }
    else
    {
        std::cout<<"this is not a pallindrome";
    }
    
    
}