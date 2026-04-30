/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403b6c
 * Raw Name    : GetUnifiedSettingInfos
 * Demangled   : GetUnifiedSettingInfos
 * Prototype   : byte * GetUnifiedSettingInfos(byte * settingMapper, byte * param_2)
 * Local Vars  : pcVar1, uVar2, uVar3, bVar4, bVar5, bVar6, param_2, in_EAX, piVar7, pbVar8, pbVar9, pcVar10, puVar11, uVar12, extraout_ECX, pcVar13, bVar14, bVar15, uVar16, uVar17, cVar18, puVar19, uVar20, cVar21, cVar22, unaff_EBX, unaff_EBP, unaff_ESI, unaff_EDI, pbVar23, in_CF, bVar24, uVar25, settingMapper
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall GetUnifiedSettingInfos(byte *settingMapper,byte *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  undefined3 uVar12;
  byte *in_EAX;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *puVar11;
  byte bVar14;
  byte bVar15;
  undefined2 uVar16;
  byte *extraout_ECX;
  char *pcVar13;
  undefined2 uVar17;
  char cVar18;
  uint *puVar19;
  undefined3 uVar20;
  char cVar21;
  char cVar22;
  byte *unaff_EBX;
  char *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar23;
  byte in_CF;
  bool bVar24;
  undefined8 uVar25;
  
  do {
    pcVar13 = unaff_EDI;
                    /* .NET CLR Managed Code */
    if ((bool)in_CF) {
      *in_EAX = *in_EAX + (char)in_EAX;
      settingMapper =
           (byte *)CONCAT31((int3)((uint)settingMapper >> 8),(byte)settingMapper | *param_2);
code_r0x00403b73:
      pbVar23 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + -0x37));
      *in_EAX = *in_EAX + (byte)in_EAX;
      uVar12 = (undefined3)((uint)in_EAX >> 8);
      bVar4 = (byte)in_EAX | *param_2;
      pcVar13 = (char *)CONCAT31(uVar12,bVar4);
      uVar25 = CONCAT44(param_2,pcVar13);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pcVar13 = *pcVar13 + bVar4;
        *unaff_ESI = *unaff_ESI + 1;
        return (byte *)CONCAT31(uVar12,bVar4 + 6);
      }
      bVar4 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(bVar4,'\x01')) {
        uVar25 = (*pcVar1)();
        settingMapper = extraout_ECX;
      }
      pbVar8 = (byte *)uVar25;
      *pbVar8 = *pbVar8 + (char)uVar25;
      cVar21 = (char)((ulonglong)uVar25 >> 0x20);
      puVar19 = (uint *)CONCAT22((short)((ulonglong)uVar25 >> 0x30),
                                 CONCAT11((byte)((ulonglong)uVar25 >> 0x28) | unaff_EBX[0x2f],cVar21
                                         ));
      *pbVar8 = *pbVar8 + (char)uVar25;
      cVar18 = (char)settingMapper;
      bVar14 = (byte)((uint)settingMapper >> 8) | *pbVar8;
      pbVar8 = pbVar8 + *(int *)pbVar8;
      bVar4 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar14;
      bVar5 = (byte)pbVar8;
      if (CARRY1(bVar4,bVar14)) {
        *pbVar8 = *pbVar8 + bVar5;
        bVar14 = bVar14 | (byte)*puVar19;
        *unaff_EBX = *unaff_EBX - cVar21;
        *pbVar8 = *pbVar8 + bVar5;
        uVar12 = (undefined3)((uint)pbVar8 >> 8);
        bVar5 = bVar5 | (byte)*puVar19;
        piVar7 = (int *)CONCAT31(uVar12,bVar5);
        unaff_EBP = unaff_EBP + *piVar7;
        *(byte *)piVar7 = (char)*piVar7 + bVar5;
        cVar21 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar21
                                                                ) + 0x5f),cVar21));
        *(byte *)piVar7 = (char)*piVar7 + bVar5;
        bVar4 = bVar5 + 0x2a & (byte)*puVar19;
        pbVar23 = pbVar23 + *(int *)(unaff_EBP + 0x5f);
        *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
        pbVar8 = (byte *)CONCAT31(uVar12,bVar4 + 0x2a);
        *(byte *)puVar19 = (byte)*puVar19 + 0x28;
        *pbVar8 = *pbVar8 + bVar4 + 0x2a;
      }
      else {
        *unaff_ESI = *unaff_ESI + bVar5;
      }
      pcVar13 = (char *)CONCAT22((short)((uint)settingMapper >> 0x10),CONCAT11(bVar14,cVar18));
      *unaff_EBP = *unaff_EBP - bVar14;
      *(byte *)puVar19 = (byte)*puVar19 + cVar18;
      bVar4 = (byte)pbVar8 - 0xb;
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar4);
      if (10 < (byte)pbVar8) {
        *pbVar9 = *pbVar9 | bVar4;
        return pbVar9;
      }
      *(byte *)puVar19 = (byte)*puVar19 + cVar18;
      do {
        bVar4 = unaff_EBX[-0x23];
        bVar14 = (byte)pbVar9;
        *pbVar9 = *pbVar9 + bVar14;
        bVar5 = unaff_EBP[-0x22];
        *pbVar9 = *pbVar9 + bVar14;
        uVar12 = (undefined3)((uint)pbVar9 >> 8);
        bVar14 = bVar14 | *unaff_ESI;
        pbVar8 = (byte *)CONCAT31(uVar12,bVar14);
        cVar21 = (char)unaff_EBX - *unaff_ESI;
        unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                     CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                              bVar5,(char)unaff_EBX)) >> 8),cVar21);
        cVar18 = (char)pcVar13;
        pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                   CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar8,cVar18));
        *(byte *)puVar19 = (byte)*puVar19 + cVar18;
        bVar5 = bVar14 - *pbVar8;
        pbVar9 = (byte *)CONCAT31(uVar12,bVar5);
        unaff_ESI = unaff_ESI + (-(uint)(bVar14 < *pbVar8) - *(int *)pbVar9);
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 * '\x02');
        *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
        *pbVar23 = *pbVar23 + cVar21;
        bVar4 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar5;
        *puVar19 = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar5) + *puVar19);
      } while ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0);
