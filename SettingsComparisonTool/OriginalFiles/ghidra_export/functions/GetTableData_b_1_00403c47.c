/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403c47
 * Raw Name    : <GetTableData>b__1
 * Demangled   : <GetTableData>b__1
 * Prototype   : char * <GetTableData>b__1(byte * f, uint * param_2)
 * Local Vars  : f, uVar1, uVar2, bVar3, bVar4, in_EAX, pcVar5, pbVar6, puVar7, pcVar8, uVar9, bVar10, bVar11, cVar12, uVar13, uVar14, cVar15, uVar16, cVar17, unaff_EBX, pbVar18, bVar19, unaff_EBP, unaff_ESI, unaff_EDI, bVar20, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

char * __fastcall <GetTableData>b__1(byte *f,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *in_EAX;
  undefined3 uVar9;
  char *pcVar5;
  byte *pbVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar10;
  byte bVar11;
  char cVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  char cVar15;
  undefined3 uVar16;
  char cVar17;
  byte bVar19;
  byte *unaff_EBX;
  byte *pbVar18;
  int unaff_EBP;
  uint *unaff_ESI;
  byte *unaff_EDI;
  bool bVar20;
  
code_r0x00403c47:
  do {
                    /* .NET CLR Managed Code */
    bVar4 = unaff_EDI[-0x43];
    cVar15 = (char)f;
    bVar3 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar3;
    f = (byte *)CONCAT22((short)((uint)f >> 0x10),
                         CONCAT11((char)((uint)f >> 8) + bVar4 | (byte)*param_2,cVar15));
    bVar4 = *in_EAX;
    *in_EAX = *in_EAX + bVar3;
    unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar4,bVar3) + *(int *)in_EAX);
    bVar3 = bVar3 + *in_EAX;
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
    pbVar18 = unaff_EBX + 1;
    *in_EAX = *in_EAX + bVar3;
    cVar12 = (char)pbVar18;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar12;
    bVar4 = *in_EAX;
    *in_EAX = *in_EAX + bVar3;
    *(uint *)in_EAX = *(int *)in_EAX + unaff_EBP + (uint)CARRY1(bVar4,bVar3);
    *(byte *)param_2 = (byte)*param_2 + cVar15;
    unaff_EBX = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((char)((uint)pbVar18 >> 8) + unaff_EBX[-0x26],cVar12));
    do {
      *in_EAX = *in_EAX + (char)in_EAX;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | *unaff_EBX,(char)param_2));
      bVar3 = (byte)f;
      *(byte *)param_2 = (byte)*param_2 + bVar3;
      *unaff_EBX = *unaff_EBX + 1;
      in_EAX = (byte *)((uint)(in_EAX + 0xda7b02) | *param_2);
      bVar4 = (byte)in_EAX;
      if (-1 < (int)in_EAX) {
        *(byte *)param_2 = (byte)*param_2 ^ bVar4;
        *unaff_EBX = *unaff_EBX + bVar4;
        *in_EAX = *in_EAX + bVar4;
        goto code_r0x00403c47;
      }
      *in_EAX = *in_EAX + bVar4;
      uVar9 = (undefined3)((uint)in_EAX >> 8);
      bVar4 = bVar4 | (byte)*param_2;
      pbVar18 = (byte *)CONCAT31(uVar9,bVar4);
      uVar13 = (undefined2)((uint)f >> 0x10);
      bVar10 = (byte)((uint)f >> 8) | *unaff_EBX;
      f = (byte *)CONCAT22(uVar13,CONCAT11(bVar10,bVar3));
      bVar20 = CARRY4((uint)param_2,*unaff_ESI);
      param_2 = (uint *)((int)param_2 + *unaff_ESI);
      if (bVar20) {
        do {
          bVar3 = (byte)pbVar18;
          *pbVar18 = *pbVar18 + bVar3;
          bVar10 = (byte)f | (byte)*param_2;
          bVar4 = unaff_EBX[-0x24];
          uVar13 = (undefined2)((uint)unaff_EBX >> 0x10);
          cVar12 = (char)unaff_EBX;
          *pbVar18 = *pbVar18 + bVar3;
          bVar19 = (char)((uint)unaff_EBX >> 8) + bVar4 | *(byte *)(unaff_EBP + -0x24);
          *pbVar18 = *pbVar18 + bVar3;
          uVar9 = (undefined3)((uint)pbVar18 >> 8);
          bVar3 = bVar3 | (byte)*unaff_ESI;
          pcVar5 = (char *)CONCAT31(uVar9,bVar3);
          cVar15 = *(char *)(CONCAT22(uVar13,CONCAT11(bVar19,cVar12)) + -0x23);
          *pcVar5 = *pcVar5 + bVar3;
          bVar4 = *(byte *)(unaff_EBP + -0x22);
          *pcVar5 = *pcVar5 + bVar3;
          bVar3 = bVar3 | (byte)*unaff_ESI;
          pbVar6 = (byte *)CONCAT31(uVar9,bVar3);
          cVar17 = cVar12 - (byte)*unaff_ESI;
          unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22(uVar13,CONCAT11(bVar19 + cVar15 | bVar4,
                                                                       cVar12)) >> 8),cVar17);
          f = (byte *)CONCAT22((short)((uint)f >> 0x10),
                               CONCAT11((char)((uint)f >> 8) + *pbVar6,bVar10));
          *(byte *)param_2 = (byte)*param_2 + bVar10;
          bVar10 = bVar3 - *pbVar6;
          pbVar18 = (byte *)CONCAT31(uVar9,bVar10);
          unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar3 < *pbVar6) - *(int *)pbVar18));
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 * '\x02');
          *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
          *unaff_EDI = *unaff_EDI + cVar17;
          bVar4 = *pbVar18;
          *pbVar18 = *pbVar18 + bVar10;
          *param_2 = (uint)(pbVar18 + (uint)CARRY1(bVar4,bVar10) + *param_2);
        } while ((POPCOUNT(*param_2 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar18 = *pbVar18 + (char)pbVar18;
        f = (byte *)CONCAT31((int3)((uint)f >> 8),(byte)f | pbVar18[(int)f]);
        bVar20 = false;
        pbVar18 = (byte *)((uint)pbVar18 & 0xffffff00);
        do {
          unaff_EDI = unaff_EDI + (-(uint)bVar20 - *(int *)unaff_EBX);
          pcVar5 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),*f);
          *pcVar5 = *pcVar5 + *f;
          pbVar18 = (byte *)CONCAT31((int3)((uint)(pcVar5 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                                            (byte)((uint)f >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar5 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                                      (byte)((uint)f >> 8)) + 0xda7d) |
                                     (byte)*param_2) + 0x7d);
          f = f + -1;
          *(byte *)param_2 = (byte)*param_2 + (char)f;
          while( true ) {
            uVar16 = (undefined3)((uint)param_2 >> 8);
            cVar15 = (char)param_2 + *(char *)((int)unaff_EDI * 2 + 0xa0000e1);
            param_2 = (uint *)CONCAT31(uVar16,cVar15);
            bVar20 = CARRY1((byte)pbVar18,(byte)*param_2);
            uVar9 = (undefined3)((uint)pbVar18 >> 8);
            bVar4 = (byte)pbVar18 + (byte)*param_2;
            pbVar18 = (byte *)CONCAT31(uVar9,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *pbVar18 = *pbVar18 + bVar4;
            cVar12 = (char)f;
            f = (byte *)CONCAT22((short)((uint)f >> 0x10),
                                 CONCAT11((byte)((uint)f >> 8) | unaff_EDI[-0x65],cVar12));
            bVar3 = *pbVar18;
            *pbVar18 = *pbVar18 + bVar4;
            if (CARRY1(bVar3,bVar4)) {
              *pbVar18 = *pbVar18 + bVar4;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                    *(byte *)(unaff_EBP + -0x1d),(char)unaff_EBX));
              *pbVar18 = *pbVar18 + bVar4;
              bVar20 = false;
              bVar4 = bVar4 | (byte)*param_2;
              pcVar5 = (char *)CONCAT31(uVar9,bVar4);
              while( true ) {
                bVar3 = (byte)pcVar5;
                uVar9 = (undefined3)((uint)pcVar5 >> 8);
                if (bVar20 == (char)bVar4 < '\0') break;
                *pcVar5 = *pcVar5 + bVar3;
                bVar3 = bVar3 | (byte)*param_2;
                puVar7 = (uint *)CONCAT31(uVar9,bVar3);
                *unaff_EDI = *unaff_EDI << 1 | (char)*unaff_EDI < '\0';
                uVar2 = *puVar7;
                *(byte *)puVar7 = (byte)*puVar7 + bVar3;
                unaff_EBP = (unaff_EBP - *puVar7) - (uint)CARRY1((byte)uVar2,bVar3);
                *puVar7 = *puVar7 << 1 | (uint)((int)*puVar7 < 0);
                while( true ) {
                  uVar2 = *param_2;
                  *(byte *)param_2 = (byte)*param_2 + (byte)f;
                  cVar15 = (char)puVar7 + 'o' + CARRY1((byte)uVar2,(byte)f);
                  pcVar5 = (char *)CONCAT31((int3)((uint)puVar7 >> 8),cVar15);
                  f = (byte *)0x20a0000;
                  if ((POPCOUNT(cVar15) & 1U) != 0) break;
                  *pcVar5 = *pcVar5 + cVar15;
                  bVar4 = bRamfe140212;
                  f = (byte *)0x0;
                  uVar9 = (undefined3)((uint)(pcVar5 + -0x732b0000) >> 8);
                  bVar3 = in(0);
                  puVar7 = (uint *)CONCAT31(uVar9,bVar3);
                  uVar2 = *param_2;
                  *(byte *)param_2 = (byte)*param_2;
                  if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0') {
                    *(byte *)puVar7 = (byte)*puVar7 + bVar3;
                    bVar3 = bVar3 | (byte)*param_2;
                    puVar7 = (uint *)CONCAT31(uVar9,bVar3);
                    if ((POPCOUNT(bVar3) & 1U) == 0) {
                      *(byte *)puVar7 = (byte)*puVar7 + bVar3;
                      pcVar5 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar7) << 8);
                      *(byte *)puVar7 = (byte)*puVar7 + bVar3;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar7 = (byte)*puVar7 + bVar3;
                    puVar7 = (uint *)CONCAT31(uVar9,bVar3 | (byte)*param_2);
                  }
                }
                *(byte *)param_2 = (byte)*param_2;
                bVar20 = SCARRY1((char)param_2,*unaff_EDI);
                bVar4 = (char)param_2 + *unaff_EDI;
                param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
              }
              if (bVar20 == (char)bVar4 < '\0') {
                *(byte *)param_2 = (byte)*param_2 + (char)f;
                pbVar18 = (byte *)((uint)pcVar5 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar5 = *pcVar5 + bVar3;
              pbVar18 = (byte *)CONCAT31(uVar9,(bVar3 | (byte)*param_2) + 0x7d);
              f = f + -1;
              *(byte *)param_2 = (byte)*param_2 + (char)f;
            }
            else {
              *(byte *)param_2 = (byte)*param_2 + cVar12;
              param_2 = (uint *)CONCAT31(uVar16,cVar15 + *(char *)((int)unaff_EDI * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      bVar4 = bVar4 - cVar12;
      *(char *)CONCAT31(uVar9,bVar4) = *(char *)CONCAT31(uVar9,bVar4) + bVar4;
      bVar4 = bVar4 | (byte)*param_2;
      in_EAX = (byte *)CONCAT31(uVar9,bVar4);
    } while ((POPCOUNT(bVar4) & 1U) == 0);
    *in_EAX = *in_EAX + bVar4;
    f = (byte *)CONCAT22(uVar13,CONCAT11(bVar10 | *in_EAX,bVar3));
    *in_EAX = *in_EAX << (bVar3 & 7) | *in_EAX >> 8 - (bVar3 & 7);
    *(byte *)param_2 = (byte)*param_2 + bVar3;
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar12 - (byte)*unaff_ESI);
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP - *puVar7;
  do {
    bVar4 = (byte)puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + bVar4;
    unaff_EDI = unaff_EDI + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar7 = (byte)*puVar7 + bVar4;
    bVar4 = bVar4 | (byte)*param_2;
    puVar7 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),bVar4);
    *(byte *)puVar7 = (byte)*puVar7 | bVar4;
    bVar4 = (byte)*puVar7;
    unaff_EBP = 0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar7 = (byte)*puVar7 + (byte)puVar7;
        bVar4 = (byte)puVar7 | (byte)*param_2;
        puVar7 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
        uVar1 = CONCAT21((short)((uint)pcVar5 >> 0x10),(byte)((uint)pcVar5 >> 8) | bRamfe140212);
        while( true ) {
          pcVar5 = (char *)((uint)uVar1 << 8);
          bVar19 = (byte)puVar7;
          *(byte *)puVar7 = (byte)*puVar7 & bVar19;
          bVar10 = *unaff_EBX;
          bVar11 = (byte)uVar1;
          bVar3 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar11;
          bVar4 = *unaff_EBX;
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
            cVar15 = (char)((uint)unaff_EBX >> 8);
            uVar13 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar20) {
              *(byte *)param_2 = (byte)*param_2;
              unaff_EBX = (byte *)CONCAT22(uVar13,CONCAT11(cVar15 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
            uVar14 = (undefined2)((uint)pcVar5 >> 0x10);
            bVar3 = (byte)((uint)pcVar5 >> 8) | (byte)*puVar7;
            uVar1 = CONCAT21(uVar14,bVar3);
            *puVar7 = *puVar7 & (uint)puVar7;
            *unaff_EBX = *unaff_EBX + bVar3;
            uVar9 = (undefined3)((uint)puVar7 >> 8);
            bVar4 = (char)puVar7 - bVar3;
            pcVar5 = (char *)CONCAT31(uVar9,bVar4);
            *pcVar5 = *pcVar5 + bVar4;
            bVar4 = bVar4 | (byte)*param_2;
            puVar7 = (uint *)CONCAT31(uVar9,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar7 = (byte)*puVar7 + bVar4;
            pcVar5 = (char *)((uint)CONCAT21(uVar14,bVar3 | (byte)*puVar7) << 8);
            *puVar7 = *puVar7 - (int)puVar7;
            *(byte *)param_2 = (byte)*param_2;
            unaff_EBX = (byte *)CONCAT22(uVar13,CONCAT11(cVar15 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
              uVar13 = (undefined2)((uint)param_2 >> 0x10);
              cVar15 = (char)param_2;
              bVar4 = (byte)((uint)param_2 >> 8) | unaff_EBX[-0x17];
              param_2 = (uint *)CONCAT22(uVar13,CONCAT11(bVar4,cVar15));
              *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar7 = (byte)*puVar7 + (byte)puVar7;
                uVar9 = (undefined3)((uint)puVar7 >> 8);
                bVar10 = (byte)puVar7 | (byte)*param_2;
                pcVar8 = (char *)CONCAT31(uVar9,bVar10);
                bVar3 = unaff_EBX[-0x16];
                *pcVar8 = *pcVar8 + bVar10;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar3 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar8 = *pcVar8 + bVar10;
                pbVar18 = (byte *)CONCAT31(uVar9,bVar10 | (byte)*param_2);
                while( true ) {
                  *pbVar18 = *pbVar18 + (byte)pbVar18;
                  uVar9 = (undefined3)((uint)pbVar18 >> 8);
                  bVar3 = (byte)pbVar18 | (byte)*param_2;
                  puVar7 = (uint *)CONCAT31(uVar9,bVar3);
                  if ((POPCOUNT(bVar3) & 1U) != 0) break;
                  *(byte *)puVar7 = (byte)*puVar7 + bVar3;
                  bVar10 = unaff_EDI[-0x14];
                  *(byte *)puVar7 = (byte)*puVar7 + bVar3;
                  bVar3 = bVar3 | (byte)*param_2;
                  pcVar8 = (char *)CONCAT31(uVar9,bVar3);
                  bVar19 = unaff_EBX[-0x15];
                  *pcVar8 = *pcVar8 + bVar3;
                  pcVar5 = (char *)((uint)CONCAT21((short)((uint)pcVar5 >> 0x10),
                                                   (byte)((uint)pcVar5 >> 8) | bVar10 |
                                                   unaff_EDI[-0x13]) << 8);
                  *pcVar8 = *pcVar8 + bVar3;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar19 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar8 = *pcVar8 + bVar3;
                  pbVar18 = (byte *)CONCAT31(uVar9,bVar3 | (byte)*param_2);
                  do {
                    do {
                      bVar10 = (byte)pbVar18;
                      *pbVar18 = *pbVar18 + bVar10;
                      cVar17 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar18,
                                                            cVar17));
                      *pbVar18 = bVar10;
                      *pbVar18 = *pbVar18 + bVar10;
                      cVar12 = (char)((uint)pcVar5 >> 8) + *pbVar18;
                      pcVar5 = (char *)((uint)CONCAT21((short)((uint)pcVar5 >> 0x10),cVar12) << 8);
                      uVar9 = (undefined3)((uint)pbVar18 >> 8);
                      bVar10 = bVar10 & *pbVar18;
                      pbVar18 = (byte *)CONCAT31(uVar9,bVar10);
                      bVar3 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar12;
                    } while (SCARRY1(bVar3,cVar12) == (char)*unaff_EBX < '\0');
                    *pbVar18 = *pbVar18 + bVar10;
                    bVar10 = bVar10 | (byte)*param_2;
                    pbVar18 = (byte *)CONCAT31(uVar9,bVar10);
                    if ((POPCOUNT(bVar10) & 1U) == 0) {
                      *pbVar18 = *pbVar18 + bVar10;
                      *pbVar18 = *pbVar18 + bVar10;
                      cVar15 = cVar15 - bVar4;
                      pbVar6 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar15);
                      *pbVar18 = *pbVar18 + bVar10;
                      bRam0312382b = bRam0312382b | *pbVar6;
                      while( true ) {
                        bVar3 = (byte)pbVar18;
                        *pbVar18 = *pbVar18 + bVar3;
                        bRam0312382b = bRam0312382b | (unaff_EDI + 0x21b0000)[(int)pbVar18];
                        uVar9 = (undefined3)((uint)pbVar18 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar6 = *pbVar6 + bRam0312382b;
                        pbVar18 = (byte *)CONCAT31(uVar9,bVar3 | (byte)*unaff_ESI);
                      }
                      *pbVar18 = *pbVar18 + bVar3;
                      bVar3 = bVar3 | (byte)*unaff_ESI;
                      pcVar5 = (char *)CONCAT31(uVar9,bVar3);
                      out(*unaff_ESI,(short)pbVar6);
                      *pcVar5 = *pcVar5 + bVar3;
                      uVar14 = CONCAT11(bVar4 | bRam6f0a002b,cVar15);
                      pcVar8 = (char *)CONCAT22(uVar13,uVar14);
                      *pcVar5 = *pcVar5 + bVar3;
                      *pcVar8 = *pcVar8 + bRam0312382b;
                      out(unaff_ESI[1],uVar14);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar17 + *pcVar5);
                  } while (SCARRY1(cVar17,*pcVar5) != (char)(cVar17 + *pcVar5) < '\0');
                }
                uVar2 = *param_2;
                *(byte *)param_2 = (byte)*param_2;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0');
              *(byte *)param_2 = (byte)*param_2;
              *pcVar5 = *pcVar5 - (char)unaff_EBX;
              *(byte *)puVar7 = (byte)*puVar7 + bVar3;
              bVar3 = bVar3 | (byte)*param_2;
              puVar7 = (uint *)CONCAT31(uVar9,bVar3);
              bVar20 = (POPCOUNT(bVar3) & 1U) == 0;
            } while (bVar20);
          }
        }
      } while (SCARRY1(bVar3,bVar11));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar5 >> 8);
    *unaff_EDI = *unaff_EDI - (char)unaff_EBX;
  } while( true );
}


