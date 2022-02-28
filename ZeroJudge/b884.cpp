#include <bits/stdc++.h>
using namespace std;

int main()
{
   int task;
   cin >> task;
   while (task--) {
      int x, y, yee;
      cin >> x >> y;
      yee = 100 - (abs(x) + abs(y));
      if (0 < yee && yee <= 30){
         cout << "sad!";
      }
      else if (30 < yee && yee <= 60) {
         cout << "hmm~~";
      }
      else if (60 < yee && yee < 100) {
         cout << "Happyyummy";
      }
      else {
         cout << "evil!!";
      }
      cout << '\n';
   }

    return 0;
}
