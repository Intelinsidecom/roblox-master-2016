/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404da5
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : undefined4 .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : cVar18, bVar17, bVar20, bVar19, uVar22, bVar21, pbVar24, uVar23, iVar26, pbVar25, cVar28, cVar27, pbVar29, unaff_EBX, uVar31, puVar30, cVar33, bVar32, unaff_EBP, cVar34, unaff_EDI, unaff_ESI, in_ES, puVar35, in_AF, in_DS, bVar36, param_1, param_2, uStack_4f, uStack_50, uStack_4c, uStack_4e, uVar1, uStack_c, bVar3, uVar2, in_EAX, cVar4, pbVar6, pbVar5, pcVar8, piVar7, iVar10, puVar9, uVar12, pcVar11, puVar14, uVar13, iVar16, pcVar15
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

undefined4 __fastcall _ctor(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte *in_EAX;
  byte *pbVar5;
  undefined3 uVar12;
  byte *pbVar6;
  int *piVar7;
  undefined3 uVar13;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  char *pcVar11;
  byte bVar17;
  char cVar18;
  byte bVar19;
  byte bVar20;
  undefined2 uVar22;
  uint *puVar14;
  byte bVar21;
  char *pcVar15;
  int iVar16;
  undefined2 uVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  char cVar27;
  char cVar28;
  byte bVar32;
  int unaff_EBX;
  byte *pbVar29;
  uint *puVar30;
  char cVar33;
  char cVar34;
  uint uVar31;
  char *unaff_EBP;
  byte *unaff_ESI;
  uint *unaff_EDI;
  uint *puVar35;
  undefined2 in_ES;
  undefined2 in_DS;
  byte in_AF;
  bool bVar36;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_c;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    bVar19 = (byte)((uint)param_1 >> 8);
    uVar22 = (undefined2)((uint)param_1 >> 0x10);
    bVar3 = (byte)param_1;
    bVar17 = bVar19 + *in_EAX;
    pbVar5 = in_EAX + (uint)CARRY1(bVar19,*in_EAX) + *(int *)in_EAX;
    *param_2 = *param_2 + bVar3;
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *unaff_ESI);
    bVar19 = *pbVar5;
    pbVar5 = pbVar5 + (uint)CARRY1(bVar17,*pbVar5) + *(int *)pbVar5;
    *param_2 = *param_2 + bVar3;
    cVar18 = ((bVar17 + bVar19) - *param_2) + *pbVar5;
    pcVar8 = (char *)CONCAT22(uVar22,CONCAT11(cVar18,bVar3));
    puVar14 = unaff_EDI + 1;
    uVar31 = in((short)param_2);
    *unaff_EDI = uVar31;
    cVar4 = (char)pbVar5;
    *pbVar5 = *pbVar5 + cVar4;
    uVar13 = (undefined3)((uint)param_2 >> 8);
    bVar17 = (byte)param_2 | *unaff_ESI;
    pcVar15 = (char *)CONCAT31(uVar13,bVar17);
    *pcVar8 = *pcVar8 + '\x01';
    bVar19 = (cVar18 - *pcVar15) + *pbVar5;
    pcVar8 = (char *)CONCAT22(uVar22,CONCAT11(bVar19,bVar3));
    unaff_EDI = unaff_EDI + 2;
    uVar31 = in((short)pcVar15);
    *puVar14 = uVar31;
    *pbVar5 = *pbVar5 + cVar4;
    bVar17 = bVar17 | *unaff_ESI;
    pbVar24 = (byte *)CONCAT31(uVar13,bVar17);
    *pcVar8 = *pcVar8 + '\x01';
    cVar18 = bVar3 - pbVar24[2];
    param_1 = CONCAT31((int3)((uint)pcVar8 >> 8),cVar18);
    if ((POPCOUNT(cVar18) & 1U) == 0) break;
    *(uint *)pbVar5 = (*(int *)pbVar5 - (int)pbVar5) - (uint)(bVar3 < pbVar24[2]);
    in_EAX = (byte *)0xc00;
    param_2 = pbVar24;
  }
  *pbVar5 = *pbVar5 + cVar4;
  bVar3 = cVar4 + 0x7b;
  pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar3);
  pbVar6[unaff_EBX] = pbVar6[unaff_EBX] + bVar3;
  pbVar5 = unaff_ESI + 4;
  uVar23 = SUB42(pbVar24,0);
  out(*(undefined4 *)unaff_ESI,uVar23);
  pbVar29 = (byte *)(unaff_EBX + -1);
  *pbVar6 = *pbVar6 + bVar3;
  bVar19 = bVar19 | *pbVar24;
  piVar7 = (int *)CONCAT22(uVar22,CONCAT11(bVar19,cVar18));
  *pbVar6 = *pbVar6 + bVar3;
  *pbVar29 = *pbVar29 + bVar17;
  *pbVar29 = *pbVar29 ^ bVar3;
  *pbVar24 = *pbVar24 + bVar19;
  *pbVar6 = *pbVar6 + bVar3;
  do {
    bVar20 = (byte)((uint)piVar7 >> 8);
    *(byte *)unaff_EDI = (byte)*unaff_EDI + bVar20;
    bVar19 = *pbVar6;
    bVar3 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar3;
    *(int *)(unaff_EBX + 0x17) =
         (int)(pbVar5 + (uint)CARRY1(bVar19,bVar3) + *(int *)(unaff_EBX + 0x17));
    *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
    uVar12 = (undefined3)((uint)pbVar6 >> 8);
    bVar3 = bVar3 | *pbVar5;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x34));
    *(char *)CONCAT31(uVar12,bVar3) = *(char *)CONCAT31(uVar12,bVar3) + bVar3;
    bVar19 = bVar3 + 2;
    cVar4 = (char)((uint)param_2 >> 8);
    bVar21 = (byte)piVar7;
    if ((POPCOUNT(bVar19) & 1U) != 0) {
      pbVar6 = (byte *)CONCAT31(uVar12,bVar3 + 0x15 + (0xfd < bVar3));
      if (0xec < bVar19 || CARRY1(bVar3 + 0x15,0xfd < bVar3)) {
        *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
      }
code_r0x00404e60:
      unaff_EBP = unaff_EBP + -*(int *)pbVar24;
      bVar19 = *pbVar6;
      *pbVar6 = *pbVar6 + (byte)pbVar6;
      pbVar5 = pbVar5 + (-(uint)CARRY1(bVar19,(byte)pbVar6) - *(int *)pbVar6);
      pbVar6 = pbVar6 + *(int *)pbVar6;
      *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
      *(char *)piVar7 = (char)*piVar7 + cVar4;
      bVar19 = *pbVar6;
      *pbVar6 = *pbVar6 + (byte)pbVar6;
      *(byte **)(pbVar29 + (int)pbVar24) =
           pbVar24 + (uint)CARRY1(bVar19,(byte)pbVar6) + *(int *)(pbVar29 + (int)pbVar24);
      pbVar6 = pbVar6 + 0x73061314;
      *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
      uVar12 = (undefined3)((uint)piVar7 >> 8);
      bVar21 = bVar21 | *pbVar24;
      pcVar15 = (char *)CONCAT31(uVar12,bVar21);
      *pbVar6 = *pbVar6 + (char)pbVar6;
      cVar4 = (char)pbVar6 + 'o';
      pcVar8 = (char *)CONCAT31((int3)((uint)pbVar6 >> 8),cVar4);
      *pcVar8 = *pcVar8 + cVar4;
      out(*(undefined4 *)pbVar5,uVar23);
      bVar19 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar21;
      pcVar8 = pcVar8 + (uint)CARRY1(bVar19,bVar21) + *unaff_EDI;
      *pcVar8 = *pcVar8 + (char)pcVar8;
      *pcVar15 = *pcVar15 + bVar17;
      pbVar6 = pbVar5 + 8;
      out(*(undefined4 *)(pbVar5 + 4),uVar23);
      *pbVar24 = *pbVar24 + bVar21;
      piVar7 = (int *)((uint)pcVar8 | *unaff_EDI);
      pcVar15[0x390a0000] = pcVar15[0x390a0000] - bVar20;
      pbVar29 = (byte *)0x7000000;
      *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar20;
      *piVar7 = *piVar7 + (int)piVar7;
      puVar14 = (uint *)CONCAT31(uVar12,bVar21 | *(byte *)((int)piVar7 + (int)pcVar15));
      *(char *)((int)piVar7 * 2) = *(char *)((int)piVar7 * 2) - bVar20;
      cRam07000000 = cRam07000000 + bVar20;
      piVar7 = (int *)((uint)piVar7 | 0x777b02);
      pbVar5 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      bVar36 = SCARRY1(*pbVar5,(char)piVar7);
      *pbVar5 = *pbVar5 + (char)piVar7;
      bVar19 = *pbVar5;
      *(char *)piVar7 = (char)*piVar7;
      uStack_c = in_DS;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar12,bVar19) = *(char *)CONCAT31(uVar12,bVar19) + bVar19;
    bVar3 = bVar3 + 0x71;
    pbVar6 = (byte *)CONCAT31(uVar12,bVar3);
    *pbVar6 = *pbVar6;
    *pbVar5 = *pbVar5 + 1;
    *piVar7 = (*piVar7 - (int)pbVar6) - (uint)(0x90 < bVar19);
    bVar19 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar3;
    if (!CARRY1(bVar19,bVar3)) goto code_r0x00404e60;
    *pbVar6 = *pbVar6 + bVar3;
    uVar22 = (undefined2)((uint)piVar7 >> 0x10);
    bVar20 = bVar20 | *pbVar6;
    pbVar6 = pbVar6 + -*(int *)pbVar6;
    *pbVar29 = *pbVar29 + bVar20;
    cVar18 = bVar21 - pbVar24[2];
    piVar7 = (int *)CONCAT31((int3)(CONCAT22(uVar22,CONCAT11(bVar20,bVar21)) >> 8),cVar18);
  } while ((POPCOUNT(cVar18) & 1U) != 0);
  cVar28 = (char)pbVar6;
  *pbVar6 = *pbVar6 + cVar28;
  uVar12 = (undefined3)((uint)pbVar6 >> 8);
  pcVar8 = (char *)CONCAT31(uVar12,cVar28 + '{');
  out(*(undefined4 *)pbVar5,uVar23);
  *pcVar8 = *pcVar8 + cVar28 + '{';
  bVar3 = cVar28 + 0x7e;
  pbVar5 = (byte *)CONCAT31(uVar12,bVar3);
  pbVar6 = unaff_ESI + 0xc;
  out(*(undefined4 *)(unaff_ESI + 8),uVar23);
  pbVar29 = (byte *)(unaff_EBX + -2);
  *pbVar5 = *pbVar5 + bVar3;
  bVar19 = *pbVar24;
  puVar14 = (uint *)CONCAT22(uVar22,CONCAT11(bVar20 | bVar19,cVar18));
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar29 = *pbVar29 + bVar17;
  *pbVar29 = *pbVar29 ^ bVar3;
  *pbVar24 = *pbVar24 + (bVar20 | bVar19);
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + cVar4;
  bVar19 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  *(int *)(unaff_EBX + 0x18) =
       (int)(pbVar6 + (uint)CARRY1(bVar19,bVar3) + *(int *)(unaff_EBX + 0x18));
  *(byte **)pbVar5 = pbVar5 + *(int *)pbVar5;
  bVar3 = bVar3 | *pbVar6;
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x33));
  *(char *)CONCAT31(uVar12,bVar3) = *(char *)CONCAT31(uVar12,bVar3) + bVar3;
  bVar36 = SCARRY1(bVar3,'\x02');
  bVar19 = bVar3 + 2;
  piVar7 = (int *)CONCAT31(uVar12,bVar19);
  if ((POPCOUNT(bVar19) & 1U) == 0) {
    *(byte *)piVar7 = (char)*piVar7 + bVar19;
    return CONCAT31(uVar12,bVar3 + 0x71);
  }
