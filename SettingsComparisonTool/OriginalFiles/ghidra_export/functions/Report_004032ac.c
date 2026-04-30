/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004032ac
 * Raw Name    : Report
 * Demangled   : Report
 * Prototype   : byte * Report(undefined4 reportStyle, byte * param_2)
 * Local Vars  : uStack_34, pbStack_2c, auStack_24, uStack_20, uStack_1c, apbStack_14, pcStack_8, uVar1, pcVar2, uVar3, iVar4, uVar5, uVar6, puVar7, cVar8, bVar9, bVar10, bVar11, bVar12, bVar13, in_EAX, piVar14, pcVar15, iVar16, ppbVar17, ppbVar18, uVar19, pcVar20, pbVar21, pbVar22, pbVar23, uVar24, uVar25, extraout_ECX, extraout_ECX_00, bVar26, uVar27, puVar28, puVar29, uVar30, cVar31, unaff_EBX, pbVar32, cVar33, cVar34, bVar35, uVar36, puVar37, puVar38, piVar39, piVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, unaff_EBP, pbVar57, unaff_ESI, pbVar58, pbVar59, puVar60, puVar61, pbVar62, unaff_EDI, puVar63, puVar64, in_ES, in_CS, uVar65, in_DS, uVar66, unaff_FS_OFFSET, in_GS_OFFSET, bVar67, in_AF, in_TF, in_IF, bVar68, bVar69, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar70, reportStyle, param_2
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

byte * __fastcall Report(undefined4 reportStyle,byte *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined6 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined1 *puVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char *in_EAX;
  int *piVar14;
  char *pcVar15;
  int iVar16;
  undefined3 uVar24;
  byte **ppbVar17;
  byte **ppbVar18;
  uint uVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint3 uVar25;
  byte *pbVar23;
  byte bVar26;
  byte *extraout_ECX;
  undefined3 uVar27;
  byte *extraout_ECX_00;
  uint *puVar28;
  undefined1 *puVar29;
  undefined1 uVar30;
  char cVar31;
  char cVar33;
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
  byte *unaff_ESI;
  byte *pbVar58;
  byte *pbVar59;
  uint *puVar60;
  uint *puVar61;
  byte *pbVar62;
  undefined4 *unaff_EDI;
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
  undefined4 uStack_34;
  byte *pbStack_2c;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte *apbStack_14 [3];
  char *pcStack_8;
  
  bVar68 = false;
                    /* .NET CLR Managed Code */
  pbVar62 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + 0x38),
                                      (char)unaff_EBX));
  *in_EAX = *in_EAX + (char)in_EAX;
  piVar14 = (int *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'o') + 0x28060000);
  puVar63 = unaff_EDI + 1;
  uVar66 = SUB42(param_2,0);
  uVar1 = in(uVar66);
  *unaff_EDI = uVar1;
  *(char *)piVar14 = *(char *)piVar14 + (char)piVar14;
  uVar65 = (undefined2)((uint)reportStyle >> 0x10);
  bVar26 = (byte)((uint)reportStyle >> 8) | bRam7b022a01;
  pbVar58 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar58 = *pbVar58 + (char)piVar14;
  iVar16 = *piVar14;
  *unaff_ESI = *unaff_ESI + (char)(char *)((int)piVar14 + iVar16);
  pcVar15 = (char *)((int)piVar14 + iVar16) + -0x387b020d;
  *pcVar15 = *pcVar15 + (char)pcVar15;
  cVar8 = (char)pcVar15 + 'o';
  pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8);
  *pcVar15 = *pcVar15 + cVar8;
  iVar16 = (int)pcVar15 - *(int *)CONCAT22(uVar65,CONCAT11(bVar26,(char)reportStyle));
  uVar24 = (undefined3)((uint)iVar16 >> 8);
  cVar8 = (((byte)iVar16 | *unaff_ESI) - 0xe) + *pbVar62;
  pcVar15 = (char *)CONCAT31(uVar24,cVar8);
  pbVar58 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,uVar66);
  pcVar15[unaff_FS_OFFSET] = pcVar15[unaff_FS_OFFSET] + cVar8;
  pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_ES);
  pbVar21 = (byte *)CONCAT22(uVar65,CONCAT11(bVar26 + *(char *)((int)unaff_EDI + 0x6a),
                                             (char)reportStyle));
  *pcVar15 = *pcVar15 + cVar8;
  bVar9 = cVar8 - *param_2;
  puVar28 = (uint *)CONCAT31(uVar24,bVar9);
  *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
  bVar26 = *pbVar58;
  *pbVar58 = *pbVar58 + bVar9;
  bVar10 = (byte)((uint)param_2 >> 8);
  if (CARRY1(bVar26,bVar9)) goto code_r0x00403365;
  pbVar32 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar32 = *pbVar32 + bVar9;
  ppbVar18 = (byte **)(puVar28 + 0x1f421c00);
  cVar8 = (char)ppbVar18;
  if ((POPCOUNT((uint)ppbVar18 & 0xff) & 1U) != 0) {
    pbVar32 = (byte *)((int)puVar28 + 0x7d087002);
    bVar26 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar10;
    uVar24 = (undefined3)((uint)ppbVar18 >> 8);
    if ((POPCOUNT(*pbVar32) & 1U) == 0) {
      *(char *)ppbVar18 = (char)*ppbVar18 + cVar8;
      ppbVar17 = (byte **)CONCAT31(uVar24,cVar8 + 'o');
      goto code_r0x0040333c;
    }
    pbVar32 = (byte *)CONCAT31(uVar24,cVar8 + -2 + CARRY1(bVar26,bVar10));
    goto code_r0x00403375;
  }
  *(char *)ppbVar18 = (char)*ppbVar18 + cVar8;
  do {
    while( true ) {
      cVar8 = (char)ppbVar18 + 'o';
      piVar14 = (int *)CONCAT31((int3)((uint)ppbVar18 >> 8),cVar8);
      *pbVar58 = *pbVar58 + cVar8;
      *(undefined2 *)pbVar62 = in_ES;
      *pbVar21 = *pbVar21 + cVar8;
      *pbVar21 = *pbVar21 - (char)pbVar62;
      *(char *)piVar14 = (char)*piVar14 + cVar8;
      bVar26 = *(byte *)((int)puVar63 + -0x5e);
      *(char *)piVar14 = (char)*piVar14 + cVar8;
      iVar16 = *piVar14;
      *(char *)(in_GS_OFFSET + (int)piVar14) = *(char *)(in_GS_OFFSET + (int)piVar14) + cVar8;
      ppbVar18 = apbStack_14;
      ppbVar17 = apbStack_14;
      apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
      pbVar32 = apbStack_14[0];
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar21 >> 8) | bVar26) + (char)iVar16 +
                                          *param_2,(char)pbVar21 - *param_2));
      *(char *)piVar14 = (char)*piVar14 + cVar8;
      pbVar58 = pbVar58 + *piVar14;
      apbStack_14[0]._0_1_ = (char)in_ES;
      bVar9 = (byte)apbStack_14;
      apbStack_14[0]._1_3_ = SUB43(pbVar32,1);
      apbStack_14[0] = (byte *)CONCAT31(apbStack_14[0]._1_3_,(char)apbStack_14[0] + bVar9 * '\x03');
      *param_2 = *param_2 + bVar9;
      *unaff_EBP = *unaff_EBP - (char)pbVar62;
      bVar26 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar9;
      if (!CARRY1(bVar26,bVar9)) break;
      apbStack_14[0] = (byte *)((uint)apbStack_14[0]._1_3_ << 8);
    }
code_r0x0040333c:
    pcVar15 = (char *)((int)ppbVar17 + 0x7b027000);
    pbVar32 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
    *pbVar32 = *pbVar32 + (char)pcVar15;
    *pbVar58 = *pbVar58 + (char)pcVar15 + *pcVar15;
    cRam03060000 = cRam8c0a0000;
    pbVar32 = pbVar58 + 4;
    out(*(undefined4 *)pbVar58,uVar66);
    puVar28 = (uint *)CONCAT31((int3)((uint)pcVar15 >> 8),cRam8c0a0000);
    *pbVar21 = *pbVar21 + cRam8c0a0000;
    *param_2 = *param_2 - (char)((uint)pcVar15 >> 8);
    *param_2 = *param_2 + (char)pbVar21;
    pbVar58 = pbVar58 + 8;
    out(*(undefined4 *)pbVar32,uVar66);
    puVar63 = (uint *)((uint)puVar63 ^ *puVar28);
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + (char)*puVar28,(char)pbVar21));
    unaff_EBP = pcStack_8;
code_r0x00403365:
    cVar8 = (char)puVar28;
    *(char *)puVar28 = (char)*puVar28 + cVar8;
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x38],(char)pbVar62));
    *(char *)puVar28 = (char)*puVar28 + cVar8;
    uVar24 = (undefined3)((uint)puVar28 >> 8);
    cVar8 = cVar8 + 'o' + *(char *)CONCAT31(uVar24,cVar8 + 'o');
    pbVar32 = (byte *)CONCAT31(uVar24,cVar8);
    bVar26 = *pbVar58;
    *pbVar58 = *pbVar58 + cVar8;
    pbVar59 = pbVar58;
    if (*pbVar58 == 0 || SCARRY1(bVar26,cVar8) != (char)*pbVar58 < '\0') goto code_r0x004033b0;
code_r0x00403375:
    bVar26 = (byte)pbVar32;
    *pbVar32 = *pbVar32 + bVar26;
    uVar24 = (undefined3)((uint)pbVar32 >> 8);
    bVar9 = bVar26 + 0x2d;
    ppbVar18 = (byte **)CONCAT31(uVar24,bVar9);
    *(byte **)(pbVar58 + (int)puVar63 * 8) =
         param_2 + (uint)(0xd2 < bVar26) + *(int *)(pbVar58 + (int)puVar63 * 8);
    pbVar32 = (byte *)segment(in_DS,(short)pbVar62 + (short)pbVar58);
    bVar26 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar9;
    apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
    pbVar57 = apbStack_14[0];
  } while (!CARRY1(bVar26,bVar9));
  *(byte *)ppbVar18 = (char)*ppbVar18 + bVar9;
  bVar67 = false;
  bVar9 = bVar9 | *(byte *)((int)ppbVar18 + 0x400003b);
  pbVar22 = (byte *)CONCAT31(uVar24,bVar9);
  if ('\0' < (char)bVar9) {
    *pbVar22 = *pbVar22 + bVar9;
    iVar16 = CONCAT31(uVar24,bVar9 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar9);
    iRam02060000 = iVar16;
    *(byte *)puVar63 = (byte)*puVar63 - (char)pbVar62;
    *pbVar58 = *pbVar58 + (char)iVar16;
    bVar9 = (char)iVar16 - 0x25;
    pbVar32 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar9);
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + *pbVar32,(char)pbVar21));
    bVar26 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar9;
    apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
    if (CARRY1(bVar26,bVar9)) goto code_r0x004033e7;
    pbVar22 = pbVar32 + 2;
    *pbVar22 = *pbVar22 + bVar10;
    pbVar59 = pbVar58;
    if ((POPCOUNT(*pbVar22) & 1U) != 0) goto _ctor;
code_r0x004033b0:
    *pbVar32 = *pbVar32 + (char)pbVar32;
    cVar8 = (char)pbVar32 + 'o';
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar8);
    *pbVar59 = *pbVar59 + cVar8;
    *(undefined2 *)pbVar62 = in_ES;
    *pbVar21 = *pbVar21 + cVar8;
    *param_2 = *param_2 - (char)((uint)pbVar32 >> 8);
    bVar67 = CARRY1(*param_2,(byte)pbVar21);
    *param_2 = *param_2 + (byte)pbVar21;
    pbVar58 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,uVar66);
    pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar8);
  }
  pbVar59 = pbVar58 + (uint)bVar67 + *(int *)pbVar22;
  piVar14 = (int *)CONCAT31((int3)((uint)pbVar22 >> 8),(byte)pbVar22 + *pbVar22);
  pbVar58 = (byte *)((int)piVar14 + (uint)CARRY1((byte)pbVar22,*pbVar22) + *piVar14);
  bVar26 = *pbVar58;
  bVar9 = (byte)pbVar58;
  *pbVar58 = *pbVar58 + bVar9;
  pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar9 + CARRY1(bVar26,bVar9));
  do {
    *pbVar21 = *pbVar21 + (char)param_2;
    param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)pbVar32 >> 8);
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    pbVar57 = uStack_20;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + *pbVar32,(char)pbVar21));
    *pbVar32 = *pbVar32 + (char)pbVar32;
    uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
    pbVar58 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,(short)param_2);
    pbRam2a0a0000 = pbVar32;
code_r0x004033e7:
    param_2 = param_2 + 1;
    pbVar59 = pbVar58;
