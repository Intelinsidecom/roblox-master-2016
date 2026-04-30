/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004050a1
 * Raw Name    : Report
 * Demangled   : Report
 * Prototype   : void Report(byte * createPresenterFactoryFunc, byte * statusTextProvider)
 * Local Vars  : uStack_28, uStack_26, uStack_27, uVar1, uStack_24, uVar3, uVar2, bVar5, cVar4, in_EAX, cVar6, uVar8, puVar7, pbVar10, createPresenterFactoryFunc, piVar9, iVar12, statusTextProvider, pbVar11, puVar14, pcVar13, uVar16, puVar15, bVar18, uVar17, iVar20, pcVar19, uVar22, bVar21, pbVar24, bVar23, unaff_EBX, iVar25, unaff_EBP, cVar26, unaff_ESI, pcVar27, pbVar29, pbVar28, in_ES, unaff_EDI, bVar30, in_DS, in_AF
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x004050d0) */
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

void __fastcall Report(byte *createPresenterFactoryFunc,byte *statusTextProvider)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint *in_EAX;
  uint *puVar7;
  undefined3 uVar16;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  uint *puVar14;
  undefined3 uVar17;
  uint *puVar15;
  byte bVar18;
  byte bVar21;
  char *pcVar19;
  undefined2 uVar22;
  int iVar20;
  byte bVar23;
  byte *pbVar24;
  int iVar25;
  char cVar26;
  uint *unaff_EBX;
  char *unaff_EBP;
  char *pcVar27;
  int unaff_ESI;
  byte *pbVar28;
  byte *pbVar29;
  int *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_DS;
  bool bVar30;
  byte in_AF;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined2 uStack_24;
  
                    /* .NET CLR Managed Code */
  pbVar28 = (byte *)(unaff_ESI + *(int *)(statusTextProvider + -0x40));
  puVar7 = (uint *)((uint)in_EAX | *in_EAX);
  cVar6 = (char)((uint)statusTextProvider >> 8);
  while( true ) {
    *pbVar28 = *pbVar28 + (char)puVar7;
    uVar16 = (undefined3)((uint)puVar7 >> 8);
    cVar4 = (char)puVar7 + (char)*unaff_EBX;
    pcVar27 = (char *)CONCAT31(uVar16,cVar4);
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)((int)unaff_EBX + 0x7b),(char)unaff_EBX));
    *pcVar27 = *pcVar27 + cVar4;
    in_AF = 9 < (cVar4 + 0x6fU & 0xf) | in_AF;
    uVar8 = CONCAT31(uVar16,cVar4 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
    bVar5 = (byte)uVar8;
    piVar9 = (int *)CONCAT22((short)(uVar8 >> 0x10),
                             CONCAT11((char)((uint)puVar7 >> 8) + in_AF,bVar5));
    *piVar9 = *piVar9 + (int)piVar9;
    uVar16 = (undefined3)((uint)piVar9 >> 8);
    bVar5 = bVar5 | *(byte *)(piVar9 + 0x354a);
    bVar5 = bVar5 - *(char *)CONCAT31(uVar16,bVar5);
    pbVar10 = (byte *)CONCAT31(uVar16,bVar5);
    bVar18 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar5;
    pbVar28 = pbVar28 + (-(uint)CARRY1(bVar18,bVar5) - *(int *)pbVar10);
    puVar7 = (uint *)(pbVar10 + 0xfc00);
    *statusTextProvider = *statusTextProvider + cVar6;
    uVar8 = *puVar7;
    bVar18 = (byte)puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + bVar18;
    uVar2 = (uint)CARRY1((byte)uVar8,bVar18);
    uVar8 = *unaff_EBX;
    uVar1 = *unaff_EBX;
    *unaff_EBX = (uint)((byte *)(uVar1 + (int)puVar7) + uVar2);
    if (!CARRY4(uVar8,(uint)puVar7) && !CARRY4(uVar1 + (int)puVar7,uVar2)) break;
    *(byte *)puVar7 = (byte)*puVar7 + bVar18;
  }
  uVar8 = (uint)puVar7 | *puVar7;
  uVar22 = SUB42(statusTextProvider,0);
  *pbVar28 = *pbVar28 + (char)uVar8;
  piVar9 = (int *)(uVar8 + 0xc1872);
  if (SCARRY4(uVar8,0xc1872)) {
    cVar4 = (char)piVar9;
    *(char *)piVar9 = *(char *)piVar9 + cVar4;
    *statusTextProvider = *statusTextProvider + cVar4;
    *(char *)piVar9 = *(char *)piVar9 + cVar4;
    *(char *)unaff_EBX = (char)*unaff_EBX + (char)createPresenterFactoryFunc;
    *(char *)piVar9 = *(char *)piVar9 + cVar4;
    *(char *)((int)piVar9 * 2) = *(char *)((int)piVar9 * 2) + (char)statusTextProvider;
    pbVar10 = pbVar28;
    goto code_r0x00405117;
  }
  do {
    bVar18 = *pbVar28;
    bVar5 = (byte)piVar9;
    *pbVar28 = *pbVar28 + bVar5;
    if (CARRY1(bVar18,bVar5)) {
      *piVar9 = (int)(*piVar9 + (int)piVar9);
      uVar16 = (undefined3)((uint)createPresenterFactoryFunc >> 8);
      bVar18 = (byte)createPresenterFactoryFunc | bRam396f1609;
      *piVar9 = (int)(*piVar9 + (int)piVar9);
      createPresenterFactoryFunc =
           (byte *)CONCAT31(uVar16,bVar18 | *(byte *)CONCAT31(uVar16,bVar18));
      uVar16 = (undefined3)((uint)piVar9 >> 8);
      bVar5 = bVar5 | *statusTextProvider;
      pcVar27 = (char *)CONCAT31(uVar16,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        pbVar10 = pbVar28 + 4;
        out(*(undefined4 *)pbVar28,uVar22);
        uVar8 = CONCAT22((short)((uint)piVar9 >> 0x10),(ushort)bVar5);
        *pbVar10 = *pbVar10 + bVar5;
        pcVar27 = (char *)(uVar8 | 8);
        cVar4 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)unaff_EBX + 0x7a);
        puVar7 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar4,(char)unaff_EBX));
        *pcVar27 = *pcVar27 + (char)pcVar27;
        cVar6 = (char)pcVar27 + 'o';
        piVar9 = (int *)CONCAT31((int3)(uVar8 >> 8),cVar6);
        *(char *)piVar9 = (char)*piVar9 + cVar6;
        *createPresenterFactoryFunc = *createPresenterFactoryFunc + 1;
        pbVar28 = pbVar28 + 8;
        out(*(undefined4 *)pbVar10,uVar22);
        pbVar10 = (byte *)((uint)statusTextProvider ^ uRam08122c04);
        iVar12 = CONCAT31((int3)((uint)(*piVar9 * 0x17070600) >> 8),2);
        *(char *)(iVar12 * 2) = *(char *)(iVar12 * 2) - cVar4;
        do {
          bVar18 = (byte)iVar12;
          *pbVar28 = *pbVar28 + bVar18;
          bVar30 = CARRY1(bVar18,(byte)*puVar7);
          uVar16 = (undefined3)((uint)iVar12 >> 8);
          cVar6 = bVar18 + (byte)*puVar7;
          pbVar11 = (byte *)CONCAT31(uVar16,cVar6);
          uVar22 = in_DS;
          uVar3 = uStack_24;
          if (SCARRY1(bVar18,(byte)*puVar7) == cVar6 < '\0') goto GenerateStatusText;
          *pbVar11 = *pbVar11 + cVar6;
          uVar8 = CONCAT31(uVar16,cVar6 + '\'') + 0x1ebd9f3;
          uStack_28 = (undefined1)in_ES;
          uStack_27 = (undefined1)((ushort)in_ES >> 8);
          piVar9 = (int *)(uVar8 ^ 0x73060000);
          createPresenterFactoryFunc = createPresenterFactoryFunc + 1;
          *piVar9 = (int)(*piVar9 + (int)piVar9);
          puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                    CONCAT11((byte)((uint)puVar7 >> 8) | unaff_EBP[0x7e],
                                             (char)puVar7));
          cVar6 = (char)uVar8;
          *(char *)piVar9 = (char)*piVar9 + cVar6;
          uVar8 = CONCAT31((int3)((uint)piVar9 >> 8),cVar6 + '\x02');
          bVar30 = 0xd9f2d2da < uVar8;
          iVar12 = uVar8 + 0x260d2d25;
          pcVar27 = unaff_EBP;
          do {
            uVar16 = (undefined3)((uint)iVar12 >> 8);
            bVar5 = (char)iVar12 + -2 + bVar30;
            pbVar11 = (byte *)CONCAT31(uVar16,bVar5);
            bVar18 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar5;
            bVar23 = (byte)puVar7;
            uStack_24 = in_ES;
            if (CARRY1(bVar18,bVar5)) {
              *pbVar11 = *pbVar11 + bVar5;
              puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                        CONCAT11((byte)((uint)puVar7 >> 8) | pcVar27[0x7f],bVar23));
              *pbVar11 = *pbVar11 + bVar5;
              pbVar11 = (byte *)CONCAT31(uVar16,bVar5 + 0x2a);
              *pbVar11 = *pbVar11 + bVar5 + 0x2a;
              *(byte *)puVar7 = (byte)*puVar7 + (char)pbVar10;
              uVar22 = in_DS;
              while( true ) {
                in_DS = uVar22;
                bVar5 = (byte)pbVar11;
                *pbVar10 = *pbVar10 ^ bVar5;
                *pbVar10 = *pbVar10 + (char)puVar7;
                *pbVar11 = *pbVar11 + bVar5;
                *(byte *)puVar7 = (byte)*puVar7 + (char)((uint)pbVar10 >> 8);
                bVar18 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar5;
                uVar8 = *puVar7;
                uVar1 = *puVar7;
                *puVar7 = (uint)(pbVar11 + uVar1 + CARRY1(bVar18,bVar5));
                uVar16 = (undefined3)((uint)pbVar11 >> 8);
                if (CARRY4(uVar8,(uint)pbVar11) ||
                    CARRY4((uint)(pbVar11 + uVar1),(uint)CARRY1(bVar18,bVar5))) break;
                *pbVar28 = *pbVar28 + bVar5;
                pcVar19 = (char *)CONCAT22((short)((uint)createPresenterFactoryFunc >> 0x10),
                                           CONCAT11((char)((uint)createPresenterFactoryFunc >> 8) +
                                                    *pbVar11,(char)createPresenterFactoryFunc));
                *pbVar28 = *pbVar28 + bVar5;
                piVar9 = (int *)CONCAT31(uVar16,bVar5 | (byte)*puVar7);
                pbVar11 = pbVar28;
                while( true ) {
                  pbVar28 = pbVar11 + 4;
                  out(*(undefined4 *)pbVar11,(short)pbVar10);
                  pbVar10 = pbVar10 + 1;
                  *piVar9 = (int)(*piVar9 + (int)piVar9);
                  bVar5 = (byte)((uint)pcVar19 >> 8) | *pbVar10;
                  uVar16 = (undefined3)((uint)piVar9 >> 8);
                  bVar18 = (byte)piVar9 ^ *pbVar10;
                  pcVar13 = (char *)CONCAT31(uVar16,bVar18);
                  cRam282b0000 = cRam282b0000 - bVar5;
                  *pcVar13 = *pcVar13 + bVar18;
                  unaff_EBP = pcVar27 + -*(int *)pbVar10;
                  uStack_28 = (undefined1)in_DS;
                  uStack_27 = (undefined1)((ushort)in_DS >> 8);
                  cVar6 = *(char *)((int)unaff_EDI + 0x17);
                  *pcVar13 = *pcVar13 + bVar18;
                  createPresenterFactoryFunc =
                       (byte *)CONCAT22((short)((uint)pcVar19 >> 0x10),
                                        CONCAT11(bVar5 + cVar6 | *pbVar10,(char)pcVar19));
                  *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
                  *(byte *)((int)pcVar13 * 2) = *(byte *)((int)pcVar13 * 2) ^ bVar18;
                  in_AF = 9 < (bVar18 & 0xf) | in_AF;
                  bVar18 = bVar18 + in_AF * -6;
                  pbVar11 = (byte *)CONCAT31(uVar16,bVar18 + (0x9f < bVar18 | in_AF * (bVar18 < 6))
                                                             * -0x60);
                  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
                  *(char *)((int)pbVar11 * 2) =
                       *(char *)((int)pbVar11 * 2) + (char)((uint)pbVar10 >> 8);
                  bVar30 = CARRY1(*createPresenterFactoryFunc,(byte)pbVar10);
                  *createPresenterFactoryFunc = *createPresenterFactoryFunc + (byte)pbVar10;
                  uVar22 = in_DS;
                  uVar3 = in_ES;
GenerateStatusText:
                  in_DS = uVar3;
                  pcVar27 = unaff_EBP;
                  uStack_24 = in_DS;
                  if (!bVar30) break;
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  iVar12 = CONCAT31((int3)((uint)createPresenterFactoryFunc >> 8),
                                    (byte)createPresenterFactoryFunc | *pbVar10);
                  uVar22 = (undefined2)((uint)puVar7 >> 0x10);
                  cVar26 = (char)((uint)puVar7 >> 8) + *(byte *)((int)puVar7 + 0x7d);
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  *(char *)unaff_EDI =
                       (char)*unaff_EDI - (char)((uint)createPresenterFactoryFunc >> 8);
                  iVar12 = iVar12 - *(int *)(iVar12 + 0xb0a0000);
                  cVar6 = *(char *)(CONCAT22(uVar22,CONCAT11(cVar26,(char)puVar7)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar28,(short)pbVar10);
                  pbVar10 = (byte *)CONCAT22(uStack_26,CONCAT11(uStack_27,uStack_28));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar11 = pbVar28 + 8;
                  out(*(undefined4 *)(pbVar28 + 4),CONCAT11(uStack_27,uStack_28));
                  pcVar27 = unaff_EBP + 1;
                  cVar4 = (char)iVar12;
                  pcVar19 = (char *)CONCAT22((short)((uint)iVar12 >> 0x10),
                                             CONCAT11((byte)((uint)iVar12 >> 8) |
                                                      *(byte *)((int)unaff_EDI + 0x46),cVar4));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  in_ES = CONCAT11(uStack_27,uStack_28);
                  uVar16 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar11,0xf0)) >> 8);
                  piVar9 = (int *)CONCAT31(uVar16,0x5f);
                  unaff_EDI = (int *)((int)unaff_EDI + 1);
                  *piVar9 = (int)(*piVar9 + (int)piVar9);
                  puVar7 = (uint *)CONCAT22(uVar22,CONCAT11(cVar26 + cVar6 | pbVar28[-0x78],
                                                            (char)puVar7));
                  *(char *)piVar9 = (char)*piVar9 + '_';
                  puVar14 = (uint *)CONCAT31(uVar16,0x8c);
                  *(byte **)(pbVar11 + (int)unaff_EDI * 8) =
                       pbVar10 + *(int *)(pbVar11 + (int)unaff_EDI * 8);
                  bVar18 = *pbVar11;
                  *pbVar11 = *pbVar11 + 0x8c;
                  if (bVar18 < 0x74) {
                    *pbVar10 = *pbVar10 + cVar4;
                    *(byte *)puVar7 = (byte)*puVar7 >> 1;
                    *(char *)puVar14 = (char)*puVar14 + -0x74;
                    *puVar14 = (uint)(pcVar27 + *puVar14);
                    *puVar14 = *puVar14 << 1 | (uint)((int)*puVar14 < 0);
                    *pbVar10 = *pbVar10 + cVar4;
                    unaff_EBP[2] = unaff_EBP[2] - cVar4;
                    *pbVar10 = *pbVar10 + cVar4;
                    pbVar28 = (byte *)CONCAT31(uVar16,0x83);
                    puVar14 = puVar7;
                    goto code_r0x00405312;
                  }
                  *puVar14 = (uint)(*puVar14 + (int)puVar14);
                  piVar9 = (int *)(CONCAT31(uVar16,(byte)puVar14[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar14[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar9 = (int *)((int)piVar9 + *(int *)pbVar11);
                }
              }
              *pbVar10 = *pbVar10 + bVar5;
              *(byte *)puVar7 = (byte)*puVar7 - (char)pbVar10;
              *pbVar11 = *pbVar11 + bVar5;
              pbVar11 = (byte *)CONCAT31(uVar16,bVar5 | (byte)*puVar7);
            }
            else {
              cVar6 = (char)createPresenterFactoryFunc;
              *pbVar10 = *pbVar10 + cVar6;
              *(byte **)pbVar11 = pbVar10 + *(int *)pbVar11;
              *pbVar11 = *pbVar11 + bVar5;
              bVar5 = bVar5 + *pbVar11;
              pbVar11 = (byte *)CONCAT31(uVar16,bVar5);
              if (-1 < (char)bVar5) {
                *(byte *)puVar7 = (byte)*puVar7 + bVar23;
                out(*(undefined4 *)pbVar28,(short)pbVar10);
                pbVar10 = pbVar10 + 1;
                *pbVar11 = *pbVar11 + bVar5;
                puVar7 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),
                                          bVar23 | (byte)((uint)iVar12 >> 8));
                cVar4 = bVar5 - *createPresenterFactoryFunc;
                pcVar19 = (char *)CONCAT31(uVar16,cVar4);
                *pcVar19 = *pcVar19 + cVar4 + (bVar5 < *createPresenterFactoryFunc);
                *pbVar10 = *pbVar10 + cVar4;
                pcVar19 = (char *)((int)pcVar19 * 2 + 0x79);
                *pcVar19 = *pcVar19 + (char)((uint)pbVar10 >> 8);
                pbVar11 = (byte *)in((short)pbVar10);
                pbVar28 = pbVar28 + 4;
              }
              *pbVar28 = *pbVar28 + cVar6;
              *pbVar11 = *pbVar11 + (char)pbVar11;
              *pbVar11 = *pbVar11 + (char)pbVar11;
              uStack_28 = (undefined1)in_DS;
              uStack_27 = (undefined1)((ushort)in_DS >> 8);
              bVar18 = *pbVar11;
              bVar23 = (byte)((uint)createPresenterFactoryFunc >> 8);
              bVar21 = bVar23 + *pbVar11;
              iVar12 = *(int *)pbVar11;
              *pbVar10 = *pbVar10 + cVar6;
              bVar5 = (char)(pbVar11 + (uint)CARRY1(bVar23,bVar18) + iVar12) - (byte)*puVar7;
              pbVar11 = (byte *)CONCAT31((int3)((uint)(pbVar11 +
                                                      (uint)CARRY1(bVar23,bVar18) + iVar12) >> 8),
                                         bVar5);
              *(byte *)puVar7 = (byte)*puVar7 ^ bVar5;
              *pcVar27 = *pcVar27 + (char)puVar7;
              *pbVar11 = *pbVar11 + bVar5;
              *pbVar11 = *pbVar11 + bVar5;
              *pbVar11 = *pbVar11 + bVar5;
              createPresenterFactoryFunc =
                   (byte *)CONCAT22((short)((uint)createPresenterFactoryFunc >> 0x10),
                                    CONCAT11(bVar21 + *pbVar11,cVar6));
              pbVar11 = pbVar11 + (uint)CARRY1(bVar21,*pbVar11) + *(int *)pbVar11;
              *pbVar10 = *pbVar10 + cVar6;
              pbVar28 = pbVar28 + *(int *)(pbVar10 + 0x3e);
            }
            *pbVar28 = *pbVar28 + (char)pbVar11;
            cVar6 = (char)pbVar11 + 'r';
            pbVar28 = pbVar28 + -1;
            uVar8 = CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
            *pbVar28 = *pbVar28 + cVar6;
            bVar30 = 0xfff38f8d < uVar8;
            iVar12 = uVar8 + 0xc7072;
            unaff_EBP = pcVar27;
          } while (SCARRY4(uVar8,0xc7072));
        } while( true );
      }
      *pcVar27 = *pcVar27 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar10 = (byte *)CONCAT31(uVar16,bVar5);
      bVar18 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar5;
      uVar16 = (undefined3)
               ((uint)(pbVar10 +
                      (uint)CARRY1(bVar18,bVar5) +
                      *(int *)(createPresenterFactoryFunc + (int)statusTextProvider)) >> 8);
      cVar4 = (char)(pbVar10 +
                    (uint)CARRY1(bVar18,bVar5) +
                    *(int *)(createPresenterFactoryFunc + (int)statusTextProvider)) + 'E';
      pcVar27 = (char *)CONCAT31(uVar16,cVar4);
      *pcVar27 = *pcVar27 + cVar4;
      cVar4 = cVar4 + *pcVar27;
      pcVar27 = (char *)CONCAT31(uVar16,cVar4);
      *pcVar27 = *pcVar27 + cVar4;
      puVar7 = (uint *)CONCAT31(uVar16,cVar4 + *pcVar27);
      *(char *)puVar7 = (char)*puVar7 + cVar4 + *pcVar27;
      pbVar10 = (byte *)((uint)puVar7 | *puVar7);
      bVar18 = *pbVar10;
      bVar5 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar5;
      piVar9 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar5 + CARRY1(bVar18,bVar5));
      pbVar10 = pbVar28;
