/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040259d
 * Raw Name    : SetStateMachine
 * Demangled   : SetStateMachine
 * Prototype   : void SetStateMachine(byte * param0, byte * param_2)
 * Local Vars  : bVar11, cVar10, pcVar12, in_EAX, uVar14, iVar13, puVar16, pbVar15, pcVar18, pbVar17, uVar20, uVar19, piVar22, puVar21, piVar24, pcVar23, uVar26, puVar25, extraout_ECX, iVar27, pbVar28, extraout_ECX_00, extraout_ECX_02, extraout_ECX_01, cVar30, uVar29, uVar32, bVar31, bVar34, uVar33, pbVar36, uVar35, uVar38, puVar37, unaff_EBX, uVar39, cVar41, puVar40, cVar43, bVar42, unaff_ESI, unaff_EBP, puVar45, puVar44, puVar46, unaff_EDI, in_ES, puVar47, uVar49, uVar48, in_CS, uVar50, in_DS, in_SS, bVar51, in_GS_OFFSET, in_TF, in_AF, bVar52, in_IF, in_NT, bVar53, param_2, unaff_retaddr, uVar54, in_stack_fffffff4, pcStackY_84, puStackY_38, pbStackY_4c, uStackY_30, puStackY_34, uStack_8, pbStack_10, uStack_2, uStack_4, param0, uVar1, uStack_1, uVar3, pcVar2, iVar5, uVar4, bVar7, uVar6, bVar9, cVar8
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004025d9) overlaps instruction at (ram,0x004025d8)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall SetStateMachine(byte *param0,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  undefined3 uVar26;
  char *in_EAX;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint *puVar16;
  int3 iVar27;
  byte *pbVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
  int *piVar24;
  ushort *puVar25;
  char cVar30;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar28;
  undefined4 extraout_ECX_01;
  uint *extraout_ECX_02;
  byte bVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined4 uVar29;
  byte bVar34;
  undefined2 uVar35;
  byte *pbVar36;
  undefined3 uVar38;
  uint *puVar37;
  undefined1 uVar39;
  char cVar41;
  byte *unaff_EBX;
  byte bVar42;
  char cVar43;
  uint *puVar40;
  byte *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar44;
  uint *puVar45;
  byte *unaff_EDI;
  uint *puVar46;
  uint *puVar47;
  ushort in_ES;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort in_CS;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar51;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar52;
  bool bVar53;
  byte in_NT;
  undefined8 uVar54;
  int unaff_retaddr;
  char *pcStackY_84;
  byte *pbStackY_4c;
  uint *puStackY_38;
  uint *puStackY_34;
  undefined4 uStackY_30;
  byte *pbStack_10;
  byte *in_stack_fffffff4;
  ushort uStack_8;
  ushort uStack_4;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  bVar52 = false;
code_r0x0040259d:
  do {
                    /* .NET CLR Managed Code */
    uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar39 = SUB41(unaff_EBX,0);
    cVar41 = (char)((uint)unaff_EBX >> 8) + unaff_EBP[(int)in_EAX * 4];
    unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar41,uVar39));
    cVar8 = (char)in_EAX;
    unaff_EBX[(int)in_EAX] = unaff_EBX[(int)in_EAX] + cVar8;
    *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar8;
    *param_2 = *param_2 + (char)param0;
    uVar26 = (undefined3)((uint)in_EAX >> 8);
    bVar7 = cVar8 - *in_EAX;
    pcVar12 = (char *)CONCAT31(uVar26,bVar7);
    *unaff_EBX = *unaff_EBX + (char)param_2;
    *param_2 = *param_2 ^ bVar7;
    *param_2 = *param_2 + cVar41;
    *pcVar12 = *pcVar12 + bVar7;
    cRam12110000 = cRam12110000 + bVar7;
    bVar42 = *param_2;
    *param_2 = *param_2 + bVar7;
    if (SCARRY1(bVar42,bVar7) != (char)*param_2 < '\0') {
code_r0x004025bd:
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '\x12');
      *pcVar12 = *pcVar12 + (char)((uint)param0 >> 8);
      pcVar12 = pcVar12 + -1;
      cVar8 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar8;
      bVar42 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x7b];
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar42,(char)unaff_EBX)
                                  );
      *pcVar12 = *pcVar12 + cVar8;
      cRam0000847d = cRam0000847d + (char)param_2;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8 + '$');
      unaff_EBX[-0x7b] = unaff_EBX[-0x7b] + bVar42;
      pbVar17 = param0;
code_r0x004025d8:
      bVar42 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar42;
      bVar51 = 0xf4 < bVar42;
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar42 + 0xb);
      pbVar15 = unaff_EBP;
      do {
        bVar42 = (byte)pcVar12 + *pbVar17;
        uVar26 = (undefined3)((uint)pcVar12 >> 8);
        cVar8 = bVar42 + bVar51;
        cVar8 = cVar8 + *(char *)CONCAT31(uVar26,cVar8) +
                (CARRY1((byte)pcVar12,*pbVar17) || CARRY1(bVar42,bVar51));
        pcVar12 = (char *)CONCAT31(uVar26,cVar8);
        *(byte *)unaff_ESI = (byte)*unaff_ESI - cVar8;
        *pcVar12 = *pcVar12 + cVar8;
        iVar13 = *(int *)param_2;
        pbVar15[(int)pcVar12 * 4] = pbVar15[(int)pcVar12 * 4] + (char)((uint)unaff_EBX >> 8);
        pcVar12[(int)pbVar15] = pcVar12[(int)pbVar15] + cVar8;
        pbVar36 = param_2 + (-1 - iVar13);
        *pcVar12 = *pcVar12 + cVar8;
        param0 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                  CONCAT11(((byte)((uint)pbVar17 >> 8) | *pbVar36) + unaff_EDI[0x22]
                                           ,(char)pbVar17));
        *pcVar12 = *pcVar12 + cVar8;
        uVar49 = (ushort)((uint)unaff_retaddr >> 0x10);
        unaff_retaddr = CONCAT22(uVar49,in_ES);
        bVar34 = (char)pbVar36 - param_2[1 - iVar13];
        bVar9 = cVar8 - 0xf;
        pbVar17 = (byte *)CONCAT31(uVar26,bVar9);
        param_2 = (byte *)CONCAT22((short)((uint)pbVar36 >> 0x10),
                                   CONCAT11((char)((uint)pbVar36 >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)pbVar36 >> 8),bVar34) +
                                                     -0x3f),bVar34));
        bVar42 = *pbVar17;
        bVar7 = *pbVar17;
        *pbVar17 = *pbVar17 + bVar9;
        uVar48 = in_ES;
        if (SCARRY1(bVar7,bVar9)) {
          pbVar17 = (byte *)CONCAT31(uVar26,bVar9 + pbVar17[(int)pbVar15] + CARRY1(bVar42,bVar9));
          goto code_r0x00402677;
        }
        unaff_EBX = unaff_EBX + -1;
        *pbVar17 = *pbVar17 + bVar9;
        uVar19 = *unaff_ESI;
        *param0 = *param0 + 1;
        param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),
                                   (bVar34 | (byte)uVar19) - (byte)*unaff_ESI);
        unaff_ESI = (uint *)((int)unaff_ESI +
                            (-(uint)(bVar9 < *pbVar17) - *(int *)CONCAT31(uVar26,bVar9 - *pbVar17)))
        ;
        unaff_EBP = (byte *)CONCAT31(uVar26,bVar9 - *pbVar17);
        *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
        bVar7 = (byte)pbVar15;
        *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
        bVar42 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar7;
        *(byte **)unaff_EDI = param_2 + (uint)CARRY1(bVar42,bVar7) + *(int *)unaff_EDI;
        uVar26 = (undefined3)((uint)pbVar15 >> 8);
        bVar7 = bVar7 | *param_2;
        pcVar12 = (char *)CONCAT31(uVar26,bVar7);
        if ((POPCOUNT(bVar7) & 1U) != 0) {
          *pcVar12 = *pcVar12 + bVar7;
          in_EAX = pcVar12 + 0x12110000;
          goto code_r0x0040259d;
        }
        *pcVar12 = *pcVar12 + bVar7;
        bVar42 = bVar7 + 0xd;
        pbVar17 = (byte *)CONCAT31(uVar26,bVar42);
        *unaff_ESI = *unaff_ESI | (uint)param_2;
        if (-1 < (int)*unaff_ESI) {
code_r0x00402678:
          *pbVar17 = *pbVar17 + (char)pbVar17;
          param0 = (byte *)CONCAT22((short)((uint)param0 >> 0x10),
                                    CONCAT11((byte)((uint)param0 >> 8) | bRam7d160243,(char)param0))
          ;
          pbVar15 = unaff_EDI;
code_r0x00402680:
          bVar42 = (byte)param0;
          *param0 = *param0 + bVar42;
          uVar26 = (undefined3)((uint)param0 >> 8);
          piVar24 = (int *)((int)pbVar15 * 2 + 0x400009a);
          *piVar24 = *piVar24 + CONCAT31(uVar26,bVar42 + 2) + (uint)(0xfd < bVar42);
          unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(char *)((int)param_2 * 5),(char)unaff_EBX));
          *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + bVar42 + 2;
          unaff_EDI = (byte *)CONCAT31(uVar26,bVar42 + 4);
          *pbVar15 = *pbVar15 - (bVar42 + 4);
code_r0x00402697:
          *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
          param_2 = param_2 + -*unaff_ESI;
          pbVar36 = unaff_EDI;
code_r0x0040269b:
          unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                       (byte)unaff_EBX | (byte)((uint)pbVar17 >> 8));
          uVar29 = GlobalDescriptorTableRegister();
          *(undefined4 *)pbVar36 = uVar29;
          cVar8 = (char)pbVar36;
          *param_2 = *param_2 + cVar8;
          if ((POPCOUNT(*param_2) & 1U) == 0) {
            *pbVar36 = *pbVar36 + cVar8;
            pcVar12 = (char *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar8 + '\x13');
            param0 = pbVar17;
            unaff_EDI = pbVar15;
code_r0x004026a8:
            uVar26 = (undefined3)((uint)pcVar12 >> 8);
            bVar7 = (byte)pcVar12 + 2 + cRam001b15fe + (0xfd < (byte)pcVar12);
            bVar42 = *unaff_EBX;
            bVar34 = (byte)unaff_EBX;
            *unaff_EBX = *unaff_EBX + bVar34;
            iRam00009a7d = iRam00009a7d + CONCAT31(uVar26,bVar7) + (uint)CARRY1(bVar42,bVar34);
            iVar13 = CONCAT31(uVar26,bVar7 + 2) + 0x917d + (uint)(0xfd < bVar7);
            uVar26 = (undefined3)((uint)iVar13 >> 8);
            bVar42 = (char)iVar13 + 0x3a;
            pcVar12 = (char *)CONCAT31(uVar26,bVar42);
            uStack_4 = (ushort)pcVar12;
            uStack_2 = (undefined1)((uint)iVar13 >> 0x10);
            uStack_1 = (undefined1)((uint)iVar13 >> 0x18);
            *pcVar12 = *pcVar12 + bVar42;
            uVar38 = (undefined3)((uint)param_2 >> 8);
            bVar7 = (byte)param_2 | *param_2;
            uVar14 = CONCAT31(uVar26,(char)iVar13 + '8');
            uVar19 = uVar14 + 0x1b00001b;
            pcVar12 = (char *)(uVar19 + (1 < bVar42) + *unaff_ESI +
                              (uint)(0xe4ffffe4 < uVar14 || CARRY4(uVar19,(uint)(1 < bVar42))));
            bVar9 = bVar7 + *param0;
            param_2 = (byte *)CONCAT31(uVar38,bVar9);
            uVar26 = (undefined3)((uint)pcVar12 >> 8);
            cVar8 = (char)pcVar12;
            if (SCARRY1(bVar7,*param0) != (char)bVar9 < '\0') {
              *pcVar12 = *pcVar12 + cVar8;
              pcVar12 = (char *)CONCAT31(uVar26,cVar8 + '\x02');
              uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
              cVar43 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x68];
              unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar43,bVar34));
              *pcVar12 = *pcVar12 + cVar8 + '\x02';
              bVar9 = cVar8 + 0x2a;
              pbVar17 = (byte *)CONCAT31(uVar26,bVar9);
              *pbVar17 = *pbVar17 | bVar9;
              bVar7 = *unaff_EBX;
              cVar41 = (char)((uint)param0 >> 8);
              *unaff_EBX = *unaff_EBX + cVar41;
              pbVar15 = unaff_EDI;
              if (SCARRY1(bVar7,cVar41) != (char)*unaff_EBX < '\0') {
                *pbVar17 = *pbVar17 + bVar9;
                bVar7 = cVar8 + 0x2c;
                if ((POPCOUNT(bVar7) & 1U) == 0) {
                  *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                  bVar9 = cVar8 + 0x59;
                  pcVar12 = (char *)CONCAT31(uVar26,bVar9);
                  *(char **)param_2 = pcVar12 + (uint)(0xd2 < bVar7) + *(int *)param_2;
                  unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar43 + unaff_EBX[-0x67],bVar34));
                  *pcVar12 = *pcVar12 + bVar9;
                  pbVar15 = (byte *)((CONCAT31(uVar26,cVar8 + -0x38) + -0x7d060000) -
                                    (uint)(0x90 < bVar9));
                  pbVar17 = param0;
                  uStack_8 = uVar48;
