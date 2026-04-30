/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403291
 * Raw Name    : SetHeader
 * Demangled   : SetHeader
 * Prototype   : byte * SetHeader(undefined4 headerText, byte * param_2)
 * Local Vars  : uStack_38, pbStack_30, auStack_28, uStack_24, uStack_20, apbStack_18, pcStack_c, uVar1, pcVar2, uVar3, iVar4, uVar5, uVar6, puVar7, bVar8, cVar9, bVar10, bVar11, bVar12, bVar13, in_EAX, pbVar14, piVar15, pcVar16, iVar17, ppbVar18, ppbVar19, uVar20, pbVar21, pbVar22, pbVar23, uVar24, uVar25, uVar26, extraout_ECX, extraout_ECX_00, bVar27, uVar28, puVar29, puVar30, cVar31, unaff_EBX, pbVar32, cVar33, cVar34, bVar35, uVar36, puVar37, puVar38, piVar39, piVar40, puVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, pcVar57, pbVar58, unaff_ESI, pbVar59, puVar60, puVar61, pbVar62, unaff_EDI, puVar63, puVar64, in_ES, in_CS, uVar65, in_DS, uVar66, unaff_FS_OFFSET, in_GS_OFFSET, bVar67, in_AF, in_TF, in_IF, bVar68, bVar69, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar70, unaff_retaddr, headerText, param_2
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

byte * __fastcall SetHeader(undefined4 headerText,byte *param_2)

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
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char *in_EAX;
  byte *pbVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  undefined3 uVar24;
  byte **ppbVar18;
  byte **ppbVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint3 uVar25;
  byte *pbVar23;
  undefined1 uVar26;
  byte bVar27;
  byte *extraout_ECX;
  undefined3 uVar28;
  byte *extraout_ECX_00;
  uint *puVar29;
  undefined1 *puVar30;
  char cVar31;
  char cVar33;
  byte bVar35;
  char *unaff_EBX;
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
  char *pcVar57;
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
  int unaff_retaddr;
  undefined4 uStack_38;
  byte *pbStack_30;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  byte *apbStack_18 [3];
  char *pcStack_c;
  
  bVar68 = false;
                    /* .NET CLR Managed Code */
  uVar65 = (undefined2)((uint)headerText >> 0x10);
  uVar26 = (undefined1)headerText;
  bVar27 = (char)((uint)headerText >> 8) + *in_EAX;
  pcVar16 = (char *)CONCAT22(uVar65,CONCAT11(bVar27,uVar26));
  cVar9 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar9;
  pcVar57 = (char *)(unaff_retaddr + *(int *)((int)unaff_EDI + -0x5e));
  *in_EAX = *in_EAX + cVar9;
  bVar8 = cVar9 - *in_EAX;
  pbVar14 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar8);
  *unaff_EBX = *unaff_EBX + (char)param_2;
  *(byte *)((int)pbVar14 * 2) = *(byte *)((int)pbVar14 * 2) ^ bVar8;
  bVar10 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar8;
  pbVar14 = pbVar14 + (uint)CARRY1(bVar10,bVar8) + *(int *)pbVar14;
  *pcVar16 = *pcVar16 + (char)param_2;
  pbVar62 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38],(char)unaff_EBX
                                     ));
  *pbVar14 = *pbVar14 + (char)pbVar14;
  piVar15 = (int *)(CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + 'o') + 0x28060000);
  puVar63 = unaff_EDI + 1;
  uVar66 = SUB42(param_2,0);
  uVar1 = in(uVar66);
  *unaff_EDI = uVar1;
  *(char *)piVar15 = *(char *)piVar15 + (char)piVar15;
  bVar27 = bVar27 | bRam7b022a01;
  pbVar14 = (byte *)((int)puVar63 + (int)pcVar57 * 2);
  *pbVar14 = *pbVar14 + (char)piVar15;
  iVar17 = *piVar15;
  *unaff_ESI = *unaff_ESI + (char)(char *)((int)piVar15 + iVar17);
  pcVar16 = (char *)((int)piVar15 + iVar17) + -0x387b020d;
  *pcVar16 = *pcVar16 + (char)pcVar16;
  cVar9 = (char)pcVar16 + 'o';
  pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar9);
  *pcVar16 = *pcVar16 + cVar9;
  iVar17 = (int)pcVar16 - *(int *)CONCAT22(uVar65,CONCAT11(bVar27,uVar26));
  uVar24 = (undefined3)((uint)iVar17 >> 8);
  cVar9 = (((byte)iVar17 | *unaff_ESI) - 0xe) + *pbVar62;
  pcVar16 = (char *)CONCAT31(uVar24,cVar9);
  pbVar14 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,uVar66);
  pcVar16[unaff_FS_OFFSET] = pcVar16[unaff_FS_OFFSET] + cVar9;
  pcStack_c = (char *)CONCAT22(pcStack_c._2_2_,in_ES);
  pbVar21 = (byte *)CONCAT22(uVar65,CONCAT11(bVar27 + *(char *)((int)unaff_EDI + 0x6a),uVar26));
  *pcVar16 = *pcVar16 + cVar9;
  bVar8 = cVar9 - *param_2;
  puVar29 = (uint *)CONCAT31(uVar24,bVar8);
  *pcVar57 = *pcVar57 - (char)unaff_EBX;
  bVar10 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar8;
  bVar27 = (byte)((uint)param_2 >> 8);
  if (CARRY1(bVar10,bVar8)) goto code_r0x00403365;
  pbVar32 = (byte *)((int)puVar63 + (int)pcVar57 * 2);
  *pbVar32 = *pbVar32 + bVar8;
  ppbVar19 = (byte **)(puVar29 + 0x1f421c00);
  cVar9 = (char)ppbVar19;
  if ((POPCOUNT((uint)ppbVar19 & 0xff) & 1U) != 0) {
    pbVar32 = (byte *)((int)puVar29 + 0x7d087002);
    bVar10 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar27;
    uVar24 = (undefined3)((uint)ppbVar19 >> 8);
    if ((POPCOUNT(*pbVar32) & 1U) == 0) {
      *(char *)ppbVar19 = (char)*ppbVar19 + cVar9;
      ppbVar18 = (byte **)CONCAT31(uVar24,cVar9 + 'o');
      goto code_r0x0040333c;
    }
    pbVar32 = (byte *)CONCAT31(uVar24,cVar9 + -2 + CARRY1(bVar10,bVar27));
    goto code_r0x00403375;
  }
  *(char *)ppbVar19 = (char)*ppbVar19 + cVar9;
  do {
    while( true ) {
      cVar9 = (char)ppbVar19 + 'o';
      piVar15 = (int *)CONCAT31((int3)((uint)ppbVar19 >> 8),cVar9);
      *pbVar14 = *pbVar14 + cVar9;
      *(undefined2 *)pbVar62 = in_ES;
      *pbVar21 = *pbVar21 + cVar9;
      *pbVar21 = *pbVar21 - (char)pbVar62;
      *(char *)piVar15 = (char)*piVar15 + cVar9;
      bVar10 = *(byte *)((int)puVar63 + -0x5e);
      *(char *)piVar15 = (char)*piVar15 + cVar9;
      iVar17 = *piVar15;
      *(char *)(in_GS_OFFSET + (int)piVar15) = *(char *)(in_GS_OFFSET + (int)piVar15) + cVar9;
      ppbVar19 = apbStack_18;
      ppbVar18 = apbStack_18;
      apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
      pbVar32 = apbStack_18[0];
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar21 >> 8) | bVar10) + (char)iVar17 +
                                          *param_2,(char)pbVar21 - *param_2));
      *(char *)piVar15 = (char)*piVar15 + cVar9;
      pbVar14 = pbVar14 + *piVar15;
      apbStack_18[0]._0_1_ = (char)in_ES;
      bVar8 = (byte)apbStack_18;
      apbStack_18[0]._1_3_ = SUB43(pbVar32,1);
      apbStack_18[0] = (byte *)CONCAT31(apbStack_18[0]._1_3_,(char)apbStack_18[0] + bVar8 * '\x03');
      *param_2 = *param_2 + bVar8;
      *pcVar57 = *pcVar57 - (char)pbVar62;
      bVar10 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar8;
      if (!CARRY1(bVar10,bVar8)) break;
      apbStack_18[0] = (byte *)((uint)apbStack_18[0]._1_3_ << 8);
    }
code_r0x0040333c:
    pcVar16 = (char *)((int)ppbVar18 + 0x7b027000);
    pbVar32 = (byte *)((int)puVar63 + (int)pcVar57 * 2);
    *pbVar32 = *pbVar32 + (char)pcVar16;
    *pbVar14 = *pbVar14 + (char)pcVar16 + *pcVar16;
    cRam03060000 = cRam8c0a0000;
    pbVar32 = pbVar14 + 4;
    out(*(undefined4 *)pbVar14,uVar66);
    puVar29 = (uint *)CONCAT31((int3)((uint)pcVar16 >> 8),cRam8c0a0000);
    *pbVar21 = *pbVar21 + cRam8c0a0000;
    *param_2 = *param_2 - (char)((uint)pcVar16 >> 8);
    *param_2 = *param_2 + (char)pbVar21;
    pbVar14 = pbVar14 + 8;
    out(*(undefined4 *)pbVar32,uVar66);
    puVar63 = (uint *)((uint)puVar63 ^ *puVar29);
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + (char)*puVar29,(char)pbVar21));
    pcVar57 = pcStack_c;
code_r0x00403365:
    cVar9 = (char)puVar29;
    *(char *)puVar29 = (char)*puVar29 + cVar9;
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x38],(char)pbVar62));
    *(char *)puVar29 = (char)*puVar29 + cVar9;
    uVar24 = (undefined3)((uint)puVar29 >> 8);
    cVar9 = cVar9 + 'o' + *(char *)CONCAT31(uVar24,cVar9 + 'o');
    pbVar32 = (byte *)CONCAT31(uVar24,cVar9);
    bVar10 = *pbVar14;
    *pbVar14 = *pbVar14 + cVar9;
    pbVar59 = pbVar14;
    if (*pbVar14 == 0 || SCARRY1(bVar10,cVar9) != (char)*pbVar14 < '\0') goto code_r0x004033b0;
code_r0x00403375:
    bVar10 = (byte)pbVar32;
    *pbVar32 = *pbVar32 + bVar10;
    uVar24 = (undefined3)((uint)pbVar32 >> 8);
    bVar8 = bVar10 + 0x2d;
    ppbVar19 = (byte **)CONCAT31(uVar24,bVar8);
    *(byte **)(pbVar14 + (int)puVar63 * 8) =
         param_2 + (uint)(0xd2 < bVar10) + *(int *)(pbVar14 + (int)puVar63 * 8);
    pbVar32 = (byte *)segment(in_DS,(short)pbVar62 + (short)pbVar14);
    bVar10 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar8;
    apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
    pbVar58 = apbStack_18[0];
  } while (!CARRY1(bVar10,bVar8));
  *(byte *)ppbVar19 = (char)*ppbVar19 + bVar8;
  bVar67 = false;
  bVar8 = bVar8 | *(byte *)((int)ppbVar19 + 0x400003b);
  pbVar22 = (byte *)CONCAT31(uVar24,bVar8);
  if ('\0' < (char)bVar8) {
    *pbVar22 = *pbVar22 + bVar8;
    iVar17 = CONCAT31(uVar24,bVar8 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar8);
    iRam02060000 = iVar17;
    *(byte *)puVar63 = (byte)*puVar63 - (char)pbVar62;
    *pbVar14 = *pbVar14 + (char)iVar17;
    bVar8 = (char)iVar17 - 0x25;
    pbVar32 = (byte *)CONCAT31((int3)((uint)iVar17 >> 8),bVar8);
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + *pbVar32,(char)pbVar21));
    bVar10 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar8;
    apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
    if (CARRY1(bVar10,bVar8)) goto code_r0x004033e7;
    pbVar22 = pbVar32 + 2;
    *pbVar22 = *pbVar22 + bVar27;
    pbVar59 = pbVar14;
    if ((POPCOUNT(*pbVar22) & 1U) != 0) goto _ctor;
code_r0x004033b0:
    *pbVar32 = *pbVar32 + (char)pbVar32;
    cVar9 = (char)pbVar32 + 'o';
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar9);
    *pbVar59 = *pbVar59 + cVar9;
    *(undefined2 *)pbVar62 = in_ES;
    *pbVar21 = *pbVar21 + cVar9;
    *param_2 = *param_2 - (char)((uint)pbVar32 >> 8);
    bVar67 = CARRY1(*param_2,(byte)pbVar21);
    *param_2 = *param_2 + (byte)pbVar21;
    pbVar14 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,uVar66);
    pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar9);
  }
  pbVar59 = pbVar14 + (uint)bVar67 + *(int *)pbVar22;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar22 >> 8),(byte)pbVar22 + *pbVar22);
  pbVar14 = (byte *)((int)piVar15 + (uint)CARRY1((byte)pbVar22,*pbVar22) + *piVar15);
  bVar10 = *pbVar14;
  bVar8 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar8;
  pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar8 + CARRY1(bVar10,bVar8));
  do {
    *pbVar21 = *pbVar21 + (char)param_2;
    param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)pbVar32 >> 8);
    uStack_24 = (byte *)CONCAT22(uStack_24._2_2_,in_ES);
    pbVar58 = uStack_24;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + *pbVar32,(char)pbVar21));
    *pbVar32 = *pbVar32 + (char)pbVar32;
    uStack_24 = (byte *)((uint)uStack_24._2_2_ << 0x10);
    pbVar14 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,(short)param_2);
    pbRam2a0a0000 = pbVar32;
code_r0x004033e7:
    param_2 = param_2 + 1;
    pbVar59 = pbVar14;
