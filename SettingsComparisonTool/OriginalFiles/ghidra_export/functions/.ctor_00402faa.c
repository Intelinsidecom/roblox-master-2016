/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402faa
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : in_ES, in_DS, pcStack_30, bVar1, bVar2, cVar3, in_EAX, pbVar4, param_1, pcVar5, param_2, piVar6, uVar7, uVar8, bVar9, uVar10, cVar11, cVar12, unaff_EBX, pcVar13, cVar14, uVar15, unaff_ESI
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
  byte *in_EAX;
  byte *pbVar4;
  undefined3 uVar7;
  char *pcVar5;
  int *piVar6;
  undefined2 uVar10;
  undefined4 uVar8;
  char cVar11;
  char cVar12;
  char cVar14;
  undefined4 unaff_EBX;
  undefined2 uVar15;
  char *pcVar13;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_30;
  byte bVar9;
  
                    /* .NET CLR Managed Code */
  bVar9 = (byte)((uint)param_1 >> 8);
  bVar2 = *in_EAX;
  uVar10 = (undefined2)((uint)param_1 >> 0x10);
  cVar3 = (char)param_1;
  pbVar4 = in_EAX + (uint)CARRY1(bVar9,*in_EAX) + *(int *)in_EAX;
  *param_2 = *param_2 + cVar3;
  cVar11 = (char)unaff_EBX - *unaff_ESI;
  uVar15 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar14 = (char)((uint)unaff_EBX >> 8) +
           *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar11) + 0x1e);
  *pbVar4 = *pbVar4 + (char)pbVar4;
  uVar7 = (undefined3)((uint)pbVar4 >> 8);
  bVar1 = (char)pbVar4 + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar5 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar11)) + 0x1f);
  *pcVar5 = *pcVar5 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar5 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar11)) + 0x20);
  *pcVar5 = *pcVar5 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar5 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar11)) + 0x21);
  *pcVar5 = *pcVar5 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar5 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar11)) + 0x22);
  *pcVar5 = *pcVar5 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar5 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
  bVar9 = bVar9 + bVar2 + *pcVar5;
  uVar8 = CONCAT22(uVar10,CONCAT11(bVar9,cVar3));
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar11)) + 0x25);
  *pcVar5 = *pcVar5 + bVar1 + 0x2a;
  bVar2 = bVar1 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
  pcVar5 = (char *)CONCAT31(uVar7,bVar2 + 0x2a);
  pcVar13 = (char *)CONCAT22(uVar15,CONCAT11(cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,
                                                  cVar11)) + 0x26),cVar11));
  *pcVar5 = *pcVar5 + bVar2 + 0x2a;
  bVar2 = bVar2 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
  cVar11 = bVar2 + 0x2a;
  pcVar5 = (char *)CONCAT31(uVar7,cVar11);
  cVar14 = (char)param_2;
  if ((POPCOUNT(cVar11) & 1U) == 0) {
    *pcVar5 = *pcVar5 + cVar11;
    pbVar4 = (byte *)(CONCAT31(uVar7,bVar2 + 0x4f) + -0x33282610);
    bVar2 = *pbVar4;
    bVar1 = (byte)pbVar4;
    *pbVar4 = *pbVar4 + bVar1;
    uVar7 = (undefined3)((uint)pbVar4 >> 8);
    if (!CARRY1(bVar2,bVar1)) {
      if (!SCARRY1(bVar1,'\0')) {
        *pbVar4 = *pbVar4 + bVar1;
        uVar8 = CONCAT22(uVar10,CONCAT11(bVar9 | *param_2,cVar3));
        bVar1 = bVar1 & *param_2;
        *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
        pcVar5 = (char *)CONCAT31(uVar7,bVar1 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar5 = (char *)CONCAT31(uVar7,bVar1 + *pcVar13);
      if (SCARRY1(bVar1,*pcVar13) != (char)(bVar1 + *pcVar13) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar2 = bVar1 + *pcVar13;
    pbVar4 = (byte *)CONCAT31(uVar7,bVar2);
    if (SCARRY1(bVar1,*pcVar13) == (char)bVar2 < '\0') {
      pcVar5 = (char *)CONCAT22(uVar10,CONCAT11(bVar9 | *param_2,cVar3));
      *pcVar13 = *pcVar13 + cVar14;
      *param_2 = *param_2 ^ bVar2;
      *(char *)((int)pbVar4 * 2) = *(char *)((int)pbVar4 * 2) + bVar2;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    uVar7 = (undefined3)((uint)pcVar5 >> 8);
    bVar2 = (char)pcVar5 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
    pcVar5 = (char *)CONCAT31(uVar7,bVar2 + 0x2a);
    *pcVar5 = *pcVar5 + bVar2 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar7,bVar2 + 0x54 & *param_2);
code_r0x00403072:
    cVar11 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar11;
    uVar7 = (undefined3)((uint)pcVar5 >> 8);
    pcVar5 = (char *)CONCAT31(uVar7,cVar11 + '*');
    *pcVar5 = *pcVar5 + cVar11 + '*';
    bVar2 = cVar11 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
    pcStack_30 = (char *)CONCAT22(pcStack_30._2_2_,in_DS);
    uVar8 = CONCAT22((short)((uint)uVar8 >> 0x10),
                     CONCAT11((char)((uint)uVar8 >> 8) + *(char *)CONCAT31(uVar7,bVar2 + 0x2a),
                              (char)uVar8));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar14;
    pcVar5 = pcStack_30;
code_r0x0040309a:
    cVar11 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar11;
    pcStack_30 = (char *)CONCAT22(pcStack_30._2_2_,in_ES);
    *pcVar5 = *pcVar5 + cVar11;
    pbVar4 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),cVar11 + 0x2aU & *param_2);
  }
  cVar11 = (char)pbVar4;
  *pbVar4 = *pbVar4 + cVar11;
  uVar7 = (undefined3)((uint)pbVar4 >> 8);
  cVar3 = cVar11 + '*';
  pcVar5 = (char *)CONCAT31(uVar7,cVar3);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar14;
  *pcVar5 = *pcVar5 + cVar3;
  cVar12 = (char)pcStack_30 - *unaff_ESI;
  pcVar13 = (char *)CONCAT22((short)((uint)pcStack_30 >> 0x10),
                             CONCAT11((char)((uint)pcStack_30 >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_30 >> 8),cVar12) +
                                               0x34),cVar12));
  *pcVar5 = *pcVar5 + cVar3;
  bVar2 = cVar11 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar7,bVar2) = *(char *)CONCAT31(uVar7,bVar2) + bVar2;
  pbVar4 = (byte *)CONCAT31(uVar7,bVar2 + 0x2a);
  bVar2 = (byte)((uint)uVar8 >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)uVar8 >> 0x10),CONCAT11(bVar2 + *pbVar4,(char)uVar8));
  pbVar4 = pbVar4 + (uint)CARRY1(bVar2,*pbVar4) + *(int *)pbVar4;
  *param_2 = *param_2 + (char)uVar8;
  uVar7 = (undefined3)((uint)pbVar4 >> 8);
  cVar11 = (byte)pbVar4 - *pbVar4;
  piVar6 = (int *)CONCAT31(uVar7,cVar11);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar4 < *pbVar4) + *piVar6;
  cVar11 = cVar11 + (char)*piVar6;
  pbVar4 = (byte *)CONCAT31(uVar7,cVar11);
  *pbVar4 = *pbVar4 + cVar11;
code_r0x004030df:
  *pcVar5 = *pcVar5 + cVar14;
  bVar2 = *pbVar4;
  bVar1 = (byte)pbVar4;
  *pbVar4 = *pbVar4 + bVar1;
  *(byte **)(pcVar13 + -0x41) = unaff_ESI + (uint)CARRY1(bVar2,bVar1) + *(int *)(pcVar13 + -0x41);
  *pbVar4 = *pbVar4 + bVar1;
  uVar7 = (undefined3)((uint)pbVar4 >> 8);
  bVar1 = bVar1 | *unaff_ESI;
  *(char *)CONCAT31(uVar7,bVar1) = *(char *)CONCAT31(uVar7,bVar1) + bVar1;
  pcVar5 = (char *)CONCAT31(uVar7,bVar1 + 0x7b);
  *pcVar5 = *pcVar5 + bVar1 + 0x7b;
  unaff_ESI[CONCAT31(uVar7,bVar1 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar7,bVar1 - 8) + -1] + (bVar1 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


