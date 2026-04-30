/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004036ff
 * Raw Name    : SetHeader
 * Demangled   : SetHeader
 * Prototype   : byte * SetHeader(byte * headerText, uint * param_2)
 * Local Vars  : param_2, pbStack_38, pbStack_34, puStack_24, pbStack_14, pbStack_4, uVar1, pcVar2, uVar3, iVar4, bVar5, bVar6, bVar7, bVar8, in_EAX, iVar9, pcVar10, piVar11, pbVar12, pcVar13, pbVar14, pbVar15, headerText, uVar16, uVar17, uVar18, puVar19, extraout_ECX, uVar20, puVar21, puVar22, cVar23, bVar24, uVar25, cVar26, cVar27, cVar28, uVar29, unaff_EBX, uVar30, uVar31, pbVar32, cVar33, uVar34, unaff_EBP, unaff_ESI, pbVar35, unaff_EDI, in_ES, in_CS, in_SS, in_DS, bVar36, in_AF, uVar37, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall SetHeader(byte *headerText,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *in_EAX;
  undefined3 uVar16;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  byte *pbVar12;
  uint3 uVar17;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined2 uVar18;
  undefined3 uVar20;
  uint *puVar19;
  uint *extraout_ECX;
  char cVar23;
  byte bVar24;
  undefined1 *puVar21;
  uint *puVar22;
  undefined2 uVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 uVar29;
  char cVar33;
  undefined4 unaff_EBX;
  uint uVar31;
  byte *pbVar32;
  undefined2 uVar34;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar35;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar36;
  byte in_AF;
  undefined8 uVar37;
  undefined2 unaff_retaddr;
  byte *pbStack_38;
  byte *pbStack_34;
  uint *puStack_24;
  byte *pbStack_14;
  byte *pbStack_4;
  uint uVar30;
  
                    /* .NET CLR Managed Code */
  uVar17 = (uint3)((uint)unaff_EBX >> 8);
  cVar26 = (char)unaff_EBX - (char)*param_2;
  uVar30 = CONCAT31(uVar17,cVar26);
  if (cVar26 == '\0' || (char)unaff_EBX < (char)*param_2) {
code_r0x00403750:
    pbVar35 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    bVar6 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar6;
    *headerText = *headerText + (char)uVar30;
    bVar5 = *in_EAX;
    *in_EAX = *in_EAX + bVar6;
    *(int *)(uVar30 - 0x49) = (int)(pbVar35 + (uint)CARRY1(bVar5,bVar6) + *(int *)(uVar30 - 0x49));
  }
  else {
    cVar26 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar26;
    uVar16 = (undefined3)((uint)in_EAX >> 8);
    bVar5 = cVar26 + 0x2a;
    in_EAX = (byte *)CONCAT31(uVar16,bVar5);
    pbVar35 = unaff_ESI + 1;
    cVar23 = (char)((uint)param_2 >> 8) + *(char *)((int)param_2 + -0x7b);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar23,(char)param_2));
    in_EAX[0x6f] = in_EAX[0x6f] + cVar23;
    headerText = (byte *)((uint)headerText & 0xffffff00);
    do {
      *(byte *)param_2 = (byte)*param_2;
      if ((byte)*param_2 == 0) {
        uVar30 = (uint)uVar17 << 8;
        in_ES = unaff_retaddr;
_ctor:
        headerText = (byte *)((uint)CONCAT21((short)((uint)headerText >> 0x10),
                                             (char)((uint)headerText >> 8) + *in_EAX) << 8);
        uVar30 = uVar30 & 0xffffff00;
        *(byte *)param_2 = (byte)*param_2;
        uVar16 = (undefined3)((uint)in_EAX >> 8);
        bVar6 = (char)in_EAX - *in_EAX;
        pbVar12 = (byte *)CONCAT31(uVar16,bVar6);
        bVar5 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar6;
        unaff_ESI = pbVar35 + (uint)CARRY1(bVar5,bVar6) + *(int *)pbVar12;
        in_EAX = (byte *)CONCAT31(uVar16,bVar6);
        goto code_r0x00403750;
      }
      *in_EAX = *in_EAX + bVar5;
      *param_2 = (uint)(unaff_EBP + *param_2);
      pbVar35 = pbVar35 + 1;
      bVar6 = (byte)param_2;
      bVar24 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x33);
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar24,bVar6));
      in_EAX[0x6f] = in_EAX[0x6f] + bVar24;
      *(byte *)param_2 = (byte)*param_2;
      in_ES = pbStack_4._0_2_;
      if ((byte)*param_2 != 0) {
        *in_EAX = *in_EAX + bVar5;
        uVar1 = *param_2;
        *param_2 = (uint)(unaff_EBP + *param_2);
        if (CARRY4(uVar1,(uint)unaff_EBP)) {
          *in_EAX = *in_EAX + bVar5;
          puVar19 = param_2 + 0x1d028000;
          uVar1 = *puVar19;
          *(byte *)puVar19 = (byte)*puVar19 - bVar24;
          *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)((byte)uVar1 < bVar24);
          *(byte *)param_2 = (byte)*param_2 + bVar5;
          *unaff_EBP = *unaff_EBP;
          in_EAX = (byte *)CONCAT31(uVar16,cVar26 + 'T');
          pbStack_4 = pbVar35;
          goto _ctor;
        }
        bVar36 = false;
        pbVar12 = (byte *)CONCAT31((int3)((uint)headerText >> 8),*in_EAX);
        pbStack_4 = pbVar35;
        goto code_r0x004037a7;
      }
      bVar24 = *in_EAX;
      *in_EAX = *in_EAX + bVar5;
      *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)CARRY1(bVar24,bVar5);
      bVar24 = *headerText;
      *headerText = *headerText + bVar6;
      unaff_retaddr = pbStack_4._0_2_;
    } while (!CARRY1(bVar24,bVar6));
  }
  *in_EAX = *in_EAX + (char)in_EAX;
  bVar36 = CARRY1((byte)((uint)headerText >> 8),*in_EAX);
  pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_SS);
  iVar9 = CONCAT31(0x1f0a00,bVar36 + 'o') + *(int *)(unaff_EBP + uVar30) + (uint)(0x90 < bVar36) +
          -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)param_2;
  pcVar10 = (char *)(CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + -0x66) | *unaff_EDI);
  bVar5 = *(byte *)((int)unaff_EDI + -0x46);
  pbVar12 = (byte *)CONCAT22(0xd0a,(ushort)bVar5 << 8);
  *pcVar10 = *pcVar10 + (char)pcVar10;
  puVar21 = (undefined1 *)
            CONCAT22((short)((uint)param_2 >> 0x10),
                     CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBP[uVar30],(byte)param_2));
  *pbVar12 = *pbVar12 + (char)pcVar10;
  *unaff_EBP = *unaff_EBP - bVar5;
  *puVar21 = *puVar21;
  in_EAX = (byte *)(((uint)pcVar10 | 8) + 0x4490f9d8);
  bVar5 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar5;
  param_2 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(byte)param_2 | *pbVar35);
  *(uint *)(pbVar35 + (int)in_EAX) = *(uint *)(pbVar35 + (int)in_EAX) ^ (uint)pbVar12;
  *in_EAX = *in_EAX | bVar5;
  bVar36 = false;
  uRam2609fffc = in_ES;
  *in_EAX = *in_EAX | bVar5;
