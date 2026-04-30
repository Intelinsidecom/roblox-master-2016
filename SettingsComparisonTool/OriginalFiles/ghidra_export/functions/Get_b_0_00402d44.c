/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402d44
 * Raw Name    : <Get>b__0
 * Demangled   : <Get>b__0
 * Prototype   : char * <Get>b__0(undefined4 s, byte * param_2)
 * Local Vars  : bVar33, unaff_retaddr, s, pcStack_58, uStack_20, uStack_8, puStack_4, uVar1, uVar2, cVar3, bVar4, cVar5, bVar6, in_EAX, pbVar7, pcVar8, piVar9, pbVar10, puVar11, puVar12, puVar13, uVar14, iVar15, uVar16, bVar17, bVar18, cVar19, uVar20, bVar21, uVar22, pbVar23, unaff_EBX, pcVar24, bVar25, cVar26, uVar27, unaff_EBP, unaff_ESI, pbVar28, param_2, pbVar29, pbVar30, pbVar31, unaff_EDI, in_ES, in_SS, in_DS, bVar32
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall <Get>b__0(undefined4 s,byte *param_2)

{
  undefined6 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte *in_EAX;
  byte *pbVar7;
  char *pcVar8;
  undefined3 uVar14;
  int *piVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  byte bVar17;
  int iVar15;
  byte bVar18;
  char cVar19;
  undefined2 uVar20;
  undefined4 uVar16;
  byte bVar21;
  undefined2 uVar22;
  byte *pbVar23;
  byte bVar25;
  char cVar26;
  undefined2 uVar27;
  int unaff_EBX;
  char *pcVar24;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint *unaff_EDI;
  ushort in_ES;
  ushort in_SS;
  ushort in_DS;
  bool bVar32;
  bool bVar33;
  ushort unaff_retaddr;
  char *pcStack_58;
  uint uStack_20;
  ushort uStack_8;
  uint *puStack_4;
  
  bVar32 = false;
  do {
                    /* .NET CLR Managed Code */
    bVar21 = *(byte *)((int)unaff_EDI + 0x1a);
    cVar26 = (char)s;
    *in_EAX = *in_EAX + (char)in_EAX;
    pbVar31 = (byte *)CONCAT22((short)((uint)s >> 0x10),
                               CONCAT11((char)((uint)s >> 8) + bVar21 | *param_2,cVar26));
    pbVar7 = in_EAX + *(int *)param_2;
    uVar14 = (undefined3)((uint)pbVar7 >> 8);
    cVar5 = (char)pbVar7;
    bVar21 = (byte)param_2;
    if ((POPCOUNT((uint)pbVar7 & 0xff) & 1U) == 0) {
      *pbVar7 = *pbVar7 + cVar5;
      bVar4 = cVar5 + 0x6f;
      pcVar8 = (char *)CONCAT31(uVar14,bVar4);
      pcVar24 = (char *)(unaff_EBX + -1);
      *pcVar8 = *pcVar8 + bVar4;
      *pcVar8 = *pcVar8 + bVar4;
      *pcVar24 = *pcVar24 + bVar21;
      *(byte *)((int)pcVar8 * 2) = *(byte *)((int)pcVar8 * 2) ^ bVar4;
      uVar1 = *(undefined6 *)pcVar8;
      in_ES = (ushort)((uint6)uVar1 >> 0x20);
      pcVar8 = (char *)uVar1;
      *pcVar8 = *pcVar8 + (char)uVar1;
      *unaff_ESI = *unaff_ESI + (char)uVar1;
      pcVar8 = (char *)((uint)pcVar8 | 0x73110008);
      bVar25 = (byte)((uint)pcVar24 >> 8);
      *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar25;
      *param_2 = *param_2 + cVar26;
      pbVar7 = unaff_ESI + (uint)bVar32 * -8 + 4;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      *pcVar8 = *pcVar8;
      cVar5 = (char)pcVar8;
      *pcVar8 = *pcVar8 + cVar5;
      bVar4 = *(byte *)(unaff_EBP - 0x5a);
      uVar27 = (undefined2)((uint)pcVar24 >> 0x10);
      cVar26 = (char)pcVar24;
      *pcVar8 = *pcVar8 + cVar5;
      cVar5 = cVar5 + '\x02';
      uVar2 = CONCAT31((int3)((uint6)uVar1 >> 8),cVar5);
      pbVar31 = (byte *)(uVar2 | 0x73110000);
      unaff_ESI = pbVar7 + (uint)bVar32 * -8 + 4;
      out(*(undefined4 *)pbVar7,(short)param_2);
      *pbVar31 = *pbVar31;
      bVar21 = bVar21 | (byte)*unaff_EDI;
      pbVar7 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar21);
      *pbVar31 = *pbVar31 + cVar5;
      pcVar8 = (char *)(uVar2 | 0x7b1f1609);
      bVar32 = (unaff_retaddr & 0x400) != 0;
      *(uint *)((int)unaff_EDI + -0x7d) = *(uint *)((int)unaff_EDI + -0x7d) | unaff_EBP;
      bVar6 = (byte)pcVar8;
      *pcVar8 = *pcVar8 + bVar6;
      bVar25 = bVar25 | bVar4 | unaff_ESI[0x19];
      pbVar23 = (byte *)CONCAT22(uVar27,CONCAT11(bVar25,cVar26));
      *pcVar8 = *pcVar8 + bVar6;
      uVar14 = (undefined3)((uint)pcVar8 >> 8);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           pbVar7 + (uint)(0xd2 < bVar6) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      bVar6 = bVar6 + 0x2d ^ *(byte *)CONCAT31(uVar14,bVar6 + 0x2d);
      pcVar8 = (char *)CONCAT31(uVar14,bVar6);
      bVar4 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar6;
      unaff_retaddr = in_ES;
      if (CARRY1(bVar4,bVar6)) {
        *pcVar8 = *pcVar8 + bVar6;
        bVar6 = bVar6 | pcVar8[0x4000019];
        pcVar8 = (char *)CONCAT31(uVar14,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar8 = *pcVar8 + bVar6;
          piVar9 = (int *)CONCAT31(uVar14,bVar6 + 0x28);
          *piVar9 = (int)piVar9 + (uint)(0xd7 < bVar6) + *piVar9;
          bVar17 = (byte)((uint6)uVar1 >> 8);
          *pbVar23 = *pbVar23 + bVar17;
          uVar20 = CONCAT11((byte)((uint)param_2 >> 8) | bVar25,bVar21);
          pbVar7 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar20);
          puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
          bVar6 = in(uVar20);
          pbVar10 = (byte *)CONCAT31(uVar14,bVar6);
          bVar21 = *pbVar10;
          bVar33 = SCARRY1(*pbVar10,bVar6);
          *pbVar10 = *pbVar10 + bVar6;
          bVar4 = *pbVar10;
          pbVar28 = unaff_ESI;
          uStack_8 = in_ES;
          if (!CARRY1(bVar21,bVar6)) goto code_r0x00402e19;
          *pbVar10 = *pbVar10 + bVar6;
          bVar17 = bVar17 | *pbVar10;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),CONCAT11(bVar17,cVar5));
          pcVar8 = (char *)CONCAT31(uVar14,bVar6 + *pbVar10);
          *pbVar23 = *pbVar23 + bVar17;
        }
        uVar14 = (undefined3)((uint)pcVar8 >> 8);
        bVar4 = (byte)pcVar8 | *pbVar7;
        pbVar10 = (byte *)CONCAT31(uVar14,bVar4);
        pbVar28 = unaff_ESI + (uint)bVar32 * -8 + 4;
        out(*(undefined4 *)unaff_ESI,(short)pbVar7);
        LOCK();
        bVar21 = *pbVar10;
        *pbVar10 = bVar4;
        UNLOCK();
        *pbVar7 = *pbVar7 + (char)pbVar31;
        piVar9 = (int *)(CONCAT31(uVar14,bVar21) + -0x1b7e07);
        *pbVar7 = *pbVar7 + (char)pbVar31;
        iVar15 = (int)pbVar31 - *(int *)pbVar23;
        bVar21 = *(byte *)((int)unaff_EDI + -0x7a);
        uVar20 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar9 = *(char *)piVar9 + (char)piVar9;
        bVar4 = (char)((uint)iVar15 >> 8) + bVar21 | *(byte *)((int)unaff_EDI + 0x17);
        *(char *)piVar9 = *(char *)piVar9 + (char)piVar9;
        uVar14 = (undefined3)(CONCAT22(uVar20,CONCAT11(bVar4,(byte)iVar15)) >> 8);
        bVar21 = (byte)iVar15 | *pbVar23;
        pbVar31 = (byte *)CONCAT31(uVar14,bVar21);
        pbVar10 = (byte *)((int)piVar9 + *piVar9);
        pbVar29 = pbVar28;
        if (SCARRY4((int)piVar9,*piVar9)) goto code_r0x00402e0a;
        *pbVar31 = *pbVar31 + bVar21;
        *(byte **)pbVar23 = pbVar7 + *(int *)pbVar23;
        piVar9 = (int *)CONCAT31(uVar14,bVar21 + 0x27);
        pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(bVar4 + *(byte *)((int)unaff_EDI + -0x79),bVar21)
                                  );
        *(byte *)piVar9 = (char)*piVar9 + bVar21 + 0x27;
