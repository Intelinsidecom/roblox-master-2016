/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402264
 * Raw Name    : GetUnifiedSettingInfos
 * Demangled   : GetUnifiedSettingInfos
 * Prototype   : pointer GetUnifiedSettingInfos(undefined4 settingMapper, uint * param_2, int param_3)
 * Local Vars  : unaff_EBX, puVar44, cVar45, unaff_EBP, unaff_ESI, puVar46, unaff_EDI, puVar47, puVar48, in_ES, uVar49, uVar50, in_CS, uVar51, in_SS, uVar52, uVar53, in_GS_OFFSET, in_CF, bVar54, in_AF, bVar55, in_TF, in_IF, bVar56, bVar57, in_NT, uVar58, settingMapper, unaff_retaddr, in_stack_ffffffec, in_stack_fffffff4, param_2, param_3, pcStackY_80, pbStackY_48, puStackY_34, puStackY_30, uStackY_2c, uStack_4, iVar1, uVar2, pcVar3, uVar4, uVar5, uVar6, bVar7, bVar8, cVar9, bVar10, cVar11, in_EAX, pbVar12, uVar13, pcVar14, iVar15, pbVar16, pcVar17, uVar18, uVar19, puVar20, piVar21, pcVar22, piVar23, pbVar24, puVar25, uVar26, iVar27, uVar28, puVar29, extraout_ECX, extraout_ECX_00, extraout_ECX_01, extraout_ECX_02, uVar30, cVar31, bVar32, bVar33, uVar34, uVar35, bVar36, uVar37, puVar38, pbVar39, pbVar40, puVar41, uVar42, cVar43
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

undefined * __fastcall GetUnifiedSettingInfos(undefined4 settingMapper,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  byte *in_EAX;
  undefined3 uVar26;
  byte *pbVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar16;
  int3 iVar27;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int *piVar21;
  char *pcVar22;
  int *piVar23;
  byte *pbVar24;
  ushort *puVar25;
  undefined1 uVar28;
  char cVar31;
  undefined2 uVar34;
  uint *puVar29;
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
  char cVar43;
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
  ushort uVar51;
  undefined2 in_SS;
  ushort uVar52;
  ushort uVar53;
  int in_GS_OFFSET;
  bool in_CF;
  bool bVar54;
  byte in_AF;
  bool bVar55;
  byte in_TF;
  byte in_IF;
  bool bVar56;
  bool bVar57;
  byte in_NT;
  undefined8 uVar58;
  byte *unaff_retaddr;
  char *pcStackY_80;
  byte *pbStackY_48;
  uint *puStackY_34;
  uint *puStackY_30;
  undefined4 uStackY_2c;
  undefined4 in_stack_ffffffec;
  byte *in_stack_fffffff4;
  ushort uStack_4;
  
  bVar56 = false;
                    /* .NET CLR Managed Code */
  if (!in_CF) {
    *(byte *)param_2 = (char)*param_2 + (byte)settingMapper;
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
    goto _ctor;
  }
  bVar7 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar7;
  puVar29 = (uint *)CONCAT31((int3)((uint)settingMapper >> 8),(byte)settingMapper | (byte)*param_2);
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x26);
  *in_EAX = *in_EAX + bVar7;
  uVar26 = (undefined3)((uint)in_EAX >> 8);
  bVar7 = bVar7 | (byte)*param_2;
  pbVar12 = (byte *)CONCAT31(uVar26,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *pbVar12 = *pbVar12 + bVar7;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    in_AF = 9 < (bVar7 + 6 & 0xf) | in_AF;
    bVar8 = bVar7 + 6 + in_AF * '\x06';
    pbVar12 = (byte *)CONCAT31(uVar26,bVar8 + (0x90 < (bVar8 & 0xf0) |
                                              0xf9 < bVar7 | in_AF * (0xf9 < bVar8)) * '`');
  }
  *pbVar12 = *pbVar12 + (char)pbVar12;
  do {
    puVar38 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0x28],(char)param_2))
    ;
    *pbVar12 = *pbVar12 + (char)pbVar12;
    uVar34 = (undefined2)((uint)puVar29 >> 0x10);
    uVar28 = SUB41(puVar29,0);
    bVar8 = (byte)((uint)puVar29 >> 8) | *pbVar12;
    puVar29 = (uint *)CONCAT22(uVar34,CONCAT11(bVar8,uVar28));
    cVar9 = (char)pbVar12 + *pbVar12;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
    bVar7 = *unaff_EBX;
    *unaff_EBX = *unaff_EBX + bVar8;
    if (!CARRY1(bVar7,bVar8)) goto code_r0x004022b3;
    *in_EAX = *in_EAX + cVar9;
    settingMapper = CONCAT22(uVar34,CONCAT11(bVar8 | (byte)*puVar38,uVar28));
    unaff_retaddr = (byte *)((uint)unaff_retaddr & 0xffff0000);
    param_2 = puVar38;
_ctor:
    bVar7 = (byte)((uint)settingMapper >> 8);
    uVar34 = (undefined2)((uint)settingMapper >> 0x10);
    cVar9 = (char)settingMapper;
    bVar8 = bVar7 + *in_EAX;
    puVar29 = (uint *)CONCAT22(uVar34,CONCAT11(bVar8,cVar9));
    in_EAX = in_EAX + (uint)CARRY1(bVar7,*in_EAX) + *(int *)in_EAX;
    *(byte *)param_2 = (byte)*param_2 + cVar9;
    bVar10 = (byte)unaff_EBX;
    bVar54 = bVar10 < *(byte *)((int)unaff_ESI + 2);
    bVar7 = *(byte *)((int)unaff_ESI + 2);
    cVar43 = bVar10 - bVar7;
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar43);
    if ((POPCOUNT(cVar43) & 1U) != 0) {
      if ((char)bVar7 <= (char)bVar10) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *in_EAX = *in_EAX + (byte)in_EAX;
    bVar7 = (byte)in_EAX | *unaff_EBX;
    pbVar12 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
    puVar38 = param_2;
    if (bVar7 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
      *pbVar12 = *pbVar12 + bVar7;
      puVar29 = (uint *)CONCAT22(uVar34,CONCAT11(bVar8 | (byte)*param_2,cVar9));
      bVar8 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar8,bVar7) + *(int *)pbVar12);
      pbVar12 = pbVar12 + *(int *)pbVar12;
      cVar9 = (char)pbVar12 - *pbVar12;
      piVar23 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
      *(char *)piVar23 = (char)*piVar23 + cVar9;
      in_EAX = (byte *)((int)piVar23 + *piVar23);
      uVar13 = *puVar29;
      *(byte *)puVar29 = (byte)*puVar29 + (byte)param_2;
      if (!CARRY1((byte)uVar13,(byte)param_2)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar12 = *pbVar12;
    out(*unaff_ESI,(short)param_2);
    pbVar12 = pbVar12 + -*(int *)pbVar12;
    unaff_ESI = unaff_ESI + 1;
code_r0x004022ab:
    *(byte *)puVar38 = (byte)*puVar38 + (char)puVar29;
    bVar7 = (char)pbVar12 - *pbVar12;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
    *unaff_EBX = *unaff_EBX + (char)puVar38;
    *unaff_EBX = *unaff_EBX ^ bVar7;
code_r0x004022b3:
    *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)puVar29 >> 8);
    bVar8 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar8;
    *unaff_EBX = *unaff_EBX + bVar8;
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar8;
    *(byte **)(unaff_EBX + 0x2c) =
         (byte *)((int)unaff_ESI + (uint)CARRY1(bVar7,bVar8) + *(int *)(unaff_EBX + 0x2c));
    param_2 = puVar38;
code_r0x004022be:
    *in_EAX = *in_EAX + (char)in_EAX;
    puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(byte)puVar29 | (byte)*param_2);
    unaff_retaddr = (byte *)((uint)unaff_retaddr & 0xffff0000);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *in_EAX = *in_EAX + (byte)in_EAX;
    uVar26 = (undefined3)((uint)in_EAX >> 8);
    bVar7 = (byte)in_EAX | (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar26,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      *pcVar14 = *pcVar14 + bVar7;
    }
    *pcVar14 = *pcVar14 + bVar7;
    cVar9 = bVar7 + 6;
    pbVar12 = (byte *)CONCAT31(uVar26,cVar9);
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    *pbVar12 = *pbVar12 + cVar9;
    puVar38 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0x2f],(char)param_2))
    ;
    *pbVar12 = *pbVar12 + cVar9;
    bVar7 = (byte)((uint)puVar29 >> 8) | *pbVar12;
    puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(bVar7,(char)puVar29));
    in_EAX = pbVar12 + *(int *)pbVar12;
    bVar54 = CARRY1(*unaff_EBX,bVar7);
    *unaff_EBX = *unaff_EBX + bVar7;
code_r0x004022e0:
    param_2 = puVar38;
    if (!bVar54) goto code_r0x0040230b;
    bVar8 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar8;
    puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                               CONCAT11((byte)((uint)puVar29 >> 8) | (byte)*puVar38,(char)puVar29));
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar8;
    unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)CARRY1(bVar7,bVar8) - *(int *)in_EAX));
code_r0x004022ea:
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *in_EAX);
code_r0x004022ef:
    *(char *)((int)in_EAX * 2) = *(char *)((int)in_EAX * 2) + (char)in_EAX;
    *(byte *)puVar29 = (byte)*puVar29 + (char)puVar38;
    in_SS = SUB42(in_stack_fffffff4,0);
    param_2 = puVar38;
    while( true ) {
      uVar26 = (undefined3)((uint)in_EAX >> 8);
      bVar7 = (byte)in_EAX | (byte)*param_2;
      pbVar12 = (byte *)CONCAT31(uVar26,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + bVar7;
      cVar9 = bVar7 + 0xd;
      pcVar14 = (char *)CONCAT31(uVar26,cVar9);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) + (char)((uint)puVar29 >> 8);
      *pcVar14 = *pcVar14 + cVar9;
      in_EAX = (byte *)CONCAT31(uVar26,cVar9);
      *in_EAX = *in_EAX + cVar9;
code_r0x0040230b:
      puVar38 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((char)((uint)param_2 >> 8) + unaff_EBX[0x34],(char)param_2
                                         ));
      cVar9 = (char)in_EAX;
      *in_EAX = *in_EAX + cVar9;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x79],
                                            (char)unaff_EBX));
      *in_EAX = *in_EAX + cVar9;
      pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar9 + '\x02');
code_r0x00402317:
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x7a],
                                            (char)unaff_EBX));
      cVar9 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      uVar26 = (undefined3)((uint)pcVar14 >> 8);
      cVar43 = cVar9 + '{';
      pbVar12 = (byte *)CONCAT31(uVar26,cVar43);
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      pbVar40 = (byte *)((int)puVar38 + (int)pbVar12);
      *pbVar40 = *pbVar40 + cVar43;
      if ((POPCOUNT(*pbVar40) & 1U) != 0) goto code_r0x004022ab;
      *pbVar12 = *pbVar12 + cVar43;
      piVar23 = (int *)CONCAT31(uVar26,cVar9 + -10);
      uVar13 = (int)piVar23 + *piVar23;
      bVar7 = (byte)uVar13;
      unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar7;
      in_EAX = (byte *)(uVar13 ^ 0x7d0a0000);
      *in_EAX = bVar7;
      pbVar12 = (byte *)((int)puVar38 + (int)in_EAX);
      *pbVar12 = *pbVar12 + bVar7;
      param_2 = puVar38;
      if ((POPCOUNT(*pbVar12) & 1U) != 0) goto code_r0x004022be;
      *in_EAX = *in_EAX + bVar7;
      pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7 + 0x69);
code_r0x00402342:
      uVar26 = (undefined3)((uint)pcVar14 >> 8);
      bVar7 = (char)pcVar14 + *pcVar14;
      pcVar14 = (char *)CONCAT31(uVar26,bVar7);
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte *)(unaff_ESI + 0x800000) = (byte)unaff_ESI[0x800000] + (char)puVar29;
      cVar43 = (char)unaff_EBX;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x7a],cVar43))
      ;
      *pcVar14 = *pcVar14 + bVar7;
      bVar54 = 0xfd < bVar7;
      cVar9 = bVar7 + 2;
      in_EAX = (byte *)CONCAT31(uVar26,cVar9);
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x004022e0;
      *in_EAX = *in_EAX + cVar9;
      cVar9 = bVar7 + 0x71;
      in_EAX = (byte *)CONCAT31(uVar26,cVar9);
      bVar8 = *in_EAX;
      *in_EAX = *in_EAX + cVar9;
      in_stack_fffffff4 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar8,cVar9) == (char)*in_EAX < '\0') {
        *(byte *)((int)puVar38 + (int)in_EAX) = *(byte *)((int)puVar38 + (int)in_EAX) + cVar43;
        goto code_r0x004022ef;
      }
      *in_EAX = *in_EAX + cVar9;
      in_EAX = (byte *)CONCAT31(uVar26,bVar7 + 0x73);
      bVar54 = (POPCOUNT(bVar7 + 0x73) & 1U) == 0;
      param_2 = puVar38;
code_r0x00402366:
      if (bVar54) {
code_r0x00402368:
        *in_EAX = *in_EAX + (char)in_EAX;
        cVar9 = (char)in_EAX + 'o';
        pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar9);
        *pcVar14 = *pcVar14 + cVar9;
        puVar38 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_EBX);
        pcVar14 = pcVar14 + 0x37280512;
        bVar8 = (byte)pcVar14;
        *pcVar14 = *pcVar14 + bVar8;
        puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                   CONCAT11((byte)((uint)puVar29 >> 8) | bRam7d160243,(char)puVar29)
                                  );
        pbVar12 = (byte *)((int)puVar38 + (int)pcVar14);
        bVar7 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar8;
        pcRam00008e7d = pcVar14 + (int)(pcRam00008e7d + CARRY1(bVar7,bVar8));
        bVar54 = SCARRY1(bVar8,'\x02');
        bVar8 = bVar8 + 2;
        puVar25 = (ushort *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
code_r0x0040238b:
        if (bVar54 == (char)bVar8 < '\0') {
          *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
          pcVar14 = (char *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + '\x12');
code_r0x00402391:
          pcVar14 = pcVar14 + 0x42802;
          *unaff_EBX = *unaff_EBX + (char)((uint)puVar29 >> 8);
          unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
code_r0x00402399:
          bVar7 = (byte)unaff_EBX | (byte)((uint)puVar29 >> 8);
          uVar26 = (undefined3)((uint)pcVar14 >> 8);
          pcVar14 = (char *)CONCAT31(uVar26,1);
          *pcVar14 = *pcVar14 + '\x01';
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                   bVar7) + -0x72),bVar7));
          *pcVar14 = *pcVar14 + '\x01';
          uVar13 = CONCAT31(uVar26,0x14);
          pcVar14 = (char *)(uVar13 + 0x19061215 + (uint)(0x1f9edfd < uVar13));
          uVar2 = (uint)(0xe4ffffec < uVar13 + 0xfe061202 ||
                        CARRY4(uVar13 + 0x19061215,(uint)(0x1f9edfd < uVar13)));
          uVar13 = *unaff_ESI;
          uVar18 = *unaff_ESI;
          *unaff_ESI = (uint)(pcVar14 + uVar18 + uVar2);
          if ((SCARRY4(uVar13,(int)pcVar14) != SCARRY4((int)(pcVar14 + uVar18),uVar2)) !=
              (int)*unaff_ESI < 0) {
            bVar8 = (byte)pcVar14;
            *pcVar14 = *pcVar14 + bVar8;
            iVar15 = CONCAT31((int3)((uint)pcVar14 >> 8),bVar8 + 2) + 0x847d + (uint)(0xfd < bVar8);
            puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(byte)puVar38 | (byte)*puVar38);
            pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x134f26)
            ;
            *unaff_EBX = *unaff_EBX + bVar7;
code_r0x004023cd:
            out(*unaff_ESI,(short)puVar38);
            uVar13 = *puVar38;
            *(byte *)puVar38 = (byte)*puVar38 + (byte)puVar29;
            in_EAX = (byte *)(pcVar14 + (uint)CARRY1((byte)uVar13,(byte)puVar29) + *(int *)unaff_EDI
                             );
            bVar57 = SCARRY1((char)puVar38,(byte)*puVar29);
            bVar7 = (char)puVar38 + (byte)*puVar29;
            puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar7);
            bVar55 = (char)bVar7 < '\0';
            unaff_ESI = unaff_ESI + 1;
