/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403066
 * Raw Name    : get_OutputFormat
 * Demangled   : get_OutputFormat
 * Prototype   : pointer get_OutputFormat(undefined4 param_1, byte * param_2)
 * Local Vars  : param_1, param_2, uStack_8, bVar1, cVar2, cVar3, in_EAX, pcVar4, pbVar5, piVar6, uVar7, bVar8, cVar9, cVar10, unaff_ESI, pbVar11, in_ES, in_DS
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

undefined * __fastcall get_OutputFormat(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char *in_EAX;
  undefined3 uVar7;
  char *pcVar4;
  byte *pbVar5;
  int *piVar6;
  byte bVar8;
  char cVar9;
  char cVar10;
  char *unaff_ESI;
  byte *pbVar11;
  undefined2 in_ES;
  undefined2 in_DS;
  undefined4 uStack_8;
  
                    /* .NET CLR Managed Code */
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = (char)in_EAX + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  uStack_8 = (char *)CONCAT22(uStack_8._2_2_,in_DS);
  pcVar4 = uStack_8;
  bVar8 = (char)((uint)param_1 >> 8) + *(char *)CONCAT31(uVar7,bVar1 + 0x2a);
  cVar9 = (char)param_2;
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
  cVar2 = (char)in_DS;
  *uStack_8 = *uStack_8 + cVar2;
  uStack_8 = (char *)CONCAT22(uStack_8._2_2_,in_ES);
  *pcVar4 = *pcVar4 + cVar2;
  uVar7 = (undefined3)((uint)pcVar4 >> 8);
  bVar1 = cVar2 + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  cVar3 = bVar1 + 0x2a;
  pcVar4 = (char *)CONCAT31(uVar7,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
  *pcVar4 = *pcVar4 + cVar3;
  cVar10 = (char)in_ES - *unaff_ESI;
  cVar2 = *(char *)(CONCAT31((int3)((uint)uStack_8 >> 8),cVar10) + 0x34);
  *pcVar4 = *pcVar4 + cVar3;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar1 + 0x2a);
  pcVar4 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar8 + *pbVar5,(char)param_1));
  pbVar5 = pbVar5 + (uint)CARRY1(bVar8,*pbVar5) + *(int *)pbVar5;
  *param_2 = *param_2 + (char)param_1;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar3 = (byte)pbVar5 - *pbVar5;
  piVar6 = (int *)CONCAT31(uVar7,cVar3);
  pbVar11 = (byte *)(unaff_ESI + (uint)((byte)pbVar5 < *pbVar5) + *piVar6);
  bVar8 = cVar3 + (char)*piVar6;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar8);
  *pbVar5 = *pbVar5 + bVar8;
  *pcVar4 = *pcVar4 + cVar9;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  piVar6 = (int *)(CONCAT22(uStack_8._2_2_,CONCAT11((char)((ushort)in_ES >> 8) + cVar2,cVar10)) +
                  -0x41);
  *piVar6 = (int)(pbVar11 + (uint)CARRY1(bVar1,bVar8) + *piVar6);
  *pbVar5 = *pbVar5 + bVar8;
  bVar8 = bVar8 | *pbVar11;
  *(char *)CONCAT31(uVar7,bVar8) = *(char *)CONCAT31(uVar7,bVar8) + bVar8;
  pcVar4 = (char *)CONCAT31(uVar7,bVar8 + 0x7b);
  *pcVar4 = *pcVar4 + bVar8 + 0x7b;
  pbVar11[CONCAT31(uVar7,bVar8 - 8) + -1] = pbVar11[CONCAT31(uVar7,bVar8 - 8) + -1] + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