_ctor:
    uVar6 = uStack_1c._2_2_;
    iVar16 = CONCAT31((int3)((uint)pbVar32 >> 8),(char)pbVar32 + *pbVar62) + 0x6128;
    uStack_1c = (byte *)((uint)uStack_1c._2_2_ << 0x10);
    bVar9 = (char)iVar16 + *(char *)((int)puVar63 * 2 + 0x400003e);
    pbVar32 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar9);
    cVar8 = (char)param_2 - *pbVar62;
    puVar28 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar8);
    *(byte *)puVar28 = (byte)*puVar28 ^ bVar9;
    *pbVar32 = *pbVar32 + (char)((uint)pbVar62 >> 8);
    *pbVar32 = *pbVar32 + bVar9;
    *pbVar21 = *pbVar21 + cVar8;
    bVar26 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar9;
    *(byte **)(pbVar62 + -0x41) = pbVar59 + (uint)CARRY1(bVar26,bVar9) + *(int *)(pbVar62 + -0x41);
    do {
      *pbVar32 = *pbVar32 + (byte)pbVar32;
      uVar24 = (undefined3)((uint)pbVar32 >> 8);
      bVar26 = (byte)pbVar32 | *pbVar59;
      uVar65 = (undefined2)((uint)pbVar62 >> 0x10);
      uVar30 = SUB41(pbVar62,0);
      cVar33 = (char)((uint)pbVar62 >> 8) + pbVar62[0x69];
      *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
      cVar8 = bVar26 + 0x7d;
      pcVar15 = (char *)CONCAT31(uVar24,cVar8);
      pbVar59[(int)pcVar15] = pbVar59[(int)pcVar15] + cVar8;
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar30)) + 0x67);
      *pcVar15 = *pcVar15 + cVar8;
      pcVar15 = (char *)CONCAT31(uVar24,bVar26 - 6);
      puVar60 = (uint *)(pbVar59 + 4);
      out(*(undefined4 *)pbVar59,(short)puVar28);
      *pcVar15 = *pcVar15 + (bVar26 - 6);
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar30)) + 0x6b);
      *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
      pcVar15 = (char *)CONCAT31(uVar24,bVar26 + 0x7d);
      pbVar58 = (byte *)((int)puVar60 + (int)pcVar15);
      *pbVar58 = *pbVar58 + bVar26 + 0x7d;
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar30)) + 0x6a);
      pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar33,uVar30));
      puVar64 = puVar28;
      do {
        cVar8 = (char)pcVar15;
        *pcVar15 = *pcVar15 + cVar8;
        uVar24 = (undefined3)((uint)pcVar15 >> 8);
        bVar26 = cVar8 + 0x7d;
        pcVar20 = (char *)CONCAT31(uVar24,bVar26);
        *(byte *)((int)puVar60 + (int)pcVar20) = *(byte *)((int)puVar60 + (int)pcVar20) + bVar26;
        uVar27 = (undefined3)((uint)puVar64 >> 8);
        bVar9 = (char)puVar64 - *(byte *)((int)puVar64 + 0x457e02);
        puVar28 = (uint *)CONCAT31(uVar27,bVar9);
        pbVar57[0x6fe1411] = pbVar57[0x6fe1411] + bVar26;
        uVar19 = *puVar60;
        uVar5 = *puVar60;
        *(byte *)puVar60 = (byte)*puVar60 + bVar26;
        if (CARRY1((byte)uVar19,bVar26)) {
          *pcVar20 = *pcVar20 + bVar26;
          bVar26 = bVar26 | pcVar20[0x4000045];
          piVar14 = (int *)CONCAT31(uVar24,bVar26);
          if ((char)bVar26 < '\x01') {
            *(byte *)puVar28 = (byte)*puVar28 + bVar26;
            uStack_1c._2_2_ = uVar6;
            goto code_r0x004034a0;
          }
          *(byte *)piVar14 = (char)*piVar14 + bVar26;
          bVar26 = bVar26 + 0x6f;
          pcVar20 = (char *)CONCAT31(uVar24,bVar26);
          *pcVar20 = *pcVar20 + bVar26;
          pbVar57 = pbVar57 + -*puVar28;
          *pcVar20 = *pcVar20 + bVar26;
          *pbVar62 = *pbVar62 + bVar9;
          *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar26;
          in_AF = 9 < (bVar26 & 0xf) | in_AF;
          uVar19 = CONCAT31(uVar24,bVar26 + in_AF * '\x06') & 0xffffff0f;
          cVar8 = (char)uVar19;
          pcVar15 = (char *)CONCAT22((short)(uVar19 >> 0x10),
                                     CONCAT11((char)((uint)pcVar15 >> 8) + in_AF,cVar8));
          *pcVar15 = *pcVar15 + cVar8;
          cRam72110000 = cRam72110000 + bVar9;
          puVar55 = (undefined2 *)segment(in_ES,(short)auStack_24 + -2);
          *puVar55 = in_ES;
          pcVar15[0x1a] = pcVar15[0x1a] + (char)((uint)puVar64 >> 8);
          cVar8 = (char)pbVar21;
          *pbVar21 = *pbVar21 + cVar8;
          *puVar28 = (uint)(pbVar21 + *puVar28);
          apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
          cVar33 = cVar33 + pbVar62[0x70];
          *pbVar21 = *pbVar21 + cVar8;
          uVar24 = (undefined3)((uint)pbVar21 >> 8);
          bVar26 = cVar8 + 0xa2;
          cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar30)) + 0x6f);
          pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar33,uVar30));
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          bVar10 = cVar8 + 0x44;
          piVar14 = (int *)CONCAT31(uVar24,bVar10);
          *(byte *)puVar28 = ((byte)*puVar28 - bVar10) - (0x5d < bVar26);
          if ((POPCOUNT((byte)*puVar28) & 1U) != 0) {
            *(byte *)piVar14 = (char)*piVar14 + bVar10;
            *(byte *)piVar14 = (char)*piVar14 + bVar10;
            *(char *)piVar14 = (char)*piVar14 + cVar33;
            puVar28 = (uint *)CONCAT22((short)((uint)puVar64 >> 0x10),(ushort)bVar9);
            *(byte *)piVar14 = (char)*piVar14 + bVar10;
            pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                       CONCAT11((char)((uint)pbVar21 >> 8) + (char)*piVar14,cVar8));
            uStack_1c = pbVar62;
            goto code_r0x00403511;
          }
          *(byte *)piVar14 = (char)*piVar14 + bVar10;
          cVar8 = cVar8 + -0x1a;
          piVar14 = (int *)CONCAT31(uVar24,cVar8);
          uStack_1c = (byte *)CONCAT22(uVar6,in_ES);
          *puVar28 = (*puVar28 - (int)piVar14) - (uint)(0x5d < bVar10);
          if ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0) {
            *(byte *)puVar28 = (byte)*puVar28 + cVar8;
            goto code_r0x004034f3;
          }
          *(char *)piVar14 = (char)*piVar14 + cVar8;
          goto code_r0x0040349e;
        }
        pcVar15 = pcVar20;
        puVar64 = puVar28;
      } while (SCARRY1((byte)uVar5,bVar26) == (char)(byte)*puVar60 < '\0');
      *pcVar20 = *pcVar20 + bVar26;
      piVar14 = (int *)CONCAT31(uVar24,cVar8 + -0x59);
      pbVar59 = (byte *)((int)puVar60 + (uint)(0xd5 < bVar26) + *piVar14);
      bVar10 = cVar8 + -0x59 + (char)*piVar14;
      pbVar32 = (byte *)CONCAT31(uVar24,bVar10);
      bVar26 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar10;
      *(byte **)pbVar32 = pbVar32 + (uint)CARRY1(bVar26,bVar10) + *(int *)pbVar32;
      bVar26 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar9;
    } while (CARRY1(bVar26,bVar9));
    *pbVar59 = *pbVar59 + bVar10;
    cVar8 = bVar9 - *pbVar62;
    param_2 = (byte *)CONCAT31(uVar27,cVar8);
    *param_2 = *param_2 ^ bVar10;
    *pbVar62 = *pbVar62 + cVar8;
    *pbVar32 = *pbVar32 + bVar10;
    *(char *)((int)pbVar32 * 2) = *(char *)((int)pbVar32 * 2) + cVar8;
  } while( true );
code_r0x0040349e:
  piVar14 = (int *)CONCAT31((int3)((uint)piVar14 >> 8),(char)piVar14 + -0x5e);
code_r0x004034a0:
  uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
  pbVar21[0x2a0a0000] = pbVar21[0x2a0a0000] - (char)pbVar21;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((char)((uint)pbVar21 >> 8) + (char)*piVar14,(char)pbVar21));
  bVar26 = (byte)piVar14;
  *(byte *)piVar14 = (char)*piVar14 + bVar26;
  uStack_1c = (byte *)CONCAT22(uStack_1c._2_2_,in_ES);
  puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),
                             (char)puVar28 - *(byte *)((int)puVar28 + 0x467e02));
  pbVar57[0x6fe1411] = pbVar57[0x6fe1411] + bVar26;
  uVar19 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar26;
  if (!CARRY1((byte)uVar19,bVar26)) {
    pbVar58 = (byte *)((int)puVar63 + (int)pbVar57 * 2);
    *pbVar58 = *pbVar58 + bVar26;
    goto code_r0x004034f3;
  }
  *(byte *)piVar14 = (char)*piVar14 + bVar26;
  uVar24 = (undefined3)((uint)piVar14 >> 8);
  bVar26 = bVar26 | *(byte *)((int)piVar14 + 0x4000046);
  piVar14 = (int *)CONCAT31(uVar24,bVar26);
  if ((char)bVar26 < '\x01') {
code_r0x00403511:
    pbVar57 = uStack_1c;
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    uStack_1c = (byte *)CONCAT22(uStack_1c._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar14 = (char)*piVar14 + bVar26;
  pbVar58 = (byte *)CONCAT31(uVar24,bVar26 + 0x6f);
  *pbVar58 = *pbVar58 + bVar26 + 0x6f;
  pbVar57 = pbVar57 + -*puVar28;
  do {
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_DS);
    bVar26 = *(byte *)((int)puVar63 + 0x17);
    *pbVar58 = *pbVar58 + (byte)pbVar58;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + bVar26 | (byte)*puVar28,
                                        (char)pbVar21));
    uVar24 = (undefined3)((uint)pbVar58 >> 8);
    bVar26 = (byte)pbVar58 | (byte)*puVar28;
    bVar9 = bVar26 - *(byte *)CONCAT31(uVar24,bVar26);
    puVar60 = (uint *)((int)puVar60 +
                      (uint)(bVar26 < *(byte *)CONCAT31(uVar24,bVar26)) +
                      *(int *)CONCAT31(uVar24,bVar9));
    pbVar58 = (byte *)CONCAT31(uVar24,bVar9);
    *(byte **)pbVar58 = pbVar58 + *(int *)pbVar58;
    *(byte *)puVar60 = (byte)*puVar60 + (char)puVar28;
    bVar26 = *pbVar58;
    *pbVar58 = *pbVar58 + bVar9;
    *puVar28 = (uint)(pbVar58 + (uint)CARRY1(bVar26,bVar9) + *puVar28);
    if ((POPCOUNT(*puVar28 & 0xff) & 1U) != 0) {
      *(byte *)puVar60 = (byte)*puVar60 + 1;
      puVar64 = puVar60;
      goto code_r0x00403529;
    }
    *pbVar58 = *pbVar58 + bVar9;
    piVar14 = (int *)CONCAT31(uVar24,bVar9 + 0x6f);
code_r0x004034f3:
    *piVar14 = (int)(*piVar14 + (int)piVar14);
    *(byte *)puVar60 = (byte)*puVar60 + (char)piVar14;
    pbVar57 = pbVar57 + 1;
    pcVar15 = (char *)((int)((uint)piVar14 | 8) + *(int *)((uint)piVar14 | 8));
    *pcVar15 = *pcVar15 + (char)pcVar15;
    piVar14 = (int *)(pcVar15 + 0x53000000);
    bVar26 = (byte)piVar14;
    *(byte *)piVar14 = (char)*piVar14 + bVar26;
    *pbVar62 = *pbVar62 + (char)puVar28;
    *(byte *)piVar14 = (char)*piVar14 + bVar26;
    *pbVar57 = *pbVar57 - (char)pbVar62;
    uVar19 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar26;
    if (CARRY1((byte)uVar19,bVar26)) goto code_r0x0040349e;
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    pcVar15[0x5300006f] = pcVar15[0x5300006f] + (char)((uint)puVar28 >> 8);
    pcVar15 = pcVar15 + 0x53000001;
    bVar9 = (byte)pcVar15;
    bRam7e060000 = bVar26;
    *pcVar15 = *pcVar15 + bVar9;
    pbVar58 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar9 + 0x2d);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar9) + puVar60[(int)puVar63 * 2]);
    puVar64 = puVar60;
code_r0x00403529:
    puVar60 = puVar64 + 1;
    out(*puVar64,(short)puVar28);
    bVar26 = *pbVar58;
    bVar9 = (byte)pbVar58;
    *pbVar58 = *pbVar58 + bVar9;
  } while (!CARRY1(bVar26,bVar9));
  *pbVar58 = *pbVar58 + bVar9;
  uVar24 = (undefined3)((uint)pbVar58 >> 8);
  bVar9 = bVar9 | pbVar58[0x4000040];
  pcVar15 = (char *)CONCAT31(uVar24,bVar9);
  uVar65 = in_ES;
  if ((char)bVar9 < '\x01') goto code_r0x00403579;
  *pcVar15 = *pcVar15 + bVar9;
  cVar8 = bVar9 + 10;
  pcVar15 = (char *)CONCAT31(uVar24,cVar8);
  puVar64 = puVar60;
  if (cVar8 == '\0' || SCARRY1(bVar9,'\n') != cVar8 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar26 = (byte)pcVar15;
  *pcVar15 = *pcVar15 + bVar26;
  piVar14 = (int *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar26 + 0x2d);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar28 + (uint)(0xd2 < bVar26) + puVar60[(int)puVar63 * 2]);
  pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
