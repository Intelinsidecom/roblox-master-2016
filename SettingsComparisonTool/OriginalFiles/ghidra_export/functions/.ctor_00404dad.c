/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404dad
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : undefined4 .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : cVar18, iVar17, bVar20, bVar19, bVar22, uVar21, pbVar24, uVar23, iVar26, pbVar25, cVar28, cVar27, pbVar29, unaff_EBX, uVar31, puVar30, cVar33, bVar32, unaff_EBP, cVar34, unaff_EDI, unaff_ESI, in_ES, puVar35, in_AF, in_DS, bVar36, param_1, param_2, uStack_4f, uStack_50, uStack_4c, uStack_4e, uVar1, uStack_c, bVar3, uVar2, cVar5, bVar4, pbVar6, in_EAX, piVar8, pbVar7, puVar10, pcVar9, pcVar12, iVar11, uVar14, uVar13, pcVar16, puVar15
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
  byte bVar4;
  char cVar5;
  byte *in_EAX;
  byte *pbVar6;
  undefined3 uVar13;
  byte *pbVar7;
  int *piVar8;
  undefined3 uVar14;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  char cVar18;
  byte bVar19;
  byte bVar20;
  undefined2 uVar21;
  uint *puVar15;
  char *pcVar16;
  int iVar17;
  byte bVar22;
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
    bVar22 = (byte)((uint)param_1 >> 8);
    bVar19 = *in_EAX;
    uVar21 = (undefined2)((uint)param_1 >> 0x10);
    bVar4 = (byte)param_1;
    pbVar6 = in_EAX + (uint)CARRY1(bVar22,*in_EAX) + *(int *)in_EAX;
    *param_2 = *param_2 + bVar4;
    cVar18 = ((bVar22 + bVar19) - *param_2) + *pbVar6;
    pcVar9 = (char *)CONCAT22(uVar21,CONCAT11(cVar18,bVar4));
    puVar15 = unaff_EDI + 1;
    uVar31 = in((short)param_2);
    *unaff_EDI = uVar31;
    cVar5 = (char)pbVar6;
    *pbVar6 = *pbVar6 + cVar5;
    uVar14 = (undefined3)((uint)param_2 >> 8);
    bVar22 = (byte)param_2 | *unaff_ESI;
    pcVar16 = (char *)CONCAT31(uVar14,bVar22);
    *pcVar9 = *pcVar9 + '\x01';
    bVar19 = (cVar18 - *pcVar16) + *pbVar6;
    pcVar9 = (char *)CONCAT22(uVar21,CONCAT11(bVar19,bVar4));
    unaff_EDI = unaff_EDI + 2;
    uVar31 = in((short)pcVar16);
    *puVar15 = uVar31;
    *pbVar6 = *pbVar6 + cVar5;
    bVar22 = bVar22 | *unaff_ESI;
    pbVar24 = (byte *)CONCAT31(uVar14,bVar22);
    *pcVar9 = *pcVar9 + '\x01';
    cVar18 = bVar4 - pbVar24[2];
    if ((POPCOUNT(cVar18) & 1U) == 0) break;
    *(uint *)pbVar6 = (*(int *)pbVar6 - (int)pbVar6) - (uint)(bVar4 < pbVar24[2]);
    param_1 = CONCAT22(uVar21,CONCAT11(bVar19 + (byte)iRam00000c00,cVar18));
    in_EAX = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar19,(byte)iRam00000c00));
    *pbVar24 = *pbVar24 + cVar18;
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *unaff_ESI);
    param_2 = pbVar24;
  }
  *pbVar6 = *pbVar6 + cVar5;
  bVar3 = cVar5 + 0x7b;
  pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar3);
  pbVar7[unaff_EBX] = pbVar7[unaff_EBX] + bVar3;
  pbVar6 = unaff_ESI + 4;
  uVar23 = SUB42(pbVar24,0);
  out(*(undefined4 *)unaff_ESI,uVar23);
  pbVar29 = (byte *)(unaff_EBX + -1);
  *pbVar7 = *pbVar7 + bVar3;
  bVar4 = *pbVar24;
  piVar8 = (int *)CONCAT22(uVar21,CONCAT11(bVar19 | bVar4,cVar18));
  *pbVar7 = *pbVar7 + bVar3;
  *pbVar29 = *pbVar29 + bVar22;
  *pbVar29 = *pbVar29 ^ bVar3;
  *pbVar24 = *pbVar24 + (bVar19 | bVar4);
  *pbVar7 = *pbVar7 + bVar3;
  do {
    bVar20 = (byte)((uint)piVar8 >> 8);
    *(byte *)unaff_EDI = (byte)*unaff_EDI + bVar20;
    bVar19 = *pbVar7;
    bVar4 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar4;
    *(int *)(unaff_EBX + 0x17) =
         (int)(pbVar6 + (uint)CARRY1(bVar19,bVar4) + *(int *)(unaff_EBX + 0x17));
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    uVar13 = (undefined3)((uint)pbVar7 >> 8);
    bVar4 = bVar4 | *pbVar6;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x34));
    *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
    bVar19 = bVar4 + 2;
    cVar5 = (char)((uint)param_2 >> 8);
    bVar3 = (byte)piVar8;
    if ((POPCOUNT(bVar19) & 1U) != 0) {
      pbVar7 = (byte *)CONCAT31(uVar13,bVar4 + 0x15 + (0xfd < bVar4));
      if (0xec < bVar19 || CARRY1(bVar4 + 0x15,0xfd < bVar4)) {
        *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      }
code_r0x00404e60:
      unaff_EBP = unaff_EBP + -*(int *)pbVar24;
      bVar19 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      pbVar6 = pbVar6 + (-(uint)CARRY1(bVar19,(byte)pbVar7) - *(int *)pbVar7);
      pbVar7 = pbVar7 + *(int *)pbVar7;
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      *(char *)piVar8 = (char)*piVar8 + cVar5;
      bVar19 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      *(byte **)(pbVar29 + (int)pbVar24) =
           pbVar24 + (uint)CARRY1(bVar19,(byte)pbVar7) + *(int *)(pbVar29 + (int)pbVar24);
      pbVar7 = pbVar7 + 0x73061314;
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      uVar13 = (undefined3)((uint)piVar8 >> 8);
      bVar3 = bVar3 | *pbVar24;
      pcVar16 = (char *)CONCAT31(uVar13,bVar3);
      *pbVar7 = *pbVar7 + (char)pbVar7;
      cVar5 = (char)pbVar7 + 'o';
      pcVar9 = (char *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar5);
      *pcVar9 = *pcVar9 + cVar5;
      out(*(undefined4 *)pbVar6,uVar23);
      bVar19 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar3;
      pcVar9 = pcVar9 + (uint)CARRY1(bVar19,bVar3) + *unaff_EDI;
      *pcVar9 = *pcVar9 + (char)pcVar9;
      *pcVar16 = *pcVar16 + bVar22;
      pbVar7 = pbVar6 + 8;
      out(*(undefined4 *)(pbVar6 + 4),uVar23);
      *pbVar24 = *pbVar24 + bVar3;
      piVar8 = (int *)((uint)pcVar9 | *unaff_EDI);
      pcVar16[0x390a0000] = pcVar16[0x390a0000] - bVar20;
      pbVar29 = (byte *)0x7000000;
      *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar20;
      *piVar8 = *piVar8 + (int)piVar8;
      puVar15 = (uint *)CONCAT31(uVar13,bVar3 | *(byte *)((int)piVar8 + (int)pcVar16));
      *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) - bVar20;
      cRam07000000 = cRam07000000 + bVar20;
      piVar8 = (int *)((uint)piVar8 | 0x777b02);
      pbVar6 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      bVar36 = SCARRY1(*pbVar6,(char)piVar8);
      *pbVar6 = *pbVar6 + (char)piVar8;
      bVar19 = *pbVar6;
      *(char *)piVar8 = (char)*piVar8;
      uStack_c = in_DS;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar13,bVar19) = *(char *)CONCAT31(uVar13,bVar19) + bVar19;
    bVar4 = bVar4 + 0x71;
    pbVar7 = (byte *)CONCAT31(uVar13,bVar4);
    *pbVar7 = *pbVar7;
    *pbVar6 = *pbVar6 + 1;
    *piVar8 = (*piVar8 - (int)pbVar7) - (uint)(0x90 < bVar19);
    bVar19 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar4;
    if (!CARRY1(bVar19,bVar4)) goto code_r0x00404e60;
    *pbVar7 = *pbVar7 + bVar4;
    uVar21 = (undefined2)((uint)piVar8 >> 0x10);
    bVar20 = bVar20 | *pbVar7;
    pbVar7 = pbVar7 + -*(int *)pbVar7;
    *pbVar29 = *pbVar29 + bVar20;
    cVar18 = bVar3 - pbVar24[2];
    piVar8 = (int *)CONCAT31((int3)(CONCAT22(uVar21,CONCAT11(bVar20,bVar3)) >> 8),cVar18);
  } while ((POPCOUNT(cVar18) & 1U) != 0);
  cVar28 = (char)pbVar7;
  *pbVar7 = *pbVar7 + cVar28;
  uVar13 = (undefined3)((uint)pbVar7 >> 8);
  pcVar9 = (char *)CONCAT31(uVar13,cVar28 + '{');
  out(*(undefined4 *)pbVar6,uVar23);
  *pcVar9 = *pcVar9 + cVar28 + '{';
  bVar4 = cVar28 + 0x7e;
  pbVar6 = (byte *)CONCAT31(uVar13,bVar4);
  pbVar7 = unaff_ESI + 0xc;
  out(*(undefined4 *)(unaff_ESI + 8),uVar23);
  pbVar29 = (byte *)(unaff_EBX + -2);
  *pbVar6 = *pbVar6 + bVar4;
  bVar19 = *pbVar24;
  puVar15 = (uint *)CONCAT22(uVar21,CONCAT11(bVar20 | bVar19,cVar18));
  *pbVar6 = *pbVar6 + bVar4;
  *pbVar29 = *pbVar29 + bVar22;
  *pbVar29 = *pbVar29 ^ bVar4;
  *pbVar24 = *pbVar24 + (bVar20 | bVar19);
  *pbVar6 = *pbVar6 + bVar4;
  *pbVar6 = *pbVar6 + cVar5;
  bVar19 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  *(int *)(unaff_EBX + 0x18) =
       (int)(pbVar7 + (uint)CARRY1(bVar19,bVar4) + *(int *)(unaff_EBX + 0x18));
  *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
  bVar4 = bVar4 | *pbVar7;
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x33));
  *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
  bVar36 = SCARRY1(bVar4,'\x02');
  bVar19 = bVar4 + 2;
  piVar8 = (int *)CONCAT31(uVar13,bVar19);
  if ((POPCOUNT(bVar19) & 1U) == 0) {
    *(byte *)piVar8 = (char)*piVar8 + bVar19;
    return CONCAT31(uVar13,bVar4 + 0x71);
  }
