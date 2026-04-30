/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402d4c
 * Raw Name    : <Get>b__1
 * Demangled   : <Get>b__1
 * Prototype   : bool <Get>b__1(byte * s, byte * param_2)
 * Local Vars  : unaff_retaddr, s, uStack_20, pcStack_58, puStack_4, uStack_8, uVar2, uVar1, cVar4, bVar3, in_EAX, bVar5, pcVar7, pbVar6, pbVar9, piVar8, puVar11, puVar10, uVar13, puVar12, iVar15, cVar14, bVar17, uVar16, cVar19, bVar18, bVar21, uVar20, pbVar23, uVar22, unaff_EBX, pbVar24, bVar26, param_2, pcVar25, uVar28, cVar27, unaff_ESI, unaff_EBP, pbVar30, pbVar29, in_ES, unaff_EDI, in_DS, in_SS, bVar32, bVar31
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

bool __fastcall <Get>b__1(byte *s,byte *param_2)

{
  undefined6 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int in_EAX;
  byte *pbVar6;
  char *pcVar7;
  undefined3 uVar13;
  int *piVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  char cVar14;
  byte bVar17;
  int iVar15;
  byte bVar18;
  char cVar19;
  undefined2 uVar20;
  undefined4 uVar16;
  byte bVar21;
  undefined2 uVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte bVar26;
  char cVar27;
  undefined2 uVar28;
  int unaff_EBX;
  char *pcVar25;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar29;
  byte *pbVar30;
  uint *unaff_EDI;
  ushort in_ES;
  ushort in_SS;
  ushort in_DS;
  bool bVar31;
  bool bVar32;
  ushort unaff_retaddr;
  char *pcStack_58;
  uint uStack_20;
  ushort uStack_8;
  uint *puStack_4;
  
  bVar31 = false;
                    /* .NET CLR Managed Code */
  pbVar6 = (byte *)(in_EAX + *(int *)param_2);
  do {
    uVar13 = (undefined3)((uint)pbVar6 >> 8);
    cVar4 = (char)pbVar6;
    bVar21 = (byte)param_2;
    if ((POPCOUNT((uint)pbVar6 & 0xff) & 1U) == 0) {
      *pbVar6 = *pbVar6 + cVar4;
      bVar3 = cVar4 + 0x6f;
      pcVar7 = (char *)CONCAT31(uVar13,bVar3);
      pcVar25 = (char *)(unaff_EBX + -1);
      *pcVar7 = *pcVar7 + bVar3;
      *pcVar7 = *pcVar7 + bVar3;
      *pcVar25 = *pcVar25 + bVar21;
      *(byte *)((int)pcVar7 * 2) = *(byte *)((int)pcVar7 * 2) ^ bVar3;
      uVar1 = *(undefined6 *)pcVar7;
      in_ES = (ushort)((uint6)uVar1 >> 0x20);
      pcVar7 = (char *)uVar1;
      *pcVar7 = *pcVar7 + (char)uVar1;
      *unaff_ESI = *unaff_ESI + (char)uVar1;
      pcVar7 = (char *)((uint)pcVar7 | 0x73110008);
      bVar26 = (byte)((uint)pcVar25 >> 8);
      *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar26;
      *param_2 = *param_2 + (char)s;
      pbVar6 = unaff_ESI + (uint)bVar31 * -8 + 4;
      out(*(undefined4 *)unaff_ESI,(short)param_2);
      *pcVar7 = *pcVar7;
      cVar4 = (char)pcVar7;
      *pcVar7 = *pcVar7 + cVar4;
      bVar3 = *(byte *)(unaff_EBP - 0x5a);
      uVar28 = (undefined2)((uint)pcVar25 >> 0x10);
      cVar27 = (char)pcVar25;
      *pcVar7 = *pcVar7 + cVar4;
      cVar4 = cVar4 + '\x02';
      uVar2 = CONCAT31((int3)((uint6)uVar1 >> 8),cVar4);
      s = (byte *)(uVar2 | 0x73110000);
      unaff_ESI = pbVar6 + (uint)bVar31 * -8 + 4;
      out(*(undefined4 *)pbVar6,(short)param_2);
      *s = *s;
      bVar21 = bVar21 | (byte)*unaff_EDI;
      pbVar24 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar21);
      *s = *s + cVar4;
      pcVar7 = (char *)(uVar2 | 0x7b1f1609);
      bVar31 = (unaff_retaddr & 0x400) != 0;
      *(uint *)((int)unaff_EDI + -0x7d) = *(uint *)((int)unaff_EDI + -0x7d) | unaff_EBP;
      bVar5 = (byte)pcVar7;
      *pcVar7 = *pcVar7 + bVar5;
      bVar26 = bVar26 | bVar3 | unaff_ESI[0x19];
      pbVar23 = (byte *)CONCAT22(uVar28,CONCAT11(bVar26,cVar27));
      *pcVar7 = *pcVar7 + bVar5;
      uVar13 = (undefined3)((uint)pcVar7 >> 8);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           pbVar24 + (uint)(0xd2 < bVar5) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      bVar5 = bVar5 + 0x2d ^ *(byte *)CONCAT31(uVar13,bVar5 + 0x2d);
      pcVar7 = (char *)CONCAT31(uVar13,bVar5);
      bVar3 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar5;
      unaff_retaddr = in_ES;
      if (CARRY1(bVar3,bVar5)) {
        *pcVar7 = *pcVar7 + bVar5;
        bVar5 = bVar5 | pcVar7[0x4000019];
        pcVar7 = (char *)CONCAT31(uVar13,bVar5);
        if ('\0' < (char)bVar5) {
          *pcVar7 = *pcVar7 + bVar5;
          piVar8 = (int *)CONCAT31(uVar13,bVar5 + 0x28);
          *piVar8 = (int)piVar8 + (uint)(0xd7 < bVar5) + *piVar8;
          bVar17 = (byte)((uint6)uVar1 >> 8);
          *pbVar23 = *pbVar23 + bVar17;
          uVar20 = CONCAT11((byte)((uint)param_2 >> 8) | bVar26,bVar21);
          pbVar24 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar20);
          puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
          bVar5 = in(uVar20);
          pbVar9 = (byte *)CONCAT31(uVar13,bVar5);
          bVar21 = *pbVar9;
          bVar32 = SCARRY1(*pbVar9,bVar5);
          *pbVar9 = *pbVar9 + bVar5;
          bVar3 = *pbVar9;
          pbVar6 = unaff_ESI;
          uStack_8 = in_ES;
          if (!CARRY1(bVar21,bVar5)) goto code_r0x00402e19;
          *pbVar9 = *pbVar9 + bVar5;
          bVar17 = bVar17 | *pbVar9;
          s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar17,cVar4));
          pcVar7 = (char *)CONCAT31(uVar13,bVar5 + *pbVar9);
          *pbVar23 = *pbVar23 + bVar17;
        }
        uVar13 = (undefined3)((uint)pcVar7 >> 8);
        bVar3 = (byte)pcVar7 | *pbVar24;
        pbVar9 = (byte *)CONCAT31(uVar13,bVar3);
        pbVar6 = unaff_ESI + (uint)bVar31 * -8 + 4;
        out(*(undefined4 *)unaff_ESI,(short)pbVar24);
        LOCK();
        bVar21 = *pbVar9;
        *pbVar9 = bVar3;
        UNLOCK();
        *pbVar24 = *pbVar24 + (char)s;
        piVar8 = (int *)(CONCAT31(uVar13,bVar21) + -0x1b7e07);
        *pbVar24 = *pbVar24 + (char)s;
        iVar15 = (int)s - *(int *)pbVar23;
        bVar21 = *(byte *)((int)unaff_EDI + -0x7a);
        uVar20 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar8 = *(char *)piVar8 + (char)piVar8;
        bVar3 = (char)((uint)iVar15 >> 8) + bVar21 | *(byte *)((int)unaff_EDI + 0x17);
        *(char *)piVar8 = *(char *)piVar8 + (char)piVar8;
        uVar13 = (undefined3)(CONCAT22(uVar20,CONCAT11(bVar3,(byte)iVar15)) >> 8);
        bVar21 = (byte)iVar15 | *pbVar23;
        s = (byte *)CONCAT31(uVar13,bVar21);
        pbVar9 = (byte *)((int)piVar8 + *piVar8);
        pbVar29 = pbVar6;
        if (SCARRY4((int)piVar8,*piVar8)) goto code_r0x00402e0a;
        *s = *s + bVar21;
        *(byte **)pbVar23 = pbVar24 + *(int *)pbVar23;
        piVar8 = (int *)CONCAT31(uVar13,bVar21 + 0x27);
        s = (byte *)CONCAT22(uVar20,CONCAT11(bVar3 + *(byte *)((int)unaff_EDI + -0x79),bVar21));
        *(byte *)piVar8 = (char)*piVar8 + bVar21 + 0x27;
