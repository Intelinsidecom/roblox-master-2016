/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004034a8
 * Raw Name    : <CreateReportText>b__7
 * Demangled   : <CreateReportText>b__7
 * Prototype   : byte * <CreateReportText>b__7(char * csi, uint * param_2, undefined4 param_3, byte * param_4)
 * Local Vars  : uStack_10, pbStack_8, uVar1, pcVar2, uVar3, iVar4, puVar5, bVar6, bVar7, cVar8, cVar9, bVar10, bVar11, bVar12, in_EAX, pcVar13, pcVar14, uVar15, pbVar16, piVar17, pbVar18, pbVar19, pbVar20, pbVar21, puVar22, uVar23, uVar24, iVar25, extraout_ECX, extraout_ECX_00, uVar26, puVar27, cVar28, uVar29, unaff_EBX, pbVar30, bVar31, cVar32, bVar33, csi, uVar34, puVar35, puVar36, piVar37, piVar38, puVar39, puVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, unaff_EBP, pbVar55, unaff_ESI, pbVar56, unaff_EDI, puVar57, in_ES, in_CS, in_SS, uVar58, in_DS, uVar59, bVar60, in_AF, in_TF, in_IF, bVar61, bVar62, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar63, param_2, param_3, param_4
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

byte * __fastcall <CreateReportText>b__7(char *csi,uint *param_2,undefined4 param_3,byte *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int *in_EAX;
  undefined3 uVar23;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  byte *pbVar16;
  int *piVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint3 uVar24;
  byte *pbVar21;
  uint *puVar22;
  int iVar25;
  byte *extraout_ECX;
  undefined3 uVar26;
  byte *extraout_ECX_00;
  undefined1 *puVar27;
  char cVar28;
  undefined1 uVar29;
  byte bVar31;
  byte bVar33;
  byte *unaff_EBX;
  char cVar32;
  byte *pbVar30;
  undefined2 uVar34;
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
  byte *unaff_EBP;
  byte *pbVar55;
  uint *unaff_ESI;
  byte *pbVar56;
  uint *unaff_EDI;
  uint *puVar57;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar58;
  undefined2 in_DS;
  undefined2 uVar59;
  bool bVar60;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar61;
  bool bVar62;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar63;
  undefined4 uStack_10;
  byte *pbStack_8;
  
  bVar61 = false;
code_r0x004034a8:
                    /* .NET CLR Managed Code */
  csi = (char *)CONCAT22((short)((uint)csi >> 0x10),
                         CONCAT11((char)((uint)csi >> 8) + (char)*in_EAX,(char)csi));
  bVar6 = (byte)in_EAX;
  *(byte *)in_EAX = (char)*in_EAX + bVar6;
  param_4 = (byte *)CONCAT22(param_4._2_2_,in_ES);
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                             (char)param_2 - *(byte *)((int)param_2 + 0x467e02));
  unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar6;
  uVar15 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
  if (!CARRY1((byte)uVar15,bVar6)) {
    pbVar16 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
    *pbVar16 = *pbVar16 + bVar6;
    goto code_r0x004034f3;
  }
  *(byte *)in_EAX = (char)*in_EAX + bVar6;
  uVar23 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = bVar6 | *(byte *)((int)in_EAX + 0x4000046);
  in_EAX = (int *)CONCAT31(uVar23,bVar6);
  if ((char)bVar6 < '\x01') {
    *(byte *)in_EAX = (char)*in_EAX + bVar6;
    unaff_EBP = param_4;
    goto code_r0x004034f3;
  }
  *(byte *)in_EAX = (char)*in_EAX + bVar6;
  pbVar16 = (byte *)CONCAT31(uVar23,bVar6 + 0x6f);
  *pbVar16 = *pbVar16 + bVar6 + 0x6f;
  unaff_EBP = unaff_EBP + -*param_2;
  in_SS = in_ES;
  do {
    bVar6 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    csi = (char *)CONCAT22((short)((uint)csi >> 0x10),
                           CONCAT11((char)((uint)csi >> 8) + bVar6 | (byte)*param_2,(char)csi));
    uVar23 = (undefined3)((uint)pbVar16 >> 8);
    bVar6 = (byte)pbVar16 | (byte)*param_2;
    bVar7 = bVar6 - *(byte *)CONCAT31(uVar23,bVar6);
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (uint)(bVar6 < *(byte *)CONCAT31(uVar23,bVar6)) +
                        *(int *)CONCAT31(uVar23,bVar7));
    pbVar16 = (byte *)CONCAT31(uVar23,bVar7);
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)param_2;
    bVar6 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
    *param_2 = (uint)(pbVar16 + (uint)CARRY1(bVar6,bVar7) + *param_2);
    if ((POPCOUNT(*param_2 & 0xff) & 1U) != 0) {
      *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
      puVar57 = unaff_ESI;
      goto code_r0x00403529;
    }
    *pbVar16 = *pbVar16 + bVar7;
    in_EAX = (int *)CONCAT31(uVar23,bVar7 + 0x6f);
code_r0x004034f3:
    param_4 = (byte *)CONCAT22(param_4._2_2_,in_ES);
    *in_EAX = (int)(*in_EAX + (int)in_EAX);
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)in_EAX;
    unaff_EBP = unaff_EBP + 1;
    pcVar13 = (char *)((int)((uint)in_EAX | 8) + *(int *)((uint)in_EAX | 8));
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pcVar14 = pcVar13 + 0x53000000;
    bVar6 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar6;
    *unaff_EBX = *unaff_EBX + (char)param_2;
    *pcVar14 = *pcVar14 + bVar6;
    *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
    uVar15 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    if (CARRY1((byte)uVar15,bVar6)) {
      in_EAX = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar6 + 0xa2);
      csi[0x2a0a0000] = csi[0x2a0a0000] - (char)csi;
      goto code_r0x004034a8;
    }
    pcVar13[0x5300006f] = pcVar13[0x5300006f] + (char)((uint)param_2 >> 8);
    pcVar13 = pcVar13 + 0x53000001;
    bVar7 = (byte)pcVar13;
    bRam7e060000 = bVar6;
    *pcVar13 = *pcVar13 + bVar7;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar7 + 0x2d);
    unaff_ESI[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar7) + unaff_ESI[(int)unaff_EDI * 2]);
    puVar57 = unaff_ESI;
code_r0x00403529:
    unaff_ESI = puVar57 + 1;
    out(*puVar57,(short)param_2);
    bVar6 = *pbVar16;
    bVar7 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
  } while (!CARRY1(bVar6,bVar7));
  *pbVar16 = *pbVar16 + bVar7;
  uVar23 = (undefined3)((uint)pbVar16 >> 8);
  bVar7 = bVar7 | pbVar16[0x4000040];
  pcVar14 = (char *)CONCAT31(uVar23,bVar7);
  if ((char)bVar7 < '\x01') goto code_r0x00403579;
  *pcVar14 = *pcVar14 + bVar7;
  cVar8 = bVar7 + 10;
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  puVar57 = unaff_ESI;
  if (cVar8 == '\0' || SCARRY1(bVar7,'\n') != cVar8 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar6 = (byte)pcVar14;
  *pcVar14 = *pcVar14 + bVar6;
  in_EAX = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar6 + 0x2d);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
  pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_ES);
code_r0x00403549:
  uVar15 = *unaff_ESI;
  bVar6 = (byte)in_EAX;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
  if (!CARRY1((byte)uVar15,bVar6)) goto code_r0x004034f3;
  *(byte *)in_EAX = (char)*in_EAX + bVar6;
  uVar23 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = bVar6 | *(byte *)((int)in_EAX + 0x4000041);
  if ((char)bVar6 < '\x01') {
    *(byte *)param_2 = (byte)*param_2 + (char)csi;
    *(byte *)param_2 = (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x7e);
    param_2 = (uint *)((int)param_2 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
  in_EAX = (int *)CONCAT31(uVar23,bVar6 + 0xb);
  puVar57 = unaff_ESI;
code_r0x0040355b:
  unaff_EBP = unaff_EBP + -*(int *)((int)puVar57 + 2);
  *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
  uVar15 = *puVar57;
  bVar6 = (byte)in_EAX;
  *(byte *)puVar57 = (byte)*puVar57 + bVar6;
  if (CARRY1((byte)uVar15,bVar6)) goto code_r0x00403548;
code_r0x00403565:
  piVar17 = in_EAX + 0x1ec09c00;
  pbVar16 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
  *pbVar16 = *pbVar16 + (char)piVar17;
  *(byte *)puVar57 = (byte)*puVar57 + (char)piVar17 + (char)*piVar17;
  unaff_ESI = puVar57 + 1;
  out(*puVar57,(short)param_2);
  pcVar14 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),uRam8c0a0000);
code_r0x00403579:
  *csi = *csi + (char)pcVar14;
  *(byte *)param_2 = (byte)*param_2 - (char)((uint)pcVar14 >> 8);
  puVar57 = unaff_ESI;
