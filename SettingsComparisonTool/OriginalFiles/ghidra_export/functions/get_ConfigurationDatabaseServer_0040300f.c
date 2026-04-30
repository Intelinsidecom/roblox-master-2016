/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040300f
 * Raw Name    : get_ConfigurationDatabaseServer
 * Demangled   : get_ConfigurationDatabaseServer
 * Prototype   : char * get_ConfigurationDatabaseServer(undefined4 param_1, byte * param_2)
 * Local Vars  : param_1, param_2, pcStack_18, bVar1, bVar2, cVar3, in_EAX, pcVar4, pbVar5, piVar6, uVar7, bVar8, cVar9, cVar10, unaff_EBX, pcVar11, cVar12, uVar13, unaff_ESI, in_ES, in_DS
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall get_ConfigurationDatabaseServer(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char *in_EAX;
  undefined3 uVar7;
  char *pcVar4;
  byte *pbVar5;
  int *piVar6;
  byte bVar8;
  char cVar9;
  char cVar10;
  char cVar12;
  int unaff_EBX;
  undefined2 uVar13;
  char *pcVar11;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_18;
  
                    /* .NET CLR Managed Code */
  uVar13 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar12 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x25);
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = (char)in_EAX + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  pcVar11 = (char *)CONCAT22(uVar13,CONCAT11(cVar12 + *(char *)(CONCAT22(uVar13,CONCAT11(cVar12,(
                                                  char)unaff_EBX)) + 0x26),(char)unaff_EBX));
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  cVar12 = bVar1 + 0x2a;
  pcVar4 = (char *)CONCAT31(uVar7,cVar12);
  cVar9 = (char)param_2;
  if ((POPCOUNT(cVar12) & 1U) == 0) {
    *pcVar4 = *pcVar4 + cVar12;
    pbVar5 = (byte *)(CONCAT31(uVar7,bVar1 + 0x4f) + -0x33282610);
    bVar1 = *pbVar5;
    bVar2 = (byte)pbVar5;
    *pbVar5 = *pbVar5 + bVar2;
    uVar7 = (undefined3)((uint)pbVar5 >> 8);
    bVar8 = (byte)((uint)param_1 >> 8);
    uVar13 = (undefined2)((uint)param_1 >> 0x10);
    if (!CARRY1(bVar1,bVar2)) {
      if (!SCARRY1(bVar2,'\0')) {
        *pbVar5 = *pbVar5 + bVar2;
        param_1 = CONCAT22(uVar13,CONCAT11(bVar8 | *param_2,(char)param_1));
        bVar2 = bVar2 & *param_2;
        *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
        pcVar4 = (char *)CONCAT31(uVar7,bVar2 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar4 = (char *)CONCAT31(uVar7,bVar2 + *pcVar11);
      if (SCARRY1(bVar2,*pcVar11) != (char)(bVar2 + *pcVar11) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar1 = bVar2 + *pcVar11;
    pbVar5 = (byte *)CONCAT31(uVar7,bVar1);
    if (SCARRY1(bVar2,*pcVar11) == (char)bVar1 < '\0') {
      pcVar4 = (char *)CONCAT22(uVar13,CONCAT11(bVar8 | *param_2,(char)param_1));
      *pcVar11 = *pcVar11 + cVar9;
      *param_2 = *param_2 ^ bVar1;
      *(char *)((int)pbVar5 * 2) = *(char *)((int)pbVar5 * 2) + bVar1;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar4 = *pcVar4 + (char)pcVar4;
    uVar7 = (undefined3)((uint)pcVar4 >> 8);
    bVar1 = (char)pcVar4 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
    pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
    *pcVar4 = *pcVar4 + bVar1 + 0x2a;
    pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x54 & *param_2);
code_r0x00403072:
    cVar12 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar12;
    uVar7 = (undefined3)((uint)pcVar4 >> 8);
    pcVar4 = (char *)CONCAT31(uVar7,cVar12 + '*');
    *pcVar4 = *pcVar4 + cVar12 + '*';
    bVar1 = cVar12 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
    pcStack_18 = (char *)CONCAT22(pcStack_18._2_2_,in_DS);
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                       CONCAT11((char)((uint)param_1 >> 8) + *(char *)CONCAT31(uVar7,bVar1 + 0x2a),
                                (char)param_1));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
    pcVar4 = pcStack_18;
code_r0x0040309a:
    cVar12 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar12;
    pcStack_18 = (char *)CONCAT22(pcStack_18._2_2_,in_ES);
    *pcVar4 = *pcVar4 + cVar12;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pcVar4 >> 8),cVar12 + 0x2aU & *param_2);
  }
  cVar12 = (char)pbVar5;
  *pbVar5 = *pbVar5 + cVar12;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar3 = cVar12 + '*';
  pcVar4 = (char *)CONCAT31(uVar7,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar9;
  *pcVar4 = *pcVar4 + cVar3;
  cVar10 = (char)pcStack_18 - *unaff_ESI;
  pcVar11 = (char *)CONCAT22((short)((uint)pcStack_18 >> 0x10),
                             CONCAT11((char)((uint)pcStack_18 >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_18 >> 8),cVar10) +
                                               0x34),cVar10));
  *pcVar4 = *pcVar4 + cVar3;
  bVar1 = cVar12 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar1 + 0x2a);
  bVar1 = (byte)((uint)param_1 >> 8);
  pcVar4 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar1 + *pbVar5,(char)param_1));
  pbVar5 = pbVar5 + (uint)CARRY1(bVar1,*pbVar5) + *(int *)pbVar5;
  *param_2 = *param_2 + (char)param_1;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar12 = (byte)pbVar5 - *pbVar5;
  piVar6 = (int *)CONCAT31(uVar7,cVar12);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar5 < *pbVar5) + *piVar6;
  cVar12 = cVar12 + (char)*piVar6;
  pbVar5 = (byte *)CONCAT31(uVar7,cVar12);
  *pbVar5 = *pbVar5 + cVar12;
code_r0x004030df:
  *pcVar4 = *pcVar4 + cVar9;
  bVar1 = *pbVar5;
  bVar2 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  *(byte **)(pcVar11 + -0x41) = unaff_ESI + (uint)CARRY1(bVar1,bVar2) + *(int *)(pcVar11 + -0x41);
  *pbVar5 = *pbVar5 + bVar2;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  bVar2 = bVar2 | *unaff_ESI;
  *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
  pcVar4 = (char *)CONCAT31(uVar7,bVar2 + 0x7b);
  *pcVar4 = *pcVar4 + bVar2 + 0x7b;
  unaff_ESI[CONCAT31(uVar7,bVar2 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar7,bVar2 - 8) + -1] + (bVar2 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


