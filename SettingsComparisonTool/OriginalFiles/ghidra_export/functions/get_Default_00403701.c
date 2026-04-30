/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403701
 * Raw Name    : get_Default
 * Demangled   : get_Default
 * Prototype   : byte * get_Default(byte * param_1, uint * param_2)
 * Local Vars  : pbStack_38, pbStack_34, puStack_24, pbStack_14, pbStack_4, uVar1, uVar2, pcVar3, uVar4, iVar5, bVar6, bVar7, cVar8, bVar9, bVar10, in_EAX, iVar11, pcVar12, param_1, piVar13, param_2, pbVar14, pcVar15, pbVar16, pbVar17, uVar18, uVar19, uVar20, puVar21, extraout_ECX, uVar22, puVar23, puVar24, cVar25, bVar26, uVar27, cVar28, cVar29, uVar30, unaff_EBX, uVar31, pbVar32, cVar33, uVar34, unaff_EBP, unaff_ESI, pbVar35, unaff_EDI, in_ES, in_CS, in_SS, in_DS, bVar36, in_AF, in_ZF, in_SF, in_OF, uVar37, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall get_Default(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte *in_EAX;
  undefined3 uVar18;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  byte *pbVar14;
  uint3 uVar19;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined2 uVar20;
  undefined3 uVar22;
  uint *puVar21;
  uint *extraout_ECX;
  char cVar25;
  byte bVar26;
  undefined1 *puVar23;
  uint *puVar24;
  undefined2 uVar27;
  char cVar28;
  char cVar29;
  undefined1 uVar30;
  char cVar33;
  uint unaff_EBX;
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
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined8 uVar37;
  undefined2 unaff_retaddr;
  byte *pbStack_38;
  byte *pbStack_34;
  uint *puStack_24;
  byte *pbStack_14;
  byte *pbStack_4;
  
                    /* .NET CLR Managed Code */
  if (in_ZF || in_OF != in_SF) {
code_r0x00403750:
    pbVar35 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    bVar7 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar7;
    *param_1 = *param_1 + (char)unaff_EBX;
    bVar6 = *in_EAX;
    *in_EAX = *in_EAX + bVar7;
    *(int *)(unaff_EBX - 0x49) =
         (int)(pbVar35 + (uint)CARRY1(bVar6,bVar7) + *(int *)(unaff_EBX - 0x49));
  }
  else {
    cVar8 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar8;
    uVar18 = (undefined3)((uint)in_EAX >> 8);
    bVar6 = cVar8 + 0x2a;
    in_EAX = (byte *)CONCAT31(uVar18,bVar6);
    pbVar35 = unaff_ESI + 1;
    cVar25 = (char)((uint)param_2 >> 8) + *(char *)((int)param_2 + -0x7b);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar25,(char)param_2));
    in_EAX[0x6f] = in_EAX[0x6f] + cVar25;
    param_1 = (byte *)((uint)param_1 & 0xffffff00);
    do {
      *(byte *)param_2 = (byte)*param_2;
      if ((byte)*param_2 == 0) {
        unaff_EBX = unaff_EBX & 0xffffff00;
        in_ES = unaff_retaddr;
_ctor:
        param_1 = (byte *)((uint)CONCAT21((short)((uint)param_1 >> 0x10),
                                          (char)((uint)param_1 >> 8) + *in_EAX) << 8);
        unaff_EBX = unaff_EBX & 0xffffff00;
        *(byte *)param_2 = (byte)*param_2;
        uVar18 = (undefined3)((uint)in_EAX >> 8);
        bVar7 = (char)in_EAX - *in_EAX;
        pbVar14 = (byte *)CONCAT31(uVar18,bVar7);
        bVar6 = *pbVar14;
        *pbVar14 = *pbVar14 + bVar7;
        unaff_ESI = pbVar35 + (uint)CARRY1(bVar6,bVar7) + *(int *)pbVar14;
        in_EAX = (byte *)CONCAT31(uVar18,bVar7);
        goto code_r0x00403750;
      }
      *in_EAX = *in_EAX + bVar6;
      *param_2 = (uint)(unaff_EBP + *param_2);
      pbVar35 = pbVar35 + 1;
      bVar7 = (byte)param_2;
      bVar26 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x33);
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar26,bVar7));
      in_EAX[0x6f] = in_EAX[0x6f] + bVar26;
      *(byte *)param_2 = (byte)*param_2;
      in_ES = pbStack_4._0_2_;
      if ((byte)*param_2 != 0) {
        *in_EAX = *in_EAX + bVar6;
        uVar1 = *param_2;
        *param_2 = (uint)(unaff_EBP + *param_2);
        if (CARRY4(uVar1,(uint)unaff_EBP)) {
          *in_EAX = *in_EAX + bVar6;
          puVar21 = param_2 + 0x1d028000;
          uVar1 = *puVar21;
          *(byte *)puVar21 = (byte)*puVar21 - bVar26;
          *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)((byte)uVar1 < bVar26);
          *(byte *)param_2 = (byte)*param_2 + bVar6;
          *unaff_EBP = *unaff_EBP;
          in_EAX = (byte *)CONCAT31(uVar18,cVar8 + 'T');
          pbStack_4 = pbVar35;
          goto _ctor;
        }
        bVar36 = false;
        pbVar14 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),*in_EAX);
        pbStack_4 = pbVar35;
        goto code_r0x004037a7;
      }
      bVar26 = *in_EAX;
      *in_EAX = *in_EAX + bVar6;
      *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)CARRY1(bVar26,bVar6);
      bVar26 = *param_1;
      *param_1 = *param_1 + bVar7;
      unaff_retaddr = pbStack_4._0_2_;
    } while (!CARRY1(bVar26,bVar7));
  }
  *in_EAX = *in_EAX + (char)in_EAX;
  bVar36 = CARRY1((byte)((uint)param_1 >> 8),*in_EAX);
  pbStack_4 = (byte *)CONCAT22(pbStack_4._2_2_,in_SS);
  iVar11 = CONCAT31(0x1f0a00,bVar36 + 'o') + *(int *)(unaff_EBP + unaff_EBX) + (uint)(0x90 < bVar36)
           + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)param_2;
  pcVar12 = (char *)(CONCAT31((int3)((uint)iVar11 >> 8),(char)iVar11 + -0x66) | *unaff_EDI);
  bVar6 = *(byte *)((int)unaff_EDI + -0x46);
  pbVar14 = (byte *)CONCAT22(0xd0a,(ushort)bVar6 << 8);
  *pcVar12 = *pcVar12 + (char)pcVar12;
  puVar23 = (undefined1 *)
            CONCAT22((short)((uint)param_2 >> 0x10),
                     CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBP[unaff_EBX],(byte)param_2));
  *pbVar14 = *pbVar14 + (char)pcVar12;
  *unaff_EBP = *unaff_EBP - bVar6;
  *puVar23 = *puVar23;
  in_EAX = (byte *)(((uint)pcVar12 | 8) + 0x4490f9d8);
  bVar6 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar6;
  param_2 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(byte)param_2 | *pbVar35);
  *(uint *)(pbVar35 + (int)in_EAX) = *(uint *)(pbVar35 + (int)in_EAX) ^ (uint)pbVar14;
  *in_EAX = *in_EAX | bVar6;
  bVar36 = false;
  uRam2609fffc = in_ES;
  *in_EAX = *in_EAX | bVar6;