code_r0x00403580:
  *(byte *)param_2 = (byte)*param_2 + (char)csi;
  unaff_ESI = puVar57 + 1;
  out(*puVar57,(short)param_2);
  bVar6 = (byte)pcVar14;
  param_2 = (uint *)((int)param_2 + 1);
  bRam7e060000 = bVar6;
  *pcVar14 = *pcVar14 + bVar6;
  uVar23 = (undefined3)((uint)pcVar14 >> 8);
  bVar7 = bVar6 + 0x2d;
  pcVar14 = (char *)CONCAT31(uVar23,bVar7);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
  pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_ES);
  uVar15 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
  if (!CARRY1((byte)uVar15,bVar7)) {
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar57 + 0x45),(char)unaff_EBX));
    goto code_r0x0040353f;
  }
  *pcVar14 = *pcVar14 + bVar7;
  bVar7 = bVar7 | pcVar14[0x4000042];
  pcVar14 = (char *)CONCAT31(uVar23,bVar7);
  if ('\0' < (char)bVar7) {
code_r0x004035a1:
    bVar7 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar7;
    uVar23 = (undefined3)((uint)pcVar14 >> 8);
    bVar6 = bVar7 + 10;
    if (bVar6 == 0 || SCARRY1(bVar7,'\n') != (char)bVar6 < '\0') {
      pcVar14 = (char *)CONCAT31(uVar23,bVar7 + 8 + (0xf5 < bVar7));
code_r0x004035e5:
      bVar7 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar7;
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      bVar6 = bVar7 + 0x2d;
      pcVar14 = (char *)CONCAT31(uVar23,bVar6);
      unaff_ESI[(int)unaff_EDI * 2] =
           (uint)((int)param_2 + (uint)(0xd2 < bVar7) + unaff_ESI[(int)unaff_EDI * 2]);
      uVar15 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      if (CARRY1((byte)uVar15,bVar6)) {
        *pcVar14 = *pcVar14 + bVar6;
        bVar6 = bVar6 | pcVar14[0x4000044];
        pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
        if ('\0' < (char)bVar6) {
          *pbVar16 = *pbVar16 + bVar6;
          pbVar16 = (byte *)(CONCAT31(uVar23,bVar6 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar6));
          pbRam2a060000 = pbVar16;
          *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
          *(byte *)param_2 = (byte)*param_2 ^ (byte)pbVar16;
          *pbVar16 = *pbVar16 + (char)((uint)csi >> 8);
          *pbVar16 = *pbVar16 + (byte)pbVar16;
          puVar57 = unaff_EDI;
          in_SS = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      csi = (char *)CONCAT31((int3)((uint)csi >> 8),
                             (byte)csi | *(byte *)((int)(param_2 + 0xa004000) + (int)unaff_EDI));
      puVar57 = unaff_ESI;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    bVar7 = bVar7 + 0x37;
    in_EAX = (int *)CONCAT31(uVar23,bVar7);
    unaff_ESI[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,in_ES);
    uVar15 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
    puVar57 = unaff_ESI;
    if (!CARRY1((byte)uVar15,bVar7)) goto code_r0x0040355b;
    *(byte *)in_EAX = (char)*in_EAX + bVar7;
    bVar7 = bVar7 | *(byte *)((int)in_EAX + 0x4000043);
    pbVar16 = (byte *)CONCAT31(uVar23,bVar7);
    if ((char)bVar7 < '\x01') {
      *pbVar16 = *pbVar16 + bVar7;
      unaff_EBP = unaff_EBP + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar16 = *pbVar16 + bVar7;
      uStack_10 = (undefined4 *)((uint)uStack_10._2_2_ << 0x10);
      piVar17 = (int *)CONCAT31(uVar23,bVar7 - *pbVar16);
      unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar7 < *pbVar16) - *piVar17));
      pbVar16 = (byte *)CONCAT31(uVar23,(bVar7 - *pbVar16) + (char)*piVar17);
      pbStack_8 = (byte *)0x17000000;
      puVar57 = unaff_EDI;
code_r0x00403615:
      bVar6 = *pbVar16;
      bVar7 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      *param_2 = (uint)(pbVar16 + (uint)CARRY1(bVar6,bVar7) + *param_2);
      unaff_EDI = puVar57;
      if ((POPCOUNT(*param_2 & 0xff) & 1U) == 0) {
        *pbVar16 = *pbVar16 + bVar7;
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 + 0x28);
        unaff_EDI = puVar57 + 1;
        uVar15 = in((short)param_2);
        *puVar57 = uVar15;
        *pcVar14 = *pcVar14 + bVar7 + 0x28;
        csi = (char *)CONCAT22((short)((uint)csi >> 0x10),
                               CONCAT11((byte)((uint)csi >> 8) | unaff_EBX[(int)csi],(char)csi));
        pcVar14[0x28] = pcVar14[0x28] + (char)((uint)param_2 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar16 = *pbVar16 + bVar7;
    uVar15 = CONCAT31(uVar23,bVar7 + 0xb);
    in_EAX = (int *)(uVar15 - *unaff_ESI);
    if (uVar15 < *unaff_ESI) {
      cVar8 = (char)in_EAX;
      *(char *)in_EAX = (char)*in_EAX + cVar8;
      uVar58 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar9 = (char)unaff_EBX;
      bVar6 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 2);
      *unaff_EBP = *unaff_EBP - cVar9;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar8;
      uStack_10 = (undefined4 *)CONCAT22(uStack_10._2_2_,in_ES);
      unaff_EBX = (byte *)CONCAT22(uVar58,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar58,CONCAT11(bVar6,
                                                  cVar9)) + 0x38),cVar9));
      *(char *)in_EAX = (char)*in_EAX + cVar8;
      pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar8 + 'o');
      *(byte *)param_2 = (byte)*param_2 + (char)csi;
      *pcVar14 = *pcVar14 - cVar9;
      *pcVar14 = *pcVar14 + cVar8 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - unaff_ESI[0x11]);
      goto code_r0x004035e5;
    }
    puVar57 = unaff_ESI + 1;
    out(*unaff_ESI,(short)param_2);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar7) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_8 & 0x4000) != 0;
  bVar61 = ((uint)pbStack_8 & 0x400) != 0;
  in_IF = ((uint)pbStack_8 & 0x200) != 0;
  in_TF = ((uint)pbStack_8 & 0x100) != 0;
  in_AF = ((uint)pbStack_8 & 0x10) != 0;
  in_ID = ((uint)pbStack_8 & 0x200000) != 0;
  in_AC = ((uint)pbStack_8 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar8 = (char)pcVar14;
  *pcVar14 = *pcVar14 + cVar8;
  csi = (char *)CONCAT22((short)((uint)csi >> 0x10),
                         CONCAT11((byte)((uint)csi >> 8) | (byte)*param_2,(char)csi));
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3e],
                                        (char)unaff_EBX));
  *pcVar14 = *pcVar14 + cVar8;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8 + '(');
  cVar8 = (char)((uint)param_2 >> 8);
  *(byte *)((int)param_2 + 0x21) = *(byte *)((int)param_2 + 0x21) + cVar8;
  pbVar18 = pbVar16 + 2;
  *pbVar18 = *pbVar18 + cVar8;
  bVar6 = *pbVar18;
code_r0x00403643:
  cVar8 = (char)pbVar16;
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *pbVar16 = *pbVar16 + cVar8;
    uVar23 = (undefined3)((uint)pbVar16 >> 8);
    cVar9 = cVar8 + '(';
    pcVar14 = (char *)CONCAT31(uVar23,cVar9);
    in_AF = ((uint)pbVar16 & 0x1000) != 0;
    *pcVar14 = *pcVar14 + cVar9;
    puVar57 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*unaff_ESI);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)unaff_ESI + 0x3f),(char)unaff_EBX));
    *pcVar14 = *pcVar14 + cVar9;
    pbVar16 = (byte *)CONCAT31(uVar23,cVar8 + 'M');
    param_2 = (uint *)((uint)puVar57 | *puVar57);
    *pbVar16 = *pbVar16 + (char)((uint)csi >> 8);
code_r0x00403659:
    puVar57 = (uint *)((int)unaff_EDI + (uint)bVar61 * -2 + 1);
    bVar6 = (byte)pbVar16;
    *(byte *)unaff_EDI = bVar6;
    *pbVar16 = *pbVar16 + bVar6;
    uVar23 = (undefined3)((uint)pbVar16 >> 8);
    bVar6 = bVar6 | (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6);
    unaff_EDI = puVar57;
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x0040369e;
    *pcVar14 = *pcVar14 + bVar6;
    bVar6 = bVar6 + 2;
    *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    puVar22 = unaff_ESI + (uint)bVar61 * -2 + 1;
    out(*unaff_ESI,(short)param_2);
    unaff_EDI = (uint *)((int)puVar57 + (uint)bVar61 * -2 + 1);
    unaff_ESI = (uint *)((int)puVar22 + (uint)bVar61 * -2 + 1);
    *(byte *)puVar57 = (byte)*puVar22;
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    cVar9 = (char)((uint)csi >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar9;
    cVar8 = (bVar6 | (byte)*unaff_ESI) - 6;
    piVar17 = (int *)CONCAT31(uVar23,cVar8);
    pcVar14 = (char *)((int)piVar17 * 2 + 0x2adc0a00);
    *pcVar14 = *pcVar14 - cVar9;
    *piVar17 = (int)(*piVar17 + (int)param_2);
    *(char *)piVar17 = (char)*piVar17 + cVar8;
    bVar6 = cVar8 + (char)*piVar17;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar15 = CONCAT31(uVar23,bVar6 + in_AF * '\x06') & 0xffffff0f;
    pbVar16 = (byte *)CONCAT22((short)(uVar15 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) + in_AF,(char)uVar15));
    pcVar14 = csi;
  }
  else {
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)param_2 >> 8);
    pcVar14 = csi;
  }
  *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)((uint)pbVar16 >> 8);
  *(byte *)param_2 = (byte)*param_2 + (char)pcVar14;
  bVar7 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  csi = pcVar14;
  unaff_EBP = pbStack_8;
  if (!CARRY1(bVar6,bVar7)) goto code_r0x004036a6;
  *pbVar16 = *pbVar16 + bVar7;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar7 | pbVar16[0x400003f]);
  csi = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),
                         (char)pcVar14 - *(byte *)((int)param_2 + 0x5040302));
  *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) - (char)((uint)pcVar14 >> 8);
  while( true ) {
code_r0x004036a6:
    csi = (char *)CONCAT31((int3)((uint)csi >> 8),(char)csi + (byte)*unaff_ESI);
    pbVar16 = (byte *)(CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + '%') + 0x1ebd9f3);
    uStack_10 = (undefined4 *)CONCAT22(uStack_10._2_2_,in_ES);
    bVar6 = (byte)pbVar16;
    bVar60 = CARRY1(*pbVar16,bVar6);
    *pbVar16 = *pbVar16 + bVar6;
    puVar35 = uStack_10 + -1;
    *(undefined2 *)(uStack_10 + -1) = in_ES;
    cVar8 = (char)param_2;
    if (bVar60) {
      *pbVar16 = *pbVar16 + bVar6;
      uVar58 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar31 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x47];
      pcVar14 = (char *)CONCAT22(uVar58,CONCAT11(bVar31,(char)unaff_EBX));
      *pbVar16 = *pbVar16 + bVar6;
      uVar23 = (undefined3)((uint)pbVar16 >> 8);
      bVar6 = bVar6 + 0x2a;
      *pcVar14 = *pcVar14 + cVar8;
      pbVar16 = (byte *)((int)CONCAT31(uVar23,bVar6) * 2);
      *pbVar16 = *pbVar16 ^ bVar6;
      bVar6 = bVar6 ^ *(byte *)CONCAT31(uVar23,bVar6);
      pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar6;
      *pbVar16 = (*pbVar16 - bVar6) - CARRY1(bVar7,bVar6);
      *csi = *csi + cVar8;
      unaff_EBX = (byte *)CONCAT22(uVar58,CONCAT11(bVar31 + pcVar14[0x38],(char)unaff_EBX));
      *pbVar16 = *pbVar16 + bVar6;
      cVar9 = bVar6 + 2;
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar63 = (*pcVar2)();
        pbVar16 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar23,cVar9) = *(char *)CONCAT31(uVar23,cVar9) + cVar9;
      bVar6 = bVar6 + 0x71;
      pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
      in_SS = *(undefined2 *)(uStack_10 + -1);
      *pbVar16 = *pbVar16 + bVar6;
      iVar25 = (int)csi - *param_2;
      csi = (char *)CONCAT22((short)((uint)iVar25 >> 0x10),
                             CONCAT11((char)((uint)iVar25 >> 8) + *pbVar16,(char)iVar25));
      unaff_EBP = (byte *)*uStack_10;
      bVar60 = CARRY1(*pbVar16,bVar6);
      *pbVar16 = *pbVar16 + bVar6;
      *(undefined2 *)uStack_10 = in_ES;
      *(undefined2 *)(uStack_10 + -1) = in_ES;
    }
    bVar6 = (byte)pbVar16;
    uVar23 = (undefined3)((uint)pbVar16 >> 8);
    if (bVar60) break;
    *(byte *)param_2 = (byte)*param_2 + (byte)csi;
    *(byte *)((int)param_2 + (int)unaff_EBP) = *(byte *)((int)param_2 + (int)unaff_EBP) + bVar6;
    pcVar14 = (char *)CONCAT31(uVar23,(byte)*param_2);
