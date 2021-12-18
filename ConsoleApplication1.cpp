#include <iostream>
#include <string>

using namespace std;

int main()
{
    int b(0), c(0), resultat1(0), a2(0), b2(0), c2(0), resultat2(0);
    string a ("x");
    cout << "Quelle sont vos deux nombre ?" << endl;
    cin >> b;
    cin >> c;
    b2 = b * b;
    c2 = c * c;
    resultat1 = b2 + c2;
    cout << "Trouver la racine carré de : " << resultat1 << endl;
    cin >> resultat2;
    cout << "Le nombre " << a << " est " << resultat2;
    return 0;
}

