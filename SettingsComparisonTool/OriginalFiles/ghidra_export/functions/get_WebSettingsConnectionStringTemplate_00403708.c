/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403708
 * Raw Name    : get_WebSettingsConnectionStringTemplate
 * Demangled   : get_WebSettingsConnectionStringTemplate
 * Prototype   : byte * get_WebSettingsConnectionStringTemplate(undefined4 param_1, int param_2, byte * param_3)
 * Local Vars  : pbStack_30, pbStack_2c, puStack_1c, pbStack_c, uVar1, uVar2, pcVar3, uVar4, iVar5, bVar6, bVar7, bVar8, bVar9, in_EAX, param_1, iVar10, param_2, param_3, pcVar11, pbVar12, piVar13, pbVar14, pcVar15, pbVar16, pbVar17, uVar18, uVar19, uVar20, puVar21, extraout_ECX, uVar22, puVar23, puVar24, puVar25, cVar26, bVar27, uVar28, cVar29, cVar30, cVar31, uVar32, unaff_EBX, uVar33, cVar34, uVar35, unaff_EBP, unaff_ESI, pbVar36, unaff_EDI, in_CS, in_SS, in_DS, bVar37, in_AF, uVar38, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall get_WebSettingsConnectionStringTemplate(uint param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *in_EAX;
  undefined3 uVar18;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
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
  char cVar26;
  byte bVar27;
  undefined1 *puVar23;
  uint *puVar24;
  uint *puVar25;
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
  byte *pbVar36;
  uint *unaff_EDI;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar37;
  byte in_AF;
  undefined8 uVar38;
  undefined2 unaff_retaddr;
  byte *pbStack_30;
  byte *pbStack_2c;
  uint *puStack_1c;
  byte *pbStack_c;
  
                    /* .NET CLR Managed Code */
  cVar26 = (char)((uint)param_2 >> 8) + *(char *)(param_2 + -0x7b);
  puVar24 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar26,(char)param_2));
  in_EAX[0x6f] = in_EAX[0x6f] + cVar26;
  pbVar12 = (byte *)(param_1 & 0xffffff00);
  do {
    *(byte *)puVar24 = (byte)*puVar24;
    if ((byte)*puVar24 == 0) {
      unaff_EBX = unaff_EBX & 0xffffff00;
_ctor:
      pbVar12 = (byte *)((uint)CONCAT21((short)((uint)pbVar12 >> 0x10),
                                        (char)((uint)pbVar12 >> 8) + *in_EAX) << 8);
      unaff_EBX = unaff_EBX & 0xffffff00;
      *(byte *)puVar24 = (byte)*puVar24;
      uVar18 = (undefined3)((uint)in_EAX >> 8);
      bVar6 = (char)in_EAX - *in_EAX;
      pbVar36 = (byte *)CONCAT31(uVar18,bVar6);
      bVar7 = *pbVar36;
      *pbVar36 = *pbVar36 + bVar6;
      pbVar36 = unaff_ESI + (uint)CARRY1(bVar7,bVar6) + *(int *)pbVar36;
      in_EAX = (byte *)CONCAT31(uVar18,bVar6);
      unaff_ESI = pbVar36 + 4;
      out(*(undefined4 *)pbVar36,(short)puVar24);
      *in_EAX = *in_EAX + bVar6;
      *pbVar12 = *pbVar12;
      bVar7 = *in_EAX;
      *in_EAX = *in_EAX + bVar6;
      *(int *)(unaff_EBX - 0x49) =
           (int)(unaff_ESI + (uint)CARRY1(bVar7,bVar6) + *(int *)(unaff_EBX - 0x49));
      break;
    }
    bVar7 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar7;
    *puVar24 = (uint)(unaff_EBP + *puVar24);
    unaff_ESI = unaff_ESI + 1;
    bVar6 = (byte)puVar24;
    bVar27 = (char)((uint)puVar24 >> 8) + *(byte *)((int)puVar24 + -0x33);
    puVar24 = (uint *)CONCAT22((short)((uint)puVar24 >> 0x10),CONCAT11(bVar27,bVar6));
    in_EAX[0x6f] = in_EAX[0x6f] + bVar27;
    *(byte *)puVar24 = (byte)*puVar24;
    unaff_retaddr = param_3._0_2_;
    if ((byte)*puVar24 != 0) {
      *in_EAX = *in_EAX + bVar7;
      uVar1 = *puVar24;
      *puVar24 = (uint)(unaff_EBP + *puVar24);
      if (CARRY4(uVar1,(uint)unaff_EBP)) {
        *in_EAX = *in_EAX + bVar7;
        puVar21 = puVar24 + 0x1d028000;
        uVar1 = *puVar21;
        *(byte *)puVar21 = (byte)*puVar21 - bVar27;
        *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)((byte)uVar1 < bVar27);
        *(byte *)puVar24 = (byte)*puVar24 + bVar7;
        *unaff_EBP = *unaff_EBP;
        in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7 + 0x2a);
        param_3 = unaff_ESI;
        goto _ctor;
      }
      bVar37 = false;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),*in_EAX);
      param_3 = unaff_ESI;
      goto code_r0x004037a7;
    }
    bVar27 = *in_EAX;
    *in_EAX = *in_EAX + bVar7;
    *(uint *)in_EAX = (*(int *)in_EAX - (int)in_EAX) - (uint)CARRY1(bVar27,bVar7);
    bVar7 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar6;
  } while (!CARRY1(bVar7,bVar6));
  *in_EAX = *in_EAX + (char)in_EAX;
  bVar37 = CARRY1((byte)((uint)pbVar12 >> 8),*in_EAX);
  param_3 = (byte *)CONCAT22(param_3._2_2_,in_SS);
  iVar10 = CONCAT31(0x1f0a00,bVar37 + 'o') + *(int *)(unaff_EBP + unaff_EBX) + (uint)(0x90 < bVar37)
           + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)puVar24;
  pcVar11 = (char *)(CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 + -0x66) | *unaff_EDI);
  bVar7 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar15 = (char *)CONCAT22(0xd0a,(ushort)bVar7 << 8);
  *pcVar11 = *pcVar11 + (char)pcVar11;
  puVar23 = (undefined1 *)
            CONCAT22((short)((uint)puVar24 >> 0x10),
                     CONCAT11((byte)((uint)puVar24 >> 8) | unaff_EBP[unaff_EBX],(byte)puVar24));
  *pcVar15 = *pcVar15 + (char)pcVar11;
  *unaff_EBP = *unaff_EBP - bVar7;
  *puVar23 = *puVar23;
  in_EAX = (byte *)(((uint)pcVar11 | 8) + 0x4490f9d8);
  bVar7 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar7;
  puVar24 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(byte)puVar24 | *unaff_ESI);
  *(uint *)(unaff_ESI + (int)in_EAX) = *(uint *)(unaff_ESI + (int)in_EAX) ^ (uint)pcVar15;
  *in_EAX = *in_EAX | bVar7;
  bVar37 = false;
  uRam2609fffc = unaff_retaddr;
  *in_EAX = *in_EAX | bVar7;
