typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
template <class T, int N> struct SafeArray {
    T mBuffer[N];
    T& operator[](s32 i) {
if ((u32)i < (u32)N) return mBuffer[i];
return mBuffer[0];
}
};
struct Item {
    char pad[0xd];
u8 b0d;
u8 b0e;
char pad0f[0x88 - 0xf];
s32 m88;
    bool isIdle() const {
return b0d == 0 && b0e == 0;
}
};
struct Elem {
char pad[0x14];
u32 m14;
char pad18[4];
s32 m1c;
};
struct It {
Elem** p;
It(Elem** q) : p(q) {
}
bool operator!=(const It& o) const {
return p != o.p;
}
bool operator==(const It& o) const {
return p == o.p;
}
It& operator++() {
++p;
return *this;
}
Elem* operator*() const {
return *p;
}
};
struct List {
s32 mSize;
s32 mCap;
Elem** mPtrs;
It begin() const {
return It(mPtrs);
}
It end() const {
s32 n = mSize;
return It(mPtrs + n);
}
};
void func_00474780(Item* it, void* p);
struct Cls {
    char pad[0xb4];
    SafeArray<Item*, 8> mItems;
    void update(List* l, void* p);
};

void Cls::update(List* l, void* p)
{
    It end = l->end();
    for (s32 i = 0; i < 8; i++) {
        if (mItems[i] == 0) continue;
        if (mItems[i]->isIdle()) continue;
        if (!((s32)mItems[i]->m88 > -1)) continue;
        {
            for (It it = l->begin(); it != end; ++it) {
                int t7 = mItems[i]->m88; if (t7 == (*it)->m1c && ((*it)->m14 & 0x100000)) goto next;
            }
        }
        func_00474780(mItems[i], p);
    next:;
    }
}