code_r0x0040369e:
    pbVar16 = (byte *)(pcVar14 + *(int *)(pcVar14 + 0x6c28));
  }
  *pbVar16 = *pbVar16 + bVar6;
  uVar24 = (uint3)((uint)csi >> 8);
  pbVar18 = (byte *)CONCAT31(uVar24,(byte)csi | *unaff_EBX);
  in_SS = *(undefined2 *)uStack_10;
  puVar35 = uStack_10 + 1;
  puVar57 = unaff_ESI + (uint)bVar61 * -2 + 1;
  out(*unaff_ESI,(short)param_2);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar61 * -2 + 1);
  *pbVar16 = *pbVar16 + bVar6;
  bVar6 = bVar6 | (byte)*unaff_EDI;
  pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)csi >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar6);
  *(undefined2 *)uStack_10 = pbStack_8._0_2_;
  cVar28 = (char)unaff_EBX;
  cVar9 = cVar28 - (byte)*param_2;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9);
  if (cVar9 != '\0' && (char)(byte)*param_2 <= cVar28) {
    *pbVar16 = *pbVar16 + bVar6;
    iVar25 = CONCAT31(uVar23,bVar6 + 0x2a);
    unaff_ESI = (uint *)((int)puVar57 + 1);
    cVar9 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x7b);
    uVar63 = CONCAT44(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar9,cVar8)),iVar25);
    in_ES = *(undefined2 *)uStack_10;
    pcVar14 = (char *)(iVar25 + 0x6f);
    *pcVar14 = *pcVar14 + cVar9;
    pbVar18 = (byte *)((uint)uVar24 << 8);
    do {
      piVar17 = (int *)((ulonglong)uVar63 >> 0x20);
      pcVar14 = (char *)uVar63;
      *(char *)piVar17 = (char)*piVar17;
      if ((char)*piVar17 == '\0') {
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        pbStack_8._0_2_ = in_ES;
_ctor:
        param_2 = (uint *)((ulonglong)uVar63 >> 0x20);
        pbVar18 = (byte *)((uint)CONCAT21((short)((uint)pbVar18 >> 0x10),
                                          (char)((uint)pbVar18 >> 8) + *(char *)uVar63) << 8);
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        *(byte *)param_2 = (byte)*param_2;
        uVar23 = (undefined3)((ulonglong)uVar63 >> 8);
        bVar7 = (char)uVar63 - *(char *)uVar63;
        pbVar16 = (byte *)CONCAT31(uVar23,bVar7);
        bVar6 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar7;
        puVar57 = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar6,bVar7) + *(int *)pbVar16);
        pbVar16 = (byte *)CONCAT31(uVar23,bVar7);
        uStack_10 = puVar35;
        break;
      }
      *pcVar14 = *pcVar14 + (char)uVar63;
      *piVar17 = (int)(unaff_EBP + *piVar17);
      unaff_ESI = (uint *)((int)unaff_ESI + 1);
      uVar63 = CONCAT44(CONCAT22((short)((ulonglong)uVar63 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar63 >> 0x28) +
                                          *(char *)((int)piVar17 + -0x33),
                                          (char)((ulonglong)uVar63 >> 0x20))),pcVar14);
      in_ES = *(undefined2 *)puVar35;
      puVar35 = (undefined4 *)((int)puVar35 + 4);
      pbVar16 = pbVar18;
code_r0x0040371e:
      puVar57 = (uint *)((ulonglong)uVar63 >> 0x20);
      pbVar56 = (byte *)uVar63;
      bVar7 = (byte)((ulonglong)uVar63 >> 0x28);
      pbVar56[0x6f] = pbVar56[0x6f] + bVar7;
      pbVar18 = (byte *)((uint)pbVar16 & 0xffffff00);
      *(char *)puVar57 = (char)*puVar57;
      bVar6 = (byte)uVar63;
      if ((char)*puVar57 != '\0') {
        *pbVar56 = *pbVar56 + bVar6;
        uVar15 = *puVar57;
        *puVar57 = (uint)(unaff_EBP + *puVar57);
        piVar37 = (int *)((int)puVar35 + -4);
        *(uint **)((int)puVar35 + -4) = unaff_ESI;
        if (CARRY4(uVar15,(uint)unaff_EBP)) {
          *pbVar56 = *pbVar56 + bVar6;
          *(undefined2 *)((int)puVar35 + -8) = in_ES;
          puVar22 = puVar57 + 0x1d028000;
          uVar15 = *puVar22;
          *(byte *)puVar22 = (byte)*puVar22 - bVar7;
          *(uint *)pbVar56 = (*(int *)pbVar56 - (int)pbVar56) - (uint)((byte)uVar15 < bVar7);
          *(byte *)puVar57 = (char)*puVar57 + bVar6;
          *unaff_EBP = *unaff_EBP;
          uVar63 = CONCAT44(puVar57,CONCAT31((int3)((ulonglong)uVar63 >> 8),bVar6 + 0x2a));
          puVar36 = (undefined2 *)((int)puVar35 + -0xc);
          puVar35 = (undefined4 *)((int)puVar35 + -0xc);
          *puVar36 = in_DS;
          pbStack_8._0_2_ = in_ES;
          goto _ctor;
        }
        bVar60 = false;
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),*pbVar56);
        goto code_r0x004037a7;
      }
      bVar7 = *pbVar56;
      *pbVar56 = *pbVar56 + bVar6;
      *(uint *)pbVar56 = (*(int *)pbVar56 - (int)pbVar56) - (uint)CARRY1(bVar7,bVar6);
      bVar6 = *pbVar18;
      bVar7 = (byte)((ulonglong)uVar63 >> 0x20);
      *pbVar18 = *pbVar18 + bVar7;
      if (CARRY1(bVar6,bVar7)) goto code_r0x0040375a;
    } while( true );
  }
  uVar63 = CONCAT44(param_2,pbVar16);
  unaff_ESI = puVar57 + (uint)bVar61 * -2 + 1;
  out(*puVar57,(short)param_2);
  bVar7 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  *pbVar18 = *pbVar18 + (char)unaff_EBX;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  *(byte **)(unaff_EBX + -0x49) =
       (byte *)((int)unaff_ESI + (uint)CARRY1(bVar6,bVar7) + *(int *)(unaff_EBX + -0x49));
  puVar35 = uStack_10;
  in_ES = pbStack_8._0_2_;
code_r0x0040375a:
  pbVar16 = (byte *)uVar63;
  *pbVar16 = *pbVar16 + (char)uVar63;
  bVar60 = CARRY1((byte)((uint)pbVar18 >> 8),*pbVar16);
  *(undefined2 *)((int)puVar35 + -4) = in_SS;
  iVar25 = CONCAT31(0x1f0a00,bVar60 + 'o') + *(int *)(unaff_EBX + (int)unaff_EBP) +
           (uint)(0x90 < bVar60) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar63 >> 0x20);
  pcVar13 = (char *)(CONCAT31((int3)((uint)iVar25 >> 8),(char)iVar25 + -0x66) | *unaff_EDI);
  bVar6 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar14 = (char *)CONCAT22(0xd0a,(ushort)bVar6 << 8);
  *pcVar13 = *pcVar13 + (char)pcVar13;
  bVar7 = (byte)((ulonglong)uVar63 >> 0x20);
  puVar27 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar63 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar63 >> 0x28) | unaff_EBX[(int)unaff_EBP],bVar7));
  *pcVar14 = *pcVar14 + (char)pcVar13;
  *unaff_EBP = *unaff_EBP - bVar6;
  *puVar27 = *puVar27;
  pbVar16 = (byte *)(((uint)pcVar13 | 8) + 0x4490f9d8);
  bVar6 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar6;
  uVar15 = *unaff_ESI;
  *(uint *)((int)unaff_ESI + (int)pbVar16) =
       *(uint *)((int)unaff_ESI + (int)pbVar16) ^ (uint)pcVar14;
  *pbVar16 = *pbVar16 | bVar6;
  piVar37 = (int *)0x2609fffc;
  bVar60 = false;
  uRam2609fffc = in_ES;
  *pbVar16 = *pbVar16 | bVar6;
  uVar63 = CONCAT44(CONCAT31((int3)((uint)puVar27 >> 8),bVar7 | (byte)uVar15),pbVar16);
