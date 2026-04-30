/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404dec
 * Raw Name    : <ReadAllData>b__12
 * Demangled   : <ReadAllData>b__12
 * Prototype   : undefined4 <ReadAllData>b__12(int * si, byte * param_2)
 * Local Vars  : pcVar17, puVar16, bVar19, iVar18, uVar21, uVar20, pbVar23, pbVar22, bVar25, iVar24, cVar27, cVar26, pbVar28, unaff_EBX, uVar30, puVar29, cVar32, bVar31, unaff_EBP, cVar33, pbVar34, unaff_ESI, puVar35, unaff_EDI, in_DS, in_ES, in_AF, in_CF, param_2, bVar36, si, uStack_50, uStack_4e, uStack_4f, uStack_c, uStack_4c, uVar2, uVar1, bVar4, bVar3, bVar6, cVar5, piVar7, in_EAX, pbVar9, pcVar8, iVar11, puVar10, uVar13, pcVar12, cVar15, uVar14
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

undefined4 __fastcall <ReadAllData>b__12(int *si,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte *in_EAX;
  undefined3 uVar13;
  int *piVar7;
  char *pcVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  undefined3 uVar14;
  char cVar15;
  byte bVar19;
  undefined2 uVar20;
  uint *puVar16;
  char *pcVar17;
  undefined2 uVar21;
  int iVar18;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  byte bVar25;
  char cVar26;
  char cVar27;
  byte bVar31;
  char *unaff_EBX;
  byte *pbVar28;
  uint *puVar29;
  char cVar32;
  char cVar33;
  uint uVar30;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar34;
  uint *unaff_EDI;
  uint *puVar35;
  undefined2 in_ES;
  undefined2 in_DS;
  bool in_CF;
  byte in_AF;
  bool bVar36;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_c;
  
                    /* .NET CLR Managed Code */
  bVar6 = (byte)param_2;
  cVar5 = (char)((uint)param_2 >> 8);
  uVar21 = SUB42(param_2,0);
  if (!in_CF) goto code_r0x00404dfc;
  while( true ) {
    *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
    uVar13 = (undefined3)((uint)in_EAX >> 8);
    bVar3 = (byte)in_EAX | *unaff_ESI;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x34));
    *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
    bVar4 = bVar3 + 2;
    in_EAX = (byte *)CONCAT31(uVar13,bVar4);
    if ((POPCOUNT(bVar4) & 1U) != 0) break;
code_r0x00404dfc:
    bVar3 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar3;
    bVar4 = bVar3 + 0x6f;
    pbVar9 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
    *pbVar9 = *pbVar9;
    *unaff_ESI = *unaff_ESI + 1;
    *si = (*si - (int)pbVar9) - (uint)(0x90 < bVar3);
    bVar3 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar4;
    if (!CARRY1(bVar3,bVar4)) goto code_r0x00404e60;
    *pbVar9 = *pbVar9 + bVar4;
    uVar20 = (undefined2)((uint)si >> 0x10);
    bVar3 = (byte)((uint)si >> 8) | *pbVar9;
    in_EAX = pbVar9 + -*(int *)pbVar9;
    *unaff_EBX = *unaff_EBX + bVar3;
    cVar15 = (char)si - param_2[2];
    si = (int *)CONCAT31((int3)(CONCAT22(uVar20,CONCAT11(bVar3,(char)si)) >> 8),cVar15);
    bVar4 = (byte)in_EAX;
    if ((POPCOUNT(cVar15) & 1U) == 0) {
      *in_EAX = *in_EAX + bVar4;
      uVar13 = (undefined3)((uint)in_EAX >> 8);
      pcVar8 = (char *)CONCAT31(uVar13,bVar4 + 0x7b);
      out(*(undefined4 *)unaff_ESI,uVar21);
      *pcVar8 = *pcVar8 + bVar4 + 0x7b;
      bVar4 = bVar4 + 0x7e;
      pbVar9 = (byte *)CONCAT31(uVar13,bVar4);
      pbVar34 = unaff_ESI + 8;
      out(*(undefined4 *)(unaff_ESI + 4),uVar21);
      pbVar28 = (byte *)(unaff_EBX + -1);
      *pbVar9 = *pbVar9 + bVar4;
      bVar19 = *param_2;
      puVar16 = (uint *)CONCAT22(uVar20,CONCAT11(bVar3 | bVar19,cVar15));
      *pbVar9 = *pbVar9 + bVar4;
      *pbVar28 = *pbVar28 + bVar6;
      *pbVar28 = *pbVar28 ^ bVar4;
      *param_2 = *param_2 + (bVar3 | bVar19);
      *pbVar9 = *pbVar9 + bVar4;
      *pbVar9 = *pbVar9 + cVar5;
      bVar3 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      *(byte **)(unaff_EBX + 0x19) =
           pbVar34 + (uint)CARRY1(bVar3,bVar4) + *(int *)(unaff_EBX + 0x19);
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      bVar4 = bVar4 | *pbVar34;
      unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x33));
      *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
      bVar36 = SCARRY1(bVar4,'\x02');
      bVar3 = bVar4 + 2;
      piVar7 = (int *)CONCAT31(uVar13,bVar3);
      uStack_c = in_ES;
      if ((POPCOUNT(bVar3) & 1U) == 0) {
        *(byte *)piVar7 = (char)*piVar7 + bVar3;
        return CONCAT31(uVar13,bVar4 + 0x71);
      }
      goto code_r0x00404ebf;
    }
    *(byte *)unaff_EDI = (byte)*unaff_EDI + bVar3;
    bVar3 = *in_EAX;
    *in_EAX = *in_EAX + bVar4;
    *(byte **)(unaff_EBX + 0x18) =
         unaff_ESI + (uint)CARRY1(bVar3,bVar4) + *(int *)(unaff_EBX + 0x18);
  }
  pbVar9 = (byte *)CONCAT31(uVar13,bVar3 + 0x15 + (0xfd < bVar3));
  if (0xec < bVar4 || CARRY1(bVar3 + 0x15,0xfd < bVar3)) {
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  }
code_r0x00404e60:
  unaff_EBP = unaff_EBP + -*(int *)param_2;
  bVar3 = *pbVar9;
  *pbVar9 = *pbVar9 + (byte)pbVar9;
  pbVar28 = unaff_ESI + (-(uint)CARRY1(bVar3,(byte)pbVar9) - *(int *)pbVar9);
  pbVar9 = pbVar9 + *(int *)pbVar9;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  *(char *)si = (char)*si + cVar5;
  bVar3 = *pbVar9;
  *pbVar9 = *pbVar9 + (byte)pbVar9;
  *(byte **)(unaff_EBX + (int)param_2) =
       param_2 + (uint)CARRY1(bVar3,(byte)pbVar9) + *(int *)(unaff_EBX + (int)param_2);
  pbVar9 = pbVar9 + 0x73061314;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  uVar13 = (undefined3)((uint)si >> 8);
  bVar4 = (byte)si | *param_2;
  pcVar17 = (char *)CONCAT31(uVar13,bVar4);
  *pbVar9 = *pbVar9 + (char)pbVar9;
  cVar5 = (char)pbVar9 + 'o';
  pcVar8 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar5);
  *pcVar8 = *pcVar8 + cVar5;
  out(*(undefined4 *)pbVar28,uVar21);
  bVar3 = *param_2;
  *param_2 = *param_2 + bVar4;
  pcVar8 = pcVar8 + (uint)CARRY1(bVar3,bVar4) + *unaff_EDI;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  *pcVar17 = *pcVar17 + bVar6;
  pbVar34 = pbVar28 + 8;
  out(*(undefined4 *)(pbVar28 + 4),uVar21);
  *param_2 = *param_2 + bVar4;
  piVar7 = (int *)((uint)pcVar8 | *unaff_EDI);
  cVar5 = (char)((uint)si >> 8);
  pcVar17[0x390a0000] = pcVar17[0x390a0000] - cVar5;
  pbVar28 = (byte *)0x7000000;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - cVar5;
  *piVar7 = *piVar7 + (int)piVar7;
  puVar16 = (uint *)CONCAT31(uVar13,bVar4 | *(byte *)((int)piVar7 + (int)pcVar17));
  *(char *)((int)piVar7 * 2) = *(char *)((int)piVar7 * 2) - cVar5;
  cRam07000000 = cRam07000000 + cVar5;
  piVar7 = (int *)((uint)piVar7 | 0x777b02);
  pbVar9 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
  bVar36 = SCARRY1(*pbVar9,(char)piVar7);
  *pbVar9 = *pbVar9 + (char)piVar7;
  bVar3 = *pbVar9;
  *(char *)piVar7 = (char)*piVar7;
  uStack_c = in_DS;
