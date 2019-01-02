#pragma once

#include <iostream>
#include <crtdbg.h>
#include <vector>

namespace ArrayControl
{
	template<typename T>
	void DeleteMidArray(T* TArray, int iCount, int iMaxLength)
	{
		if (nullptr != TArray[iCount])
		{
			delete TArray[iCount];
			TArray[iCount] = NULL;
		}
		memmove(TArray[iCount], TArray[iCount + 1], iMaxLength - iCount);
	}

}