/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403404
 * Raw Name    : <CreateReportText>b__4
 * Demangled   : <CreateReportText>b__4
 * Prototype   : byte * <CreateReportText>b__4(byte * si, uint * param_2)
 * Local Vars  : uStack_18, pbStack_10, auStack_8, uStack_4, pcVar1, uVar2, iVar3, uVar4, puVar5, bVar6, cVar7, bVar8, bVar9, bVar10, bVar11, in_EAX, uVar12, pcVar13, piVar14, pbVar15, pcVar16, pbVar17, pbVar18, pbVar19, si, pbVar20, uVar21, uVar22, iVar23, extraout_ECX, extraout_ECX_00, uVar24, bVar25, puVar26, uVar27, cVar28, unaff_EBX, pbVar29, cVar30, cVar31, bVar32, uVar33, puVar34, puVar35, piVar36, piVar37, puVar38, puVar39, puVar40, param_2, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, unaff_EBP, pbVar54, unaff_ESI, puVar55, puVar56, pbVar57, unaff_EDI, puVar58, in_ES, in_CS, in_SS, uVar59, in_DS, uVar60, in_CF, bVar61, in_AF, in_TF, in_IF, bVar62, bVar63, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar64, unaff_retaddr
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

byte * __fastcall <CreateReportText>b__4(byte *si,uint *param_2)

{
  code *pcVar1;
  undefined6 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *in_EAX;
  undefined3 uVar21;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint3 uVar22;
  byte *pbVar20;
  int iVar23;
  byte *extraout_ECX;
  undefined3 uVar24;
  byte *extraout_ECX_00;
  byte bVar25;
  undefined1 *puVar26;
  undefined1 uVar27;
  char cVar28;
  char cVar30;
  byte bVar32;
  byte *unaff_EBX;
  char cVar31;
  byte *pbVar29;
  undefined2 uVar33;
  undefined4 *puVar34;
  undefined2 *puVar35;
  int *piVar36;
  int *piVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined2 *puVar40;
  undefined4 *puVar41;
  undefined2 *puVar42;
  undefined1 *puVar43;
  undefined2 *puVar44;
  undefined2 *puVar45;
  undefined4 *puVar46;
  undefined2 *puVar47;
  undefined2 *puVar48;
  undefined2 *puVar49;
  undefined2 *puVar50;
  undefined1 *puVar51;
  undefined2 *puVar52;
  undefined1 *puVar53;
  byte *unaff_EBP;
  byte *pbVar54;
  byte *unaff_ESI;
  uint *puVar55;
  uint *puVar56;
  byte *pbVar57;
  uint *unaff_EDI;
  uint *puVar58;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 uVar59;
  undefined2 in_DS;
  undefined2 uVar60;
  undefined1 in_CF;
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
  uint unaff_retaddr;
  undefined4 uStack_18;
  byte *pbStack_10;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  bVar62 = false;
code_r0x00403404:
                    /* .NET CLR Managed Code */
  cVar30 = (char)((uint)unaff_EBX >> 8);
  pbVar17 = in_EAX;
  pbVar15 = unaff_ESI;
  if (!(bool)in_CF) {
    bVar6 = (byte)in_EAX;
    *unaff_ESI = *unaff_ESI + bVar6;
    cVar7 = (char)param_2 - *unaff_EBX;
    pbVar57 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar7);
    *pbVar57 = *pbVar57 ^ bVar6;
    *unaff_EBX = *unaff_EBX + cVar7;
    *in_EAX = *in_EAX + bVar6;
    *(char *)((int)in_EAX * 2) = *(char *)((int)in_EAX * 2) + cVar7;
    *si = *si + cVar7;
    pbVar57[0xa0a0000] = pbVar57[0xa0a0000] - (char)((uint)in_EAX >> 8);
    uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_ES);
    unaff_EBP = uStack_4;
    si = (byte *)CONCAT22((short)((uint)si >> 0x10),
                          CONCAT11((char)((uint)si >> 8) + *in_EAX,(char)si));
    *in_EAX = *in_EAX + bVar6;
    uStack_4 = (byte *)((uint)uStack_4._2_2_ << 0x10);
    pbVar15 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)pbVar57);
    iVar23 = CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + *unaff_EBX) + 0x6128;
    bVar25 = (char)iVar23 + *(char *)((int)unaff_EDI * 2 + 0x400003e);
    pbVar17 = (byte *)CONCAT31((int3)((uint)iVar23 >> 8),bVar25);
    cVar7 = (char)(pbVar57 + 1) - *unaff_EBX;
    param_2 = (uint *)CONCAT31((int3)((uint)(pbVar57 + 1) >> 8),cVar7);
    pbRam2a0a0000 = in_EAX;
    *(byte *)param_2 = (byte)*param_2 ^ bVar25;
    *pbVar17 = *pbVar17 + cVar30;
    *pbVar17 = *pbVar17 + bVar25;
    *si = *si + cVar7;
    bVar6 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar25;
    *(byte **)(unaff_EBX + -0x41) =
         pbVar15 + (uint)CARRY1(bVar6,bVar25) + *(int *)(unaff_EBX + -0x41);
  }
  *pbVar17 = *pbVar17 + (byte)pbVar17;
  uVar60 = (undefined2)(unaff_retaddr >> 0x10);
  uVar21 = (undefined3)((uint)pbVar17 >> 8);
  bVar6 = (byte)pbVar17 | *pbVar15;
  uVar59 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar27 = SUB41(unaff_EBX,0);
  cVar30 = cVar30 + unaff_EBX[0x69];
  *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
  cVar7 = bVar6 + 0x7d;
  pcVar13 = (char *)CONCAT31(uVar21,cVar7);
  pbVar15[(int)pcVar13] = pbVar15[(int)pcVar13] + cVar7;
  cVar30 = cVar30 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar30,uVar27)) + 0x67);
  *pcVar13 = *pcVar13 + cVar7;
  pcVar13 = (char *)CONCAT31(uVar21,bVar6 - 6);
  puVar55 = (uint *)(pbVar15 + 4);
  out(*(undefined4 *)pbVar15,(short)param_2);
  *pcVar13 = *pcVar13 + (bVar6 - 6);
  cVar30 = cVar30 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar30,uVar27)) + 0x6b);
  *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
  pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x7d);
  pbVar15 = (byte *)((int)puVar55 + (int)pcVar13);
  *pbVar15 = *pbVar15 + bVar6 + 0x7d;
  cVar30 = cVar30 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar30,uVar27)) + 0x6a);
  unaff_EBX = (byte *)CONCAT22(uVar59,CONCAT11(cVar30,uVar27));
  puVar58 = param_2;
  while( true ) {
    cVar7 = (char)pcVar13;
    *pcVar13 = *pcVar13 + cVar7;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    bVar6 = cVar7 + 0x7d;
    pcVar16 = (char *)CONCAT31(uVar21,bVar6);
    *(byte *)((int)puVar55 + (int)pcVar16) = *(byte *)((int)puVar55 + (int)pcVar16) + bVar6;
    bVar25 = (char)puVar58 - *(byte *)((int)puVar58 + 0x457e02);
    param_2 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar25);
    unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar6;
    uVar12 = *puVar55;
    uVar4 = *puVar55;
    *(byte *)puVar55 = (byte)*puVar55 + bVar6;
    if (CARRY1((byte)uVar12,bVar6)) break;
    pcVar13 = pcVar16;
    puVar58 = param_2;
    if (SCARRY1((byte)uVar4,bVar6) != (char)(byte)*puVar55 < '\0') goto code_r0x004033f4;
  }
  *pcVar16 = *pcVar16 + bVar6;
  bVar6 = bVar6 | pcVar16[0x4000045];
  piVar14 = (int *)CONCAT31(uVar21,bVar6);
  if ((char)bVar6 < '\x01') {
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    goto code_r0x004034a0;
  }
  *(byte *)piVar14 = (char)*piVar14 + bVar6;
  bVar6 = bVar6 + 0x6f;
  pcVar16 = (char *)CONCAT31(uVar21,bVar6);
  *pcVar16 = *pcVar16 + bVar6;
  unaff_EBP = unaff_EBP + -*param_2;
  *pcVar16 = *pcVar16 + bVar6;
  *unaff_EBX = *unaff_EBX + bVar25;
  *(byte *)((int)pcVar16 * 2) = *(byte *)((int)pcVar16 * 2) ^ bVar6;
  in_AF = 9 < (bVar6 & 0xf) | in_AF;
  uVar12 = CONCAT31(uVar21,bVar6 + in_AF * '\x06') & 0xffffff0f;
  cVar7 = (char)uVar12;
  pcVar13 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                             CONCAT11((char)((uint)pcVar13 >> 8) + in_AF,cVar7));
  *pcVar13 = *pcVar13 + cVar7;
  cRam72110000 = cRam72110000 + bVar25;
  puVar52 = (undefined2 *)segment(in_SS,(short)auStack_8 + -2);
  *puVar52 = in_ES;
  pcVar13[0x1a] = pcVar13[0x1a] + (char)((uint)puVar58 >> 8);
  cVar7 = (char)si;
  *si = *si + cVar7;
  *param_2 = (uint)(si + *param_2);
  cVar30 = cVar30 + unaff_EBX[0x70];
  *si = *si + cVar7;
  uVar21 = (undefined3)((uint)si >> 8);
  bVar6 = cVar7 + 0xa2;
  cVar30 = cVar30 + *(char *)(CONCAT22(uVar59,CONCAT11(cVar30,uVar27)) + 0x6f);
  unaff_EBX = (byte *)CONCAT22(uVar59,CONCAT11(cVar30,uVar27));
  *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
  bVar8 = cVar7 + 0x44;
  piVar14 = (int *)CONCAT31(uVar21,bVar8);
  *(byte *)param_2 = ((byte)*param_2 - bVar8) - (0x5d < bVar6);
  if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
    *(byte *)piVar14 = (char)*piVar14 + bVar8;
    *(byte *)piVar14 = (char)*piVar14 + bVar8;
    *(char *)piVar14 = (char)*piVar14 + cVar30;
    param_2 = (uint *)CONCAT22((short)((uint)puVar58 >> 0x10),(ushort)bVar25);
    *(byte *)piVar14 = (char)*piVar14 + bVar8;
    si = (byte *)CONCAT22((short)((uint)si >> 0x10),
                          CONCAT11((char)((uint)si >> 8) + (char)*piVar14,cVar7));
    in_SS = in_ES;
    pbVar15 = unaff_EBX;
    goto code_r0x00403511;
  }
  *(byte *)piVar14 = (char)*piVar14 + bVar8;
  cVar7 = cVar7 + -0x1a;
  piVar14 = (int *)CONCAT31(uVar21,cVar7);
  pbVar15 = (byte *)((unaff_retaddr >> 0x10) << 0x10);
  *param_2 = (*param_2 - (int)piVar14) - (uint)(0x5d < bVar8);
  if ((POPCOUNT(*param_2 & 0xff) & 1U) != 0) {
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    in_SS = in_ES;
    goto code_r0x004034f3;
  }
  *(char *)piVar14 = (char)*piVar14 + cVar7;
  in_SS = in_ES;
code_r0x0040349e:
  uVar60 = (undefined2)((uint)pbVar15 >> 0x10);
  piVar14 = (int *)CONCAT31((int3)((uint)piVar14 >> 8),(char)piVar14 + -0x5e);
code_r0x004034a0:
  uStack_4 = (byte *)((uint)uStack_4._2_2_ << 0x10);
  si[0x2a0a0000] = si[0x2a0a0000] - (char)si;
  si = (byte *)CONCAT22((short)((uint)si >> 0x10),
                        CONCAT11((char)((uint)si >> 8) + (char)*piVar14,(char)si));
  bVar6 = (byte)piVar14;
  *(byte *)piVar14 = (char)*piVar14 + bVar6;
  pbVar15 = (byte *)CONCAT22(uVar60,in_ES);
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                             (char)param_2 - *(byte *)((int)param_2 + 0x467e02));
  unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar6;
  uVar12 = *puVar55;
  *(byte *)puVar55 = (byte)*puVar55 + bVar6;
  if (!CARRY1((byte)uVar12,bVar6)) {
    pbVar17 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
    *pbVar17 = *pbVar17 + bVar6;
    goto code_r0x004034f3;
  }
  *(byte *)piVar14 = (char)*piVar14 + bVar6;
  uVar21 = (undefined3)((uint)piVar14 >> 8);
  bVar6 = bVar6 | *(byte *)((int)piVar14 + 0x4000046);
  piVar14 = (int *)CONCAT31(uVar21,bVar6);
  if ((char)bVar6 < '\x01') {
code_r0x00403511:
    unaff_EBP = pbVar15;
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    pbVar15 = (byte *)((uint)unaff_EBP & 0xffff0000);
    goto code_r0x004034f3;
  }
  *(byte *)piVar14 = (char)*piVar14 + bVar6;
  pbVar17 = (byte *)CONCAT31(uVar21,bVar6 + 0x6f);
  *pbVar17 = *pbVar17 + bVar6 + 0x6f;
  unaff_EBP = unaff_EBP + -*param_2;
  in_SS = in_ES;
  do {
    uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_DS);
    bVar6 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar17 = *pbVar17 + (byte)pbVar17;
    si = (byte *)CONCAT22((short)((uint)si >> 0x10),
                          CONCAT11((char)((uint)si >> 8) + bVar6 | (byte)*param_2,(char)si));
    uVar21 = (undefined3)((uint)pbVar17 >> 8);
    bVar6 = (byte)pbVar17 | (byte)*param_2;
    bVar25 = bVar6 - *(byte *)CONCAT31(uVar21,bVar6);
    puVar55 = (uint *)((int)puVar55 +
                      (uint)(bVar6 < *(byte *)CONCAT31(uVar21,bVar6)) +
                      *(int *)CONCAT31(uVar21,bVar25));
    pbVar17 = (byte *)CONCAT31(uVar21,bVar25);
    *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
    *(byte *)puVar55 = (byte)*puVar55 + (char)param_2;
    bVar6 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar25;
    *param_2 = (uint)(pbVar17 + (uint)CARRY1(bVar6,bVar25) + *param_2);
    if ((POPCOUNT(*param_2 & 0xff) & 1U) != 0) {
      *(byte *)puVar55 = (byte)*puVar55 + 1;
      puVar58 = puVar55;
      goto code_r0x00403529;
    }
    *pbVar17 = *pbVar17 + bVar25;
    piVar14 = (int *)CONCAT31(uVar21,bVar25 + 0x6f);
