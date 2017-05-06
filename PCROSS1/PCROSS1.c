#include <stdio.h>

int main() {
	int n, i, j, r, c, x, y;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d %d", &r, &c, &x, &y);
		for(i = 1; i <= r; i++) {
			for(j = 1; j <= c; j++) {
				if(i == x || j == y) {
					printf("*");
				}
				else {
					printf(".");
				}
			}	
			printf("\n");
		}
	}
	return 0;
}