code_r0x00404ebf:
  bVar4 = (byte)piVar8;
  uVar13 = (undefined3)((uint)piVar8 >> 8);
  if (bVar19 != 0 && bVar36 == (char)bVar19 < '\0') {
    *(byte *)piVar8 = (char)*piVar8 + bVar4;
    *(byte **)(pbVar7 + (int)unaff_EDI * 8) =
         pbVar24 + (uint)(0xd2 < bVar4) + *(int *)(pbVar7 + (int)unaff_EDI * 8);
    return CONCAT31(uVar13,bVar4 + 0x2d);
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar19 = *pbVar29;
  *(char **)pbVar7 = (char *)(*(int *)pbVar7 + (int)piVar8);
  bVar3 = (byte)((uint)puVar15 >> 8);
  *(byte *)piVar8 = (char)*piVar8 - bVar3;
  *(byte *)piVar8 = (char)*piVar8 + bVar4;
  pbVar24 = (byte *)(CONCAT31(uVar14,bVar22 | bVar19) - *(int *)pbVar29);
  puVar35 = (uint *)CONCAT31(uVar13,bVar4 + 6);
  *(uint *)(pbVar29 + (int)pbVar7 * 2) =
       (int)puVar35 + (uint)(0xf9 < bVar4) + *(int *)(pbVar29 + (int)pbVar7 * 2);
  *(byte *)puVar15 = (byte)*puVar15 ^ bVar4 + 6;
  bVar4 = (byte)puVar15;
  *pbVar24 = *pbVar24 + bVar4;
  pbVar6 = pbVar7 + 4;
  uVar21 = SUB42(pbVar24,0);
  out(*(undefined4 *)pbVar7,uVar21);
  *puVar15 = *puVar15 ^ (uint)puVar35;
  *pbVar24 = *pbVar24 + bVar4;
  puVar30 = (uint *)(pbVar29 + -*(int *)pbVar29);
  *(uint *)((int)unaff_EDI + 0x31) = *(uint *)((int)unaff_EDI + 0x31) | (uint)unaff_EBP;
  *puVar35 = *puVar35 + (int)puVar35;
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar3 | (byte)*puVar30,bVar4));
  *(byte **)(pbVar24 + 0x6e) = pbVar6 + *(int *)(pbVar24 + 0x6e);
  piVar8 = (int *)((uint)puVar35 | *puVar35);
  bVar22 = (byte)puVar30;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar22;
  bVar19 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar4;
  if (CARRY1(bVar19,bVar4)) {
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    bVar19 = pbVar24[0x11];
    uVar23 = (undefined2)((uint)puVar30 >> 0x10);
    out(*(undefined4 *)pbVar6,uVar21);
    puVar15 = (uint *)((int)puVar15 + 1);
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    bVar32 = (byte)((uint)puVar30 >> 8) | bVar19 | *pbVar24;
    pcVar9 = (char *)((int)piVar8 + -0x21000001);
    bVar19 = (byte)pcVar9 | 0x11;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    cVar5 = bVar19 - 7;
    pcVar16 = (char *)CONCAT31(uVar14,cVar5);
    *unaff_EDI = (uint)(pcVar16 + (uint)(bVar19 < 7) + *unaff_EDI);
    pbVar6 = pbVar7 + 0xc;
    out(*(undefined4 *)(pbVar7 + 8),uVar21);
    pbVar24 = pbVar24 + 1;
    *pcVar16 = *pcVar16 + cVar5;
    bVar3 = (byte)((uint)pcVar9 >> 8);
    bVar20 = bVar22 | bVar3;
    bVar4 = cVar5 - *pcVar16;
    bVar19 = *(byte *)puVar15;
    *(byte *)puVar15 = *(byte *)puVar15 + bVar4;
    *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4 + CARRY1(bVar19,bVar4)
    ;
    *pbVar24 = *pbVar24 + bVar4;
    *pbVar6 = *pbVar6 + bVar20;
    bVar19 = (byte)((uint)pbVar24 >> 8);
    *(byte *)puVar15 = *(byte *)puVar15 + bVar4 + CARRY1((byte)pbVar24,bVar19);
    piVar8 = (int *)CONCAT31(uVar14,bVar4);
    *(byte *)piVar8 = (char)*piVar8 + bVar4;
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11(bVar19 + bVar3,(byte)pbVar24 + bVar19));
    puVar30 = (uint *)CONCAT22(uVar23,CONCAT11(bVar32 + *(char *)(CONCAT31((int3)(CONCAT22(uVar23,
                                                  CONCAT11(bVar32,bVar22)) >> 8),bVar20) + 0x76),
                                               bVar20));
