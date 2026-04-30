/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403324
 * Raw Name    : <CreateReportText>b__0
 * Demangled   : <CreateReportText>b__0
 * Prototype   : byte * <CreateReportText>b__0(undefined4 s, byte * param_2, byte * param_3, byte * param_4)
 * Local Vars  : uStack_10, apbStack_8, pcVar1, uVar2, iVar3, uVar4, puVar5, bVar6, bVar7, cVar8, bVar9, bVar10, bVar11, in_EAX, iVar12, pbVar13, s, uVar14, pcVar15, piVar16, pcVar17, pbVar18, pbVar19, pbVar20, pbVar21, uVar22, uVar23, extraout_ECX, extraout_ECX_00, cVar24, bVar25, uVar26, uVar27, puVar28, puVar29, uVar30, sVar31, unaff_EBX, cVar32, cVar33, bVar34, puVar35, puVar36, piVar37, piVar38, puVar39, puVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, unaff_EBP, pbVar55, unaff_ESI, pbVar56, pbVar57, puVar58, puVar59, unaff_EDI, puVar60, in_ES, in_CS, uVar61, in_DS, uVar62, in_GS_OFFSET, bVar63, in_AF, in_TF, in_IF, bVar64, bVar65, param_2, in_NT, param_3, in_AC, param_4, in_VIF, in_VIP, in_ID, uVar66, in_stack_7b027000
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x004035f0) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */
/* WARNING: Removing unreachable block (ram,0x0040331f) */

byte * __fastcall <CreateReportText>b__0(undefined4 s,byte *param_2,byte *param_3,byte *param_4)

{
  code *pcVar1;
  undefined6 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int *in_EAX;
  undefined3 uVar22;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  char *pcVar15;
  int *piVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint3 uVar23;
  byte *pbVar21;
  char cVar24;
  byte bVar25;
  byte *extraout_ECX;
  undefined3 uVar26;
  byte *extraout_ECX_00;
  undefined2 uVar27;
  uint *puVar28;
  undefined1 *puVar29;
  undefined1 uVar30;
  short sVar31;
  char cVar32;
  char cVar33;
  byte bVar34;
  byte *unaff_EBX;
  undefined4 *puVar35;
  undefined2 *puVar36;
  int *piVar37;
  int *piVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined2 *puVar41;
  undefined4 *puVar42;
  undefined2 *puVar43;
  undefined1 *puVar44;
  undefined2 *puVar45;
  undefined2 *puVar46;
  undefined4 *puVar47;
  undefined2 *puVar48;
  undefined2 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined1 *puVar52;
  undefined2 *puVar53;
  undefined1 *puVar54;
  char *unaff_EBP;
  byte *pbVar55;
  byte *unaff_ESI;
  byte *pbVar56;
  byte *pbVar57;
  uint *puVar58;
  uint *puVar59;
  uint *unaff_EDI;
  uint *puVar60;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 uVar61;
  undefined2 in_DS;
  undefined2 uVar62;
  int in_GS_OFFSET;
  bool bVar63;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar64;
  bool bVar65;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar66;
  char in_stack_7b027000;
  undefined4 uStack_10;
  byte *apbStack_8 [2];
  
  bVar64 = false;
  do {
    pbVar57 = param_4;
                    /* .NET CLR Managed Code */
    uVar62 = (undefined2)((uint)s >> 0x10);
    cVar32 = (char)s;
    cVar24 = (char)((uint)s >> 8) + *param_2;
    pcVar15 = (char *)CONCAT22(uVar62,CONCAT11(cVar24,cVar32));
    *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
    pbVar56 = unaff_ESI + *in_EAX;
    *param_2 = *param_2;
    cVar33 = (char)unaff_EBX;
    *unaff_EBP = *unaff_EBP - cVar33;
    *pbVar56 = *pbVar56;
    pbVar18 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
    *pbVar18 = *pbVar18;
    uVar22 = (undefined3)((uint)&stack0x7b027000 >> 8);
    *pbVar56 = *pbVar56 + in_stack_7b027000;
    cVar8 = cRam8c0a0000;
    uVar27 = SUB42(param_2,0);
    out(*(undefined4 *)pbVar56,uVar27);
    puVar28 = (uint *)CONCAT31(uVar22,cRam8c0a0000);
    *pcVar15 = *pcVar15 + cRam8c0a0000;
    *param_2 = *param_2 - (char)((uint)&stack0x7b027000 >> 8);
    *param_2 = *param_2 + cVar32;
    unaff_ESI = pbVar56 + 8;
    out(*(undefined4 *)(pbVar56 + 4),uVar27);
    cRam03060000 = cVar8;
    uVar61 = (undefined2)*in_EAX;
    unaff_EDI = (uint *)((uint)unaff_EDI ^ *puVar28);
    bVar25 = cVar24 + (char)*puVar28;
    pbVar18 = (byte *)CONCAT22(uVar62,CONCAT11(bVar25,cVar32));
    unaff_EBP = (char *)in_EAX[1];
    *(char *)puVar28 = (char)*puVar28 + cVar8;
    param_4 = (byte *)((uint)param_4 & 0xffff0000);
    sVar31 = CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38],cVar33);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),sVar31);
    *(char *)puVar28 = (char)*puVar28 + cVar8;
    bVar6 = cVar8 + 'o' + *(char *)CONCAT31(uVar22,cVar8 + 'o');
    pbVar13 = (byte *)CONCAT31(uVar22,bVar6);
    bVar9 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar6;
    if (*unaff_ESI == 0 || SCARRY1(bVar9,bVar6) != (char)*unaff_ESI < '\0') {
code_r0x004033b0:
      *pbVar13 = *pbVar13 + (char)pbVar13;
      cVar8 = (char)pbVar13 + 'o';
      pbVar55 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar8);
      *unaff_ESI = *unaff_ESI + cVar8;
      *(undefined2 *)unaff_EBX = uVar61;
      *pbVar18 = *pbVar18 + cVar8;
      *param_2 = *param_2 - (char)((uint)pbVar13 >> 8);
      bVar63 = CARRY1(*param_2,(byte)pbVar18);
      *param_2 = *param_2 + (byte)pbVar18;
      pbVar57 = pbVar56 + 0xc;
      out(*(undefined4 *)unaff_ESI,uVar27);
      pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar8);
code_r0x004033c8:
      pbVar57 = pbVar57 + (uint)bVar63 + *(int *)pbVar55;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar55 >> 8),(byte)pbVar55 + *pbVar55);
      pbVar13 = (byte *)((int)piVar16 + (uint)CARRY1((byte)pbVar55,*pbVar55) + *piVar16);
      bVar9 = *pbVar13;
      bVar6 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar6 + CARRY1(bVar9,bVar6));
      do {
        *pbVar18 = *pbVar18 + (char)param_2;
        param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)pbVar13 >> 8);
        param_3 = (byte *)CONCAT22(param_3._2_2_,in_ES);
        pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                   CONCAT11((char)((uint)pbVar18 >> 8) + *pbVar13,(char)pbVar18));
        *pbVar13 = *pbVar13 + (char)pbVar13;
        uVar14 = (uint)param_3._2_2_;
        unaff_ESI = pbVar57 + 4;
        out(*(undefined4 *)pbVar57,(short)param_2);
        pbVar55 = param_3;
        pbRam2a0a0000 = pbVar13;
code_r0x004033e7:
        param_3 = (byte *)(uVar14 << 0x10);
        param_2 = param_2 + 1;
        pbVar57 = unaff_ESI;
_ctor:
        iVar12 = CONCAT31((int3)((uint)pbVar13 >> 8),(char)pbVar13 + *unaff_EBX) + 0x6128;
        bVar6 = (char)iVar12 + *(char *)((int)unaff_EDI * 2 + 0x400003e);
        pbVar13 = (byte *)CONCAT31((int3)((uint)iVar12 >> 8),bVar6);
        cVar8 = (char)param_2 - *unaff_EBX;
        puVar28 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar8);
        *(byte *)puVar28 = (byte)*puVar28 ^ bVar6;
        *pbVar13 = *pbVar13 + (char)((uint)unaff_EBX >> 8);
        *pbVar13 = *pbVar13 + bVar6;
        *pbVar18 = *pbVar18 + cVar8;
        bVar9 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar6;
        *(byte **)(unaff_EBX + -0x41) =
             pbVar57 + (uint)CARRY1(bVar9,bVar6) + *(int *)(unaff_EBX + -0x41);
        do {
          pbVar56 = param_4;
          *pbVar13 = *pbVar13 + (byte)pbVar13;
          param_4 = (byte *)((uint)param_4 & 0xffff0000);
          pbVar20 = param_4;
          param_4._2_2_ = SUB42(pbVar56,2);
          uVar22 = (undefined3)((uint)pbVar13 >> 8);
          bVar9 = (byte)pbVar13 | *pbVar57;
          uVar62 = (undefined2)((uint)unaff_EBX >> 0x10);
          uVar30 = SUB41(unaff_EBX,0);
          cVar32 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x69];
          *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
          cVar8 = bVar9 + 0x7d;
          pcVar15 = (char *)CONCAT31(uVar22,cVar8);
          pbVar57[(int)pcVar15] = pbVar57[(int)pcVar15] + cVar8;
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar32,uVar30)) + 0x67);
          *pcVar15 = *pcVar15 + cVar8;
          pcVar15 = (char *)CONCAT31(uVar22,bVar9 - 6);
          puVar58 = (uint *)(pbVar57 + 4);
          out(*(undefined4 *)pbVar57,(short)puVar28);
          *pcVar15 = *pcVar15 + (bVar9 - 6);
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar32,uVar30)) + 0x6b);
          *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
          pcVar15 = (char *)CONCAT31(uVar22,bVar9 + 0x7d);
          pbVar57 = (byte *)((int)puVar58 + (int)pcVar15);
          *pbVar57 = *pbVar57 + bVar9 + 0x7d;
          cVar32 = cVar32 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar32,uVar30)) + 0x6a);
          unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(cVar32,uVar30));
          puVar60 = puVar28;
          do {
            cVar8 = (char)pcVar15;
            *pcVar15 = *pcVar15 + cVar8;
            uVar22 = (undefined3)((uint)pcVar15 >> 8);
            bVar9 = cVar8 + 0x7d;
            pcVar17 = (char *)CONCAT31(uVar22,bVar9);
            *(byte *)((int)puVar58 + (int)pcVar17) = *(byte *)((int)puVar58 + (int)pcVar17) + bVar9;
            uVar26 = (undefined3)((uint)puVar60 >> 8);
            bVar6 = (char)puVar60 - *(byte *)((int)puVar60 + 0x457e02);
            puVar28 = (uint *)CONCAT31(uVar26,bVar6);
            pbVar55[0x6fe1411] = pbVar55[0x6fe1411] + bVar9;
            uVar14 = *puVar58;
            uVar4 = *puVar58;
            *(byte *)puVar58 = (byte)*puVar58 + bVar9;
            if (CARRY1((byte)uVar14,bVar9)) {
              *pcVar17 = *pcVar17 + bVar9;
              bVar9 = bVar9 | pcVar17[0x4000045];
              piVar16 = (int *)CONCAT31(uVar22,bVar9);
              if ((char)bVar9 < '\x01') {
                *(byte *)puVar28 = (byte)*puVar28 + bVar9;
                goto code_r0x004034a0;
              }
              *(byte *)piVar16 = (char)*piVar16 + bVar9;
              bVar9 = bVar9 + 0x6f;
              pcVar17 = (char *)CONCAT31(uVar22,bVar9);
              apbStack_8[0] = (byte *)((uint)apbStack_8[0] & 0xffff0000);
              *pcVar17 = *pcVar17 + bVar9;
              pbVar55 = pbVar55 + -*puVar28;
              *pcVar17 = *pcVar17 + bVar9;
              *unaff_EBX = *unaff_EBX + bVar6;
              *(byte *)((int)pcVar17 * 2) = *(byte *)((int)pcVar17 * 2) ^ bVar9;
              in_AF = 9 < (bVar9 & 0xf) | in_AF;
              uVar14 = CONCAT31(uVar22,bVar9 + in_AF * '\x06') & 0xffffff0f;
              cVar8 = (char)uVar14;
              pcVar15 = (char *)CONCAT22((short)(uVar14 >> 0x10),
                                         CONCAT11((char)((uint)pcVar15 >> 8) + in_AF,cVar8));
              *pcVar15 = *pcVar15 + cVar8;
              cRam72110000 = cRam72110000 + bVar6;
              puVar53 = (undefined2 *)segment(uVar61,(short)apbStack_8 + -2);
              *puVar53 = in_ES;
              pcVar15[0x1a] = pcVar15[0x1a] + (char)((uint)puVar60 >> 8);
              cVar8 = (char)pbVar18;
              *pbVar18 = *pbVar18 + cVar8;
              *puVar28 = (uint)(pbVar18 + *puVar28);
              cVar32 = cVar32 + unaff_EBX[0x70];
              *pbVar18 = *pbVar18 + cVar8;
              uVar22 = (undefined3)((uint)pbVar18 >> 8);
              bVar9 = cVar8 + 0xa2;
              cVar32 = cVar32 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar32,uVar30)) + 0x6f);
              unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(cVar32,uVar30));
              *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
              bVar25 = cVar8 + 0x44;
              piVar16 = (int *)CONCAT31(uVar22,bVar25);
              *(byte *)puVar28 = ((byte)*puVar28 - bVar25) - (0x5d < bVar9);
              if ((POPCOUNT((byte)*puVar28) & 1U) != 0) {
                *(byte *)piVar16 = (char)*piVar16 + bVar25;
                *(byte *)piVar16 = (char)*piVar16 + bVar25;
                *(char *)piVar16 = (char)*piVar16 + cVar32;
                puVar28 = (uint *)CONCAT22((short)((uint)puVar60 >> 0x10),(ushort)bVar6);
                *(byte *)piVar16 = (char)*piVar16 + bVar25;
                pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                           CONCAT11((char)((uint)pbVar18 >> 8) + (char)*piVar16,
                                                    cVar8));
                uVar61 = in_ES;
                param_4 = unaff_EBX;
                goto code_r0x00403511;
              }
              *(byte *)piVar16 = (char)*piVar16 + bVar25;
              cVar8 = cVar8 + -0x1a;
              piVar16 = (int *)CONCAT31(uVar22,cVar8);
              param_4 = (byte *)CONCAT22(param_4._2_2_,in_ES);
              *puVar28 = (*puVar28 - (int)piVar16) - (uint)(0x5d < bVar25);
              if ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0) {
                *(byte *)puVar28 = (byte)*puVar28 + cVar8;
                uVar61 = in_ES;
                goto code_r0x004034f3;
              }
              *(char *)piVar16 = (char)*piVar16 + cVar8;
              uVar61 = in_ES;
              goto code_r0x0040349e;
            }
            pcVar15 = pcVar17;
            puVar60 = puVar28;
          } while (SCARRY1((byte)uVar4,bVar9) == (char)(byte)*puVar58 < '\0');
          *pcVar17 = *pcVar17 + bVar9;
          piVar16 = (int *)CONCAT31(uVar22,cVar8 + -0x59);
          pbVar57 = (byte *)((int)puVar58 + (uint)(0xd5 < bVar9) + *piVar16);
          bVar25 = cVar8 + -0x59 + (char)*piVar16;
          pbVar13 = (byte *)CONCAT31(uVar22,bVar25);
          bVar9 = *pbVar13;
          *pbVar13 = *pbVar13 + bVar25;
          *(byte **)pbVar13 = pbVar13 + (uint)CARRY1(bVar9,bVar25) + *(int *)pbVar13;
          bVar9 = *pbVar18;
          *pbVar18 = *pbVar18 + bVar6;
          param_4 = pbVar20;
        } while (CARRY1(bVar9,bVar6));
        *pbVar57 = *pbVar57 + bVar25;
        cVar8 = bVar6 - *unaff_EBX;
        param_2 = (byte *)CONCAT31(uVar26,cVar8);
        *param_2 = *param_2 ^ bVar25;
        *unaff_EBX = *unaff_EBX + cVar8;
        *pbVar13 = *pbVar13 + bVar25;
        *(char *)((int)pbVar13 * 2) = *(char *)((int)pbVar13 * 2) + cVar8;
      } while( true );
    }
    *pbVar13 = *pbVar13 + bVar6;
    bVar7 = bVar6 + 0x2d;
    pcVar15 = (char *)CONCAT31(uVar22,bVar7);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         param_2 + (uint)(0xd2 < bVar6) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    *(undefined2 *)in_EAX = in_ES;
    pbVar13 = (byte *)segment(in_DS,sVar31 + (short)unaff_ESI);
    bVar9 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    param_4._2_2_ = SUB42(pbVar57,2);
    param_4 = (byte *)CONCAT22(param_4._2_2_,in_ES);
    if (CARRY1(bVar9,bVar7)) {
      *pcVar15 = *pcVar15 + bVar7;
      bVar63 = false;
      bVar7 = bVar7 | pcVar15[0x400003b];
      pbVar55 = (byte *)CONCAT31(uVar22,bVar7);
      pbVar57 = unaff_ESI;
      if ((char)bVar7 < '\x01') goto code_r0x004033c8;
      *pbVar55 = *pbVar55 + bVar7;
      iVar12 = CONCAT31(uVar22,bVar7 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar7);
      iRam02060000 = iVar12;
      *(byte *)unaff_EDI = (byte)*unaff_EDI - cVar33;
      *unaff_ESI = *unaff_ESI + (char)iVar12;
      bVar6 = (char)iVar12 - 0x25;
      pbVar13 = (byte *)CONCAT31((int3)((uint)iVar12 >> 8),bVar6);
      pbVar18 = (byte *)CONCAT22(uVar62,CONCAT11(bVar25 + *pbVar13,cVar32));
      bVar9 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      uVar14 = (uint)param_3._2_2_;
      pbVar55 = param_4;
      if (CARRY1(bVar9,bVar6)) goto code_r0x004033e7;
      param_3 = (byte *)(uVar14 << 0x10);
      pbVar20 = pbVar13 + 2;
      *pbVar20 = *pbVar20 + (char)((uint)param_2 >> 8);
      if ((POPCOUNT(*pbVar20) & 1U) != 0) goto _ctor;
      goto code_r0x004033b0;
    }
    cVar8 = bVar6 + 0x9c;
    in_EAX = (int *)CONCAT31(uVar22,cVar8);
    *unaff_ESI = *unaff_ESI + cVar8;
    *(undefined2 *)unaff_EBX = uVar61;
    *pbVar18 = *pbVar18 + cVar8;
    *pbVar18 = *pbVar18 - cVar33;
    *(char *)in_EAX = (char)*in_EAX + cVar8;
    bVar9 = *(byte *)((int)unaff_EDI + -0x5e);
    *(char *)in_EAX = (char)*in_EAX + cVar8;
    param_3 = (byte *)((uint)param_3._2_2_ << 0x10);
    iVar12 = *in_EAX;
    *(char *)(in_GS_OFFSET + (int)in_EAX) = *(char *)(in_GS_OFFSET + (int)in_EAX) + cVar8;
    s = CONCAT31((int3)(CONCAT22(uVar62,CONCAT11((bVar25 | bVar9) + (char)iVar12,cVar32)) >> 8),
                 cVar32 - *param_2);
  } while( true );