code_r0x004034f3:
    *piVar14 = (int)(*piVar14 + (int)piVar14);
    *(byte *)puVar55 = (byte)*puVar55 + (char)piVar14;
    unaff_EBP = unaff_EBP + 1;
    pcVar13 = (char *)((int)((uint)piVar14 | 8) + *(int *)((uint)piVar14 | 8));
    *pcVar13 = *pcVar13 + (char)pcVar13;
    piVar14 = (int *)(pcVar13 + 0x53000000);
    bVar6 = (byte)piVar14;
    *(byte *)piVar14 = (char)*piVar14 + bVar6;
    *unaff_EBX = *unaff_EBX + (char)param_2;
    *(byte *)piVar14 = (char)*piVar14 + bVar6;
    *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
    uVar12 = *puVar55;
    *(byte *)puVar55 = (byte)*puVar55 + bVar6;
    if (CARRY1((byte)uVar12,bVar6)) goto code_r0x0040349e;
    uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_ES);
    pcVar13[0x5300006f] = pcVar13[0x5300006f] + (char)((uint)param_2 >> 8);
    pcVar13 = pcVar13 + 0x53000001;
    bVar25 = (byte)pcVar13;
    bRam7e060000 = bVar6;
    *pcVar13 = *pcVar13 + bVar25;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar25 + 0x2d);
    puVar55[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar25) + puVar55[(int)unaff_EDI * 2]);
    puVar58 = puVar55;
code_r0x00403529:
    puVar55 = puVar58 + 1;
    out(*puVar58,(short)param_2);
    bVar6 = *pbVar17;
    bVar25 = (byte)pbVar17;
    *pbVar17 = *pbVar17 + bVar25;
  } while (!CARRY1(bVar6,bVar25));
  *pbVar17 = *pbVar17 + bVar25;
  uVar21 = (undefined3)((uint)pbVar17 >> 8);
  bVar25 = bVar25 | pbVar17[0x4000040];
  pcVar13 = (char *)CONCAT31(uVar21,bVar25);
  if ((char)bVar25 < '\x01') goto code_r0x00403579;
  *pcVar13 = *pcVar13 + bVar25;
  cVar30 = bVar25 + 10;
  pcVar13 = (char *)CONCAT31(uVar21,cVar30);
  puVar58 = puVar55;
  if (cVar30 == '\0' || SCARRY1(bVar25,'\n') != cVar30 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar6 = (byte)pcVar13;
  *pcVar13 = *pcVar13 + bVar6;
  piVar14 = (int *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar6 + 0x2d);
  puVar55[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + puVar55[(int)unaff_EDI * 2]);
  pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_ES);
code_r0x00403549:
  uVar12 = *puVar55;
  bVar6 = (byte)piVar14;
  *(byte *)puVar55 = (byte)*puVar55 + bVar6;
  if (!CARRY1((byte)uVar12,bVar6)) goto code_r0x004034f3;
  *(byte *)piVar14 = (char)*piVar14 + bVar6;
  uVar21 = (undefined3)((uint)piVar14 >> 8);
  bVar6 = bVar6 | *(byte *)((int)piVar14 + 0x4000041);
  if ((char)bVar6 < '\x01') {
    *(byte *)param_2 = (byte)*param_2 + (char)si;
    *(byte *)param_2 = (byte)*param_2;
    pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x7e);
    param_2 = (uint *)((int)param_2 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
  piVar14 = (int *)CONCAT31(uVar21,bVar6 + 0xb);
  puVar58 = puVar55;
code_r0x0040355b:
  unaff_EBP = unaff_EBP + -*(int *)((int)puVar58 + 2);
  *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
  uVar12 = *puVar58;
  bVar6 = (byte)piVar14;
  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
  if (CARRY1((byte)uVar12,bVar6)) goto code_r0x00403548;
code_r0x00403565:
  piVar14 = piVar14 + 0x1ec09c00;
  pbVar17 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
  *pbVar17 = *pbVar17 + (char)piVar14;
  *(byte *)puVar58 = (byte)*puVar58 + (char)piVar14 + (char)*piVar14;
  puVar55 = puVar58 + 1;
  out(*puVar58,(short)param_2);
  pcVar13 = (char *)CONCAT31((int3)((uint)piVar14 >> 8),uRam8c0a0000);
code_r0x00403579:
  *si = *si + (char)pcVar13;
  *(byte *)param_2 = (byte)*param_2 - (char)((uint)pcVar13 >> 8);
  puVar58 = puVar55;
code_r0x00403580:
  *(byte *)param_2 = (byte)*param_2 + (char)si;
  puVar55 = puVar58 + 1;
  out(*puVar58,(short)param_2);
  bVar6 = (byte)pcVar13;
  param_2 = (uint *)((int)param_2 + 1);
  bRam7e060000 = bVar6;
  *pcVar13 = *pcVar13 + bVar6;
  uVar21 = (undefined3)((uint)pcVar13 >> 8);
  bVar25 = bVar6 + 0x2d;
  pcVar13 = (char *)CONCAT31(uVar21,bVar25);
  puVar55[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + puVar55[(int)unaff_EDI * 2]);
  pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_ES);
  uVar12 = *puVar55;
  *(byte *)puVar55 = (byte)*puVar55 + bVar25;
  if (!CARRY1((byte)uVar12,bVar25)) {
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar58 + 0x45),(char)unaff_EBX));
    goto code_r0x0040353f;
  }
  *pcVar13 = *pcVar13 + bVar25;
  bVar25 = bVar25 | pcVar13[0x4000042];
  pcVar13 = (char *)CONCAT31(uVar21,bVar25);
  if ('\0' < (char)bVar25) {
code_r0x004035a1:
    bVar25 = (byte)pcVar13;
    *pcVar13 = *pcVar13 + bVar25;
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    bVar6 = bVar25 + 10;
    if (bVar6 == 0 || SCARRY1(bVar25,'\n') != (char)bVar6 < '\0') {
      pcVar13 = (char *)CONCAT31(uVar21,bVar25 + 8 + (0xf5 < bVar25));
code_r0x004035e5:
      bVar25 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar25;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar6 = bVar25 + 0x2d;
      pcVar13 = (char *)CONCAT31(uVar21,bVar6);
      puVar55[(int)unaff_EDI * 2] =
           (uint)((int)param_2 + (uint)(0xd2 < bVar25) + puVar55[(int)unaff_EDI * 2]);
      uVar12 = *puVar55;
      *(byte *)puVar55 = (byte)*puVar55 + bVar6;
      if (CARRY1((byte)uVar12,bVar6)) {
        *pcVar13 = *pcVar13 + bVar6;
        bVar6 = bVar6 | pcVar13[0x4000044];
        pbVar15 = (byte *)CONCAT31(uVar21,bVar6);
        if ('\0' < (char)bVar6) {
          *pbVar15 = *pbVar15 + bVar6;
          pbVar15 = (byte *)(CONCAT31(uVar21,bVar6 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar6));
          pbRam2a060000 = pbVar15;
          *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
          *(byte *)param_2 = (byte)*param_2 ^ (byte)pbVar15;
          *pbVar15 = *pbVar15 + (char)((uint)si >> 8);
          *pbVar15 = *pbVar15 + (byte)pbVar15;
          puVar58 = unaff_EDI;
          in_SS = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      si = (byte *)CONCAT31((int3)((uint)si >> 8),
                            (byte)si | *(byte *)((int)(param_2 + 0xa004000) + (int)unaff_EDI));
      puVar58 = puVar55;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
    bVar25 = bVar25 + 0x37;
    piVar14 = (int *)CONCAT31(uVar21,bVar25);
    puVar55[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar6) + puVar55[(int)unaff_EDI * 2]);
    pbStack_10 = (byte *)CONCAT22(pbStack_10._2_2_,in_ES);
    uVar12 = *puVar55;
    *(byte *)puVar55 = (byte)*puVar55 + bVar25;
    puVar58 = puVar55;
    if (!CARRY1((byte)uVar12,bVar25)) goto code_r0x0040355b;
    *(byte *)piVar14 = (char)*piVar14 + bVar25;
    bVar25 = bVar25 | *(byte *)((int)piVar14 + 0x4000043);
    pbVar17 = (byte *)CONCAT31(uVar21,bVar25);
    if ((char)bVar25 < '\x01') {
      *pbVar17 = *pbVar17 + bVar25;
      unaff_EBP = unaff_EBP + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar17 = *pbVar17 + bVar25;
      uStack_18 = (undefined4 *)((uint)uStack_18._2_2_ << 0x10);
      piVar14 = (int *)CONCAT31(uVar21,bVar25 - *pbVar17);
      puVar55 = (uint *)((int)puVar55 + (-(uint)(bVar25 < *pbVar17) - *piVar14));
      pbVar15 = (byte *)CONCAT31(uVar21,(bVar25 - *pbVar17) + (char)*piVar14);
      pbStack_10 = (byte *)0x17000000;
      puVar58 = unaff_EDI;
code_r0x00403615:
      bVar6 = *pbVar15;
      bVar25 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar25;
      *param_2 = (uint)(pbVar15 + (uint)CARRY1(bVar6,bVar25) + *param_2);
      unaff_EDI = puVar58;
      if ((POPCOUNT(*param_2 & 0xff) & 1U) == 0) {
        *pbVar15 = *pbVar15 + bVar25;
        pcVar13 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar25 + 0x28);
        unaff_EDI = puVar58 + 1;
        uVar12 = in((short)param_2);
        *puVar58 = uVar12;
        *pcVar13 = *pcVar13 + bVar25 + 0x28;
        si = (byte *)CONCAT22((short)((uint)si >> 0x10),
                              CONCAT11((byte)((uint)si >> 8) | unaff_EBX[(int)si],(char)si));
        pcVar13[0x28] = pcVar13[0x28] + (char)((uint)param_2 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar17 = *pbVar17 + bVar25;
    uVar12 = CONCAT31(uVar21,bVar25 + 0xb);
    piVar14 = (int *)(uVar12 - *puVar55);
    if (uVar12 < *puVar55) {
      cVar30 = (char)piVar14;
      *(char *)piVar14 = (char)*piVar14 + cVar30;
      uVar59 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar7 = (char)unaff_EBX;
      bVar6 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 2);
      *unaff_EBP = *unaff_EBP - cVar7;
      *(byte *)puVar55 = (byte)*puVar55 + cVar30;
      uStack_18 = (undefined4 *)CONCAT22(uStack_18._2_2_,in_ES);
      unaff_EBX = (byte *)CONCAT22(uVar59,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar59,CONCAT11(bVar6,
                                                  cVar7)) + 0x38),cVar7));
      *(char *)piVar14 = (char)*piVar14 + cVar30;
      pcVar13 = (char *)CONCAT31((int3)((uint)piVar14 >> 8),cVar30 + 'o');
      *(byte *)param_2 = (byte)*param_2 + (char)si;
      *pcVar13 = *pcVar13 - cVar7;
      *pcVar13 = *pcVar13 + cVar30 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - puVar55[0x11]);
      goto code_r0x004035e5;
    }
    puVar58 = puVar55 + 1;
    out(*puVar55,(short)param_2);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar25) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_10 & 0x4000) != 0;
  bVar62 = ((uint)pbStack_10 & 0x400) != 0;
  in_IF = ((uint)pbStack_10 & 0x200) != 0;
  in_TF = ((uint)pbStack_10 & 0x100) != 0;
  in_AF = ((uint)pbStack_10 & 0x10) != 0;
  in_ID = ((uint)pbStack_10 & 0x200000) != 0;
  in_AC = ((uint)pbStack_10 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar30 = (char)pcVar13;
  *pcVar13 = *pcVar13 + cVar30;
  si = (byte *)CONCAT22((short)((uint)si >> 0x10),
                        CONCAT11((byte)((uint)si >> 8) | (byte)*param_2,(char)si));
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3e],
                                        (char)unaff_EBX));
  *pcVar13 = *pcVar13 + cVar30;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar30 + '(');
  cVar30 = (char)((uint)param_2 >> 8);
  *(byte *)((int)param_2 + 0x21) = *(byte *)((int)param_2 + 0x21) + cVar30;
  pbVar17 = pbVar15 + 2;
  *pbVar17 = *pbVar17 + cVar30;
  bVar6 = *pbVar17;
code_r0x00403643:
  cVar30 = (char)pbVar15;
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *pbVar15 = *pbVar15 + cVar30;
    uVar21 = (undefined3)((uint)pbVar15 >> 8);
    cVar7 = cVar30 + '(';
    pcVar13 = (char *)CONCAT31(uVar21,cVar7);
    in_AF = ((uint)pbVar15 & 0x1000) != 0;
    *pcVar13 = *pcVar13 + cVar7;
    puVar58 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar55);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar55 + 0x3f),(char)unaff_EBX));
    *pcVar13 = *pcVar13 + cVar7;
    pbVar15 = (byte *)CONCAT31(uVar21,cVar30 + 'M');
    param_2 = (uint *)((uint)puVar58 | *puVar58);
    *pbVar15 = *pbVar15 + (char)((uint)si >> 8);
