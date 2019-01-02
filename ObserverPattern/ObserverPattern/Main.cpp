#include "header.h"

#include "TestSubject.h"
#include "TestObserver.h"

int main()
{
	_CrtDumpMemoryLeaks();
	
#pragma region ������ PUSH
	/* push ���
	������ü���� �������� �����͸� ����.
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

	/* pull ���
	���������� ������ü�� �����͸� �������� ���.
	*/

	return 0;
}