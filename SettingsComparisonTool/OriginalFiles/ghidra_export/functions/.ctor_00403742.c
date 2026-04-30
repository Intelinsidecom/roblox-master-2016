/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403742
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(undefined4 param_1, char * param_2)
 * Local Vars  : param_1, param_2, pbStack_38, pbStack_34, pbStack_24, pbStack_14, pcStack_4, uVar1, pcVar2, uVar3, iVar4, bVar5, cVar6, bVar7, bVar8, bVar9, in_EAX, iVar10, pcVar11, pbVar12, pbVar13, piVar14, pbVar15, pcVar16, pbVar17, puVar18, uVar19, uVar20, uVar21, puVar22, extraout_ECX, bVar23, uVar24, uVar25, pbVar26, puVar27, cVar28, cVar29, cVar30, uVar31, unaff_EBX, uVar32, uVar33, pbVar34, cVar35, uVar36, unaff_EBP, pbVar37, unaff_ESI, puVar38, unaff_EDI, in_ES, in_CS, in_SS, in_DS, bVar39, in_AF, uVar40
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall _ctor(undefined4 param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char *in_EAX;
  undefined3 uVar19;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
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
  undefined2 uVar25;
  byte *pbVar26;
  uint *puVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 uVar31;
  char cVar35;
  uint unaff_EBX;
  uint uVar32;
  uint uVar33;
  byte *pbVar34;
  undefined2 uVar36;
  char *unaff_EBP;
  byte *pbVar37;
  int unaff_ESI;
  undefined4 *puVar38;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar39;
  byte in_AF;
  undefined8 uVar40;
  byte *pbStack_38;
  byte *pbStack_34;
  byte *pbStack_24;
  byte *pbStack_14;
  char *pcStack_4;
  byte bVar23;
  
                    /* .NET CLR Managed Code */
  bVar23 = (char)((uint)param_1 >> 8) + *in_EAX;
  puVar22 = (undefined1 *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar23,(char)param_1));
  uVar32 = unaff_EBX & 0xffffff00;
  *param_2 = *param_2 + (char)param_1;
  uVar19 = (undefined3)((uint)in_EAX >> 8);
  bVar5 = (char)in_EAX - *in_EAX;
  pbVar13 = (byte *)CONCAT31(uVar19,bVar5);
  bVar7 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar5;
  puVar38 = (undefined4 *)(unaff_ESI + *(int *)pbVar13 + (uint)CARRY1(bVar7,bVar5));
  pbVar17 = (byte *)CONCAT31(uVar19,bVar5);
  pbVar13 = (byte *)(puVar38 + 1);
  out(*puVar38,(short)param_2);
  *pbVar17 = *pbVar17 + bVar5;
  *puVar22 = *puVar22;
  bVar7 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar5;
  *(int *)(uVar32 - 0x49) = (int)(pbVar13 + (uint)CARRY1(bVar7,bVar5) + *(int *)(uVar32 - 0x49));
  *pbVar17 = *pbVar17 + bVar5;
  pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_SS);
  iVar10 = CONCAT31(0x1f0a00,CARRY1(bVar23,*pbVar17) + 'o') + *(int *)(unaff_EBP + uVar32) +
           (uint)(0x90 < CARRY1(bVar23,*pbVar17)) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)param_2;
  pcVar11 = (char *)(CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 + -0x66) | *unaff_EDI);
  bVar7 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar16 = (char *)CONCAT22(0xd0a,(ushort)bVar7 << 8);
  *pcVar11 = *pcVar11 + (char)pcVar11;
  puVar22 = (undefined1 *)
            CONCAT22((short)((uint)param_2 >> 0x10),
                     CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBP[uVar32],(byte)param_2));
  *pcVar16 = *pcVar16 + (char)pcVar11;
  *unaff_EBP = *unaff_EBP - bVar7;
  *puVar22 = *puVar22;
  pbVar12 = (byte *)(((uint)pcVar11 | 8) + 0x4490f9d8);
  bVar7 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar7;
  bVar5 = (byte)param_2 | *pbVar13;
  pbVar17 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),bVar5);
  *(uint *)(pbVar13 + (int)pbVar12) = *(uint *)(pbVar13 + (int)pbVar12) ^ (uint)pcVar16;
  uVar21 = SUB42(pbVar17,0);
  *pbVar12 = *pbVar12 | bVar7;
  bVar39 = false;
  uRam2609fffc = in_ES;
  *pbVar12 = *pbVar12 | bVar7;
  do {
    uVar25 = in_ES;
    uVar33 = uVar32;
    out(*(undefined4 *)pbVar13,uVar21);
    out(*(undefined4 *)(pbVar13 + 4),uVar21);
    puVar27 = (uint *)((int)unaff_EDI + (int)pbVar17);
    uVar32 = *puVar27;
    uVar1 = *puVar27;
    *puVar27 = (uint)(pbVar12 + uVar1 + bVar39);
    cVar6 = (char)(pcStack_4 +
                  (uint)(CARRY4(uVar32,(uint)pbVar12) ||
                        CARRY4((uint)(pbVar12 + uVar1),(uint)bVar39)) +
                  *(int *)(pcVar16 + (int)pbVar17)) + '\t';
    pbVar13 = (byte *)CONCAT31((int3)((uint)(pcStack_4 +
                                            (uint)(CARRY4(uVar32,(uint)pbVar12) ||
                                                  CARRY4((uint)(pbVar12 + uVar1),(uint)bVar39)) +
                                            *(int *)(pcVar16 + (int)pbVar17)) >> 8),cVar6);
    out(uRam260a0000,uVar21);
    *pbVar13 = *pbVar13 + cVar6;
    bVar23 = (byte)((uint)pcVar16 >> 8) | *pbVar17;
    bVar7 = *pbVar13;
    pbVar13 = pbVar13 + (uint)CARRY1(bVar23,*pbVar13) + *(int *)pbVar13;
    *pbVar17 = *pbVar17 + 6;
    cVar28 = (char)uVar33 - cRam260a0004;
    in_ES = CONCAT11(bVar23 + bVar7 + *pbVar13,6);
    pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),in_ES);
    *pbVar13 = *pbVar13;
    uVar19 = (undefined3)((uint)pbVar13 >> 8);
    cVar6 = (char)pbVar13 - *pbVar13;
    piVar14 = (int *)CONCAT31(uVar19,cVar6);
    pbVar13 = (byte *)(*piVar14 + 0x260a0004);
    bVar7 = cVar6 + (char)*piVar14;
    pbVar12 = (byte *)CONCAT31(uVar19,bVar7);
    *pbVar12 = *pbVar12 + bVar7;
    *pbVar12 = *pbVar12 + bVar7;
    *pbVar12 = *pbVar12 + bVar7;
    bVar39 = CARRY1(*pbVar17,bVar7);
    *pbVar17 = *pbVar17 + bVar7;
    uVar32 = CONCAT31((int3)(uVar33 >> 8),cVar28);
    pcStack_4 = pcVar16;
  } while (!bVar39);
  *pbVar12 = *pbVar12 + bVar7;
  pbVar34 = (byte *)CONCAT22((short)(uVar33 >> 0x10),
                             CONCAT11((byte)(uVar33 >> 8) | bRam080a0056,cVar28));
  *pbVar12 = *pbVar12 + bVar7;
  bVar8 = bVar7 + 2;
  *pbVar34 = *pbVar34 - bVar5;
  *(char *)CONCAT31(uVar19,bVar8) = *(char *)CONCAT31(uVar19,bVar8) + bVar8;
  bVar5 = *pbVar13;
  uVar24 = (undefined3)((uint)pcVar16 >> 8);
  pbVar12 = (byte *)(CONCAT31(uVar24,bVar5) | 6);
  bVar23 = 9 < (bVar7 + 0x74 & 0xf) | in_AF;
  bVar9 = bVar7 + 0x74 + bVar23 * '\x06';
  bVar9 = bVar9 + (0x90 < (bVar9 & 0xf0) | 0x8d < bVar8 | bVar23 * (0xf9 < bVar9)) * '`';
  pbVar26 = (byte *)CONCAT31(uVar19,bVar9);
  bVar7 = *pbVar26;
  *pbVar26 = *pbVar26 + bVar9;
  if (!SCARRY1(bVar7,bVar9)) {
    *pbVar13 = *pbVar13 + bVar9;
    pbVar13 = pbVar13 + *(int *)(pbVar17 + 0x33);
    *pbVar26 = *pbVar26 | bVar9;
    *pbVar13 = *pbVar13 + bVar9;
    bVar7 = bVar9 + 0x72;
    *(byte *)CONCAT31(uVar19,bVar7) = *(byte *)CONCAT31(uVar19,bVar7) | bVar7;
    *pbVar13 = *pbVar13 + bVar7;
    pbVar12 = (byte *)CONCAT31(uVar24,(bVar5 | 6) + *pbVar13);
    pcVar11 = (char *)CONCAT31(uVar19,bVar9 - 0x11);
    *pcVar11 = *pcVar11 + (bVar9 - 0x11);
    pbVar26 = (byte *)CONCAT31(uVar19,bVar9 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar26 = *pbVar26 + (bVar9 - 0xf);
  }
code_r0x00403825:
  pbVar37 = (byte *)0x80a0000;
  uVar19 = (undefined3)((uint)pbVar26 >> 8);
  cVar6 = (char)pbVar26 + '\x7f';
  pcVar11 = (char *)CONCAT31(uVar19,cVar6);
  *pcVar11 = *pcVar11 + cVar6;
  iVar10 = CONCAT31(uVar19,(char)pbVar26 + -0x7f) + 0x547d;
  cVar6 = (char)iVar10;
  uVar19 = (undefined3)((uint)iVar10 >> 8);
  cVar28 = cVar6 + '*';
  pcVar11 = (char *)CONCAT31(uVar19,cVar28);
  pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | *pbVar13);
  cVar29 = (char)pbVar34 - *pbVar13;
  uVar21 = (undefined2)((uint)pbVar34 >> 0x10);
  cVar35 = (char)((uint)pbVar34 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar34 >> 8),cVar29) + 0x57);
  *pcVar11 = *pcVar11 + cVar28;
  bVar7 = cVar6 + 0x54U & *pbVar26;
  iVar10 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
  pcVar11 = (char *)CONCAT31(uVar19,bVar7 + 0x2a);
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_DS);
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar35,cVar29)) + 0x58);
  *pcVar11 = *pcVar11 + bVar7 + 0x2a;
  bVar5 = bVar7 + 0x54 & *pbVar26;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
  pcVar11 = (char *)CONCAT31(uVar19,bVar5 + 0x2a);
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar35,cVar29)) + 0x55);
  *pcVar11 = *pcVar11 + bVar5 + 0x2a;
  pcVar11 = (char *)CONCAT31(uVar19,bVar5 + 0x57);
  pbVar26 = pbVar26 + *(int *)pbStack_14;
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar35,cVar29)) + 0x55);
  *pcVar11 = *pcVar11 + bVar5 + 0x57;
  cVar6 = bVar5 - 0x3a;
  pcVar11 = (char *)CONCAT31(uVar19,cVar6);
  *pcVar11 = *pcVar11 + cVar6;
  bVar7 = *pbVar26;
  cVar30 = (char)pbVar12;
  pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar35,
                                                  cVar29)) + 0x59),cVar29));
  *pcVar11 = *pcVar11 + cVar6;
  bVar23 = bVar5 - 0x10 & *pbVar26;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar10);
  *(char *)CONCAT31(uVar19,bVar23) = *(char *)CONCAT31(uVar19,bVar23) + bVar23;
  bVar23 = bVar23 + 0x2a;
  pbVar13 = (byte *)CONCAT31(uVar19,bVar23);
  cVar6 = *(char *)((int)unaff_EDI + 0x17);
  *pbVar13 = *pbVar13 + bVar23;
  bVar5 = *pbVar26;
  pbStack_24 = (byte *)CONCAT22(pbStack_24._2_2_,in_DS);
  cVar28 = *(char *)((int)unaff_EDI + 0x1a);
  *pbVar13 = *pbVar13 + bVar23;
  pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar12 >> 8) | bVar7) + cVar6 | bVar5) +
                                      cVar28 | *pbVar26,cVar30));
  *pbVar34 = *pbVar34 + cVar29;
  *(byte *)((int)pbVar13 * 2) = *(byte *)((int)pbVar13 * 2) ^ bVar23;
  bVar7 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar23;
  bVar5 = *pbVar13;
  *pbVar12 = *pbVar12 + (char)pbVar26;
  bVar7 = ((bVar23 - bVar5) - CARRY1(bVar7,bVar23)) + *pbVar26;
  pbVar13 = (byte *)CONCAT31(uVar19,bVar7);
  pbVar17 = pbStack_24;
  if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004038f6;
  *pbVar13 = *pbVar13 + bVar7;
  cVar6 = (bVar7 + 0x6f) - (0x90 < bVar7);
  pbVar15 = (byte *)CONCAT31(uVar19,cVar6);
  bVar7 = *pbVar26;
  *pbVar26 = *pbVar26 + cVar30;
  pbVar17 = pbVar26;
  if (SCARRY1(bVar7,cVar30) == (char)*pbVar26 < '\0') {
    cRam33100000 = cRam33100000 - cVar6;
    cVar6 = cVar6 + *pbVar26;
    pbVar13 = (byte *)CONCAT31(uVar19,cVar6);
    goto code_r0x0040390c;
  }
  do {
    *pbVar15 = *pbVar15 + (char)pbVar15;
    while( true ) {
      uVar19 = (undefined3)((uint)pbVar15 >> 8);
      cVar6 = (char)pbVar15 + '\x02';
      pbVar13 = (byte *)CONCAT31(uVar19,cVar6);
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbStack_14);
      cVar6 = (char)pbVar13 + *pbVar17;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar6);
