/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040343d
 * Raw Name    : <CreateReportText>b__3
 * Demangled   : <CreateReportText>b__3
 * Prototype   : byte * <CreateReportText>b__3(byte * aquirer, uint * param_2)
 * Local Vars  : uStack_1c, pbStack_14, uStack_8, uStack_4, pcVar1, uVar2, iVar3, uVar4, puVar5, bVar6, bVar7, aquirer, cVar8, bVar9, bVar10, bVar11, bVar12, in_EAX, uVar13, pcVar14, piVar15, pbVar16, pcVar17, pbVar18, pbVar19, pbVar20, pbVar21, puVar22, uVar23, uVar24, iVar25, extraout_ECX, pbVar26, extraout_ECX_00, uVar27, cVar28, puVar29, cVar30, uVar31, unaff_EBX, pbVar32, cVar33, cVar34, bVar35, uVar36, puVar37, puVar38, piVar39, piVar40, param_2, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, unaff_EBP, pbVar57, unaff_ESI, unaff_EDI, puVar58, in_ES, in_CS, in_SS, uVar59, in_DS, uVar60, bVar61, in_AF, in_TF, in_IF, bVar62, bVar63, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar64
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

byte * __fastcall <CreateReportText>b__3(byte *aquirer,uint *param_2)

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
  byte bVar12;
  undefined3 uVar23;
  char *in_EAX;
  uint uVar13;
  char *pcVar14;
  int *piVar15;
  byte *pbVar16;
  char *pcVar17;
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
  char cVar28;
  undefined1 *puVar29;
  char cVar30;
  undefined1 uVar31;
  char cVar33;
  byte bVar35;
  undefined4 unaff_EBX;
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
  byte *unaff_EBP;
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
  byte *pbStack_14;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar62 = false;
                    /* .NET CLR Managed Code */
  pbVar26 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                      *(byte *)((int)unaff_ESI + 0x45),(char)unaff_EBX));
  bVar6 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar6;
  pcVar14 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + 0x2d);
  unaff_ESI[(int)unaff_EDI * 2] =
       (int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2];
  uStack_4._2_2_ = (undefined2)((uint)uStack_4 >> 0x10);
  while( true ) {
    uVar13 = *unaff_ESI;
    bVar6 = (byte)pcVar14;
    uVar4 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    bVar9 = (byte)param_2;
    cVar8 = (char)aquirer;
    cVar30 = (char)((uint)aquirer >> 8);
    uVar59 = (undefined2)((uint)aquirer >> 0x10);
    uVar23 = (undefined3)((uint)pcVar14 >> 8);
    uVar31 = SUB41(pbVar26,0);
    uVar60 = (undefined2)((uint)pbVar26 >> 0x10);
    cVar34 = (char)((uint)pbVar26 >> 8);
    cVar33 = (char)((uint)pcVar14 >> 8);
    if (CARRY1((byte)uVar13,bVar6)) break;
    if (SCARRY1((byte)uVar4,bVar6) != (char)(byte)*unaff_ESI < '\0') {
      *pcVar14 = *pcVar14 + bVar6;
      piVar15 = (int *)CONCAT31(uVar23,bVar6 + 0x2a);
      pbVar57 = (byte *)((int)unaff_ESI + (uint)(0xd5 < bVar6) + *piVar15);
      bVar7 = bVar6 + 0x2a + (char)*piVar15;
      pbVar32 = (byte *)CONCAT31(uVar23,bVar7);
      bVar6 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar7;
      *(byte **)pbVar32 = pbVar32 + (uint)CARRY1(bVar6,bVar7) + *(int *)pbVar32;
      bVar6 = *aquirer;
      *aquirer = *aquirer + bVar9;
      pbVar18 = pbVar32;
      pbVar16 = pbVar57;
      if (!CARRY1(bVar6,bVar9)) {
        *pbVar57 = *pbVar57 + bVar7;
        cVar28 = bVar9 - *pbVar26;
        pbVar20 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar28);
        *pbVar20 = *pbVar20 ^ bVar7;
        *pbVar26 = *pbVar26 + cVar28;
        *pbVar32 = *pbVar32 + bVar7;
        *(char *)((int)pbVar32 * 2) = *(char *)((int)pbVar32 * 2) + cVar28;
        *aquirer = *aquirer + cVar28;
        pbVar20[0xa0a0000] = pbVar20[0xa0a0000] - cVar33;
        uStack_8 = (byte *)CONCAT22(uStack_8._2_2_,in_ES);
        aquirer = (byte *)CONCAT22(uVar59,CONCAT11(cVar30 + *pbVar32,cVar8));
        *pbVar32 = *pbVar32 + bVar7;
        pbVar16 = pbVar57 + 4;
        out(*(undefined4 *)pbVar57,(short)pbVar20);
        iVar25 = CONCAT31(uVar23,bVar7 + *pbVar26) + 0x6128;
        bVar9 = (char)iVar25 + *(char *)((int)unaff_EDI * 2 + 0x400003e);
        pbVar18 = (byte *)CONCAT31((int3)((uint)iVar25 >> 8),bVar9);
        cVar8 = (char)(pbVar20 + 1) - *pbVar26;
        param_2 = (uint *)CONCAT31((int3)((uint)(pbVar20 + 1) >> 8),cVar8);
        pbRam2a0a0000 = pbVar32;
        *(byte *)param_2 = (byte)*param_2 ^ bVar9;
        *pbVar18 = *pbVar18 + cVar34;
        *pbVar18 = *pbVar18 + bVar9;
        *aquirer = *aquirer + cVar8;
        bVar6 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar9;
        *(byte **)(pbVar26 + -0x41) =
             pbVar16 + (uint)CARRY1(bVar6,bVar9) + *(int *)(pbVar26 + -0x41);
        unaff_EBP = uStack_8;
      }
      *pbVar18 = *pbVar18 + (byte)pbVar18;
      uStack_8 = (byte *)((uint)uStack_8._2_2_ << 0x10);
      uVar23 = (undefined3)((uint)pbVar18 >> 8);
      bVar9 = (byte)pbVar18 | *pbVar16;
      bVar6 = pbVar26[0x69];
      *(char *)CONCAT31(uVar23,bVar9) = *(char *)CONCAT31(uVar23,bVar9) + bVar9;
      cVar8 = bVar9 + 0x7d;
      pcVar14 = (char *)CONCAT31(uVar23,cVar8);
      pbVar16[(int)pcVar14] = pbVar16[(int)pcVar14] + cVar8;
      cVar33 = cVar34 + bVar6 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34 + bVar6,uVar31)) + 0x67);
      *pcVar14 = *pcVar14 + cVar8;
      pcVar14 = (char *)CONCAT31(uVar23,bVar9 - 6);
      unaff_ESI = (uint *)(pbVar16 + 4);
      out(*(undefined4 *)pbVar16,(short)param_2);
      *pcVar14 = *pcVar14 + (bVar9 - 6);
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar33,uVar31)) + 0x6b);
      *(char *)CONCAT31(uVar23,bVar9) = *(char *)CONCAT31(uVar23,bVar9) + bVar9;
      pcVar14 = (char *)CONCAT31(uVar23,bVar9 + 0x7d);
      *(byte *)((int)unaff_ESI + (int)pcVar14) =
           *(byte *)((int)unaff_ESI + (int)pcVar14) + bVar9 + 0x7d;
      pbVar26 = (byte *)CONCAT22(uVar60,CONCAT11(cVar33 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar33,
                                                  uVar31)) + 0x6a),uVar31));
    }
    *pcVar14 = *pcVar14 + (char)pcVar14;
    cVar8 = (char)pcVar14 + '}';
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),cVar8);
    *(byte *)((int)unaff_ESI + (int)pcVar14) = *(byte *)((int)unaff_ESI + (int)pcVar14) + cVar8;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                               (char)param_2 - *(byte *)((int)param_2 + 0x457e02));
    unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + cVar8;
  }
  *pcVar14 = *pcVar14 + bVar6;
  bVar6 = bVar6 | pcVar14[0x4000045];
  piVar15 = (int *)CONCAT31(uVar23,bVar6);
  if ((char)bVar6 < '\x01') {
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    goto code_r0x004034a0;
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  bVar6 = bVar6 + 0x6f;
  pcVar14 = (char *)CONCAT31(uVar23,bVar6);
  *pcVar14 = *pcVar14 + bVar6;
  unaff_EBP = unaff_EBP + -*param_2;
  *pcVar14 = *pcVar14 + bVar6;
  *pbVar26 = *pbVar26 + bVar9;
  *(byte *)((int)pcVar14 * 2) = *(byte *)((int)pcVar14 * 2) ^ bVar6;
  in_AF = 9 < (bVar6 & 0xf) | in_AF;
  uVar13 = CONCAT31(uVar23,bVar6 + in_AF * '\x06') & 0xffffff0f;
  cVar28 = (char)uVar13;
  pcVar14 = (char *)CONCAT22((short)(uVar13 >> 0x10),CONCAT11(cVar33 + in_AF,cVar28));
  *pcVar14 = *pcVar14 + cVar28;
  cRam72110000 = cRam72110000 + bVar9;
  puVar55 = (undefined2 *)segment(in_SS,(short)&uStack_8 + -2);
  *puVar55 = in_ES;
  pcVar14[0x1a] = pcVar14[0x1a] + (char)((uint)param_2 >> 8);
  *aquirer = *aquirer + cVar8;
  *param_2 = (uint)(aquirer + *param_2);
  bVar6 = pbVar26[0x70];
  *aquirer = *aquirer + cVar8;
  uVar23 = (undefined3)((uint)aquirer >> 8);
  bVar7 = cVar8 + 0xa2;
  cVar33 = cVar34 + bVar6 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34 + bVar6,uVar31)) + 0x6f);
  pbVar26 = (byte *)CONCAT22(uVar60,CONCAT11(cVar33,uVar31));
  *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
  bVar6 = cVar8 + 0x44;
  piVar15 = (int *)CONCAT31(uVar23,bVar6);
  *(byte *)param_2 = ((byte)*param_2 - bVar6) - (0x5d < bVar7);
  if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    *(char *)piVar15 = (char)*piVar15 + cVar33;
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),(ushort)bVar9);
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    aquirer = (byte *)CONCAT22(uVar59,CONCAT11(cVar30 + (char)*piVar15,cVar8));
    in_SS = in_ES;
    uStack_4 = pbVar26;
code_r0x00403511:
    unaff_EBP = uStack_4;
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  cVar8 = cVar8 + -0x1a;
  piVar15 = (int *)CONCAT31(uVar23,cVar8);
  uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_ES);
  *param_2 = (*param_2 - (int)piVar15) - (uint)(0x5d < bVar6);
  if ((POPCOUNT(*param_2 & 0xff) & 1U) != 0) {
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    in_SS = in_ES;
    goto code_r0x004034f3;
  }
  *(char *)piVar15 = (char)*piVar15 + cVar8;
  in_SS = in_ES;
code_r0x0040349e:
  piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + -0x5e);
code_r0x004034a0:
  aquirer[0x2a0a0000] = aquirer[0x2a0a0000] - (char)aquirer;
  aquirer = (byte *)CONCAT22((short)((uint)aquirer >> 0x10),
                             CONCAT11((char)((uint)aquirer >> 8) + (char)*piVar15,(char)aquirer));
  bVar6 = (byte)piVar15;
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  uStack_4 = (byte *)CONCAT22(uStack_4._2_2_,in_ES);
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),
                             (char)param_2 - *(byte *)((int)param_2 + 0x467e02));
  unaff_EBP[0x6fe1411] = unaff_EBP[0x6fe1411] + bVar6;
  uVar13 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
  if (!CARRY1((byte)uVar13,bVar6)) {
    pbVar16 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
    *pbVar16 = *pbVar16 + bVar6;
    goto code_r0x004034f3;
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  uVar23 = (undefined3)((uint)piVar15 >> 8);
  bVar6 = bVar6 | *(byte *)((int)piVar15 + 0x4000046);
  piVar15 = (int *)CONCAT31(uVar23,bVar6);
  if ((char)bVar6 < '\x01') goto code_r0x00403511;
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  pbVar16 = (byte *)CONCAT31(uVar23,bVar6 + 0x6f);
  *pbVar16 = *pbVar16 + bVar6 + 0x6f;
  unaff_EBP = unaff_EBP + -*param_2;
  in_SS = in_ES;
  do {
    bVar6 = *(byte *)((int)unaff_EDI + 0x17);
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    aquirer = (byte *)CONCAT22((short)((uint)aquirer >> 0x10),
                               CONCAT11((char)((uint)aquirer >> 8) + bVar6 | (byte)*param_2,
                                        (char)aquirer));
    uVar23 = (undefined3)((uint)pbVar16 >> 8);
    bVar6 = (byte)pbVar16 | (byte)*param_2;
    bVar9 = bVar6 - *(byte *)CONCAT31(uVar23,bVar6);
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (uint)(bVar6 < *(byte *)CONCAT31(uVar23,bVar6)) +
                        *(int *)CONCAT31(uVar23,bVar9));
    pbVar16 = (byte *)CONCAT31(uVar23,bVar9);
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)param_2;
    bVar6 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar9;
    *param_2 = (uint)(pbVar16 + (uint)CARRY1(bVar6,bVar9) + *param_2);
    if ((POPCOUNT(*param_2 & 0xff) & 1U) != 0) {
      *(byte *)unaff_ESI = (byte)*unaff_ESI + 1;
      puVar58 = unaff_ESI;
      goto code_r0x00403529;
    }
    *pbVar16 = *pbVar16 + bVar9;
    piVar15 = (int *)CONCAT31(uVar23,bVar9 + 0x6f);
