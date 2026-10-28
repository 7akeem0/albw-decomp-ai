class SafeString_006F5980 {
public:
    SafeString_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
extern "C" char ro_006A18A4[];
extern "C" void func_00150A84(void* actor, const SafeString_006F5980& name, int arg);
struct Iface { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void onEvent(); };
struct ActorBase { virtual void b0(); char pad[0x2D3]; unsigned char m2D7; char pad2[0x320 - 0x2D8]; };
struct Actor : ActorBase, Iface {};
extern "C" void func_0051228C(Actor* a, int flag)
{
    if (flag != 0) static_cast<Iface*>(a)->onEvent();
    a->m2D7 = 1;
    func_00150A84(a, SafeString_006F5980(ro_006A18A4), 0);
}