code_r0x00403cb7:
      *pbVar9 = *pbVar9 + (char)pbVar9;
      pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar9[(int)pcVar13]);
      bVar24 = false;
      pbVar9 = (byte *)((uint)pbVar9 & 0xffffff00);
      do {
        pbVar23 = pbVar23 + (-(uint)bVar24 - *(int *)unaff_EBX);
        pcVar10 = (char *)CONCAT31((int3)((uint)pbVar9 >> 8),*pcVar13);
        *pcVar10 = *pcVar10 + *pcVar13;
        pbVar9 = (byte *)CONCAT31((int3)((uint)(pcVar10 +
                                               (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                               0xda7d) >> 8),
                                  ((byte)(pcVar10 +
                                         (unaff_ESI[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                         0xda7d) | (byte)*puVar19) + 0x7d);
        pcVar13 = pcVar13 + -1;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar13;
        while( true ) {
          uVar20 = (undefined3)((uint)puVar19 >> 8);
          cVar18 = (char)puVar19 + *(char *)((int)pbVar23 * 2 + 0xa0000e1);
          puVar19 = (uint *)CONCAT31(uVar20,cVar18);
          bVar24 = CARRY1((byte)pbVar9,(byte)*puVar19);
          uVar12 = (undefined3)((uint)pbVar9 >> 8);
          bVar4 = (byte)pbVar9 + (byte)*puVar19;
          pbVar9 = (byte *)CONCAT31(uVar12,bVar4);
          if ((POPCOUNT(bVar4) & 1U) != 0) break;
          *pbVar9 = *pbVar9 + bVar4;
          cVar21 = (char)pcVar13;
          pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar23[-0x65],cVar21));
          bVar5 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar4;
          if (CARRY1(bVar5,bVar4)) {
            *pbVar9 = *pbVar9 + bVar4;
            unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x1d],
                                                  (char)unaff_EBX));
            *pbVar9 = *pbVar9 + bVar4;
            bVar24 = false;
            bVar4 = bVar4 | (byte)*puVar19;
            pcVar10 = (char *)CONCAT31(uVar12,bVar4);
            while( true ) {
              bVar5 = (byte)pcVar10;
              uVar12 = (undefined3)((uint)pcVar10 >> 8);
              if (bVar24 == (char)bVar4 < '\0') break;
              *pcVar10 = *pcVar10 + bVar5;
              bVar5 = bVar5 | (byte)*puVar19;
              puVar11 = (uint *)CONCAT31(uVar12,bVar5);
              *pbVar23 = *pbVar23 << 1 | (char)*pbVar23 < '\0';
              uVar3 = *puVar11;
              *(byte *)puVar11 = (byte)*puVar11 + bVar5;
              unaff_EBP = unaff_EBP + (-(uint)CARRY1((byte)uVar3,bVar5) - *puVar11);
              *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
              while( true ) {
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19 + (byte)pcVar13;
                cVar18 = (char)puVar11 + 'o' + CARRY1((byte)uVar3,(byte)pcVar13);
                pcVar10 = (char *)CONCAT31((int3)((uint)puVar11 >> 8),cVar18);
                pcVar13 = (char *)0x20a0000;
                if ((POPCOUNT(cVar18) & 1U) != 0) break;
                *pcVar10 = *pcVar10 + cVar18;
                bVar4 = bRamfe140212;
                pcVar13 = (char *)0x0;
                uVar12 = (undefined3)((uint)(pcVar10 + -0x732b0000) >> 8);
                bVar5 = in(0);
                puVar11 = (uint *)CONCAT31(uVar12,bVar5);
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
                if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0') {
                  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                  bVar5 = bVar5 | (byte)*puVar19;
                  puVar11 = (uint *)CONCAT31(uVar12,bVar5);
                  if ((POPCOUNT(bVar5) & 1U) == 0) {
                    *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                    pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar11) << 8);
                    *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                    goto code_r0x00403d33;
                  }
                  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                  puVar11 = (uint *)CONCAT31(uVar12,bVar5 | (byte)*puVar19);
                }
              }
              *(byte *)puVar19 = (byte)*puVar19;
              bVar24 = SCARRY1((char)puVar19,*pbVar23);
              bVar4 = (char)puVar19 + *pbVar23;
              puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar4);
            }
            if (bVar24 == (char)bVar4 < '\0') {
              *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar13;
              pbVar9 = (byte *)((uint)pcVar10 | 8);
              goto code_r0x00403cb7;
            }
            *pcVar10 = *pcVar10 + bVar5;
            pbVar9 = (byte *)CONCAT31(uVar12,(bVar5 | (byte)*puVar19) + 0x7d);
            pcVar13 = pcVar13 + -1;
            *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar13;
          }
          else {
            *(byte *)puVar19 = (byte)*puVar19 + cVar21;
            puVar19 = (uint *)CONCAT31(uVar20,cVar18 + *(char *)((int)pbVar23 * 2 + 0xa0000e0));
          }
        }
      } while( true );
    }
    while( true ) {
      *(byte **)in_EAX = in_EAX + (uint)in_CF + *(int *)in_EAX;
      unaff_EDI = pcVar13 + 4;
      in_EAX[(int)param_2] = in_EAX[(int)param_2] + (char)unaff_EBX;
      *in_EAX = *in_EAX + (char)in_EAX;
      *(byte **)unaff_ESI = unaff_EBX + *(int *)unaff_ESI;
      bVar4 = (byte)((uint)settingMapper >> 8);
      uVar16 = (undefined2)((uint)settingMapper >> 0x10);
      cVar18 = (char)settingMapper;
      bVar5 = bVar4 + *in_EAX;
      settingMapper = (byte *)CONCAT22(uVar16,CONCAT11(bVar5,cVar18));
      pbVar23 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
      *param_2 = *param_2 + cVar18;
      cVar21 = (char)unaff_EBX - unaff_ESI[2];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar21);
      bVar4 = (byte)pbVar23;
      uVar12 = (undefined3)((uint)pbVar23 >> 8);
      uVar20 = (undefined3)((uint)param_2 >> 8);
      if ((POPCOUNT(cVar21) & 1U) == 0) break;
      unaff_EBX = (byte *)((uint)unaff_EBX | (uint)unaff_ESI);
      bVar5 = bVar4 + 2;
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        *param_2 = *param_2 + cVar18;
        in_EAX = (byte *)CONCAT31(uVar12,bVar5 | *unaff_ESI);
        goto code_r0x00403b73;
      }
      *(char *)CONCAT31(uVar12,bVar5) = *(char *)CONCAT31(uVar12,bVar5) + bVar5;
      bVar4 = bVar4 + 0x71 & *(byte *)CONCAT31(uVar12,bVar4 + 0x71);
      *param_2 = *param_2 + cVar18;
      param_2 = (byte *)CONCAT31(uVar20,(char)param_2 + *unaff_EDI);
      pcVar13[0x17060004] = pcVar13[0x17060004] - bVar4;
      cVar18 = bVar4 - *unaff_EDI;
      bVar4 = cVar18 - *(char *)CONCAT31(uVar12,cVar18);
      in_EAX = (byte *)CONCAT31(uVar12,bVar4);
      *in_EAX = *in_EAX + bVar4;
      *(byte **)in_EAX = param_2 + *(int *)in_EAX;
      *in_EAX = *in_EAX + bVar4;
      in_CF = CARRY1(*in_EAX,bVar4);
      *in_EAX = *in_EAX + bVar4;
      pcVar13 = unaff_EDI;
    }
    *pbVar23 = *pbVar23 + bVar4;
    bVar4 = bVar4 | *unaff_EBX;
    piVar7 = (int *)CONCAT31(uVar12,bVar4);
    if (bVar4 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(pcVar13 + 0x28);
      *(byte *)piVar7 = (char)*piVar7 + bVar4;
      settingMapper = (byte *)CONCAT22(uVar16,CONCAT11(bVar5 | *param_2,cVar18));
      unaff_ESI = unaff_ESI + *piVar7;
      pcVar13 = (char *)((int)piVar7 + *piVar7);
      uVar12 = (undefined3)((uint)pcVar13 >> 8);
      bVar5 = (char)pcVar13 - *pcVar13;
      pbVar23 = (byte *)CONCAT31(uVar12,bVar5);
      bVar4 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar5;
      piVar7 = (int *)CONCAT31(uVar12,bVar5 - CARRY1(bVar4,bVar5));
    }
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    out(*(int *)unaff_ESI,(short)param_2);
    in_EAX = (byte *)(((uint)piVar7 >> 8) * 0x100);
    *param_2 = *param_2 + (char)settingMapper;
    bVar4 = (char)param_2 - *unaff_EBX;
    param_2 = (byte *)CONCAT31(uVar20,bVar4);
    *unaff_EBX = *unaff_EBX;
    *param_2 = *param_2 + (char)((uint)settingMapper >> 8);
    *in_EAX = *in_EAX;
    pcVar13 = (char *)(((uint)piVar7 >> 8) * 0x200);
    *pcVar13 = *pcVar13 + cVar21;
    in_CF = CARRY1(*settingMapper,bVar4);
    *settingMapper = *settingMapper + bVar4;
    unaff_ESI = unaff_ESI + 4;
  } while( true );
