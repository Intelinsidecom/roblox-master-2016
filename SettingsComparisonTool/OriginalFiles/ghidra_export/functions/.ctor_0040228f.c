/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040228f
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 param_1, uint * param_2, int param_3)
 * Local Vars  : cVar45, puVar44, unaff_ESI, unaff_EBP, unaff_EDI, puVar46, puVar48, puVar47, uVar49, in_ES, in_CS, uVar50, in_SS, uVar51, uVar53, uVar52, bVar54, in_GS_OFFSET, bVar55, in_AF, in_IF, in_TF, bVar57, bVar56, uVar58, in_NT, in_stack_ffffffec, unaff_retaddr, in_stack_fffffff4, pcStackY_80, puStackY_34, pbStackY_48, uStackY_2c, puStackY_30, iVar1, uStack_4, pcVar3, uVar2, uVar5, uVar4, bVar7, uVar6, bVar9, cVar8, param_1, in_EAX, param_2, cVar10, param_3, uVar12, pbVar11, iVar14, pcVar13, pcVar16, pbVar15, uVar18, uVar17, piVar20, puVar19, piVar22, pcVar21, puVar24, pbVar23, iVar26, uVar25, puVar28, uVar27, extraout_ECX_00, extraout_ECX, extraout_ECX_02, extraout_ECX_01, bVar30, uVar29, bVar32, cVar31, uVar34, bVar33, bVar36, uVar35, puVar38, uVar37, pbVar40, pbVar39, uVar42, puVar41, unaff_EBX, cVar43
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall _ctor(undefined4 param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte *in_EAX;
  byte *pbVar11;
  undefined3 uVar25;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  byte *pbVar15;
  int3 iVar26;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int *piVar20;
  char *pcVar21;
  int *piVar22;
  byte *pbVar23;
  ushort *puVar24;
  undefined1 uVar27;
  byte bVar30;
  undefined2 uVar34;
  uint *puVar28;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  char cVar31;
  byte bVar32;
  byte bVar33;
  undefined2 uVar35;
  undefined4 uVar29;
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
  do {
                    /* .NET CLR Managed Code */
    bVar7 = (byte)((uint)param_1 >> 8);
    uVar34 = (undefined2)((uint)param_1 >> 0x10);
    cVar8 = (char)param_1;
    bVar30 = bVar7 + *in_EAX;
    puVar28 = (uint *)CONCAT22(uVar34,CONCAT11(bVar30,cVar8));
    in_EAX = in_EAX + (uint)CARRY1(bVar7,*in_EAX) + *(int *)in_EAX;
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar9 = (byte)unaff_EBX;
    bVar54 = bVar9 < *(byte *)((int)unaff_ESI + 2);
    bVar7 = *(byte *)((int)unaff_ESI + 2);
    cVar43 = bVar9 - bVar7;
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar43);
    if ((POPCOUNT(cVar43) & 1U) != 0) {
      if ((char)bVar7 <= (char)bVar9) goto code_r0x004022f3;
      goto code_r0x004022c6;
    }
    *in_EAX = *in_EAX + (byte)in_EAX;
    bVar7 = (byte)in_EAX | *unaff_EBX;
    pbVar11 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
    puVar38 = param_2;
    if (bVar7 != 0) {
      unaff_EBP = unaff_EBP + -*(int *)(unaff_EDI + 0x2b);
      *pbVar11 = *pbVar11 + bVar7;
      puVar28 = (uint *)CONCAT22(uVar34,CONCAT11(bVar30 | (byte)*param_2,cVar8));
      bVar30 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      unaff_ESI = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar30,bVar7) + *(int *)pbVar11);
      pbVar11 = pbVar11 + *(int *)pbVar11;
      cVar8 = (char)pbVar11 - *pbVar11;
      piVar22 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar8);
      *(char *)piVar22 = (char)*piVar22 + cVar8;
      in_EAX = (byte *)((int)piVar22 + *piVar22);
      uVar12 = *puVar28;
      *(byte *)puVar28 = (byte)*puVar28 + (byte)param_2;
      if (!CARRY1((byte)uVar12,(byte)param_2)) goto code_r0x004022ea;
      goto code_r0x004022be;
    }
    *pbVar11 = *pbVar11;
    out(*unaff_ESI,(short)param_2);
    pbVar11 = pbVar11 + -*(int *)pbVar11;
    unaff_ESI = unaff_ESI + 1;
code_r0x004022ab:
    *(byte *)puVar38 = (byte)*puVar38 + (char)puVar28;
    bVar7 = (char)pbVar11 - *pbVar11;
    in_EAX = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
    *unaff_EBX = *unaff_EBX + (char)puVar38;
    *unaff_EBX = *unaff_EBX ^ bVar7;
    do {
      *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)puVar28 >> 8);
      bVar30 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar30;
      *unaff_EBX = *unaff_EBX + bVar30;
      bVar7 = *in_EAX;
      *in_EAX = *in_EAX + bVar30;
      *(byte **)(unaff_EBX + 0x2c) =
           (byte *)((int)unaff_ESI + (uint)CARRY1(bVar7,bVar30) + *(int *)(unaff_EBX + 0x2c));
      param_2 = puVar38;
code_r0x004022be:
      *in_EAX = *in_EAX + (char)in_EAX;
      puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | (byte)*param_2);
      unaff_retaddr = (byte *)((uint)unaff_retaddr & 0xffff0000);
      unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + 0x2d);
code_r0x004022c6:
      *in_EAX = *in_EAX + (byte)in_EAX;
      uVar25 = (undefined3)((uint)in_EAX >> 8);
      bVar7 = (byte)in_EAX | (byte)*param_2;
      pcVar13 = (char *)CONCAT31(uVar25,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        *pcVar13 = *pcVar13 + bVar7;
      }
      *pcVar13 = *pcVar13 + bVar7;
      cVar8 = bVar7 + 6;
      pbVar11 = (byte *)CONCAT31(uVar25,cVar8);
      *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
      *pbVar11 = *pbVar11 + cVar8;
      puVar38 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0x2f],(char)param_2
                                         ));
      *pbVar11 = *pbVar11 + cVar8;
      bVar7 = (byte)((uint)puVar28 >> 8) | *pbVar11;
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar7,(char)puVar28));
      in_EAX = pbVar11 + *(int *)pbVar11;
      bVar54 = CARRY1(*unaff_EBX,bVar7);
      *unaff_EBX = *unaff_EBX + bVar7;
code_r0x004022e0:
      param_2 = puVar38;
      if (!bVar54) goto code_r0x0040230b;
      bVar30 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar30;
      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                 CONCAT11((byte)((uint)puVar28 >> 8) | (byte)*puVar38,(char)puVar28)
                                );
      bVar7 = *in_EAX;
      *in_EAX = *in_EAX + bVar30;
      unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)CARRY1(bVar7,bVar30) - *(int *)in_EAX));
code_r0x004022ea:
      in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *in_EAX);
code_r0x004022ef:
      *(char *)((int)in_EAX * 2) = *(char *)((int)in_EAX * 2) + (char)in_EAX;
      *(byte *)puVar28 = (byte)*puVar28 + (char)puVar38;
      in_SS = SUB42(in_stack_fffffff4,0);
      param_2 = puVar38;
      while( true ) {
        uVar25 = (undefined3)((uint)in_EAX >> 8);
        bVar7 = (byte)in_EAX | (byte)*param_2;
        pbVar11 = (byte *)CONCAT31(uVar25,bVar7);
        bVar30 = (byte)((uint)puVar28 >> 8);
        if ((POPCOUNT(bVar7) & 1U) != 0) break;
        *pbVar11 = *pbVar11 + bVar7;
        cVar8 = bVar7 + 0xd;
        pcVar13 = (char *)CONCAT31(uVar25,cVar8);
        *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)pcVar13;
        *pcVar13 = *pcVar13 + cVar8;
        *(char *)((int)pcVar13 * 2) = *(char *)((int)pcVar13 * 2) + bVar30;
        *pcVar13 = *pcVar13 + cVar8;
        in_EAX = (byte *)CONCAT31(uVar25,cVar8);
        *in_EAX = *in_EAX + cVar8;
code_r0x0040230b:
        puVar38 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11((char)((uint)param_2 >> 8) + unaff_EBX[0x34],
                                            (char)param_2));
        cVar8 = (char)in_EAX;
        *in_EAX = *in_EAX + cVar8;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x79],
                                              (char)unaff_EBX));
        *in_EAX = *in_EAX + cVar8;
        pcVar13 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar8 + '\x02');
code_r0x00402317:
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x7a],
                                              (char)unaff_EBX));
        cVar8 = (char)pcVar13;
        *pcVar13 = *pcVar13 + cVar8;
        uVar25 = (undefined3)((uint)pcVar13 >> 8);
        cVar43 = cVar8 + '{';
        pbVar11 = (byte *)CONCAT31(uVar25,cVar43);
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
        pbVar40 = (byte *)((int)puVar38 + (int)pbVar11);
        *pbVar40 = *pbVar40 + cVar43;
        if ((POPCOUNT(*pbVar40) & 1U) != 0) goto code_r0x004022ab;
        *pbVar11 = *pbVar11 + cVar43;
        piVar22 = (int *)CONCAT31(uVar25,cVar8 + -10);
        uVar12 = (int)piVar22 + *piVar22;
        bVar7 = (byte)uVar12;
        unaff_EDI[(int)unaff_EBP * 2] = unaff_EDI[(int)unaff_EBP * 2] + bVar7;
        in_EAX = (byte *)(uVar12 ^ 0x7d0a0000);
        *in_EAX = bVar7;
        pbVar11 = (byte *)((int)puVar38 + (int)in_EAX);
        *pbVar11 = *pbVar11 + bVar7;
        param_2 = puVar38;
        if ((POPCOUNT(*pbVar11) & 1U) != 0) goto code_r0x004022be;
        *in_EAX = *in_EAX + bVar7;
        pcVar13 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7 + 0x69);
code_r0x00402342:
        uVar25 = (undefined3)((uint)pcVar13 >> 8);
        bVar7 = (char)pcVar13 + *pcVar13;
        pcVar13 = (char *)CONCAT31(uVar25,bVar7);
        *pcVar13 = *pcVar13 + bVar7;
        *pcVar13 = *pcVar13 + bVar7;
        *(byte *)(unaff_ESI + 0x800000) = (byte)unaff_ESI[0x800000] + (char)puVar28;
        cVar43 = (char)unaff_EBX;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x7a],cVar43
                                             ));
        *pcVar13 = *pcVar13 + bVar7;
        bVar54 = 0xfd < bVar7;
        cVar8 = bVar7 + 2;
        in_EAX = (byte *)CONCAT31(uVar25,cVar8);
        if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x004022e0;
        *in_EAX = *in_EAX + cVar8;
        cVar8 = bVar7 + 0x71;
        in_EAX = (byte *)CONCAT31(uVar25,cVar8);
        bVar30 = *in_EAX;
        *in_EAX = *in_EAX + cVar8;
        in_stack_fffffff4 = (byte *)(uint)in_ES;
        if (SCARRY1(bVar30,cVar8) == (char)*in_EAX < '\0') {
          *(byte *)((int)puVar38 + (int)in_EAX) = *(byte *)((int)puVar38 + (int)in_EAX) + cVar43;
          goto code_r0x004022ef;
        }
        *in_EAX = *in_EAX + cVar8;
        in_EAX = (byte *)CONCAT31(uVar25,bVar7 + 0x73);
        bVar54 = (POPCOUNT(bVar7 + 0x73) & 1U) == 0;
        param_2 = puVar38;
code_r0x00402366:
        if (bVar54) {
code_r0x00402368:
          *in_EAX = *in_EAX + (char)in_EAX;
          cVar8 = (char)in_EAX + 'o';
          pcVar13 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar8);
          *pcVar13 = *pcVar13 + cVar8;
          puVar38 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *unaff_EBX);
          pcVar13 = pcVar13 + 0x37280512;
          bVar30 = (byte)pcVar13;
          *pcVar13 = *pcVar13 + bVar30;
          puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                     CONCAT11((byte)((uint)puVar28 >> 8) | bRam7d160243,
                                              (char)puVar28));
          pbVar11 = (byte *)((int)puVar38 + (int)pcVar13);
          bVar7 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar30;
          pcRam00008e7d = pcVar13 + (int)(pcRam00008e7d + CARRY1(bVar7,bVar30));
          bVar54 = SCARRY1(bVar30,'\x02');
          bVar30 = bVar30 + 2;
          puVar24 = (ushort *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar30);
code_r0x0040238b:
          if (bVar54 == (char)bVar30 < '\0') {
            *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
            pcVar13 = (char *)CONCAT31((int3)((uint)puVar24 >> 8),(char)puVar24 + '\x12');
code_r0x00402391:
            pcVar13 = pcVar13 + 0x42802;
            *unaff_EBX = *unaff_EBX + (char)((uint)puVar28 >> 8);
            unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
code_r0x00402399:
            bVar7 = (byte)unaff_EBX | (byte)((uint)puVar28 >> 8);
            uVar25 = (undefined3)((uint)pcVar13 >> 8);
            pcVar13 = (char *)CONCAT31(uVar25,1);
            *pcVar13 = *pcVar13 + '\x01';
            unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                  *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                     bVar7) + -0x72),bVar7));
            *pcVar13 = *pcVar13 + '\x01';
            uVar12 = CONCAT31(uVar25,0x14);
            pcVar13 = (char *)(uVar12 + 0x19061215 + (uint)(0x1f9edfd < uVar12));
            uVar2 = (uint)(0xe4ffffec < uVar12 + 0xfe061202 ||
                          CARRY4(uVar12 + 0x19061215,(uint)(0x1f9edfd < uVar12)));
            uVar12 = *unaff_ESI;
            uVar17 = *unaff_ESI;
            *unaff_ESI = (uint)(pcVar13 + uVar17 + uVar2);
            if ((SCARRY4(uVar12,(int)pcVar13) != SCARRY4((int)(pcVar13 + uVar17),uVar2)) !=
                (int)*unaff_ESI < 0) {
              bVar30 = (byte)pcVar13;
              *pcVar13 = *pcVar13 + bVar30;
              iVar14 = CONCAT31((int3)((uint)pcVar13 >> 8),bVar30 + 2) + 0x847d +
                       (uint)(0xfd < bVar30);
              puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(byte)puVar38 | (byte)*puVar38);
              pcVar13 = (char *)(CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x12') +
                                0x134f26);
              *unaff_EBX = *unaff_EBX + bVar7;
code_r0x004023cd:
              out(*unaff_ESI,(short)puVar38);
              uVar12 = *puVar38;
              *(byte *)puVar38 = (byte)*puVar38 + (byte)puVar28;
              in_EAX = (byte *)(pcVar13 +
                               (uint)CARRY1((byte)uVar12,(byte)puVar28) + *(int *)unaff_EDI);
              bVar57 = SCARRY1((char)puVar38,(byte)*puVar28);
              bVar7 = (char)puVar38 + (byte)*puVar28;
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
                uVar25 = (undefined3)((uint)in_EAX >> 8);
                cVar8 = cVar43 + '\x02';
                in_EAX = (byte *)CONCAT31(uVar25,cVar8);
                if ((POPCOUNT(cVar8) & 1U) != 0) {
                  pbVar11 = (byte *)((int)param_2 + (int)in_EAX);
                  *pbVar11 = *pbVar11 + cVar8;
                  bVar54 = (POPCOUNT(*pbVar11) & 1U) == 0;
                  goto code_r0x00402366;
                }
                *in_EAX = *in_EAX + cVar8;
                cVar43 = cVar43 + '\x15';
                in_EAX = (byte *)CONCAT31(uVar25,cVar43);
                *(byte *)puVar28 = (byte)*puVar28 | (byte)param_2;
                *unaff_EDI = *unaff_EDI | (byte)param_2;
                if ((POPCOUNT(*unaff_EDI) & 1U) == 0) {
                  *in_EAX = *in_EAX + cVar43;
                  unaff_retaddr = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                  goto code_r0x00402425;
                }
                *in_EAX = *in_EAX + cVar43;
                cVar43 = cVar43 + (byte)*param_2;
                pcVar13 = (char *)CONCAT31(uVar25,cVar43);
                if ((POPCOUNT(cVar43) & 1U) == 0) {
                  *pcVar13 = *pcVar13 + cVar43;
                  puVar24 = (ushort *)CONCAT31(uVar25,cVar43 + 'o');
                  puVar38 = param_2;
code_r0x004023f6:
                  uVar12 = *puVar38;
                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar28;
                  cVar8 = (char)puVar24;
                  if (SCARRY1((byte)uVar12,(char)puVar28) == (char)(byte)*puVar38 < '\0') {
                    in_ES = *puVar24;
                    pbVar11 = (byte *)((int)puVar38 + (int)puVar24);
                    bVar54 = SCARRY1(*pbVar11,cVar8);
                    *pbVar11 = *pbVar11 + cVar8;
                    bVar30 = *pbVar11;
                    goto code_r0x0040238b;
                  }
                  *(char *)puVar24 = (char)*puVar24 + cVar8;
                  cVar8 = cVar8 + '\x02';
                  pcVar13 = (char *)CONCAT31((int3)((uint)puVar24 >> 8),cVar8);
                  puVar47 = unaff_ESI;
                  if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x00402402:
                    *pcVar13 = *pcVar13 + (char)pcVar13;
                    uVar25 = (undefined3)((uint)pcVar13 >> 8);
                    piVar22 = (int *)CONCAT31(uVar25,(char)pcVar13 + 'r');
                    *piVar22 = *piVar22 + 0x7b027000;
                    cVar8 = (char)*piVar22;
                    pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                    pbVar11 = (byte *)((int)puVar38 + (int)pcVar13);
                    *pbVar11 = *pbVar11 + cVar8;
                    unaff_ESI = puVar47;
                    if ((POPCOUNT(*pbVar11) & 1U) == 0) {
                      *pcVar13 = *pcVar13 + cVar8;
                      bVar30 = cVar8 + '{' + *(char *)CONCAT31(uVar25,cVar8 + '{');
                      piVar22 = (int *)CONCAT31(uVar25,bVar30);
                      pbVar11 = (byte *)((int)piVar22 + (int)unaff_EBP);
                      bVar7 = *pbVar11;
                      *pbVar11 = *pbVar11 + bVar30;
                      *piVar22 = (*piVar22 - (int)piVar22) - (uint)CARRY1(bVar7,bVar30);
                      *(byte *)puVar38 = (byte)*puVar38 + (char)puVar28;
                      unaff_ESI = puVar47 + 1;
                      out(*puVar47,(short)puVar38);
                      cVar8 = bVar30 - (char)*piVar22;
                      in_EAX = (byte *)CONCAT31(uVar25,cVar8);
                      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar8;
                      param_2 = puVar38;
code_r0x00402425:
                      out(*unaff_ESI,(short)param_2);
                      uVar12 = *param_2;
                      *(byte *)param_2 = (byte)*param_2 + (byte)puVar28;
                      uVar12 = (uint)CARRY1((byte)uVar12,(byte)puVar28);
                      pbVar11 = (byte *)((int)puVar28 + *puVar28) + uVar12;
                      puVar28 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),
                                                 (char)pbVar11 + *pbVar11 +
                                                 (CARRY4((uint)puVar28,*puVar28) ||
                                                 CARRY4((int)puVar28 + *puVar28,uVar12)));
                      cRam130a0000 = cRam130a0000 - (char)((uint)unaff_EBX >> 8);
                      puVar38 = param_2;
                      unaff_ESI = unaff_ESI + 1;
