#include <iostream>

using namespace std;

/*
    int wyswietl(int n) {
        if (n == 1) {
            return 1;
        } else {
            cout <<  n << " ";
            n -= 1;
            return wyswietl(n);
        }

    }
    */

/*
 * string wprowadz() {
    string znak;
    cout << "podaj znak: ";
    cin >> znak;
        if(znak == "*"){
        } else {
            return wprowadz();
        }

}
*/

string choinka(int n, int x) {
    if (n == 0) {
        return "";
    } else {
        for (int i = 0; i < n - 1 / 2; ++i) {
            cout << " ";
        }
        for (int j = 0; j < x; j++) {
            if (j == 0) {
                cout << "*";
            } else {
                cout << "**";
            }
        }
        cout << "\n";
        return choinka(--n, ++x);
    }
}

int NWD(int a, int b) {
    if (b == a) {
        return a;
    } else {
        if (a > b) {
            a -= b;
            return NWD(a,b);
        } else {
            b -= a;
            return NWD(a,b);
        }
    }
}


int main() {
    cout << NWD(12, 18);
    return 0;

}