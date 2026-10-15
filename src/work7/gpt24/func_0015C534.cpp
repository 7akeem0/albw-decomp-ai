#include "range.h"
struct Linked15C524{char pad[0xe2c];s8 mode;};
struct Obj15C524;
extern Linked15C524*func_00161178(Obj15C524*);
extern float func_0058A404(Linked15C524*);
extern "C" s8 target(Obj15C524*p){Linked15C524*q=func_00161178(p);if(!q||func_0058A404(q)<=0.6f){q=func_00161178(p);if(q)return q->mode;}return 0;}
