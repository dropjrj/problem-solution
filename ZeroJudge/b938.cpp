#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int preindex;
    int nextindex;
    int status;
} Node;

Node line[1000005];

void init(int cnt) {
    for (int i = 1; i <= cnt; i++) {
        //line[i].preindex  = i - 1;
        line[i].nextindex = i + 1;
        line[i].status = 1;
    }
    line[1].preindex = -1;
    line[cnt].nextindex = -1;
}

void kill(int person) {
    int dead = line[person].nextindex;
    if (dead == -1 || line[person].status == 0) printf("0u0 ...... ?\n");
    else {
        printf("%d\n", dead);
        line[person].nextindex = line[dead].nextindex;
        line[dead].status = 0;
        //line[dead].preindex = person;
    }
}

int main() {
	int peopleC, taskC;
	scanf("%d%d", &peopleC, &taskC);
	init(peopleC);
	while (taskC--) {
	    int person;
	    scanf("%d", &person);
	    kill(person);
	}
	return 0;
}
