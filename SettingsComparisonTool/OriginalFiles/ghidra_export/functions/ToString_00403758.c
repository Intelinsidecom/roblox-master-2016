/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403758
 * Raw Name    : ToString
 * Demangled   : ToString
 * Prototype   : byte * ToString(byte * param_1, uint * param_2)
 * Local Vars  : pbStack_34, pbStack_30, puStack_20, pbStack_10, uVar1, uVar2, pcVar3, uVar4, iVar5, cVar6, bVar7, bVar8, bVar9, bVar10, in_EAX, iVar11, pcVar12, pbVar13, piVar14, pbVar15, pbVar16, pcVar17, pbVar18, pbVar19, uVar20, uVar21, uVar22, puVar23, extraout_ECX, bVar24, uVar25, puVar26, puVar27, uVar28, cVar29, cVar30, cVar31, uVar32, unaff_EBX, uVar33, cVar34, uVar35, unaff_EBP, unaff_ESI, unaff_EDI, in_ES, in_CS, in_SS, in_DS, in_CF, bVar36, in_AF, uVar37, unaff_retaddr, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall ToString(byte *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar3;
  undefined6 uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined3 uVar20;
  byte *in_EAX;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint3 uVar21;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar24;
  undefined2 uVar22;
  undefined3 uVar25;
  uint *puVar23;
  uint *extraout_ECX;
  undefined1 *puVar26;
  uint *puVar27;
  undefined2 uVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  undefined1 uVar32;
  char cVar34;
  uint unaff_EBX;
  uint uVar33;
  undefined2 uVar35;
  char *unaff_EBP;
  byte *unaff_ESI;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined1 in_CF;
  bool bVar36;
  byte in_AF;
  undefined8 uVar37;
  byte *unaff_retaddr;
  byte *pbStack_34;
  byte *pbStack_30;
  uint *puStack_20;
  byte *pbStack_10;
  uint uVar2;
  
  do {
                    /* .NET CLR Managed Code */
    if ((bool)in_CF) {
code_r0x0040375a:
      *in_EAX = *in_EAX + (char)in_EAX;
      bVar36 = CARRY1((byte)((uint)param_1 >> 8),*in_EAX);
      iVar11 = CONCAT31(0x1f0a00,bVar36 + 'o') + *(int *)(unaff_EBP + unaff_EBX) +
               (uint)(0x90 < bVar36) + -1;
      uRam0d0a0000 = uRam0d0a0000 | (uint)param_2;
      pcVar12 = (char *)(CONCAT31((int3)((uint)iVar11 >> 8),(char)iVar11 + -0x66) | *unaff_EDI);
      bVar7 = *(byte *)((int)unaff_EDI + -0x46);
      pcVar17 = (char *)CONCAT22(0xd0a,(ushort)bVar7 << 8);
      *pcVar12 = *pcVar12 + (char)pcVar12;
      puVar26 = (undefined1 *)
                CONCAT22((short)((uint)param_2 >> 0x10),
                         CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBP[unaff_EBX],(byte)param_2));
      *pcVar17 = *pcVar17 + (char)pcVar12;
      *unaff_EBP = *unaff_EBP - bVar7;
      *puVar26 = *puVar26;
      in_EAX = (byte *)(((uint)pcVar12 | 8) + 0x4490f9d8);
      bVar7 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar7;
      param_2 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(byte)param_2 | *unaff_ESI);
      *(uint *)(unaff_ESI + (int)in_EAX) = *(uint *)(unaff_ESI + (int)in_EAX) ^ (uint)pcVar17;
      *in_EAX = *in_EAX | bVar7;
      bVar36 = false;
      uRam2609fffc = in_ES;
      *in_EAX = *in_EAX | bVar7;
      pbVar16 = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
code_r0x004037a7:
      do {
        uVar28 = in_ES;
        uVar33 = unaff_EBX;
        uVar22 = SUB42(param_2,0);
        out(*(undefined4 *)unaff_ESI,uVar22);
        out(*(undefined4 *)(unaff_ESI + 4),uVar22);
        puVar23 = (uint *)((int)unaff_EDI + (int)param_2);
        uVar1 = *puVar23;
        uVar2 = *puVar23;
        *puVar23 = (uint)(in_EAX + uVar2 + bVar36);
        cVar6 = (char)(pbVar16 +
                      (uint)(CARRY4(uVar1,(uint)in_EAX) ||
                            CARRY4((uint)(in_EAX + uVar2),(uint)bVar36)) +
                      *(int *)(pcVar17 + (int)param_2)) + '\t';
        pbVar13 = (byte *)CONCAT31((int3)((uint)(pbVar16 +
                                                (uint)(CARRY4(uVar1,(uint)in_EAX) ||
                                                      CARRY4((uint)(in_EAX + uVar2),(uint)bVar36)) +
                                                *(int *)(pcVar17 + (int)param_2)) >> 8),cVar6);
        out(uRam260a0000,uVar22);
        *pbVar13 = *pbVar13 + cVar6;
        bVar24 = (byte)((uint)pcVar17 >> 8) | (byte)*param_2;
        bVar7 = *pbVar13;
        pbVar13 = pbVar13 + (uint)CARRY1(bVar24,*pbVar13) + *(int *)pbVar13;
        *(byte *)param_2 = (byte)*param_2 + 6;
        cVar29 = (char)uVar33 - cRam260a0004;
        in_ES = CONCAT11(bVar24 + bVar7 + *pbVar13,6);
        pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),in_ES);
        *pbVar13 = *pbVar13;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),uVar28);
        uVar20 = (undefined3)((uint)pbVar13 >> 8);
        cVar6 = (char)pbVar13 - *pbVar13;
        piVar14 = (int *)CONCAT31(uVar20,cVar6);
        unaff_ESI = (byte *)(*piVar14 + 0x260a0004);
        bVar7 = cVar6 + (char)*piVar14;
        in_EAX = (byte *)CONCAT31(uVar20,bVar7);
        *in_EAX = *in_EAX + bVar7;
        *in_EAX = *in_EAX + bVar7;
        *in_EAX = *in_EAX + bVar7;
        bVar36 = CARRY1((byte)*param_2,bVar7);
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        unaff_EBX = CONCAT31((int3)(uVar33 >> 8),cVar29);
      } while (!bVar36);
      *in_EAX = *in_EAX + bVar7;
      pbVar13 = (byte *)CONCAT22((short)(uVar33 >> 0x10),
                                 CONCAT11((byte)(uVar33 >> 8) | bRam080a0056,cVar29));
      *in_EAX = *in_EAX + bVar7;
      bVar8 = bVar7 + 2;
      *pbVar13 = *pbVar13 - (char)param_2;
      *(char *)CONCAT31(uVar20,bVar8) = *(char *)CONCAT31(uVar20,bVar8) + bVar8;
      bVar24 = *unaff_ESI;
      uVar25 = (undefined3)((uint)pcVar17 >> 8);
      puVar23 = (uint *)(CONCAT31(uVar25,bVar24) | 6);
      bVar10 = 9 < (bVar7 + 0x74 & 0xf) | in_AF;
      bVar9 = bVar7 + 0x74 + bVar10 * '\x06';
      bVar9 = bVar9 + (0x90 < (bVar9 & 0xf0) | 0x8d < bVar8 | bVar10 * (0xf9 < bVar9)) * '`';
      pbVar16 = (byte *)CONCAT31(uVar20,bVar9);
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar9;
      if (!SCARRY1(bVar7,bVar9)) {
        *unaff_ESI = *unaff_ESI + bVar9;
        unaff_ESI = unaff_ESI + *(int *)((int)param_2 + 0x33);
        *pbVar16 = *pbVar16 | bVar9;
        *unaff_ESI = *unaff_ESI + bVar9;
        bVar7 = bVar9 + 0x72;
        *(byte *)CONCAT31(uVar20,bVar7) = *(byte *)CONCAT31(uVar20,bVar7) | bVar7;
        *unaff_ESI = *unaff_ESI + bVar7;
        puVar23 = (uint *)CONCAT31(uVar25,(bVar24 | 6) + *unaff_ESI);
        pcVar12 = (char *)CONCAT31(uVar20,bVar9 - 0x11);
        *pcVar12 = *pcVar12 + (bVar9 - 0x11);
        pbVar16 = (byte *)CONCAT31(uVar20,bVar9 - 0xf);
        unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
        *pbVar16 = *pbVar16 + (bVar9 - 0xf);
      }