code_r0x00404ebf:
  bVar3 = (byte)piVar7;
  uVar12 = (undefined3)((uint)piVar7 >> 8);
  if (bVar19 != 0 && bVar36 == (char)bVar19 < '\0') {
    *(byte *)piVar7 = (char)*piVar7 + bVar3;
    *(byte **)(pbVar6 + (int)unaff_EDI * 8) =
         pbVar24 + (uint)(0xd2 < bVar3) + *(int *)(pbVar6 + (int)unaff_EDI * 8);
    return CONCAT31(uVar12,bVar3 + 0x2d);
  }
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  bVar19 = *pbVar29;
  *(char **)pbVar6 = (char *)(*(int *)pbVar6 + (int)piVar7);
  bVar21 = (byte)((uint)puVar14 >> 8);
  *(byte *)piVar7 = (char)*piVar7 - bVar21;
  *(byte *)piVar7 = (char)*piVar7 + bVar3;
  pbVar24 = (byte *)(CONCAT31(uVar13,bVar17 | bVar19) - *(int *)pbVar29);
  puVar35 = (uint *)CONCAT31(uVar12,bVar3 + 6);
  *(uint *)(pbVar29 + (int)pbVar6 * 2) =
       (int)puVar35 + (uint)(0xf9 < bVar3) + *(int *)(pbVar29 + (int)pbVar6 * 2);
  *(byte *)puVar14 = (byte)*puVar14 ^ bVar3 + 6;
  bVar3 = (byte)puVar14;
  *pbVar24 = *pbVar24 + bVar3;
  pbVar5 = pbVar6 + 4;
  uVar22 = SUB42(pbVar24,0);
  out(*(undefined4 *)pbVar6,uVar22);
  *puVar14 = *puVar14 ^ (uint)puVar35;
  *pbVar24 = *pbVar24 + bVar3;
  puVar30 = (uint *)(pbVar29 + -*(int *)pbVar29);
  *(uint *)((int)unaff_EDI + 0x31) = *(uint *)((int)unaff_EDI + 0x31) | (uint)unaff_EBP;
  *puVar35 = *puVar35 + (int)puVar35;
  puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),CONCAT11(bVar21 | (byte)*puVar30,bVar3))
  ;
  *(byte **)(pbVar24 + 0x6e) = pbVar5 + *(int *)(pbVar24 + 0x6e);
  piVar7 = (int *)((uint)puVar35 | *puVar35);
  bVar17 = (byte)puVar30;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar17;
  bVar19 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar3;
  if (CARRY1(bVar19,bVar3)) {
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    bVar19 = pbVar24[0x11];
    uVar23 = (undefined2)((uint)puVar30 >> 0x10);
    out(*(undefined4 *)pbVar5,uVar22);
    puVar14 = (uint *)((int)puVar14 + 1);
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    bVar32 = (byte)((uint)puVar30 >> 8) | bVar19 | *pbVar24;
    pcVar8 = (char *)((int)piVar7 + -0x21000001);
    bVar19 = (byte)pcVar8 | 0x11;
    uVar13 = (undefined3)((uint)pcVar8 >> 8);
    cVar4 = bVar19 - 7;
    pcVar15 = (char *)CONCAT31(uVar13,cVar4);
    *unaff_EDI = (uint)(pcVar15 + (uint)(bVar19 < 7) + *unaff_EDI);
    pbVar5 = pbVar6 + 0xc;
    out(*(undefined4 *)(pbVar6 + 8),uVar22);
    pbVar24 = pbVar24 + 1;
    *pcVar15 = *pcVar15 + cVar4;
    bVar21 = (byte)((uint)pcVar8 >> 8);
    bVar20 = bVar17 | bVar21;
    bVar3 = cVar4 - *pcVar15;
    bVar19 = *(byte *)puVar14;
    *(byte *)puVar14 = *(byte *)puVar14 + bVar3;
    *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3 + CARRY1(bVar19,bVar3)
    ;
    *pbVar24 = *pbVar24 + bVar3;
    *pbVar5 = *pbVar5 + bVar20;
    bVar19 = (byte)((uint)pbVar24 >> 8);
    *(byte *)puVar14 = *(byte *)puVar14 + bVar3 + CARRY1((byte)pbVar24,bVar19);
    piVar7 = (int *)CONCAT31(uVar13,bVar3);
    *(byte *)piVar7 = (char)*piVar7 + bVar3;
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11(bVar19 + bVar21,(byte)pbVar24 + bVar19));
    puVar30 = (uint *)CONCAT22(uVar23,CONCAT11(bVar32 + *(char *)(CONCAT31((int3)(CONCAT22(uVar23,
                                                  CONCAT11(bVar32,bVar17)) >> 8),bVar20) + 0x76),
                                               bVar20));