code_r0x00403549:
  uVar19 = *puVar60;
  bVar26 = (byte)piVar14;
  *(byte *)puVar60 = (byte)*puVar60 + bVar26;
  if (!CARRY1((byte)uVar19,bVar26)) goto code_r0x004034f3;
  *(byte *)piVar14 = (char)*piVar14 + bVar26;
  uVar24 = (undefined3)((uint)piVar14 >> 8);
  bVar26 = bVar26 | *(byte *)((int)piVar14 + 0x4000041);
  if ((char)bVar26 < '\x01') {
    *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar21;
    *(byte *)puVar28 = (byte)*puVar28;
    pcVar15 = (char *)CONCAT31(uVar24,bVar26 + 0x7e);
    puVar28 = (uint *)((int)puVar28 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
  piVar14 = (int *)CONCAT31(uVar24,bVar26 + 0xb);
  puVar64 = puVar60;
code_r0x0040355b:
  pbVar57 = pbVar57 + -*(int *)((int)puVar64 + 2);
  *pbVar57 = *pbVar57 - (char)pbVar62;
  uVar19 = *puVar64;
  bVar26 = (byte)piVar14;
  *(byte *)puVar64 = (byte)*puVar64 + bVar26;
  if (CARRY1((byte)uVar19,bVar26)) goto code_r0x00403548;
code_r0x00403565:
  piVar14 = piVar14 + 0x1ec09c00;
  pbVar58 = (byte *)((int)puVar63 + (int)pbVar57 * 2);
  *pbVar58 = *pbVar58 + (char)piVar14;
  *(byte *)puVar64 = (byte)*puVar64 + (char)piVar14 + (char)*piVar14;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar28);
  pcVar15 = (char *)CONCAT31((int3)((uint)piVar14 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar21 = *pbVar21 + (char)pcVar15;
  *(byte *)puVar28 = (byte)*puVar28 - (char)((uint)pcVar15 >> 8);
  puVar64 = puVar60;
code_r0x00403580:
  *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar21;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar28);
  bVar26 = (byte)pcVar15;
  puVar28 = (uint *)((int)puVar28 + 1);
  bRam7e060000 = bVar26;
  *pcVar15 = *pcVar15 + bVar26;
  uVar24 = (undefined3)((uint)pcVar15 >> 8);
  bVar9 = bVar26 + 0x2d;
  pcVar15 = (char *)CONCAT31(uVar24,bVar9);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar28 + (uint)(0xd2 < bVar26) + puVar60[(int)puVar63 * 2]);
  pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
  uVar19 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar9;
  if (!CARRY1((byte)uVar19,bVar9)) {
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar64 + 0x45),
                                        (char)pbVar62));
    goto code_r0x0040353f;
  }
  *pcVar15 = *pcVar15 + bVar9;
  bVar9 = bVar9 | pcVar15[0x4000042];
  pcVar15 = (char *)CONCAT31(uVar24,bVar9);
  if ('\0' < (char)bVar9) {
code_r0x004035a1:
    bVar9 = (byte)pcVar15;
    *pcVar15 = *pcVar15 + bVar9;
    uVar24 = (undefined3)((uint)pcVar15 >> 8);
    bVar26 = bVar9 + 10;
    if (bVar26 == 0 || SCARRY1(bVar9,'\n') != (char)bVar26 < '\0') {
      pcVar15 = (char *)CONCAT31(uVar24,bVar9 + 8 + (0xf5 < bVar9));
code_r0x004035e5:
      bVar9 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar9;
      uVar24 = (undefined3)((uint)pcVar15 >> 8);
      bVar26 = bVar9 + 0x2d;
      pcVar15 = (char *)CONCAT31(uVar24,bVar26);
      puVar60[(int)puVar63 * 2] =
           (uint)((int)puVar28 + (uint)(0xd2 < bVar9) + puVar60[(int)puVar63 * 2]);
      uVar19 = *puVar60;
      *(byte *)puVar60 = (byte)*puVar60 + bVar26;
      if (CARRY1((byte)uVar19,bVar26)) {
        *pcVar15 = *pcVar15 + bVar26;
        bVar26 = bVar26 | pcVar15[0x4000044];
        pbVar58 = (byte *)CONCAT31(uVar24,bVar26);
        if ('\0' < (char)bVar26) {
          *pbVar58 = *pbVar58 + bVar26;
          pbVar58 = (byte *)(CONCAT31(uVar24,bVar26 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar26));
          pbRam2a060000 = pbVar58;
          *pbVar62 = *pbVar62 + (char)pbVar62;
          *(byte *)puVar28 = (byte)*puVar28 ^ (byte)pbVar58;
          *pbVar58 = *pbVar58 + (char)((uint)pbVar21 >> 8);
          *pbVar58 = *pbVar58 + (byte)pbVar58;
          puVar64 = puVar63;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),
                                 (byte)pbVar21 |
                                 *(byte *)((int)(puVar28 + 0xa004000) + (int)puVar63));
      puVar64 = puVar60;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
    bVar9 = bVar9 + 0x37;
    piVar14 = (int *)CONCAT31(uVar24,bVar9);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar28 + (uint)(0xd2 < bVar26) + puVar60[(int)puVar63 * 2]);
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
    uVar19 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar9;
    puVar64 = puVar60;
    if (!CARRY1((byte)uVar19,bVar9)) goto code_r0x0040355b;
    *(byte *)piVar14 = (char)*piVar14 + bVar9;
    bVar9 = bVar9 | *(byte *)((int)piVar14 + 0x4000043);
    pbVar58 = (byte *)CONCAT31(uVar24,bVar9);
    if ((char)bVar9 < '\x01') {
      *pbVar58 = *pbVar58 + bVar9;
      pbVar57 = pbVar57 + -*(int *)((int)puVar63 + -0x5d);
      *pbVar58 = *pbVar58 + bVar9;
      uStack_34 = (undefined4 *)((uint)uStack_34._2_2_ << 0x10);
      piVar14 = (int *)CONCAT31(uVar24,bVar9 - *pbVar58);
      puVar60 = (uint *)((int)puVar60 + (-(uint)(bVar9 < *pbVar58) - *piVar14));
      pbVar58 = (byte *)CONCAT31(uVar24,(bVar9 - *pbVar58) + (char)*piVar14);
      pbStack_2c = (byte *)0x17000000;
      puVar64 = puVar63;
code_r0x00403615:
      bVar26 = *pbVar58;
      bVar9 = (byte)pbVar58;
      *pbVar58 = *pbVar58 + bVar9;
      *puVar28 = (uint)(pbVar58 + (uint)CARRY1(bVar26,bVar9) + *puVar28);
      puVar63 = puVar64;
      if ((POPCOUNT(*puVar28 & 0xff) & 1U) == 0) {
        *pbVar58 = *pbVar58 + bVar9;
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar9 + 0x28);
        puVar63 = puVar64 + 1;
        uVar19 = in((short)puVar28);
        *puVar64 = uVar19;
        *pcVar15 = *pcVar15 + bVar9 + 0x28;
        pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar21 >> 8) | pbVar62[(int)pbVar21],
                                            (char)pbVar21));
        pcVar15[0x28] = pcVar15[0x28] + (char)((uint)puVar28 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar58 = *pbVar58 + bVar9;
    uVar19 = CONCAT31(uVar24,bVar9 + 0xb);
    piVar14 = (int *)(uVar19 - *puVar60);
    if (uVar19 < *puVar60) {
      cVar8 = (char)piVar14;
      *(char *)piVar14 = (char)*piVar14 + cVar8;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      cVar33 = (char)pbVar62;
      bVar26 = (byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar28 + 2);
      *pbVar57 = *pbVar57 - cVar33;
      *(byte *)puVar60 = (byte)*puVar60 + cVar8;
      uStack_34 = (undefined4 *)CONCAT22(uStack_34._2_2_,in_ES);
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar26 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar26,
                                                  cVar33)) + 0x38),cVar33));
      *(char *)piVar14 = (char)*piVar14 + cVar8;
      pcVar15 = (char *)CONCAT31((int3)((uint)piVar14 >> 8),cVar8 + 'o');
      *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar21;
      *pcVar15 = *pcVar15 - cVar33;
      *pcVar15 = *pcVar15 + cVar8 + 'o';
      puVar63 = (uint *)((int)puVar63 - puVar60[0x11]);
      goto code_r0x004035e5;
    }
    puVar64 = puVar60 + 1;
    out(*puVar60,(short)puVar28);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar9) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_2c & 0x4000) != 0;
  bVar68 = ((uint)pbStack_2c & 0x400) != 0;
  in_IF = ((uint)pbStack_2c & 0x200) != 0;
  in_TF = ((uint)pbStack_2c & 0x100) != 0;
  in_AF = ((uint)pbStack_2c & 0x10) != 0;
  in_ID = ((uint)pbStack_2c & 0x200000) != 0;
  in_AC = ((uint)pbStack_2c & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar8 = (char)pcVar15;
  *pcVar15 = *pcVar15 + cVar8;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((byte)((uint)pbVar21 >> 8) | (byte)*puVar28,(char)pbVar21));
  pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x3e],(char)pbVar62));
  *pcVar15 = *pcVar15 + cVar8;
  pbVar58 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar8 + '(');
  cVar8 = (char)((uint)puVar28 >> 8);
  *(byte *)((int)puVar28 + 0x21) = *(byte *)((int)puVar28 + 0x21) + cVar8;
  pbVar32 = pbVar58 + 2;
  *pbVar32 = *pbVar32 + cVar8;
  bVar26 = *pbVar32;
code_r0x00403643:
  cVar8 = (char)pbVar58;
  if ((POPCOUNT(bVar26) & 1U) == 0) {
    *pbVar58 = *pbVar58 + cVar8;
    uVar24 = (undefined3)((uint)pbVar58 >> 8);
    cVar33 = cVar8 + '(';
    pcVar15 = (char *)CONCAT31(uVar24,cVar33);
    in_AF = ((uint)pbVar58 & 0x1000) != 0;
    *pcVar15 = *pcVar15 + cVar33;
    puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | (byte)*puVar60);
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar60 + 0x3f),
                                        (char)pbVar62));
    *pcVar15 = *pcVar15 + cVar33;
    pbVar58 = (byte *)CONCAT31(uVar24,cVar8 + 'M');
    puVar28 = (uint *)((uint)puVar28 | *puVar28);
    *pbVar58 = *pbVar58 + (char)((uint)pbVar21 >> 8);
code_r0x00403659:
    puVar64 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
    bVar26 = (byte)pbVar58;
    *(byte *)puVar63 = bVar26;
    *pbVar58 = *pbVar58 + bVar26;
    uVar24 = (undefined3)((uint)pbVar58 >> 8);
    bVar26 = bVar26 | (byte)*puVar28;
    pcVar15 = (char *)CONCAT31(uVar24,bVar26);
    puVar63 = puVar64;
    if ((POPCOUNT(bVar26) & 1U) != 0) goto code_r0x0040369e;
    *pcVar15 = *pcVar15 + bVar26;
    bVar26 = bVar26 + 2;
    *pbVar57 = *pbVar57 - (char)pbVar62;
    *(byte *)puVar60 = (byte)*puVar60 + bVar26;
    puVar61 = puVar60 + (uint)bVar68 * -2 + 1;
    out(*puVar60,(short)puVar28);
    puVar63 = (uint *)((int)puVar64 + (uint)bVar68 * -2 + 1);
    puVar60 = (uint *)((int)puVar61 + (uint)bVar68 * -2 + 1);
    *(byte *)puVar64 = (byte)*puVar61;
    *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
    cVar33 = (char)((uint)pbVar21 >> 8);
    pbVar62[-0x21f60000] = pbVar62[-0x21f60000] - cVar33;
    cVar8 = (bVar26 | (byte)*puVar60) - 6;
    piVar14 = (int *)CONCAT31(uVar24,cVar8);
    pcVar15 = (char *)((int)piVar14 * 2 + 0x2adc0a00);
    *pcVar15 = *pcVar15 - cVar33;
    *piVar14 = (int)(*piVar14 + (int)puVar28);
    *(char *)piVar14 = (char)*piVar14 + cVar8;
    bVar26 = cVar8 + (char)*piVar14;
    in_AF = 9 < (bVar26 & 0xf) | in_AF;
    uVar19 = CONCAT31(uVar24,bVar26 + in_AF * '\x06') & 0xffffff0f;
    pbVar58 = (byte *)CONCAT22((short)(uVar19 >> 0x10),
                               CONCAT11((char)((uint)pbVar58 >> 8) + in_AF,(char)uVar19));
    pbVar32 = pbVar21;
  }
  else {
    *(byte *)puVar28 = (byte)*puVar28 + cVar8;
    *(byte *)puVar63 = (byte)*puVar63 + (char)((uint)puVar28 >> 8);
    pbVar32 = pbVar21;
  }
  *(byte *)puVar60 = (byte)*puVar60 + (char)((uint)pbVar58 >> 8);
  *(byte *)puVar28 = (byte)*puVar28 + (char)pbVar32;
  bVar9 = (byte)pbVar58;
  *pbVar58 = *pbVar58 + bVar9;
  bVar26 = *pbVar58;
  *pbVar58 = *pbVar58 + bVar9;
  pbVar21 = pbVar32;
  pbVar57 = pbStack_2c;
  if (!CARRY1(bVar26,bVar9)) goto code_r0x004036a6;
  *pbVar58 = *pbVar58 + bVar9;
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar9 | pbVar58[0x400003f]);
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),
                             (char)pbVar32 - *(byte *)((int)puVar28 + 0x5040302));
  *(char *)((int)pbVar58 * 2) = *(char *)((int)pbVar58 * 2) - (char)((uint)pbVar32 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(char)pbVar21 + (byte)*puVar60);
    pbVar58 = (byte *)(CONCAT31((int3)((uint)pbVar58 >> 8),(char)pbVar58 + '%') + 0x1ebd9f3);
    uStack_34 = (undefined4 *)CONCAT22(uStack_34._2_2_,in_ES);
    bVar26 = (byte)pbVar58;
    bVar67 = CARRY1(*pbVar58,bVar26);
    *pbVar58 = *pbVar58 + bVar26;
    puVar37 = uStack_34 + -1;
    *(undefined2 *)(uStack_34 + -1) = in_ES;
    cVar8 = (char)puVar28;
    if (bVar67) {
      *pbVar58 = *pbVar58 + bVar26;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      bVar10 = (byte)((uint)pbVar62 >> 8) | pbVar57[0x47];
      pcVar15 = (char *)CONCAT22(uVar66,CONCAT11(bVar10,(char)pbVar62));
      *pbVar58 = *pbVar58 + bVar26;
      uVar24 = (undefined3)((uint)pbVar58 >> 8);
      bVar26 = bVar26 + 0x2a;
      *pcVar15 = *pcVar15 + cVar8;
      pbVar58 = (byte *)((int)CONCAT31(uVar24,bVar26) * 2);
      *pbVar58 = *pbVar58 ^ bVar26;
      bVar26 = bVar26 ^ *(byte *)CONCAT31(uVar24,bVar26);
      pbVar58 = (byte *)CONCAT31(uVar24,bVar26);
      bVar9 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar26;
      *pbVar58 = (*pbVar58 - bVar26) - CARRY1(bVar9,bVar26);
      *pbVar21 = *pbVar21 + cVar8;
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar10 + pcVar15[0x38],(char)pbVar62));
      *pbVar58 = *pbVar58 + bVar26;
      cVar33 = bVar26 + 2;
      if ((POPCOUNT(cVar33) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar70 = (*pcVar2)();
        pbVar58 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar24,cVar33) = *(char *)CONCAT31(uVar24,cVar33) + cVar33;
      bVar26 = bVar26 + 0x71;
      pbVar58 = (byte *)CONCAT31(uVar24,bVar26);
      uVar65 = *(undefined2 *)(uStack_34 + -1);
      *pbVar58 = *pbVar58 + bVar26;
      iVar16 = (int)pbVar21 - *puVar28;
      pbVar21 = (byte *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                 CONCAT11((char)((uint)iVar16 >> 8) + *pbVar58,(char)iVar16));
      pbVar57 = (byte *)*uStack_34;
      bVar67 = CARRY1(*pbVar58,bVar26);
      *pbVar58 = *pbVar58 + bVar26;
      *(undefined2 *)uStack_34 = in_ES;
      *(undefined2 *)(uStack_34 + -1) = in_ES;
    }
    bVar26 = (byte)pbVar58;
    uVar24 = (undefined3)((uint)pbVar58 >> 8);
    if (bVar67) break;
    *(byte *)puVar28 = (byte)*puVar28 + (byte)pbVar21;
    *(byte *)((int)puVar28 + (int)pbVar57) = *(byte *)((int)puVar28 + (int)pbVar57) + bVar26;
    pcVar15 = (char *)CONCAT31(uVar24,(byte)*puVar28);