code_r0x004037a7:
  do {
    uVar27 = in_ES;
    uVar31 = unaff_EBX;
    uVar20 = SUB42(param_2,0);
    out(*(undefined4 *)pbVar35,uVar20);
    out(*(undefined4 *)(pbVar35 + 4),uVar20);
    puVar21 = (uint *)((int)unaff_EDI + (int)param_2);
    uVar1 = *puVar21;
    uVar2 = *puVar21;
    *puVar21 = (uint)(in_EAX + uVar2 + bVar36);
    cVar8 = (char)(pbStack_4 +
                  (uint)(CARRY4(uVar1,(uint)in_EAX) || CARRY4((uint)(in_EAX + uVar2),(uint)bVar36))
                  + *(int *)(pbVar14 + (int)param_2)) + '\t';
    pbVar35 = (byte *)CONCAT31((int3)((uint)(pbStack_4 +
                                            (uint)(CARRY4(uVar1,(uint)in_EAX) ||
                                                  CARRY4((uint)(in_EAX + uVar2),(uint)bVar36)) +
                                            *(int *)(pbVar14 + (int)param_2)) >> 8),cVar8);
    out(uRam260a0000,uVar20);
    *pbVar35 = *pbVar35 + cVar8;
    bVar7 = (byte)((uint)pbVar14 >> 8) | (byte)*param_2;
    bVar6 = *pbVar35;
    pbVar35 = pbVar35 + (uint)CARRY1(bVar7,*pbVar35) + *(int *)pbVar35;
    *(byte *)param_2 = (byte)*param_2 + 6;
    cVar25 = (char)uVar31 - cRam260a0004;
    in_ES = CONCAT11(bVar7 + bVar6 + *pbVar35,6);
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),in_ES);
    *pbVar35 = *pbVar35;
    uVar18 = (undefined3)((uint)pbVar35 >> 8);
    cVar8 = (char)pbVar35 - *pbVar35;
    piVar13 = (int *)CONCAT31(uVar18,cVar8);
    pbVar35 = (byte *)(*piVar13 + 0x260a0004);
    bVar6 = cVar8 + (char)*piVar13;
    in_EAX = (byte *)CONCAT31(uVar18,bVar6);
    *in_EAX = *in_EAX + bVar6;
    *in_EAX = *in_EAX + bVar6;
    *in_EAX = *in_EAX + bVar6;
    bVar36 = CARRY1((byte)*param_2,bVar6);
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    unaff_EBX = CONCAT31((int3)(uVar31 >> 8),cVar25);
    pbStack_4 = pbVar14;
  } while (!bVar36);
  *in_EAX = *in_EAX + bVar6;
  pbVar32 = (byte *)CONCAT22((short)(uVar31 >> 0x10),
                             CONCAT11((byte)(uVar31 >> 8) | bRam080a0056,cVar25));
  *in_EAX = *in_EAX + bVar6;
  bVar9 = bVar6 + 2;
  *pbVar32 = *pbVar32 - (char)param_2;
  *(char *)CONCAT31(uVar18,bVar9) = *(char *)CONCAT31(uVar18,bVar9) + bVar9;
  bVar7 = *pbVar35;
  uVar22 = (undefined3)((uint)pbVar14 >> 8);
  puVar21 = (uint *)(CONCAT31(uVar22,bVar7) | 6);
  bVar26 = 9 < (bVar6 + 0x74 & 0xf) | in_AF;
  bVar10 = bVar6 + 0x74 + bVar26 * '\x06';
  bVar10 = bVar10 + (0x90 < (bVar10 & 0xf0) | 0x8d < bVar9 | bVar26 * (0xf9 < bVar10)) * '`';
  pbVar14 = (byte *)CONCAT31(uVar18,bVar10);
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar10;
  if (!SCARRY1(bVar6,bVar10)) {
    *pbVar35 = *pbVar35 + bVar10;
    pbVar35 = pbVar35 + *(int *)((int)param_2 + 0x33);
    *pbVar14 = *pbVar14 | bVar10;
    *pbVar35 = *pbVar35 + bVar10;
    bVar6 = bVar10 + 0x72;
    *(byte *)CONCAT31(uVar18,bVar6) = *(byte *)CONCAT31(uVar18,bVar6) | bVar6;
    *pbVar35 = *pbVar35 + bVar6;
    puVar21 = (uint *)CONCAT31(uVar22,(bVar7 | 6) + *pbVar35);
    pcVar12 = (char *)CONCAT31(uVar18,bVar10 - 0x11);
    *pcVar12 = *pcVar12 + (bVar10 - 0x11);
    pbVar14 = (byte *)CONCAT31(uVar18,bVar10 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar14 = *pbVar14 + (bVar10 - 0xf);
  }
code_r0x00403825:
  pbVar17 = (byte *)0x80a0000;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  cVar8 = (char)pbVar14 + '\x7f';
  pcVar12 = (char *)CONCAT31(uVar18,cVar8);
  *pcVar12 = *pcVar12 + cVar8;
  iVar11 = CONCAT31(uVar18,(char)pbVar14 + -0x7f) + 0x547d;
  cVar25 = (char)iVar11;
  uVar18 = (undefined3)((uint)iVar11 >> 8);
  cVar8 = cVar25 + '*';
  pcVar12 = (char *)CONCAT31(uVar18,cVar8);
  pbVar14 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar35);
  cVar28 = (char)pbVar32 - *pbVar35;
  uVar20 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar33 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar28) + 0x57);
  *pcVar12 = *pcVar12 + cVar8;
  bVar6 = cVar25 + 0x54U & *pbVar14;
  iVar11 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
  pcVar12 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_DS);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar33,cVar28)) + 0x58);
  *pcVar12 = *pcVar12 + bVar6 + 0x2a;
  bVar6 = bVar6 + 0x54 & *pbVar14;
  iVar5 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
  pcVar12 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar33,cVar28)) + 0x55);
  *pcVar12 = *pcVar12 + bVar6 + 0x2a;
  pcVar12 = (char *)CONCAT31(uVar18,bVar6 + 0x57);
  puVar24 = (uint *)(pbVar14 + *(int *)pbStack_14);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar33,cVar28)) + 0x55);
  *pcVar12 = *pcVar12 + bVar6 + 0x57;
  cVar8 = bVar6 - 0x3a;
  pcVar12 = (char *)CONCAT31(uVar18,cVar8);
  *pcVar12 = *pcVar12 + cVar8;
  uVar1 = *puVar24;
  cVar29 = (char)puVar21;
  pbVar32 = (byte *)CONCAT22(uVar20,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar33,
                                                  cVar28)) + 0x59),cVar28));
  *pcVar12 = *pcVar12 + cVar8;
  bVar26 = bVar6 - 0x10 & (byte)*puVar24;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar5 + iVar11);
  *(char *)CONCAT31(uVar18,bVar26) = *(char *)CONCAT31(uVar18,bVar26) + bVar26;
  bVar26 = bVar26 + 0x2a;
  pbVar35 = (byte *)CONCAT31(uVar18,bVar26);
  cVar8 = *(char *)((int)unaff_EDI + 0x17);
  *pbVar35 = *pbVar35 + bVar26;
  uVar2 = *puVar24;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
  cVar25 = *(char *)((int)unaff_EDI + 0x1a);
  *pbVar35 = *pbVar35 + bVar26;
  puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                             CONCAT11((((byte)((uint)puVar21 >> 8) | (byte)uVar1) + cVar8 |
                                      (byte)uVar2) + cVar25 | (byte)*puVar24,cVar29));
  *pbVar32 = *pbVar32 + cVar28;
  *(byte *)((int)pbVar35 * 2) = *(byte *)((int)pbVar35 * 2) ^ bVar26;
  bVar6 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar26;
  bVar7 = *pbVar35;
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar24;
  bVar6 = ((bVar26 - bVar7) - CARRY1(bVar6,bVar26)) + (byte)*puVar24;
  pbVar35 = (byte *)CONCAT31(uVar18,bVar6);
  param_2 = puStack_24;
  if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x004038f6;
  *pbVar35 = *pbVar35 + bVar6;
  cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
  pbVar14 = (byte *)CONCAT31(uVar18,cVar8);
  uVar1 = *puVar24;
  *(byte *)puVar24 = (byte)*puVar24 + cVar29;
  param_2 = puVar24;
  if (SCARRY1((byte)uVar1,cVar29) == (char)(byte)*puVar24 < '\0') {
    cRam33100000 = cRam33100000 - cVar8;
    cVar8 = cVar8 + (byte)*puVar24;
    pbVar35 = (byte *)CONCAT31(uVar18,cVar8);
    goto code_r0x0040390c;
  }
  do {
    *pbVar14 = *pbVar14 + (char)pbVar14;
    while( true ) {
      uVar18 = (undefined3)((uint)pbVar14 >> 8);
      cVar8 = (char)pbVar14 + '\x02';
      pbVar35 = (byte *)CONCAT31(uVar18,cVar8);
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbStack_14);
      cVar8 = (char)pbVar35 + (byte)*param_2;
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar8);
code_r0x0040390c:
      cVar25 = (char)pbVar35;
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        *pbStack_14 = *pbStack_14 + cVar25;
        goto code_r0x0040395a;
      }
      *pbVar35 = *pbVar35 + cVar25;
      bVar6 = cVar25 + 2;
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar6);
code_r0x00403912:
      bVar36 = (POPCOUNT(bVar6) & 1U) == 0;
      if (!bVar36) goto code_r0x00403967;
      *pbVar35 = *pbVar35 + (char)pbVar35;
