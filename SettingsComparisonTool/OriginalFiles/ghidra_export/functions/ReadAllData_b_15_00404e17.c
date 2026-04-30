/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404e17
 * Raw Name    : <ReadAllData>b__15
 * Demangled   : <ReadAllData>b__15
 * Prototype   : undefined4 <ReadAllData>b__15(undefined4 filterstr, byte * param_2)
 * Local Vars  : cVar31, bVar30, unaff_EBP, cVar32, pbVar33, unaff_ESI, unaff_EDI, pbVar34, in_ES, pbVar35, bVar36, in_DS, unaff_retaddr, in_AF, filterstr, param_2, uStack_34, uStack_32, uStack_33, uVar1, uStack_30, bVar3, uVar2, cVar5, bVar4, cVar7, bVar6, piVar8, in_EAX, puVar10, pcVar9, pcVar12, iVar11, uVar14, uVar13, pcVar16, puVar15, bVar18, iVar17, uVar20, uVar19, pbVar22, pbVar21, bVar24, iVar23, cVar26, cVar25, pbVar27, unaff_EBX, uVar29, puVar28
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

undefined4 __fastcall <ReadAllData>b__15(undefined4 filterstr,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  char *in_EAX;
  undefined3 uVar13;
  int *piVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  undefined3 uVar14;
  byte bVar18;
  undefined2 uVar19;
  uint *puVar15;
  char *pcVar16;
  int iVar17;
  undefined2 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  byte bVar24;
  char cVar25;
  char cVar26;
  byte bVar30;
  int unaff_EBX;
  byte *pbVar27;
  uint *puVar28;
  char cVar31;
  char cVar32;
  uint uVar29;
  char *unaff_EBP;
  undefined4 *unaff_ESI;
  byte *pbVar33;
  byte *pbVar34;
  int unaff_EDI;
  byte *pbVar35;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar36;
  byte in_AF;
  undefined2 unaff_retaddr;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined2 uStack_30;
  
                    /* .NET CLR Managed Code */
  iVar11 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                    CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x33),
                             (char)unaff_EBX));
  cVar5 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar5;
  uVar13 = (undefined3)((uint)in_EAX >> 8);
  pcVar9 = (char *)CONCAT31(uVar13,cVar5 + '{');
  out(*unaff_ESI,(short)param_2);
  *pcVar9 = *pcVar9 + cVar5 + '{';
  bVar3 = cVar5 + 0x7e;
  pbVar35 = (byte *)CONCAT31(uVar13,bVar3);
  pbVar33 = (byte *)(unaff_ESI + 2);
  out(unaff_ESI[1],(short)param_2);
  pbVar27 = (byte *)(iVar11 + -1);
  *pbVar35 = *pbVar35 + bVar3;
  uVar19 = (undefined2)((uint)filterstr >> 0x10);
  bVar6 = (byte)filterstr;
  bVar18 = (byte)((uint)filterstr >> 8) | *param_2;
  puVar15 = (uint *)CONCAT22(uVar19,CONCAT11(bVar18,bVar6));
  *pbVar35 = *pbVar35 + bVar3;
  *pbVar27 = *pbVar27 + (byte)param_2;
  *pbVar27 = *pbVar27 ^ bVar3;
  *param_2 = *param_2 + bVar18;
  *pbVar35 = *pbVar35 + bVar3;
  *pbVar35 = *pbVar35 + (char)((uint)param_2 >> 8);
  bVar4 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar3;
  piVar8 = (int *)(iVar11 + 0x19);
  *piVar8 = (int)(pbVar33 + (uint)CARRY1(bVar4,bVar3) + *piVar8);
  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
  bVar3 = bVar3 | *pbVar33;
  pbVar35 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + -0x33));
  *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
  bVar4 = bVar3 + 2;
  piVar8 = (int *)CONCAT31(uVar13,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar8 = (char)*piVar8 + bVar4;
    return CONCAT31(uVar13,bVar3 + 0x71);
  }
  if (bVar4 != 0 && SCARRY1(bVar3,'\x02') == (char)bVar4 < '\0') {
    *(byte *)piVar8 = (char)*piVar8 + bVar4;
    *(byte **)(pbVar33 + (int)pbVar35 * 8) =
         param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar33 + (int)pbVar35 * 8);
    return CONCAT31(uVar13,bVar3 + 0x2f);
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar24 = *pbVar27;
  *(char **)pbVar33 = (char *)(*(int *)pbVar33 + (int)piVar8);
  *(byte *)piVar8 = (char)*piVar8 - bVar18;
  *(byte *)piVar8 = (char)*piVar8 + bVar4;
  pbVar21 = (byte *)(CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | bVar24) - *(int *)pbVar27);
  puVar10 = (uint *)CONCAT31(uVar13,bVar3 + 8);
  *(uint *)(pbVar27 + (int)pbVar33 * 2) =
       (int)puVar10 + (uint)(0xf9 < bVar4) + *(int *)(pbVar27 + (int)pbVar33 * 2);
  *(byte *)puVar15 = (byte)*puVar15 ^ bVar3 + 8;
  *pbVar21 = *pbVar21 + bVar6;
  pbVar34 = (byte *)(unaff_ESI + 3);
  uVar20 = SUB42(pbVar21,0);
  out(*(int *)pbVar33,uVar20);
  *puVar15 = *puVar15 ^ (uint)puVar10;
  *pbVar21 = *pbVar21 + bVar6;
  puVar28 = (uint *)(pbVar27 + -*(int *)pbVar27);
  *(uint *)(pbVar35 + 0x31) = *(uint *)(pbVar35 + 0x31) | (uint)unaff_EBP;
  *puVar10 = *puVar10 + (int)puVar10;
  puVar15 = (uint *)CONCAT22(uVar19,CONCAT11(bVar18 | (byte)*puVar28,bVar6));
  *(byte **)(pbVar21 + 0x6e) = pbVar34 + *(int *)(pbVar21 + 0x6e);
  piVar8 = (int *)((uint)puVar10 | *puVar10);
  bVar3 = (byte)puVar28;
  *pbVar35 = *pbVar35 - bVar3;
  bVar4 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar6;
  if (CARRY1(bVar4,bVar6)) {
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    bVar4 = pbVar21[0x11];
    uVar19 = (undefined2)((uint)puVar28 >> 0x10);
    out(*(undefined4 *)pbVar34,uVar20);
    puVar15 = (uint *)((int)puVar15 + 1);
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    bVar30 = (byte)((uint)puVar28 >> 8) | bVar4 | *pbVar21;
    pcVar9 = (char *)((int)piVar8 + -0x21000001);
    bVar4 = (byte)pcVar9 | 0x11;
    uVar13 = (undefined3)((uint)pcVar9 >> 8);
    cVar5 = bVar4 - 7;
    pcVar16 = (char *)CONCAT31(uVar13,cVar5);
    *(char **)pbVar35 = pcVar16 + (uint)(bVar4 < 7) + *(int *)pbVar35;
    pbVar34 = (byte *)(unaff_ESI + 5);
    out(unaff_ESI[4],uVar20);
    pbVar21 = pbVar21 + 1;
    *pcVar16 = *pcVar16 + cVar5;
    bVar18 = (byte)((uint)pcVar9 >> 8);
    bVar24 = bVar3 | bVar18;
    bVar6 = cVar5 - *pcVar16;
    bVar4 = *(byte *)puVar15;
    *(byte *)puVar15 = *(byte *)puVar15 + bVar6;
    *(char *)CONCAT31(uVar13,bVar6) = *(char *)CONCAT31(uVar13,bVar6) + bVar6 + CARRY1(bVar4,bVar6);
    *pbVar21 = *pbVar21 + bVar6;
    *pbVar34 = *pbVar34 + bVar24;
    bVar4 = (byte)((uint)pbVar21 >> 8);
    *(byte *)puVar15 = *(byte *)puVar15 + bVar6 + CARRY1((byte)pbVar21,bVar4);
    piVar8 = (int *)CONCAT31(uVar13,bVar6);
    *(byte *)piVar8 = (char)*piVar8 + bVar6;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11(bVar4 + bVar18,(byte)pbVar21 + bVar4));
    puVar28 = (uint *)CONCAT22(uVar19,CONCAT11(bVar30 + *(char *)(CONCAT31((int3)(CONCAT22(uVar19,
                                                  CONCAT11(bVar30,bVar3)) >> 8),bVar24) + 0x76),
                                               bVar24));
    in_ES = unaff_retaddr;
