#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 101

int size, visited[LEN][LEN], qx[LEN * LEN + 1], qy[LEN * LEN + 1], step[LEN * LEN + 1];
char maze[LEN][LEN];
int wayx[4] = {1, 0, -1, 0};
int wayy[4] = {0, 1, 0, -1};

int main()
{
    scanf("%d", &size);
    int i;
    for (i = 0; i < size; i++) {
    	scanf("%s", maze[i]);
	}
	memset(visited, 0, sizeof(visited));
	int head, tail = 1, count = 2;
	step[0] = visited[1][1] = qx[0] = qy[0] = 1;
    for (head = 0; head < tail; head++) {
		for (i = 0; i < 4; i++) {
    		if (maze[qx[head] + wayx[i]][qy[head] + wayy[i]] == '.' && visited[qx[head] + wayx[i]][qy[head] + wayy[i]] == 0) {
    			qx[tail] = qx[head] + wayx[i];
    			qy[tail] = qy[head] + wayy[i];
    			visited[qx[head] + wayx[i]][qy[head] + wayy[i]] = 1;
    			step[tail] = step[head] + 1;
    			tail++;
    			if (qx[head] + wayx[i] == size - 2 && qy[head] + wayy[i] == size - 2) {
					printf("%d\n", step[tail - 1]);
					return 0;
				}
			}
		}
	}
    printf("No solution!\n");
    return 0;
}
