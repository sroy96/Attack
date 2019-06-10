#include<bits/stdc++.h>
using namespace std;
//Mosaic and Tiles
int main(){

int n,m,k;
cout<<"n,m,k?"<<endl;

cin>>n>>m>>k;
int a[n][m];
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        int x;
        cin>>x;
        a[i][j]=x;
  }
}

int c=0;
for(int i=1;i<=(n-(k-1));i++){
        for(int j=1; j<=(m-(k-1));j++){
            if(a[i][j]==0){
                for(int q=i;q<i+k;q++){
                    for(int w=j;w<j+k;w++){
                        if(a[q][w]==0){
                            a[q][w]=1;
                        }
                        else{
                            a[q][w]=0;
                        }
                    }
                }
                c++;
            }
            else{
                if(a[i][j+1]==0){
                    cout<<"-1"<<endl;
                    exit(0);
                }
                else{
                    continue;
                }
            }
        }

}

int d=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<a[i][j]<<" ";
        if(a[i][j]==1){
            d++;
        }
    }
    cout<<endl;
}
if(d==n*m){
    cout<<"count= "<<c;
}

///end
}