_ctor:
    uVar6 = uStack_20._2_2_;
    iVar17 = CONCAT31((int3)((uint)pbVar32 >> 8),(char)pbVar32 + *pbVar62) + 0x6128;
    uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
    bVar8 = (char)iVar17 + *(char *)((int)puVar63 * 2 + 0x400003e);
    pbVar32 = (byte *)CONCAT31((int3)((uint)iVar17 >> 8),bVar8);
    cVar9 = (char)param_2 - *pbVar62;
    puVar29 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar9);
    *(byte *)puVar29 = (byte)*puVar29 ^ bVar8;
    *pbVar32 = *pbVar32 + (char)((uint)pbVar62 >> 8);
    *pbVar32 = *pbVar32 + bVar8;
    *pbVar21 = *pbVar21 + cVar9;
    bVar10 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar8;
    *(byte **)(pbVar62 + -0x41) = pbVar59 + (uint)CARRY1(bVar10,bVar8) + *(int *)(pbVar62 + -0x41);
    do {
      *pbVar32 = *pbVar32 + (byte)pbVar32;
      uVar24 = (undefined3)((uint)pbVar32 >> 8);
      bVar10 = (byte)pbVar32 | *pbVar59;
      uVar65 = (undefined2)((uint)pbVar62 >> 0x10);
      uVar26 = SUB41(pbVar62,0);
      cVar33 = (char)((uint)pbVar62 >> 8) + pbVar62[0x69];
      *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
      cVar9 = bVar10 + 0x7d;
      pcVar57 = (char *)CONCAT31(uVar24,cVar9);
      pbVar59[(int)pcVar57] = pbVar59[(int)pcVar57] + cVar9;
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar26)) + 0x67);
      *pcVar57 = *pcVar57 + cVar9;
      pcVar57 = (char *)CONCAT31(uVar24,bVar10 - 6);
      puVar60 = (uint *)(pbVar59 + 4);
      out(*(undefined4 *)pbVar59,(short)puVar29);
      *pcVar57 = *pcVar57 + (bVar10 - 6);
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar26)) + 0x6b);
      *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
      pcVar57 = (char *)CONCAT31(uVar24,bVar10 + 0x7d);
      pbVar14 = (byte *)((int)puVar60 + (int)pcVar57);
      *pbVar14 = *pbVar14 + bVar10 + 0x7d;
      cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar26)) + 0x6a);
      pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar33,uVar26));
      puVar64 = puVar29;
      do {
        cVar9 = (char)pcVar57;
        *pcVar57 = *pcVar57 + cVar9;
        uVar24 = (undefined3)((uint)pcVar57 >> 8);
        bVar10 = cVar9 + 0x7d;
        pcVar16 = (char *)CONCAT31(uVar24,bVar10);
        *(byte *)((int)puVar60 + (int)pcVar16) = *(byte *)((int)puVar60 + (int)pcVar16) + bVar10;
        uVar28 = (undefined3)((uint)puVar64 >> 8);
        bVar8 = (char)puVar64 - *(byte *)((int)puVar64 + 0x457e02);
        puVar29 = (uint *)CONCAT31(uVar28,bVar8);
        pbVar58[0x6fe1411] = pbVar58[0x6fe1411] + bVar10;
        uVar20 = *puVar60;
        uVar5 = *puVar60;
        *(byte *)puVar60 = (byte)*puVar60 + bVar10;
        if (CARRY1((byte)uVar20,bVar10)) {
          *pcVar16 = *pcVar16 + bVar10;
          bVar10 = bVar10 | pcVar16[0x4000045];
          piVar15 = (int *)CONCAT31(uVar24,bVar10);
          if ((char)bVar10 < '\x01') {
            *(byte *)puVar29 = (byte)*puVar29 + bVar10;
            uStack_20._2_2_ = uVar6;
            goto code_r0x004034a0;
          }
          *(byte *)piVar15 = (char)*piVar15 + bVar10;
          bVar10 = bVar10 + 0x6f;
          pcVar16 = (char *)CONCAT31(uVar24,bVar10);
          *pcVar16 = *pcVar16 + bVar10;
          pbVar58 = pbVar58 + -*puVar29;
          *pcVar16 = *pcVar16 + bVar10;
          *pbVar62 = *pbVar62 + bVar8;
          *(byte *)((int)pcVar16 * 2) = *(byte *)((int)pcVar16 * 2) ^ bVar10;
          in_AF = 9 < (bVar10 & 0xf) | in_AF;
          uVar20 = CONCAT31(uVar24,bVar10 + in_AF * '\x06') & 0xffffff0f;
          cVar9 = (char)uVar20;
          pcVar57 = (char *)CONCAT22((short)(uVar20 >> 0x10),
                                     CONCAT11((char)((uint)pcVar57 >> 8) + in_AF,cVar9));
          *pcVar57 = *pcVar57 + cVar9;
          cRam72110000 = cRam72110000 + bVar8;
          puVar55 = (undefined2 *)segment(in_ES,(short)auStack_28 + -2);
          *puVar55 = in_ES;
          pcVar57[0x1a] = pcVar57[0x1a] + (char)((uint)puVar64 >> 8);
          cVar9 = (char)pbVar21;
          *pbVar21 = *pbVar21 + cVar9;
          *puVar29 = (uint)(pbVar21 + *puVar29);
          apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
          cVar33 = cVar33 + pbVar62[0x70];
          *pbVar21 = *pbVar21 + cVar9;
          uVar24 = (undefined3)((uint)pbVar21 >> 8);
          bVar10 = cVar9 + 0xa2;
          cVar33 = cVar33 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar33,uVar26)) + 0x6f);
          pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar33,uVar26));
          *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
          bVar27 = cVar9 + 0x44;
          piVar15 = (int *)CONCAT31(uVar24,bVar27);
          *(byte *)puVar29 = ((byte)*puVar29 - bVar27) - (0x5d < bVar10);
          if ((POPCOUNT((byte)*puVar29) & 1U) != 0) {
            *(byte *)piVar15 = (char)*piVar15 + bVar27;
            *(byte *)piVar15 = (char)*piVar15 + bVar27;
            *(char *)piVar15 = (char)*piVar15 + cVar33;
            puVar29 = (uint *)CONCAT22((short)((uint)puVar64 >> 0x10),(ushort)bVar8);
            *(byte *)piVar15 = (char)*piVar15 + bVar27;
            pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                       CONCAT11((char)((uint)pbVar21 >> 8) + (char)*piVar15,cVar9));
            uStack_20 = pbVar62;
            goto code_r0x00403511;
          }
          *(byte *)piVar15 = (char)*piVar15 + bVar27;
          cVar9 = cVar9 + -0x1a;
          piVar15 = (int *)CONCAT31(uVar24,cVar9);
          uStack_20 = (byte *)CONCAT22(uVar6,in_ES);
          *puVar29 = (*puVar29 - (int)piVar15) - (uint)(0x5d < bVar27);
          if ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0) {
            *(byte *)puVar29 = (byte)*puVar29 + cVar9;
            goto code_r0x004034f3;
          }
          *(char *)piVar15 = (char)*piVar15 + cVar9;
          goto code_r0x0040349e;
        }
        pcVar57 = pcVar16;
        puVar64 = puVar29;
      } while (SCARRY1((byte)uVar5,bVar10) == (char)(byte)*puVar60 < '\0');
      *pcVar16 = *pcVar16 + bVar10;
      piVar15 = (int *)CONCAT31(uVar24,cVar9 + -0x59);
      pbVar59 = (byte *)((int)puVar60 + (uint)(0xd5 < bVar10) + *piVar15);
      bVar27 = cVar9 + -0x59 + (char)*piVar15;
      pbVar32 = (byte *)CONCAT31(uVar24,bVar27);
      bVar10 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar27;
      *(byte **)pbVar32 = pbVar32 + (uint)CARRY1(bVar10,bVar27) + *(int *)pbVar32;
      bVar10 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar8;
    } while (CARRY1(bVar10,bVar8));
    *pbVar59 = *pbVar59 + bVar27;
    cVar9 = bVar8 - *pbVar62;
    param_2 = (byte *)CONCAT31(uVar28,cVar9);
    *param_2 = *param_2 ^ bVar27;
    *pbVar62 = *pbVar62 + cVar9;
    *pbVar32 = *pbVar32 + bVar27;
    *(char *)((int)pbVar32 * 2) = *(char *)((int)pbVar32 * 2) + cVar9;
  } while( true );
code_r0x0040349e:
  piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + -0x5e);
code_r0x004034a0:
  uStack_24 = (byte *)((uint)uStack_24._2_2_ << 0x10);
  pbVar21[0x2a0a0000] = pbVar21[0x2a0a0000] - (char)pbVar21;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((char)((uint)pbVar21 >> 8) + (char)*piVar15,(char)pbVar21));
  bVar10 = (byte)piVar15;
  *(byte *)piVar15 = (char)*piVar15 + bVar10;
  uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
  puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),
                             (char)puVar29 - *(byte *)((int)puVar29 + 0x467e02));
  pbVar58[0x6fe1411] = pbVar58[0x6fe1411] + bVar10;
  uVar20 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar10;
  if (!CARRY1((byte)uVar20,bVar10)) {
    pbVar14 = (byte *)((int)puVar63 + (int)pbVar58 * 2);
    *pbVar14 = *pbVar14 + bVar10;
    goto code_r0x004034f3;
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar10;
  uVar24 = (undefined3)((uint)piVar15 >> 8);
  bVar10 = bVar10 | *(byte *)((int)piVar15 + 0x4000046);
  piVar15 = (int *)CONCAT31(uVar24,bVar10);
  if ((char)bVar10 < '\x01') {
code_r0x00403511:
    pbVar58 = uStack_20;
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar10;
  pbVar14 = (byte *)CONCAT31(uVar24,bVar10 + 0x6f);
  *pbVar14 = *pbVar14 + bVar10 + 0x6f;
  pbVar58 = pbVar58 + -*puVar29;
  do {
    uStack_24 = (byte *)CONCAT22(uStack_24._2_2_,in_DS);
    bVar10 = *(byte *)((int)puVar63 + 0x17);
    *pbVar14 = *pbVar14 + (byte)pbVar14;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar21 >> 8) + bVar10 | (byte)*puVar29,
                                        (char)pbVar21));
    uVar24 = (undefined3)((uint)pbVar14 >> 8);
    bVar10 = (byte)pbVar14 | (byte)*puVar29;
    bVar8 = bVar10 - *(byte *)CONCAT31(uVar24,bVar10);
    puVar60 = (uint *)((int)puVar60 +
                      (uint)(bVar10 < *(byte *)CONCAT31(uVar24,bVar10)) +
                      *(int *)CONCAT31(uVar24,bVar8));
    pbVar14 = (byte *)CONCAT31(uVar24,bVar8);
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    *(byte *)puVar60 = (byte)*puVar60 + (char)puVar29;
    bVar10 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar8;
    *puVar29 = (uint)(pbVar14 + (uint)CARRY1(bVar10,bVar8) + *puVar29);
    if ((POPCOUNT(*puVar29 & 0xff) & 1U) != 0) {
      *(byte *)puVar60 = (byte)*puVar60 + 1;
      puVar64 = puVar60;
      goto code_r0x00403529;
    }
    *pbVar14 = *pbVar14 + bVar8;
    piVar15 = (int *)CONCAT31(uVar24,bVar8 + 0x6f);
code_r0x004034f3:
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    *(byte *)puVar60 = (byte)*puVar60 + (char)piVar15;
    pbVar58 = pbVar58 + 1;
    pcVar57 = (char *)((int)((uint)piVar15 | 8) + *(int *)((uint)piVar15 | 8));
    *pcVar57 = *pcVar57 + (char)pcVar57;
    piVar15 = (int *)(pcVar57 + 0x53000000);
    bVar10 = (byte)piVar15;
    *(byte *)piVar15 = (char)*piVar15 + bVar10;
    *pbVar62 = *pbVar62 + (char)puVar29;
    *(byte *)piVar15 = (char)*piVar15 + bVar10;
    *pbVar58 = *pbVar58 - (char)pbVar62;
    uVar20 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar10;
    if (CARRY1((byte)uVar20,bVar10)) goto code_r0x0040349e;
    uStack_24 = (byte *)CONCAT22(uStack_24._2_2_,in_ES);
    pcVar57[0x5300006f] = pcVar57[0x5300006f] + (char)((uint)puVar29 >> 8);
    pcVar57 = pcVar57 + 0x53000001;
    bVar8 = (byte)pcVar57;
    bRam7e060000 = bVar10;
    *pcVar57 = *pcVar57 + bVar8;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar57 >> 8),bVar8 + 0x2d);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar8) + puVar60[(int)puVar63 * 2]);
    puVar64 = puVar60;
code_r0x00403529:
    puVar60 = puVar64 + 1;
    out(*puVar64,(short)puVar29);
    bVar10 = *pbVar14;
    bVar8 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar8;
  } while (!CARRY1(bVar10,bVar8));
  *pbVar14 = *pbVar14 + bVar8;
  uVar24 = (undefined3)((uint)pbVar14 >> 8);
  bVar8 = bVar8 | pbVar14[0x4000040];
  pcVar57 = (char *)CONCAT31(uVar24,bVar8);
  uVar65 = in_ES;
  if ((char)bVar8 < '\x01') goto code_r0x00403579;
  *pcVar57 = *pcVar57 + bVar8;
  cVar9 = bVar8 + 10;
  pcVar57 = (char *)CONCAT31(uVar24,cVar9);
  puVar64 = puVar60;
  if (cVar9 == '\0' || SCARRY1(bVar8,'\n') != cVar9 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar10 = (byte)pcVar57;
  *pcVar57 = *pcVar57 + bVar10;
  piVar15 = (int *)CONCAT31((int3)((uint)pcVar57 >> 8),bVar10 + 0x2d);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar29 + (uint)(0xd2 < bVar10) + puVar60[(int)puVar63 * 2]);
  pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
