/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004034b0
 * Raw Name    : <CreateReportText>b__6
 * Demangled   : <CreateReportText>b__6
 * Prototype   : byte * <CreateReportText>b__6(char * aquirer, uint * param_2)
 * Local Vars  : uStack_1c, pcStack_14, pcStack_4, uVar1, pcVar2, uVar3, iVar4, puVar5, bVar6, bVar7, cVar8, cVar9, bVar10, bVar11, bVar12, in_EAX, pcVar13, pcVar14, uVar15, piVar16, pbVar17, aquirer, pbVar18, pbVar19, pbVar20, pbVar21, puVar22, uVar23, uVar24, iVar25, extraout_ECX, pbVar26, extraout_ECX_00, uVar27, puVar28, cVar29, uVar30, unaff_EBX, pbVar31, bVar32, cVar33, bVar34, uVar35, puVar36, puVar37, piVar38, piVar39, puVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, unaff_EBP, pcVar56, pbVar57, unaff_ESI, unaff_EDI, puVar58, in_ES, in_CS, in_SS, uVar59, in_DS, uVar60, bVar61, in_AF, in_TF, param_2, in_IF, bVar62, bVar63, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar64
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

byte * __fastcall <CreateReportText>b__6(char *aquirer,uint *param_2)

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
  char *in_EAX;
  undefined3 uVar23;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint3 uVar24;
  byte *pbVar21;
  uint *puVar22;
  int iVar25;
  byte *extraout_ECX;
  undefined3 uVar27;
  byte *pbVar26;
  byte *extraout_ECX_00;
  undefined1 *puVar28;
  char cVar29;
  undefined1 uVar30;
  byte bVar32;
  byte bVar34;
  undefined4 unaff_EBX;
  char cVar33;
  byte *pbVar31;
  undefined2 uVar35;
  undefined4 *puVar36;
  undefined2 *puVar37;
  int *piVar38;
  int *piVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined2 *puVar42;
  undefined4 *puVar43;
  undefined2 *puVar44;
  undefined1 *puVar45;
  undefined2 *puVar46;
  undefined2 *puVar47;
  undefined4 *puVar48;
  undefined2 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined1 *puVar53;
  undefined2 *puVar54;
  undefined1 *puVar55;
  char *unaff_EBP;
  char *pcVar56;
  byte *pbVar57;
  uint *unaff_ESI;
  uint *unaff_EDI;
  uint *puVar58;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar59;
  undefined2 in_DS;
  undefined2 uVar60;
  bool bVar61;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar62;
  bool bVar63;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar64;
  undefined4 uStack_1c;
  char *pcStack_14;
  char *pcStack_4;
  
  bVar62 = false;
                    /* .NET CLR Managed Code */
  pbVar26 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                      *(byte *)((int)unaff_ESI + 0x46),(char)unaff_EBX));
  bVar6 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar6;
  piVar16 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + 0x2d);
  unaff_ESI[(int)unaff_EDI * 2] =
       (int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2];
code_r0x004034bb:
  pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_ES);
  uVar15 = *unaff_ESI;
  bVar6 = (byte)piVar16;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
  if (!CARRY1((byte)uVar15,bVar6)) {
    pbVar17 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
    *pbVar17 = *pbVar17 + bVar6;
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar6;
  uVar23 = (undefined3)((uint)piVar16 >> 8);
  bVar6 = bVar6 | *(byte *)((int)piVar16 + 0x4000046);
  piVar16 = (int *)CONCAT31(uVar23,bVar6);
  if ((char)bVar6 < '\x01') {
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    unaff_EBP = pcStack_4;
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar6;
  pbVar17 = (byte *)CONCAT31(uVar23,bVar6 + 0x6f);
  *pbVar17 = *pbVar17 + bVar6 + 0x6f;
  pcVar56 = unaff_EBP + -*param_2;
  in_SS = in_ES;
  do {
    bVar6 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar17 = *pbVar17 + (byte)pbVar17;
    aquirer = (char *)CONCAT22((short)((uint)aquirer >> 0x10),
                               CONCAT11((char)((uint)aquirer >> 8) + bVar6 | (byte)*param_2,
                                        (char)aquirer));
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    bVar6 = (byte)pbVar17 | (byte)*param_2;
    bVar7 = bVar6 - *(byte *)CONCAT31(uVar23,bVar6);
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (uint)(bVar6 < *(byte *)CONCAT31(uVar23,bVar6)) +
                        *(int *)CONCAT31(uVar23,bVar7));
    pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)param_2;
    bVar6 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar7;
    *param_2 = (uint)(pbVar17 + (uint)CARRY1(bVar6,bVar7) + *param_2);
    if ((POPCOUNT(*param_2 & 0xff) & 1U) != 0) {
      *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
      puVar58 = unaff_ESI;
      goto code_r0x00403529;
    }
    *pbVar17 = *pbVar17 + bVar7;
    piVar16 = (int *)CONCAT31(uVar23,bVar7 + 0x6f);
    unaff_EBP = pcVar56;
code_r0x004034f3:
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)piVar16;
    pcVar56 = unaff_EBP + 1;
    pcVar13 = (char *)((int)((uint)piVar16 | 8) + *(int *)((uint)piVar16 | 8));
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pcVar14 = pcVar13 + 0x53000000;
    bVar6 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar6;
    *pbVar26 = *pbVar26 + (char)param_2;
    *pcVar14 = *pcVar14 + bVar6;
    *pcVar56 = *pcVar56 - (char)pbVar26;
    uVar15 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    if (CARRY1((byte)uVar15,bVar6)) {
      cVar8 = bVar6 + 0xa2;
      piVar16 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8);
      aquirer[0x2a0a0000] = aquirer[0x2a0a0000] - (char)aquirer;
      aquirer = (char *)CONCAT22((short)((uint)aquirer >> 0x10),
                                 CONCAT11((char)((uint)aquirer >> 8) + (char)*piVar16,(char)aquirer)
                                );
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                 (char)param_2 - *(byte *)((int)param_2 + 0x467e02));
      unaff_EBP[0x6fe1412] = unaff_EBP[0x6fe1412] + cVar8;
      unaff_EBP = pcVar56;
      goto code_r0x004034bb;
    }
    pcVar13[0x5300006f] = pcVar13[0x5300006f] + (char)((uint)param_2 >> 8);
    pcVar13 = pcVar13 + 0x53000001;
    bVar7 = (byte)pcVar13;
    bRam7e060000 = bVar6;
    *pcVar13 = *pcVar13 + bVar7;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar7 + 0x2d);
    unaff_ESI[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar7) + unaff_ESI[(int)unaff_EDI * 2]);
    puVar58 = unaff_ESI;
code_r0x00403529:
    unaff_ESI = puVar58 + 1;
    out(*puVar58,(short)param_2);
    bVar6 = *pbVar17;
    bVar7 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar7;
  } while (!CARRY1(bVar6,bVar7));
  *pbVar17 = *pbVar17 + bVar7;
  uVar23 = (undefined3)((uint)pbVar17 >> 8);
  bVar7 = bVar7 | pbVar17[0x4000040];
  pcVar14 = (char *)CONCAT31(uVar23,bVar7);
  if ((char)bVar7 < '\x01') goto code_r0x00403579;
  *pcVar14 = *pcVar14 + bVar7;
  cVar8 = bVar7 + 10;
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  puVar58 = unaff_ESI;
  if (cVar8 == '\0' || SCARRY1(bVar7,'\n') != cVar8 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar6 = (byte)pcVar14;
  *pcVar14 = *pcVar14 + bVar6;
  piVar16 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar6 + 0x2d);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
  pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
code_r0x00403549:
  uVar15 = *unaff_ESI;
  bVar6 = (byte)piVar16;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
  unaff_EBP = pcVar56;
  if (!CARRY1((byte)uVar15,bVar6)) goto code_r0x004034f3;
  *(byte *)piVar16 = (char)*piVar16 + bVar6;
  uVar23 = (undefined3)((uint)piVar16 >> 8);
  bVar6 = bVar6 | *(byte *)((int)piVar16 + 0x4000041);
  if ((char)bVar6 < '\x01') {
    *(byte *)param_2 = (byte)*param_2 + (char)aquirer;
    *(byte *)param_2 = (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x7e);
    param_2 = (uint *)((int)param_2 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
  piVar16 = (int *)CONCAT31(uVar23,bVar6 + 0xb);
  puVar58 = unaff_ESI;
code_r0x0040355b:
  pcVar56 = pcVar56 + -*(int *)((int)puVar58 + 2);
  *pcVar56 = *pcVar56 - (char)pbVar26;
  uVar15 = *puVar58;
  bVar6 = (byte)piVar16;
  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
  if (CARRY1((byte)uVar15,bVar6)) goto code_r0x00403548;
code_r0x00403565:
  piVar16 = piVar16 + 0x1ec09c00;
  pbVar17 = (byte *)((int)unaff_EDI + (int)pcVar56 * 2);
  *pbVar17 = *pbVar17 + (char)piVar16;
  *(byte *)puVar58 = (byte)*puVar58 + (char)piVar16 + (char)*piVar16;
  unaff_ESI = puVar58 + 1;
  out(*puVar58,(short)param_2);
  pcVar14 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),uRam8c0a0000);
code_r0x00403579:
  *aquirer = *aquirer + (char)pcVar14;
  *(byte *)param_2 = (byte)*param_2 - (char)((uint)pcVar14 >> 8);
  puVar58 = unaff_ESI;
code_r0x00403580:
  *(byte *)param_2 = (byte)*param_2 + (char)aquirer;
  unaff_ESI = puVar58 + 1;
  out(*puVar58,(short)param_2);
  bVar6 = (byte)pcVar14;
  param_2 = (uint *)((int)param_2 + 1);
  bRam7e060000 = bVar6;
  *pcVar14 = *pcVar14 + bVar6;
  uVar23 = (undefined3)((uint)pcVar14 >> 8);
  bVar7 = bVar6 + 0x2d;
  pcVar14 = (char *)CONCAT31(uVar23,bVar7);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
  pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
  uVar15 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
  if (!CARRY1((byte)uVar15,bVar7)) {
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                               CONCAT11((byte)((uint)pbVar26 >> 8) | *(byte *)((int)puVar58 + 0x45),
                                        (char)pbVar26));
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
        pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
        if ('\0' < (char)bVar6) {
          *pbVar17 = *pbVar17 + bVar6;
          pbVar17 = (byte *)(CONCAT31(uVar23,bVar6 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar6));
          pbRam2a060000 = pbVar17;
          *pbVar26 = *pbVar26 + (char)pbVar26;
          *(byte *)param_2 = (byte)*param_2 ^ (byte)pbVar17;
          *pbVar17 = *pbVar17 + (char)((uint)aquirer >> 8);
          *pbVar17 = *pbVar17 + (byte)pbVar17;
          puVar58 = unaff_EDI;
          in_SS = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      aquirer = (char *)CONCAT31((int3)((uint)aquirer >> 8),
                                 (byte)aquirer |
                                 *(byte *)((int)(param_2 + 0xa004000) + (int)unaff_EDI));
      puVar58 = unaff_ESI;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    bVar7 = bVar7 + 0x37;
    piVar16 = (int *)CONCAT31(uVar23,bVar7);
    unaff_ESI[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
    uVar15 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
    puVar58 = unaff_ESI;
    if (!CARRY1((byte)uVar15,bVar7)) goto code_r0x0040355b;
    *(byte *)piVar16 = (char)*piVar16 + bVar7;
    bVar7 = bVar7 | *(byte *)((int)piVar16 + 0x4000043);
    pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
    if ((char)bVar7 < '\x01') {
      *pbVar17 = *pbVar17 + bVar7;
      pcVar56 = pcVar56 + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar17 = *pbVar17 + bVar7;
      uStack_1c = (undefined4 *)((uint)uStack_1c._2_2_ << 0x10);
      piVar16 = (int *)CONCAT31(uVar23,bVar7 - *pbVar17);
      unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar7 < *pbVar17) - *piVar16));
      pbVar17 = (byte *)CONCAT31(uVar23,(bVar7 - *pbVar17) + (char)*piVar16);
      pcStack_14 = (char *)0x17000000;
      puVar58 = unaff_EDI;
