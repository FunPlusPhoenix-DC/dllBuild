#include <windows.h>

bool APIENTRY DllMain(
    HMODULE hModule,
    DWORD ul_reason_for_call,__stdcall
    LPVOID lpReversed
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
