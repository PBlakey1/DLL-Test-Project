// helloworldlibrary.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "helloWorldLib.h"
#include "stdio.h"

extern "C"
{
	void __declspec(dllexport) Hello::introduce(void)
	{
		printf("Hello world\n");
	}
}

