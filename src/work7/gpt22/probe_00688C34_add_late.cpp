#include "range.h"
f32 add(f32 a,f32 b){return a+b;}
bool target(f32*p,f32 goal,f32 step){f32 x=*p;if(x<goal){step=add(x,step);if(goal<=step||x>step){*p=goal;return true;}*p=step;return false;}if(x>goal){step=x-step;if(step<=goal||step>x){*p=goal;return true;}*p=step;return false;}return true;}
