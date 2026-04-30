/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004030d0
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 param_1, char * param_2)
 * Local Vars  : cVar1, param_2, in_EAX, bVar2, piVar4, pbVar3, uVar6, pcVar5, unaff_EBX, bVar7, pbVar8, unaff_ESI, param_1
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall _ctor(undefined4 param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte *in_EAX;
  byte *pbVar3;
  undefined3 uVar6;
  char *pcVar5;
  byte bVar7;
  int unaff_EBX;
  int unaff_ESI;
  byte *pbVar8;
  int *piVar4;
  
                    /* .NET CLR Managed Code */
  bVar7 = (byte)((uint)param_1 >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar7 + *in_EAX,(char)param_1));
  pbVar3 = in_EAX + (uint)CARRY1(bVar7,*in_EAX) + *(int *)in_EAX;
  *param_2 = *param_2 + (char)param_1;
  uVar6 = (undefined3)((uint)pbVar3 >> 8);
  cVar1 = (byte)pbVar3 - *pbVar3;
  piVar4 = (int *)CONCAT31(uVar6,cVar1);
  pbVar8 = (byte *)(unaff_ESI + *piVar4 + (uint)((byte)pbVar3 < *pbVar3));
  bVar2 = cVar1 + (char)*piVar4;
  pbVar3 = (byte *)CONCAT31(uVar6,bVar2);
  *pbVar3 = *pbVar3 + bVar2;
  *pcVar5 = *pcVar5 + (char)param_2;
  bVar7 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  *(int *)(unaff_EBX + -0x41) =
       (int)(pbVar8 + (uint)CARRY1(bVar7,bVar2) + *(int *)(unaff_EBX + -0x41));
  *pbVar3 = *pbVar3 + bVar2;
  bVar2 = bVar2 | *pbVar8;
  *(char *)CONCAT31(uVar6,bVar2) = *(char *)CONCAT31(uVar6,bVar2) + bVar2;
  pcVar5 = (char *)CONCAT31(uVar6,bVar2 + 0x7b);
  *pcVar5 = *pcVar5 + bVar2 + 0x7b;
  pbVar8[CONCAT31(uVar6,bVar2 - 8) + -1] = pbVar8[CONCAT31(uVar6,bVar2 - 8) + -1] + (bVar2 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


