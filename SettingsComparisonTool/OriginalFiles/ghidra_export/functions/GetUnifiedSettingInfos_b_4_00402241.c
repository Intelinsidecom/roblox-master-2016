/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402241
 * Raw Name    : <GetUnifiedSettingInfos>b__4
 * Demangled   : <GetUnifiedSettingInfos>b__4
 * Prototype   : pointer <GetUnifiedSettingInfos>b__4(byte * s, uint * param_2, int param_3)
 * Local Vars  : pbVar45, unaff_EBX, cVar47, puVar46, unaff_ESI, unaff_EBP, puVar49, puVar48, puVar50, unaff_EDI, uVar51, in_ES, in_CS, uVar52, in_SS, uVar53, uVar55, uVar54, bVar56, in_GS_OFFSET, bVar57, in_AF, in_IF, in_TF, bVar59, bVar58, uVar60, in_NT, in_stack_ffffffec, unaff_retaddr, in_stack_fffffff4, pcStackY_80, puStackY_34, pbStackY_48, uStackY_2c, puStackY_30, iVar1, uStack_4, pcVar3, uVar2, uVar5, uVar4, bVar7, uVar6, cVar9, bVar8, cVar11, bVar10, pbVar12, in_EAX, pcVar14, uVar13, pbVar16, iVar15, pcVar18, pbVar17, uVar20, uVar19, piVar22, puVar21, piVar24, pcVar23, uVar26, puVar25, iVar28, uVar27, pbVar30, uVar29, extraout_ECX, puVar31, extraout_ECX_01, s, extraout_ECX_00, uVar32, extraout_ECX_02, bVar34, cVar33, uVar36, bVar35, param_2, bVar38, param_3, uVar37, puVar40, uVar39, puVar42, pbVar41, cVar44, uVar43
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

undefined * __fastcall <GetUnifiedSettingInfos>b__4(byte *s,uint *param_2,int param_3)

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
  char *in_EAX;
  uint3 uVar26;
  undefined3 uVar27;
  byte *pbVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar17;
  int3 iVar28;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
  int *piVar24;
  ushort *puVar25;
  undefined1 uVar29;
  char cVar33;
  undefined2 uVar36;
  byte *pbVar30;
  uint *puVar31;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar34;
  byte bVar35;
  undefined2 uVar37;
  undefined4 uVar32;
  byte bVar38;
  undefined2 uVar39;
  uint *puVar40;
  byte *pbVar41;
  undefined3 uVar43;
  uint *puVar42;
  char cVar44;
  char cVar47;
  int unaff_EBX;
  byte *pbVar45;
  uint *puVar46;
  byte *unaff_EBP;
  undefined4 *unaff_ESI;
  uint *puVar48;
  uint *puVar49;
  byte *unaff_EDI;
  uint *puVar50;
  ushort in_ES;
  ushort uVar51;
  ushort uVar52;
  ushort in_CS;
  ushort uVar53;
  undefined2 in_SS;
  ushort uVar54;
  ushort uVar55;
  int in_GS_OFFSET;
  bool bVar56;
  byte in_AF;
  bool bVar57;
  byte in_TF;
  byte in_IF;
  bool bVar58;
  bool bVar59;
  byte in_NT;
  undefined8 uVar60;
  byte *unaff_retaddr;
  char *pcStackY_80;
  byte *pbStackY_48;
  uint *puStackY_34;
  uint *puStackY_30;
  undefined4 uStackY_2c;
  undefined4 in_stack_ffffffec;
  byte *in_stack_fffffff4;
  ushort uStack_4;
  byte *pbVar16;
  
  bVar58 = false;
                    /* .NET CLR Managed Code */
  pbVar45 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x23),
                                      (char)unaff_EBX));
  *in_EAX = *in_EAX + (byte)in_EAX;
  uVar26 = (uint3)((uint)in_EAX >> 8);
  bVar7 = (byte)in_EAX | *pbVar45;
  piVar24 = (int *)CONCAT31(uVar26,bVar7);
  cVar9 = (char)s;
  bVar8 = (byte)((uint)s >> 8);
  bVar10 = (byte)param_2;
  if (bVar7 == 0) {
    *(char *)piVar24 = (char)*piVar24;
    puVar48 = unaff_ESI + 1;
    out(*unaff_ESI,(short)param_2);
    pbVar12 = (byte *)((uint)uVar26 << 8);
    *(char *)param_2 = (char)*param_2 + cVar9;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar10 - *pbVar45);
    *pbVar45 = *pbVar45;
    *(byte *)param_2 = (byte)*param_2 + bVar8;
    *pbVar12 = *pbVar12;
    *(byte *)param_2 = (byte)*param_2;
    *pbVar12 = *pbVar12;
    *(byte **)(pbVar45 + 0x25) = (byte *)(*(int *)(pbVar45 + 0x25) + (int)puVar48);
  }
  else {
    unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x24);
    *(byte *)piVar24 = (char)*piVar24 + bVar7;
    s = (byte *)CONCAT22((short)((uint)s >> 0x10),CONCAT11(bVar8 | (byte)*param_2,cVar9));
    puVar48 = (uint *)((int)unaff_ESI + *piVar24);
    pcVar14 = (char *)((int)piVar24 + *piVar24);
    uVar27 = (undefined3)((uint)pcVar14 >> 8);
    cVar44 = (char)pcVar14 - *pcVar14;
    pcVar14 = (char *)CONCAT31(uVar27,cVar44);
    *pcVar14 = *pcVar14 + cVar44;
    pbVar12 = (byte *)CONCAT31(uVar27,cVar44 + *pcVar14);
    bVar7 = *s;
    *s = *s + bVar10;
    if (!CARRY1(bVar7,bVar10)) {
      *(char *)param_2 = (char)*param_2 + cVar9;
      pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(char)unaff_EBX - (byte)*puVar48);
      goto _ctor;
    }
  }
  bVar7 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar7;
  puVar31 = (uint *)CONCAT31((int3)((uint)s >> 8),(byte)s | (byte)*param_2);
  unaff_retaddr = (byte *)((uint)unaff_retaddr & 0xffff0000);
  unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x26);
  *pbVar12 = *pbVar12 + bVar7;
  uVar27 = (undefined3)((uint)pbVar12 >> 8);
  bVar7 = bVar7 | (byte)*param_2;
  pbVar12 = (byte *)CONCAT31(uVar27,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *pbVar12 = *pbVar12 + bVar7;
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    in_AF = 9 < (bVar7 + 6 & 0xf) | in_AF;
    bVar8 = bVar7 + 6 + in_AF * '\x06';
    pbVar12 = (byte *)CONCAT31(uVar27,bVar8 + (0x90 < (bVar8 & 0xf0) |
                                              0xf9 < bVar7 | in_AF * (0xf9 < bVar8)) * '`');
  }
  *pbVar12 = *pbVar12 + (char)pbVar12;
  do {
    puVar40 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | pbVar45[0x28],(char)param_2));
    *pbVar12 = *pbVar12 + (char)pbVar12;
    uVar36 = (undefined2)((uint)puVar31 >> 0x10);
    uVar29 = SUB41(puVar31,0);
    bVar8 = (byte)((uint)puVar31 >> 8) | *pbVar12;
    puVar31 = (uint *)CONCAT22(uVar36,CONCAT11(bVar8,uVar29));
    cVar9 = (char)pbVar12 + *pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
    bVar7 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar8;
    if (!CARRY1(bVar7,bVar8)) goto code_r0x004022b3;
    *pbVar12 = *pbVar12 + cVar9;
    s = (byte *)CONCAT22(uVar36,CONCAT11(bVar8 | (byte)*puVar40,uVar29));
    unaff_retaddr = (byte *)((uint)unaff_retaddr & 0xffff0000);
    param_2 = puVar40;
_ctor:
    bVar7 = (byte)((uint)s >> 8);
    uVar36 = (undefined2)((uint)s >> 0x10);
    cVar9 = (char)s;
    bVar8 = bVar7 + *pbVar12;
    puVar31 = (uint *)CONCAT22(uVar36,CONCAT11(bVar8,cVar9));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
    *(byte *)param_2 = (byte)*param_2 + cVar9;
    bVar10 = (byte)pbVar45;
    bVar56 = bVar10 < *(byte *)((int)puVar48 + 2);
    bVar7 = *(byte *)((int)puVar48 + 2);
    cVar44 = bVar10 - bVar7;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),cVar44);
    if ((POPCOUNT(cVar44) & 1U) != 0) {
      if ((char)bVar7 <= (char)bVar10) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    bVar7 = (byte)pbVar12 | *pbVar45;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
    puVar40 = param_2;
    if (bVar7 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
      *pbVar12 = *pbVar12 + bVar7;
      puVar31 = (uint *)CONCAT22(uVar36,CONCAT11(bVar8 | (byte)*param_2,cVar9));
      bVar8 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      puVar48 = (uint *)((int)puVar48 + (uint)CARRY1(bVar8,bVar7) + *(int *)pbVar12);
      pbVar12 = pbVar12 + *(int *)pbVar12;
      cVar9 = (char)pbVar12 - *pbVar12;
      piVar24 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
      *(char *)piVar24 = (char)*piVar24 + cVar9;
      pbVar12 = (byte *)((int)piVar24 + *piVar24);
      uVar13 = *puVar31;
      *(byte *)puVar31 = (byte)*puVar31 + (byte)param_2;
      if (!CARRY1((byte)uVar13,(byte)param_2)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar12 = *pbVar12;
    out(*puVar48,(short)param_2);
    pbVar12 = pbVar12 + -*(int *)pbVar12;
    puVar48 = puVar48 + 1;
code_r0x004022ab:
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar31;
    bVar7 = (char)pbVar12 - *pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
    *pbVar45 = *pbVar45 + (char)puVar40;
    *pbVar45 = *pbVar45 ^ bVar7;
code_r0x004022b3:
    *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)puVar31 >> 8);
    bVar8 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    *pbVar45 = *pbVar45 + bVar8;
    bVar7 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    *(byte **)(pbVar45 + 0x2c) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pbVar45 + 0x2c));
    param_2 = puVar40;
code_r0x004022be:
    *pbVar12 = *pbVar12 + (char)pbVar12;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | (byte)*param_2);
    unaff_retaddr = (byte *)((uint)unaff_retaddr & 0xffff0000);
    unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
    *pbVar12 = *pbVar12 + (byte)pbVar12;
    uVar27 = (undefined3)((uint)pbVar12 >> 8);
    bVar7 = (byte)pbVar12 | (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      *pcVar14 = *pcVar14 + bVar7;
    }
    *pcVar14 = *pcVar14 + bVar7;
    cVar9 = bVar7 + 6;
    pbVar12 = (byte *)CONCAT31(uVar27,cVar9);
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *pbVar12 = *pbVar12 + cVar9;
    puVar40 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | pbVar45[0x2f],(char)param_2));
    *pbVar12 = *pbVar12 + cVar9;
    bVar7 = (byte)((uint)puVar31 >> 8) | *pbVar12;
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar7,(char)puVar31));
    pbVar12 = pbVar12 + *(int *)pbVar12;
    bVar56 = CARRY1(*pbVar45,bVar7);
    *pbVar45 = *pbVar45 + bVar7;
code_r0x004022e0:
    param_2 = puVar40;
    if (!bVar56) goto code_r0x0040230b;
    bVar8 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                               CONCAT11((byte)((uint)puVar31 >> 8) | (byte)*puVar40,(char)puVar31));
    bVar7 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    puVar48 = (uint *)((int)puVar48 + (-(uint)CARRY1(bVar7,bVar8) - *(int *)pbVar12));
code_r0x004022ea:
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + *pbVar12);
code_r0x004022ef:
    *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) + (char)pbVar12;
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar40;
    in_SS = SUB42(in_stack_fffffff4,0);
    param_2 = puVar40;
    while( true ) {
      uVar27 = (undefined3)((uint)pbVar12 >> 8);
      bVar7 = (byte)pbVar12 | (byte)*param_2;
      pbVar12 = (byte *)CONCAT31(uVar27,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + bVar7;
      cVar9 = bVar7 + 0xd;
      pcVar14 = (char *)CONCAT31(uVar27,cVar9);
      *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) + (char)((uint)puVar31 >> 8);
      *pcVar14 = *pcVar14 + cVar9;
      pbVar12 = (byte *)CONCAT31(uVar27,cVar9);
      *pbVar12 = *pbVar12 + cVar9;
code_r0x0040230b:
      puVar40 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((char)((uint)param_2 >> 8) + pbVar45[0x34],(char)param_2))
      ;
      cVar9 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar9;
      pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar45 >> 8) | unaff_EBP[-0x79],
                                          (char)pbVar45));
      *pbVar12 = *pbVar12 + cVar9;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9 + '\x02');
code_r0x00402317:
      pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                 CONCAT11((char)((uint)pbVar45 >> 8) + pbVar45[-0x7a],(char)pbVar45)
                                );
      cVar9 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      cVar44 = cVar9 + '{';
      pbVar12 = (byte *)CONCAT31(uVar27,cVar44);
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      pbVar30 = (byte *)((int)puVar40 + (int)pbVar12);
      *pbVar30 = *pbVar30 + cVar44;
      if ((POPCOUNT(*pbVar30) & 1U) != 0) goto code_r0x004022ab;
      *pbVar12 = *pbVar12 + cVar44;
      piVar24 = (int *)CONCAT31(uVar27,cVar9 + -10);
      uVar13 = (int)piVar24 + *piVar24;
      bVar7 = (byte)uVar13;
      unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar7;
      pbVar12 = (byte *)(uVar13 ^ 0x7d0a0000);
      *pbVar12 = bVar7;
      pbVar30 = (byte *)((int)puVar40 + (int)pbVar12);
      *pbVar30 = *pbVar30 + bVar7;
      param_2 = puVar40;
      if ((POPCOUNT(*pbVar30) & 1U) != 0) goto code_r0x004022be;
      *pbVar12 = *pbVar12 + bVar7;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7 + 0x69);
code_r0x00402342:
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      bVar7 = (char)pcVar14 + *pcVar14;
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte *)(puVar48 + 0x800000) = (byte)puVar48[0x800000] + (char)puVar31;
      cVar44 = (char)pbVar45;
      pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                 CONCAT11((char)((uint)pbVar45 >> 8) + pbVar45[-0x7a],cVar44));
      *pcVar14 = *pcVar14 + bVar7;
      bVar56 = 0xfd < bVar7;
      cVar9 = bVar7 + 2;
      pbVar12 = (byte *)CONCAT31(uVar27,cVar9);
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x004022e0;
      *pbVar12 = *pbVar12 + cVar9;
      cVar9 = bVar7 + 0x71;
      pbVar12 = (byte *)CONCAT31(uVar27,cVar9);
      bVar8 = *pbVar12;
      *pbVar12 = *pbVar12 + cVar9;
      in_stack_fffffff4 = (byte *)(uint)in_ES;
      if (SCARRY1(bVar8,cVar9) == (char)*pbVar12 < '\0') {
        *(byte *)((int)puVar40 + (int)pbVar12) = *(byte *)((int)puVar40 + (int)pbVar12) + cVar44;
        goto code_r0x004022ef;
      }
      *pbVar12 = *pbVar12 + cVar9;
      pbVar12 = (byte *)CONCAT31(uVar27,bVar7 + 0x73);
      bVar56 = (POPCOUNT(bVar7 + 0x73) & 1U) == 0;
      param_2 = puVar40;
code_r0x00402366:
      if (bVar56) {
code_r0x00402368:
        *pbVar12 = *pbVar12 + (char)pbVar12;
        cVar9 = (char)pbVar12 + 'o';
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
        *pcVar14 = *pcVar14 + cVar9;
        puVar40 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar45);
        pcVar14 = pcVar14 + 0x37280512;
        bVar8 = (byte)pcVar14;
        *pcVar14 = *pcVar14 + bVar8;
        puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                   CONCAT11((byte)((uint)puVar31 >> 8) | bRam7d160243,(char)puVar31)
                                  );
        pbVar12 = (byte *)((int)puVar40 + (int)pcVar14);
        bVar7 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar8;
        pcRam00008e7d = pcVar14 + (int)(pcRam00008e7d + CARRY1(bVar7,bVar8));
        bVar56 = SCARRY1(bVar8,'\x02');
        bVar8 = bVar8 + 2;
        puVar25 = (ushort *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
code_r0x0040238b:
        if (bVar56 == (char)bVar8 < '\0') {
          *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
          pcVar14 = (char *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + '\x12');
code_r0x00402391:
          pcVar14 = pcVar14 + 0x42802;
          *pbVar45 = *pbVar45 + (char)((uint)puVar31 >> 8);
          unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
code_r0x00402399:
          bVar7 = (byte)pbVar45 | (byte)((uint)puVar31 >> 8);
          uVar27 = (undefined3)((uint)pcVar14 >> 8);
          pcVar14 = (char *)CONCAT31(uVar27,1);
          *pcVar14 = *pcVar14 + '\x01';
          pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                     CONCAT11((char)((uint)pbVar45 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pbVar45 >> 8),bVar7) +
                                                       -0x72),bVar7));
          *pcVar14 = *pcVar14 + '\x01';
          uVar13 = CONCAT31(uVar27,0x14);
          pcVar14 = (char *)(uVar13 + 0x19061215 + (uint)(0x1f9edfd < uVar13));
          uVar2 = (uint)(0xe4ffffec < uVar13 + 0xfe061202 ||
                        CARRY4(uVar13 + 0x19061215,(uint)(0x1f9edfd < uVar13)));
          uVar13 = *puVar48;
          uVar19 = *puVar48;
          *puVar48 = (uint)(pcVar14 + uVar19 + uVar2);
          if ((SCARRY4(uVar13,(int)pcVar14) != SCARRY4((int)(pcVar14 + uVar19),uVar2)) !=
              (int)*puVar48 < 0) {
            bVar8 = (byte)pcVar14;
            *pcVar14 = *pcVar14 + bVar8;
            iVar15 = CONCAT31((int3)((uint)pcVar14 >> 8),bVar8 + 2) + 0x847d + (uint)(0xfd < bVar8);
            puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | (byte)*puVar40);
            pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x134f26)
            ;
            *pbVar45 = *pbVar45 + bVar7;
code_r0x004023cd:
            out(*puVar48,(short)puVar40);
            uVar13 = *puVar40;
            *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar31;
            pbVar12 = (byte *)(pcVar14 +
                              (uint)CARRY1((byte)uVar13,(byte)puVar31) + *(int *)unaff_EDI);
            bVar59 = SCARRY1((char)puVar40,(byte)*puVar31);
            bVar7 = (char)puVar40 + (byte)*puVar31;
            puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar7);
            bVar57 = (char)bVar7 < '\0';
            puVar48 = puVar48 + 1;