code_r0x00402435:
                      puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                                 (byte)puVar38 | (byte)*puVar38);
                      bVar7 = *in_EAX;
                      *in_EAX = *in_EAX + (char)in_EAX;
                      puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar28 >> 8) | bVar7 |
                                                          bRam7d170243,(char)puVar28));
code_r0x00402442:
                      pbVar11 = (byte *)((int)puVar38 + (int)in_EAX);
                      bVar30 = *pbVar11;
                      bVar7 = (byte)in_EAX;
                      *pbVar11 = *pbVar11 + bVar7;
                      uVar12 = *puVar38;
                      uVar17 = *puVar38;
                      *puVar38 = (uint)((byte *)(uVar17 + (int)puVar28) + CARRY1(bVar30,bVar7));
                      param_2 = puVar38;
                      if ((SCARRY4(uVar12,(int)puVar28) !=
                          SCARRY4((int)(uVar17 + (int)puVar28),(uint)CARRY1(bVar30,bVar7))) !=
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
                          pcVar13 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
                          cRam162b0000 = cRam162b0000 - bVar7;
code_r0x0040245d:
                          unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                       (byte)unaff_EBX | (byte)((uint)puVar28 >> 8))
                          ;
                          cVar8 = in((short)puVar38);
                          puVar24 = (ushort *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar8);
                          *(char *)puVar24 = (char)*puVar24 + cVar8;
                          *(byte *)puVar38 = (byte)*puVar38 + cVar8;
                          if ((POPCOUNT((byte)*puVar38) & 1U) == 0) {
code_r0x00402466:
                            *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
                            uVar25 = (undefined3)((uint)puVar24 >> 8);
                            bVar7 = (char)puVar24 + 0x13U | (byte)*puVar38;
                            pcVar13 = (char *)CONCAT31(uVar25,bVar7);
                            cVar8 = (byte)puVar28 + *unaff_EBX;
                            puVar47 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),cVar8);
                            cRam1b000019 = cRam1b000019 + '\x01';
                            uVar12 = (uint)CARRY1((byte)puVar28,*unaff_EBX);
                            iVar14 = *(int *)unaff_EBX;
                            iVar1 = *(int *)unaff_EBX;
                            *(byte **)unaff_EBX = (byte *)(iVar1 + (int)puVar47) + uVar12;
                            if ((SCARRY4(iVar14,(int)puVar47) !=
                                SCARRY4(iVar1 + (int)puVar47,uVar12)) != *(int *)unaff_EBX < 0) {
                              *pcVar13 = *pcVar13 + bVar7;
                              iVar14 = CONCAT31(uVar25,bVar7 + 2) + 0x847d + (uint)(0xfd < bVar7);
                              uVar25 = (undefined3)((uint)iVar14 >> 8);
                              bVar7 = (char)iVar14 + 0x12;
                              puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                                         CONCAT11((byte)((uint)puVar28 >> 8) |
                                                                  *(byte *)CONCAT31(uVar25,bVar7),
                                                                  cVar8));
                              in_AF = 9 < (bVar7 & 0xf) | in_AF;
                              uVar12 = CONCAT31(uVar25,bVar7 + in_AF * -6) & 0xffffff0f;
                              pcVar13 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                                         CONCAT11((char)((uint)iVar14 >> 8) - in_AF,
                                                                  (char)uVar12));
code_r0x00402486:
                              *pcVar13 = *pcVar13 + (char)pcVar13;
                              puVar47 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                                         (byte)puVar38 | (byte)*puVar38);
                              uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
                              bVar7 = (byte)((uint)unaff_EBX >> 8) | (byte)((uint)puVar38 >> 8);
                              in_EAX = (byte *)(pcVar13 + 0x1b000019);
                              puVar38 = (uint *)((int)puVar47 + (int)in_EAX);
                              bVar54 = CARRY4((uint)puVar28,*puVar38);
                              pbVar11 = (byte *)((int)puVar28 + *puVar38);
                              puVar28 = (uint *)(pbVar11 + ((char *)0xe4ffffe6 < pcVar13));
                              piVar22 = (int *)((int)unaff_EDI * 2 + 0x400008b);
                              *piVar22 = (int)((int)puVar28 +
                                              (uint)(bVar54 ||
                                                    CARRY4((uint)pbVar11,
                                                           (uint)((char *)0xe4ffffe6 < pcVar13))) +
                                              *piVar22);
                              unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(bVar7 + *(char *)(
                                                  CONCAT22(uVar34,CONCAT11(bVar7,(char)unaff_EBX)) +
                                                  -0x79),(char)unaff_EBX));
                              puVar38 = puVar47;
code_r0x0040249e:
                              bVar7 = (byte)in_EAX;
                              *in_EAX = *in_EAX + bVar7;
                              uVar25 = (undefined3)((uint)in_EAX >> 8);
                              cVar8 = bVar7 + 2;
                              in_EAX = (byte *)CONCAT31(uVar25,cVar8);
                              param_2 = puVar38;
                              if (0xfd < bVar7) {
                                bVar30 = *in_EAX;
                                *in_EAX = *in_EAX + cVar8;
                                unaff_retaddr =
                                     (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                                if (SCARRY1(bVar30,cVar8) == (char)*in_EAX < '\0')
                                goto code_r0x00402435;
                                *in_EAX = *in_EAX + cVar8;
                                cVar8 = bVar7 + 4;
                                pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                                if ((POPCOUNT(cVar8) & 1U) != 0) {
                                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar28;
                                  in_EAX = (byte *)(pcVar13 + -0x7d170243);
                                  goto code_r0x00402442;
                                }
                                *pcVar13 = *pcVar13 + cVar8;
                                cVar8 = bVar7 + 6;
                                pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                                if ((POPCOUNT(cVar8) & 1U) == 0) {
                                  while( true ) {
                                    cVar8 = (char)pcVar13;
                                    *pcVar13 = *pcVar13 + cVar8;
                                    uVar25 = (undefined3)((uint)pcVar13 >> 8);
                                    pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '}');
                                    unaff_ESI = (uint *)((int)unaff_ESI + -1);
                                    *pcVar13 = *pcVar13 + cVar8 + '}';
                                    cVar43 = cVar8 + '\x7f';
                                    in_EAX = (byte *)CONCAT31(uVar25,cVar43);
                                    if ((POPCOUNT(cVar43) & 1U) != 0) break;
                                    *in_EAX = *in_EAX + cVar43;
                                    cVar43 = cVar8 + -0x7f;
                                    in_EAX = (byte *)CONCAT31(uVar25,cVar43);
                                    if ((POPCOUNT(cVar43) & 1U) != 0) goto code_r0x00402451;
                                    *in_EAX = *in_EAX + cVar43;
                                    pcVar13 = (char *)CONCAT31(uVar25,cVar8 + -2);
                                    unaff_EDI = unaff_EDI + -1;
                                    while( true ) {
                                      cVar8 = (char)pcVar13;
                                      *pcVar13 = *pcVar13 + cVar8;
                                      uVar25 = (undefined3)((uint)pcVar13 >> 8);
                                      cVar43 = cVar8 + '\x02';
                                      pcVar13 = (char *)CONCAT31(uVar25,cVar43);
                                      if ((POPCOUNT(cVar43) & 1U) != 0) goto code_r0x0040245d;
                                      *pcVar13 = *pcVar13 + cVar43;
                                      pcVar13 = (char *)(CONCAT31(uVar25,cVar8 + 'q') + 1);
                                      *pcVar13 = *pcVar13 + (byte)pcVar13;
                                      uVar25 = (undefined3)((uint)pcVar13 >> 8);
                                      bVar7 = (byte)pcVar13 | (byte)*puVar38;
                                      pcVar13 = (char *)CONCAT31(uVar25,bVar7);
                                      if ((POPCOUNT(bVar7) & 1U) != 0) {
                                        puVar28 = (uint *)((int)puVar28 + *puVar38);
                                        puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                                                   (char)puVar38 + (byte)*puVar38);
                                        unaff_EDI = (byte *)((uint)unaff_EDI | (uint)unaff_ESI);
                                        puVar24 = (ushort *)(pcVar13 + 0x1b000019);
                                        goto code_r0x00402466;
                                      }
                                      *pcVar13 = *pcVar13 + bVar7;
                                      pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x6f);
                                      puVar28 = (uint *)((int)puVar28 + 1);
                                      *pcVar13 = *pcVar13 + bVar7 + 0x6f;
                                      uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
                                      bVar7 = (byte)unaff_EBX;
                                      bVar30 = (byte)((uint)unaff_EBX >> 8) | (byte)*puVar38;
                                      in_SS = (ushort)param_3;
                                      param_3 = CONCAT22(param_3._2_2_,in_ES);
                                      cVar43 = (char)(pcVar13 + -0x21000001);
                                      uVar25 = (undefined3)((uint)(pcVar13 + -0x21000001) >> 8);
                                      cVar8 = cVar43 + -0x13;
                                      pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                                      cVar45 = bVar30 + *(char *)(CONCAT22(uVar34,CONCAT11(bVar30,
                                                  bVar7)) + -0x73);
                                      unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,bVar7));
                                      *pcVar13 = *pcVar13 + cVar8;
                                      pcVar13 = (char *)(CONCAT31(uVar25,cVar43 + '\x19') | *puVar38
                                                        );
                                      if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) != 0)
                                      goto code_r0x00402486;
                                      cVar8 = (char)pcVar13;
                                      *pcVar13 = *pcVar13 + cVar8;
                                      uVar25 = (undefined3)((uint)pcVar13 >> 8);
                                      pcVar16 = (char *)CONCAT31(uVar25,cVar8 + 'o');
                                      param_2 = (uint *)((int)puVar38 + 1);
                                      *pcVar16 = *pcVar16 + cVar8 + 'o';
                                      bVar7 = bVar7 | (byte)((uint)pcVar13 >> 8);
                                      unaff_retaddr =
                                           (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                                                            in_ES);
                                      pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '\\');
                                      cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >>
                                                                                 8),bVar7) + -0x78);
                                      unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,bVar7));
                                      *pcVar13 = *pcVar13 + cVar8 + '\\';
                                      pcVar13 = (char *)(CONCAT31(uVar25,cVar8 + -0x78) | *param_2);
                                      cVar8 = (char)pcVar13;
                                      uVar25 = (undefined3)((uint)pcVar13 >> 8);
                                      if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) != 0) {
                                        in_EAX = (byte *)CONCAT31(uVar25,cVar8 + '\x02');
                                        puVar38 = param_2;
                                        if ((POPCOUNT(cVar8 + '\x02') & 1U) == 0)
                                        goto code_r0x0040249e;
                                        goto code_r0x00402425;
                                      }
                                      *pcVar13 = *pcVar13 + cVar8;
                                      cVar43 = cVar8 + 'o';
                                      pcVar16 = (char *)CONCAT31(uVar25,cVar43);
                                      puVar38 = (uint *)((int)puVar38 + 2);
                                      *pcVar16 = *pcVar16 + cVar43;
                                      bVar7 = bVar7 | (byte)((uint)pcVar13 >> 8);
                                      unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45 + *(char *
                                                  )(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7) +
                                                   -0x79),bVar7));
                                      *pcVar16 = *pcVar16 + cVar43;
                                      pcVar13 = (char *)(CONCAT31(uVar25,cVar8 + 'z') | 2);
                                      unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                      cVar8 = (char)pcVar13;
                                      *pcVar13 = *pcVar13 + cVar8;
                                      cVar43 = cVar8 + '\x02';
                                      pcVar13 = (char *)CONCAT31(uVar25,cVar43);
                                      if (SCARRY1(cVar8,'\x02') != cVar43 < '\0') break;
                                      *pcVar13 = *pcVar13 + cVar43;
                                      cVar43 = cVar8 + '\n';
                                      *unaff_EBX = *unaff_EBX - cVar43;
                                      *(byte *)puVar38 = *(byte *)puVar38 + (char)puVar28;
                                      unaff_EBP[-0x7c] = unaff_EBP[-0x7c] + 1;
                                      *(char *)CONCAT31(uVar25,cVar43) =
                                           *(char *)CONCAT31(uVar25,cVar43) + cVar43;
                                      cVar45 = cVar8 + '\f';
                                      pcVar13 = (char *)CONCAT31(uVar25,cVar45);
                                      if (SCARRY1(cVar43,'\x02') == cVar45 < '\0') {
                                        *pcVar13 = *pcVar13 + cVar45;
                                        pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '\x13');
                                        uVar53 = in_ES;
                                        goto code_r0x0040254a;
                                      }
                                    }
                                  }
                                  pbVar11 = (byte *)((int)puVar38 + (int)in_EAX);
                                  bVar57 = SCARRY1(*pbVar11,cVar43);
                                  *pbVar11 = *pbVar11 + cVar43;
                                  bVar7 = *pbVar11;
                                  goto code_r0x0040244f;
                                }
                                cVar43 = (char)puVar38;
                                cVar45 = cVar43 + *unaff_EDI;
                                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),cVar45);
                                if (SCARRY1(cVar43,*unaff_EDI) != cVar45 < '\0') {
                                  *pcVar13 = *pcVar13 + cVar8;
                                  in_EAX = (byte *)CONCAT31(uVar25,bVar7 + 8);
                                  goto code_r0x00402442;
                                }
                                cRam1b000013 = cRam1b000013 + '\x01';
                                goto code_r0x004023cd;
                              }
                              goto code_r0x00402425;
                            }
                            pcVar16 = pcVar13 + 2;
                            *pcVar16 = *pcVar16 + (char)((uint)puVar38 >> 8);
                            puVar28 = puVar47;
                            if ((POPCOUNT(*pcVar16) & 1U) == 0) {
                              *pcVar13 = *pcVar13 + bVar7;
                              pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 2);
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
                                                        unaff_EBP[(int)pcVar13 * 4],(char)unaff_EBX)
                                              );
                  *(char *)((int)puVar38 * 2) = *(char *)((int)puVar38 * 2) + cVar8;
                  goto code_r0x00402391;
                }
                *pcVar13 = *pcVar13 + cVar43;
                in_EAX = (byte *)CONCAT31(uVar25,cVar43 + '\x02');
                goto code_r0x00402368;
              }
              goto code_r0x00402366;
            }
            goto code_r0x00402342;
          }
          LOCK();
          pcVar13 = *(char **)puVar24;
          *(ushort **)puVar24 = puVar24;
          UNLOCK();
          *(byte *)((int)puVar38 + (int)pcVar13) =
               *(byte *)((int)puVar38 + (int)pcVar13) + (char)pcVar13;
          goto code_r0x00402317;
        }
        bVar54 = CARRY1(*in_EAX,(byte)in_EAX);
        *in_EAX = *in_EAX + (byte)in_EAX;
code_r0x004022f3:
        *(byte **)unaff_EDI = (byte *)((int)param_2 + (uint)bVar54 + *(int *)unaff_EDI);
      }
      puVar38 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0x28],(char)param_2
                                         ));
      *pbVar11 = *pbVar11 + bVar7;
      uVar34 = (undefined2)((uint)puVar28 >> 0x10);
      uVar27 = SUB41(puVar28,0);
      bVar30 = bVar30 | *pbVar11;
      puVar28 = (uint *)CONCAT22(uVar34,CONCAT11(bVar30,uVar27));
      bVar36 = *pbVar11;
      in_EAX = (byte *)CONCAT31(uVar25,bVar7 + bVar36);
      bVar9 = *unaff_EBX;
      *unaff_EBX = *unaff_EBX + bVar30;
    } while (!CARRY1(bVar9,bVar30));
    *in_EAX = *in_EAX + bVar7 + bVar36;
    param_1 = CONCAT22(uVar34,CONCAT11(bVar30 | (byte)*puVar38,uVar27));
    unaff_retaddr = (byte *)((uint)unaff_retaddr & 0xffff0000);
    param_2 = puVar38;
  } while( true );
code_r0x0040254a:
  cVar8 = (char)pcVar13;
  *(char *)((int)pcVar13 * 2) = *(char *)((int)pcVar13 * 2) - cVar8;
  *pcVar13 = *pcVar13 + cVar8;
  pcVar16 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar8 + *pcVar13);
  *pcVar16 = *pcVar16 + cVar8 + *pcVar13;
  uVar58 = func_0x0f40255d();
