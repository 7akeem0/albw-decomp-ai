#ifndef GPT20_LADDER_TYPES_H
#define GPT20_LADDER_TYPES_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
struct Flag32 {
    u32 v;
    void change(u32 mask,bool on){if(on)v|=mask;else v&=~mask;}
    void set(u32 mask){change(mask,true);}
    void reset(u32 mask){change(mask,false);}
};
struct Request499 { u32 m0, m4; void* heap; char padC[0x20]; void* m2c; };
struct Flag16 {
    u16 v;
    Flag16() {}
    Flag16(u16 n):v(n) {}
    void set(u16 b) {*this=Flag16(v|b);}
    void reset(u16 b) {*this=Flag16(v&~b);}
};
struct Sub510 {char pad0[0x38];Flag16 m38;char pad3A[0x22a];u8 m264,m265;};
struct Owner510 {char pad0[0x510];Sub510* m510;};
struct ManagerFB60 {char pad0[0x10];void* m10;void* m14;void* m18;void* m1c;};
extern ManagerFB60* data_0070FB60;
struct Actor539 {char pad0[0xfc];s32 mfc;char pad100[0x11];s8 m111;};
struct Holder539 {char pad0[0x10];Actor539* m10;};
struct Value539 {char pad0[0x1e4];f32 m1e4;};
struct Object53AB {char pad0[0x2c8];u32 flags;};
struct Arg490 {char pad0[0x38];u32 m38;};
struct Owner490 {char pad0[0x50];void* m50;};
struct O4C1D {char pad0[0x989];u8 kind;};
struct Base3D0E {char pad0[0x8bc];Base3D0E(bool);};
struct O4C65:Base3D0E {u8 m8bc;O4C65();};
struct Vec3 {f32 x,y,z;};
struct Vec4 {f32 x,y,z,w;};
struct ActorPos {char pad0[0x3d0];Vec3 pos;};
struct O4E56 {char pad0[0x3d0];Vec3 m3d0;char pad3dc[0xf8];Vec3 m4d4;char pad4e0[0x140];void* m620;char pad624[0x4d];u8 m671;};
struct O4EA1 {char pad0[0x34];void* m34;char pad38[0x14];void* m4c;char pad50[8];void* m58;u32 pad5c;Flag32 flags60;};
struct PosBC {char pad0[0xbc];Vec3 pos;};
struct OwnerB0 {char pad0[0xb0];PosBC* child;};
struct O5237 {char pad0[0x2c8];u32 frames;char pad2cc[0xc];u32 frames2d8;};
struct Mtx34 {f32 m[12];};
struct Buffer5308 {char pad0[0x14];Mtx34* data;};
struct Model5308 {char pad0[0x24];Buffer5308* buffer;};
struct Owner5308 {char pad0[8];Model5308* model;};
struct Base1031 {char pad0[0x64];Base1031(u32);};
struct Owner53EC{char pad0[0x10];Model5308* model;char pad14[0x74];u32 index;char pad8c[8];u32 index94;u32 index98;u32 index9c;};
struct Disposer4A15{virtual ~Disposer4A15();char pad4[0xc];};
struct Member4911{virtual ~Member4911();char pad4[0xc];};
struct Transform4EDA{u32 pad0;Vec3 pos;};
struct O4EDA{char pad0[0x10];Transform4EDA* transform;};
struct O4F31{char pad0[0x3dc];Vec3 velocity;char pad3e8[0x12c];u8 flag514;char pad515[0x87];Flag32 flags59c;char pad5a0[0x33c];u32 state8dc;char pad8e0[0x14];u8 flag8f4;char pad8f5[0x1f];f32 value;u16 pad918;u8 flag91a;char pad91b[0x39];u32 value954;};
typedef void(*Fn492D)(void*);
struct Table492D{u32 header[4];Fn492D functions[16];};
extern u8 data_007166E0;
extern const Table492D ro_006BDFDC;
struct O492D{u32 pad0;void* child4;void* child8;};
struct Record4CF5{char pad0[0x24];u32 values[76];void set(u32,const u32&);};
struct Buffer4CF5{Record4CF5* data;};
struct O4CF5{char pad0[0x20];Buffer4CF5* buffer;};
struct Global4AD7{char pad0[0x18];s8 kind;};
struct O51AA{char pad0[0x20];void* child;char pad24[0x30];void* child54;s16 kind;char pad5a[0xda];u8 flag;};
struct Ptr51E5{Object53AB* value;};
struct O51E5{char pad0[0x28d0];Ptr51E5 children[1];};
struct AnimValue{char pad0[0x10];f32 value10,value14;};
struct AnimArray{char pad0[0xc];s32 count,max;AnimValue* data;AnimValue&operator[](s32 i){if((u32)i<(u32)count)return data[i];return data[0];}};
struct O537C{char pad0[0x30];const Vec3* pos;};
struct Child495D{virtual void a();virtual void b();virtual f32 value();virtual void c();virtual f32 lookup(s32);};
struct O495D{char pad0[0x118];Child495D* child;char pad11c[8];f32 scale124,scale;};
struct O4DBA{virtual void v0();
virtual void v1();
virtual void v2();
virtual void v3();
virtual void v4();
virtual void v5();
virtual void v6();
virtual void v7();
virtual void v8();
virtual void v9();
virtual void v10();
virtual void v11();
virtual void v12();
virtual void v13();
virtual void v14();
virtual void v15();
virtual void v16();
virtual void v17();
virtual void v18();
virtual void v19();
virtual void v20();
virtual void v21();
virtual void v22();
virtual void v23();
virtual void v24();
virtual void v25();
virtual void v26();
virtual void v27();
virtual void v28();
virtual void v29();
virtual void v30();
virtual void v31();
virtual void v32();
virtual void v33();
virtual void v34();
virtual void v35();
virtual void v36();
virtual void v37();
virtual void v38();
virtual void v39();
virtual void v40();
virtual void v41();
virtual void v42();
virtual void dispatch(s32,s32);char pad4[0x3e4];s32 angle3e8;char pad3ec[0x448];f32 value834;char pad838[0x170];s32 value9a8;char pad9ac[0x11];u8 flag9bd;};

struct Timer20 {s32 cur,max;f32 rate;void start(const s32& n){max=n;rate=n?1.0f/n:1.0f;cur=0;}void start(s32 n,const s32& zero){max=n;rate=n?1.0f/n:1.0f;cur=zero;}};
struct O5087 {char pad0[0x40c];void* model;char pad410[0x84];Timer20 timer;};
struct Child51A3 {char pad0[0xd];s8 gate;u8 flag;};
struct O51A3 {char pad0[0x114];Child51A3* child;};
struct O51AE {char pad0[0x124];Child51A3* child;};
struct O51B3 {char pad0[0x108];Child51A3* child;};
struct O51B5 {char pad0[0xb0];Child51A3* child;};
struct O51B7 {char pad0[0x120];Child51A3* child;};
struct Child4CEA {char pad0[0x44];u8 flag;};
struct O4CEA {char pad0[0x530];void* model;Child4CEA* child;char pad538[0x20];u8 flag;};
struct O4D18 {char pad0[0x530];void* model;Child4CEA* child;char pad538[0x2e];u8 flag;};
template<class T,u32 N>struct SafeArray20 {T values[N];T&operator[](u32 i){if(i<N)return values[i];return values[0];}};
struct O5325 {char pad0[0xb04];SafeArray20<Vec3,15> entries;char padBB8[0xc0];SafeArray20<u32,15> indices;};
struct O495E{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual u32 dispatch(u32,u32,const void*,const void*,u32);};
#endif
