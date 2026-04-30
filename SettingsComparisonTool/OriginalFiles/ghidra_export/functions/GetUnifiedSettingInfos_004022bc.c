/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004022bc
 * Raw Name    : GetUnifiedSettingInfos
 * Demangled   : GetUnifiedSettingInfos
 * Prototype   : pointer GetUnifiedSettingInfos(uint * multiSettingsMapper, uint * param_2)
 * Local Vars  : pcStackY_98, pbStackY_60, puStackY_4c, puStackY_48, uStackY_44, pbStack_24, pbStack_20, uStack_1c, uStack_18, uStack_15, uStack_14, uStack_c, iVar1, uVar2, pcVar3, uVar4, multiSettingsMapper, uVar5, uVar6, bVar7, cVar8, cVar9, bVar10, bVar11, cVar12, in_EAX, uVar13, pcVar14, iVar15, pbVar16, puVar17, pcVar18, uVar19, uVar20, puVar21, piVar22, pcVar23, piVar24, pbVar25, puVar26, uVar27, iVar28, pbVar29, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar30, cVar31, bVar32, bVar33, uVar34, uVar35, bVar36, uVar37, puVar38, pbVar39, pbVar40, puVar41, uVar42, uVar43, unaff_EBX, puVar44, cVar45, unaff_EBP, unaff_ESI, puVar46, unaff_EDI, puVar47, puVar48, in_ES, uVar49, uVar50, in_CS, in_SS, uVar51, in_GS_OFFSET, in_CF, bVar52, in_AF, bVar53, in_TF, in_IF, bVar54, bVar55, in_NT, uVar56, in_stack_ffffffd4, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

undefined * __fastcall GetUnifiedSettingInfos(uint *multiSettingsMapper,uint *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  byte *in_EAX;
  undefined3 uVar27;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar16;
  uint *puVar17;
  int3 iVar28;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
  int *piVar24;
  byte *pbVar25;
  ushort *puVar26;
  char cVar31;
  undefined2 uVar34;
  byte *pbVar29;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar32;
  byte bVar33;
  undefined2 uVar35;
  undefined4 uVar30;
  byte bVar36;
  undefined2 uVar37;
  uint *puVar38;
  byte *pbVar39;
  byte *pbVar40;
  undefined3 uVar42;
  uint *puVar41;
  undefined1 uVar43;
  char cVar45;
  byte *unaff_EBX;
  uint *puVar44;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar46;
  byte *unaff_EDI;
  uint *puVar47;
  uint *puVar48;
  ushort in_ES;
  ushort uVar49;
  ushort uVar50;
  ushort in_CS;
  ushort in_SS;
  ushort uVar51;
  int in_GS_OFFSET;
  undefined1 in_CF;
  bool bVar52;
  byte in_AF;
  bool bVar53;
  byte in_TF;
  byte in_IF;
  bool bVar54;
  bool bVar55;
  byte in_NT;
  undefined8 uVar56;
  char *pcStackY_98;
  byte *pbStackY_60;
  uint *puStackY_4c;
  uint *puStackY_48;
  undefined4 uStackY_44;
  undefined4 in_stack_ffffffd4;
  byte *pbStack_24;
  byte *pbStack_20;
  ushort uStack_1c;
  ushort uStack_18;
  undefined1 uStack_15;
  undefined4 uStack_14;
  ushort uStack_c;
  
  bVar54 = false;
code_r0x004022bc:
                    /* .NET CLR Managed Code */
  uVar49 = in_ES;
  if (!(bool)in_CF) goto code_r0x004022ea;
code_r0x004022be:
  do {
    *in_EAX = *in_EAX + (char)in_EAX;
    multiSettingsMapper =
         (uint *)CONCAT31((int3)((uint)multiSettingsMapper >> 8),
                          (byte)multiSettingsMapper | (byte)*param_2);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
    puVar38 = param_2;
    uVar49 = in_ES;
code_r0x004022c6:
    *in_EAX = *in_EAX + (byte)in_EAX;
    uVar27 = (undefined3)((uint)in_EAX >> 8);
    bVar7 = (byte)in_EAX | (byte)*puVar38;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      *pcVar14 = *pcVar14 + bVar7;
    }
    *pcVar14 = *pcVar14 + bVar7;
    cVar8 = bVar7 + 6;
    pbVar29 = (byte *)CONCAT31(uVar27,cVar8);
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    *pbVar29 = *pbVar29 + cVar8;
    param_2 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((byte)((uint)puVar38 >> 8) | unaff_EBX[0x2f],(char)puVar38))
    ;
    *pbVar29 = *pbVar29 + cVar8;
    bVar7 = (byte)((uint)multiSettingsMapper >> 8) | *pbVar29;
    multiSettingsMapper =
         (uint *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                          CONCAT11(bVar7,(char)multiSettingsMapper));
    in_EAX = pbVar29 + *(int *)pbVar29;
    bVar52 = CARRY1(*unaff_EBX,bVar7);
    *unaff_EBX = *unaff_EBX + bVar7;
code_r0x004022e0:
    puVar38 = param_2;
    in_ES = uVar49;
    if (!bVar52) goto code_r0x0040230b;
    bVar10 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar10;
    multiSettingsMapper =
         (uint *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                          CONCAT11((byte)((uint)multiSettingsMapper >> 8) | (byte)*param_2,
                                   (char)multiSettingsMapper));
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar10;
    unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)CARRY1(bVar7,bVar10) - *(int *)in_EAX));
code_r0x004022ea:
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *in_EAX);
code_r0x004022ef:
    *(char *)((int)in_EAX * 2) = *(char *)((int)in_EAX * 2) + (char)in_EAX;
    *(byte *)multiSettingsMapper = (byte)*multiSettingsMapper + (char)param_2;
    puVar38 = param_2;
    in_ES = uVar49;
    in_SS = uStack_c;
    while( true ) {
      uVar27 = (undefined3)((uint)in_EAX >> 8);
      bVar7 = (byte)in_EAX | (byte)*puVar38;
      pbVar29 = (byte *)CONCAT31(uVar27,bVar7);
      bVar10 = (byte)((uint)multiSettingsMapper >> 8);
      if ((POPCOUNT(bVar7) & 1U) == 0) break;
      bVar32 = (byte)puVar38;
      uVar35 = CONCAT11((byte)((uint)puVar38 >> 8) | unaff_EBX[0x28],bVar32);
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar35);
      *pbVar29 = *pbVar29 + bVar7;
      uVar34 = (undefined2)((uint)multiSettingsMapper >> 0x10);
      cVar8 = (char)multiSettingsMapper;
      bVar10 = bVar10 | *pbVar29;
      multiSettingsMapper = (uint *)CONCAT22(uVar34,CONCAT11(bVar10,cVar8));
      bVar36 = *pbVar29;
      in_EAX = (byte *)CONCAT31(uVar27,bVar7 + bVar36);
      bVar11 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar10;
      param_2 = puVar38;
      if (!CARRY1(bVar11,bVar10)) goto code_r0x004022b3;
      *in_EAX = *in_EAX + bVar7 + bVar36;
      bVar10 = bVar10 | (byte)*puVar38;
      bVar11 = bVar10 + *in_EAX;
      multiSettingsMapper = (uint *)CONCAT22(uVar34,CONCAT11(bVar11,cVar8));
      in_EAX = in_EAX + (uint)CARRY1(bVar10,*in_EAX) + *(int *)in_EAX;
      *(byte *)puVar38 = (byte)*puVar38 + cVar8;
      bVar10 = (byte)unaff_EBX;
      bVar52 = bVar10 < *(byte *)((int)unaff_ESI + 2);
      bVar7 = *(byte *)((int)unaff_ESI + 2);
      cVar9 = bVar10 - bVar7;
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9);
      if ((POPCOUNT(cVar9) & 1U) == 0) {
        *in_EAX = *in_EAX + (byte)in_EAX;
        bVar7 = (byte)in_EAX | *unaff_EBX;
        pbVar40 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
        if (bVar7 == 0) {
          *pbVar40 = *pbVar40;
          puVar17 = unaff_ESI + 1;
          out(*unaff_ESI,uVar35);
          pbVar40 = pbVar40 + -*(int *)pbVar40;
          goto code_r0x004022ab;
        }
        unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
        *pbVar40 = *pbVar40 + bVar7;
        multiSettingsMapper = (uint *)CONCAT22(uVar34,CONCAT11(bVar11 | (byte)*puVar38,cVar8));
        bVar10 = *pbVar40;
        *pbVar40 = *pbVar40 + bVar7;
        unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar10,bVar7) + *(int *)pbVar40);
        pbVar40 = pbVar40 + *(int *)pbVar40;
        cVar8 = (char)pbVar40 - *pbVar40;
        piVar24 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar8);
        *(char *)piVar24 = (char)*piVar24 + cVar8;
        in_EAX = (byte *)((int)piVar24 + *piVar24);
        in_CF = CARRY1((byte)*multiSettingsMapper,bVar32);
        *(byte *)multiSettingsMapper = (byte)*multiSettingsMapper + bVar32;
        goto code_r0x004022bc;
      }
      uVar49 = in_ES;
      if ((char)bVar10 < (char)bVar7) goto code_r0x004022c6;
code_r0x004022f3:
      *(byte **)unaff_EDI = (byte *)((int)puVar38 + (uint)bVar52 + *(int *)unaff_EDI);
    }
    *pbVar29 = *pbVar29 + bVar7;
    cVar8 = bVar7 + 0xd;
    pcVar14 = (char *)CONCAT31(uVar27,cVar8);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar14;
    *pcVar14 = *pcVar14 + cVar8;
    *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) + bVar10;
    *pcVar14 = *pcVar14 + cVar8;
    in_EAX = (byte *)CONCAT31(uVar27,cVar8);
    *in_EAX = *in_EAX + cVar8;
code_r0x0040230b:
    param_2 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) + unaff_EBX[0x34],(char)puVar38))
    ;
    cVar8 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar8;
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x79],
                                          (char)unaff_EBX));
    *in_EAX = *in_EAX + cVar8;
    pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar8 + '\x02');
    while( true ) {
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x7a],
                                            (char)unaff_EBX));
      cVar8 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar8;
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      cVar9 = cVar8 + '{';
      pbVar40 = (byte *)CONCAT31(uVar27,cVar9);
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      pbVar29 = (byte *)((int)param_2 + (int)pbVar40);
      *pbVar29 = *pbVar29 + cVar9;
      puVar38 = param_2;
      puVar17 = unaff_ESI;
      if ((POPCOUNT(*pbVar29) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + cVar9;
      piVar24 = (int *)CONCAT31(uVar27,cVar8 + -10);
      uVar13 = (int)piVar24 + *piVar24;
      bVar7 = (byte)uVar13;
      unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar7;
      in_EAX = (byte *)(uVar13 ^ 0x7d0a0000);
      *in_EAX = bVar7;
      pbVar29 = (byte *)((int)param_2 + (int)in_EAX);
      *pbVar29 = *pbVar29 + bVar7;
      if ((POPCOUNT(*pbVar29) & 1U) != 0) goto code_r0x004022be;
      *in_EAX = *in_EAX + bVar7;
      pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7 + 0x69);
code_r0x00402342:
      uVar49 = in_ES;
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      bVar7 = (char)pcVar14 + *pcVar14;
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte *)(unaff_ESI + 0x800000) = (byte)unaff_ESI[0x800000] + (char)multiSettingsMapper;
      cVar9 = (char)unaff_EBX;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x7a],cVar9));
      *pcVar14 = *pcVar14 + bVar7;
      bVar52 = 0xfd < bVar7;
      cVar8 = bVar7 + 2;
      in_EAX = (byte *)CONCAT31(uVar27,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x004022e0;
      *in_EAX = *in_EAX + cVar8;
      cVar8 = bVar7 + 0x71;
      in_EAX = (byte *)CONCAT31(uVar27,cVar8);
      bVar10 = *in_EAX;
      *in_EAX = *in_EAX + cVar8;
      uStack_c = uVar49;
      if (SCARRY1(bVar10,cVar8) == (char)*in_EAX < '\0') {
        *(byte *)((int)param_2 + (int)in_EAX) = *(byte *)((int)param_2 + (int)in_EAX) + cVar9;
        goto code_r0x004022ef;
      }
      *in_EAX = *in_EAX + cVar8;
      in_EAX = (byte *)CONCAT31(uVar27,bVar7 + 0x73);
      bVar52 = (POPCOUNT(bVar7 + 0x73) & 1U) == 0;
      puVar38 = param_2;
      in_ES = uVar49;
code_r0x00402366:
      if (!bVar52) {
        bVar52 = CARRY1(*in_EAX,(byte)in_EAX);
        *in_EAX = *in_EAX + (byte)in_EAX;
        goto code_r0x004022f3;
      }
code_r0x00402368:
      *in_EAX = *in_EAX + (char)in_EAX;
      cVar8 = (char)in_EAX + 'o';
      pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar8);
      *pcVar14 = *pcVar14 + cVar8;
      param_2 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(byte)puVar38 | *unaff_EBX);
      pcVar14 = pcVar14 + 0x37280512;
      bVar10 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar10;
      multiSettingsMapper =
           (uint *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                            CONCAT11((byte)((uint)multiSettingsMapper >> 8) | bRam7d160243,
                                     (char)multiSettingsMapper));
      pbVar29 = (byte *)((int)param_2 + (int)pcVar14);
      bVar7 = *pbVar29;
      *pbVar29 = *pbVar29 + bVar10;
      pcRam00008e7d = pcVar14 + (int)(pcRam00008e7d + CARRY1(bVar7,bVar10));
      bVar52 = SCARRY1(bVar10,'\x02');
      bVar10 = bVar10 + 2;
      puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar10);
code_r0x0040238b:
      if (bVar52 == (char)bVar10 < '\0') {
        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
        pcVar14 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 + '\x12');
code_r0x00402391:
        pcVar14 = pcVar14 + 0x42802;
        *unaff_EBX = *unaff_EBX + (char)((uint)multiSettingsMapper >> 8);
code_r0x00402399:
        bVar7 = (byte)unaff_EBX | (byte)((uint)multiSettingsMapper >> 8);
        uVar27 = (undefined3)((uint)pcVar14 >> 8);
        pcVar14 = (char *)CONCAT31(uVar27,1);
        *pcVar14 = *pcVar14 + '\x01';
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7)
                                                       + -0x72),bVar7));
        *pcVar14 = *pcVar14 + '\x01';
        uVar13 = CONCAT31(uVar27,0x14);
        pcVar14 = (char *)(uVar13 + 0x19061215 + (uint)(0x1f9edfd < uVar13));
        uVar2 = (uint)(0xe4ffffec < uVar13 + 0xfe061202 ||
                      CARRY4(uVar13 + 0x19061215,(uint)(0x1f9edfd < uVar13)));
        uVar13 = *unaff_ESI;
        uVar19 = *unaff_ESI;
        *unaff_ESI = (uint)(pcVar14 + uVar19 + uVar2);
        if ((SCARRY4(uVar13,(int)pcVar14) != SCARRY4((int)(pcVar14 + uVar19),uVar2)) !=
            (int)*unaff_ESI < 0) {
          bVar10 = (byte)pcVar14;
          *pcVar14 = *pcVar14 + bVar10;
          iVar15 = CONCAT31((int3)((uint)pcVar14 >> 8),bVar10 + 2) + 0x847d + (uint)(0xfd < bVar10);
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*param_2);
          pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x134f26);
          *unaff_EBX = *unaff_EBX + bVar7;
code_r0x004023cd:
          out(*unaff_ESI,(short)param_2);
          uVar13 = *param_2;
          *(byte *)param_2 = (byte)*param_2 + (byte)multiSettingsMapper;
          in_EAX = (byte *)(pcVar14 +
                           (uint)CARRY1((byte)uVar13,(byte)multiSettingsMapper) + *(int *)unaff_EDI)
          ;
          bVar55 = SCARRY1((char)param_2,(byte)*multiSettingsMapper);
          bVar7 = (char)param_2 + (byte)*multiSettingsMapper;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar7);
          bVar53 = (char)bVar7 < '\0';
          unaff_ESI = unaff_ESI + 1;