code_r0x00402dff:
        pbVar9 = (byte *)CONCAT22((short)((uint)piVar8 >> 0x10),
                                  CONCAT11((byte)((uint)piVar8 >> 8) | pbVar24[0x2170411],
                                           (byte)piVar8));
        pbVar29 = pbVar6 + (uint)bVar31 * -8 + 4;
        out(*(undefined4 *)pbVar6,(short)pbVar24);
        *pbVar9 = (byte)piVar8;
        *pbVar24 = *pbVar24 + (char)s;
code_r0x00402e0a:
        cRam06180411 = (char)pbVar9;
        *pbVar9 = *pbVar9 - cVar27;
        *pbVar9 = *pbVar9 + (char)pbVar9;
        bVar32 = false;
        bVar3 = (byte)((uint)s >> 8) | bRam052b0603;
        s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar3,(char)s));
        pbVar6 = pbVar29;
code_r0x00402e19:
        if (bVar3 == 0 || bVar32 != (char)bVar3 < '\0') break;
        cRam89280411 = (char)pbVar9;
        *pbVar9 = *pbVar9 + cRam89280411;
        piVar8 = (int *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar9 >> 8) | pbVar24[0x7190411],
                                          cRam89280411));
        *(char *)piVar8 = (char)*piVar8 + cRam89280411;
        cVar4 = (char)s;
        s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                             CONCAT11((byte)((uint)s >> 8) | *pbVar24,cVar4));
        pbVar6 = pbVar6 + *piVar8;
        pbVar9 = (byte *)((int)piVar8 + *piVar8);
        bVar3 = (byte)pbVar9;
        *pbVar9 = *pbVar9 + bVar3;
        *pbVar6 = *pbVar6 + cVar4;
        bVar21 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar3;
        *(uint *)pbVar9 = *(int *)pbVar9 + unaff_EBP + (uint)CARRY1(bVar21,bVar3);
        piVar8 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),*pbVar9);
        *pbVar24 = *pbVar24 + cVar4;
        pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | *pbVar24);
        pbVar9 = pbVar29 + -0x43;
        *pbVar9 = *pbVar9 + (char)((uint)pbVar24 >> 8);
        pbVar24 = pbVar29;
        puVar11 = unaff_EDI;
