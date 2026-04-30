/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040327b
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : byte * .ctor(undefined4 settingsAquirer, byte * reportBuffer)
 * Local Vars  : uStack_34, pbStack_2c, auStack_24, uStack_20, uStack_1c, apbStack_14, pcStack_8, uVar1, pcVar2, uVar3, iVar4, uVar5, uVar6, puVar7, cVar8, cVar9, bVar10, bVar11, bVar12, bVar13, bVar14, in_EAX, pbVar15, piVar16, pcVar17, iVar18, ppbVar19, ppbVar20, uVar21, pcVar22, pbVar23, pbVar24, pbVar25, uVar26, uVar27, extraout_ECX, extraout_ECX_00, bVar28, uVar29, puVar30, puVar31, uVar32, cVar33, unaff_EBX, pbVar34, cVar35, bVar36, uVar37, puVar38, puVar39, piVar40, piVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, puVar57, unaff_EBP, pbVar58, unaff_ESI, pbVar59, puVar60, puVar61, pbVar62, unaff_EDI, puVar63, puVar64, in_ES, in_CS, uVar65, in_DS, uVar66, unaff_FS_OFFSET, in_GS_OFFSET, bVar67, in_AF, in_TF, in_IF, bVar68, bVar69, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar70, unaff_retaddr, settingsAquirer, reportBuffer
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

byte * __fastcall _ctor(undefined4 settingsAquirer,byte *reportBuffer)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined6 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined1 *puVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte *in_EAX;
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
  char *unaff_EBX;
  byte *pbVar34;
  undefined2 uVar37;
  undefined4 *puVar38;
  undefined2 *puVar39;
  int *piVar40;
  int *piVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined2 *puVar44;
  undefined4 *puVar45;
  undefined2 *puVar46;
  undefined1 *puVar47;
  undefined2 *puVar48;
  undefined2 *puVar49;
  undefined4 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  undefined2 *puVar54;
  undefined1 *puVar55;
  undefined2 *puVar56;
  undefined1 *puVar57;
  char *unaff_EBP;
  byte *pbVar58;
  byte *unaff_ESI;
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
  byte *unaff_retaddr;
  undefined4 uStack_34;
  byte *pbStack_2c;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte *apbStack_14 [3];
  char *pcStack_8;
  
  bVar68 = false;
                    /* .NET CLR Managed Code */
  bVar11 = *in_EAX;
  bVar10 = (byte)((uint)settingsAquirer >> 8);
  uVar65 = (undefined2)((uint)settingsAquirer >> 0x10);
  cVar33 = (char)settingsAquirer;
  bVar28 = bVar10 + *in_EAX;
  iVar18 = *(int *)in_EAX;
  *reportBuffer = *reportBuffer + cVar33;
  cVar9 = (char)(in_EAX + (uint)CARRY1(bVar10,bVar11) + iVar18);
  uVar26 = (undefined3)((uint)(in_EAX + (uint)CARRY1(bVar10,bVar11) + iVar18) >> 8);
  cVar8 = cVar9 + *unaff_EBX;
  pcVar17 = (char *)CONCAT31(uVar26,cVar8);
  if (SCARRY1(cVar9,*unaff_EBX) == cVar8 < '\0') {
    *(char **)reportBuffer = unaff_EBP + *(int *)reportBuffer;
    unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38],
                                          (char)unaff_EBX));
    *pcVar17 = *pcVar17 + cVar8;
    pbVar15 = (byte *)CONCAT31(uVar26,cVar8 + 'o');
  }
  else {
    *pcVar17 = *pcVar17 + cVar8;
    cVar8 = cVar8 + '*';
    pcVar17 = (char *)CONCAT31(uVar26,cVar8);
    *pcVar17 = *pcVar17 + cVar8;
    cVar35 = (char)reportBuffer;
    reportBuffer = (byte *)CONCAT22((short)((uint)reportBuffer >> 0x10),
                                    CONCAT11((char)((uint)reportBuffer >> 8) - *unaff_retaddr,cVar35
                                            ));
    bVar28 = bVar28 + *pcVar17;
    *pcVar17 = *pcVar17 + cVar8;
    unaff_EBP = (char *)(CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES) +
                        *(int *)((int)unaff_EDI + -0x5e));
    *pcVar17 = *pcVar17 + cVar8;
    cVar9 = *pcVar17;
    pbVar15 = (byte *)CONCAT31(uVar26,cVar8 - cVar9);
    *unaff_EBX = *unaff_EBX + cVar35;
    *(byte *)((int)pbVar15 * 2) = *(byte *)((int)pbVar15 * 2) ^ cVar8 - cVar9;
    unaff_ESI = unaff_retaddr;
  }
  pcVar17 = (char *)CONCAT22(uVar65,CONCAT11(bVar28,cVar33));
  bVar11 = *pbVar15;
  *pbVar15 = *pbVar15 + (byte)pbVar15;
  pbVar15 = pbVar15 + (uint)CARRY1(bVar11,(byte)pbVar15) + *(int *)pbVar15;
  *pcVar17 = *pcVar17 + (char)reportBuffer;
  pbVar62 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38],(char)unaff_EBX
                                     ));
  *pbVar15 = *pbVar15 + (char)pbVar15;
  piVar16 = (int *)(CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + 'o') + 0x28060000);
  puVar63 = unaff_EDI + 1;
  uVar66 = SUB42(reportBuffer,0);
  uVar1 = in(uVar66);
  *unaff_EDI = uVar1;
  *(char *)piVar16 = *(char *)piVar16 + (char)piVar16;
  bVar28 = bVar28 | bRam7b022a01;
  pbVar15 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar15 = *pbVar15 + (char)piVar16;
  iVar18 = *piVar16;
  *unaff_ESI = *unaff_ESI + (char)(char *)((int)piVar16 + iVar18);
  pcVar17 = (char *)((int)piVar16 + iVar18) + -0x387b020d;
  *pcVar17 = *pcVar17 + (char)pcVar17;
  cVar9 = (char)pcVar17 + 'o';
  pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar9);
  *pcVar17 = *pcVar17 + cVar9;
  iVar18 = (int)pcVar17 - *(int *)CONCAT22(uVar65,CONCAT11(bVar28,cVar33));
  uVar26 = (undefined3)((uint)iVar18 >> 8);
  cVar9 = (((byte)iVar18 | *unaff_ESI) - 0xe) + *pbVar62;
  pcVar17 = (char *)CONCAT31(uVar26,cVar9);
  pbVar15 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,uVar66);
  pcVar17[unaff_FS_OFFSET] = pcVar17[unaff_FS_OFFSET] + cVar9;
  pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_ES);
  pbVar23 = (byte *)CONCAT22(uVar65,CONCAT11(bVar28 + *(char *)((int)unaff_EDI + 0x6a),cVar33));
  *pcVar17 = *pcVar17 + cVar9;
  bVar10 = cVar9 - *reportBuffer;
  puVar30 = (uint *)CONCAT31(uVar26,bVar10);
  *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
  bVar11 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  bVar28 = (byte)((uint)reportBuffer >> 8);
  if (CARRY1(bVar11,bVar10)) goto code_r0x00403365;
  pbVar34 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar34 = *pbVar34 + bVar10;
  ppbVar20 = (byte **)(puVar30 + 0x1f421c00);
  cVar9 = (char)ppbVar20;
  if ((POPCOUNT((uint)ppbVar20 & 0xff) & 1U) != 0) {
    pbVar34 = (byte *)((int)puVar30 + 0x7d087002);
    bVar11 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar28;
    uVar26 = (undefined3)((uint)ppbVar20 >> 8);
    if ((POPCOUNT(*pbVar34) & 1U) == 0) {
      *(char *)ppbVar20 = (char)*ppbVar20 + cVar9;
      ppbVar19 = (byte **)CONCAT31(uVar26,cVar9 + 'o');
      goto code_r0x0040333c;
    }
    pbVar34 = (byte *)CONCAT31(uVar26,cVar9 + -2 + CARRY1(bVar11,bVar28));
    goto code_r0x00403375;
  }
  *(char *)ppbVar20 = (char)*ppbVar20 + cVar9;
  do {
    while( true ) {
      cVar9 = (char)ppbVar20 + 'o';
      piVar16 = (int *)CONCAT31((int3)((uint)ppbVar20 >> 8),cVar9);
      *pbVar15 = *pbVar15 + cVar9;
      *(undefined2 *)pbVar62 = in_ES;
      *pbVar23 = *pbVar23 + cVar9;
      *pbVar23 = *pbVar23 - (char)pbVar62;
      *(char *)piVar16 = (char)*piVar16 + cVar9;
      bVar11 = *(byte *)((int)puVar63 + -0x5e);
      *(char *)piVar16 = (char)*piVar16 + cVar9;
      iVar18 = *piVar16;
      *(char *)(in_GS_OFFSET + (int)piVar16) = *(char *)(in_GS_OFFSET + (int)piVar16) + cVar9;
      ppbVar20 = apbStack_14;
      ppbVar19 = apbStack_14;
      apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
      pbVar34 = apbStack_14[0];
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar23 >> 8) | bVar11) + (char)iVar18 +
                                          *reportBuffer,(char)pbVar23 - *reportBuffer));
      *(char *)piVar16 = (char)*piVar16 + cVar9;
      pbVar15 = pbVar15 + *piVar16;
      apbStack_14[0]._0_1_ = (char)in_ES;
      bVar10 = (byte)apbStack_14;
      apbStack_14[0]._1_3_ = SUB43(pbVar34,1);
      apbStack_14[0] = (byte *)CONCAT31(apbStack_14[0]._1_3_,(char)apbStack_14[0] + bVar10 * '\x03')
      ;
      *reportBuffer = *reportBuffer + bVar10;
      *unaff_EBP = *unaff_EBP - (char)pbVar62;
      bVar11 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar10;
      if (!CARRY1(bVar11,bVar10)) break;
      apbStack_14[0] = (byte *)((uint)apbStack_14[0]._1_3_ << 8);
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
    *reportBuffer = *reportBuffer - (char)((uint)pcVar17 >> 8);
    *reportBuffer = *reportBuffer + (char)pbVar23;
    pbVar15 = pbVar15 + 8;
    out(*(undefined4 *)pbVar34,uVar66);
    puVar63 = (uint *)((uint)puVar63 ^ *puVar30);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + (char)*puVar30,(char)pbVar23));
    unaff_EBP = pcStack_8;
code_r0x00403365:
    cVar9 = (char)puVar30;
    *(char *)puVar30 = (char)*puVar30 + cVar9;
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x38],(char)pbVar62));
    *(char *)puVar30 = (char)*puVar30 + cVar9;
    uVar26 = (undefined3)((uint)puVar30 >> 8);
    cVar9 = cVar9 + 'o' + *(char *)CONCAT31(uVar26,cVar9 + 'o');
    pbVar34 = (byte *)CONCAT31(uVar26,cVar9);
    bVar11 = *pbVar15;
    *pbVar15 = *pbVar15 + cVar9;
    pbVar59 = pbVar15;
    if (*pbVar15 == 0 || SCARRY1(bVar11,cVar9) != (char)*pbVar15 < '\0') goto code_r0x004033b0;
code_r0x00403375:
    bVar11 = (byte)pbVar34;
    *pbVar34 = *pbVar34 + bVar11;
    uVar26 = (undefined3)((uint)pbVar34 >> 8);
    bVar10 = bVar11 + 0x2d;
    ppbVar20 = (byte **)CONCAT31(uVar26,bVar10);
    *(byte **)(pbVar15 + (int)puVar63 * 8) =
         reportBuffer + (uint)(0xd2 < bVar11) + *(int *)(pbVar15 + (int)puVar63 * 8);
    pbVar34 = (byte *)segment(in_DS,(short)pbVar62 + (short)pbVar15);
    bVar11 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar10;
    apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
    pbVar58 = apbStack_14[0];
  } while (!CARRY1(bVar11,bVar10));
  *(byte *)ppbVar20 = (char)*ppbVar20 + bVar10;
  bVar67 = false;
  bVar10 = bVar10 | *(byte *)((int)ppbVar20 + 0x400003b);
  pbVar24 = (byte *)CONCAT31(uVar26,bVar10);
  if ('\0' < (char)bVar10) {
    *pbVar24 = *pbVar24 + bVar10;
    iVar18 = CONCAT31(uVar26,bVar10 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar10);
    iRam02060000 = iVar18;
    *(byte *)puVar63 = (byte)*puVar63 - (char)pbVar62;
    *pbVar15 = *pbVar15 + (char)iVar18;
    bVar10 = (char)iVar18 - 0x25;
    pbVar34 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),bVar10);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + *pbVar34,(char)pbVar23));
    bVar11 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar10;
    apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
    if (CARRY1(bVar11,bVar10)) goto code_r0x004033e7;
    pbVar24 = pbVar34 + 2;
    *pbVar24 = *pbVar24 + bVar28;
    pbVar59 = pbVar15;
    if ((POPCOUNT(*pbVar24) & 1U) != 0) goto _ctor;
code_r0x004033b0:
    *pbVar34 = *pbVar34 + (char)pbVar34;
    cVar9 = (char)pbVar34 + 'o';
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar9);
    *pbVar59 = *pbVar59 + cVar9;
    *(undefined2 *)pbVar62 = in_ES;
    *pbVar23 = *pbVar23 + cVar9;
    *reportBuffer = *reportBuffer - (char)((uint)pbVar34 >> 8);
    bVar67 = CARRY1(*reportBuffer,(byte)pbVar23);
    *reportBuffer = *reportBuffer + (byte)pbVar23;
    pbVar15 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,uVar66);
    pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar9);
  }
  pbVar59 = pbVar15 + (uint)bVar67 + *(int *)pbVar24;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 + *pbVar24);
  pbVar15 = (byte *)((int)piVar16 + (uint)CARRY1((byte)pbVar24,*pbVar24) + *piVar16);
  bVar11 = *pbVar15;
  bVar10 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar10 + CARRY1(bVar11,bVar10));
  do {
    *pbVar23 = *pbVar23 + (char)reportBuffer;
    reportBuffer[0xa0a0000] = reportBuffer[0xa0a0000] - (char)((uint)pbVar34 >> 8);
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    pbVar58 = uStack_20;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + *pbVar34,(char)pbVar23));
    *pbVar34 = *pbVar34 + (char)pbVar34;
    uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
    pbVar15 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,(short)reportBuffer);
    pbRam2a0a0000 = pbVar34;
code_r0x004033e7:
    reportBuffer = reportBuffer + 1;
    pbVar59 = pbVar15;
