/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040372c
 * Raw Name    : .cctor
 * Demangled   : .cctor
 * Prototype   : byte * .cctor(undefined4 param_1, byte * param_2)
 * Local Vars  : pbStack_34, pbStack_30, pbStack_20, pbStack_10, uVar1, uVar2, pcVar3, uVar4, iVar5, bVar6, cVar7, bVar8, bVar9, bVar10, in_EAX, iVar11, pcVar12, pbVar13, piVar14, pbVar15, pcVar16, pbVar17, puVar18, uVar19, uVar20, uVar21, puVar22, extraout_ECX, bVar23, uVar24, pbVar25, puVar26, uVar27, cVar28, cVar29, cVar30, uVar31, param_1, unaff_EBX, param_2, uVar32, pbVar33, cVar34, uVar35, unaff_EBP, unaff_ESI, pbVar36, unaff_EDI, in_ES, in_CS, in_DS, in_CF, bVar37, in_AF, uVar38, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall _cctor(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  code *pcVar3;
  undefined6 uVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte *in_EAX;
  undefined3 uVar19;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  uint3 uVar20;
  char *pcVar16;
  byte *pbVar17;
  uint *puVar18;
  undefined2 uVar21;
  undefined1 *puVar22;
  undefined3 uVar24;
  byte *extraout_ECX;
  byte *pbVar25;
  uint *puVar26;
  undefined2 uVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 uVar31;
  char cVar34;
  uint unaff_EBX;
  uint uVar32;
  byte *pbVar33;
  undefined2 uVar35;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar36;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_DS;
  bool in_CF;
  bool bVar37;
  byte in_AF;
  undefined8 uVar38;
  int unaff_retaddr;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_20;
  byte *pbStack_10;
  uint uVar2;
  byte bVar23;
  
  bVar8 = (byte)param_1;
                    /* .NET CLR Managed Code */
  if (in_CF) {
    cVar7 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar7;
    pbVar13 = param_2 + 0x740a0000;
    bVar6 = *pbVar13;
    bVar9 = (byte)((uint)param_2 >> 8);
    *pbVar13 = *pbVar13 - bVar9;
    *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)(bVar6 < bVar9);
    *param_2 = *param_2 + cVar7;
    *unaff_EBP = *unaff_EBP;
    uVar19 = (undefined3)((uint)in_EAX >> 8);
    pcVar16 = (char *)CONCAT31(uVar19,cVar7 + '*');
    bVar23 = (char)((uint)param_1 >> 8) + *pcVar16;
    puVar22 = (undefined1 *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar23,bVar8));
    unaff_EBX = unaff_EBX & 0xffffff00;
    *param_2 = *param_2 + bVar8;
    bVar6 = (cVar7 + '*') - *pcVar16;
    pbVar13 = (byte *)CONCAT31(uVar19,bVar6);
    bVar8 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    pbVar36 = unaff_ESI + (uint)CARRY1(bVar8,bVar6) + *(int *)pbVar13;
    pbVar13 = (byte *)CONCAT31(uVar19,bVar6);
    unaff_ESI = pbVar36 + 4;
    out(*(undefined4 *)pbVar36,(short)param_2);
    *pbVar13 = *pbVar13 + bVar6;
    *puVar22 = *puVar22;
    bVar8 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    *(int *)(unaff_EBX - 0x49) =
         (int)(unaff_ESI + (uint)CARRY1(bVar8,bVar6) + *(int *)(unaff_EBX - 0x49));
    *pbVar13 = *pbVar13 + bVar6;
    iVar11 = CONCAT31(0x1f0a00,CARRY1(bVar23,*pbVar13) + 'o') + *(int *)(unaff_EBP + unaff_EBX) +
             (uint)(0x90 < CARRY1(bVar23,*pbVar13)) + -1;
    uRam0d0a0000 = uRam0d0a0000 | (uint)param_2;
    pcVar12 = (char *)(CONCAT31((int3)((uint)iVar11 >> 8),(char)iVar11 + -0x66) | *unaff_EDI);
    bVar8 = *(byte *)((int)unaff_EDI + -0x46);
    pcVar16 = (char *)CONCAT22(0xd0a,(ushort)bVar8 << 8);
    *pcVar12 = *pcVar12 + (char)pcVar12;
    puVar22 = (undefined1 *)
              CONCAT22((short)((uint)param_2 >> 0x10),
                       CONCAT11(bVar9 | unaff_EBP[unaff_EBX],(byte)param_2));
    *pcVar16 = *pcVar16 + (char)pcVar12;
    *unaff_EBP = *unaff_EBP - bVar8;
    *puVar22 = *puVar22;
    in_EAX = (byte *)(((uint)pcVar12 | 8) + 0x4490f9d8);
    bVar8 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar8;
    param_2 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),(byte)param_2 | *unaff_ESI);
    *(uint *)(unaff_ESI + (int)in_EAX) = *(uint *)(unaff_ESI + (int)in_EAX) ^ (uint)pcVar16;
    *in_EAX = *in_EAX | bVar8;
    bVar37 = false;
    uRam2609fffc = in_ES;
    *in_EAX = *in_EAX | bVar8;
  }
  else {
    bVar37 = false;
    pcVar16 = (char *)CONCAT31((int3)((uint)param_1 >> 8),bVar8 | *in_EAX);
  }
  do {
    uVar27 = in_ES;
    uVar32 = unaff_EBX;
    uVar21 = SUB42(param_2,0);
    out(*(undefined4 *)unaff_ESI,uVar21);
    out(*(undefined4 *)(unaff_ESI + 4),uVar21);
    puVar26 = (uint *)((int)unaff_EDI + (int)param_2);
    uVar1 = *puVar26;
    uVar2 = *puVar26;
    *puVar26 = (uint)(in_EAX + uVar2 + bVar37);
    iVar11 = unaff_retaddr + *(int *)(pcVar16 + (int)param_2) +
             (uint)(CARRY4(uVar1,(uint)in_EAX) || CARRY4((uint)(in_EAX + uVar2),(uint)bVar37));
    cVar7 = (char)iVar11 + '\t';
    pbVar13 = (byte *)CONCAT31((int3)((uint)iVar11 >> 8),cVar7);
    out(uRam260a0000,uVar21);
    *pbVar13 = *pbVar13 + cVar7;
    bVar6 = (byte)((uint)pcVar16 >> 8) | *param_2;
    bVar8 = *pbVar13;
    pbVar13 = pbVar13 + (uint)CARRY1(bVar6,*pbVar13) + *(int *)pbVar13;
    *param_2 = *param_2 + 6;
    cVar28 = (char)uVar32 - cRam260a0004;
    in_ES = CONCAT11(bVar6 + bVar8 + *pbVar13,6);
    pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),in_ES);
    *pbVar13 = *pbVar13;
    unaff_retaddr = CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar27);
    uVar19 = (undefined3)((uint)pbVar13 >> 8);
    cVar7 = (char)pbVar13 - *pbVar13;
    piVar14 = (int *)CONCAT31(uVar19,cVar7);
    unaff_ESI = (byte *)(*piVar14 + 0x260a0004);
    bVar8 = cVar7 + (char)*piVar14;
    in_EAX = (byte *)CONCAT31(uVar19,bVar8);
    *in_EAX = *in_EAX + bVar8;
    *in_EAX = *in_EAX + bVar8;
    *in_EAX = *in_EAX + bVar8;
    bVar37 = CARRY1(*param_2,bVar8);
    *param_2 = *param_2 + bVar8;
    unaff_EBX = CONCAT31((int3)(uVar32 >> 8),cVar28);
  } while (!bVar37);
  *in_EAX = *in_EAX + bVar8;
  pbVar33 = (byte *)CONCAT22((short)(uVar32 >> 0x10),
                             CONCAT11((byte)(uVar32 >> 8) | bRam080a0056,cVar28));
  *in_EAX = *in_EAX + bVar8;
  bVar9 = bVar8 + 2;
  *pbVar33 = *pbVar33 - (char)param_2;
  *(char *)CONCAT31(uVar19,bVar9) = *(char *)CONCAT31(uVar19,bVar9) + bVar9;
  bVar6 = *unaff_ESI;
  uVar24 = (undefined3)((uint)pcVar16 >> 8);
  pbVar13 = (byte *)(CONCAT31(uVar24,bVar6) | 6);
  bVar23 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
  bVar10 = bVar8 + 0x74 + bVar23 * '\x06';
  bVar10 = bVar10 + (0x90 < (bVar10 & 0xf0) | 0x8d < bVar9 | bVar23 * (0xf9 < bVar10)) * '`';
  pbVar36 = (byte *)CONCAT31(uVar19,bVar10);
  bVar8 = *pbVar36;
  *pbVar36 = *pbVar36 + bVar10;
  if (!SCARRY1(bVar8,bVar10)) {
    *unaff_ESI = *unaff_ESI + bVar10;
    unaff_ESI = unaff_ESI + *(int *)(param_2 + 0x33);
    *pbVar36 = *pbVar36 | bVar10;
    *unaff_ESI = *unaff_ESI + bVar10;
    bVar8 = bVar10 + 0x72;
    *(byte *)CONCAT31(uVar19,bVar8) = *(byte *)CONCAT31(uVar19,bVar8) | bVar8;
    *unaff_ESI = *unaff_ESI + bVar8;
    pbVar13 = (byte *)CONCAT31(uVar24,(bVar6 | 6) + *unaff_ESI);
    pcVar16 = (char *)CONCAT31(uVar19,bVar10 - 0x11);
    *pcVar16 = *pcVar16 + (bVar10 - 0x11);
    pbVar36 = (byte *)CONCAT31(uVar19,bVar10 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar36 = *pbVar36 + (bVar10 - 0xf);
  }
code_r0x00403825:
  pbVar17 = (byte *)0x80a0000;
  uVar19 = (undefined3)((uint)pbVar36 >> 8);
  cVar7 = (char)pbVar36 + '\x7f';
  pcVar16 = (char *)CONCAT31(uVar19,cVar7);
  *pcVar16 = *pcVar16 + cVar7;
  iVar11 = CONCAT31(uVar19,(char)pbVar36 + -0x7f) + 0x547d;
  cVar28 = (char)iVar11;
  uVar19 = (undefined3)((uint)iVar11 >> 8);
  cVar7 = cVar28 + '*';
  pcVar16 = (char *)CONCAT31(uVar19,cVar7);
  pbVar25 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_ESI);
  cVar29 = (char)pbVar33 - *unaff_ESI;
  uVar21 = (undefined2)((uint)pbVar33 >> 0x10);
  cVar34 = (char)((uint)pbVar33 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar33 >> 8),cVar29) + 0x57);
  *pcVar16 = *pcVar16 + cVar7;
  bVar8 = cVar28 + 0x54U & *pbVar25;
  iVar11 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
  pcVar16 = (char *)CONCAT31(uVar19,bVar8 + 0x2a);
  pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_DS);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,cVar29)) + 0x58);
  *pcVar16 = *pcVar16 + bVar8 + 0x2a;
  bVar6 = bVar8 + 0x54 & *pbVar25;
  iVar5 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar19,bVar6) = *(char *)CONCAT31(uVar19,bVar6) + bVar6;
  pcVar16 = (char *)CONCAT31(uVar19,bVar6 + 0x2a);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,cVar29)) + 0x55);
  *pcVar16 = *pcVar16 + bVar6 + 0x2a;
  pcVar16 = (char *)CONCAT31(uVar19,bVar6 + 0x57);
  pbVar25 = pbVar25 + *(int *)pbStack_10;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,cVar29)) + 0x55);
  *pcVar16 = *pcVar16 + bVar6 + 0x57;
  cVar7 = bVar6 - 0x3a;
  pcVar16 = (char *)CONCAT31(uVar19,cVar7);
  *pcVar16 = *pcVar16 + cVar7;
  bVar8 = *pbVar25;
  cVar30 = (char)pbVar13;
  pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar34,
                                                  cVar29)) + 0x59),cVar29));
  *pcVar16 = *pcVar16 + cVar7;
  bVar23 = bVar6 - 0x10 & *pbVar25;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar5 + iVar11);
  *(char *)CONCAT31(uVar19,bVar23) = *(char *)CONCAT31(uVar19,bVar23) + bVar23;
  bVar23 = bVar23 + 0x2a;
  pbVar36 = (byte *)CONCAT31(uVar19,bVar23);
  cVar7 = *(char *)((int)unaff_EDI + 0x17);
  *pbVar36 = *pbVar36 + bVar23;
  bVar6 = *pbVar25;
  pbStack_20 = (byte *)CONCAT22(pbStack_20._2_2_,in_DS);
  cVar28 = *(char *)((int)unaff_EDI + 0x1a);
  *pbVar36 = *pbVar36 + bVar23;
  pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar13 >> 8) | bVar8) + cVar7 | bVar6) +
                                      cVar28 | *pbVar25,cVar30));
  *pbVar33 = *pbVar33 + cVar29;
  *(byte *)((int)pbVar36 * 2) = *(byte *)((int)pbVar36 * 2) ^ bVar23;
  bVar8 = *pbVar36;
  *pbVar36 = *pbVar36 + bVar23;
  bVar6 = *pbVar36;
  *pbVar13 = *pbVar13 + (char)pbVar25;
  bVar8 = ((bVar23 - bVar6) - CARRY1(bVar8,bVar23)) + *pbVar25;
  pbVar36 = (byte *)CONCAT31(uVar19,bVar8);
  param_2 = pbStack_20;
  if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x004038f6;
  *pbVar36 = *pbVar36 + bVar8;
  cVar7 = (bVar8 + 0x6f) - (0x90 < bVar8);
  pbVar15 = (byte *)CONCAT31(uVar19,cVar7);
  bVar8 = *pbVar25;
  *pbVar25 = *pbVar25 + cVar30;
  param_2 = pbVar25;
  if (SCARRY1(bVar8,cVar30) == (char)*pbVar25 < '\0') {
    cRam33100000 = cRam33100000 - cVar7;
    cVar7 = cVar7 + *pbVar25;
    pbVar36 = (byte *)CONCAT31(uVar19,cVar7);
    goto code_r0x0040390c;
  }
  do {
    *pbVar15 = *pbVar15 + (char)pbVar15;
    while( true ) {
      uVar19 = (undefined3)((uint)pbVar15 >> 8);
      cVar7 = (char)pbVar15 + '\x02';
      pbVar36 = (byte *)CONCAT31(uVar19,cVar7);
      if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbStack_10);
      cVar7 = (char)pbVar36 + *param_2;
      pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar7);