code_r0x00402e42:
        unaff_EDI = puVar11;
        if (SCARRY4((int)piVar8,*piVar8)) goto code_r0x00402e6e;
        iVar15 = *(int *)((int)piVar8 + *piVar8);
        *pbVar24 = *pbVar24 + (char)s;
        piVar8 = (int *)(iVar15 + -0x8c6f);
        pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar24 >> 8) | pbVar24[-0x3f],
                                            (char)pbVar24));
        pbVar29 = (byte *)((int)piVar8 + *piVar8);
        pbVar9 = pbVar29;
        unaff_EDI = puStack_4;
        in_DS = uStack_8;
        if (SCARRY4((int)piVar8,*piVar8)) goto code_r0x00402e81;
code_r0x00402e5a:
        *pbVar29 = *pbVar29 + (char)pbVar29;
        s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                             CONCAT11((byte)((uint)s >> 8) | *pbVar24,(char)s));
        pbVar9 = pbVar6 + (uint)bVar31 * -8 + 4;
        out(*(undefined4 *)pbVar6,(short)pbVar24);
        pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(char)pbVar24 + (byte)*unaff_EDI);
        pbVar6 = pbVar9 + (uint)bVar31 * -8 + 4;
        out(*(undefined4 *)pbVar9,(short)pbVar24);
        uStack_8 = in_ES;
code_r0x00402e6e:
        uVar13 = (undefined3)((uint)pbVar24 >> 8);
        cVar4 = (char)pbVar24 + (byte)*unaff_EDI;
        pbVar9 = pbVar6 + (uint)bVar31 * -8 + 4;
        out(*(undefined4 *)pbVar6,(short)CONCAT31(uVar13,cVar4));
        pbVar24 = (byte *)CONCAT31(uVar13,cVar4 + (byte)*unaff_EDI);
        pbVar6 = pbVar9 + (uint)bVar31 * -8 + 4;
        out(*(undefined4 *)pbVar9,(short)pbVar24);
        pbVar9 = (byte *)0x0;
        puVar11 = unaff_EDI;
