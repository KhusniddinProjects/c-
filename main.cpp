#include <iostream>
using namespace std;
int main() {
    /// a soni berilgan. Shu sonni tublikga tekshiring. Agar tub bo'lsa true,
    /// aks holda false chiqsin.
    /*
    int a; cout << "Enter a number: "; cin >> a;
    int tub = 0;
    for (int i = 1; i <= a; i++) {
        if ( a%i == 0) {
            cout << i << " ";tub++;
        }
    }
    if (tub == 2) {
        cout << "\n True" <<endl;
    } else cout << "\n False" <<endl;
*/
    /// a va b soni berilgan. Agar 2 lasi ham tub bo'lsa ularni summasini,
    /// aks holda ko'paytmasini chiqaring.
/*
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int tubA = 0;
    int tubB = 0;
    for (int i=1; i<=a; i++) {
        if (a%i==0) {
            cout<<i<<" ";tubA++;
        }
    }
    for (int i=1; i<=b; i++) {
        if (b%i==0) {
            cout<<i<<" ";tubB++;
        }
    }
    if ( tubA==2 && tubB==2 ) cout<<" \n ikkisi ham tub "<< a+b<<endl;
    else if (tubA!=2 && tubB==2) cout<<"\n birinchi son tub emas va boshqasi tub "<< a*b<<endl;
    else if (tubA==2 && tubB!=2) cout<<"\n birinchi son tub va boshqasi tub emas "<< a*b<<endl;
    else if (tubA!=2 && tubB!=2) cout<<"\n ikkisi ham juft "<< a << " va "<< b<<endl;
*/

    return 0;
}