code_r0x0040349e:
  piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + -0x5e);
code_r0x004034a0:
  pbVar18[0x2a0a0000] = pbVar18[0x2a0a0000] - (char)pbVar18;
  pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                             CONCAT11((char)((uint)pbVar18 >> 8) + (char)*piVar16,(char)pbVar18));
  bVar9 = (byte)piVar16;
  *(byte *)piVar16 = (char)*piVar16 + bVar9;
  param_4 = (byte *)CONCAT22(param_4._2_2_,in_ES);
  puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),
                             (char)puVar28 - *(byte *)((int)puVar28 + 0x467e02));
  pbVar55[0x6fe1411] = pbVar55[0x6fe1411] + bVar9;
  uVar14 = *puVar58;
  *(byte *)puVar58 = (byte)*puVar58 + bVar9;
  if (!CARRY1((byte)uVar14,bVar9)) {
    pbVar57 = (byte *)((int)unaff_EDI + (int)pbVar55 * 2);
    *pbVar57 = *pbVar57 + bVar9;
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar9;
  uVar22 = (undefined3)((uint)piVar16 >> 8);
  bVar9 = bVar9 | *(byte *)((int)piVar16 + 0x4000046);
  piVar16 = (int *)CONCAT31(uVar22,bVar9);
  if ((char)bVar9 < '\x01') {
code_r0x00403511:
    pbVar55 = param_4;
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    param_4 = (byte *)CONCAT22(param_4._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar9;
  pbVar57 = (byte *)CONCAT31(uVar22,bVar9 + 0x6f);
  *pbVar57 = *pbVar57 + bVar9 + 0x6f;
  pbVar55 = pbVar55 + -*puVar28;
  uVar61 = in_ES;
  do {
    bVar9 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar57 = *pbVar57 + (byte)pbVar57;
    pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                               CONCAT11((char)((uint)pbVar18 >> 8) + bVar9 | (byte)*puVar28,
                                        (char)pbVar18));
    uVar22 = (undefined3)((uint)pbVar57 >> 8);
    bVar9 = (byte)pbVar57 | (byte)*puVar28;
    bVar6 = bVar9 - *(byte *)CONCAT31(uVar22,bVar9);
    puVar58 = (uint *)((int)puVar58 +
                      (uint)(bVar9 < *(byte *)CONCAT31(uVar22,bVar9)) +
                      *(int *)CONCAT31(uVar22,bVar6));
    pbVar57 = (byte *)CONCAT31(uVar22,bVar6);
    *(byte **)pbVar57 = pbVar57 + *(int *)pbVar57;
    *(byte *)puVar58 = (byte)*puVar58 + (char)puVar28;
    bVar9 = *pbVar57;
    *pbVar57 = *pbVar57 + bVar6;
    *puVar28 = (uint)(pbVar57 + (uint)CARRY1(bVar9,bVar6) + *puVar28);
    if ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0) {
      *(byte *)puVar58 = (byte)*puVar58 + 1;
      puVar60 = puVar58;
      goto code_r0x00403529;
    }
    *pbVar57 = *pbVar57 + bVar6;
    piVar16 = (int *)CONCAT31(uVar22,bVar6 + 0x6f);
code_r0x004034f3:
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    *(byte *)puVar58 = (byte)*puVar58 + (char)piVar16;
    pbVar55 = pbVar55 + 1;
    pcVar15 = (char *)((int)((uint)piVar16 | 8) + *(int *)((uint)piVar16 | 8));
    *pcVar15 = *pcVar15 + (char)pcVar15;
    piVar16 = (int *)(pcVar15 + 0x53000000);
    bVar9 = (byte)piVar16;
    *(byte *)piVar16 = (char)*piVar16 + bVar9;
    *unaff_EBX = *unaff_EBX + (char)puVar28;
    *(byte *)piVar16 = (char)*piVar16 + bVar9;
    *pbVar55 = *pbVar55 - (char)unaff_EBX;
    uVar14 = *puVar58;
    *(byte *)puVar58 = (byte)*puVar58 + bVar9;
    if (CARRY1((byte)uVar14,bVar9)) goto code_r0x0040349e;
    pcVar15[0x5300006f] = pcVar15[0x5300006f] + (char)((uint)puVar28 >> 8);
    pcVar15 = pcVar15 + 0x53000001;
    bVar6 = (byte)pcVar15;
    bRam7e060000 = bVar9;
    *pcVar15 = *pcVar15 + bVar6;
    pbVar57 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar6 + 0x2d);
    puVar58[(int)unaff_EDI * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar6) + puVar58[(int)unaff_EDI * 2]);
    puVar60 = puVar58;
code_r0x00403529:
    puVar58 = puVar60 + 1;
    out(*puVar60,(short)puVar28);
    bVar9 = *pbVar57;
    bVar6 = (byte)pbVar57;
    *pbVar57 = *pbVar57 + bVar6;
  } while (!CARRY1(bVar9,bVar6));
  *pbVar57 = *pbVar57 + bVar6;
  uVar22 = (undefined3)((uint)pbVar57 >> 8);
  bVar6 = bVar6 | pbVar57[0x4000040];
  pcVar15 = (char *)CONCAT31(uVar22,bVar6);
  if ((char)bVar6 < '\x01') goto code_r0x00403579;
  *pcVar15 = *pcVar15 + bVar6;
  cVar8 = bVar6 + 10;
  pcVar15 = (char *)CONCAT31(uVar22,cVar8);
  puVar60 = puVar58;
  if (cVar8 == '\0' || SCARRY1(bVar6,'\n') != cVar8 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar9 = (byte)pcVar15;
  *pcVar15 = *pcVar15 + bVar9;
  piVar16 = (int *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar9 + 0x2d);
  puVar58[(int)unaff_EDI * 2] =
       (uint)((int)puVar28 + (uint)(0xd2 < bVar9) + puVar58[(int)unaff_EDI * 2]);
  apbStack_8[0] = (byte *)CONCAT22(apbStack_8[0]._2_2_,in_ES);
code_r0x00403549:
  uVar14 = *puVar58;
  bVar9 = (byte)piVar16;
  *(byte *)puVar58 = (byte)*puVar58 + bVar9;
  if (!CARRY1((byte)uVar14,bVar9)) goto code_r0x004034f3;
  *(byte *)piVar16 = (char)*piVar16 + bVar9;
  uVar22 = (undefined3)((uint)piVar16 >> 8);
  bVar9 = bVar9 | *(byte *)((int)piVar16 + 0x4000041);
  if ((char)bVar9 < '\x01') {
    *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar18;
    *(byte *)puVar28 = (byte)*puVar28;
    pcVar15 = (char *)CONCAT31(uVar22,bVar9 + 0x7e);
    puVar28 = (uint *)((int)puVar28 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
  piVar16 = (int *)CONCAT31(uVar22,bVar9 + 0xb);
  puVar60 = puVar58;
code_r0x0040355b:
  pbVar55 = pbVar55 + -*(int *)((int)puVar60 + 2);
  *pbVar55 = *pbVar55 - (char)unaff_EBX;
  uVar14 = *puVar60;
  bVar9 = (byte)piVar16;
  *(byte *)puVar60 = (byte)*puVar60 + bVar9;
  if (CARRY1((byte)uVar14,bVar9)) goto code_r0x00403548;
code_r0x00403565:
  piVar16 = piVar16 + 0x1ec09c00;
  pbVar57 = (byte *)((int)unaff_EDI + (int)pbVar55 * 2);
  *pbVar57 = *pbVar57 + (char)piVar16;
  *(byte *)puVar60 = (byte)*puVar60 + (char)piVar16 + (char)*piVar16;
  puVar58 = puVar60 + 1;
  out(*puVar60,(short)puVar28);
  pcVar15 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar18 = *pbVar18 + (char)pcVar15;
  *(byte *)puVar28 = (byte)*puVar28 - (char)((uint)pcVar15 >> 8);
  puVar60 = puVar58;
code_r0x00403580:
  *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar18;
  puVar58 = puVar60 + 1;
  out(*puVar60,(short)puVar28);
  bVar9 = (byte)pcVar15;
  puVar28 = (uint *)((int)puVar28 + 1);
  bRam7e060000 = bVar9;
  *pcVar15 = *pcVar15 + bVar9;
  uVar22 = (undefined3)((uint)pcVar15 >> 8);
  bVar6 = bVar9 + 0x2d;
  pcVar15 = (char *)CONCAT31(uVar22,bVar6);
  puVar58[(int)unaff_EDI * 2] =
       (uint)((int)puVar28 + (uint)(0xd2 < bVar9) + puVar58[(int)unaff_EDI * 2]);
  apbStack_8[0] = (byte *)CONCAT22(apbStack_8[0]._2_2_,in_ES);
  uVar14 = *puVar58;
  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
  if (!CARRY1((byte)uVar14,bVar6)) {
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar60 + 0x45),(char)unaff_EBX));
    goto code_r0x0040353f;
  }
  *pcVar15 = *pcVar15 + bVar6;
  bVar6 = bVar6 | pcVar15[0x4000042];
  pcVar15 = (char *)CONCAT31(uVar22,bVar6);
  if ('\0' < (char)bVar6) {
code_r0x004035a1:
    bVar6 = (byte)pcVar15;
    *pcVar15 = *pcVar15 + bVar6;
    uVar22 = (undefined3)((uint)pcVar15 >> 8);
    bVar9 = bVar6 + 10;
    if (bVar9 == 0 || SCARRY1(bVar6,'\n') != (char)bVar9 < '\0') {
      pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 8 + (0xf5 < bVar6));
code_r0x004035e5:
      bVar6 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar6;
      uVar22 = (undefined3)((uint)pcVar15 >> 8);
      bVar9 = bVar6 + 0x2d;
      pcVar15 = (char *)CONCAT31(uVar22,bVar9);
      puVar58[(int)unaff_EDI * 2] =
           (uint)((int)puVar28 + (uint)(0xd2 < bVar6) + puVar58[(int)unaff_EDI * 2]);
      uVar14 = *puVar58;
      *(byte *)puVar58 = (byte)*puVar58 + bVar9;
      if (CARRY1((byte)uVar14,bVar9)) {
        *pcVar15 = *pcVar15 + bVar9;
        bVar9 = bVar9 | pcVar15[0x4000044];
        pbVar57 = (byte *)CONCAT31(uVar22,bVar9);
        if ('\0' < (char)bVar9) {
          *pbVar57 = *pbVar57 + bVar9;
          pbVar57 = (byte *)(CONCAT31(uVar22,bVar9 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar9));
          pbRam2a060000 = pbVar57;
          *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
          *(byte *)puVar28 = (byte)*puVar28 ^ (byte)pbVar57;
          *pbVar57 = *pbVar57 + (char)((uint)pbVar18 >> 8);
          *pbVar57 = *pbVar57 + (byte)pbVar57;
          puVar60 = unaff_EDI;
          uVar61 = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),
                                 (byte)pbVar18 |
                                 *(byte *)((int)(puVar28 + 0xa004000) + (int)unaff_EDI));
      puVar60 = puVar58;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
    bVar6 = bVar6 + 0x37;
    piVar16 = (int *)CONCAT31(uVar22,bVar6);
    puVar58[(int)unaff_EDI * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar9) + puVar58[(int)unaff_EDI * 2]);
    apbStack_8[0] = (byte *)CONCAT22(apbStack_8[0]._2_2_,in_ES);
    uVar14 = *puVar58;
    *(byte *)puVar58 = (byte)*puVar58 + bVar6;
    puVar60 = puVar58;
    if (!CARRY1((byte)uVar14,bVar6)) goto code_r0x0040355b;
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    bVar6 = bVar6 | *(byte *)((int)piVar16 + 0x4000043);
    pbVar57 = (byte *)CONCAT31(uVar22,bVar6);
    if ((char)bVar6 < '\x01') {
      *pbVar57 = *pbVar57 + bVar6;
      pbVar55 = pbVar55 + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar57 = *pbVar57 + bVar6;
      uStack_10 = (undefined4 *)((uint)uStack_10._2_2_ << 0x10);
      piVar16 = (int *)CONCAT31(uVar22,bVar6 - *pbVar57);
      puVar58 = (uint *)((int)puVar58 + (-(uint)(bVar6 < *pbVar57) - *piVar16));
      pbVar57 = (byte *)CONCAT31(uVar22,(bVar6 - *pbVar57) + (char)*piVar16);
      apbStack_8[0] = (byte *)0x17000000;
      puVar60 = unaff_EDI;
code_r0x00403615:
      bVar9 = *pbVar57;
      bVar6 = (byte)pbVar57;
      *pbVar57 = *pbVar57 + bVar6;
      *puVar28 = (uint)(pbVar57 + (uint)CARRY1(bVar9,bVar6) + *puVar28);
      unaff_EDI = puVar60;
      if ((POPCOUNT(*puVar28 & 0xff) & 1U) == 0) {
        *pbVar57 = *pbVar57 + bVar6;
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar57 >> 8),bVar6 + 0x28);
        unaff_EDI = puVar60 + 1;
        uVar14 = in((short)puVar28);
        *puVar60 = uVar14;
        *pcVar15 = *pcVar15 + bVar6 + 0x28;
        pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar18 >> 8) | unaff_EBX[(int)pbVar18],
                                            (char)pbVar18));
        pcVar15[0x28] = pcVar15[0x28] + (char)((uint)puVar28 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar57 = *pbVar57 + bVar6;
    uVar14 = CONCAT31(uVar22,bVar6 + 0xb);
    piVar16 = (int *)(uVar14 - *puVar58);
    if (uVar14 < *puVar58) {
      cVar8 = (char)piVar16;
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      uVar62 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar32 = (char)unaff_EBX;
      bVar9 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar28 + 2);
      *pbVar55 = *pbVar55 - cVar32;
      *(byte *)puVar58 = (byte)*puVar58 + cVar8;
      uStack_10 = (undefined4 *)CONCAT22(uStack_10._2_2_,in_ES);
      unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(bVar9 + *(char *)(CONCAT22(uVar62,CONCAT11(bVar9,
                                                  cVar32)) + 0x38),cVar32));
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      pcVar15 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar8 + 'o');
      *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar18;
      *pcVar15 = *pcVar15 - cVar32;
      *pcVar15 = *pcVar15 + cVar8 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - puVar58[0x11]);
      goto code_r0x004035e5;
    }
    puVar60 = puVar58 + 1;
    out(*puVar58,(short)puVar28);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar6) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)apbStack_8[0] & 0x4000) != 0;
  bVar64 = ((uint)apbStack_8[0] & 0x400) != 0;
  in_IF = ((uint)apbStack_8[0] & 0x200) != 0;
  in_TF = ((uint)apbStack_8[0] & 0x100) != 0;
  in_AF = ((uint)apbStack_8[0] & 0x10) != 0;
  in_ID = ((uint)apbStack_8[0] & 0x200000) != 0;
  in_AC = ((uint)apbStack_8[0] & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar8 = (char)pcVar15;
  *pcVar15 = *pcVar15 + cVar8;
  pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                             CONCAT11((byte)((uint)pbVar18 >> 8) | (byte)*puVar28,(char)pbVar18));
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3e],
                                        (char)unaff_EBX));
  *pcVar15 = *pcVar15 + cVar8;
  pbVar57 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8 + '(');
  cVar8 = (char)((uint)puVar28 >> 8);
  *(byte *)((int)puVar28 + 0x21) = *(byte *)((int)puVar28 + 0x21) + cVar8;
  pbVar13 = pbVar57 + 2;
  *pbVar13 = *pbVar13 + cVar8;
  bVar9 = *pbVar13;