code_r0x00403916:
      bVar7 = (char)pbVar35 + 0x6f;
      pbVar14 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar35 >> 8),bVar7);
      bVar6 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar7;
      if (*pbVar14 == 0 || SCARRY1(bVar6,bVar7) != (char)*pbVar14 < '\0') goto code_r0x00403979;
      *pbVar14 = *pbVar14 + bVar7;
      pbVar14 = (byte *)CONCAT31((int3)(char)((uint)pbVar35 >> 8),(char)pbVar35 + -100);
      *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
           (byte *)((int)param_2 + (uint)(0xd2 < bVar7) + *(int *)(pbStack_14 + (int)unaff_EDI * 8))
      ;
code_r0x00403926:
      *(uint **)pbVar14 = puStack_24;
      bVar6 = *pbStack_14;
      bVar7 = (byte)pbVar14;
      *pbStack_14 = *pbStack_14 + bVar7;
      if (CARRY1(bVar6,bVar7)) {
        *pbVar14 = *pbVar14 + bVar7;
        uVar18 = (undefined3)((uint)pbVar14 >> 8);
        bVar7 = bVar7 | pbVar14[0x400005b];
        pbVar35 = (byte *)CONCAT31(uVar18,bVar7);
        pbVar14 = pbStack_14;
        if ((char)bVar7 < '\x01') goto code_r0x00403991;
        *pbVar35 = *pbVar35 + bVar7;
        cVar8 = bVar7 + 0x28;
        pbVar35 = (byte *)CONCAT31(uVar18,cVar8);
        *(byte **)pbVar35 = pbVar35 + (uint)(0xd7 < bVar7) + *(int *)pbVar35;
        bVar6 = *pbVar32;
        bVar7 = (byte)((uint)puVar21 >> 8);
        *pbVar32 = *pbVar32 + bVar7;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar35 = *pbVar35 + cVar8;
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11(bVar7 | *pbVar35,(char)puVar21));
          *pbStack_14 = *pbStack_14 + cVar8;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],
                                              (char)pbVar32));
          *pbVar35 = *pbVar35 + cVar8;
code_r0x00403950:
          uVar18 = (undefined3)((uint)pbVar35 >> 8);
          bVar7 = (char)pbVar35 + 0x6f;
          bVar6 = *(byte *)CONCAT31(uVar18,bVar7);
          *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
          pbVar35 = (byte *)CONCAT31(uVar18,(bVar7 & bVar6) + *pbStack_14);
          *(byte *)puVar21 = (byte)*puVar21 - (char)((uint)param_2 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar35 = *pbVar35 + cVar8;
    cVar8 = (char)pbVar14 + '.' + (byte)*param_2;
    pbVar35 = (byte *)CONCAT31(uVar18,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar14 = (byte *)((int)param_2 + (int)pbVar35);
      *pbVar14 = *pbVar14 + cVar8;
      bVar6 = *pbVar14;
      goto code_r0x00403912;
    }
    *pbVar35 = *pbVar35 + cVar8;
    bVar6 = cVar8 + 2;
    pbVar35 = (byte *)CONCAT31(uVar18,bVar6);
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403916;
    *pbVar35 = *pbVar35 + bVar6;
    cVar25 = cVar8 + 'q';
    piVar13 = (int *)CONCAT31(uVar18,cVar25);
    *piVar13 = (*piVar13 - (int)piVar13) - (uint)(0x90 < bVar6);
    bVar6 = *pbVar32;
    bVar7 = (byte)((uint)puVar21 >> 8);
    *pbVar32 = *pbVar32 + bVar7;
    if (!CARRY1(bVar6,bVar7)) {
      out(*(undefined4 *)pbStack_14,(short)param_2);
      bVar6 = (cVar25 - (char)*piVar13) - CARRY1(bVar6,bVar7);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
      cVar8 = bVar6 - *(byte *)CONCAT31(uVar18,bVar6);
      pbVar35 = pbStack_14 +
                ((4 - *(int *)CONCAT31(uVar18,cVar8)) -
                (uint)(bVar6 < *(byte *)CONCAT31(uVar18,bVar6)));
      pbVar14 = (byte *)CONCAT31(uVar18,cVar8);
      pbStack_14 = (byte *)0;
      goto code_r0x00403825;
    }
    *(char *)piVar13 = (char)*piVar13 + cVar25;
    uVar27 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar6 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar13 = (char)*piVar13 + cVar25;
    pcVar12 = (char *)CONCAT31(uVar18,cVar8 + 's');
    pbVar32 = (byte *)CONCAT22(uVar27,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar27,CONCAT11(bVar6,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar12 = *pcVar12 + cVar8 + 's';
    bVar6 = cVar8 - 0xf;
    *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
    bVar7 = cVar8 + 0x1e;
    pbVar14 = (byte *)CONCAT31(uVar18,bVar7);
    *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
         (byte *)((int)puVar21 + (uint)(0xd2 < bVar6) + *(int *)(pbStack_14 + (int)unaff_EDI * 8));
    uVar27 = *(undefined2 *)pbVar14;
    bVar6 = *pbStack_14;
    *pbStack_14 = *pbStack_14 + bVar7;
    param_2 = puVar21;
    if (CARRY1(bVar6,bVar7)) {
      *pbVar14 = *pbVar14 + bVar7;
      pbVar35 = (byte *)CONCAT31(uVar18,bVar7 | pbVar14[0x400005a]);
      if ('\0' < (char)(bVar7 | pbVar14[0x400005a])) {
code_r0x004038f6:
        bVar6 = (byte)pbVar35;
        *pbVar35 = *pbVar35 + bVar6;
        uVar18 = (undefined3)((uint)pbVar35 >> 8);
        cVar8 = ((bVar6 + 0x28) - *(char *)CONCAT31(uVar18,bVar6 + 0x28)) - (0xd7 < bVar6);
        pbVar35 = (byte *)CONCAT31(uVar18,cVar8);
        bVar6 = *pbVar32;
        bVar7 = (byte)((uint)puVar21 >> 8);
        *pbVar32 = *pbVar32 + bVar7;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar35 = *pbVar35 + cVar8;
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11(bVar7 | *pbVar35,(char)puVar21));
          *pbStack_14 = *pbStack_14 + cVar8;
          goto code_r0x00403908;
        }
        pbVar14 = pbVar35 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar35 = *pbVar35 + (char)pbVar35;
  *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar21;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbStack_14);
  cVar8 = (char)pbVar35 + '\x02';
  pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar8);
  bVar36 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar36) goto code_r0x004039be;
  *pbVar35 = *pbVar35 + (char)pbVar35;
  uVar18 = (undefined3)((uint)pbVar35 >> 8);
  bVar6 = (char)pbVar35 + 0x6f;
  bVar6 = bVar6 & *(byte *)CONCAT31(uVar18,bVar6);
  pbVar14 = (byte *)CONCAT31(uVar18,bVar6);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar6;