code_r0x00403825:
      pbVar19 = (byte *)0x80a0000;
      uVar20 = (undefined3)((uint)pbVar16 >> 8);
      cVar6 = (char)pbVar16 + '\x7f';
      pcVar12 = (char *)CONCAT31(uVar20,cVar6);
      *pcVar12 = *pcVar12 + cVar6;
      iVar11 = CONCAT31(uVar20,(char)pbVar16 + -0x7f) + 0x547d;
      cVar6 = (char)iVar11;
      uVar20 = (undefined3)((uint)iVar11 >> 8);
      cVar29 = cVar6 + '*';
      pcVar12 = (char *)CONCAT31(uVar20,cVar29);
      pbVar16 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_ESI);
      cVar30 = (char)pbVar13 - *unaff_ESI;
      uVar22 = (undefined2)((uint)pbVar13 >> 0x10);
      cVar34 = (char)((uint)pbVar13 >> 8) +
               *(char *)(CONCAT31((int3)((uint)pbVar13 >> 8),cVar30) + 0x57);
      *pcVar12 = *pcVar12 + cVar29;
      bVar7 = cVar6 + 0x54U & *pbVar16;
      iVar11 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
      *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
      pcVar12 = (char *)CONCAT31(uVar20,bVar7 + 0x2a);
      pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_DS);
      cVar34 = cVar34 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar34,cVar30)) + 0x58);
      *pcVar12 = *pcVar12 + bVar7 + 0x2a;
      bVar7 = bVar7 + 0x54 & *pbVar16;
      iVar5 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
      *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
      pcVar12 = (char *)CONCAT31(uVar20,bVar7 + 0x2a);
      cVar34 = cVar34 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar34,cVar30)) + 0x55);
      *pcVar12 = *pcVar12 + bVar7 + 0x2a;
      pcVar12 = (char *)CONCAT31(uVar20,bVar7 + 0x57);
      puVar27 = (uint *)(pbVar16 + *(int *)pbStack_10);
      cVar34 = cVar34 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar34,cVar30)) + 0x55);
      *pcVar12 = *pcVar12 + bVar7 + 0x57;
      cVar6 = bVar7 - 0x3a;
      pcVar12 = (char *)CONCAT31(uVar20,cVar6);
      *pcVar12 = *pcVar12 + cVar6;
      uVar1 = *puVar27;
      cVar31 = (char)puVar23;
      pbVar13 = (byte *)CONCAT22(uVar22,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar34,
                                                  cVar30)) + 0x59),cVar30));
      *pcVar12 = *pcVar12 + cVar6;
      bVar10 = bVar7 - 0x10 & (byte)*puVar27;
      unaff_EDI = (uint *)((int)unaff_EDI +
                          CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) +
                          iVar5 + iVar11);
      *(char *)CONCAT31(uVar20,bVar10) = *(char *)CONCAT31(uVar20,bVar10) + bVar10;
      bVar10 = bVar10 + 0x2a;
      pbVar16 = (byte *)CONCAT31(uVar20,bVar10);
      cVar6 = *(char *)((int)unaff_EDI + 0x17);
      *pbVar16 = *pbVar16 + bVar10;
      uVar2 = *puVar27;
      puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_DS);
      cVar29 = *(char *)((int)unaff_EDI + 0x1a);
      *pbVar16 = *pbVar16 + bVar10;
      puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                 CONCAT11((((byte)((uint)puVar23 >> 8) | (byte)uVar1) + cVar6 |
                                          (byte)uVar2) + cVar29 | (byte)*puVar27,cVar31));
      *pbVar13 = *pbVar13 + cVar30;
      *(byte *)((int)pbVar16 * 2) = *(byte *)((int)pbVar16 * 2) ^ bVar10;
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar10;
      bVar24 = *pbVar16;
      *(byte *)puVar23 = (byte)*puVar23 + (char)puVar27;
      bVar7 = ((bVar10 - bVar24) - CARRY1(bVar7,bVar10)) + (byte)*puVar27;
      pbVar16 = (byte *)CONCAT31(uVar20,bVar7);
      param_2 = puStack_20;
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004038f6;
      *pbVar16 = *pbVar16 + bVar7;
      cVar6 = (bVar7 + 0x6f) - (0x90 < bVar7);
      pbVar15 = (byte *)CONCAT31(uVar20,cVar6);
      uVar1 = *puVar27;
      *(byte *)puVar27 = (byte)*puVar27 + cVar31;
      param_2 = puVar27;
      if (SCARRY1((byte)uVar1,cVar31) == (char)(byte)*puVar27 < '\0') {
        cRam33100000 = cRam33100000 - cVar6;
        cVar6 = cVar6 + (byte)*puVar27;
        pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
        goto code_r0x0040390c;
      }
      do {
        *pbVar15 = *pbVar15 + (char)pbVar15;
        while( true ) {
          uVar20 = (undefined3)((uint)pbVar15 >> 8);
          cVar6 = (char)pbVar15 + '\x02';
          pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403908:
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbStack_10);
          cVar6 = (char)pbVar16 + (byte)*param_2;
          pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
code_r0x0040390c:
          cVar29 = (char)pbVar16;
          if ((POPCOUNT(cVar6) & 1U) != 0) {
            *pbStack_10 = *pbStack_10 + cVar29;
            goto code_r0x0040395a;
          }
          *pbVar16 = *pbVar16 + cVar29;
          bVar7 = cVar29 + 2;
          pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
code_r0x00403912:
          bVar36 = (POPCOUNT(bVar7) & 1U) == 0;
          if (!bVar36) goto code_r0x00403967;
          *pbVar16 = *pbVar16 + (char)pbVar16;
code_r0x00403916:
          bVar24 = (char)pbVar16 + 0x6f;
          pbVar15 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar16 >> 8),bVar24);
          bVar7 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar24;
          if (*pbVar15 == 0 || SCARRY1(bVar7,bVar24) != (char)*pbVar15 < '\0')
          goto code_r0x00403979;
          *pbVar15 = *pbVar15 + bVar24;
          pbVar15 = (byte *)CONCAT31((int3)(char)((uint)pbVar16 >> 8),(char)pbVar16 + -100);
          *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
               (byte *)((int)param_2 +
                       (uint)(0xd2 < bVar24) + *(int *)(pbStack_10 + (int)unaff_EDI * 8));
code_r0x00403926:
          *(uint **)pbVar15 = puStack_20;
          bVar7 = *pbStack_10;
          bVar24 = (byte)pbVar15;
          *pbStack_10 = *pbStack_10 + bVar24;
          if (CARRY1(bVar7,bVar24)) {
            *pbVar15 = *pbVar15 + bVar24;
            uVar20 = (undefined3)((uint)pbVar15 >> 8);
            bVar24 = bVar24 | pbVar15[0x400005b];
            pbVar16 = (byte *)CONCAT31(uVar20,bVar24);
            pbVar15 = pbStack_10;
            if ((char)bVar24 < '\x01') goto code_r0x00403991;
            *pbVar16 = *pbVar16 + bVar24;
            cVar6 = bVar24 + 0x28;
            pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
            *(byte **)pbVar16 = pbVar16 + (uint)(0xd7 < bVar24) + *(int *)pbVar16;
            bVar7 = *pbVar13;
            bVar24 = (byte)((uint)puVar23 >> 8);
            *pbVar13 = *pbVar13 + bVar24;
            if (CARRY1(bVar7,bVar24)) {
              *pbVar16 = *pbVar16 + cVar6;
              puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                         CONCAT11(bVar24 | *pbVar16,(char)puVar23));
              *pbStack_10 = *pbStack_10 + cVar6;
              pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                         CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[0x55],
                                                  (char)pbVar13));
              *pbVar16 = *pbVar16 + cVar6;