code_r0x0040369e:
    pbVar58 = (byte *)(pcVar15 + *(int *)(pcVar15 + 0x6c28));
  }
  *pbVar58 = *pbVar58 + bVar26;
  uVar25 = (uint3)((uint)pbVar21 >> 8);
  pbVar32 = (byte *)CONCAT31(uVar25,(byte)pbVar21 | *pbVar62);
  uVar65 = *(undefined2 *)uStack_34;
  puVar37 = uStack_34 + 1;
  puVar64 = puVar60 + (uint)bVar68 * -2 + 1;
  out(*puVar60,(short)puVar28);
  puVar63 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
  *pbVar58 = *pbVar58 + bVar26;
  bVar26 = bVar26 | (byte)*puVar63;
  pbVar58 = (byte *)CONCAT31(uVar24,bVar26);
  *(byte *)(puVar63 + 0x1bc28000) = (byte)puVar63[0x1bc28000] - (char)((uint)pbVar21 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar26);
  *(undefined2 *)uStack_34 = pbStack_2c._0_2_;
  cVar31 = (char)pbVar62;
  cVar33 = cVar31 - (byte)*puVar28;
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar33);
  if (cVar33 != '\0' && (char)(byte)*puVar28 <= cVar31) {
    *pbVar58 = *pbVar58 + bVar26;
    iVar16 = CONCAT31(uVar24,bVar26 + 0x2a);
    puVar60 = (uint *)((int)puVar64 + 1);
    cVar33 = (char)((uint)puVar28 >> 8) + *(byte *)((int)puVar28 + -0x7b);
    uVar70 = CONCAT44(CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(cVar33,cVar8)),iVar16);
    in_ES = *(undefined2 *)uStack_34;
    pcVar15 = (char *)(iVar16 + 0x6f);
    *pcVar15 = *pcVar15 + cVar33;
    pbVar32 = (byte *)((uint)uVar25 << 8);
    do {
      piVar14 = (int *)((ulonglong)uVar70 >> 0x20);
      pcVar15 = (char *)uVar70;
      *(char *)piVar14 = (char)*piVar14;
      if ((char)*piVar14 == '\0') {
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        pbStack_2c._0_2_ = in_ES;
_ctor:
        puVar28 = (uint *)((ulonglong)uVar70 >> 0x20);
        pbVar32 = (byte *)((uint)CONCAT21((short)((uint)pbVar32 >> 0x10),
                                          (char)((uint)pbVar32 >> 8) + *(char *)uVar70) << 8);
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        *(byte *)puVar28 = (byte)*puVar28;
        uVar24 = (undefined3)((ulonglong)uVar70 >> 8);
        bVar9 = (char)uVar70 - *(char *)uVar70;
        pbVar58 = (byte *)CONCAT31(uVar24,bVar9);
        bVar26 = *pbVar58;
        *pbVar58 = *pbVar58 + bVar9;
        puVar64 = (uint *)((int)puVar60 + (uint)CARRY1(bVar26,bVar9) + *(int *)pbVar58);
        pbVar58 = (byte *)CONCAT31(uVar24,bVar9);
        uStack_34 = puVar37;
        break;
      }
      *pcVar15 = *pcVar15 + (char)uVar70;
      *piVar14 = (int)(pbVar57 + *piVar14);
      puVar60 = (uint *)((int)puVar60 + 1);
      uVar70 = CONCAT44(CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar70 >> 0x28) +
                                          *(char *)((int)piVar14 + -0x33),
                                          (char)((ulonglong)uVar70 >> 0x20))),pcVar15);
      in_ES = *(undefined2 *)puVar37;
      puVar37 = (undefined4 *)((int)puVar37 + 4);
      pbVar58 = pbVar32;
code_r0x0040371e:
      puVar28 = (uint *)((ulonglong)uVar70 >> 0x20);
      pbVar21 = (byte *)uVar70;
      bVar9 = (byte)((ulonglong)uVar70 >> 0x28);
      pbVar21[0x6f] = pbVar21[0x6f] + bVar9;
      pbVar32 = (byte *)((uint)pbVar58 & 0xffffff00);
      *(char *)puVar28 = (char)*puVar28;
      bVar26 = (byte)uVar70;
      if ((char)*puVar28 != '\0') {
        *pbVar21 = *pbVar21 + bVar26;
        uVar19 = *puVar28;
        *puVar28 = (uint)(pbVar57 + *puVar28);
        piVar39 = (int *)((int)puVar37 + -4);
        *(uint **)((int)puVar37 + -4) = puVar60;
        if (CARRY4(uVar19,(uint)pbVar57)) {
          *pbVar21 = *pbVar21 + bVar26;
          *(undefined2 *)((int)puVar37 + -8) = in_ES;
          puVar64 = puVar28 + 0x1d028000;
          uVar19 = *puVar64;
          *(byte *)puVar64 = (byte)*puVar64 - bVar9;
          *(uint *)pbVar21 = (*(int *)pbVar21 - (int)pbVar21) - (uint)((byte)uVar19 < bVar9);
          *(byte *)puVar28 = (char)*puVar28 + bVar26;
          *pbVar57 = *pbVar57;
          uVar70 = CONCAT44(puVar28,CONCAT31((int3)((ulonglong)uVar70 >> 8),bVar26 + 0x2a));
          puVar38 = (undefined2 *)((int)puVar37 + -0xc);
          puVar37 = (undefined4 *)((int)puVar37 + -0xc);
          *puVar38 = in_DS;
          pbStack_2c._0_2_ = in_ES;
          goto _ctor;
        }
        bVar67 = false;
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar58 >> 8),*pbVar21);
        goto code_r0x004037a7;
      }
      bVar9 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar26;
      *(uint *)pbVar21 = (*(int *)pbVar21 - (int)pbVar21) - (uint)CARRY1(bVar9,bVar26);
      bVar26 = *pbVar32;
      bVar9 = (byte)((ulonglong)uVar70 >> 0x20);
      *pbVar32 = *pbVar32 + bVar9;
      if (CARRY1(bVar26,bVar9)) goto code_r0x0040375a;
    } while( true );
  }
  uVar70 = CONCAT44(puVar28,pbVar58);
  puVar60 = puVar64 + (uint)bVar68 * -2 + 1;
  out(*puVar64,(short)puVar28);
  bVar9 = (byte)pbVar58;
  *pbVar58 = *pbVar58 + bVar9;
  *pbVar32 = *pbVar32 + (char)pbVar62;
  bVar26 = *pbVar58;
  *pbVar58 = *pbVar58 + bVar9;
  *(byte **)(pbVar62 + -0x49) =
       (byte *)((int)puVar60 + (uint)CARRY1(bVar26,bVar9) + *(int *)(pbVar62 + -0x49));
  puVar37 = uStack_34;
  in_ES = pbStack_2c._0_2_;
code_r0x0040375a:
  pbVar58 = (byte *)uVar70;
  *pbVar58 = *pbVar58 + (char)uVar70;
  bVar67 = CARRY1((byte)((uint)pbVar32 >> 8),*pbVar58);
  *(undefined2 *)((int)puVar37 + -4) = uVar65;
  iVar16 = CONCAT31(0x1f0a00,bVar67 + 'o') + *(int *)(pbVar62 + (int)pbVar57) +
           (uint)(0x90 < bVar67) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar70 >> 0x20);
  pcVar20 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + -0x66) | *puVar63);
  bVar26 = *(byte *)((int)puVar63 + -0x46);
  pcVar15 = (char *)CONCAT22(0xd0a,(ushort)bVar26 << 8);
  *pcVar20 = *pcVar20 + (char)pcVar20;
  bVar9 = (byte)((ulonglong)uVar70 >> 0x20);
  puVar29 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar62[(int)pbVar57],bVar9));
  *pcVar15 = *pcVar15 + (char)pcVar20;
  *pbVar57 = *pbVar57 - bVar26;
  *puVar29 = *puVar29;
  pbVar58 = (byte *)(((uint)pcVar20 | 8) + 0x4490f9d8);
  bVar26 = (byte)pbVar58;
  *pbVar58 = *pbVar58 + bVar26;
  uVar19 = *puVar60;
  *(uint *)((int)puVar60 + (int)pbVar58) = *(uint *)((int)puVar60 + (int)pbVar58) ^ (uint)pcVar15;
  *pbVar58 = *pbVar58 | bVar26;
  piVar39 = (int *)0x2609fffc;
  bVar67 = false;
  uRam2609fffc = in_ES;
  *pbVar58 = *pbVar58 | bVar26;
  uVar70 = CONCAT44(CONCAT31((int3)((uint)puVar29 >> 8),bVar9 | (byte)uVar19),pbVar58);
code_r0x004037a7:
  while( true ) {
    pbVar58 = (byte *)((ulonglong)uVar70 >> 0x20);
    uVar65 = (undefined2)((ulonglong)uVar70 >> 0x20);
    out(*puVar60,uVar65);
    out(puVar60[(uint)bVar68 * -2 + 1],uVar65);
    puVar28 = (uint *)((int)puVar63 + (int)pbVar58);
    uVar19 = *puVar28;
    uVar5 = (uint)uVar70 + *puVar28;
    *puVar28 = uVar5 + bVar67;
    iVar16 = *piVar39 + *(int *)(pcVar15 + (int)pbVar58) +
             (uint)(CARRY4(uVar19,(uint)uVar70) || CARRY4(uVar5,(uint)bVar67));
    cVar8 = (char)iVar16 + '\t';
    pbVar21 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),cVar8);
    pcVar20 = (char *)((uint)bVar68 * -8 + 0x260a0004);
    out(uRam260a0000,uVar65);
    uVar65 = (undefined2)piVar39[1];
    *pbVar21 = *pbVar21 + cVar8;
    bVar9 = (byte)((uint)pcVar15 >> 8) | *pbVar58;
    *(undefined2 *)(piVar39 + 1) = in_DS;
    bVar26 = *pbVar21;
    pbVar21 = pbVar21 + (uint)CARRY1(bVar9,*pbVar21) + *(int *)pbVar21;
    *pbVar58 = *pbVar58 + 6;
    cVar33 = (char)pbVar62 - *pcVar20;
    pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),CONCAT11(bVar9 + bVar26 + *pbVar21,6))
    ;
    *pbVar21 = *pbVar21;
    *(undefined2 *)piVar39 = in_ES;
    uVar24 = (undefined3)((uint)pbVar21 >> 8);
    cVar8 = (char)pbVar21 - *pbVar21;
    piVar14 = (int *)CONCAT31(uVar24,cVar8);
    puVar60 = (uint *)(pcVar20 + *piVar14);
    bVar26 = cVar8 + (char)*piVar14;
    pcVar20 = (char *)CONCAT31(uVar24,bVar26);
    piVar40 = piVar39 + -1;
    piVar39[-1] = (int)pcVar15;
    *pcVar20 = *pcVar20 + bVar26;
    *pcVar20 = *pcVar20 + bVar26;
    *pcVar20 = *pcVar20 + bVar26;
    bVar67 = CARRY1(*pbVar58,bVar26);
    *pbVar58 = *pbVar58 + bVar26;
    if (bVar67) break;
    in_ES = (undefined2)piVar39[-1];
    pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar33);
    uVar70 = CONCAT44(pbVar58,pcVar20);
  }
  *pcVar20 = *pcVar20 + bVar26;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((byte)((uint)pbVar62 >> 8) | bRam080a0056,cVar33));
  *pcVar20 = *pcVar20 + bVar26;
  bVar10 = bVar26 + 2;
  *pbVar32 = *pbVar32 - (char)((ulonglong)uVar70 >> 0x20);
  *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
  uVar19 = *puVar60;
  uVar27 = (undefined3)((uint)pcVar15 >> 8);
  pbVar21 = (byte *)(CONCAT31(uVar27,(byte)uVar19) | 6);
  bVar9 = 9 < (bVar26 + 0x74 & 0xf) | in_AF;
  bVar11 = bVar26 + 0x74 + bVar9 * '\x06';
  bVar11 = bVar11 + (0x90 < (bVar11 & 0xf0) | 0x8d < bVar10 | bVar9 * (0xf9 < bVar11)) * '`';
  pbVar62 = (byte *)CONCAT31(uVar24,bVar11);
  bVar26 = *pbVar62;
  *pbVar62 = *pbVar62 + bVar11;
  if (!SCARRY1(bVar26,bVar11)) {
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    puVar60 = (uint *)((int)puVar60 + *(int *)(pbVar58 + 0x33));
    *pbVar62 = *pbVar62 | bVar11;
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    bVar26 = bVar11 + 0x72;
    piVar39[-2] = (int)pbVar32;
    *(byte *)CONCAT31(uVar24,bVar26) = *(byte *)CONCAT31(uVar24,bVar26) | bVar26;
    *(byte *)puVar60 = (byte)*puVar60 + bVar26;
    pbVar21 = (byte *)CONCAT31(uVar27,((byte)uVar19 | 6) + (byte)*puVar60);
    pcVar15 = (char *)CONCAT31(uVar24,bVar11 - 0x11);
    piVar40 = piVar39 + -3;
    piVar39[-3] = (int)pbVar21;
    *pcVar15 = *pcVar15 + (bVar11 - 0x11);
    pbVar62 = (byte *)CONCAT31(uVar24,bVar11 - 0xf);
    puVar63 = (uint *)((int)puVar63 + iRam080a0052);
    *pbVar62 = *pbVar62 + (bVar11 - 0xf);
  }
