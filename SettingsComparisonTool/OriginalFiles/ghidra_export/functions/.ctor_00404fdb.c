/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404fdb
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(byte * extractOptions, byte * aquirerProvider)
 * Local Vars  : extractOptions, aquirerProvider, uStack_28, uStack_26, uStack_27, uVar1, uStack_24, uVar3, uVar2, cVar5, cVar4, bVar7, bVar6, in_EAX, bVar8, pbVar10, puVar9, piVar12, uVar11, iVar14, pbVar13, puVar16, pcVar15, uVar18, uVar17, pcVar20, pbVar19, uVar22, iVar21, pbVar24, bVar23, iVar26, pbVar25, unaff_EBX, cVar27, cVar29, puVar28, unaff_ESI, unaff_EBP, unaff_EDI, pcVar30, in_DS, in_ES, in_AF, bVar31
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

void __fastcall _ctor(byte *extractOptions,byte *aquirerProvider)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 in_EAX;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  undefined3 uVar17;
  int *piVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  undefined3 uVar18;
  uint *puVar16;
  byte *pbVar19;
  char *pcVar20;
  undefined2 uVar22;
  int iVar21;
  byte bVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  char cVar27;
  char cVar29;
  char *unaff_EBX;
  uint *puVar28;
  char *unaff_EBP;
  undefined4 *unaff_ESI;
  char *pcVar30;
  int *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar31;
  byte in_AF;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined2 uStack_24;
  
                    /* .NET CLR Managed Code */
  pcVar30 = (char *)(unaff_ESI + 1);
  out(*unaff_ESI,(short)aquirerProvider);
  puVar9 = (uint *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *unaff_EBX + '\x03') ^
                   0x280a0001);
  *(byte *)puVar9 = (byte)*puVar9 << 1 | (char)(byte)*puVar9 < '\0';
  *pcVar30 = *pcVar30 + (char)puVar9;
  pcVar30 = pcVar30 + *(int *)(aquirerProvider + -0x5e);
  pbVar10 = (byte *)((uint)puVar9 | *puVar9);
  *pcVar30 = *pcVar30 + (char)pbVar10;
  bVar23 = (byte)aquirerProvider;
  uVar18 = (undefined3)((uint)unaff_EBX >> 8);
  cVar27 = (char)unaff_EBX - bVar23;
  puVar28 = (uint *)CONCAT31(uVar18,cVar27);
  bVar7 = *pbVar10;
  bVar6 = (byte)((uint)extractOptions >> 8);
  bVar8 = (byte)extractOptions;
  pbVar19 = (byte *)CONCAT22((short)((uint)extractOptions >> 0x10),CONCAT11(bVar6 + *pbVar10,bVar8))
  ;
  iVar14 = *(int *)pbVar10;
  *aquirerProvider = *aquirerProvider + bVar8;
  cVar4 = (char)(pbVar10 + (uint)CARRY1(bVar6,bVar7) + iVar14) + 'r';
  puVar9 = (uint *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar6,bVar7) + iVar14) >> 8),cVar4)
  ;
  pbVar24 = (byte *)CONCAT22((short)((uint)aquirerProvider >> 0x10),CONCAT11(10,bVar23));
  *(char *)(puVar9 + 10) = (char)puVar9[10] + '\n';
  *pcVar30 = *pcVar30 + cVar4;
  pbVar10 = (byte *)(pcVar30 + *(int *)(pbVar24 + -0x5e));
  uVar11 = (uint)puVar9 | *puVar9;
  cVar4 = (char)uVar11;
  *pbVar10 = *pbVar10 + cVar4;
  uVar17 = (undefined3)(uVar11 >> 8);
  cVar5 = cVar4 + (char)*puVar28;
  puVar9 = (uint *)CONCAT31(uVar17,cVar5);
  if (SCARRY1(cVar4,(char)*puVar28) != cVar5 < '\0') {
    *(byte *)puVar9 = (byte)*puVar9 + cVar5;
    cVar4 = cVar5 + '\x7f';
    pbVar13 = (byte *)CONCAT31(uVar17,cVar4);
    pbVar24[(int)pbVar13] = pbVar24[(int)pbVar13] + cVar4;
    pbVar24[0x280a0000] = pbVar24[0x280a0000] - (char)(uVar11 >> 8);
    *pbVar13 = *pbVar13 << (bVar8 & 7) | *pbVar13 >> 8 - (bVar8 & 7);
    *pbVar10 = *pbVar10 + cVar4;
    cVar27 = cVar27 - *pbVar10;
    uVar22 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar29 = (char)((uint)unaff_EBX >> 8) + *(char *)(CONCAT31(uVar18,cVar27) + 0x7c);
    pcVar30 = (char *)CONCAT22(uVar22,CONCAT11(cVar29,cVar27));
    *pbVar13 = *pbVar13 + cVar4;
    bVar6 = cVar5 + 0xa9U & *pbVar24;
    unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x7c));
    *(char *)CONCAT31(uVar17,bVar6) = *(char *)CONCAT31(uVar17,bVar6) + bVar6;
    bVar6 = bVar6 + 0x2a;
    pbVar13 = (byte *)CONCAT31(uVar17,bVar6);
    *pbVar13 = *pbVar13 + bVar6;
    *pcVar30 = *pcVar30 + cVar27;
    *pbVar24 = *pbVar24 ^ bVar6;
    *pcVar30 = *pcVar30 + bVar6;
    bVar7 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    cVar4 = (bVar6 - *pbVar13) - CARRY1(bVar7,bVar6);
    *pbVar19 = *pbVar19 + bVar23;
    cVar29 = cVar29 + pcVar30[0x7b];
    *(char *)CONCAT31(uVar17,cVar4) = *(char *)CONCAT31(uVar17,cVar4) + cVar4;
    pcVar30 = (char *)CONCAT31(uVar17,cVar4 + 'o');
    *pcVar30 = *pcVar30 + cVar4 + 'o';
    pcVar30 = pcVar30 + 0x2ed7fde6;
    cVar5 = (char)pcVar30;
    *pcVar30 = *pcVar30 + cVar5;
    cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar29,cVar27)) + 0x7b);
    *pcVar30 = *pcVar30 + cVar5;
    piVar12 = (int *)(CONCAT31((int3)((uint)pcVar30 >> 8),cVar5 + 'o') + 0x6f060000);
    *piVar12 = *piVar12 + (int)piVar12;
    uVar18 = (undefined3)((uint)pbVar24 >> 8);
    bVar23 = bVar23 | *pbVar10;
    pbVar25 = (byte *)CONCAT31(uVar18,bVar23);
    uVar11 = CONCAT22(uVar22,CONCAT11(cVar29 + cVar4,cVar27)) | (uint)pbVar10;
    uVar17 = (undefined3)((uint)piVar12 >> 8);
    bVar7 = (byte)piVar12 | *pbVar25;
    pbVar13 = (byte *)CONCAT31(uVar17,bVar7);
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar8 - bVar23);
    *pbVar13 = *pbVar13 + bVar7;
    pbVar24 = pbVar10 + 4;
    out(*(undefined4 *)pbVar10,(short)pbVar25);
    *pbVar13 = bVar7;
    *pbVar25 = *pbVar25 + (bVar8 - bVar23);
    pbVar10 = pbVar10 + 8;
    out(*(undefined4 *)pbVar24,(short)pbVar25);
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    puVar28 = (uint *)(CONCAT31((int3)(uVar11 >> 8),(char)uVar11 + -10) | (uint)pbVar10);
    pbVar24 = (byte *)CONCAT31(uVar18,(bVar23 | *pbVar10) + (char)*unaff_EDI);
    cVar4 = bVar7 - (char)*unaff_EDI;
    puVar9 = (uint *)CONCAT31(uVar17,cVar4 - *(char *)CONCAT31(uVar17,cVar4));
  }
  *puVar9 = (uint)(pbVar24 + *puVar9);
  cVar4 = (char)puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4;
  *(int *)pbVar19 = *(int *)pbVar19 - (int)unaff_EBP;
  bVar7 = *pbVar10;
  bVar8 = (byte)pbVar24;
  *pbVar10 = *pbVar10 + bVar8;
  *(byte *)puVar9 = (byte)*puVar9 + cVar4 + CARRY1(bVar7,bVar8);
  *pbVar19 = *pbVar19 + cVar4;
  uVar11 = *puVar28;
  *(char *)puVar28 = (char)*puVar28 + 'r';
  *(char *)puVar28 = (char)*puVar28;
  cVar4 = (char)((uint)pbVar24 >> 8);
  if (SCARRY1((char)uVar11,'r')) {
    pbVar10 = pbVar10 + *(int *)(pbVar24 + -10);
  }
  else {
    while( true ) {
      *pbVar10 = *pbVar10 + (char)puVar9;
      uVar17 = (undefined3)((uint)puVar9 >> 8);
      cVar5 = (char)puVar9 + (char)*puVar28;
      pcVar30 = (char *)CONCAT31(uVar17,cVar5);
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                 CONCAT11((char)((uint)puVar28 >> 8) +
                                          *(char *)((int)puVar28 + 0x7b),(char)puVar28));
      *pcVar30 = *pcVar30 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar11 = CONCAT31(uVar17,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar11;
      piVar12 = (int *)CONCAT22((short)(uVar11 >> 0x10),
                                CONCAT11((char)((uint)puVar9 >> 8) + in_AF,bVar6));
      *piVar12 = *piVar12 + (int)piVar12;
      uVar17 = (undefined3)((uint)piVar12 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar12 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar17,bVar6);
      pbVar13 = (byte *)CONCAT31(uVar17,bVar6);
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      pbVar10 = pbVar10 + (-(uint)CARRY1(bVar7,bVar6) - *(int *)pbVar13);
      puVar9 = (uint *)(pbVar13 + 0xfc00);
      *pbVar24 = *pbVar24 + cVar4;
      uVar11 = *puVar9;
      bVar7 = (byte)puVar9;
      *(byte *)puVar9 = (byte)*puVar9 + bVar7;
      uVar2 = (uint)CARRY1((byte)uVar11,bVar7);
      uVar11 = *puVar28;
      uVar1 = *puVar28;
      *puVar28 = (uint)((byte *)(uVar1 + (int)puVar9) + uVar2);
      if (!CARRY4(uVar11,(uint)puVar9) && !CARRY4(uVar1 + (int)puVar9,uVar2)) break;
      *(byte *)puVar9 = (byte)*puVar9 + bVar7;
    }
  }
  uVar11 = (uint)puVar9 | *puVar9;
  uVar22 = SUB42(pbVar24,0);
  *pbVar10 = *pbVar10 + (char)uVar11;
  piVar12 = (int *)(uVar11 + 0xc1872);
  if (SCARRY4(uVar11,0xc1872)) {
    cVar5 = (char)piVar12;
    *(char *)piVar12 = *(char *)piVar12 + cVar5;
    *pbVar24 = *pbVar24 + cVar5;
    *(char *)piVar12 = *(char *)piVar12 + cVar5;
    *(char *)puVar28 = (char)*puVar28 + (char)pbVar19;
    *(char *)piVar12 = *(char *)piVar12 + cVar5;
    *(char *)((int)piVar12 * 2) = *(char *)((int)piVar12 * 2) + bVar8;
    pbVar13 = pbVar10;
    goto code_r0x00405117;
  }
  do {
    bVar7 = *pbVar10;
    bVar8 = (byte)piVar12;
    *pbVar10 = *pbVar10 + bVar8;
    if (CARRY1(bVar7,bVar8)) {
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      uVar17 = (undefined3)((uint)pbVar19 >> 8);
      bVar7 = (byte)pbVar19 | bRam396f1609;
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      pbVar19 = (byte *)CONCAT31(uVar17,bVar7 | *(byte *)CONCAT31(uVar17,bVar7));
      uVar17 = (undefined3)((uint)piVar12 >> 8);
      bVar8 = bVar8 | *pbVar24;
      pcVar30 = (char *)CONCAT31(uVar17,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        pbVar13 = pbVar10 + 4;
        out(*(undefined4 *)pbVar10,uVar22);
        uVar11 = CONCAT22((short)((uint)piVar12 >> 0x10),(ushort)bVar8);
        *pbVar13 = *pbVar13 + bVar8;
        pcVar30 = (char *)(uVar11 | 8);
        cVar5 = (char)((uint)puVar28 >> 8) + *(char *)((int)puVar28 + 0x7a);
        puVar9 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar5,(char)puVar28));
        *pcVar30 = *pcVar30 + (char)pcVar30;
        cVar4 = (char)pcVar30 + 'o';
        piVar12 = (int *)CONCAT31((int3)(uVar11 >> 8),cVar4);
        *(char *)piVar12 = (char)*piVar12 + cVar4;
        *pbVar19 = *pbVar19 + 1;
        pbVar10 = pbVar10 + 8;
        out(*(undefined4 *)pbVar13,uVar22);
        pbVar24 = (byte *)((uint)pbVar24 ^ uRam08122c04);
        iVar14 = CONCAT31((int3)((uint)(*piVar12 * 0x17070600) >> 8),2);
        *(char *)(iVar14 * 2) = *(char *)(iVar14 * 2) - cVar5;
        do {
          bVar7 = (byte)iVar14;
          *pbVar10 = *pbVar10 + bVar7;
          bVar31 = CARRY1(bVar7,(byte)*puVar9);
          uVar17 = (undefined3)((uint)iVar14 >> 8);
          cVar4 = bVar7 + (byte)*puVar9;
          pbVar13 = (byte *)CONCAT31(uVar17,cVar4);
          uVar22 = in_DS;
          uVar3 = uStack_24;
          if (SCARRY1(bVar7,(byte)*puVar9) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar13 = *pbVar13 + cVar4;
          uVar11 = CONCAT31(uVar17,cVar4 + '\'') + 0x1ebd9f3;
          uStack_28 = (undefined1)in_ES;
          uStack_27 = (undefined1)((ushort)in_ES >> 8);
          piVar12 = (int *)(uVar11 ^ 0x73060000);
          pbVar19 = pbVar19 + 1;
          *piVar12 = (int)(*piVar12 + (int)piVar12);
          puVar9 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),
                                    CONCAT11((byte)((uint)puVar9 >> 8) | unaff_EBP[0x7e],
                                             (char)puVar9));
          cVar4 = (char)uVar11;
          *(char *)piVar12 = (char)*piVar12 + cVar4;
          uVar11 = CONCAT31((int3)((uint)piVar12 >> 8),cVar4 + '\x02');
          bVar31 = 0xd9f2d2da < uVar11;
          iVar14 = uVar11 + 0x260d2d25;
          pcVar30 = unaff_EBP;
          do {
            uVar17 = (undefined3)((uint)iVar14 >> 8);
            bVar8 = (char)iVar14 + -2 + bVar31;
            pbVar13 = (byte *)CONCAT31(uVar17,bVar8);
            bVar7 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar8;
            bVar6 = (byte)puVar9;
            uStack_24 = in_ES;
            if (CARRY1(bVar7,bVar8)) {
              *pbVar13 = *pbVar13 + bVar8;
              puVar9 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),
                                        CONCAT11((byte)((uint)puVar9 >> 8) | pcVar30[0x7f],bVar6));
              *pbVar13 = *pbVar13 + bVar8;
              pbVar13 = (byte *)CONCAT31(uVar17,bVar8 + 0x2a);
              *pbVar13 = *pbVar13 + bVar8 + 0x2a;
              *(byte *)puVar9 = (byte)*puVar9 + (char)pbVar24;
              uVar22 = in_DS;
              while( true ) {
                in_DS = uVar22;
                bVar8 = (byte)pbVar13;
                *pbVar24 = *pbVar24 ^ bVar8;
                *pbVar24 = *pbVar24 + (char)puVar9;
                *pbVar13 = *pbVar13 + bVar8;
                *(byte *)puVar9 = (byte)*puVar9 + (char)((uint)pbVar24 >> 8);
                bVar7 = *pbVar13;
                *pbVar13 = *pbVar13 + bVar8;
                uVar11 = *puVar9;
                uVar1 = *puVar9;
                *puVar9 = (uint)(pbVar13 + uVar1 + CARRY1(bVar7,bVar8));
                uVar17 = (undefined3)((uint)pbVar13 >> 8);
                if (CARRY4(uVar11,(uint)pbVar13) ||
                    CARRY4((uint)(pbVar13 + uVar1),(uint)CARRY1(bVar7,bVar8))) break;
                *pbVar10 = *pbVar10 + bVar8;
                pcVar20 = (char *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                           CONCAT11((char)((uint)pbVar19 >> 8) + *pbVar13,
                                                    (char)pbVar19));
                *pbVar10 = *pbVar10 + bVar8;
                piVar12 = (int *)CONCAT31(uVar17,bVar8 | (byte)*puVar9);
                pbVar19 = pbVar10;
                while( true ) {
                  pbVar10 = pbVar19 + 4;
                  out(*(undefined4 *)pbVar19,(short)pbVar24);
                  pbVar24 = pbVar24 + 1;
                  *piVar12 = (int)(*piVar12 + (int)piVar12);
                  bVar8 = (byte)((uint)pcVar20 >> 8) | *pbVar24;
                  uVar17 = (undefined3)((uint)piVar12 >> 8);
                  bVar7 = (byte)piVar12 ^ *pbVar24;
                  pcVar15 = (char *)CONCAT31(uVar17,bVar7);
                  cRam282b0000 = cRam282b0000 - bVar8;
                  *pcVar15 = *pcVar15 + bVar7;
                  unaff_EBP = pcVar30 + -*(int *)pbVar24;
                  uStack_28 = (undefined1)in_DS;
                  uStack_27 = (undefined1)((ushort)in_DS >> 8);
                  cVar4 = *(char *)((int)unaff_EDI + 0x17);
                  *pcVar15 = *pcVar15 + bVar7;
                  pbVar19 = (byte *)CONCAT22((short)((uint)pcVar20 >> 0x10),
                                             CONCAT11(bVar8 + cVar4 | *pbVar24,(char)pcVar20));
                  *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
                  *(byte *)((int)pcVar15 * 2) = *(byte *)((int)pcVar15 * 2) ^ bVar7;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  bVar7 = bVar7 + in_AF * -6;
                  pbVar13 = (byte *)CONCAT31(uVar17,bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
                  *(char *)((int)pbVar13 * 2) =
                       *(char *)((int)pbVar13 * 2) + (char)((uint)pbVar24 >> 8);
                  bVar31 = CARRY1(*pbVar19,(byte)pbVar24);
                  *pbVar19 = *pbVar19 + (byte)pbVar24;
                  uVar22 = in_DS;
                  uVar3 = in_ES;
GenerateStatusText:
                  in_DS = uVar3;
                  pcVar30 = unaff_EBP;
                  uStack_24 = in_DS;
                  if (!bVar31) break;
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  iVar14 = CONCAT31((int3)((uint)pbVar19 >> 8),(byte)pbVar19 | *pbVar24);
                  uVar22 = (undefined2)((uint)puVar9 >> 0x10);
                  cVar27 = (char)((uint)puVar9 >> 8) + *(byte *)((int)puVar9 + 0x7d);
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  *(char *)unaff_EDI = (char)*unaff_EDI - (char)((uint)pbVar19 >> 8);
                  iVar14 = iVar14 - *(int *)(iVar14 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar27,(char)puVar9)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar10,(short)pbVar24);
                  pbVar24 = (byte *)CONCAT22(uStack_26,CONCAT11(uStack_27,uStack_28));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar19 = pbVar10 + 8;
                  out(*(undefined4 *)(pbVar10 + 4),CONCAT11(uStack_27,uStack_28));
                  pcVar30 = unaff_EBP + 1;
                  cVar5 = (char)iVar14;
                  pcVar20 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                             CONCAT11((byte)((uint)iVar14 >> 8) |
                                                      *(byte *)((int)unaff_EDI + 0x46),cVar5));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_27,uStack_28);
                  uVar17 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar19,0xf0)) >> 8);
                  piVar12 = (int *)CONCAT31(uVar17,0x5f);
                  unaff_EDI = (int *)((int)unaff_EDI + 1);
                  *piVar12 = (int)(*piVar12 + (int)piVar12);
                  puVar9 = (uint *)CONCAT22(uVar22,CONCAT11(cVar27 + cVar4 | pbVar10[-0x78],
                                                            (char)puVar9));
                  *(char *)piVar12 = (char)*piVar12 + '_';
                  puVar28 = (uint *)CONCAT31(uVar17,0x8c);
                  *(byte **)(pbVar19 + (int)unaff_EDI * 8) =
                       pbVar24 + *(int *)(pbVar19 + (int)unaff_EDI * 8);
                  bVar7 = *pbVar19;
                  *pbVar19 = *pbVar19 + 0x8c;
                  if (bVar7 < 0x74) {
                    *pbVar24 = *pbVar24 + cVar5;
                    *(byte *)puVar9 = (byte)*puVar9 >> 1;
                    *(char *)puVar28 = (char)*puVar28 + -0x74;
                    *puVar28 = (uint)(pcVar30 + *puVar28);
                    *puVar28 = *puVar28 << 1 | (uint)((int)*puVar28 < 0);
                    *pbVar24 = *pbVar24 + cVar5;
                    unaff_EBP[2] = unaff_EBP[2] - cVar5;
                    *pbVar24 = *pbVar24 + cVar5;
                    pbVar10 = (byte *)CONCAT31(uVar17,0x83);
                    puVar28 = puVar9;
                    goto code_r0x00405312;
                  }
                  *puVar28 = (uint)(*puVar28 + (int)puVar28);
                  piVar12 = (int *)(CONCAT31(uVar17,(byte)puVar28[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar28[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar12 = (int *)((int)piVar12 + *(int *)pbVar19);
                }
              }
              *pbVar24 = *pbVar24 + bVar8;
              *(byte *)puVar9 = (byte)*puVar9 - (char)pbVar24;
              *pbVar13 = *pbVar13 + bVar8;
              pbVar13 = (byte *)CONCAT31(uVar17,bVar8 | (byte)*puVar9);
            }
            else {
              cVar4 = (char)pbVar19;
              *pbVar24 = *pbVar24 + cVar4;
              *(byte **)pbVar13 = pbVar24 + *(int *)pbVar13;
              *pbVar13 = *pbVar13 + bVar8;
              bVar8 = bVar8 + *pbVar13;
              pbVar13 = (byte *)CONCAT31(uVar17,bVar8);
              if (-1 < (char)bVar8) {
                *(byte *)puVar9 = (byte)*puVar9 + bVar6;
                out(*(undefined4 *)pbVar10,(short)pbVar24);
                pbVar24 = pbVar24 + 1;
                *pbVar13 = *pbVar13 + bVar8;
                puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),
                                          bVar6 | (byte)((uint)iVar14 >> 8));
                cVar5 = bVar8 - *pbVar19;
                pcVar20 = (char *)CONCAT31(uVar17,cVar5);
                *pcVar20 = *pcVar20 + cVar5 + (bVar8 < *pbVar19);
                *pbVar24 = *pbVar24 + cVar5;
                pcVar20 = (char *)((int)pcVar20 * 2 + 0x79);
                *pcVar20 = *pcVar20 + (char)((uint)pbVar24 >> 8);
                pbVar13 = (byte *)in((short)pbVar24);
                pbVar10 = pbVar10 + 4;
              }
              *pbVar10 = *pbVar10 + cVar4;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              uStack_28 = (undefined1)in_DS;
              uStack_27 = (undefined1)((ushort)in_DS >> 8);
              bVar7 = *pbVar13;
              bVar23 = (byte)((uint)pbVar19 >> 8);
              bVar6 = bVar23 + *pbVar13;
              iVar14 = *(int *)pbVar13;
              *pbVar24 = *pbVar24 + cVar4;
              bVar8 = (char)(pbVar13 + (uint)CARRY1(bVar23,bVar7) + iVar14) - (byte)*puVar9;
              pbVar13 = (byte *)CONCAT31((int3)((uint)(pbVar13 + (uint)CARRY1(bVar23,bVar7) + iVar14
                                                      ) >> 8),bVar8);
              *(byte *)puVar9 = (byte)*puVar9 ^ bVar8;
              *pcVar30 = *pcVar30 + (char)puVar9;
              *pbVar13 = *pbVar13 + bVar8;
              *pbVar13 = *pbVar13 + bVar8;
              *pbVar13 = *pbVar13 + bVar8;
              pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                         CONCAT11(bVar6 + *pbVar13,cVar4));
              pbVar13 = pbVar13 + (uint)CARRY1(bVar6,*pbVar13) + *(int *)pbVar13;
              *pbVar24 = *pbVar24 + cVar4;
              pbVar10 = pbVar10 + *(int *)(pbVar24 + 0x3e);
            }
            *pbVar10 = *pbVar10 + (char)pbVar13;
            cVar4 = (char)pbVar13 + 'r';
            pbVar10 = pbVar10 + -1;
            uVar11 = CONCAT31((int3)((uint)pbVar13 >> 8),cVar4);
            *pbVar10 = *pbVar10 + cVar4;
            bVar31 = 0xfff38f8d < uVar11;
            iVar14 = uVar11 + 0xc7072;
            unaff_EBP = pcVar30;
          } while (SCARRY4(uVar11,0xc7072));
        } while( true );
      }
      *pcVar30 = *pcVar30 + bVar8;
      bVar8 = bVar8 + 0x6f;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar8);
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar8;
      uVar17 = (undefined3)
               ((uint)(pbVar13 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pbVar19 + (int)pbVar24)) >> 8)
      ;
      cVar5 = (char)(pbVar13 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pbVar19 + (int)pbVar24)) + 'E';
      pcVar30 = (char *)CONCAT31(uVar17,cVar5);
      *pcVar30 = *pcVar30 + cVar5;
      cVar5 = cVar5 + *pcVar30;
      pcVar30 = (char *)CONCAT31(uVar17,cVar5);
      *pcVar30 = *pcVar30 + cVar5;
      puVar9 = (uint *)CONCAT31(uVar17,cVar5 + *pcVar30);
      *(char *)puVar9 = (char)*puVar9 + cVar5 + *pcVar30;
      pbVar13 = (byte *)((uint)puVar9 | *puVar9);
      bVar7 = *pbVar13;
      bVar8 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar8;
      piVar12 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar8 + CARRY1(bVar7,bVar8));
      pbVar13 = pbVar10;
