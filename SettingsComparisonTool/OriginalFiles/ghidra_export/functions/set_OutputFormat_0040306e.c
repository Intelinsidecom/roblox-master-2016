/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040306e
 * Raw Name    : set_OutputFormat
 * Demangled   : set_OutputFormat
 * Prototype   : void set_OutputFormat(undefined4 value, byte * param_2)
 * Local Vars  : value, pcStack_8, uStack_4, uStack_2, cVar1, bVar2, cVar3, bVar4, in_EAX, pcVar5, pbVar6, piVar7, uVar8, cVar9, param_2, cVar10, unaff_EBX, unaff_ESI, pbVar11, in_ES, in_DS
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall set_OutputFormat(undefined4 value,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  byte *pbVar6;
  int *piVar7;
  char cVar9;
  char cVar10;
  char *unaff_EBX;
  char *unaff_ESI;
  byte *pbVar11;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_8;
  undefined2 uStack_4;
  undefined2 uStack_2;
  char *pcVar5;
  
                    /* .NET CLR Managed Code */
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + *unaff_EBX;
  pcVar5 = (char *)CONCAT31(uVar8,cVar1);
  cVar9 = (char)param_2;
  if (SCARRY1((char)in_EAX,*unaff_EBX) != cVar1 < '\0') {
    *pcVar5 = *pcVar5 + cVar1;
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_DS);
    value = CONCAT22((short)((uint)value >> 0x10),
                     CONCAT11((char)((uint)value >> 8) + *(char *)CONCAT31(uVar8,bVar2 + 0x2a),
                              (char)value));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
    pcVar5 = pcStack_8;
  }
  cVar1 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar1;
  _uStack_4 = CONCAT22(uStack_2,in_ES);
  *pcVar5 = *pcVar5 + cVar1;
  uVar8 = (undefined3)((uint)pcVar5 >> 8);
  bVar2 = cVar1 + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  cVar3 = bVar2 + 0x2a;
  pcVar5 = (char *)CONCAT31(uVar8,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
  *pcVar5 = *pcVar5 + cVar3;
  cVar10 = (char)in_ES - *unaff_ESI;
  cVar1 = *(char *)(CONCAT31((int3)((uint)_uStack_4 >> 8),cVar10) + 0x34);
  *pcVar5 = *pcVar5 + cVar3;
  bVar2 = bVar2 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar2 + 0x2a);
  bVar2 = (byte)((uint)value >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar2 + *pbVar6,(char)value));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar2,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)value;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar3 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar3);
  pbVar11 = (byte *)(unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7);
  bVar4 = cVar3 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar4);
  *pbVar6 = *pbVar6 + bVar4;
  *pcVar5 = *pcVar5 + cVar9;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  piVar7 = (int *)(CONCAT22(uStack_2,CONCAT11((char)((ushort)in_ES >> 8) + cVar1,cVar10)) + -0x41);
  *piVar7 = (int)(pbVar11 + (uint)CARRY1(bVar2,bVar4) + *piVar7);
  *pbVar6 = *pbVar6 + bVar4;
  bVar4 = bVar4 | *pbVar11;
  *(char *)CONCAT31(uVar8,bVar4) = *(char *)CONCAT31(uVar8,bVar4) + bVar4;
  pcVar5 = (char *)CONCAT31(uVar8,bVar4 + 0x7b);
  *pcVar5 = *pcVar5 + bVar4 + 0x7b;
  pbVar11[CONCAT31(uVar8,bVar4 - 8) + -1] = pbVar11[CONCAT31(uVar8,bVar4 - 8) + -1] + (bVar4 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