code_r0x004023d6:
            bVar56 = (POPCOUNT(bVar7) & 1U) == 0;
            in_ES = (ushort)unaff_retaddr;
            param_2 = puVar40;
            if (bVar59 != bVar57) {
              *pbVar12 = *pbVar12 + (char)pbVar12;
code_r0x004023db:
              cVar44 = (char)pbVar12;
              uVar27 = (undefined3)((uint)pbVar12 >> 8);
              cVar9 = cVar44 + '\x02';
              pbVar12 = (byte *)CONCAT31(uVar27,cVar9);
              if ((POPCOUNT(cVar9) & 1U) != 0) {
                pbVar30 = (byte *)((int)param_2 + (int)pbVar12);
                *pbVar30 = *pbVar30 + cVar9;
                bVar56 = (POPCOUNT(*pbVar30) & 1U) == 0;
                goto code_r0x00402366;
              }
              *pbVar12 = *pbVar12 + cVar9;
              cVar44 = cVar44 + '\x15';
              pbVar12 = (byte *)CONCAT31(uVar27,cVar44);
              *(byte *)puVar31 = (byte)*puVar31 | (byte)param_2;
              *unaff_EDI = *unaff_EDI | (byte)param_2;
              if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
                *pbVar12 = *pbVar12 + cVar44;
                unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                goto code_r0x00402425;
              }
              *pbVar12 = *pbVar12 + cVar44;
              cVar44 = cVar44 + (byte)*param_2;
              pcVar14 = (char *)CONCAT31(uVar27,cVar44);
              if ((POPCOUNT(cVar44) & 1U) == 0) {
                *pcVar14 = *pcVar14 + cVar44;
                puVar25 = (ushort *)CONCAT31(uVar27,cVar44 + 'o');
                puVar40 = param_2;
code_r0x004023f6:
                uVar13 = *puVar40;
                *(byte *)puVar40 = (byte)*puVar40 + (char)puVar31;
                cVar9 = (char)puVar25;
                if (SCARRY1((byte)uVar13,(char)puVar31) == (char)(byte)*puVar40 < '\0') {
                  in_ES = *puVar25;
                  pbVar12 = (byte *)((int)puVar40 + (int)puVar25);
                  bVar56 = SCARRY1(*pbVar12,cVar9);
                  *pbVar12 = *pbVar12 + cVar9;
                  bVar8 = *pbVar12;
                  goto code_r0x0040238b;
                }
                *(char *)puVar25 = (char)*puVar25 + cVar9;
                cVar9 = cVar9 + '\x02';
                pcVar14 = (char *)CONCAT31((int3)((uint)puVar25 >> 8),cVar9);
                puVar46 = puVar48;
                if ((POPCOUNT(cVar9) & 1U) == 0) {
code_r0x00402402:
                  *pcVar14 = *pcVar14 + (char)pcVar14;
                  uVar27 = (undefined3)((uint)pcVar14 >> 8);
                  piVar24 = (int *)CONCAT31(uVar27,(char)pcVar14 + 'r');
                  *piVar24 = *piVar24 + 0x7b027000;
                  cVar9 = (char)*piVar24;
                  pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                  pbVar12 = (byte *)((int)puVar40 + (int)pcVar14);
                  *pbVar12 = *pbVar12 + cVar9;
                  puVar48 = puVar46;
                  if ((POPCOUNT(*pbVar12) & 1U) == 0) {
                    *pcVar14 = *pcVar14 + cVar9;
                    bVar8 = cVar9 + '{' + *(char *)CONCAT31(uVar27,cVar9 + '{');
                    piVar24 = (int *)CONCAT31(uVar27,bVar8);
                    pbVar12 = (byte *)((int)piVar24 + (int)unaff_EBP);
                    bVar7 = *pbVar12;
                    *pbVar12 = *pbVar12 + bVar8;
                    *piVar24 = (*piVar24 - (int)piVar24) - (uint)CARRY1(bVar7,bVar8);
                    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar31;
                    puVar48 = puVar46 + 1;
                    out(*puVar46,(short)puVar40);
                    cVar9 = bVar8 - (char)*piVar24;
                    pbVar12 = (byte *)CONCAT31(uVar27,cVar9);
                    *(byte *)puVar48 = (byte)*puVar48 + cVar9;
                    param_2 = puVar40;
code_r0x00402425:
                    out(*puVar48,(short)param_2);
                    uVar13 = *param_2;
                    *(byte *)param_2 = (byte)*param_2 + (byte)puVar31;
                    uVar13 = (uint)CARRY1((byte)uVar13,(byte)puVar31);
                    pbVar30 = (byte *)((int)puVar31 + *puVar31) + uVar13;
                    puVar31 = (uint *)CONCAT31((int3)((uint)pbVar30 >> 8),
                                               (char)pbVar30 + *pbVar30 +
                                               (CARRY4((uint)puVar31,*puVar31) ||
                                               CARRY4((int)puVar31 + *puVar31,uVar13)));
                    cRam130a0000 = cRam130a0000 - (char)((uint)pbVar45 >> 8);
                    puVar40 = param_2;
                    puVar48 = puVar48 + 1;
code_r0x00402435:
                    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               (byte)puVar40 | (byte)*puVar40);
                    bVar7 = *pbVar12;
                    *pbVar12 = *pbVar12 + (char)pbVar12;
                    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                               CONCAT11((byte)((uint)puVar31 >> 8) | bVar7 |
                                                        bRam7d170243,(char)puVar31));
code_r0x00402442:
                    pbVar30 = (byte *)((int)puVar40 + (int)pbVar12);
                    bVar8 = *pbVar30;
                    bVar7 = (byte)pbVar12;
                    *pbVar30 = *pbVar30 + bVar7;
                    uVar13 = *puVar40;
                    uVar19 = *puVar40;
                    *puVar40 = (uint)((byte *)(uVar19 + (int)puVar31) + CARRY1(bVar8,bVar7));
                    param_2 = puVar40;
                    if ((SCARRY4(uVar13,(int)puVar31) !=
                        SCARRY4((int)(uVar19 + (int)puVar31),(uint)CARRY1(bVar8,bVar7))) !=
                        (int)*puVar40 < 0) {
                      *pbVar12 = *pbVar12 + bVar7;
                      bVar59 = SCARRY1(bVar7,'\x02');
                      bVar7 = bVar7 + 2;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
code_r0x0040244f:
                      bVar57 = (char)bVar7 < '\0';
                      if (bVar59 == bVar57) {
code_r0x00402451:
                        *pbVar12 = *pbVar12 + (char)pbVar12;
                        bVar7 = (char)pbVar12 + 0x12U | (byte)*puVar40;
                        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
                        cRam162b0000 = cRam162b0000 - bVar7;
code_r0x0040245d:
                        pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),
                                                   (byte)pbVar45 | (byte)((uint)puVar31 >> 8));
                        cVar9 = in((short)puVar40);
                        puVar25 = (ushort *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9);
                        *(char *)puVar25 = (char)*puVar25 + cVar9;
                        *(byte *)puVar40 = (byte)*puVar40 + cVar9;
                        if ((POPCOUNT((byte)*puVar40) & 1U) == 0) {
code_r0x00402466:
                          *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
                          uVar27 = (undefined3)((uint)puVar25 >> 8);
                          bVar7 = (char)puVar25 + 0x13U | (byte)*puVar40;
                          pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                          cVar9 = (byte)puVar31 + *pbVar45;
                          puVar46 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),cVar9);
                          cRam1b000019 = cRam1b000019 + '\x01';
                          uVar13 = (uint)CARRY1((byte)puVar31,*pbVar45);
                          iVar15 = *(int *)pbVar45;
                          iVar1 = *(int *)pbVar45;
                          *(byte **)pbVar45 = (byte *)(iVar1 + (int)puVar46) + uVar13;
                          if ((SCARRY4(iVar15,(int)puVar46) != SCARRY4(iVar1 + (int)puVar46,uVar13))
                              != *(int *)pbVar45 < 0) {
                            *pcVar14 = *pcVar14 + bVar7;
                            iVar15 = CONCAT31(uVar27,bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
                            uVar27 = (undefined3)((uint)iVar15 >> 8);
                            bVar7 = (char)iVar15 + 0x12;
                            puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                                       CONCAT11((byte)((uint)puVar31 >> 8) |
                                                                *(byte *)CONCAT31(uVar27,bVar7),
                                                                cVar9));
                            in_AF = 9 < (bVar7 & 0xf) | in_AF;
                            uVar13 = CONCAT31(uVar27,bVar7 + in_AF * -6) & 0xffffff0f;
                            pcVar14 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                                       CONCAT11((char)((uint)iVar15 >> 8) - in_AF,
                                                                (char)uVar13));
code_r0x00402486:
                            *pcVar14 = *pcVar14 + (char)pcVar14;
                            puVar46 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                                       (byte)puVar40 | (byte)*puVar40);
                            uVar36 = (undefined2)((uint)pbVar45 >> 0x10);
                            bVar7 = (byte)((uint)pbVar45 >> 8) | (byte)((uint)puVar40 >> 8);
                            pbVar12 = (byte *)(pcVar14 + 0x1b000019);
                            puVar40 = (uint *)((int)puVar46 + (int)pbVar12);
                            bVar56 = CARRY4((uint)puVar31,*puVar40);
                            pbVar30 = (byte *)((int)puVar31 + *puVar40);
                            puVar31 = (uint *)(pbVar30 + ((char *)0xe4ffffe6 < pcVar14));
                            piVar24 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                            *piVar24 = (int)((int)puVar31 +
                                            (uint)(bVar56 ||
                                                  CARRY4((uint)pbVar30,
                                                         (uint)((char *)0xe4ffffe6 < pcVar14))) +
                                            *piVar24);
                            pbVar45 = (byte *)CONCAT22(uVar36,CONCAT11(bVar7 + *(char *)(CONCAT22(
                                                  uVar36,CONCAT11(bVar7,(char)pbVar45)) + -0x79),
                                                  (char)pbVar45));
                            puVar40 = puVar46;
code_r0x0040249e:
                            bVar7 = (byte)pbVar12;
                            *pbVar12 = *pbVar12 + bVar7;
                            uVar27 = (undefined3)((uint)pbVar12 >> 8);
                            cVar9 = bVar7 + 2;
                            pbVar12 = (byte *)CONCAT31(uVar27,cVar9);
                            param_2 = puVar40;
                            if (0xfd < bVar7) {
                              bVar8 = *pbVar12;
                              *pbVar12 = *pbVar12 + cVar9;
                              unaff_retaddr =
                                   (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                              if (SCARRY1(bVar8,cVar9) == (char)*pbVar12 < '\0')
                              goto code_r0x00402435;
                              *pbVar12 = *pbVar12 + cVar9;
                              cVar9 = bVar7 + 4;
                              pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                              if ((POPCOUNT(cVar9) & 1U) != 0) {
                                *(byte *)puVar40 = (byte)*puVar40 + (char)puVar31;
                                pbVar12 = (byte *)(pcVar14 + -0x7d170243);
                                goto code_r0x00402442;
                              }
                              *pcVar14 = *pcVar14 + cVar9;
                              cVar9 = bVar7 + 6;
                              pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                              if ((POPCOUNT(cVar9) & 1U) == 0) {
                                while( true ) {
                                  cVar9 = (char)pcVar14;
                                  *pcVar14 = *pcVar14 + cVar9;
                                  uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                  pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '}');
                                  puVar48 = (uint *)((int)puVar48 + -1);
                                  *pcVar14 = *pcVar14 + cVar9 + '}';
                                  cVar44 = cVar9 + '\x7f';
                                  pbVar12 = (byte *)CONCAT31(uVar27,cVar44);
                                  if ((POPCOUNT(cVar44) & 1U) != 0) break;
                                  *pbVar12 = *pbVar12 + cVar44;
                                  cVar44 = cVar9 + -0x7f;
                                  pbVar12 = (byte *)CONCAT31(uVar27,cVar44);
                                  if ((POPCOUNT(cVar44) & 1U) != 0) goto code_r0x00402451;
                                  *pbVar12 = *pbVar12 + cVar44;
                                  pcVar14 = (char *)CONCAT31(uVar27,cVar9 + -2);
                                  unaff_EDI = unaff_EDI + -1;
                                  while( true ) {
                                    cVar9 = (char)pcVar14;
                                    *pcVar14 = *pcVar14 + cVar9;
                                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                    cVar44 = cVar9 + '\x02';
                                    pcVar14 = (char *)CONCAT31(uVar27,cVar44);
                                    if ((POPCOUNT(cVar44) & 1U) != 0) goto code_r0x0040245d;
                                    *pcVar14 = *pcVar14 + cVar44;
                                    pcVar14 = (char *)(CONCAT31(uVar27,cVar9 + 'q') + 1);
                                    *pcVar14 = *pcVar14 + (byte)pcVar14;
                                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                    bVar7 = (byte)pcVar14 | (byte)*puVar40;
                                    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                                    if ((POPCOUNT(bVar7) & 1U) != 0) {
                                      puVar31 = (uint *)((int)puVar31 + *puVar40);
                                      puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),
                                                                 (char)puVar40 + (byte)*puVar40);
                                      unaff_EDI = (byte *)((uint)unaff_EDI | (uint)puVar48);
                                      puVar25 = (ushort *)(pcVar14 + 0x1b000019);
                                      goto code_r0x00402466;
                                    }
                                    *pcVar14 = *pcVar14 + bVar7;
                                    pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x6f);
                                    puVar31 = (uint *)((int)puVar31 + 1);
                                    *pcVar14 = *pcVar14 + bVar7 + 0x6f;
                                    uVar36 = (undefined2)((uint)pbVar45 >> 0x10);
                                    bVar7 = (byte)pbVar45;
                                    bVar8 = (byte)((uint)pbVar45 >> 8) | (byte)*puVar40;
                                    in_SS = (ushort)param_3;
                                    param_3 = CONCAT22(param_3._2_2_,in_ES);
                                    cVar44 = (char)(pcVar14 + -0x21000001);
                                    uVar27 = (undefined3)((uint)(pcVar14 + -0x21000001) >> 8);
                                    cVar9 = cVar44 + -0x13;
                                    pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                                    cVar47 = bVar8 + *(char *)(CONCAT22(uVar36,CONCAT11(bVar8,bVar7)
                                                                       ) + -0x73);
                                    pbVar45 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,bVar7));
                                    *pcVar14 = *pcVar14 + cVar9;
                                    pcVar14 = (char *)(CONCAT31(uVar27,cVar44 + '\x19') | *puVar40);
                                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0)
                                    goto code_r0x00402486;
                                    cVar9 = (char)pcVar14;
                                    *pcVar14 = *pcVar14 + cVar9;
                                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                    pcVar18 = (char *)CONCAT31(uVar27,cVar9 + 'o');
                                    param_2 = (uint *)((int)puVar40 + 1);
                                    *pcVar18 = *pcVar18 + cVar9 + 'o';
                                    bVar7 = bVar7 | (byte)((uint)pcVar14 >> 8);
                                    unaff_retaddr =
                                         (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES
                                                         );
                                    pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '\\');
                                    cVar47 = cVar47 + *(char *)(CONCAT31((int3)((uint)pbVar45 >> 8),
                                                                         bVar7) + -0x78);
                                    pbVar45 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,bVar7));
                                    *pcVar14 = *pcVar14 + cVar9 + '\\';
                                    pcVar14 = (char *)(CONCAT31(uVar27,cVar9 + -0x78) | *param_2);
                                    cVar9 = (char)pcVar14;
                                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                                      pbVar12 = (byte *)CONCAT31(uVar27,cVar9 + '\x02');
                                      puVar40 = param_2;
                                      if ((POPCOUNT(cVar9 + '\x02') & 1U) == 0)
                                      goto code_r0x0040249e;
                                      goto code_r0x00402425;
                                    }
                                    *pcVar14 = *pcVar14 + cVar9;
                                    cVar44 = cVar9 + 'o';
                                    pcVar18 = (char *)CONCAT31(uVar27,cVar44);
                                    puVar40 = (uint *)((int)puVar40 + 2);
                                    *pcVar18 = *pcVar18 + cVar44;
                                    bVar7 = bVar7 | (byte)((uint)pcVar14 >> 8);
                                    pbVar45 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47 + *(char *)(
                                                  CONCAT31((int3)((uint)pbVar45 >> 8),bVar7) + -0x79
                                                  ),bVar7));
                                    *pcVar18 = *pcVar18 + cVar44;
                                    pcVar14 = (char *)(CONCAT31(uVar27,cVar9 + 'z') | 2);
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    cVar9 = (char)pcVar14;
                                    *pcVar14 = *pcVar14 + cVar9;
                                    cVar44 = cVar9 + '\x02';
                                    pcVar14 = (char *)CONCAT31(uVar27,cVar44);
                                    if (SCARRY1(cVar9,'\x02') != cVar44 < '\0') break;
                                    *pcVar14 = *pcVar14 + cVar44;
                                    cVar44 = cVar9 + '\n';
                                    *pbVar45 = *pbVar45 - cVar44;
                                    *(byte *)puVar40 = *(byte *)puVar40 + (char)puVar31;
                                    unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                    *(char *)CONCAT31(uVar27,cVar44) =
                                         *(char *)CONCAT31(uVar27,cVar44) + cVar44;
                                    cVar47 = cVar9 + '\f';
                                    pcVar14 = (char *)CONCAT31(uVar27,cVar47);
                                    if (SCARRY1(cVar44,'\x02') == cVar47 < '\0') {
                                      *pcVar14 = *pcVar14 + cVar47;
                                      pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '\x13');
                                      uVar55 = in_ES;
                                      goto code_r0x0040254a;
                                    }
                                  }
                                }
                                pbVar30 = (byte *)((int)puVar40 + (int)pbVar12);
                                bVar59 = SCARRY1(*pbVar30,cVar44);
                                *pbVar30 = *pbVar30 + cVar44;
                                bVar7 = *pbVar30;
                                goto code_r0x0040244f;
                              }
                              cVar44 = (char)puVar40;
                              cVar47 = cVar44 + *unaff_EDI;
                              puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),cVar47);
                              if (SCARRY1(cVar44,*unaff_EDI) != cVar47 < '\0') {
                                *pcVar14 = *pcVar14 + cVar9;
                                pbVar12 = (byte *)CONCAT31(uVar27,bVar7 + 8);
                                goto code_r0x00402442;
                              }
                              cRam1b000013 = cRam1b000013 + '\x01';
                              goto code_r0x004023cd;
                            }
                            goto code_r0x00402425;
                          }
                          pcVar18 = pcVar14 + 2;
                          *pcVar18 = *pcVar18 + (char)((uint)puVar40 >> 8);
                          puVar31 = puVar46;
                          if ((POPCOUNT(*pcVar18) & 1U) == 0) {
                            *pcVar14 = *pcVar14 + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 2);
                            puVar46 = puVar48;
                            goto code_r0x00402402;
                          }
                          puVar40 = (uint *)((int)puVar40 - *puVar48);
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
                pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                           CONCAT11((char)((uint)pbVar45 >> 8) +
                                                    unaff_EBP[(int)pcVar14 * 4],(char)pbVar45));
                *(char *)((int)puVar40 * 2) = *(char *)((int)puVar40 * 2) + cVar9;
                goto code_r0x00402391;
              }
              *pcVar14 = *pcVar14 + cVar44;
              pbVar12 = (byte *)CONCAT31(uVar27,cVar44 + '\x02');
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
        *(byte *)((int)puVar40 + (int)pcVar14) =
             *(byte *)((int)puVar40 + (int)pcVar14) + (char)pcVar14;
        goto code_r0x00402317;
      }
      bVar56 = CARRY1(*pbVar12,(byte)pbVar12);
      *pbVar12 = *pbVar12 + (byte)pbVar12;