code_r0x00403825:
  pbVar59 = (byte *)0x80a0000;
  uVar24 = (undefined3)((uint)pbVar62 >> 8);
  cVar8 = (char)pbVar62 + '\x7f';
  pcVar15 = (char *)CONCAT31(uVar24,cVar8);
  *(byte **)((int)piVar40 + -4) = pbVar32;
  *pcVar15 = *pcVar15 + cVar8;
  iVar16 = CONCAT31(uVar24,(char)pbVar62 + -0x7f) + 0x547d;
  cVar8 = (char)iVar16;
  uVar24 = (undefined3)((uint)iVar16 >> 8);
  cVar33 = cVar8 + '*';
  pcVar15 = (char *)CONCAT31(uVar24,cVar33);
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),(byte)pbVar58 | (byte)*puVar60);
  cVar31 = (char)pbVar32 - (byte)*puVar60;
  uVar66 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar34 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar31) + 0x57);
  *pcVar15 = *pcVar15 + cVar33;
  bVar26 = cVar8 + 0x54U & *pbVar58;
  iVar16 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
  pcVar15 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
  *(undefined2 *)((int)piVar40 + -8) = in_DS;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,cVar31)) + 0x58);
  *pcVar15 = *pcVar15 + bVar26 + 0x2a;
  bVar10 = bVar26 + 0x54 & *pbVar58;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
  pcVar15 = (char *)CONCAT31(uVar24,bVar10 + 0x2a);
  pbVar62 = *(byte **)((int)piVar40 + -8);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,cVar31)) + 0x55);
  *pcVar15 = *pcVar15 + bVar10 + 0x2a;
  pcVar15 = (char *)CONCAT31(uVar24,bVar10 + 0x57);
  pbVar58 = pbVar58 + *(int *)pbVar62;
  *(undefined4 *)((int)piVar40 + -8) = 0x2a;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,cVar31)) + 0x55);
  *pcVar15 = *pcVar15 + bVar10 + 0x57;
  cVar8 = bVar10 - 0x3a;
  pcVar15 = (char *)CONCAT31(uVar24,cVar8);
  *(undefined2 *)((int)piVar40 + -0xc) = uVar65;
  *pcVar15 = *pcVar15 + cVar8;
  bVar26 = *pbVar58;
  cVar33 = (char)pbVar21;
  *(undefined2 *)((int)piVar40 + -0x10) = in_DS;
  pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,
                                                  cVar31)) + 0x59),cVar31));
  *pcVar15 = *pcVar15 + cVar8;
  bVar12 = bVar10 - 0x10 & *pbVar58;
  puVar63 = (uint *)((int)puVar63 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar16);
  *(char *)CONCAT31(uVar24,bVar12) = *(char *)CONCAT31(uVar24,bVar12) + bVar12;
  bVar12 = bVar12 + 0x2a;
  pbVar57 = (byte *)CONCAT31(uVar24,bVar12);
  puVar37 = (undefined4 *)((int)piVar40 + -0x14);
  *(undefined2 *)((int)piVar40 + -0x14) = in_DS;
  bVar10 = *(byte *)((int)puVar63 + 0x17);
  *pbVar57 = *pbVar57 + bVar12;
  bVar11 = *pbVar58;
  puVar42 = (undefined4 *)((int)piVar40 + -0x18);
  *(undefined2 *)((int)piVar40 + -0x18) = in_DS;
  bVar13 = *(byte *)((int)puVar63 + 0x1a);
  *pbVar57 = *pbVar57 + bVar12;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar21 >> 8) | bVar26) + bVar10 | bVar11) +
                                      bVar13 | *pbVar58,cVar33));
  *pbVar32 = *pbVar32 + cVar31;
  *(byte *)((int)pbVar57 * 2) = *(byte *)((int)pbVar57 * 2) ^ bVar12;
  bVar26 = *pbVar57;
  *pbVar57 = *pbVar57 + bVar12;
  bVar10 = *pbVar57;
  *pbVar21 = *pbVar21 + (char)pbVar58;
  bVar26 = ((bVar12 - bVar10) - CARRY1(bVar26,bVar12)) + *pbVar58;
  pbVar57 = (byte *)CONCAT31(uVar24,bVar26);
  if ((POPCOUNT(bVar26) & 1U) != 0) {
    pbVar58 = *(byte **)((int)piVar40 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar57 = *pbVar57 + bVar26;
  cVar8 = (bVar26 + 0x6f) - (0x90 < bVar26);
  pbVar22 = (byte *)CONCAT31(uVar24,cVar8);
  bVar26 = *pbVar58;
  *pbVar58 = *pbVar58 + cVar33;
  if (SCARRY1(bVar26,cVar33) == (char)*pbVar58 < '\0') {
    cRam33100000 = cRam33100000 - cVar8;
    cVar8 = cVar8 + *pbVar58;
    pbVar57 = (byte *)CONCAT31(uVar24,cVar8);
    puVar37 = (undefined4 *)((int)piVar40 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar22 = *pbVar22 + (char)pbVar22;
code_r0x004038b0:
    uVar24 = (undefined3)((uint)pbVar22 >> 8);
    cVar8 = (char)pbVar22 + '\x02';
    pbVar57 = (byte *)CONCAT31(uVar24,cVar8);
    puVar37 = puVar42;
    if ((POPCOUNT(cVar8) & 1U) != 0) {
code_r0x00403908:
      puVar63 = (uint *)((int)puVar63 - *(int *)pbVar62);
      cVar8 = (char)pbVar57 + *pbVar58;
      pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar8);
code_r0x0040390c:
      cVar33 = (char)pbVar57;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040390e;
      *pbVar62 = *pbVar62 + cVar33;
      goto code_r0x00403962;
    }
    *pbVar57 = *pbVar57 + cVar8;
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    piVar40 = (int *)((int)puVar42 + -4);
    *(byte **)((int)puVar42 + -4) = pbVar21;
    cVar8 = (char)pbVar22 + '.' + *pbVar58;
    pbVar57 = (byte *)CONCAT31(uVar24,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar22 = pbVar58 + (int)pbVar57;
      *pbVar22 = *pbVar22 + cVar8;
      bVar26 = *pbVar22;
      goto code_r0x00403912;
    }
    *pbVar57 = *pbVar57 + cVar8;
    bVar26 = cVar8 + 2;
    pbVar57 = (byte *)CONCAT31(uVar24,bVar26);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    if ((POPCOUNT(bVar26) & 1U) != 0) goto code_r0x00403916;
    *pbVar57 = *pbVar57 + bVar26;
    cVar33 = cVar8 + 'q';
    piVar14 = (int *)CONCAT31(uVar24,cVar33);
    *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0x90 < bVar26);
    bVar26 = *pbVar32;
    bVar10 = (byte)((uint)pbVar21 >> 8);
    *pbVar32 = *pbVar32 + bVar10;
    if (!CARRY1(bVar26,bVar10)) {
      out(*(undefined4 *)pbVar62,(short)pbVar58);
      bVar26 = (cVar33 - (char)*piVar14) - CARRY1(bVar26,bVar10);
      *pbVar58 = *pbVar58 + (char)pbVar21;
      cVar8 = bVar26 - *(byte *)CONCAT31(uVar24,bVar26);
      puVar60 = (uint *)(pbVar62 +
                        ((((uint)bVar68 * -8 + 4) - *(int *)CONCAT31(uVar24,cVar8)) -
                        (uint)(bVar26 < *(byte *)CONCAT31(uVar24,bVar26))));
      pbVar62 = (byte *)CONCAT31(uVar24,cVar8);
      goto code_r0x00403825;
    }
    *(char *)piVar14 = (char)*piVar14 + cVar33;
    uVar66 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar26 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar14 = (char)*piVar14 + cVar33;
    pcVar15 = (char *)CONCAT31(uVar24,cVar8 + 's');
    pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar26 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar26,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar15 = *pcVar15 + cVar8 + 's';
    bVar26 = cVar8 - 0xf;
    pbVar58 = *(byte **)((int)puVar42 + -4);
    *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
    bVar10 = cVar8 + 0x1e;
    pbVar22 = (byte *)CONCAT31(uVar24,bVar10);
    *(byte **)(pbVar62 + (int)puVar63 * 8) =
         pbVar58 + (uint)(0xd2 < bVar26) + *(int *)(pbVar62 + (int)puVar63 * 8);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    puVar44 = (undefined4 *)((int)puVar42 + -4);
    *(undefined2 *)((int)puVar42 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar22;
    bVar26 = *pbVar62;
    *pbVar62 = *pbVar62 + bVar10;
    if (CARRY1(bVar26,bVar10)) {
      *pbVar22 = *pbVar22 + bVar10;
      pbVar57 = (byte *)CONCAT31(uVar24,bVar10 | pbVar22[0x400005a]);
      if ('\0' < (char)(bVar10 | pbVar22[0x400005a])) {
code_r0x004038f6:
        bVar26 = (byte)pbVar57;
        *pbVar57 = *pbVar57 + bVar26;
        uVar24 = (undefined3)((uint)pbVar57 >> 8);
        cVar8 = ((bVar26 + 0x28) - *(char *)CONCAT31(uVar24,bVar26 + 0x28)) - (0xd7 < bVar26);
        pbVar57 = (byte *)CONCAT31(uVar24,cVar8);
        bVar26 = *pbVar32;
        bVar10 = (byte)((uint)pbVar21 >> 8);
        *pbVar32 = *pbVar32 + bVar10;
        if (CARRY1(bVar26,bVar10)) {
          *pbVar57 = *pbVar57 + cVar8;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11(bVar10 | *pbVar57,(char)pbVar21));
          *pbVar62 = *pbVar62 + cVar8;
          goto code_r0x00403908;
        }
        pbVar22 = pbVar57 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar24 = (undefined3)((uint)pbVar57 >> 8);
      bVar10 = (char)pbVar57 + 0x6f;
      bVar26 = *(byte *)CONCAT31(uVar24,bVar10);
      *pbVar58 = *pbVar58 + (char)pbVar21;
      pbVar57 = (byte *)CONCAT31(uVar24,(bVar10 & bVar26) + *pbVar62);
      *pbVar21 = *pbVar21 - (char)((uint)pbVar58 >> 8);
      puVar49 = puVar44;
      goto code_r0x0040395a;
    }
    puVar41 = (undefined4 *)((int)puVar42 + -8);
    puVar42 = (undefined4 *)((int)puVar42 + -8);
    *puVar41 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar14 = (char)*piVar14 + bVar26;
  puVar60 = puVar64;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar57 = *pbVar57 + cVar33;
  bVar26 = cVar33 + 2;
  pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),bVar26);
code_r0x00403912:
  bVar67 = (POPCOUNT(bVar26) & 1U) == 0;
  puVar49 = puVar37;
  if (!bVar67) goto code_r0x00403967;
  *pbVar57 = *pbVar57 + (char)pbVar57;
code_r0x00403916:
  bVar13 = (char)pbVar57 + 0x6f;
  pbVar22 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar57 >> 8),bVar13);
  bVar10 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar13;
  bVar11 = *pbVar22;
  bVar26 = *pbVar22;
  puVar49 = (undefined4 *)((int)puVar37 + -4);
  *(undefined2 *)((int)puVar37 + -4) = in_ES;
  if (bVar26 == 0 || SCARRY1(bVar10,bVar13) != (char)bVar11 < '\0') goto code_r0x00403979;
  *pbVar22 = *pbVar22 + bVar13;
  pbVar22 = (byte *)CONCAT31((int3)(char)((uint)pbVar57 >> 8),(char)pbVar57 + -100);
  *(byte **)(pbVar62 + (int)puVar63 * 8) =
       pbVar58 + (uint)(0xd2 < bVar13) + *(int *)(pbVar62 + (int)puVar63 * 8);
  puVar43 = (undefined2 *)((int)puVar37 + -8);
  puVar37 = (undefined4 *)((int)puVar37 + -8);
  *puVar43 = in_ES;
code_r0x00403926:
  puVar42 = puVar37 + 1;
  puVar49 = puVar37 + 1;
  puVar44 = puVar37 + 1;
  *(undefined4 *)pbVar22 = *puVar37;
  bVar26 = *pbVar62;
  bVar10 = (byte)pbVar22;
  *pbVar62 = *pbVar62 + bVar10;
  if (CARRY1(bVar26,bVar10)) {
    *pbVar22 = *pbVar22 + bVar10;
    uVar24 = (undefined3)((uint)pbVar22 >> 8);
    bVar10 = bVar10 | pbVar22[0x400005b];
    pbVar57 = (byte *)CONCAT31(uVar24,bVar10);
    pbVar22 = pbVar62;
    if ((char)bVar10 < '\x01') goto code_r0x00403991;
    *pbVar57 = *pbVar57 + bVar10;
    cVar8 = bVar10 + 0x28;
    pbVar57 = (byte *)CONCAT31(uVar24,cVar8);
    *(byte **)pbVar57 = pbVar57 + (uint)(0xd7 < bVar10) + *(int *)pbVar57;
    bVar26 = *pbVar32;
    bVar10 = (byte)((uint)pbVar21 >> 8);
    *pbVar32 = *pbVar32 + bVar10;
    if (CARRY1(bVar26,bVar10)) {
      *pbVar57 = *pbVar57 + cVar8;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11(bVar10 | *pbVar57,(char)pbVar21));
      *pbVar62 = *pbVar62 + cVar8;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar57 = *pbVar57 + cVar8;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar37 = in_ES;
code_r0x00403962:
    puVar49 = (undefined4 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar65;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar57 = *pbVar57 + (char)pbVar57;
  puVar45 = (undefined2 *)((int)puVar49 + -4);
  puVar49 = (undefined4 *)((int)puVar49 + -4);
  *puVar45 = in_ES;
  pbVar58[0x16060000] = pbVar58[0x16060000] - (char)pbVar21;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar62);
  cVar8 = (char)pbVar57 + '\x02';
  pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar8);
  bVar67 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar67) goto code_r0x004039be;
  *pbVar57 = *pbVar57 + (char)pbVar57;
  uVar24 = (undefined3)((uint)pbVar57 >> 8);
  bVar26 = (char)pbVar57 + 0x6f;
  bVar26 = bVar26 & *(byte *)CONCAT31(uVar24,bVar26);
  pbVar22 = (byte *)CONCAT31(uVar24,bVar26);
  *pbVar58 = *pbVar58 + (char)pbVar21;
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),(char)pbVar58 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar26;
code_r0x00403979:
  do {
    bVar26 = (char)pbVar22 - (byte)*puVar63;
    bVar67 = bVar26 < *pbVar21;
    pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar26 - *pbVar21);
    do {
      cVar8 = (char)pbVar57;
      *pbVar57 = *pbVar57 + cVar8 + bVar67;
      *pbVar57 = *pbVar57 + cVar8;
      *pbVar21 = *pbVar21 + (char)pbVar58;
      pbVar21[0x101c00aa] = pbVar21[0x101c00aa] + (char)pbVar32;
      *pbVar57 = *pbVar57 + cVar8;
      *(byte **)pbVar62 = pbVar32 + *(int *)pbVar62;
      bVar26 = (byte)((uint)pbVar21 >> 8);
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11(bVar26 + *pbVar57,(char)pbVar21));
      pbVar57 = pbVar57 + (uint)CARRY1(bVar26,*pbVar57) + *(int *)pbVar57;
      pbVar22 = pbVar62;
