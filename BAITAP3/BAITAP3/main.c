#include<stdio.h>
#include<string.h>

typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;
char *serverBuff = "HTTP1.1 200 OK{“light”: “on”,“fan” : “off”,“motor” : “off”}";
smartHome_t getResult(char* data);
void main() {
	smartHome_t Home = { 0 };
	Home = getResult(serverBuff);
}
smartHome_t getResult(char* data) {
	smartHome_t re = { 0 };
	if (strstr(data, "“light”: “on”")!= NULL) {
		re.light = 1;
	}
	else re.fan = 0;
	if (strstr(data, "“fan” : “on”") != NULL) {
		re.fan= 1;
	}
	else re.fan = 0;
	if (strstr(data, "“motor” : “on”") != NULL) {
		re.motor = 1;
	}
	else re.motor = 0;
	return re;

}