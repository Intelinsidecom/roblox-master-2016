/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403ca0
 * Raw Name    : System.Collections.IEnumerable.GetEnumerator
 * Demangled   : System.Collections.IEnumerable.GetEnumerator
 * Prototype   : pointer System.Collections.IEnumerable.GetEnumerator(byte * param_1, uint * param_2)
 * Local Vars  : uVar2, uVar1, bVar4, bVar3, bVar6, bVar5, pbVar7, in_EAX, puVar9, pcVar8, uVar11, pcVar10, cVar13, bVar12, cVar15, uVar14, uVar17, pbVar16, cVar19, uVar18, unaff_EBP, unaff_EBX, unaff_EDI, unaff_ESI, bVar20, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

undefined * __fastcall System_Collections_IEnumerable_GetEnumerator(byte *param_1,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *in_EAX;
  undefined3 uVar11;
  char *pcVar8;
  uint *puVar9;
  byte bVar12;
  char cVar13;
  undefined2 uVar14;
  char cVar15;
  undefined3 uVar17;
  undefined2 uVar18;
  byte *pbVar16;
  char cVar19;
  byte *unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  byte *unaff_EDI;
  bool bVar20;
  byte *pbVar7;
  char *pcVar10;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    cVar15 = (char)param_1;
    param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((char)((uint)param_1 >> 8) + *in_EAX,cVar15));
    *(byte *)param_2 = (byte)*param_2 + cVar15;
    uVar11 = (undefined3)((uint)in_EAX >> 8);
    bVar3 = (byte)in_EAX - *in_EAX;
    pbVar7 = (byte *)CONCAT31(uVar11,bVar3);
    unaff_ESI = unaff_ESI + (-(uint)((byte)in_EAX < *in_EAX) - *(int *)pbVar7);
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 * '\x02');
    *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
    cVar15 = (char)unaff_EBX;
    *unaff_EDI = *unaff_EDI + cVar15;
    bVar4 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar3;
    *param_2 = (uint)(pbVar7 + (uint)CARRY1(bVar4,bVar3) + *param_2);
    if ((POPCOUNT(*param_2 & 0xff) & 1U) == 0) break;
    bVar4 = unaff_EBX[-0x23];
    *pbVar7 = *pbVar7 + bVar3;
    bVar6 = *(byte *)(unaff_EBP + -0x22);
    *pbVar7 = *pbVar7 + bVar3;
    in_EAX = (byte *)CONCAT31(uVar11,bVar3 | *unaff_ESI);
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                          bVar6,cVar15)) >> 8),cVar15 - *unaff_ESI);
  }