code_r0x004037a7:
  while( true ) {
    pbVar16 = (byte *)((ulonglong)uVar63 >> 0x20);
    uVar58 = (undefined2)((ulonglong)uVar63 >> 0x20);
    out(*unaff_ESI,uVar58);
    out(unaff_ESI[(uint)bVar61 * -2 + 1],uVar58);
    puVar57 = (uint *)((int)unaff_EDI + (int)pbVar16);
    uVar15 = *puVar57;
    uVar1 = (uint)uVar63 + *puVar57;
    *puVar57 = uVar1 + bVar60;
    iVar25 = *piVar37 + *(int *)(pcVar14 + (int)pbVar16) +
             (uint)(CARRY4(uVar15,(uint)uVar63) || CARRY4(uVar1,(uint)bVar60));
    cVar8 = (char)iVar25 + '\t';
    pbVar18 = (byte *)CONCAT31((int3)((uint)iVar25 >> 8),cVar8);
    pcVar13 = (char *)((uint)bVar61 * -8 + 0x260a0004);
    out(uRam260a0000,uVar58);
    uVar58 = (undefined2)piVar37[1];
    *pbVar18 = *pbVar18 + cVar8;
    bVar7 = (byte)((uint)pcVar14 >> 8) | *pbVar16;
    *(undefined2 *)(piVar37 + 1) = in_DS;
    bVar6 = *pbVar18;
    pbVar18 = pbVar18 + (uint)CARRY1(bVar7,*pbVar18) + *(int *)pbVar18;
    *pbVar16 = *pbVar16 + 6;
    cVar9 = (char)unaff_EBX - *pcVar13;
    pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),CONCAT11(bVar7 + bVar6 + *pbVar18,6));
    *pbVar18 = *pbVar18;
    *(undefined2 *)piVar37 = in_ES;
    uVar23 = (undefined3)((uint)pbVar18 >> 8);
    cVar8 = (char)pbVar18 - *pbVar18;
    piVar17 = (int *)CONCAT31(uVar23,cVar8);
    unaff_ESI = (uint *)(pcVar13 + *piVar17);
    bVar6 = cVar8 + (char)*piVar17;
    pcVar13 = (char *)CONCAT31(uVar23,bVar6);
    piVar38 = piVar37 + -1;
    piVar37[-1] = (int)pcVar14;
    *pcVar13 = *pcVar13 + bVar6;
    *pcVar13 = *pcVar13 + bVar6;
    *pcVar13 = *pcVar13 + bVar6;
    bVar60 = CARRY1(*pbVar16,bVar6);
    *pbVar16 = *pbVar16 + bVar6;
    if (bVar60) break;
    in_ES = (undefined2)piVar37[-1];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9);
    uVar63 = CONCAT44(pbVar16,pcVar13);
  }
  *pcVar13 = *pcVar13 + bVar6;
  pbVar30 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar9));
  *pcVar13 = *pcVar13 + bVar6;
  bVar31 = bVar6 + 2;
  *pbVar30 = *pbVar30 - (char)((ulonglong)uVar63 >> 0x20);
  *(char *)CONCAT31(uVar23,bVar31) = *(char *)CONCAT31(uVar23,bVar31) + bVar31;
  uVar15 = *unaff_ESI;
  uVar26 = (undefined3)((uint)pcVar14 >> 8);
  pbVar18 = (byte *)(CONCAT31(uVar26,(byte)uVar15) | 6);
  bVar7 = 9 < (bVar6 + 0x74 & 0xf) | in_AF;
  bVar10 = bVar6 + 0x74 + bVar7 * '\x06';
  bVar10 = bVar10 + (0x90 < (bVar10 & 0xf0) | 0x8d < bVar31 | bVar7 * (0xf9 < bVar10)) * '`';
  pbVar56 = (byte *)CONCAT31(uVar23,bVar10);
  bVar6 = *pbVar56;
  *pbVar56 = *pbVar56 + bVar10;
  if (!SCARRY1(bVar6,bVar10)) {
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    unaff_ESI = (uint *)((int)unaff_ESI + *(int *)(pbVar16 + 0x33));
    *pbVar56 = *pbVar56 | bVar10;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    bVar6 = bVar10 + 0x72;
    piVar37[-2] = (int)pbVar30;
    *(byte *)CONCAT31(uVar23,bVar6) = *(byte *)CONCAT31(uVar23,bVar6) | bVar6;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    pbVar18 = (byte *)CONCAT31(uVar26,((byte)uVar15 | 6) + (byte)*unaff_ESI);
    pcVar14 = (char *)CONCAT31(uVar23,bVar10 - 0x11);
    piVar38 = piVar37 + -3;
    piVar37[-3] = (int)pbVar18;
    *pcVar14 = *pcVar14 + (bVar10 - 0x11);
    pbVar56 = (byte *)CONCAT31(uVar23,bVar10 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar56 = *pbVar56 + (bVar10 - 0xf);
  }
code_r0x00403825:
  pbVar55 = (byte *)0x80a0000;
  uVar23 = (undefined3)((uint)pbVar56 >> 8);
  cVar8 = (char)pbVar56 + '\x7f';
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  *(byte **)((int)piVar38 + -4) = pbVar30;
  *pcVar14 = *pcVar14 + cVar8;
  iVar25 = CONCAT31(uVar23,(char)pbVar56 + -0x7f) + 0x547d;
  cVar9 = (char)iVar25;
  uVar23 = (undefined3)((uint)iVar25 >> 8);
  cVar8 = cVar9 + '*';
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | (byte)*unaff_ESI);
  cVar28 = (char)pbVar30 - (byte)*unaff_ESI;
  uVar59 = (undefined2)((uint)pbVar30 >> 0x10);
  cVar32 = (char)((uint)pbVar30 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar30 >> 8),cVar28) + 0x57);
  *pcVar14 = *pcVar14 + cVar8;
  bVar6 = cVar9 + 0x54U & *pbVar16;
  iVar25 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
  pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
  *(undefined2 *)((int)piVar38 + -8) = in_DS;
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar32,cVar28)) + 0x58);
  *pcVar14 = *pcVar14 + bVar6 + 0x2a;
  bVar31 = bVar6 + 0x54 & *pbVar16;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar23,bVar31) = *(char *)CONCAT31(uVar23,bVar31) + bVar31;
  pcVar14 = (char *)CONCAT31(uVar23,bVar31 + 0x2a);
  pbVar56 = *(byte **)((int)piVar38 + -8);
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar32,cVar28)) + 0x55);
  *pcVar14 = *pcVar14 + bVar31 + 0x2a;
  pcVar14 = (char *)CONCAT31(uVar23,bVar31 + 0x57);
  pbVar16 = pbVar16 + *(int *)pbVar56;
  *(undefined4 *)((int)piVar38 + -8) = 0x2a;
  cVar32 = cVar32 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar32,cVar28)) + 0x55);
  *pcVar14 = *pcVar14 + bVar31 + 0x57;
  cVar8 = bVar31 - 0x3a;
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  *(undefined2 *)((int)piVar38 + -0xc) = uVar58;
  *pcVar14 = *pcVar14 + cVar8;
  bVar6 = *pbVar16;
  cVar9 = (char)pbVar18;
  *(undefined2 *)((int)piVar38 + -0x10) = in_DS;
  pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(cVar32 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar32,
                                                  cVar28)) + 0x59),cVar28));
  *pcVar14 = *pcVar14 + cVar8;
  bVar11 = bVar31 - 0x10 & *pbVar16;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar25);
  *(char *)CONCAT31(uVar23,bVar11) = *(char *)CONCAT31(uVar23,bVar11) + bVar11;
  bVar11 = bVar11 + 0x2a;
  pbVar20 = (byte *)CONCAT31(uVar23,bVar11);
  puVar35 = (undefined4 *)((int)piVar38 + -0x14);
  *(undefined2 *)((int)piVar38 + -0x14) = in_DS;
  bVar31 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar20 = *pbVar20 + bVar11;
  bVar10 = *pbVar16;
  puVar40 = (undefined4 *)((int)piVar38 + -0x18);
  *(undefined2 *)((int)piVar38 + -0x18) = in_DS;
  bVar12 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar20 = *pbVar20 + bVar11;
  pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar18 >> 8) | bVar6) + bVar31 | bVar10) +
                                      bVar12 | *pbVar16,cVar9));
  *pbVar30 = *pbVar30 + cVar28;
  *(byte *)((int)pbVar20 * 2) = *(byte *)((int)pbVar20 * 2) ^ bVar11;
  bVar6 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar11;
  bVar31 = *pbVar20;
  *pbVar18 = *pbVar18 + (char)pbVar16;
  bVar6 = ((bVar11 - bVar31) - CARRY1(bVar6,bVar11)) + *pbVar16;
  pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
  if ((POPCOUNT(bVar6) & 1U) != 0) {
    pbVar16 = *(byte **)((int)piVar38 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar20 = *pbVar20 + bVar6;
  cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
  pbVar19 = (byte *)CONCAT31(uVar23,cVar8);
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + cVar9;
  if (SCARRY1(bVar6,cVar9) == (char)*pbVar16 < '\0') {
    cRam33100000 = cRam33100000 - cVar8;
    cVar8 = cVar8 + *pbVar16;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    puVar35 = (undefined4 *)((int)piVar38 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x004038b0:
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    cVar8 = (char)pbVar19 + '\x02';
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    puVar35 = puVar40;
    if ((POPCOUNT(cVar8) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar56);
      cVar8 = (char)pbVar20 + *pbVar16;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
code_r0x0040390c:
      cVar9 = (char)pbVar20;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040390e;
      *pbVar56 = *pbVar56 + cVar9;
      goto code_r0x00403962;
    }
    *pbVar20 = *pbVar20 + cVar8;
    puVar35 = (undefined4 *)((int)puVar40 + -4);
    piVar38 = (int *)((int)puVar40 + -4);
    *(byte **)((int)puVar40 + -4) = pbVar18;
    cVar8 = (char)pbVar19 + '.' + *pbVar16;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar19 = pbVar16 + (int)pbVar20;
      *pbVar19 = *pbVar19 + cVar8;
      bVar6 = *pbVar19;
      goto code_r0x00403912;
    }
    *pbVar20 = *pbVar20 + cVar8;
    bVar6 = cVar8 + 2;
    pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
    puVar35 = (undefined4 *)((int)puVar40 + -4);
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403916;
    *pbVar20 = *pbVar20 + bVar6;
    cVar9 = cVar8 + 'q';
    piVar17 = (int *)CONCAT31(uVar23,cVar9);
    *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0x90 < bVar6);
    bVar6 = *pbVar30;
    bVar31 = (byte)((uint)pbVar18 >> 8);
    *pbVar30 = *pbVar30 + bVar31;
    if (!CARRY1(bVar6,bVar31)) {
      out(*(undefined4 *)pbVar56,(short)pbVar16);
      bVar6 = (cVar9 - (char)*piVar17) - CARRY1(bVar6,bVar31);
      *pbVar16 = *pbVar16 + (char)pbVar18;
      cVar8 = bVar6 - *(byte *)CONCAT31(uVar23,bVar6);
      unaff_ESI = (uint *)(pbVar56 +
                          ((((uint)bVar61 * -8 + 4) - *(int *)CONCAT31(uVar23,cVar8)) -
                          (uint)(bVar6 < *(byte *)CONCAT31(uVar23,bVar6))));
      pbVar56 = (byte *)CONCAT31(uVar23,cVar8);
      goto code_r0x00403825;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar9;
    uVar59 = (undefined2)((uint)pbVar30 >> 0x10);
    bVar6 = (byte)((uint)pbVar30 >> 8) | bRam080a0056;
    *(char *)piVar17 = (char)*piVar17 + cVar9;
    pcVar14 = (char *)CONCAT31(uVar23,cVar8 + 's');
    pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar59,CONCAT11(bVar6,(
                                                  char)pbVar30)) + 0x56),(char)pbVar30));
    *pcVar14 = *pcVar14 + cVar8 + 's';
    bVar6 = cVar8 - 0xf;
    pbVar16 = *(byte **)((int)puVar40 + -4);
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    bVar31 = cVar8 + 0x1e;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar31);
    *(byte **)(pbVar56 + (int)unaff_EDI * 8) =
         pbVar16 + (uint)(0xd2 < bVar6) + *(int *)(pbVar56 + (int)unaff_EDI * 8);
    puVar35 = (undefined4 *)((int)puVar40 + -4);
    puVar42 = (undefined4 *)((int)puVar40 + -4);
    *(undefined2 *)((int)puVar40 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar19;
    bVar6 = *pbVar56;
    *pbVar56 = *pbVar56 + bVar31;
    if (CARRY1(bVar6,bVar31)) {
      *pbVar19 = *pbVar19 + bVar31;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar31 | pbVar19[0x400005a]);
      if ('\0' < (char)(bVar31 | pbVar19[0x400005a])) {
code_r0x004038f6:
        bVar6 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar6;
        uVar23 = (undefined3)((uint)pbVar20 >> 8);
        cVar8 = ((bVar6 + 0x28) - *(char *)CONCAT31(uVar23,bVar6 + 0x28)) - (0xd7 < bVar6);
        pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
        bVar6 = *pbVar30;
        bVar31 = (byte)((uint)pbVar18 >> 8);
        *pbVar30 = *pbVar30 + bVar31;
        if (CARRY1(bVar6,bVar31)) {
          *pbVar20 = *pbVar20 + cVar8;
          pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                     CONCAT11(bVar31 | *pbVar20,(char)pbVar18));
          *pbVar56 = *pbVar56 + cVar8;
          goto code_r0x00403908;
        }
        pbVar19 = pbVar20 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar23 = (undefined3)((uint)pbVar20 >> 8);
      bVar31 = (char)pbVar20 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar23,bVar31);
      *pbVar16 = *pbVar16 + (char)pbVar18;
      pbVar20 = (byte *)CONCAT31(uVar23,(bVar31 & bVar6) + *pbVar56);
      *pbVar18 = *pbVar18 - (char)((uint)pbVar16 >> 8);
      puVar47 = puVar42;
      goto code_r0x0040395a;
    }
    puVar39 = (undefined4 *)((int)puVar40 + -8);
    puVar40 = (undefined4 *)((int)puVar40 + -8);
    *puVar39 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)in_EAX = (char)*in_EAX + bVar6;
  unaff_ESI = puVar57;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar20 = *pbVar20 + cVar9;
  bVar6 = cVar9 + 2;
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar6);
code_r0x00403912:
  bVar60 = (POPCOUNT(bVar6) & 1U) == 0;
  puVar47 = puVar35;
  if (!bVar60) goto code_r0x00403967;
  *pbVar20 = *pbVar20 + (char)pbVar20;
