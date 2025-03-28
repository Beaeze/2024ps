#include<stdio.h>
#include<string.h>

int main(){
	int x, y, w, h;
	int a, b, c, d;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	a = h - y;
	b = w - x;
	c = y;
	d = x;
	if (a < b && a < c && a < d|| a == b && a < c && a < d|| a < b && a == c && a < d|| a < b && a < c && a == d|| a == b && a == c && a < d|| a < b && a == c && a == d|| a == b && a < c && a == d|| a == b && a == c && a == d)
		printf("%d", a);
	else if (b < a && b < c && b < d|| b == a && b < c && b < d|| b < a && b == c && b < d|| b < a && b < c && b == d|| b == a && b == c && b < d|| b < a && b == c && b == d|| b == a && b < c && b == d)
		printf("%d", b);
	else if (c < a && c < b && c < d|| c == a && c < b && c < d|| c < a && c == b && c < d||c < a && c < b && c == d|| c == a && c == b && c < d|| c < a && c == b && c == d|| c == a && c < b && c == d)
		printf("%d", c);
	else if (d < a && d < b && d < c|| d == a && d < b && d < c|| d < a && d == b && d < c|| d < a && d < b && d == c|| d == a && d == b && d < c||d < a && d == b && d == c|| d == a && d < b && d == c)
		printf("%d", d);

	return 0;
}