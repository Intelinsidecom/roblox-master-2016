/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403618
 * Raw Name    : PrintReport
 * Demangled   : PrintReport
 * Prototype   : byte * PrintReport(char * param_1, uint * param_2, byte * param_3, undefined2 param_4)
 * Local Vars  : uStack_4, puVar1, uVar2, uVar3, pcVar4, uVar5, iVar6, puVar7, cVar8, cVar9, bVar10, bVar11, bVar12, bVar13, in_EAX, piVar14, uVar15, pbVar16, pcVar17, pbVar18, pbVar19, pcVar20, pbVar21, uVar22, uVar23, iVar24, extraout_ECX, pbVar25, extraout_ECX_00, bVar26, uVar27, puVar28, cVar29, cVar30, uVar31, unaff_EBX, pbVar32, cVar33, bVar34, bVar35, cVar36, bVar37, uVar38, puVar39, piVar40, piVar41, puVar42, puVar43, puVar44, param_1, puVar45, param_2, puVar46, param_3, puVar47, param_4, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, puVar57, puVar58, unaff_EBP, unaff_ESI, pbVar59, pbVar60, unaff_EDI, puVar61, puVar62, in_ES, in_CS, in_SS, uVar63, in_DS, uVar64, bVar65, bVar66, bVar67, bVar68, bVar69, bVar70, bVar71, bVar72, bVar73, uVar74, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x004035f0) */
/* WARNING: Removing unreachable block (ram,0x004035f1) */
/* WARNING: Removing unreachable block (ram,0x00403577) */
/* WARNING: Removing unreachable block (ram,0x00403580) */
/* WARNING: Removing unreachable block (ram,0x00403593) */
/* WARNING: Removing unreachable block (ram,0x0040353c) */
/* WARNING: Removing unreachable block (ram,0x00403597) */
/* WARNING: Removing unreachable block (ram,0x004035e3) */
/* WARNING: Removing unreachable block (ram,0x00403629) */
/* WARNING: Removing unreachable block (ram,0x004035a1) */
/* WARNING: Removing unreachable block (ram,0x004035ea) */
/* WARNING: Removing unreachable block (ram,0x004035a7) */
/* WARNING: Removing unreachable block (ram,0x004035b1) */
/* WARNING: Removing unreachable block (ram,0x0040355b) */
/* WARNING: Removing unreachable block (ram,0x00403565) */
/* WARNING: Removing unreachable block (ram,0x00403548) */
/* WARNING: Removing unreachable block (ram,0x0040354b) */
/* WARNING: Removing unreachable block (ram,0x004034f3) */
/* WARNING: Removing unreachable block (ram,0x00403517) */
/* WARNING: Removing unreachable block (ram,0x0040349e) */
/* WARNING: Removing unreachable block (ram,0x004034bd) */
/* WARNING: Removing unreachable block (ram,0x004034f0) */
/* WARNING: Removing unreachable block (ram,0x004034c1) */
/* WARNING: Removing unreachable block (ram,0x004034cb) */
/* WARNING: Removing unreachable block (ram,0x004034d4) */
/* WARNING: Removing unreachable block (ram,0x004034ef) */
/* WARNING: Removing unreachable block (ram,0x00403527) */
/* WARNING: Removing unreachable block (ram,0x00403529) */
/* WARNING: Removing unreachable block (ram,0x0040352f) */
/* WARNING: Removing unreachable block (ram,0x00403539) */
/* WARNING: Removing unreachable block (ram,0x0040353f) */
/* WARNING: Removing unreachable block (ram,0x00403549) */
/* WARNING: Removing unreachable block (ram,0x00403511) */
/* WARNING: Removing unreachable block (ram,0x0040354d) */
/* WARNING: Removing unreachable block (ram,0x00403598) */
/* WARNING: Removing unreachable block (ram,0x00403557) */
/* WARNING: Removing unreachable block (ram,0x004035b5) */
/* WARNING: Removing unreachable block (ram,0x00403602) */
/* WARNING: Removing unreachable block (ram,0x004035bf) */
/* WARNING: Removing unreachable block (ram,0x004035c7) */
/* WARNING: Removing unreachable block (ram,0x004035e5) */
/* WARNING: Removing unreachable block (ram,0x004035ef) */
/* WARNING: Removing unreachable block (ram,0x0040356e) */
/* WARNING: Removing unreachable block (ram,0x0040356f) */
/* WARNING: Removing unreachable block (ram,0x00403579) */
/* WARNING: Removing unreachable block (ram,0x004035f3) */
/* WARNING: Removing unreachable block (ram,0x00403641) */
/* WARNING: Removing unreachable block (ram,0x004035fd) */
/* WARNING: Removing unreachable block (ram,0x00403615) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall PrintReport(char *param_1,uint *param_2,byte *param_3,undefined2 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined6 uVar5;
  int iVar6;
  undefined1 *puVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char *in_EAX;
  undefined3 uVar22;
  uint uVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint3 uVar23;
  char *pcVar20;
  byte *pbVar21;
  byte bVar26;
  int iVar24;
  byte *extraout_ECX;
  undefined3 uVar27;
  byte *pbVar25;
  byte *extraout_ECX_00;
  undefined1 *puVar28;
  char cVar29;
  char cVar30;
  undefined1 uVar31;
  char cVar33;
  byte bVar37;
  int unaff_EBX;
  byte bVar34;
  byte bVar35;
  char cVar36;
  byte *pbVar32;
  undefined2 uVar38;
  undefined2 *puVar39;
  int *piVar40;
  int *piVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined2 *puVar44;
  undefined4 *puVar45;
  undefined2 *puVar46;
  undefined1 *puVar47;
  undefined2 *puVar48;
  undefined2 *puVar49;
  undefined4 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  undefined4 *puVar54;
  undefined2 *puVar55;
  undefined1 *puVar56;
  undefined2 *puVar57;
  undefined1 *puVar58;
  byte *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar59;
  byte *pbVar60;
  undefined4 *unaff_EDI;
  uint *puVar61;
  uint *puVar62;
  ushort in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar63;
  undefined2 in_DS;
  undefined2 uVar64;
  bool bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  bool bVar69;
  bool bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  undefined8 uVar74;
  undefined2 unaff_retaddr;
  uint uStack_4;
  int *piVar14;
  
                    /* .NET CLR Managed Code */
  uVar63 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar29 = (char)unaff_EBX;
  cVar33 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x3e);
  iVar24 = CONCAT22(uVar63,CONCAT11(cVar33,cVar29));
  cVar9 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar9;
  uVar22 = (undefined3)((uint)in_EAX >> 8);
  cVar8 = cVar9 + '(';
  pcVar20 = (char *)CONCAT31(uVar22,cVar8);
  puVar62 = unaff_EDI + 1;
  uVar2 = in((short)param_2);
  *unaff_EDI = uVar2;
  *pcVar20 = *pcVar20 + cVar8;
  bVar26 = param_1[iVar24];
  cVar30 = (char)param_1;
  cVar36 = (char)((uint)param_2 >> 8);
  pcVar20[0x28] = pcVar20[0x28] + cVar36;
  bVar71 = (in_ES & 0x4000) != 0;
  bVar69 = (in_ES & 0x400) != 0;
  bVar68 = (in_ES & 0x200) != 0;
  bVar67 = (in_ES & 0x100) != 0;
  bVar66 = (in_ES & 0x10) != 0;
  bVar73 = (uStack_4 & 0x200000) != 0;
  bVar72 = (uStack_4 & 0x40000) != 0;
  *pcVar20 = *pcVar20 + cVar8;
  bVar26 = (byte)((uint)param_1 >> 8) | bVar26 | (byte)*param_2;
  pcVar17 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar26,cVar30));
  bVar34 = cVar33 + *(char *)(iVar24 + 0x3e);
  pbVar25 = (byte *)CONCAT22(uVar63,CONCAT11(bVar34,cVar29));
  *pcVar20 = *pcVar20 + cVar8;
  cVar8 = cVar9 + 'P';
  pbVar16 = (byte *)CONCAT31(uVar22,cVar8);
  *(char *)((int)param_2 + 0x21) = *(char *)((int)param_2 + 0x21) + cVar36;
  pbVar59 = pbVar16 + 2;
  *pbVar59 = *pbVar59 + cVar36;
  if ((POPCOUNT(*pbVar59) & 1U) == 0) {
    *pbVar16 = *pbVar16 + cVar8;
    cVar8 = cVar9 + 'x';
    pcVar20 = (char *)CONCAT31(uVar22,cVar8);
    bVar66 = ((uint)in_EAX & 0x1000) != 0;
    *pcVar20 = *pcVar20 + cVar8;
    puVar61 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_ESI);
    pbVar25 = (byte *)CONCAT22(uVar63,CONCAT11(bVar34 | unaff_ESI[0x3f],cVar29));
    *pcVar20 = *pcVar20 + cVar8;
    bVar34 = cVar9 + 0x9d;
    pcVar20 = (char *)CONCAT31(uVar22,bVar34);
    param_2 = (uint *)((uint)puVar61 | *puVar61);
    *pcVar20 = *pcVar20 + bVar26;
    puVar61 = (uint *)((int)unaff_EDI + (uint)bVar69 * -2 + 5);
    *(byte *)puVar62 = bVar34;
    *pcVar20 = *pcVar20 + bVar34;
    bVar34 = bVar34 | (byte)*param_2;
    pcVar20 = (char *)CONCAT31(uVar22,bVar34);
    puVar62 = puVar61;
    if ((POPCOUNT(bVar34) & 1U) != 0) goto code_r0x0040369e;
    *pcVar20 = *pcVar20 + bVar34;
    bVar34 = bVar34 + 2;
    *unaff_EBP = *unaff_EBP - cVar29;
    *unaff_ESI = *unaff_ESI + bVar34;
    pbVar59 = unaff_ESI + (uint)bVar69 * -8 + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    puVar62 = (uint *)((int)puVar61 + (uint)bVar69 * -2 + 1);
    unaff_ESI = pbVar59 + (uint)bVar69 * -2 + 1;
    *(byte *)puVar61 = *pbVar59;
    *(char *)CONCAT31(uVar22,bVar34) = *(char *)CONCAT31(uVar22,bVar34) + bVar34;
    pbVar25[-0x21f60000] = pbVar25[-0x21f60000] - bVar26;
    cVar9 = (bVar34 | *unaff_ESI) - 6;
    piVar14 = (int *)CONCAT31(uVar22,cVar9);
    pcVar20 = (char *)((int)piVar14 * 2 + 0x2adc0a00);
    *pcVar20 = *pcVar20 - bVar26;
    *piVar14 = (int)(*piVar14 + (int)param_2);
    *(char *)piVar14 = (char)*piVar14 + cVar9;
    bVar34 = cVar9 + (char)*piVar14;
    bVar66 = 9 < (bVar34 & 0xf) || (bool)bVar66;
    uVar15 = CONCAT31(uVar22,bVar34 + bVar66 * '\x06') & 0xffffff0f;
    pbVar16 = (byte *)CONCAT22((short)(uVar15 >> 0x10),
                               CONCAT11((char)((uint)in_EAX >> 8) + bVar66,(char)uVar15));
  }
  else {
    *(char *)param_2 = (char)*param_2 + cVar8;
    *(byte *)puVar62 = (byte)*puVar62 + cVar36;
  }
  *unaff_ESI = *unaff_ESI + (char)((uint)pbVar16 >> 8);
  *(byte *)param_2 = (byte)*param_2 + cVar30;
  bVar10 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar10;
  bVar34 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar10;
  unaff_EBP = param_3;
  if (CARRY1(bVar34,bVar10)) {
    *pbVar16 = *pbVar16 + bVar10;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10 | pbVar16[0x400003f]);
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),
                               cVar30 - *(byte *)((int)param_2 + 0x5040302));
    *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) - bVar26;
    param_4 = unaff_retaddr;
  }
  while( true ) {
    bVar10 = 0;
    bVar34 = 0;
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + *unaff_ESI);
    pbVar16 = (byte *)(CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + '%') + 0x1ebd9f3);
    param_3 = (byte *)CONCAT22(param_3._2_2_,unaff_retaddr);
    bVar26 = (byte)pbVar16;
    bVar65 = CARRY1(*pbVar16,bVar26);
    *pbVar16 = *pbVar16 + bVar26;
    pbVar59 = param_3 + -4;
    *(undefined2 *)(param_3 + -4) = unaff_retaddr;
    cVar9 = (char)param_2;
    if (bVar65) {
      *pbVar16 = *pbVar16 + bVar26;
      uVar63 = (undefined2)((uint)pbVar25 >> 0x10);
      bVar35 = (byte)((uint)pbVar25 >> 8) | unaff_EBP[0x47];
      pcVar20 = (char *)CONCAT22(uVar63,CONCAT11(bVar35,(char)pbVar25));
      *pbVar16 = *pbVar16 + bVar26;
      uVar22 = (undefined3)((uint)pbVar16 >> 8);
      bVar26 = bVar26 + 0x2a;
      *pcVar20 = *pcVar20 + cVar9;
      pbVar16 = (byte *)((int)CONCAT31(uVar22,bVar26) * 2);
      *pbVar16 = *pbVar16 ^ bVar26;
      bVar26 = bVar26 ^ *(byte *)CONCAT31(uVar22,bVar26);
      pbVar16 = (byte *)CONCAT31(uVar22,bVar26);
      bVar11 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar26;
      *pbVar16 = (*pbVar16 - bVar26) - CARRY1(bVar11,bVar26);
      *pcVar17 = *pcVar17 + cVar9;
      pbVar25 = (byte *)CONCAT22(uVar63,CONCAT11(bVar35 + pcVar20[0x38],(char)pbVar25));
      *pbVar16 = *pbVar16 + bVar26;
      cVar8 = bVar26 + 2;
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        pcVar4 = (code *)swi(7);
        uVar74 = (*pcVar4)();
        pbVar16 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar22,cVar8) = *(char *)CONCAT31(uVar22,cVar8) + cVar8;
      bVar26 = bVar26 + 0x71;
      pbVar16 = (byte *)CONCAT31(uVar22,bVar26);
      in_SS = *(undefined2 *)(param_3 + -4);
      *pbVar16 = *pbVar16 + bVar26;
      iVar24 = (int)pcVar17 - *param_2;
      pcVar17 = (char *)CONCAT22((short)((uint)iVar24 >> 0x10),
                                 CONCAT11((char)((uint)iVar24 >> 8) + *pbVar16,(char)iVar24));
      unaff_EBP = *(byte **)param_3;
      bVar65 = CARRY1(*pbVar16,bVar26);
      *pbVar16 = *pbVar16 + bVar26;
      *(undefined2 *)param_3 = unaff_retaddr;
      *(undefined2 *)(param_3 + -4) = unaff_retaddr;
    }
    bVar26 = (byte)pbVar16;
    uVar22 = (undefined3)((uint)pbVar16 >> 8);
    if (bVar65) break;
    *(byte *)param_2 = (byte)*param_2 + (byte)pcVar17;
    *(byte *)((int)param_2 + (int)unaff_EBP) = *(byte *)((int)param_2 + (int)unaff_EBP) + bVar26;
    pcVar20 = (char *)CONCAT31(uVar22,(byte)*param_2);