code_r0x00403643:
  cVar8 = (char)pbVar57;
  if ((POPCOUNT(bVar9) & 1U) == 0) {
    *pbVar57 = *pbVar57 + cVar8;
    uVar22 = (undefined3)((uint)pbVar57 >> 8);
    cVar32 = cVar8 + '(';
    pcVar15 = (char *)CONCAT31(uVar22,cVar32);
    in_AF = ((uint)pbVar57 & 0x1000) != 0;
    *pcVar15 = *pcVar15 + cVar32;
    puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | (byte)*puVar58);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar58 + 0x3f),(char)unaff_EBX));
    *pcVar15 = *pcVar15 + cVar32;
    pbVar57 = (byte *)CONCAT31(uVar22,cVar8 + 'M');
    puVar28 = (uint *)((uint)puVar28 | *puVar28);
    *pbVar57 = *pbVar57 + (char)((uint)pbVar18 >> 8);
code_r0x00403659:
    puVar60 = (uint *)((int)unaff_EDI + (uint)bVar64 * -2 + 1);
    bVar9 = (byte)pbVar57;
    *(byte *)unaff_EDI = bVar9;
    *pbVar57 = *pbVar57 + bVar9;
    uVar22 = (undefined3)((uint)pbVar57 >> 8);
    bVar9 = bVar9 | (byte)*puVar28;
    pcVar15 = (char *)CONCAT31(uVar22,bVar9);
    unaff_EDI = puVar60;
    if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x0040369e;
    *pcVar15 = *pcVar15 + bVar9;
    bVar9 = bVar9 + 2;
    *pbVar55 = *pbVar55 - (char)unaff_EBX;
    *(byte *)puVar58 = (byte)*puVar58 + bVar9;
    puVar59 = puVar58 + (uint)bVar64 * -2 + 1;
    out(*puVar58,(short)puVar28);
    unaff_EDI = (uint *)((int)puVar60 + (uint)bVar64 * -2 + 1);
    puVar58 = (uint *)((int)puVar59 + (uint)bVar64 * -2 + 1);
    *(byte *)puVar60 = (byte)*puVar59;
    *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
    cVar32 = (char)((uint)pbVar18 >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar32;
    cVar8 = (bVar9 | (byte)*puVar58) - 6;
    piVar16 = (int *)CONCAT31(uVar22,cVar8);
    pcVar15 = (char *)((int)piVar16 * 2 + 0x2adc0a00);
    *pcVar15 = *pcVar15 - cVar32;
    *piVar16 = (int)(*piVar16 + (int)puVar28);
    *(char *)piVar16 = (char)*piVar16 + cVar8;
    bVar9 = cVar8 + (char)*piVar16;
    in_AF = 9 < (bVar9 & 0xf) | in_AF;
    uVar14 = CONCAT31(uVar22,bVar9 + in_AF * '\x06') & 0xffffff0f;
    pbVar57 = (byte *)CONCAT22((short)(uVar14 >> 0x10),
                               CONCAT11((char)((uint)pbVar57 >> 8) + in_AF,(char)uVar14));
    pbVar13 = pbVar18;
  }
  else {
    *(byte *)puVar28 = (byte)*puVar28 + cVar8;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)puVar28 >> 8);
    pbVar13 = pbVar18;
  }
  *(byte *)puVar58 = (byte)*puVar58 + (char)((uint)pbVar57 >> 8);
  *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar13;
  bVar6 = (byte)pbVar57;
  *pbVar57 = *pbVar57 + bVar6;
  bVar9 = *pbVar57;
  *pbVar57 = *pbVar57 + bVar6;
  pbVar18 = pbVar13;
  pbVar55 = apbStack_8[0];
  if (!CARRY1(bVar9,bVar6)) goto code_r0x004036a6;
  *pbVar57 = *pbVar57 + bVar6;
  pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),bVar6 | pbVar57[0x400003f]);
  pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),
                             (char)pbVar13 - *(byte *)((int)puVar28 + 0x5040302));
  *(char *)((int)pbVar57 * 2) = *(char *)((int)pbVar57 * 2) - (char)((uint)pbVar13 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(char)pbVar18 + (byte)*puVar58);
    pbVar57 = (byte *)(CONCAT31((int3)((uint)pbVar57 >> 8),(char)pbVar57 + '%') + 0x1ebd9f3);
    uStack_10 = (undefined4 *)CONCAT22(uStack_10._2_2_,in_ES);
    bVar9 = (byte)pbVar57;
    bVar63 = CARRY1(*pbVar57,bVar9);
    *pbVar57 = *pbVar57 + bVar9;
    puVar35 = uStack_10 + -1;
    *(undefined2 *)(uStack_10 + -1) = in_ES;
    cVar8 = (char)puVar28;
    if (bVar63) {
      *pbVar57 = *pbVar57 + bVar9;
      uVar62 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar25 = (byte)((uint)unaff_EBX >> 8) | pbVar55[0x47];
      pcVar15 = (char *)CONCAT22(uVar62,CONCAT11(bVar25,(char)unaff_EBX));
      *pbVar57 = *pbVar57 + bVar9;
      uVar22 = (undefined3)((uint)pbVar57 >> 8);
      bVar9 = bVar9 + 0x2a;
      *pcVar15 = *pcVar15 + cVar8;
      pbVar57 = (byte *)((int)CONCAT31(uVar22,bVar9) * 2);
      *pbVar57 = *pbVar57 ^ bVar9;
      bVar9 = bVar9 ^ *(byte *)CONCAT31(uVar22,bVar9);
      pbVar57 = (byte *)CONCAT31(uVar22,bVar9);
      bVar6 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar9;
      *pbVar57 = (*pbVar57 - bVar9) - CARRY1(bVar6,bVar9);
      *pbVar18 = *pbVar18 + cVar8;
      unaff_EBX = (byte *)CONCAT22(uVar62,CONCAT11(bVar25 + pcVar15[0x38],(char)unaff_EBX));
      *pbVar57 = *pbVar57 + bVar9;
      cVar32 = bVar9 + 2;
      if ((POPCOUNT(cVar32) & 1U) != 0) {
        pcVar1 = (code *)swi(7);
        uVar66 = (*pcVar1)();
        pbVar18 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar22,cVar32) = *(char *)CONCAT31(uVar22,cVar32) + cVar32;
      bVar9 = bVar9 + 0x71;
      pbVar57 = (byte *)CONCAT31(uVar22,bVar9);
      uVar61 = *(undefined2 *)(uStack_10 + -1);
      *pbVar57 = *pbVar57 + bVar9;
      iVar12 = (int)pbVar18 - *puVar28;
      pbVar18 = (byte *)CONCAT22((short)((uint)iVar12 >> 0x10),
                                 CONCAT11((char)((uint)iVar12 >> 8) + *pbVar57,(char)iVar12));
      pbVar55 = (byte *)*uStack_10;
      bVar63 = CARRY1(*pbVar57,bVar9);
      *pbVar57 = *pbVar57 + bVar9;
      *(undefined2 *)uStack_10 = in_ES;
      *(undefined2 *)(uStack_10 + -1) = in_ES;
    }
    bVar9 = (byte)pbVar57;
    uVar22 = (undefined3)((uint)pbVar57 >> 8);
    if (bVar63) break;
    *(byte *)puVar28 = (byte)*puVar28 + (byte)pbVar18;
    *(byte *)((int)puVar28 + (int)pbVar55) = *(byte *)((int)puVar28 + (int)pbVar55) + bVar9;
    pcVar15 = (char *)CONCAT31(uVar22,(byte)*puVar28);