code_r0x00402700:
                  *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                  cVar8 = (char)unaff_EDI + '\x02';
                  pbVar36 = (byte *)CONCAT31((int3)((uint)unaff_EDI >> 8),cVar8);
                  bVar51 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00402704:
                  if (bVar51) {
                    *pbVar36 = *pbVar36 + (char)pbVar36;
                    cVar8 = (char)pbVar36 + '\x02';
                    pcVar12 = (char *)CONCAT31((int3)((uint)pbVar36 >> 8),cVar8);
                    puVar44 = unaff_ESI;
                    unaff_EDI = in_stack_fffffff4;
                    if ((POPCOUNT(cVar8) & 1U) == 0) {
code_r0x0040270c:
                      uVar50 = uVar48;
                      cVar8 = (char)pcVar12;
                      *pcVar12 = *pcVar12 + cVar8;
                      uVar26 = (undefined3)((uint)pcVar12 >> 8);
                      bVar7 = cVar8 + 0x6f;
                      piVar24 = (int *)CONCAT31(uVar26,bVar7);
                      iVar5 = *piVar24;
                      *(byte *)piVar24 = (char)*piVar24 + bVar7;
                      uVar48 = uVar50;
                      pbVar36 = param_2;
                      if ((char)*piVar24 != '\0' &&
                          SCARRY1((char)iVar5,bVar7) == (char)*piVar24 < '\0') {
                        *(byte *)piVar24 = (char)*piVar24 + bVar7;
                        bVar9 = cVar8 + 0x9c;
                        piVar24 = (int *)CONCAT31(uVar26,bVar9);
                        puVar16 = puVar44 + (int)pbVar15 * 2;
                        uVar19 = *puVar16;
                        uVar14 = *puVar16;
                        *puVar16 = (uint)(param_2 + uVar14 + (0xd2 < bVar7));
                        *piVar24 = (*piVar24 - (int)piVar24) -
                                   (uint)(CARRY4(uVar19,(uint)param_2) ||
                                         CARRY4((uint)(param_2 + uVar14),(uint)(0xd2 < bVar7)));
                        uVar19 = *puVar44;
                        *(byte *)puVar44 = (byte)*puVar44 + bVar9;
                        pbVar36 = (byte *)CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar50);
                        if (!CARRY1((byte)uVar19,bVar9)) {
                          halt_baddata();
                        }
                      }
code_r0x00402724:
                      unaff_EDI = pbVar36;
                      in_DS = uStack_8;
                      *(byte *)piVar24 = (char)*piVar24 + (byte)piVar24;
                      uVar26 = (undefined3)((uint)piVar24 >> 8);
                      bVar7 = (byte)piVar24 | *(byte *)((int)piVar24 + 0x400000d);
                      pcVar12 = (char *)CONCAT31(uVar26,bVar7);
                      if ((char)bVar7 < '\x01') {
                        bVar51 = pcVar12 < (char *)0x6fe1411;
                        pcVar12 = pcVar12 + -0x6fe1411;
                      }
                      else {
                        *pcVar12 = *pcVar12 + bVar7;
                        bVar34 = bVar7 + 0x28;
                        puVar16 = (uint *)CONCAT31(uVar26,bVar34);
                        *puVar16 = *puVar16 | (uint)puVar16;
                        bVar9 = *unaff_EBX;
                        cVar8 = (char)((uint)pbVar17 >> 8);
                        *unaff_EBX = *unaff_EBX + cVar8;
                        if (*unaff_EBX == 0 || SCARRY1(bVar9,cVar8) != (char)*unaff_EBX < '\0')
                        goto code_r0x00402746;
                        *(byte *)puVar16 = (char)*puVar16 + bVar34;
                        pcVar12 = (char *)CONCAT31(uVar26,bVar7 + 0x55);
                        puVar16 = puVar44 + (int)pbVar15 * 2;
                        bVar51 = CARRY4(*puVar16,(uint)param_2) ||
                                 CARRY4((uint)(param_2 + *puVar16),(uint)(0xd2 < bVar34));
                        *puVar16 = (uint)(param_2 + *puVar16 + (0xd2 < bVar34));
                      }
                      while( true ) {
                        uVar26 = (undefined3)((uint)pcVar12 >> 8);
                        bVar7 = ((char)pcVar12 - *pcVar12) - bVar51;
                        puVar16 = (uint *)CONCAT31(uVar26,bVar7);
                        uVar19 = *puVar44;
                        *(byte *)puVar44 = (byte)*puVar44 + bVar7;
                        if (CARRY1((byte)uVar19,bVar7)) break;
                        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                     (byte)unaff_EBX | (byte)((uint)param_2 >> 8));
                        pcVar12 = (char *)CONCAT31(uVar26,bVar7 + 2);
                        while( true ) {
                          in_DS = (ushort)unaff_EDI;
                          unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                          cVar8 = (char)pcVar12;
                          *pcVar12 = *pcVar12 + cVar8;
                          uVar26 = (undefined3)((uint)pcVar12 >> 8);
                          bVar7 = cVar8 + 2;
                          pcVar12 = (char *)CONCAT31(uVar26,bVar7);
                          if (SCARRY1(cVar8,'\x02') != (char)bVar7 < '\0') break;
                          *pcVar12 = *pcVar12 + bVar7;
                          cVar43 = (char)param_2;
                          *pbVar15 = *pbVar15 - cVar43;
                          *param_2 = *param_2 + (char)pbVar17;
                          bVar9 = (cVar8 + '\t') - *(char *)CONCAT31(uVar26,cVar8 + '\t');
                          pbVar36 = (byte *)CONCAT31(uVar26,bVar9);
                          bVar7 = *pbVar36;
                          *pbVar36 = *pbVar36 + bVar9;
                          pbVar28 = pbVar17 + 1;
                          cVar8 = bVar9 - CARRY1(bVar7,bVar9);
                          pcVar12 = (char *)CONCAT31(uVar26,cVar8);
                          *pcVar12 = *pcVar12 + cVar8;
                          *pcVar12 = *pcVar12 + cVar8;
                          *pcVar12 = *pcVar12 + cVar8;
                          *pcVar12 = *pcVar12 + cVar8;
                          cVar41 = (char)((uint)pbVar28 >> 8);
                          pbVar17[2] = pbVar17[2] + cVar41;
                          *pcVar12 = *pcVar12 + cVar8;
                          pcVar12 = (char *)(*(int *)pbVar28 * 0x170000);
                          *pcVar12 = *pcVar12;
                          *pcVar12 = *pcVar12;
                          *pbVar28 = *pbVar28;
                          uVar32 = (undefined2)((uint)unaff_EBX >> 0x10);
                          cVar8 = (char)unaff_EBX;
                          bVar34 = (char)((uint)unaff_EBX >> 8) + *(char *)((int)param_2 * 5);
                          unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(bVar34,cVar8));
                          unaff_EBX[(int)pcVar12] = unaff_EBX[(int)pcVar12];
                          *pcVar12 = *pcVar12 - cVar8;
                          *param_2 = *param_2 + (char)pbVar28;
                          uVar26 = (undefined3)((uint)pcVar12 >> 8);
                          bVar9 = -*pcVar12;
                          pbVar17 = (byte *)CONCAT31(uVar26,bVar9);
                          *unaff_EBX = *unaff_EBX + cVar43;
                          *param_2 = *param_2 ^ bVar9;
                          *param_2 = *param_2 + bVar9;
                          *pbVar17 = *pbVar17 + bVar9;
                          bVar7 = *pbVar17;
                          *pbVar17 = *pbVar17 + bVar9;
                          *(byte **)param_2 = param_2 + (uint)CARRY1(bVar7,bVar9) + *(int *)param_2;
                          bVar7 = *param_2;
                          *param_2 = *param_2 + bVar9;
                          if (SCARRY1(bVar7,bVar9) == (char)*param_2 < '\0') {
                            pcVar12 = (char *)((uint)pbVar17 | 2);
                            unaff_EBP[-0x6f] = unaff_EBP[-0x6f] + 1;
                            *pcVar12 = *pcVar12 + (char)pcVar12;
                            in_SS = uStack_4;
                            uStack_8 = in_ES;
                          }
                          else {
                            *pbVar17 = *pbVar17 + bVar9;
                            cVar10 = bVar9 + 0x12;
                            pcVar12 = (char *)CONCAT31(uVar26,cVar10);
                            bVar7 = *unaff_EBX;
                            *unaff_EBX = *unaff_EBX + cVar10;
                            uStack_8 = in_DS;
                            if (SCARRY1(bVar7,cVar10) != (char)*unaff_EBX < '\0') {
                              *pcVar12 = *pcVar12 + cVar10;
                              cVar10 = bVar9 + 0x24;
                              pcVar12 = (char *)CONCAT31(uVar26,cVar10);
                              *pcVar12 = *pcVar12 + cVar41;
                              pbVar17 = (byte *)CONCAT13(uStack_1,CONCAT12(uStack_2,uStack_4));
                              *pcVar12 = *pcVar12 + cVar10;
                              bVar34 = bVar34 | unaff_EBP[-0x6e];
                              pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(bVar34,cVar8));
                              *pcVar12 = *pcVar12 + cVar10;
                              cRam0000917d = cRam0000917d + cVar43;
                              bVar11 = bVar9 + 0x48;
                              pcVar18[-0x6e] = pcVar18[-0x6e] + bVar34;
                              *(char *)CONCAT31(uVar26,bVar11) =
                                   *(char *)CONCAT31(uVar26,bVar11) + bVar11;
                              bVar7 = bVar9 + 0x53 + *pbVar17;
                              cVar8 = bVar7 + (0xf4 < bVar11);
                              cVar8 = cVar8 + *(char *)CONCAT31(uVar26,cVar8) +
                                      (CARRY1(bVar9 + 0x53,*pbVar17) || CARRY1(bVar7,0xf4 < bVar11))
                              ;
                              pcVar12 = (char *)CONCAT31(uVar26,cVar8);
                              *pcVar18 = *pcVar18 - bVar42;
                              *pcVar12 = *pcVar12 + cVar8;
                              pbVar36 = param_2 + -*(int *)param_2;
                              *(char *)((int)pbVar36 * 5) = *(char *)((int)pbVar36 * 5) + bVar34;
                              pcVar12[(int)unaff_EBP] = pcVar12[(int)unaff_EBP] + cVar8;
                              *pcVar12 = *pcVar12 + cVar8;
                              bVar9 = (byte)((uint)iVar13 >> 8) | *pbVar36;
                              uVar39 = (undefined1)in_ES;
                              cVar41 = (char)(in_ES >> 8) + *(char *)(unaff_retaddr + 0xf);
                              *pcVar12 = *pcVar12 + cVar8;
                              bVar7 = cVar8 + 0x2aU & *pbVar36;
                              iVar13 = *(int *)(unaff_EBP + 0xf);
                              *(char *)CONCAT31(uVar26,bVar7) =
                                   *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                              pcVar12 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
                              cVar41 = cVar41 + *(char *)(CONCAT22(uVar49,CONCAT11(cVar41,uVar39)) +
                                                         0x10);
                              *pcVar12 = *pcVar12 + bVar7 + 0x2a;
                              bVar7 = bVar7 + 0x54 & *pbVar36;
                              iVar5 = *(int *)(unaff_EBP + 0x10);
                              *(char *)CONCAT31(uVar26,bVar7) =
                                   *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                              pcVar12 = (char *)CONCAT31(uVar26,bVar7 + 0x2a);
                              puVar40 = (uint *)CONCAT22(uVar49,CONCAT11(cVar41 + *(char *)(CONCAT22
                                                  (uVar49,CONCAT11(cVar41,uVar39)) + 0x11),uVar39));
                              *pcVar12 = *pcVar12 + bVar7 + 0x2a;
                              bVar7 = bVar7 + 0x54 & *pbVar36;
                              puVar46 = (uint *)(pbVar15 +
                                                *(int *)(unaff_EBP + 0x11) + iVar5 + iVar13);
                              *(char *)CONCAT31(uVar26,bVar7) =
                                   *(char *)CONCAT31(uVar26,bVar7) + bVar7;
                              pbVar15 = (byte *)CONCAT31(uVar26,bVar7 + 0x2a);
                              puVar16 = (uint *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                                         CONCAT11(bVar9 + *pbVar15,bVar42));
                              uVar54 = CONCAT44(pbVar36,pbVar15 + (uint)CARRY1(bVar9,*pbVar15) +
                                                                  *(int *)pbVar15);
                              uVar48 = in_DS;
                              goto code_r0x00402866;
                            }
                          }
                          cVar41 = (char)pcVar12;
                          uVar26 = (undefined3)((uint)pcVar12 >> 8);
                          cVar8 = cVar41 + '\x02';
                          piVar24 = (int *)CONCAT31(uVar26,cVar8);
                          pbVar17 = pbVar28;
                          uVar48 = in_DS;
                          pbVar36 = param_2;
                          if (SCARRY1(cVar41,'\x02') != cVar8 < '\0') goto code_r0x00402724;
                          *(char *)piVar24 = (char)*piVar24 + cVar8;
                          pcVar12 = (char *)CONCAT31(uVar26,cVar41 + '\n');
                          *(byte *)puVar44 = (byte)*puVar44 - cVar43;
                          *param_2 = *param_2 + (char)pbVar28;
                        }
                        pbVar36 = unaff_EBP + 0x6fe1411;
                        bVar51 = CARRY1(*pbVar36,bVar7);
                        *pbVar36 = *pbVar36 + bVar7;
                      }
                      goto code_r0x00402746;
                    }
                    unaff_EBX[(int)param_2] = unaff_EBX[(int)param_2] + cVar8;
                    param0 = pbVar17;
                    unaff_EDI = pbVar15;
                    goto code_r0x004026a8;
                  }
                  goto code_r0x0040269b;
                }
                in_stack_fffffff4 = (byte *)CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),in_CS)
                ;
                in_CS = 0x927c;
                uVar54 = func_0x02040000(in_stack_fffffff4);
                param_2 = (byte *)((ulonglong)uVar54 >> 0x20);
                *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
                pbVar17 = (byte *)CONCAT31((int3)((ulonglong)uVar54 >> 8),(char)uVar54 + '\x12');
                param0 = extraout_ECX_00;
              }
              goto code_r0x00402680;
            }
            pbVar15 = unaff_EBP + -1;
            *pcVar12 = *pcVar12 + cVar8;
            param_2 = (byte *)CONCAT31(uVar38,bVar9 | *unaff_EBX);
            pbVar17 = (byte *)CONCAT31(uVar26,cVar8 + ':');
code_r0x00402677:
            unaff_ESI = (uint *)((int)unaff_ESI + -1);
            unaff_EBP = pbVar15;
            goto code_r0x00402678;
          }
          goto code_r0x0040263f;
        }
        *pbVar17 = *pbVar17 + bVar42;
        unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x6b],
                                              (char)unaff_EBX));
        *pbVar17 = *pbVar17 + bVar42;
        cVar8 = bVar7 + 0xf;
        pcVar12 = (char *)CONCAT31(uVar26,cVar8);
        unaff_retaddr = (uint)uVar49 << 0x10;
        if (SCARRY1(bVar42,'\x02') == cVar8 < '\0') {
          pcVar12 = pcVar12 + (0xfd < bVar42) + 0x847d;
          goto code_r0x004025bd;
        }
        *pcVar12 = *pcVar12 + cVar8;
        cVar41 = bVar7 + 0x11;
        pbVar15 = (byte *)CONCAT31(uVar26,cVar41);
        uVar54 = CONCAT44(param_2,pbVar15);
        unaff_retaddr = (uint)uVar49 << 0x10;
        pbVar17 = param0;
        pbVar36 = unaff_EDI;
        if (SCARRY1(cVar8,'\x02') == cVar41 < '\0') goto code_r0x004025d6;
code_r0x0040263f:
        *pbVar15 = *pbVar15 + (char)pbVar15;
        bVar42 = (char)pbVar15 + 2;
        pcVar12 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar42);
        if ((POPCOUNT(bVar42) & 1U) == 0) {
          *pcVar12 = *pcVar12 + bVar42;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar15 = unaff_EBX + (int)pbVar17;
        bVar51 = CARRY1(*pbVar15,bVar42);
        *pbVar15 = *pbVar15 + bVar42;
        pbVar15 = unaff_EBP;
        unaff_EDI = pbVar36;
        in_ES = uVar48;
      } while( true );
    }
    unaff_EBX = (byte *)CONCAT22(uVar32,CONCAT11(cVar41 + unaff_EBP[(int)pcVar12 * 4],uVar39));
    unaff_EDI[(int)pcVar12] = unaff_EDI[(int)pcVar12] + bVar7;
    *(char *)((int)pcVar12 * 2) = *(char *)((int)pcVar12 * 2) - bVar7;
    *pcVar12 = *pcVar12 + bVar7;
    pcVar18 = (char *)CONCAT31(uVar26,bVar7 + *pcVar12);
    *pcVar18 = *pcVar18 + bVar7 + *pcVar12;
    uStack_4 = 0x4025;
    uVar54 = func_0x0f40255d();
