/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403bc4
 * Raw Name    : GetUnifiedSettingInfos
 * Demangled   : GetUnifiedSettingInfos
 * Prototype   : byte * GetUnifiedSettingInfos(undefined4 multiSettingsMapper, byte * param_2)
 * Local Vars  : iStack_3f, uStack_c, pcVar1, uVar2, uVar3, bVar4, bVar5, in_EAX, piVar6, pbVar7, pbVar8, pcVar9, puVar10, uVar11, bVar12, uVar13, extraout_ECX, pcVar14, bVar15, bVar16, uVar17, cVar18, puVar19, uVar20, uVar21, cVar22, cVar23, unaff_EBX, iVar24, multiSettingsMapper, iVar25, puVar26, unaff_EBP, pcVar27, unaff_ESI, unaff_EDI, pbVar28, in_CF, bVar29, uVar30, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Removing unreachable block (ram,0x00403db7) */

byte * __fastcall GetUnifiedSettingInfos(undefined4 multiSettingsMapper,byte *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  byte *in_EAX;
  undefined3 uVar11;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  uint *puVar10;
  byte bVar12;
  byte bVar15;
  byte bVar16;
  undefined4 extraout_ECX;
  char *pcVar14;
  undefined2 uVar17;
  char cVar18;
  uint *puVar19;
  undefined3 uVar20;
  undefined2 uVar21;
  char cVar22;
  char cVar23;
  byte *unaff_EBX;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  char *unaff_EBP;
  char *pcVar27;
  uint *unaff_ESI;
  int unaff_EDI;
  byte *pbVar28;
  bool in_CF;
  bool bVar29;
  undefined8 uVar30;
  int iStack_3f;
  undefined4 uStack_c;
  undefined4 uVar13;
  
  bVar4 = (byte)in_EAX;
  bVar12 = (byte)multiSettingsMapper;
  bVar15 = (byte)((uint)multiSettingsMapper >> 8);
  uVar21 = (undefined2)((uint)multiSettingsMapper >> 0x10);
                    /* .NET CLR Managed Code */
  if (in_CF) {
    *in_EAX = *in_EAX + bVar4;
    bVar12 = bVar12 | *param_2;
    uVar13 = CONCAT31((int3)((uint)multiSettingsMapper >> 8),bVar12);
    pbVar28 = (byte *)(unaff_EDI + *(int *)(unaff_EBP + -0x33));
    *in_EAX = *in_EAX + bVar4;
    uVar11 = (undefined3)((uint)in_EAX >> 8);
    bVar4 = bVar4 | *param_2;
    piVar6 = (int *)CONCAT31(uVar11,bVar4);
    pcVar27 = unaff_EBP;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pcVar9 = (char *)CONCAT22(uVar21,CONCAT11(bVar15 + pbVar28[-0x30],bVar12));
      *(byte *)piVar6 = (char)*piVar6 + bVar4;
      bVar4 = (byte)param_2 | bVar4;
      puVar19 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar4);
      pbVar7 = (byte *)((int)piVar6 - *piVar6);
      *pcVar9 = *pcVar9 + (char)pbVar7;
      uVar13 = CONCAT31((int3)((uint)pcVar9 >> 8),bVar12 - bVar4);
      do {
        bVar15 = (byte)pbVar7;
        *pbVar7 = *pbVar7 + bVar15;
        bVar4 = *pbVar7;
        bVar5 = (byte)uVar13;
        *pbVar7 = *pbVar7 << (bVar5 & 7) | *pbVar7 >> 8 - (bVar5 & 7);
        *(byte *)puVar19 = (byte)*puVar19 + bVar5;
        iVar24 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
        bVar12 = pbVar28[-0x43];
        *pbVar7 = *pbVar7 + bVar15;
        uVar13 = CONCAT22((short)((uint)uVar13 >> 0x10),
                          CONCAT11(((byte)((uint)uVar13 >> 8) | bVar4) + bVar12 | (byte)*puVar19,
                                   bVar5));
        bVar4 = *pbVar7;
        *pbVar7 = *pbVar7 + bVar15;
        unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar4,bVar15) + *(int *)pbVar7);
        bVar15 = bVar15 + *pbVar7;
        pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar15);
        iVar25 = iVar24 + 1;
        *pbVar7 = *pbVar7 + bVar15;
        cVar18 = (char)iVar25;
        *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar18;
        bVar4 = *pbVar7;
        *pbVar7 = *pbVar7 + bVar15;
        *(char **)pbVar7 = unaff_EBP + (uint)CARRY1(bVar4,bVar15) + *(int *)pbVar7;
        *(byte *)puVar19 = (byte)*puVar19 + bVar5;
        uVar21 = (undefined2)((uint)iVar25 >> 0x10);
        cVar22 = (char)((uint)iVar25 >> 8) + *(char *)(iVar24 + -0x26);
        unaff_EBX = (byte *)CONCAT22(uVar21,CONCAT11(cVar22,cVar18));
        do {
          *pbVar7 = *pbVar7 + (char)pbVar7;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                     CONCAT11((byte)((uint)puVar19 >> 8) | *unaff_EBX,(char)puVar19)
                                    );
          bVar12 = (byte)uVar13;
          *(byte *)puVar19 = (byte)*puVar19 + bVar12;
          *unaff_EBX = *unaff_EBX + 1;
          pbVar7 = (byte *)((uint)(pbVar7 + 0xda7b02) | *puVar19);
          bVar4 = (byte)pbVar7;
          if (-1 < (int)pbVar7) {
            *(byte *)puVar19 = (byte)*puVar19 ^ bVar4;
            *unaff_EBX = *unaff_EBX + bVar4;
            *pbVar7 = *pbVar7 + bVar4;
            break;
          }
          *pbVar7 = *pbVar7 + bVar4;
          uVar11 = (undefined3)((uint)pbVar7 >> 8);
          bVar4 = bVar4 | (byte)*puVar19;
          pcVar9 = (char *)CONCAT31(uVar11,bVar4);
          uVar13 = CONCAT22((short)((uint)uVar13 >> 0x10),
                            CONCAT11((byte)((uint)uVar13 >> 8) | *unaff_EBX,bVar12));
          bVar29 = CARRY4((uint)puVar19,*unaff_ESI);
          puVar19 = (uint *)((int)puVar19 + *unaff_ESI);
          if (bVar29) {
            *pcVar9 = *pcVar9 + bVar4;
            pcVar14 = (char *)CONCAT31((int3)((uint)uVar13 >> 8),bVar12 | (byte)*puVar19);
            bVar12 = unaff_EBX[-0x24];
            *pcVar9 = *pcVar9 + bVar4;
            unaff_EBX = (byte *)CONCAT22(uVar21,CONCAT11(cVar22 + bVar12 | unaff_EBP[-0x24],cVar18))
            ;
            *pcVar9 = *pcVar9 + bVar4;
            pbVar8 = (byte *)CONCAT31(uVar11,bVar4 | (byte)*unaff_ESI);
            goto code_r0x00403c92;
          }
          bVar4 = bVar4 - cVar18;
          *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
          bVar4 = bVar4 | (byte)*puVar19;
          pbVar7 = (byte *)CONCAT31(uVar11,bVar4);
        } while ((POPCOUNT(bVar4) & 1U) == 0);
      } while( true );
    }
    *(byte *)piVar6 = (char)*piVar6 + bVar4;
    pbVar7 = (byte *)CONCAT31(uVar11,bVar4 + 6);
  }
  else {
    *in_EAX = *in_EAX + bVar4;
    bVar15 = bVar15 | *param_2;
    cVar18 = bVar15 + *in_EAX;
    uVar13 = CONCAT22(uVar21,CONCAT11(cVar18,bVar12));
    pbVar7 = in_EAX + (uint)CARRY1(bVar15,*in_EAX) + *(int *)in_EAX;
    *param_2 = *param_2 + bVar12;
    cVar22 = (char)unaff_EBX - *(byte *)((int)unaff_ESI + 2);
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar22);
    bVar4 = (byte)pbVar7;
    uVar11 = (undefined3)((uint)pbVar7 >> 8);
    if ((POPCOUNT(cVar22) & 1U) == 0) {
      *pbVar7 = *pbVar7 + bVar4;
      bVar4 = bVar4 | *unaff_EBX;
      piVar6 = (int *)CONCAT31(uVar11,bVar4);
      if (bVar4 == 0) {
        *(char *)piVar6 = (char)*piVar6;
        out(*unaff_ESI,(short)param_2);
        pcVar27 = (char *)((int)piVar6 - *piVar6);
        *param_2 = *param_2 + bVar12;
        bVar4 = (char)pcVar27 - *pcVar27;
        pcVar27 = (char *)CONCAT31((int3)((uint)pcVar27 >> 8),bVar4);
        *unaff_EBX = *unaff_EBX + (byte)param_2;
        *unaff_EBX = *unaff_EBX ^ bVar4;
        *param_2 = *param_2 + cVar18;
        *pcVar27 = *pcVar27 + bVar4;
        cRam73110000 = cRam73110000 + cVar22;
      }
      else {
        *(byte *)piVar6 = (char)*piVar6 + bVar4;
        *(byte *)piVar6 = (char)*piVar6 + bVar4;
        pcVar27 = (char *)((int)piVar6 + *piVar6);
        cVar18 = (char)pcVar27 - *pcVar27;
        pcVar27 = (char *)CONCAT31((int3)((uint)pcVar27 >> 8),cVar18);
        *pcVar27 = *pcVar27 + cVar18;
      }
      pcVar1 = (code *)swi(3);
      pbVar7 = (byte *)(*pcVar1)();
      return pbVar7;
    }
    puVar26 = (undefined4 *)&stack0xfffffff8;
    pcVar27 = &stack0xfffffff8;
    cVar18 = '\t';
    do {
      unaff_EBP = unaff_EBP + -4;
      puVar26 = puVar26 + -1;
      *puVar26 = *(undefined4 *)unaff_EBP;
      cVar18 = cVar18 + -1;
    } while ('\0' < cVar18);
    bVar4 = bVar4 | (byte)*unaff_ESI;
    pbVar28 = (byte *)(unaff_EDI + iStack_3f);
    *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
    bVar4 = bVar4 | *param_2;
    pbVar7 = (byte *)CONCAT31(uVar11,bVar4);
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *pbVar7 = *pbVar7 + bVar4;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
      return (byte *)CONCAT31(uVar11,bVar4 + 6);
    }
  }
  uVar3 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
  pcVar1 = (code *)swi(4);
  if (SCARRY1((byte)uVar3,'\x01')) {
    uVar30 = (*pcVar1)();
    param_2 = (byte *)((ulonglong)uVar30 >> 0x20);
    pbVar7 = (byte *)uVar30;
    uVar13 = extraout_ECX;
  }
  *pbVar7 = *pbVar7 + (char)pbVar7;
  puVar19 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0x2f],(char)param_2));
  *pbVar7 = *pbVar7 + (char)pbVar7;
  cVar18 = (char)uVar13;
  bVar15 = (byte)((uint)uVar13 >> 8) | *pbVar7;
  pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar4 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar15;
  bVar12 = (byte)pbVar7;
  if (CARRY1(bVar4,bVar15)) {
    *pbVar7 = *pbVar7 + bVar12;
    bVar15 = bVar15 | (byte)*puVar19;
    *unaff_EBX = *unaff_EBX - (char)param_2;
    *pbVar7 = *pbVar7 + bVar12;
    uVar11 = (undefined3)((uint)pbVar7 >> 8);
    bVar12 = bVar12 | (byte)*puVar19;
    piVar6 = (int *)CONCAT31(uVar11,bVar12);
    pcVar27 = pcVar27 + *piVar6;
    *(byte *)piVar6 = (char)*piVar6 + bVar12;
    cVar22 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar22) +
                                                   0x5f),cVar22));
    *(byte *)piVar6 = (char)*piVar6 + bVar12;
    bVar4 = bVar12 + 0x2a & (byte)*puVar19;
    pbVar28 = pbVar28 + *(int *)(pcVar27 + 0x5f);
    *(char *)CONCAT31(uVar11,bVar4) = *(char *)CONCAT31(uVar11,bVar4) + bVar4;
    pbVar7 = (byte *)CONCAT31(uVar11,bVar4 + 0x2a);
    *(byte *)puVar19 = (byte)*puVar19 + 0x28;
    *pbVar7 = *pbVar7 + bVar4 + 0x2a;
  }
  else {
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar12;
  }
  pcVar14 = (char *)CONCAT22((short)((uint)uVar13 >> 0x10),CONCAT11(bVar15,cVar18));
  *pcVar27 = *pcVar27 - bVar15;
  *(byte *)puVar19 = (byte)*puVar19 + cVar18;
  bVar4 = (byte)pbVar7 - 0xb;
  pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar4);
  if (10 < (byte)pbVar7) {
    *pbVar8 = *pbVar8 | bVar4;
    return pbVar8;
  }
  *(byte *)puVar19 = (byte)*puVar19 + cVar18;
