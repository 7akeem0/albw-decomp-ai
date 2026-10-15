typedef signed int s32;

int func_0051D27C(s32* p, s32 target, s32 step) {
  if (step == (s32)0x80000000) {
    *p = target;
    return 1;
  }
  s32 cur = *p;
  __schedule_barrier(); int r = 0;
  s32 d = target - cur;
  s32 v = target;
  if(d>step){*p=cur+step;}else{if(-step>d) v=cur-step;else r=1; *p=v;}
  return r;
}