code_r0x004037a7:
  do {
    uVar28 = unaff_retaddr;
    uVar33 = unaff_EBX;
    uVar20 = SUB42(puVar24,0);
    out(*(undefined4 *)unaff_ESI,uVar20);
    out(*(undefined4 *)(unaff_ESI + 4),uVar20);
    puVar21 = (uint *)((int)unaff_EDI + (int)puVar24);
    uVar1 = *puVar21;
    uVar2 = *puVar21;
    *puVar21 = (uint)(in_EAX + uVar2 + bVar37);
    cVar26 = (char)(param_3 +
                   (uint)(CARRY4(uVar1,(uint)in_EAX) || CARRY4((uint)(in_EAX + uVar2),(uint)bVar37))
                   + *(int *)(pcVar15 + (int)puVar24)) + '\t';
    pbVar12 = (byte *)CONCAT31((int3)((uint)(param_3 +
                                            (uint)(CARRY4(uVar1,(uint)in_EAX) ||
                                                  CARRY4((uint)(in_EAX + uVar2),(uint)bVar37)) +
                                            *(int *)(pcVar15 + (int)puVar24)) >> 8),cVar26);
    out(uRam260a0000,uVar20);
    *pbVar12 = *pbVar12 + cVar26;
    bVar6 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar24;
    bVar7 = *pbVar12;
    pbVar12 = pbVar12 + (uint)CARRY1(bVar6,*pbVar12) + *(int *)pbVar12;
    *(byte *)puVar24 = (byte)*puVar24 + 6;
    cVar29 = (char)uVar33 - cRam260a0004;
    unaff_retaddr = CONCAT11(bVar6 + bVar7 + *pbVar12,6);
    pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),unaff_retaddr);
    *pbVar12 = *pbVar12;
    param_3 = (byte *)CONCAT22(param_3._2_2_,uVar28);
    uVar18 = (undefined3)((uint)pbVar12 >> 8);
    cVar26 = (char)pbVar12 - *pbVar12;
    piVar13 = (int *)CONCAT31(uVar18,cVar26);
    unaff_ESI = (byte *)(*piVar13 + 0x260a0004);
    bVar7 = cVar26 + (char)*piVar13;
    in_EAX = (byte *)CONCAT31(uVar18,bVar7);
    *in_EAX = *in_EAX + bVar7;
    *in_EAX = *in_EAX + bVar7;
    *in_EAX = *in_EAX + bVar7;
    bVar37 = CARRY1((byte)*puVar24,bVar7);
    *(byte *)puVar24 = (byte)*puVar24 + bVar7;
    unaff_EBX = CONCAT31((int3)(uVar33 >> 8),cVar29);
  } while (!bVar37);
  *in_EAX = *in_EAX + bVar7;
  pbVar36 = (byte *)CONCAT22((short)(uVar33 >> 0x10),
                             CONCAT11((byte)(uVar33 >> 8) | bRam080a0056,cVar29));
  *in_EAX = *in_EAX + bVar7;
  bVar8 = bVar7 + 2;
  *pbVar36 = *pbVar36 - (char)puVar24;
  *(char *)CONCAT31(uVar18,bVar8) = *(char *)CONCAT31(uVar18,bVar8) + bVar8;
  bVar6 = *unaff_ESI;
  uVar22 = (undefined3)((uint)pcVar15 >> 8);
  puVar21 = (uint *)(CONCAT31(uVar22,bVar6) | 6);
  bVar27 = 9 < (bVar7 + 0x74 & 0xf) | in_AF;
  bVar9 = bVar7 + 0x74 + bVar27 * '\x06';
  bVar9 = bVar9 + (0x90 < (bVar9 & 0xf0) | 0x8d < bVar8 | bVar27 * (0xf9 < bVar9)) * '`';
  pbVar12 = (byte *)CONCAT31(uVar18,bVar9);
  bVar7 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  if (!SCARRY1(bVar7,bVar9)) {
    *unaff_ESI = *unaff_ESI + bVar9;
    unaff_ESI = unaff_ESI + *(int *)((int)puVar24 + 0x33);
    *pbVar12 = *pbVar12 | bVar9;
    *unaff_ESI = *unaff_ESI + bVar9;
    bVar7 = bVar9 + 0x72;
    *(byte *)CONCAT31(uVar18,bVar7) = *(byte *)CONCAT31(uVar18,bVar7) | bVar7;
    *unaff_ESI = *unaff_ESI + bVar7;
    puVar21 = (uint *)CONCAT31(uVar22,(bVar6 | 6) + *unaff_ESI);
    pcVar15 = (char *)CONCAT31(uVar18,bVar9 - 0x11);
    *pcVar15 = *pcVar15 + (bVar9 - 0x11);
    pbVar12 = (byte *)CONCAT31(uVar18,bVar9 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar12 = *pbVar12 + (bVar9 - 0xf);
  }
code_r0x00403825:
  pbVar17 = (byte *)0x80a0000;
  uVar18 = (undefined3)((uint)pbVar12 >> 8);
  cVar26 = (char)pbVar12 + '\x7f';
  pcVar15 = (char *)CONCAT31(uVar18,cVar26);
  *pcVar15 = *pcVar15 + cVar26;
  iVar10 = CONCAT31(uVar18,(char)pbVar12 + -0x7f) + 0x547d;
  cVar26 = (char)iVar10;
  uVar18 = (undefined3)((uint)iVar10 >> 8);
  cVar29 = cVar26 + '*';
  pcVar15 = (char *)CONCAT31(uVar18,cVar29);
  pbVar12 = (byte *)CONCAT31((int3)((uint)puVar24 >> 8),(byte)puVar24 | *unaff_ESI);
  cVar30 = (char)pbVar36 - *unaff_ESI;
  uVar20 = (undefined2)((uint)pbVar36 >> 0x10);
  cVar34 = (char)((uint)pbVar36 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar36 >> 8),cVar30) + 0x57);
  *pcVar15 = *pcVar15 + cVar29;
  bVar7 = cVar26 + 0x54U & *pbVar12;
  iVar10 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
  pcVar15 = (char *)CONCAT31(uVar18,bVar7 + 0x2a);
  pbStack_c = (byte *)CONCAT22(pbStack_c._2_2_,in_DS);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar34,cVar30)) + 0x58);
  *pcVar15 = *pcVar15 + bVar7 + 0x2a;
  bVar7 = bVar7 + 0x54 & *pbVar12;
  iVar5 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
  pcVar15 = (char *)CONCAT31(uVar18,bVar7 + 0x2a);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar15 = *pcVar15 + bVar7 + 0x2a;
  pcVar15 = (char *)CONCAT31(uVar18,bVar7 + 0x57);
  puVar25 = (uint *)(pbVar12 + *(int *)pbStack_c);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar15 = *pcVar15 + bVar7 + 0x57;
  cVar26 = bVar7 - 0x3a;
  pcVar15 = (char *)CONCAT31(uVar18,cVar26);
  *pcVar15 = *pcVar15 + cVar26;
  uVar1 = *puVar25;
  cVar31 = (char)puVar21;
  pbVar36 = (byte *)CONCAT22(uVar20,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar34,
                                                  cVar30)) + 0x59),cVar30));
  *pcVar15 = *pcVar15 + cVar26;
  bVar27 = bVar7 - 0x10 & (byte)*puVar25;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar5 + iVar10);
  *(char *)CONCAT31(uVar18,bVar27) = *(char *)CONCAT31(uVar18,bVar27) + bVar27;
  bVar27 = bVar27 + 0x2a;
  pbVar12 = (byte *)CONCAT31(uVar18,bVar27);
  cVar26 = *(char *)((int)unaff_EDI + 0x17);
  *pbVar12 = *pbVar12 + bVar27;
  uVar2 = *puVar25;
  puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,in_DS);
  cVar29 = *(char *)((int)unaff_EDI + 0x1a);
  *pbVar12 = *pbVar12 + bVar27;
  puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                             CONCAT11((((byte)((uint)puVar21 >> 8) | (byte)uVar1) + cVar26 |
                                      (byte)uVar2) + cVar29 | (byte)*puVar25,cVar31));
  *pbVar36 = *pbVar36 + cVar30;
  *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar27;
  bVar7 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar27;
  bVar6 = *pbVar12;
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar25;
  bVar7 = ((bVar27 - bVar6) - CARRY1(bVar7,bVar27)) + (byte)*puVar25;
  pbVar12 = (byte *)CONCAT31(uVar18,bVar7);
  puVar24 = puStack_1c;
  if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004038f6;
  *pbVar12 = *pbVar12 + bVar7;
  cVar26 = (bVar7 + 0x6f) - (0x90 < bVar7);
  pbVar14 = (byte *)CONCAT31(uVar18,cVar26);
  uVar1 = *puVar25;
  *(byte *)puVar25 = (byte)*puVar25 + cVar31;
  puVar24 = puVar25;
  if (SCARRY1((byte)uVar1,cVar31) == (char)(byte)*puVar25 < '\0') {
    cRam33100000 = cRam33100000 - cVar26;
    cVar26 = cVar26 + (byte)*puVar25;
    pbVar12 = (byte *)CONCAT31(uVar18,cVar26);
    goto code_r0x0040390c;
  }
  do {
    *pbVar14 = *pbVar14 + (char)pbVar14;
    while( true ) {
      uVar18 = (undefined3)((uint)pbVar14 >> 8);
      cVar26 = (char)pbVar14 + '\x02';
      pbVar12 = (byte *)CONCAT31(uVar18,cVar26);
      if ((POPCOUNT(cVar26) & 1U) == 0) break;
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbStack_c);
      cVar26 = (char)pbVar12 + (byte)*puVar24;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar26);
code_r0x0040390c:
      cVar29 = (char)pbVar12;
      if ((POPCOUNT(cVar26) & 1U) != 0) {
        *pbStack_c = *pbStack_c + cVar29;
        goto code_r0x0040395a;
      }
      *pbVar12 = *pbVar12 + cVar29;
      bVar7 = cVar29 + 2;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
