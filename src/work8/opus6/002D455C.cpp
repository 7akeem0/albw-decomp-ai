typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;

struct Actor614 { char pad[0x42]; s16 m42; };
struct StateSlot;
struct Cls {
    char pad[0x614];
    Actor614* m614;
    StateSlot* findSlot(s32 id);   // 0x1DDAF0
};
struct StateSlot {
    Cls* owner;
    s8 mode;
    s8 current;
    s8 pending;
    u8 u7;
    u8 gate8;
    u8 gate9;
    void request(s32 id, u8 a, u8 b);
};

void StateSlot::request(s32 id, u8 a, u8 b) {
    Cls* o = owner;
    switch (o->m614->m42) {
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x52:
        return;
    }
    if (b == 0 && id != -1) {
        s8 m = mode;
        s32 k;
        if (m != 0) {
            if (m == 1 || m == 2) {
                k = id;
                switch (k) {
                case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
                case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16:
                case 17: case 18: case 19: case 20: case 21: case 22:
                    goto check;
                default:
                    return;
                }
            }
            return;
        }
        k = id;
        if (k != 0) return;
    check:
        u8 busy;
        StateSlot* s;
        if (o == 0 || (s = o->findSlot(k)) == 0 || this == s) busy = 0;
        else busy = 1;
        if (busy & ~a) return;
    }
    gate8 = a;
    gate9 = b;
    __schedule_barrier();
    pending = id;
}
