/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040304c
 * Raw Name    : set_FileName
 * Demangled   : set_FileName
 * Prototype   : void set_FileName(undefined4 value, byte * param_2)
 * Local Vars  : param_2, uStack_8, cVar1, bVar2, cVar3, in_EAX, pcVar4, pcVar5, pbVar6, piVar7, uVar8, bVar9, cVar10, cVar11, unaff_EBX, unaff_ESI, pbVar12, in_ES, in_DS, value
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall set_FileName(undefined4 value,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined3 uVar8;
  char *pcVar5;
  byte *pbVar6;
  int *piVar7;
  byte bVar9;
  char cVar10;
  char cVar11;
  char *unaff_EBX;
  char *unaff_ESI;
  byte *pbVar12;
  undefined2 in_ES;
  undefined2 in_DS;
  undefined4 uStack_8;
  char *pcVar4;
  
                    /* .NET CLR Managed Code */
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + *unaff_EBX;
  pcVar4 = (char *)CONCAT31(uVar8,cVar1);
  if (SCARRY1((char)in_EAX,*unaff_EBX) != cVar1 < '\0') {
    *pcVar4 = *pcVar4 + cVar1;
    pcVar4 = (char *)CONCAT31(uVar8,cVar1 + '*');
    *pcVar4 = *pcVar4 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcVar4 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
    *pcVar4 = *pcVar4 + bVar2 + 0x2a;
    bVar2 = bVar2 + 0x54 & *param_2;
    pcVar4 = (char *)CONCAT31(uVar8,bVar2);
    *pcVar4 = *pcVar4 + bVar2;
  }
  uVar8 = (undefined3)((uint)pcVar4 >> 8);
  cVar1 = (char)pcVar4 + '*';
  pcVar5 = (char *)CONCAT31(uVar8,cVar1);
  *pcVar5 = *pcVar5 + cVar1;
  bVar2 = (char)pcVar4 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  uStack_8 = (char *)CONCAT22(uStack_8._2_2_,in_DS);
  pcVar4 = uStack_8;
  bVar9 = (char)((uint)value >> 8) + *(char *)CONCAT31(uVar8,bVar2 + 0x2a);
  cVar10 = (char)param_2;
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar10;
  cVar1 = (char)in_DS;
  *uStack_8 = *uStack_8 + cVar1;
  uStack_8 = (char *)CONCAT22(uStack_8._2_2_,in_ES);
  *pcVar4 = *pcVar4 + cVar1;
  uVar8 = (undefined3)((uint)pcVar4 >> 8);
  bVar2 = cVar1 + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  cVar3 = bVar2 + 0x2a;
  pcVar4 = (char *)CONCAT31(uVar8,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar10;
  *pcVar4 = *pcVar4 + cVar3;
  cVar11 = (char)in_ES - *unaff_ESI;
  cVar1 = *(char *)(CONCAT31((int3)((uint)uStack_8 >> 8),cVar11) + 0x34);
  *pcVar4 = *pcVar4 + cVar3;
  bVar2 = bVar2 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar2 + 0x2a);
  pcVar4 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar9 + *pbVar6,(char)value));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar9,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)value;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar3 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar3);
  pbVar12 = (byte *)(unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7);
  bVar9 = cVar3 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar9);
  *pbVar6 = *pbVar6 + bVar9;
  *pcVar4 = *pcVar4 + cVar10;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar9;
  piVar7 = (int *)(CONCAT22(uStack_8._2_2_,CONCAT11((char)((ushort)in_ES >> 8) + cVar1,cVar11)) +
                  -0x41);
  *piVar7 = (int)(pbVar12 + (uint)CARRY1(bVar2,bVar9) + *piVar7);
  *pbVar6 = *pbVar6 + bVar9;
  bVar9 = bVar9 | *pbVar12;
  *(char *)CONCAT31(uVar8,bVar9) = *(char *)CONCAT31(uVar8,bVar9) + bVar9;
  pcVar4 = (char *)CONCAT31(uVar8,bVar9 + 0x7b);
  *pcVar4 = *pcVar4 + bVar9 + 0x7b;
  pbVar12[CONCAT31(uVar8,bVar9 - 8) + -1] = pbVar12[CONCAT31(uVar8,bVar9 - 8) + -1] + (bVar9 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