code_r0x00404fa4:
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    pcVar8 = (char *)(CONCAT31((int3)((uint)piVar7 >> 8),(char)piVar7 + '(') ^ *puVar14);
    cVar28 = (char)puVar14;
    *pbVar24 = *pbVar24 + cVar28;
    uVar22 = (undefined2)((uint)puVar30 >> 0x10);
    cVar27 = (char)puVar30;
    cVar33 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + 0x75);
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar4 = (char)pcVar8 + 'o';
    pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar4);
    *pcVar8 = *pcVar8 + cVar4;
    cVar34 = (char)((uint)puVar14 >> 8);
    *unaff_EBP = *unaff_EBP - cVar34;
    pbVar24[1] = pbVar24[1] + cVar28;
    pcVar8 = pcVar8 + -0x757b021b;
    cVar4 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar4;
    uVar13 = (undefined3)((uint)pcVar8 >> 8);
    cVar18 = cVar4 + 'o';
    pcVar8 = (char *)CONCAT31(uVar13,cVar18);
    pbVar29 = pbVar24 + 2;
    *pcVar8 = *pcVar8 + cVar18;
    iVar10 = CONCAT22(uVar22,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar33,cVar27)) +
                                                        0x76),cVar27));
    *pcVar8 = *pcVar8 + cVar18;
    pcVar8 = (char *)CONCAT31(uVar13,cVar4 + -0x22);
    puVar35 = (uint *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = *pbVar5;
    *pcVar8 = *pcVar8 + cVar4 + -0x22;
    *(byte *)((int)puVar14 + (int)pcVar8) =
         *(byte *)((int)puVar14 + (int)pcVar8) - (char)((uint)pbVar29 >> 8);
    *pbVar29 = *pbVar29 + cVar28;
    bVar3 = cVar34 - pbVar24[4];
    pbVar6 = pbVar5 + 5;
    out(*(undefined4 *)(pbVar5 + 1),(short)pbVar29);
    puVar30 = (uint *)((uint)(pcVar8 + *(int *)(pcVar8 + iVar10)) ^ 0x280a0001);
    *(byte *)puVar30 = (byte)*puVar30 << 1 | (char)(byte)*puVar30 < '\0';
    *pbVar6 = *pbVar6 + (char)puVar30;
    pbVar6 = pbVar6 + *(int *)(pbVar24 + -0x5c);
    pbVar5 = (byte *)((uint)puVar30 | *puVar30);
    *pbVar6 = *pbVar6 + (char)pbVar5;
    puVar30 = (uint *)CONCAT31((int3)((uint)iVar10 >> 8),cVar27 - (char)pbVar29);
    bVar19 = *pbVar5;
    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),CONCAT11(bVar3 + *pbVar5,cVar28));
    iVar10 = *(int *)pbVar5;
    *pbVar29 = *pbVar29 + cVar28;
    cVar4 = (char)(pbVar5 + (uint)CARRY1(bVar3,bVar19) + iVar10) + 'r';
    puVar9 = (uint *)CONCAT31((int3)((uint)(pbVar5 + (uint)CARRY1(bVar3,bVar19) + iVar10) >> 8),
                              cVar4);
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(10,(char)pbVar29));
    *(char *)(puVar9 + 10) = (char)puVar9[10] + '\n';
    *pbVar6 = *pbVar6 + cVar4;
    pbVar5 = pbVar6 + *(int *)(pbVar24 + -0x5e);
    uVar31 = *puVar9;
    cVar4 = (char)((uint)puVar9 | uVar31);
    *pbVar5 = *pbVar5 + cVar4;
    uVar13 = (undefined3)(((uint)puVar9 | uVar31) >> 8);
    cVar18 = cVar4 + (byte)*puVar30;
    puVar9 = (uint *)CONCAT31(uVar13,cVar18);
    if (SCARRY1(cVar4,(byte)*puVar30) == cVar18 < '\0') goto code_r0x00405090;
    *(byte *)puVar9 = (byte)*puVar9 + cVar18;
    piVar7 = (int *)CONCAT31(uVar13,cVar18 + '\x02');
    unaff_EDI = puVar35;
  }
  else {
    out(2,(char)piVar7);
    uStack_c = in_ES;
    if ((POPCOUNT(*pbVar24) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar13 = (undefined3)((uint)piVar7 >> 8);
  cVar4 = (char)piVar7 + '}';
  pbVar6 = (byte *)CONCAT31(uVar13,cVar4);
  pbVar24[(int)pbVar6] = pbVar24[(int)pbVar6] + cVar4;
  pbVar24[0x280a0000] = pbVar24[0x280a0000] - (char)((uint)piVar7 >> 8);
  bVar19 = (byte)puVar14 & 7;
  *pbVar6 = *pbVar6 << bVar19 | *pbVar6 >> 8 - bVar19;
  *pbVar5 = *pbVar5 + cVar4;
  cVar28 = (char)puVar30 - *pbVar5;
  uVar22 = (undefined2)((uint)puVar30 >> 0x10);
  cVar34 = (char)((uint)puVar30 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar30 >> 8),cVar28) + 0x7c);
  pcVar8 = (char *)CONCAT22(uVar22,CONCAT11(cVar34,cVar28));
  *pbVar6 = *pbVar6 + cVar4;
  bVar3 = (char)piVar7 + 0xa7U & *pbVar24;
  puVar35 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x7c));
  *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
  bVar3 = bVar3 + 0x2a;
  pbVar6 = (byte *)CONCAT31(uVar13,bVar3);
  *pbVar6 = *pbVar6 + bVar3;
  *pcVar8 = *pcVar8 + cVar28;
  *pbVar24 = *pbVar24 ^ bVar3;
  *pcVar8 = *pcVar8 + bVar3;
  bVar19 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  cVar4 = (bVar3 - *pbVar6) - CARRY1(bVar19,bVar3);
  *(byte *)puVar14 = (byte)*puVar14 + (byte)pbVar24;
  cVar34 = cVar34 + pcVar8[0x7b];
  *(char *)CONCAT31(uVar13,cVar4) = *(char *)CONCAT31(uVar13,cVar4) + cVar4;
  pcVar8 = (char *)CONCAT31(uVar13,cVar4 + 'o');
  *pcVar8 = *pcVar8 + cVar4 + 'o';
  pcVar8 = pcVar8 + 0x2ed7fde6;
  cVar18 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar18;
  cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar34,cVar28)) + 0x7b);
  *pcVar8 = *pcVar8 + cVar18;
  piVar7 = (int *)(CONCAT31((int3)((uint)pcVar8 >> 8),cVar18 + 'o') + 0x6f060000);
  *piVar7 = *piVar7 + (int)piVar7;
  uVar12 = (undefined3)((uint)pbVar24 >> 8);
  bVar3 = (byte)pbVar24 | *pbVar5;
  pbVar25 = (byte *)CONCAT31(uVar12,bVar3);
  uVar31 = CONCAT22(uVar22,CONCAT11(cVar34 + cVar4,cVar28)) | (uint)pbVar5;
  uVar13 = (undefined3)((uint)piVar7 >> 8);
  bVar19 = (byte)piVar7 | *pbVar25;
  pbVar29 = (byte *)CONCAT31(uVar13,bVar19);
  cVar4 = (byte)puVar14 - bVar3;
  puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar4);
  *pbVar29 = *pbVar29 + bVar19;
  pbVar6 = pbVar5 + 4;
  out(*(undefined4 *)pbVar5,(short)pbVar25);
  *pbVar29 = bVar19;
  *pbVar25 = *pbVar25 + cVar4;
  pbVar5 = pbVar5 + 8;
  out(*(undefined4 *)pbVar6,(short)pbVar25);
  *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
  puVar30 = (uint *)(CONCAT31((int3)(uVar31 >> 8),(char)uVar31 - (char)((uint)pbVar24 >> 8)) |
                    (uint)pbVar5);
  pbVar24 = (byte *)CONCAT31(uVar12,(bVar3 | *pbVar5) + (byte)*puVar35);
  cVar4 = bVar19 - (byte)*puVar35;
  puVar9 = (uint *)CONCAT31(uVar13,cVar4 - *(char *)CONCAT31(uVar13,cVar4));
