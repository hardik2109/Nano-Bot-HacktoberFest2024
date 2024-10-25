// #include<bits/stdc++.h>
// #include<iterator>
// using namespace std;
// int main()
// {
//     vector<vector<int,int >> p={ {2,3},{1,2},{6,7}};
//      vector<pair<int,int>> ::iterator it;
//      for(it=p.begin(); it=p.end();it++)
//      {
// cout << (*it).first << (*it).second << endl;
//      }
//     return 0;

// }
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<iostream>

using namespace std;

int main()
{
    vector<vector<int,int>> p = {{1,2},{5,6}};
    vector<pair<int,int>>::iterator it;
    for (it = p.begin(); it != p.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}