code_r0x00404fa4:
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    pcVar9 = (char *)(CONCAT31((int3)((uint)piVar8 >> 8),(char)piVar8 + '(') ^ *puVar15);
    cVar28 = (char)puVar15;
    *pbVar24 = *pbVar24 + cVar28;
    uVar21 = (undefined2)((uint)puVar30 >> 0x10);
    cVar27 = (char)puVar30;
    cVar33 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + 0x75);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar5 = (char)pcVar9 + 'o';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    cVar34 = (char)((uint)puVar15 >> 8);
    *unaff_EBP = *unaff_EBP - cVar34;
    pbVar24[1] = pbVar24[1] + cVar28;
    pcVar9 = pcVar9 + -0x757b021b;
    cVar5 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar5;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    cVar18 = cVar5 + 'o';
    pcVar9 = (char *)CONCAT31(uVar14,cVar18);
    pbVar29 = pbVar24 + 2;
    *pcVar9 = *pcVar9 + cVar18;
    iVar11 = CONCAT22(uVar21,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar33,cVar27)) +
                                                        0x76),cVar27));
    *pcVar9 = *pcVar9 + cVar18;
    pcVar9 = (char *)CONCAT31(uVar14,cVar5 + -0x22);
    puVar35 = (uint *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = *pbVar6;
    *pcVar9 = *pcVar9 + cVar5 + -0x22;
    *(byte *)((int)puVar15 + (int)pcVar9) =
         *(byte *)((int)puVar15 + (int)pcVar9) - (char)((uint)pbVar29 >> 8);
    *pbVar29 = *pbVar29 + cVar28;
    bVar4 = cVar34 - pbVar24[4];
    pbVar7 = pbVar6 + 5;
    out(*(undefined4 *)(pbVar6 + 1),(short)pbVar29);
    puVar30 = (uint *)((uint)(pcVar9 + *(int *)(pcVar9 + iVar11)) ^ 0x280a0001);
    *(byte *)puVar30 = (byte)*puVar30 << 1 | (char)(byte)*puVar30 < '\0';
    *pbVar7 = *pbVar7 + (char)puVar30;
    pbVar7 = pbVar7 + *(int *)(pbVar24 + -0x5c);
    pbVar6 = (byte *)((uint)puVar30 | *puVar30);
    *pbVar7 = *pbVar7 + (char)pbVar6;
    puVar30 = (uint *)CONCAT31((int3)((uint)iVar11 >> 8),cVar27 - (char)pbVar29);
    bVar19 = *pbVar6;
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),CONCAT11(bVar4 + *pbVar6,cVar28));
    iVar11 = *(int *)pbVar6;
    *pbVar29 = *pbVar29 + cVar28;
    cVar5 = (char)(pbVar6 + (uint)CARRY1(bVar4,bVar19) + iVar11) + 'r';
    puVar10 = (uint *)CONCAT31((int3)((uint)(pbVar6 + (uint)CARRY1(bVar4,bVar19) + iVar11) >> 8),
                               cVar5);
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),CONCAT11(10,(char)pbVar29));
    *(char *)(puVar10 + 10) = (char)puVar10[10] + '\n';
    *pbVar7 = *pbVar7 + cVar5;
    pbVar6 = pbVar7 + *(int *)(pbVar24 + -0x5e);
    uVar31 = *puVar10;
    cVar5 = (char)((uint)puVar10 | uVar31);
    *pbVar6 = *pbVar6 + cVar5;
    uVar14 = (undefined3)(((uint)puVar10 | uVar31) >> 8);
    cVar18 = cVar5 + (byte)*puVar30;
    puVar10 = (uint *)CONCAT31(uVar14,cVar18);
    if (SCARRY1(cVar5,(byte)*puVar30) == cVar18 < '\0') goto code_r0x00405090;
    *(byte *)puVar10 = (byte)*puVar10 + cVar18;
    piVar8 = (int *)CONCAT31(uVar14,cVar18 + '\x02');
    unaff_EDI = puVar35;
  }
  else {
    out(2,(char)piVar8);
    uStack_c = in_ES;
    if ((POPCOUNT(*pbVar24) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  cVar5 = (char)piVar8 + '}';
  pbVar7 = (byte *)CONCAT31(uVar14,cVar5);
  pbVar24[(int)pbVar7] = pbVar24[(int)pbVar7] + cVar5;
  pbVar24[0x280a0000] = pbVar24[0x280a0000] - (char)((uint)piVar8 >> 8);
  bVar19 = (byte)puVar15 & 7;
  *pbVar7 = *pbVar7 << bVar19 | *pbVar7 >> 8 - bVar19;
  *pbVar6 = *pbVar6 + cVar5;
  cVar28 = (char)puVar30 - *pbVar6;
  uVar21 = (undefined2)((uint)puVar30 >> 0x10);
  cVar34 = (char)((uint)puVar30 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar30 >> 8),cVar28) + 0x7c);
  pcVar9 = (char *)CONCAT22(uVar21,CONCAT11(cVar34,cVar28));
  *pbVar7 = *pbVar7 + cVar5;
  bVar4 = (char)piVar8 + 0xa7U & *pbVar24;
  puVar35 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x7c));
  *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar7 = (byte *)CONCAT31(uVar14,bVar4);
  *pbVar7 = *pbVar7 + bVar4;
  *pcVar9 = *pcVar9 + cVar28;
  *pbVar24 = *pbVar24 ^ bVar4;
  *pcVar9 = *pcVar9 + bVar4;
  bVar19 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  cVar5 = (bVar4 - *pbVar7) - CARRY1(bVar19,bVar4);
  *(byte *)puVar15 = (byte)*puVar15 + (byte)pbVar24;
  cVar34 = cVar34 + pcVar9[0x7b];
  *(char *)CONCAT31(uVar14,cVar5) = *(char *)CONCAT31(uVar14,cVar5) + cVar5;
  pcVar9 = (char *)CONCAT31(uVar14,cVar5 + 'o');
  *pcVar9 = *pcVar9 + cVar5 + 'o';
  pcVar9 = pcVar9 + 0x2ed7fde6;
  cVar18 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar18;
  cVar5 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,cVar28)) + 0x7b);
  *pcVar9 = *pcVar9 + cVar18;
  piVar8 = (int *)(CONCAT31((int3)((uint)pcVar9 >> 8),cVar18 + 'o') + 0x6f060000);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar13 = (undefined3)((uint)pbVar24 >> 8);
  bVar4 = (byte)pbVar24 | *pbVar6;
  pbVar25 = (byte *)CONCAT31(uVar13,bVar4);
  uVar31 = CONCAT22(uVar21,CONCAT11(cVar34 + cVar5,cVar28)) | (uint)pbVar6;
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  bVar19 = (byte)piVar8 | *pbVar25;
  pbVar29 = (byte *)CONCAT31(uVar14,bVar19);
  cVar5 = (byte)puVar15 - bVar4;
  puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),cVar5);
  *pbVar29 = *pbVar29 + bVar19;
  pbVar7 = pbVar6 + 4;
  out(*(undefined4 *)pbVar6,(short)pbVar25);
  *pbVar29 = bVar19;
  *pbVar25 = *pbVar25 + cVar5;
  pbVar6 = pbVar6 + 8;
  out(*(undefined4 *)pbVar7,(short)pbVar25);
  *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
  puVar30 = (uint *)(CONCAT31((int3)(uVar31 >> 8),(char)uVar31 - (char)((uint)pbVar24 >> 8)) |
                    (uint)pbVar6);
  pbVar24 = (byte *)CONCAT31(uVar13,(bVar4 | *pbVar6) + (byte)*puVar35);
  cVar5 = bVar19 - (byte)*puVar35;
  puVar10 = (uint *)CONCAT31(uVar14,cVar5 - *(char *)CONCAT31(uVar14,cVar5));