code_r0x00403615:
      bVar6 = *pbVar17;
      bVar7 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar7;
      *param_2 = (uint)(pbVar17 + (uint)CARRY1(bVar6,bVar7) + *param_2);
      unaff_EDI = puVar58;
      if ((POPCOUNT(*param_2 & 0xff) & 1U) == 0) {
        *pbVar17 = *pbVar17 + bVar7;
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7 + 0x28);
        unaff_EDI = puVar58 + 1;
        uVar15 = in((short)param_2);
        *puVar58 = uVar15;
        *pcVar14 = *pcVar14 + bVar7 + 0x28;
        aquirer = (char *)CONCAT22((short)((uint)aquirer >> 0x10),
                                   CONCAT11((byte)((uint)aquirer >> 8) | pbVar26[(int)aquirer],
                                            (char)aquirer));
        pcVar14[0x28] = pcVar14[0x28] + (char)((uint)param_2 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar17 = *pbVar17 + bVar7;
    uVar15 = CONCAT31(uVar23,bVar7 + 0xb);
    piVar16 = (int *)(uVar15 - *unaff_ESI);
    if (uVar15 < *unaff_ESI) {
      cVar8 = (char)piVar16;
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      uVar59 = (undefined2)((uint)pbVar26 >> 0x10);
      cVar9 = (char)pbVar26;
      bVar6 = (byte)((uint)pbVar26 >> 8) | *(byte *)((int)param_2 + 2);
      *pcVar56 = *pcVar56 - cVar9;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar8;
      uStack_1c = (undefined4 *)CONCAT22(uStack_1c._2_2_,in_ES);
      pbVar26 = (byte *)CONCAT22(uVar59,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar59,CONCAT11(bVar6,
                                                  cVar9)) + 0x38),cVar9));
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      pcVar14 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar8 + 'o');
      *(byte *)param_2 = (byte)*param_2 + (char)aquirer;
      *pcVar14 = *pcVar14 - cVar9;
      *pcVar14 = *pcVar14 + cVar8 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - unaff_ESI[0x11]);
      goto code_r0x004035e5;
    }
    puVar58 = unaff_ESI + 1;
    out(*unaff_ESI,(short)param_2);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar7) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pcStack_14 & 0x4000) != 0;
  bVar62 = ((uint)pcStack_14 & 0x400) != 0;
  in_IF = ((uint)pcStack_14 & 0x200) != 0;
  in_TF = ((uint)pcStack_14 & 0x100) != 0;
  in_AF = ((uint)pcStack_14 & 0x10) != 0;
  in_ID = ((uint)pcStack_14 & 0x200000) != 0;
  in_AC = ((uint)pcStack_14 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar8 = (char)pcVar14;
  *pcVar14 = *pcVar14 + cVar8;
  aquirer = (char *)CONCAT22((short)((uint)aquirer >> 0x10),
                             CONCAT11((byte)((uint)aquirer >> 8) | (byte)*param_2,(char)aquirer));
  pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[0x3e],(char)pbVar26));
  *pcVar14 = *pcVar14 + cVar8;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8 + '(');
  cVar8 = (char)((uint)param_2 >> 8);
  *(byte *)((int)param_2 + 0x21) = *(byte *)((int)param_2 + 0x21) + cVar8;
  pbVar18 = pbVar17 + 2;
  *pbVar18 = *pbVar18 + cVar8;
  bVar6 = *pbVar18;
code_r0x00403643:
  cVar8 = (char)pbVar17;
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *pbVar17 = *pbVar17 + cVar8;
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    cVar9 = cVar8 + '(';
    pcVar14 = (char *)CONCAT31(uVar23,cVar9);
    in_AF = ((uint)pbVar17 & 0x1000) != 0;
    *pcVar14 = *pcVar14 + cVar9;
    puVar58 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*unaff_ESI);
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                               CONCAT11((byte)((uint)pbVar26 >> 8) |
                                        *(byte *)((int)unaff_ESI + 0x3f),(char)pbVar26));
    *pcVar14 = *pcVar14 + cVar9;
    pbVar17 = (byte *)CONCAT31(uVar23,cVar8 + 'M');
    param_2 = (uint *)((uint)puVar58 | *puVar58);
    *pbVar17 = *pbVar17 + (char)((uint)aquirer >> 8);
code_r0x00403659:
    puVar58 = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
    bVar6 = (byte)pbVar17;
    *(byte *)unaff_EDI = bVar6;
    *pbVar17 = *pbVar17 + bVar6;
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    bVar6 = bVar6 | (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6);
    unaff_EDI = puVar58;
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x0040369e;
    *pcVar14 = *pcVar14 + bVar6;
    bVar6 = bVar6 + 2;
    *pcVar56 = *pcVar56 - (char)pbVar26;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    puVar22 = unaff_ESI + (uint)bVar62 * -2 + 1;
    out(*unaff_ESI,(short)param_2);
    unaff_EDI = (uint *)((int)puVar58 + (uint)bVar62 * -2 + 1);
    unaff_ESI = (uint *)((int)puVar22 + (uint)bVar62 * -2 + 1);
    *(byte *)puVar58 = (byte)*puVar22;
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    cVar9 = (char)((uint)aquirer >> 8);
    pbVar26[-0x21f60000] = pbVar26[-0x21f60000] - cVar9;
    cVar8 = (bVar6 | (byte)*unaff_ESI) - 6;
    piVar16 = (int *)CONCAT31(uVar23,cVar8);
    pcVar56 = (char *)((int)piVar16 * 2 + 0x2adc0a00);
    *pcVar56 = *pcVar56 - cVar9;
    *piVar16 = (int)(*piVar16 + (int)param_2);
    *(char *)piVar16 = (char)*piVar16 + cVar8;
    bVar6 = cVar8 + (char)*piVar16;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar15 = CONCAT31(uVar23,bVar6 + in_AF * '\x06') & 0xffffff0f;
    pbVar17 = (byte *)CONCAT22((short)(uVar15 >> 0x10),
                               CONCAT11((char)((uint)pbVar17 >> 8) + in_AF,(char)uVar15));
    pcVar14 = aquirer;
  }
  else {
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)param_2 >> 8);
    pcVar14 = aquirer;
  }
  *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)((uint)pbVar17 >> 8);
  *(byte *)param_2 = (byte)*param_2 + (char)pcVar14;
  bVar7 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar7;
  bVar6 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar7;
  aquirer = pcVar14;
  pcVar56 = pcStack_14;
  if (!CARRY1(bVar6,bVar7)) goto code_r0x004036a6;
  *pbVar17 = *pbVar17 + bVar7;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar7 | pbVar17[0x400003f]);
  aquirer = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),
                             (char)pcVar14 - *(byte *)((int)param_2 + 0x5040302));
  *(char *)((int)pbVar17 * 2) = *(char *)((int)pbVar17 * 2) - (char)((uint)pcVar14 >> 8);
  while( true ) {
code_r0x004036a6:
    aquirer = (char *)CONCAT31((int3)((uint)aquirer >> 8),(char)aquirer + (byte)*unaff_ESI);
    pbVar17 = (byte *)(CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + '%') + 0x1ebd9f3);
    uStack_1c = (undefined4 *)CONCAT22(uStack_1c._2_2_,in_ES);
    bVar6 = (byte)pbVar17;
    bVar61 = CARRY1(*pbVar17,bVar6);
    *pbVar17 = *pbVar17 + bVar6;
    puVar36 = uStack_1c + -1;
    *(undefined2 *)(uStack_1c + -1) = in_ES;
    cVar8 = (char)param_2;
    if (bVar61) {
      *pbVar17 = *pbVar17 + bVar6;
      uVar59 = (undefined2)((uint)pbVar26 >> 0x10);
      bVar32 = (byte)((uint)pbVar26 >> 8) | pcVar56[0x47];
      pcVar14 = (char *)CONCAT22(uVar59,CONCAT11(bVar32,(char)pbVar26));
      *pbVar17 = *pbVar17 + bVar6;
      uVar23 = (undefined3)((uint)pbVar17 >> 8);
      bVar6 = bVar6 + 0x2a;
      *pcVar14 = *pcVar14 + cVar8;
      pbVar17 = (byte *)((int)CONCAT31(uVar23,bVar6) * 2);
      *pbVar17 = *pbVar17 ^ bVar6;
      bVar6 = bVar6 ^ *(byte *)CONCAT31(uVar23,bVar6);
      pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
      bVar7 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar6;
      *pbVar17 = (*pbVar17 - bVar6) - CARRY1(bVar7,bVar6);
      *aquirer = *aquirer + cVar8;
      pbVar26 = (byte *)CONCAT22(uVar59,CONCAT11(bVar32 + pcVar14[0x38],(char)pbVar26));
      *pbVar17 = *pbVar17 + bVar6;
      cVar9 = bVar6 + 2;
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar64 = (*pcVar2)();
        pbVar17 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar23,cVar9) = *(char *)CONCAT31(uVar23,cVar9) + cVar9;
      bVar6 = bVar6 + 0x71;
      pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
      in_SS = *(undefined2 *)(uStack_1c + -1);
      *pbVar17 = *pbVar17 + bVar6;
      iVar25 = (int)aquirer - *param_2;
      aquirer = (char *)CONCAT22((short)((uint)iVar25 >> 0x10),
                                 CONCAT11((char)((uint)iVar25 >> 8) + *pbVar17,(char)iVar25));
      pcVar56 = (char *)*uStack_1c;
      bVar61 = CARRY1(*pbVar17,bVar6);
      *pbVar17 = *pbVar17 + bVar6;
      *(undefined2 *)uStack_1c = in_ES;
      *(undefined2 *)(uStack_1c + -1) = in_ES;
    }
    bVar6 = (byte)pbVar17;
    uVar23 = (undefined3)((uint)pbVar17 >> 8);
    if (bVar61) break;
    *(byte *)param_2 = (byte)*param_2 + (byte)aquirer;
    *(byte *)((int)param_2 + (int)pcVar56) = *(byte *)((int)param_2 + (int)pcVar56) + bVar6;
    pcVar14 = (char *)CONCAT31(uVar23,(byte)*param_2);
