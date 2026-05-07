#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>a(5);//can also initilize in this way
    // // cout<<a.size()<<endl<<a.capacity();
    // vector<int>a(5,7);//This means initial size=5 each element has value 7
    // cout<<a[4];
    //Taking input in vector
    vector<int>a;
    int n;
    cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)

       { cout<<a[i];
       }
    return 0;
    }