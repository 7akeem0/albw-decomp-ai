 
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


#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1
extern char G_0070DA08[];
extern int FUN_001e6a6c();
extern int FUN_001e6ab4();

void FUN_0038862c(int param_1)

{

  char perm_t77;
  int perm_pad82;
  int perm_t75;
  int param_1_c18 = param_1;
  int perm_t41;  if ((perm_t77 = *(char *)(param_1_c18 + 0xa06)) != '\0') {
    *(undefined1 *)(param_1 + 0xa06) = 0; __schedule_barrier();
    perm_t41 = (perm_t75 = param_1); if (param_1_c18) {  } else {  } FUN_001e6a6c(perm_t41,((undefined4)G_0070DA08));
    return;
  }
  if (perm_pad82) { FUN_001e6ab4(); } else { FUN_001e6ab4(); }
  return;
}

