#include<stdio.h>
#include<math.h>

//xay dựng class ptbac2
class phuongtrinh_2 {
public:
	int a;
	int b;
	int c;
	float x, y, delta;
public:
	phuongtrinh_2()
	{
	}
	phuongtrinh_2(int a1, int b1, int c1) {
		this->a = a1;
		this->b = b1;
		this->c = c1;
		delta = (float)((b*b) - (4 * a * c));
		if (delta < 0) {
			printf(" phuong trinh vo nghiem\r\n");
		}
		else if (delta == 0) {
			printf("phuong trinh co nghiem kep \r\n x1 = x2 = %.2f",(float)(-b / (2 * a)));
		}
		else if (delta > 0) {
			printf("phuong trinh co 2 nghiem phan biet");
			printf("\r\n x1 = %.2f", (-b - sqrt(delta)) / (2 * a));
			printf("\r\n x2 = %.2f", (-b + sqrt(delta)) / (2 * a));
		}
	}
};

int main() {
	printf("phuongtrinh_2 A(1,2,-3)\r\n");
	phuongtrinh_2 A(1,2,-3);
	printf("phuongtrinh_2 B(3, 1, 2)\r\n");
	phuongtrinh_2 B(3, 1, 2);
	printf("phuongtrinh_2 C(1,2,1)\r\n ");
	phuongtrinh_2 C(1, 2, 1);
}
