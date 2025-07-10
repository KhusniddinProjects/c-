#include <iostream>
#include <cmath>
using namespace std;
int main() {
    /*
    /// Berilgan str satridagi kichik harflar va raqamlarni birgalikdagi
    /// sonini aniqlo'vchi dastur tuzing.
    string s;
    cout<<"Enter string: "; getline(cin, s);
    int strLen = s.length();
    int a = 0;
    int b = 0;
    for (int i = 0; i < strLen; i++) {
        if (islower(s[i])) ++a;
        if (isdigit(s[i])) ++b;
    }  cout<<" kichik harflar "<<a<<endl;
       cout<<" raqamlar "<<b<<endl;
       cout << " birgalikda " << a+b<<endl;
    */

    /*
    /// Berilgan str satridagi katta harflar va raqamlarni
    /// birgalikdagi sonini aniqlo'vchi dastur tuzing.
    string s;
    cout<<"Enter string: "; getline(cin, s);
    int strLen = s.length();
    int a = 0, b = 0;
    for (int i = 0; i < strLen; i++) {
        if (isupper(s[i])) ++a;
        if (isdigit(s[i])) ++b;
    } cout << " katta harflar " << a << endl;
    cout << " raqamlar " << b << endl;
    cout << " birgalikda " << a + b << endl;
    */

    /*
    // Berilgan str satridagi katta harflar, kichik harflar, raqamlar va belgilarni
    // sonini alohida aniqlo'vchi dastur tuzing.
    string s;
    cout<<"Enter a string: "; getline(cin, s);
    int strLen = s.length();
    int a=0, b=0, c=0, d=0;
    for(int i=0; i<strLen; i++) {
        if (isupper(s[i])) ++a;
        else if (islower(s[i])) ++b;
        else if (isdigit(s[i])) ++c;
        else if (!isupper(s[i])&& !islower(s[i]) &&!isdigit(s[i])) ++d;
    } cout << " katta harflar "<<a<< endl;
     cout << " kichik harflar "<<b<< endl;
     cout << " raqamlar "<<c<< endl;
     cout << " belgilar " <<d<< endl;
    */
    return 0;

}