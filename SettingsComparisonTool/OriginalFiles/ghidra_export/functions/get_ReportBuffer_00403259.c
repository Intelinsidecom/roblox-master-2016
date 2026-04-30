/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403259
 * Raw Name    : get_ReportBuffer
 * Demangled   : get_ReportBuffer
 * Prototype   : byte * get_ReportBuffer(undefined4 param_1, byte * param_2)
 * Local Vars  : uStack_40, pbStack_38, auStack_30, uStack_2c, uStack_28, apbStack_20, pcStack_14, uVar1, pcVar2, uVar3, iVar4, uVar5, uVar6, puVar7, bVar8, cVar9, cVar10, bVar11, bVar12, bVar13, bVar14, in_EAX, pbVar15, piVar16, pcVar17, iVar18, ppbVar19, ppbVar20, uVar21, pcVar22, pbVar23, pbVar24, pbVar25, uVar26, uVar27, extraout_ECX, extraout_ECX_00, bVar28, uVar29, puVar30, puVar31, uVar32, cVar33, unaff_EBX, pbVar34, cVar35, bVar36, uVar37, puVar38, piVar39, piVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, unaff_EBP, pbVar57, unaff_ESI, pbVar58, puVar59, puVar60, pbVar61, unaff_EDI, puVar62, puVar63, puVar64, in_ES, in_CS, uVar65, in_DS, uVar66, unaff_FS_OFFSET, in_GS_OFFSET, bVar67, in_AF, in_TF, in_IF, bVar68, bVar69, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar70, param_1, param_2
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

byte * __fastcall get_ReportBuffer(undefined4 param_1,byte *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined6 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined1 *puVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  char *in_EAX;
  undefined3 uVar26;
  byte *pbVar15;
  int *piVar16;
  char *pcVar17;
  int iVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  uint uVar21;
  char *pcVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint3 uVar27;
  byte *pbVar25;
  byte bVar28;
  byte *extraout_ECX;
  undefined3 uVar29;
  byte *extraout_ECX_00;
  uint *puVar30;
  undefined1 *puVar31;
  undefined1 uVar32;
  char cVar33;
  char cVar35;
  byte bVar36;
  int unaff_EBX;
  byte *pbVar34;
  undefined2 uVar37;
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
  byte *unaff_ESI;
  byte *pbVar58;
  uint *puVar59;
  uint *puVar60;
  byte *pbVar61;
  int unaff_EDI;
  undefined4 *puVar62;
  uint *puVar63;
  uint *puVar64;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 uVar65;
  undefined2 in_DS;
  undefined2 uVar66;
  int unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar67;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar68;
  bool bVar69;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar70;
  undefined4 uStack_40;
  byte *pbStack_38;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte *apbStack_20 [3];
  char *pcStack_14;
  
  bVar68 = false;
                    /* .NET CLR Managed Code */
  uVar66 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar32 = (undefined1)unaff_EBX;
  cVar35 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x39);
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar26 = (undefined3)((uint)in_EAX >> 8);
  bVar8 = (char)in_EAX + 0x2aU & *param_2;
  iVar18 = *(int *)(unaff_EBP + 0x39);
  *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
  pcVar17 = (char *)CONCAT31(uVar26,bVar8 + 0x2a);
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,uVar32)) + 0x3a);
  pcVar22 = (char *)CONCAT22(uVar66,CONCAT11(cVar35,uVar32));
  *pcVar17 = *pcVar17 + bVar8 + 0x2a;
  bVar8 = bVar8 + 0x54 & *param_2;
  puVar62 = (undefined4 *)(unaff_EDI + iVar18 + *(int *)(unaff_EBP + 0x3a));
  *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
  pbVar15 = (byte *)CONCAT31(uVar26,bVar8 + 0x2a);
  bVar8 = *pbVar15;
  bVar11 = (byte)((uint)param_1 >> 8);
  uVar65 = (undefined2)((uint)param_1 >> 0x10);
  cVar33 = (char)param_1;
  bVar28 = bVar11 + *pbVar15;
  iVar18 = *(int *)pbVar15;
  *param_2 = *param_2 + cVar33;
  cVar10 = (char)(pbVar15 + (uint)CARRY1(bVar11,bVar8) + iVar18);
  uVar26 = (undefined3)((uint)(pbVar15 + (uint)CARRY1(bVar11,bVar8) + iVar18) >> 8);
  cVar9 = cVar10 + *pcVar22;
  pcVar17 = (char *)CONCAT31(uVar26,cVar9);
  if (SCARRY1(cVar10,*pcVar22) == cVar9 < '\0') {
    *(char **)param_2 = unaff_EBP + *(int *)param_2;
    pcVar22 = (char *)CONCAT22(uVar66,CONCAT11(cVar35 + pcVar22[0x38],uVar32));
    *pcVar17 = *pcVar17 + cVar9;
    pbVar15 = (byte *)CONCAT31(uVar26,cVar9 + 'o');
  }
  else {
    *pcVar17 = *pcVar17 + cVar9;
    cVar9 = cVar9 + '*';
    pcVar17 = (char *)CONCAT31(uVar26,cVar9);
    *pcVar17 = *pcVar17 + cVar9;
    cVar35 = (char)param_2;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((char)((uint)param_2 >> 8) - *unaff_ESI,cVar35));
    bVar28 = bVar28 + *pcVar17;
    *pcVar17 = *pcVar17 + cVar9;
    unaff_EBP = (char *)(CONCAT22((short)((uint)unaff_ESI >> 0x10),in_ES) +
                        *(int *)((int)puVar62 + -0x5e));
    *pcVar17 = *pcVar17 + cVar9;
    cVar10 = *pcVar17;
    pbVar15 = (byte *)CONCAT31(uVar26,cVar9 - cVar10);
    *pcVar22 = *pcVar22 + cVar35;
    *(byte *)((int)pbVar15 * 2) = *(byte *)((int)pbVar15 * 2) ^ cVar9 - cVar10;
  }
  pcVar17 = (char *)CONCAT22(uVar65,CONCAT11(bVar28,cVar33));
  bVar8 = *pbVar15;
  *pbVar15 = *pbVar15 + (byte)pbVar15;
  pbVar15 = pbVar15 + (uint)CARRY1(bVar8,(byte)pbVar15) + *(int *)pbVar15;
  *pcVar17 = *pcVar17 + (char)param_2;
  pbVar61 = (byte *)CONCAT22((short)((uint)pcVar22 >> 0x10),
                             CONCAT11((char)((uint)pcVar22 >> 8) + pcVar22[0x38],(char)pcVar22));
  *pbVar15 = *pbVar15 + (char)pbVar15;
  piVar16 = (int *)(CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + 'o') + 0x28060000);
  puVar63 = puVar62 + 1;
  uVar66 = SUB42(param_2,0);
  uVar1 = in(uVar66);
  *puVar62 = uVar1;
  *(char *)piVar16 = *(char *)piVar16 + (char)piVar16;
  bVar28 = bVar28 | bRam7b022a01;
  pbVar15 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar15 = *pbVar15 + (char)piVar16;
  iVar18 = *piVar16;
  *unaff_ESI = *unaff_ESI + (char)(char *)((int)piVar16 + iVar18);
  pcVar17 = (char *)((int)piVar16 + iVar18) + -0x387b020d;
  *pcVar17 = *pcVar17 + (char)pcVar17;
  cVar10 = (char)pcVar17 + 'o';
  pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar10);
  *pcVar17 = *pcVar17 + cVar10;
  iVar18 = (int)pcVar17 - *(int *)CONCAT22(uVar65,CONCAT11(bVar28,cVar33));
  uVar26 = (undefined3)((uint)iVar18 >> 8);
  cVar10 = (((byte)iVar18 | *unaff_ESI) - 0xe) + *pbVar61;
  pcVar17 = (char *)CONCAT31(uVar26,cVar10);
  pbVar15 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,uVar66);
  pcVar17[unaff_FS_OFFSET] = pcVar17[unaff_FS_OFFSET] + cVar10;
  pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
  pbVar23 = (byte *)CONCAT22(uVar65,CONCAT11(bVar28 + *(char *)((int)puVar62 + 0x6a),cVar33));
  *pcVar17 = *pcVar17 + cVar10;
  bVar11 = cVar10 - *param_2;
  puVar30 = (uint *)CONCAT31(uVar26,bVar11);
  *unaff_EBP = *unaff_EBP - (char)pcVar22;
  bVar8 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar11;
  bVar28 = (byte)((uint)param_2 >> 8);
  if (CARRY1(bVar8,bVar11)) goto code_r0x00403365;
  pbVar34 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar34 = *pbVar34 + bVar11;
  ppbVar20 = (byte **)(puVar30 + 0x1f421c00);
  cVar10 = (char)ppbVar20;
  if ((POPCOUNT((uint)ppbVar20 & 0xff) & 1U) != 0) {
    pbVar34 = (byte *)((int)puVar30 + 0x7d087002);
    bVar8 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar28;
    uVar26 = (undefined3)((uint)ppbVar20 >> 8);
    if ((POPCOUNT(*pbVar34) & 1U) == 0) {
      *(char *)ppbVar20 = (char)*ppbVar20 + cVar10;
      ppbVar19 = (byte **)CONCAT31(uVar26,cVar10 + 'o');
      goto code_r0x0040333c;
    }
    pbVar34 = (byte *)CONCAT31(uVar26,cVar10 + -2 + CARRY1(bVar8,bVar28));
    goto code_r0x00403375;
  }
  *(char *)ppbVar20 = (char)*ppbVar20 + cVar10;
  do {
    while( true ) {
      cVar10 = (char)ppbVar20 + 'o';
      piVar16 = (int *)CONCAT31((int3)((uint)ppbVar20 >> 8),cVar10);
      *pbVar15 = *pbVar15 + cVar10;
      *(undefined2 *)pbVar61 = in_ES;
      *pbVar23 = *pbVar23 + cVar10;
      *pbVar23 = *pbVar23 - (char)pbVar61;
      *(char *)piVar16 = (char)*piVar16 + cVar10;
      bVar8 = *(byte *)((int)puVar63 + -0x5e);
      *(char *)piVar16 = (char)*piVar16 + cVar10;
      iVar18 = *piVar16;
      *(char *)(in_GS_OFFSET + (int)piVar16) = *(char *)(in_GS_OFFSET + (int)piVar16) + cVar10;
      ppbVar20 = apbStack_20;
      ppbVar19 = apbStack_20;
      apbStack_20[0] = (byte *)CONCAT22(apbStack_20[0]._2_2_,in_ES);
      pbVar34 = apbStack_20[0];
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar23 >> 8) | bVar8) + (char)iVar18 +
                                          *param_2,(char)pbVar23 - *param_2));
      *(char *)piVar16 = (char)*piVar16 + cVar10;
      pbVar15 = pbVar15 + *piVar16;
      apbStack_20[0]._0_1_ = (char)in_ES;
      bVar11 = (byte)apbStack_20;
      apbStack_20[0]._1_3_ = SUB43(pbVar34,1);
      apbStack_20[0] = (byte *)CONCAT31(apbStack_20[0]._1_3_,(char)apbStack_20[0] + bVar11 * '\x03')
      ;
      *param_2 = *param_2 + bVar11;
      *unaff_EBP = *unaff_EBP - (char)pbVar61;
      bVar8 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar11;
      if (!CARRY1(bVar8,bVar11)) break;
      apbStack_20[0] = (byte *)((uint)apbStack_20[0]._1_3_ << 8);
    }
code_r0x0040333c:
    pcVar17 = (char *)((int)ppbVar19 + 0x7b027000);
    pbVar34 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
    *pbVar34 = *pbVar34 + (char)pcVar17;
    *pbVar15 = *pbVar15 + (char)pcVar17 + *pcVar17;
    cRam03060000 = cRam8c0a0000;
    pbVar34 = pbVar15 + 4;
    out(*(undefined4 *)pbVar15,uVar66);
    puVar30 = (uint *)CONCAT31((int3)((uint)pcVar17 >> 8),cRam8c0a0000);
    *pbVar23 = *pbVar23 + cRam8c0a0000;
    *param_2 = *param_2 - (char)((uint)pcVar17 >> 8);
    *param_2 = *param_2 + (char)pbVar23;
    pbVar15 = pbVar15 + 8;
    out(*(undefined4 *)pbVar34,uVar66);
    puVar63 = (uint *)((uint)puVar63 ^ *puVar30);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + (char)*puVar30,(char)pbVar23));
    unaff_EBP = pcStack_14;
code_r0x00403365:
    cVar10 = (char)puVar30;
    *(char *)puVar30 = (char)*puVar30 + cVar10;
    pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                               CONCAT11((char)((uint)pbVar61 >> 8) + pbVar61[0x38],(char)pbVar61));
    *(char *)puVar30 = (char)*puVar30 + cVar10;
    uVar26 = (undefined3)((uint)puVar30 >> 8);
    cVar10 = cVar10 + 'o' + *(char *)CONCAT31(uVar26,cVar10 + 'o');
    pbVar34 = (byte *)CONCAT31(uVar26,cVar10);
    bVar8 = *pbVar15;
    *pbVar15 = *pbVar15 + cVar10;
    pbVar58 = pbVar15;
    if (*pbVar15 == 0 || SCARRY1(bVar8,cVar10) != (char)*pbVar15 < '\0') goto code_r0x004033b0;
code_r0x00403375:
    bVar8 = (byte)pbVar34;
    *pbVar34 = *pbVar34 + bVar8;
    uVar26 = (undefined3)((uint)pbVar34 >> 8);
    bVar11 = bVar8 + 0x2d;
    ppbVar20 = (byte **)CONCAT31(uVar26,bVar11);
    *(byte **)(pbVar15 + (int)puVar63 * 8) =
         param_2 + (uint)(0xd2 < bVar8) + *(int *)(pbVar15 + (int)puVar63 * 8);
    pbVar34 = (byte *)segment(in_DS,(short)pbVar61 + (short)pbVar15);
    bVar8 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar11;
    apbStack_20[0] = (byte *)CONCAT22(apbStack_20[0]._2_2_,in_ES);
    pbVar57 = apbStack_20[0];
  } while (!CARRY1(bVar8,bVar11));
  *(byte *)ppbVar20 = (char)*ppbVar20 + bVar11;
  bVar67 = false;
  bVar11 = bVar11 | *(byte *)((int)ppbVar20 + 0x400003b);
  pbVar24 = (byte *)CONCAT31(uVar26,bVar11);
  if ('\0' < (char)bVar11) {
    *pbVar24 = *pbVar24 + bVar11;
    iVar18 = CONCAT31(uVar26,bVar11 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar11);
    iRam02060000 = iVar18;
    *(byte *)puVar63 = (byte)*puVar63 - (char)pbVar61;
    *pbVar15 = *pbVar15 + (char)iVar18;
    bVar11 = (char)iVar18 - 0x25;
    pbVar34 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),bVar11);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + *pbVar34,(char)pbVar23));
    bVar8 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar11;
    apbStack_20[0] = (byte *)CONCAT22(apbStack_20[0]._2_2_,in_ES);
    if (CARRY1(bVar8,bVar11)) goto code_r0x004033e7;
    pbVar24 = pbVar34 + 2;
    *pbVar24 = *pbVar24 + bVar28;
    pbVar58 = pbVar15;
    if ((POPCOUNT(*pbVar24) & 1U) != 0) goto _ctor;
