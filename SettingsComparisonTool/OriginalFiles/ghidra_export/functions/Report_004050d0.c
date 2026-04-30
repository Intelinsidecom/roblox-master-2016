/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004050d0
 * Raw Name    : Report
 * Demangled   : Report
 * Prototype   : void Report(byte * presenterFactory, byte * statusTextProvider)
 * Local Vars  : uStack_28, uStack_26, uStack_27, uVar1, uStack_24, bVar3, uVar2, in_EAX, cVar4, piVar6, uVar5, pbVar8, pbVar7, pcVar10, iVar9, puVar12, puVar11, uVar14, presenterFactory, uVar13, pcVar16, statusTextProvider, bVar15, bVar18, iVar17, bVar20, uVar19, iVar22, pbVar21, puVar23, unaff_EBX, cVar25, cVar24, pcVar26, unaff_EBP, pbVar27, unaff_ESI, unaff_EDI, pbVar28, in_DS, in_ES, in_AF, bVar29
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

void __fastcall Report(byte *presenterFactory,byte *statusTextProvider)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  char cVar4;
  uint *in_EAX;
  uint uVar5;
  int *piVar6;
  undefined3 uVar13;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar11;
  undefined3 uVar14;
  uint *puVar12;
  byte bVar15;
  byte bVar18;
  char *pcVar16;
  undefined2 uVar19;
  int iVar17;
  byte bVar20;
  byte *pbVar21;
  int iVar22;
  char cVar24;
  byte *unaff_EBX;
  char cVar25;
  uint *puVar23;
  char *unaff_EBP;
  char *pcVar26;
  int unaff_ESI;
  byte *pbVar27;
  byte *pbVar28;
  int *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar29;
  byte in_AF;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined2 uStack_24;
  
                    /* .NET CLR Managed Code */
  pbVar27 = (byte *)(unaff_ESI + *(int *)(statusTextProvider + -10));
  uVar5 = (uint)in_EAX | *in_EAX;
  uVar19 = SUB42(statusTextProvider,0);
  *pbVar27 = *pbVar27 + (char)uVar5;
  piVar6 = (int *)(uVar5 + 0xc1872);
  if (SCARRY4(uVar5,0xc1872)) {
    cVar4 = (char)piVar6;
    *(char *)piVar6 = *(char *)piVar6 + cVar4;
    *statusTextProvider = *statusTextProvider + cVar4;
    *(char *)piVar6 = *(char *)piVar6 + cVar4;
    *unaff_EBX = *unaff_EBX + (char)presenterFactory;
    *(char *)piVar6 = *(char *)piVar6 + cVar4;
    *(char *)((int)piVar6 * 2) = *(char *)((int)piVar6 * 2) + (char)statusTextProvider;
    pbVar7 = pbVar27;
    goto code_r0x00405117;
  }
  do {
    bVar15 = *pbVar27;
    bVar3 = (byte)piVar6;
    *pbVar27 = *pbVar27 + bVar3;
    if (CARRY1(bVar15,bVar3)) {
      *piVar6 = (int)(*piVar6 + (int)piVar6);
      uVar13 = (undefined3)((uint)presenterFactory >> 8);
      bVar15 = (byte)presenterFactory | bRam396f1609;
      *piVar6 = (int)(*piVar6 + (int)piVar6);
      presenterFactory = (byte *)CONCAT31(uVar13,bVar15 | *(byte *)CONCAT31(uVar13,bVar15));
      uVar13 = (undefined3)((uint)piVar6 >> 8);
      bVar3 = bVar3 | *statusTextProvider;
      pcVar26 = (char *)CONCAT31(uVar13,bVar3);
      if ((POPCOUNT(bVar3) & 1U) != 0) {
        pbVar7 = pbVar27 + 4;
        out(*(undefined4 *)pbVar27,uVar19);
        uVar5 = CONCAT22((short)((uint)piVar6 >> 0x10),(ushort)bVar3);
        *pbVar7 = *pbVar7 + bVar3;
        pcVar26 = (char *)(uVar5 | 8);
        cVar24 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x7a];
        puVar23 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar24,(char)unaff_EBX)
                                  );
        *pcVar26 = *pcVar26 + (char)pcVar26;
        cVar4 = (char)pcVar26 + 'o';
        piVar6 = (int *)CONCAT31((int3)(uVar5 >> 8),cVar4);
        *(char *)piVar6 = (char)*piVar6 + cVar4;
        *presenterFactory = *presenterFactory + 1;
        pbVar27 = pbVar27 + 8;
        out(*(undefined4 *)pbVar7,uVar19);
        pbVar7 = (byte *)((uint)statusTextProvider ^ uRam08122c04);
        iVar9 = CONCAT31((int3)((uint)(*piVar6 * 0x17070600) >> 8),2);
        *(char *)(iVar9 * 2) = *(char *)(iVar9 * 2) - cVar24;
        do {
          bVar15 = (byte)iVar9;
          *pbVar27 = *pbVar27 + bVar15;
          bVar29 = CARRY1(bVar15,(byte)*puVar23);
          uVar13 = (undefined3)((uint)iVar9 >> 8);
          cVar4 = bVar15 + (byte)*puVar23;
          pbVar8 = (byte *)CONCAT31(uVar13,cVar4);
          uVar19 = in_DS;
          uVar2 = uStack_24;
          if (SCARRY1(bVar15,(byte)*puVar23) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar8 = *pbVar8 + cVar4;
          uVar5 = CONCAT31(uVar13,cVar4 + '\'') + 0x1ebd9f3;
          uStack_28 = (undefined1)in_ES;
          uStack_27 = (undefined1)((ushort)in_ES >> 8);
          piVar6 = (int *)(uVar5 ^ 0x73060000);
          presenterFactory = presenterFactory + 1;
          *piVar6 = (int)(*piVar6 + (int)piVar6);
          puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                     CONCAT11((byte)((uint)puVar23 >> 8) | unaff_EBP[0x7e],
                                              (char)puVar23));
          cVar4 = (char)uVar5;
          *(char *)piVar6 = (char)*piVar6 + cVar4;
          uVar5 = CONCAT31((int3)((uint)piVar6 >> 8),cVar4 + '\x02');
          bVar29 = 0xd9f2d2da < uVar5;
          iVar9 = uVar5 + 0x260d2d25;
          pcVar26 = unaff_EBP;
          do {
            uVar13 = (undefined3)((uint)iVar9 >> 8);
            bVar3 = (char)iVar9 + -2 + bVar29;
            pbVar8 = (byte *)CONCAT31(uVar13,bVar3);
            bVar15 = *pbVar8;
            *pbVar8 = *pbVar8 + bVar3;
            bVar20 = (byte)puVar23;
            uStack_24 = in_ES;
            if (CARRY1(bVar15,bVar3)) {
              *pbVar8 = *pbVar8 + bVar3;
              puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                         CONCAT11((byte)((uint)puVar23 >> 8) | pcVar26[0x7f],bVar20)
                                        );
              *pbVar8 = *pbVar8 + bVar3;
              pbVar8 = (byte *)CONCAT31(uVar13,bVar3 + 0x2a);
              *pbVar8 = *pbVar8 + bVar3 + 0x2a;
              *(byte *)puVar23 = (byte)*puVar23 + (char)pbVar7;
              uVar19 = in_DS;
              while( true ) {
                in_DS = uVar19;
                bVar3 = (byte)pbVar8;
                *pbVar7 = *pbVar7 ^ bVar3;
                *pbVar7 = *pbVar7 + (char)puVar23;
                *pbVar8 = *pbVar8 + bVar3;
                *(byte *)puVar23 = (byte)*puVar23 + (char)((uint)pbVar7 >> 8);
                bVar15 = *pbVar8;
                *pbVar8 = *pbVar8 + bVar3;
                uVar5 = *puVar23;
                uVar1 = *puVar23;
                *puVar23 = (uint)(pbVar8 + uVar1 + CARRY1(bVar15,bVar3));
                uVar13 = (undefined3)((uint)pbVar8 >> 8);
                if (CARRY4(uVar5,(uint)pbVar8) ||
                    CARRY4((uint)(pbVar8 + uVar1),(uint)CARRY1(bVar15,bVar3))) break;
                *pbVar27 = *pbVar27 + bVar3;
                pcVar16 = (char *)CONCAT22((short)((uint)presenterFactory >> 0x10),
                                           CONCAT11((char)((uint)presenterFactory >> 8) + *pbVar8,
                                                    (char)presenterFactory));
                *pbVar27 = *pbVar27 + bVar3;
                piVar6 = (int *)CONCAT31(uVar13,bVar3 | (byte)*puVar23);
                pbVar8 = pbVar27;
                while( true ) {
                  pbVar27 = pbVar8 + 4;
                  out(*(undefined4 *)pbVar8,(short)pbVar7);
                  pbVar7 = pbVar7 + 1;
                  *piVar6 = (int)(*piVar6 + (int)piVar6);
                  bVar3 = (byte)((uint)pcVar16 >> 8) | *pbVar7;
                  uVar13 = (undefined3)((uint)piVar6 >> 8);
                  bVar15 = (byte)piVar6 ^ *pbVar7;
                  pcVar10 = (char *)CONCAT31(uVar13,bVar15);
                  cRam282b0000 = cRam282b0000 - bVar3;
                  *pcVar10 = *pcVar10 + bVar15;
                  unaff_EBP = pcVar26 + -*(int *)pbVar7;
                  uStack_28 = (undefined1)in_DS;
                  uStack_27 = (undefined1)((ushort)in_DS >> 8);
                  cVar4 = *(char *)((int)unaff_EDI + 0x17);
                  *pcVar10 = *pcVar10 + bVar15;
                  presenterFactory =
                       (byte *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                        CONCAT11(bVar3 + cVar4 | *pbVar7,(char)pcVar16));
                  *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
                  *(byte *)((int)pcVar10 * 2) = *(byte *)((int)pcVar10 * 2) ^ bVar15;
                  in_AF = 9 < (bVar15 & 0xf) | in_AF;
                  bVar15 = bVar15 + in_AF * -6;
                  pbVar8 = (byte *)CONCAT31(uVar13,bVar15 + (0x9f < bVar15 | in_AF * (bVar15 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
                  *(char *)((int)pbVar8 * 2) =
                       *(char *)((int)pbVar8 * 2) + (char)((uint)pbVar7 >> 8);
                  bVar29 = CARRY1(*presenterFactory,(byte)pbVar7);
                  *presenterFactory = *presenterFactory + (byte)pbVar7;
                  uVar19 = in_DS;
                  uVar2 = in_ES;
GenerateStatusText:
                  in_DS = uVar2;
                  pcVar26 = unaff_EBP;
                  uStack_24 = in_DS;
                  if (!bVar29) break;
                  *pbVar8 = *pbVar8 + (char)pbVar8;
                  iVar9 = CONCAT31((int3)((uint)presenterFactory >> 8),
                                   (byte)presenterFactory | *pbVar7);
                  uVar19 = (undefined2)((uint)puVar23 >> 0x10);
                  cVar25 = (char)((uint)puVar23 >> 8) + *(byte *)((int)puVar23 + 0x7d);
                  *pbVar8 = *pbVar8 + (char)pbVar8;
                  *(char *)unaff_EDI = (char)*unaff_EDI - (char)((uint)presenterFactory >> 8);
                  iVar9 = iVar9 - *(int *)(iVar9 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar19,CONCAT11(cVar25,(char)puVar23)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar27,(short)pbVar7);
                  pbVar7 = (byte *)CONCAT22(uStack_26,CONCAT11(uStack_27,uStack_28));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar8 = pbVar27 + 8;
                  out(*(undefined4 *)(pbVar27 + 4),CONCAT11(uStack_27,uStack_28));
                  pcVar26 = unaff_EBP + 1;
                  cVar24 = (char)iVar9;
                  pcVar16 = (char *)CONCAT22((short)((uint)iVar9 >> 0x10),
                                             CONCAT11((byte)((uint)iVar9 >> 8) |
                                                      *(byte *)((int)unaff_EDI + 0x46),cVar24));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_27,uStack_28);
                  uVar13 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar8,0xf0)) >> 8);
                  piVar6 = (int *)CONCAT31(uVar13,0x5f);
                  unaff_EDI = (int *)((int)unaff_EDI + 1);
                  *piVar6 = (int)(*piVar6 + (int)piVar6);
                  puVar23 = (uint *)CONCAT22(uVar19,CONCAT11(cVar25 + cVar4 | pbVar27[-0x78],
                                                             (char)puVar23));
                  *(char *)piVar6 = (char)*piVar6 + '_';
                  puVar11 = (uint *)CONCAT31(uVar13,0x8c);
                  *(byte **)(pbVar8 + (int)unaff_EDI * 8) =
                       pbVar7 + *(int *)(pbVar8 + (int)unaff_EDI * 8);
                  bVar15 = *pbVar8;
                  *pbVar8 = *pbVar8 + 0x8c;
                  if (bVar15 < 0x74) {
                    *pbVar7 = *pbVar7 + cVar24;
                    *(byte *)puVar23 = (byte)*puVar23 >> 1;
                    *(char *)puVar11 = (char)*puVar11 + -0x74;
                    *puVar11 = (uint)(pcVar26 + *puVar11);
                    *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
                    *pbVar7 = *pbVar7 + cVar24;
                    unaff_EBP[2] = unaff_EBP[2] - cVar24;
                    *pbVar7 = *pbVar7 + cVar24;
                    pbVar27 = (byte *)CONCAT31(uVar13,0x83);
                    puVar11 = puVar23;
                    goto code_r0x00405312;
                  }
                  *puVar11 = (uint)(*puVar11 + (int)puVar11);
                  piVar6 = (int *)(CONCAT31(uVar13,(byte)puVar11[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar11[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar6 = (int *)((int)piVar6 + *(int *)pbVar8);
                }
              }
              *pbVar7 = *pbVar7 + bVar3;
              *(byte *)puVar23 = (byte)*puVar23 - (char)pbVar7;
              *pbVar8 = *pbVar8 + bVar3;
              pbVar8 = (byte *)CONCAT31(uVar13,bVar3 | (byte)*puVar23);
            }
            else {
              cVar4 = (char)presenterFactory;
              *pbVar7 = *pbVar7 + cVar4;
              *(byte **)pbVar8 = pbVar7 + *(int *)pbVar8;
              *pbVar8 = *pbVar8 + bVar3;
              bVar3 = bVar3 + *pbVar8;
              pbVar8 = (byte *)CONCAT31(uVar13,bVar3);
              if (-1 < (char)bVar3) {
                *(byte *)puVar23 = (byte)*puVar23 + bVar20;
                out(*(undefined4 *)pbVar27,(short)pbVar7);
                pbVar7 = pbVar7 + 1;
                *pbVar8 = *pbVar8 + bVar3;
                puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),
                                           bVar20 | (byte)((uint)iVar9 >> 8));
                cVar24 = bVar3 - *presenterFactory;
                pcVar16 = (char *)CONCAT31(uVar13,cVar24);
                *pcVar16 = *pcVar16 + cVar24 + (bVar3 < *presenterFactory);
                *pbVar7 = *pbVar7 + cVar24;
                pcVar16 = (char *)((int)pcVar16 * 2 + 0x79);
                *pcVar16 = *pcVar16 + (char)((uint)pbVar7 >> 8);
                pbVar8 = (byte *)in((short)pbVar7);
                pbVar27 = pbVar27 + 4;
              }
              *pbVar27 = *pbVar27 + cVar4;
              *pbVar8 = *pbVar8 + (char)pbVar8;
              *pbVar8 = *pbVar8 + (char)pbVar8;
              uStack_28 = (undefined1)in_DS;
              uStack_27 = (undefined1)((ushort)in_DS >> 8);
              bVar15 = *pbVar8;
              bVar20 = (byte)((uint)presenterFactory >> 8);
              bVar18 = bVar20 + *pbVar8;
              iVar9 = *(int *)pbVar8;
              *pbVar7 = *pbVar7 + cVar4;
              bVar3 = (char)(pbVar8 + (uint)CARRY1(bVar20,bVar15) + iVar9) - (byte)*puVar23;
              pbVar8 = (byte *)CONCAT31((int3)((uint)(pbVar8 + (uint)CARRY1(bVar20,bVar15) + iVar9)
                                              >> 8),bVar3);
              *(byte *)puVar23 = (byte)*puVar23 ^ bVar3;
              *pcVar26 = *pcVar26 + (char)puVar23;
              *pbVar8 = *pbVar8 + bVar3;
              *pbVar8 = *pbVar8 + bVar3;
              *pbVar8 = *pbVar8 + bVar3;
              presenterFactory =
                   (byte *)CONCAT22((short)((uint)presenterFactory >> 0x10),
                                    CONCAT11(bVar18 + *pbVar8,cVar4));
              pbVar8 = pbVar8 + (uint)CARRY1(bVar18,*pbVar8) + *(int *)pbVar8;
              *pbVar7 = *pbVar7 + cVar4;
              pbVar27 = pbVar27 + *(int *)(pbVar7 + 0x3e);
            }
            *pbVar27 = *pbVar27 + (char)pbVar8;
            cVar4 = (char)pbVar8 + 'r';
            pbVar27 = pbVar27 + -1;
            uVar5 = CONCAT31((int3)((uint)pbVar8 >> 8),cVar4);
            *pbVar27 = *pbVar27 + cVar4;
            bVar29 = 0xfff38f8d < uVar5;
            iVar9 = uVar5 + 0xc7072;
            unaff_EBP = pcVar26;
          } while (SCARRY4(uVar5,0xc7072));
        } while( true );
      }
      *pcVar26 = *pcVar26 + bVar3;
      bVar3 = bVar3 + 0x6f;
      pbVar7 = (byte *)CONCAT31(uVar13,bVar3);
      bVar15 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar3;
      uVar13 = (undefined3)
               ((uint)(pbVar7 + (uint)CARRY1(bVar15,bVar3) +
                                *(int *)(presenterFactory + (int)statusTextProvider)) >> 8);
      cVar4 = (char)(pbVar7 + (uint)CARRY1(bVar15,bVar3) +
                              *(int *)(presenterFactory + (int)statusTextProvider)) + 'E';
      pcVar26 = (char *)CONCAT31(uVar13,cVar4);
      *pcVar26 = *pcVar26 + cVar4;
      cVar4 = cVar4 + *pcVar26;
      pcVar26 = (char *)CONCAT31(uVar13,cVar4);
      *pcVar26 = *pcVar26 + cVar4;
      puVar23 = (uint *)CONCAT31(uVar13,cVar4 + *pcVar26);
      *(char *)puVar23 = (char)*puVar23 + cVar4 + *pcVar26;
      pbVar7 = (byte *)((uint)puVar23 | *puVar23);
      bVar15 = *pbVar7;
      bVar3 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar3;
      piVar6 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar3 + CARRY1(bVar15,bVar3));
      pbVar7 = pbVar27;