_ctor:
    uVar6 = uStack_1c._2_2_;
    iVar18 = CONCAT31((int3)((uint)pbVar34 >> 8),(char)pbVar34 + *pbVar62) + 0x6128;
    uStack_1c = (byte *)((uint)uStack_1c._2_2_ << 0x10);
    bVar10 = (char)iVar18 + *(char *)((int)puVar63 * 2 + 0x400003e);
    pbVar34 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),bVar10);
    cVar9 = (char)reportBuffer - *pbVar62;
    puVar30 = (uint *)CONCAT31((int3)((uint)reportBuffer >> 8),cVar9);
    *(byte *)puVar30 = (byte)*puVar30 ^ bVar10;
    *pbVar34 = *pbVar34 + (char)((uint)pbVar62 >> 8);
    *pbVar34 = *pbVar34 + bVar10;
    *pbVar23 = *pbVar23 + cVar9;
    bVar11 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar10;
    *(byte **)(pbVar62 + -0x41) = pbVar59 + (uint)CARRY1(bVar11,bVar10) + *(int *)(pbVar62 + -0x41);
    do {
      *pbVar34 = *pbVar34 + (byte)pbVar34;
      uVar26 = (undefined3)((uint)pbVar34 >> 8);
      bVar11 = (byte)pbVar34 | *pbVar59;
      uVar65 = (undefined2)((uint)pbVar62 >> 0x10);
      uVar32 = SUB41(pbVar62,0);
      cVar8 = (char)((uint)pbVar62 >> 8) + pbVar62[0x69];
      *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
      cVar9 = bVar11 + 0x7d;
      pcVar17 = (char *)CONCAT31(uVar26,cVar9);
      pbVar59[(int)pcVar17] = pbVar59[(int)pcVar17] + cVar9;
      cVar8 = cVar8 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar8,uVar32)) + 0x67);
      *pcVar17 = *pcVar17 + cVar9;
      pcVar17 = (char *)CONCAT31(uVar26,bVar11 - 6);
      puVar60 = (uint *)(pbVar59 + 4);
      out(*(undefined4 *)pbVar59,(short)puVar30);
      *pcVar17 = *pcVar17 + (bVar11 - 6);
      cVar8 = cVar8 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar8,uVar32)) + 0x6b);
      *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
      pcVar17 = (char *)CONCAT31(uVar26,bVar11 + 0x7d);
      pbVar15 = (byte *)((int)puVar60 + (int)pcVar17);
      *pbVar15 = *pbVar15 + bVar11 + 0x7d;
      cVar8 = cVar8 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar8,uVar32)) + 0x6a);
      pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar8,uVar32));
      puVar64 = puVar30;
      do {
        cVar9 = (char)pcVar17;
        *pcVar17 = *pcVar17 + cVar9;
        uVar26 = (undefined3)((uint)pcVar17 >> 8);
        bVar11 = cVar9 + 0x7d;
        pcVar22 = (char *)CONCAT31(uVar26,bVar11);
        *(byte *)((int)puVar60 + (int)pcVar22) = *(byte *)((int)puVar60 + (int)pcVar22) + bVar11;
        uVar29 = (undefined3)((uint)puVar64 >> 8);
        bVar10 = (char)puVar64 - *(byte *)((int)puVar64 + 0x457e02);
        puVar30 = (uint *)CONCAT31(uVar29,bVar10);
        pbVar58[0x6fe1411] = pbVar58[0x6fe1411] + bVar11;
        uVar21 = *puVar60;
        uVar5 = *puVar60;
        *(byte *)puVar60 = (byte)*puVar60 + bVar11;
        if (CARRY1((byte)uVar21,bVar11)) {
          *pcVar22 = *pcVar22 + bVar11;
          bVar11 = bVar11 | pcVar22[0x4000045];
          piVar16 = (int *)CONCAT31(uVar26,bVar11);
          if ((char)bVar11 < '\x01') {
            *(byte *)puVar30 = (byte)*puVar30 + bVar11;
            uStack_1c._2_2_ = uVar6;
            goto code_r0x004034a0;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar11;
          bVar11 = bVar11 + 0x6f;
          pcVar22 = (char *)CONCAT31(uVar26,bVar11);
          *pcVar22 = *pcVar22 + bVar11;
          pbVar58 = pbVar58 + -*puVar30;
          *pcVar22 = *pcVar22 + bVar11;
          *pbVar62 = *pbVar62 + bVar10;
          *(byte *)((int)pcVar22 * 2) = *(byte *)((int)pcVar22 * 2) ^ bVar11;
          in_AF = 9 < (bVar11 & 0xf) | in_AF;
          uVar21 = CONCAT31(uVar26,bVar11 + in_AF * '\x06') & 0xffffff0f;
          cVar9 = (char)uVar21;
          pcVar17 = (char *)CONCAT22((short)(uVar21 >> 0x10),
                                     CONCAT11((char)((uint)pcVar17 >> 8) + in_AF,cVar9));
          *pcVar17 = *pcVar17 + cVar9;
          cRam72110000 = cRam72110000 + bVar10;
          puVar56 = (undefined2 *)segment(in_ES,(short)auStack_24 + -2);
          *puVar56 = in_ES;
          pcVar17[0x1a] = pcVar17[0x1a] + (char)((uint)puVar64 >> 8);
          cVar9 = (char)pbVar23;
          *pbVar23 = *pbVar23 + cVar9;
          *puVar30 = (uint)(pbVar23 + *puVar30);
          apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
          cVar8 = cVar8 + pbVar62[0x70];
          *pbVar23 = *pbVar23 + cVar9;
          uVar26 = (undefined3)((uint)pbVar23 >> 8);
          bVar11 = cVar9 + 0xa2;
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar8,uVar32)) + 0x6f);
          pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar8,uVar32));
          *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
          bVar28 = cVar9 + 0x44;
          piVar16 = (int *)CONCAT31(uVar26,bVar28);
          *(byte *)puVar30 = ((byte)*puVar30 - bVar28) - (0x5d < bVar11);
          if ((POPCOUNT((byte)*puVar30) & 1U) != 0) {
            *(byte *)piVar16 = (char)*piVar16 + bVar28;
            *(byte *)piVar16 = (char)*piVar16 + bVar28;
            *(char *)piVar16 = (char)*piVar16 + cVar8;
            puVar30 = (uint *)CONCAT22((short)((uint)puVar64 >> 0x10),(ushort)bVar10);
            *(byte *)piVar16 = (char)*piVar16 + bVar28;
            pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                       CONCAT11((char)((uint)pbVar23 >> 8) + (char)*piVar16,cVar9));
            uStack_1c = pbVar62;
            goto code_r0x00403511;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar28;
          cVar9 = cVar9 + -0x1a;
          piVar16 = (int *)CONCAT31(uVar26,cVar9);
          uStack_1c = (byte *)CONCAT22(uVar6,in_ES);
          *puVar30 = (*puVar30 - (int)piVar16) - (uint)(0x5d < bVar28);
          if ((POPCOUNT(*puVar30 & 0xff) & 1U) != 0) {
            *(byte *)puVar30 = (byte)*puVar30 + cVar9;
            goto code_r0x004034f3;
          }
          *(char *)piVar16 = (char)*piVar16 + cVar9;
          goto code_r0x0040349e;
        }
        pcVar17 = pcVar22;
        puVar64 = puVar30;
      } while (SCARRY1((byte)uVar5,bVar11) == (char)(byte)*puVar60 < '\0');
      *pcVar22 = *pcVar22 + bVar11;
      piVar16 = (int *)CONCAT31(uVar26,cVar9 + -0x59);
      pbVar59 = (byte *)((int)puVar60 + (uint)(0xd5 < bVar11) + *piVar16);
      bVar28 = cVar9 + -0x59 + (char)*piVar16;
      pbVar34 = (byte *)CONCAT31(uVar26,bVar28);
      bVar11 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar28;
      *(byte **)pbVar34 = pbVar34 + (uint)CARRY1(bVar11,bVar28) + *(int *)pbVar34;
      bVar11 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar10;
    } while (CARRY1(bVar11,bVar10));
    *pbVar59 = *pbVar59 + bVar28;
    cVar9 = bVar10 - *pbVar62;
    reportBuffer = (byte *)CONCAT31(uVar29,cVar9);
    *reportBuffer = *reportBuffer ^ bVar28;
    *pbVar62 = *pbVar62 + cVar9;
    *pbVar34 = *pbVar34 + bVar28;
    *(char *)((int)pbVar34 * 2) = *(char *)((int)pbVar34 * 2) + cVar9;
  } while( true );
code_r0x0040349e:
  piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + -0x5e);
code_r0x004034a0:
  uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
  pbVar23[0x2a0a0000] = pbVar23[0x2a0a0000] - (char)pbVar23;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((char)((uint)pbVar23 >> 8) + (char)*piVar16,(char)pbVar23));
  bVar11 = (byte)piVar16;
  *(byte *)piVar16 = (char)*piVar16 + bVar11;
  uStack_1c = (byte *)CONCAT22(uStack_1c._2_2_,in_ES);
  puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),
                             (char)puVar30 - *(byte *)((int)puVar30 + 0x467e02));
  pbVar58[0x6fe1411] = pbVar58[0x6fe1411] + bVar11;
  uVar21 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar11;
  if (!CARRY1((byte)uVar21,bVar11)) {
    pbVar15 = (byte *)((int)puVar63 + (int)pbVar58 * 2);
    *pbVar15 = *pbVar15 + bVar11;
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar11;
  uVar26 = (undefined3)((uint)piVar16 >> 8);
  bVar11 = bVar11 | *(byte *)((int)piVar16 + 0x4000046);
  piVar16 = (int *)CONCAT31(uVar26,bVar11);
  if ((char)bVar11 < '\x01') {
code_r0x00403511:
    pbVar58 = uStack_1c;
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    uStack_1c = (byte *)CONCAT22(uStack_1c._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar11;
  pbVar15 = (byte *)CONCAT31(uVar26,bVar11 + 0x6f);
  *pbVar15 = *pbVar15 + bVar11 + 0x6f;
  pbVar58 = pbVar58 + -*puVar30;
  do {
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_DS);
    bVar11 = *(byte *)((int)puVar63 + 0x17);
    *pbVar15 = *pbVar15 + (byte)pbVar15;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + bVar11 | (byte)*puVar30,
                                        (char)pbVar23));
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    bVar11 = (byte)pbVar15 | (byte)*puVar30;
    bVar10 = bVar11 - *(byte *)CONCAT31(uVar26,bVar11);
    puVar60 = (uint *)((int)puVar60 +
                      (uint)(bVar11 < *(byte *)CONCAT31(uVar26,bVar11)) +
                      *(int *)CONCAT31(uVar26,bVar10));
    pbVar15 = (byte *)CONCAT31(uVar26,bVar10);
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    *(byte *)puVar60 = (byte)*puVar60 + (char)puVar30;
    bVar11 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar10;
    *puVar30 = (uint)(pbVar15 + (uint)CARRY1(bVar11,bVar10) + *puVar30);
    if ((POPCOUNT(*puVar30 & 0xff) & 1U) != 0) {
      *(byte *)puVar60 = (byte)*puVar60 + 1;
      puVar64 = puVar60;
      goto code_r0x00403529;
    }
    *pbVar15 = *pbVar15 + bVar10;
    piVar16 = (int *)CONCAT31(uVar26,bVar10 + 0x6f);
code_r0x004034f3:
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    *(byte *)puVar60 = (byte)*puVar60 + (char)piVar16;
    pbVar58 = pbVar58 + 1;
    pcVar17 = (char *)((int)((uint)piVar16 | 8) + *(int *)((uint)piVar16 | 8));
    *pcVar17 = *pcVar17 + (char)pcVar17;
    piVar16 = (int *)(pcVar17 + 0x53000000);
    bVar11 = (byte)piVar16;
    *(byte *)piVar16 = (char)*piVar16 + bVar11;
    *pbVar62 = *pbVar62 + (char)puVar30;
    *(byte *)piVar16 = (char)*piVar16 + bVar11;
    *pbVar58 = *pbVar58 - (char)pbVar62;
    uVar21 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    if (CARRY1((byte)uVar21,bVar11)) goto code_r0x0040349e;
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    pcVar17[0x5300006f] = pcVar17[0x5300006f] + (char)((uint)puVar30 >> 8);
    pcVar17 = pcVar17 + 0x53000001;
    bVar10 = (byte)pcVar17;
    bRam7e060000 = bVar11;
    *pcVar17 = *pcVar17 + bVar10;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar10 + 0x2d);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar30 + (uint)(0xd2 < bVar10) + puVar60[(int)puVar63 * 2]);
    puVar64 = puVar60;
code_r0x00403529:
    puVar60 = puVar64 + 1;
    out(*puVar64,(short)puVar30);
    bVar11 = *pbVar15;
    bVar10 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar10;
  } while (!CARRY1(bVar11,bVar10));
  *pbVar15 = *pbVar15 + bVar10;
  uVar26 = (undefined3)((uint)pbVar15 >> 8);
  bVar10 = bVar10 | pbVar15[0x4000040];
  pcVar17 = (char *)CONCAT31(uVar26,bVar10);
  uVar65 = in_ES;
  if ((char)bVar10 < '\x01') goto code_r0x00403579;
  *pcVar17 = *pcVar17 + bVar10;
  cVar9 = bVar10 + 10;
  pcVar17 = (char *)CONCAT31(uVar26,cVar9);
  puVar64 = puVar60;
  if (cVar9 == '\0' || SCARRY1(bVar10,'\n') != cVar9 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar11 = (byte)pcVar17;
  *pcVar17 = *pcVar17 + bVar11;
  piVar16 = (int *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar11 + 0x2d);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar30 + (uint)(0xd2 < bVar11) + puVar60[(int)puVar63 * 2]);
  pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