code_r0x004033b0:
    *pbVar34 = *pbVar34 + (char)pbVar34;
    cVar10 = (char)pbVar34 + 'o';
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar10);
    *pbVar58 = *pbVar58 + cVar10;
    *(undefined2 *)pbVar61 = in_ES;
    *pbVar23 = *pbVar23 + cVar10;
    *param_2 = *param_2 - (char)((uint)pbVar34 >> 8);
    bVar67 = CARRY1(*param_2,(byte)pbVar23);
    *param_2 = *param_2 + (byte)pbVar23;
    pbVar15 = pbVar58 + 4;
    out(*(undefined4 *)pbVar58,uVar66);
    pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar10);
  }
  pbVar58 = pbVar15 + (uint)bVar67 + *(int *)pbVar24;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 + *pbVar24);
  pbVar15 = (byte *)((int)piVar16 + (uint)CARRY1((byte)pbVar24,*pbVar24) + *piVar16);
  bVar8 = *pbVar15;
  bVar11 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar11;
  pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar11 + CARRY1(bVar8,bVar11));
  do {
    *pbVar23 = *pbVar23 + (char)param_2;
    param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)pbVar34 >> 8);
    uStack_2c = (byte *)CONCAT22(uStack_2c._2_2_,in_ES);
    pbVar57 = uStack_2c;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + *pbVar34,(char)pbVar23));
    *pbVar34 = *pbVar34 + (char)pbVar34;
    uStack_2c = (byte *)((uint)uStack_2c._2_2_ << 0x10);
    pbVar15 = pbVar58 + 4;
    out(*(undefined4 *)pbVar58,(short)param_2);
    pbRam2a0a0000 = pbVar34;
code_r0x004033e7:
    param_2 = param_2 + 1;
    pbVar58 = pbVar15;
_ctor:
    uVar6 = uStack_28._2_2_;
    iVar18 = CONCAT31((int3)((uint)pbVar34 >> 8),(char)pbVar34 + *pbVar61) + 0x6128;
    uStack_28 = (byte *)((uint)uStack_28._2_2_ << 0x10);
    bVar11 = (char)iVar18 + *(char *)((int)puVar63 * 2 + 0x400003e);
    pbVar34 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),bVar11);
    cVar10 = (char)param_2 - *pbVar61;
    puVar30 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar10);
    *(byte *)puVar30 = (byte)*puVar30 ^ bVar11;
    *pbVar34 = *pbVar34 + (char)((uint)pbVar61 >> 8);
    *pbVar34 = *pbVar34 + bVar11;
    *pbVar23 = *pbVar23 + cVar10;
    bVar8 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar11;
    *(byte **)(pbVar61 + -0x41) = pbVar58 + (uint)CARRY1(bVar8,bVar11) + *(int *)(pbVar61 + -0x41);
    do {
      *pbVar34 = *pbVar34 + (byte)pbVar34;
      uVar26 = (undefined3)((uint)pbVar34 >> 8);
      bVar8 = (byte)pbVar34 | *pbVar58;
      uVar65 = (undefined2)((uint)pbVar61 >> 0x10);
      uVar32 = SUB41(pbVar61,0);
      cVar9 = (char)((uint)pbVar61 >> 8) + pbVar61[0x69];
      *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
      cVar10 = bVar8 + 0x7d;
      pcVar17 = (char *)CONCAT31(uVar26,cVar10);
      pbVar58[(int)pcVar17] = pbVar58[(int)pcVar17] + cVar10;
      cVar9 = cVar9 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar9,uVar32)) + 0x67);
      *pcVar17 = *pcVar17 + cVar10;
      pcVar17 = (char *)CONCAT31(uVar26,bVar8 - 6);
      puVar59 = (uint *)(pbVar58 + 4);
      out(*(undefined4 *)pbVar58,(short)puVar30);
      *pcVar17 = *pcVar17 + (bVar8 - 6);
      cVar9 = cVar9 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar9,uVar32)) + 0x6b);
      *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
      pcVar17 = (char *)CONCAT31(uVar26,bVar8 + 0x7d);
      pbVar15 = (byte *)((int)puVar59 + (int)pcVar17);
      *pbVar15 = *pbVar15 + bVar8 + 0x7d;
      cVar9 = cVar9 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar9,uVar32)) + 0x6a);
      pbVar61 = (byte *)CONCAT22(uVar65,CONCAT11(cVar9,uVar32));
      puVar64 = puVar30;
      do {
        cVar10 = (char)pcVar17;
        *pcVar17 = *pcVar17 + cVar10;
        uVar26 = (undefined3)((uint)pcVar17 >> 8);
        bVar8 = cVar10 + 0x7d;
        pcVar22 = (char *)CONCAT31(uVar26,bVar8);
        *(byte *)((int)puVar59 + (int)pcVar22) = *(byte *)((int)puVar59 + (int)pcVar22) + bVar8;
        uVar29 = (undefined3)((uint)puVar64 >> 8);
        bVar11 = (char)puVar64 - *(byte *)((int)puVar64 + 0x457e02);
        puVar30 = (uint *)CONCAT31(uVar29,bVar11);
        pbVar57[0x6fe1411] = pbVar57[0x6fe1411] + bVar8;
        uVar21 = *puVar59;
        uVar5 = *puVar59;
        *(byte *)puVar59 = (byte)*puVar59 + bVar8;
        if (CARRY1((byte)uVar21,bVar8)) {
          *pcVar22 = *pcVar22 + bVar8;
          bVar8 = bVar8 | pcVar22[0x4000045];
          piVar16 = (int *)CONCAT31(uVar26,bVar8);
          if ((char)bVar8 < '\x01') {
            *(byte *)puVar30 = (byte)*puVar30 + bVar8;
            uStack_28._2_2_ = uVar6;
            goto code_r0x004034a0;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar8;
          bVar8 = bVar8 + 0x6f;
          pcVar22 = (char *)CONCAT31(uVar26,bVar8);
          *pcVar22 = *pcVar22 + bVar8;
          pbVar57 = pbVar57 + -*puVar30;
          *pcVar22 = *pcVar22 + bVar8;
          *pbVar61 = *pbVar61 + bVar11;
          *(byte *)((int)pcVar22 * 2) = *(byte *)((int)pcVar22 * 2) ^ bVar8;
          in_AF = 9 < (bVar8 & 0xf) | in_AF;
          uVar21 = CONCAT31(uVar26,bVar8 + in_AF * '\x06') & 0xffffff0f;
          cVar10 = (char)uVar21;
          pcVar17 = (char *)CONCAT22((short)(uVar21 >> 0x10),
                                     CONCAT11((char)((uint)pcVar17 >> 8) + in_AF,cVar10));
          *pcVar17 = *pcVar17 + cVar10;
          cRam72110000 = cRam72110000 + bVar11;
          puVar55 = (undefined2 *)segment(in_ES,(short)auStack_30 + -2);
          *puVar55 = in_ES;
          pcVar17[0x1a] = pcVar17[0x1a] + (char)((uint)puVar64 >> 8);
          cVar10 = (char)pbVar23;
          *pbVar23 = *pbVar23 + cVar10;
          *puVar30 = (uint)(pbVar23 + *puVar30);
          apbStack_20[0] = (byte *)CONCAT22(apbStack_20[0]._2_2_,in_ES);
          cVar9 = cVar9 + pbVar61[0x70];
          *pbVar23 = *pbVar23 + cVar10;
          uVar26 = (undefined3)((uint)pbVar23 >> 8);
          bVar8 = cVar10 + 0xa2;
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar9,uVar32)) + 0x6f);
          pbVar61 = (byte *)CONCAT22(uVar65,CONCAT11(cVar9,uVar32));
          *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
          bVar28 = cVar10 + 0x44;
          piVar16 = (int *)CONCAT31(uVar26,bVar28);
          *(byte *)puVar30 = ((byte)*puVar30 - bVar28) - (0x5d < bVar8);
          if ((POPCOUNT((byte)*puVar30) & 1U) != 0) {
            *(byte *)piVar16 = (char)*piVar16 + bVar28;
            *(byte *)piVar16 = (char)*piVar16 + bVar28;
            *(char *)piVar16 = (char)*piVar16 + cVar9;
            puVar30 = (uint *)CONCAT22((short)((uint)puVar64 >> 0x10),(ushort)bVar11);
            *(byte *)piVar16 = (char)*piVar16 + bVar28;
            pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                       CONCAT11((char)((uint)pbVar23 >> 8) + (char)*piVar16,cVar10))
            ;
            uStack_28 = pbVar61;
            goto code_r0x00403511;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar28;
          cVar10 = cVar10 + -0x1a;
          piVar16 = (int *)CONCAT31(uVar26,cVar10);
          uStack_28 = (byte *)CONCAT22(uVar6,in_ES);
          *puVar30 = (*puVar30 - (int)piVar16) - (uint)(0x5d < bVar28);
          if ((POPCOUNT(*puVar30 & 0xff) & 1U) != 0) {
            *(byte *)puVar30 = (byte)*puVar30 + cVar10;
            goto code_r0x004034f3;
          }
          *(char *)piVar16 = (char)*piVar16 + cVar10;
          goto code_r0x0040349e;
        }
        pcVar17 = pcVar22;
        puVar64 = puVar30;
      } while (SCARRY1((byte)uVar5,bVar8) == (char)(byte)*puVar59 < '\0');
      *pcVar22 = *pcVar22 + bVar8;
      piVar16 = (int *)CONCAT31(uVar26,cVar10 + -0x59);
      pbVar58 = (byte *)((int)puVar59 + (uint)(0xd5 < bVar8) + *piVar16);
      bVar28 = cVar10 + -0x59 + (char)*piVar16;
      pbVar34 = (byte *)CONCAT31(uVar26,bVar28);
      bVar8 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar28;
      *(byte **)pbVar34 = pbVar34 + (uint)CARRY1(bVar8,bVar28) + *(int *)pbVar34;
      bVar8 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar11;
    } while (CARRY1(bVar8,bVar11));
    *pbVar58 = *pbVar58 + bVar28;
    cVar10 = bVar11 - *pbVar61;
    param_2 = (byte *)CONCAT31(uVar29,cVar10);
    *param_2 = *param_2 ^ bVar28;
    *pbVar61 = *pbVar61 + cVar10;
    *pbVar34 = *pbVar34 + bVar28;
    *(char *)((int)pbVar34 * 2) = *(char *)((int)pbVar34 * 2) + cVar10;
  } while( true );
code_r0x0040349e:
  piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + -0x5e);
code_r0x004034a0:
  uStack_2c = (byte *)((uint)uStack_2c._2_2_ << 0x10);
  pbVar23[0x2a0a0000] = pbVar23[0x2a0a0000] - (char)pbVar23;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((char)((uint)pbVar23 >> 8) + (char)*piVar16,(char)pbVar23));
  bVar8 = (byte)piVar16;
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  uStack_28 = (byte *)CONCAT22(uStack_28._2_2_,in_ES);
  puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),
                             (char)puVar30 - *(byte *)((int)puVar30 + 0x467e02));
  pbVar57[0x6fe1411] = pbVar57[0x6fe1411] + bVar8;
  uVar21 = *puVar59;
  *(byte *)puVar59 = (byte)*puVar59 + bVar8;
  if (!CARRY1((byte)uVar21,bVar8)) {
    pbVar15 = (byte *)((int)puVar63 + (int)pbVar57 * 2);
    *pbVar15 = *pbVar15 + bVar8;
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  uVar26 = (undefined3)((uint)piVar16 >> 8);
  bVar8 = bVar8 | *(byte *)((int)piVar16 + 0x4000046);
  piVar16 = (int *)CONCAT31(uVar26,bVar8);
  if ((char)bVar8 < '\x01') {
code_r0x00403511:
    pbVar57 = uStack_28;
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    uStack_28 = (byte *)CONCAT22(uStack_28._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  pbVar15 = (byte *)CONCAT31(uVar26,bVar8 + 0x6f);
  *pbVar15 = *pbVar15 + bVar8 + 0x6f;
  pbVar57 = pbVar57 + -*puVar30;
  do {
    uStack_2c = (byte *)CONCAT22(uStack_2c._2_2_,in_DS);
    bVar8 = *(byte *)((int)puVar63 + 0x17);
    *pbVar15 = *pbVar15 + (byte)pbVar15;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + bVar8 | (byte)*puVar30,
                                        (char)pbVar23));
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    bVar8 = (byte)pbVar15 | (byte)*puVar30;
    bVar11 = bVar8 - *(byte *)CONCAT31(uVar26,bVar8);
    puVar59 = (uint *)((int)puVar59 +
                      (uint)(bVar8 < *(byte *)CONCAT31(uVar26,bVar8)) +
                      *(int *)CONCAT31(uVar26,bVar11));
    pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    *(byte *)puVar59 = (byte)*puVar59 + (char)puVar30;
    bVar8 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar11;
    *puVar30 = (uint)(pbVar15 + (uint)CARRY1(bVar8,bVar11) + *puVar30);
    if ((POPCOUNT(*puVar30 & 0xff) & 1U) != 0) {
      *(byte *)puVar59 = (byte)*puVar59 + 1;
      puVar64 = puVar59;
      goto code_r0x00403529;
    }
    *pbVar15 = *pbVar15 + bVar11;
    piVar16 = (int *)CONCAT31(uVar26,bVar11 + 0x6f);
code_r0x004034f3:
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    *(byte *)puVar59 = (byte)*puVar59 + (char)piVar16;
    pbVar57 = pbVar57 + 1;
    pcVar17 = (char *)((int)((uint)piVar16 | 8) + *(int *)((uint)piVar16 | 8));
    *pcVar17 = *pcVar17 + (char)pcVar17;
    piVar16 = (int *)(pcVar17 + 0x53000000);
    bVar8 = (byte)piVar16;
    *(byte *)piVar16 = (char)*piVar16 + bVar8;
    *pbVar61 = *pbVar61 + (char)puVar30;
    *(byte *)piVar16 = (char)*piVar16 + bVar8;
    *pbVar57 = *pbVar57 - (char)pbVar61;
    uVar21 = *puVar59;
    *(byte *)puVar59 = (byte)*puVar59 + bVar8;
    if (CARRY1((byte)uVar21,bVar8)) goto code_r0x0040349e;
    uStack_2c = (byte *)CONCAT22(uStack_2c._2_2_,in_ES);
    pcVar17[0x5300006f] = pcVar17[0x5300006f] + (char)((uint)puVar30 >> 8);
    pcVar17 = pcVar17 + 0x53000001;
    bVar11 = (byte)pcVar17;
    bRam7e060000 = bVar8;
    *pcVar17 = *pcVar17 + bVar11;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar11 + 0x2d);
    puVar59[(int)puVar63 * 2] =
         (uint)((int)puVar30 + (uint)(0xd2 < bVar11) + puVar59[(int)puVar63 * 2]);
    puVar64 = puVar59;
code_r0x00403529:
    puVar59 = puVar64 + 1;
    out(*puVar64,(short)puVar30);
    bVar8 = *pbVar15;
    bVar11 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar11;
  } while (!CARRY1(bVar8,bVar11));
  *pbVar15 = *pbVar15 + bVar11;
  uVar26 = (undefined3)((uint)pbVar15 >> 8);
  bVar11 = bVar11 | pbVar15[0x4000040];
  pcVar17 = (char *)CONCAT31(uVar26,bVar11);
  uVar65 = in_ES;
  if ((char)bVar11 < '\x01') goto code_r0x00403579;
  *pcVar17 = *pcVar17 + bVar11;
  cVar10 = bVar11 + 10;
  pcVar17 = (char *)CONCAT31(uVar26,cVar10);
  puVar64 = puVar59;
  if (cVar10 == '\0' || SCARRY1(bVar11,'\n') != cVar10 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar8 = (byte)pcVar17;
  *pcVar17 = *pcVar17 + bVar8;
  piVar16 = (int *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar8 + 0x2d);
  puVar59[(int)puVar63 * 2] =
       (uint)((int)puVar30 + (uint)(0xd2 < bVar8) + puVar59[(int)puVar63 * 2]);
  pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_ES);