code_r0x0040390c:
      cVar28 = (char)pbVar36;
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        *pbStack_10 = *pbStack_10 + cVar28;
        goto code_r0x0040395a;
      }
      *pbVar36 = *pbVar36 + cVar28;
      bVar8 = cVar28 + 2;
      pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),bVar8);
code_r0x00403912:
      bVar37 = (POPCOUNT(bVar8) & 1U) == 0;
      if (!bVar37) goto code_r0x00403967;
      *pbVar36 = *pbVar36 + (char)pbVar36;
code_r0x00403916:
      bVar6 = (char)pbVar36 + 0x6f;
      pbVar25 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar36 >> 8),bVar6);
      bVar8 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar6;
      if (*pbVar25 == 0 || SCARRY1(bVar8,bVar6) != (char)*pbVar25 < '\0') goto code_r0x00403979;
      *pbVar25 = *pbVar25 + bVar6;
      pbVar15 = (byte *)CONCAT31((int3)(char)((uint)pbVar36 >> 8),(char)pbVar36 + -100);
      *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar6) + *(int *)(pbStack_10 + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar15 = pbStack_20;
      bVar8 = *pbStack_10;
      bVar6 = (byte)pbVar15;
      *pbStack_10 = *pbStack_10 + bVar6;
      if (CARRY1(bVar8,bVar6)) {
        *pbVar15 = *pbVar15 + bVar6;
        uVar19 = (undefined3)((uint)pbVar15 >> 8);
        bVar6 = bVar6 | pbVar15[0x400005b];
        pbVar36 = (byte *)CONCAT31(uVar19,bVar6);
        pbVar25 = pbStack_10;
        if ((char)bVar6 < '\x01') goto code_r0x00403991;
        *pbVar36 = *pbVar36 + bVar6;
        cVar7 = bVar6 + 0x28;
        pbVar36 = (byte *)CONCAT31(uVar19,cVar7);
        *(byte **)pbVar36 = pbVar36 + (uint)(0xd7 < bVar6) + *(int *)pbVar36;
        bVar8 = *pbVar33;
        bVar6 = (byte)((uint)pbVar13 >> 8);
        *pbVar33 = *pbVar33 + bVar6;
        if (CARRY1(bVar8,bVar6)) {
          *pbVar36 = *pbVar36 + cVar7;
          pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar36,(char)pbVar13));
          *pbStack_10 = *pbStack_10 + cVar7;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x55],
                                              (char)pbVar33));
          *pbVar36 = *pbVar36 + cVar7;
