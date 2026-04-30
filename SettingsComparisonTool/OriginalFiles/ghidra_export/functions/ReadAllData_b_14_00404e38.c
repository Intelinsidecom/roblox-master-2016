/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404e38
 * Raw Name    : <ReadAllData>b__14
 * Demangled   : <ReadAllData>b__14
 * Prototype   : undefined4 <ReadAllData>b__14(uint * si, byte * param_2)
 * Local Vars  : pbVar34, unaff_ESI, puVar35, unaff_EDI, in_DS, in_ES, in_AF, in_CF, bVar36, si, uStack_47, uStack_48, uStack_44, uStack_46, uVar2, uVar1, bVar4, bVar3, cVar6, cVar5, in_EAX, bVar7, pcVar9, param_2, piVar8, puVar11, pbVar10, pcVar13, iVar12, uVar15, uVar14, pcVar17, puVar16, bVar19, iVar18, pbVar21, uVar20, pbVar23, pbVar22, bVar25, iVar24, cVar27, cVar26, puVar28, unaff_EBX, bVar30, uVar29, cVar32, cVar31, unaff_EBP, uVar33
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

undefined4 __fastcall <ReadAllData>b__14(uint *si,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint *in_EAX;
  int *piVar8;
  undefined3 uVar14;
  char *pcVar9;
  byte *pbVar10;
  uint *puVar11;
  int iVar12;
  char *pcVar13;
  undefined3 uVar15;
  byte bVar19;
  uint *puVar16;
  char *pcVar17;
  undefined2 uVar20;
  int iVar18;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  byte bVar25;
  char cVar26;
  char cVar27;
  byte bVar30;
  byte *unaff_EBX;
  uint *puVar28;
  char cVar31;
  char cVar32;
  undefined2 uVar33;
  uint uVar29;
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
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  undefined2 uStack_44;
  
  uVar14 = (undefined3)((uint)in_EAX >> 8);
                    /* .NET CLR Managed Code */
  if (in_CF) {
    *in_EAX = (uint)(*in_EAX + (int)in_EAX);
    bVar3 = (byte)in_EAX | *unaff_ESI;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x33));
    *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
    bVar36 = SCARRY1(bVar3,'\x02');
    bVar4 = bVar3 + 2;
    piVar8 = (int *)CONCAT31(uVar14,bVar4);
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *(byte *)piVar8 = (char)*piVar8 + bVar4;
      return CONCAT31(uVar14,bVar3 + 0x71);
    }
  }
  else {
    uVar29 = *in_EAX;
    *in_EAX = (uint)(*in_EAX + (int)in_EAX);
    if (!CARRY4(uVar29,(uint)in_EAX)) {
      in_EAX = (uint *)((uint)in_EAX | 8);
    }
    *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
    bVar7 = (byte)((uint)si >> 8) | (byte)*in_EAX;
    pcVar17 = (char *)CONCAT22((short)((uint)si >> 0x10),CONCAT11(bVar7,(byte)si));
    pcVar9 = (char *)((int)in_EAX - *in_EAX);
    *unaff_EBX = *unaff_EBX + bVar7;
    bVar3 = (char)pcVar9 - *pcVar9;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),bVar3);
    *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
    *unaff_EBX = *unaff_EBX ^ bVar3;
    *unaff_ESI = *unaff_ESI + (char)unaff_EBX;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *pcVar17 = *pcVar17 + (char)((uint)param_2 >> 8);
    bVar4 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *(byte **)(unaff_EBX + (int)param_2) =
         param_2 + (uint)CARRY1(bVar4,bVar3) + *(int *)(unaff_EBX + (int)param_2);
    pbVar10 = pbVar10 + 0x73061314;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    uVar14 = (undefined3)((uint)pcVar17 >> 8);
    bVar3 = (byte)si | *param_2;
    pcVar17 = (char *)CONCAT31(uVar14,bVar3);
    *pbVar10 = *pbVar10 + (char)pbVar10;
    cVar5 = (char)pbVar10 + 'o';
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    pbVar10 = unaff_ESI + 4;
    out(*(int *)unaff_ESI,(short)param_2);
    bVar4 = *param_2;
    *param_2 = *param_2 + bVar3;
    pcVar9 = pcVar9 + (uint)CARRY1(bVar4,bVar3) + *unaff_EDI;
    *pcVar9 = *pcVar9 + (char)pcVar9;
    *pcVar17 = *pcVar17 + (byte)param_2;
    unaff_ESI = unaff_ESI + 8;
    out(*(int *)pbVar10,(short)param_2);
    *param_2 = *param_2 + bVar3;
    piVar8 = (int *)((uint)pcVar9 | *unaff_EDI);
    pcVar17[0x390a0000] = pcVar17[0x390a0000] - bVar7;
    unaff_EBX = (byte *)0x7000000;
    *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar7;
    *piVar8 = *piVar8 + (int)piVar8;
    si = (uint *)CONCAT31(uVar14,bVar3 | *(byte *)((int)piVar8 + (int)pcVar17));
    *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) - bVar7;
    cRam07000000 = cRam07000000 + bVar7;
    piVar8 = (int *)((uint)piVar8 | 0x777b02);
    pbVar10 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
    bVar36 = SCARRY1(*pbVar10,(char)piVar8);
    *pbVar10 = *pbVar10 + (char)piVar8;
    bVar4 = *pbVar10;
    *(char *)piVar8 = (char)*piVar8;
  }
  bVar3 = (byte)piVar8;
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  if (bVar4 != 0 && bVar36 == (char)bVar4 < '\0') {
    *(byte *)piVar8 = (char)*piVar8 + bVar3;
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar3) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    return CONCAT31(uVar14,bVar3 + 0x2d);
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar4 = *unaff_EBX;
  *(char **)unaff_ESI = (char *)(*(int *)unaff_ESI + (int)piVar8);
  bVar7 = (byte)((uint)si >> 8);
  *(byte *)piVar8 = (char)*piVar8 - bVar7;
  *(byte *)piVar8 = (char)*piVar8 + bVar3;
  pbVar21 = (byte *)(CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | bVar4) - *(int *)unaff_EBX)
  ;
  puVar35 = (uint *)CONCAT31(uVar14,bVar3 + 6);
  *(uint *)(unaff_EBX + (int)unaff_ESI * 2) =
       (int)puVar35 + (uint)(0xf9 < bVar3) + *(int *)(unaff_EBX + (int)unaff_ESI * 2);
  *(byte *)si = (byte)*si ^ bVar3 + 6;
  bVar3 = (byte)si;
  *pbVar21 = *pbVar21 + bVar3;
  pbVar10 = unaff_ESI + 4;
  uVar20 = SUB42(pbVar21,0);
  out(*(int *)unaff_ESI,uVar20);
  *si = *si ^ (uint)puVar35;
  *pbVar21 = *pbVar21 + bVar3;
  puVar28 = (uint *)(unaff_EBX + -*(int *)unaff_EBX);
  *(uint *)((int)unaff_EDI + 0x31) = *(uint *)((int)unaff_EDI + 0x31) | (uint)unaff_EBP;
  *puVar35 = *puVar35 + (int)puVar35;
  puVar16 = (uint *)CONCAT22((short)((uint)si >> 0x10),CONCAT11(bVar7 | (byte)*puVar28,bVar3));
  *(byte **)(pbVar21 + 0x6e) = pbVar10 + *(int *)(pbVar21 + 0x6e);
  piVar8 = (int *)((uint)puVar35 | *puVar35);
  bVar7 = (byte)puVar28;
  *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar7;
  bVar4 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar3;
  if (CARRY1(bVar4,bVar3)) {
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    bVar4 = pbVar21[0x11];
    uVar33 = (undefined2)((uint)puVar28 >> 0x10);
    out(*(undefined4 *)pbVar10,uVar20);
    puVar16 = (uint *)((int)puVar16 + 1);
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    bVar30 = (byte)((uint)puVar28 >> 8) | bVar4 | *pbVar21;
    pcVar9 = (char *)((int)piVar8 + -0x21000001);
    bVar4 = (byte)pcVar9 | 0x11;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    cVar5 = bVar4 - 7;
    pcVar17 = (char *)CONCAT31(uVar14,cVar5);
    *unaff_EDI = (uint)(pcVar17 + (uint)(bVar4 < 7) + *unaff_EDI);
    pbVar10 = unaff_ESI + 0xc;
    out(*(int *)(unaff_ESI + 8),uVar20);
    pbVar21 = pbVar21 + 1;
    *pcVar17 = *pcVar17 + cVar5;
    bVar19 = (byte)((uint)pcVar9 >> 8);
    bVar25 = bVar7 | bVar19;
    bVar3 = cVar5 - *pcVar17;
    bVar4 = *(byte *)puVar16;
    *(byte *)puVar16 = *(byte *)puVar16 + bVar3;
    *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3 + CARRY1(bVar4,bVar3);
    *pbVar21 = *pbVar21 + bVar3;
    *pbVar10 = *pbVar10 + bVar25;
    bVar4 = (byte)((uint)pbVar21 >> 8);
    *(byte *)puVar16 = *(byte *)puVar16 + bVar3 + CARRY1((byte)pbVar21,bVar4);
    piVar8 = (int *)CONCAT31(uVar14,bVar3);
    *(byte *)piVar8 = (char)*piVar8 + bVar3;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11(bVar4 + bVar19,(byte)pbVar21 + bVar4));
    puVar28 = (uint *)CONCAT22(uVar33,CONCAT11(bVar30 + *(char *)(CONCAT31((int3)(CONCAT22(uVar33,
                                                  CONCAT11(bVar30,bVar7)) >> 8),bVar25) + 0x76),
                                               bVar25));