code_r0x00403659:
    puVar58 = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
    bVar6 = (byte)pbVar15;
    *(byte *)unaff_EDI = bVar6;
    *pbVar15 = *pbVar15 + bVar6;
    uVar21 = (undefined3)((uint)pbVar15 >> 8);
    bVar6 = bVar6 | (byte)*param_2;
    pcVar13 = (char *)CONCAT31(uVar21,bVar6);
    unaff_EDI = puVar58;
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x0040369e;
    *pcVar13 = *pcVar13 + bVar6;
    bVar6 = bVar6 + 2;
    *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
    *(byte *)puVar55 = (byte)*puVar55 + bVar6;
    puVar56 = puVar55 + (uint)bVar62 * -2 + 1;
    out(*puVar55,(short)param_2);
    unaff_EDI = (uint *)((int)puVar58 + (uint)bVar62 * -2 + 1);
    puVar55 = (uint *)((int)puVar56 + (uint)bVar62 * -2 + 1);
    *(byte *)puVar58 = (byte)*puVar56;
    *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
    cVar7 = (char)((uint)si >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar7;
    cVar30 = (bVar6 | (byte)*puVar55) - 6;
    piVar14 = (int *)CONCAT31(uVar21,cVar30);
    pcVar13 = (char *)((int)piVar14 * 2 + 0x2adc0a00);
    *pcVar13 = *pcVar13 - cVar7;
    *piVar14 = (int)(*piVar14 + (int)param_2);
    *(char *)piVar14 = (char)*piVar14 + cVar30;
    bVar6 = cVar30 + (char)*piVar14;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar12 = CONCAT31(uVar21,bVar6 + in_AF * '\x06') & 0xffffff0f;
    pbVar15 = (byte *)CONCAT22((short)(uVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) + in_AF,(char)uVar12));
    pbVar17 = si;
  }
  else {
    *(byte *)param_2 = (byte)*param_2 + cVar30;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)param_2 >> 8);
    pbVar17 = si;
  }
  *(byte *)puVar55 = (byte)*puVar55 + (char)((uint)pbVar15 >> 8);
  *(byte *)param_2 = (byte)*param_2 + (char)pbVar17;
  bVar25 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar25;
  bVar6 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar25;
  si = pbVar17;
  unaff_EBP = pbStack_10;
  if (!CARRY1(bVar6,bVar25)) goto code_r0x004036a6;
  *pbVar15 = *pbVar15 + bVar25;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar25 | pbVar15[0x400003f]);
  si = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),
                        (char)pbVar17 - *(byte *)((int)param_2 + 0x5040302));
  *(char *)((int)pbVar15 * 2) = *(char *)((int)pbVar15 * 2) - (char)((uint)pbVar17 >> 8);
  while( true ) {
code_r0x004036a6:
    si = (byte *)CONCAT31((int3)((uint)si >> 8),(char)si + (byte)*puVar55);
    pbVar15 = (byte *)(CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + '%') + 0x1ebd9f3);
    uStack_18 = (undefined4 *)CONCAT22(uStack_18._2_2_,in_ES);
    bVar6 = (byte)pbVar15;
    bVar61 = CARRY1(*pbVar15,bVar6);
    *pbVar15 = *pbVar15 + bVar6;
    puVar34 = uStack_18 + -1;
    *(undefined2 *)(uStack_18 + -1) = in_ES;
    cVar30 = (char)param_2;
    if (bVar61) {
      *pbVar15 = *pbVar15 + bVar6;
      uVar59 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar8 = (byte)((uint)unaff_EBX >> 8) | unaff_EBP[0x47];
      pcVar13 = (char *)CONCAT22(uVar59,CONCAT11(bVar8,(char)unaff_EBX));
      *pbVar15 = *pbVar15 + bVar6;
      uVar21 = (undefined3)((uint)pbVar15 >> 8);
      bVar6 = bVar6 + 0x2a;
      *pcVar13 = *pcVar13 + cVar30;
      pbVar15 = (byte *)((int)CONCAT31(uVar21,bVar6) * 2);
      *pbVar15 = *pbVar15 ^ bVar6;
      bVar6 = bVar6 ^ *(byte *)CONCAT31(uVar21,bVar6);
      pbVar15 = (byte *)CONCAT31(uVar21,bVar6);
      bVar25 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar6;
      *pbVar15 = (*pbVar15 - bVar6) - CARRY1(bVar25,bVar6);
      *si = *si + cVar30;
      unaff_EBX = (byte *)CONCAT22(uVar59,CONCAT11(bVar8 + pcVar13[0x38],(char)unaff_EBX));
      *pbVar15 = *pbVar15 + bVar6;
      cVar7 = bVar6 + 2;
      if ((POPCOUNT(cVar7) & 1U) != 0) {
        pcVar1 = (code *)swi(7);
        uVar64 = (*pcVar1)();
        pbVar15 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar21,cVar7) = *(char *)CONCAT31(uVar21,cVar7) + cVar7;
      bVar6 = bVar6 + 0x71;
      pbVar15 = (byte *)CONCAT31(uVar21,bVar6);
      in_SS = *(undefined2 *)(uStack_18 + -1);
      *pbVar15 = *pbVar15 + bVar6;
      iVar23 = (int)si - *param_2;
      si = (byte *)CONCAT22((short)((uint)iVar23 >> 0x10),
                            CONCAT11((char)((uint)iVar23 >> 8) + *pbVar15,(char)iVar23));
      unaff_EBP = (byte *)*uStack_18;
      bVar61 = CARRY1(*pbVar15,bVar6);
      *pbVar15 = *pbVar15 + bVar6;
      *(undefined2 *)uStack_18 = in_ES;
      *(undefined2 *)(uStack_18 + -1) = in_ES;
    }
    bVar6 = (byte)pbVar15;
    uVar21 = (undefined3)((uint)pbVar15 >> 8);
    if (bVar61) break;
    *(byte *)param_2 = (byte)*param_2 + (byte)si;
    *(byte *)((int)param_2 + (int)unaff_EBP) = *(byte *)((int)param_2 + (int)unaff_EBP) + bVar6;
    pcVar13 = (char *)CONCAT31(uVar21,(byte)*param_2);
code_r0x0040369e:
    pbVar15 = (byte *)(pcVar13 + *(int *)(pcVar13 + 0x6c28));
  }
  *pbVar15 = *pbVar15 + bVar6;
  uVar22 = (uint3)((uint)si >> 8);
  pbVar17 = (byte *)CONCAT31(uVar22,(byte)si | *unaff_EBX);
  in_SS = *(undefined2 *)uStack_18;
  puVar34 = uStack_18 + 1;
  puVar58 = puVar55 + (uint)bVar62 * -2 + 1;
  out(*puVar55,(short)param_2);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
  *pbVar15 = *pbVar15 + bVar6;
  bVar6 = bVar6 | (byte)*unaff_EDI;
  pbVar15 = (byte *)CONCAT31(uVar21,bVar6);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)si >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar6);
  *(undefined2 *)uStack_18 = pbStack_10._0_2_;
  cVar28 = (char)unaff_EBX;
  cVar7 = cVar28 - (byte)*param_2;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7);
  if (cVar7 != '\0' && (char)(byte)*param_2 <= cVar28) {
    *pbVar15 = *pbVar15 + bVar6;
    iVar23 = CONCAT31(uVar21,bVar6 + 0x2a);
    puVar55 = (uint *)((int)puVar58 + 1);
    cVar7 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x7b);
    uVar64 = CONCAT44(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar7,cVar30)),iVar23);
    in_ES = *(undefined2 *)uStack_18;
    pcVar13 = (char *)(iVar23 + 0x6f);
    *pcVar13 = *pcVar13 + cVar7;
    pbVar17 = (byte *)((uint)uVar22 << 8);
    do {
      piVar14 = (int *)((ulonglong)uVar64 >> 0x20);
      pcVar13 = (char *)uVar64;
      *(char *)piVar14 = (char)*piVar14;
      if ((char)*piVar14 == '\0') {
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        pbStack_10._0_2_ = in_ES;
_ctor:
        param_2 = (uint *)((ulonglong)uVar64 >> 0x20);
        pbVar17 = (byte *)((uint)CONCAT21((short)((uint)pbVar17 >> 0x10),
                                          (char)((uint)pbVar17 >> 8) + *(char *)uVar64) << 8);
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        *(byte *)param_2 = (byte)*param_2;
        uVar21 = (undefined3)((ulonglong)uVar64 >> 8);
        bVar25 = (char)uVar64 - *(char *)uVar64;
        pbVar15 = (byte *)CONCAT31(uVar21,bVar25);
        bVar6 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar25;
        puVar58 = (uint *)((int)puVar55 + (uint)CARRY1(bVar6,bVar25) + *(int *)pbVar15);
        pbVar15 = (byte *)CONCAT31(uVar21,bVar25);
        uStack_18 = puVar34;
        break;
      }
      *pcVar13 = *pcVar13 + (char)uVar64;
      *piVar14 = (int)(unaff_EBP + *piVar14);
      puVar55 = (uint *)((int)puVar55 + 1);
      uVar64 = CONCAT44(CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar64 >> 0x28) +
                                          *(char *)((int)piVar14 + -0x33),
                                          (char)((ulonglong)uVar64 >> 0x20))),pcVar13);
      in_ES = *(undefined2 *)puVar34;
      puVar34 = (undefined4 *)((int)puVar34 + 4);
      pbVar15 = pbVar17;
code_r0x0040371e:
      puVar58 = (uint *)((ulonglong)uVar64 >> 0x20);
      pbVar57 = (byte *)uVar64;
      bVar25 = (byte)((ulonglong)uVar64 >> 0x28);
      pbVar57[0x6f] = pbVar57[0x6f] + bVar25;
      pbVar17 = (byte *)((uint)pbVar15 & 0xffffff00);
      *(char *)puVar58 = (char)*puVar58;
      bVar6 = (byte)uVar64;
      if ((char)*puVar58 != '\0') {
        *pbVar57 = *pbVar57 + bVar6;
        uVar12 = *puVar58;
        *puVar58 = (uint)(unaff_EBP + *puVar58);
        piVar36 = (int *)((int)puVar34 + -4);
        *(uint **)((int)puVar34 + -4) = puVar55;
        if (CARRY4(uVar12,(uint)unaff_EBP)) {
          *pbVar57 = *pbVar57 + bVar6;
          *(undefined2 *)((int)puVar34 + -8) = in_ES;
          puVar56 = puVar58 + 0x1d028000;
          uVar12 = *puVar56;
          *(byte *)puVar56 = (byte)*puVar56 - bVar25;
          *(uint *)pbVar57 = (*(int *)pbVar57 - (int)pbVar57) - (uint)((byte)uVar12 < bVar25);
          *(byte *)puVar58 = (char)*puVar58 + bVar6;
          *unaff_EBP = *unaff_EBP;
          uVar64 = CONCAT44(puVar58,CONCAT31((int3)((ulonglong)uVar64 >> 8),bVar6 + 0x2a));
          puVar35 = (undefined2 *)((int)puVar34 + -0xc);
          puVar34 = (undefined4 *)((int)puVar34 + -0xc);
          *puVar35 = in_DS;
          pbStack_10._0_2_ = in_ES;
          goto _ctor;
        }
        bVar61 = false;
        pcVar13 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pbVar57);
        goto code_r0x004037a7;
      }
      bVar25 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar6;
      *(uint *)pbVar57 = (*(int *)pbVar57 - (int)pbVar57) - (uint)CARRY1(bVar25,bVar6);
      bVar6 = *pbVar17;
      bVar25 = (byte)((ulonglong)uVar64 >> 0x20);
      *pbVar17 = *pbVar17 + bVar25;
      if (CARRY1(bVar6,bVar25)) goto code_r0x0040375a;
    } while( true );
  }
  uVar64 = CONCAT44(param_2,pbVar15);
  puVar55 = puVar58 + (uint)bVar62 * -2 + 1;
  out(*puVar58,(short)param_2);
  bVar25 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar25;
  *pbVar17 = *pbVar17 + (char)unaff_EBX;
  bVar6 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar25;
  *(byte **)(unaff_EBX + -0x49) =
       (byte *)((int)puVar55 + (uint)CARRY1(bVar6,bVar25) + *(int *)(unaff_EBX + -0x49));
  puVar34 = uStack_18;
  in_ES = pbStack_10._0_2_;