code_r0x00403912:
      bVar37 = (POPCOUNT(bVar7) & 1U) == 0;
      if (!bVar37) goto code_r0x00403967;
      *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x00403916:
      bVar6 = (char)pbVar12 + 0x6f;
      pbVar14 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar12 >> 8),bVar6);
      bVar7 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar6;
      if (*pbVar14 == 0 || SCARRY1(bVar7,bVar6) != (char)*pbVar14 < '\0') goto code_r0x00403979;
      *pbVar14 = *pbVar14 + bVar6;
      pbVar14 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),(char)pbVar12 + -100);
      *(byte **)(pbStack_c + (int)unaff_EDI * 8) =
           (byte *)((int)puVar24 + (uint)(0xd2 < bVar6) + *(int *)(pbStack_c + (int)unaff_EDI * 8));
code_r0x00403926:
      *(uint **)pbVar14 = puStack_1c;
      bVar7 = *pbStack_c;
      bVar6 = (byte)pbVar14;
      *pbStack_c = *pbStack_c + bVar6;
      if (CARRY1(bVar7,bVar6)) {
        *pbVar14 = *pbVar14 + bVar6;
        uVar18 = (undefined3)((uint)pbVar14 >> 8);
        bVar6 = bVar6 | pbVar14[0x400005b];
        pbVar12 = (byte *)CONCAT31(uVar18,bVar6);
        pbVar14 = pbStack_c;
        if ((char)bVar6 < '\x01') goto code_r0x00403991;
        *pbVar12 = *pbVar12 + bVar6;
        cVar26 = bVar6 + 0x28;
        pbVar12 = (byte *)CONCAT31(uVar18,cVar26);
        *(byte **)pbVar12 = pbVar12 + (uint)(0xd7 < bVar6) + *(int *)pbVar12;
        bVar7 = *pbVar36;
        bVar6 = (byte)((uint)puVar21 >> 8);
        *pbVar36 = *pbVar36 + bVar6;
        if (CARRY1(bVar7,bVar6)) {
          *pbVar12 = *pbVar12 + cVar26;
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar12,(char)puVar21));
          *pbStack_c = *pbStack_c + cVar26;
          pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                     CONCAT11((char)((uint)pbVar36 >> 8) + pbVar36[0x55],
                                              (char)pbVar36));
          *pbVar12 = *pbVar12 + cVar26;
code_r0x00403950:
          uVar18 = (undefined3)((uint)pbVar12 >> 8);
          bVar6 = (char)pbVar12 + 0x6f;
          bVar7 = *(byte *)CONCAT31(uVar18,bVar6);
          *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
          pbVar12 = (byte *)CONCAT31(uVar18,(bVar6 & bVar7) + *pbStack_c);
          *(byte *)puVar21 = (byte)*puVar21 - (char)((uint)puVar24 >> 8);
        }
        goto code_r0x0040395a;
      }
    }
    *pbVar12 = *pbVar12 + cVar26;
    cVar26 = (char)pbVar14 + '.' + (byte)*puVar24;
    pbVar12 = (byte *)CONCAT31(uVar18,cVar26);
    if ((POPCOUNT(cVar26) & 1U) != 0) {
      pbVar14 = (byte *)((int)puVar24 + (int)pbVar12);
      *pbVar14 = *pbVar14 + cVar26;
      bVar7 = *pbVar14;
      goto code_r0x00403912;
    }
    *pbVar12 = *pbVar12 + cVar26;
    bVar7 = cVar26 + 2;
    pbVar12 = (byte *)CONCAT31(uVar18,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403916;
    *pbVar12 = *pbVar12 + bVar7;
    cVar29 = cVar26 + 'q';
    piVar13 = (int *)CONCAT31(uVar18,cVar29);
    *piVar13 = (*piVar13 - (int)piVar13) - (uint)(0x90 < bVar7);
    bVar7 = *pbVar36;
    bVar6 = (byte)((uint)puVar21 >> 8);
    *pbVar36 = *pbVar36 + bVar6;
    if (!CARRY1(bVar7,bVar6)) {
      out(*(undefined4 *)pbStack_c,(short)puVar24);
      bVar7 = (cVar29 - (char)*piVar13) - CARRY1(bVar7,bVar6);
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
      cVar26 = bVar7 - *(byte *)CONCAT31(uVar18,bVar7);
      unaff_ESI = pbStack_c +
                  ((4 - *(int *)CONCAT31(uVar18,cVar26)) -
                  (uint)(bVar7 < *(byte *)CONCAT31(uVar18,bVar7)));
      pbVar12 = (byte *)CONCAT31(uVar18,cVar26);
      pbStack_c = (byte *)0;
      goto code_r0x00403825;
    }
    *(char *)piVar13 = (char)*piVar13 + cVar29;
    uVar28 = (undefined2)((uint)pbVar36 >> 0x10);
    bVar7 = (byte)((uint)pbVar36 >> 8) | bRam080a0056;
    *(char *)piVar13 = (char)*piVar13 + cVar29;
    pcVar15 = (char *)CONCAT31(uVar18,cVar26 + 's');
    pbVar36 = (byte *)CONCAT22(uVar28,CONCAT11(bVar7 + *(char *)(CONCAT22(uVar28,CONCAT11(bVar7,(
                                                  char)pbVar36)) + 0x56),(char)pbVar36));
    *pcVar15 = *pcVar15 + cVar26 + 's';
    bVar7 = cVar26 - 0xf;
    *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
    bVar6 = cVar26 + 0x1e;
    pbVar14 = (byte *)CONCAT31(uVar18,bVar6);
    *(byte **)(pbStack_c + (int)unaff_EDI * 8) =
         (byte *)((int)puVar21 + (uint)(0xd2 < bVar7) + *(int *)(pbStack_c + (int)unaff_EDI * 8));
    uVar28 = *(undefined2 *)pbVar14;
    bVar7 = *pbStack_c;
    *pbStack_c = *pbStack_c + bVar6;
    puVar24 = puVar21;
    if (CARRY1(bVar7,bVar6)) {
      *pbVar14 = *pbVar14 + bVar6;
      pbVar12 = (byte *)CONCAT31(uVar18,bVar6 | pbVar14[0x400005a]);
      if ('\0' < (char)(bVar6 | pbVar14[0x400005a])) {
code_r0x004038f6:
        bVar7 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar7;
        uVar18 = (undefined3)((uint)pbVar12 >> 8);
        cVar26 = ((bVar7 + 0x28) - *(char *)CONCAT31(uVar18,bVar7 + 0x28)) - (0xd7 < bVar7);
        pbVar12 = (byte *)CONCAT31(uVar18,cVar26);
        bVar7 = *pbVar36;
        bVar6 = (byte)((uint)puVar21 >> 8);
        *pbVar36 = *pbVar36 + bVar6;
        if (CARRY1(bVar7,bVar6)) {
          *pbVar12 = *pbVar12 + cVar26;
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar12,(char)puVar21));
          *pbStack_c = *pbStack_c + cVar26;
          goto code_r0x00403908;
        }
        pbVar14 = pbVar12 + -0x6fe1411;
        goto code_r0x00403926;
      }
      goto code_r0x00403950;
    }
  } while( true );
code_r0x0040395a:
  *pbVar12 = *pbVar12 + (char)pbVar12;
  *(byte *)(puVar24 + 0x5818000) = (byte)puVar24[0x5818000] - (char)puVar21;
  pbVar36 = (byte *)((uint)pbVar36 | (uint)pbStack_c);
  cVar26 = (char)pbVar12 + '\x02';
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar26);
  bVar37 = (POPCOUNT(cVar26) & 1U) == 0;
code_r0x00403967:
  if (!bVar37) goto code_r0x004039be;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  uVar18 = (undefined3)((uint)pbVar12 >> 8);
  bVar7 = (char)pbVar12 + 0x6f;
  bVar7 = bVar7 & *(byte *)CONCAT31(uVar18,bVar7);
  pbVar14 = (byte *)CONCAT31(uVar18,bVar7);
  *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
  puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + (char)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar7;
code_r0x00403979:
  bVar7 = (char)pbVar14 - (char)*unaff_EDI;
  bVar37 = bVar7 < (byte)*puVar21;
  pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar7 - (byte)*puVar21);
  do {
    cVar26 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar26 + bVar37;
    *pbVar12 = *pbVar12 + cVar26;
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar24;
    *(byte *)((int)puVar21 + 0x101c00aa) = *(byte *)((int)puVar21 + 0x101c00aa) + (char)pbVar36;
    *pbVar12 = *pbVar12 + cVar26;
    *(byte **)pbStack_c = pbVar36 + *(int *)pbStack_c;
    bVar7 = (byte)((uint)puVar21 >> 8);
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11(bVar7 + *pbVar12,(char)puVar21));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
    pbVar14 = pbStack_c;