code_r0x0040369e:
    pbVar57 = (byte *)(pcVar15 + *(int *)(pcVar15 + 0x6c28));
  }
  *pbVar57 = *pbVar57 + bVar9;
  uVar23 = (uint3)((uint)pbVar18 >> 8);
  pbVar13 = (byte *)CONCAT31(uVar23,(byte)pbVar18 | *unaff_EBX);
  uVar61 = *(undefined2 *)uStack_10;
  puVar35 = uStack_10 + 1;
  puVar60 = puVar58 + (uint)bVar64 * -2 + 1;
  out(*puVar58,(short)puVar28);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar64 * -2 + 1);
  *pbVar57 = *pbVar57 + bVar9;
  bVar9 = bVar9 | (byte)*unaff_EDI;
  pbVar57 = (byte *)CONCAT31(uVar22,bVar9);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)pbVar18 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar9);
  *(undefined2 *)uStack_10 = apbStack_8[0]._0_2_;
  cVar24 = (char)unaff_EBX;
  cVar32 = cVar24 - (byte)*puVar28;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar32);
  in_ES = apbStack_8[0]._0_2_;
  if (cVar32 == '\0' || cVar24 < (char)(byte)*puVar28) {
code_r0x00403750:
    uVar66 = CONCAT44(puVar28,pbVar57);
    puVar58 = puVar60 + (uint)bVar64 * -2 + 1;
    out(*puVar60,(short)puVar28);
    bVar6 = (byte)pbVar57;
    *pbVar57 = *pbVar57 + bVar6;
    *pbVar13 = *pbVar13 + (char)unaff_EBX;
    bVar9 = *pbVar57;
    *pbVar57 = *pbVar57 + bVar6;
    *(byte **)(unaff_EBX + -0x49) =
         (byte *)((int)puVar58 + (uint)CARRY1(bVar9,bVar6) + *(int *)(unaff_EBX + -0x49));
    puVar35 = uStack_10;
code_r0x0040375a:
    pbVar18 = (byte *)uVar66;
    *pbVar18 = *pbVar18 + (char)uVar66;
    bVar63 = CARRY1((byte)((uint)pbVar13 >> 8),*pbVar18);
    *(undefined2 *)((int)puVar35 + -4) = uVar61;
    iVar12 = CONCAT31(0x1f0a00,bVar63 + 'o') + *(int *)(unaff_EBX + (int)pbVar55) +
             (uint)(0x90 < bVar63) + -1;
    uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar66 >> 0x20);
    pcVar17 = (char *)(CONCAT31((int3)((uint)iVar12 >> 8),(char)iVar12 + -0x66) | *unaff_EDI);
    bVar9 = *(byte *)((int)unaff_EDI + -0x46);
    pcVar15 = (char *)CONCAT22(0xd0a,(ushort)bVar9 << 8);
    *pcVar17 = *pcVar17 + (char)pcVar17;
    bVar6 = (byte)((ulonglong)uVar66 >> 0x20);
    puVar29 = (undefined1 *)
              CONCAT22((short)((ulonglong)uVar66 >> 0x30),
                       CONCAT11((byte)((ulonglong)uVar66 >> 0x28) | unaff_EBX[(int)pbVar55],bVar6));
    *pcVar15 = *pcVar15 + (char)pcVar17;
    *pbVar55 = *pbVar55 - bVar9;
    *puVar29 = *puVar29;
    pbVar18 = (byte *)(((uint)pcVar17 | 8) + 0x4490f9d8);
    bVar9 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar9;
    uVar14 = *puVar58;
    *(uint *)((int)puVar58 + (int)pbVar18) = *(uint *)((int)puVar58 + (int)pbVar18) ^ (uint)pcVar15;
    *pbVar18 = *pbVar18 | bVar9;
    piVar37 = (int *)0x2609fffc;
    bVar63 = false;
    uRam2609fffc = in_ES;
    *pbVar18 = *pbVar18 | bVar9;
    uVar66 = CONCAT44(CONCAT31((int3)((uint)puVar29 >> 8),bVar6 | (byte)uVar14),pbVar18);
code_r0x004037a7:
    while( true ) {
      pbVar18 = (byte *)((ulonglong)uVar66 >> 0x20);
      uVar61 = (undefined2)((ulonglong)uVar66 >> 0x20);
      out(*puVar58,uVar61);
      out(puVar58[(uint)bVar64 * -2 + 1],uVar61);
      puVar28 = (uint *)((int)unaff_EDI + (int)pbVar18);
      uVar14 = *puVar28;
      uVar4 = (uint)uVar66 + *puVar28;
      *puVar28 = uVar4 + bVar63;
      iVar12 = *piVar37 + *(int *)(pcVar15 + (int)pbVar18) +
               (uint)(CARRY4(uVar14,(uint)uVar66) || CARRY4(uVar4,(uint)bVar63));
      cVar8 = (char)iVar12 + '\t';
      pbVar57 = (byte *)CONCAT31((int3)((uint)iVar12 >> 8),cVar8);
      pcVar17 = (char *)((uint)bVar64 * -8 + 0x260a0004);
      out(uRam260a0000,uVar61);
      uVar61 = (undefined2)piVar37[1];
      *pbVar57 = *pbVar57 + cVar8;
      bVar6 = (byte)((uint)pcVar15 >> 8) | *pbVar18;
      *(undefined2 *)(piVar37 + 1) = in_DS;
      bVar9 = *pbVar57;
      pbVar57 = pbVar57 + (uint)CARRY1(bVar6,*pbVar57) + *(int *)pbVar57;
      *pbVar18 = *pbVar18 + 6;
      cVar32 = (char)unaff_EBX - *pcVar17;
      pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),CONCAT11(bVar6 + bVar9 + *pbVar57,6)
                                );
      *pbVar57 = *pbVar57;
      *(undefined2 *)piVar37 = in_ES;
      uVar22 = (undefined3)((uint)pbVar57 >> 8);
      cVar8 = (char)pbVar57 - *pbVar57;
      piVar16 = (int *)CONCAT31(uVar22,cVar8);
      puVar58 = (uint *)(pcVar17 + *piVar16);
      bVar9 = cVar8 + (char)*piVar16;
      pcVar17 = (char *)CONCAT31(uVar22,bVar9);
      piVar38 = piVar37 + -1;
      piVar37[-1] = (int)pcVar15;
      *pcVar17 = *pcVar17 + bVar9;
      *pcVar17 = *pcVar17 + bVar9;
      *pcVar17 = *pcVar17 + bVar9;
      bVar63 = CARRY1(*pbVar18,bVar9);
      *pbVar18 = *pbVar18 + bVar9;
      if (bVar63) break;
      in_ES = (undefined2)piVar37[-1];
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar32);
      uVar66 = CONCAT44(pbVar18,pcVar17);
    }
    *pcVar17 = *pcVar17 + bVar9;
    pbVar56 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar32));
    *pcVar17 = *pcVar17 + bVar9;
    bVar25 = bVar9 + 2;
    *pbVar56 = *pbVar56 - (char)((ulonglong)uVar66 >> 0x20);
    *(char *)CONCAT31(uVar22,bVar25) = *(char *)CONCAT31(uVar22,bVar25) + bVar25;
    uVar14 = *puVar58;
    uVar26 = (undefined3)((uint)pcVar15 >> 8);
    pbVar57 = (byte *)(CONCAT31(uVar26,(byte)uVar14) | 6);
    bVar6 = 9 < (bVar9 + 0x74 & 0xf) | in_AF;
    bVar7 = bVar9 + 0x74 + bVar6 * '\x06';
    bVar7 = bVar7 + (0x90 < (bVar7 & 0xf0) | 0x8d < bVar25 | bVar6 * (0xf9 < bVar7)) * '`';
    pbVar13 = (byte *)CONCAT31(uVar22,bVar7);
    bVar9 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar7;
    if (!SCARRY1(bVar9,bVar7)) {
      *(byte *)puVar58 = (byte)*puVar58 + bVar7;
      puVar58 = (uint *)((int)puVar58 + *(int *)(pbVar18 + 0x33));
      *pbVar13 = *pbVar13 | bVar7;
      *(byte *)puVar58 = (byte)*puVar58 + bVar7;
      bVar9 = bVar7 + 0x72;
      piVar37[-2] = (int)pbVar56;
      *(byte *)CONCAT31(uVar22,bVar9) = *(byte *)CONCAT31(uVar22,bVar9) | bVar9;
      *(byte *)puVar58 = (byte)*puVar58 + bVar9;
      pbVar57 = (byte *)CONCAT31(uVar26,((byte)uVar14 | 6) + (byte)*puVar58);
      pcVar15 = (char *)CONCAT31(uVar22,bVar7 - 0x11);
      piVar38 = piVar37 + -3;
      piVar37[-3] = (int)pbVar57;
      *pcVar15 = *pcVar15 + (bVar7 - 0x11);
      pbVar13 = (byte *)CONCAT31(uVar22,bVar7 - 0xf);
      unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
      *pbVar13 = *pbVar13 + (bVar7 - 0xf);
    }
code_r0x00403825:
    pbVar55 = (byte *)0x80a0000;
    uVar22 = (undefined3)((uint)pbVar13 >> 8);
    cVar8 = (char)pbVar13 + '\x7f';
    pcVar15 = (char *)CONCAT31(uVar22,cVar8);
    *(byte **)((int)piVar38 + -4) = pbVar56;
    *pcVar15 = *pcVar15 + cVar8;
    iVar12 = CONCAT31(uVar22,(char)pbVar13 + -0x7f) + 0x547d;
    cVar32 = (char)iVar12;
    uVar22 = (undefined3)((uint)iVar12 >> 8);
    cVar8 = cVar32 + '*';
    pcVar15 = (char *)CONCAT31(uVar22,cVar8);
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(byte)pbVar18 | (byte)*puVar58);
    cVar24 = (char)pbVar56 - (byte)*puVar58;
    uVar62 = (undefined2)((uint)pbVar56 >> 0x10);
    cVar33 = (char)((uint)pbVar56 >> 8) +
             *(char *)(CONCAT31((int3)((uint)pbVar56 >> 8),cVar24) + 0x57);
    *pcVar15 = *pcVar15 + cVar8;
    bVar9 = cVar32 + 0x54U & *pbVar18;
    iVar12 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
    *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
    pcVar15 = (char *)CONCAT31(uVar22,bVar9 + 0x2a);
    *(undefined2 *)((int)piVar38 + -8) = in_DS;
    cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,cVar24)) + 0x58);
    *pcVar15 = *pcVar15 + bVar9 + 0x2a;
    bVar25 = bVar9 + 0x54 & *pbVar18;
    iVar3 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
    *(char *)CONCAT31(uVar22,bVar25) = *(char *)CONCAT31(uVar22,bVar25) + bVar25;
    pcVar15 = (char *)CONCAT31(uVar22,bVar25 + 0x2a);
    pbVar13 = *(byte **)((int)piVar38 + -8);
    cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,cVar24)) + 0x55);
    *pcVar15 = *pcVar15 + bVar25 + 0x2a;
    pcVar15 = (char *)CONCAT31(uVar22,bVar25 + 0x57);
    pbVar18 = pbVar18 + *(int *)pbVar13;
    *(undefined4 *)((int)piVar38 + -8) = 0x2a;
    cVar33 = cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,cVar24)) + 0x55);
    *pcVar15 = *pcVar15 + bVar25 + 0x57;
    cVar8 = bVar25 - 0x3a;
    pcVar15 = (char *)CONCAT31(uVar22,cVar8);
    *(undefined2 *)((int)piVar38 + -0xc) = uVar61;
    *pcVar15 = *pcVar15 + cVar8;
    bVar9 = *pbVar18;
    cVar32 = (char)pbVar57;
    *(undefined2 *)((int)piVar38 + -0x10) = in_DS;
    pbVar56 = (byte *)CONCAT22(uVar62,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar62,CONCAT11(cVar33,
                                                  cVar24)) + 0x59),cVar24));
    *pcVar15 = *pcVar15 + cVar8;
    bVar10 = bVar25 - 0x10 & *pbVar18;
    unaff_EDI = (uint *)((int)unaff_EDI +
                        CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar3 + iVar12)
    ;
    *(char *)CONCAT31(uVar22,bVar10) = *(char *)CONCAT31(uVar22,bVar10) + bVar10;
    bVar10 = bVar10 + 0x2a;
    pbVar20 = (byte *)CONCAT31(uVar22,bVar10);
    puVar35 = (undefined4 *)((int)piVar38 + -0x14);
    *(undefined2 *)((int)piVar38 + -0x14) = in_DS;
    bVar25 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar20 = *pbVar20 + bVar10;
    bVar7 = *pbVar18;
    puVar40 = (undefined4 *)((int)piVar38 + -0x18);
    *(undefined2 *)((int)piVar38 + -0x18) = in_DS;
    bVar11 = *(byte *)((int)unaff_EDI + 0x1a);
    *pbVar20 = *pbVar20 + bVar10;
    pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                               CONCAT11((((byte)((uint)pbVar57 >> 8) | bVar9) + bVar25 | bVar7) +
                                        bVar11 | *pbVar18,cVar32));
    *pbVar56 = *pbVar56 + cVar24;
    *(byte *)((int)pbVar20 * 2) = *(byte *)((int)pbVar20 * 2) ^ bVar10;
    bVar9 = *pbVar20;
    *pbVar20 = *pbVar20 + bVar10;
    bVar25 = *pbVar20;
    *pbVar57 = *pbVar57 + (char)pbVar18;
    bVar9 = ((bVar10 - bVar25) - CARRY1(bVar9,bVar10)) + *pbVar18;
    pbVar20 = (byte *)CONCAT31(uVar22,bVar9);
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      pbVar18 = *(byte **)((int)piVar38 + -0x18);
      goto code_r0x004038f6;
    }
    *pbVar20 = *pbVar20 + bVar9;
    cVar8 = (bVar9 + 0x6f) - (0x90 < bVar9);
    pbVar19 = (byte *)CONCAT31(uVar22,cVar8);
    bVar9 = *pbVar18;
    *pbVar18 = *pbVar18 + cVar32;
    if (SCARRY1(bVar9,cVar32) == (char)*pbVar18 < '\0') {
      cRam33100000 = cRam33100000 - cVar8;
      cVar8 = cVar8 + *pbVar18;
      pbVar20 = (byte *)CONCAT31(uVar22,cVar8);
      puVar35 = (undefined4 *)((int)piVar38 + -0x18);
      goto code_r0x0040390c;
    }
    do {
      *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x004038b0:
      uVar22 = (undefined3)((uint)pbVar19 >> 8);
      cVar8 = (char)pbVar19 + '\x02';
      pbVar20 = (byte *)CONCAT31(uVar22,cVar8);
      puVar35 = puVar40;
      if ((POPCOUNT(cVar8) & 1U) != 0) {
code_r0x00403908:
        unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar13);
        cVar8 = (char)pbVar20 + *pbVar18;
        pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
code_r0x0040390c:
        cVar32 = (char)pbVar20;
        if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040390e;
        *pbVar13 = *pbVar13 + cVar32;
        goto code_r0x00403962;
      }
      *pbVar20 = *pbVar20 + cVar8;
      puVar35 = (undefined4 *)((int)puVar40 + -4);
      piVar38 = (int *)((int)puVar40 + -4);
      *(byte **)((int)puVar40 + -4) = pbVar57;
      cVar8 = (char)pbVar19 + '.' + *pbVar18;
      pbVar20 = (byte *)CONCAT31(uVar22,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        pbVar19 = pbVar18 + (int)pbVar20;
        *pbVar19 = *pbVar19 + cVar8;
        bVar9 = *pbVar19;
        goto code_r0x00403912;
      }
      *pbVar20 = *pbVar20 + cVar8;
      bVar9 = cVar8 + 2;
      pbVar20 = (byte *)CONCAT31(uVar22,bVar9);
      puVar35 = (undefined4 *)((int)puVar40 + -4);
      if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403916;
      *pbVar20 = *pbVar20 + bVar9;
      cVar32 = cVar8 + 'q';
      piVar16 = (int *)CONCAT31(uVar22,cVar32);
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0x90 < bVar9);
      bVar9 = *pbVar56;
      bVar25 = (byte)((uint)pbVar57 >> 8);
      *pbVar56 = *pbVar56 + bVar25;
      if (!CARRY1(bVar9,bVar25)) {
        out(*(undefined4 *)pbVar13,(short)pbVar18);
        bVar9 = (cVar32 - (char)*piVar16) - CARRY1(bVar9,bVar25);
        *pbVar18 = *pbVar18 + (char)pbVar57;
        cVar8 = bVar9 - *(byte *)CONCAT31(uVar22,bVar9);
        puVar58 = (uint *)(pbVar13 +
                          ((((uint)bVar64 * -8 + 4) - *(int *)CONCAT31(uVar22,cVar8)) -
                          (uint)(bVar9 < *(byte *)CONCAT31(uVar22,bVar9))));
        pbVar13 = (byte *)CONCAT31(uVar22,cVar8);
        goto code_r0x00403825;
      }
      *(char *)piVar16 = (char)*piVar16 + cVar32;
      uVar62 = (undefined2)((uint)pbVar56 >> 0x10);
      bVar9 = (byte)((uint)pbVar56 >> 8) | bRam080a0056;
      *(char *)piVar16 = (char)*piVar16 + cVar32;
      pcVar15 = (char *)CONCAT31(uVar22,cVar8 + 's');
      pbVar56 = (byte *)CONCAT22(uVar62,CONCAT11(bVar9 + *(char *)(CONCAT22(uVar62,CONCAT11(bVar9,(
                                                  char)pbVar56)) + 0x56),(char)pbVar56));
      *pcVar15 = *pcVar15 + cVar8 + 's';
      bVar9 = cVar8 - 0xf;
      pbVar18 = *(byte **)((int)puVar40 + -4);
      *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
      bVar25 = cVar8 + 0x1e;
      pbVar19 = (byte *)CONCAT31(uVar22,bVar25);
      *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
           pbVar18 + (uint)(0xd2 < bVar9) + *(int *)(pbVar13 + (int)unaff_EDI * 8);
      puVar35 = (undefined4 *)((int)puVar40 + -4);
      puVar42 = (undefined4 *)((int)puVar40 + -4);
      *(undefined2 *)((int)puVar40 + -4) = in_ES;
      in_ES = *(undefined2 *)pbVar19;
      bVar9 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar25;
      if (CARRY1(bVar9,bVar25)) {
        *pbVar19 = *pbVar19 + bVar25;
        pbVar20 = (byte *)CONCAT31(uVar22,bVar25 | pbVar19[0x400005a]);
        if ('\0' < (char)(bVar25 | pbVar19[0x400005a])) {
code_r0x004038f6:
          bVar9 = (byte)pbVar20;
          *pbVar20 = *pbVar20 + bVar9;
          uVar22 = (undefined3)((uint)pbVar20 >> 8);
          cVar8 = ((bVar9 + 0x28) - *(char *)CONCAT31(uVar22,bVar9 + 0x28)) - (0xd7 < bVar9);
          pbVar20 = (byte *)CONCAT31(uVar22,cVar8);
          bVar9 = *pbVar56;
          bVar25 = (byte)((uint)pbVar57 >> 8);
          *pbVar56 = *pbVar56 + bVar25;
          if (CARRY1(bVar9,bVar25)) {
            *pbVar20 = *pbVar20 + cVar8;
            pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                       CONCAT11(bVar25 | *pbVar20,(char)pbVar57));
            *pbVar13 = *pbVar13 + cVar8;
            goto code_r0x00403908;
          }
          pbVar19 = pbVar20 + -0x6fe1411;
          goto code_r0x00403926;
        }
