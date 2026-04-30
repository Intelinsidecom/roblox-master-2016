/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004034ec
 * Raw Name    : CreateReportText
 * Demangled   : CreateReportText
 * Prototype   : byte * CreateReportText(char * reportStyle, uint * param_2)
 * Local Vars  : uStack_18, pcStack_10, uVar1, pcVar2, uVar3, iVar4, puVar5, bVar6, cVar7, bVar8, cVar9, bVar10, bVar11, bVar12, in_EAX, pcVar13, pcVar14, uVar15, param_2, piVar16, pbVar17, pbVar18, pbVar19, pbVar20, reportStyle, pcVar21, pbVar22, puVar23, uVar24, uVar25, iVar26, extraout_ECX, pbVar27, extraout_ECX_00, uVar28, puVar29, cVar30, uVar31, unaff_EBX, pbVar32, bVar33, cVar34, bVar35, uVar36, puVar37, puVar38, piVar39, piVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, unaff_EBP, pbVar57, unaff_ESI, unaff_EDI, puVar58, in_ES, in_CS, in_SS, uVar59, in_DS, uVar60, bVar61, in_AF, in_TF, in_IF, bVar62, bVar63, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar64, unaff_retaddr, uVar65
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

byte * __fastcall CreateReportText(char *reportStyle,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined6 uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined3 uVar24;
  byte *in_EAX;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint3 uVar25;
  char *pcVar21;
  byte *pbVar22;
  uint *puVar23;
  int iVar26;
  byte *extraout_ECX;
  undefined3 uVar28;
  byte *pbVar27;
  byte *extraout_ECX_00;
  undefined1 *puVar29;
  char cVar30;
  undefined1 uVar31;
  byte bVar33;
  byte bVar35;
  int unaff_EBX;
  char cVar34;
  byte *pbVar32;
  undefined2 uVar36;
  undefined4 *puVar37;
  undefined2 *puVar38;
  int *piVar39;
  int *piVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined2 *puVar43;
  undefined4 *puVar44;
  undefined2 *puVar45;
  undefined1 *puVar46;
  undefined2 *puVar47;
  undefined2 *puVar48;
  undefined4 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  undefined1 *puVar54;
  undefined2 *puVar55;
  undefined1 *puVar56;
  char *unaff_EBP;
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
  ushort uVar65;
  char *unaff_retaddr;
  undefined4 uStack_18;
  char *pcStack_10;
  
  bVar62 = false;
                    /* .NET CLR Managed Code */
  pbVar27 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x38),
                                      (char)unaff_EBX));
code_r0x004034ef:
  *in_EAX = *in_EAX + (char)in_EAX;
  piVar16 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'o');
  pcVar21 = unaff_EBP;
code_r0x004034f3:
  while( true ) {
    while( true ) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)piVar16;
      unaff_EBP = pcVar21 + 1;
      pcVar13 = (char *)((int)((uint)piVar16 | 8) + *(int *)((uint)piVar16 | 8));
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pcVar14 = pcVar13 + 0x53000000;
      bVar8 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar8;
      *pbVar27 = *pbVar27 + (char)param_2;
      *pcVar14 = *pcVar14 + bVar8;
      *unaff_EBP = *unaff_EBP - (char)pbVar27;
      uVar15 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
      if (!CARRY1((byte)uVar15,bVar8)) {
        pcVar13[0x5300006f] = pcVar13[0x5300006f] + (char)((uint)param_2 >> 8);
        pcVar13 = pcVar13 + 0x53000001;
        bVar6 = (byte)pcVar13;
        bRam7e060000 = bVar8;
        *pcVar13 = *pcVar13 + bVar6;
        in_EAX = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar6 + 0x2d);
        unaff_ESI[(int)unaff_EDI * 2] =
             (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
        puVar58 = unaff_ESI;
        goto code_r0x00403529;
      }
      uVar24 = (undefined3)((uint)pcVar14 >> 8);
      bVar8 = bVar8 + 0xa2;
      piVar16 = (int *)CONCAT31(uVar24,bVar8);
      reportStyle[0x2a0a0000] = reportStyle[0x2a0a0000] - (char)reportStyle;
      reportStyle = (char *)CONCAT22((short)((uint)reportStyle >> 0x10),
                                     CONCAT11((char)((uint)reportStyle >> 8) + (char)*piVar16,
                                              (char)reportStyle));
      *(byte *)piVar16 = (char)*piVar16 + bVar8;
      uVar65 = (ushort)((uint)unaff_retaddr >> 0x10);
      unaff_retaddr = (char *)CONCAT22(uVar65,in_ES);
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                                 (char)param_2 - *(byte *)((int)param_2 + 0x467e02));
      pcVar21[0x6fe1412] = pcVar21[0x6fe1412] + bVar8;
      uVar15 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
      if (CARRY1((byte)uVar15,bVar8)) break;
      pbVar17 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar17 = *pbVar17 + bVar8;
      pcVar21 = unaff_EBP;
    }
    *(byte *)piVar16 = (char)*piVar16 + bVar8;
    bVar8 = bVar8 | *(byte *)((int)piVar16 + 0x4000046);
    piVar16 = (int *)CONCAT31(uVar24,bVar8);
    if ('\0' < (char)bVar8) break;
    *(byte *)piVar16 = (char)*piVar16 + bVar8;
    pcVar21 = unaff_retaddr;
    unaff_retaddr = (char *)((uint)uVar65 << 0x10);
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  in_EAX = (byte *)CONCAT31(uVar24,bVar8 + 0x6f);
  *in_EAX = *in_EAX + bVar8 + 0x6f;
  unaff_EBP = unaff_EBP + -*param_2;
  in_SS = in_ES;
  do {
    bVar8 = *(byte *)((int)unaff_EDI + 0x17);
    *in_EAX = *in_EAX + (byte)in_EAX;
    reportStyle = (char *)CONCAT22((short)((uint)reportStyle >> 0x10),
                                   CONCAT11((char)((uint)reportStyle >> 8) + bVar8 | (byte)*param_2,
                                            (char)reportStyle));
    uVar24 = (undefined3)((uint)in_EAX >> 8);
    bVar8 = (byte)in_EAX | (byte)*param_2;
    bVar6 = bVar8 - *(byte *)CONCAT31(uVar24,bVar8);
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (uint)(bVar8 < *(byte *)CONCAT31(uVar24,bVar8)) +
                        *(int *)CONCAT31(uVar24,bVar6));
    in_EAX = (byte *)CONCAT31(uVar24,bVar6);
    *(byte **)in_EAX = in_EAX + *(int *)in_EAX;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)param_2;
    bVar8 = *in_EAX;
    *in_EAX = *in_EAX + bVar6;
    *param_2 = (uint)(in_EAX + (uint)CARRY1(bVar8,bVar6) + *param_2);
    if ((POPCOUNT(*param_2 & 0xff) & 1U) == 0) goto code_r0x004034ef;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
    puVar58 = unaff_ESI;
code_r0x00403529:
    unaff_ESI = puVar58 + 1;
    out(*puVar58,(short)param_2);
    bVar8 = *in_EAX;
    bVar6 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar6;
  } while (!CARRY1(bVar8,bVar6));
  *in_EAX = *in_EAX + bVar6;
  uVar24 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = bVar6 | in_EAX[0x4000040];
  pcVar21 = (char *)CONCAT31(uVar24,bVar6);
  if ((char)bVar6 < '\x01') goto code_r0x00403579;
  *pcVar21 = *pcVar21 + bVar6;
  cVar7 = bVar6 + 10;
  pcVar21 = (char *)CONCAT31(uVar24,cVar7);
  puVar58 = unaff_ESI;
  if (cVar7 == '\0' || SCARRY1(bVar6,'\n') != cVar7 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar8 = (byte)pcVar21;
  *pcVar21 = *pcVar21 + bVar8;
  piVar16 = (int *)CONCAT31((int3)((uint)pcVar21 >> 8),bVar8 + 0x2d);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar8) + unaff_ESI[(int)unaff_EDI * 2]);
  pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_ES);
code_r0x00403549:
  uVar15 = *unaff_ESI;
  bVar8 = (byte)piVar16;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
  pcVar21 = unaff_EBP;
  if (!CARRY1((byte)uVar15,bVar8)) goto code_r0x004034f3;
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  uVar24 = (undefined3)((uint)piVar16 >> 8);
  bVar8 = bVar8 | *(byte *)((int)piVar16 + 0x4000041);
  if ((char)bVar8 < '\x01') {
    *(byte *)param_2 = (byte)*param_2 + (char)reportStyle;
    *(byte *)param_2 = (byte)*param_2;
    pcVar21 = (char *)CONCAT31(uVar24,bVar8 + 0x7e);
    param_2 = (uint *)((int)param_2 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
  piVar16 = (int *)CONCAT31(uVar24,bVar8 + 0xb);
  puVar58 = unaff_ESI;
code_r0x0040355b:
  unaff_EBP = unaff_EBP + -*(int *)((int)puVar58 + 2);
  *unaff_EBP = *unaff_EBP - (char)pbVar27;
  uVar15 = *puVar58;
  bVar8 = (byte)piVar16;
  *(byte *)puVar58 = (byte)*puVar58 + bVar8;
  if (CARRY1((byte)uVar15,bVar8)) goto code_r0x00403548;
code_r0x00403565:
  piVar16 = piVar16 + 0x1ec09c00;
  pbVar17 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
  *pbVar17 = *pbVar17 + (char)piVar16;
  *(byte *)puVar58 = (byte)*puVar58 + (char)piVar16 + (char)*piVar16;
  unaff_ESI = puVar58 + 1;
  out(*puVar58,(short)param_2);
  pcVar21 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),uRam8c0a0000);
code_r0x00403579:
  *reportStyle = *reportStyle + (char)pcVar21;
  *(byte *)param_2 = (byte)*param_2 - (char)((uint)pcVar21 >> 8);
  puVar58 = unaff_ESI;
