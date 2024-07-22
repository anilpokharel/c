#include <iostream>
using namespace std;

class Sinterest{
    private:
    int p,t;
    int r=8;  //defult argument

    public:
    void getdata(){
        cout<<"Enter the princlple amount:"<<endl;
        cin>>p;
        cout<<"Enter the time:"<<endl;
        cin>>t;
        cout<<"Enter the rate:"<<endl;
        cin>>r;
    }
    void display(){
        int si;
        si = (p*t*r)/100;
        cout<<"Simple intrest is:"<<si<<endl;
    }
};

main(){
    int i, n;
    cout<<"Enter the number of times you want to enter the data:"<<endl;
    cin>>n;

    for(i=0;i<n;i++){
        Sinterest s;
        s.getdata();
        s.display();
        cout<<endl;
    }
}

//