code_r0x0040390c:
      cVar28 = (char)pbVar13;
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *pbStack_14 = *pbStack_14 + cVar28;
        goto code_r0x0040395a;
      }
      *pbVar13 = *pbVar13 + cVar28;
      bVar7 = cVar28 + 2;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
code_r0x00403912:
      bVar39 = (POPCOUNT(bVar7) & 1U) == 0;
      if (!bVar39) goto code_r0x00403967;
      *pbVar13 = *pbVar13 + (char)pbVar13;
code_r0x00403916:
      bVar5 = (char)pbVar13 + 0x6f;
      pbVar26 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar13 >> 8),bVar5);
      bVar7 = *pbVar26;
      *pbVar26 = *pbVar26 + bVar5;
      if (*pbVar26 == 0 || SCARRY1(bVar7,bVar5) != (char)*pbVar26 < '\0') goto code_r0x00403979;
      *pbVar26 = *pbVar26 + bVar5;
      pbVar15 = (byte *)CONCAT31((int3)(char)((uint)pbVar13 >> 8),(char)pbVar13 + -100);
      *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
           pbVar17 + (uint)(0xd2 < bVar5) + *(int *)(pbStack_14 + (int)unaff_EDI * 8);
code_r0x00403926:
      *(byte **)pbVar15 = pbStack_24;
      bVar7 = *pbStack_14;
      bVar5 = (byte)pbVar15;
      *pbStack_14 = *pbStack_14 + bVar5;
      if (CARRY1(bVar7,bVar5)) {
        *pbVar15 = *pbVar15 + bVar5;
        uVar19 = (undefined3)((uint)pbVar15 >> 8);
        bVar5 = bVar5 | pbVar15[0x400005b];
        pbVar13 = (byte *)CONCAT31(uVar19,bVar5);
        pbVar26 = pbStack_14;
        if ((char)bVar5 < '\x01') goto code_r0x00403991;
        *pbVar13 = *pbVar13 + bVar5;
        cVar6 = bVar5 + 0x28;
        pbVar13 = (byte *)CONCAT31(uVar19,cVar6);
        *(byte **)pbVar13 = pbVar13 + (uint)(0xd7 < bVar5) + *(int *)pbVar13;
        bVar7 = *pbVar34;
        bVar5 = (byte)((uint)pbVar12 >> 8);
        *pbVar34 = *pbVar34 + bVar5;
        if (CARRY1(bVar7,bVar5)) {
          *pbVar13 = *pbVar13 + cVar6;
          pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar13,(char)pbVar12));
          *pbStack_14 = *pbStack_14 + cVar6;
          pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                     CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x55],
                                              (char)pbVar34));
          *pbVar13 = *pbVar13 + cVar6;