code_r0x00403916:
  bVar12 = (char)pbVar20 + 0x6f;
  pbVar19 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar20 >> 8),bVar12);
  bVar10 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  bVar31 = *pbVar19;
  bVar6 = *pbVar19;
  puVar47 = (undefined4 *)((int)puVar35 + -4);
  *(undefined2 *)((int)puVar35 + -4) = in_ES;
  if (bVar6 == 0 || SCARRY1(bVar10,bVar12) != (char)bVar31 < '\0') goto code_r0x00403979;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19 = (byte *)CONCAT31((int3)(char)((uint)pbVar20 >> 8),(char)pbVar20 + -100);
  *(byte **)(pbVar56 + (int)unaff_EDI * 8) =
       pbVar16 + (uint)(0xd2 < bVar12) + *(int *)(pbVar56 + (int)unaff_EDI * 8);
  puVar41 = (undefined2 *)((int)puVar35 + -8);
  puVar35 = (undefined4 *)((int)puVar35 + -8);
  *puVar41 = in_ES;
code_r0x00403926:
  puVar40 = puVar35 + 1;
  puVar47 = puVar35 + 1;
  puVar42 = puVar35 + 1;
  *(undefined4 *)pbVar19 = *puVar35;
  bVar6 = *pbVar56;
  bVar31 = (byte)pbVar19;
  *pbVar56 = *pbVar56 + bVar31;
  if (CARRY1(bVar6,bVar31)) {
    *pbVar19 = *pbVar19 + bVar31;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar31 = bVar31 | pbVar19[0x400005b];
    pbVar20 = (byte *)CONCAT31(uVar23,bVar31);
    pbVar19 = pbVar56;
    if ((char)bVar31 < '\x01') goto code_r0x00403991;
    *pbVar20 = *pbVar20 + bVar31;
    cVar8 = bVar31 + 0x28;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    *(byte **)pbVar20 = pbVar20 + (uint)(0xd7 < bVar31) + *(int *)pbVar20;
    bVar6 = *pbVar30;
    bVar31 = (byte)((uint)pbVar18 >> 8);
    *pbVar30 = *pbVar30 + bVar31;
    if (CARRY1(bVar6,bVar31)) {
      *pbVar20 = *pbVar20 + cVar8;
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11(bVar31 | *pbVar20,(char)pbVar18));
      *pbVar56 = *pbVar56 + cVar8;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x55],(char)pbVar30))
      ;
      *pbVar20 = *pbVar20 + cVar8;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar35 = in_ES;
code_r0x00403962:
    puVar47 = (undefined4 *)((int)puVar35 + -4);
    *(undefined2 *)((int)puVar35 + -4) = uVar58;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar20 = *pbVar20 + (char)pbVar20;
  puVar43 = (undefined2 *)((int)puVar47 + -4);
  puVar47 = (undefined4 *)((int)puVar47 + -4);
  *puVar43 = in_ES;
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar18;
  pbVar30 = (byte *)((uint)pbVar30 | (uint)pbVar56);
  cVar8 = (char)pbVar20 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
  bVar60 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar60) goto code_r0x004039be;
  *pbVar20 = *pbVar20 + (char)pbVar20;
  uVar23 = (undefined3)((uint)pbVar20 >> 8);
  bVar6 = (char)pbVar20 + 0x6f;
  bVar6 = bVar6 & *(byte *)CONCAT31(uVar23,bVar6);
  pbVar19 = (byte *)CONCAT31(uVar23,bVar6);
  *pbVar16 = *pbVar16 + (char)pbVar18;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar6;
code_r0x00403979:
  do {
    bVar6 = (char)pbVar19 - (byte)*unaff_EDI;
    bVar60 = bVar6 < *pbVar18;
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar6 - *pbVar18);
    do {
      cVar8 = (char)pbVar20;
      *pbVar20 = *pbVar20 + cVar8 + bVar60;
      *pbVar20 = *pbVar20 + cVar8;
      *pbVar18 = *pbVar18 + (char)pbVar16;
      pbVar18[0x101c00aa] = pbVar18[0x101c00aa] + (char)pbVar30;
      *pbVar20 = *pbVar20 + cVar8;
      *(byte **)pbVar56 = pbVar30 + *(int *)pbVar56;
      bVar6 = (byte)((uint)pbVar18 >> 8);
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11(bVar6 + *pbVar20,(char)pbVar18));
      pbVar20 = pbVar20 + (uint)CARRY1(bVar6,*pbVar20) + *(int *)pbVar20;
      pbVar19 = pbVar56;
code_r0x00403991:
      cVar8 = (char)pbVar18;
      *pbVar16 = *pbVar16 + cVar8;
      cVar9 = (char)pbVar30 - pbVar19[2];
      pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar9);
      pbVar56 = pbVar19;
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040395a;
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      uVar24 = (uint3)((uint)pbVar20 >> 8);
      bVar6 = (byte)pbVar20 | *pbVar30;
      piVar17 = (int *)CONCAT31(uVar24,bVar6);
      bVar31 = (byte)((uint)pbVar18 >> 8);
      bVar10 = (byte)pbVar16;
      if (bVar6 == 0) {
        *(char *)piVar17 = (char)*piVar17;
        puVar47 = (undefined4 *)((int)puVar47 + -*(int *)(pbVar55 + 0x1b000007));
        pbVar56 = pbVar19 + (uint)bVar61 * -8 + 4;
        out(*(undefined4 *)pbVar19,(short)pbVar16);
        pbVar20 = (byte *)((uint)uVar24 << 8);
        *pbVar16 = *pbVar16 + cVar8;
        pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10 - *pbVar30);
        *pbVar30 = *pbVar30;
        *pbVar16 = *pbVar16 + bVar31;
        *pbVar20 = *pbVar20;
        *pbVar30 = *pbVar30 + cVar9;
        *pbVar20 = *pbVar20;
        *(byte **)(pbVar30 + -0x3d) = pbVar56 + *(int *)(pbVar30 + -0x3d);
        break;
      }
      pbVar55 = pbVar55 + -unaff_EDI[9];
      *(byte *)piVar17 = (char)*piVar17 + bVar6;
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),CONCAT11(bVar31 | *pbVar16,cVar8));
      pbVar56 = pbVar19 + *piVar17;
      pcVar14 = (char *)((int)piVar17 + *piVar17);
      bVar31 = (char)pcVar14 - *pcVar14;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar31);
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar31;
      pbVar20 = pbVar20 + (-(uint)CARRY1(bVar6,bVar31) - *(int *)pbVar20);
      bVar60 = CARRY1(*pbVar18,bVar10);
      *pbVar18 = *pbVar18 + bVar10;
    } while (!bVar60);
    *pbVar20 = *pbVar20 + (char)pbVar20;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(byte)pbVar18 | *pbVar16);
