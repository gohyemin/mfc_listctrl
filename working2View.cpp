
// working2View.cpp: Cworking2View 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "working2.h"
#endif

#include "working2Doc.h"
#include "working2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cworking2View

IMPLEMENT_DYNCREATE(Cworking2View, CFormView)

BEGIN_MESSAGE_MAP(Cworking2View, CFormView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cworking2View 생성/소멸

Cworking2View::Cworking2View() noexcept
	: CFormView(IDD_WORKING2_FORM)
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

Cworking2View::~Cworking2View()
{
}

void Cworking2View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL Cworking2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CFormView::PreCreateWindow(cs);
}

void Cworking2View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}


// Cworking2View 인쇄

BOOL Cworking2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Cworking2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Cworking2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void Cworking2View::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: 여기에 사용자 지정 인쇄 코드를 추가합니다.
}


// Cworking2View 진단

#ifdef _DEBUG
void Cworking2View::AssertValid() const
{
	CFormView::AssertValid();
}

void Cworking2View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

Cworking2Doc* Cworking2View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cworking2Doc)));
	return (Cworking2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cworking2View 메시지 처리기