code_r0x0040255d:
    pcVar12 = (char *)((ulonglong)uVar54 >> 0x20);
    piVar24 = (int *)uVar54;
    *piVar24 = (int)((int)piVar24 + *piVar24);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          (char)((ulonglong)uVar54 >> 0x28),(char)unaff_EBX));
    *piVar24 = (int)((int)piVar24 + *piVar24);
    *unaff_EDI = *unaff_EDI + (char)((ulonglong)uVar54 >> 0x20);
    cVar8 = (char)uVar54;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    *unaff_EBX = *unaff_EBX + cVar8;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    pcVar2 = (code *)swi(1);
    uVar54 = (*pcVar2)();
    param_2 = (byte *)((ulonglong)uVar54 >> 0x20);
    pbVar17 = (byte *)uVar54;
    bVar42 = *pbVar17;
    bVar7 = (byte)uVar54;
    *pbVar17 = *pbVar17 + bVar7;
    *param_2 = *param_2 + bVar7 + CARRY1(bVar42,bVar7);
    *pbVar17 = *pbVar17 + bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    *pbVar17 = *pbVar17 + bVar7;
    cVar8 = (char)((ulonglong)uVar54 >> 0x28);
    *pbVar17 = *pbVar17 + cVar8;
    bVar42 = *pbVar17;
    uVar26 = (undefined3)((ulonglong)uVar54 >> 8);
    pcVar12 = (char *)CONCAT31(uVar26,bVar7 + bVar42);
    *pcVar12 = *pcVar12 + cVar8;
    cVar8 = bVar7 + bVar42 + *pcVar12;
    in_EAX = (char *)CONCAT31(uVar26,cVar8);
    cVar41 = (char)((ulonglong)uVar54 >> 0x20);
    *unaff_EDI = *unaff_EDI + cVar41;
    *in_EAX = *in_EAX + cVar8;
    *in_EAX = *in_EAX + cVar41;
    *in_EAX = *in_EAX + cVar8;
    *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
    param0 = extraout_ECX;
    in_SS = uStack_4;
  } while( true );
code_r0x00402746:
  *(byte *)puVar16 = (char)*puVar16 + (byte)puVar16;
  uVar26 = (undefined3)((uint)puVar16 >> 8);
  bVar7 = (byte)puVar16 | *(byte *)((int)puVar16 + 0x400000e);
  pcVar12 = (char *)CONCAT31(uVar26,bVar7);
  unaff_ESI = puVar44;
  if ('\0' < (char)bVar7) {
    *pcVar12 = *pcVar12 + bVar7;
    bVar7 = bVar7 + 0x28 | *(byte *)CONCAT31(uVar26,bVar7 + 0x28);
    *unaff_EBX = *unaff_EBX + (char)((uint)pbVar17 >> 8);
    unaff_ESI = puVar44 + 1;
    out(*puVar44,(short)param_2);
    *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
    pcVar12 = (char *)(uint)(bVar7 | *param_2);
  }
  bVar7 = (byte)pcVar12 & 0x7b;
  bVar51 = (char)(bVar7 + 0x17) < '\0';
  uStack_8 = uVar50;
  in_stack_fffffff4 = unaff_EDI;
  if (SCARRY1(bVar7,'\x17') == bVar51) {
    if (SCARRY1(bVar7,'\x17') != bVar51) goto code_r0x00402700;
    goto code_r0x00402697;
  }
  cVar41 = (char)unaff_EDI;
  *unaff_EDI = *unaff_EDI + cVar41;
  iVar27 = (int3)((uint)unaff_EDI >> 8);
  cVar8 = cVar41 + '\x02';
  pbVar36 = (byte *)CONCAT31(iVar27,cVar8);
  bVar51 = (POPCOUNT(cVar8) & 1U) == 0;
  if (!bVar51) goto code_r0x00402704;
  *pbVar36 = *pbVar36 + cVar8;
  cVar41 = cVar41 + '\x04';
  pcVar12 = (char *)CONCAT31(iVar27,cVar41);
  if ((POPCOUNT(cVar41) & 1U) == 0) {
    *pcVar12 = *pcVar12 + cVar41;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2 = (byte *)((int)iVar27 >> 0x17);
  puVar44 = unaff_ESI;
  goto code_r0x0040270c;
code_r0x00402866:
  do {
    puVar37 = (uint *)((ulonglong)uVar54 >> 0x20);
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar16;
    cVar8 = (char)puVar40 - (byte)*puVar44;
    iVar13 = CONCAT22((short)((uint)puVar40 >> 0x10),
                      CONCAT11((char)((uint)puVar40 >> 8) +
                               *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),cVar8) + 0x12),cVar8));
    *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
    uVar26 = (undefined3)((ulonglong)uVar54 >> 8);
    bVar42 = (char)uVar54 + 0x2aU & (byte)*puVar37;
    pcVar12 = (char *)CONCAT31(uVar26,bVar42);
    puVar46 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x12));
    *pcVar12 = *pcVar12 + bVar42;
    puVar21 = (uint *)CONCAT31(uVar26,bVar42 + 0x2a);
    pbStack_10 = (byte *)(uint)uVar48;
get_Value:
    cVar8 = *(char *)(iVar13 + 0x13);
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    uVar26 = (undefined3)((uint)puVar21 >> 8);
    bVar42 = (char)puVar21 + 0x2aU & (byte)*puVar37;
    pcVar12 = (char *)CONCAT31(uVar26,bVar42);
    puVar46 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x13));
    *pcVar12 = *pcVar12 + bVar42;
    pbVar17 = (byte *)CONCAT31(uVar26,bVar42 + 0x2a);
    bVar42 = (byte)((uint)puVar16 >> 8);
    bVar7 = bVar42 + *pbVar17;
    pbVar17 = pbVar17 + (uint)CARRY1(bVar42,*pbVar17) + *(int *)pbVar17;
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar16;
    puVar40 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar13 >> 0x10),
                                               CONCAT11((char)((uint)iVar13 >> 8) + cVar8,
                                                        (char)iVar13)) >> 8),
                               (char)iVar13 - (byte)*puVar44);
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11(bVar7 + *pbVar17,(char)puVar16));
    pbVar17 = pbVar17 + (uint)CARRY1(bVar7,*pbVar17) + *(int *)pbVar17;
    uVar49 = uVar48;
code_r0x00402898:
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar16;
    bVar42 = (byte)puVar37;
    uVar32 = CONCAT11((char)((uint)puVar37 >> 8) - (byte)*puVar44,bVar42);
    pbVar15 = (byte *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
    pcVar12 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar40[-0x19],
                                        (char)puVar40));
    *pbVar17 = *pbVar17 + (char)pbVar17;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + '\x03');
    puVar40 = puVar44;
    do {
      puVar44 = puVar40 + 1;
      out(*puVar40,uVar32);
      pcVar12 = pcVar12 + -1;
      bVar7 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar7;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                 CONCAT11((byte)((uint)puVar16 >> 8) | *pbVar15,(char)puVar16));
      *pbVar17 = *pbVar17 + bVar7;
      *pcVar12 = *pcVar12 + bVar42;
      *(byte *)((int)pbVar17 * 2) = *(byte *)((int)pbVar17 * 2) ^ bVar7;
      *pbVar17 = *pbVar17 + bVar7;
      *pbVar17 = *pbVar17 | bVar7;
      bVar51 = CARRY1((byte)*puVar16,bVar42);
      *(byte *)puVar16 = (byte)*puVar16 + bVar42;
      cVar8 = bVar7 + 10 + bVar51;
      pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),cVar8);
      puVar40 = puVar44;
    } while (bVar7 < 0xf6 && !CARRY1(bVar7 + 10,bVar51));
    *pbVar17 = *pbVar17 + cVar8;
    pcVar18 = (char *)((uint)pbVar17 | *puVar46);
    puVar40 = (uint *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11((char)((uint)pcVar12 >> 8) + unaff_EBP[-100],(char)pcVar12))
    ;
    *pcVar18 = *pcVar18 + (char)pcVar18;
    bVar42 = (char)pcVar18 + 7;
    uVar54 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar18 >> 8),bVar42));
code_r0x004028c8:
    puVar37 = (uint *)((ulonglong)uVar54 >> 0x20);
  } while ((POPCOUNT(bVar42) & 1U) != 0);
  *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
  puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar54 >> 8),(char)uVar54 + '-');
  puVar44 = (uint *)((uint)puVar44 | *(uint *)((int)puVar37 + 0x3b));
  bVar51 = CARRY4(*puVar21,(uint)puVar21);
  uVar19 = *puVar21;
  *puVar21 = (uint)(*puVar21 + (int)puVar21);
  if (SCARRY4(uVar19,(int)puVar21)) {
    bVar51 = CARRY4(*puVar21,(uint)puVar21);
    bVar53 = SCARRY4(*puVar21,(int)puVar21);
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    bVar42 = POPCOUNT(*puVar21 & 0xff);
    if (bVar53) goto code_r0x004029be;
    goto code_r0x0040294c;
  }
  do {
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + bVar51);
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar16;
    bVar51 = (POPCOUNT((byte)*puVar37) & 1U) == 0;
    if (bVar51) goto code_r0x004028e2;
code_r0x004028db:
    if (!bVar51) {
      iVar13 = CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 - (byte)*puVar44);
      goto get_Value;
    }
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'r');
    pbStack_10 = unaff_EBP;
code_r0x004028e2:
    uVar19 = *puVar21;
    *puVar21 = (uint)(*puVar21 + (int)puVar21);
    if (SCARRY4(uVar19,(int)puVar21)) {
      if (*puVar21 == 0 || SCARRY4(uVar19,(int)puVar21) != (int)*puVar21 < 0) goto code_r0x0040296d;
      goto code_r0x00402957;
    }
    puVar40 = (uint *)((int)puVar40 + -1);
    cVar8 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11((byte)((uint)puVar16 >> 8) |
                                        *(byte *)((int)puVar16 + 0x16d7207),(char)puVar16));
    pbVar17 = (byte *)((int)puVar21 + 0x7d);
    bVar42 = *pbVar17;
    bVar9 = (byte)((uint)puVar37 >> 8);
    bVar7 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar9;
    uVar49 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY1(bVar7,bVar9) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
             (ushort)((char)*pbVar17 < '\0') * 0x80 | (ushort)(*pbVar17 == 0) * 0x40 |
             (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(*pbVar17) & 1U) == 0) * 4 |
             (ushort)CARRY1(bVar42,bVar9);
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    pbVar17 = (byte *)(CONCAT31((int3)((uint)puVar21 >> 8),cVar8 + '+') ^ *puVar46);
    if ((POPCOUNT((uint)pbVar17 & 0xff) & 1U) != 0) goto code_r0x00402898;
    bVar42 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar42;
    puVar21 = (uint *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar42 + 0x72);
    if (bVar42 < 0x8e && (byte)(bVar42 + 0x72) != '\0') {
      uVar50 = in_CS;
      if (SCARRY1(bVar42,'r')) goto code_r0x00402974;
    }
    else {
      *(byte *)((int)puVar21 + 0x6f) = *(byte *)((int)puVar21 + 0x6f) + bVar9;
    }
code_r0x00402905:
    in_DS = uVar49;
    uVar54 = CONCAT44(puVar37,puVar21);
    puVar40 = (uint *)((int)puVar40 + -1);
    cVar8 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    bVar42 = (byte)((uint)puVar16 >> 8) | (byte)*puVar16;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar42,(char)puVar16));
    if ((char)bVar42 < '\x01') {
      *(byte *)puVar21 = (byte)*puVar21 + cVar8;
      puVar46 = (uint *)((int)puVar46 - *(int *)(unaff_EBP + -100));
      uVar49 = in_DS;
      goto code_r0x00402929;
    }
    *(byte *)puVar21 = (byte)*puVar21 + cVar8;
    uVar49 = 0x291c;
    uVar54 = func_0x7346291c();
    *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
    puVar16 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                               (byte)extraout_ECX_01 | *(byte *)((ulonglong)uVar54 >> 0x20));
    puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,in_DS);
    uStackY_30 = puVar40;
    while( true ) {
      pcVar12 = (char *)((int)uVar54 * 2);
      *pcVar12 = *pcVar12 - (char)puVar16;
      uVar19 = *puVar40;
      cVar8 = (char)((uint)puVar16 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 + cVar8;
      if (SCARRY1((byte)uVar19,cVar8) == (char)(byte)*puVar40 < '\0') {
        pbVar17 = (byte *)((int)puVar46 + (int)uVar54);
        *pbVar17 = *pbVar17 + (char)uVar54;
        bVar42 = *pbVar17;
        goto code_r0x004028c8;
      }
code_r0x00402929:
      puVar37 = (uint *)((ulonglong)uVar54 >> 0x20);
      cVar8 = (char)uVar54;
      *(char *)uVar54 = *(char *)uVar54 + cVar8;
      uVar26 = (undefined3)((ulonglong)uVar54 >> 8);
      bVar42 = cVar8 + 7;
      puVar21 = (uint *)CONCAT31(uVar26,bVar42);
      bVar7 = (byte)((ulonglong)uVar54 >> 0x28);
      if ((POPCOUNT(bVar42) & 1U) != 0) break;
      *(byte *)puVar21 = (byte)*puVar21 + bVar42;
      pcVar12 = (char *)CONCAT31(uVar26,cVar8 + '3');
      uVar32 = (undefined2)((uint)puVar40 >> 0x10);
      uVar39 = SUB41(puVar40,0);
      bVar42 = (char)((uint)puVar40 >> 8) + *(byte *)((int)puVar44 + 0x16) + (0xd3 < bVar42);
      puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(bVar42,uVar39));
      *pcVar12 = *pcVar12 + cVar8 + '3';
      cVar41 = cVar8 + ':';
      puVar21 = (uint *)CONCAT31(uVar26,cVar41);
      if ((POPCOUNT(cVar41) & 1U) != 0) {
        bVar42 = bVar42 | *(byte *)((int)puVar37 + 7);
        puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(bVar42,uVar39));
        bVar51 = (POPCOUNT(bVar42) & 1U) == 0;
        goto code_r0x004028db;
      }
      *(byte *)puVar21 = (byte)*puVar21 + cVar41;
      puVar21 = (uint *)(CONCAT31(uVar26,cVar8 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar17 = (byte *)((int)puVar21 + 0x72);
      bVar53 = SCARRY1(*pbVar17,bVar7);
      *pbVar17 = *pbVar17 + bVar7;
      bVar42 = POPCOUNT(*pbVar17);
code_r0x0040294c:
      if ((bVar42 & 1) == 0) {
        *(byte *)((int)puVar21 + 0x72) = *(byte *)((int)puVar21 + 0x72) + (char)((uint)puVar37 >> 8)
        ;
      }
      else if (bVar53) {
        unaff_EBP = *(byte **)unaff_EBP;
        cVar8 = cRamc9721806;
        goto code_r0x004029c4;
      }
      unaff_EBP = (byte *)0x7e700001;
      puStackY_38 = (uint *)CONCAT22(puStackY_38._2_2_,in_SS);
code_r0x00402957:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      cVar8 = (char)puVar21 + '(';
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),cVar8);
      *(byte *)puVar21 = (byte)*puVar21 + cVar8;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                 CONCAT11((byte)((uint)puVar16 >> 8) | (byte)*puVar21,(char)puVar16)
                                );
      *(byte *)puVar21 = (byte)*puVar21 + cVar8;
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((byte)((uint)puVar37 >> 8) | (byte)puVar40[0x18],
                                          (char)puVar37));
      puVar44 = puStackY_38;
      puVar46 = puStackY_34;
code_r0x00402966:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      bVar42 = (byte)((uint)puVar40 >> 8) | *(byte *)((int)puVar37 + 7);
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar42,(char)puVar40));
      if ((POPCOUNT(bVar42) & 1U) != 0) {
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + -0x21);
        goto code_r0x00402905;
      }
code_r0x0040296d:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + '~');
      uVar4 = in_SS;
code_r0x00402972:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      uVar50 = in_CS;
      uVar49 = uVar4;