code_r0x004037a7:
  do {
    uVar25 = in_ES;
    uVar31 = uVar30;
    uVar18 = SUB42(param_2,0);
    out(*(undefined4 *)pbVar35,uVar18);
    out(*(undefined4 *)(pbVar35 + 4),uVar18);
    puVar19 = (uint *)((int)unaff_EDI + (int)param_2);
    uVar30 = *puVar19;
    uVar1 = *puVar19;
    *puVar19 = (uint)(in_EAX + uVar1 + bVar36);
    cVar26 = (char)(pbStack_4 +
                   (uint)(CARRY4(uVar30,(uint)in_EAX) || CARRY4((uint)(in_EAX + uVar1),(uint)bVar36)
                         ) + *(int *)(pbVar12 + (int)param_2)) + '\t';
    pbVar35 = (byte *)CONCAT31((int3)((uint)(pbStack_4 +
                                            (uint)(CARRY4(uVar30,(uint)in_EAX) ||
                                                  CARRY4((uint)(in_EAX + uVar1),(uint)bVar36)) +
                                            *(int *)(pbVar12 + (int)param_2)) >> 8),cVar26);
    out(uRam260a0000,uVar18);
    *pbVar35 = *pbVar35 + cVar26;
    bVar6 = (byte)((uint)pbVar12 >> 8) | (byte)*param_2;
    bVar5 = *pbVar35;
    pbVar35 = pbVar35 + (uint)CARRY1(bVar6,*pbVar35) + *(int *)pbVar35;
    *(byte *)param_2 = (byte)*param_2 + 6;
    cVar23 = (char)uVar31 - cRam260a0004;
    in_ES = CONCAT11(bVar6 + bVar5 + *pbVar35,6);
    pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),in_ES);
    *pbVar35 = *pbVar35;
    uVar16 = (undefined3)((uint)pbVar35 >> 8);
    cVar26 = (char)pbVar35 - *pbVar35;
    piVar11 = (int *)CONCAT31(uVar16,cVar26);
    pbVar35 = (byte *)(*piVar11 + 0x260a0004);
    bVar5 = cVar26 + (char)*piVar11;
    in_EAX = (byte *)CONCAT31(uVar16,bVar5);
    *in_EAX = *in_EAX + bVar5;
    *in_EAX = *in_EAX + bVar5;
    *in_EAX = *in_EAX + bVar5;
    bVar36 = CARRY1((byte)*param_2,bVar5);
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    uVar30 = CONCAT31((int3)(uVar31 >> 8),cVar23);
    pbStack_4 = pbVar12;
  } while (!bVar36);
  *in_EAX = *in_EAX + bVar5;
  pbVar32 = (byte *)CONCAT22((short)(uVar31 >> 0x10),
                             CONCAT11((byte)(uVar31 >> 8) | bRam080a0056,cVar23));
  *in_EAX = *in_EAX + bVar5;
  bVar7 = bVar5 + 2;
  *pbVar32 = *pbVar32 - (char)param_2;
  *(char *)CONCAT31(uVar16,bVar7) = *(char *)CONCAT31(uVar16,bVar7) + bVar7;
  bVar6 = *pbVar35;
  uVar20 = (undefined3)((uint)pbVar12 >> 8);
  puVar19 = (uint *)(CONCAT31(uVar20,bVar6) | 6);
  bVar24 = 9 < (bVar5 + 0x74 & 0xf) | in_AF;
  bVar8 = bVar5 + 0x74 + bVar24 * '\x06';
  bVar8 = bVar8 + (0x90 < (bVar8 & 0xf0) | 0x8d < bVar7 | bVar24 * (0xf9 < bVar8)) * '`';
  pbVar12 = (byte *)CONCAT31(uVar16,bVar8);
  bVar5 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar8;
  if (!SCARRY1(bVar5,bVar8)) {
    *pbVar35 = *pbVar35 + bVar8;
    pbVar35 = pbVar35 + *(int *)((int)param_2 + 0x33);
    *pbVar12 = *pbVar12 | bVar8;
    *pbVar35 = *pbVar35 + bVar8;
    bVar5 = bVar8 + 0x72;
    *(byte *)CONCAT31(uVar16,bVar5) = *(byte *)CONCAT31(uVar16,bVar5) | bVar5;
    *pbVar35 = *pbVar35 + bVar5;
    puVar19 = (uint *)CONCAT31(uVar20,(bVar6 | 6) + *pbVar35);
    pcVar10 = (char *)CONCAT31(uVar16,bVar8 - 0x11);
    *pcVar10 = *pcVar10 + (bVar8 - 0x11);
    pbVar12 = (byte *)CONCAT31(uVar16,bVar8 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar12 = *pbVar12 + (bVar8 - 0xf);
  }
code_r0x00403825:
  pbVar15 = (byte *)0x80a0000;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  cVar26 = (char)pbVar12 + '\x7f';
  pcVar10 = (char *)CONCAT31(uVar16,cVar26);
  *pcVar10 = *pcVar10 + cVar26;
  iVar9 = CONCAT31(uVar16,(char)pbVar12 + -0x7f) + 0x547d;
  cVar23 = (char)iVar9;
  uVar16 = (undefined3)((uint)iVar9 >> 8);
  cVar26 = cVar23 + '*';
  pcVar10 = (char *)CONCAT31(uVar16,cVar26);
  pbVar12 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar35);
  cVar27 = (char)pbVar32 - *pbVar35;
  uVar18 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar33 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar27) + 0x57);
  *pcVar10 = *pcVar10 + cVar26;
  bVar5 = cVar23 + 0x54U & *pbVar12;
  iVar9 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
  pcVar10 = (char *)CONCAT31(uVar16,bVar5 + 0x2a);
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_DS);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar33,cVar27)) + 0x58);
  *pcVar10 = *pcVar10 + bVar5 + 0x2a;
  bVar5 = bVar5 + 0x54 & *pbVar12;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
  pcVar10 = (char *)CONCAT31(uVar16,bVar5 + 0x2a);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar33,cVar27)) + 0x55);
  *pcVar10 = *pcVar10 + bVar5 + 0x2a;
  pcVar10 = (char *)CONCAT31(uVar16,bVar5 + 0x57);
  puVar22 = (uint *)(pbVar12 + *(int *)pbStack_14);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar33,cVar27)) + 0x55);
  *pcVar10 = *pcVar10 + bVar5 + 0x57;
  cVar26 = bVar5 - 0x3a;
  pcVar10 = (char *)CONCAT31(uVar16,cVar26);
  *pcVar10 = *pcVar10 + cVar26;
  uVar30 = *puVar22;
  cVar28 = (char)puVar19;
  pbVar32 = (byte *)CONCAT22(uVar18,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar18,CONCAT11(cVar33,
                                                  cVar27)) + 0x59),cVar27));
  *pcVar10 = *pcVar10 + cVar26;
  bVar24 = bVar5 - 0x10 & (byte)*puVar22;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar9);
  *(char *)CONCAT31(uVar16,bVar24) = *(char *)CONCAT31(uVar16,bVar24) + bVar24;
  bVar24 = bVar24 + 0x2a;
  pbVar35 = (byte *)CONCAT31(uVar16,bVar24);
  cVar26 = *(char *)((int)unaff_EDI + 0x17);
  *pbVar35 = *pbVar35 + bVar24;
  uVar1 = *puVar22;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
  cVar23 = *(char *)((int)unaff_EDI + 0x1a);
  *pbVar35 = *pbVar35 + bVar24;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((((byte)((uint)puVar19 >> 8) | (byte)uVar30) + cVar26 |
                                      (byte)uVar1) + cVar23 | (byte)*puVar22,cVar28));
  *pbVar32 = *pbVar32 + cVar27;
  *(byte *)((int)pbVar35 * 2) = *(byte *)((int)pbVar35 * 2) ^ bVar24;
  bVar5 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar24;
  bVar6 = *pbVar35;
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar22;
  bVar5 = ((bVar24 - bVar6) - CARRY1(bVar5,bVar24)) + (byte)*puVar22;
  pbVar35 = (byte *)CONCAT31(uVar16,bVar5);
  param_2 = puStack_24;
  if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x004038f6;
  *pbVar35 = *pbVar35 + bVar5;
  cVar26 = (bVar5 + 0x6f) - (0x90 < bVar5);
  pbVar12 = (byte *)CONCAT31(uVar16,cVar26);
  uVar30 = *puVar22;
  *(byte *)puVar22 = (byte)*puVar22 + cVar28;
  param_2 = puVar22;
  if (SCARRY1((byte)uVar30,cVar28) == (char)(byte)*puVar22 < '\0') {
    cRam33100000 = cRam33100000 - cVar26;
    cVar26 = cVar26 + (byte)*puVar22;
    pbVar35 = (byte *)CONCAT31(uVar16,cVar26);
    goto code_r0x0040390c;
  }
  do {
    *pbVar12 = *pbVar12 + (char)pbVar12;
    while( true ) {
      uVar16 = (undefined3)((uint)pbVar12 >> 8);
      cVar26 = (char)pbVar12 + '\x02';
      pbVar35 = (byte *)CONCAT31(uVar16,cVar26);
      if ((POPCOUNT(cVar26) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbStack_14);
      cVar26 = (char)pbVar35 + (byte)*param_2;
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar26);
code_r0x0040390c:
      cVar23 = (char)pbVar35;
      if ((POPCOUNT(cVar26) & 1U) != 0) {
        *pbStack_14 = *pbStack_14 + cVar23;
        goto code_r0x0040395a;
      }
      *pbVar35 = *pbVar35 + cVar23;
      bVar5 = cVar23 + 2;
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar5);
code_r0x00403912:
      bVar36 = (POPCOUNT(bVar5) & 1U) == 0;
      if (!bVar36) goto code_r0x00403967;
      *pbVar35 = *pbVar35 + (char)pbVar35;
code_r0x00403916:
      bVar6 = (char)pbVar35 + 0x6f;
      pbVar12 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar35 >> 8),bVar6);
      bVar5 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar6;
      if (*pbVar12 == 0 || SCARRY1(bVar5,bVar6) != (char)*pbVar12 < '\0') goto code_r0x00403979;
      *pbVar12 = *pbVar12 + bVar6;
      pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar35 >> 8),(char)pbVar35 + -100);
      *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
           (byte *)((int)param_2 + (uint)(0xd2 < bVar6) + *(int *)(pbStack_14 + (int)unaff_EDI * 8))
      ;
