#include <iostream>
#include <vector>
using  namespace std;


void func(vector<int>vec,int k){
    int i=0;
    int j=0;
    int temp=0;
    bool b= false;
    while(i<vec.size()){
        temp=temp+vec[j];
        if(temp==k){
            b= true;
            break;
        }
        else if(temp<k){
            j++;
        }
        else if(temp>k){
            i++;
            j=i;
            temp=0;
        }
    }
    if(b) {
        cout << i + 1 << " " << j + 1<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}

int main() {
    int t;
    cin>>t;
    while(t--){
        int size,sum;
        cin>>size>>sum;
        vector<int>vec;
        for(int i=0;i<size;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        func(vec,sum);

    }
}