code_r0x00404fa4:
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    pcVar9 = (char *)(CONCAT31((int3)((uint)piVar8 >> 8),(char)piVar8 + '(') ^ *puVar15);
    cVar26 = (char)puVar15;
    *pbVar21 = *pbVar21 + cVar26;
    uVar19 = (undefined2)((uint)puVar28 >> 0x10);
    cVar25 = (char)puVar28;
    cVar31 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x75);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar5 = (char)pcVar9 + 'o';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    cVar32 = (char)((uint)puVar15 >> 8);
    *unaff_EBP = *unaff_EBP - cVar32;
    pbVar21[1] = pbVar21[1] + cVar26;
    pcVar9 = pcVar9 + -0x757b021b;
    cVar5 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar5;
    uVar13 = (undefined3)((uint)pcVar9 >> 8);
    cVar7 = cVar5 + 'o';
    pcVar9 = (char *)CONCAT31(uVar13,cVar7);
    pbVar22 = pbVar21 + 2;
    *pcVar9 = *pcVar9 + cVar7;
    iVar11 = CONCAT22(uVar19,CONCAT11(cVar31 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar31,cVar25)) +
                                                        0x76),cVar25));
    *pcVar9 = *pcVar9 + cVar7;
    pcVar9 = (char *)CONCAT31(uVar13,cVar5 + -0x22);
    pbVar27 = pbVar35 + 1;
    *pbVar35 = *pbVar34;
    *pcVar9 = *pcVar9 + cVar5 + -0x22;
    *(byte *)((int)puVar15 + (int)pcVar9) =
         *(byte *)((int)puVar15 + (int)pcVar9) - (char)((uint)pbVar22 >> 8);
    *pbVar22 = *pbVar22 + cVar26;
    bVar3 = cVar32 - pbVar21[4];
    pbVar33 = pbVar34 + 5;
    out(*(undefined4 *)(pbVar34 + 1),(short)pbVar22);
    puVar10 = (uint *)((uint)(pcVar9 + *(int *)(pcVar9 + iVar11)) ^ 0x280a0001);
    *(byte *)puVar10 = (byte)*puVar10 << 1 | (char)(byte)*puVar10 < '\0';
    *pbVar33 = *pbVar33 + (char)puVar10;
    pbVar33 = pbVar33 + *(int *)(pbVar21 + -0x5c);
    pbVar35 = (byte *)((uint)puVar10 | *puVar10);
    *pbVar33 = *pbVar33 + (char)pbVar35;
    puVar28 = (uint *)CONCAT31((int3)((uint)iVar11 >> 8),cVar25 - (char)pbVar22);
    bVar4 = *pbVar35;
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar3 + *pbVar35,cVar26));
    iVar11 = *(int *)pbVar35;
    *pbVar22 = *pbVar22 + cVar26;
    cVar5 = (char)(pbVar35 + (uint)CARRY1(bVar3,bVar4) + iVar11) + 'r';
    puVar10 = (uint *)CONCAT31((int3)((uint)(pbVar35 + (uint)CARRY1(bVar3,bVar4) + iVar11) >> 8),
                               cVar5);
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(10,(char)pbVar22));
    *(char *)(puVar10 + 10) = (char)puVar10[10] + '\n';
    *pbVar33 = *pbVar33 + cVar5;
    pbVar34 = pbVar33 + *(int *)(pbVar21 + -0x5e);
    uVar29 = *puVar10;
    cVar5 = (char)((uint)puVar10 | uVar29);
    *pbVar34 = *pbVar34 + cVar5;
    uVar13 = (undefined3)(((uint)puVar10 | uVar29) >> 8);
    cVar7 = cVar5 + (byte)*puVar28;
    puVar10 = (uint *)CONCAT31(uVar13,cVar7);
    if (SCARRY1(cVar5,(byte)*puVar28) == cVar7 < '\0') goto code_r0x00405090;
    *(byte *)puVar10 = (byte)*puVar10 + cVar7;
    piVar8 = (int *)CONCAT31(uVar13,cVar7 + '\x02');
    pbVar35 = pbVar27;
  }
  else {
    out(2,(char)piVar8);
    if ((POPCOUNT(*pbVar21) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar13 = (undefined3)((uint)piVar8 >> 8);
  cVar5 = (char)piVar8 + '}';
  pbVar33 = (byte *)CONCAT31(uVar13,cVar5);
  pbVar21[(int)pbVar33] = pbVar21[(int)pbVar33] + cVar5;
  pbVar21[0x280a0000] = pbVar21[0x280a0000] - (char)((uint)piVar8 >> 8);
  bVar4 = (byte)puVar15 & 7;
  *pbVar33 = *pbVar33 << bVar4 | *pbVar33 >> 8 - bVar4;
  *pbVar34 = *pbVar34 + cVar5;
  cVar26 = (char)puVar28 - *pbVar34;
  uVar19 = (undefined2)((uint)puVar28 >> 0x10);
  cVar32 = (char)((uint)puVar28 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar28 >> 8),cVar26) + 0x7c);
  pcVar9 = (char *)CONCAT22(uVar19,CONCAT11(cVar32,cVar26));
  *pbVar33 = *pbVar33 + cVar5;
  bVar3 = (char)piVar8 + 0xa7U & *pbVar21;
  pbVar27 = pbVar35 + *(int *)(unaff_EBP + 0x7c);
  *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
  bVar3 = bVar3 + 0x2a;
  pbVar33 = (byte *)CONCAT31(uVar13,bVar3);
  *pbVar33 = *pbVar33 + bVar3;
  *pcVar9 = *pcVar9 + cVar26;
  *pbVar21 = *pbVar21 ^ bVar3;
  *pcVar9 = *pcVar9 + bVar3;
  bVar4 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar3;
  cVar5 = (bVar3 - *pbVar33) - CARRY1(bVar4,bVar3);
  *(byte *)puVar15 = (byte)*puVar15 + (byte)pbVar21;
  cVar32 = cVar32 + pcVar9[0x7b];
  *(char *)CONCAT31(uVar13,cVar5) = *(char *)CONCAT31(uVar13,cVar5) + cVar5;
  pcVar9 = (char *)CONCAT31(uVar13,cVar5 + 'o');
  *pcVar9 = *pcVar9 + cVar5 + 'o';
  pcVar9 = pcVar9 + 0x2ed7fde6;
  cVar7 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar7;
  cVar5 = *(char *)(CONCAT22(uVar19,CONCAT11(cVar32,cVar26)) + 0x7b);
  *pcVar9 = *pcVar9 + cVar7;
  piVar8 = (int *)(CONCAT31((int3)((uint)pcVar9 >> 8),cVar7 + 'o') + 0x6f060000);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar14 = (undefined3)((uint)pbVar21 >> 8);
  bVar3 = (byte)pbVar21 | *pbVar34;
  pbVar22 = (byte *)CONCAT31(uVar14,bVar3);
  uVar29 = CONCAT22(uVar19,CONCAT11(cVar32 + cVar5,cVar26)) | (uint)pbVar34;
  uVar13 = (undefined3)((uint)piVar8 >> 8);
  bVar4 = (byte)piVar8 | *pbVar22;
  pbVar35 = (byte *)CONCAT31(uVar13,bVar4);
  cVar5 = (byte)puVar15 - bVar3;
  puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),cVar5);
  *pbVar35 = *pbVar35 + bVar4;
  pbVar33 = pbVar34 + 4;
  out(*(undefined4 *)pbVar34,(short)pbVar22);
  *pbVar35 = bVar4;
  *pbVar22 = *pbVar22 + cVar5;
  pbVar34 = pbVar34 + 8;
  out(*(undefined4 *)pbVar33,(short)pbVar22);
  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
  puVar28 = (uint *)(CONCAT31((int3)(uVar29 >> 8),(char)uVar29 - (char)((uint)pbVar21 >> 8)) |
                    (uint)pbVar34);
  pbVar21 = (byte *)CONCAT31(uVar14,(bVar3 | *pbVar34) + *pbVar27);
  puVar10 = (uint *)CONCAT31(uVar13,(bVar4 - *pbVar27) - *(char *)CONCAT31(uVar13,bVar4 - *pbVar27))
  ;
