class SafeString_006F5980 {
public:
    SafeString_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
typedef SafeString_006F5980 SafeString;
extern "C" void func_004FB4E0(void* actor, float f);
extern "C" void func_00150A84(void* actor, const SafeString& name, int arg);
extern "C" void func_001B2A74(void* actor)
{
    func_004FB4E0(actor, 1.0f);
    func_00150A84(actor, SafeString("SE_Stalfos_WAKE_UP"), 0);
}