code_r0x004023d6:
            bVar54 = (POPCOUNT(bVar7) & 1U) == 0;
            in_ES = (ushort)unaff_retaddr;
            param_2 = puVar38;
            if (bVar57 != bVar55) {
              *in_EAX = *in_EAX + (char)in_EAX;
code_r0x004023db:
              cVar43 = (char)in_EAX;
              uVar26 = (undefined3)((uint)in_EAX >> 8);
              cVar9 = cVar43 + '\x02';
              in_EAX = (byte *)CONCAT31(uVar26,cVar9);
              if ((POPCOUNT(cVar9) & 1U) != 0) {
                pbVar12 = (byte *)((int)param_2 + (int)in_EAX);
                *pbVar12 = *pbVar12 + cVar9;
                bVar54 = (POPCOUNT(*pbVar12) & 1U) == 0;
                goto code_r0x00402366;
              }
              *in_EAX = *in_EAX + cVar9;
              cVar43 = cVar43 + '\x15';
              in_EAX = (byte *)CONCAT31(uVar26,cVar43);
              *(byte *)puVar29 = (byte)*puVar29 | (byte)param_2;
              *unaff_EDI = *unaff_EDI | (byte)param_2;
              if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
                *in_EAX = *in_EAX + cVar43;
                unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                goto code_r0x00402425;
              }
              *in_EAX = *in_EAX + cVar43;
              cVar43 = cVar43 + (byte)*param_2;
              pcVar14 = (char *)CONCAT31(uVar26,cVar43);
              if ((POPCOUNT(cVar43) & 1U) == 0) {
                *pcVar14 = *pcVar14 + cVar43;
                puVar25 = (ushort *)CONCAT31(uVar26,cVar43 + 'o');
                puVar38 = param_2;
code_r0x004023f6:
                uVar13 = *puVar38;
                *(byte *)puVar38 = (byte)*puVar38 + (char)puVar29;
                cVar9 = (char)puVar25;
                if (SCARRY1((byte)uVar13,(char)puVar29) == (char)(byte)*puVar38 < '\0') {
                  in_ES = *puVar25;
                  pbVar12 = (byte *)((int)puVar38 + (int)puVar25);
                  bVar54 = SCARRY1(*pbVar12,cVar9);
                  *pbVar12 = *pbVar12 + cVar9;
                  bVar8 = *pbVar12;
                  goto code_r0x0040238b;
                }
                *(char *)puVar25 = (char)*puVar25 + cVar9;
                cVar9 = cVar9 + '\x02';
                pcVar14 = (char *)CONCAT31((int3)((uint)puVar25 >> 8),cVar9);
                puVar47 = unaff_ESI;
                if ((POPCOUNT(cVar9) & 1U) == 0) {
code_r0x00402402:
                  *pcVar14 = *pcVar14 + (char)pcVar14;
                  uVar26 = (undefined3)((uint)pcVar14 >> 8);
                  piVar23 = (int *)CONCAT31(uVar26,(char)pcVar14 + 'r');
                  *piVar23 = *piVar23 + 0x7b027000;
                  cVar9 = (char)*piVar23;
                  pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                  pbVar12 = (byte *)((int)puVar38 + (int)pcVar14);
                  *pbVar12 = *pbVar12 + cVar9;
                  unaff_ESI = puVar47;
                  if ((POPCOUNT(*pbVar12) & 1U) == 0) {
                    *pcVar14 = *pcVar14 + cVar9;
                    bVar8 = cVar9 + '{' + *(char *)CONCAT31(uVar26,cVar9 + '{');
                    piVar23 = (int *)CONCAT31(uVar26,bVar8);
                    pbVar12 = (byte *)((int)piVar23 + (int)unaff_EBP);
                    bVar7 = *pbVar12;
                    *pbVar12 = *pbVar12 + bVar8;
                    *piVar23 = (*piVar23 - (int)piVar23) - (uint)CARRY1(bVar7,bVar8);
                    *(byte *)puVar38 = (byte)*puVar38 + (char)puVar29;
                    unaff_ESI = puVar47 + 1;
                    out(*puVar47,(short)puVar38);
                    cVar9 = bVar8 - (char)*piVar23;
                    in_EAX = (byte *)CONCAT31(uVar26,cVar9);
                    *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar9;
                    param_2 = puVar38;
code_r0x00402425:
                    out(*unaff_ESI,(short)param_2);
                    uVar13 = *param_2;
                    *(byte *)param_2 = (byte)*param_2 + (byte)puVar29;
                    uVar13 = (uint)CARRY1((byte)uVar13,(byte)puVar29);
                    pbVar12 = (byte *)((int)puVar29 + *puVar29) + uVar13;
                    puVar29 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),
                                               (char)pbVar12 + *pbVar12 +
                                               (CARRY4((uint)puVar29,*puVar29) ||
                                               CARRY4((int)puVar29 + *puVar29,uVar13)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)unaff_EBX >> 8);
                    puVar38 = param_2;
                    unaff_ESI = unaff_ESI + 1;
code_r0x00402435:
                    puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                               (byte)puVar38 | (byte)*puVar38);
                    bVar7 = *in_EAX;
                    *in_EAX = *in_EAX + (char)in_EAX;
                    puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                               CONCAT11((byte)((uint)puVar29 >> 8) | bVar7 |
                                                        bRam7d170243,(char)puVar29));
code_r0x00402442:
                    pbVar12 = (byte *)((int)puVar38 + (int)in_EAX);
                    bVar8 = *pbVar12;
                    bVar7 = (byte)in_EAX;
                    *pbVar12 = *pbVar12 + bVar7;
                    uVar13 = *puVar38;
                    uVar18 = *puVar38;
                    *puVar38 = (uint)((byte *)(uVar18 + (int)puVar29) + CARRY1(bVar8,bVar7));
                    param_2 = puVar38;
                    if ((SCARRY4(uVar13,(int)puVar29) !=
                        SCARRY4((int)(uVar18 + (int)puVar29),(uint)CARRY1(bVar8,bVar7))) !=
                        (int)*puVar38 < 0) {
                      *in_EAX = *in_EAX + bVar7;
                      bVar57 = SCARRY1(bVar7,'\x02');
                      bVar7 = bVar7 + 2;
                      in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
code_r0x0040244f:
                      bVar55 = (char)bVar7 < '\0';
                      if (bVar57 == bVar55) {
code_r0x00402451:
                        *in_EAX = *in_EAX + (char)in_EAX;
                        bVar7 = (char)in_EAX + 0x12U | (byte)*puVar38;
                        pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
                        cRam162b0000 = cRam162b0000 - bVar7;
code_r0x0040245d:
                        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                     (byte)unaff_EBX | (byte)((uint)puVar29 >> 8));
                        cVar9 = in((short)puVar38);
                        puVar25 = (ushort *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9);
                        *(char *)puVar25 = (char)*puVar25 + cVar9;
                        *(byte *)puVar38 = (byte)*puVar38 + cVar9;
                        if ((POPCOUNT((byte)*puVar38) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
                          uVar26 = (undefined3)((uint)puVar25 >> 8);
                          bVar7 = (char)puVar25 + 0x13U | (byte)*puVar38;
                          pcVar14 = (char *)CONCAT31(uVar26,bVar7);
                          cVar9 = (byte)puVar29 + *unaff_EBX;
                          puVar47 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),cVar9);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar13 = (uint)CARRY1((byte)puVar29,*unaff_EBX);
                          iVar15 = *(int *)unaff_EBX;
                          iVar1 = *(int *)unaff_EBX;
                          *(byte **)unaff_EBX = (byte *)(iVar1 + (int)puVar47) + uVar13;
                          if ((SCARRY4(iVar15,(int)puVar47) != SCARRY4(iVar1 + (int)puVar47,uVar13))
                              != *(int *)unaff_EBX < 0) {
                            *pcVar14 = *pcVar14 + bVar7;
                            iVar15 = CONCAT31(uVar26,bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
                            uVar26 = (undefined3)((uint)iVar15 >> 8);
                            bVar7 = (char)iVar15 + 0x12;
                            puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar29 >> 8) |
                                                                *(byte *)CONCAT31(uVar26,bVar7),
                                                                cVar9));
                            in_AF = 9 < (bVar7 & 0xf) | in_AF;
                            uVar13 = CONCAT31(uVar26,bVar7 + in_AF * -6) & 0xffffff0f;
                            pcVar14 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                                       CONCAT11((char)((uint)iVar15 >> 8) - in_AF,
                                                                (char)uVar13));
code_r0x00402486:
                            *pcVar14 = *pcVar14 + (char)pcVar14;
                            puVar47 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                                       (byte)puVar38 | (byte)*puVar38);
                            uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
                            bVar7 = (byte)((uint)unaff_EBX >> 8) | (byte)((uint)puVar38 >> 8);
                            in_EAX = (byte *)(pcVar14 + 0x1b000019);
                            puVar38 = (uint *)((int)puVar47 + (int)in_EAX);
                            bVar54 = CARRY4((uint)puVar29,*puVar38);
                            pbVar12 = (byte *)((int)puVar29 + *puVar38);
                            puVar29 = (uint *)(pbVar12 + ((char *)0xe4ffffe6 < pcVar14));
                            piVar23 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                            *piVar23 = (int)((int)puVar29 +
                                            (uint)(bVar54 ||
                                                  CARRY4((uint)pbVar12,
                                                         (uint)((char *)0xe4ffffe6 < pcVar14))) +
                                            *piVar23);
                            unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(bVar7 + *(char *)(CONCAT22(
                                                  uVar34,CONCAT11(bVar7,(char)unaff_EBX)) + -0x79),
                                                  (char)unaff_EBX));
                            puVar38 = puVar47;
code_r0x0040249e:
                            bVar7 = (byte)in_EAX;
                            *in_EAX = *in_EAX + bVar7;
                            uVar26 = (undefined3)((uint)in_EAX >> 8);
                            cVar9 = bVar7 + 2;
                            in_EAX = (byte *)CONCAT31(uVar26,cVar9);
                            param_2 = puVar38;
                            if (0xfd < bVar7) {
                              bVar8 = *in_EAX;
                              *in_EAX = *in_EAX + cVar9;
                              unaff_retaddr =
                                   (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                              if (SCARRY1(bVar8,cVar9) == (char)*in_EAX < '\0')
                              goto code_r0x00402435;
                              *in_EAX = *in_EAX + cVar9;
                              cVar9 = bVar7 + 4;
                              pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                              if ((POPCOUNT(cVar9) & 1U) != 0) {
                                *(byte *)puVar38 = (byte)*puVar38 + (char)puVar29;
                                in_EAX = (byte *)(pcVar14 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar14 = *pcVar14 + cVar9;
                              cVar9 = bVar7 + 6;
                              pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                              if ((POPCOUNT(cVar9) & 1U) == 0) {
                                while( true ) {
                                  cVar9 = (char)pcVar14;
                                  *pcVar14 = *pcVar14 + cVar9;
                                  uVar26 = (undefined3)((uint)pcVar14 >> 8);
                                  pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '}');
                                  unaff_ESI = (uint *)((int)unaff_ESI + -1);
                                  *pcVar14 = *pcVar14 + cVar9 + '}';
                                  cVar43 = cVar9 + '\x7f';
                                  in_EAX = (byte *)CONCAT31(uVar26,cVar43);
                                  if ((POPCOUNT(cVar43) & 1U) != 0) break;
                                  *in_EAX = *in_EAX + cVar43;
                                  cVar43 = cVar9 + -0x7f;
                                  in_EAX = (byte *)CONCAT31(uVar26,cVar43);
                                  if ((POPCOUNT(cVar43) & 1U) != 0) goto code_r0x00402451;
                                  *in_EAX = *in_EAX + cVar43;
                                  pcVar14 = (char *)CONCAT31(uVar26,cVar9 + -2);
                                  unaff_EDI = unaff_EDI + -1;
                                  while( true ) {
                                    cVar9 = (char)pcVar14;
                                    *pcVar14 = *pcVar14 + cVar9;
                                    uVar26 = (undefined3)((uint)pcVar14 >> 8);
                                    cVar43 = cVar9 + '\x02';
                                    pcVar14 = (char *)CONCAT31(uVar26,cVar43);
                                    if ((POPCOUNT(cVar43) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar14 = *pcVar14 + cVar43;
                                    pcVar14 = (char *)(CONCAT31(uVar26,cVar9 + 'q') + 1);
                                    *pcVar14 = *pcVar14 + (byte)pcVar14;
                                    uVar26 = (undefined3)((uint)pcVar14 >> 8);
                                    bVar7 = (byte)pcVar14 | (byte)*puVar38;
                                    pcVar14 = (char *)CONCAT31(uVar26,bVar7);
                                    if ((POPCOUNT(bVar7) & 1U) != 0) {
                                      puVar29 = (uint *)((int)puVar29 + *puVar38);
                                      puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                                                 (char)puVar38 + (byte)*puVar38);
                                      unaff_EDI = (byte *)((uint)unaff_EDI | (uint)unaff_ESI);
                                      puVar25 = (ushort *)(pcVar14 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar14 = *pcVar14 + bVar7;
                                    pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x6f);
                                    puVar29 = (uint *)((int)puVar29 + 1);
                                    *pcVar14 = *pcVar14 + bVar7 + 0x6f;
                                    uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
                                    bVar7 = (byte)unaff_EBX;
                                    bVar8 = (byte)((uint)unaff_EBX >> 8) | (byte)*puVar38;
                                    in_SS = (ushort)param_3;
                                    param_3 = CONCAT22(param_3._2_2_,in_ES);
                                    cVar43 = (char)(pcVar14 + -0x21000001);
                                    uVar26 = (undefined3)((uint)(pcVar14 + -0x21000001) >> 8);
                                    cVar9 = cVar43 + -0x13;
                                    pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                                    cVar45 = bVar8 + *(char *)(CONCAT22(uVar34,CONCAT11(bVar8,bVar7)
                                                                       ) + -0x73);
                                    unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,bVar7));
                                    *pcVar14 = *pcVar14 + cVar9;
                                    pcVar14 = (char *)(CONCAT31(uVar26,cVar43 + '\x19') | *puVar38);
                                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar9 = (char)pcVar14;
                                    *pcVar14 = *pcVar14 + cVar9;
                                    uVar26 = (undefined3)((uint)pcVar14 >> 8);
                                    pcVar17 = (char *)CONCAT31(uVar26,cVar9 + 'o');
                                    param_2 = (uint *)((int)puVar38 + 1);
                                    *pcVar17 = *pcVar17 + cVar9 + 'o';
                                    bVar7 = bVar7 | (byte)((uint)pcVar14 >> 8);
                                    unaff_retaddr =
                                         (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES
                                                         );
                                    pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '\\');
                                    cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8
                                                                               ),bVar7) + -0x78);
                                    unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,bVar7));
                                    *pcVar14 = *pcVar14 + cVar9 + '\\';
                                    pcVar14 = (char *)(CONCAT31(uVar26,cVar9 + -0x78) | *param_2);
                                    cVar9 = (char)pcVar14;
                                    uVar26 = (undefined3)((uint)pcVar14 >> 8);
                                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                                      in_EAX = (byte *)CONCAT31(uVar26,cVar9 + '\x02');
                                      puVar38 = param_2;
                                      if ((POPCOUNT(cVar9 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar14 = *pcVar14 + cVar9;
                                    cVar43 = cVar9 + 'o';
                                    pcVar17 = (char *)CONCAT31(uVar26,cVar43);
                                    puVar38 = (uint *)((int)puVar38 + 2);
                                    *pcVar17 = *pcVar17 + cVar43;
                                    bVar7 = bVar7 | (byte)((uint)pcVar14 >> 8);
                                    unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45 + *(char *)(
                                                  CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7) +
                                                  -0x79),bVar7));
                                    *pcVar17 = *pcVar17 + cVar43;
                                    pcVar14 = (char *)(CONCAT31(uVar26,cVar9 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar9 = (char)pcVar14;
                                    *pcVar14 = *pcVar14 + cVar9;
                                    cVar43 = cVar9 + '\x02';
                                    pcVar14 = (char *)CONCAT31(uVar26,cVar43);
                                    if (SCARRY1(cVar9,'\x02') != cVar43 < '\0') break;
                                    *pcVar14 = *pcVar14 + cVar43;
                                    cVar43 = cVar9 + '\n';
                                    *unaff_EBX = *unaff_EBX - cVar43;
                                    *(byte *)puVar38 = *(byte *)puVar38 + (char)puVar29;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar26,cVar43) =
                                         *(char *)CONCAT31(uVar26,cVar43) + cVar43;
                                    cVar45 = cVar9 + '\f';
                                    pcVar14 = (char *)CONCAT31(uVar26,cVar45);
                                    if (SCARRY1(cVar43,'\x02') == cVar45 < '\0') {
                                      *pcVar14 = *pcVar14 + cVar45;
                                      pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '\x13');
                                      uVar53 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar12 = (byte *)((int)puVar38 + (int)in_EAX);
                                bVar57 = SCARRY1(*pbVar12,cVar43);
                                *pbVar12 = *pbVar12 + cVar43;
                                bVar7 = *pbVar12;
                                goto code_r0x0040244f;
                              }
                              cVar43 = (char)puVar38;
                              cVar45 = cVar43 + *unaff_EDI;
                              puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),cVar45);
                              if (SCARRY1(cVar43,*unaff_EDI) != cVar45 < '\0') {
                                *pcVar14 = *pcVar14 + cVar9;
                                in_EAX = (byte *)CONCAT31(uVar26,bVar7 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar17 = pcVar14 + 2;
                          *pcVar17 = *pcVar17 + (char)((uint)puVar38 >> 8);
                          puVar29 = puVar47;
                          if ((POPCOUNT(*pcVar17) & 1U) == 0) {
                            *pcVar14 = *pcVar14 + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 2);
                            puVar47 = unaff_ESI;
                            goto code_r0x00402402;
                          }
                          puVar38 = (uint *)((int)puVar38 - *unaff_ESI);
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
                *(char *)((int)puVar38 * 2) = *(char *)((int)puVar38 * 2) + cVar9;
                goto code_r0x00402391;
              }
              *pcVar14 = *pcVar14 + cVar43;
              in_EAX = (byte *)CONCAT31(uVar26,cVar43 + '\x02');
              goto code_r0x00402368;
            }
            goto code_r0x00402366;
          }
          goto code_r0x00402342;
        }
        LOCK();
        pcVar14 = *(char **)puVar25;
        *(ushort **)puVar25 = puVar25;
        UNLOCK();
        *(byte *)((int)puVar38 + (int)pcVar14) =
             *(byte *)((int)puVar38 + (int)pcVar14) + (char)pcVar14;
        goto code_r0x00402317;
      }
      bVar54 = CARRY1(*in_EAX,(byte)in_EAX);
      *in_EAX = *in_EAX + (byte)in_EAX;
code_r0x004022f3:
      *(byte **)unaff_EDI = (byte *)((int)param_2 + (uint)bVar54 + *(int *)unaff_EDI);
    }
  } while( true );