code_r0x00402dff:
        pbVar10 = (byte *)CONCAT22((short)((uint)piVar9 >> 0x10),
                                   CONCAT11((byte)((uint)piVar9 >> 8) | pbVar7[0x2170411],
                                            (byte)piVar9));
        pbVar29 = pbVar28 + (uint)bVar32 * -8 + 4;
        out(*(undefined4 *)pbVar28,(short)pbVar7);
        *pbVar10 = (byte)piVar9;
        *pbVar7 = *pbVar7 + (char)pbVar31;
code_r0x00402e0a:
        cRam06180411 = (char)pbVar10;
        *pbVar10 = *pbVar10 - cVar26;
        *pbVar10 = *pbVar10 + (char)pbVar10;
        bVar33 = false;
        bVar4 = (byte)((uint)pbVar31 >> 8) | bRam052b0603;
        pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),CONCAT11(bVar4,(char)pbVar31));
        pbVar28 = pbVar29;
code_r0x00402e19:
        if (bVar4 == 0 || bVar33 != (char)bVar4 < '\0') break;
        cRam89280411 = (char)pbVar10;
        *pbVar10 = *pbVar10 + cRam89280411;
        piVar9 = (int *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar10 >> 8) | pbVar7[0x7190411],
                                          cRam89280411));
        *(char *)piVar9 = (char)*piVar9 + cRam89280411;
        cVar5 = (char)pbVar31;
        pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar31 >> 8) | *pbVar7,cVar5));
        pbVar28 = pbVar28 + *piVar9;
        pbVar10 = (byte *)((int)piVar9 + *piVar9);
        bVar4 = (byte)pbVar10;
        *pbVar10 = *pbVar10 + bVar4;
        *pbVar28 = *pbVar28 + cVar5;
        bVar21 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar4;
        *(uint *)pbVar10 = *(int *)pbVar10 + unaff_EBP + (uint)CARRY1(bVar21,bVar4);
        piVar9 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
        *pbVar7 = *pbVar7 + cVar5;
        pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 | *pbVar7);
        pbVar10 = pbVar29 + -0x43;
        *pbVar10 = *pbVar10 + (char)((uint)pbVar7 >> 8);
        pbVar7 = pbVar29;
        puVar12 = unaff_EDI;
