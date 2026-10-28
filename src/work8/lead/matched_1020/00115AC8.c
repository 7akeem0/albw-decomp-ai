#include "../../import_mmaupas/include/albw_types.h"

/* Transpose a 4x4 float matrix: dst[col][row] = src[row][col].
 * The pointer walk (p += 12 between reads) is what makes armcc chain the
 * loads with writeback: vldmia r1!,{s0-s11} / vldmia r1,{s12-s15}
 * (see LESSONS.md, matched 00115224 for the same load shape). */
void func_00115AC8(f32* dst, const f32* src) {
    const f32* p = src;
    f32 v0 = p[0];
    f32 v1 = p[1];
    f32 v2 = p[2];
    f32 v3 = p[3];
    f32 v4 = p[4];
    f32 v5 = p[5];
    f32 v6 = p[6];
    f32 v7 = p[7];
    f32 v8 = p[8];
    f32 v9 = p[9];
    f32 v10 = p[10];
    f32 v11 = p[11];
    p += 12;
    f32 v12 = p[0];
    f32 v13 = p[1];
    f32 v14 = p[2];
    f32 v15 = p[3];
    dst[0] = v0;
    dst[4] = v1;
    dst[8] = v2;
    dst[12] = v3;
    dst[1] = v4;
    dst[5] = v5;
    dst[9] = v6;
    dst[13] = v7;
    dst[2] = v8;
    dst[6] = v9;
    dst[10] = v10;
    dst[14] = v11;
    dst[3] = v12;
    dst[7] = v13;
    dst[11] = v14;
    dst[15] = v15;
}