code_r0x00403991:
    cVar26 = (char)puVar21;
    *(byte *)puVar24 = (byte)*puVar24 + cVar26;
    cVar29 = (char)pbVar36 - pbVar14[2];
    pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar29);
    pbStack_c = pbVar14;
    if ((POPCOUNT(cVar29) & 1U) != 0) goto code_r0x0040395a;
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar19 = (uint3)((uint)pbVar12 >> 8);
    bVar7 = (byte)pbVar12 | *pbVar36;
    piVar13 = (int *)CONCAT31(uVar19,bVar7);
    bVar6 = (byte)((uint)puVar21 >> 8);
    bVar27 = (byte)puVar24;
    if (bVar7 == 0) {
      *(char *)piVar13 = (char)*piVar13;
      pbStack_c = pbVar14 + 4;
      out(*(undefined4 *)pbVar14,(short)puVar24);
      pbVar12 = (byte *)((uint)uVar19 << 8);
      *(byte *)puVar24 = (byte)*puVar24 + cVar26;
      puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar27 - *pbVar36);
      *pbVar36 = *pbVar36;
      *(byte *)puVar24 = (byte)*puVar24 + bVar6;
      *pbVar12 = *pbVar12;
      *pbVar36 = *pbVar36 + cVar29;
      *pbVar12 = *pbVar12;
      *(byte **)(pbVar36 + -0x3d) = pbStack_c + *(int *)(pbVar36 + -0x3d);
      break;
    }
    pbVar17 = pbVar17 + -unaff_EDI[9];
    *(byte *)piVar13 = (char)*piVar13 + bVar7;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11(bVar6 | (byte)*puVar24,cVar26));
    pbStack_c = pbVar14 + *piVar13;
    pcVar15 = (char *)((int)piVar13 + *piVar13);
    bVar6 = (char)pcVar15 - *pcVar15;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar6);
    bVar7 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar6;
    pbVar12 = pbVar12 + (-(uint)CARRY1(bVar7,bVar6) - *(int *)pbVar12);
    bVar37 = CARRY1((byte)*puVar21,bVar27);
    *(byte *)puVar21 = (byte)*puVar21 + bVar27;
  } while (!bVar37);
  *pbVar12 = *pbVar12 + (char)pbVar12;
  puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(byte)puVar21 | (byte)*puVar24);
code_r0x004039be:
  unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar17 + -0x3c));
  *pbVar12 = *pbVar12 + (byte)pbVar12;
  uVar18 = (undefined3)((uint)pbVar12 >> 8);
  bVar7 = (byte)pbVar12 | (byte)*puVar24;
  pcVar15 = (char *)CONCAT31(uVar18,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) goto code_r0x004039c8;
  cVar26 = *pcVar15;
  *pcVar15 = *pcVar15 + bVar7;
  cVar29 = *pcVar15;
  if (!SCARRY1(cVar26,bVar7)) goto code_r0x00403a22;
  goto code_r0x00403a24;
code_r0x004039c8:
  *pcVar15 = *pcVar15 + bVar7;
  *pbStack_c = *pbStack_c + 1;
  uVar4 = *(undefined6 *)CONCAT31(uVar18,bVar7 + 6);
  pbVar14 = (byte *)uVar4;
  uVar1 = *puVar24;
  bVar7 = (byte)puVar21;
  *(byte *)puVar24 = (byte)*puVar24 + bVar7;
  if (!CARRY1((byte)uVar1,bVar7)) goto code_r0x00403979;
  *pbVar14 = *pbVar14 + (char)uVar4;
  bVar27 = (byte)((uint)puVar21 >> 8) | *pbVar14;
  uVar20 = CONCAT11(bVar27,bVar7);
  pbVar14 = pbVar14 + -*(int *)pbVar14;
  bVar6 = *pbVar36;
  *pbVar36 = *pbVar36 + bVar27;
  if (CARRY1(bVar6,bVar27)) {
    cVar26 = (char)pbVar14;
    *pbVar14 = *pbVar14 + cVar26;
    uVar1 = *puVar24;
    puVar24 = (uint *)CONCAT22((short)((uint)puVar24 >> 0x10),
                               CONCAT11((char)((uint)puVar24 >> 8) - pbVar36[-0x3a],(char)puVar24));
    *pbVar14 = *pbVar14 + cVar26;
    uVar35 = (undefined2)((uint)pbVar36 >> 0x10);
    bVar6 = (byte)((uint)pbVar36 >> 8) | *(byte *)((int)puVar24 + 0x32);
    pcVar15 = (char *)CONCAT22(uVar35,CONCAT11(bVar6,(char)pbVar36));
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_CS);
    cVar29 = cVar26 + *pcVar15 + '-';
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar29);
    *pbVar14 = *pbVar14;
    uVar2 = *puVar24;
    cVar31 = (char)pbVar36 - *pbStack_c;
    cVar26 = *(char *)((int)unaff_EDI + 0x17);
    *pbVar14 = *pbVar14 + cVar29;
    uVar20 = CONCAT11((bVar27 | (byte)uVar1) + cVar26 | (byte)*puVar24,bVar7 - (byte)uVar2);
    pbVar36 = (byte *)CONCAT22(uVar35,CONCAT11(bVar6 + *(char *)(CONCAT31((int3)((uint)pcVar15 >> 8)
                                                                          ,cVar31) + 0x4e),cVar31));
    *pbVar14 = *pbVar14 + cVar29;
  }
  puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),uVar20);
  bVar7 = (byte)pbVar14;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  pcVar15 = (char *)CONCAT31(uVar18,bVar7 + 0x28);
  *pcVar15 = (*pcVar15 - (bVar7 + 0x28)) - (0xd7 < bVar7);
  *(byte *)puVar24 = (byte)*puVar24 + (char)uVar20;
  bVar6 = bVar7 + 0x1b;
  pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                             CONCAT11((char)((uint)pbVar36 >> 8) + pbVar36[0x4f],(char)pbVar36));
  *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
  pcVar11 = (char *)CONCAT31(uVar18,bVar7 + 0x43);
  *pcVar11 = (*pcVar11 - (bVar7 + 0x43)) - (0xd7 < bVar6);
  *(byte *)puVar24 = (byte)*puVar24 + (char)uVar20;
  pcVar15 = pcVar11 + -0x6b721c;
  pcVar11 = pcVar11 + -0x6b721a;
  *pcVar11 = *pcVar11 + (char)((uint)puVar24 >> 8);
  cVar29 = *pcVar11;
code_r0x00403a22:
  if ((POPCOUNT(cVar29) & 1U) == 0) {
code_r0x00403a24:
    cVar26 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar26;
    uVar18 = (undefined3)((uint)pcVar15 >> 8);
    bVar7 = cVar26 + 2;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
      piVar13 = (int *)CONCAT31(uVar18,cVar26 + '*');
      *piVar13 = (*piVar13 - (int)piVar13) - (uint)(0xd7 < bVar7);
      uVar1 = *puVar24;
      bVar27 = (byte)puVar21;
      *(byte *)puVar24 = (byte)*puVar24 + bVar27;
      out(*(undefined4 *)pbStack_c,(short)puVar24);
      bVar6 = ((cVar26 + '*') - (char)*piVar13) - CARRY1((byte)uVar1,bVar27);
      pbVar12 = (byte *)CONCAT31(uVar18,bVar6);
      *(byte *)puVar24 = (byte)*puVar24 + bVar27;
      uVar20 = (undefined2)((uint)pbVar36 >> 0x10);
      uVar32 = SUB41(pbVar36,0);
      cVar26 = (char)((uint)pbVar36 >> 8) - pbStack_c[0x1f];
      pbVar36 = (byte *)CONCAT22(uVar20,CONCAT11(cVar26,uVar32));
      *pbVar12 = *pbVar12 + bVar6;
      uVar1 = *puVar24;
      bVar7 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar6;
      pbStack_c = pbStack_c + ((4 - *(int *)pbVar12) - (uint)CARRY1(bVar7,bVar6));
      pbVar12 = (byte *)CONCAT31(uVar18,bVar6);
      puVar21 = (uint *)(CONCAT22((short)((uint)puVar21 >> 0x10),
                                  CONCAT11((byte)((uint)puVar21 >> 8) | (byte)uVar1,bVar27)) + -1);
      bVar7 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar6;
      bVar7 = (bVar6 - *pbVar12) - CARRY1(bVar7,bVar6);
      *(byte *)puVar21 = *(byte *)puVar21 + (char)puVar24;
      bVar37 = CARRY1(bVar7,(byte)*puVar24);
      bVar7 = bVar7 + (byte)*puVar24;
      pbVar12 = (byte *)CONCAT31(uVar18,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar12 = *pbVar12 + bVar7;
        cVar29 = (bVar7 + 0x6f) - (0x90 < bVar7);
        pbVar14 = (byte *)CONCAT31(uVar18,cVar29);
        uVar1 = *puVar24;
        *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
        if (SCARRY1((byte)uVar1,(char)puVar21) == (char)(byte)*puVar24 < '\0')
        goto code_r0x00403aaf;
        *pbVar14 = *pbVar14 + cVar29;
        pcVar15 = (char *)CONCAT31(uVar18,cVar29 + '\x02');
        bVar6 = cVar26 + pbVar36[0x52];
        pbVar36 = (byte *)CONCAT22(uVar20,CONCAT11(bVar6,uVar32));
        *pcVar15 = *pcVar15 + cVar29 + '\x02';
        bVar7 = cVar29 + 4;
        pbVar14 = (byte *)CONCAT31(uVar18,bVar7);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pbVar14 = *pbVar14 + bVar7;
          cVar26 = (cVar29 + 's') - (0x90 < bVar7);
          pcVar15 = (char *)CONCAT31(uVar18,cVar26);
          bVar7 = (byte)((uint)puVar21 >> 8);
          bVar37 = CARRY1(*pbVar36,bVar7);
          *pbVar36 = *pbVar36 + bVar7;
          pbVar12 = pbStack_c;
          if (bVar37) {
            *pcVar15 = *pcVar15 + cVar26;
            pbVar36 = (byte *)CONCAT22(uVar20,CONCAT11(bVar6 | pbVar17[0x5c],uVar32));
            goto code_r0x00403a76;
          }
          goto code_r0x00403a8f;
        }
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar14);
        pbVar36 = (byte *)CONCAT22(uVar20,CONCAT11(bVar6 + pbVar36[0x52],uVar32));