code_r0x00403549:
  uVar20 = *puVar60;
  bVar10 = (byte)piVar15;
  *(byte *)puVar60 = (byte)*puVar60 + bVar10;
  if (!CARRY1((byte)uVar20,bVar10)) goto code_r0x004034f3;
  *(byte *)piVar15 = (char)*piVar15 + bVar10;
  uVar24 = (undefined3)((uint)piVar15 >> 8);
  bVar10 = bVar10 | *(byte *)((int)piVar15 + 0x4000041);
  if ((char)bVar10 < '\x01') {
    *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar21;
    *(byte *)puVar29 = (byte)*puVar29;
    pcVar57 = (char *)CONCAT31(uVar24,bVar10 + 0x7e);
    puVar29 = (uint *)((int)puVar29 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
  piVar15 = (int *)CONCAT31(uVar24,bVar10 + 0xb);
  puVar64 = puVar60;
code_r0x0040355b:
  pbVar58 = pbVar58 + -*(int *)((int)puVar64 + 2);
  *pbVar58 = *pbVar58 - (char)pbVar62;
  uVar20 = *puVar64;
  bVar10 = (byte)piVar15;
  *(byte *)puVar64 = (byte)*puVar64 + bVar10;
  if (CARRY1((byte)uVar20,bVar10)) goto code_r0x00403548;
code_r0x00403565:
  piVar15 = piVar15 + 0x1ec09c00;
  pbVar14 = (byte *)((int)puVar63 + (int)pbVar58 * 2);
  *pbVar14 = *pbVar14 + (char)piVar15;
  *(byte *)puVar64 = (byte)*puVar64 + (char)piVar15 + (char)*piVar15;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar29);
  pcVar57 = (char *)CONCAT31((int3)((uint)piVar15 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar21 = *pbVar21 + (char)pcVar57;
  *(byte *)puVar29 = (byte)*puVar29 - (char)((uint)pcVar57 >> 8);
  puVar64 = puVar60;
code_r0x00403580:
  *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar21;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar29);
  bVar10 = (byte)pcVar57;
  puVar29 = (uint *)((int)puVar29 + 1);
  bRam7e060000 = bVar10;
  *pcVar57 = *pcVar57 + bVar10;
  uVar24 = (undefined3)((uint)pcVar57 >> 8);
  bVar8 = bVar10 + 0x2d;
  pcVar57 = (char *)CONCAT31(uVar24,bVar8);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar29 + (uint)(0xd2 < bVar10) + puVar60[(int)puVar63 * 2]);
  pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
  uVar20 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar8;
  if (!CARRY1((byte)uVar20,bVar8)) {
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar64 + 0x45),
                                        (char)pbVar62));
    goto code_r0x0040353f;
  }
  *pcVar57 = *pcVar57 + bVar8;
  bVar8 = bVar8 | pcVar57[0x4000042];
  pcVar57 = (char *)CONCAT31(uVar24,bVar8);
  if ('\0' < (char)bVar8) {
code_r0x004035a1:
    bVar8 = (byte)pcVar57;
    *pcVar57 = *pcVar57 + bVar8;
    uVar24 = (undefined3)((uint)pcVar57 >> 8);
    bVar10 = bVar8 + 10;
    if (bVar10 == 0 || SCARRY1(bVar8,'\n') != (char)bVar10 < '\0') {
      pcVar57 = (char *)CONCAT31(uVar24,bVar8 + 8 + (0xf5 < bVar8));
code_r0x004035e5:
      bVar8 = (byte)pcVar57;
      *pcVar57 = *pcVar57 + bVar8;
      uVar24 = (undefined3)((uint)pcVar57 >> 8);
      bVar10 = bVar8 + 0x2d;
      pcVar57 = (char *)CONCAT31(uVar24,bVar10);
      puVar60[(int)puVar63 * 2] =
           (uint)((int)puVar29 + (uint)(0xd2 < bVar8) + puVar60[(int)puVar63 * 2]);
      uVar20 = *puVar60;
      *(byte *)puVar60 = (byte)*puVar60 + bVar10;
      if (CARRY1((byte)uVar20,bVar10)) {
        *pcVar57 = *pcVar57 + bVar10;
        bVar10 = bVar10 | pcVar57[0x4000044];
        pbVar14 = (byte *)CONCAT31(uVar24,bVar10);
        if ('\0' < (char)bVar10) {
          *pbVar14 = *pbVar14 + bVar10;
          pbVar14 = (byte *)(CONCAT31(uVar24,bVar10 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar10));
          pbRam2a060000 = pbVar14;
          *pbVar62 = *pbVar62 + (char)pbVar62;
          *(byte *)puVar29 = (byte)*puVar29 ^ (byte)pbVar14;
          *pbVar14 = *pbVar14 + (char)((uint)pbVar21 >> 8);
          *pbVar14 = *pbVar14 + (byte)pbVar14;
          puVar64 = puVar63;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),
                                 (byte)pbVar21 |
                                 *(byte *)((int)(puVar29 + 0xa004000) + (int)puVar63));
      puVar64 = puVar60;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
    bVar8 = bVar8 + 0x37;
    piVar15 = (int *)CONCAT31(uVar24,bVar8);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar10) + puVar60[(int)puVar63 * 2]);
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
    uVar20 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar8;
    puVar64 = puVar60;
    if (!CARRY1((byte)uVar20,bVar8)) goto code_r0x0040355b;
    *(byte *)piVar15 = (char)*piVar15 + bVar8;
    bVar8 = bVar8 | *(byte *)((int)piVar15 + 0x4000043);
    pbVar14 = (byte *)CONCAT31(uVar24,bVar8);
    if ((char)bVar8 < '\x01') {
      *pbVar14 = *pbVar14 + bVar8;
      pbVar58 = pbVar58 + -*(int *)((int)puVar63 + -0x5d);
      *pbVar14 = *pbVar14 + bVar8;
      uStack_38 = (undefined4 *)((uint)uStack_38._2_2_ << 0x10);
      piVar15 = (int *)CONCAT31(uVar24,bVar8 - *pbVar14);
      puVar60 = (uint *)((int)puVar60 + (-(uint)(bVar8 < *pbVar14) - *piVar15));
      pbVar14 = (byte *)CONCAT31(uVar24,(bVar8 - *pbVar14) + (char)*piVar15);
      pbStack_30 = (byte *)0x17000000;
      puVar64 = puVar63;
code_r0x00403615:
      bVar10 = *pbVar14;
      bVar8 = (byte)pbVar14;
      *pbVar14 = *pbVar14 + bVar8;
      *puVar29 = (uint)(pbVar14 + (uint)CARRY1(bVar10,bVar8) + *puVar29);
      puVar63 = puVar64;
      if ((POPCOUNT(*puVar29 & 0xff) & 1U) == 0) {
        *pbVar14 = *pbVar14 + bVar8;
        pcVar57 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar8 + 0x28);
        puVar63 = puVar64 + 1;
        uVar20 = in((short)puVar29);
        *puVar64 = uVar20;
        *pcVar57 = *pcVar57 + bVar8 + 0x28;
        pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar21 >> 8) | pbVar62[(int)pbVar21],
                                            (char)pbVar21));
        pcVar57[0x28] = pcVar57[0x28] + (char)((uint)puVar29 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar14 = *pbVar14 + bVar8;
    uVar20 = CONCAT31(uVar24,bVar8 + 0xb);
    piVar15 = (int *)(uVar20 - *puVar60);
    if (uVar20 < *puVar60) {
      cVar9 = (char)piVar15;
      *(char *)piVar15 = (char)*piVar15 + cVar9;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      cVar33 = (char)pbVar62;
      bVar10 = (byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar29 + 2);
      *pbVar58 = *pbVar58 - cVar33;
      *(byte *)puVar60 = (byte)*puVar60 + cVar9;
      uStack_38 = (undefined4 *)CONCAT22(uStack_38._2_2_,in_ES);
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar10 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar10,
                                                  cVar33)) + 0x38),cVar33));
      *(char *)piVar15 = (char)*piVar15 + cVar9;
      pcVar57 = (char *)CONCAT31((int3)((uint)piVar15 >> 8),cVar9 + 'o');
      *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar21;
      *pcVar57 = *pcVar57 - cVar33;
      *pcVar57 = *pcVar57 + cVar9 + 'o';
      puVar63 = (uint *)((int)puVar63 - puVar60[0x11]);
      goto code_r0x004035e5;
    }
    puVar64 = puVar60 + 1;
    out(*puVar60,(short)puVar29);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar8) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_30 & 0x4000) != 0;
  bVar68 = ((uint)pbStack_30 & 0x400) != 0;
  in_IF = ((uint)pbStack_30 & 0x200) != 0;
  in_TF = ((uint)pbStack_30 & 0x100) != 0;
  in_AF = ((uint)pbStack_30 & 0x10) != 0;
  in_ID = ((uint)pbStack_30 & 0x200000) != 0;
  in_AC = ((uint)pbStack_30 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar9 = (char)pcVar57;
  *pcVar57 = *pcVar57 + cVar9;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((byte)((uint)pbVar21 >> 8) | (byte)*puVar29,(char)pbVar21));
  pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x3e],(char)pbVar62));
  *pcVar57 = *pcVar57 + cVar9;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar57 >> 8),cVar9 + '(');
  cVar9 = (char)((uint)puVar29 >> 8);
  *(byte *)((int)puVar29 + 0x21) = *(byte *)((int)puVar29 + 0x21) + cVar9;
  pbVar32 = pbVar14 + 2;
  *pbVar32 = *pbVar32 + cVar9;
  bVar10 = *pbVar32;
code_r0x00403643:
  cVar9 = (char)pbVar14;
  if ((POPCOUNT(bVar10) & 1U) == 0) {
    *pbVar14 = *pbVar14 + cVar9;
    uVar24 = (undefined3)((uint)pbVar14 >> 8);
    cVar33 = cVar9 + '(';
    pcVar57 = (char *)CONCAT31(uVar24,cVar33);
    in_AF = ((uint)pbVar14 & 0x1000) != 0;
    *pcVar57 = *pcVar57 + cVar33;
    puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(byte)puVar29 | (byte)*puVar60);
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar60 + 0x3f),
                                        (char)pbVar62));
    *pcVar57 = *pcVar57 + cVar33;
    pbVar14 = (byte *)CONCAT31(uVar24,cVar9 + 'M');
    puVar29 = (uint *)((uint)puVar29 | *puVar29);
    *pbVar14 = *pbVar14 + (char)((uint)pbVar21 >> 8);
code_r0x00403659:
    puVar64 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
    bVar10 = (byte)pbVar14;
    *(byte *)puVar63 = bVar10;
    *pbVar14 = *pbVar14 + bVar10;
    uVar24 = (undefined3)((uint)pbVar14 >> 8);
    bVar10 = bVar10 | (byte)*puVar29;
    pcVar57 = (char *)CONCAT31(uVar24,bVar10);
    puVar63 = puVar64;
    if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x0040369e;
    *pcVar57 = *pcVar57 + bVar10;
    bVar10 = bVar10 + 2;
    *pbVar58 = *pbVar58 - (char)pbVar62;
    *(byte *)puVar60 = (byte)*puVar60 + bVar10;
    puVar61 = puVar60 + (uint)bVar68 * -2 + 1;
    out(*puVar60,(short)puVar29);
    puVar63 = (uint *)((int)puVar64 + (uint)bVar68 * -2 + 1);
    puVar60 = (uint *)((int)puVar61 + (uint)bVar68 * -2 + 1);
    *(byte *)puVar64 = (byte)*puVar61;
    *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
    cVar33 = (char)((uint)pbVar21 >> 8);
    pbVar62[-0x21f60000] = pbVar62[-0x21f60000] - cVar33;
    cVar9 = (bVar10 | (byte)*puVar60) - 6;
    piVar15 = (int *)CONCAT31(uVar24,cVar9);
    pcVar57 = (char *)((int)piVar15 * 2 + 0x2adc0a00);
    *pcVar57 = *pcVar57 - cVar33;
    *piVar15 = (int)(*piVar15 + (int)puVar29);
    *(char *)piVar15 = (char)*piVar15 + cVar9;
    bVar10 = cVar9 + (char)*piVar15;
    in_AF = 9 < (bVar10 & 0xf) | in_AF;
    uVar20 = CONCAT31(uVar24,bVar10 + in_AF * '\x06') & 0xffffff0f;
    pbVar14 = (byte *)CONCAT22((short)(uVar20 >> 0x10),
                               CONCAT11((char)((uint)pbVar14 >> 8) + in_AF,(char)uVar20));
    pbVar32 = pbVar21;
  }
  else {
    *(byte *)puVar29 = (byte)*puVar29 + cVar9;
    *(byte *)puVar63 = (byte)*puVar63 + (char)((uint)puVar29 >> 8);
    pbVar32 = pbVar21;
  }
  *(byte *)puVar60 = (byte)*puVar60 + (char)((uint)pbVar14 >> 8);
  *(byte *)puVar29 = (byte)*puVar29 + (char)pbVar32;
  bVar8 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar8;
  bVar10 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar8;
  pbVar21 = pbVar32;
  pbVar58 = pbStack_30;
  if (!CARRY1(bVar10,bVar8)) goto code_r0x004036a6;
  *pbVar14 = *pbVar14 + bVar8;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar8 | pbVar14[0x400003f]);
  pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),
                             (char)pbVar32 - *(byte *)((int)puVar29 + 0x5040302));
  *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) - (char)((uint)pbVar32 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(char)pbVar21 + (byte)*puVar60);
    pbVar14 = (byte *)(CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + '%') + 0x1ebd9f3);
    uStack_38 = (undefined4 *)CONCAT22(uStack_38._2_2_,in_ES);
    bVar10 = (byte)pbVar14;
    bVar67 = CARRY1(*pbVar14,bVar10);
    *pbVar14 = *pbVar14 + bVar10;
    puVar37 = uStack_38 + -1;
    *(undefined2 *)(uStack_38 + -1) = in_ES;
    cVar9 = (char)puVar29;
    if (bVar67) {
      *pbVar14 = *pbVar14 + bVar10;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      bVar27 = (byte)((uint)pbVar62 >> 8) | pbVar58[0x47];
      pcVar57 = (char *)CONCAT22(uVar66,CONCAT11(bVar27,(char)pbVar62));
      *pbVar14 = *pbVar14 + bVar10;
      uVar24 = (undefined3)((uint)pbVar14 >> 8);
      bVar10 = bVar10 + 0x2a;
      *pcVar57 = *pcVar57 + cVar9;
      pbVar14 = (byte *)((int)CONCAT31(uVar24,bVar10) * 2);
      *pbVar14 = *pbVar14 ^ bVar10;
      bVar10 = bVar10 ^ *(byte *)CONCAT31(uVar24,bVar10);
      pbVar14 = (byte *)CONCAT31(uVar24,bVar10);
      bVar8 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar10;
      *pbVar14 = (*pbVar14 - bVar10) - CARRY1(bVar8,bVar10);
      *pbVar21 = *pbVar21 + cVar9;
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar27 + pcVar57[0x38],(char)pbVar62));
      *pbVar14 = *pbVar14 + bVar10;
      cVar33 = bVar10 + 2;
      if ((POPCOUNT(cVar33) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar70 = (*pcVar2)();
        pbVar14 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar24,cVar33) = *(char *)CONCAT31(uVar24,cVar33) + cVar33;
      bVar10 = bVar10 + 0x71;
      pbVar14 = (byte *)CONCAT31(uVar24,bVar10);
      uVar65 = *(undefined2 *)(uStack_38 + -1);
      *pbVar14 = *pbVar14 + bVar10;
      iVar17 = (int)pbVar21 - *puVar29;
      pbVar21 = (byte *)CONCAT22((short)((uint)iVar17 >> 0x10),
                                 CONCAT11((char)((uint)iVar17 >> 8) + *pbVar14,(char)iVar17));
      pbVar58 = (byte *)*uStack_38;
      bVar67 = CARRY1(*pbVar14,bVar10);
      *pbVar14 = *pbVar14 + bVar10;
      *(undefined2 *)uStack_38 = in_ES;
      *(undefined2 *)(uStack_38 + -1) = in_ES;
    }
    bVar10 = (byte)pbVar14;
    uVar24 = (undefined3)((uint)pbVar14 >> 8);
    if (bVar67) break;
    *(byte *)puVar29 = (byte)*puVar29 + (byte)pbVar21;
    *(byte *)((int)puVar29 + (int)pbVar58) = *(byte *)((int)puVar29 + (int)pbVar58) + bVar10;
    pcVar57 = (char *)CONCAT31(uVar24,(byte)*puVar29);
