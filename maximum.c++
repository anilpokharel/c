#include <iostream>
using namespace std;

class Class2;
class Class1{

    private:
    int a;

    public:
    void setValue(){
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
    }
    friend void max(Class1, Class2);
};

class Class2{
    private:
    int b;

    public:
    void setValue(){
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    friend void max(Class1, Class2);
};

void max(Class1 m, Class2 n){
    if(m.a>n.b){
        cout<<"The maximum number is:"<<m.a<<endl;
    }
    else{
        cout<<"The maximum number is:"<<n.b<<endl;
    }
}

main(){
    Class1 obj1;
    Class2 obj2;

    obj1.setValue();
    obj2.setValue();
    max(obj1, obj2);
}

//output