code_r0x00403580:
  *(byte *)param_2 = (byte)*param_2 + (char)reportStyle;
  unaff_ESI = puVar58 + 1;
  out(*puVar58,(short)param_2);
  bVar8 = (byte)pcVar21;
  param_2 = (uint *)((int)param_2 + 1);
  bRam7e060000 = bVar8;
  *pcVar21 = *pcVar21 + bVar8;
  uVar24 = (undefined3)((uint)pcVar21 >> 8);
  bVar6 = bVar8 + 0x2d;
  pcVar21 = (char *)CONCAT31(uVar24,bVar6);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar8) + unaff_ESI[(int)unaff_EDI * 2]);
  pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_ES);
  uVar15 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
  if (!CARRY1((byte)uVar15,bVar6)) {
    pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                               CONCAT11((byte)((uint)pbVar27 >> 8) | *(byte *)((int)puVar58 + 0x45),
                                        (char)pbVar27));
    goto code_r0x0040353f;
  }
  *pcVar21 = *pcVar21 + bVar6;
  bVar6 = bVar6 | pcVar21[0x4000042];
  pcVar21 = (char *)CONCAT31(uVar24,bVar6);
  if ('\0' < (char)bVar6) {
code_r0x004035a1:
    bVar6 = (byte)pcVar21;
    *pcVar21 = *pcVar21 + bVar6;
    uVar24 = (undefined3)((uint)pcVar21 >> 8);
    bVar8 = bVar6 + 10;
    if (bVar8 == 0 || SCARRY1(bVar6,'\n') != (char)bVar8 < '\0') {
      pcVar21 = (char *)CONCAT31(uVar24,bVar6 + 8 + (0xf5 < bVar6));
code_r0x004035e5:
      bVar6 = (byte)pcVar21;
      *pcVar21 = *pcVar21 + bVar6;
      uVar24 = (undefined3)((uint)pcVar21 >> 8);
      bVar8 = bVar6 + 0x2d;
      pcVar21 = (char *)CONCAT31(uVar24,bVar8);
      unaff_ESI[(int)unaff_EDI * 2] =
           (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
      uVar15 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
      if (CARRY1((byte)uVar15,bVar8)) {
        *pcVar21 = *pcVar21 + bVar8;
        bVar8 = bVar8 | pcVar21[0x4000044];
        pbVar17 = (byte *)CONCAT31(uVar24,bVar8);
        if ('\0' < (char)bVar8) {
          *pbVar17 = *pbVar17 + bVar8;
          pbVar17 = (byte *)(CONCAT31(uVar24,bVar8 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar8));
          pbRam2a060000 = pbVar17;
          *pbVar27 = *pbVar27 + (char)pbVar27;
          *(byte *)param_2 = (byte)*param_2 ^ (byte)pbVar17;
          *pbVar17 = *pbVar17 + (char)((uint)reportStyle >> 8);
          *pbVar17 = *pbVar17 + (byte)pbVar17;
          puVar58 = unaff_EDI;
          in_SS = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      reportStyle = (char *)CONCAT31((int3)((uint)reportStyle >> 8),
                                     (byte)reportStyle |
                                     *(byte *)((int)(param_2 + 0xa004000) + (int)unaff_EDI));
      puVar58 = unaff_ESI;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
    bVar6 = bVar6 + 0x37;
    piVar16 = (int *)CONCAT31(uVar24,bVar6);
    unaff_ESI[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar8) + unaff_ESI[(int)unaff_EDI * 2]);
    pcStack_10 = (char *)CONCAT22(pcStack_10._2_2_,in_ES);
    uVar15 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    puVar58 = unaff_ESI;
    if (!CARRY1((byte)uVar15,bVar6)) goto code_r0x0040355b;
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    bVar6 = bVar6 | *(byte *)((int)piVar16 + 0x4000043);
    pbVar17 = (byte *)CONCAT31(uVar24,bVar6);
    if ((char)bVar6 < '\x01') {
      *pbVar17 = *pbVar17 + bVar6;
      unaff_EBP = unaff_EBP + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar17 = *pbVar17 + bVar6;
      uStack_18 = (undefined4 *)((uint)uStack_18._2_2_ << 0x10);
      piVar16 = (int *)CONCAT31(uVar24,bVar6 - *pbVar17);
      unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar6 < *pbVar17) - *piVar16));
      pbVar17 = (byte *)CONCAT31(uVar24,(bVar6 - *pbVar17) + (char)*piVar16);
      pcStack_10 = (char *)0x17000000;
      puVar58 = unaff_EDI;
code_r0x00403615:
      bVar8 = *pbVar17;
      bVar6 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar6;
      *param_2 = (uint)(pbVar17 + (uint)CARRY1(bVar8,bVar6) + *param_2);
      unaff_EDI = puVar58;
      if ((POPCOUNT(*param_2 & 0xff) & 1U) == 0) {
        *pbVar17 = *pbVar17 + bVar6;
        pcVar21 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar6 + 0x28);
        unaff_EDI = puVar58 + 1;
        uVar15 = in((short)param_2);
        *puVar58 = uVar15;
        *pcVar21 = *pcVar21 + bVar6 + 0x28;
        reportStyle = (char *)CONCAT22((short)((uint)reportStyle >> 0x10),
                                       CONCAT11((byte)((uint)reportStyle >> 8) |
                                                pbVar27[(int)reportStyle],(char)reportStyle));
        pcVar21[0x28] = pcVar21[0x28] + (char)((uint)param_2 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar17 = *pbVar17 + bVar6;
    uVar15 = CONCAT31(uVar24,bVar6 + 0xb);
    piVar16 = (int *)(uVar15 - *unaff_ESI);
    if (uVar15 < *unaff_ESI) {
      cVar7 = (char)piVar16;
      *(char *)piVar16 = (char)*piVar16 + cVar7;
      uVar59 = (undefined2)((uint)pbVar27 >> 0x10);
      cVar9 = (char)pbVar27;
      bVar8 = (byte)((uint)pbVar27 >> 8) | *(byte *)((int)param_2 + 2);
      *unaff_EBP = *unaff_EBP - cVar9;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar7;
      uStack_18 = (undefined4 *)CONCAT22(uStack_18._2_2_,in_ES);
      pbVar27 = (byte *)CONCAT22(uVar59,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar59,CONCAT11(bVar8,
                                                  cVar9)) + 0x38),cVar9));
      *(char *)piVar16 = (char)*piVar16 + cVar7;
      pcVar21 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar7 + 'o');
      *(byte *)param_2 = (byte)*param_2 + (char)reportStyle;
      *pcVar21 = *pcVar21 - cVar9;
      *pcVar21 = *pcVar21 + cVar7 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - unaff_ESI[0x11]);
      goto code_r0x004035e5;
    }
    puVar58 = unaff_ESI + 1;
    out(*unaff_ESI,(short)param_2);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar6) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pcStack_10 & 0x4000) != 0;
  bVar62 = ((uint)pcStack_10 & 0x400) != 0;
  in_IF = ((uint)pcStack_10 & 0x200) != 0;
  in_TF = ((uint)pcStack_10 & 0x100) != 0;
  in_AF = ((uint)pcStack_10 & 0x10) != 0;
  in_ID = ((uint)pcStack_10 & 0x200000) != 0;
  in_AC = ((uint)pcStack_10 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar7 = (char)pcVar21;
  *pcVar21 = *pcVar21 + cVar7;
  reportStyle = (char *)CONCAT22((short)((uint)reportStyle >> 0x10),
                                 CONCAT11((byte)((uint)reportStyle >> 8) | (byte)*param_2,
                                          (char)reportStyle));
  pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                             CONCAT11((char)((uint)pbVar27 >> 8) + pbVar27[0x3e],(char)pbVar27));
  *pcVar21 = *pcVar21 + cVar7;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar21 >> 8),cVar7 + '(');
  cVar7 = (char)((uint)param_2 >> 8);
  *(byte *)((int)param_2 + 0x21) = *(byte *)((int)param_2 + 0x21) + cVar7;
  pbVar18 = pbVar17 + 2;
  *pbVar18 = *pbVar18 + cVar7;
  bVar8 = *pbVar18;
code_r0x00403643:
  cVar7 = (char)pbVar17;
  if ((POPCOUNT(bVar8) & 1U) == 0) {
    *pbVar17 = *pbVar17 + cVar7;
    uVar24 = (undefined3)((uint)pbVar17 >> 8);
    cVar9 = cVar7 + '(';
    pcVar21 = (char *)CONCAT31(uVar24,cVar9);
    in_AF = ((uint)pbVar17 & 0x1000) != 0;
    *pcVar21 = *pcVar21 + cVar9;
    puVar58 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*unaff_ESI);
    pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                               CONCAT11((byte)((uint)pbVar27 >> 8) |
                                        *(byte *)((int)unaff_ESI + 0x3f),(char)pbVar27));
    *pcVar21 = *pcVar21 + cVar9;
    pbVar17 = (byte *)CONCAT31(uVar24,cVar7 + 'M');
    param_2 = (uint *)((uint)puVar58 | *puVar58);
    *pbVar17 = *pbVar17 + (char)((uint)reportStyle >> 8);
code_r0x00403659:
    puVar58 = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
    bVar8 = (byte)pbVar17;
    *(byte *)unaff_EDI = bVar8;
    *pbVar17 = *pbVar17 + bVar8;
    uVar24 = (undefined3)((uint)pbVar17 >> 8);
    bVar8 = bVar8 | (byte)*param_2;
    pcVar21 = (char *)CONCAT31(uVar24,bVar8);
    unaff_EDI = puVar58;
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x0040369e;
    *pcVar21 = *pcVar21 + bVar8;
    bVar8 = bVar8 + 2;
    *unaff_EBP = *unaff_EBP - (char)pbVar27;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
    puVar23 = unaff_ESI + (uint)bVar62 * -2 + 1;
    out(*unaff_ESI,(short)param_2);
    unaff_EDI = (uint *)((int)puVar58 + (uint)bVar62 * -2 + 1);
    unaff_ESI = (uint *)((int)puVar23 + (uint)bVar62 * -2 + 1);
    *(byte *)puVar58 = (byte)*puVar23;
    *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
    cVar9 = (char)((uint)reportStyle >> 8);
    pbVar27[-0x21f60000] = pbVar27[-0x21f60000] - cVar9;
    cVar7 = (bVar8 | (byte)*unaff_ESI) - 6;
    piVar16 = (int *)CONCAT31(uVar24,cVar7);
    pcVar21 = (char *)((int)piVar16 * 2 + 0x2adc0a00);
    *pcVar21 = *pcVar21 - cVar9;
    *piVar16 = (int)(*piVar16 + (int)param_2);
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    bVar8 = cVar7 + (char)*piVar16;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    uVar15 = CONCAT31(uVar24,bVar8 + in_AF * '\x06') & 0xffffff0f;
    pbVar17 = (byte *)CONCAT22((short)(uVar15 >> 0x10),
                               CONCAT11((char)((uint)pbVar17 >> 8) + in_AF,(char)uVar15));
    pcVar21 = reportStyle;
  }
  else {
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)param_2 >> 8);
    pcVar21 = reportStyle;
  }
  *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)((uint)pbVar17 >> 8);
  *(byte *)param_2 = (byte)*param_2 + (char)pcVar21;
  bVar6 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  bVar8 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  reportStyle = pcVar21;
  unaff_EBP = pcStack_10;
  if (!CARRY1(bVar8,bVar6)) goto code_r0x004036a6;
  *pbVar17 = *pbVar17 + bVar6;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar6 | pbVar17[0x400003f]);
  reportStyle = (char *)CONCAT31((int3)((uint)pcVar21 >> 8),
                                 (char)pcVar21 - *(byte *)((int)param_2 + 0x5040302));
  *(char *)((int)pbVar17 * 2) = *(char *)((int)pbVar17 * 2) - (char)((uint)pcVar21 >> 8);
  while( true ) {
code_r0x004036a6:
    reportStyle = (char *)CONCAT31((int3)((uint)reportStyle >> 8),
                                   (char)reportStyle + (byte)*unaff_ESI);
    pbVar17 = (byte *)(CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + '%') + 0x1ebd9f3);
    uStack_18 = (undefined4 *)CONCAT22(uStack_18._2_2_,in_ES);
    bVar8 = (byte)pbVar17;
    bVar61 = CARRY1(*pbVar17,bVar8);
    *pbVar17 = *pbVar17 + bVar8;
    puVar37 = uStack_18 + -1;
    *(undefined2 *)(uStack_18 + -1) = in_ES;
    cVar7 = (char)param_2;
    if (bVar61) {
      *pbVar17 = *pbVar17 + bVar8;
      uVar59 = (undefined2)((uint)pbVar27 >> 0x10);
      bVar33 = (byte)((uint)pbVar27 >> 8) | unaff_EBP[0x47];
      pcVar21 = (char *)CONCAT22(uVar59,CONCAT11(bVar33,(char)pbVar27));
      *pbVar17 = *pbVar17 + bVar8;
      uVar24 = (undefined3)((uint)pbVar17 >> 8);
      bVar8 = bVar8 + 0x2a;
      *pcVar21 = *pcVar21 + cVar7;
      pbVar17 = (byte *)((int)CONCAT31(uVar24,bVar8) * 2);
      *pbVar17 = *pbVar17 ^ bVar8;
      bVar8 = bVar8 ^ *(byte *)CONCAT31(uVar24,bVar8);
      pbVar17 = (byte *)CONCAT31(uVar24,bVar8);
      bVar6 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar8;
      *pbVar17 = (*pbVar17 - bVar8) - CARRY1(bVar6,bVar8);
      *reportStyle = *reportStyle + cVar7;
      pbVar27 = (byte *)CONCAT22(uVar59,CONCAT11(bVar33 + pcVar21[0x38],(char)pbVar27));
      *pbVar17 = *pbVar17 + bVar8;
      cVar9 = bVar8 + 2;
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar64 = (*pcVar2)();
        pbVar17 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar24,cVar9) = *(char *)CONCAT31(uVar24,cVar9) + cVar9;
      bVar8 = bVar8 + 0x71;
      pbVar17 = (byte *)CONCAT31(uVar24,bVar8);
      in_SS = *(undefined2 *)(uStack_18 + -1);
      *pbVar17 = *pbVar17 + bVar8;
      iVar26 = (int)reportStyle - *param_2;
      reportStyle = (char *)CONCAT22((short)((uint)iVar26 >> 0x10),
                                     CONCAT11((char)((uint)iVar26 >> 8) + *pbVar17,(char)iVar26));
      unaff_EBP = (char *)*uStack_18;
      bVar61 = CARRY1(*pbVar17,bVar8);
      *pbVar17 = *pbVar17 + bVar8;
      *(undefined2 *)uStack_18 = in_ES;
      *(undefined2 *)(uStack_18 + -1) = in_ES;
    }
    bVar8 = (byte)pbVar17;
    uVar24 = (undefined3)((uint)pbVar17 >> 8);
    if (bVar61) break;
    *(byte *)param_2 = (byte)*param_2 + (byte)reportStyle;
    *(byte *)((int)param_2 + (int)unaff_EBP) = *(byte *)((int)param_2 + (int)unaff_EBP) + bVar8;
    pcVar21 = (char *)CONCAT31(uVar24,(byte)*param_2);