code_r0x00403549:
  uVar21 = *puVar59;
  bVar8 = (byte)piVar16;
  *(byte *)puVar59 = (byte)*puVar59 + bVar8;
  if (!CARRY1((byte)uVar21,bVar8)) goto code_r0x004034f3;
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  uVar26 = (undefined3)((uint)piVar16 >> 8);
  bVar8 = bVar8 | *(byte *)((int)piVar16 + 0x4000041);
  if ((char)bVar8 < '\x01') {
    *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar23;
    *(byte *)puVar30 = (byte)*puVar30;
    pcVar17 = (char *)CONCAT31(uVar26,bVar8 + 0x7e);
    puVar30 = (uint *)((int)puVar30 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
  piVar16 = (int *)CONCAT31(uVar26,bVar8 + 0xb);
  puVar64 = puVar59;
code_r0x0040355b:
  pbVar57 = pbVar57 + -*(int *)((int)puVar64 + 2);
  *pbVar57 = *pbVar57 - (char)pbVar61;
  uVar21 = *puVar64;
  bVar8 = (byte)piVar16;
  *(byte *)puVar64 = (byte)*puVar64 + bVar8;
  if (CARRY1((byte)uVar21,bVar8)) goto code_r0x00403548;
code_r0x00403565:
  piVar16 = piVar16 + 0x1ec09c00;
  pbVar15 = (byte *)((int)puVar63 + (int)pbVar57 * 2);
  *pbVar15 = *pbVar15 + (char)piVar16;
  *(byte *)puVar64 = (byte)*puVar64 + (char)piVar16 + (char)*piVar16;
  puVar59 = puVar64 + 1;
  out(*puVar64,(short)puVar30);
  pcVar17 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar23 = *pbVar23 + (char)pcVar17;
  *(byte *)puVar30 = (byte)*puVar30 - (char)((uint)pcVar17 >> 8);
  puVar64 = puVar59;
code_r0x00403580:
  *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar23;
  puVar59 = puVar64 + 1;
  out(*puVar64,(short)puVar30);
  bVar8 = (byte)pcVar17;
  puVar30 = (uint *)((int)puVar30 + 1);
  bRam7e060000 = bVar8;
  *pcVar17 = *pcVar17 + bVar8;
  uVar26 = (undefined3)((uint)pcVar17 >> 8);
  bVar11 = bVar8 + 0x2d;
  pcVar17 = (char *)CONCAT31(uVar26,bVar11);
  puVar59[(int)puVar63 * 2] =
       (uint)((int)puVar30 + (uint)(0xd2 < bVar8) + puVar59[(int)puVar63 * 2]);
  pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_ES);
  uVar21 = *puVar59;
  *(byte *)puVar59 = (byte)*puVar59 + bVar11;
  if (!CARRY1((byte)uVar21,bVar11)) {
    pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                               CONCAT11((byte)((uint)pbVar61 >> 8) | *(byte *)((int)puVar64 + 0x45),
                                        (char)pbVar61));
    goto code_r0x0040353f;
  }
  *pcVar17 = *pcVar17 + bVar11;
  bVar11 = bVar11 | pcVar17[0x4000042];
  pcVar17 = (char *)CONCAT31(uVar26,bVar11);
  if ('\0' < (char)bVar11) {
code_r0x004035a1:
    bVar11 = (byte)pcVar17;
    *pcVar17 = *pcVar17 + bVar11;
    uVar26 = (undefined3)((uint)pcVar17 >> 8);
    bVar8 = bVar11 + 10;
    if (bVar8 == 0 || SCARRY1(bVar11,'\n') != (char)bVar8 < '\0') {
      pcVar17 = (char *)CONCAT31(uVar26,bVar11 + 8 + (0xf5 < bVar11));
code_r0x004035e5:
      bVar11 = (byte)pcVar17;
      *pcVar17 = *pcVar17 + bVar11;
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      bVar8 = bVar11 + 0x2d;
      pcVar17 = (char *)CONCAT31(uVar26,bVar8);
      puVar59[(int)puVar63 * 2] =
           (uint)((int)puVar30 + (uint)(0xd2 < bVar11) + puVar59[(int)puVar63 * 2]);
      uVar21 = *puVar59;
      *(byte *)puVar59 = (byte)*puVar59 + bVar8;
      if (CARRY1((byte)uVar21,bVar8)) {
        *pcVar17 = *pcVar17 + bVar8;
        bVar8 = bVar8 | pcVar17[0x4000044];
        pbVar15 = (byte *)CONCAT31(uVar26,bVar8);
        if ('\0' < (char)bVar8) {
          *pbVar15 = *pbVar15 + bVar8;
          pbVar15 = (byte *)(CONCAT31(uVar26,bVar8 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar8));
          pbRam2a060000 = pbVar15;
          *pbVar61 = *pbVar61 + (char)pbVar61;
          *(byte *)puVar30 = (byte)*puVar30 ^ (byte)pbVar15;
          *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
          *pbVar15 = *pbVar15 + (byte)pbVar15;
          puVar64 = puVar63;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),
                                 (byte)pbVar23 |
                                 *(byte *)((int)(puVar30 + 0xa004000) + (int)puVar63));
      puVar64 = puVar59;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
    bVar11 = bVar11 + 0x37;
    piVar16 = (int *)CONCAT31(uVar26,bVar11);
    puVar59[(int)puVar63 * 2] =
         (uint)((int)puVar30 + (uint)(0xd2 < bVar8) + puVar59[(int)puVar63 * 2]);
    pbStack_38 = (byte *)CONCAT22(pbStack_38._2_2_,in_ES);
    uVar21 = *puVar59;
    *(byte *)puVar59 = (byte)*puVar59 + bVar11;
    puVar64 = puVar59;
    if (!CARRY1((byte)uVar21,bVar11)) goto code_r0x0040355b;
    *(byte *)piVar16 = (char)*piVar16 + bVar11;
    bVar11 = bVar11 | *(byte *)((int)piVar16 + 0x4000043);
    pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
    if ((char)bVar11 < '\x01') {
      *pbVar15 = *pbVar15 + bVar11;
      pbVar57 = pbVar57 + -*(int *)((int)puVar63 + -0x5d);
      *pbVar15 = *pbVar15 + bVar11;
      uStack_40 = (undefined4 *)((uint)uStack_40._2_2_ << 0x10);
      piVar16 = (int *)CONCAT31(uVar26,bVar11 - *pbVar15);
      puVar59 = (uint *)((int)puVar59 + (-(uint)(bVar11 < *pbVar15) - *piVar16));
      pbVar15 = (byte *)CONCAT31(uVar26,(bVar11 - *pbVar15) + (char)*piVar16);
      pbStack_38 = (byte *)0x17000000;
      puVar64 = puVar63;
code_r0x00403615:
      bVar8 = *pbVar15;
      bVar11 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar11;
      *puVar30 = (uint)(pbVar15 + (uint)CARRY1(bVar8,bVar11) + *puVar30);
      puVar63 = puVar64;
      if ((POPCOUNT(*puVar30 & 0xff) & 1U) == 0) {
        *pbVar15 = *pbVar15 + bVar11;
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar11 + 0x28);
        puVar63 = puVar64 + 1;
        uVar21 = in((short)puVar30);
        *puVar64 = uVar21;
        *pcVar17 = *pcVar17 + bVar11 + 0x28;
        pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar23 >> 8) | pbVar61[(int)pbVar23],
                                            (char)pbVar23));
        pcVar17[0x28] = pcVar17[0x28] + (char)((uint)puVar30 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar15 = *pbVar15 + bVar11;
    uVar21 = CONCAT31(uVar26,bVar11 + 0xb);
    piVar16 = (int *)(uVar21 - *puVar59);
    if (uVar21 < *puVar59) {
      cVar10 = (char)piVar16;
      *(char *)piVar16 = (char)*piVar16 + cVar10;
      uVar66 = (undefined2)((uint)pbVar61 >> 0x10);
      cVar9 = (char)pbVar61;
      bVar8 = (byte)((uint)pbVar61 >> 8) | *(byte *)((int)puVar30 + 2);
      *pbVar57 = *pbVar57 - cVar9;
      *(byte *)puVar59 = (byte)*puVar59 + cVar10;
      uStack_40 = (undefined4 *)CONCAT22(uStack_40._2_2_,in_ES);
      pbVar61 = (byte *)CONCAT22(uVar66,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar8,
                                                  cVar9)) + 0x38),cVar9));
      *(char *)piVar16 = (char)*piVar16 + cVar10;
      pcVar17 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar10 + 'o');
      *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar23;
      *pcVar17 = *pcVar17 - cVar9;
      *pcVar17 = *pcVar17 + cVar10 + 'o';
      puVar63 = (uint *)((int)puVar63 - puVar59[0x11]);
      goto code_r0x004035e5;
    }
    puVar64 = puVar59 + 1;
    out(*puVar59,(short)puVar30);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar11) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_38 & 0x4000) != 0;
  bVar68 = ((uint)pbStack_38 & 0x400) != 0;
  in_IF = ((uint)pbStack_38 & 0x200) != 0;
  in_TF = ((uint)pbStack_38 & 0x100) != 0;
  in_AF = ((uint)pbStack_38 & 0x10) != 0;
  in_ID = ((uint)pbStack_38 & 0x200000) != 0;
  in_AC = ((uint)pbStack_38 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar10 = (char)pcVar17;
  *pcVar17 = *pcVar17 + cVar10;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((byte)((uint)pbVar23 >> 8) | (byte)*puVar30,(char)pbVar23));
  pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                             CONCAT11((char)((uint)pbVar61 >> 8) + pbVar61[0x3e],(char)pbVar61));
  *pcVar17 = *pcVar17 + cVar10;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar10 + '(');
  cVar10 = (char)((uint)puVar30 >> 8);
  *(byte *)((int)puVar30 + 0x21) = *(byte *)((int)puVar30 + 0x21) + cVar10;
  pbVar34 = pbVar15 + 2;
  *pbVar34 = *pbVar34 + cVar10;
  bVar8 = *pbVar34;
code_r0x00403643:
  cVar10 = (char)pbVar15;
  if ((POPCOUNT(bVar8) & 1U) == 0) {
    *pbVar15 = *pbVar15 + cVar10;
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    cVar9 = cVar10 + '(';
    pcVar17 = (char *)CONCAT31(uVar26,cVar9);
    in_AF = ((uint)pbVar15 & 0x1000) != 0;
    *pcVar17 = *pcVar17 + cVar9;
    puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),(byte)puVar30 | (byte)*puVar59);
    pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                               CONCAT11((byte)((uint)pbVar61 >> 8) | *(byte *)((int)puVar59 + 0x3f),
                                        (char)pbVar61));
    *pcVar17 = *pcVar17 + cVar9;
    pbVar15 = (byte *)CONCAT31(uVar26,cVar10 + 'M');
    puVar30 = (uint *)((uint)puVar30 | *puVar30);
    *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
code_r0x00403659:
    puVar64 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
    bVar8 = (byte)pbVar15;
    *(byte *)puVar63 = bVar8;
    *pbVar15 = *pbVar15 + bVar8;
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    bVar8 = bVar8 | (byte)*puVar30;
    pcVar17 = (char *)CONCAT31(uVar26,bVar8);
    puVar63 = puVar64;
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x0040369e;
    *pcVar17 = *pcVar17 + bVar8;
    bVar8 = bVar8 + 2;
    *pbVar57 = *pbVar57 - (char)pbVar61;
    *(byte *)puVar59 = (byte)*puVar59 + bVar8;
    puVar60 = puVar59 + (uint)bVar68 * -2 + 1;
    out(*puVar59,(short)puVar30);
    puVar63 = (uint *)((int)puVar64 + (uint)bVar68 * -2 + 1);
    puVar59 = (uint *)((int)puVar60 + (uint)bVar68 * -2 + 1);
    *(byte *)puVar64 = (byte)*puVar60;
    *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
    cVar9 = (char)((uint)pbVar23 >> 8);
    pbVar61[-0x21f60000] = pbVar61[-0x21f60000] - cVar9;
    cVar10 = (bVar8 | (byte)*puVar59) - 6;
    piVar16 = (int *)CONCAT31(uVar26,cVar10);
    pcVar17 = (char *)((int)piVar16 * 2 + 0x2adc0a00);
    *pcVar17 = *pcVar17 - cVar9;
    *piVar16 = (int)(*piVar16 + (int)puVar30);
    *(char *)piVar16 = (char)*piVar16 + cVar10;
    bVar8 = cVar10 + (char)*piVar16;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    uVar21 = CONCAT31(uVar26,bVar8 + in_AF * '\x06') & 0xffffff0f;
    pbVar15 = (byte *)CONCAT22((short)(uVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) + in_AF,(char)uVar21));
    pbVar34 = pbVar23;
  }
  else {
    *(byte *)puVar30 = (byte)*puVar30 + cVar10;
    *(byte *)puVar63 = (byte)*puVar63 + (char)((uint)puVar30 >> 8);
    pbVar34 = pbVar23;
  }
  *(byte *)puVar59 = (byte)*puVar59 + (char)((uint)pbVar15 >> 8);
  *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar34;
  bVar11 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar11;
  bVar8 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar11;
  pbVar23 = pbVar34;
  pbVar57 = pbStack_38;
  if (!CARRY1(bVar8,bVar11)) goto code_r0x004036a6;
  *pbVar15 = *pbVar15 + bVar11;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar11 | pbVar15[0x400003f]);
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),
                             (char)pbVar34 - *(byte *)((int)puVar30 + 0x5040302));
  *(char *)((int)pbVar15 * 2) = *(char *)((int)pbVar15 * 2) - (char)((uint)pbVar34 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(char)pbVar23 + (byte)*puVar59);
    pbVar15 = (byte *)(CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + '%') + 0x1ebd9f3);
    uStack_40 = (undefined4 *)CONCAT22(uStack_40._2_2_,in_ES);
    bVar8 = (byte)pbVar15;
    bVar67 = CARRY1(*pbVar15,bVar8);
    *pbVar15 = *pbVar15 + bVar8;
    puVar62 = uStack_40 + -1;
    *(undefined2 *)(uStack_40 + -1) = in_ES;
    cVar10 = (char)puVar30;
    if (bVar67) {
      *pbVar15 = *pbVar15 + bVar8;
      uVar66 = (undefined2)((uint)pbVar61 >> 0x10);
      bVar28 = (byte)((uint)pbVar61 >> 8) | pbVar57[0x47];
      pcVar17 = (char *)CONCAT22(uVar66,CONCAT11(bVar28,(char)pbVar61));
      *pbVar15 = *pbVar15 + bVar8;
      uVar26 = (undefined3)((uint)pbVar15 >> 8);
      bVar8 = bVar8 + 0x2a;
      *pcVar17 = *pcVar17 + cVar10;
      pbVar15 = (byte *)((int)CONCAT31(uVar26,bVar8) * 2);
      *pbVar15 = *pbVar15 ^ bVar8;
      bVar8 = bVar8 ^ *(byte *)CONCAT31(uVar26,bVar8);
      pbVar15 = (byte *)CONCAT31(uVar26,bVar8);
      bVar11 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar8;
      *pbVar15 = (*pbVar15 - bVar8) - CARRY1(bVar11,bVar8);
      *pbVar23 = *pbVar23 + cVar10;
      pbVar61 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28 + pcVar17[0x38],(char)pbVar61));
      *pbVar15 = *pbVar15 + bVar8;
      cVar9 = bVar8 + 2;
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar70 = (*pcVar2)();
        pbVar15 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar26,cVar9) = *(char *)CONCAT31(uVar26,cVar9) + cVar9;
      bVar8 = bVar8 + 0x71;
      pbVar15 = (byte *)CONCAT31(uVar26,bVar8);
      uVar65 = *(undefined2 *)(uStack_40 + -1);
      *pbVar15 = *pbVar15 + bVar8;
      iVar18 = (int)pbVar23 - *puVar30;
      pbVar23 = (byte *)CONCAT22((short)((uint)iVar18 >> 0x10),
                                 CONCAT11((char)((uint)iVar18 >> 8) + *pbVar15,(char)iVar18));
      pbVar57 = (byte *)*uStack_40;
      bVar67 = CARRY1(*pbVar15,bVar8);
      *pbVar15 = *pbVar15 + bVar8;
      *(undefined2 *)uStack_40 = in_ES;
      *(undefined2 *)(uStack_40 + -1) = in_ES;
    }
    bVar8 = (byte)pbVar15;
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    if (bVar67) break;
    *(byte *)puVar30 = (byte)*puVar30 + (byte)pbVar23;
    *(byte *)((int)puVar30 + (int)pbVar57) = *(byte *)((int)puVar30 + (int)pbVar57) + bVar8;
    pcVar17 = (char *)CONCAT31(uVar26,(byte)*puVar30);