code_r0x00403549:
  uVar21 = *puVar60;
  bVar11 = (byte)piVar16;
  *(byte *)puVar60 = (byte)*puVar60 + bVar11;
  if (!CARRY1((byte)uVar21,bVar11)) goto code_r0x004034f3;
  *(byte *)piVar16 = (char)*piVar16 + bVar11;
  uVar26 = (undefined3)((uint)piVar16 >> 8);
  bVar11 = bVar11 | *(byte *)((int)piVar16 + 0x4000041);
  if ((char)bVar11 < '\x01') {
    *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar23;
    *(byte *)puVar30 = (byte)*puVar30;
    pcVar17 = (char *)CONCAT31(uVar26,bVar11 + 0x7e);
    puVar30 = (uint *)((int)puVar30 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
  piVar16 = (int *)CONCAT31(uVar26,bVar11 + 0xb);
  puVar64 = puVar60;
code_r0x0040355b:
  pbVar58 = pbVar58 + -*(int *)((int)puVar64 + 2);
  *pbVar58 = *pbVar58 - (char)pbVar62;
  uVar21 = *puVar64;
  bVar11 = (byte)piVar16;
  *(byte *)puVar64 = (byte)*puVar64 + bVar11;
  if (CARRY1((byte)uVar21,bVar11)) goto code_r0x00403548;
code_r0x00403565:
  piVar16 = piVar16 + 0x1ec09c00;
  pbVar15 = (byte *)((int)puVar63 + (int)pbVar58 * 2);
  *pbVar15 = *pbVar15 + (char)piVar16;
  *(byte *)puVar64 = (byte)*puVar64 + (char)piVar16 + (char)*piVar16;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar30);
  pcVar17 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar23 = *pbVar23 + (char)pcVar17;
  *(byte *)puVar30 = (byte)*puVar30 - (char)((uint)pcVar17 >> 8);
  puVar64 = puVar60;
code_r0x00403580:
  *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar23;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar30);
  bVar11 = (byte)pcVar17;
  puVar30 = (uint *)((int)puVar30 + 1);
  bRam7e060000 = bVar11;
  *pcVar17 = *pcVar17 + bVar11;
  uVar26 = (undefined3)((uint)pcVar17 >> 8);
  bVar10 = bVar11 + 0x2d;
  pcVar17 = (char *)CONCAT31(uVar26,bVar10);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar30 + (uint)(0xd2 < bVar11) + puVar60[(int)puVar63 * 2]);
  pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
  uVar21 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar10;
  if (!CARRY1((byte)uVar21,bVar10)) {
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar64 + 0x45),
                                        (char)pbVar62));
    goto code_r0x0040353f;
  }
  *pcVar17 = *pcVar17 + bVar10;
  bVar10 = bVar10 | pcVar17[0x4000042];
  pcVar17 = (char *)CONCAT31(uVar26,bVar10);
  if ('\0' < (char)bVar10) {
code_r0x004035a1:
    bVar10 = (byte)pcVar17;
    *pcVar17 = *pcVar17 + bVar10;
    uVar26 = (undefined3)((uint)pcVar17 >> 8);
    bVar11 = bVar10 + 10;
    if (bVar11 == 0 || SCARRY1(bVar10,'\n') != (char)bVar11 < '\0') {
      pcVar17 = (char *)CONCAT31(uVar26,bVar10 + 8 + (0xf5 < bVar10));
code_r0x004035e5:
      bVar10 = (byte)pcVar17;
      *pcVar17 = *pcVar17 + bVar10;
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      bVar11 = bVar10 + 0x2d;
      pcVar17 = (char *)CONCAT31(uVar26,bVar11);
      puVar60[(int)puVar63 * 2] =
           (uint)((int)puVar30 + (uint)(0xd2 < bVar10) + puVar60[(int)puVar63 * 2]);
      uVar21 = *puVar60;
      *(byte *)puVar60 = (byte)*puVar60 + bVar11;
      if (CARRY1((byte)uVar21,bVar11)) {
        *pcVar17 = *pcVar17 + bVar11;
        bVar11 = bVar11 | pcVar17[0x4000044];
        pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
        if ('\0' < (char)bVar11) {
          *pbVar15 = *pbVar15 + bVar11;
          pbVar15 = (byte *)(CONCAT31(uVar26,bVar11 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar11));
          pbRam2a060000 = pbVar15;
          *pbVar62 = *pbVar62 + (char)pbVar62;
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
      puVar64 = puVar60;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
    bVar10 = bVar10 + 0x37;
    piVar16 = (int *)CONCAT31(uVar26,bVar10);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar30 + (uint)(0xd2 < bVar11) + puVar60[(int)puVar63 * 2]);
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
    uVar21 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar10;
    puVar64 = puVar60;
    if (!CARRY1((byte)uVar21,bVar10)) goto code_r0x0040355b;
    *(byte *)piVar16 = (char)*piVar16 + bVar10;
    bVar10 = bVar10 | *(byte *)((int)piVar16 + 0x4000043);
    pbVar15 = (byte *)CONCAT31(uVar26,bVar10);
    if ((char)bVar10 < '\x01') {
      *pbVar15 = *pbVar15 + bVar10;
      pbVar58 = pbVar58 + -*(int *)((int)puVar63 + -0x5d);
      *pbVar15 = *pbVar15 + bVar10;
      uStack_34 = (undefined4 *)((uint)uStack_34._2_2_ << 0x10);
      piVar16 = (int *)CONCAT31(uVar26,bVar10 - *pbVar15);
      puVar60 = (uint *)((int)puVar60 + (-(uint)(bVar10 < *pbVar15) - *piVar16));
      pbVar15 = (byte *)CONCAT31(uVar26,(bVar10 - *pbVar15) + (char)*piVar16);
      pbStack_2c = (byte *)0x17000000;
      puVar64 = puVar63;
code_r0x00403615:
      bVar11 = *pbVar15;
      bVar10 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar10;
      *puVar30 = (uint)(pbVar15 + (uint)CARRY1(bVar11,bVar10) + *puVar30);
      puVar63 = puVar64;
      if ((POPCOUNT(*puVar30 & 0xff) & 1U) == 0) {
        *pbVar15 = *pbVar15 + bVar10;
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar10 + 0x28);
        puVar63 = puVar64 + 1;
        uVar21 = in((short)puVar30);
        *puVar64 = uVar21;
        *pcVar17 = *pcVar17 + bVar10 + 0x28;
        pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar23 >> 8) | pbVar62[(int)pbVar23],
                                            (char)pbVar23));
        pcVar17[0x28] = pcVar17[0x28] + (char)((uint)puVar30 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar15 = *pbVar15 + bVar10;
    uVar21 = CONCAT31(uVar26,bVar10 + 0xb);
    piVar16 = (int *)(uVar21 - *puVar60);
    if (uVar21 < *puVar60) {
      cVar9 = (char)piVar16;
      *(char *)piVar16 = (char)*piVar16 + cVar9;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      cVar8 = (char)pbVar62;
      bVar11 = (byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar30 + 2);
      *pbVar58 = *pbVar58 - cVar8;
      *(byte *)puVar60 = (byte)*puVar60 + cVar9;
      uStack_34 = (undefined4 *)CONCAT22(uStack_34._2_2_,in_ES);
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar11 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar11,
                                                  cVar8)) + 0x38),cVar8));
      *(char *)piVar16 = (char)*piVar16 + cVar9;
      pcVar17 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar9 + 'o');
      *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar23;
      *pcVar17 = *pcVar17 - cVar8;
      *pcVar17 = *pcVar17 + cVar9 + 'o';
      puVar63 = (uint *)((int)puVar63 - puVar60[0x11]);
      goto code_r0x004035e5;
    }
    puVar64 = puVar60 + 1;
    out(*puVar60,(short)puVar30);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar10) goto code_r0x004035e5;
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
  cVar9 = (char)pcVar17;
  *pcVar17 = *pcVar17 + cVar9;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((byte)((uint)pbVar23 >> 8) | (byte)*puVar30,(char)pbVar23));
  pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x3e],(char)pbVar62));
  *pcVar17 = *pcVar17 + cVar9;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar9 + '(');
  cVar9 = (char)((uint)puVar30 >> 8);
  *(byte *)((int)puVar30 + 0x21) = *(byte *)((int)puVar30 + 0x21) + cVar9;
  pbVar34 = pbVar15 + 2;
  *pbVar34 = *pbVar34 + cVar9;
  bVar11 = *pbVar34;
code_r0x00403643:
  cVar9 = (char)pbVar15;
  if ((POPCOUNT(bVar11) & 1U) == 0) {
    *pbVar15 = *pbVar15 + cVar9;
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    cVar8 = cVar9 + '(';
    pcVar17 = (char *)CONCAT31(uVar26,cVar8);
    in_AF = ((uint)pbVar15 & 0x1000) != 0;
    *pcVar17 = *pcVar17 + cVar8;
    puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),(byte)puVar30 | (byte)*puVar60);
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar60 + 0x3f),
                                        (char)pbVar62));
    *pcVar17 = *pcVar17 + cVar8;
    pbVar15 = (byte *)CONCAT31(uVar26,cVar9 + 'M');
    puVar30 = (uint *)((uint)puVar30 | *puVar30);
    *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
code_r0x00403659:
    puVar64 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
    bVar11 = (byte)pbVar15;
    *(byte *)puVar63 = bVar11;
    *pbVar15 = *pbVar15 + bVar11;
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    bVar11 = bVar11 | (byte)*puVar30;
    pcVar17 = (char *)CONCAT31(uVar26,bVar11);
    puVar63 = puVar64;
    if ((POPCOUNT(bVar11) & 1U) != 0) goto code_r0x0040369e;
    *pcVar17 = *pcVar17 + bVar11;
    bVar11 = bVar11 + 2;
    *pbVar58 = *pbVar58 - (char)pbVar62;
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    puVar61 = puVar60 + (uint)bVar68 * -2 + 1;
    out(*puVar60,(short)puVar30);
    puVar63 = (uint *)((int)puVar64 + (uint)bVar68 * -2 + 1);
    puVar60 = (uint *)((int)puVar61 + (uint)bVar68 * -2 + 1);
    *(byte *)puVar64 = (byte)*puVar61;
    *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
    cVar8 = (char)((uint)pbVar23 >> 8);
    pbVar62[-0x21f60000] = pbVar62[-0x21f60000] - cVar8;
    cVar9 = (bVar11 | (byte)*puVar60) - 6;
    piVar16 = (int *)CONCAT31(uVar26,cVar9);
    pcVar17 = (char *)((int)piVar16 * 2 + 0x2adc0a00);
    *pcVar17 = *pcVar17 - cVar8;
    *piVar16 = (int)(*piVar16 + (int)puVar30);
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    bVar11 = cVar9 + (char)*piVar16;
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    uVar21 = CONCAT31(uVar26,bVar11 + in_AF * '\x06') & 0xffffff0f;
    pbVar15 = (byte *)CONCAT22((short)(uVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) + in_AF,(char)uVar21));
    pbVar34 = pbVar23;
  }
  else {
    *(byte *)puVar30 = (byte)*puVar30 + cVar9;
    *(byte *)puVar63 = (byte)*puVar63 + (char)((uint)puVar30 >> 8);
    pbVar34 = pbVar23;
  }
  *(byte *)puVar60 = (byte)*puVar60 + (char)((uint)pbVar15 >> 8);
  *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar34;
  bVar10 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  bVar11 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  pbVar23 = pbVar34;
  pbVar58 = pbStack_2c;
  if (!CARRY1(bVar11,bVar10)) goto code_r0x004036a6;
  *pbVar15 = *pbVar15 + bVar10;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar10 | pbVar15[0x400003f]);
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),
                             (char)pbVar34 - *(byte *)((int)puVar30 + 0x5040302));
  *(char *)((int)pbVar15 * 2) = *(char *)((int)pbVar15 * 2) - (char)((uint)pbVar34 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(char)pbVar23 + (byte)*puVar60);
    pbVar15 = (byte *)(CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + '%') + 0x1ebd9f3);
    uStack_34 = (undefined4 *)CONCAT22(uStack_34._2_2_,in_ES);
    bVar11 = (byte)pbVar15;
    bVar67 = CARRY1(*pbVar15,bVar11);
    *pbVar15 = *pbVar15 + bVar11;
    puVar38 = uStack_34 + -1;
    *(undefined2 *)(uStack_34 + -1) = in_ES;
    cVar9 = (char)puVar30;
    if (bVar67) {
      *pbVar15 = *pbVar15 + bVar11;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      bVar28 = (byte)((uint)pbVar62 >> 8) | pbVar58[0x47];
      pcVar17 = (char *)CONCAT22(uVar66,CONCAT11(bVar28,(char)pbVar62));
      *pbVar15 = *pbVar15 + bVar11;
      uVar26 = (undefined3)((uint)pbVar15 >> 8);
      bVar11 = bVar11 + 0x2a;
      *pcVar17 = *pcVar17 + cVar9;
      pbVar15 = (byte *)((int)CONCAT31(uVar26,bVar11) * 2);
      *pbVar15 = *pbVar15 ^ bVar11;
      bVar11 = bVar11 ^ *(byte *)CONCAT31(uVar26,bVar11);
      pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
      bVar10 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar11;
      *pbVar15 = (*pbVar15 - bVar11) - CARRY1(bVar10,bVar11);
      *pbVar23 = *pbVar23 + cVar9;
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28 + pcVar17[0x38],(char)pbVar62));
      *pbVar15 = *pbVar15 + bVar11;
      cVar8 = bVar11 + 2;
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar70 = (*pcVar2)();
        pbVar15 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar26,cVar8) = *(char *)CONCAT31(uVar26,cVar8) + cVar8;
      bVar11 = bVar11 + 0x71;
      pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
      uVar65 = *(undefined2 *)(uStack_34 + -1);
      *pbVar15 = *pbVar15 + bVar11;
      iVar18 = (int)pbVar23 - *puVar30;
      pbVar23 = (byte *)CONCAT22((short)((uint)iVar18 >> 0x10),
                                 CONCAT11((char)((uint)iVar18 >> 8) + *pbVar15,(char)iVar18));
      pbVar58 = (byte *)*uStack_34;
      bVar67 = CARRY1(*pbVar15,bVar11);
      *pbVar15 = *pbVar15 + bVar11;
      *(undefined2 *)uStack_34 = in_ES;
      *(undefined2 *)(uStack_34 + -1) = in_ES;
    }
    bVar11 = (byte)pbVar15;
    uVar26 = (undefined3)((uint)pbVar15 >> 8);
    if (bVar67) break;
    *(byte *)puVar30 = (byte)*puVar30 + (byte)pbVar23;
    *(byte *)((int)puVar30 + (int)pbVar58) = *(byte *)((int)puVar30 + (int)pbVar58) + bVar11;
    pcVar17 = (char *)CONCAT31(uVar26,(byte)*puVar30);