code_r0x00403abf:
        *pbVar14 = *pbVar14 + (char)pbVar14;
        cVar26 = (char)pbVar14 + '\x02';
        pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar26);
        bVar37 = (POPCOUNT(cVar26) & 1U) == 0;
        pbStack_2c = pbVar17;
        if (!bVar37) goto code_r0x00403b18;
      }
      else {
code_r0x00403aa1:
        if (bVar37) {
          *pbVar12 = *pbVar12 + (byte)pbVar12;
          bVar7 = (byte)pbVar12 | pbVar12[0x400005e];
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
          pbStack_2c = pbVar17;
          if ((char)bVar7 < '\x01') goto code_r0x00403b0b;
          *pbVar14 = *pbVar14 + bVar7;
code_r0x00403aaf:
          cVar26 = (char)pbVar14 + '(';
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar26);
          *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
          bVar7 = *pbVar36;
          bVar6 = (byte)((uint)puVar21 >> 8);
          *pbVar36 = *pbVar36 + bVar6;
          pbVar16 = pbVar17;
          if (!CARRY1(bVar7,bVar6)) goto code_r0x00403ad8;
          *pbVar14 = *pbVar14 + cVar26;
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11(bVar6 | *pbVar36,(char)puVar21));
          if ((POPCOUNT((byte)*puVar24 - cVar26) & 1U) != 0) {
            *pbStack_c = *pbStack_c + cVar26;
            pbStack_2c = pbVar17;
            goto code_r0x00403b0b;
          }
          goto code_r0x00403abf;
        }
        pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                   CONCAT11((char)((uint)pbVar36 >> 8) + pbVar36[0x53],(char)pbVar36
                                           ));
      }
      bVar7 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      cVar26 = (bVar7 + 0x6f) - (0x90 < bVar7);
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar26);
      bVar7 = *pbVar36;
      cVar29 = (char)((uint)puVar21 >> 8);
      *pbVar36 = *pbVar36 + cVar29;
      pbStack_2c = pbVar17;
      if (*pbVar36 == 0 || SCARRY1(bVar7,cVar29) != (char)*pbVar36 < '\0') goto code_r0x00403b2c;
      *pcVar15 = *pcVar15 + cVar26;
    }
    else {
      cVar26 = bVar7 + (byte)*puVar24;
      pcVar15 = (char *)CONCAT31(uVar18,cVar26);
      pbVar12 = pbStack_c;
      if ((POPCOUNT(cVar26) & 1U) == 0) goto code_r0x00403a7d;
    }
    *(byte **)(pbStack_c + (int)unaff_EDI * 8) =
         (byte *)((int)puVar24 +
                 (uint)(0xd2 < (byte)pcVar15) + *(int *)(pbStack_c + (int)unaff_EDI * 8));
    pbVar14 = pbVar17;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 + 0x2d);
code_r0x00403ad8:
    pbStack_2c = pbVar16;
    bVar7 = *pbVar14;
    bVar6 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar6;
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,uVar28);
    if (!CARRY1(bVar7,bVar6)) goto code_r0x00403afc;
    *pbVar14 = *pbVar14 + bVar6;
    bVar6 = bVar6 | pbVar14[0x400005d];
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar6);
    pbVar12 = pbStack_c;
    if ((char)bVar6 < '\x01') {
      *pbVar14 = *pbVar14 + bVar6;
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((byte)((uint)puVar21 >> 8) | (byte)*puVar24,(char)puVar21)
                                );
      pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                 CONCAT11((char)((uint)pbVar36 >> 8) + pbVar36[-0x39],(char)pbVar36)
                                );
      goto code_r0x00403b4c;
    }
code_r0x00403ae7:
    *pbVar14 = *pbVar14 + (char)pbVar14;
    cVar26 = (char)pbVar14 + '(';
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar26);
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    bVar7 = *pbVar36;
    bVar6 = (byte)((uint)puVar21 >> 8);
    *pbVar36 = *pbVar36 + bVar6;
    pbStack_c = pbVar12;
    if (!CARRY1(bVar7,bVar6)) goto code_r0x00403b0b;
    *pbVar14 = *pbVar14 + cVar26;
  }
  else {
    uVar1 = *puVar24;
    *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
    if (SCARRY1((byte)uVar1,(char)puVar21) == (char)(byte)*puVar24 < '\0') {
      pbVar14 = pbVar17;
      pbVar16 = (byte *)(pcVar15 + -0x6fe1411);
      goto code_r0x00403ad8;
    }
code_r0x00403a76:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02');
    pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                               CONCAT11((char)((uint)pbVar36 >> 8) + pbVar36[0x54],(char)pbVar36));
    pbVar12 = pbStack_c;
code_r0x00403a7d:
    cVar26 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar26;
    uVar18 = (undefined3)((uint)pcVar15 >> 8);
    cVar29 = cVar26 + '-';
    pbVar16 = (byte *)CONCAT31(uVar18,cVar29);
    pbVar14 = pbVar17;
    pbStack_c = pbVar12;
    if ((POPCOUNT(cVar29 - (byte)*puVar24) & 1U) != 0) goto code_r0x00403ad8;
    *pbVar16 = *pbVar16 + cVar29;
    bVar7 = cVar26 + 0x2f;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      uVar1 = *puVar24;
      *(byte *)puVar24 = (byte)*puVar24 + (byte)puVar21;
      *pbVar17 = *pbVar17 - CARRY1((byte)uVar1,(byte)puVar21);
      pbVar14 = (byte *)CONCAT31(uVar18,cVar26 + -0x53);
      goto code_r0x00403ae7;
    }
    *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
    bVar37 = 0x90 < bVar7;
    pcVar15 = (char *)CONCAT31(uVar18,cVar26 + -0x62);
code_r0x00403a8f:
    uVar18 = (undefined3)((uint)pcVar15 >> 8);
    bVar6 = (char)pcVar15 - bVar37;
    pbVar14 = (byte *)CONCAT31(uVar18,bVar6);
    bVar7 = *pbVar36;
    cVar26 = (char)((uint)puVar21 >> 8);
    *pbVar36 = *pbVar36 + cVar26;
    pbStack_2c = pbVar17;
    pbStack_c = pbVar12;
    if (*pbVar36 != 0 && SCARRY1(bVar7,cVar26) == (char)*pbVar36 < '\0') {
      *pbVar14 = *pbVar14 + bVar6;
      pbStack_c = (byte *)CONCAT31(uVar18,bVar6 + 0x2d);
      *(byte **)(pbVar12 + (int)unaff_EDI * 8) =
           (byte *)((int)puVar24 + (uint)(0xd2 < bVar6) + *(int *)(pbVar12 + (int)unaff_EDI * 8));
      bVar37 = CARRY1(*pbVar12,(byte)pbVar12);
      *pbVar12 = *pbVar12 + (byte)pbVar12;
      goto code_r0x00403aa1;
    }
  }
  puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                             CONCAT11((byte)((uint)puVar21 >> 8) | *pbVar14,(char)puVar21));
  *pbStack_c = *pbStack_c + (char)pbVar14;