code_r0x004034f3:
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)piVar15;
    unaff_EBP = unaff_EBP + 1;
    pcVar14 = (char *)((int)((uint)piVar15 | 8) + *(int *)((uint)piVar15 | 8));
    *pcVar14 = *pcVar14 + (char)pcVar14;
    piVar15 = (int *)(pcVar14 + 0x53000000);
    bVar6 = (byte)piVar15;
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    *pbVar26 = *pbVar26 + (char)param_2;
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    *unaff_EBP = *unaff_EBP - (char)pbVar26;
    uVar13 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    if (CARRY1((byte)uVar13,bVar6)) goto code_r0x0040349e;
    pcVar14[0x5300006f] = pcVar14[0x5300006f] + (char)((uint)param_2 >> 8);
    pcVar14 = pcVar14 + 0x53000001;
    bVar9 = (byte)pcVar14;
    bRam7e060000 = bVar6;
    *pcVar14 = *pcVar14 + bVar9;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar9 + 0x2d);
    unaff_ESI[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar9) + unaff_ESI[(int)unaff_EDI * 2]);
    puVar58 = unaff_ESI;
code_r0x00403529:
    unaff_ESI = puVar58 + 1;
    out(*puVar58,(short)param_2);
    bVar6 = *pbVar16;
    bVar9 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar9;
  } while (!CARRY1(bVar6,bVar9));
  *pbVar16 = *pbVar16 + bVar9;
  uVar23 = (undefined3)((uint)pbVar16 >> 8);
  bVar9 = bVar9 | pbVar16[0x4000040];
  pcVar14 = (char *)CONCAT31(uVar23,bVar9);
  if ((char)bVar9 < '\x01') goto code_r0x00403579;
  *pcVar14 = *pcVar14 + bVar9;
  cVar8 = bVar9 + 10;
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  puVar58 = unaff_ESI;
  if (cVar8 == '\0' || SCARRY1(bVar9,'\n') != cVar8 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar6 = (byte)pcVar14;
  *pcVar14 = *pcVar14 + bVar6;
  piVar15 = (int *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar6 + 0x2d);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
code_r0x00403549:
  uVar13 = *unaff_ESI;
  bVar6 = (byte)piVar15;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
  if (!CARRY1((byte)uVar13,bVar6)) goto code_r0x004034f3;
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  uVar23 = (undefined3)((uint)piVar15 >> 8);
  bVar6 = bVar6 | *(byte *)((int)piVar15 + 0x4000041);
  if ((char)bVar6 < '\x01') {
    *(byte *)param_2 = (byte)*param_2 + (char)aquirer;
    *(byte *)param_2 = (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x7e);
    param_2 = (uint *)((int)param_2 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
  piVar15 = (int *)CONCAT31(uVar23,bVar6 + 0xb);
  puVar58 = unaff_ESI;
code_r0x0040355b:
  unaff_EBP = unaff_EBP + -*(int *)((int)puVar58 + 2);
  *unaff_EBP = *unaff_EBP - (char)pbVar26;
  uVar13 = *puVar58;
  bVar6 = (byte)piVar15;
  *(byte *)puVar58 = (byte)*puVar58 + bVar6;
  if (CARRY1((byte)uVar13,bVar6)) goto code_r0x00403548;
code_r0x00403565:
  piVar15 = piVar15 + 0x1ec09c00;
  pbVar16 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
  *pbVar16 = *pbVar16 + (char)piVar15;
  *(byte *)puVar58 = (byte)*puVar58 + (char)piVar15 + (char)*piVar15;
  unaff_ESI = puVar58 + 1;
  out(*puVar58,(short)param_2);
  pcVar14 = (char *)CONCAT31((int3)((uint)piVar15 >> 8),uRam8c0a0000);
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
  bVar9 = bVar6 + 0x2d;
  pcVar14 = (char *)CONCAT31(uVar23,bVar9);
  unaff_ESI[(int)unaff_EDI * 2] =
       (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
  pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
  uVar13 = *unaff_ESI;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar9;
  if (!CARRY1((byte)uVar13,bVar9)) {
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                               CONCAT11((byte)((uint)pbVar26 >> 8) | *(byte *)((int)puVar58 + 0x45),
                                        (char)pbVar26));
    goto code_r0x0040353f;
  }
  *pcVar14 = *pcVar14 + bVar9;
  bVar9 = bVar9 | pcVar14[0x4000042];
  pcVar14 = (char *)CONCAT31(uVar23,bVar9);
  if ('\0' < (char)bVar9) {
code_r0x004035a1:
    bVar9 = (byte)pcVar14;
    *pcVar14 = *pcVar14 + bVar9;
    uVar23 = (undefined3)((uint)pcVar14 >> 8);
    bVar6 = bVar9 + 10;
    if (bVar6 == 0 || SCARRY1(bVar9,'\n') != (char)bVar6 < '\0') {
      pcVar14 = (char *)CONCAT31(uVar23,bVar9 + 8 + (0xf5 < bVar9));
code_r0x004035e5:
      bVar9 = (byte)pcVar14;
      *pcVar14 = *pcVar14 + bVar9;
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      bVar6 = bVar9 + 0x2d;
      pcVar14 = (char *)CONCAT31(uVar23,bVar6);
      unaff_ESI[(int)unaff_EDI * 2] =
           (uint)((int)param_2 + (uint)(0xd2 < bVar9) + unaff_ESI[(int)unaff_EDI * 2]);
      uVar13 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      if (CARRY1((byte)uVar13,bVar6)) {
        *pcVar14 = *pcVar14 + bVar6;
        bVar6 = bVar6 | pcVar14[0x4000044];
        pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
        if ('\0' < (char)bVar6) {
          *pbVar16 = *pbVar16 + bVar6;
          pbVar16 = (byte *)(CONCAT31(uVar23,bVar6 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar6));
          pbRam2a060000 = pbVar16;
          *pbVar26 = *pbVar26 + (char)pbVar26;
          *(byte *)param_2 = (byte)*param_2 ^ (byte)pbVar16;
          *pbVar16 = *pbVar16 + (char)((uint)aquirer >> 8);
          *pbVar16 = *pbVar16 + (byte)pbVar16;
          puVar58 = unaff_EDI;
          in_SS = in_ES;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      aquirer = (byte *)CONCAT31((int3)((uint)aquirer >> 8),
                                 (byte)aquirer |
                                 *(byte *)((int)(param_2 + 0xa004000) + (int)unaff_EDI));
      puVar58 = unaff_ESI;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    bVar9 = bVar9 + 0x37;
    piVar15 = (int *)CONCAT31(uVar23,bVar9);
    unaff_ESI[(int)unaff_EDI * 2] =
         (uint)((int)param_2 + (uint)(0xd2 < bVar6) + unaff_ESI[(int)unaff_EDI * 2]);
    pbStack_14 = (byte *)CONCAT22(pbStack_14._2_2_,in_ES);
    uVar13 = *unaff_ESI;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar9;
    puVar58 = unaff_ESI;
    if (!CARRY1((byte)uVar13,bVar9)) goto code_r0x0040355b;
    *(byte *)piVar15 = (char)*piVar15 + bVar9;
    bVar9 = bVar9 | *(byte *)((int)piVar15 + 0x4000043);
    pbVar16 = (byte *)CONCAT31(uVar23,bVar9);
    if ((char)bVar9 < '\x01') {
      *pbVar16 = *pbVar16 + bVar9;
      unaff_EBP = unaff_EBP + -*(int *)((int)unaff_EDI + -0x5d);
      *pbVar16 = *pbVar16 + bVar9;
      uStack_1c = (undefined4 *)((uint)uStack_1c._2_2_ << 0x10);
      piVar15 = (int *)CONCAT31(uVar23,bVar9 - *pbVar16);
      unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)(bVar9 < *pbVar16) - *piVar15));
      pbVar16 = (byte *)CONCAT31(uVar23,(bVar9 - *pbVar16) + (char)*piVar15);
      pbStack_14 = (byte *)0x17000000;
      puVar58 = unaff_EDI;
code_r0x00403615:
      bVar6 = *pbVar16;
      bVar9 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar9;
      *param_2 = (uint)(pbVar16 + (uint)CARRY1(bVar6,bVar9) + *param_2);
      unaff_EDI = puVar58;
      if ((POPCOUNT(*param_2 & 0xff) & 1U) == 0) {
        *pbVar16 = *pbVar16 + bVar9;
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar9 + 0x28);
        unaff_EDI = puVar58 + 1;
        uVar13 = in((short)param_2);
        *puVar58 = uVar13;
        *pcVar14 = *pcVar14 + bVar9 + 0x28;
        aquirer = (byte *)CONCAT22((short)((uint)aquirer >> 0x10),
                                   CONCAT11((byte)((uint)aquirer >> 8) | pbVar26[(int)aquirer],
                                            (char)aquirer));
        pcVar14[0x28] = pcVar14[0x28] + (char)((uint)param_2 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar16 = *pbVar16 + bVar9;
    uVar13 = CONCAT31(uVar23,bVar9 + 0xb);
    piVar15 = (int *)(uVar13 - *unaff_ESI);
    if (uVar13 < *unaff_ESI) {
      cVar8 = (char)piVar15;
      *(char *)piVar15 = (char)*piVar15 + cVar8;
      uVar59 = (undefined2)((uint)pbVar26 >> 0x10);
      cVar33 = (char)pbVar26;
      bVar6 = (byte)((uint)pbVar26 >> 8) | *(byte *)((int)param_2 + 2);
      *unaff_EBP = *unaff_EBP - cVar33;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar8;
      uStack_1c = (undefined4 *)CONCAT22(uStack_1c._2_2_,in_ES);
      pbVar26 = (byte *)CONCAT22(uVar59,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar59,CONCAT11(bVar6,
                                                  cVar33)) + 0x38),cVar33));
      *(char *)piVar15 = (char)*piVar15 + cVar8;
      pcVar14 = (char *)CONCAT31((int3)((uint)piVar15 >> 8),cVar8 + 'o');
      *(byte *)param_2 = (byte)*param_2 + (char)aquirer;
      *pcVar14 = *pcVar14 - cVar33;
      *pcVar14 = *pcVar14 + cVar8 + 'o';
      unaff_EDI = (uint *)((int)unaff_EDI - unaff_ESI[0x11]);
      goto code_r0x004035e5;
    }
    puVar58 = unaff_ESI + 1;
    out(*unaff_ESI,(short)param_2);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar9) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_14 & 0x4000) != 0;
  bVar62 = ((uint)pbStack_14 & 0x400) != 0;
  in_IF = ((uint)pbStack_14 & 0x200) != 0;
  in_TF = ((uint)pbStack_14 & 0x100) != 0;
  in_AF = ((uint)pbStack_14 & 0x10) != 0;
  in_ID = ((uint)pbStack_14 & 0x200000) != 0;
  in_AC = ((uint)pbStack_14 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar8 = (char)pcVar14;
  *pcVar14 = *pcVar14 + cVar8;
  aquirer = (byte *)CONCAT22((short)((uint)aquirer >> 0x10),
                             CONCAT11((byte)((uint)aquirer >> 8) | (byte)*param_2,(char)aquirer));
  pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[0x3e],(char)pbVar26));
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
    cVar33 = cVar8 + '(';
    pcVar14 = (char *)CONCAT31(uVar23,cVar33);
    in_AF = ((uint)pbVar16 & 0x1000) != 0;
    *pcVar14 = *pcVar14 + cVar33;
    puVar58 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*unaff_ESI);
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                               CONCAT11((byte)((uint)pbVar26 >> 8) |
                                        *(byte *)((int)unaff_ESI + 0x3f),(char)pbVar26));
    *pcVar14 = *pcVar14 + cVar33;
    pbVar16 = (byte *)CONCAT31(uVar23,cVar8 + 'M');
    param_2 = (uint *)((uint)puVar58 | *puVar58);
    *pbVar16 = *pbVar16 + (char)((uint)aquirer >> 8);