code_r0x00403950:
          uVar19 = (undefined3)((uint)pbVar13 >> 8);
          bVar5 = (char)pbVar13 + 0x6f;
          bVar7 = *(byte *)CONCAT31(uVar19,bVar5);
          *pbVar17 = *pbVar17 + (char)pbVar12;
          pbVar13 = (byte *)CONCAT31(uVar19,(bVar5 & bVar7) + *pbStack_14);
          *pbVar12 = *pbVar12 - (char)((uint)pbVar17 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar13 = *pbVar13 + cVar6;
    cVar6 = (char)pbVar15 + '.' + *pbVar17;
    pbVar13 = (byte *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      pbVar26 = pbVar17 + (int)pbVar13;
      *pbVar26 = *pbVar26 + cVar6;
      bVar7 = *pbVar26;
      goto code_r0x00403912;
    }
    *pbVar13 = *pbVar13 + cVar6;
    bVar7 = cVar6 + 2;
    pbVar13 = (byte *)CONCAT31(uVar19,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403916;
    *pbVar13 = *pbVar13 + bVar7;
    cVar28 = cVar6 + 'q';
    piVar14 = (int *)CONCAT31(uVar19,cVar28);
    *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0x90 < bVar7);
    bVar7 = *pbVar34;
    bVar5 = (byte)((uint)pbVar12 >> 8);
    *pbVar34 = *pbVar34 + bVar5;
    if (!CARRY1(bVar7,bVar5)) {
      out(*(undefined4 *)pbStack_14,(short)pbVar17);
      bVar7 = (cVar28 - (char)*piVar14) - CARRY1(bVar7,bVar5);
      *pbVar17 = *pbVar17 + (char)pbVar12;
      cVar6 = bVar7 - *(byte *)CONCAT31(uVar19,bVar7);
      pbVar13 = pbStack_14 +
                ((4 - *(int *)CONCAT31(uVar19,cVar6)) -
                (uint)(bVar7 < *(byte *)CONCAT31(uVar19,bVar7)));
      pbVar26 = (byte *)CONCAT31(uVar19,cVar6);
      pbStack_14 = (byte *)0;
      goto code_r0x00403825;
    }
    *(char *)piVar14 = (char)*piVar14 + cVar28;
    uVar21 = (undefined2)((uint)pbVar34 >> 0x10);
    bVar7 = (byte)((uint)pbVar34 >> 8) | bRam080a0056;
    *(char *)piVar14 = (char)*piVar14 + cVar28;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6 + 's');
    pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(bVar7 + *(char *)(CONCAT22(uVar21,CONCAT11(bVar7,(
                                                  char)pbVar34)) + 0x56),(char)pbVar34));
    *pcVar11 = *pcVar11 + cVar6 + 's';
    bVar7 = cVar6 - 0xf;
    *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
    bVar5 = cVar6 + 0x1e;
    pbVar15 = (byte *)CONCAT31(uVar19,bVar5);
    *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
         pbVar12 + (uint)(0xd2 < bVar7) + *(int *)(pbStack_14 + (int)unaff_EDI * 8);
    uVar25 = *(undefined2 *)pbVar15;
    bVar7 = *pbStack_14;
    *pbStack_14 = *pbStack_14 + bVar5;
    pbVar17 = pbVar12;
    if (CARRY1(bVar7,bVar5)) {
      *pbVar15 = *pbVar15 + bVar5;
      pbVar13 = (byte *)CONCAT31(uVar19,bVar5 | pbVar15[0x400005a]);
      if ('\0' < (char)(bVar5 | pbVar15[0x400005a])) {
code_r0x004038f6:
        bVar7 = (byte)pbVar13;
        *pbVar13 = *pbVar13 + bVar7;
        uVar19 = (undefined3)((uint)pbVar13 >> 8);
        cVar6 = ((bVar7 + 0x28) - *(char *)CONCAT31(uVar19,bVar7 + 0x28)) - (0xd7 < bVar7);
        pbVar13 = (byte *)CONCAT31(uVar19,cVar6);
        bVar7 = *pbVar34;
        bVar5 = (byte)((uint)pbVar12 >> 8);
        *pbVar34 = *pbVar34 + bVar5;
        if (CARRY1(bVar7,bVar5)) {
          *pbVar13 = *pbVar13 + cVar6;
          pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar13,(char)pbVar12));
          *pbStack_14 = *pbStack_14 + cVar6;
          goto code_r0x00403908;
        }
        pbVar15 = pbVar13 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar13 = *pbVar13 + (char)pbVar13;
  pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar12;
  pbVar34 = (byte *)((uint)pbVar34 | (uint)pbStack_14);
  cVar6 = (char)pbVar13 + '\x02';
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar6);
  bVar39 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403967:
  if (!bVar39) goto code_r0x004039be;
  *pbVar13 = *pbVar13 + (char)pbVar13;
  uVar19 = (undefined3)((uint)pbVar13 >> 8);
  bVar7 = (char)pbVar13 + 0x6f;
  bVar7 = bVar7 & *(byte *)CONCAT31(uVar19,bVar7);
  pbVar26 = (byte *)CONCAT31(uVar19,bVar7);
  *pbVar17 = *pbVar17 + (char)pbVar12;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (char)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar7;
code_r0x00403979:
  bVar7 = (char)pbVar26 - (char)*unaff_EDI;
  bVar39 = bVar7 < *pbVar12;
  pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar7 - *pbVar12);
  do {
    cVar6 = (char)pbVar13;
    *pbVar13 = *pbVar13 + cVar6 + bVar39;
    *pbVar13 = *pbVar13 + cVar6;
    *pbVar12 = *pbVar12 + (char)pbVar17;
    pbVar12[0x101c00aa] = pbVar12[0x101c00aa] + (char)pbVar34;
    *pbVar13 = *pbVar13 + cVar6;
    *(byte **)pbStack_14 = pbVar34 + *(int *)pbStack_14;
    bVar7 = (byte)((uint)pbVar12 >> 8);
    pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11(bVar7 + *pbVar13,(char)pbVar12));
    pbVar13 = pbVar13 + (uint)CARRY1(bVar7,*pbVar13) + *(int *)pbVar13;
    pbVar26 = pbStack_14;
