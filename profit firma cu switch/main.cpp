#include <iostream>

using namespace std;

int main()
{
    cout <<"introdu numarul trimestrului (1-4)"<<endl;
     unsigned int nr=0;
     cin>> nr;
        switch (nr)
        {
           case 1 : {cout << "profitul firmei pe trimestrul 1 este de 3000"<<endl;
    cout << "bilantul pe anul anterior este de 8375"<<endl;}
    break;
            case 2 : {cout << "profitul firmei pe trimestrul 2 este de 5000"<<endl;}
            break;
                case 3 : {cout << "profitul firmei pe trimestrul 3 este de 4000"<<endl;}
                break;
                    case 4 : {cout << "profitul firmei pe trimestrul 4 este de 2500"<<endl;}
                    break;
                        default : cout << "numar incorect" << endl;
        }
}