code_r0x00403950:
          uVar19 = (undefined3)((uint)pbVar36 >> 8);
          bVar6 = (char)pbVar36 + 0x6f;
          bVar8 = *(byte *)CONCAT31(uVar19,bVar6);
          *param_2 = *param_2 + (char)pbVar13;
          pbVar36 = (byte *)CONCAT31(uVar19,(bVar6 & bVar8) + *pbStack_10);
          *pbVar13 = *pbVar13 - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar36 = *pbVar36 + cVar7;
    cVar7 = (char)pbVar15 + '.' + *param_2;
    pbVar36 = (byte *)CONCAT31(uVar19,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      pbVar25 = param_2 + (int)pbVar36;
      *pbVar25 = *pbVar25 + cVar7;
      bVar8 = *pbVar25;
      goto code_r0x00403912;
    }
    *pbVar36 = *pbVar36 + cVar7;
    bVar8 = cVar7 + 2;
    pbVar36 = (byte *)CONCAT31(uVar19,bVar8);
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403916;
    *pbVar36 = *pbVar36 + bVar8;
    cVar28 = cVar7 + 'q';
    piVar14 = (int *)CONCAT31(uVar19,cVar28);
    *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0x90 < bVar8);
    bVar8 = *pbVar33;
    bVar6 = (byte)((uint)pbVar13 >> 8);
    *pbVar33 = *pbVar33 + bVar6;
    if (!CARRY1(bVar8,bVar6)) {
      out(*(undefined4 *)pbStack_10,(short)param_2);
      bVar8 = (cVar28 - (char)*piVar14) - CARRY1(bVar8,bVar6);
      *param_2 = *param_2 + (char)pbVar13;
      cVar7 = bVar8 - *(byte *)CONCAT31(uVar19,bVar8);
      unaff_ESI = pbStack_10 +
                  ((4 - *(int *)CONCAT31(uVar19,cVar7)) -
                  (uint)(bVar8 < *(byte *)CONCAT31(uVar19,bVar8)));
      pbVar36 = (byte *)CONCAT31(uVar19,cVar7);
      pbStack_10 = (byte *)0;
      goto code_r0x00403825;
    }
    *(char *)piVar14 = (char)*piVar14 + cVar28;
    uVar27 = (undefined2)((uint)pbVar33 >> 0x10);
    bVar8 = (byte)((uint)pbVar33 >> 8) | bRam080a0056;
    *(char *)piVar14 = (char)*piVar14 + cVar28;
    pcVar16 = (char *)CONCAT31(uVar19,cVar7 + 's');
    pbVar33 = (byte *)CONCAT22(uVar27,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar27,CONCAT11(bVar8,(
                                                  char)pbVar33)) + 0x56),(char)pbVar33));
    *pcVar16 = *pcVar16 + cVar7 + 's';
    bVar8 = cVar7 - 0xf;
    *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
    bVar6 = cVar7 + 0x1e;
    pbVar15 = (byte *)CONCAT31(uVar19,bVar6);
    *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
         pbVar13 + (uint)(0xd2 < bVar8) + *(int *)(pbStack_10 + (int)unaff_EDI * 8);
    uVar27 = *(undefined2 *)pbVar15;
    bVar8 = *pbStack_10;
    *pbStack_10 = *pbStack_10 + bVar6;
    param_2 = pbVar13;
    if (CARRY1(bVar8,bVar6)) {
      *pbVar15 = *pbVar15 + bVar6;
      pbVar36 = (byte *)CONCAT31(uVar19,bVar6 | pbVar15[0x400005a]);
      if ('\0' < (char)(bVar6 | pbVar15[0x400005a])) {
code_r0x004038f6:
        bVar8 = (byte)pbVar36;
        *pbVar36 = *pbVar36 + bVar8;
        uVar19 = (undefined3)((uint)pbVar36 >> 8);
        cVar7 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar19,bVar8 + 0x28)) - (0xd7 < bVar8);
        pbVar36 = (byte *)CONCAT31(uVar19,cVar7);
        bVar8 = *pbVar33;
        bVar6 = (byte)((uint)pbVar13 >> 8);
        *pbVar33 = *pbVar33 + bVar6;
        if (CARRY1(bVar8,bVar6)) {
          *pbVar36 = *pbVar36 + cVar7;
          pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar36,(char)pbVar13));
          *pbStack_10 = *pbStack_10 + cVar7;
          goto code_r0x00403908;
        }
        pbVar15 = pbVar36 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar36 = *pbVar36 + (char)pbVar36;
  param_2[0x16060000] = param_2[0x16060000] - (char)pbVar13;
  pbVar33 = (byte *)((uint)pbVar33 | (uint)pbStack_10);
  cVar7 = (char)pbVar36 + '\x02';
  pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar7);
  bVar37 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403967:
  if (!bVar37) goto code_r0x004039be;
  *pbVar36 = *pbVar36 + (char)pbVar36;
  uVar19 = (undefined3)((uint)pbVar36 >> 8);
  bVar8 = (char)pbVar36 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar19,bVar8);
  pbVar25 = (byte *)CONCAT31(uVar19,bVar8);
  *param_2 = *param_2 + (char)pbVar13;
  param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar8;
code_r0x00403979:
  bVar8 = (char)pbVar25 - (char)*unaff_EDI;
  bVar37 = bVar8 < *pbVar13;
  pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar8 - *pbVar13);
  do {
    cVar7 = (char)pbVar36;
    *pbVar36 = *pbVar36 + cVar7 + bVar37;
    *pbVar36 = *pbVar36 + cVar7;
    *pbVar13 = *pbVar13 + (char)param_2;
    pbVar13[0x101c00aa] = pbVar13[0x101c00aa] + (char)pbVar33;
    *pbVar36 = *pbVar36 + cVar7;
    *(byte **)pbStack_10 = pbVar33 + *(int *)pbStack_10;
    bVar8 = (byte)((uint)pbVar13 >> 8);
    pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                               CONCAT11(bVar8 + *pbVar36,(char)pbVar13));
    pbVar36 = pbVar36 + (uint)CARRY1(bVar8,*pbVar36) + *(int *)pbVar36;
    pbVar25 = pbStack_10;