code_r0x004023d6:
          bVar52 = (POPCOUNT(bVar7) & 1U) == 0;
          in_ES = (ushort)uStack_14;
          puVar38 = param_2;
          if (bVar55 != bVar53) {
            *in_EAX = *in_EAX + (char)in_EAX;
code_r0x004023db:
            cVar9 = (char)in_EAX;
            uVar27 = (undefined3)((uint)in_EAX >> 8);
            cVar8 = cVar9 + '\x02';
            in_EAX = (byte *)CONCAT31(uVar27,cVar8);
            if ((POPCOUNT(cVar8) & 1U) != 0) {
              pbVar29 = (byte *)((int)puVar38 + (int)in_EAX);
              *pbVar29 = *pbVar29 + cVar8;
              bVar52 = (POPCOUNT(*pbVar29) & 1U) == 0;
              goto code_r0x00402366;
            }
            *in_EAX = *in_EAX + cVar8;
            cVar9 = cVar9 + '\x15';
            in_EAX = (byte *)CONCAT31(uVar27,cVar9);
            *(byte *)multiSettingsMapper = (byte)*multiSettingsMapper | (byte)puVar38;
            *unaff_EDI = *unaff_EDI | (byte)puVar38;
            if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
              *in_EAX = *in_EAX + cVar9;
              goto code_r0x00402425;
            }
            *in_EAX = *in_EAX + cVar9;
            cVar9 = cVar9 + (byte)*puVar38;
            pcVar14 = (char *)CONCAT31(uVar27,cVar9);
            if ((POPCOUNT(cVar9) & 1U) == 0) {
              *pcVar14 = *pcVar14 + cVar9;
              puVar26 = (ushort *)CONCAT31(uVar27,cVar9 + 'o');
              param_2 = puVar38;
code_r0x004023f6:
              uVar13 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)multiSettingsMapper;
              cVar8 = (char)puVar26;
              if (SCARRY1((byte)uVar13,(char)multiSettingsMapper) == (char)(byte)*param_2 < '\0') {
                in_ES = *puVar26;
                pbVar29 = (byte *)((int)param_2 + (int)puVar26);
                bVar52 = SCARRY1(*pbVar29,cVar8);
                *pbVar29 = *pbVar29 + cVar8;
                bVar10 = *pbVar29;
                goto code_r0x0040238b;
              }
              *(char *)puVar26 = (char)*puVar26 + cVar8;
              cVar8 = cVar8 + '\x02';
              pcVar14 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),cVar8);
              puVar38 = unaff_ESI;
              if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x00402402:
                *pcVar14 = *pcVar14 + (char)pcVar14;
                uVar27 = (undefined3)((uint)pcVar14 >> 8);
                piVar24 = (int *)CONCAT31(uVar27,(char)pcVar14 + 'r');
                *piVar24 = *piVar24 + 0x7b027000;
                cVar8 = (char)*piVar24;
                pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                pbVar29 = (byte *)((int)param_2 + (int)pcVar14);
                *pbVar29 = *pbVar29 + cVar8;
                unaff_ESI = puVar38;
                if ((POPCOUNT(*pbVar29) & 1U) == 0) {
                  *pcVar14 = *pcVar14 + cVar8;
                  bVar10 = cVar8 + '{' + *(char *)CONCAT31(uVar27,cVar8 + '{');
                  piVar24 = (int *)CONCAT31(uVar27,bVar10);
                  pbVar29 = (byte *)((int)piVar24 + (int)unaff_EBP);
                  bVar7 = *pbVar29;
                  *pbVar29 = *pbVar29 + bVar10;
                  *piVar24 = (*piVar24 - (int)piVar24) - (uint)CARRY1(bVar7,bVar10);
                  *(byte *)param_2 = (byte)*param_2 + (char)multiSettingsMapper;
                  unaff_ESI = puVar38 + 1;
                  out(*puVar38,(short)param_2);
                  cVar8 = bVar10 - (char)*piVar24;
                  in_EAX = (byte *)CONCAT31(uVar27,cVar8);
                  *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar8;
                  puVar38 = param_2;
code_r0x00402425:
                  uStack_14 = CONCAT22(uStack_14._2_2_,in_SS);
                  out(*unaff_ESI,(short)puVar38);
                  uVar13 = *puVar38;
                  *(byte *)puVar38 = (byte)*puVar38 + (byte)multiSettingsMapper;
                  uVar13 = (uint)CARRY1((byte)uVar13,(byte)multiSettingsMapper);
                  pbVar29 = (byte *)((int)multiSettingsMapper + *multiSettingsMapper) + uVar13;
                  multiSettingsMapper =
                       (uint *)CONCAT31((int3)((uint)pbVar29 >> 8),
                                        (char)pbVar29 + *pbVar29 +
                                        (CARRY4((uint)multiSettingsMapper,*multiSettingsMapper) ||
                                        CARRY4((int)multiSettingsMapper + *multiSettingsMapper,
                                               uVar13)));
                  cRam130a0000 = cRam130a0000 - (char)((uint)unaff_EBX >> 8);
                  param_2 = puVar38;
                  unaff_ESI = unaff_ESI + 1;
code_r0x00402435:
                  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                             (byte)param_2 | (byte)*param_2);
                  bVar7 = *in_EAX;
                  *in_EAX = *in_EAX + (char)in_EAX;
                  multiSettingsMapper =
                       (uint *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                                        CONCAT11((byte)((uint)multiSettingsMapper >> 8) | bVar7 |
                                                 bRam7d170243,(char)multiSettingsMapper));
code_r0x00402442:
                  pbVar29 = (byte *)((int)param_2 + (int)in_EAX);
                  bVar10 = *pbVar29;
                  bVar7 = (byte)in_EAX;
                  *pbVar29 = *pbVar29 + bVar7;
                  uVar13 = *param_2;
                  uVar19 = *param_2;
                  *param_2 = (uint)((byte *)(uVar19 + (int)multiSettingsMapper) +
                                   CARRY1(bVar10,bVar7));
                  puVar38 = param_2;
                  if ((SCARRY4(uVar13,(int)multiSettingsMapper) !=
                      SCARRY4((int)(uVar19 + (int)multiSettingsMapper),(uint)CARRY1(bVar10,bVar7)))
                      != (int)*param_2 < 0) {
                    *in_EAX = *in_EAX + bVar7;
                    bVar55 = SCARRY1(bVar7,'\x02');
                    bVar7 = bVar7 + 2;
                    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
code_r0x0040244f:
                    bVar53 = (char)bVar7 < '\0';
                    if (bVar55 == bVar53) {
code_r0x00402451:
                      *in_EAX = *in_EAX + (char)in_EAX;
                      bVar7 = (char)in_EAX + 0x12U | (byte)*param_2;
                      pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
                      cRam162b0000 = cRam162b0000 - bVar7;
code_r0x0040245d:
                      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                   (byte)unaff_EBX |
                                                   (byte)((uint)multiSettingsMapper >> 8));
                      cVar8 = in((short)param_2);
                      puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8);
                      *(char *)puVar26 = (char)*puVar26 + cVar8;
                      *(byte *)param_2 = (byte)*param_2 + cVar8;
                      if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
code_r0x00402466:
                        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
                        uVar27 = (undefined3)((uint)puVar26 >> 8);
                        bVar7 = (char)puVar26 + 0x13U | (byte)*param_2;
                        pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                        cVar8 = (byte)multiSettingsMapper + *unaff_EBX;
                        puVar38 = (uint *)CONCAT31((int3)((uint)multiSettingsMapper >> 8),cVar8);
                        cRam1b000019 = cRam1b000019 + '\x01';
                        uVar13 = (uint)CARRY1((byte)multiSettingsMapper,*unaff_EBX);
                        iVar15 = *(int *)unaff_EBX;
                        iVar1 = *(int *)unaff_EBX;
                        *(byte **)unaff_EBX = (byte *)(iVar1 + (int)puVar38) + uVar13;
                        if ((SCARRY4(iVar15,(int)puVar38) != SCARRY4(iVar1 + (int)puVar38,uVar13))
                            != *(int *)unaff_EBX < 0) {
                          *pcVar14 = *pcVar14 + bVar7;
                          iVar15 = CONCAT31(uVar27,bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
                          uVar27 = (undefined3)((uint)iVar15 >> 8);
                          bVar7 = (char)iVar15 + 0x12;
                          multiSettingsMapper =
                               (uint *)CONCAT22((short)((uint)multiSettingsMapper >> 0x10),
                                                CONCAT11((byte)((uint)multiSettingsMapper >> 8) |
                                                         *(byte *)CONCAT31(uVar27,bVar7),cVar8));
                          in_AF = 9 < (bVar7 & 0xf) | in_AF;
                          uVar13 = CONCAT31(uVar27,bVar7 + in_AF * -6) & 0xffffff0f;
                          pcVar14 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                                     CONCAT11((char)((uint)iVar15 >> 8) - in_AF,
                                                              (char)uVar13));
code_r0x00402486:
                          *pcVar14 = *pcVar14 + (char)pcVar14;
                          puVar17 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                                     (byte)param_2 | (byte)*param_2);
                          uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
                          bVar7 = (byte)((uint)unaff_EBX >> 8) | (byte)((uint)param_2 >> 8);
                          in_EAX = (byte *)(pcVar14 + 0x1b000019);
                          puVar38 = (uint *)((int)puVar17 + (int)in_EAX);
                          bVar52 = CARRY4((uint)multiSettingsMapper,*puVar38);
                          pbVar29 = (byte *)((int)multiSettingsMapper + *puVar38);
                          multiSettingsMapper = (uint *)(pbVar29 + ((char *)0xe4ffffe6 < pcVar14));
                          piVar24 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                          *piVar24 = (int)((int)multiSettingsMapper +
                                          (uint)(bVar52 ||
                                                CARRY4((uint)pbVar29,
                                                       (uint)((char *)0xe4ffffe6 < pcVar14))) +
                                          *piVar24);
                          unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(bVar7 + *(char *)(CONCAT22(
                                                  uVar34,CONCAT11(bVar7,(char)unaff_EBX)) + -0x79),
                                                  (char)unaff_EBX));
                          param_2 = puVar17;
code_r0x0040249e:
                          bVar7 = (byte)in_EAX;
                          *in_EAX = *in_EAX + bVar7;
                          uVar27 = (undefined3)((uint)in_EAX >> 8);
                          cVar8 = bVar7 + 2;
                          in_EAX = (byte *)CONCAT31(uVar27,cVar8);
                          puVar38 = param_2;
                          if (0xfd < bVar7) {
                            bVar10 = *in_EAX;
                            *in_EAX = *in_EAX + cVar8;
                            uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
                            if (SCARRY1(bVar10,cVar8) == (char)*in_EAX < '\0')
                            goto code_r0x00402435;
                            *in_EAX = *in_EAX + cVar8;
                            cVar8 = bVar7 + 4;
                            pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                            if ((POPCOUNT(cVar8) & 1U) != 0) {
                              *(byte *)param_2 = (byte)*param_2 + (char)multiSettingsMapper;
                              in_EAX = (byte *)(pcVar14 + -0x7d170243);
                              goto code_r0x00402442;
                            }
                            *pcVar14 = *pcVar14 + cVar8;
                            cVar8 = bVar7 + 6;
                            pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                            if ((POPCOUNT(cVar8) & 1U) == 0) {
                              while( true ) {
                                cVar8 = (char)pcVar14;
                                *pcVar14 = *pcVar14 + cVar8;
                                uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '}');
                                unaff_ESI = (uint *)((int)unaff_ESI + -1);
                                *pcVar14 = *pcVar14 + cVar8 + '}';
                                cVar9 = cVar8 + '\x7f';
                                in_EAX = (byte *)CONCAT31(uVar27,cVar9);
                                if ((POPCOUNT(cVar9) & 1U) != 0) break;
                                *in_EAX = *in_EAX + cVar9;
                                cVar9 = cVar8 + -0x7f;
                                in_EAX = (byte *)CONCAT31(uVar27,cVar9);
                                if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00402451;
                                *in_EAX = *in_EAX + cVar9;
                                pcVar14 = (char *)CONCAT31(uVar27,cVar8 + -2);
                                unaff_EDI = unaff_EDI + -1;
                                while( true ) {
                                  cVar8 = (char)pcVar14;
                                  *pcVar14 = *pcVar14 + cVar8;
                                  uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                  cVar9 = cVar8 + '\x02';
                                  pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                                  if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040245d;
                                  *pcVar14 = *pcVar14 + cVar9;
                                  pcVar14 = (char *)(CONCAT31(uVar27,cVar8 + 'q') + 1);
                                  *pcVar14 = *pcVar14 + (byte)pcVar14;
                                  uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                  bVar7 = (byte)pcVar14 | (byte)*param_2;
                                  pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                                  if ((POPCOUNT(bVar7) & 1U) != 0) {
                                    multiSettingsMapper =
                                         (uint *)((int)multiSettingsMapper + *param_2);
                                    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                                               (char)param_2 + (byte)*param_2);
                                    unaff_EDI = (byte *)((uint)unaff_EDI | (uint)unaff_ESI);
                                    puVar26 = (ushort *)(pcVar14 + 0x1b000019);
                                    goto code_r0x00402466;
                                  }
                                  *pcVar14 = *pcVar14 + bVar7;
                                  pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x6f);
                                  multiSettingsMapper = (uint *)((int)multiSettingsMapper + 1);
                                  *pcVar14 = *pcVar14 + bVar7 + 0x6f;
                                  uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
                                  bVar7 = (byte)unaff_EBX;
                                  bVar10 = (byte)((uint)unaff_EBX >> 8) | (byte)*param_2;
                                  in_SS = (ushort)uStack_14;
                                  uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
                                  cVar9 = (char)(pcVar14 + -0x21000001);
                                  uVar27 = (undefined3)((uint)(pcVar14 + -0x21000001) >> 8);
                                  cVar8 = cVar9 + -0x13;
                                  pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                                  cVar45 = bVar10 + *(char *)(CONCAT22(uVar34,CONCAT11(bVar10,bVar7)
                                                                      ) + -0x73);
                                  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,bVar7));
                                  *pcVar14 = *pcVar14 + cVar8;
                                  pcVar14 = (char *)(CONCAT31(uVar27,cVar9 + '\x19') | *param_2);
                                  if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0)
                                  goto code_r0x00402486;
                                  cVar8 = (char)pcVar14;
                                  *pcVar14 = *pcVar14 + cVar8;
                                  uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                  pcVar18 = (char *)CONCAT31(uVar27,cVar8 + 'o');
                                  puVar38 = (uint *)((int)param_2 + 1);
                                  *pcVar18 = *pcVar18 + cVar8 + 'o';
                                  bVar7 = bVar7 | (byte)((uint)pcVar14 >> 8);
                                  pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '\\');
                                  cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar7) + -0x78);
                                  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,bVar7));
                                  *pcVar14 = *pcVar14 + cVar8 + '\\';
                                  pcVar14 = (char *)(CONCAT31(uVar27,cVar8 + -0x78) | *puVar38);
                                  cVar8 = (char)pcVar14;
                                  uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                  if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                                    in_EAX = (byte *)CONCAT31(uVar27,cVar8 + '\x02');
                                    param_2 = puVar38;
                                    if ((POPCOUNT(cVar8 + '\x02') & 1U) == 0) goto code_r0x0040249e;
                                    goto code_r0x00402425;
                                  }
                                  *pcVar14 = *pcVar14 + cVar8;
                                  cVar9 = cVar8 + 'o';
                                  pcVar18 = (char *)CONCAT31(uVar27,cVar9);
                                  param_2 = (uint *)((int)param_2 + 2);
                                  *pcVar18 = *pcVar18 + cVar9;
                                  bVar7 = bVar7 | (byte)((uint)pcVar14 >> 8);
                                  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45 + *(char *)(
                                                  CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7) +
                                                  -0x79),bVar7));
                                  *pcVar18 = *pcVar18 + cVar9;
                                  pcVar14 = (char *)(CONCAT31(uVar27,cVar8 + 'z') | 2);
                                  unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                  cVar8 = (char)pcVar14;
                                  *pcVar14 = *pcVar14 + cVar8;
                                  cVar9 = cVar8 + '\x02';
                                  pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                                  if (SCARRY1(cVar8,'\x02') != cVar9 < '\0') break;
                                  *pcVar14 = *pcVar14 + cVar9;
                                  cVar9 = cVar8 + '\n';
                                  *unaff_EBX = *unaff_EBX - cVar9;
                                  *(byte *)param_2 = *(byte *)param_2 + (char)multiSettingsMapper;
                                  unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                  *(char *)CONCAT31(uVar27,cVar9) =
                                       *(char *)CONCAT31(uVar27,cVar9) + cVar9;
                                  cVar45 = cVar8 + '\f';
                                  pcVar14 = (char *)CONCAT31(uVar27,cVar45);
                                  if (SCARRY1(cVar9,'\x02') == cVar45 < '\0') {
                                    *pcVar14 = *pcVar14 + cVar45;
                                    pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '\x13');
                                    uVar49 = in_ES;
                                    goto code_r0x0040254a;
                                  }
                                }
                              }
                              pbVar29 = (byte *)((int)param_2 + (int)in_EAX);
                              bVar55 = SCARRY1(*pbVar29,cVar9);
                              *pbVar29 = *pbVar29 + cVar9;
                              bVar7 = *pbVar29;
                              goto code_r0x0040244f;
                            }
                            cVar9 = (char)param_2;
                            cVar45 = cVar9 + *unaff_EDI;
                            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar45);
                            if (SCARRY1(cVar9,*unaff_EDI) != cVar45 < '\0') {
                              *pcVar14 = *pcVar14 + cVar8;
                              in_EAX = (byte *)CONCAT31(uVar27,bVar7 + 8);
                              goto code_r0x00402442;
                            }
                            cRam1b000013 = cRam1b000013 + '\x01';
                            goto code_r0x004023cd;
                          }
                          goto code_r0x00402425;
                        }
                        pcVar18 = pcVar14 + 2;
                        *pcVar18 = *pcVar18 + (char)((uint)param_2 >> 8);
                        multiSettingsMapper = puVar38;
                        if ((POPCOUNT(*pcVar18) & 1U) == 0) {
                          *pcVar14 = *pcVar14 + bVar7;
                          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 2);
                          puVar38 = unaff_ESI;
                          goto code_r0x00402402;
                        }
                        param_2 = (uint *)((int)param_2 - *unaff_ESI);
                        goto code_r0x00402399;
                      }
                      goto code_r0x004023f6;
                    }
                    goto code_r0x004023d6;
                  }
                  goto code_r0x004023db;
                }
                goto code_r0x00402399;
              }
              unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    unaff_EBP[(int)pcVar14 * 4],(char)unaff_EBX));
              *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + cVar8;
              goto code_r0x00402391;
            }
            *pcVar14 = *pcVar14 + cVar9;
            in_EAX = (byte *)CONCAT31(uVar27,cVar9 + '\x02');
            goto code_r0x00402368;
          }
          goto code_r0x00402366;
        }
        goto code_r0x00402342;
      }
      LOCK();
      pcVar14 = *(char **)puVar26;
      *(ushort **)puVar26 = puVar26;
      UNLOCK();
      *(byte *)((int)param_2 + (int)pcVar14) =
           *(byte *)((int)param_2 + (int)pcVar14) + (char)pcVar14;
    }
