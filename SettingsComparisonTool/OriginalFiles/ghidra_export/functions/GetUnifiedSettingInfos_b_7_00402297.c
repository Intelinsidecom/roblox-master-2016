/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402297
 * Raw Name    : <GetUnifiedSettingInfos>b__7
 * Demangled   : <GetUnifiedSettingInfos>b__7
 * Prototype   : pointer <GetUnifiedSettingInfos>b__7(uint * s, uint * param_2)
 * Local Vars  : pbStackY_60, pcStackY_98, puStackY_48, puStackY_4c, pbStack_24, uStackY_44, uStack_1c, pbStack_20, uStack_15, uStack_18, uStack_c, uStack_14, uVar2, iVar1, uVar4, pcVar3, uVar6, uVar5, cVar8, bVar7, bVar10, cVar9, cVar12, bVar11, pbVar13, in_EAX, pcVar15, uVar14, pbVar17, iVar16, pcVar19, pbVar18, uVar21, uVar20, piVar23, puVar22, piVar25, pcVar24, uVar27, puVar26, extraout_ECX, iVar28, extraout_ECX_01, extraout_ECX_00, uVar29, extraout_ECX_02, bVar31, cVar30, uVar33, bVar32, bVar35, uVar34, puVar37, uVar36, pbVar39, pbVar38, param_2, uVar41, puVar40, unaff_EBX, uVar42, puVar44, pbVar43, unaff_EBP, cVar45, puVar46, unaff_ESI, unaff_EDI, puVar47, puVar49, puVar48, uVar50, in_ES, in_CS, uVar51, uVar52, in_SS, bVar53, in_GS_OFFSET, bVar54, in_AF, in_IF, in_TF, bVar56, bVar55, uVar57, in_NT, in_stack_ffffffd4, s
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

undefined * __fastcall <GetUnifiedSettingInfos>b__7(uint *s,uint *param_2)

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
  byte *pbVar13;
  undefined3 uVar27;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  byte *pbVar18;
  int3 iVar28;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  char *pcVar24;
  int *piVar25;
  ushort *puVar26;
  char cVar30;
  undefined2 uVar33;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar31;
  byte bVar32;
  undefined2 uVar34;
  undefined4 uVar29;
  byte bVar35;
  undefined2 uVar36;
  uint *puVar37;
  byte *pbVar38;
  byte *pbVar39;
  undefined3 uVar41;
  uint *puVar40;
  undefined1 uVar42;
  char cVar45;
  int unaff_EBX;
  byte *pbVar43;
  uint *puVar44;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar46;
  uint *puVar47;
  byte *unaff_EDI;
  uint *puVar48;
  uint *puVar49;
  ushort in_ES;
  ushort uVar50;
  ushort uVar51;
  ushort in_CS;
  ushort in_SS;
  ushort uVar52;
  int in_GS_OFFSET;
  bool bVar53;
  byte in_AF;
  bool bVar54;
  byte in_TF;
  byte in_IF;
  bool bVar55;
  bool bVar56;
  byte in_NT;
  undefined8 uVar57;
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
  byte *pbVar17;
  
  bVar55 = false;
                    /* .NET CLR Managed Code */
  pbVar43 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x2a),
                                      (char)unaff_EBX));
code_r0x0040229a:
  *in_EAX = *in_EAX + (byte)in_EAX;
  bVar7 = (byte)in_EAX | *pbVar43;
  pbVar13 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
  if (bVar7 != 0) {
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
    *pbVar13 = *pbVar13 + bVar7;
    s = (uint *)CONCAT22((short)((uint)s >> 0x10),
                         CONCAT11((byte)((uint)s >> 8) | (byte)*param_2,(char)s));
    bVar10 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    puVar46 = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar10,bVar7) + *(int *)pbVar13);
    pbVar13 = pbVar13 + *(int *)pbVar13;
    cVar8 = (char)pbVar13 - *pbVar13;
    piVar25 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
    *(char *)piVar25 = (char)*piVar25 + cVar8;
    in_EAX = (byte *)((int)piVar25 + *piVar25);
    uVar14 = *s;
    *(byte *)s = (byte)*s + (byte)param_2;
    uVar50 = in_ES;
    if (!CARRY1((byte)uVar14,(byte)param_2)) goto code_r0x004022ea;
    goto code_r0x004022be;
  }
  *pbVar13 = *pbVar13;
  puVar46 = unaff_ESI + 1;
  out(*unaff_ESI,(short)param_2);
  pbVar13 = pbVar13 + -*(int *)pbVar13;
  do {
    *(byte *)param_2 = (byte)*param_2 + (char)s;
    bVar7 = (char)pbVar13 - *pbVar13;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
    *pbVar43 = *pbVar43 + (char)param_2;
    *pbVar43 = *pbVar43 ^ bVar7;
code_r0x004022b3:
    *(byte *)param_2 = (byte)*param_2 + (char)((uint)s >> 8);
    bVar10 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar10;
    *pbVar43 = *pbVar43 + bVar10;
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar10;
    *(byte **)(pbVar43 + 0x2c) =
         (byte *)((int)puVar46 + (uint)CARRY1(bVar7,bVar10) + *(int *)(pbVar43 + 0x2c));
code_r0x004022be:
    *in_EAX = *in_EAX + (char)in_EAX;
    s = (uint *)CONCAT31((int3)((uint)s >> 8),(byte)s | (byte)*param_2);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
    puVar37 = param_2;
    uVar50 = in_ES;
code_r0x004022c6:
    *in_EAX = *in_EAX + (byte)in_EAX;
    uVar27 = (undefined3)((uint)in_EAX >> 8);
    bVar7 = (byte)in_EAX | (byte)*puVar37;
    pcVar15 = (char *)CONCAT31(uVar27,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      *pcVar15 = *pcVar15 + bVar7;
    }
    *pcVar15 = *pcVar15 + bVar7;
    cVar8 = bVar7 + 6;
    pbVar13 = (byte *)CONCAT31(uVar27,cVar8);
    *(byte *)puVar46 = (byte)*puVar46 + 1;
    *pbVar13 = *pbVar13 + cVar8;
    param_2 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((byte)((uint)puVar37 >> 8) | pbVar43[0x2f],(char)puVar37));
    *pbVar13 = *pbVar13 + cVar8;
    bVar7 = (byte)((uint)s >> 8) | *pbVar13;
    s = (uint *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar7,(char)s));
    in_EAX = pbVar13 + *(int *)pbVar13;
    bVar53 = CARRY1(*pbVar43,bVar7);
    *pbVar43 = *pbVar43 + bVar7;
code_r0x004022e0:
    puVar37 = param_2;
    in_ES = uVar50;
    if (!bVar53) goto code_r0x0040230b;
    bVar10 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar10;
    s = (uint *)CONCAT22((short)((uint)s >> 0x10),
                         CONCAT11((byte)((uint)s >> 8) | (byte)*param_2,(char)s));
    bVar7 = *in_EAX;
    *in_EAX = *in_EAX + bVar10;
    puVar46 = (uint *)((int)puVar46 + (-(uint)CARRY1(bVar7,bVar10) - *(int *)in_EAX));
code_r0x004022ea:
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *in_EAX);
code_r0x004022ef:
    *(char *)((int)in_EAX * 2) = *(char *)((int)in_EAX * 2) + (char)in_EAX;
    *(byte *)s = (byte)*s + (char)param_2;
    puVar37 = param_2;
    in_ES = uVar50;
    in_SS = uStack_c;
    while( true ) {
      uVar27 = (undefined3)((uint)in_EAX >> 8);
      bVar7 = (byte)in_EAX | (byte)*puVar37;
      pbVar13 = (byte *)CONCAT31(uVar27,bVar7);
      bVar10 = (byte)((uint)s >> 8);
      if ((POPCOUNT(bVar7) & 1U) == 0) break;
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((byte)((uint)puVar37 >> 8) | pbVar43[0x28],(char)puVar37))
      ;
      *pbVar13 = *pbVar13 + bVar7;
      uVar33 = (undefined2)((uint)s >> 0x10);
      cVar8 = (char)s;
      bVar10 = bVar10 | *pbVar13;
      s = (uint *)CONCAT22(uVar33,CONCAT11(bVar10,cVar8));
      bVar35 = *pbVar13;
      in_EAX = (byte *)CONCAT31(uVar27,bVar7 + bVar35);
      bVar11 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar10;
      param_2 = puVar37;
      if (!CARRY1(bVar11,bVar10)) goto code_r0x004022b3;
      *in_EAX = *in_EAX + bVar7 + bVar35;
      bVar10 = bVar10 | (byte)*puVar37;
      s = (uint *)CONCAT22(uVar33,CONCAT11(bVar10 + *in_EAX,cVar8));
      in_EAX = in_EAX + (uint)CARRY1(bVar10,*in_EAX) + *(int *)in_EAX;
      *(byte *)puVar37 = (byte)*puVar37 + cVar8;
      bVar10 = (byte)pbVar43;
      bVar53 = bVar10 < *(byte *)((int)puVar46 + 2);
      bVar7 = *(byte *)((int)puVar46 + 2);
      cVar8 = bVar10 - bVar7;
      pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),cVar8);
      unaff_ESI = puVar46;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040229a;
      uVar50 = in_ES;
      if ((char)bVar10 < (char)bVar7) goto code_r0x004022c6;
code_r0x004022f3:
      *(byte **)unaff_EDI = (byte *)((int)puVar37 + (uint)bVar53 + *(int *)unaff_EDI);
    }
    *pbVar13 = *pbVar13 + bVar7;
    cVar8 = bVar7 + 0xd;
    pcVar15 = (char *)CONCAT31(uVar27,cVar8);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar15;
    *pcVar15 = *pcVar15 + cVar8;
    *(char *)((int)pcVar15 * 2) = *(char *)((int)pcVar15 * 2) + bVar10;
    *pcVar15 = *pcVar15 + cVar8;
    in_EAX = (byte *)CONCAT31(uVar27,cVar8);
    *in_EAX = *in_EAX + cVar8;
code_r0x0040230b:
    param_2 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                               CONCAT11((char)((uint)puVar37 >> 8) + pbVar43[0x34],(char)puVar37));
    cVar8 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar8;
    pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                               CONCAT11((byte)((uint)pbVar43 >> 8) | unaff_EBP[-0x79],(char)pbVar43)
                              );
    *in_EAX = *in_EAX + cVar8;
    pcVar15 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar8 + '\x02');
    while( true ) {
      pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                 CONCAT11((char)((uint)pbVar43 >> 8) + pbVar43[-0x7a],(char)pbVar43)
                                );
      cVar8 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar8;
      uVar27 = (undefined3)((uint)pcVar15 >> 8);
      cVar9 = cVar8 + '{';
      pbVar13 = (byte *)CONCAT31(uVar27,cVar9);
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      pbVar39 = (byte *)((int)param_2 + (int)pbVar13);
      *pbVar39 = *pbVar39 + cVar9;
      if ((POPCOUNT(*pbVar39) & 1U) != 0) break;
      *pbVar13 = *pbVar13 + cVar9;
      piVar25 = (int *)CONCAT31(uVar27,cVar8 + -10);
      uVar14 = (int)piVar25 + *piVar25;
      bVar7 = (byte)uVar14;
      unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar7;
      in_EAX = (byte *)(uVar14 ^ 0x7d0a0000);
      *in_EAX = bVar7;
      pbVar13 = (byte *)((int)param_2 + (int)in_EAX);
      *pbVar13 = *pbVar13 + bVar7;
      if ((POPCOUNT(*pbVar13) & 1U) != 0) goto code_r0x004022be;
      *in_EAX = *in_EAX + bVar7;
      pcVar15 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7 + 0x69);
code_r0x00402342:
      uVar50 = in_ES;
      uVar27 = (undefined3)((uint)pcVar15 >> 8);
      bVar7 = (char)pcVar15 + *pcVar15;
      pcVar15 = (char *)CONCAT31(uVar27,bVar7);
      *pcVar15 = *pcVar15 + bVar7;
      *pcVar15 = *pcVar15 + bVar7;
      *(byte *)(puVar46 + 0x800000) = (byte)puVar46[0x800000] + (char)s;
      cVar9 = (char)pbVar43;
      pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                 CONCAT11((char)((uint)pbVar43 >> 8) + pbVar43[-0x7a],cVar9));
      *pcVar15 = *pcVar15 + bVar7;
      bVar53 = 0xfd < bVar7;
      cVar8 = bVar7 + 2;
      in_EAX = (byte *)CONCAT31(uVar27,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x004022e0;
      *in_EAX = *in_EAX + cVar8;
      cVar8 = bVar7 + 0x71;
      in_EAX = (byte *)CONCAT31(uVar27,cVar8);
      bVar10 = *in_EAX;
      *in_EAX = *in_EAX + cVar8;
      uStack_c = uVar50;
      if (SCARRY1(bVar10,cVar8) == (char)*in_EAX < '\0') {
        *(byte *)((int)param_2 + (int)in_EAX) = *(byte *)((int)param_2 + (int)in_EAX) + cVar9;
        goto code_r0x004022ef;
      }
      *in_EAX = *in_EAX + cVar8;
      in_EAX = (byte *)CONCAT31(uVar27,bVar7 + 0x73);
      bVar53 = (POPCOUNT(bVar7 + 0x73) & 1U) == 0;
      puVar37 = param_2;
      in_ES = uVar50;
code_r0x00402366:
      if (!bVar53) {
        bVar53 = CARRY1(*in_EAX,(byte)in_EAX);
        *in_EAX = *in_EAX + (byte)in_EAX;
        goto code_r0x004022f3;
      }
code_r0x00402368:
      *in_EAX = *in_EAX + (char)in_EAX;
      cVar8 = (char)in_EAX + 'o';
      pcVar15 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar8);
      *pcVar15 = *pcVar15 + cVar8;
      param_2 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(byte)puVar37 | *pbVar43);
      pcVar15 = pcVar15 + 0x37280512;
      bVar10 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar10;
      s = (uint *)CONCAT22((short)((uint)s >> 0x10),
                           CONCAT11((byte)((uint)s >> 8) | bRam7d160243,(char)s));
      pbVar13 = (byte *)((int)param_2 + (int)pcVar15);
      bVar7 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar10;
      pcRam00008e7d = pcVar15 + (int)(pcRam00008e7d + CARRY1(bVar7,bVar10));
      bVar53 = SCARRY1(bVar10,'\x02');
      bVar10 = bVar10 + 2;
      puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar10);
code_r0x0040238b:
      if (bVar53 == (char)bVar10 < '\0') {
        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
        pcVar15 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),(char)puVar26 + '\x12');
code_r0x00402391:
        pcVar15 = pcVar15 + 0x42802;
        *pbVar43 = *pbVar43 + (char)((uint)s >> 8);
code_r0x00402399:
        bVar7 = (byte)pbVar43 | (byte)((uint)s >> 8);
        uVar27 = (undefined3)((uint)pcVar15 >> 8);
        pcVar15 = (char *)CONCAT31(uVar27,1);
        *pcVar15 = *pcVar15 + '\x01';
        pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                   CONCAT11((char)((uint)pbVar43 >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)pbVar43 >> 8),bVar7) +
                                                     -0x72),bVar7));
        *pcVar15 = *pcVar15 + '\x01';
        uVar14 = CONCAT31(uVar27,0x14);
        pcVar15 = (char *)(uVar14 + 0x19061215 + (uint)(0x1f9edfd < uVar14));
        uVar2 = (uint)(0xe4ffffec < uVar14 + 0xfe061202 ||
                      CARRY4(uVar14 + 0x19061215,(uint)(0x1f9edfd < uVar14)));
        uVar14 = *puVar46;
        uVar20 = *puVar46;
        *puVar46 = (uint)(pcVar15 + uVar20 + uVar2);
        if ((SCARRY4(uVar14,(int)pcVar15) != SCARRY4((int)(pcVar15 + uVar20),uVar2)) !=
            (int)*puVar46 < 0) {
          bVar10 = (byte)pcVar15;
          *pcVar15 = *pcVar15 + bVar10;
          iVar16 = CONCAT31((int3)((uint)pcVar15 >> 8),bVar10 + 2) + 0x847d + (uint)(0xfd < bVar10);
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*param_2);
          pcVar15 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x12') + 0x134f26);
          *pbVar43 = *pbVar43 + bVar7;
code_r0x004023cd:
          out(*puVar46,(short)param_2);
          uVar14 = *param_2;
          *(byte *)param_2 = (byte)*param_2 + (byte)s;
          in_EAX = (byte *)(pcVar15 + (uint)CARRY1((byte)uVar14,(byte)s) + *(int *)unaff_EDI);
          bVar56 = SCARRY1((char)param_2,(byte)*s);
          bVar7 = (char)param_2 + (byte)*s;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar7);
          bVar54 = (char)bVar7 < '\0';
          puVar46 = puVar46 + 1;