code_r0x00403950:
        uVar22 = (undefined3)((uint)pbVar20 >> 8);
        bVar25 = (char)pbVar20 + 0x6f;
        bVar9 = *(byte *)CONCAT31(uVar22,bVar25);
        *pbVar18 = *pbVar18 + (char)pbVar57;
        pbVar20 = (byte *)CONCAT31(uVar22,(bVar25 & bVar9) + *pbVar13);
        *pbVar57 = *pbVar57 - (char)((uint)pbVar18 >> 8);
        puVar47 = puVar42;
        goto code_r0x0040395a;
      }
      puVar39 = (undefined4 *)((int)puVar40 + -8);
      puVar40 = (undefined4 *)((int)puVar40 + -8);
      *puVar39 = 0x80a0000;
    } while( true );
  }
  *pbVar57 = *pbVar57 + bVar9;
  iVar12 = CONCAT31(uVar22,bVar9 + 0x2a);
  puVar58 = (uint *)((int)puVar60 + 1);
  cVar32 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + -0x7b);
  uVar66 = CONCAT44(CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar32,cVar8)),iVar12);
  in_ES = *(undefined2 *)uStack_10;
  pcVar15 = (char *)(iVar12 + 0x6f);
  *pcVar15 = *pcVar15 + cVar32;
  pbVar13 = (byte *)((uint)uVar23 << 8);
  do {
    piVar16 = (int *)((ulonglong)uVar66 >> 0x20);
    pcVar15 = (char *)uVar66;
    *(char *)piVar16 = (char)*piVar16;
    if ((char)*piVar16 == '\0') {
      unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
_ctor:
      puVar28 = (uint *)((ulonglong)uVar66 >> 0x20);
      pbVar13 = (byte *)((uint)CONCAT21((short)((uint)pbVar13 >> 0x10),
                                        (char)((uint)pbVar13 >> 8) + *(char *)uVar66) << 8);
      unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
      *(byte *)puVar28 = (byte)*puVar28;
      uVar22 = (undefined3)((ulonglong)uVar66 >> 8);
      bVar6 = (char)uVar66 - *(char *)uVar66;
      pbVar18 = (byte *)CONCAT31(uVar22,bVar6);
      bVar9 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar6;
      puVar60 = (uint *)((int)puVar58 + (uint)CARRY1(bVar9,bVar6) + *(int *)pbVar18);
      pbVar57 = (byte *)CONCAT31(uVar22,bVar6);
      uStack_10 = puVar35;
      goto code_r0x00403750;
    }
    *pcVar15 = *pcVar15 + (char)uVar66;
    *piVar16 = (int)(pbVar55 + *piVar16);
    puVar58 = (uint *)((int)puVar58 + 1);
    uVar66 = CONCAT44(CONCAT22((short)((ulonglong)uVar66 >> 0x30),
                               CONCAT11((char)((ulonglong)uVar66 >> 0x28) +
                                        *(char *)((int)piVar16 + -0x33),
                                        (char)((ulonglong)uVar66 >> 0x20))),pcVar15);
    in_ES = *(undefined2 *)puVar35;
    puVar35 = (undefined4 *)((int)puVar35 + 4);
    pbVar18 = pbVar13;
code_r0x0040371e:
    puVar28 = (uint *)((ulonglong)uVar66 >> 0x20);
    pbVar57 = (byte *)uVar66;
    bVar6 = (byte)((ulonglong)uVar66 >> 0x28);
    pbVar57[0x6f] = pbVar57[0x6f] + bVar6;
    pbVar13 = (byte *)((uint)pbVar18 & 0xffffff00);
    *(char *)puVar28 = (char)*puVar28;
    bVar9 = (byte)uVar66;
    if ((char)*puVar28 != '\0') {
      *pbVar57 = *pbVar57 + bVar9;
      uVar14 = *puVar28;
      *puVar28 = (uint)(pbVar55 + *puVar28);
      piVar37 = (int *)((int)puVar35 + -4);
      *(uint **)((int)puVar35 + -4) = puVar58;
      if (CARRY4(uVar14,(uint)pbVar55)) {
        *pbVar57 = *pbVar57 + bVar9;
        *(undefined2 *)((int)puVar35 + -8) = in_ES;
        puVar60 = puVar28 + 0x1d028000;
        uVar14 = *puVar60;
        *(byte *)puVar60 = (byte)*puVar60 - bVar6;
        *(uint *)pbVar57 = (*(int *)pbVar57 - (int)pbVar57) - (uint)((byte)uVar14 < bVar6);
        *(byte *)puVar28 = (char)*puVar28 + bVar9;
        *pbVar55 = *pbVar55;
        uVar66 = CONCAT44(puVar28,CONCAT31((int3)((ulonglong)uVar66 >> 8),bVar9 + 0x2a));
        puVar36 = (undefined2 *)((int)puVar35 + -0xc);
        puVar35 = (undefined4 *)((int)puVar35 + -0xc);
        *puVar36 = in_DS;
        goto _ctor;
      }
      bVar63 = false;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),*pbVar57);
      goto code_r0x004037a7;
    }
    bVar6 = *pbVar57;
    *pbVar57 = *pbVar57 + bVar9;
    *(uint *)pbVar57 = (*(int *)pbVar57 - (int)pbVar57) - (uint)CARRY1(bVar6,bVar9);
    bVar9 = *pbVar13;
    bVar6 = (byte)((ulonglong)uVar66 >> 0x20);
    *pbVar13 = *pbVar13 + bVar6;
    if (CARRY1(bVar9,bVar6)) goto code_r0x0040375a;
  } while( true );
code_r0x00403548:
  *(byte *)piVar16 = (char)*piVar16 + bVar9;
  puVar58 = puVar60;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar20 = *pbVar20 + cVar32;
  bVar9 = cVar32 + 2;
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar9);
code_r0x00403912:
  bVar63 = (POPCOUNT(bVar9) & 1U) == 0;
  puVar47 = puVar35;
  if (!bVar63) goto code_r0x00403967;
  *pbVar20 = *pbVar20 + (char)pbVar20;
code_r0x00403916:
  bVar11 = (char)pbVar20 + 0x6f;
  pbVar19 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar20 >> 8),bVar11);
  bVar25 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar11;
  bVar7 = *pbVar19;
  bVar9 = *pbVar19;
  puVar47 = (undefined4 *)((int)puVar35 + -4);
  *(undefined2 *)((int)puVar35 + -4) = in_ES;
  if (bVar9 == 0 || SCARRY1(bVar25,bVar11) != (char)bVar7 < '\0') goto code_r0x00403979;
  *pbVar19 = *pbVar19 + bVar11;
  pbVar19 = (byte *)CONCAT31((int3)(char)((uint)pbVar20 >> 8),(char)pbVar20 + -100);
  *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
       pbVar18 + (uint)(0xd2 < bVar11) + *(int *)(pbVar13 + (int)unaff_EDI * 8);
  puVar41 = (undefined2 *)((int)puVar35 + -8);
  puVar35 = (undefined4 *)((int)puVar35 + -8);
  *puVar41 = in_ES;
code_r0x00403926:
  puVar40 = puVar35 + 1;
  puVar47 = puVar35 + 1;
  puVar42 = puVar35 + 1;
  *(undefined4 *)pbVar19 = *puVar35;
  bVar9 = *pbVar13;
  bVar25 = (byte)pbVar19;
  *pbVar13 = *pbVar13 + bVar25;
  if (CARRY1(bVar9,bVar25)) {
    *pbVar19 = *pbVar19 + bVar25;
    uVar22 = (undefined3)((uint)pbVar19 >> 8);
    bVar25 = bVar25 | pbVar19[0x400005b];
    pbVar20 = (byte *)CONCAT31(uVar22,bVar25);
    pbVar19 = pbVar13;
    if ((char)bVar25 < '\x01') goto code_r0x00403991;
    *pbVar20 = *pbVar20 + bVar25;
    cVar8 = bVar25 + 0x28;
    pbVar20 = (byte *)CONCAT31(uVar22,cVar8);
    *(byte **)pbVar20 = pbVar20 + (uint)(0xd7 < bVar25) + *(int *)pbVar20;
    bVar9 = *pbVar56;
    bVar25 = (byte)((uint)pbVar57 >> 8);
    *pbVar56 = *pbVar56 + bVar25;
    if (CARRY1(bVar9,bVar25)) {
      *pbVar20 = *pbVar20 + cVar8;
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11(bVar25 | *pbVar20,(char)pbVar57));
      *pbVar13 = *pbVar13 + cVar8;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((char)((uint)pbVar56 >> 8) + pbVar56[0x55],(char)pbVar56))
      ;
      *pbVar20 = *pbVar20 + cVar8;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar35 = in_ES;
code_r0x00403962:
    puVar47 = (undefined4 *)((int)puVar35 + -4);
    *(undefined2 *)((int)puVar35 + -4) = uVar61;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar20 = *pbVar20 + (char)pbVar20;
  puVar43 = (undefined2 *)((int)puVar47 + -4);
  puVar47 = (undefined4 *)((int)puVar47 + -4);
  *puVar43 = in_ES;
  pbVar18[0x16060000] = pbVar18[0x16060000] - (char)pbVar57;
  pbVar56 = (byte *)((uint)pbVar56 | (uint)pbVar13);
  cVar8 = (char)pbVar20 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
  bVar63 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar63) goto code_r0x004039be;
  *pbVar20 = *pbVar20 + (char)pbVar20;
  uVar22 = (undefined3)((uint)pbVar20 >> 8);
  bVar9 = (char)pbVar20 + 0x6f;
  bVar9 = bVar9 & *(byte *)CONCAT31(uVar22,bVar9);
  pbVar19 = (byte *)CONCAT31(uVar22,bVar9);
  *pbVar18 = *pbVar18 + (char)pbVar57;
  pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(char)pbVar18 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar9;
code_r0x00403979:
  do {
    bVar9 = (char)pbVar19 - (byte)*unaff_EDI;
    bVar63 = bVar9 < *pbVar57;
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar9 - *pbVar57);
    do {
      cVar8 = (char)pbVar20;
      *pbVar20 = *pbVar20 + cVar8 + bVar63;
      *pbVar20 = *pbVar20 + cVar8;
      *pbVar57 = *pbVar57 + (char)pbVar18;
      pbVar57[0x101c00aa] = pbVar57[0x101c00aa] + (char)pbVar56;
      *pbVar20 = *pbVar20 + cVar8;
      *(byte **)pbVar13 = pbVar56 + *(int *)pbVar13;
      bVar9 = (byte)((uint)pbVar57 >> 8);
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11(bVar9 + *pbVar20,(char)pbVar57));
      pbVar20 = pbVar20 + (uint)CARRY1(bVar9,*pbVar20) + *(int *)pbVar20;
      pbVar19 = pbVar13;
