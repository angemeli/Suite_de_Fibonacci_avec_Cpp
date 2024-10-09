#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, b=0;
    int term_p = 0;
    int term_s = 1;

    cout << "\nSoit n le nombre de termes de la suite de Fibonnacci que vous souhaitez afficher.\nEntrez la valeur de n : ";
    cin >> n;

    while (n<=0) {
        cout << "Vous devez entrer un nombre entier non nul, entrez une autre valeur pour n : ";
        cin >> n;
    }

    if (n<3) {
        if (n==1) {
            cout << "\nLe premier terme de la suite de Fibonnacci est 0\n";
        }
        else if (n==2)
        {
            cout << "\nLes deux premiers termes de la suite de Fibonnacci sont 0 et 1\n";
        }
    }
    else {
        cout << "\nLes "<<n<<" premiers termes de la suite de Fibonnacci sont :\n";
        cout << term_p <<"  ";
        cout << term_s <<"  ";

        for(i = 3; i <= n; ++i)
        {
            b = term_s;
            term_s += term_p;
            cout << term_s <<"  ";
            term_p = b;
        }
        cout <<"\n";
    }

    return 0;
}