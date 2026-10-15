#define EN_EXTRA bool target();
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef float f32;
typedef unsigned long long u64;
namespace sead {
struct SafeString {
    SafeString(const char* s):mStringTop(s){}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
struct Vec3 {
    f32 x,y,z;
    Vec3(){}
    Vec3(f32 a,f32 b,f32 c):x(a),y(b),z(c){}
    void set(f32 a,f32 b,f32 c){x=a;y=b;z=c;}
    void set(const Vec3& v){*this=v;}
    void setSub(const Vec3&,const Vec3&); // 0x115C70
    void setAdd(const Vec3&,const Vec3&); // 0x115C54
    void setMul(const Vec3&,f32); // 0x115D70
    f32 normalize(); // 0x115DC8
    void operator+=(const Vec3& v){setAdd(*this,v);}
    void zero(){for(int i=0;i<3;i++) (&x)[i]=0.0f;}
    f32 squaredLength()const{return x*x+y*y+z*z;}
};
inline Vec3 operator+(const Vec3& a,const Vec3& b){Vec3 v;v.setAdd(a,b);return v;}
inline Vec3 operator-(const Vec3& a,const Vec3& b){Vec3 v;v.setSub(a,b);return v;}
inline Vec3 operator*(const Vec3& a,f32 b){Vec3 v;v.setMul(a,b);return v;}
struct BitFlag32 {
    u32 v;
    void change(u32 m,bool on){if(on)v|=m;else v&=~m;}
    void set(u32 m){change(m,true);}
    void reset(u32 m){change(m,false);}
};
struct Timer {
    u32 cur,max; f32 rate;
    void start(u32 n,u32 c=0){max=n;if(n)rate=1.0f/n;else rate=0.0f;cur=c;}
    bool step(){Timer t=*this;if(t.cur<t.max){cur=t.cur+1;return true;}return false;}
};
struct En;
struct StateMgr {
    s32 mCounter;s8 mCur,mNext;u8 mNum;char pad[0x24-7];
    void changeState(s32) ; // 0x65D9FC
};
struct Obj8E0 {void func_003C2464(s32,f32);char pad[0x2c];};
struct ActorMgr {void* func_0052FBA0(u32);};
struct Game {char pad[0x3dbbc];ActorMgr mgr;};
extern Game* data_00706E20;
extern s32 data_0070AA74;
struct Mtx34 {f32 m[12];void translation(Vec3* p)const{p->x=m[3];p->y=m[6];p->z=m[9];}};
struct Model {
    char p0[0x74];Vec3 m74;char p80[0xd8-0x80];Mtx34 md8;
    char p108[0x164-0x108];BitFlag32 m164;
    void update(s32 a,const Vec3& b);
};
struct AnimElem {u32 m0,m4;f32 m8;u32 mc;f32 m10;char p14[0x12];u8 m26;void setFrame(f32 f){if(m8!=f){m8=f;m26=1;}}};
struct AnimArr {u32 pad[3];s32 num,max;AnimElem* data;AnimElem& operator[](s32 i){if((u32)i<(u32)num)return data[i];return data[0];}};
struct Elem {Vec3 pos,vel;Model* model;AnimArr* anim;void* collider;s32 angle;};
template<class T> struct Ring {
    T* data;s32 cap,head,num;
    T& at(s32 i){s32 n=head+i;if(n>=cap)n-=cap;return data[n];}
    struct Iterator {
        Ring* ring;s32 index;
        Iterator(Ring* r,s32 i):ring(r),index(i){}
        bool operator==(const Iterator& b)const{return ring==b.ring && index==b.index;}
        bool operator!=(const Iterator& b)const{return !(*this==b);}
        Iterator& operator++(){++index;return *this;}
        T& operator*()const{return ring->at(index);}
    };
    Iterator begin(){return Iterator(this,0);}
    Iterator end(){return Iterator(this,num);}
};
struct Sub510{char pad[4];u8 m4,m5;};
struct Eff{char pad[0x1c];u32 id;};
struct EffHandle {Eff* p;u32 id;};
struct Anim344;
void func_00110848(Eff*);
EffHandle func_004A1B9C(Anim344*,const char*);
void func_004A2F38(Eff*,const Vec3&);
inline bool effIsValid(const EffHandle* h){return h->p && h->p->id==h->id;}
struct Point{char pad[0x18];Vec3 pos;};
struct PointArray {char pad[0x20];u32 num,max;Point** data;Point* at(s32 i){return data?((u32)i<num?data[i]:0):0;}};
#ifndef EN_EXTRA
#define EN_EXTRA
#endif
struct En {
    char p0[0x344];Anim344* m344;
    char p348[0x368-0x348];Vec3 m368,m374;
    char p380[0x3d0-0x380];
    Vec3 m3d0,m3dc;
    s32 m3e8;
    char p3ec[0x40c-0x3ec];Model* m40c;
    char p410[0x508-0x410];s16 m508;char p50a[6];Sub510* m510;
    char p514[0x570-0x514];Vec3 m570;
    char p57c[0x59c-0x57c];BitFlag32 m59c;
    char p5a0[0x8bc-0x5a0];StateMgr mState;
    Obj8E0 m8e0;
    u32 m90c;
    char p910[0x95c-0x910];Ring<Elem> m95c;
    char p96c[0x9e4-0x96c];Vec3 m9e4;
    char p9f0[0x9fc-0x9f0];Vec3 m9fc;
    char pa08[0xa20-0xa08];Vec3 ma20,ma2c,ma38;
    f32 ma44,ma48;
    f32 ma4c;PointArray* ma50;u32 ma54;s32 ma58,ma5c;
    char pa60[4];s32 ma64;
    EffHandle ma68;char pa70[0xa8c-0xa70];s32 ma8c;
    char pa90[0xab8-0xa90];Timer mab8;
    char pac4[0xad0-0xac4];Timer mad0;
    char padc[0xaf4-0xadc];s32 maf4;
    char paf8[0xb28-0xaf8];char mb28[0x11];u8 mb39,mb3a,mb3b;u8 mb3c,mb3d;char pb3e[2];Vec3 mb40;
    void func_00215CF4();
    void func_00214C68();
    void func_00215EC4();
    void func_00216020();
    void func_002159EC();
    void func_00215B90(f32);
    bool func_00215F70();
    void startEff(EffHandle* h,const char* name){if(!m344){h->p=0;h->id=0;return;}if(effIsValid(h))func_00110848(h->p);*h=func_004A1B9C(m344,name);}
    EN_EXTRA
};
bool func_004FA0B8(En*);
void func_004F8638(En*,s32);
bool func_00588BF0(En*,s32);
bool func_0051D27C(s32*,s32,s32);
f32 func_0058AC38(En*);
bool func_0058ACC8(En*);
f32 func_0058AA40(En*);
Vec3* func_00520FC0(En*);
s32 func_0068C690(const Vec3&);
bool func_0051D2F4(s32*,s32,f32,s32,s32);
void func_004F5BD8(En*,s32,s32);
void func_004F68AC(En*,void*);
s32 func_0058AB74(En*);
void func_0014EB3C(En*);
struct Random;
Random* func_0058A7D4(En*);
u32 func_00111A64(Random*);
inline u32 randU32(Random* r,u32 n){return ((u64)func_00111A64(r)*n)>>32;}
void func_004D80A4(Vec3*,s32,f32);
void func_004D8AEC(void*,s32,const Vec3&);
void func_004CEAF0(Model*);
void func_001512B4(void*,const Vec3&);

bool En::target(){if(func_0058AB74(this)==1){float z=0.0f;float f;if(m95c.num>0)f=(*m95c.begin()).anim->operator[](0).m8;else f=func_0058AA40(this);if((f>=z&&f<=1.0f)||(f>=29.0f&&f<=30.0f))return true;}return false;}
