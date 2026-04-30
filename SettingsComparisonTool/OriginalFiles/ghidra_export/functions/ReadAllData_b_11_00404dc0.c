/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404dc0
 * Raw Name    : <ReadAllData>b__11
 * Demangled   : <ReadAllData>b__11
 * Prototype   : undefined4 <ReadAllData>b__11(undefined4 nf, char * param_2)
 * Local Vars  : iVar18, pcVar17, bVar20, bVar19, bVar22, uVar21, pbVar24, pbVar23, cVar26, iVar25, param_2, unaff_EBX, cVar27, puVar29, pbVar28, bVar31, uVar30, cVar33, cVar32, unaff_EBP, uVar34, unaff_EDI, unaff_ESI, puVar36, puVar35, in_DS, in_ES, bVar37, in_AF, nf, uStack_4f, uStack_50, uStack_4c, uStack_4e, uVar1, uStack_c, uVar3, uVar2, bVar5, bVar4, in_EAX, cVar6, piVar8, pbVar7, pbVar10, pcVar9, pcVar12, iVar11, uVar14, uVar13, puVar16, cVar15
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

undefined4 __fastcall <ReadAllData>b__11(undefined4 nf,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *in_EAX;
  undefined3 uVar13;
  byte *pbVar7;
  int *piVar8;
  undefined3 uVar14;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  char cVar15;
  byte bVar19;
  byte bVar20;
  undefined2 uVar21;
  uint *puVar16;
  char *pcVar17;
  int iVar18;
  byte bVar22;
  byte *pbVar23;
  byte *pbVar24;
  int iVar25;
  char cVar26;
  char cVar27;
  byte bVar31;
  int unaff_EBX;
  byte *pbVar28;
  uint *puVar29;
  char cVar32;
  char cVar33;
  undefined2 uVar34;
  uint uVar30;
  char *unaff_EBP;
  byte *unaff_ESI;
  undefined4 *unaff_EDI;
  uint *puVar35;
  uint *puVar36;
  undefined2 in_ES;
  undefined2 in_DS;
  byte in_AF;
  bool bVar37;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_c;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    uVar21 = (undefined2)((uint)nf >> 0x10);
    bVar5 = (byte)nf;
    bVar19 = (char)((uint)nf >> 8) + *in_EAX;
    pcVar9 = (char *)CONCAT22(uVar21,CONCAT11(bVar19,bVar5));
    puVar35 = unaff_EDI + 1;
    uVar2 = in((short)param_2);
    *unaff_EDI = uVar2;
    cVar6 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar6;
    uVar14 = (undefined3)((uint)param_2 >> 8);
    bVar22 = (byte)param_2 | *unaff_ESI;
    pbVar10 = (byte *)CONCAT31(uVar14,bVar22);
    *pcVar9 = *pcVar9 + '\x01';
    cVar15 = bVar5 - pbVar10[2];
    uVar34 = SUB42(pbVar10,0);
    if ((POPCOUNT(cVar15) & 1U) == 0) break;
    *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)(bVar5 < pbVar10[2]);
    bVar4 = bVar19 + (byte)iRam00000c00;
    pbVar23 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar19,(byte)iRam00000c00));
    *pbVar10 = *pbVar10 + cVar15;
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *unaff_ESI);
    bVar5 = *pbVar23;
    in_EAX = pbVar23 + (uint)CARRY1(bVar4,*pbVar23) + *(int *)pbVar23;
    *pbVar10 = *pbVar10 + cVar15;
    cVar6 = ((bVar4 + bVar5) - *pbVar10) + *in_EAX;
    pcVar9 = (char *)CONCAT22(uVar21,CONCAT11(cVar6,cVar15));
    unaff_EDI = unaff_EDI + 2;
    uVar30 = in(uVar34);
    *puVar35 = uVar30;
    *in_EAX = *in_EAX + (char)in_EAX;
    param_2 = (char *)CONCAT31(uVar14,bVar22 | *unaff_ESI);
    *pcVar9 = *pcVar9 + '\x01';
    nf = CONCAT22(uVar21,CONCAT11(cVar6 - *param_2,cVar15));
  }
  *in_EAX = *in_EAX + cVar6;
  bVar4 = cVar6 + 0x7b;
  pbVar7 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
  pbVar7[unaff_EBX] = pbVar7[unaff_EBX] + bVar4;
  pbVar23 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,uVar34);
  pbVar28 = (byte *)(unaff_EBX + -1);
  *pbVar7 = *pbVar7 + bVar4;
  bVar5 = *pbVar10;
  piVar8 = (int *)CONCAT22(uVar21,CONCAT11(bVar19 | bVar5,cVar15));
  *pbVar7 = *pbVar7 + bVar4;
  *pbVar28 = *pbVar28 + bVar22;
  *pbVar28 = *pbVar28 ^ bVar4;
  *pbVar10 = *pbVar10 + (bVar19 | bVar5);
  *pbVar7 = *pbVar7 + bVar4;
  do {
    bVar20 = (byte)((uint)piVar8 >> 8);
    *(byte *)puVar35 = (byte)*puVar35 + bVar20;
    bVar5 = *pbVar7;
    bVar19 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar19;
    *(int *)(unaff_EBX + 0x17) =
         (int)(pbVar23 + (uint)CARRY1(bVar5,bVar19) + *(int *)(unaff_EBX + 0x17));
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    uVar13 = (undefined3)((uint)pbVar7 >> 8);
    bVar19 = bVar19 | *pbVar23;
    puVar35 = (uint *)((int)puVar35 + *(int *)(unaff_EBP + -0x34));
    *(char *)CONCAT31(uVar13,bVar19) = *(char *)CONCAT31(uVar13,bVar19) + bVar19;
    bVar5 = bVar19 + 2;
    cVar6 = (char)((uint)param_2 >> 8);
    bVar4 = (byte)piVar8;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar7 = (byte *)CONCAT31(uVar13,bVar19 + 0x15 + (0xfd < bVar19));
      if (0xec < bVar5 || CARRY1(bVar19 + 0x15,0xfd < bVar19)) {
        *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      }
code_r0x00404e60:
      unaff_EBP = unaff_EBP + -*(int *)pbVar10;
      bVar5 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      pbVar23 = pbVar23 + (-(uint)CARRY1(bVar5,(byte)pbVar7) - *(int *)pbVar7);
      pbVar7 = pbVar7 + *(int *)pbVar7;
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      *(char *)piVar8 = (char)*piVar8 + cVar6;
      bVar5 = *pbVar7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      *(byte **)(pbVar28 + (int)pbVar10) =
           pbVar10 + (uint)CARRY1(bVar5,(byte)pbVar7) + *(int *)(pbVar28 + (int)pbVar10);
      pbVar7 = pbVar7 + 0x73061314;
      *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
      uVar13 = (undefined3)((uint)piVar8 >> 8);
      bVar4 = bVar4 | *pbVar10;
      pcVar17 = (char *)CONCAT31(uVar13,bVar4);
      *pbVar7 = *pbVar7 + (char)pbVar7;
      cVar6 = (char)pbVar7 + 'o';
      pcVar9 = (char *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar6);
      *pcVar9 = *pcVar9 + cVar6;
      out(*(undefined4 *)pbVar23,uVar34);
      bVar5 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      pcVar9 = pcVar9 + (uint)CARRY1(bVar5,bVar4) + *puVar35;
      *pcVar9 = *pcVar9 + (char)pcVar9;
      *pcVar17 = *pcVar17 + bVar22;
      pbVar7 = pbVar23 + 8;
      out(*(undefined4 *)(pbVar23 + 4),uVar34);
      *pbVar10 = *pbVar10 + bVar4;
      piVar8 = (int *)((uint)pcVar9 | *puVar35);
      pcVar17[0x390a0000] = pcVar17[0x390a0000] - bVar20;
      pbVar28 = (byte *)0x7000000;
      *(byte *)puVar35 = (byte)*puVar35 - bVar20;
      *piVar8 = *piVar8 + (int)piVar8;
      puVar16 = (uint *)CONCAT31(uVar13,bVar4 | *(byte *)((int)piVar8 + (int)pcVar17));
      *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) - bVar20;
      cRam07000000 = cRam07000000 + bVar20;
      piVar8 = (int *)((uint)piVar8 | 0x777b02);
      pbVar23 = (byte *)((int)puVar35 + (int)unaff_EBP * 2);
      bVar37 = SCARRY1(*pbVar23,(char)piVar8);
      *pbVar23 = *pbVar23 + (char)piVar8;
      bVar5 = *pbVar23;
      *(char *)piVar8 = (char)*piVar8;
      uStack_c = in_DS;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
    bVar19 = bVar19 + 0x71;
    pbVar7 = (byte *)CONCAT31(uVar13,bVar19);
    *pbVar7 = *pbVar7;
    *pbVar23 = *pbVar23 + 1;
    *piVar8 = (*piVar8 - (int)pbVar7) - (uint)(0x90 < bVar5);
    bVar5 = *pbVar23;
    *pbVar23 = *pbVar23 + bVar19;
    if (!CARRY1(bVar5,bVar19)) goto code_r0x00404e60;
    *pbVar7 = *pbVar7 + bVar19;
    uVar21 = (undefined2)((uint)piVar8 >> 0x10);
    bVar20 = bVar20 | *pbVar7;
    pbVar7 = pbVar7 + -*(int *)pbVar7;
    *pbVar28 = *pbVar28 + bVar20;
    cVar15 = bVar4 - pbVar10[2];
    piVar8 = (int *)CONCAT31((int3)(CONCAT22(uVar21,CONCAT11(bVar20,bVar4)) >> 8),cVar15);
  } while ((POPCOUNT(cVar15) & 1U) != 0);
  cVar27 = (char)pbVar7;
  *pbVar7 = *pbVar7 + cVar27;
  uVar13 = (undefined3)((uint)pbVar7 >> 8);
  pcVar9 = (char *)CONCAT31(uVar13,cVar27 + '{');
  out(*(undefined4 *)pbVar23,uVar34);
  *pcVar9 = *pcVar9 + cVar27 + '{';
  bVar19 = cVar27 + 0x7e;
  pbVar23 = (byte *)CONCAT31(uVar13,bVar19);
  pbVar7 = unaff_ESI + 0xc;
  out(*(undefined4 *)(unaff_ESI + 8),uVar34);
  pbVar28 = (byte *)(unaff_EBX + -2);
  *pbVar23 = *pbVar23 + bVar19;
  bVar5 = *pbVar10;
  puVar16 = (uint *)CONCAT22(uVar21,CONCAT11(bVar20 | bVar5,cVar15));
  *pbVar23 = *pbVar23 + bVar19;
  *pbVar28 = *pbVar28 + bVar22;
  *pbVar28 = *pbVar28 ^ bVar19;
  *pbVar10 = *pbVar10 + (bVar20 | bVar5);
  *pbVar23 = *pbVar23 + bVar19;
  *pbVar23 = *pbVar23 + cVar6;
  bVar5 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar19;
  *(int *)(unaff_EBX + 0x18) =
       (int)(pbVar7 + (uint)CARRY1(bVar5,bVar19) + *(int *)(unaff_EBX + 0x18));
  *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
  bVar19 = bVar19 | *pbVar7;
  puVar35 = (uint *)((int)puVar35 + *(int *)(unaff_EBP + -0x33));
  *(char *)CONCAT31(uVar13,bVar19) = *(char *)CONCAT31(uVar13,bVar19) + bVar19;
  bVar37 = SCARRY1(bVar19,'\x02');
  bVar5 = bVar19 + 2;
  piVar8 = (int *)CONCAT31(uVar13,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar8 = (char)*piVar8 + bVar5;
    return CONCAT31(uVar13,bVar19 + 0x71);
  }
