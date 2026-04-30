/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403b49
 * Raw Name    : <GetUnifiedSettingInfos>b__b
 * Demangled   : <GetUnifiedSettingInfos>b__b
 * Prototype   : byte * <GetUnifiedSettingInfos>b__b(byte * s, byte * param_2)
 * Local Vars  : uVar2, pcVar1, bVar4, uVar3, bVar6, bVar5, piVar7, in_EAX, pbVar9, pbVar8, puVar11, pcVar10, s, extraout_ECX, uVar12, bVar14, pcVar13, uVar16, bVar15, puVar18, cVar17, uVar20, uVar19, cVar22, cVar21, pbVar23, unaff_EBX, unaff_ESI, unaff_EBP, pbVar24, unaff_EDI, uVar26, bVar25, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall <GetUnifiedSettingInfos>b__b(byte *s,byte *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined3 uVar12;
  byte *in_EAX;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *puVar11;
  byte bVar14;
  byte bVar15;
  byte *extraout_ECX;
  char *pcVar13;
  undefined2 uVar16;
  char cVar17;
  uint *puVar18;
  undefined3 uVar19;
  undefined2 uVar20;
  char cVar21;
  char cVar22;
  byte *pbVar23;
  int unaff_EBX;
  char *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar24;
  bool bVar25;
  undefined8 uVar26;
  int *piVar7;
  
                    /* .NET CLR Managed Code */
  pbVar23 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x39),
                                      (char)unaff_EBX));
  while( true ) {
    pbVar24 = unaff_ESI;
    *in_EAX = *in_EAX + (byte)in_EAX;
    bVar4 = (byte)in_EAX | *pbVar23;
    piVar7 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
    if (bVar4 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
      *(byte *)piVar7 = (char)*piVar7 + bVar4;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),
                           CONCAT11((byte)((uint)s >> 8) | *param_2,(char)s));
      pbVar24 = pbVar24 + *piVar7;
      pcVar13 = (char *)((int)piVar7 + *piVar7);
      uVar12 = (undefined3)((uint)pcVar13 >> 8);
      bVar5 = (char)pcVar13 - *pcVar13;
      pbVar8 = (byte *)CONCAT31(uVar12,bVar5);
      bVar4 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar5;
      piVar7 = (int *)CONCAT31(uVar12,bVar5 - CARRY1(bVar4,bVar5));
    }
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    unaff_ESI = pbVar24 + 4;
    out(*(int *)pbVar24,(short)param_2);
    pbVar8 = (byte *)(((uint)piVar7 >> 8) * 0x100);
    *param_2 = *param_2 + (byte)s;
    bVar4 = (char)param_2 - *pbVar23;
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
    *pbVar23 = *pbVar23;
    *param_2 = *param_2 + (char)((uint)s >> 8);
    *pbVar8 = *pbVar8;
    pcVar13 = (char *)(((uint)piVar7 >> 8) * 0x200);
    *pcVar13 = *pcVar13 + (char)pbVar23;
    bVar25 = CARRY1(*s,bVar4);
    *s = *s + bVar4;
    pcVar13 = unaff_EDI;
    if (bVar25) break;
    while( true ) {
      *(byte **)pbVar8 = pbVar8 + (uint)bVar25 + *(int *)pbVar8;
      unaff_EDI = pcVar13 + 4;
      pbVar8[(int)param_2] = pbVar8[(int)param_2] + (char)pbVar23;
      *pbVar8 = *pbVar8 + (char)pbVar8;
      *(byte **)unaff_ESI = pbVar23 + *(int *)unaff_ESI;
      bVar4 = (byte)((uint)s >> 8);
      cVar17 = (char)s;
      s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar4 + *pbVar8,cVar17));
      in_EAX = pbVar8 + (uint)CARRY1(bVar4,*pbVar8) + *(int *)pbVar8;
      *param_2 = *param_2 + cVar17;
      cVar21 = (char)pbVar23 - pbVar24[6];
      pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar21);
      if ((POPCOUNT(cVar21) & 1U) == 0) break;
      pbVar23 = (byte *)((uint)pbVar23 | (uint)unaff_ESI);
      bVar4 = (char)in_EAX + 2;
      uVar12 = (undefined3)((uint)in_EAX >> 8);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        *param_2 = *param_2 + cVar17;
        pbVar8 = (byte *)CONCAT31(uVar12,bVar4 | *unaff_ESI);
        goto code_r0x00403b73;
      }
      *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
      bVar4 = (char)in_EAX + 0x71;
      bVar4 = bVar4 & *(byte *)CONCAT31(uVar12,bVar4);
      *param_2 = *param_2 + cVar17;
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *unaff_EDI);
      pcVar13[0x17060004] = pcVar13[0x17060004] - bVar4;
      cVar17 = bVar4 - *unaff_EDI;
      bVar4 = cVar17 - *(char *)CONCAT31(uVar12,cVar17);
      pbVar8 = (byte *)CONCAT31(uVar12,bVar4);
      *pbVar8 = *pbVar8 + bVar4;
      *(byte **)pbVar8 = param_2 + *(int *)pbVar8;
      *pbVar8 = *pbVar8 + bVar4;
      bVar25 = CARRY1(*pbVar8,bVar4);
      *pbVar8 = *pbVar8 + bVar4;
      pcVar13 = unaff_EDI;
    }
  }
  *pbVar8 = *pbVar8;
  s = (byte *)CONCAT31((int3)((uint)s >> 8),(byte)s | *param_2);