code_r0x00403afc:
  pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                             CONCAT11((char)((uint)pbVar36 >> 8) + pbVar36[0x55],(char)pbVar36));
  *pbVar14 = *pbVar14 + (char)pbVar14;
  uVar18 = (undefined3)((uint)pbVar14 >> 8);
  bVar6 = (char)pbVar14 + 0x6f;
  bVar7 = *(byte *)CONCAT31(uVar18,bVar6);
  *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
  pbVar14 = (byte *)CONCAT31(uVar18,(bVar6 & bVar7) + *pbStack_c);
  *(byte *)puVar21 = (byte)*puVar21 - (char)((uint)puVar24 >> 8);
  goto code_r0x00403b0b;
code_r0x00403b4c:
  while( true ) {
    *pbVar14 = *pbVar14 + (byte)pbVar14;
    bVar7 = (byte)pbVar14 | *pbVar36;
    piVar13 = (int *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar7);
    if (bVar7 != 0) {
      pbStack_2c = pbStack_2c + -unaff_EDI[9];
      *(byte *)piVar13 = (char)*piVar13 + bVar7;
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                 CONCAT11((byte)((uint)puVar21 >> 8) | (byte)*puVar24,(char)puVar21)
                                );
      pbStack_30 = pbStack_30 + *piVar13;
      pcVar15 = (char *)((int)piVar13 + *piVar13);
      uVar18 = (undefined3)((uint)pcVar15 >> 8);
      bVar6 = (char)pcVar15 - *pcVar15;
      pbVar12 = (byte *)CONCAT31(uVar18,bVar6);
      bVar7 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar6;
      piVar13 = (int *)CONCAT31(uVar18,bVar6 - CARRY1(bVar7,bVar6));
    }
    *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
    pbStack_c = pbStack_30 + 4;
    out(*(undefined4 *)pbStack_30,(short)puVar24);
    pbVar14 = (byte *)(((uint)piVar13 >> 8) * 0x100);
    *(byte *)puVar24 = (byte)*puVar24 + (byte)puVar21;
    bVar7 = (char)puVar24 - *pbVar36;
    puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar7);
    *pbVar36 = *pbVar36;
    *(byte *)puVar24 = (byte)*puVar24 + (char)((uint)puVar21 >> 8);
    *pbVar14 = *pbVar14;
    pcVar15 = (char *)(((uint)piVar13 >> 8) * 0x200);
    *pcVar15 = *pcVar15 + (char)pbVar36;
    bVar37 = CARRY1((byte)*puVar21,bVar7);
    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
    pbStack_30 = pbStack_c;
    if (bVar37) break;
    while( true ) {
      *(byte **)pbVar14 = pbVar14 + (uint)bVar37 + *(int *)pbVar14;
      unaff_EDI = unaff_EDI + 1;
      pbVar14[(int)puVar24] = pbVar14[(int)puVar24] + (char)pbVar36;
      *pbVar14 = *pbVar14 + (char)pbVar14;
      *(byte **)pbStack_30 = pbVar36 + *(int *)pbStack_30;
      bVar7 = (byte)((uint)puVar21 >> 8);
      cVar26 = (char)puVar21;
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar7 + *pbVar14,cVar26));
      pbVar14 = pbVar14 + (uint)CARRY1(bVar7,*pbVar14) + *(int *)pbVar14;
      *(byte *)puVar24 = (byte)*puVar24 + cVar26;
      cVar26 = (char)pbVar36 - pbStack_30[2];
      pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar26);
      pbStack_c = pbStack_30;
      if ((POPCOUNT(cVar26) & 1U) == 0) break;
code_r0x00403b0b:
      *pbVar14 = *pbVar14 + (char)pbVar14;
      *(byte *)(puVar24 + 0x5818000) = (byte)puVar24[0x5818000] - (char)puVar21;
      pbVar36 = (byte *)((uint)pbVar36 | (uint)pbStack_c);
      cVar26 = (char)pbVar14 + '\x02';
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar26);
      bVar37 = (POPCOUNT(cVar26) & 1U) == 0;
code_r0x00403b18:
      bVar7 = (byte)pbVar12;
      uVar18 = (undefined3)((uint)pbVar12 >> 8);
      if (!bVar37) {
        *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
        pbVar14 = (byte *)CONCAT31(uVar18,bVar7 | *pbStack_c);
code_r0x00403b73:
        pbVar12 = (byte *)((int)unaff_EDI + *(int *)(pbStack_2c + -0x37));
        *pbVar14 = *pbVar14 + (byte)pbVar14;
        uVar18 = (undefined3)((uint)pbVar14 >> 8);
        bVar7 = (byte)pbVar14 | (byte)*puVar24;
        pcVar15 = (char *)CONCAT31(uVar18,bVar7);
        uVar38 = CONCAT44(puVar24,pcVar15);
        if ((POPCOUNT(bVar7) & 1U) == 0) {
          *pcVar15 = *pcVar15 + bVar7;
          *pbStack_c = *pbStack_c + 1;
          return (byte *)CONCAT31(uVar18,bVar7 + 6);
        }
        bVar7 = *pbStack_c;
        *pbStack_c = *pbStack_c + 1;
        pcVar3 = (code *)swi(4);
        if (SCARRY1(bVar7,'\x01')) {
          uVar38 = (*pcVar3)();
          puVar21 = extraout_ECX;
        }
        pbVar17 = (byte *)uVar38;
        *pbVar17 = *pbVar17 + (char)uVar38;
        cVar29 = (char)((ulonglong)uVar38 >> 0x20);
        puVar24 = (uint *)CONCAT22((short)((ulonglong)uVar38 >> 0x30),
                                   CONCAT11((byte)((ulonglong)uVar38 >> 0x28) | pbVar36[0x2f],cVar29
                                           ));
        *pbVar17 = *pbVar17 + (char)uVar38;
        cVar26 = (char)puVar21;
        bVar27 = (byte)((uint)puVar21 >> 8) | *pbVar17;
        pbVar17 = pbVar17 + *(int *)pbVar17;
        bVar7 = *pbVar36;
        *pbVar36 = *pbVar36 + bVar27;
        bVar6 = (byte)pbVar17;
        if (CARRY1(bVar7,bVar27)) {
          *pbVar17 = *pbVar17 + bVar6;
          bVar27 = bVar27 | (byte)*puVar24;
          *pbVar36 = *pbVar36 - cVar29;
          *pbVar17 = *pbVar17 + bVar6;
          uVar18 = (undefined3)((uint)pbVar17 >> 8);
          bVar6 = bVar6 | (byte)*puVar24;
          piVar13 = (int *)CONCAT31(uVar18,bVar6);
          pbStack_2c = pbStack_2c + *piVar13;
          *(byte *)piVar13 = (char)*piVar13 + bVar6;
          cVar29 = (char)pbVar36 - *pbStack_c;
          pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                     CONCAT11((char)((uint)pbVar36 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar36 >> 8),cVar29)
                                                       + 0x5f),cVar29));
          *(byte *)piVar13 = (char)*piVar13 + bVar6;
          bVar7 = bVar6 + 0x2a & (byte)*puVar24;
          pbVar12 = pbVar12 + *(int *)(pbStack_2c + 0x5f);
          *(char *)CONCAT31(uVar18,bVar7) = *(char *)CONCAT31(uVar18,bVar7) + bVar7;
          pbVar17 = (byte *)CONCAT31(uVar18,bVar7 + 0x2a);
          *(byte *)puVar24 = (byte)*puVar24 + 0x28;
          *pbVar17 = *pbVar17 + bVar7 + 0x2a;
        }
        else {
          *pbStack_c = *pbStack_c + bVar6;
        }
        pcVar15 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar27,cVar26));
        *pbStack_2c = *pbStack_2c - bVar27;
        *(byte *)puVar24 = (byte)*puVar24 + cVar26;
        bVar7 = (byte)pbVar17 - 0xb;
        pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7);
        if (10 < (byte)pbVar17) {
          *pbVar14 = *pbVar14 | bVar7;
          return pbVar14;
        }
        *(byte *)puVar24 = (byte)*puVar24 + cVar26;
        do {
          bVar7 = pbVar36[-0x23];
          bVar27 = (byte)pbVar14;
          *pbVar14 = *pbVar14 + bVar27;
          bVar6 = pbStack_2c[-0x22];
          *pbVar14 = *pbVar14 + bVar27;
          uVar18 = (undefined3)((uint)pbVar14 >> 8);
          bVar27 = bVar27 | *pbStack_c;
          pbVar17 = (byte *)CONCAT31(uVar18,bVar27);
          cVar29 = (char)pbVar36 - *pbStack_c;
          pbVar36 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar36 >> 0x10),
                                                     CONCAT11((char)((uint)pbVar36 >> 8) + bVar7 |
                                                              bVar6,(char)pbVar36)) >> 8),cVar29);
          cVar26 = (char)pcVar15;
          pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                     CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar17,cVar26));
          *(byte *)puVar24 = (byte)*puVar24 + cVar26;
          bVar6 = bVar27 - *pbVar17;
          pbVar14 = (byte *)CONCAT31(uVar18,bVar6);
          pbStack_c = pbStack_c + (-(uint)(bVar27 < *pbVar17) - *(int *)pbVar14);
          puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 * '\x02');
          *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
          *pbVar12 = *pbVar12 + cVar29;
          bVar7 = *pbVar14;
          *pbVar14 = *pbVar14 + bVar6;
          *puVar24 = (uint)(pbVar14 + (uint)CARRY1(bVar7,bVar6) + *puVar24);
        } while ((POPCOUNT(*puVar24 & 0xff) & 1U) != 0);
