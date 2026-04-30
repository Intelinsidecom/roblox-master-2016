/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040502d
 * Raw Name    : get_ErrorReporter
 * Demangled   : get_ErrorReporter
 * Prototype   : pointer get_ErrorReporter(char * param_1, byte * param_2)
 * Local Vars  : uStack_3f, uStack_40, uStack_3c, uStack_3e, uVar2, uVar1, bVar4, uVar3, bVar6, cVar5, bVar8, bVar7, pcVar9, in_EAX, puVar11, piVar10, iVar13, pbVar12, puVar15, pcVar14, uVar17, uVar16, pbVar19, cVar18, iVar21, pcVar20, pbVar23, uVar22, iVar25, param_1, param_2, pbVar24, uVar26, unaff_EBX, cVar28, puVar27, unaff_EBP, cVar29, pbVar30, unaff_ESI, piVar31, unaff_EDI, in_DS, in_ES, in_AF, bVar32
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

undefined * __fastcall get_ErrorReporter(char *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char *in_EAX;
  undefined3 uVar16;
  char *pcVar9;
  int *piVar10;
  uint *puVar11;
  byte *pbVar12;
  int iVar13;
  char *pcVar14;
  undefined3 uVar17;
  uint *puVar15;
  char cVar18;
  byte *pbVar19;
  char *pcVar20;
  undefined2 uVar22;
  int iVar21;
  byte *pbVar23;
  byte *pbVar24;
  int iVar25;
  char cVar28;
  char cVar29;
  int unaff_EBX;
  uint uVar26;
  uint *puVar27;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar30;
  int unaff_EDI;
  int *piVar31;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar32;
  byte in_AF;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  
                    /* .NET CLR Managed Code */
  uVar22 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar29 = (char)unaff_EBX;
  cVar28 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x7c);
  pcVar9 = (char *)CONCAT22(uVar22,CONCAT11(cVar28,cVar29));
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar16 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (char)in_EAX + 0x2aU & *param_2;
  piVar31 = (int *)(unaff_EDI + *(int *)(unaff_EBP + 0x7c));
  *(char *)CONCAT31(uVar16,bVar4) = *(char *)CONCAT31(uVar16,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar30 = (byte *)CONCAT31(uVar16,bVar4);
  *pbVar30 = *pbVar30 + bVar4;
  *pcVar9 = *pcVar9 + cVar29;
  *param_2 = *param_2 ^ bVar4;
  *pcVar9 = *pcVar9 + bVar4;
  bVar6 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar4;
  cVar5 = (bVar4 - *pbVar30) - CARRY1(bVar6,bVar4);
  *param_1 = *param_1 + (byte)param_2;
  cVar28 = cVar28 + pcVar9[0x7b];
  *(char *)CONCAT31(uVar16,cVar5) = *(char *)CONCAT31(uVar16,cVar5) + cVar5;
  pcVar9 = (char *)CONCAT31(uVar16,cVar5 + 'o');
  *pcVar9 = *pcVar9 + cVar5 + 'o';
  pcVar9 = pcVar9 + 0x2ed7fde6;
  cVar18 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar18;
  cVar5 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar28,cVar29)) + 0x7b);
  *pcVar9 = *pcVar9 + cVar18;
  piVar10 = (int *)(CONCAT31((int3)((uint)pcVar9 >> 8),cVar18 + 'o') + 0x6f060000);
  *piVar10 = *piVar10 + (int)piVar10;
  uVar17 = (undefined3)((uint)param_2 >> 8);
  bVar4 = (byte)param_2 | *unaff_ESI;
  pbVar12 = (byte *)CONCAT31(uVar17,bVar4);
  uVar26 = CONCAT22(uVar22,CONCAT11(cVar28 + cVar5,cVar29)) | (uint)unaff_ESI;
  cVar29 = (char)((uint)param_2 >> 8);
  uVar16 = (undefined3)((uint)piVar10 >> 8);
  bVar6 = (byte)piVar10 | *pbVar12;
  pbVar23 = (byte *)CONCAT31(uVar16,bVar6);
  cVar18 = (char)param_1 - bVar4;
  pbVar19 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),cVar18);
  *pbVar23 = *pbVar23 + bVar6;
  out(*(undefined4 *)unaff_ESI,(short)pbVar12);
  *pbVar23 = bVar6;
  *pbVar12 = *pbVar12 + cVar18;
  pbVar30 = unaff_ESI + 8;
  out(*(undefined4 *)(unaff_ESI + 4),(short)pbVar12);
  *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
  puVar27 = (uint *)(CONCAT31((int3)(uVar26 >> 8),(char)uVar26 - cVar29) | (uint)pbVar30);
  bVar4 = (bVar4 | *pbVar30) + (char)*piVar31;
  pbVar23 = (byte *)CONCAT31(uVar17,bVar4);
  cVar5 = bVar6 - (char)*piVar31;
  cVar5 = cVar5 - *(char *)CONCAT31(uVar16,cVar5);
  puVar11 = (uint *)CONCAT31(uVar16,cVar5);
  *puVar11 = (uint)(pbVar23 + *puVar11);
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  *(int *)pbVar19 = *(int *)pbVar19 - (int)unaff_EBP;
  bVar6 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar4;
  *(byte *)puVar11 = (byte)*puVar11 + cVar5 + CARRY1(bVar6,bVar4);
  *pbVar19 = *pbVar19 + cVar5;
  uVar26 = *puVar27;
  *(char *)puVar27 = (char)*puVar27 + 'r';
  *(char *)puVar27 = (char)*puVar27;
  if (SCARRY1((char)uVar26,'r')) {
    pbVar30 = pbVar30 + *(int *)(pbVar23 + -10);
  }
  else {
    while( true ) {
      *pbVar30 = *pbVar30 + (char)puVar11;
      uVar16 = (undefined3)((uint)puVar11 >> 8);
      cVar5 = (char)puVar11 + (char)*puVar27;
      pcVar9 = (char *)CONCAT31(uVar16,cVar5);
      puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                                 CONCAT11((char)((uint)puVar27 >> 8) +
                                          *(char *)((int)puVar27 + 0x7b),(char)puVar27));
      *pcVar9 = *pcVar9 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar26 = CONCAT31(uVar16,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar26;
      piVar10 = (int *)CONCAT22((short)(uVar26 >> 0x10),
                                CONCAT11((char)((uint)puVar11 >> 8) + in_AF,bVar7));
      *piVar10 = *piVar10 + (int)piVar10;
      uVar16 = (undefined3)((uint)piVar10 >> 8);
      bVar7 = bVar7 | *(byte *)(piVar10 + 0x354a);
      bVar7 = bVar7 - *(char *)CONCAT31(uVar16,bVar7);
      pbVar12 = (byte *)CONCAT31(uVar16,bVar7);
      bVar6 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      pbVar30 = pbVar30 + (-(uint)CARRY1(bVar6,bVar7) - *(int *)pbVar12);
      puVar11 = (uint *)(pbVar12 + 0xfc00);
      *pbVar23 = *pbVar23 + cVar29;
      uVar26 = *puVar11;
      bVar6 = (byte)puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + bVar6;
      uVar2 = (uint)CARRY1((byte)uVar26,bVar6);
      uVar26 = *puVar27;
      uVar1 = *puVar27;
      *puVar27 = (uint)((byte *)(uVar1 + (int)puVar11) + uVar2);
      if (!CARRY4(uVar26,(uint)puVar11) && !CARRY4(uVar1 + (int)puVar11,uVar2)) break;
      *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    }
  }
  uVar26 = (uint)puVar11 | *puVar11;
  uVar22 = SUB42(pbVar23,0);
  *pbVar30 = *pbVar30 + (char)uVar26;
  piVar10 = (int *)(uVar26 + 0xc1872);
  if (SCARRY4(uVar26,0xc1872)) {
    cVar5 = (char)piVar10;
    *(char *)piVar10 = *(char *)piVar10 + cVar5;
    *pbVar23 = *pbVar23 + cVar5;
    *(char *)piVar10 = *(char *)piVar10 + cVar5;
    *(char *)puVar27 = (char)*puVar27 + cVar18;
    *(char *)piVar10 = *(char *)piVar10 + cVar5;
    *(char *)((int)piVar10 * 2) = *(char *)((int)piVar10 * 2) + bVar4;
    pbVar12 = pbVar30;
    goto code_r0x00405117;
  }
  do {
    bVar6 = *pbVar30;
    bVar4 = (byte)piVar10;
    *pbVar30 = *pbVar30 + bVar4;
    if (CARRY1(bVar6,bVar4)) {
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      uVar16 = (undefined3)((uint)pbVar19 >> 8);
      bVar6 = (byte)pbVar19 | bRam396f1609;
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      pbVar19 = (byte *)CONCAT31(uVar16,bVar6 | *(byte *)CONCAT31(uVar16,bVar6));
      uVar16 = (undefined3)((uint)piVar10 >> 8);
      bVar4 = bVar4 | *pbVar23;
      pcVar9 = (char *)CONCAT31(uVar16,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        pbVar12 = pbVar30 + 4;
        out(*(undefined4 *)pbVar30,uVar22);
        uVar26 = CONCAT22((short)((uint)piVar10 >> 0x10),(ushort)bVar4);
        *pbVar12 = *pbVar12 + bVar4;
        pcVar9 = (char *)(uVar26 | 8);
        cVar18 = (char)((uint)puVar27 >> 8) + *(char *)((int)puVar27 + 0x7a);
        puVar11 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(cVar18,(char)puVar27));
        *pcVar9 = *pcVar9 + (char)pcVar9;
        cVar5 = (char)pcVar9 + 'o';
        piVar10 = (int *)CONCAT31((int3)(uVar26 >> 8),cVar5);
        *(char *)piVar10 = (char)*piVar10 + cVar5;
        *pbVar19 = *pbVar19 + 1;
        pbVar30 = pbVar30 + 8;
        out(*(undefined4 *)pbVar12,uVar22);
        pbVar23 = (byte *)((uint)pbVar23 ^ uRam08122c04);
        iVar13 = CONCAT31((int3)((uint)(*piVar10 * 0x17070600) >> 8),2);
        *(char *)(iVar13 * 2) = *(char *)(iVar13 * 2) - cVar18;
        do {
          bVar6 = (byte)iVar13;
          *pbVar30 = *pbVar30 + bVar6;
          bVar32 = CARRY1(bVar6,(byte)*puVar11);
          uVar16 = (undefined3)((uint)iVar13 >> 8);
          cVar5 = bVar6 + (byte)*puVar11;
          pbVar12 = (byte *)CONCAT31(uVar16,cVar5);
          uVar22 = in_DS;
          uVar3 = uStack_3c;
          if (SCARRY1(bVar6,(byte)*puVar11) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar12 = *pbVar12 + cVar5;
          uVar26 = CONCAT31(uVar16,cVar5 + '\'') + 0x1ebd9f3;
          uStack_40 = (undefined1)in_ES;
          uStack_3f = (undefined1)((ushort)in_ES >> 8);
          piVar10 = (int *)(uVar26 ^ 0x73060000);
          pbVar19 = pbVar19 + 1;
          *piVar10 = (int)(*piVar10 + (int)piVar10);
          puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                     CONCAT11((byte)((uint)puVar11 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar11));
          cVar5 = (char)uVar26;
          *(char *)piVar10 = (char)*piVar10 + cVar5;
          uVar26 = CONCAT31((int3)((uint)piVar10 >> 8),cVar5 + '\x02');
          bVar32 = 0xd9f2d2da < uVar26;
          iVar13 = uVar26 + 0x260d2d25;
          pcVar9 = unaff_EBP;
          do {
            uVar16 = (undefined3)((uint)iVar13 >> 8);
            bVar4 = (char)iVar13 + -2 + bVar32;
            pbVar12 = (byte *)CONCAT31(uVar16,bVar4);
            bVar6 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar4;
            bVar7 = (byte)puVar11;
            uStack_3c = in_ES;
            if (CARRY1(bVar6,bVar4)) {
              *pbVar12 = *pbVar12 + bVar4;
              puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                         CONCAT11((byte)((uint)puVar11 >> 8) | pcVar9[0x7f],bVar7));
              *pbVar12 = *pbVar12 + bVar4;
              pbVar12 = (byte *)CONCAT31(uVar16,bVar4 + 0x2a);
              *pbVar12 = *pbVar12 + bVar4 + 0x2a;
              *(byte *)puVar11 = (byte)*puVar11 + (char)pbVar23;
              uVar22 = in_DS;
              while( true ) {
                in_DS = uVar22;
                bVar4 = (byte)pbVar12;
                *pbVar23 = *pbVar23 ^ bVar4;
                *pbVar23 = *pbVar23 + (char)puVar11;
                *pbVar12 = *pbVar12 + bVar4;
                *(byte *)puVar11 = (byte)*puVar11 + (char)((uint)pbVar23 >> 8);
                bVar6 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar4;
                uVar26 = *puVar11;
                uVar1 = *puVar11;
                *puVar11 = (uint)(pbVar12 + uVar1 + CARRY1(bVar6,bVar4));
                uVar16 = (undefined3)((uint)pbVar12 >> 8);
                if (CARRY4(uVar26,(uint)pbVar12) ||
                    CARRY4((uint)(pbVar12 + uVar1),(uint)CARRY1(bVar6,bVar4))) break;
                *pbVar30 = *pbVar30 + bVar4;
                pcVar20 = (char *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                           CONCAT11((char)((uint)pbVar19 >> 8) + *pbVar12,
                                                    (char)pbVar19));
                *pbVar30 = *pbVar30 + bVar4;
                piVar10 = (int *)CONCAT31(uVar16,bVar4 | (byte)*puVar11);
                pbVar19 = pbVar30;
                while( true ) {
                  pbVar30 = pbVar19 + 4;
                  out(*(undefined4 *)pbVar19,(short)pbVar23);
                  pbVar23 = pbVar23 + 1;
                  *piVar10 = (int)(*piVar10 + (int)piVar10);
                  bVar4 = (byte)((uint)pcVar20 >> 8) | *pbVar23;
                  uVar16 = (undefined3)((uint)piVar10 >> 8);
                  bVar6 = (byte)piVar10 ^ *pbVar23;
                  pcVar14 = (char *)CONCAT31(uVar16,bVar6);
                  cRam282b0000 = cRam282b0000 - bVar4;
                  *pcVar14 = *pcVar14 + bVar6;
                  unaff_EBP = pcVar9 + -*(int *)pbVar23;
                  uStack_40 = (undefined1)in_DS;
                  uStack_3f = (undefined1)((ushort)in_DS >> 8);
                  cVar5 = *(char *)((int)piVar31 + 0x17);
                  *pcVar14 = *pcVar14 + bVar6;
                  pbVar19 = (byte *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                                             CONCAT11(bVar4 + cVar5 | *pbVar23,(char)pcVar20));
                  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
                  *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar6;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  bVar6 = bVar6 + in_AF * -6;
                  pbVar12 = (byte *)CONCAT31(uVar16,bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
                  *(char *)((int)pbVar12 * 2) =
                       *(char *)((int)pbVar12 * 2) + (char)((uint)pbVar23 >> 8);
                  bVar32 = CARRY1(*pbVar19,(byte)pbVar23);
                  *pbVar19 = *pbVar19 + (byte)pbVar23;
                  uVar22 = in_DS;
                  uVar3 = in_ES;
GenerateStatusText:
                  in_DS = uVar3;
                  pcVar9 = unaff_EBP;
                  uStack_3c = in_DS;
                  if (!bVar32) break;
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  iVar13 = CONCAT31((int3)((uint)pbVar19 >> 8),(byte)pbVar19 | *pbVar23);
                  uVar22 = (undefined2)((uint)puVar11 >> 0x10);
                  cVar29 = (char)((uint)puVar11 >> 8) + *(byte *)((int)puVar11 + 0x7d);
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  *(char *)piVar31 = (char)*piVar31 - (char)((uint)pbVar19 >> 8);
                  iVar13 = iVar13 - *(int *)(iVar13 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar29,(char)puVar11)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar30,(short)pbVar23);
                  pbVar23 = (byte *)CONCAT22(uStack_3e,CONCAT11(uStack_3f,uStack_40));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar19 = pbVar30 + 8;
                  out(*(undefined4 *)(pbVar30 + 4),CONCAT11(uStack_3f,uStack_40));
                  pcVar9 = unaff_EBP + 1;
                  cVar18 = (char)iVar13;
                  pcVar20 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),
                                             CONCAT11((byte)((uint)iVar13 >> 8) |
                                                      *(byte *)((int)piVar31 + 0x46),cVar18));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_3f,uStack_40);
                  uVar16 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar19,0xf0)) >> 8);
                  piVar10 = (int *)CONCAT31(uVar16,0x5f);
                  piVar31 = (int *)((int)piVar31 + 1);
                  *piVar10 = (int)(*piVar10 + (int)piVar10);
                  puVar11 = (uint *)CONCAT22(uVar22,CONCAT11(cVar29 + cVar5 | pbVar30[-0x78],
                                                             (char)puVar11));
                  *(char *)piVar10 = (char)*piVar10 + '_';
                  puVar27 = (uint *)CONCAT31(uVar16,0x8c);
                  *(byte **)(pbVar19 + (int)piVar31 * 8) =
                       pbVar23 + *(int *)(pbVar19 + (int)piVar31 * 8);
                  bVar6 = *pbVar19;
                  *pbVar19 = *pbVar19 + 0x8c;
                  if (bVar6 < 0x74) {
                    *pbVar23 = *pbVar23 + cVar18;
                    *(byte *)puVar11 = (byte)*puVar11 >> 1;
                    *(char *)puVar27 = (char)*puVar27 + -0x74;
                    *puVar27 = (uint)(pcVar9 + *puVar27);
                    *puVar27 = *puVar27 << 1 | (uint)((int)*puVar27 < 0);
                    *pbVar23 = *pbVar23 + cVar18;
                    unaff_EBP[2] = unaff_EBP[2] - cVar18;
                    *pbVar23 = *pbVar23 + cVar18;
                    pbVar30 = (byte *)CONCAT31(uVar16,0x83);
                    puVar27 = puVar11;
                    goto code_r0x00405312;
                  }
                  *puVar27 = (uint)(*puVar27 + (int)puVar27);
                  piVar10 = (int *)(CONCAT31(uVar16,(byte)puVar27[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar27[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar10 = (int *)((int)piVar10 + *(int *)pbVar19);
                }
              }
              *pbVar23 = *pbVar23 + bVar4;
              *(byte *)puVar11 = (byte)*puVar11 - (char)pbVar23;
              *pbVar12 = *pbVar12 + bVar4;
              pbVar12 = (byte *)CONCAT31(uVar16,bVar4 | (byte)*puVar11);
            }
            else {
              cVar5 = (char)pbVar19;
              *pbVar23 = *pbVar23 + cVar5;
              *(byte **)pbVar12 = pbVar23 + *(int *)pbVar12;
              *pbVar12 = *pbVar12 + bVar4;
              bVar4 = bVar4 + *pbVar12;
              pbVar12 = (byte *)CONCAT31(uVar16,bVar4);
              if (-1 < (char)bVar4) {
                *(byte *)puVar11 = (byte)*puVar11 + bVar7;
                out(*(undefined4 *)pbVar30,(short)pbVar23);
                pbVar23 = pbVar23 + 1;
                *pbVar12 = *pbVar12 + bVar4;
                puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),
                                           bVar7 | (byte)((uint)iVar13 >> 8));
                cVar18 = bVar4 - *pbVar19;
                pcVar20 = (char *)CONCAT31(uVar16,cVar18);
                *pcVar20 = *pcVar20 + cVar18 + (bVar4 < *pbVar19);
                *pbVar23 = *pbVar23 + cVar18;
                pcVar20 = (char *)((int)pcVar20 * 2 + 0x79);
                *pcVar20 = *pcVar20 + (char)((uint)pbVar23 >> 8);
                pbVar12 = (byte *)in((short)pbVar23);
                pbVar30 = pbVar30 + 4;
              }
              *pbVar30 = *pbVar30 + cVar5;
              *pbVar12 = *pbVar12 + (char)pbVar12;
              *pbVar12 = *pbVar12 + (char)pbVar12;
              uStack_40 = (undefined1)in_DS;
              uStack_3f = (undefined1)((ushort)in_DS >> 8);
              bVar6 = *pbVar12;
              bVar8 = (byte)((uint)pbVar19 >> 8);
              bVar7 = bVar8 + *pbVar12;
              iVar13 = *(int *)pbVar12;
              *pbVar23 = *pbVar23 + cVar5;
              bVar4 = (char)(pbVar12 + (uint)CARRY1(bVar8,bVar6) + iVar13) - (byte)*puVar11;
              pbVar12 = (byte *)CONCAT31((int3)((uint)(pbVar12 + (uint)CARRY1(bVar8,bVar6) + iVar13)
                                               >> 8),bVar4);
              *(byte *)puVar11 = (byte)*puVar11 ^ bVar4;
              *pcVar9 = *pcVar9 + (char)puVar11;
              *pbVar12 = *pbVar12 + bVar4;
              *pbVar12 = *pbVar12 + bVar4;
              *pbVar12 = *pbVar12 + bVar4;
              pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                         CONCAT11(bVar7 + *pbVar12,cVar5));
              pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
              *pbVar23 = *pbVar23 + cVar5;
              pbVar30 = pbVar30 + *(int *)(pbVar23 + 0x3e);
            }
            *pbVar30 = *pbVar30 + (char)pbVar12;
            cVar5 = (char)pbVar12 + 'r';
            pbVar30 = pbVar30 + -1;
            uVar26 = CONCAT31((int3)((uint)pbVar12 >> 8),cVar5);
            *pbVar30 = *pbVar30 + cVar5;
            bVar32 = 0xfff38f8d < uVar26;
            iVar13 = uVar26 + 0xc7072;
            unaff_EBP = pcVar9;
          } while (SCARRY4(uVar26,0xc7072));
        } while( true );
      }
      *pcVar9 = *pcVar9 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar12 = (byte *)CONCAT31(uVar16,bVar4);
      bVar6 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar4;
      uVar16 = (undefined3)
               ((uint)(pbVar12 + (uint)CARRY1(bVar6,bVar4) + *(int *)(pbVar19 + (int)pbVar23)) >> 8)
      ;
      cVar5 = (char)(pbVar12 + (uint)CARRY1(bVar6,bVar4) + *(int *)(pbVar19 + (int)pbVar23)) + 'E';
      pcVar9 = (char *)CONCAT31(uVar16,cVar5);
      *pcVar9 = *pcVar9 + cVar5;
      cVar5 = cVar5 + *pcVar9;
      pcVar9 = (char *)CONCAT31(uVar16,cVar5);
      *pcVar9 = *pcVar9 + cVar5;
      puVar11 = (uint *)CONCAT31(uVar16,cVar5 + *pcVar9);
      *(char *)puVar11 = (char)*puVar11 + cVar5 + *pcVar9;
      pbVar12 = (byte *)((uint)puVar11 | *puVar11);
      bVar6 = *pbVar12;
      bVar4 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar4;
      piVar10 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar4 + CARRY1(bVar6,bVar4));
      pbVar12 = pbVar30;
