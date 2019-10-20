#include <iostream>

using namespace std;

int main()
{
    cout << "introdu un numar intreg" << endl;
     int NR=0;
        cin >> NR ;
    short contor=0;
        do (NR = NR/10 , contor++) ;
        while (NR!=0);
    cout << "numarul introdus are " << contor << " cifre" << endl;
}