code_r0x00403950:
              uVar20 = (undefined3)((uint)pbVar16 >> 8);
              bVar24 = (char)pbVar16 + 0x6f;
              bVar7 = *(byte *)CONCAT31(uVar20,bVar24);
              *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
              pbVar16 = (byte *)CONCAT31(uVar20,(bVar24 & bVar7) + *pbStack_10);
              *(byte *)puVar23 = (byte)*puVar23 - (char)((uint)param_2 >> 8);
            }
            goto code_r0x0040395a;
          }
        }
        *pbVar16 = *pbVar16 + cVar6;
        cVar6 = (char)pbVar15 + '.' + (byte)*param_2;
        pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
        if ((POPCOUNT(cVar6) & 1U) != 0) {
          pbVar15 = (byte *)((int)param_2 + (int)pbVar16);
          *pbVar15 = *pbVar15 + cVar6;
          bVar7 = *pbVar15;
          goto code_r0x00403912;
        }
        *pbVar16 = *pbVar16 + cVar6;
        bVar7 = cVar6 + 2;
        pbVar16 = (byte *)CONCAT31(uVar20,bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403916;
        *pbVar16 = *pbVar16 + bVar7;
        cVar29 = cVar6 + 'q';
        piVar14 = (int *)CONCAT31(uVar20,cVar29);
        *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0x90 < bVar7);
        bVar7 = *pbVar13;
        bVar24 = (byte)((uint)puVar23 >> 8);
        *pbVar13 = *pbVar13 + bVar24;
        if (!CARRY1(bVar7,bVar24)) {
          out(*(undefined4 *)pbStack_10,(short)param_2);
          bVar7 = (cVar29 - (char)*piVar14) - CARRY1(bVar7,bVar24);
          *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
          cVar6 = bVar7 - *(byte *)CONCAT31(uVar20,bVar7);
          unaff_ESI = pbStack_10 +
                      ((4 - *(int *)CONCAT31(uVar20,cVar6)) -
                      (uint)(bVar7 < *(byte *)CONCAT31(uVar20,bVar7)));
          pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
          pbStack_10 = (byte *)0;
          goto code_r0x00403825;
        }
        *(char *)piVar14 = (char)*piVar14 + cVar29;
        uVar28 = (undefined2)((uint)pbVar13 >> 0x10);
        bVar7 = (byte)((uint)pbVar13 >> 8) | bRam080a0056;
        *(char *)piVar14 = (char)*piVar14 + cVar29;
        pcVar12 = (char *)CONCAT31(uVar20,cVar6 + 's');
        pbVar13 = (byte *)CONCAT22(uVar28,CONCAT11(bVar7 + *(char *)(CONCAT22(uVar28,CONCAT11(bVar7,
                                                  (char)pbVar13)) + 0x56),(char)pbVar13));
        *pcVar12 = *pcVar12 + cVar6 + 's';
        bVar7 = cVar6 - 0xf;
        *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
        bVar24 = cVar6 + 0x1e;
        pbVar15 = (byte *)CONCAT31(uVar20,bVar24);
        *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
             (byte *)((int)puVar23 +
                     (uint)(0xd2 < bVar7) + *(int *)(pbStack_10 + (int)unaff_EDI * 8));
        uVar28 = *(undefined2 *)pbVar15;
        bVar7 = *pbStack_10;
        *pbStack_10 = *pbStack_10 + bVar24;
        param_2 = puVar23;
        if (CARRY1(bVar7,bVar24)) {
          *pbVar15 = *pbVar15 + bVar24;
          pbVar16 = (byte *)CONCAT31(uVar20,bVar24 | pbVar15[0x400005a]);
          if ('\0' < (char)(bVar24 | pbVar15[0x400005a])) {
code_r0x004038f6:
            bVar7 = (byte)pbVar16;
            *pbVar16 = *pbVar16 + bVar7;
            uVar20 = (undefined3)((uint)pbVar16 >> 8);
            cVar6 = ((bVar7 + 0x28) - *(char *)CONCAT31(uVar20,bVar7 + 0x28)) - (0xd7 < bVar7);
            pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
            bVar7 = *pbVar13;
            bVar24 = (byte)((uint)puVar23 >> 8);
            *pbVar13 = *pbVar13 + bVar24;
            if (CARRY1(bVar7,bVar24)) {
              *pbVar16 = *pbVar16 + cVar6;
              puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                         CONCAT11(bVar24 | *pbVar16,(char)puVar23));
              *pbStack_10 = *pbStack_10 + cVar6;
              goto code_r0x00403908;
            }
            pbVar15 = pbVar16 + -0x6fe1411;
            goto code_r0x00403926;
          }
          goto code_r0x00403950;
        }
      } while( true );
    }
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    if ((byte)*param_2 == 0) {
      unaff_EBX = unaff_EBX & 0xffffff00;
_ctor:
      cVar6 = (char)param_1;
      param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((char)((uint)param_1 >> 8) + *in_EAX,cVar6));
      unaff_EBX = unaff_EBX & 0xffffff00;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      uVar20 = (undefined3)((uint)in_EAX >> 8);
      bVar24 = (char)in_EAX - *in_EAX;
      pbVar16 = (byte *)CONCAT31(uVar20,bVar24);
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar24;
      pbVar16 = unaff_ESI + (uint)CARRY1(bVar7,bVar24) + *(int *)pbVar16;
      in_EAX = (byte *)CONCAT31(uVar20,bVar24);
      unaff_ESI = pbVar16 + 4;
      out(*(undefined4 *)pbVar16,(short)param_2);
      *in_EAX = *in_EAX + bVar24;
      *param_1 = *param_1;
      bVar7 = *in_EAX;
      *in_EAX = *in_EAX + bVar24;
      *(int *)(unaff_EBX - 0x49) =
           (int)(unaff_ESI + (uint)CARRY1(bVar7,bVar24) + *(int *)(unaff_EBX - 0x49));
      goto code_r0x0040375a;
    }
    bVar7 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar7;
    *param_2 = (uint)(unaff_EBP + *param_2);
    unaff_ESI = unaff_ESI + 1;
    bVar24 = (byte)param_2;
    bVar10 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x33);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar10,bVar24));
    in_ES = SUB42(unaff_retaddr,0);
    in_EAX[0x6f] = in_EAX[0x6f] + bVar10;
    pbVar16 = (byte *)((uint)param_1 & 0xffffff00);
    *(byte *)param_2 = (byte)*param_2;
    if ((byte)*param_2 != 0) {
      *in_EAX = *in_EAX + bVar7;
      uVar1 = *param_2;
      *param_2 = (uint)(unaff_EBP + *param_2);
      if (CARRY4(uVar1,(uint)unaff_EBP)) {
        *in_EAX = *in_EAX + bVar7;
        puVar23 = param_2 + 0x1d028000;
        uVar1 = *puVar23;
        *(byte *)puVar23 = (byte)*puVar23 - bVar10;
        *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)((byte)uVar1 < bVar10);
        *(byte *)param_2 = (byte)*param_2 + bVar7;
        *unaff_EBP = *unaff_EBP;
        in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7 + 0x2a);
        param_1 = pbVar16;
        unaff_retaddr = unaff_ESI;
        goto _ctor;
      }
      bVar36 = false;
      pcVar17 = (char *)CONCAT31((int3)((uint)param_1 >> 8),*in_EAX);
      pbVar16 = unaff_ESI;
      goto code_r0x004037a7;
    }
    bVar10 = *in_EAX;
    *in_EAX = *in_EAX + bVar7;
    *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)CARRY1(bVar10,bVar7);
    in_CF = CARRY1(*pbVar16,bVar24);
    *pbVar16 = *pbVar16 + bVar24;
    param_1 = pbVar16;
  } while( true );
code_r0x0040395a:
  *pbVar16 = *pbVar16 + (char)pbVar16;
  *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar23;
  pbVar13 = (byte *)((uint)pbVar13 | (uint)pbStack_10);
  cVar6 = (char)pbVar16 + '\x02';
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
  bVar36 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403967:
  if (!bVar36) goto code_r0x004039be;
  *pbVar16 = *pbVar16 + (char)pbVar16;
  uVar20 = (undefined3)((uint)pbVar16 >> 8);
  bVar7 = (char)pbVar16 + 0x6f;
  bVar7 = bVar7 & *(byte *)CONCAT31(uVar20,bVar7);
  pbVar15 = (byte *)CONCAT31(uVar20,bVar7);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar7;
