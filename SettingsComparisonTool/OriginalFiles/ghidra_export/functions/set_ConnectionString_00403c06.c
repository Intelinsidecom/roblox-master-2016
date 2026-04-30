/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403c06
 * Raw Name    : set_ConnectionString
 * Demangled   : set_ConnectionString
 * Prototype   : void set_ConnectionString(byte * value, uint * param_2)
 * Local Vars  : uVar1, uVar2, cVar3, bVar4, bVar5, bVar6, bVar7, in_EAX, pbVar8, pcVar9, pbVar10, puVar11, param_2, pcVar12, uVar13, uVar14, bVar15, uVar16, uVar17, cVar18, cVar19, unaff_EBX, iVar20, iVar21, unaff_EBP, unaff_ESI, unaff_EDI, bVar22, value
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

void __fastcall set_ConnectionString(byte *value,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 in_EAX;
  undefined3 uVar13;
  byte *pbVar8;
  char *pcVar9;
  uint *puVar11;
  char *pcVar12;
  byte bVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  char cVar18;
  char cVar19;
  byte *unaff_EBX;
  int iVar20;
  int iVar21;
  char *unaff_EBP;
  uint *unaff_ESI;
  byte *unaff_EDI;
  bool bVar22;
  byte *pbVar10;
  undefined3 uVar14;
  
                    /* .NET CLR Managed Code */
  uVar13 = (undefined3)((uint)in_EAX >> 8);
  cVar3 = (char)in_EAX + *unaff_EBX;
  pbVar8 = (byte *)CONCAT31(uVar13,cVar3);
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar3 < '\0') {
    do {
      uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar3 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x26];
      *pbVar8 = *pbVar8 + (char)pbVar8;
      uVar13 = (undefined3)(CONCAT22(uVar17,CONCAT11(cVar3,(byte)unaff_EBX)) >> 8);
      bVar6 = (byte)unaff_EBX | *unaff_EDI;
      unaff_EBX = (byte *)CONCAT31(uVar13,bVar6);
      *unaff_EBX = *unaff_EBX + 1;
      pbVar8 = (byte *)((uint)pbVar8 | *param_2);
      bVar4 = (byte)pbVar8;
      if ((int)pbVar8 < 0) {
        *pbVar8 = *pbVar8 + bVar4;
        uVar14 = (undefined3)((uint)pbVar8 >> 8);
        bVar4 = bVar4 | (byte)*param_2;
        pcVar9 = (char *)CONCAT31(uVar14,bVar4);
        bVar5 = (byte)value;
        value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11((byte)((uint)value >> 8) | *unaff_EBX,bVar5));
        bVar22 = CARRY4((uint)param_2,*unaff_ESI);
        param_2 = (uint *)((int)param_2 + *unaff_ESI);
        if (bVar22) goto code_r0x00403c81;
        bVar4 = bVar4 - bVar6;
        *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
        bVar4 = bVar4 | (byte)*param_2;
        pbVar8 = (byte *)CONCAT31(uVar14,bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403c3d;
      }
      else {
        *(byte *)param_2 = (byte)*param_2 ^ bVar4;
        *unaff_EBX = *unaff_EBX + bVar4;
        *pbVar8 = *pbVar8 + bVar4;
code_r0x00403c3d:
        bVar5 = (byte)pbVar8;
        *pbVar8 = *pbVar8 + bVar5;
        bVar4 = *pbVar8;
        bVar7 = (byte)value;
        *pbVar8 = *pbVar8 << (bVar7 & 7) | *pbVar8 >> 8 - (bVar7 & 7);
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        iVar20 = CONCAT31(uVar13,bVar6 - (byte)*unaff_ESI);
        bVar6 = unaff_EDI[-0x43];
        *pbVar8 = *pbVar8 + bVar5;
        value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11(((byte)((uint)value >> 8) | bVar4) + bVar6 |
                                          (byte)*param_2,bVar7));
        bVar4 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar5;
        unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar4,bVar5) + *(int *)pbVar8);
        bVar5 = bVar5 + *pbVar8;
        pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar5);
        iVar21 = iVar20 + 1;
        *pbVar8 = *pbVar8 + bVar5;
        *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)iVar21;
        bVar4 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar5;
        *(char **)pbVar8 = unaff_EBP + (uint)CARRY1(bVar4,bVar5) + *(int *)pbVar8;
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        unaff_EBX = (byte *)CONCAT22((short)((uint)iVar21 >> 0x10),
                                     CONCAT11((char)((uint)iVar21 >> 8) + *(char *)(iVar20 + -0x26),
                                              (char)iVar21));
      }
      *pbVar8 = *pbVar8 + (char)pbVar8;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | *unaff_EBX,(char)param_2));
      pbVar8 = pbVar8 + 0xda7b02;
      *(byte *)param_2 = (byte)*param_2 + (char)value;
    } while( true );
  }
  *pbVar8 = *pbVar8 + cVar3;
  bVar4 = cVar3 + 0x2a;
  *(char *)param_2 = (char)*param_2 + '(';
  *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
  *unaff_EBP = *unaff_EBP - (char)((uint)value >> 8);
  *(char *)param_2 = (char)*param_2 + (char)value;
  pbVar8 = (byte *)CONCAT31(uVar13,cVar3 + 0x1fU);
  if (10 < bVar4) {
    *pbVar8 = *pbVar8 | cVar3 + 0x1fU;
    return;
  }
  *(char *)param_2 = (char)*param_2 + (char)value;
