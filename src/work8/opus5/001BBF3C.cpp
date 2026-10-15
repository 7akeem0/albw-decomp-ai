typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Entry { char name[0x20]; char desc[0x20]; };
struct Sub14 { u8 pad[0x1600]; u8 m1600; };
struct Mgr { u8 pad[0x14]; Sub14* m14; Entry mEntries[1]; };
extern Mgr* data_00711DE8;
void func_0010E3C4(char* dst, const char* src, u32 n);

struct Self {
    u8 pad0[0x11c];
    char m11C[0x40];
    char m15C[0x10];
    void setEntry(s32 n);
};

void Self::setEntry(s32 n)
{
    Mgr* m = data_00711DE8;
    if (m->m14->m1600 != 0 || n >= 0x20 || n == -1) return;
    Entry* e = m->mEntries;
    char* dst = m11C;
    func_0010E3C4(dst, e[n].name, 0x20);
    if ((u32)n <= 5 || (u32)(n - 0x16) <= 4) {
        switch (n) {
        case 1: case 3: case 5: case 0xd: case 0xe: case 0xf: case 0x10: case 0x11:
        case 0x13: case 0x14: case 0x15: case 0x17: case 0x18: case 0x19: case 0x1a:
            n = 1;
            break;
        default:
            switch (n) {
            case 0: case 2: case 4: case 9: case 10: case 0xb: case 0xc: case 0x12: case 0x16:
                n = 0;
                break;
            }
            break;
        }
    }
    func_0010E3C4(m15C, e[n].desc, 0x10);
}