code_r0x00403991:
    cVar7 = (char)pbVar13;
    *param_2 = *param_2 + cVar7;
    cVar28 = (char)pbVar33 - pbVar25[2];
    pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar28);
    pbStack_10 = pbVar25;
    if ((POPCOUNT(cVar28) & 1U) != 0) goto code_r0x0040395a;
    *pbVar36 = *pbVar36 + (byte)pbVar36;
    uVar20 = (uint3)((uint)pbVar36 >> 8);
    bVar8 = (byte)pbVar36 | *pbVar33;
    piVar14 = (int *)CONCAT31(uVar20,bVar8);
    bVar6 = (byte)((uint)pbVar13 >> 8);
    bVar23 = (byte)param_2;
    if (bVar8 == 0) {
      *(char *)piVar14 = (char)*piVar14;
      pbStack_10 = pbVar25 + 4;
      out(*(undefined4 *)pbVar25,(short)param_2);
      pbVar36 = (byte *)((uint)uVar20 << 8);
      *param_2 = *param_2 + cVar7;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar23 - *pbVar33);
      *pbVar33 = *pbVar33;
      *param_2 = *param_2 + bVar6;
      *pbVar36 = *pbVar36;
      *pbVar33 = *pbVar33 + cVar28;
      *pbVar36 = *pbVar36;
      *(byte **)(pbVar33 + -0x3d) = pbStack_10 + *(int *)(pbVar33 + -0x3d);
      break;
    }
    pbVar17 = pbVar17 + -unaff_EDI[9];
    *(byte *)piVar14 = (char)*piVar14 + bVar8;
    pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),CONCAT11(bVar6 | *param_2,cVar7));
    pbStack_10 = pbVar25 + *piVar14;
    pcVar16 = (char *)((int)piVar14 + *piVar14);
    bVar6 = (char)pcVar16 - *pcVar16;
    pbVar36 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar6);
    bVar8 = *pbVar36;
    *pbVar36 = *pbVar36 + bVar6;
    pbVar36 = pbVar36 + (-(uint)CARRY1(bVar8,bVar6) - *(int *)pbVar36);
    bVar37 = CARRY1(*pbVar13,bVar23);
    *pbVar13 = *pbVar13 + bVar23;
  } while (!bVar37);
  *pbVar36 = *pbVar36 + (char)pbVar36;
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),(byte)pbVar13 | *param_2);
code_r0x004039be:
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar17 + -0x3c));
  *pbVar36 = *pbVar36 + (byte)pbVar36;
  uVar19 = (undefined3)((uint)pbVar36 >> 8);
  bVar8 = (byte)pbVar36 | *param_2;
  pcVar16 = (char *)CONCAT31(uVar19,bVar8);
  if ((POPCOUNT(bVar8) & 1U) == 0) goto code_r0x004039c8;
  cVar7 = *pcVar16;
  *pcVar16 = *pcVar16 + bVar8;
  cVar28 = *pcVar16;
  if (!SCARRY1(cVar7,bVar8)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar16 = *pcVar16 + bVar8;
  *pbStack_10 = *pbStack_10 + 1;
  uVar4 = *(undefined6 *)CONCAT31(uVar19,bVar8 + 6);
  pbVar25 = (byte *)uVar4;
  bVar8 = *param_2;
  bVar6 = (byte)pbVar13;
  *param_2 = *param_2 + bVar6;
  if (!CARRY1(bVar8,bVar6)) goto code_r0x00403979;
  *pbVar25 = *pbVar25 + (char)uVar4;
  bVar23 = (byte)((uint)pbVar13 >> 8) | *pbVar25;
  uVar21 = CONCAT11(bVar23,bVar6);
  pbVar25 = pbVar25 + -*(int *)pbVar25;
  bVar8 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar23;
  if (CARRY1(bVar8,bVar23)) {
    cVar7 = (char)pbVar25;
    *pbVar25 = *pbVar25 + cVar7;
    bVar8 = *param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - pbVar33[-0x3a],(char)param_2));
    *pbVar25 = *pbVar25 + cVar7;
    uVar35 = (undefined2)((uint)pbVar33 >> 0x10);
    bVar10 = (byte)((uint)pbVar33 >> 8) | param_2[0x32];
    pcVar16 = (char *)CONCAT22(uVar35,CONCAT11(bVar10,(char)pbVar33));
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_CS);
    cVar28 = cVar7 + *pcVar16 + '-';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar28);
    *pbVar25 = *pbVar25;
    bVar9 = *param_2;
    cVar30 = (char)pbVar33 - *pbStack_10;
    cVar7 = *(char *)((int)unaff_EDI + 0x17);
    *pbVar25 = *pbVar25 + cVar28;
    uVar21 = CONCAT11((bVar23 | bVar8) + cVar7 | *param_2,bVar6 - bVar9);
    pbVar33 = (byte *)CONCAT22(uVar35,CONCAT11(bVar10 + *(char *)(CONCAT31((int3)((uint)pcVar16 >> 8
                                                                                 ),cVar30) + 0x4e),
                                               cVar30));
    *pbVar25 = *pbVar25 + cVar28;
  }
  pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),uVar21);
  bVar8 = (byte)pbVar25;
  uVar19 = (undefined3)((uint)pbVar25 >> 8);
  pcVar16 = (char *)CONCAT31(uVar19,bVar8 + 0x28);
  *pcVar16 = (*pcVar16 - (bVar8 + 0x28)) - (0xd7 < bVar8);
  *param_2 = *param_2 + (char)uVar21;
  bVar6 = bVar8 + 0x1b;
  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                             CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x4f],(char)pbVar33));
  *(char *)CONCAT31(uVar19,bVar6) = *(char *)CONCAT31(uVar19,bVar6) + bVar6;
  pcVar12 = (char *)CONCAT31(uVar19,bVar8 + 0x43);
  *pcVar12 = (*pcVar12 - (bVar8 + 0x43)) - (0xd7 < bVar6);
  *param_2 = *param_2 + (char)uVar21;
  pcVar16 = pcVar12 + -0x6b721c;
  pcVar12 = pcVar12 + -0x6b721a;
  *pcVar12 = *pcVar12 + (char)((uint)param_2 >> 8);
  cVar28 = *pcVar12;
code_r0x00403a22:
  if ((POPCOUNT(cVar28) & 1U) == 0) {
code_r0x00403a24:
    cVar7 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar7;
    uVar19 = (undefined3)((uint)pcVar16 >> 8);
    bVar8 = cVar7 + 2;
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
      piVar14 = (int *)CONCAT31(uVar19,cVar7 + '*');
      *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0xd7 < bVar8);
      bVar8 = *param_2;
      bVar9 = (byte)pbVar13;
      *param_2 = *param_2 + bVar9;
      out(*(undefined4 *)pbStack_10,(short)param_2);
      bVar23 = ((cVar7 + '*') - (char)*piVar14) - CARRY1(bVar8,bVar9);
      pbVar36 = (byte *)CONCAT31(uVar19,bVar23);
      *param_2 = *param_2 + bVar9;
      uVar21 = (undefined2)((uint)pbVar33 >> 0x10);
      uVar31 = SUB41(pbVar33,0);
      cVar7 = (char)((uint)pbVar33 >> 8) - pbStack_10[0x1f];
      pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(cVar7,uVar31));
      *pbVar36 = *pbVar36 + bVar23;
      bVar6 = *param_2;
      bVar8 = *pbVar36;
      *pbVar36 = *pbVar36 + bVar23;
      pbStack_10 = pbStack_10 + ((4 - *(int *)pbVar36) - (uint)CARRY1(bVar8,bVar23));
      pbVar36 = (byte *)CONCAT31(uVar19,bVar23);
      pbVar13 = (byte *)(CONCAT22((short)((uint)pbVar13 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar13 >> 8) | bVar6,bVar9)) + -1);
      bVar8 = *pbVar36;
      *pbVar36 = *pbVar36 + bVar23;
      bVar8 = (bVar23 - *pbVar36) - CARRY1(bVar8,bVar23);
      *pbVar13 = *pbVar13 + (char)param_2;
      bVar37 = CARRY1(bVar8,*param_2);
      bVar8 = bVar8 + *param_2;
      pbVar36 = (byte *)CONCAT31(uVar19,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar36 = *pbVar36 + bVar8;
        cVar28 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pbVar25 = (byte *)CONCAT31(uVar19,cVar28);
        bVar8 = *param_2;
        *param_2 = *param_2 + (char)pbVar13;
        if (SCARRY1(bVar8,(char)pbVar13) == (char)*param_2 < '\0') goto code_r0x00403aaf;
        *pbVar25 = *pbVar25 + cVar28;
        pcVar16 = (char *)CONCAT31(uVar19,cVar28 + '\x02');
        bVar6 = cVar7 + pbVar33[0x52];
        pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(bVar6,uVar31));
        *pcVar16 = *pcVar16 + cVar28 + '\x02';
        bVar8 = cVar28 + 4;
        pbVar25 = (byte *)CONCAT31(uVar19,bVar8);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pbVar25 = *pbVar25 + bVar8;
          cVar7 = (cVar28 + 's') - (0x90 < bVar8);
          pcVar16 = (char *)CONCAT31(uVar19,cVar7);
          bVar8 = (byte)((uint)pbVar13 >> 8);
          bVar37 = CARRY1(*pbVar33,bVar8);
          *pbVar33 = *pbVar33 + bVar8;
          pbVar36 = pbStack_10;
          if (bVar37) {
            *pcVar16 = *pcVar16 + cVar7;
            pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(bVar6 | pbVar17[0x5c],uVar31));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar25);
        pbVar33 = (byte *)CONCAT22(uVar21,CONCAT11(bVar6 + pbVar33[0x52],uVar31));
