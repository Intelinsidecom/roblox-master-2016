/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040371a
 * Raw Name    : get_ClientSettingsConnectionStringTemplate
 * Demangled   : get_ClientSettingsConnectionStringTemplate
 * Prototype   : byte * get_ClientSettingsConnectionStringTemplate(byte * param_1, uint * param_2)
 * Local Vars  : pbStack_34, pbStack_30, puStack_20, pbStack_10, uVar1, uVar2, pcVar3, uVar4, iVar5, bVar6, cVar7, bVar8, in_EAX, iVar9, param_1, param_2, pcVar10, piVar11, pbVar12, pbVar13, pcVar14, pbVar15, pbVar16, uVar17, uVar18, uVar19, puVar20, extraout_ECX, bVar21, bVar22, uVar23, uVar24, puVar25, puVar26, bVar27, cVar28, cVar29, cVar30, uVar31, unaff_EBX, uVar32, cVar33, uVar34, unaff_EBP, unaff_ESI, pbVar35, unaff_EDI, in_CS, in_SS, in_DS, bVar36, in_AF, uVar37, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x080a0056 : 0x004038cf */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

byte * __fastcall get_ClientSettingsConnectionStringTemplate(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte *in_EAX;
  undefined3 uVar17;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint3 uVar18;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar21;
  undefined2 uVar19;
  byte bVar22;
  undefined3 uVar23;
  uint *puVar20;
  uint *extraout_ECX;
  undefined2 uVar24;
  byte bVar27;
  undefined1 *puVar25;
  uint *puVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 uVar31;
  char cVar33;
  uint unaff_EBX;
  uint uVar32;
  undefined2 uVar34;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar35;
  uint *unaff_EDI;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar36;
  byte in_AF;
  undefined8 uVar37;
  byte *unaff_retaddr;
  byte *pbStack_34;
  byte *pbStack_30;
  uint *puStack_20;
  byte *pbStack_10;
  
  do {
                    /* .NET CLR Managed Code */
    uVar24 = (undefined2)((uint)param_2 >> 0x10);
    bVar21 = (byte)param_2;
    bVar27 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x33);
    param_2 = (uint *)CONCAT22(uVar24,CONCAT11(bVar27,bVar21));
    uVar19 = SUB42(unaff_retaddr,0);
    in_EAX[0x6f] = in_EAX[0x6f] + bVar27;
    pbVar13 = (byte *)((uint)param_1 & 0xffffff00);
    *(byte *)param_2 = (byte)*param_2;
    bVar8 = (byte)in_EAX;
    if ((byte)*param_2 != 0) {
      *in_EAX = *in_EAX + bVar8;
      uVar1 = *param_2;
      *param_2 = (uint)(unaff_EBP + *param_2);
      if (CARRY4(uVar1,(uint)unaff_EBP)) {
        *in_EAX = *in_EAX + bVar8;
        puVar20 = param_2 + 0x1d028000;
        uVar1 = *puVar20;
        *(byte *)puVar20 = (byte)*puVar20 - bVar27;
        *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)((byte)uVar1 < bVar27);
        *(byte *)param_2 = (byte)*param_2 + bVar8;
        *unaff_EBP = *unaff_EBP;
        in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar8 + 0x2a);
        unaff_retaddr = unaff_ESI;
_ctor:
        pbVar13 = (byte *)((uint)CONCAT21((short)((uint)param_1 >> 0x10),
                                          (char)((uint)param_1 >> 8) + *in_EAX) << 8);
        unaff_EBX = unaff_EBX & 0xffffff00;
        *(byte *)param_2 = (byte)*param_2;
        uVar17 = (undefined3)((uint)in_EAX >> 8);
        bVar6 = (char)in_EAX - *in_EAX;
        pbVar35 = (byte *)CONCAT31(uVar17,bVar6);
        bVar8 = *pbVar35;
        *pbVar35 = *pbVar35 + bVar6;
        pbVar35 = unaff_ESI + (uint)CARRY1(bVar8,bVar6) + *(int *)pbVar35;
        in_EAX = (byte *)CONCAT31(uVar17,bVar6);
        unaff_ESI = pbVar35 + 4;
        out(*(undefined4 *)pbVar35,CONCAT11(bVar27,bVar21));
        *in_EAX = *in_EAX + bVar6;
        *pbVar13 = *pbVar13;
        bVar8 = *in_EAX;
        *in_EAX = *in_EAX + bVar6;
        *(int *)(unaff_EBX - 0x49) =
             (int)(unaff_ESI + (uint)CARRY1(bVar8,bVar6) + *(int *)(unaff_EBX - 0x49));
code_r0x0040375a:
        *in_EAX = *in_EAX + (char)in_EAX;
        bVar36 = CARRY1((byte)((uint)pbVar13 >> 8),*in_EAX);
        iVar9 = CONCAT31(0x1f0a00,bVar36 + 'o') + *(int *)(unaff_EBP + unaff_EBX) +
                (uint)(0x90 < bVar36) + -1;
        uRam0d0a0000 = uRam0d0a0000 | (uint)param_2;
        pcVar10 = (char *)(CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + -0x66) | *unaff_EDI);
        bVar8 = *(byte *)((int)unaff_EDI + -0x46);
        pcVar14 = (char *)CONCAT22(0xd0a,(ushort)bVar8 << 8);
        *pcVar10 = *pcVar10 + (char)pcVar10;
        puVar25 = (undefined1 *)CONCAT22(uVar24,CONCAT11(bVar27 | unaff_EBP[unaff_EBX],bVar21));
        *pcVar14 = *pcVar14 + (char)pcVar10;
        *unaff_EBP = *unaff_EBP - bVar8;
        *puVar25 = *puVar25;
        in_EAX = (byte *)(((uint)pcVar10 | 8) + 0x4490f9d8);
        bVar8 = (byte)in_EAX;
        *in_EAX = *in_EAX + bVar8;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),bVar21 | *unaff_ESI);
        *(uint *)(unaff_ESI + (int)in_EAX) = *(uint *)(unaff_ESI + (int)in_EAX) ^ (uint)pcVar14;
        *in_EAX = *in_EAX | bVar8;
        bVar36 = false;
        uRam2609fffc = uVar19;
        *in_EAX = *in_EAX | bVar8;
        pbVar13 = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
      }
      else {
        bVar36 = false;
        pcVar14 = (char *)CONCAT31((int3)((uint)param_1 >> 8),*in_EAX);
        pbVar13 = unaff_ESI;
      }
      do {
        uVar24 = uVar19;
        uVar32 = unaff_EBX;
        uVar19 = SUB42(param_2,0);
        out(*(undefined4 *)unaff_ESI,uVar19);
        out(*(undefined4 *)(unaff_ESI + 4),uVar19);
        puVar20 = (uint *)((int)unaff_EDI + (int)param_2);
        uVar1 = *puVar20;
        uVar2 = *puVar20;
        *puVar20 = (uint)(in_EAX + uVar2 + bVar36);
        cVar7 = (char)(pbVar13 +
                      (uint)(CARRY4(uVar1,(uint)in_EAX) ||
                            CARRY4((uint)(in_EAX + uVar2),(uint)bVar36)) +
                      *(int *)(pcVar14 + (int)param_2)) + '\t';
        pbVar35 = (byte *)CONCAT31((int3)((uint)(pbVar13 +
                                                (uint)(CARRY4(uVar1,(uint)in_EAX) ||
                                                      CARRY4((uint)(in_EAX + uVar2),(uint)bVar36)) +
                                                *(int *)(pcVar14 + (int)param_2)) >> 8),cVar7);
        out(uRam260a0000,uVar19);
        *pbVar35 = *pbVar35 + cVar7;
        bVar21 = (byte)((uint)pcVar14 >> 8) | (byte)*param_2;
        bVar8 = *pbVar35;
        pbVar35 = pbVar35 + (uint)CARRY1(bVar21,*pbVar35) + *(int *)pbVar35;
        *(byte *)param_2 = (byte)*param_2 + 6;
        cVar28 = (char)uVar32 - cRam260a0004;
        uVar19 = CONCAT11(bVar21 + bVar8 + *pbVar35,6);
        pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),uVar19);
        *pbVar35 = *pbVar35;
        pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),uVar24);
        uVar17 = (undefined3)((uint)pbVar35 >> 8);
        cVar7 = (char)pbVar35 - *pbVar35;
        piVar11 = (int *)CONCAT31(uVar17,cVar7);
        unaff_ESI = (byte *)(&cRam260a0004 + *piVar11);
        bVar8 = cVar7 + (char)*piVar11;
        in_EAX = (byte *)CONCAT31(uVar17,bVar8);
        *in_EAX = *in_EAX + bVar8;
        *in_EAX = *in_EAX + bVar8;
        *in_EAX = *in_EAX + bVar8;
        bVar36 = CARRY1((byte)*param_2,bVar8);
        *(byte *)param_2 = (byte)*param_2 + bVar8;
        unaff_EBX = CONCAT31((int3)(uVar32 >> 8),cVar28);
      } while (!bVar36);
      *in_EAX = *in_EAX + bVar8;
      pbVar35 = (byte *)CONCAT22((short)(uVar32 >> 0x10),
                                 CONCAT11((byte)(uVar32 >> 8) | bRam080a0056,cVar28));
      *in_EAX = *in_EAX + bVar8;
      bVar27 = bVar8 + 2;
      *pbVar35 = *pbVar35 - (char)param_2;
      *(char *)CONCAT31(uVar17,bVar27) = *(char *)CONCAT31(uVar17,bVar27) + bVar27;
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      puVar20 = (uint *)(CONCAT31(uVar23,*unaff_ESI) | 6);
      bVar21 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
      bVar6 = bVar8 + 0x74 + bVar21 * '\x06';
      bVar6 = bVar6 + (0x90 < (bVar6 & 0xf0) | 0x8d < bVar27 | bVar21 * (0xf9 < bVar6)) * '`';
      pbVar13 = (byte *)CONCAT31(uVar17,bVar6);
      bVar8 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      if (!SCARRY1(bVar8,bVar6)) {
        *unaff_ESI = *unaff_ESI + bVar6;
        unaff_ESI = unaff_ESI + *(int *)((int)param_2 + 0x33);
        *pbVar13 = *pbVar13 | bVar6;
        *unaff_ESI = *unaff_ESI + bVar6;
        bVar8 = bVar6 + 0x72;
        *(byte *)CONCAT31(uVar17,bVar8) = *(byte *)CONCAT31(uVar17,bVar8) | bVar8;
        *unaff_ESI = *unaff_ESI + bVar8;
        puVar20 = (uint *)CONCAT31(uVar23,(char)puVar20 + *unaff_ESI);
        pcVar14 = (char *)CONCAT31(uVar17,bVar6 - 0x11);
        *pcVar14 = *pcVar14 + (bVar6 - 0x11);
        pbVar13 = (byte *)CONCAT31(uVar17,bVar6 - 0xf);
        unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
        *pbVar13 = *pbVar13 + (bVar6 - 0xf);
      }
