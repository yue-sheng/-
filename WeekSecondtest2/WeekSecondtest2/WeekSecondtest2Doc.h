
// WeekSecondtest2Doc.h : CWeekSecondtest2Doc ��Ľӿ�
//


#pragma once


class CWeekSecondtest2Doc : public CDocument
{
protected: // �������л�����
	CWeekSecondtest2Doc();
	DECLARE_DYNCREATE(CWeekSecondtest2Doc)

// ����
public:

// ����
public:
	CString s;
	CString C;
	int c;
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CWeekSecondtest2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