code_r0x004023d6:
          bVar53 = (POPCOUNT(bVar7) & 1U) == 0;
          in_ES = (ushort)uStack_14;
          puVar37 = param_2;
          if (bVar56 != bVar54) {
            *in_EAX = *in_EAX + (char)in_EAX;
code_r0x004023db:
            cVar9 = (char)in_EAX;
            uVar27 = (undefined3)((uint)in_EAX >> 8);
            cVar8 = cVar9 + '\x02';
            in_EAX = (byte *)CONCAT31(uVar27,cVar8);
            if ((POPCOUNT(cVar8) & 1U) != 0) {
              pbVar13 = (byte *)((int)puVar37 + (int)in_EAX);
              *pbVar13 = *pbVar13 + cVar8;
              bVar53 = (POPCOUNT(*pbVar13) & 1U) == 0;
              goto code_r0x00402366;
            }
            *in_EAX = *in_EAX + cVar8;
            cVar9 = cVar9 + '\x15';
            in_EAX = (byte *)CONCAT31(uVar27,cVar9);
            *(byte *)s = (byte)*s | (byte)puVar37;
            *unaff_EDI = *unaff_EDI | (byte)puVar37;
            if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
              *in_EAX = *in_EAX + cVar9;
              goto code_r0x00402425;
            }
            *in_EAX = *in_EAX + cVar9;
            cVar9 = cVar9 + (byte)*puVar37;
            pcVar15 = (char *)CONCAT31(uVar27,cVar9);
            if ((POPCOUNT(cVar9) & 1U) == 0) {
              *pcVar15 = *pcVar15 + cVar9;
              puVar26 = (ushort *)CONCAT31(uVar27,cVar9 + 'o');
              param_2 = puVar37;
code_r0x004023f6:
              uVar14 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)s;
              cVar8 = (char)puVar26;
              if (SCARRY1((byte)uVar14,(char)s) == (char)(byte)*param_2 < '\0') {
                in_ES = *puVar26;
                pbVar13 = (byte *)((int)param_2 + (int)puVar26);
                bVar53 = SCARRY1(*pbVar13,cVar8);
                *pbVar13 = *pbVar13 + cVar8;
                bVar10 = *pbVar13;
                goto code_r0x0040238b;
              }
              *(char *)puVar26 = (char)*puVar26 + cVar8;
              cVar8 = cVar8 + '\x02';
              pcVar15 = (char *)CONCAT31((int3)((uint)puVar26 >> 8),cVar8);
              puVar37 = puVar46;
              if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x00402402:
                *pcVar15 = *pcVar15 + (char)pcVar15;
                uVar27 = (undefined3)((uint)pcVar15 >> 8);
                piVar25 = (int *)CONCAT31(uVar27,(char)pcVar15 + 'r');
                *piVar25 = *piVar25 + 0x7b027000;
                cVar8 = (char)*piVar25;
                pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                pbVar13 = (byte *)((int)param_2 + (int)pcVar15);
                *pbVar13 = *pbVar13 + cVar8;
                puVar46 = puVar37;
                if ((POPCOUNT(*pbVar13) & 1U) == 0) {
                  *pcVar15 = *pcVar15 + cVar8;
                  bVar10 = cVar8 + '{' + *(char *)CONCAT31(uVar27,cVar8 + '{');
                  piVar25 = (int *)CONCAT31(uVar27,bVar10);
                  pbVar13 = (byte *)((int)piVar25 + (int)unaff_EBP);
                  bVar7 = *pbVar13;
                  *pbVar13 = *pbVar13 + bVar10;
                  *piVar25 = (*piVar25 - (int)piVar25) - (uint)CARRY1(bVar7,bVar10);
                  *(byte *)param_2 = (byte)*param_2 + (char)s;
                  puVar46 = puVar37 + 1;
                  out(*puVar37,(short)param_2);
                  cVar8 = bVar10 - (char)*piVar25;
                  in_EAX = (byte *)CONCAT31(uVar27,cVar8);
                  *(byte *)puVar46 = (byte)*puVar46 + cVar8;
                  puVar37 = param_2;
code_r0x00402425:
                  uStack_14 = CONCAT22(uStack_14._2_2_,in_SS);
                  out(*puVar46,(short)puVar37);
                  uVar14 = *puVar37;
                  *(byte *)puVar37 = (byte)*puVar37 + (byte)s;
                  uVar14 = (uint)CARRY1((byte)uVar14,(byte)s);
                  pbVar13 = (byte *)((int)s + *s) + uVar14;
                  s = (uint *)CONCAT31((int3)((uint)pbVar13 >> 8),
                                       (char)pbVar13 + *pbVar13 +
                                       (CARRY4((uint)s,*s) || CARRY4((int)s + *s,uVar14)));
                  cRam130a0000 = cRam130a0000 - (char)((uint)pbVar43 >> 8);
                  param_2 = puVar37;
                  puVar46 = puVar46 + 1;
code_r0x00402435:
                  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                             (byte)param_2 | (byte)*param_2);
                  bVar7 = *in_EAX;
                  *in_EAX = *in_EAX + (char)in_EAX;
                  s = (uint *)CONCAT22((short)((uint)s >> 0x10),
                                       CONCAT11((byte)((uint)s >> 8) | bVar7 | bRam7d170243,(char)s)
                                      );
code_r0x00402442:
                  pbVar13 = (byte *)((int)param_2 + (int)in_EAX);
                  bVar10 = *pbVar13;
                  bVar7 = (byte)in_EAX;
                  *pbVar13 = *pbVar13 + bVar7;
                  uVar14 = *param_2;
                  uVar20 = *param_2;
                  *param_2 = (uint)((byte *)(uVar20 + (int)s) + CARRY1(bVar10,bVar7));
                  puVar37 = param_2;
                  if ((SCARRY4(uVar14,(int)s) !=
                      SCARRY4((int)(uVar20 + (int)s),(uint)CARRY1(bVar10,bVar7))) !=
                      (int)*param_2 < 0) {
                    *in_EAX = *in_EAX + bVar7;
                    bVar56 = SCARRY1(bVar7,'\x02');
                    bVar7 = bVar7 + 2;
                    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
code_r0x0040244f:
                    bVar54 = (char)bVar7 < '\0';
                    if (bVar56 == bVar54) {
code_r0x00402451:
                      *in_EAX = *in_EAX + (char)in_EAX;
                      bVar7 = (char)in_EAX + 0x12U | (byte)*param_2;
                      pcVar15 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
                      cRam162b0000 = cRam162b0000 - bVar7;
code_r0x0040245d:
                      pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),
                                                 (byte)pbVar43 | (byte)((uint)s >> 8));
                      cVar8 = in((short)param_2);
                      puVar26 = (ushort *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8);
                      *(char *)puVar26 = (char)*puVar26 + cVar8;
                      *(byte *)param_2 = (byte)*param_2 + cVar8;
                      if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
code_r0x00402466:
                        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
                        uVar27 = (undefined3)((uint)puVar26 >> 8);
                        bVar7 = (char)puVar26 + 0x13U | (byte)*param_2;
                        pcVar15 = (char *)CONCAT31(uVar27,bVar7);
                        cVar8 = (byte)s + *pbVar43;
                        puVar37 = (uint *)CONCAT31((int3)((uint)s >> 8),cVar8);
                        cRam1b000019 = cRam1b000019 + '\x01';
                        uVar14 = (uint)CARRY1((byte)s,*pbVar43);
                        iVar16 = *(int *)pbVar43;
                        iVar1 = *(int *)pbVar43;
                        *(byte **)pbVar43 = (byte *)(iVar1 + (int)puVar37) + uVar14;
                        if ((SCARRY4(iVar16,(int)puVar37) != SCARRY4(iVar1 + (int)puVar37,uVar14))
                            != *(int *)pbVar43 < 0) {
                          *pcVar15 = *pcVar15 + bVar7;
                          iVar16 = CONCAT31(uVar27,bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
                          uVar27 = (undefined3)((uint)iVar16 >> 8);
                          bVar7 = (char)iVar16 + 0x12;
                          s = (uint *)CONCAT22((short)((uint)s >> 0x10),
                                               CONCAT11((byte)((uint)s >> 8) |
                                                        *(byte *)CONCAT31(uVar27,bVar7),cVar8));
                          in_AF = 9 < (bVar7 & 0xf) | in_AF;
                          uVar14 = CONCAT31(uVar27,bVar7 + in_AF * -6) & 0xffffff0f;
                          pcVar15 = (char *)CONCAT22((short)(uVar14 >> 0x10),
                                                     CONCAT11((char)((uint)iVar16 >> 8) - in_AF,
                                                              (char)uVar14));
code_r0x00402486:
                          *pcVar15 = *pcVar15 + (char)pcVar15;
                          puVar48 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                                     (byte)param_2 | (byte)*param_2);
                          uVar33 = (undefined2)((uint)pbVar43 >> 0x10);
                          bVar7 = (byte)((uint)pbVar43 >> 8) | (byte)((uint)param_2 >> 8);
                          in_EAX = (byte *)(pcVar15 + 0x1b000019);
                          puVar37 = (uint *)((int)puVar48 + (int)in_EAX);
                          bVar53 = CARRY4((uint)s,*puVar37);
                          pbVar13 = (byte *)((int)s + *puVar37);
                          s = (uint *)(pbVar13 + ((char *)0xe4ffffe6 < pcVar15));
                          piVar25 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                          *piVar25 = (int)((int)s + (uint)(bVar53 ||
                                                          CARRY4((uint)pbVar13,
                                                                 (uint)((char *)0xe4ffffe6 < pcVar15
                                                                       ))) + *piVar25);
                          pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(bVar7 + *(char *)(CONCAT22(
                                                  uVar33,CONCAT11(bVar7,(char)pbVar43)) + -0x79),
                                                  (char)pbVar43));
                          param_2 = puVar48;
code_r0x0040249e:
                          bVar7 = (byte)in_EAX;
                          *in_EAX = *in_EAX + bVar7;
                          uVar27 = (undefined3)((uint)in_EAX >> 8);
                          cVar8 = bVar7 + 2;
                          in_EAX = (byte *)CONCAT31(uVar27,cVar8);
                          puVar37 = param_2;
                          if (0xfd < bVar7) {
                            bVar10 = *in_EAX;
                            *in_EAX = *in_EAX + cVar8;
                            uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
                            if (SCARRY1(bVar10,cVar8) == (char)*in_EAX < '\0')
                            goto code_r0x00402435;
                            *in_EAX = *in_EAX + cVar8;
                            cVar8 = bVar7 + 4;
                            pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                            if ((POPCOUNT(cVar8) & 1U) != 0) {
                              *(byte *)param_2 = (byte)*param_2 + (char)s;
                              in_EAX = (byte *)(pcVar15 + -0x7d170243);
                              goto code_r0x00402442;
                            }
                            *pcVar15 = *pcVar15 + cVar8;
                            cVar8 = bVar7 + 6;
                            pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                            if ((POPCOUNT(cVar8) & 1U) == 0) {
                              while( true ) {
                                cVar8 = (char)pcVar15;
                                *pcVar15 = *pcVar15 + cVar8;
                                uVar27 = (undefined3)((uint)pcVar15 >> 8);
                                pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '}');
                                puVar46 = (uint *)((int)puVar46 + -1);
                                *pcVar15 = *pcVar15 + cVar8 + '}';
                                cVar9 = cVar8 + '\x7f';
                                in_EAX = (byte *)CONCAT31(uVar27,cVar9);
                                if ((POPCOUNT(cVar9) & 1U) != 0) break;
                                *in_EAX = *in_EAX + cVar9;
                                cVar9 = cVar8 + -0x7f;
                                in_EAX = (byte *)CONCAT31(uVar27,cVar9);
                                if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00402451;
                                *in_EAX = *in_EAX + cVar9;
                                pcVar15 = (char *)CONCAT31(uVar27,cVar8 + -2);
                                unaff_EDI = unaff_EDI + -1;
                                while( true ) {
                                  cVar8 = (char)pcVar15;
                                  *pcVar15 = *pcVar15 + cVar8;
                                  uVar27 = (undefined3)((uint)pcVar15 >> 8);
                                  cVar9 = cVar8 + '\x02';
                                  pcVar15 = (char *)CONCAT31(uVar27,cVar9);
                                  if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040245d;
                                  *pcVar15 = *pcVar15 + cVar9;
                                  pcVar15 = (char *)(CONCAT31(uVar27,cVar8 + 'q') + 1);
                                  *pcVar15 = *pcVar15 + (byte)pcVar15;
                                  uVar27 = (undefined3)((uint)pcVar15 >> 8);
                                  bVar7 = (byte)pcVar15 | (byte)*param_2;
                                  pcVar15 = (char *)CONCAT31(uVar27,bVar7);
                                  if ((POPCOUNT(bVar7) & 1U) != 0) {
                                    s = (uint *)((int)s + *param_2);
                                    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                                               (char)param_2 + (byte)*param_2);
                                    unaff_EDI = (byte *)((uint)unaff_EDI | (uint)puVar46);
                                    puVar26 = (ushort *)(pcVar15 + 0x1b000019);
                                    goto code_r0x00402466;
                                  }
                                  *pcVar15 = *pcVar15 + bVar7;
                                  pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x6f);
                                  s = (uint *)((int)s + 1);
                                  *pcVar15 = *pcVar15 + bVar7 + 0x6f;
                                  uVar33 = (undefined2)((uint)pbVar43 >> 0x10);
                                  bVar7 = (byte)pbVar43;
                                  bVar10 = (byte)((uint)pbVar43 >> 8) | (byte)*param_2;
                                  in_SS = (ushort)uStack_14;
                                  uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
                                  cVar9 = (char)(pcVar15 + -0x21000001);
                                  uVar27 = (undefined3)((uint)(pcVar15 + -0x21000001) >> 8);
                                  cVar8 = cVar9 + -0x13;
                                  pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                                  cVar45 = bVar10 + *(char *)(CONCAT22(uVar33,CONCAT11(bVar10,bVar7)
                                                                      ) + -0x73);
                                  pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(cVar45,bVar7));
                                  *pcVar15 = *pcVar15 + cVar8;
                                  pcVar15 = (char *)(CONCAT31(uVar27,cVar9 + '\x19') | *param_2);
                                  if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0)
                                  goto code_r0x00402486;
                                  cVar8 = (char)pcVar15;
                                  *pcVar15 = *pcVar15 + cVar8;
                                  uVar27 = (undefined3)((uint)pcVar15 >> 8);
                                  pcVar19 = (char *)CONCAT31(uVar27,cVar8 + 'o');
                                  puVar37 = (uint *)((int)param_2 + 1);
                                  *pcVar19 = *pcVar19 + cVar8 + 'o';
                                  bVar7 = bVar7 | (byte)((uint)pcVar15 >> 8);
                                  pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '\\');
                                  cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)pbVar43 >> 8),
                                                                       bVar7) + -0x78);
                                  pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(cVar45,bVar7));
                                  *pcVar15 = *pcVar15 + cVar8 + '\\';
                                  pcVar15 = (char *)(CONCAT31(uVar27,cVar8 + -0x78) | *puVar37);
                                  cVar8 = (char)pcVar15;
                                  uVar27 = (undefined3)((uint)pcVar15 >> 8);
                                  if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                                    in_EAX = (byte *)CONCAT31(uVar27,cVar8 + '\x02');
                                    param_2 = puVar37;
                                    if ((POPCOUNT(cVar8 + '\x02') & 1U) == 0) goto code_r0x0040249e;
                                    goto code_r0x00402425;
                                  }
                                  *pcVar15 = *pcVar15 + cVar8;
                                  cVar9 = cVar8 + 'o';
                                  pcVar19 = (char *)CONCAT31(uVar27,cVar9);
                                  param_2 = (uint *)((int)param_2 + 2);
                                  *pcVar19 = *pcVar19 + cVar9;
                                  bVar7 = bVar7 | (byte)((uint)pcVar15 >> 8);
                                  pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(cVar45 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar43 >> 8),bVar7) + -0x79
                                                  ),bVar7));
                                  *pcVar19 = *pcVar19 + cVar9;
                                  pcVar15 = (char *)(CONCAT31(uVar27,cVar8 + 'z') | 2);
                                  unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                  cVar8 = (char)pcVar15;
                                  *pcVar15 = *pcVar15 + cVar8;
                                  cVar9 = cVar8 + '\x02';
                                  pcVar15 = (char *)CONCAT31(uVar27,cVar9);
                                  if (SCARRY1(cVar8,'\x02') != cVar9 < '\0') break;
                                  *pcVar15 = *pcVar15 + cVar9;
                                  cVar9 = cVar8 + '\n';
                                  *pbVar43 = *pbVar43 - cVar9;
                                  *(byte *)param_2 = *(byte *)param_2 + (char)s;
                                  unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                  *(char *)CONCAT31(uVar27,cVar9) =
                                       *(char *)CONCAT31(uVar27,cVar9) + cVar9;
                                  cVar45 = cVar8 + '\f';
                                  pcVar15 = (char *)CONCAT31(uVar27,cVar45);
                                  if (SCARRY1(cVar9,'\x02') == cVar45 < '\0') {
                                    *pcVar15 = *pcVar15 + cVar45;
                                    pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '\x13');
                                    uVar50 = in_ES;
                                    goto code_r0x0040254a;
                                  }
                                }
                              }
                              pbVar13 = (byte *)((int)param_2 + (int)in_EAX);
                              bVar56 = SCARRY1(*pbVar13,cVar9);
                              *pbVar13 = *pbVar13 + cVar9;
                              bVar7 = *pbVar13;
                              goto code_r0x0040244f;
                            }
                            cVar45 = (char)param_2;
                            cVar9 = cVar45 + *unaff_EDI;
                            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar9);
                            if (SCARRY1(cVar45,*unaff_EDI) != cVar9 < '\0') {
                              *pcVar15 = *pcVar15 + cVar8;
                              in_EAX = (byte *)CONCAT31(uVar27,bVar7 + 8);
                              goto code_r0x00402442;
                            }
                            cRam1b000013 = cRam1b000013 + '\x01';
                            goto code_r0x004023cd;
                          }
                          goto code_r0x00402425;
                        }
                        pcVar19 = pcVar15 + 2;
                        *pcVar19 = *pcVar19 + (char)((uint)param_2 >> 8);
                        s = puVar37;
                        if ((POPCOUNT(*pcVar19) & 1U) == 0) {
                          *pcVar15 = *pcVar15 + bVar7;
                          pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 2);
                          puVar37 = puVar46;
                          goto code_r0x00402402;
                        }
                        param_2 = (uint *)((int)param_2 - *puVar46);
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
              pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                         CONCAT11((char)((uint)pbVar43 >> 8) +
                                                  unaff_EBP[(int)pcVar15 * 4],(char)pbVar43));
              *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + cVar8;
              goto code_r0x00402391;
            }
            *pcVar15 = *pcVar15 + cVar9;
            in_EAX = (byte *)CONCAT31(uVar27,cVar9 + '\x02');
            goto code_r0x00402368;
          }
          goto code_r0x00402366;
        }
        goto code_r0x00402342;
      }
      LOCK();
      pcVar15 = *(char **)puVar26;
      *(ushort **)puVar26 = puVar26;
      UNLOCK();
      *(byte *)((int)param_2 + (int)pcVar15) =
           *(byte *)((int)param_2 + (int)pcVar15) + (char)pcVar15;
    }
  } while( true );
code_r0x0040254a:
  cVar8 = (char)pcVar15;
  *(char *)((int)pcVar15 * 2) = *(char *)((int)pcVar15 * 2) - cVar8;
  *pcVar15 = *pcVar15 + cVar8;
  pcVar19 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8 + *pcVar15);
  *pcVar19 = *pcVar19 + cVar8 + *pcVar15;
  uStack_18 = 0x4025;
  uVar57 = func_0x0f40255d();
  uVar52 = uStack_18;