code_r0x00405090:
  *puVar9 = (uint)(pbVar24 + *puVar9);
  cVar4 = (char)puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *puVar14 = *puVar14 - (int)unaff_EBP;
  bVar19 = *pbVar5;
  bVar3 = (byte)pbVar24;
  *pbVar5 = *pbVar5 + bVar3;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4 + CARRY1(bVar19,bVar3);
  *(byte *)puVar14 = (byte)*puVar14 + cVar4;
  uVar31 = *puVar30;
  *(byte *)puVar30 = (byte)*puVar30 + 0x72;
  *(byte *)puVar30 = (byte)*puVar30;
  cVar4 = (char)((uint)pbVar24 >> 8);
  if (SCARRY1((byte)uVar31,'r')) {
    pbVar5 = pbVar5 + *(int *)(pbVar24 + -10);
  }
  else {
    while( true ) {
      *pbVar5 = *pbVar5 + (char)puVar9;
      uVar13 = (undefined3)((uint)puVar9 >> 8);
      cVar18 = (char)puVar9 + (byte)*puVar30;
      pcVar8 = (char *)CONCAT31(uVar13,cVar18);
      puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),
                                 CONCAT11((char)((uint)puVar30 >> 8) +
                                          *(byte *)((int)puVar30 + 0x7b),(char)puVar30));
      *pcVar8 = *pcVar8 + cVar18;
      in_AF = 9 < (cVar18 + 0x6fU & 0xf) | in_AF;
      uVar31 = CONCAT31(uVar13,cVar18 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar17 = (byte)uVar31;
      piVar7 = (int *)CONCAT22((short)(uVar31 >> 0x10),
                               CONCAT11((char)((uint)puVar9 >> 8) + in_AF,bVar17));
      *piVar7 = *piVar7 + (int)piVar7;
      uVar13 = (undefined3)((uint)piVar7 >> 8);
      bVar17 = bVar17 | *(byte *)(piVar7 + 0x354a);
      bVar17 = bVar17 - *(char *)CONCAT31(uVar13,bVar17);
      pbVar6 = (byte *)CONCAT31(uVar13,bVar17);
      bVar19 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar17;
      pbVar5 = pbVar5 + (-(uint)CARRY1(bVar19,bVar17) - *(int *)pbVar6);
      puVar9 = (uint *)(pbVar6 + 0xfc00);
      *pbVar24 = *pbVar24 + cVar4;
      uVar31 = *puVar9;
      bVar19 = (byte)puVar9;
      *(byte *)puVar9 = (byte)*puVar9 + bVar19;
      uVar2 = (uint)CARRY1((byte)uVar31,bVar19);
      uVar31 = *puVar30;
      uVar1 = *puVar30;
      *puVar30 = (uint)((byte *)(uVar1 + (int)puVar9) + uVar2);
      if (!CARRY4(uVar31,(uint)puVar9) && !CARRY4(uVar1 + (int)puVar9,uVar2)) break;
      *(byte *)puVar9 = (byte)*puVar9 + bVar19;
    }
  }
  uVar31 = (uint)puVar9 | *puVar9;
  uVar22 = SUB42(pbVar24,0);
  *pbVar5 = *pbVar5 + (char)uVar31;
  piVar7 = (int *)(uVar31 + 0xc1872);
  if (SCARRY4(uVar31,0xc1872)) {
    cVar18 = (char)piVar7;
    *(char *)piVar7 = *(char *)piVar7 + cVar18;
    *pbVar24 = *pbVar24 + cVar18;
    *(char *)piVar7 = *(char *)piVar7 + cVar18;
    *(byte *)puVar30 = (byte)*puVar30 + (char)puVar14;
    *(char *)piVar7 = *(char *)piVar7 + cVar18;
    *(char *)((int)piVar7 * 2) = *(char *)((int)piVar7 * 2) + bVar3;
    pbVar6 = pbVar5;
    goto code_r0x00405117;
  }
  do {
    bVar19 = *pbVar5;
    bVar3 = (byte)piVar7;
    *pbVar5 = *pbVar5 + bVar3;
    if (CARRY1(bVar19,bVar3)) {
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      uVar13 = (undefined3)((uint)puVar14 >> 8);
      bVar19 = (byte)puVar14 | bRam396f1609;
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      puVar14 = (uint *)CONCAT31(uVar13,bVar19 | *(byte *)CONCAT31(uVar13,bVar19));
      uVar13 = (undefined3)((uint)piVar7 >> 8);
      bVar3 = bVar3 | *pbVar24;
      pcVar8 = (char *)CONCAT31(uVar13,bVar3);
      if ((POPCOUNT(bVar3) & 1U) != 0) {
        pbVar6 = pbVar5 + 4;
        out(*(undefined4 *)pbVar5,uVar22);
        uVar31 = CONCAT22((short)((uint)piVar7 >> 0x10),(ushort)bVar3);
        *pbVar6 = *pbVar6 + bVar3;
        pcVar8 = (char *)(uVar31 | 8);
        cVar18 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + 0x7a);
        puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(cVar18,(char)puVar30));
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar4 = (char)pcVar8 + 'o';
        piVar7 = (int *)CONCAT31((int3)(uVar31 >> 8),cVar4);
        *(char *)piVar7 = (char)*piVar7 + cVar4;
        *(byte *)puVar14 = (byte)*puVar14 + 1;
        pbVar5 = pbVar5 + 8;
        out(*(undefined4 *)pbVar6,uVar22);
        pbVar24 = (byte *)((uint)pbVar24 ^ uRam08122c04);
        iVar10 = CONCAT31((int3)((uint)(*piVar7 * 0x17070600) >> 8),2);
        *(char *)(iVar10 * 2) = *(char *)(iVar10 * 2) - cVar18;
        do {
          bVar19 = (byte)iVar10;
          *pbVar5 = *pbVar5 + bVar19;
          bVar36 = CARRY1(bVar19,(byte)*puVar30);
          uVar13 = (undefined3)((uint)iVar10 >> 8);
          cVar4 = bVar19 + (byte)*puVar30;
          pbVar6 = (byte *)CONCAT31(uVar13,cVar4);
          uVar22 = in_DS;
          uVar23 = uStack_4c;
          if (SCARRY1(bVar19,(byte)*puVar30) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar6 = *pbVar6 + cVar4;
          uVar31 = CONCAT31(uVar13,cVar4 + '\'') + 0x1ebd9f3;
          uStack_50 = (undefined1)uStack_c;
          uStack_4f = (undefined1)((ushort)uStack_c >> 8);
          piVar7 = (int *)(uVar31 ^ 0x73060000);
          puVar14 = (uint *)((int)puVar14 + 1);
          *piVar7 = (int)(*piVar7 + (int)piVar7);
          puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),
                                     CONCAT11((byte)((uint)puVar30 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar30));
          cVar4 = (char)uVar31;
          *(char *)piVar7 = (char)*piVar7 + cVar4;
          uVar31 = CONCAT31((int3)((uint)piVar7 >> 8),cVar4 + '\x02');
          bVar36 = 0xd9f2d2da < uVar31;
          iVar10 = uVar31 + 0x260d2d25;
          pcVar8 = unaff_EBP;
          do {
            uVar13 = (undefined3)((uint)iVar10 >> 8);
            bVar3 = (char)iVar10 + -2 + bVar36;
            pbVar6 = (byte *)CONCAT31(uVar13,bVar3);
            bVar19 = *pbVar6;
            *pbVar6 = *pbVar6 + bVar3;
            bVar17 = (byte)puVar30;
            uStack_4c = uStack_c;
            if (CARRY1(bVar19,bVar3)) {
              *pbVar6 = *pbVar6 + bVar3;
              puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),
                                         CONCAT11((byte)((uint)puVar30 >> 8) | pcVar8[0x7f],bVar17))
              ;
              *pbVar6 = *pbVar6 + bVar3;
              pbVar6 = (byte *)CONCAT31(uVar13,bVar3 + 0x2a);
              *pbVar6 = *pbVar6 + bVar3 + 0x2a;
              *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar24;
              uVar22 = in_DS;
              while( true ) {
                in_DS = uVar22;
                bVar3 = (byte)pbVar6;
                *pbVar24 = *pbVar24 ^ bVar3;
                *pbVar24 = *pbVar24 + (char)puVar30;
                *pbVar6 = *pbVar6 + bVar3;
                *(byte *)puVar30 = (byte)*puVar30 + (char)((uint)pbVar24 >> 8);
                bVar19 = *pbVar6;
                *pbVar6 = *pbVar6 + bVar3;
                uVar31 = *puVar30;
                uVar1 = *puVar30;
                *puVar30 = (uint)(pbVar6 + uVar1 + CARRY1(bVar19,bVar3));
                uVar13 = (undefined3)((uint)pbVar6 >> 8);
                if (CARRY4(uVar31,(uint)pbVar6) ||
                    CARRY4((uint)(pbVar6 + uVar1),(uint)CARRY1(bVar19,bVar3))) break;
                *pbVar5 = *pbVar5 + bVar3;
                pcVar15 = (char *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                           CONCAT11((char)((uint)puVar14 >> 8) + *pbVar6,
                                                    (char)puVar14));
                *pbVar5 = *pbVar5 + bVar3;
                piVar7 = (int *)CONCAT31(uVar13,bVar3 | (byte)*puVar30);
                pbVar6 = pbVar5;
                while( true ) {
                  pbVar5 = pbVar6 + 4;
                  out(*(undefined4 *)pbVar6,(short)pbVar24);
                  pbVar24 = pbVar24 + 1;
                  *piVar7 = (int)(*piVar7 + (int)piVar7);
                  bVar17 = (byte)((uint)pcVar15 >> 8) | *pbVar24;
                  uVar13 = (undefined3)((uint)piVar7 >> 8);
                  bVar3 = (byte)piVar7 ^ *pbVar24;
                  pcVar11 = (char *)CONCAT31(uVar13,bVar3);
                  cRam282b0000 = cRam282b0000 - bVar17;
                  *pcVar11 = *pcVar11 + bVar3;
                  unaff_EBP = pcVar8 + -*(int *)pbVar24;
                  uStack_50 = (undefined1)in_DS;
                  uStack_4f = (undefined1)((ushort)in_DS >> 8);
                  bVar19 = *(byte *)((int)puVar35 + 0x17);
                  *pcVar11 = *pcVar11 + bVar3;
                  puVar14 = (uint *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                             CONCAT11(bVar17 + bVar19 | *pbVar24,(char)pcVar15));
                  *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
                  *(byte *)((int)pcVar11 * 2) = *(byte *)((int)pcVar11 * 2) ^ bVar3;
                  in_AF = 9 < (bVar3 & 0xf) | in_AF;
                  bVar3 = bVar3 + in_AF * -6;
                  pbVar6 = (byte *)CONCAT31(uVar13,bVar3 + (0x9f < bVar3 | in_AF * (bVar3 < 6)) *
                                                           -0x60);
                  *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
                  *(char *)((int)pbVar6 * 2) =
                       *(char *)((int)pbVar6 * 2) + (char)((uint)pbVar24 >> 8);
                  bVar36 = CARRY1((byte)*puVar14,(byte)pbVar24);
                  *(byte *)puVar14 = (byte)*puVar14 + (byte)pbVar24;
                  uVar22 = in_DS;
                  uVar23 = uStack_c;
GenerateStatusText:
                  in_DS = uVar23;
                  pcVar8 = unaff_EBP;
                  uStack_4c = in_DS;
                  if (!bVar36) break;
                  *pbVar6 = *pbVar6 + (char)pbVar6;
                  iVar10 = CONCAT31((int3)((uint)puVar14 >> 8),(byte)puVar14 | *pbVar24);
                  uVar22 = (undefined2)((uint)puVar30 >> 0x10);
                  cVar28 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + 0x7d);
                  *pbVar6 = *pbVar6 + (char)pbVar6;
                  *(byte *)puVar35 = (byte)*puVar35 - (char)((uint)puVar14 >> 8);
                  iVar10 = iVar10 - *(int *)(iVar10 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar28,(char)puVar30)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar5,(short)pbVar24);
                  pbVar24 = (byte *)CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar6 = pbVar5 + 8;
                  out(*(undefined4 *)(pbVar5 + 4),CONCAT11(uStack_4f,uStack_50));
                  pcVar8 = unaff_EBP + 1;
                  cVar18 = (char)iVar10;
                  pcVar15 = (char *)CONCAT22((short)((uint)iVar10 >> 0x10),
                                             CONCAT11((byte)((uint)iVar10 >> 8) |
                                                      *(byte *)((int)puVar35 + 0x46),cVar18));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_c = CONCAT11(uStack_4f,uStack_50);
                  uVar13 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar6,0xf0)) >> 8);
                  piVar7 = (int *)CONCAT31(uVar13,0x5f);
                  puVar35 = (uint *)((int)puVar35 + 1);
                  *piVar7 = (int)(*piVar7 + (int)piVar7);
                  puVar30 = (uint *)CONCAT22(uVar22,CONCAT11(cVar28 + cVar4 | pbVar5[-0x78],
                                                             (char)puVar30));
                  *(char *)piVar7 = (char)*piVar7 + '_';
                  puVar14 = (uint *)CONCAT31(uVar13,0x8c);
                  *(byte **)(pbVar6 + (int)puVar35 * 8) =
                       pbVar24 + *(int *)(pbVar6 + (int)puVar35 * 8);
                  bVar19 = *pbVar6;
                  *pbVar6 = *pbVar6 + 0x8c;
                  if (bVar19 < 0x74) {
                    *pbVar24 = *pbVar24 + cVar18;
                    *(byte *)puVar30 = (byte)*puVar30 >> 1;
                    *(char *)puVar14 = (char)*puVar14 + -0x74;
                    *puVar14 = (uint)(pcVar8 + *puVar14);
                    *puVar14 = *puVar14 << 1 | (uint)((int)*puVar14 < 0);
                    *pbVar24 = *pbVar24 + cVar18;
                    unaff_EBP[2] = unaff_EBP[2] - cVar18;
                    *pbVar24 = *pbVar24 + cVar18;
                    pbVar5 = (byte *)CONCAT31(uVar13,0x83);
                    puVar14 = puVar30;
                    goto code_r0x00405312;
                  }
                  *puVar14 = (uint)(*puVar14 + (int)puVar14);
                  piVar7 = (int *)(CONCAT31(uVar13,(byte)puVar14[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar14[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar7 = (int *)((int)piVar7 + *(int *)pbVar6);
                }
              }
              *pbVar24 = *pbVar24 + bVar3;
              *(byte *)puVar30 = (byte)*puVar30 - (char)pbVar24;
              *pbVar6 = *pbVar6 + bVar3;
              pbVar6 = (byte *)CONCAT31(uVar13,bVar3 | (byte)*puVar30);
            }
            else {
              cVar4 = (char)puVar14;
              *pbVar24 = *pbVar24 + cVar4;
              *(byte **)pbVar6 = pbVar24 + *(int *)pbVar6;
              *pbVar6 = *pbVar6 + bVar3;
              bVar3 = bVar3 + *pbVar6;
              pbVar6 = (byte *)CONCAT31(uVar13,bVar3);
              if (-1 < (char)bVar3) {
                *(byte *)puVar30 = (byte)*puVar30 + bVar17;
                out(*(undefined4 *)pbVar5,(short)pbVar24);
                pbVar24 = pbVar24 + 1;
                *pbVar6 = *pbVar6 + bVar3;
                puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),
                                           bVar17 | (byte)((uint)iVar10 >> 8));
                cVar18 = bVar3 - (byte)*puVar14;
                pcVar15 = (char *)CONCAT31(uVar13,cVar18);
                *pcVar15 = *pcVar15 + cVar18 + (bVar3 < (byte)*puVar14);
                *pbVar24 = *pbVar24 + cVar18;
                pcVar15 = (char *)((int)pcVar15 * 2 + 0x79);
                *pcVar15 = *pcVar15 + (char)((uint)pbVar24 >> 8);
                pbVar6 = (byte *)in((short)pbVar24);
                pbVar5 = pbVar5 + 4;
              }
              *pbVar5 = *pbVar5 + cVar4;
              *pbVar6 = *pbVar6 + (char)pbVar6;
              *pbVar6 = *pbVar6 + (char)pbVar6;
              uStack_50 = (undefined1)in_DS;
              uStack_4f = (undefined1)((ushort)in_DS >> 8);
              bVar19 = *pbVar6;
              bVar17 = (byte)((uint)puVar14 >> 8);
              bVar21 = bVar17 + *pbVar6;
              iVar10 = *(int *)pbVar6;
              *pbVar24 = *pbVar24 + cVar4;
              bVar3 = (char)(pbVar6 + (uint)CARRY1(bVar17,bVar19) + iVar10) - (byte)*puVar30;
              pbVar6 = (byte *)CONCAT31((int3)((uint)(pbVar6 + (uint)CARRY1(bVar17,bVar19) + iVar10)
                                              >> 8),bVar3);
              *(byte *)puVar30 = (byte)*puVar30 ^ bVar3;
              *pcVar8 = *pcVar8 + (char)puVar30;
              *pbVar6 = *pbVar6 + bVar3;
              *pbVar6 = *pbVar6 + bVar3;
              *pbVar6 = *pbVar6 + bVar3;
              puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                         CONCAT11(bVar21 + *pbVar6,cVar4));
              pbVar6 = pbVar6 + (uint)CARRY1(bVar21,*pbVar6) + *(int *)pbVar6;
              *pbVar24 = *pbVar24 + cVar4;
              pbVar5 = pbVar5 + *(int *)(pbVar24 + 0x3e);
            }
            *pbVar5 = *pbVar5 + (char)pbVar6;
            cVar4 = (char)pbVar6 + 'r';
            pbVar5 = pbVar5 + -1;
            uVar31 = CONCAT31((int3)((uint)pbVar6 >> 8),cVar4);
            *pbVar5 = *pbVar5 + cVar4;
            bVar36 = 0xfff38f8d < uVar31;
            iVar10 = uVar31 + 0xc7072;
            unaff_EBP = pcVar8;
          } while (SCARRY4(uVar31,0xc7072));
        } while( true );
      }
      *pcVar8 = *pcVar8 + bVar3;
      bVar3 = bVar3 + 0x6f;
      pbVar6 = (byte *)CONCAT31(uVar13,bVar3);
      bVar19 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar3;
      uVar13 = (undefined3)
               ((uint)(pbVar6 + (uint)CARRY1(bVar19,bVar3) + *(int *)((int)puVar14 + (int)pbVar24))
               >> 8);
      cVar18 = (char)(pbVar6 + (uint)CARRY1(bVar19,bVar3) + *(int *)((int)puVar14 + (int)pbVar24)) +
               'E';
      pcVar8 = (char *)CONCAT31(uVar13,cVar18);
      *pcVar8 = *pcVar8 + cVar18;
      cVar18 = cVar18 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar13,cVar18);
      *pcVar8 = *pcVar8 + cVar18;
      puVar9 = (uint *)CONCAT31(uVar13,cVar18 + *pcVar8);
      *(char *)puVar9 = (char)*puVar9 + cVar18 + *pcVar8;
      pbVar6 = (byte *)((uint)puVar9 | *puVar9);
      bVar19 = *pbVar6;
      bVar3 = (byte)pbVar6;
      *pbVar6 = *pbVar6 + bVar3;
      piVar7 = (int *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar3 + CARRY1(bVar19,bVar3));
      pbVar6 = pbVar5;
