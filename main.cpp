#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    int a, b, r1, r2;
    r1 = sizeof(int)*8;
    cin >> a >> b;

    float c, d;
    r2 = sizeof(float)*8;
    c = sqrt(a*a + b*b);
    d = a + b + c;

    wcout << L"int занимает ";
    cout << r1;
    wcout << L" битов. Min=";
    cout << INT_MIN << "Max=" << INT_MAX << endl;
    wcout << L"float занимает ";
    cout << r2;
    wcout << L" битов. Min=";
    cout << FLT_MIN << "Max=" << FLT_MAX << endl;
    wcout << L"Гипотенуза:";
    cout << c << endl;
    wcout << L"Периметр:";
    cout << d << endl;
}
