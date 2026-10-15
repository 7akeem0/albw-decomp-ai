typedef unsigned int u32;typedef int s32;typedef float f32;
struct Interp293C;
struct PtrArray294F{u32 count;u32 max;Interp293C** data;Interp293C* at(u32 i){if(i<count)return data[i];return 0;}};
struct Child294F{char pad[0x178];PtrArray294F arr;};
extern "C" void func_0010C7F8(Interp293C*,s32,f32);
extern "C" void func_00294F54(Child294F* c,s32 frames,f32 target){
    func_0010C7F8(c->arr.at(2),frames,target);
}