code_r0x0040255d:
  uStack_18 = uVar52;
  pcVar15 = (char *)((ulonglong)uVar57 >> 0x20);
  piVar25 = (int *)uVar57;
  *piVar25 = (int)((int)piVar25 + *piVar25);
  uVar33 = (undefined2)((uint)pbVar43 >> 0x10);
  uVar42 = SUB41(pbVar43,0);
  cVar45 = (char)((uint)pbVar43 >> 8) + (char)((ulonglong)uVar57 >> 0x28);
  pcVar19 = (char *)CONCAT22(uVar33,CONCAT11(cVar45,uVar42));
  *piVar25 = (int)((int)piVar25 + *piVar25);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar57 >> 0x20);
  cVar8 = (char)uVar57;
  *(char *)piVar25 = (char)*piVar25 + cVar8;
  *(char *)piVar25 = (char)*piVar25 + cVar8;
  *(char *)piVar25 = (char)*piVar25 + cVar8;
  *pcVar15 = *pcVar15 + cVar8;
  *(char *)piVar25 = (char)*piVar25 + cVar8;
  *pcVar19 = *pcVar19 + cVar8;
  *(char *)piVar25 = (char)*piVar25 + cVar8;
  pcVar3 = (code *)swi(1);
  uVar57 = (*pcVar3)();
  pbVar39 = (byte *)((ulonglong)uVar57 >> 0x20);
  pbVar43 = (byte *)uVar57;
  bVar7 = *pbVar43;
  bVar10 = (byte)uVar57;
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar39 = *pbVar39 + bVar10 + CARRY1(bVar7,bVar10);
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar43 = *pbVar43 + bVar10;
  *pbVar43 = *pbVar43 + bVar10;
  cVar8 = (char)((ulonglong)uVar57 >> 0x28);
  *pbVar43 = *pbVar43 + cVar8;
  bVar7 = *pbVar43;
  uVar27 = (undefined3)((ulonglong)uVar57 >> 8);
  pcVar15 = (char *)CONCAT31(uVar27,bVar10 + bVar7);
  *pcVar15 = *pcVar15 + cVar8;
  cVar8 = bVar10 + bVar7 + *pcVar15;
  pcVar15 = (char *)CONCAT31(uVar27,cVar8);
  cVar9 = (char)((ulonglong)uVar57 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar9;
  *pcVar15 = *pcVar15 + cVar8;
  *pcVar15 = *pcVar15 + cVar9;
  *pcVar15 = *pcVar15 + cVar8;
  *puVar46 = (uint)(*puVar46 + (int)puVar46);
  cVar45 = cVar45 + unaff_EBP[(int)pcVar15 * 4];
  pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(cVar45,uVar42));
  pbVar43[(int)pcVar15] = pbVar43[(int)pcVar15] + cVar8;
  *(byte *)puVar46 = (byte)*puVar46 - cVar8;
  *pbVar39 = *pbVar39 + (char)extraout_ECX;
  bVar10 = cVar8 - *pcVar15;
  pcVar15 = (char *)CONCAT31(uVar27,bVar10);
  *pbVar43 = *pbVar43 + cVar9;
  *pbVar39 = *pbVar39 ^ bVar10;
  *pbVar39 = *pbVar39 + cVar45;
  *pcVar15 = *pcVar15 + bVar10;
  cRam12110000 = cRam12110000 + bVar10;
  bVar7 = *pbVar39;
  *pbVar39 = *pbVar39 + bVar10;
  pbVar13 = extraout_ECX;
  if (SCARRY1(bVar7,bVar10) != (char)*pbVar39 < '\0') {
code_r0x004025bd:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x12');
    *pcVar15 = *pcVar15 + (char)((uint)pbVar13 >> 8);
    pcVar15 = pcVar15 + -1;
    cVar8 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar8;
    bVar7 = (byte)((uint)pbVar43 >> 8) | unaff_EBP[-0x7b];
    pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),CONCAT11(bVar7,(char)pbVar43));
    *pcVar15 = *pcVar15 + cVar8;
    cRam0000847d = cRam0000847d + (char)pbVar39;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8 + '$');
    pbVar43[-0x7b] = pbVar43[-0x7b] + bVar7;
    pbVar17 = pbVar13;
code_r0x004025d8:
    bVar7 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar7;
    bVar53 = 0xf4 < bVar7;
    pcVar15 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar7 + 0xb);
    pbVar18 = unaff_EBP;
    do {
      bVar7 = (byte)pcVar15 + *pbVar17;
      uVar27 = (undefined3)((uint)pcVar15 >> 8);
      cVar8 = bVar7 + bVar53;
      cVar8 = cVar8 + *(char *)CONCAT31(uVar27,cVar8) +
              (CARRY1((byte)pcVar15,*pbVar17) || CARRY1(bVar7,bVar53));
      pcVar15 = (char *)CONCAT31(uVar27,cVar8);
      *(byte *)puVar46 = (byte)*puVar46 - cVar8;
      *pcVar15 = *pcVar15 + cVar8;
      iVar16 = *(int *)pbVar39;
      pbVar18[(int)pcVar15 * 4] = pbVar18[(int)pcVar15 * 4] + (char)((uint)pbVar43 >> 8);
      pcVar15[(int)pbVar18] = pcVar15[(int)pbVar18] + cVar8;
      pbVar38 = pbVar39 + (-1 - iVar16);
      *pcVar15 = *pcVar15 + cVar8;
      pbVar13 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar17 >> 8) | *pbVar38) + unaff_EDI[0x22],
                                          (char)pbVar17));
      *pcVar15 = *pcVar15 + cVar8;
      bVar35 = (char)pbVar38 - pbVar39[1 - iVar16];
      bVar11 = cVar8 - 0xf;
      pbVar17 = (byte *)CONCAT31(uVar27,bVar11);
      pbVar39 = (byte *)CONCAT22((short)((uint)pbVar38 >> 0x10),
                                 CONCAT11((char)((uint)pbVar38 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar38 >> 8),bVar35) +
                                                   -0x3f),bVar35));
      bVar7 = *pbVar17;
      bVar10 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar11;
      uVar52 = uVar50;
      if (SCARRY1(bVar10,bVar11)) {
        pbVar17 = (byte *)CONCAT31(uVar27,bVar11 + pbVar17[(int)pbVar18] + CARRY1(bVar7,bVar11));
        goto code_r0x00402677;
      }
      pbVar43 = pbVar43 + -1;
      *pbVar17 = *pbVar17 + bVar11;
      uVar14 = *puVar46;
      *pbVar13 = *pbVar13 + 1;
      pbVar39 = (byte *)CONCAT31((int3)((uint)pbVar39 >> 8),(bVar35 | (byte)uVar14) - (byte)*puVar46
                                );
      puVar46 = (uint *)((int)puVar46 +
                        (-(uint)(bVar11 < *pbVar17) - *(int *)CONCAT31(uVar27,bVar11 - *pbVar17)));
      unaff_EBP = (byte *)CONCAT31(uVar27,bVar11 - *pbVar17);
      *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
      bVar10 = (byte)pbVar18;
      *(byte *)puVar46 = (byte)*puVar46 + bVar10;
      bVar7 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar10;
      *(byte **)unaff_EDI = pbVar39 + (uint)CARRY1(bVar7,bVar10) + *(int *)unaff_EDI;
      uVar27 = (undefined3)((uint)pbVar18 >> 8);
      bVar10 = bVar10 | *pbVar39;
      pcVar15 = (char *)CONCAT31(uVar27,bVar10);
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        *pcVar15 = *pcVar15 + bVar10;
        uVar57 = CONCAT44(pbVar39,pcVar15 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar15 = *pcVar15 + bVar10;
      bVar7 = bVar10 + 0xd;
      pbVar17 = (byte *)CONCAT31(uVar27,bVar7);
      *puVar46 = *puVar46 | (uint)pbVar39;
      if (-1 < (int)*puVar46) {
code_r0x00402678:
        *pbVar17 = *pbVar17 + (char)pbVar17;
        pbVar13 = (byte *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar13 >> 8) | bRam7d160243,(char)pbVar13)
                                  );
        pbVar18 = unaff_EDI;
code_r0x00402680:
        bVar7 = (byte)pbVar13;
        *pbVar13 = *pbVar13 + bVar7;
        uVar27 = (undefined3)((uint)pbVar13 >> 8);
        piVar25 = (int *)((int)pbVar18 * 2 + 0x400009a);
        *piVar25 = *piVar25 + CONCAT31(uVar27,bVar7 + 2) + (uint)(0xfd < bVar7);
        pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                   CONCAT11((char)((uint)pbVar43 >> 8) + *(char *)((int)pbVar39 * 5)
                                            ,(char)pbVar43));
        *(char *)((int)pbVar39 * 2) = *(char *)((int)pbVar39 * 2) + bVar7 + 2;
        pbStack_20 = (byte *)CONCAT31(uVar27,bVar7 + 4);
        *pbVar18 = *pbVar18 - (bVar7 + 4);
code_r0x00402697:
        *pbStack_20 = *pbStack_20 + (char)pbStack_20;
        pbVar39 = pbVar39 + -*puVar46;
        unaff_EDI = pbStack_20;
code_r0x0040269b:
        pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),
                                   (byte)pbVar43 | (byte)((uint)pbVar17 >> 8));
        uVar29 = GlobalDescriptorTableRegister();
        *(undefined4 *)unaff_EDI = uVar29;
        cVar8 = (char)unaff_EDI;
        *pbVar39 = *pbVar39 + cVar8;
        if ((POPCOUNT(*pbVar39) & 1U) == 0) {
          *unaff_EDI = *unaff_EDI + cVar8;
          pcVar15 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8 + '\x13');
          pbVar13 = pbVar17;
          unaff_EDI = pbVar18;
code_r0x004026a8:
          uVar27 = (undefined3)((uint)pcVar15 >> 8);
          bVar10 = (byte)pcVar15 + 2 + cRam001b15fe + (0xfd < (byte)pcVar15);
          bVar7 = *pbVar43;
          bVar11 = (byte)pbVar43;
          *pbVar43 = *pbVar43 + bVar11;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar27,bVar10) + (uint)CARRY1(bVar7,bVar11);
          iVar16 = CONCAT31(uVar27,bVar10 + 2) + 0x917d + (uint)(0xfd < bVar10);
          cVar8 = (char)iVar16;
          uVar27 = (undefined3)((uint)iVar16 >> 8);
          bVar7 = cVar8 + 0x3a;
          pbStack_20 = (byte *)CONCAT31(uVar27,bVar7);
          *pbStack_20 = *pbStack_20 + bVar7;
          uVar41 = (undefined3)((uint)pbVar39 >> 8);
          bVar10 = (byte)pbVar39 | *pbVar39;
          uVar20 = CONCAT31(uVar27,cVar8 + '8');
          uVar14 = uVar20 + 0x1b00001b;
          pcVar15 = (char *)(uVar14 + (1 < bVar7) + *puVar46 +
                            (uint)(0xe4ffffe4 < uVar20 || CARRY4(uVar14,(uint)(1 < bVar7))));
          bVar7 = bVar10 + *pbVar13;
          pbVar39 = (byte *)CONCAT31(uVar41,bVar7);
          uVar27 = (undefined3)((uint)pcVar15 >> 8);
          cVar8 = (char)pcVar15;
          if (SCARRY1(bVar10,*pbVar13) != (char)bVar7 < '\0') {
            *pcVar15 = *pcVar15 + cVar8;
            pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '\x02');
            uVar33 = (undefined2)((uint)pbVar43 >> 0x10);
            cVar45 = (char)((uint)pbVar43 >> 8) + pbVar43[-0x68];
            pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(cVar45,bVar11));
            *pcVar15 = *pcVar15 + cVar8 + '\x02';
            bVar10 = cVar8 + 0x2a;
            pbVar17 = (byte *)CONCAT31(uVar27,bVar10);
            *pbVar17 = *pbVar17 | bVar10;
            bVar7 = *pbVar43;
            cVar9 = (char)((uint)pbVar13 >> 8);
            *pbVar43 = *pbVar43 + cVar9;
            pbVar18 = unaff_EDI;
            if (SCARRY1(bVar7,cVar9) != (char)*pbVar43 < '\0') {
              *pbVar17 = *pbVar17 + bVar10;
              bVar7 = cVar8 + 0x2c;
              if ((POPCOUNT(bVar7) & 1U) == 0) {
                *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                bVar10 = cVar8 + 0x59;
                pcVar15 = (char *)CONCAT31(uVar27,bVar10);
                *(char **)pbVar39 = pcVar15 + (uint)(0xd2 < bVar7) + *(int *)pbVar39;
                pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(cVar45 + pbVar43[-0x67],bVar11));
                *pcVar15 = *pcVar15 + bVar10;
                pbVar18 = (byte *)((CONCAT31(uVar27,cVar8 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar10));
                pbVar17 = pbVar13;
                uStack_1c = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar8 = (char)unaff_EDI + '\x02';
                unaff_EDI = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8);
                bVar53 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00402704:
                if (bVar53) {
                  *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                  cVar8 = (char)unaff_EDI + '\x02';
                  pcVar15 = (char *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8);
                  puVar37 = puVar46;
                  if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x0040270c:
                    uVar51 = in_ES;
                    cVar8 = (char)pcVar15;
                    *pcVar15 = *pcVar15 + cVar8;
                    uVar27 = (undefined3)((uint)pcVar15 >> 8);
                    bVar7 = cVar8 + 0x6f;
                    piVar25 = (int *)CONCAT31(uVar27,bVar7);
                    iVar16 = *piVar25;
                    *(byte *)piVar25 = (char)*piVar25 + bVar7;
                    in_ES = uVar51;
                    uVar52 = uStack_1c;
                    pbVar13 = pbVar39;
                    if ((char)*piVar25 != '\0' &&
                        SCARRY1((char)iVar16,bVar7) == (char)*piVar25 < '\0') {
                      *(byte *)piVar25 = (char)*piVar25 + bVar7;
                      bVar10 = cVar8 + 0x9c;
                      piVar25 = (int *)CONCAT31(uVar27,bVar10);
                      puVar46 = puVar37 + (int)pbVar18 * 2;
                      uVar14 = *puVar46;
                      uVar20 = *puVar46;
                      *puVar46 = (uint)(pbVar39 + uVar20 + (0xd2 < bVar7));
                      pbStack_20 = (byte *)CONCAT22(pbStack_20._2_2_,uVar51);
                      *piVar25 = (*piVar25 - (int)piVar25) -
                                 (uint)(CARRY4(uVar14,(uint)pbVar39) ||
                                       CARRY4((uint)(pbVar39 + uVar20),(uint)(0xd2 < bVar7)));
                      uVar14 = *puVar37;
                      *(byte *)puVar37 = (byte)*puVar37 + bVar10;
                      pbVar13 = pbStack_20;
                      if (!CARRY1((byte)uVar14,bVar10)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    pbStack_20 = pbVar13;
                    *(byte *)piVar25 = (char)*piVar25 + (byte)piVar25;
                    uVar27 = (undefined3)((uint)piVar25 >> 8);
                    bVar7 = (byte)piVar25 | *(byte *)((int)piVar25 + 0x400000d);
                    pcVar15 = (char *)CONCAT31(uVar27,bVar7);
                    if ((char)bVar7 < '\x01') {
                      bVar53 = pcVar15 < (char *)0x6fe1411;
                      pcVar15 = pcVar15 + -0x6fe1411;
                    }
                    else {
                      *pcVar15 = *pcVar15 + bVar7;
                      bVar11 = bVar7 + 0x28;
                      puVar46 = (uint *)CONCAT31(uVar27,bVar11);
                      *puVar46 = *puVar46 | (uint)puVar46;
                      bVar10 = *pbVar43;
                      cVar8 = (char)((uint)pbVar17 >> 8);
                      *pbVar43 = *pbVar43 + cVar8;
                      if (*pbVar43 == 0 || SCARRY1(bVar10,cVar8) != (char)*pbVar43 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar46 = (char)*puVar46 + bVar11;
                      pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x55);
                      puVar46 = puVar37 + (int)pbVar18 * 2;
                      bVar53 = CARRY4(*puVar46,(uint)pbVar39) ||
                               CARRY4((uint)(pbVar39 + *puVar46),(uint)(0xd2 < bVar11));
                      *puVar46 = (uint)(pbVar39 + *puVar46 + (0xd2 < bVar11));
                    }
                    while( true ) {
                      uVar27 = (undefined3)((uint)pcVar15 >> 8);
                      bVar7 = ((char)pcVar15 - *pcVar15) - bVar53;
                      puVar46 = (uint *)CONCAT31(uVar27,bVar7);
                      uVar14 = *puVar37;
                      *(byte *)puVar37 = (byte)*puVar37 + bVar7;
                      if (CARRY1((byte)uVar14,bVar7)) break;
                      pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),
                                                 (byte)pbVar43 | (byte)((uint)pbVar39 >> 8));
                      pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 2);
                      while( true ) {
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar8 = (char)pcVar15;
                        *pcVar15 = *pcVar15 + cVar8;
                        uVar27 = (undefined3)((uint)pcVar15 >> 8);
                        bVar7 = cVar8 + 2;
                        pcVar15 = (char *)CONCAT31(uVar27,bVar7);
                        uVar52 = (ushort)pbStack_20;
                        if (SCARRY1(cVar8,'\x02') != (char)bVar7 < '\0') break;
                        *pcVar15 = *pcVar15 + bVar7;
                        cVar45 = (char)pbVar39;
                        *pbVar18 = *pbVar18 - cVar45;
                        *pbVar39 = *pbVar39 + (char)pbVar17;
                        bVar10 = (cVar8 + '\t') - *(char *)CONCAT31(uVar27,cVar8 + '\t');
                        pbVar13 = (byte *)CONCAT31(uVar27,bVar10);
                        bVar7 = *pbVar13;
                        *pbVar13 = *pbVar13 + bVar10;
                        pbVar38 = pbVar17 + 1;
                        cVar8 = bVar10 - CARRY1(bVar7,bVar10);
                        pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                        *pcVar15 = *pcVar15 + cVar8;
                        *pcVar15 = *pcVar15 + cVar8;
                        *pcVar15 = *pcVar15 + cVar8;
                        *pcVar15 = *pcVar15 + cVar8;
                        cVar9 = (char)((uint)pbVar38 >> 8);
                        pbVar17[2] = pbVar17[2] + cVar9;
                        *pcVar15 = *pcVar15 + cVar8;
                        pcVar15 = (char *)(*(int *)pbVar38 * 0x170000);
                        *pcVar15 = *pcVar15;
                        *pcVar15 = *pcVar15;
                        *pbVar38 = *pbVar38;
                        uVar33 = (undefined2)((uint)pbVar43 >> 0x10);
                        cVar8 = (char)pbVar43;
                        bVar11 = (char)((uint)pbVar43 >> 8) + *(char *)((int)pbVar39 * 5);
                        pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(bVar11,cVar8));
                        pbVar43[(int)pcVar15] = pbVar43[(int)pcVar15];
                        *pcVar15 = *pcVar15 - cVar8;
                        *pbVar39 = *pbVar39 + (char)pbVar38;
                        uVar27 = (undefined3)((uint)pcVar15 >> 8);
                        bVar10 = -*pcVar15;
                        pbVar13 = (byte *)CONCAT31(uVar27,bVar10);
                        *pbVar43 = *pbVar43 + cVar45;
                        *pbVar39 = *pbVar39 ^ bVar10;
                        *pbVar39 = *pbVar39 + bVar10;
                        *pbVar13 = *pbVar13 + bVar10;
                        bVar7 = *pbVar13;
                        *pbVar13 = *pbVar13 + bVar10;
                        *(byte **)pbVar39 = pbVar39 + (uint)CARRY1(bVar7,bVar10) + *(int *)pbVar39;
                        bVar7 = *pbVar39;
                        *pbVar39 = *pbVar39 + bVar10;
                        if (SCARRY1(bVar7,bVar10) == (char)*pbVar39 < '\0') {
                          pcVar15 = (char *)((uint)pbVar13 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar15 = *pcVar15 + (char)pcVar15;
                          uStack_18 = uVar50;
                          uVar52 = (ushort)uStack_14;
                        }
                        else {
                          *pbVar13 = *pbVar13 + bVar10;
                          cVar12 = bVar10 + 0x12;
                          pcVar15 = (char *)CONCAT31(uVar27,cVar12);
                          bVar7 = *pbVar43;
                          *pbVar43 = *pbVar43 + cVar12;
                          if (SCARRY1(bVar7,cVar12) != (char)*pbVar43 < '\0') {
                            *pcVar15 = *pcVar15 + cVar12;
                            cVar12 = bVar10 + 0x24;
                            pcVar15 = (char *)CONCAT31(uVar27,cVar12);
                            *pcVar15 = *pcVar15 + cVar9;
                            pbVar43 = (byte *)CONCAT13(uStack_15,(uint3)uVar50);
                            *pcVar15 = *pcVar15 + cVar12;
                            bVar11 = bVar11 | unaff_EBP[-0x6e];
                            pcVar19 = (char *)CONCAT22(uVar33,CONCAT11(bVar11,cVar8));
                            *pcVar15 = *pcVar15 + cVar12;
                            cRam0000917d = cRam0000917d + cVar45;
                            bVar35 = bVar10 + 0x48;
                            pcVar19[-0x6e] = pcVar19[-0x6e] + bVar11;
                            *(char *)CONCAT31(uVar27,bVar35) =
                                 *(char *)CONCAT31(uVar27,bVar35) + bVar35;
                            bVar7 = bVar10 + 0x53 + *pbVar43;
                            cVar8 = bVar7 + (0xf4 < bVar35);
                            cVar8 = cVar8 + *(char *)CONCAT31(uVar27,cVar8) +
                                    (CARRY1(bVar10 + 0x53,*pbVar43) || CARRY1(bVar7,0xf4 < bVar35));
                            pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                            *pcVar19 = *pcVar19 - (char)uVar50;
                            *pcVar15 = *pcVar15 + cVar8;
                            pbVar39 = pbVar39 + -*(int *)pbVar39;
                            *(char *)((int)pbVar39 * 5) = *(char *)((int)pbVar39 * 5) + bVar11;
                            pcVar15[(int)unaff_EBP] = pcVar15[(int)unaff_EBP] + cVar8;
                            *pcVar15 = *pcVar15 + cVar8;
                            bVar10 = (byte)(uVar50 >> 8) | *pbVar39;
                            uVar42 = (undefined1)uStack_14;
                            cVar9 = (char)((uint)uStack_14 >> 8) + *(char *)(uStack_14 + 0xf);
                            *pcVar15 = *pcVar15 + cVar8;
                            bVar7 = cVar8 + 0x2aU & *pbVar39;
                            iVar16 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
                            cVar9 = cVar9 + *(char *)(CONCAT22(uStack_14._2_2_,
                                                               CONCAT11(cVar9,uVar42)) + 0x10);
                            *pcVar15 = *pcVar15 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar39;
                            iVar1 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
                            puVar44 = (uint *)CONCAT22(uStack_14._2_2_,
                                                       CONCAT11(cVar9 + *(char *)(CONCAT22(uStack_14
                                                  ._2_2_,CONCAT11(cVar9,uVar42)) + 0x11),uVar42));
                            *pcVar15 = *pcVar15 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar39;
                            puVar48 = (uint *)(pbVar18 + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar16
                                              );
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pbVar13 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
                            puVar46 = (uint *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                                       CONCAT11(bVar10 + *pbVar13,(char)uVar50));
                            uVar57 = CONCAT44(pbVar39,pbVar13 + (uint)CARRY1(bVar10,*pbVar13) +
                                                                *(int *)pbVar13);
                            uVar50 = (ushort)pbStack_20;
                            goto code_r0x00402866;
                          }
                        }
                        cVar8 = (char)pcVar15;
                        uVar27 = (undefined3)((uint)pcVar15 >> 8);
                        cVar9 = cVar8 + '\x02';
                        piVar25 = (int *)CONCAT31(uVar27,cVar9);
                        pbVar17 = pbVar38;
                        in_ES = (ushort)pbStack_20;
                        pbVar13 = pbVar39;
                        if (SCARRY1(cVar8,'\x02') != cVar9 < '\0') goto code_r0x00402724;
                        *(char *)piVar25 = (char)*piVar25 + cVar9;
                        pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '\n');
                        *(byte *)puVar37 = (byte)*puVar37 - cVar45;
                        *pbVar39 = *pbVar39 + (char)pbVar38;
                      }
                      pbVar13 = unaff_EBP + 0x6fe1411;
                      bVar53 = CARRY1(*pbVar13,bVar7);
                      *pbVar13 = *pbVar13 + bVar7;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar43[(int)pbVar39] = pbVar43[(int)pbVar39] + cVar8;
                  pbVar13 = pbVar17;
                  unaff_EDI = pbVar18;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar51 = 0x927c;
              in_stack_ffffffd4 = 0x40268f;
              uVar57 = func_0x02040000(in_CS);
              pbVar39 = (byte *)((ulonglong)uVar57 >> 0x20);
              *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
              pbVar17 = (byte *)CONCAT31((int3)((ulonglong)uVar57 >> 8),(char)uVar57 + '\x12');
              pbVar13 = extraout_ECX_00;
              in_CS = uVar51;
            }
            goto code_r0x00402680;
          }
          pbVar18 = unaff_EBP + -1;
          *pcVar15 = *pcVar15 + cVar8;
          pbVar39 = (byte *)CONCAT31(uVar41,bVar7 | *pbVar43);
          pbVar17 = (byte *)CONCAT31(uVar27,cVar8 + ':');
