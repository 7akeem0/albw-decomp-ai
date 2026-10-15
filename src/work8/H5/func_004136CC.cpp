typedef unsigned int u32;
typedef float f32;

extern "C" u32 func_004137E4(void);

extern "C" f32 func_004136CC(void) {
    u32 v = func_004137E4();
    return (f32)v * 1.52590219e-05f;
}
