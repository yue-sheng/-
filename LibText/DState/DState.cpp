// DState.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "DState.h"


// ���ǵ���������һ��ʾ��
DSTATE_API int nDState=0;

// ���ǵ���������һ��ʾ����
DSTATE_API int fnDState(void)
{
    return 42;
}

DSTATE_API int GetInt() {

	return 2020;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� DState.h
CDState::CDState()
{
    return;
}
