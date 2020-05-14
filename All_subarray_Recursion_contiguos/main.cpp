#include <iostream>
#include <vector>
using  namespace std;


void printSubarrays(vector<int>vec,int start,int end){

    if(end>vec.size()-1){
        return;
    }
    else if(start>end){
        printSubarrays(vec,0,end+1);
    }
    else{
        vector<int>temp;
        for(int i=start;i<=end;i++){
            temp.push_back(vec[i]);
        }
     for(int i : temp){
         cout<<" "<<i;
     }
     cout<<endl;
        printSubarrays(vec,start+1,end);
    }


}

int main() {
   vector<int>vec{1,2,3};
   printSubarrays(vec,0,0);
    return 0;
}
