/*
    GTAIV.CE.JapaneseFix v3.0.0

    https://github.com/prjct-samwest/GTAIV.CE.JapaneseFix

    Created by SamWest. - 2025
*/

#define WIN32_LEAN_AND_MEAN

#include "common.h"

std::unique_ptr<ScopedUnprotect::Unprotect> Protect = ScopedUnprotect::UnprotectSectionOrFullModule(GetModuleHandle(nullptr), ".text");

void Init()
{
    auto pattern = hook::pattern("80 3D ? ? ? ? 6A 56 8B F1 0F 84 ? ? ? ? 80 3D ? ? ? ? 00 0F 85 ? ? ? ?");

    if (!pattern.empty())
    {
        injector::WriteMemoryRaw(pattern.get_first(6), (char*)"\x6C", 1, true);
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Init, 0, 0, 0);
    }

    return TRUE;
}