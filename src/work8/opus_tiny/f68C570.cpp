// 0x68C570: vec_ctor element ctor (literal from 0x570D00): fixed-capacity array base {num=0, max=9, data}
// with inline storage; Base(buf,max): mNum(0), mMax(max), mData(0) { if (buf) mData = buf; } (adds/strne)
typedef unsigned int u32; typedef int s32;
struct PtrArrBase { s32 mNum; s32 mMax; void* mData;
  PtrArrBase(void* buf, s32 max) : mNum(0), mMax(max), mData(0) { if (buf) mData = buf; } };
struct FixedArr9_68C570 : PtrArrBase { u32 mBuf[9]; FixedArr9_68C570(); };
FixedArr9_68C570::FixedArr9_68C570() : PtrArrBase(mBuf, 9) {}