code_r0x0040369e:
    pbVar17 = (byte *)(pcVar21 + *(int *)(pcVar21 + 0x6c28));
  }
  *pbVar17 = *pbVar17 + bVar8;
  uVar25 = (uint3)((uint)reportStyle >> 8);
  pbVar18 = (byte *)CONCAT31(uVar25,(byte)reportStyle | *pbVar27);
  in_SS = *(undefined2 *)uStack_18;
  puVar37 = uStack_18 + 1;
  puVar58 = unaff_ESI + (uint)bVar62 * -2 + 1;
  out(*unaff_ESI,(short)param_2);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
  *pbVar17 = *pbVar17 + bVar8;
  bVar8 = bVar8 | (byte)*unaff_EDI;
  pbVar17 = (byte *)CONCAT31(uVar24,bVar8);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)reportStyle >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar8);
  *(undefined2 *)uStack_18 = pcStack_10._0_2_;
  cVar30 = (char)pbVar27;
  cVar9 = cVar30 - (byte)*param_2;
  pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),cVar9);
  if (cVar9 != '\0' && (char)(byte)*param_2 <= cVar30) {
    *pbVar17 = *pbVar17 + bVar8;
    iVar26 = CONCAT31(uVar24,bVar8 + 0x2a);
    unaff_ESI = (uint *)((int)puVar58 + 1);
    cVar9 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x7b);
    uVar64 = CONCAT44(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar9,cVar7)),iVar26);
    in_ES = *(undefined2 *)uStack_18;
    pcVar21 = (char *)(iVar26 + 0x6f);
    *pcVar21 = *pcVar21 + cVar9;
    pbVar18 = (byte *)((uint)uVar25 << 8);
    do {
      piVar16 = (int *)((ulonglong)uVar64 >> 0x20);
      pcVar21 = (char *)uVar64;
      *(char *)piVar16 = (char)*piVar16;
      if ((char)*piVar16 == '\0') {
        pbVar27 = (byte *)((uint)pbVar27 & 0xffffff00);
        pcStack_10._0_2_ = in_ES;
_ctor:
        param_2 = (uint *)((ulonglong)uVar64 >> 0x20);
        pbVar18 = (byte *)((uint)CONCAT21((short)((uint)pbVar18 >> 0x10),
                                          (char)((uint)pbVar18 >> 8) + *(char *)uVar64) << 8);
        pbVar27 = (byte *)((uint)pbVar27 & 0xffffff00);
        *(byte *)param_2 = (byte)*param_2;
        uVar24 = (undefined3)((ulonglong)uVar64 >> 8);
        bVar6 = (char)uVar64 - *(char *)uVar64;
        pbVar17 = (byte *)CONCAT31(uVar24,bVar6);
        bVar8 = *pbVar17;
        *pbVar17 = *pbVar17 + bVar6;
        puVar58 = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar8,bVar6) + *(int *)pbVar17);
        pbVar17 = (byte *)CONCAT31(uVar24,bVar6);
        uStack_18 = puVar37;
        break;
      }
      *pcVar21 = *pcVar21 + (char)uVar64;
      *piVar16 = (int)(unaff_EBP + *piVar16);
      unaff_ESI = (uint *)((int)unaff_ESI + 1);
      uVar64 = CONCAT44(CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar64 >> 0x28) +
                                          *(char *)((int)piVar16 + -0x33),
                                          (char)((ulonglong)uVar64 >> 0x20))),pcVar21);
      in_ES = *(undefined2 *)puVar37;
      puVar37 = (undefined4 *)((int)puVar37 + 4);
      pbVar17 = pbVar18;
code_r0x0040371e:
      puVar58 = (uint *)((ulonglong)uVar64 >> 0x20);
      pbVar32 = (byte *)uVar64;
      bVar6 = (byte)((ulonglong)uVar64 >> 0x28);
      pbVar32[0x6f] = pbVar32[0x6f] + bVar6;
      pbVar18 = (byte *)((uint)pbVar17 & 0xffffff00);
      *(char *)puVar58 = (char)*puVar58;
      bVar8 = (byte)uVar64;
      if ((char)*puVar58 != '\0') {
        *pbVar32 = *pbVar32 + bVar8;
        uVar15 = *puVar58;
        *puVar58 = (uint)(unaff_EBP + *puVar58);
        piVar39 = (int *)((int)puVar37 + -4);
        *(uint **)((int)puVar37 + -4) = unaff_ESI;
        if (CARRY4(uVar15,(uint)unaff_EBP)) {
          *pbVar32 = *pbVar32 + bVar8;
          *(undefined2 *)((int)puVar37 + -8) = in_ES;
          puVar23 = puVar58 + 0x1d028000;
          uVar15 = *puVar23;
          *(byte *)puVar23 = (byte)*puVar23 - bVar6;
          *(uint *)pbVar32 = (*(int *)pbVar32 - (int)pbVar32) - (uint)((byte)uVar15 < bVar6);
          *(byte *)puVar58 = (char)*puVar58 + bVar8;
          *unaff_EBP = *unaff_EBP;
          uVar64 = CONCAT44(puVar58,CONCAT31((int3)((ulonglong)uVar64 >> 8),bVar8 + 0x2a));
          puVar38 = (undefined2 *)((int)puVar37 + -0xc);
          puVar37 = (undefined4 *)((int)puVar37 + -0xc);
          *puVar38 = in_DS;
          pcStack_10._0_2_ = in_ES;
          goto _ctor;
        }
        bVar61 = false;
        pcVar21 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),*pbVar32);
        goto code_r0x004037a7;
      }
      bVar6 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar8;
      *(uint *)pbVar32 = (*(int *)pbVar32 - (int)pbVar32) - (uint)CARRY1(bVar6,bVar8);
      bVar8 = *pbVar18;
      bVar6 = (byte)((ulonglong)uVar64 >> 0x20);
      *pbVar18 = *pbVar18 + bVar6;
      if (CARRY1(bVar8,bVar6)) goto code_r0x0040375a;
    } while( true );
  }
  uVar64 = CONCAT44(param_2,pbVar17);
  unaff_ESI = puVar58 + (uint)bVar62 * -2 + 1;
  out(*puVar58,(short)param_2);
  bVar6 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  *pbVar18 = *pbVar18 + (char)pbVar27;
  bVar8 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  *(byte **)(pbVar27 + -0x49) =
       (byte *)((int)unaff_ESI + (uint)CARRY1(bVar8,bVar6) + *(int *)(pbVar27 + -0x49));
  puVar37 = uStack_18;
  in_ES = pcStack_10._0_2_;
