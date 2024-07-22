#include <iostream>
using namespace std;

template <class T>
T Quatradic(T a, T b, T c){
    T d = b*b - 4*a*c;
    if (d < 0){
        return 0;
    }
    return (-b + sqrt(d)) / (2*a);
    return (-b - sqrt(d)) / (2*a);
    return 0;

}
int main () {
    cout << Quatradic(1,2,2) << endl;
    cout << Quatradic(1, 2, 4) << endl;
    cout<< Quatradic(1, 2, 3) << endl;
    return 0;
}

//output 