code_r0x00402e42:
        unaff_EDI = puVar12;
        if (SCARRY4((int)piVar9,*piVar9)) goto code_r0x00402e6e;
        iVar15 = *(int *)((int)piVar9 + *piVar9);
        *pbVar7 = *pbVar7 + (char)pbVar31;
        piVar9 = (int *)(iVar15 + -0x8c6f);
        pbVar7 = (byte *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar7 >> 8) | pbVar7[-0x3f],(char)pbVar7));
        pbVar29 = (byte *)((int)piVar9 + *piVar9);
        pbVar10 = pbVar29;
        unaff_EDI = puStack_4;
        in_DS = uStack_8;
        if (SCARRY4((int)piVar9,*piVar9)) goto code_r0x00402e81;
code_r0x00402e5a:
        *pbVar29 = *pbVar29 + (char)pbVar29;
        pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar31 >> 8) | *pbVar7,(char)pbVar31));
        pbVar10 = pbVar28 + (uint)bVar32 * -8 + 4;
        out(*(undefined4 *)pbVar28,(short)pbVar7);
        pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),(char)pbVar7 + (byte)*unaff_EDI);
        pbVar28 = pbVar10 + (uint)bVar32 * -8 + 4;
        out(*(undefined4 *)pbVar10,(short)pbVar7);
        uStack_8 = in_ES;
code_r0x00402e6e:
        uVar14 = (undefined3)((uint)pbVar7 >> 8);
        cVar5 = (char)pbVar7 + (byte)*unaff_EDI;
        pbVar10 = pbVar28 + (uint)bVar32 * -8 + 4;
        out(*(undefined4 *)pbVar28,(short)CONCAT31(uVar14,cVar5));
        pbVar7 = (byte *)CONCAT31(uVar14,cVar5 + (byte)*unaff_EDI);
        pbVar28 = pbVar10 + (uint)bVar32 * -8 + 4;
        out(*(undefined4 *)pbVar10,(short)pbVar7);
        pbVar10 = (byte *)0x0;
        puVar12 = unaff_EDI;
