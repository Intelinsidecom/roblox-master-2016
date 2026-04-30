/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404fa1
 * Raw Name    : Report
 * Demangled   : Report
 * Prototype   : void Report(uint * param_1, char * param_2)
 * Local Vars  : in_DS, in_ES, in_AF, bVar33, uStack_4c, uStack_4a, uStack_4b, uVar1, uStack_48, uVar3, uVar2, cVar5, cVar4, bVar7, bVar6, pcVar8, in_EAX, pbVar10, puVar9, piVar12, uVar11, iVar14, pbVar13, uVar16, param_1, puVar15, param_2, pbVar18, uVar17, iVar20, pcVar19, uVar22, bVar21, pcVar24, bVar23, pbVar26, pbVar25, cVar28, iVar27, unaff_EBX, cVar29, cVar31, puVar30, unaff_ESI, unaff_EBP, piVar32, unaff_EDI
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

void __fastcall Report(uint *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char *in_EAX;
  char *pcVar8;
  undefined3 uVar16;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  int iVar14;
  undefined3 uVar17;
  uint *puVar15;
  byte bVar21;
  byte *pbVar18;
  char *pcVar19;
  undefined2 uVar22;
  int iVar20;
  byte bVar23;
  char *pcVar24;
  byte *pbVar25;
  byte *pbVar26;
  int iVar27;
  char cVar28;
  char cVar29;
  char cVar31;
  int unaff_EBX;
  uint *puVar30;
  char *unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  int *piVar32;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar33;
  byte in_AF;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  
                    /* .NET CLR Managed Code */
  uVar22 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar28 = (char)unaff_EBX;
  cVar31 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x76);
  *in_EAX = *in_EAX + (char)in_EAX;
  pcVar8 = (char *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '(') ^ *param_1);
  bVar7 = (byte)param_1;
  *param_2 = *param_2 + bVar7;
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar31,cVar28)) + 0x75);
  *pcVar8 = *pcVar8 + (char)pcVar8;
  cVar4 = (char)pcVar8 + 'o';
  pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar4);
  *pcVar8 = *pcVar8 + cVar4;
  cVar29 = (char)((uint)param_1 >> 8);
  *unaff_EBP = *unaff_EBP - cVar29;
  param_2[1] = param_2[1] + bVar7;
  pcVar8 = pcVar8 + -0x757b021b;
  cVar4 = (char)pcVar8;
  *pcVar8 = *pcVar8 + cVar4;
  uVar16 = (undefined3)((uint)pcVar8 >> 8);
  cVar5 = cVar4 + 'o';
  pcVar8 = (char *)CONCAT31(uVar16,cVar5);
  pcVar24 = param_2 + 2;
  *pcVar8 = *pcVar8 + cVar5;
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar31,cVar28)) + 0x76);
  iVar14 = CONCAT22(uVar22,CONCAT11(cVar31,cVar28));
  *pcVar8 = *pcVar8 + cVar5;
  pcVar19 = (char *)CONCAT31(uVar16,cVar4 + -0x22);
  piVar32 = (int *)(unaff_EDI + 1);
  *unaff_EDI = *unaff_ESI;
  *pcVar19 = *pcVar19 + cVar4 + -0x22;
  *(char *)((int)param_1 + (int)pcVar19) =
       *(char *)((int)param_1 + (int)pcVar19) - (char)((uint)pcVar24 >> 8);
  *pcVar24 = *pcVar24 + bVar7;
  bVar21 = cVar29 - param_2[4];
  pcVar8 = unaff_ESI + 5;
  out(*(undefined4 *)(unaff_ESI + 1),(short)pcVar24);
  puVar9 = (uint *)((uint)(pcVar19 + *(int *)(pcVar19 + iVar14)) ^ 0x280a0001);
  *(byte *)puVar9 = (byte)*puVar9 << 1 | (char)(byte)*puVar9 < '\0';
  *pcVar8 = *pcVar8 + (char)puVar9;
  pcVar8 = pcVar8 + *(int *)(param_2 + -0x5c);
  pbVar10 = (byte *)((uint)puVar9 | *puVar9);
  *pcVar8 = *pcVar8 + (char)pbVar10;
  bVar23 = (byte)pcVar24;
  uVar17 = (undefined3)((uint)iVar14 >> 8);
  puVar30 = (uint *)CONCAT31(uVar17,cVar28 - bVar23);
  bVar6 = *pbVar10;
  pbVar18 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar21 + *pbVar10,bVar7));
  iVar14 = *(int *)pbVar10;
  *pcVar24 = *pcVar24 + bVar7;
  cVar4 = (char)(pbVar10 + (uint)CARRY1(bVar21,bVar6) + iVar14) + 'r';
  puVar9 = (uint *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar21,bVar6) + iVar14) >> 8),cVar4
                           );
  pbVar25 = (byte *)CONCAT22((short)((uint)pcVar24 >> 0x10),CONCAT11(10,bVar23));
  *(char *)(puVar9 + 10) = (char)puVar9[10] + '\n';
  *pcVar8 = *pcVar8 + cVar4;
  pbVar10 = (byte *)(pcVar8 + *(int *)(pbVar25 + -0x5e));
  uVar11 = (uint)puVar9 | *puVar9;
  cVar4 = (char)uVar11;
  *pbVar10 = *pbVar10 + cVar4;
  uVar16 = (undefined3)(uVar11 >> 8);
  cVar5 = cVar4 + (char)*puVar30;
  puVar9 = (uint *)CONCAT31(uVar16,cVar5);
  if (SCARRY1(cVar4,(char)*puVar30) != cVar5 < '\0') {
    *(byte *)puVar9 = (byte)*puVar9 + cVar5;
    cVar4 = cVar5 + '\x7f';
    pbVar13 = (byte *)CONCAT31(uVar16,cVar4);
    pbVar25[(int)pbVar13] = pbVar25[(int)pbVar13] + cVar4;
    pbVar25[0x280a0000] = pbVar25[0x280a0000] - (char)(uVar11 >> 8);
    *pbVar13 = *pbVar13 << (bVar7 & 7) | *pbVar13 >> 8 - (bVar7 & 7);
    *pbVar10 = *pbVar10 + cVar4;
    cVar29 = (cVar28 - bVar23) - *pbVar10;
    cVar31 = cVar31 + *(char *)(CONCAT31(uVar17,cVar29) + 0x7c);
    pcVar8 = (char *)CONCAT22(uVar22,CONCAT11(cVar31,cVar29));
    *pbVar13 = *pbVar13 + cVar4;
    bVar21 = cVar5 + 0xa9U & *pbVar25;
    piVar32 = (int *)((int)piVar32 + *(int *)(unaff_EBP + 0x7c));
    *(char *)CONCAT31(uVar16,bVar21) = *(char *)CONCAT31(uVar16,bVar21) + bVar21;
    bVar21 = bVar21 + 0x2a;
    pbVar13 = (byte *)CONCAT31(uVar16,bVar21);
    *pbVar13 = *pbVar13 + bVar21;
    *pcVar8 = *pcVar8 + cVar29;
    *pbVar25 = *pbVar25 ^ bVar21;
    *pcVar8 = *pcVar8 + bVar21;
    bVar6 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar21;
    cVar4 = (bVar21 - *pbVar13) - CARRY1(bVar6,bVar21);
    *pbVar18 = *pbVar18 + bVar23;
    cVar31 = cVar31 + pcVar8[0x7b];
    *(char *)CONCAT31(uVar16,cVar4) = *(char *)CONCAT31(uVar16,cVar4) + cVar4;
    pcVar8 = (char *)CONCAT31(uVar16,cVar4 + 'o');
    *pcVar8 = *pcVar8 + cVar4 + 'o';
    pcVar8 = pcVar8 + 0x2ed7fde6;
    cVar5 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar5;
    cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar31,cVar29)) + 0x7b);
    *pcVar8 = *pcVar8 + cVar5;
    piVar12 = (int *)(CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + 'o') + 0x6f060000);
    *piVar12 = *piVar12 + (int)piVar12;
    uVar17 = (undefined3)((uint)pbVar25 >> 8);
    bVar23 = bVar23 | *pbVar10;
    pbVar26 = (byte *)CONCAT31(uVar17,bVar23);
    uVar11 = CONCAT22(uVar22,CONCAT11(cVar31 + cVar4,cVar29)) | (uint)pbVar10;
    uVar16 = (undefined3)((uint)piVar12 >> 8);
    bVar6 = (byte)piVar12 | *pbVar26;
    pbVar13 = (byte *)CONCAT31(uVar16,bVar6);
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar7 - bVar23);
    *pbVar13 = *pbVar13 + bVar6;
    pbVar25 = pbVar10 + 4;
    out(*(undefined4 *)pbVar10,(short)pbVar26);
    *pbVar13 = bVar6;
    *pbVar26 = *pbVar26 + (bVar7 - bVar23);
    pbVar10 = pbVar10 + 8;
    out(*(undefined4 *)pbVar25,(short)pbVar26);
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    puVar30 = (uint *)(CONCAT31((int3)(uVar11 >> 8),(char)uVar11 + -10) | (uint)pbVar10);
    pbVar25 = (byte *)CONCAT31(uVar17,(bVar23 | *pbVar10) + (char)*piVar32);
    cVar4 = bVar6 - (char)*piVar32;
    puVar9 = (uint *)CONCAT31(uVar16,cVar4 - *(char *)CONCAT31(uVar16,cVar4));
  }
  *puVar9 = (uint)(pbVar25 + *puVar9);
  cVar4 = (char)puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(int *)pbVar18 = *(int *)pbVar18 - (int)unaff_EBP;
  bVar6 = *pbVar10;
  bVar7 = (byte)pbVar25;
  *pbVar10 = *pbVar10 + bVar7;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4 + CARRY1(bVar6,bVar7);
  *pbVar18 = *pbVar18 + cVar4;
  uVar11 = *puVar30;
  *(char *)puVar30 = (char)*puVar30 + 'r';
  *(char *)puVar30 = (char)*puVar30;
  cVar4 = (char)((uint)pbVar25 >> 8);
  if (SCARRY1((char)uVar11,'r')) {
    pbVar10 = pbVar10 + *(int *)(pbVar25 + -10);
  }
  else {
    while( true ) {
      *pbVar10 = *pbVar10 + (char)puVar9;
      uVar16 = (undefined3)((uint)puVar9 >> 8);
      cVar5 = (char)puVar9 + (char)*puVar30;
      pcVar8 = (char *)CONCAT31(uVar16,cVar5);
      puVar30 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),
                                 CONCAT11((char)((uint)puVar30 >> 8) +
                                          *(char *)((int)puVar30 + 0x7b),(char)puVar30));
      *pcVar8 = *pcVar8 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar11 = CONCAT31(uVar16,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar21 = (byte)uVar11;
      piVar12 = (int *)CONCAT22((short)(uVar11 >> 0x10),
                                CONCAT11((char)((uint)puVar9 >> 8) + in_AF,bVar21));
      *piVar12 = *piVar12 + (int)piVar12;
      uVar16 = (undefined3)((uint)piVar12 >> 8);
      bVar21 = bVar21 | *(byte *)(piVar12 + 0x354a);
      bVar21 = bVar21 - *(char *)CONCAT31(uVar16,bVar21);
      pbVar13 = (byte *)CONCAT31(uVar16,bVar21);
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar21;
      pbVar10 = pbVar10 + (-(uint)CARRY1(bVar6,bVar21) - *(int *)pbVar13);
      puVar9 = (uint *)(pbVar13 + 0xfc00);
      *pbVar25 = *pbVar25 + cVar4;
      uVar11 = *puVar9;
      bVar6 = (byte)puVar9;
      *(byte *)puVar9 = (byte)*puVar9 + bVar6;
      uVar2 = (uint)CARRY1((byte)uVar11,bVar6);
      uVar11 = *puVar30;
      uVar1 = *puVar30;
      *puVar30 = (uint)((byte *)(uVar1 + (int)puVar9) + uVar2);
      if (!CARRY4(uVar11,(uint)puVar9) && !CARRY4(uVar1 + (int)puVar9,uVar2)) break;
      *(byte *)puVar9 = (byte)*puVar9 + bVar6;
    }
  }
  uVar11 = (uint)puVar9 | *puVar9;
  uVar22 = SUB42(pbVar25,0);
  *pbVar10 = *pbVar10 + (char)uVar11;
  piVar12 = (int *)(uVar11 + 0xc1872);
  if (SCARRY4(uVar11,0xc1872)) {
    cVar5 = (char)piVar12;
    *(char *)piVar12 = *(char *)piVar12 + cVar5;
    *pbVar25 = *pbVar25 + cVar5;
    *(char *)piVar12 = *(char *)piVar12 + cVar5;
    *(char *)puVar30 = (char)*puVar30 + (char)pbVar18;
    *(char *)piVar12 = *(char *)piVar12 + cVar5;
    *(char *)((int)piVar12 * 2) = *(char *)((int)piVar12 * 2) + bVar7;
    pbVar13 = pbVar10;
    goto code_r0x00405117;
  }
  do {
    bVar6 = *pbVar10;
    bVar7 = (byte)piVar12;
    *pbVar10 = *pbVar10 + bVar7;
    if (CARRY1(bVar6,bVar7)) {
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      uVar16 = (undefined3)((uint)pbVar18 >> 8);
      bVar6 = (byte)pbVar18 | bRam396f1609;
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      pbVar18 = (byte *)CONCAT31(uVar16,bVar6 | *(byte *)CONCAT31(uVar16,bVar6));
      uVar16 = (undefined3)((uint)piVar12 >> 8);
      bVar7 = bVar7 | *pbVar25;
      pcVar8 = (char *)CONCAT31(uVar16,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        pbVar13 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,uVar22);
        uVar11 = CONCAT22((short)((uint)piVar12 >> 0x10),(ushort)bVar7);
        *pbVar13 = *pbVar13 + bVar7;
        pcVar8 = (char *)(uVar11 | 8);
        cVar5 = (char)((uint)puVar30 >> 8) + *(char *)((int)puVar30 + 0x7a);
        puVar9 = (uint *)CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(cVar5,(char)puVar30));
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar4 = (char)pcVar8 + 'o';
        piVar12 = (int *)CONCAT31((int3)(uVar11 >> 8),cVar4);
        *(char *)piVar12 = (char)*piVar12 + cVar4;
        *pbVar18 = *pbVar18 + 1;
        pbVar10 = pbVar10 + 8;
        out(*(undefined4 *)pbVar13,uVar22);
        pbVar25 = (byte *)((uint)pbVar25 ^ uRam08122c04);
        iVar14 = CONCAT31((int3)((uint)(*piVar12 * 0x17070600) >> 8),2);
        *(char *)(iVar14 * 2) = *(char *)(iVar14 * 2) - cVar5;
        do {
          bVar6 = (byte)iVar14;
          *pbVar10 = *pbVar10 + bVar6;
          bVar33 = CARRY1(bVar6,(byte)*puVar9);
          uVar16 = (undefined3)((uint)iVar14 >> 8);
          cVar4 = bVar6 + (byte)*puVar9;
          pbVar13 = (byte *)CONCAT31(uVar16,cVar4);
          uVar22 = in_DS;
          uVar3 = uStack_48;
          if (SCARRY1(bVar6,(byte)*puVar9) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar13 = *pbVar13 + cVar4;
          uVar11 = CONCAT31(uVar16,cVar4 + '\'') + 0x1ebd9f3;
          uStack_4c = (undefined1)in_ES;
          uStack_4b = (undefined1)((ushort)in_ES >> 8);
          piVar12 = (int *)(uVar11 ^ 0x73060000);
          pbVar18 = pbVar18 + 1;
          *piVar12 = (int)(*piVar12 + (int)piVar12);
          puVar9 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),
                                    CONCAT11((byte)((uint)puVar9 >> 8) | unaff_EBP[0x7e],
                                             (char)puVar9));
          cVar4 = (char)uVar11;
          *(char *)piVar12 = (char)*piVar12 + cVar4;
          uVar11 = CONCAT31((int3)((uint)piVar12 >> 8),cVar4 + '\x02');
          bVar33 = 0xd9f2d2da < uVar11;
          iVar14 = uVar11 + 0x260d2d25;
          pcVar8 = unaff_EBP;
          do {
            uVar16 = (undefined3)((uint)iVar14 >> 8);
            bVar7 = (char)iVar14 + -2 + bVar33;
            pbVar13 = (byte *)CONCAT31(uVar16,bVar7);
            bVar6 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar7;
            bVar21 = (byte)puVar9;
            uStack_48 = in_ES;
            if (CARRY1(bVar6,bVar7)) {
              *pbVar13 = *pbVar13 + bVar7;
              puVar9 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),
                                        CONCAT11((byte)((uint)puVar9 >> 8) | pcVar8[0x7f],bVar21));
              *pbVar13 = *pbVar13 + bVar7;
              pbVar13 = (byte *)CONCAT31(uVar16,bVar7 + 0x2a);
              *pbVar13 = *pbVar13 + bVar7 + 0x2a;
              *(byte *)puVar9 = (byte)*puVar9 + (char)pbVar25;
              uVar22 = in_DS;
              while( true ) {
                in_DS = uVar22;
                bVar7 = (byte)pbVar13;
                *pbVar25 = *pbVar25 ^ bVar7;
                *pbVar25 = *pbVar25 + (char)puVar9;
                *pbVar13 = *pbVar13 + bVar7;
                *(byte *)puVar9 = (byte)*puVar9 + (char)((uint)pbVar25 >> 8);
                bVar6 = *pbVar13;
                *pbVar13 = *pbVar13 + bVar7;
                uVar11 = *puVar9;
                uVar1 = *puVar9;
                *puVar9 = (uint)(pbVar13 + uVar1 + CARRY1(bVar6,bVar7));
                uVar16 = (undefined3)((uint)pbVar13 >> 8);
                if (CARRY4(uVar11,(uint)pbVar13) ||
                    CARRY4((uint)(pbVar13 + uVar1),(uint)CARRY1(bVar6,bVar7))) break;
                *pbVar10 = *pbVar10 + bVar7;
                pcVar19 = (char *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                           CONCAT11((char)((uint)pbVar18 >> 8) + *pbVar13,
                                                    (char)pbVar18));
                *pbVar10 = *pbVar10 + bVar7;
                piVar12 = (int *)CONCAT31(uVar16,bVar7 | (byte)*puVar9);
                pbVar18 = pbVar10;
                while( true ) {
                  pbVar10 = pbVar18 + 4;
                  out(*(undefined4 *)pbVar18,(short)pbVar25);
                  pbVar25 = pbVar25 + 1;
                  *piVar12 = (int)(*piVar12 + (int)piVar12);
                  bVar7 = (byte)((uint)pcVar19 >> 8) | *pbVar25;
                  uVar16 = (undefined3)((uint)piVar12 >> 8);
                  bVar6 = (byte)piVar12 ^ *pbVar25;
                  pcVar24 = (char *)CONCAT31(uVar16,bVar6);
                  cRam282b0000 = cRam282b0000 - bVar7;
                  *pcVar24 = *pcVar24 + bVar6;
                  unaff_EBP = pcVar8 + -*(int *)pbVar25;
                  uStack_4c = (undefined1)in_DS;
                  uStack_4b = (undefined1)((ushort)in_DS >> 8);
                  cVar4 = *(char *)((int)piVar32 + 0x17);
                  *pcVar24 = *pcVar24 + bVar6;
                  pbVar18 = (byte *)CONCAT22((short)((uint)pcVar19 >> 0x10),
                                             CONCAT11(bVar7 + cVar4 | *pbVar25,(char)pcVar19));
                  *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
                  *(byte *)((int)pcVar24 * 2) = *(byte *)((int)pcVar24 * 2) ^ bVar6;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  bVar6 = bVar6 + in_AF * -6;
                  pbVar13 = (byte *)CONCAT31(uVar16,bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
                  *(char *)((int)pbVar13 * 2) =
                       *(char *)((int)pbVar13 * 2) + (char)((uint)pbVar25 >> 8);
                  bVar33 = CARRY1(*pbVar18,(byte)pbVar25);
                  *pbVar18 = *pbVar18 + (byte)pbVar25;
                  uVar22 = in_DS;
                  uVar3 = in_ES;
GenerateStatusText:
                  in_DS = uVar3;
                  pcVar8 = unaff_EBP;
                  uStack_48 = in_DS;
                  if (!bVar33) break;
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  iVar14 = CONCAT31((int3)((uint)pbVar18 >> 8),(byte)pbVar18 | *pbVar25);
                  uVar22 = (undefined2)((uint)puVar9 >> 0x10);
                  cVar29 = (char)((uint)puVar9 >> 8) + *(byte *)((int)puVar9 + 0x7d);
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  *(char *)piVar32 = (char)*piVar32 - (char)((uint)pbVar18 >> 8);
                  iVar14 = iVar14 - *(int *)(iVar14 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar29,(char)puVar9)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar10,(short)pbVar25);
                  pbVar25 = (byte *)CONCAT22(uStack_4a,CONCAT11(uStack_4b,uStack_4c));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar18 = pbVar10 + 8;
                  out(*(undefined4 *)(pbVar10 + 4),CONCAT11(uStack_4b,uStack_4c));
                  pcVar8 = unaff_EBP + 1;
                  cVar5 = (char)iVar14;
                  pcVar19 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                             CONCAT11((byte)((uint)iVar14 >> 8) |
                                                      *(byte *)((int)piVar32 + 0x46),cVar5));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_4b,uStack_4c);
                  uVar16 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar18,0xf0)) >> 8);
                  piVar12 = (int *)CONCAT31(uVar16,0x5f);
                  piVar32 = (int *)((int)piVar32 + 1);
                  *piVar12 = (int)(*piVar12 + (int)piVar12);
                  puVar9 = (uint *)CONCAT22(uVar22,CONCAT11(cVar29 + cVar4 | pbVar10[-0x78],
                                                            (char)puVar9));
                  *(char *)piVar12 = (char)*piVar12 + '_';
                  puVar30 = (uint *)CONCAT31(uVar16,0x8c);
                  *(byte **)(pbVar18 + (int)piVar32 * 8) =
                       pbVar25 + *(int *)(pbVar18 + (int)piVar32 * 8);
                  bVar6 = *pbVar18;
                  *pbVar18 = *pbVar18 + 0x8c;
                  if (bVar6 < 0x74) {
                    *pbVar25 = *pbVar25 + cVar5;
                    *(byte *)puVar9 = (byte)*puVar9 >> 1;
                    *(char *)puVar30 = (char)*puVar30 + -0x74;
                    *puVar30 = (uint)(pcVar8 + *puVar30);
                    *puVar30 = *puVar30 << 1 | (uint)((int)*puVar30 < 0);
                    *pbVar25 = *pbVar25 + cVar5;
                    unaff_EBP[2] = unaff_EBP[2] - cVar5;
                    *pbVar25 = *pbVar25 + cVar5;
                    pbVar10 = (byte *)CONCAT31(uVar16,0x83);
                    puVar30 = puVar9;
                    goto code_r0x00405312;
                  }
                  *puVar30 = (uint)(*puVar30 + (int)puVar30);
                  piVar12 = (int *)(CONCAT31(uVar16,(byte)puVar30[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar30[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar12 = (int *)((int)piVar12 + *(int *)pbVar18);
                }
              }
              *pbVar25 = *pbVar25 + bVar7;
              *(byte *)puVar9 = (byte)*puVar9 - (char)pbVar25;
              *pbVar13 = *pbVar13 + bVar7;
              pbVar13 = (byte *)CONCAT31(uVar16,bVar7 | (byte)*puVar9);
            }
            else {
              cVar4 = (char)pbVar18;
              *pbVar25 = *pbVar25 + cVar4;
              *(byte **)pbVar13 = pbVar25 + *(int *)pbVar13;
              *pbVar13 = *pbVar13 + bVar7;
              bVar7 = bVar7 + *pbVar13;
              pbVar13 = (byte *)CONCAT31(uVar16,bVar7);
              if (-1 < (char)bVar7) {
                *(byte *)puVar9 = (byte)*puVar9 + bVar21;
                out(*(undefined4 *)pbVar10,(short)pbVar25);
                pbVar25 = pbVar25 + 1;
                *pbVar13 = *pbVar13 + bVar7;
                puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),
                                          bVar21 | (byte)((uint)iVar14 >> 8));
                cVar5 = bVar7 - *pbVar18;
                pcVar19 = (char *)CONCAT31(uVar16,cVar5);
                *pcVar19 = *pcVar19 + cVar5 + (bVar7 < *pbVar18);
                *pbVar25 = *pbVar25 + cVar5;
                pcVar19 = (char *)((int)pcVar19 * 2 + 0x79);
                *pcVar19 = *pcVar19 + (char)((uint)pbVar25 >> 8);
                pbVar13 = (byte *)in((short)pbVar25);
                pbVar10 = pbVar10 + 4;
              }
              *pbVar10 = *pbVar10 + cVar4;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              uStack_4c = (undefined1)in_DS;
              uStack_4b = (undefined1)((ushort)in_DS >> 8);
              bVar6 = *pbVar13;
              bVar23 = (byte)((uint)pbVar18 >> 8);
              bVar21 = bVar23 + *pbVar13;
              iVar14 = *(int *)pbVar13;
              *pbVar25 = *pbVar25 + cVar4;
              bVar7 = (char)(pbVar13 + (uint)CARRY1(bVar23,bVar6) + iVar14) - (byte)*puVar9;
              pbVar13 = (byte *)CONCAT31((int3)((uint)(pbVar13 + (uint)CARRY1(bVar23,bVar6) + iVar14
                                                      ) >> 8),bVar7);
              *(byte *)puVar9 = (byte)*puVar9 ^ bVar7;
              *pcVar8 = *pcVar8 + (char)puVar9;
              *pbVar13 = *pbVar13 + bVar7;
              *pbVar13 = *pbVar13 + bVar7;
              *pbVar13 = *pbVar13 + bVar7;
              pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                         CONCAT11(bVar21 + *pbVar13,cVar4));
              pbVar13 = pbVar13 + (uint)CARRY1(bVar21,*pbVar13) + *(int *)pbVar13;
              *pbVar25 = *pbVar25 + cVar4;
              pbVar10 = pbVar10 + *(int *)(pbVar25 + 0x3e);
            }
            *pbVar10 = *pbVar10 + (char)pbVar13;
            cVar4 = (char)pbVar13 + 'r';
            pbVar10 = pbVar10 + -1;
            uVar11 = CONCAT31((int3)((uint)pbVar13 >> 8),cVar4);
            *pbVar10 = *pbVar10 + cVar4;
            bVar33 = 0xfff38f8d < uVar11;
            iVar14 = uVar11 + 0xc7072;
            unaff_EBP = pcVar8;
          } while (SCARRY4(uVar11,0xc7072));
        } while( true );
      }
      *pcVar8 = *pcVar8 + bVar7;
      bVar7 = bVar7 + 0x6f;
      pbVar13 = (byte *)CONCAT31(uVar16,bVar7);
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      uVar16 = (undefined3)
               ((uint)(pbVar13 + (uint)CARRY1(bVar6,bVar7) + *(int *)(pbVar18 + (int)pbVar25)) >> 8)
      ;
      cVar5 = (char)(pbVar13 + (uint)CARRY1(bVar6,bVar7) + *(int *)(pbVar18 + (int)pbVar25)) + 'E';
      pcVar8 = (char *)CONCAT31(uVar16,cVar5);
      *pcVar8 = *pcVar8 + cVar5;
      cVar5 = cVar5 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar16,cVar5);
      *pcVar8 = *pcVar8 + cVar5;
      puVar9 = (uint *)CONCAT31(uVar16,cVar5 + *pcVar8);
      *(char *)puVar9 = (char)*puVar9 + cVar5 + *pcVar8;
      pbVar13 = (byte *)((uint)puVar9 | *puVar9);
      bVar6 = *pbVar13;
      bVar7 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      piVar12 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7 + CARRY1(bVar6,bVar7));
      pbVar13 = pbVar10;