code_r0x0040369e:
    pbVar16 = (byte *)(pcVar20 + *(int *)(pcVar20 + 0x6c28));
    param_4 = unaff_retaddr;
  }
  *pbVar16 = *pbVar16 + bVar26;
  uVar23 = (uint3)((uint)pcVar17 >> 8);
  pbVar32 = (byte *)CONCAT31(uVar23,(byte)pcVar17 | *pbVar25);
  in_SS = *(undefined2 *)param_3;
  pbVar59 = param_3 + 4;
  pbVar60 = unaff_ESI + (uint)bVar69 * -8 + 4;
  out(*(undefined4 *)unaff_ESI,(short)param_2);
  puVar62 = (uint *)((int)puVar62 + (uint)bVar69 * -2 + 1);
  *pbVar16 = *pbVar16 + bVar26;
  bVar26 = bVar26 | (byte)*puVar62;
  pbVar16 = (byte *)CONCAT31(uVar22,bVar26);
  *(byte *)(puVar62 + 0x1bc28000) = (byte)puVar62[0x1bc28000] - (char)((uint)pcVar17 >> 8);
  bRam2a060000 = bVar26;
  *(undefined2 *)param_3 = param_4;
  cVar30 = (char)pbVar25;
  cVar8 = cVar30 - (byte)*param_2;
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
  if (cVar8 == '\0' || cVar30 < (char)(byte)*param_2) {
code_r0x00403750:
    uVar74 = CONCAT44(param_2,pbVar16);
    unaff_ESI = pbVar60 + (uint)bVar69 * -8 + 4;
    out(*(undefined4 *)pbVar60,(short)param_2);
    bVar11 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar11;
    *pbVar32 = *pbVar32 + (char)pbVar25;
    bVar26 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar11;
    *(byte **)(pbVar25 + -0x49) =
         unaff_ESI + (uint)CARRY1(bVar26,bVar11) + *(int *)(pbVar25 + -0x49);
    pbVar59 = param_3;
    unaff_retaddr = param_4;
  }
  else {
    *pbVar16 = *pbVar16 + bVar26;
    iVar24 = CONCAT31(uVar22,bVar26 + 0x2a);
    unaff_ESI = pbVar60 + 1;
    cVar8 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x7b);
    uVar74 = CONCAT44(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar8,cVar9)),iVar24);
    unaff_retaddr = *(undefined2 *)param_3;
    pcVar20 = (char *)(iVar24 + 0x6f);
    *pcVar20 = *pcVar20 + cVar8;
    pbVar32 = (byte *)((uint)uVar23 << 8);
    do {
      piVar14 = (int *)((ulonglong)uVar74 >> 0x20);
      pcVar20 = (char *)uVar74;
      *(char *)piVar14 = (char)*piVar14;
      if ((char)*piVar14 == '\0') {
        pbVar25 = (byte *)((uint)pbVar25 & 0xffffff00);
        param_4 = unaff_retaddr;
_ctor:
        param_2 = (uint *)((ulonglong)uVar74 >> 0x20);
        pbVar32 = (byte *)((uint)CONCAT21((short)((uint)pbVar32 >> 0x10),
                                          (char)((uint)pbVar32 >> 8) + *(char *)uVar74) << 8);
        pbVar25 = (byte *)((uint)pbVar25 & 0xffffff00);
        *(byte *)param_2 = (byte)*param_2;
        uVar22 = (undefined3)((ulonglong)uVar74 >> 8);
        bVar11 = (char)uVar74 - *(char *)uVar74;
        pbVar16 = (byte *)CONCAT31(uVar22,bVar11);
        bVar26 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar11;
        pbVar60 = unaff_ESI + (uint)CARRY1(bVar26,bVar11) + *(int *)pbVar16;
        pbVar16 = (byte *)CONCAT31(uVar22,bVar11);
        param_3 = pbVar59;
        goto code_r0x00403750;
      }
      *pcVar20 = *pcVar20 + (char)uVar74;
      *piVar14 = (int)(unaff_EBP + *piVar14);
      unaff_ESI = unaff_ESI + 1;
      uVar74 = CONCAT44(CONCAT22((short)((ulonglong)uVar74 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar74 >> 0x28) +
                                          *(char *)((int)piVar14 + -0x33),
                                          (char)((ulonglong)uVar74 >> 0x20))),pcVar20);
      unaff_retaddr = *(undefined2 *)pbVar59;
      pbVar59 = (byte *)((int)pbVar59 + 4);
      pbVar16 = pbVar32;
code_r0x0040371e:
      puVar61 = (uint *)((ulonglong)uVar74 >> 0x20);
      pbVar60 = (byte *)uVar74;
      bVar11 = (byte)((ulonglong)uVar74 >> 0x28);
      pbVar60[0x6f] = pbVar60[0x6f] + bVar11;
      pbVar32 = (byte *)((uint)pbVar16 & 0xffffff00);
      *(char *)puVar61 = (char)*puVar61;
      bVar26 = (byte)uVar74;
      if ((char)*puVar61 != '\0') {
        *pbVar60 = *pbVar60 + bVar26;
        uVar15 = *puVar61;
        *puVar61 = (uint)(unaff_EBP + *puVar61);
        piVar40 = (int *)(pbVar59 + -4);
        *(byte **)(pbVar59 + -4) = unaff_ESI;
        if (CARRY4(uVar15,(uint)unaff_EBP)) {
          *pbVar60 = *pbVar60 + bVar26;
          *(undefined2 *)(pbVar59 + -8) = unaff_retaddr;
          puVar1 = puVar61 + 0x1d028000;
          uVar15 = *puVar1;
          *(byte *)puVar1 = (byte)*puVar1 - bVar11;
          *(uint *)pbVar60 = (*(int *)pbVar60 - (int)pbVar60) - (uint)((byte)uVar15 < bVar11);
          *(byte *)puVar61 = (char)*puVar61 + bVar26;
          *unaff_EBP = *unaff_EBP;
          uVar74 = CONCAT44(puVar61,CONCAT31((int3)((ulonglong)uVar74 >> 8),bVar26 + 0x2a));
          puVar39 = (undefined2 *)(pbVar59 + -0xc);
          pbVar59 = pbVar59 + -0xc;
          *puVar39 = in_DS;
          param_4 = unaff_retaddr;
          goto _ctor;
        }
        bVar65 = false;
        pcVar20 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),*pbVar60);
        goto code_r0x004037a7;
      }
      bVar11 = *pbVar60;
      *pbVar60 = *pbVar60 + bVar26;
      *(uint *)pbVar60 = (*(int *)pbVar60 - (int)pbVar60) - (uint)CARRY1(bVar11,bVar26);
      bVar26 = *pbVar32;
      bVar11 = (byte)((ulonglong)uVar74 >> 0x20);
      *pbVar32 = *pbVar32 + bVar11;
    } while (!CARRY1(bVar26,bVar11));
  }
  pbVar16 = (byte *)uVar74;
  *pbVar16 = *pbVar16 + (char)uVar74;
  bVar65 = CARRY1((byte)((uint)pbVar32 >> 8),*pbVar16);
  *(undefined2 *)(pbVar59 + -4) = in_SS;
  iVar24 = CONCAT31(0x1f0a00,bVar65 + 'o') + *(int *)(pbVar25 + (int)unaff_EBP) +
           (uint)(0x90 < bVar65) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar74 >> 0x20);
  pcVar17 = (char *)(CONCAT31((int3)((uint)iVar24 >> 8),(char)iVar24 + -0x66) | *puVar62);
  bVar26 = *(byte *)((int)puVar62 + -0x46);
  pcVar20 = (char *)CONCAT22(0xd0a,(ushort)bVar26 << 8);
  *pcVar17 = *pcVar17 + (char)pcVar17;
  bVar35 = (byte)((ulonglong)uVar74 >> 0x20);
  puVar28 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar74 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar74 >> 0x28) | pbVar25[(int)unaff_EBP],bVar35));
  *pcVar20 = *pcVar20 + (char)pcVar17;
  *unaff_EBP = *unaff_EBP - bVar26;
  *puVar28 = *puVar28;
  pbVar59 = (byte *)(((uint)pcVar17 | 8) + 0x4490f9d8);
  bVar11 = (byte)pbVar59;
  *pbVar59 = *pbVar59 + bVar11;
  bVar26 = *unaff_ESI;
  *(uint *)(unaff_ESI + (int)pbVar59) = *(uint *)(unaff_ESI + (int)pbVar59) ^ (uint)pcVar20;
  *pbVar59 = *pbVar59 | bVar11;
  piVar40 = (int *)0x2609fffc;
  bVar65 = false;
  uRam2609fffc = unaff_retaddr;
  *pbVar59 = *pbVar59 | bVar11;
  uVar74 = CONCAT44(CONCAT31((int3)((uint)puVar28 >> 8),bVar35 | bVar26),pbVar59);
