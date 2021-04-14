#define aslr(x) (x - 0x400000 + (DWORD)GetModuleHandle(0))
