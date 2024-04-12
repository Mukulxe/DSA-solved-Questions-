#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int n1,n2,n3;
    vector<int>res;
    std::cout<<"enter the limits";
    std::cin>>n1;
    std::cin>>n2;
    std::cin>>n3;
    int arr1[]={1,5,10,20,40,80};
    int arr2[]={6,7,20,80,100};
    int arr3[]={3,4,15,20,30,70,80,120};
    map<int,int>mp;
    for (int i = 0; i < n1; i++)
    {
        mp[arr1[i]]++;
        int temp=arr1[i];
        while (arr1[i]==temp)
        {
            i++;
        }
        i--;
       
    }
    for (int i = 0; i < n2; i++)
    {
        mp[arr2[i]]++;
        int temp=arr2[i];
        while (arr2[i]==temp)
        {
            i++;
        }
        i--;
       
    }
    for (int i = 0; i < n3; i++)
    {
        mp[arr3[i]]++;
        int temp=arr3[i];
        while (arr3[i]==temp)
        {
            i++;
        }
        i--;
       
    }
    auto it=mp.begin();
  for (it = mp.begin(); it!=mp.end();it++)
  {
    if (it->second==3)
    {
       std:: res.push_back(it->first);
    } 
  }
  return std:: res;
}