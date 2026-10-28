class SafeString_006F5980 {
public:
    SafeString_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
typedef SafeString_006F5980 SafeString;
extern "C" void func_00150A84(void* actor, const SafeString& name, int arg);
extern "C" void func_002FB00C(void* actor)
{
    func_00150A84(actor, SafeString("SE_StalfosBone_BREAK"), 0);
}