code_r0x00403991:
      cVar8 = (char)pbVar57;
      *pbVar18 = *pbVar18 + cVar8;
      cVar32 = (char)pbVar56 - pbVar19[2];
      pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),cVar32);
      pbVar13 = pbVar19;
      if ((POPCOUNT(cVar32) & 1U) != 0) goto code_r0x0040395a;
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      uVar23 = (uint3)((uint)pbVar20 >> 8);
      bVar9 = (byte)pbVar20 | *pbVar56;
      piVar16 = (int *)CONCAT31(uVar23,bVar9);
      bVar25 = (byte)((uint)pbVar57 >> 8);
      bVar7 = (byte)pbVar18;
      if (bVar9 == 0) {
        *(char *)piVar16 = (char)*piVar16;
        puVar47 = (undefined4 *)((int)puVar47 + -*(int *)(pbVar55 + 0x1b000007));
        pbVar13 = pbVar19 + (uint)bVar64 * -8 + 4;
        out(*(undefined4 *)pbVar19,(short)pbVar18);
        pbVar20 = (byte *)((uint)uVar23 << 8);
        *pbVar18 = *pbVar18 + cVar8;
        pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar7 - *pbVar56);
        *pbVar56 = *pbVar56;
        *pbVar18 = *pbVar18 + bVar25;
        *pbVar20 = *pbVar20;
        *pbVar56 = *pbVar56 + cVar32;
        *pbVar20 = *pbVar20;
        *(byte **)(pbVar56 + -0x3d) = pbVar13 + *(int *)(pbVar56 + -0x3d);
        break;
      }
      pbVar55 = pbVar55 + -unaff_EDI[9];
      *(byte *)piVar16 = (char)*piVar16 + bVar9;
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),CONCAT11(bVar25 | *pbVar18,cVar8));
      pbVar13 = pbVar19 + *piVar16;
      pcVar15 = (char *)((int)piVar16 + *piVar16);
      bVar25 = (char)pcVar15 - *pcVar15;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar25);
      bVar9 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar25;
      pbVar20 = pbVar20 + (-(uint)CARRY1(bVar9,bVar25) - *(int *)pbVar20);
      bVar63 = CARRY1(*pbVar57,bVar7);
      *pbVar57 = *pbVar57 + bVar7;
    } while (!bVar63);
    *pbVar20 = *pbVar20 + (char)pbVar20;
    pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),(byte)pbVar57 | *pbVar18);
code_r0x004039be:
    puVar35 = (undefined4 *)((int)puVar47 + -4);
    puVar44 = (undefined1 *)((int)puVar47 + -4);
    *(undefined2 *)((int)puVar47 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar55 + -0x3c));
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    uVar22 = (undefined3)((uint)pbVar20 >> 8);
    bVar9 = (byte)pbVar20 | *pbVar18;
    pcVar15 = (char *)CONCAT31(uVar22,bVar9);
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      cVar8 = *pcVar15;
      *pcVar15 = *pcVar15 + bVar9;
      cVar32 = *pcVar15;
      puVar29 = (undefined1 *)((int)puVar47 + -4);
      if (!SCARRY1(cVar8,bVar9)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar35 = (undefined4 *)puVar29;
      cVar8 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar8;
      uVar22 = (undefined3)((uint)pcVar15 >> 8);
      bVar9 = cVar8 + 2;
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        pcVar15 = (char *)CONCAT31(uVar22,bVar9 + *pbVar18);
        pbVar20 = pbVar13;
        if ((POPCOUNT(bVar9 + *pbVar18) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
             pbVar18 + (uint)(0xd2 < (byte)pcVar15) + *(int *)(pbVar13 + (int)unaff_EDI * 8);
        puVar46 = (undefined2 *)((int)puVar35 + -4);
        puVar35 = (undefined4 *)((int)puVar35 + -4);
        *puVar46 = in_ES;
        pbVar19 = pbVar55;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 + 0x2d);
code_r0x00403ad8:
        pbVar55 = pbVar21;
        bVar9 = *pbVar19;
        bVar25 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar25;
        puVar47 = (undefined4 *)((int)puVar35 + -4);
        *(undefined2 *)((int)puVar35 + -4) = in_ES;
        puVar29 = (undefined1 *)((int)puVar35 + -4);
        if (CARRY1(bVar9,bVar25)) {
          *pbVar19 = *pbVar19 + bVar25;
          bVar25 = bVar25 | pbVar19[0x400005d];
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar25);
          pbVar20 = pbVar13;
          if ((char)bVar25 < '\x01') {
            *pbVar19 = *pbVar19 + bVar25;
            pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar57 >> 8) | *pbVar18,(char)pbVar57)
                                      );
            pbVar20 = *(byte **)((int)puVar35 + -4);
            pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                       CONCAT11((char)((uint)pbVar56 >> 8) + pbVar56[-0x39],
                                                (char)pbVar56));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar19 = *pbVar19 + (char)pbVar19;
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar9 = *pbVar56;
          bVar25 = (byte)((uint)pbVar57 >> 8);
          *pbVar56 = *pbVar56 + bVar25;
          pbVar13 = pbVar20;
          if (!CARRY1(bVar9,bVar25)) {
            puVar35 = (undefined4 *)((int)puVar47 + -4);
            *(undefined2 *)((int)puVar47 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar19 = *pbVar19 + cVar8;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
      piVar16 = (int *)CONCAT31(uVar22,cVar8 + '*');
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0xd7 < bVar9);
      bVar9 = *pbVar18;
      bVar11 = (byte)pbVar57;
      *pbVar18 = *pbVar18 + bVar11;
      out(*(undefined4 *)pbVar13,(short)pbVar18);
      bVar7 = ((cVar8 + '*') - (char)*piVar16) - CARRY1(bVar9,bVar11);
      pbVar20 = (byte *)CONCAT31(uVar22,bVar7);
      *pbVar18 = *pbVar18 + bVar11;
      uVar62 = (undefined2)((uint)pbVar56 >> 0x10);
      uVar30 = SUB41(pbVar56,0);
      cVar8 = (char)((uint)pbVar56 >> 8) - pbVar13[(uint)bVar64 * -8 + 0x1f];
      pbVar56 = (byte *)CONCAT22(uVar62,CONCAT11(cVar8,uVar30));
      *pbVar20 = *pbVar20 + bVar7;
      bVar25 = *pbVar18;
      bVar9 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar7;
      pbVar13 = pbVar13 + ((((uint)bVar64 * -8 + 4) - *(int *)pbVar20) - (uint)CARRY1(bVar9,bVar7));
      pbVar20 = (byte *)CONCAT31(uVar22,bVar7);
      pbVar57 = (byte *)(CONCAT22((short)((uint)pbVar57 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar57 >> 8) | bVar25,bVar11)) + -1);
      bVar9 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar7;
      bVar9 = (bVar7 - *pbVar20) - CARRY1(bVar9,bVar7);
      *pbVar57 = *pbVar57 + (char)pbVar18;
      bVar63 = CARRY1(bVar9,*pbVar18);
      bVar9 = bVar9 + *pbVar18;
      pbVar20 = (byte *)CONCAT31(uVar22,bVar9);
      if ((POPCOUNT(bVar9) & 1U) == 0) {
        *pbVar20 = *pbVar20 + bVar9;
        cVar32 = (bVar9 + 0x6f) - (0x90 < bVar9);
        pbVar19 = (byte *)CONCAT31(uVar22,cVar32);
        bVar9 = *pbVar18;
        *pbVar18 = *pbVar18 + (char)pbVar57;
        if (SCARRY1(bVar9,(char)pbVar57) == (char)*pbVar18 < '\0') {
code_r0x00403aaf:
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar9 = *pbVar56;
          bVar25 = (byte)((uint)pbVar57 >> 8);
          *pbVar56 = *pbVar56 + bVar25;
          pbVar21 = pbVar55;
          if (!CARRY1(bVar9,bVar25)) goto code_r0x00403ad8;
          *pbVar19 = *pbVar19 + cVar8;
          pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                     CONCAT11(bVar25 | *pbVar56,(char)pbVar57));
          if ((POPCOUNT(*pbVar18 - cVar8) & 1U) != 0) {
            *pbVar13 = *pbVar13 + cVar8;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar19 = *pbVar19 + cVar32;
          pcVar15 = (char *)CONCAT31(uVar22,cVar32 + '\x02');
          bVar25 = cVar8 + pbVar56[0x52];
          pbVar56 = (byte *)CONCAT22(uVar62,CONCAT11(bVar25,uVar30));
          *pcVar15 = *pcVar15 + cVar32 + '\x02';
          bVar9 = cVar32 + 4;
          pbVar19 = (byte *)CONCAT31(uVar22,bVar9);
          if ((POPCOUNT(bVar9) & 1U) == 0) {
            *pbVar19 = *pbVar19 + bVar9;
            cVar8 = (cVar32 + 's') - (0x90 < bVar9);
            pcVar15 = (char *)CONCAT31(uVar22,cVar8);
            bVar9 = (byte)((uint)pbVar57 >> 8);
            bVar63 = CARRY1(*pbVar56,bVar9);
            *pbVar56 = *pbVar56 + bVar9;
            pbVar20 = pbVar13;
            if (bVar63) {
              *pcVar15 = *pcVar15 + cVar8;
              pbVar56 = (byte *)CONCAT22(uVar62,CONCAT11(bVar25 | pbVar55[0x5c],uVar30));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar19);
          pbVar56 = (byte *)CONCAT22(uVar62,CONCAT11(bVar25 + pbVar56[0x52],uVar30));
        }
        *pbVar19 = *pbVar19 + (char)pbVar19;
        cVar8 = (char)pbVar19 + '\x02';
        pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
        bVar63 = (POPCOUNT(cVar8) & 1U) == 0;
        if (!bVar63) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar9 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar9;
        cVar8 = (bVar9 + 0x6f) - (0x90 < bVar9);
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
        bVar9 = *pbVar56;
        cVar32 = (char)((uint)pbVar57 >> 8);
        *pbVar56 = *pbVar56 + cVar32;
        if (*pbVar56 == 0 || SCARRY1(bVar9,cVar32) != (char)*pbVar56 < '\0') goto code_r0x00403b2c;
        *pcVar15 = *pcVar15 + cVar8;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar63) {
        pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                   CONCAT11((char)((uint)pbVar56 >> 8) + pbVar56[0x53],(char)pbVar56
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      bVar9 = (byte)pbVar20 | pbVar20[0x400005e];
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar9);
      if ('\0' < (char)bVar9) {
        *pbVar19 = *pbVar19 + bVar9;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar15 = *pcVar15 + bVar9;
    *pbVar13 = *pbVar13 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar22,bVar9 + 6);
    pbVar19 = (byte *)uVar2;
    bVar9 = *pbVar18;
    bVar25 = (byte)pbVar57;
    *pbVar18 = *pbVar18 + bVar25;
    if (CARRY1(bVar9,bVar25)) {
      *pbVar19 = *pbVar19 + (char)uVar2;
      bVar7 = (byte)((uint)pbVar57 >> 8) | *pbVar19;
      uVar62 = CONCAT11(bVar7,bVar25);
      pbVar19 = pbVar19 + -*(int *)pbVar19;
      bVar9 = *pbVar56;
      *pbVar56 = *pbVar56 + bVar7;
      if (CARRY1(bVar9,bVar7)) {
        cVar32 = (char)pbVar19;
        *pbVar19 = *pbVar19 + cVar32;
        bVar9 = *pbVar18;
        pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                   CONCAT11((char)((uint)pbVar18 >> 8) - pbVar56[-0x3a],
                                            (char)pbVar18));
        *pbVar19 = *pbVar19 + cVar32;
        uVar27 = (undefined2)((uint)pbVar56 >> 0x10);
        bVar34 = (byte)((uint)pbVar56 >> 8) | pbVar18[0x32];
        pcVar15 = (char *)CONCAT22(uVar27,CONCAT11(bVar34,(char)pbVar56));
        cVar8 = *pcVar15;
        puVar44 = (undefined1 *)((int)puVar47 + -8);
        *(undefined2 *)((int)puVar47 + -8) = in_CS;
        cVar8 = cVar32 + cVar8 + '-';
        pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
        *pbVar19 = *pbVar19;
        *(undefined2 *)((int)puVar47 + -0xc) = in_ES;
        bVar11 = *pbVar18;
        uVar61 = *(undefined2 *)((int)puVar47 + -0xc);
        cVar32 = (char)pbVar56 - *pbVar13;
        bVar10 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar19 = *pbVar19 + cVar8;
        uVar62 = CONCAT11((bVar7 | bVar9) + bVar10 | *pbVar18,bVar25 - bVar11);
        pbVar56 = (byte *)CONCAT22(uVar27,CONCAT11(bVar34 + *(char *)(CONCAT31((int3)((uint)pcVar15
                                                                                     >> 8),cVar32) +
                                                                     0x4e),cVar32));
        *pbVar19 = *pbVar19 + cVar8;
      }
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),uVar62);
      bVar9 = (byte)pbVar19;
      uVar22 = (undefined3)((uint)pbVar19 >> 8);
      pcVar15 = (char *)CONCAT31(uVar22,bVar9 + 0x28);
      *pcVar15 = (*pcVar15 - (bVar9 + 0x28)) - (0xd7 < bVar9);
      *pbVar18 = *pbVar18 + (char)uVar62;
      bVar25 = bVar9 + 0x1b;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((char)((uint)pbVar56 >> 8) + pbVar56[0x4f],(char)pbVar56))
      ;
      *(char *)CONCAT31(uVar22,bVar25) = *(char *)CONCAT31(uVar22,bVar25) + bVar25;
      pcVar17 = (char *)CONCAT31(uVar22,bVar9 + 0x43);
      *pcVar17 = (*pcVar17 - (bVar9 + 0x43)) - (0xd7 < bVar25);
      *pbVar18 = *pbVar18 + (char)uVar62;
      pcVar15 = pcVar17 + -0x6b721c;
      pcVar17 = pcVar17 + -0x6b721a;
      *pcVar17 = *pcVar17 + (char)((uint)pbVar18 >> 8);
      cVar32 = *pcVar17;
      puVar35 = (undefined4 *)puVar44;
