/* auto-converted from Ghidra output */
typedef unsigned char undefined; typedef unsigned char undefined1; typedef unsigned short undefined2;
typedef unsigned int undefined3; typedef unsigned int undefined4; typedef unsigned long long undefined5;
typedef unsigned long long undefined6; typedef unsigned long long undefined7;
typedef unsigned long long undefined8; typedef unsigned char byte; typedef unsigned int uint;
typedef unsigned short ushort; typedef unsigned char uchar; typedef unsigned long ulong;
typedef long long longlong; typedef unsigned long long ulonglong; typedef int int3; typedef unsigned int uint3;
typedef long long int5; typedef long long int6; typedef long long int7; typedef unsigned long long uint5;
typedef unsigned long long uint6; typedef unsigned long long uint7; typedef long double float10;
typedef unsigned char bool; typedef unsigned short wchar16; typedef unsigned short char16;
typedef unsigned int dword; typedef unsigned short word; typedef unsigned long long qword;
typedef int code(); typedef unsigned char unkbyte; typedef unsigned int unkuint;
#define true 1
#define false 0
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1
#define CONCAT11(a,b) ((unsigned short)((((unsigned long long)(a)) << 8) | (((unsigned long long)(b)) & 0xffull)))
#define SUB11(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT12(a,b) ((unsigned int)((((unsigned long long)(a)) << 16) | (((unsigned long long)(b)) & 0xffffull)))
#define SUB12(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT12(v) ((unsigned short)(unsigned char)(v))
#define SEXT12(v) ((short)(signed char)(v))
#define CONCAT13(a,b) ((unsigned int)((((unsigned long long)(a)) << 24) | (((unsigned long long)(b)) & 0xffffffull)))
#define SUB13(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT13(v) ((unsigned int)(unsigned char)(v))
#define SEXT13(v) ((int)(signed char)(v))
#define CONCAT14(a,b) ((unsigned long long)((((unsigned long long)(a)) << 32) | (((unsigned long long)(b)) & 0xffffffffull)))
#define SUB14(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT14(v) ((unsigned int)(unsigned char)(v))
#define SEXT14(v) ((int)(signed char)(v))
#define CONCAT15(a,b) ((unsigned long long)((((unsigned long long)(a)) << 40) | (((unsigned long long)(b)) & 0xffffffffffull)))
#define SUB15(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT15(v) ((unsigned long long)(unsigned char)(v))
#define SEXT15(v) ((long long)(signed char)(v))
#define CONCAT16(a,b) ((unsigned long long)((((unsigned long long)(a)) << 48) | (((unsigned long long)(b)) & 0xffffffffffffull)))
#define SUB16(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT16(v) ((unsigned long long)(unsigned char)(v))
#define SEXT16(v) ((long long)(signed char)(v))
#define CONCAT17(a,b) ((unsigned long long)((((unsigned long long)(a)) << 56) | (((unsigned long long)(b)) & 0xffffffffffffffull)))
#define SUB17(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT17(v) ((unsigned long long)(unsigned char)(v))
#define SEXT17(v) ((long long)(signed char)(v))
#define SUB18(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT18(v) ((unsigned long long)(unsigned char)(v))
#define SEXT18(v) ((long long)(signed char)(v))
#define CONCAT21(a,b) ((unsigned int)((((unsigned long long)(a)) << 8) | (((unsigned long long)(b)) & 0xffull)))
#define SUB21(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT22(a,b) ((unsigned int)((((unsigned long long)(a)) << 16) | (((unsigned long long)(b)) & 0xffffull)))
#define SUB22(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT23(a,b) ((unsigned long long)((((unsigned long long)(a)) << 24) | (((unsigned long long)(b)) & 0xffffffull)))
#define SUB23(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT23(v) ((unsigned int)(unsigned short)(v))
#define SEXT23(v) ((int)(short)(v))
#define CONCAT24(a,b) ((unsigned long long)((((unsigned long long)(a)) << 32) | (((unsigned long long)(b)) & 0xffffffffull)))
#define SUB24(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT24(v) ((unsigned int)(unsigned short)(v))
#define SEXT24(v) ((int)(short)(v))
#define CONCAT25(a,b) ((unsigned long long)((((unsigned long long)(a)) << 40) | (((unsigned long long)(b)) & 0xffffffffffull)))
#define SUB25(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT25(v) ((unsigned long long)(unsigned short)(v))
#define SEXT25(v) ((long long)(short)(v))
#define CONCAT26(a,b) ((unsigned long long)((((unsigned long long)(a)) << 48) | (((unsigned long long)(b)) & 0xffffffffffffull)))
#define SUB26(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT26(v) ((unsigned long long)(unsigned short)(v))
#define SEXT26(v) ((long long)(short)(v))
#define SUB27(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT27(v) ((unsigned long long)(unsigned short)(v))
#define SEXT27(v) ((long long)(short)(v))
#define SUB28(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT28(v) ((unsigned long long)(unsigned short)(v))
#define SEXT28(v) ((long long)(short)(v))
#define CONCAT31(a,b) ((unsigned int)((((unsigned long long)(a)) << 8) | (((unsigned long long)(b)) & 0xffull)))
#define SUB31(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT32(a,b) ((unsigned long long)((((unsigned long long)(a)) << 16) | (((unsigned long long)(b)) & 0xffffull)))
#define SUB32(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT33(a,b) ((unsigned long long)((((unsigned long long)(a)) << 24) | (((unsigned long long)(b)) & 0xffffffull)))
#define SUB33(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT34(a,b) ((unsigned long long)((((unsigned long long)(a)) << 32) | (((unsigned long long)(b)) & 0xffffffffull)))
#define SUB34(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT34(v) ((unsigned int)(unsigned int)(v))
#define SEXT34(v) ((int)(int)(v))
#define CONCAT35(a,b) ((unsigned long long)((((unsigned long long)(a)) << 40) | (((unsigned long long)(b)) & 0xffffffffffull)))
#define SUB35(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT35(v) ((unsigned long long)(unsigned int)(v))
#define SEXT35(v) ((long long)(int)(v))
#define SUB36(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT36(v) ((unsigned long long)(unsigned int)(v))
#define SEXT36(v) ((long long)(int)(v))
#define SUB37(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT37(v) ((unsigned long long)(unsigned int)(v))
#define SEXT37(v) ((long long)(int)(v))
#define SUB38(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT38(v) ((unsigned long long)(unsigned int)(v))
#define SEXT38(v) ((long long)(int)(v))
#define CONCAT41(a,b) ((unsigned long long)((((unsigned long long)(a)) << 8) | (((unsigned long long)(b)) & 0xffull)))
#define SUB41(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT42(a,b) ((unsigned long long)((((unsigned long long)(a)) << 16) | (((unsigned long long)(b)) & 0xffffull)))
#define SUB42(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT43(a,b) ((unsigned long long)((((unsigned long long)(a)) << 24) | (((unsigned long long)(b)) & 0xffffffull)))
#define SUB43(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT44(a,b) ((unsigned long long)((((unsigned long long)(a)) << 32) | (((unsigned long long)(b)) & 0xffffffffull)))
#define SUB44(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB45(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT45(v) ((unsigned long long)(unsigned int)(v))
#define SEXT45(v) ((long long)(int)(v))
#define SUB46(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT46(v) ((unsigned long long)(unsigned int)(v))
#define SEXT46(v) ((long long)(int)(v))
#define SUB47(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT47(v) ((unsigned long long)(unsigned int)(v))
#define SEXT47(v) ((long long)(int)(v))
#define SUB48(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT48(v) ((unsigned long long)(unsigned int)(v))
#define SEXT48(v) ((long long)(int)(v))
#define CONCAT51(a,b) ((unsigned long long)((((unsigned long long)(a)) << 8) | (((unsigned long long)(b)) & 0xffull)))
#define SUB51(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT52(a,b) ((unsigned long long)((((unsigned long long)(a)) << 16) | (((unsigned long long)(b)) & 0xffffull)))
#define SUB52(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT53(a,b) ((unsigned long long)((((unsigned long long)(a)) << 24) | (((unsigned long long)(b)) & 0xffffffull)))
#define SUB53(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB54(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB55(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB56(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT56(v) ((unsigned long long)(unsigned long long)(v))
#define SEXT56(v) ((long long)(long long)(v))
#define SUB57(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT57(v) ((unsigned long long)(unsigned long long)(v))
#define SEXT57(v) ((long long)(long long)(v))
#define SUB58(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT58(v) ((unsigned long long)(unsigned long long)(v))
#define SEXT58(v) ((long long)(long long)(v))
#define CONCAT61(a,b) ((unsigned long long)((((unsigned long long)(a)) << 8) | (((unsigned long long)(b)) & 0xffull)))
#define SUB61(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define CONCAT62(a,b) ((unsigned long long)((((unsigned long long)(a)) << 16) | (((unsigned long long)(b)) & 0xffffull)))
#define SUB62(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB63(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB64(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB65(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB66(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB67(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT67(v) ((unsigned long long)(unsigned long long)(v))
#define SEXT67(v) ((long long)(long long)(v))
#define SUB68(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT68(v) ((unsigned long long)(unsigned long long)(v))
#define SEXT68(v) ((long long)(long long)(v))
#define CONCAT71(a,b) ((unsigned long long)((((unsigned long long)(a)) << 8) | (((unsigned long long)(b)) & 0xffull)))
#define SUB71(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB72(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB73(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB74(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB75(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB76(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB77(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB78(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define ZEXT78(v) ((unsigned long long)(unsigned long long)(v))
#define SEXT78(v) ((long long)(long long)(v))
#define SUB81(v,o) ((unsigned char)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB82(v,o) ((unsigned short)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB83(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB84(v,o) ((unsigned int)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB85(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB86(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB87(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define SUB88(v,o) ((unsigned long long)(((unsigned long long)(v)) >> ((o) * 8)))
#define CARRY1(a,b) (((unsigned char)(a) + (unsigned char)(b)) < (unsigned char)(a))
#define SCARRY1(a,b) (((signed char)((unsigned char)(a) + (unsigned char)(b)) < (signed char)(a)) != ((signed char)(b) < 0))
#define SBORROW1(a,b) (((signed char)((unsigned char)(a) - (unsigned char)(b)) < (signed char)(a)) != ((signed char)(b) > 0))
#define CARRY2(a,b) (((unsigned short)(a) + (unsigned short)(b)) < (unsigned short)(a))
#define SCARRY2(a,b) (((short)((unsigned short)(a) + (unsigned short)(b)) < (short)(a)) != ((short)(b) < 0))
#define SBORROW2(a,b) (((short)((unsigned short)(a) - (unsigned short)(b)) < (short)(a)) != ((short)(b) > 0))
#define CARRY4(a,b) (((unsigned int)(a) + (unsigned int)(b)) < (unsigned int)(a))
#define SCARRY4(a,b) (((int)((unsigned int)(a) + (unsigned int)(b)) < (int)(a)) != ((int)(b) < 0))
#define SBORROW4(a,b) (((int)((unsigned int)(a) - (unsigned int)(b)) < (int)(a)) != ((int)(b) > 0))
#define CARRY8(a,b) (((unsigned long long)(a) + (unsigned long long)(b)) < (unsigned long long)(a))
#define SCARRY8(a,b) (((long long)((unsigned long long)(a) + (unsigned long long)(b)) < (long long)(a)) != ((long long)(b) < 0))
#define SBORROW8(a,b) (((long long)((unsigned long long)(a) - (unsigned long long)(b)) < (long long)(a)) != ((long long)(b) > 0))
#define NAN(x) ((x) != (x))
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct Blk16 { int f0; int f1; int f2; int f3; } Blk16;
typedef struct { u8 pad[0x45]; s8 f45; u8 f46; } Hdr100;