code_r0x0040254a:
  cVar9 = (char)pcVar14;
  *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) - cVar9;
  *pcVar14 = *pcVar14 + cVar9;
  pcVar17 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + *pcVar14);
  *pcVar17 = *pcVar17 + cVar9 + *pcVar14;
  uVar58 = func_0x0f40255d();
code_r0x0040255d:
  pcVar14 = (char *)((ulonglong)uVar58 >> 0x20);
  piVar23 = (int *)uVar58;
  *piVar23 = (int)((int)piVar23 + *piVar23);
  uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar28 = SUB41(unaff_EBX,0);
  cVar45 = (char)((uint)unaff_EBX >> 8) + (char)((ulonglong)uVar58 >> 0x28);
  pcVar17 = (char *)CONCAT22(uVar34,CONCAT11(cVar45,uVar28));
  *piVar23 = (int)((int)piVar23 + *piVar23);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar58 >> 0x20);
  cVar9 = (char)uVar58;
  *(char *)piVar23 = (char)*piVar23 + cVar9;
  *(char *)piVar23 = (char)*piVar23 + cVar9;
  *(char *)piVar23 = (char)*piVar23 + cVar9;
  *pcVar14 = *pcVar14 + cVar9;
  *(char *)piVar23 = (char)*piVar23 + cVar9;
  *pcVar17 = *pcVar17 + cVar9;
  *(char *)piVar23 = (char)*piVar23 + cVar9;
  pcVar3 = (code *)swi(1);
  uVar58 = (*pcVar3)();
  pbVar40 = (byte *)((ulonglong)uVar58 >> 0x20);
  pbVar12 = (byte *)uVar58;
  bVar7 = *pbVar12;
  bVar8 = (byte)uVar58;
  *pbVar12 = *pbVar12 + bVar8;
  *pbVar40 = *pbVar40 + bVar8 + CARRY1(bVar7,bVar8);
  *pbVar12 = *pbVar12 + bVar8;
  uVar52 = (ushort)unaff_retaddr;
  *pbVar12 = *pbVar12 + bVar8;
  *pbVar12 = *pbVar12 + bVar8;
  *pbVar12 = *pbVar12 + bVar8;
  *pbVar12 = *pbVar12 + bVar8;
  *pbVar12 = *pbVar12 + bVar8;
  *pbVar12 = *pbVar12 + bVar8;
  *pbVar12 = *pbVar12 + bVar8;
  cVar9 = (char)((ulonglong)uVar58 >> 0x28);
  *pbVar12 = *pbVar12 + cVar9;
  bVar7 = *pbVar12;
  uVar26 = (undefined3)((ulonglong)uVar58 >> 8);
  pcVar14 = (char *)CONCAT31(uVar26,bVar8 + bVar7);
  *pcVar14 = *pcVar14 + cVar9;
  cVar9 = bVar8 + bVar7 + *pcVar14;
  pcVar14 = (char *)CONCAT31(uVar26,cVar9);
  cVar43 = (char)((ulonglong)uVar58 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar43;
  *pcVar14 = *pcVar14 + cVar9;
  *pcVar14 = *pcVar14 + cVar43;
  *pcVar14 = *pcVar14 + cVar9;
  *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
  cVar45 = cVar45 + unaff_EBP[(int)pcVar14 * 4];
  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,uVar28));
  unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14] + cVar9;
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar9;
  *pbVar40 = *pbVar40 + (char)extraout_ECX;
  bVar8 = cVar9 - *pcVar14;
  pcVar14 = (char *)CONCAT31(uVar26,bVar8);
  *unaff_EBX = *unaff_EBX + cVar43;
  *pbVar40 = *pbVar40 ^ bVar8;
  *pbVar40 = *pbVar40 + cVar45;
  *pcVar14 = *pcVar14 + bVar8;
  cRam12110000 = cRam12110000 + bVar8;
  bVar7 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar8;
  pbVar12 = extraout_ECX;
  if (SCARRY1(bVar7,bVar8) != (char)*pbVar40 < '\0') {
code_r0x004025bd:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12');
    *pcVar14 = *pcVar14 + (char)((uint)pbVar12 >> 8);
    pcVar14 = pcVar14 + -1;
    cVar9 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar9;
    bVar7 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x7b];
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar7,(char)unaff_EBX));
    *pcVar14 = *pcVar14 + cVar9;
    cRam0000847d = cRam0000847d + (char)pbVar40;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + '$');
    unaff_EBX[-0x7b] = unaff_EBX[-0x7b] + bVar7;
    pbVar24 = pbVar12;
code_r0x004025d8:
    bVar7 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
    bVar54 = 0xf4 < bVar7;
    pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 + 0xb);
    pbVar16 = unaff_EBP;
    do {
      bVar7 = (byte)pcVar14 + *pbVar24;
      uVar26 = (undefined3)((uint)pcVar14 >> 8);
      cVar9 = bVar7 + bVar54;
      cVar9 = cVar9 + *(char *)CONCAT31(uVar26,cVar9) +
              (CARRY1((byte)pcVar14,*pbVar24) || CARRY1(bVar7,bVar54));
      pcVar14 = (char *)CONCAT31(uVar26,cVar9);
      *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar9;
      *pcVar14 = *pcVar14 + cVar9;
      iVar15 = *(int *)pbVar40;
      pbVar16[(int)pcVar14 * 4] = pbVar16[(int)pcVar14 * 4] + (char)((uint)unaff_EBX >> 8);
      pcVar14[(int)pbVar16] = pcVar14[(int)pbVar16] + cVar9;
      pbVar39 = pbVar40 + (-1 - iVar15);
      *pcVar14 = *pcVar14 + cVar9;
      uVar34 = (undefined2)((uint)unaff_retaddr >> 0x10);
      unaff_retaddr = (byte *)CONCAT22(uVar34,uVar53);
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar24 >> 8) | *pbVar39) + unaff_EDI[0x22],
                                          (char)pbVar24));
      *pcVar14 = *pcVar14 + cVar9;
      bVar36 = (char)pbVar39 - pbVar40[1 - iVar15];
      bVar10 = cVar9 - 0xf;
      pbVar24 = (byte *)CONCAT31(uVar26,bVar10);
      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar39 >> 0x10),
                                 CONCAT11((char)((uint)pbVar39 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar39 >> 8),bVar36) +
                                                   -0x3f),bVar36));
      bVar8 = *pbVar24;
      bVar7 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar10;
      uVar49 = uVar53;
      if (SCARRY1(bVar7,bVar10)) {
        pbVar24 = (byte *)CONCAT31(uVar26,bVar10 + pbVar24[(int)pbVar16] + CARRY1(bVar8,bVar10));
        goto code_r0x00402677;
      }
      unaff_EBX = unaff_EBX + -1;
      *pbVar24 = *pbVar24 + bVar10;
      uVar13 = *unaff_ESI;
      *pbVar12 = *pbVar12 + 1;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),
                                 (bVar36 | (byte)uVar13) - (byte)*unaff_ESI);
      unaff_ESI = (uint *)((int)unaff_ESI +
                          (-(uint)(bVar10 < *pbVar24) - *(int *)CONCAT31(uVar26,bVar10 - *pbVar24)))
      ;
      unaff_EBP = (byte *)CONCAT31(uVar26,bVar10 - *pbVar24);
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      bVar8 = (byte)pbVar16;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar8;
      *(byte **)unaff_EDI = pbVar40 + (uint)CARRY1(bVar7,bVar8) + *(int *)unaff_EDI;
      uVar26 = (undefined3)((uint)pbVar16 >> 8);
      bVar8 = bVar8 | *pbVar40;
      pcVar14 = (char *)CONCAT31(uVar26,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        *pcVar14 = *pcVar14 + bVar8;
        uVar58 = CONCAT44(pbVar40,pcVar14 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar14 = *pcVar14 + bVar8;
      bVar7 = bVar8 + 0xd;
      pbVar24 = (byte *)CONCAT31(uVar26,bVar7);
      *unaff_ESI = *unaff_ESI | (uint)pbVar40;
      if (-1 < (int)*unaff_ESI) {
code_r0x00402678:
        *pbVar24 = *pbVar24 + (char)pbVar24;
        pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d160243,(char)pbVar12)
                                  );
        pbVar16 = unaff_EDI;
code_r0x00402680:
        bVar7 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar7;
        uVar26 = (undefined3)((uint)pbVar12 >> 8);
        piVar23 = (int *)((int)pbVar16 * 2 + 0x400009a);
        *piVar23 = *piVar23 + CONCAT31(uVar26,bVar7 + 2) + (uint)(0xfd < bVar7);
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)((int)pbVar40 * 5),(char)unaff_EBX));
        *(char *)((int)pbVar40 * 2) = *(char *)((int)pbVar40 * 2) + bVar7 + 2;
        unaff_EDI = (byte *)CONCAT31(uVar26,bVar7 + 4);
        *pbVar16 = *pbVar16 - (bVar7 + 4);
code_r0x00402697:
        *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
        pbVar40 = pbVar40 + -*unaff_ESI;
        pbVar12 = unaff_EDI;
code_r0x0040269b:
        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                     (byte)unaff_EBX | (byte)((uint)pbVar24 >> 8));
        uVar30 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar12 = uVar30;
        cVar9 = (char)pbVar12;
        *pbVar40 = *pbVar40 + cVar9;
        if ((POPCOUNT(*pbVar40) & 1U) == 0) {
          *pbVar12 = *pbVar12 + cVar9;
          pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9 + '\x13');
          pbVar12 = pbVar24;
          unaff_EDI = pbVar16;
code_r0x004026a8:
          uVar26 = (undefined3)((uint)pcVar14 >> 8);
          bVar8 = (byte)pcVar14 + 2 + cRam001b15fe + (0xfd < (byte)pcVar14);
          bVar7 = *unaff_EBX;
          bVar10 = (byte)unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar10;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar26,bVar8) + (uint)CARRY1(bVar7,bVar10);
          iVar15 = CONCAT31(uVar26,bVar8 + 2) + 0x917d + (uint)(0xfd < bVar8);
          cVar9 = (char)iVar15;
          uVar26 = (undefined3)((uint)iVar15 >> 8);
          bVar7 = cVar9 + 0x3a;
          pbVar39 = (byte *)CONCAT31(uVar26,bVar7);
          *pbVar39 = *pbVar39 + bVar7;
          uVar42 = (undefined3)((uint)pbVar40 >> 8);
          bVar8 = (byte)pbVar40 | *pbVar40;
          uVar18 = CONCAT31(uVar26,cVar9 + '8');
          uVar13 = uVar18 + 0x1b00001b;
          pcVar14 = (char *)(uVar13 + (1 < bVar7) + *unaff_ESI +
                            (uint)(0xe4ffffe4 < uVar18 || CARRY4(uVar13,(uint)(1 < bVar7))));
          bVar7 = bVar8 + *pbVar12;
          pbVar40 = (byte *)CONCAT31(uVar42,bVar7);
          uVar26 = (undefined3)((uint)pcVar14 >> 8);
          cVar9 = (char)pcVar14;
          if (SCARRY1(bVar8,*pbVar12) != (char)bVar7 < '\0') {
            *pcVar14 = *pcVar14 + cVar9;
            pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '\x02');
            uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
            cVar45 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x68];
            unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar45,bVar10));
            *pcVar14 = *pcVar14 + cVar9 + '\x02';
            bVar8 = cVar9 + 0x2a;
            pbVar24 = (byte *)CONCAT31(uVar26,bVar8);
            *pbVar24 = *pbVar24 | bVar8;
            bVar7 = *unaff_EBX;
            cVar43 = (char)((uint)pbVar12 >> 8);
            *unaff_EBX = *unaff_EBX + cVar43;
            pbVar16 = unaff_EDI;
            if (SCARRY1(bVar7,cVar43) != (char)*unaff_EBX < '\0') {
              *pbVar24 = *pbVar24 + bVar8;
              bVar7 = cVar9 + 0x2c;
              if ((POPCOUNT(bVar7) & 1U) == 0) {
                *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                bVar8 = cVar9 + 0x59;
                pcVar14 = (char *)CONCAT31(uVar26,bVar8);
                *(char **)pbVar40 = pcVar14 + (uint)(0xd2 < bVar7) + *(int *)pbVar40;
                unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar45 + unaff_EBX[-0x67],bVar10));
                *pcVar14 = *pcVar14 + bVar8;
                pbVar16 = (byte *)((CONCAT31(uVar26,cVar9 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar8));
                pbVar24 = pbVar12;
                uStack_4 = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar9 = (char)unaff_EDI + '\x02';
                pbVar12 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar9);
                bVar54 = (POPCOUNT(cVar9) & 1U) == 0;
                unaff_EDI = pbVar39;