code_r0x00404ebf:
  bVar4 = (byte)piVar7;
  uVar13 = (undefined3)((uint)piVar7 >> 8);
  if (bVar3 != 0 && bVar36 == (char)bVar3 < '\0') {
    *(byte *)piVar7 = (char)*piVar7 + bVar4;
    *(byte **)(pbVar34 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar34 + (int)unaff_EDI * 8);
    return CONCAT31(uVar13,bVar4 + 0x2d);
  }
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  bVar3 = *pbVar28;
  *(char **)pbVar34 = (char *)(*(int *)pbVar34 + (int)piVar7);
  bVar19 = (byte)((uint)puVar16 >> 8);
  *(byte *)piVar7 = (char)*piVar7 - bVar19;
  *(byte *)piVar7 = (char)*piVar7 + bVar4;
  pbVar22 = (byte *)(CONCAT31((int3)((uint)param_2 >> 8),bVar6 | bVar3) - *(int *)pbVar28);
  puVar35 = (uint *)CONCAT31(uVar13,bVar4 + 6);
  *(uint *)(pbVar28 + (int)pbVar34 * 2) =
       (int)puVar35 + (uint)(0xf9 < bVar4) + *(int *)(pbVar28 + (int)pbVar34 * 2);
  *(byte *)puVar16 = (byte)*puVar16 ^ bVar4 + 6;
  bVar3 = (byte)puVar16;
  *pbVar22 = *pbVar22 + bVar3;
  pbVar9 = pbVar34 + 4;
  uVar21 = SUB42(pbVar22,0);
  out(*(undefined4 *)pbVar34,uVar21);
  *puVar16 = *puVar16 ^ (uint)puVar35;
  *pbVar22 = *pbVar22 + bVar3;
  puVar29 = (uint *)(pbVar28 + -*(int *)pbVar28);
  *(uint *)((int)unaff_EDI + 0x31) = *(uint *)((int)unaff_EDI + 0x31) | (uint)unaff_EBP;
  *puVar35 = *puVar35 + (int)puVar35;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar19 | (byte)*puVar29,bVar3))
  ;
  *(byte **)(pbVar22 + 0x6e) = pbVar9 + *(int *)(pbVar22 + 0x6e);
  piVar7 = (int *)((uint)puVar35 | *puVar35);
  bVar4 = (byte)puVar29;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar4;
  bVar6 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar3;
  if (CARRY1(bVar6,bVar3)) {
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    bVar6 = pbVar22[0x11];
    uVar20 = (undefined2)((uint)puVar29 >> 0x10);
    out(*(undefined4 *)pbVar9,uVar21);
    puVar16 = (uint *)((int)puVar16 + 1);
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    bVar31 = (byte)((uint)puVar29 >> 8) | bVar6 | *pbVar22;
    pcVar8 = (char *)((int)piVar7 + -0x21000001);
    bVar6 = (byte)pcVar8 | 0x11;
    uVar13 = (undefined3)((uint)pcVar8 >> 8);
    cVar5 = bVar6 - 7;
    pcVar17 = (char *)CONCAT31(uVar13,cVar5);
    *unaff_EDI = (uint)(pcVar17 + (uint)(bVar6 < 7) + *unaff_EDI);
    pbVar9 = pbVar34 + 0xc;
    out(*(undefined4 *)(pbVar34 + 8),uVar21);
    pbVar22 = pbVar22 + 1;
    *pcVar17 = *pcVar17 + cVar5;
    bVar19 = (byte)((uint)pcVar8 >> 8);
    bVar25 = bVar4 | bVar19;
    bVar3 = cVar5 - *pcVar17;
    bVar6 = *(byte *)puVar16;
    *(byte *)puVar16 = *(byte *)puVar16 + bVar3;
    *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3 + CARRY1(bVar6,bVar3);
    *pbVar22 = *pbVar22 + bVar3;
    *pbVar9 = *pbVar9 + bVar25;
    bVar6 = (byte)((uint)pbVar22 >> 8);
    *(byte *)puVar16 = *(byte *)puVar16 + bVar3 + CARRY1((byte)pbVar22,bVar6);
    piVar7 = (int *)CONCAT31(uVar13,bVar3);
    *(byte *)piVar7 = (char)*piVar7 + bVar3;
    pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                               CONCAT11(bVar6 + bVar19,(byte)pbVar22 + bVar6));
    puVar29 = (uint *)CONCAT22(uVar20,CONCAT11(bVar31 + *(char *)(CONCAT31((int3)(CONCAT22(uVar20,
                                                  CONCAT11(bVar31,bVar4)) >> 8),bVar25) + 0x76),
                                               bVar25));