code_r0x0040375a:
  pbVar17 = (byte *)uVar64;
  *pbVar17 = *pbVar17 + (char)uVar64;
  bVar61 = CARRY1((byte)((uint)pbVar18 >> 8),*pbVar17);
  *(undefined2 *)((int)puVar37 + -4) = in_SS;
  iVar26 = CONCAT31(0x1f0a00,bVar61 + 'o') + *(int *)(pbVar27 + (int)unaff_EBP) +
           (uint)(0x90 < bVar61) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar64 >> 0x20);
  pcVar14 = (char *)(CONCAT31((int3)((uint)iVar26 >> 8),(char)iVar26 + -0x66) | *unaff_EDI);
  bVar8 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar21 = (char *)CONCAT22(0xd0a,(ushort)bVar8 << 8);
  *pcVar14 = *pcVar14 + (char)pcVar14;
  bVar6 = (byte)((ulonglong)uVar64 >> 0x20);
  puVar29 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | pbVar27[(int)unaff_EBP],bVar6));
  *pcVar21 = *pcVar21 + (char)pcVar14;
  *unaff_EBP = *unaff_EBP - bVar8;
  *puVar29 = *puVar29;
  pbVar17 = (byte *)(((uint)pcVar14 | 8) + 0x4490f9d8);
  bVar8 = (byte)pbVar17;
  *pbVar17 = *pbVar17 + bVar8;
  uVar15 = *unaff_ESI;
  *(uint *)((int)unaff_ESI + (int)pbVar17) =
       *(uint *)((int)unaff_ESI + (int)pbVar17) ^ (uint)pcVar21;
  *pbVar17 = *pbVar17 | bVar8;
  piVar39 = (int *)0x2609fffc;
  bVar61 = false;
  uRam2609fffc = in_ES;
  *pbVar17 = *pbVar17 | bVar8;
  uVar64 = CONCAT44(CONCAT31((int3)((uint)puVar29 >> 8),bVar6 | (byte)uVar15),pbVar17);
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
    iVar26 = *piVar39 + *(int *)(pcVar21 + (int)pbVar17) +
             (uint)(CARRY4(uVar15,(uint)uVar64) || CARRY4(uVar1,(uint)bVar61));
    cVar7 = (char)iVar26 + '\t';
    pbVar18 = (byte *)CONCAT31((int3)((uint)iVar26 >> 8),cVar7);
    pcVar14 = (char *)((uint)bVar62 * -8 + 0x260a0004);
    out(uRam260a0000,uVar59);
    uVar59 = (undefined2)piVar39[1];
    *pbVar18 = *pbVar18 + cVar7;
    bVar6 = (byte)((uint)pcVar21 >> 8) | *pbVar17;
    *(undefined2 *)(piVar39 + 1) = in_DS;
    bVar8 = *pbVar18;
    pbVar18 = pbVar18 + (uint)CARRY1(bVar6,*pbVar18) + *(int *)pbVar18;
    *pbVar17 = *pbVar17 + 6;
    cVar9 = (char)pbVar27 - *pcVar14;
    pcVar21 = (char *)CONCAT22((short)((uint)pcVar21 >> 0x10),CONCAT11(bVar6 + bVar8 + *pbVar18,6));
    *pbVar18 = *pbVar18;
    *(undefined2 *)piVar39 = in_ES;
    uVar24 = (undefined3)((uint)pbVar18 >> 8);
    cVar7 = (char)pbVar18 - *pbVar18;
    piVar16 = (int *)CONCAT31(uVar24,cVar7);
    unaff_ESI = (uint *)(pcVar14 + *piVar16);
    bVar8 = cVar7 + (char)*piVar16;
    pcVar14 = (char *)CONCAT31(uVar24,bVar8);
    piVar40 = piVar39 + -1;
    piVar39[-1] = (int)pcVar21;
    *pcVar14 = *pcVar14 + bVar8;
    *pcVar14 = *pcVar14 + bVar8;
    *pcVar14 = *pcVar14 + bVar8;
    bVar61 = CARRY1(*pbVar17,bVar8);
    *pbVar17 = *pbVar17 + bVar8;
    if (bVar61) break;
    in_ES = (undefined2)piVar39[-1];
    pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),cVar9);
    uVar64 = CONCAT44(pbVar17,pcVar14);
  }
  *pcVar14 = *pcVar14 + bVar8;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                             CONCAT11((byte)((uint)pbVar27 >> 8) | bRam080a0056,cVar9));
  *pcVar14 = *pcVar14 + bVar8;
  bVar33 = bVar8 + 2;
  *pbVar32 = *pbVar32 - (char)((ulonglong)uVar64 >> 0x20);
  *(char *)CONCAT31(uVar24,bVar33) = *(char *)CONCAT31(uVar24,bVar33) + bVar33;
  uVar15 = *unaff_ESI;
  uVar28 = (undefined3)((uint)pcVar21 >> 8);
  pbVar27 = (byte *)(CONCAT31(uVar28,(byte)uVar15) | 6);
  bVar6 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
  bVar10 = bVar8 + 0x74 + bVar6 * '\x06';
  bVar10 = bVar10 + (0x90 < (bVar10 & 0xf0) | 0x8d < bVar33 | bVar6 * (0xf9 < bVar10)) * '`';
  pbVar18 = (byte *)CONCAT31(uVar24,bVar10);
  bVar8 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar10;
  if (!SCARRY1(bVar8,bVar10)) {
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    unaff_ESI = (uint *)((int)unaff_ESI + *(int *)(pbVar17 + 0x33));
    *pbVar18 = *pbVar18 | bVar10;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    bVar8 = bVar10 + 0x72;
    piVar39[-2] = (int)pbVar32;
    *(byte *)CONCAT31(uVar24,bVar8) = *(byte *)CONCAT31(uVar24,bVar8) | bVar8;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
    pbVar27 = (byte *)CONCAT31(uVar28,((byte)uVar15 | 6) + (byte)*unaff_ESI);
    pcVar21 = (char *)CONCAT31(uVar24,bVar10 - 0x11);
    piVar40 = piVar39 + -3;
    piVar39[-3] = (int)pbVar27;
    *pcVar21 = *pcVar21 + (bVar10 - 0x11);
    pbVar18 = (byte *)CONCAT31(uVar24,bVar10 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar18 = *pbVar18 + (bVar10 - 0xf);
  }
code_r0x00403825:
  pbVar57 = (byte *)0x80a0000;
  uVar24 = (undefined3)((uint)pbVar18 >> 8);
  cVar7 = (char)pbVar18 + '\x7f';
  pcVar21 = (char *)CONCAT31(uVar24,cVar7);
  *(byte **)((int)piVar40 + -4) = pbVar32;
  *pcVar21 = *pcVar21 + cVar7;
  iVar26 = CONCAT31(uVar24,(char)pbVar18 + -0x7f) + 0x547d;
  cVar9 = (char)iVar26;
  uVar24 = (undefined3)((uint)iVar26 >> 8);
  cVar7 = cVar9 + '*';
  pcVar21 = (char *)CONCAT31(uVar24,cVar7);
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | (byte)*unaff_ESI);
  cVar30 = (char)pbVar32 - (byte)*unaff_ESI;
  uVar60 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar34 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar30) + 0x57);
  *pcVar21 = *pcVar21 + cVar7;
  bVar8 = cVar9 + 0x54U & *pbVar17;
  iVar26 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
  pcVar21 = (char *)CONCAT31(uVar24,bVar8 + 0x2a);
  *(undefined2 *)((int)piVar40 + -8) = in_DS;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,cVar30)) + 0x58);
  *pcVar21 = *pcVar21 + bVar8 + 0x2a;
  bVar33 = bVar8 + 0x54 & *pbVar17;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar24,bVar33) = *(char *)CONCAT31(uVar24,bVar33) + bVar33;
  pcVar21 = (char *)CONCAT31(uVar24,bVar33 + 0x2a);
  pbVar18 = *(byte **)((int)piVar40 + -8);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar21 = *pcVar21 + bVar33 + 0x2a;
  pcVar21 = (char *)CONCAT31(uVar24,bVar33 + 0x57);
  pbVar17 = pbVar17 + *(int *)pbVar18;
  *(undefined4 *)((int)piVar40 + -8) = 0x2a;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar21 = *pcVar21 + bVar33 + 0x57;
  cVar7 = bVar33 - 0x3a;
  pcVar21 = (char *)CONCAT31(uVar24,cVar7);
  *(undefined2 *)((int)piVar40 + -0xc) = uVar59;
  *pcVar21 = *pcVar21 + cVar7;
  bVar8 = *pbVar17;
  cVar9 = (char)pbVar27;
  *(undefined2 *)((int)piVar40 + -0x10) = in_DS;
  pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,
                                                  cVar30)) + 0x59),cVar30));
  *pcVar21 = *pcVar21 + cVar7;
  bVar11 = bVar33 - 0x10 & *pbVar17;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar26);
  *(char *)CONCAT31(uVar24,bVar11) = *(char *)CONCAT31(uVar24,bVar11) + bVar11;
  bVar11 = bVar11 + 0x2a;
  pbVar20 = (byte *)CONCAT31(uVar24,bVar11);
  puVar37 = (undefined4 *)((int)piVar40 + -0x14);
  *(undefined2 *)((int)piVar40 + -0x14) = in_DS;
  bVar33 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar20 = *pbVar20 + bVar11;
  bVar10 = *pbVar17;
  puVar42 = (undefined4 *)((int)piVar40 + -0x18);
  *(undefined2 *)((int)piVar40 + -0x18) = in_DS;
  bVar12 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar20 = *pbVar20 + bVar11;
  pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar27 >> 8) | bVar8) + bVar33 | bVar10) +
                                      bVar12 | *pbVar17,cVar9));
  *pbVar32 = *pbVar32 + cVar30;
  *(byte *)((int)pbVar20 * 2) = *(byte *)((int)pbVar20 * 2) ^ bVar11;
  bVar8 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar11;
  bVar33 = *pbVar20;
  *pbVar27 = *pbVar27 + (char)pbVar17;
  bVar8 = ((bVar11 - bVar33) - CARRY1(bVar8,bVar11)) + *pbVar17;
  pbVar20 = (byte *)CONCAT31(uVar24,bVar8);
  if ((POPCOUNT(bVar8) & 1U) != 0) {
    pbVar17 = *(byte **)((int)piVar40 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar20 = *pbVar20 + bVar8;
  cVar7 = (bVar8 + 0x6f) - (0x90 < bVar8);
  pbVar19 = (byte *)CONCAT31(uVar24,cVar7);
  bVar8 = *pbVar17;
  *pbVar17 = *pbVar17 + cVar9;
  if (SCARRY1(bVar8,cVar9) == (char)*pbVar17 < '\0') {
    cRam33100000 = cRam33100000 - cVar7;
    cVar7 = cVar7 + *pbVar17;
    pbVar20 = (byte *)CONCAT31(uVar24,cVar7);
    puVar37 = (undefined4 *)((int)piVar40 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x004038b0:
    uVar24 = (undefined3)((uint)pbVar19 >> 8);
    cVar7 = (char)pbVar19 + '\x02';
    pbVar20 = (byte *)CONCAT31(uVar24,cVar7);
    puVar37 = puVar42;
    if ((POPCOUNT(cVar7) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar18);
      cVar7 = (char)pbVar20 + *pbVar17;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar7);
code_r0x0040390c:
      cVar9 = (char)pbVar20;
      if ((POPCOUNT(cVar7) & 1U) == 0) goto code_r0x0040390e;
      *pbVar18 = *pbVar18 + cVar9;
      goto code_r0x00403962;
    }
    *pbVar20 = *pbVar20 + cVar7;
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    piVar40 = (int *)((int)puVar42 + -4);
    *(byte **)((int)puVar42 + -4) = pbVar27;
    cVar7 = (char)pbVar19 + '.' + *pbVar17;
    pbVar20 = (byte *)CONCAT31(uVar24,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      pbVar19 = pbVar17 + (int)pbVar20;
      *pbVar19 = *pbVar19 + cVar7;
      bVar8 = *pbVar19;
      goto code_r0x00403912;
    }
    *pbVar20 = *pbVar20 + cVar7;
    bVar8 = cVar7 + 2;
    pbVar20 = (byte *)CONCAT31(uVar24,bVar8);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403916;
    *pbVar20 = *pbVar20 + bVar8;
    cVar9 = cVar7 + 'q';
    piVar16 = (int *)CONCAT31(uVar24,cVar9);
    *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0x90 < bVar8);
    bVar8 = *pbVar32;
    bVar33 = (byte)((uint)pbVar27 >> 8);
    *pbVar32 = *pbVar32 + bVar33;
    if (!CARRY1(bVar8,bVar33)) {
      out(*(undefined4 *)pbVar18,(short)pbVar17);
      bVar8 = (cVar9 - (char)*piVar16) - CARRY1(bVar8,bVar33);
      *pbVar17 = *pbVar17 + (char)pbVar27;
      cVar7 = bVar8 - *(byte *)CONCAT31(uVar24,bVar8);
      unaff_ESI = (uint *)(pbVar18 +
                          ((((uint)bVar62 * -8 + 4) - *(int *)CONCAT31(uVar24,cVar7)) -
                          (uint)(bVar8 < *(byte *)CONCAT31(uVar24,bVar8))));
      pbVar18 = (byte *)CONCAT31(uVar24,cVar7);
      goto code_r0x00403825;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    uVar60 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar8 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    pcVar21 = (char *)CONCAT31(uVar24,cVar7 + 's');
    pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar60,CONCAT11(bVar8,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar21 = *pcVar21 + cVar7 + 's';
    bVar8 = cVar7 - 0xf;
    pbVar17 = *(byte **)((int)puVar42 + -4);
    *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
    bVar33 = cVar7 + 0x1e;
    pbVar19 = (byte *)CONCAT31(uVar24,bVar33);
    *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
         pbVar17 + (uint)(0xd2 < bVar8) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    puVar44 = (undefined4 *)((int)puVar42 + -4);
    *(undefined2 *)((int)puVar42 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar19;
    bVar8 = *pbVar18;
    *pbVar18 = *pbVar18 + bVar33;
    if (CARRY1(bVar8,bVar33)) {
      *pbVar19 = *pbVar19 + bVar33;
      pbVar20 = (byte *)CONCAT31(uVar24,bVar33 | pbVar19[0x400005a]);
      if ('\0' < (char)(bVar33 | pbVar19[0x400005a])) {
code_r0x004038f6:
        bVar8 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar8;
        uVar24 = (undefined3)((uint)pbVar20 >> 8);
        cVar7 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar24,bVar8 + 0x28)) - (0xd7 < bVar8);
        pbVar20 = (byte *)CONCAT31(uVar24,cVar7);
        bVar8 = *pbVar32;
        bVar33 = (byte)((uint)pbVar27 >> 8);
        *pbVar32 = *pbVar32 + bVar33;
        if (CARRY1(bVar8,bVar33)) {
          *pbVar20 = *pbVar20 + cVar7;
          pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                     CONCAT11(bVar33 | *pbVar20,(char)pbVar27));
          *pbVar18 = *pbVar18 + cVar7;
          goto code_r0x00403908;
        }
        pbVar19 = pbVar20 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar24 = (undefined3)((uint)pbVar20 >> 8);
      bVar33 = (char)pbVar20 + 0x6f;
      bVar8 = *(byte *)CONCAT31(uVar24,bVar33);
      *pbVar17 = *pbVar17 + (char)pbVar27;
      pbVar20 = (byte *)CONCAT31(uVar24,(bVar33 & bVar8) + *pbVar18);
      *pbVar27 = *pbVar27 - (char)((uint)pbVar17 >> 8);
      puVar49 = puVar44;
      goto code_r0x0040395a;
    }
    puVar41 = (undefined4 *)((int)puVar42 + -8);
    puVar42 = (undefined4 *)((int)puVar42 + -8);
    *puVar41 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  unaff_ESI = puVar58;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar20 = *pbVar20 + cVar9;
  bVar8 = cVar9 + 2;
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8);
code_r0x00403912:
  bVar61 = (POPCOUNT(bVar8) & 1U) == 0;
  puVar49 = puVar37;
  if (!bVar61) goto code_r0x00403967;
  *pbVar20 = *pbVar20 + (char)pbVar20;
code_r0x00403916:
  bVar12 = (char)pbVar20 + 0x6f;
  pbVar19 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar20 >> 8),bVar12);
  bVar10 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  bVar33 = *pbVar19;
  bVar8 = *pbVar19;
  puVar49 = (undefined4 *)((int)puVar37 + -4);
  *(undefined2 *)((int)puVar37 + -4) = in_ES;
  if (bVar8 == 0 || SCARRY1(bVar10,bVar12) != (char)bVar33 < '\0') goto code_r0x00403979;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19 = (byte *)CONCAT31((int3)(char)((uint)pbVar20 >> 8),(char)pbVar20 + -100);
  *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
       pbVar17 + (uint)(0xd2 < bVar12) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
  puVar43 = (undefined2 *)((int)puVar37 + -8);
  puVar37 = (undefined4 *)((int)puVar37 + -8);
  *puVar43 = in_ES;