code_r0x004037a7:
  while( true ) {
    pbVar59 = (byte *)((ulonglong)uVar74 >> 0x20);
    uVar63 = (undefined2)((ulonglong)uVar74 >> 0x20);
    out(*(undefined4 *)unaff_ESI,uVar63);
    out(*(undefined4 *)(unaff_ESI + (uint)bVar69 * -8 + 4),uVar63);
    puVar61 = (uint *)((int)puVar62 + (int)pbVar59);
    uVar15 = *puVar61;
    uVar3 = (uint)uVar74 + *puVar61;
    *puVar61 = uVar3 + bVar65;
    iVar24 = *piVar40 + *(int *)(pcVar20 + (int)pbVar59) +
             (uint)(CARRY4(uVar15,(uint)uVar74) || CARRY4(uVar3,(uint)bVar65));
    cVar9 = (char)iVar24 + '\t';
    pbVar16 = (byte *)CONCAT31((int3)((uint)iVar24 >> 8),cVar9);
    pcVar17 = (char *)((uint)bVar69 * -8 + 0x260a0004);
    out(uRam260a0000,uVar63);
    uVar63 = (undefined2)piVar40[1];
    *pbVar16 = *pbVar16 + cVar9;
    bVar11 = (byte)((uint)pcVar20 >> 8) | *pbVar59;
    *(undefined2 *)(piVar40 + 1) = in_DS;
    bVar26 = *pbVar16;
    pbVar16 = pbVar16 + (uint)CARRY1(bVar11,*pbVar16) + *(int *)pbVar16;
    *pbVar59 = *pbVar59 + 6;
    cVar8 = (char)pbVar25 - *pcVar17;
    pcVar20 = (char *)CONCAT22((short)((uint)pcVar20 >> 0x10),CONCAT11(bVar11 + bVar26 + *pbVar16,6)
                              );
    *pbVar16 = *pbVar16;
    *(undefined2 *)piVar40 = unaff_retaddr;
    uVar22 = (undefined3)((uint)pbVar16 >> 8);
    cVar9 = (char)pbVar16 - *pbVar16;
    piVar14 = (int *)CONCAT31(uVar22,cVar9);
    unaff_ESI = (byte *)(pcVar17 + *piVar14);
    bVar26 = cVar9 + (char)*piVar14;
    pcVar17 = (char *)CONCAT31(uVar22,bVar26);
    piVar41 = piVar40 + -1;
    piVar40[-1] = (int)pcVar20;
    *pcVar17 = *pcVar17 + bVar26;
    *pcVar17 = *pcVar17 + bVar26;
    *pcVar17 = *pcVar17 + bVar26;
    bVar65 = CARRY1(*pbVar59,bVar26);
    *pbVar59 = *pbVar59 + bVar26;
    if (bVar65) break;
    unaff_retaddr = (undefined2)piVar40[-1];
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
    uVar74 = CONCAT44(pbVar59,pcVar17);
  }
  *pcVar17 = *pcVar17 + bVar26;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                             CONCAT11((byte)((uint)pbVar25 >> 8) | bRam080a0056,cVar8));
  *pcVar17 = *pcVar17 + bVar26;
  bVar35 = bVar26 + 2;
  *pbVar32 = *pbVar32 - (char)((ulonglong)uVar74 >> 0x20);
  *(char *)CONCAT31(uVar22,bVar35) = *(char *)CONCAT31(uVar22,bVar35) + bVar35;
  bVar11 = *unaff_ESI;
  uVar27 = (undefined3)((uint)pcVar20 >> 8);
  pbVar25 = (byte *)(CONCAT31(uVar27,bVar11) | 6);
  bVar66 = 9 < (bVar26 + 0x74 & 0xf) | bVar66;
  bVar12 = bVar26 + 0x74 + bVar66 * '\x06';
  bVar12 = bVar12 + (0x90 < (bVar12 & 0xf0) | 0x8d < bVar35 | bVar66 * (0xf9 < bVar12)) * '`';
  pbVar16 = (byte *)CONCAT31(uVar22,bVar12);
  bVar26 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar12;
  if (!SCARRY1(bVar26,bVar12)) {
    *unaff_ESI = *unaff_ESI + bVar12;
    unaff_ESI = unaff_ESI + *(int *)(pbVar59 + 0x33);
    *pbVar16 = *pbVar16 | bVar12;
    *unaff_ESI = *unaff_ESI + bVar12;
    bVar26 = bVar12 + 0x72;
    piVar40[-2] = (int)pbVar32;
    *(byte *)CONCAT31(uVar22,bVar26) = *(byte *)CONCAT31(uVar22,bVar26) | bVar26;
    *unaff_ESI = *unaff_ESI + bVar26;
    pbVar25 = (byte *)CONCAT31(uVar27,(bVar11 | 6) + *unaff_ESI);
    pcVar20 = (char *)CONCAT31(uVar22,bVar12 - 0x11);
    piVar41 = piVar40 + -3;
    piVar40[-3] = (int)pbVar25;
    *pcVar20 = *pcVar20 + (bVar12 - 0x11);
    pbVar16 = (byte *)CONCAT31(uVar22,bVar12 - 0xf);
    puVar62 = (uint *)((int)puVar62 + iRam080a0052);
    *pbVar16 = *pbVar16 + (bVar12 - 0xf);
  }
code_r0x00403825:
  pbVar60 = (byte *)0x80a0000;
  uVar22 = (undefined3)((uint)pbVar16 >> 8);
  cVar9 = (char)pbVar16 + '\x7f';
  pcVar20 = (char *)CONCAT31(uVar22,cVar9);
  *(byte **)((int)piVar41 + -4) = pbVar32;
  *pcVar20 = *pcVar20 + cVar9;
  iVar24 = CONCAT31(uVar22,(char)pbVar16 + -0x7f) + 0x547d;
  cVar8 = (char)iVar24;
  uVar22 = (undefined3)((uint)iVar24 >> 8);
  cVar9 = cVar8 + '*';
  pcVar20 = (char *)CONCAT31(uVar22,cVar9);
  pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),(byte)pbVar59 | *unaff_ESI);
  cVar30 = (char)pbVar32 - *unaff_ESI;
  uVar64 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar36 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar30) + 0x57);
  *pcVar20 = *pcVar20 + cVar9;
  bVar26 = cVar8 + 0x54U & *pbVar59;
  iVar24 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar22,bVar26) = *(char *)CONCAT31(uVar22,bVar26) + bVar26;
  pcVar20 = (char *)CONCAT31(uVar22,bVar26 + 0x2a);
  *(undefined2 *)((int)piVar41 + -8) = in_DS;
  cVar36 = cVar36 + *(char *)(CONCAT22(uVar64,CONCAT11(cVar36,cVar30)) + 0x58);
  *pcVar20 = *pcVar20 + bVar26 + 0x2a;
  bVar11 = bVar26 + 0x54 & *pbVar59;
  iVar6 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar22,bVar11) = *(char *)CONCAT31(uVar22,bVar11) + bVar11;
  pcVar20 = (char *)CONCAT31(uVar22,bVar11 + 0x2a);
  pbVar16 = *(byte **)((int)piVar41 + -8);
  cVar36 = cVar36 + *(char *)(CONCAT22(uVar64,CONCAT11(cVar36,cVar30)) + 0x55);
  *pcVar20 = *pcVar20 + bVar11 + 0x2a;
  pcVar20 = (char *)CONCAT31(uVar22,bVar11 + 0x57);
  pbVar59 = pbVar59 + *(int *)pbVar16;
  *(undefined4 *)((int)piVar41 + -8) = 0x2a;
  cVar36 = cVar36 + *(char *)(CONCAT22(uVar64,CONCAT11(cVar36,cVar30)) + 0x55);
  *pcVar20 = *pcVar20 + bVar11 + 0x57;
  cVar9 = bVar11 - 0x3a;
  pcVar20 = (char *)CONCAT31(uVar22,cVar9);
  *(undefined2 *)((int)piVar41 + -0xc) = uVar63;
  *pcVar20 = *pcVar20 + cVar9;
  bVar26 = *pbVar59;
  cVar8 = (char)pbVar25;
  *(undefined2 *)((int)piVar41 + -0x10) = in_DS;
  pbVar32 = (byte *)CONCAT22(uVar64,CONCAT11(cVar36 + *(char *)(CONCAT22(uVar64,CONCAT11(cVar36,
                                                  cVar30)) + 0x59),cVar30));
  *pcVar20 = *pcVar20 + cVar9;
  bVar13 = bVar11 - 0x10 & *pbVar59;
  puVar62 = (uint *)((int)puVar62 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar6 + iVar24);
  *(char *)CONCAT31(uVar22,bVar13) = *(char *)CONCAT31(uVar22,bVar13) + bVar13;
  bVar13 = bVar13 + 0x2a;
  pbVar19 = (byte *)CONCAT31(uVar22,bVar13);
  puVar54 = (undefined4 *)((int)piVar41 + -0x14);
  *(undefined2 *)((int)piVar41 + -0x14) = in_DS;
  bVar11 = *(byte *)((int)puVar62 + 0x17);
  *pbVar19 = *pbVar19 + bVar13;
  bVar35 = *pbVar59;
  puVar43 = (undefined4 *)((int)piVar41 + -0x18);
  *(undefined2 *)((int)piVar41 + -0x18) = in_DS;
  bVar12 = *(byte *)((int)puVar62 + 0x1a);
  *pbVar19 = *pbVar19 + bVar13;
  pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar25 >> 8) | bVar26) + bVar11 | bVar35) +
                                      bVar12 | *pbVar59,cVar8));
  *pbVar32 = *pbVar32 + cVar30;
  *(byte *)((int)pbVar19 * 2) = *(byte *)((int)pbVar19 * 2) ^ bVar13;
  bVar26 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar13;
  bVar11 = *pbVar19;
  *pbVar25 = *pbVar25 + (char)pbVar59;
  bVar26 = ((bVar13 - bVar11) - CARRY1(bVar26,bVar13)) + *pbVar59;
  pbVar19 = (byte *)CONCAT31(uVar22,bVar26);
  if ((POPCOUNT(bVar26) & 1U) != 0) {
    pbVar59 = *(byte **)((int)piVar41 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar19 = *pbVar19 + bVar26;
  cVar9 = (bVar26 + 0x6f) - (0x90 < bVar26);
  pbVar18 = (byte *)CONCAT31(uVar22,cVar9);
  bVar26 = *pbVar59;
  *pbVar59 = *pbVar59 + cVar8;
  if (SCARRY1(bVar26,cVar8) == (char)*pbVar59 < '\0') {
    cRam33100000 = cRam33100000 - cVar9;
    cVar9 = cVar9 + *pbVar59;
    pbVar19 = (byte *)CONCAT31(uVar22,cVar9);
    puVar54 = (undefined4 *)((int)piVar41 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar18 = *pbVar18 + (char)pbVar18;
    while( true ) {
      uVar22 = (undefined3)((uint)pbVar18 >> 8);
      cVar9 = (char)pbVar18 + '\x02';
      pbVar19 = (byte *)CONCAT31(uVar22,cVar9);
      puVar54 = puVar43;
      if ((POPCOUNT(cVar9) & 1U) == 0) break;
code_r0x00403908:
      puVar62 = (uint *)((int)puVar62 - *(int *)pbVar16);
      cVar9 = (char)pbVar19 + *pbVar59;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar9);
code_r0x0040390c:
      cVar8 = (char)pbVar19;
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        *pbVar16 = *pbVar16 + cVar8;
        goto code_r0x00403962;
      }
      *pbVar19 = *pbVar19 + cVar8;
      bVar26 = cVar8 + 2;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar26);
code_r0x00403912:
      bVar65 = (POPCOUNT(bVar26) & 1U) == 0;
      puVar50 = puVar54;
      if (!bVar65) goto code_r0x00403967;
      *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x00403916:
      bVar12 = (char)pbVar19 + 0x6f;
      pbVar18 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar19 >> 8),bVar12);
      bVar35 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar12;
      bVar11 = *pbVar18;
      bVar26 = *pbVar18;
      puVar50 = (undefined4 *)((int)puVar54 + -4);
      *(undefined2 *)((int)puVar54 + -4) = unaff_retaddr;
      if (bVar26 == 0 || SCARRY1(bVar35,bVar12) != (char)bVar11 < '\0') goto code_r0x00403979;
      *pbVar18 = *pbVar18 + bVar12;
      pbVar18 = (byte *)CONCAT31((int3)(char)((uint)pbVar19 >> 8),(char)pbVar19 + -100);
      *(byte **)(pbVar16 + (int)puVar62 * 8) =
           pbVar59 + (uint)(0xd2 < bVar12) + *(int *)(pbVar16 + (int)puVar62 * 8);
      puVar44 = (undefined2 *)((int)puVar54 + -8);
      puVar54 = (undefined4 *)((int)puVar54 + -8);
      *puVar44 = unaff_retaddr;
