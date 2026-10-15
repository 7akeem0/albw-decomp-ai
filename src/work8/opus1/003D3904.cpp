typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef long long s64;

struct Entry {
    Entry();
    u32 v[15];
};

struct Container;
static void copyEntry(Entry* d, const Entry* s) { *d = *s; }
extern "C" u32 func_003D4220(Container*, Entry*, s32*, s32);
extern "C" void func_00110D44(void*, const void*, u32);

struct Container {
    s32 count;
    Entry entries[32];
    u8 pad784[0x7e0 - 0x784];
    Entry cur;
    u8 pad81c[0x14c8 - 0x81c];
    u32 guard[2];
    u32 get(Entry* out);
};


u32 Container::get(Entry* dst) {
    Entry* out = dst;
    if (count == 0) {
        func_003D4220(this, entries, &count, 32);
    } else {
        s32 added = 0;
        Entry tmp[32];
        func_003D4220(this, tmp, &added, 32);
        s32 n = 32 - added;
        s32 c = count;
        if (n <= count) c = n;
        count = c;
        func_00110D44(&entries[added], entries, c * sizeof(Entry));
        func_00110D44(entries, tmp, added * sizeof(Entry));
        count += added;
    }
    if (*(__packed s64*)guard != -1) {
        copyEntry(out, &cur);
        return 1;
    }
    return 0;
}