code_r0x004022f3:
      *(byte **)unaff_EDI = (byte *)((int)param_2 + (uint)bVar56 + *(int *)unaff_EDI);
    }
  } while( true );
code_r0x0040254a:
  cVar9 = (char)pcVar14;
  *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) - cVar9;
  *pcVar14 = *pcVar14 + cVar9;
  pcVar18 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + *pcVar14);
  *pcVar18 = *pcVar18 + cVar9 + *pcVar14;
  uVar60 = func_0x0f40255d();
code_r0x0040255d:
  pcVar14 = (char *)((ulonglong)uVar60 >> 0x20);
  piVar24 = (int *)uVar60;
  *piVar24 = (int)((int)piVar24 + *piVar24);
  uVar36 = (undefined2)((uint)pbVar45 >> 0x10);
  uVar29 = SUB41(pbVar45,0);
  cVar47 = (char)((uint)pbVar45 >> 8) + (char)((ulonglong)uVar60 >> 0x28);
  pcVar18 = (char *)CONCAT22(uVar36,CONCAT11(cVar47,uVar29));
  *piVar24 = (int)((int)piVar24 + *piVar24);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar60 >> 0x20);
  cVar9 = (char)uVar60;
  *(char *)piVar24 = (char)*piVar24 + cVar9;
  *(char *)piVar24 = (char)*piVar24 + cVar9;
  *(char *)piVar24 = (char)*piVar24 + cVar9;
  *pcVar14 = *pcVar14 + cVar9;
  *(char *)piVar24 = (char)*piVar24 + cVar9;
  *pcVar18 = *pcVar18 + cVar9;
  *(char *)piVar24 = (char)*piVar24 + cVar9;
  pcVar3 = (code *)swi(1);
  uVar60 = (*pcVar3)();
  pbVar30 = (byte *)((ulonglong)uVar60 >> 0x20);
  pbVar45 = (byte *)uVar60;
  bVar7 = *pbVar45;
  bVar8 = (byte)uVar60;
  *pbVar45 = *pbVar45 + bVar8;
  *pbVar30 = *pbVar30 + bVar8 + CARRY1(bVar7,bVar8);
  *pbVar45 = *pbVar45 + bVar8;
  uVar54 = (ushort)unaff_retaddr;
  *pbVar45 = *pbVar45 + bVar8;
  *pbVar45 = *pbVar45 + bVar8;
  *pbVar45 = *pbVar45 + bVar8;
  *pbVar45 = *pbVar45 + bVar8;
  *pbVar45 = *pbVar45 + bVar8;
  *pbVar45 = *pbVar45 + bVar8;
  *pbVar45 = *pbVar45 + bVar8;
  cVar9 = (char)((ulonglong)uVar60 >> 0x28);
  *pbVar45 = *pbVar45 + cVar9;
  bVar7 = *pbVar45;
  uVar27 = (undefined3)((ulonglong)uVar60 >> 8);
  pcVar14 = (char *)CONCAT31(uVar27,bVar8 + bVar7);
  *pcVar14 = *pcVar14 + cVar9;
  cVar9 = bVar8 + bVar7 + *pcVar14;
  pcVar14 = (char *)CONCAT31(uVar27,cVar9);
  cVar44 = (char)((ulonglong)uVar60 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar44;
  *pcVar14 = *pcVar14 + cVar9;
  *pcVar14 = *pcVar14 + cVar44;
  *pcVar14 = *pcVar14 + cVar9;
  *puVar48 = (uint)(*puVar48 + (int)puVar48);
  cVar47 = cVar47 + unaff_EBP[(int)pcVar14 * 4];
  pbVar45 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47,uVar29));
  pbVar45[(int)pcVar14] = pbVar45[(int)pcVar14] + cVar9;
  *(byte *)puVar48 = (byte)*puVar48 - cVar9;
  *pbVar30 = *pbVar30 + (char)extraout_ECX;
  bVar8 = cVar9 - *pcVar14;
  pcVar14 = (char *)CONCAT31(uVar27,bVar8);
  *pbVar45 = *pbVar45 + cVar44;
  *pbVar30 = *pbVar30 ^ bVar8;
  *pbVar30 = *pbVar30 + cVar47;
  *pcVar14 = *pcVar14 + bVar8;
  cRam12110000 = cRam12110000 + bVar8;
  bVar7 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar8;
  pbVar12 = extraout_ECX;
  if (SCARRY1(bVar7,bVar8) != (char)*pbVar30 < '\0') {
code_r0x004025bd:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12');
    *pcVar14 = *pcVar14 + (char)((uint)pbVar12 >> 8);
    pcVar14 = pcVar14 + -1;
    cVar9 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar9;
    bVar7 = (byte)((uint)pbVar45 >> 8) | unaff_EBP[-0x7b];
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),CONCAT11(bVar7,(char)pbVar45));
    *pcVar14 = *pcVar14 + cVar9;
    cRam0000847d = cRam0000847d + (char)pbVar30;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + '$');
    pbVar45[-0x7b] = pbVar45[-0x7b] + bVar7;
    pbVar16 = pbVar12;
code_r0x004025d8:
    bVar7 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar7;
    bVar56 = 0xf4 < bVar7;
    pcVar14 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7 + 0xb);
    pbVar17 = unaff_EBP;
    do {
      bVar7 = (byte)pcVar14 + *pbVar16;
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      cVar9 = bVar7 + bVar56;
      cVar9 = cVar9 + *(char *)CONCAT31(uVar27,cVar9) +
              (CARRY1((byte)pcVar14,*pbVar16) || CARRY1(bVar7,bVar56));
      pcVar14 = (char *)CONCAT31(uVar27,cVar9);
      *(byte *)puVar48 = (byte)*puVar48 - cVar9;
      *pcVar14 = *pcVar14 + cVar9;
      iVar15 = *(int *)pbVar30;
      pbVar17[(int)pcVar14 * 4] = pbVar17[(int)pcVar14 * 4] + (char)((uint)pbVar45 >> 8);
      pcVar14[(int)pbVar17] = pcVar14[(int)pbVar17] + cVar9;
      pbVar41 = pbVar30 + (-1 - iVar15);
      *pcVar14 = *pcVar14 + cVar9;
      uVar36 = (undefined2)((uint)unaff_retaddr >> 0x10);
      unaff_retaddr = (byte *)CONCAT22(uVar36,uVar55);
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar16 >> 8) | *pbVar41) + unaff_EDI[0x22],
                                          (char)pbVar16));
      *pcVar14 = *pcVar14 + cVar9;
      bVar38 = (char)pbVar41 - pbVar30[1 - iVar15];
      bVar10 = cVar9 - 0xf;
      pbVar16 = (byte *)CONCAT31(uVar27,bVar10);
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar41 >> 0x10),
                                 CONCAT11((char)((uint)pbVar41 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar41 >> 8),bVar38) +
                                                   -0x3f),bVar38));
      bVar7 = *pbVar16;
      bVar8 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar10;
      uVar51 = uVar55;
      if (SCARRY1(bVar8,bVar10)) {
        pbVar16 = (byte *)CONCAT31(uVar27,bVar10 + pbVar16[(int)pbVar17] + CARRY1(bVar7,bVar10));
        goto code_r0x00402677;
      }
      pbVar45 = pbVar45 + -1;
      *pbVar16 = *pbVar16 + bVar10;
      uVar13 = *puVar48;
      *pbVar12 = *pbVar12 + 1;
      pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),(bVar38 | (byte)uVar13) - (byte)*puVar48
                                );
      puVar48 = (uint *)((int)puVar48 +
                        (-(uint)(bVar10 < *pbVar16) - *(int *)CONCAT31(uVar27,bVar10 - *pbVar16)));
      unaff_EBP = (byte *)CONCAT31(uVar27,bVar10 - *pbVar16);
      *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
      bVar8 = (byte)pbVar17;
      *(byte *)puVar48 = (byte)*puVar48 + bVar8;
      bVar7 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar8;
      *(byte **)unaff_EDI = pbVar30 + (uint)CARRY1(bVar7,bVar8) + *(int *)unaff_EDI;
      uVar27 = (undefined3)((uint)pbVar17 >> 8);
      bVar8 = bVar8 | *pbVar30;
      pcVar14 = (char *)CONCAT31(uVar27,bVar8);
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        *pcVar14 = *pcVar14 + bVar8;
        uVar60 = CONCAT44(pbVar30,pcVar14 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar14 = *pcVar14 + bVar8;
      bVar7 = bVar8 + 0xd;
      pbVar16 = (byte *)CONCAT31(uVar27,bVar7);
      *puVar48 = *puVar48 | (uint)pbVar30;
      if (-1 < (int)*puVar48) {
code_r0x00402678:
        *pbVar16 = *pbVar16 + (char)pbVar16;
        pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d160243,(char)pbVar12)
                                  );
        pbVar17 = unaff_EDI;
code_r0x00402680:
        bVar7 = (byte)pbVar12;
        *pbVar12 = *pbVar12 + bVar7;
        uVar27 = (undefined3)((uint)pbVar12 >> 8);
        piVar24 = (int *)((int)pbVar17 * 2 + 0x400009a);
        *piVar24 = *piVar24 + CONCAT31(uVar27,bVar7 + 2) + (uint)(0xfd < bVar7);
        pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                   CONCAT11((char)((uint)pbVar45 >> 8) + *(char *)((int)pbVar30 * 5)
                                            ,(char)pbVar45));
        *(char *)((int)pbVar30 * 2) = *(char *)((int)pbVar30 * 2) + bVar7 + 2;
        unaff_EDI = (byte *)CONCAT31(uVar27,bVar7 + 4);
        *pbVar17 = *pbVar17 - (bVar7 + 4);
code_r0x00402697:
        *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
        pbVar30 = pbVar30 + -*puVar48;
        pbVar12 = unaff_EDI;
code_r0x0040269b:
        pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),
                                   (byte)pbVar45 | (byte)((uint)pbVar16 >> 8));
        uVar32 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar12 = uVar32;
        cVar9 = (char)pbVar12;
        *pbVar30 = *pbVar30 + cVar9;
        if ((POPCOUNT(*pbVar30) & 1U) == 0) {
          *pbVar12 = *pbVar12 + cVar9;
          pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9 + '\x13');
          pbVar12 = pbVar16;
          unaff_EDI = pbVar17;