code_r0x00405117:
      *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
      unaff_EBX = (uint *)((int)unaff_EBX - *unaff_EBX);
      pbVar28 = pbVar10 + 4;
      out(*(undefined4 *)pbVar10,uVar22);
    }
    *statusTextProvider = *statusTextProvider + (char)createPresenterFactoryFunc;
    bVar30 = unaff_EBX < (uint *)*piVar9;
    unaff_EBX = (uint *)((int)unaff_EBX - *piVar9);
    bVar18 = (byte)((uint)createPresenterFactoryFunc >> 8);
    *(char *)((int)unaff_EDI + 0x39) = (*(char *)((int)unaff_EDI + 0x39) - bVar18) - bVar30;
    *piVar9 = (int)(*piVar9 + (int)piVar9);
    uVar8 = *unaff_EBX;
    *(int *)((int)unaff_EDI + 0x39) = *(int *)((int)unaff_EDI + 0x39) - (int)unaff_EBP;
    *piVar9 = (int)(*piVar9 + (int)piVar9);
    createPresenterFactoryFunc =
         (byte *)CONCAT22((short)((uint)createPresenterFactoryFunc >> 0x10),
                          CONCAT11(bVar18 | (byte)uVar8 | (byte)*unaff_EBX,
                                   (char)createPresenterFactoryFunc));
    *(char *)(piVar9 + 10) = (char)piVar9[10] + cVar6;
  } while( true );