code_r0x004022ab:
    *(byte *)puVar38 = (byte)*puVar38 + (char)multiSettingsMapper;
    bVar7 = (char)pbVar40 - *pbVar40;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
    *unaff_EBX = *unaff_EBX + (char)puVar38;
    *unaff_EBX = *unaff_EBX ^ bVar7;
    param_2 = puVar38;
    unaff_ESI = puVar17;
code_r0x004022b3:
    *(byte *)param_2 = (byte)*param_2 + (char)((uint)multiSettingsMapper >> 8);
    bVar10 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar10;
    *unaff_EBX = *unaff_EBX + bVar10;
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar10;
    *(byte **)(unaff_EBX + 0x2c) =
         (byte *)((int)unaff_ESI + (uint)CARRY1(bVar7,bVar10) + *(int *)(unaff_EBX + 0x2c));
  } while( true );
code_r0x0040254a:
  cVar8 = (char)pcVar14;
  *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) - cVar8;
  *pcVar14 = *pcVar14 + cVar8;
  pcVar18 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8 + *pcVar14);
  *pcVar18 = *pcVar18 + cVar8 + *pcVar14;
  uStack_18 = 0x4025;
  uVar56 = func_0x0f40255d();
  uVar51 = uStack_18;
code_r0x0040255d:
  uStack_18 = uVar51;
  pcVar14 = (char *)((ulonglong)uVar56 >> 0x20);
  piVar24 = (int *)uVar56;
  *piVar24 = (int)((int)piVar24 + *piVar24);
  uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar43 = SUB41(unaff_EBX,0);
  cVar45 = (char)((uint)unaff_EBX >> 8) + (char)((ulonglong)uVar56 >> 0x28);
  pcVar18 = (char *)CONCAT22(uVar34,CONCAT11(cVar45,uVar43));
  *piVar24 = (int)((int)piVar24 + *piVar24);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar56 >> 0x20);
  cVar8 = (char)uVar56;
  *(char *)piVar24 = (char)*piVar24 + cVar8;
  *(char *)piVar24 = (char)*piVar24 + cVar8;
  *(char *)piVar24 = (char)*piVar24 + cVar8;
  *pcVar14 = *pcVar14 + cVar8;
  *(char *)piVar24 = (char)*piVar24 + cVar8;
  *pcVar18 = *pcVar18 + cVar8;
  *(char *)piVar24 = (char)*piVar24 + cVar8;
  pcVar3 = (code *)swi(1);
  uVar56 = (*pcVar3)();
  pbVar40 = (byte *)((ulonglong)uVar56 >> 0x20);
  pbVar29 = (byte *)uVar56;
  bVar7 = *pbVar29;
  bVar10 = (byte)uVar56;
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar40 = *pbVar40 + bVar10 + CARRY1(bVar7,bVar10);
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar29 = *pbVar29 + bVar10;
  *pbVar29 = *pbVar29 + bVar10;
  cVar8 = (char)((ulonglong)uVar56 >> 0x28);
  *pbVar29 = *pbVar29 + cVar8;
  bVar7 = *pbVar29;
  uVar27 = (undefined3)((ulonglong)uVar56 >> 8);
  pcVar14 = (char *)CONCAT31(uVar27,bVar10 + bVar7);
  *pcVar14 = *pcVar14 + cVar8;
  cVar8 = bVar10 + bVar7 + *pcVar14;
  pcVar14 = (char *)CONCAT31(uVar27,cVar8);
  cVar9 = (char)((ulonglong)uVar56 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar9;
  *pcVar14 = *pcVar14 + cVar8;
  *pcVar14 = *pcVar14 + cVar9;
  *pcVar14 = *pcVar14 + cVar8;
  *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
  cVar45 = cVar45 + unaff_EBP[(int)pcVar14 * 4];
  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,uVar43));
  unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14] + cVar8;
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar8;
  *pbVar40 = *pbVar40 + (char)extraout_ECX;
  bVar10 = cVar8 - *pcVar14;
  pcVar14 = (char *)CONCAT31(uVar27,bVar10);
  *unaff_EBX = *unaff_EBX + cVar9;
  *pbVar40 = *pbVar40 ^ bVar10;
  *pbVar40 = *pbVar40 + cVar45;
  *pcVar14 = *pcVar14 + bVar10;
  cRam12110000 = cRam12110000 + bVar10;
  bVar7 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar10;
  pbVar29 = extraout_ECX;
  if (SCARRY1(bVar7,bVar10) != (char)*pbVar40 < '\0') {
code_r0x004025bd:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12');
    *pcVar14 = *pcVar14 + (char)((uint)pbVar29 >> 8);
    pcVar14 = pcVar14 + -1;
    cVar8 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar8;
    bVar7 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x7b];
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar7,(char)unaff_EBX));
    *pcVar14 = *pcVar14 + cVar8;
    cRam0000847d = cRam0000847d + (char)pbVar40;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8 + '$');
    unaff_EBX[-0x7b] = unaff_EBX[-0x7b] + bVar7;
    pbVar25 = pbVar29;
code_r0x004025d8:
    bVar7 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
    bVar52 = 0xf4 < bVar7;
    pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 + 0xb);
    pbVar16 = unaff_EBP;
    do {
      bVar7 = (byte)pcVar14 + *pbVar25;
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      cVar8 = bVar7 + bVar52;
      cVar8 = cVar8 + *(char *)CONCAT31(uVar27,cVar8) +
              (CARRY1((byte)pcVar14,*pbVar25) || CARRY1(bVar7,bVar52));
      pcVar14 = (char *)CONCAT31(uVar27,cVar8);
      *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar8;
      *pcVar14 = *pcVar14 + cVar8;
      iVar15 = *(int *)pbVar40;
      pbVar16[(int)pcVar14 * 4] = pbVar16[(int)pcVar14 * 4] + (char)((uint)unaff_EBX >> 8);
      pcVar14[(int)pbVar16] = pcVar14[(int)pbVar16] + cVar8;
      pbVar39 = pbVar40 + (-1 - iVar15);
      *pcVar14 = *pcVar14 + cVar8;
      pbVar29 = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar25 >> 8) | *pbVar39) + unaff_EDI[0x22],
                                          (char)pbVar25));
      *pcVar14 = *pcVar14 + cVar8;
      bVar36 = (char)pbVar39 - pbVar40[1 - iVar15];
      bVar11 = cVar8 - 0xf;
      pbVar25 = (byte *)CONCAT31(uVar27,bVar11);
      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar39 >> 0x10),
                                 CONCAT11((char)((uint)pbVar39 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar39 >> 8),bVar36) +
                                                   -0x3f),bVar36));
      bVar7 = *pbVar25;
      bVar10 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar11;
      uVar51 = uVar49;
      if (SCARRY1(bVar10,bVar11)) {
        pbVar25 = (byte *)CONCAT31(uVar27,bVar11 + pbVar25[(int)pbVar16] + CARRY1(bVar7,bVar11));
        goto code_r0x00402677;
      }
      unaff_EBX = unaff_EBX + -1;
      *pbVar25 = *pbVar25 + bVar11;
      uVar13 = *unaff_ESI;
      *pbVar29 = *pbVar29 + 1;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),
                                 (bVar36 | (byte)uVar13) - (byte)*unaff_ESI);
      unaff_ESI = (uint *)((int)unaff_ESI +
                          (-(uint)(bVar11 < *pbVar25) - *(int *)CONCAT31(uVar27,bVar11 - *pbVar25)))
      ;
      unaff_EBP = (byte *)CONCAT31(uVar27,bVar11 - *pbVar25);
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      bVar10 = (byte)pbVar16;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar10;
      *(byte **)unaff_EDI = pbVar40 + (uint)CARRY1(bVar7,bVar10) + *(int *)unaff_EDI;
      uVar27 = (undefined3)((uint)pbVar16 >> 8);
      bVar10 = bVar10 | *pbVar40;
      pcVar14 = (char *)CONCAT31(uVar27,bVar10);
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        *pcVar14 = *pcVar14 + bVar10;
        uVar56 = CONCAT44(pbVar40,pcVar14 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar14 = *pcVar14 + bVar10;
      bVar7 = bVar10 + 0xd;
      pbVar25 = (byte *)CONCAT31(uVar27,bVar7);
      *unaff_ESI = *unaff_ESI | (uint)pbVar40;
      if (-1 < (int)*unaff_ESI) {
code_r0x00402678:
        *pbVar25 = *pbVar25 + (char)pbVar25;
        pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar29 >> 8) | bRam7d160243,(char)pbVar29)
                                  );
        pbVar16 = unaff_EDI;
code_r0x00402680:
        bVar7 = (byte)pbVar29;
        *pbVar29 = *pbVar29 + bVar7;
        uVar27 = (undefined3)((uint)pbVar29 >> 8);
        piVar24 = (int *)((int)pbVar16 * 2 + 0x400009a);
        *piVar24 = *piVar24 + CONCAT31(uVar27,bVar7 + 2) + (uint)(0xfd < bVar7);
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)((int)pbVar40 * 5),(char)unaff_EBX));
        *(char *)((int)pbVar40 * 2) = *(char *)((int)pbVar40 * 2) + bVar7 + 2;
        pbStack_20 = (byte *)CONCAT31(uVar27,bVar7 + 4);
        *pbVar16 = *pbVar16 - (bVar7 + 4);
code_r0x00402697:
        *pbStack_20 = *pbStack_20 + (char)pbStack_20;
        pbVar40 = pbVar40 + -*unaff_ESI;
        unaff_EDI = pbStack_20;
code_r0x0040269b:
        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                     (byte)unaff_EBX | (byte)((uint)pbVar25 >> 8));
        uVar30 = GlobalDescriptorTableRegister();
        *(undefined4 *)unaff_EDI = uVar30;
        cVar8 = (char)unaff_EDI;
        *pbVar40 = *pbVar40 + cVar8;
        if ((POPCOUNT(*pbVar40) & 1U) == 0) {
          *unaff_EDI = *unaff_EDI + cVar8;
          pcVar14 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8 + '\x13');
          pbVar29 = pbVar25;
          unaff_EDI = pbVar16;
code_r0x004026a8:
          uVar27 = (undefined3)((uint)pcVar14 >> 8);
          bVar10 = (byte)pcVar14 + 2 + cRam001b15fe + (0xfd < (byte)pcVar14);
          bVar7 = *unaff_EBX;
          bVar11 = (byte)unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar11;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar27,bVar10) + (uint)CARRY1(bVar7,bVar11);
          iVar15 = CONCAT31(uVar27,bVar10 + 2) + 0x917d + (uint)(0xfd < bVar10);
          cVar8 = (char)iVar15;
          uVar27 = (undefined3)((uint)iVar15 >> 8);
          bVar7 = cVar8 + 0x3a;
          pbStack_20 = (byte *)CONCAT31(uVar27,bVar7);
          *pbStack_20 = *pbStack_20 + bVar7;
          uVar42 = (undefined3)((uint)pbVar40 >> 8);
          bVar10 = (byte)pbVar40 | *pbVar40;
          uVar19 = CONCAT31(uVar27,cVar8 + '8');
          uVar13 = uVar19 + 0x1b00001b;
          pcVar14 = (char *)(uVar13 + (1 < bVar7) + *unaff_ESI +
                            (uint)(0xe4ffffe4 < uVar19 || CARRY4(uVar13,(uint)(1 < bVar7))));
          bVar7 = bVar10 + *pbVar29;
          pbVar40 = (byte *)CONCAT31(uVar42,bVar7);
          uVar27 = (undefined3)((uint)pcVar14 >> 8);
          cVar8 = (char)pcVar14;
          if (SCARRY1(bVar10,*pbVar29) != (char)bVar7 < '\0') {
            *pcVar14 = *pcVar14 + cVar8;
            pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '\x02');
            uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
            cVar45 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x68];
            unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,bVar11));
            *pcVar14 = *pcVar14 + cVar8 + '\x02';
            bVar10 = cVar8 + 0x2a;
            pbVar25 = (byte *)CONCAT31(uVar27,bVar10);
            *pbVar25 = *pbVar25 | bVar10;
            bVar7 = *unaff_EBX;
            cVar9 = (char)((uint)pbVar29 >> 8);
            *unaff_EBX = *unaff_EBX + cVar9;
            pbVar16 = unaff_EDI;
            if (SCARRY1(bVar7,cVar9) != (char)*unaff_EBX < '\0') {
              *pbVar25 = *pbVar25 + bVar10;
              bVar7 = cVar8 + 0x2c;
              if ((POPCOUNT(bVar7) & 1U) == 0) {
                *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                bVar10 = cVar8 + 0x59;
                pcVar14 = (char *)CONCAT31(uVar27,bVar10);
                *(char **)pbVar40 = pcVar14 + (uint)(0xd2 < bVar7) + *(int *)pbVar40;
                unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45 + unaff_EBX[-0x67],bVar11));
                *pcVar14 = *pcVar14 + bVar10;
                pbVar16 = (byte *)((CONCAT31(uVar27,cVar8 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar10));
                pbVar25 = pbVar29;
                uStack_1c = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar8 = (char)unaff_EDI + '\x02';
                unaff_EDI = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8);
                bVar52 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00402704:
                if (bVar52) {
                  *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                  cVar8 = (char)unaff_EDI + '\x02';
                  pcVar14 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8);
                  puVar38 = unaff_ESI;
                  if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x0040270c:
                    uVar50 = in_ES;
                    cVar8 = (char)pcVar14;
                    *pcVar14 = *pcVar14 + cVar8;
                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                    bVar7 = cVar8 + 0x6f;
                    piVar24 = (int *)CONCAT31(uVar27,bVar7);
                    iVar15 = *piVar24;
                    *(byte *)piVar24 = (char)*piVar24 + bVar7;
                    in_ES = uVar50;
                    uVar51 = uStack_1c;
                    pbVar29 = pbVar40;
                    if ((char)*piVar24 != '\0' &&
                        SCARRY1((char)iVar15,bVar7) == (char)*piVar24 < '\0') {
                      *(byte *)piVar24 = (char)*piVar24 + bVar7;
                      bVar10 = cVar8 + 0x9c;
                      piVar24 = (int *)CONCAT31(uVar27,bVar10);
                      puVar17 = puVar38 + (int)pbVar16 * 2;
                      uVar13 = *puVar17;
                      uVar19 = *puVar17;
                      *puVar17 = (uint)(pbVar40 + uVar19 + (0xd2 < bVar7));
                      pbStack_20 = (byte *)CONCAT22(pbStack_20._2_2_,uVar50);
                      *piVar24 = (*piVar24 - (int)piVar24) -
                                 (uint)(CARRY4(uVar13,(uint)pbVar40) ||
                                       CARRY4((uint)(pbVar40 + uVar19),(uint)(0xd2 < bVar7)));
                      uVar13 = *puVar38;
                      *(byte *)puVar38 = (byte)*puVar38 + bVar10;
                      pbVar29 = pbStack_20;
                      if (!CARRY1((byte)uVar13,bVar10)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    pbStack_20 = pbVar29;
                    *(byte *)piVar24 = (char)*piVar24 + (byte)piVar24;
                    uVar27 = (undefined3)((uint)piVar24 >> 8);
                    bVar7 = (byte)piVar24 | *(byte *)((int)piVar24 + 0x400000d);
                    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                    if ((char)bVar7 < '\x01') {
                      bVar52 = pcVar14 < (char *)0x6fe1411;
                      pcVar14 = pcVar14 + -0x6fe1411;
                    }
                    else {
                      *pcVar14 = *pcVar14 + bVar7;
                      bVar11 = bVar7 + 0x28;
                      puVar17 = (uint *)CONCAT31(uVar27,bVar11);
                      *puVar17 = *puVar17 | (uint)puVar17;
                      bVar10 = *unaff_EBX;
                      cVar8 = (char)((uint)pbVar25 >> 8);
                      *unaff_EBX = *unaff_EBX + cVar8;
                      if (*unaff_EBX == 0 || SCARRY1(bVar10,cVar8) != (char)*unaff_EBX < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar17 = (char)*puVar17 + bVar11;
                      pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x55);
                      puVar17 = puVar38 + (int)pbVar16 * 2;
                      bVar52 = CARRY4(*puVar17,(uint)pbVar40) ||
                               CARRY4((uint)(pbVar40 + *puVar17),(uint)(0xd2 < bVar11));
                      *puVar17 = (uint)(pbVar40 + *puVar17 + (0xd2 < bVar11));
                    }
                    while( true ) {
                      uVar27 = (undefined3)((uint)pcVar14 >> 8);
                      bVar7 = ((char)pcVar14 - *pcVar14) - bVar52;
                      puVar17 = (uint *)CONCAT31(uVar27,bVar7);
                      uVar13 = *puVar38;
                      *(byte *)puVar38 = (byte)*puVar38 + bVar7;
                      if (CARRY1((byte)uVar13,bVar7)) break;
                      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                   (byte)unaff_EBX | (byte)((uint)pbVar40 >> 8));
                      pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 2);
                      while( true ) {
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar8 = (char)pcVar14;
                        *pcVar14 = *pcVar14 + cVar8;
                        uVar27 = (undefined3)((uint)pcVar14 >> 8);
                        bVar7 = cVar8 + 2;
                        pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                        uVar51 = (ushort)pbStack_20;
                        if (SCARRY1(cVar8,'\x02') != (char)bVar7 < '\0') break;
                        *pcVar14 = *pcVar14 + bVar7;
                        cVar45 = (char)pbVar40;
                        *pbVar16 = *pbVar16 - cVar45;
                        *pbVar40 = *pbVar40 + (char)pbVar25;
                        bVar10 = (cVar8 + '\t') - *(char *)CONCAT31(uVar27,cVar8 + '\t');
                        pbVar29 = (byte *)CONCAT31(uVar27,bVar10);
                        bVar7 = *pbVar29;
                        *pbVar29 = *pbVar29 + bVar10;
                        pbVar39 = pbVar25 + 1;
                        cVar8 = bVar10 - CARRY1(bVar7,bVar10);
                        pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                        *pcVar14 = *pcVar14 + cVar8;
                        *pcVar14 = *pcVar14 + cVar8;
                        *pcVar14 = *pcVar14 + cVar8;
                        *pcVar14 = *pcVar14 + cVar8;
                        cVar9 = (char)((uint)pbVar39 >> 8);
                        pbVar25[2] = pbVar25[2] + cVar9;
                        *pcVar14 = *pcVar14 + cVar8;
                        pcVar14 = (char *)(*(int *)pbVar39 * 0x170000);
                        *pcVar14 = *pcVar14;
                        *pcVar14 = *pcVar14;
                        *pbVar39 = *pbVar39;
                        uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
                        cVar8 = (char)unaff_EBX;
                        bVar11 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)pbVar40 * 5);
                        unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(bVar11,cVar8));
                        unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14];
                        *pcVar14 = *pcVar14 - cVar8;
                        *pbVar40 = *pbVar40 + (char)pbVar39;
                        uVar27 = (undefined3)((uint)pcVar14 >> 8);
                        bVar10 = -*pcVar14;
                        pbVar29 = (byte *)CONCAT31(uVar27,bVar10);
                        *unaff_EBX = *unaff_EBX + cVar45;
                        *pbVar40 = *pbVar40 ^ bVar10;
                        *pbVar40 = *pbVar40 + bVar10;
                        *pbVar29 = *pbVar29 + bVar10;
                        bVar7 = *pbVar29;
                        *pbVar29 = *pbVar29 + bVar10;
                        *(byte **)pbVar40 = pbVar40 + (uint)CARRY1(bVar7,bVar10) + *(int *)pbVar40;
                        bVar7 = *pbVar40;
                        *pbVar40 = *pbVar40 + bVar10;
                        if (SCARRY1(bVar7,bVar10) == (char)*pbVar40 < '\0') {
                          pcVar14 = (char *)((uint)pbVar29 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar14 = *pcVar14 + (char)pcVar14;
                          uStack_18 = uVar49;
                          uVar51 = (ushort)uStack_14;
                        }
                        else {
                          *pbVar29 = *pbVar29 + bVar10;
                          cVar12 = bVar10 + 0x12;
                          pcVar14 = (char *)CONCAT31(uVar27,cVar12);
                          bVar7 = *unaff_EBX;
                          *unaff_EBX = *unaff_EBX + cVar12;
                          if (SCARRY1(bVar7,cVar12) != (char)*unaff_EBX < '\0') {
                            *pcVar14 = *pcVar14 + cVar12;
                            cVar12 = bVar10 + 0x24;
                            pcVar14 = (char *)CONCAT31(uVar27,cVar12);
                            *pcVar14 = *pcVar14 + cVar9;
                            pbVar29 = (byte *)CONCAT13(uStack_15,(uint3)uVar49);
                            *pcVar14 = *pcVar14 + cVar12;
                            bVar11 = bVar11 | unaff_EBP[-0x6e];
                            pcVar18 = (char *)CONCAT22(uVar34,CONCAT11(bVar11,cVar8));
                            *pcVar14 = *pcVar14 + cVar12;
                            cRam0000917d = cRam0000917d + cVar45;
                            bVar36 = bVar10 + 0x48;
                            pcVar18[-0x6e] = pcVar18[-0x6e] + bVar11;
                            *(char *)CONCAT31(uVar27,bVar36) =
                                 *(char *)CONCAT31(uVar27,bVar36) + bVar36;
                            bVar7 = bVar10 + 0x53 + *pbVar29;
                            cVar8 = bVar7 + (0xf4 < bVar36);
                            cVar8 = cVar8 + *(char *)CONCAT31(uVar27,cVar8) +
                                    (CARRY1(bVar10 + 0x53,*pbVar29) || CARRY1(bVar7,0xf4 < bVar36));
                            pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                            *pcVar18 = *pcVar18 - (char)uVar49;
                            *pcVar14 = *pcVar14 + cVar8;
                            pbVar40 = pbVar40 + -*(int *)pbVar40;
                            *(char *)((int)pbVar40 * 5) = *(char *)((int)pbVar40 * 5) + bVar11;
                            pcVar14[(int)unaff_EBP] = pcVar14[(int)unaff_EBP] + cVar8;
                            *pcVar14 = *pcVar14 + cVar8;
                            bVar10 = (byte)(uVar49 >> 8) | *pbVar40;
                            uVar43 = (undefined1)uStack_14;
                            cVar9 = (char)((uint)uStack_14 >> 8) + *(char *)(uStack_14 + 0xf);
                            *pcVar14 = *pcVar14 + cVar8;
                            bVar7 = cVar8 + 0x2aU & *pbVar40;
                            iVar15 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
                            cVar9 = cVar9 + *(char *)(CONCAT22(uStack_14._2_2_,
                                                               CONCAT11(cVar9,uVar43)) + 0x10);
                            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar40;
                            iVar1 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
                            puVar44 = (uint *)CONCAT22(uStack_14._2_2_,
                                                       CONCAT11(cVar9 + *(char *)(CONCAT22(uStack_14
                                                  ._2_2_,CONCAT11(cVar9,uVar43)) + 0x11),uVar43));
                            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar40;
                            puVar47 = (uint *)(pbVar16 + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar15
                                              );
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pbVar25 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
                            puVar17 = (uint *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                                       CONCAT11(bVar10 + *pbVar25,(char)uVar49));
                            uVar56 = CONCAT44(pbVar40,pbVar25 + (uint)CARRY1(bVar10,*pbVar25) +
                                                                *(int *)pbVar25);
                            uVar49 = (ushort)pbStack_20;
                            goto code_r0x00402866;
                          }
                        }
                        cVar9 = (char)pcVar14;
                        uVar27 = (undefined3)((uint)pcVar14 >> 8);
                        cVar8 = cVar9 + '\x02';
                        piVar24 = (int *)CONCAT31(uVar27,cVar8);
                        pbVar25 = pbVar39;
                        in_ES = (ushort)pbStack_20;
                        pbVar29 = pbVar40;
                        if (SCARRY1(cVar9,'\x02') != cVar8 < '\0') goto code_r0x00402724;
                        *(char *)piVar24 = (char)*piVar24 + cVar8;
                        pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '\n');
                        *(byte *)puVar38 = (byte)*puVar38 - cVar45;
                        *pbVar40 = *pbVar40 + (char)pbVar39;
                      }
                      pbVar29 = unaff_EBP + 0x6fe1411;
                      bVar52 = CARRY1(*pbVar29,bVar7);
                      *pbVar29 = *pbVar29 + bVar7;
                    }
                    goto code_r0x00402746;
                  }
                  unaff_EBX[(int)pbVar40] = unaff_EBX[(int)pbVar40] + cVar8;
                  pbVar29 = pbVar25;
                  unaff_EDI = pbVar16;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar50 = 0x927c;
              in_stack_ffffffd4 = 0x40268f;
              uVar56 = func_0x02040000(in_CS);
              pbVar40 = (byte *)((ulonglong)uVar56 >> 0x20);
              *(char *)uVar56 = *(char *)uVar56 + (char)uVar56;
              pbVar25 = (byte *)CONCAT31((int3)((ulonglong)uVar56 >> 8),(char)uVar56 + '\x12');
              pbVar29 = extraout_ECX_00;
              in_CS = uVar50;
            }
            goto code_r0x00402680;
          }
          pbVar16 = unaff_EBP + -1;
          *pcVar14 = *pcVar14 + cVar8;
          pbVar40 = (byte *)CONCAT31(uVar42,bVar7 | *unaff_EBX);
          pbVar25 = (byte *)CONCAT31(uVar27,cVar8 + ':');
