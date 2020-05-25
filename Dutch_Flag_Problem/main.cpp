#include<iostream>
#include<vector>
using namespace std;

vector<string>solve(vector<string>& s) {
    int low=0;
    int mid=0;
    int high = s.size()-1;

    while(mid<=high){

        if(s[mid]=="red"){
            if(mid<=high) {
                swap(s[mid], s[low]);
                low++;
                mid++;
            }
        }
        else if(s[mid]=="green")
        {            if(mid<=high) {

                mid++;
            }
        }
        else if(s[mid]=="blue"){
            if(mid<=high) {

                swap(s[mid], s[high]);
                high--;
            }
        }
    }
    for(string i:s){
        cout<<i<< " ";
    }
    return s;
};



int main(){
    vector<string>vec{"green","red","blue","red"};
    solve(vec);

    return 0;
}