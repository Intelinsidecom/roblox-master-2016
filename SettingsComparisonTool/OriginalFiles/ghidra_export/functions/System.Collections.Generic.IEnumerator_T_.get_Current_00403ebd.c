/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403ebd
 * Raw Name    : System.Collections.Generic.IEnumerator<T>.get_Current
 * Demangled   : System.Collections.Generic.IEnumerator<T>.get_Current
 * Prototype   : byte * System.Collections.Generic.IEnumerator<T>.get_Current(char * param_1, uint * param_2, undefined4 param_3, char * param_4)
 * Local Vars  : bVar2, puVar1, cVar4, cVar3, pbVar5, in_EAX, pcVar7, puVar6, uVar9, pcVar8, puVar11, piVar10, bVar13, uVar12, iVar15, uVar14, uVar17, pcVar16, cVar19, param_1, uVar18, param_2, unaff_EBX, param_3, uVar20, cVar22, param_4, bVar21, uVar24, cVar23, iVar25, unaff_EBP, unaff_ESI, iVar26, unaff_EDI, puVar27, bVar29, piVar28, unaff_retaddr, bVar30
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

byte * __fastcall
System_Collections_Generic_IEnumerator<T>_get_Current
          (char *param_1,uint *param_2,undefined4 param_3,char *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *in_EAX;
  byte *pbVar5;
  undefined3 uVar12;
  uint *puVar6;
  char *pcVar7;
  uint uVar9;
  int *piVar10;
  undefined1 *puVar11;
  byte bVar13;
  undefined1 uVar14;
  undefined3 uVar17;
  int iVar15;
  char *pcVar16;
  undefined2 uVar18;
  char cVar19;
  undefined2 uVar20;
  byte bVar21;
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
  char *pcVar8;
  
  do {
                    /* .NET CLR Managed Code */
    uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar13 = (byte)unaff_EBX;
    bVar21 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -10);
    cVar22 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar22;
    pcVar7 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                              CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
    cVar3 = (char)param_2;
    uVar20 = CONCAT11((char)((uint)param_2 >> 8) -
                      *(char *)(CONCAT22(uVar18,CONCAT11(bVar21,bVar13)) + -4),cVar3);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar20);
    *in_EAX = *in_EAX + cVar22;
    bVar21 = bVar21 | (byte)*param_2;
    unaff_ESI = (uint *)((int)unaff_ESI - *(int *)in_EAX);
    bVar2 = cVar22 + *in_EAX;
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
    *in_EAX = *in_EAX + bVar2;
    *in_EAX = *in_EAX & bVar2;
    *pcVar7 = *pcVar7 + cVar3;
    cVar22 = bVar21 + *(char *)(CONCAT22(uVar18,CONCAT11(bVar21,bVar13)) + -0x26);
    unaff_EBX = CONCAT22(uVar18,CONCAT11(cVar22,bVar13));
    do {
      *in_EAX = *in_EAX + (char)in_EAX;
      unaff_EBP = unaff_EBP + 1;
      pbVar5 = in_EAX + 0x1000000;
      cVar3 = (char)pbVar5;
      *pbVar5 = *pbVar5 + cVar3;
      *param_4 = *param_4 + cVar3;
      *pbVar5 = *pbVar5 + cVar3;
      *param_4 = *param_4 + cVar3;
      *pbVar5 = *pbVar5 + cVar3;
      *(byte *)param_2 = (byte)*param_2 + bVar13;
      *pbVar5 = *pbVar5 + cVar3;
      *(byte **)pbVar5 = pbVar5 + *(int *)pbVar5;
      *pbVar5 = *pbVar5 + cVar3;
      uVar12 = (undefined3)((uint)pbVar5 >> 8);
      cVar3 = cVar3 - (byte)*param_2;
      in_EAX = (byte *)CONCAT31(uVar12,cVar3);
      bVar29 = (POPCOUNT(cVar3) & 1U) == 0;
      if (bVar29) {
        *in_EAX = *in_EAX + cVar3;
        uVar17 = (undefined3)((uint)param_4 >> 8);
        bVar2 = (byte)param_4 | in_EAX[(int)param_4];
        pcVar7 = (char *)(CONCAT31(uVar17,bVar2) + 0x45);
        *pcVar7 = *pcVar7 - bVar13;
        pcVar7 = (char *)CONCAT31(uVar12,cVar3);
        *pcVar7 = *pcVar7 + cVar3;
        cVar3 = cVar3 + *pcVar7;
        pcVar7 = (char *)CONCAT31(uVar12,cVar3);
        *pcVar7 = *pcVar7 + cVar3;
        cVar3 = cVar3 + *pcVar7;
        puVar6 = (uint *)CONCAT31(uVar12,cVar3);
        *(char *)puVar6 = (char)*puVar6 + cVar3;
        *puVar6 = *puVar6 ^ (uint)puVar6;
        *(char *)puVar6 = (char)*puVar6 + cVar3;
        cVar3 = cVar3 + (char)*puVar6;
        piVar28 = (int *)CONCAT31(uVar12,cVar3);
        *(char *)piVar28 = (char)*piVar28 + cVar3;
        iVar25 = unaff_EBP - *unaff_EDI;
        cVar19 = *(char *)(unaff_EBX + -0x26);
        *(char *)piVar28 = (char)*piVar28 + cVar3;
        piVar10 = (int *)CONCAT31(uVar17,bVar2 | bRam45591909);
        pcVar7 = (char *)((int)piVar28 + *piVar28);
        *pcVar7 = *pcVar7 + (char)pcVar7;
        cVar3 = (char)pcVar7 + *pcVar7;
        puVar6 = (uint *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar3);
        *(char *)puVar6 = (char)*puVar6 + cVar3;
        pcVar7 = (char *)((uint)puVar6 | *puVar6);
        *pcVar7 = *pcVar7 + (char)pcVar7;
        uVar12 = (undefined3)((uint)pcVar7 >> 8);
        cVar4 = (char)pcVar7 + *pcVar7;
        pcVar8 = (char *)CONCAT31(uVar12,cVar4);
        *pcVar8 = *pcVar8 + cVar4;
        iVar15 = (int)piVar10 - *piVar10;
        cVar3 = *pcVar8;
        *pcVar8 = *pcVar8 + cVar4;
        bVar2 = (byte)((uint)pcVar7 >> 8);
        cVar23 = *pcVar8;
        *pcVar8 = *pcVar8 + cVar4;
        cVar3 = (char)((uint)iVar15 >> 8) + cVar3 + cVar23 + *pcVar8;
        pcVar16 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),CONCAT11(cVar3,(char)iVar15));
        *pcVar8 = *pcVar8 + cVar4;
        puVar6 = (uint *)CONCAT31((int3)(CONCAT22(uVar18,CONCAT11(cVar22 + cVar19,bVar13)) >> 8),
                                  bVar13 | bVar2 | bVar2 | bVar2);
        cVar4 = cVar4 - *pcVar8;
        pcVar8 = (char *)CONCAT31(uVar12,cVar4);
        *pcVar16 = *pcVar16 + cVar4;
        *pcVar8 = *pcVar8 - cVar4;
        *(byte *)param_2 = (byte)*param_2 + cVar4;
        *(byte *)param_2 = (byte)*param_2 + bVar2;
        pcVar7 = (char *)CONCAT22((short)((uint)pcVar7 >> 0x10),
                                  CONCAT11(bVar2 + *(char *)((int)pcVar8 * 2 + 7),cVar4));
        *pcVar7 = *pcVar7 + cVar4;
        *pcVar7 = *pcVar7 + cVar4;
        cVar4 = cVar4 + *pcVar7;
        pbVar5 = (byte *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar4);
        iVar26 = iVar25 + 1;
        *pbVar5 = *pbVar5 + cVar3;
        piVar28 = unaff_EDI + 1;
        iVar15 = in(uVar20);
        *unaff_EDI = iVar15;
        *(char *)piVar28 = (char)*piVar28 + cVar4;
        *pbVar5 = *pbVar5 + cVar4;
        do {
          *pbVar5 = *pbVar5 + (char)pbVar5;
          pbVar5 = (byte *)((uint)pbVar5 & 0xffffff00);
          while( true ) {
            bVar2 = (byte)pbVar5;
            *pbVar5 = *pbVar5 + bVar2;
            *pbVar5 = *pbVar5 + bVar2;
            bVar2 = bVar2 ^ (byte)*param_2;
            pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar2);
            if ((POPCOUNT(bVar2) & 1U) == 0) break;
            *(byte *)piVar28 = (char)*piVar28 + bVar2;
          }
          *pbVar5 = *pbVar5 + bVar2;
          bVar13 = (byte)pcVar16 | *(byte *)((int)(unaff_EDI + 0xa86c001) + (int)pbVar5);
          bVar2 = *pbVar5;
          bVar21 = (byte)((uint)pcVar16 >> 8);
          pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                     CONCAT11(bVar21 + *pbVar5,bVar13));
          iVar15 = *(int *)pbVar5;
          *(byte *)param_2 = (byte)*param_2 + bVar13;
          cVar3 = (char)(pbVar5 + (uint)CARRY1(bVar21,bVar2) + iVar15);
          cVar22 = cVar3 + (byte)*puVar6;
          pbVar5 = (byte *)CONCAT31((int3)((uint)(pbVar5 + (uint)CARRY1(bVar21,bVar2) + iVar15) >> 8
                                          ),cVar22);
        } while (SCARRY1(cVar3,(byte)*puVar6) == cVar22 < '\0');
        do {
          while( true ) {
            *pbVar5 = *pbVar5 + (byte)pbVar5;
            uVar12 = (undefined3)((uint)pbVar5 >> 8);
            bVar2 = ((byte)pbVar5 | (byte)*param_2) - (char)puVar6;
            pcVar7 = (char *)CONCAT31(uVar12,bVar2);
            *pcVar7 = *pcVar7 + bVar2;
            puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                      CONCAT11((byte)((uint)puVar6 >> 8) | *(byte *)(iVar25 + -0x26)
                                               ,(char)puVar6));
            *pcVar7 = *pcVar7 + bVar2;
            pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar16 >> 8) | (byte)*param_2,
                                                (char)pcVar16));
            puVar27 = (uint *)((int)unaff_ESI + 1);
            out((byte)*unaff_ESI,(short)param_2);
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000da7d);
            bVar2 = bVar2 | (byte)*param_2;
            pbVar5 = (byte *)CONCAT31(uVar12,bVar2);
            if ((POPCOUNT(bVar2) & 1U) == 0) break;
            piVar28 = (int *)((int)piVar28 + *(int *)(iVar25 + -0x25));
            unaff_ESI = puVar27;
          }
          while( true ) {
            bVar21 = (byte)pbVar5;
            *pbVar5 = *pbVar5 + bVar21;
            bVar2 = *(byte *)((int)puVar6 + (int)pcVar16);
            uVar18 = (undefined2)((uint)pcVar16 >> 0x10);
            cVar22 = (char)pcVar16;
            uVar24 = (undefined2)((uint)puVar6 >> 0x10);
            uVar14 = SUB41(puVar6,0);
            cVar23 = (char)((uint)puVar6 >> 8) + *(byte *)((int)puVar6 + -0x1d);
            puVar6 = (uint *)CONCAT22(uVar24,CONCAT11(cVar23,uVar14));
            *pbVar5 = *pbVar5 + bVar21;
            bVar13 = *(byte *)((int)piVar28 + 0x42);
            *pbVar5 = *pbVar5 + bVar21;
            bVar2 = (byte)((uint)pcVar16 >> 8) | bVar2 | bVar13 | (byte)*param_2;
            pcVar16 = (char *)CONCAT22(uVar18,CONCAT11(bVar2,cVar22));
            unaff_ESI = (uint *)((int)puVar27 + 1);
            out((byte)*puVar27,(short)param_2);
            cVar19 = (char)param_2;
            cVar3 = cVar19 + (char)*piVar28;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar3);
            if (SCARRY1(cVar19,(char)*piVar28) == cVar3 < '\0') break;
            *pbVar5 = *pbVar5 + bVar21;
            bVar21 = bVar21 | (byte)*param_2;
            pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar21);
            if ((POPCOUNT(bVar21) & 1U) == 0) {
              *pbVar5 = *pbVar5 + bVar21;
              pcVar16 = (char *)CONCAT22(uVar18,CONCAT11(bVar2 | *(byte *)((int)puVar6 +
                                                                          (int)pcVar16),cVar22));
              puVar6 = (uint *)CONCAT22(uVar24,CONCAT11(cVar23 + *(byte *)((int)puVar6 + -0x15),
                                                        uVar14));
              *pbVar5 = *pbVar5 + bVar21;
              while( true ) {
                bVar2 = *(byte *)((int)piVar28 + 0x42);
                uVar18 = (undefined2)((uint)pcVar16 >> 0x10);
                uVar14 = SUB41(pcVar16,0);
                bVar13 = (byte)pbVar5;
                *pbVar5 = *pbVar5 + bVar13;
                bVar2 = (byte)((uint)pcVar16 >> 8) | bVar2 | (byte)*param_2;
                pcVar16 = (char *)CONCAT22(uVar18,CONCAT11(bVar2,uVar14));
                puVar27 = (uint *)((int)unaff_ESI + 1);
                out((byte)*unaff_ESI,(short)param_2);
                cVar3 = (char)puVar6;
                cVar22 = cVar3 + *pbVar5;
                puVar6 = (uint *)CONCAT31((int3)((uint)puVar6 >> 8),cVar22);
                if (SCARRY1(cVar3,*pbVar5) == cVar22 < '\0') break;
                *pbVar5 = *pbVar5 + bVar13;
                bVar13 = bVar13 | (byte)*param_2;
                pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar13);
                unaff_ESI = puVar27;
                if ((POPCOUNT(bVar13) & 1U) == 0) {
                  *pbVar5 = *pbVar5 + bVar13;
                  pcVar7 = (char *)CONCAT22(uVar18,CONCAT11(bVar2 | *(byte *)((int)puVar6 +
                                                                             (int)pcVar16),uVar14));
                  do {
                    cVar22 = (char)puVar6;
                    puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                              CONCAT11((char)((uint)puVar6 >> 8) +
                                                       *(byte *)((int)puVar6 + -0x12),cVar22));
                    bVar13 = (byte)pbVar5;
                    *pbVar5 = *pbVar5 + bVar13;
                    bVar2 = *(byte *)((int)piVar28 + 0x42);
                    *pbVar5 = *pbVar5 + bVar13;
                    pcVar7 = (char *)CONCAT22((short)((uint)pcVar7 >> 0x10),
                                              CONCAT11((byte)((uint)pcVar7 >> 8) | bVar2 |
                                                       (byte)*param_2,(char)pcVar7));
                    *(byte *)puVar6 = (byte)*puVar6 + (char)param_2;
                    *(byte *)param_2 = (byte)*param_2 ^ bVar13;
                    *pbVar5 = *pbVar5 + cVar22;
                    while( true ) {
                      bVar13 = (byte)pbVar5;
                      *pbVar5 = *pbVar5 + bVar13;
                      *pcVar7 = *pcVar7 + (char)((uint)pbVar5 >> 8);
                      bVar2 = *pbVar5;
                      *pbVar5 = *pbVar5 + bVar13;
                      *piVar28 = (int)((int)puVar6 + (uint)CARRY1(bVar2,bVar13) + *piVar28);
                      *(byte *)((int)puVar6 + -3) = *(byte *)((int)puVar6 + -3) + 1;
                      *pbVar5 = *pbVar5 + bVar13;
                      pcVar7 = (char *)CONCAT31((int3)((uint)pcVar7 >> 8),
                                                (byte)pcVar7 | (byte)*param_2);
                      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar20);
                      cVar3 = (char)puVar6;
                      puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                                CONCAT11((char)((uint)puVar6 >> 8) +
                                                         *(char *)(iVar26 + -2),cVar3));
                      *pbVar5 = *pbVar5 + bVar13;
                      uVar12 = (undefined3)((uint)pbVar5 >> 8);
                      bVar13 = bVar13 | (byte)*puVar27;
                      piVar28 = (int *)((int)piVar28 + *(int *)(iVar26 + -1));
                      *(char *)CONCAT31(uVar12,bVar13) = *(char *)CONCAT31(uVar12,bVar13) + bVar13;
                      bVar13 = bVar13 | (byte)*puVar27;
                      pbVar5 = (byte *)CONCAT31(uVar12,bVar13);
                      cVar22 = (char)param_2 - (byte)*puVar6;
                      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar22);
                      *(byte *)param_2 = (byte)*param_2 ^ bVar13;
                      *(byte *)puVar6 = (byte)*puVar6 + bVar13;
                      *pbVar5 = *pbVar5 + bVar13;
                      bVar2 = *pbVar5;
                      *pcVar7 = *pcVar7 + cVar22;
                      bVar2 = (bVar13 & bVar2) - cVar3;
                      *(char *)CONCAT31(uVar12,bVar2) = *(char *)CONCAT31(uVar12,bVar2) + bVar2;
                      bVar2 = bVar2 | (byte)*param_2;
                      pbVar5 = (byte *)CONCAT31(uVar12,bVar2);
                      if ((POPCOUNT(bVar2) & 1U) != 0) break;
                      *pbVar5 = *pbVar5 + bVar2;
                      uVar9 = CONCAT31(uVar12,bVar2 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar2);
                      *(byte *)((int)piVar28 + (int)puVar6) =
                           *(byte *)((int)piVar28 + (int)puVar6) + (char)uVar9;
                      *(byte *)puVar6 = (byte)*puVar6 + 1;
                      pbVar5 = (byte *)(uVar9 | *param_2);
                      bVar29 = (int)pbVar5 < 0;
                      bVar30 = false;
                      while (bVar30 != bVar29) {
                        *pbVar5 = *pbVar5 + (char)pbVar5;
                        uVar12 = (undefined3)((uint)pbVar5 >> 8);
                        bVar2 = (char)pbVar5 + 2;
                        piVar10 = (int *)CONCAT31(uVar12,bVar2);
                        uVar9 = *puVar6;
                        puVar1 = (uint *)((int)param_2 + *puVar27);
                        if (CARRY4((uint)param_2,*puVar27)) {
                          *piVar10 = (int)(*piVar10 + (int)piVar10);
                          bVar2 = bVar2 | (byte)*puVar27;
                          puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                                    CONCAT11((char)((uint)puVar6 >> 8) +
                                                             (byte)puVar6[-0x11],(char)puVar6));
                          *(char *)CONCAT31(uVar12,bVar2) = *(char *)CONCAT31(uVar12,bVar2) + bVar2;
                          piVar10 = (int *)CONCAT31(uVar12,bVar2 + 0x7d);
                        }
                        bVar2 = *(byte *)((int)puVar6 + -0x42);
                        *(char *)piVar10 = (char)*piVar10 + (char)piVar10;
                        cVar22 = (char)piVar10 + '}';
                        pbVar5 = (byte *)CONCAT31((int3)((uint)piVar10 >> 8),cVar22);
                        iVar26 = 0x6040000;
                        puVar6 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar6 >> 0x10),
                                                                  CONCAT11((char)((uint)puVar6 >> 8)
                                                                           + bVar2,(char)puVar6)) >>
                                                        8),(char)puVar6 - (byte)*puVar27);
                        pcVar7 = (char *)CONCAT22((short)((uint)pcVar7 >> 0x10),
                                                  CONCAT11(((byte)((uint)pcVar7 >> 8) | (byte)uVar9)
                                                           + *pbVar5,(char)pcVar7));
                        *pcVar7 = *pcVar7 + cVar22;
                        *(byte *)puVar27 = (byte)*puVar27 + cVar22;