code_r0x00404fa4:
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    pcVar8 = (char *)(CONCAT31((int3)((uint)piVar7 >> 8),(char)piVar7 + '(') ^ *puVar16);
    cVar27 = (char)puVar16;
    *pbVar22 = *pbVar22 + cVar27;
    uVar21 = (undefined2)((uint)puVar29 >> 0x10);
    cVar26 = (char)puVar29;
    cVar32 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x75);
    *pcVar8 = *pcVar8 + (char)pcVar8;
    cVar5 = (char)pcVar8 + 'o';
    pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    cVar33 = (char)((uint)puVar16 >> 8);
    *unaff_EBP = *unaff_EBP - cVar33;
    pbVar22[1] = pbVar22[1] + cVar27;
    pcVar8 = pcVar8 + -0x757b021b;
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    uVar13 = (undefined3)((uint)pcVar8 >> 8);
    cVar15 = cVar5 + 'o';
    pcVar8 = (char *)CONCAT31(uVar13,cVar15);
    pbVar28 = pbVar22 + 2;
    *pcVar8 = *pcVar8 + cVar15;
    iVar11 = CONCAT22(uVar21,CONCAT11(cVar32 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar32,cVar26)) +
                                                        0x76),cVar26));
    *pcVar8 = *pcVar8 + cVar15;
    pcVar8 = (char *)CONCAT31(uVar13,cVar5 + -0x22);
    puVar35 = (uint *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = *pbVar9;
    *pcVar8 = *pcVar8 + cVar5 + -0x22;
    *(byte *)((int)puVar16 + (int)pcVar8) =
         *(byte *)((int)puVar16 + (int)pcVar8) - (char)((uint)pbVar28 >> 8);
    *pbVar28 = *pbVar28 + cVar27;
    bVar3 = cVar33 - pbVar22[4];
    pbVar34 = pbVar9 + 5;
    out(*(undefined4 *)(pbVar9 + 1),(short)pbVar28);
    puVar29 = (uint *)((uint)(pcVar8 + *(int *)(pcVar8 + iVar11)) ^ 0x280a0001);
    *(byte *)puVar29 = (byte)*puVar29 << 1 | (char)(byte)*puVar29 < '\0';
    *pbVar34 = *pbVar34 + (char)puVar29;
    pbVar34 = pbVar34 + *(int *)(pbVar22 + -0x5c);
    pbVar9 = (byte *)((uint)puVar29 | *puVar29);
    *pbVar34 = *pbVar34 + (char)pbVar9;
    puVar29 = (uint *)CONCAT31((int3)((uint)iVar11 >> 8),cVar26 - (char)pbVar28);
    bVar6 = *pbVar9;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar3 + *pbVar9,cVar27));
    iVar11 = *(int *)pbVar9;
    *pbVar28 = *pbVar28 + cVar27;
    cVar5 = (char)(pbVar9 + (uint)CARRY1(bVar3,bVar6) + iVar11) + 'r';
    puVar10 = (uint *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar3,bVar6) + iVar11) >> 8),
                               cVar5);
    pbVar22 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),CONCAT11(10,(char)pbVar28));
    *(char *)(puVar10 + 10) = (char)puVar10[10] + '\n';
    *pbVar34 = *pbVar34 + cVar5;
    pbVar9 = pbVar34 + *(int *)(pbVar22 + -0x5e);
    uVar30 = *puVar10;
    cVar5 = (char)((uint)puVar10 | uVar30);
    *pbVar9 = *pbVar9 + cVar5;
    uVar13 = (undefined3)(((uint)puVar10 | uVar30) >> 8);
    cVar15 = cVar5 + (byte)*puVar29;
    puVar10 = (uint *)CONCAT31(uVar13,cVar15);
    if (SCARRY1(cVar5,(byte)*puVar29) == cVar15 < '\0') goto code_r0x00405090;
    *(byte *)puVar10 = (byte)*puVar10 + cVar15;
    piVar7 = (int *)CONCAT31(uVar13,cVar15 + '\x02');
    unaff_EDI = puVar35;
  }
  else {
    out(2,(char)piVar7);
    uStack_c = in_ES;
    if ((POPCOUNT(*pbVar22) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar13 = (undefined3)((uint)piVar7 >> 8);
  cVar5 = (char)piVar7 + '}';
  pbVar34 = (byte *)CONCAT31(uVar13,cVar5);
  pbVar22[(int)pbVar34] = pbVar22[(int)pbVar34] + cVar5;
  pbVar22[0x280a0000] = pbVar22[0x280a0000] - (char)((uint)piVar7 >> 8);
  bVar6 = (byte)puVar16 & 7;
  *pbVar34 = *pbVar34 << bVar6 | *pbVar34 >> 8 - bVar6;
  *pbVar9 = *pbVar9 + cVar5;
  cVar27 = (char)puVar29 - *pbVar9;
  uVar21 = (undefined2)((uint)puVar29 >> 0x10);
  cVar33 = (char)((uint)puVar29 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar29 >> 8),cVar27) + 0x7c);
  pcVar8 = (char *)CONCAT22(uVar21,CONCAT11(cVar33,cVar27));
  *pbVar34 = *pbVar34 + cVar5;
  bVar3 = (char)piVar7 + 0xa7U & *pbVar22;
  puVar35 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x7c));
  *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
  bVar3 = bVar3 + 0x2a;
  pbVar34 = (byte *)CONCAT31(uVar13,bVar3);
  *pbVar34 = *pbVar34 + bVar3;
  *pcVar8 = *pcVar8 + cVar27;
  *pbVar22 = *pbVar22 ^ bVar3;
  *pcVar8 = *pcVar8 + bVar3;
  bVar6 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar3;
  cVar5 = (bVar3 - *pbVar34) - CARRY1(bVar6,bVar3);
  *(byte *)puVar16 = (byte)*puVar16 + (byte)pbVar22;
  cVar33 = cVar33 + pcVar8[0x7b];
  *(char *)CONCAT31(uVar13,cVar5) = *(char *)CONCAT31(uVar13,cVar5) + cVar5;
  pcVar8 = (char *)CONCAT31(uVar13,cVar5 + 'o');
  *pcVar8 = *pcVar8 + cVar5 + 'o';
  pcVar8 = pcVar8 + 0x2ed7fde6;
  cVar15 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar15;
  cVar5 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar33,cVar27)) + 0x7b);
  *pcVar8 = *pcVar8 + cVar15;
  piVar7 = (int *)(CONCAT31((int3)((uint)pcVar8 >> 8),cVar15 + 'o') + 0x6f060000);
  *piVar7 = *piVar7 + (int)piVar7;
  uVar14 = (undefined3)((uint)pbVar22 >> 8);
  bVar3 = (byte)pbVar22 | *pbVar9;
  pbVar23 = (byte *)CONCAT31(uVar14,bVar3);
  uVar30 = CONCAT22(uVar21,CONCAT11(cVar33 + cVar5,cVar27)) | (uint)pbVar9;
  uVar13 = (undefined3)((uint)piVar7 >> 8);
  bVar6 = (byte)piVar7 | *pbVar23;
  pbVar28 = (byte *)CONCAT31(uVar13,bVar6);
  cVar5 = (byte)puVar16 - bVar3;
  puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),cVar5);
  *pbVar28 = *pbVar28 + bVar6;
  pbVar34 = pbVar9 + 4;
  out(*(undefined4 *)pbVar9,(short)pbVar23);
  *pbVar28 = bVar6;
  *pbVar23 = *pbVar23 + cVar5;
  pbVar9 = pbVar9 + 8;
  out(*(undefined4 *)pbVar34,(short)pbVar23);
  *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
  puVar29 = (uint *)(CONCAT31((int3)(uVar30 >> 8),(char)uVar30 - (char)((uint)pbVar22 >> 8)) |
                    (uint)pbVar9);
  pbVar22 = (byte *)CONCAT31(uVar14,(bVar3 | *pbVar9) + (byte)*puVar35);
  cVar5 = bVar6 - (byte)*puVar35;
  puVar10 = (uint *)CONCAT31(uVar13,cVar5 - *(char *)CONCAT31(uVar13,cVar5));