code_r0x00402704:
                if (bVar54) {
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  cVar9 = (char)pbVar12 + '\x02';
                  pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
                  puVar29 = unaff_ESI;
                  if ((POPCOUNT(cVar9) & 1U) == 0) {
code_r0x0040270c:
                    uVar51 = in_ES;
                    cVar9 = (char)pcVar14;
                    *pcVar14 = *pcVar14 + cVar9;
                    uVar26 = (undefined3)((uint)pcVar14 >> 8);
                    bVar7 = cVar9 + 0x6f;
                    piVar23 = (int *)CONCAT31(uVar26,bVar7);
                    iVar15 = *piVar23;
                    *(byte *)piVar23 = (char)*piVar23 + bVar7;
                    in_ES = uVar51;
                    pbVar12 = pbVar40;
                    if ((char)*piVar23 != '\0' &&
                        SCARRY1((char)iVar15,bVar7) == (char)*piVar23 < '\0') {
                      *(byte *)piVar23 = (char)*piVar23 + bVar7;
                      bVar8 = cVar9 + 0x9c;
                      piVar23 = (int *)CONCAT31(uVar26,bVar8);
                      puVar38 = puVar29 + (int)pbVar16 * 2;
                      uVar13 = *puVar38;
                      uVar18 = *puVar38;
                      *puVar38 = (uint)(pbVar40 + uVar18 + (0xd2 < bVar7));
                      *piVar23 = (*piVar23 - (int)piVar23) -
                                 (uint)(CARRY4(uVar13,(uint)pbVar40) ||
                                       CARRY4((uint)(pbVar40 + uVar18),(uint)(0xd2 < bVar7)));
                      uVar13 = *puVar29;
                      *(byte *)puVar29 = (byte)*puVar29 + bVar8;
                      pbVar12 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar51);
                      if (!CARRY1((byte)uVar13,bVar8)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    unaff_EDI = pbVar12;
                    uVar49 = uStack_4;
                    *(byte *)piVar23 = (char)*piVar23 + (byte)piVar23;
                    uVar26 = (undefined3)((uint)piVar23 >> 8);
                    bVar7 = (byte)piVar23 | *(byte *)((int)piVar23 + 0x400000d);
                    pcVar14 = (char *)CONCAT31(uVar26,bVar7);
                    if ((char)bVar7 < '\x01') {
                      bVar54 = pcVar14 < (char *)0x6fe1411;
                      pcVar14 = pcVar14 + -0x6fe1411;
                    }
                    else {
                      *pcVar14 = *pcVar14 + bVar7;
                      bVar10 = bVar7 + 0x28;
                      puVar38 = (uint *)CONCAT31(uVar26,bVar10);
                      *puVar38 = *puVar38 | (uint)puVar38;
                      bVar8 = *unaff_EBX;
                      cVar9 = (char)((uint)pbVar24 >> 8);
                      *unaff_EBX = *unaff_EBX + cVar9;
                      if (*unaff_EBX == 0 || SCARRY1(bVar8,cVar9) != (char)*unaff_EBX < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar38 = (char)*puVar38 + bVar10;
                      pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x55);
                      puVar38 = puVar29 + (int)pbVar16 * 2;
                      bVar54 = CARRY4(*puVar38,(uint)pbVar40) ||
                               CARRY4((uint)(pbVar40 + *puVar38),(uint)(0xd2 < bVar10));
                      *puVar38 = (uint)(pbVar40 + *puVar38 + (0xd2 < bVar10));
                      in_stack_fffffff4 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar26 = (undefined3)((uint)pcVar14 >> 8);
                      bVar7 = ((char)pcVar14 - *pcVar14) - bVar54;
                      puVar38 = (uint *)CONCAT31(uVar26,bVar7);
                      uVar13 = *puVar29;
                      *(byte *)puVar29 = (byte)*puVar29 + bVar7;
                      if (CARRY1((byte)uVar13,bVar7)) break;
                      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                   (byte)unaff_EBX | (byte)((uint)pbVar40 >> 8));
                      pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 2);
                      while( true ) {
                        uVar49 = (ushort)unaff_EDI;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar9 = (char)pcVar14;
                        *pcVar14 = *pcVar14 + cVar9;
                        uVar26 = (undefined3)((uint)pcVar14 >> 8);
                        bVar7 = cVar9 + 2;
                        pcVar14 = (char *)CONCAT31(uVar26,bVar7);
                        if (SCARRY1(cVar9,'\x02') != (char)bVar7 < '\0') break;
                        *pcVar14 = *pcVar14 + bVar7;
                        cVar45 = (char)pbVar40;
                        *pbVar16 = *pbVar16 - cVar45;
                        *pbVar40 = *pbVar40 + (char)pbVar24;
                        bVar8 = (cVar9 + '\t') - *(char *)CONCAT31(uVar26,cVar9 + '\t');
                        pbVar12 = (byte *)CONCAT31(uVar26,bVar8);
                        bVar7 = *pbVar12;
                        *pbVar12 = *pbVar12 + bVar8;
                        pbVar39 = pbVar24 + 1;
                        cVar9 = bVar8 - CARRY1(bVar7,bVar8);
                        pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        cVar43 = (char)((uint)pbVar39 >> 8);
                        pbVar24[2] = pbVar24[2] + cVar43;
                        *pcVar14 = *pcVar14 + cVar9;
                        pcVar14 = (char *)(*(int *)pbVar39 * 0x170000);
                        *pcVar14 = *pcVar14;
                        *pcVar14 = *pcVar14;
                        *pbVar39 = *pbVar39;
                        uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
                        cVar9 = (char)unaff_EBX;
                        bVar10 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)pbVar40 * 5);
                        unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(bVar10,cVar9));
                        unaff_EBX[(int)pcVar14] = unaff_EBX[(int)pcVar14];
                        *pcVar14 = *pcVar14 - cVar9;
                        *pbVar40 = *pbVar40 + (char)pbVar39;
                        uVar26 = (undefined3)((uint)pcVar14 >> 8);
                        bVar8 = -*pcVar14;
                        pbVar12 = (byte *)CONCAT31(uVar26,bVar8);
                        *unaff_EBX = *unaff_EBX + cVar45;
                        *pbVar40 = *pbVar40 ^ bVar8;
                        *pbVar40 = *pbVar40 + bVar8;
                        *pbVar12 = *pbVar12 + bVar8;
                        bVar7 = *pbVar12;
                        *pbVar12 = *pbVar12 + bVar8;
                        *(byte **)pbVar40 = pbVar40 + (uint)CARRY1(bVar7,bVar8) + *(int *)pbVar40;
                        bVar7 = *pbVar40;
                        *pbVar40 = *pbVar40 + bVar8;
                        if (SCARRY1(bVar7,bVar8) == (char)*pbVar40 < '\0') {
                          pcVar14 = (char *)((uint)pbVar12 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar14 = *pcVar14 + (char)pcVar14;
                          uVar52 = uVar53;
                          uStack_4 = (ushort)param_3;
                        }
                        else {
                          *pbVar12 = *pbVar12 + bVar8;
                          cVar11 = bVar8 + 0x12;
                          pcVar14 = (char *)CONCAT31(uVar26,cVar11);
                          bVar7 = *unaff_EBX;
                          *unaff_EBX = *unaff_EBX + cVar11;
                          uStack_4 = uVar49;
                          if (SCARRY1(bVar7,cVar11) != (char)*unaff_EBX < '\0') {
                            *pcVar14 = *pcVar14 + cVar11;
                            cVar11 = bVar8 + 0x24;
                            pcVar14 = (char *)CONCAT31(uVar26,cVar11);
                            *pcVar14 = *pcVar14 + cVar43;
                            *pcVar14 = *pcVar14 + cVar11;
                            bVar10 = bVar10 | unaff_EBP[-0x6e];
                            pcVar17 = (char *)CONCAT22(uVar35,CONCAT11(bVar10,cVar9));
                            *pcVar14 = *pcVar14 + cVar11;
                            cRam0000917d = cRam0000917d + cVar45;
                            bVar36 = bVar8 + 0x48;
                            pcVar17[-0x6e] = pcVar17[-0x6e] + bVar10;
                            *(char *)CONCAT31(uVar26,bVar36) =
                                 *(char *)CONCAT31(uVar26,bVar36) + bVar36;
                            bVar7 = bVar8 + 0x53 + *unaff_retaddr;
                            cVar9 = bVar7 + (0xf4 < bVar36);
                            cVar9 = cVar9 + *(char *)CONCAT31(uVar26,cVar9) +
                                    (CARRY1(bVar8 + 0x53,*unaff_retaddr) ||
                                    CARRY1(bVar7,0xf4 < bVar36));
                            pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                            *pcVar17 = *pcVar17 - (char)uVar53;
                            *pcVar14 = *pcVar14 + cVar9;
                            pbVar40 = pbVar40 + -*(int *)pbVar40;
                            *(char *)((int)pbVar40 * 5) = *(char *)((int)pbVar40 * 5) + bVar10;
                            pcVar14[(int)unaff_EBP] = pcVar14[(int)unaff_EBP] + cVar9;
                            *pcVar14 = *pcVar14 + cVar9;
                            bVar8 = (byte)(uVar53 >> 8) | *pbVar40;
                            uVar28 = (undefined1)param_3;
                            cVar43 = (char)((uint)param_3 >> 8) + *(char *)(param_3 + 0xf);
                            *pcVar14 = *pcVar14 + cVar9;
                            bVar7 = cVar9 + 0x2aU & *pbVar40;
                            iVar15 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar26,bVar7) =
                                 *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
                            cVar43 = cVar43 + *(char *)(CONCAT22(param_3._2_2_,
                                                                 CONCAT11(cVar43,uVar28)) + 0x10);
                            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar40;
                            iVar1 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar26,bVar7) =
                                 *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
                            puVar44 = (uint *)CONCAT22(param_3._2_2_,
                                                       CONCAT11(cVar43 + *(char *)(CONCAT22(param_3.
                                                  _2_2_,CONCAT11(cVar43,uVar28)) + 0x11),uVar28));
                            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar40;
                            puVar47 = (uint *)(pbVar16 + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar15
                                              );
                            *(char *)CONCAT31(uVar26,bVar7) =
                                 *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                            pbVar12 = (byte *)CONCAT31(uVar26,bVar7 + 0x2a);
                            puVar38 = (uint *)CONCAT22(uVar34,CONCAT11(bVar8 + *pbVar12,(char)uVar53
                                                                      ));
                            uVar58 = CONCAT44(pbVar40,pbVar12 + (uint)CARRY1(bVar8,*pbVar12) +
                                                                *(int *)pbVar12);
                            uVar53 = uVar49;
                            goto code_r0x00402866;
                          }
                        }
                        cVar43 = (char)pcVar14;
                        uVar26 = (undefined3)((uint)pcVar14 >> 8);
                        cVar9 = cVar43 + '\x02';
                        piVar23 = (int *)CONCAT31(uVar26,cVar9);
                        pbVar24 = pbVar39;
                        in_ES = uVar49;
                        pbVar12 = pbVar40;
                        if (SCARRY1(cVar43,'\x02') != cVar9 < '\0') goto code_r0x00402724;
                        *(char *)piVar23 = (char)*piVar23 + cVar9;
                        pcVar14 = (char *)CONCAT31(uVar26,cVar43 + '\n');
                        *(byte *)puVar29 = (byte)*puVar29 - cVar45;
                        *pbVar40 = *pbVar40 + (char)pbVar39;
                      }
                      pbVar12 = unaff_EBP + 0x6fe1411;
                      bVar54 = CARRY1(*pbVar12,bVar7);
                      *pbVar12 = *pbVar12 + bVar7;
                    }
                    goto code_r0x00402746;
                  }
                  unaff_EBX[(int)pbVar40] = unaff_EBX[(int)pbVar40] + cVar9;
                  pbVar12 = pbVar24;
                  unaff_EDI = pbVar16;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar51 = 0x927c;
              in_stack_ffffffec = 0x40268f;
              uVar58 = func_0x02040000(in_CS,in_stack_fffffff4,pbVar39);
              pbVar40 = (byte *)((ulonglong)uVar58 >> 0x20);
              *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
              pbVar24 = (byte *)CONCAT31((int3)((ulonglong)uVar58 >> 8),(char)uVar58 + '\x12');
              pbVar12 = extraout_ECX_00;
              in_CS = uVar51;
            }
            goto code_r0x00402680;
          }
          pbVar16 = unaff_EBP + -1;
          *pcVar14 = *pcVar14 + cVar9;
          pbVar40 = (byte *)CONCAT31(uVar42,bVar7 | *unaff_EBX);
          pbVar24 = (byte *)CONCAT31(uVar26,cVar9 + ':');
code_r0x00402677:
          unaff_ESI = (uint *)((int)unaff_ESI + -1);
          unaff_EBP = pbVar16;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar24 = *pbVar24 + bVar7;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x6b],
                                            (char)unaff_EBX));
      *pbVar24 = *pbVar24 + bVar7;
      cVar9 = bVar8 + 0xf;
      pcVar14 = (char *)CONCAT31(uVar26,cVar9);
      param_3 = CONCAT22(param_3._2_2_,uVar52);
      if (SCARRY1(bVar7,'\x02') == cVar9 < '\0') {
        pcVar14 = pcVar14 + (0xfd < bVar7) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar14 = *pcVar14 + cVar9;
      cVar43 = bVar8 + 0x11;
      pbVar16 = (byte *)CONCAT31(uVar26,cVar43);
      uVar58 = CONCAT44(pbVar40,pbVar16);
      param_3 = CONCAT22(param_3._2_2_,uVar52);
      pbVar24 = pbVar12;
      pbVar12 = unaff_EDI;
      if (SCARRY1(cVar9,'\x02') == cVar43 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar16 = *pbVar16 + (char)pbVar16;
      bVar7 = (char)pbVar16 + 2;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar14 = *pcVar14 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar16 = unaff_EBX + (int)pbVar24;
      bVar54 = CARRY1(*pbVar16,bVar7);
      *pbVar16 = *pbVar16 + bVar7;
      pbVar16 = unaff_EBP;
      unaff_EDI = pbVar12;
      uVar53 = uVar49;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar38 = (char)*puVar38 + (byte)puVar38;
  uVar26 = (undefined3)((uint)puVar38 >> 8);
  bVar7 = (byte)puVar38 | *(byte *)((int)puVar38 + 0x400000e);
  pcVar14 = (char *)CONCAT31(uVar26,bVar7);
  unaff_ESI = puVar29;
  if ('\0' < (char)bVar7) {
    *pcVar14 = *pcVar14 + bVar7;
    bVar7 = bVar7 + 0x28 | *(byte *)CONCAT31(uVar26,bVar7 + 0x28);
    *unaff_EBX = *unaff_EBX + (char)((uint)pbVar24 >> 8);
    unaff_ESI = puVar29 + 1;
    out(*puVar29,(short)pbVar40);
    *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
    pcVar14 = (char *)(uint)(bVar7 | *pbVar40);
    in_stack_fffffff4 = unaff_EBP;
  }
  bVar7 = (byte)pcVar14 & 0x7b;
  bVar54 = (char)(bVar7 + 0x17) < '\0';
  uStack_4 = uVar51;
  if (SCARRY1(bVar7,'\x17') == bVar54) {
    pbVar39 = unaff_EDI;
    if (SCARRY1(bVar7,'\x17') != bVar54) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar43 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar43;
  iVar27 = (int3)((uint)unaff_EDI >> 8);
  cVar9 = cVar43 + '\x02';
  pbVar12 = (byte *)CONCAT31(iVar27,cVar9);
  bVar54 = (POPCOUNT(cVar9) & 1U) == 0;
  if (!bVar54) goto code_r0x00402704;
  *pbVar12 = *pbVar12 + cVar9;
  cVar43 = cVar43 + '\x04';
  pcVar14 = (char *)CONCAT31(iVar27,cVar43);
  if ((POPCOUNT(cVar43) & 1U) == 0) {
    *pcVar14 = *pcVar14 + cVar43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar40 = (byte *)((int)iVar27 >> 0x17);
  puVar29 = unaff_ESI;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    cVar9 = (char)puVar44 - (byte)*puVar29;
    iVar15 = CONCAT22((short)((uint)puVar44 >> 0x10),
                      CONCAT11((char)((uint)puVar44 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),cVar9) + 0x12),cVar9));
    *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
    uVar26 = (undefined3)((ulonglong)uVar58 >> 8);
    bVar7 = (char)uVar58 + 0x2aU & (byte)*puVar41;
    pcVar14 = (char *)CONCAT31(uVar26,bVar7);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x12));
    *pcVar14 = *pcVar14 + bVar7;
    puVar20 = (uint *)CONCAT31(uVar26,bVar7 + 0x2a);
    pbVar12 = (byte *)(uint)uVar53;
get_Value:
    cVar9 = *(char *)(iVar15 + 0x13);
    *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
    uVar26 = (undefined3)((uint)puVar20 >> 8);
    bVar7 = (char)puVar20 + 0x2aU & (byte)*puVar41;
    pcVar14 = (char *)CONCAT31(uVar26,bVar7);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x13));
    *pcVar14 = *pcVar14 + bVar7;
    pbVar40 = (byte *)CONCAT31(uVar26,bVar7 + 0x2a);
    uVar13 = (uint)uVar53;
    bVar7 = (byte)((uint)puVar38 >> 8);
    bVar8 = bVar7 + *pbVar40;
    pbVar40 = pbVar40 + (uint)CARRY1(bVar7,*pbVar40) + *(int *)pbVar40;
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    puVar44 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar15 >> 0x10),
                                               CONCAT11((char)((uint)iVar15 >> 8) + cVar9,
                                                        (char)iVar15)) >> 8),
                               (char)iVar15 - (byte)*puVar29);
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11(bVar8 + *pbVar40,(char)puVar38));
    pbVar40 = pbVar40 + (uint)CARRY1(bVar8,*pbVar40) + *(int *)pbVar40;
code_r0x00402898:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    bVar7 = (byte)puVar41;
    uVar34 = CONCAT11((char)((uint)puVar41 >> 8) - (byte)*puVar29,bVar7);
    pbVar24 = (byte *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar34);
    pcVar14 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[-0x19],
                                        (char)puVar44));
    *pbVar40 = *pbVar40 + (char)pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + '\x03');
    puVar44 = puVar29;
    do {
      puVar29 = puVar44 + 1;
      out(*puVar44,uVar34);
      pcVar14 = pcVar14 + -1;
      bVar8 = (byte)pbVar40;
      *pbVar40 = *pbVar40 + bVar8;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((byte)((uint)puVar38 >> 8) | *pbVar24,(char)puVar38));
      *pbVar40 = *pbVar40 + bVar8;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte *)((int)pbVar40 * 2) = *(byte *)((int)pbVar40 * 2) ^ bVar8;
      *pbVar40 = *pbVar40 + bVar8;
      *pbVar40 = *pbVar40 | bVar8;
      bVar54 = CARRY1((byte)*puVar38,bVar7);
      *(byte *)puVar38 = (byte)*puVar38 + bVar7;
      cVar9 = bVar8 + 10 + bVar54;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar9);
      puVar44 = puVar29;
    } while (bVar8 < 0xf6 && !CARRY1(bVar8 + 10,bVar54));
    *pbVar40 = *pbVar40 + cVar9;
    in_stack_ffffffec = CONCAT22((short)((uint)in_stack_ffffffec >> 0x10),uVar49);
    pcVar17 = (char *)((uint)pbVar40 | *puVar47);
    puVar44 = (uint *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                               CONCAT11((char)((uint)pcVar14 >> 8) + unaff_EBP[-100],(char)pcVar14))
    ;
    *pcVar17 = *pcVar17 + (char)pcVar17;
    bVar7 = (char)pcVar17 + 7;
    uVar58 = CONCAT44(pbVar24,CONCAT31((int3)((uint)pcVar17 >> 8),bVar7));
code_r0x004028c8:
    puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
  puVar20 = (uint *)CONCAT31((int3)((ulonglong)uVar58 >> 8),(char)uVar58 + '-');
  puVar29 = (uint *)((uint)puVar29 | *(uint *)((int)puVar41 + 0x3b));
  bVar54 = CARRY4(*puVar20,(uint)puVar20);
  uVar18 = *puVar20;
  *puVar20 = (uint)(*puVar20 + (int)puVar20);
  if (SCARRY4(uVar18,(int)puVar20)) {
    bVar54 = CARRY4(*puVar20,(uint)puVar20);
    bVar55 = SCARRY4(*puVar20,(int)puVar20);
    *puVar20 = (uint)(*puVar20 + (int)puVar20);
    bVar7 = POPCOUNT(*puVar20 & 0xff);
    if (bVar55) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 + bVar54);
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    bVar54 = (POPCOUNT((byte)*puVar41) & 1U) == 0;
    if (bVar54) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar54) {
      iVar15 = CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 - (byte)*puVar29);
      goto get_Value;
    }
    *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 + 'r');
    pbVar12 = unaff_EBP;
code_r0x004028e2:
    uVar34 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
    uVar18 = *puVar20;
    *puVar20 = (uint)(*puVar20 + (int)puVar20);
    if (SCARRY4(uVar18,(int)puVar20)) {
      if (*puVar20 == 0 || SCARRY4(uVar18,(int)puVar20) != (int)*puVar20 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar9 = (char)puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + cVar9;
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((byte)((uint)puVar38 >> 8) |
                                        *(byte *)((int)puVar38 + 0x16d7207),(char)puVar38));
    pbVar40 = (byte *)((int)puVar20 + 0x7d);
    bVar7 = *pbVar40;
    bVar10 = (byte)((uint)puVar41 >> 8);
    bVar8 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar10;
    uVar13 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar8,bVar10) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar40 < '\0') * 0x80 | (uint)(*pbVar40 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar40) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar7,bVar10);
    *(byte *)puVar20 = (byte)*puVar20 + cVar9;
    pbVar40 = (byte *)(CONCAT31((int3)((uint)puVar20 >> 8),cVar9 + '+') ^ *puVar47);
    if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    puVar20 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar20 + 0x6f) = *(byte *)((int)puVar20 + 0x6f) + bVar10;
    }