code_r0x004026a8:
          uVar27 = (undefined3)((uint)pcVar14 >> 8);
          bVar8 = (byte)pcVar14 + 2 + cRam001b15fe + (0xfd < (byte)pcVar14);
          bVar7 = *pbVar45;
          bVar10 = (byte)pbVar45;
          *pbVar45 = *pbVar45 + bVar10;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar27,bVar8) + (uint)CARRY1(bVar7,bVar10);
          iVar15 = CONCAT31(uVar27,bVar8 + 2) + 0x917d + (uint)(0xfd < bVar8);
          cVar9 = (char)iVar15;
          uVar27 = (undefined3)((uint)iVar15 >> 8);
          bVar7 = cVar9 + 0x3a;
          pbVar41 = (byte *)CONCAT31(uVar27,bVar7);
          *pbVar41 = *pbVar41 + bVar7;
          uVar43 = (undefined3)((uint)pbVar30 >> 8);
          bVar8 = (byte)pbVar30 | *pbVar30;
          uVar19 = CONCAT31(uVar27,cVar9 + '8');
          uVar13 = uVar19 + 0x1b00001b;
          pcVar14 = (char *)(uVar13 + (1 < bVar7) + *puVar48 +
                            (uint)(0xe4ffffe4 < uVar19 || CARRY4(uVar13,(uint)(1 < bVar7))));
          bVar7 = bVar8 + *pbVar12;
          pbVar30 = (byte *)CONCAT31(uVar43,bVar7);
          uVar27 = (undefined3)((uint)pcVar14 >> 8);
          cVar9 = (char)pcVar14;
          if (SCARRY1(bVar8,*pbVar12) != (char)bVar7 < '\0') {
            *pcVar14 = *pcVar14 + cVar9;
            pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '\x02');
            uVar37 = (undefined2)((uint)pbVar45 >> 0x10);
            cVar47 = (char)((uint)pbVar45 >> 8) + pbVar45[-0x68];
            pbVar45 = (byte *)CONCAT22(uVar37,CONCAT11(cVar47,bVar10));
            *pcVar14 = *pcVar14 + cVar9 + '\x02';
            bVar8 = cVar9 + 0x2a;
            pbVar16 = (byte *)CONCAT31(uVar27,bVar8);
            *pbVar16 = *pbVar16 | bVar8;
            bVar7 = *pbVar45;
            cVar44 = (char)((uint)pbVar12 >> 8);
            *pbVar45 = *pbVar45 + cVar44;
            pbVar17 = unaff_EDI;
            if (SCARRY1(bVar7,cVar44) != (char)*pbVar45 < '\0') {
              *pbVar16 = *pbVar16 + bVar8;
              bVar7 = cVar9 + 0x2c;
              if ((POPCOUNT(bVar7) & 1U) == 0) {
                *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                bVar8 = cVar9 + 0x59;
                pcVar14 = (char *)CONCAT31(uVar27,bVar8);
                *(char **)pbVar30 = pcVar14 + (uint)(0xd2 < bVar7) + *(int *)pbVar30;
                pbVar45 = (byte *)CONCAT22(uVar37,CONCAT11(cVar47 + pbVar45[-0x67],bVar10));
                *pcVar14 = *pcVar14 + bVar8;
                pbVar17 = (byte *)((CONCAT31(uVar27,cVar9 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar8));
                pbVar16 = pbVar12;
                uStack_4 = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar9 = (char)unaff_EDI + '\x02';
                pbVar12 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar9);
                bVar56 = (POPCOUNT(cVar9) & 1U) == 0;
                unaff_EDI = pbVar41;
code_r0x00402704:
                if (bVar56) {
                  *pbVar12 = *pbVar12 + (char)pbVar12;
                  cVar9 = (char)pbVar12 + '\x02';
                  pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
                  puVar31 = puVar48;
                  if ((POPCOUNT(cVar9) & 1U) == 0) {
code_r0x0040270c:
                    uVar53 = in_ES;
                    cVar9 = (char)pcVar14;
                    *pcVar14 = *pcVar14 + cVar9;
                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                    bVar7 = cVar9 + 0x6f;
                    piVar24 = (int *)CONCAT31(uVar27,bVar7);
                    iVar15 = *piVar24;
                    *(byte *)piVar24 = (char)*piVar24 + bVar7;
                    in_ES = uVar53;
                    pbVar12 = pbVar30;
                    if ((char)*piVar24 != '\0' &&
                        SCARRY1((char)iVar15,bVar7) == (char)*piVar24 < '\0') {
                      *(byte *)piVar24 = (char)*piVar24 + bVar7;
                      bVar8 = cVar9 + 0x9c;
                      piVar24 = (int *)CONCAT31(uVar27,bVar8);
                      puVar48 = puVar31 + (int)pbVar17 * 2;
                      uVar13 = *puVar48;
                      uVar19 = *puVar48;
                      *puVar48 = (uint)(pbVar30 + uVar19 + (0xd2 < bVar7));
                      *piVar24 = (*piVar24 - (int)piVar24) -
                                 (uint)(CARRY4(uVar13,(uint)pbVar30) ||
                                       CARRY4((uint)(pbVar30 + uVar19),(uint)(0xd2 < bVar7)));
                      uVar13 = *puVar31;
                      *(byte *)puVar31 = (byte)*puVar31 + bVar8;
                      pbVar12 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar53);
                      if (!CARRY1((byte)uVar13,bVar8)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    unaff_EDI = pbVar12;
                    uVar51 = uStack_4;
                    *(byte *)piVar24 = (char)*piVar24 + (byte)piVar24;
                    uVar27 = (undefined3)((uint)piVar24 >> 8);
                    bVar7 = (byte)piVar24 | *(byte *)((int)piVar24 + 0x400000d);
                    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                    if ((char)bVar7 < '\x01') {
                      bVar56 = pcVar14 < (char *)0x6fe1411;
                      pcVar14 = pcVar14 + -0x6fe1411;
                    }
                    else {
                      *pcVar14 = *pcVar14 + bVar7;
                      bVar10 = bVar7 + 0x28;
                      puVar48 = (uint *)CONCAT31(uVar27,bVar10);
                      *puVar48 = *puVar48 | (uint)puVar48;
                      bVar8 = *pbVar45;
                      cVar9 = (char)((uint)pbVar16 >> 8);
                      *pbVar45 = *pbVar45 + cVar9;
                      if (*pbVar45 == 0 || SCARRY1(bVar8,cVar9) != (char)*pbVar45 < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar48 = (char)*puVar48 + bVar10;
                      pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x55);
                      puVar48 = puVar31 + (int)pbVar17 * 2;
                      bVar56 = CARRY4(*puVar48,(uint)pbVar30) ||
                               CARRY4((uint)(pbVar30 + *puVar48),(uint)(0xd2 < bVar10));
                      *puVar48 = (uint)(pbVar30 + *puVar48 + (0xd2 < bVar10));
                      in_stack_fffffff4 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar27 = (undefined3)((uint)pcVar14 >> 8);
                      bVar7 = ((char)pcVar14 - *pcVar14) - bVar56;
                      puVar48 = (uint *)CONCAT31(uVar27,bVar7);
                      uVar13 = *puVar31;
                      *(byte *)puVar31 = (byte)*puVar31 + bVar7;
                      if (CARRY1((byte)uVar13,bVar7)) break;
                      pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),
                                                 (byte)pbVar45 | (byte)((uint)pbVar30 >> 8));
                      pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 2);
                      while( true ) {
                        uVar51 = (ushort)unaff_EDI;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar9 = (char)pcVar14;
                        *pcVar14 = *pcVar14 + cVar9;
                        uVar27 = (undefined3)((uint)pcVar14 >> 8);
                        bVar7 = cVar9 + 2;
                        pcVar14 = (char *)CONCAT31(uVar27,bVar7);
                        if (SCARRY1(cVar9,'\x02') != (char)bVar7 < '\0') break;
                        *pcVar14 = *pcVar14 + bVar7;
                        cVar47 = (char)pbVar30;
                        *pbVar17 = *pbVar17 - cVar47;
                        *pbVar30 = *pbVar30 + (char)pbVar16;
                        bVar8 = (cVar9 + '\t') - *(char *)CONCAT31(uVar27,cVar9 + '\t');
                        pbVar12 = (byte *)CONCAT31(uVar27,bVar8);
                        bVar7 = *pbVar12;
                        *pbVar12 = *pbVar12 + bVar8;
                        pbVar41 = pbVar16 + 1;
                        cVar9 = bVar8 - CARRY1(bVar7,bVar8);
                        pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        *pcVar14 = *pcVar14 + cVar9;
                        cVar44 = (char)((uint)pbVar41 >> 8);
                        pbVar16[2] = pbVar16[2] + cVar44;
                        *pcVar14 = *pcVar14 + cVar9;
                        pcVar14 = (char *)(*(int *)pbVar41 * 0x170000);
                        *pcVar14 = *pcVar14;
                        *pcVar14 = *pcVar14;
                        *pbVar41 = *pbVar41;
                        uVar37 = (undefined2)((uint)pbVar45 >> 0x10);
                        cVar9 = (char)pbVar45;
                        bVar10 = (char)((uint)pbVar45 >> 8) + *(char *)((int)pbVar30 * 5);
                        pbVar45 = (byte *)CONCAT22(uVar37,CONCAT11(bVar10,cVar9));
                        pbVar45[(int)pcVar14] = pbVar45[(int)pcVar14];
                        *pcVar14 = *pcVar14 - cVar9;
                        *pbVar30 = *pbVar30 + (char)pbVar41;
                        uVar27 = (undefined3)((uint)pcVar14 >> 8);
                        bVar8 = -*pcVar14;
                        pbVar12 = (byte *)CONCAT31(uVar27,bVar8);
                        *pbVar45 = *pbVar45 + cVar47;
                        *pbVar30 = *pbVar30 ^ bVar8;
                        *pbVar30 = *pbVar30 + bVar8;
                        *pbVar12 = *pbVar12 + bVar8;
                        bVar7 = *pbVar12;
                        *pbVar12 = *pbVar12 + bVar8;
                        *(byte **)pbVar30 = pbVar30 + (uint)CARRY1(bVar7,bVar8) + *(int *)pbVar30;
                        bVar7 = *pbVar30;
                        *pbVar30 = *pbVar30 + bVar8;
                        if (SCARRY1(bVar7,bVar8) == (char)*pbVar30 < '\0') {
                          pcVar14 = (char *)((uint)pbVar12 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar14 = *pcVar14 + (char)pcVar14;
                          uVar54 = uVar55;
                          uStack_4 = (ushort)param_3;
                        }
                        else {
                          *pbVar12 = *pbVar12 + bVar8;
                          cVar11 = bVar8 + 0x12;
                          pcVar14 = (char *)CONCAT31(uVar27,cVar11);
                          bVar7 = *pbVar45;
                          *pbVar45 = *pbVar45 + cVar11;
                          uStack_4 = uVar51;
                          if (SCARRY1(bVar7,cVar11) != (char)*pbVar45 < '\0') {
                            *pcVar14 = *pcVar14 + cVar11;
                            cVar11 = bVar8 + 0x24;
                            pcVar14 = (char *)CONCAT31(uVar27,cVar11);
                            *pcVar14 = *pcVar14 + cVar44;
                            *pcVar14 = *pcVar14 + cVar11;
                            bVar10 = bVar10 | unaff_EBP[-0x6e];
                            pcVar18 = (char *)CONCAT22(uVar37,CONCAT11(bVar10,cVar9));
                            *pcVar14 = *pcVar14 + cVar11;
                            cRam0000917d = cRam0000917d + cVar47;
                            bVar38 = bVar8 + 0x48;
                            pcVar18[-0x6e] = pcVar18[-0x6e] + bVar10;
                            *(char *)CONCAT31(uVar27,bVar38) =
                                 *(char *)CONCAT31(uVar27,bVar38) + bVar38;
                            bVar7 = bVar8 + 0x53 + *unaff_retaddr;
                            cVar9 = bVar7 + (0xf4 < bVar38);
                            cVar9 = cVar9 + *(char *)CONCAT31(uVar27,cVar9) +
                                    (CARRY1(bVar8 + 0x53,*unaff_retaddr) ||
                                    CARRY1(bVar7,0xf4 < bVar38));
                            pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                            *pcVar18 = *pcVar18 - (char)uVar55;
                            *pcVar14 = *pcVar14 + cVar9;
                            pbVar30 = pbVar30 + -*(int *)pbVar30;
                            *(char *)((int)pbVar30 * 5) = *(char *)((int)pbVar30 * 5) + bVar10;
                            pcVar14[(int)unaff_EBP] = pcVar14[(int)unaff_EBP] + cVar9;
                            *pcVar14 = *pcVar14 + cVar9;
                            bVar8 = (byte)(uVar55 >> 8) | *pbVar30;
                            uVar29 = (undefined1)param_3;
                            cVar44 = (char)((uint)param_3 >> 8) + *(char *)(param_3 + 0xf);
                            *pcVar14 = *pcVar14 + cVar9;
                            bVar7 = cVar9 + 0x2aU & *pbVar30;
                            iVar15 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
                            cVar44 = cVar44 + *(char *)(CONCAT22(param_3._2_2_,
                                                                 CONCAT11(cVar44,uVar29)) + 0x10);
                            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar30;
                            iVar1 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
                            puVar46 = (uint *)CONCAT22(param_3._2_2_,
                                                       CONCAT11(cVar44 + *(char *)(CONCAT22(param_3.
                                                  _2_2_,CONCAT11(cVar44,uVar29)) + 0x11),uVar29));
                            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar30;
                            puVar40 = (uint *)(pbVar17 + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar15
                                              );
                            *(char *)CONCAT31(uVar27,bVar7) =
                                 *(char *)CONCAT31(uVar27,bVar7) + bVar7;
                            pbVar45 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
                            puVar48 = (uint *)CONCAT22(uVar36,CONCAT11(bVar8 + *pbVar45,(char)uVar55
                                                                      ));
                            uVar60 = CONCAT44(pbVar30,pbVar45 + (uint)CARRY1(bVar8,*pbVar45) +
                                                                *(int *)pbVar45);
                            uVar55 = uVar51;
                            goto code_r0x00402866;
                          }
                        }
                        cVar44 = (char)pcVar14;
                        uVar27 = (undefined3)((uint)pcVar14 >> 8);
                        cVar9 = cVar44 + '\x02';
                        piVar24 = (int *)CONCAT31(uVar27,cVar9);
                        pbVar16 = pbVar41;
                        in_ES = uVar51;
                        pbVar12 = pbVar30;
                        if (SCARRY1(cVar44,'\x02') != cVar9 < '\0') goto code_r0x00402724;
                        *(char *)piVar24 = (char)*piVar24 + cVar9;
                        pcVar14 = (char *)CONCAT31(uVar27,cVar44 + '\n');
                        *(byte *)puVar31 = (byte)*puVar31 - cVar47;
                        *pbVar30 = *pbVar30 + (char)pbVar41;
                      }
                      pbVar12 = unaff_EBP + 0x6fe1411;
                      bVar56 = CARRY1(*pbVar12,bVar7);
                      *pbVar12 = *pbVar12 + bVar7;
                    }
                    goto code_r0x00402746;
                  }
                  pbVar45[(int)pbVar30] = pbVar45[(int)pbVar30] + cVar9;
                  pbVar12 = pbVar16;
                  unaff_EDI = pbVar17;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar53 = 0x927c;
              in_stack_ffffffec = 0x40268f;
              uVar60 = func_0x02040000(in_CS,in_stack_fffffff4,pbVar41);
              pbVar30 = (byte *)((ulonglong)uVar60 >> 0x20);
              *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
              pbVar16 = (byte *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '\x12');
              pbVar12 = extraout_ECX_00;
              in_CS = uVar53;
            }
            goto code_r0x00402680;
          }
          pbVar17 = unaff_EBP + -1;
          *pcVar14 = *pcVar14 + cVar9;
          pbVar30 = (byte *)CONCAT31(uVar43,bVar7 | *pbVar45);
          pbVar16 = (byte *)CONCAT31(uVar27,cVar9 + ':');
code_r0x00402677:
          puVar48 = (uint *)((int)puVar48 + -1);
          unaff_EBP = pbVar17;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar16 = *pbVar16 + bVar7;
      pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar45 >> 8) | unaff_EBP[-0x6b],
                                          (char)pbVar45));
      *pbVar16 = *pbVar16 + bVar7;
      cVar9 = bVar8 + 0xf;
      pcVar14 = (char *)CONCAT31(uVar27,cVar9);
      param_3 = CONCAT22(param_3._2_2_,uVar54);
      if (SCARRY1(bVar7,'\x02') == cVar9 < '\0') {
        pcVar14 = pcVar14 + (0xfd < bVar7) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar14 = *pcVar14 + cVar9;
      cVar44 = bVar8 + 0x11;
      pbVar17 = (byte *)CONCAT31(uVar27,cVar44);
      uVar60 = CONCAT44(pbVar30,pbVar17);
      param_3 = CONCAT22(param_3._2_2_,uVar54);
      pbVar16 = pbVar12;
      pbVar12 = unaff_EDI;
      if (SCARRY1(cVar9,'\x02') == cVar44 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar17 = *pbVar17 + (char)pbVar17;
      bVar7 = (char)pbVar17 + 2;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar14 = *pcVar14 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar17 = pbVar45 + (int)pbVar16;
      bVar56 = CARRY1(*pbVar17,bVar7);
      *pbVar17 = *pbVar17 + bVar7;
      pbVar17 = unaff_EBP;
      unaff_EDI = pbVar12;
      uVar55 = uVar51;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar48 = (char)*puVar48 + (byte)puVar48;
  uVar27 = (undefined3)((uint)puVar48 >> 8);
  bVar7 = (byte)puVar48 | *(byte *)((int)puVar48 + 0x400000e);
  pcVar14 = (char *)CONCAT31(uVar27,bVar7);
  puVar48 = puVar31;
  if ('\0' < (char)bVar7) {
    *pcVar14 = *pcVar14 + bVar7;
    bVar7 = bVar7 + 0x28 | *(byte *)CONCAT31(uVar27,bVar7 + 0x28);
    *pbVar45 = *pbVar45 + (char)((uint)pbVar16 >> 8);
    puVar48 = puVar31 + 1;
    out(*puVar31,(short)pbVar30);
    *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
    pcVar14 = (char *)(uint)(bVar7 | *pbVar30);
    in_stack_fffffff4 = unaff_EBP;
  }
  bVar7 = (byte)pcVar14 & 0x7b;
  bVar56 = (char)(bVar7 + 0x17) < '\0';
  uStack_4 = uVar53;
  if (SCARRY1(bVar7,'\x17') == bVar56) {
    pbVar41 = unaff_EDI;
    if (SCARRY1(bVar7,'\x17') != bVar56) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar44 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar44;
  iVar28 = (int3)((uint)unaff_EDI >> 8);
  cVar9 = cVar44 + '\x02';
  pbVar12 = (byte *)CONCAT31(iVar28,cVar9);
  bVar56 = (POPCOUNT(cVar9) & 1U) == 0;
  if (!bVar56) goto code_r0x00402704;
  *pbVar12 = *pbVar12 + cVar9;
  cVar44 = cVar44 + '\x04';
  pcVar14 = (char *)CONCAT31(iVar28,cVar44);
  if ((POPCOUNT(cVar44) & 1U) == 0) {
    *pcVar14 = *pcVar14 + cVar44;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar30 = (byte *)((int)iVar28 >> 0x17);
  puVar31 = puVar48;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar42 = (uint *)((ulonglong)uVar60 >> 0x20);
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
    cVar9 = (char)puVar46 - (byte)*puVar31;
    iVar15 = CONCAT22((short)((uint)puVar46 >> 0x10),
                      CONCAT11((char)((uint)puVar46 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar46 >> 8),cVar9) + 0x12),cVar9));
    *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
    uVar27 = (undefined3)((ulonglong)uVar60 >> 8);
    bVar7 = (char)uVar60 + 0x2aU & (byte)*puVar42;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    puVar40 = (uint *)((int)puVar40 + *(int *)(unaff_EBP + 0x12));
    *pcVar14 = *pcVar14 + bVar7;
    puVar21 = (uint *)CONCAT31(uVar27,bVar7 + 0x2a);
    pbVar45 = (byte *)(uint)uVar55;
get_Value:
    cVar9 = *(char *)(iVar15 + 0x13);
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    uVar27 = (undefined3)((uint)puVar21 >> 8);
    bVar7 = (char)puVar21 + 0x2aU & (byte)*puVar42;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    puVar40 = (uint *)((int)puVar40 + *(int *)(unaff_EBP + 0x13));
    *pcVar14 = *pcVar14 + bVar7;
    pbVar12 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
    uVar13 = (uint)uVar55;
    bVar7 = (byte)((uint)puVar48 >> 8);
    bVar8 = bVar7 + *pbVar12;
    pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
    puVar46 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar15 >> 0x10),
                                               CONCAT11((char)((uint)iVar15 >> 8) + cVar9,
                                                        (char)iVar15)) >> 8),
                               (char)iVar15 - (byte)*puVar31);
    puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                               CONCAT11(bVar8 + *pbVar12,(char)puVar48));
    pbVar12 = pbVar12 + (uint)CARRY1(bVar8,*pbVar12) + *(int *)pbVar12;
code_r0x00402898:
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
    bVar7 = (byte)puVar42;
    uVar36 = CONCAT11((char)((uint)puVar42 >> 8) - (byte)*puVar31,bVar7);
    pbVar30 = (byte *)CONCAT22((short)((uint)puVar42 >> 0x10),uVar36);
    pcVar14 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((char)((uint)puVar46 >> 8) + (byte)puVar46[-0x19],
                                        (char)puVar46));
    *pbVar12 = *pbVar12 + (char)pbVar12;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + '\x03');
    puVar46 = puVar31;
    do {
      puVar31 = puVar46 + 1;
      out(*puVar46,uVar36);
      pcVar14 = pcVar14 + -1;
      bVar8 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar8;
      puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                 CONCAT11((byte)((uint)puVar48 >> 8) | *pbVar30,(char)puVar48));
      *pbVar12 = *pbVar12 + bVar8;
      *pcVar14 = *pcVar14 + bVar7;
      *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar8;
      *pbVar12 = *pbVar12 + bVar8;
      *pbVar12 = *pbVar12 | bVar8;
      bVar56 = CARRY1((byte)*puVar48,bVar7);
      *(byte *)puVar48 = (byte)*puVar48 + bVar7;
      cVar9 = bVar8 + 10 + bVar56;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar9);
      puVar46 = puVar31;
    } while (bVar8 < 0xf6 && !CARRY1(bVar8 + 10,bVar56));
    *pbVar12 = *pbVar12 + cVar9;
    in_stack_ffffffec = CONCAT22((short)((uint)in_stack_ffffffec >> 0x10),uVar51);
    pcVar18 = (char *)((uint)pbVar12 | *puVar40);
    puVar46 = (uint *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                               CONCAT11((char)((uint)pcVar14 >> 8) + unaff_EBP[-100],(char)pcVar14))
    ;
    *pcVar18 = *pcVar18 + (char)pcVar18;
    bVar7 = (char)pcVar18 + 7;
    uVar60 = CONCAT44(pbVar30,CONCAT31((int3)((uint)pcVar18 >> 8),bVar7));
code_r0x004028c8:
    puVar42 = (uint *)((ulonglong)uVar60 >> 0x20);
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
  puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '-');
  puVar31 = (uint *)((uint)puVar31 | *(uint *)((int)puVar42 + 0x3b));
  bVar56 = CARRY4(*puVar21,(uint)puVar21);
  uVar19 = *puVar21;
  *puVar21 = (uint)(*puVar21 + (int)puVar21);
  if (SCARRY4(uVar19,(int)puVar21)) {
    bVar56 = CARRY4(*puVar21,(uint)puVar21);
    bVar57 = SCARRY4(*puVar21,(int)puVar21);
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    bVar7 = POPCOUNT(*puVar21 & 0xff);
    if (bVar57) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + bVar56);
    *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
    bVar56 = (POPCOUNT((byte)*puVar42) & 1U) == 0;
    if (bVar56) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar56) {
      iVar15 = CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 - (byte)*puVar31);
      goto get_Value;
    }
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    pbVar45 = unaff_EBP;
code_r0x004028e2:
    uVar36 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
    uVar19 = *puVar21;
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    if (SCARRY4(uVar19,(int)puVar21)) {
      if (*puVar21 == 0 || SCARRY4(uVar19,(int)puVar21) != (int)*puVar21 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar46 = (uint *)((int)puVar46 + -1);
    cVar9 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                               CONCAT11((byte)((uint)puVar48 >> 8) |
                                        *(byte *)((int)puVar48 + 0x16d7207),(char)puVar48));
    pbVar12 = (byte *)((int)puVar21 + 0x7d);
    bVar7 = *pbVar12;
    bVar10 = (byte)((uint)puVar42 >> 8);
    bVar8 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar10;
    uVar13 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar8,bVar10) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar12 < '\0') * 0x80 | (uint)(*pbVar12 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar12) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar7,bVar10);
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    pbVar12 = (byte *)(CONCAT31((int3)((uint)puVar21 >> 8),cVar9 + '+') ^ *puVar40);
    if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar12;
    *pbVar12 = *pbVar12 + bVar7;
    puVar21 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar21 + 0x6f) = *(byte *)((int)puVar21 + 0x6f) + bVar10;
    }
