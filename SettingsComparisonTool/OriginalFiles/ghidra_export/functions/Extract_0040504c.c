/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040504c
 * Raw Name    : Extract
 * Demangled   : Extract
 * Prototype   : bool Extract(undefined4 param_1, undefined4 param_2)
 * Local Vars  : uStack_3f, uStack_40, uStack_3c, uStack_3e, uVar2, uVar1, cVar4, uVar3, bVar6, bVar5, pcVar7, in_EAX, puVar9, piVar8, iVar11, pbVar10, puVar13, pcVar12, uVar15, uVar14, pbVar17, cVar16, iVar19, pcVar18, uVar21, bVar20, param_1, param_2, pbVar23, bVar22, iVar25, pbVar24, uVar26, unaff_EBX, cVar28, puVar27, unaff_ESI, unaff_EBP, unaff_EDI, pbVar29, in_DS, in_ES, in_AF, bVar30
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

bool __fastcall Extract(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char *in_EAX;
  char *pcVar7;
  int *piVar8;
  undefined3 uVar14;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  undefined3 uVar15;
  uint *puVar13;
  char cVar16;
  byte bVar20;
  byte *pbVar17;
  char *pcVar18;
  undefined2 uVar21;
  int iVar19;
  byte bVar22;
  byte *pbVar23;
  byte *pbVar24;
  int iVar25;
  char cVar28;
  int unaff_EBX;
  uint uVar26;
  uint *puVar27;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar29;
  int *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar30;
  byte in_AF;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  
                    /* .NET CLR Managed Code */
  uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
  cVar28 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x7b);
  *in_EAX = *in_EAX + (char)in_EAX;
  cVar4 = (char)in_EAX + 'o';
  pcVar7 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar4);
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7 = pcVar7 + 0x2ed7fde6;
  cVar16 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar16;
  cVar4 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar28,(char)unaff_EBX)) + 0x7b);
  *pcVar7 = *pcVar7 + cVar16;
  piVar8 = (int *)(CONCAT31((int3)((uint)pcVar7 >> 8),cVar16 + 'o') + 0x6f060000);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar15 = (undefined3)((uint)param_2 >> 8);
  bVar22 = (byte)param_2 | *unaff_ESI;
  pbVar10 = (byte *)CONCAT31(uVar15,bVar22);
  uVar26 = CONCAT22(uVar21,CONCAT11(cVar28 + cVar4,(char)unaff_EBX)) | (uint)unaff_ESI;
  cVar28 = (char)((uint)param_2 >> 8);
  uVar14 = (undefined3)((uint)piVar8 >> 8);
  bVar5 = (byte)piVar8 | *pbVar10;
  pbVar23 = (byte *)CONCAT31(uVar14,bVar5);
  cVar16 = (char)param_1 - bVar22;
  pbVar17 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),cVar16);
  *pbVar23 = *pbVar23 + bVar5;
  out(*(undefined4 *)unaff_ESI,(short)pbVar10);
  *pbVar23 = bVar5;
  *pbVar10 = *pbVar10 + cVar16;
  pbVar29 = unaff_ESI + 8;
  out(*(undefined4 *)(unaff_ESI + 4),(short)pbVar10);
  *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
  puVar27 = (uint *)(CONCAT31((int3)(uVar26 >> 8),(char)uVar26 - cVar28) | (uint)pbVar29);
  bVar22 = (bVar22 | *pbVar29) + (char)*unaff_EDI;
  pbVar23 = (byte *)CONCAT31(uVar15,bVar22);
  cVar4 = bVar5 - (char)*unaff_EDI;
  cVar4 = cVar4 - *(char *)CONCAT31(uVar14,cVar4);
  puVar9 = (uint *)CONCAT31(uVar14,cVar4);
  *puVar9 = (uint)(pbVar23 + *puVar9);
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(int *)pbVar17 = *(int *)pbVar17 - (int)unaff_EBP;
  bVar5 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar22;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4 + CARRY1(bVar5,bVar22);
  *pbVar17 = *pbVar17 + cVar4;
  uVar26 = *puVar27;
  *(char *)puVar27 = (char)*puVar27 + 'r';
  *(char *)puVar27 = (char)*puVar27;
  if (SCARRY1((char)uVar26,'r')) {
    pbVar29 = pbVar29 + *(int *)(pbVar23 + -10);
  }
  else {
    while( true ) {
      *pbVar29 = *pbVar29 + (char)puVar9;
      uVar14 = (undefined3)((uint)puVar9 >> 8);
      cVar4 = (char)puVar9 + (char)*puVar27;
      pcVar7 = (char *)CONCAT31(uVar14,cVar4);
      puVar27 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),
                                 CONCAT11((char)((uint)puVar27 >> 8) +
                                          *(char *)((int)puVar27 + 0x7b),(char)puVar27));
      *pcVar7 = *pcVar7 + cVar4;
      in_AF = 9 < (cVar4 + 0x6fU & 0xf) | in_AF;
      uVar26 = CONCAT31(uVar14,cVar4 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar26;
      piVar8 = (int *)CONCAT22((short)(uVar26 >> 0x10),
                               CONCAT11((char)((uint)puVar9 >> 8) + in_AF,bVar6));
      *piVar8 = *piVar8 + (int)piVar8;
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar8 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar14,bVar6);
      pbVar10 = (byte *)CONCAT31(uVar14,bVar6);
      bVar5 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar6;
      pbVar29 = pbVar29 + (-(uint)CARRY1(bVar5,bVar6) - *(int *)pbVar10);
      puVar9 = (uint *)(pbVar10 + 0xfc00);
      *pbVar23 = *pbVar23 + cVar28;
      uVar26 = *puVar9;
      bVar5 = (byte)puVar9;
      *(byte *)puVar9 = (byte)*puVar9 + bVar5;
      uVar2 = (uint)CARRY1((byte)uVar26,bVar5);
      uVar26 = *puVar27;
      uVar1 = *puVar27;
      *puVar27 = (uint)((byte *)(uVar1 + (int)puVar9) + uVar2);
      if (!CARRY4(uVar26,(uint)puVar9) && !CARRY4(uVar1 + (int)puVar9,uVar2)) break;
      *(byte *)puVar9 = (byte)*puVar9 + bVar5;
    }
  }
  uVar26 = (uint)puVar9 | *puVar9;
  uVar21 = SUB42(pbVar23,0);
  *pbVar29 = *pbVar29 + (char)uVar26;
  piVar8 = (int *)(uVar26 + 0xc1872);
  if (SCARRY4(uVar26,0xc1872)) {
    cVar4 = (char)piVar8;
    *(char *)piVar8 = *(char *)piVar8 + cVar4;
    *pbVar23 = *pbVar23 + cVar4;
    *(char *)piVar8 = *(char *)piVar8 + cVar4;
    *(char *)puVar27 = (char)*puVar27 + cVar16;
    *(char *)piVar8 = *(char *)piVar8 + cVar4;
    *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) + bVar22;
    pbVar10 = pbVar29;
    goto code_r0x00405117;
  }
  do {
    bVar5 = *pbVar29;
    bVar22 = (byte)piVar8;
    *pbVar29 = *pbVar29 + bVar22;
    if (CARRY1(bVar5,bVar22)) {
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      uVar14 = (undefined3)((uint)pbVar17 >> 8);
      bVar5 = (byte)pbVar17 | bRam396f1609;
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      pbVar17 = (byte *)CONCAT31(uVar14,bVar5 | *(byte *)CONCAT31(uVar14,bVar5));
      uVar14 = (undefined3)((uint)piVar8 >> 8);
      bVar22 = bVar22 | *pbVar23;
      pcVar7 = (char *)CONCAT31(uVar14,bVar22);
      if ((POPCOUNT(bVar22) & 1U) != 0) {
        pbVar10 = pbVar29 + 4;
        out(*(undefined4 *)pbVar29,uVar21);
        uVar26 = CONCAT22((short)((uint)piVar8 >> 0x10),(ushort)bVar22);
        *pbVar10 = *pbVar10 + bVar22;
        pcVar7 = (char *)(uVar26 | 8);
        cVar16 = (char)((uint)puVar27 >> 8) + *(char *)((int)puVar27 + 0x7a);
        puVar9 = (uint *)CONCAT22((short)((uint)puVar27 >> 0x10),CONCAT11(cVar16,(char)puVar27));
        *pcVar7 = *pcVar7 + (char)pcVar7;
        cVar4 = (char)pcVar7 + 'o';
        piVar8 = (int *)CONCAT31((int3)(uVar26 >> 8),cVar4);
        *(char *)piVar8 = (char)*piVar8 + cVar4;
        *pbVar17 = *pbVar17 + 1;
        pbVar29 = pbVar29 + 8;
        out(*(undefined4 *)pbVar10,uVar21);
        pbVar23 = (byte *)((uint)pbVar23 ^ uRam08122c04);
        iVar11 = CONCAT31((int3)((uint)(*piVar8 * 0x17070600) >> 8),2);
        *(char *)(iVar11 * 2) = *(char *)(iVar11 * 2) - cVar16;
        do {
          bVar5 = (byte)iVar11;
          *pbVar29 = *pbVar29 + bVar5;
          bVar30 = CARRY1(bVar5,(byte)*puVar9);
          uVar14 = (undefined3)((uint)iVar11 >> 8);
          cVar4 = bVar5 + (byte)*puVar9;
          pbVar10 = (byte *)CONCAT31(uVar14,cVar4);
          uVar21 = in_DS;
          uVar3 = uStack_3c;
          if (SCARRY1(bVar5,(byte)*puVar9) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar10 = *pbVar10 + cVar4;
          uVar26 = CONCAT31(uVar14,cVar4 + '\'') + 0x1ebd9f3;
          uStack_40 = (undefined1)in_ES;
          uStack_3f = (undefined1)((ushort)in_ES >> 8);
          piVar8 = (int *)(uVar26 ^ 0x73060000);
          pbVar17 = pbVar17 + 1;
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          puVar9 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),
                                    CONCAT11((byte)((uint)puVar9 >> 8) | unaff_EBP[0x7e],
                                             (char)puVar9));
          cVar4 = (char)uVar26;
          *(char *)piVar8 = (char)*piVar8 + cVar4;
          uVar26 = CONCAT31((int3)((uint)piVar8 >> 8),cVar4 + '\x02');
          bVar30 = 0xd9f2d2da < uVar26;
          iVar11 = uVar26 + 0x260d2d25;
          pcVar7 = unaff_EBP;
          do {
            uVar14 = (undefined3)((uint)iVar11 >> 8);
            bVar22 = (char)iVar11 + -2 + bVar30;
            pbVar10 = (byte *)CONCAT31(uVar14,bVar22);
            bVar5 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar22;
            bVar6 = (byte)puVar9;
            uStack_3c = in_ES;
            if (CARRY1(bVar5,bVar22)) {
              *pbVar10 = *pbVar10 + bVar22;
              puVar9 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),
                                        CONCAT11((byte)((uint)puVar9 >> 8) | pcVar7[0x7f],bVar6));
              *pbVar10 = *pbVar10 + bVar22;
              pbVar10 = (byte *)CONCAT31(uVar14,bVar22 + 0x2a);
              *pbVar10 = *pbVar10 + bVar22 + 0x2a;
              *(byte *)puVar9 = (byte)*puVar9 + (char)pbVar23;
              uVar21 = in_DS;
              while( true ) {
                in_DS = uVar21;
                bVar22 = (byte)pbVar10;
                *pbVar23 = *pbVar23 ^ bVar22;
                *pbVar23 = *pbVar23 + (char)puVar9;
                *pbVar10 = *pbVar10 + bVar22;
                *(byte *)puVar9 = (byte)*puVar9 + (char)((uint)pbVar23 >> 8);
                bVar5 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar22;
                uVar26 = *puVar9;
                uVar1 = *puVar9;
                *puVar9 = (uint)(pbVar10 + uVar1 + CARRY1(bVar5,bVar22));
                uVar14 = (undefined3)((uint)pbVar10 >> 8);
                if (CARRY4(uVar26,(uint)pbVar10) ||
                    CARRY4((uint)(pbVar10 + uVar1),(uint)CARRY1(bVar5,bVar22))) break;
                *pbVar29 = *pbVar29 + bVar22;
                pcVar18 = (char *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                           CONCAT11((char)((uint)pbVar17 >> 8) + *pbVar10,
                                                    (char)pbVar17));
                *pbVar29 = *pbVar29 + bVar22;
                piVar8 = (int *)CONCAT31(uVar14,bVar22 | (byte)*puVar9);
                pbVar17 = pbVar29;
                while( true ) {
                  pbVar29 = pbVar17 + 4;
                  out(*(undefined4 *)pbVar17,(short)pbVar23);
                  pbVar23 = pbVar23 + 1;
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  bVar22 = (byte)((uint)pcVar18 >> 8) | *pbVar23;
                  uVar14 = (undefined3)((uint)piVar8 >> 8);
                  bVar5 = (byte)piVar8 ^ *pbVar23;
                  pcVar12 = (char *)CONCAT31(uVar14,bVar5);
                  cRam282b0000 = cRam282b0000 - bVar22;
                  *pcVar12 = *pcVar12 + bVar5;
                  unaff_EBP = pcVar7 + -*(int *)pbVar23;
                  uStack_40 = (undefined1)in_DS;
                  uStack_3f = (undefined1)((ushort)in_DS >> 8);
                  cVar4 = *(char *)((int)unaff_EDI + 0x17);
                  *pcVar12 = *pcVar12 + bVar5;
                  pbVar17 = (byte *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                                             CONCAT11(bVar22 + cVar4 | *pbVar23,(char)pcVar18));
                  *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
                  *(byte *)((int)pcVar12 * 2) = *(byte *)((int)pcVar12 * 2) ^ bVar5;
                  in_AF = 9 < (bVar5 & 0xf) | in_AF;
                  bVar5 = bVar5 + in_AF * -6;
                  pbVar10 = (byte *)CONCAT31(uVar14,bVar5 + (0x9f < bVar5 | in_AF * (bVar5 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
                  *(char *)((int)pbVar10 * 2) =
                       *(char *)((int)pbVar10 * 2) + (char)((uint)pbVar23 >> 8);
                  bVar30 = CARRY1(*pbVar17,(byte)pbVar23);
                  *pbVar17 = *pbVar17 + (byte)pbVar23;
                  uVar21 = in_DS;
                  uVar3 = in_ES;
GenerateStatusText:
                  in_DS = uVar3;
                  pcVar7 = unaff_EBP;
                  uStack_3c = in_DS;
                  if (!bVar30) break;
                  *pbVar10 = *pbVar10 + (char)pbVar10;
                  iVar11 = CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | *pbVar23);
                  uVar21 = (undefined2)((uint)puVar9 >> 0x10);
                  cVar28 = (char)((uint)puVar9 >> 8) + *(byte *)((int)puVar9 + 0x7d);
                  *pbVar10 = *pbVar10 + (char)pbVar10;
                  *(char *)unaff_EDI = (char)*unaff_EDI - (char)((uint)pbVar17 >> 8);
                  iVar11 = iVar11 - *(int *)(iVar11 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar21,CONCAT11(cVar28,(char)puVar9)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar29,(short)pbVar23);
                  pbVar23 = (byte *)CONCAT22(uStack_3e,CONCAT11(uStack_3f,uStack_40));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar17 = pbVar29 + 8;
                  out(*(undefined4 *)(pbVar29 + 4),CONCAT11(uStack_3f,uStack_40));
                  pcVar7 = unaff_EBP + 1;
                  cVar16 = (char)iVar11;
                  pcVar18 = (char *)CONCAT22((short)((uint)iVar11 >> 0x10),
                                             CONCAT11((byte)((uint)iVar11 >> 8) |
                                                      *(byte *)((int)unaff_EDI + 0x46),cVar16));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_3f,uStack_40);
                  uVar14 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar17,0xf0)) >> 8);
                  piVar8 = (int *)CONCAT31(uVar14,0x5f);
                  unaff_EDI = (int *)((int)unaff_EDI + 1);
                  *piVar8 = (int)(*piVar8 + (int)piVar8);
                  puVar9 = (uint *)CONCAT22(uVar21,CONCAT11(cVar28 + cVar4 | pbVar29[-0x78],
                                                            (char)puVar9));
                  *(char *)piVar8 = (char)*piVar8 + '_';
                  puVar27 = (uint *)CONCAT31(uVar14,0x8c);
                  *(byte **)(pbVar17 + (int)unaff_EDI * 8) =
                       pbVar23 + *(int *)(pbVar17 + (int)unaff_EDI * 8);
                  bVar5 = *pbVar17;
                  *pbVar17 = *pbVar17 + 0x8c;
                  if (bVar5 < 0x74) {
                    *pbVar23 = *pbVar23 + cVar16;
                    *(byte *)puVar9 = (byte)*puVar9 >> 1;
                    *(char *)puVar27 = (char)*puVar27 + -0x74;
                    *puVar27 = (uint)(pcVar7 + *puVar27);
                    *puVar27 = *puVar27 << 1 | (uint)((int)*puVar27 < 0);
                    *pbVar23 = *pbVar23 + cVar16;
                    unaff_EBP[2] = unaff_EBP[2] - cVar16;
                    *pbVar23 = *pbVar23 + cVar16;
                    pbVar29 = (byte *)CONCAT31(uVar14,0x83);
                    puVar27 = puVar9;
                    goto code_r0x00405312;
                  }
                  *puVar27 = (uint)(*puVar27 + (int)puVar27);
                  piVar8 = (int *)(CONCAT31(uVar14,(byte)puVar27[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar27[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar8 = (int *)((int)piVar8 + *(int *)pbVar17);
                }
              }
              *pbVar23 = *pbVar23 + bVar22;
              *(byte *)puVar9 = (byte)*puVar9 - (char)pbVar23;
              *pbVar10 = *pbVar10 + bVar22;
              pbVar10 = (byte *)CONCAT31(uVar14,bVar22 | (byte)*puVar9);
            }
            else {
              cVar4 = (char)pbVar17;
              *pbVar23 = *pbVar23 + cVar4;
              *(byte **)pbVar10 = pbVar23 + *(int *)pbVar10;
              *pbVar10 = *pbVar10 + bVar22;
              bVar22 = bVar22 + *pbVar10;
              pbVar10 = (byte *)CONCAT31(uVar14,bVar22);
              if (-1 < (char)bVar22) {
                *(byte *)puVar9 = (byte)*puVar9 + bVar6;
                out(*(undefined4 *)pbVar29,(short)pbVar23);
                pbVar23 = pbVar23 + 1;
                *pbVar10 = *pbVar10 + bVar22;
                puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),
                                          bVar6 | (byte)((uint)iVar11 >> 8));
                cVar16 = bVar22 - *pbVar17;
                pcVar18 = (char *)CONCAT31(uVar14,cVar16);
                *pcVar18 = *pcVar18 + cVar16 + (bVar22 < *pbVar17);
                *pbVar23 = *pbVar23 + cVar16;
                pcVar18 = (char *)((int)pcVar18 * 2 + 0x79);
                *pcVar18 = *pcVar18 + (char)((uint)pbVar23 >> 8);
                pbVar10 = (byte *)in((short)pbVar23);
                pbVar29 = pbVar29 + 4;
              }
              *pbVar29 = *pbVar29 + cVar4;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              uStack_40 = (undefined1)in_DS;
              uStack_3f = (undefined1)((ushort)in_DS >> 8);
              bVar5 = *pbVar10;
              bVar6 = (byte)((uint)pbVar17 >> 8);
              bVar20 = bVar6 + *pbVar10;
              iVar11 = *(int *)pbVar10;
              *pbVar23 = *pbVar23 + cVar4;
              bVar22 = (char)(pbVar10 + (uint)CARRY1(bVar6,bVar5) + iVar11) - (byte)*puVar9;
              pbVar10 = (byte *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar6,bVar5) + iVar11)
                                               >> 8),bVar22);
              *(byte *)puVar9 = (byte)*puVar9 ^ bVar22;
              *pcVar7 = *pcVar7 + (char)puVar9;
              *pbVar10 = *pbVar10 + bVar22;
              *pbVar10 = *pbVar10 + bVar22;
              *pbVar10 = *pbVar10 + bVar22;
              pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                         CONCAT11(bVar20 + *pbVar10,cVar4));
              pbVar10 = pbVar10 + (uint)CARRY1(bVar20,*pbVar10) + *(int *)pbVar10;
              *pbVar23 = *pbVar23 + cVar4;
              pbVar29 = pbVar29 + *(int *)(pbVar23 + 0x3e);
            }
            *pbVar29 = *pbVar29 + (char)pbVar10;
            cVar4 = (char)pbVar10 + 'r';
            pbVar29 = pbVar29 + -1;
            uVar26 = CONCAT31((int3)((uint)pbVar10 >> 8),cVar4);
            *pbVar29 = *pbVar29 + cVar4;
            bVar30 = 0xfff38f8d < uVar26;
            iVar11 = uVar26 + 0xc7072;
            unaff_EBP = pcVar7;
          } while (SCARRY4(uVar26,0xc7072));
        } while( true );
      }
      *pcVar7 = *pcVar7 + bVar22;
      bVar22 = bVar22 + 0x6f;
      pbVar10 = (byte *)CONCAT31(uVar14,bVar22);
      bVar5 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar22;
      uVar14 = (undefined3)
               ((uint)(pbVar10 + (uint)CARRY1(bVar5,bVar22) + *(int *)(pbVar17 + (int)pbVar23)) >> 8
               );
      cVar4 = (char)(pbVar10 + (uint)CARRY1(bVar5,bVar22) + *(int *)(pbVar17 + (int)pbVar23)) + 'E';
      pcVar7 = (char *)CONCAT31(uVar14,cVar4);
      *pcVar7 = *pcVar7 + cVar4;
      cVar4 = cVar4 + *pcVar7;
      pcVar7 = (char *)CONCAT31(uVar14,cVar4);
      *pcVar7 = *pcVar7 + cVar4;
      puVar9 = (uint *)CONCAT31(uVar14,cVar4 + *pcVar7);
      *(char *)puVar9 = (char)*puVar9 + cVar4 + *pcVar7;
      pbVar10 = (byte *)((uint)puVar9 | *puVar9);
      bVar5 = *pbVar10;
      bVar22 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar22;
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar22 + CARRY1(bVar5,bVar22));
      pbVar10 = pbVar29;