code_r0x00404ebf:
  bVar19 = (byte)piVar8;
  uVar13 = (undefined3)((uint)piVar8 >> 8);
  if (bVar5 != 0 && bVar37 == (char)bVar5 < '\0') {
    *(byte *)piVar8 = (char)*piVar8 + bVar19;
    *(byte **)(pbVar7 + (int)puVar35 * 8) =
         pbVar10 + (uint)(0xd2 < bVar19) + *(int *)(pbVar7 + (int)puVar35 * 8);
    return CONCAT31(uVar13,bVar19 + 0x2d);
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar5 = *pbVar28;
  *(char **)pbVar7 = (char *)(*(int *)pbVar7 + (int)piVar8);
  bVar4 = (byte)((uint)puVar16 >> 8);
  *(byte *)piVar8 = (char)*piVar8 - bVar4;
  *(byte *)piVar8 = (char)*piVar8 + bVar19;
  pbVar23 = (byte *)(CONCAT31(uVar14,bVar22 | bVar5) - *(int *)pbVar28);
  puVar36 = (uint *)CONCAT31(uVar13,bVar19 + 6);
  *(uint *)(pbVar28 + (int)pbVar7 * 2) =
       (int)puVar36 + (uint)(0xf9 < bVar19) + *(int *)(pbVar28 + (int)pbVar7 * 2);
  *(byte *)puVar16 = (byte)*puVar16 ^ bVar19 + 6;
  bVar19 = (byte)puVar16;
  *pbVar23 = *pbVar23 + bVar19;
  pbVar10 = pbVar7 + 4;
  uVar21 = SUB42(pbVar23,0);
  out(*(undefined4 *)pbVar7,uVar21);
  *puVar16 = *puVar16 ^ (uint)puVar36;
  *pbVar23 = *pbVar23 + bVar19;
  puVar29 = (uint *)(pbVar28 + -*(int *)pbVar28);
  *(uint *)((int)puVar35 + 0x31) = *(uint *)((int)puVar35 + 0x31) | (uint)unaff_EBP;
  *puVar36 = *puVar36 + (int)puVar36;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar4 | (byte)*puVar29,bVar19))
  ;
  *(byte **)(pbVar23 + 0x6e) = pbVar10 + *(int *)(pbVar23 + 0x6e);
  piVar8 = (int *)((uint)puVar36 | *puVar36);
  bVar22 = (byte)puVar29;
  *(byte *)puVar35 = (byte)*puVar35 - bVar22;
  bVar5 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar19;
  if (CARRY1(bVar5,bVar19)) {
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    bVar5 = pbVar23[0x11];
    uVar34 = (undefined2)((uint)puVar29 >> 0x10);
    out(*(undefined4 *)pbVar10,uVar21);
    puVar16 = (uint *)((int)puVar16 + 1);
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    bVar31 = (byte)((uint)puVar29 >> 8) | bVar5 | *pbVar23;
    pcVar9 = (char *)((int)piVar8 + -0x21000001);
    bVar5 = (byte)pcVar9 | 0x11;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    cVar6 = bVar5 - 7;
    pcVar17 = (char *)CONCAT31(uVar14,cVar6);
    *puVar35 = (uint)(pcVar17 + (uint)(bVar5 < 7) + *puVar35);
    pbVar10 = pbVar7 + 0xc;
    out(*(undefined4 *)(pbVar7 + 8),uVar21);
    pbVar23 = pbVar23 + 1;
    *pcVar17 = *pcVar17 + cVar6;
    bVar4 = (byte)((uint)pcVar9 >> 8);
    bVar20 = bVar22 | bVar4;
    bVar19 = cVar6 - *pcVar17;
    bVar5 = *(byte *)puVar16;
    *(byte *)puVar16 = *(byte *)puVar16 + bVar19;
    *(char *)CONCAT31(uVar14,bVar19) =
         *(char *)CONCAT31(uVar14,bVar19) + bVar19 + CARRY1(bVar5,bVar19);
    *pbVar23 = *pbVar23 + bVar19;
    *pbVar10 = *pbVar10 + bVar20;
    bVar5 = (byte)((uint)pbVar23 >> 8);
    *(byte *)puVar16 = *(byte *)puVar16 + bVar19 + CARRY1((byte)pbVar23,bVar5);
    piVar8 = (int *)CONCAT31(uVar14,bVar19);
    *(byte *)piVar8 = (char)*piVar8 + bVar19;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11(bVar5 + bVar4,(byte)pbVar23 + bVar5));
    puVar29 = (uint *)CONCAT22(uVar34,CONCAT11(bVar31 + *(char *)(CONCAT31((int3)(CONCAT22(uVar34,
                                                  CONCAT11(bVar31,bVar22)) >> 8),bVar20) + 0x76),
                                               bVar20));