code_r0x00403926:
      puVar43 = puVar54 + 1;
      puVar50 = puVar54 + 1;
      puVar45 = puVar54 + 1;
      *(undefined4 *)pbVar18 = *puVar54;
      bVar26 = *pbVar16;
      bVar11 = (byte)pbVar18;
      *pbVar16 = *pbVar16 + bVar11;
      if (CARRY1(bVar26,bVar11)) {
        *pbVar18 = *pbVar18 + bVar11;
        uVar22 = (undefined3)((uint)pbVar18 >> 8);
        bVar11 = bVar11 | pbVar18[0x400005b];
        pbVar19 = (byte *)CONCAT31(uVar22,bVar11);
        pbVar18 = pbVar16;
        if ((char)bVar11 < '\x01') goto code_r0x00403991;
        *pbVar19 = *pbVar19 + bVar11;
        cVar9 = bVar11 + 0x28;
        pbVar19 = (byte *)CONCAT31(uVar22,cVar9);
        *(byte **)pbVar19 = pbVar19 + (uint)(0xd7 < bVar11) + *(int *)pbVar19;
        bVar26 = *pbVar32;
        bVar11 = (byte)((uint)pbVar25 >> 8);
        *pbVar32 = *pbVar32 + bVar11;
        if (CARRY1(bVar26,bVar11)) {
          *pbVar19 = *pbVar19 + cVar9;
          pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                     CONCAT11(bVar11 | *pbVar19,(char)pbVar25));
          *pbVar16 = *pbVar16 + cVar9;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],
                                              (char)pbVar32));
          *pbVar19 = *pbVar19 + cVar9;