code_r0x00402974:
      bVar42 = 0xe9 < (byte)puVar21;
      in_CS = 0x2d0a;
      uVar54 = func_0x00006128(uVar50);
      puVar16 = (uint *)uVar54;
      piVar24 = (int *)((int)((ulonglong)uVar54 >> 0x20) + -0x3d);
      *piVar24 = (int)((int)puVar44 + (uint)bVar42 + *piVar24);
      bVar51 = SCARRY4(*puVar16,(int)puVar16);
      *puVar16 = *puVar16 + (int)puVar16;
      uVar19 = *puVar16;
      puVar16 = extraout_ECX_02;
code_r0x00402982:
      bVar42 = POPCOUNT(uVar19 & 0xff);
      if (bVar51) {
        *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
        puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                   CONCAT11((byte)((uint)puVar16 >> 8) |
                                            *(byte *)((ulonglong)uVar54 >> 0x20),(char)puVar16));
        goto code_r0x00402991;
      }
code_r0x00402984:
      pcVar12 = (char *)((ulonglong)uVar54 >> 0x20);
      if ((bVar42 & 1) == 0) {
        *(char *)uVar54 = *(char *)uVar54 + (char)uVar54;
        *pcVar12 = *pcVar12 + (char)puVar16;
        uVar54 = CONCAT44(CONCAT22((short)((ulonglong)uVar54 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar54 >> 0x28) - pcVar12[0x1f],
                                            (char)((ulonglong)uVar54 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar54 >> 8),(char)uVar54 + '('));
code_r0x00402991:
        puVar37 = (uint *)((ulonglong)uVar54 >> 0x20);
        pbVar17 = (byte *)uVar54;
        bVar42 = (byte)uVar54;
        bVar51 = CARRY1(bVar42,*pbVar17);
        puVar21 = (uint *)CONCAT31((int3)((ulonglong)uVar54 >> 8),bVar42 + *pbVar17);
        cVar8 = bVar42 + *pbVar17;
        if (SCARRY1(bVar42,*pbVar17)) goto code_r0x004029c4;
code_r0x00402995:
        puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                   CONCAT11(((char)((uint)puVar37 >> 8) -
                                            *(byte *)((int)puVar37 + 0x6b)) - bVar51,(char)puVar37))
        ;
        bVar42 = (byte)puVar21;
        bVar51 = CARRY1(bVar42,(byte)*puVar21);
        bVar53 = SCARRY1(bVar42,(byte)*puVar21);
        puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar42 + (byte)*puVar21);
        do {
          if (!bVar53) {
            puVar44 = (uint *)((int)puVar44 + (uint)bVar51 + *puVar21);
            pbVar17 = (byte *)((int)puVar21 + *puVar21);
            bVar7 = (byte)pbVar17;
            *pbVar17 = *pbVar17 + bVar7;
            *(byte *)puVar16 = (byte)*puVar16 + (char)puVar16;
            bVar42 = *pbVar17;
            *pbVar17 = *pbVar17 + bVar7;
            *puVar46 = (uint)((int)puVar40 + (uint)CARRY1(bVar42,bVar7) + *puVar46);
            *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)puVar16;
            uVar26 = (undefined3)((uint)pbVar17 >> 8);
            bVar7 = bVar7 | (byte)*puVar44;
            puVar21 = (uint *)CONCAT31(uVar26,bVar7);
            uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_SS);
            uVar19 = *puVar21;
            uVar14 = *puVar21;
            *puVar21 = (uint)(*puVar21 + (int)puVar21);
            if (SCARRY4(uVar14,(int)puVar21)) {
              *(byte *)puVar44 = (byte)*puVar44 - (char)puVar40;
              *(byte *)puVar37 = (byte)*puVar37 + (char)puVar16;
              *(byte *)puVar46 = (byte)*puVar46 - (char)puVar40;
            }
            else {
              puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,in_DS);
              in_SS = in_DS;
              uVar4 = in_DS;
              if (CARRY4(uVar19,(uint)puVar21)) goto code_r0x00402972;
              bVar51 = CARRY1(bVar7,(byte)*puVar21);
              bVar53 = SCARRY1(bVar7,(byte)*puVar21);
              puVar21 = (uint *)CONCAT31(uVar26,bVar7 + (byte)*puVar21);
code_r0x004029be:
              if (!bVar53) {
                puStackY_34 = (uint *)CONCAT22(puStackY_34._2_2_,in_DS);
                *(byte *)((int)puVar37 + -0x37) =
                     (*(byte *)((int)puVar37 + -0x37) - (char)((uint)puVar37 >> 8)) - bVar51;
                cVar8 = cRamc9721806;
code_r0x004029c4:
                cRamc9721806 = cVar8;
                bVar42 = (byte)puVar21;
                bVar51 = CARRY1(bVar42,(byte)*puVar21);
                bVar53 = SCARRY1(bVar42,(byte)*puVar21);
                puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar42 + (byte)*puVar21);
                goto code_r0x004029c6;
              }
            }
            bVar42 = (byte)puVar16;
            bVar51 = CARRY1((byte)*puVar37,bVar42);
            bVar53 = SCARRY1((byte)*puVar37,bVar42);
            *(byte *)puVar37 = (byte)*puVar37 + bVar42;
            if (bVar51) goto code_r0x00402966;
          }
code_r0x004029c6:
          if (bVar53) {
            in_DS = (ushort)pbStack_10;
            goto code_r0x00402966;
          }
          *(uint *)((int)puVar37 + -0x23) =
               (*(int *)((int)puVar37 + -0x23) - (int)puVar44) - (uint)bVar51;
          uVar19 = *puVar21;
          bVar7 = (byte)puVar21;
          uVar14 = *puVar21;
          uVar26 = (undefined3)((uint)puVar21 >> 8);
          bVar42 = bVar7 + (byte)*puVar21;
          puVar21 = (uint *)CONCAT31(uVar26,bVar42);
          uVar4 = in_DS;
          if (SCARRY1(bVar7,(byte)uVar14)) goto code_r0x00402972;
          cVar8 = (char)puVar37;
          bVar9 = ((char)((uint)puVar37 >> 8) - *(byte *)((int)puVar37 + -0xf)) -
                  CARRY1(bVar7,(byte)uVar19);
          puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(bVar9,cVar8));
          puVar45 = (uint *)CONCAT31(uVar26,bVar42 + (byte)*puVar21);
          bVar7 = (byte)puVar16;
          uVar49 = in_DS;
          if (SCARRY1(bVar42,(byte)*puVar21)) {
            *(byte *)puVar37 = (byte)*puVar37 + bVar7;
            uVar54 = CONCAT44(puVar37,(int)puVar45 + -0x1c37211);
            pcVar12 = (char *)((int)puVar45 + -0x1c3720a);
            *pcVar12 = *pcVar12 + bVar9;
            bVar42 = POPCOUNT(*pcVar12);
            goto code_r0x00402984;
          }
          puVar44 = (uint *)((int)puVar44 +
                            (-(uint)CARRY1(bVar42,(byte)*puVar21) - *(int *)((int)puVar37 + 5)));
          bVar51 = SCARRY4((int)puVar45,*puVar45);
          uVar19 = (int)puVar45 + *puVar45;
          uVar54 = CONCAT44(puVar37,uVar19);
          if (bVar51) goto code_r0x00402982;
          bVar42 = (byte)uVar19 + 0x8e;
          uVar20 = CONCAT31((int3)(uVar19 >> 8),bVar42 - CARRY4((uint)puVar45,*puVar45));
          *puVar40 = (*puVar40 - uVar20) -
                     (uint)((byte)uVar19 < 0x72 || bVar42 < CARRY4((uint)puVar45,*puVar45));
          pbVar17 = (byte *)(uVar20 - 0x5e);
          bVar42 = *pbVar17;
          *pbVar17 = *pbVar17 + bVar9;
          uVar19 = (uint)CARRY1(bVar42,bVar9);
          uVar14 = uVar20 - 0x32d72;
          puVar21 = (uint *)(uVar14 - uVar19);
          if (SBORROW4(uVar20,0x32d72) != SBORROW4(uVar14,uVar19)) goto code_r0x00402992;
          uVar50 = uVar48;
          if (uVar20 < 0x32d72 || uVar14 < uVar19) {
            *unaff_EBP = *unaff_EBP - (char)((uint)puVar21 >> 8);
            *(byte *)puVar37 = (byte)*puVar37 + bVar7;
            puVar45 = puVar44 + 1;
            out(*puVar44,CONCAT11(bVar9,cVar8));
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            goto code_r0x00402a3e;
          }
          bVar51 = CARRY4((uint)puVar21,*puVar21);
          bVar53 = SCARRY4((int)puVar21,*puVar21);
          puVar21 = (uint *)((int)puVar21 + *puVar21);
          if (!bVar53) {
            uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_DS);
            *(byte *)puVar44 = (byte)*puVar44 + bVar51;
            bVar42 = (byte)puVar21;
            *(byte *)((int)puVar37 + (int)unaff_EBP) =
                 *(byte *)((int)puVar37 + (int)unaff_EBP) + bVar42;
            *(byte *)puVar40 = (byte)*puVar40 + cVar8;
            *(byte *)puVar40 = (byte)*puVar40 ^ bVar42;
            bVar11 = (byte)((uint)puVar16 >> 8);
            *(byte *)puVar44 = (byte)*puVar44 + bVar11;
            *(byte *)puVar21 = (byte)*puVar21 + bVar42;
            pbVar15 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),bVar42 | (byte)*puVar21);
            *(byte *)puVar16 = (byte)*puVar16 + cVar8;
            bVar34 = *pbVar15;
            uVar32 = (undefined2)((uint)puVar16 >> 0x10);
            puVar16 = (uint *)CONCAT22(uVar32,CONCAT11(bVar11 + bVar34,bVar7));
            pbVar15 = pbVar15 + (uint)CARRY1(bVar11,*pbVar15) + *(int *)pbVar15;
            *(byte *)puVar37 = (byte)*puVar37 + bVar7;
            unaff_EBP = unaff_EBP + iRam0355720b;
            pbVar17 = pbVar15 + 0x73;
            bVar42 = *pbVar17;
            *pbVar17 = *pbVar17 + bVar9;
            uVar26 = (undefined3)((uint)pbVar15 >> 8);
            bVar42 = (char)pbVar15 + CARRY1(bVar42,bVar9);
            pcVar12 = (char *)CONCAT31(uVar26,bVar42);
            *(byte *)puVar37 = (byte)*puVar37 + bVar7;
            if ((POPCOUNT((byte)*puVar37) & 1U) == 0) {
              in_SS = in_DS;
            }
            puVar47 = (uint *)((int)puVar46 + *(int *)(unaff_EBP + 0x17));
            *pcVar12 = *pcVar12 + bVar42;
            cVar8 = bVar42 + 2;
            puVar21 = (uint *)CONCAT31(uVar26,cVar8);
            if (bVar42 < 0xfe) {
              *puVar21 = (uint)(*puVar21 + (int)puVar21);
              goto code_r0x00402a8f;
            }
            *(byte *)puVar21 = (byte)*puVar21 + cVar8;
            uVar19 = *puVar37;
            puVar45 = (uint *)((int)puVar44 + puVar40[0x19]);
            *(byte *)puVar21 = (byte)*puVar21 + cVar8;
            puVar16 = (uint *)CONCAT22(uVar32,CONCAT11(bVar11 + bVar34 | (byte)*puVar21,
                                                       bVar7 | (byte)uVar19));
            puVar46 = puVar47;
            goto code_r0x00402a36;
          }
        } while( true );
      }
    }
    unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar42;
    pbVar17 = (byte *)((int)puVar21 + 0x73);
    bVar51 = CARRY1(*pbVar17,bVar7);
    *pbVar17 = *pbVar17 + bVar7;
  } while( true );
code_r0x00402992:
  pbVar17 = (byte *)((int)puVar21 + 0x2a);
  bVar51 = CARRY1(*pbVar17,bVar9);
  *pbVar17 = *pbVar17 + bVar9;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar21) = *(byte *)(in_GS_OFFSET + (int)puVar21) + (char)puVar21;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                             CONCAT11((byte)((uint)puVar16 >> 8) | *(byte *)((int)puVar46 + 0x66),
                                      (char)puVar16));
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x00402a3e:
  uVar26 = (undefined3)((uint)puVar21 >> 8);
  bVar42 = (byte)puVar21 | (byte)*puVar45;
  pcVar12 = (char *)CONCAT31(uVar26,bVar42);
  if ((char)bVar42 < '\0') {
    *pcVar12 = *pcVar12 + bVar42;
    cVar8 = bVar42 + 2;
    piVar24 = (int *)CONCAT31(uVar26,cVar8);
    if ((POPCOUNT(cVar8) & 1U) == 0) {
      *(char *)piVar24 = (char)*piVar24 + cVar8;
      bVar42 = bVar42 + 0x71;
      pcVar18 = (char *)CONCAT31(uVar26,bVar42);
      pcVar12 = (char *)segment(uVar50,(short)puVar40 + (short)puVar45);
      *pcVar12 = *pcVar12 + bVar42;
      uVar19 = puVar46[0x1a];
      *pcVar18 = *pcVar18 + bVar42;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                 CONCAT11((byte)((uint)puVar16 >> 8) | (byte)uVar19 |
                                          *(byte *)((int)puVar46 + 0x69),(char)puVar16));
      *pcVar18 = *pcVar18 + bVar42;
      bVar42 = bVar42 | (byte)*puVar37;
      pcVar12 = (char *)CONCAT31(uVar26,bVar42);
      if ((POPCOUNT(bVar42) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    puVar44 = puVar45 + (uint)bVar52 * -2 + 1;
    out(*puVar45,(short)puVar37);
  }
  else {
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar40[6],(char)puVar40)
                              );
code_r0x00402a5d:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    piVar24 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + 'o');
    puVar44 = puVar45;
  }
code_r0x00402a61:
  pcVar12 = (char *)segment(uVar50,(short)puVar40 + (short)puVar44);
  *pcVar12 = *pcVar12 + (char)piVar24;
  cVar8 = (char)puVar16;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                             CONCAT11((byte)((uint)puVar16 >> 8) | (byte)puVar46[0x1a],cVar8));
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  uVar32 = CONCAT11((byte)((uint)puVar37 >> 8) | *(byte *)((int)puVar37 + 0x65),(char)puVar37);
  puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar32);
  piVar22 = (int *)((int)piVar24 + *piVar24);
  puVar45 = puVar44;
  puVar47 = puVar46;
  uVar49 = in_DS;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402ae3;
  *(byte *)puVar37 = (byte)*puVar37 + cVar8;
  puVar45 = puVar44 + (uint)bVar52 * -2 + 1;
  out(*puVar44,uVar32);
code_r0x00402a75:
  bVar42 = (byte)((uint)puVar16 >> 8) | (byte)*puVar37;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar42,(char)puVar16));
  piVar24 = (int *)(uint)(byte)*puVar40;
  *(byte *)puVar45 = (byte)*puVar45 - bVar42;
  puVar47 = puVar46;
