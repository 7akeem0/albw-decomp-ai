



typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;
typedef long long s64;
typedef float f32;
typedef double f64;

struct Vec3 { f32 x, y, z; };




struct Mid17;

struct Elem17 {
    u32 m0, m4;
    Mid17* m8;
    u32 mC;
    Elem17();
};

struct Base17 {
    virtual void v0();
    Base17() {}
};

struct Node17 {
    void* m0;
    void* m4;
    void* m8;
    u32 mC;
    u8 m10;
    u8 pad11[3];
    Node17();
};

struct Tag17 { u8 pad; };
void* operator new(u32, Tag17) throw();

struct Cnt17 {
    int v;
    Cnt17(int x) : v(x) {}
    operator int() const { return v; }
    Cnt17& operator++() { ++v; return *this; }
};

struct Mid17 : Base17 {
    Mid17(void* owner, void* arg);
    Elem17 elems[7];              
    u32 m74;
    void* m78;                    
    u32 m7c;                      
    void* m80;
    u8 m84, m85, m86, m87, m88, m89;
    u8 pad8a[2];
    void* m8c;                    
    void* m90;                    
    void* m94;
    void* m98;
    u8 m9c, m9d;
    u8 pad9e[2];
    s32 mA0;
    u16 mA4, mA6;
    void* mA8;
    u8 padAC[4];
    u32 packBits() {
        return (m84 & 0x1f) | (m85 << 5) | (m86 << 13) | (m87 << 19)
             | ((m88 != 0) ? (1u << 27) : 0u) | ((m89 & 3) << 28);
    }
};



struct Mdl {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();        
    virtual void v4();        
    u8  pad[12];              
    u8  m10;                  
};

struct Sub24 { u32 m0; };                       
struct Sub10 { u8 pad[0x610]; Mdl* m610; };
struct Mgr30 {
    u8     pad0[0x10];
    Sub10* m10;               
    u8     pad1[0x10];
    Sub24* m24;               
};

struct Actor {
    u8  pad[0x2d7];
    u8  m2d7;                 
    u8  pad2[0x3e8 - 0x2d8];
    u32 m3e8;                 
    u8  pad3[0x75c - 0x3ec];
    Mdl m75c;                 
};

struct ListNode { ListNode* mPrev; ListNode* mNext; };
struct ListImpl {
    ListNode mStartEnd; s32 mCount;
    ListNode* front() const { return mCount > 0 ? mStartEnd.mNext : 0; }
};
struct Item { u8 pad[0x18]; Mdl* m18; };
template <class T> struct OffsetList : ListImpl {
    s32 mOffset;
    ListNode* objToListNode(T* o) const { return (ListNode*)((u32)o + mOffset); }
    T* listNodeToObj(ListNode* n) const { return (T*)((u32)n - mOffset); }
    T* front() const { ListNode* n = mCount > 0 ? mStartEnd.mNext : 0; return n ? listNodeToObj(n) : 0; }
    T* toObj(ListNode* n) const { if (!n) return 0; return listNodeToObj(n); }
    T* next(T* o) const { ListNode* node = objToListNode(o); ListNode* n = node->mNext; if (n == &mStartEnd) return 0; return listNodeToObj(n); }
};
struct Obj30D {
    u8    pad[0x1c];
    Mdl*  m1c;                
    Mdl*  m20;                
    Mdl*  m24;                
    u8    pad2[0x148 - 0x28];
    OffsetList<Item> m148;
    u8    m158;               

    int step(int a1);
};

extern Mgr30* data_0070FB60;

Actor* func_0030DAE0(Obj30D*, int);
void   func_0030DFA0(Obj30D*, int);
Mdl*   func_00361640(Mgr30*);
void   func_004D80A4(Vec3*, u32, f32);
Actor* func_00556068(Mdl*);

int Obj30D::step(int a1) {
    Actor* r6;

    if (a1 == 0) {
        if (this->m1c)
            this->m1c->v4();
        this->m1c = this->m20;
        this->m1c->v3();
        this->m24 = this->m1c;
    } else if (0x64 == a1) {
        if (this->m1c)
            this->m1c->v4();
        this->m1c = func_00361640(data_0070FB60);
        this->m1c->v3();
        this->m24 = this->m1c;
    } else {
        r6 = func_0030DAE0(this, a1);
        if (r6 == 0) {
            func_0030DFA0(this, a1);
            r6 = func_0030DAE0(this, a1);
            if (r6 == 0)
                goto L248;
        }
        if (r6->m2d7 == 0) {
            if (this->m1c) {
                if (func_00556068(this->m1c) == r6) {
                    this->m24 = this->m1c;
                    return 0;
                }
                this->m1c->v4();
            }
            this->m1c = &r6->m75c;
            this->m1c->v3();
            this->m24 = this->m1c;
        }
    }

L248:
    if (this->m1c == 0)
        return 1;

    bool zero = false;
    if (a1 != 0x64 && a1 != 0xc8 && a1 != 0xc9 && a1 != 0xca) {
        if (func_00556068(this->m1c) != 0 && this->m158 == 0) {
            Vec3 dir;
            Vec3 d2;
            func_004D80A4(&dir, data_0070FB60->m24->m0, 1.0f);
            dir.y = 0.0f;
            Actor* a = func_00556068(this->m1c);
            func_004D80A4(&d2, a->m3e8, 1.0f);
            d2.y = 0.0f; 
            float dot = dir.x * d2.x + dir.y * d2.y + dir.z * d2.z;
            if (dot >= 0.0f)
                func_00361640(data_0070FB60)->m10 = 1;
            else
                func_00361640(data_0070FB60)->m10 = zero;
        }
    }

    for (Item* it = m148.front(); it; it = m148.next(it))
        it->m18 = m1c;

    return 1;
}
