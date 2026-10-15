typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef signed int s32;

struct Mgr70FB60;
extern Mgr70FB60* data_0070FB60;
bool func_00556D7C(Mgr70FB60* m);
bool func_002E0168(s32 id);

struct ActorBaseA {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual bool v25();
    s32 getActorId();                   // 0x588BE4 (non-inline)
    bool baseCheck(s32 a, s32 b);       // 0x4ECDE8
    char padA[0x4f1 - 4];
    s8 m4F1;
};

class Actor461C : public ActorBaseA {
public:
    bool func_001E461C(s32 a, s32 b);
};

bool Actor461C::func_001E461C(s32 a, s32 b) {
    if (m4F1 && !func_002E0168(getActorId())) {
        Mgr70FB60* m = data_0070FB60;
        if (m && func_00556D7C(m))
            return v25();
    }
    return baseCheck(a, b);
}
