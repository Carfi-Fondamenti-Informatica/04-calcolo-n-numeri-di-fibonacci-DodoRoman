#include <iostream>
using namespace std;

int main() {
   int n=0;
   int a=1, b=0;
   cin >> n;
   if (n<2){
       cout << "errore" << endl;
   }
   else {
       cout << a << endl;
       for (int i=0; i<n-1; i++){
           cout << a+b << endl;
           if (a<b){
               a = a+b;
           }
           else{
               b = b+a;
           }
       }
   }
   return 0;
}
