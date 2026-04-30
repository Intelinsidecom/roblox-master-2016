/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403020
 * Raw Name    : get_SettingsTable
 * Demangled   : get_SettingsTable
 * Prototype   : char * get_SettingsTable(undefined4 param_1, byte * param_2)
 * Local Vars  : pcStack_14, bVar1, cVar2, bVar3, cVar4, in_EAX, pcVar5, pbVar6, piVar7, uVar8, bVar9, uVar10, cVar11, param_1, cVar12, param_2, unaff_EBX, pcVar13, unaff_ESI, in_ES, in_DS
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall get_SettingsTable(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char *in_EAX;
  undefined3 uVar8;
  byte *pbVar6;
  int *piVar7;
  byte bVar9;
  undefined2 uVar10;
  char cVar11;
  char cVar12;
  int unaff_EBX;
  char *pcVar13;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_14;
  char *pcVar5;
  
                    /* .NET CLR Managed Code */
  pcVar13 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x26),
                                      (char)unaff_EBX));
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = (char)in_EAX + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar8,bVar1) = *(char *)CONCAT31(uVar8,bVar1) + bVar1;
  cVar2 = bVar1 + 0x2a;
  pcVar5 = (char *)CONCAT31(uVar8,cVar2);
  cVar11 = (char)param_2;
  if ((POPCOUNT(cVar2) & 1U) == 0) {
    *pcVar5 = *pcVar5 + cVar2;
    pbVar6 = (byte *)(CONCAT31(uVar8,bVar1 + 0x4f) + -0x33282610);
    bVar1 = *pbVar6;
    bVar3 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar3;
    uVar8 = (undefined3)((uint)pbVar6 >> 8);
    bVar9 = (byte)((uint)param_1 >> 8);
    uVar10 = (undefined2)((uint)param_1 >> 0x10);
    if (!CARRY1(bVar1,bVar3)) {
      if (!SCARRY1(bVar3,'\0')) {
        *pbVar6 = *pbVar6 + bVar3;
        param_1 = CONCAT22(uVar10,CONCAT11(bVar9 | *param_2,(char)param_1));
        bVar3 = bVar3 & *param_2;
        *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
        pcVar5 = (char *)CONCAT31(uVar8,bVar3 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar5 = (char *)CONCAT31(uVar8,bVar3 + *pcVar13);
      if (SCARRY1(bVar3,*pcVar13) != (char)(bVar3 + *pcVar13) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar1 = bVar3 + *pcVar13;
    pbVar6 = (byte *)CONCAT31(uVar8,bVar1);
    if (SCARRY1(bVar3,*pcVar13) == (char)bVar1 < '\0') {
      pcVar5 = (char *)CONCAT22(uVar10,CONCAT11(bVar9 | *param_2,(char)param_1));
      *pcVar13 = *pcVar13 + cVar11;
      *param_2 = *param_2 ^ bVar1;
      *(char *)((int)pbVar6 * 2) = *(char *)((int)pbVar6 * 2) + bVar1;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    bVar1 = (char)pcVar5 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar8,bVar1) = *(char *)CONCAT31(uVar8,bVar1) + bVar1;
    pcVar5 = (char *)CONCAT31(uVar8,bVar1 + 0x2a);
    *pcVar5 = *pcVar5 + bVar1 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar1 + 0x54 & *param_2);
code_r0x00403072:
    cVar2 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar2;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    pcVar5 = (char *)CONCAT31(uVar8,cVar2 + '*');
    *pcVar5 = *pcVar5 + cVar2 + '*';
    bVar1 = cVar2 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar1) = *(char *)CONCAT31(uVar8,bVar1) + bVar1;
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_DS);
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                       CONCAT11((char)((uint)param_1 >> 8) + *(char *)CONCAT31(uVar8,bVar1 + 0x2a),
                                (char)param_1));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
    pcVar5 = pcStack_14;
code_r0x0040309a:
    cVar2 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar2;
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
    *pcVar5 = *pcVar5 + cVar2;
    pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),cVar2 + 0x2aU & *param_2);
  }
  cVar2 = (char)pbVar6;
  *pbVar6 = *pbVar6 + cVar2;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar4 = cVar2 + '*';
  pcVar5 = (char *)CONCAT31(uVar8,cVar4);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
  *pcVar5 = *pcVar5 + cVar4;
  cVar12 = (char)pcStack_14 - *unaff_ESI;
  pcVar13 = (char *)CONCAT22((short)((uint)pcStack_14 >> 0x10),
                             CONCAT11((char)((uint)pcStack_14 >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_14 >> 8),cVar12) +
                                               0x34),cVar12));
  *pcVar5 = *pcVar5 + cVar4;
  bVar1 = cVar2 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar8,bVar1) = *(char *)CONCAT31(uVar8,bVar1) + bVar1;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar1 + 0x2a);
  bVar1 = (byte)((uint)param_1 >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar1 + *pbVar6,(char)param_1));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar1,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)param_1;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar2 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar2);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7;
  cVar2 = cVar2 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,cVar2);
  *pbVar6 = *pbVar6 + cVar2;
code_r0x004030df:
  *pcVar5 = *pcVar5 + cVar11;
  bVar1 = *pbVar6;
  bVar3 = (byte)pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  *(byte **)(pcVar13 + -0x41) = unaff_ESI + (uint)CARRY1(bVar1,bVar3) + *(int *)(pcVar13 + -0x41);
  *pbVar6 = *pbVar6 + bVar3;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  bVar3 = bVar3 | *unaff_ESI;
  *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
  pcVar5 = (char *)CONCAT31(uVar8,bVar3 + 0x7b);
  *pcVar5 = *pcVar5 + bVar3 + 0x7b;
  unaff_ESI[CONCAT31(uVar8,bVar3 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar8,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