code_r0x0040369e:
    pbVar15 = (byte *)(pcVar17 + *(int *)(pcVar17 + 0x6c28));
  }
  *pbVar15 = *pbVar15 + bVar11;
  uVar27 = (uint3)((uint)pbVar23 >> 8);
  pbVar34 = (byte *)CONCAT31(uVar27,(byte)pbVar23 | *pbVar62);
  uVar65 = *(undefined2 *)uStack_34;
  puVar38 = uStack_34 + 1;
  puVar64 = puVar60 + (uint)bVar68 * -2 + 1;
  out(*puVar60,(short)puVar30);
  puVar63 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
  *pbVar15 = *pbVar15 + bVar11;
  bVar11 = bVar11 | (byte)*puVar63;
  pbVar15 = (byte *)CONCAT31(uVar26,bVar11);
  *(byte *)(puVar63 + 0x1bc28000) = (byte)puVar63[0x1bc28000] - (char)((uint)pbVar23 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar11);
  *(undefined2 *)uStack_34 = pbStack_2c._0_2_;
  cVar8 = (char)pbVar62;
  cVar33 = cVar8 - (byte)*puVar30;
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar33);
  if (cVar33 != '\0' && (char)(byte)*puVar30 <= cVar8) {
    *pbVar15 = *pbVar15 + bVar11;
    iVar18 = CONCAT31(uVar26,bVar11 + 0x2a);
    puVar60 = (uint *)((int)puVar64 + 1);
    cVar8 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + -0x7b);
    uVar70 = CONCAT44(CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(cVar8,cVar9)),iVar18);
    in_ES = *(undefined2 *)uStack_34;
    pcVar17 = (char *)(iVar18 + 0x6f);
    *pcVar17 = *pcVar17 + cVar8;
    pbVar34 = (byte *)((uint)uVar27 << 8);
    do {
      piVar16 = (int *)((ulonglong)uVar70 >> 0x20);
      pcVar17 = (char *)uVar70;
      *(char *)piVar16 = (char)*piVar16;
      if ((char)*piVar16 == '\0') {
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        pbStack_2c._0_2_ = in_ES;
_ctor:
        puVar30 = (uint *)((ulonglong)uVar70 >> 0x20);
        pbVar34 = (byte *)((uint)CONCAT21((short)((uint)pbVar34 >> 0x10),
                                          (char)((uint)pbVar34 >> 8) + *(char *)uVar70) << 8);
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        *(byte *)puVar30 = (byte)*puVar30;
        uVar26 = (undefined3)((ulonglong)uVar70 >> 8);
        bVar10 = (char)uVar70 - *(char *)uVar70;
        pbVar15 = (byte *)CONCAT31(uVar26,bVar10);
        bVar11 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar10;
        puVar64 = (uint *)((int)puVar60 + (uint)CARRY1(bVar11,bVar10) + *(int *)pbVar15);
        pbVar15 = (byte *)CONCAT31(uVar26,bVar10);
        uStack_34 = puVar38;
        break;
      }
      *pcVar17 = *pcVar17 + (char)uVar70;
      *piVar16 = (int)(pbVar58 + *piVar16);
      puVar60 = (uint *)((int)puVar60 + 1);
      uVar70 = CONCAT44(CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar70 >> 0x28) +
                                          *(char *)((int)piVar16 + -0x33),
                                          (char)((ulonglong)uVar70 >> 0x20))),pcVar17);
      in_ES = *(undefined2 *)puVar38;
      puVar38 = (undefined4 *)((int)puVar38 + 4);
      pbVar15 = pbVar34;
code_r0x0040371e:
      puVar30 = (uint *)((ulonglong)uVar70 >> 0x20);
      pbVar23 = (byte *)uVar70;
      bVar10 = (byte)((ulonglong)uVar70 >> 0x28);
      pbVar23[0x6f] = pbVar23[0x6f] + bVar10;
      pbVar34 = (byte *)((uint)pbVar15 & 0xffffff00);
      *(char *)puVar30 = (char)*puVar30;
      bVar11 = (byte)uVar70;
      if ((char)*puVar30 != '\0') {
        *pbVar23 = *pbVar23 + bVar11;
        uVar21 = *puVar30;
        *puVar30 = (uint)(pbVar58 + *puVar30);
        piVar40 = (int *)((int)puVar38 + -4);
        *(uint **)((int)puVar38 + -4) = puVar60;
        if (CARRY4(uVar21,(uint)pbVar58)) {
          *pbVar23 = *pbVar23 + bVar11;
          *(undefined2 *)((int)puVar38 + -8) = in_ES;
          puVar64 = puVar30 + 0x1d028000;
          uVar21 = *puVar64;
          *(byte *)puVar64 = (byte)*puVar64 - bVar10;
          *(uint *)pbVar23 = (*(int *)pbVar23 - (int)pbVar23) - (uint)((byte)uVar21 < bVar10);
          *(byte *)puVar30 = (char)*puVar30 + bVar11;
          *pbVar58 = *pbVar58;
          uVar70 = CONCAT44(puVar30,CONCAT31((int3)((ulonglong)uVar70 >> 8),bVar11 + 0x2a));
          puVar39 = (undefined2 *)((int)puVar38 + -0xc);
          puVar38 = (undefined4 *)((int)puVar38 + -0xc);
          *puVar39 = in_DS;
          pbStack_2c._0_2_ = in_ES;
          goto _ctor;
        }
        bVar67 = false;
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pbVar23);
        goto code_r0x004037a7;
      }
      bVar10 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar11;
      *(uint *)pbVar23 = (*(int *)pbVar23 - (int)pbVar23) - (uint)CARRY1(bVar10,bVar11);
      bVar11 = *pbVar34;
      bVar10 = (byte)((ulonglong)uVar70 >> 0x20);
      *pbVar34 = *pbVar34 + bVar10;
      if (CARRY1(bVar11,bVar10)) goto code_r0x0040375a;
    } while( true );
  }
  uVar70 = CONCAT44(puVar30,pbVar15);
  puVar60 = puVar64 + (uint)bVar68 * -2 + 1;
  out(*puVar64,(short)puVar30);
  bVar10 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  *pbVar34 = *pbVar34 + (char)pbVar62;
  bVar11 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  *(byte **)(pbVar62 + -0x49) =
       (byte *)((int)puVar60 + (uint)CARRY1(bVar11,bVar10) + *(int *)(pbVar62 + -0x49));
  puVar38 = uStack_34;
  in_ES = pbStack_2c._0_2_;
code_r0x0040375a:
  pbVar15 = (byte *)uVar70;
  *pbVar15 = *pbVar15 + (char)uVar70;
  bVar67 = CARRY1((byte)((uint)pbVar34 >> 8),*pbVar15);
  *(undefined2 *)((int)puVar38 + -4) = uVar65;
  iVar18 = CONCAT31(0x1f0a00,bVar67 + 'o') + *(int *)(pbVar62 + (int)pbVar58) +
           (uint)(0x90 < bVar67) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar70 >> 0x20);
  pcVar22 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + -0x66) | *puVar63);
  bVar11 = *(byte *)((int)puVar63 + -0x46);
  pcVar17 = (char *)CONCAT22(0xd0a,(ushort)bVar11 << 8);
  *pcVar22 = *pcVar22 + (char)pcVar22;
  bVar10 = (byte)((ulonglong)uVar70 >> 0x20);
  puVar31 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar62[(int)pbVar58],bVar10));
  *pcVar17 = *pcVar17 + (char)pcVar22;
  *pbVar58 = *pbVar58 - bVar11;
  *puVar31 = *puVar31;
  pbVar15 = (byte *)(((uint)pcVar22 | 8) + 0x4490f9d8);
  bVar11 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar11;
  uVar21 = *puVar60;
  *(uint *)((int)puVar60 + (int)pbVar15) = *(uint *)((int)puVar60 + (int)pbVar15) ^ (uint)pcVar17;
  *pbVar15 = *pbVar15 | bVar11;
  piVar40 = (int *)0x2609fffc;
  bVar67 = false;
  uRam2609fffc = in_ES;
  *pbVar15 = *pbVar15 | bVar11;
  uVar70 = CONCAT44(CONCAT31((int3)((uint)puVar31 >> 8),bVar10 | (byte)uVar21),pbVar15);
code_r0x004037a7:
  while( true ) {
    pbVar15 = (byte *)((ulonglong)uVar70 >> 0x20);
    uVar65 = (undefined2)((ulonglong)uVar70 >> 0x20);
    out(*puVar60,uVar65);
    out(puVar60[(uint)bVar68 * -2 + 1],uVar65);
    puVar30 = (uint *)((int)puVar63 + (int)pbVar15);
    uVar21 = *puVar30;
    uVar5 = (uint)uVar70 + *puVar30;
    *puVar30 = uVar5 + bVar67;
    iVar18 = *piVar40 + *(int *)(pcVar17 + (int)pbVar15) +
             (uint)(CARRY4(uVar21,(uint)uVar70) || CARRY4(uVar5,(uint)bVar67));
    cVar9 = (char)iVar18 + '\t';
    pbVar23 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),cVar9);
    pcVar22 = (char *)((uint)bVar68 * -8 + 0x260a0004);
    out(uRam260a0000,uVar65);
    uVar65 = (undefined2)piVar40[1];
    *pbVar23 = *pbVar23 + cVar9;
    bVar10 = (byte)((uint)pcVar17 >> 8) | *pbVar15;
    *(undefined2 *)(piVar40 + 1) = in_DS;
    bVar11 = *pbVar23;
    pbVar23 = pbVar23 + (uint)CARRY1(bVar10,*pbVar23) + *(int *)pbVar23;
    *pbVar15 = *pbVar15 + 6;
    cVar8 = (char)pbVar62 - *pcVar22;
    pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),CONCAT11(bVar10 + bVar11 + *pbVar23,6)
                              );
    *pbVar23 = *pbVar23;
    *(undefined2 *)piVar40 = in_ES;
    uVar26 = (undefined3)((uint)pbVar23 >> 8);
    cVar9 = (char)pbVar23 - *pbVar23;
    piVar16 = (int *)CONCAT31(uVar26,cVar9);
    puVar60 = (uint *)(pcVar22 + *piVar16);
    bVar11 = cVar9 + (char)*piVar16;
    pcVar22 = (char *)CONCAT31(uVar26,bVar11);
    piVar41 = piVar40 + -1;
    piVar40[-1] = (int)pcVar17;
    *pcVar22 = *pcVar22 + bVar11;
    *pcVar22 = *pcVar22 + bVar11;
    *pcVar22 = *pcVar22 + bVar11;
    bVar67 = CARRY1(*pbVar15,bVar11);
    *pbVar15 = *pbVar15 + bVar11;
    if (bVar67) break;
    in_ES = (undefined2)piVar40[-1];
    pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar8);
    uVar70 = CONCAT44(pbVar15,pcVar22);
  }
  *pcVar22 = *pcVar22 + bVar11;
  pbVar34 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((byte)((uint)pbVar62 >> 8) | bRam080a0056,cVar8));
  *pcVar22 = *pcVar22 + bVar11;
  bVar28 = bVar11 + 2;
  *pbVar34 = *pbVar34 - (char)((ulonglong)uVar70 >> 0x20);
  *(char *)CONCAT31(uVar26,bVar28) = *(char *)CONCAT31(uVar26,bVar28) + bVar28;
  uVar21 = *puVar60;
  uVar29 = (undefined3)((uint)pcVar17 >> 8);
  pbVar23 = (byte *)(CONCAT31(uVar29,(byte)uVar21) | 6);
  bVar10 = 9 < (bVar11 + 0x74 & 0xf) | in_AF;
  bVar12 = bVar11 + 0x74 + bVar10 * '\x06';
  bVar12 = bVar12 + (0x90 < (bVar12 & 0xf0) | 0x8d < bVar28 | bVar10 * (0xf9 < bVar12)) * '`';
  pbVar62 = (byte *)CONCAT31(uVar26,bVar12);
  bVar11 = *pbVar62;
  *pbVar62 = *pbVar62 + bVar12;
  if (!SCARRY1(bVar11,bVar12)) {
    *(byte *)puVar60 = (byte)*puVar60 + bVar12;
    puVar60 = (uint *)((int)puVar60 + *(int *)(pbVar15 + 0x33));
    *pbVar62 = *pbVar62 | bVar12;
    *(byte *)puVar60 = (byte)*puVar60 + bVar12;
    bVar11 = bVar12 + 0x72;
    piVar40[-2] = (int)pbVar34;
    *(byte *)CONCAT31(uVar26,bVar11) = *(byte *)CONCAT31(uVar26,bVar11) | bVar11;
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    pbVar23 = (byte *)CONCAT31(uVar29,((byte)uVar21 | 6) + (byte)*puVar60);
    pcVar17 = (char *)CONCAT31(uVar26,bVar12 - 0x11);
    piVar41 = piVar40 + -3;
    piVar40[-3] = (int)pbVar23;
    *pcVar17 = *pcVar17 + (bVar12 - 0x11);
    pbVar62 = (byte *)CONCAT31(uVar26,bVar12 - 0xf);
    puVar63 = (uint *)((int)puVar63 + iRam080a0052);
    *pbVar62 = *pbVar62 + (bVar12 - 0xf);
  }