code_r0x00403991:
      cVar8 = (char)pbVar21;
      *pbVar58 = *pbVar58 + cVar8;
      cVar33 = (char)pbVar32 - pbVar22[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar33);
      pbVar62 = pbVar22;
      if ((POPCOUNT(cVar33) & 1U) != 0) goto code_r0x0040395a;
      *pbVar57 = *pbVar57 + (byte)pbVar57;
      uVar25 = (uint3)((uint)pbVar57 >> 8);
      bVar26 = (byte)pbVar57 | *pbVar32;
      piVar14 = (int *)CONCAT31(uVar25,bVar26);
      bVar10 = (byte)((uint)pbVar21 >> 8);
      bVar11 = (byte)pbVar58;
      if (bVar26 == 0) {
        *(char *)piVar14 = (char)*piVar14;
        puVar49 = (undefined4 *)((int)puVar49 + -*(int *)(pbVar59 + 0x1b000007));
        pbVar62 = pbVar22 + (uint)bVar68 * -8 + 4;
        out(*(undefined4 *)pbVar22,(short)pbVar58);
        pbVar57 = (byte *)((uint)uVar25 << 8);
        *pbVar58 = *pbVar58 + cVar8;
        pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar11 - *pbVar32);
        *pbVar32 = *pbVar32;
        *pbVar58 = *pbVar58 + bVar10;
        *pbVar57 = *pbVar57;
        *pbVar32 = *pbVar32 + cVar33;
        *pbVar57 = *pbVar57;
        *(byte **)(pbVar32 + -0x3d) = pbVar62 + *(int *)(pbVar32 + -0x3d);
        break;
      }
      pbVar59 = pbVar59 + -puVar63[9];
      *(byte *)piVar14 = (char)*piVar14 + bVar26;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar10 | *pbVar58,cVar8));
      pbVar62 = pbVar22 + *piVar14;
      pcVar15 = (char *)((int)piVar14 + *piVar14);
      bVar10 = (char)pcVar15 - *pcVar15;
      pbVar57 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar10);
      bVar26 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar10;
      pbVar57 = pbVar57 + (-(uint)CARRY1(bVar26,bVar10) - *(int *)pbVar57);
      bVar67 = CARRY1(*pbVar21,bVar11);
      *pbVar21 = *pbVar21 + bVar11;
    } while (!bVar67);
    *pbVar57 = *pbVar57 + (char)pbVar57;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | *pbVar58);
code_r0x004039be:
    puVar37 = (undefined4 *)((int)puVar49 + -4);
    puVar46 = (undefined1 *)((int)puVar49 + -4);
    *(undefined2 *)((int)puVar49 + -4) = in_ES;
    puVar63 = (uint *)((int)puVar63 + *(int *)(pbVar59 + -0x3c));
    *pbVar57 = *pbVar57 + (byte)pbVar57;
    uVar24 = (undefined3)((uint)pbVar57 >> 8);
    bVar26 = (byte)pbVar57 | *pbVar58;
    pcVar15 = (char *)CONCAT31(uVar24,bVar26);
    if ((POPCOUNT(bVar26) & 1U) != 0) {
      cVar8 = *pcVar15;
      *pcVar15 = *pcVar15 + bVar26;
      cVar33 = *pcVar15;
      puVar29 = (undefined1 *)((int)puVar49 + -4);
      if (!SCARRY1(cVar8,bVar26)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar37 = (undefined4 *)puVar29;
      cVar8 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar8;
      uVar24 = (undefined3)((uint)pcVar15 >> 8);
      bVar26 = cVar8 + 2;
      if ((POPCOUNT(bVar26) & 1U) != 0) {
        pcVar15 = (char *)CONCAT31(uVar24,bVar26 + *pbVar58);
        pbVar57 = pbVar62;
        if ((POPCOUNT(bVar26 + *pbVar58) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar62 + (int)puVar63 * 8) =
             pbVar58 + (uint)(0xd2 < (byte)pcVar15) + *(int *)(pbVar62 + (int)puVar63 * 8);
        puVar48 = (undefined2 *)((int)puVar37 + -4);
        puVar37 = (undefined4 *)((int)puVar37 + -4);
        *puVar48 = in_ES;
        pbVar22 = pbVar59;
        pbVar23 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 + 0x2d);
code_r0x00403ad8:
        pbVar59 = pbVar23;
        bVar26 = *pbVar22;
        bVar10 = (byte)pbVar22;
        *pbVar22 = *pbVar22 + bVar10;
        puVar49 = (undefined4 *)((int)puVar37 + -4);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        puVar29 = (undefined1 *)((int)puVar37 + -4);
        if (CARRY1(bVar26,bVar10)) {
          *pbVar22 = *pbVar22 + bVar10;
          bVar10 = bVar10 | pbVar22[0x400005d];
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar10);
          pbVar57 = pbVar62;
          if ((char)bVar10 < '\x01') {
            *pbVar22 = *pbVar22 + bVar10;
            pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar21 >> 8) | *pbVar58,(char)pbVar21)
                                      );
            pbVar57 = *(byte **)((int)puVar37 + -4);
            pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                       CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],
                                                (char)pbVar32));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar22 = *pbVar22 + (char)pbVar22;
          cVar8 = (char)pbVar22 + '(';
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar8);
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          bVar26 = *pbVar32;
          bVar10 = (byte)((uint)pbVar21 >> 8);
          *pbVar32 = *pbVar32 + bVar10;
          pbVar62 = pbVar57;
          if (!CARRY1(bVar26,bVar10)) {
            puVar37 = (undefined4 *)((int)puVar49 + -4);
            *(undefined2 *)((int)puVar49 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar22 = *pbVar22 + cVar8;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
      piVar14 = (int *)CONCAT31(uVar24,cVar8 + '*');
      *piVar14 = (*piVar14 - (int)piVar14) - (uint)(0xd7 < bVar26);
      bVar26 = *pbVar58;
      bVar13 = (byte)pbVar21;
      *pbVar58 = *pbVar58 + bVar13;
      out(*(undefined4 *)pbVar62,(short)pbVar58);
      bVar11 = ((cVar8 + '*') - (char)*piVar14) - CARRY1(bVar26,bVar13);
      pbVar57 = (byte *)CONCAT31(uVar24,bVar11);
      *pbVar58 = *pbVar58 + bVar13;
      uVar66 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar30 = SUB41(pbVar32,0);
      cVar8 = (char)((uint)pbVar32 >> 8) - pbVar62[(uint)bVar68 * -8 + 0x1f];
      pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(cVar8,uVar30));
      *pbVar57 = *pbVar57 + bVar11;
      bVar10 = *pbVar58;
      bVar26 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar11;
      pbVar62 = pbVar62 + ((((uint)bVar68 * -8 + 4) - *(int *)pbVar57) - (uint)CARRY1(bVar26,bVar11)
                          );
      pbVar57 = (byte *)CONCAT31(uVar24,bVar11);
      pbVar21 = (byte *)(CONCAT22((short)((uint)pbVar21 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar21 >> 8) | bVar10,bVar13)) + -1);
      bVar26 = *pbVar57;
      *pbVar57 = *pbVar57 + bVar11;
      bVar26 = (bVar11 - *pbVar57) - CARRY1(bVar26,bVar11);
      *pbVar21 = *pbVar21 + (char)pbVar58;
      bVar67 = CARRY1(bVar26,*pbVar58);
      bVar26 = bVar26 + *pbVar58;
      pbVar57 = (byte *)CONCAT31(uVar24,bVar26);
      if ((POPCOUNT(bVar26) & 1U) == 0) {
        *pbVar57 = *pbVar57 + bVar26;
        cVar33 = (bVar26 + 0x6f) - (0x90 < bVar26);
        pbVar22 = (byte *)CONCAT31(uVar24,cVar33);
        bVar26 = *pbVar58;
        *pbVar58 = *pbVar58 + (char)pbVar21;
        if (SCARRY1(bVar26,(char)pbVar21) == (char)*pbVar58 < '\0') {
code_r0x00403aaf:
          cVar8 = (char)pbVar22 + '(';
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar8);
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          bVar26 = *pbVar32;
          bVar10 = (byte)((uint)pbVar21 >> 8);
          *pbVar32 = *pbVar32 + bVar10;
          pbVar23 = pbVar59;
          if (!CARRY1(bVar26,bVar10)) goto code_r0x00403ad8;
          *pbVar22 = *pbVar22 + cVar8;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11(bVar10 | *pbVar32,(char)pbVar21));
          if ((POPCOUNT(*pbVar58 - cVar8) & 1U) != 0) {
            *pbVar62 = *pbVar62 + cVar8;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar22 = *pbVar22 + cVar33;
          pcVar15 = (char *)CONCAT31(uVar24,cVar33 + '\x02');
          bVar10 = cVar8 + pbVar32[0x52];
          pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar10,uVar30));
          *pcVar15 = *pcVar15 + cVar33 + '\x02';
          bVar26 = cVar33 + 4;
          pbVar22 = (byte *)CONCAT31(uVar24,bVar26);
          if ((POPCOUNT(bVar26) & 1U) == 0) {
            *pbVar22 = *pbVar22 + bVar26;
            cVar8 = (cVar33 + 's') - (0x90 < bVar26);
            pcVar15 = (char *)CONCAT31(uVar24,cVar8);
            bVar26 = (byte)((uint)pbVar21 >> 8);
            bVar67 = CARRY1(*pbVar32,bVar26);
            *pbVar32 = *pbVar32 + bVar26;
            pbVar57 = pbVar62;
            if (bVar67) {
              *pcVar15 = *pcVar15 + cVar8;
              pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar10 | pbVar59[0x5c],uVar30));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar63 = (uint *)((int)puVar63 - *(int *)pbVar22);
          pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar10 + pbVar32[0x52],uVar30));
        }
        *pbVar22 = *pbVar22 + (char)pbVar22;
        cVar8 = (char)pbVar22 + '\x02';
        pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar8);
        bVar67 = (POPCOUNT(cVar8) & 1U) == 0;
        if (!bVar67) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar26 = (byte)pbVar57;
        *pbVar57 = *pbVar57 + bVar26;
        cVar8 = (bVar26 + 0x6f) - (0x90 < bVar26);
        pcVar15 = (char *)CONCAT31((int3)((uint)pbVar57 >> 8),cVar8);
        bVar26 = *pbVar32;
        cVar33 = (char)((uint)pbVar21 >> 8);
        *pbVar32 = *pbVar32 + cVar33;
        if (*pbVar32 == 0 || SCARRY1(bVar26,cVar33) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
        *pcVar15 = *pcVar15 + cVar8;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar67) {
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],(char)pbVar32
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar57 = *pbVar57 + (byte)pbVar57;
      bVar26 = (byte)pbVar57 | pbVar57[0x400005e];
      pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar57 >> 8),bVar26);
      if ('\0' < (char)bVar26) {
        *pbVar22 = *pbVar22 + bVar26;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar15 = *pcVar15 + bVar26;
    *pbVar62 = *pbVar62 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar24,bVar26 + 6);
    pbVar22 = (byte *)uVar3;
    bVar26 = *pbVar58;
    bVar10 = (byte)pbVar21;
    *pbVar58 = *pbVar58 + bVar10;
    if (CARRY1(bVar26,bVar10)) {
      *pbVar22 = *pbVar22 + (char)uVar3;
      bVar11 = (byte)((uint)pbVar21 >> 8) | *pbVar22;
      uVar66 = CONCAT11(bVar11,bVar10);
      pbVar22 = pbVar22 + -*(int *)pbVar22;
      bVar26 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar11;
      if (CARRY1(bVar26,bVar11)) {
        cVar33 = (char)pbVar22;
        *pbVar22 = *pbVar22 + cVar33;
        bVar26 = *pbVar58;
        pbVar58 = (byte *)CONCAT22((short)((uint)pbVar58 >> 0x10),
                                   CONCAT11((char)((uint)pbVar58 >> 8) - pbVar32[-0x3a],
                                            (char)pbVar58));
        *pbVar22 = *pbVar22 + cVar33;
        uVar36 = (undefined2)((uint)pbVar32 >> 0x10);
        bVar35 = (byte)((uint)pbVar32 >> 8) | pbVar58[0x32];
        pcVar15 = (char *)CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar32));
        cVar8 = *pcVar15;
        puVar46 = (undefined1 *)((int)puVar49 + -8);
        *(undefined2 *)((int)puVar49 + -8) = in_CS;
        cVar8 = cVar33 + cVar8 + '-';
        pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar8);
        *pbVar22 = *pbVar22;
        *(undefined2 *)((int)puVar49 + -0xc) = in_ES;
        bVar13 = *pbVar58;
        uVar65 = *(undefined2 *)((int)puVar49 + -0xc);
        cVar33 = (char)pbVar32 - *pbVar62;
        bVar12 = *(byte *)((int)puVar63 + 0x17);
        *pbVar22 = *pbVar22 + cVar8;
        uVar66 = CONCAT11((bVar11 | bVar26) + bVar12 | *pbVar58,bVar10 - bVar13);
        pbVar32 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35 + *(char *)(CONCAT31((int3)((uint)pcVar15
                                                                                     >> 8),cVar33) +
                                                                     0x4e),cVar33));
        *pbVar22 = *pbVar22 + cVar8;
      }
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),uVar66);
      bVar26 = (byte)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      pcVar15 = (char *)CONCAT31(uVar24,bVar26 + 0x28);
      *pcVar15 = (*pcVar15 - (bVar26 + 0x28)) - (0xd7 < bVar26);
      *pbVar58 = *pbVar58 + (char)uVar66;
      bVar10 = bVar26 + 0x1b;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32))
      ;
      *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
      pcVar20 = (char *)CONCAT31(uVar24,bVar26 + 0x43);
      *pcVar20 = (*pcVar20 - (bVar26 + 0x43)) - (0xd7 < bVar10);
      *pbVar58 = *pbVar58 + (char)uVar66;
      pcVar15 = pcVar20 + -0x6b721c;
      pcVar20 = pcVar20 + -0x6b721a;
      *pcVar20 = *pcVar20 + (char)((uint)pbVar58 >> 8);
      cVar33 = *pcVar20;
      puVar37 = (undefined4 *)puVar46;
