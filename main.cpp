#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    int amount;
    int n;
    cout<<"Amount= ";
    cin>>amount;
    cout<<"Number of coins= ";
    cin>>n;
    int coin[n];
    int m[n+1][amount+1];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        coin[i]=x;
    }

    for(int r=0;r<=n;r++){
        for(int c=0;c<=amount;c++){
          if(r==0 && c>=1 ){
            m[r][c]=0;
          }
          else if(c==0){
            m[r][c]=1;
          }
          else{
            m[r][c]=2;
          }

        }
    }


     for(int r=0;r<=n;r++){
        for(int c=0;c<=amount;c++){
                cout<<m[r][c]<<" ";
        }
        cout<<endl;
     }

return 0;
}