code_r0x00405117:
      *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
      puVar30 = (uint *)((int)puVar30 - *puVar30);
      pbVar10 = pbVar13 + 4;
      out(*(undefined4 *)pbVar13,uVar22);
    }
    *pbVar25 = *pbVar25 + (char)pbVar18;
    bVar33 = puVar30 < (uint *)*piVar12;
    puVar30 = (uint *)((int)puVar30 - *piVar12);
    bVar6 = (byte)((uint)pbVar18 >> 8);
    *(char *)((int)piVar32 + 0x39) = (*(char *)((int)piVar32 + 0x39) - bVar6) - bVar33;
    *piVar12 = (int)(*piVar12 + (int)piVar12);
    uVar11 = *puVar30;
    *(int *)((int)piVar32 + 0x39) = *(int *)((int)piVar32 + 0x39) - (int)unaff_EBP;
    *piVar12 = (int)(*piVar12 + (int)piVar12);
    pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                               CONCAT11(bVar6 | (byte)uVar11 | (byte)*puVar30,(char)pbVar18));
    *(char *)(piVar12 + 10) = (char)piVar12[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
  bVar6 = (char)piVar12 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar12 >> 8),bVar6);
  *pbVar10 = *pbVar10 ^ bVar6;
  *(byte *)puVar9 = (byte)*puVar9 + (char)((uint)pcVar19 >> 8);
  bVar6 = *pbVar25;
  *pbVar25 = *pbVar25 + (byte)pcVar19;
  piVar12 = (int *)(((uint)pbVar10 | 0x1496f09) + *piVar32 + (uint)CARRY1(bVar6,(byte)pcVar19));
  pbVar13 = pbVar18 + 4;
  out(*(undefined4 *)pbVar18,(short)pbVar25);
  pbVar26 = pbVar25 + -1;
  *piVar12 = *piVar12 + (int)piVar12;
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(byte)pbVar26 | (byte)*puVar9);
  cVar4 = (char)piVar12 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar12 >> 8),cVar4);
  puVar30 = puVar9;
  pbVar18 = pbVar13;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar25 = *pbVar25 - (char)((uint)pbVar26 >> 8);
    *pbVar10 = *pbVar10 + cVar4;