code_r0x0040255d:
  pcVar13 = (char *)((ulonglong)uVar58 >> 0x20);
  piVar22 = (int *)uVar58;
  *piVar22 = (int)((int)piVar22 + *piVar22);
  uVar34 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar27 = SUB41(unaff_EBX,0);
  cVar45 = (char)((uint)unaff_EBX >> 8) + (char)((ulonglong)uVar58 >> 0x28);
  pcVar16 = (char *)CONCAT22(uVar34,CONCAT11(cVar45,uVar27));
  *piVar22 = (int)((int)piVar22 + *piVar22);
  *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar58 >> 0x20);
  cVar8 = (char)uVar58;
  *(char *)piVar22 = (char)*piVar22 + cVar8;
  *(char *)piVar22 = (char)*piVar22 + cVar8;
  *(char *)piVar22 = (char)*piVar22 + cVar8;
  *pcVar13 = *pcVar13 + cVar8;
  *(char *)piVar22 = (char)*piVar22 + cVar8;
  *pcVar16 = *pcVar16 + cVar8;
  *(char *)piVar22 = (char)*piVar22 + cVar8;
  pcVar3 = (code *)swi(1);
  uVar58 = (*pcVar3)();
  pbVar40 = (byte *)((ulonglong)uVar58 >> 0x20);
  pbVar11 = (byte *)uVar58;
  bVar7 = *pbVar11;
  bVar30 = (byte)uVar58;
  *pbVar11 = *pbVar11 + bVar30;
  *pbVar40 = *pbVar40 + bVar30 + CARRY1(bVar7,bVar30);
  *pbVar11 = *pbVar11 + bVar30;
  uVar52 = (ushort)unaff_retaddr;
  *pbVar11 = *pbVar11 + bVar30;
  *pbVar11 = *pbVar11 + bVar30;
  *pbVar11 = *pbVar11 + bVar30;
  *pbVar11 = *pbVar11 + bVar30;
  *pbVar11 = *pbVar11 + bVar30;
  *pbVar11 = *pbVar11 + bVar30;
  *pbVar11 = *pbVar11 + bVar30;
  cVar8 = (char)((ulonglong)uVar58 >> 0x28);
  *pbVar11 = *pbVar11 + cVar8;
  bVar7 = *pbVar11;
  uVar25 = (undefined3)((ulonglong)uVar58 >> 8);
  pcVar13 = (char *)CONCAT31(uVar25,bVar30 + bVar7);
  *pcVar13 = *pcVar13 + cVar8;
  cVar8 = bVar30 + bVar7 + *pcVar13;
  pcVar13 = (char *)CONCAT31(uVar25,cVar8);
  cVar43 = (char)((ulonglong)uVar58 >> 0x20);
  *unaff_EDI = *unaff_EDI + cVar43;
  *pcVar13 = *pcVar13 + cVar8;
  *pcVar13 = *pcVar13 + cVar43;
  *pcVar13 = *pcVar13 + cVar8;
  *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
  cVar45 = cVar45 + unaff_EBP[(int)pcVar13 * 4];
  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45,uVar27));
  unaff_EBX[(int)pcVar13] = unaff_EBX[(int)pcVar13] + cVar8;
  *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar8;
  *pbVar40 = *pbVar40 + (char)extraout_ECX;
  bVar30 = cVar8 - *pcVar13;
  pcVar13 = (char *)CONCAT31(uVar25,bVar30);
  *unaff_EBX = *unaff_EBX + cVar43;
  *pbVar40 = *pbVar40 ^ bVar30;
  *pbVar40 = *pbVar40 + cVar45;
  *pcVar13 = *pcVar13 + bVar30;
  cRam12110000 = cRam12110000 + bVar30;
  bVar7 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar30;
  pbVar11 = extraout_ECX;
  if (SCARRY1(bVar7,bVar30) != (char)*pbVar40 < '\0') {
code_r0x004025bd:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x12');
    *pcVar13 = *pcVar13 + (char)((uint)pbVar11 >> 8);
    pcVar13 = pcVar13 + -1;
    cVar8 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar8;
    bVar7 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x7b];
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar7,(char)unaff_EBX));
    *pcVar13 = *pcVar13 + cVar8;
    cRam0000847d = cRam0000847d + (char)pbVar40;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar8 + '$');
    unaff_EBX[-0x7b] = unaff_EBX[-0x7b] + bVar7;
    pbVar23 = pbVar11;
code_r0x004025d8:
    bVar7 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar7;
    bVar54 = 0xf4 < bVar7;
    pcVar13 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7 + 0xb);
    pbVar15 = unaff_EBP;
    do {
      bVar7 = (byte)pcVar13 + *pbVar23;
      uVar25 = (undefined3)((uint)pcVar13 >> 8);
      cVar8 = bVar7 + bVar54;
      cVar8 = cVar8 + *(char *)CONCAT31(uVar25,cVar8) +
              (CARRY1((byte)pcVar13,*pbVar23) || CARRY1(bVar7,bVar54));
      pcVar13 = (char *)CONCAT31(uVar25,cVar8);
      *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar8;
      *pcVar13 = *pcVar13 + cVar8;
      iVar14 = *(int *)pbVar40;
      pbVar15[(int)pcVar13 * 4] = pbVar15[(int)pcVar13 * 4] + (char)((uint)unaff_EBX >> 8);
      pcVar13[(int)pbVar15] = pcVar13[(int)pbVar15] + cVar8;
      pbVar39 = pbVar40 + (-1 - iVar14);
      *pcVar13 = *pcVar13 + cVar8;
      uVar34 = (undefined2)((uint)unaff_retaddr >> 0x10);
      unaff_retaddr = (byte *)CONCAT22(uVar34,uVar53);
      pbVar11 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar23 >> 8) | *pbVar39) + unaff_EDI[0x22],
                                          (char)pbVar23));
      *pcVar13 = *pcVar13 + cVar8;
      bVar36 = (char)pbVar39 - pbVar40[1 - iVar14];
      bVar9 = cVar8 - 0xf;
      pbVar23 = (byte *)CONCAT31(uVar25,bVar9);
      pbVar40 = (byte *)CONCAT22((short)((uint)pbVar39 >> 0x10),
                                 CONCAT11((char)((uint)pbVar39 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar39 >> 8),bVar36) +
                                                   -0x3f),bVar36));
      bVar7 = *pbVar23;
      bVar30 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar9;
      uVar49 = uVar53;
      if (SCARRY1(bVar30,bVar9)) {
        pbVar23 = (byte *)CONCAT31(uVar25,bVar9 + pbVar23[(int)pbVar15] + CARRY1(bVar7,bVar9));
        goto code_r0x00402677;
      }
      unaff_EBX = unaff_EBX + -1;
      *pbVar23 = *pbVar23 + bVar9;
      uVar12 = *unaff_ESI;
      *pbVar11 = *pbVar11 + 1;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),
                                 (bVar36 | (byte)uVar12) - (byte)*unaff_ESI);
      unaff_ESI = (uint *)((int)unaff_ESI +
                          (-(uint)(bVar9 < *pbVar23) - *(int *)CONCAT31(uVar25,bVar9 - *pbVar23)));
      unaff_EBP = (byte *)CONCAT31(uVar25,bVar9 - *pbVar23);
      *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      bVar30 = (byte)pbVar15;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar30;
      bVar7 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar30;
      *(byte **)unaff_EDI = pbVar40 + (uint)CARRY1(bVar7,bVar30) + *(int *)unaff_EDI;
      uVar25 = (undefined3)((uint)pbVar15 >> 8);
      bVar30 = bVar30 | *pbVar40;
      pcVar13 = (char *)CONCAT31(uVar25,bVar30);
      if ((POPCOUNT(bVar30) & 1U) != 0) {
        *pcVar13 = *pcVar13 + bVar30;
        uVar58 = CONCAT44(pbVar40,pcVar13 + 0x12110000);
        goto code_r0x0040255d;
      }
      *pcVar13 = *pcVar13 + bVar30;
      bVar7 = bVar30 + 0xd;
      pbVar23 = (byte *)CONCAT31(uVar25,bVar7);
      *unaff_ESI = *unaff_ESI | (uint)pbVar40;
      if (-1 < (int)*unaff_ESI) {
code_r0x00402678:
        *pbVar23 = *pbVar23 + (char)pbVar23;
        pbVar11 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar11 >> 8) | bRam7d160243,(char)pbVar11)
                                  );
        pbVar15 = unaff_EDI;
code_r0x00402680:
        bVar7 = (byte)pbVar11;
        *pbVar11 = *pbVar11 + bVar7;
        uVar25 = (undefined3)((uint)pbVar11 >> 8);
        piVar22 = (int *)((int)pbVar15 * 2 + 0x400009a);
        *piVar22 = *piVar22 + CONCAT31(uVar25,bVar7 + 2) + (uint)(0xfd < bVar7);
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(char *)((int)pbVar40 * 5),(char)unaff_EBX));
        *(char *)((int)pbVar40 * 2) = *(char *)((int)pbVar40 * 2) + bVar7 + 2;
        unaff_EDI = (byte *)CONCAT31(uVar25,bVar7 + 4);
        *pbVar15 = *pbVar15 - (bVar7 + 4);
code_r0x00402697:
        *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
        pbVar40 = pbVar40 + -*unaff_ESI;
        pbVar11 = unaff_EDI;
code_r0x0040269b:
        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                     (byte)unaff_EBX | (byte)((uint)pbVar23 >> 8));
        uVar29 = GlobalDescriptorTableRegister();
        *(undefined4 *)pbVar11 = uVar29;
        cVar8 = (char)pbVar11;
        *pbVar40 = *pbVar40 + cVar8;
        if ((POPCOUNT(*pbVar40) & 1U) == 0) {
          *pbVar11 = *pbVar11 + cVar8;
          pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar8 + '\x13');
          pbVar11 = pbVar23;
          unaff_EDI = pbVar15;
code_r0x004026a8:
          uVar25 = (undefined3)((uint)pcVar13 >> 8);
          bVar30 = (byte)pcVar13 + 2 + cRam001b15fe + (0xfd < (byte)pcVar13);
          bVar7 = *unaff_EBX;
          bVar9 = (byte)unaff_EBX;
          *unaff_EBX = *unaff_EBX + bVar9;
          iRam00009a7d = iRam00009a7d + CONCAT31(uVar25,bVar30) + (uint)CARRY1(bVar7,bVar9);
          iVar14 = CONCAT31(uVar25,bVar30 + 2) + 0x917d + (uint)(0xfd < bVar30);
          cVar8 = (char)iVar14;
          uVar25 = (undefined3)((uint)iVar14 >> 8);
          bVar7 = cVar8 + 0x3a;
          pbVar39 = (byte *)CONCAT31(uVar25,bVar7);
          *pbVar39 = *pbVar39 + bVar7;
          uVar42 = (undefined3)((uint)pbVar40 >> 8);
          bVar30 = (byte)pbVar40 | *pbVar40;
          uVar17 = CONCAT31(uVar25,cVar8 + '8');
          uVar12 = uVar17 + 0x1b00001b;
          pcVar13 = (char *)(uVar12 + (1 < bVar7) + *unaff_ESI +
                            (uint)(0xe4ffffe4 < uVar17 || CARRY4(uVar12,(uint)(1 < bVar7))));
          bVar7 = bVar30 + *pbVar11;
          pbVar40 = (byte *)CONCAT31(uVar42,bVar7);
          uVar25 = (undefined3)((uint)pcVar13 >> 8);
          cVar8 = (char)pcVar13;
          if (SCARRY1(bVar30,*pbVar11) != (char)bVar7 < '\0') {
            *pcVar13 = *pcVar13 + cVar8;
            pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '\x02');
            uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
            cVar45 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x68];
            unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar45,bVar9));
            *pcVar13 = *pcVar13 + cVar8 + '\x02';
            bVar30 = cVar8 + 0x2a;
            pbVar23 = (byte *)CONCAT31(uVar25,bVar30);
            *pbVar23 = *pbVar23 | bVar30;
            bVar7 = *unaff_EBX;
            cVar43 = (char)((uint)pbVar11 >> 8);
            *unaff_EBX = *unaff_EBX + cVar43;
            pbVar15 = unaff_EDI;
            if (SCARRY1(bVar7,cVar43) != (char)*unaff_EBX < '\0') {
              *pbVar23 = *pbVar23 + bVar30;
              bVar7 = cVar8 + 0x2c;
              if ((POPCOUNT(bVar7) & 1U) == 0) {
                *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
                bVar30 = cVar8 + 0x59;
                pcVar13 = (char *)CONCAT31(uVar25,bVar30);
                *(char **)pbVar40 = pcVar13 + (uint)(0xd2 < bVar7) + *(int *)pbVar40;
                unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(cVar45 + unaff_EBX[-0x67],bVar9));
                *pcVar13 = *pcVar13 + bVar30;
                pbVar15 = (byte *)((CONCAT31(uVar25,cVar8 + -0x38) + -0x7d060000) -
                                  (uint)(0x90 < bVar30));
                pbVar23 = pbVar11;
                uStack_4 = in_ES;
code_r0x00402700:
                *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                cVar8 = (char)unaff_EDI + '\x02';
                pbVar11 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8);
                bVar54 = (POPCOUNT(cVar8) & 1U) == 0;
                unaff_EDI = pbVar39;
code_r0x00402704:
                if (bVar54) {
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  cVar8 = (char)pbVar11 + '\x02';
                  pcVar13 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar8);
                  puVar28 = unaff_ESI;
                  if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x0040270c:
                    uVar51 = in_ES;
                    cVar8 = (char)pcVar13;
                    *pcVar13 = *pcVar13 + cVar8;
                    uVar25 = (undefined3)((uint)pcVar13 >> 8);
                    bVar7 = cVar8 + 0x6f;
                    piVar22 = (int *)CONCAT31(uVar25,bVar7);
                    iVar14 = *piVar22;
                    *(byte *)piVar22 = (char)*piVar22 + bVar7;
                    in_ES = uVar51;
                    pbVar11 = pbVar40;
                    if ((char)*piVar22 != '\0' &&
                        SCARRY1((char)iVar14,bVar7) == (char)*piVar22 < '\0') {
                      *(byte *)piVar22 = (char)*piVar22 + bVar7;
                      bVar30 = cVar8 + 0x9c;
                      piVar22 = (int *)CONCAT31(uVar25,bVar30);
                      puVar38 = puVar28 + (int)pbVar15 * 2;
                      uVar12 = *puVar38;
                      uVar17 = *puVar38;
                      *puVar38 = (uint)(pbVar40 + uVar17 + (0xd2 < bVar7));
                      *piVar22 = (*piVar22 - (int)piVar22) -
                                 (uint)(CARRY4(uVar12,(uint)pbVar40) ||
                                       CARRY4((uint)(pbVar40 + uVar17),(uint)(0xd2 < bVar7)));
                      uVar12 = *puVar28;
                      *(byte *)puVar28 = (byte)*puVar28 + bVar30;
                      pbVar11 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar51);
                      if (!CARRY1((byte)uVar12,bVar30)) {
                        halt_baddata();
                      }
                    }