code_r0x0040369e:
    pbVar14 = (byte *)(pcVar57 + *(int *)(pcVar57 + 0x6c28));
  }
  *pbVar14 = *pbVar14 + bVar10;
  uVar25 = (uint3)((uint)pbVar21 >> 8);
  pbVar32 = (byte *)CONCAT31(uVar25,(byte)pbVar21 | *pbVar62);
  uVar65 = *(undefined2 *)uStack_38;
  puVar37 = uStack_38 + 1;
  puVar64 = puVar60 + (uint)bVar68 * -2 + 1;
  out(*puVar60,(short)puVar29);
  puVar63 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
  *pbVar14 = *pbVar14 + bVar10;
  bVar10 = bVar10 | (byte)*puVar63;
  pbVar14 = (byte *)CONCAT31(uVar24,bVar10);
  *(byte *)(puVar63 + 0x1bc28000) = (byte)puVar63[0x1bc28000] - (char)((uint)pbVar21 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar10);
  *(undefined2 *)uStack_38 = pbStack_30._0_2_;
  cVar33 = (char)pbVar62;
  cVar31 = cVar33 - (byte)*puVar29;
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar31);
  if (cVar31 != '\0' && (char)(byte)*puVar29 <= cVar33) {
    *pbVar14 = *pbVar14 + bVar10;
    iVar17 = CONCAT31(uVar24,bVar10 + 0x2a);
    puVar60 = (uint *)((int)puVar64 + 1);
    cVar33 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + -0x7b);
    uVar70 = CONCAT44(CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar33,cVar9)),iVar17);
    in_ES = *(undefined2 *)uStack_38;
    pcVar57 = (char *)(iVar17 + 0x6f);
    *pcVar57 = *pcVar57 + cVar33;
    pbVar32 = (byte *)((uint)uVar25 << 8);
    do {
      piVar15 = (int *)((ulonglong)uVar70 >> 0x20);
      pcVar57 = (char *)uVar70;
      *(char *)piVar15 = (char)*piVar15;
      if ((char)*piVar15 == '\0') {
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        pbStack_30._0_2_ = in_ES;
_ctor:
        puVar29 = (uint *)((ulonglong)uVar70 >> 0x20);
        pbVar32 = (byte *)((uint)CONCAT21((short)((uint)pbVar32 >> 0x10),
                                          (char)((uint)pbVar32 >> 8) + *(char *)uVar70) << 8);
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        *(byte *)puVar29 = (byte)*puVar29;
        uVar24 = (undefined3)((ulonglong)uVar70 >> 8);
        bVar8 = (char)uVar70 - *(char *)uVar70;
        pbVar14 = (byte *)CONCAT31(uVar24,bVar8);
        bVar10 = *pbVar14;
        *pbVar14 = *pbVar14 + bVar8;
        puVar64 = (uint *)((int)puVar60 + (uint)CARRY1(bVar10,bVar8) + *(int *)pbVar14);
        pbVar14 = (byte *)CONCAT31(uVar24,bVar8);
        uStack_38 = puVar37;
        break;
      }
      *pcVar57 = *pcVar57 + (char)uVar70;
      *piVar15 = (int)(pbVar58 + *piVar15);
      puVar60 = (uint *)((int)puVar60 + 1);
      uVar70 = CONCAT44(CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar70 >> 0x28) +
                                          *(char *)((int)piVar15 + -0x33),
                                          (char)((ulonglong)uVar70 >> 0x20))),pcVar57);
      in_ES = *(undefined2 *)puVar37;
      puVar37 = (undefined4 *)((int)puVar37 + 4);
      pbVar14 = pbVar32;
code_r0x0040371e:
      puVar29 = (uint *)((ulonglong)uVar70 >> 0x20);
      pbVar21 = (byte *)uVar70;
      bVar8 = (byte)((ulonglong)uVar70 >> 0x28);
      pbVar21[0x6f] = pbVar21[0x6f] + bVar8;
      pbVar32 = (byte *)((uint)pbVar14 & 0xffffff00);
      *(char *)puVar29 = (char)*puVar29;
      bVar10 = (byte)uVar70;
      if ((char)*puVar29 != '\0') {
        *pbVar21 = *pbVar21 + bVar10;
        uVar20 = *puVar29;
        *puVar29 = (uint)(pbVar58 + *puVar29);
        piVar39 = (int *)((int)puVar37 + -4);
        *(uint **)((int)puVar37 + -4) = puVar60;
        if (CARRY4(uVar20,(uint)pbVar58)) {
          *pbVar21 = *pbVar21 + bVar10;
          *(undefined2 *)((int)puVar37 + -8) = in_ES;
          puVar64 = puVar29 + 0x1d028000;
          uVar20 = *puVar64;
          *(byte *)puVar64 = (byte)*puVar64 - bVar8;
          *(uint *)pbVar21 = (*(int *)pbVar21 - (int)pbVar21) - (uint)((byte)uVar20 < bVar8);
          *(byte *)puVar29 = (char)*puVar29 + bVar10;
          *pbVar58 = *pbVar58;
          uVar70 = CONCAT44(puVar29,CONCAT31((int3)((ulonglong)uVar70 >> 8),bVar10 + 0x2a));
          puVar38 = (undefined2 *)((int)puVar37 + -0xc);
          puVar37 = (undefined4 *)((int)puVar37 + -0xc);
          *puVar38 = in_DS;
          pbStack_30._0_2_ = in_ES;
          goto _ctor;
        }
        bVar67 = false;
        pcVar57 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),*pbVar21);
        goto code_r0x004037a7;
      }
      bVar8 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar10;
      *(uint *)pbVar21 = (*(int *)pbVar21 - (int)pbVar21) - (uint)CARRY1(bVar8,bVar10);
      bVar10 = *pbVar32;
      bVar8 = (byte)((ulonglong)uVar70 >> 0x20);
      *pbVar32 = *pbVar32 + bVar8;
      if (CARRY1(bVar10,bVar8)) goto code_r0x0040375a;
    } while( true );
  }
  uVar70 = CONCAT44(puVar29,pbVar14);
  puVar60 = puVar64 + (uint)bVar68 * -2 + 1;
  out(*puVar64,(short)puVar29);
  bVar8 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar8;
  *pbVar32 = *pbVar32 + (char)pbVar62;
  bVar10 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar8;
  *(byte **)(pbVar62 + -0x49) =
       (byte *)((int)puVar60 + (uint)CARRY1(bVar10,bVar8) + *(int *)(pbVar62 + -0x49));
  puVar37 = uStack_38;
  in_ES = pbStack_30._0_2_;
code_r0x0040375a:
  pbVar14 = (byte *)uVar70;
  *pbVar14 = *pbVar14 + (char)uVar70;
  bVar67 = CARRY1((byte)((uint)pbVar32 >> 8),*pbVar14);
  *(undefined2 *)((int)puVar37 + -4) = uVar65;
  iVar17 = CONCAT31(0x1f0a00,bVar67 + 'o') + *(int *)(pbVar62 + (int)pbVar58) +
           (uint)(0x90 < bVar67) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar70 >> 0x20);
  pcVar16 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + -0x66) | *puVar63);
  bVar10 = *(byte *)((int)puVar63 + -0x46);
  pcVar57 = (char *)CONCAT22(0xd0a,(ushort)bVar10 << 8);
  *pcVar16 = *pcVar16 + (char)pcVar16;
  bVar8 = (byte)((ulonglong)uVar70 >> 0x20);
  puVar30 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar62[(int)pbVar58],bVar8));
  *pcVar57 = *pcVar57 + (char)pcVar16;
  *pbVar58 = *pbVar58 - bVar10;
  *puVar30 = *puVar30;
  pbVar14 = (byte *)(((uint)pcVar16 | 8) + 0x4490f9d8);
  bVar10 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar10;
  uVar20 = *puVar60;
  *(uint *)((int)puVar60 + (int)pbVar14) = *(uint *)((int)puVar60 + (int)pbVar14) ^ (uint)pcVar57;
  *pbVar14 = *pbVar14 | bVar10;
  piVar39 = (int *)0x2609fffc;
  bVar67 = false;
  uRam2609fffc = in_ES;
  *pbVar14 = *pbVar14 | bVar10;
  uVar70 = CONCAT44(CONCAT31((int3)((uint)puVar30 >> 8),bVar8 | (byte)uVar20),pbVar14);
code_r0x004037a7:
  while( true ) {
    pbVar14 = (byte *)((ulonglong)uVar70 >> 0x20);
    uVar65 = (undefined2)((ulonglong)uVar70 >> 0x20);
    out(*puVar60,uVar65);
    out(puVar60[(uint)bVar68 * -2 + 1],uVar65);
    puVar29 = (uint *)((int)puVar63 + (int)pbVar14);
    uVar20 = *puVar29;
    uVar5 = (uint)uVar70 + *puVar29;
    *puVar29 = uVar5 + bVar67;
    iVar17 = *piVar39 + *(int *)(pcVar57 + (int)pbVar14) +
             (uint)(CARRY4(uVar20,(uint)uVar70) || CARRY4(uVar5,(uint)bVar67));
    cVar9 = (char)iVar17 + '\t';
    pbVar21 = (byte *)CONCAT31((int3)((uint)iVar17 >> 8),cVar9);
    pcVar16 = (char *)((uint)bVar68 * -8 + 0x260a0004);
    out(uRam260a0000,uVar65);
    uVar65 = (undefined2)piVar39[1];
    *pbVar21 = *pbVar21 + cVar9;
    bVar8 = (byte)((uint)pcVar57 >> 8) | *pbVar14;
    *(undefined2 *)(piVar39 + 1) = in_DS;
    bVar10 = *pbVar21;
    pbVar21 = pbVar21 + (uint)CARRY1(bVar8,*pbVar21) + *(int *)pbVar21;
    *pbVar14 = *pbVar14 + 6;
    cVar33 = (char)pbVar62 - *pcVar16;
    pcVar57 = (char *)CONCAT22((short)((uint)pcVar57 >> 0x10),CONCAT11(bVar8 + bVar10 + *pbVar21,6))
    ;
    *pbVar21 = *pbVar21;
    *(undefined2 *)piVar39 = in_ES;
    uVar24 = (undefined3)((uint)pbVar21 >> 8);
    cVar9 = (char)pbVar21 - *pbVar21;
    piVar15 = (int *)CONCAT31(uVar24,cVar9);
    puVar60 = (uint *)(pcVar16 + *piVar15);
    bVar10 = cVar9 + (char)*piVar15;
    pcVar16 = (char *)CONCAT31(uVar24,bVar10);
    piVar40 = piVar39 + -1;
    piVar39[-1] = (int)pcVar57;
    *pcVar16 = *pcVar16 + bVar10;
    *pcVar16 = *pcVar16 + bVar10;
    *pcVar16 = *pcVar16 + bVar10;
    bVar67 = CARRY1(*pbVar14,bVar10);
    *pbVar14 = *pbVar14 + bVar10;
    if (bVar67) break;
    in_ES = (undefined2)piVar39[-1];
    pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar33);
    uVar70 = CONCAT44(pbVar14,pcVar16);
  }
  *pcVar16 = *pcVar16 + bVar10;
  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((byte)((uint)pbVar62 >> 8) | bRam080a0056,cVar33));
  *pcVar16 = *pcVar16 + bVar10;
  bVar27 = bVar10 + 2;
  *pbVar32 = *pbVar32 - (char)((ulonglong)uVar70 >> 0x20);
  *(char *)CONCAT31(uVar24,bVar27) = *(char *)CONCAT31(uVar24,bVar27) + bVar27;
  uVar20 = *puVar60;
  uVar28 = (undefined3)((uint)pcVar57 >> 8);
  pbVar21 = (byte *)(CONCAT31(uVar28,(byte)uVar20) | 6);
  bVar8 = 9 < (bVar10 + 0x74 & 0xf) | in_AF;
  bVar11 = bVar10 + 0x74 + bVar8 * '\x06';
  bVar11 = bVar11 + (0x90 < (bVar11 & 0xf0) | 0x8d < bVar27 | bVar8 * (0xf9 < bVar11)) * '`';
  pbVar62 = (byte *)CONCAT31(uVar24,bVar11);
  bVar10 = *pbVar62;
  *pbVar62 = *pbVar62 + bVar11;
  if (!SCARRY1(bVar10,bVar11)) {
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    puVar60 = (uint *)((int)puVar60 + *(int *)(pbVar14 + 0x33));
    *pbVar62 = *pbVar62 | bVar11;
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    bVar10 = bVar11 + 0x72;
    piVar39[-2] = (int)pbVar32;
    *(byte *)CONCAT31(uVar24,bVar10) = *(byte *)CONCAT31(uVar24,bVar10) | bVar10;
    *(byte *)puVar60 = (byte)*puVar60 + bVar10;
    pbVar21 = (byte *)CONCAT31(uVar28,((byte)uVar20 | 6) + (byte)*puVar60);
    pcVar57 = (char *)CONCAT31(uVar24,bVar11 - 0x11);
    piVar40 = piVar39 + -3;
    piVar39[-3] = (int)pbVar21;
    *pcVar57 = *pcVar57 + (bVar11 - 0x11);
    pbVar62 = (byte *)CONCAT31(uVar24,bVar11 - 0xf);
    puVar63 = (uint *)((int)puVar63 + iRam080a0052);
    *pbVar62 = *pbVar62 + (bVar11 - 0xf);
  }
