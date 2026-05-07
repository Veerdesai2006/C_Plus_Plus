//Que. Trapping rainwater (leetcode-42)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int trap(vector<int>& height){
    int n=height.size();
    vector<int>prev(n);
    prev[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<height[i]){
           max=height[i];
        }
    }
    vector<int>next(n);
    next[n-1]=-1;
    int max2=height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max2;
        if(max2<height[i])
    {
        max2=height[i];
    }
}
    for(int i=0;i<n;i++){
        prev[i]=min(prev[i],next[i]);
    }
    int water=0;
    for(int i=0;i<n-1;i++){
        if(height[i]<prev[i]){
            water+=prev[i]-height[i];
        }
    }
    
    return water;
}
int main(){

    vector<int>v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(1);   
    int a = trap(v1);
            cout<<endl;
             cout<<"The traped water is equal to  : ";

        cout<<a;
    
    return 0;
 }

