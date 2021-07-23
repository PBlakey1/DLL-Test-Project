// helloworldlibrary.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "helloWorldLib.h"
#include "stdio.h"
namespace helloWorld
{
	extern "C"
	{
		void Hello::introduce(void)
		{
			printf("Hello world");
		}
	}
}