code_r0x00402677:
          unaff_ESI = (uint *)((int)unaff_ESI + -1);
          unaff_EBP = pbVar16;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar25 = *pbVar25 + bVar7;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x6b],
                                            (char)unaff_EBX));
      *pbVar25 = *pbVar25 + bVar7;
      cVar8 = bVar10 + 0xf;
      pcVar14 = (char *)CONCAT31(uVar27,cVar8);
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_18);
      if (SCARRY1(bVar7,'\x02') == cVar8 < '\0') {
        pcVar14 = pcVar14 + (0xfd < bVar7) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar14 = *pcVar14 + cVar8;
      cVar9 = bVar10 + 0x11;
      pbVar16 = (byte *)CONCAT31(uVar27,cVar9);
      uVar56 = CONCAT44(pbVar40,pbVar16);
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_18);
      pbVar25 = pbVar29;
      if (SCARRY1(cVar8,'\x02') == cVar9 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar16 = *pbVar16 + (char)pbVar16;
      bVar7 = (char)pbVar16 + 2;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar14 = *pcVar14 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar29 = unaff_EBX + (int)pbVar25;
      bVar52 = CARRY1(*pbVar29,bVar7);
      *pbVar29 = *pbVar29 + bVar7;
      pbVar16 = unaff_EBP;
      uVar49 = uVar51;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar17 = (char)*puVar17 + (byte)puVar17;
  uVar27 = (undefined3)((uint)puVar17 >> 8);
  bVar7 = (byte)puVar17 | *(byte *)((int)puVar17 + 0x400000e);
  pcVar14 = (char *)CONCAT31(uVar27,bVar7);
  unaff_ESI = puVar38;
  if ('\0' < (char)bVar7) {
    *pcVar14 = *pcVar14 + bVar7;
    bVar7 = bVar7 + 0x28 | *(byte *)CONCAT31(uVar27,bVar7 + 0x28);
    *unaff_EBX = *unaff_EBX + (char)((uint)pbVar25 >> 8);
    unaff_ESI = puVar38 + 1;
    out(*puVar38,(short)pbVar40);
    *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
    pcVar14 = (char *)(uint)(bVar7 | *pbVar40);
  }
  bVar7 = (byte)pcVar14 & 0x7b;
  bVar52 = (char)(bVar7 + 0x17) < '\0';
  uStack_1c = uVar50;
  if (SCARRY1(bVar7,'\x17') == bVar52) {
    unaff_EDI = pbStack_20;
    if (SCARRY1(bVar7,'\x17') != bVar52) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar9 = (char)pbStack_20;
  *pbStack_20 = *pbStack_20 + cVar9;
  iVar28 = (int3)((uint)pbStack_20 >> 8);
  cVar8 = cVar9 + '\x02';
  unaff_EDI = (byte *)CONCAT31(iVar28,cVar8);
  bVar52 = (POPCOUNT(cVar8) & 1U) == 0;
  if (!bVar52) goto code_r0x00402704;
  *unaff_EDI = *unaff_EDI + cVar8;
  cVar9 = cVar9 + '\x04';
  pcVar14 = (char *)CONCAT31(iVar28,cVar9);
  if ((POPCOUNT(cVar9) & 1U) == 0) {
    *pcVar14 = *pcVar14 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar40 = (byte *)((int)iVar28 >> 0x17);
  puVar38 = unaff_ESI;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar41 = (uint *)((ulonglong)uVar56 >> 0x20);
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar17;
    cVar8 = (char)puVar44 - (byte)*puVar38;
    iVar15 = CONCAT22((short)((uint)puVar44 >> 0x10),
                      CONCAT11((char)((uint)puVar44 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),cVar8) + 0x12),cVar8));
    *(char *)uVar56 = *(char *)uVar56 + (char)uVar56;
    uVar27 = (undefined3)((ulonglong)uVar56 >> 8);
    bVar7 = (char)uVar56 + 0x2aU & (byte)*puVar41;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x12));
    *pcVar14 = *pcVar14 + bVar7;
    puVar21 = (uint *)CONCAT31(uVar27,bVar7 + 0x2a);
    pbStack_24 = (byte *)(uint)uVar49;
get_Value:
    cVar8 = *(char *)(iVar15 + 0x13);
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    uVar27 = (undefined3)((uint)puVar21 >> 8);
    bVar7 = (char)puVar21 + 0x2aU & (byte)*puVar41;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x13));
    *pcVar14 = *pcVar14 + bVar7;
    pbVar29 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
    uVar13 = (uint)uVar49;
    bVar10 = (byte)((uint)puVar17 >> 8);
    bVar7 = bVar10 + *pbVar29;
    pbVar29 = pbVar29 + (uint)CARRY1(bVar10,*pbVar29) + *(int *)pbVar29;
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar17;
    puVar44 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar15 >> 0x10),
                                               CONCAT11((char)((uint)iVar15 >> 8) + cVar8,
                                                        (char)iVar15)) >> 8),
                               (char)iVar15 - (byte)*puVar38);
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11(bVar7 + *pbVar29,(char)puVar17));
    pbVar29 = pbVar29 + (uint)CARRY1(bVar7,*pbVar29) + *(int *)pbVar29;
code_r0x00402898:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar17;
    bVar7 = (byte)puVar41;
    uVar34 = CONCAT11((char)((uint)puVar41 >> 8) - (byte)*puVar38,bVar7);
    pbVar40 = (byte *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar34);
    pcVar14 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[-0x19],
                                        (char)puVar44));
    *pbVar29 = *pbVar29 + (char)pbVar29;
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + '\x03');
    puVar44 = puVar38;
    do {
      puVar38 = puVar44 + 1;
      out(*puVar44,uVar34);
      pcVar14 = pcVar14 + -1;
      bVar10 = (byte)pbVar29;
      *pbVar29 = *pbVar29 + bVar10;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11((byte)((uint)puVar17 >> 8) | *pbVar40,(char)puVar17));
      *pbVar29 = *pbVar29 + bVar10;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte *)((int)pbVar29 * 2) = *(byte *)((int)pbVar29 * 2) ^ bVar10;
      *pbVar29 = *pbVar29 + bVar10;
      *pbVar29 = *pbVar29 | bVar10;
      bVar52 = CARRY1((byte)*puVar17,bVar7);
      *(byte *)puVar17 = (byte)*puVar17 + bVar7;
      cVar8 = bVar10 + 10 + bVar52;
      pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar8);
      puVar44 = puVar38;
    } while (bVar10 < 0xf6 && !CARRY1(bVar10 + 10,bVar52));
    *pbVar29 = *pbVar29 + cVar8;
    in_stack_ffffffd4 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),(ushort)pbStack_20);
    pcVar18 = (char *)((uint)pbVar29 | *puVar47);
    puVar44 = (uint *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                               CONCAT11((char)((uint)pcVar14 >> 8) + unaff_EBP[-100],(char)pcVar14))
    ;
    *pcVar18 = *pcVar18 + (char)pcVar18;
    bVar7 = (char)pcVar18 + 7;
    uVar56 = CONCAT44(pbVar40,CONCAT31((int3)((uint)pcVar18 >> 8),bVar7));
code_r0x004028c8:
    puVar41 = (uint *)((ulonglong)uVar56 >> 0x20);
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *(char *)uVar56 = *(char *)uVar56 + (char)uVar56;
  puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar56 >> 8),(char)uVar56 + '-');
  puVar38 = (uint *)((uint)puVar38 | *(uint *)((int)puVar41 + 0x3b));
  bVar52 = CARRY4(*puVar21,(uint)puVar21);
  uVar19 = *puVar21;
  *puVar21 = (uint)(*puVar21 + (int)puVar21);
  if (SCARRY4(uVar19,(int)puVar21)) {
    bVar52 = CARRY4(*puVar21,(uint)puVar21);
    bVar53 = SCARRY4(*puVar21,(int)puVar21);
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    bVar7 = POPCOUNT(*puVar21 & 0xff);
    if (bVar53) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + bVar52);
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar17;
    bVar52 = (POPCOUNT((byte)*puVar41) & 1U) == 0;
    if (bVar52) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar52) {
      iVar15 = CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 - (byte)*puVar38);
      goto get_Value;
    }
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    pbStack_24 = unaff_EBP;
code_r0x004028e2:
    uVar34 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
    uVar19 = *puVar21;
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    if (SCARRY4(uVar19,(int)puVar21)) {
      if (*puVar21 == 0 || SCARRY4(uVar19,(int)puVar21) != (int)*puVar21 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar8 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11((byte)((uint)puVar17 >> 8) |
                                        *(byte *)((int)puVar17 + 0x16d7207),(char)puVar17));
    pbVar29 = (byte *)((int)puVar21 + 0x7d);
    bVar10 = *pbVar29;
    bVar11 = (byte)((uint)puVar41 >> 8);
    bVar7 = *pbVar29;
    *pbVar29 = *pbVar29 + bVar11;
    uVar13 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar7,bVar11) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar29 < '\0') * 0x80 | (uint)(*pbVar29 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar29) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar10,bVar11);
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    pbVar29 = (byte *)(CONCAT31((int3)((uint)puVar21 >> 8),cVar8 + '+') ^ *puVar47);
    if ((POPCOUNT((uint)pbVar29 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar29;
    *pbVar29 = *pbVar29 + bVar7;
    puVar21 = (uint *)CONCAT31((int3)((uint)pbVar29 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar21 + 0x6f) = *(byte *)((int)puVar21 + 0x6f) + bVar11;
    }
code_r0x00402905:
    uVar56 = CONCAT44(puVar41,puVar21);
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar8 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    bVar7 = (byte)((uint)puVar17 >> 8) | (byte)*puVar17;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar7,(char)puVar17));
    pbStack_20._0_2_ = (ushort)uVar13;
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar21 = (byte)*puVar21 + cVar8;
      puVar47 = (uint *)((int)puVar47 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    uVar13 = 0x40291c;
    uVar56 = func_0x7346291c();
    *(char *)uVar56 = *(char *)uVar56 + (char)uVar56;
    puVar17 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar56 >> 0x20));
    puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,(ushort)pbStack_20);
    uStackY_44 = puVar44;
    while( true ) {
      pcVar14 = (char *)((int)uVar56 * 2);
      *pcVar14 = *pcVar14 - (char)puVar17;
      uVar19 = *puVar44;
      cVar8 = (char)((uint)puVar17 >> 8);
      *(byte *)puVar44 = (byte)*puVar44 + cVar8;
      if (SCARRY1((byte)uVar19,cVar8) == (char)(byte)*puVar44 < '\0') {
        pbVar29 = (byte *)((int)puVar47 + (int)uVar56);
        *pbVar29 = *pbVar29 + (char)uVar56;
        bVar7 = *pbVar29;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar41 = (uint *)((ulonglong)uVar56 >> 0x20);
      cVar8 = (char)uVar56;
      *(char *)uVar56 = *(char *)uVar56 + cVar8;
      uVar27 = (undefined3)((ulonglong)uVar56 >> 8);
      bVar7 = cVar8 + 7;
      puVar21 = (uint *)CONCAT31(uVar27,bVar7);
      bVar10 = (byte)((ulonglong)uVar56 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
      pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '3');
      uVar34 = (undefined2)((uint)puVar44 >> 0x10);
      uVar43 = SUB41(puVar44,0);
      bVar7 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar38 + 0x16) + (0xd3 < bVar7);
      puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(bVar7,uVar43));
      *pcVar14 = *pcVar14 + cVar8 + '3';
      cVar9 = cVar8 + ':';
      puVar21 = (uint *)CONCAT31(uVar27,cVar9);
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)puVar41 + 7);
        puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(bVar7,uVar43));
        bVar52 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar21 = (byte)*puVar21 + cVar9;
      puVar21 = (uint *)(CONCAT31(uVar27,cVar8 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar29 = (byte *)((int)puVar21 + 0x72);
      bVar53 = SCARRY1(*pbVar29,bVar10);
      *pbVar29 = *pbVar29 + bVar10;
      bVar7 = POPCOUNT(*pbVar29);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar21 + 0x72) = *(byte *)((int)puVar21 + 0x72) + (char)((uint)puVar41 >> 8)
        ;
      }
      else if (bVar53) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar8 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uStack_18);
