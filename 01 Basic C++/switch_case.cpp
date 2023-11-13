#include <iostream>

using namespace std;
int main()
{

    int num;
    cin >> num; // 3;

    switch (num)
    {
    case 1:
        cout<< "One"<<endl;
        break;
    
    case 2:
        cout<< "Two"<<endl;
        break;
    
    case 3:
        cout<< "Three"<<endl;
        break;
    
    case 4:
        cout<< "Four"<<endl;
        break;
    
    case 5:
        cout<< "Five"<<endl;
        break;
    
    default:
        cout<< "Less then 1 or More then 5"<<endl;
        break;
    }

   

    return 0;
}