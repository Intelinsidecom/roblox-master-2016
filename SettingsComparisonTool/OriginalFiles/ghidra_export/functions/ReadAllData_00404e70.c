/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404e70
 * Raw Name    : ReadAllData
 * Demangled   : ReadAllData
 * Prototype   : undefined4 ReadAllData(undefined4 param_1, byte * param_2)
 * Local Vars  : cVar32, bVar31, uVar34, cVar33, unaff_ESI, unaff_EBP, unaff_EDI, pbVar35, in_ES, puVar36, in_CF, in_DS, in_AF, bVar37, unaff_retaddr, param_1, param_2, uStack_34, uStack_32, uStack_33, uVar1, uStack_30, cVar3, uVar2, cVar5, bVar4, in_EAX, bVar6, pcVar8, piVar7, pbVar10, piVar9, iVar12, puVar11, uVar14, pcVar13, bVar16, uVar15, pcVar18, puVar17, bVar20, iVar19, bVar22, uVar21, pbVar24, pbVar23, iVar26, pbVar25, cVar28, cVar27, uVar30, puVar29
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall ReadAllData(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined4 in_EAX;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined3 uVar14;
  byte *pbVar10;
  uint *puVar11;
  int iVar12;
  char *pcVar13;
  undefined3 uVar15;
  byte bVar16;
  byte bVar20;
  uint *puVar17;
  char *pcVar18;
  undefined2 uVar21;
  int iVar19;
  byte bVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  char cVar27;
  char cVar28;
  byte bVar31;
  uint *puVar29;
  char cVar32;
  char cVar33;
  undefined2 uVar34;
  uint uVar30;
  char *unaff_EBP;
  undefined4 *unaff_ESI;
  byte *pbVar35;
  uint *unaff_EDI;
  uint *puVar36;
  undefined2 in_ES;
  undefined2 in_DS;
  char in_CF;
  bool bVar37;
  byte in_AF;
  undefined2 unaff_retaddr;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined2 uStack_30;
  
                    /* .NET CLR Managed Code */
  piVar7 = (int *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\x13' + in_CF) + 0x73061314);
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  uVar14 = (undefined3)((uint)param_1 >> 8);
  bVar16 = (byte)param_1 | *param_2;
  pcVar18 = (char *)CONCAT31(uVar14,bVar16);
  *(char *)piVar7 = *(char *)piVar7 + (char)piVar7;
  cVar3 = (char)piVar7 + 'o';
  pcVar8 = (char *)CONCAT31((int3)((uint)piVar7 >> 8),cVar3);
  *pcVar8 = *pcVar8 + cVar3;
  out(*unaff_ESI,(short)param_2);
  bVar22 = *param_2;
  *param_2 = *param_2 + bVar16;
  pcVar8 = pcVar8 + (uint)CARRY1(bVar22,bVar16) + *unaff_EDI;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  *pcVar18 = *pcVar18 + (byte)param_2;
  piVar7 = unaff_ESI + 2;
  out(unaff_ESI[1],(short)param_2);
  *param_2 = *param_2 + bVar16;
  piVar9 = (int *)((uint)pcVar8 | *unaff_EDI);
  bVar31 = (byte)((uint)param_1 >> 8);
  pcVar18[0x390a0000] = pcVar18[0x390a0000] - bVar31;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar31;
  *piVar9 = *piVar9 + (int)piVar9;
  bVar16 = bVar16 | *(byte *)((int)piVar9 + (int)pcVar18);
  puVar17 = (uint *)CONCAT31(uVar14,bVar16);
  *(char *)((int)piVar9 * 2) = *(char *)((int)piVar9 * 2) - bVar31;
  iRam07000000 = CONCAT31(iRam07000000._1_3_,(byte)iRam07000000 + bVar31);
  piVar9 = (int *)((uint)piVar9 | 0x777b02);
  pbVar10 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
  bVar6 = (byte)piVar9;
  bVar22 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar6;
  bVar20 = *pbVar10;
  bVar4 = *pbVar10;
  *(char *)piVar9 = (char)*piVar9;
  uVar14 = (undefined3)((uint)piVar9 >> 8);
  if (bVar4 != 0 && SCARRY1(bVar22,bVar6) == (char)bVar20 < '\0') {
    *(byte *)piVar9 = (char)*piVar9 + bVar6;
    piVar7[(int)unaff_EDI * 2] = (int)(param_2 + (uint)(0xd2 < bVar6) + piVar7[(int)unaff_EDI * 2]);
    return CONCAT31(uVar14,bVar6 + 0x2d);
  }
  *piVar9 = (int)(*piVar9 + (int)piVar9);
  bVar22 = (byte)param_2 | (byte)iRam07000000;
  *piVar7 = (int)(*piVar7 + (int)piVar9);
  *(byte *)piVar9 = (char)*piVar9 - bVar31;
  *(byte *)piVar9 = (char)*piVar9 + bVar6;
  pbVar23 = (byte *)(CONCAT31((int3)((uint)param_2 >> 8),bVar22) - iRam07000000);
  puVar36 = (uint *)CONCAT31(uVar14,bVar6 + 6);
  piVar9 = (int *)((int)piVar7 * 2 + 0x7000000);
  *piVar9 = (int)puVar36 + (uint)(0xf9 < bVar6) + *piVar9;
  *(byte *)puVar17 = (byte)*puVar17 ^ bVar6 + 6;
  *pbVar23 = *pbVar23 + bVar16;
  pbVar10 = (byte *)(unaff_ESI + 3);
  uVar21 = SUB42(pbVar23,0);
  out(*piVar7,uVar21);
  *puVar17 = *puVar17 ^ (uint)puVar36;
  *pbVar23 = *pbVar23 + bVar16;
  puVar29 = (uint *)(0x7000000 - iRam07000000);
  *(uint *)((int)unaff_EDI + 0x31) = *(uint *)((int)unaff_EDI + 0x31) | (uint)unaff_EBP;
  *puVar36 = *puVar36 + (int)puVar36;
  puVar17 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar31 | (byte)*puVar29,bVar16)
                            );
  *(byte **)(pbVar23 + 0x6e) = pbVar10 + *(int *)(pbVar23 + 0x6e);
  piVar7 = (int *)((uint)puVar36 | *puVar36);
  bVar20 = (byte)puVar29;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar20;
  bVar22 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar16;
  if (CARRY1(bVar22,bVar16)) {
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    bVar22 = pbVar23[0x11];
    uVar34 = (undefined2)((uint)puVar29 >> 0x10);
    out(*(undefined4 *)pbVar10,uVar21);
    puVar17 = (uint *)((int)puVar17 + 1);
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    bVar31 = (byte)((uint)puVar29 >> 8) | bVar22 | *pbVar23;
    pcVar8 = (char *)((int)piVar7 + -0x21000001);
    bVar22 = (byte)pcVar8 | 0x11;
    uVar14 = (undefined3)((uint)pcVar8 >> 8);
    cVar3 = bVar22 - 7;
    pcVar18 = (char *)CONCAT31(uVar14,cVar3);
    *unaff_EDI = (uint)(pcVar18 + (uint)(bVar22 < 7) + *unaff_EDI);
    pbVar10 = (byte *)(unaff_ESI + 5);
    out(unaff_ESI[4],uVar21);
    pbVar23 = pbVar23 + 1;
    *pcVar18 = *pcVar18 + cVar3;
    bVar6 = (byte)((uint)pcVar8 >> 8);
    bVar16 = bVar20 | bVar6;
    bVar4 = cVar3 - *pcVar18;
    bVar22 = *(byte *)puVar17;
    *(byte *)puVar17 = *(byte *)puVar17 + bVar4;
    *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4 + CARRY1(bVar22,bVar4)
    ;
    *pbVar23 = *pbVar23 + bVar4;
    *pbVar10 = *pbVar10 + bVar16;
    bVar22 = (byte)((uint)pbVar23 >> 8);
    *(byte *)puVar17 = *(byte *)puVar17 + bVar4 + CARRY1((byte)pbVar23,bVar22);
    piVar7 = (int *)CONCAT31(uVar14,bVar4);
    *(byte *)piVar7 = (char)*piVar7 + bVar4;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11(bVar22 + bVar6,(byte)pbVar23 + bVar22));
    puVar29 = (uint *)CONCAT22(uVar34,CONCAT11(bVar31 + *(char *)(CONCAT31((int3)(CONCAT22(uVar34,
                                                  CONCAT11(bVar31,bVar20)) >> 8),bVar16) + 0x76),
                                               bVar16));
    in_ES = unaff_retaddr;
