#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    // now for inserting elements we use pushback operator.
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    a.pop_back();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";

    }
    cout<<endl<<a.capacity()<<endl;
    cout<<a.size()<<endl;
    return 0;
    }