code_r0x00402724:
                    unaff_EDI = pbVar11;
                    uVar49 = uStack_4;
                    *(byte *)piVar22 = (char)*piVar22 + (byte)piVar22;
                    uVar25 = (undefined3)((uint)piVar22 >> 8);
                    bVar7 = (byte)piVar22 | *(byte *)((int)piVar22 + 0x400000d);
                    pcVar13 = (char *)CONCAT31(uVar25,bVar7);
                    if ((char)bVar7 < '\x01') {
                      bVar54 = pcVar13 < (char *)0x6fe1411;
                      pcVar13 = pcVar13 + -0x6fe1411;
                    }
                    else {
                      *pcVar13 = *pcVar13 + bVar7;
                      bVar9 = bVar7 + 0x28;
                      puVar38 = (uint *)CONCAT31(uVar25,bVar9);
                      *puVar38 = *puVar38 | (uint)puVar38;
                      bVar30 = *unaff_EBX;
                      cVar8 = (char)((uint)pbVar23 >> 8);
                      *unaff_EBX = *unaff_EBX + cVar8;
                      if (*unaff_EBX == 0 || SCARRY1(bVar30,cVar8) != (char)*unaff_EBX < '\0')
                      goto code_r0x00402746;
                      *(byte *)puVar38 = (char)*puVar38 + bVar9;
                      pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x55);
                      puVar38 = puVar28 + (int)pbVar15 * 2;
                      bVar54 = CARRY4(*puVar38,(uint)pbVar40) ||
                               CARRY4((uint)(pbVar40 + *puVar38),(uint)(0xd2 < bVar9));
                      *puVar38 = (uint)(pbVar40 + *puVar38 + (0xd2 < bVar9));
                      in_stack_fffffff4 = (byte *)(uint)in_ES;
                    }
                    while( true ) {
                      uVar25 = (undefined3)((uint)pcVar13 >> 8);
                      bVar7 = ((char)pcVar13 - *pcVar13) - bVar54;
                      puVar38 = (uint *)CONCAT31(uVar25,bVar7);
                      uVar12 = *puVar28;
                      *(byte *)puVar28 = (byte)*puVar28 + bVar7;
                      if (CARRY1((byte)uVar12,bVar7)) break;
                      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                   (byte)unaff_EBX | (byte)((uint)pbVar40 >> 8));
                      pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 2);
                      while( true ) {
                        uVar49 = (ushort)unaff_EDI;
                        unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                        cVar8 = (char)pcVar13;
                        *pcVar13 = *pcVar13 + cVar8;
                        uVar25 = (undefined3)((uint)pcVar13 >> 8);
                        bVar7 = cVar8 + 2;
                        pcVar13 = (char *)CONCAT31(uVar25,bVar7);
                        if (SCARRY1(cVar8,'\x02') != (char)bVar7 < '\0') break;
                        *pcVar13 = *pcVar13 + bVar7;
                        cVar45 = (char)pbVar40;
                        *pbVar15 = *pbVar15 - cVar45;
                        *pbVar40 = *pbVar40 + (char)pbVar23;
                        bVar30 = (cVar8 + '\t') - *(char *)CONCAT31(uVar25,cVar8 + '\t');
                        pbVar11 = (byte *)CONCAT31(uVar25,bVar30);
                        bVar7 = *pbVar11;
                        *pbVar11 = *pbVar11 + bVar30;
                        pbVar39 = pbVar23 + 1;
                        cVar8 = bVar30 - CARRY1(bVar7,bVar30);
                        pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                        *pcVar13 = *pcVar13 + cVar8;
                        *pcVar13 = *pcVar13 + cVar8;
                        *pcVar13 = *pcVar13 + cVar8;
                        *pcVar13 = *pcVar13 + cVar8;
                        cVar43 = (char)((uint)pbVar39 >> 8);
                        pbVar23[2] = pbVar23[2] + cVar43;
                        *pcVar13 = *pcVar13 + cVar8;
                        pcVar13 = (char *)(*(int *)pbVar39 * 0x170000);
                        *pcVar13 = *pcVar13;
                        *pcVar13 = *pcVar13;
                        *pbVar39 = *pbVar39;
                        uVar35 = (undefined2)((uint)unaff_EBX >> 0x10);
                        cVar8 = (char)unaff_EBX;
                        bVar9 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)pbVar40 * 5);
                        unaff_EBX = (byte *)CONCAT22(uVar35,CONCAT11(bVar9,cVar8));
                        unaff_EBX[(int)pcVar13] = unaff_EBX[(int)pcVar13];
                        *pcVar13 = *pcVar13 - cVar8;
                        *pbVar40 = *pbVar40 + (char)pbVar39;
                        uVar25 = (undefined3)((uint)pcVar13 >> 8);
                        bVar30 = -*pcVar13;
                        pbVar11 = (byte *)CONCAT31(uVar25,bVar30);
                        *unaff_EBX = *unaff_EBX + cVar45;
                        *pbVar40 = *pbVar40 ^ bVar30;
                        *pbVar40 = *pbVar40 + bVar30;
                        *pbVar11 = *pbVar11 + bVar30;
                        bVar7 = *pbVar11;
                        *pbVar11 = *pbVar11 + bVar30;
                        *(byte **)pbVar40 = pbVar40 + (uint)CARRY1(bVar7,bVar30) + *(int *)pbVar40;
                        bVar7 = *pbVar40;
                        *pbVar40 = *pbVar40 + bVar30;
                        if (SCARRY1(bVar7,bVar30) == (char)*pbVar40 < '\0') {
                          pcVar13 = (char *)((uint)pbVar11 | 2);
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          *pcVar13 = *pcVar13 + (char)pcVar13;
                          uVar52 = uVar53;
                          uStack_4 = (ushort)param_3;
                        }
                        else {
                          *pbVar11 = *pbVar11 + bVar30;
                          cVar10 = bVar30 + 0x12;
                          pcVar13 = (char *)CONCAT31(uVar25,cVar10);
                          bVar7 = *unaff_EBX;
                          *unaff_EBX = *unaff_EBX + cVar10;
                          uStack_4 = uVar49;
                          if (SCARRY1(bVar7,cVar10) != (char)*unaff_EBX < '\0') {
                            *pcVar13 = *pcVar13 + cVar10;
                            cVar10 = bVar30 + 0x24;
                            pcVar13 = (char *)CONCAT31(uVar25,cVar10);
                            *pcVar13 = *pcVar13 + cVar43;
                            *pcVar13 = *pcVar13 + cVar10;
                            bVar9 = bVar9 | unaff_EBP[-0x6e];
                            pcVar16 = (char *)CONCAT22(uVar35,CONCAT11(bVar9,cVar8));
                            *pcVar13 = *pcVar13 + cVar10;
                            cRam0000917d = cRam0000917d + cVar45;
                            bVar36 = bVar30 + 0x48;
                            pcVar16[-0x6e] = pcVar16[-0x6e] + bVar9;
                            *(char *)CONCAT31(uVar25,bVar36) =
                                 *(char *)CONCAT31(uVar25,bVar36) + bVar36;
                            bVar7 = bVar30 + 0x53 + *unaff_retaddr;
                            cVar8 = bVar7 + (0xf4 < bVar36);
                            cVar8 = cVar8 + *(char *)CONCAT31(uVar25,cVar8) +
                                    (CARRY1(bVar30 + 0x53,*unaff_retaddr) ||
                                    CARRY1(bVar7,0xf4 < bVar36));
                            pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                            *pcVar16 = *pcVar16 - (char)uVar53;
                            *pcVar13 = *pcVar13 + cVar8;
                            pbVar40 = pbVar40 + -*(int *)pbVar40;
                            *(char *)((int)pbVar40 * 5) = *(char *)((int)pbVar40 * 5) + bVar9;
                            pcVar13[(int)unaff_EBP] = pcVar13[(int)unaff_EBP] + cVar8;
                            *pcVar13 = *pcVar13 + cVar8;
                            bVar30 = (byte)(uVar53 >> 8) | *pbVar40;
                            uVar27 = (undefined1)param_3;
                            cVar43 = (char)((uint)param_3 >> 8) + *(char *)(param_3 + 0xf);
                            *pcVar13 = *pcVar13 + cVar8;
                            bVar7 = cVar8 + 0x2aU & *pbVar40;
                            iVar14 = *(int *)(unaff_EBP + 0xf);
                            *(char *)CONCAT31(uVar25,bVar7) =
                                 *(char *)CONCAT31(uVar25,bVar7) + bVar7;
                            pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
                            cVar43 = cVar43 + *(char *)(CONCAT22(param_3._2_2_,
                                                                 CONCAT11(cVar43,uVar27)) + 0x10);
                            *pcVar13 = *pcVar13 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar40;
                            iVar1 = *(int *)(unaff_EBP + 0x10);
                            *(char *)CONCAT31(uVar25,bVar7) =
                                 *(char *)CONCAT31(uVar25,bVar7) + bVar7;
                            pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
                            puVar44 = (uint *)CONCAT22(param_3._2_2_,
                                                       CONCAT11(cVar43 + *(char *)(CONCAT22(param_3.
                                                  _2_2_,CONCAT11(cVar43,uVar27)) + 0x11),uVar27));
                            *pcVar13 = *pcVar13 + bVar7 + 0x2a;
                            bVar7 = bVar7 + 0x54 & *pbVar40;
                            puVar47 = (uint *)(pbVar15 + *(int *)(unaff_EBP + 0x11) + iVar1 + iVar14
                                              );
                            *(char *)CONCAT31(uVar25,bVar7) =
                                 *(char *)CONCAT31(uVar25,bVar7) + bVar7;
                            pbVar11 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
                            puVar38 = (uint *)CONCAT22(uVar34,CONCAT11(bVar30 + *pbVar11,
                                                                       (char)uVar53));
                            uVar58 = CONCAT44(pbVar40,pbVar11 + (uint)CARRY1(bVar30,*pbVar11) +
                                                                *(int *)pbVar11);
                            uVar53 = uVar49;
                            goto code_r0x00402866;
                          }
                        }
                        cVar43 = (char)pcVar13;
                        uVar25 = (undefined3)((uint)pcVar13 >> 8);
                        cVar8 = cVar43 + '\x02';
                        piVar22 = (int *)CONCAT31(uVar25,cVar8);
                        pbVar23 = pbVar39;
                        in_ES = uVar49;
                        pbVar11 = pbVar40;
                        if (SCARRY1(cVar43,'\x02') != cVar8 < '\0') goto code_r0x00402724;
                        *(char *)piVar22 = (char)*piVar22 + cVar8;
                        pcVar13 = (char *)CONCAT31(uVar25,cVar43 + '\n');
                        *(byte *)puVar28 = (byte)*puVar28 - cVar45;
                        *pbVar40 = *pbVar40 + (char)pbVar39;
                      }
                      pbVar11 = unaff_EBP + 0x6fe1411;
                      bVar54 = CARRY1(*pbVar11,bVar7);
                      *pbVar11 = *pbVar11 + bVar7;
                    }
                    goto code_r0x00402746;
                  }
                  unaff_EBX[(int)pbVar40] = unaff_EBX[(int)pbVar40] + cVar8;
                  pbVar11 = pbVar23;
                  unaff_EDI = pbVar15;
                  goto code_r0x004026a8;
                }
                goto code_r0x0040269b;
              }
              uVar51 = 0x927c;
              in_stack_ffffffec = 0x40268f;
              uVar58 = func_0x02040000(in_CS,in_stack_fffffff4,pbVar39);
              pbVar40 = (byte *)((ulonglong)uVar58 >> 0x20);
              *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
              pbVar23 = (byte *)CONCAT31((int3)((ulonglong)uVar58 >> 8),(char)uVar58 + '\x12');
              pbVar11 = extraout_ECX_00;
              in_CS = uVar51;
            }
            goto code_r0x00402680;
          }
          pbVar15 = unaff_EBP + -1;
          *pcVar13 = *pcVar13 + cVar8;
          pbVar40 = (byte *)CONCAT31(uVar42,bVar7 | *unaff_EBX);
          pbVar23 = (byte *)CONCAT31(uVar25,cVar8 + ':');
code_r0x00402677:
          unaff_ESI = (uint *)((int)unaff_ESI + -1);
          unaff_EBP = pbVar15;
          goto code_r0x00402678;
        }
        goto code_r0x0040263f;
      }
      *pbVar23 = *pbVar23 + bVar7;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x6b],
                                            (char)unaff_EBX));
      *pbVar23 = *pbVar23 + bVar7;
      cVar8 = bVar30 + 0xf;
      pcVar13 = (char *)CONCAT31(uVar25,cVar8);
      param_3 = CONCAT22(param_3._2_2_,uVar52);
      if (SCARRY1(bVar7,'\x02') == cVar8 < '\0') {
        pcVar13 = pcVar13 + (0xfd < bVar7) + 0x847d;
        goto code_r0x004025bd;
      }
      *pcVar13 = *pcVar13 + cVar8;
      cVar43 = bVar30 + 0x11;
      pbVar15 = (byte *)CONCAT31(uVar25,cVar43);
      uVar58 = CONCAT44(pbVar40,pbVar15);
      param_3 = CONCAT22(param_3._2_2_,uVar52);
      pbVar23 = pbVar11;
      pbVar11 = unaff_EDI;
      if (SCARRY1(cVar8,'\x02') == cVar43 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
      *pbVar15 = *pbVar15 + (char)pbVar15;
      bVar7 = (char)pbVar15 + 2;
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar13 = *pcVar13 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar15 = unaff_EBX + (int)pbVar23;
      bVar54 = CARRY1(*pbVar15,bVar7);
      *pbVar15 = *pbVar15 + bVar7;
      pbVar15 = unaff_EBP;
      unaff_EDI = pbVar11;
      uVar53 = uVar49;
    } while( true );
  }
  goto code_r0x00402543;
code_r0x00402746:
  *(byte *)puVar38 = (char)*puVar38 + (byte)puVar38;
  uVar25 = (undefined3)((uint)puVar38 >> 8);
  bVar7 = (byte)puVar38 | *(byte *)((int)puVar38 + 0x400000e);
  pcVar13 = (char *)CONCAT31(uVar25,bVar7);
  unaff_ESI = puVar28;
  if ('\0' < (char)bVar7) {
    *pcVar13 = *pcVar13 + bVar7;
    bVar7 = bVar7 + 0x28 | *(byte *)CONCAT31(uVar25,bVar7 + 0x28);
    *unaff_EBX = *unaff_EBX + (char)((uint)pbVar23 >> 8);
    unaff_ESI = puVar28 + 1;
    out(*puVar28,(short)pbVar40);
    *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
    pcVar13 = (char *)(uint)(bVar7 | *pbVar40);
    in_stack_fffffff4 = unaff_EBP;
  }
  bVar7 = (byte)pcVar13 & 0x7b;
  bVar54 = (char)(bVar7 + 0x17) < '\0';
  uStack_4 = uVar51;
  if (SCARRY1(bVar7,'\x17') == bVar54) {
    pbVar39 = unaff_EDI;
    if (SCARRY1(bVar7,'\x17') != bVar54) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar43 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar43;
  iVar26 = (int3)((uint)unaff_EDI >> 8);
  cVar8 = cVar43 + '\x02';
  pbVar11 = (byte *)CONCAT31(iVar26,cVar8);
  bVar54 = (POPCOUNT(cVar8) & 1U) == 0;
  if (!bVar54) goto code_r0x00402704;
  *pbVar11 = *pbVar11 + cVar8;
  cVar43 = cVar43 + '\x04';
  pcVar13 = (char *)CONCAT31(iVar26,cVar43);
  if ((POPCOUNT(cVar43) & 1U) == 0) {
    *pcVar13 = *pcVar13 + cVar43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar40 = (byte *)((int)iVar26 >> 0x17);
  puVar28 = unaff_ESI;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    cVar8 = (char)puVar44 - (byte)*puVar28;
    iVar14 = CONCAT22((short)((uint)puVar44 >> 0x10),
                      CONCAT11((char)((uint)puVar44 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),cVar8) + 0x12),cVar8));
    *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
    uVar25 = (undefined3)((ulonglong)uVar58 >> 8);
    bVar7 = (char)uVar58 + 0x2aU & (byte)*puVar41;
    pcVar13 = (char *)CONCAT31(uVar25,bVar7);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x12));
    *pcVar13 = *pcVar13 + bVar7;
    puVar19 = (uint *)CONCAT31(uVar25,bVar7 + 0x2a);
    pbVar11 = (byte *)(uint)uVar53;
get_Value:
    cVar8 = *(char *)(iVar14 + 0x13);
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    uVar25 = (undefined3)((uint)puVar19 >> 8);
    bVar7 = (char)puVar19 + 0x2aU & (byte)*puVar41;
    pcVar13 = (char *)CONCAT31(uVar25,bVar7);
    puVar47 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x13));
    *pcVar13 = *pcVar13 + bVar7;
    pbVar40 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
    uVar12 = (uint)uVar53;
    bVar30 = (byte)((uint)puVar38 >> 8);
    bVar7 = bVar30 + *pbVar40;
    pbVar40 = pbVar40 + (uint)CARRY1(bVar30,*pbVar40) + *(int *)pbVar40;
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    puVar44 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar14 >> 0x10),
                                               CONCAT11((char)((uint)iVar14 >> 8) + cVar8,
                                                        (char)iVar14)) >> 8),
                               (char)iVar14 - (byte)*puVar28);
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11(bVar7 + *pbVar40,(char)puVar38));
    pbVar40 = pbVar40 + (uint)CARRY1(bVar7,*pbVar40) + *(int *)pbVar40;
code_r0x00402898:
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    bVar7 = (byte)puVar41;
    uVar34 = CONCAT11((char)((uint)puVar41 >> 8) - (byte)*puVar28,bVar7);
    pbVar23 = (byte *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar34);
    pcVar13 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[-0x19],
                                        (char)puVar44));
    *pbVar40 = *pbVar40 + (char)pbVar40;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + '\x03');
    puVar44 = puVar28;
    do {
      puVar28 = puVar44 + 1;
      out(*puVar44,uVar34);
      pcVar13 = pcVar13 + -1;
      bVar30 = (byte)pbVar40;
      *pbVar40 = *pbVar40 + bVar30;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((byte)((uint)puVar38 >> 8) | *pbVar23,(char)puVar38));
      *pbVar40 = *pbVar40 + bVar30;
      *pcVar13 = *pcVar13 + bVar7;
      *(byte *)((int)pbVar40 * 2) = *(byte *)((int)pbVar40 * 2) ^ bVar30;
      *pbVar40 = *pbVar40 + bVar30;
      *pbVar40 = *pbVar40 | bVar30;
      bVar54 = CARRY1((byte)*puVar38,bVar7);
      *(byte *)puVar38 = (byte)*puVar38 + bVar7;
      cVar8 = bVar30 + 10 + bVar54;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar8);
      puVar44 = puVar28;
    } while (bVar30 < 0xf6 && !CARRY1(bVar30 + 10,bVar54));
    *pbVar40 = *pbVar40 + cVar8;
    in_stack_ffffffec = CONCAT22((short)((uint)in_stack_ffffffec >> 0x10),uVar49);
    pcVar16 = (char *)((uint)pbVar40 | *puVar47);
    puVar44 = (uint *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                               CONCAT11((char)((uint)pcVar13 >> 8) + unaff_EBP[-100],(char)pcVar13))
    ;
    *pcVar16 = *pcVar16 + (char)pcVar16;
    bVar7 = (char)pcVar16 + 7;
    uVar58 = CONCAT44(pbVar23,CONCAT31((int3)((uint)pcVar16 >> 8),bVar7));
code_r0x004028c8:
    puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
  } while ((POPCOUNT(bVar7) & 1U) != 0);
  *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
  puVar19 = (uint *)CONCAT31((int3)((ulonglong)uVar58 >> 8),(char)uVar58 + '-');
  puVar28 = (uint *)((uint)puVar28 | *(uint *)((int)puVar41 + 0x3b));
  bVar54 = CARRY4(*puVar19,(uint)puVar19);
  uVar17 = *puVar19;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  if (SCARRY4(uVar17,(int)puVar19)) {
    bVar54 = CARRY4(*puVar19,(uint)puVar19);
    bVar55 = SCARRY4(*puVar19,(int)puVar19);
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    bVar7 = POPCOUNT(*puVar19 & 0xff);
    if (bVar55) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + bVar54);
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
    bVar54 = (POPCOUNT((byte)*puVar41) & 1U) == 0;
    if (bVar54) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar54) {
      iVar14 = CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 - (byte)*puVar28);
      goto get_Value;
    }
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + 'r');
    pbVar11 = unaff_EBP;
code_r0x004028e2:
    uVar34 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
    uVar17 = *puVar19;
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    if (SCARRY4(uVar17,(int)puVar19)) {
      if (*puVar19 == 0 || SCARRY4(uVar17,(int)puVar19) != (int)*puVar19 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar8 = (char)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + cVar8;
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((byte)((uint)puVar38 >> 8) |
                                        *(byte *)((int)puVar38 + 0x16d7207),(char)puVar38));
    pbVar40 = (byte *)((int)puVar19 + 0x7d);
    bVar7 = *pbVar40;
    bVar9 = (byte)((uint)puVar41 >> 8);
    bVar30 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar9;
    uVar12 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar30,bVar9) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)*pbVar40 < '\0') * 0x80 | (uint)(*pbVar40 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar40) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar7,bVar9);
    *(byte *)puVar19 = (byte)*puVar19 + cVar8;
    pbVar40 = (byte *)(CONCAT31((int3)((uint)puVar19 >> 8),cVar8 + '+') ^ *puVar47);
    if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar7 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    puVar19 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7 + 0x72);
    if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
      if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar19 + 0x6f) = *(byte *)((int)puVar19 + 0x6f) + bVar9;
    }
code_r0x00402905:
    uVar58 = CONCAT44(puVar41,puVar19);
    puVar44 = (uint *)((int)puVar44 + -1);
    cVar8 = (char)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + cVar8;
    bVar7 = (byte)((uint)puVar38 >> 8) | (byte)*puVar38;
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar7,(char)puVar38));
    uVar49 = (ushort)uVar12;
    if ((char)bVar7 < '\x01') {
      *(byte *)puVar19 = (byte)*puVar19 + cVar8;
      puVar47 = (uint *)((int)puVar47 - *(int *)(unaff_EBP + -100));
      goto code_r0x00402929;
    }
    *(byte *)puVar19 = (byte)*puVar19 + cVar8;
    uVar12 = 0x40291c;
    uVar58 = func_0x7346291c();
    *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
    puVar38 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar58 >> 0x20));
    puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar49);
    uStackY_2c = puVar44;
    while( true ) {
      pcVar13 = (char *)((int)uVar58 * 2);
      *pcVar13 = *pcVar13 - (char)puVar38;
      uVar17 = *puVar44;
      cVar8 = (char)((uint)puVar38 >> 8);
      *(byte *)puVar44 = (byte)*puVar44 + cVar8;
      if (SCARRY1((byte)uVar17,cVar8) == (char)(byte)*puVar44 < '\0') {
        pbVar40 = (byte *)((int)puVar47 + (int)uVar58);
        *pbVar40 = *pbVar40 + (char)uVar58;
        bVar7 = *pbVar40;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
      cVar8 = (char)uVar58;
      *(char *)uVar58 = *(char *)uVar58 + cVar8;
      uVar25 = (undefined3)((ulonglong)uVar58 >> 8);
      bVar7 = cVar8 + 7;
      puVar19 = (uint *)CONCAT31(uVar25,bVar7);
      bVar30 = (byte)((ulonglong)uVar58 >> 0x28);
      if ((POPCOUNT(bVar7) & 1U) != 0) break;
      *(byte *)puVar19 = (byte)*puVar19 + bVar7;
      pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '3');
      uVar34 = (undefined2)((uint)puVar44 >> 0x10);
      uVar27 = SUB41(puVar44,0);
      bVar7 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar28 + 0x16) + (0xd3 < bVar7);
      puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(bVar7,uVar27));
      *pcVar13 = *pcVar13 + cVar8 + '3';
      cVar43 = cVar8 + ':';
      puVar19 = (uint *)CONCAT31(uVar25,cVar43);
      if ((POPCOUNT(cVar43) & 1U) != 0) {
        bVar7 = bVar7 | *(byte *)((int)puVar41 + 7);
        puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(bVar7,uVar27));
        bVar54 = (POPCOUNT(bVar7) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar19 = (byte)*puVar19 + cVar43;
      puVar19 = (uint *)(CONCAT31(uVar25,cVar8 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar40 = (byte *)((int)puVar19 + 0x72);
      bVar55 = SCARRY1(*pbVar40,bVar30);
      *pbVar40 = *pbVar40 + bVar30;
      bVar7 = POPCOUNT(*pbVar40);
code_r0x0040294c:
      if ((bVar7 & 1) == 0) {
        *(byte *)((int)puVar19 + 0x72) = *(byte *)((int)puVar19 + 0x72) + (char)((uint)puVar41 >> 8)
        ;
      }
      else if (bVar55) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar8 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,uVar52);
code_r0x00402957:
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      cVar8 = (char)puVar19 + '(';
      puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar8);
      *(byte *)puVar19 = (byte)*puVar19 + cVar8;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar19,(char)puVar38)
                                );
      *(byte *)puVar19 = (byte)*puVar19 + cVar8;
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((byte)((uint)puVar41 >> 8) | (byte)puVar44[0x18],
                                          (char)puVar41));
      puVar28 = puStackY_34;
      puVar47 = puStackY_30;