code_r0x0040369e:
    pbVar15 = (byte *)(pcVar17 + *(int *)(pcVar17 + 0x6c28));
  }
  *pbVar15 = *pbVar15 + bVar8;
  uVar27 = (uint3)((uint)pbVar23 >> 8);
  pbVar34 = (byte *)CONCAT31(uVar27,(byte)pbVar23 | *pbVar61);
  uVar65 = *(undefined2 *)uStack_40;
  puVar62 = uStack_40 + 1;
  puVar64 = puVar59 + (uint)bVar68 * -2 + 1;
  out(*puVar59,(short)puVar30);
  puVar63 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
  *pbVar15 = *pbVar15 + bVar8;
  bVar8 = bVar8 | (byte)*puVar63;
  pbVar15 = (byte *)CONCAT31(uVar26,bVar8);
  *(byte *)(puVar63 + 0x1bc28000) = (byte)puVar63[0x1bc28000] - (char)((uint)pbVar23 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar8);
  *(undefined2 *)uStack_40 = pbStack_38._0_2_;
  cVar9 = (char)pbVar61;
  cVar33 = cVar9 - (byte)*puVar30;
  pbVar61 = (byte *)CONCAT31((int3)((uint)pbVar61 >> 8),cVar33);
  if (cVar33 != '\0' && (char)(byte)*puVar30 <= cVar9) {
    *pbVar15 = *pbVar15 + bVar8;
    iVar18 = CONCAT31(uVar26,bVar8 + 0x2a);
    puVar59 = (uint *)((int)puVar64 + 1);
    cVar9 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + -0x7b);
    uVar70 = CONCAT44(CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(cVar9,cVar10)),iVar18);
    in_ES = *(undefined2 *)uStack_40;
    pcVar17 = (char *)(iVar18 + 0x6f);
    *pcVar17 = *pcVar17 + cVar9;
    pbVar34 = (byte *)((uint)uVar27 << 8);
    do {
      piVar16 = (int *)((ulonglong)uVar70 >> 0x20);
      pcVar17 = (char *)uVar70;
      *(char *)piVar16 = (char)*piVar16;
      if ((char)*piVar16 == '\0') {
        pbVar61 = (byte *)((uint)pbVar61 & 0xffffff00);
        pbStack_38._0_2_ = in_ES;
_ctor:
        puVar30 = (uint *)((ulonglong)uVar70 >> 0x20);
        pbVar34 = (byte *)((uint)CONCAT21((short)((uint)pbVar34 >> 0x10),
                                          (char)((uint)pbVar34 >> 8) + *(char *)uVar70) << 8);
        pbVar61 = (byte *)((uint)pbVar61 & 0xffffff00);
        *(byte *)puVar30 = (byte)*puVar30;
        uVar26 = (undefined3)((ulonglong)uVar70 >> 8);
        bVar11 = (char)uVar70 - *(char *)uVar70;
        pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
        bVar8 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar11;
        puVar64 = (uint *)((int)puVar59 + (uint)CARRY1(bVar8,bVar11) + *(int *)pbVar15);
        pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
        uStack_40 = puVar62;
        break;
      }
      *pcVar17 = *pcVar17 + (char)uVar70;
      *piVar16 = (int)(pbVar57 + *piVar16);
      puVar59 = (uint *)((int)puVar59 + 1);
      uVar70 = CONCAT44(CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar70 >> 0x28) +
                                          *(char *)((int)piVar16 + -0x33),
                                          (char)((ulonglong)uVar70 >> 0x20))),pcVar17);
      in_ES = *(undefined2 *)puVar62;
      puVar62 = (undefined4 *)((int)puVar62 + 4);
      pbVar15 = pbVar34;
code_r0x0040371e:
      puVar30 = (uint *)((ulonglong)uVar70 >> 0x20);
      pbVar23 = (byte *)uVar70;
      bVar11 = (byte)((ulonglong)uVar70 >> 0x28);
      pbVar23[0x6f] = pbVar23[0x6f] + bVar11;
      pbVar34 = (byte *)((uint)pbVar15 & 0xffffff00);
      *(char *)puVar30 = (char)*puVar30;
      bVar8 = (byte)uVar70;
      if ((char)*puVar30 != '\0') {
        *pbVar23 = *pbVar23 + bVar8;
        uVar21 = *puVar30;
        *puVar30 = (uint)(pbVar57 + *puVar30);
        piVar39 = (int *)((int)puVar62 + -4);
        *(uint **)((int)puVar62 + -4) = puVar59;
        if (CARRY4(uVar21,(uint)pbVar57)) {
          *pbVar23 = *pbVar23 + bVar8;
          *(undefined2 *)((int)puVar62 + -8) = in_ES;
          puVar64 = puVar30 + 0x1d028000;
          uVar21 = *puVar64;
          *(byte *)puVar64 = (byte)*puVar64 - bVar11;
          *(uint *)pbVar23 = (*(int *)pbVar23 - (int)pbVar23) - (uint)((byte)uVar21 < bVar11);
          *(byte *)puVar30 = (char)*puVar30 + bVar8;
          *pbVar57 = *pbVar57;
          uVar70 = CONCAT44(puVar30,CONCAT31((int3)((ulonglong)uVar70 >> 8),bVar8 + 0x2a));
          puVar38 = (undefined2 *)((int)puVar62 + -0xc);
          puVar62 = (undefined4 *)((int)puVar62 + -0xc);
          *puVar38 = in_DS;
          pbStack_38._0_2_ = in_ES;
          goto _ctor;
        }
        bVar67 = false;
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pbVar23);
        goto code_r0x004037a7;
      }
      bVar11 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar8;
      *(uint *)pbVar23 = (*(int *)pbVar23 - (int)pbVar23) - (uint)CARRY1(bVar11,bVar8);
      bVar8 = *pbVar34;
      bVar11 = (byte)((ulonglong)uVar70 >> 0x20);
      *pbVar34 = *pbVar34 + bVar11;
      if (CARRY1(bVar8,bVar11)) goto code_r0x0040375a;
    } while( true );
  }
  uVar70 = CONCAT44(puVar30,pbVar15);
  puVar59 = puVar64 + (uint)bVar68 * -2 + 1;
  out(*puVar64,(short)puVar30);
  bVar11 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar11;
  *pbVar34 = *pbVar34 + (char)pbVar61;
  bVar8 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar11;
  *(byte **)(pbVar61 + -0x49) =
       (byte *)((int)puVar59 + (uint)CARRY1(bVar8,bVar11) + *(int *)(pbVar61 + -0x49));
  puVar62 = uStack_40;
  in_ES = pbStack_38._0_2_;
code_r0x0040375a:
  pbVar15 = (byte *)uVar70;
  *pbVar15 = *pbVar15 + (char)uVar70;
  bVar67 = CARRY1((byte)((uint)pbVar34 >> 8),*pbVar15);
  *(undefined2 *)((int)puVar62 + -4) = uVar65;
  iVar18 = CONCAT31(0x1f0a00,bVar67 + 'o') + *(int *)(pbVar61 + (int)pbVar57) +
           (uint)(0x90 < bVar67) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar70 >> 0x20);
  pcVar22 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + -0x66) | *puVar63);
  bVar8 = *(byte *)((int)puVar63 + -0x46);
  pcVar17 = (char *)CONCAT22(0xd0a,(ushort)bVar8 << 8);
  *pcVar22 = *pcVar22 + (char)pcVar22;
  bVar11 = (byte)((ulonglong)uVar70 >> 0x20);
  puVar31 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar61[(int)pbVar57],bVar11));
  *pcVar17 = *pcVar17 + (char)pcVar22;
  *pbVar57 = *pbVar57 - bVar8;
  *puVar31 = *puVar31;
  pbVar15 = (byte *)(((uint)pcVar22 | 8) + 0x4490f9d8);
  bVar8 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar8;
  uVar21 = *puVar59;
  *(uint *)((int)puVar59 + (int)pbVar15) = *(uint *)((int)puVar59 + (int)pbVar15) ^ (uint)pcVar17;
  *pbVar15 = *pbVar15 | bVar8;
  piVar39 = (int *)0x2609fffc;
  bVar67 = false;
  uRam2609fffc = in_ES;
  *pbVar15 = *pbVar15 | bVar8;
  uVar70 = CONCAT44(CONCAT31((int3)((uint)puVar31 >> 8),bVar11 | (byte)uVar21),pbVar15);
code_r0x004037a7:
  while( true ) {
    pbVar15 = (byte *)((ulonglong)uVar70 >> 0x20);
    uVar65 = (undefined2)((ulonglong)uVar70 >> 0x20);
    out(*puVar59,uVar65);
    out(puVar59[(uint)bVar68 * -2 + 1],uVar65);
    puVar30 = (uint *)((int)puVar63 + (int)pbVar15);
    uVar21 = *puVar30;
    uVar5 = (uint)uVar70 + *puVar30;
    *puVar30 = uVar5 + bVar67;
    iVar18 = *piVar39 + *(int *)(pcVar17 + (int)pbVar15) +
             (uint)(CARRY4(uVar21,(uint)uVar70) || CARRY4(uVar5,(uint)bVar67));
    cVar10 = (char)iVar18 + '\t';
    pbVar23 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),cVar10);
    pcVar22 = (char *)((uint)bVar68 * -8 + 0x260a0004);
    out(uRam260a0000,uVar65);
    uVar65 = (undefined2)piVar39[1];
    *pbVar23 = *pbVar23 + cVar10;
    bVar11 = (byte)((uint)pcVar17 >> 8) | *pbVar15;
    *(undefined2 *)(piVar39 + 1) = in_DS;
    bVar8 = *pbVar23;
    pbVar23 = pbVar23 + (uint)CARRY1(bVar11,*pbVar23) + *(int *)pbVar23;
    *pbVar15 = *pbVar15 + 6;
    cVar9 = (char)pbVar61 - *pcVar22;
    pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),CONCAT11(bVar11 + bVar8 + *pbVar23,6))
    ;
    *pbVar23 = *pbVar23;
    *(undefined2 *)piVar39 = in_ES;
    uVar26 = (undefined3)((uint)pbVar23 >> 8);
    cVar10 = (char)pbVar23 - *pbVar23;
    piVar16 = (int *)CONCAT31(uVar26,cVar10);
    puVar59 = (uint *)(pcVar22 + *piVar16);
    bVar8 = cVar10 + (char)*piVar16;
    pcVar22 = (char *)CONCAT31(uVar26,bVar8);
    piVar40 = piVar39 + -1;
    piVar39[-1] = (int)pcVar17;
    *pcVar22 = *pcVar22 + bVar8;
    *pcVar22 = *pcVar22 + bVar8;
    *pcVar22 = *pcVar22 + bVar8;
    bVar67 = CARRY1(*pbVar15,bVar8);
    *pbVar15 = *pbVar15 + bVar8;
    if (bVar67) break;
    in_ES = (undefined2)piVar39[-1];
    pbVar61 = (byte *)CONCAT31((int3)((uint)pbVar61 >> 8),cVar9);
    uVar70 = CONCAT44(pbVar15,pcVar22);
  }
  *pcVar22 = *pcVar22 + bVar8;
  pbVar34 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                             CONCAT11((byte)((uint)pbVar61 >> 8) | bRam080a0056,cVar9));
  *pcVar22 = *pcVar22 + bVar8;
  bVar28 = bVar8 + 2;
  *pbVar34 = *pbVar34 - (char)((ulonglong)uVar70 >> 0x20);
  *(char *)CONCAT31(uVar26,bVar28) = *(char *)CONCAT31(uVar26,bVar28) + bVar28;
  uVar21 = *puVar59;
  uVar29 = (undefined3)((uint)pcVar17 >> 8);
  pbVar23 = (byte *)(CONCAT31(uVar29,(byte)uVar21) | 6);
  bVar11 = 9 < (bVar8 + 0x74 & 0xf) | in_AF;
  bVar12 = bVar8 + 0x74 + bVar11 * '\x06';
  bVar12 = bVar12 + (0x90 < (bVar12 & 0xf0) | 0x8d < bVar28 | bVar11 * (0xf9 < bVar12)) * '`';
  pbVar61 = (byte *)CONCAT31(uVar26,bVar12);
  bVar8 = *pbVar61;
  *pbVar61 = *pbVar61 + bVar12;
  if (!SCARRY1(bVar8,bVar12)) {
    *(byte *)puVar59 = (byte)*puVar59 + bVar12;
    puVar59 = (uint *)((int)puVar59 + *(int *)(pbVar15 + 0x33));
    *pbVar61 = *pbVar61 | bVar12;
    *(byte *)puVar59 = (byte)*puVar59 + bVar12;
    bVar8 = bVar12 + 0x72;
    piVar39[-2] = (int)pbVar34;
    *(byte *)CONCAT31(uVar26,bVar8) = *(byte *)CONCAT31(uVar26,bVar8) | bVar8;
    *(byte *)puVar59 = (byte)*puVar59 + bVar8;
    pbVar23 = (byte *)CONCAT31(uVar29,((byte)uVar21 | 6) + (byte)*puVar59);
    pcVar17 = (char *)CONCAT31(uVar26,bVar12 - 0x11);
    piVar40 = piVar39 + -3;
    piVar39[-3] = (int)pbVar23;
    *pcVar17 = *pcVar17 + (bVar12 - 0x11);
    pbVar61 = (byte *)CONCAT31(uVar26,bVar12 - 0xf);
    puVar63 = (uint *)((int)puVar63 + iRam080a0052);
    *pbVar61 = *pbVar61 + (bVar12 - 0xf);
  }
