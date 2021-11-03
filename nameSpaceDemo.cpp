#include <iostream>
#include <string>
using namespace std;
#include "AnimalNames.h"

using namespace AnimalNames;
int main()
{   
    string cows[sizeof(cowsNamespace)/sizeof(cowsNamespace[0])] = {};
    string cats[sizeof(catsNamespace)/sizeof(catsNamespace[0])] = {};
    sayHello();
    cout << "\nCows:"<<endl;
    for (int i = 0; i < sizeof(cows)/sizeof(cows[0]); i++)
    {
        cows[i] = AnimalNames::cowsNamespace[i];
        cout << "Cow at: " << i << " is:" << cows[i] << endl;
    }
    cout << "\nCats:"<<endl;
    for (int i = 0; i < sizeof(cats)/sizeof(cats[0] ); i++)
    {
        cats[i] = AnimalNames::catsNamespace[i];
        cout << "Cat at: " << i << " is:" << cats[i] << endl;
    }
    return 0;
}