code_r0x00403950:
          uVar22 = (undefined3)((uint)pbVar19 >> 8);
          bVar11 = (char)pbVar19 + 0x6f;
          bVar26 = *(byte *)CONCAT31(uVar22,bVar11);
          *pbVar59 = *pbVar59 + (char)pbVar25;
          pbVar19 = (byte *)CONCAT31(uVar22,(bVar11 & bVar26) + *pbVar16);
          *pbVar25 = *pbVar25 - (char)((uint)pbVar59 >> 8);
          puVar50 = puVar45;
        }
        else {
          *(undefined2 *)puVar54 = unaff_retaddr;
code_r0x00403962:
          puVar50 = (undefined4 *)((int)puVar54 + -4);
          *(undefined2 *)((int)puVar54 + -4) = uVar63;
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar19 = *pbVar19 + cVar9;
    puVar54 = (undefined4 *)((int)puVar43 + -4);
    piVar41 = (int *)((int)puVar43 + -4);
    *(byte **)((int)puVar43 + -4) = pbVar25;
    cVar9 = (char)pbVar18 + '.' + *pbVar59;
    pbVar19 = (byte *)CONCAT31(uVar22,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) {
      pbVar18 = pbVar59 + (int)pbVar19;
      *pbVar18 = *pbVar18 + cVar9;
      bVar26 = *pbVar18;
      goto code_r0x00403912;
    }
    *pbVar19 = *pbVar19 + cVar9;
    bVar26 = cVar9 + 2;
    pbVar19 = (byte *)CONCAT31(uVar22,bVar26);
    puVar54 = (undefined4 *)((int)puVar43 + -4);
    if ((POPCOUNT(bVar26) & 1U) != 0) goto code_r0x00403916;
    *pbVar19 = *pbVar19 + bVar26;
    cVar8 = cVar9 + 'q';
    piVar14 = (int *)CONCAT31(uVar22,cVar8);
    *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0x90 < bVar26);
    bVar26 = *pbVar32;
    bVar11 = (byte)((uint)pbVar25 >> 8);
    *pbVar32 = *pbVar32 + bVar11;
    if (!CARRY1(bVar26,bVar11)) {
      out(*(undefined4 *)pbVar16,(short)pbVar59);
      bVar26 = (cVar8 - (char)*piVar14) - CARRY1(bVar26,bVar11);
      *pbVar59 = *pbVar59 + (char)pbVar25;
      cVar9 = bVar26 - *(byte *)CONCAT31(uVar22,bVar26);
      unaff_ESI = pbVar16 + ((((uint)bVar69 * -8 + 4) - *(int *)CONCAT31(uVar22,cVar9)) -
                            (uint)(bVar26 < *(byte *)CONCAT31(uVar22,bVar26)));
      pbVar16 = (byte *)CONCAT31(uVar22,cVar9);
      goto code_r0x00403825;
    }
    *(char *)piVar14 = (char)*piVar14 + cVar8;
    uVar64 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar26 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar14 = (char)*piVar14 + cVar8;
    pcVar20 = (char *)CONCAT31(uVar22,cVar9 + 's');
    pbVar32 = (byte *)CONCAT22(uVar64,CONCAT11(bVar26 + *(char *)(CONCAT22(uVar64,CONCAT11(bVar26,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar20 = *pcVar20 + cVar9 + 's';
    bVar26 = cVar9 - 0xf;
    pbVar59 = *(byte **)((int)puVar43 + -4);
    *(char *)CONCAT31(uVar22,bVar26) = *(char *)CONCAT31(uVar22,bVar26) + bVar26;
    bVar11 = cVar9 + 0x1e;
    pbVar18 = (byte *)CONCAT31(uVar22,bVar11);
    *(byte **)(pbVar16 + (int)puVar62 * 8) =
         pbVar59 + (uint)(0xd2 < bVar26) + *(int *)(pbVar16 + (int)puVar62 * 8);
    puVar54 = (undefined4 *)((int)puVar43 + -4);
    puVar45 = (undefined4 *)((int)puVar43 + -4);
    *(undefined2 *)((int)puVar43 + -4) = unaff_retaddr;
    unaff_retaddr = *(undefined2 *)pbVar18;
    bVar26 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar11;
    if (CARRY1(bVar26,bVar11)) {
      *pbVar18 = *pbVar18 + bVar11;
      pbVar19 = (byte *)CONCAT31(uVar22,bVar11 | pbVar18[0x400005a]);
      if ('\0' < (char)(bVar11 | pbVar18[0x400005a])) {
code_r0x004038f6:
        bVar26 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar26;
        uVar22 = (undefined3)((uint)pbVar19 >> 8);
        cVar9 = ((bVar26 + 0x28) - *(char *)CONCAT31(uVar22,bVar26 + 0x28)) - (0xd7 < bVar26);
        pbVar19 = (byte *)CONCAT31(uVar22,cVar9);
        bVar26 = *pbVar32;
        bVar11 = (byte)((uint)pbVar25 >> 8);
        *pbVar32 = *pbVar32 + bVar11;
        if (CARRY1(bVar26,bVar11)) {
          *pbVar19 = *pbVar19 + cVar9;
          pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                     CONCAT11(bVar11 | *pbVar19,(char)pbVar25));
          *pbVar16 = *pbVar16 + cVar9;
          goto code_r0x00403908;
        }
        pbVar18 = pbVar19 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
    puVar42 = (undefined4 *)((int)puVar43 + -8);
    puVar43 = (undefined4 *)((int)puVar43 + -8);
    *puVar42 = 0x80a0000;
  } while( true );
code_r0x0040395a:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar46 = (undefined2 *)((int)puVar50 + -4);
  puVar50 = (undefined4 *)((int)puVar50 + -4);
  *puVar46 = unaff_retaddr;
  pbVar59[0x16060000] = pbVar59[0x16060000] - (char)pbVar25;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar16);
  cVar9 = (char)pbVar19 + '\x02';
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar9);
  bVar65 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403967:
  if (!bVar65) goto code_r0x004039be;
  *pbVar19 = *pbVar19 + (char)pbVar19;
  uVar22 = (undefined3)((uint)pbVar19 >> 8);
  bVar26 = (char)pbVar19 + 0x6f;
  bVar26 = bVar26 & *(byte *)CONCAT31(uVar22,bVar26);
  pbVar18 = (byte *)CONCAT31(uVar22,bVar26);
  *pbVar59 = *pbVar59 + (char)pbVar25;
  pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),(char)pbVar59 + (byte)*puVar62);
  *(byte *)(puVar62 + 0x5c18000) = (byte)puVar62[0x5c18000] - bVar26;
code_r0x00403979:
  do {
    bVar26 = (char)pbVar18 - (byte)*puVar62;
    bVar65 = bVar26 < *pbVar25;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar26 - *pbVar25);
    do {
      cVar9 = (char)pbVar19;
      *pbVar19 = *pbVar19 + cVar9 + bVar65;
      *pbVar19 = *pbVar19 + cVar9;
      *pbVar25 = *pbVar25 + (char)pbVar59;
      pbVar25[0x101c00aa] = pbVar25[0x101c00aa] + (char)pbVar32;
      *pbVar19 = *pbVar19 + cVar9;
      *(byte **)pbVar16 = pbVar32 + *(int *)pbVar16;
      bVar26 = (byte)((uint)pbVar25 >> 8);
      pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                 CONCAT11(bVar26 + *pbVar19,(char)pbVar25));
      pbVar19 = pbVar19 + (uint)CARRY1(bVar26,*pbVar19) + *(int *)pbVar19;
      pbVar18 = pbVar16;
code_r0x00403991:
      cVar9 = (char)pbVar25;
      *pbVar59 = *pbVar59 + cVar9;
      cVar8 = (char)pbVar32 - pbVar18[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar8);
      pbVar16 = pbVar18;
      if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x0040395a;
      *pbVar19 = *pbVar19 + (byte)pbVar19;
      uVar23 = (uint3)((uint)pbVar19 >> 8);
      bVar26 = (byte)pbVar19 | *pbVar32;
      piVar14 = (int *)CONCAT31(uVar23,bVar26);
      bVar11 = (byte)((uint)pbVar25 >> 8);
      bVar35 = (byte)pbVar59;
      if (bVar26 == 0) {
        *(char *)piVar14 = (char)*piVar14;
        puVar50 = (undefined4 *)((int)puVar50 + -*(int *)(pbVar60 + 0x1b000007));
        pbVar16 = pbVar18 + (uint)bVar69 * -8 + 4;
        out(*(undefined4 *)pbVar18,(short)pbVar59);
        pbVar19 = (byte *)((uint)uVar23 << 8);
        *pbVar59 = *pbVar59 + cVar9;
        pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),bVar35 - *pbVar32);
        *pbVar32 = *pbVar32;
        *pbVar59 = *pbVar59 + bVar11;
        *pbVar19 = *pbVar19;
        *pbVar32 = *pbVar32 + cVar8;
        *pbVar19 = *pbVar19;
        *(byte **)(pbVar32 + -0x3d) = pbVar16 + *(int *)(pbVar32 + -0x3d);
        break;
      }
      pbVar60 = pbVar60 + -puVar62[9];
      *(byte *)piVar14 = (char)*piVar14 + bVar26;
      pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),CONCAT11(bVar11 | *pbVar59,cVar9));
      pbVar16 = pbVar18 + *piVar14;
      pcVar20 = (char *)((int)piVar14 + *piVar14);
      bVar11 = (char)pcVar20 - *pcVar20;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),bVar11);
      bVar26 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar11;
      pbVar19 = pbVar19 + (-(uint)CARRY1(bVar26,bVar11) - *(int *)pbVar19);
      bVar65 = CARRY1(*pbVar25,bVar35);
      *pbVar25 = *pbVar25 + bVar35;
    } while (!bVar65);
    *pbVar19 = *pbVar19 + (char)pbVar19;
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | *pbVar59);
code_r0x004039be:
    puVar54 = (undefined4 *)((int)puVar50 + -4);
    puVar47 = (undefined1 *)((int)puVar50 + -4);
    *(undefined2 *)((int)puVar50 + -4) = unaff_retaddr;
    puVar62 = (uint *)((int)puVar62 + *(int *)(pbVar60 + -0x3c));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar22 = (undefined3)((uint)pbVar19 >> 8);
    bVar26 = (byte)pbVar19 | *pbVar59;
    pcVar20 = (char *)CONCAT31(uVar22,bVar26);
    if ((POPCOUNT(bVar26) & 1U) != 0) {
      cVar9 = *pcVar20;
      *pcVar20 = *pcVar20 + bVar26;
      cVar8 = *pcVar20;
      puVar28 = (undefined1 *)((int)puVar50 + -4);
      if (!SCARRY1(cVar9,bVar26)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar54 = (undefined4 *)puVar28;
      cVar9 = (char)pcVar20;
      *pcVar20 = *pcVar20 + cVar9;
      uVar22 = (undefined3)((uint)pcVar20 >> 8);
      bVar26 = cVar9 + 2;
      if ((POPCOUNT(bVar26) & 1U) == 0) {
        *(char *)CONCAT31(uVar22,bVar26) = *(char *)CONCAT31(uVar22,bVar26) + bVar26;
        piVar14 = (int *)CONCAT31(uVar22,cVar9 + '*');
        *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0xd7 < bVar26);
        bVar26 = *pbVar59;
        bVar12 = (byte)pbVar25;
        *pbVar59 = *pbVar59 + bVar12;
        out(*(undefined4 *)pbVar16,(short)pbVar59);
        bVar35 = ((cVar9 + '*') - (char)*piVar14) - CARRY1(bVar26,bVar12);
        pbVar19 = (byte *)CONCAT31(uVar22,bVar35);
        *pbVar59 = *pbVar59 + bVar12;
        uVar64 = (undefined2)((uint)pbVar32 >> 0x10);
        uVar31 = SUB41(pbVar32,0);
        cVar9 = (char)((uint)pbVar32 >> 8) - pbVar16[(uint)bVar69 * -8 + 0x1f];
        pbVar32 = (byte *)CONCAT22(uVar64,CONCAT11(cVar9,uVar31));
        *pbVar19 = *pbVar19 + bVar35;
        bVar11 = *pbVar59;
        bVar26 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar35;
        pbVar16 = pbVar16 + ((((uint)bVar69 * -8 + 4) - *(int *)pbVar19) -
                            (uint)CARRY1(bVar26,bVar35));
        pbVar19 = (byte *)CONCAT31(uVar22,bVar35);
        pbVar25 = (byte *)(CONCAT22((short)((uint)pbVar25 >> 0x10),
                                    CONCAT11((byte)((uint)pbVar25 >> 8) | bVar11,bVar12)) + -1);
        bVar26 = *pbVar19;
        *pbVar19 = *pbVar19 + bVar35;
        bVar26 = (bVar35 - *pbVar19) - CARRY1(bVar26,bVar35);
        *pbVar25 = *pbVar25 + (char)pbVar59;
        bVar65 = CARRY1(bVar26,*pbVar59);
        bVar26 = bVar26 + *pbVar59;
        pbVar19 = (byte *)CONCAT31(uVar22,bVar26);
        if ((POPCOUNT(bVar26) & 1U) == 0) {
          *pbVar19 = *pbVar19 + bVar26;
          cVar8 = (bVar26 + 0x6f) - (0x90 < bVar26);
          pbVar18 = (byte *)CONCAT31(uVar22,cVar8);
          bVar26 = *pbVar59;
          *pbVar59 = *pbVar59 + (char)pbVar25;
          if (SCARRY1(bVar26,(char)pbVar25) == (char)*pbVar59 < '\0') goto code_r0x00403aaf;
          *pbVar18 = *pbVar18 + cVar8;
          pcVar20 = (char *)CONCAT31(uVar22,cVar8 + '\x02');
          bVar11 = cVar9 + pbVar32[0x52];
          pbVar32 = (byte *)CONCAT22(uVar64,CONCAT11(bVar11,uVar31));
          *pcVar20 = *pcVar20 + cVar8 + '\x02';
          bVar26 = cVar8 + 4;
          pbVar18 = (byte *)CONCAT31(uVar22,bVar26);
          if ((POPCOUNT(bVar26) & 1U) == 0) {
            *pbVar18 = *pbVar18 + bVar26;
            cVar9 = (cVar8 + 's') - (0x90 < bVar26);
            pcVar20 = (char *)CONCAT31(uVar22,cVar9);
            bVar26 = (byte)((uint)pbVar25 >> 8);
            bVar65 = CARRY1(*pbVar32,bVar26);
            *pbVar32 = *pbVar32 + bVar26;
            pbVar19 = pbVar16;
            if (bVar65) {
              *pcVar20 = *pcVar20 + cVar9;
              pbVar32 = (byte *)CONCAT22(uVar64,CONCAT11(bVar11 | pbVar60[0x5c],uVar31));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar62 = (uint *)((int)puVar62 - *(int *)pbVar18);
          pbVar32 = (byte *)CONCAT22(uVar64,CONCAT11(bVar11 + pbVar32[0x52],uVar31));
code_r0x00403abf:
          *pbVar18 = *pbVar18 + (char)pbVar18;
          cVar9 = (char)pbVar18 + '\x02';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar9);
          bVar65 = (POPCOUNT(cVar9) & 1U) == 0;
          if (!bVar65) goto code_r0x00403b18;
        }
        else {
code_r0x00403aa1:
          if (bVar65) {
            *pbVar19 = *pbVar19 + (byte)pbVar19;
            bVar26 = (byte)pbVar19 | pbVar19[0x400005e];
            pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar26);
            if ('\0' < (char)bVar26) {
              *pbVar18 = *pbVar18 + bVar26;
code_r0x00403aaf:
              cVar9 = (char)pbVar18 + '(';
              pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar9);
              *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
              bVar26 = *pbVar32;
              bVar11 = (byte)((uint)pbVar25 >> 8);
              *pbVar32 = *pbVar32 + bVar11;
              pbVar21 = pbVar60;
              if (!CARRY1(bVar26,bVar11)) goto code_r0x00403ad8;
              *pbVar18 = *pbVar18 + cVar9;
              pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                         CONCAT11(bVar11 | *pbVar32,(char)pbVar25));
              if ((POPCOUNT(*pbVar59 - cVar9) & 1U) != 0) {
                *pbVar16 = *pbVar16 + cVar9;
                goto code_r0x00403b13;
              }
              goto code_r0x00403abf;
            }
            break;
          }
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],
                                              (char)pbVar32));
        }
        bVar26 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar26;
        cVar9 = (bVar26 + 0x6f) - (0x90 < bVar26);
        pcVar20 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar9);
        bVar26 = *pbVar32;
        cVar8 = (char)((uint)pbVar25 >> 8);
        *pbVar32 = *pbVar32 + cVar8;
        if (*pbVar32 == 0 || SCARRY1(bVar26,cVar8) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
        *pcVar20 = *pcVar20 + cVar9;
code_r0x00403ad1:
        *(byte **)(pbVar16 + (int)puVar62 * 8) =
             pbVar59 + (uint)(0xd2 < (byte)pcVar20) + *(int *)(pbVar16 + (int)puVar62 * 8);
        puVar49 = (undefined2 *)((int)puVar54 + -4);
        puVar54 = (undefined4 *)((int)puVar54 + -4);
        *puVar49 = unaff_retaddr;
        pbVar18 = pbVar60;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),(byte)pcVar20 + 0x2d);
