/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403031
 * Raw Name    : get_FileName
 * Demangled   : get_FileName
 * Prototype   : char * get_FileName(undefined4 param_1, byte * param_2)
 * Local Vars  : param_1, pcStack_10, bVar1, param_2, bVar2, cVar3, cVar4, in_EAX, pbVar5, pcVar6, pcVar7, piVar8, uVar9, bVar10, uVar11, cVar12, cVar13, unaff_EBX, unaff_ESI, in_ES, in_DS
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall get_FileName(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char *in_EAX;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  undefined3 uVar9;
  byte bVar10;
  undefined2 uVar11;
  char cVar12;
  char cVar13;
  int unaff_EBX;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_10;
  int *piVar8;
  
                    /* .NET CLR Managed Code */
  pcVar6 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                            CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x24),
                                     (char)unaff_EBX));
  *in_EAX = *in_EAX + (char)in_EAX;
  pbVar5 = (byte *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '%') + -0x33282610);
  bVar2 = *pbVar5;
  bVar1 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar1;
  uVar9 = (undefined3)((uint)pbVar5 >> 8);
  bVar10 = (byte)((uint)param_1 >> 8);
  uVar11 = (undefined2)((uint)param_1 >> 0x10);
  cVar12 = (char)param_2;
  if (CARRY1(bVar2,bVar1)) {
    bVar2 = bVar1 + *pcVar6;
    pbVar5 = (byte *)CONCAT31(uVar9,bVar2);
    if (SCARRY1(bVar1,*pcVar6) == (char)bVar2 < '\0') {
      pcVar7 = (char *)CONCAT22(uVar11,CONCAT11(bVar10 | *param_2,(char)param_1));
      *pcVar6 = *pcVar6 + cVar12;
      *param_2 = *param_2 ^ bVar2;
      *(char *)((int)pbVar5 * 2) = *(char *)((int)pbVar5 * 2) + bVar2;
      goto code_r0x004030df;
    }
  }
  else {
    if (SCARRY1(bVar1,'\0')) {
      pcVar7 = (char *)CONCAT31(uVar9,bVar1 + *pcVar6);
      if (SCARRY1(bVar1,*pcVar6) != (char)(bVar1 + *pcVar6) < '\0') goto code_r0x00403072;
    }
    else {
      *pbVar5 = *pbVar5 + bVar1;
      param_1 = CONCAT22(uVar11,CONCAT11(bVar10 | *param_2,(char)param_1));
      bVar1 = bVar1 & *param_2;
      *(char *)CONCAT31(uVar9,bVar1) = *(char *)CONCAT31(uVar9,bVar1) + bVar1;
      pcVar6 = (char *)CONCAT31(uVar9,bVar1 + 0x2a);
      *pcVar6 = *pcVar6 + bVar1 + 0x2a;
      bVar2 = bVar1 + 0x54 & *param_2;
      *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
      pcVar6 = (char *)CONCAT31(uVar9,bVar2 + 0x2a);
      *pcVar6 = *pcVar6 + bVar2 + 0x2a;
      pcVar7 = (char *)CONCAT31(uVar9,bVar2 + 0x54 & *param_2);
code_r0x00403072:
      cVar4 = (char)pcVar7;
      *pcVar7 = *pcVar7 + cVar4;
      uVar9 = (undefined3)((uint)pcVar7 >> 8);
      pcVar6 = (char *)CONCAT31(uVar9,cVar4 + '*');
      *pcVar6 = *pcVar6 + cVar4 + '*';
      bVar2 = cVar4 + 0x54U & *param_2;
      *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
      pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_DS);
      param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                         CONCAT11((char)((uint)param_1 >> 8) + *(char *)CONCAT31(uVar9,bVar2 + 0x2a)
                                  ,(char)param_1));
      unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar12;
      pcVar7 = pcStack_10;
    }
    cVar4 = (char)pcVar7;
    *pcVar7 = *pcVar7 + cVar4;
    pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_ES);
    *pcVar7 = *pcVar7 + cVar4;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar4 + 0x2aU & *param_2);
  }
  cVar4 = (char)pbVar5;
  *pbVar5 = *pbVar5 + cVar4;
  uVar9 = (undefined3)((uint)pbVar5 >> 8);
  cVar3 = cVar4 + '*';
  pcVar7 = (char *)CONCAT31(uVar9,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar12;
  *pcVar7 = *pcVar7 + cVar3;
  cVar13 = (char)pcStack_10 - *unaff_ESI;
  pcVar6 = (char *)CONCAT22((short)((uint)pcStack_10 >> 0x10),
                            CONCAT11((char)((uint)pcStack_10 >> 8) +
                                     *(char *)(CONCAT31((int3)((uint)pcStack_10 >> 8),cVar13) + 0x34
                                              ),cVar13));
  *pcVar7 = *pcVar7 + cVar3;
  bVar2 = cVar4 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar9,bVar2) = *(char *)CONCAT31(uVar9,bVar2) + bVar2;
  pbVar5 = (byte *)CONCAT31(uVar9,bVar2 + 0x2a);
  bVar2 = (byte)((uint)param_1 >> 8);
  pcVar7 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar2 + *pbVar5,(char)param_1));
  pbVar5 = pbVar5 + (uint)CARRY1(bVar2,*pbVar5) + *(int *)pbVar5;
  *param_2 = *param_2 + (char)param_1;
  uVar9 = (undefined3)((uint)pbVar5 >> 8);
  cVar4 = (byte)pbVar5 - *pbVar5;
  piVar8 = (int *)CONCAT31(uVar9,cVar4);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar5 < *pbVar5) + *piVar8;
  cVar4 = cVar4 + (char)*piVar8;
  pbVar5 = (byte *)CONCAT31(uVar9,cVar4);
  *pbVar5 = *pbVar5 + cVar4;
code_r0x004030df:
  *pcVar7 = *pcVar7 + cVar12;
  bVar2 = *pbVar5;
  bVar1 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar1;
  *(byte **)(pcVar6 + -0x41) = unaff_ESI + (uint)CARRY1(bVar2,bVar1) + *(int *)(pcVar6 + -0x41);
  *pbVar5 = *pbVar5 + bVar1;
  uVar9 = (undefined3)((uint)pbVar5 >> 8);
  bVar1 = bVar1 | *unaff_ESI;
  *(char *)CONCAT31(uVar9,bVar1) = *(char *)CONCAT31(uVar9,bVar1) + bVar1;
  pcVar6 = (char *)CONCAT31(uVar9,bVar1 + 0x7b);
  *pcVar6 = *pcVar6 + bVar1 + 0x7b;
  unaff_ESI[CONCAT31(uVar9,bVar1 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar9,bVar1 - 8) + -1] + (bVar1 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


