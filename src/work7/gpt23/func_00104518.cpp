#include "range.h"
struct StartupFlags {u8 a,b,active;};
typedef void (*Callback)();
extern StartupFlags data_007158E8;
extern Callback bss_007A03F8[8];
extern "C" void func_00104518(){
    if(data_007158E8.active){
        for(s32 i=0;i<8;++i){Callback callback=bss_007A03F8[i];if(callback) callback();}
        data_007158E8.active=0;
    }
}
