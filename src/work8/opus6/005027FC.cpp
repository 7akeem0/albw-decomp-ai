typedef unsigned char u8;
typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

struct G7142C8;
extern G7142C8* data_007142C8;
struct G70B728;
extern G70B728* data_0070B728;
void func_0051AC2C(G7142C8* g, s32 a);
void func_0017CAB8();
bool func_0017CCCC();
void func_0051C080(G7142C8* g);
void func_0046B554(G7142C8* g);
void func_004CD7C8(G70B728* g, void* p);
struct Obj2D0 { char pad[0x562]; u8 m562; };
Obj2D0* func_004E712C();

struct Obj {
    char pad[0x2cc];
    s8 m2cc;
    s8 m2cd;
    s8 m2ce;
    s8 m2cf;
    Obj2D0* m2d0;
    u8 m2d4;
    char pad2d5[0x2f8 - 0x2d5];
    char m2f8[4];
    bool f(s32 kind);
};

bool Obj::f(s32 kind) {

    switch (kind) {
    case 0:
        if (m2ce != 0) {
            func_0051AC2C(data_007142C8, 0);
            func_0017CAB8();
            return true;
        }
        break;
    case 1:
        if (m2d0 == 0 && m2ce != 0) {
            m2d0 = func_004E712C();
            m2d4 = 0;
        }
        switch (m2d4) {
        case 0:
            if (m2d0 == 0) break;
            if (m2d0->m562 != 0) m2d4 = 1;
            break;
        case 1:
            if (m2cf != 0) return true;
            break;
        }
        break;
    case 2:
        if (func_0017CCCC()) return true;
        return false;
    case 3:
        if (m2cd == 0 && m2cc == 0) {
            func_004CD7C8(data_0070B728, m2f8);
            m2cc = 1;
        }
        break;
    case 4:
    case 5:
        break;
    case 6:
        func_0051C080(data_007142C8);
        return true;
    case 7:
        func_0046B554(data_007142C8);
        return true;
    default:
        return true;
    }
    return false;
}