code_r0x00405090:
  *puVar10 = (uint)(pbVar24 + *puVar10);
  cVar5 = (char)puVar10;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *puVar15 = *puVar15 - (int)unaff_EBP;
  bVar19 = *pbVar6;
  bVar4 = (byte)pbVar24;
  *pbVar6 = *pbVar6 + bVar4;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5 + CARRY1(bVar19,bVar4);
  *(byte *)puVar15 = (byte)*puVar15 + cVar5;
  uVar31 = *puVar30;
  *(byte *)puVar30 = (byte)*puVar30 + 0x72;
  *(byte *)puVar30 = (byte)*puVar30;
  cVar5 = (char)((uint)pbVar24 >> 8);
  if (SCARRY1((byte)uVar31,'r')) {
    pbVar6 = pbVar6 + *(int *)(pbVar24 + -10);
  }
  else {
    while( true ) {
      *pbVar6 = *pbVar6 + (char)puVar10;
      uVar14 = (undefined3)((uint)puVar10 >> 8);
      cVar18 = (char)puVar10 + (byte)*puVar30;
      pcVar9 = (char *)CONCAT31(uVar14,cVar18);
      puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),
                                 CONCAT11((char)((uint)puVar30 >> 8) +
                                          *(byte *)((int)puVar30 + 0x7b),(char)puVar30));
      *pcVar9 = *pcVar9 + cVar18;
      in_AF = 9 < (cVar18 + 0x6fU & 0xf) | in_AF;
      uVar31 = CONCAT31(uVar14,cVar18 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar22 = (byte)uVar31;
      piVar8 = (int *)CONCAT22((short)(uVar31 >> 0x10),
                               CONCAT11((char)((uint)puVar10 >> 8) + in_AF,bVar22));
      *piVar8 = *piVar8 + (int)piVar8;
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar22 = bVar22 | *(byte *)(piVar8 + 0x354a);
      bVar22 = bVar22 - *(char *)CONCAT31(uVar14,bVar22);
      pbVar7 = (byte *)CONCAT31(uVar14,bVar22);
      bVar19 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar22;
      pbVar6 = pbVar6 + (-(uint)CARRY1(bVar19,bVar22) - *(int *)pbVar7);
      puVar10 = (uint *)(pbVar7 + 0xfc00);
      *pbVar24 = *pbVar24 + cVar5;
      uVar31 = *puVar10;
      bVar19 = (byte)puVar10;
      *(byte *)puVar10 = (byte)*puVar10 + bVar19;
      uVar2 = (uint)CARRY1((byte)uVar31,bVar19);
      uVar31 = *puVar30;
      uVar1 = *puVar30;
      *puVar30 = (uint)((byte *)(uVar1 + (int)puVar10) + uVar2);
      if (!CARRY4(uVar31,(uint)puVar10) && !CARRY4(uVar1 + (int)puVar10,uVar2)) break;
      *(byte *)puVar10 = (byte)*puVar10 + bVar19;
    }
  }
  uVar31 = (uint)puVar10 | *puVar10;
  uVar21 = SUB42(pbVar24,0);
  *pbVar6 = *pbVar6 + (char)uVar31;
  piVar8 = (int *)(uVar31 + 0xc1872);
  if (SCARRY4(uVar31,0xc1872)) {
    cVar18 = (char)piVar8;
    *(char *)piVar8 = *(char *)piVar8 + cVar18;
    *pbVar24 = *pbVar24 + cVar18;
    *(char *)piVar8 = *(char *)piVar8 + cVar18;
    *(byte *)puVar30 = (byte)*puVar30 + (char)puVar15;
    *(char *)piVar8 = *(char *)piVar8 + cVar18;
    *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) + bVar4;
    pbVar7 = pbVar6;
    goto code_r0x00405117;
  }
  do {
    bVar19 = *pbVar6;
    bVar4 = (byte)piVar8;
    *pbVar6 = *pbVar6 + bVar4;
    if (CARRY1(bVar19,bVar4)) {
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      uVar14 = (undefined3)((uint)puVar15 >> 8);
      bVar19 = (byte)puVar15 | bRam396f1609;
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      puVar15 = (uint *)CONCAT31(uVar14,bVar19 | *(byte *)CONCAT31(uVar14,bVar19));
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar4 = bVar4 | *pbVar24;
      pcVar9 = (char *)CONCAT31(uVar14,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        pbVar7 = pbVar6 + 4;
        out(*(undefined4 *)pbVar6,uVar21);
        uVar31 = CONCAT22((short)((uint)piVar8 >> 0x10),(ushort)bVar4);
        *pbVar7 = *pbVar7 + bVar4;
        pcVar9 = (char *)(uVar31 | 8);
        cVar18 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + 0x7a);
        puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(cVar18,(char)puVar30));
        *pcVar9 = *pcVar9 + (char)pcVar9;
        cVar5 = (char)pcVar9 + 'o';
        piVar8 = (int *)CONCAT31((int3)(uVar31 >> 8),cVar5);
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(byte *)puVar15 = (byte)*puVar15 + 1;
        pbVar6 = pbVar6 + 8;
        out(*(undefined4 *)pbVar7,uVar21);
        pbVar24 = (byte *)((uint)pbVar24 ^ uRam08122c04);
        iVar11 = CONCAT31((int3)((uint)(*piVar8 * 0x17070600) >> 8),2);
        *(char *)(iVar11 * 2) = *(char *)(iVar11 * 2) - cVar18;
        do {
          bVar19 = (byte)iVar11;
          *pbVar6 = *pbVar6 + bVar19;
          bVar36 = CARRY1(bVar19,(byte)*puVar30);
          uVar14 = (undefined3)((uint)iVar11 >> 8);
          cVar5 = bVar19 + (byte)*puVar30;
          pbVar7 = (byte *)CONCAT31(uVar14,cVar5);
          uVar21 = in_DS;
          uVar23 = uStack_4c;
          if (SCARRY1(bVar19,(byte)*puVar30) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar7 = *pbVar7 + cVar5;
          uVar31 = CONCAT31(uVar14,cVar5 + '\'') + 0x1ebd9f3;
          uStack_50 = (undefined1)uStack_c;
          uStack_4f = (undefined1)((ushort)uStack_c >> 8);
          piVar8 = (int *)(uVar31 ^ 0x73060000);
          puVar15 = (uint *)((int)puVar15 + 1);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),
                                     CONCAT11((byte)((uint)puVar30 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar30));
          cVar5 = (char)uVar31;
          *(char *)piVar8 = (char)*piVar8 + cVar5;
          uVar31 = CONCAT31((int3)((uint)piVar8 >> 8),cVar5 + '\x02');
          bVar36 = 0xd9f2d2da < uVar31;
          iVar11 = uVar31 + 0x260d2d25;
          pcVar9 = unaff_EBP;
          do {
            uVar14 = (undefined3)((uint)iVar11 >> 8);
            bVar4 = (char)iVar11 + -2 + bVar36;
            pbVar7 = (byte *)CONCAT31(uVar14,bVar4);
            bVar19 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar4;
            bVar22 = (byte)puVar30;
            uStack_4c = uStack_c;
            if (CARRY1(bVar19,bVar4)) {
              *pbVar7 = *pbVar7 + bVar4;
              puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),
                                         CONCAT11((byte)((uint)puVar30 >> 8) | pcVar9[0x7f],bVar22))
              ;
              *pbVar7 = *pbVar7 + bVar4;
              pbVar7 = (byte *)CONCAT31(uVar14,bVar4 + 0x2a);
              *pbVar7 = *pbVar7 + bVar4 + 0x2a;
              *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar24;
              uVar21 = in_DS;
              while( true ) {
                in_DS = uVar21;
                bVar4 = (byte)pbVar7;
                *pbVar24 = *pbVar24 ^ bVar4;
                *pbVar24 = *pbVar24 + (char)puVar30;
                *pbVar7 = *pbVar7 + bVar4;
                *(byte *)puVar30 = (byte)*puVar30 + (char)((uint)pbVar24 >> 8);
                bVar19 = *pbVar7;
                *pbVar7 = *pbVar7 + bVar4;
                uVar31 = *puVar30;
                uVar1 = *puVar30;
                *puVar30 = (uint)(pbVar7 + uVar1 + CARRY1(bVar19,bVar4));
                uVar14 = (undefined3)((uint)pbVar7 >> 8);
                if (CARRY4(uVar31,(uint)pbVar7) ||
                    CARRY4((uint)(pbVar7 + uVar1),(uint)CARRY1(bVar19,bVar4))) break;
                *pbVar6 = *pbVar6 + bVar4;
                pcVar16 = (char *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                           CONCAT11((char)((uint)puVar15 >> 8) + *pbVar7,
                                                    (char)puVar15));
                *pbVar6 = *pbVar6 + bVar4;
                piVar8 = (int *)CONCAT31(uVar14,bVar4 | (byte)*puVar30);
                pbVar7 = pbVar6;
                while( true ) {
                  pbVar6 = pbVar7 + 4;
                  out(*(undefined4 *)pbVar7,(short)pbVar24);
                  pbVar24 = pbVar24 + 1;
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  bVar22 = (byte)((uint)pcVar16 >> 8) | *pbVar24;
                  uVar14 = (undefined3)((uint)piVar8 >> 8);
                  bVar4 = (byte)piVar8 ^ *pbVar24;
                  pcVar12 = (char *)CONCAT31(uVar14,bVar4);
                  cRam282b0000 = cRam282b0000 - bVar22;
                  *pcVar12 = *pcVar12 + bVar4;
                  unaff_EBP = pcVar9 + -*(int *)pbVar24;
                  uStack_50 = (undefined1)in_DS;
                  uStack_4f = (undefined1)((ushort)in_DS >> 8);
                  bVar19 = *(byte *)((int)puVar35 + 0x17);
                  *pcVar12 = *pcVar12 + bVar4;
                  puVar15 = (uint *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                             CONCAT11(bVar22 + bVar19 | *pbVar24,(char)pcVar16));
                  *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
                  *(byte *)((int)pcVar12 * 2) = *(byte *)((int)pcVar12 * 2) ^ bVar4;
                  in_AF = 9 < (bVar4 & 0xf) | in_AF;
                  bVar4 = bVar4 + in_AF * -6;
                  pbVar7 = (byte *)CONCAT31(uVar14,bVar4 + (0x9f < bVar4 | in_AF * (bVar4 < 6)) *
                                                           -0x60);
                  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
                  *(char *)((int)pbVar7 * 2) =
                       *(char *)((int)pbVar7 * 2) + (char)((uint)pbVar24 >> 8);
                  bVar36 = CARRY1((byte)*puVar15,(byte)pbVar24);
                  *(byte *)puVar15 = (byte)*puVar15 + (byte)pbVar24;
                  uVar21 = in_DS;
                  uVar23 = uStack_c;
GenerateStatusText:
                  in_DS = uVar23;
                  pcVar9 = unaff_EBP;
                  uStack_4c = in_DS;
                  if (!bVar36) break;
                  *pbVar7 = *pbVar7 + (char)pbVar7;
                  iVar11 = CONCAT31((int3)((uint)puVar15 >> 8),(byte)puVar15 | *pbVar24);
                  uVar21 = (undefined2)((uint)puVar30 >> 0x10);
                  cVar28 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + 0x7d);
                  *pbVar7 = *pbVar7 + (char)pbVar7;
                  *(byte *)puVar35 = (byte)*puVar35 - (char)((uint)puVar15 >> 8);
                  iVar11 = iVar11 - *(int *)(iVar11 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar28,(char)puVar30)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar6,(short)pbVar24);
                  pbVar24 = (byte *)CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar7 = pbVar6 + 8;
                  out(*(undefined4 *)(pbVar6 + 4),CONCAT11(uStack_4f,uStack_50));
                  pcVar9 = unaff_EBP + 1;
                  cVar18 = (char)iVar11;
                  pcVar16 = (char *)CONCAT22((short)((uint)iVar11 >> 0x10),
                                             CONCAT11((byte)((uint)iVar11 >> 8) |
                                                      *(byte *)((int)puVar35 + 0x46),cVar18));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_c = CONCAT11(uStack_4f,uStack_50);
                  uVar14 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar7,0xf0)) >> 8);
                  piVar8 = (int *)CONCAT31(uVar14,0x5f);
                  puVar35 = (uint *)((int)puVar35 + 1);
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  puVar30 = (uint *)CONCAT22(uVar21,CONCAT11(cVar28 + cVar5 | pbVar6[-0x78],
                                                             (char)puVar30));
                  *(char *)piVar8 = (char)*piVar8 + '_';
                  puVar15 = (uint *)CONCAT31(uVar14,0x8c);
                  *(byte **)(pbVar7 + (int)puVar35 * 8) =
                       pbVar24 + *(int *)(pbVar7 + (int)puVar35 * 8);
                  bVar19 = *pbVar7;
                  *pbVar7 = *pbVar7 + 0x8c;
                  if (bVar19 < 0x74) {
                    *pbVar24 = *pbVar24 + cVar18;
                    *(byte *)puVar30 = (byte)*puVar30 >> 1;
                    *(char *)puVar15 = (char)*puVar15 + -0x74;
                    *puVar15 = (uint)(pcVar9 + *puVar15);
                    *puVar15 = *puVar15 << 1 | (uint)((int)*puVar15 < 0);
                    *pbVar24 = *pbVar24 + cVar18;
                    unaff_EBP[2] = unaff_EBP[2] - cVar18;
                    *pbVar24 = *pbVar24 + cVar18;
                    pbVar6 = (byte *)CONCAT31(uVar14,0x83);
                    puVar15 = puVar30;
                    goto code_r0x00405312;
                  }
                  *puVar15 = (uint)(*puVar15 + (int)puVar15);
                  piVar8 = (int *)(CONCAT31(uVar14,(byte)puVar15[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar15[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar8 = (int *)((int)piVar8 + *(int *)pbVar7);
                }
              }
              *pbVar24 = *pbVar24 + bVar4;
              *(byte *)puVar30 = (byte)*puVar30 - (char)pbVar24;
              *pbVar7 = *pbVar7 + bVar4;
              pbVar7 = (byte *)CONCAT31(uVar14,bVar4 | (byte)*puVar30);
            }
            else {
              cVar5 = (char)puVar15;
              *pbVar24 = *pbVar24 + cVar5;
              *(byte **)pbVar7 = pbVar24 + *(int *)pbVar7;
              *pbVar7 = *pbVar7 + bVar4;
              bVar4 = bVar4 + *pbVar7;
              pbVar7 = (byte *)CONCAT31(uVar14,bVar4);
              if (-1 < (char)bVar4) {
                *(byte *)puVar30 = (byte)*puVar30 + bVar22;
                out(*(undefined4 *)pbVar6,(short)pbVar24);
                pbVar24 = pbVar24 + 1;
                *pbVar7 = *pbVar7 + bVar4;
                puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),
                                           bVar22 | (byte)((uint)iVar11 >> 8));
                cVar18 = bVar4 - (byte)*puVar15;
                pcVar16 = (char *)CONCAT31(uVar14,cVar18);
                *pcVar16 = *pcVar16 + cVar18 + (bVar4 < (byte)*puVar15);
                *pbVar24 = *pbVar24 + cVar18;
                pcVar16 = (char *)((int)pcVar16 * 2 + 0x79);
                *pcVar16 = *pcVar16 + (char)((uint)pbVar24 >> 8);
                pbVar7 = (byte *)in((short)pbVar24);
                pbVar6 = pbVar6 + 4;
              }
              *pbVar6 = *pbVar6 + cVar5;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              uStack_50 = (undefined1)in_DS;
              uStack_4f = (undefined1)((ushort)in_DS >> 8);
              bVar19 = *pbVar7;
              bVar22 = (byte)((uint)puVar15 >> 8);
              bVar3 = bVar22 + *pbVar7;
              iVar11 = *(int *)pbVar7;
              *pbVar24 = *pbVar24 + cVar5;
              bVar4 = (char)(pbVar7 + (uint)CARRY1(bVar22,bVar19) + iVar11) - (byte)*puVar30;
              pbVar7 = (byte *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar22,bVar19) + iVar11)
                                              >> 8),bVar4);
              *(byte *)puVar30 = (byte)*puVar30 ^ bVar4;
              *pcVar9 = *pcVar9 + (char)puVar30;
              *pbVar7 = *pbVar7 + bVar4;
              *pbVar7 = *pbVar7 + bVar4;
              *pbVar7 = *pbVar7 + bVar4;
              puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                         CONCAT11(bVar3 + *pbVar7,cVar5));
              pbVar7 = pbVar7 + (uint)CARRY1(bVar3,*pbVar7) + *(int *)pbVar7;
              *pbVar24 = *pbVar24 + cVar5;
              pbVar6 = pbVar6 + *(int *)(pbVar24 + 0x3e);
            }
            *pbVar6 = *pbVar6 + (char)pbVar7;
            cVar5 = (char)pbVar7 + 'r';
            pbVar6 = pbVar6 + -1;
            uVar31 = CONCAT31((int3)((uint)pbVar7 >> 8),cVar5);
            *pbVar6 = *pbVar6 + cVar5;
            bVar36 = 0xfff38f8d < uVar31;
            iVar11 = uVar31 + 0xc7072;
            unaff_EBP = pcVar9;
          } while (SCARRY4(uVar31,0xc7072));
        } while( true );
      }
      *pcVar9 = *pcVar9 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar7 = (byte *)CONCAT31(uVar14,bVar4);
      bVar19 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      uVar14 = (undefined3)
               ((uint)(pbVar7 + (uint)CARRY1(bVar19,bVar4) + *(int *)((int)puVar15 + (int)pbVar24))
               >> 8);
      cVar18 = (char)(pbVar7 + (uint)CARRY1(bVar19,bVar4) + *(int *)((int)puVar15 + (int)pbVar24)) +
               'E';
      pcVar9 = (char *)CONCAT31(uVar14,cVar18);
      *pcVar9 = *pcVar9 + cVar18;
      cVar18 = cVar18 + *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar14,cVar18);
      *pcVar9 = *pcVar9 + cVar18;
      puVar10 = (uint *)CONCAT31(uVar14,cVar18 + *pcVar9);
      *(char *)puVar10 = (char)*puVar10 + cVar18 + *pcVar9;
      pbVar7 = (byte *)((uint)puVar10 | *puVar10);
      bVar19 = *pbVar7;
      bVar4 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar4 + CARRY1(bVar19,bVar4));
      pbVar7 = pbVar6;