code_r0x00405117:
      *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
      puVar30 = (uint *)((int)puVar30 - *puVar30);
      pbVar5 = pbVar6 + 4;
      out(*(undefined4 *)pbVar6,uVar22);
    }
    *pbVar24 = *pbVar24 + (char)puVar14;
    bVar36 = puVar30 < (uint *)*piVar7;
    puVar30 = (uint *)((int)puVar30 - *piVar7);
    bVar19 = (byte)((uint)puVar14 >> 8);
    *(byte *)((int)puVar35 + 0x39) = (*(byte *)((int)puVar35 + 0x39) - bVar19) - bVar36;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    uVar31 = *puVar30;
    *(int *)((int)puVar35 + 0x39) = *(int *)((int)puVar35 + 0x39) - (int)unaff_EBP;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                               CONCAT11(bVar19 | (byte)uVar31 | (byte)*puVar30,(char)puVar14));
    *(char *)(piVar7 + 10) = (char)piVar7[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
  bVar19 = (char)piVar7 + 0x28;
  pbVar5 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),bVar19);
  *pbVar5 = *pbVar5 ^ bVar19;
  *(byte *)puVar30 = (byte)*puVar30 + (char)((uint)pcVar15 >> 8);
  bVar19 = *pbVar24;
  *pbVar24 = *pbVar24 + (byte)pcVar15;
  piVar7 = (int *)(((uint)pbVar5 | 0x1496f09) + *puVar35 + (uint)CARRY1(bVar19,(byte)pcVar15));
  pbVar29 = pbVar6 + 4;
  out(*(undefined4 *)pbVar6,(short)pbVar24);
  pbVar25 = pbVar24 + -1;
  *piVar7 = *piVar7 + (int)piVar7;
  pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | (byte)*puVar30);
  cVar4 = (char)piVar7 + '\x13';
  pbVar5 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),cVar4);
  puVar14 = puVar30;
  pbVar6 = pbVar29;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar24 = *pbVar24 - (char)((uint)pbVar25 >> 8);
    *pbVar5 = *pbVar5 + cVar4;