code_r0x00403979:
  bVar7 = (char)pbVar15 - (char)*unaff_EDI;
  bVar36 = bVar7 < (byte)*puVar23;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7 - (byte)*puVar23);
  do {
    cVar6 = (char)pbVar16;
    *pbVar16 = *pbVar16 + cVar6 + bVar36;
    *pbVar16 = *pbVar16 + cVar6;
    *(byte *)puVar23 = (byte)*puVar23 + (char)param_2;
    *(byte *)((int)puVar23 + 0x101c00aa) = *(byte *)((int)puVar23 + 0x101c00aa) + (char)pbVar13;
    *pbVar16 = *pbVar16 + cVar6;
    *(byte **)pbStack_10 = pbVar13 + *(int *)pbStack_10;
    bVar7 = (byte)((uint)puVar23 >> 8);
    puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                               CONCAT11(bVar7 + *pbVar16,(char)puVar23));
    pbVar16 = pbVar16 + (uint)CARRY1(bVar7,*pbVar16) + *(int *)pbVar16;
    pbVar15 = pbStack_10;
code_r0x00403991:
    cVar6 = (char)puVar23;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    cVar29 = (char)pbVar13 - pbVar15[2];
    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar29);
    pbStack_10 = pbVar15;
    if ((POPCOUNT(cVar29) & 1U) != 0) goto code_r0x0040395a;
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    uVar21 = (uint3)((uint)pbVar16 >> 8);
    bVar7 = (byte)pbVar16 | *pbVar13;
    piVar14 = (int *)CONCAT31(uVar21,bVar7);
    bVar24 = (byte)((uint)puVar23 >> 8);
    bVar10 = (byte)param_2;
    if (bVar7 == 0) {
      *(char *)piVar14 = (char)*piVar14;
      pbStack_10 = pbVar15 + 4;
      out(*(undefined4 *)pbVar15,(short)param_2);
      pbVar16 = (byte *)((uint)uVar21 << 8);
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar10 - *pbVar13);
      *pbVar13 = *pbVar13;
      *(byte *)param_2 = (byte)*param_2 + bVar24;
      *pbVar16 = *pbVar16;
      *pbVar13 = *pbVar13 + cVar29;
      *pbVar16 = *pbVar16;
      *(byte **)(pbVar13 + -0x3d) = pbStack_10 + *(int *)(pbVar13 + -0x3d);
      break;
    }
    pbVar19 = pbVar19 + -unaff_EDI[9];
    *(byte *)piVar14 = (char)*piVar14 + bVar7;
    puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                               CONCAT11(bVar24 | (byte)*param_2,cVar6));
    pbStack_10 = pbVar15 + *piVar14;
    pcVar12 = (char *)((int)piVar14 + *piVar14);
    bVar24 = (char)pcVar12 - *pcVar12;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar24);
    bVar7 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar24;
    pbVar16 = pbVar16 + (-(uint)CARRY1(bVar7,bVar24) - *(int *)pbVar16);
    bVar36 = CARRY1((byte)*puVar23,bVar10);
    *(byte *)puVar23 = (byte)*puVar23 + bVar10;
  } while (!bVar36);
  *pbVar16 = *pbVar16 + (char)pbVar16;
  puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(byte)puVar23 | (byte)*param_2);
code_r0x004039be:
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar19 + -0x3c));
  *pbVar16 = *pbVar16 + (byte)pbVar16;
  uVar20 = (undefined3)((uint)pbVar16 >> 8);
  bVar7 = (byte)pbVar16 | (byte)*param_2;
  pcVar12 = (char *)CONCAT31(uVar20,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) goto code_r0x004039c8;
  cVar6 = *pcVar12;
  *pcVar12 = *pcVar12 + bVar7;
  cVar29 = *pcVar12;
  if (!SCARRY1(cVar6,bVar7)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar12 = *pcVar12 + bVar7;
  *pbStack_10 = *pbStack_10 + 1;
  uVar4 = *(undefined6 *)CONCAT31(uVar20,bVar7 + 6);
  pbVar15 = (byte *)uVar4;
  uVar1 = *param_2;
  bVar7 = (byte)puVar23;
  *(byte *)param_2 = (byte)*param_2 + bVar7;
  if (!CARRY1((byte)uVar1,bVar7)) goto code_r0x00403979;
  *pbVar15 = *pbVar15 + (char)uVar4;
  bVar10 = (byte)((uint)puVar23 >> 8) | *pbVar15;
  uVar22 = CONCAT11(bVar10,bVar7);
  pbVar15 = pbVar15 + -*(int *)pbVar15;
  bVar24 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar10;
  if (CARRY1(bVar24,bVar10)) {
    cVar6 = (char)pbVar15;
    *pbVar15 = *pbVar15 + cVar6;
    uVar1 = *param_2;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - pbVar13[-0x3a],(char)param_2));
    *pbVar15 = *pbVar15 + cVar6;
    uVar35 = (undefined2)((uint)pbVar13 >> 0x10);
    bVar24 = (byte)((uint)pbVar13 >> 8) | *(byte *)((int)param_2 + 0x32);
    pcVar12 = (char *)CONCAT22(uVar35,CONCAT11(bVar24,(char)pbVar13));
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_CS);
    cVar29 = cVar6 + *pcVar12 + '-';
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar29);
    *pbVar15 = *pbVar15;
    uVar2 = *param_2;
    cVar31 = (char)pbVar13 - *pbStack_10;
    cVar6 = *(char *)((int)unaff_EDI + 0x17);
    *pbVar15 = *pbVar15 + cVar29;
    uVar22 = CONCAT11((bVar10 | (byte)uVar1) + cVar6 | (byte)*param_2,bVar7 - (byte)uVar2);
    pbVar13 = (byte *)CONCAT22(uVar35,CONCAT11(bVar24 + *(char *)(CONCAT31((int3)((uint)pcVar12 >> 8
                                                                                 ),cVar31) + 0x4e),
                                               cVar31));
    *pbVar15 = *pbVar15 + cVar29;
  }
  puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),uVar22);
  bVar7 = (byte)pbVar15;
  uVar20 = (undefined3)((uint)pbVar15 >> 8);
  pcVar12 = (char *)CONCAT31(uVar20,bVar7 + 0x28);
  *pcVar12 = (*pcVar12 - (bVar7 + 0x28)) - (0xd7 < bVar7);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar22;
  bVar24 = bVar7 + 0x1b;
  pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                             CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[0x4f],(char)pbVar13));
  *(char *)CONCAT31(uVar20,bVar24) = *(char *)CONCAT31(uVar20,bVar24) + bVar24;
  pcVar17 = (char *)CONCAT31(uVar20,bVar7 + 0x43);
  *pcVar17 = (*pcVar17 - (bVar7 + 0x43)) - (0xd7 < bVar24);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar22;
  pcVar12 = pcVar17 + -0x6b721c;
  pcVar17 = pcVar17 + -0x6b721a;
  *pcVar17 = *pcVar17 + (char)((uint)param_2 >> 8);
  cVar29 = *pcVar17;