code_r0x00402e81:
        unaff_EDI = puVar11;
        bVar3 = (char)pbVar9 - *pbVar9;
        iVar15 = CONCAT31((int3)((uint)pbVar9 >> 8),bVar3);
        *pbVar23 = *pbVar23 + (char)pbVar24;
        pbVar29 = (byte *)(iVar15 * 2);
        *pbVar29 = *pbVar29 ^ bVar3;
        pbVar29 = (byte *)(int)(short)iVar15;
        *pbVar29 = *pbVar29 + bVar3;
        *(byte *)unaff_EDI = (byte)*unaff_EDI + (byte)s;
        bVar21 = *pbVar29;
        *pbVar29 = *pbVar29 + bVar3;
        *(byte **)(pbVar23 + -0x73) =
             pbVar6 + (uint)CARRY1(bVar21,bVar3) + *(int *)(pbVar23 + -0x73);
        *pbVar29 = *pbVar29 + bVar3;
        bVar21 = (byte)s | *pbVar24;
        s = (byte *)CONCAT31((int3)((uint)s >> 8),bVar21);
        pbVar30 = pbVar6;
        if ((char)bVar21 < '\x01') goto code_r0x00402eb4;
        *pbVar29 = *pbVar29 + bVar3;
        pbVar9 = (byte *)CONCAT31((int3)(char)((uint)pbVar9 >> 8),bVar3 + 0x2d);
        *(byte **)(pbVar6 + (int)unaff_EDI * 8) =
             pbVar24 + (uint)(0xd2 < bVar3) + *(int *)(pbVar6 + (int)unaff_EDI * 8);
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        do {
          bVar21 = *pbVar6;
          bVar3 = (byte)pbVar9;
          *pbVar6 = *pbVar6 + bVar3;
          if (!CARRY1(bVar21,bVar3)) goto code_r0x00402e36;
          *pbVar9 = *pbVar9 + bVar3;
          bVar3 = bVar3 | pbVar9[0x400001a];
          pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar3);
          if ((char)bVar3 < '\x01') {
code_r0x00402ecc:
            *pbVar29 = *pbVar29 + (byte)pbVar29;
            uVar13 = (undefined3)((uint)pbVar29 >> 8);
            bVar21 = (byte)pbVar29 | pbVar29[0x400001b];
            puVar11 = (uint *)CONCAT31(uVar13,bVar21);
            if ((char)bVar21 < '\x01') {
              bVar3 = *pbVar24;
              *pbVar24 = *pbVar24 + (byte)s;
              *(char *)((int)puVar11 * 2) = *(char *)((int)puVar11 * 2) - CARRY1(bVar3,(byte)s);
              bVar32 = 0x81 < bVar21;
              bVar21 = bVar21 + 0x7e;
              goto code_r0x00402ef9;
            }
          }
          else {
            *pbVar29 = *pbVar29 + bVar3;
            pbVar30 = pbVar6;
code_r0x00402eb4:
            uVar13 = (undefined3)((uint)pbVar29 >> 8);
            bVar3 = (char)pbVar29 + 0x6f;
            puVar11 = (uint *)CONCAT31(uVar13,bVar3);
            *puVar11 = uStack_20;
            bVar21 = *pbVar24;
            *pbVar24 = *pbVar24 + (char)s;
            uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
            in_SS = in_ES;
            if (*pbVar24 != 0 && SCARRY1(bVar21,(char)s) == (char)*pbVar24 < '\0') {
              *(byte *)puVar11 = (char)*puVar11 + bVar3;
              bVar5 = (char)pbVar29 + 0x9c;
              pbVar29 = (byte *)CONCAT31(uVar13,bVar5);
              *(byte **)(pbVar30 + (int)unaff_EDI * 8) =
                   pbVar24 + (uint)(0xd2 < bVar3) + *(int *)(pbVar30 + (int)unaff_EDI * 8);
              uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
              bVar21 = *pbVar30;
              *pbVar30 = *pbVar30 + bVar5;
              pbVar6 = pbVar30;
              if (CARRY1(bVar21,bVar5)) goto code_r0x00402ecc;
              goto code_r0x00402e5a;
            }
            pbVar6 = pbVar30 + (uint)bVar31 * -8 + 4;
            out(*(undefined4 *)pbVar30,(short)pbVar24);
          }
          cVar4 = (char)puVar11;
          *(char *)puVar11 = (char)*puVar11 + cVar4;
          uVar13 = (undefined3)((uint)puVar11 >> 8);
          bVar3 = cVar4 + 0x6f;
          puVar11 = (uint *)CONCAT31(uVar13,bVar3);
          *puVar11 = uStack_20;
          bVar21 = *pbVar24;
          *pbVar24 = *pbVar24 + (byte)s;
          uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
          pbVar6[0x1c] = (pbVar6[0x1c] - bVar26) - CARRY1(bVar21,(byte)s);
          *(byte *)puVar11 = (char)*puVar11 + bVar3;
          bVar5 = cVar4 + 0x9c;
          pcVar7 = (char *)CONCAT31(uVar13,bVar5);
          *(byte **)(pbVar6 + (int)unaff_EDI * 8) =
               pbVar24 + (uint)(0xd2 < bVar3) + *(int *)(pbVar6 + (int)unaff_EDI * 8);
          bVar21 = *pbVar6;
          *pbVar6 = *pbVar6 + bVar5;
          if (!CARRY1(bVar21,bVar5)) goto code_r0x00402e7e;
          *pcVar7 = *pcVar7 + bVar5;
          bVar5 = bVar5 | pcVar7[0x400001c];
          pbVar9 = (byte *)CONCAT31(uVar13,bVar5);
          uStack_8 = in_ES;
          if ((char)bVar5 < '\x01') goto code_r0x00402f16;
          *pbVar9 = *pbVar9 + bVar5;
          puVar11 = (uint *)CONCAT31(uVar13,bVar5 + 0x6f);
          while( true ) {
            *puVar11 = uStack_20;
            bVar21 = *pbVar24;
            *pbVar24 = *pbVar24 + (byte)s;
            *(uint *)(pbVar6 + 0x1d) =
                 (*(int *)(pbVar6 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar21,(byte)s);
            bVar21 = (byte)puVar11;
            *(byte *)puVar11 = (char)*puVar11 + bVar21;
            bVar3 = bVar21 + 0x2d;
            pbVar9 = (byte *)CONCAT31((int3)((uint)puVar11 >> 8),bVar3);
            *(byte **)(pbVar6 + (int)unaff_EDI * 8) =
                 pbVar24 + (uint)(0xd2 < bVar21) + *(int *)(pbVar6 + (int)unaff_EDI * 8);
            uStack_20 = CONCAT22((short)(uStack_20 >> 0x10),in_ES);
            bVar21 = *pbVar6;
            *pbVar6 = *pbVar6 + bVar3;
            if (!CARRY1(bVar21,bVar3)) break;
            *pbVar9 = *pbVar9 + bVar3;
code_r0x00402f16:
            bVar21 = (byte)pbVar9 | pbVar9[0x400001d];
            puVar11 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar21);
            uVar2 = unaff_EBP;
            if ((char)bVar21 < '\x01') goto code_r0x00402f3b;
            while( true ) {
              unaff_EBP = uVar2;
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              uVar13 = (undefined3)((uint)puVar11 >> 8);
              cVar4 = (char)puVar11 + 'o';
              puVar10 = (uint *)CONCAT31(uVar13,cVar4);
              *puVar10 = uStack_20;
              cVar14 = (char)s;
              *pbVar24 = *pbVar24 + cVar14;
              uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
              bVar21 = (byte)((uint)pbVar24 >> 8);
              pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                         CONCAT11(bVar21 - *pbVar6,(char)pbVar24));
              if (bVar21 < *pbVar6) break;
              bVar32 = CARRY4((uint)puVar10,*puVar10);
              puVar11 = (uint *)((int)puVar10 + *puVar10);
              if (!SCARRY4((int)puVar10,*puVar10)) {
                bVar32 = CARRY4(unaff_EBP,*puVar11);
                unaff_EBP = unaff_EBP + *puVar11;
              }
              *puVar11 = (*puVar11 - (int)puVar11) - (uint)bVar32;
              *pbVar24 = *pbVar24 + cVar14;
              s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                                   CONCAT11((char)((uint)s >> 8) + *pbVar24,cVar14 - *pbVar24));
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
code_r0x00402f3b:
              cVar14 = (char)pbVar24;
              *pbVar23 = *pbVar23 + cVar14;
              bVar21 = (byte)puVar11;
              *(byte *)((int)puVar11 * 2) = *(byte *)((int)puVar11 * 2) ^ bVar21;
              *(byte *)puVar11 = (byte)*puVar11 + bVar21;
              *(byte *)puVar11 = (byte)*puVar11 + cVar14;
              uVar2 = *puVar11;
              *(byte *)puVar11 = (byte)*puVar11 + bVar21;
              *(byte **)pbVar24 =
                   (byte *)((int)puVar11 + (uint)CARRY1((byte)uVar2,bVar21) + *(int *)pbVar24);
              pcVar7 = (char *)((uint)puVar11 | *unaff_EDI);
              uVar13 = (undefined3)((uint)pcVar7 >> 8);
              cVar4 = (char)pcVar7 + *pcVar7;
              pcVar7 = (char *)CONCAT31(uVar13,cVar4);
              *pcVar7 = *pcVar7 + cVar4;
              cVar4 = cVar4 + *pcVar7;
              piVar8 = (int *)CONCAT31(uVar13,cVar4);
              *(char *)piVar8 = (char)*piVar8 + cVar4;
              iVar15 = LocalDescriptorTableRegister();
              *piVar8 = iVar15;
              bVar21 = *pbVar23;
              bVar18 = (byte)((uint)s >> 8);
              *pbVar23 = *pbVar23 + bVar18;
              iVar15 = *piVar8;
              uVar20 = (undefined2)((uint)s >> 0x10);
              bVar17 = (byte)s;
              *pbVar6 = *pbVar6 + cVar4;
              pbVar9 = pbVar6 + (uint)bVar31 * -8 + 4;
              out(*(undefined4 *)pbVar6,(short)pbVar24);
              *pbVar9 = *pbVar9 + cVar4;
              bVar3 = *pbVar23;
              *pbVar24 = *pbVar24 - bVar26;
              *pbVar9 = *pbVar9 + cVar4;
              pbVar29 = pbVar9 + (uint)bVar31 * -8 + 4;
              out(*(undefined4 *)pbVar9,(short)pbVar24);
              *pbVar29 = *pbVar29 + cVar4;
              bVar5 = *pbVar23;
              *(uint *)(pbVar24 + -0x23) = *(uint *)(pbVar24 + -0x23) & (uint)pbVar29;
              puVar12 = (ushort *)((int)piVar8 + *piVar8);
              if (!SCARRY4((int)piVar8,*piVar8)) {
                *puVar12 = in_SS;
              }
              *(char *)puVar12 = (char)*puVar12 + (char)puVar12;
              uVar22 = CONCAT11((char)((uint)pbVar24 >> 8) + pbVar24[-0x15],cVar14);
              pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),uVar22);
              puVar11 = (uint *)((int)puVar12 + *(int *)puVar12);
              if (!SCARRY4((int)puVar12,*(int *)puVar12)) {
                *(ushort *)puVar11 = in_SS;
              }
              cVar4 = (char)puVar11;
              *(byte *)puVar11 = (byte)*puVar11 + cVar4;
              cVar19 = ((bVar18 - (char)iVar15) - CARRY1(bVar21,bVar18) | bVar3 | bVar5) +
                       (byte)*puVar11;
              s = (byte *)CONCAT22(uVar20,CONCAT11(cVar19,bVar17));
              bVar21 = *pbVar24;
              *pbVar24 = *pbVar24 + bVar17;
              if (CARRY1(bVar21,bVar17)) {
                *(byte *)puVar11 = (byte)*puVar11 + cVar4;
                bVar21 = pbVar24[6];
                *pbVar24 = *pbVar24 + bVar17;
                bVar3 = (cVar19 - *pbVar29) + cRam14730307;
                *(byte *)puVar11 = (byte)*puVar11 + cVar4;
                bVar21 = bVar26 | bVar21 | pbVar24[0x2a];
                uVar2 = *puVar11;
                pbVar6 = (byte *)((int)puVar11 + (uint)CARRY1(bVar3,(byte)*puVar11) + *puVar11);
                *pbVar24 = *pbVar24 + bVar17;
                cVar4 = cVar27 - *pbVar29;
                cVar27 = bVar21 + *(char *)(CONCAT31((int3)(CONCAT22(uVar28,CONCAT11(bVar21,cVar27))
                                                           >> 8),cVar4) + 0x1e);
                *pbVar6 = *pbVar6 + (char)pbVar6;
                uVar13 = (undefined3)((uint)pbVar6 >> 8);
                bVar21 = (char)pbVar6 + 0x2aU & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x2a);
                cVar27 = cVar27 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar27,cVar4)) + 0x1f);
                *pcVar7 = *pcVar7 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x2a);
                cVar27 = cVar27 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar27,cVar4)) + 0x20);
                *pcVar7 = *pcVar7 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x2a);
                cVar27 = cVar27 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar27,cVar4)) + 0x21);
                *pcVar7 = *pcVar7 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x2a);
                cVar27 = cVar27 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar27,cVar4)) + 0x22);
                *pcVar7 = *pcVar7 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x2a);
                bVar3 = bVar3 + (byte)uVar2 + *pcVar7;
                uVar16 = CONCAT22(uVar20,CONCAT11(bVar3,bVar17));
                cVar27 = cVar27 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar27,cVar4)) + 0x25);
                *pcVar7 = *pcVar7 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x2a);
                pcVar25 = (char *)CONCAT22(uVar28,CONCAT11(cVar27 + *(char *)(CONCAT22(uVar28,
                                                  CONCAT11(cVar27,cVar4)) + 0x26),cVar4));
                *pcVar7 = *pcVar7 + bVar21 + 0x2a;
                bVar21 = bVar21 + 0x54 & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                cVar4 = bVar21 + 0x2a;
                pcVar7 = (char *)CONCAT31(uVar13,cVar4);
                if ((POPCOUNT(cVar4) & 1U) == 0) {
                  *pcVar7 = *pcVar7 + cVar4;
                  pbVar6 = (byte *)(CONCAT31(uVar13,bVar21 + 0x4f) + -0x33282610);
                  bVar21 = *pbVar6;
                  bVar5 = (byte)pbVar6;
                  *pbVar6 = *pbVar6 + bVar5;
                  uVar13 = (undefined3)((uint)pbVar6 >> 8);
                  if (!CARRY1(bVar21,bVar5)) {
                    if (!SCARRY1(bVar5,'\0')) {
                      *pbVar6 = *pbVar6 + bVar5;
                      uVar16 = CONCAT22(uVar20,CONCAT11(bVar3 | *pbVar24,bVar17));
                      bVar5 = bVar5 & *pbVar24;
                      *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
                      pcVar7 = (char *)CONCAT31(uVar13,bVar5 + 0x2a);
                      goto code_r0x00403058;
                    }
                    pcVar7 = (char *)CONCAT31(uVar13,bVar5 + *pcVar25);
                    if (SCARRY1(bVar5,*pcVar25) != (char)(bVar5 + *pcVar25) < '\0')
                    goto code_r0x00403072;
                    goto code_r0x0040309a;
                  }
                  bVar21 = bVar5 + *pcVar25;
                  pbVar6 = (byte *)CONCAT31(uVar13,bVar21);
                  if (SCARRY1(bVar5,*pcVar25) == (char)bVar21 < '\0') {
                    pcVar7 = (char *)CONCAT22(uVar20,CONCAT11(bVar3 | *pbVar24,bVar17));
                    *pcVar25 = *pcVar25 + cVar14;
                    *pbVar24 = *pbVar24 ^ bVar21;
                    *(char *)((int)pbVar6 * 2) = *(char *)((int)pbVar6 * 2) + bVar21;
                    goto code_r0x004030df;
                  }
                }
                else {
code_r0x00403058:
                  *pcVar7 = *pcVar7 + (char)pcVar7;
                  uVar13 = (undefined3)((uint)pcVar7 >> 8);
                  bVar21 = (char)pcVar7 + 0x2aU & *pbVar24;
                  *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                  pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x2a);
                  *pcVar7 = *pcVar7 + bVar21 + 0x2a;
                  pcVar7 = (char *)CONCAT31(uVar13,bVar21 + 0x54 & *pbVar24);
