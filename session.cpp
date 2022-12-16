#include <iostream> 

using namespace std; 

 

int main() 

{ 

   long long n, i = 1, n1, ans = 0; 

   cin >> n; // введення вхідних даних 

   n1 = n/2; 

   while(i <= n1) // формула виконання функції 

   { 

       if(!(n % i)) 

           ans++; 

       i++; 

   } 

   cout << ans << endl; 

   return 0; 

} 