code_r0x00403979:
  bVar6 = (char)pbVar14 - (char)*unaff_EDI;
  bVar36 = bVar6 < (byte)*puVar21;
  pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar6 - (byte)*puVar21);
  do {
    cVar8 = (char)pbVar35;
    *pbVar35 = *pbVar35 + cVar8 + bVar36;
    *pbVar35 = *pbVar35 + cVar8;
    *(byte *)puVar21 = (byte)*puVar21 + (char)param_2;
    *(byte *)((int)puVar21 + 0x101c00aa) = *(byte *)((int)puVar21 + 0x101c00aa) + (char)pbVar32;
    *pbVar35 = *pbVar35 + cVar8;
    *(byte **)pbStack_14 = pbVar32 + *(int *)pbStack_14;
    bVar6 = (byte)((uint)puVar21 >> 8);
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11(bVar6 + *pbVar35,(char)puVar21));
    pbVar35 = pbVar35 + (uint)CARRY1(bVar6,*pbVar35) + *(int *)pbVar35;
    pbVar14 = pbStack_14;
code_r0x00403991:
    cVar8 = (char)puVar21;
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    cVar25 = (char)pbVar32 - pbVar14[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar25);
    pbStack_14 = pbVar14;
    if ((POPCOUNT(cVar25) & 1U) != 0) goto code_r0x0040395a;
    *pbVar35 = *pbVar35 + (byte)pbVar35;
    uVar19 = (uint3)((uint)pbVar35 >> 8);
    bVar6 = (byte)pbVar35 | *pbVar32;
    piVar13 = (int *)CONCAT31(uVar19,bVar6);
    bVar7 = (byte)((uint)puVar21 >> 8);
    bVar26 = (byte)param_2;
    if (bVar6 == 0) {
      *(char *)piVar13 = (char)*piVar13;
      pbStack_14 = pbVar14 + 4;
      out(*(undefined4 *)pbVar14,(short)param_2);
      pbVar35 = (byte *)((uint)uVar19 << 8);
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar26 - *pbVar32);
      *pbVar32 = *pbVar32;
      *(byte *)param_2 = (byte)*param_2 + bVar7;
      *pbVar35 = *pbVar35;
      *pbVar32 = *pbVar32 + cVar25;
      *pbVar35 = *pbVar35;
      *(byte **)(pbVar32 + -0x3d) = pbStack_14 + *(int *)(pbVar32 + -0x3d);
      break;
    }
    pbVar17 = pbVar17 + -unaff_EDI[9];
    *(byte *)piVar13 = (char)*piVar13 + bVar6;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar7 | (byte)*param_2,cVar8)
                              );
    pbStack_14 = pbVar14 + *piVar13;
    pcVar12 = (char *)((int)piVar13 + *piVar13);
    bVar7 = (char)pcVar12 - *pcVar12;
    pbVar35 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7);
    bVar6 = *pbVar35;
    *pbVar35 = *pbVar35 + bVar7;
    pbVar35 = pbVar35 + (-(uint)CARRY1(bVar6,bVar7) - *(int *)pbVar35);
    bVar36 = CARRY1((byte)*puVar21,bVar26);
    *(byte *)puVar21 = (byte)*puVar21 + bVar26;
  } while (!bVar36);
  *pbVar35 = *pbVar35 + (char)pbVar35;
  puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(byte)puVar21 | (byte)*param_2);
code_r0x004039be:
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar17 + -0x3c));
  *pbVar35 = *pbVar35 + (byte)pbVar35;
  uVar18 = (undefined3)((uint)pbVar35 >> 8);
  bVar6 = (byte)pbVar35 | (byte)*param_2;
  pcVar12 = (char *)CONCAT31(uVar18,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) goto code_r0x004039c8;
  cVar8 = *pcVar12;
  *pcVar12 = *pcVar12 + bVar6;
  cVar25 = *pcVar12;
  if (!SCARRY1(cVar8,bVar6)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar12 = *pcVar12 + bVar6;
  *pbStack_14 = *pbStack_14 + 1;
  uVar4 = *(undefined6 *)CONCAT31(uVar18,bVar6 + 6);
  pbVar14 = (byte *)uVar4;
  uVar1 = *param_2;
  bVar6 = (byte)puVar21;
  *(byte *)param_2 = (byte)*param_2 + bVar6;
  if (!CARRY1((byte)uVar1,bVar6)) goto code_r0x00403979;
  *pbVar14 = *pbVar14 + (char)uVar4;
  bVar26 = (byte)((uint)puVar21 >> 8) | *pbVar14;
  uVar20 = CONCAT11(bVar26,bVar6);
  pbVar14 = pbVar14 + -*(int *)pbVar14;
  bVar7 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar26;
  if (CARRY1(bVar7,bVar26)) {
    cVar8 = (char)pbVar14;
    *pbVar14 = *pbVar14 + cVar8;
    uVar1 = *param_2;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - pbVar32[-0x3a],(char)param_2));
    *pbVar14 = *pbVar14 + cVar8;
    uVar34 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar7 = (byte)((uint)pbVar32 >> 8) | *(byte *)((int)param_2 + 0x32);
    pcVar12 = (char *)CONCAT22(uVar34,CONCAT11(bVar7,(char)pbVar32));
    pbStack_34 = (byte *)CONCAT22(pbStack_34._2_2_,in_CS);
    cVar25 = cVar8 + *pcVar12 + '-';
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar25);
    *pbVar14 = *pbVar14;
    uVar2 = *param_2;
    cVar29 = (char)pbVar32 - *pbStack_14;
    cVar8 = *(char *)((int)unaff_EDI + 0x17);
    *pbVar14 = *pbVar14 + cVar25;
    uVar20 = CONCAT11((bVar26 | (byte)uVar1) + cVar8 | (byte)*param_2,bVar6 - (byte)uVar2);
    pbVar32 = (byte *)CONCAT22(uVar34,CONCAT11(bVar7 + *(char *)(CONCAT31((int3)((uint)pcVar12 >> 8)
                                                                          ,cVar29) + 0x4e),cVar29));
    *pbVar14 = *pbVar14 + cVar25;
  }
  puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),uVar20);
  bVar6 = (byte)pbVar14;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  pcVar12 = (char *)CONCAT31(uVar18,bVar6 + 0x28);
  *pcVar12 = (*pcVar12 - (bVar6 + 0x28)) - (0xd7 < bVar6);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar20;
  bVar7 = bVar6 + 0x1b;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                             CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32));
  *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
  pcVar15 = (char *)CONCAT31(uVar18,bVar6 + 0x43);
  *pcVar15 = (*pcVar15 - (bVar6 + 0x43)) - (0xd7 < bVar7);
  *(byte *)param_2 = (byte)*param_2 + (char)uVar20;
  pcVar12 = pcVar15 + -0x6b721c;
  pcVar15 = pcVar15 + -0x6b721a;
  *pcVar15 = *pcVar15 + (char)((uint)param_2 >> 8);
  cVar25 = *pcVar15;