code_r0x00404fa4:
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    pcVar9 = (char *)(CONCAT31((int3)((uint)piVar8 >> 8),(char)piVar8 + '(') ^ *puVar16);
    cVar27 = (char)puVar16;
    *pbVar21 = *pbVar21 + cVar27;
    uVar20 = (undefined2)((uint)puVar28 >> 0x10);
    cVar26 = (char)puVar28;
    cVar31 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x75);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar5 = (char)pcVar9 + 'o';
    pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    cVar32 = (char)((uint)puVar16 >> 8);
    *unaff_EBP = *unaff_EBP - cVar32;
    pbVar21[1] = pbVar21[1] + cVar27;
    pcVar9 = pcVar9 + -0x757b021b;
    cVar5 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar5;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    cVar6 = cVar5 + 'o';
    pcVar9 = (char *)CONCAT31(uVar14,cVar6);
    pbVar22 = pbVar21 + 2;
    *pcVar9 = *pcVar9 + cVar6;
    iVar12 = CONCAT22(uVar20,CONCAT11(cVar31 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar31,cVar26)) +
                                                        0x76),cVar26));
    *pcVar9 = *pcVar9 + cVar6;
    pcVar9 = (char *)CONCAT31(uVar14,cVar5 + -0x22);
    puVar35 = (uint *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = *pbVar10;
    *pcVar9 = *pcVar9 + cVar5 + -0x22;
    *(byte *)((int)puVar16 + (int)pcVar9) =
         *(byte *)((int)puVar16 + (int)pcVar9) - (char)((uint)pbVar22 >> 8);
    *pbVar22 = *pbVar22 + cVar27;
    bVar3 = cVar32 - pbVar21[4];
    pbVar34 = pbVar10 + 5;
    out(*(undefined4 *)(pbVar10 + 1),(short)pbVar22);
    puVar28 = (uint *)((uint)(pcVar9 + *(int *)(pcVar9 + iVar12)) ^ 0x280a0001);
    *(byte *)puVar28 = (byte)*puVar28 << 1 | (char)(byte)*puVar28 < '\0';
    *pbVar34 = *pbVar34 + (char)puVar28;
    pbVar34 = pbVar34 + *(int *)(pbVar21 + -0x5c);
    pbVar10 = (byte *)((uint)puVar28 | *puVar28);
    *pbVar34 = *pbVar34 + (char)pbVar10;
    puVar28 = (uint *)CONCAT31((int3)((uint)iVar12 >> 8),cVar26 - (char)pbVar22);
    bVar4 = *pbVar10;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar3 + *pbVar10,cVar27));
    iVar12 = *(int *)pbVar10;
    *pbVar22 = *pbVar22 + cVar27;
    cVar5 = (char)(pbVar10 + (uint)CARRY1(bVar3,bVar4) + iVar12) + 'r';
    puVar11 = (uint *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar3,bVar4) + iVar12) >> 8),
                               cVar5);
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),CONCAT11(10,(char)pbVar22));
    *(char *)(puVar11 + 10) = (char)puVar11[10] + '\n';
    *pbVar34 = *pbVar34 + cVar5;
    pbVar10 = pbVar34 + *(int *)(pbVar21 + -0x5e);
    uVar29 = *puVar11;
    cVar5 = (char)((uint)puVar11 | uVar29);
    *pbVar10 = *pbVar10 + cVar5;
    uVar14 = (undefined3)(((uint)puVar11 | uVar29) >> 8);
    cVar6 = cVar5 + (byte)*puVar28;
    puVar11 = (uint *)CONCAT31(uVar14,cVar6);
    if (SCARRY1(cVar5,(byte)*puVar28) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar11 = (byte)*puVar11 + cVar6;
    piVar8 = (int *)CONCAT31(uVar14,cVar6 + '\x02');
    unaff_EDI = puVar35;
  }
  else {
    out(2,(char)piVar8);
    if ((POPCOUNT(*pbVar21) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  cVar5 = (char)piVar8 + '}';
  pbVar34 = (byte *)CONCAT31(uVar14,cVar5);
  pbVar21[(int)pbVar34] = pbVar21[(int)pbVar34] + cVar5;
  pbVar21[0x280a0000] = pbVar21[0x280a0000] - (char)((uint)piVar8 >> 8);
  bVar4 = (byte)puVar16 & 7;
  *pbVar34 = *pbVar34 << bVar4 | *pbVar34 >> 8 - bVar4;
  *pbVar10 = *pbVar10 + cVar5;
  cVar27 = (char)puVar28 - *pbVar10;
  uVar20 = (undefined2)((uint)puVar28 >> 0x10);
  cVar32 = (char)((uint)puVar28 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar28 >> 8),cVar27) + 0x7c);
  pcVar9 = (char *)CONCAT22(uVar20,CONCAT11(cVar32,cVar27));
  *pbVar34 = *pbVar34 + cVar5;
  bVar3 = (char)piVar8 + 0xa7U & *pbVar21;
  puVar35 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x7c));
  *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
  bVar3 = bVar3 + 0x2a;
  pbVar34 = (byte *)CONCAT31(uVar14,bVar3);
  *pbVar34 = *pbVar34 + bVar3;
  *pcVar9 = *pcVar9 + cVar27;
  *pbVar21 = *pbVar21 ^ bVar3;
  *pcVar9 = *pcVar9 + bVar3;
  bVar4 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar3;
  cVar5 = (bVar3 - *pbVar34) - CARRY1(bVar4,bVar3);
  *(byte *)puVar16 = (byte)*puVar16 + (byte)pbVar21;
  cVar32 = cVar32 + pcVar9[0x7b];
  *(char *)CONCAT31(uVar14,cVar5) = *(char *)CONCAT31(uVar14,cVar5) + cVar5;
  pcVar9 = (char *)CONCAT31(uVar14,cVar5 + 'o');
  *pcVar9 = *pcVar9 + cVar5 + 'o';
  pcVar9 = pcVar9 + 0x2ed7fde6;
  cVar6 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar6;
  cVar5 = *(char *)(CONCAT22(uVar20,CONCAT11(cVar32,cVar27)) + 0x7b);
  *pcVar9 = *pcVar9 + cVar6;
  piVar8 = (int *)(CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar15 = (undefined3)((uint)pbVar21 >> 8);
  bVar3 = (byte)pbVar21 | *pbVar10;
  pbVar23 = (byte *)CONCAT31(uVar15,bVar3);
  uVar29 = CONCAT22(uVar20,CONCAT11(cVar32 + cVar5,cVar27)) | (uint)pbVar10;
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  bVar4 = (byte)piVar8 | *pbVar23;
  pbVar22 = (byte *)CONCAT31(uVar14,bVar4);
  cVar5 = (byte)puVar16 - bVar3;
  puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),cVar5);
  *pbVar22 = *pbVar22 + bVar4;
  pbVar34 = pbVar10 + 4;
  out(*(undefined4 *)pbVar10,(short)pbVar23);
  *pbVar22 = bVar4;
  *pbVar23 = *pbVar23 + cVar5;
  pbVar10 = pbVar10 + 8;
  out(*(undefined4 *)pbVar34,(short)pbVar23);
  *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
  puVar28 = (uint *)(CONCAT31((int3)(uVar29 >> 8),(char)uVar29 - (char)((uint)pbVar21 >> 8)) |
                    (uint)pbVar10);
  pbVar21 = (byte *)CONCAT31(uVar15,(bVar3 | *pbVar10) + (byte)*puVar35);
  cVar5 = bVar4 - (byte)*puVar35;
  puVar11 = (uint *)CONCAT31(uVar14,cVar5 - *(char *)CONCAT31(uVar14,cVar5));
