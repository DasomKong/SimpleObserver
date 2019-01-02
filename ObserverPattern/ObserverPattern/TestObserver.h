#pragma once
#include "BaseObserver.h"
class CTestObserver :
	public CBaseObserver
{
public:
	CTestObserver();
	virtual ~CTestObserver();

public:
	inline int GetValue(void) { return iTestValue; }

public:
	virtual void OnNotify(void * pObserv) override;

private:
	// test
	int iTestValue;
};