code_r0x00403926:
      *(uint **)pbVar12 = puStack_24;
      bVar5 = *pbStack_14;
      bVar6 = (byte)pbVar12;
      *pbStack_14 = *pbStack_14 + bVar6;
      if (CARRY1(bVar5,bVar6)) {
        *pbVar12 = *pbVar12 + bVar6;
        uVar16 = (undefined3)((uint)pbVar12 >> 8);
        bVar6 = bVar6 | pbVar12[0x400005b];
        pbVar35 = (byte *)CONCAT31(uVar16,bVar6);
        pbVar12 = pbStack_14;
        if ((char)bVar6 < '\x01') goto code_r0x00403991;
        *pbVar35 = *pbVar35 + bVar6;
        cVar26 = bVar6 + 0x28;
        pbVar35 = (byte *)CONCAT31(uVar16,cVar26);
        *(byte **)pbVar35 = pbVar35 + (uint)(0xd7 < bVar6) + *(int *)pbVar35;
        bVar5 = *pbVar32;
        bVar6 = (byte)((uint)puVar19 >> 8);
        *pbVar32 = *pbVar32 + bVar6;
        if (CARRY1(bVar5,bVar6)) {
          *pbVar35 = *pbVar35 + cVar26;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar35,(char)puVar19));
          *pbStack_14 = *pbStack_14 + cVar26;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],
                                              (char)pbVar32));
          *pbVar35 = *pbVar35 + cVar26;
code_r0x00403950:
          uVar16 = (undefined3)((uint)pbVar35 >> 8);
          bVar6 = (char)pbVar35 + 0x6f;
          bVar5 = *(byte *)CONCAT31(uVar16,bVar6);
          *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
          pbVar35 = (byte *)CONCAT31(uVar16,(bVar6 & bVar5) + *pbStack_14);
          *(byte *)puVar19 = (byte)*puVar19 - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar35 = *pbVar35 + cVar26;
    cVar26 = (char)pbVar12 + '.' + (byte)*param_2;
    pbVar35 = (byte *)CONCAT31(uVar16,cVar26);
    if ((POPCOUNT(cVar26) & 1U) != 0) {
      pbVar12 = (byte *)((int)param_2 + (int)pbVar35);
      *pbVar12 = *pbVar12 + cVar26;
      bVar5 = *pbVar12;
      goto code_r0x00403912;
    }
    *pbVar35 = *pbVar35 + cVar26;
    bVar5 = cVar26 + 2;
    pbVar35 = (byte *)CONCAT31(uVar16,bVar5);
    if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403916;
    *pbVar35 = *pbVar35 + bVar5;
    cVar23 = cVar26 + 'q';
    piVar11 = (int *)CONCAT31(uVar16,cVar23);
    *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0x90 < bVar5);
    bVar5 = *pbVar32;
    bVar6 = (byte)((uint)puVar19 >> 8);
    *pbVar32 = *pbVar32 + bVar6;
    if (!CARRY1(bVar5,bVar6)) {
      out(*(undefined4 *)pbStack_14,(short)param_2);
      bVar5 = (cVar23 - (char)*piVar11) - CARRY1(bVar5,bVar6);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
      cVar26 = bVar5 - *(byte *)CONCAT31(uVar16,bVar5);
      pbVar35 = pbStack_14 +
                ((4 - *(int *)CONCAT31(uVar16,cVar26)) -
                (uint)(bVar5 < *(byte *)CONCAT31(uVar16,bVar5)));
      pbVar12 = (byte *)CONCAT31(uVar16,cVar26);
      pbStack_14 = (byte *)0;
      goto code_r0x00403825;
    }
    *(char *)piVar11 = (char)*piVar11 + cVar23;
    uVar25 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar5 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar11 = (char)*piVar11 + cVar23;
    pcVar10 = (char *)CONCAT31(uVar16,cVar26 + 's');
    pbVar32 = (byte *)CONCAT22(uVar25,CONCAT11(bVar5 + *(char *)(CONCAT22(uVar25,CONCAT11(bVar5,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar10 = *pcVar10 + cVar26 + 's';
    bVar5 = cVar26 - 0xf;
    *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
    bVar6 = cVar26 + 0x1e;
    pbVar12 = (byte *)CONCAT31(uVar16,bVar6);
    *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
         (byte *)((int)puVar19 + (uint)(0xd2 < bVar5) + *(int *)(pbStack_14 + (int)unaff_EDI * 8));
    uVar25 = *(undefined2 *)pbVar12;
    bVar5 = *pbStack_14;
    *pbStack_14 = *pbStack_14 + bVar6;
    param_2 = puVar19;
    if (CARRY1(bVar5,bVar6)) {
      *pbVar12 = *pbVar12 + bVar6;
      pbVar35 = (byte *)CONCAT31(uVar16,bVar6 | pbVar12[0x400005a]);
      if ('\0' < (char)(bVar6 | pbVar12[0x400005a])) {
code_r0x004038f6:
        bVar5 = (byte)pbVar35;
        *pbVar35 = *pbVar35 + bVar5;
        uVar16 = (undefined3)((uint)pbVar35 >> 8);
        cVar26 = ((bVar5 + 0x28) - *(char *)CONCAT31(uVar16,bVar5 + 0x28)) - (0xd7 < bVar5);
        pbVar35 = (byte *)CONCAT31(uVar16,cVar26);
        bVar5 = *pbVar32;
        bVar6 = (byte)((uint)puVar19 >> 8);
        *pbVar32 = *pbVar32 + bVar6;
        if (CARRY1(bVar5,bVar6)) {
          *pbVar35 = *pbVar35 + cVar26;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar35,(char)puVar19));
          *pbStack_14 = *pbStack_14 + cVar26;
          goto code_r0x00403908;
        }
        pbVar12 = pbVar35 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar35 = *pbVar35 + (char)pbVar35;
  *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar19;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbStack_14);
  cVar26 = (char)pbVar35 + '\x02';
  pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar26);
  bVar36 = (POPCOUNT(cVar26) & 1U) == 0;
code_r0x00403967:
  if (!bVar36) goto code_r0x004039be;
  *pbVar35 = *pbVar35 + (char)pbVar35;
  uVar16 = (undefined3)((uint)pbVar35 >> 8);
  bVar5 = (char)pbVar35 + 0x6f;
  bVar5 = bVar5 & *(byte *)CONCAT31(uVar16,bVar5);
  pbVar12 = (byte *)CONCAT31(uVar16,bVar5);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar5;
code_r0x00403979:
  bVar5 = (char)pbVar12 - (char)*unaff_EDI;
  bVar36 = bVar5 < (byte)*puVar19;
  pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5 - (byte)*puVar19);
  do {
    cVar26 = (char)pbVar35;
    *pbVar35 = *pbVar35 + cVar26 + bVar36;
    *pbVar35 = *pbVar35 + cVar26;
    *(byte *)puVar19 = (byte)*puVar19 + (char)param_2;
    *(byte *)((int)puVar19 + 0x101c00aa) = *(byte *)((int)puVar19 + 0x101c00aa) + (char)pbVar32;
    *pbVar35 = *pbVar35 + cVar26;
    *(byte **)pbStack_14 = pbVar32 + *(int *)pbStack_14;
    bVar5 = (byte)((uint)puVar19 >> 8);
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11(bVar5 + *pbVar35,(char)puVar19));
    pbVar35 = pbVar35 + (uint)CARRY1(bVar5,*pbVar35) + *(int *)pbVar35;
    pbVar12 = pbStack_14;
code_r0x00403991:
    cVar26 = (char)puVar19;
    *(byte *)param_2 = (byte)*param_2 + cVar26;
    cVar23 = (char)pbVar32 - pbVar12[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar23);
    pbStack_14 = pbVar12;
    if ((POPCOUNT(cVar23) & 1U) != 0) goto code_r0x0040395a;
    *pbVar35 = *pbVar35 + (byte)pbVar35;
    uVar17 = (uint3)((uint)pbVar35 >> 8);
    bVar5 = (byte)pbVar35 | *pbVar32;
    piVar11 = (int *)CONCAT31(uVar17,bVar5);
    bVar6 = (byte)((uint)puVar19 >> 8);
    bVar24 = (byte)param_2;
    if (bVar5 == 0) {
      *(char *)piVar11 = (char)*piVar11;
      pbStack_14 = pbVar12 + 4;
      out(*(undefined4 *)pbVar12,(short)param_2);
      pbVar35 = (byte *)((uint)uVar17 << 8);
      *(byte *)param_2 = (byte)*param_2 + cVar26;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar24 - *pbVar32);
      *pbVar32 = *pbVar32;
      *(byte *)param_2 = (byte)*param_2 + bVar6;
      *pbVar35 = *pbVar35;
      *pbVar32 = *pbVar32 + cVar23;
      *pbVar35 = *pbVar35;
      *(byte **)(pbVar32 + -0x3d) = pbStack_14 + *(int *)(pbVar32 + -0x3d);
      break;
    }
    pbVar15 = pbVar15 + -unaff_EDI[9];
    *(byte *)piVar11 = (char)*piVar11 + bVar5;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11(bVar6 | (byte)*param_2,cVar26));
    pbStack_14 = pbVar12 + *piVar11;
    pcVar10 = (char *)((int)piVar11 + *piVar11);
    bVar6 = (char)pcVar10 - *pcVar10;
    pbVar35 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar6);
    bVar5 = *pbVar35;
    *pbVar35 = *pbVar35 + bVar6;
    pbVar35 = pbVar35 + (-(uint)CARRY1(bVar5,bVar6) - *(int *)pbVar35);
    bVar36 = CARRY1((byte)*puVar19,bVar24);
    *(byte *)puVar19 = (byte)*puVar19 + bVar24;
  } while (!bVar36);
  *pbVar35 = *pbVar35 + (char)pbVar35;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(byte)puVar19 | (byte)*param_2);
