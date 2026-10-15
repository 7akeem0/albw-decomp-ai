// 0x692110: u64 saturation by sign: x>=0 -> UINT64_MAX, x<0 -> 0 (fplib helper)
typedef unsigned long long u64; typedef int s32; typedef unsigned int u32;
u64 func_00692110(s32 x) { u32 lo = ~(x >> 31); return ((u64)lo << 32) | lo; }