code_r0x00405090:
  *puVar10 = (uint)(pbVar22 + *puVar10);
  cVar5 = (char)puVar10;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5;
  *puVar16 = *puVar16 - (int)unaff_EBP;
  bVar6 = *pbVar9;
  bVar3 = (byte)pbVar22;
  *pbVar9 = *pbVar9 + bVar3;
  *(byte *)puVar10 = (byte)*puVar10 + cVar5 + CARRY1(bVar6,bVar3);
  *(byte *)puVar16 = (byte)*puVar16 + cVar5;
  uVar30 = *puVar29;
  *(byte *)puVar29 = (byte)*puVar29 + 0x72;
  *(byte *)puVar29 = (byte)*puVar29;
  cVar5 = (char)((uint)pbVar22 >> 8);
  if (SCARRY1((byte)uVar30,'r')) {
    pbVar9 = pbVar9 + *(int *)(pbVar22 + -10);
  }
  else {
    while( true ) {
      *pbVar9 = *pbVar9 + (char)puVar10;
      uVar13 = (undefined3)((uint)puVar10 >> 8);
      cVar15 = (char)puVar10 + (byte)*puVar29;
      pcVar8 = (char *)CONCAT31(uVar13,cVar15);
      puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                 CONCAT11((char)((uint)puVar29 >> 8) +
                                          *(byte *)((int)puVar29 + 0x7b),(char)puVar29));
      *pcVar8 = *pcVar8 + cVar15;
      in_AF = 9 < (cVar15 + 0x6fU & 0xf) | in_AF;
      uVar30 = CONCAT31(uVar13,cVar15 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar30;
      piVar7 = (int *)CONCAT22((short)(uVar30 >> 0x10),
                               CONCAT11((char)((uint)puVar10 >> 8) + in_AF,bVar4));
      *piVar7 = *piVar7 + (int)piVar7;
      uVar13 = (undefined3)((uint)piVar7 >> 8);
      bVar4 = bVar4 | *(byte *)(piVar7 + 0x354a);
      bVar4 = bVar4 - *(char *)CONCAT31(uVar13,bVar4);
      pbVar34 = (byte *)CONCAT31(uVar13,bVar4);
      bVar6 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar4;
      pbVar9 = pbVar9 + (-(uint)CARRY1(bVar6,bVar4) - *(int *)pbVar34);
      puVar10 = (uint *)(pbVar34 + 0xfc00);
      *pbVar22 = *pbVar22 + cVar5;
      uVar30 = *puVar10;
      bVar6 = (byte)puVar10;
      *(byte *)puVar10 = (byte)*puVar10 + bVar6;
      uVar2 = (uint)CARRY1((byte)uVar30,bVar6);
      uVar30 = *puVar29;
      uVar1 = *puVar29;
      *puVar29 = (uint)((byte *)(uVar1 + (int)puVar10) + uVar2);
      if (!CARRY4(uVar30,(uint)puVar10) && !CARRY4(uVar1 + (int)puVar10,uVar2)) break;
      *(byte *)puVar10 = (byte)*puVar10 + bVar6;
    }
  }
  uVar30 = (uint)puVar10 | *puVar10;
  uVar21 = SUB42(pbVar22,0);
  *pbVar9 = *pbVar9 + (char)uVar30;
  piVar7 = (int *)(uVar30 + 0xc1872);
  if (SCARRY4(uVar30,0xc1872)) {
    cVar15 = (char)piVar7;
    *(char *)piVar7 = *(char *)piVar7 + cVar15;
    *pbVar22 = *pbVar22 + cVar15;
    *(char *)piVar7 = *(char *)piVar7 + cVar15;
    *(byte *)puVar29 = (byte)*puVar29 + (char)puVar16;
    *(char *)piVar7 = *(char *)piVar7 + cVar15;
    *(char *)((int)piVar7 * 2) = *(char *)((int)piVar7 * 2) + bVar3;
    pbVar34 = pbVar9;
    goto code_r0x00405117;
  }
  do {
    bVar6 = *pbVar9;
    bVar3 = (byte)piVar7;
    *pbVar9 = *pbVar9 + bVar3;
    if (CARRY1(bVar6,bVar3)) {
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      uVar13 = (undefined3)((uint)puVar16 >> 8);
      bVar6 = (byte)puVar16 | bRam396f1609;
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      puVar16 = (uint *)CONCAT31(uVar13,bVar6 | *(byte *)CONCAT31(uVar13,bVar6));
      uVar13 = (undefined3)((uint)piVar7 >> 8);
      bVar3 = bVar3 | *pbVar22;
      pcVar8 = (char *)CONCAT31(uVar13,bVar3);
      if ((POPCOUNT(bVar3) & 1U) != 0) {
        pbVar34 = pbVar9 + 4;
        out(*(undefined4 *)pbVar9,uVar21);
        uVar30 = CONCAT22((short)((uint)piVar7 >> 0x10),(ushort)bVar3);
        *pbVar34 = *pbVar34 + bVar3;
        pcVar8 = (char *)(uVar30 | 8);
        cVar15 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x7a);
        puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar15,(char)puVar29));
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar5 = (char)pcVar8 + 'o';
        piVar7 = (int *)CONCAT31((int3)(uVar30 >> 8),cVar5);
        *(char *)piVar7 = (char)*piVar7 + cVar5;
        *(byte *)puVar16 = (byte)*puVar16 + 1;
        pbVar9 = pbVar9 + 8;
        out(*(undefined4 *)pbVar34,uVar21);
        pbVar22 = (byte *)((uint)pbVar22 ^ uRam08122c04);
        iVar11 = CONCAT31((int3)((uint)(*piVar7 * 0x17070600) >> 8),2);
        *(char *)(iVar11 * 2) = *(char *)(iVar11 * 2) - cVar15;
        do {
          bVar6 = (byte)iVar11;
          *pbVar9 = *pbVar9 + bVar6;
          bVar36 = CARRY1(bVar6,(byte)*puVar29);
          uVar13 = (undefined3)((uint)iVar11 >> 8);
          cVar5 = bVar6 + (byte)*puVar29;
          pbVar34 = (byte *)CONCAT31(uVar13,cVar5);
          uVar21 = in_DS;
          uVar20 = uStack_4c;
          if (SCARRY1(bVar6,(byte)*puVar29) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar34 = *pbVar34 + cVar5;
          uVar30 = CONCAT31(uVar13,cVar5 + '\'') + 0x1ebd9f3;
          uStack_50 = (undefined1)uStack_c;
          uStack_4f = (undefined1)((ushort)uStack_c >> 8);
          piVar7 = (int *)(uVar30 ^ 0x73060000);
          puVar16 = (uint *)((int)puVar16 + 1);
          *piVar7 = (int)(*piVar7 + (int)piVar7);
          puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                     CONCAT11((byte)((uint)puVar29 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar29));
          cVar5 = (char)uVar30;
          *(char *)piVar7 = (char)*piVar7 + cVar5;
          uVar30 = CONCAT31((int3)((uint)piVar7 >> 8),cVar5 + '\x02');
          bVar36 = 0xd9f2d2da < uVar30;
          iVar11 = uVar30 + 0x260d2d25;
          pcVar8 = unaff_EBP;
          do {
            uVar13 = (undefined3)((uint)iVar11 >> 8);
            bVar3 = (char)iVar11 + -2 + bVar36;
            pbVar34 = (byte *)CONCAT31(uVar13,bVar3);
            bVar6 = *pbVar34;
            *pbVar34 = *pbVar34 + bVar3;
            bVar4 = (byte)puVar29;
            uStack_4c = uStack_c;
            if (CARRY1(bVar6,bVar3)) {
              *pbVar34 = *pbVar34 + bVar3;
              puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                         CONCAT11((byte)((uint)puVar29 >> 8) | pcVar8[0x7f],bVar4));
              *pbVar34 = *pbVar34 + bVar3;
              pbVar34 = (byte *)CONCAT31(uVar13,bVar3 + 0x2a);
              *pbVar34 = *pbVar34 + bVar3 + 0x2a;
              *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar22;
              uVar21 = in_DS;
              while( true ) {
                in_DS = uVar21;
                bVar3 = (byte)pbVar34;
                *pbVar22 = *pbVar22 ^ bVar3;
                *pbVar22 = *pbVar22 + (char)puVar29;
                *pbVar34 = *pbVar34 + bVar3;
                *(byte *)puVar29 = (byte)*puVar29 + (char)((uint)pbVar22 >> 8);
                bVar6 = *pbVar34;
                *pbVar34 = *pbVar34 + bVar3;
                uVar30 = *puVar29;
                uVar1 = *puVar29;
                *puVar29 = (uint)(pbVar34 + uVar1 + CARRY1(bVar6,bVar3));
                uVar13 = (undefined3)((uint)pbVar34 >> 8);
                if (CARRY4(uVar30,(uint)pbVar34) ||
                    CARRY4((uint)(pbVar34 + uVar1),(uint)CARRY1(bVar6,bVar3))) break;
                *pbVar9 = *pbVar9 + bVar3;
                pcVar17 = (char *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                           CONCAT11((char)((uint)puVar16 >> 8) + *pbVar34,
                                                    (char)puVar16));
                *pbVar9 = *pbVar9 + bVar3;
                piVar7 = (int *)CONCAT31(uVar13,bVar3 | (byte)*puVar29);
                pbVar34 = pbVar9;
                while( true ) {
                  pbVar9 = pbVar34 + 4;
                  out(*(undefined4 *)pbVar34,(short)pbVar22);
                  pbVar22 = pbVar22 + 1;
                  *piVar7 = (int)(*piVar7 + (int)piVar7);
                  bVar4 = (byte)((uint)pcVar17 >> 8) | *pbVar22;
                  uVar13 = (undefined3)((uint)piVar7 >> 8);
                  bVar3 = (byte)piVar7 ^ *pbVar22;
                  pcVar12 = (char *)CONCAT31(uVar13,bVar3);
                  cRam282b0000 = cRam282b0000 - bVar4;
                  *pcVar12 = *pcVar12 + bVar3;
                  unaff_EBP = pcVar8 + -*(int *)pbVar22;
                  uStack_50 = (undefined1)in_DS;
                  uStack_4f = (undefined1)((ushort)in_DS >> 8);
                  bVar6 = *(byte *)((int)puVar35 + 0x17);
                  *pcVar12 = *pcVar12 + bVar3;
                  puVar16 = (uint *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                             CONCAT11(bVar4 + bVar6 | *pbVar22,(char)pcVar17));
                  *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
                  *(byte *)((int)pcVar12 * 2) = *(byte *)((int)pcVar12 * 2) ^ bVar3;
                  in_AF = 9 < (bVar3 & 0xf) | in_AF;
                  bVar3 = bVar3 + in_AF * -6;
                  pbVar34 = (byte *)CONCAT31(uVar13,bVar3 + (0x9f < bVar3 | in_AF * (bVar3 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar34 = pbVar34 + *(int *)pbVar34;
                  *(char *)((int)pbVar34 * 2) =
                       *(char *)((int)pbVar34 * 2) + (char)((uint)pbVar22 >> 8);
                  bVar36 = CARRY1((byte)*puVar16,(byte)pbVar22);
                  *(byte *)puVar16 = (byte)*puVar16 + (byte)pbVar22;
                  uVar21 = in_DS;
                  uVar20 = uStack_c;
GenerateStatusText:
                  in_DS = uVar20;
                  pcVar8 = unaff_EBP;
                  uStack_4c = in_DS;
                  if (!bVar36) break;
                  *pbVar34 = *pbVar34 + (char)pbVar34;
                  iVar11 = CONCAT31((int3)((uint)puVar16 >> 8),(byte)puVar16 | *pbVar22);
                  uVar21 = (undefined2)((uint)puVar29 >> 0x10);
                  cVar27 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x7d);
                  *pbVar34 = *pbVar34 + (char)pbVar34;
                  *(byte *)puVar35 = (byte)*puVar35 - (char)((uint)puVar16 >> 8);
                  iVar11 = iVar11 - *(int *)(iVar11 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar27,(char)puVar29)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar9,(short)pbVar22);
                  pbVar22 = (byte *)CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar34 = pbVar9 + 8;
                  out(*(undefined4 *)(pbVar9 + 4),CONCAT11(uStack_4f,uStack_50));
                  pcVar8 = unaff_EBP + 1;
                  cVar15 = (char)iVar11;
                  pcVar17 = (char *)CONCAT22((short)((uint)iVar11 >> 0x10),
                                             CONCAT11((byte)((uint)iVar11 >> 8) |
                                                      *(byte *)((int)puVar35 + 0x46),cVar15));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_c = CONCAT11(uStack_4f,uStack_50);
                  uVar13 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar34,0xf0)) >> 8);
                  piVar7 = (int *)CONCAT31(uVar13,0x5f);
                  puVar35 = (uint *)((int)puVar35 + 1);
                  *piVar7 = (int)(*piVar7 + (int)piVar7);
                  puVar29 = (uint *)CONCAT22(uVar21,CONCAT11(cVar27 + cVar5 | pbVar9[-0x78],
                                                             (char)puVar29));
                  *(char *)piVar7 = (char)*piVar7 + '_';
                  puVar16 = (uint *)CONCAT31(uVar13,0x8c);
                  *(byte **)(pbVar34 + (int)puVar35 * 8) =
                       pbVar22 + *(int *)(pbVar34 + (int)puVar35 * 8);
                  bVar6 = *pbVar34;
                  *pbVar34 = *pbVar34 + 0x8c;
                  if (bVar6 < 0x74) {
                    *pbVar22 = *pbVar22 + cVar15;
                    *(byte *)puVar29 = (byte)*puVar29 >> 1;
                    *(char *)puVar16 = (char)*puVar16 + -0x74;
                    *puVar16 = (uint)(pcVar8 + *puVar16);
                    *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                    *pbVar22 = *pbVar22 + cVar15;
                    unaff_EBP[2] = unaff_EBP[2] - cVar15;
                    *pbVar22 = *pbVar22 + cVar15;
                    pbVar9 = (byte *)CONCAT31(uVar13,0x83);
                    puVar16 = puVar29;
                    goto code_r0x00405312;
                  }
                  *puVar16 = (uint)(*puVar16 + (int)puVar16);
                  piVar7 = (int *)(CONCAT31(uVar13,(byte)puVar16[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar16[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar7 = (int *)((int)piVar7 + *(int *)pbVar34);
                }
              }
              *pbVar22 = *pbVar22 + bVar3;
              *(byte *)puVar29 = (byte)*puVar29 - (char)pbVar22;
              *pbVar34 = *pbVar34 + bVar3;
              pbVar34 = (byte *)CONCAT31(uVar13,bVar3 | (byte)*puVar29);
            }
            else {
              cVar5 = (char)puVar16;
              *pbVar22 = *pbVar22 + cVar5;
              *(byte **)pbVar34 = pbVar22 + *(int *)pbVar34;
              *pbVar34 = *pbVar34 + bVar3;
              bVar3 = bVar3 + *pbVar34;
              pbVar34 = (byte *)CONCAT31(uVar13,bVar3);
              if (-1 < (char)bVar3) {
                *(byte *)puVar29 = (byte)*puVar29 + bVar4;
                out(*(undefined4 *)pbVar9,(short)pbVar22);
                pbVar22 = pbVar22 + 1;
                *pbVar34 = *pbVar34 + bVar3;
                puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),
                                           bVar4 | (byte)((uint)iVar11 >> 8));
                cVar15 = bVar3 - (byte)*puVar16;
                pcVar17 = (char *)CONCAT31(uVar13,cVar15);
                *pcVar17 = *pcVar17 + cVar15 + (bVar3 < (byte)*puVar16);
                *pbVar22 = *pbVar22 + cVar15;
                pcVar17 = (char *)((int)pcVar17 * 2 + 0x79);
                *pcVar17 = *pcVar17 + (char)((uint)pbVar22 >> 8);
                pbVar34 = (byte *)in((short)pbVar22);
                pbVar9 = pbVar9 + 4;
              }
              *pbVar9 = *pbVar9 + cVar5;
              *pbVar34 = *pbVar34 + (char)pbVar34;
              *pbVar34 = *pbVar34 + (char)pbVar34;
              uStack_50 = (undefined1)in_DS;
              uStack_4f = (undefined1)((ushort)in_DS >> 8);
              bVar6 = *pbVar34;
              bVar4 = (byte)((uint)puVar16 >> 8);
              bVar19 = bVar4 + *pbVar34;
              iVar11 = *(int *)pbVar34;
              *pbVar22 = *pbVar22 + cVar5;
              bVar3 = (char)(pbVar34 + (uint)CARRY1(bVar4,bVar6) + iVar11) - (byte)*puVar29;
              pbVar34 = (byte *)CONCAT31((int3)((uint)(pbVar34 + (uint)CARRY1(bVar4,bVar6) + iVar11)
                                               >> 8),bVar3);
              *(byte *)puVar29 = (byte)*puVar29 ^ bVar3;
              *pcVar8 = *pcVar8 + (char)puVar29;
              *pbVar34 = *pbVar34 + bVar3;
              *pbVar34 = *pbVar34 + bVar3;
              *pbVar34 = *pbVar34 + bVar3;
              puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                         CONCAT11(bVar19 + *pbVar34,cVar5));
              pbVar34 = pbVar34 + (uint)CARRY1(bVar19,*pbVar34) + *(int *)pbVar34;
              *pbVar22 = *pbVar22 + cVar5;
              pbVar9 = pbVar9 + *(int *)(pbVar22 + 0x3e);
            }
            *pbVar9 = *pbVar9 + (char)pbVar34;
            cVar5 = (char)pbVar34 + 'r';
            pbVar9 = pbVar9 + -1;
            uVar30 = CONCAT31((int3)((uint)pbVar34 >> 8),cVar5);
            *pbVar9 = *pbVar9 + cVar5;
            bVar36 = 0xfff38f8d < uVar30;
            iVar11 = uVar30 + 0xc7072;
            unaff_EBP = pcVar8;
          } while (SCARRY4(uVar30,0xc7072));
        } while( true );
      }
      *pcVar8 = *pcVar8 + bVar3;
      bVar3 = bVar3 + 0x6f;
      pbVar34 = (byte *)CONCAT31(uVar13,bVar3);
      bVar6 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar3;
      uVar13 = (undefined3)
               ((uint)(pbVar34 + (uint)CARRY1(bVar6,bVar3) + *(int *)((int)puVar16 + (int)pbVar22))
               >> 8);
      cVar15 = (char)(pbVar34 + (uint)CARRY1(bVar6,bVar3) + *(int *)((int)puVar16 + (int)pbVar22)) +
               'E';
      pcVar8 = (char *)CONCAT31(uVar13,cVar15);
      *pcVar8 = *pcVar8 + cVar15;
      cVar15 = cVar15 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar13,cVar15);
      *pcVar8 = *pcVar8 + cVar15;
      puVar10 = (uint *)CONCAT31(uVar13,cVar15 + *pcVar8);
      *(char *)puVar10 = (char)*puVar10 + cVar15 + *pcVar8;
      pbVar34 = (byte *)((uint)puVar10 | *puVar10);
      bVar6 = *pbVar34;
      bVar3 = (byte)pbVar34;
      *pbVar34 = *pbVar34 + bVar3;
      piVar7 = (int *)CONCAT31((int3)((uint)pbVar34 >> 8),bVar3 + CARRY1(bVar6,bVar3));
      pbVar34 = pbVar9;
