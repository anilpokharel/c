#include <iostream>
using namespace std;

template <class T>
T Sum(T a, T b){
    T S;
    S = a+b;
    return S;
}
template <class T>
T Average (T a, T b){
    T A;
    A = (a+b)/2;
    return A;
}


int main ()
{
    int x, y;
    float m, n;

    cout<<"Enter two integers:"<<endl;
    cin>>x>>y;
    cout<<"The sum and average of the two integers:"<<endl;
    cout<<Sum(x, y)<<"is the sum of the two integers:"<<endl;
    cout<<Average(x, y)<<"is the average of the two integers:"<<endl;

    cout<<"Enter two floats:"<<endl;
    cin>>m>>n;
    cout<<"The sum and average of the two floats:"<<endl;
    cout<<Sum(m, n)<<"is the sum of the two floats:"<<endl;
    cout<<Average(m, n)<<"is the average of the two floats:"<<endl;
    return 0;
}
