// #include <bits/stdc++.h>
// using namespace std;
// void func(int arr[],int i,int size)
// {
//     if(i>=size)
//     {
//         return;
//     }
//     std::cout<<"your array is->"
//     <<arr[i]<<endl;
//     func(arr,i+1,size);
// }
// int main()
// {
//     int arr[]={10,12,13,14,15};
//     int i=0;
//     int size= sizeof(arr)/sizeof(arr[0]);
//     func(arr,i,size);
// }

//second way of doing this---------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
void func(int arr[],int size)
{
    if(size==0)
    {
        return;
    }
    std::cout<<"your array is->"
    <<arr[0]<<endl;
    func(arr+1,size-1);
}
int main()
{
    int arr[]={10,12,13,14,15};
    int i=0;
    int size= sizeof(arr)/sizeof(arr[0]);
    func(arr,size);
}