code_r0x00405117:
      *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
      puVar29 = (uint *)((int)puVar29 - *puVar29);
      pbVar9 = pbVar34 + 4;
      out(*(undefined4 *)pbVar34,uVar21);
    }
    *pbVar22 = *pbVar22 + (char)puVar16;
    bVar36 = puVar29 < (uint *)*piVar7;
    puVar29 = (uint *)((int)puVar29 - *piVar7);
    bVar6 = (byte)((uint)puVar16 >> 8);
    *(byte *)((int)puVar35 + 0x39) = (*(byte *)((int)puVar35 + 0x39) - bVar6) - bVar36;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    uVar30 = *puVar29;
    *(int *)((int)puVar35 + 0x39) = *(int *)((int)puVar35 + 0x39) - (int)unaff_EBP;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11(bVar6 | (byte)uVar30 | (byte)*puVar29,(char)puVar16));
    *(char *)(piVar7 + 10) = (char)piVar7[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
  bVar6 = (char)piVar7 + 0x28;
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),bVar6);
  *pbVar9 = *pbVar9 ^ bVar6;
  *(byte *)puVar29 = (byte)*puVar29 + (char)((uint)pcVar17 >> 8);
  bVar6 = *pbVar22;
  *pbVar22 = *pbVar22 + (byte)pcVar17;
  piVar7 = (int *)(((uint)pbVar9 | 0x1496f09) + *puVar35 + (uint)CARRY1(bVar6,(byte)pcVar17));
  pbVar28 = pbVar34 + 4;
  out(*(undefined4 *)pbVar34,(short)pbVar22);
  pbVar23 = pbVar22 + -1;
  *piVar7 = *piVar7 + (int)piVar7;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | (byte)*puVar29);
  cVar5 = (char)piVar7 + '\x13';
  pbVar9 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),cVar5);
  puVar16 = puVar29;
  pbVar34 = pbVar28;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar22 = *pbVar22 - (char)((uint)pbVar23 >> 8);
    *pbVar9 = *pbVar9 + cVar5;