code_r0x0040369e:
    pbVar17 = (byte *)(pcVar14 + *(int *)(pcVar14 + 0x6c28));
  }
  *pbVar17 = *pbVar17 + bVar6;
  uVar24 = (uint3)((uint)aquirer >> 8);
  pbVar18 = (byte *)CONCAT31(uVar24,(byte)aquirer | *pbVar26);
  in_SS = *(undefined2 *)uStack_1c;
  puVar36 = uStack_1c + 1;
  puVar58 = unaff_ESI + (uint)bVar62 * -2 + 1;
  out(*unaff_ESI,(short)param_2);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
  *pbVar17 = *pbVar17 + bVar6;
  bVar6 = bVar6 | (byte)*unaff_EDI;
  pbVar17 = (byte *)CONCAT31(uVar23,bVar6);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)aquirer >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar6);
  *(undefined2 *)uStack_1c = pcStack_14._0_2_;
  cVar9 = (char)pbVar26;
  cVar29 = cVar9 - (byte)*param_2;
  pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar29);
  if (cVar29 != '\0' && (char)(byte)*param_2 <= cVar9) {
    *pbVar17 = *pbVar17 + bVar6;
    iVar25 = CONCAT31(uVar23,bVar6 + 0x2a);
    unaff_ESI = (uint *)((int)puVar58 + 1);
    cVar9 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x7b);
    uVar64 = CONCAT44(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar9,cVar8)),iVar25);
    in_ES = *(undefined2 *)uStack_1c;
    pcVar14 = (char *)(iVar25 + 0x6f);
    *pcVar14 = *pcVar14 + cVar9;
    pbVar18 = (byte *)((uint)uVar24 << 8);
    do {
      piVar16 = (int *)((ulonglong)uVar64 >> 0x20);
      pcVar14 = (char *)uVar64;
      *(char *)piVar16 = (char)*piVar16;
      if ((char)*piVar16 == '\0') {
        pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
        pcStack_14._0_2_ = in_ES;
_ctor:
        param_2 = (uint *)((ulonglong)uVar64 >> 0x20);
        pbVar18 = (byte *)((uint)CONCAT21((short)((uint)pbVar18 >> 0x10),
                                          (char)((uint)pbVar18 >> 8) + *(char *)uVar64) << 8);
        pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
        *(byte *)param_2 = (byte)*param_2;
        uVar23 = (undefined3)((ulonglong)uVar64 >> 8);
        bVar7 = (char)uVar64 - *(char *)uVar64;
        pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
        bVar6 = *pbVar17;
        *pbVar17 = *pbVar17 + bVar7;
        puVar58 = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar6,bVar7) + *(int *)pbVar17);
        pbVar17 = (byte *)CONCAT31(uVar23,bVar7);
        uStack_1c = puVar36;
        break;
      }
      *pcVar14 = *pcVar14 + (char)uVar64;
      *piVar16 = (int)(pcVar56 + *piVar16);
      unaff_ESI = (uint *)((int)unaff_ESI + 1);
      uVar64 = CONCAT44(CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar64 >> 0x28) +
                                          *(char *)((int)piVar16 + -0x33),
                                          (char)((ulonglong)uVar64 >> 0x20))),pcVar14);
      in_ES = *(undefined2 *)puVar36;
      puVar36 = (undefined4 *)((int)puVar36 + 4);
      pbVar17 = pbVar18;
code_r0x0040371e:
      puVar58 = (uint *)((ulonglong)uVar64 >> 0x20);
      pbVar31 = (byte *)uVar64;
      bVar7 = (byte)((ulonglong)uVar64 >> 0x28);
      pbVar31[0x6f] = pbVar31[0x6f] + bVar7;
      pbVar18 = (byte *)((uint)pbVar17 & 0xffffff00);
      *(char *)puVar58 = (char)*puVar58;
      bVar6 = (byte)uVar64;
      if ((char)*puVar58 != '\0') {
        *pbVar31 = *pbVar31 + bVar6;
        uVar15 = *puVar58;
        *puVar58 = (uint)(pcVar56 + *puVar58);
        piVar38 = (int *)((int)puVar36 + -4);
        *(uint **)((int)puVar36 + -4) = unaff_ESI;
        if (CARRY4(uVar15,(uint)pcVar56)) {
          *pbVar31 = *pbVar31 + bVar6;
          *(undefined2 *)((int)puVar36 + -8) = in_ES;
          puVar22 = puVar58 + 0x1d028000;
          uVar15 = *puVar22;
          *(byte *)puVar22 = (byte)*puVar22 - bVar7;
          *(uint *)pbVar31 = (*(int *)pbVar31 - (int)pbVar31) - (uint)((byte)uVar15 < bVar7);
          *(byte *)puVar58 = (char)*puVar58 + bVar6;
          *pcVar56 = *pcVar56;
          uVar64 = CONCAT44(puVar58,CONCAT31((int3)((ulonglong)uVar64 >> 8),bVar6 + 0x2a));
          puVar37 = (undefined2 *)((int)puVar36 + -0xc);
          puVar36 = (undefined4 *)((int)puVar36 + -0xc);
          *puVar37 = in_DS;
          pcStack_14._0_2_ = in_ES;
          goto _ctor;
        }
        bVar61 = false;
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),*pbVar31);
        goto code_r0x004037a7;
      }
      bVar7 = *pbVar31;
      *pbVar31 = *pbVar31 + bVar6;
      *(uint *)pbVar31 = (*(int *)pbVar31 - (int)pbVar31) - (uint)CARRY1(bVar7,bVar6);
      bVar6 = *pbVar18;
      bVar7 = (byte)((ulonglong)uVar64 >> 0x20);
      *pbVar18 = *pbVar18 + bVar7;
      if (CARRY1(bVar6,bVar7)) goto code_r0x0040375a;
    } while( true );
  }
  uVar64 = CONCAT44(param_2,pbVar17);
  unaff_ESI = puVar58 + (uint)bVar62 * -2 + 1;
  out(*puVar58,(short)param_2);
  bVar7 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar7;
  *pbVar18 = *pbVar18 + (char)pbVar26;
  bVar6 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar7;
  *(byte **)(pbVar26 + -0x49) =
       (byte *)((int)unaff_ESI + (uint)CARRY1(bVar6,bVar7) + *(int *)(pbVar26 + -0x49));
  puVar36 = uStack_1c;
  in_ES = pcStack_14._0_2_;
code_r0x0040375a:
  pbVar17 = (byte *)uVar64;
  *pbVar17 = *pbVar17 + (char)uVar64;
  bVar61 = CARRY1((byte)((uint)pbVar18 >> 8),*pbVar17);
  *(undefined2 *)((int)puVar36 + -4) = in_SS;
  iVar25 = CONCAT31(0x1f0a00,bVar61 + 'o') + *(int *)(pbVar26 + (int)pcVar56) +
           (uint)(0x90 < bVar61) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar64 >> 0x20);
  pcVar13 = (char *)(CONCAT31((int3)((uint)iVar25 >> 8),(char)iVar25 + -0x66) | *unaff_EDI);
  bVar6 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar14 = (char *)CONCAT22(0xd0a,(ushort)bVar6 << 8);
  *pcVar13 = *pcVar13 + (char)pcVar13;
  bVar7 = (byte)((ulonglong)uVar64 >> 0x20);
  puVar28 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | pbVar26[(int)pcVar56],bVar7));
  *pcVar14 = *pcVar14 + (char)pcVar13;
  *pcVar56 = *pcVar56 - bVar6;
  *puVar28 = *puVar28;
  pbVar17 = (byte *)(((uint)pcVar13 | 8) + 0x4490f9d8);
  bVar6 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  uVar15 = *unaff_ESI;
  *(uint *)((int)unaff_ESI + (int)pbVar17) =
       *(uint *)((int)unaff_ESI + (int)pbVar17) ^ (uint)pcVar14;
  *pbVar17 = *pbVar17 | bVar6;
  piVar38 = (int *)0x2609fffc;
  bVar61 = false;
  uRam2609fffc = in_ES;
  *pbVar17 = *pbVar17 | bVar6;
  uVar64 = CONCAT44(CONCAT31((int3)((uint)puVar28 >> 8),bVar7 | (byte)uVar15),pbVar17);
