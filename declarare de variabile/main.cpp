#include <iostream>
namespace nicu
{

 int VarInName=30;
    int* spreVar=&VarInName;
}
using namespace std;
    short varglob1=5;
    static int varglob2=10 ;

int main()
{
    double varlocala1=15;
    long double varlocala2=20;
    static short varlocala3=25;
     cout << &varglob1 <<" "<< &varglob2 <<" "<< &varlocala1 <<" "<< &varlocala2 <<" "<< &varlocala3 <<" "<< nicu::spreVar << endl;
     return 0;
}
