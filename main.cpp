#include <iostream>
using namespace std;
int main() {
    /// Ikkita a va b soni berilgan. Berilgan sonlarni qaysi birini
    /// bo'luvchilari ko'pligini topuvchi dastur tuzing.
/*
    int a,b; cout<<"Enter a number:";cin>>a;
    cout<<"Enter another number:";cin>>b;
    int miqdorA=0,miqdorB=0;
    for (int i=1; i<=a; i++) {
        if (a%i==0) {
            cout<<i<<" "; miqdorA++;
        }
    }
    for (int i=1; i<=b; i++) {
        if (b%i==0) {
            cout<<i<<" "; miqdorB++;
        }
    }
    if (miqdorA==miqdorB) {
        cout<<"\n ikki sonda ham bo'luvchilar teng " <<endl;
       }
    else if ( miqdorA>miqdorB) {
        cout <<" \n birinchi sonning bo'luvchilari ko'p "<< endl;
    }
    else if ( miqdorA<miqdorB) {
                cout<< " \n ikkinchi sonning bo'luvchilari ko'p "<< endl;
            }
            */

    /// Ikkta a va b sonlari berilgan. a soni b dan kichik a dan b gacha bo'lgan sonlarni
    /// yeg'indisi aniqlovchi dastur tuzing. ( a va b  yegindiga kirmasin ).
/*
    int a,b;
    cout<<"Enter two numbers"; cin>>a>>b;
    int sum=0;
    for (int i=a; i<=b; i++) {
        cout << i<< " ";sum+=i;
    }
    cout<<"\n "<< sum<<endl;
    */

    return 0;
}