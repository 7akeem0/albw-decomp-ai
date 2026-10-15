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
extern int FUN_0010bb14();
extern int FUN_001104e4();

static int divide5(int n,int d){return FUN_001104e4(n,d);}
void FUN_0010a644(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((int)param_3 <= 0) {
    return;
  }
  puVar4 = *(uint **)(param_1 + 4); __memory_changed();
  iVar2 = *(int *)(param_2 + 8);
  uint count5=param_3;
  if(iVar2>=0){uVar3=(uint)divide5(iVar2+0x7f,0x80)*0x80;}else{uVar3=(uint)divide5(iVar2-0x7f,0x80)*0x80;}
  *(uint *)(param_2 + 8) = uVar3 + count5; __memory_changed();
  *puVar4 = uVar3;
  if (0 != uVar3) {
    puVar4[1] = count5;
    puVar4[2] = uVar3;
    puVar4[3] = 0; __memory_changed();
    if ((0x1effffff < *puVar4) &&
       (uVar3 = FUN_0010bb14(0x20000), (*puVar4 + puVar4[1]) - 1 <= uVar3)) {
      uVar1 = 0;
      goto LAB_0010a708;
    }
    if ((((uint)0x1F300000u) <= *puVar4) &&
       (uVar3 = FUN_0010bb14(0x30000), (*puVar4 + puVar4[1]) - 1 <= uVar3)) {
      uVar1 = 1;
      goto LAB_0010a708;
    }
  }
  uVar1 = 2;
LAB_0010a708:
  *(undefined1 *)(puVar4 + 4) = uVar1;
  return;
}