code_r0x00403a22:
  if ((POPCOUNT(cVar25) & 1U) == 0) {
code_r0x00403a24:
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    uVar18 = (undefined3)((uint)pcVar12 >> 8);
    bVar6 = cVar8 + 2;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
      piVar13 = (int *)CONCAT31(uVar18,cVar8 + '*');
      *piVar13 = (*piVar13 - (int)piVar13) - (uint)(0xd7 < bVar6);
      uVar1 = *param_2;
      bVar26 = (byte)puVar21;
      *(byte *)param_2 = (byte)*param_2 + bVar26;
      out(*(undefined4 *)pbStack_14,(short)param_2);
      bVar7 = ((cVar8 + '*') - (char)*piVar13) - CARRY1((byte)uVar1,bVar26);
      pbVar35 = (byte *)CONCAT31(uVar18,bVar7);
      *(byte *)param_2 = (byte)*param_2 + bVar26;
      uVar20 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar30 = SUB41(pbVar32,0);
      cVar8 = (char)((uint)pbVar32 >> 8) - pbStack_14[0x1f];
      pbVar32 = (byte *)CONCAT22(uVar20,CONCAT11(cVar8,uVar30));
      *pbVar35 = *pbVar35 + bVar7;
      uVar1 = *param_2;
      bVar6 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar7;
      pbStack_14 = pbStack_14 + ((4 - *(int *)pbVar35) - (uint)CARRY1(bVar6,bVar7));
      pbVar35 = (byte *)CONCAT31(uVar18,bVar7);
      puVar21 = (uint *)(CONCAT22((short)((uint)puVar21 >> 0x10),
                                  CONCAT11((byte)((uint)puVar21 >> 8) | (byte)uVar1,bVar26)) + -1);
      bVar6 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar7;
      bVar6 = (bVar7 - *pbVar35) - CARRY1(bVar6,bVar7);
      *(byte *)puVar21 = *(byte *)puVar21 + (char)param_2;
      bVar36 = CARRY1(bVar6,(byte)*param_2);
      bVar6 = bVar6 + (byte)*param_2;
      pbVar35 = (byte *)CONCAT31(uVar18,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar35 = *pbVar35 + bVar6;
        cVar25 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pbVar14 = (byte *)CONCAT31(uVar18,cVar25);
        uVar1 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
        if (SCARRY1((byte)uVar1,(char)puVar21) == (char)(byte)*param_2 < '\0')
        goto code_r0x00403aaf;
        *pbVar14 = *pbVar14 + cVar25;
        pcVar12 = (char *)CONCAT31(uVar18,cVar25 + '\x02');
        bVar7 = cVar8 + pbVar32[0x52];
        pbVar32 = (byte *)CONCAT22(uVar20,CONCAT11(bVar7,uVar30));
        *pcVar12 = *pcVar12 + cVar25 + '\x02';
        bVar6 = cVar25 + 4;
        pbVar14 = (byte *)CONCAT31(uVar18,bVar6);
        if ((POPCOUNT(bVar6) & 1U) == 0) {
          *pbVar14 = *pbVar14 + bVar6;
          cVar8 = (cVar25 + 's') - (0x90 < bVar6);
          pcVar12 = (char *)CONCAT31(uVar18,cVar8);
          bVar6 = (byte)((uint)puVar21 >> 8);
          bVar36 = CARRY1(*pbVar32,bVar6);
          *pbVar32 = *pbVar32 + bVar6;
          pbVar35 = pbStack_14;
          if (bVar36) {
            *pcVar12 = *pcVar12 + cVar8;
            pbVar32 = (byte *)CONCAT22(uVar20,CONCAT11(bVar7 | pbVar17[0x5c],uVar30));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar14);
        pbVar32 = (byte *)CONCAT22(uVar20,CONCAT11(bVar7 + pbVar32[0x52],uVar30));
code_r0x00403abf:
        *pbVar14 = *pbVar14 + (char)pbVar14;
        cVar8 = (char)pbVar14 + '\x02';
        pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar8);
        bVar36 = (POPCOUNT(cVar8) & 1U) == 0;
        pbStack_34 = pbVar17;
        if (!bVar36) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar36) {
          *pbVar35 = *pbVar35 + (byte)pbVar35;
          bVar6 = (byte)pbVar35 | pbVar35[0x400005e];
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),bVar6);
          pbStack_34 = pbVar17;
          if ((char)bVar6 < '\x01') goto code_r0x00403b0b;
          *pbVar14 = *pbVar14 + bVar6;
code_r0x00403aaf:
          cVar8 = (char)pbVar14 + '(';
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar8);
          *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
          bVar6 = *pbVar32;
          bVar7 = (byte)((uint)puVar21 >> 8);
          *pbVar32 = *pbVar32 + bVar7;
          pbVar16 = pbVar17;
          if (!CARRY1(bVar6,bVar7)) goto code_r0x00403ad8;
          *pbVar14 = *pbVar14 + cVar8;
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11(bVar7 | *pbVar32,(char)puVar21));
          if ((POPCOUNT((byte)*param_2 - cVar8) & 1U) != 0) {
            *pbStack_14 = *pbStack_14 + cVar8;
            pbStack_34 = pbVar17;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],(char)pbVar32
                                           ));
      }
      bVar6 = (byte)pbVar35;
      *pbVar35 = *pbVar35 + bVar6;
      cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar8);
      bVar6 = *pbVar32;
      cVar25 = (char)((uint)puVar21 >> 8);
      *pbVar32 = *pbVar32 + cVar25;
      pbStack_34 = pbVar17;
      if (*pbVar32 == 0 || SCARRY1(bVar6,cVar25) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
      *pcVar12 = *pcVar12 + cVar8;
    }
    else {
      cVar8 = bVar6 + (byte)*param_2;
      pcVar12 = (char *)CONCAT31(uVar18,cVar8);
      pbVar35 = pbStack_14;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_14 + (int)unaff_EDI * 8) =
         (byte *)((int)param_2 +
                 (uint)(0xd2 < (byte)pcVar12) + *(int *)(pbStack_14 + (int)unaff_EDI * 8));
    pbVar14 = pbVar17;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)pcVar12 + 0x2d);
code_r0x00403ad8:
    pbStack_34 = pbVar16;
    bVar6 = *pbVar14;
    bVar7 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar7;
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,uVar27);
    if (!CARRY1(bVar6,bVar7)) goto code_r0x00403afc;
    *pbVar14 = *pbVar14 + bVar7;
    bVar7 = bVar7 | pbVar14[0x400005d];
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar7);
    pbVar35 = pbStack_14;
    if ((char)bVar7 < '\x01') {
      *pbVar14 = *pbVar14 + bVar7;
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((byte)((uint)puVar21 >> 8) | (byte)*param_2,(char)puVar21)
                                );
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],(char)pbVar32)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar14 = *pbVar14 + (char)pbVar14;
    cVar8 = (char)pbVar14 + '(';
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar8);
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    bVar6 = *pbVar32;
    bVar7 = (byte)((uint)puVar21 >> 8);
    *pbVar32 = *pbVar32 + bVar7;
    pbStack_14 = pbVar35;
    if (!CARRY1(bVar6,bVar7)) goto code_r0x00403b0b;
    *pbVar14 = *pbVar14 + cVar8;
  }
  else {
    uVar1 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
    if (SCARRY1((byte)uVar1,(char)puVar21) == (char)(byte)*param_2 < '\0') {
      pbVar14 = pbVar17;
      pbVar16 = (byte *)(pcVar12 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '\x02');
    pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                               CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32));
    pbVar35 = pbStack_14;