code_r0x00402e81:
        unaff_EDI = puVar12;
        bVar4 = (char)pbVar10 - *pbVar10;
        iVar15 = CONCAT31((int3)((uint)pbVar10 >> 8),bVar4);
        *pbVar23 = *pbVar23 + (char)pbVar7;
        pbVar29 = (byte *)(iVar15 * 2);
        *pbVar29 = *pbVar29 ^ bVar4;
        pbVar29 = (byte *)(int)(short)iVar15;
        *pbVar29 = *pbVar29 + bVar4;
        *(byte *)unaff_EDI = (byte)*unaff_EDI + (byte)pbVar31;
        bVar21 = *pbVar29;
        *pbVar29 = *pbVar29 + bVar4;
        *(byte **)(pbVar23 + -0x73) =
             pbVar28 + (uint)CARRY1(bVar21,bVar4) + *(int *)(pbVar23 + -0x73);
        *pbVar29 = *pbVar29 + bVar4;
        bVar21 = (byte)pbVar31 | *pbVar7;
        pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),bVar21);
        pbVar30 = pbVar28;
        if ((char)bVar21 < '\x01') goto code_r0x00402eb4;
        *pbVar29 = *pbVar29 + bVar4;
        pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar10 >> 8),bVar4 + 0x2d);
        *(byte **)(pbVar28 + (int)unaff_EDI * 8) =
             pbVar7 + (uint)(0xd2 < bVar4) + *(int *)(pbVar28 + (int)unaff_EDI * 8);
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        do {
          bVar21 = *pbVar28;
          bVar4 = (byte)pbVar10;
          *pbVar28 = *pbVar28 + bVar4;
          if (!CARRY1(bVar21,bVar4)) goto code_r0x00402e36;
          *pbVar10 = *pbVar10 + bVar4;
          bVar4 = bVar4 | pbVar10[0x400001a];
          pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar4);
          if ((char)bVar4 < '\x01') {
code_r0x00402ecc:
            *pbVar29 = *pbVar29 + (byte)pbVar29;
            uVar14 = (undefined3)((uint)pbVar29 >> 8);
            bVar21 = (byte)pbVar29 | pbVar29[0x400001b];
            puVar12 = (uint *)CONCAT31(uVar14,bVar21);
            if ((char)bVar21 < '\x01') {
              bVar4 = *pbVar7;
              *pbVar7 = *pbVar7 + (byte)pbVar31;
              *(char *)((int)puVar12 * 2) =
                   *(char *)((int)puVar12 * 2) - CARRY1(bVar4,(byte)pbVar31);
              bVar33 = 0x81 < bVar21;
              bVar21 = bVar21 + 0x7e;
              goto code_r0x00402ef9;
            }
          }
          else {
            *pbVar29 = *pbVar29 + bVar4;
            pbVar30 = pbVar28;
code_r0x00402eb4:
            uVar14 = (undefined3)((uint)pbVar29 >> 8);
            bVar4 = (char)pbVar29 + 0x6f;
            puVar12 = (uint *)CONCAT31(uVar14,bVar4);
            *puVar12 = uStack_20;
            bVar21 = *pbVar7;
            *pbVar7 = *pbVar7 + (char)pbVar31;
            uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
            in_SS = in_ES;
            if (*pbVar7 != 0 && SCARRY1(bVar21,(char)pbVar31) == (char)*pbVar7 < '\0') {
              *(byte *)puVar12 = (char)*puVar12 + bVar4;
              bVar6 = (char)pbVar29 + 0x9c;
              pbVar29 = (byte *)CONCAT31(uVar14,bVar6);
              *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
                   pbVar7 + (uint)(0xd2 < bVar4) + *(int *)(pbVar30 + (int)unaff_EDI * 8);
              uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
              bVar21 = *pbVar30;
              *pbVar30 = *pbVar30 + bVar6;
              pbVar28 = pbVar30;
              if (CARRY1(bVar21,bVar6)) goto code_r0x00402ecc;
              goto code_r0x00402e5a;
            }
            pbVar28 = pbVar30 + (uint)bVar32 * -8 + 4;
            out(*(undefined4 *)pbVar30,(short)pbVar7);
          }
          cVar5 = (char)puVar12;
          *(char *)puVar12 = (char)*puVar12 + cVar5;
          uVar14 = (undefined3)((uint)puVar12 >> 8);
          bVar4 = cVar5 + 0x6f;
          puVar12 = (uint *)CONCAT31(uVar14,bVar4);
          *puVar12 = uStack_20;
          bVar21 = *pbVar7;
          *pbVar7 = *pbVar7 + (byte)pbVar31;
          uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
          pbVar28[0x1c] = (pbVar28[0x1c] - bVar25) - CARRY1(bVar21,(byte)pbVar31);
          *(byte *)puVar12 = (char)*puVar12 + bVar4;
          bVar6 = cVar5 + 0x9c;
          pcVar8 = (char *)CONCAT31(uVar14,bVar6);
          *(byte **)(pbVar28 + (int)unaff_EDI * 8) =
               pbVar7 + (uint)(0xd2 < bVar4) + *(int *)(pbVar28 + (int)unaff_EDI * 8);
          bVar21 = *pbVar28;
          *pbVar28 = *pbVar28 + bVar6;
          if (!CARRY1(bVar21,bVar6)) goto code_r0x00402e7e;
          *pcVar8 = *pcVar8 + bVar6;
          bVar6 = bVar6 | pcVar8[0x400001c];
          pbVar10 = (byte *)CONCAT31(uVar14,bVar6);
          uStack_8 = in_ES;
          if ((char)bVar6 < '\x01') goto code_r0x00402f16;
          *pbVar10 = *pbVar10 + bVar6;
          puVar12 = (uint *)CONCAT31(uVar14,bVar6 + 0x6f);
          while( true ) {
            *puVar12 = uStack_20;
            bVar21 = *pbVar7;
            *pbVar7 = *pbVar7 + (byte)pbVar31;
            *(uint *)(pbVar28 + 0x1d) =
                 (*(int *)(pbVar28 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar21,(byte)pbVar31);
            bVar21 = (byte)puVar12;
            *(byte *)puVar12 = (char)*puVar12 + bVar21;
            bVar4 = bVar21 + 0x2d;
            pbVar10 = (byte *)CONCAT31((int3)((uint)puVar12 >> 8),bVar4);
            *(byte **)(pbVar28 + (int)unaff_EDI * 8) =
                 pbVar7 + (uint)(0xd2 < bVar21) + *(int *)(pbVar28 + (int)unaff_EDI * 8);
            uStack_20 = CONCAT22((short)(uStack_20 >> 0x10),in_ES);
            bVar21 = *pbVar28;
            *pbVar28 = *pbVar28 + bVar4;
            if (!CARRY1(bVar21,bVar4)) break;
            *pbVar10 = *pbVar10 + bVar4;
code_r0x00402f16:
            bVar21 = (byte)pbVar10 | pbVar10[0x400001d];
            puVar12 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar21);
            uVar2 = unaff_EBP;
            if ((char)bVar21 < '\x01') goto code_r0x00402f3b;
            while( true ) {
              unaff_EBP = uVar2;
              *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
              uVar14 = (undefined3)((uint)puVar12 >> 8);
              cVar5 = (char)puVar12 + 'o';
              puVar11 = (uint *)CONCAT31(uVar14,cVar5);
              *puVar11 = uStack_20;
              cVar3 = (char)pbVar31;
              *pbVar7 = *pbVar7 + cVar3;
              uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
              bVar21 = (byte)((uint)pbVar7 >> 8);
              pbVar7 = (byte *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                                        CONCAT11(bVar21 - *pbVar28,(char)pbVar7));
              if (bVar21 < *pbVar28) break;
              bVar33 = CARRY4((uint)puVar11,*puVar11);
              puVar12 = (uint *)((int)puVar11 + *puVar11);
              if (!SCARRY4((int)puVar11,*puVar11)) {
                bVar33 = CARRY4(unaff_EBP,*puVar12);
                unaff_EBP = unaff_EBP + *puVar12;
              }
              *puVar12 = (*puVar12 - (int)puVar12) - (uint)bVar33;
              *pbVar7 = *pbVar7 + cVar3;
              pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                         CONCAT11((char)((uint)pbVar31 >> 8) + *pbVar7,
                                                  cVar3 - *pbVar7));
              *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x00402f3b:
              cVar3 = (char)pbVar7;
              *pbVar23 = *pbVar23 + cVar3;
              bVar21 = (byte)puVar12;
              *(byte *)((int)puVar12 * 2) = *(byte *)((int)puVar12 * 2) ^ bVar21;
              *(byte *)puVar12 = (byte)*puVar12 + bVar21;
              *(byte *)puVar12 = (byte)*puVar12 + cVar3;
              uVar2 = *puVar12;
              *(byte *)puVar12 = (byte)*puVar12 + bVar21;
              *(byte **)pbVar7 =
                   (byte *)((int)puVar12 + (uint)CARRY1((byte)uVar2,bVar21) + *(int *)pbVar7);
              pcVar8 = (char *)((uint)puVar12 | *unaff_EDI);
              uVar14 = (undefined3)((uint)pcVar8 >> 8);
              cVar5 = (char)pcVar8 + *pcVar8;
              pcVar8 = (char *)CONCAT31(uVar14,cVar5);
              *pcVar8 = *pcVar8 + cVar5;
              cVar5 = cVar5 + *pcVar8;
              piVar9 = (int *)CONCAT31(uVar14,cVar5);
              *(char *)piVar9 = (char)*piVar9 + cVar5;
              iVar15 = LocalDescriptorTableRegister();
              *piVar9 = iVar15;
              bVar21 = *pbVar23;
              bVar18 = (byte)((uint)pbVar31 >> 8);
              *pbVar23 = *pbVar23 + bVar18;
              iVar15 = *piVar9;
              uVar20 = (undefined2)((uint)pbVar31 >> 0x10);
              bVar17 = (byte)pbVar31;
              *pbVar28 = *pbVar28 + cVar5;
              pbVar31 = pbVar28 + (uint)bVar32 * -8 + 4;
              out(*(undefined4 *)pbVar28,(short)pbVar7);
              *pbVar31 = *pbVar31 + cVar5;
              bVar4 = *pbVar23;
              *pbVar7 = *pbVar7 - bVar25;
              *pbVar31 = *pbVar31 + cVar5;
              pbVar10 = pbVar31 + (uint)bVar32 * -8 + 4;
              out(*(undefined4 *)pbVar31,(short)pbVar7);
              *pbVar10 = *pbVar10 + cVar5;
              bVar6 = *pbVar23;
              *(uint *)(pbVar7 + -0x23) = *(uint *)(pbVar7 + -0x23) & (uint)pbVar10;
              puVar13 = (ushort *)((int)piVar9 + *piVar9);
              if (!SCARRY4((int)piVar9,*piVar9)) {
                *puVar13 = in_SS;
              }
              *(char *)puVar13 = (char)*puVar13 + (char)puVar13;
              uVar22 = CONCAT11((char)((uint)pbVar7 >> 8) + pbVar7[-0x15],cVar3);
              pbVar7 = (byte *)CONCAT22((short)((uint)pbVar7 >> 0x10),uVar22);
              puVar12 = (uint *)((int)puVar13 + *(int *)puVar13);
              if (!SCARRY4((int)puVar13,*(int *)puVar13)) {
                *(ushort *)puVar12 = in_SS;
              }
              cVar5 = (char)puVar12;
              *(byte *)puVar12 = (byte)*puVar12 + cVar5;
              cVar19 = ((bVar18 - (char)iVar15) - CARRY1(bVar21,bVar18) | bVar4 | bVar6) +
                       (byte)*puVar12;
              pbVar31 = (byte *)CONCAT22(uVar20,CONCAT11(cVar19,bVar17));
              bVar21 = *pbVar7;
              *pbVar7 = *pbVar7 + bVar17;
              if (CARRY1(bVar21,bVar17)) {
                *(byte *)puVar12 = (byte)*puVar12 + cVar5;
                bVar21 = pbVar7[6];
                *pbVar7 = *pbVar7 + bVar17;
                bVar4 = (cVar19 - *pbVar10) + cRam14730307;
                *(byte *)puVar12 = (byte)*puVar12 + cVar5;
                bVar21 = bVar25 | bVar21 | pbVar7[0x2a];
                uVar2 = *puVar12;
                pbVar31 = (byte *)((int)puVar12 + (uint)CARRY1(bVar4,(byte)*puVar12) + *puVar12);
                *pbVar7 = *pbVar7 + bVar17;
                cVar5 = cVar26 - *pbVar10;
                cVar26 = bVar21 + *(char *)(CONCAT31((int3)(CONCAT22(uVar27,CONCAT11(bVar21,cVar26))
                                                           >> 8),cVar5) + 0x1e);
                *pbVar31 = *pbVar31 + (char)pbVar31;
                uVar14 = (undefined3)((uint)pbVar31 >> 8);
                bVar21 = (char)pbVar31 + 0x2aU & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x2a);
                cVar26 = cVar26 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar26,cVar5)) + 0x1f);
                *pcVar8 = *pcVar8 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x2a);
                cVar26 = cVar26 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar26,cVar5)) + 0x20);
                *pcVar8 = *pcVar8 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x2a);
                cVar26 = cVar26 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar26,cVar5)) + 0x21);
                *pcVar8 = *pcVar8 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x2a);
                cVar26 = cVar26 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar26,cVar5)) + 0x22);
                *pcVar8 = *pcVar8 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x2a);
                bVar4 = bVar4 + (byte)uVar2 + *pcVar8;
                uVar16 = CONCAT22(uVar20,CONCAT11(bVar4,bVar17));
                cVar26 = cVar26 + *(char *)(CONCAT22(uVar27,CONCAT11(cVar26,cVar5)) + 0x25);
                *pcVar8 = *pcVar8 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x2a);
                pcVar24 = (char *)CONCAT22(uVar27,CONCAT11(cVar26 + *(char *)(CONCAT22(uVar27,
                                                  CONCAT11(cVar26,cVar5)) + 0x26),cVar5));
                *pcVar8 = *pcVar8 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                cVar5 = bVar21 + 0x2a;
                pcVar8 = (char *)CONCAT31(uVar14,cVar5);
                if ((POPCOUNT(cVar5) & 1U) == 0) {
                  *pcVar8 = *pcVar8 + cVar5;
                  pbVar31 = (byte *)(CONCAT31(uVar14,bVar21 + 0x4f) + -0x33282610);
                  bVar21 = *pbVar31;
                  bVar6 = (byte)pbVar31;
                  *pbVar31 = *pbVar31 + bVar6;
                  uVar14 = (undefined3)((uint)pbVar31 >> 8);
                  if (!CARRY1(bVar21,bVar6)) {
                    if (!SCARRY1(bVar6,'\0')) {
                      *pbVar31 = *pbVar31 + bVar6;
                      uVar16 = CONCAT22(uVar20,CONCAT11(bVar4 | *pbVar7,bVar17));
                      bVar6 = bVar6 & *pbVar7;
                      *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
                      pcVar8 = (char *)CONCAT31(uVar14,bVar6 + 0x2a);
                      goto code_r0x00403058;
                    }
                    pcVar8 = (char *)CONCAT31(uVar14,bVar6 + *pcVar24);
                    if (SCARRY1(bVar6,*pcVar24) != (char)(bVar6 + *pcVar24) < '\0')
                    goto code_r0x00403072;
                    goto code_r0x0040309a;
                  }
                  bVar21 = bVar6 + *pcVar24;
                  pbVar31 = (byte *)CONCAT31(uVar14,bVar21);
                  if (SCARRY1(bVar6,*pcVar24) == (char)bVar21 < '\0') {
                    pcVar8 = (char *)CONCAT22(uVar20,CONCAT11(bVar4 | *pbVar7,bVar17));
                    *pcVar24 = *pcVar24 + cVar3;
                    *pbVar7 = *pbVar7 ^ bVar21;
                    *(char *)((int)pbVar31 * 2) = *(char *)((int)pbVar31 * 2) + bVar21;
                    goto code_r0x004030df;
                  }
                }
                else {
code_r0x00403058:
                  *pcVar8 = *pcVar8 + (char)pcVar8;
                  uVar14 = (undefined3)((uint)pcVar8 >> 8);
                  bVar21 = (char)pcVar8 + 0x2aU & *pbVar7;
                  *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                  pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x2a);
                  *pcVar8 = *pcVar8 + bVar21 + 0x2a;
                  pcVar8 = (char *)CONCAT31(uVar14,bVar21 + 0x54 & *pbVar7);