code_r0x00403825:
  pbVar59 = (byte *)0x80a0000;
  uVar24 = (undefined3)((uint)pbVar62 >> 8);
  cVar9 = (char)pbVar62 + '\x7f';
  pcVar57 = (char *)CONCAT31(uVar24,cVar9);
  *(byte **)((int)piVar40 + -4) = pbVar32;
  *pcVar57 = *pcVar57 + cVar9;
  iVar17 = CONCAT31(uVar24,(char)pbVar62 + -0x7f) + 0x547d;
  cVar33 = (char)iVar17;
  uVar24 = (undefined3)((uint)iVar17 >> 8);
  cVar9 = cVar33 + '*';
  pcVar57 = (char *)CONCAT31(uVar24,cVar9);
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 | (byte)*puVar60);
  cVar31 = (char)pbVar32 - (byte)*puVar60;
  uVar66 = (undefined2)((uint)pbVar32 >> 0x10);
  cVar34 = (char)((uint)pbVar32 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar31) + 0x57);
  *pcVar57 = *pcVar57 + cVar9;
  bVar10 = cVar33 + 0x54U & *pbVar14;
  iVar17 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
  pcVar57 = (char *)CONCAT31(uVar24,bVar10 + 0x2a);
  *(undefined2 *)((int)piVar40 + -8) = in_DS;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,cVar31)) + 0x58);
  *pcVar57 = *pcVar57 + bVar10 + 0x2a;
  bVar27 = bVar10 + 0x54 & *pbVar14;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar24,bVar27) = *(char *)CONCAT31(uVar24,bVar27) + bVar27;
  pcVar57 = (char *)CONCAT31(uVar24,bVar27 + 0x2a);
  pbVar62 = *(byte **)((int)piVar40 + -8);
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,cVar31)) + 0x55);
  *pcVar57 = *pcVar57 + bVar27 + 0x2a;
  pcVar57 = (char *)CONCAT31(uVar24,bVar27 + 0x57);
  pbVar14 = pbVar14 + *(int *)pbVar62;
  *(undefined4 *)((int)piVar40 + -8) = 0x2a;
  cVar34 = cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,cVar31)) + 0x55);
  *pcVar57 = *pcVar57 + bVar27 + 0x57;
  cVar9 = bVar27 - 0x3a;
  pcVar57 = (char *)CONCAT31(uVar24,cVar9);
  *(undefined2 *)((int)piVar40 + -0xc) = uVar65;
  *pcVar57 = *pcVar57 + cVar9;
  bVar10 = *pbVar14;
  cVar33 = (char)pbVar21;
  *(undefined2 *)((int)piVar40 + -0x10) = in_DS;
  pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(cVar34 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar34,
                                                  cVar31)) + 0x59),cVar31));
  *pcVar57 = *pcVar57 + cVar9;
  bVar12 = bVar27 - 0x10 & *pbVar14;
  puVar63 = (uint *)((int)puVar63 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar17);
  *(char *)CONCAT31(uVar24,bVar12) = *(char *)CONCAT31(uVar24,bVar12) + bVar12;
  bVar12 = bVar12 + 0x2a;
  pbVar58 = (byte *)CONCAT31(uVar24,bVar12);
  puVar37 = (undefined4 *)((int)piVar40 + -0x14);
  *(undefined2 *)((int)piVar40 + -0x14) = in_DS;
  bVar27 = *(byte *)((int)puVar63 + 0x17);
  *pbVar58 = *pbVar58 + bVar12;
  bVar11 = *pbVar14;
  puVar42 = (undefined4 *)((int)piVar40 + -0x18);
  *(undefined2 *)((int)piVar40 + -0x18) = in_DS;
  bVar13 = *(byte *)((int)puVar63 + 0x1a);
  *pbVar58 = *pbVar58 + bVar12;
  pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar21 >> 8) | bVar10) + bVar27 | bVar11) +
                                      bVar13 | *pbVar14,cVar33));
  *pbVar32 = *pbVar32 + cVar31;
  *(byte *)((int)pbVar58 * 2) = *(byte *)((int)pbVar58 * 2) ^ bVar12;
  bVar10 = *pbVar58;
  *pbVar58 = *pbVar58 + bVar12;
  bVar27 = *pbVar58;
  *pbVar21 = *pbVar21 + (char)pbVar14;
  bVar10 = ((bVar12 - bVar27) - CARRY1(bVar10,bVar12)) + *pbVar14;
  pbVar58 = (byte *)CONCAT31(uVar24,bVar10);
  if ((POPCOUNT(bVar10) & 1U) != 0) {
    pbVar14 = *(byte **)((int)piVar40 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar58 = *pbVar58 + bVar10;
  cVar9 = (bVar10 + 0x6f) - (0x90 < bVar10);
  pbVar22 = (byte *)CONCAT31(uVar24,cVar9);
  bVar10 = *pbVar14;
  *pbVar14 = *pbVar14 + cVar33;
  if (SCARRY1(bVar10,cVar33) == (char)*pbVar14 < '\0') {
    cRam33100000 = cRam33100000 - cVar9;
    cVar9 = cVar9 + *pbVar14;
    pbVar58 = (byte *)CONCAT31(uVar24,cVar9);
    puVar37 = (undefined4 *)((int)piVar40 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar22 = *pbVar22 + (char)pbVar22;
code_r0x004038b0:
    uVar24 = (undefined3)((uint)pbVar22 >> 8);
    cVar9 = (char)pbVar22 + '\x02';
    pbVar58 = (byte *)CONCAT31(uVar24,cVar9);
    puVar37 = puVar42;
    if ((POPCOUNT(cVar9) & 1U) != 0) {
code_r0x00403908:
      puVar63 = (uint *)((int)puVar63 - *(int *)pbVar62);
      cVar9 = (char)pbVar58 + *pbVar14;
      pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar9);
code_r0x0040390c:
      cVar33 = (char)pbVar58;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x0040390e;
      *pbVar62 = *pbVar62 + cVar33;
      goto code_r0x00403962;
    }
    *pbVar58 = *pbVar58 + cVar9;
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    piVar40 = (int *)((int)puVar42 + -4);
    *(byte **)((int)puVar42 + -4) = pbVar21;
    cVar9 = (char)pbVar22 + '.' + *pbVar14;
    pbVar58 = (byte *)CONCAT31(uVar24,cVar9);
    if ((POPCOUNT(cVar9) & 1U) != 0) {
      pbVar22 = pbVar14 + (int)pbVar58;
      *pbVar22 = *pbVar22 + cVar9;
      bVar10 = *pbVar22;
      goto code_r0x00403912;
    }
    *pbVar58 = *pbVar58 + cVar9;
    bVar10 = cVar9 + 2;
    pbVar58 = (byte *)CONCAT31(uVar24,bVar10);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00403916;
    *pbVar58 = *pbVar58 + bVar10;
    cVar33 = cVar9 + 'q';
    piVar15 = (int *)CONCAT31(uVar24,cVar33);
    *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0x90 < bVar10);
    bVar10 = *pbVar32;
    bVar27 = (byte)((uint)pbVar21 >> 8);
    *pbVar32 = *pbVar32 + bVar27;
    if (!CARRY1(bVar10,bVar27)) {
      out(*(undefined4 *)pbVar62,(short)pbVar14);
      bVar10 = (cVar33 - (char)*piVar15) - CARRY1(bVar10,bVar27);
      *pbVar14 = *pbVar14 + (char)pbVar21;
      cVar9 = bVar10 - *(byte *)CONCAT31(uVar24,bVar10);
      puVar60 = (uint *)(pbVar62 +
                        ((((uint)bVar68 * -8 + 4) - *(int *)CONCAT31(uVar24,cVar9)) -
                        (uint)(bVar10 < *(byte *)CONCAT31(uVar24,bVar10))));
      pbVar62 = (byte *)CONCAT31(uVar24,cVar9);
      goto code_r0x00403825;
    }
    *(char *)piVar15 = (char)*piVar15 + cVar33;
    uVar66 = (undefined2)((uint)pbVar32 >> 0x10);
    bVar10 = (byte)((uint)pbVar32 >> 8) | bRam080a0056;
    *(char *)piVar15 = (char)*piVar15 + cVar33;
    pcVar57 = (char *)CONCAT31(uVar24,cVar9 + 's');
    pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar10 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar10,(
                                                  char)pbVar32)) + 0x56),(char)pbVar32));
    *pcVar57 = *pcVar57 + cVar9 + 's';
    bVar10 = cVar9 - 0xf;
    pbVar14 = *(byte **)((int)puVar42 + -4);
    *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
    bVar27 = cVar9 + 0x1e;
    pbVar22 = (byte *)CONCAT31(uVar24,bVar27);
    *(byte **)(pbVar62 + (int)puVar63 * 8) =
         pbVar14 + (uint)(0xd2 < bVar10) + *(int *)(pbVar62 + (int)puVar63 * 8);
    puVar37 = (undefined4 *)((int)puVar42 + -4);
    puVar44 = (undefined4 *)((int)puVar42 + -4);
    *(undefined2 *)((int)puVar42 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar22;
    bVar10 = *pbVar62;
    *pbVar62 = *pbVar62 + bVar27;
    if (CARRY1(bVar10,bVar27)) {
      *pbVar22 = *pbVar22 + bVar27;
      pbVar58 = (byte *)CONCAT31(uVar24,bVar27 | pbVar22[0x400005a]);
      if ('\0' < (char)(bVar27 | pbVar22[0x400005a])) {
code_r0x004038f6:
        bVar10 = (byte)pbVar58;
        *pbVar58 = *pbVar58 + bVar10;
        uVar24 = (undefined3)((uint)pbVar58 >> 8);
        cVar9 = ((bVar10 + 0x28) - *(char *)CONCAT31(uVar24,bVar10 + 0x28)) - (0xd7 < bVar10);
        pbVar58 = (byte *)CONCAT31(uVar24,cVar9);
        bVar10 = *pbVar32;
        bVar27 = (byte)((uint)pbVar21 >> 8);
        *pbVar32 = *pbVar32 + bVar27;
        if (CARRY1(bVar10,bVar27)) {
          *pbVar58 = *pbVar58 + cVar9;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11(bVar27 | *pbVar58,(char)pbVar21));
          *pbVar62 = *pbVar62 + cVar9;
          goto code_r0x00403908;
        }
        pbVar22 = pbVar58 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar24 = (undefined3)((uint)pbVar58 >> 8);
      bVar27 = (char)pbVar58 + 0x6f;
      bVar10 = *(byte *)CONCAT31(uVar24,bVar27);
      *pbVar14 = *pbVar14 + (char)pbVar21;
      pbVar58 = (byte *)CONCAT31(uVar24,(bVar27 & bVar10) + *pbVar62);
      *pbVar21 = *pbVar21 - (char)((uint)pbVar14 >> 8);
      puVar49 = puVar44;
      goto code_r0x0040395a;
    }
    puVar41 = (undefined4 *)((int)puVar42 + -8);
    puVar42 = (undefined4 *)((int)puVar42 + -8);
    *puVar41 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar15 = (char)*piVar15 + bVar10;
  puVar60 = puVar64;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar58 = *pbVar58 + cVar33;
  bVar10 = cVar33 + 2;
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar10);
code_r0x00403912:
  bVar67 = (POPCOUNT(bVar10) & 1U) == 0;
  puVar49 = puVar37;
  if (!bVar67) goto code_r0x00403967;
  *pbVar58 = *pbVar58 + (char)pbVar58;
code_r0x00403916:
  bVar13 = (char)pbVar58 + 0x6f;
  pbVar22 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar58 >> 8),bVar13);
  bVar10 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar13;
  bVar27 = *pbVar22;
  bVar11 = *pbVar22;
  puVar49 = (undefined4 *)((int)puVar37 + -4);
  *(undefined2 *)((int)puVar37 + -4) = in_ES;
  if (bVar11 == 0 || SCARRY1(bVar10,bVar13) != (char)bVar27 < '\0') goto code_r0x00403979;
  *pbVar22 = *pbVar22 + bVar13;
  pbVar22 = (byte *)CONCAT31((int3)(char)((uint)pbVar58 >> 8),(char)pbVar58 + -100);
  *(byte **)(pbVar62 + (int)puVar63 * 8) =
       pbVar14 + (uint)(0xd2 < bVar13) + *(int *)(pbVar62 + (int)puVar63 * 8);
  puVar43 = (undefined2 *)((int)puVar37 + -8);
  puVar37 = (undefined4 *)((int)puVar37 + -8);
  *puVar43 = in_ES;
code_r0x00403926:
  puVar42 = puVar37 + 1;
  puVar49 = puVar37 + 1;
  puVar44 = puVar37 + 1;
  *(undefined4 *)pbVar22 = *puVar37;
  bVar10 = *pbVar62;
  bVar27 = (byte)pbVar22;
  *pbVar62 = *pbVar62 + bVar27;
  if (CARRY1(bVar10,bVar27)) {
    *pbVar22 = *pbVar22 + bVar27;
    uVar24 = (undefined3)((uint)pbVar22 >> 8);
    bVar27 = bVar27 | pbVar22[0x400005b];
    pbVar58 = (byte *)CONCAT31(uVar24,bVar27);
    pbVar22 = pbVar62;
    if ((char)bVar27 < '\x01') goto code_r0x00403991;
    *pbVar58 = *pbVar58 + bVar27;
    cVar9 = bVar27 + 0x28;
    pbVar58 = (byte *)CONCAT31(uVar24,cVar9);
    *(byte **)pbVar58 = pbVar58 + (uint)(0xd7 < bVar27) + *(int *)pbVar58;
    bVar10 = *pbVar32;
    bVar27 = (byte)((uint)pbVar21 >> 8);
    *pbVar32 = *pbVar32 + bVar27;
    if (CARRY1(bVar10,bVar27)) {
      *pbVar58 = *pbVar58 + cVar9;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11(bVar27 | *pbVar58,(char)pbVar21));
      *pbVar62 = *pbVar62 + cVar9;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar58 = *pbVar58 + cVar9;
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
  *pbVar58 = *pbVar58 + (char)pbVar58;
  puVar45 = (undefined2 *)((int)puVar49 + -4);
  puVar49 = (undefined4 *)((int)puVar49 + -4);
  *puVar45 = in_ES;
  pbVar14[0x16060000] = pbVar14[0x16060000] - (char)pbVar21;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar62);
  cVar9 = (char)pbVar58 + '\x02';
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar9);
  bVar67 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403967:
  if (!bVar67) goto code_r0x004039be;
  *pbVar58 = *pbVar58 + (char)pbVar58;
  uVar24 = (undefined3)((uint)pbVar58 >> 8);
  bVar10 = (char)pbVar58 + 0x6f;
  bVar10 = bVar10 & *(byte *)CONCAT31(uVar24,bVar10);
  pbVar22 = (byte *)CONCAT31(uVar24,bVar10);
  *pbVar14 = *pbVar14 + (char)pbVar21;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar10;
code_r0x00403979:
  do {
    bVar10 = (char)pbVar22 - (byte)*puVar63;
    bVar67 = bVar10 < *pbVar21;
    pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar10 - *pbVar21);
    do {
      cVar9 = (char)pbVar58;
      *pbVar58 = *pbVar58 + cVar9 + bVar67;
      *pbVar58 = *pbVar58 + cVar9;
      *pbVar21 = *pbVar21 + (char)pbVar14;
      pbVar21[0x101c00aa] = pbVar21[0x101c00aa] + (char)pbVar32;
      *pbVar58 = *pbVar58 + cVar9;
      *(byte **)pbVar62 = pbVar32 + *(int *)pbVar62;
      bVar10 = (byte)((uint)pbVar21 >> 8);
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11(bVar10 + *pbVar58,(char)pbVar21));
      pbVar58 = pbVar58 + (uint)CARRY1(bVar10,*pbVar58) + *(int *)pbVar58;
      pbVar22 = pbVar62;
code_r0x00403991:
      cVar9 = (char)pbVar21;
      *pbVar14 = *pbVar14 + cVar9;
      cVar33 = (char)pbVar32 - pbVar22[2];
      pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar33);
      pbVar62 = pbVar22;
      if ((POPCOUNT(cVar33) & 1U) != 0) goto code_r0x0040395a;
      *pbVar58 = *pbVar58 + (byte)pbVar58;
      uVar25 = (uint3)((uint)pbVar58 >> 8);
      bVar10 = (byte)pbVar58 | *pbVar32;
      piVar15 = (int *)CONCAT31(uVar25,bVar10);
      bVar27 = (byte)((uint)pbVar21 >> 8);
      bVar11 = (byte)pbVar14;
      if (bVar10 == 0) {
        *(char *)piVar15 = (char)*piVar15;
        puVar49 = (undefined4 *)((int)puVar49 + -*(int *)(pbVar59 + 0x1b000007));
        pbVar62 = pbVar22 + (uint)bVar68 * -8 + 4;
        out(*(undefined4 *)pbVar22,(short)pbVar14);
        pbVar58 = (byte *)((uint)uVar25 << 8);
        *pbVar14 = *pbVar14 + cVar9;
        pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar11 - *pbVar32);
        *pbVar32 = *pbVar32;
        *pbVar14 = *pbVar14 + bVar27;
        *pbVar58 = *pbVar58;
        *pbVar32 = *pbVar32 + cVar33;
        *pbVar58 = *pbVar58;
        *(byte **)(pbVar32 + -0x3d) = pbVar62 + *(int *)(pbVar32 + -0x3d);
        break;
      }
      pbVar59 = pbVar59 + -puVar63[9];
      *(byte *)piVar15 = (char)*piVar15 + bVar10;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar27 | *pbVar14,cVar9));
      pbVar62 = pbVar22 + *piVar15;
      pcVar57 = (char *)((int)piVar15 + *piVar15);
      bVar27 = (char)pcVar57 - *pcVar57;
      pbVar58 = (byte *)CONCAT31((int3)((uint)pcVar57 >> 8),bVar27);
      bVar10 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar27;
      pbVar58 = pbVar58 + (-(uint)CARRY1(bVar10,bVar27) - *(int *)pbVar58);
      bVar67 = CARRY1(*pbVar21,bVar11);
      *pbVar21 = *pbVar21 + bVar11;
    } while (!bVar67);
    *pbVar58 = *pbVar58 + (char)pbVar58;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | *pbVar14);