code_r0x00405117:
      *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
      unaff_EBX = unaff_EBX + -*(int *)unaff_EBX;
      pbVar27 = pbVar7 + 4;
      out(*(undefined4 *)pbVar7,uVar19);
    }
    *statusTextProvider = *statusTextProvider + (char)presenterFactory;
    bVar29 = unaff_EBX < (byte *)*piVar6;
    unaff_EBX = unaff_EBX + -*piVar6;
    bVar3 = (byte)((uint)presenterFactory >> 8);
    *(char *)((int)unaff_EDI + 0x39) = (*(char *)((int)unaff_EDI + 0x39) - bVar3) - bVar29;
    *piVar6 = (int)(*piVar6 + (int)piVar6);
    bVar15 = *unaff_EBX;
    *(int *)((int)unaff_EDI + 0x39) = *(int *)((int)unaff_EDI + 0x39) - (int)unaff_EBP;
    *piVar6 = (int)(*piVar6 + (int)piVar6);
    presenterFactory =
         (byte *)CONCAT22((short)((uint)presenterFactory >> 0x10),
                          CONCAT11(bVar3 | bVar15 | *unaff_EBX,(char)presenterFactory));
    *(char *)(piVar6 + 10) = (char)piVar6[10] + (char)((uint)statusTextProvider >> 8);
  } while( true );
