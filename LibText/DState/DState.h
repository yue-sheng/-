// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DSTATE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DSTATE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DSTATE_EXPORTS
#define DSTATE_API __declspec(dllexport)
#else
#define DSTATE_API __declspec(dllimport)
#endif

// �����Ǵ� DState.dll ������
class DSTATE_API CDState {
public:
	int b;
	CDState(void);
	// TODO:  �ڴ�������ķ�����
	int GetS() {
		b = 0;
		return b + 999;
	}
};

extern DSTATE_API int nDState;

DSTATE_API int fnDState(void);

DSTATE_API int GetInt();
