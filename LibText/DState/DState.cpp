// DState.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "DState.h"


// 这是导出变量的一个示例
DSTATE_API int nDState=0;

// 这是导出函数的一个示例。
DSTATE_API int fnDState(void)
{
    return 42;
}

DSTATE_API int GetInt() {

	return 2020;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 DState.h
CDState::CDState()
{
    return;
}