code_r0x00402905:
    uVar58 = CONCAT44(puVar41,puVar20);
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar9 = (char)puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + cVar9;
    bVar7 = (byte)((uint)puVar38 >> 8) | (byte)*puVar38;
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar7,(char)puVar38));
    uVar49 = (ushort)uVar13;
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar20 = (byte)*puVar20 + cVar9;
      puVar47 = (uint *)((int)puVar47 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar20 = (byte)*puVar20 + cVar9;
    uVar13 = 0x40291c;
    uVar58 = func_0x7346291c();
    *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
    puVar38 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar58 >> 0x20));
    puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar49);
    uStackY_2c = puVar44;
    while( true ) {
      pcVar14 = (char *)((int)uVar58 * 2);
      *pcVar14 = *pcVar14 - (char)puVar38;
      uVar18 = *puVar44;
      cVar9 = (char)((uint)puVar38 >> 8);
      *(byte *)puVar44 = (byte)*puVar44 + cVar9;
      if (SCARRY1((byte)uVar18,cVar9) == (char)(byte)*puVar44 < '\0') {
        pbVar40 = (byte *)((int)puVar47 + (int)uVar58);
        *pbVar40 = *pbVar40 + (char)uVar58;
        bVar7 = *pbVar40;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
      cVar9 = (char)uVar58;
      *(char *)uVar58 = *(char *)uVar58 + cVar9;
      uVar26 = (undefined3)((ulonglong)uVar58 >> 8);
      bVar7 = cVar9 + 7;
      puVar20 = (uint *)CONCAT31(uVar26,bVar7);
      bVar8 = (byte)((ulonglong)uVar58 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar20 = (byte)*puVar20 + bVar7;
      pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '3');
      uVar34 = (undefined2)((uint)puVar44 >> 0x10);
      uVar28 = SUB41(puVar44,0);
      bVar7 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar29 + 0x16) + (0xd3 < bVar7);
      puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(bVar7,uVar28));
      *pcVar14 = *pcVar14 + cVar9 + '3';
      cVar43 = cVar9 + ':';
      puVar20 = (uint *)CONCAT31(uVar26,cVar43);
      if ((POPCOUNT(cVar43) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)puVar41 + 7);
        puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(bVar7,uVar28));
        bVar54 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar20 = (byte)*puVar20 + cVar43;
      puVar20 = (uint *)(CONCAT31(uVar26,cVar9 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar40 = (byte *)((int)puVar20 + 0x72);
      bVar55 = SCARRY1(*pbVar40,bVar8);
      *pbVar40 = *pbVar40 + bVar8;
      bVar7 = POPCOUNT(*pbVar40);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar20 + 0x72) = *(byte *)((int)puVar20 + 0x72) + (char)((uint)puVar41 >> 8)
        ;
      }
      else if (bVar55) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar9 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,uVar52);
code_r0x00402957:
      *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
      cVar9 = (char)puVar20 + '(';
      puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),cVar9);
      *(byte *)puVar20 = (byte)*puVar20 + cVar9;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar20,(char)puVar38)
                                );
      *(byte *)puVar20 = (byte)*puVar20 + cVar9;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)puVar44[0x18],
                                          (char)puVar41));
      puVar29 = puStackY_34;
      puVar47 = puStackY_30;
code_r0x00402966:
      *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
      bVar7 = (byte)((uint)puVar44 >> 8) | *(byte *)((int)puVar41 + 7);
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar7,(char)puVar44));
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
      puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 + '~');
code_r0x00402971:
      uVar13 = (uint)uVar52;
code_r0x00402972:
      uVar34 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
      *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar20;
      in_stack_ffffffec = CONCAT22(uVar34,in_CS);
      in_CS = 0x2d0a;
      uVar58 = func_0x00006128(in_stack_ffffffec);
      puVar38 = (uint *)uVar58;
      piVar23 = (int *)((int)((ulonglong)uVar58 >> 0x20) + -0x3d);
      *piVar23 = (int)((int)puVar29 + (uint)bVar7 + *piVar23);
      bVar54 = SCARRY4(*puVar38,(int)puVar38);
      *puVar38 = *puVar38 + (int)puVar38;
      uVar18 = *puVar38;
      puVar38 = extraout_ECX_02;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar18 & 0xff);
      if (bVar54) {
        *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11((byte)((uint)puVar38 >> 8) |
                                            *(byte *)((ulonglong)uVar58 >> 0x20),(char)puVar38));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar14 = (char *)((ulonglong)uVar58 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
        *pcVar14 = *pcVar14 + (char)puVar38;
        uVar58 = CONCAT44(CONCAT22((short)((ulonglong)uVar58 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar58 >> 0x28) - pcVar14[0x1f],
                                            (char)((ulonglong)uVar58 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar58 >> 8),(char)uVar58 + '('));
code_r0x00402991:
        puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
        pbVar40 = (byte *)uVar58;
        bVar7 = (byte)uVar58;
        bVar54 = CARRY1(bVar7,*pbVar40);
        puVar20 = (uint *)CONCAT31((int3)((ulonglong)uVar58 >> 8),bVar7 + *pbVar40);
        cVar9 = bVar7 + *pbVar40;
        if (SCARRY1(bVar7,*pbVar40)) goto code_r0x004029c4;
code_r0x00402995:
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11(((char)((uint)puVar41 >> 8) -
                                            *(byte *)((int)puVar41 + 0x6b)) - bVar54,(char)puVar41))
        ;
        bVar7 = (byte)puVar20;
        bVar54 = CARRY1(bVar7,(byte)*puVar20);
        bVar55 = SCARRY1(bVar7,(byte)*puVar20);
        puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7 + (byte)*puVar20);
        do {
          if (!bVar55) {
            puVar29 = (uint *)((int)puVar29 + (uint)bVar54 + *puVar20);
            pbVar40 = (byte *)((int)puVar20 + *puVar20);
            bVar8 = (byte)pbVar40;
            *pbVar40 = *pbVar40 + bVar8;
            *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
            bVar7 = *pbVar40;
            *pbVar40 = *pbVar40 + bVar8;
            *puVar47 = (uint)((int)puVar44 + (uint)CARRY1(bVar7,bVar8) + *puVar47);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar38;
            uVar26 = (undefined3)((uint)pbVar40 >> 8);
            bVar8 = bVar8 | (byte)*puVar29;
            puVar20 = (uint *)CONCAT31(uVar26,bVar8);
            uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar52);
            uVar18 = *puVar20;
            uVar2 = *puVar20;
            *puVar20 = (uint)(*puVar20 + (int)puVar20);
            if (SCARRY4(uVar2,(int)puVar20)) {
              *(byte *)puVar29 = (byte)*puVar29 - (char)puVar44;
              *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
              *(byte *)puVar47 = (byte)*puVar47 - (char)puVar44;
            }
            else {
              puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar49);
              uVar52 = uVar49;
              if (CARRY4(uVar18,(uint)puVar20)) goto code_r0x00402971;
              bVar54 = CARRY1(bVar8,(byte)*puVar20);
              bVar55 = SCARRY1(bVar8,(byte)*puVar20);
              puVar20 = (uint *)CONCAT31(uVar26,bVar8 + (byte)*puVar20);
code_r0x004029be:
              if (!bVar55) {
                puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar49);
                *(byte *)((int)puVar41 + -0x37) =
                     (*(byte *)((int)puVar41 + -0x37) - (char)((uint)puVar41 >> 8)) - bVar54;
                cVar9 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar9;
                bVar7 = (byte)puVar20;
                bVar54 = CARRY1(bVar7,(byte)*puVar20);
                bVar55 = SCARRY1(bVar7,(byte)*puVar20);
                puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7 + (byte)*puVar20);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)puVar38;
            bVar54 = CARRY1((byte)*puVar41,bVar7);
            bVar55 = SCARRY1((byte)*puVar41,bVar7);
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            if (bVar54) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar55) {
            uVar49 = (ushort)pbVar12;
            goto code_r0x00402966;
          }
          uVar13 = (uint)uVar49;
          *(uint *)((int)puVar41 + -0x23) =
               (*(int *)((int)puVar41 + -0x23) - (int)puVar29) - (uint)bVar54;
          uVar18 = *puVar20;
          bVar7 = (byte)puVar20;
          uVar2 = *puVar20;
          uVar26 = (undefined3)((uint)puVar20 >> 8);
          bVar8 = bVar7 + (byte)*puVar20;
          puVar20 = (uint *)CONCAT31(uVar26,bVar8);
          if (SCARRY1(bVar7,(byte)uVar2)) goto code_r0x00402972;
          in_stack_ffffffec = CONCAT22((short)((uint)in_stack_ffffffec >> 0x10),uVar49);
          cVar9 = (char)puVar41;
          bVar10 = ((char)((uint)puVar41 >> 8) - *(byte *)((int)puVar41 + -0xf)) -
                   CARRY1(bVar7,(byte)uVar18);
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar10,cVar9));
          puVar46 = (uint *)CONCAT31(uVar26,bVar8 + (byte)*puVar20);
          bVar7 = (byte)puVar38;
          if (SCARRY1(bVar8,(byte)*puVar20)) {
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            uVar58 = CONCAT44(puVar41,(int)puVar46 + -0x1c37211);
            pcVar14 = (char *)((int)puVar46 + -0x1c3720a);
            *pcVar14 = *pcVar14 + bVar10;
            bVar7 = POPCOUNT(*pcVar14);
            goto code_r0x00402984;
          }
          puVar29 = (uint *)((int)puVar29 +
                            (-(uint)CARRY1(bVar8,(byte)*puVar20) - *(int *)((int)puVar41 + 5)));
          bVar54 = SCARRY4((int)puVar46,*puVar46);
          uVar18 = (int)puVar46 + *puVar46;
          uVar58 = CONCAT44(puVar41,uVar18);
          if (bVar54) goto code_r0x00402982;
          bVar8 = (byte)uVar18 + 0x8e;
          uVar19 = CONCAT31((int3)(uVar18 >> 8),bVar8 - CARRY4((uint)puVar46,*puVar46));
          *puVar44 = (*puVar44 - uVar19) -
                     (uint)((byte)uVar18 < 0x72 || bVar8 < CARRY4((uint)puVar46,*puVar46));
          pbVar40 = (byte *)(uVar19 - 0x5e);
          bVar8 = *pbVar40;
          *pbVar40 = *pbVar40 + bVar10;
          uVar18 = (uint)CARRY1(bVar8,bVar10);
          uVar2 = uVar19 - 0x32d72;
          puVar20 = (uint *)(uVar2 - uVar18);
          if (SBORROW4(uVar19,0x32d72) != SBORROW4(uVar2,uVar18)) goto code_r0x00402992;
          uVar51 = uVar53;
          if (uVar19 < 0x32d72 || uVar2 < uVar18) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar20 >> 8);
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            puVar46 = puVar29 + 1;
            out(*puVar29,CONCAT11(bVar10,cVar9));
            *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
            goto code_r0x00402a3e;
          }
          bVar54 = CARRY4((uint)puVar20,*puVar20);
          bVar55 = SCARRY4((int)puVar20,*puVar20);
          puVar20 = (uint *)((int)puVar20 + *puVar20);
          if (!bVar55) {
            uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar49);
            *(byte *)puVar29 = (byte)*puVar29 + bVar54;
            bVar8 = (byte)puVar20;
            *(byte *)((int)puVar41 + (int)unaff_EBP) =
                 *(byte *)((int)puVar41 + (int)unaff_EBP) + bVar8;
            *(byte *)puVar44 = (byte)*puVar44 + cVar9;
            *(byte *)puVar44 = (byte)*puVar44 ^ bVar8;
            bVar32 = (byte)((uint)puVar38 >> 8);
            *(byte *)puVar29 = (byte)*puVar29 + bVar32;
            *(byte *)puVar20 = (byte)*puVar20 + bVar8;
            pbVar40 = (byte *)CONCAT31((int3)((uint)puVar20 >> 8),bVar8 | (byte)*puVar20);
            *(byte *)puVar38 = (byte)*puVar38 + cVar9;
            bVar36 = *pbVar40;
            uVar34 = (undefined2)((uint)puVar38 >> 0x10);
            puVar38 = (uint *)CONCAT22(uVar34,CONCAT11(bVar32 + bVar36,bVar7));
            pbVar40 = pbVar40 + (uint)CARRY1(bVar32,*pbVar40) + *(int *)pbVar40;
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar12 = pbVar40 + 0x73;
            bVar8 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar10;
            uVar26 = (undefined3)((uint)pbVar40 >> 8);
            bVar8 = (char)pbVar40 + CARRY1(bVar8,bVar10);
            pcVar14 = (char *)CONCAT31(uVar26,bVar8);
            *(byte *)puVar41 = (byte)*puVar41 + bVar7;
            if ((POPCOUNT((byte)*puVar41) & 1U) == 0) {
              uVar52 = uVar49;
            }
            puVar48 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x17));
            *pcVar14 = *pcVar14 + bVar8;
            cVar9 = bVar8 + 2;
            puVar20 = (uint *)CONCAT31(uVar26,cVar9);
            if (bVar8 < 0xfe) {
              *puVar20 = (uint)(*puVar20 + (int)puVar20);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar20 = (byte)*puVar20 + cVar9;
            uVar13 = *puVar41;
            puVar46 = (uint *)((int)puVar29 + puVar44[0x19]);
            *(byte *)puVar20 = (byte)*puVar20 + cVar9;
            puVar38 = (uint *)CONCAT22(uVar34,CONCAT11(bVar32 + bVar36 | (byte)*puVar20,
                                                       bVar7 | (byte)uVar13));
            puVar47 = puVar48;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar40 = (byte *)((int)puVar20 + 0x73);
    bVar54 = CARRY1(*pbVar40,bVar8);
    *pbVar40 = *pbVar40 + bVar8;
  } while( true );
code_r0x00402992:
  pbVar40 = (byte *)((int)puVar20 + 0x2a);
  bVar54 = CARRY1(*pbVar40,bVar10);
  *pbVar40 = *pbVar40 + bVar10;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar20) = *(byte *)(in_GS_OFFSET + (int)puVar20) + (char)puVar20;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | *(byte *)((int)puVar47 + 0x66),
                                      (char)puVar38));
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
code_r0x00402a3e:
  uVar26 = (undefined3)((uint)puVar20 >> 8);
  bVar7 = (byte)puVar20 | (byte)*puVar46;
  pcVar14 = (char *)CONCAT31(uVar26,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar14 = *pcVar14 + bVar7;
    cVar9 = bVar7 + 2;
    piVar23 = (int *)CONCAT31(uVar26,cVar9);
    if ((POPCOUNT(cVar9) & 1U) == 0) {
      *(char *)piVar23 = (char)*piVar23 + cVar9;
      bVar7 = bVar7 + 0x71;
      pcVar17 = (char *)CONCAT31(uVar26,bVar7);
      pcVar14 = (char *)segment(uVar51,(short)puVar44 + (short)puVar46);
      *pcVar14 = *pcVar14 + bVar7;
      uVar13 = puVar47[0x1a];
      *pcVar17 = *pcVar17 + bVar7;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((byte)((uint)puVar38 >> 8) | (byte)uVar13 |
                                          *(byte *)((int)puVar47 + 0x69),(char)puVar38));
      *pcVar17 = *pcVar17 + bVar7;
      bVar7 = bVar7 | (byte)*puVar41;
      pcVar14 = (char *)CONCAT31(uVar26,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar29 = puVar46 + (uint)bVar56 * -2 + 1;
    out(*puVar46,(short)puVar41);
  }
  else {
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[6],(char)puVar44)
                              );
code_r0x00402a5d:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    piVar23 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
    puVar29 = puVar46;
  }
code_r0x00402a61:
  pcVar14 = (char *)segment(uVar51,(short)puVar44 + (short)puVar29);
  *pcVar14 = *pcVar14 + (char)piVar23;
  cVar9 = (char)puVar38;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)puVar47[0x1a],cVar9));
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  uVar34 = CONCAT11((byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar41 + 0x65),(char)puVar41);
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar34);
  piVar21 = (int *)((int)piVar23 + *piVar23);
  puVar46 = puVar29;
  puVar48 = puVar47;
  uVar50 = uVar49;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402ae3;
  *(byte *)puVar41 = (byte)*puVar41 + cVar9;
  puVar46 = puVar29 + (uint)bVar56 * -2 + 1;
  out(*puVar29,uVar34);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar38 >> 8) | (byte)*puVar41;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar7,(char)puVar38));
  piVar23 = (int *)(uint)(byte)*puVar44;
  *(byte *)puVar46 = (byte)*puVar46 - bVar7;
  puVar48 = puVar47;
code_r0x00402a7f:
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  out(*puVar46,(short)puVar41);
  bVar7 = in((short)puVar41);
  *(byte *)puVar48 = bVar7;
  *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar41,(char)puVar38));
  iVar15 = *piVar23;
  cVar9 = in(1);
  puVar20 = (uint *)CONCAT31((int3)((uint)((int)piVar23 + *piVar23) >> 8),cVar9);
  *(char *)puVar20 = (char)*puVar20 + cVar9;
  puVar20 = (uint *)((uint)puVar20 | *puVar20);
  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar41;
  puVar46 = (uint *)((int)puVar46 + (((uint)bVar56 * -8 + 4) - iVar15));
  puVar48 = (uint *)((int)puVar48 + (uint)bVar56 * -2 + 1);
  uVar52 = uVar49;
  while( true ) {
    bVar7 = (byte)puVar20 | (byte)*puVar41;
    puVar20 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),bVar7);
    puVar47 = puVar48;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar20 = (byte)*puVar20 + bVar7;