code_r0x00402a7f:
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  out(*puVar45,(short)puVar37);
  bVar42 = in((short)puVar37);
  *(byte *)puVar47 = bVar42;
  *(char *)piVar24 = (char)*piVar24 + (char)piVar24;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                             CONCAT11((byte)((uint)puVar16 >> 8) | (byte)*puVar37,(char)puVar16));
  iVar13 = *piVar24;
  cVar8 = in(1);
  puVar21 = (uint *)CONCAT31((int3)((uint)((int)piVar24 + *piVar24) >> 8),cVar8);
  *(char *)puVar21 = (char)*puVar21 + cVar8;
  puVar21 = (uint *)((uint)puVar21 | *puVar21);
  *(byte *)puVar16 = (byte)*puVar16 + (char)puVar37;
  puVar45 = (uint *)((int)puVar45 + (((uint)bVar52 * -8 + 4) - iVar13));
  puVar47 = (uint *)((int)puVar47 + (uint)bVar52 * -2 + 1);
  in_SS = in_DS;
  while( true ) {
    bVar42 = (byte)puVar21 | (byte)*puVar37;
    puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),bVar42);
    puVar46 = puVar47;
    if ((POPCOUNT(bVar42) & 1U) != 0) break;
    *(byte *)puVar21 = (byte)*puVar21 + bVar42;
code_r0x00402a9b:
    uVar26 = (undefined3)((uint)puVar21 >> 8);
    cVar8 = (char)puVar21 + '\r';
    piVar22 = (int *)CONCAT31(uVar26,cVar8);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    *(byte *)(puVar45 + -0xc800000) = (byte)puVar45[-0xc800000] + (char)puVar37;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    *(byte *)puVar37 = (byte)*puVar37 + cVar8;
    cVar41 = (char)puVar16;
    if ((POPCOUNT((byte)*puVar37) & 1U) != 0) {
      *(byte *)puVar37 = (byte)*puVar37 + cVar41;
      puVar44 = puVar45 + (uint)bVar52 * -2 + 1;
      out(*puVar45,(short)puVar37);
      piVar24 = (int *)((longlong)*piVar22 * 0x7b020a00);
      *(char *)piVar24 =
           (char)*piVar24 - ((longlong)(int)piVar24 != (longlong)*piVar22 * 0x7b020a00);
      pbVar17 = (byte *)((int)puVar46 + (int)unaff_EBP * 2);
      *pbVar17 = *pbVar17;
      goto code_r0x00402a61;
    }
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    puVar21 = (uint *)CONCAT31(uVar26,(char)puVar21 + ':');
    puVar44 = (uint *)((uint)puVar45 | *(uint *)((int)puVar37 + -0x79));
    iVar13 = (int)puVar21 + *puVar21;
    if (SCARRY4((int)puVar21,*puVar21)) {
      puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((char)((uint)puVar40 >> 8) + (byte)puVar44[(int)puVar40],
                                          (char)puVar40));
      *(char *)((int)puVar37 * 2) = *(char *)((int)puVar37 * 2) + (char)iVar13;
      puVar47 = puVar46;
      goto code_r0x00402b33;
    }
    uVar26 = (undefined3)((uint)iVar13 >> 8);
    cVar8 = (char)iVar13 + CARRY4((uint)puVar21,*puVar21);
    piVar24 = (int *)CONCAT31(uVar26,cVar8);
    *(byte *)puVar37 = (byte)*puVar37 + cVar41;
    bVar51 = (POPCOUNT((byte)*puVar37) & 1U) != 0;
    if ((bVar51) && (bVar51)) goto code_r0x00402a61;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    cVar43 = cVar8 + '(';
    pcVar12 = (char *)CONCAT31(uVar26,cVar43);
    puVar47 = puVar46 + (uint)bVar52 * -2 + 1;
    uVar19 = in((short)puVar37);
    *puVar46 = uVar19;
    *pcVar12 = *pcVar12 + cVar43;
    puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                               CONCAT11((byte)((uint)puVar16 >> 8) | bRama07b0222,cVar41));
    *pcVar12 = *pcVar12 + cVar43;
    pcVar12 = (char *)CONCAT31(uVar26,cVar8 + '>');
code_r0x00402ad2:
    out(*puVar44,(short)puVar37);
    puVar45 = (uint *)((int)(puVar44 + (uint)bVar52 * -2 + 1) + (uint)bVar52 * -2 + 1);
    out((byte)puVar44[(uint)bVar52 * -2 + 1],(short)puVar37);
    bVar42 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar42;
    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | (byte)*puVar47);
    in_AF = 9 < (bVar42 & 0xf) | in_AF;
    uVar26 = (undefined3)((uint)pcVar12 >> 8);
    bVar42 = bVar42 + in_AF * -6;
    puVar37 = (uint *)((uint)puVar37 ^ *puVar37);
    cVar8 = bVar42 + (0x9f < bVar42 | in_AF * (bVar42 < 6)) * -0x60 + (byte)*puVar37;
    piVar24 = (int *)CONCAT31(uVar26,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar24 = (char)*piVar24 + cVar8;
    piVar22 = (int *)CONCAT31(uVar26,cVar8 + '\x17');
    uVar49 = in_DS;
code_r0x00402ae3:
    out(*puVar45,(short)puVar37);
    puVar44 = puVar45 + (uint)bVar52 * -2 + 1 + (uint)bVar52 * -2 + 1;
    out(puVar45[(uint)bVar52 * -2 + 1],(short)puVar37);
    *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
code_r0x00402ae7:
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11((byte)((uint)puVar40 >> 8) | unaff_EBP[-0x60],(char)puVar40)
                              );
    cVar8 = (char)piVar22;
    *(char *)piVar22 = (char)*piVar22 + cVar8;
    uVar26 = (undefined3)((uint)piVar22 >> 8);
    bVar42 = cVar8 + 2;
    puVar21 = (uint *)CONCAT31(uVar26,bVar42);
    in_DS = uVar49;
    if ((POPCOUNT(bVar42) & 1U) == 0) {
      *(byte *)puVar21 = (byte)*puVar21 + bVar42;
      cVar8 = cVar8 + '}';
      puVar21 = (uint *)CONCAT31(uVar26,cVar8);
      *(byte *)puVar21 = ((byte)*puVar21 - cVar8) - (0x84 < bVar42);
      pbVar17 = (byte *)((int)puVar37 + (int)puVar21);
      *pbVar17 = *pbVar17 + cVar8;
      bVar42 = POPCOUNT(*pbVar17);
      puVar45 = puVar44;
code_r0x00402af9:
      in_DS = uVar49;
      puVar46 = puVar47;
      if ((bVar42 & 1) == 0) {
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        bVar42 = (byte)puVar16;
        *(byte *)puVar37 = (byte)*puVar37 + bVar42;
        uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_SS);
        puVar44 = puVar45 + (uint)bVar52 * -2 + 1;
        out(*puVar45,(short)puVar37);
        uVar19 = *puVar37;
        *(byte *)puVar37 = (byte)*puVar37 + bVar42;
        iVar13 = CONCAT31((int3)((uint)puVar21 >> 8),(char)puVar21 + 'o') +
                 *(int *)((int)puVar37 * 2) + (uint)CARRY1((byte)uVar19,bVar42);
        pcVar12 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '(');
        while( true ) {
          uVar19 = *puVar37;
          bVar7 = (byte)puVar16;
          *(byte *)puVar37 = (byte)*puVar37 + bVar7;
          pcVar12 = pcVar12 + (uint)CARRY1((byte)uVar19,bVar7) + iRam73280512;
          bVar42 = (byte)pcVar12;
          *pcVar12 = *pcVar12 + bVar42;
          puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                     CONCAT11((byte)((uint)puVar16 >> 8) | bRam7d160243,bVar7));
          bVar52 = ((uint)uStackY_30 & 0x400) != 0;
          in_AF = ((uint)uStackY_30 & 0x10) != 0;
          *pcVar12 = *pcVar12 + bVar42;
          uVar26 = (undefined3)((uint)pcVar12 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar26,bVar42 + 2) + (uint)(0xfd < bVar42);
          cVar8 = bVar42 + 4;
          if (SCARRY1(bVar42 + 2,'\x02') != cVar8 < '\0') break;
          *(char *)CONCAT31(uVar26,cVar8) = *(char *)CONCAT31(uVar26,cVar8) + cVar8;
          iVar13 = CONCAT31(uVar26,bVar42 + 0x16);
code_r0x00402b33:
          piVar22 = (int *)(iVar13 + 0xe2802);
          *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)puVar16 >> 8);
          uVar49 = in_DS;
          in_DS = in_SS;
          while( true ) {
            bVar7 = (byte)puVar40 | (byte)((uint)puVar16 >> 8);
            puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),bVar7);
            *piVar22 = (int)(*piVar22 + (int)piVar22);
            cVar8 = (char)piVar22;
            *(byte *)puVar37 = (byte)*puVar37 + cVar8;
            if ((POPCOUNT((byte)*puVar37) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar22 = (char)*piVar22 + cVar8;
            uVar19 = CONCAT31((int3)((uint)piVar22 >> 8),cVar8 + '\x13');
            puVar21 = (uint *)(uVar19 + 0x19061224 + (uint)(0x1f9edfd < uVar19));
            uVar20 = (uint)(0xe4ffffdd < uVar19 + 0xfe061202 ||
                           CARRY4(uVar19 + 0x19061224,(uint)(0x1f9edfd < uVar19)));
            uVar19 = *puVar44;
            uVar14 = *puVar44;
            *puVar44 = (uint)((byte *)(uVar14 + (int)puVar21) + uVar20);
            bVar42 = POPCOUNT(*puVar44 & 0xff);
            puVar45 = puVar44;
            if ((SCARRY4(uVar19,(int)puVar21) != SCARRY4((int)(uVar14 + (int)puVar21),uVar20)) ==
                (int)*puVar44 < 0) goto code_r0x00402af9;
            bVar42 = (byte)puVar21;
            *(byte *)puVar21 = (byte)*puVar21 + bVar42;
            iVar13 = CONCAT31((int3)((uint)puVar21 >> 8),bVar42 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar42);
            bVar42 = (byte)puVar37 | (byte)*puVar37;
            uVar19 = *puVar40;
            *(byte *)puVar40 = (byte)*puVar40 + bVar7;
            pcVar12 = (char *)(CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x12') + 0x228b26
                               + *puVar47 + (uint)CARRY1((byte)uVar19,bVar7));
            cVar8 = bVar42 + (byte)*puVar16;
            puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),cVar8);
            if (SCARRY1(bVar42,(byte)*puVar16) == cVar8 < '\0') break;
            *pcVar12 = *pcVar12 + (char)pcVar12;
            cVar8 = (char)pcVar12 + '\x02';
            pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8);
            bVar42 = POPCOUNT(cVar8);
            uVar49 = in_DS;
code_r0x00402b7a:
            puVar46 = puVar44;
            if ((bVar42 & 1) != 0) break;
            while( true ) {
              cVar8 = (char)pcVar12;
              *pcVar12 = *pcVar12 + cVar8;
              uVar26 = (undefined3)((uint)pcVar12 >> 8);
              pcVar12 = (char *)CONCAT31(uVar26,cVar8 + '\x13');
              *(byte *)puVar16 = (byte)*puVar16 | (byte)puVar37;
              *(byte *)puVar47 = (byte)*puVar47 | (byte)puVar37;
              *puVar37 = (uint)(pcVar12 + *puVar37);
              uVar32 = (undefined2)((uint)puVar40 >> 0x10);
              uVar39 = SUB41(puVar40,0);
              cVar41 = (char)((uint)puVar40 >> 8) + *(byte *)((int)puVar40 + -0x5f);
              puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar41,uVar39));
              *pcVar12 = *pcVar12 + cVar8 + '\x13';
              piVar22 = (int *)CONCAT31(uVar26,cVar8 + -0x7a);
              uVar19 = *puVar37;
              *(byte *)puVar37 = (byte)*puVar37 + (char)puVar16;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar19,(char)puVar16) == (char)(byte)*puVar37 < '\0') break;
              *(char *)piVar22 = (char)*piVar22 + cVar8 + -0x7a;
              cVar43 = cVar8 + -0x78;
              piVar22 = (int *)CONCAT31(uVar26,cVar43);
              uVar4 = uVar49;
              if ((POPCOUNT(cVar43) & 1U) != 0) break;
              *(char *)piVar22 = (char)*piVar22 + cVar43;
              pcVar12 = (char *)CONCAT31(uVar26,cVar8 + -0x65);
              *puVar16 = *puVar16 | (uint)puVar37;
              *puVar47 = *puVar47 | (uint)puVar37;
              pbVar17 = (byte *)((int)puVar16 + -1);
              cVar41 = cVar41 + *(byte *)((int)puVar40 + -0x5e);
              puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar41,uVar39));
              *pcVar12 = *pcVar12 + cVar8 + -0x65;
              bVar42 = cVar8 + 10;
              puVar21 = (uint *)CONCAT31(uVar26,bVar42);
              bVar7 = (byte)pbVar17;
              *(byte *)puVar37 = (byte)*puVar37 + bVar7;
              puVar44 = puVar46 + (uint)bVar52 * -2 + 1;
              out(*puVar46,(short)puVar37);
              uVar19 = *puVar37;
              *(byte *)puVar37 = (byte)*puVar37 + bVar7;
              uVar1 = (uint)CARRY1((byte)uVar19,bVar7);
              uVar14 = *puVar37;
              uVar19 = *puVar37;
              pbVar15 = pbVar17 + uVar19 + uVar1;
              uVar6 = *puVar37;
              cRam130a0000 = cRam130a0000 - cVar41;
              uVar20 = *puVar37;
              unaff_EBP = (byte *)((uint)unaff_EBP | *puVar21);
              *(byte *)puVar21 = (char)*puVar21 + bVar42;
              puVar16 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                  (char)pbVar15 + (byte)uVar6 +
                                                  (CARRY4((uint)pbVar17,uVar14) ||
                                                  CARRY4((uint)(pbVar17 + uVar19),uVar1))));
              bVar52 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar21 = (char)*puVar21 + bVar42;
              bVar51 = 0xfd < bVar42;
              pcVar12 = (char *)CONCAT31(uVar26,cVar8 + '\f');
              puVar37 = (uint *)((uint)puVar37 | uVar20);