code_r0x00403825:
  pbVar58 = (byte *)0x80a0000;
  uVar26 = (undefined3)((uint)pbVar61 >> 8);
  cVar10 = (char)pbVar61 + '\x7f';
  pcVar17 = (char *)CONCAT31(uVar26,cVar10);
  *(byte **)((int)piVar40 + -4) = pbVar34;
  *pcVar17 = *pcVar17 + cVar10;
  iVar18 = CONCAT31(uVar26,(char)pbVar61 + -0x7f) + 0x547d;
  cVar9 = (char)iVar18;
  uVar26 = (undefined3)((uint)iVar18 >> 8);
  cVar10 = cVar9 + '*';
  pcVar17 = (char *)CONCAT31(uVar26,cVar10);
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | (byte)*puVar59);
  cVar33 = (char)pbVar34 - (byte)*puVar59;
  uVar66 = (undefined2)((uint)pbVar34 >> 0x10);
  cVar35 = (char)((uint)pbVar34 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar34 >> 8),cVar33) + 0x57);
  *pcVar17 = *pcVar17 + cVar10;
  bVar8 = cVar9 + 0x54U & *pbVar15;
  iVar18 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
  pcVar17 = (char *)CONCAT31(uVar26,bVar8 + 0x2a);
  *(undefined2 *)((int)piVar40 + -8) = in_DS;
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar33)) + 0x58);
  *pcVar17 = *pcVar17 + bVar8 + 0x2a;
  bVar28 = bVar8 + 0x54 & *pbVar15;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar26,bVar28) = *(char *)CONCAT31(uVar26,bVar28) + bVar28;
  pcVar17 = (char *)CONCAT31(uVar26,bVar28 + 0x2a);
  pbVar61 = *(byte **)((int)piVar40 + -8);
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar33)) + 0x55);
  *pcVar17 = *pcVar17 + bVar28 + 0x2a;
  pcVar17 = (char *)CONCAT31(uVar26,bVar28 + 0x57);
  pbVar15 = pbVar15 + *(int *)pbVar61;
  *(undefined4 *)((int)piVar40 + -8) = 0x2a;
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar33)) + 0x55);
  *pcVar17 = *pcVar17 + bVar28 + 0x57;
  cVar10 = bVar28 - 0x3a;
  pcVar17 = (char *)CONCAT31(uVar26,cVar10);
  *(undefined2 *)((int)piVar40 + -0xc) = uVar65;
  *pcVar17 = *pcVar17 + cVar10;
  bVar8 = *pbVar15;
  cVar9 = (char)pbVar23;
  *(undefined2 *)((int)piVar40 + -0x10) = in_DS;
  pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,
                                                  cVar33)) + 0x59),cVar33));
  *pcVar17 = *pcVar17 + cVar10;
  bVar13 = bVar28 - 0x10 & *pbVar15;
  puVar63 = (uint *)((int)puVar63 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar18);
  *(char *)CONCAT31(uVar26,bVar13) = *(char *)CONCAT31(uVar26,bVar13) + bVar13;
  bVar13 = bVar13 + 0x2a;
  pbVar57 = (byte *)CONCAT31(uVar26,bVar13);
  puVar62 = (undefined4 *)((int)piVar40 + -0x14);
  *(undefined2 *)((int)piVar40 + -0x14) = in_DS;
  bVar28 = *(byte *)((int)puVar63 + 0x17);
  *pbVar57 = *pbVar57 + bVar13;
  bVar12 = *pbVar15;
  puVar42 = (undefined4 *)((int)piVar40 + -0x18);
  *(undefined2 *)((int)piVar40 + -0x18) = in_DS;
  bVar14 = *(byte *)((int)puVar63 + 0x1a);
  *pbVar57 = *pbVar57 + bVar13;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar23 >> 8) | bVar8) + bVar28 | bVar12) +
                                      bVar14 | *pbVar15,cVar9));
  *pbVar34 = *pbVar34 + cVar33;
  *(byte *)((int)pbVar57 * 2) = *(byte *)((int)pbVar57 * 2) ^ bVar13;
  bVar8 = *pbVar57;
  *pbVar57 = *pbVar57 + bVar13;
  bVar28 = *pbVar57;
  *pbVar23 = *pbVar23 + (char)pbVar15;
  bVar8 = ((bVar13 - bVar28) - CARRY1(bVar8,bVar13)) + *pbVar15;
  pbVar57 = (byte *)CONCAT31(uVar26,bVar8);
  if ((POPCOUNT(bVar8) & 1U) != 0) {
    pbVar15 = *(byte **)((int)piVar40 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar57 = *pbVar57 + bVar8;
  cVar10 = (bVar8 + 0x6f) - (0x90 < bVar8);
  pbVar24 = (byte *)CONCAT31(uVar26,cVar10);
  bVar8 = *pbVar15;
  *pbVar15 = *pbVar15 + cVar9;
  if (SCARRY1(bVar8,cVar9) == (char)*pbVar15 < '\0') {
    cRam33100000 = cRam33100000 - cVar10;
    cVar10 = cVar10 + *pbVar15;
    pbVar57 = (byte *)CONCAT31(uVar26,cVar10);
    puVar62 = (undefined4 *)((int)piVar40 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar24 = *pbVar24 + (char)pbVar24;
code_r0x004038b0:
    uVar26 = (undefined3)((uint)pbVar24 >> 8);
    cVar10 = (char)pbVar24 + '\x02';
    pbVar57 = (byte *)CONCAT31(uVar26,cVar10);
    puVar62 = puVar42;
    if ((POPCOUNT(cVar10) & 1U) != 0) {
code_r0x00403908:
      puVar63 = (uint *)((int)puVar63 - *(int *)pbVar61);
      cVar10 = (char)pbVar57 + *pbVar15;
      pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar10);
code_r0x0040390c:
      cVar9 = (char)pbVar57;
      if ((POPCOUNT(cVar10) & 1U) == 0) goto code_r0x0040390e;
      *pbVar61 = *pbVar61 + cVar9;
      goto code_r0x00403962;
    }
    *pbVar57 = *pbVar57 + cVar10;
    puVar62 = (undefined4 *)((int)puVar42 + -4);
    piVar40 = (int *)((int)puVar42 + -4);
    *(byte **)((int)puVar42 + -4) = pbVar23;
    cVar10 = (char)pbVar24 + '.' + *pbVar15;
    pbVar57 = (byte *)CONCAT31(uVar26,cVar10);
    if ((POPCOUNT(cVar10) & 1U) != 0) {
      pbVar24 = pbVar15 + (int)pbVar57;
      *pbVar24 = *pbVar24 + cVar10;
      bVar8 = *pbVar24;
      goto code_r0x00403912;
    }
    *pbVar57 = *pbVar57 + cVar10;
    bVar8 = cVar10 + 2;
    pbVar57 = (byte *)CONCAT31(uVar26,bVar8);
    puVar62 = (undefined4 *)((int)puVar42 + -4);
    if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403916;
    *pbVar57 = *pbVar57 + bVar8;
    cVar9 = cVar10 + 'q';
    piVar16 = (int *)CONCAT31(uVar26,cVar9);
    *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0x90 < bVar8);
    bVar8 = *pbVar34;
    bVar28 = (byte)((uint)pbVar23 >> 8);
    *pbVar34 = *pbVar34 + bVar28;
    if (!CARRY1(bVar8,bVar28)) {
      out(*(undefined4 *)pbVar61,(short)pbVar15);
      bVar8 = (cVar9 - (char)*piVar16) - CARRY1(bVar8,bVar28);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      cVar10 = bVar8 - *(byte *)CONCAT31(uVar26,bVar8);
      puVar59 = (uint *)(pbVar61 +
                        ((((uint)bVar68 * -8 + 4) - *(int *)CONCAT31(uVar26,cVar10)) -
                        (uint)(bVar8 < *(byte *)CONCAT31(uVar26,bVar8))));
      pbVar61 = (byte *)CONCAT31(uVar26,cVar10);
      goto code_r0x00403825;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    uVar66 = (undefined2)((uint)pbVar34 >> 0x10);
    bVar8 = (byte)((uint)pbVar34 >> 8) | bRam080a0056;
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    pcVar17 = (char *)CONCAT31(uVar26,cVar10 + 's');
    pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar8 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar8,(
                                                  char)pbVar34)) + 0x56),(char)pbVar34));
    *pcVar17 = *pcVar17 + cVar10 + 's';
    bVar8 = cVar10 - 0xf;
    pbVar15 = *(byte **)((int)puVar42 + -4);
    *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
    bVar28 = cVar10 + 0x1e;
    pbVar24 = (byte *)CONCAT31(uVar26,bVar28);
    *(byte **)(pbVar61 + (int)puVar63 * 8) =
         pbVar15 + (uint)(0xd2 < bVar8) + *(int *)(pbVar61 + (int)puVar63 * 8);
    puVar62 = (undefined4 *)((int)puVar42 + -4);
    puVar44 = (undefined4 *)((int)puVar42 + -4);
    *(undefined2 *)((int)puVar42 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar24;
    bVar8 = *pbVar61;
    *pbVar61 = *pbVar61 + bVar28;
    if (CARRY1(bVar8,bVar28)) {
      *pbVar24 = *pbVar24 + bVar28;
      pbVar57 = (byte *)CONCAT31(uVar26,bVar28 | pbVar24[0x400005a]);
      if ('\0' < (char)(bVar28 | pbVar24[0x400005a])) {
code_r0x004038f6:
        bVar8 = (byte)pbVar57;
        *pbVar57 = *pbVar57 + bVar8;
        uVar26 = (undefined3)((uint)pbVar57 >> 8);
        cVar10 = ((bVar8 + 0x28) - *(char *)CONCAT31(uVar26,bVar8 + 0x28)) - (0xd7 < bVar8);
        pbVar57 = (byte *)CONCAT31(uVar26,cVar10);
        bVar8 = *pbVar34;
        bVar28 = (byte)((uint)pbVar23 >> 8);
        *pbVar34 = *pbVar34 + bVar28;
        if (CARRY1(bVar8,bVar28)) {
          *pbVar57 = *pbVar57 + cVar10;
          pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                     CONCAT11(bVar28 | *pbVar57,(char)pbVar23));
          *pbVar61 = *pbVar61 + cVar10;
          goto code_r0x00403908;
        }
        pbVar24 = pbVar57 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar26 = (undefined3)((uint)pbVar57 >> 8);
      bVar28 = (char)pbVar57 + 0x6f;
      bVar8 = *(byte *)CONCAT31(uVar26,bVar28);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      pbVar57 = (byte *)CONCAT31(uVar26,(bVar28 & bVar8) + *pbVar61);
      *pbVar23 = *pbVar23 - (char)((uint)pbVar15 >> 8);
      puVar49 = puVar44;
      goto code_r0x0040395a;
    }
    puVar41 = (undefined4 *)((int)puVar42 + -8);
    puVar42 = (undefined4 *)((int)puVar42 + -8);
    *puVar41 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar16 = (char)*piVar16 + bVar8;
  puVar59 = puVar64;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar57 = *pbVar57 + cVar9;
  bVar8 = cVar9 + 2;
  pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),bVar8);
code_r0x00403912:
  bVar67 = (POPCOUNT(bVar8) & 1U) == 0;
  puVar49 = puVar62;
  if (!bVar67) goto code_r0x00403967;
  *pbVar57 = *pbVar57 + (char)pbVar57;
code_r0x00403916:
  bVar14 = (char)pbVar57 + 0x6f;
  pbVar24 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar57 >> 8),bVar14);
  bVar8 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar14;
  bVar28 = *pbVar24;
  bVar12 = *pbVar24;
  puVar49 = (undefined4 *)((int)puVar62 + -4);
  *(undefined2 *)((int)puVar62 + -4) = in_ES;
  if (bVar12 == 0 || SCARRY1(bVar8,bVar14) != (char)bVar28 < '\0') goto code_r0x00403979;
  *pbVar24 = *pbVar24 + bVar14;
  pbVar24 = (byte *)CONCAT31((int3)(char)((uint)pbVar57 >> 8),(char)pbVar57 + -100);
  *(byte **)(pbVar61 + (int)puVar63 * 8) =
       pbVar15 + (uint)(0xd2 < bVar14) + *(int *)(pbVar61 + (int)puVar63 * 8);
  puVar43 = (undefined2 *)((int)puVar62 + -8);
  puVar62 = (undefined4 *)((int)puVar62 + -8);
  *puVar43 = in_ES;
code_r0x00403926:
  puVar42 = puVar62 + 1;
  puVar49 = puVar62 + 1;
  puVar44 = puVar62 + 1;
  *(undefined4 *)pbVar24 = *puVar62;
  bVar8 = *pbVar61;
  bVar28 = (byte)pbVar24;
  *pbVar61 = *pbVar61 + bVar28;
  if (CARRY1(bVar8,bVar28)) {
    *pbVar24 = *pbVar24 + bVar28;
    uVar26 = (undefined3)((uint)pbVar24 >> 8);
    bVar28 = bVar28 | pbVar24[0x400005b];
    pbVar57 = (byte *)CONCAT31(uVar26,bVar28);
    pbVar24 = pbVar61;
    if ((char)bVar28 < '\x01') goto code_r0x00403991;
    *pbVar57 = *pbVar57 + bVar28;
    cVar10 = bVar28 + 0x28;
    pbVar57 = (byte *)CONCAT31(uVar26,cVar10);
    *(byte **)pbVar57 = pbVar57 + (uint)(0xd7 < bVar28) + *(int *)pbVar57;
    bVar8 = *pbVar34;
    bVar28 = (byte)((uint)pbVar23 >> 8);
    *pbVar34 = *pbVar34 + bVar28;
    if (CARRY1(bVar8,bVar28)) {
      *pbVar57 = *pbVar57 + cVar10;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(bVar28 | *pbVar57,(char)pbVar23));
      *pbVar61 = *pbVar61 + cVar10;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x55],(char)pbVar34))
      ;
      *pbVar57 = *pbVar57 + cVar10;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar62 = in_ES;
code_r0x00403962:
    puVar49 = (undefined4 *)((int)puVar62 + -4);
    *(undefined2 *)((int)puVar62 + -4) = uVar65;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar57 = *pbVar57 + (char)pbVar57;
  puVar45 = (undefined2 *)((int)puVar49 + -4);
  puVar49 = (undefined4 *)((int)puVar49 + -4);
  *puVar45 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar23;
  pbVar34 = (byte *)((uint)pbVar34 | (uint)pbVar61);
  cVar10 = (char)pbVar57 + '\x02';
  pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar10);
  bVar67 = (POPCOUNT(cVar10) & 1U) == 0;