code_r0x00404fa4:
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    pcVar8 = (char *)(CONCAT31((int3)((uint)piVar7 >> 8),(char)piVar7 + '(') ^ *puVar17);
    cVar28 = (char)puVar17;
    *pbVar23 = *pbVar23 + cVar28;
    uVar21 = (undefined2)((uint)puVar29 >> 0x10);
    cVar27 = (char)puVar29;
    cVar32 = (char)((uint)puVar29 >> 8) + *(char *)((int)puVar29 + 0x75);
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar3 = (char)pcVar8 + 'o';
    pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar3);
    *pcVar8 = *pcVar8 + cVar3;
    cVar33 = (char)((uint)puVar17 >> 8);
    *unaff_EBP = *unaff_EBP - cVar33;
    pbVar23[1] = pbVar23[1] + cVar28;
    pcVar8 = pcVar8 + -0x757b021b;
    cVar3 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar3;
    uVar14 = (undefined3)((uint)pcVar8 >> 8);
    cVar5 = cVar3 + 'o';
    pcVar8 = (char *)CONCAT31(uVar14,cVar5);
    pbVar24 = pbVar23 + 2;
    *pcVar8 = *pcVar8 + cVar5;
    iVar12 = CONCAT22(uVar21,CONCAT11(cVar32 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar32,cVar27)) +
                                                        0x76),cVar27));
    *pcVar8 = *pcVar8 + cVar5;
    pcVar8 = (char *)CONCAT31(uVar14,cVar3 + -0x22);
    puVar36 = (uint *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = *pbVar10;
    *pcVar8 = *pcVar8 + cVar3 + -0x22;
    *(byte *)((int)puVar17 + (int)pcVar8) =
         *(byte *)((int)puVar17 + (int)pcVar8) - (char)((uint)pbVar24 >> 8);
    *pbVar24 = *pbVar24 + cVar28;
    bVar20 = cVar33 - pbVar23[4];
    pbVar35 = pbVar10 + 5;
    out(*(undefined4 *)(pbVar10 + 1),(short)pbVar24);
    puVar29 = (uint *)((uint)(pcVar8 + *(int *)(pcVar8 + iVar12)) ^ 0x280a0001);
    *(byte *)puVar29 = (byte)*puVar29 << 1 | (char)(byte)*puVar29 < '\0';
    *pbVar35 = *pbVar35 + (char)puVar29;
    pbVar35 = pbVar35 + *(int *)(pbVar23 + -0x5c);
    pbVar10 = (byte *)((uint)puVar29 | *puVar29);
    *pbVar35 = *pbVar35 + (char)pbVar10;
    puVar29 = (uint *)CONCAT31((int3)((uint)iVar12 >> 8),cVar27 - (char)pbVar24);
    bVar22 = *pbVar10;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar20 + *pbVar10,cVar28));
    iVar12 = *(int *)pbVar10;
    *pbVar24 = *pbVar24 + cVar28;
    cVar3 = (char)(pbVar10 + (uint)CARRY1(bVar20,bVar22) + iVar12) + 'r';
    puVar11 = (uint *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar20,bVar22) + iVar12) >> 8),
                               cVar3);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),CONCAT11(10,(char)pbVar24));
    *(char *)(puVar11 + 10) = (char)puVar11[10] + '\n';
    *pbVar35 = *pbVar35 + cVar3;
    pbVar10 = pbVar35 + *(int *)(pbVar23 + -0x5e);
    uVar30 = *puVar11;
    cVar3 = (char)((uint)puVar11 | uVar30);
    *pbVar10 = *pbVar10 + cVar3;
    uVar14 = (undefined3)(((uint)puVar11 | uVar30) >> 8);
    cVar5 = cVar3 + (char)*puVar29;
    puVar11 = (uint *)CONCAT31(uVar14,cVar5);
    if (SCARRY1(cVar3,(char)*puVar29) == cVar5 < '\0') goto code_r0x00405090;
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    piVar7 = (int *)CONCAT31(uVar14,cVar5 + '\x02');
    unaff_EDI = puVar36;
  }
  else {
    out(2,(char)piVar7);
    if ((POPCOUNT(*pbVar23) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar14 = (undefined3)((uint)piVar7 >> 8);
  cVar3 = (char)piVar7 + '}';
  pbVar35 = (byte *)CONCAT31(uVar14,cVar3);
  pbVar23[(int)pbVar35] = pbVar23[(int)pbVar35] + cVar3;
  pbVar23[0x280a0000] = pbVar23[0x280a0000] - (char)((uint)piVar7 >> 8);
  bVar22 = (byte)puVar17 & 7;
  *pbVar35 = *pbVar35 << bVar22 | *pbVar35 >> 8 - bVar22;
  *pbVar10 = *pbVar10 + cVar3;
  cVar28 = (char)puVar29 - *pbVar10;
  uVar21 = (undefined2)((uint)puVar29 >> 0x10);
  cVar33 = (char)((uint)puVar29 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar29 >> 8),cVar28) + 0x7c);
  pcVar8 = (char *)CONCAT22(uVar21,CONCAT11(cVar33,cVar28));
  *pbVar35 = *pbVar35 + cVar3;
  bVar20 = (char)piVar7 + 0xa7U & *pbVar23;
  puVar36 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x7c));
  *(char *)CONCAT31(uVar14,bVar20) = *(char *)CONCAT31(uVar14,bVar20) + bVar20;
  bVar20 = bVar20 + 0x2a;
  pbVar35 = (byte *)CONCAT31(uVar14,bVar20);
  *pbVar35 = *pbVar35 + bVar20;
  *pcVar8 = *pcVar8 + cVar28;
  *pbVar23 = *pbVar23 ^ bVar20;
  *pcVar8 = *pcVar8 + bVar20;
  bVar22 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar20;
  cVar3 = (bVar20 - *pbVar35) - CARRY1(bVar22,bVar20);
  *(byte *)puVar17 = (byte)*puVar17 + (byte)pbVar23;
  cVar33 = cVar33 + pcVar8[0x7b];
  *(char *)CONCAT31(uVar14,cVar3) = *(char *)CONCAT31(uVar14,cVar3) + cVar3;
  pcVar8 = (char *)CONCAT31(uVar14,cVar3 + 'o');
  *pcVar8 = *pcVar8 + cVar3 + 'o';
  pcVar8 = pcVar8 + 0x2ed7fde6;
  cVar5 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar5;
  cVar3 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar33,cVar28)) + 0x7b);
  *pcVar8 = *pcVar8 + cVar5;
  piVar7 = (int *)(CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + 'o') + 0x6f060000);
  *piVar7 = *piVar7 + (int)piVar7;
  uVar15 = (undefined3)((uint)pbVar23 >> 8);
  bVar20 = (byte)pbVar23 | *pbVar10;
  pbVar25 = (byte *)CONCAT31(uVar15,bVar20);
  uVar30 = CONCAT22(uVar21,CONCAT11(cVar33 + cVar3,cVar28)) | (uint)pbVar10;
  uVar14 = (undefined3)((uint)piVar7 >> 8);
  bVar22 = (byte)piVar7 | *pbVar25;
  pbVar24 = (byte *)CONCAT31(uVar14,bVar22);
  cVar3 = (byte)puVar17 - bVar20;
  puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),cVar3);
  *pbVar24 = *pbVar24 + bVar22;
  pbVar35 = pbVar10 + 4;
  out(*(undefined4 *)pbVar10,(short)pbVar25);
  *pbVar24 = bVar22;
  *pbVar25 = *pbVar25 + cVar3;
  pbVar10 = pbVar10 + 8;
  out(*(undefined4 *)pbVar35,(short)pbVar25);
  *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
  puVar29 = (uint *)(CONCAT31((int3)(uVar30 >> 8),(char)uVar30 - (char)((uint)pbVar23 >> 8)) |
                    (uint)pbVar10);
  pbVar23 = (byte *)CONCAT31(uVar15,(bVar20 | *pbVar10) + (byte)*puVar36);
  cVar3 = bVar22 - (byte)*puVar36;
  puVar11 = (uint *)CONCAT31(uVar14,cVar3 - *(char *)CONCAT31(uVar14,cVar3));
