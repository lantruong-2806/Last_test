#include <stdio.h>
#include <stdint.h>

uint16_t N = 0;
uint8_t low = 0;
uint8_t high = 0;
void main() {
	printf("nhap vao so nguyen 16 bit N = ");
	scanf_s("%d", (int*)&N);
	low = (uint8_t)N;
	high = (uint8_t)(N >> 8);
	printf("value low: 0x%x\r\n", low);
	printf("value high: 0x%x\r\n", high);
}