code_r0x00403967:
  if (!bVar67) goto code_r0x004039be;
  *pbVar57 = *pbVar57 + (char)pbVar57;
  uVar26 = (undefined3)((uint)pbVar57 >> 8);
  bVar8 = (char)pbVar57 + 0x6f;
  bVar8 = bVar8 & *(byte *)CONCAT31(uVar26,bVar8);
  pbVar24 = (byte *)CONCAT31(uVar26,bVar8);
  *pbVar15 = *pbVar15 + (char)pbVar23;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar8;
code_r0x00403979:
  do {
    bVar8 = (char)pbVar24 - (byte)*puVar63;
    bVar67 = bVar8 < *pbVar23;
    pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar8 - *pbVar23);
    do {
      cVar10 = (char)pbVar57;
      *pbVar57 = *pbVar57 + cVar10 + bVar67;
      *pbVar57 = *pbVar57 + cVar10;
      *pbVar23 = *pbVar23 + (char)pbVar15;
      pbVar23[0x101c00aa] = pbVar23[0x101c00aa] + (char)pbVar34;
      *pbVar57 = *pbVar57 + cVar10;
      *(byte **)pbVar61 = pbVar34 + *(int *)pbVar61;
      bVar8 = (byte)((uint)pbVar23 >> 8);
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(bVar8 + *pbVar57,(char)pbVar23));
      pbVar57 = pbVar57 + (uint)CARRY1(bVar8,*pbVar57) + *(int *)pbVar57;
      pbVar24 = pbVar61;
code_r0x00403991:
      cVar10 = (char)pbVar23;
      *pbVar15 = *pbVar15 + cVar10;
      cVar9 = (char)pbVar34 - pbVar24[2];
      pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar9);
      pbVar61 = pbVar24;
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040395a;
      *pbVar57 = *pbVar57 + (byte)pbVar57;
      uVar27 = (uint3)((uint)pbVar57 >> 8);
      bVar8 = (byte)pbVar57 | *pbVar34;
      piVar16 = (int *)CONCAT31(uVar27,bVar8);
      bVar28 = (byte)((uint)pbVar23 >> 8);
      bVar12 = (byte)pbVar15;
      if (bVar8 == 0) {
        *(char *)piVar16 = (char)*piVar16;
        puVar49 = (undefined4 *)((int)puVar49 + -*(int *)(pbVar58 + 0x1b000007));
        pbVar61 = pbVar24 + (uint)bVar68 * -8 + 4;
        out(*(undefined4 *)pbVar24,(short)pbVar15);
        pbVar57 = (byte *)((uint)uVar27 << 8);
        *pbVar15 = *pbVar15 + cVar10;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar12 - *pbVar34);
        *pbVar34 = *pbVar34;
        *pbVar15 = *pbVar15 + bVar28;
        *pbVar57 = *pbVar57;
        *pbVar34 = *pbVar34 + cVar9;
        *pbVar57 = *pbVar57;
        *(byte **)(pbVar34 + -0x3d) = pbVar61 + *(int *)(pbVar34 + -0x3d);
        break;
      }
      pbVar58 = pbVar58 + -puVar63[9];
      *(byte *)piVar16 = (char)*piVar16 + bVar8;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar28 | *pbVar15,cVar10));
      pbVar61 = pbVar24 + *piVar16;
      pcVar17 = (char *)((int)piVar16 + *piVar16);
      bVar28 = (char)pcVar17 - *pcVar17;
      pbVar57 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar28);
      bVar8 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar28;
      pbVar57 = pbVar57 + (-(uint)CARRY1(bVar8,bVar28) - *(int *)pbVar57);
      bVar67 = CARRY1(*pbVar23,bVar12);
      *pbVar23 = *pbVar23 + bVar12;
    } while (!bVar67);
    *pbVar57 = *pbVar57 + (char)pbVar57;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | *pbVar15);
code_r0x004039be:
    puVar62 = (undefined4 *)((int)puVar49 + -4);
    puVar46 = (undefined1 *)((int)puVar49 + -4);
    *(undefined2 *)((int)puVar49 + -4) = in_ES;
    puVar63 = (uint *)((int)puVar63 + *(int *)(pbVar58 + -0x3c));
    *pbVar57 = *pbVar57 + (byte)pbVar57;
    uVar26 = (undefined3)((uint)pbVar57 >> 8);
    bVar8 = (byte)pbVar57 | *pbVar15;
    pcVar17 = (char *)CONCAT31(uVar26,bVar8);
    if ((POPCOUNT(bVar8) & 1U) != 0) {
      cVar10 = *pcVar17;
      *pcVar17 = *pcVar17 + bVar8;
      cVar9 = *pcVar17;
      puVar31 = (undefined1 *)((int)puVar49 + -4);
      if (!SCARRY1(cVar10,bVar8)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar62 = (undefined4 *)puVar31;
      cVar10 = (char)pcVar17;
      *pcVar17 = *pcVar17 + cVar10;
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      bVar8 = cVar10 + 2;
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        pcVar17 = (char *)CONCAT31(uVar26,bVar8 + *pbVar15);
        pbVar57 = pbVar61;
        if ((POPCOUNT(bVar8 + *pbVar15) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar61 + (int)puVar63 * 8) =
             pbVar15 + (uint)(0xd2 < (byte)pcVar17) + *(int *)(pbVar61 + (int)puVar63 * 8);
        puVar48 = (undefined2 *)((int)puVar62 + -4);
        puVar62 = (undefined4 *)((int)puVar62 + -4);
        *puVar48 = in_ES;
        pbVar24 = pbVar58;
        pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 + 0x2d);
code_r0x00403ad8:
        pbVar58 = pbVar25;
        bVar8 = *pbVar24;
        bVar28 = (byte)pbVar24;
        *pbVar24 = *pbVar24 + bVar28;
        puVar49 = (undefined4 *)((int)puVar62 + -4);
        *(undefined2 *)((int)puVar62 + -4) = in_ES;
        puVar31 = (undefined1 *)((int)puVar62 + -4);
        if (CARRY1(bVar8,bVar28)) {
          *pbVar24 = *pbVar24 + bVar28;
          bVar28 = bVar28 | pbVar24[0x400005d];
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar28);
          pbVar57 = pbVar61;
          if ((char)bVar28 < '\x01') {
            *pbVar24 = *pbVar24 + bVar28;
            pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar15,(char)pbVar23)
                                      );
            pbVar57 = *(byte **)((int)puVar62 + -4);
            pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                       CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[-0x39],
                                                (char)pbVar34));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar24 = *pbVar24 + (char)pbVar24;
          cVar10 = (char)pbVar24 + '(';
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar10);
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          bVar8 = *pbVar34;
          bVar28 = (byte)((uint)pbVar23 >> 8);
          *pbVar34 = *pbVar34 + bVar28;
          pbVar61 = pbVar57;
          if (!CARRY1(bVar8,bVar28)) {
            puVar62 = (undefined4 *)((int)puVar49 + -4);
            *(undefined2 *)((int)puVar49 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar24 = *pbVar24 + cVar10;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
      piVar16 = (int *)CONCAT31(uVar26,cVar10 + '*');
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0xd7 < bVar8);
      bVar8 = *pbVar15;
      bVar14 = (byte)pbVar23;
      *pbVar15 = *pbVar15 + bVar14;
      out(*(undefined4 *)pbVar61,(short)pbVar15);
      bVar12 = ((cVar10 + '*') - (char)*piVar16) - CARRY1(bVar8,bVar14);
      pbVar57 = (byte *)CONCAT31(uVar26,bVar12);
      *pbVar15 = *pbVar15 + bVar14;
      uVar66 = (undefined2)((uint)pbVar34 >> 0x10);
      uVar32 = SUB41(pbVar34,0);
      cVar10 = (char)((uint)pbVar34 >> 8) - pbVar61[(uint)bVar68 * -8 + 0x1f];
      pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(cVar10,uVar32));
      *pbVar57 = *pbVar57 + bVar12;
      bVar28 = *pbVar15;
      bVar8 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar12;
      pbVar61 = pbVar61 + ((((uint)bVar68 * -8 + 4) - *(int *)pbVar57) - (uint)CARRY1(bVar8,bVar12))
      ;
      pbVar57 = (byte *)CONCAT31(uVar26,bVar12);
      pbVar23 = (byte *)(CONCAT22((short)((uint)pbVar23 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar23 >> 8) | bVar28,bVar14)) + -1);
      bVar8 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar12;
      bVar8 = (bVar12 - *pbVar57) - CARRY1(bVar8,bVar12);
      *pbVar23 = *pbVar23 + (char)pbVar15;
      bVar67 = CARRY1(bVar8,*pbVar15);
      bVar8 = bVar8 + *pbVar15;
      pbVar57 = (byte *)CONCAT31(uVar26,bVar8);
      if ((POPCOUNT(bVar8) & 1U) == 0) {
        *pbVar57 = *pbVar57 + bVar8;
        cVar9 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pbVar24 = (byte *)CONCAT31(uVar26,cVar9);
        bVar8 = *pbVar15;
        *pbVar15 = *pbVar15 + (char)pbVar23;
        if (SCARRY1(bVar8,(char)pbVar23) == (char)*pbVar15 < '\0') {
code_r0x00403aaf:
          cVar10 = (char)pbVar24 + '(';
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar10);
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          bVar8 = *pbVar34;
          bVar28 = (byte)((uint)pbVar23 >> 8);
          *pbVar34 = *pbVar34 + bVar28;
          pbVar25 = pbVar58;
          if (!CARRY1(bVar8,bVar28)) goto code_r0x00403ad8;
          *pbVar24 = *pbVar24 + cVar10;
          pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                     CONCAT11(bVar28 | *pbVar34,(char)pbVar23));
          if ((POPCOUNT(*pbVar15 - cVar10) & 1U) != 0) {
            *pbVar61 = *pbVar61 + cVar10;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar24 = *pbVar24 + cVar9;
          pcVar17 = (char *)CONCAT31(uVar26,cVar9 + '\x02');
          bVar28 = cVar10 + pbVar34[0x52];
          pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28,uVar32));
          *pcVar17 = *pcVar17 + cVar9 + '\x02';
          bVar8 = cVar9 + 4;
          pbVar24 = (byte *)CONCAT31(uVar26,bVar8);
          if ((POPCOUNT(bVar8) & 1U) == 0) {
            *pbVar24 = *pbVar24 + bVar8;
            cVar10 = (cVar9 + 's') - (0x90 < bVar8);
            pcVar17 = (char *)CONCAT31(uVar26,cVar10);
            bVar8 = (byte)((uint)pbVar23 >> 8);
            bVar67 = CARRY1(*pbVar34,bVar8);
            *pbVar34 = *pbVar34 + bVar8;
            pbVar57 = pbVar61;
            if (bVar67) {
              *pcVar17 = *pcVar17 + cVar10;
              pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28 | pbVar58[0x5c],uVar32));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar63 = (uint *)((int)puVar63 - *(int *)pbVar24);
          pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28 + pbVar34[0x52],uVar32));
        }
        *pbVar24 = *pbVar24 + (char)pbVar24;
        cVar10 = (char)pbVar24 + '\x02';
        pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar10);
        bVar67 = (POPCOUNT(cVar10) & 1U) == 0;
        if (!bVar67) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar8 = (byte)pbVar57;
        *pbVar57 = *pbVar57 + bVar8;
        cVar10 = (bVar8 + 0x6f) - (0x90 < bVar8);
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar10);
        bVar8 = *pbVar34;
        cVar9 = (char)((uint)pbVar23 >> 8);
        *pbVar34 = *pbVar34 + cVar9;
        if (*pbVar34 == 0 || SCARRY1(bVar8,cVar9) != (char)*pbVar34 < '\0') goto code_r0x00403b2c;
        *pcVar17 = *pcVar17 + cVar10;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar67) {
        pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                   CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x53],(char)pbVar34
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar57 = *pbVar57 + (byte)pbVar57;
      bVar8 = (byte)pbVar57 | pbVar57[0x400005e];
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),bVar8);
      if ('\0' < (char)bVar8) {
        *pbVar24 = *pbVar24 + bVar8;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar17 = *pcVar17 + bVar8;
    *pbVar61 = *pbVar61 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar26,bVar8 + 6);
    pbVar24 = (byte *)uVar3;
    bVar8 = *pbVar15;
    bVar28 = (byte)pbVar23;
    *pbVar15 = *pbVar15 + bVar28;
    if (CARRY1(bVar8,bVar28)) {
      *pbVar24 = *pbVar24 + (char)uVar3;
      bVar12 = (byte)((uint)pbVar23 >> 8) | *pbVar24;
      uVar66 = CONCAT11(bVar12,bVar28);
      pbVar24 = pbVar24 + -*(int *)pbVar24;
      bVar8 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar12;
      if (CARRY1(bVar8,bVar12)) {
        cVar9 = (char)pbVar24;
        *pbVar24 = *pbVar24 + cVar9;
        bVar8 = *pbVar15;
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((char)((uint)pbVar15 >> 8) - pbVar34[-0x3a],
                                            (char)pbVar15));
        *pbVar24 = *pbVar24 + cVar9;
        uVar37 = (undefined2)((uint)pbVar34 >> 0x10);
        bVar36 = (byte)((uint)pbVar34 >> 8) | pbVar15[0x32];
        pcVar17 = (char *)CONCAT22(uVar37,CONCAT11(bVar36,(char)pbVar34));
        cVar10 = *pcVar17;
        puVar46 = (undefined1 *)((int)puVar49 + -8);
        *(undefined2 *)((int)puVar49 + -8) = in_CS;
        cVar10 = cVar9 + cVar10 + '-';
        pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar10);
        *pbVar24 = *pbVar24;
        *(undefined2 *)((int)puVar49 + -0xc) = in_ES;
        bVar14 = *pbVar15;
        uVar65 = *(undefined2 *)((int)puVar49 + -0xc);
        cVar9 = (char)pbVar34 - *pbVar61;
        bVar13 = *(byte *)((int)puVar63 + 0x17);
        *pbVar24 = *pbVar24 + cVar10;
        uVar66 = CONCAT11((bVar12 | bVar8) + bVar13 | *pbVar15,bVar28 - bVar14);
        pbVar34 = (byte *)CONCAT22(uVar37,CONCAT11(bVar36 + *(char *)(CONCAT31((int3)((uint)pcVar17
                                                                                     >> 8),cVar9) +
                                                                     0x4e),cVar9));
        *pbVar24 = *pbVar24 + cVar10;
      }
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),uVar66);
      bVar8 = (byte)pbVar24;
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      pcVar17 = (char *)CONCAT31(uVar26,bVar8 + 0x28);
      *pcVar17 = (*pcVar17 - (bVar8 + 0x28)) - (0xd7 < bVar8);
      *pbVar15 = *pbVar15 + (char)uVar66;
      bVar28 = bVar8 + 0x1b;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x4f],(char)pbVar34))
      ;
      *(char *)CONCAT31(uVar26,bVar28) = *(char *)CONCAT31(uVar26,bVar28) + bVar28;
      pcVar22 = (char *)CONCAT31(uVar26,bVar8 + 0x43);
      *pcVar22 = (*pcVar22 - (bVar8 + 0x43)) - (0xd7 < bVar28);
      *pbVar15 = *pbVar15 + (char)uVar66;
      pcVar17 = pcVar22 + -0x6b721c;
      pcVar22 = pcVar22 + -0x6b721a;
      *pcVar22 = *pcVar22 + (char)((uint)pbVar15 >> 8);
      cVar9 = *pcVar22;
      puVar62 = (undefined4 *)puVar46;