code_r0x004039be:
    puVar37 = (undefined4 *)((int)puVar49 + -4);
    puVar46 = (undefined1 *)((int)puVar49 + -4);
    *(undefined2 *)((int)puVar49 + -4) = in_ES;
    puVar63 = (uint *)((int)puVar63 + *(int *)(pbVar59 + -0x3c));
    *pbVar58 = *pbVar58 + (byte)pbVar58;
    uVar24 = (undefined3)((uint)pbVar58 >> 8);
    bVar10 = (byte)pbVar58 | *pbVar14;
    pcVar57 = (char *)CONCAT31(uVar24,bVar10);
    if ((POPCOUNT(bVar10) & 1U) != 0) {
      cVar9 = *pcVar57;
      *pcVar57 = *pcVar57 + bVar10;
      cVar33 = *pcVar57;
      puVar30 = (undefined1 *)((int)puVar49 + -4);
      if (!SCARRY1(cVar9,bVar10)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar37 = (undefined4 *)puVar30;
      cVar9 = (char)pcVar57;
      *pcVar57 = *pcVar57 + cVar9;
      uVar24 = (undefined3)((uint)pcVar57 >> 8);
      bVar10 = cVar9 + 2;
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        pcVar57 = (char *)CONCAT31(uVar24,bVar10 + *pbVar14);
        pbVar58 = pbVar62;
        if ((POPCOUNT(bVar10 + *pbVar14) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar62 + (int)puVar63 * 8) =
             pbVar14 + (uint)(0xd2 < (byte)pcVar57) + *(int *)(pbVar62 + (int)puVar63 * 8);
        puVar48 = (undefined2 *)((int)puVar37 + -4);
        puVar37 = (undefined4 *)((int)puVar37 + -4);
        *puVar48 = in_ES;
        pbVar22 = pbVar59;
        pbVar23 = (byte *)CONCAT31((int3)((uint)pcVar57 >> 8),(byte)pcVar57 + 0x2d);
code_r0x00403ad8:
        pbVar59 = pbVar23;
        bVar10 = *pbVar22;
        bVar27 = (byte)pbVar22;
        *pbVar22 = *pbVar22 + bVar27;
        puVar49 = (undefined4 *)((int)puVar37 + -4);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        puVar30 = (undefined1 *)((int)puVar37 + -4);
        if (CARRY1(bVar10,bVar27)) {
          *pbVar22 = *pbVar22 + bVar27;
          bVar27 = bVar27 | pbVar22[0x400005d];
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar27);
          pbVar58 = pbVar62;
          if ((char)bVar27 < '\x01') {
            *pbVar22 = *pbVar22 + bVar27;
            pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar21 >> 8) | *pbVar14,(char)pbVar21)
                                      );
            pbVar58 = *(byte **)((int)puVar37 + -4);
            pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                       CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[-0x39],
                                                (char)pbVar32));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar22 = *pbVar22 + (char)pbVar22;
          cVar9 = (char)pbVar22 + '(';
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          bVar10 = *pbVar32;
          bVar27 = (byte)((uint)pbVar21 >> 8);
          *pbVar32 = *pbVar32 + bVar27;
          pbVar62 = pbVar58;
          if (!CARRY1(bVar10,bVar27)) {
            puVar37 = (undefined4 *)((int)puVar49 + -4);
            *(undefined2 *)((int)puVar49 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar22 = *pbVar22 + cVar9;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
      piVar15 = (int *)CONCAT31(uVar24,cVar9 + '*');
      *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0xd7 < bVar10);
      bVar10 = *pbVar14;
      bVar13 = (byte)pbVar21;
      *pbVar14 = *pbVar14 + bVar13;
      out(*(undefined4 *)pbVar62,(short)pbVar14);
      bVar11 = ((cVar9 + '*') - (char)*piVar15) - CARRY1(bVar10,bVar13);
      pbVar58 = (byte *)CONCAT31(uVar24,bVar11);
      *pbVar14 = *pbVar14 + bVar13;
      uVar66 = (undefined2)((uint)pbVar32 >> 0x10);
      uVar26 = SUB41(pbVar32,0);
      cVar9 = (char)((uint)pbVar32 >> 8) - pbVar62[(uint)bVar68 * -8 + 0x1f];
      pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(cVar9,uVar26));
      *pbVar58 = *pbVar58 + bVar11;
      bVar27 = *pbVar14;
      bVar10 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar11;
      pbVar62 = pbVar62 + ((((uint)bVar68 * -8 + 4) - *(int *)pbVar58) - (uint)CARRY1(bVar10,bVar11)
                          );
      pbVar58 = (byte *)CONCAT31(uVar24,bVar11);
      pbVar21 = (byte *)(CONCAT22((short)((uint)pbVar21 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar21 >> 8) | bVar27,bVar13)) + -1);
      bVar10 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar11;
      bVar10 = (bVar11 - *pbVar58) - CARRY1(bVar10,bVar11);
      *pbVar21 = *pbVar21 + (char)pbVar14;
      bVar67 = CARRY1(bVar10,*pbVar14);
      bVar10 = bVar10 + *pbVar14;
      pbVar58 = (byte *)CONCAT31(uVar24,bVar10);
      if ((POPCOUNT(bVar10) & 1U) == 0) {
        *pbVar58 = *pbVar58 + bVar10;
        cVar33 = (bVar10 + 0x6f) - (0x90 < bVar10);
        pbVar22 = (byte *)CONCAT31(uVar24,cVar33);
        bVar10 = *pbVar14;
        *pbVar14 = *pbVar14 + (char)pbVar21;
        if (SCARRY1(bVar10,(char)pbVar21) == (char)*pbVar14 < '\0') {
code_r0x00403aaf:
          cVar9 = (char)pbVar22 + '(';
          pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
          *(byte **)pbVar22 = pbVar22 + *(int *)pbVar22;
          bVar10 = *pbVar32;
          bVar27 = (byte)((uint)pbVar21 >> 8);
          *pbVar32 = *pbVar32 + bVar27;
          pbVar23 = pbVar59;
          if (!CARRY1(bVar10,bVar27)) goto code_r0x00403ad8;
          *pbVar22 = *pbVar22 + cVar9;
          pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                     CONCAT11(bVar27 | *pbVar32,(char)pbVar21));
          if ((POPCOUNT(*pbVar14 - cVar9) & 1U) != 0) {
            *pbVar62 = *pbVar62 + cVar9;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar22 = *pbVar22 + cVar33;
          pcVar57 = (char *)CONCAT31(uVar24,cVar33 + '\x02');
          bVar27 = cVar9 + pbVar32[0x52];
          pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar27,uVar26));
          *pcVar57 = *pcVar57 + cVar33 + '\x02';
          bVar10 = cVar33 + 4;
          pbVar22 = (byte *)CONCAT31(uVar24,bVar10);
          if ((POPCOUNT(bVar10) & 1U) == 0) {
            *pbVar22 = *pbVar22 + bVar10;
            cVar9 = (cVar33 + 's') - (0x90 < bVar10);
            pcVar57 = (char *)CONCAT31(uVar24,cVar9);
            bVar10 = (byte)((uint)pbVar21 >> 8);
            bVar67 = CARRY1(*pbVar32,bVar10);
            *pbVar32 = *pbVar32 + bVar10;
            pbVar58 = pbVar62;
            if (bVar67) {
              *pcVar57 = *pcVar57 + cVar9;
              pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar27 | pbVar59[0x5c],uVar26));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar63 = (uint *)((int)puVar63 - *(int *)pbVar22);
          pbVar32 = (byte *)CONCAT22(uVar66,CONCAT11(bVar27 + pbVar32[0x52],uVar26));
        }
        *pbVar22 = *pbVar22 + (char)pbVar22;
        cVar9 = (char)pbVar22 + '\x02';
        pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
        bVar67 = (POPCOUNT(cVar9) & 1U) == 0;
        if (!bVar67) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar10 = (byte)pbVar58;
        *pbVar58 = *pbVar58 + bVar10;
        cVar9 = (bVar10 + 0x6f) - (0x90 < bVar10);
        pcVar57 = (char *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar9);
        bVar10 = *pbVar32;
        cVar33 = (char)((uint)pbVar21 >> 8);
        *pbVar32 = *pbVar32 + cVar33;
        if (*pbVar32 == 0 || SCARRY1(bVar10,cVar33) != (char)*pbVar32 < '\0') goto code_r0x00403b2c;
        *pcVar57 = *pcVar57 + cVar9;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar67) {
        pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                   CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x53],(char)pbVar32
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar58 = *pbVar58 + (byte)pbVar58;
      bVar10 = (byte)pbVar58 | pbVar58[0x400005e];
      pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar10);
      if ('\0' < (char)bVar10) {
        *pbVar22 = *pbVar22 + bVar10;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar57 = *pcVar57 + bVar10;
    *pbVar62 = *pbVar62 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar24,bVar10 + 6);
    pbVar22 = (byte *)uVar3;
    bVar10 = *pbVar14;
    bVar27 = (byte)pbVar21;
    *pbVar14 = *pbVar14 + bVar27;
    if (CARRY1(bVar10,bVar27)) {
      *pbVar22 = *pbVar22 + (char)uVar3;
      bVar11 = (byte)((uint)pbVar21 >> 8) | *pbVar22;
      uVar66 = CONCAT11(bVar11,bVar27);
      pbVar22 = pbVar22 + -*(int *)pbVar22;
      bVar10 = *pbVar32;
      *pbVar32 = *pbVar32 + bVar11;
      if (CARRY1(bVar10,bVar11)) {
        cVar33 = (char)pbVar22;
        *pbVar22 = *pbVar22 + cVar33;
        bVar10 = *pbVar14;
        pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                                   CONCAT11((char)((uint)pbVar14 >> 8) - pbVar32[-0x3a],
                                            (char)pbVar14));
        *pbVar22 = *pbVar22 + cVar33;
        uVar36 = (undefined2)((uint)pbVar32 >> 0x10);
        bVar35 = (byte)((uint)pbVar32 >> 8) | pbVar14[0x32];
        pcVar57 = (char *)CONCAT22(uVar36,CONCAT11(bVar35,(char)pbVar32));
        cVar9 = *pcVar57;
        puVar46 = (undefined1 *)((int)puVar49 + -8);
        *(undefined2 *)((int)puVar49 + -8) = in_CS;
        cVar9 = cVar33 + cVar9 + '-';
        pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
        *pbVar22 = *pbVar22;
        *(undefined2 *)((int)puVar49 + -0xc) = in_ES;
        bVar13 = *pbVar14;
        uVar65 = *(undefined2 *)((int)puVar49 + -0xc);
        cVar33 = (char)pbVar32 - *pbVar62;
        bVar12 = *(byte *)((int)puVar63 + 0x17);
        *pbVar22 = *pbVar22 + cVar9;
        uVar66 = CONCAT11((bVar11 | bVar10) + bVar12 | *pbVar14,bVar27 - bVar13);
        pbVar32 = (byte *)CONCAT22(uVar36,CONCAT11(bVar35 + *(char *)(CONCAT31((int3)((uint)pcVar57
                                                                                     >> 8),cVar33) +
                                                                     0x4e),cVar33));
        *pbVar22 = *pbVar22 + cVar9;
      }
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),uVar66);
      bVar10 = (byte)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      pcVar57 = (char *)CONCAT31(uVar24,bVar10 + 0x28);
      *pcVar57 = (*pcVar57 - (bVar10 + 0x28)) - (0xd7 < bVar10);
      *pbVar14 = *pbVar14 + (char)uVar66;
      bVar27 = bVar10 + 0x1b;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x4f],(char)pbVar32))
      ;
      *(char *)CONCAT31(uVar24,bVar27) = *(char *)CONCAT31(uVar24,bVar27) + bVar27;
      pcVar16 = (char *)CONCAT31(uVar24,bVar10 + 0x43);
      *pcVar16 = (*pcVar16 - (bVar10 + 0x43)) - (0xd7 < bVar27);
      *pbVar14 = *pbVar14 + (char)uVar66;
      pcVar57 = pcVar16 + -0x6b721c;
      pcVar16 = pcVar16 + -0x6b721a;
      *pcVar16 = *pcVar16 + (char)((uint)pbVar14 >> 8);
      cVar33 = *pcVar16;
      puVar37 = (undefined4 *)puVar46;
code_r0x00403a22:
      puVar30 = (undefined1 *)puVar37;
      if ((POPCOUNT(cVar33) & 1U) == 0) goto code_r0x00403a24;
      bVar10 = *pbVar14;
      *pbVar14 = *pbVar14 + (char)pbVar21;
      if (SCARRY1(bVar10,(char)pbVar21) == (char)*pbVar14 < '\0') {
        pbVar22 = pbVar59;
        pbVar23 = (byte *)(pcVar57 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar57 = *pcVar57 + (char)pcVar57;
      pcVar57 = (char *)CONCAT31((int3)((uint)pcVar57 >> 8),(char)pcVar57 + '\x02');
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x54],(char)pbVar32))
      ;
      pbVar58 = pbVar62;