code_r0x00405090:
  *puVar10 = (uint)(pbVar21 + *puVar10);
  cVar5 = (char)puVar10;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *puVar15 = *puVar15 - (int)unaff_EBP;
  bVar4 = *pbVar34;
  bVar3 = (byte)pbVar21;
  *pbVar34 = *pbVar34 + bVar3;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5 + CARRY1(bVar4,bVar3);
  *(byte *)puVar15 = (byte)*puVar15 + cVar5;
  uVar29 = *puVar28;
  *(byte *)puVar28 = (byte)*puVar28 + 0x72;
  *(byte *)puVar28 = (byte)*puVar28;
  cVar5 = (char)((uint)pbVar21 >> 8);
  if (SCARRY1((byte)uVar29,'r')) {
    pbVar34 = pbVar34 + *(int *)(pbVar21 + -10);
  }
  else {
    while( true ) {
      *pbVar34 = *pbVar34 + (char)puVar10;
      uVar13 = (undefined3)((uint)puVar10 >> 8);
      cVar7 = (char)puVar10 + (byte)*puVar28;
      pcVar9 = (char *)CONCAT31(uVar13,cVar7);
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                 CONCAT11((char)((uint)puVar28 >> 8) +
                                          *(byte *)((int)puVar28 + 0x7b),(char)puVar28));
      *pcVar9 = *pcVar9 + cVar7;
      in_AF = 9 < (cVar7 + 0x6fU & 0xf) | in_AF;
      uVar29 = CONCAT31(uVar13,cVar7 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar29;
      piVar8 = (int *)CONCAT22((short)(uVar29 >> 0x10),
                               CONCAT11((char)((uint)puVar10 >> 8) + in_AF,bVar6));
      *piVar8 = *piVar8 + (int)piVar8;
      uVar13 = (undefined3)((uint)piVar8 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar8 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar13,bVar6);
      pbVar33 = (byte *)CONCAT31(uVar13,bVar6);
      bVar4 = *pbVar33;
      *pbVar33 = *pbVar33 + bVar6;
      pbVar34 = pbVar34 + (-(uint)CARRY1(bVar4,bVar6) - *(int *)pbVar33);
      puVar10 = (uint *)(pbVar33 + 0xfc00);
      *pbVar21 = *pbVar21 + cVar5;
      uVar29 = *puVar10;
      bVar4 = (byte)puVar10;
      *(byte *)puVar10 = (byte)*puVar10 + bVar4;
      uVar2 = (uint)CARRY1((byte)uVar29,bVar4);
      uVar29 = *puVar28;
      uVar1 = *puVar28;
      *puVar28 = (uint)((byte *)(uVar1 + (int)puVar10) + uVar2);
      if (!CARRY4(uVar29,(uint)puVar10) && !CARRY4(uVar1 + (int)puVar10,uVar2)) break;
      *(byte *)puVar10 = (byte)*puVar10 + bVar4;
    }
  }
  uVar29 = (uint)puVar10 | *puVar10;
  uVar19 = SUB42(pbVar21,0);
  *pbVar34 = *pbVar34 + (char)uVar29;
  piVar8 = (int *)(uVar29 + 0xc1872);
  if (SCARRY4(uVar29,0xc1872)) {
    cVar7 = (char)piVar8;
    *(char *)piVar8 = *(char *)piVar8 + cVar7;
    *pbVar21 = *pbVar21 + cVar7;
    *(char *)piVar8 = *(char *)piVar8 + cVar7;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar15;
    *(char *)piVar8 = *(char *)piVar8 + cVar7;
    *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) + bVar3;
    pbVar33 = pbVar34;
    goto code_r0x00405117;
  }
  do {
    bVar4 = *pbVar34;
    bVar3 = (byte)piVar8;
    *pbVar34 = *pbVar34 + bVar3;
    if (CARRY1(bVar4,bVar3)) {
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      uVar13 = (undefined3)((uint)puVar15 >> 8);
      bVar4 = (byte)puVar15 | bRam396f1609;
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      puVar15 = (uint *)CONCAT31(uVar13,bVar4 | *(byte *)CONCAT31(uVar13,bVar4));
      uVar13 = (undefined3)((uint)piVar8 >> 8);
      bVar3 = bVar3 | *pbVar21;
      pcVar9 = (char *)CONCAT31(uVar13,bVar3);
      if ((POPCOUNT(bVar3) & 1U) != 0) {
        pbVar33 = pbVar34 + 4;
        out(*(undefined4 *)pbVar34,uVar19);
        uVar29 = CONCAT22((short)((uint)piVar8 >> 0x10),(ushort)bVar3);
        *pbVar33 = *pbVar33 + bVar3;
        pcVar9 = (char *)(uVar29 | 8);
        cVar7 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x7a);
        puVar10 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar7,(char)puVar28));
        *pcVar9 = *pcVar9 + (char)pcVar9;
        cVar5 = (char)pcVar9 + 'o';
        piVar8 = (int *)CONCAT31((int3)(uVar29 >> 8),cVar5);
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(byte *)puVar15 = (byte)*puVar15 + 1;
        pbVar34 = pbVar34 + 8;
        out(*(undefined4 *)pbVar33,uVar19);
        pbVar21 = (byte *)((uint)pbVar21 ^ uRam08122c04);
        iVar11 = CONCAT31((int3)((uint)(*piVar8 * 0x17070600) >> 8),2);
        *(char *)(iVar11 * 2) = *(char *)(iVar11 * 2) - cVar7;
        do {
          bVar4 = (byte)iVar11;
          *pbVar34 = *pbVar34 + bVar4;
          bVar36 = CARRY1(bVar4,(byte)*puVar10);
          uVar13 = (undefined3)((uint)iVar11 >> 8);
          cVar5 = bVar4 + (byte)*puVar10;
          pbVar33 = (byte *)CONCAT31(uVar13,cVar5);
          uVar19 = in_DS;
          uVar20 = uStack_30;
          if (SCARRY1(bVar4,(byte)*puVar10) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar33 = *pbVar33 + cVar5;
          uVar29 = CONCAT31(uVar13,cVar5 + '\'') + 0x1ebd9f3;
          uStack_34 = (undefined1)in_ES;
          uStack_33 = (undefined1)((ushort)in_ES >> 8);
          piVar8 = (int *)(uVar29 ^ 0x73060000);
          puVar15 = (uint *)((int)puVar15 + 1);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          puVar10 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),
                                     CONCAT11((byte)((uint)puVar10 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar10));
          cVar5 = (char)uVar29;
          *(char *)piVar8 = (char)*piVar8 + cVar5;
          uVar29 = CONCAT31((int3)((uint)piVar8 >> 8),cVar5 + '\x02');
          bVar36 = 0xd9f2d2da < uVar29;
          iVar11 = uVar29 + 0x260d2d25;
          pcVar9 = unaff_EBP;
          do {
            uVar13 = (undefined3)((uint)iVar11 >> 8);
            bVar3 = (char)iVar11 + -2 + bVar36;
            pbVar33 = (byte *)CONCAT31(uVar13,bVar3);
            bVar4 = *pbVar33;
            *pbVar33 = *pbVar33 + bVar3;
            bVar6 = (byte)puVar10;
            uStack_30 = in_ES;
            if (CARRY1(bVar4,bVar3)) {
              *pbVar33 = *pbVar33 + bVar3;
              puVar10 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),
                                         CONCAT11((byte)((uint)puVar10 >> 8) | pcVar9[0x7f],bVar6));
              *pbVar33 = *pbVar33 + bVar3;
              pbVar33 = (byte *)CONCAT31(uVar13,bVar3 + 0x2a);
              *pbVar33 = *pbVar33 + bVar3 + 0x2a;
              *(byte *)puVar10 = (byte)*puVar10 + (char)pbVar21;
              uVar19 = in_DS;
              while( true ) {
                in_DS = uVar19;
                bVar3 = (byte)pbVar33;
                *pbVar21 = *pbVar21 ^ bVar3;
                *pbVar21 = *pbVar21 + (char)puVar10;
                *pbVar33 = *pbVar33 + bVar3;
                *(byte *)puVar10 = (byte)*puVar10 + (char)((uint)pbVar21 >> 8);
                bVar4 = *pbVar33;
                *pbVar33 = *pbVar33 + bVar3;
                uVar29 = *puVar10;
                uVar1 = *puVar10;
                *puVar10 = (uint)(pbVar33 + uVar1 + CARRY1(bVar4,bVar3));
                uVar13 = (undefined3)((uint)pbVar33 >> 8);
                if (CARRY4(uVar29,(uint)pbVar33) ||
                    CARRY4((uint)(pbVar33 + uVar1),(uint)CARRY1(bVar4,bVar3))) break;
                *pbVar34 = *pbVar34 + bVar3;
                pcVar16 = (char *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                           CONCAT11((char)((uint)puVar15 >> 8) + *pbVar33,
                                                    (char)puVar15));
                *pbVar34 = *pbVar34 + bVar3;
                piVar8 = (int *)CONCAT31(uVar13,bVar3 | (byte)*puVar10);
                pbVar33 = pbVar34;
                while( true ) {
                  pbVar34 = pbVar33 + 4;
                  out(*(undefined4 *)pbVar33,(short)pbVar21);
                  pbVar21 = pbVar21 + 1;
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  bVar6 = (byte)((uint)pcVar16 >> 8) | *pbVar21;
                  uVar13 = (undefined3)((uint)piVar8 >> 8);
                  bVar3 = (byte)piVar8 ^ *pbVar21;
                  pcVar12 = (char *)CONCAT31(uVar13,bVar3);
                  cRam282b0000 = cRam282b0000 - bVar6;
                  *pcVar12 = *pcVar12 + bVar3;
                  unaff_EBP = pcVar9 + -*(int *)pbVar21;
                  uStack_34 = (undefined1)in_DS;
                  uStack_33 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = pbVar27[0x17];
                  *pcVar12 = *pcVar12 + bVar3;
                  puVar15 = (uint *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                             CONCAT11(bVar6 + bVar4 | *pbVar21,(char)pcVar16));
                  *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
                  *(byte *)((int)pcVar12 * 2) = *(byte *)((int)pcVar12 * 2) ^ bVar3;
                  in_AF = 9 < (bVar3 & 0xf) | in_AF;
                  bVar3 = bVar3 + in_AF * -6;
                  pbVar33 = (byte *)CONCAT31(uVar13,bVar3 + (0x9f < bVar3 | in_AF * (bVar3 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar33 = pbVar33 + *(int *)pbVar33;
                  *(char *)((int)pbVar33 * 2) =
                       *(char *)((int)pbVar33 * 2) + (char)((uint)pbVar21 >> 8);
                  bVar36 = CARRY1((byte)*puVar15,(byte)pbVar21);
                  *(byte *)puVar15 = (byte)*puVar15 + (byte)pbVar21;
                  uVar19 = in_DS;
                  uVar20 = in_ES;
GenerateStatusText:
                  in_DS = uVar20;
                  pcVar9 = unaff_EBP;
                  uStack_30 = in_DS;
                  if (!bVar36) break;
                  *pbVar33 = *pbVar33 + (char)pbVar33;
                  iVar11 = CONCAT31((int3)((uint)puVar15 >> 8),(byte)puVar15 | *pbVar21);
                  uVar19 = (undefined2)((uint)puVar10 >> 0x10);
                  cVar26 = (char)((uint)puVar10 >> 8) + *(byte *)((int)puVar10 + 0x7d);
                  *pbVar33 = *pbVar33 + (char)pbVar33;
                  *pbVar27 = *pbVar27 - (char)((uint)puVar15 >> 8);
                  iVar11 = iVar11 - *(int *)(iVar11 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar19,CONCAT11(cVar26,(char)puVar10)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar34,(short)pbVar21);
                  pbVar21 = (byte *)CONCAT22(uStack_32,CONCAT11(uStack_33,uStack_34));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar33 = pbVar34 + 8;
                  out(*(undefined4 *)(pbVar34 + 4),CONCAT11(uStack_33,uStack_34));
                  pcVar9 = unaff_EBP + 1;
                  cVar7 = (char)iVar11;
                  pcVar16 = (char *)CONCAT22((short)((uint)iVar11 >> 0x10),
                                             CONCAT11((byte)((uint)iVar11 >> 8) | pbVar27[0x46],
                                                      cVar7));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_33,uStack_34);
                  uVar13 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar33,0xf0)) >> 8);
                  piVar8 = (int *)CONCAT31(uVar13,0x5f);
                  pbVar27 = pbVar27 + 1;
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  puVar10 = (uint *)CONCAT22(uVar19,CONCAT11(cVar26 + cVar5 | pbVar34[-0x78],
                                                             (char)puVar10));
                  *(char *)piVar8 = (char)*piVar8 + '_';
                  puVar15 = (uint *)CONCAT31(uVar13,0x8c);
                  *(byte **)(pbVar33 + (int)pbVar27 * 8) =
                       pbVar21 + *(int *)(pbVar33 + (int)pbVar27 * 8);
                  bVar4 = *pbVar33;
                  *pbVar33 = *pbVar33 + 0x8c;
                  if (bVar4 < 0x74) {
                    *pbVar21 = *pbVar21 + cVar7;
                    *(byte *)puVar10 = (byte)*puVar10 >> 1;
                    *(char *)puVar15 = (char)*puVar15 + -0x74;
                    *puVar15 = (uint)(pcVar9 + *puVar15);
                    *puVar15 = *puVar15 << 1 | (uint)((int)*puVar15 < 0);
                    *pbVar21 = *pbVar21 + cVar7;
                    unaff_EBP[2] = unaff_EBP[2] - cVar7;
                    *pbVar21 = *pbVar21 + cVar7;
                    pbVar35 = (byte *)CONCAT31(uVar13,0x83);
                    puVar15 = puVar10;
                    goto code_r0x00405312;
                  }
                  *puVar15 = (uint)(*puVar15 + (int)puVar15);
                  piVar8 = (int *)(CONCAT31(uVar13,(byte)puVar15[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar15[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar8 = (int *)((int)piVar8 + *(int *)pbVar33);
                }
              }
              *pbVar21 = *pbVar21 + bVar3;
              *(byte *)puVar10 = (byte)*puVar10 - (char)pbVar21;
              *pbVar33 = *pbVar33 + bVar3;
              pbVar33 = (byte *)CONCAT31(uVar13,bVar3 | (byte)*puVar10);
            }
            else {
              cVar5 = (char)puVar15;
              *pbVar21 = *pbVar21 + cVar5;
              *(byte **)pbVar33 = pbVar21 + *(int *)pbVar33;
              *pbVar33 = *pbVar33 + bVar3;
              bVar3 = bVar3 + *pbVar33;
              pbVar33 = (byte *)CONCAT31(uVar13,bVar3);
              if (-1 < (char)bVar3) {
                *(byte *)puVar10 = (byte)*puVar10 + bVar6;
                out(*(undefined4 *)pbVar34,(short)pbVar21);
                pbVar21 = pbVar21 + 1;
                *pbVar33 = *pbVar33 + bVar3;
                puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),
                                           bVar6 | (byte)((uint)iVar11 >> 8));
                cVar7 = bVar3 - (byte)*puVar15;
                pcVar16 = (char *)CONCAT31(uVar13,cVar7);
                *pcVar16 = *pcVar16 + cVar7 + (bVar3 < (byte)*puVar15);
                *pbVar21 = *pbVar21 + cVar7;
                pcVar16 = (char *)((int)pcVar16 * 2 + 0x79);
                *pcVar16 = *pcVar16 + (char)((uint)pbVar21 >> 8);
                pbVar33 = (byte *)in((short)pbVar21);
                pbVar34 = pbVar34 + 4;
              }
              *pbVar34 = *pbVar34 + cVar5;
              *pbVar33 = *pbVar33 + (char)pbVar33;
              *pbVar33 = *pbVar33 + (char)pbVar33;
              uStack_34 = (undefined1)in_DS;
              uStack_33 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar33;
              bVar18 = (byte)((uint)puVar15 >> 8);
              bVar6 = bVar18 + *pbVar33;
              iVar11 = *(int *)pbVar33;
              *pbVar21 = *pbVar21 + cVar5;
              bVar3 = (char)(pbVar33 + (uint)CARRY1(bVar18,bVar4) + iVar11) - (byte)*puVar10;
              pbVar33 = (byte *)CONCAT31((int3)((uint)(pbVar33 + (uint)CARRY1(bVar18,bVar4) + iVar11
                                                      ) >> 8),bVar3);
              *(byte *)puVar10 = (byte)*puVar10 ^ bVar3;
              *pcVar9 = *pcVar9 + (char)puVar10;
              *pbVar33 = *pbVar33 + bVar3;
              *pbVar33 = *pbVar33 + bVar3;
              *pbVar33 = *pbVar33 + bVar3;
              puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                         CONCAT11(bVar6 + *pbVar33,cVar5));
              pbVar33 = pbVar33 + (uint)CARRY1(bVar6,*pbVar33) + *(int *)pbVar33;
              *pbVar21 = *pbVar21 + cVar5;
              pbVar34 = pbVar34 + *(int *)(pbVar21 + 0x3e);
            }
            *pbVar34 = *pbVar34 + (char)pbVar33;
            cVar5 = (char)pbVar33 + 'r';
            pbVar34 = pbVar34 + -1;
            uVar29 = CONCAT31((int3)((uint)pbVar33 >> 8),cVar5);
            *pbVar34 = *pbVar34 + cVar5;
            bVar36 = 0xfff38f8d < uVar29;
            iVar11 = uVar29 + 0xc7072;
            unaff_EBP = pcVar9;
          } while (SCARRY4(uVar29,0xc7072));
        } while( true );
      }
      *pcVar9 = *pcVar9 + bVar3;
      bVar3 = bVar3 + 0x6f;
      pbVar33 = (byte *)CONCAT31(uVar13,bVar3);
      bVar4 = *pbVar33;
      *pbVar33 = *pbVar33 + bVar3;
      uVar13 = (undefined3)
               ((uint)(pbVar33 + (uint)CARRY1(bVar4,bVar3) + *(int *)((int)puVar15 + (int)pbVar21))
               >> 8);
      cVar7 = (char)(pbVar33 + (uint)CARRY1(bVar4,bVar3) + *(int *)((int)puVar15 + (int)pbVar21)) +
              'E';
      pcVar9 = (char *)CONCAT31(uVar13,cVar7);
      *pcVar9 = *pcVar9 + cVar7;
      cVar7 = cVar7 + *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar13,cVar7);
      *pcVar9 = *pcVar9 + cVar7;
      puVar10 = (uint *)CONCAT31(uVar13,cVar7 + *pcVar9);
      *(char *)puVar10 = (char)*puVar10 + cVar7 + *pcVar9;
      pbVar33 = (byte *)((uint)puVar10 | *puVar10);
      bVar4 = *pbVar33;
      bVar3 = (byte)pbVar33;
      *pbVar33 = *pbVar33 + bVar3;
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar33 >> 8),bVar3 + CARRY1(bVar4,bVar3));
      pbVar33 = pbVar34;