code_r0x00403d33:
  unaff_EBP = unaff_EBP + -*puVar11;
  do {
    bVar4 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    pbVar23 = pbVar23 + -*(int *)(unaff_EBP + -0x1a);
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    bVar4 = bVar4 | (byte)*puVar19;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
    *(byte *)puVar11 = (byte)*puVar11 | bVar4;
    bVar4 = (byte)*puVar11;
    unaff_EBP = (char *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
        bVar4 = (byte)puVar11 | (byte)*puVar19;
        puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        uVar2 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        while( true ) {
          pcVar13 = (char *)((uint)uVar2 << 8);
          bVar6 = (byte)puVar11;
          *(byte *)puVar11 = (byte)*puVar11 & bVar6;
          bVar14 = *unaff_EBX;
          bVar15 = (byte)uVar2;
          bVar5 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar15;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar14,bVar15)) break;
          *(byte *)puVar11 = (byte)*puVar11 + bVar6;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar11 = (byte)*puVar11 + bVar6;
          bVar6 = bVar6 | (byte)*puVar19;
          puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6);
          bVar24 = (POPCOUNT(bVar6) & 1U) == 0;
          while( true ) {
            cVar18 = (char)((uint)unaff_EBX >> 8);
            uVar16 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar24) {
              *(byte *)puVar19 = (byte)*puVar19;
              unaff_EBX = (byte *)CONCAT22(uVar16,CONCAT11(cVar18 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
            uVar17 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar5 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar11;
            uVar2 = CONCAT21(uVar17,bVar5);
            *puVar11 = *puVar11 & (uint)puVar11;
            *unaff_EBX = *unaff_EBX + bVar5;
            uVar12 = (undefined3)((uint)puVar11 >> 8);
            bVar4 = (char)puVar11 - bVar5;
            pcVar13 = (char *)CONCAT31(uVar12,bVar4);
            *pcVar13 = *pcVar13 + bVar4;
            bVar4 = bVar4 | (byte)*puVar19;
            puVar11 = (uint *)CONCAT31(uVar12,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar11 = (byte)*puVar11 + bVar4;
            pcVar13 = (char *)((uint)CONCAT21(uVar17,bVar5 | (byte)*puVar11) << 8);
            *puVar11 = *puVar11 - (int)puVar11;
            *(byte *)puVar19 = (byte)*puVar19;
            unaff_EBX = (byte *)CONCAT22(uVar16,CONCAT11(cVar18 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              uVar16 = (undefined2)((uint)puVar19 >> 0x10);
              cVar18 = (char)puVar19;
              bVar4 = (byte)((uint)puVar19 >> 8) | unaff_EBX[-0x17];
              puVar19 = (uint *)CONCAT22(uVar16,CONCAT11(bVar4,cVar18));
              *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
                uVar12 = (undefined3)((uint)puVar11 >> 8);
                bVar14 = (byte)puVar11 | (byte)*puVar19;
                pcVar10 = (char *)CONCAT31(uVar12,bVar14);
                bVar5 = unaff_EBX[-0x16];
                *pcVar10 = *pcVar10 + bVar14;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar10 = *pcVar10 + bVar14;
                pbVar8 = (byte *)CONCAT31(uVar12,bVar14 | (byte)*puVar19);
                while( true ) {
                  *pbVar8 = *pbVar8 + (byte)pbVar8;
                  uVar12 = (undefined3)((uint)pbVar8 >> 8);
                  bVar5 = (byte)pbVar8 | (byte)*puVar19;
                  puVar11 = (uint *)CONCAT31(uVar12,bVar5);
                  if ((POPCOUNT(bVar5) & 1U) != 0) break;
                  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                  bVar14 = pbVar23[-0x14];
                  *(byte *)puVar11 = (byte)*puVar11 + bVar5;
                  bVar5 = bVar5 | (byte)*puVar19;
                  pcVar10 = (char *)CONCAT31(uVar12,bVar5);
                  bVar6 = unaff_EBX[-0x15];
                  *pcVar10 = *pcVar10 + bVar5;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar14 |
                                                    pbVar23[-0x13]) << 8);
                  *pcVar10 = *pcVar10 + bVar5;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar6 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar10 = *pcVar10 + bVar5;
                  pbVar8 = (byte *)CONCAT31(uVar12,bVar5 | (byte)*puVar19);
                  do {
                    do {
                      bVar14 = (byte)pbVar8;
                      *pbVar8 = *pbVar8 + bVar14;
                      cVar22 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar8,
                                                            cVar22));
                      *pbVar8 = bVar14;
                      *pbVar8 = *pbVar8 + bVar14;
                      cVar21 = (char)((uint)pcVar13 >> 8) + *pbVar8;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar21) << 8)
                      ;
                      uVar12 = (undefined3)((uint)pbVar8 >> 8);
                      bVar14 = bVar14 & *pbVar8;
                      pbVar8 = (byte *)CONCAT31(uVar12,bVar14);
                      bVar5 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar21;
                    } while (SCARRY1(bVar5,cVar21) == (char)*unaff_EBX < '\0');
                    *pbVar8 = *pbVar8 + bVar14;
                    bVar14 = bVar14 | (byte)*puVar19;
                    pbVar8 = (byte *)CONCAT31(uVar12,bVar14);
                    if ((POPCOUNT(bVar14) & 1U) == 0) {
                      *pbVar8 = *pbVar8 + bVar14;
                      *pbVar8 = *pbVar8 + bVar14;
                      cVar18 = cVar18 - bVar4;
                      pbVar9 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),cVar18);
                      *pbVar8 = *pbVar8 + bVar14;
                      bRam0312382b = bRam0312382b | *pbVar9;
                      while( true ) {
                        bVar5 = (byte)pbVar8;
                        *pbVar8 = *pbVar8 + bVar5;
                        bRam0312382b = bRam0312382b | (pbVar23 + 0x21b0000)[(int)pbVar8];
                        uVar12 = (undefined3)((uint)pbVar8 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar9 = *pbVar9 + bRam0312382b;
                        pbVar8 = (byte *)CONCAT31(uVar12,bVar5 | *unaff_ESI);
                      }
                      *pbVar8 = *pbVar8 + bVar5;
                      bVar5 = bVar5 | *unaff_ESI;
                      pcVar13 = (char *)CONCAT31(uVar12,bVar5);
                      out(*(int *)unaff_ESI,(short)pbVar9);
                      *pcVar13 = *pcVar13 + bVar5;
                      uVar17 = CONCAT11(bVar4 | bRam6f0a002b,cVar18);
                      pcVar10 = (char *)CONCAT22(uVar16,uVar17);
                      *pcVar13 = *pcVar13 + bVar5;
                      *pcVar10 = *pcVar10 + bRam0312382b;
                      out(*(int *)(unaff_ESI + 4),uVar17);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar22 + *pcVar13);
                  } while (SCARRY1(cVar22,*pcVar13) != (char)(cVar22 + *pcVar13) < '\0');
                }
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0');
              *(byte *)puVar19 = (byte)*puVar19;
              *pcVar13 = *pcVar13 - (char)unaff_EBX;
              *(byte *)puVar11 = (byte)*puVar11 + bVar5;
              bVar5 = bVar5 | (byte)*puVar19;
              puVar11 = (uint *)CONCAT31(uVar12,bVar5);
              bVar24 = (POPCOUNT(bVar5) & 1U) == 0;
            } while (bVar24);
          }
        }
      } while (SCARRY1(bVar5,bVar15));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar13 >> 8);
    *pbVar23 = *pbVar23 - (char)unaff_EBX;
  } while( true );
}