code_r0x00402bd1:
              uVar14 = *puVar40;
              uVar19 = *puVar40;
              *puVar40 = (uint)((byte *)(uVar19 + (int)puVar16) + bVar51);
              bVar42 = POPCOUNT(*puVar40 & 0xff);
              uVar49 = in_SS;
              if ((SCARRY4(uVar14,(int)puVar16) !=
                  SCARRY4((int)(uVar19 + (int)puVar16),(uint)bVar51)) == (int)*puVar40 < 0)
              goto code_r0x00402b7a;
              cVar8 = (char)pcVar12;
              *pcVar12 = *pcVar12 + cVar8;
              pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8 + '\x02');
              if (SCARRY1(cVar8,'\x02') == (char)(cVar8 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar12 = *pcVar12 + (char)pcVar12;
                pcVar12 = (char *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '\x12') |
                                  *puVar37);
                *(byte *)puVar47 = (byte)*puVar47 - (char)puVar16;
                *pcVar12 = *pcVar12 + (char)pcVar12;
                puVar37 = (uint *)((int)puVar37 - *puVar44);
                bVar42 = (byte)puVar40 | (byte)((uint)puVar16 >> 8);
                cVar8 = *pcVar12;
                uVar26 = (undefined3)((uint)pcVar12 >> 8);
                pcVar12 = (char *)CONCAT31(uVar26,cVar8);
                *pcVar12 = *pcVar12 + cVar8;
                pcVar18 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                           CONCAT11((char)((uint)puVar40 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),
                                                                       bVar42) + -0x5b),bVar42));
                *pcVar12 = *pcVar12 + cVar8;
                bVar51 = false;
                pcVar12 = (char *)(CONCAT31(uVar26,cVar8 + '\x13') | *puVar37);
                do {
                  bVar7 = (byte)puVar16;
                  bVar42 = bVar7 + (byte)puVar44[(int)puVar47 * 2];
                  puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar42 + bVar51);
                  uVar19 = (uint)(CARRY1(bVar7,(byte)puVar44[(int)puVar47 * 2]) ||
                                 CARRY1(bVar42,bVar51));
                  pcVar23 = pcVar12 + 0x1b000019 + uVar19;
                  piVar24 = (int *)((int)puVar47 * 2 + 0x40000a5);
                  *piVar24 = (int)((int)puVar16 +
                                  (uint)((char *)0xe4ffffe6 < pcVar12 ||
                                        CARRY4((uint)(pcVar12 + 0x1b000019),uVar19)) + *piVar24);
                  puVar37 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),(char)puVar37 + cRam00009d7d
                                            );
                  uVar26 = (undefined3)((uint)pcVar23 >> 8);
                  bVar42 = (char)pcVar23 + 0x12;
                  in_AF = 9 < (bVar42 & 0xf) | in_AF;
                  uVar19 = CONCAT31(uVar26,bVar42 + in_AF * -6) & 0xffffff0f;
                  pcVar12 = (char *)CONCAT22((short)(uVar19 >> 0x10),
                                             CONCAT11((char)((uint)pcVar23 >> 8) - in_AF,
                                                      (char)uVar19));
                  pbVar17 = (byte *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar26,bVar42));
                  while( true ) {
                    *pcVar12 = *pcVar12 + (char)pcVar12;
                    puVar46 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),
                                               (byte)puVar37 | (byte)*puVar37);
                    puVar47 = (uint *)((uint)puVar47 | (uint)puVar44);
                    uVar19 = (uint)pcVar18 | (uint)puVar44;
                    unaff_EBP = pbVar17 + 1;
                    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,in_DS);
                    cVar41 = (char)(pcVar12 + 0x1b000019);
                    uVar26 = (undefined3)((uint)(pcVar12 + 0x1b000019) >> 8);
                    cVar8 = cVar41 + -0x13;
                    pcVar12 = (char *)CONCAT31(uVar26,cVar8);
                    uVar32 = (undefined2)(uVar19 >> 0x10);
                    cVar43 = (char)(uVar19 >> 8) + *(char *)(uVar19 - 0x5e);
                    puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar43,(byte)uVar19));
                    *pcVar12 = *pcVar12 + cVar8;
                    pcVar12 = (char *)(CONCAT31(uVar26,cVar41 + '\x19') | *puVar46);
                    bVar42 = (byte)pcVar12;
                    if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) != 0) {
                      pbVar17 = (byte *)((int)puVar46 + (int)pcVar12);
                      bVar51 = CARRY1(*pbVar17,bVar42);
                      *pbVar17 = *pbVar17 + bVar42;
                      puVar37 = puVar46;
                      goto code_r0x00402bd1;
                    }
                    *pcVar12 = *pcVar12 + bVar42;
                    uVar26 = (undefined3)((uint)pcVar12 >> 8);
                    pcVar18 = (char *)CONCAT31(uVar26,bVar42 + 0x6f);
                    puVar37 = (uint *)((int)puVar46 + 1);
                    *pcVar18 = *pcVar18 + bVar42 + 0x6f;
                    bVar7 = (byte)uVar19 | (byte)((uint)pcVar12 >> 8);
                    pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x5c);
                    cVar43 = cVar43 + *(char *)(CONCAT31((int3)((uint)puVar40 >> 8),bVar7) + -0x5f);
                    puVar40 = (uint *)CONCAT22(uVar32,CONCAT11(cVar43,bVar7));
                    *pcVar12 = *pcVar12 + bVar42 + 0x5c;
                    pcVar12 = (char *)(CONCAT31(uVar26,bVar42 + 0x88) | *puVar37);
                    if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) != 0) {
                      *(byte *)puVar40 = (byte)*puVar40 + (char)((uint)puVar16 >> 8);
                      uStackY_30 = (uint *)((uint)uStackY_30._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar12 = *pcVar12 + (char)pcVar12;
                    uVar26 = (undefined3)((uint)pcVar12 >> 8);
                    cVar8 = (char)pcVar12 + 'o';
                    puVar37 = (uint *)((int)puVar46 + 2);
                    *(char *)CONCAT31(uVar26,cVar8) = *(char *)CONCAT31(uVar26,cVar8) + cVar8;
                    pcVar18 = (char *)CONCAT31((int3)((uint)puVar40 >> 8),
                                               bVar7 | (byte)((uint)pcVar12 >> 8));
                    pcVar12 = (char *)(CONCAT31(uVar26,cVar8) | 2);
                    pbVar17[-0x62] = pbVar17[-0x62] + 1;
                    bVar42 = (byte)pcVar12;
                    *pcVar12 = *pcVar12 + bVar42;
                    bVar51 = 0xfd < bVar42;
                    cVar8 = bVar42 + 2;
                    pcVar12 = (char *)CONCAT31(uVar26,cVar8);
                    uVar50 = in_DS;
                    if (SCARRY1(bVar42,'\x02') != cVar8 < '\0') break;
                    *pcVar12 = *pcVar12 + cVar8;
                    bVar7 = bVar42 + 10;
                    pcVar12 = (char *)CONCAT31(uVar26,bVar7);
                    *pcVar12 = *pcVar12 - cVar43;
                    cVar41 = (char)puVar16;
                    *(byte *)puVar37 = *(byte *)puVar37 + cVar41;
                    pbVar17[-0x62] = pbVar17[-0x62] + 1;
                    *pcVar12 = *pcVar12 + bVar7;
                    cVar8 = bVar42 + 0xc;
                    pcVar12 = (char *)CONCAT31(uVar26,cVar8);
                    if (SCARRY1(bVar7,'\x02') == cVar8 < '\0') {
                      *pcVar12 = *pcVar12 + cVar8;
                      *(byte *)puVar16 = (byte)*puVar16 - cVar43;
                      *(byte *)puVar37 = *(byte *)puVar37 + cVar41;
                      cVar8 = (bVar42 + 0x13) - (byte)puVar16[0x13];
                      pcVar12 = (char *)CONCAT31(uVar26,cVar8);
                      *pcVar12 = *pcVar12 + cVar8;
                      pcVar23 = (char *)CONCAT31(uVar26,cVar8 + *pcVar12);
                      *pcVar23 = *pcVar23 + cVar8 + *pcVar12;
                      pcVar23 = pcVar23 + *puVar16;
                      *pcVar23 = *pcVar23 + (char)pcVar23;
                      LOCK();
                      pcVar12 = *(char **)pcVar23;
                      *(char **)pcVar23 = pcVar23;
                      UNLOCK();
                      *pcVar12 = *pcVar12 + (char)pcVar12;
                      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)*puVar16);
                      *pbVar15 = *pbVar15 + (byte)*puVar16;
                      goto code_r0x00402c8d;
                    }
                    puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),
                                               cVar41 + *pcVar18 + (0xfd < bVar7));
                    *(byte *)puVar47 = (byte)*puVar47 - cVar43;
                    pbVar17 = unaff_EBP;
                  }
                } while( true );
              }
              puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                         CONCAT11((char)((uint)puVar40 >> 8) +
                                                  *(byte *)((int)puVar40 + -99),(char)puVar40));
              puVar46 = puVar44;
            }
            *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
            puVar37 = (uint *)((int)puVar37 - *puVar46);
            puVar44 = puVar46;
            uVar49 = in_DS;
            in_DS = uVar4;
          }
          *(byte *)puVar37 = (byte)*puVar37 + (char)puVar16;
          pcVar12 = pcVar12 + -0x7d160243;
        }
        pcVar12 = (char *)CONCAT31(uVar26,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar16;
    uVar19 = *puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + (byte)puVar21;
    *puVar47 = (uint)((int)puVar37 + (uint)CARRY1((byte)uVar19,(byte)puVar21) + *puVar47);
    puVar45 = puVar44;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar10 = (char)puVar16;
      cVar30 = (char)((uint)puVar16 >> 8) + (char)((uint)pbVar15 >> 8);
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(cVar30,cVar10));
      cVar8 = (char)pbVar15;
      *pbVar15 = *pbVar15 + cVar8;
      pcVar12 = (char *)((int)pbVar15 * 2 + 0x1a10000);
      cVar43 = (char)((uint)pcVar18 >> 8);
      *pcVar12 = *pcVar12 + cVar43;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      pbVar15[-0x47ffffff] = pbVar15[-0x47ffffff] + cVar43;
      *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      bVar7 = (byte)puVar37;
      *(byte *)puVar47 = (byte)*puVar47 + bVar7;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + bVar7;
      *pbVar15 = *pbVar15 + cVar8;
      *puVar44 = (uint)(*puVar44 + (int)puVar44);
      uVar32 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar43 = cVar43 + (byte)puVar44[(int)pcVar18];
      pcVar12 = (char *)CONCAT22(uVar32,CONCAT11(cVar43,(char)pcVar18));
      pcVar12[(int)pbVar15] = pcVar12[(int)pbVar15] + cVar8;
      *(byte *)puVar37 = *(byte *)puVar37 - cVar43;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar10;
      uVar26 = (undefined3)((uint)pbVar15 >> 8);
      bVar42 = cVar8 - *pbVar15;
      *pcVar12 = *pcVar12 + bVar7;
      *(byte *)puVar37 = *(byte *)puVar37 ^ bVar42;
      *(byte *)puVar37 = *(byte *)puVar37 + bVar42;
      *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
      uVar19 = *puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + bVar7;
      cVar41 = bVar42 + *(char *)CONCAT31(uVar26,bVar42) + CARRY1((byte)uVar19,bVar7);
      pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(cVar43 + pbVar17[-0x60],(char)pcVar18));
      *(char *)CONCAT31(uVar26,cVar41) = *(char *)CONCAT31(uVar26,cVar41) + cVar41;
      cVar43 = cVar41 + '\x12';
      pbVar15 = (byte *)CONCAT31(uVar26,cVar43);
      cVar8 = *pcVar18;
      *pcVar18 = *pcVar18 + cVar43;
      if (SCARRY1(cVar8,cVar43) != *pcVar18 < '\0') break;
code_r0x00402c8d:
      cVar8 = (char)pbVar15;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
      *(byte *)puVar37 = *(byte *)puVar37 + cVar8;
      *pbVar15 = *pbVar15 + cVar8;
    }
    *pbVar15 = *pbVar15 + cVar43;
    pbVar15 = (byte *)CONCAT31(uVar26,cVar41 + '$');
    *pbVar15 = *pbVar15 + cVar30;
    bVar42 = *(byte *)puVar37;
    *(byte *)puVar37 = *(byte *)puVar37 + cVar10;
    uVar49 = uVar48;
  } while (SCARRY1(bVar42,cVar10) == (char)*(byte *)puVar37 < '\0');
  do {
    cVar8 = (char)pbVar15;
    *pbVar15 = *pbVar15 + cVar8;
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar37;
    bVar7 = cVar8 + 0x24;
    cVar43 = (char)((uint)pcVar18 >> 8);
    pcVar18[-0x62] = pcVar18[-0x62] + cVar43;
    *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
    bVar42 = cVar8 + 0x2fU + (byte)*puVar16;
    cVar41 = bVar42 + (0xf4 < bVar7);
    cVar8 = cVar41 + *(char *)CONCAT31(uVar26,cVar41) +
            (CARRY1(cVar8 + 0x2fU,(byte)*puVar16) || CARRY1(bVar42,0xf4 < bVar7));
    pcVar12 = (char *)CONCAT31(uVar26,cVar8);
    *pcVar12 = *pcVar12 - (char)puVar37;
    *pcVar12 = *pcVar12 + cVar8;
    pcVar23 = (char *)((int)puVar37 - *puVar37);
    *(byte *)(puVar44 + (int)pcVar18) = (byte)puVar44[(int)pcVar18] + cVar43;
    pcVar12[(int)unaff_EBP] = pcVar12[(int)unaff_EBP] + cVar8;
    *pcVar23 = *pcVar23 + (char)puVar16;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) - *pcVar23,cVar8));
    uVar19 = *puVar47;
    *pcVar12 = *pcVar12 - (char)((uint)pcVar23 >> 8);
    *pcVar12 = *pcVar12 + cVar8;
    uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar50);
    pbVar17 = (byte *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                               CONCAT11(cVar43 - (byte)*puVar44,(char)pcVar18));
    unaff_EBP = unaff_EBP + *(int *)(pbVar17 + (int)puVar16);
    puVar46 = (uint *)CONCAT31((int3)((uint)pcVar23 >> 8),(char)pcVar23 + (byte)uVar19);
    while( true ) {
      puVar37 = puVar46;
      uVar32 = (undefined2)((uint)pbVar17 >> 0x10);
      bVar34 = (char)((uint)pbVar17 >> 8) + pbVar17[0x18];
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + 'o');
      cVar8 = (char)puVar16;
      *(byte *)puVar37 = (byte)*puVar37 + cVar8;
      uVar19 = *puVar44;
      bVar9 = (byte)((uint)puVar16 >> 8);
      bVar42 = *pbVar15;
      pbVar15 = pbVar15 + (uint)CARRY1(bVar9,*pbVar15) + *(int *)pbVar15;
      *(byte *)puVar37 = (byte)*puVar37 + cVar8;
      cVar41 = ((char)pbVar17 - (byte)uVar19) - (byte)*puVar44;
      bVar7 = *(byte *)((int)puVar47 + 0x1a);
      *pbVar15 = *pbVar15 + (char)pbVar15;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                 CONCAT11(bVar9 + bVar42 + bVar7 | (byte)*puVar37,cVar8));
      pbVar15 = pbVar15 + *puVar37;
      if ((POPCOUNT((uint)pbVar15 & 0xff) & 1U) != 0) break;
      *pbVar15 = *pbVar15 + (char)pbVar15;
      bVar42 = (char)pbVar15 + 0x6f;
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar42);
      pcVar18 = (char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar34,(char)pbVar17)) >> 8),
                                  cVar41) + -1);
      *pcVar12 = *pcVar12 + bVar42;
      *pcVar12 = *pcVar12 + bVar42;
      *pcVar18 = *pcVar18 + (byte)puVar37;
      *(byte *)((int)pcVar12 * 2) = *(byte *)((int)pcVar12 * 2) ^ bVar42;
      uVar3 = *(undefined6 *)pcVar12;
      uVar50 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar12 = (char *)uVar3;
      *pcVar12 = *pcVar12 + (char)uVar3;
      *(byte *)puVar44 = (byte)*puVar44 + (char)uVar3;
      pcVar12 = (char *)((uint)pcVar12 | 0x73110008);
      bVar34 = (byte)((uint)pcVar18 >> 8);
      *(byte *)puVar47 = (byte)*puVar47 - bVar34;
      *(byte *)puVar37 = (byte)*puVar37 + cVar8;
      puVar46 = puVar44 + (uint)bVar52 * -2 + 1;
      out(*puVar44,(short)puVar37);
      *pcVar12 = *pcVar12;
      cVar8 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar8;
      bVar42 = unaff_EBP[-0x5a];
      uVar32 = (undefined2)((uint)pcVar18 >> 0x10);
      cVar41 = (char)pcVar18;
      *pcVar12 = *pcVar12 + cVar8;
      cVar8 = cVar8 + '\x02';
      uVar19 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar8);
      puVar16 = (uint *)(uVar19 | 0x73110000);
      puVar44 = puVar46 + (uint)bVar52 * -2 + 1;
      out(*puVar46,(short)puVar37);
      *(byte *)puVar16 = (byte)*puVar16;
      bVar9 = (byte)puVar37 | (byte)*puVar47;
      puVar46 = (uint *)CONCAT31((int3)((uint)puVar37 >> 8),bVar9);
      *(byte *)puVar16 = (byte)*puVar16 + cVar8;
      pcVar12 = (char *)(uVar19 | 0x7b1f1609);
      bVar52 = (uVar49 & 0x400) != 0;
      *(uint *)((int)puVar47 + -0x7d) = *(uint *)((int)puVar47 + -0x7d) | (uint)unaff_EBP;
      bVar7 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar7;
      bVar34 = bVar34 | bVar42 | *(byte *)((int)puVar44 + 0x19);
      pbVar17 = (byte *)CONCAT22(uVar32,CONCAT11(bVar34,cVar41));
      *pcVar12 = *pcVar12 + bVar7;
      uVar26 = (undefined3)((uint)pcVar12 >> 8);
      puVar44[(int)puVar47 * 2] =
           (uint)((int)puVar46 + (uint)(0xd2 < bVar7) + puVar44[(int)puVar47 * 2]);
      bVar42 = bVar7 + 0x2d ^ *(byte *)CONCAT31(uVar26,bVar7 + 0x2d);
      pcVar12 = (char *)CONCAT31(uVar26,bVar42);
      uVar19 = *puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar42;
      uVar49 = uVar50;
      if (CARRY1((byte)uVar19,bVar42)) {
        *pcVar12 = *pcVar12 + bVar42;
        bVar42 = bVar42 | pcVar12[0x4000019];
        pcVar12 = (char *)CONCAT31(uVar26,bVar42);
        if ('\0' < (char)bVar42) {
          *pcVar12 = *pcVar12 + bVar42;
          piVar24 = (int *)CONCAT31(uVar26,bVar42 + 0x28);
          *piVar24 = (int)piVar24 + (uint)(0xd7 < bVar42) + *piVar24;
          bVar11 = (byte)((uint6)uVar3 >> 8);
          *pbVar17 = *pbVar17 + bVar11;
          uVar33 = CONCAT11((byte)((uint)puVar37 >> 8) | bVar34,bVar9);
          puVar46 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),uVar33);
          uStackY_30 = (uint *)CONCAT22(uStackY_30._2_2_,uVar50);
          bVar9 = in(uVar33);
          pbVar15 = (byte *)CONCAT31(uVar26,bVar9);
          bVar42 = *pbVar15;
          bVar51 = SCARRY1(*pbVar15,bVar9);
          *pbVar15 = *pbVar15 + bVar9;
          bVar7 = *pbVar15;
          puVar40 = puVar44;
          in_SS = uVar50;
          if (!CARRY1(bVar42,bVar9)) goto code_r0x00402e19;
          *pbVar15 = *pbVar15 + bVar9;
          bVar11 = bVar11 | *pbVar15;
          puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar11,cVar8));
          pcVar12 = (char *)CONCAT31(uVar26,bVar9 + *pbVar15);
          *pbVar17 = *pbVar17 + bVar11;
        }
        uVar26 = (undefined3)((uint)pcVar12 >> 8);
        bVar7 = (byte)pcVar12 | (byte)*puVar46;
        pbVar15 = (byte *)CONCAT31(uVar26,bVar7);
        puVar40 = puVar44 + (uint)bVar52 * -2 + 1;
        out(*puVar44,(short)puVar46);
        LOCK();
        bVar42 = *pbVar15;
        *pbVar15 = bVar7;
        UNLOCK();
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar16;
        piVar24 = (int *)(CONCAT31(uVar26,bVar42) + -0x1b7e07);
        *(byte *)puVar46 = (byte)*puVar46 + (char)puVar16;
        iVar13 = (int)puVar16 - *(int *)pbVar17;
        bVar42 = *(byte *)((int)puVar47 + -0x7a);
        uVar33 = (undefined2)((uint)iVar13 >> 0x10);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        bVar7 = (char)((uint)iVar13 >> 8) + bVar42 | *(byte *)((int)puVar47 + 0x17);
        *(char *)piVar24 = *(char *)piVar24 + (char)piVar24;
        uVar26 = (undefined3)(CONCAT22(uVar33,CONCAT11(bVar7,(byte)iVar13)) >> 8);
        bVar42 = (byte)iVar13 | *pbVar17;
        puVar16 = (uint *)CONCAT31(uVar26,bVar42);
        pbVar15 = (byte *)((int)piVar24 + *piVar24);
        puVar44 = puVar40;
        if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e0a;
        *(byte *)puVar16 = (byte)*puVar16 + bVar42;
        *(byte **)pbVar17 = (byte *)(*(int *)pbVar17 + (int)puVar46);
        piVar24 = (int *)CONCAT31(uVar26,bVar42 + 0x27);
        puVar16 = (uint *)CONCAT22(uVar33,CONCAT11(bVar7 + *(byte *)((int)puVar47 + -0x79),bVar42));
        *(byte *)piVar24 = (char)*piVar24 + bVar42 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(bVar34 | unaff_EBP[-0x62],cVar41));
  } while( true );