code_r0x00402905:
    uVar60 = CONCAT44(puVar42,puVar21);
    puVar46 = (uint *)((int)puVar46 + -1);
    cVar9 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    bVar7 = (byte)((uint)puVar48 >> 8) | (byte)*puVar48;
    puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),CONCAT11(bVar7,(char)puVar48));
    uVar51 = (ushort)uVar13;
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar21 = (byte)*puVar21 + cVar9;
      puVar40 = (uint *)((int)puVar40 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar21 = (byte)*puVar21 + cVar9;
    uVar13 = 0x40291c;
    uVar60 = func_0x7346291c();
    *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
    puVar48 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar60 >> 0x20));
    puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar51);
    uStackY_2c = puVar46;
    while( true ) {
      pcVar14 = (char *)((int)uVar60 * 2);
      *pcVar14 = *pcVar14 - (char)puVar48;
      uVar19 = *puVar46;
      cVar9 = (char)((uint)puVar48 >> 8);
      *(byte *)puVar46 = (byte)*puVar46 + cVar9;
      if (SCARRY1((byte)uVar19,cVar9) == (char)(byte)*puVar46 < '\0') {
        pbVar12 = (byte *)((int)puVar40 + (int)uVar60);
        *pbVar12 = *pbVar12 + (char)uVar60;
        bVar7 = *pbVar12;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar42 = (uint *)((ulonglong)uVar60 >> 0x20);
      cVar9 = (char)uVar60;
      *(char *)uVar60 = *(char *)uVar60 + cVar9;
      uVar27 = (undefined3)((ulonglong)uVar60 >> 8);
      bVar7 = cVar9 + 7;
      puVar21 = (uint *)CONCAT31(uVar27,bVar7);
      bVar8 = (byte)((ulonglong)uVar60 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
      pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '3');
      uVar36 = (undefined2)((uint)puVar46 >> 0x10);
      uVar29 = SUB41(puVar46,0);
      bVar7 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar31 + 0x16) + (0xd3 < bVar7);
      puVar46 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7,uVar29));
      *pcVar14 = *pcVar14 + cVar9 + '3';
      cVar44 = cVar9 + ':';
      puVar21 = (uint *)CONCAT31(uVar27,cVar44);
      if ((POPCOUNT(cVar44) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)puVar42 + 7);
        puVar46 = (uint *)CONCAT22(uVar36,CONCAT11(bVar7,uVar29));
        bVar56 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar21 = (byte)*puVar21 + cVar44;
      puVar21 = (uint *)(CONCAT31(uVar27,cVar9 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar12 = (byte *)((int)puVar21 + 0x72);
      bVar57 = SCARRY1(*pbVar12,bVar8);
      *pbVar12 = *pbVar12 + bVar8;
      bVar7 = POPCOUNT(*pbVar12);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar21 + 0x72) = *(byte *)((int)puVar21 + 0x72) + (char)((uint)puVar42 >> 8)
        ;
      }
      else if (bVar57) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar9 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,uVar54);
code_r0x00402957:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      cVar9 = (char)puVar21 + '(';
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),cVar9);
      *(byte *)puVar21 = (byte)*puVar21 + cVar9;
      puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                 CONCAT11((byte)((uint)puVar48 >> 8) | (byte)*puVar21,(char)puVar48)
                                );
      *(byte *)puVar21 = (byte)*puVar21 + cVar9;
      puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                 CONCAT11((byte)((uint)puVar42 >> 8) | (byte)puVar46[0x18],
                                          (char)puVar42));
      puVar31 = puStackY_34;
      puVar40 = puStackY_30;
code_r0x00402966:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      bVar7 = (byte)((uint)puVar46 >> 8) | *(byte *)((int)puVar42 + 7);
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar7,(char)puVar46));
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + '~');
code_r0x00402971:
      uVar13 = (uint)uVar54;
code_r0x00402972:
      uVar36 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar21;
      in_stack_ffffffec = CONCAT22(uVar36,in_CS);
      in_CS = 0x2d0a;
      uVar60 = func_0x00006128(in_stack_ffffffec);
      puVar48 = (uint *)uVar60;
      piVar24 = (int *)((int)((ulonglong)uVar60 >> 0x20) + -0x3d);
      *piVar24 = (int)((int)puVar31 + (uint)bVar7 + *piVar24);
      bVar56 = SCARRY4(*puVar48,(int)puVar48);
      *puVar48 = *puVar48 + (int)puVar48;
      uVar19 = *puVar48;
      puVar48 = extraout_ECX_02;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar19 & 0xff);
      if (bVar56) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11((byte)((uint)puVar48 >> 8) |
                                            *(byte *)((ulonglong)uVar60 >> 0x20),(char)puVar48));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar14 = (char *)((ulonglong)uVar60 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar60 = *(char *)uVar60 + (char)uVar60;
        *pcVar14 = *pcVar14 + (char)puVar48;
        uVar60 = CONCAT44(CONCAT22((short)((ulonglong)uVar60 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar60 >> 0x28) - pcVar14[0x1f],
                                            (char)((ulonglong)uVar60 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar60 >> 8),(char)uVar60 + '('));
code_r0x00402991:
        puVar42 = (uint *)((ulonglong)uVar60 >> 0x20);
        pbVar12 = (byte *)uVar60;
        bVar7 = (byte)uVar60;
        bVar56 = CARRY1(bVar7,*pbVar12);
        puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar60 >> 8),bVar7 + *pbVar12);
        cVar9 = bVar7 + *pbVar12;
        if (SCARRY1(bVar7,*pbVar12)) goto code_r0x004029c4;
code_r0x00402995:
        puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),
                                   CONCAT11(((char)((uint)puVar42 >> 8) -
                                            *(byte *)((int)puVar42 + 0x6b)) - bVar56,(char)puVar42))
        ;
        bVar7 = (byte)puVar21;
        bVar56 = CARRY1(bVar7,(byte)*puVar21);
        bVar57 = SCARRY1(bVar7,(byte)*puVar21);
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7 + (byte)*puVar21);
        do {
          if (!bVar57) {
            puVar31 = (uint *)((int)puVar31 + (uint)bVar56 + *puVar21);
            pbVar12 = (byte *)((int)puVar21 + *puVar21);
            bVar8 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar8;
            *(byte *)puVar48 = (byte)*puVar48 + (char)puVar48;
            bVar7 = *pbVar12;
            *pbVar12 = *pbVar12 + bVar8;
            *puVar40 = (uint)((int)puVar46 + (uint)CARRY1(bVar7,bVar8) + *puVar40);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar48;
            uVar27 = (undefined3)((uint)pbVar12 >> 8);
            bVar8 = bVar8 | (byte)*puVar31;
            puVar21 = (uint *)CONCAT31(uVar27,bVar8);
            uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar54);
            uVar19 = *puVar21;
            uVar2 = *puVar21;
            *puVar21 = (uint)(*puVar21 + (int)puVar21);
            if (SCARRY4(uVar2,(int)puVar21)) {
              *(byte *)puVar31 = (byte)*puVar31 - (char)puVar46;
              *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
              *(byte *)puVar40 = (byte)*puVar40 - (char)puVar46;
            }
            else {
              puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar51);
              uVar54 = uVar51;
              if (CARRY4(uVar19,(uint)puVar21)) goto code_r0x00402971;
              bVar56 = CARRY1(bVar8,(byte)*puVar21);
              bVar57 = SCARRY1(bVar8,(byte)*puVar21);
              puVar21 = (uint *)CONCAT31(uVar27,bVar8 + (byte)*puVar21);
code_r0x004029be:
              if (!bVar57) {
                puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar51);
                *(byte *)((int)puVar42 + -0x37) =
                     (*(byte *)((int)puVar42 + -0x37) - (char)((uint)puVar42 >> 8)) - bVar56;
                cVar9 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar9;
                bVar7 = (byte)puVar21;
                bVar56 = CARRY1(bVar7,(byte)*puVar21);
                bVar57 = SCARRY1(bVar7,(byte)*puVar21);
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7 + (byte)*puVar21);
                goto code_r0x004029c6;
              }
            }
            bVar7 = (byte)puVar48;
            bVar56 = CARRY1((byte)*puVar42,bVar7);
            bVar57 = SCARRY1((byte)*puVar42,bVar7);
            *(byte *)puVar42 = (byte)*puVar42 + bVar7;
            if (bVar56) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar57) {
            uVar51 = (ushort)pbVar45;
            goto code_r0x00402966;
          }
          uVar13 = (uint)uVar51;
          *(uint *)((int)puVar42 + -0x23) =
               (*(int *)((int)puVar42 + -0x23) - (int)puVar31) - (uint)bVar56;
          uVar19 = *puVar21;
          bVar8 = (byte)puVar21;
          uVar2 = *puVar21;
          uVar27 = (undefined3)((uint)puVar21 >> 8);
          bVar7 = bVar8 + (byte)*puVar21;
          puVar21 = (uint *)CONCAT31(uVar27,bVar7);
          if (SCARRY1(bVar8,(byte)uVar2)) goto code_r0x00402972;
          in_stack_ffffffec = CONCAT22((short)((uint)in_stack_ffffffec >> 0x10),uVar51);
          cVar9 = (char)puVar42;
          bVar10 = ((char)((uint)puVar42 >> 8) - *(byte *)((int)puVar42 + -0xf)) -
                   CARRY1(bVar8,(byte)uVar19);
          puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),CONCAT11(bVar10,cVar9));
          puVar49 = (uint *)CONCAT31(uVar27,bVar7 + (byte)*puVar21);
          bVar8 = (byte)puVar48;
          if (SCARRY1(bVar7,(byte)*puVar21)) {
            *(byte *)puVar42 = (byte)*puVar42 + bVar8;
            uVar60 = CONCAT44(puVar42,(int)puVar49 + -0x1c37211);
            pcVar14 = (char *)((int)puVar49 + -0x1c3720a);
            *pcVar14 = *pcVar14 + bVar10;
            bVar7 = POPCOUNT(*pcVar14);
            goto code_r0x00402984;
          }
          puVar31 = (uint *)((int)puVar31 +
                            (-(uint)CARRY1(bVar7,(byte)*puVar21) - *(int *)((int)puVar42 + 5)));
          bVar56 = SCARRY4((int)puVar49,*puVar49);
          uVar19 = (int)puVar49 + *puVar49;
          uVar60 = CONCAT44(puVar42,uVar19);
          if (bVar56) goto code_r0x00402982;
          bVar7 = (byte)uVar19 + 0x8e;
          uVar20 = CONCAT31((int3)(uVar19 >> 8),bVar7 - CARRY4((uint)puVar49,*puVar49));
          *puVar46 = (*puVar46 - uVar20) -
                     (uint)((byte)uVar19 < 0x72 || bVar7 < CARRY4((uint)puVar49,*puVar49));
          pbVar12 = (byte *)(uVar20 - 0x5e);
          bVar7 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar10;
          uVar19 = (uint)CARRY1(bVar7,bVar10);
          uVar2 = uVar20 - 0x32d72;
          puVar21 = (uint *)(uVar2 - uVar19);
          if (SBORROW4(uVar20,0x32d72) != SBORROW4(uVar2,uVar19)) goto code_r0x00402992;
          uVar53 = uVar55;
          if (uVar20 < 0x32d72 || uVar2 < uVar19) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar21 >> 8);
            *(byte *)puVar42 = (byte)*puVar42 + bVar8;
            puVar49 = puVar31 + 1;
            out(*puVar31,CONCAT11(bVar10,cVar9));
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            goto code_r0x00402a3e;
          }
          bVar56 = CARRY4((uint)puVar21,*puVar21);
          bVar57 = SCARRY4((int)puVar21,*puVar21);
          puVar21 = (uint *)((int)puVar21 + *puVar21);
          if (!bVar57) {
            uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar51);
            *(byte *)puVar31 = (byte)*puVar31 + bVar56;
            bVar7 = (byte)puVar21;
            *(byte *)((int)puVar42 + (int)unaff_EBP) =
                 *(byte *)((int)puVar42 + (int)unaff_EBP) + bVar7;
            *(byte *)puVar46 = (byte)*puVar46 + cVar9;
            *(byte *)puVar46 = (byte)*puVar46 ^ bVar7;
            bVar34 = (byte)((uint)puVar48 >> 8);
            *(byte *)puVar31 = (byte)*puVar31 + bVar34;
            *(byte *)puVar21 = (byte)*puVar21 + bVar7;
            pbVar12 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7 | (byte)*puVar21);
            *(byte *)puVar48 = (byte)*puVar48 + cVar9;
            bVar38 = *pbVar12;
            uVar36 = (undefined2)((uint)puVar48 >> 0x10);
            puVar48 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar38,bVar8));
            pbVar12 = pbVar12 + (uint)CARRY1(bVar34,*pbVar12) + *(int *)pbVar12;
            *(byte *)puVar42 = (byte)*puVar42 + bVar8;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar45 = pbVar12 + 0x73;
            bVar7 = *pbVar45;
            *pbVar45 = *pbVar45 + bVar10;
            uVar27 = (undefined3)((uint)pbVar12 >> 8);
            bVar7 = (char)pbVar12 + CARRY1(bVar7,bVar10);
            pcVar14 = (char *)CONCAT31(uVar27,bVar7);
            *(byte *)puVar42 = (byte)*puVar42 + bVar8;
            if ((POPCOUNT((byte)*puVar42) & 1U) == 0) {
              uVar54 = uVar51;
            }
            puVar50 = (uint *)((int)puVar40 + *(int *)(unaff_EBP + 0x17));
            *pcVar14 = *pcVar14 + bVar7;
            cVar9 = bVar7 + 2;
            puVar21 = (uint *)CONCAT31(uVar27,cVar9);
            if (bVar7 < 0xfe) {
              *puVar21 = (uint)(*puVar21 + (int)puVar21);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar21 = (byte)*puVar21 + cVar9;
            uVar13 = *puVar42;
            puVar49 = (uint *)((int)puVar31 + puVar46[0x19]);
            *(byte *)puVar21 = (byte)*puVar21 + cVar9;
            puVar48 = (uint *)CONCAT22(uVar36,CONCAT11(bVar34 + bVar38 | (byte)*puVar21,
                                                       bVar8 | (byte)uVar13));
            puVar40 = puVar50;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar12 = (byte *)((int)puVar21 + 0x73);
    bVar56 = CARRY1(*pbVar12,bVar8);
    *pbVar12 = *pbVar12 + bVar8;
  } while( true );
code_r0x00402992:
  pbVar12 = (byte *)((int)puVar21 + 0x2a);
  bVar56 = CARRY1(*pbVar12,bVar10);
  *pbVar12 = *pbVar12 + bVar10;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar21) = *(byte *)(in_GS_OFFSET + (int)puVar21) + (char)puVar21;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | *(byte *)((int)puVar40 + 0x66),
                                      (char)puVar48));
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402a3e:
  uVar27 = (undefined3)((uint)puVar21 >> 8);
  bVar7 = (byte)puVar21 | (byte)*puVar49;
  pcVar14 = (char *)CONCAT31(uVar27,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar14 = *pcVar14 + bVar7;
    cVar9 = bVar7 + 2;
    piVar24 = (int *)CONCAT31(uVar27,cVar9);
    if ((POPCOUNT(cVar9) & 1U) == 0) {
      *(char *)piVar24 = (char)*piVar24 + cVar9;
      bVar7 = bVar7 + 0x71;
      pcVar18 = (char *)CONCAT31(uVar27,bVar7);
      pcVar14 = (char *)segment(uVar53,(short)puVar46 + (short)puVar49);
      *pcVar14 = *pcVar14 + bVar7;
      uVar13 = puVar40[0x1a];
      *pcVar18 = *pcVar18 + bVar7;
      puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                 CONCAT11((byte)((uint)puVar48 >> 8) | (byte)uVar13 |
                                          *(byte *)((int)puVar40 + 0x69),(char)puVar48));
      *pcVar18 = *pcVar18 + bVar7;
      bVar7 = bVar7 | (byte)*puVar42;
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar31 = puVar49 + (uint)bVar58 * -2 + 1;
    out(*puVar49,(short)puVar42);
  }
  else {
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((char)((uint)puVar46 >> 8) + (byte)puVar46[6],(char)puVar46)
                              );
code_r0x00402a5d:
    *pcVar14 = *pcVar14 + (char)pcVar14;
    piVar24 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
    puVar31 = puVar49;
  }
code_r0x00402a61:
  pcVar14 = (char *)segment(uVar53,(short)puVar46 + (short)puVar31);
  *pcVar14 = *pcVar14 + (char)piVar24;
  cVar9 = (char)puVar48;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | (byte)puVar40[0x1a],cVar9));
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  uVar36 = CONCAT11((byte)((uint)puVar42 >> 8) | *(byte *)((int)puVar42 + 0x65),(char)puVar42);
  puVar42 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),uVar36);
  piVar22 = (int *)((int)piVar24 + *piVar24);
  puVar49 = puVar31;
  puVar50 = puVar40;
  uVar52 = uVar51;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402ae3;
  *(byte *)puVar42 = (byte)*puVar42 + cVar9;
  puVar49 = puVar31 + (uint)bVar58 * -2 + 1;
  out(*puVar31,uVar36);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar48 >> 8) | (byte)*puVar42;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),CONCAT11(bVar7,(char)puVar48));
  piVar24 = (int *)(uint)(byte)*puVar46;
  *(byte *)puVar49 = (byte)*puVar49 - bVar7;
  puVar50 = puVar40;
code_r0x00402a7f:
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  out(*puVar49,(short)puVar42);
  bVar7 = in((short)puVar42);
  *(byte *)puVar50 = bVar7;
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | (byte)*puVar42,(char)puVar48));
  iVar15 = *piVar24;
  cVar9 = in(1);
  puVar21 = (uint *)CONCAT31((int3)((uint)((int)piVar24 + *piVar24) >> 8),cVar9);
  *(char *)puVar21 = (char)*puVar21 + cVar9;
  puVar21 = (uint *)((uint)puVar21 | *puVar21);
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar42;
  puVar49 = (uint *)((int)puVar49 + (((uint)bVar58 * -8 + 4) - iVar15));
  puVar50 = (uint *)((int)puVar50 + (uint)bVar58 * -2 + 1);
  uVar54 = uVar51;
  while( true ) {
    bVar7 = (byte)puVar21 | (byte)*puVar42;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar7);
    puVar40 = puVar50;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar7;