code_r0x00403659:
    puVar58 = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
    bVar6 = (byte)pbVar16;
    *(byte *)unaff_EDI = bVar6;
    *pbVar16 = *pbVar16 + bVar6;
    uVar23 = (undefined3)((uint)pbVar16 >> 8);
    bVar6 = bVar6 | (byte)*param_2;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6);
    unaff_EDI = puVar58;
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x0040369e;
    *pcVar14 = *pcVar14 + bVar6;
    bVar6 = bVar6 + 2;
    *unaff_EBP = *unaff_EBP - (char)pbVar26;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    puVar22 = unaff_ESI + (uint)bVar62 * -2 + 1;
    out(*unaff_ESI,(short)param_2);
    unaff_EDI = (uint *)((int)puVar58 + (uint)bVar62 * -2 + 1);
    unaff_ESI = (uint *)((int)puVar22 + (uint)bVar62 * -2 + 1);
    *(byte *)puVar58 = (byte)*puVar22;
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    cVar33 = (char)((uint)aquirer >> 8);
    pbVar26[-0x21f60000] = pbVar26[-0x21f60000] - cVar33;
    cVar8 = (bVar6 | (byte)*unaff_ESI) - 6;
    piVar15 = (int *)CONCAT31(uVar23,cVar8);
    pcVar14 = (char *)((int)piVar15 * 2 + 0x2adc0a00);
    *pcVar14 = *pcVar14 - cVar33;
    *piVar15 = (int)(*piVar15 + (int)param_2);
    *(char *)piVar15 = (char)*piVar15 + cVar8;
    bVar6 = cVar8 + (char)*piVar15;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar13 = CONCAT31(uVar23,bVar6 + in_AF * '\x06') & 0xffffff0f;
    pbVar16 = (byte *)CONCAT22((short)(uVar13 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) + in_AF,(char)uVar13));
    pbVar18 = aquirer;
  }
  else {
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + (char)((uint)param_2 >> 8);
    pbVar18 = aquirer;
  }
  *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)((uint)pbVar16 >> 8);
  *(byte *)param_2 = (byte)*param_2 + (char)pbVar18;
  bVar9 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  aquirer = pbVar18;
  unaff_EBP = pbStack_14;
  if (!CARRY1(bVar6,bVar9)) goto code_r0x004036a6;
  *pbVar16 = *pbVar16 + bVar9;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar9 | pbVar16[0x400003f]);
  aquirer = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),
                             (char)pbVar18 - *(byte *)((int)param_2 + 0x5040302));
  *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) - (char)((uint)pbVar18 >> 8);
  while( true ) {
code_r0x004036a6:
    aquirer = (byte *)CONCAT31((int3)((uint)aquirer >> 8),(char)aquirer + (byte)*unaff_ESI);
    pbVar16 = (byte *)(CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + '%') + 0x1ebd9f3);
    uStack_1c = (undefined4 *)CONCAT22(uStack_1c._2_2_,in_ES);
    bVar6 = (byte)pbVar16;
    bVar61 = CARRY1(*pbVar16,bVar6);
    *pbVar16 = *pbVar16 + bVar6;
    puVar37 = uStack_1c + -1;
    *(undefined2 *)(uStack_1c + -1) = in_ES;
    cVar8 = (char)param_2;
    if (bVar61) {
      *pbVar16 = *pbVar16 + bVar6;
      uVar59 = (undefined2)((uint)pbVar26 >> 0x10);
      bVar7 = (byte)((uint)pbVar26 >> 8) | unaff_EBP[0x47];
      pcVar14 = (char *)CONCAT22(uVar59,CONCAT11(bVar7,(char)pbVar26));
      *pbVar16 = *pbVar16 + bVar6;
      uVar23 = (undefined3)((uint)pbVar16 >> 8);
      bVar6 = bVar6 + 0x2a;
      *pcVar14 = *pcVar14 + cVar8;
      pbVar16 = (byte *)((int)CONCAT31(uVar23,bVar6) * 2);
      *pbVar16 = *pbVar16 ^ bVar6;
      bVar6 = bVar6 ^ *(byte *)CONCAT31(uVar23,bVar6);
      pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
      bVar9 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar6;
      *pbVar16 = (*pbVar16 - bVar6) - CARRY1(bVar9,bVar6);
      *aquirer = *aquirer + cVar8;
      pbVar26 = (byte *)CONCAT22(uVar59,CONCAT11(bVar7 + pcVar14[0x38],(char)pbVar26));
      *pbVar16 = *pbVar16 + bVar6;
      cVar33 = bVar6 + 2;
      if ((POPCOUNT(cVar33) & 1U) != 0) {
        pcVar1 = (code *)swi(7);
        uVar64 = (*pcVar1)();
        pbVar16 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar23,cVar33) = *(char *)CONCAT31(uVar23,cVar33) + cVar33;
      bVar6 = bVar6 + 0x71;
      pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
      in_SS = *(undefined2 *)(uStack_1c + -1);
      *pbVar16 = *pbVar16 + bVar6;
      iVar25 = (int)aquirer - *param_2;
      aquirer = (byte *)CONCAT22((short)((uint)iVar25 >> 0x10),
                                 CONCAT11((char)((uint)iVar25 >> 8) + *pbVar16,(char)iVar25));
      unaff_EBP = (byte *)*uStack_1c;
      bVar61 = CARRY1(*pbVar16,bVar6);
      *pbVar16 = *pbVar16 + bVar6;
      *(undefined2 *)uStack_1c = in_ES;
      *(undefined2 *)(uStack_1c + -1) = in_ES;
    }
    bVar6 = (byte)pbVar16;
    uVar23 = (undefined3)((uint)pbVar16 >> 8);
    if (bVar61) break;
    *(byte *)param_2 = (byte)*param_2 + (byte)aquirer;
    *(byte *)((int)param_2 + (int)unaff_EBP) = *(byte *)((int)param_2 + (int)unaff_EBP) + bVar6;
    pcVar14 = (char *)CONCAT31(uVar23,(byte)*param_2);
code_r0x0040369e:
    pbVar16 = (byte *)(pcVar14 + *(int *)(pcVar14 + 0x6c28));
  }
  *pbVar16 = *pbVar16 + bVar6;
  uVar24 = (uint3)((uint)aquirer >> 8);
  pbVar18 = (byte *)CONCAT31(uVar24,(byte)aquirer | *pbVar26);
  in_SS = *(undefined2 *)uStack_1c;
  puVar37 = uStack_1c + 1;
  puVar58 = unaff_ESI + (uint)bVar62 * -2 + 1;
  out(*unaff_ESI,(short)param_2);
  unaff_EDI = (uint *)((int)unaff_EDI + (uint)bVar62 * -2 + 1);
  *pbVar16 = *pbVar16 + bVar6;
  bVar6 = bVar6 | (byte)*unaff_EDI;
  pbVar16 = (byte *)CONCAT31(uVar23,bVar6);
  *(byte *)(unaff_EDI + 0x1bc28000) = (byte)unaff_EDI[0x1bc28000] - (char)((uint)aquirer >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar6);
  *(undefined2 *)uStack_1c = pbStack_14._0_2_;
  cVar30 = (char)pbVar26;
  cVar33 = cVar30 - (byte)*param_2;
  pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar33);
  if (cVar33 != '\0' && (char)(byte)*param_2 <= cVar30) {
    *pbVar16 = *pbVar16 + bVar6;
    iVar25 = CONCAT31(uVar23,bVar6 + 0x2a);
    unaff_ESI = (uint *)((int)puVar58 + 1);
    cVar33 = (char)((uint)param_2 >> 8) + *(byte *)((int)param_2 + -0x7b);
    uVar64 = CONCAT44(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar33,cVar8)),iVar25);
    in_ES = *(undefined2 *)uStack_1c;
    pcVar14 = (char *)(iVar25 + 0x6f);
    *pcVar14 = *pcVar14 + cVar33;
    pbVar18 = (byte *)((uint)uVar24 << 8);
    do {
      piVar15 = (int *)((ulonglong)uVar64 >> 0x20);
      pcVar14 = (char *)uVar64;
      *(char *)piVar15 = (char)*piVar15;
      if ((char)*piVar15 == '\0') {
        pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
        pbStack_14._0_2_ = in_ES;
_ctor:
        param_2 = (uint *)((ulonglong)uVar64 >> 0x20);
        pbVar18 = (byte *)((uint)CONCAT21((short)((uint)pbVar18 >> 0x10),
                                          (char)((uint)pbVar18 >> 8) + *(char *)uVar64) << 8);
        pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
        *(byte *)param_2 = (byte)*param_2;
        uVar23 = (undefined3)((ulonglong)uVar64 >> 8);
        bVar9 = (char)uVar64 - *(char *)uVar64;
        pbVar16 = (byte *)CONCAT31(uVar23,bVar9);
        bVar6 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar9;
        puVar58 = (uint *)((int)unaff_ESI + (uint)CARRY1(bVar6,bVar9) + *(int *)pbVar16);
        pbVar16 = (byte *)CONCAT31(uVar23,bVar9);
        uStack_1c = puVar37;
        break;
      }
      *pcVar14 = *pcVar14 + (char)uVar64;
      *piVar15 = (int)(unaff_EBP + *piVar15);
      unaff_ESI = (uint *)((int)unaff_ESI + 1);
      uVar64 = CONCAT44(CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar64 >> 0x28) +
                                          *(char *)((int)piVar15 + -0x33),
                                          (char)((ulonglong)uVar64 >> 0x20))),pcVar14);
      in_ES = *(undefined2 *)puVar37;
      puVar37 = (undefined4 *)((int)puVar37 + 4);
      pbVar16 = pbVar18;
code_r0x0040371e:
      puVar58 = (uint *)((ulonglong)uVar64 >> 0x20);
      pbVar32 = (byte *)uVar64;
      bVar9 = (byte)((ulonglong)uVar64 >> 0x28);
      pbVar32[0x6f] = pbVar32[0x6f] + bVar9;
      pbVar18 = (byte *)((uint)pbVar16 & 0xffffff00);
      *(char *)puVar58 = (char)*puVar58;
      bVar6 = (byte)uVar64;
      if ((char)*puVar58 != '\0') {
        *pbVar32 = *pbVar32 + bVar6;
        uVar13 = *puVar58;
        *puVar58 = (uint)(unaff_EBP + *puVar58);
        piVar39 = (int *)((int)puVar37 + -4);
        *(uint **)((int)puVar37 + -4) = unaff_ESI;
        if (CARRY4(uVar13,(uint)unaff_EBP)) {
          *pbVar32 = *pbVar32 + bVar6;
          *(undefined2 *)((int)puVar37 + -8) = in_ES;
          puVar22 = puVar58 + 0x1d028000;
          uVar13 = *puVar22;
          *(byte *)puVar22 = (byte)*puVar22 - bVar9;
          *(uint *)pbVar32 = (*(int *)pbVar32 - (int)pbVar32) - (uint)((byte)uVar13 < bVar9);
          *(byte *)puVar58 = (char)*puVar58 + bVar6;
          *unaff_EBP = *unaff_EBP;
          uVar64 = CONCAT44(puVar58,CONCAT31((int3)((ulonglong)uVar64 >> 8),bVar6 + 0x2a));
          puVar38 = (undefined2 *)((int)puVar37 + -0xc);
          puVar37 = (undefined4 *)((int)puVar37 + -0xc);
          *puVar38 = in_DS;
          pbStack_14._0_2_ = in_ES;
          goto _ctor;
        }
        bVar61 = false;
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),*pbVar32);
        goto code_r0x004037a7;
      }
      bVar9 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar6;
      *(uint *)pbVar32 = (*(int *)pbVar32 - (int)pbVar32) - (uint)CARRY1(bVar9,bVar6);
      bVar6 = *pbVar18;
      bVar9 = (byte)((ulonglong)uVar64 >> 0x20);
      *pbVar18 = *pbVar18 + bVar9;
      if (CARRY1(bVar6,bVar9)) goto code_r0x0040375a;
    } while( true );
  }
  uVar64 = CONCAT44(param_2,pbVar16);
  unaff_ESI = puVar58 + (uint)bVar62 * -2 + 1;
  out(*puVar58,(short)param_2);
  bVar9 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *pbVar18 = *pbVar18 + (char)pbVar26;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *(byte **)(pbVar26 + -0x49) =
       (byte *)((int)unaff_ESI + (uint)CARRY1(bVar6,bVar9) + *(int *)(pbVar26 + -0x49));
  puVar37 = uStack_1c;
  in_ES = pbStack_14._0_2_;