code_r0x00405117:
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      puVar28 = (uint *)((int)puVar28 - *puVar28);
      pbVar34 = pbVar33 + 4;
      out(*(undefined4 *)pbVar33,uVar19);
    }
    *pbVar21 = *pbVar21 + (char)puVar15;
    bVar36 = puVar28 < (uint *)*piVar8;
    puVar28 = (uint *)((int)puVar28 - *piVar8);
    bVar4 = (byte)((uint)puVar15 >> 8);
    pbVar27[0x39] = (pbVar27[0x39] - bVar4) - bVar36;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    uVar29 = *puVar28;
    *(int *)(pbVar27 + 0x39) = *(int *)(pbVar27 + 0x39) - (int)unaff_EBP;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar29 | (byte)*puVar28,(char)puVar15));
    *(char *)(piVar8 + 10) = (char)piVar8[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
  bVar4 = (char)piVar8 + 0x28;
  pbVar35 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),bVar4);
  *pbVar35 = *pbVar35 ^ bVar4;
  *(byte *)puVar10 = (byte)*puVar10 + (char)((uint)pcVar16 >> 8);
  bVar4 = *pbVar21;
  *pbVar21 = *pbVar21 + (byte)pcVar16;
  piVar8 = (int *)(((uint)pbVar35 | 0x1496f09) + *(int *)pbVar27 + (uint)CARRY1(bVar4,(byte)pcVar16)
                  );
  pbVar34 = pbVar33 + 4;
  out(*(undefined4 *)pbVar33,(short)pbVar21);
  pbVar22 = pbVar21 + -1;
  *piVar8 = *piVar8 + (int)piVar8;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),(byte)pbVar22 | (byte)*puVar10);
  cVar5 = (char)piVar8 + '\x13';
  pbVar35 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar5);
  puVar15 = puVar10;
  pbVar33 = pbVar34;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar21 = *pbVar21 - (char)((uint)pbVar22 >> 8);
    *pbVar35 = *pbVar35 + cVar5;