code_r0x00402957:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      cVar8 = (char)puVar21 + '(';
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),cVar8);
      *(byte *)puVar21 = (byte)*puVar21 + cVar8;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar21,(char)puVar17)
                                );
      *(byte *)puVar21 = (byte)*puVar21 + cVar8;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)puVar44[0x18],
                                          (char)puVar41));
      puVar38 = puStackY_4c;
      puVar47 = puStackY_48;
code_r0x00402966:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      bVar7 = (byte)((uint)puVar44 >> 8) | *(byte *)((int)puVar41 + 7);
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar7,(char)puVar44));
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + '~');
code_r0x00402971:
      uVar13 = (uint)uStack_18;
code_r0x00402972:
      uVar34 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar21;
      in_stack_ffffffd4 = CONCAT22(uVar34,in_CS);
      in_CS = 0x2d0a;
      uVar56 = func_0x00006128(in_stack_ffffffd4);
      puVar17 = (uint *)uVar56;
      piVar24 = (int *)((int)((ulonglong)uVar56 >> 0x20) + -0x3d);
      *piVar24 = (int)((int)puVar38 + (uint)bVar7 + *piVar24);
      bVar52 = SCARRY4(*puVar17,(int)puVar17);
      *puVar17 = *puVar17 + (int)puVar17;
      uVar19 = *puVar17;
      puVar17 = extraout_ECX_02;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar19 & 0xff);
      if (bVar52) {
        *(char *)uVar56 = *(char *)uVar56 + (char)uVar56;
        puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                   CONCAT11((byte)((uint)puVar17 >> 8) |
                                            *(byte *)((ulonglong)uVar56 >> 0x20),(char)puVar17));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar14 = (char *)((ulonglong)uVar56 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar56 = *(char *)uVar56 + (char)uVar56;
        *pcVar14 = *pcVar14 + (char)puVar17;
        uVar56 = CONCAT44(CONCAT22((short)((ulonglong)uVar56 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar56 >> 0x28) - pcVar14[0x1f],
                                            (char)((ulonglong)uVar56 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar56 >> 8),(char)uVar56 + '('));
code_r0x00402991:
        puVar41 = (uint *)((ulonglong)uVar56 >> 0x20);
        pbVar29 = (byte *)uVar56;
        bVar7 = (byte)uVar56;
        bVar52 = CARRY1(bVar7,*pbVar29);
        puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar56 >> 8),bVar7 + *pbVar29);
        cVar8 = bVar7 + *pbVar29;
        if (SCARRY1(bVar7,*pbVar29)) goto code_r0x004029c4;
code_r0x00402995:
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11(((char)((uint)puVar41 >> 8) -
                                            *(byte *)((int)puVar41 + 0x6b)) - bVar52,(char)puVar41))
        ;
        bVar7 = (byte)puVar21;
        bVar52 = CARRY1(bVar7,(byte)*puVar21);
        bVar53 = SCARRY1(bVar7,(byte)*puVar21);
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7 + (byte)*puVar21);
        do {
          if (!bVar53) {
            puVar38 = (uint *)((int)puVar38 + (uint)bVar52 + *puVar21);
            pbVar29 = (byte *)((int)puVar21 + *puVar21);
            bVar10 = (byte)pbVar29;
            *pbVar29 = *pbVar29 + bVar10;
            *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
            bVar7 = *pbVar29;
            *pbVar29 = *pbVar29 + bVar10;
            *puVar47 = (uint)((int)puVar44 + (uint)CARRY1(bVar7,bVar10) + *puVar47);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar17;
            uVar27 = (undefined3)((uint)pbVar29 >> 8);
            bVar10 = bVar10 | (byte)*puVar38;
            puVar21 = (uint *)CONCAT31(uVar27,bVar10);
            uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uStack_18);
            uVar19 = *puVar21;
            uVar2 = *puVar21;
            *puVar21 = (uint)(*puVar21 + (int)puVar21);
            if (SCARRY4(uVar2,(int)puVar21)) {
              *(byte *)puVar38 = (byte)*puVar38 - (char)puVar44;
              *(byte *)puVar41 = (byte)*puVar41 + (char)puVar17;
              *(byte *)puVar47 = (byte)*puVar47 - (char)puVar44;
            }
            else {
              puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,(ushort)pbStack_20);
              uStack_18 = (ushort)pbStack_20;
              if (CARRY4(uVar19,(uint)puVar21)) goto code_r0x00402971;
              bVar52 = CARRY1(bVar10,(byte)*puVar21);
              bVar53 = SCARRY1(bVar10,(byte)*puVar21);
              puVar21 = (uint *)CONCAT31(uVar27,bVar10 + (byte)*puVar21);
code_r0x004029be:
              if (!bVar53) {
                puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,(ushort)pbStack_20);
                *(byte *)((int)puVar41 + -0x37) =
                     (*(byte *)((int)puVar41 + -0x37) - (char)((uint)puVar41 >> 8)) - bVar52;
                cVar8 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar8;
                bVar7 = (byte)puVar21;
                bVar52 = CARRY1(bVar7,(byte)*puVar21);
                bVar53 = SCARRY1(bVar7,(byte)*puVar21);
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7 + (byte)*puVar21);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)puVar17;
            bVar52 = CARRY1((byte)*puVar41,bVar7);
            bVar53 = SCARRY1((byte)*puVar41,bVar7);
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            if (bVar52) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar53) {
            pbStack_20._0_2_ = (ushort)pbStack_24;
            goto code_r0x00402966;
          }
          uVar13 = (uint)(ushort)pbStack_20;
          *(uint *)((int)puVar41 + -0x23) =
               (*(int *)((int)puVar41 + -0x23) - (int)puVar38) - (uint)bVar52;
          uVar19 = *puVar21;
          bVar7 = (byte)puVar21;
          uVar2 = *puVar21;
          uVar27 = (undefined3)((uint)puVar21 >> 8);
          bVar10 = bVar7 + (byte)*puVar21;
          puVar21 = (uint *)CONCAT31(uVar27,bVar10);
          if (SCARRY1(bVar7,(byte)uVar2)) goto code_r0x00402972;
          in_stack_ffffffd4 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),(ushort)pbStack_20);
          cVar8 = (char)puVar41;
          bVar11 = ((char)((uint)puVar41 >> 8) - *(byte *)((int)puVar41 + -0xf)) -
                   CARRY1(bVar7,(byte)uVar19);
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar11,cVar8));
          puVar46 = (uint *)CONCAT31(uVar27,bVar10 + (byte)*puVar21);
          bVar7 = (byte)puVar17;
          if (SCARRY1(bVar10,(byte)*puVar21)) {
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            uVar56 = CONCAT44(puVar41,(int)puVar46 + -0x1c37211);
            pcVar14 = (char *)((int)puVar46 + -0x1c3720a);
            *pcVar14 = *pcVar14 + bVar11;
            bVar7 = POPCOUNT(*pcVar14);
            goto code_r0x00402984;
          }
          puVar38 = (uint *)((int)puVar38 +
                            (-(uint)CARRY1(bVar10,(byte)*puVar21) - *(int *)((int)puVar41 + 5)));
          bVar52 = SCARRY4((int)puVar46,*puVar46);
          uVar19 = (int)puVar46 + *puVar46;
          uVar56 = CONCAT44(puVar41,uVar19);
          if (bVar52) goto code_r0x00402982;
          bVar10 = (byte)uVar19 + 0x8e;
          uVar20 = CONCAT31((int3)(uVar19 >> 8),bVar10 - CARRY4((uint)puVar46,*puVar46));
          *puVar44 = (*puVar44 - uVar20) -
                     (uint)((byte)uVar19 < 0x72 || bVar10 < CARRY4((uint)puVar46,*puVar46));
          pbVar29 = (byte *)(uVar20 - 0x5e);
          bVar10 = *pbVar29;
          *pbVar29 = *pbVar29 + bVar11;
          uVar19 = (uint)CARRY1(bVar10,bVar11);
          uVar2 = uVar20 - 0x32d72;
          puVar21 = (uint *)(uVar2 - uVar19);
          if (SBORROW4(uVar20,0x32d72) != SBORROW4(uVar2,uVar19)) goto code_r0x00402992;
          uVar51 = uVar49;
          if (uVar20 < 0x32d72 || uVar2 < uVar19) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar21 >> 8);
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            puVar46 = puVar38 + 1;
            out(*puVar38,CONCAT11(bVar11,cVar8));
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            goto code_r0x00402a3e;
          }
          bVar52 = CARRY4((uint)puVar21,*puVar21);
          bVar53 = SCARRY4((int)puVar21,*puVar21);
          puVar21 = (uint *)((int)puVar21 + *puVar21);
          if (!bVar53) {
            uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,(ushort)pbStack_20);
            *(byte *)puVar38 = (byte)*puVar38 + bVar52;
            bVar10 = (byte)puVar21;
            *(byte *)((int)puVar41 + (int)unaff_EBP) =
                 *(byte *)((int)puVar41 + (int)unaff_EBP) + bVar10;
            *(byte *)puVar44 = (byte)*puVar44 + cVar8;
            *(byte *)puVar44 = (byte)*puVar44 ^ bVar10;
            bVar32 = (byte)((uint)puVar17 >> 8);
            *(byte *)puVar38 = (byte)*puVar38 + bVar32;
            *(byte *)puVar21 = (byte)*puVar21 + bVar10;
            pbVar40 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),bVar10 | (byte)*puVar21);
            *(byte *)puVar17 = (byte)*puVar17 + cVar8;
            bVar36 = *pbVar40;
            uVar34 = (undefined2)((uint)puVar17 >> 0x10);
            puVar17 = (uint *)CONCAT22(uVar34,CONCAT11(bVar32 + bVar36,bVar7));
            pbVar40 = pbVar40 + (uint)CARRY1(bVar32,*pbVar40) + *(int *)pbVar40;
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar29 = pbVar40 + 0x73;
            bVar10 = *pbVar29;
            *pbVar29 = *pbVar29 + bVar11;
            uVar27 = (undefined3)((uint)pbVar40 >> 8);
            bVar10 = (char)pbVar40 + CARRY1(bVar10,bVar11);
            pcVar14 = (char *)CONCAT31(uVar27,bVar10);
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            if ((POPCOUNT((byte)*puVar41) & 1U) == 0) {
              uStack_18 = (ushort)pbStack_20;
            }
            puVar48 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x17));
            *pcVar14 = *pcVar14 + bVar10;
            cVar8 = bVar10 + 2;
            puVar21 = (uint *)CONCAT31(uVar27,cVar8);
            if (bVar10 < 0xfe) {
              *puVar21 = (uint)(*puVar21 + (int)puVar21);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar21 = (byte)*puVar21 + cVar8;
            uVar13 = *puVar41;
            puVar46 = (uint *)((int)puVar38 + puVar44[0x19]);
            *(byte *)puVar21 = (byte)*puVar21 + cVar8;
            puVar17 = (uint *)CONCAT22(uVar34,CONCAT11(bVar32 + bVar36 | (byte)*puVar21,
                                                       bVar7 | (byte)uVar13));
            puVar47 = puVar48;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar29 = (byte *)((int)puVar21 + 0x73);
    bVar52 = CARRY1(*pbVar29,bVar10);
    *pbVar29 = *pbVar29 + bVar10;
  } while( true );
code_r0x00402992:
  pbVar29 = (byte *)((int)puVar21 + 0x2a);
  bVar52 = CARRY1(*pbVar29,bVar11);
  *pbVar29 = *pbVar29 + bVar11;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar21) = *(byte *)(in_GS_OFFSET + (int)puVar21) + (char)puVar21;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | *(byte *)((int)puVar47 + 0x66),
                                      (char)puVar17));
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402a3e:
  uVar27 = (undefined3)((uint)puVar21 >> 8);
  bVar7 = (byte)puVar21 | (byte)*puVar46;
  pcVar14 = (char *)CONCAT31(uVar27,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar14 = *pcVar14 + bVar7;
    cVar8 = bVar7 + 2;
    piVar24 = (int *)CONCAT31(uVar27,cVar8);
    if ((POPCOUNT(cVar8) & 1U) == 0) {
      *(char *)piVar24 = (char)*piVar24 + cVar8;
      bVar7 = bVar7 + 0x71;
      pcVar18 = (char *)CONCAT31(uVar27,bVar7);
      pcVar14 = (char *)segment(uVar51,(short)puVar44 + (short)puVar46);
      *pcVar14 = *pcVar14 + bVar7;
      uVar13 = puVar47[0x1a];
      *pcVar18 = *pcVar18 + bVar7;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11((byte)((uint)puVar17 >> 8) | (byte)uVar13 |
                                          *(byte *)((int)puVar47 + 0x69),(char)puVar17));
      *pcVar18 = *pcVar18 + bVar7;
      bVar7 = bVar7 | (byte)*puVar41;
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar38 = puVar46 + (uint)bVar54 * -2 + 1;
    out(*puVar46,(short)puVar41);
  }
  else {
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[6],(char)puVar44)
                              );
code_r0x00402a5d:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    piVar24 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
    puVar38 = puVar46;
  }
code_r0x00402a61:
  pcVar14 = (char *)segment(uVar51,(short)puVar44 + (short)puVar38);
  *pcVar14 = *pcVar14 + (char)piVar24;
  cVar8 = (char)puVar17;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)puVar47[0x1a],cVar8));
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  uVar34 = CONCAT11((byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar41 + 0x65),(char)puVar41);
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar34);
  piVar22 = (int *)((int)piVar24 + *piVar24);
  puVar46 = puVar38;
  puVar48 = puVar47;
  uVar50 = (ushort)pbStack_20;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402ae3;
  *(byte *)puVar41 = (byte)*puVar41 + cVar8;
  puVar46 = puVar38 + (uint)bVar54 * -2 + 1;
  out(*puVar38,uVar34);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar17 >> 8) | (byte)*puVar41;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar7,(char)puVar17));
  piVar24 = (int *)(uint)(byte)*puVar44;
  *(byte *)puVar46 = (byte)*puVar46 - bVar7;
  puVar48 = puVar47;
code_r0x00402a7f:
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  out(*puVar46,(short)puVar41);
  bVar7 = in((short)puVar41);
  *(byte *)puVar48 = bVar7;
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar41,(char)puVar17));
  iVar15 = *piVar24;
  cVar8 = in(1);
  puVar21 = (uint *)CONCAT31((int3)((uint)((int)piVar24 + *piVar24) >> 8),cVar8);
  *(char *)puVar21 = (char)*puVar21 + cVar8;
  puVar21 = (uint *)((uint)puVar21 | *puVar21);
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar41;
  puVar46 = (uint *)((int)puVar46 + (((uint)bVar54 * -8 + 4) - iVar15));
  puVar48 = (uint *)((int)puVar48 + (uint)bVar54 * -2 + 1);
  uStack_18 = (ushort)pbStack_20;
  while( true ) {
    bVar7 = (byte)puVar21 | (byte)*puVar41;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7);
    puVar47 = puVar48;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