code_r0x00403a7d:
      cVar9 = (char)pcVar57;
      *pcVar57 = *pcVar57 + cVar9;
      uVar24 = (undefined3)((uint)pcVar57 >> 8);
      cVar33 = cVar9 + '-';
      pbVar23 = (byte *)CONCAT31(uVar24,cVar33);
      pbVar22 = pbVar59;
      pbVar62 = pbVar58;
      if ((POPCOUNT(cVar33 - *pbVar14) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar23 = *pbVar23 + cVar33;
      bVar10 = cVar9 + 0x2f;
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        bVar10 = *pbVar14;
        *pbVar14 = *pbVar14 + (byte)pbVar21;
        *pbVar59 = *pbVar59 - CARRY1(bVar10,(byte)pbVar21);
        pbVar22 = (byte *)CONCAT31(uVar24,cVar9 + -0x53);
        pbVar59 = (byte *)*puVar37;
        puVar49 = puVar37 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
      bVar67 = 0x90 < bVar10;
      pcVar57 = (char *)CONCAT31(uVar24,cVar9 + -0x62);
code_r0x00403a8f:
      uVar24 = (undefined3)((uint)pcVar57 >> 8);
      bVar27 = (char)pcVar57 - bVar67;
      pbVar22 = (byte *)CONCAT31(uVar24,bVar27);
      bVar10 = *pbVar32;
      cVar9 = (char)((uint)pbVar21 >> 8);
      *pbVar32 = *pbVar32 + cVar9;
      puVar49 = puVar37;
      pbVar62 = pbVar58;
      if (*pbVar32 != 0 && SCARRY1(bVar10,cVar9) == (char)*pbVar32 < '\0') {
        *pbVar22 = *pbVar22 + bVar27;
        pbVar62 = (byte *)CONCAT31(uVar24,bVar27 + 0x2d);
        *(byte **)(pbVar58 + (int)puVar63 * 8) =
             pbVar14 + (uint)(0xd2 < bVar27) + *(int *)(pbVar58 + (int)puVar63 * 8);
        *(undefined2 *)((int)puVar37 + -4) = in_ES;
        bVar67 = CARRY1(*pbVar58,(byte)pbVar58);
        *pbVar58 = *pbVar58 + (byte)pbVar58;
        puVar47 = (undefined2 *)((int)puVar37 + -8);
        puVar37 = (undefined4 *)((int)puVar37 + -8);
        *puVar47 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar21 >> 8) | *pbVar22,(char)pbVar21));
      *pbVar62 = *pbVar62 + (char)pbVar22;
      puVar30 = (undefined1 *)puVar49;
code_r0x00403afc:
      puVar37 = (undefined4 *)puVar30;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) + pbVar32[0x55],(char)pbVar32))
      ;
      *pbVar22 = *pbVar22 + (char)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar27 = (char)pbVar22 + 0x6f;
      bVar10 = *(byte *)CONCAT31(uVar24,bVar27);
      *pbVar14 = *pbVar14 + (char)pbVar21;
      pbVar22 = (byte *)CONCAT31(uVar24,(bVar27 & bVar10) + *pbVar62);
      *pbVar21 = *pbVar21 - (char)((uint)pbVar14 >> 8);
      break;
    }
    uVar65 = *(undefined2 *)((int)puVar49 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  puVar50 = (undefined2 *)((int)puVar37 + -4);
  puVar37 = (undefined4 *)((int)puVar37 + -4);
  *puVar50 = in_ES;
  pbVar14[0x16060000] = pbVar14[0x16060000] - (char)pbVar21;
  pbVar32 = (byte *)((uint)pbVar32 | (uint)pbVar62);
  cVar9 = (char)pbVar22 + '\x02';
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),cVar9);
  bVar67 = (POPCOUNT(cVar9) & 1U) == 0;
code_r0x00403b18:
  bVar10 = (byte)pbVar58;
  uVar24 = (undefined3)((uint)pbVar58 >> 8);
  if (!bVar67) {
    *pbVar14 = *pbVar14 + (char)pbVar21;
    pbVar22 = (byte *)CONCAT31(uVar24,bVar10 | *pbVar62);
code_r0x00403b73:
    pbVar58 = (byte *)((int)puVar63 + *(int *)(pbVar59 + -0x37));
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    uVar24 = (undefined3)((uint)pbVar22 >> 8);
    bVar10 = (byte)pbVar22 | *pbVar14;
    pcVar57 = (char *)CONCAT31(uVar24,bVar10);
    uVar70 = CONCAT44(pbVar14,pcVar57);
    if ((POPCOUNT(bVar10) & 1U) == 0) {
      *pcVar57 = *pcVar57 + bVar10;
      *pbVar62 = *pbVar62 + 1;
      return (byte *)CONCAT31(uVar24,bVar10 + 6);
    }
    bVar10 = *pbVar62;
    *pbVar62 = *pbVar62 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar10,'\x01')) {
      uVar70 = (*pcVar2)();
      pbVar21 = extraout_ECX_00;
    }
    pbVar14 = (byte *)uVar70;
    *pbVar14 = *pbVar14 + (char)uVar70;
    cVar33 = (char)((ulonglong)uVar70 >> 0x20);
    puVar63 = (uint *)CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar32[0x2f],cVar33));
    *pbVar14 = *pbVar14 + (char)uVar70;
    cVar9 = (char)pbVar21;
    bVar11 = (byte)((uint)pbVar21 >> 8) | *pbVar14;
    pbVar14 = pbVar14 + *(int *)pbVar14;
    bVar10 = *pbVar32;
    *pbVar32 = *pbVar32 + bVar11;
    bVar27 = (byte)pbVar14;
    if (CARRY1(bVar10,bVar11)) {
      *pbVar14 = *pbVar14 + bVar27;
      bVar11 = bVar11 | (byte)*puVar63;
      *pbVar32 = *pbVar32 - cVar33;
      *pbVar14 = *pbVar14 + bVar27;
      uVar24 = (undefined3)((uint)pbVar14 >> 8);
      bVar27 = bVar27 | (byte)*puVar63;
      puVar29 = (uint *)CONCAT31(uVar24,bVar27);
      bVar67 = CARRY4((uint)pbVar59,*puVar29);
      bVar69 = SCARRY4((int)pbVar59,*puVar29);
      pbVar59 = pbVar59 + *puVar29;
      *(uint *)((int)puVar37 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar69 * 0x800 | (uint)bVar68 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar59 < 0) * 0x80 |
           (uint)(pbVar59 == (byte *)0x0) * 0x40 | (uint)(bVar8 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar59 & 0xff) & 1U) == 0) * 4 | (uint)bVar67 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar29 = (char)*puVar29 + bVar27;
      *(undefined2 *)((int)puVar37 + -8) = in_ES;
      cVar33 = (char)pbVar32 - *pbVar62;
      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                 CONCAT11((char)((uint)pbVar32 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar32 >> 8),cVar33) +
                                                   0x5f),cVar33));
      *(byte *)puVar29 = (char)*puVar29 + bVar27;
      bVar10 = bVar27 + 0x2a & (byte)*puVar63;
      pbVar58 = pbVar58 + *(int *)(pbVar59 + 0x5f);
      *(char *)CONCAT31(uVar24,bVar10) = *(char *)CONCAT31(uVar24,bVar10) + bVar10;
      pbVar14 = (byte *)CONCAT31(uVar24,bVar10 + 0x2a);
      *(byte *)puVar63 = (byte)*puVar63 + 0x28;
      *pbVar14 = *pbVar14 + bVar10 + 0x2a;
      puVar53 = (undefined2 *)((int)puVar37 + -0xc);
      puVar37 = (undefined4 *)((int)puVar37 + -0xc);
      *puVar53 = in_ES;
    }
    else {
      *pbVar62 = *pbVar62 + bVar27;
    }
    pcVar57 = (char *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar11,cVar9));
    *pbVar59 = *pbVar59 - bVar11;
    *(byte *)puVar63 = (byte)*puVar63 + cVar9;
    bVar10 = (byte)pbVar14 - 0xb;
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar10);
    if (10 < (byte)pbVar14) {
      *pbVar21 = *pbVar21 | bVar10;
      return pbVar21;
    }
    *(byte *)puVar63 = (byte)*puVar63 + cVar9;
    do {
      *(undefined2 *)((int)puVar37 + -4) = in_ES;
      bVar10 = pbVar32[-0x23];
      bVar27 = (byte)pbVar21;
      *pbVar21 = *pbVar21 + bVar27;
      bVar8 = pbVar59[-0x22];
      *pbVar21 = *pbVar21 + bVar27;
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar27 = bVar27 | *pbVar62;
      pbVar14 = (byte *)CONCAT31(uVar24,bVar27);
      cVar33 = (char)pbVar32 - *pbVar62;
      pbVar32 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar32 >> 8) + bVar10 |
                                                          bVar8,(char)pbVar32)) >> 8),cVar33);
      cVar9 = (char)pcVar57;
      pcVar57 = (char *)CONCAT22((short)((uint)pcVar57 >> 0x10),
                                 CONCAT11((char)((uint)pcVar57 >> 8) + *pbVar14,cVar9));
      *(byte *)puVar63 = (byte)*puVar63 + cVar9;
      bVar8 = bVar27 - *pbVar14;
      pbVar21 = (byte *)CONCAT31(uVar24,bVar8);
      pbVar62 = pbVar62 + (-(uint)(bVar27 < *pbVar14) - *(int *)pbVar21);
      in_ES = *(undefined2 *)((int)puVar37 + -4);
      puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),(char)puVar63 * '\x02');
      *(byte **)pbVar21 = pbVar21 + *(int *)pbVar21;
      *pbVar58 = *pbVar58 + cVar33;
      bVar10 = *pbVar21;
      *pbVar21 = *pbVar21 + bVar8;
      *puVar63 = (uint)(pbVar21 + (uint)CARRY1(bVar10,bVar8) + *puVar63);
    } while ((POPCOUNT(*puVar63 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar21 = *pbVar21 + (char)pbVar21;
    pcVar57 = (char *)CONCAT31((int3)((uint)pcVar57 >> 8),(byte)pcVar57 | pbVar21[(int)pcVar57]);
    puVar55 = (undefined2 *)((int)puVar37 + -4);
    *(undefined2 *)((int)puVar37 + -4) = uVar65;
    bVar67 = false;
    pbVar21 = (byte *)((uint)pbVar21 & 0xffffff00);
    do {
      pbVar58 = pbVar58 + (-(uint)bVar67 - *(int *)pbVar32);
      pcVar16 = (char *)CONCAT31((int3)((uint)pbVar21 >> 8),*pcVar57);
      *pcVar16 = *pcVar16 + *pcVar57;
      pbVar21 = (byte *)CONCAT31((int3)((uint)(pcVar16 +
                                              (pbVar62[0x2000001] < (byte)((uint)pcVar57 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar16 +
                                        (pbVar62[0x2000001] < (byte)((uint)pcVar57 >> 8)) + 0xda7d)
                                 | (byte)*puVar63) + 0x7d);
      pcVar57 = pcVar57 + -1;
      *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar57;
      while( true ) {
        uVar28 = (undefined3)((uint)puVar63 >> 8);
        cVar9 = (char)puVar63 + *(char *)((int)pbVar58 * 2 + 0xa0000e1);
        puVar63 = (uint *)CONCAT31(uVar28,cVar9);
        bVar67 = CARRY1((byte)pbVar21,(byte)*puVar63);
        uVar24 = (undefined3)((uint)pbVar21 >> 8);
        bVar10 = (byte)pbVar21 + (byte)*puVar63;
        pbVar21 = (byte *)CONCAT31(uVar24,bVar10);
        if ((POPCOUNT(bVar10) & 1U) != 0) break;
        *pbVar21 = *pbVar21 + bVar10;
        cVar33 = (char)pcVar57;
        pcVar57 = (char *)CONCAT22((short)((uint)pcVar57 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar57 >> 8) | pbVar58[-0x65],cVar33));
        bVar8 = *pbVar21;
        *pbVar21 = *pbVar21 + bVar10;
        *(undefined2 *)((int)puVar55 + -4) = in_ES;
        if (CARRY1(bVar8,bVar10)) {
          *pbVar21 = *pbVar21 + bVar10;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | pbVar59[-0x1d],
                                              (char)pbVar32));
          *pbVar21 = *pbVar21 + bVar10;
          bVar67 = false;
          bVar10 = bVar10 | (byte)*puVar63;
          pcVar16 = (char *)CONCAT31(uVar24,bVar10);
          uVar65 = *(undefined2 *)((int)puVar55 + -4);
          puVar37 = (undefined4 *)puVar55;
          while( true ) {
            bVar8 = (byte)pcVar16;
            uVar24 = (undefined3)((uint)pcVar16 >> 8);
            if (bVar67 == (char)bVar10 < '\0') break;
            *pcVar16 = *pcVar16 + bVar8;
            bVar8 = bVar8 | (byte)*puVar63;
            puVar29 = (uint *)CONCAT31(uVar24,bVar8);
            *pbVar58 = *pbVar58 << 1 | (char)*pbVar58 < '\0';
            uVar20 = *puVar29;
            *(byte *)puVar29 = (byte)*puVar29 + bVar8;
            pbVar59 = pbVar59 + (-(uint)CARRY1((byte)uVar20,bVar8) - *puVar29);
            *puVar29 = *puVar29 << 1 | (uint)((int)*puVar29 < 0);
            while( true ) {
              uVar20 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63 + (byte)pcVar57;
              uVar66 = *(undefined2 *)puVar37;
              cVar9 = (char)puVar29 + 'o' + CARRY1((byte)uVar20,(byte)pcVar57);
              pcVar16 = (char *)CONCAT31((int3)((uint)puVar29 >> 8),cVar9);
              pcVar57 = (char *)0x20a0000;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *pcVar16 = *pcVar16 + cVar9;
              bVar10 = bRamfe140212;
              pcVar57 = (char *)0x0;
              *(undefined2 *)puVar37 = in_ES;
              uVar24 = (undefined3)((uint)(pcVar16 + -0x732b0000) >> 8);
              bVar8 = in(0);
              puVar29 = (uint *)CONCAT31(uVar24,bVar8);
              uVar20 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63;
              if (SCARRY1((byte)uVar20,'\0') != (char)(byte)*puVar63 < '\0') {
                *(byte *)puVar29 = (byte)*puVar29 + bVar8;
                bVar8 = bVar8 | (byte)*puVar63;
                puVar29 = (uint *)CONCAT31(uVar24,bVar8);
                if ((POPCOUNT(bVar8) & 1U) == 0) {
                  *(byte *)puVar29 = (byte)*puVar29 + bVar8;
                  pcVar57 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar10 | (byte)*puVar29) << 8);
                  puVar55 = (undefined2 *)((int)puVar37 + -4);
                  *(undefined2 *)((int)puVar37 + -4) = uVar66;
                  *(byte *)puVar29 = (byte)*puVar29 + bVar8;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar29 = (byte)*puVar29 + bVar8;
                puVar29 = (uint *)CONCAT31(uVar24,bVar8 | (byte)*puVar63);
              }
            }
            *(byte *)puVar63 = (byte)*puVar63;
            bVar67 = SCARRY1((char)puVar63,*pbVar58);
            bVar10 = (char)puVar63 + *pbVar58;
            puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),bVar10);
            puVar37 = (undefined4 *)((int)puVar37 + 4);
          }
          if (bVar67 == (char)bVar10 < '\0') {
            *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar57;
            pbVar21 = (byte *)((uint)pcVar16 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar16 = *pcVar16 + bVar8;
          pbVar21 = (byte *)CONCAT31(uVar24,(bVar8 | (byte)*puVar63) + 0x7d);
          pcVar57 = pcVar57 + -1;
          *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar57;
          puVar55 = (undefined2 *)puVar37;
        }
        else {
          *(byte *)puVar63 = (byte)*puVar63 + cVar33;
          puVar63 = (uint *)CONCAT31(uVar28,cVar9 + *(char *)((int)pbVar58 * 2 + 0xa0000e0));
          puVar55 = (undefined2 *)((int)puVar55 + -4);
        }
      }
    } while( true );
  }
  *pbVar58 = *pbVar58 + bVar10;
  bVar10 = bVar10 + 0x6f & *(byte *)CONCAT31(uVar24,bVar10 + 0x6f);
  *pbVar14 = *pbVar14 + (char)pbVar21;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar10;
  pcVar57 = (char *)CONCAT31(uVar24,bVar10 - (byte)*puVar63);