code_r0x004052ee:
  *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
  bVar18 = (char)piVar9 + 0x28;
  pbVar28 = (byte *)CONCAT31((int3)((uint)piVar9 >> 8),bVar18);
  *pbVar28 = *pbVar28 ^ bVar18;
  *(byte *)puVar7 = (byte)*puVar7 + (char)((uint)pcVar19 >> 8);
  bVar18 = *pbVar10;
  *pbVar10 = *pbVar10 + (byte)pcVar19;
  piVar9 = (int *)(((uint)pbVar28 | 0x1496f09) + *unaff_EDI + (uint)CARRY1(bVar18,(byte)pcVar19));
  pbVar29 = pbVar11 + 4;
  out(*(undefined4 *)pbVar11,(short)pbVar10);
  pbVar24 = pbVar10 + -1;
  *piVar9 = *piVar9 + (int)piVar9;
  pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | (byte)*puVar7);
  cVar6 = (char)piVar9 + '\x13';
  pbVar28 = (byte *)CONCAT31((int3)((uint)piVar9 >> 8),cVar6);
  puVar14 = puVar7;
  pbVar11 = pbVar29;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    *pbVar10 = *pbVar10 - (char)((uint)pbVar24 >> 8);
    *pbVar28 = *pbVar28 + cVar6;