code_r0x00405090:
  *puVar11 = (uint)(pbVar21 + *puVar11);
  cVar5 = (char)puVar11;
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  *puVar16 = *puVar16 - (int)unaff_EBP;
  bVar4 = *pbVar10;
  bVar3 = (byte)pbVar21;
  *pbVar10 = *pbVar10 + bVar3;
  *(byte *)puVar11 = (byte)*puVar11 + cVar5 + CARRY1(bVar4,bVar3);
  *(byte *)puVar16 = (byte)*puVar16 + cVar5;
  uVar29 = *puVar28;
  *(byte *)puVar28 = (byte)*puVar28 + 0x72;
  *(byte *)puVar28 = (byte)*puVar28;
  cVar5 = (char)((uint)pbVar21 >> 8);
  if (SCARRY1((byte)uVar29,'r')) {
    pbVar10 = pbVar10 + *(int *)(pbVar21 + -10);
  }
  else {
    while( true ) {
      *pbVar10 = *pbVar10 + (char)puVar11;
      uVar14 = (undefined3)((uint)puVar11 >> 8);
      cVar6 = (char)puVar11 + (byte)*puVar28;
      pcVar9 = (char *)CONCAT31(uVar14,cVar6);
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                 CONCAT11((char)((uint)puVar28 >> 8) +
                                          *(byte *)((int)puVar28 + 0x7b),(char)puVar28));
      *pcVar9 = *pcVar9 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar29 = CONCAT31(uVar14,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar29;
      piVar8 = (int *)CONCAT22((short)(uVar29 >> 0x10),
                               CONCAT11((char)((uint)puVar11 >> 8) + in_AF,bVar7));
      *piVar8 = *piVar8 + (int)piVar8;
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar7 = bVar7 | *(byte *)(piVar8 + 0x354a);
      bVar7 = bVar7 - *(char *)CONCAT31(uVar14,bVar7);
      pbVar34 = (byte *)CONCAT31(uVar14,bVar7);
      bVar4 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar7;
      pbVar10 = pbVar10 + (-(uint)CARRY1(bVar4,bVar7) - *(int *)pbVar34);
      puVar11 = (uint *)(pbVar34 + 0xfc00);
      *pbVar21 = *pbVar21 + cVar5;
      uVar29 = *puVar11;
      bVar4 = (byte)puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + bVar4;
      uVar2 = (uint)CARRY1((byte)uVar29,bVar4);
      uVar29 = *puVar28;
      uVar1 = *puVar28;
      *puVar28 = (uint)((byte *)(uVar1 + (int)puVar11) + uVar2);
      if (!CARRY4(uVar29,(uint)puVar11) && !CARRY4(uVar1 + (int)puVar11,uVar2)) break;
      *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    }
  }
  uVar29 = (uint)puVar11 | *puVar11;
  uVar20 = SUB42(pbVar21,0);
  *pbVar10 = *pbVar10 + (char)uVar29;
  piVar8 = (int *)(uVar29 + 0xc1872);
  if (SCARRY4(uVar29,0xc1872)) {
    cVar6 = (char)piVar8;
    *(char *)piVar8 = *(char *)piVar8 + cVar6;
    *pbVar21 = *pbVar21 + cVar6;
    *(char *)piVar8 = *(char *)piVar8 + cVar6;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar16;
    *(char *)piVar8 = *(char *)piVar8 + cVar6;
    *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) + bVar3;
    pbVar34 = pbVar10;
    goto code_r0x00405117;
  }
  do {
    bVar4 = *pbVar10;
    bVar3 = (byte)piVar8;
    *pbVar10 = *pbVar10 + bVar3;
    if (CARRY1(bVar4,bVar3)) {
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      uVar14 = (undefined3)((uint)puVar16 >> 8);
      bVar4 = (byte)puVar16 | bRam396f1609;
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      puVar16 = (uint *)CONCAT31(uVar14,bVar4 | *(byte *)CONCAT31(uVar14,bVar4));
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar3 = bVar3 | *pbVar21;
      pcVar9 = (char *)CONCAT31(uVar14,bVar3);
      if ((POPCOUNT(bVar3) & 1U) != 0) {
        pbVar34 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,uVar20);
        uVar29 = CONCAT22((short)((uint)piVar8 >> 0x10),(ushort)bVar3);
        *pbVar34 = *pbVar34 + bVar3;
        pcVar9 = (char *)(uVar29 | 8);
        cVar6 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x7a);
        puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar6,(char)puVar28));
        *pcVar9 = *pcVar9 + (char)pcVar9;
        cVar5 = (char)pcVar9 + 'o';
        piVar8 = (int *)CONCAT31((int3)(uVar29 >> 8),cVar5);
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(byte *)puVar16 = (byte)*puVar16 + 1;
        pbVar10 = pbVar10 + 8;
        out(*(undefined4 *)pbVar34,uVar20);
        pbVar21 = (byte *)((uint)pbVar21 ^ uRam08122c04);
        iVar12 = CONCAT31((int3)((uint)(*piVar8 * 0x17070600) >> 8),2);
        *(char *)(iVar12 * 2) = *(char *)(iVar12 * 2) - cVar6;
        do {
          bVar4 = (byte)iVar12;
          *pbVar10 = *pbVar10 + bVar4;
          bVar36 = CARRY1(bVar4,(byte)*puVar28);
          uVar14 = (undefined3)((uint)iVar12 >> 8);
          cVar5 = bVar4 + (byte)*puVar28;
          pbVar34 = (byte *)CONCAT31(uVar14,cVar5);
          uVar20 = in_DS;
          uVar33 = uStack_44;
          if (SCARRY1(bVar4,(byte)*puVar28) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar34 = *pbVar34 + cVar5;
          uVar29 = CONCAT31(uVar14,cVar5 + '\'') + 0x1ebd9f3;
          uStack_48 = (undefined1)in_ES;
          uStack_47 = (undefined1)((ushort)in_ES >> 8);
          piVar8 = (int *)(uVar29 ^ 0x73060000);
          puVar16 = (uint *)((int)puVar16 + 1);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                     CONCAT11((byte)((uint)puVar28 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar28));
          cVar5 = (char)uVar29;
          *(char *)piVar8 = (char)*piVar8 + cVar5;
          uVar29 = CONCAT31((int3)((uint)piVar8 >> 8),cVar5 + '\x02');
          bVar36 = 0xd9f2d2da < uVar29;
          iVar12 = uVar29 + 0x260d2d25;
          pcVar9 = unaff_EBP;
          do {
            uVar14 = (undefined3)((uint)iVar12 >> 8);
            bVar3 = (char)iVar12 + -2 + bVar36;
            pbVar34 = (byte *)CONCAT31(uVar14,bVar3);
            bVar4 = *pbVar34;
            *pbVar34 = *pbVar34 + bVar3;
            bVar7 = (byte)puVar28;
            uStack_44 = in_ES;
            if (CARRY1(bVar4,bVar3)) {
              *pbVar34 = *pbVar34 + bVar3;
              puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                         CONCAT11((byte)((uint)puVar28 >> 8) | pcVar9[0x7f],bVar7));
              *pbVar34 = *pbVar34 + bVar3;
              pbVar34 = (byte *)CONCAT31(uVar14,bVar3 + 0x2a);
              *pbVar34 = *pbVar34 + bVar3 + 0x2a;
              *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar21;
              uVar20 = in_DS;
              while( true ) {
                in_DS = uVar20;
                bVar3 = (byte)pbVar34;
                *pbVar21 = *pbVar21 ^ bVar3;
                *pbVar21 = *pbVar21 + (char)puVar28;
                *pbVar34 = *pbVar34 + bVar3;
                *(byte *)puVar28 = (byte)*puVar28 + (char)((uint)pbVar21 >> 8);
                bVar4 = *pbVar34;
                *pbVar34 = *pbVar34 + bVar3;
                uVar29 = *puVar28;
                uVar1 = *puVar28;
                *puVar28 = (uint)(pbVar34 + uVar1 + CARRY1(bVar4,bVar3));
                uVar14 = (undefined3)((uint)pbVar34 >> 8);
                if (CARRY4(uVar29,(uint)pbVar34) ||
                    CARRY4((uint)(pbVar34 + uVar1),(uint)CARRY1(bVar4,bVar3))) break;
                *pbVar10 = *pbVar10 + bVar3;
                pcVar17 = (char *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                           CONCAT11((char)((uint)puVar16 >> 8) + *pbVar34,
                                                    (char)puVar16));
                *pbVar10 = *pbVar10 + bVar3;
                piVar8 = (int *)CONCAT31(uVar14,bVar3 | (byte)*puVar28);
                pbVar34 = pbVar10;
                while( true ) {
                  pbVar10 = pbVar34 + 4;
                  out(*(undefined4 *)pbVar34,(short)pbVar21);
                  pbVar21 = pbVar21 + 1;
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  bVar7 = (byte)((uint)pcVar17 >> 8) | *pbVar21;
                  uVar14 = (undefined3)((uint)piVar8 >> 8);
                  bVar3 = (byte)piVar8 ^ *pbVar21;
                  pcVar13 = (char *)CONCAT31(uVar14,bVar3);
                  cRam282b0000 = cRam282b0000 - bVar7;
                  *pcVar13 = *pcVar13 + bVar3;
                  unaff_EBP = pcVar9 + -*(int *)pbVar21;
                  uStack_48 = (undefined1)in_DS;
                  uStack_47 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar35 + 0x17);
                  *pcVar13 = *pcVar13 + bVar3;
                  puVar16 = (uint *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                             CONCAT11(bVar7 + bVar4 | *pbVar21,(char)pcVar17));
                  *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
                  *(byte *)((int)pcVar13 * 2) = *(byte *)((int)pcVar13 * 2) ^ bVar3;
                  in_AF = 9 < (bVar3 & 0xf) | in_AF;
                  bVar3 = bVar3 + in_AF * -6;
                  pbVar34 = (byte *)CONCAT31(uVar14,bVar3 + (0x9f < bVar3 | in_AF * (bVar3 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar34 = pbVar34 + *(int *)pbVar34;
                  *(char *)((int)pbVar34 * 2) =
                       *(char *)((int)pbVar34 * 2) + (char)((uint)pbVar21 >> 8);
                  bVar36 = CARRY1((byte)*puVar16,(byte)pbVar21);
                  *(byte *)puVar16 = (byte)*puVar16 + (byte)pbVar21;
                  uVar20 = in_DS;
                  uVar33 = in_ES;
GenerateStatusText:
                  in_DS = uVar33;
                  pcVar9 = unaff_EBP;
                  uStack_44 = in_DS;
                  if (!bVar36) break;
                  *pbVar34 = *pbVar34 + (char)pbVar34;
                  iVar12 = CONCAT31((int3)((uint)puVar16 >> 8),(byte)puVar16 | *pbVar21);
                  uVar20 = (undefined2)((uint)puVar28 >> 0x10);
                  cVar27 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + 0x7d);
                  *pbVar34 = *pbVar34 + (char)pbVar34;
                  *(byte *)puVar35 = (byte)*puVar35 - (char)((uint)puVar16 >> 8);
                  iVar12 = iVar12 - *(int *)(iVar12 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar20,CONCAT11(cVar27,(char)puVar28)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar10,(short)pbVar21);
                  pbVar21 = (byte *)CONCAT22(uStack_46,CONCAT11(uStack_47,uStack_48));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar34 = pbVar10 + 8;
                  out(*(undefined4 *)(pbVar10 + 4),CONCAT11(uStack_47,uStack_48));
                  pcVar9 = unaff_EBP + 1;
                  cVar6 = (char)iVar12;
                  pcVar17 = (char *)CONCAT22((short)((uint)iVar12 >> 0x10),
                                             CONCAT11((byte)((uint)iVar12 >> 8) |
                                                      *(byte *)((int)puVar35 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_47,uStack_48);
                  uVar14 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar34,0xf0)) >> 8);
                  piVar8 = (int *)CONCAT31(uVar14,0x5f);
                  puVar35 = (uint *)((int)puVar35 + 1);
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  puVar28 = (uint *)CONCAT22(uVar20,CONCAT11(cVar27 + cVar5 | pbVar10[-0x78],
                                                             (char)puVar28));
                  *(char *)piVar8 = (char)*piVar8 + '_';
                  puVar16 = (uint *)CONCAT31(uVar14,0x8c);
                  *(byte **)(pbVar34 + (int)puVar35 * 8) =
                       pbVar21 + *(int *)(pbVar34 + (int)puVar35 * 8);
                  bVar4 = *pbVar34;
                  *pbVar34 = *pbVar34 + 0x8c;
                  if (bVar4 < 0x74) {
                    *pbVar21 = *pbVar21 + cVar6;
                    *(byte *)puVar28 = (byte)*puVar28 >> 1;
                    *(char *)puVar16 = (char)*puVar16 + -0x74;
                    *puVar16 = (uint)(pcVar9 + *puVar16);
                    *puVar16 = *puVar16 << 1 | (uint)((int)*puVar16 < 0);
                    *pbVar21 = *pbVar21 + cVar6;
                    unaff_EBP[2] = unaff_EBP[2] - cVar6;
                    *pbVar21 = *pbVar21 + cVar6;
                    pbVar10 = (byte *)CONCAT31(uVar14,0x83);
                    puVar16 = puVar28;
                    goto code_r0x00405312;
                  }
                  *puVar16 = (uint)(*puVar16 + (int)puVar16);
                  piVar8 = (int *)(CONCAT31(uVar14,(byte)puVar16[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar16[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar8 = (int *)((int)piVar8 + *(int *)pbVar34);
                }
              }
              *pbVar21 = *pbVar21 + bVar3;
              *(byte *)puVar28 = (byte)*puVar28 - (char)pbVar21;
              *pbVar34 = *pbVar34 + bVar3;
              pbVar34 = (byte *)CONCAT31(uVar14,bVar3 | (byte)*puVar28);
            }
            else {
              cVar5 = (char)puVar16;
              *pbVar21 = *pbVar21 + cVar5;
              *(byte **)pbVar34 = pbVar21 + *(int *)pbVar34;
              *pbVar34 = *pbVar34 + bVar3;
              bVar3 = bVar3 + *pbVar34;
              pbVar34 = (byte *)CONCAT31(uVar14,bVar3);
              if (-1 < (char)bVar3) {
                *(byte *)puVar28 = (byte)*puVar28 + bVar7;
                out(*(undefined4 *)pbVar10,(short)pbVar21);
                pbVar21 = pbVar21 + 1;
                *pbVar34 = *pbVar34 + bVar3;
                puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),
                                           bVar7 | (byte)((uint)iVar12 >> 8));
                cVar6 = bVar3 - (byte)*puVar16;
                pcVar17 = (char *)CONCAT31(uVar14,cVar6);
                *pcVar17 = *pcVar17 + cVar6 + (bVar3 < (byte)*puVar16);
                *pbVar21 = *pbVar21 + cVar6;
                pcVar17 = (char *)((int)pcVar17 * 2 + 0x79);
                *pcVar17 = *pcVar17 + (char)((uint)pbVar21 >> 8);
                pbVar34 = (byte *)in((short)pbVar21);
                pbVar10 = pbVar10 + 4;
              }
              *pbVar10 = *pbVar10 + cVar5;
              *pbVar34 = *pbVar34 + (char)pbVar34;
              *pbVar34 = *pbVar34 + (char)pbVar34;
              uStack_48 = (undefined1)in_DS;
              uStack_47 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar34;
              bVar7 = (byte)((uint)puVar16 >> 8);
              bVar19 = bVar7 + *pbVar34;
              iVar12 = *(int *)pbVar34;
              *pbVar21 = *pbVar21 + cVar5;
              bVar3 = (char)(pbVar34 + (uint)CARRY1(bVar7,bVar4) + iVar12) - (byte)*puVar28;
              pbVar34 = (byte *)CONCAT31((int3)((uint)(pbVar34 + (uint)CARRY1(bVar7,bVar4) + iVar12)
                                               >> 8),bVar3);
              *(byte *)puVar28 = (byte)*puVar28 ^ bVar3;
              *pcVar9 = *pcVar9 + (char)puVar28;
              *pbVar34 = *pbVar34 + bVar3;
              *pbVar34 = *pbVar34 + bVar3;
              *pbVar34 = *pbVar34 + bVar3;
              puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                         CONCAT11(bVar19 + *pbVar34,cVar5));
              pbVar34 = pbVar34 + (uint)CARRY1(bVar19,*pbVar34) + *(int *)pbVar34;
              *pbVar21 = *pbVar21 + cVar5;
              pbVar10 = pbVar10 + *(int *)(pbVar21 + 0x3e);
            }
            *pbVar10 = *pbVar10 + (char)pbVar34;
            cVar5 = (char)pbVar34 + 'r';
            pbVar10 = pbVar10 + -1;
            uVar29 = CONCAT31((int3)((uint)pbVar34 >> 8),cVar5);
            *pbVar10 = *pbVar10 + cVar5;
            bVar36 = 0xfff38f8d < uVar29;
            iVar12 = uVar29 + 0xc7072;
            unaff_EBP = pcVar9;
          } while (SCARRY4(uVar29,0xc7072));
        } while( true );
      }
      *pcVar9 = *pcVar9 + bVar3;
      bVar3 = bVar3 + 0x6f;
      pbVar34 = (byte *)CONCAT31(uVar14,bVar3);
      bVar4 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar3;
      uVar14 = (undefined3)
               ((uint)(pbVar34 + (uint)CARRY1(bVar4,bVar3) + *(int *)((int)puVar16 + (int)pbVar21))
               >> 8);
      cVar6 = (char)(pbVar34 + (uint)CARRY1(bVar4,bVar3) + *(int *)((int)puVar16 + (int)pbVar21)) +
              'E';
      pcVar9 = (char *)CONCAT31(uVar14,cVar6);
      *pcVar9 = *pcVar9 + cVar6;
      cVar6 = cVar6 + *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar14,cVar6);
      *pcVar9 = *pcVar9 + cVar6;
      puVar11 = (uint *)CONCAT31(uVar14,cVar6 + *pcVar9);
      *(char *)puVar11 = (char)*puVar11 + cVar6 + *pcVar9;
      pbVar34 = (byte *)((uint)puVar11 | *puVar11);
      bVar4 = *pbVar34;
      bVar3 = (byte)pbVar34;
      *pbVar34 = *pbVar34 + bVar3;
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar34 >> 8),bVar3 + CARRY1(bVar4,bVar3));
      pbVar34 = pbVar10;