code_r0x00403825:
      pbVar16 = (byte *)0x80a0000;
      uVar17 = (undefined3)((uint)pbVar13 >> 8);
      cVar7 = (char)pbVar13 + '\x7f';
      pcVar14 = (char *)CONCAT31(uVar17,cVar7);
      *pcVar14 = *pcVar14 + cVar7;
      iVar9 = CONCAT31(uVar17,(char)pbVar13 + -0x7f) + 0x547d;
      cVar7 = (char)iVar9;
      uVar17 = (undefined3)((uint)iVar9 >> 8);
      cVar28 = cVar7 + '*';
      pcVar14 = (char *)CONCAT31(uVar17,cVar28);
      pbVar13 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_ESI);
      cVar29 = (char)pbVar35 - *unaff_ESI;
      uVar19 = (undefined2)((uint)pbVar35 >> 0x10);
      cVar33 = (char)((uint)pbVar35 >> 8) +
               *(char *)(CONCAT31((int3)((uint)pbVar35 >> 8),cVar29) + 0x57);
      *pcVar14 = *pcVar14 + cVar28;
      bVar8 = cVar7 + 0x54U & *pbVar13;
      iVar9 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
      *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
      pcVar14 = (char *)CONCAT31(uVar17,bVar8 + 0x2a);
      pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_DS);
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar33,cVar29)) + 0x58);
      *pcVar14 = *pcVar14 + bVar8 + 0x2a;
      bVar8 = bVar8 + 0x54 & *pbVar13;
      iVar5 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
      *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
      pcVar14 = (char *)CONCAT31(uVar17,bVar8 + 0x2a);
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar33,cVar29)) + 0x55);
      *pcVar14 = *pcVar14 + bVar8 + 0x2a;
      pcVar14 = (char *)CONCAT31(uVar17,bVar8 + 0x57);
      puVar26 = (uint *)(pbVar13 + *(int *)pbStack_10);
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar33,cVar29)) + 0x55);
      *pcVar14 = *pcVar14 + bVar8 + 0x57;
      cVar7 = bVar8 - 0x3a;
      pcVar14 = (char *)CONCAT31(uVar17,cVar7);
      *pcVar14 = *pcVar14 + cVar7;
      uVar1 = *puVar26;
      cVar30 = (char)puVar20;
      pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar33,
                                                  cVar29)) + 0x59),cVar29));
      *pcVar14 = *pcVar14 + cVar7;
      bVar27 = bVar8 - 0x10 & (byte)*puVar26;
      unaff_EDI = (uint *)((int)unaff_EDI +
                          CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar5 + iVar9
                          );
      *(char *)CONCAT31(uVar17,bVar27) = *(char *)CONCAT31(uVar17,bVar27) + bVar27;
      bVar27 = bVar27 + 0x2a;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar27);
      cVar7 = *(char *)((int)unaff_EDI + 0x17);
      *pbVar13 = *pbVar13 + bVar27;
      uVar2 = *puVar26;
      puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_DS);
      cVar28 = *(char *)((int)unaff_EDI + 0x1a);
      *pbVar13 = *pbVar13 + bVar27;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((((byte)((uint)puVar20 >> 8) | (byte)uVar1) + cVar7 |
                                          (byte)uVar2) + cVar28 | (byte)*puVar26,cVar30));
      *pbVar35 = *pbVar35 + cVar29;
      *(byte *)((int)pbVar13 * 2) = *(byte *)((int)pbVar13 * 2) ^ bVar27;
      bVar8 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar27;
      bVar21 = *pbVar13;
      *(byte *)puVar20 = (byte)*puVar20 + (char)puVar26;
      bVar8 = ((bVar27 - bVar21) - CARRY1(bVar8,bVar27)) + (byte)*puVar26;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar8);
      param_2 = puStack_20;
      if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x004038f6;
      *pbVar13 = *pbVar13 + bVar8;
      cVar7 = (bVar8 + 0x6f) - (0x90 < bVar8);
      pbVar12 = (byte *)CONCAT31(uVar17,cVar7);
      uVar1 = *puVar26;
      *(byte *)puVar26 = (byte)*puVar26 + cVar30;
      param_2 = puVar26;
      if (SCARRY1((byte)uVar1,cVar30) == (char)(byte)*puVar26 < '\0') {
        cRam33100000 = cRam33100000 - cVar7;
        cVar7 = cVar7 + (byte)*puVar26;
        pbVar13 = (byte *)CONCAT31(uVar17,cVar7);
        goto code_r0x0040390c;
      }
      do {
        *pbVar12 = *pbVar12 + (char)pbVar12;
        while( true ) {
          uVar17 = (undefined3)((uint)pbVar12 >> 8);
          cVar7 = (char)pbVar12 + '\x02';
          pbVar13 = (byte *)CONCAT31(uVar17,cVar7);
          if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403908:
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbStack_10);
          cVar7 = (char)pbVar13 + (byte)*param_2;
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar7);
code_r0x0040390c:
          cVar28 = (char)pbVar13;
          if ((POPCOUNT(cVar7) & 1U) != 0) {
            *pbStack_10 = *pbStack_10 + cVar28;
            goto code_r0x0040395a;
          }
          *pbVar13 = *pbVar13 + cVar28;
          bVar8 = cVar28 + 2;
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar8);
code_r0x00403912:
          bVar36 = (POPCOUNT(bVar8) & 1U) == 0;
          if (!bVar36) goto code_r0x00403967;
          *pbVar13 = *pbVar13 + (char)pbVar13;
