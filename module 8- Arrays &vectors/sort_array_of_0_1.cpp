//Que. sort the arry of 0's and 1's (without using sort function).
    //Method 1-Two pass method.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    int noz=0;//no of zeros
    cout<<"The unsorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
            if(v[i]==0){
                noz++;
            }
    }
    cout<<endl;
    // for(int j=0;j<noz;j++){
    //     v[j]=0;
    // }
    // for(int j=noz;j<v.size();j++){
    //     v[j]=1;
    // }

                //orr

            for(int i=0;i<v.size();i++){
                if(i<noz){
                    v[i]=0;
                }
                else{
                    v[i]=1;
                }
            }

    cout<<"The sorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}