code_r0x00403a22:
      puVar29 = (undefined1 *)puVar37;
      if ((POPCOUNT(cVar33) & 1U) == 0) goto code_r0x00403a24;
      bVar26 = *pbVar58;
      *pbVar58 = *pbVar58 + (char)pbVar21;
      if (SCARRY1(bVar26,(char)pbVar21) == (char)*pbVar58 < '\0') {
        pbVar22 = pbVar59;
        pbVar23 = (byte *)(pcVar15 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar15 = *pcVar15 + (char)pcVar15;
      pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x02');
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32))
      ;
      pbVar57 = pbVar62;
code_r0x00403a7d:
      cVar8 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar8;
      uVar24 = (undefined3)((uint)pcVar15 >> 8);
      cVar33 = cVar8 + '-';
      pbVar23 = (byte *)CONCAT31(uVar24,cVar33);
      pbVar22 = pbVar59;
      pbVar62 = pbVar57;
      if ((POPCOUNT(cVar33 - *pbVar58) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar23 = *pbVar23 + cVar33;
      bVar26 = cVar8 + 0x2f;
      if ((POPCOUNT(bVar26) & 1U) != 0) {
        bVar26 = *pbVar58;
        *pbVar58 = *pbVar58 + (byte)pbVar21;
        *pbVar59 = *pbVar59 - CARRY1(bVar26,(byte)pbVar21);
        pbVar22 = (byte *)CONCAT31(uVar24,cVar8 + -0x53);
        pbVar59 = (byte *)*puVar37;
        puVar49 = puVar37 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
      bVar67 = 0x90 < bVar26;
      pcVar15 = (char *)CONCAT31(uVar24,cVar8 + -0x62);
code_r0x00403a8f:
      uVar24 = (undefined3)((uint)pcVar15 >> 8);
      bVar10 = (char)pcVar15 - bVar67;
      pbVar22 = (byte *)CONCAT31(uVar24,bVar10);
      bVar26 = *pbVar32;
      cVar8 = (char)((uint)pbVar21 >> 8);
      *pbVar32 = *pbVar32 + cVar8;
      puVar49 = puVar37;
      pbVar62 = pbVar57;
      if (*pbVar32 != 0 && SCARRY1(bVar26,cVar8) == (char)*pbVar32 < '\0') {
        *pbVar22 = *pbVar22 + bVar10;
        pbVar62 = (byte *)CONCAT31(uVar24,bVar10 + 0x2d);
        *(byte **)(pbVar57 + (int)puVar63 * 8) =
             pbVar58 + (uint)(0xd2 < bVar10) + *(int *)(pbVar57 + (int)puVar63 * 8);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        bVar67 = CARRY1(*pbVar57,(byte)pbVar57);
        *pbVar57 = *pbVar57 + (byte)pbVar57;
        puVar47 = (undefined2 *)((int)puVar37 + -8);
        puVar37 = (undefined4 *)((int)puVar37 + -8);
        *puVar47 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar21 >> 8) | *pbVar22,(char)pbVar21));
      *pbVar62 = *pbVar62 + (char)pbVar22;
      puVar29 = (undefined1 *)puVar49;
code_r0x00403afc:
      puVar37 = (undefined4 *)puVar29;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar22 = *pbVar22 + (char)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar10 = (char)pbVar22 + 0x6f;
      bVar26 = *(byte *)CONCAT31(uVar24,bVar10);
      *pbVar58 = *pbVar58 + (char)pbVar21;
      pbVar22 = (byte *)CONCAT31(uVar24,(bVar10 & bVar26) + *pbVar62);
      *pbVar21 = *pbVar21 - (char)((uint)pbVar58 >> 8);
      break;
    }
    uVar65 = *(undefined2 *)((int)puVar49 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar50 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar50 = in_ES;
  pbVar58[0x16060000] = pbVar58[0x16060000] - (char)pbVar21;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar62);
  cVar8 = (char)pbVar22 + '\x02';
  pbVar57 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar8);
  bVar67 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
  bVar26 = (byte)pbVar57;
  uVar24 = (undefined3)((uint)pbVar57 >> 8);
  if (!bVar67) {
    *pbVar58 = *pbVar58 + (char)pbVar21;
    pbVar22 = (byte *)CONCAT31(uVar24,bVar26 | *pbVar62);
code_r0x00403b73:
    pbVar57 = (byte *)((int)puVar63 + *(int *)(pbVar59 + -0x37));
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    uVar24 = (undefined3)((uint)pbVar22 >> 8);
    bVar26 = (byte)pbVar22 | *pbVar58;
    pcVar15 = (char *)CONCAT31(uVar24,bVar26);
    uVar70 = CONCAT44(pbVar58,pcVar15);
    if ((POPCOUNT(bVar26) & 1U) == 0) {
      *pcVar15 = *pcVar15 + bVar26;
      *pbVar62 = *pbVar62 + 1;
      return (byte *)CONCAT31(uVar24,bVar26 + 6);
    }
    bVar26 = *pbVar62;
    *pbVar62 = *pbVar62 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar26,'\x01')) {
      uVar70 = (*pcVar2)();
      pbVar21 = extraout_ECX_00;
    }
    pbVar58 = (byte *)uVar70;
    *pbVar58 = *pbVar58 + (char)uVar70;
    cVar33 = (char)((ulonglong)uVar70 >> 0x20);
    puVar63 = (uint *)CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar32[0x2f],cVar33));
    *pbVar58 = *pbVar58 + (char)uVar70;
    cVar8 = (char)pbVar21;
    bVar11 = (byte)((uint)pbVar21 >> 8) | *pbVar58;
    pbVar58 = pbVar58 + *(int *)pbVar58;
    bVar26 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar11;
    bVar10 = (byte)pbVar58;
    if (CARRY1(bVar26,bVar11)) {
      *pbVar58 = *pbVar58 + bVar10;
      bVar11 = bVar11 | (byte)*puVar63;
      *pbVar32 = *pbVar32 - cVar33;
      *pbVar58 = *pbVar58 + bVar10;
      uVar24 = (undefined3)((uint)pbVar58 >> 8);
      bVar10 = bVar10 | (byte)*puVar63;
      puVar28 = (uint *)CONCAT31(uVar24,bVar10);
      bVar67 = CARRY4((uint)pbVar59,*puVar28);
      bVar69 = SCARRY4((int)pbVar59,*puVar28);
      pbVar59 = pbVar59 + *puVar28;
      *(uint *)((int)puVar37 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar69 * 0x800 | (uint)bVar68 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar59 < 0) * 0x80 |
           (uint)(pbVar59 == (byte *)0x0) * 0x40 | (uint)(bVar9 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar59 & 0xff) & 1U) == 0) * 4 | (uint)bVar67 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar28 = (char)*puVar28 + bVar10;
      *(undefined2 *)((int)puVar37 + -8) = in_ES;
      cVar33 = (char)pbVar32 - *pbVar62;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar33) +
                                                   0x5f),cVar33));
      *(byte *)puVar28 = (char)*puVar28 + bVar10;
      bVar26 = bVar10 + 0x2a & (byte)*puVar63;
      pbVar57 = pbVar57 + *(int *)(pbVar59 + 0x5f);
      *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
      pbVar58 = (byte *)CONCAT31(uVar24,bVar26 + 0x2a);
      *(byte *)puVar63 = (byte)*puVar63 + 0x28;
      *pbVar58 = *pbVar58 + bVar26 + 0x2a;
      puVar53 = (undefined2 *)((int)puVar37 + -0xc);
      puVar37 = (undefined4 *)((int)puVar37 + -0xc);
      *puVar53 = in_ES;
    }
    else {
      *pbVar62 = *pbVar62 + bVar10;
    }
    pcVar15 = (char *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar11,cVar8));
    *pbVar59 = *pbVar59 - bVar11;
    *(byte *)puVar63 = (byte)*puVar63 + cVar8;
    bVar26 = (byte)pbVar58 - 0xb;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar26);
    if (10 < (byte)pbVar58) {
      *pbVar21 = *pbVar21 | bVar26;
      return pbVar21;
    }
    *(byte *)puVar63 = (byte)*puVar63 + cVar8;
    do {
      *(undefined2 *)((int)puVar37 + -4) = in_ES;
      bVar26 = pbVar32[-0x23];
      bVar10 = (byte)pbVar21;
      *pbVar21 = *pbVar21 + bVar10;
      bVar9 = pbVar59[-0x22];
      *pbVar21 = *pbVar21 + bVar10;
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar10 = bVar10 | *pbVar62;
      pbVar58 = (byte *)CONCAT31(uVar24,bVar10);
      cVar33 = (char)pbVar32 - *pbVar62;
      pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar32 >> 8) + bVar26 |
                                                          bVar9,(char)pbVar32)) >> 8),cVar33);
      cVar8 = (char)pcVar15;
      pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                 CONCAT11((char)((uint)pcVar15 >> 8) + *pbVar58,cVar8));
      *(byte *)puVar63 = (byte)*puVar63 + cVar8;
      bVar9 = bVar10 - *pbVar58;
      pbVar21 = (byte *)CONCAT31(uVar24,bVar9);
      pbVar62 = pbVar62 + (-(uint)(bVar10 < *pbVar58) - *(int *)pbVar21);
      in_ES = *(undefined2 *)((int)puVar37 + -4);
      puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),(char)puVar63 * '\x02');
      *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
      *pbVar57 = *pbVar57 + cVar33;
      bVar26 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar9;
      *puVar63 = (uint)(pbVar21 + (uint)CARRY1(bVar26,bVar9) + *puVar63);
    } while ((POPCOUNT(*puVar63 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar21 = *pbVar21 + (char)pbVar21;
    pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | pbVar21[(int)pcVar15]);
    puVar55 = (undefined2 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar65;
    bVar67 = false;
    pbVar21 = (byte *)((uint)pbVar21 & 0xffffff00);
    do {
      pbVar57 = pbVar57 + (-(uint)bVar67 - *(int *)pbVar32);
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),*pcVar15);
      *pcVar20 = *pcVar20 + *pcVar15;
      pbVar21 = (byte *)CONCAT31((int3)((uint)(pcVar20 +
                                              (pbVar62[0x2000001] < (byte)((uint)pcVar15 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar20 +
                                        (pbVar62[0x2000001] < (byte)((uint)pcVar15 >> 8)) + 0xda7d)
                                 | (byte)*puVar63) + 0x7d);
      pcVar15 = pcVar15 + -1;
      *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar15;
      while( true ) {
        uVar27 = (undefined3)((uint)puVar63 >> 8);
        cVar8 = (char)puVar63 + *(char *)((int)pbVar57 * 2 + 0xa0000e1);
        puVar63 = (uint *)CONCAT31(uVar27,cVar8);
        bVar67 = CARRY1((byte)pbVar21,(byte)*puVar63);
        uVar24 = (undefined3)((uint)pbVar21 >> 8);
        bVar26 = (byte)pbVar21 + (byte)*puVar63;
        pbVar21 = (byte *)CONCAT31(uVar24,bVar26);
        if ((POPCOUNT(bVar26) & 1U) != 0) break;
        *pbVar21 = *pbVar21 + bVar26;
        cVar33 = (char)pcVar15;
        pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar15 >> 8) | pbVar57[-0x65],cVar33));
        bVar9 = *pbVar21;
        *pbVar21 = *pbVar21 + bVar26;
        *(undefined2 *)((int)puVar55 + -4) = in_ES;
        if (CARRY1(bVar9,bVar26)) {
          *pbVar21 = *pbVar21 + bVar26;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | pbVar59[-0x1d],
                                              (char)pbVar32));
          *pbVar21 = *pbVar21 + bVar26;
          bVar67 = false;
          bVar26 = bVar26 | (byte)*puVar63;
          pcVar20 = (char *)CONCAT31(uVar24,bVar26);
          uVar65 = *(undefined2 *)((int)puVar55 + -4);
          puVar37 = (undefined4 *)puVar55;
          while( true ) {
            bVar9 = (byte)pcVar20;
            uVar24 = (undefined3)((uint)pcVar20 >> 8);
            if (bVar67 == (char)bVar26 < '\0') break;
            *pcVar20 = *pcVar20 + bVar9;
            bVar9 = bVar9 | (byte)*puVar63;
            puVar28 = (uint *)CONCAT31(uVar24,bVar9);
            *pbVar57 = *pbVar57 << 1 | (char)*pbVar57 < '\0';
            uVar19 = *puVar28;
            *(byte *)puVar28 = (byte)*puVar28 + bVar9;
            pbVar59 = pbVar59 + (-(uint)CARRY1((byte)uVar19,bVar9) - *puVar28);
            *puVar28 = *puVar28 << 1 | (uint)((int)*puVar28 < 0);
            while( true ) {
              uVar19 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63 + (byte)pcVar15;
              uVar66 = *(undefined2 *)puVar37;
              cVar8 = (char)puVar28 + 'o' + CARRY1((byte)uVar19,(byte)pcVar15);
              pcVar20 = (char *)CONCAT31((int3)((uint)puVar28 >> 8),cVar8);
              pcVar15 = (char *)0x20a0000;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *pcVar20 = *pcVar20 + cVar8;
              bVar26 = bRamfe140212;
              pcVar15 = (char *)0x0;
              *(undefined2 *)puVar37 = in_ES;
              uVar24 = (undefined3)((uint)(pcVar20 + -0x732b0000) >> 8);
              bVar9 = in(0);
              puVar28 = (uint *)CONCAT31(uVar24,bVar9);
              uVar19 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63;
              if (SCARRY1((byte)uVar19,'\0') != (char)(byte)*puVar63 < '\0') {
                *(byte *)puVar28 = (byte)*puVar28 + bVar9;
                bVar9 = bVar9 | (byte)*puVar63;
                puVar28 = (uint *)CONCAT31(uVar24,bVar9);
                if ((POPCOUNT(bVar9) & 1U) == 0) {
                  *(byte *)puVar28 = (byte)*puVar28 + bVar9;
                  pcVar15 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar26 | (byte)*puVar28) << 8);
                  puVar55 = (undefined2 *)((int)puVar37 + -4);
                  *(undefined2 *)((int)puVar37 + -4) = uVar66;
                  *(byte *)puVar28 = (byte)*puVar28 + bVar9;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar28 = (byte)*puVar28 + bVar9;
                puVar28 = (uint *)CONCAT31(uVar24,bVar9 | (byte)*puVar63);
              }
            }
            *(byte *)puVar63 = (byte)*puVar63;
            bVar67 = SCARRY1((char)puVar63,*pbVar57);
            bVar26 = (char)puVar63 + *pbVar57;
            puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),bVar26);
            puVar37 = (undefined4 *)((int)puVar37 + 4);
          }
          if (bVar67 == (char)bVar26 < '\0') {
            *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar15;
            pbVar21 = (byte *)((uint)pcVar20 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar20 = *pcVar20 + bVar9;
          pbVar21 = (byte *)CONCAT31(uVar24,(bVar9 | (byte)*puVar63) + 0x7d);
          pcVar15 = pcVar15 + -1;
          *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar15;
          puVar55 = (undefined2 *)puVar37;
        }
        else {
          *(byte *)puVar63 = (byte)*puVar63 + cVar33;
          puVar63 = (uint *)CONCAT31(uVar27,cVar8 + *(char *)((int)pbVar57 * 2 + 0xa0000e0));
          puVar55 = (undefined2 *)((int)puVar55 + -4);
        }
      }
    } while( true );
  }
  *pbVar57 = *pbVar57 + bVar26;
  bVar26 = bVar26 + 0x6f & *(byte *)CONCAT31(uVar24,bVar26 + 0x6f);
  *pbVar58 = *pbVar58 + (char)pbVar21;
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),(char)pbVar58 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar26;
  pcVar15 = (char *)CONCAT31(uVar24,bVar26 - (byte)*puVar63);