code_r0x00403cb7:
        *pbVar14 = *pbVar14 + (char)pbVar14;
        pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar14[(int)pcVar15])
        ;
        bVar37 = false;
        pbVar14 = (byte *)((uint)pbVar14 & 0xffffff00);
        do {
          pbVar12 = pbVar12 + (-(uint)bVar37 - *(int *)pbVar36);
          pcVar11 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),*pcVar15);
          *pcVar11 = *pcVar11 + *pcVar15;
          pbVar14 = (byte *)CONCAT31((int3)((uint)(pcVar11 +
                                                  (pbStack_c[0x2000001] < (byte)((uint)pcVar15 >> 8)
                                                  ) + 0xda7d) >> 8),
                                     ((byte)(pcVar11 +
                                            (pbStack_c[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                            0xda7d) | (byte)*puVar24) + 0x7d);
          pcVar15 = pcVar15 + -1;
          *(byte *)puVar24 = (byte)*puVar24 + (char)pcVar15;
          while( true ) {
            uVar22 = (undefined3)((uint)puVar24 >> 8);
            cVar26 = (char)puVar24 + *(char *)((int)pbVar12 * 2 + 0xa0000e1);
            puVar24 = (uint *)CONCAT31(uVar22,cVar26);
            bVar37 = CARRY1((byte)pbVar14,(byte)*puVar24);
            uVar18 = (undefined3)((uint)pbVar14 >> 8);
            bVar7 = (byte)pbVar14 + (byte)*puVar24;
            pbVar14 = (byte *)CONCAT31(uVar18,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *pbVar14 = *pbVar14 + bVar7;
            cVar29 = (char)pcVar15;
            pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                       CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar12[-0x65],cVar29))
            ;
            bVar6 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar7;
            if (CARRY1(bVar6,bVar7)) {
              *pbVar14 = *pbVar14 + bVar7;
              pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar36 >> 8) | pbStack_2c[-0x1d],
                                                  (char)pbVar36));
              *pbVar14 = *pbVar14 + bVar7;
              bVar37 = false;
              bVar7 = bVar7 | (byte)*puVar24;
              pcVar11 = (char *)CONCAT31(uVar18,bVar7);
              while( true ) {
                bVar6 = (byte)pcVar11;
                uVar18 = (undefined3)((uint)pcVar11 >> 8);
                if (bVar37 == (char)bVar7 < '\0') break;
                *pcVar11 = *pcVar11 + bVar6;
                bVar6 = bVar6 | (byte)*puVar24;
                puVar21 = (uint *)CONCAT31(uVar18,bVar6);
                *pbVar12 = *pbVar12 << 1 | (char)*pbVar12 < '\0';
                uVar1 = *puVar21;
                *(byte *)puVar21 = (byte)*puVar21 + bVar6;
                pbStack_2c = pbStack_2c + (-(uint)CARRY1((byte)uVar1,bVar6) - *puVar21);
                *puVar21 = *puVar21 << 1 | (uint)((int)*puVar21 < 0);
                while( true ) {
                  uVar1 = *puVar24;
                  *(byte *)puVar24 = (byte)*puVar24 + (byte)pcVar15;
                  cVar26 = (char)puVar21 + 'o' + CARRY1((byte)uVar1,(byte)pcVar15);
                  pcVar11 = (char *)CONCAT31((int3)((uint)puVar21 >> 8),cVar26);
                  pcVar15 = (char *)0x20a0000;
                  if ((POPCOUNT(cVar26) & 1U) != 0) break;
                  *pcVar11 = *pcVar11 + cVar26;
                  bVar7 = bRamfe140212;
                  pcVar15 = (char *)0x0;
                  uVar18 = (undefined3)((uint)(pcVar11 + -0x732b0000) >> 8);
                  bVar6 = in(0);
                  puVar21 = (uint *)CONCAT31(uVar18,bVar6);
                  uVar1 = *puVar24;
                  *(byte *)puVar24 = (byte)*puVar24;
                  if (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar24 < '\0') {
                    *(byte *)puVar21 = (byte)*puVar21 + bVar6;
                    bVar6 = bVar6 | (byte)*puVar24;
                    puVar21 = (uint *)CONCAT31(uVar18,bVar6);
                    if ((POPCOUNT(bVar6) & 1U) == 0) {
                      *(byte *)puVar21 = (byte)*puVar21 + bVar6;
                      pcVar15 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar7 | (byte)*puVar21) << 8);
                      *(byte *)puVar21 = (byte)*puVar21 + bVar6;
                      goto code_r0x00403d33;
                    }
                    *(byte *)puVar21 = (byte)*puVar21 + bVar6;
                    puVar21 = (uint *)CONCAT31(uVar18,bVar6 | (byte)*puVar24);
                  }
                }
                *(byte *)puVar24 = (byte)*puVar24;
                bVar37 = SCARRY1((char)puVar24,*pbVar12);
                bVar7 = (char)puVar24 + *pbVar12;
                puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),bVar7);
              }
              if (bVar37 == (char)bVar7 < '\0') {
                *(byte *)puVar24 = (byte)*puVar24 + (char)pcVar15;
                pbVar14 = (byte *)((uint)pcVar11 | 8);
                goto code_r0x00403cb7;
              }
              *pcVar11 = *pcVar11 + bVar6;
              pbVar14 = (byte *)CONCAT31(uVar18,(bVar6 | (byte)*puVar24) + 0x7d);
              pcVar15 = pcVar15 + -1;
              *(byte *)puVar24 = (byte)*puVar24 + (char)pcVar15;
            }
            else {
              *(byte *)puVar24 = (byte)*puVar24 + cVar29;
              puVar24 = (uint *)CONCAT31(uVar22,cVar26 + *(char *)((int)pbVar12 * 2 + 0xa0000e0));
            }
          }
        } while( true );
      }
      *pbVar12 = *pbVar12 + bVar7;
      bVar7 = bVar7 + 0x6f & *(byte *)CONCAT31(uVar18,bVar7 + 0x6f);
      *(byte *)puVar24 = (byte)*puVar24 + (char)puVar21;
      puVar24 = (uint *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + (char)*unaff_EDI);
      *(byte *)(unaff_EDI + 0x5c18000) = (char)unaff_EDI[0x5c18000] - bVar7;
      pcVar15 = (char *)CONCAT31(uVar18,bVar7 - (char)*unaff_EDI);
code_r0x00403b2c:
      bVar7 = (char)pcVar15 - *pcVar15;
      pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar7);
      *pbVar14 = *pbVar14 + bVar7;
      *(byte **)pbVar14 = (byte *)(*(int *)pbVar14 + (int)puVar24);
      *pbVar14 = *pbVar14 + bVar7;
      bVar37 = CARRY1(*pbVar14,bVar7);
      *pbVar14 = *pbVar14 + bVar7;
      pbStack_30 = pbStack_c;
    }
  }
  *pbVar14 = *pbVar14;
  puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(byte)puVar21 | (byte)*puVar24);
  goto code_r0x00403b73;