code_r0x00405396:
    bVar6 = *pbVar9;
    bVar3 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar3;
    *(byte **)pbVar28 = pbVar9 + (uint)CARRY1(bVar6,bVar3) + *(int *)pbVar28;
    out(*(undefined4 *)pbVar28,(short)pbVar22);
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    pcVar8 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                              CONCAT11((byte)((uint)pbVar9 >> 8) | pbVar28[4],bVar3));
    *(char **)((int)puVar35 + -1) = pcVar8 + *(int *)((int)puVar35 + -1);
    out(*(undefined4 *)(pbVar28 + 4),(short)pbVar22);
    *pcVar8 = *pcVar8 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar9 = *pbVar9 + (char)pbVar9;
  piVar7 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + 'o');
  puVar29 = (uint *)((int)puVar16 + -1);
  *piVar7 = *piVar7 + (int)piVar7;
  uVar13 = (undefined3)((uint)pbVar22 >> 8);
  piVar7 = (int *)((int)piVar7 + 0x1b7e);
  bVar4 = (byte)pbVar22 | *(byte *)puVar29 | *(byte *)puVar29;
  iRam04115f2c = iRam04115f2c + (int)piVar7;
  out(*(undefined4 *)pbVar34,(short)CONCAT31(uVar13,bVar4));
  *piVar7 = *piVar7 + (int)piVar7;
  bVar4 = bVar4 | (byte)piVar7;
  iVar24 = CONCAT31(uVar13,bVar4);
  pbVar9 = (byte *)((int)piVar7 - *piVar7);
  cVar5 = (char)pbVar9;
  *pcVar17 = *pcVar17 + cVar5;
  cVar15 = (char)pcVar17 - bVar4;
  *pbVar9 = *pbVar9 + cVar5;
  uVar21 = (undefined2)((uint)pcVar17 >> 0x10);
  bVar3 = (byte)((uint)pcVar17 >> 8) | *pbVar9;
  pcVar8 = pcVar8 + -1;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar6 = *(byte *)(CONCAT22(uVar21,CONCAT11(bVar3,cVar15)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar9;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar8;
  *pbVar9 = *pbVar9 + cVar5;
  bVar6 = bVar3 | bVar6 | *(byte *)puVar29;
  iVar18 = CONCAT22(uVar21,CONCAT11(bVar6,cVar15));
  pbVar23 = (byte *)((uint)(pbVar34 + 4) ^ *(uint *)(iVar24 + -0x43));
  iVar11 = *(int *)pbVar9;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  if (SCARRY4(iVar11,(int)pbVar9)) {
    *pbVar9 = *pbVar9 + cVar5;
  }
  pbVar34 = pbVar9 + 0x5674;
  puVar35 = (uint *)((int)puVar35 +
                    (-(uint)((byte *)0xffffa98b < pbVar9) - *(int *)(pbVar23 + -0x7f)));
  bVar3 = (byte)pbVar34;
  *pbVar34 = *pbVar34 + bVar3;
  uVar14 = (undefined3)((uint)pbVar34 >> 8);
  bVar19 = bVar3 + 0x2d;
  piVar7 = (int *)CONCAT31(uVar14,bVar19);
  *(uint *)(pbVar23 + (int)puVar35 * 8) =
       *(int *)(pbVar23 + (int)puVar35 * 8) + iVar24 + (uint)(0xd2 < bVar3);
  bVar3 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar19;
  if (!CARRY1(bVar3,bVar19)) {
    do {
      pbVar34 = (byte *)(iVar24 + 1);
      bVar3 = (byte)piVar7;
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      bVar4 = (byte)((uint)piVar7 >> 8);
      bVar19 = (byte)puVar29 | bVar4;
      puVar16 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),bVar19);
      out(*(undefined4 *)pbVar23,(short)pbVar34);
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      uVar21 = (undefined2)((uint)iVar18 >> 0x10);
      cVar5 = (char)iVar18;
      pbVar9 = (byte *)CONCAT22(uVar21,CONCAT11((byte)((uint)iVar18 >> 8) | *pbVar34,cVar5));
      bVar6 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar3;
      *(byte *)piVar7 = (char)*piVar7 + bVar3 + CARRY1(bVar6,bVar3);
      *pbVar34 = *pbVar34 + bVar3;
      *(byte *)puVar35 = (byte)*puVar35 + bVar4;
      *(int *)((int)piVar7 * 2) = *(int *)((int)piVar7 * 2) + CONCAT22(uVar21,CONCAT11(0x1c,cVar5));
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      cVar15 = (char)pbVar34;
      *(byte *)puVar16 = (byte)*puVar16 + cVar15;
      *(byte *)((int)piVar7 * 2) = *(byte *)((int)piVar7 * 2) ^ bVar3;
      *(byte *)piVar7 = (char)*piVar7 + bVar3;
      pbVar9 = pbVar23 + 8;
      out(*(undefined4 *)(pbVar23 + 4),(short)pbVar34);
      piVar7 = (int *)0xa0a0000;
      *pbVar34 = *pbVar34;
      bVar3 = cVar5 - cVar15;
      iVar18 = CONCAT22(uVar21,CONCAT11((byte)puVar35[0x14] | 0x1c | bRam0ca87216,bVar3));
      *pbVar34 = *pbVar34;
      bVar6 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar3;
      if (!CARRY1(bVar6,bVar3)) {
        piVar7 = (int *)0x1e7b7000;
        bVar6 = (byte)((uint)puVar29 >> 8) | *(byte *)(iVar24 + 3);
        puVar16 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(bVar6,bVar19));
        if (bVar6 != 0) {
          pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar15 + pbVar9[(int)puVar35 * 8]);
          piVar7 = (int *)0x6d7d7000;
          iVar18 = iVar18 + 1;
        }
      }
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      iVar24 = CONCAT31((int3)((uint)pbVar34 >> 8),(byte)pbVar34 | pbVar9[(int)puVar35 * 8]);
      *(char *)piVar7 = (char)*piVar7;
      piVar7 = (int *)CONCAT31((int3)((uint)piVar7 >> 8),0xf9);
      *puVar35 = (uint)((int)piVar7 + *puVar35 + 1);
      pbVar23 = pbVar23 + 0xc;
      out(*(undefined4 *)pbVar9,(short)iVar24);
      puVar29 = puVar16;
    } while( true );
  }
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  bVar19 = bVar19 | *(byte *)((int)piVar7 + 0x4000081);
  piVar7 = (int *)CONCAT31(uVar14,bVar19);
  if ('\0' < (char)bVar19) {
    *(byte *)piVar7 = (char)*piVar7 + bVar19;
    puVar10 = (uint *)CONCAT31(uVar14,bVar19 + 0x28);
    *puVar10 = *puVar10 ^ (uint)puVar10;
    *(byte *)puVar29 = *(byte *)puVar29 + bVar6;
    cVar5 = (bVar19 + 0x28) - bVar6;
    pcVar8 = (char *)CONCAT31(uVar14,cVar5);
    *pcVar8 = *pcVar8 + cVar5;
    pbVar22 = (byte *)CONCAT31(uVar13,bVar4 | *(byte *)puVar29);
    pcVar17 = (char *)CONCAT22((short)((uint)puVar29 >> 0x10),
                               CONCAT11((char)((uint)puVar29 >> 8) + *(byte *)((int)puVar16 + 0x7d),
                                        (char)puVar29));
    *pcVar8 = *pcVar8 + cVar5;
    pbVar9 = (byte *)CONCAT31(uVar14,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar14,cVar5 + 0x39U));
    *pcVar17 = *pcVar17 + bVar6;
    pbVar28 = pbVar23 + 4;
    out(*(undefined4 *)pbVar23,(short)pbVar22);
    goto code_r0x00405396;
  }
  pbVar34 = pbVar23 + 4;
  out(*(undefined4 *)pbVar23,(short)iVar24);
  pcVar17 = (char *)(iVar18 + -1);
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  pbVar22 = (byte *)CONCAT31(uVar13,bVar4 | *(byte *)puVar29);
  goto code_r0x004052ee;
}