code_r0x00403825:
  pbVar59 = (byte *)0x80a0000;
  uVar26 = (undefined3)((uint)pbVar62 >> 8);
  cVar9 = (char)pbVar62 + '\x7f';
  pcVar17 = (char *)CONCAT31(uVar26,cVar9);
  *(byte **)((int)piVar41 + -4) = pbVar34;
  *pcVar17 = *pcVar17 + cVar9;
  iVar18 = CONCAT31(uVar26,(char)pbVar62 + -0x7f) + 0x547d;
  cVar9 = (char)iVar18;
  uVar26 = (undefined3)((uint)iVar18 >> 8);
  cVar8 = cVar9 + '*';
  pcVar17 = (char *)CONCAT31(uVar26,cVar8);
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | (byte)*puVar60);
  cVar33 = (char)pbVar34 - (byte)*puVar60;
  uVar66 = (undefined2)((uint)pbVar34 >> 0x10);
  cVar35 = (char)((uint)pbVar34 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar34 >> 8),cVar33) + 0x57);
  *pcVar17 = *pcVar17 + cVar8;
  bVar11 = cVar9 + 0x54U & *pbVar15;
  iVar18 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
  pcVar17 = (char *)CONCAT31(uVar26,bVar11 + 0x2a);
  *(undefined2 *)((int)piVar41 + -8) = in_DS;
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar33)) + 0x58);
  *pcVar17 = *pcVar17 + bVar11 + 0x2a;
  bVar28 = bVar11 + 0x54 & *pbVar15;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar26,bVar28) = *(char *)CONCAT31(uVar26,bVar28) + bVar28;
  pcVar17 = (char *)CONCAT31(uVar26,bVar28 + 0x2a);
  pbVar62 = *(byte **)((int)piVar41 + -8);
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar33)) + 0x55);
  *pcVar17 = *pcVar17 + bVar28 + 0x2a;
  pcVar17 = (char *)CONCAT31(uVar26,bVar28 + 0x57);
  pbVar15 = pbVar15 + *(int *)pbVar62;
  *(undefined4 *)((int)piVar41 + -8) = 0x2a;
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar33)) + 0x55);
  *pcVar17 = *pcVar17 + bVar28 + 0x57;
  cVar9 = bVar28 - 0x3a;
  pcVar17 = (char *)CONCAT31(uVar26,cVar9);
  *(undefined2 *)((int)piVar41 + -0xc) = uVar65;
  *pcVar17 = *pcVar17 + cVar9;
  bVar11 = *pbVar15;
  cVar8 = (char)pbVar23;
  *(undefined2 *)((int)piVar41 + -0x10) = in_DS;
  pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,
                                                  cVar33)) + 0x59),cVar33));
  *pcVar17 = *pcVar17 + cVar9;
  bVar13 = bVar28 - 0x10 & *pbVar15;
  puVar63 = (uint *)((int)puVar63 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar18);
  *(char *)CONCAT31(uVar26,bVar13) = *(char *)CONCAT31(uVar26,bVar13) + bVar13;
  bVar13 = bVar13 + 0x2a;
  pbVar58 = (byte *)CONCAT31(uVar26,bVar13);
  puVar38 = (undefined4 *)((int)piVar41 + -0x14);
  *(undefined2 *)((int)piVar41 + -0x14) = in_DS;
  bVar28 = *(byte *)((int)puVar63 + 0x17);
  *pbVar58 = *pbVar58 + bVar13;
  bVar12 = *pbVar15;
  puVar43 = (undefined4 *)((int)piVar41 + -0x18);
  *(undefined2 *)((int)piVar41 + -0x18) = in_DS;
  bVar14 = *(byte *)((int)puVar63 + 0x1a);
  *pbVar58 = *pbVar58 + bVar13;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar23 >> 8) | bVar11) + bVar28 | bVar12) +
                                      bVar14 | *pbVar15,cVar8));
  *pbVar34 = *pbVar34 + cVar33;
  *(byte *)((int)pbVar58 * 2) = *(byte *)((int)pbVar58 * 2) ^ bVar13;
  bVar11 = *pbVar58;
  *pbVar58 = *pbVar58 + bVar13;
  bVar28 = *pbVar58;
  *pbVar23 = *pbVar23 + (char)pbVar15;
  bVar11 = ((bVar13 - bVar28) - CARRY1(bVar11,bVar13)) + *pbVar15;
  pbVar58 = (byte *)CONCAT31(uVar26,bVar11);
  if ((POPCOUNT(bVar11) & 1U) != 0) {
    pbVar15 = *(byte **)((int)piVar41 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar58 = *pbVar58 + bVar11;
  cVar9 = (bVar11 + 0x6f) - (0x90 < bVar11);
  pbVar24 = (byte *)CONCAT31(uVar26,cVar9);
  bVar11 = *pbVar15;
  *pbVar15 = *pbVar15 + cVar8;
  if (SCARRY1(bVar11,cVar8) == (char)*pbVar15 < '\0') {
    cRam33100000 = cRam33100000 - cVar9;
    cVar9 = cVar9 + *pbVar15;
    pbVar58 = (byte *)CONCAT31(uVar26,cVar9);
    puVar38 = (undefined4 *)((int)piVar41 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar24 = *pbVar24 + (char)pbVar24;
code_r0x004038b0:
    uVar26 = (undefined3)((uint)pbVar24 >> 8);
    cVar9 = (char)pbVar24 + '\x02';
    pbVar58 = (byte *)CONCAT31(uVar26,cVar9);
    puVar38 = puVar43;
    if ((POPCOUNT(cVar9) & 1U) != 0) {
code_r0x00403908:
      puVar63 = (uint *)((int)puVar63 - *(int *)pbVar62);
      cVar9 = (char)pbVar58 + *pbVar15;
      pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar9);
code_r0x0040390c:
      cVar8 = (char)pbVar58;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x0040390e;
      *pbVar62 = *pbVar62 + cVar8;
      goto code_r0x00403962;
    }
    *pbVar58 = *pbVar58 + cVar9;
    puVar38 = (undefined4 *)((int)puVar43 + -4);
    piVar41 = (int *)((int)puVar43 + -4);
    *(byte **)((int)puVar43 + -4) = pbVar23;
    cVar9 = (char)pbVar24 + '.' + *pbVar15;
    pbVar58 = (byte *)CONCAT31(uVar26,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) {
      pbVar24 = pbVar15 + (int)pbVar58;
      *pbVar24 = *pbVar24 + cVar9;
      bVar11 = *pbVar24;
      goto code_r0x00403912;
    }
    *pbVar58 = *pbVar58 + cVar9;
    bVar11 = cVar9 + 2;
    pbVar58 = (byte *)CONCAT31(uVar26,bVar11);
    puVar38 = (undefined4 *)((int)puVar43 + -4);
    if ((POPCOUNT(bVar11) & 1U) != 0) goto code_r0x00403916;
    *pbVar58 = *pbVar58 + bVar11;
    cVar8 = cVar9 + 'q';
    piVar16 = (int *)CONCAT31(uVar26,cVar8);
    *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0x90 < bVar11);
    bVar11 = *pbVar34;
    bVar28 = (byte)((uint)pbVar23 >> 8);
    *pbVar34 = *pbVar34 + bVar28;
    if (!CARRY1(bVar11,bVar28)) {
      out(*(undefined4 *)pbVar62,(short)pbVar15);
      bVar11 = (cVar8 - (char)*piVar16) - CARRY1(bVar11,bVar28);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      cVar9 = bVar11 - *(byte *)CONCAT31(uVar26,bVar11);
      puVar60 = (uint *)(pbVar62 +
                        ((((uint)bVar68 * -8 + 4) - *(int *)CONCAT31(uVar26,cVar9)) -
                        (uint)(bVar11 < *(byte *)CONCAT31(uVar26,bVar11))));
      pbVar62 = (byte *)CONCAT31(uVar26,cVar9);
      goto code_r0x00403825;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar8;
    uVar66 = (undefined2)((uint)pbVar34 >> 0x10);
    bVar11 = (byte)((uint)pbVar34 >> 8) | bRam080a0056;
    *(char *)piVar16 = (char)*piVar16 + cVar8;
    pcVar17 = (char *)CONCAT31(uVar26,cVar9 + 's');
    pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar11 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar11,(
                                                  char)pbVar34)) + 0x56),(char)pbVar34));
    *pcVar17 = *pcVar17 + cVar9 + 's';
    bVar11 = cVar9 - 0xf;
    pbVar15 = *(byte **)((int)puVar43 + -4);
    *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
    bVar28 = cVar9 + 0x1e;
    pbVar24 = (byte *)CONCAT31(uVar26,bVar28);
    *(byte **)(pbVar62 + (int)puVar63 * 8) =
         pbVar15 + (uint)(0xd2 < bVar11) + *(int *)(pbVar62 + (int)puVar63 * 8);
    puVar38 = (undefined4 *)((int)puVar43 + -4);
    puVar45 = (undefined4 *)((int)puVar43 + -4);
    *(undefined2 *)((int)puVar43 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar24;
    bVar11 = *pbVar62;
    *pbVar62 = *pbVar62 + bVar28;
    if (CARRY1(bVar11,bVar28)) {
      *pbVar24 = *pbVar24 + bVar28;
      pbVar58 = (byte *)CONCAT31(uVar26,bVar28 | pbVar24[0x400005a]);
      if ('\0' < (char)(bVar28 | pbVar24[0x400005a])) {
code_r0x004038f6:
        bVar11 = (byte)pbVar58;
        *pbVar58 = *pbVar58 + bVar11;
        uVar26 = (undefined3)((uint)pbVar58 >> 8);
        cVar9 = ((bVar11 + 0x28) - *(char *)CONCAT31(uVar26,bVar11 + 0x28)) - (0xd7 < bVar11);
        pbVar58 = (byte *)CONCAT31(uVar26,cVar9);
        bVar11 = *pbVar34;
        bVar28 = (byte)((uint)pbVar23 >> 8);
        *pbVar34 = *pbVar34 + bVar28;
        if (CARRY1(bVar11,bVar28)) {
          *pbVar58 = *pbVar58 + cVar9;
          pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                     CONCAT11(bVar28 | *pbVar58,(char)pbVar23));
          *pbVar62 = *pbVar62 + cVar9;
          goto code_r0x00403908;
        }
        pbVar24 = pbVar58 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar26 = (undefined3)((uint)pbVar58 >> 8);
      bVar28 = (char)pbVar58 + 0x6f;
      bVar11 = *(byte *)CONCAT31(uVar26,bVar28);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      pbVar58 = (byte *)CONCAT31(uVar26,(bVar28 & bVar11) + *pbVar62);
      *pbVar23 = *pbVar23 - (char)((uint)pbVar15 >> 8);
      puVar50 = puVar45;
      goto code_r0x0040395a;
    }
    puVar42 = (undefined4 *)((int)puVar43 + -8);
    puVar43 = (undefined4 *)((int)puVar43 + -8);
    *puVar42 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar16 = (char)*piVar16 + bVar11;
  puVar60 = puVar64;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar58 = *pbVar58 + cVar8;
  bVar11 = cVar8 + 2;
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar11);
code_r0x00403912:
  bVar67 = (POPCOUNT(bVar11) & 1U) == 0;
  puVar50 = puVar38;
  if (!bVar67) goto code_r0x00403967;
  *pbVar58 = *pbVar58 + (char)pbVar58;
code_r0x00403916:
  bVar14 = (char)pbVar58 + 0x6f;
  pbVar24 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar58 >> 8),bVar14);
  bVar11 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar14;
  bVar28 = *pbVar24;
  bVar12 = *pbVar24;
  puVar50 = (undefined4 *)((int)puVar38 + -4);
  *(undefined2 *)((int)puVar38 + -4) = in_ES;
  if (bVar12 == 0 || SCARRY1(bVar11,bVar14) != (char)bVar28 < '\0') goto code_r0x00403979;
  *pbVar24 = *pbVar24 + bVar14;
  pbVar24 = (byte *)CONCAT31((int3)(char)((uint)pbVar58 >> 8),(char)pbVar58 + -100);
  *(byte **)(pbVar62 + (int)puVar63 * 8) =
       pbVar15 + (uint)(0xd2 < bVar14) + *(int *)(pbVar62 + (int)puVar63 * 8);
  puVar44 = (undefined2 *)((int)puVar38 + -8);
  puVar38 = (undefined4 *)((int)puVar38 + -8);
  *puVar44 = in_ES;
code_r0x00403926:
  puVar43 = puVar38 + 1;
  puVar50 = puVar38 + 1;
  puVar45 = puVar38 + 1;
  *(undefined4 *)pbVar24 = *puVar38;
  bVar11 = *pbVar62;
  bVar28 = (byte)pbVar24;
  *pbVar62 = *pbVar62 + bVar28;
  if (CARRY1(bVar11,bVar28)) {
    *pbVar24 = *pbVar24 + bVar28;
    uVar26 = (undefined3)((uint)pbVar24 >> 8);
    bVar28 = bVar28 | pbVar24[0x400005b];
    pbVar58 = (byte *)CONCAT31(uVar26,bVar28);
    pbVar24 = pbVar62;
    if ((char)bVar28 < '\x01') goto code_r0x00403991;
    *pbVar58 = *pbVar58 + bVar28;
    cVar9 = bVar28 + 0x28;
    pbVar58 = (byte *)CONCAT31(uVar26,cVar9);
    *(byte **)pbVar58 = pbVar58 + (uint)(0xd7 < bVar28) + *(int *)pbVar58;
    bVar11 = *pbVar34;
    bVar28 = (byte)((uint)pbVar23 >> 8);
    *pbVar34 = *pbVar34 + bVar28;
    if (CARRY1(bVar11,bVar28)) {
      *pbVar58 = *pbVar58 + cVar9;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(bVar28 | *pbVar58,(char)pbVar23));
      *pbVar62 = *pbVar62 + cVar9;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x55],(char)pbVar34))
      ;
      *pbVar58 = *pbVar58 + cVar9;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar38 = in_ES;
code_r0x00403962:
    puVar50 = (undefined4 *)((int)puVar38 + -4);
    *(undefined2 *)((int)puVar38 + -4) = uVar65;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar58 = *pbVar58 + (char)pbVar58;
  puVar46 = (undefined2 *)((int)puVar50 + -4);
  puVar50 = (undefined4 *)((int)puVar50 + -4);
  *puVar46 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar23;
  pbVar34 = (byte *)((uint)pbVar34 | (uint)pbVar62);
  cVar9 = (char)pbVar58 + '\x02';
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar9);
  bVar67 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403967:
  if (!bVar67) goto code_r0x004039be;
  *pbVar58 = *pbVar58 + (char)pbVar58;
  uVar26 = (undefined3)((uint)pbVar58 >> 8);
  bVar11 = (char)pbVar58 + 0x6f;
  bVar11 = bVar11 & *(byte *)CONCAT31(uVar26,bVar11);
  pbVar24 = (byte *)CONCAT31(uVar26,bVar11);
  *pbVar15 = *pbVar15 + (char)pbVar23;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar11;
code_r0x00403979:
  do {
    bVar11 = (char)pbVar24 - (byte)*puVar63;
    bVar67 = bVar11 < *pbVar23;
    pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar11 - *pbVar23);
    do {
      cVar9 = (char)pbVar58;
      *pbVar58 = *pbVar58 + cVar9 + bVar67;
      *pbVar58 = *pbVar58 + cVar9;
      *pbVar23 = *pbVar23 + (char)pbVar15;
      pbVar23[0x101c00aa] = pbVar23[0x101c00aa] + (char)pbVar34;
      *pbVar58 = *pbVar58 + cVar9;
      *(byte **)pbVar62 = pbVar34 + *(int *)pbVar62;
      bVar11 = (byte)((uint)pbVar23 >> 8);
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(bVar11 + *pbVar58,(char)pbVar23));
      pbVar58 = pbVar58 + (uint)CARRY1(bVar11,*pbVar58) + *(int *)pbVar58;
      pbVar24 = pbVar62;