code_r0x00403072:
                  cVar4 = (char)pcVar7;
                  *pcVar7 = *pcVar7 + cVar4;
                  uVar13 = (undefined3)((uint)pcVar7 >> 8);
                  pcVar7 = (char *)CONCAT31(uVar13,cVar4 + '*');
                  *pcVar7 = *pcVar7 + cVar4 + '*';
                  bVar21 = cVar4 + 0x54U & *pbVar24;
                  *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                  pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_DS);
                  uVar16 = CONCAT22((short)((uint)uVar16 >> 0x10),
                                    CONCAT11((char)((uint)uVar16 >> 8) +
                                             *(char *)CONCAT31(uVar13,bVar21 + 0x2a),(char)uVar16));
                  pbVar29[0x20a0000] = pbVar29[0x20a0000] - cVar14;
                  pcVar7 = pcStack_58;
code_r0x0040309a:
                  cVar4 = (char)pcVar7;
                  *pcVar7 = *pcVar7 + cVar4;
                  pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_ES);
                  *pcVar7 = *pcVar7 + cVar4;
                  pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar4 + 0x2aU & *pbVar24);
                }
                cVar4 = (char)pbVar6;
                *pbVar6 = *pbVar6 + cVar4;
                uVar13 = (undefined3)((uint)pbVar6 >> 8);
                cVar27 = cVar4 + '*';
                pcVar7 = (char *)CONCAT31(uVar13,cVar27);
                pbVar29[0x20a0000] = pbVar29[0x20a0000] - cVar14;
                *pcVar7 = *pcVar7 + cVar27;
                cVar19 = (char)pcStack_58 - *pbVar29;
                pcVar25 = (char *)CONCAT22((short)((uint)pcStack_58 >> 0x10),
                                           CONCAT11((char)((uint)pcStack_58 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)pcStack_58 >> 8)
                                                                       ,cVar19) + 0x34),cVar19));
                *pcVar7 = *pcVar7 + cVar27;
                bVar21 = cVar4 + 0x54U & *pbVar24;
                *(char *)CONCAT31(uVar13,bVar21) = *(char *)CONCAT31(uVar13,bVar21) + bVar21;
                pbVar6 = (byte *)CONCAT31(uVar13,bVar21 + 0x2a);
                bVar21 = (byte)((uint)uVar16 >> 8);
                pcVar7 = (char *)CONCAT22((short)((uint)uVar16 >> 0x10),
                                          CONCAT11(bVar21 + *pbVar6,(char)uVar16));
                pbVar6 = pbVar6 + (uint)CARRY1(bVar21,*pbVar6) + *(int *)pbVar6;
                *pbVar24 = *pbVar24 + (char)uVar16;
                uVar13 = (undefined3)((uint)pbVar6 >> 8);
                cVar4 = (byte)pbVar6 - *pbVar6;
                piVar8 = (int *)CONCAT31(uVar13,cVar4);
                pbVar29 = pbVar29 + (uint)((byte)pbVar6 < *pbVar6) + *piVar8;
                cVar4 = cVar4 + (char)*piVar8;
                pbVar6 = (byte *)CONCAT31(uVar13,cVar4);
                *pbVar6 = *pbVar6 + cVar4;
