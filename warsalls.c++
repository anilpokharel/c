#include <iostream>
using namespace std;

void warsalls(int n, int a[20][20]){
    int i, j, k;
    for(k=0; k<n; k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j] = a[i][j]||(a[i][k]&&a[k][j]);
            }
        }
    }
    cout<<"The matrix is:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int a[20][20], n,i,j;

    cout<<"Enter the Number of vertices:"<<endl;
    cin>>n;

    cout<<"Enter the Adjacency Matrix"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    warsalls(n,a);
    return 0;
}