code_r0x00404fa4:
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    pcVar9 = (char *)(CONCAT31((int3)((uint)piVar8 >> 8),(char)piVar8 + '(') ^ *puVar16);
    cVar27 = (char)puVar16;
    *pbVar23 = *pbVar23 + cVar27;
    uVar21 = (undefined2)((uint)puVar29 >> 0x10);
    cVar26 = (char)puVar29;
    cVar32 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x75);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar6 = (char)pcVar9 + 'o';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6);
    *pcVar9 = *pcVar9 + cVar6;
    cVar33 = (char)((uint)puVar16 >> 8);
    *unaff_EBP = *unaff_EBP - cVar33;
    pbVar23[1] = pbVar23[1] + cVar27;
    pcVar9 = pcVar9 + -0x757b021b;
    cVar6 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar6;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    cVar15 = cVar6 + 'o';
    pcVar9 = (char *)CONCAT31(uVar14,cVar15);
    pbVar28 = pbVar23 + 2;
    *pcVar9 = *pcVar9 + cVar15;
    iVar11 = CONCAT22(uVar21,CONCAT11(cVar32 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar32,cVar26)) +
                                                        0x76),cVar26));
    *pcVar9 = *pcVar9 + cVar15;
    pcVar9 = (char *)CONCAT31(uVar14,cVar6 + -0x22);
    puVar36 = (uint *)((int)puVar35 + 1);
    *(byte *)puVar35 = *pbVar10;
    *pcVar9 = *pcVar9 + cVar6 + -0x22;
    *(byte *)((int)puVar16 + (int)pcVar9) =
         *(byte *)((int)puVar16 + (int)pcVar9) - (char)((uint)pbVar28 >> 8);
    *pbVar28 = *pbVar28 + cVar27;
    bVar19 = cVar33 - pbVar23[4];
    pbVar7 = pbVar10 + 5;
    out(*(undefined4 *)(pbVar10 + 1),(short)pbVar28);
    puVar35 = (uint *)((uint)(pcVar9 + *(int *)(pcVar9 + iVar11)) ^ 0x280a0001);
    *(byte *)puVar35 = (byte)*puVar35 << 1 | (char)(byte)*puVar35 < '\0';
    *pbVar7 = *pbVar7 + (char)puVar35;
    pbVar7 = pbVar7 + *(int *)(pbVar23 + -0x5c);
    pbVar10 = (byte *)((uint)puVar35 | *puVar35);
    *pbVar7 = *pbVar7 + (char)pbVar10;
    puVar29 = (uint *)CONCAT31((int3)((uint)iVar11 >> 8),cVar26 - (char)pbVar28);
    bVar5 = *pbVar10;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar19 + *pbVar10,cVar27));
    iVar11 = *(int *)pbVar10;
    *pbVar28 = *pbVar28 + cVar27;
    cVar6 = (char)(pbVar10 + (uint)CARRY1(bVar19,bVar5) + iVar11) + 'r';
    puVar35 = (uint *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar19,bVar5) + iVar11) >> 8),
                               cVar6);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),CONCAT11(10,(char)pbVar28));
    *(char *)(puVar35 + 10) = (char)puVar35[10] + '\n';
    *pbVar7 = *pbVar7 + cVar6;
    pbVar10 = pbVar7 + *(int *)(pbVar23 + -0x5e);
    uVar30 = *puVar35;
    cVar6 = (char)((uint)puVar35 | uVar30);
    *pbVar10 = *pbVar10 + cVar6;
    uVar14 = (undefined3)(((uint)puVar35 | uVar30) >> 8);
    cVar15 = cVar6 + (byte)*puVar29;
    puVar35 = (uint *)CONCAT31(uVar14,cVar15);
    if (SCARRY1(cVar6,(byte)*puVar29) == cVar15 < '\0') goto code_r0x00405090;
    *(byte *)puVar35 = (byte)*puVar35 + cVar15;
    piVar8 = (int *)CONCAT31(uVar14,cVar15 + '\x02');
    puVar35 = puVar36;
  }
  else {
    out(2,(char)piVar8);
    uStack_c = in_ES;
    if ((POPCOUNT(*pbVar23) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  cVar6 = (char)piVar8 + '}';
  pbVar7 = (byte *)CONCAT31(uVar14,cVar6);
  pbVar23[(int)pbVar7] = pbVar23[(int)pbVar7] + cVar6;
  pbVar23[0x280a0000] = pbVar23[0x280a0000] - (char)((uint)piVar8 >> 8);
  bVar5 = (byte)puVar16 & 7;
  *pbVar7 = *pbVar7 << bVar5 | *pbVar7 >> 8 - bVar5;
  *pbVar10 = *pbVar10 + cVar6;
  cVar27 = (char)puVar29 - *pbVar10;
  uVar21 = (undefined2)((uint)puVar29 >> 0x10);
  cVar33 = (char)((uint)puVar29 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar29 >> 8),cVar27) + 0x7c);
  pcVar9 = (char *)CONCAT22(uVar21,CONCAT11(cVar33,cVar27));
  *pbVar7 = *pbVar7 + cVar6;
  bVar19 = (char)piVar8 + 0xa7U & *pbVar23;
  puVar36 = (uint *)((int)puVar35 + *(int *)(unaff_EBP + 0x7c));
  *(char *)CONCAT31(uVar14,bVar19) = *(char *)CONCAT31(uVar14,bVar19) + bVar19;
  bVar19 = bVar19 + 0x2a;
  pbVar7 = (byte *)CONCAT31(uVar14,bVar19);
  *pbVar7 = *pbVar7 + bVar19;
  *pcVar9 = *pcVar9 + cVar27;
  *pbVar23 = *pbVar23 ^ bVar19;
  *pcVar9 = *pcVar9 + bVar19;
  bVar5 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar19;
  cVar6 = (bVar19 - *pbVar7) - CARRY1(bVar5,bVar19);
  *(byte *)puVar16 = (byte)*puVar16 + (byte)pbVar23;
  cVar33 = cVar33 + pcVar9[0x7b];
  *(char *)CONCAT31(uVar14,cVar6) = *(char *)CONCAT31(uVar14,cVar6) + cVar6;
  pcVar9 = (char *)CONCAT31(uVar14,cVar6 + 'o');
  *pcVar9 = *pcVar9 + cVar6 + 'o';
  pcVar9 = pcVar9 + 0x2ed7fde6;
  cVar15 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar15;
  cVar6 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar33,cVar27)) + 0x7b);
  *pcVar9 = *pcVar9 + cVar15;
  piVar8 = (int *)(CONCAT31((int3)((uint)pcVar9 >> 8),cVar15 + 'o') + 0x6f060000);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar13 = (undefined3)((uint)pbVar23 >> 8);
  bVar19 = (byte)pbVar23 | *pbVar10;
  pbVar24 = (byte *)CONCAT31(uVar13,bVar19);
  uVar30 = CONCAT22(uVar21,CONCAT11(cVar33 + cVar6,cVar27)) | (uint)pbVar10;
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  bVar5 = (byte)piVar8 | *pbVar24;
  pbVar28 = (byte *)CONCAT31(uVar14,bVar5);
  cVar6 = (byte)puVar16 - bVar19;
  puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),cVar6);
  *pbVar28 = *pbVar28 + bVar5;
  pbVar7 = pbVar10 + 4;
  out(*(undefined4 *)pbVar10,(short)pbVar24);
  *pbVar28 = bVar5;
  *pbVar24 = *pbVar24 + cVar6;
  pbVar10 = pbVar10 + 8;
  out(*(undefined4 *)pbVar7,(short)pbVar24);
  *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
  puVar29 = (uint *)(CONCAT31((int3)(uVar30 >> 8),(char)uVar30 - (char)((uint)pbVar23 >> 8)) |
                    (uint)pbVar10);
  pbVar23 = (byte *)CONCAT31(uVar13,(bVar19 | *pbVar10) + (byte)*puVar36);
  cVar6 = bVar5 - (byte)*puVar36;
  puVar35 = (uint *)CONCAT31(uVar14,cVar6 - *(char *)CONCAT31(uVar14,cVar6));