code_r0x00402966:
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      bVar7 = (byte)((uint)puVar44 >> 8) | *(byte *)((int)puVar41 + 7);
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar7,(char)puVar44));
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
      puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + '~');
code_r0x00402971:
      uVar12 = (uint)uVar52;
code_r0x00402972:
      uVar34 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
code_r0x00402974:
      bVar7 = 0xe9 < (byte)puVar19;
      in_stack_ffffffec = CONCAT22(uVar34,in_CS);
      in_CS = 0x2d0a;
      uVar58 = func_0x00006128(in_stack_ffffffec);
      puVar38 = (uint *)uVar58;
      piVar22 = (int *)((int)((ulonglong)uVar58 >> 0x20) + -0x3d);
      *piVar22 = (int)((int)puVar28 + (uint)bVar7 + *piVar22);
      bVar54 = SCARRY4(*puVar38,(int)puVar38);
      *puVar38 = *puVar38 + (int)puVar38;
      uVar17 = *puVar38;
      puVar38 = extraout_ECX_02;
code_r0x00402982:
      bVar7 = POPCOUNT(uVar17 & 0xff);
      if (bVar54) {
        *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11((byte)((uint)puVar38 >> 8) |
                                            *(byte *)((ulonglong)uVar58 >> 0x20),(char)puVar38));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar13 = (char *)((ulonglong)uVar58 >> 0x20);
      if ((bVar7 & 1) == 0) {
        *(char *)uVar58 = *(char *)uVar58 + (char)uVar58;
        *pcVar13 = *pcVar13 + (char)puVar38;
        uVar58 = CONCAT44(CONCAT22((short)((ulonglong)uVar58 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar58 >> 0x28) - pcVar13[0x1f],
                                            (char)((ulonglong)uVar58 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar58 >> 8),(char)uVar58 + '('));
code_r0x00402991:
        puVar41 = (uint *)((ulonglong)uVar58 >> 0x20);
        pbVar40 = (byte *)uVar58;
        bVar7 = (byte)uVar58;
        bVar54 = CARRY1(bVar7,*pbVar40);
        puVar19 = (uint *)CONCAT31((int3)((ulonglong)uVar58 >> 8),bVar7 + *pbVar40);
        cVar8 = bVar7 + *pbVar40;
        if (SCARRY1(bVar7,*pbVar40)) goto code_r0x004029c4;
code_r0x00402995:
        puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                   CONCAT11(((char)((uint)puVar41 >> 8) -
                                            *(byte *)((int)puVar41 + 0x6b)) - bVar54,(char)puVar41))
        ;
        bVar7 = (byte)puVar19;
        bVar54 = CARRY1(bVar7,(byte)*puVar19);
        bVar55 = SCARRY1(bVar7,(byte)*puVar19);
        puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar7 + (byte)*puVar19);
        do {
          if (!bVar55) {
            puVar28 = (uint *)((int)puVar28 + (uint)bVar54 + *puVar19);
            pbVar40 = (byte *)((int)puVar19 + *puVar19);
            bVar30 = (byte)pbVar40;
            *pbVar40 = *pbVar40 + bVar30;
            *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
            bVar7 = *pbVar40;
            *pbVar40 = *pbVar40 + bVar30;
            *puVar47 = (uint)((int)puVar44 + (uint)CARRY1(bVar7,bVar30) + *puVar47);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar38;
            uVar25 = (undefined3)((uint)pbVar40 >> 8);
            bVar30 = bVar30 | (byte)*puVar28;
            puVar19 = (uint *)CONCAT31(uVar25,bVar30);
            uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar52);
            uVar17 = *puVar19;
            uVar2 = *puVar19;
            *puVar19 = (uint)(*puVar19 + (int)puVar19);
            if (SCARRY4(uVar2,(int)puVar19)) {
              *(byte *)puVar28 = (byte)*puVar28 - (char)puVar44;
              *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
              *(byte *)puVar47 = (byte)*puVar47 - (char)puVar44;
            }
            else {
              puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar49);
              uVar52 = uVar49;
              if (CARRY4(uVar17,(uint)puVar19)) goto code_r0x00402971;
              bVar54 = CARRY1(bVar30,(byte)*puVar19);
              bVar55 = SCARRY1(bVar30,(byte)*puVar19);
              puVar19 = (uint *)CONCAT31(uVar25,bVar30 + (byte)*puVar19);
code_r0x004029be:
              if (!bVar55) {
                puStackY_30 = (uint *)CONCAT22(puStackY_30._2_2_,uVar49);
                *(byte *)((int)puVar41 + -0x37) =
                     (*(byte *)((int)puVar41 + -0x37) - (char)((uint)puVar41 >> 8)) - bVar54;
                cVar8 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar8;
                bVar7 = (byte)puVar19;
                bVar54 = CARRY1(bVar7,(byte)*puVar19);
                bVar55 = SCARRY1(bVar7,(byte)*puVar19);
                puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar7 + (byte)*puVar19);
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
            uVar49 = (ushort)pbVar11;
            goto code_r0x00402966;
          }
          uVar12 = (uint)uVar49;
          *(uint *)((int)puVar41 + -0x23) =
               (*(int *)((int)puVar41 + -0x23) - (int)puVar28) - (uint)bVar54;
          uVar17 = *puVar19;
          bVar30 = (byte)puVar19;
          uVar2 = *puVar19;
          uVar25 = (undefined3)((uint)puVar19 >> 8);
          bVar7 = bVar30 + (byte)*puVar19;
          puVar19 = (uint *)CONCAT31(uVar25,bVar7);
          if (SCARRY1(bVar30,(byte)uVar2)) goto code_r0x00402972;
          in_stack_ffffffec = CONCAT22((short)((uint)in_stack_ffffffec >> 0x10),uVar49);
          cVar8 = (char)puVar41;
          bVar9 = ((char)((uint)puVar41 >> 8) - *(byte *)((int)puVar41 + -0xf)) -
                  CARRY1(bVar30,(byte)uVar17);
          puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar9,cVar8));
          puVar46 = (uint *)CONCAT31(uVar25,bVar7 + (byte)*puVar19);
          bVar30 = (byte)puVar38;
          if (SCARRY1(bVar7,(byte)*puVar19)) {
            *(byte *)puVar41 = (byte)*puVar41 + bVar30;
            uVar58 = CONCAT44(puVar41,(int)puVar46 + -0x1c37211);
            pcVar13 = (char *)((int)puVar46 + -0x1c3720a);
            *pcVar13 = *pcVar13 + bVar9;
            bVar7 = POPCOUNT(*pcVar13);
            goto code_r0x00402984;
          }
          puVar28 = (uint *)((int)puVar28 +
                            (-(uint)CARRY1(bVar7,(byte)*puVar19) - *(int *)((int)puVar41 + 5)));
          bVar54 = SCARRY4((int)puVar46,*puVar46);
          uVar17 = (int)puVar46 + *puVar46;
          uVar58 = CONCAT44(puVar41,uVar17);
          if (bVar54) goto code_r0x00402982;
          bVar7 = (byte)uVar17 + 0x8e;
          uVar18 = CONCAT31((int3)(uVar17 >> 8),bVar7 - CARRY4((uint)puVar46,*puVar46));
          *puVar44 = (*puVar44 - uVar18) -
                     (uint)((byte)uVar17 < 0x72 || bVar7 < CARRY4((uint)puVar46,*puVar46));
          pbVar40 = (byte *)(uVar18 - 0x5e);
          bVar7 = *pbVar40;
          *pbVar40 = *pbVar40 + bVar9;
          uVar17 = (uint)CARRY1(bVar7,bVar9);
          uVar2 = uVar18 - 0x32d72;
          puVar19 = (uint *)(uVar2 - uVar17);
          if (SBORROW4(uVar18,0x32d72) != SBORROW4(uVar2,uVar17)) goto code_r0x00402992;
          uVar51 = uVar53;
          if (uVar18 < 0x32d72 || uVar2 < uVar17) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar19 >> 8);
            *(byte *)puVar41 = (byte)*puVar41 + bVar30;
            puVar46 = puVar28 + 1;
            out(*puVar28,CONCAT11(bVar9,cVar8));
            *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
            goto code_r0x00402a3e;
          }
          bVar54 = CARRY4((uint)puVar19,*puVar19);
          bVar55 = SCARRY4((int)puVar19,*puVar19);
          puVar19 = (uint *)((int)puVar19 + *puVar19);
          if (!bVar55) {
            uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar49);
            *(byte *)puVar28 = (byte)*puVar28 + bVar54;
            bVar7 = (byte)puVar19;
            *(byte *)((int)puVar41 + (int)unaff_EBP) =
                 *(byte *)((int)puVar41 + (int)unaff_EBP) + bVar7;
            *(byte *)puVar44 = (byte)*puVar44 + cVar8;
            *(byte *)puVar44 = (byte)*puVar44 ^ bVar7;
            bVar32 = (byte)((uint)puVar38 >> 8);
            *(byte *)puVar28 = (byte)*puVar28 + bVar32;
            *(byte *)puVar19 = (byte)*puVar19 + bVar7;
            pbVar40 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),bVar7 | (byte)*puVar19);
            *(byte *)puVar38 = (byte)*puVar38 + cVar8;
            bVar36 = *pbVar40;
            uVar34 = (undefined2)((uint)puVar38 >> 0x10);
            puVar38 = (uint *)CONCAT22(uVar34,CONCAT11(bVar32 + bVar36,bVar30));
            pbVar40 = pbVar40 + (uint)CARRY1(bVar32,*pbVar40) + *(int *)pbVar40;
            *(byte *)puVar41 = (byte)*puVar41 + bVar30;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar11 = pbVar40 + 0x73;
            bVar7 = *pbVar11;
            *pbVar11 = *pbVar11 + bVar9;
            uVar25 = (undefined3)((uint)pbVar40 >> 8);
            bVar7 = (char)pbVar40 + CARRY1(bVar7,bVar9);
            pcVar13 = (char *)CONCAT31(uVar25,bVar7);
            *(byte *)puVar41 = (byte)*puVar41 + bVar30;
            if ((POPCOUNT((byte)*puVar41) & 1U) == 0) {
              uVar52 = uVar49;
            }
            puVar48 = (uint *)((int)puVar47 + *(int *)(unaff_EBP + 0x17));
            *pcVar13 = *pcVar13 + bVar7;
            cVar8 = bVar7 + 2;
            puVar19 = (uint *)CONCAT31(uVar25,cVar8);
            if (bVar7 < 0xfe) {
              *puVar19 = (uint)(*puVar19 + (int)puVar19);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar19 = (byte)*puVar19 + cVar8;
            uVar12 = *puVar41;
            puVar46 = (uint *)((int)puVar28 + puVar44[0x19]);
            *(byte *)puVar19 = (byte)*puVar19 + cVar8;
            puVar38 = (uint *)CONCAT22(uVar34,CONCAT11(bVar32 + bVar36 | (byte)*puVar19,
                                                       bVar30 | (byte)uVar12));
            puVar47 = puVar48;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
    pbVar40 = (byte *)((int)puVar19 + 0x73);
    bVar54 = CARRY1(*pbVar40,bVar30);
    *pbVar40 = *pbVar40 + bVar30;
  } while( true );
code_r0x00402992:
  pbVar40 = (byte *)((int)puVar19 + 0x2a);
  bVar54 = CARRY1(*pbVar40,bVar9);
  *pbVar40 = *pbVar40 + bVar9;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar19) = *(byte *)(in_GS_OFFSET + (int)puVar19) + (char)puVar19;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | *(byte *)((int)puVar47 + 0x66),
                                      (char)puVar38));
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
code_r0x00402a3e:
  uVar25 = (undefined3)((uint)puVar19 >> 8);
  bVar7 = (byte)puVar19 | (byte)*puVar46;
  pcVar13 = (char *)CONCAT31(uVar25,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar13 = *pcVar13 + bVar7;
    cVar8 = bVar7 + 2;
    piVar22 = (int *)CONCAT31(uVar25,cVar8);
    if ((POPCOUNT(cVar8) & 1U) == 0) {
      *(char *)piVar22 = (char)*piVar22 + cVar8;
      bVar7 = bVar7 + 0x71;
      pcVar16 = (char *)CONCAT31(uVar25,bVar7);
      pcVar13 = (char *)segment(uVar51,(short)puVar44 + (short)puVar46);
      *pcVar13 = *pcVar13 + bVar7;
      uVar12 = puVar47[0x1a];
      *pcVar16 = *pcVar16 + bVar7;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11((byte)((uint)puVar38 >> 8) | (byte)uVar12 |
                                          *(byte *)((int)puVar47 + 0x69),(char)puVar38));
      *pcVar16 = *pcVar16 + bVar7;
      bVar7 = bVar7 | (byte)*puVar41;
      pcVar13 = (char *)CONCAT31(uVar25,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar28 = puVar46 + (uint)bVar56 * -2 + 1;
    out(*puVar46,(short)puVar41);
  }
  else {
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar44[6],(char)puVar44)
                              );
code_r0x00402a5d:
    *pcVar13 = *pcVar13 + (char)pcVar13;
    piVar22 = (int *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + 'o');
    puVar28 = puVar46;
  }
code_r0x00402a61:
  pcVar13 = (char *)segment(uVar51,(short)puVar44 + (short)puVar28);
  *pcVar13 = *pcVar13 + (char)piVar22;
  cVar8 = (char)puVar38;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)puVar47[0x1a],cVar8));
  *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
  uVar34 = CONCAT11((byte)((uint)puVar41 >> 8) | *(byte *)((int)puVar41 + 0x65),(char)puVar41);
  puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar34);
  piVar20 = (int *)((int)piVar22 + *piVar22);
  puVar46 = puVar28;
  puVar48 = puVar47;
  uVar50 = uVar49;
  if (SCARRY4((int)piVar22,*piVar22)) goto code_r0x00402ae3;
  *(byte *)puVar41 = (byte)*puVar41 + cVar8;
  puVar46 = puVar28 + (uint)bVar56 * -2 + 1;
  out(*puVar28,uVar34);
code_r0x00402a75:
  bVar7 = (byte)((uint)puVar38 >> 8) | (byte)*puVar41;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar7,(char)puVar38));
  piVar22 = (int *)(uint)(byte)*puVar44;
  *(byte *)puVar46 = (byte)*puVar46 - bVar7;
  puVar48 = puVar47;
code_r0x00402a7f:
  *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
  out(*puVar46,(short)puVar41);
  bVar7 = in((short)puVar41);
  *(byte *)puVar48 = bVar7;
  *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar41,(char)puVar38));
  iVar14 = *piVar22;
  cVar8 = in(1);
  puVar19 = (uint *)CONCAT31((int3)((uint)((int)piVar22 + *piVar22) >> 8),cVar8);
  *(char *)puVar19 = (char)*puVar19 + cVar8;
  puVar19 = (uint *)((uint)puVar19 | *puVar19);
  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar41;
  puVar46 = (uint *)((int)puVar46 + (((uint)bVar56 * -8 + 4) - iVar14));
  puVar48 = (uint *)((int)puVar48 + (uint)bVar56 * -2 + 1);
  uVar52 = uVar49;
  while( true ) {
    bVar7 = (byte)puVar19 | (byte)*puVar41;
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),bVar7);
    puVar47 = puVar48;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar19 = (byte)*puVar19 + bVar7;
code_r0x00402a9b:
    uVar25 = (undefined3)((uint)puVar19 >> 8);
    cVar8 = (char)puVar19 + '\r';
    piVar20 = (int *)CONCAT31(uVar25,cVar8);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar20;
    *(char *)piVar20 = (char)*piVar20 + cVar8;
    *(byte *)(puVar46 + -0xc800000) = (byte)puVar46[-0xc800000] + (char)puVar41;
    *(char *)piVar20 = (char)*piVar20 + cVar8;
    *(byte *)puVar41 = (byte)*puVar41 + cVar8;
    cVar43 = (char)puVar38;
    if ((POPCOUNT((byte)*puVar41) & 1U) != 0) {
      *(byte *)puVar41 = (byte)*puVar41 + cVar43;
      puVar28 = puVar46 + (uint)bVar56 * -2 + 1;
      out(*puVar46,(short)puVar41);
      piVar22 = (int *)((longlong)*piVar20 * 0x7b020a00);
      *(char *)piVar22 =
           (char)*piVar22 - ((longlong)(int)piVar22 != (longlong)*piVar20 * 0x7b020a00);
      pbVar11 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar11 = *pbVar11;
      goto code_r0x00402a61;
    }
    *(char *)piVar20 = (char)*piVar20 + cVar8;
    puVar19 = (uint *)CONCAT31(uVar25,(char)puVar19 + ':');
    puVar28 = (uint *)((uint)puVar46 | *(uint *)((int)puVar41 + -0x79));
    iVar14 = (int)puVar19 + *puVar19;
    if (SCARRY4((int)puVar19,*puVar19)) {
      puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                 CONCAT11((char)((uint)puVar44 >> 8) + (byte)puVar28[(int)puVar44],
                                          (char)puVar44));
      *(char *)((int)puVar41 * 2) = *(char *)((int)puVar41 * 2) + (char)iVar14;
      puVar48 = puVar47;
      goto code_r0x00402b33;
    }
    uVar25 = (undefined3)((uint)iVar14 >> 8);
    cVar8 = (char)iVar14 + CARRY4((uint)puVar19,*puVar19);
    piVar22 = (int *)CONCAT31(uVar25,cVar8);
    *(byte *)puVar41 = (byte)*puVar41 + cVar43;
    bVar54 = (POPCOUNT((byte)*puVar41) & 1U) != 0;
    if ((bVar54) && (bVar54)) goto code_r0x00402a61;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    cVar45 = cVar8 + '(';
    pcVar13 = (char *)CONCAT31(uVar25,cVar45);
    puVar48 = puVar47 + (uint)bVar56 * -2 + 1;
    uVar12 = in((short)puVar41);
    *puVar47 = uVar12;
    *pcVar13 = *pcVar13 + cVar45;
    puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((byte)((uint)puVar38 >> 8) | bRama07b0222,cVar43));
    *pcVar13 = *pcVar13 + cVar45;
    pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '>');
