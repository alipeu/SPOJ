#include <stdio.h>

int main() {
	int n, i, j, r, c, h, w;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d %d", &r, &c, &h, &w);
		r = (r + 1) * h + r;
		c = (c + 1) * w + c;
		for(i = 1; i <= r; i++) {
			for(j = 1; j <= c; j++) {
				if(i % (h + 1) == 0 && j % (w + 1) == 0) printf("+");
				else if(i % (h + 1) == 0) printf("-");
				else if(j % (w + 1) == 0) printf("|");
				else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