code_r0x00405090:
  *puVar35 = (uint)(pbVar23 + *puVar35);
  cVar6 = (char)puVar35;
  *(byte *)puVar35 = (byte)*puVar35 + cVar6;
  *(byte *)puVar35 = (byte)*puVar35 + cVar6;
  *(byte *)puVar35 = (byte)*puVar35 + cVar6;
  *puVar16 = *puVar16 - (int)unaff_EBP;
  bVar5 = *pbVar10;
  bVar19 = (byte)pbVar23;
  *pbVar10 = *pbVar10 + bVar19;
  *(byte *)puVar35 = (byte)*puVar35 + cVar6 + CARRY1(bVar5,bVar19);
  *(byte *)puVar16 = (byte)*puVar16 + cVar6;
  uVar30 = *puVar29;
  *(byte *)puVar29 = (byte)*puVar29 + 0x72;
  *(byte *)puVar29 = (byte)*puVar29;
  cVar6 = (char)((uint)pbVar23 >> 8);
  if (SCARRY1((byte)uVar30,'r')) {
    pbVar10 = pbVar10 + *(int *)(pbVar23 + -10);
  }
  else {
    while( true ) {
      *pbVar10 = *pbVar10 + (char)puVar35;
      uVar14 = (undefined3)((uint)puVar35 >> 8);
      cVar15 = (char)puVar35 + (byte)*puVar29;
      pcVar9 = (char *)CONCAT31(uVar14,cVar15);
      puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                 CONCAT11((char)((uint)puVar29 >> 8) +
                                          *(byte *)((int)puVar29 + 0x7b),(char)puVar29));
      *pcVar9 = *pcVar9 + cVar15;
      in_AF = 9 < (cVar15 + 0x6fU & 0xf) | in_AF;
      uVar30 = CONCAT31(uVar14,cVar15 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar22 = (byte)uVar30;
      piVar8 = (int *)CONCAT22((short)(uVar30 >> 0x10),
                               CONCAT11((char)((uint)puVar35 >> 8) + in_AF,bVar22));
      *piVar8 = *piVar8 + (int)piVar8;
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar22 = bVar22 | *(byte *)(piVar8 + 0x354a);
      bVar22 = bVar22 - *(char *)CONCAT31(uVar14,bVar22);
      pbVar7 = (byte *)CONCAT31(uVar14,bVar22);
      bVar5 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar22;
      pbVar10 = pbVar10 + (-(uint)CARRY1(bVar5,bVar22) - *(int *)pbVar7);
      puVar35 = (uint *)(pbVar7 + 0xfc00);
      *pbVar23 = *pbVar23 + cVar6;
      uVar30 = *puVar35;
      bVar5 = (byte)puVar35;
      *(byte *)puVar35 = (byte)*puVar35 + bVar5;
      uVar3 = (uint)CARRY1((byte)uVar30,bVar5);
      uVar30 = *puVar29;
      uVar1 = *puVar29;
      *puVar29 = (uint)((byte *)(uVar1 + (int)puVar35) + uVar3);
      if (!CARRY4(uVar30,(uint)puVar35) && !CARRY4(uVar1 + (int)puVar35,uVar3)) break;
      *(byte *)puVar35 = (byte)*puVar35 + bVar5;
    }
  }
  uVar30 = (uint)puVar35 | *puVar35;
  uVar21 = SUB42(pbVar23,0);
  *pbVar10 = *pbVar10 + (char)uVar30;
  piVar8 = (int *)(uVar30 + 0xc1872);
  if (SCARRY4(uVar30,0xc1872)) {
    cVar15 = (char)piVar8;
    *(char *)piVar8 = *(char *)piVar8 + cVar15;
    *pbVar23 = *pbVar23 + cVar15;
    *(char *)piVar8 = *(char *)piVar8 + cVar15;
    *(byte *)puVar29 = (byte)*puVar29 + (char)puVar16;
    *(char *)piVar8 = *(char *)piVar8 + cVar15;
    *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) + bVar19;
    pbVar7 = pbVar10;
    goto code_r0x00405117;
  }
  do {
    bVar5 = *pbVar10;
    bVar19 = (byte)piVar8;
    *pbVar10 = *pbVar10 + bVar19;
    if (CARRY1(bVar5,bVar19)) {
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      uVar14 = (undefined3)((uint)puVar16 >> 8);
      bVar5 = (byte)puVar16 | bRam396f1609;
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      puVar16 = (uint *)CONCAT31(uVar14,bVar5 | *(byte *)CONCAT31(uVar14,bVar5));
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar19 = bVar19 | *pbVar23;
      pcVar9 = (char *)CONCAT31(uVar14,bVar19);
      if ((POPCOUNT(bVar19) & 1U) != 0) {
        pbVar7 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,uVar21);
        uVar30 = CONCAT22((short)((uint)piVar8 >> 0x10),(ushort)bVar19);
        *pbVar7 = *pbVar7 + bVar19;
        pcVar9 = (char *)(uVar30 | 8);
        cVar15 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x7a);
        puVar35 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar15,(char)puVar29));
        *pcVar9 = *pcVar9 + (char)pcVar9;
        cVar6 = (char)pcVar9 + 'o';
        piVar8 = (int *)CONCAT31((int3)(uVar30 >> 8),cVar6);
        *(char *)piVar8 = (char)*piVar8 + cVar6;
        *(byte *)puVar16 = (byte)*puVar16 + 1;
        pbVar10 = pbVar10 + 8;
        out(*(undefined4 *)pbVar7,uVar21);
        pbVar23 = (byte *)((uint)pbVar23 ^ uRam08122c04);
        iVar11 = CONCAT31((int3)((uint)(*piVar8 * 0x17070600) >> 8),2);
        *(char *)(iVar11 * 2) = *(char *)(iVar11 * 2) - cVar15;
        do {
          bVar5 = (byte)iVar11;
          *pbVar10 = *pbVar10 + bVar5;
          bVar37 = CARRY1(bVar5,(byte)*puVar35);
          uVar14 = (undefined3)((uint)iVar11 >> 8);
          cVar6 = bVar5 + (byte)*puVar35;
          pbVar7 = (byte *)CONCAT31(uVar14,cVar6);
          uVar21 = in_DS;
          uVar34 = uStack_4c;
          if (SCARRY1(bVar5,(byte)*puVar35) == cVar6 < '\0') goto GenerateStatusText;
          *pbVar7 = *pbVar7 + cVar6;
          uVar30 = CONCAT31(uVar14,cVar6 + '\'') + 0x1ebd9f3;
          uStack_50 = (undefined1)uStack_c;
          uStack_4f = (undefined1)((ushort)uStack_c >> 8);
          piVar8 = (int *)(uVar30 ^ 0x73060000);
          puVar16 = (uint *)((int)puVar16 + 1);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          puVar35 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),
                                     CONCAT11((byte)((uint)puVar35 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar35));
          cVar6 = (char)uVar30;
          *(char *)piVar8 = (char)*piVar8 + cVar6;
          uVar30 = CONCAT31((int3)((uint)piVar8 >> 8),cVar6 + '\x02');
          bVar37 = 0xd9f2d2da < uVar30;
          iVar11 = uVar30 + 0x260d2d25;
          pcVar9 = unaff_EBP;
          do {
            uVar14 = (undefined3)((uint)iVar11 >> 8);
            bVar19 = (char)iVar11 + -2 + bVar37;
            pbVar7 = (byte *)CONCAT31(uVar14,bVar19);
            bVar5 = *pbVar7;
            *pbVar7 = *pbVar7 + bVar19;
            bVar22 = (byte)puVar35;
            uStack_4c = uStack_c;
            if (CARRY1(bVar5,bVar19)) {
              *pbVar7 = *pbVar7 + bVar19;
              puVar35 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),
                                         CONCAT11((byte)((uint)puVar35 >> 8) | pcVar9[0x7f],bVar22))
              ;
              *pbVar7 = *pbVar7 + bVar19;
              pbVar7 = (byte *)CONCAT31(uVar14,bVar19 + 0x2a);
              *pbVar7 = *pbVar7 + bVar19 + 0x2a;
              *(byte *)puVar35 = (byte)*puVar35 + (char)pbVar23;
              uVar21 = in_DS;
              while( true ) {
                in_DS = uVar21;
                bVar19 = (byte)pbVar7;
                *pbVar23 = *pbVar23 ^ bVar19;
                *pbVar23 = *pbVar23 + (char)puVar35;
                *pbVar7 = *pbVar7 + bVar19;
                *(byte *)puVar35 = (byte)*puVar35 + (char)((uint)pbVar23 >> 8);
                bVar5 = *pbVar7;
                *pbVar7 = *pbVar7 + bVar19;
                uVar30 = *puVar35;
                uVar1 = *puVar35;
                *puVar35 = (uint)(pbVar7 + uVar1 + CARRY1(bVar5,bVar19));
                uVar14 = (undefined3)((uint)pbVar7 >> 8);
                if (CARRY4(uVar30,(uint)pbVar7) ||
                    CARRY4((uint)(pbVar7 + uVar1),(uint)CARRY1(bVar5,bVar19))) break;
                *pbVar10 = *pbVar10 + bVar19;
                pcVar17 = (char *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                           CONCAT11((char)((uint)puVar16 >> 8) + *pbVar7,
                                                    (char)puVar16));
                *pbVar10 = *pbVar10 + bVar19;
                piVar8 = (int *)CONCAT31(uVar14,bVar19 | (byte)*puVar35);
                pbVar7 = pbVar10;
                while( true ) {
                  pbVar10 = pbVar7 + 4;
                  out(*(undefined4 *)pbVar7,(short)pbVar23);
                  pbVar23 = pbVar23 + 1;
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  bVar22 = (byte)((uint)pcVar17 >> 8) | *pbVar23;
                  uVar14 = (undefined3)((uint)piVar8 >> 8);
                  bVar19 = (byte)piVar8 ^ *pbVar23;
                  pcVar12 = (char *)CONCAT31(uVar14,bVar19);
                  cRam282b0000 = cRam282b0000 - bVar22;
                  *pcVar12 = *pcVar12 + bVar19;
                  unaff_EBP = pcVar9 + -*(int *)pbVar23;
                  uStack_50 = (undefined1)in_DS;
                  uStack_4f = (undefined1)((ushort)in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar36 + 0x17);
                  *pcVar12 = *pcVar12 + bVar19;
                  puVar16 = (uint *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                             CONCAT11(bVar22 + bVar5 | *pbVar23,(char)pcVar17));
                  *(byte *)puVar35 = (byte)*puVar35 + (char)puVar35;
                  *(byte *)((int)pcVar12 * 2) = *(byte *)((int)pcVar12 * 2) ^ bVar19;
                  in_AF = 9 < (bVar19 & 0xf) | in_AF;
                  bVar19 = bVar19 + in_AF * -6;
                  pbVar7 = (byte *)CONCAT31(uVar14,bVar19 + (0x9f < bVar19 | in_AF * (bVar19 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
                  *(char *)((int)pbVar7 * 2) =
                       *(char *)((int)pbVar7 * 2) + (char)((uint)pbVar23 >> 8);
                  bVar37 = CARRY1((byte)*puVar16,(byte)pbVar23);
                  *(byte *)puVar16 = (byte)*puVar16 + (byte)pbVar23;
                  uVar21 = in_DS;
                  uVar34 = uStack_c;
GenerateStatusText:
                  in_DS = uVar34;
                  pcVar9 = unaff_EBP;
                  uStack_4c = in_DS;
                  if (!bVar37) break;
                  *pbVar7 = *pbVar7 + (char)pbVar7;
                  iVar11 = CONCAT31((int3)((uint)puVar16 >> 8),(byte)puVar16 | *pbVar23);
                  uVar21 = (undefined2)((uint)puVar35 >> 0x10);
                  cVar27 = (char)((uint)puVar35 >> 8) + *(byte *)((int)puVar35 + 0x7d);
                  *pbVar7 = *pbVar7 + (char)pbVar7;
                  *(byte *)puVar36 = (byte)*puVar36 - (char)((uint)puVar16 >> 8);
                  iVar11 = iVar11 - *(int *)(iVar11 + 0xb0a0000);
                  cVar6 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar27,(char)puVar35)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar10,(short)pbVar23);
                  pbVar23 = (byte *)CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar7 = pbVar10 + 8;
                  out(*(undefined4 *)(pbVar10 + 4),CONCAT11(uStack_4f,uStack_50));
                  pcVar9 = unaff_EBP + 1;
                  cVar15 = (char)iVar11;
                  pcVar17 = (char *)CONCAT22((short)((uint)iVar11 >> 0x10),
                                             CONCAT11((byte)((uint)iVar11 >> 8) |
                                                      *(byte *)((int)puVar36 + 0x46),cVar15));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_c = CONCAT11(uStack_4f,uStack_50);
                  uVar14 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar7,0xf0)) >> 8);
                  piVar8 = (int *)CONCAT31(uVar14,0x5f);
                  puVar36 = (uint *)((int)puVar36 + 1);
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  puVar35 = (uint *)CONCAT22(uVar21,CONCAT11(cVar27 + cVar6 | pbVar10[-0x78],
                                                             (char)puVar35));
                  *(char *)piVar8 = (char)*piVar8 + '_';
                  puVar16 = (uint *)CONCAT31(uVar14,0x8c);
                  *(byte **)(pbVar7 + (int)puVar36 * 8) =
                       pbVar23 + *(int *)(pbVar7 + (int)puVar36 * 8);
                  bVar5 = *pbVar7;
                  *pbVar7 = *pbVar7 + 0x8c;
                  if (bVar5 < 0x74) {
                    *pbVar23 = *pbVar23 + cVar15;
                    *(byte *)puVar35 = (byte)*puVar35 >> 1;
                    *(char *)puVar16 = (char)*puVar16 + -0x74;
                    *puVar16 = (uint)(pcVar9 + *puVar16);
                    *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                    *pbVar23 = *pbVar23 + cVar15;
                    unaff_EBP[2] = unaff_EBP[2] - cVar15;
                    *pbVar23 = *pbVar23 + cVar15;
                    pbVar10 = (byte *)CONCAT31(uVar14,0x83);
                    puVar16 = puVar35;
                    goto code_r0x00405312;
                  }
                  *puVar16 = (uint)(*puVar16 + (int)puVar16);
                  piVar8 = (int *)(CONCAT31(uVar14,(byte)puVar16[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar16[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar8 = (int *)((int)piVar8 + *(int *)pbVar7);
                }
              }
              *pbVar23 = *pbVar23 + bVar19;
              *(byte *)puVar35 = (byte)*puVar35 - (char)pbVar23;
              *pbVar7 = *pbVar7 + bVar19;
              pbVar7 = (byte *)CONCAT31(uVar14,bVar19 | (byte)*puVar35);
            }
            else {
              cVar6 = (char)puVar16;
              *pbVar23 = *pbVar23 + cVar6;
              *(byte **)pbVar7 = pbVar23 + *(int *)pbVar7;
              *pbVar7 = *pbVar7 + bVar19;
              bVar19 = bVar19 + *pbVar7;
              pbVar7 = (byte *)CONCAT31(uVar14,bVar19);
              if (-1 < (char)bVar19) {
                *(byte *)puVar35 = (byte)*puVar35 + bVar22;
                out(*(undefined4 *)pbVar10,(short)pbVar23);
                pbVar23 = pbVar23 + 1;
                *pbVar7 = *pbVar7 + bVar19;
                puVar35 = (uint *)CONCAT31((int3)((uint)puVar35 >> 8),
                                           bVar22 | (byte)((uint)iVar11 >> 8));
                cVar15 = bVar19 - (byte)*puVar16;
                pcVar17 = (char *)CONCAT31(uVar14,cVar15);
                *pcVar17 = *pcVar17 + cVar15 + (bVar19 < (byte)*puVar16);
                *pbVar23 = *pbVar23 + cVar15;
                pcVar17 = (char *)((int)pcVar17 * 2 + 0x79);
                *pcVar17 = *pcVar17 + (char)((uint)pbVar23 >> 8);
                pbVar7 = (byte *)in((short)pbVar23);
                pbVar10 = pbVar10 + 4;
              }
              *pbVar10 = *pbVar10 + cVar6;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              *pbVar7 = *pbVar7 + (char)pbVar7;
              uStack_50 = (undefined1)in_DS;
              uStack_4f = (undefined1)((ushort)in_DS >> 8);
              bVar5 = *pbVar7;
              bVar22 = (byte)((uint)puVar16 >> 8);
              bVar4 = bVar22 + *pbVar7;
              iVar11 = *(int *)pbVar7;
              *pbVar23 = *pbVar23 + cVar6;
              bVar19 = (char)(pbVar7 + (uint)CARRY1(bVar22,bVar5) + iVar11) - (byte)*puVar35;
              pbVar7 = (byte *)CONCAT31((int3)((uint)(pbVar7 + (uint)CARRY1(bVar22,bVar5) + iVar11)
                                              >> 8),bVar19);
              *(byte *)puVar35 = (byte)*puVar35 ^ bVar19;
              *pcVar9 = *pcVar9 + (char)puVar35;
              *pbVar7 = *pbVar7 + bVar19;
              *pbVar7 = *pbVar7 + bVar19;
              *pbVar7 = *pbVar7 + bVar19;
              puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                         CONCAT11(bVar4 + *pbVar7,cVar6));
              pbVar7 = pbVar7 + (uint)CARRY1(bVar4,*pbVar7) + *(int *)pbVar7;
              *pbVar23 = *pbVar23 + cVar6;
              pbVar10 = pbVar10 + *(int *)(pbVar23 + 0x3e);
            }
            *pbVar10 = *pbVar10 + (char)pbVar7;
            cVar6 = (char)pbVar7 + 'r';
            pbVar10 = pbVar10 + -1;
            uVar30 = CONCAT31((int3)((uint)pbVar7 >> 8),cVar6);
            *pbVar10 = *pbVar10 + cVar6;
            bVar37 = 0xfff38f8d < uVar30;
            iVar11 = uVar30 + 0xc7072;
            unaff_EBP = pcVar9;
          } while (SCARRY4(uVar30,0xc7072));
        } while( true );
      }
      *pcVar9 = *pcVar9 + bVar19;
      bVar19 = bVar19 + 0x6f;
      pbVar7 = (byte *)CONCAT31(uVar14,bVar19);
      bVar5 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar19;
      uVar14 = (undefined3)
               ((uint)(pbVar7 + (uint)CARRY1(bVar5,bVar19) + *(int *)((int)puVar16 + (int)pbVar23))
               >> 8);
      cVar15 = (char)(pbVar7 + (uint)CARRY1(bVar5,bVar19) + *(int *)((int)puVar16 + (int)pbVar23)) +
               'E';
      pcVar9 = (char *)CONCAT31(uVar14,cVar15);
      *pcVar9 = *pcVar9 + cVar15;
      cVar15 = cVar15 + *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar14,cVar15);
      *pcVar9 = *pcVar9 + cVar15;
      puVar35 = (uint *)CONCAT31(uVar14,cVar15 + *pcVar9);
      *(char *)puVar35 = (char)*puVar35 + cVar15 + *pcVar9;
      pbVar7 = (byte *)((uint)puVar35 | *puVar35);
      bVar5 = *pbVar7;
      bVar19 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar19;
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar19 + CARRY1(bVar5,bVar19));
      pbVar7 = pbVar10;
