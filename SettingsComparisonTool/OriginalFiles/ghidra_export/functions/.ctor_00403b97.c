/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403b97
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(undefined4 param_1, byte * param_2)
 * Local Vars  : uStack_8, iStack_3b, pcVar2, iVar1, bVar4, uVar3, in_EAX, bVar5, piVar7, pbVar6, pcVar9, pbVar8, uVar11, puVar10, extraout_ECX, uVar12, bVar14, pcVar13, bVar16, bVar15, cVar18, uVar17, param_1, pbVar20, param_2, puVar19, uVar22, uVar21, cVar24, cVar23, puVar25, unaff_EBX, pcVar26, unaff_EBP, unaff_EDI, unaff_ESI, bVar28, pbVar27, uVar29
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403baf) overlaps instruction at (ram,0x00403baa)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall _ctor(undefined4 param_1,byte *param_2)

{
  int iVar1;
  code *pcVar2;
  uint3 uVar3;
  byte bVar4;
  byte bVar5;
  byte *in_EAX;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  char *pcVar9;
  uint *puVar10;
  byte bVar15;
  byte bVar16;
  uint uVar12;
  uint extraout_ECX;
  char *pcVar13;
  undefined2 uVar17;
  char cVar18;
  uint *puVar19;
  undefined3 uVar21;
  undefined2 uVar22;
  byte *pbVar20;
  char cVar23;
  char cVar24;
  undefined4 unaff_EBX;
  undefined4 *puVar25;
  undefined4 *unaff_EBP;
  char *pcVar26;
  byte *unaff_ESI;
  byte *pbVar27;
  int unaff_EDI;
  bool bVar28;
  undefined8 uVar29;
  int iStack_3b;
  undefined4 uStack_8;
  undefined3 uVar11;
  byte bVar14;
  
                    /* .NET CLR Managed Code */
  bVar4 = (byte)((uint)param_1 >> 8);
  cVar18 = (char)param_1;
  bVar14 = bVar4 + *in_EAX;
  uVar12 = CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar14,cVar18));
  pbVar6 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
  *param_2 = *param_2 + cVar18;
  uVar21 = (undefined3)((uint)unaff_EBX >> 8);
  cVar23 = (char)unaff_EBX - unaff_ESI[2];
  pbVar20 = (byte *)CONCAT31(uVar21,cVar23);
  bVar4 = (byte)pbVar6;
  uVar11 = (undefined3)((uint)pbVar6 >> 8);
  if ((POPCOUNT(cVar23) & 1U) == 0) {
    *pbVar6 = *pbVar6 + bVar4;
    bVar4 = bVar4 | *pbVar20;
    pbVar6 = (byte *)CONCAT31(uVar11,bVar4);
    if (bVar4 != 0) {
      *pbVar6 = *pbVar6 + bVar4;
      uVar12 = (uint)CONCAT11(bVar14 | *param_2,cVar18);
      bVar14 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar4;
      unaff_ESI = unaff_ESI + (uint)CARRY1(bVar14,bVar4) + *(int *)pbVar6;
      pbVar6 = pbVar6 + *(int *)pbVar6;
      bVar14 = (char)pbVar6 - *pbVar6;
      pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar14);
      bVar4 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar14;
      pbVar6 = pbVar6 + (-0x73110000 - (uint)CARRY1(bVar4,bVar14));
    }
    *pbVar6 = *pbVar6 + (char)pbVar6;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    pbVar6 = pbVar6 + -*(int *)pbVar6;
    *param_2 = *param_2 + (char)uVar12;
    bVar4 = (char)pbVar6 - *pbVar6;
    pcVar26 = (char *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar4);
    *pbVar20 = *pbVar20 + (char)param_2;
    *pbVar20 = *pbVar20 ^ bVar4;
    *param_2 = *param_2 + (char)(uVar12 >> 8);
    *pcVar26 = *pcVar26 + bVar4;
    cRam73110000 = cRam73110000 + cVar23;
    pcVar2 = (code *)swi(3);
    pbVar6 = (byte *)(*pcVar2)();
    return pbVar6;
  }
  puVar25 = (undefined4 *)&stack0xfffffffc;
  pcVar26 = &stack0xfffffffc;
  cVar18 = '\t';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar25 = puVar25 + -1;
    *puVar25 = *unaff_EBP;
    cVar18 = cVar18 + -1;
  } while ('\0' < cVar18);
  bVar4 = bVar4 | *unaff_ESI;
  pbVar27 = (byte *)(unaff_EDI + iStack_3b);
  *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
  bVar4 = bVar4 | *param_2;
  pbVar6 = (byte *)CONCAT31(uVar11,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *pbVar6 = *pbVar6 + bVar4;
    *unaff_ESI = *unaff_ESI + 1;
    return (byte *)CONCAT31(uVar11,bVar4 + 6);
  }
  bVar4 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + 1;
  pcVar2 = (code *)swi(4);
  if (SCARRY1(bVar4,'\x01')) {
    uVar29 = (*pcVar2)();
    param_2 = (byte *)((ulonglong)uVar29 >> 0x20);
    pbVar6 = (byte *)uVar29;
    uVar12 = extraout_ECX;
  }
  *pbVar6 = *pbVar6 + (char)pbVar6;
  puVar19 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((byte)((uint)param_2 >> 8) | pbVar20[0x2f],(char)param_2));
  *pbVar6 = *pbVar6 + (char)pbVar6;
  cVar18 = (char)uVar12;
  bVar15 = (byte)(uVar12 >> 8) | *pbVar6;
  pbVar6 = pbVar6 + *(int *)pbVar6;
  bVar4 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar15;
  bVar14 = (byte)pbVar6;
  if (CARRY1(bVar4,bVar15)) {
    *pbVar6 = *pbVar6 + bVar14;
    bVar15 = bVar15 | (byte)*puVar19;
    *pbVar20 = *pbVar20 - (char)param_2;
    *pbVar6 = *pbVar6 + bVar14;
    uVar11 = (undefined3)((uint)pbVar6 >> 8);
    bVar14 = bVar14 | (byte)*puVar19;
    piVar7 = (int *)CONCAT31(uVar11,bVar14);
    iVar1 = *piVar7;
    pcVar26 = &stack0xfffffffc + iVar1;
    *(byte *)piVar7 = (char)*piVar7 + bVar14;
    pbVar20 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(char *)(CONCAT31(uVar21,cVar23 - *unaff_ESI) + 0x5f),
                                        cVar23 - *unaff_ESI));
    *(byte *)piVar7 = (char)*piVar7 + bVar14;
    bVar4 = bVar14 + 0x2a & (byte)*puVar19;
    pbVar27 = pbVar27 + *(int *)(&stack0x0000005b + iVar1);
    *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
    pbVar6 = (byte *)CONCAT31(uVar11,bVar4 + 0x2a);
    *(byte *)puVar19 = (byte)*puVar19 + 0x28;
    *pbVar6 = *pbVar6 + bVar4 + 0x2a;
  }
  else {
    *unaff_ESI = *unaff_ESI + bVar14;
  }
  pcVar13 = (char *)CONCAT22((short)(uVar12 >> 0x10),CONCAT11(bVar15,cVar18));
  *pcVar26 = *pcVar26 - bVar15;
  *(byte *)puVar19 = (byte)*puVar19 + cVar18;
  bVar4 = (byte)pbVar6 - 0xb;
  pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar4);
  if (10 < (byte)pbVar6) {
    *pbVar8 = *pbVar8 | bVar4;
    return pbVar8;
  }
  *(byte *)puVar19 = (byte)*puVar19 + cVar18;
  do {
    bVar4 = pbVar20[-0x23];
    bVar15 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar15;
    bVar14 = pcVar26[-0x22];
    *pbVar8 = *pbVar8 + bVar15;
    uVar11 = (undefined3)((uint)pbVar8 >> 8);
    bVar15 = bVar15 | *unaff_ESI;
    pbVar6 = (byte *)CONCAT31(uVar11,bVar15);
    cVar23 = (char)pbVar20 - *unaff_ESI;
    pbVar20 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar20 >> 0x10),
                                               CONCAT11((char)((uint)pbVar20 >> 8) + bVar4 | bVar14,
                                                        (char)pbVar20)) >> 8),cVar23);
    cVar18 = (char)pcVar13;
    pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                               CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar6,cVar18));
    *(byte *)puVar19 = (byte)*puVar19 + cVar18;
    bVar14 = bVar15 - *pbVar6;
    pbVar8 = (byte *)CONCAT31(uVar11,bVar14);
    unaff_ESI = unaff_ESI + (-(uint)(bVar15 < *pbVar6) - *(int *)pbVar8);
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 * '\x02');
    *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
    *pbVar27 = *pbVar27 + cVar23;
    bVar4 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar14;
    *puVar19 = (uint)(pbVar8 + (uint)CARRY1(bVar4,bVar14) + *puVar19);
  } while ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *pbVar8 = *pbVar8 + (char)pbVar8;
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar8[(int)pcVar13]);
  bVar28 = false;
  pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
  do {
    pbVar27 = pbVar27 + (-(uint)bVar28 - *(int *)pbVar20);
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar8 >> 8),*pcVar13);
    *pcVar9 = *pcVar9 + *pcVar13;
    pbVar8 = (byte *)CONCAT31((int3)((uint)(pcVar9 + (unaff_ESI[0x2000001] <
                                                     (byte)((uint)pcVar13 >> 8)) + 0xda7d) >> 8),
                              ((byte)(pcVar9 + (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                               0xda7d) | (byte)*puVar19) + 0x7d);
    pcVar13 = pcVar13 + -1;
    *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar13;
    while( true ) {
      uVar21 = (undefined3)((uint)puVar19 >> 8);
      cVar18 = (char)puVar19 + *(char *)((int)pbVar27 * 2 + 0xa0000e1);
      puVar19 = (uint *)CONCAT31(uVar21,cVar18);
      bVar28 = CARRY1((byte)pbVar8,(byte)*puVar19);
      uVar11 = (undefined3)((uint)pbVar8 >> 8);
      bVar4 = (byte)pbVar8 + (byte)*puVar19;
      pbVar8 = (byte *)CONCAT31(uVar11,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) break;
      *pbVar8 = *pbVar8 + bVar4;
      cVar23 = (char)pcVar13;
      pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar27[-0x65],cVar23));
      bVar14 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar4;
      if (CARRY1(bVar14,bVar4)) {
        *pbVar8 = *pbVar8 + bVar4;
        pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar20 >> 8) | pcVar26[-0x1d],
                                            (char)pbVar20));
        *pbVar8 = *pbVar8 + bVar4;
        bVar28 = false;
        bVar4 = bVar4 | (byte)*puVar19;
        pcVar9 = (char *)CONCAT31(uVar11,bVar4);
        while( true ) {
          bVar14 = (byte)pcVar9;
          uVar11 = (undefined3)((uint)pcVar9 >> 8);
          if (bVar28 == (char)bVar4 < '\0') break;
          *pcVar9 = *pcVar9 + bVar14;
          bVar14 = bVar14 | (byte)*puVar19;
          puVar10 = (uint *)CONCAT31(uVar11,bVar14);
          *pbVar27 = *pbVar27 << 1 | (char)*pbVar27 < '\0';
          uVar12 = *puVar10;
          *(byte *)puVar10 = (byte)*puVar10 + bVar14;
          pcVar26 = pcVar26 + (-(uint)CARRY1((byte)uVar12,bVar14) - *puVar10);
          *puVar10 = *puVar10 << 1 | (uint)((int)*puVar10 < 0);
          while( true ) {
            uVar12 = *puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + (byte)pcVar13;
            cVar18 = (char)puVar10 + 'o' + CARRY1((byte)uVar12,(byte)pcVar13);
            pcVar9 = (char *)CONCAT31((int3)((uint)puVar10 >> 8),cVar18);
            pcVar13 = (char *)0x20a0000;
            if ((POPCOUNT(cVar18) & 1U) != 0) break;
            *pcVar9 = *pcVar9 + cVar18;
            bVar4 = bRamfe140212;
            pcVar13 = (char *)0x0;
            uVar11 = (undefined3)((uint)(pcVar9 + -0x732b0000) >> 8);
            bVar14 = in(0);
            puVar10 = (uint *)CONCAT31(uVar11,bVar14);
            uVar12 = *puVar19;
            *(byte *)puVar19 = (byte)*puVar19;
            if (SCARRY1((byte)uVar12,'\0') != (char)(byte)*puVar19 < '\0') {
              *(byte *)puVar10 = (byte)*puVar10 + bVar14;
              bVar14 = bVar14 | (byte)*puVar19;
              puVar10 = (uint *)CONCAT31(uVar11,bVar14);
              if ((POPCOUNT(bVar14) & 1U) == 0) {
                *(byte *)puVar10 = (byte)*puVar10 + bVar14;
                pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar10) << 8);
                *(byte *)puVar10 = (byte)*puVar10 + bVar14;
                goto code_r0x00403d33;
              }
              *(byte *)puVar10 = (byte)*puVar10 + bVar14;
              puVar10 = (uint *)CONCAT31(uVar11,bVar14 | (byte)*puVar19);
            }
          }
          *(byte *)puVar19 = (byte)*puVar19;
          bVar28 = SCARRY1((char)puVar19,*pbVar27);
          bVar4 = (char)puVar19 + *pbVar27;
          puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar4);
        }
        if (bVar28 == (char)bVar4 < '\0') {
          *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar13;
          pbVar8 = (byte *)((uint)pcVar9 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar9 = *pcVar9 + bVar14;
        pbVar8 = (byte *)CONCAT31(uVar11,(bVar14 | (byte)*puVar19) + 0x7d);
        pcVar13 = pcVar13 + -1;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar13;
      }
      else {
        *(byte *)puVar19 = (byte)*puVar19 + cVar23;
        puVar19 = (uint *)CONCAT31(uVar21,cVar18 + *(char *)((int)pbVar27 * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  pcVar26 = pcVar26 + -*puVar10;
  do {
    bVar4 = (byte)puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + bVar4;
    pbVar27 = pbVar27 + -*(int *)(pcVar26 + -0x1a);
    *(byte *)puVar10 = (byte)*puVar10 + bVar4;
    bVar4 = bVar4 | (byte)*puVar19;
    puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar4);
    *(byte *)puVar10 = (byte)*puVar10 | bVar4;
    bVar4 = (byte)*puVar10;
    pcVar26 = (char *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
        bVar4 = (byte)puVar10 | (byte)*puVar19;
        puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
        uVar3 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        while( true ) {
          pcVar13 = (char *)((uint)uVar3 << 8);
          bVar5 = (byte)puVar10;
          *(byte *)puVar10 = (byte)*puVar10 & bVar5;
          bVar15 = *pbVar20;
          bVar16 = (byte)uVar3;
          bVar14 = *pbVar20;
          *pbVar20 = *pbVar20 + bVar16;
          bVar4 = *pbVar20;
          if (!CARRY1(bVar15,bVar16)) break;
          *(byte *)puVar10 = (byte)*puVar10 + bVar5;
          pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar20 >> 8) | bRam026fffe2,
                                              (char)pbVar20));
          *(byte *)puVar10 = (byte)*puVar10 + bVar5;
          bVar5 = bVar5 | (byte)*puVar19;
          puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar5);
          bVar28 = (POPCOUNT(bVar5) & 1U) == 0;
          while( true ) {
            cVar18 = (char)((uint)pbVar20 >> 8);
            uVar22 = (undefined2)((uint)pbVar20 >> 0x10);
            if (!bVar28) {
              *(byte *)puVar19 = (byte)*puVar19;
              pbVar20 = (byte *)CONCAT22(uVar22,CONCAT11(cVar18 + pbVar20[-0x1f],(char)pbVar20));
              goto code_r0x00403d52;
            }
            *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
            uVar17 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar14 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar10;
            uVar3 = CONCAT21(uVar17,bVar14);
            *puVar10 = *puVar10 & (uint)puVar10;
            *pbVar20 = *pbVar20 + bVar14;
            uVar11 = (undefined3)((uint)puVar10 >> 8);
            bVar4 = (char)puVar10 - bVar14;
            pcVar13 = (char *)CONCAT31(uVar11,bVar4);
            *pcVar13 = *pcVar13 + bVar4;
            bVar4 = bVar4 | (byte)*puVar19;
            puVar10 = (uint *)CONCAT31(uVar11,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar10 = (byte)*puVar10 + bVar4;
            pcVar13 = (char *)((uint)CONCAT21(uVar17,bVar14 | (byte)*puVar10) << 8);
            *puVar10 = *puVar10 - (int)puVar10;
            *(byte *)puVar19 = (byte)*puVar19;
            pbVar20 = (byte *)CONCAT22(uVar22,CONCAT11(cVar18 + pbVar20[-0x1d],(char)pbVar20));
            do {
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              uVar22 = (undefined2)((uint)puVar19 >> 0x10);
              cVar18 = (char)puVar19;
              bVar4 = (byte)((uint)puVar19 >> 8) | pbVar20[-0x17];
              puVar19 = (uint *)CONCAT22(uVar22,CONCAT11(bVar4,cVar18));
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar20 >> 8) | bRam026fffeb,
                                                  (char)pbVar20));
              do {
                *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
                uVar11 = (undefined3)((uint)puVar10 >> 8);
                bVar15 = (byte)puVar10 | (byte)*puVar19;
                pcVar9 = (char *)CONCAT31(uVar11,bVar15);
                bVar14 = pbVar20[-0x16];
                *pcVar9 = *pcVar9 + bVar15;
                pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                           CONCAT11((char)((uint)pbVar20 >> 8) + bVar14 |
                                                    bRam026fffec,(char)pbVar20));
                *pcVar9 = *pcVar9 + bVar15;
                pbVar6 = (byte *)CONCAT31(uVar11,bVar15 | (byte)*puVar19);
                while( true ) {
                  *pbVar6 = *pbVar6 + (byte)pbVar6;
                  uVar11 = (undefined3)((uint)pbVar6 >> 8);
                  bVar14 = (byte)pbVar6 | (byte)*puVar19;
                  puVar10 = (uint *)CONCAT31(uVar11,bVar14);
                  if ((POPCOUNT(bVar14) & 1U) != 0) break;
                  *(byte *)puVar10 = (byte)*puVar10 + bVar14;
                  bVar15 = pbVar27[-0x14];
                  *(byte *)puVar10 = (byte)*puVar10 + bVar14;
                  bVar14 = bVar14 | (byte)*puVar19;
                  pcVar9 = (char *)CONCAT31(uVar11,bVar14);
                  bVar5 = pbVar20[-0x15];
                  *pcVar9 = *pcVar9 + bVar14;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar15 |
                                                    pbVar27[-0x13]) << 8);
                  *pcVar9 = *pcVar9 + bVar14;
                  pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                             CONCAT11((char)((uint)pbVar20 >> 8) + bVar5 |
                                                      bRam026fffef,(char)pbVar20));
                  *pcVar9 = *pcVar9 + bVar14;
                  pbVar6 = (byte *)CONCAT31(uVar11,bVar14 | (byte)*puVar19);
                  do {
                    do {
                      bVar15 = (byte)pbVar6;
                      *pbVar6 = *pbVar6 + bVar15;
                      cVar24 = (char)pbVar20;
                      pbVar20 = (byte *)CONCAT22((short)((uint)pbVar20 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar20 >> 8) | *pbVar6,
                                                          cVar24));
                      *pbVar6 = bVar15;
                      *pbVar6 = *pbVar6 + bVar15;
                      cVar23 = (char)((uint)pcVar13 >> 8) + *pbVar6;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar23) << 8)
                      ;
                      uVar11 = (undefined3)((uint)pbVar6 >> 8);
                      bVar15 = bVar15 & *pbVar6;
                      pbVar6 = (byte *)CONCAT31(uVar11,bVar15);
                      bVar14 = *pbVar20;
                      *pbVar20 = *pbVar20 + cVar23;
                    } while (SCARRY1(bVar14,cVar23) == (char)*pbVar20 < '\0');
                    *pbVar6 = *pbVar6 + bVar15;
                    bVar15 = bVar15 | (byte)*puVar19;
                    pbVar6 = (byte *)CONCAT31(uVar11,bVar15);
                    if ((POPCOUNT(bVar15) & 1U) == 0) {
                      *pbVar6 = *pbVar6 + bVar15;
                      *pbVar6 = *pbVar6 + bVar15;
                      cVar18 = cVar18 - bVar4;
                      pbVar20 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),cVar18);
                      *pbVar6 = *pbVar6 + bVar15;
                      bRam0312382b = bRam0312382b | *pbVar20;
                      while( true ) {
                        bVar14 = (byte)pbVar6;
                        *pbVar6 = *pbVar6 + bVar14;
                        bRam0312382b = bRam0312382b | (pbVar27 + 0x21b0000)[(int)pbVar6];
                        uVar11 = (undefined3)((uint)pbVar6 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar20 = *pbVar20 + bRam0312382b;
                        pbVar6 = (byte *)CONCAT31(uVar11,bVar14 | *unaff_ESI);
                      }
                      *pbVar6 = *pbVar6 + bVar14;
                      bVar14 = bVar14 | *unaff_ESI;
                      pcVar26 = (char *)CONCAT31(uVar11,bVar14);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar20);
                      *pcVar26 = *pcVar26 + bVar14;
                      uVar17 = CONCAT11(bVar4 | bRam6f0a002b,cVar18);
                      pcVar13 = (char *)CONCAT22(uVar22,uVar17);
                      *pcVar26 = *pcVar26 + bVar14;
                      *pcVar13 = *pcVar13 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar17);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar24 + *pcVar13);
                  } while (SCARRY1(cVar24,*pcVar13) != (char)(cVar24 + *pcVar13) < '\0');
                }
                uVar12 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
              } while (SCARRY1((byte)uVar12,'\0') != (char)(byte)*puVar19 < '\0');
              *(byte *)puVar19 = (byte)*puVar19;
              *pcVar13 = *pcVar13 - (char)pbVar20;
              *(byte *)puVar10 = (byte)*puVar10 + bVar14;
              bVar14 = bVar14 | (byte)*puVar19;
              puVar10 = (uint *)CONCAT31(uVar11,bVar14);
              bVar28 = (POPCOUNT(bVar14) & 1U) == 0;
            } while (bVar28);
          }
        }
      } while (SCARRY1(bVar14,bVar16));
    }
    *pbVar20 = *pbVar20 + (char)((uint)pcVar13 >> 8);
    *pbVar27 = *pbVar27 - (char)pbVar20;
  } while( true );
}


