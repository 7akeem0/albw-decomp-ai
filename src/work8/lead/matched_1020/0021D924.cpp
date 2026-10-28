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
extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern void func_004FB4E0(unsigned, float);
extern void func_00150A84(unsigned, const SafeString_006F5980&, unsigned);
void func_0021D924(unsigned a0)
{
  unsigned h901, h902, h903;
  h901 = a0 + 0x3DC;
  *(float *)((char *)h901) = 0.0f;
  h902 = a0;
  *(float *)((char *)h902 + 0x3E4) = 0.0f;
  h903 = a0 + 0x8C1;
  if (*(unsigned char *)((char *)h903) == 4) goto L3;
  func_004FABDC(a0, 0, (-1), 0);
  L2:;
  func_004FB4E0(a0, 0.0f);
  func_00150A84(a0, SafeString_006F5980("SE_Rope_FALL"), 0);
  return;
  L3:;
  func_004FABDC(a0, 3, (-1), 0);
  goto L2;
}

}