code_r0x0040375a:
  pbVar16 = (byte *)uVar64;
  *pbVar16 = *pbVar16 + (char)uVar64;
  bVar61 = CARRY1((byte)((uint)pbVar18 >> 8),*pbVar16);
  *(undefined2 *)((int)puVar37 + -4) = in_SS;
  iVar25 = CONCAT31(0x1f0a00,bVar61 + 'o') + *(int *)(pbVar26 + (int)unaff_EBP) +
           (uint)(0x90 < bVar61) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar64 >> 0x20);
  pcVar17 = (char *)(CONCAT31((int3)((uint)iVar25 >> 8),(char)iVar25 + -0x66) | *unaff_EDI);
  bVar6 = *(byte *)((int)unaff_EDI + -0x46);
  pcVar14 = (char *)CONCAT22(0xd0a,(ushort)bVar6 << 8);
  *pcVar17 = *pcVar17 + (char)pcVar17;
  bVar9 = (byte)((ulonglong)uVar64 >> 0x20);
  puVar29 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | pbVar26[(int)unaff_EBP],bVar9));
  *pcVar14 = *pcVar14 + (char)pcVar17;
  *unaff_EBP = *unaff_EBP - bVar6;
  *puVar29 = *puVar29;
  pbVar16 = (byte *)(((uint)pcVar17 | 8) + 0x4490f9d8);
  bVar6 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar6;
  uVar13 = *unaff_ESI;
  *(uint *)((int)unaff_ESI + (int)pbVar16) =
       *(uint *)((int)unaff_ESI + (int)pbVar16) ^ (uint)pcVar14;
  *pbVar16 = *pbVar16 | bVar6;
  piVar39 = (int *)0x2609fffc;
  bVar61 = false;
  uRam2609fffc = in_ES;
  *pbVar16 = *pbVar16 | bVar6;
  uVar64 = CONCAT44(CONCAT31((int3)((uint)puVar29 >> 8),bVar9 | (byte)uVar13),pbVar16);
code_r0x004037a7:
  while( true ) {
    pbVar16 = (byte *)((ulonglong)uVar64 >> 0x20);
    uVar59 = (undefined2)((ulonglong)uVar64 >> 0x20);
    out(*unaff_ESI,uVar59);
    out(unaff_ESI[(uint)bVar62 * -2 + 1],uVar59);
    puVar58 = (uint *)((int)unaff_EDI + (int)pbVar16);
    uVar13 = *puVar58;
    uVar4 = (uint)uVar64 + *puVar58;
    *puVar58 = uVar4 + bVar61;
    iVar25 = *piVar39 + *(int *)(pcVar14 + (int)pbVar16) +
             (uint)(CARRY4(uVar13,(uint)uVar64) || CARRY4(uVar4,(uint)bVar61));
    cVar8 = (char)iVar25 + '\t';
    pbVar18 = (byte *)CONCAT31((int3)((uint)iVar25 >> 8),cVar8);
    pcVar17 = (char *)((uint)bVar62 * -8 + 0x260a0004);
    out(uRam260a0000,uVar59);
    uVar59 = (undefined2)piVar39[1];
    *pbVar18 = *pbVar18 + cVar8;
    bVar9 = (byte)((uint)pcVar14 >> 8) | *pbVar16;
    *(undefined2 *)(piVar39 + 1) = in_DS;
    bVar6 = *pbVar18;
    pbVar18 = pbVar18 + (uint)CARRY1(bVar9,*pbVar18) + *(int *)pbVar18;
    *pbVar16 = *pbVar16 + 6;
    cVar33 = (char)pbVar26 - *pcVar17;
    pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),CONCAT11(bVar9 + bVar6 + *pbVar18,6));
    *pbVar18 = *pbVar18;
    *(undefined2 *)piVar39 = in_ES;
    uVar23 = (undefined3)((uint)pbVar18 >> 8);
    cVar8 = (char)pbVar18 - *pbVar18;
    piVar15 = (int *)CONCAT31(uVar23,cVar8);
    unaff_ESI = (uint *)(pcVar17 + *piVar15);
    bVar6 = cVar8 + (char)*piVar15;
    pcVar17 = (char *)CONCAT31(uVar23,bVar6);
    piVar40 = piVar39 + -1;
    piVar39[-1] = (int)pcVar14;
    *pcVar17 = *pcVar17 + bVar6;
    *pcVar17 = *pcVar17 + bVar6;
    *pcVar17 = *pcVar17 + bVar6;
    bVar61 = CARRY1(*pbVar16,bVar6);
    *pbVar16 = *pbVar16 + bVar6;
    if (bVar61) break;
    in_ES = (undefined2)piVar39[-1];
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),cVar33);
    uVar64 = CONCAT44(pbVar16,pcVar17);
  }
  *pcVar17 = *pcVar17 + bVar6;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((byte)((uint)pbVar26 >> 8) | bRam080a0056,cVar33));
  *pcVar17 = *pcVar17 + bVar6;
  bVar7 = bVar6 + 2;
  *pbVar32 = *pbVar32 - (char)((ulonglong)uVar64 >> 0x20);
  *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
  uVar13 = *unaff_ESI;
  uVar27 = (undefined3)((uint)pcVar14 >> 8);
  pbVar26 = (byte *)(CONCAT31(uVar27,(byte)uVar13) | 6);
  bVar9 = 9 < (bVar6 + 0x74 & 0xf) | in_AF;
  bVar10 = bVar6 + 0x74 + bVar9 * '\x06';
  bVar10 = bVar10 + (0x90 < (bVar10 & 0xf0) | 0x8d < bVar7 | bVar9 * (0xf9 < bVar10)) * '`';
  pbVar18 = (byte *)CONCAT31(uVar23,bVar10);
  bVar6 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar10;
  if (!SCARRY1(bVar6,bVar10)) {
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    unaff_ESI = (uint *)((int)unaff_ESI + *(int *)(pbVar16 + 0x33));
    *pbVar18 = *pbVar18 | bVar10;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar10;
    bVar6 = bVar10 + 0x72;
    piVar39[-2] = (int)pbVar32;
    *(byte *)CONCAT31(uVar23,bVar6) = *(byte *)CONCAT31(uVar23,bVar6) | bVar6;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
    pbVar26 = (byte *)CONCAT31(uVar27,((byte)uVar13 | 6) + (byte)*unaff_ESI);
    pcVar14 = (char *)CONCAT31(uVar23,bVar10 - 0x11);
    piVar40 = piVar39 + -3;
    piVar39[-3] = (int)pbVar26;
    *pcVar14 = *pcVar14 + (bVar10 - 0x11);
    pbVar18 = (byte *)CONCAT31(uVar23,bVar10 - 0xf);
    unaff_EDI = (uint *)((int)unaff_EDI + iRam080a0052);
    *pbVar18 = *pbVar18 + (bVar10 - 0xf);
  }