code_r0x00403b73:
  pbVar24 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + -0x37));
  *pbVar8 = *pbVar8 + (byte)pbVar8;
  uVar12 = (undefined3)((uint)pbVar8 >> 8);
  bVar4 = (byte)pbVar8 | *param_2;
  pcVar13 = (char *)CONCAT31(uVar12,bVar4);
  uVar26 = CONCAT44(param_2,pcVar13);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *pcVar13 = *pcVar13 + bVar4;
    *unaff_ESI = *unaff_ESI + 1;
    return (byte *)CONCAT31(uVar12,bVar4 + 6);
  }
  bVar4 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + 1;
  pcVar1 = (code *)swi(4);
  if (SCARRY1(bVar4,'\x01')) {
    uVar26 = (*pcVar1)();
    s = extraout_ECX;
  }
  pbVar8 = (byte *)uVar26;
  *pbVar8 = *pbVar8 + (char)uVar26;
  cVar21 = (char)((ulonglong)uVar26 >> 0x20);
  puVar18 = (uint *)CONCAT22((short)((ulonglong)uVar26 >> 0x30),
                             CONCAT11((byte)((ulonglong)uVar26 >> 0x28) | pbVar23[0x2f],cVar21));
  *pbVar8 = *pbVar8 + (char)uVar26;
  cVar17 = (char)s;
  bVar14 = (byte)((uint)s >> 8) | *pbVar8;
  pbVar8 = pbVar8 + *(int *)pbVar8;
  bVar4 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar14;
  bVar5 = (byte)pbVar8;
  if (CARRY1(bVar4,bVar14)) {
    *pbVar8 = *pbVar8 + bVar5;
    bVar14 = bVar14 | (byte)*puVar18;
    *pbVar23 = *pbVar23 - cVar21;
    *pbVar8 = *pbVar8 + bVar5;
    uVar12 = (undefined3)((uint)pbVar8 >> 8);
    bVar5 = bVar5 | (byte)*puVar18;
    piVar7 = (int *)CONCAT31(uVar12,bVar5);
    unaff_EBP = unaff_EBP + *piVar7;
    *(byte *)piVar7 = (char)*piVar7 + bVar5;
    cVar21 = (char)pbVar23 - *unaff_ESI;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) +
                                        *(char *)(CONCAT31((int3)((uint)pbVar23 >> 8),cVar21) + 0x5f
                                                 ),cVar21));
    *(byte *)piVar7 = (char)*piVar7 + bVar5;
    bVar4 = bVar5 + 0x2a & (byte)*puVar18;
    pbVar24 = pbVar24 + *(int *)(unaff_EBP + 0x5f);
    *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
    pbVar8 = (byte *)CONCAT31(uVar12,bVar4 + 0x2a);
    *(byte *)puVar18 = (byte)*puVar18 + 0x28;
    *pbVar8 = *pbVar8 + bVar4 + 0x2a;
  }
  else {
    *unaff_ESI = *unaff_ESI + bVar5;
  }
  pcVar13 = (char *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar14,cVar17));
  *unaff_EBP = *unaff_EBP - bVar14;
  *(byte *)puVar18 = (byte)*puVar18 + cVar17;
  bVar4 = (byte)pbVar8 - 0xb;
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar4);
  if (10 < (byte)pbVar8) {
    *pbVar9 = *pbVar9 | bVar4;
    return pbVar9;
  }
  *(byte *)puVar18 = (byte)*puVar18 + cVar17;
  do {
    bVar4 = pbVar23[-0x23];
    bVar14 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar14;
    bVar5 = unaff_EBP[-0x22];
    *pbVar9 = *pbVar9 + bVar14;
    uVar12 = (undefined3)((uint)pbVar9 >> 8);
    bVar14 = bVar14 | *unaff_ESI;
    pbVar8 = (byte *)CONCAT31(uVar12,bVar14);
    cVar21 = (char)pbVar23 - *unaff_ESI;
    pbVar23 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar23 >> 0x10),
                                               CONCAT11((char)((uint)pbVar23 >> 8) + bVar4 | bVar5,
                                                        (char)pbVar23)) >> 8),cVar21);
    cVar17 = (char)pcVar13;
    pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                               CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar8,cVar17));
    *(byte *)puVar18 = (byte)*puVar18 + cVar17;
    bVar5 = bVar14 - *pbVar8;
    pbVar9 = (byte *)CONCAT31(uVar12,bVar5);
    unaff_ESI = unaff_ESI + (-(uint)(bVar14 < *pbVar8) - *(int *)pbVar9);
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 * '\x02');
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    *pbVar24 = *pbVar24 + cVar21;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar5;
    *puVar18 = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar5) + *puVar18);
  } while ((POPCOUNT(*puVar18 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *pbVar9 = *pbVar9 + (char)pbVar9;
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar9[(int)pcVar13]);
  bVar25 = false;
  pbVar9 = (byte *)((uint)pbVar9 & 0xffffff00);
  do {
    pbVar24 = pbVar24 + (-(uint)bVar25 - *(int *)pbVar23);
    pcVar10 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),*pcVar13);
    *pcVar10 = *pcVar10 + *pcVar13;
    pbVar9 = (byte *)CONCAT31((int3)((uint)(pcVar10 +
                                           (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                           0xda7d) >> 8),
                              ((byte)(pcVar10 +
                                     (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)) + 0xda7d) |
                              (byte)*puVar18) + 0x7d);
    pcVar13 = pcVar13 + -1;
    *(byte *)puVar18 = (byte)*puVar18 + (char)pcVar13;
    while( true ) {
      uVar19 = (undefined3)((uint)puVar18 >> 8);
      cVar17 = (char)puVar18 + *(char *)((int)pbVar24 * 2 + 0xa0000e1);
      puVar18 = (uint *)CONCAT31(uVar19,cVar17);
      bVar25 = CARRY1((byte)pbVar9,(byte)*puVar18);
      uVar12 = (undefined3)((uint)pbVar9 >> 8);
      bVar4 = (byte)pbVar9 + (byte)*puVar18;
      pbVar9 = (byte *)CONCAT31(uVar12,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) break;
      *pbVar9 = *pbVar9 + bVar4;
      cVar21 = (char)pcVar13;
      pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar24[-0x65],cVar21));
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      if (CARRY1(bVar5,bVar4)) {
        *pbVar9 = *pbVar9 + bVar4;
        pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar23 >> 8) | unaff_EBP[-0x1d],
                                            (char)pbVar23));
        *pbVar9 = *pbVar9 + bVar4;
        bVar25 = false;
        bVar4 = bVar4 | (byte)*puVar18;
        pcVar10 = (char *)CONCAT31(uVar12,bVar4);
        while( true ) {
          bVar5 = (byte)pcVar10;
          uVar12 = (undefined3)((uint)pcVar10 >> 8);
          if (bVar25 == (char)bVar4 < '\0') break;
          *pcVar10 = *pcVar10 + bVar5;
          bVar5 = bVar5 | (byte)*puVar18;
          puVar11 = (uint *)CONCAT31(uVar12,bVar5);
          *pbVar24 = *pbVar24 << 1 | (char)*pbVar24 < '\0';
          uVar3 = *puVar11;
          *(byte *)puVar11 = (byte)*puVar11 + bVar5;
          unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar3,bVar5) - *puVar11);
          *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
          while( true ) {
            uVar3 = *puVar18;
            *(byte *)puVar18 = (byte)*puVar18 + (byte)pcVar13;
            cVar17 = (char)puVar11 + 'o' + CARRY1((byte)uVar3,(byte)pcVar13);
            pcVar10 = (char *)CONCAT31((int3)((uint)puVar11 >> 8),cVar17);
            pcVar13 = (char *)0x20a0000;
            if ((POPCOUNT(cVar17) & 1U) != 0) break;
            *pcVar10 = *pcVar10 + cVar17;
            bVar4 = bRamfe140212;
            pcVar13 = (char *)0x0;
            uVar12 = (undefined3)((uint)(pcVar10 + -0x732b0000) >> 8);
            bVar5 = in(0);
            puVar11 = (uint *)CONCAT31(uVar12,bVar5);
            uVar3 = *puVar18;
            *(byte *)puVar18 = (byte)*puVar18;
            if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar18 < '\0') {
              *(byte *)puVar11 = (byte)*puVar11 + bVar5;
              bVar5 = bVar5 | (byte)*puVar18;
              puVar11 = (uint *)CONCAT31(uVar12,bVar5);
              if ((POPCOUNT(bVar5) & 1U) == 0) {
                *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar11) << 8);
                *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                goto code_r0x00403d33;
              }
              *(byte *)puVar11 = (byte)*puVar11 + bVar5;
              puVar11 = (uint *)CONCAT31(uVar12,bVar5 | (byte)*puVar18);
            }
          }
          *(byte *)puVar18 = (byte)*puVar18;
          bVar25 = SCARRY1((char)puVar18,*pbVar24);
          bVar4 = (char)puVar18 + *pbVar24;
          puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),bVar4);
        }
        if (bVar25 == (char)bVar4 < '\0') {
          *(byte *)puVar18 = (byte)*puVar18 + (char)pcVar13;
          pbVar9 = (byte *)((uint)pcVar10 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar10 = *pcVar10 + bVar5;
        pbVar9 = (byte *)CONCAT31(uVar12,(bVar5 | (byte)*puVar18) + 0x7d);
        pcVar13 = pcVar13 + -1;
        *(byte *)puVar18 = (byte)*puVar18 + (char)pcVar13;
      }
      else {
        *(byte *)puVar18 = (byte)*puVar18 + cVar21;
        puVar18 = (uint *)CONCAT31(uVar19,cVar17 + *(char *)((int)pbVar24 * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar11;
  do {
    bVar4 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    pbVar24 = pbVar24 + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    bVar4 = bVar4 | (byte)*puVar18;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
    *(byte *)puVar11 = (byte)*puVar11 | bVar4;
    bVar4 = (byte)*puVar11;
    unaff_EBP = (char *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
        bVar4 = (byte)puVar11 | (byte)*puVar18;
        puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        uVar2 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        while( true ) {
          pcVar13 = (char *)((uint)uVar2 << 8);
          bVar6 = (byte)puVar11;
          *(byte *)puVar11 = (byte)*puVar11 & bVar6;
          bVar5 = *pbVar23;
          bVar15 = (byte)uVar2;
          bVar14 = *pbVar23;
          *pbVar23 = *pbVar23 + bVar15;
          bVar4 = *pbVar23;
          if (!CARRY1(bVar5,bVar15)) break;
          *(byte *)puVar11 = (byte)*puVar11 + bVar6;
          pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar23 >> 8) | bRam026fffe2,
                                              (char)pbVar23));
          *(byte *)puVar11 = (byte)*puVar11 + bVar6;
          bVar6 = bVar6 | (byte)*puVar18;
          puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6);
          bVar25 = (POPCOUNT(bVar6) & 1U) == 0;
          while( true ) {
            cVar17 = (char)((uint)pbVar23 >> 8);
            uVar20 = (undefined2)((uint)pbVar23 >> 0x10);
            if (!bVar25) {
              *(byte *)puVar18 = (byte)*puVar18;
              pbVar23 = (byte *)CONCAT22(uVar20,CONCAT11(cVar17 + pbVar23[-0x1f],(char)pbVar23));
              goto code_r0x00403d52;
            }
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
            uVar16 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar5 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar11;
            uVar2 = CONCAT21(uVar16,bVar5);
            *puVar11 = *puVar11 & (uint)puVar11;
            *pbVar23 = *pbVar23 + bVar5;
            uVar12 = (undefined3)((uint)puVar11 >> 8);
            bVar4 = (char)puVar11 - bVar5;
            pcVar13 = (char *)CONCAT31(uVar12,bVar4);
            *pcVar13 = *pcVar13 + bVar4;
            bVar4 = bVar4 | (byte)*puVar18;
            puVar11 = (uint *)CONCAT31(uVar12,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar11 = (byte)*puVar11 + bVar4;
            pcVar13 = (char *)((uint)CONCAT21(uVar16,bVar5 | (byte)*puVar11) << 8);
            *puVar11 = *puVar11 - (int)puVar11;
            *(byte *)puVar18 = (byte)*puVar18;
            pbVar23 = (byte *)CONCAT22(uVar20,CONCAT11(cVar17 + pbVar23[-0x1d],(char)pbVar23));
            do {
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              uVar20 = (undefined2)((uint)puVar18 >> 0x10);
              cVar17 = (char)puVar18;
              bVar4 = (byte)((uint)puVar18 >> 8) | pbVar23[-0x17];
              puVar18 = (uint *)CONCAT22(uVar20,CONCAT11(bVar4,cVar17));
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar23 >> 8) | bRam026fffeb,
                                                  (char)pbVar23));
              do {
                *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
                uVar12 = (undefined3)((uint)puVar11 >> 8);
                bVar14 = (byte)puVar11 | (byte)*puVar18;
                pcVar10 = (char *)CONCAT31(uVar12,bVar14);
                bVar5 = pbVar23[-0x16];
                *pcVar10 = *pcVar10 + bVar14;
                pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                           CONCAT11((char)((uint)pbVar23 >> 8) + bVar5 |
                                                    bRam026fffec,(char)pbVar23));
                *pcVar10 = *pcVar10 + bVar14;
                pbVar8 = (byte *)CONCAT31(uVar12,bVar14 | (byte)*puVar18);
                while( true ) {
                  *pbVar8 = *pbVar8 + (byte)pbVar8;
                  uVar12 = (undefined3)((uint)pbVar8 >> 8);
                  bVar5 = (byte)pbVar8 | (byte)*puVar18;
                  puVar11 = (uint *)CONCAT31(uVar12,bVar5);
                  if ((POPCOUNT(bVar5) & 1U) != 0) break;
                  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                  bVar14 = pbVar24[-0x14];
                  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                  bVar5 = bVar5 | (byte)*puVar18;
                  pcVar10 = (char *)CONCAT31(uVar12,bVar5);
                  bVar6 = pbVar23[-0x15];
                  *pcVar10 = *pcVar10 + bVar5;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar14 |
                                                    pbVar24[-0x13]) << 8);
                  *pcVar10 = *pcVar10 + bVar5;
                  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                             CONCAT11((char)((uint)pbVar23 >> 8) + bVar6 |
                                                      bRam026fffef,(char)pbVar23));
                  *pcVar10 = *pcVar10 + bVar5;
                  pbVar8 = (byte *)CONCAT31(uVar12,bVar5 | (byte)*puVar18);
                  do {
                    do {
                      bVar14 = (byte)pbVar8;
                      *pbVar8 = *pbVar8 + bVar14;
                      cVar22 = (char)pbVar23;
                      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar8,
                                                          cVar22));
                      *pbVar8 = bVar14;
                      *pbVar8 = *pbVar8 + bVar14;
                      cVar21 = (char)((uint)pcVar13 >> 8) + *pbVar8;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar21) << 8)
                      ;
                      uVar12 = (undefined3)((uint)pbVar8 >> 8);
                      bVar14 = bVar14 & *pbVar8;
                      pbVar8 = (byte *)CONCAT31(uVar12,bVar14);
                      bVar5 = *pbVar23;
                      *pbVar23 = *pbVar23 + cVar21;
                    } while (SCARRY1(bVar5,cVar21) == (char)*pbVar23 < '\0');
                    *pbVar8 = *pbVar8 + bVar14;
                    bVar14 = bVar14 | (byte)*puVar18;
                    pbVar8 = (byte *)CONCAT31(uVar12,bVar14);
                    if ((POPCOUNT(bVar14) & 1U) == 0) {
                      *pbVar8 = *pbVar8 + bVar14;
                      *pbVar8 = *pbVar8 + bVar14;
                      cVar17 = cVar17 - bVar4;
                      pbVar23 = (byte *)CONCAT31((int3)((uint)puVar18 >> 8),cVar17);
                      *pbVar8 = *pbVar8 + bVar14;
                      bRam0312382b = bRam0312382b | *pbVar23;
                      while( true ) {
                        bVar5 = (byte)pbVar8;
                        *pbVar8 = *pbVar8 + bVar5;
                        bRam0312382b = bRam0312382b | (pbVar24 + 0x21b0000)[(int)pbVar8];
                        uVar12 = (undefined3)((uint)pbVar8 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar23 = *pbVar23 + bRam0312382b;
                        pbVar8 = (byte *)CONCAT31(uVar12,bVar5 | *unaff_ESI);
                      }
                      *pbVar8 = *pbVar8 + bVar5;
                      bVar5 = bVar5 | *unaff_ESI;
                      pcVar13 = (char *)CONCAT31(uVar12,bVar5);
                      out(*(int *)unaff_ESI,(short)pbVar23);
                      *pcVar13 = *pcVar13 + bVar5;
                      uVar16 = CONCAT11(bVar4 | bRam6f0a002b,cVar17);
                      pcVar10 = (char *)CONCAT22(uVar20,uVar16);
                      *pcVar13 = *pcVar13 + bVar5;
                      *pcVar10 = *pcVar10 + bRam0312382b;
                      out(*(int *)(unaff_ESI + 4),uVar16);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),cVar22 + *pcVar13);
                  } while (SCARRY1(cVar22,*pcVar13) != (char)(cVar22 + *pcVar13) < '\0');
                }
                uVar3 = *puVar18;
                *(byte *)puVar18 = (byte)*puVar18;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar18 < '\0');
              *(byte *)puVar18 = (byte)*puVar18;
              *pcVar13 = *pcVar13 - (char)pbVar23;
              *(byte *)puVar11 = (byte)*puVar11 + bVar5;
              bVar5 = bVar5 | (byte)*puVar18;
              puVar11 = (uint *)CONCAT31(uVar12,bVar5);
              bVar25 = (POPCOUNT(bVar5) & 1U) == 0;
            } while (bVar25);
          }
        }
      } while (SCARRY1(bVar14,bVar15));
    }
    *pbVar23 = *pbVar23 + (char)((uint)pcVar13 >> 8);
    *pbVar24 = *pbVar24 - (char)pbVar23;
  } while( true );
}