code_r0x004037a7:
  while( true ) {
    pbVar17 = (byte *)((ulonglong)uVar64 >> 0x20);
    uVar59 = (undefined2)((ulonglong)uVar64 >> 0x20);
    out(*unaff_ESI,uVar59);
    out(unaff_ESI[(uint)bVar62 * -2 + 1],uVar59);
    puVar58 = (uint *)((int)unaff_EDI + (int)pbVar17);
    uVar15 = *puVar58;
    uVar1 = (uint)uVar64 + *puVar58;
    *puVar58 = uVar1 + bVar61;
    iVar25 = *piVar38 + *(int *)(pcVar14 + (int)pbVar17) +
             (uint)(CARRY4(uVar15,(uint)uVar64) || CARRY4(uVar1,(uint)bVar61));
    cVar8 = (char)iVar25 + '\t';
    pbVar18 = (byte *)CONCAT31((int3)((uint)iVar25 >> 8),cVar8);
    pcVar56 = (char *)((uint)bVar62 * -8 + 0x260a0004);
    out(uRam260a0000,uVar59);
    uVar59 = (undefined2)piVar38[1];
    *pbVar18 = *pbVar18 + cVar8;
    bVar7 = (byte)((uint)pcVar14 >> 8) | *pbVar17;
    *(undefined2 *)(piVar38 + 1) = in_DS;
    bVar6 = *pbVar18;
    pbVar18 = pbVar18 + (uint)CARRY1(bVar7,*pbVar18) + *(int *)pbVar18;
    *pbVar17 = *pbVar17 + 6;
    cVar9 = (char)pbVar26 - *pcVar56;
    pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),CONCAT11(bVar7 + bVar6 + *pbVar18,6));
    *pbVar18 = *pbVar18;
    *(undefined2 *)piVar38 = in_ES;
    uVar23 = (undefined3)((uint)pbVar18 >> 8);
    cVar8 = (char)pbVar18 - *pbVar18;
    piVar16 = (int *)CONCAT31(uVar23,cVar8);
    unaff_ESI = (uint *)(pcVar56 + *piVar16);
    bVar6 = cVar8 + (char)*piVar16;
    pcVar56 = (char *)CONCAT31(uVar23,bVar6);
    piVar39 = piVar38 + -1;
    piVar38[-1] = (int)pcVar14;
    *pcVar56 = *pcVar56 + bVar6;
    *pcVar56 = *pcVar56 + bVar6;
    *pcVar56 = *pcVar56 + bVar6;
    bVar61 = CARRY1(*pbVar17,bVar6);
    *pbVar17 = *pbVar17 + bVar6;
    if (bVar61) break;
    in_ES = (undefined2)piVar38[-1];
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar9);
    uVar64 = CONCAT44(pbVar17,pcVar56);
  }
  *pcVar56 = *pcVar56 + bVar6;
  pbVar31 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((byte)((uint)pbVar26 >> 8) | bRam080a0056,cVar9));
  *pcVar56 = *pcVar56 + bVar6;
  bVar32 = bVar6 + 2;
  *pbVar31 = *pbVar31 - (char)((ulonglong)uVar64 >> 0x20);
  *(char *)CONCAT31(uVar23,bVar32) = *(char *)CONCAT31(uVar23,bVar32) + bVar32;
  uVar15 = *unaff_ESI;
  uVar27 = (undefined3)((uint)pcVar14 >> 8);
  pbVar26 = (byte *)(CONCAT31(uVar27,(byte)uVar15) | 6);
  bVar7 = 9 < (bVar6 + 0x74 & 0xf) | in_AF;
  bVar10 = bVar6 + 0x74 + bVar7 * '\x06';
  bVar10 = bVar10 + (0x90 < (bVar10 & 0xf0) | 0x8d < bVar32 | bVar7 * (0xf9 < bVar10)) * '`';
  pbVar18 = (byte *)CONCAT31(uVar23,bVar10);
  bVar6 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar10;
  if (!SCARRY1(bVar6,bVar10)) {
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    unaff_ESI = (uint *)((int)unaff_ESI + *(int *)(pbVar17 + 0x33));
    *pbVar18 = *pbVar18 | bVar10;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    bVar6 = bVar10 + 0x72;
    piVar38[-2] = (int)pbVar31;
    *(byte *)CONCAT31(uVar23,bVar6) = *(byte *)CONCAT31(uVar23,bVar6) | bVar6;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    pbVar26 = (byte *)CONCAT31(uVar27,((byte)uVar15 | 6) + (byte)*unaff_ESI);
    pcVar56 = (char *)CONCAT31(uVar23,bVar10 - 0x11);
    piVar39 = piVar38 + -3;
    piVar38[-3] = (int)pbVar26;
    *pcVar56 = *pcVar56 + (bVar10 - 0x11);
    pbVar18 = (byte *)CONCAT31(uVar23,bVar10 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar18 = *pbVar18 + (bVar10 - 0xf);
  }
code_r0x00403825:
  pbVar57 = (byte *)0x80a0000;
  uVar23 = (undefined3)((uint)pbVar18 >> 8);
  cVar8 = (char)pbVar18 + '\x7f';
  pcVar56 = (char *)CONCAT31(uVar23,cVar8);
  *(byte **)((int)piVar39 + -4) = pbVar31;
  *pcVar56 = *pcVar56 + cVar8;
  iVar25 = CONCAT31(uVar23,(char)pbVar18 + -0x7f) + 0x547d;
  cVar9 = (char)iVar25;
  uVar23 = (undefined3)((uint)iVar25 >> 8);
  cVar8 = cVar9 + '*';
  pcVar56 = (char *)CONCAT31(uVar23,cVar8);
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | (byte)*unaff_ESI);
  cVar29 = (char)pbVar31 - (byte)*unaff_ESI;
  uVar60 = (undefined2)((uint)pbVar31 >> 0x10);
  cVar33 = (char)((uint)pbVar31 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar31 >> 8),cVar29) + 0x57);
  *pcVar56 = *pcVar56 + cVar8;
  bVar6 = cVar9 + 0x54U & *pbVar17;
  iVar25 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
  pcVar56 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
  *(undefined2 *)((int)piVar39 + -8) = in_DS;
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar33,cVar29)) + 0x58);
  *pcVar56 = *pcVar56 + bVar6 + 0x2a;
  bVar32 = bVar6 + 0x54 & *pbVar17;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar23,bVar32) = *(char *)CONCAT31(uVar23,bVar32) + bVar32;
  pcVar56 = (char *)CONCAT31(uVar23,bVar32 + 0x2a);
  pbVar18 = *(byte **)((int)piVar39 + -8);
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar33,cVar29)) + 0x55);
  *pcVar56 = *pcVar56 + bVar32 + 0x2a;
  pcVar56 = (char *)CONCAT31(uVar23,bVar32 + 0x57);
  pbVar17 = pbVar17 + *(int *)pbVar18;
  *(undefined4 *)((int)piVar39 + -8) = 0x2a;
  cVar33 = cVar33 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar33,cVar29)) + 0x55);
  *pcVar56 = *pcVar56 + bVar32 + 0x57;
  cVar8 = bVar32 - 0x3a;
  pcVar56 = (char *)CONCAT31(uVar23,cVar8);
  *(undefined2 *)((int)piVar39 + -0xc) = uVar59;
  *pcVar56 = *pcVar56 + cVar8;
  bVar6 = *pbVar17;
  cVar9 = (char)pbVar26;
  *(undefined2 *)((int)piVar39 + -0x10) = in_DS;
  pbVar31 = (byte *)CONCAT22(uVar60,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar33,
                                                  cVar29)) + 0x59),cVar29));
  *pcVar56 = *pcVar56 + cVar8;
  bVar11 = bVar32 - 0x10 & *pbVar17;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar25);
  *(char *)CONCAT31(uVar23,bVar11) = *(char *)CONCAT31(uVar23,bVar11) + bVar11;
  bVar11 = bVar11 + 0x2a;
  pbVar20 = (byte *)CONCAT31(uVar23,bVar11);
  puVar36 = (undefined4 *)((int)piVar39 + -0x14);
  *(undefined2 *)((int)piVar39 + -0x14) = in_DS;
  bVar32 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar20 = *pbVar20 + bVar11;
  bVar10 = *pbVar17;
  puVar41 = (undefined4 *)((int)piVar39 + -0x18);
  *(undefined2 *)((int)piVar39 + -0x18) = in_DS;
  bVar12 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar20 = *pbVar20 + bVar11;
  pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar26 >> 8) | bVar6) + bVar32 | bVar10) +
                                      bVar12 | *pbVar17,cVar9));
  *pbVar31 = *pbVar31 + cVar29;
  *(byte *)((int)pbVar20 * 2) = *(byte *)((int)pbVar20 * 2) ^ bVar11;
  bVar6 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar11;
  bVar32 = *pbVar20;
  *pbVar26 = *pbVar26 + (char)pbVar17;
  bVar6 = ((bVar11 - bVar32) - CARRY1(bVar6,bVar11)) + *pbVar17;
  pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
  if ((POPCOUNT(bVar6) & 1U) != 0) {
    pbVar17 = *(byte **)((int)piVar39 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar20 = *pbVar20 + bVar6;
  cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
  pbVar19 = (byte *)CONCAT31(uVar23,cVar8);
  bVar6 = *pbVar17;
  *pbVar17 = *pbVar17 + cVar9;
  if (SCARRY1(bVar6,cVar9) == (char)*pbVar17 < '\0') {
    cRam33100000 = cRam33100000 - cVar8;
    cVar8 = cVar8 + *pbVar17;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    puVar36 = (undefined4 *)((int)piVar39 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x004038b0:
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    cVar8 = (char)pbVar19 + '\x02';
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    puVar36 = puVar41;
    if ((POPCOUNT(cVar8) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar18);
      cVar8 = (char)pbVar20 + *pbVar17;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
code_r0x0040390c:
      cVar9 = (char)pbVar20;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040390e;
      *pbVar18 = *pbVar18 + cVar9;
      goto code_r0x00403962;
    }
    *pbVar20 = *pbVar20 + cVar8;
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    piVar39 = (int *)((int)puVar41 + -4);
    *(byte **)((int)puVar41 + -4) = pbVar26;
    cVar8 = (char)pbVar19 + '.' + *pbVar17;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar19 = pbVar17 + (int)pbVar20;
      *pbVar19 = *pbVar19 + cVar8;
      bVar6 = *pbVar19;
      goto code_r0x00403912;
    }
    *pbVar20 = *pbVar20 + cVar8;
    bVar6 = cVar8 + 2;
    pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403916;
    *pbVar20 = *pbVar20 + bVar6;
    cVar9 = cVar8 + 'q';
    piVar16 = (int *)CONCAT31(uVar23,cVar9);
    *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0x90 < bVar6);
    bVar6 = *pbVar31;
    bVar32 = (byte)((uint)pbVar26 >> 8);
    *pbVar31 = *pbVar31 + bVar32;
    if (!CARRY1(bVar6,bVar32)) {
      out(*(undefined4 *)pbVar18,(short)pbVar17);
      bVar6 = (cVar9 - (char)*piVar16) - CARRY1(bVar6,bVar32);
      *pbVar17 = *pbVar17 + (char)pbVar26;
      cVar8 = bVar6 - *(byte *)CONCAT31(uVar23,bVar6);
      unaff_ESI = (uint *)(pbVar18 +
                          ((((uint)bVar62 * -8 + 4) - *(int *)CONCAT31(uVar23,cVar8)) -
                          (uint)(bVar6 < *(byte *)CONCAT31(uVar23,bVar6))));
      pbVar18 = (byte *)CONCAT31(uVar23,cVar8);
      goto code_r0x00403825;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    uVar60 = (undefined2)((uint)pbVar31 >> 0x10);
    bVar6 = (byte)((uint)pbVar31 >> 8) | bRam080a0056;
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    pcVar56 = (char *)CONCAT31(uVar23,cVar8 + 's');
    pbVar31 = (byte *)CONCAT22(uVar60,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar60,CONCAT11(bVar6,(
                                                  char)pbVar31)) + 0x56),(char)pbVar31));
    *pcVar56 = *pcVar56 + cVar8 + 's';
    bVar6 = cVar8 - 0xf;
    pbVar17 = *(byte **)((int)puVar41 + -4);
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    bVar32 = cVar8 + 0x1e;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar32);
    *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
         pbVar17 + (uint)(0xd2 < bVar6) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
    puVar36 = (undefined4 *)((int)puVar41 + -4);
    puVar43 = (undefined4 *)((int)puVar41 + -4);
    *(undefined2 *)((int)puVar41 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar19;
    bVar6 = *pbVar18;
    *pbVar18 = *pbVar18 + bVar32;
    if (CARRY1(bVar6,bVar32)) {
      *pbVar19 = *pbVar19 + bVar32;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar32 | pbVar19[0x400005a]);
      if ('\0' < (char)(bVar32 | pbVar19[0x400005a])) {
code_r0x004038f6:
        bVar6 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar6;
        uVar23 = (undefined3)((uint)pbVar20 >> 8);
        cVar8 = ((bVar6 + 0x28) - *(char *)CONCAT31(uVar23,bVar6 + 0x28)) - (0xd7 < bVar6);
        pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
        bVar6 = *pbVar31;
        bVar32 = (byte)((uint)pbVar26 >> 8);
        *pbVar31 = *pbVar31 + bVar32;
        if (CARRY1(bVar6,bVar32)) {
          *pbVar20 = *pbVar20 + cVar8;
          pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                     CONCAT11(bVar32 | *pbVar20,(char)pbVar26));
          *pbVar18 = *pbVar18 + cVar8;
          goto code_r0x00403908;
        }
        pbVar19 = pbVar20 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar23 = (undefined3)((uint)pbVar20 >> 8);
      bVar32 = (char)pbVar20 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar23,bVar32);
      *pbVar17 = *pbVar17 + (char)pbVar26;
      pbVar20 = (byte *)CONCAT31(uVar23,(bVar32 & bVar6) + *pbVar18);
      *pbVar26 = *pbVar26 - (char)((uint)pbVar17 >> 8);
      puVar48 = puVar43;
      goto code_r0x0040395a;
    }
    puVar40 = (undefined4 *)((int)puVar41 + -8);
    puVar41 = (undefined4 *)((int)puVar41 + -8);
    *puVar40 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar16 = (char)*piVar16 + bVar6;
  unaff_ESI = puVar58;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar20 = *pbVar20 + cVar9;
  bVar6 = cVar9 + 2;
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar6);
code_r0x00403912:
  bVar61 = (POPCOUNT(bVar6) & 1U) == 0;
  puVar48 = puVar36;
  if (!bVar61) goto code_r0x00403967;
  *pbVar20 = *pbVar20 + (char)pbVar20;
code_r0x00403916:
  bVar12 = (char)pbVar20 + 0x6f;
  pbVar19 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar20 >> 8),bVar12);
  bVar10 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  bVar32 = *pbVar19;
  bVar6 = *pbVar19;
  puVar48 = (undefined4 *)((int)puVar36 + -4);
  *(undefined2 *)((int)puVar36 + -4) = in_ES;
  if (bVar6 == 0 || SCARRY1(bVar10,bVar12) != (char)bVar32 < '\0') goto code_r0x00403979;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19 = (byte *)CONCAT31((int3)(char)((uint)pbVar20 >> 8),(char)pbVar20 + -100);
  *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
       pbVar17 + (uint)(0xd2 < bVar12) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
  puVar42 = (undefined2 *)((int)puVar36 + -8);
  puVar36 = (undefined4 *)((int)puVar36 + -8);
  *puVar42 = in_ES;