code_r0x00403072:
                  cVar5 = (char)pcVar8;
                  *pcVar8 = *pcVar8 + cVar5;
                  uVar14 = (undefined3)((uint)pcVar8 >> 8);
                  pcVar8 = (char *)CONCAT31(uVar14,cVar5 + '*');
                  *pcVar8 = *pcVar8 + cVar5 + '*';
                  bVar21 = cVar5 + 0x54U & *pbVar7;
                  *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                  pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_DS);
                  uVar16 = CONCAT22((short)((uint)uVar16 >> 0x10),
                                    CONCAT11((char)((uint)uVar16 >> 8) +
                                             *(char *)CONCAT31(uVar14,bVar21 + 0x2a),(char)uVar16));
                  pbVar10[0x20a0000] = pbVar10[0x20a0000] - cVar3;
                  pcVar8 = pcStack_58;
code_r0x0040309a:
                  cVar5 = (char)pcVar8;
                  *pcVar8 = *pcVar8 + cVar5;
                  pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_ES);
                  *pcVar8 = *pcVar8 + cVar5;
                  pbVar31 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar5 + 0x2aU & *pbVar7);
                }
                cVar5 = (char)pbVar31;
                *pbVar31 = *pbVar31 + cVar5;
                uVar14 = (undefined3)((uint)pbVar31 >> 8);
                cVar26 = cVar5 + '*';
                pcVar8 = (char *)CONCAT31(uVar14,cVar26);
                pbVar10[0x20a0000] = pbVar10[0x20a0000] - cVar3;
                *pcVar8 = *pcVar8 + cVar26;
                cVar19 = (char)pcStack_58 - *pbVar10;
                pcVar24 = (char *)CONCAT22((short)((uint)pcStack_58 >> 0x10),
                                           CONCAT11((char)((uint)pcStack_58 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)pcStack_58 >> 8)
                                                                       ,cVar19) + 0x34),cVar19));
                *pcVar8 = *pcVar8 + cVar26;
                bVar21 = cVar5 + 0x54U & *pbVar7;
                *(char *)CONCAT31(uVar14,bVar21) = *(char *)CONCAT31(uVar14,bVar21) + bVar21;
                pbVar31 = (byte *)CONCAT31(uVar14,bVar21 + 0x2a);
                bVar21 = (byte)((uint)uVar16 >> 8);
                pcVar8 = (char *)CONCAT22((short)((uint)uVar16 >> 0x10),
                                          CONCAT11(bVar21 + *pbVar31,(char)uVar16));
                pbVar31 = pbVar31 + (uint)CARRY1(bVar21,*pbVar31) + *(int *)pbVar31;
                *pbVar7 = *pbVar7 + (char)uVar16;
                uVar14 = (undefined3)((uint)pbVar31 >> 8);
                cVar5 = (byte)pbVar31 - *pbVar31;
                piVar9 = (int *)CONCAT31(uVar14,cVar5);
                pbVar10 = pbVar10 + (uint)((byte)pbVar31 < *pbVar31) + *piVar9;
                cVar5 = cVar5 + (char)*piVar9;
                pbVar31 = (byte *)CONCAT31(uVar14,cVar5);
                *pbVar31 = *pbVar31 + cVar5;