code_r0x00402677:
          puVar46 = (uint *)((int)puVar46 + -1);
          unaff_EBP = pbVar18;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar17 = *pbVar17 + bVar7;
      pbVar43 = (byte *)CONCAT22((short)((uint)pbVar43 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar43 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar43));
      *pbVar17 = *pbVar17 + bVar7;
      cVar8 = bVar10 + 0xf;
      pcVar15 = (char *)CONCAT31(uVar27,cVar8);
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_18);
      if (SCARRY1(bVar7,'\x02') == cVar8 < '\0') {
        pcVar15 = pcVar15 + (0xfd < bVar7) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar15 = *pcVar15 + cVar8;
      cVar9 = bVar10 + 0x11;
      pbVar18 = (byte *)CONCAT31(uVar27,cVar9);
      uVar57 = CONCAT44(pbVar39,pbVar18);
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_18);
      pbVar17 = pbVar13;
      if (SCARRY1(cVar8,'\x02') == cVar9 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar18 = *pbVar18 + (char)pbVar18;
      bVar7 = (char)pbVar18 + 2;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar15 = *pcVar15 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar13 = pbVar43 + (int)pbVar17;
      bVar53 = CARRY1(*pbVar13,bVar7);
      *pbVar13 = *pbVar13 + bVar7;
      pbVar18 = unaff_EBP;
      uVar50 = uVar52;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar46 = (char)*puVar46 + (byte)puVar46;
  uVar27 = (undefined3)((uint)puVar46 >> 8);
  bVar7 = (byte)puVar46 | *(byte *)((int)puVar46 + 0x400000e);
  pcVar15 = (char *)CONCAT31(uVar27,bVar7);
  puVar46 = puVar37;
  if ('\0' < (char)bVar7) {
    *pcVar15 = *pcVar15 + bVar7;
    bVar7 = bVar7 + 0x28 | *(byte *)CONCAT31(uVar27,bVar7 + 0x28);
    *pbVar43 = *pbVar43 + (char)((uint)pbVar17 >> 8);
    puVar46 = puVar37 + 1;
    out(*puVar37,(short)pbVar39);
    *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
    pcVar15 = (char *)(uint)(bVar7 | *pbVar39);
  }
  bVar7 = (byte)pcVar15 & 0x7b;
  bVar53 = (char)(bVar7 + 0x17) < '\0';
  uStack_1c = uVar51;
  if (SCARRY1(bVar7,'\x17') == bVar53) {
    unaff_EDI = pbStack_20;
    if (SCARRY1(bVar7,'\x17') != bVar53) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar9 = (char)pbStack_20;
  *pbStack_20 = *pbStack_20 + cVar9;
  iVar28 = (int3)((uint)pbStack_20 >> 8);
  cVar8 = cVar9 + '\x02';
  unaff_EDI = (byte *)CONCAT31(iVar28,cVar8);
  bVar53 = (POPCOUNT(cVar8) & 1U) == 0;
  if (!bVar53) goto code_r0x00402704;
  *unaff_EDI = *unaff_EDI + cVar8;
  cVar9 = cVar9 + '\x04';
  pcVar15 = (char *)CONCAT31(iVar28,cVar9);
  if ((POPCOUNT(cVar9) & 1U) == 0) {
    *pcVar15 = *pcVar15 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar39 = (byte *)((int)iVar28 >> 0x17);
  puVar37 = puVar46;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar46;
    cVar8 = (char)puVar44 - (byte)*puVar37;
    iVar16 = CONCAT22((short)((uint)puVar44 >> 0x10),
                      CONCAT11((char)((uint)puVar44 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),cVar8) + 0x12),cVar8));
    *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
    uVar27 = (undefined3)((ulonglong)uVar57 >> 8);
    bVar7 = (char)uVar57 + 0x2aU & (byte)*puVar40;
    pcVar15 = (char *)CONCAT31(uVar27,bVar7);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x12));
    *pcVar15 = *pcVar15 + bVar7;
    puVar22 = (uint *)CONCAT31(uVar27,bVar7 + 0x2a);
    pbStack_24 = (byte *)(uint)uVar50;
get_Value:
    cVar8 = *(char *)(iVar16 + 0x13);
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    uVar27 = (undefined3)((uint)puVar22 >> 8);
    bVar7 = (char)puVar22 + 0x2aU & (byte)*puVar40;
    pcVar15 = (char *)CONCAT31(uVar27,bVar7);
    puVar48 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x13));
    *pcVar15 = *pcVar15 + bVar7;
    pbVar43 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
    uVar14 = (uint)uVar50;
    bVar10 = (byte)((uint)puVar46 >> 8);
    bVar7 = bVar10 + *pbVar43;
    pbVar43 = pbVar43 + (uint)CARRY1(bVar10,*pbVar43) + *(int *)pbVar43;
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar46;
    puVar44 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar16 >> 0x10),
                                               CONCAT11((char)((uint)iVar16 >> 8) + cVar8,
                                                        (char)iVar16)) >> 8),
                               (char)iVar16 - (byte)*puVar37);
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11(bVar7 + *pbVar43,(char)puVar46));
    pbVar43 = pbVar43 + (uint)CARRY1(bVar7,*pbVar43) + *(int *)pbVar43;
code_r0x00402898:
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar46;
    bVar7 = (byte)puVar40;
    uVar33 = CONCAT11((char)((uint)puVar40 >> 8) - (byte)*puVar37,bVar7);
    pbVar13 = (byte *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar33);
    pcVar15 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[-0x19],
                                        (char)puVar44));
    *pbVar43 = *pbVar43 + (char)pbVar43;
    pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),(char)pbVar43 + '\x03');
    puVar44 = puVar37;
    do {
      puVar37 = puVar44 + 1;
      out(*puVar44,uVar33);
      pcVar15 = pcVar15 + -1;
      bVar10 = (byte)pbVar43;
      *pbVar43 = *pbVar43 + bVar10;
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((byte)((uint)puVar46 >> 8) | *pbVar13,(char)puVar46));
      *pbVar43 = *pbVar43 + bVar10;
      *pcVar15 = *pcVar15 + bVar7;
      *(byte *)((int)pbVar43 * 2) = *(byte *)((int)pbVar43 * 2) ^ bVar10;
      *pbVar43 = *pbVar43 + bVar10;
      *pbVar43 = *pbVar43 | bVar10;
      bVar53 = CARRY1((byte)*puVar46,bVar7);
      *(byte *)puVar46 = (byte)*puVar46 + bVar7;
      cVar8 = bVar10 + 10 + bVar53;
      pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),cVar8);
      puVar44 = puVar37;
    } while (bVar10 < 0xf6 && !CARRY1(bVar10 + 10,bVar53));
    *pbVar43 = *pbVar43 + cVar8;
    in_stack_ffffffd4 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),(ushort)pbStack_20);
    pcVar19 = (char *)((uint)pbVar43 | *puVar48);
    puVar44 = (uint *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                               CONCAT11((char)((uint)pcVar15 >> 8) + unaff_EBP[-100],(char)pcVar15))
    ;
    *pcVar19 = *pcVar19 + (char)pcVar19;
    bVar7 = (char)pcVar19 + 7;
    uVar57 = CONCAT44(pbVar13,CONCAT31((int3)((uint)pcVar19 >> 8),bVar7));
code_r0x004028c8:
    puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
  puVar22 = (uint *)CONCAT31((int3)((ulonglong)uVar57 >> 8),(char)uVar57 + '-');
  puVar37 = (uint *)((uint)puVar37 | *(uint *)((int)puVar40 + 0x3b));
  bVar53 = CARRY4(*puVar22,(uint)puVar22);
  uVar20 = *puVar22;
  *puVar22 = (uint)(*puVar22 + (int)puVar22);
  if (SCARRY4(uVar20,(int)puVar22)) {
    bVar53 = CARRY4(*puVar22,(uint)puVar22);
    bVar54 = SCARRY4(*puVar22,(int)puVar22);
    *puVar22 = (uint)(*puVar22 + (int)puVar22);
    bVar7 = POPCOUNT(*puVar22 & 0xff);
    if (bVar54) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + bVar53);
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar46;
    bVar53 = (POPCOUNT((byte)*puVar40) & 1U) == 0;
    if (bVar53) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar53) {
      iVar16 = CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 - (byte)*puVar37);
      goto get_Value;
    }
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'r');
    pbStack_24 = unaff_EBP;
code_r0x004028e2:
    uVar33 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
    uVar20 = *puVar22;
    *puVar22 = (uint)(*puVar22 + (int)puVar22);
    if (SCARRY4(uVar20,(int)puVar22)) {
      if (*puVar22 == 0 || SCARRY4(uVar20,(int)puVar22) != (int)*puVar22 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar8 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar8;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((byte)((uint)puVar46 >> 8) |
                                        *(byte *)((int)puVar46 + 0x16d7207),(char)puVar46));
    pbVar43 = (byte *)((int)puVar22 + 0x7d);
    bVar7 = *pbVar43;
    bVar11 = (byte)((uint)puVar40 >> 8);
    bVar10 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar11;
    uVar14 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar10,bVar11) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar43 < '\0') * 0x80 | (uint)(*pbVar43 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar43) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar7,bVar11);
    *(byte *)puVar22 = (byte)*puVar22 + cVar8;
    pbVar43 = (byte *)(CONCAT31((int3)((uint)puVar22 >> 8),cVar8 + '+') ^ *puVar48);
    if ((POPCOUNT((uint)pbVar43 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar43;
    *pbVar43 = *pbVar43 + bVar7;
    puVar22 = (uint *)CONCAT31((int3)((uint)pbVar43 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar22 + 0x6f) = *(byte *)((int)puVar22 + 0x6f) + bVar11;
    }
code_r0x00402905:
    uVar57 = CONCAT44(puVar40,puVar22);
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar8 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar8;
    bVar7 = (byte)((uint)puVar46 >> 8) | (byte)*puVar46;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar7,(char)puVar46));
    pbStack_20._0_2_ = (ushort)uVar14;
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar22 = (byte)*puVar22 + cVar8;
      puVar48 = (uint *)((int)puVar48 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar22 = (byte)*puVar22 + cVar8;
    uVar14 = 0x40291c;
    uVar57 = func_0x7346291c();
    *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
    puVar46 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar57 >> 0x20));
    puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,(ushort)pbStack_20);
    uStackY_44 = puVar44;
    while( true ) {
      pcVar15 = (char *)((int)uVar57 * 2);
      *pcVar15 = *pcVar15 - (char)puVar46;
      uVar20 = *puVar44;
      cVar8 = (char)((uint)puVar46 >> 8);
      *(byte *)puVar44 = (byte)*puVar44 + cVar8;
      if (SCARRY1((byte)uVar20,cVar8) == (char)(byte)*puVar44 < '\0') {
        pbVar43 = (byte *)((int)puVar48 + (int)uVar57);
        *pbVar43 = *pbVar43 + (char)uVar57;
        bVar7 = *pbVar43;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
      cVar8 = (char)uVar57;
      *(char *)uVar57 = *(char *)uVar57 + cVar8;
      uVar27 = (undefined3)((ulonglong)uVar57 >> 8);
      bVar7 = cVar8 + 7;
      puVar22 = (uint *)CONCAT31(uVar27,bVar7);
      bVar10 = (byte)((ulonglong)uVar57 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar22 = (byte)*puVar22 + bVar7;
      pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '3');
      uVar33 = (undefined2)((uint)puVar44 >> 0x10);
      uVar42 = SUB41(puVar44,0);
      bVar7 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar37 + 0x16) + (0xd3 < bVar7);
      puVar44 = (uint *)CONCAT22(uVar33,CONCAT11(bVar7,uVar42));
      *pcVar15 = *pcVar15 + cVar8 + '3';
      cVar9 = cVar8 + ':';
      puVar22 = (uint *)CONCAT31(uVar27,cVar9);
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)puVar40 + 7);
        puVar44 = (uint *)CONCAT22(uVar33,CONCAT11(bVar7,uVar42));
        bVar53 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar22 = (byte)*puVar22 + cVar9;
      puVar22 = (uint *)(CONCAT31(uVar27,cVar8 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar43 = (byte *)((int)puVar22 + 0x72);
      bVar54 = SCARRY1(*pbVar43,bVar10);
      *pbVar43 = *pbVar43 + bVar10;
      bVar7 = POPCOUNT(*pbVar43);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar22 + 0x72) = *(byte *)((int)puVar22 + 0x72) + (char)((uint)puVar40 >> 8)
        ;
      }
      else if (bVar54) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar8 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_4c = (uint *)CONCAT22(puStackY_4c._2_2_,uStack_18);