code_r0x00403926:
  puVar42 = puVar37 + 1;
  puVar49 = puVar37 + 1;
  puVar44 = puVar37 + 1;
  *(undefined4 *)pbVar19 = *puVar37;
  bVar8 = *pbVar18;
  bVar33 = (byte)pbVar19;
  *pbVar18 = *pbVar18 + bVar33;
  if (CARRY1(bVar8,bVar33)) {
    *pbVar19 = *pbVar19 + bVar33;
    uVar24 = (undefined3)((uint)pbVar19 >> 8);
    bVar33 = bVar33 | pbVar19[0x400005b];
    pbVar20 = (byte *)CONCAT31(uVar24,bVar33);
    pbVar19 = pbVar18;
    if ((char)bVar33 < '\x01') goto code_r0x00403991;
    *pbVar20 = *pbVar20 + bVar33;
    cVar7 = bVar33 + 0x28;
    pbVar20 = (byte *)CONCAT31(uVar24,cVar7);
    *(byte **)pbVar20 = pbVar20 + (uint)(0xd7 < bVar33) + *(int *)pbVar20;
    bVar8 = *pbVar32;
    bVar33 = (byte)((uint)pbVar27 >> 8);
    *pbVar32 = *pbVar32 + bVar33;
    if (CARRY1(bVar8,bVar33)) {
      *pbVar20 = *pbVar20 + cVar7;
      pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                 CONCAT11(bVar33 | *pbVar20,(char)pbVar27));
      *pbVar18 = *pbVar18 + cVar7;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar20 = *pbVar20 + cVar7;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar37 = in_ES;
code_r0x00403962:
    puVar49 = (undefined4 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar59;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar20 = *pbVar20 + (char)pbVar20;
  puVar45 = (undefined2 *)((int)puVar49 + -4);
  puVar49 = (undefined4 *)((int)puVar49 + -4);
  *puVar45 = in_ES;
  pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar27;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar18);
  cVar7 = (char)pbVar20 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar7);
  bVar61 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403967:
  if (!bVar61) goto code_r0x004039be;
  *pbVar20 = *pbVar20 + (char)pbVar20;
  uVar24 = (undefined3)((uint)pbVar20 >> 8);
  bVar8 = (char)pbVar20 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar24,bVar8);
  pbVar19 = (byte *)CONCAT31(uVar24,bVar8);
  *pbVar17 = *pbVar17 + (char)pbVar27;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar8;
code_r0x00403979:
  do {
    bVar8 = (char)pbVar19 - (byte)*unaff_EDI;
    bVar61 = bVar8 < *pbVar27;
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar8 - *pbVar27);
    do {
      cVar7 = (char)pbVar20;
      *pbVar20 = *pbVar20 + cVar7 + bVar61;
      *pbVar20 = *pbVar20 + cVar7;
      *pbVar27 = *pbVar27 + (char)pbVar17;
      pbVar27[0x101c00aa] = pbVar27[0x101c00aa] + (char)pbVar32;
      *pbVar20 = *pbVar20 + cVar7;
      *(byte **)pbVar18 = pbVar32 + *(int *)pbVar18;
      bVar8 = (byte)((uint)pbVar27 >> 8);
      pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                 CONCAT11(bVar8 + *pbVar20,(char)pbVar27));
      pbVar20 = pbVar20 + (uint)CARRY1(bVar8,*pbVar20) + *(int *)pbVar20;
      pbVar19 = pbVar18;
code_r0x00403991:
      cVar7 = (char)pbVar27;
      *pbVar17 = *pbVar17 + cVar7;
      cVar9 = (char)pbVar32 - pbVar19[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar9);
      pbVar18 = pbVar19;
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040395a;
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      uVar25 = (uint3)((uint)pbVar20 >> 8);
      bVar8 = (byte)pbVar20 | *pbVar32;
      piVar16 = (int *)CONCAT31(uVar25,bVar8);
      bVar33 = (byte)((uint)pbVar27 >> 8);
      bVar10 = (byte)pbVar17;
      if (bVar8 == 0) {
        *(char *)piVar16 = (char)*piVar16;
        puVar49 = (undefined4 *)((int)puVar49 + -*(int *)(pbVar57 + 0x1b000007));
        pbVar18 = pbVar19 + (uint)bVar62 * -8 + 4;
        out(*(undefined4 *)pbVar19,(short)pbVar17);
        pbVar20 = (byte *)((uint)uVar25 << 8);
        *pbVar17 = *pbVar17 + cVar7;
        pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar10 - *pbVar32);
        *pbVar32 = *pbVar32;
        *pbVar17 = *pbVar17 + bVar33;
        *pbVar20 = *pbVar20;
        *pbVar32 = *pbVar32 + cVar9;
        *pbVar20 = *pbVar20;
        *(byte **)(pbVar32 + -0x3d) = pbVar18 + *(int *)(pbVar32 + -0x3d);
        break;
      }
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *(byte *)piVar16 = (char)*piVar16 + bVar8;
      pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),CONCAT11(bVar33 | *pbVar17,cVar7));
      pbVar18 = pbVar19 + *piVar16;
      pcVar21 = (char *)((int)piVar16 + *piVar16);
      bVar33 = (char)pcVar21 - *pcVar21;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar21 >> 8),bVar33);
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar33;
      pbVar20 = pbVar20 + (-(uint)CARRY1(bVar8,bVar33) - *(int *)pbVar20);
      bVar61 = CARRY1(*pbVar27,bVar10);
      *pbVar27 = *pbVar27 + bVar10;
    } while (!bVar61);
    *pbVar20 = *pbVar20 + (char)pbVar20;
    pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),(byte)pbVar27 | *pbVar17);