code_r0x00403916:
          bVar21 = (char)pbVar13 + 0x6f;
          pbVar12 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar13 >> 8),bVar21);
          bVar8 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar21;
          if (*pbVar12 == 0 || SCARRY1(bVar8,bVar21) != (char)*pbVar12 < '\0')
          goto code_r0x00403979;
          *pbVar12 = *pbVar12 + bVar21;
          pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar13 >> 8),(char)pbVar13 + -100);
          *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
               (byte *)((int)param_2 +
                       (uint)(0xd2 < bVar21) + *(int *)(pbStack_10 + (int)unaff_EDI * 8));
code_r0x00403926:
          *(uint **)pbVar12 = puStack_20;
          bVar8 = *pbStack_10;
          bVar21 = (byte)pbVar12;
          *pbStack_10 = *pbStack_10 + bVar21;
          if (CARRY1(bVar8,bVar21)) {
            *pbVar12 = *pbVar12 + bVar21;
            uVar17 = (undefined3)((uint)pbVar12 >> 8);
            bVar21 = bVar21 | pbVar12[0x400005b];
            pbVar13 = (byte *)CONCAT31(uVar17,bVar21);
            pbVar12 = pbStack_10;
            if ((char)bVar21 < '\x01') goto code_r0x00403991;
            *pbVar13 = *pbVar13 + bVar21;
            cVar7 = bVar21 + 0x28;
            pbVar13 = (byte *)CONCAT31(uVar17,cVar7);
            *(byte **)pbVar13 = pbVar13 + (uint)(0xd7 < bVar21) + *(int *)pbVar13;
            bVar8 = *pbVar35;
            bVar21 = (byte)((uint)puVar20 >> 8);
            *pbVar35 = *pbVar35 + bVar21;
            if (CARRY1(bVar8,bVar21)) {
              *pbVar13 = *pbVar13 + cVar7;
              puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                         CONCAT11(bVar21 | *pbVar13,(char)puVar20));
              *pbStack_10 = *pbStack_10 + cVar7;
              pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                         CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x55],
                                                  (char)pbVar35));
              *pbVar13 = *pbVar13 + cVar7;
code_r0x00403950:
              uVar17 = (undefined3)((uint)pbVar13 >> 8);
              bVar21 = (char)pbVar13 + 0x6f;
              bVar8 = *(byte *)CONCAT31(uVar17,bVar21);
              *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
              pbVar13 = (byte *)CONCAT31(uVar17,(bVar21 & bVar8) + *pbStack_10);
              *(byte *)puVar20 = (byte)*puVar20 - (char)((uint)param_2 >> 8);
            }
            goto code_r0x0040395a;
          }
        }
        *pbVar13 = *pbVar13 + cVar7;
        cVar7 = (char)pbVar12 + '.' + (byte)*param_2;
        pbVar13 = (byte *)CONCAT31(uVar17,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) {
          pbVar12 = (byte *)((int)param_2 + (int)pbVar13);
          *pbVar12 = *pbVar12 + cVar7;
          bVar8 = *pbVar12;
          goto code_r0x00403912;
        }
        *pbVar13 = *pbVar13 + cVar7;
        bVar8 = cVar7 + 2;
        pbVar13 = (byte *)CONCAT31(uVar17,bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403916;
        *pbVar13 = *pbVar13 + bVar8;
        cVar28 = cVar7 + 'q';
        piVar11 = (int *)CONCAT31(uVar17,cVar28);
        *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0x90 < bVar8);
        bVar8 = *pbVar35;
        bVar21 = (byte)((uint)puVar20 >> 8);
        *pbVar35 = *pbVar35 + bVar21;
        if (!CARRY1(bVar8,bVar21)) {
          out(*(undefined4 *)pbStack_10,(short)param_2);
          bVar8 = (cVar28 - (char)*piVar11) - CARRY1(bVar8,bVar21);
          *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
          cVar7 = bVar8 - *(byte *)CONCAT31(uVar17,bVar8);
          unaff_ESI = pbStack_10 +
                      ((4 - *(int *)CONCAT31(uVar17,cVar7)) -
                      (uint)(bVar8 < *(byte *)CONCAT31(uVar17,bVar8)));
          pbVar13 = (byte *)CONCAT31(uVar17,cVar7);
          pbStack_10 = (byte *)0;
          goto code_r0x00403825;
        }
        *(char *)piVar11 = (char)*piVar11 + cVar28;
        uVar19 = (undefined2)((uint)pbVar35 >> 0x10);
        bVar8 = (byte)((uint)pbVar35 >> 8) | bRam080a0056;
        *(char *)piVar11 = (char)*piVar11 + cVar28;
        pcVar14 = (char *)CONCAT31(uVar17,cVar7 + 's');
        pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar19,CONCAT11(bVar8,
                                                  (char)pbVar35)) + 0x56),(char)pbVar35));
        *pcVar14 = *pcVar14 + cVar7 + 's';
        bVar8 = cVar7 - 0xf;
        *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
        bVar21 = cVar7 + 0x1e;
        pbVar12 = (byte *)CONCAT31(uVar17,bVar21);
        *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
             (byte *)((int)puVar20 +
                     (uint)(0xd2 < bVar8) + *(int *)(pbStack_10 + (int)unaff_EDI * 8));
        uVar24 = *(undefined2 *)pbVar12;
        bVar8 = *pbStack_10;
        *pbStack_10 = *pbStack_10 + bVar21;
        param_2 = puVar20;
        if (CARRY1(bVar8,bVar21)) {
          *pbVar12 = *pbVar12 + bVar21;
          pbVar13 = (byte *)CONCAT31(uVar17,bVar21 | pbVar12[0x400005a]);
          if ('\0' < (char)(bVar21 | pbVar12[0x400005a])) {
code_r0x004038f6:
            bVar8 = (byte)pbVar13;
            *pbVar13 = *pbVar13 + bVar8;
            uVar17 = (undefined3)((uint)pbVar13 >> 8);
            cVar7 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar17,bVar8 + 0x28)) - (0xd7 < bVar8);
            pbVar13 = (byte *)CONCAT31(uVar17,cVar7);
            bVar8 = *pbVar35;
            bVar21 = (byte)((uint)puVar20 >> 8);
            *pbVar35 = *pbVar35 + bVar21;
            if (CARRY1(bVar8,bVar21)) {
              *pbVar13 = *pbVar13 + cVar7;
              puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                         CONCAT11(bVar21 | *pbVar13,(char)puVar20));
              *pbStack_10 = *pbStack_10 + cVar7;
              goto code_r0x00403908;
            }
            pbVar12 = pbVar13 + -0x6fe1411;
            goto code_r0x00403926;
          }
          goto code_r0x00403950;
        }
      } while( true );
    }
    bVar6 = *in_EAX;
    *in_EAX = *in_EAX + bVar8;
    *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)CARRY1(bVar6,bVar8);
    bVar6 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar21;
    if (CARRY1(bVar6,bVar21)) goto code_r0x0040375a;
    *(byte *)param_2 = (byte)*param_2;
    if ((byte)*param_2 == 0) {
      unaff_EBX = unaff_EBX & 0xffffff00;
      goto _ctor;
    }
    *in_EAX = *in_EAX + bVar8;
    *param_2 = (uint)(unaff_EBP + *param_2);
    unaff_ESI = unaff_ESI + 1;
    param_1 = pbVar13;
  } while( true );
code_r0x0040395a:
  *pbVar13 = *pbVar13 + (char)pbVar13;
  *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar20;
  pbVar35 = (byte *)((uint)pbVar35 | (uint)pbStack_10);
  cVar7 = (char)pbVar13 + '\x02';
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar7);
  bVar36 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403967:
  if (!bVar36) goto code_r0x004039be;
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar17 = (undefined3)((uint)pbVar13 >> 8);
  bVar8 = (char)pbVar13 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar17,bVar8);
  pbVar12 = (byte *)CONCAT31(uVar17,bVar8);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar8;