code_r0x00403ad8:
        pbVar60 = pbVar21;
        bVar26 = *pbVar18;
        bVar11 = (byte)pbVar18;
        *pbVar18 = *pbVar18 + bVar11;
        puVar50 = (undefined4 *)((int)puVar54 + -4);
        *(undefined2 *)((int)puVar54 + -4) = unaff_retaddr;
        puVar28 = (undefined1 *)((int)puVar54 + -4);
        if (CARRY1(bVar26,bVar11)) {
          *pbVar18 = *pbVar18 + bVar11;
          bVar11 = bVar11 | pbVar18[0x400005d];
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar11);
          pbVar19 = pbVar16;
          if ((char)bVar11 < '\x01') {
            *pbVar18 = *pbVar18 + bVar11;
            pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar25 >> 8) | *pbVar59,(char)pbVar25)
                                      );
            pbVar19 = *(byte **)((int)puVar54 + -4);
            pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                       CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],
                                                (char)pbVar32));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar18 = *pbVar18 + (char)pbVar18;
          cVar9 = (char)pbVar18 + '(';
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar9);
          *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
          bVar26 = *pbVar32;
          bVar11 = (byte)((uint)pbVar25 >> 8);
          *pbVar32 = *pbVar32 + bVar11;
          pbVar16 = pbVar19;
          if (!CARRY1(bVar26,bVar11)) {
            puVar54 = (undefined4 *)((int)puVar50 + -4);
            *(undefined2 *)((int)puVar50 + -4) = unaff_retaddr;
            goto code_r0x00403b13;
          }
          *pbVar18 = *pbVar18 + cVar9;
          goto code_r0x00403af3;
        }
      }
      else {
        pcVar20 = (char *)CONCAT31(uVar22,bVar26 + *pbVar59);
        pbVar19 = pbVar16;
        if ((POPCOUNT(bVar26 + *pbVar59) & 1U) != 0) goto code_r0x00403ad1;
code_r0x00403a7d:
        cVar9 = (char)pcVar20;
        *pcVar20 = *pcVar20 + cVar9;
        uVar22 = (undefined3)((uint)pcVar20 >> 8);
        cVar8 = cVar9 + '-';
        pbVar21 = (byte *)CONCAT31(uVar22,cVar8);
        pbVar18 = pbVar60;
        pbVar16 = pbVar19;
        if ((POPCOUNT(cVar8 - *pbVar59) & 1U) != 0) goto code_r0x00403ad8;
        *pbVar21 = *pbVar21 + cVar8;
        bVar26 = cVar9 + 0x2f;
        if ((POPCOUNT(bVar26) & 1U) != 0) {
          bVar26 = *pbVar59;
          *pbVar59 = *pbVar59 + (byte)pbVar25;
          *pbVar60 = *pbVar60 - CARRY1(bVar26,(byte)pbVar25);
          pbVar18 = (byte *)CONCAT31(uVar22,cVar9 + -0x53);
          pbVar60 = (byte *)*puVar54;
          puVar50 = puVar54 + 1;
          goto code_r0x00403ae7;
        }
        *(char *)CONCAT31(uVar22,bVar26) = *(char *)CONCAT31(uVar22,bVar26) + bVar26;
        bVar65 = 0x90 < bVar26;
        pcVar20 = (char *)CONCAT31(uVar22,cVar9 + -0x62);
code_r0x00403a8f:
        uVar22 = (undefined3)((uint)pcVar20 >> 8);
        bVar11 = (char)pcVar20 - bVar65;
        pbVar18 = (byte *)CONCAT31(uVar22,bVar11);
        bVar26 = *pbVar32;
        cVar9 = (char)((uint)pbVar25 >> 8);
        *pbVar32 = *pbVar32 + cVar9;
        puVar50 = puVar54;
        pbVar16 = pbVar19;
        if (*pbVar32 != 0 && SCARRY1(bVar26,cVar9) == (char)*pbVar32 < '\0') {
          *pbVar18 = *pbVar18 + bVar11;
          pbVar16 = (byte *)CONCAT31(uVar22,bVar11 + 0x2d);
          *(byte **)(pbVar19 + (int)puVar62 * 8) =
               pbVar59 + (uint)(0xd2 < bVar11) + *(int *)(pbVar19 + (int)puVar62 * 8);
          *(undefined2 *)((int)puVar54 + -4) = unaff_retaddr;
          bVar65 = CARRY1(*pbVar19,(byte)pbVar19);
          *pbVar19 = *pbVar19 + (byte)pbVar19;
          puVar48 = (undefined2 *)((int)puVar54 + -8);
          puVar54 = (undefined4 *)((int)puVar54 + -8);
          *puVar48 = unaff_retaddr;
          goto code_r0x00403aa1;
        }
code_r0x00403af3:
        pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar25 >> 8) | *pbVar18,(char)pbVar25));
        *pbVar16 = *pbVar16 + (char)pbVar18;
        puVar28 = (undefined1 *)puVar50;
      }
      puVar54 = (undefined4 *)puVar28;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar18 = *pbVar18 + (char)pbVar18;
      uVar22 = (undefined3)((uint)pbVar18 >> 8);
      bVar11 = (char)pbVar18 + 0x6f;
      bVar26 = *(byte *)CONCAT31(uVar22,bVar11);
      *pbVar59 = *pbVar59 + (char)pbVar25;
      pbVar18 = (byte *)CONCAT31(uVar22,(bVar11 & bVar26) + *pbVar16);
      *pbVar25 = *pbVar25 - (char)((uint)pbVar59 >> 8);
      break;
    }
    *pcVar20 = *pcVar20 + bVar26;
    *pbVar16 = *pbVar16 + 1;
    uVar5 = *(undefined6 *)CONCAT31(uVar22,bVar26 + 6);
    pbVar18 = (byte *)uVar5;
    bVar26 = *pbVar59;
    bVar11 = (byte)pbVar25;
    *pbVar59 = *pbVar59 + bVar11;
    if (CARRY1(bVar26,bVar11)) {
      *pbVar18 = *pbVar18 + (char)uVar5;
      bVar35 = (byte)((uint)pbVar25 >> 8) | *pbVar18;
      uVar64 = CONCAT11(bVar35,bVar11);
      pbVar18 = pbVar18 + -*(int *)pbVar18;
      bVar26 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar35;
      if (CARRY1(bVar26,bVar35)) {
        cVar8 = (char)pbVar18;
        *pbVar18 = *pbVar18 + cVar8;
        bVar26 = *pbVar59;
        pbVar59 = (byte *)CONCAT22((short)((uint)pbVar59 >> 0x10),
                                   CONCAT11((char)((uint)pbVar59 >> 8) - pbVar32[-0x3a],
                                            (char)pbVar59));
        *pbVar18 = *pbVar18 + cVar8;
        uVar38 = (undefined2)((uint)pbVar32 >> 0x10);
        bVar37 = (byte)((uint)pbVar32 >> 8) | pbVar59[0x32];
        pcVar20 = (char *)CONCAT22(uVar38,CONCAT11(bVar37,(char)pbVar32));
        cVar9 = *pcVar20;
        puVar47 = (undefined1 *)((int)puVar50 + -8);
        *(undefined2 *)((int)puVar50 + -8) = in_CS;
        cVar9 = cVar8 + cVar9 + '-';
        pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar9);
        *pbVar18 = *pbVar18;
        *(undefined2 *)((int)puVar50 + -0xc) = unaff_retaddr;
        bVar12 = *pbVar59;
        uVar63 = *(undefined2 *)((int)puVar50 + -0xc);
        cVar8 = (char)pbVar32 - *pbVar16;
        bVar13 = *(byte *)((int)puVar62 + 0x17);
        *pbVar18 = *pbVar18 + cVar9;
        uVar64 = CONCAT11((bVar35 | bVar26) + bVar13 | *pbVar59,bVar11 - bVar12);
        pbVar32 = (byte *)CONCAT22(uVar38,CONCAT11(bVar37 + *(char *)(CONCAT31((int3)((uint)pcVar20
                                                                                     >> 8),cVar8) +
                                                                     0x4e),cVar8));
        *pbVar18 = *pbVar18 + cVar9;
      }
      pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),uVar64);
      bVar26 = (byte)pbVar18;
      uVar22 = (undefined3)((uint)pbVar18 >> 8);
      pcVar20 = (char *)CONCAT31(uVar22,bVar26 + 0x28);
      *pcVar20 = (*pcVar20 - (bVar26 + 0x28)) - (0xd7 < bVar26);
      *pbVar59 = *pbVar59 + (char)uVar64;
      bVar11 = bVar26 + 0x1b;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32))
      ;
      *(char *)CONCAT31(uVar22,bVar11) = *(char *)CONCAT31(uVar22,bVar11) + bVar11;
      pcVar17 = (char *)CONCAT31(uVar22,bVar26 + 0x43);
      *pcVar17 = (*pcVar17 - (bVar26 + 0x43)) - (0xd7 < bVar11);
      *pbVar59 = *pbVar59 + (char)uVar64;
      pcVar20 = pcVar17 + -0x6b721c;
      pcVar17 = pcVar17 + -0x6b721a;
      *pcVar17 = *pcVar17 + (char)((uint)pbVar59 >> 8);
      cVar8 = *pcVar17;
      puVar54 = (undefined4 *)puVar47;