code_r0x004039be:
    puVar37 = (undefined4 *)((int)puVar49 + -4);
    puVar46 = (undefined1 *)((int)puVar49 + -4);
    *(undefined2 *)((int)puVar49 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar57 + -0x3c));
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    uVar24 = (undefined3)((uint)pbVar20 >> 8);
    bVar8 = (byte)pbVar20 | *pbVar17;
    pcVar21 = (char *)CONCAT31(uVar24,bVar8);
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      cVar7 = *pcVar21;
      *pcVar21 = *pcVar21 + bVar8;
      cVar9 = *pcVar21;
      puVar29 = (undefined1 *)((int)puVar49 + -4);
      if (!SCARRY1(cVar7,bVar8)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar37 = (undefined4 *)puVar29;
      cVar7 = (char)pcVar21;
      *pcVar21 = *pcVar21 + cVar7;
      uVar24 = (undefined3)((uint)pcVar21 >> 8);
      bVar8 = cVar7 + 2;
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        pcVar21 = (char *)CONCAT31(uVar24,bVar8 + *pbVar17);
        pbVar20 = pbVar18;
        if ((POPCOUNT(bVar8 + *pbVar17) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
             pbVar17 + (uint)(0xd2 < (byte)pcVar21) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
        puVar48 = (undefined2 *)((int)puVar37 + -4);
        puVar37 = (undefined4 *)((int)puVar37 + -4);
        *puVar48 = in_ES;
        pbVar19 = pbVar57;
        pbVar22 = (byte *)CONCAT31((int3)((uint)pcVar21 >> 8),(byte)pcVar21 + 0x2d);
code_r0x00403ad8:
        pbVar57 = pbVar22;
        bVar8 = *pbVar19;
        bVar33 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar33;
        puVar49 = (undefined4 *)((int)puVar37 + -4);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        puVar29 = (undefined1 *)((int)puVar37 + -4);
        if (CARRY1(bVar8,bVar33)) {
          *pbVar19 = *pbVar19 + bVar33;
          bVar33 = bVar33 | pbVar19[0x400005d];
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar33);
          pbVar20 = pbVar18;
          if ((char)bVar33 < '\x01') {
            *pbVar19 = *pbVar19 + bVar33;
            pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar27 >> 8) | *pbVar17,(char)pbVar27)
                                      );
            pbVar20 = *(byte **)((int)puVar37 + -4);
            pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                       CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],
                                                (char)pbVar32));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar19 = *pbVar19 + (char)pbVar19;
          cVar7 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar7);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar8 = *pbVar32;
          bVar33 = (byte)((uint)pbVar27 >> 8);
          *pbVar32 = *pbVar32 + bVar33;
          pbVar18 = pbVar20;
          if (!CARRY1(bVar8,bVar33)) {
            puVar37 = (undefined4 *)((int)puVar49 + -4);
            *(undefined2 *)((int)puVar49 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar19 = *pbVar19 + cVar7;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      piVar16 = (int *)CONCAT31(uVar24,cVar7 + '*');
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0xd7 < bVar8);
      bVar8 = *pbVar17;
      bVar12 = (byte)pbVar27;
      *pbVar17 = *pbVar17 + bVar12;
      out(*(undefined4 *)pbVar18,(short)pbVar17);
      bVar10 = ((cVar7 + '*') - (char)*piVar16) - CARRY1(bVar8,bVar12);
      pbVar20 = (byte *)CONCAT31(uVar24,bVar10);
      *pbVar17 = *pbVar17 + bVar12;
      uVar60 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar31 = SUB41(pbVar32,0);
      cVar7 = (char)((uint)pbVar32 >> 8) - pbVar18[(uint)bVar62 * -8 + 0x1f];
      pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(cVar7,uVar31));
      *pbVar20 = *pbVar20 + bVar10;
      bVar33 = *pbVar17;
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      pbVar18 = pbVar18 + ((((uint)bVar62 * -8 + 4) - *(int *)pbVar20) - (uint)CARRY1(bVar8,bVar10))
      ;
      pbVar20 = (byte *)CONCAT31(uVar24,bVar10);
      pbVar27 = (byte *)(CONCAT22((short)((uint)pbVar27 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar27 >> 8) | bVar33,bVar12)) + -1);
      bVar8 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      bVar8 = (bVar10 - *pbVar20) - CARRY1(bVar8,bVar10);
      *pbVar27 = *pbVar27 + (char)pbVar17;
      bVar61 = CARRY1(bVar8,*pbVar17);
      bVar8 = bVar8 + *pbVar17;
      pbVar20 = (byte *)CONCAT31(uVar24,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar20 = *pbVar20 + bVar8;
        cVar9 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pbVar19 = (byte *)CONCAT31(uVar24,cVar9);
        bVar8 = *pbVar17;
        *pbVar17 = *pbVar17 + (char)pbVar27;
        if (SCARRY1(bVar8,(char)pbVar27) == (char)*pbVar17 < '\0') {
code_r0x00403aaf:
          cVar7 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar7);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar8 = *pbVar32;
          bVar33 = (byte)((uint)pbVar27 >> 8);
          *pbVar32 = *pbVar32 + bVar33;
          pbVar22 = pbVar57;
          if (!CARRY1(bVar8,bVar33)) goto code_r0x00403ad8;
          *pbVar19 = *pbVar19 + cVar7;
          pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                     CONCAT11(bVar33 | *pbVar32,(char)pbVar27));
          if ((POPCOUNT(*pbVar17 - cVar7) & 1U) != 0) {
            *pbVar18 = *pbVar18 + cVar7;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar19 = *pbVar19 + cVar9;
          pcVar21 = (char *)CONCAT31(uVar24,cVar9 + '\x02');
          bVar33 = cVar7 + pbVar32[0x52];
          pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar33,uVar31));
          *pcVar21 = *pcVar21 + cVar9 + '\x02';
          bVar8 = cVar9 + 4;
          pbVar19 = (byte *)CONCAT31(uVar24,bVar8);
          if ((POPCOUNT(bVar8) & 1U) == 0) {
            *pbVar19 = *pbVar19 + bVar8;
            cVar7 = (cVar9 + 's') - (0x90 < bVar8);
            pcVar21 = (char *)CONCAT31(uVar24,cVar7);
            bVar8 = (byte)((uint)pbVar27 >> 8);
            bVar61 = CARRY1(*pbVar32,bVar8);
            *pbVar32 = *pbVar32 + bVar8;
            pbVar20 = pbVar18;
            if (bVar61) {
              *pcVar21 = *pcVar21 + cVar7;
              pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar33 | pbVar57[0x5c],uVar31));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar19);
          pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar33 + pbVar32[0x52],uVar31));
        }
        *pbVar19 = *pbVar19 + (char)pbVar19;
        cVar7 = (char)pbVar19 + '\x02';
        pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar7);
        bVar61 = (POPCOUNT(cVar7) & 1U) == 0;
        if (!bVar61) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar8 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar8;
        cVar7 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pcVar21 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar7);
        bVar8 = *pbVar32;
        cVar9 = (char)((uint)pbVar27 >> 8);
        *pbVar32 = *pbVar32 + cVar9;
        if (*pbVar32 == 0 || SCARRY1(bVar8,cVar9) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
        *pcVar21 = *pcVar21 + cVar7;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar61) {
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],(char)pbVar32
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      bVar8 = (byte)pbVar20 | pbVar20[0x400005e];
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar8);
      if ('\0' < (char)bVar8) {
        *pbVar19 = *pbVar19 + bVar8;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar21 = *pcVar21 + bVar8;
    *pbVar18 = *pbVar18 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar24,bVar8 + 6);
    pbVar19 = (byte *)uVar3;
    bVar8 = *pbVar17;
    bVar33 = (byte)pbVar27;
    *pbVar17 = *pbVar17 + bVar33;
    if (CARRY1(bVar8,bVar33)) {
      *pbVar19 = *pbVar19 + (char)uVar3;
      bVar10 = (byte)((uint)pbVar27 >> 8) | *pbVar19;
      uVar60 = CONCAT11(bVar10,bVar33);
      pbVar19 = pbVar19 + -*(int *)pbVar19;
      bVar8 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar10;
      if (CARRY1(bVar8,bVar10)) {
        cVar9 = (char)pbVar19;
        *pbVar19 = *pbVar19 + cVar9;
        bVar8 = *pbVar17;
        pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                   CONCAT11((char)((uint)pbVar17 >> 8) - pbVar32[-0x3a],
                                            (char)pbVar17));
        *pbVar19 = *pbVar19 + cVar9;
        uVar36 = (undefined2)((uint)pbVar32 >> 0x10);
        bVar35 = (byte)((uint)pbVar32 >> 8) | pbVar17[0x32];
        pcVar21 = (char *)CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar32));
        cVar7 = *pcVar21;
        puVar46 = (undefined1 *)((int)puVar49 + -8);
        *(undefined2 *)((int)puVar49 + -8) = in_CS;
        cVar7 = cVar9 + cVar7 + '-';
        pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar7);
        *pbVar19 = *pbVar19;
        *(undefined2 *)((int)puVar49 + -0xc) = in_ES;
        bVar12 = *pbVar17;
        uVar59 = *(undefined2 *)((int)puVar49 + -0xc);
        cVar9 = (char)pbVar32 - *pbVar18;
        bVar11 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar19 = *pbVar19 + cVar7;
        uVar60 = CONCAT11((bVar10 | bVar8) + bVar11 | *pbVar17,bVar33 - bVar12);
        pbVar32 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35 + *(char *)(CONCAT31((int3)((uint)pcVar21
                                                                                     >> 8),cVar9) +
                                                                     0x4e),cVar9));
        *pbVar19 = *pbVar19 + cVar7;
      }
      pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),uVar60);
      bVar8 = (byte)pbVar19;
      uVar24 = (undefined3)((uint)pbVar19 >> 8);
      pcVar21 = (char *)CONCAT31(uVar24,bVar8 + 0x28);
      *pcVar21 = (*pcVar21 - (bVar8 + 0x28)) - (0xd7 < bVar8);
      *pbVar17 = *pbVar17 + (char)uVar60;
      bVar33 = bVar8 + 0x1b;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32))
      ;
      *(char *)CONCAT31(uVar24,bVar33) = *(char *)CONCAT31(uVar24,bVar33) + bVar33;
      pcVar14 = (char *)CONCAT31(uVar24,bVar8 + 0x43);
      *pcVar14 = (*pcVar14 - (bVar8 + 0x43)) - (0xd7 < bVar33);
      *pbVar17 = *pbVar17 + (char)uVar60;
      pcVar21 = pcVar14 + -0x6b721c;
      pcVar14 = pcVar14 + -0x6b721a;
      *pcVar14 = *pcVar14 + (char)((uint)pbVar17 >> 8);
      cVar9 = *pcVar14;
      puVar37 = (undefined4 *)puVar46;
code_r0x00403a22:
      puVar29 = (undefined1 *)puVar37;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x00403a24;
      bVar8 = *pbVar17;
      *pbVar17 = *pbVar17 + (char)pbVar27;
      if (SCARRY1(bVar8,(char)pbVar27) == (char)*pbVar17 < '\0') {
        pbVar19 = pbVar57;
        pbVar22 = (byte *)(pcVar21 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar21 = *pcVar21 + (char)pcVar21;
      pcVar21 = (char *)CONCAT31((int3)((uint)pcVar21 >> 8),(char)pcVar21 + '\x02');
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32))
      ;
      pbVar20 = pbVar18;
code_r0x00403a7d:
      cVar7 = (char)pcVar21;
      *pcVar21 = *pcVar21 + cVar7;
      uVar24 = (undefined3)((uint)pcVar21 >> 8);
      cVar9 = cVar7 + '-';
      pbVar22 = (byte *)CONCAT31(uVar24,cVar9);
      pbVar19 = pbVar57;
      pbVar18 = pbVar20;
      if ((POPCOUNT(cVar9 - *pbVar17) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar22 = *pbVar22 + cVar9;
      bVar8 = cVar7 + 0x2f;
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        bVar8 = *pbVar17;
        *pbVar17 = *pbVar17 + (byte)pbVar27;
        *pbVar57 = *pbVar57 - CARRY1(bVar8,(byte)pbVar27);
        pbVar19 = (byte *)CONCAT31(uVar24,cVar7 + -0x53);
        pbVar57 = (byte *)*puVar37;
        puVar49 = puVar37 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      bVar61 = 0x90 < bVar8;
      pcVar21 = (char *)CONCAT31(uVar24,cVar7 + -0x62);
code_r0x00403a8f:
      uVar24 = (undefined3)((uint)pcVar21 >> 8);
      bVar33 = (char)pcVar21 - bVar61;
      pbVar19 = (byte *)CONCAT31(uVar24,bVar33);
      bVar8 = *pbVar32;
      cVar7 = (char)((uint)pbVar27 >> 8);
      *pbVar32 = *pbVar32 + cVar7;
      puVar49 = puVar37;
      pbVar18 = pbVar20;
      if (*pbVar32 != 0 && SCARRY1(bVar8,cVar7) == (char)*pbVar32 < '\0') {
        *pbVar19 = *pbVar19 + bVar33;
        pbVar18 = (byte *)CONCAT31(uVar24,bVar33 + 0x2d);
        *(byte **)(pbVar20 + (int)unaff_EDI * 8) =
             pbVar17 + (uint)(0xd2 < bVar33) + *(int *)(pbVar20 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        bVar61 = CARRY1(*pbVar20,(byte)pbVar20);
        *pbVar20 = *pbVar20 + (byte)pbVar20;
        puVar47 = (undefined2 *)((int)puVar37 + -8);
        puVar37 = (undefined4 *)((int)puVar37 + -8);
        *puVar47 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar27 >> 8) | *pbVar19,(char)pbVar27));
      *pbVar18 = *pbVar18 + (char)pbVar19;
      puVar29 = (undefined1 *)puVar49;
code_r0x00403afc:
      puVar37 = (undefined4 *)puVar29;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar19 = *pbVar19 + (char)pbVar19;
      uVar24 = (undefined3)((uint)pbVar19 >> 8);
      bVar33 = (char)pbVar19 + 0x6f;
      bVar8 = *(byte *)CONCAT31(uVar24,bVar33);
      *pbVar17 = *pbVar17 + (char)pbVar27;
      pbVar19 = (byte *)CONCAT31(uVar24,(bVar33 & bVar8) + *pbVar18);
      *pbVar27 = *pbVar27 - (char)((uint)pbVar17 >> 8);
      break;
    }
    uVar59 = *(undefined2 *)((int)puVar49 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar50 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar50 = in_ES;
  pbVar17[0x16060000] = pbVar17[0x16060000] - (char)pbVar27;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar18);
  cVar7 = (char)pbVar19 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar7);
  bVar61 = (POPCOUNT(cVar7) & 1U) == 0;