code_r0x00402ad2:
    out(*puVar28,(short)puVar41);
    puVar46 = (uint *)((int)(puVar28 + (uint)bVar56 * -2 + 1) + (uint)bVar56 * -2 + 1);
    out((byte)puVar28[(uint)bVar56 * -2 + 1],(short)puVar41);
    bVar7 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar7;
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(byte)puVar44 | (byte)*puVar48);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar25 = (undefined3)((uint)pcVar13 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    puVar41 = (uint *)((uint)puVar41 ^ *puVar41);
    cVar8 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*puVar41;
    piVar22 = (int *)CONCAT31(uVar25,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    piVar20 = (int *)CONCAT31(uVar25,cVar8 + '\x17');
    uVar50 = uVar49;
code_r0x00402ae3:
    out(*puVar46,(short)puVar41);
    puVar28 = puVar46 + (uint)bVar56 * -2 + 1 + (uint)bVar56 * -2 + 1;
    out(puVar46[(uint)bVar56 * -2 + 1],(short)puVar41);
    *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
code_r0x00402ae7:
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((byte)((uint)puVar44 >> 8) | unaff_EBP[-0x60],(char)puVar44)
                              );
    cVar8 = (char)piVar20;
    *(char *)piVar20 = (char)*piVar20 + cVar8;
    uVar25 = (undefined3)((uint)piVar20 >> 8);
    bVar7 = cVar8 + 2;
    puVar19 = (uint *)CONCAT31(uVar25,bVar7);
    uVar49 = uVar50;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar19 = (byte)*puVar19 + bVar7;
      cVar8 = cVar8 + '}';
      puVar19 = (uint *)CONCAT31(uVar25,cVar8);
      *(byte *)puVar19 = ((byte)*puVar19 - cVar8) - (0x84 < bVar7);
      pbVar11 = (byte *)((int)puVar41 + (int)puVar19);
      *pbVar11 = *pbVar11 + cVar8;
      bVar7 = POPCOUNT(*pbVar11);
      puVar46 = puVar28;
code_r0x00402af9:
      uVar49 = uVar50;
      puVar47 = puVar48;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
        bVar7 = (byte)puVar38;
        *(byte *)puVar41 = (byte)*puVar41 + bVar7;
        uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar52);
        puVar28 = puVar46 + (uint)bVar56 * -2 + 1;
        out(*puVar46,(short)puVar41);
        uVar12 = *puVar41;
        *(byte *)puVar41 = (byte)*puVar41 + bVar7;
        iVar14 = CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + 'o') +
                 *(int *)((int)puVar41 * 2) + (uint)CARRY1((byte)uVar12,bVar7);
        pcVar13 = (char *)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '(');
        while( true ) {
          uVar12 = *puVar41;
          bVar30 = (byte)puVar38;
          *(byte *)puVar41 = (byte)*puVar41 + bVar30;
          pcVar13 = pcVar13 + (uint)CARRY1((byte)uVar12,bVar30) + iRam73280512;
          bVar7 = (byte)pcVar13;
          *pcVar13 = *pcVar13 + bVar7;
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | bRam7d160243,bVar30));
          bVar56 = ((uint)uStackY_2c & 0x400) != 0;
          in_AF = ((uint)uStackY_2c & 0x10) != 0;
          *pcVar13 = *pcVar13 + bVar7;
          uVar25 = (undefined3)((uint)pcVar13 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar25,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar8 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar8 < '\0') break;
          *(char *)CONCAT31(uVar25,cVar8) = *(char *)CONCAT31(uVar25,cVar8) + cVar8;
          iVar14 = CONCAT31(uVar25,bVar7 + 0x16);
code_r0x00402b33:
          piVar20 = (int *)(iVar14 + 0xe2802);
          *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar38 >> 8);
          uVar50 = uVar49;
          uVar49 = uVar52;
          while( true ) {
            bVar30 = (byte)puVar44 | (byte)((uint)puVar38 >> 8);
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar30);
            *piVar20 = (int)(*piVar20 + (int)piVar20);
            cVar8 = (char)piVar20;
            *(byte *)puVar41 = (byte)*puVar41 + cVar8;
            if ((POPCOUNT((byte)*puVar41) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar20 = (char)*piVar20 + cVar8;
            uVar12 = CONCAT31((int3)((uint)piVar20 >> 8),cVar8 + '\x13');
            puVar19 = (uint *)(uVar12 + 0x19061224 + (uint)(0x1f9edfd < uVar12));
            uVar2 = (uint)(0xe4ffffdd < uVar12 + 0xfe061202 ||
                          CARRY4(uVar12 + 0x19061224,(uint)(0x1f9edfd < uVar12)));
            uVar12 = *puVar28;
            uVar17 = *puVar28;
            *puVar28 = (uint)((byte *)(uVar17 + (int)puVar19) + uVar2);
            bVar7 = POPCOUNT(*puVar28 & 0xff);
            puVar46 = puVar28;
            if ((SCARRY4(uVar12,(int)puVar19) != SCARRY4((int)(uVar17 + (int)puVar19),uVar2)) ==
                (int)*puVar28 < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar19;
            *(byte *)puVar19 = (byte)*puVar19 + bVar7;
            iVar14 = CONCAT31((int3)((uint)puVar19 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar41 | (byte)*puVar41;
            uVar12 = *puVar44;
            *(byte *)puVar44 = (byte)*puVar44 + bVar30;
            pcVar13 = (char *)(CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x12') + 0x228b26
                               + *puVar48 + (uint)CARRY1((byte)uVar12,bVar30));
            cVar8 = bVar7 + (byte)*puVar38;
            puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),cVar8);
            if (SCARRY1(bVar7,(byte)*puVar38) == cVar8 < '\0') break;
            *pcVar13 = *pcVar13 + (char)pcVar13;
            cVar8 = (char)pcVar13 + '\x02';
            pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar8);
            bVar7 = POPCOUNT(cVar8);
            uVar50 = uVar49;
code_r0x00402b7a:
            puVar47 = puVar28;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar8 = (char)pcVar13;
              *pcVar13 = *pcVar13 + cVar8;
              uVar25 = (undefined3)((uint)pcVar13 >> 8);
              pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '\x13');
              *(byte *)puVar38 = (byte)*puVar38 | (byte)puVar41;
              *(byte *)puVar48 = (byte)*puVar48 | (byte)puVar41;
              *puVar41 = (uint)(pcVar13 + *puVar41);
              uVar34 = (undefined2)((uint)puVar44 >> 0x10);
              uVar27 = SUB41(puVar44,0);
              cVar43 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar44 + -0x5f);
              puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar43,uVar27));
              *pcVar13 = *pcVar13 + cVar8 + '\x13';
              piVar20 = (int *)CONCAT31(uVar25,cVar8 + -0x7a);
              uVar12 = *puVar41;
              *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
              uVar5 = in_CS;
              if (SCARRY1((byte)uVar12,(char)puVar38) == (char)(byte)*puVar41 < '\0') break;
              *(char *)piVar20 = (char)*piVar20 + cVar8 + -0x7a;
              cVar45 = cVar8 + -0x78;
              piVar20 = (int *)CONCAT31(uVar25,cVar45);
              uVar5 = uVar50;
              if ((POPCOUNT(cVar45) & 1U) != 0) break;
              *(char *)piVar20 = (char)*piVar20 + cVar45;
              pcVar13 = (char *)CONCAT31(uVar25,cVar8 + -0x65);
              *puVar38 = *puVar38 | (uint)puVar41;
              *puVar48 = *puVar48 | (uint)puVar41;
              pbVar11 = (byte *)((int)puVar38 + -1);
              cVar43 = cVar43 + *(byte *)((int)puVar44 + -0x5e);
              puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar43,uVar27));
              *pcVar13 = *pcVar13 + cVar8 + -0x65;
              bVar7 = cVar8 + 10;
              puVar19 = (uint *)CONCAT31(uVar25,bVar7);
              bVar30 = (byte)pbVar11;
              *(byte *)puVar41 = (byte)*puVar41 + bVar30;
              puVar28 = puVar47 + (uint)bVar56 * -2 + 1;
              out(*puVar47,(short)puVar41);
              uVar12 = *puVar41;
              *(byte *)puVar41 = (byte)*puVar41 + bVar30;
              uVar18 = (uint)CARRY1((byte)uVar12,bVar30);
              uVar17 = *puVar41;
              uVar12 = *puVar41;
              pbVar40 = pbVar11 + uVar12 + uVar18;
              uVar6 = *puVar41;
              cRam130a0000 = cRam130a0000 - cVar43;
              uVar2 = *puVar41;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar19);
              *(byte *)puVar19 = (char)*puVar19 + bVar7;
              puVar38 = (uint *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar40 >> 8) | bRam7d170243,
                                                  (char)pbVar40 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar11,uVar17) ||
                                                  CARRY4((uint)(pbVar11 + uVar12),uVar18))));
              bVar56 = (uVar52 & 0x400) != 0;
              in_AF = (uVar52 & 0x10) != 0;
              *(byte *)puVar19 = (char)*puVar19 + bVar7;
              bVar54 = 0xfd < bVar7;
              pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '\f');
              puVar41 = (uint *)((uint)puVar41 | uVar2);
code_r0x00402bd1:
              uVar12 = *puVar44;
              uVar17 = *puVar44;
              *puVar44 = (uint)((byte *)(uVar17 + (int)puVar38) + bVar54);
              bVar7 = POPCOUNT(*puVar44 & 0xff);
              uVar50 = uVar52;
              if ((SCARRY4(uVar12,(int)puVar38) !=
                  SCARRY4((int)(uVar17 + (int)puVar38),(uint)bVar54)) == (int)*puVar44 < 0)
              goto code_r0x00402b7a;
              cVar8 = (char)pcVar13;
              *pcVar13 = *pcVar13 + cVar8;
              pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar8 + '\x02');
              if (SCARRY1(cVar8,'\x02') == (char)(cVar8 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar13 = *pcVar13 + (char)pcVar13;
                pcVar13 = (char *)(CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x12') |
                                  *puVar41);
                *(byte *)puVar48 = (byte)*puVar48 - (char)puVar38;
                *pcVar13 = *pcVar13 + (char)pcVar13;
                puVar41 = (uint *)((int)puVar41 - *puVar28);
                bVar7 = (byte)puVar44 | (byte)((uint)puVar38 >> 8);
                cVar8 = *pcVar13;
                uVar25 = (undefined3)((uint)pcVar13 >> 8);
                pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                *pcVar13 = *pcVar13 + cVar8;
                pcVar16 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                           CONCAT11((char)((uint)puVar44 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar13 = *pcVar13 + cVar8;
                bVar54 = false;
                pcVar13 = (char *)(CONCAT31(uVar25,cVar8 + '\x13') | *puVar41);
                do {
                  bVar30 = (byte)puVar38;
                  bVar7 = bVar30 + (byte)puVar28[(int)puVar48 * 2];
                  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar7 + bVar54);
                  uVar12 = (uint)(CARRY1(bVar30,(byte)puVar28[(int)puVar48 * 2]) ||
                                 CARRY1(bVar7,bVar54));
                  pcVar21 = pcVar13 + 0x1b000019 + uVar12;
                  piVar22 = (int *)((int)puVar48 * 2 + 0x40000a5);
                  *piVar22 = (int)((int)puVar38 +
                                  (uint)((char *)0xe4ffffe6 < pcVar13 ||
                                        CARRY4((uint)(pcVar13 + 0x1b000019),uVar12)) + *piVar22);
                  puVar41 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),(char)puVar41 + cRam00009d7d
                                            );
                  uVar25 = (undefined3)((uint)pcVar21 >> 8);
                  bVar7 = (char)pcVar21 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar12 = CONCAT31(uVar25,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar13 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                             CONCAT11((char)((uint)pcVar21 >> 8) - in_AF,
                                                      (char)uVar12));
                  pbVar11 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar25,bVar7));
                  while( true ) {
                    *pcVar13 = *pcVar13 + (char)pcVar13;
                    puVar47 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),
                                               (byte)puVar41 | (byte)*puVar41);
                    puVar48 = (uint *)((uint)puVar48 | (uint)puVar28);
                    uVar12 = (uint)pcVar16 | (uint)puVar28;
                    unaff_EBP = pbVar11 + 1;
                    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar49);
                    cVar43 = (char)(pcVar13 + 0x1b000019);
                    uVar25 = (undefined3)((uint)(pcVar13 + 0x1b000019) >> 8);
                    cVar8 = cVar43 + -0x13;
                    pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                    uVar34 = (undefined2)(uVar12 >> 0x10);
                    cVar45 = (char)(uVar12 >> 8) + *(char *)(uVar12 - 0x5e);
                    puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar45,(byte)uVar12));
                    *pcVar13 = *pcVar13 + cVar8;
                    pcVar13 = (char *)(CONCAT31(uVar25,cVar43 + '\x19') | *puVar47);
                    bVar7 = (byte)pcVar13;
                    if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) != 0) {
                      pbVar11 = (byte *)((int)puVar47 + (int)pcVar13);
                      bVar54 = CARRY1(*pbVar11,bVar7);
                      *pbVar11 = *pbVar11 + bVar7;
                      puVar41 = puVar47;
                      goto code_r0x00402bd1;
                    }
                    *pcVar13 = *pcVar13 + bVar7;
                    uVar25 = (undefined3)((uint)pcVar13 >> 8);
                    pcVar16 = (char *)CONCAT31(uVar25,bVar7 + 0x6f);
                    puVar41 = (uint *)((int)puVar47 + 1);
                    *pcVar16 = *pcVar16 + bVar7 + 0x6f;
                    bVar30 = (byte)uVar12 | (byte)((uint)pcVar13 >> 8);
                    pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x5c);
                    cVar45 = cVar45 + *(char *)(CONCAT31((int3)((uint)puVar44 >> 8),bVar30) + -0x5f)
                    ;
                    puVar44 = (uint *)CONCAT22(uVar34,CONCAT11(cVar45,bVar30));
                    *pcVar13 = *pcVar13 + bVar7 + 0x5c;
                    pcVar13 = (char *)(CONCAT31(uVar25,bVar7 + 0x88) | *puVar41);
                    if ((POPCOUNT((uint)pcVar13 & 0xff) & 1U) != 0) {
                      *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)puVar38 >> 8);
                      uStackY_2c = (uint *)((uint)uStackY_2c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar13 = *pcVar13 + (char)pcVar13;
                    uVar25 = (undefined3)((uint)pcVar13 >> 8);
                    cVar8 = (char)pcVar13 + 'o';
                    puVar41 = (uint *)((int)puVar47 + 2);
                    *(char *)CONCAT31(uVar25,cVar8) = *(char *)CONCAT31(uVar25,cVar8) + cVar8;
                    pcVar16 = (char *)CONCAT31((int3)((uint)puVar44 >> 8),
                                               bVar30 | (byte)((uint)pcVar13 >> 8));
                    pcVar13 = (char *)(CONCAT31(uVar25,cVar8) | 2);
                    pbVar11[-0x62] = pbVar11[-0x62] + 1;
                    bVar7 = (byte)pcVar13;
                    *pcVar13 = *pcVar13 + bVar7;
                    bVar54 = 0xfd < bVar7;
                    cVar8 = bVar7 + 2;
                    pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                    uVar51 = uVar49;
                    if (SCARRY1(bVar7,'\x02') != cVar8 < '\0') break;
                    *pcVar13 = *pcVar13 + cVar8;
                    bVar30 = bVar7 + 10;
                    pcVar13 = (char *)CONCAT31(uVar25,bVar30);
                    *pcVar13 = *pcVar13 - cVar45;
                    cVar43 = (char)puVar38;
                    *(byte *)puVar41 = *(byte *)puVar41 + cVar43;
                    pbVar11[-0x62] = pbVar11[-0x62] + 1;
                    *pcVar13 = *pcVar13 + bVar30;
                    cVar8 = bVar7 + 0xc;
                    pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                    if (SCARRY1(bVar30,'\x02') == cVar8 < '\0') {
                      *pcVar13 = *pcVar13 + cVar8;
                      *(byte *)puVar38 = (byte)*puVar38 - cVar45;
                      *(byte *)puVar41 = *(byte *)puVar41 + cVar43;
                      cVar8 = (bVar7 + 0x13) - (byte)puVar38[0x13];
                      pcVar13 = (char *)CONCAT31(uVar25,cVar8);
                      *pcVar13 = *pcVar13 + cVar8;
                      pcVar21 = (char *)CONCAT31(uVar25,cVar8 + *pcVar13);
                      *pcVar21 = *pcVar21 + cVar8 + *pcVar13;
                      pcVar21 = pcVar21 + *puVar38;
                      *pcVar21 = *pcVar21 + (char)pcVar21;
                      LOCK();
                      pcVar13 = *(char **)pcVar21;
                      *(char **)pcVar21 = pcVar21;
                      UNLOCK();
                      *pcVar13 = *pcVar13 + (char)pcVar13;
                      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)*puVar38);
                      *pbVar40 = *pbVar40 + (byte)*puVar38;
                      goto code_r0x00402c8d;
                    }
                    puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                               cVar43 + *pcVar16 + (0xfd < bVar30));
                    *(byte *)puVar48 = (byte)*puVar48 - cVar45;
                    pbVar11 = unaff_EBP;
                  }
                } while( true );
              }
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11((char)((uint)puVar44 >> 8) +
                                                  *(byte *)((int)puVar44 + -99),(char)puVar44));
              puVar47 = puVar28;
            }
            *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
            puVar41 = (uint *)((int)puVar41 - *puVar47);
            puVar28 = puVar47;
            uVar50 = uVar49;
            uVar49 = uVar5;
          }
          *(byte *)puVar41 = (byte)*puVar41 + (char)puVar38;
          pcVar13 = pcVar13 + -0x7d160243;
        }
        pcVar13 = (char *)CONCAT31(uVar25,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar38;
    uVar12 = *puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + (byte)puVar19;
    *puVar48 = (uint)((int)puVar41 + (uint)CARRY1((byte)uVar12,(byte)puVar19) + *puVar48);
    puVar46 = puVar28;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar10 = (char)puVar38;
      cVar31 = (char)((uint)puVar38 >> 8) + (char)((uint)pbVar40 >> 8);
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(cVar31,cVar10));
      cVar8 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar8;
      pcVar13 = (char *)((int)pbVar40 * 2 + 0x1a10000);
      cVar45 = (char)((uint)pcVar16 >> 8);
      *pcVar13 = *pcVar13 + cVar45;
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
      bVar30 = (byte)puVar41;
      *(byte *)puVar48 = (byte)*puVar48 + bVar30;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + bVar30;
      *pbVar40 = *pbVar40 + cVar8;
      *puVar28 = (uint)(*puVar28 + (int)puVar28);
      uVar34 = (undefined2)((uint)pcVar16 >> 0x10);
      cVar45 = cVar45 + (byte)puVar28[(int)pcVar16];
      pcVar13 = (char *)CONCAT22(uVar34,CONCAT11(cVar45,(char)pcVar16));
      pcVar13[(int)pbVar40] = pcVar13[(int)pbVar40] + cVar8;
      *(byte *)puVar41 = *(byte *)puVar41 - cVar45;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar10;
      uVar25 = (undefined3)((uint)pbVar40 >> 8);
      bVar7 = cVar8 - *pbVar40;
      *pcVar13 = *pcVar13 + bVar30;
      *(byte *)puVar41 = *(byte *)puVar41 ^ bVar7;
      *(byte *)puVar41 = *(byte *)puVar41 + bVar7;
      *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
      uVar12 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + bVar30;
      cVar43 = bVar7 + *(char *)CONCAT31(uVar25,bVar7) + CARRY1((byte)uVar12,bVar30);
      pcVar16 = (char *)CONCAT22(uVar34,CONCAT11(cVar45 + pbVar11[-0x60],(char)pcVar16));
      *(char *)CONCAT31(uVar25,cVar43) = *(char *)CONCAT31(uVar25,cVar43) + cVar43;
      cVar45 = cVar43 + '\x12';
      pbVar40 = (byte *)CONCAT31(uVar25,cVar45);
      cVar8 = *pcVar16;
      *pcVar16 = *pcVar16 + cVar45;
      if (SCARRY1(cVar8,cVar45) != *pcVar16 < '\0') break;