code_r0x00405117:
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      puVar29 = (uint *)((int)puVar29 - *puVar29);
      pbVar10 = pbVar7 + 4;
      out(*(undefined4 *)pbVar7,uVar21);
    }
    *pbVar23 = *pbVar23 + (char)puVar16;
    bVar37 = puVar29 < (uint *)*piVar8;
    puVar29 = (uint *)((int)puVar29 - *piVar8);
    bVar5 = (byte)((uint)puVar16 >> 8);
    *(byte *)((int)puVar36 + 0x39) = (*(byte *)((int)puVar36 + 0x39) - bVar5) - bVar37;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    uVar30 = *puVar29;
    *(int *)((int)puVar36 + 0x39) = *(int *)((int)puVar36 + 0x39) - (int)unaff_EBP;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar30 | (byte)*puVar29,(char)puVar16));
    *(char *)(piVar8 + 10) = (char)piVar8[10] + cVar6;
  } while( true );
code_r0x004052ee:
  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
  bVar5 = (char)piVar8 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),bVar5);
  *pbVar10 = *pbVar10 ^ bVar5;
  *(byte *)puVar35 = (byte)*puVar35 + (char)((uint)pcVar17 >> 8);
  bVar5 = *pbVar23;
  *pbVar23 = *pbVar23 + (byte)pcVar17;
  piVar8 = (int *)(((uint)pbVar10 | 0x1496f09) + *puVar36 + (uint)CARRY1(bVar5,(byte)pcVar17));
  pbVar28 = pbVar7 + 4;
  out(*(undefined4 *)pbVar7,(short)pbVar23);
  pbVar24 = pbVar23 + -1;
  *piVar8 = *piVar8 + (int)piVar8;
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | (byte)*puVar35);
  cVar6 = (char)piVar8 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar6);
  puVar16 = puVar35;
  pbVar7 = pbVar28;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    *pbVar23 = *pbVar23 - (char)((uint)pbVar24 >> 8);
    *pbVar10 = *pbVar10 + cVar6;
