#pragma once


#ifdef _WIN32
#define DLLIMPORT __declspec(dllimport)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLIMPORT
#define DLLEXPORT
#endif

#ifdef TestModule_IMPORT
#define TESTMODULE_API DLLIMPORT
#elif TestModule_EXPORT
#define TESTMODULE_API DLLEXPORT
#else
#define TESTMODULE_API
#endif 


class TESTMODULE_API Hello
{
public:
	void Print();
};