code_r0x00403a22:
      puVar31 = (undefined1 *)puVar62;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x00403a24;
      bVar8 = *pbVar15;
      *pbVar15 = *pbVar15 + (char)pbVar23;
      if (SCARRY1(bVar8,(char)pbVar23) == (char)*pbVar15 < '\0') {
        pbVar24 = pbVar58;
        pbVar25 = (byte *)(pcVar17 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar17 = *pcVar17 + (char)pcVar17;
      pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + '\x02');
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x54],(char)pbVar34))
      ;
      pbVar57 = pbVar61;
code_r0x00403a7d:
      cVar10 = (char)pcVar17;
      *pcVar17 = *pcVar17 + cVar10;
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      cVar9 = cVar10 + '-';
      pbVar25 = (byte *)CONCAT31(uVar26,cVar9);
      pbVar24 = pbVar58;
      pbVar61 = pbVar57;
      if ((POPCOUNT(cVar9 - *pbVar15) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar25 = *pbVar25 + cVar9;
      bVar8 = cVar10 + 0x2f;
      if ((POPCOUNT(bVar8) & 1U) != 0) {
        bVar8 = *pbVar15;
        *pbVar15 = *pbVar15 + (byte)pbVar23;
        *pbVar58 = *pbVar58 - CARRY1(bVar8,(byte)pbVar23);
        pbVar24 = (byte *)CONCAT31(uVar26,cVar10 + -0x53);
        pbVar58 = (byte *)*puVar62;
        puVar49 = puVar62 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
      bVar67 = 0x90 < bVar8;
      pcVar17 = (char *)CONCAT31(uVar26,cVar10 + -0x62);
code_r0x00403a8f:
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      bVar28 = (char)pcVar17 - bVar67;
      pbVar24 = (byte *)CONCAT31(uVar26,bVar28);
      bVar8 = *pbVar34;
      cVar10 = (char)((uint)pbVar23 >> 8);
      *pbVar34 = *pbVar34 + cVar10;
      puVar49 = puVar62;
      pbVar61 = pbVar57;
      if (*pbVar34 != 0 && SCARRY1(bVar8,cVar10) == (char)*pbVar34 < '\0') {
        *pbVar24 = *pbVar24 + bVar28;
        pbVar61 = (byte *)CONCAT31(uVar26,bVar28 + 0x2d);
        *(byte **)(pbVar57 + (int)puVar63 * 8) =
             pbVar15 + (uint)(0xd2 < bVar28) + *(int *)(pbVar57 + (int)puVar63 * 8);
        *(undefined2 *)((int)puVar62 + -4) = in_ES;
        bVar67 = CARRY1(*pbVar57,(byte)pbVar57);
        *pbVar57 = *pbVar57 + (byte)pbVar57;
        puVar47 = (undefined2 *)((int)puVar62 + -8);
        puVar62 = (undefined4 *)((int)puVar62 + -8);
        *puVar47 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar24,(char)pbVar23));
      *pbVar61 = *pbVar61 + (char)pbVar24;
      puVar31 = (undefined1 *)puVar49;
code_r0x00403afc:
      puVar62 = (undefined4 *)puVar31;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x55],(char)pbVar34))
      ;
      *pbVar24 = *pbVar24 + (char)pbVar24;
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      bVar28 = (char)pbVar24 + 0x6f;
      bVar8 = *(byte *)CONCAT31(uVar26,bVar28);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      pbVar24 = (byte *)CONCAT31(uVar26,(bVar28 & bVar8) + *pbVar61);
      *pbVar23 = *pbVar23 - (char)((uint)pbVar15 >> 8);
      break;
    }
    uVar65 = *(undefined2 *)((int)puVar49 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar24 = *pbVar24 + (char)pbVar24;
  puVar50 = (undefined2 *)((int)puVar62 + -4);
  puVar62 = (undefined4 *)((int)puVar62 + -4);
  *puVar50 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar23;
  pbVar34 = (byte *)((uint)pbVar34 | (uint)pbVar61);
  cVar10 = (char)pbVar24 + '\x02';
  pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar10);
  bVar67 = (POPCOUNT(cVar10) & 1U) == 0;
code_r0x00403b18:
  bVar8 = (byte)pbVar57;
  uVar26 = (undefined3)((uint)pbVar57 >> 8);
  if (!bVar67) {
    *pbVar15 = *pbVar15 + (char)pbVar23;
    pbVar24 = (byte *)CONCAT31(uVar26,bVar8 | *pbVar61);
code_r0x00403b73:
    pbVar57 = (byte *)((int)puVar63 + *(int *)(pbVar58 + -0x37));
    *pbVar24 = *pbVar24 + (byte)pbVar24;
    uVar26 = (undefined3)((uint)pbVar24 >> 8);
    bVar8 = (byte)pbVar24 | *pbVar15;
    pcVar17 = (char *)CONCAT31(uVar26,bVar8);
    uVar70 = CONCAT44(pbVar15,pcVar17);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *pcVar17 = *pcVar17 + bVar8;
      *pbVar61 = *pbVar61 + 1;
      return (byte *)CONCAT31(uVar26,bVar8 + 6);
    }
    bVar8 = *pbVar61;
    *pbVar61 = *pbVar61 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar8,'\x01')) {
      uVar70 = (*pcVar2)();
      pbVar23 = extraout_ECX_00;
    }
    pbVar15 = (byte *)uVar70;
    *pbVar15 = *pbVar15 + (char)uVar70;
    cVar9 = (char)((ulonglong)uVar70 >> 0x20);
    puVar63 = (uint *)CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar34[0x2f],cVar9));
    *pbVar15 = *pbVar15 + (char)uVar70;
    cVar10 = (char)pbVar23;
    bVar12 = (byte)((uint)pbVar23 >> 8) | *pbVar15;
    pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar8 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar12;
    bVar28 = (byte)pbVar15;
    if (CARRY1(bVar8,bVar12)) {
      *pbVar15 = *pbVar15 + bVar28;
      bVar12 = bVar12 | (byte)*puVar63;
      *pbVar34 = *pbVar34 - cVar9;
      *pbVar15 = *pbVar15 + bVar28;
      uVar26 = (undefined3)((uint)pbVar15 >> 8);
      bVar28 = bVar28 | (byte)*puVar63;
      puVar30 = (uint *)CONCAT31(uVar26,bVar28);
      bVar67 = CARRY4((uint)pbVar58,*puVar30);
      bVar69 = SCARRY4((int)pbVar58,*puVar30);
      pbVar58 = pbVar58 + *puVar30;
      *(uint *)((int)puVar62 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar69 * 0x800 | (uint)bVar68 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar58 < 0) * 0x80 |
           (uint)(pbVar58 == (byte *)0x0) * 0x40 | (uint)(bVar11 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar58 & 0xff) & 1U) == 0) * 4 | (uint)bVar67 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar30 = (char)*puVar30 + bVar28;
      *(undefined2 *)((int)puVar62 + -8) = in_ES;
      cVar9 = (char)pbVar34 - *pbVar61;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar34 >> 8),cVar9) +
                                                   0x5f),cVar9));
      *(byte *)puVar30 = (char)*puVar30 + bVar28;
      bVar8 = bVar28 + 0x2a & (byte)*puVar63;
      pbVar57 = pbVar57 + *(int *)(pbVar58 + 0x5f);
      *(char *)CONCAT31(uVar26,bVar8) = *(char *)CONCAT31(uVar26,bVar8) + bVar8;
      pbVar15 = (byte *)CONCAT31(uVar26,bVar8 + 0x2a);
      *(byte *)puVar63 = (byte)*puVar63 + 0x28;
      *pbVar15 = *pbVar15 + bVar8 + 0x2a;
      puVar53 = (undefined2 *)((int)puVar62 + -0xc);
      puVar62 = (undefined4 *)((int)puVar62 + -0xc);
      *puVar53 = in_ES;
    }
    else {
      *pbVar61 = *pbVar61 + bVar28;
    }
    pcVar17 = (char *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar12,cVar10));
    *pbVar58 = *pbVar58 - bVar12;
    *(byte *)puVar63 = (byte)*puVar63 + cVar10;
    bVar8 = (byte)pbVar15 - 0xb;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar8);
    if (10 < (byte)pbVar15) {
      *pbVar23 = *pbVar23 | bVar8;
      return pbVar23;
    }
    *(byte *)puVar63 = (byte)*puVar63 + cVar10;
    do {
      *(undefined2 *)((int)puVar62 + -4) = in_ES;
      bVar8 = pbVar34[-0x23];
      bVar28 = (byte)pbVar23;
      *pbVar23 = *pbVar23 + bVar28;
      bVar11 = pbVar58[-0x22];
      *pbVar23 = *pbVar23 + bVar28;
      uVar26 = (undefined3)((uint)pbVar23 >> 8);
      bVar28 = bVar28 | *pbVar61;
      pbVar15 = (byte *)CONCAT31(uVar26,bVar28);
      cVar9 = (char)pbVar34 - *pbVar61;
      pbVar34 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar34 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar34 >> 8) + bVar8 |
                                                          bVar11,(char)pbVar34)) >> 8),cVar9);
      cVar10 = (char)pcVar17;
      pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                 CONCAT11((char)((uint)pcVar17 >> 8) + *pbVar15,cVar10));
      *(byte *)puVar63 = (byte)*puVar63 + cVar10;
      bVar11 = bVar28 - *pbVar15;
      pbVar23 = (byte *)CONCAT31(uVar26,bVar11);
      pbVar61 = pbVar61 + (-(uint)(bVar28 < *pbVar15) - *(int *)pbVar23);
      in_ES = *(undefined2 *)((int)puVar62 + -4);
      puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),(char)puVar63 * '\x02');
      *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
      *pbVar57 = *pbVar57 + cVar9;
      bVar8 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar11;
      *puVar63 = (uint)(pbVar23 + (uint)CARRY1(bVar8,bVar11) + *puVar63);
    } while ((POPCOUNT(*puVar63 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar23 = *pbVar23 + (char)pbVar23;
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 | pbVar23[(int)pcVar17]);
    puVar55 = (undefined2 *)((int)puVar62 + -4);
    *(undefined2 *)((int)puVar62 + -4) = uVar65;
    bVar67 = false;
    pbVar23 = (byte *)((uint)pbVar23 & 0xffffff00);
    do {
      pbVar57 = pbVar57 + (-(uint)bVar67 - *(int *)pbVar34);
      pcVar22 = (char *)CONCAT31((int3)((uint)pbVar23 >> 8),*pcVar17);
      *pcVar22 = *pcVar22 + *pcVar17;
      pbVar23 = (byte *)CONCAT31((int3)((uint)(pcVar22 +
                                              (pbVar61[0x2000001] < (byte)((uint)pcVar17 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar22 +
                                        (pbVar61[0x2000001] < (byte)((uint)pcVar17 >> 8)) + 0xda7d)
                                 | (byte)*puVar63) + 0x7d);
      pcVar17 = pcVar17 + -1;
      *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar17;
      while( true ) {
        uVar29 = (undefined3)((uint)puVar63 >> 8);
        cVar10 = (char)puVar63 + *(char *)((int)pbVar57 * 2 + 0xa0000e1);
        puVar63 = (uint *)CONCAT31(uVar29,cVar10);
        bVar67 = CARRY1((byte)pbVar23,(byte)*puVar63);
        uVar26 = (undefined3)((uint)pbVar23 >> 8);
        bVar8 = (byte)pbVar23 + (byte)*puVar63;
        pbVar23 = (byte *)CONCAT31(uVar26,bVar8);
        if ((POPCOUNT(bVar8) & 1U) != 0) break;
        *pbVar23 = *pbVar23 + bVar8;
        cVar9 = (char)pcVar17;
        pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar17 >> 8) | pbVar57[-0x65],cVar9));
        bVar11 = *pbVar23;
        *pbVar23 = *pbVar23 + bVar8;
        *(undefined2 *)((int)puVar55 + -4) = in_ES;
        if (CARRY1(bVar11,bVar8)) {
          *pbVar23 = *pbVar23 + bVar8;
          pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar34 >> 8) | pbVar58[-0x1d],
                                              (char)pbVar34));
          *pbVar23 = *pbVar23 + bVar8;
          bVar67 = false;
          bVar8 = bVar8 | (byte)*puVar63;
          pcVar22 = (char *)CONCAT31(uVar26,bVar8);
          uVar65 = *(undefined2 *)((int)puVar55 + -4);
          puVar62 = (undefined4 *)puVar55;
          while( true ) {
            bVar11 = (byte)pcVar22;
            uVar26 = (undefined3)((uint)pcVar22 >> 8);
            if (bVar67 == (char)bVar8 < '\0') break;
            *pcVar22 = *pcVar22 + bVar11;
            bVar11 = bVar11 | (byte)*puVar63;
            puVar30 = (uint *)CONCAT31(uVar26,bVar11);
            *pbVar57 = *pbVar57 << 1 | (char)*pbVar57 < '\0';
            uVar21 = *puVar30;
            *(byte *)puVar30 = (byte)*puVar30 + bVar11;
            pbVar58 = pbVar58 + (-(uint)CARRY1((byte)uVar21,bVar11) - *puVar30);
            *puVar30 = *puVar30 << 1 | (uint)((int)*puVar30 < 0);
            while( true ) {
              uVar21 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63 + (byte)pcVar17;
              uVar66 = *(undefined2 *)puVar62;
              cVar10 = (char)puVar30 + 'o' + CARRY1((byte)uVar21,(byte)pcVar17);
              pcVar22 = (char *)CONCAT31((int3)((uint)puVar30 >> 8),cVar10);
              pcVar17 = (char *)0x20a0000;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *pcVar22 = *pcVar22 + cVar10;
              bVar8 = bRamfe140212;
              pcVar17 = (char *)0x0;
              *(undefined2 *)puVar62 = in_ES;
              uVar26 = (undefined3)((uint)(pcVar22 + -0x732b0000) >> 8);
              bVar11 = in(0);
              puVar30 = (uint *)CONCAT31(uVar26,bVar11);
              uVar21 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63;
              if (SCARRY1((byte)uVar21,'\0') != (char)(byte)*puVar63 < '\0') {
                *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                bVar11 = bVar11 | (byte)*puVar63;
                puVar30 = (uint *)CONCAT31(uVar26,bVar11);
                if ((POPCOUNT(bVar11) & 1U) == 0) {
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  pcVar17 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar8 | (byte)*puVar30) << 8);
                  puVar55 = (undefined2 *)((int)puVar62 + -4);
                  *(undefined2 *)((int)puVar62 + -4) = uVar66;
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                puVar30 = (uint *)CONCAT31(uVar26,bVar11 | (byte)*puVar63);
              }
            }
            *(byte *)puVar63 = (byte)*puVar63;
            bVar67 = SCARRY1((char)puVar63,*pbVar57);
            bVar8 = (char)puVar63 + *pbVar57;
            puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),bVar8);
            puVar62 = (undefined4 *)((int)puVar62 + 4);
          }
          if (bVar67 == (char)bVar8 < '\0') {
            *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar17;
            pbVar23 = (byte *)((uint)pcVar22 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar22 = *pcVar22 + bVar11;
          pbVar23 = (byte *)CONCAT31(uVar26,(bVar11 | (byte)*puVar63) + 0x7d);
          pcVar17 = pcVar17 + -1;
          *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar17;
          puVar55 = (undefined2 *)puVar62;
        }
        else {
          *(byte *)puVar63 = (byte)*puVar63 + cVar9;
          puVar63 = (uint *)CONCAT31(uVar29,cVar10 + *(char *)((int)pbVar57 * 2 + 0xa0000e0));
          puVar55 = (undefined2 *)((int)puVar55 + -4);
        }
      }
    } while( true );
  }
  *pbVar57 = *pbVar57 + bVar8;
  bVar8 = bVar8 + 0x6f & *(byte *)CONCAT31(uVar26,bVar8 + 0x6f);
  *pbVar15 = *pbVar15 + (char)pbVar23;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar8;
  pcVar17 = (char *)CONCAT31(uVar26,bVar8 - (byte)*puVar63);