code_r0x00403979:
  bVar8 = (char)pbVar12 - (char)*unaff_EDI;
  bVar36 = bVar8 < (byte)*puVar20;
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8 - (byte)*puVar20);
  do {
    cVar7 = (char)pbVar13;
    *pbVar13 = *pbVar13 + cVar7 + bVar36;
    *pbVar13 = *pbVar13 + cVar7;
    *(byte *)puVar20 = (byte)*puVar20 + (char)param_2;
    *(byte *)((int)puVar20 + 0x101c00aa) = *(byte *)((int)puVar20 + 0x101c00aa) + (char)pbVar35;
    *pbVar13 = *pbVar13 + cVar7;
    *(byte **)pbStack_10 = pbVar35 + *(int *)pbStack_10;
    bVar8 = (byte)((uint)puVar20 >> 8);
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11(bVar8 + *pbVar13,(char)puVar20));
    pbVar13 = pbVar13 + (uint)CARRY1(bVar8,*pbVar13) + *(int *)pbVar13;
    pbVar12 = pbStack_10;
code_r0x00403991:
    cVar7 = (char)puVar20;
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    cVar28 = (char)pbVar35 - pbVar12[2];
    pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar28);
    pbStack_10 = pbVar12;
    if ((POPCOUNT(cVar28) & 1U) != 0) goto code_r0x0040395a;
    *pbVar13 = *pbVar13 + (byte)pbVar13;
    uVar18 = (uint3)((uint)pbVar13 >> 8);
    bVar8 = (byte)pbVar13 | *pbVar35;
    piVar11 = (int *)CONCAT31(uVar18,bVar8);
    bVar21 = (byte)((uint)puVar20 >> 8);
    bVar27 = (byte)param_2;
    if (bVar8 == 0) {
      *(char *)piVar11 = (char)*piVar11;
      pbStack_10 = pbVar12 + 4;
      out(*(undefined4 *)pbVar12,(short)param_2);
      pbVar13 = (byte *)((uint)uVar18 << 8);
      *(byte *)param_2 = (byte)*param_2 + cVar7;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar27 - *pbVar35);
      *pbVar35 = *pbVar35;
      *(byte *)param_2 = (byte)*param_2 + bVar21;
      *pbVar13 = *pbVar13;
      *pbVar35 = *pbVar35 + cVar28;
      *pbVar13 = *pbVar13;
      *(byte **)(pbVar35 + -0x3d) = pbStack_10 + *(int *)(pbVar35 + -0x3d);
      break;
    }
    pbVar16 = pbVar16 + -unaff_EDI[9];
    *(byte *)piVar11 = (char)*piVar11 + bVar8;
    puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                               CONCAT11(bVar21 | (byte)*param_2,cVar7));
    pbStack_10 = pbVar12 + *piVar11;
    pcVar14 = (char *)((int)piVar11 + *piVar11);
    bVar21 = (char)pcVar14 - *pcVar14;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar21);
    bVar8 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar21;
    pbVar13 = pbVar13 + (-(uint)CARRY1(bVar8,bVar21) - *(int *)pbVar13);
    bVar36 = CARRY1((byte)*puVar20,bVar27);
    *(byte *)puVar20 = (byte)*puVar20 + bVar27;
  } while (!bVar36);
  *pbVar13 = *pbVar13 + (char)pbVar13;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(byte)puVar20 | (byte)*param_2);
code_r0x004039be:
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar16 + -0x3c));
  *pbVar13 = *pbVar13 + (byte)pbVar13;
  uVar17 = (undefined3)((uint)pbVar13 >> 8);
  bVar8 = (byte)pbVar13 | (byte)*param_2;
  pcVar14 = (char *)CONCAT31(uVar17,bVar8);
  if ((POPCOUNT(bVar8) & 1U) == 0) goto code_r0x004039c8;
  cVar7 = *pcVar14;
  *pcVar14 = *pcVar14 + bVar8;
  cVar28 = *pcVar14;
  if (!SCARRY1(cVar7,bVar8)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar14 = *pcVar14 + bVar8;
  *pbStack_10 = *pbStack_10 + 1;
  uVar4 = *(undefined6 *)CONCAT31(uVar17,bVar8 + 6);
  pbVar12 = (byte *)uVar4;
  uVar1 = *param_2;
  bVar8 = (byte)puVar20;
  *(byte *)param_2 = (byte)*param_2 + bVar8;
  if (!CARRY1((byte)uVar1,bVar8)) goto code_r0x00403979;
  *pbVar12 = *pbVar12 + (char)uVar4;
  bVar27 = (byte)((uint)puVar20 >> 8) | *pbVar12;
  uVar19 = CONCAT11(bVar27,bVar8);
  pbVar12 = pbVar12 + -*(int *)pbVar12;
  bVar21 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar27;
  if (CARRY1(bVar21,bVar27)) {
    cVar7 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar7;
    uVar1 = *param_2;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - pbVar35[-0x3a],(char)param_2));
    *pbVar12 = *pbVar12 + cVar7;
    uVar34 = (undefined2)((uint)pbVar35 >> 0x10);
    bVar21 = (byte)((uint)pbVar35 >> 8) | *(byte *)((int)param_2 + 0x32);
    pcVar14 = (char *)CONCAT22(uVar34,CONCAT11(bVar21,(char)pbVar35));
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_CS);
    cVar28 = cVar7 + *pcVar14 + '-';
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar28);
    *pbVar12 = *pbVar12;
    uVar2 = *param_2;
    cVar30 = (char)pbVar35 - *pbStack_10;
    cVar7 = *(char *)((int)unaff_EDI + 0x17);
    *pbVar12 = *pbVar12 + cVar28;
    uVar19 = CONCAT11((bVar27 | (byte)uVar1) + cVar7 | (byte)*param_2,bVar8 - (byte)uVar2);
    pbVar35 = (byte *)CONCAT22(uVar34,CONCAT11(bVar21 + *(char *)(CONCAT31((int3)((uint)pcVar14 >> 8
                                                                                 ),cVar30) + 0x4e),
                                               cVar30));
    *pbVar12 = *pbVar12 + cVar28;
  }
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),uVar19);
  bVar8 = (byte)pbVar12;
  uVar17 = (undefined3)((uint)pbVar12 >> 8);
  pcVar14 = (char *)CONCAT31(uVar17,bVar8 + 0x28);
  *pcVar14 = (*pcVar14 - (bVar8 + 0x28)) - (0xd7 < bVar8);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar19;
  bVar21 = bVar8 + 0x1b;
  pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                             CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x4f],(char)pbVar35));
  *(char *)CONCAT31(uVar17,bVar21) = *(char *)CONCAT31(uVar17,bVar21) + bVar21;
  pcVar10 = (char *)CONCAT31(uVar17,bVar8 + 0x43);
  *pcVar10 = (*pcVar10 - (bVar8 + 0x43)) - (0xd7 < bVar21);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar19;
  pcVar14 = pcVar10 + -0x6b721c;
  pcVar10 = pcVar10 + -0x6b721a;
  *pcVar10 = *pcVar10 + (char)((uint)param_2 >> 8);
  cVar28 = *pcVar10;