code_r0x00403991:
    cVar6 = (char)pbVar12;
    *pbVar17 = *pbVar17 + cVar6;
    cVar28 = (char)pbVar34 - pbVar26[2];
    pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar28);
    pbStack_14 = pbVar26;
    if ((POPCOUNT(cVar28) & 1U) != 0) goto code_r0x0040395a;
    *pbVar13 = *pbVar13 + (byte)pbVar13;
    uVar20 = (uint3)((uint)pbVar13 >> 8);
    bVar7 = (byte)pbVar13 | *pbVar34;
    piVar14 = (int *)CONCAT31(uVar20,bVar7);
    bVar5 = (byte)((uint)pbVar12 >> 8);
    bVar23 = (byte)pbVar17;
    if (bVar7 == 0) {
      *(char *)piVar14 = (char)*piVar14;
      pbStack_14 = pbVar26 + 4;
      out(*(undefined4 *)pbVar26,(short)pbVar17);
      pbVar13 = (byte *)((uint)uVar20 << 8);
      *pbVar17 = *pbVar17 + cVar6;
      pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar23 - *pbVar34);
      *pbVar34 = *pbVar34;
      *pbVar17 = *pbVar17 + bVar5;
      *pbVar13 = *pbVar13;
      *pbVar34 = *pbVar34 + cVar28;
      *pbVar13 = *pbVar13;
      *(byte **)(pbVar34 + -0x3d) = pbStack_14 + *(int *)(pbVar34 + -0x3d);
      break;
    }
    pbVar37 = pbVar37 + -unaff_EDI[9];
    *(byte *)piVar14 = (char)*piVar14 + bVar7;
    pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(bVar5 | *pbVar17,cVar6));
    pbStack_14 = pbVar26 + *piVar14;
    pcVar11 = (char *)((int)piVar14 + *piVar14);
    bVar5 = (char)pcVar11 - *pcVar11;
    pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar5);
    bVar7 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar5;
    pbVar13 = pbVar13 + (-(uint)CARRY1(bVar7,bVar5) - *(int *)pbVar13);
    bVar39 = CARRY1(*pbVar12,bVar23);
    *pbVar12 = *pbVar12 + bVar23;
  } while (!bVar39);
  *pbVar13 = *pbVar13 + (char)pbVar13;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(byte)pbVar12 | *pbVar17);
code_r0x004039be:
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar37 + -0x3c));
  *pbVar13 = *pbVar13 + (byte)pbVar13;
  uVar19 = (undefined3)((uint)pbVar13 >> 8);
  bVar7 = (byte)pbVar13 | *pbVar17;
  pcVar11 = (char *)CONCAT31(uVar19,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) goto code_r0x004039c8;
  cVar6 = *pcVar11;
  *pcVar11 = *pcVar11 + bVar7;
  cVar28 = *pcVar11;
  if (!SCARRY1(cVar6,bVar7)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar11 = *pcVar11 + bVar7;
  *pbStack_14 = *pbStack_14 + 1;
  uVar3 = *(undefined6 *)CONCAT31(uVar19,bVar7 + 6);
  pbVar26 = (byte *)uVar3;
  bVar7 = *pbVar17;
  bVar5 = (byte)pbVar12;
  *pbVar17 = *pbVar17 + bVar5;
  if (!CARRY1(bVar7,bVar5)) goto code_r0x00403979;
  *pbVar26 = *pbVar26 + (char)uVar3;
  bVar23 = (byte)((uint)pbVar12 >> 8) | *pbVar26;
  uVar21 = CONCAT11(bVar23,bVar5);
  pbVar26 = pbVar26 + -*(int *)pbVar26;
  bVar7 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar23;
  if (CARRY1(bVar7,bVar23)) {
    cVar6 = (char)pbVar26;
    *pbVar26 = *pbVar26 + cVar6;
    bVar7 = *pbVar17;
    pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                               CONCAT11((char)((uint)pbVar17 >> 8) - pbVar34[-0x3a],(char)pbVar17));
    *pbVar26 = *pbVar26 + cVar6;
    uVar36 = (undefined2)((uint)pbVar34 >> 0x10);
    bVar9 = (byte)((uint)pbVar34 >> 8) | pbVar17[0x32];
    pcVar11 = (char *)CONCAT22(uVar36,CONCAT11(bVar9,(char)pbVar34));
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,in_CS);
    cVar28 = cVar6 + *pcVar11 + '-';
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar28);
    *pbVar26 = *pbVar26;
    bVar8 = *pbVar17;
    cVar30 = (char)pbVar34 - *pbStack_14;
    cVar6 = *(char *)((int)unaff_EDI + 0x17);
    *pbVar26 = *pbVar26 + cVar28;
    uVar21 = CONCAT11((bVar23 | bVar7) + cVar6 | *pbVar17,bVar5 - bVar8);
    pbVar34 = (byte *)CONCAT22(uVar36,CONCAT11(bVar9 + *(char *)(CONCAT31((int3)((uint)pcVar11 >> 8)
                                                                          ,cVar30) + 0x4e),cVar30));
    *pbVar26 = *pbVar26 + cVar28;
  }
  pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),uVar21);
  bVar7 = (byte)pbVar26;
  uVar19 = (undefined3)((uint)pbVar26 >> 8);
  pcVar11 = (char *)CONCAT31(uVar19,bVar7 + 0x28);
  *pcVar11 = (*pcVar11 - (bVar7 + 0x28)) - (0xd7 < bVar7);
  *pbVar17 = *pbVar17 + (char)uVar21;
  bVar5 = bVar7 + 0x1b;
  pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                             CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x4f],(char)pbVar34));
  *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
  pcVar16 = (char *)CONCAT31(uVar19,bVar7 + 0x43);
  *pcVar16 = (*pcVar16 - (bVar7 + 0x43)) - (0xd7 < bVar5);
  *pbVar17 = *pbVar17 + (char)uVar21;
  pcVar11 = pcVar16 + -0x6b721c;
  pcVar16 = pcVar16 + -0x6b721a;
  *pcVar16 = *pcVar16 + (char)((uint)pbVar17 >> 8);
  cVar28 = *pcVar16;
code_r0x00403a22:
  if ((POPCOUNT(cVar28) & 1U) == 0) {
code_r0x00403a24:
    cVar6 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar6;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    bVar7 = cVar6 + 2;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
      piVar14 = (int *)CONCAT31(uVar19,cVar6 + '*');
      *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0xd7 < bVar7);
      bVar7 = *pbVar17;
      bVar8 = (byte)pbVar12;
      *pbVar17 = *pbVar17 + bVar8;
      out(*(undefined4 *)pbStack_14,(short)pbVar17);
      bVar23 = ((cVar6 + '*') - (char)*piVar14) - CARRY1(bVar7,bVar8);
      pbVar13 = (byte *)CONCAT31(uVar19,bVar23);
      *pbVar17 = *pbVar17 + bVar8;
      uVar21 = (undefined2)((uint)pbVar34 >> 0x10);
      uVar31 = SUB41(pbVar34,0);
      cVar6 = (char)((uint)pbVar34 >> 8) - pbStack_14[0x1f];
      pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(cVar6,uVar31));
      *pbVar13 = *pbVar13 + bVar23;
      bVar5 = *pbVar17;
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar23;
      pbStack_14 = pbStack_14 + ((4 - *(int *)pbVar13) - (uint)CARRY1(bVar7,bVar23));
      pbVar13 = (byte *)CONCAT31(uVar19,bVar23);
      pbVar12 = (byte *)(CONCAT22((short)((uint)pbVar12 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar12 >> 8) | bVar5,bVar8)) + -1);
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar23;
      bVar7 = (bVar23 - *pbVar13) - CARRY1(bVar7,bVar23);
      *pbVar12 = *pbVar12 + (char)pbVar17;
      bVar39 = CARRY1(bVar7,*pbVar17);
      bVar7 = bVar7 + *pbVar17;
      pbVar13 = (byte *)CONCAT31(uVar19,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar13 = *pbVar13 + bVar7;
        cVar28 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pbVar26 = (byte *)CONCAT31(uVar19,cVar28);
        bVar7 = *pbVar17;
        *pbVar17 = *pbVar17 + (char)pbVar12;
        if (SCARRY1(bVar7,(char)pbVar12) == (char)*pbVar17 < '\0') goto code_r0x00403aaf;
        *pbVar26 = *pbVar26 + cVar28;
        pcVar11 = (char *)CONCAT31(uVar19,cVar28 + '\x02');
        bVar5 = cVar6 + pbVar34[0x52];
        pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(bVar5,uVar31));
        *pcVar11 = *pcVar11 + cVar28 + '\x02';
        bVar7 = cVar28 + 4;
        pbVar26 = (byte *)CONCAT31(uVar19,bVar7);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pbVar26 = *pbVar26 + bVar7;
          cVar6 = (cVar28 + 's') - (0x90 < bVar7);
          pcVar11 = (char *)CONCAT31(uVar19,cVar6);
          bVar7 = (byte)((uint)pbVar12 >> 8);
          bVar39 = CARRY1(*pbVar34,bVar7);
          *pbVar34 = *pbVar34 + bVar7;
          pbVar13 = pbStack_14;
          if (bVar39) {
            *pcVar11 = *pcVar11 + cVar6;
            pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(bVar5 | pbVar37[0x5c],uVar31));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar26);
        pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(bVar5 + pbVar34[0x52],uVar31));
