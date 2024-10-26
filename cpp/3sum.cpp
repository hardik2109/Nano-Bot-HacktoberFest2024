//Brute force
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={-1,0,1,2,-1,-4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<vector<int>>ans;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             for(int k=j+1;k<n;k++)
//             {
//                 int sum=arr[i]+arr[j]+arr[k];
//                 // cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<sum<<endl;
//                 if(sum==0)
//                 {
//                     vector<int>trip;
//                     trip.push_back(arr[i]);
//                     trip.push_back(arr[j]);
//                     trip.push_back(arr[k]);
//                     ans.push_back(trip);
//                 }
//             }
//         }
//     }
//     for(int i=0;i<ans.size();i++)
//     {
//         for(int ele:ans[i])
//         {
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//optimal approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
   int target=9;
   set<vector<int>>ans;
   vector<int>temp;
   for(int i=0;i<n;i++)
   {
        set<int>s;
        for(int j=i+1;j<n;j++)
        {
            int sum=arr[i]+arr[j];
            int req=-sum;
            if(s.find(req)!=s.end())
            {
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(req);
                sort(temp.begin(),temp.end());
                ans.insert(temp);
                temp.clear();
            }
            s.insert(arr[j]);
        }
   } 
       for(auto i:ans)
    {
        for(int ele:i)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
