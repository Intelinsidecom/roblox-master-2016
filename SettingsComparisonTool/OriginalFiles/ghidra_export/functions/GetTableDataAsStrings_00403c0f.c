/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403c0f
 * Raw Name    : GetTableDataAsStrings
 * Demangled   : GetTableDataAsStrings
 * Prototype   : pointer GetTableDataAsStrings(undefined4 tableName, uint * param_2)
 * Local Vars  : uVar1, uVar2, bVar3, bVar4, bVar5, bVar6, in_EAX, param_2, pbVar7, pbVar8, pcVar9, puVar10, uVar11, pcVar12, cVar13, bVar14, uVar15, cVar16, uVar17, uVar18, cVar19, unaff_EBX, unaff_EBP, unaff_ESI, unaff_EDI, bVar20, tableName
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

undefined * __fastcall GetTableDataAsStrings(undefined4 tableName,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *in_EAX;
  byte *pbVar7;
  undefined3 uVar11;
  char *pcVar9;
  uint *puVar10;
  char cVar13;
  byte bVar14;
  char *pcVar12;
  undefined2 uVar15;
  char cVar16;
  undefined3 uVar17;
  undefined2 uVar18;
  char cVar19;
  byte *unaff_EBX;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *unaff_EDI;
  bool bVar20;
  byte *pbVar8;
  
                    /* .NET CLR Managed Code */
  cVar16 = (char)tableName;
  cVar13 = (char)((uint)tableName >> 8) + *in_EAX;
  pcVar12 = (char *)CONCAT22((short)((uint)tableName >> 0x10),CONCAT11(cVar13,cVar16));
  bVar5 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar5;
  *unaff_EBP = *unaff_EBP - cVar13;
  *(char *)param_2 = (char)*param_2 + cVar16;
  pbVar7 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar5 - 0xb);
  if (10 < bVar5) {
    *pbVar7 = *pbVar7 | bVar5 - 0xb;
    return pbVar7;
  }
  *(char *)param_2 = (char)*param_2 + cVar16;
  do {
    bVar5 = unaff_EBX[-0x23];
    bVar3 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar3;
    bVar4 = unaff_EBP[-0x22];
    *pbVar7 = *pbVar7 + bVar3;
    uVar11 = (undefined3)((uint)pbVar7 >> 8);
    bVar3 = bVar3 | *unaff_ESI;
    pbVar8 = (byte *)CONCAT31(uVar11,bVar3);
    cVar13 = (char)unaff_EBX - *unaff_ESI;
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                          bVar4,(char)unaff_EBX)) >> 8),cVar13);
    cVar16 = (char)pcVar12;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11((char)((uint)pcVar12 >> 8) + *pbVar8,cVar16));
    *(byte *)param_2 = (byte)*param_2 + cVar16;
    bVar4 = bVar3 - *pbVar8;
    pbVar7 = (byte *)CONCAT31(uVar11,bVar4);
    unaff_ESI = unaff_ESI + (-(uint)(bVar3 < *pbVar8) - *(int *)pbVar7);
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 * '\x02');
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    *unaff_EDI = *unaff_EDI + cVar13;
    bVar5 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar4;
    *param_2 = (uint)(pbVar7 + (uint)CARRY1(bVar5,bVar4) + *param_2);
  } while ((POPCOUNT(*param_2 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *pbVar7 = *pbVar7 + (char)pbVar7;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)pcVar12 | pbVar7[(int)pcVar12]);
  bVar20 = false;
  pbVar7 = (byte *)((uint)pbVar7 & 0xffffff00);
  do {
    unaff_EDI = unaff_EDI + (-(uint)bVar20 - *(int *)unaff_EBX);
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar7 >> 8),*pcVar12);
    *pcVar9 = *pcVar9 + *pcVar12;
    pbVar7 = (byte *)CONCAT31((int3)((uint)(pcVar9 + (unaff_ESI[0x2000001] <
                                                     (byte)((uint)pcVar12 >> 8)) + 0xda7d) >> 8),
                              ((byte)(pcVar9 + (unaff_ESI[0x2000001] < (byte)((uint)pcVar12 >> 8)) +
                                               0xda7d) | (byte)*param_2) + 0x7d);
    pcVar12 = pcVar12 + -1;
    *(byte *)param_2 = (byte)*param_2 + (char)pcVar12;
    while( true ) {
      uVar17 = (undefined3)((uint)param_2 >> 8);
      cVar16 = (char)param_2 + *(char *)((int)unaff_EDI * 2 + 0xa0000e1);
      param_2 = (uint *)CONCAT31(uVar17,cVar16);
      bVar20 = CARRY1((byte)pbVar7,(byte)*param_2);
      uVar11 = (undefined3)((uint)pbVar7 >> 8);
      bVar5 = (byte)pbVar7 + (byte)*param_2;
      pbVar7 = (byte *)CONCAT31(uVar11,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) break;
      *pbVar7 = *pbVar7 + bVar5;
      cVar13 = (char)pcVar12;
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar12 >> 8) | unaff_EDI[-0x65],cVar13));
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar5;
      if (CARRY1(bVar4,bVar5)) {
        *pbVar7 = *pbVar7 + bVar5;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x1d],
                                              (char)unaff_EBX));
        *pbVar7 = *pbVar7 + bVar5;
        bVar20 = false;
        bVar5 = bVar5 | (byte)*param_2;
        pcVar9 = (char *)CONCAT31(uVar11,bVar5);
        while( true ) {
          bVar4 = (byte)pcVar9;
          uVar11 = (undefined3)((uint)pcVar9 >> 8);
          if (bVar20 == (char)bVar5 < '\0') break;
          *pcVar9 = *pcVar9 + bVar4;
          bVar4 = bVar4 | (byte)*param_2;
          puVar10 = (uint *)CONCAT31(uVar11,bVar4);
          *unaff_EDI = *unaff_EDI << 1 | (char)*unaff_EDI < '\0';
          uVar2 = *puVar10;
          *(byte *)puVar10 = (byte)*puVar10 + bVar4;
          unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar2,bVar4) - *puVar10);
          *puVar10 = *puVar10 << 1 | (uint)((int)*puVar10 < 0);
          while( true ) {
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2 + (byte)pcVar12;
            cVar16 = (char)puVar10 + 'o' + CARRY1((byte)uVar2,(byte)pcVar12);
            pcVar9 = (char *)CONCAT31((int3)((uint)puVar10 >> 8),cVar16);
            pcVar12 = (char *)0x20a0000;
            if ((POPCOUNT(cVar16) & 1U) != 0) break;
            *pcVar9 = *pcVar9 + cVar16;
            bVar5 = bRamfe140212;
            pcVar12 = (char *)0x0;
            uVar11 = (undefined3)((uint)(pcVar9 + -0x732b0000) >> 8);
            bVar4 = in(0);
            puVar10 = (uint *)CONCAT31(uVar11,bVar4);
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2;
            if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0') {
              *(byte *)puVar10 = (byte)*puVar10 + bVar4;
              bVar4 = bVar4 | (byte)*param_2;
              puVar10 = (uint *)CONCAT31(uVar11,bVar4);
              if ((POPCOUNT(bVar4) & 1U) == 0) {
                *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                pcVar12 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar10) << 8);
                *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                goto code_r0x00403d33;
              }
              *(byte *)puVar10 = (byte)*puVar10 + bVar4;
              puVar10 = (uint *)CONCAT31(uVar11,bVar4 | (byte)*param_2);
            }
          }
          *(byte *)param_2 = (byte)*param_2;
          bVar20 = SCARRY1((char)param_2,*unaff_EDI);
          bVar5 = (char)param_2 + *unaff_EDI;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
        }
        if (bVar20 == (char)bVar5 < '\0') {
          *(byte *)param_2 = (byte)*param_2 + (char)pcVar12;
          pbVar7 = (byte *)((uint)pcVar9 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar9 = *pcVar9 + bVar4;
        pbVar7 = (byte *)CONCAT31(uVar11,(bVar4 | (byte)*param_2) + 0x7d);
        pcVar12 = pcVar12 + -1;
        *(byte *)param_2 = (byte)*param_2 + (char)pcVar12;
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar13;
        param_2 = (uint *)CONCAT31(uVar17,cVar16 + *(char *)((int)unaff_EDI * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar10;
  do {
    bVar5 = (byte)puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + bVar5;
    unaff_EDI = unaff_EDI + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar10 = (byte)*puVar10 + bVar5;
    bVar5 = bVar5 | (byte)*param_2;
    puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar5);
    *(byte *)puVar10 = (byte)*puVar10 | bVar5;
    bVar5 = (byte)*puVar10;
    unaff_EBP = (char *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
        bVar5 = (byte)puVar10 | (byte)*param_2;
        puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
        uVar1 = CONCAT21((short)((uint)pcVar12 >> 0x10),(byte)((uint)pcVar12 >> 8) | bRamfe140212);
        while( true ) {
          pcVar12 = (char *)((uint)uVar1 << 8);
          bVar6 = (byte)puVar10;
          *(byte *)puVar10 = (byte)*puVar10 & bVar6;
          bVar4 = *unaff_EBX;
          bVar14 = (byte)uVar1;
          bVar3 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar14;
          bVar5 = *unaff_EBX;
          if (!CARRY1(bVar4,bVar14)) break;
          *(byte *)puVar10 = (byte)*puVar10 + bVar6;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar10 = (byte)*puVar10 + bVar6;
          bVar6 = bVar6 | (byte)*param_2;
          puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar6);
          bVar20 = (POPCOUNT(bVar6) & 1U) == 0;
          while( true ) {
            cVar16 = (char)((uint)unaff_EBX >> 8);
            uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar20) {
              *(byte *)param_2 = (byte)*param_2;
              unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar16 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
            uVar15 = (undefined2)((uint)pcVar12 >> 0x10);
            bVar4 = (byte)((uint)pcVar12 >> 8) | (byte)*puVar10;
            uVar1 = CONCAT21(uVar15,bVar4);
            *puVar10 = *puVar10 & (uint)puVar10;
            *unaff_EBX = *unaff_EBX + bVar4;
            uVar11 = (undefined3)((uint)puVar10 >> 8);
            bVar5 = (char)puVar10 - bVar4;
            pcVar12 = (char *)CONCAT31(uVar11,bVar5);
            *pcVar12 = *pcVar12 + bVar5;
            bVar5 = bVar5 | (byte)*param_2;
            puVar10 = (uint *)CONCAT31(uVar11,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar10 = (byte)*puVar10 + bVar5;
            pcVar12 = (char *)((uint)CONCAT21(uVar15,bVar4 | (byte)*puVar10) << 8);
            *puVar10 = *puVar10 - (int)puVar10;
            *(byte *)param_2 = (byte)*param_2;
            unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar16 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              uVar18 = (undefined2)((uint)param_2 >> 0x10);
              cVar16 = (char)param_2;
              bVar5 = (byte)((uint)param_2 >> 8) | unaff_EBX[-0x17];
              param_2 = (uint *)CONCAT22(uVar18,CONCAT11(bVar5,cVar16));
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
                uVar11 = (undefined3)((uint)puVar10 >> 8);
                bVar3 = (byte)puVar10 | (byte)*param_2;
                pcVar9 = (char *)CONCAT31(uVar11,bVar3);
                bVar4 = unaff_EBX[-0x16];
                *pcVar9 = *pcVar9 + bVar3;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar9 = *pcVar9 + bVar3;
                pbVar7 = (byte *)CONCAT31(uVar11,bVar3 | (byte)*param_2);
                while( true ) {
                  *pbVar7 = *pbVar7 + (byte)pbVar7;
                  uVar11 = (undefined3)((uint)pbVar7 >> 8);
                  bVar4 = (byte)pbVar7 | (byte)*param_2;
                  puVar10 = (uint *)CONCAT31(uVar11,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) != 0) break;
                  *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                  bVar3 = unaff_EDI[-0x14];
                  *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                  bVar4 = bVar4 | (byte)*param_2;
                  pcVar9 = (char *)CONCAT31(uVar11,bVar4);
                  bVar6 = unaff_EBX[-0x15];
                  *pcVar9 = *pcVar9 + bVar4;
                  pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),
                                                    (byte)((uint)pcVar12 >> 8) | bVar3 |
                                                    unaff_EDI[-0x13]) << 8);
                  *pcVar9 = *pcVar9 + bVar4;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar6 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar9 = *pcVar9 + bVar4;
                  pbVar7 = (byte *)CONCAT31(uVar11,bVar4 | (byte)*param_2);
                  do {
                    do {
                      bVar3 = (byte)pbVar7;
                      *pbVar7 = *pbVar7 + bVar3;
                      cVar19 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar7,
                                                            cVar19));
                      *pbVar7 = bVar3;
                      *pbVar7 = *pbVar7 + bVar3;
                      cVar13 = (char)((uint)pcVar12 >> 8) + *pbVar7;
                      pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),cVar13) << 8)
                      ;
                      uVar11 = (undefined3)((uint)pbVar7 >> 8);
                      bVar3 = bVar3 & *pbVar7;
                      pbVar7 = (byte *)CONCAT31(uVar11,bVar3);
                      bVar4 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar13;
                    } while (SCARRY1(bVar4,cVar13) == (char)*unaff_EBX < '\0');
                    *pbVar7 = *pbVar7 + bVar3;
                    bVar3 = bVar3 | (byte)*param_2;
                    pbVar7 = (byte *)CONCAT31(uVar11,bVar3);
                    if ((POPCOUNT(bVar3) & 1U) == 0) {
                      *pbVar7 = *pbVar7 + bVar3;
                      *pbVar7 = *pbVar7 + bVar3;
                      cVar16 = cVar16 - bVar5;
                      pbVar8 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar16);
                      *pbVar7 = *pbVar7 + bVar3;
                      bRam0312382b = bRam0312382b | *pbVar8;
                      while( true ) {
                        bVar4 = (byte)pbVar7;
                        *pbVar7 = *pbVar7 + bVar4;
                        bRam0312382b = bRam0312382b | (unaff_EDI + 0x21b0000)[(int)pbVar7];
                        uVar11 = (undefined3)((uint)pbVar7 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar8 = *pbVar8 + bRam0312382b;
                        pbVar7 = (byte *)CONCAT31(uVar11,bVar4 | *unaff_ESI);
                      }
                      *pbVar7 = *pbVar7 + bVar4;
                      bVar4 = bVar4 | *unaff_ESI;
                      pcVar12 = (char *)CONCAT31(uVar11,bVar4);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar8);
                      *pcVar12 = *pcVar12 + bVar4;
                      uVar15 = CONCAT11(bVar5 | bRam6f0a002b,cVar16);
                      pcVar9 = (char *)CONCAT22(uVar18,uVar15);
                      *pcVar12 = *pcVar12 + bVar4;
                      *pcVar9 = *pcVar9 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar15);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar19 + *pcVar12);
                  } while (SCARRY1(cVar19,*pcVar12) != (char)(cVar19 + *pcVar12) < '\0');
                }
                uVar2 = *param_2;
                *(byte *)param_2 = (byte)*param_2;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0');
              *(byte *)param_2 = (byte)*param_2;
              *pcVar12 = *pcVar12 - (char)unaff_EBX;
              *(byte *)puVar10 = (byte)*puVar10 + bVar4;
              bVar4 = bVar4 | (byte)*param_2;
              puVar10 = (uint *)CONCAT31(uVar11,bVar4);
              bVar20 = (POPCOUNT(bVar4) & 1U) == 0;
            } while (bVar20);
          }
        }
      } while (SCARRY1(bVar3,bVar14));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar12 >> 8);
    *unaff_EDI = *unaff_EDI - (char)unaff_EBX;
  } while( true );
}


