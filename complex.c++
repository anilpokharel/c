#include <iostream>
using namespace std;

class complex{
    private:
    int a1, b1;
    int a2, b2;

    public:
    void setdata(){
        cout<<"Enter the real part of first complex number:"<<endl;
        cin>>a1;
        cout<<"Enter the imaginary part of first complex number:"<<endl;
        cin>>b1;
        cout<<"Enter the real part of second complex number:"<<endl;
        cin>>a2;
        cout<<"Enter the imaginary part of second complex number:"<<endl;
        cin>>b2;
    }
    void display(){
        cout<<"The first complex number is:"<<a1<<"+"<<b1<<"i"<<endl;
        cout<<"The second complex number is"<<a2<<"+"<<b2<<"i"<<endl;

        cout<<"The sum of two complex number is:"<<a1+a2<<"+"<<b1+b2<<"i"<<endl;


    }
};

main(){
    complex c1;
    c1.setdata();
    c1.display();
}