code_r0x00402c8d:
      cVar8 = (char)pbVar40;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
      *(byte *)puVar41 = *(byte *)puVar41 + cVar8;
      *pbVar40 = *pbVar40 + cVar8;
    }
    *pbVar40 = *pbVar40 + cVar45;
    pbVar40 = (byte *)CONCAT31(uVar25,cVar43 + '$');
    *pbVar40 = *pbVar40 + cVar31;
    bVar7 = *(byte *)puVar41;
    *(byte *)puVar41 = *(byte *)puVar41 + cVar10;
    uVar50 = uVar49;
    uVar51 = uVar53;
  } while (SCARRY1(bVar7,cVar10) == (char)*(byte *)puVar41 < '\0');
  do {
    cVar8 = (char)pbVar40;
    *pbVar40 = *pbVar40 + cVar8;
    uVar25 = (undefined3)((uint)pbVar40 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar41;
    bVar30 = cVar8 + 0x24;
    cVar45 = (char)((uint)pcVar16 >> 8);
    pcVar16[-0x62] = pcVar16[-0x62] + cVar45;
    *(char *)CONCAT31(uVar25,bVar30) = *(char *)CONCAT31(uVar25,bVar30) + bVar30;
    bVar7 = cVar8 + 0x2fU + (byte)*puVar38;
    cVar43 = bVar7 + (0xf4 < bVar30);
    cVar8 = cVar43 + *(char *)CONCAT31(uVar25,cVar43) +
            (CARRY1(cVar8 + 0x2fU,(byte)*puVar38) || CARRY1(bVar7,0xf4 < bVar30));
    pcVar13 = (char *)CONCAT31(uVar25,cVar8);
    *pcVar13 = *pcVar13 - (char)puVar41;
    *pcVar13 = *pcVar13 + cVar8;
    pcVar21 = (char *)((int)puVar41 - *puVar41);
    *(byte *)(puVar28 + (int)pcVar16) = (byte)puVar28[(int)pcVar16] + cVar45;
    pcVar13[(int)unaff_EBP] = pcVar13[(int)unaff_EBP] + cVar8;
    *pcVar21 = *pcVar21 + (char)puVar38;
    pcVar13 = (char *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((char)((uint)pbVar40 >> 8) - *pcVar21,cVar8));
    uVar12 = *puVar48;
    *pcVar13 = *pcVar13 - (char)((uint)pcVar21 >> 8);
    *pcVar13 = *pcVar13 + cVar8;
    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar50);
    pbVar11 = (byte *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                               CONCAT11(cVar45 - (byte)*puVar28,(char)pcVar16));
    unaff_EBP = unaff_EBP + *(int *)(pbVar11 + (int)puVar38);
    puVar47 = (uint *)CONCAT31((int3)((uint)pcVar21 >> 8),(char)pcVar21 + (byte)uVar12);
    while( true ) {
      puVar41 = puVar47;
      uVar34 = (undefined2)((uint)pbVar11 >> 0x10);
      bVar36 = (char)((uint)pbVar11 >> 8) + pbVar11[0x18];
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + 'o');
      cVar8 = (char)puVar38;
      *(byte *)puVar41 = (byte)*puVar41 + cVar8;
      uVar12 = *puVar28;
      bVar9 = (byte)((uint)puVar38 >> 8);
      bVar7 = *pbVar40;
      pbVar40 = pbVar40 + (uint)CARRY1(bVar9,*pbVar40) + *(int *)pbVar40;
      *(byte *)puVar41 = (byte)*puVar41 + cVar8;
      cVar43 = ((char)pbVar11 - (byte)uVar12) - (byte)*puVar28;
      bVar30 = *(byte *)((int)puVar48 + 0x1a);
      *pbVar40 = *pbVar40 + (char)pbVar40;
      puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                 CONCAT11(bVar9 + bVar7 + bVar30 | (byte)*puVar41,cVar8));
      pbVar40 = pbVar40 + *puVar41;
      if ((POPCOUNT((uint)pbVar40 & 0xff) & 1U) != 0) break;
      *pbVar40 = *pbVar40 + (char)pbVar40;
      bVar7 = (char)pbVar40 + 0x6f;
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
      pcVar16 = (char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar36,(char)pbVar11)) >> 8),
                                  cVar43) + -1);
      *pcVar13 = *pcVar13 + bVar7;
      *pcVar13 = *pcVar13 + bVar7;
      *pcVar16 = *pcVar16 + (byte)puVar41;
      *(byte *)((int)pcVar13 * 2) = *(byte *)((int)pcVar13 * 2) ^ bVar7;
      uVar4 = *(undefined6 *)pcVar13;
      uVar50 = (ushort)((uint6)uVar4 >> 0x20);
      pcVar13 = (char *)uVar4;
      *pcVar13 = *pcVar13 + (char)uVar4;
      *(byte *)puVar28 = (byte)*puVar28 + (char)uVar4;
      pcVar13 = (char *)((uint)pcVar13 | 0x73110008);
      bVar36 = (byte)((uint)pcVar16 >> 8);
      *(byte *)puVar48 = (byte)*puVar48 - bVar36;
      *(byte *)puVar41 = (byte)*puVar41 + cVar8;
      puVar47 = puVar28 + (uint)bVar56 * -2 + 1;
      out(*puVar28,(short)puVar41);
      *pcVar13 = *pcVar13;
      cVar8 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar8;
      bVar7 = unaff_EBP[-0x5a];
      uVar34 = (undefined2)((uint)pcVar16 >> 0x10);
      cVar43 = (char)pcVar16;
      *pcVar13 = *pcVar13 + cVar8;
      cVar8 = cVar8 + '\x02';
      uVar12 = CONCAT31((int3)((uint6)uVar4 >> 8),cVar8);
      puVar38 = (uint *)(uVar12 | 0x73110000);
      puVar28 = puVar47 + (uint)bVar56 * -2 + 1;
      out(*puVar47,(short)puVar41);
      *(byte *)puVar38 = (byte)*puVar38;
      bVar9 = (byte)puVar41 | (byte)*puVar48;
      puVar47 = (uint *)CONCAT31((int3)((uint)puVar41 >> 8),bVar9);
      *(byte *)puVar38 = (byte)*puVar38 + cVar8;
      pcVar13 = (char *)(uVar12 | 0x7b1f1609);
      bVar56 = (uVar51 & 0x400) != 0;
      *(uint *)((int)puVar48 + -0x7d) = *(uint *)((int)puVar48 + -0x7d) | (uint)unaff_EBP;
      bVar30 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar30;
      bVar36 = bVar36 | bVar7 | *(byte *)((int)puVar28 + 0x19);
      pbVar11 = (byte *)CONCAT22(uVar34,CONCAT11(bVar36,cVar43));
      *pcVar13 = *pcVar13 + bVar30;
      uVar25 = (undefined3)((uint)pcVar13 >> 8);
      puVar28[(int)puVar48 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar30) + puVar28[(int)puVar48 * 2]);
      bVar7 = bVar30 + 0x2d ^ *(byte *)CONCAT31(uVar25,bVar30 + 0x2d);
      pcVar13 = (char *)CONCAT31(uVar25,bVar7);
      uVar12 = *puVar28;
      *(byte *)puVar28 = (byte)*puVar28 + bVar7;
      uVar51 = uVar50;
      if (CARRY1((byte)uVar12,bVar7)) {
        *pcVar13 = *pcVar13 + bVar7;
        bVar7 = bVar7 | pcVar13[0x4000019];
        pcVar13 = (char *)CONCAT31(uVar25,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar13 = *pcVar13 + bVar7;
          piVar22 = (int *)CONCAT31(uVar25,bVar7 + 0x28);
          *piVar22 = (int)piVar22 + (uint)(0xd7 < bVar7) + *piVar22;
          bVar32 = (byte)((uint6)uVar4 >> 8);
          *pbVar11 = *pbVar11 + bVar32;
          uVar35 = CONCAT11((byte)((uint)puVar41 >> 8) | bVar36,bVar9);
          puVar47 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),uVar35);
          uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar50);
          bVar9 = in(uVar35);
          pbVar40 = (byte *)CONCAT31(uVar25,bVar9);
          bVar7 = *pbVar40;
          bVar54 = SCARRY1(*pbVar40,bVar9);
          *pbVar40 = *pbVar40 + bVar9;
          bVar30 = *pbVar40;
          puVar44 = puVar28;
          uVar52 = uVar50;
          if (!CARRY1(bVar7,bVar9)) goto code_r0x00402e19;
          *pbVar40 = *pbVar40 + bVar9;
          bVar32 = bVar32 | *pbVar40;
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar32,cVar8));
          pcVar13 = (char *)CONCAT31(uVar25,bVar9 + *pbVar40);
          *pbVar11 = *pbVar11 + bVar32;
        }
        uVar25 = (undefined3)((uint)pcVar13 >> 8);
        bVar30 = (byte)pcVar13 | (byte)*puVar47;
        pbVar40 = (byte *)CONCAT31(uVar25,bVar30);
        puVar44 = puVar28 + (uint)bVar56 * -2 + 1;
        out(*puVar28,(short)puVar47);
        LOCK();
        bVar7 = *pbVar40;
        *pbVar40 = bVar30;
        UNLOCK();
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
        piVar22 = (int *)(CONCAT31(uVar25,bVar7) + -0x1b7e07);
        *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
        iVar14 = (int)puVar38 - *(int *)pbVar11;
        bVar7 = *(byte *)((int)puVar48 + -0x7a);
        uVar35 = (undefined2)((uint)iVar14 >> 0x10);
        *(char *)piVar22 = *(char *)piVar22 + (char)piVar22;
        bVar30 = (char)((uint)iVar14 >> 8) + bVar7 | *(byte *)((int)puVar48 + 0x17);
        *(char *)piVar22 = *(char *)piVar22 + (char)piVar22;
        uVar25 = (undefined3)(CONCAT22(uVar35,CONCAT11(bVar30,(byte)iVar14)) >> 8);
        bVar7 = (byte)iVar14 | *pbVar11;
        puVar38 = (uint *)CONCAT31(uVar25,bVar7);
        pbVar40 = (byte *)((int)piVar22 + *piVar22);
        puVar28 = puVar44;
        if (SCARRY4((int)piVar22,*piVar22)) goto code_r0x00402e0a;
        *(byte *)puVar38 = (byte)*puVar38 + bVar7;
        *(byte **)pbVar11 = (byte *)(*(int *)pbVar11 + (int)puVar47);
        piVar22 = (int *)CONCAT31(uVar25,bVar7 + 0x27);
        puVar38 = (uint *)CONCAT22(uVar35,CONCAT11(bVar30 + *(byte *)((int)puVar48 + -0x79),bVar7));
        *(byte *)piVar22 = (char)*piVar22 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar16 = (char *)CONCAT22(uVar34,CONCAT11(bVar36 | unaff_EBP[-0x62],cVar43));
  } while( true );
code_r0x00402dff:
  pbVar40 = (byte *)CONCAT22((short)((uint)piVar22 >> 0x10),
                             CONCAT11((byte)((uint)piVar22 >> 8) |
                                      *(byte *)((int)puVar47 + 0x2170411),(byte)piVar22));
  puVar28 = puVar44 + (uint)bVar56 * -2 + 1;
  out(*puVar44,(short)puVar47);
  *pbVar40 = (byte)piVar22;
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar40;
  *pbVar40 = *pbVar40 - cVar43;
  *pbVar40 = *pbVar40 + (char)pbVar40;
  bVar54 = false;
  bVar30 = (byte)((uint)puVar38 >> 8) | bRam052b0603;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar30,(char)puVar38));
  puVar44 = puVar28;
code_r0x00402e19:
  if (bVar30 == 0 || bVar54 != (char)bVar30 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar40;
  *pbVar40 = *pbVar40 + cRam89280411;
  piVar22 = (int *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                            CONCAT11((byte)((uint)pbVar40 >> 8) |
                                     *(byte *)((int)puVar47 + 0x7190411),cRam89280411));
  *(char *)piVar22 = (char)*piVar22 + cRam89280411;
  cVar8 = (char)puVar38;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar47,cVar8));
  puVar44 = (uint *)((int)puVar44 + *piVar22);
  pbVar40 = (byte *)((int)piVar22 + *piVar22);
  bVar30 = (byte)pbVar40;
  *pbVar40 = *pbVar40 + bVar30;
  *(byte *)puVar44 = (byte)*puVar44 + cVar8;
  bVar7 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar30;
  *(byte **)pbVar40 = unaff_EBP + (uint)CARRY1(bVar7,bVar30) + *(int *)pbVar40;
  piVar22 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),*pbVar40);
  *(byte *)puVar47 = (byte)*puVar47 + cVar8;
  puVar28 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(byte)puVar47 | (byte)*puVar47);
  pbVar40 = (byte *)((int)puVar28 + -0x43);
  *pbVar40 = *pbVar40 + (char)((uint)puVar47 >> 8);
  puVar47 = puVar28;
  puVar28 = puVar48;
  uVar51 = uVar49;
code_r0x00402e42:
  uVar49 = uVar52;
  puVar48 = puVar28;
  uVar52 = uVar49;
  if (SCARRY4((int)piVar22,*piVar22)) goto code_r0x00402e6e;
  iVar14 = *(int *)((int)piVar22 + *piVar22);
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
  piVar22 = (int *)(iVar14 + -0x8c6f);
  puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                             CONCAT11((byte)((uint)puVar47 >> 8) | *(byte *)((int)puVar47 + -0x3f),
                                      (char)puVar47));
  pbVar23 = (byte *)((int)piVar22 + *piVar22);
  pbVar40 = pbVar23;
  puVar48 = uStackY_2c;
  if (SCARRY4((int)piVar22,*piVar22)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar23 = *pbVar23 + (char)pbVar23;
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | (byte)*puVar47,(char)puVar38));
  puVar28 = puVar44 + (uint)bVar56 * -2 + 1;
  out(*puVar44,(short)puVar47);
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + (byte)*puVar48);
  puVar44 = puVar28 + (uint)bVar56 * -2 + 1;
  out(*puVar28,(short)puVar47);
  uVar51 = uVar49;
  uVar52 = uVar50;
code_r0x00402e6e:
  uVar49 = uVar51;
  uVar25 = (undefined3)((uint)puVar47 >> 8);
  cVar8 = (char)puVar47 + (byte)*puVar48;
  puVar28 = puVar44 + (uint)bVar56 * -2 + 1;
  out(*puVar44,(short)CONCAT31(uVar25,cVar8));
  puVar47 = (uint *)CONCAT31(uVar25,cVar8 + (byte)*puVar48);
  puVar44 = puVar28 + (uint)bVar56 * -2 + 1;
  out(*puVar28,(short)puVar47);
  pbVar40 = (byte *)0x0;
  puVar28 = puVar48;
