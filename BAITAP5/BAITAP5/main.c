#include<stdio.h>
#include<Windows.h>

WINAPI function(LPVOID y) {

	while (1) {
		printf("Xin chao:\r\n");
		Sleep(500);
	}
	return 0;
}
void main() {

	int cnt = 0;
	CreateThread(NULL, 16, function, NULL, NULL, NULL);

	while (1) {

		printf("Say hello\r\n");
		Sleep(1000);
	}
}