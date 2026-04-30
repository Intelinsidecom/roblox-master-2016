/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403bef
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 connectionString, uint * param_2)
 * Local Vars  : iVar1, uVar2, uVar3, cVar4, bVar5, bVar6, bVar7, bVar8, in_EAX, param_2, pcVar9, pbVar10, pbVar11, pcVar12, puVar13, uVar14, pcVar15, cVar16, bVar17, uVar18, pbVar19, uVar20, uVar21, cVar22, unaff_EBX, unaff_EBP, unaff_ESI, unaff_EDI, pbVar23, bVar24, connectionString
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

void __fastcall _ctor(undefined4 connectionString,uint *param_2)

{
  int iVar1;
  uint3 uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *in_EAX;
  undefined3 uVar14;
  byte *pbVar10;
  char *pcVar12;
  uint *puVar13;
  char cVar16;
  byte bVar17;
  char *pcVar15;
  undefined2 uVar18;
  undefined3 uVar20;
  undefined2 uVar21;
  byte *pbVar19;
  char cVar22;
  char *unaff_EBX;
  char *unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  byte *pbVar23;
  bool bVar24;
  char *pcVar9;
  byte *pbVar11;
  
                    /* .NET CLR Managed Code */
  bVar5 = *in_EAX;
  bVar6 = (byte)((uint)connectionString >> 8);
  cVar22 = (char)connectionString;
  cVar16 = bVar6 + *in_EAX;
  pcVar15 = (char *)CONCAT22((short)((uint)connectionString >> 0x10),CONCAT11(cVar16,cVar22));
  iVar1 = *(int *)in_EAX;
  *(char *)param_2 = (char)*param_2 + cVar22;
  uVar14 = (undefined3)((uint)(in_EAX + (uint)CARRY1(bVar6,bVar5) + iVar1) >> 8);
  cVar4 = (char)(in_EAX + (uint)CARRY1(bVar6,bVar5) + iVar1) + *unaff_EBX;
  pcVar9 = (char *)CONCAT31(uVar14,cVar4);
  pcVar12 = (char *)((int)pcVar9 * 2 + 0x1e2a0600);
  *pcVar12 = *pcVar12 - (char)unaff_EBX;
  pbVar19 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x5f],(char)unaff_EBX
                                     ));
  *pcVar9 = *pcVar9 + cVar4;
  bVar5 = cVar4 + 0x2aU & (byte)*param_2;
  pbVar23 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + 0x5f));
  *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
  bVar6 = bVar5 + 0x2a;
  *(char *)param_2 = (char)*param_2 + '(';
  *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
  *unaff_EBP = *unaff_EBP - cVar16;
  *(char *)param_2 = (char)*param_2 + cVar22;
  pbVar10 = (byte *)CONCAT31(uVar14,bVar5 + 0x1f);
  if (10 < bVar6) {
    *pbVar10 = *pbVar10 | bVar5 + 0x1f;
    return;
  }
  *(char *)param_2 = (char)*param_2 + cVar22;
  do {
    bVar5 = pbVar19[-0x23];
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    bVar6 = unaff_EBP[-0x22];
    *pbVar10 = *pbVar10 + bVar7;
    uVar14 = (undefined3)((uint)pbVar10 >> 8);
    bVar7 = bVar7 | *unaff_ESI;
    pbVar11 = (byte *)CONCAT31(uVar14,bVar7);
    cVar22 = (char)pbVar19 - *unaff_ESI;
    pbVar19 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar19 >> 0x10),
                                               CONCAT11((char)((uint)pbVar19 >> 8) + bVar5 | bVar6,
                                                        (char)pbVar19)) >> 8),cVar22);
    cVar4 = (char)pcVar15;
    pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                               CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar11,cVar4));
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    bVar6 = bVar7 - *pbVar11;
    pbVar10 = (byte *)CONCAT31(uVar14,bVar6);
    unaff_ESI = unaff_ESI + (-(uint)(bVar7 < *pbVar11) - *(int *)pbVar10);
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 * '\x02');
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *pbVar23 = *pbVar23 + cVar22;
    bVar5 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    *param_2 = (uint)(pbVar10 + (uint)CARRY1(bVar5,bVar6) + *param_2);
  } while ((POPCOUNT(*param_2 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar10[(int)pcVar15]);
  bVar24 = false;
  pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
  do {
    pbVar23 = pbVar23 + (-(uint)bVar24 - *(int *)pbVar19);
    pcVar12 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),*pcVar15);
    *pcVar12 = *pcVar12 + *pcVar15;
    pbVar10 = (byte *)CONCAT31((int3)((uint)(pcVar12 +
                                            (unaff_ESI[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                            0xda7d) >> 8),
                               ((byte)(pcVar12 +
                                      (unaff_ESI[0x2000001] < (byte)((uint)pcVar15 >> 8)) + 0xda7d)
                               | (byte)*param_2) + 0x7d);
    pcVar15 = pcVar15 + -1;
    *(byte *)param_2 = (byte)*param_2 + (char)pcVar15;
    while( true ) {
      uVar20 = (undefined3)((uint)param_2 >> 8);
      cVar4 = (char)param_2 + *(char *)((int)pbVar23 * 2 + 0xa0000e1);
      param_2 = (uint *)CONCAT31(uVar20,cVar4);
      bVar24 = CARRY1((byte)pbVar10,(byte)*param_2);
      uVar14 = (undefined3)((uint)pbVar10 >> 8);
      bVar5 = (byte)pbVar10 + (byte)*param_2;
      pbVar10 = (byte *)CONCAT31(uVar14,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) break;
      *pbVar10 = *pbVar10 + bVar5;
      cVar22 = (char)pcVar15;
      pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar23[-0x65],cVar22));
      bVar6 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar5;
      if (CARRY1(bVar6,bVar5)) {
        *pbVar10 = *pbVar10 + bVar5;
        pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar19 >> 8) | unaff_EBP[-0x1d],
                                            (char)pbVar19));
        *pbVar10 = *pbVar10 + bVar5;
        bVar24 = false;
        bVar5 = bVar5 | (byte)*param_2;
        pcVar12 = (char *)CONCAT31(uVar14,bVar5);
        while( true ) {
          bVar6 = (byte)pcVar12;
          uVar14 = (undefined3)((uint)pcVar12 >> 8);
          if (bVar24 == (char)bVar5 < '\0') break;
          *pcVar12 = *pcVar12 + bVar6;
          bVar6 = bVar6 | (byte)*param_2;
          puVar13 = (uint *)CONCAT31(uVar14,bVar6);
          *pbVar23 = *pbVar23 << 1 | (char)*pbVar23 < '\0';
          uVar3 = *puVar13;
          *(byte *)puVar13 = (byte)*puVar13 + bVar6;
          unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar3,bVar6) - *puVar13);
          *puVar13 = *puVar13 << 1 | (uint)((int)*puVar13 < 0);
          while( true ) {
            uVar3 = *param_2;
            *(byte *)param_2 = (byte)*param_2 + (byte)pcVar15;
            cVar4 = (char)puVar13 + 'o' + CARRY1((byte)uVar3,(byte)pcVar15);
            pcVar12 = (char *)CONCAT31((int3)((uint)puVar13 >> 8),cVar4);
            pcVar15 = (char *)0x20a0000;
            if ((POPCOUNT(cVar4) & 1U) != 0) break;
            *pcVar12 = *pcVar12 + cVar4;
            bVar5 = bRamfe140212;
            pcVar15 = (char *)0x0;
            uVar14 = (undefined3)((uint)(pcVar12 + -0x732b0000) >> 8);
            bVar6 = in(0);
            puVar13 = (uint *)CONCAT31(uVar14,bVar6);
            uVar3 = *param_2;
            *(byte *)param_2 = (byte)*param_2;
            if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*param_2 < '\0') {
              *(byte *)puVar13 = (byte)*puVar13 + bVar6;
              bVar6 = bVar6 | (byte)*param_2;
              puVar13 = (uint *)CONCAT31(uVar14,bVar6);
              if ((POPCOUNT(bVar6) & 1U) == 0) {
                *(byte *)puVar13 = (byte)*puVar13 + bVar6;
                pcVar12 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar13) << 8);
                *(byte *)puVar13 = (byte)*puVar13 + bVar6;
                goto code_r0x00403d33;
              }
              *(byte *)puVar13 = (byte)*puVar13 + bVar6;
              puVar13 = (uint *)CONCAT31(uVar14,bVar6 | (byte)*param_2);
            }
          }
          *(byte *)param_2 = (byte)*param_2;
          bVar24 = SCARRY1((char)param_2,*pbVar23);
          bVar5 = (char)param_2 + *pbVar23;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
        }
        if (bVar24 == (char)bVar5 < '\0') {
          *(byte *)param_2 = (byte)*param_2 + (char)pcVar15;
          pbVar10 = (byte *)((uint)pcVar12 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar12 = *pcVar12 + bVar6;
        pbVar10 = (byte *)CONCAT31(uVar14,(bVar6 | (byte)*param_2) + 0x7d);
        pcVar15 = pcVar15 + -1;
        *(byte *)param_2 = (byte)*param_2 + (char)pcVar15;
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar22;
        param_2 = (uint *)CONCAT31(uVar20,cVar4 + *(char *)((int)pbVar23 * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar13;
  do {
    bVar5 = (byte)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    pbVar23 = pbVar23 + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar13 = (byte)*puVar13 + bVar5;
    bVar5 = bVar5 | (byte)*param_2;
    puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
    *(byte *)puVar13 = (byte)*puVar13 | bVar5;
    bVar5 = (byte)*puVar13;
    unaff_EBP = (char *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
        bVar5 = (byte)puVar13 | (byte)*param_2;
        puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        uVar2 = CONCAT21((short)((uint)pcVar12 >> 0x10),(byte)((uint)pcVar12 >> 8) | bRamfe140212);
        while( true ) {
          pcVar12 = (char *)((uint)uVar2 << 8);
          bVar8 = (byte)puVar13;
          *(byte *)puVar13 = (byte)*puVar13 & bVar8;
          bVar6 = *pbVar19;
          bVar17 = (byte)uVar2;
          bVar7 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar17;
          bVar5 = *pbVar19;
          if (!CARRY1(bVar6,bVar17)) break;
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar19 >> 8) | bRam026fffe2,
                                              (char)pbVar19));
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          bVar8 = bVar8 | (byte)*param_2;
          puVar13 = (uint *)CONCAT31((int3)((uint)puVar13 >> 8),bVar8);
          bVar24 = (POPCOUNT(bVar8) & 1U) == 0;
          while( true ) {
            cVar4 = (char)((uint)pbVar19 >> 8);
            uVar21 = (undefined2)((uint)pbVar19 >> 0x10);
            if (!bVar24) {
              *(byte *)param_2 = (byte)*param_2;
              pbVar19 = (byte *)CONCAT22(uVar21,CONCAT11(cVar4 + pbVar19[-0x1f],(char)pbVar19));
              goto code_r0x00403d52;
            }
            *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
            uVar18 = (undefined2)((uint)pcVar12 >> 0x10);
            bVar6 = (byte)((uint)pcVar12 >> 8) | (byte)*puVar13;
            uVar2 = CONCAT21(uVar18,bVar6);
            *puVar13 = *puVar13 & (uint)puVar13;
            *pbVar19 = *pbVar19 + bVar6;
            uVar14 = (undefined3)((uint)puVar13 >> 8);
            bVar5 = (char)puVar13 - bVar6;
            pcVar12 = (char *)CONCAT31(uVar14,bVar5);
            *pcVar12 = *pcVar12 + bVar5;
            bVar5 = bVar5 | (byte)*param_2;
            puVar13 = (uint *)CONCAT31(uVar14,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar13 = (byte)*puVar13 + bVar5;
            pcVar12 = (char *)((uint)CONCAT21(uVar18,bVar6 | (byte)*puVar13) << 8);
            *puVar13 = *puVar13 - (int)puVar13;
            *(byte *)param_2 = (byte)*param_2;
            pbVar19 = (byte *)CONCAT22(uVar21,CONCAT11(cVar4 + pbVar19[-0x1d],(char)pbVar19));
            do {
              *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
              uVar21 = (undefined2)((uint)param_2 >> 0x10);
              cVar4 = (char)param_2;
              bVar5 = (byte)((uint)param_2 >> 8) | pbVar19[-0x17];
              param_2 = (uint *)CONCAT22(uVar21,CONCAT11(bVar5,cVar4));
              *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
              pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar19 >> 8) | bRam026fffeb,
                                                  (char)pbVar19));
              do {
                *(byte *)puVar13 = (byte)*puVar13 + (byte)puVar13;
                uVar14 = (undefined3)((uint)puVar13 >> 8);
                bVar7 = (byte)puVar13 | (byte)*param_2;
                pcVar15 = (char *)CONCAT31(uVar14,bVar7);
                bVar6 = pbVar19[-0x16];
                *pcVar15 = *pcVar15 + bVar7;
                pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                           CONCAT11((char)((uint)pbVar19 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar19));
                *pcVar15 = *pcVar15 + bVar7;
                pbVar10 = (byte *)CONCAT31(uVar14,bVar7 | (byte)*param_2);
                while( true ) {
                  *pbVar10 = *pbVar10 + (byte)pbVar10;
                  uVar14 = (undefined3)((uint)pbVar10 >> 8);
                  bVar6 = (byte)pbVar10 | (byte)*param_2;
                  puVar13 = (uint *)CONCAT31(uVar14,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar13 = (byte)*puVar13 + bVar6;
                  bVar7 = pbVar23[-0x14];
                  *(byte *)puVar13 = (byte)*puVar13 + bVar6;
                  bVar6 = bVar6 | (byte)*param_2;
                  pcVar15 = (char *)CONCAT31(uVar14,bVar6);
                  bVar8 = pbVar19[-0x15];
                  *pcVar15 = *pcVar15 + bVar6;
                  pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),
                                                    (byte)((uint)pcVar12 >> 8) | bVar7 |
                                                    pbVar23[-0x13]) << 8);
                  *pcVar15 = *pcVar15 + bVar6;
                  pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                             CONCAT11((char)((uint)pbVar19 >> 8) + bVar8 |
                                                      bRam026fffef,(char)pbVar19));
                  *pcVar15 = *pcVar15 + bVar6;
                  pbVar10 = (byte *)CONCAT31(uVar14,bVar6 | (byte)*param_2);
                  do {
                    do {
                      bVar7 = (byte)pbVar10;
                      *pbVar10 = *pbVar10 + bVar7;
                      cVar16 = (char)pbVar19;
                      pbVar19 = (byte *)CONCAT22((short)((uint)pbVar19 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar19 >> 8) | *pbVar10,
                                                          cVar16));
                      *pbVar10 = bVar7;
                      *pbVar10 = *pbVar10 + bVar7;
                      cVar22 = (char)((uint)pcVar12 >> 8) + *pbVar10;
                      pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),cVar22) << 8)
                      ;
                      uVar14 = (undefined3)((uint)pbVar10 >> 8);
                      bVar7 = bVar7 & *pbVar10;
                      pbVar10 = (byte *)CONCAT31(uVar14,bVar7);
                      bVar6 = *pbVar19;
                      *pbVar19 = *pbVar19 + cVar22;
                    } while (SCARRY1(bVar6,cVar22) == (char)*pbVar19 < '\0');
                    *pbVar10 = *pbVar10 + bVar7;
                    bVar7 = bVar7 | (byte)*param_2;
                    pbVar10 = (byte *)CONCAT31(uVar14,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *pbVar10 = *pbVar10 + bVar7;
                      *pbVar10 = *pbVar10 + bVar7;
                      cVar4 = cVar4 - bVar5;
                      pbVar19 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar4);
                      *pbVar10 = *pbVar10 + bVar7;
                      bRam0312382b = bRam0312382b | *pbVar19;
                      while( true ) {
                        bVar6 = (byte)pbVar10;
                        *pbVar10 = *pbVar10 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar23 + 0x21b0000)[(int)pbVar10];
                        uVar14 = (undefined3)((uint)pbVar10 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar19 = *pbVar19 + bRam0312382b;
                        pbVar10 = (byte *)CONCAT31(uVar14,bVar6 | *unaff_ESI);
                      }
                      *pbVar10 = *pbVar10 + bVar6;
                      bVar6 = bVar6 | *unaff_ESI;
                      pcVar12 = (char *)CONCAT31(uVar14,bVar6);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar19);
                      *pcVar12 = *pcVar12 + bVar6;
                      uVar18 = CONCAT11(bVar5 | bRam6f0a002b,cVar4);
                      pcVar15 = (char *)CONCAT22(uVar21,uVar18);
                      *pcVar12 = *pcVar12 + bVar6;
                      *pcVar15 = *pcVar15 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar18);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar16 + *pcVar12);
                  } while (SCARRY1(cVar16,*pcVar12) != (char)(cVar16 + *pcVar12) < '\0');
                }
                uVar3 = *param_2;
                *(byte *)param_2 = (byte)*param_2;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*param_2 < '\0');
              *(byte *)param_2 = (byte)*param_2;
              *pcVar12 = *pcVar12 - (char)pbVar19;
              *(byte *)puVar13 = (byte)*puVar13 + bVar6;
              bVar6 = bVar6 | (byte)*param_2;
              puVar13 = (uint *)CONCAT31(uVar14,bVar6);
              bVar24 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar24);
          }
        }
      } while (SCARRY1(bVar7,bVar17));
    }
    *pbVar19 = *pbVar19 + (char)((uint)pcVar12 >> 8);
    *pbVar23 = *pbVar23 - (char)pbVar19;
  } while( true );
}