code_r0x00402a9b:
    uVar27 = (undefined3)((uint)puVar21 >> 8);
    cVar9 = (char)puVar21 + '\r';
    piVar22 = (int *)CONCAT31(uVar27,cVar9);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    *(byte *)(puVar49 + -0xc800000) = (byte)puVar49[-0xc800000] + (char)puVar42;
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    *(byte *)puVar42 = (byte)*puVar42 + cVar9;
    cVar44 = (char)puVar48;
    if ((POPCOUNT((byte)*puVar42) & 1U) != 0) {
      *(byte *)puVar42 = (byte)*puVar42 + cVar44;
      puVar31 = puVar49 + (uint)bVar58 * -2 + 1;
      out(*puVar49,(short)puVar42);
      piVar24 = (int *)((longlong)*piVar22 * 0x7b020a00);
      *(char *)piVar24 =
           (char)*piVar24 - ((longlong)(int)piVar24 != (longlong)*piVar22 * 0x7b020a00);
      pbVar45 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar45 = *pbVar45;
      goto code_r0x00402a61;
    }
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    puVar21 = (uint *)CONCAT31(uVar27,(char)puVar21 + ':');
    puVar31 = (uint *)((uint)puVar49 | *(uint *)((int)puVar42 + -0x79));
    iVar15 = (int)puVar21 + *puVar21;
    if (SCARRY4((int)puVar21,*puVar21)) {
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                 CONCAT11((char)((uint)puVar46 >> 8) + (byte)puVar31[(int)puVar46],
                                          (char)puVar46));
      *(char *)((int)puVar42 * 2) = *(char *)((int)puVar42 * 2) + (char)iVar15;
      puVar50 = puVar40;
      goto code_r0x00402b33;
    }
    uVar27 = (undefined3)((uint)iVar15 >> 8);
    cVar9 = (char)iVar15 + CARRY4((uint)puVar21,*puVar21);
    piVar24 = (int *)CONCAT31(uVar27,cVar9);
    *(byte *)puVar42 = (byte)*puVar42 + cVar44;
    bVar56 = (POPCOUNT((byte)*puVar42) & 1U) != 0;
    if ((bVar56) && (bVar56)) goto code_r0x00402a61;
    *(char *)piVar24 = (char)*piVar24 + cVar9;
    cVar47 = cVar9 + '(';
    pcVar14 = (char *)CONCAT31(uVar27,cVar47);
    puVar50 = puVar40 + (uint)bVar58 * -2 + 1;
    uVar13 = in((short)puVar42);
    *puVar40 = uVar13;
    *pcVar14 = *pcVar14 + cVar47;
    puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                               CONCAT11((byte)((uint)puVar48 >> 8) | bRama07b0222,cVar44));
    *pcVar14 = *pcVar14 + cVar47;
    pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '>');
code_r0x00402ad2:
    out(*puVar31,(short)puVar42);
    puVar49 = (uint *)((int)(puVar31 + (uint)bVar58 * -2 + 1) + (uint)bVar58 * -2 + 1);
    out((byte)puVar31[(uint)bVar58 * -2 + 1],(short)puVar42);
    bVar7 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar7;
    puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | (byte)*puVar50);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar27 = (undefined3)((uint)pcVar14 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    puVar42 = (uint *)((uint)puVar42 ^ *puVar42);
    cVar9 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*puVar42;
    piVar24 = (int *)CONCAT31(uVar27,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar24 = (char)*piVar24 + cVar9;
    piVar22 = (int *)CONCAT31(uVar27,cVar9 + '\x17');
    uVar52 = uVar51;
code_r0x00402ae3:
    out(*puVar49,(short)puVar42);
    puVar31 = puVar49 + (uint)bVar58 * -2 + 1 + (uint)bVar58 * -2 + 1;
    out(puVar49[(uint)bVar58 * -2 + 1],(short)puVar42);
    *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
code_r0x00402ae7:
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((byte)((uint)puVar46 >> 8) | unaff_EBP[-0x60],(char)puVar46)
                              );
    cVar9 = (char)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar9;
    uVar27 = (undefined3)((uint)piVar22 >> 8);
    bVar7 = cVar9 + 2;
    puVar21 = (uint *)CONCAT31(uVar27,bVar7);
    uVar51 = uVar52;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar21 = (byte)*puVar21 + bVar7;
      cVar9 = cVar9 + '}';
      puVar21 = (uint *)CONCAT31(uVar27,cVar9);
      *(byte *)puVar21 = ((byte)*puVar21 - cVar9) - (0x84 < bVar7);
      pbVar45 = (byte *)((int)puVar42 + (int)puVar21);
      *pbVar45 = *pbVar45 + cVar9;
      bVar7 = POPCOUNT(*pbVar45);
      puVar49 = puVar31;
code_r0x00402af9:
      uVar51 = uVar52;
      puVar40 = puVar50;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        bVar7 = (byte)puVar48;
        *(byte *)puVar42 = (byte)*puVar42 + bVar7;
        uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar54);
        puVar31 = puVar49 + (uint)bVar58 * -2 + 1;
        out(*puVar49,(short)puVar42);
        uVar13 = *puVar42;
        *(byte *)puVar42 = (byte)*puVar42 + bVar7;
        iVar15 = CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'o') +
                 *(int *)((int)puVar42 * 2) + (uint)CARRY1((byte)uVar13,bVar7);
        pcVar14 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '(');
        while( true ) {
          uVar13 = *puVar42;
          bVar8 = (byte)puVar48;
          *(byte *)puVar42 = (byte)*puVar42 + bVar8;
          pcVar14 = pcVar14 + (uint)CARRY1((byte)uVar13,bVar8) + iRam73280512;
          bVar7 = (byte)pcVar14;
          *pcVar14 = *pcVar14 + bVar7;
          puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                     CONCAT11((byte)((uint)puVar48 >> 8) | bRam7d160243,bVar8));
          bVar58 = ((uint)uStackY_2c & 0x400) != 0;
          in_AF = ((uint)uStackY_2c & 0x10) != 0;
          *pcVar14 = *pcVar14 + bVar7;
          uVar27 = (undefined3)((uint)pcVar14 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar27,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar9 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar9 < '\0') break;
          *(char *)CONCAT31(uVar27,cVar9) = *(char *)CONCAT31(uVar27,cVar9) + cVar9;
          iVar15 = CONCAT31(uVar27,bVar7 + 0x16);
code_r0x00402b33:
          piVar22 = (int *)(iVar15 + 0xe2802);
          *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)puVar48 >> 8);
          uVar52 = uVar51;
          uVar51 = uVar54;
          while( true ) {
            bVar8 = (byte)puVar46 | (byte)((uint)puVar48 >> 8);
            puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),bVar8);
            *piVar22 = (int)(*piVar22 + (int)piVar22);
            cVar9 = (char)piVar22;
            *(byte *)puVar42 = (byte)*puVar42 + cVar9;
            if ((POPCOUNT((byte)*puVar42) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar22 = (char)*piVar22 + cVar9;
            uVar13 = CONCAT31((int3)((uint)piVar22 >> 8),cVar9 + '\x13');
            puVar21 = (uint *)(uVar13 + 0x19061224 + (uint)(0x1f9edfd < uVar13));
            uVar2 = (uint)(0xe4ffffdd < uVar13 + 0xfe061202 ||
                          CARRY4(uVar13 + 0x19061224,(uint)(0x1f9edfd < uVar13)));
            uVar13 = *puVar31;
            uVar19 = *puVar31;
            *puVar31 = (uint)((byte *)(uVar19 + (int)puVar21) + uVar2);
            bVar7 = POPCOUNT(*puVar31 & 0xff);
            puVar49 = puVar31;
            if ((SCARRY4(uVar13,(int)puVar21) != SCARRY4((int)(uVar19 + (int)puVar21),uVar2)) ==
                (int)*puVar31 < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar7;
            iVar15 = CONCAT31((int3)((uint)puVar21 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar42 | (byte)*puVar42;
            uVar13 = *puVar46;
            *(byte *)puVar46 = (byte)*puVar46 + bVar8;
            pcVar14 = (char *)(CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x12') + 0x228b26
                               + *puVar50 + (uint)CARRY1((byte)uVar13,bVar8));
            cVar9 = bVar7 + (byte)*puVar48;
            puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),cVar9);
            if (SCARRY1(bVar7,(byte)*puVar48) == cVar9 < '\0') break;
            *pcVar14 = *pcVar14 + (char)pcVar14;
            cVar9 = (char)pcVar14 + '\x02';
            pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9);
            bVar7 = POPCOUNT(cVar9);
            uVar52 = uVar51;
code_r0x00402b7a:
            puVar40 = puVar31;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar9 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar9;
              uVar27 = (undefined3)((uint)pcVar14 >> 8);
              pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '\x13');
              *(byte *)puVar48 = (byte)*puVar48 | (byte)puVar42;
              *(byte *)puVar50 = (byte)*puVar50 | (byte)puVar42;
              *puVar42 = (uint)(pcVar14 + *puVar42);
              uVar36 = (undefined2)((uint)puVar46 >> 0x10);
              uVar29 = SUB41(puVar46,0);
              cVar44 = (char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + -0x5f);
              puVar46 = (uint *)CONCAT22(uVar36,CONCAT11(cVar44,uVar29));
              *pcVar14 = *pcVar14 + cVar9 + '\x13';
              piVar22 = (int *)CONCAT31(uVar27,cVar9 + -0x7a);
              uVar13 = *puVar42;
              *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar13,(char)puVar48) == (char)(byte)*puVar42 < '\0') break;
              *(char *)piVar22 = (char)*piVar22 + cVar9 + -0x7a;
              cVar47 = cVar9 + -0x78;
              piVar22 = (int *)CONCAT31(uVar27,cVar47);
              uVar5 = uVar52;
              if ((POPCOUNT(cVar47) & 1U) != 0) break;
              *(char *)piVar22 = (char)*piVar22 + cVar47;
              pcVar14 = (char *)CONCAT31(uVar27,cVar9 + -0x65);
              *puVar48 = *puVar48 | (uint)puVar42;
              *puVar50 = *puVar50 | (uint)puVar42;
              pbVar45 = (byte *)((int)puVar48 + -1);
              cVar44 = cVar44 + *(byte *)((int)puVar46 + -0x5e);
              puVar46 = (uint *)CONCAT22(uVar36,CONCAT11(cVar44,uVar29));
              *pcVar14 = *pcVar14 + cVar9 + -0x65;
              bVar7 = cVar9 + 10;
              puVar21 = (uint *)CONCAT31(uVar27,bVar7);
              bVar8 = (byte)pbVar45;
              *(byte *)puVar42 = (byte)*puVar42 + bVar8;
              puVar31 = puVar40 + (uint)bVar58 * -2 + 1;
              out(*puVar40,(short)puVar42);
              uVar13 = *puVar42;
              *(byte *)puVar42 = (byte)*puVar42 + bVar8;
              uVar20 = (uint)CARRY1((byte)uVar13,bVar8);
              uVar19 = *puVar42;
              uVar13 = *puVar42;
              pbVar12 = pbVar45 + uVar13 + uVar20;
              uVar6 = *puVar42;
              cRam130a0000 = cRam130a0000 - cVar44;
              uVar2 = *puVar42;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar21);
              *(byte *)puVar21 = (char)*puVar21 + bVar7;
              puVar48 = (uint *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d170243,
                                                  (char)pbVar12 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar45,uVar19) ||
                                                  CARRY4((uint)(pbVar45 + uVar13),uVar20))));
              bVar58 = (uVar54 & 0x400) != 0;
              in_AF = (uVar54 & 0x10) != 0;
              *(byte *)puVar21 = (char)*puVar21 + bVar7;
              bVar56 = 0xfd < bVar7;
              pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '\f');
              puVar42 = (uint *)((uint)puVar42 | uVar2);
code_r0x00402bd1:
              uVar13 = *puVar46;
              uVar19 = *puVar46;
              *puVar46 = (uint)((byte *)(uVar19 + (int)puVar48) + bVar56);
              bVar7 = POPCOUNT(*puVar46 & 0xff);
              uVar52 = uVar54;
              if ((SCARRY4(uVar13,(int)puVar48) !=
                  SCARRY4((int)(uVar19 + (int)puVar48),(uint)bVar56)) == (int)*puVar46 < 0)
              goto code_r0x00402b7a;
              cVar9 = (char)pcVar14;
              *pcVar14 = *pcVar14 + cVar9;
              pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + '\x02');
              if (SCARRY1(cVar9,'\x02') == (char)(cVar9 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar14 = *pcVar14 + (char)pcVar14;
                pcVar14 = (char *)(CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x12') |
                                  *puVar42);
                *(byte *)puVar50 = (byte)*puVar50 - (char)puVar48;
                *pcVar14 = *pcVar14 + (char)pcVar14;
                puVar42 = (uint *)((int)puVar42 - *puVar31);
                bVar7 = (byte)puVar46 | (byte)((uint)puVar48 >> 8);
                cVar9 = *pcVar14;
                uVar27 = (undefined3)((uint)pcVar14 >> 8);
                pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                *pcVar14 = *pcVar14 + cVar9;
                pcVar18 = (char *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                           CONCAT11((char)((uint)puVar46 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar46 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar14 = *pcVar14 + cVar9;
                bVar56 = false;
                pcVar14 = (char *)(CONCAT31(uVar27,cVar9 + '\x13') | *puVar42);
                do {
                  bVar8 = (byte)puVar48;
                  bVar7 = bVar8 + (byte)puVar31[(int)puVar50 * 2];
                  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),bVar7 + bVar56);
                  uVar13 = (uint)(CARRY1(bVar8,(byte)puVar31[(int)puVar50 * 2]) ||
                                 CARRY1(bVar7,bVar56));
                  pcVar23 = pcVar14 + 0x1b000019 + uVar13;
                  piVar24 = (int *)((int)puVar50 * 2 + 0x40000a5);
                  *piVar24 = (int)((int)puVar48 +
                                  (uint)((char *)0xe4ffffe6 < pcVar14 ||
                                        CARRY4((uint)(pcVar14 + 0x1b000019),uVar13)) + *piVar24);
                  puVar42 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),(char)puVar42 + cRam00009d7d
                                            );
                  uVar27 = (undefined3)((uint)pcVar23 >> 8);
                  bVar7 = (char)pcVar23 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar27,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar14 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar23 >> 8) - in_AF,
                                                      (char)uVar13));
                  pbVar45 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar27,bVar7));
                  while( true ) {
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    puVar40 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),
                                               (byte)puVar42 | (byte)*puVar42);
                    puVar50 = (uint *)((uint)puVar50 | (uint)puVar31);
                    uVar13 = (uint)pcVar18 | (uint)puVar31;
                    unaff_EBP = pbVar45 + 1;
                    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar51);
                    cVar44 = (char)(pcVar14 + 0x1b000019);
                    uVar27 = (undefined3)((uint)(pcVar14 + 0x1b000019) >> 8);
                    cVar9 = cVar44 + -0x13;
                    pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                    uVar36 = (undefined2)(uVar13 >> 0x10);
                    cVar47 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    puVar46 = (uint *)CONCAT22(uVar36,CONCAT11(cVar47,(byte)uVar13));
                    *pcVar14 = *pcVar14 + cVar9;
                    pcVar14 = (char *)(CONCAT31(uVar27,cVar44 + '\x19') | *puVar40);
                    bVar7 = (byte)pcVar14;
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      pbVar45 = (byte *)((int)puVar40 + (int)pcVar14);
                      bVar56 = CARRY1(*pbVar45,bVar7);
                      *pbVar45 = *pbVar45 + bVar7;
                      puVar42 = puVar40;
                      goto code_r0x00402bd1;
                    }
                    *pcVar14 = *pcVar14 + bVar7;
                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                    pcVar18 = (char *)CONCAT31(uVar27,bVar7 + 0x6f);
                    puVar42 = (uint *)((int)puVar40 + 1);
                    *pcVar18 = *pcVar18 + bVar7 + 0x6f;
                    bVar8 = (byte)uVar13 | (byte)((uint)pcVar14 >> 8);
                    pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x5c);
                    cVar47 = cVar47 + *(char *)(CONCAT31((int3)((uint)puVar46 >> 8),bVar8) + -0x5f);
                    puVar46 = (uint *)CONCAT22(uVar36,CONCAT11(cVar47,bVar8));
                    *pcVar14 = *pcVar14 + bVar7 + 0x5c;
                    pcVar14 = (char *)(CONCAT31(uVar27,bVar7 + 0x88) | *puVar42);
                    if ((POPCOUNT((uint)pcVar14 & 0xff) & 1U) != 0) {
                      *(byte *)puVar46 = (byte)*puVar46 + (char)((uint)puVar48 >> 8);
                      uStackY_2c = (uint *)((uint)uStackY_2c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar14 = *pcVar14 + (char)pcVar14;
                    uVar27 = (undefined3)((uint)pcVar14 >> 8);
                    cVar9 = (char)pcVar14 + 'o';
                    puVar42 = (uint *)((int)puVar40 + 2);
                    *(char *)CONCAT31(uVar27,cVar9) = *(char *)CONCAT31(uVar27,cVar9) + cVar9;
                    pcVar18 = (char *)CONCAT31((int3)((uint)puVar46 >> 8),
                                               bVar8 | (byte)((uint)pcVar14 >> 8));
                    pcVar14 = (char *)(CONCAT31(uVar27,cVar9) | 2);
                    pbVar45[-0x62] = pbVar45[-0x62] + 1;
                    bVar7 = (byte)pcVar14;
                    *pcVar14 = *pcVar14 + bVar7;
                    bVar56 = 0xfd < bVar7;
                    cVar9 = bVar7 + 2;
                    pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                    uVar53 = uVar51;
                    if (SCARRY1(bVar7,'\x02') != cVar9 < '\0') break;
                    *pcVar14 = *pcVar14 + cVar9;
                    bVar8 = bVar7 + 10;
                    pcVar14 = (char *)CONCAT31(uVar27,bVar8);
                    *pcVar14 = *pcVar14 - cVar47;
                    cVar44 = (char)puVar48;
                    *(byte *)puVar42 = *(byte *)puVar42 + cVar44;
                    pbVar45[-0x62] = pbVar45[-0x62] + 1;
                    *pcVar14 = *pcVar14 + bVar8;
                    cVar9 = bVar7 + 0xc;
                    pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                    if (SCARRY1(bVar8,'\x02') == cVar9 < '\0') {
                      *pcVar14 = *pcVar14 + cVar9;
                      *(byte *)puVar48 = (byte)*puVar48 - cVar47;
                      *(byte *)puVar42 = *(byte *)puVar42 + cVar44;
                      cVar9 = (bVar7 + 0x13) - (byte)puVar48[0x13];
                      pcVar14 = (char *)CONCAT31(uVar27,cVar9);
                      *pcVar14 = *pcVar14 + cVar9;
                      pcVar23 = (char *)CONCAT31(uVar27,cVar9 + *pcVar14);
                      *pcVar23 = *pcVar23 + cVar9 + *pcVar14;
                      pcVar23 = pcVar23 + *puVar48;
                      *pcVar23 = *pcVar23 + (char)pcVar23;
                      LOCK();
                      pcVar14 = *(char **)pcVar23;
                      *(char **)pcVar23 = pcVar23;
                      UNLOCK();
                      *pcVar14 = *pcVar14 + (char)pcVar14;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)*puVar48);
                      *pbVar12 = *pbVar12 + (byte)*puVar48;
                      goto code_r0x00402c8d;
                    }
                    puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),
                                               cVar44 + *pcVar18 + (0xfd < bVar8));
                    *(byte *)puVar50 = (byte)*puVar50 - cVar47;
                    pbVar45 = unaff_EBP;
                  }
                } while( true );
              }
              puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                         CONCAT11((char)((uint)puVar46 >> 8) +
                                                  *(byte *)((int)puVar46 + -99),(char)puVar46));
              puVar40 = puVar31;
            }
            *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
            puVar42 = (uint *)((int)puVar42 - *puVar40);
            puVar31 = puVar40;
            uVar52 = uVar51;
            uVar51 = uVar5;
          }
          *(byte *)puVar42 = (byte)*puVar42 + (char)puVar48;
          pcVar14 = pcVar14 + -0x7d160243;
        }
        pcVar14 = (char *)CONCAT31(uVar27,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar46 = (byte)*puVar46 + (char)puVar48;
    uVar13 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
    *puVar50 = (uint)((int)puVar42 + (uint)CARRY1((byte)uVar13,(byte)puVar21) + *puVar50);
    puVar49 = puVar31;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar11 = (char)puVar48;
      cVar33 = (char)((uint)puVar48 >> 8) + (char)((uint)pbVar12 >> 8);
      puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),CONCAT11(cVar33,cVar11));
      cVar9 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar9;
      pcVar14 = (char *)((int)pbVar12 * 2 + 0x1a10000);
      cVar47 = (char)((uint)pcVar18 >> 8);
      *pcVar14 = *pcVar14 + cVar47;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      pbVar12[-0x47ffffff] = pbVar12[-0x47ffffff] + cVar47;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar8 = (byte)puVar42;
      *(byte *)puVar50 = (byte)*puVar50 + bVar8;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + bVar8;
      *pbVar12 = *pbVar12 + cVar9;
      *puVar31 = (uint)(*puVar31 + (int)puVar31);
      uVar36 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar47 = cVar47 + (byte)puVar31[(int)pcVar18];
      pcVar14 = (char *)CONCAT22(uVar36,CONCAT11(cVar47,(char)pcVar18));
      pcVar14[(int)pbVar12] = pcVar14[(int)pbVar12] + cVar9;
      *(byte *)puVar42 = *(byte *)puVar42 - cVar47;
      *(byte *)puVar42 = *(byte *)puVar42 + cVar11;
      uVar27 = (undefined3)((uint)pbVar12 >> 8);
      bVar7 = cVar9 - *pbVar12;
      *pcVar14 = *pcVar14 + bVar8;
      *(byte *)puVar42 = *(byte *)puVar42 ^ bVar7;
      *(byte *)puVar42 = *(byte *)puVar42 + bVar7;
      *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
      uVar13 = *puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + bVar8;
      cVar44 = bVar7 + *(char *)CONCAT31(uVar27,bVar7) + CARRY1((byte)uVar13,bVar8);
      pcVar18 = (char *)CONCAT22(uVar36,CONCAT11(cVar47 + pbVar45[-0x60],(char)pcVar18));
      *(char *)CONCAT31(uVar27,cVar44) = *(char *)CONCAT31(uVar27,cVar44) + cVar44;
      cVar47 = cVar44 + '\x12';
      pbVar12 = (byte *)CONCAT31(uVar27,cVar47);
      cVar9 = *pcVar18;
      *pcVar18 = *pcVar18 + cVar47;
      if (SCARRY1(cVar9,cVar47) != *pcVar18 < '\0') break;
