/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403c5c
 * Raw Name    : System.Collections.Generic.IEnumerable<T>.GetEnumerator
 * Demangled   : System.Collections.Generic.IEnumerable<T>.GetEnumerator
 * Prototype   : pointer System.Collections.Generic.IEnumerable<T>.GetEnumerator(byte * param_1, uint * param_2)
 * Local Vars  : uVar2, uVar1, bVar4, bVar3, pbVar5, in_EAX, puVar7, pcVar6, param_1, uVar9, param_2, pcVar8, bVar11, bVar10, uVar13, cVar12, pbVar15, cVar14, uVar17, uVar16, unaff_EBX, cVar18, unaff_EBP, bVar19, unaff_EDI, unaff_ESI, bVar20
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

undefined * __fastcall
System_Collections_Generic_IEnumerable<T>_GetEnumerator(byte *param_1,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *in_EAX;
  undefined3 uVar9;
  byte *pbVar5;
  uint *puVar7;
  char *pcVar8;
  byte bVar10;
  byte bVar11;
  char cVar12;
  undefined2 uVar13;
  char cVar14;
  undefined3 uVar16;
  undefined2 uVar17;
  byte *pbVar15;
  char cVar18;
  byte bVar19;
  byte *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  byte *unaff_EDI;
  bool bVar20;
  char *pcVar6;
  
  do {
    uVar9 = (undefined3)((uint)in_EAX >> 8);
                    /* .NET CLR Managed Code */
    bVar3 = (char)in_EAX - (char)unaff_EBX;
    *(char *)CONCAT31(uVar9,bVar3) = *(char *)CONCAT31(uVar9,bVar3) + bVar3;
    bVar3 = bVar3 | (byte)*param_2;
    pbVar5 = (byte *)CONCAT31(uVar9,bVar3);
    if ((POPCOUNT(bVar3) & 1U) != 0) {
      *pbVar5 = *pbVar5 + bVar3;
      bVar4 = *pbVar5;
      bVar19 = (byte)param_1;
      *pbVar5 = *pbVar5 << (bVar19 & 7) | *pbVar5 >> 8 - (bVar19 & 7);
      *(byte *)param_2 = (byte)*param_2 + bVar19;
      uVar2 = *unaff_ESI;
      bVar10 = unaff_EDI[-0x43];
      *pbVar5 = *pbVar5 + bVar3;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(((byte)((uint)param_1 >> 8) | bVar4) + bVar10 |
                                          (byte)*param_2,bVar19));
      bVar4 = *pbVar5;
      *pbVar5 = *pbVar5 + bVar3;
      unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar4,bVar3) + *(int *)pbVar5);
      bVar4 = *pbVar5;
      pbVar5 = (byte *)CONCAT31(uVar9,bVar3 + bVar4);
      unaff_EBX = (byte *)(CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)uVar2) + 1)
      ;
      *pbVar5 = *pbVar5 + bVar3 + bVar4;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)unaff_EBX;
      goto code_r0x00403c59;
    }
    while( true ) {
      *pbVar5 = *pbVar5 + (char)pbVar5;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | *unaff_EBX,(char)param_2));
      *(byte *)param_2 = (byte)*param_2 + (char)param_1;
      *unaff_EBX = *unaff_EBX + 1;
      pbVar5 = (byte *)((uint)(pbVar5 + 0xda7b02) | *param_2);
      bVar3 = (byte)pbVar5;
      if ((int)pbVar5 < 0) break;
      *(byte *)param_2 = (byte)*param_2 ^ bVar3;
      *unaff_EBX = *unaff_EBX + bVar3;
      *pbVar5 = *pbVar5 + bVar3;