code_r0x00403a22:
  if ((POPCOUNT(cVar29) & 1U) == 0) {
code_r0x00403a24:
    cVar6 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar6;
    uVar20 = (undefined3)((uint)pcVar12 >> 8);
    bVar7 = cVar6 + 2;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
      piVar14 = (int *)CONCAT31(uVar20,cVar6 + '*');
      *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0xd7 < bVar7);
      uVar1 = *param_2;
      bVar10 = (byte)puVar23;
      *(byte *)param_2 = (byte)*param_2 + bVar10;
      out(*(undefined4 *)pbStack_10,(short)param_2);
      bVar24 = ((cVar6 + '*') - (char)*piVar14) - CARRY1((byte)uVar1,bVar10);
      pbVar16 = (byte *)CONCAT31(uVar20,bVar24);
      *(byte *)param_2 = (byte)*param_2 + bVar10;
      uVar22 = (undefined2)((uint)pbVar13 >> 0x10);
      uVar32 = SUB41(pbVar13,0);
      cVar6 = (char)((uint)pbVar13 >> 8) - pbStack_10[0x1f];
      pbVar13 = (byte *)CONCAT22(uVar22,CONCAT11(cVar6,uVar32));
      *pbVar16 = *pbVar16 + bVar24;
      uVar1 = *param_2;
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar24;
      pbStack_10 = pbStack_10 + ((4 - *(int *)pbVar16) - (uint)CARRY1(bVar7,bVar24));
      pbVar16 = (byte *)CONCAT31(uVar20,bVar24);
      puVar23 = (uint *)(CONCAT22((short)((uint)puVar23 >> 0x10),
                                  CONCAT11((byte)((uint)puVar23 >> 8) | (byte)uVar1,bVar10)) + -1);
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar24;
      bVar7 = (bVar24 - *pbVar16) - CARRY1(bVar7,bVar24);
      *(byte *)puVar23 = *(byte *)puVar23 + (char)param_2;
      bVar36 = CARRY1(bVar7,(byte)*param_2);
      bVar7 = bVar7 + (byte)*param_2;
      pbVar16 = (byte *)CONCAT31(uVar20,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar16 = *pbVar16 + bVar7;
        cVar29 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pbVar15 = (byte *)CONCAT31(uVar20,cVar29);
        uVar1 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
        if (SCARRY1((byte)uVar1,(char)puVar23) == (char)(byte)*param_2 < '\0')
        goto code_r0x00403aaf;
        *pbVar15 = *pbVar15 + cVar29;
        pcVar12 = (char *)CONCAT31(uVar20,cVar29 + '\x02');
        bVar24 = cVar6 + pbVar13[0x52];
        pbVar13 = (byte *)CONCAT22(uVar22,CONCAT11(bVar24,uVar32));
        *pcVar12 = *pcVar12 + cVar29 + '\x02';
        bVar7 = cVar29 + 4;
        pbVar15 = (byte *)CONCAT31(uVar20,bVar7);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pbVar15 = *pbVar15 + bVar7;
          cVar6 = (cVar29 + 's') - (0x90 < bVar7);
          pcVar12 = (char *)CONCAT31(uVar20,cVar6);
          bVar7 = (byte)((uint)puVar23 >> 8);
          bVar36 = CARRY1(*pbVar13,bVar7);
          *pbVar13 = *pbVar13 + bVar7;
          pbVar16 = pbStack_10;
          if (bVar36) {
            *pcVar12 = *pcVar12 + cVar6;
            pbVar13 = (byte *)CONCAT22(uVar22,CONCAT11(bVar24 | pbVar19[0x5c],uVar32));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar15);
        pbVar13 = (byte *)CONCAT22(uVar22,CONCAT11(bVar24 + pbVar13[0x52],uVar32));
code_r0x00403abf:
        *pbVar15 = *pbVar15 + (char)pbVar15;
        cVar6 = (char)pbVar15 + '\x02';
        pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar6);
        bVar36 = (POPCOUNT(cVar6) & 1U) == 0;
        pbStack_30 = pbVar19;
        if (!bVar36) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar36) {
          *pbVar16 = *pbVar16 + (byte)pbVar16;
          bVar7 = (byte)pbVar16 | pbVar16[0x400005e];
          pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
          pbStack_30 = pbVar19;
          if ((char)bVar7 < '\x01') goto code_r0x00403b0b;
          *pbVar15 = *pbVar15 + bVar7;
code_r0x00403aaf:
          cVar6 = (char)pbVar15 + '(';
          pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar6);
          *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
          bVar7 = *pbVar13;
          bVar24 = (byte)((uint)puVar23 >> 8);
          *pbVar13 = *pbVar13 + bVar24;
          pbVar18 = pbVar19;
          if (!CARRY1(bVar7,bVar24)) goto code_r0x00403ad8;
          *pbVar15 = *pbVar15 + cVar6;
          puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                     CONCAT11(bVar24 | *pbVar13,(char)puVar23));
          if ((POPCOUNT((byte)*param_2 - cVar6) & 1U) != 0) {
            *pbStack_10 = *pbStack_10 + cVar6;
            pbStack_30 = pbVar19;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                   CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[0x53],(char)pbVar13
                                           ));
      }
      bVar7 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      cVar6 = (bVar7 + 0x6f) - (0x90 < bVar7);
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
      bVar7 = *pbVar13;
      cVar29 = (char)((uint)puVar23 >> 8);
      *pbVar13 = *pbVar13 + cVar29;
      pbStack_30 = pbVar19;
      if (*pbVar13 == 0 || SCARRY1(bVar7,cVar29) != (char)*pbVar13 < '\0') goto code_r0x00403b2c;
      *pcVar12 = *pcVar12 + cVar6;
    }
    else {
      cVar6 = bVar7 + (byte)*param_2;
      pcVar12 = (char *)CONCAT31(uVar20,cVar6);
      pbVar16 = pbStack_10;
      if ((POPCOUNT(cVar6) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
         (byte *)((int)param_2 +
                 (uint)(0xd2 < (byte)pcVar12) + *(int *)(pbStack_10 + (int)unaff_EDI * 8));
    pbVar15 = pbVar19;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)pcVar12 + 0x2d);
code_r0x00403ad8:
    pbStack_30 = pbVar18;
    bVar7 = *pbVar15;
    bVar24 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar24;
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,uVar28);
    if (!CARRY1(bVar7,bVar24)) goto code_r0x00403afc;
    *pbVar15 = *pbVar15 + bVar24;
    bVar24 = bVar24 | pbVar15[0x400005d];
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar24);
    pbVar16 = pbStack_10;
    if ((char)bVar24 < '\x01') {
      *pbVar15 = *pbVar15 + bVar24;
      puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                 CONCAT11((byte)((uint)puVar23 >> 8) | (byte)*param_2,(char)puVar23)
                                );
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                 CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[-0x39],(char)pbVar13)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar15 = *pbVar15 + (char)pbVar15;
    cVar6 = (char)pbVar15 + '(';
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar6);
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar7 = *pbVar13;
    bVar24 = (byte)((uint)puVar23 >> 8);
    *pbVar13 = *pbVar13 + bVar24;
    pbStack_10 = pbVar16;
    if (!CARRY1(bVar7,bVar24)) goto code_r0x00403b0b;
    *pbVar15 = *pbVar15 + cVar6;
  }
  else {
    uVar1 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
    if (SCARRY1((byte)uVar1,(char)puVar23) == (char)(byte)*param_2 < '\0') {
      pbVar15 = pbVar19;
      pbVar18 = (byte *)(pcVar12 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '\x02');
    pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                               CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[0x54],(char)pbVar13));
    pbVar16 = pbStack_10;