code_r0x00402957:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      cVar8 = (char)puVar22 + '(';
      puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),cVar8);
      *(byte *)puVar22 = (byte)*puVar22 + cVar8;
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((byte)((uint)puVar46 >> 8) | (byte)*puVar22,(char)puVar46)
                                );
      *(byte *)puVar22 = (byte)*puVar22 + cVar8;
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((byte)((uint)puVar40 >> 8) | (byte)puVar44[0x18],
                                          (char)puVar40));
      puVar37 = puStackY_4c;
      puVar48 = puStackY_48;
code_r0x00402966:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      bVar7 = (byte)((uint)puVar44 >> 8) | *(byte *)((int)puVar40 + 7);
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar7,(char)puVar44));
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + '~');
code_r0x00402971:
      uVar14 = (uint)uStack_18;
code_r0x00402972:
      uVar33 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar22;
      in_stack_ffffffd4 = CONCAT22(uVar33,in_CS);
      in_CS = 0x2d0a;
      uVar57 = func_0x00006128(in_stack_ffffffd4);
      puVar46 = (uint *)uVar57;
      piVar25 = (int *)((int)((ulonglong)uVar57 >> 0x20) + -0x3d);
      *piVar25 = (int)((int)puVar37 + (uint)bVar7 + *piVar25);
      bVar53 = SCARRY4(*puVar46,(int)puVar46);
      *puVar46 = *puVar46 + (int)puVar46;
      uVar20 = *puVar46;
      puVar46 = extraout_ECX_02;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar20 & 0xff);
      if (bVar53) {
        *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                   CONCAT11((byte)((uint)puVar46 >> 8) |
                                            *(byte *)((ulonglong)uVar57 >> 0x20),(char)puVar46));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar15 = (char *)((ulonglong)uVar57 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar57 = *(char *)uVar57 + (char)uVar57;
        *pcVar15 = *pcVar15 + (char)puVar46;
        uVar57 = CONCAT44(CONCAT22((short)((ulonglong)uVar57 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar57 >> 0x28) - pcVar15[0x1f],
                                            (char)((ulonglong)uVar57 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar57 >> 8),(char)uVar57 + '('));
code_r0x00402991:
        puVar40 = (uint *)((ulonglong)uVar57 >> 0x20);
        pbVar43 = (byte *)uVar57;
        bVar7 = (byte)uVar57;
        bVar53 = CARRY1(bVar7,*pbVar43);
        puVar22 = (uint *)CONCAT31((int3)((ulonglong)uVar57 >> 8),bVar7 + *pbVar43);
        cVar8 = bVar7 + *pbVar43;
        if (SCARRY1(bVar7,*pbVar43)) goto code_r0x004029c4;
code_r0x00402995:
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                   CONCAT11(((char)((uint)puVar40 >> 8) -
                                            *(byte *)((int)puVar40 + 0x6b)) - bVar53,(char)puVar40))
        ;
        bVar7 = (byte)puVar22;
        bVar53 = CARRY1(bVar7,(byte)*puVar22);
        bVar54 = SCARRY1(bVar7,(byte)*puVar22);
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar7 + (byte)*puVar22);
        do {
          if (!bVar54) {
            puVar37 = (uint *)((int)puVar37 + (uint)bVar53 + *puVar22);
            pbVar43 = (byte *)((int)puVar22 + *puVar22);
            bVar10 = (byte)pbVar43;
            *pbVar43 = *pbVar43 + bVar10;
            *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
            bVar7 = *pbVar43;
            *pbVar43 = *pbVar43 + bVar10;
            *puVar48 = (uint)((int)puVar44 + (uint)CARRY1(bVar7,bVar10) + *puVar48);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar46;
            uVar27 = (undefined3)((uint)pbVar43 >> 8);
            bVar10 = bVar10 | (byte)*puVar37;
            puVar22 = (uint *)CONCAT31(uVar27,bVar10);
            uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uStack_18);
            uVar20 = *puVar22;
            uVar2 = *puVar22;
            *puVar22 = (uint)(*puVar22 + (int)puVar22);
            if (SCARRY4(uVar2,(int)puVar22)) {
              *(byte *)puVar37 = (byte)*puVar37 - (char)puVar44;
              *(byte *)puVar40 = (byte)*puVar40 + (char)puVar46;
              *(byte *)puVar48 = (byte)*puVar48 - (char)puVar44;
            }
            else {
              puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,(ushort)pbStack_20);
              uStack_18 = (ushort)pbStack_20;
              if (CARRY4(uVar20,(uint)puVar22)) goto code_r0x00402971;
              bVar53 = CARRY1(bVar10,(byte)*puVar22);
              bVar54 = SCARRY1(bVar10,(byte)*puVar22);
              puVar22 = (uint *)CONCAT31(uVar27,bVar10 + (byte)*puVar22);
code_r0x004029be:
              if (!bVar54) {
                puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,(ushort)pbStack_20);
                *(byte *)((int)puVar40 + -0x37) =
                     (*(byte *)((int)puVar40 + -0x37) - (char)((uint)puVar40 >> 8)) - bVar53;
                cVar8 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar8;
                bVar7 = (byte)puVar22;
                bVar53 = CARRY1(bVar7,(byte)*puVar22);
                bVar54 = SCARRY1(bVar7,(byte)*puVar22);
                puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar7 + (byte)*puVar22);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)puVar46;
            bVar53 = CARRY1((byte)*puVar40,bVar7);
            bVar54 = SCARRY1((byte)*puVar40,bVar7);
            *(byte *)puVar40 = (byte)*puVar40 + bVar7;
            if (bVar53) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar54) {
            pbStack_20._0_2_ = (ushort)pbStack_24;
            goto code_r0x00402966;
          }
          uVar14 = (uint)(ushort)pbStack_20;
          *(uint *)((int)puVar40 + -0x23) =
               (*(int *)((int)puVar40 + -0x23) - (int)puVar37) - (uint)bVar53;
          uVar20 = *puVar22;
          bVar10 = (byte)puVar22;
          uVar2 = *puVar22;
          uVar27 = (undefined3)((uint)puVar22 >> 8);
          bVar7 = bVar10 + (byte)*puVar22;
          puVar22 = (uint *)CONCAT31(uVar27,bVar7);
          if (SCARRY1(bVar10,(byte)uVar2)) goto code_r0x00402972;
          in_stack_ffffffd4 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),(ushort)pbStack_20);
          cVar8 = (char)puVar40;
          bVar11 = ((char)((uint)puVar40 >> 8) - *(byte *)((int)puVar40 + -0xf)) -
                   CARRY1(bVar10,(byte)uVar20);
          puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar11,cVar8));
          puVar47 = (uint *)CONCAT31(uVar27,bVar7 + (byte)*puVar22);
          bVar10 = (byte)puVar46;
          if (SCARRY1(bVar7,(byte)*puVar22)) {
            *(byte *)puVar40 = (byte)*puVar40 + bVar10;
            uVar57 = CONCAT44(puVar40,(int)puVar47 + -0x1c37211);
            pcVar15 = (char *)((int)puVar47 + -0x1c3720a);
            *pcVar15 = *pcVar15 + bVar11;
            bVar7 = POPCOUNT(*pcVar15);
            goto code_r0x00402984;
          }
          puVar37 = (uint *)((int)puVar37 +
                            (-(uint)CARRY1(bVar7,(byte)*puVar22) - *(int *)((int)puVar40 + 5)));
          bVar53 = SCARRY4((int)puVar47,*puVar47);
          uVar20 = (int)puVar47 + *puVar47;
          uVar57 = CONCAT44(puVar40,uVar20);
          if (bVar53) goto code_r0x00402982;
          bVar7 = (byte)uVar20 + 0x8e;
          uVar21 = CONCAT31((int3)(uVar20 >> 8),bVar7 - CARRY4((uint)puVar47,*puVar47));
          *puVar44 = (*puVar44 - uVar21) -
                     (uint)((byte)uVar20 < 0x72 || bVar7 < CARRY4((uint)puVar47,*puVar47));
          pbVar43 = (byte *)(uVar21 - 0x5e);
          bVar7 = *pbVar43;
          *pbVar43 = *pbVar43 + bVar11;
          uVar20 = (uint)CARRY1(bVar7,bVar11);
          uVar2 = uVar21 - 0x32d72;
          puVar22 = (uint *)(uVar2 - uVar20);
          if (SBORROW4(uVar21,0x32d72) != SBORROW4(uVar2,uVar20)) goto code_r0x00402992;
          uVar52 = uVar50;
          if (uVar21 < 0x32d72 || uVar2 < uVar20) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar22 >> 8);
            *(byte *)puVar40 = (byte)*puVar40 + bVar10;
            puVar47 = puVar37 + 1;
            out(*puVar37,CONCAT11(bVar11,cVar8));
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            goto code_r0x00402a3e;
          }
          bVar53 = CARRY4((uint)puVar22,*puVar22);
          bVar54 = SCARRY4((int)puVar22,*puVar22);
          puVar22 = (uint *)((int)puVar22 + *puVar22);
          if (!bVar54) {
            uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,(ushort)pbStack_20);
            *(byte *)puVar37 = (byte)*puVar37 + bVar53;
            bVar7 = (byte)puVar22;
            *(byte *)((int)puVar40 + (int)unaff_EBP) =
                 *(byte *)((int)puVar40 + (int)unaff_EBP) + bVar7;
            *(byte *)puVar44 = (byte)*puVar44 + cVar8;
            *(byte *)puVar44 = (byte)*puVar44 ^ bVar7;
            bVar31 = (byte)((uint)puVar46 >> 8);
            *(byte *)puVar37 = (byte)*puVar37 + bVar31;
            *(byte *)puVar22 = (byte)*puVar22 + bVar7;
            pbVar13 = (byte *)CONCAT31((int3)((uint)puVar22 >> 8),bVar7 | (byte)*puVar22);
            *(byte *)puVar46 = (byte)*puVar46 + cVar8;
            bVar35 = *pbVar13;
            uVar33 = (undefined2)((uint)puVar46 >> 0x10);
            puVar46 = (uint *)CONCAT22(uVar33,CONCAT11(bVar31 + bVar35,bVar10));
            pbVar13 = pbVar13 + (uint)CARRY1(bVar31,*pbVar13) + *(int *)pbVar13;
            *(byte *)puVar40 = (byte)*puVar40 + bVar10;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar43 = pbVar13 + 0x73;
            bVar7 = *pbVar43;
            *pbVar43 = *pbVar43 + bVar11;
            uVar27 = (undefined3)((uint)pbVar13 >> 8);
            bVar7 = (char)pbVar13 + CARRY1(bVar7,bVar11);
            pcVar15 = (char *)CONCAT31(uVar27,bVar7);
            *(byte *)puVar40 = (byte)*puVar40 + bVar10;
            if ((POPCOUNT((byte)*puVar40) & 1U) == 0) {
              uStack_18 = (ushort)pbStack_20;
            }
            puVar49 = (uint *)((int)puVar48 + *(int *)(unaff_EBP + 0x17));
            *pcVar15 = *pcVar15 + bVar7;
            cVar8 = bVar7 + 2;
            puVar22 = (uint *)CONCAT31(uVar27,cVar8);
            if (bVar7 < 0xfe) {
              *puVar22 = (uint)(*puVar22 + (int)puVar22);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar22 = (byte)*puVar22 + cVar8;
            uVar14 = *puVar40;
            puVar47 = (uint *)((int)puVar37 + puVar44[0x19]);
            *(byte *)puVar22 = (byte)*puVar22 + cVar8;
            puVar46 = (uint *)CONCAT22(uVar33,CONCAT11(bVar31 + bVar35 | (byte)*puVar22,
                                                       bVar10 | (byte)uVar14));
            puVar48 = puVar49;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar43 = (byte *)((int)puVar22 + 0x73);
    bVar53 = CARRY1(*pbVar43,bVar10);
    *pbVar43 = *pbVar43 + bVar10;
  } while( true );
code_r0x00402992:
  pbVar43 = (byte *)((int)puVar22 + 0x2a);
  bVar53 = CARRY1(*pbVar43,bVar11);
  *pbVar43 = *pbVar43 + bVar11;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar22) = *(byte *)(in_GS_OFFSET + (int)puVar22) + (char)puVar22;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | *(byte *)((int)puVar48 + 0x66),
                                      (char)puVar46));
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402a3e:
  uVar27 = (undefined3)((uint)puVar22 >> 8);
  bVar7 = (byte)puVar22 | (byte)*puVar47;
  pcVar15 = (char *)CONCAT31(uVar27,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar15 = *pcVar15 + bVar7;
    cVar8 = bVar7 + 2;
    piVar25 = (int *)CONCAT31(uVar27,cVar8);
    if ((POPCOUNT(cVar8) & 1U) == 0) {
      *(char *)piVar25 = (char)*piVar25 + cVar8;
      bVar7 = bVar7 + 0x71;
      pcVar19 = (char *)CONCAT31(uVar27,bVar7);
      pcVar15 = (char *)segment(uVar52,(short)puVar44 + (short)puVar47);
      *pcVar15 = *pcVar15 + bVar7;
      uVar14 = puVar48[0x1a];
      *pcVar19 = *pcVar19 + bVar7;
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((byte)((uint)puVar46 >> 8) | (byte)uVar14 |
                                          *(byte *)((int)puVar48 + 0x69),(char)puVar46));
      *pcVar19 = *pcVar19 + bVar7;
      bVar7 = bVar7 | (byte)*puVar40;
      pcVar15 = (char *)CONCAT31(uVar27,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar37 = puVar47 + (uint)bVar55 * -2 + 1;
    out(*puVar47,(short)puVar40);
  }
  else {
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[6],(char)puVar44)
                              );
code_r0x00402a5d:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    piVar25 = (int *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + 'o');
    puVar37 = puVar47;
  }
code_r0x00402a61:
  pcVar15 = (char *)segment(uVar52,(short)puVar44 + (short)puVar37);
  *pcVar15 = *pcVar15 + (char)piVar25;
  cVar8 = (char)puVar46;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | (byte)puVar48[0x1a],cVar8));
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  uVar33 = CONCAT11((byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar40 + 0x65),(char)puVar40);
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar33);
  piVar23 = (int *)((int)piVar25 + *piVar25);
  puVar47 = puVar37;
  puVar49 = puVar48;
  uVar51 = (ushort)pbStack_20;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402ae3;
  *(byte *)puVar40 = (byte)*puVar40 + cVar8;
  puVar47 = puVar37 + (uint)bVar55 * -2 + 1;
  out(*puVar37,uVar33);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar46 >> 8) | (byte)*puVar40;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar7,(char)puVar46));
  piVar25 = (int *)(uint)(byte)*puVar44;
  *(byte *)puVar47 = (byte)*puVar47 - bVar7;
  puVar49 = puVar48;
code_r0x00402a7f:
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  out(*puVar47,(short)puVar40);
  bVar7 = in((short)puVar40);
  *(byte *)puVar49 = bVar7;
  *(char *)piVar25 = (char)*piVar25 + (char)piVar25;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | (byte)*puVar40,(char)puVar46));
  iVar16 = *piVar25;
  cVar8 = in(1);
  puVar22 = (uint *)CONCAT31((int3)((uint)((int)piVar25 + *piVar25) >> 8),cVar8);
  *(char *)puVar22 = (char)*puVar22 + cVar8;
  puVar22 = (uint *)((uint)puVar22 | *puVar22);
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar40;
  puVar47 = (uint *)((int)puVar47 + (((uint)bVar55 * -8 + 4) - iVar16));
  puVar49 = (uint *)((int)puVar49 + (uint)bVar55 * -2 + 1);
  uStack_18 = (ushort)pbStack_20;
  while( true ) {
    bVar7 = (byte)puVar22 | (byte)*puVar40;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar7);
    puVar48 = puVar49;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar22 = (byte)*puVar22 + bVar7;
code_r0x00402a9b:
    uVar27 = (undefined3)((uint)puVar22 >> 8);
    cVar8 = (char)puVar22 + '\r';
    piVar23 = (int *)CONCAT31(uVar27,cVar8);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar23;
    *(char *)piVar23 = (char)*piVar23 + cVar8;
    *(byte *)(puVar47 + -0xc800000) = (byte)puVar47[-0xc800000] + (char)puVar40;
    *(char *)piVar23 = (char)*piVar23 + cVar8;
    *(byte *)puVar40 = (byte)*puVar40 + cVar8;
    cVar9 = (char)puVar46;
    if ((POPCOUNT((byte)*puVar40) & 1U) != 0) {
      *(byte *)puVar40 = (byte)*puVar40 + cVar9;
      puVar37 = puVar47 + (uint)bVar55 * -2 + 1;
      out(*puVar47,(short)puVar40);
      piVar25 = (int *)((longlong)*piVar23 * 0x7b020a00);
      *(char *)piVar25 =
           (char)*piVar25 - ((longlong)(int)piVar25 != (longlong)*piVar23 * 0x7b020a00);
      pbVar43 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar43 = *pbVar43;
      goto code_r0x00402a61;
    }
    *(char *)piVar23 = (char)*piVar23 + cVar8;
    puVar22 = (uint *)CONCAT31(uVar27,(char)puVar22 + ':');
    puVar37 = (uint *)((uint)puVar47 | *(uint *)((int)puVar40 + -0x79));
    iVar16 = (int)puVar22 + *puVar22;
    if (SCARRY4((int)puVar22,*puVar22)) {
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                 CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar37[(int)puVar44],
                                          (char)puVar44));
      *(char *)((int)puVar40 * 2) = *(char *)((int)puVar40 * 2) + (char)iVar16;
      puVar49 = puVar48;
      goto code_r0x00402b33;
    }
    uVar27 = (undefined3)((uint)iVar16 >> 8);
    cVar8 = (char)iVar16 + CARRY4((uint)puVar22,*puVar22);
    piVar25 = (int *)CONCAT31(uVar27,cVar8);
    *(byte *)puVar40 = (byte)*puVar40 + cVar9;
    bVar53 = (POPCOUNT((byte)*puVar40) & 1U) != 0;
    if ((bVar53) && (bVar53)) goto code_r0x00402a61;
    *(char *)piVar25 = (char)*piVar25 + cVar8;
    cVar45 = cVar8 + '(';
    pcVar15 = (char *)CONCAT31(uVar27,cVar45);
    puVar49 = puVar48 + (uint)bVar55 * -2 + 1;
    uVar14 = in((short)puVar40);
    *puVar48 = uVar14;
    *pcVar15 = *pcVar15 + cVar45;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((byte)((uint)puVar46 >> 8) | bRama07b0222,cVar9));
    *pcVar15 = *pcVar15 + cVar45;
    pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '>');