code_r0x00405396:
    bVar5 = *pbVar10;
    bVar19 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar19;
    *(byte **)pbVar28 = pbVar10 + (uint)CARRY1(bVar5,bVar19) + *(int *)pbVar28;
    out(*(undefined4 *)pbVar28,(short)pbVar23);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                              CONCAT11((byte)((uint)pbVar10 >> 8) | pbVar28[4],bVar19));
    *(char **)((int)puVar36 + -1) = pcVar9 + *(int *)((int)puVar36 + -1);
    out(*(undefined4 *)(pbVar28 + 4),(short)pbVar23);
    *pcVar9 = *pcVar9 + bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar35 = (uint *)((int)puVar16 + -1);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar14 = (undefined3)((uint)pbVar23 >> 8);
  piVar8 = (int *)((int)piVar8 + 0x1b7e);
  bVar22 = (byte)pbVar23 | *(byte *)puVar35 | *(byte *)puVar35;
  iRam04115f2c = iRam04115f2c + (int)piVar8;
  out(*(undefined4 *)pbVar7,(short)CONCAT31(uVar14,bVar22));
  *piVar8 = *piVar8 + (int)piVar8;
  bVar22 = bVar22 | (byte)piVar8;
  iVar25 = CONCAT31(uVar14,bVar22);
  pbVar10 = (byte *)((int)piVar8 - *piVar8);
  cVar6 = (char)pbVar10;
  *pcVar17 = *pcVar17 + cVar6;
  cVar15 = (char)pcVar17 - bVar22;
  *pbVar10 = *pbVar10 + cVar6;
  uVar21 = (undefined2)((uint)pcVar17 >> 0x10);
  bVar19 = (byte)((uint)pcVar17 >> 8) | *pbVar10;
  pcVar9 = pcVar9 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar5 = *(byte *)(CONCAT22(uVar21,CONCAT11(bVar19,cVar15)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar9;
  *pbVar10 = *pbVar10 + cVar6;
  bVar5 = bVar19 | bVar5 | *(byte *)puVar35;
  iVar18 = CONCAT22(uVar21,CONCAT11(bVar5,cVar15));
  pbVar24 = (byte *)((uint)(pbVar7 + 4) ^ *(uint *)(iVar25 + -0x43));
  iVar11 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar11,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar6;
  }
  pbVar23 = pbVar10 + 0x5674;
  puVar36 = (uint *)((int)puVar36 +
                    (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar24 + -0x7f)));
  bVar19 = (byte)pbVar23;
  *pbVar23 = *pbVar23 + bVar19;
  uVar13 = (undefined3)((uint)pbVar23 >> 8);
  bVar4 = bVar19 + 0x2d;
  piVar8 = (int *)CONCAT31(uVar13,bVar4);
  *(uint *)(pbVar24 + (int)puVar36 * 8) =
       *(int *)(pbVar24 + (int)puVar36 * 8) + iVar25 + (uint)(0xd2 < bVar19);
  bVar19 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar4;
  if (!CARRY1(bVar19,bVar4)) {
    do {
      pbVar23 = (byte *)(iVar25 + 1);
      bVar19 = (byte)piVar8;
      *(byte *)piVar8 = (char)*piVar8 + bVar19;
      bVar22 = (byte)((uint)piVar8 >> 8);
      bVar4 = (byte)puVar35 | bVar22;
      puVar16 = (uint *)CONCAT31((int3)((uint)puVar35 >> 8),bVar4);
      out(*(undefined4 *)pbVar24,(short)pbVar23);
      *(byte *)piVar8 = (char)*piVar8 + bVar19;
      uVar21 = (undefined2)((uint)iVar18 >> 0x10);
      cVar6 = (char)iVar18;
      pbVar10 = (byte *)CONCAT22(uVar21,CONCAT11((byte)((uint)iVar18 >> 8) | *pbVar23,cVar6));
      bVar5 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar19;
      *(byte *)piVar8 = (char)*piVar8 + bVar19 + CARRY1(bVar5,bVar19);
      *pbVar23 = *pbVar23 + bVar19;
      *(byte *)puVar36 = (byte)*puVar36 + bVar22;
      *(int *)((int)piVar8 * 2) = *(int *)((int)piVar8 * 2) + CONCAT22(uVar21,CONCAT11(0x1c,cVar6));
      *(byte *)piVar8 = (char)*piVar8 + bVar19;
      cVar15 = (char)pbVar23;
      *(byte *)puVar16 = (byte)*puVar16 + cVar15;
      *(byte *)((int)piVar8 * 2) = *(byte *)((int)piVar8 * 2) ^ bVar19;
      *(byte *)piVar8 = (char)*piVar8 + bVar19;
      pbVar10 = pbVar24 + 8;
      out(*(undefined4 *)(pbVar24 + 4),(short)pbVar23);
      piVar8 = (int *)0xa0a0000;
      *pbVar23 = *pbVar23;
      bVar19 = cVar6 - cVar15;
      iVar18 = CONCAT22(uVar21,CONCAT11((byte)puVar36[0x14] | 0x1c | bRam0ca87216,bVar19));
      *pbVar23 = *pbVar23;
      bVar5 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar19;
      if (!CARRY1(bVar5,bVar19)) {
        piVar8 = (int *)0x1e7b7000;
        bVar5 = (byte)((uint)puVar35 >> 8) | *(byte *)(iVar25 + 3);
        puVar16 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),CONCAT11(bVar5,bVar4));
        if (bVar5 != 0) {
          pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar15 + pbVar10[(int)puVar36 * 8]);
          piVar8 = (int *)0x6d7d7000;
          iVar18 = iVar18 + 1;
        }
      }
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      iVar25 = CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | pbVar10[(int)puVar36 * 8]);
      *(char *)piVar8 = (char)*piVar8;
      piVar8 = (int *)CONCAT31((int3)((uint)piVar8 >> 8),0xf9);
      *puVar36 = (uint)((int)piVar8 + *puVar36 + 1);
      pbVar24 = pbVar24 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar25);
      puVar35 = puVar16;
    } while( true );
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar4 = bVar4 | *(byte *)((int)piVar8 + 0x4000081);
  piVar8 = (int *)CONCAT31(uVar13,bVar4);
  if ('\0' < (char)bVar4) {
    *(byte *)piVar8 = (char)*piVar8 + bVar4;
    puVar29 = (uint *)CONCAT31(uVar13,bVar4 + 0x28);
    *puVar29 = *puVar29 ^ (uint)puVar29;
    *(byte *)puVar35 = *(byte *)puVar35 + bVar5;
    cVar6 = (bVar4 + 0x28) - bVar5;
    pcVar9 = (char *)CONCAT31(uVar13,cVar6);
    *pcVar9 = *pcVar9 + cVar6;
    pbVar23 = (byte *)CONCAT31(uVar14,bVar22 | *(byte *)puVar35);
    pcVar17 = (char *)CONCAT22((short)((uint)puVar35 >> 0x10),
                               CONCAT11((char)((uint)puVar35 >> 8) + *(byte *)((int)puVar16 + 0x7d),
                                        (char)puVar35));
    *pcVar9 = *pcVar9 + cVar6;
    pbVar10 = (byte *)CONCAT31(uVar13,cVar6 + 0x39U ^ *(byte *)CONCAT31(uVar13,cVar6 + 0x39U));
    *pcVar17 = *pcVar17 + bVar5;
    pbVar28 = pbVar24 + 4;
    out(*(undefined4 *)pbVar24,(short)pbVar23);
    goto code_r0x00405396;
  }
  pbVar7 = pbVar24 + 4;
  out(*(undefined4 *)pbVar24,(short)iVar25);
  pcVar17 = (char *)(iVar18 + -1);
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  pbVar23 = (byte *)CONCAT31(uVar14,bVar22 | *(byte *)puVar35);
  goto code_r0x004052ee;
}