code_r0x00403825:
  pbVar57 = (byte *)0x80a0000;
  uVar23 = (undefined3)((uint)pbVar18 >> 8);
  cVar8 = (char)pbVar18 + '\x7f';
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  *(byte **)((int)piVar40 + -4) = pbVar32;
  *pcVar14 = *pcVar14 + cVar8;
  iVar25 = CONCAT31(uVar23,(char)pbVar18 + -0x7f) + 0x547d;
  cVar33 = (char)iVar25;
  uVar23 = (undefined3)((uint)iVar25 >> 8);
  cVar8 = cVar33 + '*';
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | (byte)*unaff_ESI);
  cVar30 = (char)pbVar32 - (byte)*unaff_ESI;
  uVar60 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar34 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar30) + 0x57);
  *pcVar14 = *pcVar14 + cVar8;
  bVar6 = cVar33 + 0x54U & *pbVar16;
  iVar25 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
  pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x2a);
  *(undefined2 *)((int)piVar40 + -8) = in_DS;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,cVar30)) + 0x58);
  *pcVar14 = *pcVar14 + bVar6 + 0x2a;
  bVar7 = bVar6 + 0x54 & *pbVar16;
  iVar3 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
  pcVar14 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
  pbVar18 = *(byte **)((int)piVar40 + -8);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar14 = *pcVar14 + bVar7 + 0x2a;
  pcVar14 = (char *)CONCAT31(uVar23,bVar7 + 0x57);
  pbVar16 = pbVar16 + *(int *)pbVar18;
  *(undefined4 *)((int)piVar40 + -8) = 0x2a;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,cVar30)) + 0x55);
  *pcVar14 = *pcVar14 + bVar7 + 0x57;
  cVar8 = bVar7 - 0x3a;
  pcVar14 = (char *)CONCAT31(uVar23,cVar8);
  *(undefined2 *)((int)piVar40 + -0xc) = uVar59;
  *pcVar14 = *pcVar14 + cVar8;
  bVar6 = *pbVar16;
  cVar33 = (char)pbVar26;
  *(undefined2 *)((int)piVar40 + -0x10) = in_DS;
  pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar60,CONCAT11(cVar34,
                                                  cVar30)) + 0x59),cVar30));
  *pcVar14 = *pcVar14 + cVar8;
  bVar11 = bVar7 - 0x10 & *pbVar16;
  unaff_EDI = (uint *)((int)unaff_EDI +
                      CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar3 + iVar25);
  *(char *)CONCAT31(uVar23,bVar11) = *(char *)CONCAT31(uVar23,bVar11) + bVar11;
  bVar11 = bVar11 + 0x2a;
  pbVar20 = (byte *)CONCAT31(uVar23,bVar11);
  puVar37 = (undefined4 *)((int)piVar40 + -0x14);
  *(undefined2 *)((int)piVar40 + -0x14) = in_DS;
  bVar7 = *(byte *)((int)unaff_EDI + 0x17);
  *pbVar20 = *pbVar20 + bVar11;
  bVar10 = *pbVar16;
  puVar42 = (undefined4 *)((int)piVar40 + -0x18);
  *(undefined2 *)((int)piVar40 + -0x18) = in_DS;
  bVar12 = *(byte *)((int)unaff_EDI + 0x1a);
  *pbVar20 = *pbVar20 + bVar11;
  pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar26 >> 8) | bVar6) + bVar7 | bVar10) +
                                      bVar12 | *pbVar16,cVar33));
  *pbVar32 = *pbVar32 + cVar30;
  *(byte *)((int)pbVar20 * 2) = *(byte *)((int)pbVar20 * 2) ^ bVar11;
  bVar6 = *pbVar20;
  *pbVar20 = *pbVar20 + bVar11;
  bVar7 = *pbVar20;
  *pbVar26 = *pbVar26 + (char)pbVar16;
  bVar6 = ((bVar11 - bVar7) - CARRY1(bVar6,bVar11)) + *pbVar16;
  pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
  if ((POPCOUNT(bVar6) & 1U) != 0) {
    pbVar16 = *(byte **)((int)piVar40 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar20 = *pbVar20 + bVar6;
  cVar8 = (bVar6 + 0x6f) - (0x90 < bVar6);
  pbVar19 = (byte *)CONCAT31(uVar23,cVar8);
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + cVar33;
  if (SCARRY1(bVar6,cVar33) == (char)*pbVar16 < '\0') {
    cRam33100000 = cRam33100000 - cVar8;
    cVar8 = cVar8 + *pbVar16;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    puVar37 = (undefined4 *)((int)piVar40 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar19 = *pbVar19 + (char)pbVar19;
code_r0x004038b0:
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    cVar8 = (char)pbVar19 + '\x02';
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    puVar37 = puVar42;
    if ((POPCOUNT(cVar8) & 1U) != 0) {
code_r0x00403908:
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar18);
      cVar8 = (char)pbVar20 + *pbVar16;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
code_r0x0040390c:
      cVar33 = (char)pbVar20;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040390e;
      *pbVar18 = *pbVar18 + cVar33;
      goto code_r0x00403962;
    }
    *pbVar20 = *pbVar20 + cVar8;
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    piVar40 = (int *)((int)puVar42 + -4);
    *(byte **)((int)puVar42 + -4) = pbVar26;
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
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403916;
    *pbVar20 = *pbVar20 + bVar6;
    cVar33 = cVar8 + 'q';
    piVar15 = (int *)CONCAT31(uVar23,cVar33);
    *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0x90 < bVar6);
    bVar6 = *pbVar32;
    bVar7 = (byte)((uint)pbVar26 >> 8);
    *pbVar32 = *pbVar32 + bVar7;
    if (!CARRY1(bVar6,bVar7)) {
      out(*(undefined4 *)pbVar18,(short)pbVar16);
      bVar6 = (cVar33 - (char)*piVar15) - CARRY1(bVar6,bVar7);
      *pbVar16 = *pbVar16 + (char)pbVar26;
      cVar8 = bVar6 - *(byte *)CONCAT31(uVar23,bVar6);
      unaff_ESI = (uint *)(pbVar18 +
                          ((((uint)bVar62 * -8 + 4) - *(int *)CONCAT31(uVar23,cVar8)) -
                          (uint)(bVar6 < *(byte *)CONCAT31(uVar23,bVar6))));
      pbVar18 = (byte *)CONCAT31(uVar23,cVar8);
      goto code_r0x00403825;
    }
    *(char *)piVar15 = (char)*piVar15 + cVar33;
    uVar60 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar6 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar15 = (char)*piVar15 + cVar33;
    pcVar14 = (char *)CONCAT31(uVar23,cVar8 + 's');
    pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar6 + *(char *)(CONCAT22(uVar60,CONCAT11(bVar6,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar14 = *pcVar14 + cVar8 + 's';
    bVar6 = cVar8 - 0xf;
    pbVar16 = *(byte **)((int)puVar42 + -4);
    *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
    bVar7 = cVar8 + 0x1e;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar7);
    *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
         pbVar16 + (uint)(0xd2 < bVar6) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    puVar44 = (undefined4 *)((int)puVar42 + -4);
    *(undefined2 *)((int)puVar42 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar19;
    bVar6 = *pbVar18;
    *pbVar18 = *pbVar18 + bVar7;
    if (CARRY1(bVar6,bVar7)) {
      *pbVar19 = *pbVar19 + bVar7;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar7 | pbVar19[0x400005a]);
      if ('\0' < (char)(bVar7 | pbVar19[0x400005a])) {
code_r0x004038f6:
        bVar6 = (byte)pbVar20;
        *pbVar20 = *pbVar20 + bVar6;
        uVar23 = (undefined3)((uint)pbVar20 >> 8);
        cVar8 = ((bVar6 + 0x28) - *(char *)CONCAT31(uVar23,bVar6 + 0x28)) - (0xd7 < bVar6);
        pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
        bVar6 = *pbVar32;
        bVar7 = (byte)((uint)pbVar26 >> 8);
        *pbVar32 = *pbVar32 + bVar7;
        if (CARRY1(bVar6,bVar7)) {
          *pbVar20 = *pbVar20 + cVar8;
          pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                     CONCAT11(bVar7 | *pbVar20,(char)pbVar26));
          *pbVar18 = *pbVar18 + cVar8;
          goto code_r0x00403908;
        }
        pbVar19 = pbVar20 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar23 = (undefined3)((uint)pbVar20 >> 8);
      bVar7 = (char)pbVar20 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar23,bVar7);
      *pbVar16 = *pbVar16 + (char)pbVar26;
      pbVar20 = (byte *)CONCAT31(uVar23,(bVar7 & bVar6) + *pbVar18);
      *pbVar26 = *pbVar26 - (char)((uint)pbVar16 >> 8);
      puVar49 = puVar44;
      goto code_r0x0040395a;
    }
    puVar41 = (undefined4 *)((int)puVar42 + -8);
    puVar42 = (undefined4 *)((int)puVar42 + -8);
    *puVar41 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  unaff_ESI = puVar58;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar20 = *pbVar20 + cVar33;
  bVar6 = cVar33 + 2;
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar6);
code_r0x00403912:
  bVar61 = (POPCOUNT(bVar6) & 1U) == 0;
  puVar49 = puVar37;
  if (!bVar61) goto code_r0x00403967;
  *pbVar20 = *pbVar20 + (char)pbVar20;
code_r0x00403916:
  bVar12 = (char)pbVar20 + 0x6f;
  pbVar19 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar20 >> 8),bVar12);
  bVar10 = *pbVar19;
  *pbVar19 = *pbVar19 + bVar12;
  bVar7 = *pbVar19;
  bVar6 = *pbVar19;
  puVar49 = (undefined4 *)((int)puVar37 + -4);
  *(undefined2 *)((int)puVar37 + -4) = in_ES;
  if (bVar6 == 0 || SCARRY1(bVar10,bVar12) != (char)bVar7 < '\0') goto code_r0x00403979;
  *pbVar19 = *pbVar19 + bVar12;
  pbVar19 = (byte *)CONCAT31((int3)(char)((uint)pbVar20 >> 8),(char)pbVar20 + -100);
  *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
       pbVar16 + (uint)(0xd2 < bVar12) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
  puVar43 = (undefined2 *)((int)puVar37 + -8);
  puVar37 = (undefined4 *)((int)puVar37 + -8);
  *puVar43 = in_ES;
code_r0x00403926:
  puVar42 = puVar37 + 1;
  puVar49 = puVar37 + 1;
  puVar44 = puVar37 + 1;
  *(undefined4 *)pbVar19 = *puVar37;
  bVar6 = *pbVar18;
  bVar7 = (byte)pbVar19;
  *pbVar18 = *pbVar18 + bVar7;
  if (CARRY1(bVar6,bVar7)) {
    *pbVar19 = *pbVar19 + bVar7;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar7 = bVar7 | pbVar19[0x400005b];
    pbVar20 = (byte *)CONCAT31(uVar23,bVar7);
    pbVar19 = pbVar18;
    if ((char)bVar7 < '\x01') goto code_r0x00403991;
    *pbVar20 = *pbVar20 + bVar7;
    cVar8 = bVar7 + 0x28;
    pbVar20 = (byte *)CONCAT31(uVar23,cVar8);
    *(byte **)pbVar20 = pbVar20 + (uint)(0xd7 < bVar7) + *(int *)pbVar20;
    bVar6 = *pbVar32;
    bVar7 = (byte)((uint)pbVar26 >> 8);
    *pbVar32 = *pbVar32 + bVar7;
    if (CARRY1(bVar6,bVar7)) {
      *pbVar20 = *pbVar20 + cVar8;
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11(bVar7 | *pbVar20,(char)pbVar26));
      *pbVar18 = *pbVar18 + cVar8;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar20 = *pbVar20 + cVar8;
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
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar26;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar18);
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
  *pbVar16 = *pbVar16 + (char)pbVar26;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + (byte)*unaff_EDI);
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
      *pbVar26 = *pbVar26 + (char)pbVar16;
      pbVar26[0x101c00aa] = pbVar26[0x101c00aa] + (char)pbVar32;
      *pbVar20 = *pbVar20 + cVar8;
      *(byte **)pbVar18 = pbVar32 + *(int *)pbVar18;
      bVar6 = (byte)((uint)pbVar26 >> 8);
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11(bVar6 + *pbVar20,(char)pbVar26));
      pbVar20 = pbVar20 + (uint)CARRY1(bVar6,*pbVar20) + *(int *)pbVar20;
      pbVar19 = pbVar18;
