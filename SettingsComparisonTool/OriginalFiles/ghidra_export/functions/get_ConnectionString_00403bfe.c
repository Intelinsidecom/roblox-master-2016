/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403bfe
 * Raw Name    : get_ConnectionString
 * Demangled   : get_ConnectionString
 * Prototype   : char * get_ConnectionString(byte * param_1, uint * param_2)
 * Local Vars  : param_1, param_2, uVar1, uVar2, bVar3, bVar4, bVar5, bVar6, in_EAX, pbVar7, pbVar8, pcVar9, puVar10, pcVar11, uVar12, bVar13, uVar14, cVar15, pbVar16, uVar17, uVar18, cVar19, cVar20, unaff_EBX, unaff_EBP, unaff_ESI, unaff_EDI, pbVar21, bVar22
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

char * __fastcall get_ConnectionString(byte *param_1,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *in_EAX;
  undefined3 uVar12;
  byte *pbVar7;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  byte bVar13;
  undefined2 uVar14;
  char cVar15;
  undefined3 uVar17;
  undefined2 uVar18;
  byte *pbVar16;
  char cVar19;
  char cVar20;
  int unaff_EBX;
  char *unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  byte *pbVar21;
  bool bVar22;
  byte *pbVar8;
  
                    /* .NET CLR Managed Code */
  pbVar16 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x5f),
                                      (char)unaff_EBX));
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar12 = (undefined3)((uint)in_EAX >> 8);
  bVar3 = (char)in_EAX + 0x2aU & (byte)*param_2;
  pbVar21 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + 0x5f));
  *(char *)CONCAT31(uVar12,bVar3) = *(char *)CONCAT31(uVar12,bVar3) + bVar3;
  bVar4 = bVar3 + 0x2a;
  *(char *)param_2 = (char)*param_2 + '(';
  *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
  *unaff_EBP = *unaff_EBP - (char)((uint)param_1 >> 8);
  *(char *)param_2 = (char)*param_2 + (char)param_1;
  pbVar7 = (byte *)CONCAT31(uVar12,bVar3 + 0x1f);
  if (10 < bVar4) {
    *pbVar7 = *pbVar7 | bVar3 + 0x1f;
    return (char *)pbVar7;
  }
  *(char *)param_2 = (char)*param_2 + (char)param_1;
  do {
    bVar3 = pbVar16[-0x23];
    bVar5 = (byte)pbVar7;
    *pbVar7 = *pbVar7 + bVar5;
    bVar4 = unaff_EBP[-0x22];
    *pbVar7 = *pbVar7 + bVar5;
    uVar12 = (undefined3)((uint)pbVar7 >> 8);
    bVar5 = bVar5 | *unaff_ESI;
    pbVar8 = (byte *)CONCAT31(uVar12,bVar5);
    cVar19 = (char)pbVar16 - *unaff_ESI;
    pbVar16 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar16 >> 0x10),
                                               CONCAT11((char)((uint)pbVar16 >> 8) + bVar3 | bVar4,
                                                        (char)pbVar16)) >> 8),cVar19);
    cVar15 = (char)param_1;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((char)((uint)param_1 >> 8) + *pbVar8,cVar15));
    *(byte *)param_2 = (byte)*param_2 + cVar15;
    bVar4 = bVar5 - *pbVar8;
    pbVar7 = (byte *)CONCAT31(uVar12,bVar4);
    unaff_ESI = unaff_ESI + (-(uint)(bVar5 < *pbVar8) - *(int *)pbVar7);
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 * '\x02');
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    *pbVar21 = *pbVar21 + cVar19;
    bVar3 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar4;
    *param_2 = (uint)(pbVar7 + (uint)CARRY1(bVar3,bVar4) + *param_2);
  } while ((POPCOUNT(*param_2 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *pbVar7 = *pbVar7 + (char)pbVar7;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | pbVar7[(int)param_1]);
  bVar22 = false;
  pbVar7 = (byte *)((uint)pbVar7 & 0xffffff00);
  do {
    pbVar21 = pbVar21 + (-(uint)bVar22 - *(int *)pbVar16);
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar7 >> 8),*param_1);
    *pcVar9 = *pcVar9 + *param_1;
    pbVar7 = (byte *)CONCAT31((int3)((uint)(pcVar9 + (unaff_ESI[0x2000001] <
                                                     (byte)((uint)param_1 >> 8)) + 0xda7d) >> 8),
                              ((byte)(pcVar9 + (unaff_ESI[0x2000001] < (byte)((uint)param_1 >> 8)) +
                                               0xda7d) | (byte)*param_2) + 0x7d);
    param_1 = param_1 + -1;
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    while( true ) {
      uVar17 = (undefined3)((uint)param_2 >> 8);
      cVar15 = (char)param_2 + *(char *)((int)pbVar21 * 2 + 0xa0000e1);
      param_2 = (uint *)CONCAT31(uVar17,cVar15);
      bVar22 = CARRY1((byte)pbVar7,(byte)*param_2);
      uVar12 = (undefined3)((uint)pbVar7 >> 8);
      bVar3 = (byte)pbVar7 + (byte)*param_2;
      pbVar7 = (byte *)CONCAT31(uVar12,bVar3);
      if ((POPCOUNT(bVar3) & 1U) != 0) break;
      *pbVar7 = *pbVar7 + bVar3;
      cVar19 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | pbVar21[-0x65],cVar19));
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar3;
      if (CARRY1(bVar4,bVar3)) {
        *pbVar7 = *pbVar7 + bVar3;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar16 >> 8) | unaff_EBP[-0x1d],
                                            (char)pbVar16));
        *pbVar7 = *pbVar7 + bVar3;
        bVar22 = false;
        bVar3 = bVar3 | (byte)*param_2;
        pcVar9 = (char *)CONCAT31(uVar12,bVar3);
        while( true ) {
          bVar4 = (byte)pcVar9;
          uVar12 = (undefined3)((uint)pcVar9 >> 8);
          if (bVar22 == (char)bVar3 < '\0') break;
          *pcVar9 = *pcVar9 + bVar4;
          bVar4 = bVar4 | (byte)*param_2;
          puVar10 = (uint *)CONCAT31(uVar12,bVar4);
          *pbVar21 = *pbVar21 << 1 | (char)*pbVar21 < '\0';
          uVar2 = *puVar10;
          *(byte *)puVar10 = (byte)*puVar10 + bVar4;
          unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar2,bVar4) - *puVar10);
          *puVar10 = *puVar10 << 1 | (uint)((int)*puVar10 < 0);
          while( true ) {
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2 + (byte)param_1;
            cVar15 = (char)puVar10 + 'o' + CARRY1((byte)uVar2,(byte)param_1);
            pcVar9 = (char *)CONCAT31((int3)((uint)puVar10 >> 8),cVar15);
            param_1 = (byte *)0x20a0000;
            if ((POPCOUNT(cVar15) & 1U) != 0) break;
            *pcVar9 = *pcVar9 + cVar15;
            bVar3 = bRamfe140212;
            param_1 = (byte *)0x0;
            uVar12 = (undefined3)((uint)(pcVar9 + -0x732b0000) >> 8);
            bVar4 = in(0);
            puVar10 = (uint *)CONCAT31(uVar12,bVar4);
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2;
            if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0') {
              *(byte *)puVar10 = (byte)*puVar10 + bVar4;
              bVar4 = bVar4 | (byte)*param_2;
              puVar10 = (uint *)CONCAT31(uVar12,bVar4);
              if ((POPCOUNT(bVar4) & 1U) == 0) {
                *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                pcVar9 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar3 | (byte)*puVar10) << 8);
                *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                goto code_r0x00403d33;
              }
              *(byte *)puVar10 = (byte)*puVar10 + bVar4;
              puVar10 = (uint *)CONCAT31(uVar12,bVar4 | (byte)*param_2);
            }
          }
          *(byte *)param_2 = (byte)*param_2;
          bVar22 = SCARRY1((char)param_2,*pbVar21);
          bVar3 = (char)param_2 + *pbVar21;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar3);
        }
        if (bVar22 == (char)bVar3 < '\0') {
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          pbVar7 = (byte *)((uint)pcVar9 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar9 = *pcVar9 + bVar4;
        pbVar7 = (byte *)CONCAT31(uVar12,(bVar4 | (byte)*param_2) + 0x7d);
        param_1 = param_1 + -1;
        *(byte *)param_2 = (byte)*param_2 + (char)param_1;
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar19;
        param_2 = (uint *)CONCAT31(uVar17,cVar15 + *(char *)((int)pbVar21 * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar10;
  do {
    bVar3 = (byte)puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + bVar3;
    pbVar21 = pbVar21 + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar10 = (byte)*puVar10 + bVar3;
    bVar3 = bVar3 | (byte)*param_2;
    puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar3);
    *(byte *)puVar10 = (byte)*puVar10 | bVar3;
    bVar3 = (byte)*puVar10;
    unaff_EBP = (char *)0x2700001;
    while ((POPCOUNT(bVar3) & 1U) == 0) {
      do {
        *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
        bVar3 = (byte)puVar10 | (byte)*param_2;
        puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar3);
        if ((POPCOUNT(bVar3) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
        uVar1 = CONCAT21((short)((uint)pcVar9 >> 0x10),(byte)((uint)pcVar9 >> 8) | bRamfe140212);
        while( true ) {
          pcVar9 = (char *)((uint)uVar1 << 8);
          bVar6 = (byte)puVar10;
          *(byte *)puVar10 = (byte)*puVar10 & bVar6;
          bVar4 = *pbVar16;
          bVar13 = (byte)uVar1;
          bVar5 = *pbVar16;
          *pbVar16 = *pbVar16 + bVar13;
          bVar3 = *pbVar16;
          if (!CARRY1(bVar4,bVar13)) break;
          *(byte *)puVar10 = (byte)*puVar10 + bVar6;
          pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar16 >> 8) | bRam026fffe2,
                                              (char)pbVar16));
          *(byte *)puVar10 = (byte)*puVar10 + bVar6;
          bVar6 = bVar6 | (byte)*param_2;
          puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar6);
          bVar22 = (POPCOUNT(bVar6) & 1U) == 0;
          while( true ) {
            cVar15 = (char)((uint)pbVar16 >> 8);
            uVar18 = (undefined2)((uint)pbVar16 >> 0x10);
            if (!bVar22) {
              *(byte *)param_2 = (byte)*param_2;
              pbVar16 = (byte *)CONCAT22(uVar18,CONCAT11(cVar15 + pbVar16[-0x1f],(char)pbVar16));
              goto code_r0x00403d52;
            }
            *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
            uVar14 = (undefined2)((uint)pcVar9 >> 0x10);
            bVar4 = (byte)((uint)pcVar9 >> 8) | (byte)*puVar10;
            uVar1 = CONCAT21(uVar14,bVar4);
            *puVar10 = *puVar10 & (uint)puVar10;
            *pbVar16 = *pbVar16 + bVar4;
            uVar12 = (undefined3)((uint)puVar10 >> 8);
            bVar3 = (char)puVar10 - bVar4;
            pcVar9 = (char *)CONCAT31(uVar12,bVar3);
            *pcVar9 = *pcVar9 + bVar3;
            bVar3 = bVar3 | (byte)*param_2;
            puVar10 = (uint *)CONCAT31(uVar12,bVar3);
            if ((POPCOUNT(bVar3) & 1U) != 0) break;
            *(byte *)puVar10 = (byte)*puVar10 + bVar3;
            pcVar9 = (char *)((uint)CONCAT21(uVar14,bVar4 | (byte)*puVar10) << 8);
            *puVar10 = *puVar10 - (int)puVar10;
            *(byte *)param_2 = (byte)*param_2;
            pbVar16 = (byte *)CONCAT22(uVar18,CONCAT11(cVar15 + pbVar16[-0x1d],(char)pbVar16));
            do {
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              uVar18 = (undefined2)((uint)param_2 >> 0x10);
              cVar15 = (char)param_2;
              bVar3 = (byte)((uint)param_2 >> 8) | pbVar16[-0x17];
              param_2 = (uint *)CONCAT22(uVar18,CONCAT11(bVar3,cVar15));
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar16 >> 8) | bRam026fffeb,
                                                  (char)pbVar16));
              do {
                *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
                uVar12 = (undefined3)((uint)puVar10 >> 8);
                bVar5 = (byte)puVar10 | (byte)*param_2;
                pcVar11 = (char *)CONCAT31(uVar12,bVar5);
                bVar4 = pbVar16[-0x16];
                *pcVar11 = *pcVar11 + bVar5;
                pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                           CONCAT11((char)((uint)pbVar16 >> 8) + bVar4 |
                                                    bRam026fffec,(char)pbVar16));
                *pcVar11 = *pcVar11 + bVar5;
                pbVar7 = (byte *)CONCAT31(uVar12,bVar5 | (byte)*param_2);
                while( true ) {
                  *pbVar7 = *pbVar7 + (byte)pbVar7;
                  uVar12 = (undefined3)((uint)pbVar7 >> 8);
                  bVar4 = (byte)pbVar7 | (byte)*param_2;
                  puVar10 = (uint *)CONCAT31(uVar12,bVar4);
                  if ((POPCOUNT(bVar4) & 1U) != 0) break;
                  *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                  bVar5 = pbVar21[-0x14];
                  *(byte *)puVar10 = (byte)*puVar10 + bVar4;
                  bVar4 = bVar4 | (byte)*param_2;
                  pcVar11 = (char *)CONCAT31(uVar12,bVar4);
                  bVar6 = pbVar16[-0x15];
                  *pcVar11 = *pcVar11 + bVar4;
                  pcVar9 = (char *)((uint)CONCAT21((short)((uint)pcVar9 >> 0x10),
                                                   (byte)((uint)pcVar9 >> 8) | bVar5 |
                                                   pbVar21[-0x13]) << 8);
                  *pcVar11 = *pcVar11 + bVar4;
                  pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                             CONCAT11((char)((uint)pbVar16 >> 8) + bVar6 |
                                                      bRam026fffef,(char)pbVar16));
                  *pcVar11 = *pcVar11 + bVar4;
                  pbVar7 = (byte *)CONCAT31(uVar12,bVar4 | (byte)*param_2);
                  do {
                    do {
                      bVar5 = (byte)pbVar7;
                      *pbVar7 = *pbVar7 + bVar5;
                      cVar20 = (char)pbVar16;
                      pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar16 >> 8) | *pbVar7,
                                                          cVar20));
                      *pbVar7 = bVar5;
                      *pbVar7 = *pbVar7 + bVar5;
                      cVar19 = (char)((uint)pcVar9 >> 8) + *pbVar7;
                      pcVar9 = (char *)((uint)CONCAT21((short)((uint)pcVar9 >> 0x10),cVar19) << 8);
                      uVar12 = (undefined3)((uint)pbVar7 >> 8);
                      bVar5 = bVar5 & *pbVar7;
                      pbVar7 = (byte *)CONCAT31(uVar12,bVar5);
                      bVar4 = *pbVar16;
                      *pbVar16 = *pbVar16 + cVar19;
                    } while (SCARRY1(bVar4,cVar19) == (char)*pbVar16 < '\0');
                    *pbVar7 = *pbVar7 + bVar5;
                    bVar5 = bVar5 | (byte)*param_2;
                    pbVar7 = (byte *)CONCAT31(uVar12,bVar5);
                    if ((POPCOUNT(bVar5) & 1U) == 0) {
                      *pbVar7 = *pbVar7 + bVar5;
                      *pbVar7 = *pbVar7 + bVar5;
                      cVar15 = cVar15 - bVar3;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar15);
                      *pbVar7 = *pbVar7 + bVar5;
                      bRam0312382b = bRam0312382b | *pbVar16;
                      while( true ) {
                        bVar4 = (byte)pbVar7;
                        *pbVar7 = *pbVar7 + bVar4;
                        bRam0312382b = bRam0312382b | (pbVar21 + 0x21b0000)[(int)pbVar7];
                        uVar12 = (undefined3)((uint)pbVar7 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar16 = *pbVar16 + bRam0312382b;
                        pbVar7 = (byte *)CONCAT31(uVar12,bVar4 | *unaff_ESI);
                      }
                      *pbVar7 = *pbVar7 + bVar4;
                      bVar4 = bVar4 | *unaff_ESI;
                      pcVar9 = (char *)CONCAT31(uVar12,bVar4);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar16);
                      *pcVar9 = *pcVar9 + bVar4;
                      uVar14 = CONCAT11(bVar3 | bRam6f0a002b,cVar15);
                      pcVar11 = (char *)CONCAT22(uVar18,uVar14);
                      *pcVar9 = *pcVar9 + bVar4;
                      *pcVar11 = *pcVar11 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar14);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar20 + *pcVar9);
                  } while (SCARRY1(cVar20,*pcVar9) != (char)(cVar20 + *pcVar9) < '\0');
                }
                uVar2 = *param_2;
                *(byte *)param_2 = (byte)*param_2;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0');
              *(byte *)param_2 = (byte)*param_2;
              *pcVar9 = *pcVar9 - (char)pbVar16;
              *(byte *)puVar10 = (byte)*puVar10 + bVar4;
              bVar4 = bVar4 | (byte)*param_2;
              puVar10 = (uint *)CONCAT31(uVar12,bVar4);
              bVar22 = (POPCOUNT(bVar4) & 1U) == 0;
            } while (bVar22);
          }
        }
      } while (SCARRY1(bVar5,bVar13));
    }
    *pbVar16 = *pbVar16 + (char)((uint)pcVar9 >> 8);
    *pbVar21 = *pbVar21 - (char)pbVar16;
  } while( true );
}


