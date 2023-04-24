#pragma once

#include "_work_file2.h"

void act_plus(int a,int b) {
	cout << "Ответ: " << a + b;
}
void act_minus(int a, int b) {
	cout << "Ответ: " << a - b;
}
void act_del(int a, int b) {
	int c = a / b; 
	if (a == 0) c=0;
	if (b == 0) c=0;
	cout << "Ответ: " << c;
}
void act_mult(int a, int b) {
	cout << "Ответ: " << a * b;
}
void act_close(int a, int b) {
	cout << "close";
}
