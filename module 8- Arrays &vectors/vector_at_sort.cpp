    
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a;
    // now for inserting elements we use pushback operator.
    a.push_back(88);
    a.push_back(2);
    a.push_back(25);
    a.push_back(12);
    for(int i=0;i<a.size();i++)

       { cout<<a[i]<<" ";
       }
       cout<<endl;
      sort(a.begin(),a.end());
   for(int i=0;i<a.size();i++)

       { cout<<a[i]<<" ";
       }
    return 0;
    }