code_r0x00402a9b:
    uVar26 = (undefined3)((uint)puVar20 >> 8);
    cVar9 = (char)puVar20 + '\r';
    piVar21 = (int *)CONCAT31(uVar26,cVar9);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar21;
    *(char *)piVar21 = (char)*piVar21 + cVar9;
    *(byte *)(puVar46 + -0xc800000) = (byte)puVar46[-0xc800000] + (char)puVar41;
    *(char *)piVar21 = (char)*piVar21 + cVar9;
    *(byte *)puVar41 = (byte)*puVar41 + cVar9;
    cVar43 = (char)puVar38;
    if ((POPCOUNT((byte)*puVar41) & 1U) != 0) {
      *(byte *)puVar41 = (byte)*puVar41 + cVar43;
      puVar29 = puVar46 + (uint)bVar56 * -2 + 1;
      out(*puVar46,(short)puVar41);
      piVar23 = (int *)((longlong)*piVar21 * 0x7b020a00);
      *(char *)piVar23 =
           (char)*piVar23 - ((longlong)(int)piVar23 != (longlong)*piVar21 * 0x7b020a00);
      pbVar12 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12;
      goto code_r0x00402a61;
    }
    *(char *)piVar21 = (char)*piVar21 + cVar9;
    puVar20 = (uint *)CONCAT31(uVar26,(char)puVar20 + ':');
    puVar29 = (uint *)((uint)puVar46 | *(uint *)((int)puVar41 + -0x79));
    iVar15 = (int)puVar20 + *puVar20;
    if (SCARRY4((int)puVar20,*puVar20)) {
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                 CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar29[(int)puVar44],
                                          (char)puVar44));
      *(char *)((int)puVar41 * 2) = *(char *)((int)puVar41 * 2) + (char)iVar15;
      puVar48 = puVar47;
      goto code_r0x00402b33;
    }
    uVar26 = (undefined3)((uint)iVar15 >> 8);
    cVar9 = (char)iVar15 + CARRY4((uint)puVar20,*puVar20);
    piVar23 = (int *)CONCAT31(uVar26,cVar9);
    *(byte *)puVar41 = (byte)*puVar41 + cVar43;
    bVar54 = (POPCOUNT((byte)*puVar41) & 1U) != 0;
    if ((bVar54) && (bVar54)) goto code_r0x00402a61;
    *(char *)piVar23 = (char)*piVar23 + cVar9;
    cVar45 = cVar9 + '(';
    pcVar14 = (char *)CONCAT31(uVar26,cVar45);
    puVar48 = puVar47 + (uint)bVar56 * -2 + 1;
    uVar13 = in((short)puVar41);
    *puVar47 = uVar13;
    *pcVar14 = *pcVar14 + cVar45;
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((byte)((uint)puVar38 >> 8) | bRama07b0222,cVar43));
    *pcVar14 = *pcVar14 + cVar45;
    pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '>');
code_r0x00402ad2:
    out(*puVar29,(short)puVar41);
    puVar46 = (uint *)((int)(puVar29 + (uint)bVar56 * -2 + 1) + (uint)bVar56 * -2 + 1);
    out((byte)puVar29[(uint)bVar56 * -2 + 1],(short)puVar41);
    bVar7 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar7;
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(byte)puVar44 | (byte)*puVar48);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar26 = (undefined3)((uint)pcVar14 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    puVar41 = (uint *)((uint)puVar41 ^ *puVar41);
    cVar9 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*puVar41;
    piVar23 = (int *)CONCAT31(uVar26,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar23 = (char)*piVar23 + cVar9;
    piVar21 = (int *)CONCAT31(uVar26,cVar9 + '\x17');
    uVar50 = uVar49;
code_r0x00402ae3:
    out(*puVar46,(short)puVar41);
    puVar29 = puVar46 + (uint)bVar56 * -2 + 1 + (uint)bVar56 * -2 + 1;
    out(puVar46[(uint)bVar56 * -2 + 1],(short)puVar41);
    *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
code_r0x00402ae7:
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((byte)((uint)puVar44 >> 8) | unaff_EBP[-0x60],(char)puVar44)
                              );
    cVar9 = (char)piVar21;
    *(char *)piVar21 = (char)*piVar21 + cVar9;
    uVar26 = (undefined3)((uint)piVar21 >> 8);
    bVar7 = cVar9 + 2;
    puVar20 = (uint *)CONCAT31(uVar26,bVar7);
    uVar49 = uVar50;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar20 = (byte)*puVar20 + bVar7;
      cVar9 = cVar9 + '}';
      puVar20 = (uint *)CONCAT31(uVar26,cVar9);
      *(byte *)puVar20 = ((byte)*puVar20 - cVar9) - (0x84 < bVar7);
      pbVar12 = (byte *)((int)puVar41 + (int)puVar20);
      *pbVar12 = *pbVar12 + cVar9;
      bVar7 = POPCOUNT(*pbVar12);
      puVar46 = puVar29;
code_r0x00402af9:
      uVar49 = uVar50;
      puVar47 = puVar48;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
        bVar7 = (byte)puVar38;
        *(byte *)puVar41 = (byte)*puVar41 + bVar7;
        uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar52);
        puVar29 = puVar46 + (uint)bVar56 * -2 + 1;
        out(*puVar46,(short)puVar41);
        uVar13 = *puVar41;
        *(byte *)puVar41 = (byte)*puVar41 + bVar7;
        iVar15 = CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 + 'o') +
                 *(int *)((int)puVar41 * 2) + (uint)CARRY1((byte)uVar13,bVar7);
        pcVar14 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '(');
        while( true ) {
          uVar13 = *puVar41;
          bVar8 = (byte)puVar38;
          *(byte *)puVar41 = (byte)*puVar41 + bVar8;
          pcVar14 = pcVar14 + (uint)CARRY1((byte)uVar13,bVar8) + iRam73280512;
          bVar7 = (byte)pcVar14;
          *pcVar14 = *pcVar14 + bVar7;
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | bRam7d160243,bVar8));
          bVar56 = ((uint)uStackY_2c & 0x400) != 0;
          in_AF = ((uint)uStackY_2c & 0x10) != 0;
          *pcVar14 = *pcVar14 + bVar7;
          uVar26 = (undefined3)((uint)pcVar14 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar26,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar9 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar9 < '\0') break;
          *(char *)CONCAT31(uVar26,cVar9) = *(char *)CONCAT31(uVar26,cVar9) + cVar9;
          iVar15 = CONCAT31(uVar26,bVar7 + 0x16);
code_r0x00402b33:
          piVar21 = (int *)(iVar15 + 0xe2802);
          *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar38 >> 8);
          uVar50 = uVar49;
          uVar49 = uVar52;
          while( true ) {
            bVar8 = (byte)puVar44 | (byte)((uint)puVar38 >> 8);
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar8);
            *piVar21 = (int)(*piVar21 + (int)piVar21);
            cVar9 = (char)piVar21;
            *(byte *)puVar41 = (byte)*puVar41 + cVar9;
            if ((POPCOUNT((byte)*puVar41) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar21 = (char)*piVar21 + cVar9;
            uVar13 = CONCAT31((int3)((uint)piVar21 >> 8),cVar9 + '\x13');
            puVar20 = (uint *)(uVar13 + 0x19061224 + (uint)(0x1f9edfd < uVar13));
            uVar2 = (uint)(0xe4ffffdd < uVar13 + 0xfe061202 ||
                          CARRY4(uVar13 + 0x19061224,(uint)(0x1f9edfd < uVar13)));
            uVar13 = *puVar29;
            uVar18 = *puVar29;
            *puVar29 = (uint)((byte *)(uVar18 + (int)puVar20) + uVar2);
            bVar7 = POPCOUNT(*puVar29 & 0xff);
            puVar46 = puVar29;
            if ((SCARRY4(uVar13,(int)puVar20) != SCARRY4((int)(uVar18 + (int)puVar20),uVar2)) ==
                (int)*puVar29 < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar20;
            *(byte *)puVar20 = (byte)*puVar20 + bVar7;
            iVar15 = CONCAT31((int3)((uint)puVar20 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar41 | (byte)*puVar41;
            uVar13 = *puVar44;
            *(byte *)puVar44 = (byte)*puVar44 + bVar8;
            pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x228b26
                               + *puVar48 + (uint)CARRY1((byte)uVar13,bVar8));
            cVar9 = bVar7 + (byte)*puVar38;
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),cVar9);
            if (SCARRY1(bVar7,(byte)*puVar38) == cVar9 < '\0') break;
            *pcVar14 = *pcVar14 + (char)pcVar14;
            cVar9 = (char)pcVar14 + '\x02';
            pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9);
            bVar7 = POPCOUNT(cVar9);
            uVar50 = uVar49;
code_r0x00402b7a:
            puVar47 = puVar29;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar9 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar9;
              uVar26 = (undefined3)((uint)pcVar14 >> 8);
              pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '\x13');
              *(byte *)puVar38 = (byte)*puVar38 | (byte)puVar41;
              *(byte *)puVar48 = (byte)*puVar48 | (byte)puVar41;
              *puVar41 = (uint)(pcVar14 + *puVar41);
              uVar34 = (undefined2)((uint)puVar44 >> 0x10);
              uVar28 = SUB41(puVar44,0);
              cVar43 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar44 + -0x5f);
              puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar43,uVar28));
              *pcVar14 = *pcVar14 + cVar9 + '\x13';
              piVar21 = (int *)CONCAT31(uVar26,cVar9 + -0x7a);
              uVar13 = *puVar41;
              *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar13,(char)puVar38) == (char)(byte)*puVar41 < '\0') break;
              *(char *)piVar21 = (char)*piVar21 + cVar9 + -0x7a;
              cVar45 = cVar9 + -0x78;
              piVar21 = (int *)CONCAT31(uVar26,cVar45);
              uVar5 = uVar50;
              if ((POPCOUNT(cVar45) & 1U) != 0) break;
              *(char *)piVar21 = (char)*piVar21 + cVar45;
              pcVar14 = (char *)CONCAT31(uVar26,cVar9 + -0x65);
              *puVar38 = *puVar38 | (uint)puVar41;
              *puVar48 = *puVar48 | (uint)puVar41;
              pbVar12 = (byte *)((int)puVar38 + -1);
              cVar43 = cVar43 + *(byte *)((int)puVar44 + -0x5e);
              puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar43,uVar28));
              *pcVar14 = *pcVar14 + cVar9 + -0x65;
              bVar7 = cVar9 + 10;
              puVar20 = (uint *)CONCAT31(uVar26,bVar7);
              bVar8 = (byte)pbVar12;
              *(byte *)puVar41 = (byte)*puVar41 + bVar8;
              puVar29 = puVar47 + (uint)bVar56 * -2 + 1;
              out(*puVar47,(short)puVar41);
              uVar13 = *puVar41;
              *(byte *)puVar41 = (byte)*puVar41 + bVar8;
              uVar19 = (uint)CARRY1((byte)uVar13,bVar8);
              uVar18 = *puVar41;
              uVar13 = *puVar41;
              pbVar40 = pbVar12 + uVar13 + uVar19;
              uVar6 = *puVar41;
              cRam130a0000 = cRam130a0000 - cVar43;
              uVar2 = *puVar41;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar20);
              *(byte *)puVar20 = (char)*puVar20 + bVar7;
              puVar38 = (uint *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar40 >> 8) | bRam7d170243,
                                                  (char)pbVar40 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar12,uVar18) ||
                                                  CARRY4((uint)(pbVar12 + uVar13),uVar19))));
              bVar56 = (uVar52 & 0x400) != 0;
              in_AF = (uVar52 & 0x10) != 0;
              *(byte *)puVar20 = (char)*puVar20 + bVar7;
              bVar54 = 0xfd < bVar7;
              pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '\f');
              puVar41 = (uint *)((uint)puVar41 | uVar2);
code_r0x00402bd1:
              uVar13 = *puVar44;
              uVar18 = *puVar44;
              *puVar44 = (uint)((byte *)(uVar18 + (int)puVar38) + bVar54);
              bVar7 = POPCOUNT(*puVar44 & 0xff);
              uVar50 = uVar52;
              if ((SCARRY4(uVar13,(int)puVar38) !=
                  SCARRY4((int)(uVar18 + (int)puVar38),(uint)bVar54)) == (int)*puVar44 < 0)
              goto code_r0x00402b7a;
              cVar9 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar9;
              pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + '\x02');
              if (SCARRY1(cVar9,'\x02') == (char)(cVar9 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar14 = *pcVar14 + (char)pcVar14;
                pcVar14 = (char *)(CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12') |
                                  *puVar41);
                *(byte *)puVar48 = (byte)*puVar48 - (char)puVar38;
                *pcVar14 = *pcVar14 + (char)pcVar14;
                puVar41 = (uint *)((int)puVar41 - *puVar29);
                bVar7 = (byte)puVar44 | (byte)((uint)puVar38 >> 8);
                cVar9 = *pcVar14;
                uVar26 = (undefined3)((uint)pcVar14 >> 8);
                pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                *pcVar14 = *pcVar14 + cVar9;
                pcVar17 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                           CONCAT11((char)((uint)puVar44 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar14 = *pcVar14 + cVar9;
                bVar54 = false;
                pcVar14 = (char *)(CONCAT31(uVar26,cVar9 + '\x13') | *puVar41);
                do {
                  bVar8 = (byte)puVar38;
                  bVar7 = bVar8 + (byte)puVar29[(int)puVar48 * 2];
                  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar7 + bVar54);
                  uVar13 = (uint)(CARRY1(bVar8,(byte)puVar29[(int)puVar48 * 2]) ||
                                 CARRY1(bVar7,bVar54));
                  pcVar22 = pcVar14 + 0x1b000019 + uVar13;
                  piVar23 = (int *)((int)puVar48 * 2 + 0x40000a5);
                  *piVar23 = (int)((int)puVar38 +
                                  (uint)((char *)0xe4ffffe6 < pcVar14 ||
                                        CARRY4((uint)(pcVar14 + 0x1b000019),uVar13)) + *piVar23);
                  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(char)puVar41 + cRam00009d7d
                                            );
                  uVar26 = (undefined3)((uint)pcVar22 >> 8);
                  bVar7 = (char)pcVar22 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar26,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar14 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar22 >> 8) - in_AF,
                                                      (char)uVar13));
                  pbVar12 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar26,bVar7));
                  while( true ) {
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    puVar47 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               (byte)puVar41 | (byte)*puVar41);
                    puVar48 = (uint *)((uint)puVar48 | (uint)puVar29);
                    uVar13 = (uint)pcVar17 | (uint)puVar29;
                    unaff_EBP = pbVar12 + 1;
                    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar49);
                    cVar43 = (char)(pcVar14 + 0x1b000019);
                    uVar26 = (undefined3)((uint)(pcVar14 + 0x1b000019) >> 8);
                    cVar9 = cVar43 + -0x13;
                    pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                    uVar34 = (undefined2)(uVar13 >> 0x10);
                    cVar45 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar45,(byte)uVar13));
                    *pcVar14 = *pcVar14 + cVar9;
                    pcVar14 = (char *)(CONCAT31(uVar26,cVar43 + '\x19') | *puVar47);
                    bVar7 = (byte)pcVar14;
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      pbVar12 = (byte *)((int)puVar47 + (int)pcVar14);
                      bVar54 = CARRY1(*pbVar12,bVar7);
                      *pbVar12 = *pbVar12 + bVar7;
                      puVar41 = puVar47;
                      goto code_r0x00402bd1;
                    }
                    *pcVar14 = *pcVar14 + bVar7;
                    uVar26 = (undefined3)((uint)pcVar14 >> 8);
                    pcVar17 = (char *)CONCAT31(uVar26,bVar7 + 0x6f);
                    puVar41 = (uint *)((int)puVar47 + 1);
                    *pcVar17 = *pcVar17 + bVar7 + 0x6f;
                    bVar8 = (byte)uVar13 | (byte)((uint)pcVar14 >> 8);
                    pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x5c);
                    cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),bVar8) + -0x5f);
                    puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar45,bVar8));
                    *pcVar14 = *pcVar14 + bVar7 + 0x5c;
                    pcVar14 = (char *)(CONCAT31(uVar26,bVar7 + 0x88) | *puVar41);
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar38 >> 8);
                      uStackY_2c = (uint *)((uint)uStackY_2c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    uVar26 = (undefined3)((uint)pcVar14 >> 8);
                    cVar9 = (char)pcVar14 + 'o';
                    puVar41 = (uint *)((int)puVar47 + 2);
                    *(char *)CONCAT31(uVar26,cVar9) = *(char *)CONCAT31(uVar26,cVar9) + cVar9;
                    pcVar17 = (char *)CONCAT31((int3)((uint)puVar44 >> 8),
                                               bVar8 | (byte)((uint)pcVar14 >> 8));
                    pcVar14 = (char *)(CONCAT31(uVar26,cVar9) | 2);
                    pbVar12[-0x62] = pbVar12[-0x62] + 1;
                    bVar7 = (byte)pcVar14;
                    *pcVar14 = *pcVar14 + bVar7;
                    bVar54 = 0xfd < bVar7;
                    cVar9 = bVar7 + 2;
                    pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                    uVar51 = uVar49;
                    if (SCARRY1(bVar7,'\x02') != cVar9 < '\0') break;
                    *pcVar14 = *pcVar14 + cVar9;
                    bVar8 = bVar7 + 10;
                    pcVar14 = (char *)CONCAT31(uVar26,bVar8);
                    *pcVar14 = *pcVar14 - cVar45;
                    cVar43 = (char)puVar38;
                    *(byte *)puVar41 = *(byte *)puVar41 + cVar43;
                    pbVar12[-0x62] = pbVar12[-0x62] + 1;
                    *pcVar14 = *pcVar14 + bVar8;
                    cVar9 = bVar7 + 0xc;
                    pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                    if (SCARRY1(bVar8,'\x02') == cVar9 < '\0') {
                      *pcVar14 = *pcVar14 + cVar9;
                      *(byte *)puVar38 = (byte)*puVar38 - cVar45;
                      *(byte *)puVar41 = *(byte *)puVar41 + cVar43;
                      cVar9 = (bVar7 + 0x13) - (byte)puVar38[0x13];
                      pcVar14 = (char *)CONCAT31(uVar26,cVar9);
                      *pcVar14 = *pcVar14 + cVar9;
                      pcVar22 = (char *)CONCAT31(uVar26,cVar9 + *pcVar14);
                      *pcVar22 = *pcVar22 + cVar9 + *pcVar14;
                      pcVar22 = pcVar22 + *puVar38;
                      *pcVar22 = *pcVar22 + (char)pcVar22;
                      LOCK();
                      pcVar14 = *(char **)pcVar22;
                      *(char **)pcVar22 = pcVar22;
                      UNLOCK();
                      *pcVar14 = *pcVar14 + (char)pcVar14;
                      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)*puVar38);
                      *pbVar40 = *pbVar40 + (byte)*puVar38;
                      goto code_r0x00402c8d;
                    }
                    puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                               cVar43 + *pcVar17 + (0xfd < bVar8));
                    *(byte *)puVar48 = (byte)*puVar48 - cVar45;
                    pbVar12 = unaff_EBP;
                  }
                } while( true );
              }
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11((char)((uint)puVar44 >> 8) +
                                                  *(byte *)((int)puVar44 + -99),(char)puVar44));
              puVar47 = puVar29;
            }
            *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
            puVar41 = (uint *)((int)puVar41 - *puVar47);
            puVar29 = puVar47;
            uVar50 = uVar49;
            uVar49 = uVar5;
          }
          *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
          pcVar14 = pcVar14 + -0x7d160243;
        }
        pcVar14 = (char *)CONCAT31(uVar26,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar38;
    uVar13 = *puVar20;
    *(byte *)puVar20 = (byte)*puVar20 + (byte)puVar20;
    *puVar48 = (uint)((int)puVar41 + (uint)CARRY1((byte)uVar13,(byte)puVar20) + *puVar48);
    puVar46 = puVar29;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar11 = (char)puVar38;
      cVar31 = (char)((uint)puVar38 >> 8) + (char)((uint)pbVar40 >> 8);
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(cVar31,cVar11));
      cVar9 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar9;
      pcVar14 = (char *)((int)pbVar40 * 2 + 0x1a10000);
      cVar45 = (char)((uint)pcVar17 >> 8);
      *pcVar14 = *pcVar14 + cVar45;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      pbVar40[-0x47ffffff] = pbVar40[-0x47ffffff] + cVar45;
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      bVar8 = (byte)puVar41;
      *(byte *)puVar48 = (byte)*puVar48 + bVar8;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + bVar8;
      *pbVar40 = *pbVar40 + cVar9;
      *puVar29 = (uint)(*puVar29 + (int)puVar29);
      uVar34 = (undefined2)((uint)pcVar17 >> 0x10);
      cVar45 = cVar45 + (byte)puVar29[(int)pcVar17];
      pcVar14 = (char *)CONCAT22(uVar34,CONCAT11(cVar45,(char)pcVar17));
      pcVar14[(int)pbVar40] = pcVar14[(int)pbVar40] + cVar9;
      *(byte *)puVar41 = *(byte *)puVar41 - cVar45;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar11;
      uVar26 = (undefined3)((uint)pbVar40 >> 8);
      bVar7 = cVar9 - *pbVar40;
      *pcVar14 = *pcVar14 + bVar8;
      *(byte *)puVar41 = *(byte *)puVar41 ^ bVar7;
      *(byte *)puVar41 = *(byte *)puVar41 + bVar7;
      *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
      uVar13 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + bVar8;
      cVar43 = bVar7 + *(char *)CONCAT31(uVar26,bVar7) + CARRY1((byte)uVar13,bVar8);
      pcVar17 = (char *)CONCAT22(uVar34,CONCAT11(cVar45 + pbVar12[-0x60],(char)pcVar17));
      *(char *)CONCAT31(uVar26,cVar43) = *(char *)CONCAT31(uVar26,cVar43) + cVar43;
      cVar45 = cVar43 + '\x12';
      pbVar40 = (byte *)CONCAT31(uVar26,cVar45);
      cVar9 = *pcVar17;
      *pcVar17 = *pcVar17 + cVar45;
      if (SCARRY1(cVar9,cVar45) != *pcVar17 < '\0') break;
