/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403ed8
 * Raw Name    : System.IDisposable.Dispose
 * Demangled   : System.IDisposable.Dispose
 * Prototype   : void System.IDisposable.Dispose(undefined4 param_1, uint * param_2, undefined4 param_3, char * param_4)
 * Local Vars  : cVar2, puVar1, bVar4, cVar3, in_EAX, bVar5, puVar7, pbVar6, pcVar9, pcVar8, piVar11, uVar10, uVar13, puVar12, uVar15, bVar14, pcVar17, iVar16, uVar19, uVar18, uVar21, cVar20, cVar22, unaff_EBX, uVar24, cVar23, iVar25, unaff_EBP, unaff_ESI, iVar26, unaff_EDI, puVar27, bVar29, piVar28, unaff_retaddr, bVar30, param_1, param_2, param_3, param_4
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

void __fastcall
System_IDisposable_Dispose(undefined4 param_1,uint *param_2,undefined4 param_3,char *param_4)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte *in_EAX;
  byte *pbVar6;
  undefined3 uVar13;
  uint *puVar7;
  char *pcVar8;
  uint uVar10;
  int *piVar11;
  undefined1 *puVar12;
  byte bVar14;
  undefined1 uVar15;
  undefined3 uVar18;
  int iVar16;
  char *pcVar17;
  undefined2 uVar19;
  char cVar20;
  undefined2 uVar21;
  char cVar22;
  char cVar23;
  int unaff_EBX;
  undefined2 uVar24;
  int unaff_EBP;
  int iVar25;
  int iVar26;
  uint *unaff_ESI;
  uint *puVar27;
  int *unaff_EDI;
  int *piVar28;
  bool bVar29;
  bool bVar30;
  int *unaff_retaddr;
  char *pcVar9;
  
  do {
                    /* .NET CLR Managed Code */
    uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar4 = (byte)unaff_EBX;
    cVar22 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x26);
    iVar16 = CONCAT22(uVar21,CONCAT11(cVar22,bVar4));
    do {
      *in_EAX = *in_EAX + (char)in_EAX;
      unaff_EBP = unaff_EBP + 1;
      pbVar6 = in_EAX + 0x1000000;
      cVar2 = (char)pbVar6;
      *pbVar6 = *pbVar6 + cVar2;
      *param_4 = *param_4 + cVar2;
      *pbVar6 = *pbVar6 + cVar2;
      *param_4 = *param_4 + cVar2;
      *pbVar6 = *pbVar6 + cVar2;
      *(byte *)param_2 = (byte)*param_2 + bVar4;
      *pbVar6 = *pbVar6 + cVar2;
      *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
      *pbVar6 = *pbVar6 + cVar2;
      uVar13 = (undefined3)((uint)pbVar6 >> 8);
      cVar2 = cVar2 - (byte)*param_2;
      in_EAX = (byte *)CONCAT31(uVar13,cVar2);
      bVar29 = (POPCOUNT(cVar2) & 1U) == 0;
      if (bVar29) {
        *in_EAX = *in_EAX + cVar2;
        uVar18 = (undefined3)((uint)param_4 >> 8);
        bVar14 = (byte)param_4 | in_EAX[(int)param_4];
        pcVar8 = (char *)(CONCAT31(uVar18,bVar14) + 0x45);
        *pcVar8 = *pcVar8 - bVar4;
        pcVar8 = (char *)CONCAT31(uVar13,cVar2);
        *pcVar8 = *pcVar8 + cVar2;
        cVar2 = cVar2 + *pcVar8;
        pcVar8 = (char *)CONCAT31(uVar13,cVar2);
        *pcVar8 = *pcVar8 + cVar2;
        cVar2 = cVar2 + *pcVar8;
        puVar7 = (uint *)CONCAT31(uVar13,cVar2);
        *(char *)puVar7 = (char)*puVar7 + cVar2;
        *puVar7 = *puVar7 ^ (uint)puVar7;
        *(char *)puVar7 = (char)*puVar7 + cVar2;
        cVar2 = cVar2 + (char)*puVar7;
        piVar28 = (int *)CONCAT31(uVar13,cVar2);
        *(char *)piVar28 = (char)*piVar28 + cVar2;
        iVar25 = unaff_EBP - *unaff_EDI;
        cVar20 = *(char *)(iVar16 + -0x26);
        *(char *)piVar28 = (char)*piVar28 + cVar2;
        piVar11 = (int *)CONCAT31(uVar18,bVar14 | bRam45591909);
        pcVar8 = (char *)((int)piVar28 + *piVar28);
        *pcVar8 = *pcVar8 + (char)pcVar8;
        cVar2 = (char)pcVar8 + *pcVar8;
        puVar7 = (uint *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar2);
        *(char *)puVar7 = (char)*puVar7 + cVar2;
        pcVar8 = (char *)((uint)puVar7 | *puVar7);
        *pcVar8 = *pcVar8 + (char)pcVar8;
        uVar13 = (undefined3)((uint)pcVar8 >> 8);
        cVar3 = (char)pcVar8 + *pcVar8;
        pcVar9 = (char *)CONCAT31(uVar13,cVar3);
        *pcVar9 = *pcVar9 + cVar3;
        iVar16 = (int)piVar11 - *piVar11;
        cVar2 = *pcVar9;
        *pcVar9 = *pcVar9 + cVar3;
        bVar14 = (byte)((uint)pcVar8 >> 8);
        cVar23 = *pcVar9;
        *pcVar9 = *pcVar9 + cVar3;
        cVar2 = (char)((uint)iVar16 >> 8) + cVar2 + cVar23 + *pcVar9;
        pcVar17 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),CONCAT11(cVar2,(char)iVar16));
        *pcVar9 = *pcVar9 + cVar3;
        puVar7 = (uint *)CONCAT31((int3)(CONCAT22(uVar21,CONCAT11(cVar22 + cVar20,bVar4)) >> 8),
                                  bVar4 | bVar14 | bVar14 | bVar14);
        cVar3 = cVar3 - *pcVar9;
        pcVar9 = (char *)CONCAT31(uVar13,cVar3);
        *pcVar17 = *pcVar17 + cVar3;
        *pcVar9 = *pcVar9 - cVar3;
        *(byte *)param_2 = (byte)*param_2 + cVar3;
        *(byte *)param_2 = (byte)*param_2 + bVar14;
        pcVar8 = (char *)CONCAT22((short)((uint)pcVar8 >> 0x10),
                                  CONCAT11(bVar14 + *(char *)((int)pcVar9 * 2 + 7),cVar3));
        *pcVar8 = *pcVar8 + cVar3;
        *pcVar8 = *pcVar8 + cVar3;
        cVar3 = cVar3 + *pcVar8;
        pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar3);
        iVar26 = iVar25 + 1;
        *pbVar6 = *pbVar6 + cVar2;
        piVar28 = unaff_EDI + 1;
        uVar21 = SUB42(param_2,0);
        iVar16 = in(uVar21);
        *unaff_EDI = iVar16;
        *(char *)piVar28 = (char)*piVar28 + cVar3;
        *pbVar6 = *pbVar6 + cVar3;
        do {
          *pbVar6 = *pbVar6 + (char)pbVar6;
          pbVar6 = (byte *)((uint)pbVar6 & 0xffffff00);
          while( true ) {
            bVar4 = (byte)pbVar6;
            *pbVar6 = *pbVar6 + bVar4;
            *pbVar6 = *pbVar6 + bVar4;
            bVar4 = bVar4 ^ (byte)*param_2;
            pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar4);
            if ((POPCOUNT(bVar4) & 1U) == 0) break;
            *(byte *)piVar28 = (char)*piVar28 + bVar4;
          }
          *pbVar6 = *pbVar6 + bVar4;
          bVar14 = (byte)pcVar17 | *(byte *)((int)(unaff_EDI + 0xa86c001) + (int)pbVar6);
          bVar4 = *pbVar6;
          bVar5 = (byte)((uint)pcVar17 >> 8);
          pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),CONCAT11(bVar5 + *pbVar6,bVar14)
                                    );
          iVar16 = *(int *)pbVar6;
          *(byte *)param_2 = (byte)*param_2 + bVar14;
          cVar2 = (char)(pbVar6 + (uint)CARRY1(bVar5,bVar4) + iVar16);
          cVar22 = cVar2 + (byte)*puVar7;
          pbVar6 = (byte *)CONCAT31((int3)((uint)(pbVar6 + (uint)CARRY1(bVar5,bVar4) + iVar16) >> 8)
                                    ,cVar22);
        } while (SCARRY1(cVar2,(byte)*puVar7) == cVar22 < '\0');
        do {
          while( true ) {
            *pbVar6 = *pbVar6 + (byte)pbVar6;
            uVar13 = (undefined3)((uint)pbVar6 >> 8);
            bVar4 = ((byte)pbVar6 | (byte)*param_2) - (char)puVar7;
            pcVar8 = (char *)CONCAT31(uVar13,bVar4);
            *pcVar8 = *pcVar8 + bVar4;
            puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                      CONCAT11((byte)((uint)puVar7 >> 8) | *(byte *)(iVar25 + -0x26)
                                               ,(char)puVar7));
            *pcVar8 = *pcVar8 + bVar4;
            pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar17 >> 8) | (byte)*param_2,
                                                (char)pcVar17));
            puVar27 = (uint *)((int)unaff_ESI + 1);
            out((byte)*unaff_ESI,(short)param_2);
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000da7d);
            bVar4 = bVar4 | (byte)*param_2;
            pbVar6 = (byte *)CONCAT31(uVar13,bVar4);
            if ((POPCOUNT(bVar4) & 1U) == 0) break;
            piVar28 = (int *)((int)piVar28 + *(int *)(iVar25 + -0x25));
            unaff_ESI = puVar27;
          }
          while( true ) {
            bVar5 = (byte)pbVar6;
            *pbVar6 = *pbVar6 + bVar5;
            bVar4 = *(byte *)((int)puVar7 + (int)pcVar17);
            uVar19 = (undefined2)((uint)pcVar17 >> 0x10);
            cVar22 = (char)pcVar17;
            uVar24 = (undefined2)((uint)puVar7 >> 0x10);
            uVar15 = SUB41(puVar7,0);
            cVar23 = (char)((uint)puVar7 >> 8) + *(byte *)((int)puVar7 + -0x1d);
            puVar7 = (uint *)CONCAT22(uVar24,CONCAT11(cVar23,uVar15));
            *pbVar6 = *pbVar6 + bVar5;
            bVar14 = *(byte *)((int)piVar28 + 0x42);
            *pbVar6 = *pbVar6 + bVar5;
            bVar4 = (byte)((uint)pcVar17 >> 8) | bVar4 | bVar14 | (byte)*param_2;
            pcVar17 = (char *)CONCAT22(uVar19,CONCAT11(bVar4,cVar22));
            unaff_ESI = (uint *)((int)puVar27 + 1);
            out((byte)*puVar27,(short)param_2);
            cVar20 = (char)param_2;
            cVar2 = cVar20 + (char)*piVar28;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar2);
            if (SCARRY1(cVar20,(char)*piVar28) == cVar2 < '\0') break;
            *pbVar6 = *pbVar6 + bVar5;
            bVar5 = bVar5 | (byte)*param_2;
            pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar5);
            if ((POPCOUNT(bVar5) & 1U) == 0) {
              *pbVar6 = *pbVar6 + bVar5;
              pcVar17 = (char *)CONCAT22(uVar19,CONCAT11(bVar4 | *(byte *)((int)puVar7 +
                                                                          (int)pcVar17),cVar22));
              puVar7 = (uint *)CONCAT22(uVar24,CONCAT11(cVar23 + *(byte *)((int)puVar7 + -0x15),
                                                        uVar15));
              *pbVar6 = *pbVar6 + bVar5;
              while( true ) {
                bVar4 = *(byte *)((int)piVar28 + 0x42);
                uVar19 = (undefined2)((uint)pcVar17 >> 0x10);
                uVar15 = SUB41(pcVar17,0);
                bVar14 = (byte)pbVar6;
                *pbVar6 = *pbVar6 + bVar14;
                bVar4 = (byte)((uint)pcVar17 >> 8) | bVar4 | (byte)*param_2;
                pcVar17 = (char *)CONCAT22(uVar19,CONCAT11(bVar4,uVar15));
                puVar27 = (uint *)((int)unaff_ESI + 1);
                out((byte)*unaff_ESI,(short)param_2);
                cVar2 = (char)puVar7;
                cVar22 = cVar2 + *pbVar6;
                puVar7 = (uint *)CONCAT31((int3)((uint)puVar7 >> 8),cVar22);
                if (SCARRY1(cVar2,*pbVar6) == cVar22 < '\0') break;
                *pbVar6 = *pbVar6 + bVar14;
                bVar14 = bVar14 | (byte)*param_2;
                pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bVar14);
                unaff_ESI = puVar27;
                if ((POPCOUNT(bVar14) & 1U) == 0) {
                  *pbVar6 = *pbVar6 + bVar14;
                  pcVar8 = (char *)CONCAT22(uVar19,CONCAT11(bVar4 | *(byte *)((int)puVar7 +
                                                                             (int)pcVar17),uVar15));
                  do {
                    cVar22 = (char)puVar7;
                    puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                              CONCAT11((char)((uint)puVar7 >> 8) +
                                                       *(byte *)((int)puVar7 + -0x12),cVar22));
                    bVar14 = (byte)pbVar6;
                    *pbVar6 = *pbVar6 + bVar14;
                    bVar4 = *(byte *)((int)piVar28 + 0x42);
                    *pbVar6 = *pbVar6 + bVar14;
                    pcVar8 = (char *)CONCAT22((short)((uint)pcVar8 >> 0x10),
                                              CONCAT11((byte)((uint)pcVar8 >> 8) | bVar4 |
                                                       (byte)*param_2,(char)pcVar8));
                    *(byte *)puVar7 = (byte)*puVar7 + (char)param_2;
                    *(byte *)param_2 = (byte)*param_2 ^ bVar14;
                    *pbVar6 = *pbVar6 + cVar22;
                    while( true ) {
                      bVar14 = (byte)pbVar6;
                      *pbVar6 = *pbVar6 + bVar14;
                      *pcVar8 = *pcVar8 + (char)((uint)pbVar6 >> 8);
                      bVar4 = *pbVar6;
                      *pbVar6 = *pbVar6 + bVar14;
                      *piVar28 = (int)((int)puVar7 + (uint)CARRY1(bVar4,bVar14) + *piVar28);
                      *(byte *)((int)puVar7 + -3) = *(byte *)((int)puVar7 + -3) + 1;
                      *pbVar6 = *pbVar6 + bVar14;
                      pcVar8 = (char *)CONCAT31((int3)((uint)pcVar8 >> 8),
                                                (byte)pcVar8 | (byte)*param_2);
                      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar21);
                      cVar2 = (char)puVar7;
                      puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                                CONCAT11((char)((uint)puVar7 >> 8) +
                                                         *(char *)(iVar26 + -2),cVar2));
                      *pbVar6 = *pbVar6 + bVar14;
                      uVar13 = (undefined3)((uint)pbVar6 >> 8);
                      bVar14 = bVar14 | (byte)*puVar27;
                      piVar28 = (int *)((int)piVar28 + *(int *)(iVar26 + -1));
                      *(char *)CONCAT31(uVar13,bVar14) = *(char *)CONCAT31(uVar13,bVar14) + bVar14;
                      bVar14 = bVar14 | (byte)*puVar27;
                      pbVar6 = (byte *)CONCAT31(uVar13,bVar14);
                      cVar22 = (char)param_2 - (byte)*puVar7;
                      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar22);
                      *(byte *)param_2 = (byte)*param_2 ^ bVar14;
                      *(byte *)puVar7 = (byte)*puVar7 + bVar14;
                      *pbVar6 = *pbVar6 + bVar14;
                      bVar4 = *pbVar6;
                      *pcVar8 = *pcVar8 + cVar22;
                      bVar4 = (bVar14 & bVar4) - cVar2;
                      *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
                      bVar4 = bVar4 | (byte)*param_2;
                      pbVar6 = (byte *)CONCAT31(uVar13,bVar4);
                      if ((POPCOUNT(bVar4) & 1U) != 0) break;
                      *pbVar6 = *pbVar6 + bVar4;
                      uVar10 = CONCAT31(uVar13,bVar4 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar4);
                      *(byte *)((int)piVar28 + (int)puVar7) =
                           *(byte *)((int)piVar28 + (int)puVar7) + (char)uVar10;
                      *(byte *)puVar7 = (byte)*puVar7 + 1;
                      pbVar6 = (byte *)(uVar10 | *param_2);
                      bVar29 = (int)pbVar6 < 0;
                      bVar30 = false;
                      while (bVar30 != bVar29) {
                        *pbVar6 = *pbVar6 + (char)pbVar6;
                        uVar13 = (undefined3)((uint)pbVar6 >> 8);
                        bVar4 = (char)pbVar6 + 2;
                        piVar11 = (int *)CONCAT31(uVar13,bVar4);
                        uVar10 = *puVar7;
                        puVar1 = (uint *)((int)param_2 + *puVar27);
                        if (CARRY4((uint)param_2,*puVar27)) {
                          *piVar11 = (int)(*piVar11 + (int)piVar11);
                          bVar4 = bVar4 | (byte)*puVar27;
                          puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                                    CONCAT11((char)((uint)puVar7 >> 8) +
                                                             (byte)puVar7[-0x11],(char)puVar7));
                          *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
                          piVar11 = (int *)CONCAT31(uVar13,bVar4 + 0x7d);
                        }
                        bVar4 = *(byte *)((int)puVar7 + -0x42);
                        *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
                        cVar22 = (char)piVar11 + '}';
                        pbVar6 = (byte *)CONCAT31((int3)((uint)piVar11 >> 8),cVar22);
                        iVar26 = 0x6040000;
                        puVar7 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar7 >> 0x10),
                                                                  CONCAT11((char)((uint)puVar7 >> 8)
                                                                           + bVar4,(char)puVar7)) >>
                                                        8),(char)puVar7 - (byte)*puVar27);
                        pcVar8 = (char *)CONCAT22((short)((uint)pcVar8 >> 0x10),
                                                  CONCAT11(((byte)((uint)pcVar8 >> 8) | (byte)uVar10
                                                           ) + *pbVar6,(char)pcVar8));
                        *pcVar8 = *pcVar8 + cVar22;
                        *(byte *)puVar27 = (byte)*puVar27 + cVar22;
