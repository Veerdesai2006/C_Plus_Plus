#include<iostream>
using namespace std;
int main(){
    //decleration
    int arr[3][3];
        //row->3
        //column->3
        //Now how to access or initilize
        arr[1][2]=15;
        cout<<arr[1][2];
        //another method to initilize array
     int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     //or
     int brr[3][3]={1,2,3,4,5,6,7,8,9};//this also means same
     cout<<endl<<brr[2][1];   
    }