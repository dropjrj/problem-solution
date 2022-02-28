#include <bits/stdc++.h>
using namespace std;

int algo(int n) {
   int times = 1;
   while (n != 1) {
      if (n % 2) {
         n = 3 * n + 1;
      }
      else {
         n /= 2;
      }
      times++;
   }
   return times;
}

int main() {
   int head, tail;
   while (cin >> head >> tail) {
      cout << head << ' ' << tail << ' ';
      if (head > tail) swap(head, tail);
      int max = 0;
      for (int i = head; i <= tail; i++) {
         int tmp = algo(i);
         if (tmp > max) max = tmp;
      }
      cout << max << endl;
   }
   
   return 0;
}