code_r0x004030df:
                *pcVar8 = *pcVar8 + cVar3;
                bVar21 = *pbVar31;
                bVar4 = (byte)pbVar31;
                *pbVar31 = *pbVar31 + bVar4;
                *(byte **)(pcVar24 + -0x41) =
                     pbVar10 + (uint)CARRY1(bVar21,bVar4) + *(int *)(pcVar24 + -0x41);
                *pbVar31 = *pbVar31 + bVar4;
                uVar14 = (undefined3)((uint)pbVar31 >> 8);
                bVar4 = bVar4 | *pbVar10;
                *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
                pcVar8 = (char *)CONCAT31(uVar14,bVar4 + 0x7b);
                *pcVar8 = *pcVar8 + bVar4 + 0x7b;
                pbVar10[CONCAT31(uVar14,bVar4 - 8) + -1] =
                     pbVar10[CONCAT31(uVar14,bVar4 - 8) + -1] + (bVar4 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              pbVar28 = pbVar10 + (uint)bVar32 * -8 + 4;
              out(*(undefined4 *)pbVar10,uVar22);
              uVar2 = unaff_EBP + 1;
              uStack_20 = unaff_EBP;
            }
            bVar21 = cVar5 - (bVar21 < *pbVar28);
            pbVar10 = pbVar28 + (int)unaff_EDI * 2;
            bVar33 = CARRY1(*pbVar10,bVar21);
            *pbVar10 = *pbVar10 + bVar21;