code_r0x00402c8d:
      cVar9 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
      *(byte *)puVar42 = *(byte *)puVar42 + cVar9;
      *pbVar12 = *pbVar12 + cVar9;
    }
    *pbVar12 = *pbVar12 + cVar47;
    pbVar12 = (byte *)CONCAT31(uVar27,cVar44 + '$');
    *pbVar12 = *pbVar12 + cVar33;
    bVar7 = *(byte *)puVar42;
    *(byte *)puVar42 = *(byte *)puVar42 + cVar11;
    uVar52 = uVar51;
    uVar53 = uVar55;
  } while (SCARRY1(bVar7,cVar11) == (char)*(byte *)puVar42 < '\0');
  do {
    cVar9 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar9;
    uVar27 = (undefined3)((uint)pbVar12 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar42;
    bVar8 = cVar9 + 0x24;
    cVar47 = (char)((uint)pcVar18 >> 8);
    pcVar18[-0x62] = pcVar18[-0x62] + cVar47;
    *(char *)CONCAT31(uVar27,bVar8) = *(char *)CONCAT31(uVar27,bVar8) + bVar8;
    bVar7 = cVar9 + 0x2fU + (byte)*puVar48;
    cVar44 = bVar7 + (0xf4 < bVar8);
    cVar9 = cVar44 + *(char *)CONCAT31(uVar27,cVar44) +
            (CARRY1(cVar9 + 0x2fU,(byte)*puVar48) || CARRY1(bVar7,0xf4 < bVar8));
    pcVar14 = (char *)CONCAT31(uVar27,cVar9);
    *pcVar14 = *pcVar14 - (char)puVar42;
    *pcVar14 = *pcVar14 + cVar9;
    pcVar23 = (char *)((int)puVar42 - *puVar42);
    *(byte *)(puVar31 + (int)pcVar18) = (byte)puVar31[(int)pcVar18] + cVar47;
    pcVar14[(int)unaff_EBP] = pcVar14[(int)unaff_EBP] + cVar9;
    *pcVar23 = *pcVar23 + (char)puVar48;
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar12 >> 8) - *pcVar23,cVar9));
    uVar13 = *puVar50;
    *pcVar14 = *pcVar14 - (char)((uint)pcVar23 >> 8);
    *pcVar14 = *pcVar14 + cVar9;
    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar52);
    pbVar45 = (byte *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                               CONCAT11(cVar47 - (byte)*puVar31,(char)pcVar18));
    unaff_EBP = unaff_EBP + *(int *)(pbVar45 + (int)puVar48);
    puVar40 = (uint *)CONCAT31((int3)((uint)pcVar23 >> 8),(char)pcVar23 + (byte)uVar13);
    while( true ) {
      puVar42 = puVar40;
      uVar36 = (undefined2)((uint)pbVar45 >> 0x10);
      bVar38 = (char)((uint)pbVar45 >> 8) + pbVar45[0x18];
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + 'o');
      cVar9 = (char)puVar48;
      *(byte *)puVar42 = (byte)*puVar42 + cVar9;
      uVar13 = *puVar31;
      bVar10 = (byte)((uint)puVar48 >> 8);
      bVar7 = *pbVar12;
      pbVar12 = pbVar12 + (uint)CARRY1(bVar10,*pbVar12) + *(int *)pbVar12;
      *(byte *)puVar42 = (byte)*puVar42 + cVar9;
      cVar44 = ((char)pbVar45 - (byte)uVar13) - (byte)*puVar31;
      bVar8 = *(byte *)((int)puVar50 + 0x1a);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                 CONCAT11(bVar10 + bVar7 + bVar8 | (byte)*puVar42,cVar9));
      pbVar12 = pbVar12 + *puVar42;
      if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      bVar7 = (char)pbVar12 + 0x6f;
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
      pcVar18 = (char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar38,(char)pbVar45)) >> 8),
                                  cVar44) + -1);
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar14 = *pcVar14 + bVar7;
      *pcVar18 = *pcVar18 + (byte)puVar42;
      *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar7;
      uVar4 = *(undefined6 *)pcVar14;
      uVar52 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar14 = (char *)uVar4;
      *pcVar14 = *pcVar14 + (char)uVar4;
      *(byte *)puVar31 = (byte)*puVar31 + (char)uVar4;
      pcVar14 = (char *)((uint)pcVar14 | 0x73110008);
      bVar38 = (byte)((uint)pcVar18 >> 8);
      *(byte *)puVar50 = (byte)*puVar50 - bVar38;
      *(byte *)puVar42 = (byte)*puVar42 + cVar9;
      puVar40 = puVar31 + (uint)bVar58 * -2 + 1;
      out(*puVar31,(short)puVar42);
      *pcVar14 = *pcVar14;
      cVar9 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar9;
      bVar7 = unaff_EBP[-0x5a];
      uVar36 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar44 = (char)pcVar18;
      *pcVar14 = *pcVar14 + cVar9;
      cVar9 = cVar9 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar9);
      puVar48 = (uint *)(uVar13 | 0x73110000);
      puVar31 = puVar40 + (uint)bVar58 * -2 + 1;
      out(*puVar40,(short)puVar42);
      *(byte *)puVar48 = (byte)*puVar48;
      bVar10 = (byte)puVar42 | (byte)*puVar50;
      puVar40 = (uint *)CONCAT31((int3)((uint)puVar42 >> 8),bVar10);
      *(byte *)puVar48 = (byte)*puVar48 + cVar9;
      pcVar14 = (char *)(uVar13 | 0x7b1f1609);
      bVar58 = (uVar53 & 0x400) != 0;
      *(uint *)((int)puVar50 + -0x7d) = *(uint *)((int)puVar50 + -0x7d) | (uint)unaff_EBP;
      bVar8 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar8;
      bVar38 = bVar38 | bVar7 | *(byte *)((int)puVar31 + 0x19);
      pbVar45 = (byte *)CONCAT22(uVar36,CONCAT11(bVar38,cVar44));
      *pcVar14 = *pcVar14 + bVar8;
      uVar27 = (undefined3)((uint)pcVar14 >> 8);
      puVar31[(int)puVar50 * 2] =
           (uint)((int)puVar40 + (uint)(0xd2 < bVar8) + puVar31[(int)puVar50 * 2]);
      bVar7 = bVar8 + 0x2d ^ *(byte *)CONCAT31(uVar27,bVar8 + 0x2d);
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      uVar13 = *puVar31;
      *(byte *)puVar31 = (byte)*puVar31 + bVar7;
      uVar53 = uVar52;
      if (CARRY1((byte)uVar13,bVar7)) {
        *pcVar14 = *pcVar14 + bVar7;
        bVar7 = bVar7 | pcVar14[0x4000019];
        pcVar14 = (char *)CONCAT31(uVar27,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar14 = *pcVar14 + bVar7;
          piVar24 = (int *)CONCAT31(uVar27,bVar7 + 0x28);
          *piVar24 = (int)piVar24 + (uint)(0xd7 < bVar7) + *piVar24;
          bVar34 = (byte)((uint6)uVar4 >> 8);
          *pbVar45 = *pbVar45 + bVar34;
          uVar37 = CONCAT11((byte)((uint)puVar42 >> 8) | bVar38,bVar10);
          puVar40 = (uint *)CONCAT22((short)((uint)puVar42 >> 0x10),uVar37);
          uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar52);
          bVar10 = in(uVar37);
          pbVar12 = (byte *)CONCAT31(uVar27,bVar10);
          bVar7 = *pbVar12;
          bVar56 = SCARRY1(*pbVar12,bVar10);
          *pbVar12 = *pbVar12 + bVar10;
          bVar8 = *pbVar12;
          puVar46 = puVar31;
          uVar54 = uVar52;
          if (!CARRY1(bVar7,bVar10)) goto code_r0x00402e19;
          *pbVar12 = *pbVar12 + bVar10;
          bVar34 = bVar34 | *pbVar12;
          puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),CONCAT11(bVar34,cVar9));
          pcVar14 = (char *)CONCAT31(uVar27,bVar10 + *pbVar12);
          *pbVar45 = *pbVar45 + bVar34;
        }
        uVar27 = (undefined3)((uint)pcVar14 >> 8);
        bVar8 = (byte)pcVar14 | (byte)*puVar40;
        pbVar12 = (byte *)CONCAT31(uVar27,bVar8);
        puVar46 = puVar31 + (uint)bVar58 * -2 + 1;
        out(*puVar31,(short)puVar40);
        LOCK();
        bVar7 = *pbVar12;
        *pbVar12 = bVar8;
        UNLOCK();
        *(byte *)puVar40 = (byte)*puVar40 + (char)puVar48;
        piVar24 = (int *)(CONCAT31(uVar27,bVar7) + -0x1b7e07);
        *(byte *)puVar40 = (byte)*puVar40 + (char)puVar48;
        iVar15 = (int)puVar48 - *(int *)pbVar45;
        bVar7 = *(byte *)((int)puVar50 + -0x7a);
        uVar37 = (undefined2)((uint)iVar15 >> 0x10);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        bVar8 = (char)((uint)iVar15 >> 8) + bVar7 | *(byte *)((int)puVar50 + 0x17);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        uVar27 = (undefined3)(CONCAT22(uVar37,CONCAT11(bVar8,(byte)iVar15)) >> 8);
        bVar7 = (byte)iVar15 | *pbVar45;
        puVar48 = (uint *)CONCAT31(uVar27,bVar7);
        pbVar12 = (byte *)((int)piVar24 + *piVar24);
        puVar31 = puVar46;
        if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e0a;
        *(byte *)puVar48 = (byte)*puVar48 + bVar7;
        *(byte **)pbVar45 = (byte *)(*(int *)pbVar45 + (int)puVar40);
        piVar24 = (int *)CONCAT31(uVar27,bVar7 + 0x27);
        puVar48 = (uint *)CONCAT22(uVar37,CONCAT11(bVar8 + *(byte *)((int)puVar50 + -0x79),bVar7));
        *(byte *)piVar24 = (char)*piVar24 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar18 = (char *)CONCAT22(uVar36,CONCAT11(bVar38 | unaff_EBP[-0x62],cVar44));
  } while( true );
code_r0x00402dff:
  pbVar12 = (byte *)CONCAT22((short)((uint)piVar24 >> 0x10),
                             CONCAT11((byte)((uint)piVar24 >> 8) |
                                      *(byte *)((int)puVar40 + 0x2170411),(byte)piVar24));
  puVar31 = puVar46 + (uint)bVar58 * -2 + 1;
  out(*puVar46,(short)puVar40);
  *pbVar12 = (byte)piVar24;
  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar48;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar12;
  *pbVar12 = *pbVar12 - cVar44;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  bVar56 = false;
  bVar8 = (byte)((uint)puVar48 >> 8) | bRam052b0603;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),CONCAT11(bVar8,(char)puVar48));
  puVar46 = puVar31;
code_r0x00402e19:
  if (bVar8 == 0 || bVar56 != (char)bVar8 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cRam89280411;
  piVar24 = (int *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                            CONCAT11((byte)((uint)pbVar12 >> 8) |
                                     *(byte *)((int)puVar40 + 0x7190411),cRam89280411));
  *(char *)piVar24 = (char)*piVar24 + cRam89280411;
  cVar9 = (char)puVar48;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | (byte)*puVar40,cVar9));
  puVar46 = (uint *)((int)puVar46 + *piVar24);
  pbVar12 = (byte *)((int)piVar24 + *piVar24);
  bVar8 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar8;
  *(byte *)puVar46 = (byte)*puVar46 + cVar9;
  bVar7 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar8;
  *(byte **)pbVar12 = unaff_EBP + (uint)CARRY1(bVar7,bVar8) + *(int *)pbVar12;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),*pbVar12);
  *(byte *)puVar40 = (byte)*puVar40 + cVar9;
  puVar31 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | (byte)*puVar40);
  pbVar12 = (byte *)((int)puVar31 + -0x43);
  *pbVar12 = *pbVar12 + (char)((uint)puVar40 >> 8);
  puVar40 = puVar31;
  puVar31 = puVar50;
  uVar53 = uVar51;
code_r0x00402e42:
  uVar51 = uVar54;
  puVar50 = puVar31;
  uVar54 = uVar51;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e6e;
  iVar15 = *(int *)((int)piVar24 + *piVar24);
  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar48;
  piVar24 = (int *)(iVar15 + -0x8c6f);
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                             CONCAT11((byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar40 + -0x3f),
                                      (char)puVar40));
  pbVar30 = (byte *)((int)piVar24 + *piVar24);
  pbVar12 = pbVar30;
  puVar50 = uStackY_2c;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar30 = *pbVar30 + (char)pbVar30;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((byte)((uint)puVar48 >> 8) | (byte)*puVar40,(char)puVar48));
  puVar31 = puVar46 + (uint)bVar58 * -2 + 1;
  out(*puVar46,(short)puVar40);
  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 + (byte)*puVar50);
  puVar46 = puVar31 + (uint)bVar58 * -2 + 1;
  out(*puVar31,(short)puVar40);
  uVar53 = uVar51;
  uVar54 = uVar52;
code_r0x00402e6e:
  uVar51 = uVar53;
  uVar27 = (undefined3)((uint)puVar40 >> 8);
  cVar9 = (char)puVar40 + (byte)*puVar50;
  puVar31 = puVar46 + (uint)bVar58 * -2 + 1;
  out(*puVar46,(short)CONCAT31(uVar27,cVar9));
  puVar40 = (uint *)CONCAT31(uVar27,cVar9 + (byte)*puVar50);
  puVar46 = puVar31 + (uint)bVar58 * -2 + 1;
  out(*puVar31,(short)puVar40);
  pbVar12 = (byte *)0x0;
  puVar31 = puVar50;