code_r0x00403b18:
  bVar8 = (byte)pbVar20;
  uVar24 = (undefined3)((uint)pbVar20 >> 8);
  if (!bVar61) {
    *pbVar17 = *pbVar17 + (char)pbVar27;
    pbVar19 = (byte *)CONCAT31(uVar24,bVar8 | *pbVar18);
code_r0x00403b73:
    pbVar20 = (byte *)((int)unaff_EDI + *(int *)(pbVar57 + -0x37));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar24 = (undefined3)((uint)pbVar19 >> 8);
    bVar8 = (byte)pbVar19 | *pbVar17;
    pcVar21 = (char *)CONCAT31(uVar24,bVar8);
    uVar64 = CONCAT44(pbVar17,pcVar21);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *pcVar21 = *pcVar21 + bVar8;
      *pbVar18 = *pbVar18 + 1;
      return (byte *)CONCAT31(uVar24,bVar8 + 6);
    }
    bVar8 = *pbVar18;
    *pbVar18 = *pbVar18 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar8,'\x01')) {
      uVar64 = (*pcVar2)();
      pbVar27 = extraout_ECX_00;
    }
    pbVar17 = (byte *)uVar64;
    *pbVar17 = *pbVar17 + (char)uVar64;
    cVar9 = (char)((ulonglong)uVar64 >> 0x20);
    puVar58 = (uint *)CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | pbVar32[0x2f],cVar9));
    *pbVar17 = *pbVar17 + (char)uVar64;
    cVar7 = (char)pbVar27;
    bVar10 = (byte)((uint)pbVar27 >> 8) | *pbVar17;
    pbVar17 = pbVar17 + *(int *)pbVar17;
    bVar8 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar10;
    bVar33 = (byte)pbVar17;
    if (CARRY1(bVar8,bVar10)) {
      *pbVar17 = *pbVar17 + bVar33;
      bVar10 = bVar10 | (byte)*puVar58;
      *pbVar32 = *pbVar32 - cVar9;
      *pbVar17 = *pbVar17 + bVar33;
      uVar24 = (undefined3)((uint)pbVar17 >> 8);
      bVar33 = bVar33 | (byte)*puVar58;
      puVar23 = (uint *)CONCAT31(uVar24,bVar33);
      bVar61 = CARRY4((uint)pbVar57,*puVar23);
      bVar63 = SCARRY4((int)pbVar57,*puVar23);
      pbVar57 = pbVar57 + *puVar23;
      *(uint *)((int)puVar37 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar63 * 0x800 | (uint)bVar62 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar57 < 0) * 0x80 |
           (uint)(pbVar57 == (byte *)0x0) * 0x40 | (uint)(bVar6 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar57 & 0xff) & 1U) == 0) * 4 | (uint)bVar61 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar23 = (char)*puVar23 + bVar33;
      *(undefined2 *)((int)puVar37 + -8) = in_ES;
      cVar9 = (char)pbVar32 - *pbVar18;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar9) +
                                                   0x5f),cVar9));
      *(byte *)puVar23 = (char)*puVar23 + bVar33;
      bVar8 = bVar33 + 0x2a & (byte)*puVar58;
      pbVar20 = pbVar20 + *(int *)(pbVar57 + 0x5f);
      *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
      pbVar17 = (byte *)CONCAT31(uVar24,bVar8 + 0x2a);
      *(byte *)puVar58 = (byte)*puVar58 + 0x28;
      *pbVar17 = *pbVar17 + bVar8 + 0x2a;
      puVar53 = (undefined2 *)((int)puVar37 + -0xc);
      puVar37 = (undefined4 *)((int)puVar37 + -0xc);
      *puVar53 = in_ES;
    }
    else {
      *pbVar18 = *pbVar18 + bVar33;
    }
    pcVar21 = (char *)CONCAT22((short)((uint)pbVar27 >> 0x10),CONCAT11(bVar10,cVar7));
    *pbVar57 = *pbVar57 - bVar10;
    *(byte *)puVar58 = (byte)*puVar58 + cVar7;
    bVar8 = (byte)pbVar17 - 0xb;
    pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar8);
    if (10 < (byte)pbVar17) {
      *pbVar27 = *pbVar27 | bVar8;
      return pbVar27;
    }
    *(byte *)puVar58 = (byte)*puVar58 + cVar7;
    do {
      *(undefined2 *)((int)puVar37 + -4) = in_ES;
      bVar8 = pbVar32[-0x23];
      bVar33 = (byte)pbVar27;
      *pbVar27 = *pbVar27 + bVar33;
      bVar6 = pbVar57[-0x22];
      *pbVar27 = *pbVar27 + bVar33;
      uVar24 = (undefined3)((uint)pbVar27 >> 8);
      bVar33 = bVar33 | *pbVar18;
      pbVar17 = (byte *)CONCAT31(uVar24,bVar33);
      cVar9 = (char)pbVar32 - *pbVar18;
      pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar32 >> 8) + bVar8 | bVar6
                                                          ,(char)pbVar32)) >> 8),cVar9);
      cVar7 = (char)pcVar21;
      pcVar21 = (char *)CONCAT22((short)((uint)pcVar21 >> 0x10),
                                 CONCAT11((char)((uint)pcVar21 >> 8) + *pbVar17,cVar7));
      *(byte *)puVar58 = (byte)*puVar58 + cVar7;
      bVar6 = bVar33 - *pbVar17;
      pbVar27 = (byte *)CONCAT31(uVar24,bVar6);
      pbVar18 = pbVar18 + (-(uint)(bVar33 < *pbVar17) - *(int *)pbVar27);
      in_ES = *(undefined2 *)((int)puVar37 + -4);
      puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),(char)puVar58 * '\x02');
      *(byte **)pbVar27 = pbVar27 + *(int *)pbVar27;
      *pbVar20 = *pbVar20 + cVar9;
      bVar8 = *pbVar27;
      *pbVar27 = *pbVar27 + bVar6;
      *puVar58 = (uint)(pbVar27 + (uint)CARRY1(bVar8,bVar6) + *puVar58);
    } while ((POPCOUNT(*puVar58 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar27 = *pbVar27 + (char)pbVar27;
    pcVar21 = (char *)CONCAT31((int3)((uint)pcVar21 >> 8),(byte)pcVar21 | pbVar27[(int)pcVar21]);
    puVar55 = (undefined2 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar59;
    bVar61 = false;
    pbVar27 = (byte *)((uint)pbVar27 & 0xffffff00);
    do {
      pbVar20 = pbVar20 + (-(uint)bVar61 - *(int *)pbVar32);
      pcVar14 = (char *)CONCAT31((int3)((uint)pbVar27 >> 8),*pcVar21);
      *pcVar14 = *pcVar14 + *pcVar21;
      pbVar27 = (byte *)CONCAT31((int3)((uint)(pcVar14 +
                                              (pbVar18[0x2000001] < (byte)((uint)pcVar21 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar14 +
                                        (pbVar18[0x2000001] < (byte)((uint)pcVar21 >> 8)) + 0xda7d)
                                 | (byte)*puVar58) + 0x7d);
      pcVar21 = pcVar21 + -1;
      *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar21;
      while( true ) {
        uVar28 = (undefined3)((uint)puVar58 >> 8);
        cVar7 = (char)puVar58 + *(char *)((int)pbVar20 * 2 + 0xa0000e1);
        puVar58 = (uint *)CONCAT31(uVar28,cVar7);
        bVar61 = CARRY1((byte)pbVar27,(byte)*puVar58);
        uVar24 = (undefined3)((uint)pbVar27 >> 8);
        bVar8 = (byte)pbVar27 + (byte)*puVar58;
        pbVar27 = (byte *)CONCAT31(uVar24,bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) break;
        *pbVar27 = *pbVar27 + bVar8;
        cVar9 = (char)pcVar21;
        pcVar21 = (char *)CONCAT22((short)((uint)pcVar21 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar21 >> 8) | pbVar20[-0x65],cVar9));
        bVar6 = *pbVar27;
        *pbVar27 = *pbVar27 + bVar8;
        *(undefined2 *)((int)puVar55 + -4) = in_ES;
        if (CARRY1(bVar6,bVar8)) {
          *pbVar27 = *pbVar27 + bVar8;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | pbVar57[-0x1d],
                                              (char)pbVar32));
          *pbVar27 = *pbVar27 + bVar8;
          bVar61 = false;
          bVar8 = bVar8 | (byte)*puVar58;
          pcVar14 = (char *)CONCAT31(uVar24,bVar8);
          uVar59 = *(undefined2 *)((int)puVar55 + -4);
          puVar37 = (undefined4 *)puVar55;
          while( true ) {
            bVar6 = (byte)pcVar14;
            uVar24 = (undefined3)((uint)pcVar14 >> 8);
            if (bVar61 == (char)bVar8 < '\0') break;
            *pcVar14 = *pcVar14 + bVar6;
            bVar6 = bVar6 | (byte)*puVar58;
            puVar23 = (uint *)CONCAT31(uVar24,bVar6);
            *pbVar20 = *pbVar20 << 1 | (char)*pbVar20 < '\0';
            uVar15 = *puVar23;
            *(byte *)puVar23 = (byte)*puVar23 + bVar6;
            pbVar57 = pbVar57 + (-(uint)CARRY1((byte)uVar15,bVar6) - *puVar23);
            *puVar23 = *puVar23 << 1 | (uint)((int)*puVar23 < 0);
            while( true ) {
              uVar15 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58 + (byte)pcVar21;
              uVar60 = *(undefined2 *)puVar37;
              cVar7 = (char)puVar23 + 'o' + CARRY1((byte)uVar15,(byte)pcVar21);
              pcVar14 = (char *)CONCAT31((int3)((uint)puVar23 >> 8),cVar7);
              pcVar21 = (char *)0x20a0000;
              if ((POPCOUNT(cVar7) & 1U) != 0) break;
              *pcVar14 = *pcVar14 + cVar7;
              bVar8 = bRamfe140212;
              pcVar21 = (char *)0x0;
              *(undefined2 *)puVar37 = in_ES;
              uVar24 = (undefined3)((uint)(pcVar14 + -0x732b0000) >> 8);
              bVar6 = in(0);
              puVar23 = (uint *)CONCAT31(uVar24,bVar6);
              uVar15 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58;
              if (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar58 < '\0') {
                *(byte *)puVar23 = (byte)*puVar23 + bVar6;
                bVar6 = bVar6 | (byte)*puVar58;
                puVar23 = (uint *)CONCAT31(uVar24,bVar6);
                if ((POPCOUNT(bVar6) & 1U) == 0) {
                  *(byte *)puVar23 = (byte)*puVar23 + bVar6;
                  pcVar21 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar8 | (byte)*puVar23) << 8);
                  puVar55 = (undefined2 *)((int)puVar37 + -4);
                  *(undefined2 *)((int)puVar37 + -4) = uVar60;
                  *(byte *)puVar23 = (byte)*puVar23 + bVar6;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar23 = (byte)*puVar23 + bVar6;
                puVar23 = (uint *)CONCAT31(uVar24,bVar6 | (byte)*puVar58);
              }
            }
            *(byte *)puVar58 = (byte)*puVar58;
            bVar61 = SCARRY1((char)puVar58,*pbVar20);
            bVar8 = (char)puVar58 + *pbVar20;
            puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar8);
            puVar37 = (undefined4 *)((int)puVar37 + 4);
          }
          if (bVar61 == (char)bVar8 < '\0') {
            *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar21;
            pbVar27 = (byte *)((uint)pcVar14 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar14 = *pcVar14 + bVar6;
          pbVar27 = (byte *)CONCAT31(uVar24,(bVar6 | (byte)*puVar58) + 0x7d);
          pcVar21 = pcVar21 + -1;
          *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar21;
          puVar55 = (undefined2 *)puVar37;
        }
        else {
          *(byte *)puVar58 = (byte)*puVar58 + cVar9;
          puVar58 = (uint *)CONCAT31(uVar28,cVar7 + *(char *)((int)pbVar20 * 2 + 0xa0000e0));
          puVar55 = (undefined2 *)((int)puVar55 + -4);
        }
      }
    } while( true );
  }
  *pbVar20 = *pbVar20 + bVar8;
  bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar24,bVar8 + 0x6f);
  *pbVar17 = *pbVar17 + (char)pbVar27;
  pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(char)pbVar17 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar8;
  pcVar21 = (char *)CONCAT31(uVar24,bVar8 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar8 = (char)pcVar21 - *pcVar21;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar21 >> 8),bVar8);
  *pbVar19 = *pbVar19 + bVar8;
  *(byte **)pbVar19 = pbVar17 + *(int *)pbVar19;
  *pbVar19 = *pbVar19 + bVar8;
  bVar61 = CARRY1(*pbVar19,bVar8);
  *pbVar19 = *pbVar19 + bVar8;
  puVar29 = (undefined1 *)puVar37;
  pbVar20 = pbVar18;
  while( true ) {
    puVar37 = (undefined4 *)puVar29;
    *(byte **)pbVar19 = pbVar19 + (uint)bVar61 + *(int *)pbVar19;
    bVar6 = ((uint)pbVar19 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar62 * -2 + 1;
    pbVar19[(int)pbVar17] = pbVar19[(int)pbVar17] + (char)pbVar32;
    *pbVar19 = *pbVar19 + (char)pbVar19;
    *(byte **)pbVar20 = pbVar32 + *(int *)pbVar20;
    bVar8 = (byte)((uint)pbVar27 >> 8);
    cVar7 = (char)pbVar27;
    pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),CONCAT11(bVar8 + *pbVar19,cVar7));
    pbVar19 = pbVar19 + (uint)CARRY1(bVar8,*pbVar19) + *(int *)pbVar19;
    *pbVar17 = *pbVar17 + cVar7;
    cVar7 = (char)pbVar32 - pbVar20[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar7);
    pbVar18 = pbVar20;
    if ((POPCOUNT(cVar7) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    bVar8 = (byte)pbVar19 | *pbVar32;
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar8);
    if (bVar8 != 0) {
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *pbVar22 = *pbVar22 + bVar8;
      pbVar27 = (byte *)CONCAT22((short)((uint)pbVar27 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar27 >> 8) | *pbVar17,(char)pbVar27));
      pbVar20 = pbVar20 + *(int *)pbVar22;
      pbVar22 = pbVar22 + *(int *)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar33 = (char)pbVar22 - *pbVar22;
      pbVar18 = (byte *)CONCAT31(uVar24,bVar33);
      bVar8 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar33;
      pbVar22 = (byte *)CONCAT31(uVar24,bVar33 - CARRY1(bVar8,bVar33));
    }
    bVar8 = *pbVar22;
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    iVar26 = *(int *)(pbVar57 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar8,(byte)pbVar22);
    pbVar18 = pbVar20 + (uint)bVar62 * -8 + 4;
    out(*(undefined4 *)pbVar20,(short)pbVar17);
    pbVar19 = (byte *)(((uint)pbVar22 >> 8) * 0x100);
    *pbVar17 = *pbVar17 + (byte)pbVar27;
    bVar8 = (char)pbVar17 - *pbVar32;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar8);
    *pbVar32 = *pbVar32;
    *pbVar17 = *pbVar17 + (char)((uint)pbVar27 >> 8);
    *pbVar19 = *pbVar19;
    pcVar21 = (char *)(((uint)pbVar22 >> 8) * 0x200);
    *pcVar21 = *pcVar21 + (char)pbVar32;
    bVar61 = CARRY1(*pbVar27,bVar8);
    *pbVar27 = *pbVar27 + bVar8;
    puVar29 = (undefined1 *)((int)puVar37 + (iVar4 - iVar26));
    pbVar20 = pbVar18;
    if (bVar61) {
      *pbVar19 = *pbVar19;
      pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar27 >> 8),(byte)pbVar27 | *pbVar17);
      puVar52 = (undefined2 *)((int)puVar37 + (iVar4 - iVar26) + -4);
      puVar37 = (undefined4 *)((int)puVar37 + (iVar4 - iVar26) + -4);
      *puVar52 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar51 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar51 = uVar59;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar57 = pbVar57 + -*puVar23;
  puVar54 = (undefined1 *)((int)puVar55 + 4);
  do {
    bVar8 = (byte)puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + bVar8;
    pbVar20 = pbVar20 + -*(int *)(pbVar57 + -0x1a);
    *(byte *)puVar23 = (byte)*puVar23 + bVar8;
    bVar8 = bVar8 | (byte)*puVar58;
    puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar8);
    *(byte *)puVar23 = (byte)*puVar23 | bVar8;
    bVar8 = (byte)*puVar23;
    pbVar57 = (byte *)0x2700001;
    while (puVar55 = (undefined2 *)puVar54, (POPCOUNT(bVar8) & 1U) == 0) {
      do {
        *(byte *)puVar23 = (byte)*puVar23 + (byte)puVar23;
        bVar8 = (byte)puVar23 | (byte)*puVar58;
        puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar8);
        puVar29 = (undefined1 *)puVar55;
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
        uVar25 = CONCAT21((short)((uint)pcVar21 >> 0x10),(byte)((uint)pcVar21 >> 8) | bRamfe140212);
        puVar5 = puVar29;
        while( true ) {
          puVar56 = puVar5;
          pcVar21 = (char *)((uint)uVar25 << 8);
          puVar54 = puVar56 + -4;
          puVar55 = (undefined2 *)(puVar56 + -4);
          puVar29 = puVar56 + -4;
          *(undefined2 *)(puVar56 + -4) = in_ES;
          bVar10 = (byte)puVar23;
          *(byte *)puVar23 = (byte)*puVar23 & bVar10;
          bVar33 = *pbVar32;
          bVar12 = (byte)uVar25;
          bVar6 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar12;
          bVar8 = *pbVar32;
          if (!CARRY1(bVar33,bVar12)) break;
          *(byte *)puVar23 = (byte)*puVar23 + bVar10;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar23 = (byte)*puVar23 + bVar10;
          bVar10 = bVar10 | (byte)*puVar58;
          puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),bVar10);
          bVar61 = (POPCOUNT(bVar10) & 1U) == 0;
          while( true ) {
            cVar7 = (char)((uint)pbVar32 >> 8);
            uVar59 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar61) {
              *(byte *)puVar58 = (byte)*puVar58;
              pbVar32 = (byte *)CONCAT22(uVar59,CONCAT11(cVar7 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
            uVar60 = (undefined2)((uint)pcVar21 >> 0x10);
            bVar6 = (byte)((uint)pcVar21 >> 8) | (byte)*puVar23;
            uVar25 = CONCAT21(uVar60,bVar6);
            *puVar23 = *puVar23 & (uint)puVar23;
            *pbVar32 = *pbVar32 + bVar6;
            uVar24 = (undefined3)((uint)puVar23 >> 8);
            bVar8 = (char)puVar23 - bVar6;
            pcVar21 = (char *)CONCAT31(uVar24,bVar8);
            *pcVar21 = *pcVar21 + bVar8;
            bVar8 = bVar8 | (byte)*puVar58;
            puVar23 = (uint *)CONCAT31(uVar24,bVar8);
            puVar5 = puVar56 + -4;
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *(byte *)puVar23 = (byte)*puVar23 + bVar8;
            pcVar21 = (char *)((uint)CONCAT21(uVar60,bVar6 | (byte)*puVar23) << 8);
            *puVar23 = *puVar23 - (int)puVar23;
            *(byte *)puVar58 = (byte)*puVar58;
            pbVar32 = (byte *)CONCAT22(uVar59,CONCAT11(cVar7 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
              uVar59 = (undefined2)((uint)puVar58 >> 0x10);
              cVar7 = (char)puVar58;
              bVar8 = (byte)((uint)puVar58 >> 8) | pbVar32[-0x17];
              puVar58 = (uint *)CONCAT22(uVar59,CONCAT11(bVar8,cVar7));
              *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar23 = (byte)*puVar23 + (byte)puVar23;
                uVar24 = (undefined3)((uint)puVar23 >> 8);
                bVar33 = (byte)puVar23 | (byte)*puVar58;
                pcVar14 = (char *)CONCAT31(uVar24,bVar33);
                bVar6 = pbVar32[-0x16];
                *pcVar14 = *pcVar14 + bVar33;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar6 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar14 = *pcVar14 + bVar33;
                pbVar27 = (byte *)CONCAT31(uVar24,bVar33 | (byte)*puVar58);
                while( true ) {
                  *pbVar27 = *pbVar27 + (byte)pbVar27;
                  uVar24 = (undefined3)((uint)pbVar27 >> 8);
                  bVar6 = (byte)pbVar27 | (byte)*puVar58;
                  puVar23 = (uint *)CONCAT31(uVar24,bVar6);
                  if ((POPCOUNT(bVar6) & 1U) != 0) break;
                  *(byte *)puVar23 = (byte)*puVar23 + bVar6;
                  bVar33 = pbVar20[-0x14];
                  *(byte *)puVar23 = (byte)*puVar23 + bVar6;
                  bVar6 = bVar6 | (byte)*puVar58;
                  pcVar14 = (char *)CONCAT31(uVar24,bVar6);
                  bVar10 = pbVar32[-0x15];
                  *pcVar14 = *pcVar14 + bVar6;
                  pcVar21 = (char *)((uint)CONCAT21((short)((uint)pcVar21 >> 0x10),
                                                    (byte)((uint)pcVar21 >> 8) | bVar33 |
                                                    pbVar20[-0x13]) << 8);
                  *pcVar14 = *pcVar14 + bVar6;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar10 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar14 = *pcVar14 + bVar6;
                  pbVar27 = (byte *)CONCAT31(uVar24,bVar6 | (byte)*puVar58);
                  do {
                    do {
                      bVar33 = (byte)pbVar27;
                      *pbVar27 = *pbVar27 + bVar33;
                      cVar30 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar27,
                                                          cVar30));
                      *pbVar27 = bVar33;
                      *pbVar27 = *pbVar27 + bVar33;
                      cVar9 = (char)((uint)pcVar21 >> 8) + *pbVar27;
                      pcVar21 = (char *)((uint)CONCAT21((short)((uint)pcVar21 >> 0x10),cVar9) << 8);
                      uVar24 = (undefined3)((uint)pbVar27 >> 8);
                      bVar33 = bVar33 & *pbVar27;
                      pbVar27 = (byte *)CONCAT31(uVar24,bVar33);
                      bVar6 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar9;
                    } while (SCARRY1(bVar6,cVar9) == (char)*pbVar32 < '\0');
                    *pbVar27 = *pbVar27 + bVar33;
                    bVar33 = bVar33 | (byte)*puVar58;
                    pbVar27 = (byte *)CONCAT31(uVar24,bVar33);
                    if ((POPCOUNT(bVar33) & 1U) == 0) {
                      *pbVar27 = *pbVar27 + bVar33;
                      *pbVar27 = *pbVar27 + bVar33;
                      cVar7 = cVar7 - bVar8;
                      pbVar17 = (byte *)CONCAT31((int3)((uint)puVar58 >> 8),cVar7);
                      *pbVar27 = *pbVar27 + bVar33;
                      bRam0312382b = bRam0312382b | *pbVar17;
                      *(undefined2 *)(puVar56 + -8) = in_ES;
                      while( true ) {
                        bVar6 = (byte)pbVar27;
                        *pbVar27 = *pbVar27 + bVar6;
                        bRam0312382b = bRam0312382b | (pbVar20 + 0x21b0000)[(int)pbVar27];
                        uVar24 = (undefined3)((uint)pbVar27 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar17 = *pbVar17 + bRam0312382b;
                        pbVar27 = (byte *)CONCAT31(uVar24,bVar6 | *pbVar18);
                      }
                      *pbVar27 = *pbVar27 + bVar6;
                      bVar6 = bVar6 | *pbVar18;
                      pcVar21 = (char *)CONCAT31(uVar24,bVar6);
                      out(*(undefined4 *)pbVar18,(short)pbVar17);
                      *pcVar21 = *pcVar21 + bVar6;
                      uVar60 = CONCAT11(bVar8 | bRam6f0a002b,cVar7);
                      pcVar14 = (char *)CONCAT22(uVar59,uVar60);
                      *pcVar21 = *pcVar21 + bVar6;
                      *pcVar14 = *pcVar14 + bRam0312382b;
                      out(*(undefined4 *)(pbVar18 + (uint)bVar62 * -8 + 4),uVar60);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar30 + *pcVar21);
                  } while (SCARRY1(cVar30,*pcVar21) != (char)(cVar30 + *pcVar21) < '\0');
                }
                uVar15 = *puVar58;
                *(byte *)puVar58 = (byte)*puVar58;
              } while (SCARRY1((byte)uVar15,'\0') != (char)(byte)*puVar58 < '\0');
              *(byte *)puVar58 = (byte)*puVar58;
              *pcVar21 = *pcVar21 - (char)pbVar32;
              *(byte *)puVar23 = (byte)*puVar23 + bVar6;
              bVar6 = bVar6 | (byte)*puVar58;
              puVar23 = (uint *)CONCAT31(uVar24,bVar6);
              bVar61 = (POPCOUNT(bVar6) & 1U) == 0;
            } while (bVar61);
          }
        }
      } while (SCARRY1(bVar6,bVar12));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar21 >> 8);
    *pbVar20 = *pbVar20 - (char)pbVar32;
  } while( true );
}