code_r0x00404076:
                        piVar10 = (int *)CONCAT31((int3)((uint)pbVar5 >> 8),(byte)pbVar5 - *pbVar5);
                        puVar27 = (uint *)((int)puVar27 +
                                          (-(uint)((byte)pbVar5 < *pbVar5) - *piVar10));
                        pbVar5 = (byte *)((int)piVar10 + *piVar10);
                        bVar13 = (byte)pbVar5;
                        *pbVar5 = *pbVar5 + bVar13;
                        *(byte *)puVar6 = (byte)*puVar6 + (char)((uint)pbVar5 >> 8);
                        bVar2 = *pbVar5;
                        *pbVar5 = *pbVar5 + bVar13;
                        *puVar1 = (uint)(pbVar5 + (uint)CARRY1(bVar2,bVar13) + *puVar1);
                        bVar29 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
                        while (bVar29) {
                          *pbVar5 = *pbVar5 + (char)pbVar5;
                          uVar20 = SUB42(unaff_retaddr,0);
                          unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
                          pbVar5 = (byte *)((uint)pbVar5 & 0xffffff00);
                          puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                                    CONCAT11((char)((uint)puVar6 >> 8) -
                                                             (byte)*puVar6,(char)puVar6));
code_r0x00404092:
                          puVar11 = (undefined1 *)((uint)pbVar5 & 0xffffff00);
                          *puVar11 = *puVar11;
                          *puVar11 = *puVar11;
                          *(byte *)puVar1 = (byte)*puVar1;
                          cVar3 = (char)(puVar11 + 0xba7d);
                          uVar12 = (undefined3)((uint)(puVar11 + 0xba7d) >> 8);
                          cVar22 = cVar3 + '\x02';
                          pcVar8 = (char *)CONCAT31(uVar12,cVar22);
                          puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                                    CONCAT11((char)((uint)puVar6 >> 8) +
                                                             (byte)puVar6[-0x11],(char)puVar6));
                          *pcVar8 = *pcVar8 + cVar22;
                          pbVar5 = (byte *)CONCAT31(uVar12,cVar3 + 'q');
                          do {
                            bVar2 = *pbVar5;
                            bVar13 = (byte)pbVar5;
                            *pbVar5 = *pbVar5 + bVar13;
                            unaff_retaddr =
                                 (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar20);
                            if (!CARRY1(bVar2,bVar13)) goto code_r0x00404092;
                            *pbVar5 = *pbVar5 + bVar13;
                            puVar6 = (uint *)CONCAT22((short)((uint)puVar6 >> 0x10),
                                                      CONCAT11((byte)((uint)puVar6 >> 8) |
                                                               bRam0603ffbf,(char)puVar6));
                            *pbVar5 = *pbVar5 + bVar13;
                            uVar12 = (undefined3)((uint)pbVar5 >> 8);
                            bVar2 = bVar13 + 2;
                            pbVar5 = (byte *)CONCAT31(uVar12,bVar2);
                            if (SCARRY1(bVar13,'\x02') == (char)bVar2 < '\0') goto code_r0x00404076;
                            *pbVar5 = *pbVar5 + bVar2;
                            bVar21 = bVar13 + 4;
                            pbVar5 = (byte *)CONCAT31(uVar12,bVar21);
                          } while (0xfd < bVar2);
                          *pbVar5 = *pbVar5 | bVar21;
                          bVar29 = (POPCOUNT(*pbVar5) & 1U) == 0;
                          if (bVar29) {
                            *pbVar5 = *pbVar5 + bVar21;
                            bVar13 = bVar13 + 0x2c;
                            *(char *)CONCAT31(uVar12,bVar13) =
                                 *(char *)CONCAT31(uVar12,bVar13) + bVar13;
                            bVar13 = bVar13 | (byte)*puVar1;
                            pbVar5 = (byte *)CONCAT31(uVar12,bVar13);
                            piVar28 = unaff_retaddr;
                            if ((POPCOUNT(bVar13) & 1U) == 0) {
                              *pbVar5 = *pbVar5 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
                              halt_baddata();
                            }
                            goto code_r0x00404092;
                          }
                        }
                        pcVar7 = (char *)((uint)pcVar7 ^ *puVar6);
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
          pcVar16 = (char *)CONCAT22(uVar18,CONCAT11(bVar2 - *(byte *)((int)puVar27 + 3),cVar22));
          pbVar5 = pbVar5 + (bVar2 < *(byte *)((int)puVar27 + 3)) + 0xda7d;
        } while( true );
      }
    } while (bVar29);
    *in_EAX = *in_EAX + cVar3;
    *in_EAX = *in_EAX + cVar3;
    *in_EAX = *in_EAX + cVar3;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar13;
    param_1 = param_4;
  } while( true );
}


