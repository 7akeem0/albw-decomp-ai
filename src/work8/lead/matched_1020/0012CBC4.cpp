typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

class SafeString_006F5980 {
public:
    SafeString_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
extern char ro_006F5988[];
extern void func_00231448(unsigned);
extern void func_002317C0(unsigned, float);
extern unsigned func_00532F70(unsigned, const SafeString_006F5980&, unsigned, unsigned);
unsigned func_0012CBC4(unsigned a0)
{
  unsigned t4;
  func_00231448(a0 + 0x50);
  func_00231448(a0 + 0x44);
  func_002317C0(a0 + 0x5C, 1.0f);
  t4 = func_00532F70(a0, SafeString_006F5980("SE_S_DECIDE"), 0, 0);
  return t4;
}
