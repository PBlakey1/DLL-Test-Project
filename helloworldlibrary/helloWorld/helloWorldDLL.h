#pragma once
#ifdef HELLOWORLD_EXPORTS
	#define HELLOWORLD_API __declspec(dllexport)
#else
	#define HELLOWORLD_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif
	HELLOWORLD_API void introduce_init(void);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C"
{
#endif
HELLOWORLD_API void introduce_run(void);
#ifdef __cplusplus
}
#endif
