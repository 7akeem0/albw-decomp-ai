// func_00560DF0: binary search. data = self->m0 ; hdr = data[0]; n = hdr >> 8; lo = 0; hi = n;
// if (hi <= 0) return -1;
// do { mid = (lo+hi)/2; r = func_0010FBAC(key, data[1+mid] + self->m0); if (r == 0) return mid;
//      if (r > 0) lo = mid+1; else hi = mid; } while (hi > lo);  return -1;

typedef unsigned int u32;
typedef int s32;

struct Self {
    char* m0;
};

s32 func_0010FBAC(u32 key, u32 entry);

s32 func_00560DF0(Self* self, u32 key) {
    u32* data = (u32*)self->m0;
    u32 hdr = *data;
    data = data + 1;
    s32 lo = 0;
    s32 hi = (s32)(hdr >> 8);
    if (hi <= 0) {
        return -1;
    }
    do {
        s32 mid = (lo + hi) / 2;
        s32 r = func_0010FBAC(key, data[mid] + (u32)self->m0);
        if (r == 0) {
            return mid;
        }
        if (r > 0) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    } while (hi > lo);
    return -1;
}