code_r0x00402a9b:
    uVar27 = (undefined3)((uint)puVar21 >> 8);
    cVar8 = (char)puVar21 + '\r';
    piVar22 = (int *)CONCAT31(uVar27,cVar8);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    *(byte *)(puVar46 + -0xc800000) = (byte)puVar46[-0xc800000] + (char)puVar41;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    *(byte *)puVar41 = (byte)*puVar41 + cVar8;
    cVar9 = (char)puVar17;
    if ((POPCOUNT((byte)*puVar41) & 1U) != 0) {
      *(byte *)puVar41 = (byte)*puVar41 + cVar9;
      puVar38 = puVar46 + (uint)bVar54 * -2 + 1;
      out(*puVar46,(short)puVar41);
      piVar24 = (int *)((longlong)*piVar22 * 0x7b020a00);
      *(char *)piVar24 =
           (char)*piVar24 - ((longlong)(int)piVar24 != (longlong)*piVar22 * 0x7b020a00);
      pbVar29 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar29 = *pbVar29;
      goto code_r0x00402a61;
    }
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    puVar21 = (uint *)CONCAT31(uVar27,(char)puVar21 + ':');
    puVar38 = (uint *)((uint)puVar46 | *(uint *)((int)puVar41 + -0x79));
    iVar15 = (int)puVar21 + *puVar21;
    if (SCARRY4((int)puVar21,*puVar21)) {
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                 CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar38[(int)puVar44],
                                          (char)puVar44));
      *(char *)((int)puVar41 * 2) = *(char *)((int)puVar41 * 2) + (char)iVar15;
      puVar48 = puVar47;
      goto code_r0x00402b33;
    }
    uVar27 = (undefined3)((uint)iVar15 >> 8);
    cVar8 = (char)iVar15 + CARRY4((uint)puVar21,*puVar21);
    piVar24 = (int *)CONCAT31(uVar27,cVar8);
    *(byte *)puVar41 = (byte)*puVar41 + cVar9;
    bVar52 = (POPCOUNT((byte)*puVar41) & 1U) != 0;
    if ((bVar52) && (bVar52)) goto code_r0x00402a61;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    cVar45 = cVar8 + '(';
    pcVar14 = (char *)CONCAT31(uVar27,cVar45);
    puVar48 = puVar47 + (uint)bVar54 * -2 + 1;
    uVar13 = in((short)puVar41);
    *puVar47 = uVar13;
    *pcVar14 = *pcVar14 + cVar45;
    puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                               CONCAT11((byte)((uint)puVar17 >> 8) | bRama07b0222,cVar9));
    *pcVar14 = *pcVar14 + cVar45;
    pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '>');
code_r0x00402ad2:
    out(*puVar38,(short)puVar41);
    puVar46 = (uint *)((int)(puVar38 + (uint)bVar54 * -2 + 1) + (uint)bVar54 * -2 + 1);
    out((byte)puVar38[(uint)bVar54 * -2 + 1],(short)puVar41);
    bVar7 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar7;
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(byte)puVar44 | (byte)*puVar48);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar27 = (undefined3)((uint)pcVar14 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    puVar41 = (uint *)((uint)puVar41 ^ *puVar41);
    cVar8 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*puVar41;
    piVar24 = (int *)CONCAT31(uVar27,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    piVar22 = (int *)CONCAT31(uVar27,cVar8 + '\x17');
    uVar50 = (ushort)pbStack_20;
code_r0x00402ae3:
    out(*puVar46,(short)puVar41);
    puVar38 = puVar46 + (uint)bVar54 * -2 + 1 + (uint)bVar54 * -2 + 1;
    out(puVar46[(uint)bVar54 * -2 + 1],(short)puVar41);
    *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
code_r0x00402ae7:
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((byte)((uint)puVar44 >> 8) | unaff_EBP[-0x60],(char)puVar44)
                              );
    cVar8 = (char)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    uVar27 = (undefined3)((uint)piVar22 >> 8);
    bVar7 = cVar8 + 2;
    puVar21 = (uint *)CONCAT31(uVar27,bVar7);
    pbStack_20._0_2_ = uVar50;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
      cVar8 = cVar8 + '}';
      puVar21 = (uint *)CONCAT31(uVar27,cVar8);
      *(byte *)puVar21 = ((byte)*puVar21 - cVar8) - (0x84 < bVar7);
      pbVar29 = (byte *)((int)puVar41 + (int)puVar21);
      *pbVar29 = *pbVar29 + cVar8;
      bVar7 = POPCOUNT(*pbVar29);
      puVar46 = puVar38;
code_r0x00402af9:
      pbStack_20._0_2_ = uVar50;
      puVar47 = puVar48;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        bVar7 = (byte)puVar17;
        *(byte *)puVar41 = (byte)*puVar41 + bVar7;
        uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uStack_18);
        puVar38 = puVar46 + (uint)bVar54 * -2 + 1;
        out(*puVar46,(short)puVar41);
        uVar13 = *puVar41;
        *(byte *)puVar41 = (byte)*puVar41 + bVar7;
        iVar15 = CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'o') +
                 *(int *)((int)puVar41 * 2) + (uint)CARRY1((byte)uVar13,bVar7);
        pcVar14 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '(');
        while( true ) {
          uVar13 = *puVar41;
          bVar10 = (byte)puVar17;
          *(byte *)puVar41 = (byte)*puVar41 + bVar10;
          pcVar14 = pcVar14 + (uint)CARRY1((byte)uVar13,bVar10) + iRam73280512;
          bVar7 = (byte)pcVar14;
          *pcVar14 = *pcVar14 + bVar7;
          puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                     CONCAT11((byte)((uint)puVar17 >> 8) | bRam7d160243,bVar10));
          bVar54 = ((uint)uStackY_44 & 0x400) != 0;
          in_AF = ((uint)uStackY_44 & 0x10) != 0;
          *pcVar14 = *pcVar14 + bVar7;
          uVar27 = (undefined3)((uint)pcVar14 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar27,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar8 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar8 < '\0') break;
          *(char *)CONCAT31(uVar27,cVar8) = *(char *)CONCAT31(uVar27,cVar8) + cVar8;
          iVar15 = CONCAT31(uVar27,bVar7 + 0x16);
code_r0x00402b33:
          piVar22 = (int *)(iVar15 + 0xe2802);
          *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar17 >> 8);
          uVar50 = (ushort)pbStack_20;
          pbStack_20._0_2_ = uStack_18;
          while( true ) {
            bVar10 = (byte)puVar44 | (byte)((uint)puVar17 >> 8);
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar10);
            *piVar22 = (int)(*piVar22 + (int)piVar22);
            cVar8 = (char)piVar22;
            *(byte *)puVar41 = (byte)*puVar41 + cVar8;
            if ((POPCOUNT((byte)*puVar41) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar22 = (char)*piVar22 + cVar8;
            uVar13 = CONCAT31((int3)((uint)piVar22 >> 8),cVar8 + '\x13');
            puVar21 = (uint *)(uVar13 + 0x19061224 + (uint)(0x1f9edfd < uVar13));
            uVar2 = (uint)(0xe4ffffdd < uVar13 + 0xfe061202 ||
                          CARRY4(uVar13 + 0x19061224,(uint)(0x1f9edfd < uVar13)));
            uVar13 = *puVar38;
            uVar19 = *puVar38;
            *puVar38 = (uint)((byte *)(uVar19 + (int)puVar21) + uVar2);
            bVar7 = POPCOUNT(*puVar38 & 0xff);
            puVar46 = puVar38;
            if ((SCARRY4(uVar13,(int)puVar21) != SCARRY4((int)(uVar19 + (int)puVar21),uVar2)) ==
                (int)*puVar38 < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar7;
            iVar15 = CONCAT31((int3)((uint)puVar21 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar41 | (byte)*puVar41;
            uVar13 = *puVar44;
            *(byte *)puVar44 = (byte)*puVar44 + bVar10;
            pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x228b26
                               + *puVar48 + (uint)CARRY1((byte)uVar13,bVar10));
            cVar8 = bVar7 + (byte)*puVar17;
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),cVar8);
            if (SCARRY1(bVar7,(byte)*puVar17) == cVar8 < '\0') break;
            *pcVar14 = *pcVar14 + (char)pcVar14;
            cVar8 = (char)pcVar14 + '\x02';
            pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8);
            bVar7 = POPCOUNT(cVar8);
            uVar50 = (ushort)pbStack_20;
code_r0x00402b7a:
            puVar47 = puVar38;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar8 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar8;
              uVar27 = (undefined3)((uint)pcVar14 >> 8);
              pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '\x13');
              *(byte *)puVar17 = (byte)*puVar17 | (byte)puVar41;
              *(byte *)puVar48 = (byte)*puVar48 | (byte)puVar41;
              *puVar41 = (uint)(pcVar14 + *puVar41);
              uVar34 = (undefined2)((uint)puVar44 >> 0x10);
              uVar43 = SUB41(puVar44,0);
              cVar9 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar44 + -0x5f);
              puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar9,uVar43));
              *pcVar14 = *pcVar14 + cVar8 + '\x13';
              piVar22 = (int *)CONCAT31(uVar27,cVar8 + -0x7a);
              uVar13 = *puVar41;
              *(byte *)puVar41 = (byte)*puVar41 + (char)puVar17;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar13,(char)puVar17) == (char)(byte)*puVar41 < '\0') break;
              *(char *)piVar22 = (char)*piVar22 + cVar8 + -0x7a;
              cVar45 = cVar8 + -0x78;
              piVar22 = (int *)CONCAT31(uVar27,cVar45);
              uVar5 = uVar50;
              if ((POPCOUNT(cVar45) & 1U) != 0) break;
              *(char *)piVar22 = (char)*piVar22 + cVar45;
              pcVar14 = (char *)CONCAT31(uVar27,cVar8 + -0x65);
              *puVar17 = *puVar17 | (uint)puVar41;
              *puVar48 = *puVar48 | (uint)puVar41;
              pbVar29 = (byte *)((int)puVar17 + -1);
              cVar9 = cVar9 + *(byte *)((int)puVar44 + -0x5e);
              puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar9,uVar43));
              *pcVar14 = *pcVar14 + cVar8 + -0x65;
              bVar7 = cVar8 + 10;
              puVar21 = (uint *)CONCAT31(uVar27,bVar7);
              bVar10 = (byte)pbVar29;
              *(byte *)puVar41 = (byte)*puVar41 + bVar10;
              puVar38 = puVar47 + (uint)bVar54 * -2 + 1;
              out(*puVar47,(short)puVar41);
              uVar13 = *puVar41;
              *(byte *)puVar41 = (byte)*puVar41 + bVar10;
              uVar20 = (uint)CARRY1((byte)uVar13,bVar10);
              uVar13 = *puVar41;
              uVar19 = *puVar41;
              pbVar40 = pbVar29 + uVar19 + uVar20;
              uVar6 = *puVar41;
              cRam130a0000 = cRam130a0000 - cVar9;
              uVar2 = *puVar41;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar21);
              *(byte *)puVar21 = (char)*puVar21 + bVar7;
              puVar17 = (uint *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar40 >> 8) | bRam7d170243,
                                                  (char)pbVar40 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar29,uVar13) ||
                                                  CARRY4((uint)(pbVar29 + uVar19),uVar20))));
              bVar54 = (uStack_18 & 0x400) != 0;
              in_AF = (uStack_18 & 0x10) != 0;
              *(byte *)puVar21 = (char)*puVar21 + bVar7;
              bVar52 = 0xfd < bVar7;
              pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '\f');
              puVar41 = (uint *)((uint)puVar41 | uVar2);
code_r0x00402bd1:
              uVar13 = *puVar44;
              uVar19 = *puVar44;
              *puVar44 = (uint)((byte *)(uVar19 + (int)puVar17) + bVar52);
              bVar7 = POPCOUNT(*puVar44 & 0xff);
              uVar50 = uStack_18;
              if ((SCARRY4(uVar13,(int)puVar17) !=
                  SCARRY4((int)(uVar19 + (int)puVar17),(uint)bVar52)) == (int)*puVar44 < 0)
              goto code_r0x00402b7a;
              cVar8 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar8;
              pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8 + '\x02');
              if (SCARRY1(cVar8,'\x02') == (char)(cVar8 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar14 = *pcVar14 + (char)pcVar14;
                pcVar14 = (char *)(CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12') |
                                  *puVar41);
                *(byte *)puVar48 = (byte)*puVar48 - (char)puVar17;
                *pcVar14 = *pcVar14 + (char)pcVar14;
                puVar41 = (uint *)((int)puVar41 - *puVar38);
                bVar7 = (byte)puVar44 | (byte)((uint)puVar17 >> 8);
                cVar8 = *pcVar14;
                uVar27 = (undefined3)((uint)pcVar14 >> 8);
                pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                *pcVar14 = *pcVar14 + cVar8;
                pcVar18 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                           CONCAT11((char)((uint)puVar44 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar14 = *pcVar14 + cVar8;
                bVar52 = false;
                pcVar14 = (char *)(CONCAT31(uVar27,cVar8 + '\x13') | *puVar41);
                do {
                  bVar10 = (byte)puVar17;
                  bVar7 = bVar10 + (byte)puVar38[(int)puVar48 * 2];
                  puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar7 + bVar52);
                  uVar13 = (uint)(CARRY1(bVar10,(byte)puVar38[(int)puVar48 * 2]) ||
                                 CARRY1(bVar7,bVar52));
                  pcVar23 = pcVar14 + 0x1b000019 + uVar13;
                  piVar24 = (int *)((int)puVar48 * 2 + 0x40000a5);
                  *piVar24 = (int)((int)puVar17 +
                                  (uint)((char *)0xe4ffffe6 < pcVar14 ||
                                        CARRY4((uint)(pcVar14 + 0x1b000019),uVar13)) + *piVar24);
                  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(char)puVar41 + cRam00009d7d
                                            );
                  uVar27 = (undefined3)((uint)pcVar23 >> 8);
                  bVar7 = (char)pcVar23 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar27,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar14 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar23 >> 8) - in_AF,
                                                      (char)uVar13));
                  pbVar29 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar27,bVar7));
                  while( true ) {
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    puVar47 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               (byte)puVar41 | (byte)*puVar41);
                    puVar48 = (uint *)((uint)puVar48 | (uint)puVar38);
                    uVar13 = (uint)pcVar18 | (uint)puVar38;
                    unaff_EBP = pbVar29 + 1;
                    uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,(ushort)pbStack_20);
                    cVar9 = (char)(pcVar14 + 0x1b000019);
                    uVar27 = (undefined3)((uint)(pcVar14 + 0x1b000019) >> 8);
                    cVar8 = cVar9 + -0x13;
                    pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                    uVar34 = (undefined2)(uVar13 >> 0x10);
                    cVar45 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar45,(byte)uVar13));
                    *pcVar14 = *pcVar14 + cVar8;
                    pcVar14 = (char *)(CONCAT31(uVar27,cVar9 + '\x19') | *puVar47);
                    bVar7 = (byte)pcVar14;
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      pbVar29 = (byte *)((int)puVar47 + (int)pcVar14);
                      bVar52 = CARRY1(*pbVar29,bVar7);
                      *pbVar29 = *pbVar29 + bVar7;
                      puVar41 = puVar47;
                      goto code_r0x00402bd1;
                    }
                    *pcVar14 = *pcVar14 + bVar7;
                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                    pcVar18 = (char *)CONCAT31(uVar27,bVar7 + 0x6f);
                    puVar41 = (uint *)((int)puVar47 + 1);
                    *pcVar18 = *pcVar18 + bVar7 + 0x6f;
                    bVar10 = (byte)uVar13 | (byte)((uint)pcVar14 >> 8);
                    pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x5c);
                    cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),bVar10) + -0x5f)
                    ;
                    puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar45,bVar10));
                    *pcVar14 = *pcVar14 + bVar7 + 0x5c;
                    pcVar14 = (char *)(CONCAT31(uVar27,bVar7 + 0x88) | *puVar41);
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar17 >> 8);
                      uStackY_44 = (uint *)((uint)uStackY_44._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                    cVar8 = (char)pcVar14 + 'o';
                    puVar41 = (uint *)((int)puVar47 + 2);
                    *(char *)CONCAT31(uVar27,cVar8) = *(char *)CONCAT31(uVar27,cVar8) + cVar8;
                    pcVar18 = (char *)CONCAT31((int3)((uint)puVar44 >> 8),
                                               bVar10 | (byte)((uint)pcVar14 >> 8));
                    pcVar14 = (char *)(CONCAT31(uVar27,cVar8) | 2);
                    pbVar29[-0x62] = pbVar29[-0x62] + 1;
                    bVar7 = (byte)pcVar14;
                    *pcVar14 = *pcVar14 + bVar7;
                    bVar52 = 0xfd < bVar7;
                    cVar8 = bVar7 + 2;
                    pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                    uVar51 = (ushort)pbStack_20;
                    if (SCARRY1(bVar7,'\x02') != cVar8 < '\0') break;
                    *pcVar14 = *pcVar14 + cVar8;
                    bVar10 = bVar7 + 10;
                    pcVar14 = (char *)CONCAT31(uVar27,bVar10);
                    *pcVar14 = *pcVar14 - cVar45;
                    cVar9 = (char)puVar17;
                    *(byte *)puVar41 = *(byte *)puVar41 + cVar9;
                    pbVar29[-0x62] = pbVar29[-0x62] + 1;
                    *pcVar14 = *pcVar14 + bVar10;
                    cVar8 = bVar7 + 0xc;
                    pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                    if (SCARRY1(bVar10,'\x02') == cVar8 < '\0') {
                      *pcVar14 = *pcVar14 + cVar8;
                      *(byte *)puVar17 = (byte)*puVar17 - cVar45;
                      *(byte *)puVar41 = *(byte *)puVar41 + cVar9;
                      cVar8 = (bVar7 + 0x13) - (byte)puVar17[0x13];
                      pcVar14 = (char *)CONCAT31(uVar27,cVar8);
                      *pcVar14 = *pcVar14 + cVar8;
                      pcVar23 = (char *)CONCAT31(uVar27,cVar8 + *pcVar14);
                      *pcVar23 = *pcVar23 + cVar8 + *pcVar14;
                      pcVar23 = pcVar23 + *puVar17;
                      *pcVar23 = *pcVar23 + (char)pcVar23;
                      LOCK();
                      pcVar14 = *(char **)pcVar23;
                      *(char **)pcVar23 = pcVar23;
                      UNLOCK();
                      *pcVar14 = *pcVar14 + (char)pcVar14;
                      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)*puVar17);
                      *pbVar40 = *pbVar40 + (byte)*puVar17;
                      goto code_r0x00402c8d;
                    }
                    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),
                                               cVar9 + *pcVar18 + (0xfd < bVar10));
                    *(byte *)puVar48 = (byte)*puVar48 - cVar45;
                    pbVar29 = unaff_EBP;
                  }
                } while( true );
              }
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11((char)((uint)puVar44 >> 8) +
                                                  *(byte *)((int)puVar44 + -99),(char)puVar44));
              puVar47 = puVar38;
            }
            *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
            puVar41 = (uint *)((int)puVar41 - *puVar47);
            puVar38 = puVar47;
            uVar50 = (ushort)pbStack_20;
            pbStack_20._0_2_ = uVar5;
          }
          *(byte *)puVar41 = (byte)*puVar41 + (char)puVar17;
          pcVar14 = pcVar14 + -0x7d160243;
        }
        pcVar14 = (char *)CONCAT31(uVar27,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar17;
    uVar13 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
    *puVar48 = (uint)((int)puVar41 + (uint)CARRY1((byte)uVar13,(byte)puVar21) + *puVar48);
    puVar46 = puVar38;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar12 = (char)puVar17;
      cVar31 = (char)((uint)puVar17 >> 8) + (char)((uint)pbVar40 >> 8);
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(cVar31,cVar12));
      cVar8 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar8;
      pcVar14 = (char *)((int)pbVar40 * 2 + 0x1a10000);
      cVar45 = (char)((uint)pcVar18 >> 8);
      *pcVar14 = *pcVar14 + cVar45;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      pbVar40[-0x47ffffff] = pbVar40[-0x47ffffff] + cVar45;
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      bVar10 = (byte)puVar41;
      *(byte *)puVar48 = (byte)*puVar48 + bVar10;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + bVar10;
      *pbVar40 = *pbVar40 + cVar8;
      *puVar38 = (uint)(*puVar38 + (int)puVar38);
      uVar34 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar45 = cVar45 + (byte)puVar38[(int)pcVar18];
      pcVar14 = (char *)CONCAT22(uVar34,CONCAT11(cVar45,(char)pcVar18));
      pcVar14[(int)pbVar40] = pcVar14[(int)pbVar40] + cVar8;
      *(byte *)puVar41 = *(byte *)puVar41 - cVar45;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar12;
      uVar27 = (undefined3)((uint)pbVar40 >> 8);
      bVar7 = cVar8 - *pbVar40;
      *pcVar14 = *pcVar14 + bVar10;
      *(byte *)puVar41 = *(byte *)puVar41 ^ bVar7;
      *(byte *)puVar41 = *(byte *)puVar41 + bVar7;
      *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
      uVar13 = *puVar17;
      *(byte *)puVar17 = (byte)*puVar17 + bVar10;
      cVar9 = bVar7 + *(char *)CONCAT31(uVar27,bVar7) + CARRY1((byte)uVar13,bVar10);
      pcVar18 = (char *)CONCAT22(uVar34,CONCAT11(cVar45 + pbVar29[-0x60],(char)pcVar18));
      *(char *)CONCAT31(uVar27,cVar9) = *(char *)CONCAT31(uVar27,cVar9) + cVar9;
      cVar45 = cVar9 + '\x12';
      pbVar40 = (byte *)CONCAT31(uVar27,cVar45);
      cVar8 = *pcVar18;
      *pcVar18 = *pcVar18 + cVar45;
      if (SCARRY1(cVar8,cVar45) != *pcVar18 < '\0') break;