code_r0x004039be:
    puVar35 = (undefined4 *)((int)puVar47 + -4);
    puVar44 = (undefined1 *)((int)puVar47 + -4);
    *(undefined2 *)((int)puVar47 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar55 + -0x3c));
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    uVar23 = (undefined3)((uint)pbVar20 >> 8);
    bVar6 = (byte)pbVar20 | *pbVar16;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6);
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      cVar8 = *pcVar14;
      *pcVar14 = *pcVar14 + bVar6;
      cVar9 = *pcVar14;
      puVar27 = (undefined1 *)((int)puVar47 + -4);
      if (!SCARRY1(cVar8,bVar6)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar35 = (undefined4 *)puVar27;
      cVar8 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar8;
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      bVar6 = cVar8 + 2;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        pcVar14 = (char *)CONCAT31(uVar23,bVar6 + *pbVar16);
        pbVar20 = pbVar56;
        if ((POPCOUNT(bVar6 + *pbVar16) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar56 + (int)unaff_EDI * 8) =
             pbVar16 + (uint)(0xd2 < (byte)pcVar14) + *(int *)(pbVar56 + (int)unaff_EDI * 8);
        puVar46 = (undefined2 *)((int)puVar35 + -4);
        puVar35 = (undefined4 *)((int)puVar35 + -4);
        *puVar46 = in_ES;
        pbVar19 = pbVar55;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 + 0x2d);
code_r0x00403ad8:
        pbVar55 = pbVar21;
        bVar6 = *pbVar19;
        bVar31 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar31;
        puVar47 = (undefined4 *)((int)puVar35 + -4);
        *(undefined2 *)((int)puVar35 + -4) = in_ES;
        puVar27 = (undefined1 *)((int)puVar35 + -4);
        if (CARRY1(bVar6,bVar31)) {
          *pbVar19 = *pbVar19 + bVar31;
          bVar31 = bVar31 | pbVar19[0x400005d];
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar31);
          pbVar20 = pbVar56;
          if ((char)bVar31 < '\x01') {
            *pbVar19 = *pbVar19 + bVar31;
            pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar18 >> 8) | *pbVar16,(char)pbVar18)
                                      );
            pbVar20 = *(byte **)((int)puVar35 + -4);
            pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                       CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[-0x39],
                                                (char)pbVar30));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar19 = *pbVar19 + (char)pbVar19;
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar6 = *pbVar30;
          bVar31 = (byte)((uint)pbVar18 >> 8);
          *pbVar30 = *pbVar30 + bVar31;
          pbVar56 = pbVar20;
          if (!CARRY1(bVar6,bVar31)) {
            puVar35 = (undefined4 *)((int)puVar47 + -4);
            *(undefined2 *)((int)puVar47 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar19 = *pbVar19 + cVar8;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      piVar17 = (int *)CONCAT31(uVar23,cVar8 + '*');
      *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0xd7 < bVar6);
      bVar6 = *pbVar16;
      bVar12 = (byte)pbVar18;
      *pbVar16 = *pbVar16 + bVar12;
      out(*(undefined4 *)pbVar56,(short)pbVar16);
      bVar10 = ((cVar8 + '*') - (char)*piVar17) - CARRY1(bVar6,bVar12);
      pbVar20 = (byte *)CONCAT31(uVar23,bVar10);
      *pbVar16 = *pbVar16 + bVar12;
      uVar59 = (undefined2)((uint)pbVar30 >> 0x10);
      uVar29 = SUB41(pbVar30,0);
      cVar8 = (char)((uint)pbVar30 >> 8) - pbVar56[(uint)bVar61 * -8 + 0x1f];
      pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(cVar8,uVar29));
      *pbVar20 = *pbVar20 + bVar10;
      bVar31 = *pbVar16;
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      pbVar56 = pbVar56 + ((((uint)bVar61 * -8 + 4) - *(int *)pbVar20) - (uint)CARRY1(bVar6,bVar10))
      ;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar10);
      pbVar18 = (byte *)(CONCAT22((short)((uint)pbVar18 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar18 >> 8) | bVar31,bVar12)) + -1);
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      bVar6 = (bVar10 - *pbVar20) - CARRY1(bVar6,bVar10);
      *pbVar18 = *pbVar18 + (char)pbVar16;
      bVar60 = CARRY1(bVar6,*pbVar16);
      bVar6 = bVar6 + *pbVar16;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar20 = *pbVar20 + bVar6;
        cVar9 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pbVar19 = (byte *)CONCAT31(uVar23,cVar9);
        bVar6 = *pbVar16;
        *pbVar16 = *pbVar16 + (char)pbVar18;
        if (SCARRY1(bVar6,(char)pbVar18) == (char)*pbVar16 < '\0') {
code_r0x00403aaf:
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar6 = *pbVar30;
          bVar31 = (byte)((uint)pbVar18 >> 8);
          *pbVar30 = *pbVar30 + bVar31;
          pbVar21 = pbVar55;
          if (!CARRY1(bVar6,bVar31)) goto code_r0x00403ad8;
          *pbVar19 = *pbVar19 + cVar8;
          pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                     CONCAT11(bVar31 | *pbVar30,(char)pbVar18));
          if ((POPCOUNT(*pbVar16 - cVar8) & 1U) != 0) {
            *pbVar56 = *pbVar56 + cVar8;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar19 = *pbVar19 + cVar9;
          pcVar14 = (char *)CONCAT31(uVar23,cVar9 + '\x02');
          bVar31 = cVar8 + pbVar30[0x52];
          pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(bVar31,uVar29));
          *pcVar14 = *pcVar14 + cVar9 + '\x02';
          bVar6 = cVar9 + 4;
          pbVar19 = (byte *)CONCAT31(uVar23,bVar6);
          if ((POPCOUNT(bVar6) & 1U) == 0) {
            *pbVar19 = *pbVar19 + bVar6;
            cVar8 = (cVar9 + 's') - (0x90 < bVar6);
            pcVar14 = (char *)CONCAT31(uVar23,cVar8);
            bVar6 = (byte)((uint)pbVar18 >> 8);
            bVar60 = CARRY1(*pbVar30,bVar6);
            *pbVar30 = *pbVar30 + bVar6;
            pbVar20 = pbVar56;
            if (bVar60) {
              *pcVar14 = *pcVar14 + cVar8;
              pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(bVar31 | pbVar55[0x5c],uVar29));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar19);
          pbVar30 = (byte *)CONCAT22(uVar59,CONCAT11(bVar31 + pbVar30[0x52],uVar29));
        }
        *pbVar19 = *pbVar19 + (char)pbVar19;
        cVar8 = (char)pbVar19 + '\x02';
        pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
        bVar60 = (POPCOUNT(cVar8) & 1U) == 0;
        if (!bVar60) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar6 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar6;
        cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
        bVar6 = *pbVar30;
        cVar9 = (char)((uint)pbVar18 >> 8);
        *pbVar30 = *pbVar30 + cVar9;
        if (*pbVar30 == 0 || SCARRY1(bVar6,cVar9) != (char)*pbVar30 < '\0') goto code_r0x00403b2c;
        *pcVar14 = *pcVar14 + cVar8;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar60) {
        pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                   CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x53],(char)pbVar30
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      bVar6 = (byte)pbVar20 | pbVar20[0x400005e];
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar6);
      if ('\0' < (char)bVar6) {
        *pbVar19 = *pbVar19 + bVar6;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar14 = *pcVar14 + bVar6;
    *pbVar56 = *pbVar56 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar23,bVar6 + 6);
    pbVar19 = (byte *)uVar3;
    bVar6 = *pbVar16;
    bVar31 = (byte)pbVar18;
    *pbVar16 = *pbVar16 + bVar31;
    if (CARRY1(bVar6,bVar31)) {
      *pbVar19 = *pbVar19 + (char)uVar3;
      bVar10 = (byte)((uint)pbVar18 >> 8) | *pbVar19;
      uVar59 = CONCAT11(bVar10,bVar31);
      pbVar19 = pbVar19 + -*(int *)pbVar19;
      bVar6 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar10;
      if (CARRY1(bVar6,bVar10)) {
        cVar9 = (char)pbVar19;
        *pbVar19 = *pbVar19 + cVar9;
        bVar6 = *pbVar16;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((char)((uint)pbVar16 >> 8) - pbVar30[-0x3a],
                                            (char)pbVar16));
        *pbVar19 = *pbVar19 + cVar9;
        uVar34 = (undefined2)((uint)pbVar30 >> 0x10);
        bVar33 = (byte)((uint)pbVar30 >> 8) | pbVar16[0x32];
        pcVar14 = (char *)CONCAT22(uVar34,CONCAT11(bVar33,(char)pbVar30));
        cVar8 = *pcVar14;
        puVar44 = (undefined1 *)((int)puVar47 + -8);
        *(undefined2 *)((int)puVar47 + -8) = in_CS;
        cVar8 = cVar9 + cVar8 + '-';
        pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
        *pbVar19 = *pbVar19;
        *(undefined2 *)((int)puVar47 + -0xc) = in_ES;
        bVar12 = *pbVar16;
        uVar58 = *(undefined2 *)((int)puVar47 + -0xc);
        cVar9 = (char)pbVar30 - *pbVar56;
        bVar11 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar19 = *pbVar19 + cVar8;
        uVar59 = CONCAT11((bVar10 | bVar6) + bVar11 | *pbVar16,bVar31 - bVar12);
        pbVar30 = (byte *)CONCAT22(uVar34,CONCAT11(bVar33 + *(char *)(CONCAT31((int3)((uint)pcVar14
                                                                                     >> 8),cVar9) +
                                                                     0x4e),cVar9));
        *pbVar19 = *pbVar19 + cVar8;
      }
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),uVar59);
      bVar6 = (byte)pbVar19;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x28);
      *pcVar14 = (*pcVar14 - (bVar6 + 0x28)) - (0xd7 < bVar6);
      *pbVar16 = *pbVar16 + (char)uVar59;
      bVar31 = bVar6 + 0x1b;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x4f],(char)pbVar30))
      ;
      *(char *)CONCAT31(uVar23,bVar31) = *(char *)CONCAT31(uVar23,bVar31) + bVar31;
      pcVar13 = (char *)CONCAT31(uVar23,bVar6 + 0x43);
      *pcVar13 = (*pcVar13 - (bVar6 + 0x43)) - (0xd7 < bVar31);
      *pbVar16 = *pbVar16 + (char)uVar59;
      pcVar14 = pcVar13 + -0x6b721c;
      pcVar13 = pcVar13 + -0x6b721a;
      *pcVar13 = *pcVar13 + (char)((uint)pbVar16 >> 8);
      cVar9 = *pcVar13;
      puVar35 = (undefined4 *)puVar44;
code_r0x00403a22:
      puVar27 = (undefined1 *)puVar35;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x00403a24;
      bVar6 = *pbVar16;
      *pbVar16 = *pbVar16 + (char)pbVar18;
      if (SCARRY1(bVar6,(char)pbVar18) == (char)*pbVar16 < '\0') {
        pbVar19 = pbVar55;
        pbVar21 = (byte *)(pcVar14 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x02');
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x54],(char)pbVar30))
      ;
      pbVar20 = pbVar56;
code_r0x00403a7d:
      cVar8 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar8;
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      cVar9 = cVar8 + '-';
      pbVar21 = (byte *)CONCAT31(uVar23,cVar9);
      pbVar19 = pbVar55;
      pbVar56 = pbVar20;
      if ((POPCOUNT(cVar9 - *pbVar16) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar21 = *pbVar21 + cVar9;
      bVar6 = cVar8 + 0x2f;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        bVar6 = *pbVar16;
        *pbVar16 = *pbVar16 + (byte)pbVar18;
        *pbVar55 = *pbVar55 - CARRY1(bVar6,(byte)pbVar18);
        pbVar19 = (byte *)CONCAT31(uVar23,cVar8 + -0x53);
        pbVar55 = (byte *)*puVar35;
        puVar47 = puVar35 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      bVar60 = 0x90 < bVar6;
      pcVar14 = (char *)CONCAT31(uVar23,cVar8 + -0x62);
code_r0x00403a8f:
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      bVar31 = (char)pcVar14 - bVar60;
      pbVar19 = (byte *)CONCAT31(uVar23,bVar31);
      bVar6 = *pbVar30;
      cVar8 = (char)((uint)pbVar18 >> 8);
      *pbVar30 = *pbVar30 + cVar8;
      puVar47 = puVar35;
      pbVar56 = pbVar20;
      if (*pbVar30 != 0 && SCARRY1(bVar6,cVar8) == (char)*pbVar30 < '\0') {
        *pbVar19 = *pbVar19 + bVar31;
        pbVar56 = (byte *)CONCAT31(uVar23,bVar31 + 0x2d);
        *(byte **)(pbVar20 + (int)unaff_EDI * 8) =
             pbVar16 + (uint)(0xd2 < bVar31) + *(int *)(pbVar20 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar35 + -4) = in_ES;
        bVar60 = CARRY1(*pbVar20,(byte)pbVar20);
        *pbVar20 = *pbVar20 + (byte)pbVar20;
        puVar45 = (undefined2 *)((int)puVar35 + -8);
        puVar35 = (undefined4 *)((int)puVar35 + -8);
        *puVar45 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar18 >> 8) | *pbVar19,(char)pbVar18));
      *pbVar56 = *pbVar56 + (char)pbVar19;
      puVar27 = (undefined1 *)puVar47;