code_r0x00402ef9:
            puVar12 = (uint *)CONCAT31(uVar14,bVar21 - bVar33);
            pbVar10 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
            *pbVar10 = *pbVar10 + (bVar21 - bVar33);
          }
        } while( true );
      }
    }
    else {
      uVar27 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar25 = (byte)((uint)unaff_EBX >> 8) | *(byte *)(unaff_EBP - 0x62);
      iVar15 = CONCAT22(uVar27,CONCAT11(bVar25,(char)unaff_EBX));
      *pbVar7 = *pbVar7 + cVar5;
      cRam00009d7d = cRam00009d7d + bVar21;
      bVar6 = cVar5 + 0x24;
      pcVar8 = (char *)(iVar15 + -0x62);
      *pcVar8 = *pcVar8 + bVar25;
      *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
      bVar4 = cVar5 + 0x2fU + *pbVar31;
      cVar3 = bVar4 + (0xf4 < bVar6);
      cVar5 = cVar3 + *(char *)CONCAT31(uVar14,cVar3) +
              (CARRY1(cVar5 + 0x2fU,*pbVar31) || CARRY1(bVar4,0xf4 < bVar6));
      pcVar8 = (char *)CONCAT31(uVar14,cVar5);
      *pcVar8 = *pcVar8 - bVar21;
      *pcVar8 = *pcVar8 + cVar5;
      pbVar23 = param_2 + -*(int *)param_2;
      unaff_ESI[iVar15 * 4] = unaff_ESI[iVar15 * 4] + bVar25;
      pcVar8[unaff_EBP] = pcVar8[unaff_EBP] + cVar5;
      *pbVar23 = *pbVar23 + cVar26;
      pcVar8 = (char *)CONCAT22((short)((uint)pbVar7 >> 0x10),
                                CONCAT11((char)((uint)pbVar7 >> 8) - *pbVar23,cVar5));
      pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(char)pbVar23 + (byte)*unaff_EDI);
      *pcVar8 = *pcVar8 - (char)((uint)pbVar23 >> 8);
      *pcVar8 = *pcVar8 + cVar5;
      puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
      pbVar23 = (byte *)CONCAT22(uVar27,CONCAT11(bVar25 - *unaff_ESI,(char)unaff_EBX));
      unaff_EBP = unaff_EBP + *(int *)(pbVar23 + (int)pbVar31);
    }
    bVar21 = pbVar23[0x18];
    *pcVar8 = *pcVar8 + (char)pcVar8;
    pbVar28 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),(char)pcVar8 + 'o');
    cVar5 = (char)pbVar31;
    *pbVar7 = *pbVar7 + cVar5;
    bVar4 = *unaff_ESI;
    bVar6 = (byte)((uint)pbVar31 >> 8);
    s = CONCAT22((short)((uint)pbVar31 >> 0x10),CONCAT11(bVar6 + *pbVar28,cVar5));
    in_EAX = pbVar28 + (uint)CARRY1(bVar6,*pbVar28) + *(int *)pbVar28;
    *pbVar7 = *pbVar7 + cVar5;
    unaff_EBX = CONCAT31((int3)(CONCAT22((short)((uint)pbVar23 >> 0x10),
                                         CONCAT11((char)((uint)pbVar23 >> 8) + bVar21,(char)pbVar23)
                                        ) >> 8),((char)pbVar23 - bVar4) - *unaff_ESI);
    param_2 = pbVar7;
  } while( true );
code_r0x00402e36:
  *pbVar31 = *pbVar31 + (char)pbVar7;
  pbVar29 = pbVar7 + 0xa0a0000;
  bVar21 = *pbVar29;
  bVar6 = (byte)pbVar31;
  *pbVar29 = *pbVar29 - bVar6;
  bVar4 = (byte)pbVar10 + *pbVar10;
  piVar9 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar4 + (bVar21 < bVar6));
  puVar12 = unaff_EDI;
  if (CARRY1((byte)pbVar10,*pbVar10) || CARRY1(bVar4,bVar21 < bVar6)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar8 = *pcVar8 + bVar6;
  uStack_8 = in_ES;
  goto code_r0x00402e6e;
}