code_r0x004039be:
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar15 + -0x3c));
  *pbVar35 = *pbVar35 + (byte)pbVar35;
  uVar16 = (undefined3)((uint)pbVar35 >> 8);
  bVar5 = (byte)pbVar35 | (byte)*param_2;
  pcVar10 = (char *)CONCAT31(uVar16,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) goto code_r0x004039c8;
  cVar26 = *pcVar10;
  *pcVar10 = *pcVar10 + bVar5;
  cVar23 = *pcVar10;
  if (!SCARRY1(cVar26,bVar5)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar10 = *pcVar10 + bVar5;
  *pbStack_14 = *pbStack_14 + 1;
  uVar3 = *(undefined6 *)CONCAT31(uVar16,bVar5 + 6);
  pbVar12 = (byte *)uVar3;
  uVar30 = *param_2;
  bVar5 = (byte)puVar19;
  *(byte *)param_2 = (byte)*param_2 + bVar5;
  if (!CARRY1((byte)uVar30,bVar5)) goto code_r0x00403979;
  *pbVar12 = *pbVar12 + (char)uVar3;
  bVar24 = (byte)((uint)puVar19 >> 8) | *pbVar12;
  uVar18 = CONCAT11(bVar24,bVar5);
  pbVar12 = pbVar12 + -*(int *)pbVar12;
  bVar6 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar24;
  if (CARRY1(bVar6,bVar24)) {
    cVar26 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar26;
    uVar30 = *param_2;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - pbVar32[-0x3a],(char)param_2));
    *pbVar12 = *pbVar12 + cVar26;
    uVar34 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar6 = (byte)((uint)pbVar32 >> 8) | *(byte *)((int)param_2 + 0x32);
    pcVar10 = (char *)CONCAT22(uVar34,CONCAT11(bVar6,(char)pbVar32));
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,in_CS);
    cVar23 = cVar26 + *pcVar10 + '-';
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar23);
    *pbVar12 = *pbVar12;
    uVar1 = *param_2;
    cVar28 = (char)pbVar32 - *pbStack_14;
    cVar26 = *(char *)((int)unaff_EDI + 0x17);
    *pbVar12 = *pbVar12 + cVar23;
    uVar18 = CONCAT11((bVar24 | (byte)uVar30) + cVar26 | (byte)*param_2,bVar5 - (byte)uVar1);
    pbVar32 = (byte *)CONCAT22(uVar34,CONCAT11(bVar6 + *(char *)(CONCAT31((int3)((uint)pcVar10 >> 8)
                                                                          ,cVar28) + 0x4e),cVar28));
    *pbVar12 = *pbVar12 + cVar23;
  }
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),uVar18);
  bVar5 = (byte)pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  pcVar10 = (char *)CONCAT31(uVar16,bVar5 + 0x28);
  *pcVar10 = (*pcVar10 - (bVar5 + 0x28)) - (0xd7 < bVar5);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar18;
  bVar6 = bVar5 + 0x1b;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                             CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32));
  *(char *)CONCAT31(uVar16,bVar6) = *(char *)CONCAT31(uVar16,bVar6) + bVar6;
  pcVar13 = (char *)CONCAT31(uVar16,bVar5 + 0x43);
  *pcVar13 = (*pcVar13 - (bVar5 + 0x43)) - (0xd7 < bVar6);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar18;
  pcVar10 = pcVar13 + -0x6b721c;
  pcVar13 = pcVar13 + -0x6b721a;
  *pcVar13 = *pcVar13 + (char)((uint)param_2 >> 8);
  cVar23 = *pcVar13;
