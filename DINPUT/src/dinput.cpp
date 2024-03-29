#include <Mebius.hpp>
#include <_dinput.h>

static mebius::wrapper::WrapLibrary dinput("dinput.dll");

HRESULT WINAPI DirectInputCreateA(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA * ppDI, LPUNKNOWN punkOuter)
{
    static decltype(DirectInputCreateA)* Wrap_DirectInputCreateA = (decltype(DirectInputCreateA)*)GetProcAddress(dinput.get_handle(), "DirectInputCreateA");
    HRESULT hr = Wrap_DirectInputCreateA(hinst, dwVersion, ppDI, punkOuter);
    return hr;
}