code_r0x00405396:
    bVar19 = *pbVar5;
    bVar3 = (byte)pbVar5;
    *pbVar5 = *pbVar5 + bVar3;
    *(byte **)pbVar29 = pbVar5 + (uint)CARRY1(bVar19,bVar3) + *(int *)pbVar29;
    out(*(undefined4 *)pbVar29,(short)pbVar24);
    *(byte **)pbVar5 = pbVar5 + *(int *)pbVar5;
    *(byte **)pbVar5 = pbVar5 + *(int *)pbVar5;
    pcVar8 = (char *)CONCAT22((short)((uint)pbVar5 >> 0x10),
                              CONCAT11((byte)((uint)pbVar5 >> 8) | pbVar29[4],bVar3));
    *(char **)((int)puVar35 + -1) = pcVar8 + *(int *)((int)puVar35 + -1);
    out(*(undefined4 *)(pbVar29 + 4),(short)pbVar24);
    *pcVar8 = *pcVar8 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar5 = *pbVar5 + (char)pbVar5;
  piVar7 = (int *)CONCAT31((int3)((uint)pbVar5 >> 8),(char)pbVar5 + 'o');
  puVar30 = (uint *)((int)puVar14 + -1);
  *piVar7 = *piVar7 + (int)piVar7;
  uVar13 = (undefined3)((uint)pbVar24 >> 8);
  piVar7 = (int *)((int)piVar7 + 0x1b7e);
  bVar17 = (byte)pbVar24 | *(byte *)puVar30 | *(byte *)puVar30;
  iRam04115f2c = iRam04115f2c + (int)piVar7;
  out(*(undefined4 *)pbVar6,(short)CONCAT31(uVar13,bVar17));
  *piVar7 = *piVar7 + (int)piVar7;
  bVar17 = bVar17 | (byte)piVar7;
  iVar26 = CONCAT31(uVar13,bVar17);
  pbVar5 = (byte *)((int)piVar7 - *piVar7);
  cVar4 = (char)pbVar5;
  *pcVar15 = *pcVar15 + cVar4;
  cVar18 = (char)pcVar15 - bVar17;
  *pbVar5 = *pbVar5 + cVar4;
  uVar22 = (undefined2)((uint)pcVar15 >> 0x10);
  bVar3 = (byte)((uint)pcVar15 >> 8) | *pbVar5;
  pcVar8 = pcVar8 + -1;
  *(byte **)pbVar5 = pbVar5 + *(int *)pbVar5;
  bVar19 = *(byte *)(CONCAT22(uVar22,CONCAT11(bVar3,cVar18)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar5;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar8;
  *pbVar5 = *pbVar5 + cVar4;
  bVar19 = bVar3 | bVar19 | *(byte *)puVar30;
  iVar16 = CONCAT22(uVar22,CONCAT11(bVar19,cVar18));
  pbVar25 = (byte *)((uint)(pbVar6 + 4) ^ *(uint *)(iVar26 + -0x43));
  iVar10 = *(int *)pbVar5;
  *(byte **)pbVar5 = pbVar5 + *(int *)pbVar5;
  if (SCARRY4(iVar10,(int)pbVar5)) {
    *pbVar5 = *pbVar5 + cVar4;
  }
  pbVar24 = pbVar5 + 0x5674;
  puVar35 = (uint *)((int)puVar35 +
                    (-(uint)((byte *)0xffffa98b < pbVar5) - *(int *)(pbVar25 + -0x7f)));
  bVar3 = (byte)pbVar24;
  *pbVar24 = *pbVar24 + bVar3;
  uVar12 = (undefined3)((uint)pbVar24 >> 8);
  bVar21 = bVar3 + 0x2d;
  piVar7 = (int *)CONCAT31(uVar12,bVar21);
  *(uint *)(pbVar25 + (int)puVar35 * 8) =
       *(int *)(pbVar25 + (int)puVar35 * 8) + iVar26 + (uint)(0xd2 < bVar3);
  bVar3 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar21;
  if (!CARRY1(bVar3,bVar21)) {
    do {
      pbVar24 = (byte *)(iVar26 + 1);
      bVar3 = (byte)piVar7;
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      bVar17 = (byte)((uint)piVar7 >> 8);
      bVar21 = (byte)puVar30 | bVar17;
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar21);
      out(*(undefined4 *)pbVar25,(short)pbVar24);
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      uVar22 = (undefined2)((uint)iVar16 >> 0x10);
      cVar4 = (char)iVar16;
      pbVar5 = (byte *)CONCAT22(uVar22,CONCAT11((byte)((uint)iVar16 >> 8) | *pbVar24,cVar4));
      bVar19 = *pbVar5;
      *pbVar5 = *pbVar5 + bVar3;
      *(byte *)piVar7 = (char)*piVar7 + bVar3 + CARRY1(bVar19,bVar3);
      *pbVar24 = *pbVar24 + bVar3;
      *(byte *)puVar35 = (byte)*puVar35 + bVar17;
      *(int *)((int)piVar7 * 2) = *(int *)((int)piVar7 * 2) + CONCAT22(uVar22,CONCAT11(0x1c,cVar4));
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      cVar18 = (char)pbVar24;
      *(byte *)puVar14 = (byte)*puVar14 + cVar18;
      *(byte *)((int)piVar7 * 2) = *(byte *)((int)piVar7 * 2) ^ bVar3;
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      pbVar5 = pbVar25 + 8;
      out(*(undefined4 *)(pbVar25 + 4),(short)pbVar24);
      piVar7 = (int *)0xa0a0000;
      *pbVar24 = *pbVar24;
      bVar3 = cVar4 - cVar18;
      iVar16 = CONCAT22(uVar22,CONCAT11((byte)puVar35[0x14] | 0x1c | bRam0ca87216,bVar3));
      *pbVar24 = *pbVar24;
      bVar19 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar3;
      if (!CARRY1(bVar19,bVar3)) {
        piVar7 = (int *)0x1e7b7000;
        bVar19 = (byte)((uint)puVar30 >> 8) | *(byte *)(iVar26 + 3);
        puVar14 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(bVar19,bVar21));
        if (bVar19 != 0) {
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar18 + pbVar5[(int)puVar35 * 8]);
          piVar7 = (int *)0x6d7d7000;
          iVar16 = iVar16 + 1;
        }
      }
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      iVar26 = CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | pbVar5[(int)puVar35 * 8]);
      *(char *)piVar7 = (char)*piVar7;
      piVar7 = (int *)CONCAT31((int3)((uint)piVar7 >> 8),0xf9);
      *puVar35 = (uint)((int)piVar7 + *puVar35 + 1);
      pbVar25 = pbVar25 + 0xc;
      out(*(undefined4 *)pbVar5,(short)iVar26);
      puVar30 = puVar14;
    } while( true );
  }
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  bVar21 = bVar21 | *(byte *)((int)piVar7 + 0x4000081);
  piVar7 = (int *)CONCAT31(uVar12,bVar21);
  if ('\0' < (char)bVar21) {
    *(byte *)piVar7 = (char)*piVar7 + bVar21;
    puVar9 = (uint *)CONCAT31(uVar12,bVar21 + 0x28);
    *puVar9 = *puVar9 ^ (uint)puVar9;
    *(byte *)puVar30 = *(byte *)puVar30 + bVar19;
    cVar4 = (bVar21 + 0x28) - bVar19;
    pcVar8 = (char *)CONCAT31(uVar12,cVar4);
    *pcVar8 = *pcVar8 + cVar4;
    pbVar24 = (byte *)CONCAT31(uVar13,bVar17 | *(byte *)puVar30);
    pcVar15 = (char *)CONCAT22((short)((uint)puVar30 >> 0x10),
                               CONCAT11((char)((uint)puVar30 >> 8) + *(byte *)((int)puVar14 + 0x7d),
                                        (char)puVar30));
    *pcVar8 = *pcVar8 + cVar4;
    pbVar5 = (byte *)CONCAT31(uVar12,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar12,cVar4 + 0x39U));
    *pcVar15 = *pcVar15 + bVar19;
    pbVar29 = pbVar25 + 4;
    out(*(undefined4 *)pbVar25,(short)pbVar24);
    goto code_r0x00405396;
  }
  pbVar6 = pbVar25 + 4;
  out(*(undefined4 *)pbVar25,(short)iVar26);
  pcVar15 = (char *)(iVar16 + -1);
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  pbVar24 = (byte *)CONCAT31(uVar13,bVar17 | *(byte *)puVar30);
  goto code_r0x004052ee;
}