code_r0x00404076:
                        piVar11 = (int *)CONCAT31((int3)((uint)pbVar6 >> 8),(byte)pbVar6 - *pbVar6);
                        puVar27 = (uint *)((int)puVar27 +
                                          (-(uint)((byte)pbVar6 < *pbVar6) - *piVar11));
                        pbVar6 = (byte *)((int)piVar11 + *piVar11);
                        bVar14 = (byte)pbVar6;
                        *pbVar6 = *pbVar6 + bVar14;
                        *(byte *)puVar7 = (byte)*puVar7 + (char)((uint)pbVar6 >> 8);
                        bVar4 = *pbVar6;
                        *pbVar6 = *pbVar6 + bVar14;
                        *puVar1 = (uint)(pbVar6 + (uint)CARRY1(bVar4,bVar14) + *puVar1);
                        bVar29 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
                        while (bVar29) {
                          *pbVar6 = *pbVar6 + (char)pbVar6;
                          uVar21 = SUB42(unaff_retaddr,0);
                          unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
                          pbVar6 = (byte *)((uint)pbVar6 & 0xffffff00);
                          puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                                    CONCAT11((char)((uint)puVar7 >> 8) -
                                                             (byte)*puVar7,(char)puVar7));
code_r0x00404092:
                          puVar12 = (undefined1 *)((uint)pbVar6 & 0xffffff00);
                          *puVar12 = *puVar12;
                          *puVar12 = *puVar12;
                          *(byte *)puVar1 = (byte)*puVar1;
                          cVar2 = (char)(puVar12 + 0xba7d);
                          uVar13 = (undefined3)((uint)(puVar12 + 0xba7d) >> 8);
                          cVar22 = cVar2 + '\x02';
                          pcVar9 = (char *)CONCAT31(uVar13,cVar22);
                          puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                                    CONCAT11((char)((uint)puVar7 >> 8) +
                                                             (byte)puVar7[-0x11],(char)puVar7));
                          *pcVar9 = *pcVar9 + cVar22;
                          pbVar6 = (byte *)CONCAT31(uVar13,cVar2 + 'q');
                          do {
                            bVar4 = *pbVar6;
                            bVar14 = (byte)pbVar6;
                            *pbVar6 = *pbVar6 + bVar14;
                            unaff_retaddr =
                                 (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar21);
                            if (!CARRY1(bVar4,bVar14)) goto code_r0x00404092;
                            *pbVar6 = *pbVar6 + bVar14;
                            puVar7 = (uint *)CONCAT22((short)((uint)puVar7 >> 0x10),
                                                      CONCAT11((byte)((uint)puVar7 >> 8) |
                                                               bRam0603ffbf,(char)puVar7));
                            *pbVar6 = *pbVar6 + bVar14;
                            uVar13 = (undefined3)((uint)pbVar6 >> 8);
                            bVar4 = bVar14 + 2;
                            pbVar6 = (byte *)CONCAT31(uVar13,bVar4);
                            if (SCARRY1(bVar14,'\x02') == (char)bVar4 < '\0') goto code_r0x00404076;
                            *pbVar6 = *pbVar6 + bVar4;
                            bVar5 = bVar14 + 4;
                            pbVar6 = (byte *)CONCAT31(uVar13,bVar5);
                          } while (0xfd < bVar4);
                          *pbVar6 = *pbVar6 | bVar5;
                          bVar29 = (POPCOUNT(*pbVar6) & 1U) == 0;
                          if (bVar29) {
                            *pbVar6 = *pbVar6 + bVar5;
                            bVar14 = bVar14 + 0x2c;
                            *(char *)CONCAT31(uVar13,bVar14) =
                                 *(char *)CONCAT31(uVar13,bVar14) + bVar14;
                            bVar14 = bVar14 | (byte)*puVar1;
                            pbVar6 = (byte *)CONCAT31(uVar13,bVar14);
                            piVar28 = unaff_retaddr;
                            if ((POPCOUNT(bVar14) & 1U) == 0) {
                              *pbVar6 = *pbVar6 + bVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
                              halt_baddata();
                            }
                            goto code_r0x00404092;
                          }
                        }
                        pcVar8 = (char *)((uint)pcVar8 ^ *puVar7);
                        cVar22 = (char)puVar1 + (byte)*puVar27;
                        param_2 = (uint *)CONCAT31((int3)((uint)puVar1 >> 8),cVar22);
                        bVar29 = cVar22 < '\0';
                        bVar30 = SCARRY1((char)puVar1,(byte)*puVar27);
                      }
                    }
                  } while( true );
                }
              }
            }
            else {
              *(byte *)param_2 = (byte)*param_2 + cVar22;
              puVar27 = (uint *)((int)puVar27 + 5);
              out(*unaff_ESI,(short)param_2);
            }
            param_2 = (uint *)((int)param_2 + 1);
          }
          *(byte *)param_2 = (byte)*param_2 + cVar22;
          pcVar17 = (char *)CONCAT22(uVar19,CONCAT11(bVar4 - *(byte *)((int)puVar27 + 3),cVar22));
          pbVar6 = pbVar6 + (bVar4 < *(byte *)((int)puVar27 + 3)) + 0xda7d;
        } while( true );
      }
    } while (bVar29);
    *in_EAX = *in_EAX + cVar2;
    *in_EAX = *in_EAX + cVar2;
    *in_EAX = *in_EAX + cVar2;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar4;
    bVar14 = cVar22 + *(char *)(iVar16 + -10);
    *in_EAX = *in_EAX + cVar2;
    pcVar8 = (char *)CONCAT22((short)((uint)param_4 >> 0x10),
                              CONCAT11((byte)((uint)param_4 >> 8) | (byte)*param_2,(byte)param_4));
    cVar22 = (char)param_2;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) -
                                        *(char *)(CONCAT22(uVar21,CONCAT11(bVar14,bVar4)) + -4),
                                        cVar22));
    *in_EAX = *in_EAX + cVar2;
    unaff_EBX = CONCAT22(uVar21,CONCAT11(bVar14 | (byte)*param_2,bVar4));
    unaff_ESI = (uint *)((int)unaff_ESI - *(int *)in_EAX);
    bVar4 = cVar2 + *in_EAX;
    in_EAX = (byte *)CONCAT31(uVar13,bVar4);
    *in_EAX = *in_EAX + bVar4;
    *in_EAX = *in_EAX & bVar4;
    *pcVar8 = *pcVar8 + cVar22;
  } while( true );
}