code_r0x00403a7d:
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    uVar18 = (undefined3)((uint)pcVar12 >> 8);
    cVar25 = cVar8 + '-';
    pbVar16 = (byte *)CONCAT31(uVar18,cVar25);
    pbVar14 = pbVar17;
    pbStack_14 = pbVar35;
    if ((POPCOUNT(cVar25 - (byte)*param_2) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar16 = *pbVar16 + cVar25;
    bVar6 = cVar8 + 0x2f;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      uVar1 = *param_2;
      *(byte *)param_2 = (byte)*param_2 + (byte)puVar21;
      *pbVar17 = *pbVar17 - CARRY1((byte)uVar1,(byte)puVar21);
      pbVar14 = (byte *)CONCAT31(uVar18,cVar8 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
    bVar36 = 0x90 < bVar6;
    pcVar12 = (char *)CONCAT31(uVar18,cVar8 + -0x62);
code_r0x00403a8f:
    uVar18 = (undefined3)((uint)pcVar12 >> 8);
    bVar7 = (char)pcVar12 - bVar36;
    pbVar14 = (byte *)CONCAT31(uVar18,bVar7);
    bVar6 = *pbVar32;
    cVar8 = (char)((uint)puVar21 >> 8);
    *pbVar32 = *pbVar32 + cVar8;
    pbStack_34 = pbVar17;
    pbStack_14 = pbVar35;
    if (*pbVar32 != 0 && SCARRY1(bVar6,cVar8) == (char)*pbVar32 < '\0') {
      *pbVar14 = *pbVar14 + bVar7;
      pbStack_14 = (byte *)CONCAT31(uVar18,bVar7 + 0x2d);
      *(byte **)(pbVar35 + (int)unaff_EDI * 8) =
           (byte *)((int)param_2 + (uint)(0xd2 < bVar7) + *(int *)(pbVar35 + (int)unaff_EDI * 8));
      bVar36 = CARRY1(*pbVar35,(byte)pbVar35);
      *pbVar35 = *pbVar35 + (byte)pbVar35;
      goto code_r0x00403aa1;
    }
  }
  puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                             CONCAT11((byte)((uint)puVar21 >> 8) | *pbVar14,(char)puVar21));
  *pbStack_14 = *pbStack_14 + (char)pbVar14;
code_r0x00403afc:
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                             CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32));
  *pbVar14 = *pbVar14 + (char)pbVar14;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  bVar7 = (char)pbVar14 + 0x6f;
  bVar6 = *(byte *)CONCAT31(uVar18,bVar7);
  *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
  pbVar14 = (byte *)CONCAT31(uVar18,(bVar7 & bVar6) + *pbStack_14);
  *(byte *)puVar21 = (byte)*puVar21 - (char)((uint)param_2 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar14 = *pbVar14 + (byte)pbVar14;
    bVar6 = (byte)pbVar14 | *pbVar32;
    piVar13 = (int *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar6);
    if (bVar6 != 0) {
      pbStack_34 = pbStack_34 + -unaff_EDI[9];
      *(byte *)piVar13 = (char)*piVar13 + bVar6;
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((byte)((uint)puVar21 >> 8) | (byte)*param_2,(char)puVar21)
                                );
      pbStack_38 = pbStack_38 + *piVar13;
      pcVar12 = (char *)((int)piVar13 + *piVar13);
      uVar18 = (undefined3)((uint)pcVar12 >> 8);
      bVar7 = (char)pcVar12 - *pcVar12;
      pbVar35 = (byte *)CONCAT31(uVar18,bVar7);
      bVar6 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar7;
      piVar13 = (int *)CONCAT31(uVar18,bVar7 - CARRY1(bVar6,bVar7));
    }
    *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
    pbStack_14 = pbStack_38 + 4;
    out(*(undefined4 *)pbStack_38,(short)param_2);
    pbVar14 = (byte *)(((uint)piVar13 >> 8) * 0x100);
    *(byte *)param_2 = (byte)*param_2 + (byte)puVar21;
    bVar6 = (char)param_2 - *pbVar32;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar6);
    *pbVar32 = *pbVar32;
    *(byte *)param_2 = (byte)*param_2 + (char)((uint)puVar21 >> 8);
    *pbVar14 = *pbVar14;
    pcVar12 = (char *)(((uint)piVar13 >> 8) * 0x200);
    *pcVar12 = *pcVar12 + (char)pbVar32;
    bVar36 = CARRY1((byte)*puVar21,bVar6);
    *(byte *)puVar21 = (byte)*puVar21 + bVar6;
    pbStack_38 = pbStack_14;
    if (bVar36) break;
    while( true ) {
      *(byte **)pbVar14 = pbVar14 + (uint)bVar36 + *(int *)pbVar14;
      unaff_EDI = unaff_EDI + 1;
      pbVar14[(int)param_2] = pbVar14[(int)param_2] + (char)pbVar32;
      *pbVar14 = *pbVar14 + (char)pbVar14;
      *(byte **)pbStack_38 = pbVar32 + *(int *)pbStack_38;
      bVar6 = (byte)((uint)puVar21 >> 8);
      cVar8 = (char)puVar21;
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar6 + *pbVar14,cVar8));
      pbVar14 = pbVar14 + (uint)CARRY1(bVar6,*pbVar14) + *(int *)pbVar14;
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      cVar8 = (char)pbVar32 - pbStack_38[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar8);
      pbStack_14 = pbStack_38;
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar14 = *pbVar14 + (char)pbVar14;
      *(byte *)(param_2 + 0x5818000) = (byte)param_2[0x5818000] - (char)puVar21;
      pbVar32 = (byte *)((uint)pbVar32 | (uint)pbStack_14);
      cVar8 = (char)pbVar14 + '\x02';
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar8);
      bVar36 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
      bVar6 = (byte)pbVar35;
      uVar18 = (undefined3)((uint)pbVar35 >> 8);
      if (!bVar36) {
        *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
        pbVar14 = (byte *)CONCAT31(uVar18,bVar6 | *pbStack_14);
code_r0x00403b73:
        pbVar35 = (byte *)((int)unaff_EDI + *(int *)(pbStack_34 + -0x37));
        *pbVar14 = *pbVar14 + (byte)pbVar14;
        uVar18 = (undefined3)((uint)pbVar14 >> 8);
        bVar6 = (byte)pbVar14 | (byte)*param_2;
        pcVar12 = (char *)CONCAT31(uVar18,bVar6);
        uVar37 = CONCAT44(param_2,pcVar12);
        if ((POPCOUNT(bVar6) & 1U) == 0) {
          *pcVar12 = *pcVar12 + bVar6;
          *pbStack_14 = *pbStack_14 + 1;
          return (byte *)CONCAT31(uVar18,bVar6 + 6);
        }
        bVar6 = *pbStack_14;
        *pbStack_14 = *pbStack_14 + 1;
        pcVar3 = (code *)swi(4);
        if (SCARRY1(bVar6,'\x01')) {
          uVar37 = (*pcVar3)();
          puVar21 = extraout_ECX;
        }
        pbVar14 = (byte *)uVar37;
        *pbVar14 = *pbVar14 + (char)uVar37;
        cVar25 = (char)((ulonglong)uVar37 >> 0x20);
        puVar24 = (uint *)CONCAT22((short)((ulonglong)uVar37 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar37 >> 0x28) | pbVar32[0x2f],cVar25
                                           ));
        *pbVar14 = *pbVar14 + (char)uVar37;
        cVar8 = (char)puVar21;
        bVar26 = (byte)((uint)puVar21 >> 8) | *pbVar14;
        pbVar14 = pbVar14 + *(int *)pbVar14;
        bVar6 = *pbVar32;
        *pbVar32 = *pbVar32 + bVar26;
        bVar7 = (byte)pbVar14;
        if (CARRY1(bVar6,bVar26)) {
          *pbVar14 = *pbVar14 + bVar7;
          bVar26 = bVar26 | (byte)*puVar24;
          *pbVar32 = *pbVar32 - cVar25;
          *pbVar14 = *pbVar14 + bVar7;
          uVar18 = (undefined3)((uint)pbVar14 >> 8);
          bVar7 = bVar7 | (byte)*puVar24;
          piVar13 = (int *)CONCAT31(uVar18,bVar7);
          pbStack_34 = pbStack_34 + *piVar13;
          *(byte *)piVar13 = (char)*piVar13 + bVar7;
          cVar25 = (char)pbVar32 - *pbStack_14;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((char)((uint)pbVar32 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar25)
                                                       + 0x5f),cVar25));
          *(byte *)piVar13 = (char)*piVar13 + bVar7;
          bVar6 = bVar7 + 0x2a & (byte)*puVar24;
          pbVar35 = pbVar35 + *(int *)(pbStack_34 + 0x5f);
          *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
          pbVar14 = (byte *)CONCAT31(uVar18,bVar6 + 0x2a);
          *(byte *)puVar24 = (byte)*puVar24 + 0x28;
          *pbVar14 = *pbVar14 + bVar6 + 0x2a;
        }
        else {
          *pbStack_14 = *pbStack_14 + bVar7;
        }
        pcVar12 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar26,cVar8));
        *pbStack_34 = *pbStack_34 - bVar26;
        *(byte *)puVar24 = (byte)*puVar24 + cVar8;
        bVar6 = (byte)pbVar14 - 0xb;
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar6);
        if (10 < (byte)pbVar14) {
          *pbVar17 = *pbVar17 | bVar6;
          return pbVar17;
        }
        *(byte *)puVar24 = (byte)*puVar24 + cVar8;
        do {
          bVar6 = pbVar32[-0x23];
          bVar26 = (byte)pbVar17;
          *pbVar17 = *pbVar17 + bVar26;
          bVar7 = pbStack_34[-0x22];
          *pbVar17 = *pbVar17 + bVar26;
          uVar18 = (undefined3)((uint)pbVar17 >> 8);
          bVar26 = bVar26 | *pbStack_14;
          pbVar14 = (byte *)CONCAT31(uVar18,bVar26);
          cVar25 = (char)pbVar32 - *pbStack_14;
          pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar32 >> 8) + bVar6 |
                                                              bVar7,(char)pbVar32)) >> 8),cVar25);
          cVar8 = (char)pcVar12;
          pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                     CONCAT11((char)((uint)pcVar12 >> 8) + *pbVar14,cVar8));
          *(byte *)puVar24 = (byte)*puVar24 + cVar8;
          bVar7 = bVar26 - *pbVar14;
          pbVar17 = (byte *)CONCAT31(uVar18,bVar7);
          pbStack_14 = pbStack_14 + (-(uint)(bVar26 < *pbVar14) - *(int *)pbVar17);
          puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 * '\x02');
          *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
          *pbVar35 = *pbVar35 + cVar25;
          bVar6 = *pbVar17;
          *pbVar17 = *pbVar17 + bVar7;
          *puVar24 = (uint)(pbVar17 + (uint)CARRY1(bVar6,bVar7) + *puVar24);
        } while ((POPCOUNT(*puVar24 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar17 = *pbVar17 + (char)pbVar17;
        pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)pcVar12 | pbVar17[(int)pcVar12])
        ;
        bVar36 = false;
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffff00);
        do {
          pbVar35 = pbVar35 + (-(uint)bVar36 - *(int *)pbVar32);
          pcVar15 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),*pcVar12);
          *pcVar15 = *pcVar15 + *pcVar12;
          pbVar17 = (byte *)CONCAT31((int3)((uint)(pcVar15 +
                                                  (pbStack_14[0x2000001] <
                                                  (byte)((uint)pcVar12 >> 8)) + 0xda7d) >> 8),
                                     ((byte)(pcVar15 +
                                            (pbStack_14[0x2000001] < (byte)((uint)pcVar12 >> 8)) +
                                            0xda7d) | (byte)*puVar24) + 0x7d);
          pcVar12 = pcVar12 + -1;
          *(byte *)puVar24 = (byte)*puVar24 + (char)pcVar12;
          while( true ) {
            uVar22 = (undefined3)((uint)puVar24 >> 8);
            cVar8 = (char)puVar24 + *(char *)((int)pbVar35 * 2 + 0xa0000e1);
            puVar24 = (uint *)CONCAT31(uVar22,cVar8);
            bVar36 = CARRY1((byte)pbVar17,(byte)*puVar24);
            uVar18 = (undefined3)((uint)pbVar17 >> 8);
            bVar6 = (byte)pbVar17 + (byte)*puVar24;
            pbVar17 = (byte *)CONCAT31(uVar18,bVar6);
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *pbVar17 = *pbVar17 + bVar6;
            cVar25 = (char)pcVar12;
            pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar12 >> 8) | pbVar35[-0x65],cVar25))
            ;
            bVar7 = *pbVar17;
            *pbVar17 = *pbVar17 + bVar6;
            if (CARRY1(bVar7,bVar6)) {
              *pbVar17 = *pbVar17 + bVar6;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | pbStack_34[-0x1d],
                                                  (char)pbVar32));
              *pbVar17 = *pbVar17 + bVar6;
              bVar36 = false;
              bVar6 = bVar6 | (byte)*puVar24;
              pcVar15 = (char *)CONCAT31(uVar18,bVar6);
              while( true ) {
                bVar7 = (byte)pcVar15;
                uVar18 = (undefined3)((uint)pcVar15 >> 8);
                if (bVar36 == (char)bVar6 < '\0') break;
                *pcVar15 = *pcVar15 + bVar7;
                bVar7 = bVar7 | (byte)*puVar24;
                puVar21 = (uint *)CONCAT31(uVar18,bVar7);
                *pbVar35 = *pbVar35 << 1 | (char)*pbVar35 < '\0';
                uVar1 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                pbStack_34 = pbStack_34 + (-(uint)CARRY1((byte)uVar1,bVar7) - *puVar21);
                *puVar21 = *puVar21 << 1 | (uint)((int)*puVar21 < 0);
                while( true ) {
                  uVar1 = *puVar24;
                  *(byte *)puVar24 = (byte)*puVar24 + (byte)pcVar12;
                  cVar8 = (char)puVar21 + 'o' + CARRY1((byte)uVar1,(byte)pcVar12);
                  pcVar15 = (char *)CONCAT31((int3)((uint)puVar21 >> 8),cVar8);
                  pcVar12 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar8) & 1U) != 0) break;
                  *pcVar15 = *pcVar15 + cVar8;
                  bVar6 = bRamfe140212;
                  pcVar12 = (char *)0x0;
                  uVar18 = (undefined3)((uint)(pcVar15 + -0x732b0000) >> 8);
                  bVar7 = in(0);
                  puVar21 = (uint *)CONCAT31(uVar18,bVar7);
                  uVar1 = *puVar24;
                  *(byte *)puVar24 = (byte)*puVar24;
                  if (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar24 < '\0') {
                    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                    bVar7 = bVar7 | (byte)*puVar24;
                    puVar21 = (uint *)CONCAT31(uVar18,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                      pcVar12 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar6 | (byte)*puVar21) << 8);
                      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                    puVar21 = (uint *)CONCAT31(uVar18,bVar7 | (byte)*puVar24);
                  }
                }
                *(byte *)puVar24 = (byte)*puVar24;
                bVar36 = SCARRY1((char)puVar24,*pbVar35);
                bVar6 = (char)puVar24 + *pbVar35;
                puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar6);
              }
              if (bVar36 == (char)bVar6 < '\0') {
                *(byte *)puVar24 = (byte)*puVar24 + (char)pcVar12;
                pbVar17 = (byte *)((uint)pcVar15 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar15 = *pcVar15 + bVar7;
              pbVar17 = (byte *)CONCAT31(uVar18,(bVar7 | (byte)*puVar24) + 0x7d);
              pcVar12 = pcVar12 + -1;
              *(byte *)puVar24 = (byte)*puVar24 + (char)pcVar12;
            }
            else {
              *(byte *)puVar24 = (byte)*puVar24 + cVar25;
              puVar24 = (uint *)CONCAT31(uVar22,cVar8 + *(char *)((int)pbVar35 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar35 = *pbVar35 + bVar6;
      bVar6 = bVar6 + 0x6f & *(byte *)CONCAT31(uVar18,bVar6 + 0x6f);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar21;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
      *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar6;
      pcVar12 = (char *)CONCAT31(uVar18,bVar6 - (char)*unaff_EDI);
code_r0x00403b2c:
      bVar6 = (char)pcVar12 - *pcVar12;
      pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar6);
      *pbVar14 = *pbVar14 + bVar6;
      *(byte **)pbVar14 = (byte *)(*(int *)pbVar14 + (int)param_2);
      *pbVar14 = *pbVar14 + bVar6;
      bVar36 = CARRY1(*pbVar14,bVar6);
      *pbVar14 = *pbVar14 + bVar6;
      pbStack_38 = pbStack_14;
    }
  }
  *pbVar14 = *pbVar14;
  puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(byte)puVar21 | (byte)*param_2);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_34 = pbStack_34 + -*puVar21;
  do {
    bVar6 = (byte)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar6;
    pbVar35 = pbVar35 + -*(int *)(pbStack_34 + -0x1a);
    *(byte *)puVar21 = (byte)*puVar21 + bVar6;
    bVar6 = bVar6 | (byte)*puVar24;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar6);
    *(byte *)puVar21 = (byte)*puVar21 | bVar6;
    bVar6 = (byte)*puVar21;
    pbStack_34 = (byte *)0x2700001;
    while ((POPCOUNT(bVar6) & 1U) == 0) {
      do {
        *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
        bVar6 = (byte)puVar21 | (byte)*puVar24;
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar6);
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        uVar19 = CONCAT21((short)((uint)pcVar12 >> 0x10),(byte)((uint)pcVar12 >> 8) | bRamfe140212);
        while( true ) {
          pcVar12 = (char *)((uint)uVar19 << 8);
          bVar9 = (byte)puVar21;
          *(byte *)puVar21 = (byte)*puVar21 & bVar9;
          bVar7 = *pbVar32;
          bVar10 = (byte)uVar19;
          bVar26 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar10;
          bVar6 = *pbVar32;
          if (!CARRY1(bVar7,bVar10)) break;
          *(byte *)puVar21 = (byte)*puVar21 + bVar9;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar21 = (byte)*puVar21 + bVar9;
          bVar9 = bVar9 | (byte)*puVar24;
          puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar9);
          bVar36 = (POPCOUNT(bVar9) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar32 >> 8);
            uVar27 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar36) {
              *(byte *)puVar24 = (byte)*puVar24;
              pbVar32 = (byte *)CONCAT22(uVar27,CONCAT11(cVar8 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            uVar20 = (undefined2)((uint)pcVar12 >> 0x10);
            bVar7 = (byte)((uint)pcVar12 >> 8) | (byte)*puVar21;
            uVar19 = CONCAT21(uVar20,bVar7);
            *puVar21 = *puVar21 & (uint)puVar21;
            *pbVar32 = *pbVar32 + bVar7;
            uVar18 = (undefined3)((uint)puVar21 >> 8);
            bVar6 = (char)puVar21 - bVar7;
            pcVar12 = (char *)CONCAT31(uVar18,bVar6);
            *pcVar12 = *pcVar12 + bVar6;
            bVar6 = bVar6 | (byte)*puVar24;
            puVar21 = (uint *)CONCAT31(uVar18,bVar6);
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *(byte *)puVar21 = (byte)*puVar21 + bVar6;
            pcVar12 = (char *)((uint)CONCAT21(uVar20,bVar7 | (byte)*puVar21) << 8);
            *puVar21 = *puVar21 - (int)puVar21;
            *(byte *)puVar24 = (byte)*puVar24;
            pbVar32 = (byte *)CONCAT22(uVar27,CONCAT11(cVar8 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
              uVar27 = (undefined2)((uint)puVar24 >> 0x10);
              cVar8 = (char)puVar24;
              bVar6 = (byte)((uint)puVar24 >> 8) | pbVar32[-0x17];
              puVar24 = (uint *)CONCAT22(uVar27,CONCAT11(bVar6,cVar8));
              *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
                uVar18 = (undefined3)((uint)puVar21 >> 8);
                bVar26 = (byte)puVar21 | (byte)*puVar24;
                pcVar15 = (char *)CONCAT31(uVar18,bVar26);
                bVar7 = pbVar32[-0x16];
                *pcVar15 = *pcVar15 + bVar26;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar7 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar15 = *pcVar15 + bVar26;
                pbVar14 = (byte *)CONCAT31(uVar18,bVar26 | (byte)*puVar24);
                while( true ) {
                  *pbVar14 = *pbVar14 + (byte)pbVar14;
                  uVar18 = (undefined3)((uint)pbVar14 >> 8);
                  bVar7 = (byte)pbVar14 | (byte)*puVar24;
                  puVar21 = (uint *)CONCAT31(uVar18,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                  bVar26 = pbVar35[-0x14];
                  *(byte *)puVar21 = (byte)*puVar21 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar24;
                  pcVar15 = (char *)CONCAT31(uVar18,bVar7);
                  bVar9 = pbVar32[-0x15];
                  *pcVar15 = *pcVar15 + bVar7;
                  pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),
                                                    (byte)((uint)pcVar12 >> 8) | bVar26 |
                                                    pbVar35[-0x13]) << 8);
                  *pcVar15 = *pcVar15 + bVar7;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar9 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar15 = *pcVar15 + bVar7;
                  pbVar14 = (byte *)CONCAT31(uVar18,bVar7 | (byte)*puVar24);
                  do {
                    do {
                      bVar26 = (byte)pbVar14;
                      *pbVar14 = *pbVar14 + bVar26;
                      cVar29 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar14,
                                                          cVar29));
                      *pbVar14 = bVar26;
                      *pbVar14 = *pbVar14 + bVar26;
                      cVar25 = (char)((uint)pcVar12 >> 8) + *pbVar14;
                      pcVar12 = (char *)((uint)CONCAT21((short)((uint)pcVar12 >> 0x10),cVar25) << 8)
                      ;
                      uVar18 = (undefined3)((uint)pbVar14 >> 8);
                      bVar26 = bVar26 & *pbVar14;
                      pbVar14 = (byte *)CONCAT31(uVar18,bVar26);
                      bVar7 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar25;
                    } while (SCARRY1(bVar7,cVar25) == (char)*pbVar32 < '\0');
                    *pbVar14 = *pbVar14 + bVar26;
                    bVar26 = bVar26 | (byte)*puVar24;
                    pbVar14 = (byte *)CONCAT31(uVar18,bVar26);
                    if ((POPCOUNT(bVar26) & 1U) == 0) {
                      *pbVar14 = *pbVar14 + bVar26;
                      *pbVar14 = *pbVar14 + bVar26;
                      cVar8 = cVar8 - bVar6;
                      pbVar32 = (byte *)CONCAT31((int3)((uint)puVar24 >> 8),cVar8);
                      *pbVar14 = *pbVar14 + bVar26;
                      bRam0312382b = bRam0312382b | *pbVar32;
                      while( true ) {
                        bVar7 = (byte)pbVar14;
                        *pbVar14 = *pbVar14 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar35 + 0x21b0000)[(int)pbVar14];
                        uVar18 = (undefined3)((uint)pbVar14 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar32 = *pbVar32 + bRam0312382b;
                        pbVar14 = (byte *)CONCAT31(uVar18,bVar7 | *pbStack_14);
                      }
                      *pbVar14 = *pbVar14 + bVar7;
                      bVar7 = bVar7 | *pbStack_14;
                      pcVar12 = (char *)CONCAT31(uVar18,bVar7);
                      out(*(undefined4 *)pbStack_14,(short)pbVar32);
                      *pcVar12 = *pcVar12 + bVar7;
                      uVar20 = CONCAT11(bVar6 | bRam6f0a002b,cVar8);
                      pcVar15 = (char *)CONCAT22(uVar27,uVar20);
                      *pcVar12 = *pcVar12 + bVar7;
                      *pcVar15 = *pcVar15 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_14 + 4),uVar20);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar29 + *pcVar12);
                  } while (SCARRY1(cVar29,*pcVar12) != (char)(cVar29 + *pcVar12) < '\0');
                }
                uVar1 = *puVar24;
                *(byte *)puVar24 = (byte)*puVar24;
              } while (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar24 < '\0');
              *(byte *)puVar24 = (byte)*puVar24;
              *pcVar12 = *pcVar12 - (char)pbVar32;
              *(byte *)puVar21 = (byte)*puVar21 + bVar7;
              bVar7 = bVar7 | (byte)*puVar24;
              puVar21 = (uint *)CONCAT31(uVar18,bVar7);
              bVar36 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar36);
          }
        }
      } while (SCARRY1(bVar26,bVar10));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar12 >> 8);
    *pbVar35 = *pbVar35 - (char)pbVar32;
  } while( true );
}


