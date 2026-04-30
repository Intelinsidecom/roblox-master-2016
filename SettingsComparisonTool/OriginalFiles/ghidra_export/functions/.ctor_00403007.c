/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403007
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : pcStack_1c, bVar1, bVar2, cVar3, param_1, in_EAX, param_2, pcVar4, pbVar5, piVar6, uVar7, uVar8, uVar9, bVar10, uVar11, cVar12, cVar13, unaff_EBX, pcVar14, cVar15, uVar16, unaff_ESI, in_ES, in_DS
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall _ctor(undefined4 param_1,byte *param_2)

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
  char cVar13;
  char cVar15;
  int unaff_EBX;
  undefined2 uVar16;
  char *pcVar14;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_1c;
  undefined4 uVar9;
  
                    /* .NET CLR Managed Code */
  uVar11 = (undefined2)((uint)param_1 >> 0x10);
  uVar8 = (undefined1)param_1;
  bVar10 = (char)((uint)param_1 >> 8) + *in_EAX;
  uVar9 = CONCAT22(uVar11,CONCAT11(bVar10,uVar8));
  uVar16 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar15 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x25);
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = (char)in_EAX + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  pcVar14 = (char *)CONCAT22(uVar16,CONCAT11(cVar15 + *(char *)(CONCAT22(uVar16,CONCAT11(cVar15,(
                                                  char)unaff_EBX)) + 0x26),(char)unaff_EBX));
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  cVar15 = bVar1 + 0x2a;
  pcVar4 = (char *)CONCAT31(uVar7,cVar15);
  cVar12 = (char)param_2;
  if ((POPCOUNT(cVar15) & 1U) == 0) {
    *pcVar4 = *pcVar4 + cVar15;
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
      pcVar4 = (char *)CONCAT31(uVar7,bVar2 + *pcVar14);
      if (SCARRY1(bVar2,*pcVar14) != (char)(bVar2 + *pcVar14) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar1 = bVar2 + *pcVar14;
    pbVar5 = (byte *)CONCAT31(uVar7,bVar1);
    if (SCARRY1(bVar2,*pcVar14) == (char)bVar1 < '\0') {
      pcVar4 = (char *)CONCAT22(uVar11,CONCAT11(bVar10 | *param_2,uVar8));
      *pcVar14 = *pcVar14 + cVar12;
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
    cVar15 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar15;
    uVar7 = (undefined3)((uint)pcVar4 >> 8);
    pcVar4 = (char *)CONCAT31(uVar7,cVar15 + '*');
    *pcVar4 = *pcVar4 + cVar15 + '*';
    bVar1 = cVar15 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
    pcStack_1c = (char *)CONCAT22(pcStack_1c._2_2_,in_DS);
    uVar9 = CONCAT22((short)((uint)uVar9 >> 0x10),
                     CONCAT11((char)((uint)uVar9 >> 8) + *(char *)CONCAT31(uVar7,bVar1 + 0x2a),
                              (char)uVar9));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar12;
    pcVar4 = pcStack_1c;
code_r0x0040309a:
    cVar15 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar15;
    pcStack_1c = (char *)CONCAT22(pcStack_1c._2_2_,in_ES);
    *pcVar4 = *pcVar4 + cVar15;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pcVar4 >> 8),cVar15 + 0x2aU & *param_2);
  }
  cVar15 = (char)pbVar5;
  *pbVar5 = *pbVar5 + cVar15;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar3 = cVar15 + '*';
  pcVar4 = (char *)CONCAT31(uVar7,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar12;
  *pcVar4 = *pcVar4 + cVar3;
  cVar13 = (char)pcStack_1c - *unaff_ESI;
  pcVar14 = (char *)CONCAT22((short)((uint)pcStack_1c >> 0x10),
                             CONCAT11((char)((uint)pcStack_1c >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_1c >> 8),cVar13) +
                                               0x34),cVar13));
  *pcVar4 = *pcVar4 + cVar3;
  bVar1 = cVar15 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pbVar5 = (byte *)CONCAT31(uVar7,bVar1 + 0x2a);
  bVar1 = (byte)((uint)uVar9 >> 8);
  pcVar4 = (char *)CONCAT22((short)((uint)uVar9 >> 0x10),CONCAT11(bVar1 + *pbVar5,(char)uVar9));
  pbVar5 = pbVar5 + (uint)CARRY1(bVar1,*pbVar5) + *(int *)pbVar5;
  *param_2 = *param_2 + (char)uVar9;
  uVar7 = (undefined3)((uint)pbVar5 >> 8);
  cVar15 = (byte)pbVar5 - *pbVar5;
  piVar6 = (int *)CONCAT31(uVar7,cVar15);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar5 < *pbVar5) + *piVar6;
  cVar15 = cVar15 + (char)*piVar6;
  pbVar5 = (byte *)CONCAT31(uVar7,cVar15);
  *pbVar5 = *pbVar5 + cVar15;
code_r0x004030df:
  *pcVar4 = *pcVar4 + cVar12;
  bVar1 = *pbVar5;
  bVar10 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar10;
  *(byte **)(pcVar14 + -0x41) = unaff_ESI + (uint)CARRY1(bVar1,bVar10) + *(int *)(pcVar14 + -0x41);
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


