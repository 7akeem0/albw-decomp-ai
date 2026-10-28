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
extern char data_00711F50[];
extern void func_001B6C04(unsigned);
extern void func_002317C0(unsigned, float);
extern unsigned func_00474138(unsigned);
extern unsigned func_00587F74(unsigned, const SafeString_006F5980&, unsigned);
unsigned func_004740B4(unsigned a0)
{
  unsigned t4;
  func_001B6C04(a0);
  func_002317C0(a0 + 0x74, 1.0f);
  func_00474138(a0);
  *(unsigned *)((char *)a0 + 0x88) = *(unsigned *)((char *)a0 + 0x84);
  t4 = func_00587F74(*(unsigned *)((char *)data_00711F50), SafeString_006F5980("SE_S_FLOOR_CHANGE"), 0);
  return t4;
}
