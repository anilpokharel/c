#include <iostream>
using namespace std;

template <class T>
T Largest(T a, T b)
{
    if(a>b){
        rteurn a;
    }
    else(
        return b;
    )
}
main(){
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout<<"Enter two integers: "<<endl;
    cin>>i1>>i2;
    cout<<Largest(i1, i2)<<"is larger"<<endl;

    cout<<"Enter two numbers:"<<endl;
    cin>>f1>>f2;
cout<<Largest(f1, f2)<<"is larger"<<endl;

cout<<"Enter two characters:"<<endl;
cin>>c1>>c2;

cout<<Largest(c1, c2)<<"is larger"<<endl;


}

// Enter two integers:
// 4  5 