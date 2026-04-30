/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403c30
 * Raw Name    : <GetTableData>b__0
 * Demangled   : <GetTableData>b__0
 * Prototype   : bool <GetTableData>b__0(undefined4 f, undefined4 param_2)
 * Local Vars  : uVar1, uVar2, bVar3, bVar4, in_EAX, pbVar5, pcVar6, pbVar7, puVar8, uVar9, pcVar10, bVar11, cVar12, uVar13, bVar14, cVar15, puVar16, uVar17, uVar18, cVar19, unaff_EBX, iVar20, iVar21, bVar22, unaff_EBP, unaff_ESI, unaff_EDI, bVar23, param_2, f
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

bool __fastcall <GetTableData>b__0(undefined4 f,undefined4 param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int *in_EAX;
  byte *pbVar5;
  undefined3 uVar9;
  byte *pbVar7;
  uint *puVar8;
  byte bVar11;
  char cVar12;
  char *pcVar10;
  undefined2 uVar13;
  byte bVar14;
  char cVar15;
  undefined3 uVar17;
  undefined2 uVar18;
  char cVar19;
  byte bVar22;
  byte *unaff_EBX;
  int iVar20;
  int iVar21;
  int unaff_EBP;
  uint *unaff_ESI;
  byte *unaff_EDI;
  bool bVar23;
  char *pcVar6;
  uint *puVar16;
  
                    /* .NET CLR Managed Code */
  pcVar10 = (char *)CONCAT22((short)((uint)f >> 0x10),
                             CONCAT11((char)((uint)f >> 8) + unaff_EDI[-0x30],(char)f));
  *(byte *)in_EAX = (char)*in_EAX + (byte)in_EAX;
  bVar14 = (byte)param_2 | (byte)in_EAX;
  puVar16 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar14);
  pbVar5 = (byte *)((int)in_EAX - *in_EAX);
  *pcVar10 = *pcVar10 + (char)pbVar5;
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(char)f - bVar14);
  do {
    bVar3 = (byte)pbVar5;
    *pbVar5 = *pbVar5 + bVar3;
    bVar14 = *pbVar5;
    bVar22 = (byte)pcVar10;
    *pbVar5 = *pbVar5 << (bVar22 & 7) | *pbVar5 >> 8 - (bVar22 & 7);
    *(byte *)puVar16 = (byte)*puVar16 + bVar22;
    iVar20 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
    bVar4 = unaff_EDI[-0x43];
    *pbVar5 = *pbVar5 + bVar3;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                               CONCAT11(((byte)((uint)pcVar10 >> 8) | bVar14) + bVar4 |
                                        (byte)*puVar16,bVar22));
    bVar14 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar3;
    unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar14,bVar3) + *(int *)pbVar5);
    bVar3 = bVar3 + *pbVar5;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar3);
    iVar21 = iVar20 + 1;
    *pbVar5 = *pbVar5 + bVar3;
    cVar15 = (char)iVar21;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar15;
    bVar14 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar3;
    *(uint *)pbVar5 = *(int *)pbVar5 + unaff_EBP + (uint)CARRY1(bVar14,bVar3);
    *(byte *)puVar16 = (byte)*puVar16 + bVar22;
    unaff_EBX = (byte *)CONCAT22((short)((uint)iVar21 >> 0x10),
                                 CONCAT11((char)((uint)iVar21 >> 8) + *(char *)(iVar20 + -0x26),
                                          cVar15));
    do {
      *pbVar5 = *pbVar5 + (char)pbVar5;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                 CONCAT11((byte)((uint)puVar16 >> 8) | *unaff_EBX,(char)puVar16));
      *(byte *)puVar16 = (byte)*puVar16 + (char)pcVar10;
      *unaff_EBX = *unaff_EBX + 1;
      pbVar5 = (byte *)((uint)(pbVar5 + 0xda7b02) | *puVar16);
      bVar14 = (byte)pbVar5;
      if (-1 < (int)pbVar5) {
        *(byte *)puVar16 = (byte)*puVar16 ^ bVar14;
        *unaff_EBX = *unaff_EBX + bVar14;
        *pbVar5 = *pbVar5 + bVar14;
        break;
      }
      *pbVar5 = *pbVar5 + bVar14;
      uVar9 = (undefined3)((uint)pbVar5 >> 8);
      bVar14 = bVar14 | (byte)*puVar16;
      pbVar5 = (byte *)CONCAT31(uVar9,bVar14);
      pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar10 >> 8) | *unaff_EBX,(char)pcVar10));
      bVar23 = CARRY4((uint)puVar16,*unaff_ESI);
      puVar16 = (uint *)((int)puVar16 + *unaff_ESI);
      if (bVar23) {
        do {
          bVar4 = (byte)pbVar5;
          *pbVar5 = *pbVar5 + bVar4;
          bVar3 = (byte)pcVar10 | (byte)*puVar16;
          bVar14 = unaff_EBX[-0x24];
          uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
          cVar12 = (char)unaff_EBX;
          *pbVar5 = *pbVar5 + bVar4;
          bVar22 = (char)((uint)unaff_EBX >> 8) + bVar14 | *(byte *)(unaff_EBP + -0x24);
          *pbVar5 = *pbVar5 + bVar4;
          uVar9 = (undefined3)((uint)pbVar5 >> 8);
          bVar4 = bVar4 | (byte)*unaff_ESI;
          pcVar6 = (char *)CONCAT31(uVar9,bVar4);
          cVar15 = *(char *)(CONCAT22(uVar18,CONCAT11(bVar22,cVar12)) + -0x23);
          *pcVar6 = *pcVar6 + bVar4;
          bVar14 = *(byte *)(unaff_EBP + -0x22);
          *pcVar6 = *pcVar6 + bVar4;
          bVar4 = bVar4 | (byte)*unaff_ESI;
          pbVar7 = (byte *)CONCAT31(uVar9,bVar4);
          cVar19 = cVar12 - (byte)*unaff_ESI;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22(uVar18,CONCAT11(bVar22 + cVar15 | bVar14,
                                                                       cVar12)) >> 8),cVar19);
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((char)((uint)pcVar10 >> 8) + *pbVar7,bVar3));
          *(byte *)puVar16 = (byte)*puVar16 + bVar3;
          bVar3 = bVar4 - *pbVar7;
          pbVar5 = (byte *)CONCAT31(uVar9,bVar3);
          unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar4 < *pbVar7) - *(int *)pbVar5));
          puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),(char)puVar16 * '\x02');
          *(byte **)pbVar5 = pbVar5 + *(int *)pbVar5;
          *unaff_EDI = *unaff_EDI + cVar19;
          bVar14 = *pbVar5;
          *pbVar5 = *pbVar5 + bVar3;
          *puVar16 = (uint)(pbVar5 + (uint)CARRY1(bVar14,bVar3) + *puVar16);
        } while ((POPCOUNT(*puVar16 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar5 = *pbVar5 + (char)pbVar5;
        pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)pcVar10 | pbVar5[(int)pcVar10]);
        bVar23 = false;
        pbVar5 = (byte *)((uint)pbVar5 & 0xffffff00);
        do {
          unaff_EDI = unaff_EDI + (-(uint)bVar23 - *(int *)unaff_EBX);
          pcVar6 = (char *)CONCAT31((int3)((uint)pbVar5 >> 8),*pcVar10);
          *pcVar6 = *pcVar6 + *pcVar10;
          pbVar5 = (byte *)CONCAT31((int3)((uint)(pcVar6 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                                           (byte)((uint)pcVar10 >> 8)) + 0xda7d) >>
                                          8),((byte)(pcVar6 + (*(byte *)((int)unaff_ESI + 0x2000001)
                                                              < (byte)((uint)pcVar10 >> 8)) + 0xda7d
                                                    ) | (byte)*puVar16) + 0x7d);
          pcVar10 = pcVar10 + -1;
          *(byte *)puVar16 = (byte)*puVar16 + (char)pcVar10;
          while( true ) {
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            cVar15 = (char)puVar16 + *(char *)((int)unaff_EDI * 2 + 0xa0000e1);
            puVar16 = (uint *)CONCAT31(uVar17,cVar15);
            bVar23 = CARRY1((byte)pbVar5,(byte)*puVar16);
            uVar9 = (undefined3)((uint)pbVar5 >> 8);
            bVar14 = (byte)pbVar5 + (byte)*puVar16;
            pbVar5 = (byte *)CONCAT31(uVar9,bVar14);
            if ((POPCOUNT(bVar14) & 1U) != 0) break;
            *pbVar5 = *pbVar5 + bVar14;
            cVar12 = (char)pcVar10;
            pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar10 >> 8) | unaff_EDI[-0x65],cVar12
                                               ));
            bVar4 = *pbVar5;
            *pbVar5 = *pbVar5 + bVar14;
            if (CARRY1(bVar4,bVar14)) {
              *pbVar5 = *pbVar5 + bVar14;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                    *(byte *)(unaff_EBP + -0x1d),(char)unaff_EBX));
              *pbVar5 = *pbVar5 + bVar14;
              bVar23 = false;
              bVar14 = bVar14 | (byte)*puVar16;
              pcVar6 = (char *)CONCAT31(uVar9,bVar14);
              while( true ) {
                bVar4 = (byte)pcVar6;
                uVar9 = (undefined3)((uint)pcVar6 >> 8);
                if (bVar23 == (char)bVar14 < '\0') break;
                *pcVar6 = *pcVar6 + bVar4;
                bVar4 = bVar4 | (byte)*puVar16;
                puVar8 = (uint *)CONCAT31(uVar9,bVar4);
                *unaff_EDI = *unaff_EDI << 1 | (char)*unaff_EDI < '\0';
                uVar2 = *puVar8;
                *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                unaff_EBP = (unaff_EBP - *puVar8) - (uint)CARRY1((byte)uVar2,bVar4);
                *puVar8 = *puVar8 << 1 | (uint)((int)*puVar8 < 0);
                while( true ) {
                  uVar2 = *puVar16;
                  *(byte *)puVar16 = (byte)*puVar16 + (byte)pcVar10;
                  cVar15 = (char)puVar8 + 'o' + CARRY1((byte)uVar2,(byte)pcVar10);
                  pcVar6 = (char *)CONCAT31((int3)((uint)puVar8 >> 8),cVar15);
                  pcVar10 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar15) & 1U) != 0) break;
                  *pcVar6 = *pcVar6 + cVar15;
                  bVar14 = bRamfe140212;
                  pcVar10 = (char *)0x0;
                  uVar9 = (undefined3)((uint)(pcVar6 + -0x732b0000) >> 8);
                  bVar4 = in(0);
                  puVar8 = (uint *)CONCAT31(uVar9,bVar4);
                  uVar2 = *puVar16;
                  *(byte *)puVar16 = (byte)*puVar16;
                  if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*puVar16 < '\0') {
                    *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                    bVar4 = bVar4 | (byte)*puVar16;
                    puVar8 = (uint *)CONCAT31(uVar9,bVar4);
                    if ((POPCOUNT(bVar4) & 1U) == 0) {
                      *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                      pcVar10 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar14 | (byte)*puVar8) << 8);
                      *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                    puVar8 = (uint *)CONCAT31(uVar9,bVar4 | (byte)*puVar16);
                  }
                }
                *(byte *)puVar16 = (byte)*puVar16;
                bVar23 = SCARRY1((char)puVar16,*unaff_EDI);
                bVar14 = (char)puVar16 + *unaff_EDI;
                puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar14);
              }
              if (bVar23 == (char)bVar14 < '\0') {
                *(byte *)puVar16 = (byte)*puVar16 + (char)pcVar10;
                pbVar5 = (byte *)((uint)pcVar6 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar6 = *pcVar6 + bVar4;
              pbVar5 = (byte *)CONCAT31(uVar9,(bVar4 | (byte)*puVar16) + 0x7d);
              pcVar10 = pcVar10 + -1;
              *(byte *)puVar16 = (byte)*puVar16 + (char)pcVar10;
            }
            else {
              *(byte *)puVar16 = (byte)*puVar16 + cVar12;
              puVar16 = (uint *)CONCAT31(uVar17,cVar15 + *(char *)((int)unaff_EDI * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      bVar14 = bVar14 - cVar15;
      *(char *)CONCAT31(uVar9,bVar14) = *(char *)CONCAT31(uVar9,bVar14) + bVar14;
      bVar14 = bVar14 | (byte)*puVar16;
      pbVar5 = (byte *)CONCAT31(uVar9,bVar14);
    } while ((POPCOUNT(bVar14) & 1U) == 0);
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP - *puVar8;
  do {
    bVar14 = (byte)puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar14;
    unaff_EDI = unaff_EDI + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar8 = (byte)*puVar8 + bVar14;
    bVar14 = bVar14 | (byte)*puVar16;
    puVar8 = (uint *)CONCAT31((int3)((uint)puVar8 >> 8),bVar14);
    *(byte *)puVar8 = (byte)*puVar8 | bVar14;
    bVar14 = (byte)*puVar8;
    unaff_EBP = 0x2700001;
    while ((POPCOUNT(bVar14) & 1U) == 0) {
      do {
        *(byte *)puVar8 = (byte)*puVar8 + (byte)puVar8;
        bVar14 = (byte)puVar8 | (byte)*puVar16;
        puVar8 = (uint *)CONCAT31((int3)((uint)puVar8 >> 8),bVar14);
        if ((POPCOUNT(bVar14) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar8 = (byte)*puVar8 + (char)puVar8;
        uVar1 = CONCAT21((short)((uint)pcVar10 >> 0x10),(byte)((uint)pcVar10 >> 8) | bRamfe140212);
        while( true ) {
          pcVar10 = (char *)((uint)uVar1 << 8);
          bVar22 = (byte)puVar8;
          *(byte *)puVar8 = (byte)*puVar8 & bVar22;
          bVar3 = *unaff_EBX;
          bVar11 = (byte)uVar1;
          bVar4 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar11;
          bVar14 = *unaff_EBX;
          if (!CARRY1(bVar3,bVar11)) break;
          *(byte *)puVar8 = (byte)*puVar8 + bVar22;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar8 = (byte)*puVar8 + bVar22;
          bVar22 = bVar22 | (byte)*puVar16;
          puVar8 = (uint *)CONCAT31((int3)((uint)puVar8 >> 8),bVar22);
          bVar23 = (POPCOUNT(bVar22) & 1U) == 0;
          while( true ) {
            cVar15 = (char)((uint)unaff_EBX >> 8);
            uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar23) {
              *(byte *)puVar16 = (byte)*puVar16;
              unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar15 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar8 = (byte)*puVar8 + (char)puVar8;
            uVar13 = (undefined2)((uint)pcVar10 >> 0x10);
            bVar4 = (byte)((uint)pcVar10 >> 8) | (byte)*puVar8;
            uVar1 = CONCAT21(uVar13,bVar4);
            *puVar8 = *puVar8 & (uint)puVar8;
            *unaff_EBX = *unaff_EBX + bVar4;
            uVar9 = (undefined3)((uint)puVar8 >> 8);
            bVar14 = (char)puVar8 - bVar4;
            pcVar10 = (char *)CONCAT31(uVar9,bVar14);
            *pcVar10 = *pcVar10 + bVar14;
            bVar14 = bVar14 | (byte)*puVar16;
            puVar8 = (uint *)CONCAT31(uVar9,bVar14);
            if ((POPCOUNT(bVar14) & 1U) != 0) break;
            *(byte *)puVar8 = (byte)*puVar8 + bVar14;
            pcVar10 = (char *)((uint)CONCAT21(uVar13,bVar4 | (byte)*puVar8) << 8);
            *puVar8 = *puVar8 - (int)puVar8;
            *(byte *)puVar16 = (byte)*puVar16;
            unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar15 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar8 = (byte)*puVar8 + (char)puVar8;
              uVar18 = (undefined2)((uint)puVar16 >> 0x10);
              cVar15 = (char)puVar16;
              bVar14 = (byte)((uint)puVar16 >> 8) | unaff_EBX[-0x17];
              puVar16 = (uint *)CONCAT22(uVar18,CONCAT11(bVar14,cVar15));
              *(byte *)puVar8 = (byte)*puVar8 + (char)puVar8;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar8 = (byte)*puVar8 + (byte)puVar8;
                uVar9 = (undefined3)((uint)puVar8 >> 8);
                bVar3 = (byte)puVar8 | (byte)*puVar16;
                pcVar6 = (char *)CONCAT31(uVar9,bVar3);
                bVar4 = unaff_EBX[-0x16];
                *pcVar6 = *pcVar6 + bVar3;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar6 = *pcVar6 + bVar3;
                pbVar5 = (byte *)CONCAT31(uVar9,bVar3 | (byte)*puVar16);
                while( true ) {
                  *pbVar5 = *pbVar5 + (byte)pbVar5;
                  uVar9 = (undefined3)((uint)pbVar5 >> 8);
                  bVar4 = (byte)pbVar5 | (byte)*puVar16;
                  puVar8 = (uint *)CONCAT31(uVar9,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) != 0) break;
                  *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                  bVar3 = unaff_EDI[-0x14];
                  *(byte *)puVar8 = (byte)*puVar8 + bVar4;
                  bVar4 = bVar4 | (byte)*puVar16;
                  pcVar6 = (char *)CONCAT31(uVar9,bVar4);
                  bVar22 = unaff_EBX[-0x15];
                  *pcVar6 = *pcVar6 + bVar4;
                  pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),
                                                    (byte)((uint)pcVar10 >> 8) | bVar3 |
                                                    unaff_EDI[-0x13]) << 8);
                  *pcVar6 = *pcVar6 + bVar4;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar22 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar6 = *pcVar6 + bVar4;
                  pbVar5 = (byte *)CONCAT31(uVar9,bVar4 | (byte)*puVar16);
                  do {
                    do {
                      bVar3 = (byte)pbVar5;
                      *pbVar5 = *pbVar5 + bVar3;
                      cVar19 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar5,
                                                            cVar19));
                      *pbVar5 = bVar3;
                      *pbVar5 = *pbVar5 + bVar3;
                      cVar12 = (char)((uint)pcVar10 >> 8) + *pbVar5;
                      pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),cVar12) << 8)
                      ;
                      uVar9 = (undefined3)((uint)pbVar5 >> 8);
                      bVar3 = bVar3 & *pbVar5;
                      pbVar5 = (byte *)CONCAT31(uVar9,bVar3);
                      bVar4 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar12;
                    } while (SCARRY1(bVar4,cVar12) == (char)*unaff_EBX < '\0');
                    *pbVar5 = *pbVar5 + bVar3;
                    bVar3 = bVar3 | (byte)*puVar16;
                    pbVar5 = (byte *)CONCAT31(uVar9,bVar3);
                    if ((POPCOUNT(bVar3) & 1U) == 0) {
                      *pbVar5 = *pbVar5 + bVar3;
                      *pbVar5 = *pbVar5 + bVar3;
                      cVar15 = cVar15 - bVar14;
                      pbVar7 = (byte *)CONCAT31((int3)((uint)puVar16 >> 8),cVar15);
                      *pbVar5 = *pbVar5 + bVar3;
                      bRam0312382b = bRam0312382b | *pbVar7;
                      while( true ) {
                        bVar4 = (byte)pbVar5;
                        *pbVar5 = *pbVar5 + bVar4;
                        bRam0312382b = bRam0312382b | (unaff_EDI + 0x21b0000)[(int)pbVar5];
                        uVar9 = (undefined3)((uint)pbVar5 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar7 = *pbVar7 + bRam0312382b;
                        pbVar5 = (byte *)CONCAT31(uVar9,bVar4 | (byte)*unaff_ESI);
                      }
                      *pbVar5 = *pbVar5 + bVar4;
                      bVar4 = bVar4 | (byte)*unaff_ESI;
                      pcVar10 = (char *)CONCAT31(uVar9,bVar4);
                      out(*unaff_ESI,(short)pbVar7);
                      *pcVar10 = *pcVar10 + bVar4;
                      uVar13 = CONCAT11(bVar14 | bRam6f0a002b,cVar15);
                      pcVar6 = (char *)CONCAT22(uVar18,uVar13);
                      *pcVar10 = *pcVar10 + bVar4;
                      *pcVar6 = *pcVar6 + bRam0312382b;
                      out(unaff_ESI[1],uVar13);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar19 + *pcVar10);
                  } while (SCARRY1(cVar19,*pcVar10) != (char)(cVar19 + *pcVar10) < '\0');
                }
                uVar2 = *puVar16;
                *(byte *)puVar16 = (byte)*puVar16;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*puVar16 < '\0');
              *(byte *)puVar16 = (byte)*puVar16;
              *pcVar10 = *pcVar10 - (char)unaff_EBX;
              *(byte *)puVar8 = (byte)*puVar8 + bVar4;
              bVar4 = bVar4 | (byte)*puVar16;
              puVar8 = (uint *)CONCAT31(uVar9,bVar4);
              bVar23 = (POPCOUNT(bVar4) & 1U) == 0;
            } while (bVar23);
          }
        }
      } while (SCARRY1(bVar4,bVar11));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar10 >> 8);
    *unaff_EDI = *unaff_EDI - (char)unaff_EBX;
  } while( true );
}