code_r0x00403b2c:
  bVar10 = (char)pcVar57 - *pcVar57;
  pbVar22 = (byte *)CONCAT31((int3)((uint)pcVar57 >> 8),bVar10);
  *pbVar22 = *pbVar22 + bVar10;
  *(byte **)pbVar22 = pbVar14 + *(int *)pbVar22;
  *pbVar22 = *pbVar22 + bVar10;
  bVar67 = CARRY1(*pbVar22,bVar10);
  *pbVar22 = *pbVar22 + bVar10;
  puVar30 = (undefined1 *)puVar37;
  pbVar58 = pbVar62;
  while( true ) {
    puVar37 = (undefined4 *)puVar30;
    *(byte **)pbVar22 = pbVar22 + (uint)bVar67 + *(int *)pbVar22;
    bVar8 = ((uint)pbVar22 & 0x1000) != 0;
    puVar63 = puVar63 + (uint)bVar68 * -2 + 1;
    pbVar22[(int)pbVar14] = pbVar22[(int)pbVar14] + (char)pbVar32;
    *pbVar22 = *pbVar22 + (char)pbVar22;
    *(byte **)pbVar58 = pbVar32 + *(int *)pbVar58;
    bVar10 = (byte)((uint)pbVar21 >> 8);
    cVar9 = (char)pbVar21;
    pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),CONCAT11(bVar10 + *pbVar22,cVar9));
    pbVar22 = pbVar22 + (uint)CARRY1(bVar10,*pbVar22) + *(int *)pbVar22;
    *pbVar14 = *pbVar14 + cVar9;
    cVar9 = (char)pbVar32 - pbVar58[2];
    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar9);
    pbVar62 = pbVar58;
    if ((POPCOUNT(cVar9) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar22 = *pbVar22 + (byte)pbVar22;
    bVar10 = (byte)pbVar22 | *pbVar32;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar10);
    if (bVar10 != 0) {
      pbVar59 = pbVar59 + -puVar63[9];
      *pbVar23 = *pbVar23 + bVar10;
      pbVar21 = (byte *)CONCAT22((short)((uint)pbVar21 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar21 >> 8) | *pbVar14,(char)pbVar21));
      pbVar58 = pbVar58 + *(int *)pbVar23;
      pbVar23 = pbVar23 + *(int *)pbVar23;
      uVar24 = (undefined3)((uint)pbVar23 >> 8);
      bVar27 = (char)pbVar23 - *pbVar23;
      pbVar62 = (byte *)CONCAT31(uVar24,bVar27);
      bVar10 = *pbVar62;
      *pbVar62 = *pbVar62 + bVar27;
      pbVar23 = (byte *)CONCAT31(uVar24,bVar27 - CARRY1(bVar10,bVar27));
    }
    bVar10 = *pbVar23;
    *pbVar23 = *pbVar23 + (byte)pbVar23;
    iVar17 = *(int *)(pbVar59 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar10,(byte)pbVar23);
    pbVar62 = pbVar58 + (uint)bVar68 * -8 + 4;
    out(*(undefined4 *)pbVar58,(short)pbVar14);
    pbVar22 = (byte *)(((uint)pbVar23 >> 8) * 0x100);
    *pbVar14 = *pbVar14 + (byte)pbVar21;
    bVar10 = (char)pbVar14 - *pbVar32;
    pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar10);
    *pbVar32 = *pbVar32;
    *pbVar14 = *pbVar14 + (char)((uint)pbVar21 >> 8);
    *pbVar22 = *pbVar22;
    pcVar57 = (char *)(((uint)pbVar23 >> 8) * 0x200);
    *pcVar57 = *pcVar57 + (char)pbVar32;
    bVar67 = CARRY1(*pbVar21,bVar10);
    *pbVar21 = *pbVar21 + bVar10;
    puVar30 = (undefined1 *)((int)puVar37 + (iVar4 - iVar17));
    pbVar58 = pbVar62;
    if (bVar67) {
      *pbVar22 = *pbVar22;
      pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),(byte)pbVar21 | *pbVar14);
      puVar52 = (undefined2 *)((int)puVar37 + (iVar4 - iVar17) + -4);
      puVar37 = (undefined4 *)((int)puVar37 + (iVar4 - iVar17) + -4);
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
  pbVar59 = pbVar59 + -*puVar29;
  puVar54 = (undefined1 *)((int)puVar55 + 4);
  do {
    bVar10 = (byte)puVar29;
    *(byte *)puVar29 = (byte)*puVar29 + bVar10;
    pbVar58 = pbVar58 + -*(int *)(pbVar59 + -0x1a);
    *(byte *)puVar29 = (byte)*puVar29 + bVar10;
    bVar10 = bVar10 | (byte)*puVar63;
    puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),bVar10);
    *(byte *)puVar29 = (byte)*puVar29 | bVar10;
    bVar10 = (byte)*puVar29;
    pbVar59 = (byte *)0x2700001;
    while (puVar55 = (undefined2 *)puVar54, (POPCOUNT(bVar10) & 1U) == 0) {
      do {
        *(byte *)puVar29 = (byte)*puVar29 + (byte)puVar29;
        bVar10 = (byte)puVar29 | (byte)*puVar63;
        puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),bVar10);
        puVar30 = (undefined1 *)puVar55;
        if ((POPCOUNT(bVar10) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
        uVar25 = CONCAT21((short)((uint)pcVar57 >> 0x10),(byte)((uint)pcVar57 >> 8) | bRamfe140212);
        puVar7 = puVar30;
        while( true ) {
          puVar56 = puVar7;
          pcVar57 = (char *)((uint)uVar25 << 8);
          puVar54 = puVar56 + -4;
          puVar55 = (undefined2 *)(puVar56 + -4);
          puVar30 = puVar56 + -4;
          *(undefined2 *)(puVar56 + -4) = in_ES;
          bVar11 = (byte)puVar29;
          *(byte *)puVar29 = (byte)*puVar29 & bVar11;
          bVar27 = *pbVar32;
          bVar13 = (byte)uVar25;
          bVar8 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar13;
          bVar10 = *pbVar32;
          if (!CARRY1(bVar27,bVar13)) break;
          *(byte *)puVar29 = (byte)*puVar29 + bVar11;
          pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffe2,
                                              (char)pbVar32));
          *(byte *)puVar29 = (byte)*puVar29 + bVar11;
          bVar11 = bVar11 | (byte)*puVar63;
          puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),bVar11);
          bVar67 = (POPCOUNT(bVar11) & 1U) == 0;
          while( true ) {
            cVar9 = (char)((uint)pbVar32 >> 8);
            uVar65 = (undefined2)((uint)pbVar32 >> 0x10);
            if (!bVar67) {
              *(byte *)puVar63 = (byte)*puVar63;
              pbVar32 = (byte *)CONCAT22(uVar65,CONCAT11(cVar9 + pbVar32[-0x1f],(char)pbVar32));
              goto code_r0x00403d52;
            }
            *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
            uVar66 = (undefined2)((uint)pcVar57 >> 0x10);
            bVar8 = (byte)((uint)pcVar57 >> 8) | (byte)*puVar29;
            uVar25 = CONCAT21(uVar66,bVar8);
            *puVar29 = *puVar29 & (uint)puVar29;
            *pbVar32 = *pbVar32 + bVar8;
            uVar24 = (undefined3)((uint)puVar29 >> 8);
            bVar10 = (char)puVar29 - bVar8;
            pcVar57 = (char *)CONCAT31(uVar24,bVar10);
            *pcVar57 = *pcVar57 + bVar10;
            bVar10 = bVar10 | (byte)*puVar63;
            puVar29 = (uint *)CONCAT31(uVar24,bVar10);
            puVar7 = puVar56 + -4;
            if ((POPCOUNT(bVar10) & 1U) != 0) break;
            *(byte *)puVar29 = (byte)*puVar29 + bVar10;
            pcVar57 = (char *)((uint)CONCAT21(uVar66,bVar8 | (byte)*puVar29) << 8);
            *puVar29 = *puVar29 - (int)puVar29;
            *(byte *)puVar63 = (byte)*puVar63;
            pbVar32 = (byte *)CONCAT22(uVar65,CONCAT11(cVar9 + pbVar32[-0x1d],(char)pbVar32));
            do {
              *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
              uVar65 = (undefined2)((uint)puVar63 >> 0x10);
              cVar9 = (char)puVar63;
              bVar10 = (byte)((uint)puVar63 >> 8) | pbVar32[-0x17];
              puVar63 = (uint *)CONCAT22(uVar65,CONCAT11(bVar10,cVar9));
              *(byte *)puVar29 = (byte)*puVar29 + (char)puVar29;
              pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar32 >> 8) | bRam026fffeb,
                                                  (char)pbVar32));
              do {
                *(byte *)puVar29 = (byte)*puVar29 + (byte)puVar29;
                uVar24 = (undefined3)((uint)puVar29 >> 8);
                bVar27 = (byte)puVar29 | (byte)*puVar63;
                pcVar16 = (char *)CONCAT31(uVar24,bVar27);
                bVar8 = pbVar32[-0x16];
                *pcVar16 = *pcVar16 + bVar27;
                pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                           CONCAT11((char)((uint)pbVar32 >> 8) + bVar8 |
                                                    bRam026fffec,(char)pbVar32));
                *pcVar16 = *pcVar16 + bVar27;
                pbVar14 = (byte *)CONCAT31(uVar24,bVar27 | (byte)*puVar63);
                while( true ) {
                  *pbVar14 = *pbVar14 + (byte)pbVar14;
                  uVar24 = (undefined3)((uint)pbVar14 >> 8);
                  bVar8 = (byte)pbVar14 | (byte)*puVar63;
                  puVar29 = (uint *)CONCAT31(uVar24,bVar8);
                  if ((POPCOUNT(bVar8) & 1U) != 0) break;
                  *(byte *)puVar29 = (byte)*puVar29 + bVar8;
                  bVar27 = pbVar58[-0x14];
                  *(byte *)puVar29 = (byte)*puVar29 + bVar8;
                  bVar8 = bVar8 | (byte)*puVar63;
                  pcVar16 = (char *)CONCAT31(uVar24,bVar8);
                  bVar11 = pbVar32[-0x15];
                  *pcVar16 = *pcVar16 + bVar8;
                  pcVar57 = (char *)((uint)CONCAT21((short)((uint)pcVar57 >> 0x10),
                                                    (byte)((uint)pcVar57 >> 8) | bVar27 |
                                                    pbVar58[-0x13]) << 8);
                  *pcVar16 = *pcVar16 + bVar8;
                  pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                             CONCAT11((char)((uint)pbVar32 >> 8) + bVar11 |
                                                      bRam026fffef,(char)pbVar32));
                  *pcVar16 = *pcVar16 + bVar8;
                  pbVar14 = (byte *)CONCAT31(uVar24,bVar8 | (byte)*puVar63);
                  do {
                    do {
                      bVar27 = (byte)pbVar14;
                      *pbVar14 = *pbVar14 + bVar27;
                      cVar31 = (char)pbVar32;
                      pbVar32 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar32 >> 8) | *pbVar14,
                                                          cVar31));
                      *pbVar14 = bVar27;
                      *pbVar14 = *pbVar14 + bVar27;
                      cVar33 = (char)((uint)pcVar57 >> 8) + *pbVar14;
                      pcVar57 = (char *)((uint)CONCAT21((short)((uint)pcVar57 >> 0x10),cVar33) << 8)
                      ;
                      uVar24 = (undefined3)((uint)pbVar14 >> 8);
                      bVar27 = bVar27 & *pbVar14;
                      pbVar14 = (byte *)CONCAT31(uVar24,bVar27);
                      bVar8 = *pbVar32;
                      *pbVar32 = *pbVar32 + cVar33;
                    } while (SCARRY1(bVar8,cVar33) == (char)*pbVar32 < '\0');
                    *pbVar14 = *pbVar14 + bVar27;
                    bVar27 = bVar27 | (byte)*puVar63;
                    pbVar14 = (byte *)CONCAT31(uVar24,bVar27);
                    if ((POPCOUNT(bVar27) & 1U) == 0) {
                      *pbVar14 = *pbVar14 + bVar27;
                      *pbVar14 = *pbVar14 + bVar27;
                      cVar9 = cVar9 - bVar10;
                      pbVar21 = (byte *)CONCAT31((int3)((uint)puVar63 >> 8),cVar9);
                      *pbVar14 = *pbVar14 + bVar27;
                      bRam0312382b = bRam0312382b | *pbVar21;
                      *(undefined2 *)(puVar56 + -8) = in_ES;
                      while( true ) {
                        bVar8 = (byte)pbVar14;
                        *pbVar14 = *pbVar14 + bVar8;
                        bRam0312382b = bRam0312382b | (pbVar58 + 0x21b0000)[(int)pbVar14];
                        uVar24 = (undefined3)((uint)pbVar14 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar21 = *pbVar21 + bRam0312382b;
                        pbVar14 = (byte *)CONCAT31(uVar24,bVar8 | *pbVar62);
                      }
                      *pbVar14 = *pbVar14 + bVar8;
                      bVar8 = bVar8 | *pbVar62;
                      pcVar57 = (char *)CONCAT31(uVar24,bVar8);
                      out(*(undefined4 *)pbVar62,(short)pbVar21);
                      *pcVar57 = *pcVar57 + bVar8;
                      uVar66 = CONCAT11(bVar10 | bRam6f0a002b,cVar9);
                      pcVar16 = (char *)CONCAT22(uVar65,uVar66);
                      *pcVar57 = *pcVar57 + bVar8;
                      *pcVar16 = *pcVar16 + bRam0312382b;
                      out(*(undefined4 *)(pbVar62 + (uint)bVar68 * -8 + 4),uVar66);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar32 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),cVar31 + *pcVar57);
                  } while (SCARRY1(cVar31,*pcVar57) != (char)(cVar31 + *pcVar57) < '\0');
                }
                uVar20 = *puVar63;
                *(byte *)puVar63 = (byte)*puVar63;
              } while (SCARRY1((byte)uVar20,'\0') != (char)(byte)*puVar63 < '\0');
              *(byte *)puVar63 = (byte)*puVar63;
              *pcVar57 = *pcVar57 - (char)pbVar32;
              *(byte *)puVar29 = (byte)*puVar29 + bVar8;
              bVar8 = bVar8 | (byte)*puVar63;
              puVar29 = (uint *)CONCAT31(uVar24,bVar8);
              bVar67 = (POPCOUNT(bVar8) & 1U) == 0;
            } while (bVar67);
          }
        }
      } while (SCARRY1(bVar8,bVar13));
    }
    *pbVar32 = *pbVar32 + (char)((uint)pcVar57 >> 8);
    *pbVar58 = *pbVar58 - (char)pbVar32;
  } while( true );
}