code_r0x00402dff:
  pbVar15 = (byte *)CONCAT22((short)((uint)piVar24 >> 0x10),
                             CONCAT11((byte)((uint)piVar24 >> 8) |
                                      *(byte *)((int)puVar46 + 0x2170411),(byte)piVar24));
  puVar44 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)puVar46);
  *pbVar15 = (byte)piVar24;
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar16;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar15;
  *pbVar15 = *pbVar15 - cVar41;
  *pbVar15 = *pbVar15 + (char)pbVar15;
  bVar51 = false;
  bVar7 = (byte)((uint)puVar16 >> 8) | bRam052b0603;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar7,(char)puVar16));
  puVar40 = puVar44;
code_r0x00402e19:
  if (bVar7 == 0 || bVar51 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cRam89280411;
  piVar24 = (int *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                            CONCAT11((byte)((uint)pbVar15 >> 8) |
                                     *(byte *)((int)puVar46 + 0x7190411),cRam89280411));
  *(char *)piVar24 = (char)*piVar24 + cRam89280411;
  cVar8 = (char)puVar16;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                             CONCAT11((byte)((uint)puVar16 >> 8) | (byte)*puVar46,cVar8));
  puVar40 = (uint *)((int)puVar40 + *piVar24);
  pbVar15 = (byte *)((int)piVar24 + *piVar24);
  bVar7 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar7;
  *(byte *)puVar40 = (byte)*puVar40 + cVar8;
  bVar42 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar7;
  *(byte **)pbVar15 = unaff_EBP + (uint)CARRY1(bVar42,bVar7) + *(int *)pbVar15;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),*pbVar15);
  *(byte *)puVar46 = (byte)*puVar46 + cVar8;
  puVar44 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(byte)puVar46 | (byte)*puVar46);
  pbVar15 = (byte *)((int)puVar44 + -0x43);
  *pbVar15 = *pbVar15 + (char)((uint)puVar46 >> 8);
  puVar46 = puVar44;
  puVar44 = puVar47;
  uVar49 = in_DS;
code_r0x00402e42:
  in_DS = in_SS;
  puVar47 = puVar44;
  in_SS = in_DS;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e6e;
  iVar13 = *(int *)((int)piVar24 + *piVar24);
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar16;
  piVar24 = (int *)(iVar13 + -0x8c6f);
  puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                             CONCAT11((byte)((uint)puVar46 >> 8) | *(byte *)((int)puVar46 + -0x3f),
                                      (char)puVar46));
  pbVar36 = (byte *)((int)piVar24 + *piVar24);
  pbVar15 = pbVar36;
  puVar47 = uStackY_30;
  if (SCARRY4((int)piVar24,*piVar24)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar36 = *pbVar36 + (char)pbVar36;
  puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                             CONCAT11((byte)((uint)puVar16 >> 8) | (byte)*puVar46,(char)puVar16));
  puVar44 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)puVar46);
  puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 + (byte)*puVar47);
  puVar40 = puVar44 + (uint)bVar52 * -2 + 1;
  out(*puVar44,(short)puVar46);
  uVar49 = in_DS;
  in_SS = uVar50;
code_r0x00402e6e:
  in_DS = uVar49;
  uVar26 = (undefined3)((uint)puVar46 >> 8);
  cVar8 = (char)puVar46 + (byte)*puVar47;
  puVar44 = puVar40 + (uint)bVar52 * -2 + 1;
  out(*puVar40,(short)CONCAT31(uVar26,cVar8));
  puVar46 = (uint *)CONCAT31(uVar26,cVar8 + (byte)*puVar47);
  puVar40 = puVar44 + (uint)bVar52 * -2 + 1;
  out(*puVar44,(short)puVar46);
  pbVar15 = (byte *)0x0;
  puVar44 = puVar47;
code_r0x00402e81:
  puVar47 = puVar44;
  bVar7 = (char)pbVar15 - *pbVar15;
  iVar13 = CONCAT31((int3)((uint)pbVar15 >> 8),bVar7);
  *pbVar17 = *pbVar17 + (char)puVar46;
  pbVar36 = (byte *)(iVar13 * 2);
  *pbVar36 = *pbVar36 ^ bVar7;
  pbVar36 = (byte *)(int)(short)iVar13;
  *pbVar36 = *pbVar36 + bVar7;
  *(byte *)puVar47 = (byte)*puVar47 + (byte)puVar16;
  bVar42 = *pbVar36;
  *pbVar36 = *pbVar36 + bVar7;
  *(byte **)(pbVar17 + -0x73) =
       (byte *)((int)puVar40 + (uint)CARRY1(bVar42,bVar7) + *(int *)(pbVar17 + -0x73));
  *pbVar36 = *pbVar36 + bVar7;
  bVar42 = (byte)puVar16 | (byte)*puVar46;
  puVar16 = (uint *)CONCAT31((int3)((uint)puVar16 >> 8),bVar42);
  puVar44 = puVar40;
  if ((char)bVar42 < '\x01') goto code_r0x00402eb4;
  *pbVar36 = *pbVar36 + bVar7;
  pbVar15 = (byte *)CONCAT31((int3)(char)((uint)pbVar15 >> 8),bVar7 + 0x2d);
  puVar40[(int)puVar47 * 2] =
       (uint)((int)puVar46 + (uint)(0xd2 < bVar7) + puVar40[(int)puVar47 * 2]);
  pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar50);
  do {
    uVar19 = *puVar40;
    bVar42 = (byte)pbVar15;
    *(byte *)puVar40 = (byte)*puVar40 + bVar42;
    if (!CARRY1((byte)uVar19,bVar42)) break;
    *pbVar15 = *pbVar15 + bVar42;
    bVar42 = bVar42 | pbVar15[0x400001a];
    pbVar36 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar42);
    if ((char)bVar42 < '\x01') {
code_r0x00402ecc:
      *pbVar36 = *pbVar36 + (byte)pbVar36;
      uVar26 = (undefined3)((uint)pbVar36 >> 8);
      bVar42 = (byte)pbVar36 | pbVar36[0x400001b];
      pcVar12 = (char *)CONCAT31(uVar26,bVar42);
      if ((char)bVar42 < '\x01') {
        uVar19 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar16;
        *(char *)((int)pcVar12 * 2) =
             *(char *)((int)pcVar12 * 2) - CARRY1((byte)uVar19,(byte)puVar16);
        bVar51 = 0x81 < bVar42;
        bVar42 = bVar42 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar36 = *pbVar36 + bVar42;
      puVar44 = puVar40;
code_r0x00402eb4:
      uVar26 = (undefined3)((uint)pbVar36 >> 8);
      bVar42 = (char)pbVar36 + 0x6f;
      pcVar12 = (char *)CONCAT31(uVar26,bVar42);
      *(byte **)pcVar12 = pbStackY_4c;
      uVar19 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + (char)puVar16;
      pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar50);
      uVar48 = uVar50;
      if ((byte)*puVar46 != 0 && SCARRY1((byte)uVar19,(char)puVar16) == (char)(byte)*puVar46 < '\0')
      {
        *pcVar12 = *pcVar12 + bVar42;
        bVar7 = (char)pbVar36 + 0x9c;
        pbVar36 = (byte *)CONCAT31(uVar26,bVar7);
        puVar44[(int)puVar47 * 2] =
             (uint)((int)puVar46 + (uint)(0xd2 < bVar42) + puVar44[(int)puVar47 * 2]);
        pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar50);
        uVar19 = *puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + bVar7;
        puVar40 = puVar44;
        if (CARRY1((byte)uVar19,bVar7)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar40 = puVar44 + (uint)bVar52 * -2 + 1;
      out(*puVar44,(short)puVar46);
    }
    cVar8 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar8;
    uVar26 = (undefined3)((uint)pcVar12 >> 8);
    bVar42 = cVar8 + 0x6f;
    pcVar12 = (char *)CONCAT31(uVar26,bVar42);
    *(byte **)pcVar12 = pbStackY_4c;
    uVar19 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar16;
    pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar50);
    *(byte *)(puVar40 + 7) = ((byte)puVar40[7] - bVar34) - CARRY1((byte)uVar19,(byte)puVar16);
    *pcVar12 = *pcVar12 + bVar42;
    bVar7 = cVar8 + 0x9c;
    pcVar12 = (char *)CONCAT31(uVar26,bVar7);
    puVar40[(int)puVar47 * 2] =
         (uint)((int)puVar46 + (uint)(0xd2 < bVar42) + puVar40[(int)puVar47 * 2]);
    uVar19 = *puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + bVar7;
    if (!CARRY1((byte)uVar19,bVar7)) goto code_r0x00402e7e;
    *pcVar12 = *pcVar12 + bVar7;
    bVar7 = bVar7 | pcVar12[0x400001c];
    pbVar15 = (byte *)CONCAT31(uVar26,bVar7);
    in_SS = uVar50;
    if ((char)bVar7 < '\x01') goto code_r0x00402f16;
    *pbVar15 = *pbVar15 + bVar7;
    pcVar12 = (char *)CONCAT31(uVar26,bVar7 + 0x6f);
    while( true ) {
      *(byte **)pcVar12 = pbStackY_4c;
      uVar19 = *puVar46;
      *(byte *)puVar46 = (byte)*puVar46 + (byte)puVar16;
      *(uint *)((int)puVar40 + 0x1d) =
           (*(int *)((int)puVar40 + 0x1d) - (int)puVar47) - (uint)CARRY1((byte)uVar19,(byte)puVar16)
      ;
      bVar42 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar42;
      bVar7 = bVar42 + 0x2d;
      pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7);
      puVar40[(int)puVar47 * 2] =
           (uint)((int)puVar46 + (uint)(0xd2 < bVar42) + puVar40[(int)puVar47 * 2]);
      pbStackY_4c = (byte *)CONCAT22((short)((uint)pbStackY_4c >> 0x10),uVar50);
      uVar19 = *puVar40;
      *(byte *)puVar40 = (byte)*puVar40 + bVar7;
      if (!CARRY1((byte)uVar19,bVar7)) break;
      *pbVar15 = *pbVar15 + bVar7;
