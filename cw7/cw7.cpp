#include <iostream>
using namespace std;

//zadanie1

//string binarnie(int n) {
//    if (n == 0) return "0";
//    else if (n == 1) return "1";
//    else {
//        return (binarnie(n / 2) + binarnie(n % 2));
//    }
//}

//zadanie2


int NWD(int a, int b)
{
    if (b != 0)
        return NWD(b, a % b);
    return a;
}


//zadanie3

//int fibo(int n) {
//    if (n == 0) return 0;
//    else if (n == 1) return 1;
//    else return fibo(n - 1) + fibo(n-2);
//}

//zadanie4

//int sil(int n) {
//    if (n == 0) return 0;
//    else if (n == 1) return 1;
//    else return n * sil(n - 1);
//}

//zadanie5

//float ciag(float n) {
//    if (n == 1)return 0;
//    else if (n == 2) return 0.5;
//    else return (0 - ciag(n - 1)) * ciag(n - 2);
//}
int main()
{
    //zadanie1

    //int a;
    //cout << "podaj liczbe dziesietna: \n";
    //cin >> a;
    //cout << a << "(10) = " << binarnie(a) << "(2)";

    //zadanie2
    int a;
    int b;
    cout << "podaj liczbe a oraz b: ";
    cin >> a >> b;
    cout << "NWD " << a << " i " << b << " = " << NWD(a, b) << endl;

    //zadanie3
   /* int a;
    cout << "podaj numer wyrazu ciagu: " << endl;
    cin >> a;
    cout << "wyraz nr " << a << " ma wartosc " << fibo(a) << endl;*/

    //zadanie4
    /*int a;
    cout << "podaj liczbe: ";
    cin >> a;
    cout << "silnia z " << a << " = " << sil(a) << endl;*/

    //zadanie5
  /*  int a;
    cout << "podaj liczbe: ";
    cin >> a;
    cout << "dla " << a << " to " << ciag(a);*/
}
