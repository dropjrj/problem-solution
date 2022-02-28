#include <cstdio>
#include <map>
using namespace std;

int main(){
    map <int, int> vector1;
    int index, value, sum = 0;
    while (scanf("%d:%d", &index, &value) && !(value == 0 && index == 0)) {
        vector1[index] = value;
    }
    while (scanf("%d:%d", &index, &value) && !(value == 0 && index == 0)) {
        if (vector1.find(index) != vector1.end()) {
            sum += vector1[index] * value;
        }
    }
    printf("%d\n", sum);

    return 0;
}