code_r0x00403c92:
  do {
    bVar4 = unaff_EBX[-0x23];
    bVar15 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar15;
    bVar12 = pcVar27[-0x22];
    *pbVar8 = *pbVar8 + bVar15;
    uVar11 = (undefined3)((uint)pbVar8 >> 8);
    bVar15 = bVar15 | (byte)*unaff_ESI;
    pbVar7 = (byte *)CONCAT31(uVar11,bVar15);
    cVar22 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4 |
                                                          bVar12,(char)unaff_EBX)) >> 8),cVar22);
    cVar18 = (char)pcVar14;
    pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                               CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar7,cVar18));
    *(byte *)puVar19 = (byte)*puVar19 + cVar18;
    bVar12 = bVar15 - *pbVar7;
    pbVar8 = (byte *)CONCAT31(uVar11,bVar12);
    unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar15 < *pbVar7) - *(int *)pbVar8));
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 * '\x02');
    *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
    *pbVar28 = *pbVar28 + cVar22;
    bVar4 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar12;
    *puVar19 = (uint)(pbVar8 + (uint)CARRY1(bVar4,bVar12) + *puVar19);
  } while ((POPCOUNT(*puVar19 & 0xff) & 1U) != 0);
code_r0x00403cb7:
  *pbVar8 = *pbVar8 + (char)pbVar8;
  pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar8[(int)pcVar14]);
  bVar29 = false;
  pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
  do {
    pbVar28 = pbVar28 + (-(uint)bVar29 - *(int *)unaff_EBX);
    pcVar9 = (char *)CONCAT31((int3)((uint)pbVar8 >> 8),*pcVar14);
    *pcVar9 = *pcVar9 + *pcVar14;
    pbVar8 = (byte *)CONCAT31((int3)((uint)(pcVar9 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                                     (byte)((uint)pcVar14 >> 8)) + 0xda7d) >> 8),
                              ((byte)(pcVar9 + (*(byte *)((int)unaff_ESI + 0x2000001) <
                                               (byte)((uint)pcVar14 >> 8)) + 0xda7d) |
                              (byte)*puVar19) + 0x7d);
    pcVar14 = pcVar14 + -1;
    *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar14;
    while( true ) {
      uVar20 = (undefined3)((uint)puVar19 >> 8);
      cVar18 = (char)puVar19 + *(char *)((int)pbVar28 * 2 + 0xa0000e1);
      puVar19 = (uint *)CONCAT31(uVar20,cVar18);
      bVar29 = CARRY1((byte)pbVar8,(byte)*puVar19);
      uVar11 = (undefined3)((uint)pbVar8 >> 8);
      bVar4 = (byte)pbVar8 + (byte)*puVar19;
      pbVar8 = (byte *)CONCAT31(uVar11,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) break;
      *pbVar8 = *pbVar8 + bVar4;
      cVar22 = (char)pcVar14;
      pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar28[-0x65],cVar22));
      bVar12 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar4;
      if (CARRY1(bVar12,bVar4)) {
        *pbVar8 = *pbVar8 + bVar4;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) | pcVar27[-0x1d],
                                              (char)unaff_EBX));
        *pbVar8 = *pbVar8 + bVar4;
        bVar29 = false;
        bVar4 = bVar4 | (byte)*puVar19;
        pcVar9 = (char *)CONCAT31(uVar11,bVar4);
        while( true ) {
          bVar12 = (byte)pcVar9;
          uVar11 = (undefined3)((uint)pcVar9 >> 8);
          if (bVar29 == (char)bVar4 < '\0') break;
          *pcVar9 = *pcVar9 + bVar12;
          bVar12 = bVar12 | (byte)*puVar19;
          puVar10 = (uint *)CONCAT31(uVar11,bVar12);
          *pbVar28 = *pbVar28 << 1 | (char)*pbVar28 < '\0';
          uVar3 = *puVar10;
          *(byte *)puVar10 = (byte)*puVar10 + bVar12;
          pcVar27 = pcVar27 + (-(uint)CARRY1((byte)uVar3,bVar12) - *puVar10);
          *puVar10 = *puVar10 << 1 | (uint)((int)*puVar10 < 0);
          while( true ) {
            uVar3 = *puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + (byte)pcVar14;
            cVar18 = (char)puVar10 + 'o' + CARRY1((byte)uVar3,(byte)pcVar14);
            pcVar9 = (char *)CONCAT31((int3)((uint)puVar10 >> 8),cVar18);
            pcVar14 = (char *)0x20a0000;
            if ((POPCOUNT(cVar18) & 1U) != 0) break;
            *pcVar9 = *pcVar9 + cVar18;
            bVar4 = bRamfe140212;
            pcVar14 = (char *)0x0;
            uVar11 = (undefined3)((uint)(pcVar9 + -0x732b0000) >> 8);
            bVar12 = in(0);
            puVar10 = (uint *)CONCAT31(uVar11,bVar12);
            uVar3 = *puVar19;
            *(byte *)puVar19 = (byte)*puVar19;
            if (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0') {
              *(byte *)puVar10 = (byte)*puVar10 + bVar12;
              bVar12 = bVar12 | (byte)*puVar19;
              puVar10 = (uint *)CONCAT31(uVar11,bVar12);
              if ((POPCOUNT(bVar12) & 1U) == 0) {
                *(byte *)puVar10 = (byte)*puVar10 + bVar12;
                pcVar9 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar4 | (byte)*puVar10) << 8);
                *(byte *)puVar10 = (byte)*puVar10 + bVar12;
                goto code_r0x00403d33;
              }
              *(byte *)puVar10 = (byte)*puVar10 + bVar12;
              puVar10 = (uint *)CONCAT31(uVar11,bVar12 | (byte)*puVar19);
            }
          }
          *(byte *)puVar19 = (byte)*puVar19;
          bVar29 = SCARRY1((char)puVar19,*pbVar28);
          bVar4 = (char)puVar19 + *pbVar28;
          puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar4);
        }
        if (bVar29 == (char)bVar4 < '\0') {
          *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar14;
          pbVar8 = (byte *)((uint)pcVar9 | 8);
          goto code_r0x00403cb7;
        }
        *pcVar9 = *pcVar9 + bVar12;
        pbVar8 = (byte *)CONCAT31(uVar11,(bVar12 | (byte)*puVar19) + 0x7d);
        pcVar14 = pcVar14 + -1;
        *(byte *)puVar19 = (byte)*puVar19 + (char)pcVar14;
      }
      else {
        *(byte *)puVar19 = (byte)*puVar19 + cVar22;
        puVar19 = (uint *)CONCAT31(uVar20,cVar18 + *(char *)((int)pbVar28 * 2 + 0xa0000e0));
      }
    }
  } while( true );
