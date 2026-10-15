



typedef unsigned int u32;
typedef signed int s32;
typedef signed char s8;

struct Actor;
struct State { char p0[0x18]; s8 m18; };

extern "C" State* data_00709DF8;
extern "C" char* data_00706E20;
extern "C" const u32 ro_00693218[];

extern "C" Actor* func_0052FBA0(void* mgr, u32 handle);
extern "C" u32 func_00588BE4(Actor* a);

s32 func_0054682C(u32 unused, u32 handle) {
    s8 st = data_00709DF8->m18;
    if (st == 7 || st == 0x25) return 0;
    Actor* a = func_0052FBA0(data_00706E20 + 0x3DBBC, handle);
    if (a != 0) {
        u32 id = func_00588BE4(a);
        u32 limit=ro_00693218[0];
        if (id == limit) return 6;
    }
    return 0;
}