code_r0x00405117:
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      puVar27 = (uint *)((int)puVar27 - *puVar27);
      pbVar29 = pbVar10 + 4;
      out(*(undefined4 *)pbVar10,uVar21);
    }
    *pbVar23 = *pbVar23 + (char)pbVar17;
    bVar30 = puVar27 < (uint *)*piVar8;
    puVar27 = (uint *)((int)puVar27 - *piVar8);
    bVar5 = (byte)((uint)pbVar17 >> 8);
    *(char *)((int)unaff_EDI + 0x39) = (*(char *)((int)unaff_EDI + 0x39) - bVar5) - bVar30;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    uVar26 = *puVar27;
    *(int *)((int)unaff_EDI + 0x39) = *(int *)((int)unaff_EDI + 0x39) - (int)unaff_EBP;
    *piVar8 = (int)(*piVar8 + (int)piVar8);
    pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar26 | (byte)*puVar27,(char)pbVar17));
    *(char *)(piVar8 + 10) = (char)piVar8[10] + cVar28;
  } while( true );
code_r0x004052ee:
  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
  bVar5 = (char)piVar8 + 0x28;
  pbVar29 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),bVar5);
  *pbVar29 = *pbVar29 ^ bVar5;
  *(byte *)puVar9 = (byte)*puVar9 + (char)((uint)pcVar18 >> 8);
  bVar5 = *pbVar23;
  *pbVar23 = *pbVar23 + (byte)pcVar18;
  piVar8 = (int *)(((uint)pbVar29 | 0x1496f09) + *unaff_EDI + (uint)CARRY1(bVar5,(byte)pcVar18));
  pbVar10 = pbVar17 + 4;
  out(*(undefined4 *)pbVar17,(short)pbVar23);
  pbVar24 = pbVar23 + -1;
  *piVar8 = *piVar8 + (int)piVar8;
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | (byte)*puVar9);
  cVar4 = (char)piVar8 + '\x13';
  pbVar29 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar4);
  puVar27 = puVar9;
  pbVar17 = pbVar10;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar23 = *pbVar23 - (char)((uint)pbVar24 >> 8);
    *pbVar29 = *pbVar29 + cVar4;