code_r0x00403d33:
  pcVar27 = pcVar27 + -*puVar10;
  do {
    bVar4 = (byte)puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + bVar4;
    pbVar28 = pbVar28 + -*(int *)(pcVar27 + -0x1a);
    *(byte *)puVar10 = (byte)*puVar10 + bVar4;
    bVar4 = bVar4 | (byte)*puVar19;
    puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar4);
    *(byte *)puVar10 = (byte)*puVar10 | bVar4;
    bVar4 = (byte)*puVar10;
    pcVar27 = (char *)0x2700001;
    while ((POPCOUNT(bVar4) & 1U) == 0) {
      do {
        *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
        bVar4 = (byte)puVar10 | (byte)*puVar19;
        puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar4);
        if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
        uVar2 = CONCAT21((short)((uint)pcVar9 >> 0x10),(byte)((uint)pcVar9 >> 8) | bRamfe140212);
        while( true ) {
          pcVar9 = (char *)((uint)uVar2 << 8);
          bVar5 = (byte)puVar10;
          *(byte *)puVar10 = (byte)*puVar10 & bVar5;
          bVar12 = *unaff_EBX;
          bVar16 = (byte)uVar2;
          bVar15 = *unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar16;
          bVar4 = *unaff_EBX;
          if (!CARRY1(bVar12,bVar16)) break;
          *(byte *)puVar10 = (byte)*puVar10 + bVar5;
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffe2,
                                                (char)unaff_EBX));
          *(byte *)puVar10 = (byte)*puVar10 + bVar5;
          bVar5 = bVar5 | (byte)*puVar19;
          puVar10 = (uint *)CONCAT31((int3)((uint)puVar10 >> 8),bVar5);
          bVar29 = (POPCOUNT(bVar5) & 1U) == 0;
          while( true ) {
            cVar18 = (char)((uint)unaff_EBX >> 8);
            uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
            if (!bVar29) {
              *(byte *)puVar19 = (byte)*puVar19;
              unaff_EBX = (byte *)CONCAT22(uVar21,CONCAT11(cVar18 + unaff_EBX[-0x1f],(char)unaff_EBX
                                                          ));
              goto code_r0x00403d52;
            }
            *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
            uVar17 = (undefined2)((uint)pcVar9 >> 0x10);
            bVar12 = (byte)((uint)pcVar9 >> 8) | (byte)*puVar10;
            uVar2 = CONCAT21(uVar17,bVar12);
            *puVar10 = *puVar10 & (uint)puVar10;
            *unaff_EBX = *unaff_EBX + bVar12;
            uVar11 = (undefined3)((uint)puVar10 >> 8);
            bVar4 = (char)puVar10 - bVar12;
            pcVar9 = (char *)CONCAT31(uVar11,bVar4);
            *pcVar9 = *pcVar9 + bVar4;
            bVar4 = bVar4 | (byte)*puVar19;
            puVar10 = (uint *)CONCAT31(uVar11,bVar4);
            if ((POPCOUNT(bVar4) & 1U) != 0) break;
            *(byte *)puVar10 = (byte)*puVar10 + bVar4;
            pcVar9 = (char *)((uint)CONCAT21(uVar17,bVar12 | (byte)*puVar10) << 8);
            *puVar10 = *puVar10 - (int)puVar10;
            *(byte *)puVar19 = (byte)*puVar19;
            unaff_EBX = (byte *)CONCAT22(uVar21,CONCAT11(cVar18 + unaff_EBX[-0x1d],(char)unaff_EBX))
            ;
            do {
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              uVar21 = (undefined2)((uint)puVar19 >> 0x10);
              cVar18 = (char)puVar19;
              bVar4 = (byte)((uint)puVar19 >> 8) | unaff_EBX[-0x17];
              puVar19 = (uint *)CONCAT22(uVar21,CONCAT11(bVar4,cVar18));
              *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam026fffeb,
                                                    (char)unaff_EBX));
              do {
                *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
                uVar11 = (undefined3)((uint)puVar10 >> 8);
                bVar15 = (byte)puVar10 | (byte)*puVar19;
                pcVar14 = (char *)CONCAT31(uVar11,bVar15);
                bVar12 = unaff_EBX[-0x16];
                *pcVar14 = *pcVar14 + bVar15;
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar12 |
                                                      bRam026fffec,(char)unaff_EBX));
                *pcVar14 = *pcVar14 + bVar15;
                pbVar7 = (byte *)CONCAT31(uVar11,bVar15 | (byte)*puVar19);
                while( true ) {
                  *pbVar7 = *pbVar7 + (byte)pbVar7;
                  uVar11 = (undefined3)((uint)pbVar7 >> 8);
                  bVar12 = (byte)pbVar7 | (byte)*puVar19;
                  puVar10 = (uint *)CONCAT31(uVar11,bVar12);
                  if ((POPCOUNT(bVar12) & 1U) != 0) break;
                  *(byte *)puVar10 = (byte)*puVar10 + bVar12;
                  bVar15 = pbVar28[-0x14];
                  *(byte *)puVar10 = (byte)*puVar10 + bVar12;
                  bVar12 = bVar12 | (byte)*puVar19;
                  pcVar14 = (char *)CONCAT31(uVar11,bVar12);
                  bVar5 = unaff_EBX[-0x15];
                  *pcVar14 = *pcVar14 + bVar12;
                  pcVar9 = (char *)((uint)CONCAT21((short)((uint)pcVar9 >> 0x10),
                                                   (byte)((uint)pcVar9 >> 8) | bVar15 |
                                                   pbVar28[-0x13]) << 8);
                  *pcVar14 = *pcVar14 + bVar12;
                  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar5 |
                                                        bRam026fffef,(char)unaff_EBX));
                  *pcVar14 = *pcVar14 + bVar12;
                  pbVar7 = (byte *)CONCAT31(uVar11,bVar12 | (byte)*puVar19);
                  do {
                    do {
                      bVar15 = (byte)pbVar7;
                      *pbVar7 = *pbVar7 + bVar15;
                      cVar23 = (char)unaff_EBX;
                      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | *pbVar7,
                                                            cVar23));
                      *pbVar7 = bVar15;
                      *pbVar7 = *pbVar7 + bVar15;
                      cVar22 = (char)((uint)pcVar9 >> 8) + *pbVar7;
                      pcVar9 = (char *)((uint)CONCAT21((short)((uint)pcVar9 >> 0x10),cVar22) << 8);
                      uVar11 = (undefined3)((uint)pbVar7 >> 8);
                      bVar15 = bVar15 & *pbVar7;
                      pbVar7 = (byte *)CONCAT31(uVar11,bVar15);
                      bVar12 = *unaff_EBX;
                      *unaff_EBX = *unaff_EBX + cVar22;
                    } while (SCARRY1(bVar12,cVar22) == (char)*unaff_EBX < '\0');
                    *pbVar7 = *pbVar7 + bVar15;
                    bVar15 = bVar15 | (byte)*puVar19;
                    pbVar7 = (byte *)CONCAT31(uVar11,bVar15);
                    if ((POPCOUNT(bVar15) & 1U) == 0) {
                      *pbVar7 = *pbVar7 + bVar15;
                      *pbVar7 = *pbVar7 + bVar15;
                      cVar18 = cVar18 - bVar4;
                      pbVar8 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),cVar18);
                      *pbVar7 = *pbVar7 + bVar15;
                      bRam0312382b = bRam0312382b | *pbVar8;
                      while( true ) {
                        bVar12 = (byte)pbVar7;
                        *pbVar7 = *pbVar7 + bVar12;
                        bRam0312382b = bRam0312382b | (pbVar28 + 0x21b0000)[(int)pbVar7];
                        uVar11 = (undefined3)((uint)pbVar7 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar8 = *pbVar8 + bRam0312382b;
                        pbVar7 = (byte *)CONCAT31(uVar11,bVar12 | (byte)*unaff_ESI);
                      }
                      *pbVar7 = *pbVar7 + bVar12;
                      bVar12 = bVar12 | (byte)*unaff_ESI;
                      pcVar27 = (char *)CONCAT31(uVar11,bVar12);
                      out(*unaff_ESI,(short)pbVar8);
                      *pcVar27 = *pcVar27 + bVar12;
                      uVar17 = CONCAT11(bVar4 | bRam6f0a002b,cVar18);
                      pcVar9 = (char *)CONCAT22(uVar21,uVar17);
                      *pcVar27 = *pcVar27 + bVar12;
                      *pcVar9 = *pcVar9 + bRam0312382b;
                      out(unaff_ESI[1],uVar17);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar23 + *pcVar9);
                  } while (SCARRY1(cVar23,*pcVar9) != (char)(cVar23 + *pcVar9) < '\0');
                }
                uVar3 = *puVar19;
                *(byte *)puVar19 = (byte)*puVar19;
              } while (SCARRY1((byte)uVar3,'\0') != (char)(byte)*puVar19 < '\0');
              *(byte *)puVar19 = (byte)*puVar19;
              *pcVar9 = *pcVar9 - (char)unaff_EBX;
              *(byte *)puVar10 = (byte)*puVar10 + bVar12;
              bVar12 = bVar12 | (byte)*puVar19;
              puVar10 = (uint *)CONCAT31(uVar11,bVar12);
              bVar29 = (POPCOUNT(bVar12) & 1U) == 0;
            } while (bVar29);
          }
        }
      } while (SCARRY1(bVar15,bVar16));
    }
    *unaff_EBX = *unaff_EBX + (char)((uint)pcVar9 >> 8);
    *pbVar28 = *pbVar28 - (char)unaff_EBX;
  } while( true );
}