code_r0x00403a22:
  if ((POPCOUNT(cVar28) & 1U) == 0) {
code_r0x00403a24:
    cVar7 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar7;
    uVar17 = (undefined3)((uint)pcVar14 >> 8);
    bVar8 = cVar7 + 2;
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
      piVar11 = (int *)CONCAT31(uVar17,cVar7 + '*');
      *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0xd7 < bVar8);
      uVar1 = *param_2;
      bVar27 = (byte)puVar20;
      *(byte *)param_2 = (byte)*param_2 + bVar27;
      out(*(undefined4 *)pbStack_10,(short)param_2);
      bVar21 = ((cVar7 + '*') - (char)*piVar11) - CARRY1((byte)uVar1,bVar27);
      pbVar13 = (byte *)CONCAT31(uVar17,bVar21);
      *(byte *)param_2 = (byte)*param_2 + bVar27;
      uVar19 = (undefined2)((uint)pbVar35 >> 0x10);
      uVar31 = SUB41(pbVar35,0);
      cVar7 = (char)((uint)pbVar35 >> 8) - pbStack_10[0x1f];
      pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(cVar7,uVar31));
      *pbVar13 = *pbVar13 + bVar21;
      uVar1 = *param_2;
      bVar8 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar21;
      pbStack_10 = pbStack_10 + ((4 - *(int *)pbVar13) - (uint)CARRY1(bVar8,bVar21));
      pbVar13 = (byte *)CONCAT31(uVar17,bVar21);
      puVar20 = (uint *)(CONCAT22((short)((uint)puVar20 >> 0x10),
                                  CONCAT11((byte)((uint)puVar20 >> 8) | (byte)uVar1,bVar27)) + -1);
      bVar8 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar21;
      bVar8 = (bVar21 - *pbVar13) - CARRY1(bVar8,bVar21);
      *(byte *)puVar20 = *(byte *)puVar20 + (char)param_2;
      bVar36 = CARRY1(bVar8,(byte)*param_2);
      bVar8 = bVar8 + (byte)*param_2;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar13 = *pbVar13 + bVar8;
        cVar28 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pbVar12 = (byte *)CONCAT31(uVar17,cVar28);
        uVar1 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
        if (SCARRY1((byte)uVar1,(char)puVar20) == (char)(byte)*param_2 < '\0')
        goto code_r0x00403aaf;
        *pbVar12 = *pbVar12 + cVar28;
        pcVar14 = (char *)CONCAT31(uVar17,cVar28 + '\x02');
        bVar21 = cVar7 + pbVar35[0x52];
        pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(bVar21,uVar31));
        *pcVar14 = *pcVar14 + cVar28 + '\x02';
        bVar8 = cVar28 + 4;
        pbVar12 = (byte *)CONCAT31(uVar17,bVar8);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pbVar12 = *pbVar12 + bVar8;
          cVar7 = (cVar28 + 's') - (0x90 < bVar8);
          pcVar14 = (char *)CONCAT31(uVar17,cVar7);
          bVar8 = (byte)((uint)puVar20 >> 8);
          bVar36 = CARRY1(*pbVar35,bVar8);
          *pbVar35 = *pbVar35 + bVar8;
          pbVar13 = pbStack_10;
          if (bVar36) {
            *pcVar14 = *pcVar14 + cVar7;
            pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(bVar21 | pbVar16[0x5c],uVar31));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar12);
        pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(bVar21 + pbVar35[0x52],uVar31));
code_r0x00403abf:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        cVar7 = (char)pbVar12 + '\x02';
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
        bVar36 = (POPCOUNT(cVar7) & 1U) == 0;
        pbStack_30 = pbVar16;
        if (!bVar36) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar36) {
          *pbVar13 = *pbVar13 + (byte)pbVar13;
          bVar8 = (byte)pbVar13 | pbVar13[0x400005e];
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar8);
          pbStack_30 = pbVar16;
          if ((char)bVar8 < '\x01') goto code_r0x00403b0b;
          *pbVar12 = *pbVar12 + bVar8;
code_r0x00403aaf:
          cVar7 = (char)pbVar12 + '(';
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          bVar8 = *pbVar35;
          bVar21 = (byte)((uint)puVar20 >> 8);
          *pbVar35 = *pbVar35 + bVar21;
          pbVar15 = pbVar16;
          if (!CARRY1(bVar8,bVar21)) goto code_r0x00403ad8;
          *pbVar12 = *pbVar12 + cVar7;
          puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                     CONCAT11(bVar21 | *pbVar35,(char)puVar20));
          if ((POPCOUNT((byte)*param_2 - cVar7) & 1U) != 0) {
            *pbStack_10 = *pbStack_10 + cVar7;
            pbStack_30 = pbVar16;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                   CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x53],(char)pbVar35
                                           ));
      }
      bVar8 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar8;
      cVar7 = (bVar8 + 0x6f) - (0x90 < bVar8);
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar7);
      bVar8 = *pbVar35;
      cVar28 = (char)((uint)puVar20 >> 8);
      *pbVar35 = *pbVar35 + cVar28;
      pbStack_30 = pbVar16;
      if (*pbVar35 == 0 || SCARRY1(bVar8,cVar28) != (char)*pbVar35 < '\0') goto code_r0x00403b2c;
      *pcVar14 = *pcVar14 + cVar7;
    }
    else {
      cVar7 = bVar8 + (byte)*param_2;
      pcVar14 = (char *)CONCAT31(uVar17,cVar7);
      pbVar13 = pbStack_10;
      if ((POPCOUNT(cVar7) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
         (byte *)((int)param_2 +
                 (uint)(0xd2 < (byte)pcVar14) + *(int *)(pbStack_10 + (int)unaff_EDI * 8));
    pbVar12 = pbVar16;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 + 0x2d);
code_r0x00403ad8:
    pbStack_30 = pbVar15;
    bVar8 = *pbVar12;
    bVar21 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar21;
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,uVar24);
    if (!CARRY1(bVar8,bVar21)) goto code_r0x00403afc;
    *pbVar12 = *pbVar12 + bVar21;
    bVar21 = bVar21 | pbVar12[0x400005d];
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar21);
    pbVar13 = pbStack_10;
    if ((char)bVar21 < '\x01') {
      *pbVar12 = *pbVar12 + bVar21;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*param_2,(char)puVar20)
                                );
      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                 CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[-0x39],(char)pbVar35)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar12 = *pbVar12 + (char)pbVar12;
    cVar7 = (char)pbVar12 + '(';
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    bVar8 = *pbVar35;
    bVar21 = (byte)((uint)puVar20 >> 8);
    *pbVar35 = *pbVar35 + bVar21;
    pbStack_10 = pbVar13;
    if (!CARRY1(bVar8,bVar21)) goto code_r0x00403b0b;
    *pbVar12 = *pbVar12 + cVar7;
  }
  else {
    uVar1 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
    if (SCARRY1((byte)uVar1,(char)puVar20) == (char)(byte)*param_2 < '\0') {
      pbVar12 = pbVar16;
      pbVar15 = (byte *)(pcVar14 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x02');
    pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                               CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x54],(char)pbVar35));
    pbVar13 = pbStack_10;
