



typedef unsigned int u32;
typedef float f32;

struct V2 {
    f32 x;
    f32 y;
};

struct V4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct Hnd;

struct Obj {
    void* vt;
};

extern Hnd* data_00715148;
extern Obj* data_00715160;

struct Self;

void func_00580AE8(Self* self, V2* out, Hnd* h);
void func_00580C50(Self* self, V2* out, Hnd* h);
typedef void (*VFn4)(void* self, V4 s);

struct Owner{Self*p;Owner(Self*n):p(n){}};
void impl_00580CE4(Owner v0){
    Hnd*const&source=data_00715148;Hnd*h=source;
    if (h == 0) {
        return;
    }
    Self*self=v0.p;V4 s;
    func_00580AE8(self, (V2*)&s, h);
    func_00580C50(self, (V2*)((char*)&s + 8), h);
    Obj* o = data_00715160;
    ((VFn4)((void**)o->vt)[3])(o, s);
    o = data_00715160;
    ((VFn4)((void**)o->vt)[4])(o, s);
}
void func_00580CE4(Self* self){impl_00580CE4(self);}