code_r0x00402ad2:
    out(*puVar37,(short)puVar40);
    puVar47 = (uint *)((int)(puVar37 + (uint)bVar55 * -2 + 1) + (uint)bVar55 * -2 + 1);
    out((byte)puVar37[(uint)bVar55 * -2 + 1],(short)puVar40);
    bVar7 = (byte)pcVar15;
    *pcVar15 = *pcVar15 + bVar7;
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(byte)puVar44 | (byte)*puVar49);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar27 = (undefined3)((uint)pcVar15 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    puVar40 = (uint *)((uint)puVar40 ^ *puVar40);
    cVar8 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*puVar40;
    piVar25 = (int *)CONCAT31(uVar27,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar25 = (char)*piVar25 + cVar8;
    piVar23 = (int *)CONCAT31(uVar27,cVar8 + '\x17');
    uVar51 = (ushort)pbStack_20;
code_r0x00402ae3:
    out(*puVar47,(short)puVar40);
    puVar37 = puVar47 + (uint)bVar55 * -2 + 1 + (uint)bVar55 * -2 + 1;
    out(puVar47[(uint)bVar55 * -2 + 1],(short)puVar40);
    *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
code_r0x00402ae7:
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((byte)((uint)puVar44 >> 8) | unaff_EBP[-0x60],(char)puVar44)
                              );
    cVar8 = (char)piVar23;
    *(char *)piVar23 = (char)*piVar23 + cVar8;
    uVar27 = (undefined3)((uint)piVar23 >> 8);
    bVar7 = cVar8 + 2;
    puVar22 = (uint *)CONCAT31(uVar27,bVar7);
    pbStack_20._0_2_ = uVar51;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar22 = (byte)*puVar22 + bVar7;
      cVar8 = cVar8 + '}';
      puVar22 = (uint *)CONCAT31(uVar27,cVar8);
      *(byte *)puVar22 = ((byte)*puVar22 - cVar8) - (0x84 < bVar7);
      pbVar43 = (byte *)((int)puVar40 + (int)puVar22);
      *pbVar43 = *pbVar43 + cVar8;
      bVar7 = POPCOUNT(*pbVar43);
      puVar47 = puVar37;
code_r0x00402af9:
      pbStack_20._0_2_ = uVar51;
      puVar48 = puVar49;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        bVar7 = (byte)puVar46;
        *(byte *)puVar40 = (byte)*puVar40 + bVar7;
        uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uStack_18);
        puVar37 = puVar47 + (uint)bVar55 * -2 + 1;
        out(*puVar47,(short)puVar40);
        uVar14 = *puVar40;
        *(byte *)puVar40 = (byte)*puVar40 + bVar7;
        iVar16 = CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + 'o') +
                 *(int *)((int)puVar40 * 2) + (uint)CARRY1((byte)uVar14,bVar7);
        pcVar15 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '(');
        while( true ) {
          uVar14 = *puVar40;
          bVar10 = (byte)puVar46;
          *(byte *)puVar40 = (byte)*puVar40 + bVar10;
          pcVar15 = pcVar15 + (uint)CARRY1((byte)uVar14,bVar10) + iRam73280512;
          bVar7 = (byte)pcVar15;
          *pcVar15 = *pcVar15 + bVar7;
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                     CONCAT11((byte)((uint)puVar46 >> 8) | bRam7d160243,bVar10));
          bVar55 = ((uint)uStackY_44 & 0x400) != 0;
          in_AF = ((uint)uStackY_44 & 0x10) != 0;
          *pcVar15 = *pcVar15 + bVar7;
          uVar27 = (undefined3)((uint)pcVar15 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar27,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar8 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar8 < '\0') break;
          *(char *)CONCAT31(uVar27,cVar8) = *(char *)CONCAT31(uVar27,cVar8) + cVar8;
          iVar16 = CONCAT31(uVar27,bVar7 + 0x16);
code_r0x00402b33:
          piVar23 = (int *)(iVar16 + 0xe2802);
          *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar46 >> 8);
          uVar51 = (ushort)pbStack_20;
          pbStack_20._0_2_ = uStack_18;
          while( true ) {
            bVar10 = (byte)puVar44 | (byte)((uint)puVar46 >> 8);
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar10);
            *piVar23 = (int)(*piVar23 + (int)piVar23);
            cVar8 = (char)piVar23;
            *(byte *)puVar40 = (byte)*puVar40 + cVar8;
            if ((POPCOUNT((byte)*puVar40) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar23 = (char)*piVar23 + cVar8;
            uVar14 = CONCAT31((int3)((uint)piVar23 >> 8),cVar8 + '\x13');
            puVar22 = (uint *)(uVar14 + 0x19061224 + (uint)(0x1f9edfd < uVar14));
            uVar2 = (uint)(0xe4ffffdd < uVar14 + 0xfe061202 ||
                          CARRY4(uVar14 + 0x19061224,(uint)(0x1f9edfd < uVar14)));
            uVar14 = *puVar37;
            uVar20 = *puVar37;
            *puVar37 = (uint)((byte *)(uVar20 + (int)puVar22) + uVar2);
            bVar7 = POPCOUNT(*puVar37 & 0xff);
            puVar47 = puVar37;
            if ((SCARRY4(uVar14,(int)puVar22) != SCARRY4((int)(uVar20 + (int)puVar22),uVar2)) ==
                (int)*puVar37 < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar7;
            iVar16 = CONCAT31((int3)((uint)puVar22 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar40 | (byte)*puVar40;
            uVar14 = *puVar44;
            *(byte *)puVar44 = (byte)*puVar44 + bVar10;
            pcVar15 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x12') + 0x228b26
                               + *puVar49 + (uint)CARRY1((byte)uVar14,bVar10));
            cVar8 = bVar7 + (byte)*puVar46;
            puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),cVar8);
            if (SCARRY1(bVar7,(byte)*puVar46) == cVar8 < '\0') break;
            *pcVar15 = *pcVar15 + (char)pcVar15;
            cVar8 = (char)pcVar15 + '\x02';
            pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8);
            bVar7 = POPCOUNT(cVar8);
            uVar51 = (ushort)pbStack_20;
code_r0x00402b7a:
            puVar48 = puVar37;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar8 = (char)pcVar15;
              *pcVar15 = *pcVar15 + cVar8;
              uVar27 = (undefined3)((uint)pcVar15 >> 8);
              pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '\x13');
              *(byte *)puVar46 = (byte)*puVar46 | (byte)puVar40;
              *(byte *)puVar49 = (byte)*puVar49 | (byte)puVar40;
              *puVar40 = (uint)(pcVar15 + *puVar40);
              uVar33 = (undefined2)((uint)puVar44 >> 0x10);
              uVar42 = SUB41(puVar44,0);
              cVar9 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar44 + -0x5f);
              puVar44 = (uint *)CONCAT22(uVar33,CONCAT11(cVar9,uVar42));
              *pcVar15 = *pcVar15 + cVar8 + '\x13';
              piVar23 = (int *)CONCAT31(uVar27,cVar8 + -0x7a);
              uVar14 = *puVar40;
              *(byte *)puVar40 = (byte)*puVar40 + (char)puVar46;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar14,(char)puVar46) == (char)(byte)*puVar40 < '\0') break;
              *(char *)piVar23 = (char)*piVar23 + cVar8 + -0x7a;
              cVar45 = cVar8 + -0x78;
              piVar23 = (int *)CONCAT31(uVar27,cVar45);
              uVar5 = uVar51;
              if ((POPCOUNT(cVar45) & 1U) != 0) break;
              *(char *)piVar23 = (char)*piVar23 + cVar45;
              pcVar15 = (char *)CONCAT31(uVar27,cVar8 + -0x65);
              *puVar46 = *puVar46 | (uint)puVar40;
              *puVar49 = *puVar49 | (uint)puVar40;
              pbVar43 = (byte *)((int)puVar46 + -1);
              cVar9 = cVar9 + *(byte *)((int)puVar44 + -0x5e);
              puVar44 = (uint *)CONCAT22(uVar33,CONCAT11(cVar9,uVar42));
              *pcVar15 = *pcVar15 + cVar8 + -0x65;
              bVar7 = cVar8 + 10;
              puVar22 = (uint *)CONCAT31(uVar27,bVar7);
              bVar10 = (byte)pbVar43;
              *(byte *)puVar40 = (byte)*puVar40 + bVar10;
              puVar37 = puVar48 + (uint)bVar55 * -2 + 1;
              out(*puVar48,(short)puVar40);
              uVar14 = *puVar40;
              *(byte *)puVar40 = (byte)*puVar40 + bVar10;
              uVar21 = (uint)CARRY1((byte)uVar14,bVar10);
              uVar20 = *puVar40;
              uVar14 = *puVar40;
              pbVar13 = pbVar43 + uVar14 + uVar21;
              uVar6 = *puVar40;
              cRam130a0000 = cRam130a0000 - cVar9;
              uVar2 = *puVar40;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar22);
              *(byte *)puVar22 = (char)*puVar22 + bVar7;
              puVar46 = (uint *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar13 >> 8) | bRam7d170243,
                                                  (char)pbVar13 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar43,uVar20) ||
                                                  CARRY4((uint)(pbVar43 + uVar14),uVar21))));
              bVar55 = (uStack_18 & 0x400) != 0;
              in_AF = (uStack_18 & 0x10) != 0;
              *(byte *)puVar22 = (char)*puVar22 + bVar7;
              bVar53 = 0xfd < bVar7;
              pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '\f');
              puVar40 = (uint *)((uint)puVar40 | uVar2);
code_r0x00402bd1:
              uVar14 = *puVar44;
              uVar20 = *puVar44;
              *puVar44 = (uint)((byte *)(uVar20 + (int)puVar46) + bVar53);
              bVar7 = POPCOUNT(*puVar44 & 0xff);
              uVar51 = uStack_18;
              if ((SCARRY4(uVar14,(int)puVar46) !=
                  SCARRY4((int)(uVar20 + (int)puVar46),(uint)bVar53)) == (int)*puVar44 < 0)
              goto code_r0x00402b7a;
              cVar8 = (char)pcVar15;
              *pcVar15 = *pcVar15 + cVar8;
              pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8 + '\x02');
              if (SCARRY1(cVar8,'\x02') == (char)(cVar8 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar15 = *pcVar15 + (char)pcVar15;
                pcVar15 = (char *)(CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x12') |
                                  *puVar40);
                *(byte *)puVar49 = (byte)*puVar49 - (char)puVar46;
                *pcVar15 = *pcVar15 + (char)pcVar15;
                puVar40 = (uint *)((int)puVar40 - *puVar37);
                bVar7 = (byte)puVar44 | (byte)((uint)puVar46 >> 8);
                cVar8 = *pcVar15;
                uVar27 = (undefined3)((uint)pcVar15 >> 8);
                pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                *pcVar15 = *pcVar15 + cVar8;
                pcVar19 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                           CONCAT11((char)((uint)puVar44 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar15 = *pcVar15 + cVar8;
                bVar53 = false;
                pcVar15 = (char *)(CONCAT31(uVar27,cVar8 + '\x13') | *puVar40);
                do {
                  bVar10 = (byte)puVar46;
                  bVar7 = bVar10 + (byte)puVar37[(int)puVar49 * 2];
                  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),bVar7 + bVar53);
                  uVar14 = (uint)(CARRY1(bVar10,(byte)puVar37[(int)puVar49 * 2]) ||
                                 CARRY1(bVar7,bVar53));
                  pcVar24 = pcVar15 + 0x1b000019 + uVar14;
                  piVar25 = (int *)((int)puVar49 * 2 + 0x40000a5);
                  *piVar25 = (int)((int)puVar46 +
                                  (uint)((char *)0xe4ffffe6 < pcVar15 ||
                                        CARRY4((uint)(pcVar15 + 0x1b000019),uVar14)) + *piVar25);
                  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 + cRam00009d7d
                                            );
                  uVar27 = (undefined3)((uint)pcVar24 >> 8);
                  bVar7 = (char)pcVar24 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar14 = CONCAT31(uVar27,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar15 = (char *)CONCAT22((short)(uVar14 >> 0x10),
                                             CONCAT11((char)((uint)pcVar24 >> 8) - in_AF,
                                                      (char)uVar14));
                  pbVar43 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar27,bVar7));
                  while( true ) {
                    *pcVar15 = *pcVar15 + (char)pcVar15;
                    puVar48 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               (byte)puVar40 | (byte)*puVar40);
                    puVar49 = (uint *)((uint)puVar49 | (uint)puVar37);
                    uVar14 = (uint)pcVar19 | (uint)puVar37;
                    unaff_EBP = pbVar43 + 1;
                    uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,(ushort)pbStack_20);
                    cVar8 = (char)(pcVar15 + 0x1b000019);
                    uVar27 = (undefined3)((uint)(pcVar15 + 0x1b000019) >> 8);
                    cVar9 = cVar8 + -0x13;
                    pcVar15 = (char *)CONCAT31(uVar27,cVar9);
                    uVar33 = (undefined2)(uVar14 >> 0x10);
                    cVar45 = (char)(uVar14 >> 8) + *(char *)(uVar14 - 0x5e);
                    puVar44 = (uint *)CONCAT22(uVar33,CONCAT11(cVar45,(byte)uVar14));
                    *pcVar15 = *pcVar15 + cVar9;
                    pcVar15 = (char *)(CONCAT31(uVar27,cVar8 + '\x19') | *puVar48);
                    bVar7 = (byte)pcVar15;
                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                      pbVar43 = (byte *)((int)puVar48 + (int)pcVar15);
                      bVar53 = CARRY1(*pbVar43,bVar7);
                      *pbVar43 = *pbVar43 + bVar7;
                      puVar40 = puVar48;
                      goto code_r0x00402bd1;
                    }
                    *pcVar15 = *pcVar15 + bVar7;
                    uVar27 = (undefined3)((uint)pcVar15 >> 8);
                    pcVar19 = (char *)CONCAT31(uVar27,bVar7 + 0x6f);
                    puVar40 = (uint *)((int)puVar48 + 1);
                    *pcVar19 = *pcVar19 + bVar7 + 0x6f;
                    bVar10 = (byte)uVar14 | (byte)((uint)pcVar15 >> 8);
                    pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x5c);
                    cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),bVar10) + -0x5f)
                    ;
                    puVar44 = (uint *)CONCAT22(uVar33,CONCAT11(cVar45,bVar10));
                    *pcVar15 = *pcVar15 + bVar7 + 0x5c;
                    pcVar15 = (char *)(CONCAT31(uVar27,bVar7 + 0x88) | *puVar40);
                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                      *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar46 >> 8);
                      uStackY_44 = (uint *)((uint)uStackY_44._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar15 = *pcVar15 + (char)pcVar15;
                    uVar27 = (undefined3)((uint)pcVar15 >> 8);
                    cVar8 = (char)pcVar15 + 'o';
                    puVar40 = (uint *)((int)puVar48 + 2);
                    *(char *)CONCAT31(uVar27,cVar8) = *(char *)CONCAT31(uVar27,cVar8) + cVar8;
                    pcVar19 = (char *)CONCAT31((int3)((uint)puVar44 >> 8),
                                               bVar10 | (byte)((uint)pcVar15 >> 8));
                    pcVar15 = (char *)(CONCAT31(uVar27,cVar8) | 2);
                    pbVar43[-0x62] = pbVar43[-0x62] + 1;
                    bVar7 = (byte)pcVar15;
                    *pcVar15 = *pcVar15 + bVar7;
                    bVar53 = 0xfd < bVar7;
                    cVar8 = bVar7 + 2;
                    pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                    uVar52 = (ushort)pbStack_20;
                    if (SCARRY1(bVar7,'\x02') != cVar8 < '\0') break;
                    *pcVar15 = *pcVar15 + cVar8;
                    bVar10 = bVar7 + 10;
                    pcVar15 = (char *)CONCAT31(uVar27,bVar10);
                    *pcVar15 = *pcVar15 - cVar45;
                    cVar9 = (char)puVar46;
                    *(byte *)puVar40 = *(byte *)puVar40 + cVar9;
                    pbVar43[-0x62] = pbVar43[-0x62] + 1;
                    *pcVar15 = *pcVar15 + bVar10;
                    cVar8 = bVar7 + 0xc;
                    pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                    if (SCARRY1(bVar10,'\x02') == cVar8 < '\0') {
                      *pcVar15 = *pcVar15 + cVar8;
                      *(byte *)puVar46 = (byte)*puVar46 - cVar45;
                      *(byte *)puVar40 = *(byte *)puVar40 + cVar9;
                      cVar8 = (bVar7 + 0x13) - (byte)puVar46[0x13];
                      pcVar15 = (char *)CONCAT31(uVar27,cVar8);
                      *pcVar15 = *pcVar15 + cVar8;
                      pcVar24 = (char *)CONCAT31(uVar27,cVar8 + *pcVar15);
                      *pcVar24 = *pcVar24 + cVar8 + *pcVar15;
                      pcVar24 = pcVar24 + *puVar46;
                      *pcVar24 = *pcVar24 + (char)pcVar24;
                      LOCK();
                      pcVar15 = *(char **)pcVar24;
                      *(char **)pcVar24 = pcVar24;
                      UNLOCK();
                      *pcVar15 = *pcVar15 + (char)pcVar15;
                      pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)*puVar46);
                      *pbVar13 = *pbVar13 + (byte)*puVar46;
                      goto code_r0x00402c8d;
                    }
                    puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                                               cVar9 + *pcVar19 + (0xfd < bVar10));
                    *(byte *)puVar49 = (byte)*puVar49 - cVar45;
                    pbVar43 = unaff_EBP;
                  }
                } while( true );
              }
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11((char)((uint)puVar44 >> 8) +
                                                  *(byte *)((int)puVar44 + -99),(char)puVar44));
              puVar48 = puVar37;
            }
            *(char *)piVar23 = (char)*piVar23 + (char)piVar23;
            puVar40 = (uint *)((int)puVar40 - *puVar48);
            puVar37 = puVar48;
            uVar51 = (ushort)pbStack_20;
            pbStack_20._0_2_ = uVar5;
          }
          *(byte *)puVar40 = (byte)*puVar40 + (char)puVar46;
          pcVar15 = pcVar15 + -0x7d160243;
        }
        pcVar15 = (char *)CONCAT31(uVar27,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar46;
    uVar14 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
    *puVar49 = (uint)((int)puVar40 + (uint)CARRY1((byte)uVar14,(byte)puVar22) + *puVar49);
    puVar47 = puVar37;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar12 = (char)puVar46;
      cVar30 = (char)((uint)puVar46 >> 8) + (char)((uint)pbVar13 >> 8);
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(cVar30,cVar12));
      cVar8 = (char)pbVar13;
      *pbVar13 = *pbVar13 + cVar8;
      pcVar15 = (char *)((int)pbVar13 * 2 + 0x1a10000);
      cVar45 = (char)((uint)pcVar19 >> 8);
      *pcVar15 = *pcVar15 + cVar45;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      pbVar13[-0x47ffffff] = pbVar13[-0x47ffffff] + cVar45;
      *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
      bVar10 = (byte)puVar40;
      *(byte *)puVar49 = (byte)*puVar49 + bVar10;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + bVar10;
      *pbVar13 = *pbVar13 + cVar8;
      *puVar37 = (uint)(*puVar37 + (int)puVar37);
      uVar33 = (undefined2)((uint)pcVar19 >> 0x10);
      cVar45 = cVar45 + (byte)puVar37[(int)pcVar19];
      pcVar15 = (char *)CONCAT22(uVar33,CONCAT11(cVar45,(char)pcVar19));
      pcVar15[(int)pbVar13] = pcVar15[(int)pbVar13] + cVar8;
      *(byte *)puVar40 = *(byte *)puVar40 - cVar45;
      *(byte *)puVar40 = *(byte *)puVar40 + cVar12;
      uVar27 = (undefined3)((uint)pbVar13 >> 8);
      bVar7 = cVar8 - *pbVar13;
      *pcVar15 = *pcVar15 + bVar10;
      *(byte *)puVar40 = *(byte *)puVar40 ^ bVar7;
      *(byte *)puVar40 = *(byte *)puVar40 + bVar7;
      *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
      uVar14 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar10;
      cVar9 = bVar7 + *(char *)CONCAT31(uVar27,bVar7) + CARRY1((byte)uVar14,bVar10);
      pcVar19 = (char *)CONCAT22(uVar33,CONCAT11(cVar45 + pbVar43[-0x60],(char)pcVar19));
      *(char *)CONCAT31(uVar27,cVar9) = *(char *)CONCAT31(uVar27,cVar9) + cVar9;
      cVar45 = cVar9 + '\x12';
      pbVar13 = (byte *)CONCAT31(uVar27,cVar45);
      cVar8 = *pcVar19;
      *pcVar19 = *pcVar19 + cVar45;
      if (SCARRY1(cVar8,cVar45) != *pcVar19 < '\0') break;
