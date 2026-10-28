typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

class SafeString_006F5980 {
public:
    SafeString_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
extern "C" {
extern void func_004289CC(unsigned, const SafeString_006F5980&);
extern void func_001B6C2C(unsigned);
void func_0029E2CC(unsigned a0, unsigned a1)
{
  if (*(unsigned *)((char *)a0 + 0x1C) == 0) {
    return;
  }
  if (a1 != 0) {
    func_004289CC(*(unsigned *)((char *)a0 + 0x1C), SafeString_006F5980("T_Message_00"));
  } else {
    func_004289CC(*(unsigned *)((char *)a0 + 0x1C), SafeString_006F5980("T_Message_01"));
  }
  func_001B6C2C(*(unsigned *)((char *)a0 + 0x1C));
  return;
}

}