code_r0x00405117:
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      puVar30 = (uint *)((int)puVar30 - *puVar30);
      pbVar6 = pbVar7 + 4;
      out(*(undefined4 *)pbVar7,uVar21);
    }
    *pbVar24 = *pbVar24 + (char)puVar15;
    bVar36 = puVar30 < (uint *)*piVar8;
    puVar30 = (uint *)((int)puVar30 - *piVar8);
    bVar19 = (byte)((uint)puVar15 >> 8);
    *(byte *)((int)puVar35 + 0x39) = (*(byte *)((int)puVar35 + 0x39) - bVar19) - bVar36;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    uVar31 = *puVar30;
    *(int *)((int)puVar35 + 0x39) = *(int *)((int)puVar35 + 0x39) - (int)unaff_EBP;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                               CONCAT11(bVar19 | (byte)uVar31 | (byte)*puVar30,(char)puVar15));
    *(char *)(piVar8 + 10) = (char)piVar8[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
  bVar19 = (char)piVar8 + 0x28;
  pbVar6 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),bVar19);
  *pbVar6 = *pbVar6 ^ bVar19;
  *(byte *)puVar30 = (byte)*puVar30 + (char)((uint)pcVar16 >> 8);
  bVar19 = *pbVar24;
  *pbVar24 = *pbVar24 + (byte)pcVar16;
  piVar8 = (int *)(((uint)pbVar6 | 0x1496f09) + *puVar35 + (uint)CARRY1(bVar19,(byte)pcVar16));
  pbVar29 = pbVar7 + 4;
  out(*(undefined4 *)pbVar7,(short)pbVar24);
  pbVar25 = pbVar24 + -1;
  *piVar8 = *piVar8 + (int)piVar8;
  pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | (byte)*puVar30);
  cVar5 = (char)piVar8 + '\x13';
  pbVar6 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar5);
  puVar15 = puVar30;
  pbVar7 = pbVar29;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar24 = *pbVar24 - (char)((uint)pbVar25 >> 8);
    *pbVar6 = *pbVar6 + cVar5;