code_r0x00403abf:
        *pbVar25 = *pbVar25 + (char)pbVar25;
        cVar7 = (char)pbVar25 + '\x02';
        pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
        bVar37 = (POPCOUNT(cVar7) & 1U) == 0;
        pbStack_30 = pbVar17;
        if (!bVar37) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar37) {
          *pbVar36 = *pbVar36 + (byte)pbVar36;
          bVar8 = (byte)pbVar36 | pbVar36[0x400005e];
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),bVar8);
          pbStack_30 = pbVar17;
          if ((char)bVar8 < '\x01') goto code_r0x00403b0b;
          *pbVar25 = *pbVar25 + bVar8;
code_r0x00403aaf:
          cVar7 = (char)pbVar25 + '(';
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
          *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
          bVar8 = *pbVar33;
          bVar6 = (byte)((uint)pbVar13 >> 8);
          *pbVar33 = *pbVar33 + bVar6;
          pbVar15 = pbVar17;
          if (!CARRY1(bVar8,bVar6)) goto code_r0x00403ad8;
          *pbVar25 = *pbVar25 + cVar7;
          pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar33,(char)pbVar13));
          if ((POPCOUNT(*param_2 - cVar7) & 1U) != 0) {
            *pbStack_10 = *pbStack_10 + cVar7;
            pbStack_30 = pbVar17;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                   CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x53],(char)pbVar33
                                           ));
      }
      bVar8 = (byte)pbVar36;
      *pbVar36 = *pbVar36 + bVar8;
      cVar7 = (bVar8 + 0x6f) - (0x90 < bVar8);
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar7);
      bVar8 = *pbVar33;
      cVar28 = (char)((uint)pbVar13 >> 8);
      *pbVar33 = *pbVar33 + cVar28;
      pbStack_30 = pbVar17;
      if (*pbVar33 == 0 || SCARRY1(bVar8,cVar28) != (char)*pbVar33 < '\0') goto code_r0x00403b2c;
      *pcVar16 = *pcVar16 + cVar7;
    }
    else {
      pcVar16 = (char *)CONCAT31(uVar19,bVar8 + *param_2);
      pbVar36 = pbStack_10;
      if ((POPCOUNT(bVar8 + *param_2) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_10 + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < (byte)pcVar16) + *(int *)(pbStack_10 + (int)unaff_EDI * 8);
    pbVar25 = pbVar17;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 + 0x2d);
code_r0x00403ad8:
    pbStack_30 = pbVar15;
    bVar8 = *pbVar25;
    bVar6 = (byte)pbVar25;
    *pbVar25 = *pbVar25 + bVar6;
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,uVar27);
    if (!CARRY1(bVar8,bVar6)) goto code_r0x00403afc;
    *pbVar25 = *pbVar25 + bVar6;
    bVar6 = bVar6 | pbVar25[0x400005d];
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar6);
    pbVar36 = pbStack_10;
    if ((char)bVar6 < '\x01') {
      *pbVar25 = *pbVar25 + bVar6;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar13 >> 8) | *param_2,(char)pbVar13));
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                 CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[-0x39],(char)pbVar33)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar25 = *pbVar25 + (char)pbVar25;
    cVar7 = (char)pbVar25 + '(';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
    *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
    bVar8 = *pbVar33;
    bVar6 = (byte)((uint)pbVar13 >> 8);
    *pbVar33 = *pbVar33 + bVar6;
    pbStack_10 = pbVar36;
    if (!CARRY1(bVar8,bVar6)) goto code_r0x00403b0b;
    *pbVar25 = *pbVar25 + cVar7;
  }
  else {
    bVar8 = *param_2;
    *param_2 = *param_2 + (char)pbVar13;
    if (SCARRY1(bVar8,(char)pbVar13) == (char)*param_2 < '\0') {
      pbVar25 = pbVar17;
      pbVar15 = (byte *)(pcVar16 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x02');
    pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                               CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x54],(char)pbVar33));
    pbVar36 = pbStack_10;