code_r0x00403b2c:
  bVar26 = (char)pcVar15 - *pcVar15;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar26);
  *pbVar22 = *pbVar22 + bVar26;
  *(byte **)pbVar22 = pbVar58 + *(int *)pbVar22;
  *pbVar22 = *pbVar22 + bVar26;
  bVar67 = CARRY1(*pbVar22,bVar26);
  *pbVar22 = *pbVar22 + bVar26;
  puVar29 = (undefined1 *)puVar37;
  pbVar57 = pbVar62;
  while( true ) {
    puVar37 = (undefined4 *)puVar29;
    *(byte **)pbVar22 = pbVar22 + (uint)bVar67 + *(int *)pbVar22;
    bVar9 = ((uint)pbVar22 & 0x1000) != 0;
    puVar63 = puVar63 + (uint)bVar68 * -2 + 1;
    pbVar22[(int)pbVar58] = pbVar22[(int)pbVar58] + (char)pbVar32;
    *pbVar22 = *pbVar22 + (char)pbVar22;
    *(byte **)pbVar57 = pbVar32 + *(int *)pbVar57;
    bVar26 = (byte)((uint)pbVar21 >> 8);
    cVar8 = (char)pbVar21;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar26 + *pbVar22,cVar8));
    pbVar22 = pbVar22 + (uint)CARRY1(bVar26,*pbVar22) + *(int *)pbVar22;
    *pbVar58 = *pbVar58 + cVar8;
    cVar8 = (char)pbVar32 - pbVar57[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar8);
    pbVar62 = pbVar57;
    if ((POPCOUNT(cVar8) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    bVar26 = (byte)pbVar22 | *pbVar32;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar26);
    if (bVar26 != 0) {
      pbVar59 = pbVar59 + -puVar63[9];
      *pbVar23 = *pbVar23 + bVar26;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar21 >> 8) | *pbVar58,(char)pbVar21));
      pbVar57 = pbVar57 + *(int *)pbVar23;
      pbVar23 = pbVar23 + *(int *)pbVar23;
      uVar24 = (undefined3)((uint)pbVar23 >> 8);
      bVar10 = (char)pbVar23 - *pbVar23;
      pbVar62 = (byte *)CONCAT31(uVar24,bVar10);
      bVar26 = *pbVar62;
      *pbVar62 = *pbVar62 + bVar10;
      pbVar23 = (byte *)CONCAT31(uVar24,bVar10 - CARRY1(bVar26,bVar10));
    }
    bVar26 = *pbVar23;
    *pbVar23 = *pbVar23 + (byte)pbVar23;
    iVar16 = *(int *)(pbVar59 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar26,(byte)pbVar23);
    pbVar62 = pbVar57 + (uint)bVar68 * -8 + 4;
    out(*(undefined4 *)pbVar57,(short)pbVar58);
    pbVar22 = (byte *)(((uint)pbVar23 >> 8) * 0x100);
    *pbVar58 = *pbVar58 + (byte)pbVar21;
    bVar26 = (char)pbVar58 - *pbVar32;
    pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar26);
    *pbVar32 = *pbVar32;
    *pbVar58 = *pbVar58 + (char)((uint)pbVar21 >> 8);
    *pbVar22 = *pbVar22;
    pcVar15 = (char *)(((uint)pbVar23 >> 8) * 0x200);
    *pcVar15 = *pcVar15 + (char)pbVar32;
    bVar67 = CARRY1(*pbVar21,bVar26);
    *pbVar21 = *pbVar21 + bVar26;
    puVar29 = (undefined1 *)((int)puVar37 + (iVar4 - iVar16));
    pbVar57 = pbVar62;
    if (bVar67) {
      *pbVar22 = *pbVar22;
      pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | *pbVar58);
      puVar52 = (undefined2 *)((int)puVar37 + (iVar4 - iVar16) + -4);
      puVar37 = (undefined4 *)((int)puVar37 + (iVar4 - iVar16) + -4);
      *puVar52 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar51 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar51 = uVar65;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar59 = pbVar59 + -*puVar28;
  puVar54 = (undefined1 *)((int)puVar55 + 4);
  do {
    bVar26 = (byte)puVar28;
    *(byte *)puVar28 = (byte)*puVar28 + bVar26;
    pbVar57 = pbVar57 + -*(int *)(pbVar59 + -0x1a);
    *(byte *)puVar28 = (byte)*puVar28 + bVar26;
    bVar26 = bVar26 | (byte)*puVar63;
    puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),bVar26);
    *(byte *)puVar28 = (byte)*puVar28 | bVar26;
    bVar26 = (byte)*puVar28;
    pbVar59 = (byte *)0x2700001;
    while (puVar55 = (undefined2 *)puVar54, (POPCOUNT(bVar26) & 1U) == 0) {
      do {
        *(byte *)puVar28 = (byte)*puVar28 + (byte)puVar28;
        bVar26 = (byte)puVar28 | (byte)*puVar63;
        puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),bVar26);
        puVar29 = (undefined1 *)puVar55;
        if ((POPCOUNT(bVar26) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
        uVar25 = CONCAT21((short)((uint)pcVar15 >> 0x10),(byte)((uint)pcVar15 >> 8) | bRamfe140212);
        puVar7 = puVar29;
        while( true ) {
          puVar56 = puVar7;
          pcVar15 = (char *)((uint)uVar25 << 8);
          puVar54 = puVar56 + -4;
          puVar55 = (undefined2 *)(puVar56 + -4);
          puVar29 = puVar56 + -4;
          *(undefined2 *)(puVar56 + -4) = in_ES;
          bVar11 = (byte)puVar28;
          *(byte *)puVar28 = (byte)*puVar28 & bVar11;
          bVar9 = *pbVar32;
          bVar13 = (byte)uVar25;
          bVar10 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar13;
          bVar26 = *pbVar32;
          if (!CARRY1(bVar9,bVar13)) break;
          *(byte *)puVar28 = (byte)*puVar28 + bVar11;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar28 = (byte)*puVar28 + bVar11;
          bVar11 = bVar11 | (byte)*puVar63;
          puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),bVar11);
          bVar67 = (POPCOUNT(bVar11) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar32 >> 8);
            uVar65 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar67) {
              *(byte *)puVar63 = (byte)*puVar63;
              pbVar32 = (byte *)CONCAT22(uVar65,CONCAT11(cVar8 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
            uVar66 = (undefined2)((uint)pcVar15 >> 0x10);
            bVar9 = (byte)((uint)pcVar15 >> 8) | (byte)*puVar28;
            uVar25 = CONCAT21(uVar66,bVar9);
            *puVar28 = *puVar28 & (uint)puVar28;
            *pbVar32 = *pbVar32 + bVar9;
            uVar24 = (undefined3)((uint)puVar28 >> 8);
            bVar26 = (char)puVar28 - bVar9;
            pcVar15 = (char *)CONCAT31(uVar24,bVar26);
            *pcVar15 = *pcVar15 + bVar26;
            bVar26 = bVar26 | (byte)*puVar63;
            puVar28 = (uint *)CONCAT31(uVar24,bVar26);
            puVar7 = puVar56 + -4;
            if ((POPCOUNT(bVar26) & 1U) != 0) break;
            *(byte *)puVar28 = (byte)*puVar28 + bVar26;
            pcVar15 = (char *)((uint)CONCAT21(uVar66,bVar9 | (byte)*puVar28) << 8);
            *puVar28 = *puVar28 - (int)puVar28;
            *(byte *)puVar63 = (byte)*puVar63;
            pbVar32 = (byte *)CONCAT22(uVar65,CONCAT11(cVar8 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
              uVar65 = (undefined2)((uint)puVar63 >> 0x10);
              cVar8 = (char)puVar63;
              bVar26 = (byte)((uint)puVar63 >> 8) | pbVar32[-0x17];
              puVar63 = (uint *)CONCAT22(uVar65,CONCAT11(bVar26,cVar8));
              *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar28 = (byte)*puVar28 + (byte)puVar28;
                uVar24 = (undefined3)((uint)puVar28 >> 8);
                bVar10 = (byte)puVar28 | (byte)*puVar63;
                pcVar20 = (char *)CONCAT31(uVar24,bVar10);
                bVar9 = pbVar32[-0x16];
                *pcVar20 = *pcVar20 + bVar10;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar9 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar20 = *pcVar20 + bVar10;
                pbVar58 = (byte *)CONCAT31(uVar24,bVar10 | (byte)*puVar63);
                while( true ) {
                  *pbVar58 = *pbVar58 + (byte)pbVar58;
                  uVar24 = (undefined3)((uint)pbVar58 >> 8);
                  bVar9 = (byte)pbVar58 | (byte)*puVar63;
                  puVar28 = (uint *)CONCAT31(uVar24,bVar9);
                  if ((POPCOUNT(bVar9) & 1U) != 0) break;
                  *(byte *)puVar28 = (byte)*puVar28 + bVar9;
                  bVar10 = pbVar57[-0x14];
                  *(byte *)puVar28 = (byte)*puVar28 + bVar9;
                  bVar9 = bVar9 | (byte)*puVar63;
                  pcVar20 = (char *)CONCAT31(uVar24,bVar9);
                  bVar11 = pbVar32[-0x15];
                  *pcVar20 = *pcVar20 + bVar9;
                  pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),
                                                    (byte)((uint)pcVar15 >> 8) | bVar10 |
                                                    pbVar57[-0x13]) << 8);
                  *pcVar20 = *pcVar20 + bVar9;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar11 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar20 = *pcVar20 + bVar9;
                  pbVar58 = (byte *)CONCAT31(uVar24,bVar9 | (byte)*puVar63);
                  do {
                    do {
                      bVar10 = (byte)pbVar58;
                      *pbVar58 = *pbVar58 + bVar10;
                      cVar31 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar58,
                                                          cVar31));
                      *pbVar58 = bVar10;
                      *pbVar58 = *pbVar58 + bVar10;
                      cVar33 = (char)((uint)pcVar15 >> 8) + *pbVar58;
                      pcVar15 = (char *)((uint)CONCAT21((short)((uint)pcVar15 >> 0x10),cVar33) << 8)
                      ;
                      uVar24 = (undefined3)((uint)pbVar58 >> 8);
                      bVar10 = bVar10 & *pbVar58;
                      pbVar58 = (byte *)CONCAT31(uVar24,bVar10);
                      bVar9 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar33;
                    } while (SCARRY1(bVar9,cVar33) == (char)*pbVar32 < '\0');
                    *pbVar58 = *pbVar58 + bVar10;
                    bVar10 = bVar10 | (byte)*puVar63;
                    pbVar58 = (byte *)CONCAT31(uVar24,bVar10);
                    if ((POPCOUNT(bVar10) & 1U) == 0) {
                      *pbVar58 = *pbVar58 + bVar10;
                      *pbVar58 = *pbVar58 + bVar10;
                      cVar8 = cVar8 - bVar26;
                      pbVar21 = (byte *)CONCAT31((int3)((uint)puVar63 >> 8),cVar8);
                      *pbVar58 = *pbVar58 + bVar10;
                      bRam0312382b = bRam0312382b | *pbVar21;
                      *(undefined2 *)(puVar56 + -8) = in_ES;
                      while( true ) {
                        bVar9 = (byte)pbVar58;
                        *pbVar58 = *pbVar58 + bVar9;
                        bRam0312382b = bRam0312382b | (pbVar57 + 0x21b0000)[(int)pbVar58];
                        uVar24 = (undefined3)((uint)pbVar58 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar21 = *pbVar21 + bRam0312382b;
                        pbVar58 = (byte *)CONCAT31(uVar24,bVar9 | *pbVar62);
                      }
                      *pbVar58 = *pbVar58 + bVar9;
                      bVar9 = bVar9 | *pbVar62;
                      pcVar15 = (char *)CONCAT31(uVar24,bVar9);
                      out(*(undefined4 *)pbVar62,(short)pbVar21);
                      *pcVar15 = *pcVar15 + bVar9;
                      uVar66 = CONCAT11(bVar26 | bRam6f0a002b,cVar8);
                      pcVar20 = (char *)CONCAT22(uVar65,uVar66);
                      *pcVar15 = *pcVar15 + bVar9;
                      *pcVar20 = *pcVar20 + bRam0312382b;
                      out(*(undefined4 *)(pbVar62 + (uint)bVar68 * -8 + 4),uVar66);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar31 + *pcVar15);
                  } while (SCARRY1(cVar31,*pcVar15) != (char)(cVar31 + *pcVar15) < '\0');
                }
                uVar19 = *puVar63;
                *(byte *)puVar63 = (byte)*puVar63;
              } while (SCARRY1((byte)uVar19,'\0') != (char)(byte)*puVar63 < '\0');
              *(byte *)puVar63 = (byte)*puVar63;
              *pcVar15 = *pcVar15 - (char)pbVar32;
              *(byte *)puVar28 = (byte)*puVar28 + bVar9;
              bVar9 = bVar9 | (byte)*puVar63;
              puVar28 = (uint *)CONCAT31(uVar24,bVar9);
              bVar67 = (POPCOUNT(bVar9) & 1U) == 0;
            } while (bVar67);
          }
        }
      } while (SCARRY1(bVar10,bVar13));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar15 >> 8);
    *pbVar57 = *pbVar57 - (char)pbVar32;
  } while( true );
}


