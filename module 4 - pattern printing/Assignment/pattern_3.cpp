        // Q3. Print the following pattern
        // Input: n = 4
        // Output:     A
        //             AB
        //             ABC    
        //             ABCD

 #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter the value : ";
        cin>>n;
        for(int i=1;i<=n;i++){
                
            for(int j=1;j<=i;j++){
                
                cout<<char(64+j); //typecasting
            }
            cout<<endl;
        }
        return 0;
    }