code_r0x00402c8d:
      cVar8 = (char)pbVar13;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
      *(byte *)puVar40 = *(byte *)puVar40 + cVar8;
      *pbVar13 = *pbVar13 + cVar8;
    }
    *pbVar13 = *pbVar13 + cVar45;
    pbVar13 = (byte *)CONCAT31(uVar27,cVar9 + '$');
    *pbVar13 = *pbVar13 + cVar30;
    bVar7 = *(byte *)puVar40;
    *(byte *)puVar40 = *(byte *)puVar40 + cVar12;
    uVar51 = (ushort)pbStack_20;
    uVar52 = uVar50;
  } while (SCARRY1(bVar7,cVar12) == (char)*(byte *)puVar40 < '\0');
  do {
    cVar8 = (char)pbVar13;
    *pbVar13 = *pbVar13 + cVar8;
    uVar27 = (undefined3)((uint)pbVar13 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar40;
    bVar10 = cVar8 + 0x24;
    cVar45 = (char)((uint)pcVar19 >> 8);
    pcVar19[-0x62] = pcVar19[-0x62] + cVar45;
    *(char *)CONCAT31(uVar27,bVar10) = *(char *)CONCAT31(uVar27,bVar10) + bVar10;
    bVar7 = cVar8 + 0x2fU + (byte)*puVar46;
    cVar9 = bVar7 + (0xf4 < bVar10);
    cVar8 = cVar9 + *(char *)CONCAT31(uVar27,cVar9) +
            (CARRY1(cVar8 + 0x2fU,(byte)*puVar46) || CARRY1(bVar7,0xf4 < bVar10));
    pcVar15 = (char *)CONCAT31(uVar27,cVar8);
    *pcVar15 = *pcVar15 - (char)puVar40;
    *pcVar15 = *pcVar15 + cVar8;
    pcVar24 = (char *)((int)puVar40 - *puVar40);
    *(byte *)(puVar37 + (int)pcVar19) = (byte)puVar37[(int)pcVar19] + cVar45;
    pcVar15[(int)unaff_EBP] = pcVar15[(int)unaff_EBP] + cVar8;
    *pcVar24 = *pcVar24 + (char)puVar46;
    pcVar15 = (char *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                               CONCAT11((char)((uint)pbVar13 >> 8) - *pcVar24,cVar8));
    uVar14 = *puVar49;
    *pcVar15 = *pcVar15 - (char)((uint)pcVar24 >> 8);
    *pcVar15 = *pcVar15 + cVar8;
    uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar51);
    pbVar43 = (byte *)CONCAT22((short)((uint)pcVar19 >> 0x10),
                               CONCAT11(cVar45 - (byte)*puVar37,(char)pcVar19));
    unaff_EBP = unaff_EBP + *(int *)(pbVar43 + (int)puVar46);
    puVar48 = (uint *)CONCAT31((int3)((uint)pcVar24 >> 8),(char)pcVar24 + (byte)uVar14);
    while( true ) {
      puVar40 = puVar48;
      uVar33 = (undefined2)((uint)pbVar43 >> 0x10);
      bVar35 = (char)((uint)pbVar43 >> 8) + pbVar43[0x18];
      *pcVar15 = *pcVar15 + (char)pcVar15;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + 'o');
      cVar8 = (char)puVar46;
      *(byte *)puVar40 = (byte)*puVar40 + cVar8;
      uVar14 = *puVar37;
      bVar11 = (byte)((uint)puVar46 >> 8);
      bVar7 = *pbVar13;
      pbVar13 = pbVar13 + (uint)CARRY1(bVar11,*pbVar13) + *(int *)pbVar13;
      *(byte *)puVar40 = (byte)*puVar40 + cVar8;
      cVar9 = ((char)pbVar43 - (byte)uVar14) - (byte)*puVar37;
      bVar10 = *(byte *)((int)puVar49 + 0x1a);
      *pbVar13 = *pbVar13 + (char)pbVar13;
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11(bVar11 + bVar7 + bVar10 | (byte)*puVar40,cVar8));
      pbVar13 = pbVar13 + *puVar40;
      if ((POPCOUNT((uint)pbVar13 & 0xff) & 1U) != 0) break;
      *pbVar13 = *pbVar13 + (char)pbVar13;
      bVar7 = (char)pbVar13 + 0x6f;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
      pcVar19 = (char *)(CONCAT31((int3)(CONCAT22(uVar33,CONCAT11(bVar35,(char)pbVar43)) >> 8),cVar9
                                 ) + -1);
      *pcVar15 = *pcVar15 + bVar7;
      *pcVar15 = *pcVar15 + bVar7;
      *pcVar19 = *pcVar19 + (byte)puVar40;
      *(byte *)((int)pcVar15 * 2) = *(byte *)((int)pcVar15 * 2) ^ bVar7;
      uVar4 = *(undefined6 *)pcVar15;
      uVar51 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar15 = (char *)uVar4;
      *pcVar15 = *pcVar15 + (char)uVar4;
      *(byte *)puVar37 = (byte)*puVar37 + (char)uVar4;
      pcVar15 = (char *)((uint)pcVar15 | 0x73110008);
      bVar35 = (byte)((uint)pcVar19 >> 8);
      *(byte *)puVar49 = (byte)*puVar49 - bVar35;
      *(byte *)puVar40 = (byte)*puVar40 + cVar8;
      puVar48 = puVar37 + (uint)bVar55 * -2 + 1;
      out(*puVar37,(short)puVar40);
      *pcVar15 = *pcVar15;
      cVar8 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar8;
      bVar7 = unaff_EBP[-0x5a];
      uVar33 = (undefined2)((uint)pcVar19 >> 0x10);
      cVar9 = (char)pcVar19;
      *pcVar15 = *pcVar15 + cVar8;
      cVar8 = cVar8 + '\x02';
      uVar14 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar8);
      puVar46 = (uint *)(uVar14 | 0x73110000);
      puVar37 = puVar48 + (uint)bVar55 * -2 + 1;
      out(*puVar48,(short)puVar40);
      *(byte *)puVar46 = (byte)*puVar46;
      bVar11 = (byte)puVar40 | (byte)*puVar49;
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar11);
      *(byte *)puVar46 = (byte)*puVar46 + cVar8;
      pcVar15 = (char *)(uVar14 | 0x7b1f1609);
      bVar55 = (uVar52 & 0x400) != 0;
      *(uint *)((int)puVar49 + -0x7d) = *(uint *)((int)puVar49 + -0x7d) | (uint)unaff_EBP;
      bVar10 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar10;
      bVar35 = bVar35 | bVar7 | *(byte *)((int)puVar37 + 0x19);
      pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(bVar35,cVar9));
      *pcVar15 = *pcVar15 + bVar10;
      uVar27 = (undefined3)((uint)pcVar15 >> 8);
      puVar37[(int)puVar49 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar37[(int)puVar49 * 2]);
      bVar7 = bVar10 + 0x2d ^ *(byte *)CONCAT31(uVar27,bVar10 + 0x2d);
      pcVar15 = (char *)CONCAT31(uVar27,bVar7);
      uVar14 = *puVar37;
      *(byte *)puVar37 = (byte)*puVar37 + bVar7;
      uVar52 = uVar51;
      if (CARRY1((byte)uVar14,bVar7)) {
        *pcVar15 = *pcVar15 + bVar7;
        bVar7 = bVar7 | pcVar15[0x4000019];
        pcVar15 = (char *)CONCAT31(uVar27,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar15 = *pcVar15 + bVar7;
          piVar25 = (int *)CONCAT31(uVar27,bVar7 + 0x28);
          *piVar25 = (int)piVar25 + (uint)(0xd7 < bVar7) + *piVar25;
          bVar31 = (byte)((uint6)uVar4 >> 8);
          *pbVar43 = *pbVar43 + bVar31;
          uVar34 = CONCAT11((byte)((uint)puVar40 >> 8) | bVar35,bVar11);
          puVar48 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar34);
          uStackY_44 = (uint *)CONCAT22(uStackY_44._2_2_,uVar51);
          bVar11 = in(uVar34);
          pbVar13 = (byte *)CONCAT31(uVar27,bVar11);
          bVar7 = *pbVar13;
          bVar53 = SCARRY1(*pbVar13,bVar11);
          *pbVar13 = *pbVar13 + bVar11;
          bVar10 = *pbVar13;
          puVar44 = puVar37;
          uStack_18 = uVar51;
          if (!CARRY1(bVar7,bVar11)) goto code_r0x00402e19;
          *pbVar13 = *pbVar13 + bVar11;
          bVar31 = bVar31 | *pbVar13;
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar31,cVar8));
          pcVar15 = (char *)CONCAT31(uVar27,bVar11 + *pbVar13);
          *pbVar43 = *pbVar43 + bVar31;
        }
        uVar27 = (undefined3)((uint)pcVar15 >> 8);
        bVar10 = (byte)pcVar15 | (byte)*puVar48;
        pbVar13 = (byte *)CONCAT31(uVar27,bVar10);
        puVar44 = puVar37 + (uint)bVar55 * -2 + 1;
        out(*puVar37,(short)puVar48);
        LOCK();
        bVar7 = *pbVar13;
        *pbVar13 = bVar10;
        UNLOCK();
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar46;
        piVar25 = (int *)(CONCAT31(uVar27,bVar7) + -0x1b7e07);
        *(byte *)puVar48 = (byte)*puVar48 + (char)puVar46;
        iVar16 = (int)puVar46 - *(int *)pbVar43;
        bVar7 = *(byte *)((int)puVar49 + -0x7a);
        uVar34 = (undefined2)((uint)iVar16 >> 0x10);
        *(char *)piVar25 = *(char *)piVar25 + (char)piVar25;
        bVar10 = (char)((uint)iVar16 >> 8) + bVar7 | *(byte *)((int)puVar49 + 0x17);
        *(char *)piVar25 = *(char *)piVar25 + (char)piVar25;
        uVar27 = (undefined3)(CONCAT22(uVar34,CONCAT11(bVar10,(byte)iVar16)) >> 8);
        bVar7 = (byte)iVar16 | *pbVar43;
        puVar46 = (uint *)CONCAT31(uVar27,bVar7);
        pbVar13 = (byte *)((int)piVar25 + *piVar25);
        puVar37 = puVar44;
        if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e0a;
        *(byte *)puVar46 = (byte)*puVar46 + bVar7;
        *(byte **)pbVar43 = (byte *)(*(int *)pbVar43 + (int)puVar48);
        piVar25 = (int *)CONCAT31(uVar27,bVar7 + 0x27);
        puVar46 = (uint *)CONCAT22(uVar34,CONCAT11(bVar10 + *(byte *)((int)puVar49 + -0x79),bVar7));
        *(byte *)piVar25 = (char)*piVar25 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar19 = (char *)CONCAT22(uVar33,CONCAT11(bVar35 | unaff_EBP[-0x62],cVar9));
  } while( true );
code_r0x00402dff:
  pbVar13 = (byte *)CONCAT22((short)((uint)piVar25 >> 0x10),
                             CONCAT11((byte)((uint)piVar25 >> 8) |
                                      *(byte *)((int)puVar48 + 0x2170411),(byte)piVar25));
  puVar37 = puVar44 + (uint)bVar55 * -2 + 1;
  out(*puVar44,(short)puVar48);
  *pbVar13 = (byte)piVar25;
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar46;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar13;
  *pbVar13 = *pbVar13 - cVar9;
  *pbVar13 = *pbVar13 + (char)pbVar13;
  bVar53 = false;
  bVar10 = (byte)((uint)puVar46 >> 8) | bRam052b0603;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar10,(char)puVar46));
  puVar44 = puVar37;
code_r0x00402e19:
  if (bVar10 == 0 || bVar53 != (char)bVar10 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar13;
  *pbVar13 = *pbVar13 + cRam89280411;
  piVar25 = (int *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                            CONCAT11((byte)((uint)pbVar13 >> 8) |
                                     *(byte *)((int)puVar48 + 0x7190411),cRam89280411));
  *(char *)piVar25 = (char)*piVar25 + cRam89280411;
  cVar8 = (char)puVar46;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | (byte)*puVar48,cVar8));
  puVar44 = (uint *)((int)puVar44 + *piVar25);
  pbVar13 = (byte *)((int)piVar25 + *piVar25);
  bVar10 = (byte)pbVar13;
  *pbVar13 = *pbVar13 + bVar10;
  *(byte *)puVar44 = (byte)*puVar44 + cVar8;
  bVar7 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar10;
  *(byte **)pbVar13 = unaff_EBP + (uint)CARRY1(bVar7,bVar10) + *(int *)pbVar13;
  piVar25 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),*pbVar13);
  *(byte *)puVar48 = (byte)*puVar48 + cVar8;
  puVar37 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(byte)puVar48 | (byte)*puVar48);
  pbVar13 = (byte *)((int)puVar37 + -0x43);
  *pbVar13 = *pbVar13 + (char)((uint)puVar48 >> 8);
  puVar48 = puVar37;
  puVar37 = puVar49;
  uVar52 = (ushort)pbStack_20;
code_r0x00402e42:
  pbStack_20._0_2_ = uStack_18;
  puVar49 = puVar37;
  uStack_18 = (ushort)pbStack_20;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e6e;
  iVar16 = *(int *)((int)piVar25 + *piVar25);
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar46;
  piVar25 = (int *)(iVar16 + -0x8c6f);
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | *(byte *)((int)puVar48 + -0x3f),
                                      (char)puVar48));
  pbVar39 = (byte *)((int)piVar25 + *piVar25);
  pbVar13 = pbVar39;
  puVar49 = uStackY_44;
  if (SCARRY4((int)piVar25,*piVar25)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar39 = *pbVar39 + (char)pbVar39;
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | (byte)*puVar48,(char)puVar46));
  puVar37 = puVar44 + (uint)bVar55 * -2 + 1;
  out(*puVar44,(short)puVar48);
  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),(char)puVar48 + (byte)*puVar49);
  puVar44 = puVar37 + (uint)bVar55 * -2 + 1;
  out(*puVar37,(short)puVar48);
  uVar52 = (ushort)pbStack_20;
  uStack_18 = uVar51;
code_r0x00402e6e:
  pbStack_20._0_2_ = uVar52;
  uVar27 = (undefined3)((uint)puVar48 >> 8);
  cVar8 = (char)puVar48 + (byte)*puVar49;
  puVar37 = puVar44 + (uint)bVar55 * -2 + 1;
  out(*puVar44,(short)CONCAT31(uVar27,cVar8));
  puVar48 = (uint *)CONCAT31(uVar27,cVar8 + (byte)*puVar49);
  puVar44 = puVar37 + (uint)bVar55 * -2 + 1;
  out(*puVar37,(short)puVar48);
  pbVar13 = (byte *)0x0;
  puVar37 = puVar49;