code_r0x00403a22:
      puVar29 = (undefined1 *)puVar35;
      if ((POPCOUNT(cVar32) & 1U) == 0) goto code_r0x00403a24;
      bVar9 = *pbVar18;
      *pbVar18 = *pbVar18 + (char)pbVar57;
      if (SCARRY1(bVar9,(char)pbVar57) == (char)*pbVar18 < '\0') {
        pbVar19 = pbVar55;
        pbVar21 = (byte *)(pcVar15 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar15 = *pcVar15 + (char)pcVar15;
      pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02');
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((char)((uint)pbVar56 >> 8) + pbVar56[0x54],(char)pbVar56))
      ;
      pbVar20 = pbVar13;
code_r0x00403a7d:
      cVar8 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar8;
      uVar22 = (undefined3)((uint)pcVar15 >> 8);
      cVar32 = cVar8 + '-';
      pbVar21 = (byte *)CONCAT31(uVar22,cVar32);
      pbVar19 = pbVar55;
      pbVar13 = pbVar20;
      if ((POPCOUNT(cVar32 - *pbVar18) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar21 = *pbVar21 + cVar32;
      bVar9 = cVar8 + 0x2f;
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        bVar9 = *pbVar18;
        *pbVar18 = *pbVar18 + (byte)pbVar57;
        *pbVar55 = *pbVar55 - CARRY1(bVar9,(byte)pbVar57);
        pbVar19 = (byte *)CONCAT31(uVar22,cVar8 + -0x53);
        pbVar55 = (byte *)*puVar35;
        puVar47 = puVar35 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
      bVar63 = 0x90 < bVar9;
      pcVar15 = (char *)CONCAT31(uVar22,cVar8 + -0x62);
code_r0x00403a8f:
      uVar22 = (undefined3)((uint)pcVar15 >> 8);
      bVar25 = (char)pcVar15 - bVar63;
      pbVar19 = (byte *)CONCAT31(uVar22,bVar25);
      bVar9 = *pbVar56;
      cVar8 = (char)((uint)pbVar57 >> 8);
      *pbVar56 = *pbVar56 + cVar8;
      puVar47 = puVar35;
      pbVar13 = pbVar20;
      if (*pbVar56 != 0 && SCARRY1(bVar9,cVar8) == (char)*pbVar56 < '\0') {
        *pbVar19 = *pbVar19 + bVar25;
        pbVar13 = (byte *)CONCAT31(uVar22,bVar25 + 0x2d);
        *(byte **)(pbVar20 + (int)unaff_EDI * 8) =
             pbVar18 + (uint)(0xd2 < bVar25) + *(int *)(pbVar20 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar35 + -4) = in_ES;
        bVar63 = CARRY1(*pbVar20,(byte)pbVar20);
        *pbVar20 = *pbVar20 + (byte)pbVar20;
        puVar45 = (undefined2 *)((int)puVar35 + -8);
        puVar35 = (undefined4 *)((int)puVar35 + -8);
        *puVar45 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar57 >> 8) | *pbVar19,(char)pbVar57));
      *pbVar13 = *pbVar13 + (char)pbVar19;
      puVar29 = (undefined1 *)puVar47;
code_r0x00403afc:
      puVar35 = (undefined4 *)puVar29;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((char)((uint)pbVar56 >> 8) + pbVar56[0x55],(char)pbVar56))
      ;
      *pbVar19 = *pbVar19 + (char)pbVar19;
      uVar22 = (undefined3)((uint)pbVar19 >> 8);
      bVar25 = (char)pbVar19 + 0x6f;
      bVar9 = *(byte *)CONCAT31(uVar22,bVar25);
      *pbVar18 = *pbVar18 + (char)pbVar57;
      pbVar19 = (byte *)CONCAT31(uVar22,(bVar25 & bVar9) + *pbVar13);
      *pbVar57 = *pbVar57 - (char)((uint)pbVar18 >> 8);
      break;
    }
    uVar61 = *(undefined2 *)((int)puVar47 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar48 = (undefined2 *)((int)puVar35 + -4);
  puVar35 = (undefined4 *)((int)puVar35 + -4);
  *puVar48 = in_ES;
  pbVar18[0x16060000] = pbVar18[0x16060000] - (char)pbVar57;
  pbVar56 = (byte *)((uint)pbVar56 | (uint)pbVar13);
  cVar8 = (char)pbVar19 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
  bVar63 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
  bVar9 = (byte)pbVar20;
  uVar22 = (undefined3)((uint)pbVar20 >> 8);
  if (!bVar63) {
    *pbVar18 = *pbVar18 + (char)pbVar57;
    pbVar19 = (byte *)CONCAT31(uVar22,bVar9 | *pbVar13);
code_r0x00403b73:
    pbVar20 = (byte *)((int)unaff_EDI + *(int *)(pbVar55 + -0x37));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar22 = (undefined3)((uint)pbVar19 >> 8);
    bVar9 = (byte)pbVar19 | *pbVar18;
    pcVar15 = (char *)CONCAT31(uVar22,bVar9);
    uVar66 = CONCAT44(pbVar18,pcVar15);
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *pcVar15 = *pcVar15 + bVar9;
      *pbVar13 = *pbVar13 + 1;
      return (byte *)CONCAT31(uVar22,bVar9 + 6);
    }
    bVar9 = *pbVar13;
    *pbVar13 = *pbVar13 + 1;
    pcVar1 = (code *)swi(4);
    if (SCARRY1(bVar9,'\x01')) {
      uVar66 = (*pcVar1)();
      pbVar57 = extraout_ECX_00;
    }
    pbVar18 = (byte *)uVar66;
    *pbVar18 = *pbVar18 + (char)uVar66;
    cVar32 = (char)((ulonglong)uVar66 >> 0x20);
    puVar28 = (uint *)CONCAT22((short)((ulonglong)uVar66 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar66 >> 0x28) | pbVar56[0x2f],cVar32));
    *pbVar18 = *pbVar18 + (char)uVar66;
    cVar8 = (char)pbVar57;
    bVar7 = (byte)((uint)pbVar57 >> 8) | *pbVar18;
    pbVar18 = pbVar18 + *(int *)pbVar18;
    bVar9 = *pbVar56;
    *pbVar56 = *pbVar56 + bVar7;
    bVar25 = (byte)pbVar18;
    if (CARRY1(bVar9,bVar7)) {
      *pbVar18 = *pbVar18 + bVar25;
      bVar7 = bVar7 | (byte)*puVar28;
      *pbVar56 = *pbVar56 - cVar32;
      *pbVar18 = *pbVar18 + bVar25;
      uVar22 = (undefined3)((uint)pbVar18 >> 8);
      bVar25 = bVar25 | (byte)*puVar28;
      puVar58 = (uint *)CONCAT31(uVar22,bVar25);
      bVar63 = CARRY4((uint)pbVar55,*puVar58);
      bVar65 = SCARRY4((int)pbVar55,*puVar58);
      pbVar55 = pbVar55 + *puVar58;
      *(uint *)((int)puVar35 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar65 * 0x800 | (uint)bVar64 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar55 < 0) * 0x80 |
           (uint)(pbVar55 == (byte *)0x0) * 0x40 | (uint)(bVar6 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar55 & 0xff) & 1U) == 0) * 4 | (uint)bVar63 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar58 = (char)*puVar58 + bVar25;
      *(undefined2 *)((int)puVar35 + -8) = in_ES;
      cVar32 = (char)pbVar56 - *pbVar13;
      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                 CONCAT11((char)((uint)pbVar56 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar56 >> 8),cVar32) +
                                                   0x5f),cVar32));
      *(byte *)puVar58 = (char)*puVar58 + bVar25;
      bVar9 = bVar25 + 0x2a & (byte)*puVar28;
      pbVar20 = pbVar20 + *(int *)(pbVar55 + 0x5f);
      *(char *)CONCAT31(uVar22,bVar9) = *(char *)CONCAT31(uVar22,bVar9) + bVar9;
      pbVar18 = (byte *)CONCAT31(uVar22,bVar9 + 0x2a);
      *(byte *)puVar28 = (byte)*puVar28 + 0x28;
      *pbVar18 = *pbVar18 + bVar9 + 0x2a;
      puVar51 = (undefined2 *)((int)puVar35 + -0xc);
      puVar35 = (undefined4 *)((int)puVar35 + -0xc);
      *puVar51 = in_ES;
    }
    else {
      *pbVar13 = *pbVar13 + bVar25;
    }
    pcVar15 = (char *)CONCAT22((short)((uint)pbVar57 >> 0x10),CONCAT11(bVar7,cVar8));
    *pbVar55 = *pbVar55 - bVar7;
    *(byte *)puVar28 = (byte)*puVar28 + cVar8;
    bVar9 = (byte)pbVar18 - 0xb;
    pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar9);
    if (10 < (byte)pbVar18) {
      *pbVar57 = *pbVar57 | bVar9;
      return pbVar57;
    }
    *(byte *)puVar28 = (byte)*puVar28 + cVar8;
    do {
      *(undefined2 *)((int)puVar35 + -4) = in_ES;
      bVar9 = pbVar56[-0x23];
      bVar25 = (byte)pbVar57;
      *pbVar57 = *pbVar57 + bVar25;
      bVar6 = pbVar55[-0x22];
      *pbVar57 = *pbVar57 + bVar25;
      uVar22 = (undefined3)((uint)pbVar57 >> 8);
      bVar25 = bVar25 | *pbVar13;
      pbVar18 = (byte *)CONCAT31(uVar22,bVar25);
      cVar32 = (char)pbVar56 - *pbVar13;
      pbVar56 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar56 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar56 >> 8) + bVar9 | bVar6
                                                          ,(char)pbVar56)) >> 8),cVar32);
      cVar8 = (char)pcVar15;
      pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                 CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar18,cVar8));
      *(byte *)puVar28 = (byte)*puVar28 + cVar8;
      bVar6 = bVar25 - *pbVar18;
      pbVar57 = (byte *)CONCAT31(uVar22,bVar6);
      pbVar13 = pbVar13 + (-(uint)(bVar25 < *pbVar18) - *(int *)pbVar57);
      in_ES = *(undefined2 *)((int)puVar35 + -4);
      puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(char)puVar28 * '\x02');
      *(byte **)pbVar57 = pbVar57 + *(int *)pbVar57;
      *pbVar20 = *pbVar20 + cVar32;
      bVar9 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar6;
      *puVar28 = (uint)(pbVar57 + (uint)CARRY1(bVar9,bVar6) + *puVar28);
    } while ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar57 = *pbVar57 + (char)pbVar57;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar57[(int)pcVar15]);
    puVar53 = (undefined2 *)((int)puVar35 + -4);
    *(undefined2 *)((int)puVar35 + -4) = uVar61;
    bVar63 = false;
    pbVar57 = (byte *)((uint)pbVar57 & 0xffffff00);
    do {
      pbVar20 = pbVar20 + (-(uint)bVar63 - *(int *)pbVar56);
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar57 >> 8),*pcVar15);
      *pcVar17 = *pcVar17 + *pcVar15;
      pbVar57 = (byte *)CONCAT31((int3)((uint)(pcVar17 +
                                              (pbVar13[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar17 +
                                        (pbVar13[0x2000001] < (byte)((uint)pcVar15 >> 8)) + 0xda7d)
                                 | (byte)*puVar28) + 0x7d);
      pcVar15 = pcVar15 + -1;
      *(byte *)puVar28 = (byte)*puVar28 + (char)pcVar15;
      while( true ) {
        uVar26 = (undefined3)((uint)puVar28 >> 8);
        cVar8 = (char)puVar28 + *(char *)((int)pbVar20 * 2 + 0xa0000e1);
        puVar28 = (uint *)CONCAT31(uVar26,cVar8);
        bVar63 = CARRY1((byte)pbVar57,(byte)*puVar28);
        uVar22 = (undefined3)((uint)pbVar57 >> 8);
        bVar9 = (byte)pbVar57 + (byte)*puVar28;
        pbVar57 = (byte *)CONCAT31(uVar22,bVar9);
        if ((POPCOUNT(bVar9) & 1U) != 0) break;
        *pbVar57 = *pbVar57 + bVar9;
        cVar32 = (char)pcVar15;
        pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar20[-0x65],cVar32));
        bVar6 = *pbVar57;
        *pbVar57 = *pbVar57 + bVar9;
        *(undefined2 *)((int)puVar53 + -4) = in_ES;
        if (CARRY1(bVar6,bVar9)) {
          *pbVar57 = *pbVar57 + bVar9;
          pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar56 >> 8) | pbVar55[-0x1d],
                                              (char)pbVar56));
          *pbVar57 = *pbVar57 + bVar9;
          bVar63 = false;
          bVar9 = bVar9 | (byte)*puVar28;
          pcVar17 = (char *)CONCAT31(uVar22,bVar9);
          uVar61 = *(undefined2 *)((int)puVar53 + -4);
          puVar35 = (undefined4 *)puVar53;
          while( true ) {
            bVar6 = (byte)pcVar17;
            uVar22 = (undefined3)((uint)pcVar17 >> 8);
            if (bVar63 == (char)bVar9 < '\0') break;
            *pcVar17 = *pcVar17 + bVar6;
            bVar6 = bVar6 | (byte)*puVar28;
            puVar58 = (uint *)CONCAT31(uVar22,bVar6);
            *pbVar20 = *pbVar20 << 1 | (char)*pbVar20 < '\0';
            uVar14 = *puVar58;
            *(byte *)puVar58 = (byte)*puVar58 + bVar6;
            pbVar55 = pbVar55 + (-(uint)CARRY1((byte)uVar14,bVar6) - *puVar58);
            *puVar58 = *puVar58 << 1 | (uint)((int)*puVar58 < 0);
            while( true ) {
              uVar14 = *puVar28;
              *(byte *)puVar28 = (byte)*puVar28 + (byte)pcVar15;
              uVar62 = *(undefined2 *)puVar35;
              cVar8 = (char)puVar58 + 'o' + CARRY1((byte)uVar14,(byte)pcVar15);
              pcVar17 = (char *)CONCAT31((int3)((uint)puVar58 >> 8),cVar8);
              pcVar15 = (char *)0x20a0000;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *pcVar17 = *pcVar17 + cVar8;
              bVar9 = bRamfe140212;
              pcVar15 = (char *)0x0;
              *(undefined2 *)puVar35 = in_ES;
              uVar22 = (undefined3)((uint)(pcVar17 + -0x732b0000) >> 8);
              bVar6 = in(0);
              puVar58 = (uint *)CONCAT31(uVar22,bVar6);
              uVar14 = *puVar28;
              *(byte *)puVar28 = (byte)*puVar28;
              if (SCARRY1((byte)uVar14,'\0') != (char)(byte)*puVar28 < '\0') {
                *(byte *)puVar58 = (byte)*puVar58 + bVar6;
                bVar6 = bVar6 | (byte)*puVar28;
                puVar58 = (uint *)CONCAT31(uVar22,bVar6);
                if ((POPCOUNT(bVar6) & 1U) == 0) {
                  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
                  pcVar15 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar9 | (byte)*puVar58) << 8);
                  puVar53 = (undefined2 *)((int)puVar35 + -4);
                  *(undefined2 *)((int)puVar35 + -4) = uVar62;
                  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar58 = (byte)*puVar58 + bVar6;
                puVar58 = (uint *)CONCAT31(uVar22,bVar6 | (byte)*puVar28);
              }
            }
            *(byte *)puVar28 = (byte)*puVar28;
            bVar63 = SCARRY1((char)puVar28,*pbVar20);
            bVar9 = (char)puVar28 + *pbVar20;
            puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),bVar9);
            puVar35 = (undefined4 *)((int)puVar35 + 4);
          }
          if (bVar63 == (char)bVar9 < '\0') {
            *(byte *)puVar28 = (byte)*puVar28 + (char)pcVar15;
            pbVar57 = (byte *)((uint)pcVar17 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar17 = *pcVar17 + bVar6;
          pbVar57 = (byte *)CONCAT31(uVar22,(bVar6 | (byte)*puVar28) + 0x7d);
          pcVar15 = pcVar15 + -1;
          *(byte *)puVar28 = (byte)*puVar28 + (char)pcVar15;
          puVar53 = (undefined2 *)puVar35;
        }
        else {
          *(byte *)puVar28 = (byte)*puVar28 + cVar32;
          puVar28 = (uint *)CONCAT31(uVar26,cVar8 + *(char *)((int)pbVar20 * 2 + 0xa0000e0));
          puVar53 = (undefined2 *)((int)puVar53 + -4);
        }
      }
    } while( true );
  }
  *pbVar20 = *pbVar20 + bVar9;
  bVar9 = bVar9 + 0x6f & *(byte *)CONCAT31(uVar22,bVar9 + 0x6f);
  *pbVar18 = *pbVar18 + (char)pbVar57;
  pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(char)pbVar18 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar9;
  pcVar15 = (char *)CONCAT31(uVar22,bVar9 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar9 = (char)pcVar15 - *pcVar15;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar9);
  *pbVar19 = *pbVar19 + bVar9;
  *(byte **)pbVar19 = pbVar18 + *(int *)pbVar19;
  *pbVar19 = *pbVar19 + bVar9;
  bVar63 = CARRY1(*pbVar19,bVar9);
  *pbVar19 = *pbVar19 + bVar9;
  puVar29 = (undefined1 *)puVar35;
  pbVar20 = pbVar13;
  while( true ) {
    puVar35 = (undefined4 *)puVar29;
    *(byte **)pbVar19 = pbVar19 + (uint)bVar63 + *(int *)pbVar19;
    bVar6 = ((uint)pbVar19 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar64 * -2 + 1;
    pbVar19[(int)pbVar18] = pbVar19[(int)pbVar18] + (char)pbVar56;
    *pbVar19 = *pbVar19 + (char)pbVar19;
    *(byte **)pbVar20 = pbVar56 + *(int *)pbVar20;
    bVar9 = (byte)((uint)pbVar57 >> 8);
    cVar8 = (char)pbVar57;
    pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),CONCAT11(bVar9 + *pbVar19,cVar8));
    pbVar19 = pbVar19 + (uint)CARRY1(bVar9,*pbVar19) + *(int *)pbVar19;
    *pbVar18 = *pbVar18 + cVar8;
    cVar8 = (char)pbVar56 - pbVar20[2];
    pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),cVar8);
    pbVar13 = pbVar20;
    if ((POPCOUNT(cVar8) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    bVar9 = (byte)pbVar19 | *pbVar56;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar9);
    if (bVar9 != 0) {
      pbVar55 = pbVar55 + -unaff_EDI[9];
      *pbVar21 = *pbVar21 + bVar9;
      pbVar57 = (byte *)CONCAT22((short)((uint)pbVar57 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar57 >> 8) | *pbVar18,(char)pbVar57));
      pbVar20 = pbVar20 + *(int *)pbVar21;
      pbVar21 = pbVar21 + *(int *)pbVar21;
      uVar22 = (undefined3)((uint)pbVar21 >> 8);
      bVar25 = (char)pbVar21 - *pbVar21;
      pbVar13 = (byte *)CONCAT31(uVar22,bVar25);
      bVar9 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar25;
      pbVar21 = (byte *)CONCAT31(uVar22,bVar25 - CARRY1(bVar9,bVar25));
    }
    bVar9 = *pbVar21;
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    iVar12 = *(int *)(pbVar55 + 0x1b000007);
    iVar3 = -(uint)CARRY1(bVar9,(byte)pbVar21);
    pbVar13 = pbVar20 + (uint)bVar64 * -8 + 4;
    out(*(undefined4 *)pbVar20,(short)pbVar18);
    pbVar19 = (byte *)(((uint)pbVar21 >> 8) * 0x100);
    *pbVar18 = *pbVar18 + (byte)pbVar57;
    bVar9 = (char)pbVar18 - *pbVar56;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar9);
    *pbVar56 = *pbVar56;
    *pbVar18 = *pbVar18 + (char)((uint)pbVar57 >> 8);
    *pbVar19 = *pbVar19;
    pcVar15 = (char *)(((uint)pbVar21 >> 8) * 0x200);
    *pcVar15 = *pcVar15 + (char)pbVar56;
    bVar63 = CARRY1(*pbVar57,bVar9);
    *pbVar57 = *pbVar57 + bVar9;
    puVar29 = (undefined1 *)((int)puVar35 + (iVar3 - iVar12));
    pbVar20 = pbVar13;
    if (bVar63) {
      *pbVar19 = *pbVar19;
      pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),(byte)pbVar57 | *pbVar18);
      puVar50 = (undefined2 *)((int)puVar35 + (iVar3 - iVar12) + -4);
      puVar35 = (undefined4 *)((int)puVar35 + (iVar3 - iVar12) + -4);
      *puVar50 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar49 = (undefined2 *)((int)puVar35 + -4);
  puVar35 = (undefined4 *)((int)puVar35 + -4);
  *puVar49 = uVar61;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar55 = pbVar55 + -*puVar58;
  puVar52 = (undefined1 *)((int)puVar53 + 4);
  do {
    bVar9 = (byte)puVar58;
    *(byte *)puVar58 = (byte)*puVar58 + bVar9;
    pbVar20 = pbVar20 + -*(int *)(pbVar55 + -0x1a);
    *(byte *)puVar58 = (byte)*puVar58 + bVar9;
    bVar9 = bVar9 | (byte)*puVar28;
    puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar9);
    *(byte *)puVar58 = (byte)*puVar58 | bVar9;
    bVar9 = (byte)*puVar58;
    pbVar55 = (byte *)0x2700001;
    while (puVar53 = (undefined2 *)puVar52, (POPCOUNT(bVar9) & 1U) == 0) {
      do {
        *(byte *)puVar58 = (byte)*puVar58 + (byte)puVar58;
        bVar9 = (byte)puVar58 | (byte)*puVar28;
        puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar9);
        puVar29 = (undefined1 *)puVar53;
        if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
        uVar23 = CONCAT21((short)((uint)pcVar15 >> 0x10),(byte)((uint)pcVar15 >> 8) | bRamfe140212);
        puVar5 = puVar29;
        while( true ) {
          puVar54 = puVar5;
          pcVar15 = (char *)((uint)uVar23 << 8);
          puVar52 = puVar54 + -4;
          puVar53 = (undefined2 *)(puVar54 + -4);
          puVar29 = puVar54 + -4;
          *(undefined2 *)(puVar54 + -4) = in_ES;
          bVar7 = (byte)puVar58;
          *(byte *)puVar58 = (byte)*puVar58 & bVar7;
          bVar6 = *pbVar56;
          bVar11 = (byte)uVar23;
          bVar25 = *pbVar56;
          *pbVar56 = *pbVar56 + bVar11;
          bVar9 = *pbVar56;
          if (!CARRY1(bVar6,bVar11)) break;
          *(byte *)puVar58 = (byte)*puVar58 + bVar7;
          pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar56 >> 8) | bRam026fffe2,
                                              (char)pbVar56));
          *(byte *)puVar58 = (byte)*puVar58 + bVar7;
          bVar7 = bVar7 | (byte)*puVar28;
          puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar7);
          bVar63 = (POPCOUNT(bVar7) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar56 >> 8);
            uVar61 = (undefined2)((uint)pbVar56 >> 0x10);
            if (!bVar63) {
              *(byte *)puVar28 = (byte)*puVar28;
              pbVar56 = (byte *)CONCAT22(uVar61,CONCAT11(cVar8 + pbVar56[-0x1f],(char)pbVar56));
              goto code_r0x00403d52;
            }
            *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
            uVar62 = (undefined2)((uint)pcVar15 >> 0x10);
            bVar6 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar58;
            uVar23 = CONCAT21(uVar62,bVar6);
            *puVar58 = *puVar58 & (uint)puVar58;
            *pbVar56 = *pbVar56 + bVar6;
            uVar22 = (undefined3)((uint)puVar58 >> 8);
            bVar9 = (char)puVar58 - bVar6;
            pcVar15 = (char *)CONCAT31(uVar22,bVar9);
            *pcVar15 = *pcVar15 + bVar9;
            bVar9 = bVar9 | (byte)*puVar28;
            puVar58 = (uint *)CONCAT31(uVar22,bVar9);
            puVar5 = puVar54 + -4;
            if ((POPCOUNT(bVar9) & 1U) != 0) break;
            *(byte *)puVar58 = (byte)*puVar58 + bVar9;
            pcVar15 = (char *)((uint)CONCAT21(uVar62,bVar6 | (byte)*puVar58) << 8);
            *puVar58 = *puVar58 - (int)puVar58;
            *(byte *)puVar28 = (byte)*puVar28;
            pbVar56 = (byte *)CONCAT22(uVar61,CONCAT11(cVar8 + pbVar56[-0x1d],(char)pbVar56));
            do {
              *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
              uVar61 = (undefined2)((uint)puVar28 >> 0x10);
              cVar8 = (char)puVar28;
              bVar9 = (byte)((uint)puVar28 >> 8) | pbVar56[-0x17];
              puVar28 = (uint *)CONCAT22(uVar61,CONCAT11(bVar9,cVar8));
              *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
              pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar56 >> 8) | bRam026fffeb,
                                                  (char)pbVar56));
              do {
                *(byte *)puVar58 = (byte)*puVar58 + (byte)puVar58;
                uVar22 = (undefined3)((uint)puVar58 >> 8);
                bVar25 = (byte)puVar58 | (byte)*puVar28;
                pcVar17 = (char *)CONCAT31(uVar22,bVar25);
                bVar6 = pbVar56[-0x16];
                *pcVar17 = *pcVar17 + bVar25;
                pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                           CONCAT11((char)((uint)pbVar56 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar56));
                *pcVar17 = *pcVar17 + bVar25;
                pbVar18 = (byte *)CONCAT31(uVar22,bVar25 | (byte)*puVar28);
                while( true ) {
                  *pbVar18 = *pbVar18 + (byte)pbVar18;
                  uVar22 = (undefined3)((uint)pbVar18 >> 8);
                  bVar6 = (byte)pbVar18 | (byte)*puVar28;
                  puVar58 = (uint *)CONCAT31(uVar22,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
                  bVar25 = pbVar20[-0x14];
                  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar28;
                  pcVar17 = (char *)CONCAT31(uVar22,bVar6);
                  bVar7 = pbVar56[-0x15];
                  *pcVar17 = *pcVar17 + bVar6;
                  pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),
                                                    (byte)((uint)pcVar15 >> 8) | bVar25 |
                                                    pbVar20[-0x13]) << 8);
                  *pcVar17 = *pcVar17 + bVar6;
                  pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                             CONCAT11((char)((uint)pbVar56 >> 8) + bVar7 |
                                                      bRam026fffef,(char)pbVar56));
                  *pcVar17 = *pcVar17 + bVar6;
                  pbVar18 = (byte *)CONCAT31(uVar22,bVar6 | (byte)*puVar28);
                  do {
                    do {
                      bVar25 = (byte)pbVar18;
                      *pbVar18 = *pbVar18 + bVar25;
                      cVar24 = (char)pbVar56;
                      pbVar56 = (byte *)CONCAT22((short)((uint)pbVar56 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar56 >> 8) | *pbVar18,
                                                          cVar24));
                      *pbVar18 = bVar25;
                      *pbVar18 = *pbVar18 + bVar25;
                      cVar32 = (char)((uint)pcVar15 >> 8) + *pbVar18;
                      pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),cVar32) << 8)
                      ;
                      uVar22 = (undefined3)((uint)pbVar18 >> 8);
                      bVar25 = bVar25 & *pbVar18;
                      pbVar18 = (byte *)CONCAT31(uVar22,bVar25);
                      bVar6 = *pbVar56;
                      *pbVar56 = *pbVar56 + cVar32;
                    } while (SCARRY1(bVar6,cVar32) == (char)*pbVar56 < '\0');
                    *pbVar18 = *pbVar18 + bVar25;
                    bVar25 = bVar25 | (byte)*puVar28;
                    pbVar18 = (byte *)CONCAT31(uVar22,bVar25);
                    if ((POPCOUNT(bVar25) & 1U) == 0) {
                      *pbVar18 = *pbVar18 + bVar25;
                      *pbVar18 = *pbVar18 + bVar25;
                      cVar8 = cVar8 - bVar9;
                      pbVar57 = (byte *)CONCAT31((int3)((uint)puVar28 >> 8),cVar8);
                      *pbVar18 = *pbVar18 + bVar25;
                      bRam0312382b = bRam0312382b | *pbVar57;
                      *(undefined2 *)(puVar54 + -8) = in_ES;
                      while( true ) {
                        bVar6 = (byte)pbVar18;
                        *pbVar18 = *pbVar18 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar20 + 0x21b0000)[(int)pbVar18];
                        uVar22 = (undefined3)((uint)pbVar18 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar57 = *pbVar57 + bRam0312382b;
                        pbVar18 = (byte *)CONCAT31(uVar22,bVar6 | *pbVar13);
                      }
                      *pbVar18 = *pbVar18 + bVar6;
                      bVar6 = bVar6 | *pbVar13;
                      pcVar15 = (char *)CONCAT31(uVar22,bVar6);
                      out(*(undefined4 *)pbVar13,(short)pbVar57);
                      *pcVar15 = *pcVar15 + bVar6;
                      uVar62 = CONCAT11(bVar9 | bRam6f0a002b,cVar8);
                      pcVar17 = (char *)CONCAT22(uVar61,uVar62);
                      *pcVar15 = *pcVar15 + bVar6;
                      *pcVar17 = *pcVar17 + bRam0312382b;
                      out(*(undefined4 *)(pbVar13 + (uint)bVar64 * -8 + 4),uVar62);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),cVar24 + *pcVar15);
                  } while (SCARRY1(cVar24,*pcVar15) != (char)(cVar24 + *pcVar15) < '\0');
                }
                uVar14 = *puVar28;
                *(byte *)puVar28 = (byte)*puVar28;
              } while (SCARRY1((byte)uVar14,'\0') != (char)(byte)*puVar28 < '\0');
              *(byte *)puVar28 = (byte)*puVar28;
              *pcVar15 = *pcVar15 - (char)pbVar56;
              *(byte *)puVar58 = (byte)*puVar58 + bVar6;
              bVar6 = bVar6 | (byte)*puVar28;
              puVar58 = (uint *)CONCAT31(uVar22,bVar6);
              bVar63 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar63);
          }
        }
      } while (SCARRY1(bVar25,bVar11));
    }
    *pbVar56 = *pbVar56 + (char)((uint)pcVar15 >> 8);
    *pbVar20 = *pbVar20 - (char)pbVar56;
  } while( true );
}