code_r0x00403abf:
        *pbVar26 = *pbVar26 + (char)pbVar26;
        cVar6 = (char)pbVar26 + '\x02';
        pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar6);
        bVar39 = (POPCOUNT(cVar6) & 1U) == 0;
        pbStack_34 = pbVar37;
        if (!bVar39) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar39) {
          *pbVar13 = *pbVar13 + (byte)pbVar13;
          bVar7 = (byte)pbVar13 | pbVar13[0x400005e];
          pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
          pbStack_34 = pbVar37;
          if ((char)bVar7 < '\x01') goto code_r0x00403b0b;
          *pbVar26 = *pbVar26 + bVar7;
code_r0x00403aaf:
          cVar6 = (char)pbVar26 + '(';
          pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar6);
          *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
          bVar7 = *pbVar34;
          bVar5 = (byte)((uint)pbVar12 >> 8);
          *pbVar34 = *pbVar34 + bVar5;
          pbVar15 = pbVar37;
          if (!CARRY1(bVar7,bVar5)) goto code_r0x00403ad8;
          *pbVar26 = *pbVar26 + cVar6;
          pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                     CONCAT11(bVar5 | *pbVar34,(char)pbVar12));
          if ((POPCOUNT(*pbVar17 - cVar6) & 1U) != 0) {
            *pbStack_14 = *pbStack_14 + cVar6;
            pbStack_34 = pbVar37;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                   CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x53],(char)pbVar34
                                           ));
      }
      bVar7 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar7;
      cVar6 = (bVar7 + 0x6f) - (0x90 < bVar7);
      pcVar11 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar6);
      bVar7 = *pbVar34;
      cVar28 = (char)((uint)pbVar12 >> 8);
      *pbVar34 = *pbVar34 + cVar28;
      pbStack_34 = pbVar37;
      if (*pbVar34 == 0 || SCARRY1(bVar7,cVar28) != (char)*pbVar34 < '\0') goto code_r0x00403b2c;
      *pcVar11 = *pcVar11 + cVar6;
    }
    else {
      pcVar11 = (char *)CONCAT31(uVar19,bVar7 + *pbVar17);
      pbVar13 = pbStack_14;
      if ((POPCOUNT(bVar7 + *pbVar17) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
         pbVar17 + (uint)(0xd2 < (byte)pcVar11) + *(int *)(pbStack_14 + (int)unaff_EDI * 8);
    pbVar26 = pbVar37;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(byte)pcVar11 + 0x2d);
code_r0x00403ad8:
    pbStack_34 = pbVar15;
    bVar7 = *pbVar26;
    bVar5 = (byte)pbVar26;
    *pbVar26 = *pbVar26 + bVar5;
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,uVar25);
    if (!CARRY1(bVar7,bVar5)) goto code_r0x00403afc;
    *pbVar26 = *pbVar26 + bVar5;
    bVar5 = bVar5 | pbVar26[0x400005d];
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar5);
    pbVar13 = pbStack_14;
    if ((char)bVar5 < '\x01') {
      *pbVar26 = *pbVar26 + bVar5;
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar12 >> 8) | *pbVar17,(char)pbVar12));
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[-0x39],(char)pbVar34)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar26 = *pbVar26 + (char)pbVar26;
    cVar6 = (char)pbVar26 + '(';
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar6);
    *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
    bVar7 = *pbVar34;
    bVar5 = (byte)((uint)pbVar12 >> 8);
    *pbVar34 = *pbVar34 + bVar5;
    pbStack_14 = pbVar13;
    if (!CARRY1(bVar7,bVar5)) goto code_r0x00403b0b;
    *pbVar26 = *pbVar26 + cVar6;
  }
  else {
    bVar7 = *pbVar17;
    *pbVar17 = *pbVar17 + (char)pbVar12;
    if (SCARRY1(bVar7,(char)pbVar12) == (char)*pbVar17 < '\0') {
      pbVar26 = pbVar37;
      pbVar15 = (byte *)(pcVar11 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + '\x02');
    pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                               CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x54],(char)pbVar34));
    pbVar13 = pbStack_14;
code_r0x00403a7d:
    cVar6 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar6;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    cVar28 = cVar6 + '-';
    pbVar15 = (byte *)CONCAT31(uVar19,cVar28);
    pbVar26 = pbVar37;
    pbStack_14 = pbVar13;
    if ((POPCOUNT(cVar28 - *pbVar17) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar15 = *pbVar15 + cVar28;
    bVar7 = cVar6 + 0x2f;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      bVar7 = *pbVar17;
      *pbVar17 = *pbVar17 + (byte)pbVar12;
      *pbVar37 = *pbVar37 - CARRY1(bVar7,(byte)pbVar12);
      pbVar26 = (byte *)CONCAT31(uVar19,cVar6 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
    bVar39 = 0x90 < bVar7;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6 + -0x62);
code_r0x00403a8f:
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    bVar5 = (char)pcVar11 - bVar39;
    pbVar26 = (byte *)CONCAT31(uVar19,bVar5);
    bVar7 = *pbVar34;
    cVar6 = (char)((uint)pbVar12 >> 8);
    *pbVar34 = *pbVar34 + cVar6;
    pbStack_34 = pbVar37;
    pbStack_14 = pbVar13;
    if (*pbVar34 != 0 && SCARRY1(bVar7,cVar6) == (char)*pbVar34 < '\0') {
      *pbVar26 = *pbVar26 + bVar5;
      pbStack_14 = (byte *)CONCAT31(uVar19,bVar5 + 0x2d);
      *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
           pbVar17 + (uint)(0xd2 < bVar5) + *(int *)(pbVar13 + (int)unaff_EDI * 8);
      bVar39 = CARRY1(*pbVar13,(byte)pbVar13);
      *pbVar13 = *pbVar13 + (byte)pbVar13;
      goto code_r0x00403aa1;
    }
  }
  pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                             CONCAT11((byte)((uint)pbVar12 >> 8) | *pbVar26,(char)pbVar12));
  *pbStack_14 = *pbStack_14 + (char)pbVar26;