code_r0x00403a7d:
    cVar6 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar6;
    uVar20 = (undefined3)((uint)pcVar12 >> 8);
    cVar29 = cVar6 + '-';
    pbVar18 = (byte *)CONCAT31(uVar20,cVar29);
    pbVar15 = pbVar19;
    pbStack_10 = pbVar16;
    if ((POPCOUNT(cVar29 - (byte)*param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar18 = *pbVar18 + cVar29;
    bVar7 = cVar6 + 0x2f;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      uVar1 = *param_2;
      *(byte *)param_2 = (byte)*param_2 + (byte)puVar23;
      *pbVar19 = *pbVar19 - CARRY1((byte)uVar1,(byte)puVar23);
      pbVar15 = (byte *)CONCAT31(uVar20,cVar6 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
    bVar36 = 0x90 < bVar7;
    pcVar12 = (char *)CONCAT31(uVar20,cVar6 + -0x62);
code_r0x00403a8f:
    uVar20 = (undefined3)((uint)pcVar12 >> 8);
    bVar24 = (char)pcVar12 - bVar36;
    pbVar15 = (byte *)CONCAT31(uVar20,bVar24);
    bVar7 = *pbVar13;
    cVar6 = (char)((uint)puVar23 >> 8);
    *pbVar13 = *pbVar13 + cVar6;
    pbStack_30 = pbVar19;
    pbStack_10 = pbVar16;
    if (*pbVar13 != 0 && SCARRY1(bVar7,cVar6) == (char)*pbVar13 < '\0') {
      *pbVar15 = *pbVar15 + bVar24;
      pbStack_10 = (byte *)CONCAT31(uVar20,bVar24 + 0x2d);
      *(byte **)(pbVar16 + (int)unaff_EDI * 8) =
           (byte *)((int)param_2 + (uint)(0xd2 < bVar24) + *(int *)(pbVar16 + (int)unaff_EDI * 8));
      bVar36 = CARRY1(*pbVar16,(byte)pbVar16);
      *pbVar16 = *pbVar16 + (byte)pbVar16;
      goto code_r0x00403aa1;
    }
  }
  puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                             CONCAT11((byte)((uint)puVar23 >> 8) | *pbVar15,(char)puVar23));
  *pbStack_10 = *pbStack_10 + (char)pbVar15;
code_r0x00403afc:
  pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                             CONCAT11((char)((uint)pbVar13 >> 8) + pbVar13[0x55],(char)pbVar13));
  *pbVar15 = *pbVar15 + (char)pbVar15;
  uVar20 = (undefined3)((uint)pbVar15 >> 8);
  bVar24 = (char)pbVar15 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar20,bVar24);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
  pbVar15 = (byte *)CONCAT31(uVar20,(bVar24 & bVar7) + *pbStack_10);
  *(byte *)puVar23 = (byte)*puVar23 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar15 = *pbVar15 + (byte)pbVar15;
    bVar7 = (byte)pbVar15 | *pbVar13;
    piVar14 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7);
    if (bVar7 != 0) {
      pbStack_30 = pbStack_30 + -unaff_EDI[9];
      *(byte *)piVar14 = (char)*piVar14 + bVar7;
      puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                 CONCAT11((byte)((uint)puVar23 >> 8) | (byte)*param_2,(char)puVar23)
                                );
      pbStack_34 = pbStack_34 + *piVar14;
      pcVar12 = (char *)((int)piVar14 + *piVar14);
      uVar20 = (undefined3)((uint)pcVar12 >> 8);
      bVar24 = (char)pcVar12 - *pcVar12;
      pbVar16 = (byte *)CONCAT31(uVar20,bVar24);
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar24;
      piVar14 = (int *)CONCAT31(uVar20,bVar24 - CARRY1(bVar7,bVar24));
    }
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    pbStack_10 = pbStack_34 + 4;
    out(*(undefined4 *)pbStack_34,(short)param_2);
    pbVar15 = (byte *)(((uint)piVar14 >> 8) * 0x100);
    *(byte *)param_2 = (byte)*param_2 + (byte)puVar23;
    bVar7 = (char)param_2 - *pbVar13;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar7);
    *pbVar13 = *pbVar13;
    *(byte *)param_2 = (byte)*param_2 + (char)((uint)puVar23 >> 8);
    *pbVar15 = *pbVar15;
    pcVar12 = (char *)(((uint)piVar14 >> 8) * 0x200);
    *pcVar12 = *pcVar12 + (char)pbVar13;
    bVar36 = CARRY1((byte)*puVar23,bVar7);
    *(byte *)puVar23 = (byte)*puVar23 + bVar7;
    pbStack_34 = pbStack_10;
    if (bVar36) break;
    while( true ) {
      *(byte **)pbVar15 = pbVar15 + (uint)bVar36 + *(int *)pbVar15;
      unaff_EDI = unaff_EDI + 1;
      pbVar15[(int)param_2] = pbVar15[(int)param_2] + (char)pbVar13;
      *pbVar15 = *pbVar15 + (char)pbVar15;
      *(byte **)pbStack_34 = pbVar13 + *(int *)pbStack_34;
      bVar7 = (byte)((uint)puVar23 >> 8);
      cVar6 = (char)puVar23;
      puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),CONCAT11(bVar7 + *pbVar15,cVar6));
      pbVar15 = pbVar15 + (uint)CARRY1(bVar7,*pbVar15) + *(int *)pbVar15;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      cVar6 = (char)pbVar13 - pbStack_34[2];
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar6);
      pbStack_10 = pbStack_34;
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar15 = *pbVar15 + (char)pbVar15;
      *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar23;
      pbVar13 = (byte *)((uint)pbVar13 | (uint)pbStack_10);
      cVar6 = (char)pbVar15 + '\x02';
      pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar6);
      bVar36 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403b18:
      bVar7 = (byte)pbVar16;
      uVar20 = (undefined3)((uint)pbVar16 >> 8);
      if (!bVar36) {
        *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
        pbVar15 = (byte *)CONCAT31(uVar20,bVar7 | *pbStack_10);
code_r0x00403b73:
        pbVar16 = (byte *)((int)unaff_EDI + *(int *)(pbStack_30 + -0x37));
        *pbVar15 = *pbVar15 + (byte)pbVar15;
        uVar20 = (undefined3)((uint)pbVar15 >> 8);
        bVar7 = (byte)pbVar15 | (byte)*param_2;
        pcVar12 = (char *)CONCAT31(uVar20,bVar7);
        uVar37 = CONCAT44(param_2,pcVar12);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pcVar12 = *pcVar12 + bVar7;
          *pbStack_10 = *pbStack_10 + 1;
          return (byte *)CONCAT31(uVar20,bVar7 + 6);
        }
        bVar7 = *pbStack_10;
        *pbStack_10 = *pbStack_10 + 1;
        pcVar3 = (code *)swi(4);
        if (SCARRY1(bVar7,'\x01')) {
          uVar37 = (*pcVar3)();
          puVar23 = extraout_ECX;
        }
        pbVar19 = (byte *)uVar37;
        *pbVar19 = *pbVar19 + (char)uVar37;
        cVar29 = (char)((ulonglong)uVar37 >> 0x20);
        puVar27 = (uint *)CONCAT22((short)((ulonglong)uVar37 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar37 >> 0x28) | pbVar13[0x2f],cVar29
                                           ));
        *pbVar19 = *pbVar19 + (char)uVar37;
        cVar6 = (char)puVar23;
        bVar10 = (byte)((uint)puVar23 >> 8) | *pbVar19;
        pbVar19 = pbVar19 + *(int *)pbVar19;
        bVar7 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar10;
        bVar24 = (byte)pbVar19;
        if (CARRY1(bVar7,bVar10)) {
          *pbVar19 = *pbVar19 + bVar24;
          bVar10 = bVar10 | (byte)*puVar27;
          *pbVar13 = *pbVar13 - cVar29;
          *pbVar19 = *pbVar19 + bVar24;
          uVar20 = (undefined3)((uint)pbVar19 >> 8);
          bVar24 = bVar24 | (byte)*puVar27;
          piVar14 = (int *)CONCAT31(uVar20,bVar24);
          pbStack_30 = pbStack_30 + *piVar14;
          *(byte *)piVar14 = (char)*piVar14 + bVar24;
          cVar29 = (char)pbVar13 - *pbStack_10;
          pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                     CONCAT11((char)((uint)pbVar13 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar13 >> 8),cVar29)
                                                       + 0x5f),cVar29));
          *(byte *)piVar14 = (char)*piVar14 + bVar24;
          bVar7 = bVar24 + 0x2a & (byte)*puVar27;
          pbVar16 = pbVar16 + *(int *)(pbStack_30 + 0x5f);
          *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
          pbVar19 = (byte *)CONCAT31(uVar20,bVar7 + 0x2a);
          *(byte *)puVar27 = (byte)*puVar27 + 0x28;
          *pbVar19 = *pbVar19 + bVar7 + 0x2a;
        }
        else {
          *pbStack_10 = *pbStack_10 + bVar24;
        }
        pcVar12 = (char *)CONCAT22((short)((uint)puVar23 >> 0x10),CONCAT11(bVar10,cVar6));
        *pbStack_30 = *pbStack_30 - bVar10;
        *(byte *)puVar27 = (byte)*puVar27 + cVar6;
        bVar7 = (byte)pbVar19 - 0xb;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar7);
        if (10 < (byte)pbVar19) {
          *pbVar15 = *pbVar15 | bVar7;
          return pbVar15;
        }
        *(byte *)puVar27 = (byte)*puVar27 + cVar6;
        do {
          bVar7 = pbVar13[-0x23];
          bVar10 = (byte)pbVar15;
          *pbVar15 = *pbVar15 + bVar10;
          bVar24 = pbStack_30[-0x22];
          *pbVar15 = *pbVar15 + bVar10;
          uVar20 = (undefined3)((uint)pbVar15 >> 8);
          bVar10 = bVar10 | *pbStack_10;
          pbVar19 = (byte *)CONCAT31(uVar20,bVar10);
          cVar29 = (char)pbVar13 - *pbStack_10;
          pbVar13 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar13 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar13 >> 8) + bVar7 |
                                                              bVar24,(char)pbVar13)) >> 8),cVar29);
          cVar6 = (char)pcVar12;
          pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                     CONCAT11((char)((uint)pcVar12 >> 8) + *pbVar19,cVar6));
          *(byte *)puVar27 = (byte)*puVar27 + cVar6;
          bVar24 = bVar10 - *pbVar19;
          pbVar15 = (byte *)CONCAT31(uVar20,bVar24);
          pbStack_10 = pbStack_10 + (-(uint)(bVar10 < *pbVar19) - *(int *)pbVar15);
          puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),(char)puVar27 * '\x02');
          *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
          *pbVar16 = *pbVar16 + cVar29;
          bVar7 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar24;
          *puVar27 = (uint)(pbVar15 + (uint)CARRY1(bVar7,bVar24) + *puVar27);
        } while ((POPCOUNT(*puVar27 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar15 = *pbVar15 + (char)pbVar15;
        pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)pcVar12 | pbVar15[(int)pcVar12])
        ;
        bVar36 = false;
        pbVar15 = (byte *)((uint)pbVar15 & 0xffffff00);
        do {
          pbVar16 = pbVar16 + (-(uint)bVar36 - *(int *)pbVar13);
          pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pcVar12);
          *pcVar17 = *pcVar17 + *pcVar12;
          pbVar15 = (byte *)CONCAT31((int3)((uint)(pcVar17 +
                                                  (pbStack_10[0x2000001] <
                                                  (byte)((uint)pcVar12 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar17 +
                                            (pbStack_10[0x2000001] < (byte)((uint)pcVar12 >> 8)) +
                                            0xda7d) | (byte)*puVar27) + 0x7d);
          pcVar12 = pcVar12 + -1;
          *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar12;
          while( true ) {
            uVar25 = (undefined3)((uint)puVar27 >> 8);
            cVar6 = (char)puVar27 + *(char *)((int)pbVar16 * 2 + 0xa0000e1);
            puVar27 = (uint *)CONCAT31(uVar25,cVar6);
            bVar36 = CARRY1((byte)pbVar15,(byte)*puVar27);
            uVar20 = (undefined3)((uint)pbVar15 >> 8);
            bVar7 = (byte)pbVar15 + (byte)*puVar27;
            pbVar15 = (byte *)CONCAT31(uVar20,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *pbVar15 = *pbVar15 + bVar7;
            cVar29 = (char)pcVar12;
            pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar12 >> 8) | pbVar16[-0x65],cVar29))
            ;
            bVar24 = *pbVar15;
            *pbVar15 = *pbVar15 + bVar7;
            if (CARRY1(bVar24,bVar7)) {
              *pbVar15 = *pbVar15 + bVar7;
              pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar13 >> 8) | pbStack_30[-0x1d],
                                                  (char)pbVar13));
              *pbVar15 = *pbVar15 + bVar7;
              bVar36 = false;
              bVar7 = bVar7 | (byte)*puVar27;
              pcVar17 = (char *)CONCAT31(uVar20,bVar7);
              while( true ) {
                bVar24 = (byte)pcVar17;
                uVar20 = (undefined3)((uint)pcVar17 >> 8);
                if (bVar36 == (char)bVar7 < '\0') break;
                *pcVar17 = *pcVar17 + bVar24;
                bVar24 = bVar24 | (byte)*puVar27;
                puVar23 = (uint *)CONCAT31(uVar20,bVar24);
                *pbVar16 = *pbVar16 << 1 | (char)*pbVar16 < '\0';
                uVar1 = *puVar23;
                *(byte *)puVar23 = (byte)*puVar23 + bVar24;
                pbStack_30 = pbStack_30 + (-(uint)CARRY1((byte)uVar1,bVar24) - *puVar23);
                *puVar23 = *puVar23 << 1 | (uint)((int)*puVar23 < 0);
                while( true ) {
                  uVar1 = *puVar27;
                  *(byte *)puVar27 = (byte)*puVar27 + (byte)pcVar12;
                  cVar6 = (char)puVar23 + 'o' + CARRY1((byte)uVar1,(byte)pcVar12);
                  pcVar17 = (char *)CONCAT31((int3)((uint)puVar23 >> 8),cVar6);
                  pcVar12 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar6) & 1U) != 0) break;
                  *pcVar17 = *pcVar17 + cVar6;
                  bVar7 = bRamfe140212;
                  pcVar12 = (char *)0x0;
                  uVar20 = (undefined3)((uint)(pcVar17 + -0x732b0000) >> 8);
                  bVar24 = in(0);
                  puVar23 = (uint *)CONCAT31(uVar20,bVar24);
                  uVar1 = *puVar27;
                  *(byte *)puVar27 = (byte)*puVar27;
                  if (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar27 < '\0') {
                    *(byte *)puVar23 = (byte)*puVar23 + bVar24;
                    bVar24 = bVar24 | (byte)*puVar27;
                    puVar23 = (uint *)CONCAT31(uVar20,bVar24);
                    if ((POPCOUNT(bVar24) & 1U) == 0) {
                      *(byte *)puVar23 = (byte)*puVar23 + bVar24;
                      pcVar12 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar7 | (byte)*puVar23) << 8);
                      *(byte *)puVar23 = (byte)*puVar23 + bVar24;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar23 = (byte)*puVar23 + bVar24;
                    puVar23 = (uint *)CONCAT31(uVar20,bVar24 | (byte)*puVar27);
                  }
                }
                *(byte *)puVar27 = (byte)*puVar27;
                bVar36 = SCARRY1((char)puVar27,*pbVar16);
                bVar7 = (char)puVar27 + *pbVar16;
                puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),bVar7);
              }
              if (bVar36 == (char)bVar7 < '\0') {
                *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar12;
                pbVar15 = (byte *)((uint)pcVar17 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar17 = *pcVar17 + bVar24;
              pbVar15 = (byte *)CONCAT31(uVar20,(bVar24 | (byte)*puVar27) + 0x7d);
              pcVar12 = pcVar12 + -1;
              *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar12;
            }
            else {
              *(byte *)puVar27 = (byte)*puVar27 + cVar29;
              puVar27 = (uint *)CONCAT31(uVar25,cVar6 + *(char *)((int)pbVar16 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar16 = *pbVar16 + bVar7;
      bVar7 = bVar7 + 0x6f & *(byte *)CONCAT31(uVar20,bVar7 + 0x6f);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar23;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
      *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar7;
      pcVar12 = (char *)CONCAT31(uVar20,bVar7 - (char)*unaff_EDI);
code_r0x00403b2c:
      bVar7 = (char)pcVar12 - *pcVar12;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7);
      *pbVar15 = *pbVar15 + bVar7;
      *(byte **)pbVar15 = (byte *)(*(int *)pbVar15 + (int)param_2);
      *pbVar15 = *pbVar15 + bVar7;
      bVar36 = CARRY1(*pbVar15,bVar7);
      *pbVar15 = *pbVar15 + bVar7;
      pbStack_34 = pbStack_10;
    }
  }
  *pbVar15 = *pbVar15;
  puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(byte)puVar23 | (byte)*param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_30 = pbStack_30 + -*puVar23;
  do {
    bVar7 = (byte)puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + bVar7;
    pbVar16 = pbVar16 + -*(int *)(pbStack_30 + -0x1a);
    *(byte *)puVar23 = (byte)*puVar23 + bVar7;
    bVar7 = bVar7 | (byte)*puVar27;
    puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar7);
    *(byte *)puVar23 = (byte)*puVar23 | bVar7;
    bVar7 = (byte)*puVar23;
    pbStack_30 = (byte *)0x2700001;
    while ((POPCOUNT(bVar7) & 1U) == 0) {
      do {
        *(byte *)puVar23 = (byte)*puVar23 + (byte)puVar23;
        bVar7 = (byte)puVar23 | (byte)*puVar27;
        puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
        uVar21 = CONCAT21((short)((uint)pcVar12 >> 0x10),(byte)((uint)pcVar12 >> 8) | bRamfe140212);
        while( true ) {
          pcVar12 = (char *)((uint)uVar21 << 8);
          bVar8 = (byte)puVar23;
          *(byte *)puVar23 = (byte)*puVar23 & bVar8;
          bVar24 = *pbVar13;
          bVar9 = (byte)uVar21;
          bVar10 = *pbVar13;
          *pbVar13 = *pbVar13 + bVar9;
          bVar7 = *pbVar13;
          if (!CARRY1(bVar24,bVar9)) break;
          *(byte *)puVar23 = (byte)*puVar23 + bVar8;
          pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar13 >> 8) | bRam026fffe2,
                                              (char)pbVar13));
          *(byte *)puVar23 = (byte)*puVar23 + bVar8;
          bVar8 = bVar8 | (byte)*puVar27;
          puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar8);
          bVar36 = (POPCOUNT(bVar8) & 1U) == 0;
          while( true ) {
            cVar6 = (char)((uint)pbVar13 >> 8);
            uVar28 = (undefined2)((uint)pbVar13 >> 0x10);
            if (!bVar36) {
              *(byte *)puVar27 = (byte)*puVar27;
              pbVar13 = (byte *)CONCAT22(uVar28,CONCAT11(cVar6 + pbVar13[-0x1f],(char)pbVar13));
              goto code_r0x00403d52;
            }
            *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
            uVar22 = (undefined2)((uint)pcVar12 >> 0x10);
            bVar24 = (byte)((uint)pcVar12 >> 8) | (byte)*puVar23;
            uVar21 = CONCAT21(uVar22,bVar24);
            *puVar23 = *puVar23 & (uint)puVar23;
            *pbVar13 = *pbVar13 + bVar24;
            uVar20 = (undefined3)((uint)puVar23 >> 8);
            bVar7 = (char)puVar23 - bVar24;
            pcVar12 = (char *)CONCAT31(uVar20,bVar7);
            *pcVar12 = *pcVar12 + bVar7;
            bVar7 = bVar7 | (byte)*puVar27;
            puVar23 = (uint *)CONCAT31(uVar20,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *(byte *)puVar23 = (byte)*puVar23 + bVar7;
            pcVar12 = (char *)((uint)CONCAT21(uVar22,bVar24 | (byte)*puVar23) << 8);
            *puVar23 = *puVar23 - (int)puVar23;
            *(byte *)puVar27 = (byte)*puVar27;
            pbVar13 = (byte *)CONCAT22(uVar28,CONCAT11(cVar6 + pbVar13[-0x1d],(char)pbVar13));
            do {
              *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
              uVar28 = (undefined2)((uint)puVar27 >> 0x10);
              cVar6 = (char)puVar27;
              bVar7 = (byte)((uint)puVar27 >> 8) | pbVar13[-0x17];
              puVar27 = (uint *)CONCAT22(uVar28,CONCAT11(bVar7,cVar6));
              *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
              pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar13 >> 8) | bRam026fffeb,
                                                  (char)pbVar13));
              do {
                *(byte *)puVar23 = (byte)*puVar23 + (byte)puVar23;
                uVar20 = (undefined3)((uint)puVar23 >> 8);
                bVar10 = (byte)puVar23 | (byte)*puVar27;
                pcVar17 = (char *)CONCAT31(uVar20,bVar10);
                bVar24 = pbVar13[-0x16];
                *pcVar17 = *pcVar17 + bVar10;
                pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                           CONCAT11((char)((uint)pbVar13 >> 8) + bVar24 |
                                                    bRam026fffec,(char)pbVar13));
                *pcVar17 = *pcVar17 + bVar10;
                pbVar19 = (byte *)CONCAT31(uVar20,bVar10 | (byte)*puVar27);
                while( true ) {
                  *pbVar19 = *pbVar19 + (byte)pbVar19;
                  uVar20 = (undefined3)((uint)pbVar19 >> 8);
                  bVar24 = (byte)pbVar19 | (byte)*puVar27;
                  puVar23 = (uint *)CONCAT31(uVar20,bVar24);
                  if ((POPCOUNT(bVar24) & 1U) != 0) break;
                  *(byte *)puVar23 = (byte)*puVar23 + bVar24;
                  bVar10 = pbVar16[-0x14];
                  *(byte *)puVar23 = (byte)*puVar23 + bVar24;
                  bVar24 = bVar24 | (byte)*puVar27;
                  pcVar17 = (char *)CONCAT31(uVar20,bVar24);
                  bVar8 = pbVar13[-0x15];
                  *pcVar17 = *pcVar17 + bVar24;
                  pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),
                                                    (byte)((uint)pcVar12 >> 8) | bVar10 |
                                                    pbVar16[-0x13]) << 8);
                  *pcVar17 = *pcVar17 + bVar24;
                  pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                             CONCAT11((char)((uint)pbVar13 >> 8) + bVar8 |
                                                      bRam026fffef,(char)pbVar13));
                  *pcVar17 = *pcVar17 + bVar24;
                  pbVar19 = (byte *)CONCAT31(uVar20,bVar24 | (byte)*puVar27);
                  do {
                    do {
                      bVar10 = (byte)pbVar19;
                      *pbVar19 = *pbVar19 + bVar10;
                      cVar31 = (char)pbVar13;
                      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar13 >> 8) | *pbVar19,
                                                          cVar31));
                      *pbVar19 = bVar10;
                      *pbVar19 = *pbVar19 + bVar10;
                      cVar29 = (char)((uint)pcVar12 >> 8) + *pbVar19;
                      pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),cVar29) << 8)
                      ;
                      uVar20 = (undefined3)((uint)pbVar19 >> 8);
                      bVar10 = bVar10 & *pbVar19;
                      pbVar19 = (byte *)CONCAT31(uVar20,bVar10);
                      bVar24 = *pbVar13;
                      *pbVar13 = *pbVar13 + cVar29;
                    } while (SCARRY1(bVar24,cVar29) == (char)*pbVar13 < '\0');
                    *pbVar19 = *pbVar19 + bVar10;
                    bVar10 = bVar10 | (byte)*puVar27;
                    pbVar19 = (byte *)CONCAT31(uVar20,bVar10);
                    if ((POPCOUNT(bVar10) & 1U) == 0) {
                      *pbVar19 = *pbVar19 + bVar10;
                      *pbVar19 = *pbVar19 + bVar10;
                      cVar6 = cVar6 - bVar7;
                      pbVar13 = (byte *)CONCAT31((int3)((uint)puVar27 >> 8),cVar6);
                      *pbVar19 = *pbVar19 + bVar10;
                      bRam0312382b = bRam0312382b | *pbVar13;
                      while( true ) {
                        bVar24 = (byte)pbVar19;
                        *pbVar19 = *pbVar19 + bVar24;
                        bRam0312382b = bRam0312382b | (pbVar16 + 0x21b0000)[(int)pbVar19];
                        uVar20 = (undefined3)((uint)pbVar19 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar13 = *pbVar13 + bRam0312382b;
                        pbVar19 = (byte *)CONCAT31(uVar20,bVar24 | *pbStack_10);
                      }
                      *pbVar19 = *pbVar19 + bVar24;
                      bVar24 = bVar24 | *pbStack_10;
                      pcVar12 = (char *)CONCAT31(uVar20,bVar24);
                      out(*(undefined4 *)pbStack_10,(short)pbVar13);
                      *pcVar12 = *pcVar12 + bVar24;
                      uVar22 = CONCAT11(bVar7 | bRam6f0a002b,cVar6);
                      pcVar17 = (char *)CONCAT22(uVar28,uVar22);
                      *pcVar12 = *pcVar12 + bVar24;
                      *pcVar17 = *pcVar17 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_10 + 4),uVar22);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar31 + *pcVar12);
                  } while (SCARRY1(cVar31,*pcVar12) != (char)(cVar31 + *pcVar12) < '\0');
                }
                uVar1 = *puVar27;
                *(byte *)puVar27 = (byte)*puVar27;
              } while (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar27 < '\0');
              *(byte *)puVar27 = (byte)*puVar27;
              *pcVar12 = *pcVar12 - (char)pbVar13;
              *(byte *)puVar23 = (byte)*puVar23 + bVar24;
              bVar24 = bVar24 | (byte)*puVar27;
              puVar23 = (uint *)CONCAT31(uVar20,bVar24);
              bVar36 = (POPCOUNT(bVar24) & 1U) == 0;
            } while (bVar36);
          }
        }
      } while (SCARRY1(bVar10,bVar9));
    }
    *pbVar13 = *pbVar13 + (char)((uint)pcVar12 >> 8);
    *pbVar16 = *pbVar16 - (char)pbVar13;
  } while( true );
}


