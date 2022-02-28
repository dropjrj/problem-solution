#include <bits/stdc++.h>
using namespace std;

int main()
{
   int candy, worm, evolution = 0;
    cin >> candy >> worm;
    while (worm) {
       if (candy >= 12) {
         evolution++;
         worm--;
         candy -= 10;
      }
      else {
         candy++;
         worm--;
      }
   }
   cout << evolution << endl;

    return 0;
}