code_r0x00403a22:
  if ((POPCOUNT(cVar23) & 1U) == 0) {
code_r0x00403a24:
    cVar26 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar26;
    uVar16 = (undefined3)((uint)pcVar10 >> 8);
    bVar5 = cVar26 + 2;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
      piVar11 = (int *)CONCAT31(uVar16,cVar26 + '*');
      *piVar11 = (*piVar11 - (int)piVar11) - (uint)(0xd7 < bVar5);
      uVar30 = *param_2;
      bVar24 = (byte)puVar19;
      *(byte *)param_2 = (byte)*param_2 + bVar24;
      out(*(undefined4 *)pbStack_14,(short)param_2);
      bVar6 = ((cVar26 + '*') - (char)*piVar11) - CARRY1((byte)uVar30,bVar24);
      pbVar35 = (byte *)CONCAT31(uVar16,bVar6);
      *(byte *)param_2 = (byte)*param_2 + bVar24;
      uVar18 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar29 = SUB41(pbVar32,0);
      cVar26 = (char)((uint)pbVar32 >> 8) - pbStack_14[0x1f];
      pbVar32 = (byte *)CONCAT22(uVar18,CONCAT11(cVar26,uVar29));
      *pbVar35 = *pbVar35 + bVar6;
      uVar30 = *param_2;
      bVar5 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar6;
      pbStack_14 = pbStack_14 + ((4 - *(int *)pbVar35) - (uint)CARRY1(bVar5,bVar6));
      pbVar35 = (byte *)CONCAT31(uVar16,bVar6);
      puVar19 = (uint *)(CONCAT22((short)((uint)puVar19 >> 0x10),
                                  CONCAT11((byte)((uint)puVar19 >> 8) | (byte)uVar30,bVar24)) + -1);
      bVar5 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar6;
      bVar5 = (bVar6 - *pbVar35) - CARRY1(bVar5,bVar6);
      *(byte *)puVar19 = *(byte *)puVar19 + (char)param_2;
      bVar36 = CARRY1(bVar5,(byte)*param_2);
      bVar5 = bVar5 + (byte)*param_2;
      pbVar35 = (byte *)CONCAT31(uVar16,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar35 = *pbVar35 + bVar5;
        cVar23 = (bVar5 + 0x6f) - (0x90 < bVar5);
        pbVar12 = (byte *)CONCAT31(uVar16,cVar23);
        uVar30 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
        if (SCARRY1((byte)uVar30,(char)puVar19) == (char)(byte)*param_2 < '\0')
        goto code_r0x00403aaf;
        *pbVar12 = *pbVar12 + cVar23;
        pcVar10 = (char *)CONCAT31(uVar16,cVar23 + '\x02');
        bVar6 = cVar26 + pbVar32[0x52];
        pbVar32 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6,uVar29));
        *pcVar10 = *pcVar10 + cVar23 + '\x02';
        bVar5 = cVar23 + 4;
        pbVar12 = (byte *)CONCAT31(uVar16,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar12 = *pbVar12 + bVar5;
          cVar26 = (cVar23 + 's') - (0x90 < bVar5);
          pcVar10 = (char *)CONCAT31(uVar16,cVar26);
          bVar5 = (byte)((uint)puVar19 >> 8);
          bVar36 = CARRY1(*pbVar32,bVar5);
          *pbVar32 = *pbVar32 + bVar5;
          pbVar35 = pbStack_14;
          if (bVar36) {
            *pcVar10 = *pcVar10 + cVar26;
            pbVar32 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6 | pbVar15[0x5c],uVar29));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar12);
        pbVar32 = (byte *)CONCAT22(uVar18,CONCAT11(bVar6 + pbVar32[0x52],uVar29));
code_r0x00403abf:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        cVar26 = (char)pbVar12 + '\x02';
        pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar26);
        bVar36 = (POPCOUNT(cVar26) & 1U) == 0;
        pbStack_34 = pbVar15;
        if (!bVar36) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar36) {
          *pbVar35 = *pbVar35 + (byte)pbVar35;
          bVar5 = (byte)pbVar35 | pbVar35[0x400005e];
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar5);
          pbStack_34 = pbVar15;
          if ((char)bVar5 < '\x01') goto code_r0x00403b0b;
          *pbVar12 = *pbVar12 + bVar5;
code_r0x00403aaf:
          cVar26 = (char)pbVar12 + '(';
          pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar26);
          *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
          bVar5 = *pbVar32;
          bVar6 = (byte)((uint)puVar19 >> 8);
          *pbVar32 = *pbVar32 + bVar6;
          pbVar14 = pbVar15;
          if (!CARRY1(bVar5,bVar6)) goto code_r0x00403ad8;
          *pbVar12 = *pbVar12 + cVar26;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar32,(char)puVar19));
          if ((POPCOUNT((byte)*param_2 - cVar26) & 1U) != 0) {
            *pbStack_14 = *pbStack_14 + cVar26;
            pbStack_34 = pbVar15;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],(char)pbVar32
                                           ));
      }
      bVar5 = (byte)pbVar35;
      *pbVar35 = *pbVar35 + bVar5;
      cVar26 = (bVar5 + 0x6f) - (0x90 < bVar5);
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar26);
      bVar5 = *pbVar32;
      cVar23 = (char)((uint)puVar19 >> 8);
      *pbVar32 = *pbVar32 + cVar23;
      pbStack_34 = pbVar15;
      if (*pbVar32 == 0 || SCARRY1(bVar5,cVar23) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
      *pcVar10 = *pcVar10 + cVar26;
    }
    else {
      cVar26 = bVar5 + (byte)*param_2;
      pcVar10 = (char *)CONCAT31(uVar16,cVar26);
      pbVar35 = pbStack_14;
      if ((POPCOUNT(cVar26) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
         (byte *)((int)param_2 +
                 (uint)(0xd2 < (byte)pcVar10) + *(int *)(pbStack_14 + (int)unaff_EDI * 8));
    pbVar12 = pbVar15;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)pcVar10 + 0x2d);
code_r0x00403ad8:
    pbStack_34 = pbVar14;
    bVar5 = *pbVar12;
    bVar6 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar6;
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,uVar25);
    if (!CARRY1(bVar5,bVar6)) goto code_r0x00403afc;
    *pbVar12 = *pbVar12 + bVar6;
    bVar6 = bVar6 | pbVar12[0x400005d];
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar6);
    pbVar35 = pbStack_14;
    if ((char)bVar6 < '\x01') {
      *pbVar12 = *pbVar12 + bVar6;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*param_2,(char)puVar19)
                                );
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],(char)pbVar32)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar12 = *pbVar12 + (char)pbVar12;
    cVar26 = (char)pbVar12 + '(';
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar26);
    *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
    bVar5 = *pbVar32;
    bVar6 = (byte)((uint)puVar19 >> 8);
    *pbVar32 = *pbVar32 + bVar6;
    pbStack_14 = pbVar35;
    if (!CARRY1(bVar5,bVar6)) goto code_r0x00403b0b;
    *pbVar12 = *pbVar12 + cVar26;
  }
  else {
    uVar30 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    if (SCARRY1((byte)uVar30,(char)puVar19) == (char)(byte)*param_2 < '\0') {
      pbVar12 = pbVar15;
      pbVar14 = (byte *)(pcVar10 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + '\x02');
    pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                               CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32));
    pbVar35 = pbStack_14;