code_r0x00403991:
      cVar9 = (char)pbVar23;
      *pbVar15 = *pbVar15 + cVar9;
      cVar8 = (char)pbVar34 - pbVar24[2];
      pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar8);
      pbVar62 = pbVar24;
      if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x0040395a;
      *pbVar58 = *pbVar58 + (byte)pbVar58;
      uVar27 = (uint3)((uint)pbVar58 >> 8);
      bVar11 = (byte)pbVar58 | *pbVar34;
      piVar16 = (int *)CONCAT31(uVar27,bVar11);
      bVar28 = (byte)((uint)pbVar23 >> 8);
      bVar12 = (byte)pbVar15;
      if (bVar11 == 0) {
        *(char *)piVar16 = (char)*piVar16;
        puVar50 = (undefined4 *)((int)puVar50 + -*(int *)(pbVar59 + 0x1b000007));
        pbVar62 = pbVar24 + (uint)bVar68 * -8 + 4;
        out(*(undefined4 *)pbVar24,(short)pbVar15);
        pbVar58 = (byte *)((uint)uVar27 << 8);
        *pbVar15 = *pbVar15 + cVar9;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar12 - *pbVar34);
        *pbVar34 = *pbVar34;
        *pbVar15 = *pbVar15 + bVar28;
        *pbVar58 = *pbVar58;
        *pbVar34 = *pbVar34 + cVar8;
        *pbVar58 = *pbVar58;
        *(byte **)(pbVar34 + -0x3d) = pbVar62 + *(int *)(pbVar34 + -0x3d);
        break;
      }
      pbVar59 = pbVar59 + -puVar63[9];
      *(byte *)piVar16 = (char)*piVar16 + bVar11;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar28 | *pbVar15,cVar9));
      pbVar62 = pbVar24 + *piVar16;
      pcVar17 = (char *)((int)piVar16 + *piVar16);
      bVar28 = (char)pcVar17 - *pcVar17;
      pbVar58 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar28);
      bVar11 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar28;
      pbVar58 = pbVar58 + (-(uint)CARRY1(bVar11,bVar28) - *(int *)pbVar58);
      bVar67 = CARRY1(*pbVar23,bVar12);
      *pbVar23 = *pbVar23 + bVar12;
    } while (!bVar67);
    *pbVar58 = *pbVar58 + (char)pbVar58;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | *pbVar15);
code_r0x004039be:
    puVar38 = (undefined4 *)((int)puVar50 + -4);
    puVar47 = (undefined1 *)((int)puVar50 + -4);
    *(undefined2 *)((int)puVar50 + -4) = in_ES;
    puVar63 = (uint *)((int)puVar63 + *(int *)(pbVar59 + -0x3c));
    *pbVar58 = *pbVar58 + (byte)pbVar58;
    uVar26 = (undefined3)((uint)pbVar58 >> 8);
    bVar11 = (byte)pbVar58 | *pbVar15;
    pcVar17 = (char *)CONCAT31(uVar26,bVar11);
    if ((POPCOUNT(bVar11) & 1U) != 0) {
      cVar9 = *pcVar17;
      *pcVar17 = *pcVar17 + bVar11;
      cVar8 = *pcVar17;
      puVar31 = (undefined1 *)((int)puVar50 + -4);
      if (!SCARRY1(cVar9,bVar11)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar38 = (undefined4 *)puVar31;
      cVar9 = (char)pcVar17;
      *pcVar17 = *pcVar17 + cVar9;
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      bVar11 = cVar9 + 2;
      if ((POPCOUNT(bVar11) & 1U) != 0) {
        pcVar17 = (char *)CONCAT31(uVar26,bVar11 + *pbVar15);
        pbVar58 = pbVar62;
        if ((POPCOUNT(bVar11 + *pbVar15) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar62 + (int)puVar63 * 8) =
             pbVar15 + (uint)(0xd2 < (byte)pcVar17) + *(int *)(pbVar62 + (int)puVar63 * 8);
        puVar49 = (undefined2 *)((int)puVar38 + -4);
        puVar38 = (undefined4 *)((int)puVar38 + -4);
        *puVar49 = in_ES;
        pbVar24 = pbVar59;
        pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 + 0x2d);
code_r0x00403ad8:
        pbVar59 = pbVar25;
        bVar11 = *pbVar24;
        bVar28 = (byte)pbVar24;
        *pbVar24 = *pbVar24 + bVar28;
        puVar50 = (undefined4 *)((int)puVar38 + -4);
        *(undefined2 *)((int)puVar38 + -4) = in_ES;
        puVar31 = (undefined1 *)((int)puVar38 + -4);
        if (CARRY1(bVar11,bVar28)) {
          *pbVar24 = *pbVar24 + bVar28;
          bVar28 = bVar28 | pbVar24[0x400005d];
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar28);
          pbVar58 = pbVar62;
          if ((char)bVar28 < '\x01') {
            *pbVar24 = *pbVar24 + bVar28;
            pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar15,(char)pbVar23)
                                      );
            pbVar58 = *(byte **)((int)puVar38 + -4);
            pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                       CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[-0x39],
                                                (char)pbVar34));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar24 = *pbVar24 + (char)pbVar24;
          cVar9 = (char)pbVar24 + '(';
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar9);
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          bVar11 = *pbVar34;
          bVar28 = (byte)((uint)pbVar23 >> 8);
          *pbVar34 = *pbVar34 + bVar28;
          pbVar62 = pbVar58;
          if (!CARRY1(bVar11,bVar28)) {
            puVar38 = (undefined4 *)((int)puVar50 + -4);
            *(undefined2 *)((int)puVar50 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar24 = *pbVar24 + cVar9;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
      piVar16 = (int *)CONCAT31(uVar26,cVar9 + '*');
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0xd7 < bVar11);
      bVar11 = *pbVar15;
      bVar14 = (byte)pbVar23;
      *pbVar15 = *pbVar15 + bVar14;
      out(*(undefined4 *)pbVar62,(short)pbVar15);
      bVar12 = ((cVar9 + '*') - (char)*piVar16) - CARRY1(bVar11,bVar14);
      pbVar58 = (byte *)CONCAT31(uVar26,bVar12);
      *pbVar15 = *pbVar15 + bVar14;
      uVar66 = (undefined2)((uint)pbVar34 >> 0x10);
      uVar32 = SUB41(pbVar34,0);
      cVar9 = (char)((uint)pbVar34 >> 8) - pbVar62[(uint)bVar68 * -8 + 0x1f];
      pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(cVar9,uVar32));
      *pbVar58 = *pbVar58 + bVar12;
      bVar28 = *pbVar15;
      bVar11 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar12;
      pbVar62 = pbVar62 + ((((uint)bVar68 * -8 + 4) - *(int *)pbVar58) - (uint)CARRY1(bVar11,bVar12)
                          );
      pbVar58 = (byte *)CONCAT31(uVar26,bVar12);
      pbVar23 = (byte *)(CONCAT22((short)((uint)pbVar23 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar23 >> 8) | bVar28,bVar14)) + -1);
      bVar11 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar12;
      bVar11 = (bVar12 - *pbVar58) - CARRY1(bVar11,bVar12);
      *pbVar23 = *pbVar23 + (char)pbVar15;
      bVar67 = CARRY1(bVar11,*pbVar15);
      bVar11 = bVar11 + *pbVar15;
      pbVar58 = (byte *)CONCAT31(uVar26,bVar11);
      if ((POPCOUNT(bVar11) & 1U) == 0) {
        *pbVar58 = *pbVar58 + bVar11;
        cVar8 = (bVar11 + 0x6f) - (0x90 < bVar11);
        pbVar24 = (byte *)CONCAT31(uVar26,cVar8);
        bVar11 = *pbVar15;
        *pbVar15 = *pbVar15 + (char)pbVar23;
        if (SCARRY1(bVar11,(char)pbVar23) == (char)*pbVar15 < '\0') {
code_r0x00403aaf:
          cVar9 = (char)pbVar24 + '(';
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar9);
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          bVar11 = *pbVar34;
          bVar28 = (byte)((uint)pbVar23 >> 8);
          *pbVar34 = *pbVar34 + bVar28;
          pbVar25 = pbVar59;
          if (!CARRY1(bVar11,bVar28)) goto code_r0x00403ad8;
          *pbVar24 = *pbVar24 + cVar9;
          pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                     CONCAT11(bVar28 | *pbVar34,(char)pbVar23));
          if ((POPCOUNT(*pbVar15 - cVar9) & 1U) != 0) {
            *pbVar62 = *pbVar62 + cVar9;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar24 = *pbVar24 + cVar8;
          pcVar17 = (char *)CONCAT31(uVar26,cVar8 + '\x02');
          bVar28 = cVar9 + pbVar34[0x52];
          pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28,uVar32));
          *pcVar17 = *pcVar17 + cVar8 + '\x02';
          bVar11 = cVar8 + 4;
          pbVar24 = (byte *)CONCAT31(uVar26,bVar11);
          if ((POPCOUNT(bVar11) & 1U) == 0) {
            *pbVar24 = *pbVar24 + bVar11;
            cVar9 = (cVar8 + 's') - (0x90 < bVar11);
            pcVar17 = (char *)CONCAT31(uVar26,cVar9);
            bVar11 = (byte)((uint)pbVar23 >> 8);
            bVar67 = CARRY1(*pbVar34,bVar11);
            *pbVar34 = *pbVar34 + bVar11;
            pbVar58 = pbVar62;
            if (bVar67) {
              *pcVar17 = *pcVar17 + cVar9;
              pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28 | pbVar59[0x5c],uVar32));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar63 = (uint *)((int)puVar63 - *(int *)pbVar24);
          pbVar34 = (byte *)CONCAT22(uVar66,CONCAT11(bVar28 + pbVar34[0x52],uVar32));
        }
        *pbVar24 = *pbVar24 + (char)pbVar24;
        cVar9 = (char)pbVar24 + '\x02';
        pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar9);
        bVar67 = (POPCOUNT(cVar9) & 1U) == 0;
        if (!bVar67) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar11 = (byte)pbVar58;
        *pbVar58 = *pbVar58 + bVar11;
        cVar9 = (bVar11 + 0x6f) - (0x90 < bVar11);
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar9);
        bVar11 = *pbVar34;
        cVar8 = (char)((uint)pbVar23 >> 8);
        *pbVar34 = *pbVar34 + cVar8;
        if (*pbVar34 == 0 || SCARRY1(bVar11,cVar8) != (char)*pbVar34 < '\0') goto code_r0x00403b2c;
        *pcVar17 = *pcVar17 + cVar9;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar67) {
        pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                   CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x53],(char)pbVar34
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar58 = *pbVar58 + (byte)pbVar58;
      bVar11 = (byte)pbVar58 | pbVar58[0x400005e];
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar11);
      if ('\0' < (char)bVar11) {
        *pbVar24 = *pbVar24 + bVar11;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar17 = *pcVar17 + bVar11;
    *pbVar62 = *pbVar62 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar26,bVar11 + 6);
    pbVar24 = (byte *)uVar3;
    bVar11 = *pbVar15;
    bVar28 = (byte)pbVar23;
    *pbVar15 = *pbVar15 + bVar28;
    if (CARRY1(bVar11,bVar28)) {
      *pbVar24 = *pbVar24 + (char)uVar3;
      bVar12 = (byte)((uint)pbVar23 >> 8) | *pbVar24;
      uVar66 = CONCAT11(bVar12,bVar28);
      pbVar24 = pbVar24 + -*(int *)pbVar24;
      bVar11 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar12;
      if (CARRY1(bVar11,bVar12)) {
        cVar8 = (char)pbVar24;
        *pbVar24 = *pbVar24 + cVar8;
        bVar11 = *pbVar15;
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((char)((uint)pbVar15 >> 8) - pbVar34[-0x3a],
                                            (char)pbVar15));
        *pbVar24 = *pbVar24 + cVar8;
        uVar37 = (undefined2)((uint)pbVar34 >> 0x10);
        bVar36 = (byte)((uint)pbVar34 >> 8) | pbVar15[0x32];
        pcVar17 = (char *)CONCAT22(uVar37,CONCAT11(bVar36,(char)pbVar34));
        cVar9 = *pcVar17;
        puVar47 = (undefined1 *)((int)puVar50 + -8);
        *(undefined2 *)((int)puVar50 + -8) = in_CS;
        cVar9 = cVar8 + cVar9 + '-';
        pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar9);
        *pbVar24 = *pbVar24;
        *(undefined2 *)((int)puVar50 + -0xc) = in_ES;
        bVar14 = *pbVar15;
        uVar65 = *(undefined2 *)((int)puVar50 + -0xc);
        cVar8 = (char)pbVar34 - *pbVar62;
        bVar13 = *(byte *)((int)puVar63 + 0x17);
        *pbVar24 = *pbVar24 + cVar9;
        uVar66 = CONCAT11((bVar12 | bVar11) + bVar13 | *pbVar15,bVar28 - bVar14);
        pbVar34 = (byte *)CONCAT22(uVar37,CONCAT11(bVar36 + *(char *)(CONCAT31((int3)((uint)pcVar17
                                                                                     >> 8),cVar8) +
                                                                     0x4e),cVar8));
        *pbVar24 = *pbVar24 + cVar9;
      }
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),uVar66);
      bVar11 = (byte)pbVar24;
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      pcVar17 = (char *)CONCAT31(uVar26,bVar11 + 0x28);
      *pcVar17 = (*pcVar17 - (bVar11 + 0x28)) - (0xd7 < bVar11);
      *pbVar15 = *pbVar15 + (char)uVar66;
      bVar28 = bVar11 + 0x1b;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x4f],(char)pbVar34))
      ;
      *(char *)CONCAT31(uVar26,bVar28) = *(char *)CONCAT31(uVar26,bVar28) + bVar28;
      pcVar22 = (char *)CONCAT31(uVar26,bVar11 + 0x43);
      *pcVar22 = (*pcVar22 - (bVar11 + 0x43)) - (0xd7 < bVar28);
      *pbVar15 = *pbVar15 + (char)uVar66;
      pcVar17 = pcVar22 + -0x6b721c;
      pcVar22 = pcVar22 + -0x6b721a;
      *pcVar22 = *pcVar22 + (char)((uint)pbVar15 >> 8);
      cVar8 = *pcVar22;
      puVar38 = (undefined4 *)puVar47;
code_r0x00403a22:
      puVar31 = (undefined1 *)puVar38;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x00403a24;
      bVar11 = *pbVar15;
      *pbVar15 = *pbVar15 + (char)pbVar23;
      if (SCARRY1(bVar11,(char)pbVar23) == (char)*pbVar15 < '\0') {
        pbVar24 = pbVar59;
        pbVar25 = (byte *)(pcVar17 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar17 = *pcVar17 + (char)pcVar17;
      pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + '\x02');
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x54],(char)pbVar34))
      ;
      pbVar58 = pbVar62;