code_r0x00402e81:
  puVar49 = puVar37;
  bVar10 = (char)pbVar13 - *pbVar13;
  iVar16 = CONCAT31((int3)((uint)pbVar13 >> 8),bVar10);
  *pbVar43 = *pbVar43 + (char)puVar48;
  pbVar39 = (byte *)(iVar16 * 2);
  *pbVar39 = *pbVar39 ^ bVar10;
  pbVar39 = (byte *)(int)(short)iVar16;
  *pbVar39 = *pbVar39 + bVar10;
  *(byte *)puVar49 = (byte)*puVar49 + (byte)puVar46;
  bVar7 = *pbVar39;
  *pbVar39 = *pbVar39 + bVar10;
  *(byte **)(pbVar43 + -0x73) =
       (byte *)((int)puVar44 + (uint)CARRY1(bVar7,bVar10) + *(int *)(pbVar43 + -0x73));
  *pbVar39 = *pbVar39 + bVar10;
  bVar7 = (byte)puVar46 | (byte)*puVar48;
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),bVar7);
  puVar37 = puVar44;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar39 = *pbVar39 + bVar10;
  pbVar13 = (byte *)CONCAT31((int3)(char)((uint)pbVar13 >> 8),bVar10 + 0x2d);
  puVar44[(int)puVar49 * 2] =
       (uint)((int)puVar48 + (uint)(0xd2 < bVar10) + puVar44[(int)puVar49 * 2]);
  pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar51);
  do {
    uVar14 = *puVar44;
    bVar7 = (byte)pbVar13;
    *(byte *)puVar44 = (byte)*puVar44 + bVar7;
    if (!CARRY1((byte)uVar14,bVar7)) break;
    *pbVar13 = *pbVar13 + bVar7;
    bVar7 = bVar7 | pbVar13[0x400001a];
    pbVar39 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar39 = *pbVar39 + (byte)pbVar39;
      uVar27 = (undefined3)((uint)pbVar39 >> 8);
      bVar7 = (byte)pbVar39 | pbVar39[0x400001b];
      pcVar15 = (char *)CONCAT31(uVar27,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar14 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar46;
        *(char *)((int)pcVar15 * 2) =
             *(char *)((int)pcVar15 * 2) - CARRY1((byte)uVar14,(byte)puVar46);
        bVar53 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar39 = *pbVar39 + bVar7;
      puVar37 = puVar44;
code_r0x00402eb4:
      uVar27 = (undefined3)((uint)pbVar39 >> 8);
      bVar7 = (char)pbVar39 + 0x6f;
      pcVar15 = (char *)CONCAT31(uVar27,bVar7);
      *(byte **)pcVar15 = pbStackY_60;
      uVar14 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (char)puVar46;
      pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar51);
      uVar50 = uVar51;
      if ((byte)*puVar48 != 0 && SCARRY1((byte)uVar14,(char)puVar46) == (char)(byte)*puVar48 < '\0')
      {
        *pcVar15 = *pcVar15 + bVar7;
        bVar10 = (char)pbVar39 + 0x9c;
        pbVar39 = (byte *)CONCAT31(uVar27,bVar10);
        puVar37[(int)puVar49 * 2] =
             (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar37[(int)puVar49 * 2]);
        pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar51);
        uVar14 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar10;
        puVar44 = puVar37;
        if (CARRY1((byte)uVar14,bVar10)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar44 = puVar37 + (uint)bVar55 * -2 + 1;
      out(*puVar37,(short)puVar48);
    }
    cVar8 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar8;
    uVar27 = (undefined3)((uint)pcVar15 >> 8);
    bVar7 = cVar8 + 0x6f;
    pcVar15 = (char *)CONCAT31(uVar27,bVar7);
    *(byte **)pcVar15 = pbStackY_60;
    uVar14 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar46;
    pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar51);
    *(byte *)(puVar44 + 7) = ((byte)puVar44[7] - bVar35) - CARRY1((byte)uVar14,(byte)puVar46);
    *pcVar15 = *pcVar15 + bVar7;
    bVar10 = cVar8 + 0x9c;
    pcVar15 = (char *)CONCAT31(uVar27,bVar10);
    puVar44[(int)puVar49 * 2] =
         (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar49 * 2]);
    uVar14 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar10;
    if (!CARRY1((byte)uVar14,bVar10)) goto code_r0x00402e7e;
    *pcVar15 = *pcVar15 + bVar10;
    bVar10 = bVar10 | pcVar15[0x400001c];
    pbVar13 = (byte *)CONCAT31(uVar27,bVar10);
    uStack_18 = uVar51;
    if ((char)bVar10 < '\x01') goto code_r0x00402f16;
    *pbVar13 = *pbVar13 + bVar10;
    pcVar15 = (char *)CONCAT31(uVar27,bVar10 + 0x6f);
    while( true ) {
      *(byte **)pcVar15 = pbStackY_60;
      uVar14 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar46;
      *(uint *)((int)puVar44 + 0x1d) =
           (*(int *)((int)puVar44 + 0x1d) - (int)puVar49) - (uint)CARRY1((byte)uVar14,(byte)puVar46)
      ;
      bVar7 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar7;
      bVar10 = bVar7 + 0x2d;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar10);
      puVar44[(int)puVar49 * 2] =
           (uint)((int)puVar48 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar49 * 2]);
      pbStackY_60 = (byte *)CONCAT22((short)((uint)pbStackY_60 >> 0x10),uVar51);
      uVar14 = *puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar10;
      if (!CARRY1((byte)uVar14,bVar10)) break;
      *pbVar13 = *pbVar13 + bVar10;
code_r0x00402f16:
      bVar7 = (byte)pbVar13 | pbVar13[0x400001d];
      puVar37 = (uint *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7);
      pbVar13 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar13;
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar37;
        uVar27 = (undefined3)((uint)puVar37 >> 8);
        cVar8 = (char)puVar37 + 'o';
        puVar40 = (uint *)CONCAT31(uVar27,cVar8);
        *puVar40 = (uint)pbStackY_60;
        cVar45 = (char)puVar46;
        *(byte *)puVar48 = (byte)*puVar48 + cVar45;
        pbStackY_60 = (byte *)CONCAT22(pbStackY_60._2_2_,uVar51);
        bVar7 = (byte)((uint)puVar48 >> 8);
        bVar53 = bVar7 < (byte)*puVar44;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar44,(char)puVar48));
        if (bVar53) break;
        bVar53 = CARRY4((uint)puVar40,*puVar40);
        puVar37 = (uint *)((int)puVar40 + *puVar40);
        if (!SCARRY4((int)puVar40,*puVar40)) {
          bVar53 = CARRY4((uint)unaff_EBP,*puVar37);
          unaff_EBP = unaff_EBP + *puVar37;
        }
        *puVar37 = (*puVar37 - (int)puVar37) - (uint)bVar53;
        *(byte *)puVar48 = (byte)*puVar48 + cVar45;
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                   CONCAT11((char)((uint)puVar46 >> 8) + (byte)*puVar48,
                                            cVar45 - (byte)*puVar48));
        *(byte *)puVar37 = (byte)*puVar37 + (char)puVar37;
code_r0x00402f3b:
        cVar45 = (char)puVar48;
        *pbVar43 = *pbVar43 + cVar45;
        bVar7 = (byte)puVar37;
        *(byte *)((int)puVar37 * 2) = *(byte *)((int)puVar37 * 2) ^ bVar7;
        *(byte *)puVar37 = (byte)*puVar37 + bVar7;
        *(byte *)puVar37 = (byte)*puVar37 + cVar45;
        uVar14 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar7;
        *puVar48 = (uint)((int)puVar37 + (uint)CARRY1((byte)uVar14,bVar7) + *puVar48);
        pcVar15 = (char *)((uint)puVar37 | *puVar49);
        uVar27 = (undefined3)((uint)pcVar15 >> 8);
        cVar8 = (char)pcVar15 + *pcVar15;
        pcVar15 = (char *)CONCAT31(uVar27,cVar8);
        *pcVar15 = *pcVar15 + cVar8;
        cVar8 = cVar8 + *pcVar15;
        piVar25 = (int *)CONCAT31(uVar27,cVar8);
        *(char *)piVar25 = (char)*piVar25 + cVar8;
        iVar16 = LocalDescriptorTableRegister();
        *piVar25 = iVar16;
        bVar7 = *pbVar43;
        bVar32 = (byte)((uint)puVar46 >> 8);
        *pbVar43 = *pbVar43 + bVar32;
        iVar16 = *piVar25;
        uVar34 = (undefined2)((uint)puVar46 >> 0x10);
        bVar31 = (byte)puVar46;
        *(byte *)puVar44 = (byte)*puVar44 + cVar8;
        puVar46 = puVar44 + (uint)bVar55 * -2 + 1;
        out(*puVar44,(short)puVar48);
        *(byte *)puVar46 = (byte)*puVar46 + cVar8;
        bVar10 = *pbVar43;
        *(byte *)puVar48 = (byte)*puVar48 - bVar35;
        *(byte *)puVar46 = (byte)*puVar46 + cVar8;
        puVar40 = puVar46 + (uint)bVar55 * -2 + 1;
        out(*puVar46,(short)puVar48);
        *(byte *)puVar40 = (byte)*puVar40 + cVar8;
        bVar11 = *pbVar43;
        *(uint *)((int)puVar48 + -0x23) = *(uint *)((int)puVar48 + -0x23) & (uint)puVar40;
        puVar26 = (ushort *)((int)piVar25 + *piVar25);
        if (!SCARRY4((int)piVar25,*piVar25)) {
          *puVar26 = uVar50;
        }
        *(char *)puVar26 = (char)*puVar26 + (char)puVar26;
        uVar36 = CONCAT11((char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + -0x15),cVar45);
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),uVar36);
        puVar37 = (uint *)((int)puVar26 + *(int *)puVar26);
        if (!SCARRY4((int)puVar26,*(int *)puVar26)) {
          *(ushort *)puVar37 = uVar50;
        }
        cVar8 = (char)puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + cVar8;
        cVar12 = ((bVar32 - (char)iVar16) - CARRY1(bVar7,bVar32) | bVar10 | bVar11) + (byte)*puVar37
        ;
        puVar46 = (uint *)CONCAT22(uVar34,CONCAT11(cVar12,bVar31));
        uVar14 = *puVar48;
        *(byte *)puVar48 = (byte)*puVar48 + bVar31;
        if (CARRY1((byte)uVar14,bVar31)) {
          *(byte *)puVar37 = (byte)*puVar37 + cVar8;
          bVar7 = *(byte *)((int)puVar48 + 6);
          *(byte *)puVar48 = (byte)*puVar48 + bVar31;
          bVar10 = (cVar12 - (byte)*puVar40) + cRam14730307;
          *(byte *)puVar37 = (byte)*puVar37 + cVar8;
          bVar7 = bVar35 | bVar7 | *(byte *)((int)puVar48 + 0x2a);
          uVar14 = *puVar37;
          pbVar43 = (byte *)((int)puVar37 + (uint)CARRY1(bVar10,(byte)*puVar37) + *puVar37);
          *(byte *)puVar48 = (byte)*puVar48 + bVar31;
          cVar8 = cVar9 - (byte)*puVar40;
          cVar9 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar33,CONCAT11(bVar7,cVar9)) >> 8),
                                             cVar8) + 0x1e);
          *pbVar43 = *pbVar43 + (char)pbVar43;
          uVar27 = (undefined3)((uint)pbVar43 >> 8);
          bVar7 = (char)pbVar43 + 0x2aU & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar9,cVar8)) + 0x1f);
          *pcVar15 = *pcVar15 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar9,cVar8)) + 0x20);
          *pcVar15 = *pcVar15 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar9,cVar8)) + 0x21);
          *pcVar15 = *pcVar15 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar9,cVar8)) + 0x22);
          *pcVar15 = *pcVar15 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          bVar10 = bVar10 + (byte)uVar14 + *pcVar15;
          uVar29 = CONCAT22(uVar34,CONCAT11(bVar10,bVar31));
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar33,CONCAT11(cVar9,cVar8)) + 0x25);
          *pcVar15 = *pcVar15 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          pcVar19 = (char *)CONCAT22(uVar33,CONCAT11(cVar9 + *(char *)(CONCAT22(uVar33,CONCAT11(
                                                  cVar9,cVar8)) + 0x26),cVar8));
          *pcVar15 = *pcVar15 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          cVar8 = bVar7 + 0x2a;
          pcVar15 = (char *)CONCAT31(uVar27,cVar8);
          if ((POPCOUNT(cVar8) & 1U) == 0) {
            *pcVar15 = *pcVar15 + cVar8;
            pbVar43 = (byte *)(CONCAT31(uVar27,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar43;
            bVar11 = (byte)pbVar43;
            *pbVar43 = *pbVar43 + bVar11;
            uVar27 = (undefined3)((uint)pbVar43 >> 8);
            if (!CARRY1(bVar7,bVar11)) {
              if (!SCARRY1(bVar11,'\0')) {
                *pbVar43 = *pbVar43 + bVar11;
                uVar29 = CONCAT22(uVar34,CONCAT11(bVar10 | (byte)*puVar48,bVar31));
                bVar11 = bVar11 & (byte)*puVar48;
                *(char *)CONCAT31(uVar27,bVar11) = *(char *)CONCAT31(uVar27,bVar11) + bVar11;
                pcVar15 = (char *)CONCAT31(uVar27,bVar11 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar15 = (char *)CONCAT31(uVar27,bVar11 + *pcVar19);
              if (SCARRY1(bVar11,*pcVar19) != (char)(bVar11 + *pcVar19) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar11 + *pcVar19;
            pbVar43 = (byte *)CONCAT31(uVar27,bVar7);
            if (SCARRY1(bVar11,*pcVar19) == (char)bVar7 < '\0') {
              pcVar15 = (char *)CONCAT22(uVar34,CONCAT11(bVar10 | (byte)*puVar48,bVar31));
              *pcVar19 = *pcVar19 + cVar45;
              *(byte *)puVar48 = (byte)*puVar48 ^ bVar7;
              *(char *)((int)pbVar43 * 2) = *(char *)((int)pbVar43 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar15 = *pcVar15 + (char)pcVar15;
            uVar27 = (undefined3)((uint)pcVar15 >> 8);
            bVar7 = (char)pcVar15 + 0x2aU & (byte)*puVar48;
            *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
            pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
            *pcVar15 = *pcVar15 + bVar7 + 0x2a;
            pcVar15 = (char *)CONCAT31(uVar27,bVar7 + 0x54 & (byte)*puVar48);
code_r0x00403072:
            cVar8 = (char)pcVar15;
            *pcVar15 = *pcVar15 + cVar8;
            uVar27 = (undefined3)((uint)pcVar15 >> 8);
            pcVar15 = (char *)CONCAT31(uVar27,cVar8 + '*');
            *pcVar15 = *pcVar15 + cVar8 + '*';
            bVar7 = cVar8 + 0x54U & (byte)*puVar48;
            *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
            pcStackY_98 = (char *)CONCAT22(pcStackY_98._2_2_,(ushort)pbStack_20);
            uVar29 = CONCAT22((short)((uint)uVar29 >> 0x10),
                              CONCAT11((char)((uint)uVar29 >> 8) +
                                       *(char *)CONCAT31(uVar27,bVar7 + 0x2a),(char)uVar29));
            *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar45;
            pcVar15 = pcStackY_98;
code_r0x0040309a:
            cVar8 = (char)pcVar15;
            *pcVar15 = *pcVar15 + cVar8;
            pcStackY_98 = (char *)CONCAT22(pcStackY_98._2_2_,uVar51);
            *pcVar15 = *pcVar15 + cVar8;
            pbVar43 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8 + 0x2aU & (byte)*puVar48);
          }
          cVar8 = (char)pbVar43;
          *pbVar43 = *pbVar43 + cVar8;
          uVar27 = (undefined3)((uint)pbVar43 >> 8);
          cVar9 = cVar8 + '*';
          pcVar15 = (char *)CONCAT31(uVar27,cVar9);
          *(byte *)(puVar40 + 0x828000) = (byte)puVar40[0x828000] - cVar45;
          *pcVar15 = *pcVar15 + cVar9;
          cVar12 = (char)pcStackY_98 - (byte)*puVar40;
          pcVar19 = (char *)CONCAT22((short)((uint)pcStackY_98 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_98 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_98 >> 8),
                                                                 cVar12) + 0x34),cVar12));
          *pcVar15 = *pcVar15 + cVar9;
          bVar7 = cVar8 + 0x54U & (byte)*puVar48;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pbVar43 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar29 >> 8);
          pcVar15 = (char *)CONCAT22((short)((uint)uVar29 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar43,(char)uVar29));
          pbVar43 = pbVar43 + (uint)CARRY1(bVar7,*pbVar43) + *(int *)pbVar43;
          *(byte *)puVar48 = (byte)*puVar48 + (char)uVar29;
          uVar27 = (undefined3)((uint)pbVar43 >> 8);
          cVar8 = (byte)pbVar43 - *pbVar43;
          piVar25 = (int *)CONCAT31(uVar27,cVar8);
          puVar40 = (uint *)((int)puVar40 + (uint)((byte)pbVar43 < *pbVar43) + *piVar25);
          cVar8 = cVar8 + (char)*piVar25;
          pbVar43 = (byte *)CONCAT31(uVar27,cVar8);
          *pbVar43 = *pbVar43 + cVar8;
code_r0x004030df:
          *pcVar15 = *pcVar15 + cVar45;
          bVar7 = *pbVar43;
          bVar10 = (byte)pbVar43;
          *pbVar43 = *pbVar43 + bVar10;
          *(byte **)(pcVar19 + -0x41) =
               (byte *)((int)puVar40 + (uint)CARRY1(bVar7,bVar10) + *(int *)(pcVar19 + -0x41));
          *pbVar43 = *pbVar43 + bVar10;
          uVar27 = (undefined3)((uint)pbVar43 >> 8);
          bVar10 = bVar10 | (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar10) = *(char *)CONCAT31(uVar27,bVar10) + bVar10;
          pcVar15 = (char *)CONCAT31(uVar27,bVar10 + 0x7b);
          *pcVar15 = *pcVar15 + bVar10 + 0x7b;
          pbVar43 = (byte *)((int)puVar40 + CONCAT31(uVar27,bVar10 - 8) + -1);
          *pbVar43 = *pbVar43 + (bVar10 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar44 = puVar40 + (uint)bVar55 * -2 + 1;
        out(*puVar40,uVar36);
        pbVar13 = unaff_EBP + 1;
        pbStackY_60 = unaff_EBP;
      }
      bVar7 = cVar8 - bVar53;
      pbVar13 = (byte *)((int)puVar44 + (int)puVar49 * 2);
      bVar53 = CARRY1(*pbVar13,bVar7);
      *pbVar13 = *pbVar13 + bVar7;
code_r0x00402ef9:
      pcVar15 = (char *)CONCAT31(uVar27,bVar7 - bVar53);
      pbVar13 = (byte *)((int)puVar49 + (int)unaff_EBP * 2);
      *pbVar13 = *pbVar13 + (bVar7 - bVar53);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar48;
  puVar37 = puVar48 + 0x2828000;
  bVar7 = (byte)puVar46;
  bVar53 = (byte)*puVar37 < bVar7;
  *(byte *)puVar37 = (byte)*puVar37 - bVar7;
  bVar7 = (byte)pbVar13 + *pbVar13;
  piVar25 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar7 + bVar53);
  puVar37 = puVar49;
  uVar52 = (ushort)pbStack_20;
  if (CARRY1((byte)pbVar13,*pbVar13) || CARRY1(bVar7,bVar53)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar15 = *pcVar15 + bVar10;
  uVar52 = (ushort)pbStack_20;
  uStack_18 = uVar51;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar43 = (byte *)CONCAT22(uVar33,CONCAT11(cVar45 + unaff_EBP[(int)pcVar15 * 4],uVar42));
  unaff_EDI[(int)pcVar15] = unaff_EDI[(int)pcVar15] + bVar10;
  goto code_r0x0040254a;
}