code_r0x00402c8d:
      cVar9 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar9;
      *pbVar40 = *pbVar40 + cVar9;
    }
    *pbVar40 = *pbVar40 + cVar45;
    pbVar40 = (byte *)CONCAT31(uVar26,cVar43 + '$');
    *pbVar40 = *pbVar40 + cVar31;
    bVar7 = *(byte *)puVar41;
    *(byte *)puVar41 = *(byte *)puVar41 + cVar11;
    uVar50 = uVar49;
    uVar51 = uVar53;
  } while (SCARRY1(bVar7,cVar11) == (char)*(byte *)puVar41 < '\0');
  do {
    cVar9 = (char)pbVar40;
    *pbVar40 = *pbVar40 + cVar9;
    uVar26 = (undefined3)((uint)pbVar40 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar41;
    bVar8 = cVar9 + 0x24;
    cVar45 = (char)((uint)pcVar17 >> 8);
    pcVar17[-0x62] = pcVar17[-0x62] + cVar45;
    *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
    bVar7 = cVar9 + 0x2fU + (byte)*puVar38;
    cVar43 = bVar7 + (0xf4 < bVar8);
    cVar9 = cVar43 + *(char *)CONCAT31(uVar26,cVar43) +
            (CARRY1(cVar9 + 0x2fU,(byte)*puVar38) || CARRY1(bVar7,0xf4 < bVar8));
    pcVar14 = (char *)CONCAT31(uVar26,cVar9);
    *pcVar14 = *pcVar14 - (char)puVar41;
    *pcVar14 = *pcVar14 + cVar9;
    pcVar22 = (char *)((int)puVar41 - *puVar41);
    *(byte *)(puVar29 + (int)pcVar17) = (byte)puVar29[(int)pcVar17] + cVar45;
    pcVar14[(int)unaff_EBP] = pcVar14[(int)unaff_EBP] + cVar9;
    *pcVar22 = *pcVar22 + (char)puVar38;
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((char)((uint)pbVar40 >> 8) - *pcVar22,cVar9));
    uVar13 = *puVar48;
    *pcVar14 = *pcVar14 - (char)((uint)pcVar22 >> 8);
    *pcVar14 = *pcVar14 + cVar9;
    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar50);
    pbVar12 = (byte *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                               CONCAT11(cVar45 - (byte)*puVar29,(char)pcVar17));
    unaff_EBP = unaff_EBP + *(int *)(pbVar12 + (int)puVar38);
    puVar47 = (uint *)CONCAT31((int3)((uint)pcVar22 >> 8),(char)pcVar22 + (byte)uVar13);
    while( true ) {
      puVar41 = puVar47;
      uVar34 = (undefined2)((uint)pbVar12 >> 0x10);
      bVar36 = (char)((uint)pbVar12 >> 8) + pbVar12[0x18];
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
      cVar9 = (char)puVar38;
      *(byte *)puVar41 = (byte)*puVar41 + cVar9;
      uVar13 = *puVar29;
      bVar10 = (byte)((uint)puVar38 >> 8);
      bVar7 = *pbVar40;
      pbVar40 = pbVar40 + (uint)CARRY1(bVar10,*pbVar40) + *(int *)pbVar40;
      *(byte *)puVar41 = (byte)*puVar41 + cVar9;
      cVar43 = ((char)pbVar12 - (byte)uVar13) - (byte)*puVar29;
      bVar8 = *(byte *)((int)puVar48 + 0x1a);
      *pbVar40 = *pbVar40 + (char)pbVar40;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11(bVar10 + bVar7 + bVar8 | (byte)*puVar41,cVar9));
      pbVar40 = pbVar40 + *puVar41;
      if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + (char)pbVar40;
      bVar7 = (char)pbVar40 + 0x6f;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
      pcVar17 = (char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar36,(char)pbVar12)) >> 8),
                                  cVar43) + -1);
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar17 = *pcVar17 + (byte)puVar41;
      *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar7;
      uVar4 = *(undefined6 *)pcVar14;
      uVar50 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar14 = (char *)uVar4;
      *pcVar14 = *pcVar14 + (char)uVar4;
      *(byte *)puVar29 = (byte)*puVar29 + (char)uVar4;
      pcVar14 = (char *)((uint)pcVar14 | 0x73110008);
      bVar36 = (byte)((uint)pcVar17 >> 8);
      *(byte *)puVar48 = (byte)*puVar48 - bVar36;
      *(byte *)puVar41 = (byte)*puVar41 + cVar9;
      puVar47 = puVar29 + (uint)bVar56 * -2 + 1;
      out(*puVar29,(short)puVar41);
      *pcVar14 = *pcVar14;
      cVar9 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      bVar7 = unaff_EBP[-0x5a];
      uVar34 = (undefined2)((uint)pcVar17 >> 0x10);
      cVar43 = (char)pcVar17;
      *pcVar14 = *pcVar14 + cVar9;
      cVar9 = cVar9 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar9);
      puVar38 = (uint *)(uVar13 | 0x73110000);
      puVar29 = puVar47 + (uint)bVar56 * -2 + 1;
      out(*puVar47,(short)puVar41);
      *(byte *)puVar38 = (byte)*puVar38;
      bVar10 = (byte)puVar41 | (byte)*puVar48;
      puVar47 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar10);
      *(byte *)puVar38 = (byte)*puVar38 + cVar9;
      pcVar14 = (char *)(uVar13 | 0x7b1f1609);
      bVar56 = (uVar51 & 0x400) != 0;
      *(uint *)((int)puVar48 + -0x7d) = *(uint *)((int)puVar48 + -0x7d) | (uint)unaff_EBP;
      bVar8 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar8;
      bVar36 = bVar36 | bVar7 | *(byte *)((int)puVar29 + 0x19);
      pbVar12 = (byte *)CONCAT22(uVar34,CONCAT11(bVar36,cVar43));
      *pcVar14 = *pcVar14 + bVar8;
      uVar26 = (undefined3)((uint)pcVar14 >> 8);
      puVar29[(int)puVar48 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar8) + puVar29[(int)puVar48 * 2]);
      bVar7 = bVar8 + 0x2d ^ *(byte *)CONCAT31(uVar26,bVar8 + 0x2d);
      pcVar14 = (char *)CONCAT31(uVar26,bVar7);
      uVar13 = *puVar29;
      *(byte *)puVar29 = (byte)*puVar29 + bVar7;
      uVar51 = uVar50;
      if (CARRY1((byte)uVar13,bVar7)) {
        *pcVar14 = *pcVar14 + bVar7;
        bVar7 = bVar7 | pcVar14[0x4000019];
        pcVar14 = (char *)CONCAT31(uVar26,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar14 = *pcVar14 + bVar7;
          piVar23 = (int *)CONCAT31(uVar26,bVar7 + 0x28);
          *piVar23 = (int)piVar23 + (uint)(0xd7 < bVar7) + *piVar23;
          bVar32 = (byte)((uint6)uVar4 >> 8);
          *pbVar12 = *pbVar12 + bVar32;
          uVar35 = CONCAT11((byte)((uint)puVar41 >> 8) | bVar36,bVar10);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar35);
          uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar50);
          bVar10 = in(uVar35);
          pbVar40 = (byte *)CONCAT31(uVar26,bVar10);
          bVar7 = *pbVar40;
          bVar54 = SCARRY1(*pbVar40,bVar10);
          *pbVar40 = *pbVar40 + bVar10;
          bVar8 = *pbVar40;
          puVar44 = puVar29;
          uVar52 = uVar50;
          if (!CARRY1(bVar7,bVar10)) goto code_r0x00402e19;
          *pbVar40 = *pbVar40 + bVar10;
          bVar32 = bVar32 | *pbVar40;
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar32,cVar9));
          pcVar14 = (char *)CONCAT31(uVar26,bVar10 + *pbVar40);
          *pbVar12 = *pbVar12 + bVar32;
        }
        uVar26 = (undefined3)((uint)pcVar14 >> 8);
        bVar8 = (byte)pcVar14 | (byte)*puVar47;
        pbVar40 = (byte *)CONCAT31(uVar26,bVar8);
        puVar44 = puVar29 + (uint)bVar56 * -2 + 1;
        out(*puVar29,(short)puVar47);
        LOCK();
        bVar7 = *pbVar40;
        *pbVar40 = bVar8;
        UNLOCK();
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
        piVar23 = (int *)(CONCAT31(uVar26,bVar7) + -0x1b7e07);
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
        iVar15 = (int)puVar38 - *(int *)pbVar12;
        bVar7 = *(byte *)((int)puVar48 + -0x7a);
        uVar35 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar23 = *(char *)piVar23 + (char)piVar23;
        bVar8 = (char)((uint)iVar15 >> 8) + bVar7 | *(byte *)((int)puVar48 + 0x17);
        *(char *)piVar23 = *(char *)piVar23 + (char)piVar23;
        uVar26 = (undefined3)(CONCAT22(uVar35,CONCAT11(bVar8,(byte)iVar15)) >> 8);
        bVar7 = (byte)iVar15 | *pbVar12;
        puVar38 = (uint *)CONCAT31(uVar26,bVar7);
        pbVar40 = (byte *)((int)piVar23 + *piVar23);
        puVar29 = puVar44;
        if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e0a;
        *(byte *)puVar38 = (byte)*puVar38 + bVar7;
        *(byte **)pbVar12 = (byte *)(*(int *)pbVar12 + (int)puVar47);
        piVar23 = (int *)CONCAT31(uVar26,bVar7 + 0x27);
        puVar38 = (uint *)CONCAT22(uVar35,CONCAT11(bVar8 + *(byte *)((int)puVar48 + -0x79),bVar7));
        *(byte *)piVar23 = (char)*piVar23 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar17 = (char *)CONCAT22(uVar34,CONCAT11(bVar36 | unaff_EBP[-0x62],cVar43));
  } while( true );
code_r0x00402dff:
  pbVar40 = (byte *)CONCAT22((short)((uint)piVar23 >> 0x10),
                             CONCAT11((byte)((uint)piVar23 >> 8) |
                                      *(byte *)((int)puVar47 + 0x2170411),(byte)piVar23));
  puVar29 = puVar44 + (uint)bVar56 * -2 + 1;
  out(*puVar44,(short)puVar47);
  *pbVar40 = (byte)piVar23;
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar40;
  *pbVar40 = *pbVar40 - cVar43;
  *pbVar40 = *pbVar40 + (char)pbVar40;
  bVar54 = false;
  bVar8 = (byte)((uint)puVar38 >> 8) | bRam052b0603;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar8,(char)puVar38));
  puVar44 = puVar29;
code_r0x00402e19:
  if (bVar8 == 0 || bVar54 != (char)bVar8 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar40;
  *pbVar40 = *pbVar40 + cRam89280411;
  piVar23 = (int *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                            CONCAT11((byte)((uint)pbVar40 >> 8) |
                                     *(byte *)((int)puVar47 + 0x7190411),cRam89280411));
  *(char *)piVar23 = (char)*piVar23 + cRam89280411;
  cVar9 = (char)puVar38;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar47,cVar9));
  puVar44 = (uint *)((int)puVar44 + *piVar23);
  pbVar40 = (byte *)((int)piVar23 + *piVar23);
  bVar8 = (byte)pbVar40;
  *pbVar40 = *pbVar40 + bVar8;
  *(byte *)puVar44 = (byte)*puVar44 + cVar9;
  bVar7 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar8;
  *(byte **)pbVar40 = unaff_EBP + (uint)CARRY1(bVar7,bVar8) + *(int *)pbVar40;
  piVar23 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),*pbVar40);
  *(byte *)puVar47 = (byte)*puVar47 + cVar9;
  puVar29 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(byte)puVar47 | (byte)*puVar47);
  pbVar40 = (byte *)((int)puVar29 + -0x43);
  *pbVar40 = *pbVar40 + (char)((uint)puVar47 >> 8);
  puVar47 = puVar29;
  puVar29 = puVar48;
  uVar51 = uVar49;
code_r0x00402e42:
  uVar49 = uVar52;
  puVar48 = puVar29;
  uVar52 = uVar49;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e6e;
  iVar15 = *(int *)((int)piVar23 + *piVar23);
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
  piVar23 = (int *)(iVar15 + -0x8c6f);
  puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                             CONCAT11((byte)((uint)puVar47 >> 8) | *(byte *)((int)puVar47 + -0x3f),
                                      (char)puVar47));
  pbVar24 = (byte *)((int)piVar23 + *piVar23);
  pbVar40 = pbVar24;
  puVar48 = uStackY_2c;
  if (SCARRY4((int)piVar23,*piVar23)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar24 = *pbVar24 + (char)pbVar24;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar47,(char)puVar38));
  puVar29 = puVar44 + (uint)bVar56 * -2 + 1;
  out(*puVar44,(short)puVar47);
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + (byte)*puVar48);
  puVar44 = puVar29 + (uint)bVar56 * -2 + 1;
  out(*puVar29,(short)puVar47);
  uVar51 = uVar49;
  uVar52 = uVar50;
code_r0x00402e6e:
  uVar49 = uVar51;
  uVar26 = (undefined3)((uint)puVar47 >> 8);
  cVar9 = (char)puVar47 + (byte)*puVar48;
  puVar29 = puVar44 + (uint)bVar56 * -2 + 1;
  out(*puVar44,(short)CONCAT31(uVar26,cVar9));
  puVar47 = (uint *)CONCAT31(uVar26,cVar9 + (byte)*puVar48);
  puVar44 = puVar29 + (uint)bVar56 * -2 + 1;
  out(*puVar29,(short)puVar47);
  pbVar40 = (byte *)0x0;
  puVar29 = puVar48;