code_r0x0040375a:
  pbVar15 = (byte *)uVar64;
  *pbVar15 = *pbVar15 + (char)uVar64;
  bVar61 = CARRY1((byte)((uint)pbVar17 >> 8),*pbVar15);
  *(undefined2 *)((int)puVar34 + -4) = in_SS;
  iVar23 = CONCAT31(0x1f0a00,bVar61 + 'o') + *(int *)(unaff_EBX + (int)unaff_EBP) +
           (uint)(0x90 < bVar61) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar64 >> 0x20);
  pcVar16 = (char *)(CONCAT31((int3)((uint)iVar23 >> 8),(char)iVar23 + -0x66) | *unaff_EDI);
  bVar6 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar13 = (char *)CONCAT22(0xd0a,(ushort)bVar6 << 8);
  *pcVar16 = *pcVar16 + (char)pcVar16;
  bVar25 = (byte)((ulonglong)uVar64 >> 0x20);
  puVar26 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | unaff_EBX[(int)unaff_EBP],bVar25))
  ;
  *pcVar13 = *pcVar13 + (char)pcVar16;
  *unaff_EBP = *unaff_EBP - bVar6;
  *puVar26 = *puVar26;
  pbVar15 = (byte *)(((uint)pcVar16 | 8) + 0x4490f9d8);
  bVar6 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar6;
  uVar12 = *puVar55;
  *(uint *)((int)puVar55 + (int)pbVar15) = *(uint *)((int)puVar55 + (int)pbVar15) ^ (uint)pcVar13;
  *pbVar15 = *pbVar15 | bVar6;
  piVar36 = (int *)0x2609fffc;
  bVar61 = false;
  uRam2609fffc = in_ES;
  *pbVar15 = *pbVar15 | bVar6;
  uVar64 = CONCAT44(CONCAT31((int3)((uint)puVar26 >> 8),bVar25 | (byte)uVar12),pbVar15);
code_r0x004037a7:
  while( true ) {
    pbVar15 = (byte *)((ulonglong)uVar64 >> 0x20);
    uVar59 = (undefined2)((ulonglong)uVar64 >> 0x20);
    out(*puVar55,uVar59);
    out(puVar55[(uint)bVar62 * -2 + 1],uVar59);
    puVar55 = (uint *)((int)unaff_EDI + (int)pbVar15);
    uVar12 = *puVar55;
    uVar4 = (uint)uVar64 + *puVar55;
    *puVar55 = uVar4 + bVar61;
    iVar23 = *piVar36 + *(int *)(pcVar13 + (int)pbVar15) +
             (uint)(CARRY4(uVar12,(uint)uVar64) || CARRY4(uVar4,(uint)bVar61));
    cVar30 = (char)iVar23 + '\t';
    pbVar17 = (byte *)CONCAT31((int3)((uint)iVar23 >> 8),cVar30);
    pcVar16 = (char *)((uint)bVar62 * -8 + 0x260a0004);
    out(uRam260a0000,uVar59);
    uVar59 = (undefined2)piVar36[1];
    *pbVar17 = *pbVar17 + cVar30;
    bVar25 = (byte)((uint)pcVar13 >> 8) | *pbVar15;
    *(undefined2 *)(piVar36 + 1) = in_DS;
    bVar6 = *pbVar17;
    pbVar17 = pbVar17 + (uint)CARRY1(bVar25,*pbVar17) + *(int *)pbVar17;
    *pbVar15 = *pbVar15 + 6;
    cVar7 = (char)unaff_EBX - *pcVar16;
    pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),CONCAT11(bVar25 + bVar6 + *pbVar17,6))
    ;
    *pbVar17 = *pbVar17;
    *(undefined2 *)piVar36 = in_ES;
    uVar21 = (undefined3)((uint)pbVar17 >> 8);
    cVar30 = (char)pbVar17 - *pbVar17;
    piVar14 = (int *)CONCAT31(uVar21,cVar30);
    puVar55 = (uint *)(pcVar16 + *piVar14);
    bVar6 = cVar30 + (char)*piVar14;
    pcVar16 = (char *)CONCAT31(uVar21,bVar6);
    piVar37 = piVar36 + -1;
    piVar36[-1] = (int)pcVar13;
    *pcVar16 = *pcVar16 + bVar6;
    *pcVar16 = *pcVar16 + bVar6;
    *pcVar16 = *pcVar16 + bVar6;
    bVar61 = CARRY1(*pbVar15,bVar6);
    *pbVar15 = *pbVar15 + bVar6;
    if (bVar61) break;
    in_ES = (undefined2)piVar36[-1];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7);
    uVar64 = CONCAT44(pbVar15,pcVar16);
  }
  *pcVar16 = *pcVar16 + bVar6;
  pbVar29 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar7));
  *pcVar16 = *pcVar16 + bVar6;
  bVar8 = bVar6 + 2;
  *pbVar29 = *pbVar29 - (char)((ulonglong)uVar64 >> 0x20);
  *(char *)CONCAT31(uVar21,bVar8) = *(char *)CONCAT31(uVar21,bVar8) + bVar8;
  uVar12 = *puVar55;
  uVar24 = (undefined3)((uint)pcVar13 >> 8);
  pbVar17 = (byte *)(CONCAT31(uVar24,(byte)uVar12) | 6);
  bVar25 = 9 < (bVar6 + 0x74 & 0xf) | in_AF;
  bVar9 = bVar6 + 0x74 + bVar25 * '\x06';
  bVar9 = bVar9 + (0x90 < (bVar9 & 0xf0) | 0x8d < bVar8 | bVar25 * (0xf9 < bVar9)) * '`';
  pbVar57 = (byte *)CONCAT31(uVar21,bVar9);
  bVar6 = *pbVar57;
  *pbVar57 = *pbVar57 + bVar9;
  if (!SCARRY1(bVar6,bVar9)) {
    *(byte *)puVar55 = (byte)*puVar55 + bVar9;
    puVar55 = (uint *)((int)puVar55 + *(int *)(pbVar15 + 0x33));
    *pbVar57 = *pbVar57 | bVar9;
    *(byte *)puVar55 = (byte)*puVar55 + bVar9;
    bVar6 = bVar9 + 0x72;
    piVar36[-2] = (int)pbVar29;
    *(byte *)CONCAT31(uVar21,bVar6) = *(byte *)CONCAT31(uVar21,bVar6) | bVar6;
    *(byte *)puVar55 = (byte)*puVar55 + bVar6;
    pbVar17 = (byte *)CONCAT31(uVar24,((byte)uVar12 | 6) + (byte)*puVar55);
    pcVar13 = (char *)CONCAT31(uVar21,bVar9 - 0x11);
    piVar37 = piVar36 + -3;
    piVar36[-3] = (int)pbVar17;
    *pcVar13 = *pcVar13 + (bVar9 - 0x11);
    pbVar57 = (byte *)CONCAT31(uVar21,bVar9 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar57 = *pbVar57 + (bVar9 - 0xf);
  }
code_r0x00403825:
  pbVar54 = (byte *)0x80a0000;
  uVar21 = (undefined3)((uint)pbVar57 >> 8);
  cVar30 = (char)pbVar57 + '\x7f';
  pcVar13 = (char *)CONCAT31(uVar21,cVar30);
  *(byte **)((int)piVar37 + -4) = pbVar29;
  *pcVar13 = *pcVar13 + cVar30;
  iVar23 = CONCAT31(uVar21,(char)pbVar57 + -0x7f) + 0x547d;
  cVar7 = (char)iVar23;
  uVar21 = (undefined3)((uint)iVar23 >> 8);
  cVar30 = cVar7 + '*';
  pcVar13 = (char *)CONCAT31(uVar21,cVar30);
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | (byte)*puVar55);
  cVar28 = (char)pbVar29 - (byte)*puVar55;
  uVar60 = (undefined2)((uint)pbVar29 >> 0x10);
  cVar31 = (char)((uint)pbVar29 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar29 >> 8),cVar28) + 0x57);
  *pcVar13 = *pcVar13 + cVar30;
  bVar6 = cVar7 + 0x54U & *pbVar15;
  iVar23 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
  pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x2a);
  *(undefined2 *)((int)piVar37 + -8) = in_DS;
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar31,cVar28)) + 0x58);
  *pcVar13 = *pcVar13 + bVar6 + 0x2a;
  bVar8 = bVar6 + 0x54 & *pbVar15;
  iVar3 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar21,bVar8) = *(char *)CONCAT31(uVar21,bVar8) + bVar8;
  pcVar13 = (char *)CONCAT31(uVar21,bVar8 + 0x2a);
  pbVar57 = *(byte **)((int)piVar37 + -8);
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar31,cVar28)) + 0x55);
  *pcVar13 = *pcVar13 + bVar8 + 0x2a;
  pcVar13 = (char *)CONCAT31(uVar21,bVar8 + 0x57);
  pbVar15 = pbVar15 + *(int *)pbVar57;
  *(undefined4 *)((int)piVar37 + -8) = 0x2a;
  cVar31 = cVar31 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar31,cVar28)) + 0x55);
  *pcVar13 = *pcVar13 + bVar8 + 0x57;
  cVar30 = bVar8 - 0x3a;
  pcVar13 = (char *)CONCAT31(uVar21,cVar30);
  *(undefined2 *)((int)piVar37 + -0xc) = uVar59;
  *pcVar13 = *pcVar13 + cVar30;
  bVar6 = *pbVar15;
  cVar7 = (char)pbVar17;
  *(undefined2 *)((int)piVar37 + -0x10) = in_DS;
  pbVar29 = (byte *)CONCAT22(uVar60,CONCAT11(cVar31 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar31,
                                                  cVar28)) + 0x59),cVar28));
  *pcVar13 = *pcVar13 + cVar30;
  bVar10 = bVar8 - 0x10 & *pbVar15;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar3 + iVar23);
  *(char *)CONCAT31(uVar21,bVar10) = *(char *)CONCAT31(uVar21,bVar10) + bVar10;
  bVar10 = bVar10 + 0x2a;
  pbVar19 = (byte *)CONCAT31(uVar21,bVar10);
  puVar34 = (undefined4 *)((int)piVar37 + -0x14);
  *(undefined2 *)((int)piVar37 + -0x14) = in_DS;
  bVar8 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar19 = *pbVar19 + bVar10;
  bVar9 = *pbVar15;
  puVar39 = (undefined4 *)((int)piVar37 + -0x18);
  *(undefined2 *)((int)piVar37 + -0x18) = in_DS;
  bVar11 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar19 = *pbVar19 + bVar10;
  pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar17 >> 8) | bVar6) + bVar8 | bVar9) +
                                      bVar11 | *pbVar15,cVar7));
  *pbVar29 = *pbVar29 + cVar28;
  *(byte *)((int)pbVar19 * 2) = *(byte *)((int)pbVar19 * 2) ^ bVar10;
  bVar6 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar10;
  bVar8 = *pbVar19;
  *pbVar17 = *pbVar17 + (char)pbVar15;
  bVar6 = ((bVar10 - bVar8) - CARRY1(bVar6,bVar10)) + *pbVar15;
  pbVar19 = (byte *)CONCAT31(uVar21,bVar6);
  if ((POPCOUNT(bVar6) & 1U) != 0) {
    pbVar15 = *(byte **)((int)piVar37 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar19 = *pbVar19 + bVar6;
  cVar30 = (bVar6 + 0x6f) - (0x90 < bVar6);
  pbVar18 = (byte *)CONCAT31(uVar21,cVar30);
  bVar6 = *pbVar15;
  *pbVar15 = *pbVar15 + cVar7;
  if (SCARRY1(bVar6,cVar7) == (char)*pbVar15 < '\0') {
    cRam33100000 = cRam33100000 - cVar30;
    cVar30 = cVar30 + *pbVar15;
    pbVar19 = (byte *)CONCAT31(uVar21,cVar30);
    puVar34 = (undefined4 *)((int)piVar37 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar18 = *pbVar18 + (char)pbVar18;
code_r0x004038b0:
    uVar21 = (undefined3)((uint)pbVar18 >> 8);
    cVar30 = (char)pbVar18 + '\x02';
    pbVar19 = (byte *)CONCAT31(uVar21,cVar30);
    puVar34 = puVar39;
    if ((POPCOUNT(cVar30) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar57);
      cVar30 = (char)pbVar19 + *pbVar15;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar30);
code_r0x0040390c:
      cVar7 = (char)pbVar19;
      if ((POPCOUNT(cVar30) & 1U) == 0) goto code_r0x0040390e;
      *pbVar57 = *pbVar57 + cVar7;
      goto code_r0x00403962;
    }
    *pbVar19 = *pbVar19 + cVar30;
    puVar34 = (undefined4 *)((int)puVar39 + -4);
    piVar37 = (int *)((int)puVar39 + -4);
    *(byte **)((int)puVar39 + -4) = pbVar17;
    cVar30 = (char)pbVar18 + '.' + *pbVar15;
    pbVar19 = (byte *)CONCAT31(uVar21,cVar30);
    if ((POPCOUNT(cVar30) & 1U) != 0) {
      pbVar18 = pbVar15 + (int)pbVar19;
      *pbVar18 = *pbVar18 + cVar30;
      bVar6 = *pbVar18;
      goto code_r0x00403912;
    }
    *pbVar19 = *pbVar19 + cVar30;
    bVar6 = cVar30 + 2;
    pbVar19 = (byte *)CONCAT31(uVar21,bVar6);
    puVar34 = (undefined4 *)((int)puVar39 + -4);
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403916;
    *pbVar19 = *pbVar19 + bVar6;
    cVar7 = cVar30 + 'q';
    piVar14 = (int *)CONCAT31(uVar21,cVar7);
    *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0x90 < bVar6);
    bVar6 = *pbVar29;
    bVar8 = (byte)((uint)pbVar17 >> 8);
    *pbVar29 = *pbVar29 + bVar8;
    if (!CARRY1(bVar6,bVar8)) {
      out(*(undefined4 *)pbVar57,(short)pbVar15);
      bVar6 = (cVar7 - (char)*piVar14) - CARRY1(bVar6,bVar8);
      *pbVar15 = *pbVar15 + (char)pbVar17;
      cVar30 = bVar6 - *(byte *)CONCAT31(uVar21,bVar6);
      puVar55 = (uint *)(pbVar57 +
                        ((((uint)bVar62 * -8 + 4) - *(int *)CONCAT31(uVar21,cVar30)) -
                        (uint)(bVar6 < *(byte *)CONCAT31(uVar21,bVar6))));
      pbVar57 = (byte *)CONCAT31(uVar21,cVar30);
      goto code_r0x00403825;
    }
    *(char *)piVar14 = (char)*piVar14 + cVar7;
    uVar60 = (undefined2)((uint)pbVar29 >> 0x10);
    bVar6 = (byte)((uint)pbVar29 >> 8) | bRam080a0056;
    *(char *)piVar14 = (char)*piVar14 + cVar7;
    pcVar13 = (char *)CONCAT31(uVar21,cVar30 + 's');
    pbVar29 = (byte *)CONCAT22(uVar60,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar60,CONCAT11(bVar6,(
                                                  char)pbVar29)) + 0x56),(char)pbVar29));
    *pcVar13 = *pcVar13 + cVar30 + 's';
    bVar6 = cVar30 - 0xf;
    pbVar15 = *(byte **)((int)puVar39 + -4);
    *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
    bVar8 = cVar30 + 0x1e;
    pbVar18 = (byte *)CONCAT31(uVar21,bVar8);
    *(byte **)(pbVar57 + (int)unaff_EDI * 8) =
         pbVar15 + (uint)(0xd2 < bVar6) + *(int *)(pbVar57 + (int)unaff_EDI * 8);
    puVar34 = (undefined4 *)((int)puVar39 + -4);
    puVar41 = (undefined4 *)((int)puVar39 + -4);
    *(undefined2 *)((int)puVar39 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar18;
    bVar6 = *pbVar57;
    *pbVar57 = *pbVar57 + bVar8;
    if (CARRY1(bVar6,bVar8)) {
      *pbVar18 = *pbVar18 + bVar8;
      pbVar19 = (byte *)CONCAT31(uVar21,bVar8 | pbVar18[0x400005a]);
      if ('\0' < (char)(bVar8 | pbVar18[0x400005a])) {
code_r0x004038f6:
        bVar6 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar6;
        uVar21 = (undefined3)((uint)pbVar19 >> 8);
        cVar30 = ((bVar6 + 0x28) - *(char *)CONCAT31(uVar21,bVar6 + 0x28)) - (0xd7 < bVar6);
        pbVar19 = (byte *)CONCAT31(uVar21,cVar30);
        bVar6 = *pbVar29;
        bVar8 = (byte)((uint)pbVar17 >> 8);
        *pbVar29 = *pbVar29 + bVar8;
        if (CARRY1(bVar6,bVar8)) {
          *pbVar19 = *pbVar19 + cVar30;
          pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar19,(char)pbVar17));
          *pbVar57 = *pbVar57 + cVar30;
          goto code_r0x00403908;
        }
        pbVar18 = pbVar19 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar21 = (undefined3)((uint)pbVar19 >> 8);
      bVar8 = (char)pbVar19 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar21,bVar8);
      *pbVar15 = *pbVar15 + (char)pbVar17;
      pbVar19 = (byte *)CONCAT31(uVar21,(bVar8 & bVar6) + *pbVar57);
      *pbVar17 = *pbVar17 - (char)((uint)pbVar15 >> 8);
      puVar46 = puVar41;
      goto code_r0x0040395a;
    }
    puVar38 = (undefined4 *)((int)puVar39 + -8);
    puVar39 = (undefined4 *)((int)puVar39 + -8);
    *puVar38 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar14 = (char)*piVar14 + bVar6;
  puVar55 = puVar58;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar19 = *pbVar19 + cVar7;
  bVar6 = cVar7 + 2;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar6);