code_r0x00405117:
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      puVar28 = (uint *)((int)puVar28 - *puVar28);
      pbVar10 = pbVar34 + 4;
      out(*(undefined4 *)pbVar34,uVar20);
    }
    *pbVar21 = *pbVar21 + (char)puVar16;
    bVar36 = puVar28 < (uint *)*piVar8;
    puVar28 = (uint *)((int)puVar28 - *piVar8);
    bVar4 = (byte)((uint)puVar16 >> 8);
    *(byte *)((int)puVar35 + 0x39) = (*(byte *)((int)puVar35 + 0x39) - bVar4) - bVar36;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    uVar29 = *puVar28;
    *(int *)((int)puVar35 + 0x39) = *(int *)((int)puVar35 + 0x39) - (int)unaff_EBP;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar29 | (byte)*puVar28,(char)puVar16));
    *(char *)(piVar8 + 10) = (char)piVar8[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
  bVar4 = (char)piVar8 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),bVar4);
  *pbVar10 = *pbVar10 ^ bVar4;
  *(byte *)puVar28 = (byte)*puVar28 + (char)((uint)pcVar17 >> 8);
  bVar4 = *pbVar21;
  *pbVar21 = *pbVar21 + (byte)pcVar17;
  piVar8 = (int *)(((uint)pbVar10 | 0x1496f09) + *puVar35 + (uint)CARRY1(bVar4,(byte)pcVar17));
  pbVar22 = pbVar34 + 4;
  out(*(undefined4 *)pbVar34,(short)pbVar21);
  pbVar23 = pbVar21 + -1;
  *piVar8 = *piVar8 + (int)piVar8;
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | (byte)*puVar28);
  cVar5 = (char)piVar8 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar5);
  puVar16 = puVar28;
  pbVar34 = pbVar22;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar21 = *pbVar21 - (char)((uint)pbVar23 >> 8);
    *pbVar10 = *pbVar10 + cVar5;