code_r0x00402e81:
  puVar48 = puVar29;
  bVar8 = (char)pbVar40 - *pbVar40;
  iVar15 = CONCAT31((int3)((uint)pbVar40 >> 8),bVar8);
  *pbVar12 = *pbVar12 + (char)puVar47;
  pbVar24 = (byte *)(iVar15 * 2);
  *pbVar24 = *pbVar24 ^ bVar8;
  pbVar24 = (byte *)(int)(short)iVar15;
  *pbVar24 = *pbVar24 + bVar8;
  *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar38;
  bVar7 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar8;
  *(byte **)(pbVar12 + -0x73) =
       (byte *)((int)puVar44 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pbVar12 + -0x73));
  *pbVar24 = *pbVar24 + bVar8;
  bVar7 = (byte)puVar38 | (byte)*puVar47;
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar7);
  puVar29 = puVar44;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar24 = *pbVar24 + bVar8;
  pbVar40 = (byte *)CONCAT31((int3)(char)((uint)pbVar40 >> 8),bVar8 + 0x2d);
  puVar44[(int)puVar48 * 2] =
       (uint)((int)puVar47 + (uint)(0xd2 < bVar8) + puVar44[(int)puVar48 * 2]);
  pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
  do {
    uVar13 = *puVar44;
    bVar7 = (byte)pbVar40;
    *(byte *)puVar44 = (byte)*puVar44 + bVar7;
    if (!CARRY1((byte)uVar13,bVar7)) break;
    *pbVar40 = *pbVar40 + bVar7;
    bVar7 = bVar7 | pbVar40[0x400001a];
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar24 = *pbVar24 + (byte)pbVar24;
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      bVar7 = (byte)pbVar24 | pbVar24[0x400001b];
      pcVar14 = (char *)CONCAT31(uVar26,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar13 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar38;
        *(char *)((int)pcVar14 * 2) =
             *(char *)((int)pcVar14 * 2) - CARRY1((byte)uVar13,(byte)puVar38);
        bVar54 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar24 = *pbVar24 + bVar7;
      puVar29 = puVar44;
code_r0x00402eb4:
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      bVar7 = (char)pbVar24 + 0x6f;
      pcVar14 = (char *)CONCAT31(uVar26,bVar7);
      *(byte **)pcVar14 = pbStackY_48;
      uVar13 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
      pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
      uVar53 = uVar50;
      if ((byte)*puVar47 != 0 && SCARRY1((byte)uVar13,(char)puVar38) == (char)(byte)*puVar47 < '\0')
      {
        *pcVar14 = *pcVar14 + bVar7;
        bVar8 = (char)pbVar24 + 0x9c;
        pbVar24 = (byte *)CONCAT31(uVar26,bVar8);
        puVar29[(int)puVar48 * 2] =
             (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar29[(int)puVar48 * 2]);
        pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
        uVar13 = *puVar29;
        *(byte *)puVar29 = (byte)*puVar29 + bVar8;
        puVar44 = puVar29;
        if (CARRY1((byte)uVar13,bVar8)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar44 = puVar29 + (uint)bVar56 * -2 + 1;
      out(*puVar29,(short)puVar47);
    }
    cVar9 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar9;
    uVar26 = (undefined3)((uint)pcVar14 >> 8);
    bVar7 = cVar9 + 0x6f;
    pcVar14 = (char *)CONCAT31(uVar26,bVar7);
    *(byte **)pcVar14 = pbStackY_48;
    uVar13 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar38;
    pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
    *(byte *)(puVar44 + 7) = ((byte)puVar44[7] - bVar36) - CARRY1((byte)uVar13,(byte)puVar38);
    *pcVar14 = *pcVar14 + bVar7;
    bVar8 = cVar9 + 0x9c;
    pcVar14 = (char *)CONCAT31(uVar26,bVar8);
    puVar44[(int)puVar48 * 2] =
         (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar48 * 2]);
    uVar13 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar8;
    if (!CARRY1((byte)uVar13,bVar8)) goto code_r0x00402e7e;
    *pcVar14 = *pcVar14 + bVar8;
    bVar8 = bVar8 | pcVar14[0x400001c];
    pbVar40 = (byte *)CONCAT31(uVar26,bVar8);
    uVar52 = uVar50;
    if ((char)bVar8 < '\x01') goto code_r0x00402f16;
    *pbVar40 = *pbVar40 + bVar8;
    pcVar14 = (char *)CONCAT31(uVar26,bVar8 + 0x6f);
    while( true ) {
      *(byte **)pcVar14 = pbStackY_48;
      uVar13 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar38;
      *(uint *)((int)puVar44 + 0x1d) =
           (*(int *)((int)puVar44 + 0x1d) - (int)puVar48) - (uint)CARRY1((byte)uVar13,(byte)puVar38)
      ;
      bVar7 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar7;
      bVar8 = bVar7 + 0x2d;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
      puVar44[(int)puVar48 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar48 * 2]);
      pbStackY_48 = (byte *)CONCAT22((short)((uint)pbStackY_48 >> 0x10),uVar50);
      uVar13 = *puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar8;
      if (!CARRY1((byte)uVar13,bVar8)) break;
      *pbVar40 = *pbVar40 + bVar8;
code_r0x00402f16:
      bVar7 = (byte)pbVar40 | pbVar40[0x400001d];
      puVar29 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
      pbVar40 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar40;
        *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
        uVar26 = (undefined3)((uint)puVar29 >> 8);
        cVar9 = (char)puVar29 + 'o';
        puVar41 = (uint *)CONCAT31(uVar26,cVar9);
        *puVar41 = (uint)pbStackY_48;
        cVar45 = (char)puVar38;
        *(byte *)puVar47 = (byte)*puVar47 + cVar45;
        pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
        bVar7 = (byte)((uint)puVar47 >> 8);
        bVar54 = bVar7 < (byte)*puVar44;
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar44,(char)puVar47));
        if (bVar54) break;
        bVar54 = CARRY4((uint)puVar41,*puVar41);
        puVar29 = (uint *)((int)puVar41 + *puVar41);
        if (!SCARRY4((int)puVar41,*puVar41)) {
          bVar54 = CARRY4((uint)unaff_EBP,*puVar29);
          unaff_EBP = unaff_EBP + *puVar29;
        }
        *puVar29 = (*puVar29 - (int)puVar29) - (uint)bVar54;
        *(byte *)puVar47 = (byte)*puVar47 + cVar45;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11((char)((uint)puVar38 >> 8) + (byte)*puVar47,
                                            cVar45 - (byte)*puVar47));
        *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
code_r0x00402f3b:
        cVar45 = (char)puVar47;
        *pbVar12 = *pbVar12 + cVar45;
        bVar7 = (byte)puVar29;
        *(byte *)((int)puVar29 * 2) = *(byte *)((int)puVar29 * 2) ^ bVar7;
        *(byte *)puVar29 = (byte)*puVar29 + bVar7;
        *(byte *)puVar29 = (byte)*puVar29 + cVar45;
        uVar13 = *puVar29;
        *(byte *)puVar29 = (byte)*puVar29 + bVar7;
        *puVar47 = (uint)((int)puVar29 + (uint)CARRY1((byte)uVar13,bVar7) + *puVar47);
        pcVar14 = (char *)((uint)puVar29 | *puVar48);
        uVar26 = (undefined3)((uint)pcVar14 >> 8);
        cVar9 = (char)pcVar14 + *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar26,cVar9);
        *pcVar14 = *pcVar14 + cVar9;
        cVar9 = cVar9 + *pcVar14;
        piVar23 = (int *)CONCAT31(uVar26,cVar9);
        *(char *)piVar23 = (char)*piVar23 + cVar9;
        iVar15 = LocalDescriptorTableRegister();
        *piVar23 = iVar15;
        bVar7 = *pbVar12;
        bVar33 = (byte)((uint)puVar38 >> 8);
        *pbVar12 = *pbVar12 + bVar33;
        iVar15 = *piVar23;
        uVar35 = (undefined2)((uint)puVar38 >> 0x10);
        bVar32 = (byte)puVar38;
        *(byte *)puVar44 = (byte)*puVar44 + cVar9;
        puVar29 = puVar44 + (uint)bVar56 * -2 + 1;
        out(*puVar44,(short)puVar47);
        *(byte *)puVar29 = (byte)*puVar29 + cVar9;
        bVar8 = *pbVar12;
        *(byte *)puVar47 = (byte)*puVar47 - bVar36;
        *(byte *)puVar29 = (byte)*puVar29 + cVar9;
        puVar41 = puVar29 + (uint)bVar56 * -2 + 1;
        out(*puVar29,(short)puVar47);
        *(byte *)puVar41 = (byte)*puVar41 + cVar9;
        bVar10 = *pbVar12;
        *(uint *)((int)puVar47 + -0x23) = *(uint *)((int)puVar47 + -0x23) & (uint)puVar41;
        puVar25 = (ushort *)((int)piVar23 + *piVar23);
        if (!SCARRY4((int)piVar23,*piVar23)) {
          *puVar25 = uVar53;
        }
        *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
        uVar37 = CONCAT11((char)((uint)puVar47 >> 8) + *(byte *)((int)puVar47 + -0x15),cVar45);
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),uVar37);
        puVar29 = (uint *)((int)puVar25 + *(int *)puVar25);
        if (!SCARRY4((int)puVar25,*(int *)puVar25)) {
          *(ushort *)puVar29 = uVar53;
        }
        cVar9 = (char)puVar29;
        *(byte *)puVar29 = (byte)*puVar29 + cVar9;
        cVar11 = ((bVar33 - (char)iVar15) - CARRY1(bVar7,bVar33) | bVar8 | bVar10) + (byte)*puVar29;
        puVar38 = (uint *)CONCAT22(uVar35,CONCAT11(cVar11,bVar32));
        uVar13 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + bVar32;
        if (CARRY1((byte)uVar13,bVar32)) {
          *(byte *)puVar29 = (byte)*puVar29 + cVar9;
          bVar7 = *(byte *)((int)puVar47 + 6);
          *(byte *)puVar47 = (byte)*puVar47 + bVar32;
          bVar8 = (cVar11 - (byte)*puVar41) + cRam14730307;
          *(byte *)puVar29 = (byte)*puVar29 + cVar9;
          bVar7 = bVar36 | bVar7 | *(byte *)((int)puVar47 + 0x2a);
          uVar13 = *puVar29;
          pbVar12 = (byte *)((int)puVar29 + (uint)CARRY1(bVar8,(byte)*puVar29) + *puVar29);
          *(byte *)puVar47 = (byte)*puVar47 + bVar32;
          cVar9 = cVar43 - (byte)*puVar41;
          cVar43 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar7,cVar43)) >> 8),
                                              cVar9) + 0x1e);
          *pbVar12 = *pbVar12 + (char)pbVar12;
          uVar26 = (undefined3)((uint)pbVar12 >> 8);
          bVar7 = (char)pbVar12 + 0x2aU & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar9)) + 0x1f);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar9)) + 0x20);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar9)) + 0x21);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar9)) + 0x22);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
          bVar8 = bVar8 + (byte)uVar13 + *pcVar14;
          uVar30 = CONCAT22(uVar35,CONCAT11(bVar8,bVar32));
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar9)) + 0x25);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
          pcVar17 = (char *)CONCAT22(uVar34,CONCAT11(cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(
                                                  cVar43,cVar9)) + 0x26),cVar9));
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          cVar9 = bVar7 + 0x2a;
          pcVar14 = (char *)CONCAT31(uVar26,cVar9);
          if ((POPCOUNT(cVar9) & 1U) == 0) {
            *pcVar14 = *pcVar14 + cVar9;
            pbVar12 = (byte *)(CONCAT31(uVar26,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar12;
            bVar10 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar10;
            uVar26 = (undefined3)((uint)pbVar12 >> 8);
            if (!CARRY1(bVar7,bVar10)) {
              if (!SCARRY1(bVar10,'\0')) {
                *pbVar12 = *pbVar12 + bVar10;
                uVar30 = CONCAT22(uVar35,CONCAT11(bVar8 | (byte)*puVar47,bVar32));
                bVar10 = bVar10 & (byte)*puVar47;
                *(char *)CONCAT31(uVar26,bVar10) = *(char *)CONCAT31(uVar26,bVar10) + bVar10;
                pcVar14 = (char *)CONCAT31(uVar26,bVar10 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar14 = (char *)CONCAT31(uVar26,bVar10 + *pcVar17);
              if (SCARRY1(bVar10,*pcVar17) != (char)(bVar10 + *pcVar17) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar10 + *pcVar17;
            pbVar12 = (byte *)CONCAT31(uVar26,bVar7);
            if (SCARRY1(bVar10,*pcVar17) == (char)bVar7 < '\0') {
              pcVar14 = (char *)CONCAT22(uVar35,CONCAT11(bVar8 | (byte)*puVar47,bVar32));
              *pcVar17 = *pcVar17 + cVar45;
              *(byte *)puVar47 = (byte)*puVar47 ^ bVar7;
              *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar14 = *pcVar14 + (char)pcVar14;
            uVar26 = (undefined3)((uint)pcVar14 >> 8);
            bVar7 = (char)pcVar14 + 0x2aU & (byte)*puVar47;
            *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
            pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
            pcVar14 = (char *)CONCAT31(uVar26,bVar7 + 0x54 & (byte)*puVar47);
code_r0x00403072:
            cVar9 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar9;
            uVar26 = (undefined3)((uint)pcVar14 >> 8);
            pcVar14 = (char *)CONCAT31(uVar26,cVar9 + '*');
            *pcVar14 = *pcVar14 + cVar9 + '*';
            bVar7 = cVar9 + 0x54U & (byte)*puVar47;
            *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar49);
            uVar30 = CONCAT22((short)((uint)uVar30 >> 0x10),
                              CONCAT11((char)((uint)uVar30 >> 8) +
                                       *(char *)CONCAT31(uVar26,bVar7 + 0x2a),(char)uVar30));
            *(byte *)(puVar41 + 0x828000) = (byte)puVar41[0x828000] - cVar45;
            pcVar14 = pcStackY_80;
code_r0x0040309a:
            cVar9 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar9;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar50);
            *pcVar14 = *pcVar14 + cVar9;
            pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + 0x2aU & (byte)*puVar47);
          }
          cVar9 = (char)pbVar12;
          *pbVar12 = *pbVar12 + cVar9;
          uVar26 = (undefined3)((uint)pbVar12 >> 8);
          cVar43 = cVar9 + '*';
          pcVar14 = (char *)CONCAT31(uVar26,cVar43);
          *(byte *)(puVar41 + 0x828000) = (byte)puVar41[0x828000] - cVar45;
          *pcVar14 = *pcVar14 + cVar43;
          cVar11 = (char)pcStackY_80 - (byte)*puVar41;
          pcVar17 = (char *)CONCAT22((short)((uint)pcStackY_80 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_80 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_80 >> 8),
                                                                 cVar11) + 0x34),cVar11));
          *pcVar14 = *pcVar14 + cVar43;
          bVar7 = cVar9 + 0x54U & (byte)*puVar47;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pbVar12 = (byte *)CONCAT31(uVar26,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar30 >> 8);
          pcVar14 = (char *)CONCAT22((short)((uint)uVar30 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar12,(char)uVar30));
          pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
          *(byte *)puVar47 = (byte)*puVar47 + (char)uVar30;
          uVar26 = (undefined3)((uint)pbVar12 >> 8);
          cVar9 = (byte)pbVar12 - *pbVar12;
          piVar23 = (int *)CONCAT31(uVar26,cVar9);
          puVar41 = (uint *)((int)puVar41 + (uint)((byte)pbVar12 < *pbVar12) + *piVar23);
          cVar9 = cVar9 + (char)*piVar23;
          pbVar12 = (byte *)CONCAT31(uVar26,cVar9);
          *pbVar12 = *pbVar12 + cVar9;
code_r0x004030df:
          *pcVar14 = *pcVar14 + cVar45;
          bVar7 = *pbVar12;
          bVar8 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar8;
          *(byte **)(pcVar17 + -0x41) =
               (byte *)((int)puVar41 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pcVar17 + -0x41));
          *pbVar12 = *pbVar12 + bVar8;
          uVar26 = (undefined3)((uint)pbVar12 >> 8);
          bVar8 = bVar8 | (byte)*puVar41;
          *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar26,bVar8 + 0x7b);
          *pcVar14 = *pcVar14 + bVar8 + 0x7b;
          pbVar12 = (byte *)((int)puVar41 + CONCAT31(uVar26,bVar8 - 8) + -1);
          *pbVar12 = *pbVar12 + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar44 = puVar41 + (uint)bVar56 * -2 + 1;
        out(*puVar41,uVar37);
        pbVar40 = unaff_EBP + 1;
        pbStackY_48 = unaff_EBP;
      }
      bVar7 = cVar9 - bVar54;
      pbVar40 = (byte *)((int)puVar44 + (int)puVar48 * 2);
      bVar54 = CARRY1(*pbVar40,bVar7);
      *pbVar40 = *pbVar40 + bVar7;
code_r0x00402ef9:
      pcVar14 = (char *)CONCAT31(uVar26,bVar7 - bVar54);
      pbVar40 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar40 = *pbVar40 + (bVar7 - bVar54);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar47;
  puVar29 = puVar47 + 0x2828000;
  bVar7 = (byte)puVar38;
  bVar54 = (byte)*puVar29 < bVar7;
  *(byte *)puVar29 = (byte)*puVar29 - bVar7;
  bVar7 = (byte)pbVar40 + *pbVar40;
  piVar23 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7 + bVar54);
  puVar29 = puVar48;
  uVar51 = uVar49;
  if (CARRY1((byte)pbVar40,*pbVar40) || CARRY1(bVar7,bVar54)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar14 = *pcVar14 + bVar8;
  uVar51 = uVar49;
  uVar52 = uVar50;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar43) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45 + unaff_EBP[(int)pcVar14 * 4],uVar28));
  unaff_EDI[(int)pcVar14] = unaff_EDI[(int)pcVar14] + bVar8;
  goto code_r0x0040254a;
}


