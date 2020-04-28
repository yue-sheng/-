#include "stdafx.h"
#include"w32.h"

char* pchar() {
	return "从静态库中获取的字符串";
}

int F1::GetA() {
	return a + 19;
}