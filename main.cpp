#include <iostream>
using namespace std;
int main() {
    /// A Dan B gacha tub sonlar ekranga chiqarish
    /*
    for (int i = 50; i <= 100; i++) {
       int sanoq=0;
       for (int j = 1; j <= i; j++) {
           if (i % j == 0) sanoq++;
       }
       if (sanoq ==2) cout << i << " ";
   }
   */

    /*
    /// Sonning necha xonali ekanini topish
    int son; cout << "Enter a number: "; cin >> son;
    int sanoq=0;
    while(true) {
        son = son /10;
        ++sanoq;
        if(son==0) break;
    }
    cout << " Natija: "<< sanoq << " xonali son"<< endl;
    */

    /// Sonning juft raqamlarini topish
    /*
    int son,birlar;
    cout<<" Enter a number: "; cin>>son;
    int sanoq=0;
    while(true) {
        birlar=son % 10;
        if ( son % 2 == 0) ++sanoq;
        son/=10;
        if (son == 0) break;
    } cout << " bu sonda "<<sanoq <<" ta juft son bor"<< endl;
    */

    /// Sonlar kiritish va 0 kirtilganda to'xtash, va ungacha nechta son kiritilganini sanash
    /*
    int son, sanoq;

    while(true) {
        cout<< "Sonni kiriting: "; cin >> son;
        if ( son == 0 ) break;
        ++sanoq;
    } cout << "Natija : "<< sanoq << endl;
    */

    /// Faqat 50 Dan katta sonlar yig'indisini topish
    /*
    int son, summa;
    while ( true) {
        cout<< " Enter a number: "; cin >> son;
        if (son == 0) break;
        if ( son> 50) summa+=son;
    }  cout << "Natija : "<< summa << endl;
    */

    /// Sonlar ichida 5 raqami borligini aniqlash
    /*
    int son, birlar;
    cout<<"Please enter a number: "; cin>>son;
    int sanoq=0;
    while (true) {
        birlar = son % 10;
        if (birlar == 5) ++sanoq;
        son/=10;
        if (son==0) break;
    } if (sanoq>0) cout<< " 5 raqami mavjud \n";
    else cout<< " 5 raqami mavjud emas \n";
    */
    /*
    /// Berilgan son 3 Ning darajasi yoki yo'qligini aniqlash
    int n;
    cout << "Enter a number: "; cin >> n;
    int i=1;
    while (n > i) {
        i*=3;
    } if ( i==n) cout << " 3 ning darajasi \n";
    else cout << " 3 ning darajasi emas \n";
    */
    
    return 0;
}