code_r0x00405396:
    bVar6 = *pbVar10;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    *(byte **)pbVar13 = pbVar10 + (uint)CARRY1(bVar6,bVar7) + *(int *)pbVar13;
    out(*(undefined4 *)pbVar13,(short)pbVar25);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar8 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                              CONCAT11((byte)((uint)pbVar10 >> 8) | pbVar13[4],bVar7));
    *(int *)((int)piVar32 + -1) = (int)(pcVar8 + *(int *)((int)piVar32 + -1));
    out(*(undefined4 *)(pbVar13 + 4),(short)pbVar25);
    *pcVar8 = *pcVar8 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar12 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar9 = (uint *)((int)puVar30 + -1);
  *piVar12 = *piVar12 + (int)piVar12;
  uVar16 = (undefined3)((uint)pbVar25 >> 8);
  piVar12 = (int *)((int)piVar12 + 0x1b7e);
  bVar21 = (byte)pbVar25 | *(byte *)puVar9 | *(byte *)puVar9;
  iRam04115f2c = iRam04115f2c + (int)piVar12;
  out(*(undefined4 *)pbVar18,(short)CONCAT31(uVar16,bVar21));
  *piVar12 = *piVar12 + (int)piVar12;
  bVar21 = bVar21 | (byte)piVar12;
  iVar27 = CONCAT31(uVar16,bVar21);
  pbVar10 = (byte *)((int)piVar12 - *piVar12);
  cVar4 = (char)pbVar10;
  *pcVar19 = *pcVar19 + cVar4;
  cVar5 = (char)pcVar19 - bVar21;
  *pbVar10 = *pbVar10 + cVar4;
  uVar22 = (undefined2)((uint)pcVar19 >> 0x10);
  bVar7 = (byte)((uint)pcVar19 >> 8) | *pbVar10;
  pcVar8 = pcVar8 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar6 = *(byte *)(CONCAT22(uVar22,CONCAT11(bVar7,cVar5)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar8;
  *pbVar10 = *pbVar10 + cVar4;
  bVar6 = bVar7 | bVar6 | *(byte *)puVar9;
  iVar20 = CONCAT22(uVar22,CONCAT11(bVar6,cVar5));
  pbVar26 = (byte *)((uint)(pbVar18 + 4) ^ *(uint *)(iVar27 + -0x43));
  iVar14 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar14,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar4;
  }
  pbVar25 = pbVar10 + 0x5674;
  piVar32 = (int *)((int)piVar32 +
                   (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar26 + -0x7f)));
  bVar7 = (byte)pbVar25;
  *pbVar25 = *pbVar25 + bVar7;
  uVar17 = (undefined3)((uint)pbVar25 >> 8);
  bVar23 = bVar7 + 0x2d;
  piVar12 = (int *)CONCAT31(uVar17,bVar23);
  *(uint *)(pbVar26 + (int)piVar32 * 8) =
       *(int *)(pbVar26 + (int)piVar32 * 8) + iVar27 + (uint)(0xd2 < bVar7);
  bVar7 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar23;
  if (!CARRY1(bVar7,bVar23)) {
    do {
      pbVar25 = (byte *)(iVar27 + 1);
      bVar7 = (byte)piVar12;
      *(byte *)piVar12 = (char)*piVar12 + bVar7;
      bVar21 = (byte)((uint)piVar12 >> 8);
      bVar23 = (byte)puVar9 | bVar21;
      puVar30 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),bVar23);
      out(*(undefined4 *)pbVar26,(short)pbVar25);
      *(byte *)piVar12 = (char)*piVar12 + bVar7;
      uVar22 = (undefined2)((uint)iVar20 >> 0x10);
      cVar4 = (char)iVar20;
      pbVar10 = (byte *)CONCAT22(uVar22,CONCAT11((byte)((uint)iVar20 >> 8) | *pbVar25,cVar4));
      bVar6 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar7;
      *(byte *)piVar12 = (char)*piVar12 + bVar7 + CARRY1(bVar6,bVar7);
      *pbVar25 = *pbVar25 + bVar7;
      *(byte *)piVar32 = (char)*piVar32 + bVar21;
      *(int *)((int)piVar12 * 2) =
           *(int *)((int)piVar12 * 2) + CONCAT22(uVar22,CONCAT11(0x1c,cVar4));
      *(byte *)piVar12 = (char)*piVar12 + bVar7;
      cVar5 = (char)pbVar25;
      *(byte *)puVar30 = (byte)*puVar30 + cVar5;
      *(byte *)((int)piVar12 * 2) = *(byte *)((int)piVar12 * 2) ^ bVar7;
      *(byte *)piVar12 = (char)*piVar12 + bVar7;
      pbVar10 = pbVar26 + 8;
      out(*(undefined4 *)(pbVar26 + 4),(short)pbVar25);
      piVar12 = (int *)0xa0a0000;
      *pbVar25 = *pbVar25;
      bVar7 = cVar4 - cVar5;
      iVar20 = CONCAT22(uVar22,CONCAT11(*(byte *)(piVar32 + 0x14) | 0x1c | bRam0ca87216,bVar7));
      *pbVar25 = *pbVar25;
      bVar6 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar7;
      if (!CARRY1(bVar6,bVar7)) {
        piVar12 = (int *)0x1e7b7000;
        bVar6 = (byte)((uint)puVar9 >> 8) | *(byte *)(iVar27 + 3);
        puVar30 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),CONCAT11(bVar6,bVar23));
        if (bVar6 != 0) {
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar5 + pbVar10[(int)piVar32 * 8]);
          piVar12 = (int *)0x6d7d7000;
          iVar20 = iVar20 + 1;
        }
      }
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      iVar27 = CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | pbVar10[(int)piVar32 * 8]);
      *(char *)piVar12 = (char)*piVar12;
      piVar12 = (int *)CONCAT31((int3)((uint)piVar12 >> 8),0xf9);
      *piVar32 = (int)((int)piVar12 + *piVar32 + 1);
      pbVar26 = pbVar26 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar27);
      puVar9 = puVar30;
    } while( true );
  }
  *piVar12 = (int)(*piVar12 + (int)piVar12);
  bVar23 = bVar23 | *(byte *)((int)piVar12 + 0x4000081);
  piVar12 = (int *)CONCAT31(uVar17,bVar23);
  if ('\0' < (char)bVar23) {
    *(byte *)piVar12 = (char)*piVar12 + bVar23;
    puVar15 = (uint *)CONCAT31(uVar17,bVar23 + 0x28);
    *puVar15 = *puVar15 ^ (uint)puVar15;
    *(byte *)puVar9 = *(byte *)puVar9 + bVar6;
    cVar4 = (bVar23 + 0x28) - bVar6;
    pcVar8 = (char *)CONCAT31(uVar17,cVar4);
    *pcVar8 = *pcVar8 + cVar4;
    pbVar25 = (byte *)CONCAT31(uVar16,bVar21 | *(byte *)puVar9);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar9 >> 0x10),
                               CONCAT11((char)((uint)puVar9 >> 8) + *(byte *)((int)puVar30 + 0x7d),
                                        (char)puVar9));
    *pcVar8 = *pcVar8 + cVar4;
    pbVar10 = (byte *)CONCAT31(uVar17,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar17,cVar4 + 0x39U));
    *pcVar19 = *pcVar19 + bVar6;
    pbVar13 = pbVar26 + 4;
    out(*(undefined4 *)pbVar26,(short)pbVar25);
    goto code_r0x00405396;
  }
  pbVar18 = pbVar26 + 4;
  out(*(undefined4 *)pbVar26,(short)iVar27);
  pcVar19 = (char *)(iVar20 + -1);
  *piVar12 = (int)(*piVar12 + (int)piVar12);
  pbVar25 = (byte *)CONCAT31(uVar16,bVar21 | *(byte *)puVar9);
  goto code_r0x004052ee;
}