code_r0x00403cb7:
  *pbVar7 = *pbVar7 + (char)pbVar7;
  param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | pbVar7[(int)param_1]);
  bVar20 = false;
  pbVar7 = (byte *)((uint)pbVar7 & 0xffffff00);
  do {
    unaff_EDI = unaff_EDI + (-(uint)bVar20 - *(int *)unaff_EBX);
    pcVar8 = (char *)CONCAT31((int3)((uint)pbVar7 >> 8),*param_1);
    *pcVar8 = *pcVar8 + *param_1;
    pbVar7 = (byte *)CONCAT31((int3)((uint)(pcVar8 + (unaff_ESI[0x2000001] <
                                                     (byte)((uint)param_1 >> 8)) + 0xda7d) >> 8),
                              ((byte)(pcVar8 + (unaff_ESI[0x2000001] < (byte)((uint)param_1 >> 8)) +
                                               0xda7d) | (byte)*param_2) + 0x7d);
    param_1 = param_1 + -1;
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    while( true ) {
      uVar17 = (undefined3)((uint)param_2 >> 8);
      cVar15 = (char)param_2 + *(char *)((int)unaff_EDI * 2 + 0xa0000e1);
      param_2 = (uint *)CONCAT31(uVar17,cVar15);
      bVar20 = CARRY1((byte)pbVar7,(byte)*param_2);
      uVar11 = (undefined3)((uint)pbVar7 >> 8);
      bVar4 = (byte)pbVar7 + (byte)*param_2;
      pbVar7 = (byte *)CONCAT31(uVar11,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) break;
      *pbVar7 = *pbVar7 + bVar4;
      cVar13 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | unaff_EDI[-0x65],cVar13));
      bVar3 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar4;
      if (CARRY1(bVar3,bVar4)) {
        *pbVar7 = *pbVar7 + bVar4;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                              *(byte *)(unaff_EBP + -0x1d),(char)unaff_EBX));
        *pbVar7 = *pbVar7 + bVar4;
        bVar20 = false;
        bVar4 = bVar4 | (byte)*param_2;
        pcVar8 = (char *)CONCAT31(uVar11,bVar4);
        while( true ) {
          bVar3 = (byte)pcVar8;
          uVar11 = (undefined3)((uint)pcVar8 >> 8);
          if (bVar20 == (char)bVar4 < '\0') break;
          *pcVar8 = *pcVar8 + bVar3;
          bVar3 = bVar3 | (byte)*param_2;
          puVar9 = (uint *)CONCAT31(uVar11,bVar3);
          *unaff_EDI = *unaff_EDI << 1 | (char)*unaff_EDI < '\0';
          uVar2 = *puVar9;
          *(byte *)puVar9 = (byte)*puVar9 + bVar3;
          unaff_EBP = (unaff_EBP - *puVar9) - (uint)CARRY1((byte)uVar2,bVar3);
          *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
          while( true ) {
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2 + (byte)param_1;
            cVar15 = (char)puVar9 + 'o' + CARRY1((byte)uVar2,(byte)param_1);
            pcVar8 = (char *)CONCAT31((int3)((uint)puVar9 >> 8),cVar15);
            param_1 = (byte *)0x20a0000;
            if ((POPCOUNT(cVar15) & 1U) != 0) break;
            *pcVar8 = *pcVar8 + cVar15;
            bVar4 = bRamfe140212;
            param_1 = (byte *)0x0;
            uVar11 = (undefined3)((uint)(pcVar8 + -0x732b0000) >> 8);
            bVar3 = in(0);
            puVar9 = (uint *)CONCAT31(uVar11,bVar3);
            uVar2 = *param_2;
            *(byte *)param_2 = (byte)*param_2;
            if (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0') {
              *(byte *)puVar9 = (byte)*puVar9 + bVar3;
              bVar3 = bVar3 | (byte)*param_2;
              puVar9 = (uint *)CONCAT31(uVar11,bVar3);
              if ((POPCOUNT(bVar3) & 1U) == 0) {
                *(byte *)puVar9 = (byte)*puVar9 + bVar3;
                pcVar8 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar9) << 8);
                *(byte *)puVar9 = (byte)*puVar9 + bVar3;
                goto code_r0x00403d33;
              }
              *(byte *)puVar9 = (byte)*puVar9 + bVar3;
              puVar9 = (uint *)CONCAT31(uVar11,bVar3 | (byte)*param_2);
            }
          }
          *(byte *)param_2 = (byte)*param_2;
          bVar20 = SCARRY1((char)param_2,*unaff_EDI);
          bVar4 = (char)param_2 + *unaff_EDI;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
        }
        if (bVar20 == (char)bVar4 < '\0') {
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          pbVar7 = (byte *)((uint)pcVar8 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar8 = *pcVar8 + bVar3;
        pbVar7 = (byte *)CONCAT31(uVar11,(bVar3 | (byte)*param_2) + 0x7d);
        param_1 = param_1 + -1;
        *(byte *)param_2 = (byte)*param_2 + (char)param_1;
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar13;
        param_2 = (uint *)CONCAT31(uVar17,cVar15 + *(char *)((int)unaff_EDI * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP - *puVar9;
  do {
    bVar4 = (byte)puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + bVar4;
    unaff_EDI = unaff_EDI + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar9 = (byte)*puVar9 + bVar4;
    bVar4 = bVar4 | (byte)*param_2;
    puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),bVar4);
    *(byte *)puVar9 = (byte)*puVar9 | bVar4;
    bVar4 = (byte)*puVar9;
    unaff_EBP = 0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar9 = (byte)*puVar9 + (byte)puVar9;
        bVar4 = (byte)puVar9 | (byte)*param_2;
        puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
        uVar1 = CONCAT21((short)((uint)pcVar8 >> 0x10),(byte)((uint)pcVar8 >> 8) | bRamfe140212);
        while( true ) {
          pcVar8 = (char *)((uint)uVar1 << 8);
          bVar5 = (byte)puVar9;
          *(byte *)puVar9 = (byte)*puVar9 & bVar5;
          bVar3 = *unaff_EBX;
          bVar12 = (byte)uVar1;
          bVar6 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar12;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar3,bVar12)) break;
          *(byte *)puVar9 = (byte)*puVar9 + bVar5;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar9 = (byte)*puVar9 + bVar5;
          bVar5 = bVar5 | (byte)*param_2;
          puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),bVar5);
          bVar20 = (POPCOUNT(bVar5) & 1U) == 0;
          while( true ) {
            cVar15 = (char)((uint)unaff_EBX >> 8);
            uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar20) {
              *(byte *)param_2 = (byte)*param_2;
              unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar15 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
            uVar14 = (undefined2)((uint)pcVar8 >> 0x10);
            bVar3 = (byte)((uint)pcVar8 >> 8) | (byte)*puVar9;
            uVar1 = CONCAT21(uVar14,bVar3);
            *puVar9 = *puVar9 & (uint)puVar9;
            *unaff_EBX = *unaff_EBX + bVar3;
            uVar11 = (undefined3)((uint)puVar9 >> 8);
            bVar4 = (char)puVar9 - bVar3;
            pcVar8 = (char *)CONCAT31(uVar11,bVar4);
            *pcVar8 = *pcVar8 + bVar4;
            bVar4 = bVar4 | (byte)*param_2;
            puVar9 = (uint *)CONCAT31(uVar11,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar9 = (byte)*puVar9 + bVar4;
            pcVar8 = (char *)((uint)CONCAT21(uVar14,bVar3 | (byte)*puVar9) << 8);
            *puVar9 = *puVar9 - (int)puVar9;
            *(byte *)param_2 = (byte)*param_2;
            unaff_EBX = (byte *)CONCAT22(uVar18,CONCAT11(cVar15 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
              uVar18 = (undefined2)((uint)param_2 >> 0x10);
              cVar15 = (char)param_2;
              bVar4 = (byte)((uint)param_2 >> 8) | unaff_EBX[-0x17];
              param_2 = (uint *)CONCAT22(uVar18,CONCAT11(bVar4,cVar15));
              *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar9 = (byte)*puVar9 + (byte)puVar9;
                uVar11 = (undefined3)((uint)puVar9 >> 8);
                bVar6 = (byte)puVar9 | (byte)*param_2;
                pcVar10 = (char *)CONCAT31(uVar11,bVar6);
                bVar3 = unaff_EBX[-0x16];
                *pcVar10 = *pcVar10 + bVar6;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar3 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar10 = *pcVar10 + bVar6;
                pbVar7 = (byte *)CONCAT31(uVar11,bVar6 | (byte)*param_2);
                while( true ) {
                  *pbVar7 = *pbVar7 + (byte)pbVar7;
                  uVar11 = (undefined3)((uint)pbVar7 >> 8);
                  bVar3 = (byte)pbVar7 | (byte)*param_2;
                  puVar9 = (uint *)CONCAT31(uVar11,bVar3);
                  if ((POPCOUNT(bVar3) & 1U) != 0) break;
                  *(byte *)puVar9 = (byte)*puVar9 + bVar3;
                  bVar6 = unaff_EDI[-0x14];
                  *(byte *)puVar9 = (byte)*puVar9 + bVar3;
                  bVar3 = bVar3 | (byte)*param_2;
                  pcVar10 = (char *)CONCAT31(uVar11,bVar3);
                  bVar5 = unaff_EBX[-0x15];
                  *pcVar10 = *pcVar10 + bVar3;
                  pcVar8 = (char *)((uint)CONCAT21((short)((uint)pcVar8 >> 0x10),
                                                   (byte)((uint)pcVar8 >> 8) | bVar6 |
                                                   unaff_EDI[-0x13]) << 8);
                  *pcVar10 = *pcVar10 + bVar3;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar10 = *pcVar10 + bVar3;
                  pbVar7 = (byte *)CONCAT31(uVar11,bVar3 | (byte)*param_2);
                  do {
                    do {
                      bVar6 = (byte)pbVar7;
                      *pbVar7 = *pbVar7 + bVar6;
                      cVar19 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar7,
                                                            cVar19));
                      *pbVar7 = bVar6;
                      *pbVar7 = *pbVar7 + bVar6;
                      cVar13 = (char)((uint)pcVar8 >> 8) + *pbVar7;
                      pcVar8 = (char *)((uint)CONCAT21((short)((uint)pcVar8 >> 0x10),cVar13) << 8);
                      uVar11 = (undefined3)((uint)pbVar7 >> 8);
                      bVar6 = bVar6 & *pbVar7;
                      pbVar7 = (byte *)CONCAT31(uVar11,bVar6);
                      bVar3 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar13;
                    } while (SCARRY1(bVar3,cVar13) == (char)*unaff_EBX < '\0');
                    *pbVar7 = *pbVar7 + bVar6;
                    bVar6 = bVar6 | (byte)*param_2;
                    pbVar7 = (byte *)CONCAT31(uVar11,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *pbVar7 = *pbVar7 + bVar6;
                      *pbVar7 = *pbVar7 + bVar6;
                      cVar15 = cVar15 - bVar4;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar15);
                      *pbVar7 = *pbVar7 + bVar6;
                      bRam0312382b = bRam0312382b | *pbVar16;
                      while( true ) {
                        bVar3 = (byte)pbVar7;
                        *pbVar7 = *pbVar7 + bVar3;
                        bRam0312382b = bRam0312382b | (unaff_EDI + 0x21b0000)[(int)pbVar7];
                        uVar11 = (undefined3)((uint)pbVar7 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar16 = *pbVar16 + bRam0312382b;
                        pbVar7 = (byte *)CONCAT31(uVar11,bVar3 | *unaff_ESI);
                      }
                      *pbVar7 = *pbVar7 + bVar3;
                      bVar3 = bVar3 | *unaff_ESI;
                      pcVar8 = (char *)CONCAT31(uVar11,bVar3);
                      out(*(undefined4 *)unaff_ESI,(short)pbVar16);
                      *pcVar8 = *pcVar8 + bVar3;
                      uVar14 = CONCAT11(bVar4 | bRam6f0a002b,cVar15);
                      pcVar10 = (char *)CONCAT22(uVar18,uVar14);
                      *pcVar8 = *pcVar8 + bVar3;
                      *pcVar10 = *pcVar10 + bRam0312382b;
                      out(*(undefined4 *)(unaff_ESI + 4),uVar14);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar19 + *pcVar8);
                  } while (SCARRY1(cVar19,*pcVar8) != (char)(cVar19 + *pcVar8) < '\0');
                }
                uVar2 = *param_2;
                *(byte *)param_2 = (byte)*param_2;
              } while (SCARRY1((byte)uVar2,'\0') != (char)(byte)*param_2 < '\0');
              *(byte *)param_2 = (byte)*param_2;
              *pcVar8 = *pcVar8 - (char)unaff_EBX;
              *(byte *)puVar9 = (byte)*puVar9 + bVar3;
              bVar3 = bVar3 | (byte)*param_2;
              puVar9 = (uint *)CONCAT31(uVar11,bVar3);
              bVar20 = (POPCOUNT(bVar3) & 1U) == 0;
            } while (bVar20);
          }
        }
      } while (SCARRY1(bVar6,bVar12));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar8 >> 8);
    *unaff_EDI = *unaff_EDI - (char)unaff_EBX;
  } while( true );
}