code_r0x00405396:
    bVar4 = *pbVar35;
    bVar3 = (byte)pbVar35;
    *pbVar35 = *pbVar35 + bVar3;
    *(byte **)pbVar34 = pbVar35 + (uint)CARRY1(bVar4,bVar3) + *(int *)pbVar34;
    out(*(undefined4 *)pbVar34,(short)pbVar21);
    *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
    *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                              CONCAT11((byte)((uint)pbVar35 >> 8) | pbVar34[4],bVar3));
    *(char **)(pbVar27 + -1) = pcVar9 + *(int *)(pbVar27 + -1);
    out(*(undefined4 *)(pbVar34 + 4),(short)pbVar21);
    *pcVar9 = *pcVar9 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar35 = *pbVar35 + (char)pbVar35;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar35 >> 8),(char)pbVar35 + 'o');
  puVar10 = (uint *)((int)puVar15 + -1);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar13 = (undefined3)((uint)pbVar21 >> 8);
  piVar8 = (int *)((int)piVar8 + 0x1b7e);
  bVar6 = (byte)pbVar21 | *(byte *)puVar10 | *(byte *)puVar10;
  iRam04115f2c = iRam04115f2c + (int)piVar8;
  out(*(undefined4 *)pbVar33,(short)CONCAT31(uVar13,bVar6));
  *piVar8 = *piVar8 + (int)piVar8;
  bVar6 = bVar6 | (byte)piVar8;
  iVar23 = CONCAT31(uVar13,bVar6);
  pbVar35 = (byte *)((int)piVar8 - *piVar8);
  cVar5 = (char)pbVar35;
  *pcVar16 = *pcVar16 + cVar5;
  cVar7 = (char)pcVar16 - bVar6;
  *pbVar35 = *pbVar35 + cVar5;
  uVar19 = (undefined2)((uint)pcVar16 >> 0x10);
  bVar3 = (byte)((uint)pcVar16 >> 8) | *pbVar35;
  pcVar9 = pcVar9 + -1;
  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
  bVar4 = *(byte *)(CONCAT22(uVar19,CONCAT11(bVar3,cVar7)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar35;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar9;
  *pbVar35 = *pbVar35 + cVar5;
  bVar4 = bVar3 | bVar4 | *(byte *)puVar10;
  iVar17 = CONCAT22(uVar19,CONCAT11(bVar4,cVar7));
  pbVar22 = (byte *)((uint)(pbVar33 + 4) ^ *(uint *)(iVar23 + -0x43));
  iVar11 = *(int *)pbVar35;
  *(byte **)pbVar35 = pbVar35 + *(int *)pbVar35;
  if (SCARRY4(iVar11,(int)pbVar35)) {
    *pbVar35 = *pbVar35 + cVar5;
  }
  pbVar33 = pbVar35 + 0x5674;
  pbVar27 = pbVar27 + (-(uint)((byte *)0xffffa98b < pbVar35) - *(int *)(pbVar22 + -0x7f));
  bVar3 = (byte)pbVar33;
  *pbVar33 = *pbVar33 + bVar3;
  uVar14 = (undefined3)((uint)pbVar33 >> 8);
  bVar18 = bVar3 + 0x2d;
  piVar8 = (int *)CONCAT31(uVar14,bVar18);
  *(uint *)(pbVar22 + (int)pbVar27 * 8) =
       *(int *)(pbVar22 + (int)pbVar27 * 8) + iVar23 + (uint)(0xd2 < bVar3);
  bVar3 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar18;
  if (!CARRY1(bVar3,bVar18)) {
    do {
      pbVar35 = (byte *)(iVar23 + 1);
      bVar3 = (byte)piVar8;
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      bVar6 = (byte)((uint)piVar8 >> 8);
      bVar18 = (byte)puVar10 | bVar6;
      puVar15 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar18);
      out(*(undefined4 *)pbVar22,(short)pbVar35);
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      uVar19 = (undefined2)((uint)iVar17 >> 0x10);
      cVar5 = (char)iVar17;
      pbVar33 = (byte *)CONCAT22(uVar19,CONCAT11((byte)((uint)iVar17 >> 8) | *pbVar35,cVar5));
      bVar4 = *pbVar33;
      *pbVar33 = *pbVar33 + bVar3;
      *(byte *)piVar8 = (char)*piVar8 + bVar3 + CARRY1(bVar4,bVar3);
      *pbVar35 = *pbVar35 + bVar3;
      *pbVar27 = *pbVar27 + bVar6;
      *(int *)((int)piVar8 * 2) = *(int *)((int)piVar8 * 2) + CONCAT22(uVar19,CONCAT11(0x1c,cVar5));
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      cVar7 = (char)pbVar35;
      *(byte *)puVar15 = (byte)*puVar15 + cVar7;
      *(byte *)((int)piVar8 * 2) = *(byte *)((int)piVar8 * 2) ^ bVar3;
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      pbVar33 = pbVar22 + 8;
      out(*(undefined4 *)(pbVar22 + 4),(short)pbVar35);
      piVar8 = (int *)0xa0a0000;
      *pbVar35 = *pbVar35;
      bVar3 = cVar5 - cVar7;
      iVar17 = CONCAT22(uVar19,CONCAT11(pbVar27[0x50] | 0x1c | bRam0ca87216,bVar3));
      *pbVar35 = *pbVar35;
      bVar4 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar3;
      if (!CARRY1(bVar4,bVar3)) {
        piVar8 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar10 >> 8) | *(byte *)(iVar23 + 3);
        puVar15 = (uint *)CONCAT22((short)((uint)puVar10 >> 0x10),CONCAT11(bVar4,bVar18));
        if (bVar4 != 0) {
          pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar7 + pbVar33[(int)pbVar27 * 8]);
          piVar8 = (int *)0x6d7d7000;
          iVar17 = iVar17 + 1;
        }
      }
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      iVar23 = CONCAT31((int3)((uint)pbVar35 >> 8),(byte)pbVar35 | pbVar33[(int)pbVar27 * 8]);
      *(char *)piVar8 = (char)*piVar8;
      piVar8 = (int *)CONCAT31((int3)((uint)piVar8 >> 8),0xf9);
      *(char **)pbVar27 = (char *)((int)piVar8 + *(int *)pbVar27 + 1);
      pbVar22 = pbVar22 + 0xc;
      out(*(undefined4 *)pbVar33,(short)iVar23);
      puVar10 = puVar15;
    } while( true );
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar18 = bVar18 | *(byte *)((int)piVar8 + 0x4000081);
  piVar8 = (int *)CONCAT31(uVar14,bVar18);
  if ('\0' < (char)bVar18) {
    *(byte *)piVar8 = (char)*piVar8 + bVar18;
    puVar28 = (uint *)CONCAT31(uVar14,bVar18 + 0x28);
    *puVar28 = *puVar28 ^ (uint)puVar28;
    *(byte *)puVar10 = *(byte *)puVar10 + bVar4;
    cVar5 = (bVar18 + 0x28) - bVar4;
    pcVar9 = (char *)CONCAT31(uVar14,cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    pbVar21 = (byte *)CONCAT31(uVar13,bVar6 | *(byte *)puVar10);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar10 >> 0x10),
                               CONCAT11((char)((uint)puVar10 >> 8) + *(byte *)((int)puVar15 + 0x7d),
                                        (char)puVar10));
    *pcVar9 = *pcVar9 + cVar5;
    pbVar35 = (byte *)CONCAT31(uVar14,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar14,cVar5 + 0x39U));
    *pcVar16 = *pcVar16 + bVar4;
    pbVar34 = pbVar22 + 4;
    out(*(undefined4 *)pbVar22,(short)pbVar21);
    goto code_r0x00405396;
  }
  pbVar33 = pbVar22 + 4;
  out(*(undefined4 *)pbVar22,(short)iVar23);
  pcVar16 = (char *)(iVar17 + -1);
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  pbVar21 = (byte *)CONCAT31(uVar13,bVar6 | *(byte *)puVar10);
  goto code_r0x004052ee;
}


