typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" {
extern char data_0070E958[];
extern char bss_0077D518[];
extern void func_004C03B8(unsigned, unsigned);
}
struct Base_00339CC4 {
 Base_00339CC4(unsigned o,unsigned t,void* d,int r);
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
 virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
 virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
 virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
 virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
 virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
 virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
 virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
 virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
 char pad[0x31C];
};
struct SV { virtual void s0(); };
struct FourWords { u32 a,b,c,d; };
static void link(unsigned a,unsigned b){func_004C03B8(a,b);}


struct C_006D5480 : Base_00339CC4, SV {
 char p1[0x911-0x324]; u8 m911;; char p2[0x938-0x912]; FourWords m938; char tail[0x98C-0x948];
 C_006D5480(unsigned owner) : Base_00339CC4(owner,4,data_0070E958,-1)
 {m911=3;link((unsigned)this,(unsigned)bss_0077D518);m938.a=0x038E38E0; m938.b=0x0E38E380;
m938.c=0x00B60B60; m938.d=0x02D82D80;}
};
extern "C" C_006D5480* func_006051A8(unsigned owner)
{ return new (std::nothrow) C_006D5480(owner); }