code_r0x00405396:
    bVar5 = *pbVar29;
    bVar22 = (byte)pbVar29;
    *pbVar29 = *pbVar29 + bVar22;
    *(byte **)pbVar10 = pbVar29 + (uint)CARRY1(bVar5,bVar22) + *(int *)pbVar10;
    out(*(undefined4 *)pbVar10,(short)pbVar23);
    *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
    *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
    pcVar7 = (char *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                              CONCAT11((byte)((uint)pbVar29 >> 8) | pbVar10[4],bVar22));
    *(int *)((int)unaff_EDI + -1) = (int)(pcVar7 + *(int *)((int)unaff_EDI + -1));
    out(*(undefined4 *)(pbVar10 + 4),(short)pbVar23);
    *pcVar7 = *pcVar7 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar29 = *pbVar29 + (char)pbVar29;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + 'o');
  puVar9 = (uint *)((int)puVar27 + -1);
  *piVar8 = *piVar8 + (int)piVar8;
  uVar14 = (undefined3)((uint)pbVar23 >> 8);
  piVar8 = (int *)((int)piVar8 + 0x1b7e);
  bVar6 = (byte)pbVar23 | *(byte *)puVar9 | *(byte *)puVar9;
  iRam04115f2c = iRam04115f2c + (int)piVar8;
  out(*(undefined4 *)pbVar17,(short)CONCAT31(uVar14,bVar6));
  *piVar8 = *piVar8 + (int)piVar8;
  bVar6 = bVar6 | (byte)piVar8;
  iVar25 = CONCAT31(uVar14,bVar6);
  pbVar29 = (byte *)((int)piVar8 - *piVar8);
  cVar4 = (char)pbVar29;
  *pcVar18 = *pcVar18 + cVar4;
  cVar16 = (char)pcVar18 - bVar6;
  *pbVar29 = *pbVar29 + cVar4;
  uVar21 = (undefined2)((uint)pcVar18 >> 0x10);
  bVar22 = (byte)((uint)pcVar18 >> 8) | *pbVar29;
  pcVar7 = pcVar7 + -1;
  *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
  bVar5 = *(byte *)(CONCAT22(uVar21,CONCAT11(bVar22,cVar16)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar29;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar7;
  *pbVar29 = *pbVar29 + cVar4;
  bVar5 = bVar22 | bVar5 | *(byte *)puVar9;
  iVar19 = CONCAT22(uVar21,CONCAT11(bVar5,cVar16));
  pbVar24 = (byte *)((uint)(pbVar17 + 4) ^ *(uint *)(iVar25 + -0x43));
  iVar11 = *(int *)pbVar29;
  *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
  if (SCARRY4(iVar11,(int)pbVar29)) {
    *pbVar29 = *pbVar29 + cVar4;
  }
  pbVar23 = pbVar29 + 0x5674;
  unaff_EDI = (int *)((int)unaff_EDI +
                     (-(uint)((byte *)0xffffa98b < pbVar29) - *(int *)(pbVar24 + -0x7f)));
  bVar22 = (byte)pbVar23;
  *pbVar23 = *pbVar23 + bVar22;
  uVar15 = (undefined3)((uint)pbVar23 >> 8);
  bVar20 = bVar22 + 0x2d;
  piVar8 = (int *)CONCAT31(uVar15,bVar20);
  *(uint *)(pbVar24 + (int)unaff_EDI * 8) =
       *(int *)(pbVar24 + (int)unaff_EDI * 8) + iVar25 + (uint)(0xd2 < bVar22);
  bVar22 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar20;
  if (!CARRY1(bVar22,bVar20)) {
    do {
      pbVar23 = (byte *)(iVar25 + 1);
      bVar22 = (byte)piVar8;
      *(byte *)piVar8 = (char)*piVar8 + bVar22;
      bVar6 = (byte)((uint)piVar8 >> 8);
      bVar20 = (byte)puVar9 | bVar6;
      puVar27 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),bVar20);
      out(*(undefined4 *)pbVar24,(short)pbVar23);
      *(byte *)piVar8 = (char)*piVar8 + bVar22;
      uVar21 = (undefined2)((uint)iVar19 >> 0x10);
      cVar4 = (char)iVar19;
      pbVar29 = (byte *)CONCAT22(uVar21,CONCAT11((byte)((uint)iVar19 >> 8) | *pbVar23,cVar4));
      bVar5 = *pbVar29;
      *pbVar29 = *pbVar29 + bVar22;
      *(byte *)piVar8 = (char)*piVar8 + bVar22 + CARRY1(bVar5,bVar22);
      *pbVar23 = *pbVar23 + bVar22;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar6;
      *(int *)((int)piVar8 * 2) = *(int *)((int)piVar8 * 2) + CONCAT22(uVar21,CONCAT11(0x1c,cVar4));
      *(byte *)piVar8 = (char)*piVar8 + bVar22;
      cVar16 = (char)pbVar23;
      *(byte *)puVar27 = (byte)*puVar27 + cVar16;
      *(byte *)((int)piVar8 * 2) = *(byte *)((int)piVar8 * 2) ^ bVar22;
      *(byte *)piVar8 = (char)*piVar8 + bVar22;
      pbVar29 = pbVar24 + 8;
      out(*(undefined4 *)(pbVar24 + 4),(short)pbVar23);
      piVar8 = (int *)0xa0a0000;
      *pbVar23 = *pbVar23;
      bVar22 = cVar4 - cVar16;
      iVar19 = CONCAT22(uVar21,CONCAT11(*(byte *)(unaff_EDI + 0x14) | 0x1c | bRam0ca87216,bVar22));
      *pbVar23 = *pbVar23;
      bVar5 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar22;
      if (!CARRY1(bVar5,bVar22)) {
        piVar8 = (int *)0x1e7b7000;
        bVar5 = (byte)((uint)puVar9 >> 8) | *(byte *)(iVar25 + 3);
        puVar27 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),CONCAT11(bVar5,bVar20));
        if (bVar5 != 0) {
          pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar16 + pbVar29[(int)unaff_EDI * 8]
                                    );
          piVar8 = (int *)0x6d7d7000;
          iVar19 = iVar19 + 1;
        }
      }
      *piVar8 = (int)(*piVar8 + (int)piVar8);
      iVar25 = CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | pbVar29[(int)unaff_EDI * 8]);
      *(char *)piVar8 = (char)*piVar8;
      piVar8 = (int *)CONCAT31((int3)((uint)piVar8 >> 8),0xf9);
      *unaff_EDI = (int)((int)piVar8 + *unaff_EDI + 1);
      pbVar24 = pbVar24 + 0xc;
      out(*(undefined4 *)pbVar29,(short)iVar25);
      puVar9 = puVar27;
    } while( true );
  }
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  bVar20 = bVar20 | *(byte *)((int)piVar8 + 0x4000081);
  piVar8 = (int *)CONCAT31(uVar15,bVar20);
  if ('\0' < (char)bVar20) {
    *(byte *)piVar8 = (char)*piVar8 + bVar20;
    puVar13 = (uint *)CONCAT31(uVar15,bVar20 + 0x28);
    *puVar13 = *puVar13 ^ (uint)puVar13;
    *(byte *)puVar9 = *(byte *)puVar9 + bVar5;
    cVar4 = (bVar20 + 0x28) - bVar5;
    pcVar7 = (char *)CONCAT31(uVar15,cVar4);
    *pcVar7 = *pcVar7 + cVar4;
    pbVar23 = (byte *)CONCAT31(uVar14,bVar6 | *(byte *)puVar9);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar9 >> 0x10),
                               CONCAT11((char)((uint)puVar9 >> 8) + *(byte *)((int)puVar27 + 0x7d),
                                        (char)puVar9));
    *pcVar7 = *pcVar7 + cVar4;
    pbVar29 = (byte *)CONCAT31(uVar15,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar15,cVar4 + 0x39U));
    *pcVar18 = *pcVar18 + bVar5;
    pbVar10 = pbVar24 + 4;
    out(*(undefined4 *)pbVar24,(short)pbVar23);
    goto code_r0x00405396;
  }
  pbVar17 = pbVar24 + 4;
  out(*(undefined4 *)pbVar24,(short)iVar25);
  pcVar18 = (char *)(iVar19 + -1);
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  pbVar23 = (byte *)CONCAT31(uVar14,bVar6 | *(byte *)puVar9);
  goto code_r0x004052ee;
}