code_r0x00403d33:
  pbStack_2c = pbStack_2c + -*puVar21;
  do {
    bVar7 = (byte)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
    pbVar12 = pbVar12 + -*(int *)(pbStack_2c + -0x1a);
    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
    bVar7 = bVar7 | (byte)*puVar24;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7);
    *(byte *)puVar21 = (byte)*puVar21 | bVar7;
    bVar7 = (byte)*puVar21;
    pbStack_2c = (byte *)0x2700001;
    while ((POPCOUNT(bVar7) & 1U) == 0) {
      do {
        *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
        bVar7 = (byte)puVar21 | (byte)*puVar24;
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        uVar19 = CONCAT21((short)((uint)pcVar15 >> 0x10),(byte)((uint)pcVar15 >> 8) | bRamfe140212);
        while( true ) {
          pcVar15 = (char *)((uint)uVar19 << 8);
          bVar8 = (byte)puVar21;
          *(byte *)puVar21 = (byte)*puVar21 & bVar8;
          bVar6 = *pbVar36;
          bVar9 = (byte)uVar19;
          bVar27 = *pbVar36;
          *pbVar36 = *pbVar36 + bVar9;
          bVar7 = *pbVar36;
          if (!CARRY1(bVar6,bVar9)) break;
          *(byte *)puVar21 = (byte)*puVar21 + bVar8;
          pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar36 >> 8) | bRam026fffe2,
                                              (char)pbVar36));
          *(byte *)puVar21 = (byte)*puVar21 + bVar8;
          bVar8 = bVar8 | (byte)*puVar24;
          puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar8);
          bVar37 = (POPCOUNT(bVar8) & 1U) == 0;
          while( true ) {
            cVar26 = (char)((uint)pbVar36 >> 8);
            uVar28 = (undefined2)((uint)pbVar36 >> 0x10);
            if (!bVar37) {
              *(byte *)puVar24 = (byte)*puVar24;
              pbVar36 = (byte *)CONCAT22(uVar28,CONCAT11(cVar26 + pbVar36[-0x1f],(char)pbVar36));
              goto code_r0x00403d52;
            }
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            uVar20 = (undefined2)((uint)pcVar15 >> 0x10);
            bVar6 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar21;
            uVar19 = CONCAT21(uVar20,bVar6);
            *puVar21 = *puVar21 & (uint)puVar21;
            *pbVar36 = *pbVar36 + bVar6;
            uVar18 = (undefined3)((uint)puVar21 >> 8);
            bVar7 = (char)puVar21 - bVar6;
            pcVar15 = (char *)CONCAT31(uVar18,bVar7);
            *pcVar15 = *pcVar15 + bVar7;
            bVar7 = bVar7 | (byte)*puVar24;
            puVar21 = (uint *)CONCAT31(uVar18,bVar7);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *(byte *)puVar21 = (byte)*puVar21 + bVar7;
            pcVar15 = (char *)((uint)CONCAT21(uVar20,bVar6 | (byte)*puVar21) << 8);
            *puVar21 = *puVar21 - (int)puVar21;
            *(byte *)puVar24 = (byte)*puVar24;
            pbVar36 = (byte *)CONCAT22(uVar28,CONCAT11(cVar26 + pbVar36[-0x1d],(char)pbVar36));
            do {
              *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
              uVar28 = (undefined2)((uint)puVar24 >> 0x10);
              cVar26 = (char)puVar24;
              bVar7 = (byte)((uint)puVar24 >> 8) | pbVar36[-0x17];
              puVar24 = (uint *)CONCAT22(uVar28,CONCAT11(bVar7,cVar26));
              *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
              pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar36 >> 8) | bRam026fffeb,
                                                  (char)pbVar36));
              do {
                *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
                uVar18 = (undefined3)((uint)puVar21 >> 8);
                bVar27 = (byte)puVar21 | (byte)*puVar24;
                pcVar11 = (char *)CONCAT31(uVar18,bVar27);
                bVar6 = pbVar36[-0x16];
                *pcVar11 = *pcVar11 + bVar27;
                pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                           CONCAT11((char)((uint)pbVar36 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar36));
                *pcVar11 = *pcVar11 + bVar27;
                pbVar17 = (byte *)CONCAT31(uVar18,bVar27 | (byte)*puVar24);
                while( true ) {
                  *pbVar17 = *pbVar17 + (byte)pbVar17;
                  uVar18 = (undefined3)((uint)pbVar17 >> 8);
                  bVar6 = (byte)pbVar17 | (byte)*puVar24;
                  puVar21 = (uint *)CONCAT31(uVar18,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar21 = (byte)*puVar21 + bVar6;
                  bVar27 = pbVar12[-0x14];
                  *(byte *)puVar21 = (byte)*puVar21 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar24;
                  pcVar11 = (char *)CONCAT31(uVar18,bVar6);
                  bVar8 = pbVar36[-0x15];
                  *pcVar11 = *pcVar11 + bVar6;
                  pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),
                                                    (byte)((uint)pcVar15 >> 8) | bVar27 |
                                                    pbVar12[-0x13]) << 8);
                  *pcVar11 = *pcVar11 + bVar6;
                  pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                             CONCAT11((char)((uint)pbVar36 >> 8) + bVar8 |
                                                      bRam026fffef,(char)pbVar36));
                  *pcVar11 = *pcVar11 + bVar6;
                  pbVar17 = (byte *)CONCAT31(uVar18,bVar6 | (byte)*puVar24);
                  do {
                    do {
                      bVar27 = (byte)pbVar17;
                      *pbVar17 = *pbVar17 + bVar27;
                      cVar31 = (char)pbVar36;
                      pbVar36 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar36 >> 8) | *pbVar17,
                                                          cVar31));
                      *pbVar17 = bVar27;
                      *pbVar17 = *pbVar17 + bVar27;
                      cVar29 = (char)((uint)pcVar15 >> 8) + *pbVar17;
                      pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),cVar29) << 8)
                      ;
                      uVar18 = (undefined3)((uint)pbVar17 >> 8);
                      bVar27 = bVar27 & *pbVar17;
                      pbVar17 = (byte *)CONCAT31(uVar18,bVar27);
                      bVar6 = *pbVar36;
                      *pbVar36 = *pbVar36 + cVar29;
                    } while (SCARRY1(bVar6,cVar29) == (char)*pbVar36 < '\0');
                    *pbVar17 = *pbVar17 + bVar27;
                    bVar27 = bVar27 | (byte)*puVar24;
                    pbVar17 = (byte *)CONCAT31(uVar18,bVar27);
                    if ((POPCOUNT(bVar27) & 1U) == 0) {
                      *pbVar17 = *pbVar17 + bVar27;
                      *pbVar17 = *pbVar17 + bVar27;
                      cVar26 = cVar26 - bVar7;
                      pbVar36 = (byte *)CONCAT31((int3)((uint)puVar24 >> 8),cVar26);
                      *pbVar17 = *pbVar17 + bVar27;
                      bRam0312382b = bRam0312382b | *pbVar36;
                      while( true ) {
                        bVar6 = (byte)pbVar17;
                        *pbVar17 = *pbVar17 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar12 + 0x21b0000)[(int)pbVar17];
                        uVar18 = (undefined3)((uint)pbVar17 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar36 = *pbVar36 + bRam0312382b;
                        pbVar17 = (byte *)CONCAT31(uVar18,bVar6 | *pbStack_c);
                      }
                      *pbVar17 = *pbVar17 + bVar6;
                      bVar6 = bVar6 | *pbStack_c;
                      pcVar15 = (char *)CONCAT31(uVar18,bVar6);
                      out(*(undefined4 *)pbStack_c,(short)pbVar36);
                      *pcVar15 = *pcVar15 + bVar6;
                      uVar20 = CONCAT11(bVar7 | bRam6f0a002b,cVar26);
                      pcVar11 = (char *)CONCAT22(uVar28,uVar20);
                      *pcVar15 = *pcVar15 + bVar6;
                      *pcVar11 = *pcVar11 + bRam0312382b;
                      out(*(undefined4 *)(pbStack_c + 4),uVar20);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar31 + *pcVar15);
                  } while (SCARRY1(cVar31,*pcVar15) != (char)(cVar31 + *pcVar15) < '\0');
                }
                uVar1 = *puVar24;
                *(byte *)puVar24 = (byte)*puVar24;
              } while (SCARRY1((byte)uVar1,'\0') != (char)(byte)*puVar24 < '\0');
              *(byte *)puVar24 = (byte)*puVar24;
              *pcVar15 = *pcVar15 - (char)pbVar36;
              *(byte *)puVar21 = (byte)*puVar21 + bVar6;
              bVar6 = bVar6 | (byte)*puVar24;
              puVar21 = (uint *)CONCAT31(uVar18,bVar6);
              bVar37 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar37);
          }
        }
      } while (SCARRY1(bVar27,bVar9));
    }
    *pbVar36 = *pbVar36 + (char)((uint)pcVar15 >> 8);
    *pbVar12 = *pbVar12 - (char)pbVar36;
  } while( true );
}