code_r0x00402c8d:
      cVar8 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
    }
    *pbVar40 = *pbVar40 + cVar45;
    pbVar40 = (byte *)CONCAT31(uVar27,cVar9 + '$');
    *pbVar40 = *pbVar40 + cVar31;
    bVar7 = *(byte *)puVar41;
    *(byte *)puVar41 = *(byte *)puVar41 + cVar12;
    uVar50 = (ushort)pbStack_20;
    uVar51 = uVar49;
  } while (SCARRY1(bVar7,cVar12) == (char)*(byte *)puVar41 < '\0');
  do {
    cVar8 = (char)pbVar40;
    *pbVar40 = *pbVar40 + cVar8;
    uVar27 = (undefined3)((uint)pbVar40 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar41;
    bVar10 = cVar8 + 0x24;
    cVar45 = (char)((uint)pcVar18 >> 8);
    pcVar18[-0x62] = pcVar18[-0x62] + cVar45;
    *(char *)CONCAT31(uVar27,bVar10) = *(char *)CONCAT31(uVar27,bVar10) + bVar10;
    bVar7 = cVar8 + 0x2fU + (byte)*puVar17;
    cVar9 = bVar7 + (0xf4 < bVar10);
    cVar8 = cVar9 + *(char *)CONCAT31(uVar27,cVar9) +
            (CARRY1(cVar8 + 0x2fU,(byte)*puVar17) || CARRY1(bVar7,0xf4 < bVar10));
    pcVar14 = (char *)CONCAT31(uVar27,cVar8);
    *pcVar14 = *pcVar14 - (char)puVar41;
    *pcVar14 = *pcVar14 + cVar8;
    pcVar23 = (char *)((int)puVar41 - *puVar41);
    *(byte *)(puVar38 + (int)pcVar18) = (byte)puVar38[(int)pcVar18] + cVar45;
    pcVar14[(int)unaff_EBP] = pcVar14[(int)unaff_EBP] + cVar8;
    *pcVar23 = *pcVar23 + (char)puVar17;
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((char)((uint)pbVar40 >> 8) - *pcVar23,cVar8));
    uVar13 = *puVar48;
    *pcVar14 = *pcVar14 - (char)((uint)pcVar23 >> 8);
    *pcVar14 = *pcVar14 + cVar8;
    uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar50);
    pbVar29 = (byte *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                               CONCAT11(cVar45 - (byte)*puVar38,(char)pcVar18));
    unaff_EBP = unaff_EBP + *(int *)(pbVar29 + (int)puVar17);
    puVar47 = (uint *)CONCAT31((int3)((uint)pcVar23 >> 8),(char)pcVar23 + (byte)uVar13);
    while( true ) {
      puVar41 = puVar47;
      uVar34 = (undefined2)((uint)pbVar29 >> 0x10);
      bVar36 = (char)((uint)pbVar29 >> 8) + pbVar29[0x18];
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
      cVar8 = (char)puVar17;
      *(byte *)puVar41 = (byte)*puVar41 + cVar8;
      uVar13 = *puVar38;
      bVar11 = (byte)((uint)puVar17 >> 8);
      bVar7 = *pbVar40;
      pbVar40 = pbVar40 + (uint)CARRY1(bVar11,*pbVar40) + *(int *)pbVar40;
      *(byte *)puVar41 = (byte)*puVar41 + cVar8;
      cVar9 = ((char)pbVar29 - (byte)uVar13) - (byte)*puVar38;
      bVar10 = *(byte *)((int)puVar48 + 0x1a);
      *pbVar40 = *pbVar40 + (char)pbVar40;
      puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                 CONCAT11(bVar11 + bVar7 + bVar10 | (byte)*puVar41,cVar8));
      pbVar40 = pbVar40 + *puVar41;
      if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + (char)pbVar40;
      bVar7 = (char)pbVar40 + 0x6f;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
      pcVar18 = (char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar36,(char)pbVar29)) >> 8),cVar9
                                 ) + -1);
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar18 = *pcVar18 + (byte)puVar41;
      *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar7;
      uVar4 = *(undefined6 *)pcVar14;
      uVar50 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar14 = (char *)uVar4;
      *pcVar14 = *pcVar14 + (char)uVar4;
      *(byte *)puVar38 = (byte)*puVar38 + (char)uVar4;
      pcVar14 = (char *)((uint)pcVar14 | 0x73110008);
      bVar36 = (byte)((uint)pcVar18 >> 8);
      *(byte *)puVar48 = (byte)*puVar48 - bVar36;
      *(byte *)puVar41 = (byte)*puVar41 + cVar8;
      puVar47 = puVar38 + (uint)bVar54 * -2 + 1;
      out(*puVar38,(short)puVar41);
      *pcVar14 = *pcVar14;
      cVar8 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar8;
      bVar7 = unaff_EBP[-0x5a];
      uVar34 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar9 = (char)pcVar18;
      *pcVar14 = *pcVar14 + cVar8;
      cVar8 = cVar8 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar8);
      puVar17 = (uint *)(uVar13 | 0x73110000);
      puVar38 = puVar47 + (uint)bVar54 * -2 + 1;
      out(*puVar47,(short)puVar41);
      *(byte *)puVar17 = (byte)*puVar17;
      bVar11 = (byte)puVar41 | (byte)*puVar48;
      puVar47 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar11);
      *(byte *)puVar17 = (byte)*puVar17 + cVar8;
      pcVar14 = (char *)(uVar13 | 0x7b1f1609);
      bVar54 = (uVar51 & 0x400) != 0;
      *(uint *)((int)puVar48 + -0x7d) = *(uint *)((int)puVar48 + -0x7d) | (uint)unaff_EBP;
      bVar10 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar10;
      bVar36 = bVar36 | bVar7 | *(byte *)((int)puVar38 + 0x19);
      pbVar29 = (byte *)CONCAT22(uVar34,CONCAT11(bVar36,cVar9));
      *pcVar14 = *pcVar14 + bVar10;
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      puVar38[(int)puVar48 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar10) + puVar38[(int)puVar48 * 2]);
      bVar7 = bVar10 + 0x2d ^ *(byte *)CONCAT31(uVar27,bVar10 + 0x2d);
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      uVar13 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + bVar7;
      uVar51 = uVar50;
      if (CARRY1((byte)uVar13,bVar7)) {
        *pcVar14 = *pcVar14 + bVar7;
        bVar7 = bVar7 | pcVar14[0x4000019];
        pcVar14 = (char *)CONCAT31(uVar27,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar14 = *pcVar14 + bVar7;
          piVar24 = (int *)CONCAT31(uVar27,bVar7 + 0x28);
          *piVar24 = (int)piVar24 + (uint)(0xd7 < bVar7) + *piVar24;
          bVar32 = (byte)((uint6)uVar4 >> 8);
          *pbVar29 = *pbVar29 + bVar32;
          uVar35 = CONCAT11((byte)((uint)puVar41 >> 8) | bVar36,bVar11);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar35);
          uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar50);
          bVar11 = in(uVar35);
          pbVar40 = (byte *)CONCAT31(uVar27,bVar11);
          bVar7 = *pbVar40;
          bVar52 = SCARRY1(*pbVar40,bVar11);
          *pbVar40 = *pbVar40 + bVar11;
          bVar10 = *pbVar40;
          puVar44 = puVar38;
          uStack_18 = uVar50;
          if (!CARRY1(bVar7,bVar11)) goto code_r0x00402e19;
          *pbVar40 = *pbVar40 + bVar11;
          bVar32 = bVar32 | *pbVar40;
          puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar32,cVar8));
          pcVar14 = (char *)CONCAT31(uVar27,bVar11 + *pbVar40);
          *pbVar29 = *pbVar29 + bVar32;
        }
        uVar27 = (undefined3)((uint)pcVar14 >> 8);
        bVar10 = (byte)pcVar14 | (byte)*puVar47;
        pbVar40 = (byte *)CONCAT31(uVar27,bVar10);
        puVar44 = puVar38 + (uint)bVar54 * -2 + 1;
        out(*puVar38,(short)puVar47);
        LOCK();
        bVar7 = *pbVar40;
        *pbVar40 = bVar10;
        UNLOCK();
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar17;
        piVar24 = (int *)(CONCAT31(uVar27,bVar7) + -0x1b7e07);
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar17;
        iVar15 = (int)puVar17 - *(int *)pbVar29;
        bVar7 = *(byte *)((int)puVar48 + -0x7a);
        uVar35 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        bVar10 = (char)((uint)iVar15 >> 8) + bVar7 | *(byte *)((int)puVar48 + 0x17);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        uVar27 = (undefined3)(CONCAT22(uVar35,CONCAT11(bVar10,(byte)iVar15)) >> 8);
        bVar7 = (byte)iVar15 | *pbVar29;
        puVar17 = (uint *)CONCAT31(uVar27,bVar7);
        pbVar40 = (byte *)((int)piVar24 + *piVar24);
        puVar38 = puVar44;
        if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e0a;
        *(byte *)puVar17 = (byte)*puVar17 + bVar7;
        *(byte **)pbVar29 = (byte *)(*(int *)pbVar29 + (int)puVar47);
        piVar24 = (int *)CONCAT31(uVar27,bVar7 + 0x27);
        puVar17 = (uint *)CONCAT22(uVar35,CONCAT11(bVar10 + *(byte *)((int)puVar48 + -0x79),bVar7));
        *(byte *)piVar24 = (char)*piVar24 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar18 = (char *)CONCAT22(uVar34,CONCAT11(bVar36 | unaff_EBP[-0x62],cVar9));
  } while( true );
code_r0x00402dff:
  pbVar40 = (byte *)CONCAT22((short)((uint)piVar24 >> 0x10),
                             CONCAT11((byte)((uint)piVar24 >> 8) |
                                      *(byte *)((int)puVar47 + 0x2170411),(byte)piVar24));
  puVar38 = puVar44 + (uint)bVar54 * -2 + 1;
  out(*puVar44,(short)puVar47);
  *pbVar40 = (byte)piVar24;
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar17;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar40;
  *pbVar40 = *pbVar40 - cVar9;
  *pbVar40 = *pbVar40 + (char)pbVar40;
  bVar52 = false;
  bVar10 = (byte)((uint)puVar17 >> 8) | bRam052b0603;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),CONCAT11(bVar10,(char)puVar17));
  puVar44 = puVar38;
code_r0x00402e19:
  if (bVar10 == 0 || bVar52 != (char)bVar10 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar40;
  *pbVar40 = *pbVar40 + cRam89280411;
  piVar24 = (int *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                            CONCAT11((byte)((uint)pbVar40 >> 8) |
                                     *(byte *)((int)puVar47 + 0x7190411),cRam89280411));
  *(char *)piVar24 = (char)*piVar24 + cRam89280411;
  cVar8 = (char)puVar17;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar47,cVar8));
  puVar44 = (uint *)((int)puVar44 + *piVar24);
  pbVar40 = (byte *)((int)piVar24 + *piVar24);
  bVar10 = (byte)pbVar40;
  *pbVar40 = *pbVar40 + bVar10;
  *(byte *)puVar44 = (byte)*puVar44 + cVar8;
  bVar7 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar10;
  *(byte **)pbVar40 = unaff_EBP + (uint)CARRY1(bVar7,bVar10) + *(int *)pbVar40;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),*pbVar40);
  *(byte *)puVar47 = (byte)*puVar47 + cVar8;
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(byte)puVar47 | (byte)*puVar47);
  pbVar40 = (byte *)((int)puVar38 + -0x43);
  *pbVar40 = *pbVar40 + (char)((uint)puVar47 >> 8);
  puVar47 = puVar38;
  puVar38 = puVar48;
  uVar51 = (ushort)pbStack_20;
code_r0x00402e42:
  pbStack_20._0_2_ = uStack_18;
  puVar48 = puVar38;
  uStack_18 = (ushort)pbStack_20;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e6e;
  iVar15 = *(int *)((int)piVar24 + *piVar24);
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar17;
  piVar24 = (int *)(iVar15 + -0x8c6f);
  puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                             CONCAT11((byte)((uint)puVar47 >> 8) | *(byte *)((int)puVar47 + -0x3f),
                                      (char)puVar47));
  pbVar25 = (byte *)((int)piVar24 + *piVar24);
  pbVar40 = pbVar25;
  puVar48 = uStackY_44;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar25 = *pbVar25 + (char)pbVar25;
  puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((byte)((uint)puVar17 >> 8) | (byte)*puVar47,(char)puVar17));
  puVar38 = puVar44 + (uint)bVar54 * -2 + 1;
  out(*puVar44,(short)puVar47);
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + (byte)*puVar48);
  puVar44 = puVar38 + (uint)bVar54 * -2 + 1;
  out(*puVar38,(short)puVar47);
  uVar51 = (ushort)pbStack_20;
  uStack_18 = uVar50;
code_r0x00402e6e:
  pbStack_20._0_2_ = uVar51;
  uVar27 = (undefined3)((uint)puVar47 >> 8);
  cVar8 = (char)puVar47 + (byte)*puVar48;
  puVar38 = puVar44 + (uint)bVar54 * -2 + 1;
  out(*puVar44,(short)CONCAT31(uVar27,cVar8));
  puVar47 = (uint *)CONCAT31(uVar27,cVar8 + (byte)*puVar48);
  puVar44 = puVar38 + (uint)bVar54 * -2 + 1;
  out(*puVar38,(short)puVar47);
  pbVar40 = (byte *)0x0;
  puVar38 = puVar48;