code_r0x00403991:
      cVar8 = (char)pbVar26;
      *pbVar16 = *pbVar16 + cVar8;
      cVar33 = (char)pbVar32 - pbVar19[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar33);
      pbVar18 = pbVar19;
      if ((POPCOUNT(cVar33) & 1U) != 0) goto code_r0x0040395a;
      *pbVar20 = *pbVar20 + (byte)pbVar20;
      uVar24 = (uint3)((uint)pbVar20 >> 8);
      bVar6 = (byte)pbVar20 | *pbVar32;
      piVar15 = (int *)CONCAT31(uVar24,bVar6);
      bVar7 = (byte)((uint)pbVar26 >> 8);
      bVar10 = (byte)pbVar16;
      if (bVar6 == 0) {
        *(char *)piVar15 = (char)*piVar15;
        puVar49 = (undefined4 *)((int)puVar49 + -*(int *)(pbVar57 + 0x1b000007));
        pbVar18 = pbVar19 + (uint)bVar62 * -8 + 4;
        out(*(undefined4 *)pbVar19,(short)pbVar16);
        pbVar20 = (byte *)((uint)uVar24 << 8);
        *pbVar16 = *pbVar16 + cVar8;
        pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar10 - *pbVar32);
        *pbVar32 = *pbVar32;
        *pbVar16 = *pbVar16 + bVar7;
        *pbVar20 = *pbVar20;
        *pbVar32 = *pbVar32 + cVar33;
        *pbVar20 = *pbVar20;
        *(byte **)(pbVar32 + -0x3d) = pbVar18 + *(int *)(pbVar32 + -0x3d);
        break;
      }
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *(byte *)piVar15 = (char)*piVar15 + bVar6;
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(bVar7 | *pbVar16,cVar8));
      pbVar18 = pbVar19 + *piVar15;
      pcVar14 = (char *)((int)piVar15 + *piVar15);
      bVar7 = (char)pcVar14 - *pcVar14;
      pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar7);
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar7;
      pbVar20 = pbVar20 + (-(uint)CARRY1(bVar6,bVar7) - *(int *)pbVar20);
      bVar61 = CARRY1(*pbVar26,bVar10);
      *pbVar26 = *pbVar26 + bVar10;
    } while (!bVar61);
    *pbVar20 = *pbVar20 + (char)pbVar20;
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(byte)pbVar26 | *pbVar16);
code_r0x004039be:
    puVar37 = (undefined4 *)((int)puVar49 + -4);
    puVar46 = (undefined1 *)((int)puVar49 + -4);
    *(undefined2 *)((int)puVar49 + -4) = in_ES;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(pbVar57 + -0x3c));
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    uVar23 = (undefined3)((uint)pbVar20 >> 8);
    bVar6 = (byte)pbVar20 | *pbVar16;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6);
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      cVar8 = *pcVar14;
      *pcVar14 = *pcVar14 + bVar6;
      cVar33 = *pcVar14;
      puVar29 = (undefined1 *)((int)puVar49 + -4);
      if (!SCARRY1(cVar8,bVar6)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar37 = (undefined4 *)puVar29;
      cVar8 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar8;
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      bVar6 = cVar8 + 2;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        pcVar14 = (char *)CONCAT31(uVar23,bVar6 + *pbVar16);
        pbVar20 = pbVar18;
        if ((POPCOUNT(bVar6 + *pbVar16) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar18 + (int)unaff_EDI * 8) =
             pbVar16 + (uint)(0xd2 < (byte)pcVar14) + *(int *)(pbVar18 + (int)unaff_EDI * 8);
        puVar48 = (undefined2 *)((int)puVar37 + -4);
        puVar37 = (undefined4 *)((int)puVar37 + -4);
        *puVar48 = in_ES;
        pbVar19 = pbVar57;
        pbVar21 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 + 0x2d);
code_r0x00403ad8:
        pbVar57 = pbVar21;
        bVar6 = *pbVar19;
        bVar7 = (byte)pbVar19;
        *pbVar19 = *pbVar19 + bVar7;
        puVar49 = (undefined4 *)((int)puVar37 + -4);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        puVar29 = (undefined1 *)((int)puVar37 + -4);
        if (CARRY1(bVar6,bVar7)) {
          *pbVar19 = *pbVar19 + bVar7;
          bVar7 = bVar7 | pbVar19[0x400005d];
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar7);
          pbVar20 = pbVar18;
          if ((char)bVar7 < '\x01') {
            *pbVar19 = *pbVar19 + bVar7;
            pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar26 >> 8) | *pbVar16,(char)pbVar26)
                                      );
            pbVar20 = *(byte **)((int)puVar37 + -4);
            pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                       CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],
                                                (char)pbVar32));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar19 = *pbVar19 + (char)pbVar19;
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar6 = *pbVar32;
          bVar7 = (byte)((uint)pbVar26 >> 8);
          *pbVar32 = *pbVar32 + bVar7;
          pbVar18 = pbVar20;
          if (!CARRY1(bVar6,bVar7)) {
            puVar37 = (undefined4 *)((int)puVar49 + -4);
            *(undefined2 *)((int)puVar49 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar19 = *pbVar19 + cVar8;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      piVar15 = (int *)CONCAT31(uVar23,cVar8 + '*');
      *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0xd7 < bVar6);
      bVar6 = *pbVar16;
      bVar12 = (byte)pbVar26;
      *pbVar16 = *pbVar16 + bVar12;
      out(*(undefined4 *)pbVar18,(short)pbVar16);
      bVar10 = ((cVar8 + '*') - (char)*piVar15) - CARRY1(bVar6,bVar12);
      pbVar20 = (byte *)CONCAT31(uVar23,bVar10);
      *pbVar16 = *pbVar16 + bVar12;
      uVar60 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar31 = SUB41(pbVar32,0);
      cVar8 = (char)((uint)pbVar32 >> 8) - pbVar18[(uint)bVar62 * -8 + 0x1f];
      pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(cVar8,uVar31));
      *pbVar20 = *pbVar20 + bVar10;
      bVar7 = *pbVar16;
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      pbVar18 = pbVar18 + ((((uint)bVar62 * -8 + 4) - *(int *)pbVar20) - (uint)CARRY1(bVar6,bVar10))
      ;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar10);
      pbVar26 = (byte *)(CONCAT22((short)((uint)pbVar26 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar26 >> 8) | bVar7,bVar12)) + -1);
      bVar6 = *pbVar20;
      *pbVar20 = *pbVar20 + bVar10;
      bVar6 = (bVar10 - *pbVar20) - CARRY1(bVar6,bVar10);
      *pbVar26 = *pbVar26 + (char)pbVar16;
      bVar61 = CARRY1(bVar6,*pbVar16);
      bVar6 = bVar6 + *pbVar16;
      pbVar20 = (byte *)CONCAT31(uVar23,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar20 = *pbVar20 + bVar6;
        cVar33 = (bVar6 + 0x6f) - (0x90 < bVar6);
        pbVar19 = (byte *)CONCAT31(uVar23,cVar33);
        bVar6 = *pbVar16;
        *pbVar16 = *pbVar16 + (char)pbVar26;
        if (SCARRY1(bVar6,(char)pbVar26) == (char)*pbVar16 < '\0') {
code_r0x00403aaf:
          cVar8 = (char)pbVar19 + '(';
          pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
          *(byte **)pbVar19 = pbVar19 + *(int *)pbVar19;
          bVar6 = *pbVar32;
          bVar7 = (byte)((uint)pbVar26 >> 8);
          *pbVar32 = *pbVar32 + bVar7;
          pbVar21 = pbVar57;
          if (!CARRY1(bVar6,bVar7)) goto code_r0x00403ad8;
          *pbVar19 = *pbVar19 + cVar8;
          pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                     CONCAT11(bVar7 | *pbVar32,(char)pbVar26));
          if ((POPCOUNT(*pbVar16 - cVar8) & 1U) != 0) {
            *pbVar18 = *pbVar18 + cVar8;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar19 = *pbVar19 + cVar33;
          pcVar14 = (char *)CONCAT31(uVar23,cVar33 + '\x02');
          bVar7 = cVar8 + pbVar32[0x52];
          pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar7,uVar31));
          *pcVar14 = *pcVar14 + cVar33 + '\x02';
          bVar6 = cVar33 + 4;
          pbVar19 = (byte *)CONCAT31(uVar23,bVar6);
          if ((POPCOUNT(bVar6) & 1U) == 0) {
            *pbVar19 = *pbVar19 + bVar6;
            cVar8 = (cVar33 + 's') - (0x90 < bVar6);
            pcVar14 = (char *)CONCAT31(uVar23,cVar8);
            bVar6 = (byte)((uint)pbVar26 >> 8);
            bVar61 = CARRY1(*pbVar32,bVar6);
            *pbVar32 = *pbVar32 + bVar6;
            pbVar20 = pbVar18;
            if (bVar61) {
              *pcVar14 = *pcVar14 + cVar8;
              pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar7 | pbVar57[0x5c],uVar31));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)pbVar19);
          pbVar32 = (byte *)CONCAT22(uVar60,CONCAT11(bVar7 + pbVar32[0x52],uVar31));
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
        pcVar14 = (char *)CONCAT31((int3)((uint)pbVar20 >> 8),cVar8);
        bVar6 = *pbVar32;
        cVar33 = (char)((uint)pbVar26 >> 8);
        *pbVar32 = *pbVar32 + cVar33;
        if (*pbVar32 == 0 || SCARRY1(bVar6,cVar33) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
        *pcVar14 = *pcVar14 + cVar8;
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
      bVar6 = (byte)pbVar20 | pbVar20[0x400005e];
      pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar20 >> 8),bVar6);
      if ('\0' < (char)bVar6) {
        *pbVar19 = *pbVar19 + bVar6;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar14 = *pcVar14 + bVar6;
    *pbVar18 = *pbVar18 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar23,bVar6 + 6);
    pbVar19 = (byte *)uVar2;
    bVar6 = *pbVar16;
    bVar7 = (byte)pbVar26;
    *pbVar16 = *pbVar16 + bVar7;
    if (CARRY1(bVar6,bVar7)) {
      *pbVar19 = *pbVar19 + (char)uVar2;
      bVar10 = (byte)((uint)pbVar26 >> 8) | *pbVar19;
      uVar60 = CONCAT11(bVar10,bVar7);
      pbVar19 = pbVar19 + -*(int *)pbVar19;
      bVar6 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar10;
      if (CARRY1(bVar6,bVar10)) {
        cVar33 = (char)pbVar19;
        *pbVar19 = *pbVar19 + cVar33;
        bVar6 = *pbVar16;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((char)((uint)pbVar16 >> 8) - pbVar32[-0x3a],
                                            (char)pbVar16));
        *pbVar19 = *pbVar19 + cVar33;
        uVar36 = (undefined2)((uint)pbVar32 >> 0x10);
        bVar35 = (byte)((uint)pbVar32 >> 8) | pbVar16[0x32];
        pcVar14 = (char *)CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar32));
        cVar8 = *pcVar14;
        puVar46 = (undefined1 *)((int)puVar49 + -8);
        *(undefined2 *)((int)puVar49 + -8) = in_CS;
        cVar8 = cVar33 + cVar8 + '-';
        pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
        *pbVar19 = *pbVar19;
        *(undefined2 *)((int)puVar49 + -0xc) = in_ES;
        bVar12 = *pbVar16;
        uVar59 = *(undefined2 *)((int)puVar49 + -0xc);
        cVar33 = (char)pbVar32 - *pbVar18;
        bVar11 = *(byte *)((int)unaff_EDI + 0x17);
        *pbVar19 = *pbVar19 + cVar8;
        uVar60 = CONCAT11((bVar10 | bVar6) + bVar11 | *pbVar16,bVar7 - bVar12);
        pbVar32 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35 + *(char *)(CONCAT31((int3)((uint)pcVar14
                                                                                     >> 8),cVar33) +
                                                                     0x4e),cVar33));
        *pbVar19 = *pbVar19 + cVar8;
      }
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),uVar60);
      bVar6 = (byte)pbVar19;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      pcVar14 = (char *)CONCAT31(uVar23,bVar6 + 0x28);
      *pcVar14 = (*pcVar14 - (bVar6 + 0x28)) - (0xd7 < bVar6);
      *pbVar16 = *pbVar16 + (char)uVar60;
      bVar7 = bVar6 + 0x1b;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32))
      ;
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      pcVar17 = (char *)CONCAT31(uVar23,bVar6 + 0x43);
      *pcVar17 = (*pcVar17 - (bVar6 + 0x43)) - (0xd7 < bVar7);
      *pbVar16 = *pbVar16 + (char)uVar60;
      pcVar14 = pcVar17 + -0x6b721c;
      pcVar17 = pcVar17 + -0x6b721a;
      *pcVar17 = *pcVar17 + (char)((uint)pbVar16 >> 8);
      cVar33 = *pcVar17;
      puVar37 = (undefined4 *)puVar46;
code_r0x00403a22:
      puVar29 = (undefined1 *)puVar37;
      if ((POPCOUNT(cVar33) & 1U) == 0) goto code_r0x00403a24;
      bVar6 = *pbVar16;
      *pbVar16 = *pbVar16 + (char)pbVar26;
      if (SCARRY1(bVar6,(char)pbVar26) == (char)*pbVar16 < '\0') {
        pbVar19 = pbVar57;
        pbVar21 = (byte *)(pcVar14 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar14 = *pcVar14 + (char)pcVar14;
      pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x02');
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32))
      ;
      pbVar20 = pbVar18;
code_r0x00403a7d:
      cVar8 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar8;
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      cVar33 = cVar8 + '-';
      pbVar21 = (byte *)CONCAT31(uVar23,cVar33);
      pbVar19 = pbVar57;
      pbVar18 = pbVar20;
      if ((POPCOUNT(cVar33 - *pbVar16) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar21 = *pbVar21 + cVar33;
      bVar6 = cVar8 + 0x2f;
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        bVar6 = *pbVar16;
        *pbVar16 = *pbVar16 + (byte)pbVar26;
        *pbVar57 = *pbVar57 - CARRY1(bVar6,(byte)pbVar26);
        pbVar19 = (byte *)CONCAT31(uVar23,cVar8 + -0x53);
        pbVar57 = (byte *)*puVar37;
        puVar49 = puVar37 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      bVar61 = 0x90 < bVar6;
      pcVar14 = (char *)CONCAT31(uVar23,cVar8 + -0x62);
code_r0x00403a8f:
      uVar23 = (undefined3)((uint)pcVar14 >> 8);
      bVar7 = (char)pcVar14 - bVar61;
      pbVar19 = (byte *)CONCAT31(uVar23,bVar7);
      bVar6 = *pbVar32;
      cVar8 = (char)((uint)pbVar26 >> 8);
      *pbVar32 = *pbVar32 + cVar8;
      puVar49 = puVar37;
      pbVar18 = pbVar20;
      if (*pbVar32 != 0 && SCARRY1(bVar6,cVar8) == (char)*pbVar32 < '\0') {
        *pbVar19 = *pbVar19 + bVar7;
        pbVar18 = (byte *)CONCAT31(uVar23,bVar7 + 0x2d);
        *(byte **)(pbVar20 + (int)unaff_EDI * 8) =
             pbVar16 + (uint)(0xd2 < bVar7) + *(int *)(pbVar20 + (int)unaff_EDI * 8);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        bVar61 = CARRY1(*pbVar20,(byte)pbVar20);
        *pbVar20 = *pbVar20 + (byte)pbVar20;
        puVar47 = (undefined2 *)((int)puVar37 + -8);
        puVar37 = (undefined4 *)((int)puVar37 + -8);
        *puVar47 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar26 >> 8) | *pbVar19,(char)pbVar26));
      *pbVar18 = *pbVar18 + (char)pbVar19;
      puVar29 = (undefined1 *)puVar49;
