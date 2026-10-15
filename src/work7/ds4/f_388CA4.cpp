extern "C" int func_004BF7DC(int, int, int);
extern "C" int func_004C0C80(int, int, int);

extern "C" int func_00388CA4(int a, int b, int c, int sel) {
    switch (sel) {
        case 0:
            if (func_004BF7DC(a, b, c)) return 0;
            break;
        case 1:
            if (func_004C0C80(a, b, c)) return 0;
            break;
    }
    return 1;
}