code_r0x00403b2c:
  bVar8 = (char)pcVar17 - *pcVar17;
  pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar8);
  *pbVar24 = *pbVar24 + bVar8;
  *(byte **)pbVar24 = pbVar15 + *(int *)pbVar24;
  *pbVar24 = *pbVar24 + bVar8;
  bVar67 = CARRY1(*pbVar24,bVar8);
  *pbVar24 = *pbVar24 + bVar8;
  puVar31 = (undefined1 *)puVar62;
  pbVar57 = pbVar61;
  while( true ) {
    puVar62 = (undefined4 *)puVar31;
    *(byte **)pbVar24 = pbVar24 + (uint)bVar67 + *(int *)pbVar24;
    bVar11 = ((uint)pbVar24 & 0x1000) != 0;
    puVar63 = puVar63 + (uint)bVar68 * -2 + 1;
    pbVar24[(int)pbVar15] = pbVar24[(int)pbVar15] + (char)pbVar34;
    *pbVar24 = *pbVar24 + (char)pbVar24;
    *(byte **)pbVar57 = pbVar34 + *(int *)pbVar57;
    bVar8 = (byte)((uint)pbVar23 >> 8);
    cVar10 = (char)pbVar23;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar8 + *pbVar24,cVar10));
    pbVar24 = pbVar24 + (uint)CARRY1(bVar8,*pbVar24) + *(int *)pbVar24;
    *pbVar15 = *pbVar15 + cVar10;
    cVar10 = (char)pbVar34 - pbVar57[2];
    pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar10);
    pbVar61 = pbVar57;
    if ((POPCOUNT(cVar10) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar24 = *pbVar24 + (byte)pbVar24;
    bVar8 = (byte)pbVar24 | *pbVar34;
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar8);
    if (bVar8 != 0) {
      pbVar58 = pbVar58 + -puVar63[9];
      *pbVar25 = *pbVar25 + bVar8;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar15,(char)pbVar23));
      pbVar57 = pbVar57 + *(int *)pbVar25;
      pbVar25 = pbVar25 + *(int *)pbVar25;
      uVar26 = (undefined3)((uint)pbVar25 >> 8);
      bVar28 = (char)pbVar25 - *pbVar25;
      pbVar61 = (byte *)CONCAT31(uVar26,bVar28);
      bVar8 = *pbVar61;
      *pbVar61 = *pbVar61 + bVar28;
      pbVar25 = (byte *)CONCAT31(uVar26,bVar28 - CARRY1(bVar8,bVar28));
    }
    bVar8 = *pbVar25;
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    iVar18 = *(int *)(pbVar58 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar8,(byte)pbVar25);
    pbVar61 = pbVar57 + (uint)bVar68 * -8 + 4;
    out(*(undefined4 *)pbVar57,(short)pbVar15);
    pbVar24 = (byte *)(((uint)pbVar25 >> 8) * 0x100);
    *pbVar15 = *pbVar15 + (byte)pbVar23;
    bVar8 = (char)pbVar15 - *pbVar34;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar8);
    *pbVar34 = *pbVar34;
    *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
    *pbVar24 = *pbVar24;
    pcVar17 = (char *)(((uint)pbVar25 >> 8) * 0x200);
    *pcVar17 = *pcVar17 + (char)pbVar34;
    bVar67 = CARRY1(*pbVar23,bVar8);
    *pbVar23 = *pbVar23 + bVar8;
    puVar31 = (undefined1 *)((int)puVar62 + (iVar4 - iVar18));
    pbVar57 = pbVar61;
    if (bVar67) {
      *pbVar24 = *pbVar24;
      pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | *pbVar15);
      puVar52 = (undefined2 *)((int)puVar62 + (iVar4 - iVar18) + -4);
      puVar62 = (undefined4 *)((int)puVar62 + (iVar4 - iVar18) + -4);
      *puVar52 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar51 = (undefined2 *)((int)puVar62 + -4);
  puVar62 = (undefined4 *)((int)puVar62 + -4);
  *puVar51 = uVar65;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar58 = pbVar58 + -*puVar30;
  puVar54 = (undefined1 *)((int)puVar55 + 4);
  do {
    bVar8 = (byte)puVar30;
    *(byte *)puVar30 = (byte)*puVar30 + bVar8;
    pbVar57 = pbVar57 + -*(int *)(pbVar58 + -0x1a);
    *(byte *)puVar30 = (byte)*puVar30 + bVar8;
    bVar8 = bVar8 | (byte)*puVar63;
    puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar8);
    *(byte *)puVar30 = (byte)*puVar30 | bVar8;
    bVar8 = (byte)*puVar30;
    pbVar58 = (byte *)0x2700001;
    while (puVar55 = (undefined2 *)puVar54, (POPCOUNT(bVar8) & 1U) == 0) {
      do {
        *(byte *)puVar30 = (byte)*puVar30 + (byte)puVar30;
        bVar8 = (byte)puVar30 | (byte)*puVar63;
        puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar8);
        puVar31 = (undefined1 *)puVar55;
        if ((POPCOUNT(bVar8) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
        uVar27 = CONCAT21((short)((uint)pcVar17 >> 0x10),(byte)((uint)pcVar17 >> 8) | bRamfe140212);
        puVar7 = puVar31;
        while( true ) {
          puVar56 = puVar7;
          pcVar17 = (char *)((uint)uVar27 << 8);
          puVar54 = puVar56 + -4;
          puVar55 = (undefined2 *)(puVar56 + -4);
          puVar31 = puVar56 + -4;
          *(undefined2 *)(puVar56 + -4) = in_ES;
          bVar12 = (byte)puVar30;
          *(byte *)puVar30 = (byte)*puVar30 & bVar12;
          bVar28 = *pbVar34;
          bVar14 = (byte)uVar27;
          bVar11 = *pbVar34;
          *pbVar34 = *pbVar34 + bVar14;
          bVar8 = *pbVar34;
          if (!CARRY1(bVar28,bVar14)) break;
          *(byte *)puVar30 = (byte)*puVar30 + bVar12;
          pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar34 >> 8) | bRam026fffe2,
                                              (char)pbVar34));
          *(byte *)puVar30 = (byte)*puVar30 + bVar12;
          bVar12 = bVar12 | (byte)*puVar63;
          puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar12);
          bVar67 = (POPCOUNT(bVar12) & 1U) == 0;
          while( true ) {
            cVar10 = (char)((uint)pbVar34 >> 8);
            uVar65 = (undefined2)((uint)pbVar34 >> 0x10);
            if (!bVar67) {
              *(byte *)puVar63 = (byte)*puVar63;
              pbVar34 = (byte *)CONCAT22(uVar65,CONCAT11(cVar10 + pbVar34[-0x1f],(char)pbVar34));
              goto code_r0x00403d52;
            }
            *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
            uVar66 = (undefined2)((uint)pcVar17 >> 0x10);
            bVar11 = (byte)((uint)pcVar17 >> 8) | (byte)*puVar30;
            uVar27 = CONCAT21(uVar66,bVar11);
            *puVar30 = *puVar30 & (uint)puVar30;
            *pbVar34 = *pbVar34 + bVar11;
            uVar26 = (undefined3)((uint)puVar30 >> 8);
            bVar8 = (char)puVar30 - bVar11;
            pcVar17 = (char *)CONCAT31(uVar26,bVar8);
            *pcVar17 = *pcVar17 + bVar8;
            bVar8 = bVar8 | (byte)*puVar63;
            puVar30 = (uint *)CONCAT31(uVar26,bVar8);
            puVar7 = puVar56 + -4;
            if ((POPCOUNT(bVar8) & 1U) != 0) break;
            *(byte *)puVar30 = (byte)*puVar30 + bVar8;
            pcVar17 = (char *)((uint)CONCAT21(uVar66,bVar11 | (byte)*puVar30) << 8);
            *puVar30 = *puVar30 - (int)puVar30;
            *(byte *)puVar63 = (byte)*puVar63;
            pbVar34 = (byte *)CONCAT22(uVar65,CONCAT11(cVar10 + pbVar34[-0x1d],(char)pbVar34));
            do {
              *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
              uVar65 = (undefined2)((uint)puVar63 >> 0x10);
              cVar10 = (char)puVar63;
              bVar8 = (byte)((uint)puVar63 >> 8) | pbVar34[-0x17];
              puVar63 = (uint *)CONCAT22(uVar65,CONCAT11(bVar8,cVar10));
              *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
              pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar34 >> 8) | bRam026fffeb,
                                                  (char)pbVar34));
              do {
                *(byte *)puVar30 = (byte)*puVar30 + (byte)puVar30;
                uVar26 = (undefined3)((uint)puVar30 >> 8);
                bVar28 = (byte)puVar30 | (byte)*puVar63;
                pcVar22 = (char *)CONCAT31(uVar26,bVar28);
                bVar11 = pbVar34[-0x16];
                *pcVar22 = *pcVar22 + bVar28;
                pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                           CONCAT11((char)((uint)pbVar34 >> 8) + bVar11 |
                                                    bRam026fffec,(char)pbVar34));
                *pcVar22 = *pcVar22 + bVar28;
                pbVar15 = (byte *)CONCAT31(uVar26,bVar28 | (byte)*puVar63);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar26 = (undefined3)((uint)pbVar15 >> 8);
                  bVar11 = (byte)pbVar15 | (byte)*puVar63;
                  puVar30 = (uint *)CONCAT31(uVar26,bVar11);
                  if ((POPCOUNT(bVar11) & 1U) != 0) break;
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  bVar28 = pbVar57[-0x14];
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  bVar11 = bVar11 | (byte)*puVar63;
                  pcVar22 = (char *)CONCAT31(uVar26,bVar11);
                  bVar12 = pbVar34[-0x15];
                  *pcVar22 = *pcVar22 + bVar11;
                  pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),
                                                    (byte)((uint)pcVar17 >> 8) | bVar28 |
                                                    pbVar57[-0x13]) << 8);
                  *pcVar22 = *pcVar22 + bVar11;
                  pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                             CONCAT11((char)((uint)pbVar34 >> 8) + bVar12 |
                                                      bRam026fffef,(char)pbVar34));
                  *pcVar22 = *pcVar22 + bVar11;
                  pbVar15 = (byte *)CONCAT31(uVar26,bVar11 | (byte)*puVar63);
                  do {
                    do {
                      bVar28 = (byte)pbVar15;
                      *pbVar15 = *pbVar15 + bVar28;
                      cVar33 = (char)pbVar34;
                      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar34 >> 8) | *pbVar15,
                                                          cVar33));
                      *pbVar15 = bVar28;
                      *pbVar15 = *pbVar15 + bVar28;
                      cVar9 = (char)((uint)pcVar17 >> 8) + *pbVar15;
                      pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),cVar9) << 8);
                      uVar26 = (undefined3)((uint)pbVar15 >> 8);
                      bVar28 = bVar28 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar26,bVar28);
                      bVar11 = *pbVar34;
                      *pbVar34 = *pbVar34 + cVar9;
                    } while (SCARRY1(bVar11,cVar9) == (char)*pbVar34 < '\0');
                    *pbVar15 = *pbVar15 + bVar28;
                    bVar28 = bVar28 | (byte)*puVar63;
                    pbVar15 = (byte *)CONCAT31(uVar26,bVar28);
                    if ((POPCOUNT(bVar28) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar28;
                      *pbVar15 = *pbVar15 + bVar28;
                      cVar10 = cVar10 - bVar8;
                      pbVar23 = (byte *)CONCAT31((int3)((uint)puVar63 >> 8),cVar10);
                      *pbVar15 = *pbVar15 + bVar28;
                      bRam0312382b = bRam0312382b | *pbVar23;
                      *(undefined2 *)(puVar56 + -8) = in_ES;
                      while( true ) {
                        bVar11 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar11;
                        bRam0312382b = bRam0312382b | (pbVar57 + 0x21b0000)[(int)pbVar15];
                        uVar26 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar23 = *pbVar23 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar26,bVar11 | *pbVar61);
                      }
                      *pbVar15 = *pbVar15 + bVar11;
                      bVar11 = bVar11 | *pbVar61;
                      pcVar17 = (char *)CONCAT31(uVar26,bVar11);
                      out(*(undefined4 *)pbVar61,(short)pbVar23);
                      *pcVar17 = *pcVar17 + bVar11;
                      uVar66 = CONCAT11(bVar8 | bRam6f0a002b,cVar10);
                      pcVar22 = (char *)CONCAT22(uVar65,uVar66);
                      *pcVar17 = *pcVar17 + bVar11;
                      *pcVar22 = *pcVar22 + bRam0312382b;
                      out(*(undefined4 *)(pbVar61 + (uint)bVar68 * -8 + 4),uVar66);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar33 + *pcVar17);
                  } while (SCARRY1(cVar33,*pcVar17) != (char)(cVar33 + *pcVar17) < '\0');
                }
                uVar21 = *puVar63;
                *(byte *)puVar63 = (byte)*puVar63;
              } while (SCARRY1((byte)uVar21,'\0') != (char)(byte)*puVar63 < '\0');
              *(byte *)puVar63 = (byte)*puVar63;
              *pcVar17 = *pcVar17 - (char)pbVar34;
              *(byte *)puVar30 = (byte)*puVar30 + bVar11;
              bVar11 = bVar11 | (byte)*puVar63;
              puVar30 = (uint *)CONCAT31(uVar26,bVar11);
              bVar67 = (POPCOUNT(bVar11) & 1U) == 0;
            } while (bVar67);
          }
        }
      } while (SCARRY1(bVar11,bVar14));
    }
    *pbVar34 = *pbVar34 + (char)((uint)pcVar17 >> 8);
    *pbVar57 = *pbVar57 - (char)pbVar34;
  } while( true );
}