code_r0x00405396:
    bVar4 = *pbVar10;
    bVar3 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    *(byte **)pbVar22 = pbVar10 + (uint)CARRY1(bVar4,bVar3) + *(int *)pbVar22;
    out(*(undefined4 *)pbVar22,(short)pbVar21);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                              CONCAT11((byte)((uint)pbVar10 >> 8) | pbVar22[4],bVar3));
    *(char **)((int)puVar35 + -1) = pcVar9 + *(int *)((int)puVar35 + -1);
    out(*(undefined4 *)(pbVar22 + 4),(short)pbVar21);
    *pcVar9 = *pcVar9 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar28 = (uint *)((int)puVar16 + -1);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar14 = (undefined3)((uint)pbVar21 >> 8);
  piVar8 = (int *)((int)piVar8 + 0x1b7e);
  bVar7 = (byte)pbVar21 | *(byte *)puVar28 | *(byte *)puVar28;
  iRam04115f2c = iRam04115f2c + (int)piVar8;
  out(*(undefined4 *)pbVar34,(short)CONCAT31(uVar14,bVar7));
  *piVar8 = *piVar8 + (int)piVar8;
  bVar7 = bVar7 | (byte)piVar8;
  iVar24 = CONCAT31(uVar14,bVar7);
  pbVar10 = (byte *)((int)piVar8 - *piVar8);
  cVar5 = (char)pbVar10;
  *pcVar17 = *pcVar17 + cVar5;
  cVar6 = (char)pcVar17 - bVar7;
  *pbVar10 = *pbVar10 + cVar5;
  uVar20 = (undefined2)((uint)pcVar17 >> 0x10);
  bVar3 = (byte)((uint)pcVar17 >> 8) | *pbVar10;
  pcVar9 = pcVar9 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar4 = *(byte *)(CONCAT22(uVar20,CONCAT11(bVar3,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar9;
  *pbVar10 = *pbVar10 + cVar5;
  bVar4 = bVar3 | bVar4 | *(byte *)puVar28;
  iVar18 = CONCAT22(uVar20,CONCAT11(bVar4,cVar6));
  pbVar23 = (byte *)((uint)(pbVar34 + 4) ^ *(uint *)(iVar24 + -0x43));
  iVar12 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar12,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar5;
  }
  pbVar21 = pbVar10 + 0x5674;
  puVar35 = (uint *)((int)puVar35 +
                    (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar23 + -0x7f)));
  bVar3 = (byte)pbVar21;
  *pbVar21 = *pbVar21 + bVar3;
  uVar15 = (undefined3)((uint)pbVar21 >> 8);
  bVar19 = bVar3 + 0x2d;
  piVar8 = (int *)CONCAT31(uVar15,bVar19);
  *(uint *)(pbVar23 + (int)puVar35 * 8) =
       *(int *)(pbVar23 + (int)puVar35 * 8) + iVar24 + (uint)(0xd2 < bVar3);
  bVar3 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar19;
  if (!CARRY1(bVar3,bVar19)) {
    do {
      pbVar21 = (byte *)(iVar24 + 1);
      bVar3 = (byte)piVar8;
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      bVar7 = (byte)((uint)piVar8 >> 8);
      bVar19 = (byte)puVar28 | bVar7;
      puVar16 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),bVar19);
      out(*(undefined4 *)pbVar23,(short)pbVar21);
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      uVar20 = (undefined2)((uint)iVar18 >> 0x10);
      cVar5 = (char)iVar18;
      pbVar10 = (byte *)CONCAT22(uVar20,CONCAT11((byte)((uint)iVar18 >> 8) | *pbVar21,cVar5));
      bVar4 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar3;
      *(byte *)piVar8 = (char)*piVar8 + bVar3 + CARRY1(bVar4,bVar3);
      *pbVar21 = *pbVar21 + bVar3;
      *(byte *)puVar35 = (byte)*puVar35 + bVar7;
      *(int *)((int)piVar8 * 2) = *(int *)((int)piVar8 * 2) + CONCAT22(uVar20,CONCAT11(0x1c,cVar5));
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      cVar6 = (char)pbVar21;
      *(byte *)puVar16 = (byte)*puVar16 + cVar6;
      *(byte *)((int)piVar8 * 2) = *(byte *)((int)piVar8 * 2) ^ bVar3;
      *(byte *)piVar8 = (char)*piVar8 + bVar3;
      pbVar10 = pbVar23 + 8;
      out(*(undefined4 *)(pbVar23 + 4),(short)pbVar21);
      piVar8 = (int *)0xa0a0000;
      *pbVar21 = *pbVar21;
      bVar3 = cVar5 - cVar6;
      iVar18 = CONCAT22(uVar20,CONCAT11((byte)puVar35[0x14] | 0x1c | bRam0ca87216,bVar3));
      *pbVar21 = *pbVar21;
      bVar4 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar3;
      if (!CARRY1(bVar4,bVar3)) {
        piVar8 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar28 >> 8) | *(byte *)(iVar24 + 3);
        puVar16 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar4,bVar19));
        if (bVar4 != 0) {
          pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),cVar6 + pbVar10[(int)puVar35 * 8]);
          piVar8 = (int *)0x6d7d7000;
          iVar18 = iVar18 + 1;
        }
      }
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      iVar24 = CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | pbVar10[(int)puVar35 * 8]);
      *(char *)piVar8 = (char)*piVar8;
      piVar8 = (int *)CONCAT31((int3)((uint)piVar8 >> 8),0xf9);
      *puVar35 = (uint)((int)piVar8 + *puVar35 + 1);
      pbVar23 = pbVar23 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar24);
      puVar28 = puVar16;
    } while( true );
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar19 = bVar19 | *(byte *)((int)piVar8 + 0x4000081);
  piVar8 = (int *)CONCAT31(uVar15,bVar19);
  if ('\0' < (char)bVar19) {
    *(byte *)piVar8 = (char)*piVar8 + bVar19;
    puVar11 = (uint *)CONCAT31(uVar15,bVar19 + 0x28);
    *puVar11 = *puVar11 ^ (uint)puVar11;
    *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
    cVar5 = (bVar19 + 0x28) - bVar4;
    pcVar9 = (char *)CONCAT31(uVar15,cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    pbVar21 = (byte *)CONCAT31(uVar14,bVar7 | *(byte *)puVar28);
    pcVar17 = (char *)CONCAT22((short)((uint)puVar28 >> 0x10),
                               CONCAT11((char)((uint)puVar28 >> 8) + *(byte *)((int)puVar16 + 0x7d),
                                        (char)puVar28));
    *pcVar9 = *pcVar9 + cVar5;
    pbVar10 = (byte *)CONCAT31(uVar15,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar15,cVar5 + 0x39U));
    *pcVar17 = *pcVar17 + bVar4;
    pbVar22 = pbVar23 + 4;
    out(*(undefined4 *)pbVar23,(short)pbVar21);
    goto code_r0x00405396;
  }
  pbVar34 = pbVar23 + 4;
  out(*(undefined4 *)pbVar23,(short)iVar24);
  pcVar17 = (char *)(iVar18 + -1);
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  pbVar21 = (byte *)CONCAT31(uVar14,bVar7 | *(byte *)puVar28);
  goto code_r0x004052ee;
}


