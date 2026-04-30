/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040309f
 * Raw Name    : get_Description
 * Demangled   : get_Description
 * Prototype   : char * get_Description(undefined4 param_1, byte * param_2)
 * Local Vars  : cVar1, bVar2, cVar3, bVar4, in_EAX, pcVar5, pbVar6, piVar7, uVar8, cVar9, param_1, unaff_ESI, param_2, pbVar10, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

char * __fastcall get_Description(undefined4 param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char *in_EAX;
  undefined3 uVar8;
  byte *pbVar6;
  int *piVar7;
  char cVar9;
  char *unaff_ESI;
  byte *pbVar10;
  undefined4 unaff_retaddr;
  char *pcVar5;
  
                    /* .NET CLR Managed Code */
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  bVar2 = (char)in_EAX + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  cVar3 = bVar2 + 0x2a;
  pcVar5 = (char *)CONCAT31(uVar8,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - (char)param_2;
  *pcVar5 = *pcVar5 + cVar3;
  cVar9 = (char)unaff_retaddr - *unaff_ESI;
  cVar1 = *(char *)(CONCAT31((int3)((uint)unaff_retaddr >> 8),cVar9) + 0x34);
  *pcVar5 = *pcVar5 + cVar3;
  bVar2 = bVar2 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar2 + 0x2a);
  bVar2 = (byte)((uint)param_1 >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar2 + *pbVar6,(char)param_1));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar2,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)param_1;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar3 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar3);
  pbVar10 = (byte *)(unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7);
  bVar4 = cVar3 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar4);
  *pbVar6 = *pbVar6 + bVar4;
  *pcVar5 = *pcVar5 + (char)param_2;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  piVar7 = (int *)(CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                            CONCAT11((char)((uint)unaff_retaddr >> 8) + cVar1,cVar9)) + -0x41);
  *piVar7 = (int)(pbVar10 + (uint)CARRY1(bVar2,bVar4) + *piVar7);
  *pbVar6 = *pbVar6 + bVar4;
  bVar4 = bVar4 | *pbVar10;
  *(char *)CONCAT31(uVar8,bVar4) = *(char *)CONCAT31(uVar8,bVar4) + bVar4;
  pcVar5 = (char *)CONCAT31(uVar8,bVar4 + 0x7b);
  *pcVar5 = *pcVar5 + bVar4 + 0x7b;
  pbVar10[CONCAT31(uVar8,bVar4 - 8) + -1] = pbVar10[CONCAT31(uVar8,bVar4 - 8) + -1] + (bVar4 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