code_r0x00403a7d:
    cVar26 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar26;
    uVar16 = (undefined3)((uint)pcVar10 >> 8);
    cVar23 = cVar26 + '-';
    pbVar14 = (byte *)CONCAT31(uVar16,cVar23);
    pbVar12 = pbVar15;
    pbStack_14 = pbVar35;
    if ((POPCOUNT(cVar23 - (byte)*param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar14 = *pbVar14 + cVar23;
    bVar5 = cVar26 + 0x2f;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      uVar30 = *param_2;
      *(byte *)param_2 = (byte)*param_2 + (byte)puVar19;
      *pbVar15 = *pbVar15 - CARRY1((byte)uVar30,(byte)puVar19);
      pbVar12 = (byte *)CONCAT31(uVar16,cVar26 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
    bVar36 = 0x90 < bVar5;
    pcVar10 = (char *)CONCAT31(uVar16,cVar26 + -0x62);
code_r0x00403a8f:
    uVar16 = (undefined3)((uint)pcVar10 >> 8);
    bVar6 = (char)pcVar10 - bVar36;
    pbVar12 = (byte *)CONCAT31(uVar16,bVar6);
    bVar5 = *pbVar32;
    cVar26 = (char)((uint)puVar19 >> 8);
    *pbVar32 = *pbVar32 + cVar26;
    pbStack_34 = pbVar15;
    pbStack_14 = pbVar35;
    if (*pbVar32 != 0 && SCARRY1(bVar5,cVar26) == (char)*pbVar32 < '\0') {
      *pbVar12 = *pbVar12 + bVar6;
      pbStack_14 = (byte *)CONCAT31(uVar16,bVar6 + 0x2d);
      *(byte **)(pbVar35 + (int)unaff_EDI * 8) =
           (byte *)((int)param_2 + (uint)(0xd2 < bVar6) + *(int *)(pbVar35 + (int)unaff_EDI * 8));
      bVar36 = CARRY1(*pbVar35,(byte)pbVar35);
      *pbVar35 = *pbVar35 + (byte)pbVar35;
      goto code_r0x00403aa1;
    }
  }
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                             CONCAT11((byte)((uint)puVar19 >> 8) | *pbVar12,(char)puVar19));
  *pbStack_14 = *pbStack_14 + (char)pbVar12;
code_r0x00403afc:
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                             CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32));
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar16 = (undefined3)((uint)pbVar12 >> 8);
  bVar6 = (char)pbVar12 + 0x6f;
  bVar5 = *(byte *)CONCAT31(uVar16,bVar6);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
  pbVar12 = (byte *)CONCAT31(uVar16,(bVar6 & bVar5) + *pbStack_14);
  *(byte *)puVar19 = (byte)*puVar19 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    bVar5 = (byte)pbVar12 | *pbVar32;
    piVar11 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
    if (bVar5 != 0) {
      pbStack_34 = pbStack_34 + -unaff_EDI[9];
      *(byte *)piVar11 = (char)*piVar11 + bVar5;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*param_2,(char)puVar19)
                                );
      pbStack_38 = pbStack_38 + *piVar11;
      pcVar10 = (char *)((int)piVar11 + *piVar11);
      uVar16 = (undefined3)((uint)pcVar10 >> 8);
      bVar6 = (char)pcVar10 - *pcVar10;
      pbVar35 = (byte *)CONCAT31(uVar16,bVar6);
      bVar5 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar6;
      piVar11 = (int *)CONCAT31(uVar16,bVar6 - CARRY1(bVar5,bVar6));
    }
    *(char *)piVar11 = (char)*piVar11 + (char)piVar11;
    pbStack_14 = pbStack_38 + 4;
    out(*(undefined4 *)pbStack_38,(short)param_2);
    pbVar12 = (byte *)(((uint)piVar11 >> 8) * 0x100);
    *(byte *)param_2 = (byte)*param_2 + (byte)puVar19;
    bVar5 = (char)param_2 - *pbVar32;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
    *pbVar32 = *pbVar32;
    *(byte *)param_2 = (byte)*param_2 + (char)((uint)puVar19 >> 8);
    *pbVar12 = *pbVar12;
    pcVar10 = (char *)(((uint)piVar11 >> 8) * 0x200);
    *pcVar10 = *pcVar10 + (char)pbVar32;
    bVar36 = CARRY1((byte)*puVar19,bVar5);
    *(byte *)puVar19 = (byte)*puVar19 + bVar5;
    pbStack_38 = pbStack_14;
    if (bVar36) break;
    while( true ) {
      *(byte **)pbVar12 = pbVar12 + (uint)bVar36 + *(int *)pbVar12;
      unaff_EDI = unaff_EDI + 1;
      pbVar12[(int)param_2] = pbVar12[(int)param_2] + (char)pbVar32;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      *(byte **)pbStack_38 = pbVar32 + *(int *)pbStack_38;
      bVar5 = (byte)((uint)puVar19 >> 8);
      cVar26 = (char)puVar19;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar5 + *pbVar12,cVar26));
      pbVar12 = pbVar12 + (uint)CARRY1(bVar5,*pbVar12) + *(int *)pbVar12;
      *(byte *)param_2 = (byte)*param_2 + cVar26;
      cVar26 = (char)pbVar32 - pbStack_38[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar26);
      pbStack_14 = pbStack_38;
      if ((POPCOUNT(cVar26) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar12 = *pbVar12 + (char)pbVar12;
      *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar19;
      pbVar32 = (byte *)((uint)pbVar32 | (uint)pbStack_14);
      cVar26 = (char)pbVar12 + '\x02';
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar26);
      bVar36 = (POPCOUNT(cVar26) & 1U) == 0;
code_r0x00403b18:
      bVar5 = (byte)pbVar35;
      uVar16 = (undefined3)((uint)pbVar35 >> 8);
      if (!bVar36) {
        *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
        pbVar12 = (byte *)CONCAT31(uVar16,bVar5 | *pbStack_14);
code_r0x00403b73:
        pbVar35 = (byte *)((int)unaff_EDI + *(int *)(pbStack_34 + -0x37));
        *pbVar12 = *pbVar12 + (byte)pbVar12;
        uVar16 = (undefined3)((uint)pbVar12 >> 8);
        bVar5 = (byte)pbVar12 | (byte)*param_2;
        pcVar10 = (char *)CONCAT31(uVar16,bVar5);
        uVar37 = CONCAT44(param_2,pcVar10);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pcVar10 = *pcVar10 + bVar5;
          *pbStack_14 = *pbStack_14 + 1;
          return (byte *)CONCAT31(uVar16,bVar5 + 6);
        }
        bVar5 = *pbStack_14;
        *pbStack_14 = *pbStack_14 + 1;
        pcVar2 = (code *)swi(4);
        if (SCARRY1(bVar5,'\x01')) {
          uVar37 = (*pcVar2)();
          puVar19 = extraout_ECX;
        }
        pbVar12 = (byte *)uVar37;
        *pbVar12 = *pbVar12 + (char)uVar37;
        cVar23 = (char)((ulonglong)uVar37 >> 0x20);
        puVar22 = (uint *)CONCAT22((short)((ulonglong)uVar37 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar37 >> 0x28) | pbVar32[0x2f],cVar23
                                           ));
        *pbVar12 = *pbVar12 + (char)uVar37;
        cVar26 = (char)puVar19;
        bVar24 = (byte)((uint)puVar19 >> 8) | *pbVar12;
        pbVar12 = pbVar12 + *(int *)pbVar12;
        bVar5 = *pbVar32;
        *pbVar32 = *pbVar32 + bVar24;
        bVar6 = (byte)pbVar12;
        if (CARRY1(bVar5,bVar24)) {
          *pbVar12 = *pbVar12 + bVar6;
          bVar24 = bVar24 | (byte)*puVar22;
          *pbVar32 = *pbVar32 - cVar23;
          *pbVar12 = *pbVar12 + bVar6;
          uVar16 = (undefined3)((uint)pbVar12 >> 8);
          bVar6 = bVar6 | (byte)*puVar22;
          piVar11 = (int *)CONCAT31(uVar16,bVar6);
          pbStack_34 = pbStack_34 + *piVar11;
          *(byte *)piVar11 = (char)*piVar11 + bVar6;
          cVar23 = (char)pbVar32 - *pbStack_14;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((char)((uint)pbVar32 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar23)
                                                       + 0x5f),cVar23));
          *(byte *)piVar11 = (char)*piVar11 + bVar6;
          bVar5 = bVar6 + 0x2a & (byte)*puVar22;
          pbVar35 = pbVar35 + *(int *)(pbStack_34 + 0x5f);
          *(char *)CONCAT31(uVar16,bVar5) = *(char *)CONCAT31(uVar16,bVar5) + bVar5;
          pbVar12 = (byte *)CONCAT31(uVar16,bVar5 + 0x2a);
          *(byte *)puVar22 = (byte)*puVar22 + 0x28;
          *pbVar12 = *pbVar12 + bVar5 + 0x2a;
        }
        else {
          *pbStack_14 = *pbStack_14 + bVar6;
        }
        pcVar10 = (char *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar24,cVar26));
        *pbStack_34 = *pbStack_34 - bVar24;
        *(byte *)puVar22 = (byte)*puVar22 + cVar26;
        bVar5 = (byte)pbVar12 - 0xb;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar5);
        if (10 < (byte)pbVar12) {
          *pbVar15 = *pbVar15 | bVar5;
          return pbVar15;
        }
        *(byte *)puVar22 = (byte)*puVar22 + cVar26;
        do {
          bVar5 = pbVar32[-0x23];
          bVar24 = (byte)pbVar15;
          *pbVar15 = *pbVar15 + bVar24;
          bVar6 = pbStack_34[-0x22];
          *pbVar15 = *pbVar15 + bVar24;
          uVar16 = (undefined3)((uint)pbVar15 >> 8);
          bVar24 = bVar24 | *pbStack_14;
          pbVar12 = (byte *)CONCAT31(uVar16,bVar24);
          cVar23 = (char)pbVar32 - *pbStack_14;
          pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar32 >> 8) + bVar5 |
                                                              bVar6,(char)pbVar32)) >> 8),cVar23);
          cVar26 = (char)pcVar10;
          pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                     CONCAT11((char)((uint)pcVar10 >> 8) + *pbVar12,cVar26));
          *(byte *)puVar22 = (byte)*puVar22 + cVar26;
          bVar6 = bVar24 - *pbVar12;
          pbVar15 = (byte *)CONCAT31(uVar16,bVar6);
          pbStack_14 = pbStack_14 + (-(uint)(bVar24 < *pbVar12) - *(int *)pbVar15);
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 * '\x02');
          *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
          *pbVar35 = *pbVar35 + cVar23;
          bVar5 = *pbVar15;
          *pbVar15 = *pbVar15 + bVar6;
          *puVar22 = (uint)(pbVar15 + (uint)CARRY1(bVar5,bVar6) + *puVar22);
        } while ((POPCOUNT(*puVar22 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar15 = *pbVar15 + (char)pbVar15;
        pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),(byte)pcVar10 | pbVar15[(int)pcVar10])
        ;
        bVar36 = false;
        pbVar15 = (byte *)((uint)pbVar15 & 0xffffff00);
        do {
          pbVar35 = pbVar35 + (-(uint)bVar36 - *(int *)pbVar32);
          pcVar13 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pcVar10);
          *pcVar13 = *pcVar13 + *pcVar10;
          pbVar15 = (byte *)CONCAT31((int3)((uint)(pcVar13 +
                                                  (pbStack_14[0x2000001] <
                                                  (byte)((uint)pcVar10 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar13 +
                                            (pbStack_14[0x2000001] < (byte)((uint)pcVar10 >> 8)) +
                                            0xda7d) | (byte)*puVar22) + 0x7d);
          pcVar10 = pcVar10 + -1;
          *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar10;
          while( true ) {
            uVar20 = (undefined3)((uint)puVar22 >> 8);
            cVar26 = (char)puVar22 + *(char *)((int)pbVar35 * 2 + 0xa0000e1);
            puVar22 = (uint *)CONCAT31(uVar20,cVar26);
            bVar36 = CARRY1((byte)pbVar15,(byte)*puVar22);
            uVar16 = (undefined3)((uint)pbVar15 >> 8);
            bVar5 = (byte)pbVar15 + (byte)*puVar22;
            pbVar15 = (byte *)CONCAT31(uVar16,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *pbVar15 = *pbVar15 + bVar5;
            cVar23 = (char)pcVar10;
            pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar10 >> 8) | pbVar35[-0x65],cVar23))
            ;
            bVar6 = *pbVar15;
            *pbVar15 = *pbVar15 + bVar5;
            if (CARRY1(bVar6,bVar5)) {
              *pbVar15 = *pbVar15 + bVar5;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | pbStack_34[-0x1d],
                                                  (char)pbVar32));
              *pbVar15 = *pbVar15 + bVar5;
              bVar36 = false;
              bVar5 = bVar5 | (byte)*puVar22;
              pcVar13 = (char *)CONCAT31(uVar16,bVar5);
              while( true ) {
                bVar6 = (byte)pcVar13;
                uVar16 = (undefined3)((uint)pcVar13 >> 8);
                if (bVar36 == (char)bVar5 < '\0') break;
                *pcVar13 = *pcVar13 + bVar6;
                bVar6 = bVar6 | (byte)*puVar22;
                puVar19 = (uint *)CONCAT31(uVar16,bVar6);
                *pbVar35 = *pbVar35 << 1 | (char)*pbVar35 < '\0';
                uVar30 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19 + bVar6;
                pbStack_34 = pbStack_34 + (-(uint)CARRY1((byte)uVar30,bVar6) - *puVar19);
                *puVar19 = *puVar19 << 1 | (uint)((int)*puVar19 < 0);
                while( true ) {
                  uVar30 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22 + (byte)pcVar10;
                  cVar26 = (char)puVar19 + 'o' + CARRY1((byte)uVar30,(byte)pcVar10);
                  pcVar13 = (char *)CONCAT31((int3)((uint)puVar19 >> 8),cVar26);
                  pcVar10 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar26) & 1U) != 0) break;
                  *pcVar13 = *pcVar13 + cVar26;
                  bVar5 = bRamfe140212;
                  pcVar10 = (char *)0x0;
                  uVar16 = (undefined3)((uint)(pcVar13 + -0x732b0000) >> 8);
                  bVar6 = in(0);
                  puVar19 = (uint *)CONCAT31(uVar16,bVar6);
                  uVar30 = *puVar22;
                  *(byte *)puVar22 = (byte)*puVar22;
                  if (SCARRY1((byte)uVar30,'\0') != (char)(byte)*puVar22 < '\0') {
                    *(byte *)puVar19 = (byte)*puVar19 + bVar6;
                    bVar6 = bVar6 | (byte)*puVar22;
                    puVar19 = (uint *)CONCAT31(uVar16,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *(byte *)puVar19 = (byte)*puVar19 + bVar6;
                      pcVar10 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar5 | (byte)*puVar19) << 8);
                      *(byte *)puVar19 = (byte)*puVar19 + bVar6;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar19 = (byte)*puVar19 + bVar6;
                    puVar19 = (uint *)CONCAT31(uVar16,bVar6 | (byte)*puVar22);
                  }
                }
                *(byte *)puVar22 = (byte)*puVar22;
                bVar36 = SCARRY1((char)puVar22,*pbVar35);
                bVar5 = (char)puVar22 + *pbVar35;
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar5);
              }
              if (bVar36 == (char)bVar5 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar10;
                pbVar15 = (byte *)((uint)pcVar13 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar13 = *pcVar13 + bVar6;
              pbVar15 = (byte *)CONCAT31(uVar16,(bVar6 | (byte)*puVar22) + 0x7d);
              pcVar10 = pcVar10 + -1;
              *(byte *)puVar22 = (byte)*puVar22 + (char)pcVar10;
            }
            else {
              *(byte *)puVar22 = (byte)*puVar22 + cVar23;
              puVar22 = (uint *)CONCAT31(uVar20,cVar26 + *(char *)((int)pbVar35 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar35 = *pbVar35 + bVar5;
      bVar5 = bVar5 + 0x6f & *(byte *)CONCAT31(uVar16,bVar5 + 0x6f);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
      *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar5;
      pcVar10 = (char *)CONCAT31(uVar16,bVar5 - (char)*unaff_EDI);
code_r0x00403b2c:
      bVar5 = (char)pcVar10 - *pcVar10;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar5);
      *pbVar12 = *pbVar12 + bVar5;
      *(byte **)pbVar12 = (byte *)(*(int *)pbVar12 + (int)param_2);
      *pbVar12 = *pbVar12 + bVar5;
      bVar36 = CARRY1(*pbVar12,bVar5);
      *pbVar12 = *pbVar12 + bVar5;
      pbStack_38 = pbStack_14;
    }
  }
  *pbVar12 = *pbVar12;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(byte)puVar19 | (byte)*param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_34 = pbStack_34 + -*puVar19;
  do {
    bVar5 = (byte)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar5;
    pbVar35 = pbVar35 + -*(int *)(pbStack_34 + -0x1a);
    *(byte *)puVar19 = (byte)*puVar19 + bVar5;
    bVar5 = bVar5 | (byte)*puVar22;
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar5);
    *(byte *)puVar19 = (byte)*puVar19 | bVar5;
    bVar5 = (byte)*puVar19;
    pbStack_34 = (byte *)0x2700001;
    while ((POPCOUNT(bVar5) & 1U) == 0) {
      do {
        *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
        bVar5 = (byte)puVar19 | (byte)*puVar22;
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar5);
        if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
        uVar17 = CONCAT21((short)((uint)pcVar10 >> 0x10),(byte)((uint)pcVar10 >> 8) | bRamfe140212);
        while( true ) {
          pcVar10 = (char *)((uint)uVar17 << 8);
          bVar7 = (byte)puVar19;
          *(byte *)puVar19 = (byte)*puVar19 & bVar7;
          bVar6 = *pbVar32;
          bVar8 = (byte)uVar17;
          bVar24 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar8;
          bVar5 = *pbVar32;
          if (!CARRY1(bVar6,bVar8)) break;
          *(byte *)puVar19 = (byte)*puVar19 + bVar7;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar19 = (byte)*puVar19 + bVar7;
          bVar7 = bVar7 | (byte)*puVar22;
          puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar7);
          bVar36 = (POPCOUNT(bVar7) & 1U) == 0;
          while( true ) {
            cVar26 = (char)((uint)pbVar32 >> 8);
            uVar25 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar36) {
              *(byte *)puVar22 = (byte)*puVar22;
              pbVar32 = (byte *)CONCAT22(uVar25,CONCAT11(cVar26 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
            uVar18 = (undefined2)((uint)pcVar10 >> 0x10);
            bVar6 = (byte)((uint)pcVar10 >> 8) | (byte)*puVar19;
            uVar17 = CONCAT21(uVar18,bVar6);
            *puVar19 = *puVar19 & (uint)puVar19;
            *pbVar32 = *pbVar32 + bVar6;
            uVar16 = (undefined3)((uint)puVar19 >> 8);
            bVar5 = (char)puVar19 - bVar6;
            pcVar10 = (char *)CONCAT31(uVar16,bVar5);
            *pcVar10 = *pcVar10 + bVar5;
            bVar5 = bVar5 | (byte)*puVar22;
            puVar19 = (uint *)CONCAT31(uVar16,bVar5);
            if ((POPCOUNT(bVar5) & 1U) != 0) break;
            *(byte *)puVar19 = (byte)*puVar19 + bVar5;
            pcVar10 = (char *)((uint)CONCAT21(uVar18,bVar6 | (byte)*puVar19) << 8);
            *puVar19 = *puVar19 - (int)puVar19;
            *(byte *)puVar22 = (byte)*puVar22;
            pbVar32 = (byte *)CONCAT22(uVar25,CONCAT11(cVar26 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
              uVar25 = (undefined2)((uint)puVar22 >> 0x10);
              cVar26 = (char)puVar22;
              bVar5 = (byte)((uint)puVar22 >> 8) | pbVar32[-0x17];
              puVar22 = (uint *)CONCAT22(uVar25,CONCAT11(bVar5,cVar26));
              *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
                uVar16 = (undefined3)((uint)puVar19 >> 8);
                bVar24 = (byte)puVar19 | (byte)*puVar22;
                pcVar13 = (char *)CONCAT31(uVar16,bVar24);
                bVar6 = pbVar32[-0x16];
                *pcVar13 = *pcVar13 + bVar24;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar13 = *pcVar13 + bVar24;
                pbVar12 = (byte *)CONCAT31(uVar16,bVar24 | (byte)*puVar22);
                while( true ) {
                  *pbVar12 = *pbVar12 + (byte)pbVar12;
                  uVar16 = (undefined3)((uint)pbVar12 >> 8);
                  bVar6 = (byte)pbVar12 | (byte)*puVar22;
                  puVar19 = (uint *)CONCAT31(uVar16,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar19 = (byte)*puVar19 + bVar6;
                  bVar24 = pbVar35[-0x14];
                  *(byte *)puVar19 = (byte)*puVar19 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar22;
                  pcVar13 = (char *)CONCAT31(uVar16,bVar6);
                  bVar7 = pbVar32[-0x15];
                  *pcVar13 = *pcVar13 + bVar6;
                  pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),
                                                    (byte)((uint)pcVar10 >> 8) | bVar24 |
                                                    pbVar35[-0x13]) << 8);
                  *pcVar13 = *pcVar13 + bVar6;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar7 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar13 = *pcVar13 + bVar6;
                  pbVar12 = (byte *)CONCAT31(uVar16,bVar6 | (byte)*puVar22);
                  do {
                    do {
                      bVar24 = (byte)pbVar12;
                      *pbVar12 = *pbVar12 + bVar24;
                      cVar28 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar12,
                                                          cVar28));
                      *pbVar12 = bVar24;
                      *pbVar12 = *pbVar12 + bVar24;
                      cVar23 = (char)((uint)pcVar10 >> 8) + *pbVar12;
                      pcVar10 = (char *)((uint)CONCAT21((short)((uint)pcVar10 >> 0x10),cVar23) << 8)
                      ;
                      uVar16 = (undefined3)((uint)pbVar12 >> 8);
                      bVar24 = bVar24 & *pbVar12;
                      pbVar12 = (byte *)CONCAT31(uVar16,bVar24);
                      bVar6 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar23;
                    } while (SCARRY1(bVar6,cVar23) == (char)*pbVar32 < '\0');
                    *pbVar12 = *pbVar12 + bVar24;
                    bVar24 = bVar24 | (byte)*puVar22;
                    pbVar12 = (byte *)CONCAT31(uVar16,bVar24);
                    if ((POPCOUNT(bVar24) & 1U) == 0) {
                      *pbVar12 = *pbVar12 + bVar24;
                      *pbVar12 = *pbVar12 + bVar24;
                      cVar26 = cVar26 - bVar5;
                      pbVar32 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),cVar26);
                      *pbVar12 = *pbVar12 + bVar24;
                      bRam0312382b = bRam0312382b | *pbVar32;
                      while( true ) {
                        bVar6 = (byte)pbVar12;
                        *pbVar12 = *pbVar12 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar35 + 0x21b0000)[(int)pbVar12];
                        uVar16 = (undefined3)((uint)pbVar12 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar32 = *pbVar32 + bRam0312382b;
                        pbVar12 = (byte *)CONCAT31(uVar16,bVar6 | *pbStack_14);
                      }
                      *pbVar12 = *pbVar12 + bVar6;
                      bVar6 = bVar6 | *pbStack_14;
                      pcVar10 = (char *)CONCAT31(uVar16,bVar6);
                      out(*(undefined4 *)pbStack_14,(short)pbVar32);
                      *pcVar10 = *pcVar10 + bVar6;
                      uVar18 = CONCAT11(bVar5 | bRam6f0a002b,cVar26);
                      pcVar13 = (char *)CONCAT22(uVar25,uVar18);
                      *pcVar10 = *pcVar10 + bVar6;
                      *pcVar13 = *pcVar13 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_14 + 4),uVar18);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar28 + *pcVar10);
                  } while (SCARRY1(cVar28,*pcVar10) != (char)(cVar28 + *pcVar10) < '\0');
                }
                uVar30 = *puVar22;
                *(byte *)puVar22 = (byte)*puVar22;
              } while (SCARRY1((byte)uVar30,'\0') != (char)(byte)*puVar22 < '\0');
              *(byte *)puVar22 = (byte)*puVar22;
              *pcVar10 = *pcVar10 - (char)pbVar32;
              *(byte *)puVar19 = (byte)*puVar19 + bVar6;
              bVar6 = bVar6 | (byte)*puVar22;
              puVar19 = (uint *)CONCAT31(uVar16,bVar6);
              bVar36 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar36);
          }
        }
      } while (SCARRY1(bVar24,bVar8));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar10 >> 8);
    *pbVar35 = *pbVar35 - (char)pbVar32;
  } while( true );
}