code_r0x00405117:
      *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
      puVar28 = (uint *)((int)puVar28 - *puVar28);
      pbVar10 = pbVar13 + 4;
      out(*(undefined4 *)pbVar13,uVar22);
    }
    *pbVar24 = *pbVar24 + (char)pbVar19;
    bVar31 = puVar28 < (uint *)*piVar12;
    puVar28 = (uint *)((int)puVar28 - *piVar12);
    bVar7 = (byte)((uint)pbVar19 >> 8);
    *(char *)((int)unaff_EDI + 0x39) = (*(char *)((int)unaff_EDI + 0x39) - bVar7) - bVar31;
    *piVar12 = (int)(*piVar12 + (int)piVar12);
    uVar11 = *puVar28;
    *(int *)((int)unaff_EDI + 0x39) = *(int *)((int)unaff_EDI + 0x39) - (int)unaff_EBP;
    *piVar12 = (int)(*piVar12 + (int)piVar12);
    pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                               CONCAT11(bVar7 | (byte)uVar11 | (byte)*puVar28,(char)pbVar19));
    *(char *)(piVar12 + 10) = (char)piVar12[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
  bVar7 = (char)piVar12 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar12 >> 8),bVar7);
  *pbVar10 = *pbVar10 ^ bVar7;
  *(byte *)puVar9 = (byte)*puVar9 + (char)((uint)pcVar20 >> 8);
  bVar7 = *pbVar24;
  *pbVar24 = *pbVar24 + (byte)pcVar20;
  piVar12 = (int *)(((uint)pbVar10 | 0x1496f09) + *unaff_EDI + (uint)CARRY1(bVar7,(byte)pcVar20));
  pbVar13 = pbVar19 + 4;
  out(*(undefined4 *)pbVar19,(short)pbVar24);
  pbVar25 = pbVar24 + -1;
  *piVar12 = *piVar12 + (int)piVar12;
  pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 | (byte)*puVar9);
  cVar4 = (char)piVar12 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar12 >> 8),cVar4);
  puVar28 = puVar9;
  pbVar19 = pbVar13;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar24 = *pbVar24 - (char)((uint)pbVar25 >> 8);
    *pbVar10 = *pbVar10 + cVar4;
