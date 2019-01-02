#pragma once
#include "BaseSubject.h"

class CTestSubject :
	public CBaseSubject
{
public:
	CTestSubject();
	virtual ~CTestSubject();

public:
	virtual void Notify(void * pObserv) override;
};