code_r0x00403926:
  puVar41 = puVar36 + 1;
  puVar48 = puVar36 + 1;
  puVar43 = puVar36 + 1;
  *(undefined4 *)pbVar19 = *puVar36;
  bVar6 = *pbVar18;
  bVar32 = (byte)pbVar19;
  *pbVar18 = *pbVar18 + bVar32;
  if (CARRY1(bVar6,bVar32)) {
    *pbVar19 = *pbVar19 + bVar32;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar32 = bVar32 | pbVar19[0x400005b];
    pbVar20 = (byte *)CONCAT31(uVar23,bVar32);
    pbVar19 = pbVar18;
    if ((char)bVar32 < '\x01') goto code_r0x00403991;
    *pbVar20 = *pbVar20 + bVar32;
    cVar8 = bVar32 + 0x28;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    *(byte **)pbVar20 = pbVar20 + (uint)(0xd7 < bVar32) + *(int *)pbVar20;
    bVar6 = *pbVar31;
    bVar32 = (byte)((uint)pbVar26 >> 8);
    *pbVar31 = *pbVar31 + bVar32;
    if (CARRY1(bVar6,bVar32)) {
      *pbVar20 = *pbVar20 + cVar8;
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11(bVar32 | *pbVar20,(char)pbVar26));
      *pbVar18 = *pbVar18 + cVar8;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x55],(char)pbVar31))
      ;
      *pbVar20 = *pbVar20 + cVar8;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar36 = in_ES;
code_r0x00403962:
    puVar48 = (undefined4 *)((int)puVar36 + -4);
    *(undefined2 *)((int)puVar36 + -4) = uVar59;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar20 = *pbVar20 + (char)pbVar20;
  puVar44 = (undefined2 *)((int)puVar48 + -4);
  puVar48 = (undefined4 *)((int)puVar48 + -4);
  *puVar44 = in_ES;
  pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar26;
  pbVar31 = (byte *)((uint)pbVar31 | (uint)pbVar18);
  cVar8 = (char)pbVar20 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
  bVar61 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar61) goto code_r0x004039be;
  *pbVar20 = *pbVar20 + (char)pbVar20;
  uVar23 = (undefined3)((uint)pbVar20 >> 8);
  bVar6 = (char)pbVar20 + 0x6f;
  bVar6 = bVar6 & *(byte *)CONCAT31(uVar23,bVar6);
  pbVar19 = (byte *)CONCAT31(uVar23,bVar6);
  *pbVar17 = *pbVar17 + (char)pbVar26;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar6;
code_r0x00403979:
  do {
    bVar6 = (char)pbVar19 - (byte)*unaff_EDI;
    bVar61 = bVar6 < *pbVar26;
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar6 - *pbVar26);
    do {
      cVar8 = (char)pbVar20;
      *pbVar20 = *pbVar20 + cVar8 + bVar61;
      *pbVar20 = *pbVar20 + cVar8;
      *pbVar26 = *pbVar26 + (char)pbVar17;
      pbVar26[0x101c00aa] = pbVar26[0x101c00aa] + (char)pbVar31;
      *pbVar20 = *pbVar20 + cVar8;
      *(byte **)pbVar18 = pbVar31 + *(int *)pbVar18;
      bVar6 = (byte)((uint)pbVar26 >> 8);
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11(bVar6 + *pbVar20,(char)pbVar26));
      pbVar20 = pbVar20 + (uint)CARRY1(bVar6,*pbVar20) + *(int *)pbVar20;
      pbVar19 = pbVar18;
code_r0x00403991:
      cVar8 = (char)pbVar26;
      *pbVar17 = *pbVar17 + cVar8;
      cVar9 = (char)pbVar31 - pbVar19[2];
      pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar9);
      pbVar18 = pbVar19;
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040395a;
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      uVar24 = (uint3)((uint)pbVar20 >> 8);
      bVar6 = (byte)pbVar20 | *pbVar31;
      piVar16 = (int *)CONCAT31(uVar24,bVar6);
      bVar32 = (byte)((uint)pbVar26 >> 8);
      bVar10 = (byte)pbVar17;
      if (bVar6 == 0) {
        *(char *)piVar16 = (char)*piVar16;
        puVar48 = (undefined4 *)((int)puVar48 + -*(int *)(pbVar57 + 0x1b000007));
        pbVar18 = pbVar19 + (uint)bVar62 * -8 + 4;
        out(*(undefined4 *)pbVar19,(short)pbVar17);
        pbVar20 = (byte *)((uint)uVar24 << 8);
        *pbVar17 = *pbVar17 + cVar8;
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar10 - *pbVar31);
        *pbVar31 = *pbVar31;
        *pbVar17 = *pbVar17 + bVar32;
        *pbVar20 = *pbVar20;
        *pbVar31 = *pbVar31 + cVar9;
        *pbVar20 = *pbVar20;
        *(byte **)(pbVar31 + -0x3d) = pbVar18 + *(int *)(pbVar31 + -0x3d);
        break;
      }
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(bVar32 | *pbVar17,cVar8));
      pbVar18 = pbVar19 + *piVar16;
      pcVar56 = (char *)((int)piVar16 + *piVar16);
      bVar32 = (char)pcVar56 - *pcVar56;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar56 >> 8),bVar32);
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar32;
      pbVar20 = pbVar20 + (-(uint)CARRY1(bVar6,bVar32) - *(int *)pbVar20);
      bVar61 = CARRY1(*pbVar26,bVar10);
      *pbVar26 = *pbVar26 + bVar10;
    } while (!bVar61);
    *pbVar20 = *pbVar20 + (char)pbVar20;
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(byte)pbVar26 | *pbVar17);
code_r0x004039be:
    puVar36 = (undefined4 *)((int)puVar48 + -4);
    puVar45 = (undefined1 *)((int)puVar48 + -4);
    *(undefined2 *)((int)puVar48 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar57 + -0x3c));
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    uVar23 = (undefined3)((uint)pbVar20 >> 8);
    bVar6 = (byte)pbVar20 | *pbVar17;
    pcVar56 = (char *)CONCAT31(uVar23,bVar6);
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      cVar8 = *pcVar56;
      *pcVar56 = *pcVar56 + bVar6;
      cVar9 = *pcVar56;
      puVar28 = (undefined1 *)((int)puVar48 + -4);
      if (!SCARRY1(cVar8,bVar6)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar36 = (undefined4 *)puVar28;
      cVar8 = (char)pcVar56;
      *pcVar56 = *pcVar56 + cVar8;
      uVar23 = (undefined3)((uint)pcVar56 >> 8);
      bVar6 = cVar8 + 2;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        pcVar56 = (char *)CONCAT31(uVar23,bVar6 + *pbVar17);
        pbVar20 = pbVar18;
        if ((POPCOUNT(bVar6 + *pbVar17) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
             pbVar17 + (uint)(0xd2 < (byte)pcVar56) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
        puVar47 = (undefined2 *)((int)puVar36 + -4);
        puVar36 = (undefined4 *)((int)puVar36 + -4);
        *puVar47 = in_ES;
        pbVar19 = pbVar57;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar56 >> 8),(byte)pcVar56 + 0x2d);
code_r0x00403ad8:
        pbVar57 = pbVar21;
        bVar6 = *pbVar19;
        bVar32 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar32;
        puVar48 = (undefined4 *)((int)puVar36 + -4);
        *(undefined2 *)((int)puVar36 + -4) = in_ES;
        puVar28 = (undefined1 *)((int)puVar36 + -4);
        if (CARRY1(bVar6,bVar32)) {
          *pbVar19 = *pbVar19 + bVar32;
          bVar32 = bVar32 | pbVar19[0x400005d];
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar32);
          pbVar20 = pbVar18;
          if ((char)bVar32 < '\x01') {
            *pbVar19 = *pbVar19 + bVar32;
            pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar26 >> 8) | *pbVar17,(char)pbVar26)
                                      );
            pbVar20 = *(byte **)((int)puVar36 + -4);
            pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                       CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[-0x39],
                                                (char)pbVar31));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar19 = *pbVar19 + (char)pbVar19;
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar6 = *pbVar31;
          bVar32 = (byte)((uint)pbVar26 >> 8);
          *pbVar31 = *pbVar31 + bVar32;
          pbVar18 = pbVar20;
          if (!CARRY1(bVar6,bVar32)) {
            puVar36 = (undefined4 *)((int)puVar48 + -4);
            *(undefined2 *)((int)puVar48 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar19 = *pbVar19 + cVar8;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      piVar16 = (int *)CONCAT31(uVar23,cVar8 + '*');
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0xd7 < bVar6);
      bVar6 = *pbVar17;
      bVar12 = (byte)pbVar26;
      *pbVar17 = *pbVar17 + bVar12;
      out(*(undefined4 *)pbVar18,(short)pbVar17);
      bVar10 = ((cVar8 + '*') - (char)*piVar16) - CARRY1(bVar6,bVar12);
      pbVar20 = (byte *)CONCAT31(uVar23,bVar10);
      *pbVar17 = *pbVar17 + bVar12;
      uVar60 = (undefined2)((uint)pbVar31 >> 0x10);
      uVar30 = SUB41(pbVar31,0);
      cVar8 = (char)((uint)pbVar31 >> 8) - pbVar18[(uint)bVar62 * -8 + 0x1f];
      pbVar31 = (byte *)CONCAT22(uVar60,CONCAT11(cVar8,uVar30));
      *pbVar20 = *pbVar20 + bVar10;
      bVar32 = *pbVar17;
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      pbVar18 = pbVar18 + ((((uint)bVar62 * -8 + 4) - *(int *)pbVar20) - (uint)CARRY1(bVar6,bVar10))
      ;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar10);
      pbVar26 = (byte *)(CONCAT22((short)((uint)pbVar26 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar26 >> 8) | bVar32,bVar12)) + -1);
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      bVar6 = (bVar10 - *pbVar20) - CARRY1(bVar6,bVar10);
      *pbVar26 = *pbVar26 + (char)pbVar17;
      bVar61 = CARRY1(bVar6,*pbVar17);
      bVar6 = bVar6 + *pbVar17;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar20 = *pbVar20 + bVar6;
        cVar9 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pbVar19 = (byte *)CONCAT31(uVar23,cVar9);
        bVar6 = *pbVar17;
        *pbVar17 = *pbVar17 + (char)pbVar26;
        if (SCARRY1(bVar6,(char)pbVar26) == (char)*pbVar17 < '\0') {
code_r0x00403aaf:
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar6 = *pbVar31;
          bVar32 = (byte)((uint)pbVar26 >> 8);
          *pbVar31 = *pbVar31 + bVar32;
          pbVar21 = pbVar57;
          if (!CARRY1(bVar6,bVar32)) goto code_r0x00403ad8;
          *pbVar19 = *pbVar19 + cVar8;
          pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                     CONCAT11(bVar32 | *pbVar31,(char)pbVar26));
          if ((POPCOUNT(*pbVar17 - cVar8) & 1U) != 0) {
            *pbVar18 = *pbVar18 + cVar8;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar19 = *pbVar19 + cVar9;
          pcVar56 = (char *)CONCAT31(uVar23,cVar9 + '\x02');
          bVar32 = cVar8 + pbVar31[0x52];
          pbVar31 = (byte *)CONCAT22(uVar60,CONCAT11(bVar32,uVar30));
          *pcVar56 = *pcVar56 + cVar9 + '\x02';
          bVar6 = cVar9 + 4;
          pbVar19 = (byte *)CONCAT31(uVar23,bVar6);
          if ((POPCOUNT(bVar6) & 1U) == 0) {
            *pbVar19 = *pbVar19 + bVar6;
            cVar8 = (cVar9 + 's') - (0x90 < bVar6);
            pcVar56 = (char *)CONCAT31(uVar23,cVar8);
            bVar6 = (byte)((uint)pbVar26 >> 8);
            bVar61 = CARRY1(*pbVar31,bVar6);
            *pbVar31 = *pbVar31 + bVar6;
            pbVar20 = pbVar18;
            if (bVar61) {
              *pcVar56 = *pcVar56 + cVar8;
              pbVar31 = (byte *)CONCAT22(uVar60,CONCAT11(bVar32 | pbVar57[0x5c],uVar30));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar19);
          pbVar31 = (byte *)CONCAT22(uVar60,CONCAT11(bVar32 + pbVar31[0x52],uVar30));
        }
        *pbVar19 = *pbVar19 + (char)pbVar19;
        cVar8 = (char)pbVar19 + '\x02';
        pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
        bVar61 = (POPCOUNT(cVar8) & 1U) == 0;
        if (!bVar61) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar6 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar6;
        cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pcVar56 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
        bVar6 = *pbVar31;
        cVar9 = (char)((uint)pbVar26 >> 8);
        *pbVar31 = *pbVar31 + cVar9;
        if (*pbVar31 == 0 || SCARRY1(bVar6,cVar9) != (char)*pbVar31 < '\0') goto code_r0x00403b2c;
        *pcVar56 = *pcVar56 + cVar8;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar61) {
        pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                   CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x53],(char)pbVar31
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
    *pcVar56 = *pcVar56 + bVar6;
    *pbVar18 = *pbVar18 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar23,bVar6 + 6);
    pbVar19 = (byte *)uVar3;
    bVar6 = *pbVar17;
    bVar32 = (byte)pbVar26;
    *pbVar17 = *pbVar17 + bVar32;
    if (CARRY1(bVar6,bVar32)) {
      *pbVar19 = *pbVar19 + (char)uVar3;
      bVar10 = (byte)((uint)pbVar26 >> 8) | *pbVar19;
      uVar60 = CONCAT11(bVar10,bVar32);
      pbVar19 = pbVar19 + -*(int *)pbVar19;
      bVar6 = *pbVar31;
      *pbVar31 = *pbVar31 + bVar10;
      if (CARRY1(bVar6,bVar10)) {
        cVar9 = (char)pbVar19;
        *pbVar19 = *pbVar19 + cVar9;
        bVar6 = *pbVar17;
        pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                   CONCAT11((char)((uint)pbVar17 >> 8) - pbVar31[-0x3a],
                                            (char)pbVar17));
        *pbVar19 = *pbVar19 + cVar9;
        uVar35 = (undefined2)((uint)pbVar31 >> 0x10);
        bVar34 = (byte)((uint)pbVar31 >> 8) | pbVar17[0x32];
        pcVar56 = (char *)CONCAT22(uVar35,CONCAT11(bVar34,(char)pbVar31));
        cVar8 = *pcVar56;
        puVar45 = (undefined1 *)((int)puVar48 + -8);
        *(undefined2 *)((int)puVar48 + -8) = in_CS;
        cVar8 = cVar9 + cVar8 + '-';
        pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
        *pbVar19 = *pbVar19;
        *(undefined2 *)((int)puVar48 + -0xc) = in_ES;
        bVar12 = *pbVar17;
        uVar59 = *(undefined2 *)((int)puVar48 + -0xc);
        cVar9 = (char)pbVar31 - *pbVar18;
        bVar11 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar19 = *pbVar19 + cVar8;
        uVar60 = CONCAT11((bVar10 | bVar6) + bVar11 | *pbVar17,bVar32 - bVar12);
        pbVar31 = (byte *)CONCAT22(uVar35,CONCAT11(bVar34 + *(char *)(CONCAT31((int3)((uint)pcVar56
                                                                                     >> 8),cVar9) +
                                                                     0x4e),cVar9));
        *pbVar19 = *pbVar19 + cVar8;
      }
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),uVar60);
      bVar6 = (byte)pbVar19;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      pcVar56 = (char *)CONCAT31(uVar23,bVar6 + 0x28);
      *pcVar56 = (*pcVar56 - (bVar6 + 0x28)) - (0xd7 < bVar6);
      *pbVar17 = *pbVar17 + (char)uVar60;
      bVar32 = bVar6 + 0x1b;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x4f],(char)pbVar31))
      ;
      *(char *)CONCAT31(uVar23,bVar32) = *(char *)CONCAT31(uVar23,bVar32) + bVar32;
      pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x43);
      *pcVar14 = (*pcVar14 - (bVar6 + 0x43)) - (0xd7 < bVar32);
      *pbVar17 = *pbVar17 + (char)uVar60;
      pcVar56 = pcVar14 + -0x6b721c;
      pcVar14 = pcVar14 + -0x6b721a;
      *pcVar14 = *pcVar14 + (char)((uint)pbVar17 >> 8);
      cVar9 = *pcVar14;
      puVar36 = (undefined4 *)puVar45;