code_r0x00405090:
  *puVar11 = (uint)(pbVar23 + *puVar11);
  cVar3 = (char)puVar11;
  *(byte *)puVar11 = (byte)*puVar11 + cVar3;
  *(byte *)puVar11 = (byte)*puVar11 + cVar3;
  *(byte *)puVar11 = (byte)*puVar11 + cVar3;
  *puVar17 = *puVar17 - (int)unaff_EBP;
  bVar22 = *pbVar10;
  bVar20 = (byte)pbVar23;
  *pbVar10 = *pbVar10 + bVar20;
  *(byte *)puVar11 = (byte)*puVar11 + cVar3 + CARRY1(bVar22,bVar20);
  *(byte *)puVar17 = (byte)*puVar17 + cVar3;
  uVar30 = *puVar29;
  *(char *)puVar29 = (char)*puVar29 + 'r';
  *(char *)puVar29 = (char)*puVar29;
  cVar3 = (char)((uint)pbVar23 >> 8);
  if (SCARRY1((char)uVar30,'r')) {
    pbVar10 = pbVar10 + *(int *)(pbVar23 + -10);
  }
  else {
    while( true ) {
      *pbVar10 = *pbVar10 + (char)puVar11;
      uVar14 = (undefined3)((uint)puVar11 >> 8);
      cVar5 = (char)puVar11 + (char)*puVar29;
      pcVar8 = (char *)CONCAT31(uVar14,cVar5);
      puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                 CONCAT11((char)((uint)puVar29 >> 8) +
                                          *(char *)((int)puVar29 + 0x7b),(char)puVar29));
      *pcVar8 = *pcVar8 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar30 = CONCAT31(uVar14,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar30;
      piVar7 = (int *)CONCAT22((short)(uVar30 >> 0x10),
                               CONCAT11((char)((uint)puVar11 >> 8) + in_AF,bVar4));
      *piVar7 = *piVar7 + (int)piVar7;
      uVar14 = (undefined3)((uint)piVar7 >> 8);
      bVar4 = bVar4 | *(byte *)(piVar7 + 0x354a);
      bVar4 = bVar4 - *(char *)CONCAT31(uVar14,bVar4);
      pbVar35 = (byte *)CONCAT31(uVar14,bVar4);
      bVar22 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar4;
      pbVar10 = pbVar10 + (-(uint)CARRY1(bVar22,bVar4) - *(int *)pbVar35);
      puVar11 = (uint *)(pbVar35 + 0xfc00);
      *pbVar23 = *pbVar23 + cVar3;
      uVar30 = *puVar11;
      bVar22 = (byte)puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + bVar22;
      uVar2 = (uint)CARRY1((byte)uVar30,bVar22);
      uVar30 = *puVar29;
      uVar1 = *puVar29;
      *puVar29 = (uint)((byte *)(uVar1 + (int)puVar11) + uVar2);
      if (!CARRY4(uVar30,(uint)puVar11) && !CARRY4(uVar1 + (int)puVar11,uVar2)) break;
      *(byte *)puVar11 = (byte)*puVar11 + bVar22;
    }
  }
  uVar30 = (uint)puVar11 | *puVar11;
  uVar21 = SUB42(pbVar23,0);
  *pbVar10 = *pbVar10 + (char)uVar30;
  piVar7 = (int *)(uVar30 + 0xc1872);
  if (SCARRY4(uVar30,0xc1872)) {
    cVar5 = (char)piVar7;
    *(char *)piVar7 = *(char *)piVar7 + cVar5;
    *pbVar23 = *pbVar23 + cVar5;
    *(char *)piVar7 = *(char *)piVar7 + cVar5;
    *(char *)puVar29 = (char)*puVar29 + (char)puVar17;
    *(char *)piVar7 = *(char *)piVar7 + cVar5;
    *(char *)((int)piVar7 * 2) = *(char *)((int)piVar7 * 2) + bVar20;
    pbVar35 = pbVar10;
    goto code_r0x00405117;
  }
  do {
    bVar22 = *pbVar10;
    bVar20 = (byte)piVar7;
    *pbVar10 = *pbVar10 + bVar20;
    if (CARRY1(bVar22,bVar20)) {
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      uVar14 = (undefined3)((uint)puVar17 >> 8);
      bVar22 = (byte)puVar17 | bRam396f1609;
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      puVar17 = (uint *)CONCAT31(uVar14,bVar22 | *(byte *)CONCAT31(uVar14,bVar22));
      uVar14 = (undefined3)((uint)piVar7 >> 8);
      bVar20 = bVar20 | *pbVar23;
      pcVar8 = (char *)CONCAT31(uVar14,bVar20);
      if ((POPCOUNT(bVar20) & 1U) != 0) {
        pbVar35 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,uVar21);
        uVar30 = CONCAT22((short)((uint)piVar7 >> 0x10),(ushort)bVar20);
        *pbVar35 = *pbVar35 + bVar20;
        pcVar8 = (char *)(uVar30 | 8);
        cVar5 = (char)((uint)puVar29 >> 8) + *(char *)((int)puVar29 + 0x7a);
        puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar5,(char)puVar29));
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar3 = (char)pcVar8 + 'o';
        piVar7 = (int *)CONCAT31((int3)(uVar30 >> 8),cVar3);
        *(char *)piVar7 = (char)*piVar7 + cVar3;
        *(byte *)puVar17 = (byte)*puVar17 + 1;
        pbVar10 = pbVar10 + 8;
        out(*(undefined4 *)pbVar35,uVar21);
        pbVar23 = (byte *)((uint)pbVar23 ^ uRam08122c04);
        iVar12 = CONCAT31((int3)((uint)(*piVar7 * 0x17070600) >> 8),2);
        *(char *)(iVar12 * 2) = *(char *)(iVar12 * 2) - cVar5;
        do {
          bVar22 = (byte)iVar12;
          *pbVar10 = *pbVar10 + bVar22;
          bVar37 = CARRY1(bVar22,(byte)*puVar29);
          uVar14 = (undefined3)((uint)iVar12 >> 8);
          cVar3 = bVar22 + (byte)*puVar29;
          pbVar35 = (byte *)CONCAT31(uVar14,cVar3);
          uVar21 = in_DS;
          uVar34 = uStack_30;
          if (SCARRY1(bVar22,(byte)*puVar29) == cVar3 < '\0') goto GenerateStatusText;
          *pbVar35 = *pbVar35 + cVar3;
          uVar30 = CONCAT31(uVar14,cVar3 + '\'') + 0x1ebd9f3;
          uStack_34 = (undefined1)in_ES;
          uStack_33 = (undefined1)((ushort)in_ES >> 8);
          piVar7 = (int *)(uVar30 ^ 0x73060000);
          puVar17 = (uint *)((int)puVar17 + 1);
          *piVar7 = (int)(*piVar7 + (int)piVar7);
          puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                     CONCAT11((byte)((uint)puVar29 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar29));
          cVar3 = (char)uVar30;
          *(char *)piVar7 = (char)*piVar7 + cVar3;
          uVar30 = CONCAT31((int3)((uint)piVar7 >> 8),cVar3 + '\x02');
          bVar37 = 0xd9f2d2da < uVar30;
          iVar12 = uVar30 + 0x260d2d25;
          pcVar8 = unaff_EBP;
          do {
            uVar14 = (undefined3)((uint)iVar12 >> 8);
            bVar20 = (char)iVar12 + -2 + bVar37;
            pbVar35 = (byte *)CONCAT31(uVar14,bVar20);
            bVar22 = *pbVar35;
            *pbVar35 = *pbVar35 + bVar20;
            bVar4 = (byte)puVar29;
            uStack_30 = in_ES;
            if (CARRY1(bVar22,bVar20)) {
              *pbVar35 = *pbVar35 + bVar20;
              puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                         CONCAT11((byte)((uint)puVar29 >> 8) | pcVar8[0x7f],bVar4));
              *pbVar35 = *pbVar35 + bVar20;
              pbVar35 = (byte *)CONCAT31(uVar14,bVar20 + 0x2a);
              *pbVar35 = *pbVar35 + bVar20 + 0x2a;
              *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar23;
              uVar21 = in_DS;
              while( true ) {
                in_DS = uVar21;
                bVar20 = (byte)pbVar35;
                *pbVar23 = *pbVar23 ^ bVar20;
                *pbVar23 = *pbVar23 + (char)puVar29;
                *pbVar35 = *pbVar35 + bVar20;
                *(byte *)puVar29 = (byte)*puVar29 + (char)((uint)pbVar23 >> 8);
                bVar22 = *pbVar35;
                *pbVar35 = *pbVar35 + bVar20;
                uVar30 = *puVar29;
                uVar1 = *puVar29;
                *puVar29 = (uint)(pbVar35 + uVar1 + CARRY1(bVar22,bVar20));
                uVar14 = (undefined3)((uint)pbVar35 >> 8);
                if (CARRY4(uVar30,(uint)pbVar35) ||
                    CARRY4((uint)(pbVar35 + uVar1),(uint)CARRY1(bVar22,bVar20))) break;
                *pbVar10 = *pbVar10 + bVar20;
                pcVar18 = (char *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                           CONCAT11((char)((uint)puVar17 >> 8) + *pbVar35,
                                                    (char)puVar17));
                *pbVar10 = *pbVar10 + bVar20;
                piVar7 = (int *)CONCAT31(uVar14,bVar20 | (byte)*puVar29);
                pbVar35 = pbVar10;
                while( true ) {
                  pbVar10 = pbVar35 + 4;
                  out(*(undefined4 *)pbVar35,(short)pbVar23);
                  pbVar23 = pbVar23 + 1;
                  *piVar7 = (int)(*piVar7 + (int)piVar7);
                  bVar4 = (byte)((uint)pcVar18 >> 8) | *pbVar23;
                  uVar14 = (undefined3)((uint)piVar7 >> 8);
                  bVar20 = (byte)piVar7 ^ *pbVar23;
                  pcVar13 = (char *)CONCAT31(uVar14,bVar20);
                  cRam282b0000 = cRam282b0000 - bVar4;
                  *pcVar13 = *pcVar13 + bVar20;
                  unaff_EBP = pcVar8 + -*(int *)pbVar23;
                  uStack_34 = (undefined1)in_DS;
                  uStack_33 = (undefined1)((ushort)in_DS >> 8);
                  bVar22 = *(byte *)((int)puVar36 + 0x17);
                  *pcVar13 = *pcVar13 + bVar20;
                  puVar17 = (uint *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                                             CONCAT11(bVar4 + bVar22 | *pbVar23,(char)pcVar18));
                  *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
                  *(byte *)((int)pcVar13 * 2) = *(byte *)((int)pcVar13 * 2) ^ bVar20;
                  in_AF = 9 < (bVar20 & 0xf) | in_AF;
                  bVar20 = bVar20 + in_AF * -6;
                  pbVar35 = (byte *)CONCAT31(uVar14,bVar20 + (0x9f < bVar20 | in_AF * (bVar20 < 6))
                                                             * -0x60);
                  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
                  *(char *)((int)pbVar35 * 2) =
                       *(char *)((int)pbVar35 * 2) + (char)((uint)pbVar23 >> 8);
                  bVar37 = CARRY1((byte)*puVar17,(byte)pbVar23);
                  *(byte *)puVar17 = (byte)*puVar17 + (byte)pbVar23;
                  uVar21 = in_DS;
                  uVar34 = in_ES;
GenerateStatusText:
                  in_DS = uVar34;
                  pcVar8 = unaff_EBP;
                  uStack_30 = in_DS;
                  if (!bVar37) break;
                  *pbVar35 = *pbVar35 + (char)pbVar35;
                  iVar12 = CONCAT31((int3)((uint)puVar17 >> 8),(byte)puVar17 | *pbVar23);
                  uVar21 = (undefined2)((uint)puVar29 >> 0x10);
                  cVar28 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x7d);
                  *pbVar35 = *pbVar35 + (char)pbVar35;
                  *(byte *)puVar36 = (byte)*puVar36 - (char)((uint)puVar17 >> 8);
                  iVar12 = iVar12 - *(int *)(iVar12 + 0xb0a0000);
                  cVar3 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar28,(char)puVar29)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar10,(short)pbVar23);
                  pbVar23 = (byte *)CONCAT22(uStack_32,CONCAT11(uStack_33,uStack_34));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar35 = pbVar10 + 8;
                  out(*(undefined4 *)(pbVar10 + 4),CONCAT11(uStack_33,uStack_34));
                  pcVar8 = unaff_EBP + 1;
                  cVar5 = (char)iVar12;
                  pcVar18 = (char *)CONCAT22((short)((uint)iVar12 >> 0x10),
                                             CONCAT11((byte)((uint)iVar12 >> 8) |
                                                      *(byte *)((int)puVar36 + 0x46),cVar5));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_33,uStack_34);
                  uVar14 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar35,0xf0)) >> 8);
                  piVar7 = (int *)CONCAT31(uVar14,0x5f);
                  puVar36 = (uint *)((int)puVar36 + 1);
                  *piVar7 = (int)(*piVar7 + (int)piVar7);
                  puVar29 = (uint *)CONCAT22(uVar21,CONCAT11(cVar28 + cVar3 | pbVar10[-0x78],
                                                             (char)puVar29));
                  *(char *)piVar7 = (char)*piVar7 + '_';
                  puVar17 = (uint *)CONCAT31(uVar14,0x8c);
                  *(byte **)(pbVar35 + (int)puVar36 * 8) =
                       pbVar23 + *(int *)(pbVar35 + (int)puVar36 * 8);
                  bVar22 = *pbVar35;
                  *pbVar35 = *pbVar35 + 0x8c;
                  if (bVar22 < 0x74) {
                    *pbVar23 = *pbVar23 + cVar5;
                    *(byte *)puVar29 = (byte)*puVar29 >> 1;
                    *(char *)puVar17 = (char)*puVar17 + -0x74;
                    *puVar17 = (uint)(pcVar8 + *puVar17);
                    *puVar17 = *puVar17 << 1 | (uint)((int)*puVar17 < 0);
                    *pbVar23 = *pbVar23 + cVar5;
                    unaff_EBP[2] = unaff_EBP[2] - cVar5;
                    *pbVar23 = *pbVar23 + cVar5;
                    pbVar10 = (byte *)CONCAT31(uVar14,0x83);
                    puVar17 = puVar29;
                    goto code_r0x00405312;
                  }
                  *puVar17 = (uint)(*puVar17 + (int)puVar17);
                  piVar7 = (int *)(CONCAT31(uVar14,(byte)puVar17[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar17[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar7 = (int *)((int)piVar7 + *(int *)pbVar35);
                }
              }
              *pbVar23 = *pbVar23 + bVar20;
              *(byte *)puVar29 = (byte)*puVar29 - (char)pbVar23;
              *pbVar35 = *pbVar35 + bVar20;
              pbVar35 = (byte *)CONCAT31(uVar14,bVar20 | (byte)*puVar29);
            }
            else {
              cVar3 = (char)puVar17;
              *pbVar23 = *pbVar23 + cVar3;
              *(byte **)pbVar35 = pbVar23 + *(int *)pbVar35;
              *pbVar35 = *pbVar35 + bVar20;
              bVar20 = bVar20 + *pbVar35;
              pbVar35 = (byte *)CONCAT31(uVar14,bVar20);
              if (-1 < (char)bVar20) {
                *(byte *)puVar29 = (byte)*puVar29 + bVar4;
                out(*(undefined4 *)pbVar10,(short)pbVar23);
                pbVar23 = pbVar23 + 1;
                *pbVar35 = *pbVar35 + bVar20;
                puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),
                                           bVar4 | (byte)((uint)iVar12 >> 8));
                cVar5 = bVar20 - (byte)*puVar17;
                pcVar18 = (char *)CONCAT31(uVar14,cVar5);
                *pcVar18 = *pcVar18 + cVar5 + (bVar20 < (byte)*puVar17);
                *pbVar23 = *pbVar23 + cVar5;
                pcVar18 = (char *)((int)pcVar18 * 2 + 0x79);
                *pcVar18 = *pcVar18 + (char)((uint)pbVar23 >> 8);
                pbVar35 = (byte *)in((short)pbVar23);
                pbVar10 = pbVar10 + 4;
              }
              *pbVar10 = *pbVar10 + cVar3;
              *pbVar35 = *pbVar35 + (char)pbVar35;
              *pbVar35 = *pbVar35 + (char)pbVar35;
              uStack_34 = (undefined1)in_DS;
              uStack_33 = (undefined1)((ushort)in_DS >> 8);
              bVar22 = *pbVar35;
              bVar6 = (byte)((uint)puVar17 >> 8);
              bVar4 = bVar6 + *pbVar35;
              iVar12 = *(int *)pbVar35;
              *pbVar23 = *pbVar23 + cVar3;
              bVar20 = (char)(pbVar35 + (uint)CARRY1(bVar6,bVar22) + iVar12) - (byte)*puVar29;
              pbVar35 = (byte *)CONCAT31((int3)((uint)(pbVar35 + (uint)CARRY1(bVar6,bVar22) + iVar12
                                                      ) >> 8),bVar20);
              *(byte *)puVar29 = (byte)*puVar29 ^ bVar20;
              *pcVar8 = *pcVar8 + (char)puVar29;
              *pbVar35 = *pbVar35 + bVar20;
              *pbVar35 = *pbVar35 + bVar20;
              *pbVar35 = *pbVar35 + bVar20;
              puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                         CONCAT11(bVar4 + *pbVar35,cVar3));
              pbVar35 = pbVar35 + (uint)CARRY1(bVar4,*pbVar35) + *(int *)pbVar35;
              *pbVar23 = *pbVar23 + cVar3;
              pbVar10 = pbVar10 + *(int *)(pbVar23 + 0x3e);
            }
            *pbVar10 = *pbVar10 + (char)pbVar35;
            cVar3 = (char)pbVar35 + 'r';
            pbVar10 = pbVar10 + -1;
            uVar30 = CONCAT31((int3)((uint)pbVar35 >> 8),cVar3);
            *pbVar10 = *pbVar10 + cVar3;
            bVar37 = 0xfff38f8d < uVar30;
            iVar12 = uVar30 + 0xc7072;
            unaff_EBP = pcVar8;
          } while (SCARRY4(uVar30,0xc7072));
        } while( true );
      }
      *pcVar8 = *pcVar8 + bVar20;
      bVar20 = bVar20 + 0x6f;
      pbVar35 = (byte *)CONCAT31(uVar14,bVar20);
      bVar22 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar20;
      uVar14 = (undefined3)
               ((uint)(pbVar35 + (uint)CARRY1(bVar22,bVar20) + *(int *)((int)puVar17 + (int)pbVar23)
                      ) >> 8);
      cVar5 = (char)(pbVar35 + (uint)CARRY1(bVar22,bVar20) + *(int *)((int)puVar17 + (int)pbVar23))
              + 'E';
      pcVar8 = (char *)CONCAT31(uVar14,cVar5);
      *pcVar8 = *pcVar8 + cVar5;
      cVar5 = cVar5 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar14,cVar5);
      *pcVar8 = *pcVar8 + cVar5;
      puVar11 = (uint *)CONCAT31(uVar14,cVar5 + *pcVar8);
      *(char *)puVar11 = (char)*puVar11 + cVar5 + *pcVar8;
      pbVar35 = (byte *)((uint)puVar11 | *puVar11);
      bVar22 = *pbVar35;
      bVar20 = (byte)pbVar35;
      *pbVar35 = *pbVar35 + bVar20;
      piVar7 = (int *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar20 + CARRY1(bVar22,bVar20));
      pbVar35 = pbVar10;
