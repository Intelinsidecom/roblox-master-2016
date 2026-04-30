/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402fd4
 * Raw Name    : get_OutputFileName
 * Demangled   : get_OutputFileName
 * Prototype   : char * get_OutputFileName(undefined4 param_1, byte * param_2)
 * Local Vars  : pcStack_28, bVar1, bVar2, cVar3, in_EAX, pcVar4, pbVar5, piVar6, uVar7, uVar8, uVar9, bVar10, uVar11, cVar12, uVar13, cVar14, unaff_EBX, pcVar15, cVar16, uVar17, unaff_ESI, in_ES, in_DS, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall get_OutputFileName(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char *in_EAX;
  undefined3 uVar7;
  char *pcVar4;
  byte *pbVar5;
  int *piVar6;
  undefined1 uVar8;
  byte bVar10;
  undefined2 uVar11;
  char cVar12;
  undefined1 uVar13;
  char cVar14;
  char cVar16;
  int unaff_EBX;
  undefined2 uVar17;
  char *pcVar15;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_28;
  undefined4 uVar9;
  
                    /* .NET CLR Managed Code */
  uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar13 = (undefined1)unaff_EBX;
  cVar16 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x20);
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = (char)in_EAX + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  cVar16 = cVar16 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar16,uVar13)) + 0x21);
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  cVar16 = cVar16 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar16,uVar13)) + 0x22);
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  uVar11 = (undefined2)((uint)param_1 >> 0x10);
  uVar8 = (undefined1)param_1;
  bVar10 = (char)((uint)param_1 >> 8) + *pcVar4;
  uVar9 = CONCAT22(uVar11,CONCAT11(bVar10,uVar8));
  cVar16 = cVar16 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar16,uVar13)) + 0x25);
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  pcVar15 = (char *)CONCAT22(uVar17,CONCAT11(cVar16 + *(char *)(CONCAT22(uVar17,CONCAT11(cVar16,
                                                  uVar13)) + 0x26),uVar13));
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  cVar16 = bVar1 + 0x2a;
  pcVar4 = (char *)CONCAT31(uVar7,cVar16);
  cVar12 = (char)param_2;
  if ((POPCOUNT(cVar16) & 1U) == 0) {
    *pcVar4 = *pcVar4 + cVar16;
    pbVar5 = (byte *)(CONCAT31(uVar7,bVar1 + 0x4f) + -0x33282610);
    bVar1 = *pbVar5;
    bVar2 = (byte)pbVar5;
    *pbVar5 = *pbVar5 + bVar2;
    uVar7 = (undefined3)((uint)pbVar5 >> 8);
    if (!CARRY1(bVar1,bVar2)) {
      if (!SCARRY1(bVar2,'\0')) {
        *pbVar5 = *pbVar5 + bVar2;
        uVar9 = CONCAT22(uVar11,CONCAT11(bVar10 | *param_2,uVar8));
        bVar2 = bVar2 & *param_2;
        *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
        pcVar4 = (char *)CONCAT31(uVar7,bVar2 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar4 = (char *)CONCAT31(uVar7,bVar2 + *pcVar15);
      if (SCARRY1(bVar2,*pcVar15) != (char)(bVar2 + *pcVar15) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar1 = bVar2 + *pcVar15;
    pbVar5 = (byte *)CONCAT31(uVar7,bVar1);
    if (SCARRY1(bVar2,*pcVar15) == (char)bVar1 < '\0') {
      pcVar4 = (char *)CONCAT22(uVar11,CONCAT11(bVar10 | *param_2,uVar8));
      *pcVar15 = *pcVar15 + cVar12;
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
    cVar16 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar16;
    uVar7 = (undefined3)((uint)pcVar4 >> 8);
    pcVar4 = (char *)CONCAT31(uVar7,cVar16 + '*');
    *pcVar4 = *pcVar4 + cVar16 + '*';
    bVar1 = cVar16 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
    pcStack_28 = (char *)CONCAT22(pcStack_28._2_2_,in_DS);
    uVar9 = CONCAT22((short)((uint)uVar9 >> 0x10),
                     CONCAT11((char)((uint)uVar9 >> 8) + *(char *)CONCAT31(uVar7,bVar1 + 0x2a),
                              (char)uVar9));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar12;
    pcVar4 = pcStack_28;
code_r0x0040309a:
    cVar16 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar16;
    pcStack_28 = (char *)CONCAT22(pcStack_28._2_2_,in_ES);
    *pcVar4 = *pcVar4 + cVar16;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pcVar4 >> 8),cVar16 + 0x2aU & *param_2);
  }
  cVar16 = (char)pbVar5;
  *pbVar5 = *pbVar5 + cVar16;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar3 = cVar16 + '*';
  pcVar4 = (char *)CONCAT31(uVar7,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar12;
  *pcVar4 = *pcVar4 + cVar3;
  cVar14 = (char)pcStack_28 - *unaff_ESI;
  pcVar15 = (char *)CONCAT22((short)((uint)pcStack_28 >> 0x10),
                             CONCAT11((char)((uint)pcStack_28 >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_28 >> 8),cVar14) +
                                               0x34),cVar14));
  *pcVar4 = *pcVar4 + cVar3;
  bVar1 = cVar16 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar1 + 0x2a);
  bVar1 = (byte)((uint)uVar9 >> 8);
  pcVar4 = (char *)CONCAT22((short)((uint)uVar9 >> 0x10),CONCAT11(bVar1 + *pbVar5,(char)uVar9));
  pbVar5 = pbVar5 + (uint)CARRY1(bVar1,*pbVar5) + *(int *)pbVar5;
  *param_2 = *param_2 + (char)uVar9;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar16 = (byte)pbVar5 - *pbVar5;
  piVar6 = (int *)CONCAT31(uVar7,cVar16);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar5 < *pbVar5) + *piVar6;
  cVar16 = cVar16 + (char)*piVar6;
  pbVar5 = (byte *)CONCAT31(uVar7,cVar16);
  *pbVar5 = *pbVar5 + cVar16;
code_r0x004030df:
  *pcVar4 = *pcVar4 + cVar12;
  bVar1 = *pbVar5;
  bVar10 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar10;
  *(byte **)(pcVar15 + -0x41) = unaff_ESI + (uint)CARRY1(bVar1,bVar10) + *(int *)(pcVar15 + -0x41);
  *pbVar5 = *pbVar5 + bVar10;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  bVar10 = bVar10 | *unaff_ESI;
  *(char *)CONCAT31(uVar7,bVar10) = *(char *)CONCAT31(uVar7,bVar10) + bVar10;
  pcVar4 = (char *)CONCAT31(uVar7,bVar10 + 0x7b);
  *pcVar4 = *pcVar4 + bVar10 + 0x7b;
  unaff_ESI[CONCAT31(uVar7,bVar10 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar7,bVar10 - 8) + -1] + (bVar10 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