code_r0x00403a22:
      puVar28 = (undefined1 *)puVar54;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x00403a24;
      bVar26 = *pbVar59;
      *pbVar59 = *pbVar59 + (char)pbVar25;
      if (SCARRY1(bVar26,(char)pbVar25) != (char)*pbVar59 < '\0') {
code_r0x00403a76:
        *pcVar20 = *pcVar20 + (char)pcVar20;
        pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),(char)pcVar20 + '\x02');
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32
                                           ));
        pbVar19 = pbVar16;
        goto code_r0x00403a7d;
      }
      pbVar18 = pbVar60;
      pbVar21 = (byte *)(pcVar20 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
    uVar63 = *(undefined2 *)((int)puVar50 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar18 = *pbVar18 + (char)pbVar18;
  puVar51 = (undefined2 *)((int)puVar54 + -4);
  puVar54 = (undefined4 *)((int)puVar54 + -4);
  *puVar51 = unaff_retaddr;
  pbVar59[0x16060000] = pbVar59[0x16060000] - (char)pbVar25;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar16);
  cVar9 = (char)pbVar18 + '\x02';
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar9);
  bVar65 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403b18:
  bVar26 = (byte)pbVar19;
  uVar22 = (undefined3)((uint)pbVar19 >> 8);
  if (!bVar65) {
    *pbVar59 = *pbVar59 + (char)pbVar25;
    pbVar18 = (byte *)CONCAT31(uVar22,bVar26 | *pbVar16);
code_r0x00403b73:
    pbVar19 = (byte *)((int)puVar62 + *(int *)(pbVar60 + -0x37));
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    uVar22 = (undefined3)((uint)pbVar18 >> 8);
    bVar26 = (byte)pbVar18 | *pbVar59;
    pcVar20 = (char *)CONCAT31(uVar22,bVar26);
    uVar74 = CONCAT44(pbVar59,pcVar20);
    if ((POPCOUNT(bVar26) & 1U) == 0) {
      *pcVar20 = *pcVar20 + bVar26;
      *pbVar16 = *pbVar16 + 1;
      return (byte *)CONCAT31(uVar22,bVar26 + 6);
    }
    bVar26 = *pbVar16;
    *pbVar16 = *pbVar16 + 1;
    pcVar4 = (code *)swi(4);
    if (SCARRY1(bVar26,'\x01')) {
      uVar74 = (*pcVar4)();
      pbVar25 = extraout_ECX_00;
    }
    pbVar59 = (byte *)uVar74;
    *pbVar59 = *pbVar59 + (char)uVar74;
    cVar8 = (char)((ulonglong)uVar74 >> 0x20);
    puVar62 = (uint *)CONCAT22((short)((ulonglong)uVar74 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar74 >> 0x28) | pbVar32[0x2f],cVar8));
    *pbVar59 = *pbVar59 + (char)uVar74;
    cVar9 = (char)pbVar25;
    bVar35 = (byte)((uint)pbVar25 >> 8) | *pbVar59;
    pbVar59 = pbVar59 + *(int *)pbVar59;
    bVar26 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar35;
    bVar11 = (byte)pbVar59;
    if (CARRY1(bVar26,bVar35)) {
      *pbVar59 = *pbVar59 + bVar11;
      bVar35 = bVar35 | (byte)*puVar62;
      *pbVar32 = *pbVar32 - cVar8;
      *pbVar59 = *pbVar59 + bVar11;
      uVar22 = (undefined3)((uint)pbVar59 >> 8);
      bVar11 = bVar11 | (byte)*puVar62;
      puVar61 = (uint *)CONCAT31(uVar22,bVar11);
      bVar65 = CARRY4((uint)pbVar60,*puVar61);
      bVar70 = SCARRY4((int)pbVar60,*puVar61);
      pbVar60 = pbVar60 + *puVar61;
      *(uint *)((int)puVar54 + -4) =
           (uint)(bVar71 & 1) * 0x4000 | (uint)bVar70 * 0x800 | (uint)bVar69 * 0x400 |
           (uint)(bVar68 & 1) * 0x200 | (uint)(bVar67 & 1) * 0x100 | (uint)((int)pbVar60 < 0) * 0x80
           | (uint)(pbVar60 == (byte *)0x0) * 0x40 | (uint)(bVar66 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar60 & 0xff) & 1U) == 0) * 4 | (uint)bVar65 |
           (uint)(bVar73 & 1) * 0x200000 | (uint)(bVar10 & 1) * 0x100000 |
           (uint)(bVar34 & 1) * 0x80000 | (uint)(bVar72 & 1) * 0x40000;
      *(byte *)puVar61 = (char)*puVar61 + bVar11;
      *(undefined2 *)((int)puVar54 + -8) = unaff_retaddr;
      cVar8 = (char)pbVar32 - *pbVar16;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar8) +
                                                   0x5f),cVar8));
      *(byte *)puVar61 = (char)*puVar61 + bVar11;
      bVar26 = bVar11 + 0x2a & (byte)*puVar62;
      pbVar19 = pbVar19 + *(int *)(pbVar60 + 0x5f);
      *(char *)CONCAT31(uVar22,bVar26) = *(char *)CONCAT31(uVar22,bVar26) + bVar26;
      pbVar59 = (byte *)CONCAT31(uVar22,bVar26 + 0x2a);
      *(byte *)puVar62 = (byte)*puVar62 + 0x28;
      *pbVar59 = *pbVar59 + bVar26 + 0x2a;
      puVar55 = (undefined2 *)((int)puVar54 + -0xc);
      puVar54 = (undefined4 *)((int)puVar54 + -0xc);
      *puVar55 = unaff_retaddr;
    }
    else {
      *pbVar16 = *pbVar16 + bVar11;
    }
    pcVar20 = (char *)CONCAT22((short)((uint)pbVar25 >> 0x10),CONCAT11(bVar35,cVar9));
    *pbVar60 = *pbVar60 - bVar35;
    *(byte *)puVar62 = (byte)*puVar62 + cVar9;
    bVar26 = (byte)pbVar59 - 0xb;
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),bVar26);
    if (10 < (byte)pbVar59) {
      *pbVar25 = *pbVar25 | bVar26;
      return pbVar25;
    }
    *(byte *)puVar62 = (byte)*puVar62 + cVar9;
    do {
      *(undefined2 *)((int)puVar54 + -4) = unaff_retaddr;
      bVar26 = pbVar32[-0x23];
      bVar34 = (byte)pbVar25;
      *pbVar25 = *pbVar25 + bVar34;
      bVar66 = pbVar60[-0x22];
      *pbVar25 = *pbVar25 + bVar34;
      uVar22 = (undefined3)((uint)pbVar25 >> 8);
      bVar34 = bVar34 | *pbVar16;
      pbVar59 = (byte *)CONCAT31(uVar22,bVar34);
      cVar8 = (char)pbVar32 - *pbVar16;
      pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar32 >> 8) + bVar26 |
                                                          bVar66,(char)pbVar32)) >> 8),cVar8);
      cVar9 = (char)pcVar20;
      pcVar20 = (char *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                                 CONCAT11((char)((uint)pcVar20 >> 8) + *pbVar59,cVar9));
      *(byte *)puVar62 = (byte)*puVar62 + cVar9;
      bVar66 = bVar34 - *pbVar59;
      pbVar25 = (byte *)CONCAT31(uVar22,bVar66);
      pbVar16 = pbVar16 + (-(uint)(bVar34 < *pbVar59) - *(int *)pbVar25);
      unaff_retaddr = *(undefined2 *)((int)puVar54 + -4);
      puVar62 = (uint *)CONCAT31((int3)((uint)puVar62 >> 8),(char)puVar62 * '\x02');
      *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
      *pbVar19 = *pbVar19 + cVar8;
      bVar26 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar66;
      *puVar62 = (uint)(pbVar25 + (uint)CARRY1(bVar26,bVar66) + *puVar62);
    } while ((POPCOUNT(*puVar62 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar25 = *pbVar25 + (char)pbVar25;
    pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),(byte)pcVar20 | pbVar25[(int)pcVar20]);
    puVar57 = (undefined2 *)((int)puVar54 + -4);
    *(undefined2 *)((int)puVar54 + -4) = uVar63;
    bVar65 = false;
    pbVar25 = (byte *)((uint)pbVar25 & 0xffffff00);
    do {
      pbVar19 = pbVar19 + (-(uint)bVar65 - *(int *)pbVar32);
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar25 >> 8),*pcVar20);
      *pcVar17 = *pcVar17 + *pcVar20;
      pbVar25 = (byte *)CONCAT31((int3)((uint)(pcVar17 +
                                              (pbVar16[0x2000001] < (byte)((uint)pcVar20 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar17 +
                                        (pbVar16[0x2000001] < (byte)((uint)pcVar20 >> 8)) + 0xda7d)
                                 | (byte)*puVar62) + 0x7d);
      pcVar20 = pcVar20 + -1;
      *(byte *)puVar62 = (byte)*puVar62 + (char)pcVar20;
      while( true ) {
        uVar27 = (undefined3)((uint)puVar62 >> 8);
        cVar9 = (char)puVar62 + *(char *)((int)pbVar19 * 2 + 0xa0000e1);
        puVar62 = (uint *)CONCAT31(uVar27,cVar9);
        bVar65 = CARRY1((byte)pbVar25,(byte)*puVar62);
        uVar22 = (undefined3)((uint)pbVar25 >> 8);
        bVar26 = (byte)pbVar25 + (byte)*puVar62;
        pbVar25 = (byte *)CONCAT31(uVar22,bVar26);
        if ((POPCOUNT(bVar26) & 1U) != 0) break;
        *pbVar25 = *pbVar25 + bVar26;
        cVar8 = (char)pcVar20;
        pcVar20 = (char *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar20 >> 8) | pbVar19[-0x65],cVar8));
        bVar66 = *pbVar25;
        *pbVar25 = *pbVar25 + bVar26;
        *(undefined2 *)((int)puVar57 + -4) = unaff_retaddr;
        if (CARRY1(bVar66,bVar26)) {
          *pbVar25 = *pbVar25 + bVar26;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | pbVar60[-0x1d],
                                              (char)pbVar32));
          *pbVar25 = *pbVar25 + bVar26;
          bVar65 = false;
          bVar26 = bVar26 | (byte)*puVar62;
          pcVar17 = (char *)CONCAT31(uVar22,bVar26);
          uVar63 = *(undefined2 *)((int)puVar57 + -4);
          puVar54 = (undefined4 *)puVar57;
          while( true ) {
            bVar66 = (byte)pcVar17;
            uVar22 = (undefined3)((uint)pcVar17 >> 8);
            if (bVar65 == (char)bVar26 < '\0') break;
            *pcVar17 = *pcVar17 + bVar66;
            bVar66 = bVar66 | (byte)*puVar62;
            puVar61 = (uint *)CONCAT31(uVar22,bVar66);
            *pbVar19 = *pbVar19 << 1 | (char)*pbVar19 < '\0';
            uVar15 = *puVar61;
            *(byte *)puVar61 = (byte)*puVar61 + bVar66;
            pbVar60 = pbVar60 + (-(uint)CARRY1((byte)uVar15,bVar66) - *puVar61);
            *puVar61 = *puVar61 << 1 | (uint)((int)*puVar61 < 0);
            while( true ) {
              uVar15 = *puVar62;
              *(byte *)puVar62 = (byte)*puVar62 + (byte)pcVar20;
              uVar64 = *(undefined2 *)puVar54;
              cVar9 = (char)puVar61 + 'o' + CARRY1((byte)uVar15,(byte)pcVar20);
              pcVar17 = (char *)CONCAT31((int3)((uint)puVar61 >> 8),cVar9);
              pcVar20 = (char *)0x20a0000;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *pcVar17 = *pcVar17 + cVar9;
              bVar26 = bRamfe140212;
              pcVar20 = (char *)0x0;
              *(undefined2 *)puVar54 = unaff_retaddr;
              uVar22 = (undefined3)((uint)(pcVar17 + -0x732b0000) >> 8);
              bVar66 = in(0);
              puVar61 = (uint *)CONCAT31(uVar22,bVar66);
              uVar15 = *puVar62;
              *(byte *)puVar62 = (byte)*puVar62;
              if (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar62 < '\0') {
                *(byte *)puVar61 = (byte)*puVar61 + bVar66;
                bVar66 = bVar66 | (byte)*puVar62;
                puVar61 = (uint *)CONCAT31(uVar22,bVar66);
                if ((POPCOUNT(bVar66) & 1U) == 0) {
                  *(byte *)puVar61 = (byte)*puVar61 + bVar66;
                  pcVar20 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar26 | (byte)*puVar61) << 8);
                  puVar57 = (undefined2 *)((int)puVar54 + -4);
                  *(undefined2 *)((int)puVar54 + -4) = uVar64;
                  *(byte *)puVar61 = (byte)*puVar61 + bVar66;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar61 = (byte)*puVar61 + bVar66;
                puVar61 = (uint *)CONCAT31(uVar22,bVar66 | (byte)*puVar62);
              }
            }
            *(byte *)puVar62 = (byte)*puVar62;
            bVar65 = SCARRY1((char)puVar62,*pbVar19);
            bVar26 = (char)puVar62 + *pbVar19;
            puVar62 = (uint *)CONCAT31((int3)((uint)puVar62 >> 8),bVar26);
            puVar54 = (undefined4 *)((int)puVar54 + 4);
          }
          if (bVar65 == (char)bVar26 < '\0') {
            *(byte *)puVar62 = (byte)*puVar62 + (char)pcVar20;
            pbVar25 = (byte *)((uint)pcVar17 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar17 = *pcVar17 + bVar66;
          pbVar25 = (byte *)CONCAT31(uVar22,(bVar66 | (byte)*puVar62) + 0x7d);
          pcVar20 = pcVar20 + -1;
          *(byte *)puVar62 = (byte)*puVar62 + (char)pcVar20;
          puVar57 = (undefined2 *)puVar54;
        }
        else {
          *(byte *)puVar62 = (byte)*puVar62 + cVar8;
          puVar62 = (uint *)CONCAT31(uVar27,cVar9 + *(char *)((int)pbVar19 * 2 + 0xa0000e0));
          puVar57 = (undefined2 *)((int)puVar57 + -4);
        }
      }
    } while( true );
  }
  *pbVar19 = *pbVar19 + bVar26;
  bVar26 = bVar26 + 0x6f & *(byte *)CONCAT31(uVar22,bVar26 + 0x6f);
  *pbVar59 = *pbVar59 + (char)pbVar25;
  pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),(char)pbVar59 + (byte)*puVar62);
  *(byte *)(puVar62 + 0x5c18000) = (byte)puVar62[0x5c18000] - bVar26;
  pcVar20 = (char *)CONCAT31(uVar22,bVar26 - (byte)*puVar62);
