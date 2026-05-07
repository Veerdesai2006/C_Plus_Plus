//Q. sort a string in decreasing order of values associated after removal of values smaller than x .
#include<iostream>

#include<string>

using namespace std;

int main(){

string s = "AZXAYK";

string str = "";

for(int i=0;i<s.size();i++) {

if(s[i]>='X'){

str.push_back(s[i]);

}

}
int n= str.size();
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++){
        if(str[j]>str[j+1]){
            swap(str[j],str[j+1]);
        }
    }
}
cout<<str;

}