code_r0x00403c92:
  do {
    bVar4 = unaff_EBX[-0x23];
    bVar5 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    bVar6 = unaff_EBP[-0x22];
    *pbVar8 = *pbVar8 + bVar5;
    uVar13 = (undefined3)((uint)pbVar8 >> 8);
    bVar5 = bVar5 | (byte)*unaff_ESI;
    pbVar10 = (byte *)CONCAT31(uVar13,bVar5);
    cVar18 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                          bVar6,(char)unaff_EBX)) >> 8),cVar18);
    cVar3 = (char)value;
    value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                             CONCAT11((char)((uint)value >> 8) + *pbVar10,cVar3));
    *(byte *)param_2 = (byte)*param_2 + cVar3;
    bVar6 = bVar5 - *pbVar10;
    pbVar8 = (byte *)CONCAT31(uVar13,bVar6);
    unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar5 < *pbVar10) - *(int *)pbVar8));
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 * '\x02');
    *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
    *unaff_EDI = *unaff_EDI + cVar18;
    bVar4 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar6;
    *param_2 = (uint)(pbVar8 + (uint)CARRY1(bVar4,bVar6) + *param_2);
  } while ((POPCOUNT(*param_2 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *pbVar8 = *pbVar8 + (char)pbVar8;
  value = (byte *)CONCAT31((int3)((uint)value >> 8),(byte)value | pbVar8[(int)value]);
  bVar22 = false;
  pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
  do {
    unaff_EDI = unaff_EDI + (-(uint)bVar22 - *(int *)unaff_EBX);
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar8 >> 8),*value);
    *pcVar9 = *pcVar9 + *value;
    pbVar8 = (byte *)CONCAT31((int3)((uint)(pcVar9 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                                     (byte)((uint)value >> 8)) + 0xda7d) >> 8),
                              ((byte)(pcVar9 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                               (byte)((uint)value >> 8)) + 0xda7d) | (byte)*param_2)
                              + 0x7d);
    value = value + -1;
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    while( true ) {
      uVar14 = (undefined3)((uint)param_2 >> 8);
      cVar3 = (char)param_2 + *(char *)((int)unaff_EDI * 2 + 0xa0000e1);
      param_2 = (uint *)CONCAT31(uVar14,cVar3);
      bVar22 = CARRY1((byte)pbVar8,(byte)*param_2);
      uVar13 = (undefined3)((uint)pbVar8 >> 8);
      bVar4 = (byte)pbVar8 + (byte)*param_2;
      pbVar8 = (byte *)CONCAT31(uVar13,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) break;
      *pbVar8 = *pbVar8 + bVar4;
      cVar18 = (char)value;
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | unaff_EDI[-0x65],cVar18));
      bVar6 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar4;
      if (CARRY1(bVar6,bVar4)) {
        *pbVar8 = *pbVar8 + bVar4;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x1d],
                                              (char)unaff_EBX));
        *pbVar8 = *pbVar8 + bVar4;
        bVar22 = false;
        bVar4 = bVar4 | (byte)*param_2;
        pcVar9 = (char *)CONCAT31(uVar13,bVar4);
        while( true ) {
          bVar6 = (byte)pcVar9;
          uVar13 = (undefined3)((uint)pcVar9 >> 8);
          if (bVar22 == (char)bVar4 < '\0') break;
          *pcVar9 = *pcVar9 + bVar6;
          bVar6 = bVar6 | (byte)*param_2;
          puVar11 = (uint *)CONCAT31(uVar13,bVar6);
          *unaff_EDI = *unaff_EDI << 1 | (char)*unaff_EDI < '\0';
          uVar2 = *puVar11;
          *(byte *)puVar11 = (byte)*puVar11 + bVar6;
          unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar2,bVar6) - *puVar11);
          *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
          while( true ) {
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2 + (byte)value;
            cVar3 = (char)puVar11 + 'o' + CARRY1((byte)uVar2,(byte)value);
            pcVar9 = (char *)CONCAT31((int3)((uint)puVar11 >> 8),cVar3);
            value = (byte *)0x20a0000;
            if ((POPCOUNT(cVar3) & 1U) != 0) break;
            *pcVar9 = *pcVar9 + cVar3;
            bVar4 = bRamfe140212;
            value = (byte *)0x0;
            uVar13 = (undefined3)((uint)(pcVar9 + -0x732b0000) >> 8);
            bVar6 = in(0);
            puVar11 = (uint *)CONCAT31(uVar13,bVar6);
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2;
            if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0') {
              *(byte *)puVar11 = (byte)*puVar11 + bVar6;
              bVar6 = bVar6 | (byte)*param_2;
              puVar11 = (uint *)CONCAT31(uVar13,bVar6);
              if ((POPCOUNT(bVar6) & 1U) == 0) {
                *(byte *)puVar11 = (byte)*puVar11 + bVar6;
                pcVar9 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar11) << 8);
                *(byte *)puVar11 = (byte)*puVar11 + bVar6;
                goto code_r0x00403d33;
              }
              *(byte *)puVar11 = (byte)*puVar11 + bVar6;
              puVar11 = (uint *)CONCAT31(uVar13,bVar6 | (byte)*param_2);
            }
          }
          *(byte *)param_2 = (byte)*param_2;
          bVar22 = SCARRY1((char)param_2,*unaff_EDI);
          bVar4 = (char)param_2 + *unaff_EDI;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
        }
        if (bVar22 == (char)bVar4 < '\0') {
          *(byte *)param_2 = (byte)*param_2 + (char)value;
          pbVar8 = (byte *)((uint)pcVar9 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar9 = *pcVar9 + bVar6;
        pbVar8 = (byte *)CONCAT31(uVar13,(bVar6 | (byte)*param_2) + 0x7d);
        value = value + -1;
        *(byte *)param_2 = (byte)*param_2 + (char)value;
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar18;
        param_2 = (uint *)CONCAT31(uVar14,cVar3 + *(char *)((int)unaff_EDI * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403c81:
  *pcVar9 = *pcVar9 + bVar4;
  value = (byte *)CONCAT31((int3)((uint)value >> 8),bVar5 | (byte)*param_2);
  bVar5 = unaff_EBX[-0x24];
  *pcVar9 = *pcVar9 + bVar4;
  unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar3 + bVar5 | unaff_EBP[-0x24],bVar6));
  *pcVar9 = *pcVar9 + bVar4;
  pbVar8 = (byte *)CONCAT31(uVar14,bVar4 | (byte)*unaff_ESI);
  goto code_r0x00403c92;
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar11;
  do {
    bVar4 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    unaff_EDI = unaff_EDI + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    bVar4 = bVar4 | (byte)*param_2;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
    *(byte *)puVar11 = (byte)*puVar11 | bVar4;
    bVar4 = (byte)*puVar11;
    unaff_EBP = (char *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
        bVar4 = (byte)puVar11 | (byte)*param_2;
        puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        uVar1 = CONCAT21((short)((uint)pcVar9 >> 0x10),(byte)((uint)pcVar9 >> 8) | bRamfe140212);
        while( true ) {
          pcVar9 = (char *)((uint)uVar1 << 8);
          bVar7 = (byte)puVar11;
          *(byte *)puVar11 = (byte)*puVar11 & bVar7;
          bVar6 = *unaff_EBX;
          bVar15 = (byte)uVar1;
          bVar5 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar15;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar6,bVar15)) break;
          *(byte *)puVar11 = (byte)*puVar11 + bVar7;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar11 = (byte)*puVar11 + bVar7;
          bVar7 = bVar7 | (byte)*param_2;
          puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar7);
          bVar22 = (POPCOUNT(bVar7) & 1U) == 0;
          while( true ) {
            cVar3 = (char)((uint)unaff_EBX >> 8);
            uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar22) {
              *(byte *)param_2 = (byte)*param_2;
              unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar3 + unaff_EBX[-0x1f],(char)unaff_EBX)
                                          );
              goto code_r0x00403d52;
            }
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
            uVar16 = (undefined2)((uint)pcVar9 >> 0x10);
            bVar6 = (byte)((uint)pcVar9 >> 8) | (byte)*puVar11;
            uVar1 = CONCAT21(uVar16,bVar6);
            *puVar11 = *puVar11 & (uint)puVar11;
            *unaff_EBX = *unaff_EBX + bVar6;
            uVar13 = (undefined3)((uint)puVar11 >> 8);
            bVar4 = (char)puVar11 - bVar6;
            pcVar9 = (char *)CONCAT31(uVar13,bVar4);
            *pcVar9 = *pcVar9 + bVar4;
            bVar4 = bVar4 | (byte)*param_2;
            puVar11 = (uint *)CONCAT31(uVar13,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar11 = (byte)*puVar11 + bVar4;
            pcVar9 = (char *)((uint)CONCAT21(uVar16,bVar6 | (byte)*puVar11) << 8);
            *puVar11 = *puVar11 - (int)puVar11;
            *(byte *)param_2 = (byte)*param_2;
            unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar3 + unaff_EBX[-0x1d],(char)unaff_EBX));
            do {
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              uVar17 = (undefined2)((uint)param_2 >> 0x10);
              cVar3 = (char)param_2;
              bVar4 = (byte)((uint)param_2 >> 8) | unaff_EBX[-0x17];
              param_2 = (uint *)CONCAT22(uVar17,CONCAT11(bVar4,cVar3));
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
                uVar13 = (undefined3)((uint)puVar11 >> 8);
                bVar5 = (byte)puVar11 | (byte)*param_2;
                pcVar12 = (char *)CONCAT31(uVar13,bVar5);
                bVar6 = unaff_EBX[-0x16];
                *pcVar12 = *pcVar12 + bVar5;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar6 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar12 = *pcVar12 + bVar5;
                pbVar8 = (byte *)CONCAT31(uVar13,bVar5 | (byte)*param_2);
                while( true ) {
                  *pbVar8 = *pbVar8 + (byte)pbVar8;
                  uVar13 = (undefined3)((uint)pbVar8 >> 8);
                  bVar6 = (byte)pbVar8 | (byte)*param_2;
                  puVar11 = (uint *)CONCAT31(uVar13,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar11 = (byte)*puVar11 + bVar6;
                  bVar5 = unaff_EDI[-0x14];
                  *(byte *)puVar11 = (byte)*puVar11 + bVar6;
                  bVar6 = bVar6 | (byte)*param_2;
                  pcVar12 = (char *)CONCAT31(uVar13,bVar6);
                  bVar7 = unaff_EBX[-0x15];
                  *pcVar12 = *pcVar12 + bVar6;
                  pcVar9 = (char *)((uint)CONCAT21((short)((uint)pcVar9 >> 0x10),
                                                   (byte)((uint)pcVar9 >> 8) | bVar5 |
                                                   unaff_EDI[-0x13]) << 8);
                  *pcVar12 = *pcVar12 + bVar6;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar12 = *pcVar12 + bVar6;
                  pbVar8 = (byte *)CONCAT31(uVar13,bVar6 | (byte)*param_2);
                  do {
                    do {
                      bVar5 = (byte)pbVar8;
                      *pbVar8 = *pbVar8 + bVar5;
                      cVar19 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar8,
                                                            cVar19));
                      *pbVar8 = bVar5;
                      *pbVar8 = *pbVar8 + bVar5;
                      cVar18 = (char)((uint)pcVar9 >> 8) + *pbVar8;
                      pcVar9 = (char *)((uint)CONCAT21((short)((uint)pcVar9 >> 0x10),cVar18) << 8);
                      uVar13 = (undefined3)((uint)pbVar8 >> 8);
                      bVar5 = bVar5 & *pbVar8;
                      pbVar8 = (byte *)CONCAT31(uVar13,bVar5);
                      bVar6 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar18;
                    } while (SCARRY1(bVar6,cVar18) == (char)*unaff_EBX < '\0');
                    *pbVar8 = *pbVar8 + bVar5;
                    bVar5 = bVar5 | (byte)*param_2;
                    pbVar8 = (byte *)CONCAT31(uVar13,bVar5);
                    if ((POPCOUNT(bVar5) & 1U) == 0) {
                      *pbVar8 = *pbVar8 + bVar5;
                      *pbVar8 = *pbVar8 + bVar5;
                      cVar3 = cVar3 - bVar4;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar3);
                      *pbVar8 = *pbVar8 + bVar5;
                      bRam0312382b = bRam0312382b | *pbVar10;
                      while( true ) {
                        bVar6 = (byte)pbVar8;
                        *pbVar8 = *pbVar8 + bVar6;
                        bRam0312382b = bRam0312382b | (unaff_EDI + 0x21b0000)[(int)pbVar8];
                        uVar13 = (undefined3)((uint)pbVar8 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar10 = *pbVar10 + bRam0312382b;
                        pbVar8 = (byte *)CONCAT31(uVar13,bVar6 | (byte)*unaff_ESI);
                      }
                      *pbVar8 = *pbVar8 + bVar6;
                      bVar6 = bVar6 | (byte)*unaff_ESI;
                      pcVar9 = (char *)CONCAT31(uVar13,bVar6);
                      out(*unaff_ESI,(short)pbVar10);
                      *pcVar9 = *pcVar9 + bVar6;
                      uVar16 = CONCAT11(bVar4 | bRam6f0a002b,cVar3);
                      pcVar12 = (char *)CONCAT22(uVar17,uVar16);
                      *pcVar9 = *pcVar9 + bVar6;
                      *pcVar12 = *pcVar12 + bRam0312382b;
                      out(unaff_ESI[1],uVar16);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar19 + *pcVar9);
                  } while (SCARRY1(cVar19,*pcVar9) != (char)(cVar19 + *pcVar9) < '\0');
                }
                uVar2 = *param_2;
                *(byte *)param_2 = (byte)*param_2;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0');
              *(byte *)param_2 = (byte)*param_2;
              *pcVar9 = *pcVar9 - (char)unaff_EBX;
              *(byte *)puVar11 = (byte)*puVar11 + bVar6;
              bVar6 = bVar6 | (byte)*param_2;
              puVar11 = (uint *)CONCAT31(uVar13,bVar6);
              bVar22 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar22);
          }
        }
      } while (SCARRY1(bVar5,bVar15));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar9 >> 8);
    *unaff_EDI = *unaff_EDI - (char)unaff_EBX;
  } while( true );
}


