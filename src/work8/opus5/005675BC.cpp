typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

struct Entry { u8 pad[4]; u16 mKind; };
struct Slot { u16 mFlags; u8 pad2[6]; u32 mNibbles; u8 padc[0x154 - 0xc]; };
struct SlotArr { Slot* p; };
struct IdxArr { u16* p; };

struct Counter { s32 v; Counter(s32 x) : v(x) {} operator s32() const { return v; } Counter& operator++() { ++v; return *this; } };
struct Self {
    u8 pad0[0xc];
    Entry** mEntries;
    u32 mNum;
    void apply(SlotArr* slots, IdxArr* idx);
};

void Self::apply(SlotArr* slots, IdxArr* idx)
{
    for (u32 i = 0; i < mNum; i++) {
        u32 n = idx->p[i];
        Entry* e = mEntries[i];
        if (n == 0xffff) continue;
        Slot* s = &slots->p[n];
        switch (e->mKind) {
        case 7: case 8: case 9: case 10: case 11:
            s->mFlags |= 0x200;
        case 1: case 2: case 3: case 4: case 5: case 6: {
            u32 k = e->mKind - 1;
            u16 kind = k < 11 ? (u16)k : 0;
            u32 w = s->mNibbles;
            for (Counter j(0); j < 6; ++j) { s32 sh = j * 4;
                if (((w >> sh) & 0xf) == kind) s->mFlags |= 0x400;
            }
            break;
        }
        case 0x12:
            s->mFlags |= 0x800;
            break;
        case 0xc: case 0xe: case 0x10:
            s->mFlags |= 0x8000;
            break;
        case 0x13: case 0x14: case 0x15:
            s->mFlags |= 0x1000;
            break;
        case 0x16: case 0x17: case 0x18:
            s->mFlags |= 0x2000;
            break;
        case 0x19: case 0x1a: case 0x1b:
            s->mFlags |= 0x4000;
            break;
        }
    }
}



