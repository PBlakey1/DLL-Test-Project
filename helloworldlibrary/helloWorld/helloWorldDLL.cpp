#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "helloWorldDll.h"
#include <utility>
#include <limits.h>

#include "../helloworldlibrary/helloWorldLib.h"
#include <iostream>
// DLL internal state variables:

extern "C"
{
	void __declspec(dllexport) introduce_init(void)
	{
	}
}
extern "C"
{
	void __declspec(dllexport) introduce_run(void)
	{
		Hello::introduce();
	}
}