code_r0x00405396:
    bVar19 = *pbVar6;
    bVar4 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar4;
    *(byte **)pbVar29 = pbVar6 + (uint)CARRY1(bVar19,bVar4) + *(int *)pbVar29;
    out(*(undefined4 *)pbVar29,(short)pbVar24);
    *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
    *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar6 >> 0x10),
                              CONCAT11((byte)((uint)pbVar6 >> 8) | pbVar29[4],bVar4));
    *(char **)((int)puVar35 + -1) = pcVar9 + *(int *)((int)puVar35 + -1);
    out(*(undefined4 *)(pbVar29 + 4),(short)pbVar24);
    *pcVar9 = *pcVar9 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar6 = *pbVar6 + (char)pbVar6;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar6 >> 8),(char)pbVar6 + 'o');
  puVar30 = (uint *)((int)puVar15 + -1);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar14 = (undefined3)((uint)pbVar24 >> 8);
  piVar8 = (int *)((int)piVar8 + 0x1b7e);
  bVar22 = (byte)pbVar24 | *(byte *)puVar30 | *(byte *)puVar30;
  iRam04115f2c = iRam04115f2c + (int)piVar8;
  out(*(undefined4 *)pbVar7,(short)CONCAT31(uVar14,bVar22));
  *piVar8 = *piVar8 + (int)piVar8;
  bVar22 = bVar22 | (byte)piVar8;
  iVar26 = CONCAT31(uVar14,bVar22);
  pbVar6 = (byte *)((int)piVar8 - *piVar8);
  cVar5 = (char)pbVar6;
  *pcVar16 = *pcVar16 + cVar5;
  cVar18 = (char)pcVar16 - bVar22;
  *pbVar6 = *pbVar6 + cVar5;
  uVar21 = (undefined2)((uint)pcVar16 >> 0x10);
  bVar4 = (byte)((uint)pcVar16 >> 8) | *pbVar6;
  pcVar9 = pcVar9 + -1;
  *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
  bVar19 = *(byte *)(CONCAT22(uVar21,CONCAT11(bVar4,cVar18)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar6;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar9;
  *pbVar6 = *pbVar6 + cVar5;
  bVar19 = bVar4 | bVar19 | *(byte *)puVar30;
  iVar17 = CONCAT22(uVar21,CONCAT11(bVar19,cVar18));
  pbVar25 = (byte *)((uint)(pbVar7 + 4) ^ *(uint *)(iVar26 + -0x43));
  iVar11 = *(int *)pbVar6;
  *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
  if (SCARRY4(iVar11,(int)pbVar6)) {
    *pbVar6 = *pbVar6 + cVar5;
  }
  pbVar24 = pbVar6 + 0x5674;
  puVar35 = (uint *)((int)puVar35 +
                    (-(uint)((byte *)0xffffa98b < pbVar6) - *(int *)(pbVar25 + -0x7f)));
  bVar4 = (byte)pbVar24;
  *pbVar24 = *pbVar24 + bVar4;
  uVar13 = (undefined3)((uint)pbVar24 >> 8);
  bVar3 = bVar4 + 0x2d;
  piVar8 = (int *)CONCAT31(uVar13,bVar3);
  *(uint *)(pbVar25 + (int)puVar35 * 8) =
       *(int *)(pbVar25 + (int)puVar35 * 8) + iVar26 + (uint)(0xd2 < bVar4);
  bVar4 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar3;
  if (!CARRY1(bVar4,bVar3)) {
    do {
      pbVar24 = (byte *)(iVar26 + 1);
      bVar4 = (byte)piVar8;
      *(byte *)piVar8 = (char)*piVar8 + bVar4;
      bVar22 = (byte)((uint)piVar8 >> 8);
      bVar3 = (byte)puVar30 | bVar22;
      puVar15 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar3);
      out(*(undefined4 *)pbVar25,(short)pbVar24);
      *(byte *)piVar8 = (char)*piVar8 + bVar4;
      uVar21 = (undefined2)((uint)iVar17 >> 0x10);
      cVar5 = (char)iVar17;
      pbVar6 = (byte *)CONCAT22(uVar21,CONCAT11((byte)((uint)iVar17 >> 8) | *pbVar24,cVar5));
      bVar19 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar4;
      *(byte *)piVar8 = (char)*piVar8 + bVar4 + CARRY1(bVar19,bVar4);
      *pbVar24 = *pbVar24 + bVar4;
      *(byte *)puVar35 = (byte)*puVar35 + bVar22;
      *(int *)((int)piVar8 * 2) = *(int *)((int)piVar8 * 2) + CONCAT22(uVar21,CONCAT11(0x1c,cVar5));
      *(byte *)piVar8 = (char)*piVar8 + bVar4;
      cVar18 = (char)pbVar24;
      *(byte *)puVar15 = (byte)*puVar15 + cVar18;
      *(byte *)((int)piVar8 * 2) = *(byte *)((int)piVar8 * 2) ^ bVar4;
      *(byte *)piVar8 = (char)*piVar8 + bVar4;
      pbVar6 = pbVar25 + 8;
      out(*(undefined4 *)(pbVar25 + 4),(short)pbVar24);
      piVar8 = (int *)0xa0a0000;
      *pbVar24 = *pbVar24;
      bVar4 = cVar5 - cVar18;
      iVar17 = CONCAT22(uVar21,CONCAT11((byte)puVar35[0x14] | 0x1c | bRam0ca87216,bVar4));
      *pbVar24 = *pbVar24;
      bVar19 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar4;
      if (!CARRY1(bVar19,bVar4)) {
        piVar8 = (int *)0x1e7b7000;
        bVar19 = (byte)((uint)puVar30 >> 8) | *(byte *)(iVar26 + 3);
        puVar15 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(bVar19,bVar3));
        if (bVar19 != 0) {
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar18 + pbVar6[(int)puVar35 * 8]);
          piVar8 = (int *)0x6d7d7000;
          iVar17 = iVar17 + 1;
        }
      }
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      iVar26 = CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | pbVar6[(int)puVar35 * 8]);
      *(char *)piVar8 = (char)*piVar8;
      piVar8 = (int *)CONCAT31((int3)((uint)piVar8 >> 8),0xf9);
      *puVar35 = (uint)((int)piVar8 + *puVar35 + 1);
      pbVar25 = pbVar25 + 0xc;
      out(*(undefined4 *)pbVar6,(short)iVar26);
      puVar30 = puVar15;
    } while( true );
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar3 = bVar3 | *(byte *)((int)piVar8 + 0x4000081);
  piVar8 = (int *)CONCAT31(uVar13,bVar3);
  if ('\0' < (char)bVar3) {
    *(byte *)piVar8 = (char)*piVar8 + bVar3;
    puVar10 = (uint *)CONCAT31(uVar13,bVar3 + 0x28);
    *puVar10 = *puVar10 ^ (uint)puVar10;
    *(byte *)puVar30 = *(byte *)puVar30 + bVar19;
    cVar5 = (bVar3 + 0x28) - bVar19;
    pcVar9 = (char *)CONCAT31(uVar13,cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    pbVar24 = (byte *)CONCAT31(uVar14,bVar22 | *(byte *)puVar30);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar30 >> 0x10),
                               CONCAT11((char)((uint)puVar30 >> 8) + *(byte *)((int)puVar15 + 0x7d),
                                        (char)puVar30));
    *pcVar9 = *pcVar9 + cVar5;
    pbVar6 = (byte *)CONCAT31(uVar13,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar13,cVar5 + 0x39U));
    *pcVar16 = *pcVar16 + bVar19;
    pbVar29 = pbVar25 + 4;
    out(*(undefined4 *)pbVar25,(short)pbVar24);
    goto code_r0x00405396;
  }
  pbVar7 = pbVar25 + 4;
  out(*(undefined4 *)pbVar25,(short)iVar26);
  pcVar16 = (char *)(iVar17 + -1);
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  pbVar24 = (byte *)CONCAT31(uVar14,bVar22 | *(byte *)puVar30);
  goto code_r0x004052ee;
}


