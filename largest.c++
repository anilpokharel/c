#include <iostream>
using namespace std;

template <class T>
T Largest(T a, T b, T c, T d, T e){
    T max = a;
    if(b>max) max = b;
    if(c>max) max = c;
    if(d>max) max = d;
    if(e>max) max = e;
    return max;
}
int main(){
    int a, b, c, d, e;
    cout<<"Enter 5 Numbers"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"Largest Number is "<<Largest(a, b, c, d, e);
    return 0;
}

//output 