code_r0x00403afc:
      puVar35 = (undefined4 *)puVar27;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) + pbVar30[0x55],(char)pbVar30))
      ;
      *pbVar19 = *pbVar19 + (char)pbVar19;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      bVar31 = (char)pbVar19 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar23,bVar31);
      *pbVar16 = *pbVar16 + (char)pbVar18;
      pbVar19 = (byte *)CONCAT31(uVar23,(bVar31 & bVar6) + *pbVar56);
      *pbVar18 = *pbVar18 - (char)((uint)pbVar16 >> 8);
      break;
    }
    uVar58 = *(undefined2 *)((int)puVar47 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar48 = (undefined2 *)((int)puVar35 + -4);
  puVar35 = (undefined4 *)((int)puVar35 + -4);
  *puVar48 = in_ES;
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar18;
  pbVar30 = (byte *)((uint)pbVar30 | (uint)pbVar56);
  cVar8 = (char)pbVar19 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
  bVar60 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
  bVar6 = (byte)pbVar20;
  uVar23 = (undefined3)((uint)pbVar20 >> 8);
  if (!bVar60) {
    *pbVar16 = *pbVar16 + (char)pbVar18;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar6 | *pbVar56);
code_r0x00403b73:
    pbVar20 = (byte *)((int)unaff_EDI + *(int *)(pbVar55 + -0x37));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar6 = (byte)pbVar19 | *pbVar16;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6);
    uVar63 = CONCAT44(pbVar16,pcVar14);
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *pcVar14 = *pcVar14 + bVar6;
      *pbVar56 = *pbVar56 + 1;
      return (byte *)CONCAT31(uVar23,bVar6 + 6);
    }
    bVar6 = *pbVar56;
    *pbVar56 = *pbVar56 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar6,'\x01')) {
      uVar63 = (*pcVar2)();
      pbVar18 = extraout_ECX_00;
    }
    pbVar16 = (byte *)uVar63;
    *pbVar16 = *pbVar16 + (char)uVar63;
    cVar9 = (char)((ulonglong)uVar63 >> 0x20);
    puVar57 = (uint *)CONCAT22((short)((ulonglong)uVar63 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar63 >> 0x28) | pbVar30[0x2f],cVar9));
    *pbVar16 = *pbVar16 + (char)uVar63;
    cVar8 = (char)pbVar18;
    bVar10 = (byte)((uint)pbVar18 >> 8) | *pbVar16;
    pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar6 = *pbVar30;
    *pbVar30 = *pbVar30 + bVar10;
    bVar31 = (byte)pbVar16;
    if (CARRY1(bVar6,bVar10)) {
      *pbVar16 = *pbVar16 + bVar31;
      bVar10 = bVar10 | (byte)*puVar57;
      *pbVar30 = *pbVar30 - cVar9;
      *pbVar16 = *pbVar16 + bVar31;
      uVar23 = (undefined3)((uint)pbVar16 >> 8);
      bVar31 = bVar31 | (byte)*puVar57;
      puVar22 = (uint *)CONCAT31(uVar23,bVar31);
      bVar60 = CARRY4((uint)pbVar55,*puVar22);
      bVar62 = SCARRY4((int)pbVar55,*puVar22);
      pbVar55 = pbVar55 + *puVar22;
      *(uint *)((int)puVar35 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar62 * 0x800 | (uint)bVar61 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar55 < 0) * 0x80 |
           (uint)(pbVar55 == (byte *)0x0) * 0x40 | (uint)(bVar7 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar55 & 0xff) & 1U) == 0) * 4 | (uint)bVar60 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar22 = (char)*puVar22 + bVar31;
      *(undefined2 *)((int)puVar35 + -8) = in_ES;
      cVar9 = (char)pbVar30 - *pbVar56;
      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                 CONCAT11((char)((uint)pbVar30 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar30 >> 8),cVar9) +
                                                   0x5f),cVar9));
      *(byte *)puVar22 = (char)*puVar22 + bVar31;
      bVar6 = bVar31 + 0x2a & (byte)*puVar57;
      pbVar20 = pbVar20 + *(int *)(pbVar55 + 0x5f);
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      pbVar16 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
      *(byte *)puVar57 = (byte)*puVar57 + 0x28;
      *pbVar16 = *pbVar16 + bVar6 + 0x2a;
      puVar51 = (undefined2 *)((int)puVar35 + -0xc);
      puVar35 = (undefined4 *)((int)puVar35 + -0xc);
      *puVar51 = in_ES;
    }
    else {
      *pbVar56 = *pbVar56 + bVar31;
    }
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar18 >> 0x10),CONCAT11(bVar10,cVar8));
    *pbVar55 = *pbVar55 - bVar10;
    *(byte *)puVar57 = (byte)*puVar57 + cVar8;
    bVar6 = (byte)pbVar16 - 0xb;
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar6);
    if (10 < (byte)pbVar16) {
      *pbVar18 = *pbVar18 | bVar6;
      return pbVar18;
    }
    *(byte *)puVar57 = (byte)*puVar57 + cVar8;
    do {
      *(undefined2 *)((int)puVar35 + -4) = in_ES;
      bVar6 = pbVar30[-0x23];
      bVar31 = (byte)pbVar18;
      *pbVar18 = *pbVar18 + bVar31;
      bVar7 = pbVar55[-0x22];
      *pbVar18 = *pbVar18 + bVar31;
      uVar23 = (undefined3)((uint)pbVar18 >> 8);
      bVar31 = bVar31 | *pbVar56;
      pbVar16 = (byte *)CONCAT31(uVar23,bVar31);
      cVar9 = (char)pbVar30 - *pbVar56;
      pbVar30 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar30 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar30 >> 8) + bVar6 | bVar7
                                                          ,(char)pbVar30)) >> 8),cVar9);
      cVar8 = (char)pcVar14;
      pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                 CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar16,cVar8));
      *(byte *)puVar57 = (byte)*puVar57 + cVar8;
      bVar7 = bVar31 - *pbVar16;
      pbVar18 = (byte *)CONCAT31(uVar23,bVar7);
      pbVar56 = pbVar56 + (-(uint)(bVar31 < *pbVar16) - *(int *)pbVar18);
      in_ES = *(undefined2 *)((int)puVar35 + -4);
      puVar57 = (uint *)CONCAT31((int3)((uint)puVar57 >> 8),(char)puVar57 * '\x02');
      *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
      *pbVar20 = *pbVar20 + cVar9;
      bVar6 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar7;
      *puVar57 = (uint)(pbVar18 + (uint)CARRY1(bVar6,bVar7) + *puVar57);
    } while ((POPCOUNT(*puVar57 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar18 = *pbVar18 + (char)pbVar18;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar18[(int)pcVar14]);
    puVar53 = (undefined2 *)((int)puVar35 + -4);
    *(undefined2 *)((int)puVar35 + -4) = uVar58;
    bVar60 = false;
    pbVar18 = (byte *)((uint)pbVar18 & 0xffffff00);
    do {
      pbVar20 = pbVar20 + (-(uint)bVar60 - *(int *)pbVar30);
      pcVar13 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),*pcVar14);
      *pcVar13 = *pcVar13 + *pcVar14;
      pbVar18 = (byte *)CONCAT31((int3)((uint)(pcVar13 +
                                              (pbVar56[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar13 +
                                        (pbVar56[0x2000001] < (byte)((uint)pcVar14 >> 8)) + 0xda7d)
                                 | (byte)*puVar57) + 0x7d);
      pcVar14 = pcVar14 + -1;
      *(byte *)puVar57 = (byte)*puVar57 + (char)pcVar14;
      while( true ) {
        uVar26 = (undefined3)((uint)puVar57 >> 8);
        cVar8 = (char)puVar57 + *(char *)((int)pbVar20 * 2 + 0xa0000e1);
        puVar57 = (uint *)CONCAT31(uVar26,cVar8);
        bVar60 = CARRY1((byte)pbVar18,(byte)*puVar57);
        uVar23 = (undefined3)((uint)pbVar18 >> 8);
        bVar6 = (byte)pbVar18 + (byte)*puVar57;
        pbVar18 = (byte *)CONCAT31(uVar23,bVar6);
        if ((POPCOUNT(bVar6) & 1U) != 0) break;
        *pbVar18 = *pbVar18 + bVar6;
        cVar9 = (char)pcVar14;
        pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar20[-0x65],cVar9));
        bVar7 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar6;
        *(undefined2 *)((int)puVar53 + -4) = in_ES;
        if (CARRY1(bVar7,bVar6)) {
          *pbVar18 = *pbVar18 + bVar6;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar30 >> 8) | pbVar55[-0x1d],
                                              (char)pbVar30));
          *pbVar18 = *pbVar18 + bVar6;
          bVar60 = false;
          bVar6 = bVar6 | (byte)*puVar57;
          pcVar13 = (char *)CONCAT31(uVar23,bVar6);
          uVar58 = *(undefined2 *)((int)puVar53 + -4);
          puVar35 = (undefined4 *)puVar53;
          while( true ) {
            bVar7 = (byte)pcVar13;
            uVar23 = (undefined3)((uint)pcVar13 >> 8);
            if (bVar60 == (char)bVar6 < '\0') break;
            *pcVar13 = *pcVar13 + bVar7;
            bVar7 = bVar7 | (byte)*puVar57;
            puVar22 = (uint *)CONCAT31(uVar23,bVar7);
            *pbVar20 = *pbVar20 << 1 | (char)*pbVar20 < '\0';
            uVar15 = *puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar7;
            pbVar55 = pbVar55 + (-(uint)CARRY1((byte)uVar15,bVar7) - *puVar22);
            *puVar22 = *puVar22 << 1 | (uint)((int)*puVar22 < 0);
            while( true ) {
              uVar15 = *puVar57;
              *(byte *)puVar57 = (byte)*puVar57 + (byte)pcVar14;
              uVar59 = *(undefined2 *)puVar35;
              cVar8 = (char)puVar22 + 'o' + CARRY1((byte)uVar15,(byte)pcVar14);
              pcVar13 = (char *)CONCAT31((int3)((uint)puVar22 >> 8),cVar8);
              pcVar14 = (char *)0x20a0000;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *pcVar13 = *pcVar13 + cVar8;
              bVar6 = bRamfe140212;
              pcVar14 = (char *)0x0;
              *(undefined2 *)puVar35 = in_ES;
              uVar23 = (undefined3)((uint)(pcVar13 + -0x732b0000) >> 8);
              bVar7 = in(0);
              puVar22 = (uint *)CONCAT31(uVar23,bVar7);
              uVar15 = *puVar57;
              *(byte *)puVar57 = (byte)*puVar57;
              if (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar57 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                bVar7 = bVar7 | (byte)*puVar57;
                puVar22 = (uint *)CONCAT31(uVar23,bVar7);
                if ((POPCOUNT(bVar7) & 1U) == 0) {
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  pcVar14 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar6 | (byte)*puVar22) << 8);
                  puVar53 = (undefined2 *)((int)puVar35 + -4);
                  *(undefined2 *)((int)puVar35 + -4) = uVar59;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                puVar22 = (uint *)CONCAT31(uVar23,bVar7 | (byte)*puVar57);
              }
            }
            *(byte *)puVar57 = (byte)*puVar57;
            bVar60 = SCARRY1((char)puVar57,*pbVar20);
            bVar6 = (char)puVar57 + *pbVar20;
            puVar57 = (uint *)CONCAT31((int3)((uint)puVar57 >> 8),bVar6);
            puVar35 = (undefined4 *)((int)puVar35 + 4);
          }
          if (bVar60 == (char)bVar6 < '\0') {
            *(byte *)puVar57 = (byte)*puVar57 + (char)pcVar14;
            pbVar18 = (byte *)((uint)pcVar13 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar13 = *pcVar13 + bVar7;
          pbVar18 = (byte *)CONCAT31(uVar23,(bVar7 | (byte)*puVar57) + 0x7d);
          pcVar14 = pcVar14 + -1;
          *(byte *)puVar57 = (byte)*puVar57 + (char)pcVar14;
          puVar53 = (undefined2 *)puVar35;
        }
        else {
          *(byte *)puVar57 = (byte)*puVar57 + cVar9;
          puVar57 = (uint *)CONCAT31(uVar26,cVar8 + *(char *)((int)pbVar20 * 2 + 0xa0000e0));
          puVar53 = (undefined2 *)((int)puVar53 + -4);
        }
      }
    } while( true );
  }
  *pbVar20 = *pbVar20 + bVar6;
  bVar6 = bVar6 + 0x6f & *(byte *)CONCAT31(uVar23,bVar6 + 0x6f);
  *pbVar16 = *pbVar16 + (char)pbVar18;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar6;
  pcVar14 = (char *)CONCAT31(uVar23,bVar6 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar6 = (char)pcVar14 - *pcVar14;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar6);
  *pbVar19 = *pbVar19 + bVar6;
  *(byte **)pbVar19 = pbVar16 + *(int *)pbVar19;
  *pbVar19 = *pbVar19 + bVar6;
  bVar60 = CARRY1(*pbVar19,bVar6);
  *pbVar19 = *pbVar19 + bVar6;
  puVar27 = (undefined1 *)puVar35;
  pbVar20 = pbVar56;
  while( true ) {
    puVar35 = (undefined4 *)puVar27;
    *(byte **)pbVar19 = pbVar19 + (uint)bVar60 + *(int *)pbVar19;
    bVar7 = ((uint)pbVar19 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar61 * -2 + 1;
    pbVar19[(int)pbVar16] = pbVar19[(int)pbVar16] + (char)pbVar30;
    *pbVar19 = *pbVar19 + (char)pbVar19;
    *(byte **)pbVar20 = pbVar30 + *(int *)pbVar20;
    bVar6 = (byte)((uint)pbVar18 >> 8);
    cVar8 = (char)pbVar18;
    pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),CONCAT11(bVar6 + *pbVar19,cVar8));
    pbVar19 = pbVar19 + (uint)CARRY1(bVar6,*pbVar19) + *(int *)pbVar19;
    *pbVar16 = *pbVar16 + cVar8;
    cVar8 = (char)pbVar30 - pbVar20[2];
    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar8);
    pbVar56 = pbVar20;
    if ((POPCOUNT(cVar8) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    bVar6 = (byte)pbVar19 | *pbVar30;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar6);
    if (bVar6 != 0) {
      pbVar55 = pbVar55 + -unaff_EDI[9];
      *pbVar21 = *pbVar21 + bVar6;
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar18 >> 8) | *pbVar16,(char)pbVar18));
      pbVar20 = pbVar20 + *(int *)pbVar21;
      pbVar21 = pbVar21 + *(int *)pbVar21;
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar31 = (char)pbVar21 - *pbVar21;
      pbVar56 = (byte *)CONCAT31(uVar23,bVar31);
      bVar6 = *pbVar56;
      *pbVar56 = *pbVar56 + bVar31;
      pbVar21 = (byte *)CONCAT31(uVar23,bVar31 - CARRY1(bVar6,bVar31));
    }
    bVar6 = *pbVar21;
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    iVar25 = *(int *)(pbVar55 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar6,(byte)pbVar21);
    pbVar56 = pbVar20 + (uint)bVar61 * -8 + 4;
    out(*(undefined4 *)pbVar20,(short)pbVar16);
    pbVar19 = (byte *)(((uint)pbVar21 >> 8) * 0x100);
    *pbVar16 = *pbVar16 + (byte)pbVar18;
    bVar6 = (char)pbVar16 - *pbVar30;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar6);
    *pbVar30 = *pbVar30;
    *pbVar16 = *pbVar16 + (char)((uint)pbVar18 >> 8);
    *pbVar19 = *pbVar19;
    pcVar14 = (char *)(((uint)pbVar21 >> 8) * 0x200);
    *pcVar14 = *pcVar14 + (char)pbVar30;
    bVar60 = CARRY1(*pbVar18,bVar6);
    *pbVar18 = *pbVar18 + bVar6;
    puVar27 = (undefined1 *)((int)puVar35 + (iVar4 - iVar25));
    pbVar20 = pbVar56;
    if (bVar60) {
      *pbVar19 = *pbVar19;
      pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),(byte)pbVar18 | *pbVar16);
      puVar50 = (undefined2 *)((int)puVar35 + (iVar4 - iVar25) + -4);
      puVar35 = (undefined4 *)((int)puVar35 + (iVar4 - iVar25) + -4);
      *puVar50 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar49 = (undefined2 *)((int)puVar35 + -4);
  puVar35 = (undefined4 *)((int)puVar35 + -4);
  *puVar49 = uVar58;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar55 = pbVar55 + -*puVar22;
  puVar52 = (undefined1 *)((int)puVar53 + 4);
  do {
    bVar6 = (byte)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar6;
    pbVar20 = pbVar20 + -*(int *)(pbVar55 + -0x1a);
    *(byte *)puVar22 = (byte)*puVar22 + bVar6;
    bVar6 = bVar6 | (byte)*puVar57;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar6);
    *(byte *)puVar22 = (byte)*puVar22 | bVar6;
    bVar6 = (byte)*puVar22;
    pbVar55 = (byte *)0x2700001;
    while (puVar53 = (undefined2 *)puVar52, (POPCOUNT(bVar6) & 1U) == 0) {
      do {
        *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
        bVar6 = (byte)puVar22 | (byte)*puVar57;
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar6);
        puVar27 = (undefined1 *)puVar53;
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        uVar24 = CONCAT21((short)((uint)pcVar14 >> 0x10),(byte)((uint)pcVar14 >> 8) | bRamfe140212);
        puVar5 = puVar27;
        while( true ) {
          puVar54 = puVar5;
          pcVar14 = (char *)((uint)uVar24 << 8);
          puVar52 = puVar54 + -4;
          puVar53 = (undefined2 *)(puVar54 + -4);
          puVar27 = puVar54 + -4;
          *(undefined2 *)(puVar54 + -4) = in_ES;
          bVar10 = (byte)puVar22;
          *(byte *)puVar22 = (byte)*puVar22 & bVar10;
          bVar31 = *pbVar30;
          bVar12 = (byte)uVar24;
          bVar7 = *pbVar30;
          *pbVar30 = *pbVar30 + bVar12;
          bVar6 = *pbVar30;
          if (!CARRY1(bVar31,bVar12)) break;
          *(byte *)puVar22 = (byte)*puVar22 + bVar10;
          pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar30 >> 8) | bRam026fffe2,
                                              (char)pbVar30));
          *(byte *)puVar22 = (byte)*puVar22 + bVar10;
          bVar10 = bVar10 | (byte)*puVar57;
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar10);
          bVar60 = (POPCOUNT(bVar10) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar30 >> 8);
            uVar58 = (undefined2)((uint)pbVar30 >> 0x10);
            if (!bVar60) {
              *(byte *)puVar57 = (byte)*puVar57;
              pbVar30 = (byte *)CONCAT22(uVar58,CONCAT11(cVar8 + pbVar30[-0x1f],(char)pbVar30));
              goto code_r0x00403d52;
            }
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            uVar59 = (undefined2)((uint)pcVar14 >> 0x10);
            bVar7 = (byte)((uint)pcVar14 >> 8) | (byte)*puVar22;
            uVar24 = CONCAT21(uVar59,bVar7);
            *puVar22 = *puVar22 & (uint)puVar22;
            *pbVar30 = *pbVar30 + bVar7;
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            bVar6 = (char)puVar22 - bVar7;
            pcVar14 = (char *)CONCAT31(uVar23,bVar6);
            *pcVar14 = *pcVar14 + bVar6;
            bVar6 = bVar6 | (byte)*puVar57;
            puVar22 = (uint *)CONCAT31(uVar23,bVar6);
            puVar5 = puVar54 + -4;
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *(byte *)puVar22 = (byte)*puVar22 + bVar6;
            pcVar14 = (char *)((uint)CONCAT21(uVar59,bVar7 | (byte)*puVar22) << 8);
            *puVar22 = *puVar22 - (int)puVar22;
            *(byte *)puVar57 = (byte)*puVar57;
            pbVar30 = (byte *)CONCAT22(uVar58,CONCAT11(cVar8 + pbVar30[-0x1d],(char)pbVar30));
            do {
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              uVar58 = (undefined2)((uint)puVar57 >> 0x10);
              cVar8 = (char)puVar57;
              bVar6 = (byte)((uint)puVar57 >> 8) | pbVar30[-0x17];
              puVar57 = (uint *)CONCAT22(uVar58,CONCAT11(bVar6,cVar8));
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar30 >> 8) | bRam026fffeb,
                                                  (char)pbVar30));
              do {
                *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
                uVar23 = (undefined3)((uint)puVar22 >> 8);
                bVar31 = (byte)puVar22 | (byte)*puVar57;
                pcVar13 = (char *)CONCAT31(uVar23,bVar31);
                bVar7 = pbVar30[-0x16];
                *pcVar13 = *pcVar13 + bVar31;
                pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                           CONCAT11((char)((uint)pbVar30 >> 8) + bVar7 |
                                                    bRam026fffec,(char)pbVar30));
                *pcVar13 = *pcVar13 + bVar31;
                pbVar16 = (byte *)CONCAT31(uVar23,bVar31 | (byte)*puVar57);
                while( true ) {
                  *pbVar16 = *pbVar16 + (byte)pbVar16;
                  uVar23 = (undefined3)((uint)pbVar16 >> 8);
                  bVar7 = (byte)pbVar16 | (byte)*puVar57;
                  puVar22 = (uint *)CONCAT31(uVar23,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  bVar31 = pbVar20[-0x14];
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar57;
                  pcVar13 = (char *)CONCAT31(uVar23,bVar7);
                  bVar10 = pbVar30[-0x15];
                  *pcVar13 = *pcVar13 + bVar7;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar31 |
                                                    pbVar20[-0x13]) << 8);
                  *pcVar13 = *pcVar13 + bVar7;
                  pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                             CONCAT11((char)((uint)pbVar30 >> 8) + bVar10 |
                                                      bRam026fffef,(char)pbVar30));
                  *pcVar13 = *pcVar13 + bVar7;
                  pbVar16 = (byte *)CONCAT31(uVar23,bVar7 | (byte)*puVar57);
                  do {
                    do {
                      bVar31 = (byte)pbVar16;
                      *pbVar16 = *pbVar16 + bVar31;
                      cVar28 = (char)pbVar30;
                      pbVar30 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar30 >> 8) | *pbVar16,
                                                          cVar28));
                      *pbVar16 = bVar31;
                      *pbVar16 = *pbVar16 + bVar31;
                      cVar9 = (char)((uint)pcVar14 >> 8) + *pbVar16;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar9) << 8);
                      uVar23 = (undefined3)((uint)pbVar16 >> 8);
                      bVar31 = bVar31 & *pbVar16;
                      pbVar16 = (byte *)CONCAT31(uVar23,bVar31);
                      bVar7 = *pbVar30;
                      *pbVar30 = *pbVar30 + cVar9;
                    } while (SCARRY1(bVar7,cVar9) == (char)*pbVar30 < '\0');
                    *pbVar16 = *pbVar16 + bVar31;
                    bVar31 = bVar31 | (byte)*puVar57;
                    pbVar16 = (byte *)CONCAT31(uVar23,bVar31);
                    if ((POPCOUNT(bVar31) & 1U) == 0) {
                      *pbVar16 = *pbVar16 + bVar31;
                      *pbVar16 = *pbVar16 + bVar31;
                      cVar8 = cVar8 - bVar6;
                      pbVar18 = (byte *)CONCAT31((int3)((uint)puVar57 >> 8),cVar8);
                      *pbVar16 = *pbVar16 + bVar31;
                      bRam0312382b = bRam0312382b | *pbVar18;
                      *(undefined2 *)(puVar54 + -8) = in_ES;
                      while( true ) {
                        bVar7 = (byte)pbVar16;
                        *pbVar16 = *pbVar16 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar20 + 0x21b0000)[(int)pbVar16];
                        uVar23 = (undefined3)((uint)pbVar16 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar18 = *pbVar18 + bRam0312382b;
                        pbVar16 = (byte *)CONCAT31(uVar23,bVar7 | *pbVar56);
                      }
                      *pbVar16 = *pbVar16 + bVar7;
                      bVar7 = bVar7 | *pbVar56;
                      pcVar14 = (char *)CONCAT31(uVar23,bVar7);
                      out(*(undefined4 *)pbVar56,(short)pbVar18);
                      *pcVar14 = *pcVar14 + bVar7;
                      uVar59 = CONCAT11(bVar6 | bRam6f0a002b,cVar8);
                      pcVar13 = (char *)CONCAT22(uVar58,uVar59);
                      *pcVar14 = *pcVar14 + bVar7;
                      *pcVar13 = *pcVar13 + bRam0312382b;
                      out(*(undefined4 *)(pbVar56 + (uint)bVar61 * -8 + 4),uVar59);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar30 = (byte *)CONCAT31((int3)((uint)pbVar30 >> 8),cVar28 + *pcVar14);
                  } while (SCARRY1(cVar28,*pcVar14) != (char)(cVar28 + *pcVar14) < '\0');
                }
                uVar15 = *puVar57;
                *(byte *)puVar57 = (byte)*puVar57;
              } while (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar57 < '\0');
              *(byte *)puVar57 = (byte)*puVar57;
              *pcVar14 = *pcVar14 - (char)pbVar30;
              *(byte *)puVar22 = (byte)*puVar22 + bVar7;
              bVar7 = bVar7 | (byte)*puVar57;
              puVar22 = (uint *)CONCAT31(uVar23,bVar7);
              bVar60 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar60);
          }
        }
      } while (SCARRY1(bVar7,bVar12));
    }
    *pbVar30 = *pbVar30 + (char)((uint)pcVar14 >> 8);
    *pbVar20 = *pbVar20 - (char)pbVar30;
  } while( true );
}