code_r0x00403a7d:
      cVar9 = (char)pcVar17;
      *pcVar17 = *pcVar17 + cVar9;
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      cVar8 = cVar9 + '-';
      pbVar25 = (byte *)CONCAT31(uVar26,cVar8);
      pbVar24 = pbVar59;
      pbVar62 = pbVar58;
      if ((POPCOUNT(cVar8 - *pbVar15) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar25 = *pbVar25 + cVar8;
      bVar11 = cVar9 + 0x2f;
      if ((POPCOUNT(bVar11) & 1U) != 0) {
        bVar11 = *pbVar15;
        *pbVar15 = *pbVar15 + (byte)pbVar23;
        *pbVar59 = *pbVar59 - CARRY1(bVar11,(byte)pbVar23);
        pbVar24 = (byte *)CONCAT31(uVar26,cVar9 + -0x53);
        pbVar59 = (byte *)*puVar38;
        puVar50 = puVar38 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
      bVar67 = 0x90 < bVar11;
      pcVar17 = (char *)CONCAT31(uVar26,cVar9 + -0x62);
code_r0x00403a8f:
      uVar26 = (undefined3)((uint)pcVar17 >> 8);
      bVar28 = (char)pcVar17 - bVar67;
      pbVar24 = (byte *)CONCAT31(uVar26,bVar28);
      bVar11 = *pbVar34;
      cVar9 = (char)((uint)pbVar23 >> 8);
      *pbVar34 = *pbVar34 + cVar9;
      puVar50 = puVar38;
      pbVar62 = pbVar58;
      if (*pbVar34 != 0 && SCARRY1(bVar11,cVar9) == (char)*pbVar34 < '\0') {
        *pbVar24 = *pbVar24 + bVar28;
        pbVar62 = (byte *)CONCAT31(uVar26,bVar28 + 0x2d);
        *(byte **)(pbVar58 + (int)puVar63 * 8) =
             pbVar15 + (uint)(0xd2 < bVar28) + *(int *)(pbVar58 + (int)puVar63 * 8);
        *(undefined2 *)((int)puVar38 + -4) = in_ES;
        bVar67 = CARRY1(*pbVar58,(byte)pbVar58);
        *pbVar58 = *pbVar58 + (byte)pbVar58;
        puVar48 = (undefined2 *)((int)puVar38 + -8);
        puVar38 = (undefined4 *)((int)puVar38 + -8);
        *puVar48 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar24,(char)pbVar23));
      *pbVar62 = *pbVar62 + (char)pbVar24;
      puVar31 = (undefined1 *)puVar50;
code_r0x00403afc:
      puVar38 = (undefined4 *)puVar31;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) + pbVar34[0x55],(char)pbVar34))
      ;
      *pbVar24 = *pbVar24 + (char)pbVar24;
      uVar26 = (undefined3)((uint)pbVar24 >> 8);
      bVar28 = (char)pbVar24 + 0x6f;
      bVar11 = *(byte *)CONCAT31(uVar26,bVar28);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      pbVar24 = (byte *)CONCAT31(uVar26,(bVar28 & bVar11) + *pbVar62);
      *pbVar23 = *pbVar23 - (char)((uint)pbVar15 >> 8);
      break;
    }
    uVar65 = *(undefined2 *)((int)puVar50 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar24 = *pbVar24 + (char)pbVar24;
  puVar51 = (undefined2 *)((int)puVar38 + -4);
  puVar38 = (undefined4 *)((int)puVar38 + -4);
  *puVar51 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar23;
  pbVar34 = (byte *)((uint)pbVar34 | (uint)pbVar62);
  cVar9 = (char)pbVar24 + '\x02';
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar9);
  bVar67 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403b18:
  bVar11 = (byte)pbVar58;
  uVar26 = (undefined3)((uint)pbVar58 >> 8);
  if (!bVar67) {
    *pbVar15 = *pbVar15 + (char)pbVar23;
    pbVar24 = (byte *)CONCAT31(uVar26,bVar11 | *pbVar62);
code_r0x00403b73:
    pbVar58 = (byte *)((int)puVar63 + *(int *)(pbVar59 + -0x37));
    *pbVar24 = *pbVar24 + (byte)pbVar24;
    uVar26 = (undefined3)((uint)pbVar24 >> 8);
    bVar11 = (byte)pbVar24 | *pbVar15;
    pcVar17 = (char *)CONCAT31(uVar26,bVar11);
    uVar70 = CONCAT44(pbVar15,pcVar17);
    if ((POPCOUNT(bVar11) & 1U) == 0) {
      *pcVar17 = *pcVar17 + bVar11;
      *pbVar62 = *pbVar62 + 1;
      return (byte *)CONCAT31(uVar26,bVar11 + 6);
    }
    bVar11 = *pbVar62;
    *pbVar62 = *pbVar62 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar11,'\x01')) {
      uVar70 = (*pcVar2)();
      pbVar23 = extraout_ECX_00;
    }
    pbVar15 = (byte *)uVar70;
    *pbVar15 = *pbVar15 + (char)uVar70;
    cVar8 = (char)((ulonglong)uVar70 >> 0x20);
    puVar63 = (uint *)CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar34[0x2f],cVar8));
    *pbVar15 = *pbVar15 + (char)uVar70;
    cVar9 = (char)pbVar23;
    bVar12 = (byte)((uint)pbVar23 >> 8) | *pbVar15;
    pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar11 = *pbVar34;
    *pbVar34 = *pbVar34 + bVar12;
    bVar28 = (byte)pbVar15;
    if (CARRY1(bVar11,bVar12)) {
      *pbVar15 = *pbVar15 + bVar28;
      bVar12 = bVar12 | (byte)*puVar63;
      *pbVar34 = *pbVar34 - cVar8;
      *pbVar15 = *pbVar15 + bVar28;
      uVar26 = (undefined3)((uint)pbVar15 >> 8);
      bVar28 = bVar28 | (byte)*puVar63;
      puVar30 = (uint *)CONCAT31(uVar26,bVar28);
      bVar67 = CARRY4((uint)pbVar59,*puVar30);
      bVar69 = SCARRY4((int)pbVar59,*puVar30);
      pbVar59 = pbVar59 + *puVar30;
      *(uint *)((int)puVar38 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar69 * 0x800 | (uint)bVar68 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar59 < 0) * 0x80 |
           (uint)(pbVar59 == (byte *)0x0) * 0x40 | (uint)(bVar10 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar59 & 0xff) & 1U) == 0) * 4 | (uint)bVar67 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar30 = (char)*puVar30 + bVar28;
      *(undefined2 *)((int)puVar38 + -8) = in_ES;
      cVar8 = (char)pbVar34 - *pbVar62;
      pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                 CONCAT11((char)((uint)pbVar34 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar34 >> 8),cVar8) +
                                                   0x5f),cVar8));
      *(byte *)puVar30 = (char)*puVar30 + bVar28;
      bVar11 = bVar28 + 0x2a & (byte)*puVar63;
      pbVar58 = pbVar58 + *(int *)(pbVar59 + 0x5f);
      *(char *)CONCAT31(uVar26,bVar11) = *(char *)CONCAT31(uVar26,bVar11) + bVar11;
      pbVar15 = (byte *)CONCAT31(uVar26,bVar11 + 0x2a);
      *(byte *)puVar63 = (byte)*puVar63 + 0x28;
      *pbVar15 = *pbVar15 + bVar11 + 0x2a;
      puVar54 = (undefined2 *)((int)puVar38 + -0xc);
      puVar38 = (undefined4 *)((int)puVar38 + -0xc);
      *puVar54 = in_ES;
    }
    else {
      *pbVar62 = *pbVar62 + bVar28;
    }
    pcVar17 = (char *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar12,cVar9));
    *pbVar59 = *pbVar59 - bVar12;
    *(byte *)puVar63 = (byte)*puVar63 + cVar9;
    bVar11 = (byte)pbVar15 - 0xb;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar11);
    if (10 < (byte)pbVar15) {
      *pbVar23 = *pbVar23 | bVar11;
      return pbVar23;
    }
    *(byte *)puVar63 = (byte)*puVar63 + cVar9;
    do {
      *(undefined2 *)((int)puVar38 + -4) = in_ES;
      bVar11 = pbVar34[-0x23];
      bVar28 = (byte)pbVar23;
      *pbVar23 = *pbVar23 + bVar28;
      bVar10 = pbVar59[-0x22];
      *pbVar23 = *pbVar23 + bVar28;
      uVar26 = (undefined3)((uint)pbVar23 >> 8);
      bVar28 = bVar28 | *pbVar62;
      pbVar15 = (byte *)CONCAT31(uVar26,bVar28);
      cVar8 = (char)pbVar34 - *pbVar62;
      pbVar34 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar34 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar34 >> 8) + bVar11 |
                                                          bVar10,(char)pbVar34)) >> 8),cVar8);
      cVar9 = (char)pcVar17;
      pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                 CONCAT11((char)((uint)pcVar17 >> 8) + *pbVar15,cVar9));
      *(byte *)puVar63 = (byte)*puVar63 + cVar9;
      bVar10 = bVar28 - *pbVar15;
      pbVar23 = (byte *)CONCAT31(uVar26,bVar10);
      pbVar62 = pbVar62 + (-(uint)(bVar28 < *pbVar15) - *(int *)pbVar23);
      in_ES = *(undefined2 *)((int)puVar38 + -4);
      puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),(char)puVar63 * '\x02');
      *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
      *pbVar58 = *pbVar58 + cVar8;
      bVar11 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar10;
      *puVar63 = (uint)(pbVar23 + (uint)CARRY1(bVar11,bVar10) + *puVar63);
    } while ((POPCOUNT(*puVar63 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar23 = *pbVar23 + (char)pbVar23;
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 | pbVar23[(int)pcVar17]);
    puVar56 = (undefined2 *)((int)puVar38 + -4);
    *(undefined2 *)((int)puVar38 + -4) = uVar65;
    bVar67 = false;
    pbVar23 = (byte *)((uint)pbVar23 & 0xffffff00);
    do {
      pbVar58 = pbVar58 + (-(uint)bVar67 - *(int *)pbVar34);
      pcVar22 = (char *)CONCAT31((int3)((uint)pbVar23 >> 8),*pcVar17);
      *pcVar22 = *pcVar22 + *pcVar17;
      pbVar23 = (byte *)CONCAT31((int3)((uint)(pcVar22 +
                                              (pbVar62[0x2000001] < (byte)((uint)pcVar17 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar22 +
                                        (pbVar62[0x2000001] < (byte)((uint)pcVar17 >> 8)) + 0xda7d)
                                 | (byte)*puVar63) + 0x7d);
      pcVar17 = pcVar17 + -1;
      *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar17;
      while( true ) {
        uVar29 = (undefined3)((uint)puVar63 >> 8);
        cVar9 = (char)puVar63 + *(char *)((int)pbVar58 * 2 + 0xa0000e1);
        puVar63 = (uint *)CONCAT31(uVar29,cVar9);
        bVar67 = CARRY1((byte)pbVar23,(byte)*puVar63);
        uVar26 = (undefined3)((uint)pbVar23 >> 8);
        bVar11 = (byte)pbVar23 + (byte)*puVar63;
        pbVar23 = (byte *)CONCAT31(uVar26,bVar11);
        if ((POPCOUNT(bVar11) & 1U) != 0) break;
        *pbVar23 = *pbVar23 + bVar11;
        cVar8 = (char)pcVar17;
        pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar17 >> 8) | pbVar58[-0x65],cVar8));
        bVar10 = *pbVar23;
        *pbVar23 = *pbVar23 + bVar11;
        *(undefined2 *)((int)puVar56 + -4) = in_ES;
        if (CARRY1(bVar10,bVar11)) {
          *pbVar23 = *pbVar23 + bVar11;
          pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar34 >> 8) | pbVar59[-0x1d],
                                              (char)pbVar34));
          *pbVar23 = *pbVar23 + bVar11;
          bVar67 = false;
          bVar11 = bVar11 | (byte)*puVar63;
          pcVar22 = (char *)CONCAT31(uVar26,bVar11);
          uVar65 = *(undefined2 *)((int)puVar56 + -4);
          puVar38 = (undefined4 *)puVar56;
          while( true ) {
            bVar10 = (byte)pcVar22;
            uVar26 = (undefined3)((uint)pcVar22 >> 8);
            if (bVar67 == (char)bVar11 < '\0') break;
            *pcVar22 = *pcVar22 + bVar10;
            bVar10 = bVar10 | (byte)*puVar63;
            puVar30 = (uint *)CONCAT31(uVar26,bVar10);
            *pbVar58 = *pbVar58 << 1 | (char)*pbVar58 < '\0';
            uVar21 = *puVar30;
            *(byte *)puVar30 = (byte)*puVar30 + bVar10;
            pbVar59 = pbVar59 + (-(uint)CARRY1((byte)uVar21,bVar10) - *puVar30);
            *puVar30 = *puVar30 << 1 | (uint)((int)*puVar30 < 0);
            while( true ) {
              uVar21 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63 + (byte)pcVar17;
              uVar66 = *(undefined2 *)puVar38;
              cVar9 = (char)puVar30 + 'o' + CARRY1((byte)uVar21,(byte)pcVar17);
              pcVar22 = (char *)CONCAT31((int3)((uint)puVar30 >> 8),cVar9);
              pcVar17 = (char *)0x20a0000;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *pcVar22 = *pcVar22 + cVar9;
              bVar11 = bRamfe140212;
              pcVar17 = (char *)0x0;
              *(undefined2 *)puVar38 = in_ES;
              uVar26 = (undefined3)((uint)(pcVar22 + -0x732b0000) >> 8);
              bVar10 = in(0);
              puVar30 = (uint *)CONCAT31(uVar26,bVar10);
              uVar21 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63;
              if (SCARRY1((byte)uVar21,'\0') != (char)(byte)*puVar63 < '\0') {
                *(byte *)puVar30 = (byte)*puVar30 + bVar10;
                bVar10 = bVar10 | (byte)*puVar63;
                puVar30 = (uint *)CONCAT31(uVar26,bVar10);
                if ((POPCOUNT(bVar10) & 1U) == 0) {
                  *(byte *)puVar30 = (byte)*puVar30 + bVar10;
                  pcVar17 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar11 | (byte)*puVar30) << 8);
                  puVar56 = (undefined2 *)((int)puVar38 + -4);
                  *(undefined2 *)((int)puVar38 + -4) = uVar66;
                  *(byte *)puVar30 = (byte)*puVar30 + bVar10;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar30 = (byte)*puVar30 + bVar10;
                puVar30 = (uint *)CONCAT31(uVar26,bVar10 | (byte)*puVar63);
              }
            }
            *(byte *)puVar63 = (byte)*puVar63;
            bVar67 = SCARRY1((char)puVar63,*pbVar58);
            bVar11 = (char)puVar63 + *pbVar58;
            puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),bVar11);
            puVar38 = (undefined4 *)((int)puVar38 + 4);
          }
          if (bVar67 == (char)bVar11 < '\0') {
            *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar17;
            pbVar23 = (byte *)((uint)pcVar22 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar22 = *pcVar22 + bVar10;
          pbVar23 = (byte *)CONCAT31(uVar26,(bVar10 | (byte)*puVar63) + 0x7d);
          pcVar17 = pcVar17 + -1;
          *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar17;
          puVar56 = (undefined2 *)puVar38;
        }
        else {
          *(byte *)puVar63 = (byte)*puVar63 + cVar8;
          puVar63 = (uint *)CONCAT31(uVar29,cVar9 + *(char *)((int)pbVar58 * 2 + 0xa0000e0));
          puVar56 = (undefined2 *)((int)puVar56 + -4);
        }
      }
    } while( true );
  }
  *pbVar58 = *pbVar58 + bVar11;
  bVar11 = bVar11 + 0x6f & *(byte *)CONCAT31(uVar26,bVar11 + 0x6f);
  *pbVar15 = *pbVar15 + (char)pbVar23;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar11;
  pcVar17 = (char *)CONCAT31(uVar26,bVar11 - (byte)*puVar63);