code_r0x00405117:
      *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
      puVar29 = (uint *)((int)puVar29 - *puVar29);
      pbVar10 = pbVar35 + 4;
      out(*(undefined4 *)pbVar35,uVar21);
    }
    *pbVar23 = *pbVar23 + (char)puVar17;
    bVar37 = puVar29 < (uint *)*piVar7;
    puVar29 = (uint *)((int)puVar29 - *piVar7);
    bVar22 = (byte)((uint)puVar17 >> 8);
    *(byte *)((int)puVar36 + 0x39) = (*(byte *)((int)puVar36 + 0x39) - bVar22) - bVar37;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    uVar30 = *puVar29;
    *(int *)((int)puVar36 + 0x39) = *(int *)((int)puVar36 + 0x39) - (int)unaff_EBP;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11(bVar22 | (byte)uVar30 | (byte)*puVar29,(char)puVar17));
    *(char *)(piVar7 + 10) = (char)piVar7[10] + cVar3;
  } while( true );
code_r0x004052ee:
  *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
  bVar22 = (char)piVar7 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),bVar22);
  *pbVar10 = *pbVar10 ^ bVar22;
  *(byte *)puVar29 = (byte)*puVar29 + (char)((uint)pcVar18 >> 8);
  bVar22 = *pbVar23;
  *pbVar23 = *pbVar23 + (byte)pcVar18;
  piVar7 = (int *)(((uint)pbVar10 | 0x1496f09) + *puVar36 + (uint)CARRY1(bVar22,(byte)pcVar18));
  pbVar24 = pbVar35 + 4;
  out(*(undefined4 *)pbVar35,(short)pbVar23);
  pbVar25 = pbVar23 + -1;
  *piVar7 = *piVar7 + (int)piVar7;
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | (byte)*puVar29);
  cVar3 = (char)piVar7 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),cVar3);
  puVar17 = puVar29;
  pbVar35 = pbVar24;
  if ((POPCOUNT(cVar3) & 1U) != 0) {
    *pbVar23 = *pbVar23 - (char)((uint)pbVar25 >> 8);
    *pbVar10 = *pbVar10 + cVar3;
code_r0x00405396:
    bVar22 = *pbVar10;
    bVar20 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar20;
    *(byte **)pbVar24 = pbVar10 + (uint)CARRY1(bVar22,bVar20) + *(int *)pbVar24;
    out(*(undefined4 *)pbVar24,(short)pbVar23);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar8 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                              CONCAT11((byte)((uint)pbVar10 >> 8) | pbVar24[4],bVar20));
    *(char **)((int)puVar36 + -1) = pcVar8 + *(int *)((int)puVar36 + -1);
    out(*(undefined4 *)(pbVar24 + 4),(short)pbVar23);
    *pcVar8 = *pcVar8 + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar7 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar29 = (uint *)((int)puVar17 + -1);
  *piVar7 = *piVar7 + (int)piVar7;
  uVar14 = (undefined3)((uint)pbVar23 >> 8);
  piVar7 = (int *)((int)piVar7 + 0x1b7e);
  bVar4 = (byte)pbVar23 | *(byte *)puVar29 | *(byte *)puVar29;
  iRam04115f2c = iRam04115f2c + (int)piVar7;
  out(*(undefined4 *)pbVar35,(short)CONCAT31(uVar14,bVar4));
  *piVar7 = *piVar7 + (int)piVar7;
  bVar4 = bVar4 | (byte)piVar7;
  iVar26 = CONCAT31(uVar14,bVar4);
  pbVar10 = (byte *)((int)piVar7 - *piVar7);
  cVar3 = (char)pbVar10;
  *pcVar18 = *pcVar18 + cVar3;
  cVar5 = (char)pcVar18 - bVar4;
  *pbVar10 = *pbVar10 + cVar3;
  uVar21 = (undefined2)((uint)pcVar18 >> 0x10);
  bVar20 = (byte)((uint)pcVar18 >> 8) | *pbVar10;
  pcVar8 = pcVar8 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar22 = *(byte *)(CONCAT22(uVar21,CONCAT11(bVar20,cVar5)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar8;
  *pbVar10 = *pbVar10 + cVar3;
  bVar22 = bVar20 | bVar22 | *(byte *)puVar29;
  iVar19 = CONCAT22(uVar21,CONCAT11(bVar22,cVar5));
  pbVar25 = (byte *)((uint)(pbVar35 + 4) ^ *(uint *)(iVar26 + -0x43));
  iVar12 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar12,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar3;
  }
  pbVar23 = pbVar10 + 0x5674;
  puVar36 = (uint *)((int)puVar36 +
                    (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar25 + -0x7f)));
  bVar20 = (byte)pbVar23;
  *pbVar23 = *pbVar23 + bVar20;
  uVar15 = (undefined3)((uint)pbVar23 >> 8);
  bVar6 = bVar20 + 0x2d;
  piVar7 = (int *)CONCAT31(uVar15,bVar6);
  *(uint *)(pbVar25 + (int)puVar36 * 8) =
       *(int *)(pbVar25 + (int)puVar36 * 8) + iVar26 + (uint)(0xd2 < bVar20);
  bVar20 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar6;
  if (!CARRY1(bVar20,bVar6)) {
    do {
      pbVar23 = (byte *)(iVar26 + 1);
      bVar20 = (byte)piVar7;
      *(byte *)piVar7 = (char)*piVar7 + bVar20;
      bVar4 = (byte)((uint)piVar7 >> 8);
      bVar6 = (byte)puVar29 | bVar4;
      puVar17 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),bVar6);
      out(*(undefined4 *)pbVar25,(short)pbVar23);
      *(byte *)piVar7 = (char)*piVar7 + bVar20;
      uVar21 = (undefined2)((uint)iVar19 >> 0x10);
      cVar3 = (char)iVar19;
      pbVar10 = (byte *)CONCAT22(uVar21,CONCAT11((byte)((uint)iVar19 >> 8) | *pbVar23,cVar3));
      bVar22 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar20;
      *(byte *)piVar7 = (char)*piVar7 + bVar20 + CARRY1(bVar22,bVar20);
      *pbVar23 = *pbVar23 + bVar20;
      *(byte *)puVar36 = (byte)*puVar36 + bVar4;
      *(int *)((int)piVar7 * 2) = *(int *)((int)piVar7 * 2) + CONCAT22(uVar21,CONCAT11(0x1c,cVar3));
      *(byte *)piVar7 = (char)*piVar7 + bVar20;
      cVar5 = (char)pbVar23;
      *(byte *)puVar17 = (byte)*puVar17 + cVar5;
      *(byte *)((int)piVar7 * 2) = *(byte *)((int)piVar7 * 2) ^ bVar20;
      *(byte *)piVar7 = (char)*piVar7 + bVar20;
      pbVar10 = pbVar25 + 8;
      out(*(undefined4 *)(pbVar25 + 4),(short)pbVar23);
      piVar7 = (int *)0xa0a0000;
      *pbVar23 = *pbVar23;
      bVar20 = cVar3 - cVar5;
      iVar19 = CONCAT22(uVar21,CONCAT11((byte)puVar36[0x14] | 0x1c | bRam0ca87216,bVar20));
      *pbVar23 = *pbVar23;
      bVar22 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar20;
      if (!CARRY1(bVar22,bVar20)) {
        piVar7 = (int *)0x1e7b7000;
        bVar22 = (byte)((uint)puVar29 >> 8) | *(byte *)(iVar26 + 3);
        puVar17 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(bVar22,bVar6));
        if (bVar22 != 0) {
          pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar5 + pbVar10[(int)puVar36 * 8]);
          piVar7 = (int *)0x6d7d7000;
          iVar19 = iVar19 + 1;
        }
      }
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      iVar26 = CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | pbVar10[(int)puVar36 * 8]);
      *(char *)piVar7 = (char)*piVar7;
      piVar7 = (int *)CONCAT31((int3)((uint)piVar7 >> 8),0xf9);
      *puVar36 = (uint)((int)piVar7 + *puVar36 + 1);
      pbVar25 = pbVar25 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar26);
      puVar29 = puVar17;
    } while( true );
  }
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  bVar6 = bVar6 | *(byte *)((int)piVar7 + 0x4000081);
  piVar7 = (int *)CONCAT31(uVar15,bVar6);
  if ('\0' < (char)bVar6) {
    *(byte *)piVar7 = (char)*piVar7 + bVar6;
    puVar11 = (uint *)CONCAT31(uVar15,bVar6 + 0x28);
    *puVar11 = *puVar11 ^ (uint)puVar11;
    *(byte *)puVar29 = *(byte *)puVar29 + bVar22;
    cVar3 = (bVar6 + 0x28) - bVar22;
    pcVar8 = (char *)CONCAT31(uVar15,cVar3);
    *pcVar8 = *pcVar8 + cVar3;
    pbVar23 = (byte *)CONCAT31(uVar14,bVar4 | *(byte *)puVar29);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar29 >> 0x10),
                               CONCAT11((char)((uint)puVar29 >> 8) + *(byte *)((int)puVar17 + 0x7d),
                                        (char)puVar29));
    *pcVar8 = *pcVar8 + cVar3;
    pbVar10 = (byte *)CONCAT31(uVar15,cVar3 + 0x39U ^ *(byte *)CONCAT31(uVar15,cVar3 + 0x39U));
    *pcVar18 = *pcVar18 + bVar22;
    pbVar24 = pbVar25 + 4;
    out(*(undefined4 *)pbVar25,(short)pbVar23);
    goto code_r0x00405396;
  }
  pbVar35 = pbVar25 + 4;
  out(*(undefined4 *)pbVar25,(short)iVar26);
  pcVar18 = (char *)(iVar19 + -1);
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  pbVar23 = (byte *)CONCAT31(uVar14,bVar4 | *(byte *)puVar29);
  goto code_r0x004052ee;
}


