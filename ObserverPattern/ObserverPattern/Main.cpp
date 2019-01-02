#include "header.h"

#include "TestSubject.h"
#include "TestObserver.h"

int main()
{
	_CrtDumpMemoryLeaks();
	
#pragma region 옵저버 PUSH
	/* push 방식
	주제객체에서 옵저버로 데이터를 전달.
	*/
	CTestSubject* pSubject = new CTestSubject;
	CTestObserver* pObserv = new CTestObserver;

	pSubject->AddObserver(pObserv);

	int iTestVal = 10;

	pSubject->Notify(&iTestVal);

	iTestVal = 5;

	pSubject->Notify(&iTestVal);

	CTestObserver* pSecObserv = new CTestObserver;

	pSubject->AddObserver(pSecObserv);

	iTestVal = 2;

	pSubject->Notify(&iTestVal);

	delete pSubject;
	pSubject = nullptr;
#pragma endregion

	/* pull 방식
	옵저버에서 주제객체의 데이터를 가져가는 방식.
	*/

	return 0;
}