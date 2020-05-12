#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int ac=( n * (n+1))/2;
        int c=0;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
           c=c+x;
        }
        cout<<ac-c<<endl;
    }
    return 0;
}