code_r0x00403a22:
      puVar28 = (undefined1 *)puVar36;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x00403a24;
      bVar6 = *pbVar17;
      *pbVar17 = *pbVar17 + (char)pbVar26;
      if (SCARRY1(bVar6,(char)pbVar26) == (char)*pbVar17 < '\0') {
        pbVar19 = pbVar57;
        pbVar21 = (byte *)(pcVar56 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar56 = *pcVar56 + (char)pcVar56;
      pcVar56 = (char *)CONCAT31((int3)((uint)pcVar56 >> 8),(char)pcVar56 + '\x02');
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x54],(char)pbVar31))
      ;
      pbVar20 = pbVar18;
code_r0x00403a7d:
      cVar8 = (char)pcVar56;
      *pcVar56 = *pcVar56 + cVar8;
      uVar23 = (undefined3)((uint)pcVar56 >> 8);
      cVar9 = cVar8 + '-';
      pbVar21 = (byte *)CONCAT31(uVar23,cVar9);
      pbVar19 = pbVar57;
      pbVar18 = pbVar20;
      if ((POPCOUNT(cVar9 - *pbVar17) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar21 = *pbVar21 + cVar9;
      bVar6 = cVar8 + 0x2f;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        bVar6 = *pbVar17;
        *pbVar17 = *pbVar17 + (byte)pbVar26;
        *pbVar57 = *pbVar57 - CARRY1(bVar6,(byte)pbVar26);
        pbVar19 = (byte *)CONCAT31(uVar23,cVar8 + -0x53);
        pbVar57 = (byte *)*puVar36;
        puVar48 = puVar36 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      bVar61 = 0x90 < bVar6;
      pcVar56 = (char *)CONCAT31(uVar23,cVar8 + -0x62);
code_r0x00403a8f:
      uVar23 = (undefined3)((uint)pcVar56 >> 8);
      bVar32 = (char)pcVar56 - bVar61;
      pbVar19 = (byte *)CONCAT31(uVar23,bVar32);
      bVar6 = *pbVar31;
      cVar8 = (char)((uint)pbVar26 >> 8);
      *pbVar31 = *pbVar31 + cVar8;
      puVar48 = puVar36;
      pbVar18 = pbVar20;
      if (*pbVar31 != 0 && SCARRY1(bVar6,cVar8) == (char)*pbVar31 < '\0') {
        *pbVar19 = *pbVar19 + bVar32;
        pbVar18 = (byte *)CONCAT31(uVar23,bVar32 + 0x2d);
        *(byte **)(pbVar20 + (int)unaff_EDI * 8) =
             pbVar17 + (uint)(0xd2 < bVar32) + *(int *)(pbVar20 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar36 + -4) = in_ES;
        bVar61 = CARRY1(*pbVar20,(byte)pbVar20);
        *pbVar20 = *pbVar20 + (byte)pbVar20;
        puVar46 = (undefined2 *)((int)puVar36 + -8);
        puVar36 = (undefined4 *)((int)puVar36 + -8);
        *puVar46 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar26 >> 8) | *pbVar19,(char)pbVar26));
      *pbVar18 = *pbVar18 + (char)pbVar19;
      puVar28 = (undefined1 *)puVar48;