code_r0x00405117:
      *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
      puVar27 = (uint *)((int)puVar27 - *puVar27);
      pbVar30 = pbVar12 + 4;
      out(*(undefined4 *)pbVar12,uVar22);
    }
    *pbVar23 = *pbVar23 + (char)pbVar19;
    bVar32 = puVar27 < (uint *)*piVar10;
    puVar27 = (uint *)((int)puVar27 - *piVar10);
    bVar6 = (byte)((uint)pbVar19 >> 8);
    *(char *)((int)piVar31 + 0x39) = (*(char *)((int)piVar31 + 0x39) - bVar6) - bVar32;
    *piVar10 = (int)(*piVar10 + (int)piVar10);
    uVar26 = *puVar27;
    *(int *)((int)piVar31 + 0x39) = *(int *)((int)piVar31 + 0x39) - (int)unaff_EBP;
    *piVar10 = (int)(*piVar10 + (int)piVar10);
    pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                               CONCAT11(bVar6 | (byte)uVar26 | (byte)*puVar27,(char)pbVar19));
    *(char *)(piVar10 + 10) = (char)piVar10[10] + cVar29;
  } while( true );
code_r0x004052ee:
  *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
  bVar6 = (char)piVar10 + 0x28;
  pbVar30 = (byte *)CONCAT31((int3)((uint)piVar10 >> 8),bVar6);
  *pbVar30 = *pbVar30 ^ bVar6;
  *(byte *)puVar11 = (byte)*puVar11 + (char)((uint)pcVar20 >> 8);
  bVar6 = *pbVar23;
  *pbVar23 = *pbVar23 + (byte)pcVar20;
  piVar10 = (int *)(((uint)pbVar30 | 0x1496f09) + *piVar31 + (uint)CARRY1(bVar6,(byte)pcVar20));
  pbVar12 = pbVar19 + 4;
  out(*(undefined4 *)pbVar19,(short)pbVar23);
  pbVar24 = pbVar23 + -1;
  *piVar10 = *piVar10 + (int)piVar10;
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | (byte)*puVar11);
  cVar5 = (char)piVar10 + '\x13';
  pbVar30 = (byte *)CONCAT31((int3)((uint)piVar10 >> 8),cVar5);
  puVar27 = puVar11;
  pbVar19 = pbVar12;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar23 = *pbVar23 - (char)((uint)pbVar24 >> 8);
    *pbVar30 = *pbVar30 + cVar5;