code_r0x00403912:
  bVar61 = (POPCOUNT(bVar6) & 1U) == 0;
  puVar46 = puVar34;
  if (!bVar61) goto code_r0x00403967;
  *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x00403916:
  bVar11 = (char)pbVar19 + 0x6f;
  pbVar18 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar19 >> 8),bVar11);
  bVar9 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar11;
  bVar8 = *pbVar18;
  bVar6 = *pbVar18;
  puVar46 = (undefined4 *)((int)puVar34 + -4);
  *(undefined2 *)((int)puVar34 + -4) = in_ES;
  if (bVar6 == 0 || SCARRY1(bVar9,bVar11) != (char)bVar8 < '\0') goto code_r0x00403979;
  *pbVar18 = *pbVar18 + bVar11;
  pbVar18 = (byte *)CONCAT31((int3)(char)((uint)pbVar19 >> 8),(char)pbVar19 + -100);
  *(byte **)(pbVar57 + (int)unaff_EDI * 8) =
       pbVar15 + (uint)(0xd2 < bVar11) + *(int *)(pbVar57 + (int)unaff_EDI * 8);
  puVar40 = (undefined2 *)((int)puVar34 + -8);
  puVar34 = (undefined4 *)((int)puVar34 + -8);
  *puVar40 = in_ES;
code_r0x00403926:
  puVar39 = puVar34 + 1;
  puVar46 = puVar34 + 1;
  puVar41 = puVar34 + 1;
  *(undefined4 *)pbVar18 = *puVar34;
  bVar6 = *pbVar57;
  bVar8 = (byte)pbVar18;
  *pbVar57 = *pbVar57 + bVar8;
  if (CARRY1(bVar6,bVar8)) {
    *pbVar18 = *pbVar18 + bVar8;
    uVar21 = (undefined3)((uint)pbVar18 >> 8);
    bVar8 = bVar8 | pbVar18[0x400005b];
    pbVar19 = (byte *)CONCAT31(uVar21,bVar8);
    pbVar18 = pbVar57;
    if ((char)bVar8 < '\x01') goto code_r0x00403991;
    *pbVar19 = *pbVar19 + bVar8;
    cVar30 = bVar8 + 0x28;
    pbVar19 = (byte *)CONCAT31(uVar21,cVar30);
    *(byte **)pbVar19 = pbVar19 + (uint)(0xd7 < bVar8) + *(int *)pbVar19;
    bVar6 = *pbVar29;
    bVar8 = (byte)((uint)pbVar17 >> 8);
    *pbVar29 = *pbVar29 + bVar8;
    if (CARRY1(bVar6,bVar8)) {
      *pbVar19 = *pbVar19 + cVar30;
      pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                 CONCAT11(bVar8 | *pbVar19,(char)pbVar17));
      *pbVar57 = *pbVar57 + cVar30;
      pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                 CONCAT11((char)((uint)pbVar29 >> 8) + pbVar29[0x55],(char)pbVar29))
      ;
      *pbVar19 = *pbVar19 + cVar30;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar34 = in_ES;
code_r0x00403962:
    puVar46 = (undefined4 *)((int)puVar34 + -4);
    *(undefined2 *)((int)puVar34 + -4) = uVar59;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar42 = (undefined2 *)((int)puVar46 + -4);
  puVar46 = (undefined4 *)((int)puVar46 + -4);
  *puVar42 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar17;
  pbVar29 = (byte *)((uint)pbVar29 | (uint)pbVar57);
  cVar30 = (char)pbVar19 + '\x02';
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar30);
  bVar61 = (POPCOUNT(cVar30) & 1U) == 0;
code_r0x00403967:
  if (!bVar61) goto code_r0x004039be;
  *pbVar19 = *pbVar19 + (char)pbVar19;
  uVar21 = (undefined3)((uint)pbVar19 >> 8);
  bVar6 = (char)pbVar19 + 0x6f;
  bVar6 = bVar6 & *(byte *)CONCAT31(uVar21,bVar6);
  pbVar18 = (byte *)CONCAT31(uVar21,bVar6);
  *pbVar15 = *pbVar15 + (char)pbVar17;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar6;
code_r0x00403979:
  do {
    bVar6 = (char)pbVar18 - (byte)*unaff_EDI;
    bVar61 = bVar6 < *pbVar17;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar6 - *pbVar17);
    do {
      cVar30 = (char)pbVar19;
      *pbVar19 = *pbVar19 + cVar30 + bVar61;
      *pbVar19 = *pbVar19 + cVar30;
      *pbVar17 = *pbVar17 + (char)pbVar15;
      pbVar17[0x101c00aa] = pbVar17[0x101c00aa] + (char)pbVar29;
      *pbVar19 = *pbVar19 + cVar30;
      *(byte **)pbVar57 = pbVar29 + *(int *)pbVar57;
      bVar6 = (byte)((uint)pbVar17 >> 8);
      pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                 CONCAT11(bVar6 + *pbVar19,(char)pbVar17));
      pbVar19 = pbVar19 + (uint)CARRY1(bVar6,*pbVar19) + *(int *)pbVar19;
      pbVar18 = pbVar57;
code_r0x00403991:
      cVar30 = (char)pbVar17;
      *pbVar15 = *pbVar15 + cVar30;
      cVar7 = (char)pbVar29 - pbVar18[2];
      pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar7);
      pbVar57 = pbVar18;
      if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040395a;
      *pbVar19 = *pbVar19 + (byte)pbVar19;
      uVar22 = (uint3)((uint)pbVar19 >> 8);
      bVar6 = (byte)pbVar19 | *pbVar29;
      piVar14 = (int *)CONCAT31(uVar22,bVar6);
      bVar8 = (byte)((uint)pbVar17 >> 8);
      bVar9 = (byte)pbVar15;
      if (bVar6 == 0) {
        *(char *)piVar14 = (char)*piVar14;
        puVar46 = (undefined4 *)((int)puVar46 + -*(int *)(pbVar54 + 0x1b000007));
        pbVar57 = pbVar18 + (uint)bVar62 * -8 + 4;
        out(*(undefined4 *)pbVar18,(short)pbVar15);
        pbVar19 = (byte *)((uint)uVar22 << 8);
        *pbVar15 = *pbVar15 + cVar30;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar9 - *pbVar29);
        *pbVar29 = *pbVar29;
        *pbVar15 = *pbVar15 + bVar8;
        *pbVar19 = *pbVar19;
        *pbVar29 = *pbVar29 + cVar7;
        *pbVar19 = *pbVar19;
        *(byte **)(pbVar29 + -0x3d) = pbVar57 + *(int *)(pbVar29 + -0x3d);
        break;
      }
      pbVar54 = pbVar54 + -unaff_EDI[9];
      *(byte *)piVar14 = (char)*piVar14 + bVar6;
      pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),CONCAT11(bVar8 | *pbVar15,cVar30));
      pbVar57 = pbVar18 + *piVar14;
      pcVar13 = (char *)((int)piVar14 + *piVar14);
      bVar8 = (char)pcVar13 - *pcVar13;
      pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar8);
      bVar6 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar8;
      pbVar19 = pbVar19 + (-(uint)CARRY1(bVar6,bVar8) - *(int *)pbVar19);
      bVar61 = CARRY1(*pbVar17,bVar9);
      *pbVar17 = *pbVar17 + bVar9;
    } while (!bVar61);
    *pbVar19 = *pbVar19 + (char)pbVar19;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | *pbVar15);