code_r0x00403afc:
      puVar36 = (undefined4 *)puVar28;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) + pbVar31[0x55],(char)pbVar31))
      ;
      *pbVar19 = *pbVar19 + (char)pbVar19;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      bVar32 = (char)pbVar19 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar23,bVar32);
      *pbVar17 = *pbVar17 + (char)pbVar26;
      pbVar19 = (byte *)CONCAT31(uVar23,(bVar32 & bVar6) + *pbVar18);
      *pbVar26 = *pbVar26 - (char)((uint)pbVar17 >> 8);
      break;
    }
    uVar59 = *(undefined2 *)((int)puVar48 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar49 = (undefined2 *)((int)puVar36 + -4);
  puVar36 = (undefined4 *)((int)puVar36 + -4);
  *puVar49 = in_ES;
  pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar26;
  pbVar31 = (byte *)((uint)pbVar31 | (uint)pbVar18);
  cVar8 = (char)pbVar19 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
  bVar61 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
  bVar6 = (byte)pbVar20;
  uVar23 = (undefined3)((uint)pbVar20 >> 8);
  if (!bVar61) {
    *pbVar17 = *pbVar17 + (char)pbVar26;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar6 | *pbVar18);
code_r0x00403b73:
    pbVar20 = (byte *)((int)unaff_EDI + *(int *)(pbVar57 + -0x37));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar6 = (byte)pbVar19 | *pbVar17;
    pcVar56 = (char *)CONCAT31(uVar23,bVar6);
    uVar64 = CONCAT44(pbVar17,pcVar56);
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *pcVar56 = *pcVar56 + bVar6;
      *pbVar18 = *pbVar18 + 1;
      return (byte *)CONCAT31(uVar23,bVar6 + 6);
    }
    bVar6 = *pbVar18;
    *pbVar18 = *pbVar18 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar6,'\x01')) {
      uVar64 = (*pcVar2)();
      pbVar26 = extraout_ECX_00;
    }
    pbVar17 = (byte *)uVar64;
    *pbVar17 = *pbVar17 + (char)uVar64;
    cVar9 = (char)((ulonglong)uVar64 >> 0x20);
    puVar58 = (uint *)CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | pbVar31[0x2f],cVar9));
    *pbVar17 = *pbVar17 + (char)uVar64;
    cVar8 = (char)pbVar26;
    bVar10 = (byte)((uint)pbVar26 >> 8) | *pbVar17;
    pbVar17 = pbVar17 + *(int *)pbVar17;
    bVar6 = *pbVar31;
    *pbVar31 = *pbVar31 + bVar10;
    bVar32 = (byte)pbVar17;
    if (CARRY1(bVar6,bVar10)) {
      *pbVar17 = *pbVar17 + bVar32;
      bVar10 = bVar10 | (byte)*puVar58;
      *pbVar31 = *pbVar31 - cVar9;
      *pbVar17 = *pbVar17 + bVar32;
      uVar23 = (undefined3)((uint)pbVar17 >> 8);
      bVar32 = bVar32 | (byte)*puVar58;
      puVar22 = (uint *)CONCAT31(uVar23,bVar32);
      bVar61 = CARRY4((uint)pbVar57,*puVar22);
      bVar63 = SCARRY4((int)pbVar57,*puVar22);
      pbVar57 = pbVar57 + *puVar22;
      *(uint *)((int)puVar36 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar63 * 0x800 | (uint)bVar62 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar57 < 0) * 0x80 |
           (uint)(pbVar57 == (byte *)0x0) * 0x40 | (uint)(bVar7 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar57 & 0xff) & 1U) == 0) * 4 | (uint)bVar61 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar22 = (char)*puVar22 + bVar32;
      *(undefined2 *)((int)puVar36 + -8) = in_ES;
      cVar9 = (char)pbVar31 - *pbVar18;
      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                 CONCAT11((char)((uint)pbVar31 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar31 >> 8),cVar9) +
                                                   0x5f),cVar9));
      *(byte *)puVar22 = (char)*puVar22 + bVar32;
      bVar6 = bVar32 + 0x2a & (byte)*puVar58;
      pbVar20 = pbVar20 + *(int *)(pbVar57 + 0x5f);
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      pbVar17 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
      *(byte *)puVar58 = (byte)*puVar58 + 0x28;
      *pbVar17 = *pbVar17 + bVar6 + 0x2a;
      puVar52 = (undefined2 *)((int)puVar36 + -0xc);
      puVar36 = (undefined4 *)((int)puVar36 + -0xc);
      *puVar52 = in_ES;
    }
    else {
      *pbVar18 = *pbVar18 + bVar32;
    }
    pcVar56 = (char *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(bVar10,cVar8));
    *pbVar57 = *pbVar57 - bVar10;
    *(byte *)puVar58 = (byte)*puVar58 + cVar8;
    bVar6 = (byte)pbVar17 - 0xb;
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar6);
    if (10 < (byte)pbVar17) {
      *pbVar26 = *pbVar26 | bVar6;
      return pbVar26;
    }
    *(byte *)puVar58 = (byte)*puVar58 + cVar8;
    do {
      *(undefined2 *)((int)puVar36 + -4) = in_ES;
      bVar6 = pbVar31[-0x23];
      bVar32 = (byte)pbVar26;
      *pbVar26 = *pbVar26 + bVar32;
      bVar7 = pbVar57[-0x22];
      *pbVar26 = *pbVar26 + bVar32;
      uVar23 = (undefined3)((uint)pbVar26 >> 8);
      bVar32 = bVar32 | *pbVar18;
      pbVar17 = (byte *)CONCAT31(uVar23,bVar32);
      cVar9 = (char)pbVar31 - *pbVar18;
      pbVar31 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar31 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar31 >> 8) + bVar6 | bVar7
                                                          ,(char)pbVar31)) >> 8),cVar9);
      cVar8 = (char)pcVar56;
      pcVar56 = (char *)CONCAT22((short)((uint)pcVar56 >> 0x10),
                                 CONCAT11((char)((uint)pcVar56 >> 8) + *pbVar17,cVar8));
      *(byte *)puVar58 = (byte)*puVar58 + cVar8;
      bVar7 = bVar32 - *pbVar17;
      pbVar26 = (byte *)CONCAT31(uVar23,bVar7);
      pbVar18 = pbVar18 + (-(uint)(bVar32 < *pbVar17) - *(int *)pbVar26);
      in_ES = *(undefined2 *)((int)puVar36 + -4);
      puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),(char)puVar58 * '\x02');
      *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
      *pbVar20 = *pbVar20 + cVar9;
      bVar6 = *pbVar26;
      *pbVar26 = *pbVar26 + bVar7;
      *puVar58 = (uint)(pbVar26 + (uint)CARRY1(bVar6,bVar7) + *puVar58);
    } while ((POPCOUNT(*puVar58 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar26 = *pbVar26 + (char)pbVar26;
    pcVar56 = (char *)CONCAT31((int3)((uint)pcVar56 >> 8),(byte)pcVar56 | pbVar26[(int)pcVar56]);
    puVar54 = (undefined2 *)((int)puVar36 + -4);
    *(undefined2 *)((int)puVar36 + -4) = uVar59;
    bVar61 = false;
    pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
    do {
      pbVar20 = pbVar20 + (-(uint)bVar61 - *(int *)pbVar31);
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar26 >> 8),*pcVar56);
      *pcVar14 = *pcVar14 + *pcVar56;
      pbVar26 = (byte *)CONCAT31((int3)((uint)(pcVar14 +
                                              (pbVar18[0x2000001] < (byte)((uint)pcVar56 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar14 +
                                        (pbVar18[0x2000001] < (byte)((uint)pcVar56 >> 8)) + 0xda7d)
                                 | (byte)*puVar58) + 0x7d);
      pcVar56 = pcVar56 + -1;
      *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar56;
      while( true ) {
        uVar27 = (undefined3)((uint)puVar58 >> 8);
        cVar8 = (char)puVar58 + *(char *)((int)pbVar20 * 2 + 0xa0000e1);
        puVar58 = (uint *)CONCAT31(uVar27,cVar8);
        bVar61 = CARRY1((byte)pbVar26,(byte)*puVar58);
        uVar23 = (undefined3)((uint)pbVar26 >> 8);
        bVar6 = (byte)pbVar26 + (byte)*puVar58;
        pbVar26 = (byte *)CONCAT31(uVar23,bVar6);
        if ((POPCOUNT(bVar6) & 1U) != 0) break;
        *pbVar26 = *pbVar26 + bVar6;
        cVar9 = (char)pcVar56;
        pcVar56 = (char *)CONCAT22((short)((uint)pcVar56 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar56 >> 8) | pbVar20[-0x65],cVar9));
        bVar7 = *pbVar26;
        *pbVar26 = *pbVar26 + bVar6;
        *(undefined2 *)((int)puVar54 + -4) = in_ES;
        if (CARRY1(bVar7,bVar6)) {
          *pbVar26 = *pbVar26 + bVar6;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar31 >> 8) | pbVar57[-0x1d],
                                              (char)pbVar31));
          *pbVar26 = *pbVar26 + bVar6;
          bVar61 = false;
          bVar6 = bVar6 | (byte)*puVar58;
          pcVar14 = (char *)CONCAT31(uVar23,bVar6);
          uVar59 = *(undefined2 *)((int)puVar54 + -4);
          puVar36 = (undefined4 *)puVar54;
          while( true ) {
            bVar7 = (byte)pcVar14;
            uVar23 = (undefined3)((uint)pcVar14 >> 8);
            if (bVar61 == (char)bVar6 < '\0') break;
            *pcVar14 = *pcVar14 + bVar7;
            bVar7 = bVar7 | (byte)*puVar58;
            puVar22 = (uint *)CONCAT31(uVar23,bVar7);
            *pbVar20 = *pbVar20 << 1 | (char)*pbVar20 < '\0';
            uVar15 = *puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar7;
            pbVar57 = pbVar57 + (-(uint)CARRY1((byte)uVar15,bVar7) - *puVar22);
            *puVar22 = *puVar22 << 1 | (uint)((int)*puVar22 < 0);
            while( true ) {
              uVar15 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58 + (byte)pcVar56;
              uVar60 = *(undefined2 *)puVar36;
              cVar8 = (char)puVar22 + 'o' + CARRY1((byte)uVar15,(byte)pcVar56);
              pcVar14 = (char *)CONCAT31((int3)((uint)puVar22 >> 8),cVar8);
              pcVar56 = (char *)0x20a0000;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *pcVar14 = *pcVar14 + cVar8;
              bVar6 = bRamfe140212;
              pcVar56 = (char *)0x0;
              *(undefined2 *)puVar36 = in_ES;
              uVar23 = (undefined3)((uint)(pcVar14 + -0x732b0000) >> 8);
              bVar7 = in(0);
              puVar22 = (uint *)CONCAT31(uVar23,bVar7);
              uVar15 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58;
              if (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar58 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                bVar7 = bVar7 | (byte)*puVar58;
                puVar22 = (uint *)CONCAT31(uVar23,bVar7);
                if ((POPCOUNT(bVar7) & 1U) == 0) {
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  pcVar56 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar6 | (byte)*puVar22) << 8);
                  puVar54 = (undefined2 *)((int)puVar36 + -4);
                  *(undefined2 *)((int)puVar36 + -4) = uVar60;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                puVar22 = (uint *)CONCAT31(uVar23,bVar7 | (byte)*puVar58);
              }
            }
            *(byte *)puVar58 = (byte)*puVar58;
            bVar61 = SCARRY1((char)puVar58,*pbVar20);
            bVar6 = (char)puVar58 + *pbVar20;
            puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar6);
            puVar36 = (undefined4 *)((int)puVar36 + 4);
          }
          if (bVar61 == (char)bVar6 < '\0') {
            *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar56;
            pbVar26 = (byte *)((uint)pcVar14 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar14 = *pcVar14 + bVar7;
          pbVar26 = (byte *)CONCAT31(uVar23,(bVar7 | (byte)*puVar58) + 0x7d);
          pcVar56 = pcVar56 + -1;
          *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar56;
          puVar54 = (undefined2 *)puVar36;
        }
        else {
          *(byte *)puVar58 = (byte)*puVar58 + cVar9;
          puVar58 = (uint *)CONCAT31(uVar27,cVar8 + *(char *)((int)pbVar20 * 2 + 0xa0000e0));
          puVar54 = (undefined2 *)((int)puVar54 + -4);
        }
      }
    } while( true );
  }
  *pbVar20 = *pbVar20 + bVar6;
  bVar6 = bVar6 + 0x6f & *(byte *)CONCAT31(uVar23,bVar6 + 0x6f);
  *pbVar17 = *pbVar17 + (char)pbVar26;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar6;
  pcVar56 = (char *)CONCAT31(uVar23,bVar6 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar6 = (char)pcVar56 - *pcVar56;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar56 >> 8),bVar6);
  *pbVar19 = *pbVar19 + bVar6;
  *(byte **)pbVar19 = pbVar17 + *(int *)pbVar19;
  *pbVar19 = *pbVar19 + bVar6;
  bVar61 = CARRY1(*pbVar19,bVar6);
  *pbVar19 = *pbVar19 + bVar6;
  puVar28 = (undefined1 *)puVar36;
  pbVar20 = pbVar18;
  while( true ) {
    puVar36 = (undefined4 *)puVar28;
    *(byte **)pbVar19 = pbVar19 + (uint)bVar61 + *(int *)pbVar19;
    bVar7 = ((uint)pbVar19 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar62 * -2 + 1;
    pbVar19[(int)pbVar17] = pbVar19[(int)pbVar17] + (char)pbVar31;
    *pbVar19 = *pbVar19 + (char)pbVar19;
    *(byte **)pbVar20 = pbVar31 + *(int *)pbVar20;
    bVar6 = (byte)((uint)pbVar26 >> 8);
    cVar8 = (char)pbVar26;
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(bVar6 + *pbVar19,cVar8));
    pbVar19 = pbVar19 + (uint)CARRY1(bVar6,*pbVar19) + *(int *)pbVar19;
    *pbVar17 = *pbVar17 + cVar8;
    cVar8 = (char)pbVar31 - pbVar20[2];
    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar8);
    pbVar18 = pbVar20;
    if ((POPCOUNT(cVar8) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    bVar6 = (byte)pbVar19 | *pbVar31;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar6);
    if (bVar6 != 0) {
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *pbVar21 = *pbVar21 + bVar6;
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar26 >> 8) | *pbVar17,(char)pbVar26));
      pbVar20 = pbVar20 + *(int *)pbVar21;
      pbVar21 = pbVar21 + *(int *)pbVar21;
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar32 = (char)pbVar21 - *pbVar21;
      pbVar18 = (byte *)CONCAT31(uVar23,bVar32);
      bVar6 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar32;
      pbVar21 = (byte *)CONCAT31(uVar23,bVar32 - CARRY1(bVar6,bVar32));
    }
    bVar6 = *pbVar21;
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    iVar25 = *(int *)(pbVar57 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar6,(byte)pbVar21);
    pbVar18 = pbVar20 + (uint)bVar62 * -8 + 4;
    out(*(undefined4 *)pbVar20,(short)pbVar17);
    pbVar19 = (byte *)(((uint)pbVar21 >> 8) * 0x100);
    *pbVar17 = *pbVar17 + (byte)pbVar26;
    bVar6 = (char)pbVar17 - *pbVar31;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar6);
    *pbVar31 = *pbVar31;
    *pbVar17 = *pbVar17 + (char)((uint)pbVar26 >> 8);
    *pbVar19 = *pbVar19;
    pcVar56 = (char *)(((uint)pbVar21 >> 8) * 0x200);
    *pcVar56 = *pcVar56 + (char)pbVar31;
    bVar61 = CARRY1(*pbVar26,bVar6);
    *pbVar26 = *pbVar26 + bVar6;
    puVar28 = (undefined1 *)((int)puVar36 + (iVar4 - iVar25));
    pbVar20 = pbVar18;
    if (bVar61) {
      *pbVar19 = *pbVar19;
      pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(byte)pbVar26 | *pbVar17);
      puVar51 = (undefined2 *)((int)puVar36 + (iVar4 - iVar25) + -4);
      puVar36 = (undefined4 *)((int)puVar36 + (iVar4 - iVar25) + -4);
      *puVar51 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar50 = (undefined2 *)((int)puVar36 + -4);
  puVar36 = (undefined4 *)((int)puVar36 + -4);
  *puVar50 = uVar59;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar57 = pbVar57 + -*puVar22;
  puVar53 = (undefined1 *)((int)puVar54 + 4);
  do {
    bVar6 = (byte)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar6;
    pbVar20 = pbVar20 + -*(int *)(pbVar57 + -0x1a);
    *(byte *)puVar22 = (byte)*puVar22 + bVar6;
    bVar6 = bVar6 | (byte)*puVar58;
    puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar6);
    *(byte *)puVar22 = (byte)*puVar22 | bVar6;
    bVar6 = (byte)*puVar22;
    pbVar57 = (byte *)0x2700001;
    while (puVar54 = (undefined2 *)puVar53, (POPCOUNT(bVar6) & 1U) == 0) {
      do {
        *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
        bVar6 = (byte)puVar22 | (byte)*puVar58;
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar6);
        puVar28 = (undefined1 *)puVar54;
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        uVar24 = CONCAT21((short)((uint)pcVar56 >> 0x10),(byte)((uint)pcVar56 >> 8) | bRamfe140212);
        puVar5 = puVar28;
        while( true ) {
          puVar55 = puVar5;
          pcVar56 = (char *)((uint)uVar24 << 8);
          puVar53 = puVar55 + -4;
          puVar54 = (undefined2 *)(puVar55 + -4);
          puVar28 = puVar55 + -4;
          *(undefined2 *)(puVar55 + -4) = in_ES;
          bVar10 = (byte)puVar22;
          *(byte *)puVar22 = (byte)*puVar22 & bVar10;
          bVar32 = *pbVar31;
          bVar12 = (byte)uVar24;
          bVar7 = *pbVar31;
          *pbVar31 = *pbVar31 + bVar12;
          bVar6 = *pbVar31;
          if (!CARRY1(bVar32,bVar12)) break;
          *(byte *)puVar22 = (byte)*puVar22 + bVar10;
          pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar31 >> 8) | bRam026fffe2,
                                              (char)pbVar31));
          *(byte *)puVar22 = (byte)*puVar22 + bVar10;
          bVar10 = bVar10 | (byte)*puVar58;
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar10);
          bVar61 = (POPCOUNT(bVar10) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar31 >> 8);
            uVar59 = (undefined2)((uint)pbVar31 >> 0x10);
            if (!bVar61) {
              *(byte *)puVar58 = (byte)*puVar58;
              pbVar31 = (byte *)CONCAT22(uVar59,CONCAT11(cVar8 + pbVar31[-0x1f],(char)pbVar31));
              goto code_r0x00403d52;
            }
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            uVar60 = (undefined2)((uint)pcVar56 >> 0x10);
            bVar7 = (byte)((uint)pcVar56 >> 8) | (byte)*puVar22;
            uVar24 = CONCAT21(uVar60,bVar7);
            *puVar22 = *puVar22 & (uint)puVar22;
            *pbVar31 = *pbVar31 + bVar7;
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            bVar6 = (char)puVar22 - bVar7;
            pcVar56 = (char *)CONCAT31(uVar23,bVar6);
            *pcVar56 = *pcVar56 + bVar6;
            bVar6 = bVar6 | (byte)*puVar58;
            puVar22 = (uint *)CONCAT31(uVar23,bVar6);
            puVar5 = puVar55 + -4;
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *(byte *)puVar22 = (byte)*puVar22 + bVar6;
            pcVar56 = (char *)((uint)CONCAT21(uVar60,bVar7 | (byte)*puVar22) << 8);
            *puVar22 = *puVar22 - (int)puVar22;
            *(byte *)puVar58 = (byte)*puVar58;
            pbVar31 = (byte *)CONCAT22(uVar59,CONCAT11(cVar8 + pbVar31[-0x1d],(char)pbVar31));
            do {
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              uVar59 = (undefined2)((uint)puVar58 >> 0x10);
              cVar8 = (char)puVar58;
              bVar6 = (byte)((uint)puVar58 >> 8) | pbVar31[-0x17];
              puVar58 = (uint *)CONCAT22(uVar59,CONCAT11(bVar6,cVar8));
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar31 >> 8) | bRam026fffeb,
                                                  (char)pbVar31));
              do {
                *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
                uVar23 = (undefined3)((uint)puVar22 >> 8);
                bVar32 = (byte)puVar22 | (byte)*puVar58;
                pcVar14 = (char *)CONCAT31(uVar23,bVar32);
                bVar7 = pbVar31[-0x16];
                *pcVar14 = *pcVar14 + bVar32;
                pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                           CONCAT11((char)((uint)pbVar31 >> 8) + bVar7 |
                                                    bRam026fffec,(char)pbVar31));
                *pcVar14 = *pcVar14 + bVar32;
                pbVar26 = (byte *)CONCAT31(uVar23,bVar32 | (byte)*puVar58);
                while( true ) {
                  *pbVar26 = *pbVar26 + (byte)pbVar26;
                  uVar23 = (undefined3)((uint)pbVar26 >> 8);
                  bVar7 = (byte)pbVar26 | (byte)*puVar58;
                  puVar22 = (uint *)CONCAT31(uVar23,bVar7);
                  if ((POPCOUNT(bVar7) & 1U) != 0) break;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  bVar32 = pbVar20[-0x14];
                  *(byte *)puVar22 = (byte)*puVar22 + bVar7;
                  bVar7 = bVar7 | (byte)*puVar58;
                  pcVar14 = (char *)CONCAT31(uVar23,bVar7);
                  bVar10 = pbVar31[-0x15];
                  *pcVar14 = *pcVar14 + bVar7;
                  pcVar56 = (char *)((uint)CONCAT21((short)((uint)pcVar56 >> 0x10),
                                                    (byte)((uint)pcVar56 >> 8) | bVar32 |
                                                    pbVar20[-0x13]) << 8);
                  *pcVar14 = *pcVar14 + bVar7;
                  pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                             CONCAT11((char)((uint)pbVar31 >> 8) + bVar10 |
                                                      bRam026fffef,(char)pbVar31));
                  *pcVar14 = *pcVar14 + bVar7;
                  pbVar26 = (byte *)CONCAT31(uVar23,bVar7 | (byte)*puVar58);
                  do {
                    do {
                      bVar32 = (byte)pbVar26;
                      *pbVar26 = *pbVar26 + bVar32;
                      cVar29 = (char)pbVar31;
                      pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar31 >> 8) | *pbVar26,
                                                          cVar29));
                      *pbVar26 = bVar32;
                      *pbVar26 = *pbVar26 + bVar32;
                      cVar9 = (char)((uint)pcVar56 >> 8) + *pbVar26;
                      pcVar56 = (char *)((uint)CONCAT21((short)((uint)pcVar56 >> 0x10),cVar9) << 8);
                      uVar23 = (undefined3)((uint)pbVar26 >> 8);
                      bVar32 = bVar32 & *pbVar26;
                      pbVar26 = (byte *)CONCAT31(uVar23,bVar32);
                      bVar7 = *pbVar31;
                      *pbVar31 = *pbVar31 + cVar9;
                    } while (SCARRY1(bVar7,cVar9) == (char)*pbVar31 < '\0');
                    *pbVar26 = *pbVar26 + bVar32;
                    bVar32 = bVar32 | (byte)*puVar58;
                    pbVar26 = (byte *)CONCAT31(uVar23,bVar32);
                    if ((POPCOUNT(bVar32) & 1U) == 0) {
                      *pbVar26 = *pbVar26 + bVar32;
                      *pbVar26 = *pbVar26 + bVar32;
                      cVar8 = cVar8 - bVar6;
                      pbVar17 = (byte *)CONCAT31((int3)((uint)puVar58 >> 8),cVar8);
                      *pbVar26 = *pbVar26 + bVar32;
                      bRam0312382b = bRam0312382b | *pbVar17;
                      *(undefined2 *)(puVar55 + -8) = in_ES;
                      while( true ) {
                        bVar7 = (byte)pbVar26;
                        *pbVar26 = *pbVar26 + bVar7;
                        bRam0312382b = bRam0312382b | (pbVar20 + 0x21b0000)[(int)pbVar26];
                        uVar23 = (undefined3)((uint)pbVar26 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar17 = *pbVar17 + bRam0312382b;
                        pbVar26 = (byte *)CONCAT31(uVar23,bVar7 | *pbVar18);
                      }
                      *pbVar26 = *pbVar26 + bVar7;
                      bVar7 = bVar7 | *pbVar18;
                      pcVar56 = (char *)CONCAT31(uVar23,bVar7);
                      out(*(undefined4 *)pbVar18,(short)pbVar17);
                      *pcVar56 = *pcVar56 + bVar7;
                      uVar60 = CONCAT11(bVar6 | bRam6f0a002b,cVar8);
                      pcVar14 = (char *)CONCAT22(uVar59,uVar60);
                      *pcVar56 = *pcVar56 + bVar7;
                      *pcVar14 = *pcVar14 + bRam0312382b;
                      out(*(undefined4 *)(pbVar18 + (uint)bVar62 * -8 + 4),uVar60);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar29 + *pcVar56);
                  } while (SCARRY1(cVar29,*pcVar56) != (char)(cVar29 + *pcVar56) < '\0');
                }
                uVar15 = *puVar58;
                *(byte *)puVar58 = (byte)*puVar58;
              } while (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar58 < '\0');
              *(byte *)puVar58 = (byte)*puVar58;
              *pcVar56 = *pcVar56 - (char)pbVar31;
              *(byte *)puVar22 = (byte)*puVar22 + bVar7;
              bVar7 = bVar7 | (byte)*puVar58;
              puVar22 = (uint *)CONCAT31(uVar23,bVar7);
              bVar61 = (POPCOUNT(bVar7) & 1U) == 0;
            } while (bVar61);
          }
        }
      } while (SCARRY1(bVar7,bVar12));
    }
    *pbVar31 = *pbVar31 + (char)((uint)pcVar56 >> 8);
    *pbVar20 = *pbVar20 - (char)pbVar31;
  } while( true );
}