code_r0x00402e81:
  puVar48 = puVar28;
  bVar30 = (char)pbVar40 - *pbVar40;
  iVar14 = CONCAT31((int3)((uint)pbVar40 >> 8),bVar30);
  *pbVar11 = *pbVar11 + (char)puVar47;
  pbVar23 = (byte *)(iVar14 * 2);
  *pbVar23 = *pbVar23 ^ bVar30;
  pbVar23 = (byte *)(int)(short)iVar14;
  *pbVar23 = *pbVar23 + bVar30;
  *(byte *)puVar48 = (byte)*puVar48 + (byte)puVar38;
  bVar7 = *pbVar23;
  *pbVar23 = *pbVar23 + bVar30;
  *(byte **)(pbVar11 + -0x73) =
       (byte *)((int)puVar44 + (uint)CARRY1(bVar7,bVar30) + *(int *)(pbVar11 + -0x73));
  *pbVar23 = *pbVar23 + bVar30;
  bVar7 = (byte)puVar38 | (byte)*puVar47;
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar7);
  puVar28 = puVar44;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar23 = *pbVar23 + bVar30;
  pbVar40 = (byte *)CONCAT31((int3)(char)((uint)pbVar40 >> 8),bVar30 + 0x2d);
  puVar44[(int)puVar48 * 2] =
       (uint)((int)puVar47 + (uint)(0xd2 < bVar30) + puVar44[(int)puVar48 * 2]);
  pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
  do {
    uVar12 = *puVar44;
    bVar7 = (byte)pbVar40;
    *(byte *)puVar44 = (byte)*puVar44 + bVar7;
    if (!CARRY1((byte)uVar12,bVar7)) break;
    *pbVar40 = *pbVar40 + bVar7;
    bVar7 = bVar7 | pbVar40[0x400001a];
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar23 = *pbVar23 + (byte)pbVar23;
      uVar25 = (undefined3)((uint)pbVar23 >> 8);
      bVar7 = (byte)pbVar23 | pbVar23[0x400001b];
      pcVar13 = (char *)CONCAT31(uVar25,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar12 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar38;
        *(char *)((int)pcVar13 * 2) =
             *(char *)((int)pcVar13 * 2) - CARRY1((byte)uVar12,(byte)puVar38);
        bVar54 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar23 = *pbVar23 + bVar7;
      puVar28 = puVar44;
code_r0x00402eb4:
      uVar25 = (undefined3)((uint)pbVar23 >> 8);
      bVar7 = (char)pbVar23 + 0x6f;
      pcVar13 = (char *)CONCAT31(uVar25,bVar7);
      *(byte **)pcVar13 = pbStackY_48;
      uVar12 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (char)puVar38;
      pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
      uVar53 = uVar50;
      if ((byte)*puVar47 != 0 && SCARRY1((byte)uVar12,(char)puVar38) == (char)(byte)*puVar47 < '\0')
      {
        *pcVar13 = *pcVar13 + bVar7;
        bVar30 = (char)pbVar23 + 0x9c;
        pbVar23 = (byte *)CONCAT31(uVar25,bVar30);
        puVar28[(int)puVar48 * 2] =
             (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar28[(int)puVar48 * 2]);
        pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
        uVar12 = *puVar28;
        *(byte *)puVar28 = (byte)*puVar28 + bVar30;
        puVar44 = puVar28;
        if (CARRY1((byte)uVar12,bVar30)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar44 = puVar28 + (uint)bVar56 * -2 + 1;
      out(*puVar28,(short)puVar47);
    }
    cVar8 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar8;
    uVar25 = (undefined3)((uint)pcVar13 >> 8);
    bVar7 = cVar8 + 0x6f;
    pcVar13 = (char *)CONCAT31(uVar25,bVar7);
    *(byte **)pcVar13 = pbStackY_48;
    uVar12 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar38;
    pbStackY_48 = (byte *)CONCAT22(pbStackY_48._2_2_,uVar50);
    *(byte *)(puVar44 + 7) = ((byte)puVar44[7] - bVar36) - CARRY1((byte)uVar12,(byte)puVar38);
    *pcVar13 = *pcVar13 + bVar7;
    bVar30 = cVar8 + 0x9c;
    pcVar13 = (char *)CONCAT31(uVar25,bVar30);
    puVar44[(int)puVar48 * 2] =
         (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar48 * 2]);
    uVar12 = *puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar30;
    if (!CARRY1((byte)uVar12,bVar30)) goto code_r0x00402e7e;
    *pcVar13 = *pcVar13 + bVar30;
    bVar30 = bVar30 | pcVar13[0x400001c];
    pbVar40 = (byte *)CONCAT31(uVar25,bVar30);
    uVar52 = uVar50;
    if ((char)bVar30 < '\x01') goto code_r0x00402f16;
    *pbVar40 = *pbVar40 + bVar30;
    pcVar13 = (char *)CONCAT31(uVar25,bVar30 + 0x6f);
    while( true ) {
      *(byte **)pcVar13 = pbStackY_48;
      uVar12 = *puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar38;
      *(uint *)((int)puVar44 + 0x1d) =
           (*(int *)((int)puVar44 + 0x1d) - (int)puVar48) - (uint)CARRY1((byte)uVar12,(byte)puVar38)
      ;
      bVar7 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar7;
      bVar30 = bVar7 + 0x2d;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar30);
      puVar44[(int)puVar48 * 2] =
           (uint)((int)puVar47 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar48 * 2]);
      pbStackY_48 = (byte *)CONCAT22((short)((uint)pbStackY_48 >> 0x10),uVar50);
      uVar12 = *puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar30;
      if (!CARRY1((byte)uVar12,bVar30)) break;
      *pbVar40 = *pbVar40 + bVar30;
code_r0x00402f16:
      bVar7 = (byte)pbVar40 | pbVar40[0x400001d];
      puVar28 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7);
      pbVar40 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar40;
        *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
        uVar25 = (undefined3)((uint)puVar28 >> 8);
        cVar8 = (char)puVar28 + 'o';
        puVar41 = (uint *)CONCAT31(uVar25,cVar8);
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
        puVar28 = (uint *)((int)puVar41 + *puVar41);
        if (!SCARRY4((int)puVar41,*puVar41)) {
          bVar54 = CARRY4((uint)unaff_EBP,*puVar28);
          unaff_EBP = unaff_EBP + *puVar28;
        }
        *puVar28 = (*puVar28 - (int)puVar28) - (uint)bVar54;
        *(byte *)puVar47 = (byte)*puVar47 + cVar45;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11((char)((uint)puVar38 >> 8) + (byte)*puVar47,
                                            cVar45 - (byte)*puVar47));
        *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
code_r0x00402f3b:
        cVar45 = (char)puVar47;
        *pbVar11 = *pbVar11 + cVar45;
        bVar7 = (byte)puVar28;
        *(byte *)((int)puVar28 * 2) = *(byte *)((int)puVar28 * 2) ^ bVar7;
        *(byte *)puVar28 = (byte)*puVar28 + bVar7;
        *(byte *)puVar28 = (byte)*puVar28 + cVar45;
        uVar12 = *puVar28;
        *(byte *)puVar28 = (byte)*puVar28 + bVar7;
        *puVar47 = (uint)((int)puVar28 + (uint)CARRY1((byte)uVar12,bVar7) + *puVar47);
        pcVar13 = (char *)((uint)puVar28 | *puVar48);
        uVar25 = (undefined3)((uint)pcVar13 >> 8);
        cVar8 = (char)pcVar13 + *pcVar13;
        pcVar13 = (char *)CONCAT31(uVar25,cVar8);
        *pcVar13 = *pcVar13 + cVar8;
        cVar8 = cVar8 + *pcVar13;
        piVar22 = (int *)CONCAT31(uVar25,cVar8);
        *(char *)piVar22 = (char)*piVar22 + cVar8;
        iVar14 = LocalDescriptorTableRegister();
        *piVar22 = iVar14;
        bVar7 = *pbVar11;
        bVar33 = (byte)((uint)puVar38 >> 8);
        *pbVar11 = *pbVar11 + bVar33;
        iVar14 = *piVar22;
        uVar35 = (undefined2)((uint)puVar38 >> 0x10);
        bVar32 = (byte)puVar38;
        *(byte *)puVar44 = (byte)*puVar44 + cVar8;
        puVar28 = puVar44 + (uint)bVar56 * -2 + 1;
        out(*puVar44,(short)puVar47);
        *(byte *)puVar28 = (byte)*puVar28 + cVar8;
        bVar30 = *pbVar11;
        *(byte *)puVar47 = (byte)*puVar47 - bVar36;
        *(byte *)puVar28 = (byte)*puVar28 + cVar8;
        puVar41 = puVar28 + (uint)bVar56 * -2 + 1;
        out(*puVar28,(short)puVar47);
        *(byte *)puVar41 = (byte)*puVar41 + cVar8;
        bVar9 = *pbVar11;
        *(uint *)((int)puVar47 + -0x23) = *(uint *)((int)puVar47 + -0x23) & (uint)puVar41;
        puVar24 = (ushort *)((int)piVar22 + *piVar22);
        if (!SCARRY4((int)piVar22,*piVar22)) {
          *puVar24 = uVar53;
        }
        *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
        uVar37 = CONCAT11((char)((uint)puVar47 >> 8) + *(byte *)((int)puVar47 + -0x15),cVar45);
        puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),uVar37);
        puVar28 = (uint *)((int)puVar24 + *(int *)puVar24);
        if (!SCARRY4((int)puVar24,*(int *)puVar24)) {
          *(ushort *)puVar28 = uVar53;
        }
        cVar8 = (char)puVar28;
        *(byte *)puVar28 = (byte)*puVar28 + cVar8;
        cVar10 = ((bVar33 - (char)iVar14) - CARRY1(bVar7,bVar33) | bVar30 | bVar9) + (byte)*puVar28;
        puVar38 = (uint *)CONCAT22(uVar35,CONCAT11(cVar10,bVar32));
        uVar12 = *puVar47;
        *(byte *)puVar47 = (byte)*puVar47 + bVar32;
        if (CARRY1((byte)uVar12,bVar32)) {
          *(byte *)puVar28 = (byte)*puVar28 + cVar8;
          bVar7 = *(byte *)((int)puVar47 + 6);
          *(byte *)puVar47 = (byte)*puVar47 + bVar32;
          bVar30 = (cVar10 - (byte)*puVar41) + cRam14730307;
          *(byte *)puVar28 = (byte)*puVar28 + cVar8;
          bVar7 = bVar36 | bVar7 | *(byte *)((int)puVar47 + 0x2a);
          uVar12 = *puVar28;
          pbVar11 = (byte *)((int)puVar28 + (uint)CARRY1(bVar30,(byte)*puVar28) + *puVar28);
          *(byte *)puVar47 = (byte)*puVar47 + bVar32;
          cVar8 = cVar43 - (byte)*puVar41;
          cVar43 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar34,CONCAT11(bVar7,cVar43)) >> 8),
                                              cVar8) + 0x1e);
          *pbVar11 = *pbVar11 + (char)pbVar11;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          bVar7 = (char)pbVar11 + 0x2aU & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar8)) + 0x1f);
          *pcVar13 = *pcVar13 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar8)) + 0x20);
          *pcVar13 = *pcVar13 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar8)) + 0x21);
          *pcVar13 = *pcVar13 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar8)) + 0x22);
          *pcVar13 = *pcVar13 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar30 = bVar30 + (byte)uVar12 + *pcVar13;
          uVar29 = CONCAT22(uVar35,CONCAT11(bVar30,bVar32));
          cVar43 = cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(cVar43,cVar8)) + 0x25);
          *pcVar13 = *pcVar13 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
          pcVar16 = (char *)CONCAT22(uVar34,CONCAT11(cVar43 + *(char *)(CONCAT22(uVar34,CONCAT11(
                                                  cVar43,cVar8)) + 0x26),cVar8));
          *pcVar13 = *pcVar13 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          cVar8 = bVar7 + 0x2a;
          pcVar13 = (char *)CONCAT31(uVar25,cVar8);
          if ((POPCOUNT(cVar8) & 1U) == 0) {
            *pcVar13 = *pcVar13 + cVar8;
            pbVar11 = (byte *)(CONCAT31(uVar25,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar11;
            bVar9 = (byte)pbVar11;
            *pbVar11 = *pbVar11 + bVar9;
            uVar25 = (undefined3)((uint)pbVar11 >> 8);
            if (!CARRY1(bVar7,bVar9)) {
              if (!SCARRY1(bVar9,'\0')) {
                *pbVar11 = *pbVar11 + bVar9;
                uVar29 = CONCAT22(uVar35,CONCAT11(bVar30 | (byte)*puVar47,bVar32));
                bVar9 = bVar9 & (byte)*puVar47;
                *(char *)CONCAT31(uVar25,bVar9) = *(char *)CONCAT31(uVar25,bVar9) + bVar9;
                pcVar13 = (char *)CONCAT31(uVar25,bVar9 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar13 = (char *)CONCAT31(uVar25,bVar9 + *pcVar16);
              if (SCARRY1(bVar9,*pcVar16) != (char)(bVar9 + *pcVar16) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar9 + *pcVar16;
            pbVar11 = (byte *)CONCAT31(uVar25,bVar7);
            if (SCARRY1(bVar9,*pcVar16) == (char)bVar7 < '\0') {
              pcVar13 = (char *)CONCAT22(uVar35,CONCAT11(bVar30 | (byte)*puVar47,bVar32));
              *pcVar16 = *pcVar16 + cVar45;
              *(byte *)puVar47 = (byte)*puVar47 ^ bVar7;
              *(char *)((int)pbVar11 * 2) = *(char *)((int)pbVar11 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar13 = *pcVar13 + (char)pcVar13;
            uVar25 = (undefined3)((uint)pcVar13 >> 8);
            bVar7 = (char)pcVar13 + 0x2aU & (byte)*puVar47;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x2a);
            *pcVar13 = *pcVar13 + bVar7 + 0x2a;
            pcVar13 = (char *)CONCAT31(uVar25,bVar7 + 0x54 & (byte)*puVar47);
code_r0x00403072:
            cVar8 = (char)pcVar13;
            *pcVar13 = *pcVar13 + cVar8;
            uVar25 = (undefined3)((uint)pcVar13 >> 8);
            pcVar13 = (char *)CONCAT31(uVar25,cVar8 + '*');
            *pcVar13 = *pcVar13 + cVar8 + '*';
            bVar7 = cVar8 + 0x54U & (byte)*puVar47;
            *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar49);
            uVar29 = CONCAT22((short)((uint)uVar29 >> 0x10),
                              CONCAT11((char)((uint)uVar29 >> 8) +
                                       *(char *)CONCAT31(uVar25,bVar7 + 0x2a),(char)uVar29));
            *(byte *)(puVar41 + 0x828000) = (byte)puVar41[0x828000] - cVar45;
            pcVar13 = pcStackY_80;
code_r0x0040309a:
            cVar8 = (char)pcVar13;
            *pcVar13 = *pcVar13 + cVar8;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar50);
            *pcVar13 = *pcVar13 + cVar8;
            pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar8 + 0x2aU & (byte)*puVar47);
          }
          cVar8 = (char)pbVar11;
          *pbVar11 = *pbVar11 + cVar8;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          cVar43 = cVar8 + '*';
          pcVar13 = (char *)CONCAT31(uVar25,cVar43);
          *(byte *)(puVar41 + 0x828000) = (byte)puVar41[0x828000] - cVar45;
          *pcVar13 = *pcVar13 + cVar43;
          cVar10 = (char)pcStackY_80 - (byte)*puVar41;
          pcVar16 = (char *)CONCAT22((short)((uint)pcStackY_80 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_80 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_80 >> 8),
                                                                 cVar10) + 0x34),cVar10));
          *pcVar13 = *pcVar13 + cVar43;
          bVar7 = cVar8 + 0x54U & (byte)*puVar47;
          *(char *)CONCAT31(uVar25,bVar7) = *(char *)CONCAT31(uVar25,bVar7) + bVar7;
          pbVar11 = (byte *)CONCAT31(uVar25,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar29 >> 8);
          pcVar13 = (char *)CONCAT22((short)((uint)uVar29 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar11,(char)uVar29));
          pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
          *(byte *)puVar47 = (byte)*puVar47 + (char)uVar29;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          cVar8 = (byte)pbVar11 - *pbVar11;
          piVar22 = (int *)CONCAT31(uVar25,cVar8);
          puVar41 = (uint *)((int)puVar41 + (uint)((byte)pbVar11 < *pbVar11) + *piVar22);
          cVar8 = cVar8 + (char)*piVar22;
          pbVar11 = (byte *)CONCAT31(uVar25,cVar8);
          *pbVar11 = *pbVar11 + cVar8;
code_r0x004030df:
          *pcVar13 = *pcVar13 + cVar45;
          bVar7 = *pbVar11;
          bVar30 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar30;
          *(byte **)(pcVar16 + -0x41) =
               (byte *)((int)puVar41 + (uint)CARRY1(bVar7,bVar30) + *(int *)(pcVar16 + -0x41));
          *pbVar11 = *pbVar11 + bVar30;
          uVar25 = (undefined3)((uint)pbVar11 >> 8);
          bVar30 = bVar30 | (byte)*puVar41;
          *(char *)CONCAT31(uVar25,bVar30) = *(char *)CONCAT31(uVar25,bVar30) + bVar30;
          pcVar13 = (char *)CONCAT31(uVar25,bVar30 + 0x7b);
          *pcVar13 = *pcVar13 + bVar30 + 0x7b;
          pbVar11 = (byte *)((int)puVar41 + CONCAT31(uVar25,bVar30 - 8) + -1);
          *pbVar11 = *pbVar11 + (bVar30 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar44 = puVar41 + (uint)bVar56 * -2 + 1;
        out(*puVar41,uVar37);
        pbVar40 = unaff_EBP + 1;
        pbStackY_48 = unaff_EBP;
      }
      bVar7 = cVar8 - bVar54;
      pbVar40 = (byte *)((int)puVar44 + (int)puVar48 * 2);
      bVar54 = CARRY1(*pbVar40,bVar7);
      *pbVar40 = *pbVar40 + bVar7;
code_r0x00402ef9:
      pcVar13 = (char *)CONCAT31(uVar25,bVar7 - bVar54);
      pbVar40 = (byte *)((int)puVar48 + (int)unaff_EBP * 2);
      *pbVar40 = *pbVar40 + (bVar7 - bVar54);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar47;
  puVar28 = puVar47 + 0x2828000;
  bVar7 = (byte)puVar38;
  bVar54 = (byte)*puVar28 < bVar7;
  *(byte *)puVar28 = (byte)*puVar28 - bVar7;
  bVar7 = (byte)pbVar40 + *pbVar40;
  piVar22 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar7 + bVar54);
  puVar28 = puVar48;
  uVar51 = uVar49;
  if (CARRY1((byte)pbVar40,*pbVar40) || CARRY1(bVar7,bVar54)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar13 = *pcVar13 + bVar30;
  uVar51 = uVar49;
  uVar52 = uVar50;
  goto code_r0x00402e6e;
code_r0x004025d6:
  if ((POPCOUNT(cVar43) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
code_r0x00402543:
  unaff_EBX = (byte *)CONCAT22(uVar34,CONCAT11(cVar45 + unaff_EBP[(int)pcVar13 * 4],uVar27));
  unaff_EDI[(int)pcVar13] = unaff_EDI[(int)pcVar13] + bVar30;
  goto code_r0x0040254a;
}


