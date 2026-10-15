typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" int cmpstr(const char* a, const char* b);

struct Entry { u32 f0; const char* key; u32 f8; };
struct Impl { u8 pad[0x10]; s32 count; };

struct Map {
    Impl* impl;       // +0
    u8 pad[8];
    Entry* entries;   // +0xc
    Entry* find(const char* key);
};

Entry* Map::find(const char* key) {
    s32 lo = 0;
    s32 hi = impl->count - 1;
    if (hi < 0) return 0;
    while (lo <= hi) {
        s32 mid = (lo + hi) / 2;
        Entry* e = &entries[mid];
        s32 c = cmpstr(key, e->key);
        if (c == 0) return e;
        if (c > 0) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}