code_r0x004039be:
    puVar34 = (undefined4 *)((int)puVar46 + -4);
    puVar43 = (undefined1 *)((int)puVar46 + -4);
    *(undefined2 *)((int)puVar46 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar54 + -0x3c));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar21 = (undefined3)((uint)pbVar19 >> 8);
    bVar6 = (byte)pbVar19 | *pbVar15;
    pcVar13 = (char *)CONCAT31(uVar21,bVar6);
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      cVar30 = *pcVar13;
      *pcVar13 = *pcVar13 + bVar6;
      cVar7 = *pcVar13;
      puVar26 = (undefined1 *)((int)puVar46 + -4);
      if (!SCARRY1(cVar30,bVar6)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar34 = (undefined4 *)puVar26;
      cVar30 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar30;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar6 = cVar30 + 2;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        pcVar13 = (char *)CONCAT31(uVar21,bVar6 + *pbVar15);
        pbVar19 = pbVar57;
        if ((POPCOUNT(bVar6 + *pbVar15) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar57 + (int)unaff_EDI * 8) =
             pbVar15 + (uint)(0xd2 < (byte)pcVar13) + *(int *)(pbVar57 + (int)unaff_EDI * 8);
        puVar45 = (undefined2 *)((int)puVar34 + -4);
        puVar34 = (undefined4 *)((int)puVar34 + -4);
        *puVar45 = in_ES;
        pbVar18 = pbVar54;
        pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 + 0x2d);
code_r0x00403ad8:
        pbVar54 = pbVar20;
        bVar6 = *pbVar18;
        bVar8 = (byte)pbVar18;
        *pbVar18 = *pbVar18 + bVar8;
        puVar46 = (undefined4 *)((int)puVar34 + -4);
        *(undefined2 *)((int)puVar34 + -4) = in_ES;
        puVar26 = (undefined1 *)((int)puVar34 + -4);
        if (CARRY1(bVar6,bVar8)) {
          *pbVar18 = *pbVar18 + bVar8;
          bVar8 = bVar8 | pbVar18[0x400005d];
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar8);
          pbVar19 = pbVar57;
          if ((char)bVar8 < '\x01') {
            *pbVar18 = *pbVar18 + bVar8;
            pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar17 >> 8) | *pbVar15,(char)pbVar17)
                                      );
            pbVar19 = *(byte **)((int)puVar34 + -4);
            pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                       CONCAT11((char)((uint)pbVar29 >> 8) + pbVar29[-0x39],
                                                (char)pbVar29));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar18 = *pbVar18 + (char)pbVar18;
          cVar30 = (char)pbVar18 + '(';
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar30);
          *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
          bVar6 = *pbVar29;
          bVar8 = (byte)((uint)pbVar17 >> 8);
          *pbVar29 = *pbVar29 + bVar8;
          pbVar57 = pbVar19;
          if (!CARRY1(bVar6,bVar8)) {
            puVar34 = (undefined4 *)((int)puVar46 + -4);
            *(undefined2 *)((int)puVar46 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar18 = *pbVar18 + cVar30;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
      piVar14 = (int *)CONCAT31(uVar21,cVar30 + '*');
      *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0xd7 < bVar6);
      bVar6 = *pbVar15;
      bVar11 = (byte)pbVar17;
      *pbVar15 = *pbVar15 + bVar11;
      out(*(undefined4 *)pbVar57,(short)pbVar15);
      bVar9 = ((cVar30 + '*') - (char)*piVar14) - CARRY1(bVar6,bVar11);
      pbVar19 = (byte *)CONCAT31(uVar21,bVar9);
      *pbVar15 = *pbVar15 + bVar11;
      uVar60 = (undefined2)((uint)pbVar29 >> 0x10);
      uVar27 = SUB41(pbVar29,0);
      cVar30 = (char)((uint)pbVar29 >> 8) - pbVar57[(uint)bVar62 * -8 + 0x1f];
      pbVar29 = (byte *)CONCAT22(uVar60,CONCAT11(cVar30,uVar27));
      *pbVar19 = *pbVar19 + bVar9;
      bVar8 = *pbVar15;
      bVar6 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar9;
      pbVar57 = pbVar57 + ((((uint)bVar62 * -8 + 4) - *(int *)pbVar19) - (uint)CARRY1(bVar6,bVar9));
      pbVar19 = (byte *)CONCAT31(uVar21,bVar9);
      pbVar17 = (byte *)(CONCAT22((short)((uint)pbVar17 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar17 >> 8) | bVar8,bVar11)) + -1);
      bVar6 = *pbVar19;
      *pbVar19 = *pbVar19 + bVar9;
      bVar6 = (bVar9 - *pbVar19) - CARRY1(bVar6,bVar9);
      *pbVar17 = *pbVar17 + (char)pbVar15;
      bVar61 = CARRY1(bVar6,*pbVar15);
      bVar6 = bVar6 + *pbVar15;
      pbVar19 = (byte *)CONCAT31(uVar21,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar19 = *pbVar19 + bVar6;
        cVar7 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pbVar18 = (byte *)CONCAT31(uVar21,cVar7);
        bVar6 = *pbVar15;
        *pbVar15 = *pbVar15 + (char)pbVar17;
        if (SCARRY1(bVar6,(char)pbVar17) == (char)*pbVar15 < '\0') {
code_r0x00403aaf:
          cVar30 = (char)pbVar18 + '(';
          pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar30);
          *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
          bVar6 = *pbVar29;
          bVar8 = (byte)((uint)pbVar17 >> 8);
          *pbVar29 = *pbVar29 + bVar8;
          pbVar20 = pbVar54;
          if (!CARRY1(bVar6,bVar8)) goto code_r0x00403ad8;
          *pbVar18 = *pbVar18 + cVar30;
          pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                     CONCAT11(bVar8 | *pbVar29,(char)pbVar17));
          if ((POPCOUNT(*pbVar15 - cVar30) & 1U) != 0) {
            *pbVar57 = *pbVar57 + cVar30;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar18 = *pbVar18 + cVar7;
          pcVar13 = (char *)CONCAT31(uVar21,cVar7 + '\x02');
          bVar8 = cVar30 + pbVar29[0x52];
          pbVar29 = (byte *)CONCAT22(uVar60,CONCAT11(bVar8,uVar27));
          *pcVar13 = *pcVar13 + cVar7 + '\x02';
          bVar6 = cVar7 + 4;
          pbVar18 = (byte *)CONCAT31(uVar21,bVar6);
          if ((POPCOUNT(bVar6) & 1U) == 0) {
            *pbVar18 = *pbVar18 + bVar6;
            cVar30 = (cVar7 + 's') - (0x90 < bVar6);
            pcVar13 = (char *)CONCAT31(uVar21,cVar30);
            bVar6 = (byte)((uint)pbVar17 >> 8);
            bVar61 = CARRY1(*pbVar29,bVar6);
            *pbVar29 = *pbVar29 + bVar6;
            pbVar19 = pbVar57;
            if (bVar61) {
              *pcVar13 = *pcVar13 + cVar30;
              pbVar29 = (byte *)CONCAT22(uVar60,CONCAT11(bVar8 | pbVar54[0x5c],uVar27));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar18);
          pbVar29 = (byte *)CONCAT22(uVar60,CONCAT11(bVar8 + pbVar29[0x52],uVar27));
        }
        *pbVar18 = *pbVar18 + (char)pbVar18;
        cVar30 = (char)pbVar18 + '\x02';
        pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar30);
        bVar61 = (POPCOUNT(cVar30) & 1U) == 0;
        if (!bVar61) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar6 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar6;
        cVar30 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pcVar13 = (char *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar30);
        bVar6 = *pbVar29;
        cVar7 = (char)((uint)pbVar17 >> 8);
        *pbVar29 = *pbVar29 + cVar7;
        if (*pbVar29 == 0 || SCARRY1(bVar6,cVar7) != (char)*pbVar29 < '\0') goto code_r0x00403b2c;
        *pcVar13 = *pcVar13 + cVar30;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar61) {
        pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                   CONCAT11((char)((uint)pbVar29 >> 8) + pbVar29[0x53],(char)pbVar29
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar19 = *pbVar19 + (byte)pbVar19;
      bVar6 = (byte)pbVar19 | pbVar19[0x400005e];
      pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar6);
      if ('\0' < (char)bVar6) {
        *pbVar18 = *pbVar18 + bVar6;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar13 = *pcVar13 + bVar6;
    *pbVar57 = *pbVar57 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar21,bVar6 + 6);
    pbVar18 = (byte *)uVar2;
    bVar6 = *pbVar15;
    bVar8 = (byte)pbVar17;
    *pbVar15 = *pbVar15 + bVar8;
    if (CARRY1(bVar6,bVar8)) {
      *pbVar18 = *pbVar18 + (char)uVar2;
      bVar9 = (byte)((uint)pbVar17 >> 8) | *pbVar18;
      uVar60 = CONCAT11(bVar9,bVar8);
      pbVar18 = pbVar18 + -*(int *)pbVar18;
      bVar6 = *pbVar29;
      *pbVar29 = *pbVar29 + bVar9;
      if (CARRY1(bVar6,bVar9)) {
        cVar7 = (char)pbVar18;
        *pbVar18 = *pbVar18 + cVar7;
        bVar6 = *pbVar15;
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((char)((uint)pbVar15 >> 8) - pbVar29[-0x3a],
                                            (char)pbVar15));
        *pbVar18 = *pbVar18 + cVar7;
        uVar33 = (undefined2)((uint)pbVar29 >> 0x10);
        bVar32 = (byte)((uint)pbVar29 >> 8) | pbVar15[0x32];
        pcVar13 = (char *)CONCAT22(uVar33,CONCAT11(bVar32,(char)pbVar29));
        cVar30 = *pcVar13;
        puVar43 = (undefined1 *)((int)puVar46 + -8);
        *(undefined2 *)((int)puVar46 + -8) = in_CS;
        cVar30 = cVar7 + cVar30 + '-';
        pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar30);
        *pbVar18 = *pbVar18;
        *(undefined2 *)((int)puVar46 + -0xc) = in_ES;
        bVar11 = *pbVar15;
        uVar59 = *(undefined2 *)((int)puVar46 + -0xc);
        cVar7 = (char)pbVar29 - *pbVar57;
        bVar10 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar18 = *pbVar18 + cVar30;
        uVar60 = CONCAT11((bVar9 | bVar6) + bVar10 | *pbVar15,bVar8 - bVar11);
        pbVar29 = (byte *)CONCAT22(uVar33,CONCAT11(bVar32 + *(char *)(CONCAT31((int3)((uint)pcVar13
                                                                                     >> 8),cVar7) +
                                                                     0x4e),cVar7));
        *pbVar18 = *pbVar18 + cVar30;
      }
      pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),uVar60);
      bVar6 = (byte)pbVar18;
      uVar21 = (undefined3)((uint)pbVar18 >> 8);
      pcVar13 = (char *)CONCAT31(uVar21,bVar6 + 0x28);
      *pcVar13 = (*pcVar13 - (bVar6 + 0x28)) - (0xd7 < bVar6);
      *pbVar15 = *pbVar15 + (char)uVar60;
      bVar8 = bVar6 + 0x1b;
      pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                 CONCAT11((char)((uint)pbVar29 >> 8) + pbVar29[0x4f],(char)pbVar29))
      ;
      *(char *)CONCAT31(uVar21,bVar8) = *(char *)CONCAT31(uVar21,bVar8) + bVar8;
      pcVar16 = (char *)CONCAT31(uVar21,bVar6 + 0x43);
      *pcVar16 = (*pcVar16 - (bVar6 + 0x43)) - (0xd7 < bVar8);
      *pbVar15 = *pbVar15 + (char)uVar60;
      pcVar13 = pcVar16 + -0x6b721c;
      pcVar16 = pcVar16 + -0x6b721a;
      *pcVar16 = *pcVar16 + (char)((uint)pbVar15 >> 8);
      cVar7 = *pcVar16;
      puVar34 = (undefined4 *)puVar43;
code_r0x00403a22:
      puVar26 = (undefined1 *)puVar34;
      if ((POPCOUNT(cVar7) & 1U) == 0) goto code_r0x00403a24;
      bVar6 = *pbVar15;
      *pbVar15 = *pbVar15 + (char)pbVar17;
      if (SCARRY1(bVar6,(char)pbVar17) == (char)*pbVar15 < '\0') {
        pbVar18 = pbVar54;
        pbVar20 = (byte *)(pcVar13 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x02');
      pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                 CONCAT11((char)((uint)pbVar29 >> 8) + pbVar29[0x54],(char)pbVar29))
      ;
      pbVar19 = pbVar57;
code_r0x00403a7d:
      cVar30 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar30;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      cVar7 = cVar30 + '-';
      pbVar20 = (byte *)CONCAT31(uVar21,cVar7);
      pbVar18 = pbVar54;
      pbVar57 = pbVar19;
      if ((POPCOUNT(cVar7 - *pbVar15) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar20 = *pbVar20 + cVar7;
      bVar6 = cVar30 + 0x2f;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        bVar6 = *pbVar15;
        *pbVar15 = *pbVar15 + (byte)pbVar17;
        *pbVar54 = *pbVar54 - CARRY1(bVar6,(byte)pbVar17);
        pbVar18 = (byte *)CONCAT31(uVar21,cVar30 + -0x53);
        pbVar54 = (byte *)*puVar34;
        puVar46 = puVar34 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
      bVar61 = 0x90 < bVar6;
      pcVar13 = (char *)CONCAT31(uVar21,cVar30 + -0x62);
code_r0x00403a8f:
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar8 = (char)pcVar13 - bVar61;
      pbVar18 = (byte *)CONCAT31(uVar21,bVar8);
      bVar6 = *pbVar29;
      cVar30 = (char)((uint)pbVar17 >> 8);
      *pbVar29 = *pbVar29 + cVar30;
      puVar46 = puVar34;
      pbVar57 = pbVar19;
      if (*pbVar29 != 0 && SCARRY1(bVar6,cVar30) == (char)*pbVar29 < '\0') {
        *pbVar18 = *pbVar18 + bVar8;
        pbVar57 = (byte *)CONCAT31(uVar21,bVar8 + 0x2d);
        *(byte **)(pbVar19 + (int)unaff_EDI * 8) =
             pbVar15 + (uint)(0xd2 < bVar8) + *(int *)(pbVar19 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar34 + -4) = in_ES;
        bVar61 = CARRY1(*pbVar19,(byte)pbVar19);
        *pbVar19 = *pbVar19 + (byte)pbVar19;
        puVar44 = (undefined2 *)((int)puVar34 + -8);
        puVar34 = (undefined4 *)((int)puVar34 + -8);
        *puVar44 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar17 >> 8) | *pbVar18,(char)pbVar17));
      *pbVar57 = *pbVar57 + (char)pbVar18;
      puVar26 = (undefined1 *)puVar46;
code_r0x00403afc:
      puVar34 = (undefined4 *)puVar26;
      pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                 CONCAT11((char)((uint)pbVar29 >> 8) + pbVar29[0x55],(char)pbVar29))
      ;
      *pbVar18 = *pbVar18 + (char)pbVar18;
      uVar21 = (undefined3)((uint)pbVar18 >> 8);
      bVar8 = (char)pbVar18 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar21,bVar8);
      *pbVar15 = *pbVar15 + (char)pbVar17;
      pbVar18 = (byte *)CONCAT31(uVar21,(bVar8 & bVar6) + *pbVar57);
      *pbVar17 = *pbVar17 - (char)((uint)pbVar15 >> 8);
      break;
    }
    uVar59 = *(undefined2 *)((int)puVar46 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar18 = *pbVar18 + (char)pbVar18;
  puVar47 = (undefined2 *)((int)puVar34 + -4);
  puVar34 = (undefined4 *)((int)puVar34 + -4);
  *puVar47 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar17;
  pbVar29 = (byte *)((uint)pbVar29 | (uint)pbVar57);
  cVar30 = (char)pbVar18 + '\x02';
  pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar30);
  bVar61 = (POPCOUNT(cVar30) & 1U) == 0;
