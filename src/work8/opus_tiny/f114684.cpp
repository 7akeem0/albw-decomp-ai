// 0x114684: s64 saturation by sign of the high word: x>=0 -> INT64_MAX, x<0 -> INT64_MIN (fplib helper)
typedef long long s64; typedef unsigned long long u64; typedef int s32; typedef unsigned int u32;
s64 func_00114684(s32 x) { u32 lo = ~(x >> 31); u32 hi = lo ^ 0x80000000; return (s64)(((u64)hi << 32) | lo); }
