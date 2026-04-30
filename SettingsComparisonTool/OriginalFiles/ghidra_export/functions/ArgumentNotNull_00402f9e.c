/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402f9e
 * Raw Name    : ArgumentNotNull
 * Demangled   : ArgumentNotNull
 * Prototype   : void ArgumentNotNull(undefined4 value, byte * parameterName)
 * Local Vars  : parameterName, unaff_ESI, in_ES, in_DS, pcStack_34, bVar1, cVar2, in_EAX, pbVar3, pcVar4, piVar5, uVar6, uVar7, bVar8, uVar9, cVar10, cVar11, unaff_EBX, pcVar12, bVar13, cVar14, uVar15, value
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall ArgumentNotNull(undefined4 value,byte *parameterName)

{
  byte bVar1;
  char cVar2;
  byte *in_EAX;
  byte *pbVar3;
  undefined3 uVar6;
  char *pcVar4;
  int *piVar5;
  byte bVar8;
  undefined2 uVar9;
  undefined4 uVar7;
  char cVar10;
  char cVar11;
  byte bVar13;
  undefined4 unaff_EBX;
  char cVar14;
  undefined2 uVar15;
  char *pcVar12;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_34;
  
  uVar9 = (undefined2)((uint)value >> 0x10);
  cVar2 = (char)value;
                    /* .NET CLR Managed Code */
  bVar8 = (char)((uint)value >> 8) + cRam14730307;
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar15 = (undefined2)((uint)unaff_EBX >> 0x10);
  bVar13 = (byte)((uint)unaff_EBX >> 8) | parameterName[0x2a];
  bVar1 = *in_EAX;
  pbVar3 = in_EAX + (uint)CARRY1(bVar8,*in_EAX) + *(int *)in_EAX;
  *parameterName = *parameterName + cVar2;
  cVar10 = (char)unaff_EBX - *unaff_ESI;
  cVar14 = bVar13 + *(char *)(CONCAT31((int3)(CONCAT22(uVar15,CONCAT11(bVar13,(char)unaff_EBX)) >> 8
                                             ),cVar10) + 0x1e);
  *pbVar3 = *pbVar3 + (char)pbVar3;
  uVar6 = (undefined3)((uint)pbVar3 >> 8);
  bVar13 = (char)pbVar3 + 0x2aU & *parameterName;
  *(char *)CONCAT31(uVar6,bVar13) = *(char *)CONCAT31(uVar6,bVar13) + bVar13;
  pcVar4 = (char *)CONCAT31(uVar6,bVar13 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar10)) + 0x1f);
  *pcVar4 = *pcVar4 + bVar13 + 0x2a;
  bVar13 = bVar13 + 0x54 & *parameterName;
  *(char *)CONCAT31(uVar6,bVar13) = *(char *)CONCAT31(uVar6,bVar13) + bVar13;
  pcVar4 = (char *)CONCAT31(uVar6,bVar13 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar10)) + 0x20);
  *pcVar4 = *pcVar4 + bVar13 + 0x2a;
  bVar13 = bVar13 + 0x54 & *parameterName;
  *(char *)CONCAT31(uVar6,bVar13) = *(char *)CONCAT31(uVar6,bVar13) + bVar13;
  pcVar4 = (char *)CONCAT31(uVar6,bVar13 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar10)) + 0x21);
  *pcVar4 = *pcVar4 + bVar13 + 0x2a;
  bVar13 = bVar13 + 0x54 & *parameterName;
  *(char *)CONCAT31(uVar6,bVar13) = *(char *)CONCAT31(uVar6,bVar13) + bVar13;
  pcVar4 = (char *)CONCAT31(uVar6,bVar13 + 0x2a);
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar10)) + 0x22);
  *pcVar4 = *pcVar4 + bVar13 + 0x2a;
  bVar13 = bVar13 + 0x54 & *parameterName;
  *(char *)CONCAT31(uVar6,bVar13) = *(char *)CONCAT31(uVar6,bVar13) + bVar13;
  pcVar4 = (char *)CONCAT31(uVar6,bVar13 + 0x2a);
  bVar8 = bVar8 + bVar1 + *pcVar4;
  uVar7 = CONCAT22(uVar9,CONCAT11(bVar8,cVar2));
  cVar14 = cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,cVar10)) + 0x25);
  *pcVar4 = *pcVar4 + bVar13 + 0x2a;
  bVar1 = bVar13 + 0x54 & *parameterName;
  *(char *)CONCAT31(uVar6,bVar1) = *(char *)CONCAT31(uVar6,bVar1) + bVar1;
  pcVar4 = (char *)CONCAT31(uVar6,bVar1 + 0x2a);
  pcVar12 = (char *)CONCAT22(uVar15,CONCAT11(cVar14 + *(char *)(CONCAT22(uVar15,CONCAT11(cVar14,
                                                  cVar10)) + 0x26),cVar10));
  *pcVar4 = *pcVar4 + bVar1 + 0x2a;
  bVar1 = bVar1 + 0x54 & *parameterName;
  *(char *)CONCAT31(uVar6,bVar1) = *(char *)CONCAT31(uVar6,bVar1) + bVar1;
  cVar10 = bVar1 + 0x2a;
  pcVar4 = (char *)CONCAT31(uVar6,cVar10);
  cVar14 = (char)parameterName;
  if ((POPCOUNT(cVar10) & 1U) == 0) {
    *pcVar4 = *pcVar4 + cVar10;
    pbVar3 = (byte *)(CONCAT31(uVar6,bVar1 + 0x4f) + -0x33282610);
    bVar1 = *pbVar3;
    bVar13 = (byte)pbVar3;
    *pbVar3 = *pbVar3 + bVar13;
    uVar6 = (undefined3)((uint)pbVar3 >> 8);
    if (!CARRY1(bVar1,bVar13)) {
      if (!SCARRY1(bVar13,'\0')) {
        *pbVar3 = *pbVar3 + bVar13;
        uVar7 = CONCAT22(uVar9,CONCAT11(bVar8 | *parameterName,cVar2));
        bVar13 = bVar13 & *parameterName;
        *(char *)CONCAT31(uVar6,bVar13) = *(char *)CONCAT31(uVar6,bVar13) + bVar13;
        pcVar4 = (char *)CONCAT31(uVar6,bVar13 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar4 = (char *)CONCAT31(uVar6,bVar13 + *pcVar12);
      if (SCARRY1(bVar13,*pcVar12) != (char)(bVar13 + *pcVar12) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar1 = bVar13 + *pcVar12;
    pbVar3 = (byte *)CONCAT31(uVar6,bVar1);
    if (SCARRY1(bVar13,*pcVar12) == (char)bVar1 < '\0') {
      pcVar4 = (char *)CONCAT22(uVar9,CONCAT11(bVar8 | *parameterName,cVar2));
      *pcVar12 = *pcVar12 + cVar14;
      *parameterName = *parameterName ^ bVar1;
      *(char *)((int)pbVar3 * 2) = *(char *)((int)pbVar3 * 2) + bVar1;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar4 = *pcVar4 + (char)pcVar4;
    uVar6 = (undefined3)((uint)pcVar4 >> 8);
    bVar1 = (char)pcVar4 + 0x2aU & *parameterName;
    *(char *)CONCAT31(uVar6,bVar1) = *(char *)CONCAT31(uVar6,bVar1) + bVar1;
    pcVar4 = (char *)CONCAT31(uVar6,bVar1 + 0x2a);
    *pcVar4 = *pcVar4 + bVar1 + 0x2a;
    pcVar4 = (char *)CONCAT31(uVar6,bVar1 + 0x54 & *parameterName);
code_r0x00403072:
    cVar10 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar10;
    uVar6 = (undefined3)((uint)pcVar4 >> 8);
    pcVar4 = (char *)CONCAT31(uVar6,cVar10 + '*');
    *pcVar4 = *pcVar4 + cVar10 + '*';
    bVar1 = cVar10 + 0x54U & *parameterName;
    *(char *)CONCAT31(uVar6,bVar1) = *(char *)CONCAT31(uVar6,bVar1) + bVar1;
    pcStack_34 = (char *)CONCAT22(pcStack_34._2_2_,in_DS);
    uVar7 = CONCAT22((short)((uint)uVar7 >> 0x10),
                     CONCAT11((char)((uint)uVar7 >> 8) + *(char *)CONCAT31(uVar6,bVar1 + 0x2a),
                              (char)uVar7));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar14;
    pcVar4 = pcStack_34;
code_r0x0040309a:
    cVar10 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar10;
    pcStack_34 = (char *)CONCAT22(pcStack_34._2_2_,in_ES);
    *pcVar4 = *pcVar4 + cVar10;
    pbVar3 = (byte *)CONCAT31((int3)((uint)pcVar4 >> 8),cVar10 + 0x2aU & *parameterName);
  }
  cVar10 = (char)pbVar3;
  *pbVar3 = *pbVar3 + cVar10;
  uVar6 = (undefined3)((uint)pbVar3 >> 8);
  cVar2 = cVar10 + '*';
  pcVar4 = (char *)CONCAT31(uVar6,cVar2);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar14;
  *pcVar4 = *pcVar4 + cVar2;
  cVar11 = (char)pcStack_34 - *unaff_ESI;
  pcVar12 = (char *)CONCAT22((short)((uint)pcStack_34 >> 0x10),
                             CONCAT11((char)((uint)pcStack_34 >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_34 >> 8),cVar11) +
                                               0x34),cVar11));
  *pcVar4 = *pcVar4 + cVar2;
  bVar1 = cVar10 + 0x54U & *parameterName;
  *(char *)CONCAT31(uVar6,bVar1) = *(char *)CONCAT31(uVar6,bVar1) + bVar1;
  pbVar3 = (byte *)CONCAT31(uVar6,bVar1 + 0x2a);
  bVar1 = (byte)((uint)uVar7 >> 8);
  pcVar4 = (char *)CONCAT22((short)((uint)uVar7 >> 0x10),CONCAT11(bVar1 + *pbVar3,(char)uVar7));
  pbVar3 = pbVar3 + (uint)CARRY1(bVar1,*pbVar3) + *(int *)pbVar3;
  *parameterName = *parameterName + (char)uVar7;
  uVar6 = (undefined3)((uint)pbVar3 >> 8);
  cVar10 = (byte)pbVar3 - *pbVar3;
  piVar5 = (int *)CONCAT31(uVar6,cVar10);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar3 < *pbVar3) + *piVar5;
  cVar10 = cVar10 + (char)*piVar5;
  pbVar3 = (byte *)CONCAT31(uVar6,cVar10);
  *pbVar3 = *pbVar3 + cVar10;
code_r0x004030df:
  *pcVar4 = *pcVar4 + cVar14;
  bVar1 = *pbVar3;
  bVar13 = (byte)pbVar3;
  *pbVar3 = *pbVar3 + bVar13;
  *(byte **)(pcVar12 + -0x41) = unaff_ESI + (uint)CARRY1(bVar1,bVar13) + *(int *)(pcVar12 + -0x41);
  *pbVar3 = *pbVar3 + bVar13;
  uVar6 = (undefined3)((uint)pbVar3 >> 8);
  bVar13 = bVar13 | *unaff_ESI;
  *(char *)CONCAT31(uVar6,bVar13) = *(char *)CONCAT31(uVar6,bVar13) + bVar13;
  pcVar4 = (char *)CONCAT31(uVar6,bVar13 + 0x7b);
  *pcVar4 = *pcVar4 + bVar13 + 0x7b;
  unaff_ESI[CONCAT31(uVar6,bVar13 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar6,bVar13 - 8) + -1] + (bVar13 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