code_r0x00403b18:
  bVar6 = (byte)pbVar19;
  uVar21 = (undefined3)((uint)pbVar19 >> 8);
  if (!bVar61) {
    *pbVar15 = *pbVar15 + (char)pbVar17;
    pbVar18 = (byte *)CONCAT31(uVar21,bVar6 | *pbVar57);
code_r0x00403b73:
    pbVar19 = (byte *)((int)unaff_EDI + *(int *)(pbVar54 + -0x37));
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    uVar21 = (undefined3)((uint)pbVar18 >> 8);
    bVar6 = (byte)pbVar18 | *pbVar15;
    pcVar13 = (char *)CONCAT31(uVar21,bVar6);
    uVar64 = CONCAT44(pbVar15,pcVar13);
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *pcVar13 = *pcVar13 + bVar6;
      *pbVar57 = *pbVar57 + 1;
      return (byte *)CONCAT31(uVar21,bVar6 + 6);
    }
    bVar6 = *pbVar57;
    *pbVar57 = *pbVar57 + 1;
    pcVar1 = (code *)swi(4);
    if (SCARRY1(bVar6,'\x01')) {
      uVar64 = (*pcVar1)();
      pbVar17 = extraout_ECX_00;
    }
    pbVar15 = (byte *)uVar64;
    *pbVar15 = *pbVar15 + (char)uVar64;
    cVar7 = (char)((ulonglong)uVar64 >> 0x20);
    puVar55 = (uint *)CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | pbVar29[0x2f],cVar7));
    *pbVar15 = *pbVar15 + (char)uVar64;
    cVar30 = (char)pbVar17;
    bVar9 = (byte)((uint)pbVar17 >> 8) | *pbVar15;
    pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar6 = *pbVar29;
    *pbVar29 = *pbVar29 + bVar9;
    bVar8 = (byte)pbVar15;
    if (CARRY1(bVar6,bVar9)) {
      *pbVar15 = *pbVar15 + bVar8;
      bVar9 = bVar9 | (byte)*puVar55;
      *pbVar29 = *pbVar29 - cVar7;
      *pbVar15 = *pbVar15 + bVar8;
      uVar21 = (undefined3)((uint)pbVar15 >> 8);
      bVar8 = bVar8 | (byte)*puVar55;
      puVar58 = (uint *)CONCAT31(uVar21,bVar8);
      bVar61 = CARRY4((uint)pbVar54,*puVar58);
      bVar63 = SCARRY4((int)pbVar54,*puVar58);
      pbVar54 = pbVar54 + *puVar58;
      *(uint *)((int)puVar34 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar63 * 0x800 | (uint)bVar62 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar54 < 0) * 0x80 |
           (uint)(pbVar54 == (byte *)0x0) * 0x40 | (uint)(bVar25 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar54 & 0xff) & 1U) == 0) * 4 | (uint)bVar61 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar58 = (char)*puVar58 + bVar8;
      *(undefined2 *)((int)puVar34 + -8) = in_ES;
      cVar7 = (char)pbVar29 - *pbVar57;
      pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                 CONCAT11((char)((uint)pbVar29 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar29 >> 8),cVar7) +
                                                   0x5f),cVar7));
      *(byte *)puVar58 = (char)*puVar58 + bVar8;
      bVar6 = bVar8 + 0x2a & (byte)*puVar55;
      pbVar19 = pbVar19 + *(int *)(pbVar54 + 0x5f);
      *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
      pbVar15 = (byte *)CONCAT31(uVar21,bVar6 + 0x2a);
      *(byte *)puVar55 = (byte)*puVar55 + 0x28;
      *pbVar15 = *pbVar15 + bVar6 + 0x2a;
      puVar50 = (undefined2 *)((int)puVar34 + -0xc);
      puVar34 = (undefined4 *)((int)puVar34 + -0xc);
      *puVar50 = in_ES;
    }
    else {
      *pbVar57 = *pbVar57 + bVar8;
    }
    pcVar13 = (char *)CONCAT22((short)((uint)pbVar17 >> 0x10),CONCAT11(bVar9,cVar30));
    *pbVar54 = *pbVar54 - bVar9;
    *(byte *)puVar55 = (byte)*puVar55 + cVar30;
    bVar6 = (byte)pbVar15 - 0xb;
    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar6);
    if (10 < (byte)pbVar15) {
      *pbVar17 = *pbVar17 | bVar6;
      return pbVar17;
    }
    *(byte *)puVar55 = (byte)*puVar55 + cVar30;
    do {
      *(undefined2 *)((int)puVar34 + -4) = in_ES;
      bVar6 = pbVar29[-0x23];
      bVar8 = (byte)pbVar17;
      *pbVar17 = *pbVar17 + bVar8;
      bVar25 = pbVar54[-0x22];
      *pbVar17 = *pbVar17 + bVar8;
      uVar21 = (undefined3)((uint)pbVar17 >> 8);
      bVar8 = bVar8 | *pbVar57;
      pbVar15 = (byte *)CONCAT31(uVar21,bVar8);
      cVar7 = (char)pbVar29 - *pbVar57;
      pbVar29 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar29 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar29 >> 8) + bVar6 |
                                                          bVar25,(char)pbVar29)) >> 8),cVar7);
      cVar30 = (char)pcVar13;
      pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                 CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar15,cVar30));
      *(byte *)puVar55 = (byte)*puVar55 + cVar30;
      bVar25 = bVar8 - *pbVar15;
      pbVar17 = (byte *)CONCAT31(uVar21,bVar25);
      pbVar57 = pbVar57 + (-(uint)(bVar8 < *pbVar15) - *(int *)pbVar17);
      in_ES = *(undefined2 *)((int)puVar34 + -4);
      puVar55 = (uint *)CONCAT31((int3)((uint)puVar55 >> 8),(char)puVar55 * '\x02');
      *(byte **)pbVar17 = pbVar17 + *(int *)pbVar17;
      *pbVar19 = *pbVar19 + cVar7;
      bVar6 = *pbVar17;
      *pbVar17 = *pbVar17 + bVar25;
      *puVar55 = (uint)(pbVar17 + (uint)CARRY1(bVar6,bVar25) + *puVar55);
    } while ((POPCOUNT(*puVar55 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar17 = *pbVar17 + (char)pbVar17;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar17[(int)pcVar13]);
    puVar52 = (undefined2 *)((int)puVar34 + -4);
    *(undefined2 *)((int)puVar34 + -4) = uVar59;
    bVar61 = false;
    pbVar17 = (byte *)((uint)pbVar17 & 0xffffff00);
    do {
      pbVar19 = pbVar19 + (-(uint)bVar61 - *(int *)pbVar29);
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar17 >> 8),*pcVar13);
      *pcVar16 = *pcVar16 + *pcVar13;
      pbVar17 = (byte *)CONCAT31((int3)((uint)(pcVar16 +
                                              (pbVar57[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar16 +
                                        (pbVar57[0x2000001] < (byte)((uint)pcVar13 >> 8)) + 0xda7d)
                                 | (byte)*puVar55) + 0x7d);
      pcVar13 = pcVar13 + -1;
      *(byte *)puVar55 = (byte)*puVar55 + (char)pcVar13;
      while( true ) {
        uVar24 = (undefined3)((uint)puVar55 >> 8);
        cVar30 = (char)puVar55 + *(char *)((int)pbVar19 * 2 + 0xa0000e1);
        puVar55 = (uint *)CONCAT31(uVar24,cVar30);
        bVar61 = CARRY1((byte)pbVar17,(byte)*puVar55);
        uVar21 = (undefined3)((uint)pbVar17 >> 8);
        bVar6 = (byte)pbVar17 + (byte)*puVar55;
        pbVar17 = (byte *)CONCAT31(uVar21,bVar6);
        if ((POPCOUNT(bVar6) & 1U) != 0) break;
        *pbVar17 = *pbVar17 + bVar6;
        cVar7 = (char)pcVar13;
        pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar19[-0x65],cVar7));
        bVar25 = *pbVar17;
        *pbVar17 = *pbVar17 + bVar6;
        *(undefined2 *)((int)puVar52 + -4) = in_ES;
        if (CARRY1(bVar25,bVar6)) {
          *pbVar17 = *pbVar17 + bVar6;
          pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar29 >> 8) | pbVar54[-0x1d],
                                              (char)pbVar29));
          *pbVar17 = *pbVar17 + bVar6;
          bVar61 = false;
          bVar6 = bVar6 | (byte)*puVar55;
          pcVar16 = (char *)CONCAT31(uVar21,bVar6);
          uVar59 = *(undefined2 *)((int)puVar52 + -4);
          puVar34 = (undefined4 *)puVar52;
          while( true ) {
            bVar25 = (byte)pcVar16;
            uVar21 = (undefined3)((uint)pcVar16 >> 8);
            if (bVar61 == (char)bVar6 < '\0') break;
            *pcVar16 = *pcVar16 + bVar25;
            bVar25 = bVar25 | (byte)*puVar55;
            puVar58 = (uint *)CONCAT31(uVar21,bVar25);
            *pbVar19 = *pbVar19 << 1 | (char)*pbVar19 < '\0';
            uVar12 = *puVar58;
            *(byte *)puVar58 = (byte)*puVar58 + bVar25;
            pbVar54 = pbVar54 + (-(uint)CARRY1((byte)uVar12,bVar25) - *puVar58);
            *puVar58 = *puVar58 << 1 | (uint)((int)*puVar58 < 0);
            while( true ) {
              uVar12 = *puVar55;
              *(byte *)puVar55 = (byte)*puVar55 + (byte)pcVar13;
              uVar60 = *(undefined2 *)puVar34;
              cVar30 = (char)puVar58 + 'o' + CARRY1((byte)uVar12,(byte)pcVar13);
              pcVar16 = (char *)CONCAT31((int3)((uint)puVar58 >> 8),cVar30);
              pcVar13 = (char *)0x20a0000;
              if ((POPCOUNT(cVar30) & 1U) != 0) break;
              *pcVar16 = *pcVar16 + cVar30;
              bVar6 = bRamfe140212;
              pcVar13 = (char *)0x0;
              *(undefined2 *)puVar34 = in_ES;
              uVar21 = (undefined3)((uint)(pcVar16 + -0x732b0000) >> 8);
              bVar25 = in(0);
              puVar58 = (uint *)CONCAT31(uVar21,bVar25);
              uVar12 = *puVar55;
              *(byte *)puVar55 = (byte)*puVar55;
              if (SCARRY1((byte)uVar12,'\0') != (char)(byte)*puVar55 < '\0') {
                *(byte *)puVar58 = (byte)*puVar58 + bVar25;
                bVar25 = bVar25 | (byte)*puVar55;
                puVar58 = (uint *)CONCAT31(uVar21,bVar25);
                if ((POPCOUNT(bVar25) & 1U) == 0) {
                  *(byte *)puVar58 = (byte)*puVar58 + bVar25;
                  pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar6 | (byte)*puVar58) << 8);
                  puVar52 = (undefined2 *)((int)puVar34 + -4);
                  *(undefined2 *)((int)puVar34 + -4) = uVar60;
                  *(byte *)puVar58 = (byte)*puVar58 + bVar25;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar58 = (byte)*puVar58 + bVar25;
                puVar58 = (uint *)CONCAT31(uVar21,bVar25 | (byte)*puVar55);
              }
            }
            *(byte *)puVar55 = (byte)*puVar55;
            bVar61 = SCARRY1((char)puVar55,*pbVar19);
            bVar6 = (char)puVar55 + *pbVar19;
            puVar55 = (uint *)CONCAT31((int3)((uint)puVar55 >> 8),bVar6);
            puVar34 = (undefined4 *)((int)puVar34 + 4);
          }
          if (bVar61 == (char)bVar6 < '\0') {
            *(byte *)puVar55 = (byte)*puVar55 + (char)pcVar13;
            pbVar17 = (byte *)((uint)pcVar16 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar16 = *pcVar16 + bVar25;
          pbVar17 = (byte *)CONCAT31(uVar21,(bVar25 | (byte)*puVar55) + 0x7d);
          pcVar13 = pcVar13 + -1;
          *(byte *)puVar55 = (byte)*puVar55 + (char)pcVar13;
          puVar52 = (undefined2 *)puVar34;
        }
        else {
          *(byte *)puVar55 = (byte)*puVar55 + cVar7;
          puVar55 = (uint *)CONCAT31(uVar24,cVar30 + *(char *)((int)pbVar19 * 2 + 0xa0000e0));
          puVar52 = (undefined2 *)((int)puVar52 + -4);
        }
      }
    } while( true );
  }
  *pbVar19 = *pbVar19 + bVar6;
  bVar6 = bVar6 + 0x6f & *(byte *)CONCAT31(uVar21,bVar6 + 0x6f);
  *pbVar15 = *pbVar15 + (char)pbVar17;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar6;
  pcVar13 = (char *)CONCAT31(uVar21,bVar6 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar6 = (char)pcVar13 - *pcVar13;
  pbVar18 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar6);
  *pbVar18 = *pbVar18 + bVar6;
  *(byte **)pbVar18 = pbVar15 + *(int *)pbVar18;
  *pbVar18 = *pbVar18 + bVar6;
  bVar61 = CARRY1(*pbVar18,bVar6);
  *pbVar18 = *pbVar18 + bVar6;
  puVar26 = (undefined1 *)puVar34;
  pbVar19 = pbVar57;
  while( true ) {
    puVar34 = (undefined4 *)puVar26;
    *(byte **)pbVar18 = pbVar18 + (uint)bVar61 + *(int *)pbVar18;
    bVar25 = ((uint)pbVar18 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar62 * -2 + 1;
    pbVar18[(int)pbVar15] = pbVar18[(int)pbVar15] + (char)pbVar29;
    *pbVar18 = *pbVar18 + (char)pbVar18;
    *(byte **)pbVar19 = pbVar29 + *(int *)pbVar19;
    bVar6 = (byte)((uint)pbVar17 >> 8);
    cVar30 = (char)pbVar17;
    pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),CONCAT11(bVar6 + *pbVar18,cVar30));
    pbVar18 = pbVar18 + (uint)CARRY1(bVar6,*pbVar18) + *(int *)pbVar18;
    *pbVar15 = *pbVar15 + cVar30;
    cVar30 = (char)pbVar29 - pbVar19[2];
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar30);
    pbVar57 = pbVar19;
    if ((POPCOUNT(cVar30) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar18 = *pbVar18 + (byte)pbVar18;
    bVar6 = (byte)pbVar18 | *pbVar29;
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar6);
    if (bVar6 != 0) {
      pbVar54 = pbVar54 + -unaff_EDI[9];
      *pbVar20 = *pbVar20 + bVar6;
      pbVar17 = (byte *)CONCAT22((short)((uint)pbVar17 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar17 >> 8) | *pbVar15,(char)pbVar17));
      pbVar19 = pbVar19 + *(int *)pbVar20;
      pbVar20 = pbVar20 + *(int *)pbVar20;
      uVar21 = (undefined3)((uint)pbVar20 >> 8);
      bVar8 = (char)pbVar20 - *pbVar20;
      pbVar57 = (byte *)CONCAT31(uVar21,bVar8);
      bVar6 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar8;
      pbVar20 = (byte *)CONCAT31(uVar21,bVar8 - CARRY1(bVar6,bVar8));
    }
    bVar6 = *pbVar20;
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    iVar23 = *(int *)(pbVar54 + 0x1b000007);
    iVar3 = -(uint)CARRY1(bVar6,(byte)pbVar20);
    pbVar57 = pbVar19 + (uint)bVar62 * -8 + 4;
    out(*(undefined4 *)pbVar19,(short)pbVar15);
    pbVar18 = (byte *)(((uint)pbVar20 >> 8) * 0x100);
    *pbVar15 = *pbVar15 + (byte)pbVar17;
    bVar6 = (char)pbVar15 - *pbVar29;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar6);
    *pbVar29 = *pbVar29;
    *pbVar15 = *pbVar15 + (char)((uint)pbVar17 >> 8);
    *pbVar18 = *pbVar18;
    pcVar13 = (char *)(((uint)pbVar20 >> 8) * 0x200);
    *pcVar13 = *pcVar13 + (char)pbVar29;
    bVar61 = CARRY1(*pbVar17,bVar6);
    *pbVar17 = *pbVar17 + bVar6;
    puVar26 = (undefined1 *)((int)puVar34 + (iVar3 - iVar23));
    pbVar19 = pbVar57;
    if (bVar61) {
      *pbVar18 = *pbVar18;
      pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),(byte)pbVar17 | *pbVar15);
      puVar49 = (undefined2 *)((int)puVar34 + (iVar3 - iVar23) + -4);
      puVar34 = (undefined4 *)((int)puVar34 + (iVar3 - iVar23) + -4);
      *puVar49 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar48 = (undefined2 *)((int)puVar34 + -4);
  puVar34 = (undefined4 *)((int)puVar34 + -4);
  *puVar48 = uVar59;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar54 = pbVar54 + -*puVar58;
  puVar51 = (undefined1 *)((int)puVar52 + 4);
  do {
    bVar6 = (byte)puVar58;
    *(byte *)puVar58 = (byte)*puVar58 + bVar6;
    pbVar19 = pbVar19 + -*(int *)(pbVar54 + -0x1a);
    *(byte *)puVar58 = (byte)*puVar58 + bVar6;
    bVar6 = bVar6 | (byte)*puVar55;
    puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar6);
    *(byte *)puVar58 = (byte)*puVar58 | bVar6;
    bVar6 = (byte)*puVar58;
    pbVar54 = (byte *)0x2700001;
    while (puVar52 = (undefined2 *)puVar51, (POPCOUNT(bVar6) & 1U) == 0) {
      do {
        *(byte *)puVar58 = (byte)*puVar58 + (byte)puVar58;
        bVar6 = (byte)puVar58 | (byte)*puVar55;
        puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar6);
        puVar26 = (undefined1 *)puVar52;
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
        uVar22 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        puVar5 = puVar26;
        while( true ) {
          puVar53 = puVar5;
          pcVar13 = (char *)((uint)uVar22 << 8);
          puVar51 = puVar53 + -4;
          puVar52 = (undefined2 *)(puVar53 + -4);
          puVar26 = puVar53 + -4;
          *(undefined2 *)(puVar53 + -4) = in_ES;
          bVar9 = (byte)puVar58;
          *(byte *)puVar58 = (byte)*puVar58 & bVar9;
          bVar25 = *pbVar29;
          bVar11 = (byte)uVar22;
          bVar8 = *pbVar29;
          *pbVar29 = *pbVar29 + bVar11;
          bVar6 = *pbVar29;
          if (!CARRY1(bVar25,bVar11)) break;
          *(byte *)puVar58 = (byte)*puVar58 + bVar9;
          pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar29 >> 8) | bRam026fffe2,
                                              (char)pbVar29));
          *(byte *)puVar58 = (byte)*puVar58 + bVar9;
          bVar9 = bVar9 | (byte)*puVar55;
          puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar9);
          bVar61 = (POPCOUNT(bVar9) & 1U) == 0;
          while( true ) {
            cVar30 = (char)((uint)pbVar29 >> 8);
            uVar59 = (undefined2)((uint)pbVar29 >> 0x10);
            if (!bVar61) {
              *(byte *)puVar55 = (byte)*puVar55;
              pbVar29 = (byte *)CONCAT22(uVar59,CONCAT11(cVar30 + pbVar29[-0x1f],(char)pbVar29));
              goto code_r0x00403d52;
            }
            *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
            uVar60 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar25 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar58;
            uVar22 = CONCAT21(uVar60,bVar25);
            *puVar58 = *puVar58 & (uint)puVar58;
            *pbVar29 = *pbVar29 + bVar25;
            uVar21 = (undefined3)((uint)puVar58 >> 8);
            bVar6 = (char)puVar58 - bVar25;
            pcVar13 = (char *)CONCAT31(uVar21,bVar6);
            *pcVar13 = *pcVar13 + bVar6;
            bVar6 = bVar6 | (byte)*puVar55;
            puVar58 = (uint *)CONCAT31(uVar21,bVar6);
            puVar5 = puVar53 + -4;
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *(byte *)puVar58 = (byte)*puVar58 + bVar6;
            pcVar13 = (char *)((uint)CONCAT21(uVar60,bVar25 | (byte)*puVar58) << 8);
            *puVar58 = *puVar58 - (int)puVar58;
            *(byte *)puVar55 = (byte)*puVar55;
            pbVar29 = (byte *)CONCAT22(uVar59,CONCAT11(cVar30 + pbVar29[-0x1d],(char)pbVar29));
            do {
              *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
              uVar59 = (undefined2)((uint)puVar55 >> 0x10);
              cVar30 = (char)puVar55;
              bVar6 = (byte)((uint)puVar55 >> 8) | pbVar29[-0x17];
              puVar55 = (uint *)CONCAT22(uVar59,CONCAT11(bVar6,cVar30));
              *(byte *)puVar58 = (byte)*puVar58 + (char)puVar58;
              pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar29 >> 8) | bRam026fffeb,
                                                  (char)pbVar29));
              do {
                *(byte *)puVar58 = (byte)*puVar58 + (byte)puVar58;
                uVar21 = (undefined3)((uint)puVar58 >> 8);
                bVar8 = (byte)puVar58 | (byte)*puVar55;
                pcVar16 = (char *)CONCAT31(uVar21,bVar8);
                bVar25 = pbVar29[-0x16];
                *pcVar16 = *pcVar16 + bVar8;
                pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                           CONCAT11((char)((uint)pbVar29 >> 8) + bVar25 |
                                                    bRam026fffec,(char)pbVar29));
                *pcVar16 = *pcVar16 + bVar8;
                pbVar15 = (byte *)CONCAT31(uVar21,bVar8 | (byte)*puVar55);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar21 = (undefined3)((uint)pbVar15 >> 8);
                  bVar25 = (byte)pbVar15 | (byte)*puVar55;
                  puVar58 = (uint *)CONCAT31(uVar21,bVar25);
                  if ((POPCOUNT(bVar25) & 1U) != 0) break;
                  *(byte *)puVar58 = (byte)*puVar58 + bVar25;
                  bVar8 = pbVar19[-0x14];
                  *(byte *)puVar58 = (byte)*puVar58 + bVar25;
                  bVar25 = bVar25 | (byte)*puVar55;
                  pcVar16 = (char *)CONCAT31(uVar21,bVar25);
                  bVar9 = pbVar29[-0x15];
                  *pcVar16 = *pcVar16 + bVar25;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar8 |
                                                    pbVar19[-0x13]) << 8);
                  *pcVar16 = *pcVar16 + bVar25;
                  pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                             CONCAT11((char)((uint)pbVar29 >> 8) + bVar9 |
                                                      bRam026fffef,(char)pbVar29));
                  *pcVar16 = *pcVar16 + bVar25;
                  pbVar15 = (byte *)CONCAT31(uVar21,bVar25 | (byte)*puVar55);
                  do {
                    do {
                      bVar8 = (byte)pbVar15;
                      *pbVar15 = *pbVar15 + bVar8;
                      cVar28 = (char)pbVar29;
                      pbVar29 = (byte *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar29 >> 8) | *pbVar15,
                                                          cVar28));
                      *pbVar15 = bVar8;
                      *pbVar15 = *pbVar15 + bVar8;
                      cVar7 = (char)((uint)pcVar13 >> 8) + *pbVar15;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar7) << 8);
                      uVar21 = (undefined3)((uint)pbVar15 >> 8);
                      bVar8 = bVar8 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar21,bVar8);
                      bVar25 = *pbVar29;
                      *pbVar29 = *pbVar29 + cVar7;
                    } while (SCARRY1(bVar25,cVar7) == (char)*pbVar29 < '\0');
                    *pbVar15 = *pbVar15 + bVar8;
                    bVar8 = bVar8 | (byte)*puVar55;
                    pbVar15 = (byte *)CONCAT31(uVar21,bVar8);
                    if ((POPCOUNT(bVar8) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar8;
                      *pbVar15 = *pbVar15 + bVar8;
                      cVar30 = cVar30 - bVar6;
                      pbVar17 = (byte *)CONCAT31((int3)((uint)puVar55 >> 8),cVar30);
                      *pbVar15 = *pbVar15 + bVar8;
                      bRam0312382b = bRam0312382b | *pbVar17;
                      *(undefined2 *)(puVar53 + -8) = in_ES;
                      while( true ) {
                        bVar25 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar25;
                        bRam0312382b = bRam0312382b | (pbVar19 + 0x21b0000)[(int)pbVar15];
                        uVar21 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar17 = *pbVar17 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar21,bVar25 | *pbVar57);
                      }
                      *pbVar15 = *pbVar15 + bVar25;
                      bVar25 = bVar25 | *pbVar57;
                      pcVar13 = (char *)CONCAT31(uVar21,bVar25);
                      out(*(undefined4 *)pbVar57,(short)pbVar17);
                      *pcVar13 = *pcVar13 + bVar25;
                      uVar60 = CONCAT11(bVar6 | bRam6f0a002b,cVar30);
                      pcVar16 = (char *)CONCAT22(uVar59,uVar60);
                      *pcVar13 = *pcVar13 + bVar25;
                      *pcVar16 = *pcVar16 + bRam0312382b;
                      out(*(undefined4 *)(pbVar57 + (uint)bVar62 * -8 + 4),uVar60);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),cVar28 + *pcVar13);
                  } while (SCARRY1(cVar28,*pcVar13) != (char)(cVar28 + *pcVar13) < '\0');
                }
                uVar12 = *puVar55;
                *(byte *)puVar55 = (byte)*puVar55;
              } while (SCARRY1((byte)uVar12,'\0') != (char)(byte)*puVar55 < '\0');
              *(byte *)puVar55 = (byte)*puVar55;
              *pcVar13 = *pcVar13 - (char)pbVar29;
              *(byte *)puVar58 = (byte)*puVar58 + bVar25;
              bVar25 = bVar25 | (byte)*puVar55;
              puVar58 = (uint *)CONCAT31(uVar21,bVar25);
              bVar61 = (POPCOUNT(bVar25) & 1U) == 0;
            } while (bVar61);
          }
        }
      } while (SCARRY1(bVar8,bVar11));
    }
    *pbVar29 = *pbVar29 + (char)((uint)pcVar13 >> 8);
    *pbVar19 = *pbVar19 - (char)pbVar29;
  } while( true );
code_r0x004033f4:
  *pcVar16 = *pcVar16 + bVar6;
  piVar14 = (int *)CONCAT31(uVar21,cVar7 + -0x59);
  unaff_ESI = (byte *)((int)puVar55 + (uint)(0xd5 < bVar6) + *piVar14);
  bVar8 = cVar7 + -0x59 + (char)*piVar14;
  in_EAX = (byte *)CONCAT31(uVar21,bVar8);
  bVar6 = *in_EAX;
  *in_EAX = *in_EAX + bVar8;
  *(byte **)in_EAX = in_EAX + (uint)CARRY1(bVar6,bVar8) + *(int *)in_EAX;
  in_CF = CARRY1(*si,bVar25);
  *si = *si + bVar25;
  unaff_retaddr = (unaff_retaddr >> 0x10) << 0x10;
  goto code_r0x00403404;
}


