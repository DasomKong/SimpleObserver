#pragma once

#include "header.h"

class CBaseObserver
{
public:
	CBaseObserver(){}
	virtual ~CBaseObserver(){}

public:
	virtual void OnNotify(void* pObserv) = 0;
};