code_r0x00403afc:
      puVar37 = (undefined4 *)puVar29;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar19 = *pbVar19 + (char)pbVar19;
      uVar23 = (undefined3)((uint)pbVar19 >> 8);
      bVar7 = (char)pbVar19 + 0x6f;
      bVar6 = *(byte *)CONCAT31(uVar23,bVar7);
      *pbVar16 = *pbVar16 + (char)pbVar26;
      pbVar19 = (byte *)CONCAT31(uVar23,(bVar7 & bVar6) + *pbVar18);
      *pbVar26 = *pbVar26 - (char)((uint)pbVar16 >> 8);
      break;
    }
    uVar59 = *(undefined2 *)((int)puVar49 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar19 = *pbVar19 + (char)pbVar19;
  puVar50 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar50 = in_ES;
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar26;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar18);
  cVar8 = (char)pbVar19 + '\x02';
  pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar8);
  bVar61 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
  bVar6 = (byte)pbVar20;
  uVar23 = (undefined3)((uint)pbVar20 >> 8);
  if (!bVar61) {
    *pbVar16 = *pbVar16 + (char)pbVar26;
    pbVar19 = (byte *)CONCAT31(uVar23,bVar6 | *pbVar18);
code_r0x00403b73:
    pbVar20 = (byte *)((int)unaff_EDI + *(int *)(pbVar57 + -0x37));
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    uVar23 = (undefined3)((uint)pbVar19 >> 8);
    bVar6 = (byte)pbVar19 | *pbVar16;
    pcVar14 = (char *)CONCAT31(uVar23,bVar6);
    uVar64 = CONCAT44(pbVar16,pcVar14);
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *pcVar14 = *pcVar14 + bVar6;
      *pbVar18 = *pbVar18 + 1;
      return (byte *)CONCAT31(uVar23,bVar6 + 6);
    }
    bVar6 = *pbVar18;
    *pbVar18 = *pbVar18 + 1;
    pcVar1 = (code *)swi(4);
    if (SCARRY1(bVar6,'\x01')) {
      uVar64 = (*pcVar1)();
      pbVar26 = extraout_ECX_00;
    }
    pbVar16 = (byte *)uVar64;
    *pbVar16 = *pbVar16 + (char)uVar64;
    cVar33 = (char)((ulonglong)uVar64 >> 0x20);
    puVar58 = (uint *)CONCAT22((short)((ulonglong)uVar64 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar64 >> 0x28) | pbVar32[0x2f],cVar33));
    *pbVar16 = *pbVar16 + (char)uVar64;
    cVar8 = (char)pbVar26;
    bVar10 = (byte)((uint)pbVar26 >> 8) | *pbVar16;
    pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar6 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar10;
    bVar7 = (byte)pbVar16;
    if (CARRY1(bVar6,bVar10)) {
      *pbVar16 = *pbVar16 + bVar7;
      bVar10 = bVar10 | (byte)*puVar58;
      *pbVar32 = *pbVar32 - cVar33;
      *pbVar16 = *pbVar16 + bVar7;
      uVar23 = (undefined3)((uint)pbVar16 >> 8);
      bVar7 = bVar7 | (byte)*puVar58;
      puVar22 = (uint *)CONCAT31(uVar23,bVar7);
      bVar61 = CARRY4((uint)pbVar57,*puVar22);
      bVar63 = SCARRY4((int)pbVar57,*puVar22);
      pbVar57 = pbVar57 + *puVar22;
      *(uint *)((int)puVar37 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar63 * 0x800 | (uint)bVar62 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar57 < 0) * 0x80 |
           (uint)(pbVar57 == (byte *)0x0) * 0x40 | (uint)(bVar9 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar57 & 0xff) & 1U) == 0) * 4 | (uint)bVar61 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar22 = (char)*puVar22 + bVar7;
      *(undefined2 *)((int)puVar37 + -8) = in_ES;
      cVar33 = (char)pbVar32 - *pbVar18;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar33) +
                                                   0x5f),cVar33));
      *(byte *)puVar22 = (char)*puVar22 + bVar7;
      bVar6 = bVar7 + 0x2a & (byte)*puVar58;
      pbVar20 = pbVar20 + *(int *)(pbVar57 + 0x5f);
      *(char *)CONCAT31(uVar23,bVar6) = *(char *)CONCAT31(uVar23,bVar6) + bVar6;
      pbVar16 = (byte *)CONCAT31(uVar23,bVar6 + 0x2a);
      *(byte *)puVar58 = (byte)*puVar58 + 0x28;
      *pbVar16 = *pbVar16 + bVar6 + 0x2a;
      puVar53 = (undefined2 *)((int)puVar37 + -0xc);
      puVar37 = (undefined4 *)((int)puVar37 + -0xc);
      *puVar53 = in_ES;
    }
    else {
      *pbVar18 = *pbVar18 + bVar7;
    }
    pcVar14 = (char *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(bVar10,cVar8));
    *pbVar57 = *pbVar57 - bVar10;
    *(byte *)puVar58 = (byte)*puVar58 + cVar8;
    bVar6 = (byte)pbVar16 - 0xb;
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar6);
    if (10 < (byte)pbVar16) {
      *pbVar26 = *pbVar26 | bVar6;
      return pbVar26;
    }
    *(byte *)puVar58 = (byte)*puVar58 + cVar8;
    do {
      *(undefined2 *)((int)puVar37 + -4) = in_ES;
      bVar6 = pbVar32[-0x23];
      bVar7 = (byte)pbVar26;
      *pbVar26 = *pbVar26 + bVar7;
      bVar9 = pbVar57[-0x22];
      *pbVar26 = *pbVar26 + bVar7;
      uVar23 = (undefined3)((uint)pbVar26 >> 8);
      bVar7 = bVar7 | *pbVar18;
      pbVar16 = (byte *)CONCAT31(uVar23,bVar7);
      cVar33 = (char)pbVar32 - *pbVar18;
      pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar32 >> 8) + bVar6 | bVar9
                                                          ,(char)pbVar32)) >> 8),cVar33);
      cVar8 = (char)pcVar14;
      pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                 CONCAT11((char)((uint)pcVar14 >> 8) + *pbVar16,cVar8));
      *(byte *)puVar58 = (byte)*puVar58 + cVar8;
      bVar9 = bVar7 - *pbVar16;
      pbVar26 = (byte *)CONCAT31(uVar23,bVar9);
      pbVar18 = pbVar18 + (-(uint)(bVar7 < *pbVar16) - *(int *)pbVar26);
      in_ES = *(undefined2 *)((int)puVar37 + -4);
      puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),(char)puVar58 * '\x02');
      *(byte **)pbVar26 = pbVar26 + *(int *)pbVar26;
      *pbVar20 = *pbVar20 + cVar33;
      bVar6 = *pbVar26;
      *pbVar26 = *pbVar26 + bVar9;
      *puVar58 = (uint)(pbVar26 + (uint)CARRY1(bVar6,bVar9) + *puVar58);
    } while ((POPCOUNT(*puVar58 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar26 = *pbVar26 + (char)pbVar26;
    pcVar14 = (char *)CONCAT31((int3)((uint)pcVar14 >> 8),(byte)pcVar14 | pbVar26[(int)pcVar14]);
    puVar55 = (undefined2 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar59;
    bVar61 = false;
    pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
    do {
      pbVar20 = pbVar20 + (-(uint)bVar61 - *(int *)pbVar32);
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar26 >> 8),*pcVar14);
      *pcVar17 = *pcVar17 + *pcVar14;
      pbVar26 = (byte *)CONCAT31((int3)((uint)(pcVar17 +
                                              (pbVar18[0x2000001] < (byte)((uint)pcVar14 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar17 +
                                        (pbVar18[0x2000001] < (byte)((uint)pcVar14 >> 8)) + 0xda7d)
                                 | (byte)*puVar58) + 0x7d);
      pcVar14 = pcVar14 + -1;
      *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar14;
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
        cVar33 = (char)pcVar14;
        pcVar14 = (char *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar14 >> 8) | pbVar20[-0x65],cVar33));
        bVar9 = *pbVar26;
        *pbVar26 = *pbVar26 + bVar6;
        *(undefined2 *)((int)puVar55 + -4) = in_ES;
        if (CARRY1(bVar9,bVar6)) {
          *pbVar26 = *pbVar26 + bVar6;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | pbVar57[-0x1d],
                                              (char)pbVar32));
          *pbVar26 = *pbVar26 + bVar6;
          bVar61 = false;
          bVar6 = bVar6 | (byte)*puVar58;
          pcVar17 = (char *)CONCAT31(uVar23,bVar6);
          uVar59 = *(undefined2 *)((int)puVar55 + -4);
          puVar37 = (undefined4 *)puVar55;
          while( true ) {
            bVar9 = (byte)pcVar17;
            uVar23 = (undefined3)((uint)pcVar17 >> 8);
            if (bVar61 == (char)bVar6 < '\0') break;
            *pcVar17 = *pcVar17 + bVar9;
            bVar9 = bVar9 | (byte)*puVar58;
            puVar22 = (uint *)CONCAT31(uVar23,bVar9);
            *pbVar20 = *pbVar20 << 1 | (char)*pbVar20 < '\0';
            uVar13 = *puVar22;
            *(byte *)puVar22 = (byte)*puVar22 + bVar9;
            pbVar57 = pbVar57 + (-(uint)CARRY1((byte)uVar13,bVar9) - *puVar22);
            *puVar22 = *puVar22 << 1 | (uint)((int)*puVar22 < 0);
            while( true ) {
              uVar13 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58 + (byte)pcVar14;
              uVar60 = *(undefined2 *)puVar37;
              cVar8 = (char)puVar22 + 'o' + CARRY1((byte)uVar13,(byte)pcVar14);
              pcVar17 = (char *)CONCAT31((int3)((uint)puVar22 >> 8),cVar8);
              pcVar14 = (char *)0x20a0000;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *pcVar17 = *pcVar17 + cVar8;
              bVar6 = bRamfe140212;
              pcVar14 = (char *)0x0;
              *(undefined2 *)puVar37 = in_ES;
              uVar23 = (undefined3)((uint)(pcVar17 + -0x732b0000) >> 8);
              bVar9 = in(0);
              puVar22 = (uint *)CONCAT31(uVar23,bVar9);
              uVar13 = *puVar58;
              *(byte *)puVar58 = (byte)*puVar58;
              if (SCARRY1((byte)uVar13,'\0') != (char)(byte)*puVar58 < '\0') {
                *(byte *)puVar22 = (byte)*puVar22 + bVar9;
                bVar9 = bVar9 | (byte)*puVar58;
                puVar22 = (uint *)CONCAT31(uVar23,bVar9);
                if ((POPCOUNT(bVar9) & 1U) == 0) {
                  *(byte *)puVar22 = (byte)*puVar22 + bVar9;
                  pcVar14 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar6 | (byte)*puVar22) << 8);
                  puVar55 = (undefined2 *)((int)puVar37 + -4);
                  *(undefined2 *)((int)puVar37 + -4) = uVar60;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar9;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar22 = (byte)*puVar22 + bVar9;
                puVar22 = (uint *)CONCAT31(uVar23,bVar9 | (byte)*puVar58);
              }
            }
            *(byte *)puVar58 = (byte)*puVar58;
            bVar61 = SCARRY1((char)puVar58,*pbVar20);
            bVar6 = (char)puVar58 + *pbVar20;
            puVar58 = (uint *)CONCAT31((int3)((uint)puVar58 >> 8),bVar6);
            puVar37 = (undefined4 *)((int)puVar37 + 4);
          }
          if (bVar61 == (char)bVar6 < '\0') {
            *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar14;
            pbVar26 = (byte *)((uint)pcVar17 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar17 = *pcVar17 + bVar9;
          pbVar26 = (byte *)CONCAT31(uVar23,(bVar9 | (byte)*puVar58) + 0x7d);
          pcVar14 = pcVar14 + -1;
          *(byte *)puVar58 = (byte)*puVar58 + (char)pcVar14;
          puVar55 = (undefined2 *)puVar37;
        }
        else {
          *(byte *)puVar58 = (byte)*puVar58 + cVar33;
          puVar58 = (uint *)CONCAT31(uVar27,cVar8 + *(char *)((int)pbVar20 * 2 + 0xa0000e0));
          puVar55 = (undefined2 *)((int)puVar55 + -4);
        }
      }
    } while( true );
  }
  *pbVar20 = *pbVar20 + bVar6;
  bVar6 = bVar6 + 0x6f & *(byte *)CONCAT31(uVar23,bVar6 + 0x6f);
  *pbVar16 = *pbVar16 + (char)pbVar26;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + (byte)*unaff_EDI);
  *(byte *)(unaff_EDI + 0x5c18000) = (byte)unaff_EDI[0x5c18000] - bVar6;
  pcVar14 = (char *)CONCAT31(uVar23,bVar6 - (byte)*unaff_EDI);
