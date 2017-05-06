#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, j, r, c, s;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d", &r, &c, &s);
		r = 2 * s * r;
		c = 2 * s * c;
		for(i = 1; i <= r; i++) {
			for(j = 1; j <= c; j++) {
				if(((i - 1) + (j - 1)) % (2 * s) == s - 1) printf("/");
				else if(abs((i - 1) - (j - 1)) % (2 * s) == s) printf("\\");
				else if(i > j) printf("*");
				else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