code_r0x00403afc:
  pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                             CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x55],(char)pbVar34));
  *pbVar26 = *pbVar26 + (char)pbVar26;
  uVar19 = (undefined3)((uint)pbVar26 >> 8);
  bVar5 = (char)pbVar26 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar19,bVar5);
  *pbVar17 = *pbVar17 + (char)pbVar12;
  pbVar26 = (byte *)CONCAT31(uVar19,(bVar5 & bVar7) + *pbStack_14);
  *pbVar12 = *pbVar12 - (char)((uint)pbVar17 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar26 = *pbVar26 + (byte)pbVar26;
    bVar7 = (byte)pbVar26 | *pbVar34;
    piVar14 = (int *)CONCAT31((int3)((uint)pbVar26 >> 8),bVar7);
    if (bVar7 != 0) {
      pbStack_34 = pbStack_34 + -unaff_EDI[9];
      *(byte *)piVar14 = (char)*piVar14 + bVar7;
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar12 >> 8) | *pbVar17,(char)pbVar12));
      pbStack_38 = pbStack_38 + *piVar14;
      pcVar11 = (char *)((int)piVar14 + *piVar14);
      uVar19 = (undefined3)((uint)pcVar11 >> 8);
      bVar5 = (char)pcVar11 - *pcVar11;
      pbVar13 = (byte *)CONCAT31(uVar19,bVar5);
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar5;
      piVar14 = (int *)CONCAT31(uVar19,bVar5 - CARRY1(bVar7,bVar5));
    }
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    pbStack_14 = pbStack_38 + 4;
    out(*(undefined4 *)pbStack_38,(short)pbVar17);
    pbVar26 = (byte *)(((uint)piVar14 >> 8) * 0x100);
    *pbVar17 = *pbVar17 + (byte)pbVar12;
    bVar7 = (char)pbVar17 - *pbVar34;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7);
    *pbVar34 = *pbVar34;
    *pbVar17 = *pbVar17 + (char)((uint)pbVar12 >> 8);
    *pbVar26 = *pbVar26;
    pcVar11 = (char *)(((uint)piVar14 >> 8) * 0x200);
    *pcVar11 = *pcVar11 + (char)pbVar34;
    bVar39 = CARRY1(*pbVar12,bVar7);
    *pbVar12 = *pbVar12 + bVar7;
    pbStack_38 = pbStack_14;
    if (bVar39) break;
    while( true ) {
      *(byte **)pbVar26 = pbVar26 + (uint)bVar39 + *(int *)pbVar26;
      unaff_EDI = unaff_EDI + 1;
      pbVar26[(int)pbVar17] = pbVar26[(int)pbVar17] + (char)pbVar34;
      *pbVar26 = *pbVar26 + (char)pbVar26;
      *(byte **)pbStack_38 = pbVar34 + *(int *)pbStack_38;
      bVar7 = (byte)((uint)pbVar12 >> 8);
      cVar6 = (char)pbVar12;
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(bVar7 + *pbVar26,cVar6));
      pbVar26 = pbVar26 + (uint)CARRY1(bVar7,*pbVar26) + *(int *)pbVar26;
      *pbVar17 = *pbVar17 + cVar6;
      cVar6 = (char)pbVar34 - pbStack_38[2];
      pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar6);
      pbStack_14 = pbStack_38;
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar26 = *pbVar26 + (char)pbVar26;
      pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar12;
      pbVar34 = (byte *)((uint)pbVar34 | (uint)pbStack_14);
      cVar6 = (char)pbVar26 + '\x02';
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar6);
      bVar39 = (POPCOUNT(cVar6) & 1U) == 0;
