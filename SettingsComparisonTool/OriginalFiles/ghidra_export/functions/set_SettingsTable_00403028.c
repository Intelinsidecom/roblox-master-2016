/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403028
 * Raw Name    : set_SettingsTable
 * Demangled   : set_SettingsTable
 * Prototype   : void set_SettingsTable(undefined4 value, byte * param_2)
 * Local Vars  : pcStack_10, cVar1, cVar2, bVar3, bVar4, in_EAX, pcVar5, pbVar6, piVar7, param_2, uVar8, bVar9, uVar10, cVar11, cVar12, unaff_EBX, unaff_ESI, in_ES, in_DS, value
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall set_SettingsTable(undefined4 value,byte *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  byte *pbVar6;
  int *piVar7;
  byte bVar9;
  undefined2 uVar10;
  char cVar11;
  char cVar12;
  char *unaff_EBX;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_10;
  char *pcVar5;
  
                    /* .NET CLR Managed Code */
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + *unaff_EBX;
  pcVar5 = (char *)CONCAT31(uVar8,cVar1);
  cVar11 = (char)param_2;
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar1 < '\0') {
code_r0x00403052:
    pcVar5 = (char *)CONCAT31((int3)((uint)pcVar5 >> 8),(char)pcVar5 + '*');
code_r0x00403058:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    bVar3 = (char)pcVar5 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
    pcVar5 = (char *)CONCAT31(uVar8,bVar3 + 0x2a);
    *pcVar5 = *pcVar5 + bVar3 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar3 + 0x54 & *param_2);
code_r0x00403072:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar3 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
    pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_DS);
    value = CONCAT22((short)((uint)value >> 0x10),
                     CONCAT11((char)((uint)value >> 8) + *(char *)CONCAT31(uVar8,bVar3 + 0x2a),
                              (char)value));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
    pcVar5 = pcStack_10;
code_r0x0040309a:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_ES);
    *pcVar5 = *pcVar5 + cVar1;
    pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),cVar1 + 0x2aU & *param_2);
  }
  else {
    *pcVar5 = *pcVar5 + cVar1;
    cVar2 = cVar1 + '*';
    pcVar5 = (char *)CONCAT31(uVar8,cVar2);
    if ((POPCOUNT(cVar2) & 1U) != 0) goto code_r0x00403058;
    *pcVar5 = *pcVar5 + cVar2;
    pbVar6 = (byte *)(CONCAT31(uVar8,cVar1 + 'O') + -0x33282610);
    bVar3 = *pbVar6;
    bVar4 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar4;
    uVar8 = (undefined3)((uint)pbVar6 >> 8);
    bVar9 = (byte)((uint)value >> 8);
    uVar10 = (undefined2)((uint)value >> 0x10);
    if (!CARRY1(bVar3,bVar4)) {
      if (!SCARRY1(bVar4,'\0')) {
        *pbVar6 = *pbVar6 + bVar4;
        value = CONCAT22(uVar10,CONCAT11(bVar9 | *param_2,(char)value));
        pcVar5 = (char *)CONCAT31(uVar8,bVar4 & *param_2);
        *pcVar5 = *pcVar5 + (bVar4 & *param_2);
        goto code_r0x00403052;
      }
      pcVar5 = (char *)CONCAT31(uVar8,bVar4 + *unaff_EBX);
      if (SCARRY1(bVar4,*unaff_EBX) != (char)(bVar4 + *unaff_EBX) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar3 = bVar4 + *unaff_EBX;
    pbVar6 = (byte *)CONCAT31(uVar8,bVar3);
    if (SCARRY1(bVar4,*unaff_EBX) == (char)bVar3 < '\0') {
      pcVar5 = (char *)CONCAT22(uVar10,CONCAT11(bVar9 | *param_2,(char)value));
      *unaff_EBX = *unaff_EBX + cVar11;
      *param_2 = *param_2 ^ bVar3;
      *(char *)((int)pbVar6 * 2) = *(char *)((int)pbVar6 * 2) + bVar3;
      goto code_r0x004030df;
    }
  }
  cVar1 = (char)pbVar6;
  *pbVar6 = *pbVar6 + cVar1;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar2 = cVar1 + '*';
  pcVar5 = (char *)CONCAT31(uVar8,cVar2);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
  *pcVar5 = *pcVar5 + cVar2;
  cVar12 = (char)pcStack_10 - *unaff_ESI;
  unaff_EBX = (char *)CONCAT22((short)((uint)pcStack_10 >> 0x10),
                               CONCAT11((char)((uint)pcStack_10 >> 8) +
                                        *(char *)(CONCAT31((int3)((uint)pcStack_10 >> 8),cVar12) +
                                                 0x34),cVar12));
  *pcVar5 = *pcVar5 + cVar2;
  bVar3 = cVar1 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar3 + 0x2a);
  bVar3 = (byte)((uint)value >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar3 + *pbVar6,(char)value));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar3,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)value;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar1 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar1);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7;
  cVar1 = cVar1 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,cVar1);
  *pbVar6 = *pbVar6 + cVar1;
code_r0x004030df:
  *pcVar5 = *pcVar5 + cVar11;
  bVar3 = *pbVar6;
  bVar4 = (byte)pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  *(byte **)(unaff_EBX + -0x41) =
       unaff_ESI + (uint)CARRY1(bVar3,bVar4) + *(int *)(unaff_EBX + -0x41);
  *pbVar6 = *pbVar6 + bVar4;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  bVar4 = bVar4 | *unaff_ESI;
  *(char *)CONCAT31(uVar8,bVar4) = *(char *)CONCAT31(uVar8,bVar4) + bVar4;
  pcVar5 = (char *)CONCAT31(uVar8,bVar4 + 0x7b);
  *pcVar5 = *pcVar5 + bVar4 + 0x7b;
  unaff_ESI[CONCAT31(uVar8,bVar4 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar8,bVar4 - 8) + -1] + (bVar4 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


