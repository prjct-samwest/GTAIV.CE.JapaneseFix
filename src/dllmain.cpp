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
    // Enable EFLC in the JP version.
    auto pattern = hook::pattern("80 3D ? ? ? ? 6A 56 8B F1 0F 84 ? ? ? ? 80 3D ? ? ? ? 00 0F 85 ? ? ? ?");
    if (!pattern.empty())
    {
        injector::WriteMemoryRaw(pattern.get_first(6), (char*)"\x6C", 1, true);
    }

    // Enable Japanese language selection in FusionFix.
    auto pattern2 = hook::pattern("83 FE 05 75 14 80 3D ? ? ? ? 00 B9 06 00 00 00 B8 01 00 00 00 0F 45 C8");
    if (!pattern2.empty())
    {
        injector::WriteMemoryRaw(pattern2.get_first(2), (char*)"\x06", 1, true);
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