code_r0x00403b18:
      bVar7 = (byte)pbVar13;
      uVar19 = (undefined3)((uint)pbVar13 >> 8);
      if (!bVar39) {
        *pbVar17 = *pbVar17 + (char)pbVar12;
        pbVar26 = (byte *)CONCAT31(uVar19,bVar7 | *pbStack_14);
code_r0x00403b73:
        pbVar13 = (byte *)((int)unaff_EDI + *(int *)(pbStack_34 + -0x37));
        *pbVar26 = *pbVar26 + (byte)pbVar26;
        uVar19 = (undefined3)((uint)pbVar26 >> 8);
        bVar7 = (byte)pbVar26 | *pbVar17;
        pcVar11 = (char *)CONCAT31(uVar19,bVar7);
        uVar40 = CONCAT44(pbVar17,pcVar11);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pcVar11 = *pcVar11 + bVar7;
          *pbStack_14 = *pbStack_14 + 1;
          return (byte *)CONCAT31(uVar19,bVar7 + 6);
        }
        bVar7 = *pbStack_14;
        *pbStack_14 = *pbStack_14 + 1;
        pcVar2 = (code *)swi(4);
        if (SCARRY1(bVar7,'\x01')) {
          uVar40 = (*pcVar2)();
          pbVar12 = extraout_ECX;
        }
        pbVar17 = (byte *)uVar40;
        *pbVar17 = *pbVar17 + (char)uVar40;
        cVar28 = (char)((ulonglong)uVar40 >> 0x20);
        puVar27 = (uint *)CONCAT22((short)((ulonglong)uVar40 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar40 >> 0x28) | pbVar34[0x2f],cVar28
                                           ));
        *pbVar17 = *pbVar17 + (char)uVar40;
        cVar6 = (char)pbVar12;
        bVar23 = (byte)((uint)pbVar12 >> 8) | *pbVar17;
        pbVar17 = pbVar17 + *(int *)pbVar17;
        bVar7 = *pbVar34;
        *pbVar34 = *pbVar34 + bVar23;
        bVar5 = (byte)pbVar17;
        if (CARRY1(bVar7,bVar23)) {
          *pbVar17 = *pbVar17 + bVar5;
          bVar23 = bVar23 | (byte)*puVar27;
          *pbVar34 = *pbVar34 - cVar28;
          *pbVar17 = *pbVar17 + bVar5;
          uVar19 = (undefined3)((uint)pbVar17 >> 8);
          bVar5 = bVar5 | (byte)*puVar27;
          piVar14 = (int *)CONCAT31(uVar19,bVar5);
          pbStack_34 = pbStack_34 + *piVar14;
          *(byte *)piVar14 = (char)*piVar14 + bVar5;
          cVar28 = (char)pbVar34 - *pbStack_14;
          pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                     CONCAT11((char)((uint)pbVar34 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar34 >> 8),cVar28)
                                                       + 0x5f),cVar28));
          *(byte *)piVar14 = (char)*piVar14 + bVar5;
          bVar7 = bVar5 + 0x2a & (byte)*puVar27;
          pbVar13 = pbVar13 + *(int *)(pbStack_34 + 0x5f);
          *(char *)CONCAT31(uVar19,bVar7) = *(char *)CONCAT31(uVar19,bVar7) + bVar7;
          pbVar17 = (byte *)CONCAT31(uVar19,bVar7 + 0x2a);
          *(byte *)puVar27 = (byte)*puVar27 + 0x28;
          *pbVar17 = *pbVar17 + bVar7 + 0x2a;
        }
        else {
          *pbStack_14 = *pbStack_14 + bVar5;
        }
        pcVar11 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(bVar23,cVar6));
        *pbStack_34 = *pbStack_34 - bVar23;
        *(byte *)puVar27 = (byte)*puVar27 + cVar6;
        bVar7 = (byte)pbVar17 - 0xb;
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7);
        if (10 < (byte)pbVar17) {
          *pbVar12 = *pbVar12 | bVar7;
          return pbVar12;
        }
        *(byte *)puVar27 = (byte)*puVar27 + cVar6;
        do {
          bVar7 = pbVar34[-0x23];
          bVar23 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar23;
          bVar5 = pbStack_34[-0x22];
          *pbVar12 = *pbVar12 + bVar23;
          uVar19 = (undefined3)((uint)pbVar12 >> 8);
          bVar23 = bVar23 | *pbStack_14;
          pbVar17 = (byte *)CONCAT31(uVar19,bVar23);
          cVar28 = (char)pbVar34 - *pbStack_14;
          pbVar34 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar34 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar34 >> 8) + bVar7 |
                                                              bVar5,(char)pbVar34)) >> 8),cVar28);
          cVar6 = (char)pcVar11;
          pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                     CONCAT11((char)((uint)pcVar11 >> 8) + *pbVar17,cVar6));
          *(byte *)puVar27 = (byte)*puVar27 + cVar6;
          bVar5 = bVar23 - *pbVar17;
          pbVar12 = (byte *)CONCAT31(uVar19,bVar5);
          pbStack_14 = pbStack_14 + (-(uint)(bVar23 < *pbVar17) - *(int *)pbVar12);
          puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),(char)puVar27 * '\x02');
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          *pbVar13 = *pbVar13 + cVar28;
          bVar7 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar5;
          *puVar27 = (uint)(pbVar12 + (uint)CARRY1(bVar7,bVar5) + *puVar27);
        } while ((POPCOUNT(*puVar27 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),(byte)pcVar11 | pbVar12[(int)pcVar11])
        ;
        bVar39 = false;
        pbVar12 = (byte *)((uint)pbVar12 & 0xffffff00);
        do {
          pbVar13 = pbVar13 + (-(uint)bVar39 - *(int *)pbVar34);
          pcVar16 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*pcVar11);
          *pcVar16 = *pcVar16 + *pcVar11;
          pbVar12 = (byte *)CONCAT31((int3)((uint)(pcVar16 +
                                                  (pbStack_14[0x2000001] <
                                                  (byte)((uint)pcVar11 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar16 +
                                            (pbStack_14[0x2000001] < (byte)((uint)pcVar11 >> 8)) +
                                            0xda7d) | (byte)*puVar27) + 0x7d);
          pcVar11 = pcVar11 + -1;
          *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar11;
          while( true ) {
            uVar24 = (undefined3)((uint)puVar27 >> 8);
            cVar6 = (char)puVar27 + *(char *)((int)pbVar13 * 2 + 0xa0000e1);
            puVar27 = (uint *)CONCAT31(uVar24,cVar6);
            bVar39 = CARRY1((byte)pbVar12,(byte)*puVar27);
            uVar19 = (undefined3)((uint)pbVar12 >> 8);
            bVar7 = (byte)pbVar12 + (byte)*puVar27;
            pbVar12 = (byte *)CONCAT31(uVar19,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *pbVar12 = *pbVar12 + bVar7;
            cVar28 = (char)pcVar11;
            pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar11 >> 8) | pbVar13[-0x65],cVar28))
            ;
            bVar5 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar7;
            if (CARRY1(bVar5,bVar7)) {
              *pbVar12 = *pbVar12 + bVar7;
              pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar34 >> 8) | pbStack_34[-0x1d],
                                                  (char)pbVar34));
              *pbVar12 = *pbVar12 + bVar7;
              bVar39 = false;
              bVar7 = bVar7 | (byte)*puVar27;
              pcVar16 = (char *)CONCAT31(uVar19,bVar7);
              while( true ) {
                bVar5 = (byte)pcVar16;
                uVar19 = (undefined3)((uint)pcVar16 >> 8);
                if (bVar39 == (char)bVar7 < '\0') break;
                *pcVar16 = *pcVar16 + bVar5;
                bVar5 = bVar5 | (byte)*puVar27;
                puVar18 = (uint *)CONCAT31(uVar19,bVar5);
                *pbVar13 = *pbVar13 << 1 | (char)*pbVar13 < '\0';
                uVar32 = *puVar18;
                *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                pbStack_34 = pbStack_34 + (-(uint)CARRY1((byte)uVar32,bVar5) - *puVar18);
                *puVar18 = *puVar18 << 1 | (uint)((int)*puVar18 < 0);
                while( true ) {
                  uVar32 = *puVar27;
                  *(byte *)puVar27 = (byte)*puVar27 + (byte)pcVar11;
                  cVar6 = (char)puVar18 + 'o' + CARRY1((byte)uVar32,(byte)pcVar11);
                  pcVar16 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar6);
                  pcVar11 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar6) & 1U) != 0) break;
                  *pcVar16 = *pcVar16 + cVar6;
                  bVar7 = bRamfe140212;
                  pcVar11 = (char *)0x0;
                  uVar19 = (undefined3)((uint)(pcVar16 + -0x732b0000) >> 8);
                  bVar5 = in(0);
                  puVar18 = (uint *)CONCAT31(uVar19,bVar5);
                  uVar32 = *puVar27;
                  *(byte *)puVar27 = (byte)*puVar27;
                  if (SCARRY1((byte)uVar32,'\0') != (char)(byte)*puVar27 < '\0') {
                    *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                    bVar5 = bVar5 | (byte)*puVar27;
                    puVar18 = (uint *)CONCAT31(uVar19,bVar5);
                    if ((POPCOUNT(bVar5) & 1U) == 0) {
                      *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                      pcVar11 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar7 | (byte)*puVar18) << 8);
                      *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                    puVar18 = (uint *)CONCAT31(uVar19,bVar5 | (byte)*puVar27);
                  }
                }
                *(byte *)puVar27 = (byte)*puVar27;
                bVar39 = SCARRY1((char)puVar27,*pbVar13);
                bVar7 = (char)puVar27 + *pbVar13;
                puVar27 = (uint *)CONCAT31((int3)((uint)puVar27 >> 8),bVar7);
              }
              if (bVar39 == (char)bVar7 < '\0') {
                *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar11;
                pbVar12 = (byte *)((uint)pcVar16 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar16 = *pcVar16 + bVar5;
              pbVar12 = (byte *)CONCAT31(uVar19,(bVar5 | (byte)*puVar27) + 0x7d);
              pcVar11 = pcVar11 + -1;
              *(byte *)puVar27 = (byte)*puVar27 + (char)pcVar11;
            }
            else {
              *(byte *)puVar27 = (byte)*puVar27 + cVar28;
              puVar27 = (uint *)CONCAT31(uVar24,cVar6 + *(char *)((int)pbVar13 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar13 = *pbVar13 + bVar7;
      bVar7 = bVar7 + 0x6f & *(byte *)CONCAT31(uVar19,bVar7 + 0x6f);
      *pbVar17 = *pbVar17 + (char)pbVar12;
      pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (char)*unaff_EDI);
      *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar7;
      pcVar11 = (char *)CONCAT31(uVar19,bVar7 - (char)*unaff_EDI);
code_r0x00403b2c:
      bVar7 = (char)pcVar11 - *pcVar11;
      pbVar26 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar7);
      *pbVar26 = *pbVar26 + bVar7;
      *(byte **)pbVar26 = pbVar17 + *(int *)pbVar26;
      *pbVar26 = *pbVar26 + bVar7;
      bVar39 = CARRY1(*pbVar26,bVar7);
      *pbVar26 = *pbVar26 + bVar7;
      pbStack_38 = pbStack_14;
    }
  }
  *pbVar26 = *pbVar26;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(byte)pbVar12 | *pbVar17);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_34 = pbStack_34 + -*puVar18;
  do {
    bVar7 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar7;
    pbVar13 = pbVar13 + -*(int *)(pbStack_34 + -0x1a);
    *(byte *)puVar18 = (byte)*puVar18 + bVar7;
    bVar7 = bVar7 | (byte)*puVar27;
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar7);
    *(byte *)puVar18 = (byte)*puVar18 | bVar7;
    bVar7 = (byte)*puVar18;
    pbStack_34 = (byte *)0x2700001;
    while ((POPCOUNT(bVar7) & 1U) == 0) {
      do {
        *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
        bVar7 = (byte)puVar18 | (byte)*puVar27;
        puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
        uVar20 = CONCAT21((short)((uint)pcVar11 >> 0x10),(byte)((uint)pcVar11 >> 8) | bRamfe140212);
        while( true ) {
          pcVar11 = (char *)((uint)uVar20 << 8);
          bVar8 = (byte)puVar18;
          *(byte *)puVar18 = (byte)*puVar18 & bVar8;
          bVar23 = *pbVar34;
          bVar9 = (byte)uVar20;
          bVar5 = *pbVar34;
          *pbVar34 = *pbVar34 + bVar9;
          bVar7 = *pbVar34;
          if (!CARRY1(bVar23,bVar9)) break;
          *(byte *)puVar18 = (byte)*puVar18 + bVar8;
          pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar34 >> 8) | bRam026fffe2,
                                              (char)pbVar34));
          *(byte *)puVar18 = (byte)*puVar18 + bVar8;
          bVar8 = bVar8 | (byte)*puVar27;
          puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar8);
          bVar39 = (POPCOUNT(bVar8) & 1U) == 0;
          while( true ) {
            cVar6 = (char)((uint)pbVar34 >> 8);
            uVar21 = (undefined2)((uint)pbVar34 >> 0x10);
            if (!bVar39) {
              *(byte *)puVar27 = (byte)*puVar27;
              pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(cVar6 + pbVar34[-0x1f],(char)pbVar34));
              goto code_r0x00403d52;
            }
            *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
            uVar25 = (undefined2)((uint)pcVar11 >> 0x10);
            bVar5 = (byte)((uint)pcVar11 >> 8) | (byte)*puVar18;
            uVar20 = CONCAT21(uVar25,bVar5);
            *puVar18 = *puVar18 & (uint)puVar18;
            *pbVar34 = *pbVar34 + bVar5;
            uVar19 = (undefined3)((uint)puVar18 >> 8);
            bVar7 = (char)puVar18 - bVar5;
            pcVar11 = (char *)CONCAT31(uVar19,bVar7);
            *pcVar11 = *pcVar11 + bVar7;
            bVar7 = bVar7 | (byte)*puVar27;
            puVar18 = (uint *)CONCAT31(uVar19,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *(byte *)puVar18 = (byte)*puVar18 + bVar7;
            pcVar11 = (char *)((uint)CONCAT21(uVar25,bVar5 | (byte)*puVar18) << 8);
            *puVar18 = *puVar18 - (int)puVar18;
            *(byte *)puVar27 = (byte)*puVar27;
            pbVar34 = (byte *)CONCAT22(uVar21,CONCAT11(cVar6 + pbVar34[-0x1d],(char)pbVar34));
            do {
              *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
              uVar21 = (undefined2)((uint)puVar27 >> 0x10);
              cVar6 = (char)puVar27;
              bVar7 = (byte)((uint)puVar27 >> 8) | pbVar34[-0x17];
              puVar27 = (uint *)CONCAT22(uVar21,CONCAT11(bVar7,cVar6));
              *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
              pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar34 >> 8) | bRam026fffeb,
                                                  (char)pbVar34));
              do {
                *(byte *)puVar18 = (byte)*puVar18 + (byte)puVar18;
                uVar19 = (undefined3)((uint)puVar18 >> 8);
                bVar23 = (byte)puVar18 | (byte)*puVar27;
                pcVar16 = (char *)CONCAT31(uVar19,bVar23);
                bVar5 = pbVar34[-0x16];
                *pcVar16 = *pcVar16 + bVar23;
                pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                           CONCAT11((char)((uint)pbVar34 >> 8) + bVar5 |
                                                    bRam026fffec,(char)pbVar34));
                *pcVar16 = *pcVar16 + bVar23;
                pbVar17 = (byte *)CONCAT31(uVar19,bVar23 | (byte)*puVar27);
                while( true ) {
                  *pbVar17 = *pbVar17 + (byte)pbVar17;
                  uVar19 = (undefined3)((uint)pbVar17 >> 8);
                  bVar5 = (byte)pbVar17 | (byte)*puVar27;
                  puVar18 = (uint *)CONCAT31(uVar19,bVar5);
                  if ((POPCOUNT(bVar5) & 1U) != 0) break;
                  *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                  bVar23 = pbVar13[-0x14];
                  *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                  bVar5 = bVar5 | (byte)*puVar27;
                  pcVar16 = (char *)CONCAT31(uVar19,bVar5);
                  bVar8 = pbVar34[-0x15];
                  *pcVar16 = *pcVar16 + bVar5;
                  pcVar11 = (char *)((uint)CONCAT21((short)((uint)pcVar11 >> 0x10),
                                                    (byte)((uint)pcVar11 >> 8) | bVar23 |
                                                    pbVar13[-0x13]) << 8);
                  *pcVar16 = *pcVar16 + bVar5;
                  pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                             CONCAT11((char)((uint)pbVar34 >> 8) + bVar8 |
                                                      bRam026fffef,(char)pbVar34));
                  *pcVar16 = *pcVar16 + bVar5;
                  pbVar17 = (byte *)CONCAT31(uVar19,bVar5 | (byte)*puVar27);
                  do {
                    do {
                      bVar23 = (byte)pbVar17;
                      *pbVar17 = *pbVar17 + bVar23;
                      cVar30 = (char)pbVar34;
                      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar34 >> 8) | *pbVar17,
                                                          cVar30));
                      *pbVar17 = bVar23;
                      *pbVar17 = *pbVar17 + bVar23;
                      cVar28 = (char)((uint)pcVar11 >> 8) + *pbVar17;
                      pcVar11 = (char *)((uint)CONCAT21((short)((uint)pcVar11 >> 0x10),cVar28) << 8)
                      ;
                      uVar19 = (undefined3)((uint)pbVar17 >> 8);
                      bVar23 = bVar23 & *pbVar17;
                      pbVar17 = (byte *)CONCAT31(uVar19,bVar23);
                      bVar5 = *pbVar34;
                      *pbVar34 = *pbVar34 + cVar28;
                    } while (SCARRY1(bVar5,cVar28) == (char)*pbVar34 < '\0');
                    *pbVar17 = *pbVar17 + bVar23;
                    bVar23 = bVar23 | (byte)*puVar27;
                    pbVar17 = (byte *)CONCAT31(uVar19,bVar23);
                    if ((POPCOUNT(bVar23) & 1U) == 0) {
                      *pbVar17 = *pbVar17 + bVar23;
                      *pbVar17 = *pbVar17 + bVar23;
                      cVar6 = cVar6 - bVar7;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)puVar27 >> 8),cVar6);
                      *pbVar17 = *pbVar17 + bVar23;
                      bRam0312382b = bRam0312382b | *pbVar12;
                      while( true ) {
                        bVar5 = (byte)pbVar17;
                        *pbVar17 = *pbVar17 + bVar5;
                        bRam0312382b = bRam0312382b | (pbVar13 + 0x21b0000)[(int)pbVar17];
                        uVar19 = (undefined3)((uint)pbVar17 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar12 = *pbVar12 + bRam0312382b;
                        pbVar17 = (byte *)CONCAT31(uVar19,bVar5 | *pbStack_14);
                      }
                      *pbVar17 = *pbVar17 + bVar5;
                      bVar5 = bVar5 | *pbStack_14;
                      pcVar11 = (char *)CONCAT31(uVar19,bVar5);
                      out(*(undefined4 *)pbStack_14,(short)pbVar12);
                      *pcVar11 = *pcVar11 + bVar5;
                      uVar25 = CONCAT11(bVar7 | bRam6f0a002b,cVar6);
                      pcVar16 = (char *)CONCAT22(uVar21,uVar25);
                      *pcVar11 = *pcVar11 + bVar5;
                      *pcVar16 = *pcVar16 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_14 + 4),uVar25);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar30 + *pcVar11);
                  } while (SCARRY1(cVar30,*pcVar11) != (char)(cVar30 + *pcVar11) < '\0');
                }
                uVar32 = *puVar27;
                *(byte *)puVar27 = (byte)*puVar27;
              } while (SCARRY1((byte)uVar32,'\0') != (char)(byte)*puVar27 < '\0');
              *(byte *)puVar27 = (byte)*puVar27;
              *pcVar11 = *pcVar11 - (char)pbVar34;
              *(byte *)puVar18 = (byte)*puVar18 + bVar5;
              bVar5 = bVar5 | (byte)*puVar27;
              puVar18 = (uint *)CONCAT31(uVar19,bVar5);
              bVar39 = (POPCOUNT(bVar5) & 1U) == 0;
            } while (bVar39);
          }
        }
      } while (SCARRY1(bVar5,bVar9));
    }
    *pbVar34 = *pbVar34 + (char)((uint)pcVar11 >> 8);
    *pbVar13 = *pbVar13 - (char)pbVar34;
  } while( true );
}


