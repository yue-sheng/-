
// InOutfView.cpp : CInOutfView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "InOutf.h"
#endif

#include "InOutfDoc.h"
#include "InOutfView.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CInOutfView

IMPLEMENT_DYNCREATE(CInOutfView, CView)

BEGIN_MESSAGE_MAP(CInOutfView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CInOutfView::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CInOutfView::OnFileSaveAs)
END_MESSAGE_MAP()

// CInOutfView ����/����

CInOutfView::CInOutfView()
{
	// TODO: �ڴ˴���ӹ������

}

CInOutfView::~CInOutfView()
{
}

BOOL CInOutfView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CInOutfView ����

void CInOutfView::OnDraw(CDC* /*pDC*/)
{
	CInOutfDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CInOutfView ���

#ifdef _DEBUG
void CInOutfView::AssertValid() const
{
	CView::AssertValid();
}

void CInOutfView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CInOutfDoc* CInOutfView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CInOutfDoc)));
	return (CInOutfDoc*)m_pDocument;
}
#endif //_DEBUG


// CInOutfView ��Ϣ�������


void CInOutfView::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cdf(true);
	int r = cdf.DoModal();
	if (r == IDOK)
	{
		CString filename = cdf.GetPathName();
		ifstream ifs(filename);
		string s;
		int x = 20; int y = 10;
		while (ifs >> s)
		{
			y += 30;
		}
	}
}


void CInOutfView::OnFileSaveAs()
{
	// TODO: �ڴ���������������
	CFileDialog cdf(false);
	int r = cdf.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cdf.GetPathName());
		//ofs << "OK" << endl;
		CString s = cdf.GetPathName();
		ofs << CT2A(s.GetString()) << endl;
	}
}