code_r0x00405396:
    bVar18 = *pbVar28;
    bVar5 = (byte)pbVar28;
    *pbVar28 = *pbVar28 + bVar5;
    *(byte **)pbVar29 = pbVar28 + (uint)CARRY1(bVar18,bVar5) + *(int *)pbVar29;
    out(*(undefined4 *)pbVar29,(short)pbVar10);
    *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
    *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
    pcVar27 = (char *)CONCAT22((short)((uint)pbVar28 >> 0x10),
                               CONCAT11((byte)((uint)pbVar28 >> 8) | pbVar29[4],bVar5));
    *(int *)((int)unaff_EDI + -1) = (int)(pcVar27 + *(int *)((int)unaff_EDI + -1));
    out(*(undefined4 *)(pbVar29 + 4),(short)pbVar10);
    *pcVar27 = *pcVar27 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar28 = *pbVar28 + (char)pbVar28;
  piVar9 = (int *)CONCAT31((int3)((uint)pbVar28 >> 8),(char)pbVar28 + 'o');
  puVar7 = (uint *)((int)puVar14 + -1);
  *piVar9 = *piVar9 + (int)piVar9;
  uVar16 = (undefined3)((uint)pbVar10 >> 8);
  piVar9 = (int *)((int)piVar9 + 0x1b7e);
  bVar23 = (byte)pbVar10 | *(byte *)puVar7 | *(byte *)puVar7;
  iRam04115f2c = iRam04115f2c + (int)piVar9;
  out(*(undefined4 *)pbVar11,(short)CONCAT31(uVar16,bVar23));
  *piVar9 = *piVar9 + (int)piVar9;
  bVar23 = bVar23 | (byte)piVar9;
  iVar25 = CONCAT31(uVar16,bVar23);
  pbVar28 = (byte *)((int)piVar9 - *piVar9);
  cVar6 = (char)pbVar28;
  *pcVar19 = *pcVar19 + cVar6;
  cVar4 = (char)pcVar19 - bVar23;
  *pbVar28 = *pbVar28 + cVar6;
  uVar22 = (undefined2)((uint)pcVar19 >> 0x10);
  bVar5 = (byte)((uint)pcVar19 >> 8) | *pbVar28;
  pcVar27 = pcVar27 + -1;
  *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
  bVar18 = *(byte *)(CONCAT22(uVar22,CONCAT11(bVar5,cVar4)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar28;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar27;
  *pbVar28 = *pbVar28 + cVar6;
  bVar18 = bVar5 | bVar18 | *(byte *)puVar7;
  iVar20 = CONCAT22(uVar22,CONCAT11(bVar18,cVar4));
  pbVar24 = (byte *)((uint)(pbVar11 + 4) ^ *(uint *)(iVar25 + -0x43));
  iVar12 = *(int *)pbVar28;
  *(byte **)pbVar28 = pbVar28 + *(int *)pbVar28;
  if (SCARRY4(iVar12,(int)pbVar28)) {
    *pbVar28 = *pbVar28 + cVar6;
  }
  pbVar10 = pbVar28 + 0x5674;
  unaff_EDI = (int *)((int)unaff_EDI +
                     (-(uint)((byte *)0xffffa98b < pbVar28) - *(int *)(pbVar24 + -0x7f)));
  bVar5 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar5;
  uVar17 = (undefined3)((uint)pbVar10 >> 8);
  bVar21 = bVar5 + 0x2d;
  piVar9 = (int *)CONCAT31(uVar17,bVar21);
  *(uint *)(pbVar24 + (int)unaff_EDI * 8) =
       *(int *)(pbVar24 + (int)unaff_EDI * 8) + iVar25 + (uint)(0xd2 < bVar5);
  bVar5 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar21;
  if (!CARRY1(bVar5,bVar21)) {
    do {
      pbVar10 = (byte *)(iVar25 + 1);
      bVar5 = (byte)piVar9;
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      bVar23 = (byte)((uint)piVar9 >> 8);
      bVar21 = (byte)puVar7 | bVar23;
      puVar14 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),bVar21);
      out(*(undefined4 *)pbVar24,(short)pbVar10);
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      uVar22 = (undefined2)((uint)iVar20 >> 0x10);
      cVar6 = (char)iVar20;
      pbVar28 = (byte *)CONCAT22(uVar22,CONCAT11((byte)((uint)iVar20 >> 8) | *pbVar10,cVar6));
      bVar18 = *pbVar28;
      *pbVar28 = *pbVar28 + bVar5;
      *(byte *)piVar9 = (char)*piVar9 + bVar5 + CARRY1(bVar18,bVar5);
      *pbVar10 = *pbVar10 + bVar5;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar23;
      *(int *)((int)piVar9 * 2) = *(int *)((int)piVar9 * 2) + CONCAT22(uVar22,CONCAT11(0x1c,cVar6));
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      cVar4 = (char)pbVar10;
      *(byte *)puVar14 = (byte)*puVar14 + cVar4;
      *(byte *)((int)piVar9 * 2) = *(byte *)((int)piVar9 * 2) ^ bVar5;
      *(byte *)piVar9 = (char)*piVar9 + bVar5;
      pbVar28 = pbVar24 + 8;
      out(*(undefined4 *)(pbVar24 + 4),(short)pbVar10);
      piVar9 = (int *)0xa0a0000;
      *pbVar10 = *pbVar10;
      bVar5 = cVar6 - cVar4;
      iVar20 = CONCAT22(uVar22,CONCAT11(*(byte *)(unaff_EDI + 0x14) | 0x1c | bRam0ca87216,bVar5));
      *pbVar10 = *pbVar10;
      bVar18 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar5;
      if (!CARRY1(bVar18,bVar5)) {
        piVar9 = (int *)0x1e7b7000;
        bVar18 = (byte)((uint)puVar7 >> 8) | *(byte *)(iVar25 + 3);
        puVar14 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),CONCAT11(bVar18,bVar21));
        if (bVar18 != 0) {
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar4 + pbVar28[(int)unaff_EDI * 8])
          ;
          piVar9 = (int *)0x6d7d7000;
          iVar20 = iVar20 + 1;
        }
      }
      *piVar9 = (int)(*piVar9 + (int)piVar9);
      iVar25 = CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | pbVar28[(int)unaff_EDI * 8]);
      *(char *)piVar9 = (char)*piVar9;
      piVar9 = (int *)CONCAT31((int3)((uint)piVar9 >> 8),0xf9);
      *unaff_EDI = (int)((int)piVar9 + *unaff_EDI + 1);
      pbVar24 = pbVar24 + 0xc;
      out(*(undefined4 *)pbVar28,(short)iVar25);
      puVar7 = puVar14;
    } while( true );
  }
  *piVar9 = (int)(*piVar9 + (int)piVar9);
  bVar21 = bVar21 | *(byte *)((int)piVar9 + 0x4000081);
  piVar9 = (int *)CONCAT31(uVar17,bVar21);
  if ('\0' < (char)bVar21) {
    *(byte *)piVar9 = (char)*piVar9 + bVar21;
    puVar15 = (uint *)CONCAT31(uVar17,bVar21 + 0x28);
    *puVar15 = *puVar15 ^ (uint)puVar15;
    *(byte *)puVar7 = *(byte *)puVar7 + bVar18;
    cVar6 = (bVar21 + 0x28) - bVar18;
    pcVar27 = (char *)CONCAT31(uVar17,cVar6);
    *pcVar27 = *pcVar27 + cVar6;
    pbVar10 = (byte *)CONCAT31(uVar16,bVar23 | *(byte *)puVar7);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar7 >> 0x10),
                               CONCAT11((char)((uint)puVar7 >> 8) + *(byte *)((int)puVar14 + 0x7d),
                                        (char)puVar7));
    *pcVar27 = *pcVar27 + cVar6;
    pbVar28 = (byte *)CONCAT31(uVar17,cVar6 + 0x39U ^ *(byte *)CONCAT31(uVar17,cVar6 + 0x39U));
    *pcVar19 = *pcVar19 + bVar18;
    pbVar29 = pbVar24 + 4;
    out(*(undefined4 *)pbVar24,(short)pbVar10);
    goto code_r0x00405396;
  }
  pbVar11 = pbVar24 + 4;
  out(*(undefined4 *)pbVar24,(short)iVar25);
  pcVar19 = (char *)(iVar20 + -1);
  *piVar9 = (int)(*piVar9 + (int)piVar9);
  pbVar10 = (byte *)CONCAT31(uVar16,bVar23 | *(byte *)puVar7);
  goto code_r0x004052ee;
}


