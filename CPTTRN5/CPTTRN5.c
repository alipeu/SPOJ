#include <stdio.h>

int main() {
	int n, i, j, r, c, s;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d", &r, &c, &s);
		r = r * (s + 1) + 1;
		c = c * (s + 1) + 1;
		for(i = 1; i <= r; i++) {
			for(j = 1; j <= c; j++) {
				if(i == 1 || j == 1 || i == r || j == c || (i - 1) % (s + 1) == 0 || (j - 1) % (s + 1) == 0) printf("*");
				else if(i == j || ((i - j) % (s + 1) == 0 && (i - j) / (s + 1) % 2 == 0)) printf("\\");
				else if((i + j - 2) % (s + 1) == 0 && ((i + j - 2) / (s + 1) % 2 == 0)) printf("/");
				else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