code_r0x00403a7d:
    cVar7 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar7;
    uVar17 = (undefined3)((uint)pcVar14 >> 8);
    cVar28 = cVar7 + '-';
    pbVar15 = (byte *)CONCAT31(uVar17,cVar28);
    pbVar12 = pbVar16;
    pbStack_10 = pbVar13;
    if ((POPCOUNT(cVar28 - (byte)*param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar15 = *pbVar15 + cVar28;
    bVar8 = cVar7 + 0x2f;
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      uVar1 = *param_2;
      *(byte *)param_2 = (byte)*param_2 + (byte)puVar20;
      *pbVar16 = *pbVar16 - CARRY1((byte)uVar1,(byte)puVar20);
      pbVar12 = (byte *)CONCAT31(uVar17,cVar7 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
    bVar36 = 0x90 < bVar8;
    pcVar14 = (char *)CONCAT31(uVar17,cVar7 + -0x62);
code_r0x00403a8f:
    uVar17 = (undefined3)((uint)pcVar14 >> 8);
    bVar21 = (char)pcVar14 - bVar36;
    pbVar12 = (byte *)CONCAT31(uVar17,bVar21);
    bVar8 = *pbVar35;
    cVar7 = (char)((uint)puVar20 >> 8);
    *pbVar35 = *pbVar35 + cVar7;
    pbStack_30 = pbVar16;
    pbStack_10 = pbVar13;
    if (*pbVar35 != 0 && SCARRY1(bVar8,cVar7) == (char)*pbVar35 < '\0') {
      *pbVar12 = *pbVar12 + bVar21;
      pbStack_10 = (byte *)CONCAT31(uVar17,bVar21 + 0x2d);
      *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
           (byte *)((int)param_2 + (uint)(0xd2 < bVar21) + *(int *)(pbVar13 + (int)unaff_EDI * 8));
      bVar36 = CARRY1(*pbVar13,(byte)pbVar13);
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      goto code_r0x00403aa1;
    }
  }
  puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                             CONCAT11((byte)((uint)puVar20 >> 8) | *pbVar12,(char)puVar20));
  *pbStack_10 = *pbStack_10 + (char)pbVar12;
code_r0x00403afc:
  pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                             CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x55],(char)pbVar35));
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar17 = (undefined3)((uint)pbVar12 >> 8);
  bVar21 = (char)pbVar12 + 0x6f;
  bVar8 = *(byte *)CONCAT31(uVar17,bVar21);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
  pbVar12 = (byte *)CONCAT31(uVar17,(bVar21 & bVar8) + *pbStack_10);
  *(byte *)puVar20 = (byte)*puVar20 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    bVar8 = (byte)pbVar12 | *pbVar35;
    piVar11 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
    if (bVar8 != 0) {
      pbStack_30 = pbStack_30 + -unaff_EDI[9];
      *(byte *)piVar11 = (char)*piVar11 + bVar8;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((byte)((uint)puVar20 >> 8) | (byte)*param_2,(char)puVar20)
                                );
      pbStack_34 = pbStack_34 + *piVar11;
      pcVar14 = (char *)((int)piVar11 + *piVar11);
      uVar17 = (undefined3)((uint)pcVar14 >> 8);
      bVar21 = (char)pcVar14 - *pcVar14;
      pbVar13 = (byte *)CONCAT31(uVar17,bVar21);
      bVar8 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar21;
      piVar11 = (int *)CONCAT31(uVar17,bVar21 - CARRY1(bVar8,bVar21));
    }
    *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
    pbStack_10 = pbStack_34 + 4;
    out(*(undefined4 *)pbStack_34,(short)param_2);
    pbVar12 = (byte *)(((uint)piVar11 >> 8) * 0x100);
    *(byte *)param_2 = (byte)*param_2 + (byte)puVar20;
    bVar8 = (char)param_2 - *pbVar35;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar8);
    *pbVar35 = *pbVar35;
    *(byte *)param_2 = (byte)*param_2 + (char)((uint)puVar20 >> 8);
    *pbVar12 = *pbVar12;
    pcVar14 = (char *)(((uint)piVar11 >> 8) * 0x200);
    *pcVar14 = *pcVar14 + (char)pbVar35;
    bVar36 = CARRY1((byte)*puVar20,bVar8);
    *(byte *)puVar20 = (byte)*puVar20 + bVar8;
    pbStack_34 = pbStack_10;
    if (bVar36) break;
    while( true ) {
      *(byte **)pbVar12 = pbVar12 + (uint)bVar36 + *(int *)pbVar12;
      unaff_EDI = unaff_EDI + 1;
      pbVar12[(int)param_2] = pbVar12[(int)param_2] + (char)pbVar35;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      *(byte **)pbStack_34 = pbVar35 + *(int *)pbStack_34;
      bVar8 = (byte)((uint)puVar20 >> 8);
      cVar7 = (char)puVar20;
      puVar20 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar8 + *pbVar12,cVar7));
      pbVar12 = pbVar12 + (uint)CARRY1(bVar8,*pbVar12) + *(int *)pbVar12;
      *(byte *)param_2 = (byte)*param_2 + cVar7;
      cVar7 = (char)pbVar35 - pbStack_34[2];
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar7);
      pbStack_10 = pbStack_34;
      if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar20;
      pbVar35 = (byte *)((uint)pbVar35 | (uint)pbStack_10);
      cVar7 = (char)pbVar12 + '\x02';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar7);
      bVar36 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403b18:
      bVar8 = (byte)pbVar13;
      uVar17 = (undefined3)((uint)pbVar13 >> 8);
      if (!bVar36) {
        *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
        pbVar12 = (byte *)CONCAT31(uVar17,bVar8 | *pbStack_10);
code_r0x00403b73:
        pbVar13 = (byte *)((int)unaff_EDI + *(int *)(pbStack_30 + -0x37));
        *pbVar12 = *pbVar12 + (byte)pbVar12;
        uVar17 = (undefined3)((uint)pbVar12 >> 8);
        bVar8 = (byte)pbVar12 | (byte)*param_2;
        pcVar14 = (char *)CONCAT31(uVar17,bVar8);
        uVar37 = CONCAT44(param_2,pcVar14);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pcVar14 = *pcVar14 + bVar8;
          *pbStack_10 = *pbStack_10 + 1;
          return (byte *)CONCAT31(uVar17,bVar8 + 6);
        }
        bVar8 = *pbStack_10;
        *pbStack_10 = *pbStack_10 + 1;
        pcVar3 = (code *)swi(4);
        if (SCARRY1(bVar8,'\x01')) {
          uVar37 = (*pcVar3)();
          puVar20 = extraout_ECX;
        }
        pbVar16 = (byte *)uVar37;
        *pbVar16 = *pbVar16 + (char)uVar37;
        cVar28 = (char)((ulonglong)uVar37 >> 0x20);
        puVar26 = (uint *)CONCAT22((short)((ulonglong)uVar37 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar37 >> 0x28) | pbVar35[0x2f],cVar28
                                           ));
        *pbVar16 = *pbVar16 + (char)uVar37;
        cVar7 = (char)puVar20;
        bVar27 = (byte)((uint)puVar20 >> 8) | *pbVar16;
        pbVar16 = pbVar16 + *(int *)pbVar16;
        bVar8 = *pbVar35;
        *pbVar35 = *pbVar35 + bVar27;
        bVar21 = (byte)pbVar16;
        if (CARRY1(bVar8,bVar27)) {
          *pbVar16 = *pbVar16 + bVar21;
          bVar27 = bVar27 | (byte)*puVar26;
          *pbVar35 = *pbVar35 - cVar28;
          *pbVar16 = *pbVar16 + bVar21;
          uVar17 = (undefined3)((uint)pbVar16 >> 8);
          bVar21 = bVar21 | (byte)*puVar26;
          piVar11 = (int *)CONCAT31(uVar17,bVar21);
          pbStack_30 = pbStack_30 + *piVar11;
          *(byte *)piVar11 = (char)*piVar11 + bVar21;
          cVar28 = (char)pbVar35 - *pbStack_10;
          pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                     CONCAT11((char)((uint)pbVar35 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar35 >> 8),cVar28)
                                                       + 0x5f),cVar28));
          *(byte *)piVar11 = (char)*piVar11 + bVar21;
          bVar8 = bVar21 + 0x2a & (byte)*puVar26;
          pbVar13 = pbVar13 + *(int *)(pbStack_30 + 0x5f);
          *(char *)CONCAT31(uVar17,bVar8) = *(char *)CONCAT31(uVar17,bVar8) + bVar8;
          pbVar16 = (byte *)CONCAT31(uVar17,bVar8 + 0x2a);
          *(byte *)puVar26 = (byte)*puVar26 + 0x28;
          *pbVar16 = *pbVar16 + bVar8 + 0x2a;
        }
        else {
          *pbStack_10 = *pbStack_10 + bVar21;
        }
        pcVar14 = (char *)CONCAT22((short)((uint)puVar20 >> 0x10),CONCAT11(bVar27,cVar7));
        *pbStack_30 = *pbStack_30 - bVar27;
        *(byte *)puVar26 = (byte)*puVar26 + cVar7;
        bVar8 = (byte)pbVar16 - 0xb;
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar8);
        if (10 < (byte)pbVar16) {
          *pbVar12 = *pbVar12 | bVar8;
          return pbVar12;
        }
        *(byte *)puVar26 = (byte)*puVar26 + cVar7;
        do {
          bVar8 = pbVar35[-0x23];
          bVar27 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar27;
          bVar21 = pbStack_30[-0x22];
          *pbVar12 = *pbVar12 + bVar27;
          uVar17 = (undefined3)((uint)pbVar12 >> 8);
          bVar27 = bVar27 | *pbStack_10;
          pbVar16 = (byte *)CONCAT31(uVar17,bVar27);
          cVar28 = (char)pbVar35 - *pbStack_10;
          pbVar35 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar35 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar35 >> 8) + bVar8 |
                                                              bVar21,(char)pbVar35)) >> 8),cVar28);
          cVar7 = (char)pcVar14;
          pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                     CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar16,cVar7));
          *(byte *)puVar26 = (byte)*puVar26 + cVar7;
          bVar21 = bVar27 - *pbVar16;
          pbVar12 = (byte *)CONCAT31(uVar17,bVar21);
          pbStack_10 = pbStack_10 + (-(uint)(bVar27 < *pbVar16) - *(int *)pbVar12);
          puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 * '\x02');
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          *pbVar13 = *pbVar13 + cVar28;
          bVar8 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar21;
          *puVar26 = (uint)(pbVar12 + (uint)CARRY1(bVar8,bVar21) + *puVar26);
        } while ((POPCOUNT(*puVar26 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar12[(int)pcVar14])
        ;
        bVar36 = false;
        pbVar12 = (byte *)((uint)pbVar12 & 0xffffff00);
        do {
          pbVar13 = pbVar13 + (-(uint)bVar36 - *(int *)pbVar35);
          pcVar10 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*pcVar14);
          *pcVar10 = *pcVar10 + *pcVar14;
          pbVar12 = (byte *)CONCAT31((int3)((uint)(pcVar10 +
                                                  (pbStack_10[0x2000001] <
                                                  (byte)((uint)pcVar14 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar10 +
                                            (pbStack_10[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                            0xda7d) | (byte)*puVar26) + 0x7d);
          pcVar14 = pcVar14 + -1;
          *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar14;
          while( true ) {
            uVar23 = (undefined3)((uint)puVar26 >> 8);
            cVar7 = (char)puVar26 + *(char *)((int)pbVar13 * 2 + 0xa0000e1);
            puVar26 = (uint *)CONCAT31(uVar23,cVar7);
            bVar36 = CARRY1((byte)pbVar12,(byte)*puVar26);
            uVar17 = (undefined3)((uint)pbVar12 >> 8);
            bVar8 = (byte)pbVar12 + (byte)*puVar26;
            pbVar12 = (byte *)CONCAT31(uVar17,bVar8);
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *pbVar12 = *pbVar12 + bVar8;
            cVar28 = (char)pcVar14;
            pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar13[-0x65],cVar28))
            ;
            bVar21 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar8;
            if (CARRY1(bVar21,bVar8)) {
              *pbVar12 = *pbVar12 + bVar8;
              pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar35 >> 8) | pbStack_30[-0x1d],
                                                  (char)pbVar35));
              *pbVar12 = *pbVar12 + bVar8;
              bVar36 = false;
              bVar8 = bVar8 | (byte)*puVar26;
              pcVar10 = (char *)CONCAT31(uVar17,bVar8);
              while( true ) {
                bVar21 = (byte)pcVar10;
                uVar17 = (undefined3)((uint)pcVar10 >> 8);
                if (bVar36 == (char)bVar8 < '\0') break;
                *pcVar10 = *pcVar10 + bVar21;
                bVar21 = bVar21 | (byte)*puVar26;
                puVar20 = (uint *)CONCAT31(uVar17,bVar21);
                *pbVar13 = *pbVar13 << 1 | (char)*pbVar13 < '\0';
                uVar1 = *puVar20;
                *(byte *)puVar20 = (byte)*puVar20 + bVar21;
                pbStack_30 = pbStack_30 + (-(uint)CARRY1((byte)uVar1,bVar21) - *puVar20);
                *puVar20 = *puVar20 << 1 | (uint)((int)*puVar20 < 0);
                while( true ) {
                  uVar1 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26 + (byte)pcVar14;
                  cVar7 = (char)puVar20 + 'o' + CARRY1((byte)uVar1,(byte)pcVar14);
                  pcVar10 = (char *)CONCAT31((int3)((uint)puVar20 >> 8),cVar7);
                  pcVar14 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar7) & 1U) != 0) break;
                  *pcVar10 = *pcVar10 + cVar7;
                  bVar8 = bRamfe140212;
                  pcVar14 = (char *)0x0;
                  uVar17 = (undefined3)((uint)(pcVar10 + -0x732b0000) >> 8);
                  bVar21 = in(0);
                  puVar20 = (uint *)CONCAT31(uVar17,bVar21);
                  uVar1 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26;
                  if (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar26 < '\0') {
                    *(byte *)puVar20 = (byte)*puVar20 + bVar21;
                    bVar21 = bVar21 | (byte)*puVar26;
                    puVar20 = (uint *)CONCAT31(uVar17,bVar21);
                    if ((POPCOUNT(bVar21) & 1U) == 0) {
                      *(byte *)puVar20 = (byte)*puVar20 + bVar21;
                      pcVar14 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar8 | (byte)*puVar20) << 8);
                      *(byte *)puVar20 = (byte)*puVar20 + bVar21;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar20 = (byte)*puVar20 + bVar21;
                    puVar20 = (uint *)CONCAT31(uVar17,bVar21 | (byte)*puVar26);
                  }
                }
                *(byte *)puVar26 = (byte)*puVar26;
                bVar36 = SCARRY1((char)puVar26,*pbVar13);
                bVar8 = (char)puVar26 + *pbVar13;
                puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),bVar8);
              }
              if (bVar36 == (char)bVar8 < '\0') {
                *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar14;
                pbVar12 = (byte *)((uint)pcVar10 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar10 = *pcVar10 + bVar21;
              pbVar12 = (byte *)CONCAT31(uVar17,(bVar21 | (byte)*puVar26) + 0x7d);
              pcVar14 = pcVar14 + -1;
              *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar14;
            }
            else {
              *(byte *)puVar26 = (byte)*puVar26 + cVar28;
              puVar26 = (uint *)CONCAT31(uVar23,cVar7 + *(char *)((int)pbVar13 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar13 = *pbVar13 + bVar8;
      bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar17,bVar8 + 0x6f);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar20;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
      *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar8;
      pcVar14 = (char *)CONCAT31(uVar17,bVar8 - (char)*unaff_EDI);
code_r0x00403b2c:
      bVar8 = (char)pcVar14 - *pcVar14;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
      *pbVar12 = *pbVar12 + bVar8;
      *(byte **)pbVar12 = (byte *)(*(int *)pbVar12 + (int)param_2);
      *pbVar12 = *pbVar12 + bVar8;
      bVar36 = CARRY1(*pbVar12,bVar8);
      *pbVar12 = *pbVar12 + bVar8;
      pbStack_34 = pbStack_10;
    }
  }
  *pbVar12 = *pbVar12;
  puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(byte)puVar20 | (byte)*param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_30 = pbStack_30 + -*puVar20;
  do {
    bVar8 = (byte)puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + bVar8;
    pbVar13 = pbVar13 + -*(int *)(pbStack_30 + -0x1a);
    *(byte *)puVar20 = (byte)*puVar20 + bVar8;
    bVar8 = bVar8 | (byte)*puVar26;
    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar8);
    *(byte *)puVar20 = (byte)*puVar20 | bVar8;
    bVar8 = (byte)*puVar20;
    pbStack_30 = (byte *)0x2700001;
    while ((POPCOUNT(bVar8) & 1U) == 0) {
      do {
        *(byte *)puVar20 = (byte)*puVar20 + (byte)puVar20;
        bVar8 = (byte)puVar20 | (byte)*puVar26;
        puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
        uVar18 = CONCAT21((short)((uint)pcVar14 >> 0x10),(byte)((uint)pcVar14 >> 8) | bRamfe140212);
        while( true ) {
          pcVar14 = (char *)((uint)uVar18 << 8);
          bVar6 = (byte)puVar20;
          *(byte *)puVar20 = (byte)*puVar20 & bVar6;
          bVar27 = *pbVar35;
          bVar22 = (byte)uVar18;
          bVar21 = *pbVar35;
          *pbVar35 = *pbVar35 + bVar22;
          bVar8 = *pbVar35;
          if (!CARRY1(bVar27,bVar22)) break;
          *(byte *)puVar20 = (byte)*puVar20 + bVar6;
          pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar35 >> 8) | bRam026fffe2,
                                              (char)pbVar35));
          *(byte *)puVar20 = (byte)*puVar20 + bVar6;
          bVar6 = bVar6 | (byte)*puVar26;
          puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar6);
          bVar36 = (POPCOUNT(bVar6) & 1U) == 0;
          while( true ) {
            cVar7 = (char)((uint)pbVar35 >> 8);
            uVar19 = (undefined2)((uint)pbVar35 >> 0x10);
            if (!bVar36) {
              *(byte *)puVar26 = (byte)*puVar26;
              pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(cVar7 + pbVar35[-0x1f],(char)pbVar35));
              goto code_r0x00403d52;
            }
            *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
            uVar24 = (undefined2)((uint)pcVar14 >> 0x10);
            bVar21 = (byte)((uint)pcVar14 >> 8) | (byte)*puVar20;
            uVar18 = CONCAT21(uVar24,bVar21);
            *puVar20 = *puVar20 & (uint)puVar20;
            *pbVar35 = *pbVar35 + bVar21;
            uVar17 = (undefined3)((uint)puVar20 >> 8);
            bVar8 = (char)puVar20 - bVar21;
            pcVar14 = (char *)CONCAT31(uVar17,bVar8);
            *pcVar14 = *pcVar14 + bVar8;
            bVar8 = bVar8 | (byte)*puVar26;
            puVar20 = (uint *)CONCAT31(uVar17,bVar8);
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *(byte *)puVar20 = (byte)*puVar20 + bVar8;
            pcVar14 = (char *)((uint)CONCAT21(uVar24,bVar21 | (byte)*puVar20) << 8);
            *puVar20 = *puVar20 - (int)puVar20;
            *(byte *)puVar26 = (byte)*puVar26;
            pbVar35 = (byte *)CONCAT22(uVar19,CONCAT11(cVar7 + pbVar35[-0x1d],(char)pbVar35));
            do {
              *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
              uVar19 = (undefined2)((uint)puVar26 >> 0x10);
              cVar7 = (char)puVar26;
              bVar8 = (byte)((uint)puVar26 >> 8) | pbVar35[-0x17];
              puVar26 = (uint *)CONCAT22(uVar19,CONCAT11(bVar8,cVar7));
              *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
              pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar35 >> 8) | bRam026fffeb,
                                                  (char)pbVar35));
              do {
                *(byte *)puVar20 = (byte)*puVar20 + (byte)puVar20;
                uVar17 = (undefined3)((uint)puVar20 >> 8);
                bVar27 = (byte)puVar20 | (byte)*puVar26;
                pcVar10 = (char *)CONCAT31(uVar17,bVar27);
                bVar21 = pbVar35[-0x16];
                *pcVar10 = *pcVar10 + bVar27;
                pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                           CONCAT11((char)((uint)pbVar35 >> 8) + bVar21 |
                                                    bRam026fffec,(char)pbVar35));
                *pcVar10 = *pcVar10 + bVar27;
                pbVar16 = (byte *)CONCAT31(uVar17,bVar27 | (byte)*puVar26);
                while( true ) {
                  *pbVar16 = *pbVar16 + (byte)pbVar16;
                  uVar17 = (undefined3)((uint)pbVar16 >> 8);
                  bVar21 = (byte)pbVar16 | (byte)*puVar26;
                  puVar20 = (uint *)CONCAT31(uVar17,bVar21);
                  if ((POPCOUNT(bVar21) & 1U) != 0) break;
                  *(byte *)puVar20 = (byte)*puVar20 + bVar21;
                  bVar27 = pbVar13[-0x14];
                  *(byte *)puVar20 = (byte)*puVar20 + bVar21;
                  bVar21 = bVar21 | (byte)*puVar26;
                  pcVar10 = (char *)CONCAT31(uVar17,bVar21);
                  bVar6 = pbVar35[-0x15];
                  *pcVar10 = *pcVar10 + bVar21;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar27 |
                                                    pbVar13[-0x13]) << 8);
                  *pcVar10 = *pcVar10 + bVar21;
                  pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                             CONCAT11((char)((uint)pbVar35 >> 8) + bVar6 |
                                                      bRam026fffef,(char)pbVar35));
                  *pcVar10 = *pcVar10 + bVar21;
                  pbVar16 = (byte *)CONCAT31(uVar17,bVar21 | (byte)*puVar26);
                  do {
                    do {
                      bVar27 = (byte)pbVar16;
                      *pbVar16 = *pbVar16 + bVar27;
                      cVar30 = (char)pbVar35;
                      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar35 >> 8) | *pbVar16,
                                                          cVar30));
                      *pbVar16 = bVar27;
                      *pbVar16 = *pbVar16 + bVar27;
                      cVar28 = (char)((uint)pcVar14 >> 8) + *pbVar16;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar28) << 8)
                      ;
                      uVar17 = (undefined3)((uint)pbVar16 >> 8);
                      bVar27 = bVar27 & *pbVar16;
                      pbVar16 = (byte *)CONCAT31(uVar17,bVar27);
                      bVar21 = *pbVar35;
                      *pbVar35 = *pbVar35 + cVar28;
                    } while (SCARRY1(bVar21,cVar28) == (char)*pbVar35 < '\0');
                    *pbVar16 = *pbVar16 + bVar27;
                    bVar27 = bVar27 | (byte)*puVar26;
                    pbVar16 = (byte *)CONCAT31(uVar17,bVar27);
                    if ((POPCOUNT(bVar27) & 1U) == 0) {
                      *pbVar16 = *pbVar16 + bVar27;
                      *pbVar16 = *pbVar16 + bVar27;
                      cVar7 = cVar7 - bVar8;
                      pbVar35 = (byte *)CONCAT31((int3)((uint)puVar26 >> 8),cVar7);
                      *pbVar16 = *pbVar16 + bVar27;
                      bRam0312382b = bRam0312382b | *pbVar35;
                      while( true ) {
                        bVar21 = (byte)pbVar16;
                        *pbVar16 = *pbVar16 + bVar21;
                        bRam0312382b = bRam0312382b | (pbVar13 + 0x21b0000)[(int)pbVar16];
                        uVar17 = (undefined3)((uint)pbVar16 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar35 = *pbVar35 + bRam0312382b;
                        pbVar16 = (byte *)CONCAT31(uVar17,bVar21 | *pbStack_10);
                      }
                      *pbVar16 = *pbVar16 + bVar21;
                      bVar21 = bVar21 | *pbStack_10;
                      pcVar14 = (char *)CONCAT31(uVar17,bVar21);
                      out(*(undefined4 *)pbStack_10,(short)pbVar35);
                      *pcVar14 = *pcVar14 + bVar21;
                      uVar24 = CONCAT11(bVar8 | bRam6f0a002b,cVar7);
                      pcVar10 = (char *)CONCAT22(uVar19,uVar24);
                      *pcVar14 = *pcVar14 + bVar21;
                      *pcVar10 = *pcVar10 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_10 + 4),uVar24);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar30 + *pcVar14);
                  } while (SCARRY1(cVar30,*pcVar14) != (char)(cVar30 + *pcVar14) < '\0');
                }
                uVar1 = *puVar26;
                *(byte *)puVar26 = (byte)*puVar26;
              } while (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar26 < '\0');
              *(byte *)puVar26 = (byte)*puVar26;
              *pcVar14 = *pcVar14 - (char)pbVar35;
              *(byte *)puVar20 = (byte)*puVar20 + bVar21;
              bVar21 = bVar21 | (byte)*puVar26;
              puVar20 = (uint *)CONCAT31(uVar17,bVar21);
              bVar36 = (POPCOUNT(bVar21) & 1U) == 0;
            } while (bVar36);
          }
        }
      } while (SCARRY1(bVar21,bVar22));
    }
    *pbVar35 = *pbVar35 + (char)((uint)pcVar14 >> 8);
    *pbVar13 = *pbVar13 - (char)pbVar35;
  } while( true );
}


