#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "helloWorldLib.h"
#include <iostream>
// DLL internal state variables:

extern "C"
{
	void introduce_init(void)
	{
	}
}
extern "C"
{
	void introduce_run(void)
	{
		return helloWorld::Hello::introduce();
	}
}