code_r0x004052ee:
  *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
  bVar15 = (char)piVar6 + 0x28;
  pbVar27 = (byte *)CONCAT31((int3)((uint)piVar6 >> 8),bVar15);
  *pbVar27 = *pbVar27 ^ bVar15;
  *(byte *)puVar23 = (byte)*puVar23 + (char)((uint)pcVar16 >> 8);
  bVar15 = *pbVar7;
  *pbVar7 = *pbVar7 + (byte)pcVar16;
  piVar6 = (int *)(((uint)pbVar27 | 0x1496f09) + *unaff_EDI + (uint)CARRY1(bVar15,(byte)pcVar16));
  pbVar28 = pbVar8 + 4;
  out(*(undefined4 *)pbVar8,(short)pbVar7);
  pbVar21 = pbVar7 + -1;
  *piVar6 = *piVar6 + (int)piVar6;
  pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | (byte)*puVar23);
  cVar4 = (char)piVar6 + '\x13';
  pbVar27 = (byte *)CONCAT31((int3)((uint)piVar6 >> 8),cVar4);
  puVar11 = puVar23;
  pbVar8 = pbVar28;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar7 = *pbVar7 - (char)((uint)pbVar21 >> 8);
    *pbVar27 = *pbVar27 + cVar4;
code_r0x00405396:
    bVar15 = *pbVar27;
    bVar3 = (byte)pbVar27;
    *pbVar27 = *pbVar27 + bVar3;
    *(byte **)pbVar28 = pbVar27 + (uint)CARRY1(bVar15,bVar3) + *(int *)pbVar28;
    out(*(undefined4 *)pbVar28,(short)pbVar7);
    *(byte **)pbVar27 = pbVar27 + *(int *)pbVar27;
    *(byte **)pbVar27 = pbVar27 + *(int *)pbVar27;
    pcVar26 = (char *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                               CONCAT11((byte)((uint)pbVar27 >> 8) | pbVar28[4],bVar3));
    *(int *)((int)unaff_EDI + -1) = (int)(pcVar26 + *(int *)((int)unaff_EDI + -1));
    out(*(undefined4 *)(pbVar28 + 4),(short)pbVar7);
    *pcVar26 = *pcVar26 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar27 = *pbVar27 + (char)pbVar27;
  piVar6 = (int *)CONCAT31((int3)((uint)pbVar27 >> 8),(char)pbVar27 + 'o');
  puVar23 = (uint *)((int)puVar11 + -1);
  *piVar6 = *piVar6 + (int)piVar6;
  uVar13 = (undefined3)((uint)pbVar7 >> 8);
  piVar6 = (int *)((int)piVar6 + 0x1b7e);
  bVar20 = (byte)pbVar7 | *(byte *)puVar23 | *(byte *)puVar23;
  iRam04115f2c = iRam04115f2c + (int)piVar6;
  out(*(undefined4 *)pbVar8,(short)CONCAT31(uVar13,bVar20));
  *piVar6 = *piVar6 + (int)piVar6;
  bVar20 = bVar20 | (byte)piVar6;
  iVar22 = CONCAT31(uVar13,bVar20);
  pbVar27 = (byte *)((int)piVar6 - *piVar6);
  cVar4 = (char)pbVar27;
  *pcVar16 = *pcVar16 + cVar4;
  cVar24 = (char)pcVar16 - bVar20;
  *pbVar27 = *pbVar27 + cVar4;
  uVar19 = (undefined2)((uint)pcVar16 >> 0x10);
  bVar3 = (byte)((uint)pcVar16 >> 8) | *pbVar27;
  pcVar26 = pcVar26 + -1;
  *(byte **)pbVar27 = pbVar27 + *(int *)pbVar27;
  bVar15 = *(byte *)(CONCAT22(uVar19,CONCAT11(bVar3,cVar24)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar27;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar26;
  *pbVar27 = *pbVar27 + cVar4;
  bVar15 = bVar3 | bVar15 | *(byte *)puVar23;
  iVar17 = CONCAT22(uVar19,CONCAT11(bVar15,cVar24));
  pbVar21 = (byte *)((uint)(pbVar8 + 4) ^ *(uint *)(iVar22 + -0x43));
  iVar9 = *(int *)pbVar27;
  *(byte **)pbVar27 = pbVar27 + *(int *)pbVar27;
  if (SCARRY4(iVar9,(int)pbVar27)) {
    *pbVar27 = *pbVar27 + cVar4;
  }
  pbVar7 = pbVar27 + 0x5674;
  unaff_EDI = (int *)((int)unaff_EDI +
                     (-(uint)((byte *)0xffffa98b < pbVar27) - *(int *)(pbVar21 + -0x7f)));
  bVar3 = (byte)pbVar7;
  *pbVar7 = *pbVar7 + bVar3;
  uVar14 = (undefined3)((uint)pbVar7 >> 8);
  bVar18 = bVar3 + 0x2d;
  piVar6 = (int *)CONCAT31(uVar14,bVar18);
  *(uint *)(pbVar21 + (int)unaff_EDI * 8) =
       *(int *)(pbVar21 + (int)unaff_EDI * 8) + iVar22 + (uint)(0xd2 < bVar3);
  bVar3 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar18;
  if (!CARRY1(bVar3,bVar18)) {
    do {
      pbVar7 = (byte *)(iVar22 + 1);
      bVar3 = (byte)piVar6;
      *(byte *)piVar6 = (char)*piVar6 + bVar3;
      bVar20 = (byte)((uint)piVar6 >> 8);
      bVar18 = (byte)puVar23 | bVar20;
      puVar11 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar18);
      out(*(undefined4 *)pbVar21,(short)pbVar7);
      *(byte *)piVar6 = (char)*piVar6 + bVar3;
      uVar19 = (undefined2)((uint)iVar17 >> 0x10);
      cVar4 = (char)iVar17;
      pbVar27 = (byte *)CONCAT22(uVar19,CONCAT11((byte)((uint)iVar17 >> 8) | *pbVar7,cVar4));
      bVar15 = *pbVar27;
      *pbVar27 = *pbVar27 + bVar3;
      *(byte *)piVar6 = (char)*piVar6 + bVar3 + CARRY1(bVar15,bVar3);
      *pbVar7 = *pbVar7 + bVar3;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar20;
      *(int *)((int)piVar6 * 2) = *(int *)((int)piVar6 * 2) + CONCAT22(uVar19,CONCAT11(0x1c,cVar4));
      *(byte *)piVar6 = (char)*piVar6 + bVar3;
      cVar24 = (char)pbVar7;
      *(byte *)puVar11 = (byte)*puVar11 + cVar24;
      *(byte *)((int)piVar6 * 2) = *(byte *)((int)piVar6 * 2) ^ bVar3;
      *(byte *)piVar6 = (char)*piVar6 + bVar3;
      pbVar27 = pbVar21 + 8;
      out(*(undefined4 *)(pbVar21 + 4),(short)pbVar7);
      piVar6 = (int *)0xa0a0000;
      *pbVar7 = *pbVar7;
      bVar3 = cVar4 - cVar24;
      iVar17 = CONCAT22(uVar19,CONCAT11(*(byte *)(unaff_EDI + 0x14) | 0x1c | bRam0ca87216,bVar3));
      *pbVar7 = *pbVar7;
      bVar15 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar3;
      if (!CARRY1(bVar15,bVar3)) {
        piVar6 = (int *)0x1e7b7000;
        bVar15 = (byte)((uint)puVar23 >> 8) | *(byte *)(iVar22 + 3);
        puVar11 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),CONCAT11(bVar15,bVar18));
        if (bVar15 != 0) {
          pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),cVar24 + pbVar27[(int)unaff_EDI * 8]);
          piVar6 = (int *)0x6d7d7000;
          iVar17 = iVar17 + 1;
        }
      }
      *piVar6 = (int)(*piVar6 + (int)piVar6);
      iVar22 = CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 | pbVar27[(int)unaff_EDI * 8]);
      *(char *)piVar6 = (char)*piVar6;
      piVar6 = (int *)CONCAT31((int3)((uint)piVar6 >> 8),0xf9);
      *unaff_EDI = (int)((int)piVar6 + *unaff_EDI + 1);
      pbVar21 = pbVar21 + 0xc;
      out(*(undefined4 *)pbVar27,(short)iVar22);
      puVar23 = puVar11;
    } while( true );
  }
  *piVar6 = (int)(*piVar6 + (int)piVar6);
  bVar18 = bVar18 | *(byte *)((int)piVar6 + 0x4000081);
  piVar6 = (int *)CONCAT31(uVar14,bVar18);
  if ('\0' < (char)bVar18) {
    *(byte *)piVar6 = (char)*piVar6 + bVar18;
    puVar12 = (uint *)CONCAT31(uVar14,bVar18 + 0x28);
    *puVar12 = *puVar12 ^ (uint)puVar12;
    *(byte *)puVar23 = *(byte *)puVar23 + bVar15;
    cVar4 = (bVar18 + 0x28) - bVar15;
    pcVar26 = (char *)CONCAT31(uVar14,cVar4);
    *pcVar26 = *pcVar26 + cVar4;
    pbVar7 = (byte *)CONCAT31(uVar13,bVar20 | *(byte *)puVar23);
    pcVar16 = (char *)CONCAT22((short)((uint)puVar23 >> 0x10),
                               CONCAT11((char)((uint)puVar23 >> 8) + *(byte *)((int)puVar11 + 0x7d),
                                        (char)puVar23));
    *pcVar26 = *pcVar26 + cVar4;
    pbVar27 = (byte *)CONCAT31(uVar14,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar14,cVar4 + 0x39U));
    *pcVar16 = *pcVar16 + bVar15;
    pbVar28 = pbVar21 + 4;
    out(*(undefined4 *)pbVar21,(short)pbVar7);
    goto code_r0x00405396;
  }
  pbVar8 = pbVar21 + 4;
  out(*(undefined4 *)pbVar21,(short)iVar22);
  pcVar16 = (char *)(iVar17 + -1);
  *piVar6 = (int)(*piVar6 + (int)piVar6);
  pbVar7 = (byte *)CONCAT31(uVar13,bVar20 | *(byte *)puVar23);
  goto code_r0x004052ee;
}


