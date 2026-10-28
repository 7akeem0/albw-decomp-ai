typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" {
extern char ro_006A0404[];
extern char ro_006E7A74[];
extern char data_0070EDF8[];
extern char bss_0077FBB8[];
extern unsigned func_0010BAB4(unsigned);
extern unsigned func_006540C8(unsigned, unsigned, unsigned);
extern void func_004BE114(unsigned, unsigned, unsigned, const void*, unsigned);
extern void func_00374AC4(unsigned);
extern void func_004C03B8(unsigned, unsigned);
}
class SafeString_006F5980 {
public:
 SafeString_006F5980(const char* s):mStringTop(s) {}
 virtual void assureTerminationImpl_() const;
 const char* mStringTop;
};
static unsigned initializeBase(unsigned object,unsigned owner)
{ return func_006540C8(object,owner,2); }
static __forceinline unsigned primaryVtable()
{ return (unsigned)ro_006E7A74; }
static __forceinline unsigned secondaryVtable(unsigned primary)
{ return primary+0xBC; }
extern "C" unsigned func_00609D8C(unsigned owner)
{
 unsigned storage=func_0010BAB4(0x9D8);
 if(storage==0) return 0;
 unsigned object=initializeBase(storage,owner);
 unsigned primary=primaryVtable();
 unsigned secondary=secondaryVtable(primary);
 *(u32*)object=primary;
 *(u32*)(object+0x320)=secondary;
 func_004BE114(object,2,0,&SafeString_006F5980((const char*)ro_006A0404),
               (unsigned)data_0070EDF8);
 func_00374AC4(object);
 func_004C03B8(object,(unsigned)bss_0077FBB8);
 *(u32*)(object+0x8AC)|=0x10;
 return object;
}