code_r0x00403b2c:
  bVar11 = (char)pcVar17 - *pcVar17;
  pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar11);
  *pbVar24 = *pbVar24 + bVar11;
  *(byte **)pbVar24 = pbVar15 + *(int *)pbVar24;
  *pbVar24 = *pbVar24 + bVar11;
  bVar67 = CARRY1(*pbVar24,bVar11);
  *pbVar24 = *pbVar24 + bVar11;
  puVar31 = (undefined1 *)puVar38;
  pbVar58 = pbVar62;
  while( true ) {
    puVar38 = (undefined4 *)puVar31;
    *(byte **)pbVar24 = pbVar24 + (uint)bVar67 + *(int *)pbVar24;
    bVar10 = ((uint)pbVar24 & 0x1000) != 0;
    puVar63 = puVar63 + (uint)bVar68 * -2 + 1;
    pbVar24[(int)pbVar15] = pbVar24[(int)pbVar15] + (char)pbVar34;
    *pbVar24 = *pbVar24 + (char)pbVar24;
    *(byte **)pbVar58 = pbVar34 + *(int *)pbVar58;
    bVar11 = (byte)((uint)pbVar23 >> 8);
    cVar9 = (char)pbVar23;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar11 + *pbVar24,cVar9));
    pbVar24 = pbVar24 + (uint)CARRY1(bVar11,*pbVar24) + *(int *)pbVar24;
    *pbVar15 = *pbVar15 + cVar9;
    cVar9 = (char)pbVar34 - pbVar58[2];
    pbVar34 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),cVar9);
    pbVar62 = pbVar58;
    if ((POPCOUNT(cVar9) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar24 = *pbVar24 + (byte)pbVar24;
    bVar11 = (byte)pbVar24 | *pbVar34;
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar11);
    if (bVar11 != 0) {
      pbVar59 = pbVar59 + -puVar63[9];
      *pbVar25 = *pbVar25 + bVar11;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar15,(char)pbVar23));
      pbVar58 = pbVar58 + *(int *)pbVar25;
      pbVar25 = pbVar25 + *(int *)pbVar25;
      uVar26 = (undefined3)((uint)pbVar25 >> 8);
      bVar28 = (char)pbVar25 - *pbVar25;
      pbVar62 = (byte *)CONCAT31(uVar26,bVar28);
      bVar11 = *pbVar62;
      *pbVar62 = *pbVar62 + bVar28;
      pbVar25 = (byte *)CONCAT31(uVar26,bVar28 - CARRY1(bVar11,bVar28));
    }
    bVar11 = *pbVar25;
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    iVar18 = *(int *)(pbVar59 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar11,(byte)pbVar25);
    pbVar62 = pbVar58 + (uint)bVar68 * -8 + 4;
    out(*(undefined4 *)pbVar58,(short)pbVar15);
    pbVar24 = (byte *)(((uint)pbVar25 >> 8) * 0x100);
    *pbVar15 = *pbVar15 + (byte)pbVar23;
    bVar11 = (char)pbVar15 - *pbVar34;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar11);
    *pbVar34 = *pbVar34;
    *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
    *pbVar24 = *pbVar24;
    pcVar17 = (char *)(((uint)pbVar25 >> 8) * 0x200);
    *pcVar17 = *pcVar17 + (char)pbVar34;
    bVar67 = CARRY1(*pbVar23,bVar11);
    *pbVar23 = *pbVar23 + bVar11;
    puVar31 = (undefined1 *)((int)puVar38 + (iVar4 - iVar18));
    pbVar58 = pbVar62;
    if (bVar67) {
      *pbVar24 = *pbVar24;
      pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | *pbVar15);
      puVar53 = (undefined2 *)((int)puVar38 + (iVar4 - iVar18) + -4);
      puVar38 = (undefined4 *)((int)puVar38 + (iVar4 - iVar18) + -4);
      *puVar53 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar52 = (undefined2 *)((int)puVar38 + -4);
  puVar38 = (undefined4 *)((int)puVar38 + -4);
  *puVar52 = uVar65;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar59 = pbVar59 + -*puVar30;
  puVar55 = (undefined1 *)((int)puVar56 + 4);
  do {
    bVar11 = (byte)puVar30;
    *(byte *)puVar30 = (byte)*puVar30 + bVar11;
    pbVar58 = pbVar58 + -*(int *)(pbVar59 + -0x1a);
    *(byte *)puVar30 = (byte)*puVar30 + bVar11;
    bVar11 = bVar11 | (byte)*puVar63;
    puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar11);
    *(byte *)puVar30 = (byte)*puVar30 | bVar11;
    bVar11 = (byte)*puVar30;
    pbVar59 = (byte *)0x2700001;
    while (puVar56 = (undefined2 *)puVar55, (POPCOUNT(bVar11) & 1U) == 0) {
      do {
        *(byte *)puVar30 = (byte)*puVar30 + (byte)puVar30;
        bVar11 = (byte)puVar30 | (byte)*puVar63;
        puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar11);
        puVar31 = (undefined1 *)puVar56;
        if ((POPCOUNT(bVar11) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
        uVar27 = CONCAT21((short)((uint)pcVar17 >> 0x10),(byte)((uint)pcVar17 >> 8) | bRamfe140212);
        puVar7 = puVar31;
        while( true ) {
          puVar57 = puVar7;
          pcVar17 = (char *)((uint)uVar27 << 8);
          puVar55 = puVar57 + -4;
          puVar56 = (undefined2 *)(puVar57 + -4);
          puVar31 = puVar57 + -4;
          *(undefined2 *)(puVar57 + -4) = in_ES;
          bVar12 = (byte)puVar30;
          *(byte *)puVar30 = (byte)*puVar30 & bVar12;
          bVar28 = *pbVar34;
          bVar14 = (byte)uVar27;
          bVar10 = *pbVar34;
          *pbVar34 = *pbVar34 + bVar14;
          bVar11 = *pbVar34;
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
            cVar9 = (char)((uint)pbVar34 >> 8);
            uVar65 = (undefined2)((uint)pbVar34 >> 0x10);
            if (!bVar67) {
              *(byte *)puVar63 = (byte)*puVar63;
              pbVar34 = (byte *)CONCAT22(uVar65,CONCAT11(cVar9 + pbVar34[-0x1f],(char)pbVar34));
              goto code_r0x00403d52;
            }
            *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
            uVar66 = (undefined2)((uint)pcVar17 >> 0x10);
            bVar10 = (byte)((uint)pcVar17 >> 8) | (byte)*puVar30;
            uVar27 = CONCAT21(uVar66,bVar10);
            *puVar30 = *puVar30 & (uint)puVar30;
            *pbVar34 = *pbVar34 + bVar10;
            uVar26 = (undefined3)((uint)puVar30 >> 8);
            bVar11 = (char)puVar30 - bVar10;
            pcVar17 = (char *)CONCAT31(uVar26,bVar11);
            *pcVar17 = *pcVar17 + bVar11;
            bVar11 = bVar11 | (byte)*puVar63;
            puVar30 = (uint *)CONCAT31(uVar26,bVar11);
            puVar7 = puVar57 + -4;
            if ((POPCOUNT(bVar11) & 1U) != 0) break;
            *(byte *)puVar30 = (byte)*puVar30 + bVar11;
            pcVar17 = (char *)((uint)CONCAT21(uVar66,bVar10 | (byte)*puVar30) << 8);
            *puVar30 = *puVar30 - (int)puVar30;
            *(byte *)puVar63 = (byte)*puVar63;
            pbVar34 = (byte *)CONCAT22(uVar65,CONCAT11(cVar9 + pbVar34[-0x1d],(char)pbVar34));
            do {
              *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
              uVar65 = (undefined2)((uint)puVar63 >> 0x10);
              cVar9 = (char)puVar63;
              bVar11 = (byte)((uint)puVar63 >> 8) | pbVar34[-0x17];
              puVar63 = (uint *)CONCAT22(uVar65,CONCAT11(bVar11,cVar9));
              *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
              pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar34 >> 8) | bRam026fffeb,
                                                  (char)pbVar34));
              do {
                *(byte *)puVar30 = (byte)*puVar30 + (byte)puVar30;
                uVar26 = (undefined3)((uint)puVar30 >> 8);
                bVar28 = (byte)puVar30 | (byte)*puVar63;
                pcVar22 = (char *)CONCAT31(uVar26,bVar28);
                bVar10 = pbVar34[-0x16];
                *pcVar22 = *pcVar22 + bVar28;
                pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                           CONCAT11((char)((uint)pbVar34 >> 8) + bVar10 |
                                                    bRam026fffec,(char)pbVar34));
                *pcVar22 = *pcVar22 + bVar28;
                pbVar15 = (byte *)CONCAT31(uVar26,bVar28 | (byte)*puVar63);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar26 = (undefined3)((uint)pbVar15 >> 8);
                  bVar10 = (byte)pbVar15 | (byte)*puVar63;
                  puVar30 = (uint *)CONCAT31(uVar26,bVar10);
                  if ((POPCOUNT(bVar10) & 1U) != 0) break;
                  *(byte *)puVar30 = (byte)*puVar30 + bVar10;
                  bVar28 = pbVar58[-0x14];
                  *(byte *)puVar30 = (byte)*puVar30 + bVar10;
                  bVar10 = bVar10 | (byte)*puVar63;
                  pcVar22 = (char *)CONCAT31(uVar26,bVar10);
                  bVar12 = pbVar34[-0x15];
                  *pcVar22 = *pcVar22 + bVar10;
                  pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),
                                                    (byte)((uint)pcVar17 >> 8) | bVar28 |
                                                    pbVar58[-0x13]) << 8);
                  *pcVar22 = *pcVar22 + bVar10;
                  pbVar34 = (byte *)CONCAT22((short)((uint)pbVar34 >> 0x10),
                                             CONCAT11((char)((uint)pbVar34 >> 8) + bVar12 |
                                                      bRam026fffef,(char)pbVar34));
                  *pcVar22 = *pcVar22 + bVar10;
                  pbVar15 = (byte *)CONCAT31(uVar26,bVar10 | (byte)*puVar63);
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
                      cVar8 = (char)((uint)pcVar17 >> 8) + *pbVar15;
                      pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),cVar8) << 8);
                      uVar26 = (undefined3)((uint)pbVar15 >> 8);
                      bVar28 = bVar28 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar26,bVar28);
                      bVar10 = *pbVar34;
                      *pbVar34 = *pbVar34 + cVar8;
                    } while (SCARRY1(bVar10,cVar8) == (char)*pbVar34 < '\0');
                    *pbVar15 = *pbVar15 + bVar28;
                    bVar28 = bVar28 | (byte)*puVar63;
                    pbVar15 = (byte *)CONCAT31(uVar26,bVar28);
                    if ((POPCOUNT(bVar28) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar28;
                      *pbVar15 = *pbVar15 + bVar28;
                      cVar9 = cVar9 - bVar11;
                      pbVar23 = (byte *)CONCAT31((int3)((uint)puVar63 >> 8),cVar9);
                      *pbVar15 = *pbVar15 + bVar28;
                      bRam0312382b = bRam0312382b | *pbVar23;
                      *(undefined2 *)(puVar57 + -8) = in_ES;
                      while( true ) {
                        bVar10 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar10;
                        bRam0312382b = bRam0312382b | (pbVar58 + 0x21b0000)[(int)pbVar15];
                        uVar26 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar23 = *pbVar23 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar26,bVar10 | *pbVar62);
                      }
                      *pbVar15 = *pbVar15 + bVar10;
                      bVar10 = bVar10 | *pbVar62;
                      pcVar17 = (char *)CONCAT31(uVar26,bVar10);
                      out(*(undefined4 *)pbVar62,(short)pbVar23);
                      *pcVar17 = *pcVar17 + bVar10;
                      uVar66 = CONCAT11(bVar11 | bRam6f0a002b,cVar9);
                      pcVar22 = (char *)CONCAT22(uVar65,uVar66);
                      *pcVar17 = *pcVar17 + bVar10;
                      *pcVar22 = *pcVar22 + bRam0312382b;
                      out(*(undefined4 *)(pbVar62 + (uint)bVar68 * -8 + 4),uVar66);
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
              *(byte *)puVar30 = (byte)*puVar30 + bVar10;
              bVar10 = bVar10 | (byte)*puVar63;
              puVar30 = (uint *)CONCAT31(uVar26,bVar10);
              bVar67 = (POPCOUNT(bVar10) & 1U) == 0;
            } while (bVar67);
          }
        }
      } while (SCARRY1(bVar10,bVar14));
    }
    *pbVar34 = *pbVar34 + (char)((uint)pcVar17 >> 8);
    *pbVar58 = *pbVar58 - (char)pbVar34;
  } while( true );
}