code_r0x00403b2c:
  bVar26 = (char)pcVar20 - *pcVar20;
  pbVar18 = (byte *)CONCAT31((int3)((uint)pcVar20 >> 8),bVar26);
  *pbVar18 = *pbVar18 + bVar26;
  *(byte **)pbVar18 = pbVar59 + *(int *)pbVar18;
  *pbVar18 = *pbVar18 + bVar26;
  bVar65 = CARRY1(*pbVar18,bVar26);
  *pbVar18 = *pbVar18 + bVar26;
  puVar28 = (undefined1 *)puVar54;
  pbVar19 = pbVar16;
  while( true ) {
    puVar54 = (undefined4 *)puVar28;
    *(byte **)pbVar18 = pbVar18 + (uint)bVar65 + *(int *)pbVar18;
    bVar66 = ((uint)pbVar18 & 0x1000) != 0;
    puVar62 = puVar62 + (uint)bVar69 * -2 + 1;
    pbVar18[(int)pbVar59] = pbVar18[(int)pbVar59] + (char)pbVar32;
    *pbVar18 = *pbVar18 + (char)pbVar18;
    *(byte **)pbVar19 = pbVar32 + *(int *)pbVar19;
    bVar26 = (byte)((uint)pbVar25 >> 8);
    cVar9 = (char)pbVar25;
    pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),CONCAT11(bVar26 + *pbVar18,cVar9));
    pbVar18 = pbVar18 + (uint)CARRY1(bVar26,*pbVar18) + *(int *)pbVar18;
    *pbVar59 = *pbVar59 + cVar9;
    cVar9 = (char)pbVar32 - pbVar19[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar9);
    pbVar16 = pbVar19;
    if ((POPCOUNT(cVar9) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    bVar26 = (byte)pbVar18 | *pbVar32;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar26);
    if (bVar26 != 0) {
      pbVar60 = pbVar60 + -puVar62[9];
      *pbVar21 = *pbVar21 + bVar26;
      pbVar25 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar25 >> 8) | *pbVar59,(char)pbVar25));
      pbVar19 = pbVar19 + *(int *)pbVar21;
      pbVar21 = pbVar21 + *(int *)pbVar21;
      uVar22 = (undefined3)((uint)pbVar21 >> 8);
      bVar11 = (char)pbVar21 - *pbVar21;
      pbVar16 = (byte *)CONCAT31(uVar22,bVar11);
      bVar26 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar11;
      pbVar21 = (byte *)CONCAT31(uVar22,bVar11 - CARRY1(bVar26,bVar11));
    }
    bVar26 = *pbVar21;
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    iVar24 = *(int *)(pbVar60 + 0x1b000007);
    iVar6 = -(uint)CARRY1(bVar26,(byte)pbVar21);
    pbVar16 = pbVar19 + (uint)bVar69 * -8 + 4;
    out(*(undefined4 *)pbVar19,(short)pbVar59);
    pbVar18 = (byte *)(((uint)pbVar21 >> 8) * 0x100);
    *pbVar59 = *pbVar59 + (byte)pbVar25;
    bVar26 = (char)pbVar59 - *pbVar32;
    pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),bVar26);
    *pbVar32 = *pbVar32;
    *pbVar59 = *pbVar59 + (char)((uint)pbVar25 >> 8);
    *pbVar18 = *pbVar18;
    pcVar20 = (char *)(((uint)pbVar21 >> 8) * 0x200);
    *pcVar20 = *pcVar20 + (char)pbVar32;
    bVar65 = CARRY1(*pbVar25,bVar26);
    *pbVar25 = *pbVar25 + bVar26;
    puVar28 = (undefined1 *)((int)puVar54 + (iVar6 - iVar24));
    pbVar19 = pbVar16;
    if (bVar65) {
      *pbVar18 = *pbVar18;
      pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | *pbVar59);
      puVar53 = (undefined2 *)((int)puVar54 + (iVar6 - iVar24) + -4);
      puVar54 = (undefined4 *)((int)puVar54 + (iVar6 - iVar24) + -4);
      *puVar53 = unaff_retaddr;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar52 = (undefined2 *)((int)puVar54 + -4);
  puVar54 = (undefined4 *)((int)puVar54 + -4);
  *puVar52 = uVar63;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar60 = pbVar60 + -*puVar61;
  puVar56 = (undefined1 *)((int)puVar57 + 4);
  do {
    bVar26 = (byte)puVar61;
    *(byte *)puVar61 = (byte)*puVar61 + bVar26;
    pbVar19 = pbVar19 + -*(int *)(pbVar60 + -0x1a);
    *(byte *)puVar61 = (byte)*puVar61 + bVar26;
    bVar26 = bVar26 | (byte)*puVar62;
    puVar61 = (uint *)CONCAT31((int3)((uint)puVar61 >> 8),bVar26);
    *(byte *)puVar61 = (byte)*puVar61 | bVar26;
    bVar26 = (byte)*puVar61;
    pbVar60 = (byte *)0x2700001;
    while (puVar57 = (undefined2 *)puVar56, (POPCOUNT(bVar26) & 1U) == 0) {
      do {
        *(byte *)puVar61 = (byte)*puVar61 + (byte)puVar61;
        bVar26 = (byte)puVar61 | (byte)*puVar62;
        puVar61 = (uint *)CONCAT31((int3)((uint)puVar61 >> 8),bVar26);
        puVar28 = (undefined1 *)puVar57;
        if ((POPCOUNT(bVar26) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar61 = (byte)*puVar61 + (char)puVar61;
        uVar23 = CONCAT21((short)((uint)pcVar20 >> 0x10),(byte)((uint)pcVar20 >> 8) | bRamfe140212);
        puVar7 = puVar28;
        while( true ) {
          puVar58 = puVar7;
          pcVar20 = (char *)((uint)uVar23 << 8);
          puVar56 = puVar58 + -4;
          puVar57 = (undefined2 *)(puVar58 + -4);
          puVar28 = puVar58 + -4;
          *(undefined2 *)(puVar58 + -4) = unaff_retaddr;
          bVar67 = (byte)puVar61;
          *(byte *)puVar61 = (byte)*puVar61 & bVar67;
          bVar34 = *pbVar32;
          bVar68 = (byte)uVar23;
          bVar66 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar68;
          bVar26 = *pbVar32;
          if (!CARRY1(bVar34,bVar68)) break;
          *(byte *)puVar61 = (byte)*puVar61 + bVar67;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar61 = (byte)*puVar61 + bVar67;
          bVar67 = bVar67 | (byte)*puVar62;
          puVar61 = (uint *)CONCAT31((int3)((uint)puVar61 >> 8),bVar67);
          bVar65 = (POPCOUNT(bVar67) & 1U) == 0;
          while( true ) {
            cVar9 = (char)((uint)pbVar32 >> 8);
            uVar63 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar65) {
              *(byte *)puVar62 = (byte)*puVar62;
              pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(cVar9 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar61 = (byte)*puVar61 + (char)puVar61;
            uVar64 = (undefined2)((uint)pcVar20 >> 0x10);
            bVar66 = (byte)((uint)pcVar20 >> 8) | (byte)*puVar61;
            uVar23 = CONCAT21(uVar64,bVar66);
            *puVar61 = *puVar61 & (uint)puVar61;
            *pbVar32 = *pbVar32 + bVar66;
            uVar22 = (undefined3)((uint)puVar61 >> 8);
            bVar26 = (char)puVar61 - bVar66;
            pcVar20 = (char *)CONCAT31(uVar22,bVar26);
            *pcVar20 = *pcVar20 + bVar26;
            bVar26 = bVar26 | (byte)*puVar62;
            puVar61 = (uint *)CONCAT31(uVar22,bVar26);
            puVar7 = puVar58 + -4;
            if ((POPCOUNT(bVar26) & 1U) != 0) break;
            *(byte *)puVar61 = (byte)*puVar61 + bVar26;
            pcVar20 = (char *)((uint)CONCAT21(uVar64,bVar66 | (byte)*puVar61) << 8);
            *puVar61 = *puVar61 - (int)puVar61;
            *(byte *)puVar62 = (byte)*puVar62;
            pbVar32 = (byte *)CONCAT22(uVar63,CONCAT11(cVar9 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar61 = (byte)*puVar61 + (char)puVar61;
              uVar63 = (undefined2)((uint)puVar62 >> 0x10);
              cVar9 = (char)puVar62;
              bVar26 = (byte)((uint)puVar62 >> 8) | pbVar32[-0x17];
              puVar62 = (uint *)CONCAT22(uVar63,CONCAT11(bVar26,cVar9));
              *(byte *)puVar61 = (byte)*puVar61 + (char)puVar61;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar61 = (byte)*puVar61 + (byte)puVar61;
                uVar22 = (undefined3)((uint)puVar61 >> 8);
                bVar34 = (byte)puVar61 | (byte)*puVar62;
                pcVar17 = (char *)CONCAT31(uVar22,bVar34);
                bVar66 = pbVar32[-0x16];
                *pcVar17 = *pcVar17 + bVar34;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar66 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar17 = *pcVar17 + bVar34;
                pbVar59 = (byte *)CONCAT31(uVar22,bVar34 | (byte)*puVar62);
                while( true ) {
                  *pbVar59 = *pbVar59 + (byte)pbVar59;
                  uVar22 = (undefined3)((uint)pbVar59 >> 8);
                  bVar66 = (byte)pbVar59 | (byte)*puVar62;
                  puVar61 = (uint *)CONCAT31(uVar22,bVar66);
                  if ((POPCOUNT(bVar66) & 1U) != 0) break;
                  *(byte *)puVar61 = (byte)*puVar61 + bVar66;
                  bVar34 = pbVar19[-0x14];
                  *(byte *)puVar61 = (byte)*puVar61 + bVar66;
                  bVar66 = bVar66 | (byte)*puVar62;
                  pcVar17 = (char *)CONCAT31(uVar22,bVar66);
                  bVar67 = pbVar32[-0x15];
                  *pcVar17 = *pcVar17 + bVar66;
                  pcVar20 = (char *)((uint)CONCAT21((short)((uint)pcVar20 >> 0x10),
                                                    (byte)((uint)pcVar20 >> 8) | bVar34 |
                                                    pbVar19[-0x13]) << 8);
                  *pcVar17 = *pcVar17 + bVar66;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar67 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar17 = *pcVar17 + bVar66;
                  pbVar59 = (byte *)CONCAT31(uVar22,bVar66 | (byte)*puVar62);
                  do {
                    do {
                      bVar34 = (byte)pbVar59;
                      *pbVar59 = *pbVar59 + bVar34;
                      cVar30 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar59,
                                                          cVar30));
                      *pbVar59 = bVar34;
                      *pbVar59 = *pbVar59 + bVar34;
                      cVar8 = (char)((uint)pcVar20 >> 8) + *pbVar59;
                      pcVar20 = (char *)((uint)CONCAT21((short)((uint)pcVar20 >> 0x10),cVar8) << 8);
                      uVar22 = (undefined3)((uint)pbVar59 >> 8);
                      bVar34 = bVar34 & *pbVar59;
                      pbVar59 = (byte *)CONCAT31(uVar22,bVar34);
                      bVar66 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar8;
                    } while (SCARRY1(bVar66,cVar8) == (char)*pbVar32 < '\0');
                    *pbVar59 = *pbVar59 + bVar34;
                    bVar34 = bVar34 | (byte)*puVar62;
                    pbVar59 = (byte *)CONCAT31(uVar22,bVar34);
                    if ((POPCOUNT(bVar34) & 1U) == 0) {
                      *pbVar59 = *pbVar59 + bVar34;
                      *pbVar59 = *pbVar59 + bVar34;
                      cVar9 = cVar9 - bVar26;
                      pbVar25 = (byte *)CONCAT31((int3)((uint)puVar62 >> 8),cVar9);
                      *pbVar59 = *pbVar59 + bVar34;
                      bRam0312382b = bRam0312382b | *pbVar25;
                      *(undefined2 *)(puVar58 + -8) = unaff_retaddr;
                      while( true ) {
                        bVar66 = (byte)pbVar59;
                        *pbVar59 = *pbVar59 + bVar66;
                        bRam0312382b = bRam0312382b | (pbVar19 + 0x21b0000)[(int)pbVar59];
                        uVar22 = (undefined3)((uint)pbVar59 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar25 = *pbVar25 + bRam0312382b;
                        pbVar59 = (byte *)CONCAT31(uVar22,bVar66 | *pbVar16);
                      }
                      *pbVar59 = *pbVar59 + bVar66;
                      bVar66 = bVar66 | *pbVar16;
                      pcVar20 = (char *)CONCAT31(uVar22,bVar66);
                      out(*(undefined4 *)pbVar16,(short)pbVar25);
                      *pcVar20 = *pcVar20 + bVar66;
                      uVar64 = CONCAT11(bVar26 | bRam6f0a002b,cVar9);
                      pcVar17 = (char *)CONCAT22(uVar63,uVar64);
                      *pcVar20 = *pcVar20 + bVar66;
                      *pcVar17 = *pcVar17 + bRam0312382b;
                      out(*(undefined4 *)(pbVar16 + (uint)bVar69 * -8 + 4),uVar64);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar30 + *pcVar20);
                  } while (SCARRY1(cVar30,*pcVar20) != (char)(cVar30 + *pcVar20) < '\0');
                }
                uVar15 = *puVar62;
                *(byte *)puVar62 = (byte)*puVar62;
              } while (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar62 < '\0');
              *(byte *)puVar62 = (byte)*puVar62;
              *pcVar20 = *pcVar20 - (char)pbVar32;
              *(byte *)puVar61 = (byte)*puVar61 + bVar66;
              bVar66 = bVar66 | (byte)*puVar62;
              puVar61 = (uint *)CONCAT31(uVar22,bVar66);
              bVar65 = (POPCOUNT(bVar66) & 1U) == 0;
            } while (bVar65);
          }
        }
      } while (SCARRY1(bVar66,bVar68));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar20 >> 8);
    *pbVar19 = *pbVar19 - (char)pbVar32;
  } while( true );
}