extern char *G_00706E20;
extern int  *G_007142C8;
extern int FUN_0030cc80();
extern int FUN_003a4e00();
extern int FUN_00519e70();
extern int FUN_0051ae88();
extern int FUN_0051b0c8();
extern int FUN_0051b1d0();
extern int FUN_0052fbdc();
extern int FUN_0054b1a8();
extern int FUN_0054dd78();
extern int FUN_00556068();

undefined4 FUN_003a5400(int *param_1)
{
  Blk16 s28;
  Blk16 s38;
  int d;
  int iVar4;
  int iVar5;
  int n;

  if (G_007142C8 != 0) {
    FUN_003a4e00(param_1);
    FUN_0030cc80(param_1);
    s28.f0 = 0;
    s28.f1 = 0;
    s28.f2 = 0;
    s28.f3 = -1;
    FUN_0054b1a8(param_1,&s28);
    {
    Hdr100 *h = (Hdr100 *)((char *)param_1 + 0x100);
    FUN_0051b1d0(G_007142C8,(int)h->f45);
    if (h->f46 != 0) {
      (**(code **)(*param_1 + 0x4c))(param_1);
    }
    }
    FUN_00519e70(G_007142C8,&s28);
    FUN_0051ae88(G_007142C8,*(u8 *)((char *)param_1 + 0x90));
    if ((param_1[7] != 0) && (iVar4 = FUN_00556068(param_1[7]), iVar4 != 0)) {
      s38.f0 = 0;
      s38.f1 = 0;
      s38.f2 = 0;
      s38.f3 = -1;
      d = FUN_0054dd78(*(int *)(FUN_00556068(param_1[7]) + 0x2d0) + 0x18,&s38);
      if (d != 0) {
        FUN_0051b0c8(G_007142C8,&s38);
      }
      else {
        n = *(u8 *)(FUN_00556068(param_1[7]) + 0x5c);
        iVar4 = 0;
        if (0 < n) {
          do {
            char *base = (char *)FUN_00556068(param_1[7]) + 0x5e;
            iVar5 = (int)*(short *)(base + iVar4 * 6);
            if (((0 < iVar5) &&
                (iVar5 = FUN_0052fbdc((int)(G_00706E20 + 0x3dbbc),iVar5,0), iVar5 != 0)) &&
               (iVar5 = FUN_0054dd78(*(int *)(iVar5 + 0x2d0) + 0x18,&s38), iVar5 != 0)) {
              FUN_0051b0c8(G_007142C8,&s38);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < n);
        }
      }
    }
  }
  return 1;
}
