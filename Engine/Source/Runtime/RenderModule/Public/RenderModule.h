#pragma once


#ifdef _WIN32
#define DLLIMPORT __declspec(dllimport)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLIMPORT
#define DLLEXPORT
#endif

#ifdef RenderModule_IMPORT
#define RenderModule_API DLLIMPORT
#elif RenderModule_EXPORT
#define RenderModule_API DLLEXPORT
#else
#define RenderModule_API
#endif 



#include <d3d11.h>

namespace RenderModule
{
	void RenderModule_API Init(HWND hWnd);
}