code_r0x00405396:
    bVar6 = *pbVar30;
    bVar4 = (byte)pbVar30;
    *pbVar30 = *pbVar30 + bVar4;
    *(byte **)pbVar12 = pbVar30 + (uint)CARRY1(bVar6,bVar4) + *(int *)pbVar12;
    out(*(undefined4 *)pbVar12,(short)pbVar23);
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
    pcVar9 = (char *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                              CONCAT11((byte)((uint)pbVar30 >> 8) | pbVar12[4],bVar4));
    *(int *)((int)piVar31 + -1) = (int)(pcVar9 + *(int *)((int)piVar31 + -1));
    out(*(undefined4 *)(pbVar12 + 4),(short)pbVar23);
    *pcVar9 = *pcVar9 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar30 = *pbVar30 + (char)pbVar30;
  piVar10 = (int *)CONCAT31((int3)((uint)pbVar30 >> 8),(char)pbVar30 + 'o');
  puVar11 = (uint *)((int)puVar27 + -1);
  *piVar10 = *piVar10 + (int)piVar10;
  uVar16 = (undefined3)((uint)pbVar23 >> 8);
  piVar10 = (int *)((int)piVar10 + 0x1b7e);
  bVar7 = (byte)pbVar23 | *(byte *)puVar11 | *(byte *)puVar11;
  iRam04115f2c = iRam04115f2c + (int)piVar10;
  out(*(undefined4 *)pbVar19,(short)CONCAT31(uVar16,bVar7));
  *piVar10 = *piVar10 + (int)piVar10;
  bVar7 = bVar7 | (byte)piVar10;
  iVar25 = CONCAT31(uVar16,bVar7);
  pbVar30 = (byte *)((int)piVar10 - *piVar10);
  cVar5 = (char)pbVar30;
  *pcVar20 = *pcVar20 + cVar5;
  cVar18 = (char)pcVar20 - bVar7;
  *pbVar30 = *pbVar30 + cVar5;
  uVar22 = (undefined2)((uint)pcVar20 >> 0x10);
  bVar4 = (byte)((uint)pcVar20 >> 8) | *pbVar30;
  pcVar9 = pcVar9 + -1;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar6 = *(byte *)(CONCAT22(uVar22,CONCAT11(bVar4,cVar18)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar30;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar9;
  *pbVar30 = *pbVar30 + cVar5;
  bVar6 = bVar4 | bVar6 | *(byte *)puVar11;
  iVar21 = CONCAT22(uVar22,CONCAT11(bVar6,cVar18));
  pbVar24 = (byte *)((uint)(pbVar19 + 4) ^ *(uint *)(iVar25 + -0x43));
  iVar13 = *(int *)pbVar30;
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  if (SCARRY4(iVar13,(int)pbVar30)) {
    *pbVar30 = *pbVar30 + cVar5;
  }
  pbVar23 = pbVar30 + 0x5674;
  piVar31 = (int *)((int)piVar31 +
                   (-(uint)((byte *)0xffffa98b < pbVar30) - *(int *)(pbVar24 + -0x7f)));
  bVar4 = (byte)pbVar23;
  *pbVar23 = *pbVar23 + bVar4;
  uVar17 = (undefined3)((uint)pbVar23 >> 8);
  bVar8 = bVar4 + 0x2d;
  piVar10 = (int *)CONCAT31(uVar17,bVar8);
  *(uint *)(pbVar24 + (int)piVar31 * 8) =
       *(int *)(pbVar24 + (int)piVar31 * 8) + iVar25 + (uint)(0xd2 < bVar4);
  bVar4 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar8;
  if (!CARRY1(bVar4,bVar8)) {
    do {
      pbVar23 = (byte *)(iVar25 + 1);
      bVar4 = (byte)piVar10;
      *(byte *)piVar10 = (char)*piVar10 + bVar4;
      bVar7 = (byte)((uint)piVar10 >> 8);
      bVar8 = (byte)puVar11 | bVar7;
      puVar27 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar8);
      out(*(undefined4 *)pbVar24,(short)pbVar23);
      *(byte *)piVar10 = (char)*piVar10 + bVar4;
      uVar22 = (undefined2)((uint)iVar21 >> 0x10);
      cVar5 = (char)iVar21;
      pbVar30 = (byte *)CONCAT22(uVar22,CONCAT11((byte)((uint)iVar21 >> 8) | *pbVar23,cVar5));
      bVar6 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar4;
      *(byte *)piVar10 = (char)*piVar10 + bVar4 + CARRY1(bVar6,bVar4);
      *pbVar23 = *pbVar23 + bVar4;
      *(byte *)piVar31 = (char)*piVar31 + bVar7;
      *(int *)((int)piVar10 * 2) =
           *(int *)((int)piVar10 * 2) + CONCAT22(uVar22,CONCAT11(0x1c,cVar5));
      *(byte *)piVar10 = (char)*piVar10 + bVar4;
      cVar18 = (char)pbVar23;
      *(byte *)puVar27 = (byte)*puVar27 + cVar18;
      *(byte *)((int)piVar10 * 2) = *(byte *)((int)piVar10 * 2) ^ bVar4;
      *(byte *)piVar10 = (char)*piVar10 + bVar4;
      pbVar30 = pbVar24 + 8;
      out(*(undefined4 *)(pbVar24 + 4),(short)pbVar23);
      piVar10 = (int *)0xa0a0000;
      *pbVar23 = *pbVar23;
      bVar4 = cVar5 - cVar18;
      iVar21 = CONCAT22(uVar22,CONCAT11(*(byte *)(piVar31 + 0x14) | 0x1c | bRam0ca87216,bVar4));
      *pbVar23 = *pbVar23;
      bVar6 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar4;
      if (!CARRY1(bVar6,bVar4)) {
        piVar10 = (int *)0x1e7b7000;
        bVar6 = (byte)((uint)puVar11 >> 8) | *(byte *)(iVar25 + 3);
        puVar27 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),CONCAT11(bVar6,bVar8));
        if (bVar6 != 0) {
          pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar18 + pbVar30[(int)piVar31 * 8]);
          piVar10 = (int *)0x6d7d7000;
          iVar21 = iVar21 + 1;
        }
      }
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      iVar25 = CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | pbVar30[(int)piVar31 * 8]);
      *(char *)piVar10 = (char)*piVar10;
      piVar10 = (int *)CONCAT31((int3)((uint)piVar10 >> 8),0xf9);
      *piVar31 = (int)((int)piVar10 + *piVar31 + 1);
      pbVar24 = pbVar24 + 0xc;
      out(*(undefined4 *)pbVar30,(short)iVar25);
      puVar11 = puVar27;
    } while( true );
  }
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  bVar8 = bVar8 | *(byte *)((int)piVar10 + 0x4000081);
  piVar10 = (int *)CONCAT31(uVar17,bVar8);
  if ('\0' < (char)bVar8) {
    *(byte *)piVar10 = (char)*piVar10 + bVar8;
    puVar15 = (uint *)CONCAT31(uVar17,bVar8 + 0x28);
    *puVar15 = *puVar15 ^ (uint)puVar15;
    *(byte *)puVar11 = *(byte *)puVar11 + bVar6;
    cVar5 = (bVar8 + 0x28) - bVar6;
    pcVar9 = (char *)CONCAT31(uVar17,cVar5);
    *pcVar9 = *pcVar9 + cVar5;
    pbVar23 = (byte *)CONCAT31(uVar16,bVar7 | *(byte *)puVar11);
    pcVar20 = (char *)CONCAT22((short)((uint)puVar11 >> 0x10),
                               CONCAT11((char)((uint)puVar11 >> 8) + *(byte *)((int)puVar27 + 0x7d),
                                        (char)puVar11));
    *pcVar9 = *pcVar9 + cVar5;
    pbVar30 = (byte *)CONCAT31(uVar17,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar17,cVar5 + 0x39U));
    *pcVar20 = *pcVar20 + bVar6;
    pbVar12 = pbVar24 + 4;
    out(*(undefined4 *)pbVar24,(short)pbVar23);
    goto code_r0x00405396;
  }
  pbVar19 = pbVar24 + 4;
  out(*(undefined4 *)pbVar24,(short)iVar25);
  pcVar20 = (char *)(iVar21 + -1);
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  pbVar23 = (byte *)CONCAT31(uVar16,bVar7 | *(byte *)puVar11);
  goto code_r0x004052ee;
}