code_r0x00403b2c:
  bVar6 = (char)pcVar14 - *pcVar14;
  pbVar19 = (byte *)CONCAT31((int3)((uint)pcVar14 >> 8),bVar6);
  *pbVar19 = *pbVar19 + bVar6;
  *(byte **)pbVar19 = pbVar16 + *(int *)pbVar19;
  *pbVar19 = *pbVar19 + bVar6;
  bVar61 = CARRY1(*pbVar19,bVar6);
  *pbVar19 = *pbVar19 + bVar6;
  puVar29 = (undefined1 *)puVar37;
  pbVar20 = pbVar18;
  while( true ) {
    puVar37 = (undefined4 *)puVar29;
    *(byte **)pbVar19 = pbVar19 + (uint)bVar61 + *(int *)pbVar19;
    bVar9 = ((uint)pbVar19 & 0x1000) != 0;
    unaff_EDI = unaff_EDI + (uint)bVar62 * -2 + 1;
    pbVar19[(int)pbVar16] = pbVar19[(int)pbVar16] + (char)pbVar32;
    *pbVar19 = *pbVar19 + (char)pbVar19;
    *(byte **)pbVar20 = pbVar32 + *(int *)pbVar20;
    bVar6 = (byte)((uint)pbVar26 >> 8);
    cVar8 = (char)pbVar26;
    pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),CONCAT11(bVar6 + *pbVar19,cVar8));
    pbVar19 = pbVar19 + (uint)CARRY1(bVar6,*pbVar19) + *(int *)pbVar19;
    *pbVar16 = *pbVar16 + cVar8;
    cVar8 = (char)pbVar32 - pbVar20[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar8);
    pbVar18 = pbVar20;
    if ((POPCOUNT(cVar8) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar19 = *pbVar19 + (byte)pbVar19;
    bVar6 = (byte)pbVar19 | *pbVar32;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),bVar6);
    if (bVar6 != 0) {
      pbVar57 = pbVar57 + -unaff_EDI[9];
      *pbVar21 = *pbVar21 + bVar6;
      pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar26 >> 8) | *pbVar16,(char)pbVar26));
      pbVar20 = pbVar20 + *(int *)pbVar21;
      pbVar21 = pbVar21 + *(int *)pbVar21;
      uVar23 = (undefined3)((uint)pbVar21 >> 8);
      bVar7 = (char)pbVar21 - *pbVar21;
      pbVar18 = (byte *)CONCAT31(uVar23,bVar7);
      bVar6 = *pbVar18;
      *pbVar18 = *pbVar18 + bVar7;
      pbVar21 = (byte *)CONCAT31(uVar23,bVar7 - CARRY1(bVar6,bVar7));
    }
    bVar6 = *pbVar21;
    *pbVar21 = *pbVar21 + (byte)pbVar21;
    iVar25 = *(int *)(pbVar57 + 0x1b000007);
    iVar3 = -(uint)CARRY1(bVar6,(byte)pbVar21);
    pbVar18 = pbVar20 + (uint)bVar62 * -8 + 4;
    out(*(undefined4 *)pbVar20,(short)pbVar16);
    pbVar19 = (byte *)(((uint)pbVar21 >> 8) * 0x100);
    *pbVar16 = *pbVar16 + (byte)pbVar26;
    bVar6 = (char)pbVar16 - *pbVar32;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar6);
    *pbVar32 = *pbVar32;
    *pbVar16 = *pbVar16 + (char)((uint)pbVar26 >> 8);
    *pbVar19 = *pbVar19;
    pcVar14 = (char *)(((uint)pbVar21 >> 8) * 0x200);
    *pcVar14 = *pcVar14 + (char)pbVar32;
    bVar61 = CARRY1(*pbVar26,bVar6);
    *pbVar26 = *pbVar26 + bVar6;
    puVar29 = (undefined1 *)((int)puVar37 + (iVar3 - iVar25));
    pbVar20 = pbVar18;
    if (bVar61) {
      *pbVar19 = *pbVar19;
      pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(byte)pbVar26 | *pbVar16);
      puVar52 = (undefined2 *)((int)puVar37 + (iVar3 - iVar25) + -4);
      puVar37 = (undefined4 *)((int)puVar37 + (iVar3 - iVar25) + -4);
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
  pbVar57 = pbVar57 + -*puVar22;
  puVar54 = (undefined1 *)((int)puVar55 + 4);
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
    while (puVar55 = (undefined2 *)puVar54, (POPCOUNT(bVar6) & 1U) == 0) {
      do {
        *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
        bVar6 = (byte)puVar22 | (byte)*puVar58;
        puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar6);
        puVar29 = (undefined1 *)puVar55;
        if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        uVar24 = CONCAT21((short)((uint)pcVar14 >> 0x10),(byte)((uint)pcVar14 >> 8) | bRamfe140212);
        puVar5 = puVar29;
        while( true ) {
          puVar56 = puVar5;
          pcVar14 = (char *)((uint)uVar24 << 8);
          puVar54 = puVar56 + -4;
          puVar55 = (undefined2 *)(puVar56 + -4);
          puVar29 = puVar56 + -4;
          *(undefined2 *)(puVar56 + -4) = in_ES;
          bVar10 = (byte)puVar22;
          *(byte *)puVar22 = (byte)*puVar22 & bVar10;
          bVar9 = *pbVar32;
          bVar12 = (byte)uVar24;
          bVar7 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar12;
          bVar6 = *pbVar32;
          if (!CARRY1(bVar9,bVar12)) break;
          *(byte *)puVar22 = (byte)*puVar22 + bVar10;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar22 = (byte)*puVar22 + bVar10;
          bVar10 = bVar10 | (byte)*puVar58;
          puVar22 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),bVar10);
          bVar61 = (POPCOUNT(bVar10) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar32 >> 8);
            uVar59 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar61) {
              *(byte *)puVar58 = (byte)*puVar58;
              pbVar32 = (byte *)CONCAT22(uVar59,CONCAT11(cVar8 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            uVar60 = (undefined2)((uint)pcVar14 >> 0x10);
            bVar9 = (byte)((uint)pcVar14 >> 8) | (byte)*puVar22;
            uVar24 = CONCAT21(uVar60,bVar9);
            *puVar22 = *puVar22 & (uint)puVar22;
            *pbVar32 = *pbVar32 + bVar9;
            uVar23 = (undefined3)((uint)puVar22 >> 8);
            bVar6 = (char)puVar22 - bVar9;
            pcVar14 = (char *)CONCAT31(uVar23,bVar6);
            *pcVar14 = *pcVar14 + bVar6;
            bVar6 = bVar6 | (byte)*puVar58;
            puVar22 = (uint *)CONCAT31(uVar23,bVar6);
            puVar5 = puVar56 + -4;
            if ((POPCOUNT(bVar6) & 1U) != 0) break;
            *(byte *)puVar22 = (byte)*puVar22 + bVar6;
            pcVar14 = (char *)((uint)CONCAT21(uVar60,bVar9 | (byte)*puVar22) << 8);
            *puVar22 = *puVar22 - (int)puVar22;
            *(byte *)puVar58 = (byte)*puVar58;
            pbVar32 = (byte *)CONCAT22(uVar59,CONCAT11(cVar8 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              uVar59 = (undefined2)((uint)puVar58 >> 0x10);
              cVar8 = (char)puVar58;
              bVar6 = (byte)((uint)puVar58 >> 8) | pbVar32[-0x17];
              puVar58 = (uint *)CONCAT22(uVar59,CONCAT11(bVar6,cVar8));
              *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar22 = (byte)*puVar22 + (byte)puVar22;
                uVar23 = (undefined3)((uint)puVar22 >> 8);
                bVar7 = (byte)puVar22 | (byte)*puVar58;
                pcVar17 = (char *)CONCAT31(uVar23,bVar7);
                bVar9 = pbVar32[-0x16];
                *pcVar17 = *pcVar17 + bVar7;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar9 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar17 = *pcVar17 + bVar7;
                pbVar26 = (byte *)CONCAT31(uVar23,bVar7 | (byte)*puVar58);
                while( true ) {
                  *pbVar26 = *pbVar26 + (byte)pbVar26;
                  uVar23 = (undefined3)((uint)pbVar26 >> 8);
                  bVar9 = (byte)pbVar26 | (byte)*puVar58;
                  puVar22 = (uint *)CONCAT31(uVar23,bVar9);
                  if ((POPCOUNT(bVar9) & 1U) != 0) break;
                  *(byte *)puVar22 = (byte)*puVar22 + bVar9;
                  bVar7 = pbVar20[-0x14];
                  *(byte *)puVar22 = (byte)*puVar22 + bVar9;
                  bVar9 = bVar9 | (byte)*puVar58;
                  pcVar17 = (char *)CONCAT31(uVar23,bVar9);
                  bVar10 = pbVar32[-0x15];
                  *pcVar17 = *pcVar17 + bVar9;
                  pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),
                                                    (byte)((uint)pcVar14 >> 8) | bVar7 |
                                                    pbVar20[-0x13]) << 8);
                  *pcVar17 = *pcVar17 + bVar9;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar10 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar17 = *pcVar17 + bVar9;
                  pbVar26 = (byte *)CONCAT31(uVar23,bVar9 | (byte)*puVar58);
                  do {
                    do {
                      bVar7 = (byte)pbVar26;
                      *pbVar26 = *pbVar26 + bVar7;
                      cVar30 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar26,
                                                          cVar30));
                      *pbVar26 = bVar7;
                      *pbVar26 = *pbVar26 + bVar7;
                      cVar33 = (char)((uint)pcVar14 >> 8) + *pbVar26;
                      pcVar14 = (char *)((uint)CONCAT21((short)((uint)pcVar14 >> 0x10),cVar33) << 8)
                      ;
                      uVar23 = (undefined3)((uint)pbVar26 >> 8);
                      bVar7 = bVar7 & *pbVar26;
                      pbVar26 = (byte *)CONCAT31(uVar23,bVar7);
                      bVar9 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar33;
                    } while (SCARRY1(bVar9,cVar33) == (char)*pbVar32 < '\0');
                    *pbVar26 = *pbVar26 + bVar7;
                    bVar7 = bVar7 | (byte)*puVar58;
                    pbVar26 = (byte *)CONCAT31(uVar23,bVar7);
                    if ((POPCOUNT(bVar7) & 1U) == 0) {
                      *pbVar26 = *pbVar26 + bVar7;
                      *pbVar26 = *pbVar26 + bVar7;
                      cVar8 = cVar8 - bVar6;
                      pbVar16 = (byte *)CONCAT31((int3)((uint)puVar58 >> 8),cVar8);
                      *pbVar26 = *pbVar26 + bVar7;
                      bRam0312382b = bRam0312382b | *pbVar16;
                      *(undefined2 *)(puVar56 + -8) = in_ES;
                      while( true ) {
                        bVar9 = (byte)pbVar26;
                        *pbVar26 = *pbVar26 + bVar9;
                        bRam0312382b = bRam0312382b | (pbVar20 + 0x21b0000)[(int)pbVar26];
                        uVar23 = (undefined3)((uint)pbVar26 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar16 = *pbVar16 + bRam0312382b;
                        pbVar26 = (byte *)CONCAT31(uVar23,bVar9 | *pbVar18);
                      }
                      *pbVar26 = *pbVar26 + bVar9;
                      bVar9 = bVar9 | *pbVar18;
                      pcVar14 = (char *)CONCAT31(uVar23,bVar9);
                      out(*(undefined4 *)pbVar18,(short)pbVar16);
                      *pcVar14 = *pcVar14 + bVar9;
                      uVar60 = CONCAT11(bVar6 | bRam6f0a002b,cVar8);
                      pcVar17 = (char *)CONCAT22(uVar59,uVar60);
                      *pcVar14 = *pcVar14 + bVar9;
                      *pcVar17 = *pcVar17 + bRam0312382b;
                      out(*(undefined4 *)(pbVar18 + (uint)bVar62 * -8 + 4),uVar60);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar30 + *pcVar14);
                  } while (SCARRY1(cVar30,*pcVar14) != (char)(cVar30 + *pcVar14) < '\0');
                }
                uVar13 = *puVar58;
                *(byte *)puVar58 = (byte)*puVar58;
              } while (SCARRY1((byte)uVar13,'\0') != (char)(byte)*puVar58 < '\0');
              *(byte *)puVar58 = (byte)*puVar58;
              *pcVar14 = *pcVar14 - (char)pbVar32;
              *(byte *)puVar22 = (byte)*puVar22 + bVar9;
              bVar9 = bVar9 | (byte)*puVar58;
              puVar22 = (uint *)CONCAT31(uVar23,bVar9);
              bVar61 = (POPCOUNT(bVar9) & 1U) == 0;
            } while (bVar61);
          }
        }
      } while (SCARRY1(bVar7,bVar12));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar14 >> 8);
    *pbVar20 = *pbVar20 - (char)pbVar32;
  } while( true );
}