code_r0x00403c59:
      bVar3 = *pbVar5;
      *pbVar5 = *pbVar5 + (byte)pbVar5;
      *(uint *)pbVar5 = *(int *)pbVar5 + unaff_EBP + (uint)CARRY1(bVar3,(byte)pbVar5);
      *(byte *)param_2 = (byte)*param_2 + (char)param_1;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x27],
                                            (char)unaff_EBX));
    }
    *pbVar5 = *pbVar5 + bVar3;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar3 | (byte)*param_2);
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | *unaff_EBX,(char)param_1));
    bVar20 = CARRY4((uint)param_2,*unaff_ESI);
    param_2 = (uint *)((int)param_2 + *unaff_ESI);
  } while (!bVar20);
  do {
    bVar4 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar4;
    bVar10 = (byte)param_1 | (byte)*param_2;
    bVar3 = unaff_EBX[-0x24];
    uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar12 = (char)unaff_EBX;
    *in_EAX = *in_EAX + bVar4;
    bVar19 = (char)((uint)unaff_EBX >> 8) + bVar3 | *(byte *)(unaff_EBP + -0x24);
    *in_EAX = *in_EAX + bVar4;
    uVar9 = (undefined3)((uint)in_EAX >> 8);
    bVar4 = bVar4 | (byte)*unaff_ESI;
    pcVar6 = (char *)CONCAT31(uVar9,bVar4);
    cVar14 = *(char *)(CONCAT22(uVar17,CONCAT11(bVar19,cVar12)) + -0x23);
    *pcVar6 = *pcVar6 + bVar4;
    bVar3 = *(byte *)(unaff_EBP + -0x22);
    *pcVar6 = *pcVar6 + bVar4;
    bVar4 = bVar4 | (byte)*unaff_ESI;
    pbVar5 = (byte *)CONCAT31(uVar9,bVar4);
    cVar18 = cVar12 - (byte)*unaff_ESI;
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22(uVar17,CONCAT11(bVar19 + cVar14 | bVar3,cVar12)) >>
                                       8),cVar18);
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((char)((uint)param_1 >> 8) + *pbVar5,bVar10));
    *(byte *)param_2 = (byte)*param_2 + bVar10;
    bVar10 = bVar4 - *pbVar5;
    in_EAX = (byte *)CONCAT31(uVar9,bVar10);
    unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar4 < *pbVar5) - *(int *)in_EAX));
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 * '\x02');
    *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
    *unaff_EDI = *unaff_EDI + cVar18;
    bVar3 = *in_EAX;
    *in_EAX = *in_EAX + bVar10;
    *param_2 = (uint)(in_EAX + (uint)CARRY1(bVar3,bVar10) + *param_2);
  } while ((POPCOUNT(*param_2 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *in_EAX = *in_EAX + (char)in_EAX;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | in_EAX[(int)param_1]);
  bVar20 = false;
  pbVar5 = (byte *)((uint)in_EAX & 0xffffff00);
  do {
    unaff_EDI = unaff_EDI + (-(uint)bVar20 - *(int *)unaff_EBX);
    pcVar6 = (char *)CONCAT31((int3)((uint)pbVar5 >> 8),*param_1);
    *pcVar6 = *pcVar6 + *param_1;
    pbVar5 = (byte *)CONCAT31((int3)((uint)(pcVar6 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                                     (byte)((uint)param_1 >> 8)) + 0xda7d) >> 8),
                              ((byte)(pcVar6 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                               (byte)((uint)param_1 >> 8)) + 0xda7d) |
                              (byte)*param_2) + 0x7d);
    param_1 = param_1 + -1;
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    while( true ) {
      uVar16 = (undefined3)((uint)param_2 >> 8);
      cVar14 = (char)param_2 + *(char *)((int)unaff_EDI * 2 + 0xa0000e1);
      param_2 = (uint *)CONCAT31(uVar16,cVar14);
      bVar20 = CARRY1((byte)pbVar5,(byte)*param_2);
      uVar9 = (undefined3)((uint)pbVar5 >> 8);
      bVar3 = (byte)pbVar5 + (byte)*param_2;
      pbVar5 = (byte *)CONCAT31(uVar9,bVar3);
      if ((POPCOUNT(bVar3) & 1U) != 0) break;
      *pbVar5 = *pbVar5 + bVar3;
      cVar12 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | unaff_EDI[-0x65],cVar12));
      bVar4 = *pbVar5;
      *pbVar5 = *pbVar5 + bVar3;
      if (CARRY1(bVar4,bVar3)) {
        *pbVar5 = *pbVar5 + bVar3;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                              *(byte *)(unaff_EBP + -0x1d),(char)unaff_EBX));
        *pbVar5 = *pbVar5 + bVar3;
        bVar20 = false;
        bVar3 = bVar3 | (byte)*param_2;
        pcVar6 = (char *)CONCAT31(uVar9,bVar3);
        while( true ) {
          bVar4 = (byte)pcVar6;
          uVar9 = (undefined3)((uint)pcVar6 >> 8);
          if (bVar20 == (char)bVar3 < '\0') break;
          *pcVar6 = *pcVar6 + bVar4;
          bVar4 = bVar4 | (byte)*param_2;
          puVar7 = (uint *)CONCAT31(uVar9,bVar4);
          *unaff_EDI = *unaff_EDI << 1 | (char)*unaff_EDI < '\0';
          uVar2 = *puVar7;
          *(byte *)puVar7 = (byte)*puVar7 + bVar4;
          unaff_EBP = (unaff_EBP - *puVar7) - (uint)CARRY1((byte)uVar2,bVar4);
          *puVar7 = *puVar7 << 1 | (uint)((int)*puVar7 < 0);
          while( true ) {
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2 + (byte)param_1;
            cVar14 = (char)puVar7 + 'o' + CARRY1((byte)uVar2,(byte)param_1);
            pcVar6 = (char *)CONCAT31((int3)((uint)puVar7 >> 8),cVar14);
            param_1 = (byte *)0x20a0000;
            if ((POPCOUNT(cVar14) & 1U) != 0) break;
            *pcVar6 = *pcVar6 + cVar14;
            bVar3 = bRamfe140212;
            param_1 = (byte *)0x0;
            uVar9 = (undefined3)((uint)(pcVar6 + -0x732b0000) >> 8);
            bVar4 = in(0);
            puVar7 = (uint *)CONCAT31(uVar9,bVar4);
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2;
            if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0') {
              *(byte *)puVar7 = (byte)*puVar7 + bVar4;
              bVar4 = bVar4 | (byte)*param_2;
              puVar7 = (uint *)CONCAT31(uVar9,bVar4);
              if ((POPCOUNT(bVar4) & 1U) == 0) {
                *(byte *)puVar7 = (byte)*puVar7 + bVar4;
                pcVar6 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar3 | (byte)*puVar7) << 8);
                *(byte *)puVar7 = (byte)*puVar7 + bVar4;
                goto code_r0x00403d33;
              }
              *(byte *)puVar7 = (byte)*puVar7 + bVar4;
              puVar7 = (uint *)CONCAT31(uVar9,bVar4 | (byte)*param_2);
            }
          }
          *(byte *)param_2 = (byte)*param_2;
          bVar20 = SCARRY1((char)param_2,*unaff_EDI);
          bVar3 = (char)param_2 + *unaff_EDI;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar3);
        }
        if (bVar20 == (char)bVar3 < '\0') {
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          in_EAX = (byte *)((uint)pcVar6 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar6 = *pcVar6 + bVar4;
        pbVar5 = (byte *)CONCAT31(uVar9,(bVar4 | (byte)*param_2) + 0x7d);
        param_1 = param_1 + -1;
        *(byte *)param_2 = (byte)*param_2 + (char)param_1;
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar12;
        param_2 = (uint *)CONCAT31(uVar16,cVar14 + *(char *)((int)unaff_EDI * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP - *puVar7;
  do {
    bVar3 = (byte)puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + bVar3;
    unaff_EDI = unaff_EDI + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar7 = (byte)*puVar7 + bVar3;
    bVar3 = bVar3 | (byte)*param_2;
    puVar7 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),bVar3);
    *(byte *)puVar7 = (byte)*puVar7 | bVar3;
    bVar3 = (byte)*puVar7;
    unaff_EBP = 0x2700001;
    while ((POPCOUNT(bVar3) & 1U) == 0) {
      do {
        *(byte *)puVar7 = (byte)*puVar7 + (byte)puVar7;
        bVar3 = (byte)puVar7 | (byte)*param_2;
        puVar7 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),bVar3);
        if ((POPCOUNT(bVar3) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
        uVar1 = CONCAT21((short)((uint)pcVar6 >> 0x10),(byte)((uint)pcVar6 >> 8) | bRamfe140212);
        while( true ) {
          pcVar6 = (char *)((uint)uVar1 << 8);
          bVar19 = (byte)puVar7;
          *(byte *)puVar7 = (byte)*puVar7 & bVar19;
          bVar10 = *unaff_EBX;
          bVar11 = (byte)uVar1;
          bVar4 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar11;
          bVar3 = *unaff_EBX;
          if (!CARRY1(bVar10,bVar11)) break;
          *(byte *)puVar7 = (byte)*puVar7 + bVar19;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar7 = (byte)*puVar7 + bVar19;
          bVar19 = bVar19 | (byte)*param_2;
          puVar7 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),bVar19);
          bVar20 = (POPCOUNT(bVar19) & 1U) == 0;
          while( true ) {
            cVar14 = (char)((uint)unaff_EBX >> 8);
            uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar20) {
              *(byte *)param_2 = (byte)*param_2;
              unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar14 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
            uVar13 = (undefined2)((uint)pcVar6 >> 0x10);
            bVar4 = (byte)((uint)pcVar6 >> 8) | (byte)*puVar7;
            uVar1 = CONCAT21(uVar13,bVar4);
            *puVar7 = *puVar7 & (uint)puVar7;
            *unaff_EBX = *unaff_EBX + bVar4;
            uVar9 = (undefined3)((uint)puVar7 >> 8);
            bVar3 = (char)puVar7 - bVar4;
            pcVar6 = (char *)CONCAT31(uVar9,bVar3);
            *pcVar6 = *pcVar6 + bVar3;
            bVar3 = bVar3 | (byte)*param_2;
            puVar7 = (uint *)CONCAT31(uVar9,bVar3);
            if ((POPCOUNT(bVar3) & 1U) != 0) break;
            *(byte *)puVar7 = (byte)*puVar7 + bVar3;
            pcVar6 = (char *)((uint)CONCAT21(uVar13,bVar4 | (byte)*puVar7) << 8);
            *puVar7 = *puVar7 - (int)puVar7;
            *(byte *)param_2 = (byte)*param_2;
            unaff_EBX = (byte *)CONCAT22(uVar17,CONCAT11(cVar14 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
              uVar17 = (undefined2)((uint)param_2 >> 0x10);
              cVar14 = (char)param_2;
              bVar3 = (byte)((uint)param_2 >> 8) | unaff_EBX[-0x17];
              param_2 = (uint *)CONCAT22(uVar17,CONCAT11(bVar3,cVar14));
              *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar7 = (byte)*puVar7 + (byte)puVar7;
                uVar9 = (undefined3)((uint)puVar7 >> 8);
                bVar10 = (byte)puVar7 | (byte)*param_2;
                pcVar8 = (char *)CONCAT31(uVar9,bVar10);
                bVar4 = unaff_EBX[-0x16];
                *pcVar8 = *pcVar8 + bVar10;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar8 = *pcVar8 + bVar10;
                pbVar5 = (byte *)CONCAT31(uVar9,bVar10 | (byte)*param_2);
                while( true ) {
                  *pbVar5 = *pbVar5 + (byte)pbVar5;
                  uVar9 = (undefined3)((uint)pbVar5 >> 8);
                  bVar4 = (byte)pbVar5 | (byte)*param_2;
                  puVar7 = (uint *)CONCAT31(uVar9,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) != 0) break;
                  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
                  bVar10 = unaff_EDI[-0x14];
                  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
                  bVar4 = bVar4 | (byte)*param_2;
                  pcVar8 = (char *)CONCAT31(uVar9,bVar4);
                  bVar19 = unaff_EBX[-0x15];
                  *pcVar8 = *pcVar8 + bVar4;
                  pcVar6 = (char *)((uint)CONCAT21((short)((uint)pcVar6 >> 0x10),
                                                   (byte)((uint)pcVar6 >> 8) | bVar10 |
                                                   unaff_EDI[-0x13]) << 8);
                  *pcVar8 = *pcVar8 + bVar4;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar19 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar8 = *pcVar8 + bVar4;
                  pbVar5 = (byte *)CONCAT31(uVar9,bVar4 | (byte)*param_2);
                  do {
                    do {
                      bVar10 = (byte)pbVar5;
                      *pbVar5 = *pbVar5 + bVar10;
                      cVar18 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar5,
                                                            cVar18));
                      *pbVar5 = bVar10;
                      *pbVar5 = *pbVar5 + bVar10;
                      cVar12 = (char)((uint)pcVar6 >> 8) + *pbVar5;
                      pcVar6 = (char *)((uint)CONCAT21((short)((uint)pcVar6 >> 0x10),cVar12) << 8);
                      uVar9 = (undefined3)((uint)pbVar5 >> 8);
                      bVar10 = bVar10 & *pbVar5;
                      pbVar5 = (byte *)CONCAT31(uVar9,bVar10);
                      bVar4 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar12;
                    } while (SCARRY1(bVar4,cVar12) == (char)*unaff_EBX < '\0');
                    *pbVar5 = *pbVar5 + bVar10;
                    bVar10 = bVar10 | (byte)*param_2;
                    pbVar5 = (byte *)CONCAT31(uVar9,bVar10);
                    if ((POPCOUNT(bVar10) & 1U) == 0) {
                      *pbVar5 = *pbVar5 + bVar10;
                      *pbVar5 = *pbVar5 + bVar10;
                      cVar14 = cVar14 - bVar3;
                      pbVar15 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar14);
                      *pbVar5 = *pbVar5 + bVar10;
                      bRam0312382b = bRam0312382b | *pbVar15;
                      while( true ) {
                        bVar4 = (byte)pbVar5;
                        *pbVar5 = *pbVar5 + bVar4;
                        bRam0312382b = bRam0312382b | (unaff_EDI + 0x21b0000)[(int)pbVar5];
                        uVar9 = (undefined3)((uint)pbVar5 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar15 = *pbVar15 + bRam0312382b;
                        pbVar5 = (byte *)CONCAT31(uVar9,bVar4 | (byte)*unaff_ESI);
                      }
                      *pbVar5 = *pbVar5 + bVar4;
                      bVar4 = bVar4 | (byte)*unaff_ESI;
                      pcVar6 = (char *)CONCAT31(uVar9,bVar4);
                      out(*unaff_ESI,(short)pbVar15);
                      *pcVar6 = *pcVar6 + bVar4;
                      uVar13 = CONCAT11(bVar3 | bRam6f0a002b,cVar14);
                      pcVar8 = (char *)CONCAT22(uVar17,uVar13);
                      *pcVar6 = *pcVar6 + bVar4;
                      *pcVar8 = *pcVar8 + bRam0312382b;
                      out(unaff_ESI[1],uVar13);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar18 + *pcVar6);
                  } while (SCARRY1(cVar18,*pcVar6) != (char)(cVar18 + *pcVar6) < '\0');
                }
                uVar2 = *param_2;
                *(byte *)param_2 = (byte)*param_2;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0');
              *(byte *)param_2 = (byte)*param_2;
              *pcVar6 = *pcVar6 - (char)unaff_EBX;
              *(byte *)puVar7 = (byte)*puVar7 + bVar4;
              bVar4 = bVar4 | (byte)*param_2;
              puVar7 = (uint *)CONCAT31(uVar9,bVar4);
              bVar20 = (POPCOUNT(bVar4) & 1U) == 0;
            } while (bVar20);
          }
        }
      } while (SCARRY1(bVar4,bVar11));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar6 >> 8);
    *unaff_EDI = *unaff_EDI - (char)unaff_EBX;
  } while( true );
}