code_r0x00402e81:
  puVar48 = puVar38;
  bVar10 = (char)pbVar40 - *pbVar40;
  iVar15 = CONCAT31((int3)((uint)pbVar40 >> 8),bVar10);
  *pbVar29 = *pbVar29 + (char)puVar47;
  pbVar25 = (byte *)(iVar15 * 2);
  *pbVar25 = *pbVar25 ^ bVar10;
  pbVar25 = (byte *)(int)(short)iVar15;
  *pbVar25 = *pbVar25 + bVar10;
  *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar17;
  bVar7 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar10;
  *(byte **)(pbVar29 + -0x73) =
       (byte *)((int)puVar44 + (uint)CARRY1(bVar7,bVar10) + *(int *)(pbVar29 + -0x73));
  *pbVar25 = *pbVar25 + bVar10;
  bVar7 = (byte)puVar17 | (byte)*puVar47;
  puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),bVar7);
  puVar38 = puVar44;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar25 = *pbVar25 + bVar10;
  pbVar40 = (byte *)CONCAT31((int3)(char)((uint)pbVar40 >> 8),bVar10 + 0x2d);
  puVar44[(int)puVar48 * 2] =
       (uint)((int)puVar47 + (uint)(0xd2 < bVar10) + puVar44[(int)puVar48 * 2]);
  pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar50);
  do {
    uVar13 = *puVar44;
    bVar7 = (byte)pbVar40;
    *(byte *)puVar44 = (byte)*puVar44 + bVar7;
    if (!CARRY1((byte)uVar13,bVar7)) break;
    *pbVar40 = *pbVar40 + bVar7;
    bVar7 = bVar7 | pbVar40[0x400001a];
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar25 = *pbVar25 + (byte)pbVar25;
      uVar27 = (undefined3)((uint)pbVar25 >> 8);
      bVar7 = (byte)pbVar25 | pbVar25[0x400001b];
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar13 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar17;
        *(char *)((int)pcVar14 * 2) =
             *(char *)((int)pcVar14 * 2) - CARRY1((byte)uVar13,(byte)puVar17);
        bVar52 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar25 = *pbVar25 + bVar7;
      puVar38 = puVar44;
code_r0x00402eb4:
      uVar27 = (undefined3)((uint)pbVar25 >> 8);
      bVar7 = (char)pbVar25 + 0x6f;
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      *(byte **)pcVar14 = pbStackY_60;
      uVar13 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar17;
      pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar50);
      uVar49 = uVar50;
      if ((byte)*puVar47 != 0 && SCARRY1((byte)uVar13,(char)puVar17) == (char)(byte)*puVar47 < '\0')
      {
        *pcVar14 = *pcVar14 + bVar7;
        bVar10 = (char)pbVar25 + 0x9c;
        pbVar25 = (byte *)CONCAT31(uVar27,bVar10);
        puVar38[(int)puVar48 * 2] =
             (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar38[(int)puVar48 * 2]);
        pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar50);
        uVar13 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar10;
        puVar44 = puVar38;
        if (CARRY1((byte)uVar13,bVar10)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar44 = puVar38 + (uint)bVar54 * -2 + 1;
      out(*puVar38,(short)puVar47);
    }
    cVar8 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar8;
    uVar27 = (undefined3)((uint)pcVar14 >> 8);
    bVar7 = cVar8 + 0x6f;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    *(byte **)pcVar14 = pbStackY_60;
    uVar13 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar17;
    pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar50);
    *(byte *)(puVar44 + 7) = ((byte)puVar44[7] - bVar36) - CARRY1((byte)uVar13,(byte)puVar17);
    *pcVar14 = *pcVar14 + bVar7;
    bVar10 = cVar8 + 0x9c;
    pcVar14 = (char *)CONCAT31(uVar27,bVar10);
    puVar44[(int)puVar48 * 2] =
         (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar48 * 2]);
    uVar13 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar10;
    if (!CARRY1((byte)uVar13,bVar10)) goto code_r0x00402e7e;
    *pcVar14 = *pcVar14 + bVar10;
    bVar10 = bVar10 | pcVar14[0x400001c];
    pbVar40 = (byte *)CONCAT31(uVar27,bVar10);
    uStack_18 = uVar50;
    if ((char)bVar10 < '\x01') goto code_r0x00402f16;
    *pbVar40 = *pbVar40 + bVar10;
    pcVar14 = (char *)CONCAT31(uVar27,bVar10 + 0x6f);
    while( true ) {
      *(byte **)pcVar14 = pbStackY_60;
      uVar13 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar17;
      *(uint *)((int)puVar44 + 0x1d) =
           (*(int *)((int)puVar44 + 0x1d) - (int)puVar48) - (uint)CARRY1((byte)uVar13,(byte)puVar17)
      ;
      bVar7 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar7;
      bVar10 = bVar7 + 0x2d;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar10);
      puVar44[(int)puVar48 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar48 * 2]);
      pbStackY_60 = (byte *)CONCAT22((short)((uint)pbStackY_60 >> 0x10),uVar50);
      uVar13 = *puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar10;
      if (!CARRY1((byte)uVar13,bVar10)) break;
      *pbVar40 = *pbVar40 + bVar10;
code_r0x00402f16:
      bVar7 = (byte)pbVar40 | pbVar40[0x400001d];
      puVar38 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
      pbVar40 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar40;
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
        uVar27 = (undefined3)((uint)puVar38 >> 8);
        cVar8 = (char)puVar38 + 'o';
        puVar41 = (uint *)CONCAT31(uVar27,cVar8);
        *puVar41 = (uint)pbStackY_60;
        cVar45 = (char)puVar17;
        *(byte *)puVar47 = (byte)*puVar47 + cVar45;
        pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar50);
        bVar7 = (byte)((uint)puVar47 >> 8);
        bVar52 = bVar7 < (byte)*puVar44;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar44,(char)puVar47));
        if (bVar52) break;
        bVar52 = CARRY4((uint)puVar41,*puVar41);
        puVar38 = (uint *)((int)puVar41 + *puVar41);
        if (!SCARRY4((int)puVar41,*puVar41)) {
          bVar52 = CARRY4((uint)unaff_EBP,*puVar38);
          unaff_EBP = unaff_EBP + *puVar38;
        }
        *puVar38 = (*puVar38 - (int)puVar38) - (uint)bVar52;
        *(byte *)puVar47 = (byte)*puVar47 + cVar45;
        puVar17 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                                   CONCAT11((char)((uint)puVar17 >> 8) + (byte)*puVar47,
                                            cVar45 - (byte)*puVar47));
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
code_r0x00402f3b:
        cVar45 = (char)puVar47;
        *pbVar29 = *pbVar29 + cVar45;
        bVar7 = (byte)puVar38;
        *(byte *)((int)puVar38 * 2) = *(byte *)((int)puVar38 * 2) ^ bVar7;
        *(byte *)puVar38 = (byte)*puVar38 + bVar7;
        *(byte *)puVar38 = (byte)*puVar38 + cVar45;
        uVar13 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar7;
        *puVar47 = (uint)((int)puVar38 + (uint)CARRY1((byte)uVar13,bVar7) + *puVar47);
        pcVar14 = (char *)((uint)puVar38 | *puVar48);
        uVar27 = (undefined3)((uint)pcVar14 >> 8);
        cVar8 = (char)pcVar14 + *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar27,cVar8);
        *pcVar14 = *pcVar14 + cVar8;
        cVar8 = cVar8 + *pcVar14;
        piVar24 = (int *)CONCAT31(uVar27,cVar8);
        *(char *)piVar24 = (char)*piVar24 + cVar8;
        iVar15 = LocalDescriptorTableRegister();
        *piVar24 = iVar15;
        bVar7 = *pbVar29;
        bVar33 = (byte)((uint)puVar17 >> 8);
        *pbVar29 = *pbVar29 + bVar33;
        iVar15 = *piVar24;
        uVar35 = (undefined2)((uint)puVar17 >> 0x10);
        bVar32 = (byte)puVar17;
        *(byte *)puVar44 = (byte)*puVar44 + cVar8;
        puVar38 = puVar44 + (uint)bVar54 * -2 + 1;
        out(*puVar44,(short)puVar47);
        *(byte *)puVar38 = (byte)*puVar38 + cVar8;
        bVar10 = *pbVar29;
        *(byte *)puVar47 = (byte)*puVar47 - bVar36;
        *(byte *)puVar38 = (byte)*puVar38 + cVar8;
        puVar41 = puVar38 + (uint)bVar54 * -2 + 1;
        out(*puVar38,(short)puVar47);
        *(byte *)puVar41 = (byte)*puVar41 + cVar8;
        bVar11 = *pbVar29;
        *(uint *)((int)puVar47 + -0x23) = *(uint *)((int)puVar47 + -0x23) & (uint)puVar41;
        puVar26 = (ushort *)((int)piVar24 + *piVar24);
        if (!SCARRY4((int)piVar24,*piVar24)) {
          *puVar26 = uVar49;
        }
        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
        uVar37 = CONCAT11((char)((uint)puVar47 >> 8) + *(byte *)((int)puVar47 + -0x15),cVar45);
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),uVar37);
        puVar38 = (uint *)((int)puVar26 + *(int *)puVar26);
        if (!SCARRY4((int)puVar26,*(int *)puVar26)) {
          *(ushort *)puVar38 = uVar49;
        }
        cVar8 = (char)puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + cVar8;
        cVar12 = ((bVar33 - (char)iVar15) - CARRY1(bVar7,bVar33) | bVar10 | bVar11) + (byte)*puVar38
        ;
        puVar17 = (uint *)CONCAT22(uVar35,CONCAT11(cVar12,bVar32));
        uVar13 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + bVar32;
        if (CARRY1((byte)uVar13,bVar32)) {
          *(byte *)puVar38 = (byte)*puVar38 + cVar8;
          bVar7 = *(byte *)((int)puVar47 + 6);
          *(byte *)puVar47 = (byte)*puVar47 + bVar32;
          bVar10 = (cVar12 - (byte)*puVar41) + cRam14730307;
          *(byte *)puVar38 = (byte)*puVar38 + cVar8;
          bVar7 = bVar36 | bVar7 | *(byte *)((int)puVar47 + 0x2a);
          uVar13 = *puVar38;
          pbVar29 = (byte *)((int)puVar38 + (uint)CARRY1(bVar10,(byte)*puVar38) + *puVar38);
          *(byte *)puVar47 = (byte)*puVar47 + bVar32;
          cVar8 = cVar9 - (byte)*puVar41;
          cVar9 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar7,cVar9)) >> 8),
                                             cVar8) + 0x1e);
          *pbVar29 = *pbVar29 + (char)pbVar29;
          uVar27 = (undefined3)((uint)pbVar29 >> 8);
          bVar7 = (char)pbVar29 + 0x2aU & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar9,cVar8)) + 0x1f);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar9,cVar8)) + 0x20);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar9,cVar8)) + 0x21);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar9,cVar8)) + 0x22);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          bVar10 = bVar10 + (byte)uVar13 + *pcVar14;
          uVar30 = CONCAT22(uVar35,CONCAT11(bVar10,bVar32));
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar9,cVar8)) + 0x25);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          pcVar18 = (char *)CONCAT22(uVar34,CONCAT11(cVar9 + *(char *)(CONCAT22(uVar34,CONCAT11(
                                                  cVar9,cVar8)) + 0x26),cVar8));
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          cVar8 = bVar7 + 0x2a;
          pcVar14 = (char *)CONCAT31(uVar27,cVar8);
          if ((POPCOUNT(cVar8) & 1U) == 0) {
            *pcVar14 = *pcVar14 + cVar8;
            pbVar29 = (byte *)(CONCAT31(uVar27,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar29;
            bVar11 = (byte)pbVar29;
            *pbVar29 = *pbVar29 + bVar11;
            uVar27 = (undefined3)((uint)pbVar29 >> 8);
            if (!CARRY1(bVar7,bVar11)) {
              if (!SCARRY1(bVar11,'\0')) {
                *pbVar29 = *pbVar29 + bVar11;
                uVar30 = CONCAT22(uVar35,CONCAT11(bVar10 | (byte)*puVar47,bVar32));
                bVar11 = bVar11 & (byte)*puVar47;
                *(char *)CONCAT31(uVar27,bVar11) = *(char *)CONCAT31(uVar27,bVar11) + bVar11;
                pcVar14 = (char *)CONCAT31(uVar27,bVar11 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar14 = (char *)CONCAT31(uVar27,bVar11 + *pcVar18);
              if (SCARRY1(bVar11,*pcVar18) != (char)(bVar11 + *pcVar18) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar11 + *pcVar18;
            pbVar29 = (byte *)CONCAT31(uVar27,bVar7);
            if (SCARRY1(bVar11,*pcVar18) == (char)bVar7 < '\0') {
              pcVar14 = (char *)CONCAT22(uVar35,CONCAT11(bVar10 | (byte)*puVar47,bVar32));
              *pcVar18 = *pcVar18 + cVar45;
              *(byte *)puVar47 = (byte)*puVar47 ^ bVar7;
              *(char *)((int)pbVar29 * 2) = *(char *)((int)pbVar29 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar14 = *pcVar14 + (char)pcVar14;
            uVar27 = (undefined3)((uint)pcVar14 >> 8);
            bVar7 = (char)pcVar14 + 0x2aU & (byte)*puVar47;
            *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x54 & (byte)*puVar47);
code_r0x00403072:
            cVar8 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar8;
            uVar27 = (undefined3)((uint)pcVar14 >> 8);
            pcVar14 = (char *)CONCAT31(uVar27,cVar8 + '*');
            *pcVar14 = *pcVar14 + cVar8 + '*';
            bVar7 = cVar8 + 0x54U & (byte)*puVar47;
            *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
            pcStackY_98 = (char *)CONCAT22(pcStackY_98._2_2_,(ushort)pbStack_20);
            uVar30 = CONCAT22((short)((uint)uVar30 >> 0x10),
                              CONCAT11((char)((uint)uVar30 >> 8) +
                                       *(char *)CONCAT31(uVar27,bVar7 + 0x2a),(char)uVar30));
            *(byte *)(puVar41 + 0x828000) = (byte)puVar41[0x828000] - cVar45;
            pcVar14 = pcStackY_98;
code_r0x0040309a:
            cVar8 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar8;
            pcStackY_98 = (char *)CONCAT22(pcStackY_98._2_2_,uVar50);
            *pcVar14 = *pcVar14 + cVar8;
            pbVar29 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8 + 0x2aU & (byte)*puVar47);
          }
          cVar8 = (char)pbVar29;
          *pbVar29 = *pbVar29 + cVar8;
          uVar27 = (undefined3)((uint)pbVar29 >> 8);
          cVar9 = cVar8 + '*';
          pcVar14 = (char *)CONCAT31(uVar27,cVar9);
          *(byte *)(puVar41 + 0x828000) = (byte)puVar41[0x828000] - cVar45;
          *pcVar14 = *pcVar14 + cVar9;
          cVar12 = (char)pcStackY_98 - (byte)*puVar41;
          pcVar18 = (char *)CONCAT22((short)((uint)pcStackY_98 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_98 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_98 >> 8),
                                                                 cVar12) + 0x34),cVar12));
          *pcVar14 = *pcVar14 + cVar9;
          bVar7 = cVar8 + 0x54U & (byte)*puVar47;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pbVar29 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar30 >> 8);
          pcVar14 = (char *)CONCAT22((short)((uint)uVar30 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar29,(char)uVar30));
          pbVar29 = pbVar29 + (uint)CARRY1(bVar7,*pbVar29) + *(int *)pbVar29;
          *(byte *)puVar47 = (byte)*puVar47 + (char)uVar30;
          uVar27 = (undefined3)((uint)pbVar29 >> 8);
          cVar8 = (byte)pbVar29 - *pbVar29;
          piVar24 = (int *)CONCAT31(uVar27,cVar8);
          puVar41 = (uint *)((int)puVar41 + (uint)((byte)pbVar29 < *pbVar29) + *piVar24);
          cVar8 = cVar8 + (char)*piVar24;
          pbVar29 = (byte *)CONCAT31(uVar27,cVar8);
          *pbVar29 = *pbVar29 + cVar8;
code_r0x004030df:
          *pcVar14 = *pcVar14 + cVar45;
          bVar7 = *pbVar29;
          bVar10 = (byte)pbVar29;
          *pbVar29 = *pbVar29 + bVar10;
          *(byte **)(pcVar18 + -0x41) =
               (byte *)((int)puVar41 + (uint)CARRY1(bVar7,bVar10) + *(int *)(pcVar18 + -0x41));
          *pbVar29 = *pbVar29 + bVar10;
          uVar27 = (undefined3)((uint)pbVar29 >> 8);
          bVar10 = bVar10 | (byte)*puVar41;
          *(char *)CONCAT31(uVar27,bVar10) = *(char *)CONCAT31(uVar27,bVar10) + bVar10;
          pcVar14 = (char *)CONCAT31(uVar27,bVar10 + 0x7b);
          *pcVar14 = *pcVar14 + bVar10 + 0x7b;
          pbVar29 = (byte *)((int)puVar41 + CONCAT31(uVar27,bVar10 - 8) + -1);
          *pbVar29 = *pbVar29 + (bVar10 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar44 = puVar41 + (uint)bVar54 * -2 + 1;
        out(*puVar41,uVar37);
        pbVar40 = unaff_EBP + 1;
        pbStackY_60 = unaff_EBP;
      }
      bVar7 = cVar8 - bVar52;
      pbVar40 = (byte *)((int)puVar44 + (int)puVar48 * 2);
      bVar52 = CARRY1(*pbVar40,bVar7);
      *pbVar40 = *pbVar40 + bVar7;
code_r0x00402ef9:
      pcVar14 = (char *)CONCAT31(uVar27,bVar7 - bVar52);
      pbVar40 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar40 = *pbVar40 + (bVar7 - bVar52);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar47;
  puVar38 = puVar47 + 0x2828000;
  bVar7 = (byte)puVar17;
  bVar52 = (byte)*puVar38 < bVar7;
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  bVar7 = (byte)pbVar40 + *pbVar40;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7 + bVar52);
  puVar38 = puVar48;
  uVar51 = (ushort)pbStack_20;
  if (CARRY1((byte)pbVar40,*pbVar40) || CARRY1(bVar7,bVar52)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar14 = *pcVar14 + bVar10;
  uVar51 = (ushort)pbStack_20;
  uStack_18 = uVar50;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45 + unaff_EBP[(int)pcVar14 * 4],uVar43));
  unaff_EDI[(int)pcVar14] = unaff_EDI[(int)pcVar14] + bVar10;
  goto code_r0x0040254a;
}