code_r0x00402e81:
  puVar50 = puVar31;
  bVar8 = (char)pbVar12 - *pbVar12;
  iVar15 = CONCAT31((int3)((uint)pbVar12 >> 8),bVar8);
  *pbVar45 = *pbVar45 + (char)puVar40;
  pbVar30 = (byte *)(iVar15 * 2);
  *pbVar30 = *pbVar30 ^ bVar8;
  pbVar30 = (byte *)(int)(short)iVar15;
  *pbVar30 = *pbVar30 + bVar8;
  *(byte *)puVar50 = (byte)*puVar50 + (byte)puVar48;
  bVar7 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar8;
  *(byte **)(pbVar45 + -0x73) =
       (byte *)((int)puVar46 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pbVar45 + -0x73));
  *pbVar30 = *pbVar30 + bVar8;
  bVar7 = (byte)puVar48 | (byte)*puVar40;
  puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),bVar7);
  puVar31 = puVar46;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar30 = *pbVar30 + bVar8;
  pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),bVar8 + 0x2d);
  puVar46[(int)puVar50 * 2] =
       (uint)((int)puVar40 + (uint)(0xd2 < bVar8) + puVar46[(int)puVar50 * 2]);
  pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar52);
  do {
    uVar13 = *puVar46;
    bVar7 = (byte)pbVar12;
    *(byte *)puVar46 = (byte)*puVar46 + bVar7;
    if (!CARRY1((byte)uVar13,bVar7)) break;
    *pbVar12 = *pbVar12 + bVar7;
    bVar7 = bVar7 | pbVar12[0x400001a];
    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar30 = *pbVar30 + (byte)pbVar30;
      uVar27 = (undefined3)((uint)pbVar30 >> 8);
      bVar7 = (byte)pbVar30 | pbVar30[0x400001b];
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar13 = *puVar40;
        *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar48;
        *(char *)((int)pcVar14 * 2) =
             *(char *)((int)pcVar14 * 2) - CARRY1((byte)uVar13,(byte)puVar48);
        bVar56 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar30 = *pbVar30 + bVar7;
      puVar31 = puVar46;
code_r0x00402eb4:
      uVar27 = (undefined3)((uint)pbVar30 >> 8);
      bVar7 = (char)pbVar30 + 0x6f;
      pcVar14 = (char *)CONCAT31(uVar27,bVar7);
      *(byte **)pcVar14 = pbStackY_48;
      uVar13 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + (char)puVar48;
      pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar52);
      uVar55 = uVar52;
      if ((byte)*puVar40 != 0 && SCARRY1((byte)uVar13,(char)puVar48) == (char)(byte)*puVar40 < '\0')
      {
        *pcVar14 = *pcVar14 + bVar7;
        bVar8 = (char)pbVar30 + 0x9c;
        pbVar30 = (byte *)CONCAT31(uVar27,bVar8);
        puVar31[(int)puVar50 * 2] =
             (uint)((int)puVar40 + (uint)(0xd2 < bVar7) + puVar31[(int)puVar50 * 2]);
        pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar52);
        uVar13 = *puVar31;
        *(byte *)puVar31 = (byte)*puVar31 + bVar8;
        puVar46 = puVar31;
        if (CARRY1((byte)uVar13,bVar8)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar46 = puVar31 + (uint)bVar58 * -2 + 1;
      out(*puVar31,(short)puVar40);
    }
    cVar9 = (char)pcVar14;
    *pcVar14 = *pcVar14 + cVar9;
    uVar27 = (undefined3)((uint)pcVar14 >> 8);
    bVar7 = cVar9 + 0x6f;
    pcVar14 = (char *)CONCAT31(uVar27,bVar7);
    *(byte **)pcVar14 = pbStackY_48;
    uVar13 = *puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar48;
    pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar52);
    *(byte *)(puVar46 + 7) = ((byte)puVar46[7] - bVar38) - CARRY1((byte)uVar13,(byte)puVar48);
    *pcVar14 = *pcVar14 + bVar7;
    bVar8 = cVar9 + 0x9c;
    pcVar14 = (char *)CONCAT31(uVar27,bVar8);
    puVar46[(int)puVar50 * 2] =
         (uint)((int)puVar40 + (uint)(0xd2 < bVar7) + puVar46[(int)puVar50 * 2]);
    uVar13 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar8;
    if (!CARRY1((byte)uVar13,bVar8)) goto code_r0x00402e7e;
    *pcVar14 = *pcVar14 + bVar8;
    bVar8 = bVar8 | pcVar14[0x400001c];
    pbVar12 = (byte *)CONCAT31(uVar27,bVar8);
    uVar54 = uVar52;
    if ((char)bVar8 < '\x01') goto code_r0x00402f16;
    *pbVar12 = *pbVar12 + bVar8;
    pcVar14 = (char *)CONCAT31(uVar27,bVar8 + 0x6f);
    while( true ) {
      *(byte **)pcVar14 = pbStackY_48;
      uVar13 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + (byte)puVar48;
      *(uint *)((int)puVar46 + 0x1d) =
           (*(int *)((int)puVar46 + 0x1d) - (int)puVar50) - (uint)CARRY1((byte)uVar13,(byte)puVar48)
      ;
      bVar7 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar7;
      bVar8 = bVar7 + 0x2d;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar8);
      puVar46[(int)puVar50 * 2] =
           (uint)((int)puVar40 + (uint)(0xd2 < bVar7) + puVar46[(int)puVar50 * 2]);
      pbStackY_48 = (byte *)CONCAT22((short)((uint)pbStackY_48 >> 0x10),uVar52);
      uVar13 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + bVar8;
      if (!CARRY1((byte)uVar13,bVar8)) break;
      *pbVar12 = *pbVar12 + bVar8;
code_r0x00402f16:
      bVar7 = (byte)pbVar12 | pbVar12[0x400001d];
      puVar31 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
      pbVar12 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar12;
        *(byte *)puVar31 = (byte)*puVar31 + (char)puVar31;
        uVar27 = (undefined3)((uint)puVar31 >> 8);
        cVar9 = (char)puVar31 + 'o';
        puVar42 = (uint *)CONCAT31(uVar27,cVar9);
        *puVar42 = (uint)pbStackY_48;
        cVar47 = (char)puVar48;
        *(byte *)puVar40 = (byte)*puVar40 + cVar47;
        pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar52);
        bVar7 = (byte)((uint)puVar40 >> 8);
        bVar56 = bVar7 < (byte)*puVar46;
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar46,(char)puVar40));
        if (bVar56) break;
        bVar56 = CARRY4((uint)puVar42,*puVar42);
        puVar31 = (uint *)((int)puVar42 + *puVar42);
        if (!SCARRY4((int)puVar42,*puVar42)) {
          bVar56 = CARRY4((uint)unaff_EBP,*puVar31);
          unaff_EBP = unaff_EBP + *puVar31;
        }
        *puVar31 = (*puVar31 - (int)puVar31) - (uint)bVar56;
        *(byte *)puVar40 = (byte)*puVar40 + cVar47;
        puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                   CONCAT11((char)((uint)puVar48 >> 8) + (byte)*puVar40,
                                            cVar47 - (byte)*puVar40));
        *(byte *)puVar31 = (byte)*puVar31 + (char)puVar31;
code_r0x00402f3b:
        cVar47 = (char)puVar40;
        *pbVar45 = *pbVar45 + cVar47;
        bVar7 = (byte)puVar31;
        *(byte *)((int)puVar31 * 2) = *(byte *)((int)puVar31 * 2) ^ bVar7;
        *(byte *)puVar31 = (byte)*puVar31 + bVar7;
        *(byte *)puVar31 = (byte)*puVar31 + cVar47;
        uVar13 = *puVar31;
        *(byte *)puVar31 = (byte)*puVar31 + bVar7;
        *puVar40 = (uint)((int)puVar31 + (uint)CARRY1((byte)uVar13,bVar7) + *puVar40);
        pcVar14 = (char *)((uint)puVar31 | *puVar50);
        uVar27 = (undefined3)((uint)pcVar14 >> 8);
        cVar9 = (char)pcVar14 + *pcVar14;
        pcVar14 = (char *)CONCAT31(uVar27,cVar9);
        *pcVar14 = *pcVar14 + cVar9;
        cVar9 = cVar9 + *pcVar14;
        piVar24 = (int *)CONCAT31(uVar27,cVar9);
        *(char *)piVar24 = (char)*piVar24 + cVar9;
        iVar15 = LocalDescriptorTableRegister();
        *piVar24 = iVar15;
        bVar7 = *pbVar45;
        bVar35 = (byte)((uint)puVar48 >> 8);
        *pbVar45 = *pbVar45 + bVar35;
        iVar15 = *piVar24;
        uVar37 = (undefined2)((uint)puVar48 >> 0x10);
        bVar34 = (byte)puVar48;
        *(byte *)puVar46 = (byte)*puVar46 + cVar9;
        puVar48 = puVar46 + (uint)bVar58 * -2 + 1;
        out(*puVar46,(short)puVar40);
        *(byte *)puVar48 = (byte)*puVar48 + cVar9;
        bVar8 = *pbVar45;
        *(byte *)puVar40 = (byte)*puVar40 - bVar38;
        *(byte *)puVar48 = (byte)*puVar48 + cVar9;
        puVar42 = puVar48 + (uint)bVar58 * -2 + 1;
        out(*puVar48,(short)puVar40);
        *(byte *)puVar42 = (byte)*puVar42 + cVar9;
        bVar10 = *pbVar45;
        *(uint *)((int)puVar40 + -0x23) = *(uint *)((int)puVar40 + -0x23) & (uint)puVar42;
        puVar25 = (ushort *)((int)piVar24 + *piVar24);
        if (!SCARRY4((int)piVar24,*piVar24)) {
          *puVar25 = uVar55;
        }
        *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
        uVar39 = CONCAT11((char)((uint)puVar40 >> 8) + *(byte *)((int)puVar40 + -0x15),cVar47);
        puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),uVar39);
        puVar31 = (uint *)((int)puVar25 + *(int *)puVar25);
        if (!SCARRY4((int)puVar25,*(int *)puVar25)) {
          *(ushort *)puVar31 = uVar55;
        }
        cVar9 = (char)puVar31;
        *(byte *)puVar31 = (byte)*puVar31 + cVar9;
        cVar11 = ((bVar35 - (char)iVar15) - CARRY1(bVar7,bVar35) | bVar8 | bVar10) + (byte)*puVar31;
        puVar48 = (uint *)CONCAT22(uVar37,CONCAT11(cVar11,bVar34));
        uVar13 = *puVar40;
        *(byte *)puVar40 = (byte)*puVar40 + bVar34;
        if (CARRY1((byte)uVar13,bVar34)) {
          *(byte *)puVar31 = (byte)*puVar31 + cVar9;
          bVar7 = *(byte *)((int)puVar40 + 6);
          *(byte *)puVar40 = (byte)*puVar40 + bVar34;
          bVar8 = (cVar11 - (byte)*puVar42) + cRam14730307;
          *(byte *)puVar31 = (byte)*puVar31 + cVar9;
          bVar7 = bVar38 | bVar7 | *(byte *)((int)puVar40 + 0x2a);
          uVar13 = *puVar31;
          pbVar45 = (byte *)((int)puVar31 + (uint)CARRY1(bVar8,(byte)*puVar31) + *puVar31);
          *(byte *)puVar40 = (byte)*puVar40 + bVar34;
          cVar9 = cVar44 - (byte)*puVar42;
          cVar44 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar36,CONCAT11(bVar7,cVar44)) >> 8),
                                              cVar9) + 0x1e);
          *pbVar45 = *pbVar45 + (char)pbVar45;
          uVar27 = (undefined3)((uint)pbVar45 >> 8);
          bVar7 = (char)pbVar45 + 0x2aU & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar44 = cVar44 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar44,cVar9)) + 0x1f);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar44 = cVar44 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar44,cVar9)) + 0x20);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar44 = cVar44 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar44,cVar9)) + 0x21);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          cVar44 = cVar44 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar44,cVar9)) + 0x22);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          bVar8 = bVar8 + (byte)uVar13 + *pcVar14;
          uVar32 = CONCAT22(uVar37,CONCAT11(bVar8,bVar34));
          cVar44 = cVar44 + *(char *)(CONCAT22(uVar36,CONCAT11(cVar44,cVar9)) + 0x25);
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
          pcVar18 = (char *)CONCAT22(uVar36,CONCAT11(cVar44 + *(char *)(CONCAT22(uVar36,CONCAT11(
                                                  cVar44,cVar9)) + 0x26),cVar9));
          *pcVar14 = *pcVar14 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          cVar9 = bVar7 + 0x2a;
          pcVar14 = (char *)CONCAT31(uVar27,cVar9);
          if ((POPCOUNT(cVar9) & 1U) == 0) {
            *pcVar14 = *pcVar14 + cVar9;
            pbVar45 = (byte *)(CONCAT31(uVar27,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar45;
            bVar10 = (byte)pbVar45;
            *pbVar45 = *pbVar45 + bVar10;
            uVar27 = (undefined3)((uint)pbVar45 >> 8);
            if (!CARRY1(bVar7,bVar10)) {
              if (!SCARRY1(bVar10,'\0')) {
                *pbVar45 = *pbVar45 + bVar10;
                uVar32 = CONCAT22(uVar37,CONCAT11(bVar8 | (byte)*puVar40,bVar34));
                bVar10 = bVar10 & (byte)*puVar40;
                *(char *)CONCAT31(uVar27,bVar10) = *(char *)CONCAT31(uVar27,bVar10) + bVar10;
                pcVar14 = (char *)CONCAT31(uVar27,bVar10 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar14 = (char *)CONCAT31(uVar27,bVar10 + *pcVar18);
              if (SCARRY1(bVar10,*pcVar18) != (char)(bVar10 + *pcVar18) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar10 + *pcVar18;
            pbVar45 = (byte *)CONCAT31(uVar27,bVar7);
            if (SCARRY1(bVar10,*pcVar18) == (char)bVar7 < '\0') {
              pcVar14 = (char *)CONCAT22(uVar37,CONCAT11(bVar8 | (byte)*puVar40,bVar34));
              *pcVar18 = *pcVar18 + cVar47;
              *(byte *)puVar40 = (byte)*puVar40 ^ bVar7;
              *(char *)((int)pbVar45 * 2) = *(char *)((int)pbVar45 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar14 = *pcVar14 + (char)pcVar14;
            uVar27 = (undefined3)((uint)pcVar14 >> 8);
            bVar7 = (char)pcVar14 + 0x2aU & (byte)*puVar40;
            *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x2a);
            *pcVar14 = *pcVar14 + bVar7 + 0x2a;
            pcVar14 = (char *)CONCAT31(uVar27,bVar7 + 0x54 & (byte)*puVar40);
code_r0x00403072:
            cVar9 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar9;
            uVar27 = (undefined3)((uint)pcVar14 >> 8);
            pcVar14 = (char *)CONCAT31(uVar27,cVar9 + '*');
            *pcVar14 = *pcVar14 + cVar9 + '*';
            bVar7 = cVar9 + 0x54U & (byte)*puVar40;
            *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar51);
            uVar32 = CONCAT22((short)((uint)uVar32 >> 0x10),
                              CONCAT11((char)((uint)uVar32 >> 8) +
                                       *(char *)CONCAT31(uVar27,bVar7 + 0x2a),(char)uVar32));
            *(byte *)(puVar42 + 0x828000) = (byte)puVar42[0x828000] - cVar47;
            pcVar14 = pcStackY_80;
code_r0x0040309a:
            cVar9 = (char)pcVar14;
            *pcVar14 = *pcVar14 + cVar9;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar52);
            *pcVar14 = *pcVar14 + cVar9;
            pbVar45 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar9 + 0x2aU & (byte)*puVar40);
          }
          cVar9 = (char)pbVar45;
          *pbVar45 = *pbVar45 + cVar9;
          uVar27 = (undefined3)((uint)pbVar45 >> 8);
          cVar44 = cVar9 + '*';
          pcVar14 = (char *)CONCAT31(uVar27,cVar44);
          *(byte *)(puVar42 + 0x828000) = (byte)puVar42[0x828000] - cVar47;
          *pcVar14 = *pcVar14 + cVar44;
          cVar11 = (char)pcStackY_80 - (byte)*puVar42;
          pcVar18 = (char *)CONCAT22((short)((uint)pcStackY_80 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_80 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_80 >> 8),
                                                                 cVar11) + 0x34),cVar11));
          *pcVar14 = *pcVar14 + cVar44;
          bVar7 = cVar9 + 0x54U & (byte)*puVar40;
          *(char *)CONCAT31(uVar27,bVar7) = *(char *)CONCAT31(uVar27,bVar7) + bVar7;
          pbVar45 = (byte *)CONCAT31(uVar27,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar32 >> 8);
          pcVar14 = (char *)CONCAT22((short)((uint)uVar32 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar45,(char)uVar32));
          pbVar45 = pbVar45 + (uint)CARRY1(bVar7,*pbVar45) + *(int *)pbVar45;
          *(byte *)puVar40 = (byte)*puVar40 + (char)uVar32;
          uVar27 = (undefined3)((uint)pbVar45 >> 8);
          cVar9 = (byte)pbVar45 - *pbVar45;
          piVar24 = (int *)CONCAT31(uVar27,cVar9);
          puVar42 = (uint *)((int)puVar42 + (uint)((byte)pbVar45 < *pbVar45) + *piVar24);
          cVar9 = cVar9 + (char)*piVar24;
          pbVar45 = (byte *)CONCAT31(uVar27,cVar9);
          *pbVar45 = *pbVar45 + cVar9;
code_r0x004030df:
          *pcVar14 = *pcVar14 + cVar47;
          bVar7 = *pbVar45;
          bVar8 = (byte)pbVar45;
          *pbVar45 = *pbVar45 + bVar8;
          *(byte **)(pcVar18 + -0x41) =
               (byte *)((int)puVar42 + (uint)CARRY1(bVar7,bVar8) + *(int *)(pcVar18 + -0x41));
          *pbVar45 = *pbVar45 + bVar8;
          uVar27 = (undefined3)((uint)pbVar45 >> 8);
          bVar8 = bVar8 | (byte)*puVar42;
          *(char *)CONCAT31(uVar27,bVar8) = *(char *)CONCAT31(uVar27,bVar8) + bVar8;
          pcVar14 = (char *)CONCAT31(uVar27,bVar8 + 0x7b);
          *pcVar14 = *pcVar14 + bVar8 + 0x7b;
          pbVar45 = (byte *)((int)puVar42 + CONCAT31(uVar27,bVar8 - 8) + -1);
          *pbVar45 = *pbVar45 + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar46 = puVar42 + (uint)bVar58 * -2 + 1;
        out(*puVar42,uVar39);
        pbVar12 = unaff_EBP + 1;
        pbStackY_48 = unaff_EBP;
      }
      bVar7 = cVar9 - bVar56;
      pbVar12 = (byte *)((int)puVar46 + (int)puVar50 * 2);
      bVar56 = CARRY1(*pbVar12,bVar7);
      *pbVar12 = *pbVar12 + bVar7;
code_r0x00402ef9:
      pcVar14 = (char *)CONCAT31(uVar27,bVar7 - bVar56);
      pbVar12 = (byte *)((int)puVar50 + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12 + (bVar7 - bVar56);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar48 = (byte)*puVar48 + (char)puVar40;
  puVar31 = puVar40 + 0x2828000;
  bVar7 = (byte)puVar48;
  bVar56 = (byte)*puVar31 < bVar7;
  *(byte *)puVar31 = (byte)*puVar31 - bVar7;
  bVar7 = (byte)pbVar12 + *pbVar12;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7 + bVar56);
  puVar31 = puVar50;
  uVar53 = uVar51;
  if (CARRY1((byte)pbVar12,*pbVar12) || CARRY1(bVar7,bVar56)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar14 = *pcVar14 + bVar8;
  uVar53 = uVar51;
  uVar54 = uVar52;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar44) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  pbVar45 = (byte *)CONCAT22(uVar36,CONCAT11(cVar47 + unaff_EBP[(int)pcVar14 * 4],uVar29));
  unaff_EDI[(int)pcVar14] = unaff_EDI[(int)pcVar14] + bVar8;
  goto code_r0x0040254a;
}


