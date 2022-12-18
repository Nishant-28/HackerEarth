#include <iostream>
using namespace std;

int main()
{
    long long int D;
    cin >> D;

    long long int Oc, Of, Od;
    long long int Cs, Cb, Cm, Cd;

    cin >> Oc >> Of >> Od;
    cin >> Cs >> Cb >> Cm >> Cd;

    long long int a = 0;
    a = Oc + (D - Of) * Od;

    long long int b = 0;
    b = Cb + (D * Cd) + (D / Cs) * Cm;

    if (a <= b) {
        cout<<endl;
        cout << "Online Taxi" << endl;
    }
    else{
        cout << "Classic Taxi" << endl;
    }
    
    return 0;
}