code_r0x00405396:
    bVar7 = *pbVar10;
    bVar8 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar8;
    *(byte **)pbVar13 = pbVar10 + (uint)CARRY1(bVar7,bVar8) + *(int *)pbVar13;
    out(*(undefined4 *)pbVar13,(short)pbVar24);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar30 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((byte)((uint)pbVar10 >> 8) | pbVar13[4],bVar8));
    *(int *)((int)unaff_EDI + -1) = (int)(pcVar30 + *(int *)((int)unaff_EDI + -1));
    out(*(undefined4 *)(pbVar13 + 4),(short)pbVar24);
    *pcVar30 = *pcVar30 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar12 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar9 = (uint *)((int)puVar28 + -1);
  *piVar12 = *piVar12 + (int)piVar12;
  uVar17 = (undefined3)((uint)pbVar24 >> 8);
  piVar12 = (int *)((int)piVar12 + 0x1b7e);
  bVar6 = (byte)pbVar24 | *(byte *)puVar9 | *(byte *)puVar9;
  iRam04115f2c = iRam04115f2c + (int)piVar12;
  out(*(undefined4 *)pbVar19,(short)CONCAT31(uVar17,bVar6));
  *piVar12 = *piVar12 + (int)piVar12;
  bVar6 = bVar6 | (byte)piVar12;
  iVar26 = CONCAT31(uVar17,bVar6);
  pbVar10 = (byte *)((int)piVar12 - *piVar12);
  cVar4 = (char)pbVar10;
  *pcVar20 = *pcVar20 + cVar4;
  cVar5 = (char)pcVar20 - bVar6;
  *pbVar10 = *pbVar10 + cVar4;
  uVar22 = (undefined2)((uint)pcVar20 >> 0x10);
  bVar8 = (byte)((uint)pcVar20 >> 8) | *pbVar10;
  pcVar30 = pcVar30 + -1;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  bVar7 = *(byte *)(CONCAT22(uVar22,CONCAT11(bVar8,cVar5)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar10;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar30;
  *pbVar10 = *pbVar10 + cVar4;
  bVar7 = bVar8 | bVar7 | *(byte *)puVar9;
  iVar21 = CONCAT22(uVar22,CONCAT11(bVar7,cVar5));
  pbVar25 = (byte *)((uint)(pbVar19 + 4) ^ *(uint *)(iVar26 + -0x43));
  iVar14 = *(int *)pbVar10;
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  if (SCARRY4(iVar14,(int)pbVar10)) {
    *pbVar10 = *pbVar10 + cVar4;
  }
  pbVar24 = pbVar10 + 0x5674;
  unaff_EDI = (int *)((int)unaff_EDI +
                     (-(uint)((byte *)0xffffa98b < pbVar10) - *(int *)(pbVar25 + -0x7f)));
  bVar8 = (byte)pbVar24;
  *pbVar24 = *pbVar24 + bVar8;
  uVar18 = (undefined3)((uint)pbVar24 >> 8);
  bVar23 = bVar8 + 0x2d;
  piVar12 = (int *)CONCAT31(uVar18,bVar23);
  *(uint *)(pbVar25 + (int)unaff_EDI * 8) =
       *(int *)(pbVar25 + (int)unaff_EDI * 8) + iVar26 + (uint)(0xd2 < bVar8);
  bVar8 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar23;
  if (!CARRY1(bVar8,bVar23)) {
    do {
      pbVar24 = (byte *)(iVar26 + 1);
      bVar8 = (byte)piVar12;
      *(byte *)piVar12 = (char)*piVar12 + bVar8;
      bVar6 = (byte)((uint)piVar12 >> 8);
      bVar23 = (byte)puVar9 | bVar6;
      puVar28 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),bVar23);
      out(*(undefined4 *)pbVar25,(short)pbVar24);
      *(byte *)piVar12 = (char)*piVar12 + bVar8;
      uVar22 = (undefined2)((uint)iVar21 >> 0x10);
      cVar4 = (char)iVar21;
      pbVar10 = (byte *)CONCAT22(uVar22,CONCAT11((byte)((uint)iVar21 >> 8) | *pbVar24,cVar4));
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar8;
      *(byte *)piVar12 = (char)*piVar12 + bVar8 + CARRY1(bVar7,bVar8);
      *pbVar24 = *pbVar24 + bVar8;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar6;
      *(int *)((int)piVar12 * 2) =
           *(int *)((int)piVar12 * 2) + CONCAT22(uVar22,CONCAT11(0x1c,cVar4));
      *(byte *)piVar12 = (char)*piVar12 + bVar8;
      cVar5 = (char)pbVar24;
      *(byte *)puVar28 = (byte)*puVar28 + cVar5;
      *(byte *)((int)piVar12 * 2) = *(byte *)((int)piVar12 * 2) ^ bVar8;
      *(byte *)piVar12 = (char)*piVar12 + bVar8;
      pbVar10 = pbVar25 + 8;
      out(*(undefined4 *)(pbVar25 + 4),(short)pbVar24);
      piVar12 = (int *)0xa0a0000;
      *pbVar24 = *pbVar24;
      bVar8 = cVar4 - cVar5;
      iVar21 = CONCAT22(uVar22,CONCAT11(*(byte *)(unaff_EDI + 0x14) | 0x1c | bRam0ca87216,bVar8));
      *pbVar24 = *pbVar24;
      bVar7 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar8;
      if (!CARRY1(bVar7,bVar8)) {
        piVar12 = (int *)0x1e7b7000;
        bVar7 = (byte)((uint)puVar9 >> 8) | *(byte *)(iVar26 + 3);
        puVar28 = (uint *)CONCAT22((short)((uint)puVar9 >> 0x10),CONCAT11(bVar7,bVar23));
        if (bVar7 != 0) {
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar5 + pbVar10[(int)unaff_EDI * 8])
          ;
          piVar12 = (int *)0x6d7d7000;
          iVar21 = iVar21 + 1;
        }
      }
      *piVar12 = (int)(*piVar12 + (int)piVar12);
      iVar26 = CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | pbVar10[(int)unaff_EDI * 8]);
      *(char *)piVar12 = (char)*piVar12;
      piVar12 = (int *)CONCAT31((int3)((uint)piVar12 >> 8),0xf9);
      *unaff_EDI = (int)((int)piVar12 + *unaff_EDI + 1);
      pbVar25 = pbVar25 + 0xc;
      out(*(undefined4 *)pbVar10,(short)iVar26);
      puVar9 = puVar28;
    } while( true );
  }
  *piVar12 = (int)(*piVar12 + (int)piVar12);
  bVar23 = bVar23 | *(byte *)((int)piVar12 + 0x4000081);
  piVar12 = (int *)CONCAT31(uVar18,bVar23);
  if ('\0' < (char)bVar23) {
    *(byte *)piVar12 = (char)*piVar12 + bVar23;
    puVar16 = (uint *)CONCAT31(uVar18,bVar23 + 0x28);
    *puVar16 = *puVar16 ^ (uint)puVar16;
    *(byte *)puVar9 = *(byte *)puVar9 + bVar7;
    cVar4 = (bVar23 + 0x28) - bVar7;
    pcVar30 = (char *)CONCAT31(uVar18,cVar4);
    *pcVar30 = *pcVar30 + cVar4;
    pbVar24 = (byte *)CONCAT31(uVar17,bVar6 | *(byte *)puVar9);
    pcVar20 = (char *)CONCAT22((short)((uint)puVar9 >> 0x10),
                               CONCAT11((char)((uint)puVar9 >> 8) + *(byte *)((int)puVar28 + 0x7d),
                                        (char)puVar9));
    *pcVar30 = *pcVar30 + cVar4;
    pbVar10 = (byte *)CONCAT31(uVar18,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar18,cVar4 + 0x39U));
    *pcVar20 = *pcVar20 + bVar7;
    pbVar13 = pbVar25 + 4;
    out(*(undefined4 *)pbVar25,(short)pbVar24);
    goto code_r0x00405396;
  }
  pbVar19 = pbVar25 + 4;
  out(*(undefined4 *)pbVar25,(short)iVar26);
  pcVar20 = (char *)(iVar21 + -1);
  *piVar12 = (int)(*piVar12 + (int)piVar12);
  pbVar24 = (byte *)CONCAT31(uVar17,bVar6 | *(byte *)puVar9);
  goto code_r0x004052ee;
}