code_r0x004030df:
                *pcVar7 = *pcVar7 + cVar14;
                bVar21 = *pbVar6;
                bVar3 = (byte)pbVar6;
                *pbVar6 = *pbVar6 + bVar3;
                *(byte **)(pcVar25 + -0x41) =
                     pbVar29 + (uint)CARRY1(bVar21,bVar3) + *(int *)(pcVar25 + -0x41);
                *pbVar6 = *pbVar6 + bVar3;
                uVar13 = (undefined3)((uint)pbVar6 >> 8);
                bVar3 = bVar3 | *pbVar29;
                *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
                pcVar7 = (char *)CONCAT31(uVar13,bVar3 + 0x7b);
                *pcVar7 = *pcVar7 + bVar3 + 0x7b;
                pbVar29[CONCAT31(uVar13,bVar3 - 8) + -1] =
                     pbVar29[CONCAT31(uVar13,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              pbVar6 = pbVar29 + (uint)bVar31 * -8 + 4;
              out(*(undefined4 *)pbVar29,uVar22);
              uVar2 = unaff_EBP + 1;
              uStack_20 = unaff_EBP;
            }
            bVar21 = cVar4 - (bVar21 < *pbVar6);
            pbVar9 = pbVar6 + (int)unaff_EDI * 2;
            bVar32 = CARRY1(*pbVar9,bVar21);
            *pbVar9 = *pbVar9 + bVar21;
code_r0x00402ef9:
            puVar11 = (uint *)CONCAT31(uVar13,bVar21 - bVar32);
            pbVar9 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
            *pbVar9 = *pbVar9 + (bVar21 - bVar32);
          }
        } while( true );
      }
    }
    else {
      uVar28 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar26 = (byte)((uint)unaff_EBX >> 8) | *(byte *)(unaff_EBP - 0x62);
      iVar15 = CONCAT22(uVar28,CONCAT11(bVar26,(char)unaff_EBX));
      *pbVar6 = *pbVar6 + cVar4;
      cRam00009d7d = cRam00009d7d + bVar21;
      bVar5 = cVar4 + 0x24;
      pcVar7 = (char *)(iVar15 + -0x62);
      *pcVar7 = *pcVar7 + bVar26;
      *(char *)CONCAT31(uVar13,bVar5) = *(char *)CONCAT31(uVar13,bVar5) + bVar5;
      bVar3 = cVar4 + 0x2fU + *s;
      cVar27 = bVar3 + (0xf4 < bVar5);
      cVar4 = cVar27 + *(char *)CONCAT31(uVar13,cVar27) +
              (CARRY1(cVar4 + 0x2fU,*s) || CARRY1(bVar3,0xf4 < bVar5));
      pcVar7 = (char *)CONCAT31(uVar13,cVar4);
      *pcVar7 = *pcVar7 - bVar21;
      *pcVar7 = *pcVar7 + cVar4;
      pbVar23 = param_2 + -*(int *)param_2;
      unaff_ESI[iVar15 * 4] = unaff_ESI[iVar15 * 4] + bVar26;
      pcVar7[unaff_EBP] = pcVar7[unaff_EBP] + cVar4;
      *pbVar23 = *pbVar23 + (char)s;
      pcVar7 = (char *)CONCAT22((short)((uint)pbVar6 >> 0x10),
                                CONCAT11((char)((uint)pbVar6 >> 8) - *pbVar23,cVar4));
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(char)pbVar23 + (byte)*unaff_EDI);
      *pcVar7 = *pcVar7 - (char)((uint)pbVar23 >> 8);
      *pcVar7 = *pcVar7 + cVar4;
      puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
      pbVar23 = (byte *)CONCAT22(uVar28,CONCAT11(bVar26 - *unaff_ESI,(char)unaff_EBX));
      unaff_EBP = unaff_EBP + *(int *)(pbVar23 + (int)s);
    }
    bVar21 = pbVar23[0x18];
    *pcVar7 = *pcVar7 + (char)pcVar7;
    pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar7 >> 8),(char)pcVar7 + 'o');
    cVar4 = (char)s;
    *pbVar24 = *pbVar24 + cVar4;
    bVar3 = *unaff_ESI;
    bVar26 = (byte)((uint)s >> 8);
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + (uint)CARRY1(bVar26,*pbVar6) + *(int *)pbVar6;
    *pbVar24 = *pbVar24 + cVar4;
    unaff_EBX = CONCAT31((int3)(CONCAT22((short)((uint)pbVar23 >> 0x10),
                                         CONCAT11((char)((uint)pbVar23 >> 8) + bVar21,(char)pbVar23)
                                        ) >> 8),((char)pbVar23 - bVar3) - *unaff_ESI);
    bVar21 = *(byte *)((int)unaff_EDI + 0x1a);
    *pbVar6 = *pbVar6 + (char)pbVar6;
    s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar26 + bVar5 + bVar21 | *pbVar24,cVar4)
                        );
    pbVar6 = pbVar6 + *(int *)pbVar24;
    param_2 = pbVar24;
  } while( true );
code_r0x00402e36:
  *s = *s + (char)pbVar24;
  pbVar29 = pbVar24 + 0xa0a0000;
  bVar21 = *pbVar29;
  bVar5 = (byte)s;
  *pbVar29 = *pbVar29 - bVar5;
  bVar3 = (byte)pbVar9 + *pbVar9;
  piVar8 = (int *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar3 + (bVar21 < bVar5));
  puVar11 = unaff_EDI;
  if (CARRY1((byte)pbVar9,*pbVar9) || CARRY1(bVar3,bVar21 < bVar5)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar7 = *pcVar7 + bVar5;
  uStack_8 = in_ES;
  goto code_r0x00402e6e;
}


