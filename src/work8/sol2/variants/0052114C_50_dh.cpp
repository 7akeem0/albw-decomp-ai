typedef float f32;
struct O{char p[0x3b0];f32 m3b0;f32 m3b4;char p2[0x1c];f32 m3d4;};
bool f(O*o,f32 x,f32 y){f32 d=x-(o->m3d4+y);f32 b=o->m3b0;if(b<d){f32 c=o->m3b4;if(c>d)return true;return false;}return false;}