code_r0x00403a7d:
    cVar7 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar7;
    uVar19 = (undefined3)((uint)pcVar16 >> 8);
    cVar28 = cVar7 + '-';
    pbVar15 = (byte *)CONCAT31(uVar19,cVar28);
    pbVar25 = pbVar17;
    pbStack_10 = pbVar36;
    if ((POPCOUNT(cVar28 - *param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar15 = *pbVar15 + cVar28;
    bVar8 = cVar7 + 0x2f;
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      bVar8 = *param_2;
      *param_2 = *param_2 + (byte)pbVar13;
      *pbVar17 = *pbVar17 - CARRY1(bVar8,(byte)pbVar13);
      pbVar25 = (byte *)CONCAT31(uVar19,cVar7 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
    bVar37 = 0x90 < bVar8;
    pcVar16 = (char *)CONCAT31(uVar19,cVar7 + -0x62);
code_r0x00403a8f:
    uVar19 = (undefined3)((uint)pcVar16 >> 8);
    bVar6 = (char)pcVar16 - bVar37;
    pbVar25 = (byte *)CONCAT31(uVar19,bVar6);
    bVar8 = *pbVar33;
    cVar7 = (char)((uint)pbVar13 >> 8);
    *pbVar33 = *pbVar33 + cVar7;
    pbStack_30 = pbVar17;
    pbStack_10 = pbVar36;
    if (*pbVar33 != 0 && SCARRY1(bVar8,cVar7) == (char)*pbVar33 < '\0') {
      *pbVar25 = *pbVar25 + bVar6;
      pbStack_10 = (byte *)CONCAT31(uVar19,bVar6 + 0x2d);
      *(byte **)(pbVar36 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar6) + *(int *)(pbVar36 + (int)unaff_EDI * 8);
      bVar37 = CARRY1(*pbVar36,(byte)pbVar36);
      *pbVar36 = *pbVar36 + (byte)pbVar36;
      goto code_r0x00403aa1;
    }
  }
  pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                             CONCAT11((byte)((uint)pbVar13 >> 8) | *pbVar25,(char)pbVar13));
  *pbStack_10 = *pbStack_10 + (char)pbVar25;
code_r0x00403afc:
  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                             CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x55],(char)pbVar33));
  *pbVar25 = *pbVar25 + (char)pbVar25;
  uVar19 = (undefined3)((uint)pbVar25 >> 8);
  bVar6 = (char)pbVar25 + 0x6f;
  bVar8 = *(byte *)CONCAT31(uVar19,bVar6);
  *param_2 = *param_2 + (char)pbVar13;
  pbVar25 = (byte *)CONCAT31(uVar19,(bVar6 & bVar8) + *pbStack_10);
  *pbVar13 = *pbVar13 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    bVar8 = (byte)pbVar25 | *pbVar33;
    piVar14 = (int *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar8);
    if (bVar8 != 0) {
      pbStack_30 = pbStack_30 + -unaff_EDI[9];
      *(byte *)piVar14 = (char)*piVar14 + bVar8;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar13 >> 8) | *param_2,(char)pbVar13));
      pbStack_34 = pbStack_34 + *piVar14;
      pcVar16 = (char *)((int)piVar14 + *piVar14);
      uVar19 = (undefined3)((uint)pcVar16 >> 8);
      bVar6 = (char)pcVar16 - *pcVar16;
      pbVar36 = (byte *)CONCAT31(uVar19,bVar6);
      bVar8 = *pbVar36;
      *pbVar36 = *pbVar36 + bVar6;
      piVar14 = (int *)CONCAT31(uVar19,bVar6 - CARRY1(bVar8,bVar6));
    }
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    pbStack_10 = pbStack_34 + 4;
    out(*(undefined4 *)pbStack_34,(short)param_2);
    pbVar25 = (byte *)(((uint)piVar14 >> 8) * 0x100);
    *param_2 = *param_2 + (byte)pbVar13;
    bVar8 = (char)param_2 - *pbVar33;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar8);
    *pbVar33 = *pbVar33;
    *param_2 = *param_2 + (char)((uint)pbVar13 >> 8);
    *pbVar25 = *pbVar25;
    pcVar16 = (char *)(((uint)piVar14 >> 8) * 0x200);
    *pcVar16 = *pcVar16 + (char)pbVar33;
    bVar37 = CARRY1(*pbVar13,bVar8);
    *pbVar13 = *pbVar13 + bVar8;
    pbStack_34 = pbStack_10;
    if (bVar37) break;
    while( true ) {
      *(byte **)pbVar25 = pbVar25 + (uint)bVar37 + *(int *)pbVar25;
      unaff_EDI = unaff_EDI + 1;
      pbVar25[(int)param_2] = pbVar25[(int)param_2] + (char)pbVar33;
      *pbVar25 = *pbVar25 + (char)pbVar25;
      *(byte **)pbStack_34 = pbVar33 + *(int *)pbStack_34;
      bVar8 = (byte)((uint)pbVar13 >> 8);
      cVar7 = (char)pbVar13;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),CONCAT11(bVar8 + *pbVar25,cVar7));
      pbVar25 = pbVar25 + (uint)CARRY1(bVar8,*pbVar25) + *(int *)pbVar25;
      *param_2 = *param_2 + cVar7;
      cVar7 = (char)pbVar33 - pbStack_34[2];
      pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar7);
      pbStack_10 = pbStack_34;
      if ((POPCOUNT(cVar7) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar25 = *pbVar25 + (char)pbVar25;
      param_2[0x16060000] = param_2[0x16060000] - (char)pbVar13;
      pbVar33 = (byte *)((uint)pbVar33 | (uint)pbStack_10);
      cVar7 = (char)pbVar25 + '\x02';
      pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar7);
      bVar37 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403b18:
      bVar8 = (byte)pbVar36;
      uVar19 = (undefined3)((uint)pbVar36 >> 8);
      if (!bVar37) {
        *param_2 = *param_2 + (char)pbVar13;
        pbVar25 = (byte *)CONCAT31(uVar19,bVar8 | *pbStack_10);
code_r0x00403b73:
        pbVar36 = (byte *)((int)unaff_EDI + *(int *)(pbStack_30 + -0x37));
        *pbVar25 = *pbVar25 + (byte)pbVar25;
        uVar19 = (undefined3)((uint)pbVar25 >> 8);
        bVar8 = (byte)pbVar25 | *param_2;
        pcVar16 = (char *)CONCAT31(uVar19,bVar8);
        uVar38 = CONCAT44(param_2,pcVar16);
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          *pcVar16 = *pcVar16 + bVar8;
          *pbStack_10 = *pbStack_10 + 1;
          return (byte *)CONCAT31(uVar19,bVar8 + 6);
        }
        bVar8 = *pbStack_10;
        *pbStack_10 = *pbStack_10 + 1;
        pcVar3 = (code *)swi(4);
        if (SCARRY1(bVar8,'\x01')) {
          uVar38 = (*pcVar3)();
          pbVar13 = extraout_ECX;
        }
        pbVar17 = (byte *)uVar38;
        *pbVar17 = *pbVar17 + (char)uVar38;
        cVar28 = (char)((ulonglong)uVar38 >> 0x20);
        puVar26 = (uint *)CONCAT22((short)((ulonglong)uVar38 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar38 >> 0x28) | pbVar33[0x2f],cVar28
                                           ));
        *pbVar17 = *pbVar17 + (char)uVar38;
        cVar7 = (char)pbVar13;
        bVar23 = (byte)((uint)pbVar13 >> 8) | *pbVar17;
        pbVar17 = pbVar17 + *(int *)pbVar17;
        bVar8 = *pbVar33;
        *pbVar33 = *pbVar33 + bVar23;
        bVar6 = (byte)pbVar17;
        if (CARRY1(bVar8,bVar23)) {
          *pbVar17 = *pbVar17 + bVar6;
          bVar23 = bVar23 | (byte)*puVar26;
          *pbVar33 = *pbVar33 - cVar28;
          *pbVar17 = *pbVar17 + bVar6;
          uVar19 = (undefined3)((uint)pbVar17 >> 8);
          bVar6 = bVar6 | (byte)*puVar26;
          piVar14 = (int *)CONCAT31(uVar19,bVar6);
          pbStack_30 = pbStack_30 + *piVar14;
          *(byte *)piVar14 = (char)*piVar14 + bVar6;
          cVar28 = (char)pbVar33 - *pbStack_10;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((char)((uint)pbVar33 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar33 >> 8),cVar28)
                                                       + 0x5f),cVar28));
          *(byte *)piVar14 = (char)*piVar14 + bVar6;
          bVar8 = bVar6 + 0x2a & (byte)*puVar26;
          pbVar36 = pbVar36 + *(int *)(pbStack_30 + 0x5f);
          *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
          pbVar17 = (byte *)CONCAT31(uVar19,bVar8 + 0x2a);
          *(byte *)puVar26 = (byte)*puVar26 + 0x28;
          *pbVar17 = *pbVar17 + bVar8 + 0x2a;
        }
        else {
          *pbStack_10 = *pbStack_10 + bVar6;
        }
        pcVar16 = (char *)CONCAT22((short)((uint)pbVar13 >> 0x10),CONCAT11(bVar23,cVar7));
        *pbStack_30 = *pbStack_30 - bVar23;
        *(byte *)puVar26 = (byte)*puVar26 + cVar7;
        bVar8 = (byte)pbVar17 - 0xb;
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar8);
        if (10 < (byte)pbVar17) {
          *pbVar13 = *pbVar13 | bVar8;
          return pbVar13;
        }
        *(byte *)puVar26 = (byte)*puVar26 + cVar7;
        do {
          bVar8 = pbVar33[-0x23];
          bVar23 = (byte)pbVar13;
          *pbVar13 = *pbVar13 + bVar23;
          bVar6 = pbStack_30[-0x22];
          *pbVar13 = *pbVar13 + bVar23;
          uVar19 = (undefined3)((uint)pbVar13 >> 8);
          bVar23 = bVar23 | *pbStack_10;
          pbVar17 = (byte *)CONCAT31(uVar19,bVar23);
          cVar28 = (char)pbVar33 - *pbStack_10;
          pbVar33 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar33 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar33 >> 8) + bVar8 |
                                                              bVar6,(char)pbVar33)) >> 8),cVar28);
          cVar7 = (char)pcVar16;
          pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                     CONCAT11((char)((uint)pcVar16 >> 8) + *pbVar17,cVar7));
          *(byte *)puVar26 = (byte)*puVar26 + cVar7;
          bVar6 = bVar23 - *pbVar17;
          pbVar13 = (byte *)CONCAT31(uVar19,bVar6);
          pbStack_10 = pbStack_10 + (-(uint)(bVar23 < *pbVar17) - *(int *)pbVar13);
          puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 * '\x02');
          *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
          *pbVar36 = *pbVar36 + cVar28;
          bVar8 = *pbVar13;
          *pbVar13 = *pbVar13 + bVar6;
          *puVar26 = (uint)(pbVar13 + (uint)CARRY1(bVar8,bVar6) + *puVar26);
        } while ((POPCOUNT(*puVar26 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar13 = *pbVar13 + (char)pbVar13;
        pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),(byte)pcVar16 | pbVar13[(int)pcVar16])
        ;
        bVar37 = false;
        pbVar13 = (byte *)((uint)pbVar13 & 0xffffff00);
        do {
          pbVar36 = pbVar36 + (-(uint)bVar37 - *(int *)pbVar33);
          pcVar12 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),*pcVar16);
          *pcVar12 = *pcVar12 + *pcVar16;
          pbVar13 = (byte *)CONCAT31((int3)((uint)(pcVar12 +
                                                  (pbStack_10[0x2000001] <
                                                  (byte)((uint)pcVar16 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar12 +
                                            (pbStack_10[0x2000001] < (byte)((uint)pcVar16 >> 8)) +
                                            0xda7d) | (byte)*puVar26) + 0x7d);
          pcVar16 = pcVar16 + -1;
          *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar16;
          while( true ) {
            uVar24 = (undefined3)((uint)puVar26 >> 8);
            cVar7 = (char)puVar26 + *(char *)((int)pbVar36 * 2 + 0xa0000e1);
            puVar26 = (uint *)CONCAT31(uVar24,cVar7);
            bVar37 = CARRY1((byte)pbVar13,(byte)*puVar26);
            uVar19 = (undefined3)((uint)pbVar13 >> 8);
            bVar8 = (byte)pbVar13 + (byte)*puVar26;
            pbVar13 = (byte *)CONCAT31(uVar19,bVar8);
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *pbVar13 = *pbVar13 + bVar8;
            cVar28 = (char)pcVar16;
            pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar16 >> 8) | pbVar36[-0x65],cVar28))
            ;
            bVar6 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar8;
            if (CARRY1(bVar6,bVar8)) {
              *pbVar13 = *pbVar13 + bVar8;
              pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar33 >> 8) | pbStack_30[-0x1d],
                                                  (char)pbVar33));
              *pbVar13 = *pbVar13 + bVar8;
              bVar37 = false;
              bVar8 = bVar8 | (byte)*puVar26;
              pcVar12 = (char *)CONCAT31(uVar19,bVar8);
              while( true ) {
                bVar6 = (byte)pcVar12;
                uVar19 = (undefined3)((uint)pcVar12 >> 8);
                if (bVar37 == (char)bVar8 < '\0') break;
                *pcVar12 = *pcVar12 + bVar6;
                bVar6 = bVar6 | (byte)*puVar26;
                puVar18 = (uint *)CONCAT31(uVar19,bVar6);
                *pbVar36 = *pbVar36 << 1 | (char)*pbVar36 < '\0';
                uVar1 = *puVar18;
                *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                pbStack_30 = pbStack_30 + (-(uint)CARRY1((byte)uVar1,bVar6) - *puVar18);
                *puVar18 = *puVar18 << 1 | (uint)((int)*puVar18 < 0);
                while( true ) {
                  uVar1 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26 + (byte)pcVar16;
                  cVar7 = (char)puVar18 + 'o' + CARRY1((byte)uVar1,(byte)pcVar16);
                  pcVar12 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar7);
                  pcVar16 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar7) & 1U) != 0) break;
                  *pcVar12 = *pcVar12 + cVar7;
                  bVar8 = bRamfe140212;
                  pcVar16 = (char *)0x0;
                  uVar19 = (undefined3)((uint)(pcVar12 + -0x732b0000) >> 8);
                  bVar6 = in(0);
                  puVar18 = (uint *)CONCAT31(uVar19,bVar6);
                  uVar1 = *puVar26;
                  *(byte *)puVar26 = (byte)*puVar26;
                  if (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar26 < '\0') {
                    *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                    bVar6 = bVar6 | (byte)*puVar26;
                    puVar18 = (uint *)CONCAT31(uVar19,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                      pcVar16 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar8 | (byte)*puVar18) << 8);
                      *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                    puVar18 = (uint *)CONCAT31(uVar19,bVar6 | (byte)*puVar26);
                  }
                }
                *(byte *)puVar26 = (byte)*puVar26;
                bVar37 = SCARRY1((char)puVar26,*pbVar36);
                bVar8 = (char)puVar26 + *pbVar36;
                puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),bVar8);
              }
              if (bVar37 == (char)bVar8 < '\0') {
                *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar16;
                pbVar13 = (byte *)((uint)pcVar12 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar12 = *pcVar12 + bVar6;
              pbVar13 = (byte *)CONCAT31(uVar19,(bVar6 | (byte)*puVar26) + 0x7d);
              pcVar16 = pcVar16 + -1;
              *(byte *)puVar26 = (byte)*puVar26 + (char)pcVar16;
            }
            else {
              *(byte *)puVar26 = (byte)*puVar26 + cVar28;
              puVar26 = (uint *)CONCAT31(uVar24,cVar7 + *(char *)((int)pbVar36 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar36 = *pbVar36 + bVar8;
      bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar19,bVar8 + 0x6f);
      *param_2 = *param_2 + (char)pbVar13;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
      *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar8;
      pcVar16 = (char *)CONCAT31(uVar19,bVar8 - (char)*unaff_EDI);
code_r0x00403b2c:
      bVar8 = (char)pcVar16 - *pcVar16;
      pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar8);
      *pbVar25 = *pbVar25 + bVar8;
      *(byte **)pbVar25 = param_2 + *(int *)pbVar25;
      *pbVar25 = *pbVar25 + bVar8;
      bVar37 = CARRY1(*pbVar25,bVar8);
      *pbVar25 = *pbVar25 + bVar8;
      pbStack_34 = pbStack_10;
    }
  }
  *pbVar25 = *pbVar25;
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),(byte)pbVar13 | *param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_30 = pbStack_30 + -*puVar18;
  do {
    bVar8 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar8;
    pbVar36 = pbVar36 + -*(int *)(pbStack_30 + -0x1a);
    *(byte *)puVar18 = (byte)*puVar18 + bVar8;
    bVar8 = bVar8 | (byte)*puVar26;
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar8);
    *(byte *)puVar18 = (byte)*puVar18 | bVar8;
    bVar8 = (byte)*puVar18;
    pbStack_30 = (byte *)0x2700001;
    while ((POPCOUNT(bVar8) & 1U) == 0) {
      do {
        *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
        bVar8 = (byte)puVar18 | (byte)*puVar26;
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        uVar20 = CONCAT21((short)((uint)pcVar16 >> 0x10),(byte)((uint)pcVar16 >> 8) | bRamfe140212);
        while( true ) {
          pcVar16 = (char *)((uint)uVar20 << 8);
          bVar9 = (byte)puVar18;
          *(byte *)puVar18 = (byte)*puVar18 & bVar9;
          bVar23 = *pbVar33;
          bVar10 = (byte)uVar20;
          bVar6 = *pbVar33;
          *pbVar33 = *pbVar33 + bVar10;
          bVar8 = *pbVar33;
          if (!CARRY1(bVar23,bVar10)) break;
          *(byte *)puVar18 = (byte)*puVar18 + bVar9;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar33 >> 8) | bRam026fffe2,
                                              (char)pbVar33));
          *(byte *)puVar18 = (byte)*puVar18 + bVar9;
          bVar9 = bVar9 | (byte)*puVar26;
          puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar9);
          bVar37 = (POPCOUNT(bVar9) & 1U) == 0;
          while( true ) {
            cVar7 = (char)((uint)pbVar33 >> 8);
            uVar27 = (undefined2)((uint)pbVar33 >> 0x10);
            if (!bVar37) {
              *(byte *)puVar26 = (byte)*puVar26;
              pbVar33 = (byte *)CONCAT22(uVar27,CONCAT11(cVar7 + pbVar33[-0x1f],(char)pbVar33));
              goto code_r0x00403d52;
            }
            *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
            uVar21 = (undefined2)((uint)pcVar16 >> 0x10);
            bVar6 = (byte)((uint)pcVar16 >> 8) | (byte)*puVar18;
            uVar20 = CONCAT21(uVar21,bVar6);
            *puVar18 = *puVar18 & (uint)puVar18;
            *pbVar33 = *pbVar33 + bVar6;
            uVar19 = (undefined3)((uint)puVar18 >> 8);
            bVar8 = (char)puVar18 - bVar6;
            pcVar16 = (char *)CONCAT31(uVar19,bVar8);
            *pcVar16 = *pcVar16 + bVar8;
            bVar8 = bVar8 | (byte)*puVar26;
            puVar18 = (uint *)CONCAT31(uVar19,bVar8);
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *(byte *)puVar18 = (byte)*puVar18 + bVar8;
            pcVar16 = (char *)((uint)CONCAT21(uVar21,bVar6 | (byte)*puVar18) << 8);
            *puVar18 = *puVar18 - (int)puVar18;
            *(byte *)puVar26 = (byte)*puVar26;
            pbVar33 = (byte *)CONCAT22(uVar27,CONCAT11(cVar7 + pbVar33[-0x1d],(char)pbVar33));
            do {
              *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
              uVar27 = (undefined2)((uint)puVar26 >> 0x10);
              cVar7 = (char)puVar26;
              bVar8 = (byte)((uint)puVar26 >> 8) | pbVar33[-0x17];
              puVar26 = (uint *)CONCAT22(uVar27,CONCAT11(bVar8,cVar7));
              *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
              pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar33 >> 8) | bRam026fffeb,
                                                  (char)pbVar33));
              do {
                *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
                uVar19 = (undefined3)((uint)puVar18 >> 8);
                bVar23 = (byte)puVar18 | (byte)*puVar26;
                pcVar12 = (char *)CONCAT31(uVar19,bVar23);
                bVar6 = pbVar33[-0x16];
                *pcVar12 = *pcVar12 + bVar23;
                pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                           CONCAT11((char)((uint)pbVar33 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar33));
                *pcVar12 = *pcVar12 + bVar23;
                pbVar13 = (byte *)CONCAT31(uVar19,bVar23 | (byte)*puVar26);
                while( true ) {
                  *pbVar13 = *pbVar13 + (byte)pbVar13;
                  uVar19 = (undefined3)((uint)pbVar13 >> 8);
                  bVar6 = (byte)pbVar13 | (byte)*puVar26;
                  puVar18 = (uint *)CONCAT31(uVar19,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                  bVar23 = pbVar36[-0x14];
                  *(byte *)puVar18 = (byte)*puVar18 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar26;
                  pcVar12 = (char *)CONCAT31(uVar19,bVar6);
                  bVar9 = pbVar33[-0x15];
                  *pcVar12 = *pcVar12 + bVar6;
                  pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),
                                                    (byte)((uint)pcVar16 >> 8) | bVar23 |
                                                    pbVar36[-0x13]) << 8);
                  *pcVar12 = *pcVar12 + bVar6;
                  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                             CONCAT11((char)((uint)pbVar33 >> 8) + bVar9 |
                                                      bRam026fffef,(char)pbVar33));
                  *pcVar12 = *pcVar12 + bVar6;
                  pbVar13 = (byte *)CONCAT31(uVar19,bVar6 | (byte)*puVar26);
                  do {
                    do {
                      bVar23 = (byte)pbVar13;
                      *pbVar13 = *pbVar13 + bVar23;
                      cVar30 = (char)pbVar33;
                      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar33 >> 8) | *pbVar13,
                                                          cVar30));
                      *pbVar13 = bVar23;
                      *pbVar13 = *pbVar13 + bVar23;
                      cVar28 = (char)((uint)pcVar16 >> 8) + *pbVar13;
                      pcVar16 = (char *)((uint)CONCAT21((short)((uint)pcVar16 >> 0x10),cVar28) << 8)
                      ;
                      uVar19 = (undefined3)((uint)pbVar13 >> 8);
                      bVar23 = bVar23 & *pbVar13;
                      pbVar13 = (byte *)CONCAT31(uVar19,bVar23);
                      bVar6 = *pbVar33;
                      *pbVar33 = *pbVar33 + cVar28;
                    } while (SCARRY1(bVar6,cVar28) == (char)*pbVar33 < '\0');
                    *pbVar13 = *pbVar13 + bVar23;
                    bVar23 = bVar23 | (byte)*puVar26;
                    pbVar13 = (byte *)CONCAT31(uVar19,bVar23);
                    if ((POPCOUNT(bVar23) & 1U) == 0) {
                      *pbVar13 = *pbVar13 + bVar23;
                      *pbVar13 = *pbVar13 + bVar23;
                      cVar7 = cVar7 - bVar8;
                      pbVar33 = (byte *)CONCAT31((int3)((uint)puVar26 >> 8),cVar7);
                      *pbVar13 = *pbVar13 + bVar23;
                      bRam0312382b = bRam0312382b | *pbVar33;
                      while( true ) {
                        bVar6 = (byte)pbVar13;
                        *pbVar13 = *pbVar13 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar36 + 0x21b0000)[(int)pbVar13];
                        uVar19 = (undefined3)((uint)pbVar13 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar33 = *pbVar33 + bRam0312382b;
                        pbVar13 = (byte *)CONCAT31(uVar19,bVar6 | *pbStack_10);
                      }
                      *pbVar13 = *pbVar13 + bVar6;
                      bVar6 = bVar6 | *pbStack_10;
                      pcVar16 = (char *)CONCAT31(uVar19,bVar6);
                      out(*(undefined4 *)pbStack_10,(short)pbVar33);
                      *pcVar16 = *pcVar16 + bVar6;
                      uVar21 = CONCAT11(bVar8 | bRam6f0a002b,cVar7);
                      pcVar12 = (char *)CONCAT22(uVar27,uVar21);
                      *pcVar16 = *pcVar16 + bVar6;
                      *pcVar12 = *pcVar12 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_10 + 4),uVar21);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar30 + *pcVar16);
                  } while (SCARRY1(cVar30,*pcVar16) != (char)(cVar30 + *pcVar16) < '\0');
                }
                uVar1 = *puVar26;
                *(byte *)puVar26 = (byte)*puVar26;
              } while (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar26 < '\0');
              *(byte *)puVar26 = (byte)*puVar26;
              *pcVar16 = *pcVar16 - (char)pbVar33;
              *(byte *)puVar18 = (byte)*puVar18 + bVar6;
              bVar6 = bVar6 | (byte)*puVar26;
              puVar18 = (uint *)CONCAT31(uVar19,bVar6);
              bVar37 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar37);
          }
        }
      } while (SCARRY1(bVar6,bVar10));
    }
    *pbVar33 = *pbVar33 + (char)((uint)pcVar16 >> 8);
    *pbVar36 = *pbVar36 - (char)pbVar33;
  } while( true );
}