code_r0x00402f16:
      bVar42 = (byte)pbVar15 | pbVar15[0x400001d];
      puVar44 = (uint *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar42);
      pbVar15 = unaff_EBP;
      if ((char)bVar42 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pbVar15;
        *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
        uVar26 = (undefined3)((uint)puVar44 >> 8);
        cVar8 = (char)puVar44 + 'o';
        puVar37 = (uint *)CONCAT31(uVar26,cVar8);
        *puVar37 = (uint)pbStackY_4c;
        cVar43 = (char)puVar16;
        *(byte *)puVar46 = (byte)*puVar46 + cVar43;
        pbStackY_4c = (byte *)CONCAT22(pbStackY_4c._2_2_,uVar50);
        bVar42 = (byte)((uint)puVar46 >> 8);
        bVar51 = bVar42 < (byte)*puVar40;
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                   CONCAT11(bVar42 - (byte)*puVar40,(char)puVar46));
        if (bVar51) break;
        bVar51 = CARRY4((uint)puVar37,*puVar37);
        puVar44 = (uint *)((int)puVar37 + *puVar37);
        if (!SCARRY4((int)puVar37,*puVar37)) {
          bVar51 = CARRY4((uint)unaff_EBP,*puVar44);
          unaff_EBP = unaff_EBP + *puVar44;
        }
        *puVar44 = (*puVar44 - (int)puVar44) - (uint)bVar51;
        *(byte *)puVar46 = (byte)*puVar46 + cVar43;
        puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),
                                   CONCAT11((char)((uint)puVar16 >> 8) + (byte)*puVar46,
                                            cVar43 - (byte)*puVar46));
        *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
code_r0x00402f3b:
        cVar43 = (char)puVar46;
        *pbVar17 = *pbVar17 + cVar43;
        bVar42 = (byte)puVar44;
        *(byte *)((int)puVar44 * 2) = *(byte *)((int)puVar44 * 2) ^ bVar42;
        *(byte *)puVar44 = (byte)*puVar44 + bVar42;
        *(byte *)puVar44 = (byte)*puVar44 + cVar43;
        uVar19 = *puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + bVar42;
        *puVar46 = (uint)((int)puVar44 + (uint)CARRY1((byte)uVar19,bVar42) + *puVar46);
        pcVar12 = (char *)((uint)puVar44 | *puVar47);
        uVar26 = (undefined3)((uint)pcVar12 >> 8);
        cVar8 = (char)pcVar12 + *pcVar12;
        pcVar12 = (char *)CONCAT31(uVar26,cVar8);
        *pcVar12 = *pcVar12 + cVar8;
        cVar8 = cVar8 + *pcVar12;
        piVar24 = (int *)CONCAT31(uVar26,cVar8);
        *(char *)piVar24 = (char)*piVar24 + cVar8;
        iVar13 = LocalDescriptorTableRegister();
        *piVar24 = iVar13;
        bVar42 = *pbVar17;
        bVar31 = (byte)((uint)puVar16 >> 8);
        *pbVar17 = *pbVar17 + bVar31;
        iVar13 = *piVar24;
        uVar33 = (undefined2)((uint)puVar16 >> 0x10);
        bVar11 = (byte)puVar16;
        *(byte *)puVar40 = (byte)*puVar40 + cVar8;
        puVar44 = puVar40 + (uint)bVar52 * -2 + 1;
        out(*puVar40,(short)puVar46);
        *(byte *)puVar44 = (byte)*puVar44 + cVar8;
        bVar7 = *pbVar17;
        *(byte *)puVar46 = (byte)*puVar46 - bVar34;
        *(byte *)puVar44 = (byte)*puVar44 + cVar8;
        puVar37 = puVar44 + (uint)bVar52 * -2 + 1;
        out(*puVar44,(short)puVar46);
        *(byte *)puVar37 = (byte)*puVar37 + cVar8;
        bVar9 = *pbVar17;
        *(uint *)((int)puVar46 + -0x23) = *(uint *)((int)puVar46 + -0x23) & (uint)puVar37;
        puVar25 = (ushort *)((int)piVar24 + *piVar24);
        if (!SCARRY4((int)piVar24,*piVar24)) {
          *puVar25 = uVar48;
        }
        *(char *)puVar25 = (char)*puVar25 + (char)puVar25;
        uVar35 = CONCAT11((char)((uint)puVar46 >> 8) + *(byte *)((int)puVar46 + -0x15),cVar43);
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),uVar35);
        puVar44 = (uint *)((int)puVar25 + *(int *)puVar25);
        if (!SCARRY4((int)puVar25,*(int *)puVar25)) {
          *(ushort *)puVar44 = uVar48;
        }
        cVar8 = (char)puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + cVar8;
        cVar10 = ((bVar31 - (char)iVar13) - CARRY1(bVar42,bVar31) | bVar7 | bVar9) + (byte)*puVar44;
        puVar16 = (uint *)CONCAT22(uVar33,CONCAT11(cVar10,bVar11));
        uVar19 = *puVar46;
        *(byte *)puVar46 = (byte)*puVar46 + bVar11;
        if (CARRY1((byte)uVar19,bVar11)) {
          *(byte *)puVar44 = (byte)*puVar44 + cVar8;
          bVar42 = *(byte *)((int)puVar46 + 6);
          *(byte *)puVar46 = (byte)*puVar46 + bVar11;
          bVar7 = (cVar10 - (byte)*puVar37) + cRam14730307;
          *(byte *)puVar44 = (byte)*puVar44 + cVar8;
          bVar42 = bVar34 | bVar42 | *(byte *)((int)puVar46 + 0x2a);
          uVar19 = *puVar44;
          pbVar17 = (byte *)((int)puVar44 + (uint)CARRY1(bVar7,(byte)*puVar44) + *puVar44);
          *(byte *)puVar46 = (byte)*puVar46 + bVar11;
          cVar8 = cVar41 - (byte)*puVar37;
          cVar41 = bVar42 + *(char *)(CONCAT31((int3)(CONCAT22(uVar32,CONCAT11(bVar42,cVar41)) >> 8)
                                               ,cVar8) + 0x1e);
          *pbVar17 = *pbVar17 + (char)pbVar17;
          uVar26 = (undefined3)((uint)pbVar17 >> 8);
          bVar42 = (char)pbVar17 + 0x2aU & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x2a);
          cVar41 = cVar41 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar41,cVar8)) + 0x1f);
          *pcVar12 = *pcVar12 + bVar42 + 0x2a;
          bVar42 = bVar42 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x2a);
          cVar41 = cVar41 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar41,cVar8)) + 0x20);
          *pcVar12 = *pcVar12 + bVar42 + 0x2a;
          bVar42 = bVar42 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x2a);
          cVar41 = cVar41 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar41,cVar8)) + 0x21);
          *pcVar12 = *pcVar12 + bVar42 + 0x2a;
          bVar42 = bVar42 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x2a);
          cVar41 = cVar41 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar41,cVar8)) + 0x22);
          *pcVar12 = *pcVar12 + bVar42 + 0x2a;
          bVar42 = bVar42 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x2a);
          bVar7 = bVar7 + (byte)uVar19 + *pcVar12;
          uVar29 = CONCAT22(uVar33,CONCAT11(bVar7,bVar11));
          cVar41 = cVar41 + *(char *)(CONCAT22(uVar32,CONCAT11(cVar41,cVar8)) + 0x25);
          *pcVar12 = *pcVar12 + bVar42 + 0x2a;
          bVar42 = bVar42 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x2a);
          pcVar18 = (char *)CONCAT22(uVar32,CONCAT11(cVar41 + *(char *)(CONCAT22(uVar32,CONCAT11(
                                                  cVar41,cVar8)) + 0x26),cVar8));
          *pcVar12 = *pcVar12 + bVar42 + 0x2a;
          bVar42 = bVar42 + 0x54 & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          cVar8 = bVar42 + 0x2a;
          pcVar12 = (char *)CONCAT31(uVar26,cVar8);
          if ((POPCOUNT(cVar8) & 1U) == 0) {
            *pcVar12 = *pcVar12 + cVar8;
            pbVar17 = (byte *)(CONCAT31(uVar26,bVar42 + 0x4f) + -0x33282610);
            bVar42 = *pbVar17;
            bVar9 = (byte)pbVar17;
            *pbVar17 = *pbVar17 + bVar9;
            uVar26 = (undefined3)((uint)pbVar17 >> 8);
            if (!CARRY1(bVar42,bVar9)) {
              if (!SCARRY1(bVar9,'\0')) {
                *pbVar17 = *pbVar17 + bVar9;
                uVar29 = CONCAT22(uVar33,CONCAT11(bVar7 | (byte)*puVar46,bVar11));
                bVar9 = bVar9 & (byte)*puVar46;
                *(char *)CONCAT31(uVar26,bVar9) = *(char *)CONCAT31(uVar26,bVar9) + bVar9;
                pcVar12 = (char *)CONCAT31(uVar26,bVar9 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar12 = (char *)CONCAT31(uVar26,bVar9 + *pcVar18);
              if (SCARRY1(bVar9,*pcVar18) != (char)(bVar9 + *pcVar18) < '\0') goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar42 = bVar9 + *pcVar18;
            pbVar17 = (byte *)CONCAT31(uVar26,bVar42);
            if (SCARRY1(bVar9,*pcVar18) == (char)bVar42 < '\0') {
              pcVar12 = (char *)CONCAT22(uVar33,CONCAT11(bVar7 | (byte)*puVar46,bVar11));
              *pcVar18 = *pcVar18 + cVar43;
              *(byte *)puVar46 = (byte)*puVar46 ^ bVar42;
              *(char *)((int)pbVar17 * 2) = *(char *)((int)pbVar17 * 2) + bVar42;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar12 = *pcVar12 + (char)pcVar12;
            uVar26 = (undefined3)((uint)pcVar12 >> 8);
            bVar42 = (char)pcVar12 + 0x2aU & (byte)*puVar46;
            *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
            pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x2a);
            *pcVar12 = *pcVar12 + bVar42 + 0x2a;
            pcVar12 = (char *)CONCAT31(uVar26,bVar42 + 0x54 & (byte)*puVar46);
code_r0x00403072:
            cVar8 = (char)pcVar12;
            *pcVar12 = *pcVar12 + cVar8;
            uVar26 = (undefined3)((uint)pcVar12 >> 8);
            pcVar12 = (char *)CONCAT31(uVar26,cVar8 + '*');
            *pcVar12 = *pcVar12 + cVar8 + '*';
            bVar42 = cVar8 + 0x54U & (byte)*puVar46;
            *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,in_DS);
            uVar29 = CONCAT22((short)((uint)uVar29 >> 0x10),
                              CONCAT11((char)((uint)uVar29 >> 8) +
                                       *(char *)CONCAT31(uVar26,bVar42 + 0x2a),(char)uVar29));
            *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar43;
            pcVar12 = pcStackY_84;
code_r0x0040309a:
            cVar8 = (char)pcVar12;
            *pcVar12 = *pcVar12 + cVar8;
            pcStackY_84 = (char *)CONCAT22(pcStackY_84._2_2_,uVar50);
            *pcVar12 = *pcVar12 + cVar8;
            pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar8 + 0x2aU & (byte)*puVar46);
          }
          cVar8 = (char)pbVar17;
          *pbVar17 = *pbVar17 + cVar8;
          uVar26 = (undefined3)((uint)pbVar17 >> 8);
          cVar41 = cVar8 + '*';
          pcVar12 = (char *)CONCAT31(uVar26,cVar41);
          *(byte *)(puVar37 + 0x828000) = (byte)puVar37[0x828000] - cVar43;
          *pcVar12 = *pcVar12 + cVar41;
          cVar10 = (char)pcStackY_84 - (byte)*puVar37;
          pcVar18 = (char *)CONCAT22((short)((uint)pcStackY_84 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_84 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_84 >> 8),
                                                                 cVar10) + 0x34),cVar10));
          *pcVar12 = *pcVar12 + cVar41;
          bVar42 = cVar8 + 0x54U & (byte)*puVar46;
          *(char *)CONCAT31(uVar26,bVar42) = *(char *)CONCAT31(uVar26,bVar42) + bVar42;
          pbVar17 = (byte *)CONCAT31(uVar26,bVar42 + 0x2a);
          bVar42 = (byte)((uint)uVar29 >> 8);
          pcVar12 = (char *)CONCAT22((short)((uint)uVar29 >> 0x10),
                                     CONCAT11(bVar42 + *pbVar17,(char)uVar29));
          pbVar17 = pbVar17 + (uint)CARRY1(bVar42,*pbVar17) + *(int *)pbVar17;
          *(byte *)puVar46 = (byte)*puVar46 + (char)uVar29;
          uVar26 = (undefined3)((uint)pbVar17 >> 8);
          cVar8 = (byte)pbVar17 - *pbVar17;
          piVar24 = (int *)CONCAT31(uVar26,cVar8);
          puVar37 = (uint *)((int)puVar37 + (uint)((byte)pbVar17 < *pbVar17) + *piVar24);
          cVar8 = cVar8 + (char)*piVar24;
          pbVar17 = (byte *)CONCAT31(uVar26,cVar8);
          *pbVar17 = *pbVar17 + cVar8;
code_r0x004030df:
          *pcVar12 = *pcVar12 + cVar43;
          bVar42 = *pbVar17;
          bVar7 = (byte)pbVar17;
          *pbVar17 = *pbVar17 + bVar7;
          *(byte **)(pcVar18 + -0x41) =
               (byte *)((int)puVar37 + (uint)CARRY1(bVar42,bVar7) + *(int *)(pcVar18 + -0x41));
          *pbVar17 = *pbVar17 + bVar7;
          uVar26 = (undefined3)((uint)pbVar17 >> 8);
          bVar7 = bVar7 | (byte)*puVar37;
          *(char *)CONCAT31(uVar26,bVar7) = *(char *)CONCAT31(uVar26,bVar7) + bVar7;
          pcVar12 = (char *)CONCAT31(uVar26,bVar7 + 0x7b);
          *pcVar12 = *pcVar12 + bVar7 + 0x7b;
          pbVar17 = (byte *)((int)puVar37 + CONCAT31(uVar26,bVar7 - 8) + -1);
          *pbVar17 = *pbVar17 + (bVar7 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar40 = puVar37 + (uint)bVar52 * -2 + 1;
        out(*puVar37,uVar35);
        pbVar15 = unaff_EBP + 1;
        pbStackY_4c = unaff_EBP;
      }
      bVar42 = cVar8 - bVar51;
      pbVar15 = (byte *)((int)puVar40 + (int)puVar47 * 2);
      bVar51 = CARRY1(*pbVar15,bVar42);
      *pbVar15 = *pbVar15 + bVar42;
code_r0x00402ef9:
      pcVar12 = (char *)CONCAT31(uVar26,bVar42 - bVar51);
      pbVar15 = (byte *)((int)puVar47 + (int)unaff_EBP * 2);
      *pbVar15 = *pbVar15 + (bVar42 - bVar51);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)puVar16 = (byte)*puVar16 + (char)puVar46;
  puVar44 = puVar46 + 0x2828000;
  bVar42 = (byte)puVar16;
  bVar51 = (byte)*puVar44 < bVar42;
  *(byte *)puVar44 = (byte)*puVar44 - bVar42;
  bVar42 = (byte)pbVar15 + *pbVar15;
  piVar24 = (int *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar42 + bVar51);
  puVar44 = puVar47;
  uVar49 = in_DS;
  if (CARRY1((byte)pbVar15,*pbVar15) || CARRY1(bVar42,bVar51)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar12 = *pcVar12 + bVar7;
  uVar49 = in_DS;
  in_SS = uVar50;
  goto code_r0x00402e6e;
code_r0x004025d6:
  uStack_4 = in_DS;
  if ((POPCOUNT(cVar41) & 1U) != 0) goto code_r0x0040255d;
  goto code_r0x004025d8;
}


