/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403272
 * Raw Name    : set_TimerDisplay
 * Demangled   : set_TimerDisplay
 * Prototype   : byte * set_TimerDisplay(char * param_1, byte * param_2)
 * Local Vars  : param_2, uStack_34, pbStack_2c, auStack_24, uStack_20, uStack_1c, apbStack_14, pcStack_8, uVar1, pcVar2, uVar3, iVar4, uVar5, uVar6, puVar7, cVar8, cVar9, bVar10, bVar11, bVar12, bVar13, bVar14, in_EAX, pbVar15, piVar16, pcVar17, iVar18, ppbVar19, ppbVar20, uVar21, pcVar22, pbVar23, pbVar24, pbVar25, pbVar26, uVar27, uVar28, extraout_ECX, extraout_ECX_00, cVar29, bVar30, uVar31, puVar32, puVar33, uVar34, cVar35, unaff_EBX, cVar36, bVar37, uVar38, puVar39, puVar40, piVar41, piVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, puVar57, puVar58, unaff_EBP, pbVar59, unaff_ESI, pbVar60, puVar61, puVar62, pbVar63, unaff_EDI, puVar64, puVar65, in_ES, in_CS, uVar66, in_DS, uVar67, unaff_FS_OFFSET, in_GS_OFFSET, bVar68, in_AF, in_TF, in_IF, bVar69, bVar70, in_NT, in_AC, in_VIF, in_VIP, param_1, in_ID, uVar71
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

byte * __fastcall set_TimerDisplay(char *param_1,byte *param_2)

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
  undefined4 in_EAX;
  undefined3 uVar27;
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
  byte *pbVar25;
  uint3 uVar28;
  byte *pbVar26;
  char cVar29;
  byte bVar30;
  byte *extraout_ECX;
  undefined3 uVar31;
  byte *extraout_ECX_00;
  uint *puVar32;
  undefined1 *puVar33;
  undefined1 uVar34;
  char cVar35;
  char cVar36;
  byte bVar37;
  byte *unaff_EBX;
  undefined2 uVar38;
  undefined4 *puVar39;
  undefined2 *puVar40;
  int *piVar41;
  int *piVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined2 *puVar45;
  undefined4 *puVar46;
  undefined2 *puVar47;
  undefined1 *puVar48;
  undefined2 *puVar49;
  undefined2 *puVar50;
  undefined4 *puVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  undefined2 *puVar54;
  undefined2 *puVar55;
  undefined1 *puVar56;
  undefined2 *puVar57;
  undefined1 *puVar58;
  char *unaff_EBP;
  byte *pbVar59;
  byte *unaff_ESI;
  byte *pbVar60;
  uint *puVar61;
  uint *puVar62;
  byte *pbVar63;
  undefined4 *unaff_EDI;
  uint *puVar64;
  uint *puVar65;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 uVar66;
  undefined2 in_DS;
  undefined2 uVar67;
  int unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar68;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar69;
  bool bVar70;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar71;
  undefined4 uStack_34;
  byte *pbStack_2c;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte *apbStack_14 [3];
  char *pcStack_8;
  
  bVar69 = false;
                    /* .NET CLR Managed Code */
  uVar27 = (undefined3)((uint)in_EAX >> 8);
  cVar8 = (char)in_EAX + *unaff_EBX;
  pcVar17 = (char *)CONCAT31(uVar27,cVar8);
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar8 < '\0') {
    pcVar22 = (char *)((int)unaff_EDI + (int)unaff_EBP * 2);
    *pcVar22 = *pcVar22 + cVar8;
  }
  else {
    *pcVar17 = *pcVar17 + cVar8;
    pbVar15 = (byte *)CONCAT31(uVar27,cVar8 + '*');
    bVar30 = *pbVar15;
    bVar10 = (byte)((uint)param_1 >> 8);
    uVar66 = (undefined2)((uint)param_1 >> 0x10);
    cVar35 = (char)param_1;
    cVar29 = bVar10 + *pbVar15;
    param_1 = (char *)CONCAT22(uVar66,CONCAT11(cVar29,cVar35));
    iVar18 = *(int *)pbVar15;
    *param_2 = *param_2 + cVar35;
    cVar8 = (char)(pbVar15 + (uint)CARRY1(bVar10,bVar30) + iVar18);
    uVar27 = (undefined3)((uint)(pbVar15 + (uint)CARRY1(bVar10,bVar30) + iVar18) >> 8);
    cVar9 = cVar8 + *unaff_EBX;
    pcVar17 = (char *)CONCAT31(uVar27,cVar9);
    cVar36 = (char)((uint)unaff_EBX >> 8);
    uVar67 = (undefined2)((uint)unaff_EBX >> 0x10);
    if (SCARRY1(cVar8,*unaff_EBX) == cVar9 < '\0') {
      *(char **)param_2 = unaff_EBP + *(int *)param_2;
      unaff_EBX = (byte *)CONCAT22(uVar67,CONCAT11(cVar36 + unaff_EBX[0x38],(char)unaff_EBX));
      *pcVar17 = *pcVar17 + cVar9;
      pcVar17 = (char *)CONCAT31(uVar27,cVar9 + 'o');
    }
    else {
      *pcVar17 = *pcVar17 + cVar9;
      cVar9 = cVar9 + '*';
      pcVar17 = (char *)CONCAT31(uVar27,cVar9);
      *pcVar17 = *pcVar17 + cVar9;
      cVar8 = (char)param_2;
      param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((char)((uint)param_2 >> 8) - *unaff_ESI,cVar8));
      param_1 = (char *)CONCAT22(uVar66,CONCAT11(cVar29 + *pcVar17,cVar35));
      *pcVar17 = *pcVar17 + cVar9;
      unaff_EBP = (char *)(CONCAT22((short)((uint)unaff_ESI >> 0x10),in_ES) +
                          *(int *)((int)unaff_EDI + -0x5e));
      *pcVar17 = *pcVar17 + cVar9;
      bVar10 = cVar9 - *pcVar17;
      pbVar15 = (byte *)CONCAT31(uVar27,bVar10);
      *unaff_EBX = *unaff_EBX + cVar8;
      *(byte *)((int)pbVar15 * 2) = *(byte *)((int)pbVar15 * 2) ^ bVar10;
      bVar30 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar10;
      pbVar15 = pbVar15 + (uint)CARRY1(bVar30,bVar10) + *(int *)pbVar15;
      *param_1 = *param_1 + cVar8;
      unaff_EBX = (byte *)CONCAT22(uVar67,CONCAT11(cVar36 + unaff_EBX[0x38],(char)unaff_EBX));
      *pbVar15 = *pbVar15 + (char)pbVar15;
      pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + 'o');
    }
  }
  piVar16 = (int *)(pcVar17 + 0x28060000);
  puVar64 = unaff_EDI + 1;
  uVar67 = SUB42(param_2,0);
  uVar1 = in(uVar67);
  *unaff_EDI = uVar1;
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  uVar66 = (undefined2)((uint)param_1 >> 0x10);
  bVar30 = (byte)((uint)param_1 >> 8) | bRam7b022a01;
  pbVar15 = (byte *)((int)puVar64 + (int)unaff_EBP * 2);
  *pbVar15 = *pbVar15 + (char)piVar16;
  iVar18 = *piVar16;
  *unaff_ESI = *unaff_ESI + (char)(char *)((int)piVar16 + iVar18);
  pcVar17 = (char *)((int)piVar16 + iVar18) + -0x387b020d;
  *pcVar17 = *pcVar17 + (char)pcVar17;
  cVar8 = (char)pcVar17 + 'o';
  pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar8);
  *pcVar17 = *pcVar17 + cVar8;
  iVar18 = (int)pcVar17 - *(int *)CONCAT22(uVar66,CONCAT11(bVar30,(char)param_1));
  uVar27 = (undefined3)((uint)iVar18 >> 8);
  cVar8 = (((byte)iVar18 | *unaff_ESI) - 0xe) + *unaff_EBX;
  pcVar17 = (char *)CONCAT31(uVar27,cVar8);
  pbVar15 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,uVar67);
  pcVar17[unaff_FS_OFFSET] = pcVar17[unaff_FS_OFFSET] + cVar8;
  pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_ES);
  pbVar23 = (byte *)CONCAT22(uVar66,CONCAT11(bVar30 + *(char *)((int)unaff_EDI + 0x6a),(char)param_1
                                            ));
  *pcVar17 = *pcVar17 + cVar8;
  bVar10 = cVar8 - *param_2;
  puVar32 = (uint *)CONCAT31(uVar27,bVar10);
  *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
  bVar30 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  bVar11 = (byte)((uint)param_2 >> 8);
  if (CARRY1(bVar30,bVar10)) goto code_r0x00403365;
  pbVar63 = (byte *)((int)puVar64 + (int)unaff_EBP * 2);
  *pbVar63 = *pbVar63 + bVar10;
  ppbVar20 = (byte **)(puVar32 + 0x1f421c00);
  cVar8 = (char)ppbVar20;
  if ((POPCOUNT((uint)ppbVar20 & 0xff) & 1U) != 0) {
    pbVar63 = (byte *)((int)puVar32 + 0x7d087002);
    bVar30 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar11;
    uVar27 = (undefined3)((uint)ppbVar20 >> 8);
    if ((POPCOUNT(*pbVar63) & 1U) == 0) {
      *(char *)ppbVar20 = (char)*ppbVar20 + cVar8;
      ppbVar19 = (byte **)CONCAT31(uVar27,cVar8 + 'o');
      goto code_r0x0040333c;
    }
    pbVar63 = (byte *)CONCAT31(uVar27,cVar8 + -2 + CARRY1(bVar30,bVar11));
    goto code_r0x00403375;
  }
  *(char *)ppbVar20 = (char)*ppbVar20 + cVar8;
  do {
    while( true ) {
      cVar8 = (char)ppbVar20 + 'o';
      piVar16 = (int *)CONCAT31((int3)((uint)ppbVar20 >> 8),cVar8);
      *pbVar15 = *pbVar15 + cVar8;
      *(undefined2 *)unaff_EBX = in_ES;
      *pbVar23 = *pbVar23 + cVar8;
      *pbVar23 = *pbVar23 - (char)unaff_EBX;
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      bVar30 = *(byte *)((int)puVar64 + -0x5e);
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      iVar18 = *piVar16;
      *(char *)(in_GS_OFFSET + (int)piVar16) = *(char *)(in_GS_OFFSET + (int)piVar16) + cVar8;
      ppbVar20 = apbStack_14;
      ppbVar19 = apbStack_14;
      apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
      pbVar63 = apbStack_14[0];
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar23 >> 8) | bVar30) + (char)iVar18 +
                                          *param_2,(char)pbVar23 - *param_2));
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      pbVar15 = pbVar15 + *piVar16;
      apbStack_14[0]._0_1_ = (char)in_ES;
      bVar10 = (byte)apbStack_14;
      apbStack_14[0]._1_3_ = SUB43(pbVar63,1);
      apbStack_14[0] = (byte *)CONCAT31(apbStack_14[0]._1_3_,(char)apbStack_14[0] + bVar10 * '\x03')
      ;
      *param_2 = *param_2 + bVar10;
      *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
      bVar30 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar10;
      if (!CARRY1(bVar30,bVar10)) break;
      apbStack_14[0] = (byte *)((uint)apbStack_14[0]._1_3_ << 8);
    }
code_r0x0040333c:
    pcVar17 = (char *)((int)ppbVar19 + 0x7b027000);
    pbVar63 = (byte *)((int)puVar64 + (int)unaff_EBP * 2);
    *pbVar63 = *pbVar63 + (char)pcVar17;
    *pbVar15 = *pbVar15 + (char)pcVar17 + *pcVar17;
    cRam03060000 = cRam8c0a0000;
    pbVar63 = pbVar15 + 4;
    out(*(undefined4 *)pbVar15,uVar67);
    puVar32 = (uint *)CONCAT31((int3)((uint)pcVar17 >> 8),cRam8c0a0000);
    *pbVar23 = *pbVar23 + cRam8c0a0000;
    *param_2 = *param_2 - (char)((uint)pcVar17 >> 8);
    *param_2 = *param_2 + (char)pbVar23;
    pbVar15 = pbVar15 + 8;
    out(*(undefined4 *)pbVar63,uVar67);
    puVar64 = (uint *)((uint)puVar64 ^ *puVar32);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + (char)*puVar32,(char)pbVar23));
    unaff_EBP = pcStack_8;
code_r0x00403365:
    cVar8 = (char)puVar32;
    *(char *)puVar32 = (char)*puVar32 + cVar8;
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38],
                                          (char)unaff_EBX));
    *(char *)puVar32 = (char)*puVar32 + cVar8;
    uVar27 = (undefined3)((uint)puVar32 >> 8);
    cVar8 = cVar8 + 'o' + *(char *)CONCAT31(uVar27,cVar8 + 'o');
    pbVar63 = (byte *)CONCAT31(uVar27,cVar8);
    bVar30 = *pbVar15;
    *pbVar15 = *pbVar15 + cVar8;
    pbVar60 = pbVar15;
    if (*pbVar15 == 0 || SCARRY1(bVar30,cVar8) != (char)*pbVar15 < '\0') goto code_r0x004033b0;
code_r0x00403375:
    bVar30 = (byte)pbVar63;
    *pbVar63 = *pbVar63 + bVar30;
    uVar27 = (undefined3)((uint)pbVar63 >> 8);
    bVar10 = bVar30 + 0x2d;
    ppbVar20 = (byte **)CONCAT31(uVar27,bVar10);
    *(byte **)(pbVar15 + (int)puVar64 * 8) =
         param_2 + (uint)(0xd2 < bVar30) + *(int *)(pbVar15 + (int)puVar64 * 8);
    pbVar63 = (byte *)segment(in_DS,(short)unaff_EBX + (short)pbVar15);
    bVar30 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar10;
    apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
    pbVar59 = apbStack_14[0];
  } while (!CARRY1(bVar30,bVar10));
  *(byte *)ppbVar20 = (char)*ppbVar20 + bVar10;
  bVar68 = false;
  bVar10 = bVar10 | *(byte *)((int)ppbVar20 + 0x400003b);
  pbVar25 = (byte *)CONCAT31(uVar27,bVar10);
  if ('\0' < (char)bVar10) {
    *pbVar25 = *pbVar25 + bVar10;
    iVar18 = CONCAT31(uVar27,bVar10 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar10);
    iRam02060000 = iVar18;
    *(byte *)puVar64 = (byte)*puVar64 - (char)unaff_EBX;
    *pbVar15 = *pbVar15 + (char)iVar18;
    bVar10 = (char)iVar18 - 0x25;
    pbVar63 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),bVar10);
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + *pbVar63,(char)pbVar23));
    bVar30 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar10;
    apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
    if (CARRY1(bVar30,bVar10)) goto code_r0x004033e7;
    pbVar25 = pbVar63 + 2;
    *pbVar25 = *pbVar25 + bVar11;
    pbVar60 = pbVar15;
    if ((POPCOUNT(*pbVar25) & 1U) != 0) goto _ctor;
code_r0x004033b0:
    *pbVar63 = *pbVar63 + (char)pbVar63;
    cVar8 = (char)pbVar63 + 'o';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar63 >> 8),cVar8);
    *pbVar60 = *pbVar60 + cVar8;
    *(undefined2 *)unaff_EBX = in_ES;
    *pbVar23 = *pbVar23 + cVar8;
    *param_2 = *param_2 - (char)((uint)pbVar63 >> 8);
    bVar68 = CARRY1(*param_2,(byte)pbVar23);
    *param_2 = *param_2 + (byte)pbVar23;
    pbVar15 = pbVar60 + 4;
    out(*(undefined4 *)pbVar60,uVar67);
    pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar8);
  }
  pbVar60 = pbVar15 + (uint)bVar68 + *(int *)pbVar25;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 + *pbVar25);
  pbVar15 = (byte *)((int)piVar16 + (uint)CARRY1((byte)pbVar25,*pbVar25) + *piVar16);
  bVar30 = *pbVar15;
  bVar10 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  pbVar63 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar10 + CARRY1(bVar30,bVar10));
  do {
    *pbVar23 = *pbVar23 + (char)param_2;
    param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)pbVar63 >> 8);
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    pbVar59 = uStack_20;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + *pbVar63,(char)pbVar23));
    *pbVar63 = *pbVar63 + (char)pbVar63;
    uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
    pbVar15 = pbVar60 + 4;
    out(*(undefined4 *)pbVar60,(short)param_2);
    pbRam2a0a0000 = pbVar63;
code_r0x004033e7:
    param_2 = param_2 + 1;
    pbVar60 = pbVar15;
_ctor:
    uVar6 = uStack_1c._2_2_;
    iVar18 = CONCAT31((int3)((uint)pbVar63 >> 8),(char)pbVar63 + *unaff_EBX) + 0x6128;
    uStack_1c = (byte *)((uint)uStack_1c._2_2_ << 0x10);
    bVar10 = (char)iVar18 + *(char *)((int)puVar64 * 2 + 0x400003e);
    pbVar63 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),bVar10);
    cVar8 = (char)param_2 - *unaff_EBX;
    puVar32 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar8);
    *(byte *)puVar32 = (byte)*puVar32 ^ bVar10;
    *pbVar63 = *pbVar63 + (char)((uint)unaff_EBX >> 8);
    *pbVar63 = *pbVar63 + bVar10;
    *pbVar23 = *pbVar23 + cVar8;
    bVar30 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar10;
    *(byte **)(unaff_EBX + -0x41) =
         pbVar60 + (uint)CARRY1(bVar30,bVar10) + *(int *)(unaff_EBX + -0x41);
    do {
      *pbVar63 = *pbVar63 + (byte)pbVar63;
      uVar27 = (undefined3)((uint)pbVar63 >> 8);
      bVar30 = (byte)pbVar63 | *pbVar60;
      uVar66 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar34 = SUB41(unaff_EBX,0);
      cVar9 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x69];
      *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
      cVar8 = bVar30 + 0x7d;
      pcVar17 = (char *)CONCAT31(uVar27,cVar8);
      pbVar60[(int)pcVar17] = pbVar60[(int)pcVar17] + cVar8;
      cVar9 = cVar9 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar9,uVar34)) + 0x67);
      *pcVar17 = *pcVar17 + cVar8;
      pcVar17 = (char *)CONCAT31(uVar27,bVar30 - 6);
      puVar61 = (uint *)(pbVar60 + 4);
      out(*(undefined4 *)pbVar60,(short)puVar32);
      *pcVar17 = *pcVar17 + (bVar30 - 6);
      cVar9 = cVar9 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar9,uVar34)) + 0x6b);
      *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
      pcVar17 = (char *)CONCAT31(uVar27,bVar30 + 0x7d);
      pbVar15 = (byte *)((int)puVar61 + (int)pcVar17);
      *pbVar15 = *pbVar15 + bVar30 + 0x7d;
      cVar9 = cVar9 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar9,uVar34)) + 0x6a);
      unaff_EBX = (byte *)CONCAT22(uVar66,CONCAT11(cVar9,uVar34));
      puVar65 = puVar32;
      do {
        cVar8 = (char)pcVar17;
        *pcVar17 = *pcVar17 + cVar8;
        uVar27 = (undefined3)((uint)pcVar17 >> 8);
        bVar30 = cVar8 + 0x7d;
        pcVar22 = (char *)CONCAT31(uVar27,bVar30);
        *(byte *)((int)puVar61 + (int)pcVar22) = *(byte *)((int)puVar61 + (int)pcVar22) + bVar30;
        uVar31 = (undefined3)((uint)puVar65 >> 8);
        bVar10 = (char)puVar65 - *(byte *)((int)puVar65 + 0x457e02);
        puVar32 = (uint *)CONCAT31(uVar31,bVar10);
        pbVar59[0x6fe1411] = pbVar59[0x6fe1411] + bVar30;
        uVar21 = *puVar61;
        uVar5 = *puVar61;
        *(byte *)puVar61 = (byte)*puVar61 + bVar30;
        if (CARRY1((byte)uVar21,bVar30)) {
          *pcVar22 = *pcVar22 + bVar30;
          bVar30 = bVar30 | pcVar22[0x4000045];
          piVar16 = (int *)CONCAT31(uVar27,bVar30);
          if ((char)bVar30 < '\x01') {
            *(byte *)puVar32 = (byte)*puVar32 + bVar30;
            uStack_1c._2_2_ = uVar6;
            goto code_r0x004034a0;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar30;
          bVar30 = bVar30 + 0x6f;
          pcVar22 = (char *)CONCAT31(uVar27,bVar30);
          *pcVar22 = *pcVar22 + bVar30;
          pbVar59 = pbVar59 + -*puVar32;
          *pcVar22 = *pcVar22 + bVar30;
          *unaff_EBX = *unaff_EBX + bVar10;
          *(byte *)((int)pcVar22 * 2) = *(byte *)((int)pcVar22 * 2) ^ bVar30;
          in_AF = 9 < (bVar30 & 0xf) | in_AF;
          uVar21 = CONCAT31(uVar27,bVar30 + in_AF * '\x06') & 0xffffff0f;
          cVar8 = (char)uVar21;
          pcVar17 = (char *)CONCAT22((short)(uVar21 >> 0x10),
                                     CONCAT11((char)((uint)pcVar17 >> 8) + in_AF,cVar8));
          *pcVar17 = *pcVar17 + cVar8;
          cRam72110000 = cRam72110000 + bVar10;
          puVar57 = (undefined2 *)segment(in_ES,(short)auStack_24 + -2);
          *puVar57 = in_ES;
          pcVar17[0x1a] = pcVar17[0x1a] + (char)((uint)puVar65 >> 8);
          cVar8 = (char)pbVar23;
          *pbVar23 = *pbVar23 + cVar8;
          *puVar32 = (uint)(pbVar23 + *puVar32);
          apbStack_14[0] = (byte *)CONCAT22(apbStack_14[0]._2_2_,in_ES);
          cVar9 = cVar9 + unaff_EBX[0x70];
          *pbVar23 = *pbVar23 + cVar8;
          uVar27 = (undefined3)((uint)pbVar23 >> 8);
          bVar30 = cVar8 + 0xa2;
          cVar9 = cVar9 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar9,uVar34)) + 0x6f);
          unaff_EBX = (byte *)CONCAT22(uVar66,CONCAT11(cVar9,uVar34));
          *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
          bVar11 = cVar8 + 0x44;
          piVar16 = (int *)CONCAT31(uVar27,bVar11);
          *(byte *)puVar32 = ((byte)*puVar32 - bVar11) - (0x5d < bVar30);
          if ((POPCOUNT((byte)*puVar32) & 1U) != 0) {
            *(byte *)piVar16 = (char)*piVar16 + bVar11;
            *(byte *)piVar16 = (char)*piVar16 + bVar11;
            *(char *)piVar16 = (char)*piVar16 + cVar9;
            puVar32 = (uint *)CONCAT22((short)((uint)puVar65 >> 0x10),(ushort)bVar10);
            *(byte *)piVar16 = (char)*piVar16 + bVar11;
            pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                       CONCAT11((char)((uint)pbVar23 >> 8) + (char)*piVar16,cVar8));
            uStack_1c = unaff_EBX;
            goto code_r0x00403511;
          }
          *(byte *)piVar16 = (char)*piVar16 + bVar11;
          cVar8 = cVar8 + -0x1a;
          piVar16 = (int *)CONCAT31(uVar27,cVar8);
          uStack_1c = (byte *)CONCAT22(uVar6,in_ES);
          *puVar32 = (*puVar32 - (int)piVar16) - (uint)(0x5d < bVar11);
          if ((POPCOUNT(*puVar32 & 0xff) & 1U) != 0) {
            *(byte *)puVar32 = (byte)*puVar32 + cVar8;
            goto code_r0x004034f3;
          }
          *(char *)piVar16 = (char)*piVar16 + cVar8;
          goto code_r0x0040349e;
        }
        pcVar17 = pcVar22;
        puVar65 = puVar32;
      } while (SCARRY1((byte)uVar5,bVar30) == (char)(byte)*puVar61 < '\0');
      *pcVar22 = *pcVar22 + bVar30;
      piVar16 = (int *)CONCAT31(uVar27,cVar8 + -0x59);
      pbVar60 = (byte *)((int)puVar61 + (uint)(0xd5 < bVar30) + *piVar16);
      bVar11 = cVar8 + -0x59 + (char)*piVar16;
      pbVar63 = (byte *)CONCAT31(uVar27,bVar11);
      bVar30 = *pbVar63;
      *pbVar63 = *pbVar63 + bVar11;
      *(byte **)pbVar63 = pbVar63 + (uint)CARRY1(bVar30,bVar11) + *(int *)pbVar63;
      bVar30 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar10;
    } while (CARRY1(bVar30,bVar10));
    *pbVar60 = *pbVar60 + bVar11;
    cVar8 = bVar10 - *unaff_EBX;
    param_2 = (byte *)CONCAT31(uVar31,cVar8);
    *param_2 = *param_2 ^ bVar11;
    *unaff_EBX = *unaff_EBX + cVar8;
    *pbVar63 = *pbVar63 + bVar11;
    *(char *)((int)pbVar63 * 2) = *(char *)((int)pbVar63 * 2) + cVar8;
  } while( true );
code_r0x0040349e:
  piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + -0x5e);
code_r0x004034a0:
  uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
  pbVar23[0x2a0a0000] = pbVar23[0x2a0a0000] - (char)pbVar23;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((char)((uint)pbVar23 >> 8) + (char)*piVar16,(char)pbVar23));
  bVar30 = (byte)piVar16;
  *(byte *)piVar16 = (char)*piVar16 + bVar30;
  uStack_1c = (byte *)CONCAT22(uStack_1c._2_2_,in_ES);
  puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),
                             (char)puVar32 - *(byte *)((int)puVar32 + 0x467e02));
  pbVar59[0x6fe1411] = pbVar59[0x6fe1411] + bVar30;
  uVar21 = *puVar61;
  *(byte *)puVar61 = (byte)*puVar61 + bVar30;
  if (!CARRY1((byte)uVar21,bVar30)) {
    pbVar15 = (byte *)((int)puVar64 + (int)pbVar59 * 2);
    *pbVar15 = *pbVar15 + bVar30;
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar30;
  uVar27 = (undefined3)((uint)piVar16 >> 8);
  bVar30 = bVar30 | *(byte *)((int)piVar16 + 0x4000046);
  piVar16 = (int *)CONCAT31(uVar27,bVar30);
  if ((char)bVar30 < '\x01') {
code_r0x00403511:
    pbVar59 = uStack_1c;
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    uStack_1c = (byte *)CONCAT22(uStack_1c._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar30;
  pbVar15 = (byte *)CONCAT31(uVar27,bVar30 + 0x6f);
  *pbVar15 = *pbVar15 + bVar30 + 0x6f;
  pbVar59 = pbVar59 + -*puVar32;
  do {
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_DS);
    bVar30 = *(byte *)((int)puVar64 + 0x17);
    *pbVar15 = *pbVar15 + (byte)pbVar15;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                               CONCAT11((char)((uint)pbVar23 >> 8) + bVar30 | (byte)*puVar32,
                                        (char)pbVar23));
    uVar27 = (undefined3)((uint)pbVar15 >> 8);
    bVar30 = (byte)pbVar15 | (byte)*puVar32;
    bVar10 = bVar30 - *(byte *)CONCAT31(uVar27,bVar30);
    puVar61 = (uint *)((int)puVar61 +
                      (uint)(bVar30 < *(byte *)CONCAT31(uVar27,bVar30)) +
                      *(int *)CONCAT31(uVar27,bVar10));
    pbVar15 = (byte *)CONCAT31(uVar27,bVar10);
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    *(byte *)puVar61 = (byte)*puVar61 + (char)puVar32;
    bVar30 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar10;
    *puVar32 = (uint)(pbVar15 + (uint)CARRY1(bVar30,bVar10) + *puVar32);
    if ((POPCOUNT(*puVar32 & 0xff) & 1U) != 0) {
      *(byte *)puVar61 = (byte)*puVar61 + 1;
      puVar65 = puVar61;
      goto code_r0x00403529;
    }
    *pbVar15 = *pbVar15 + bVar10;
    piVar16 = (int *)CONCAT31(uVar27,bVar10 + 0x6f);
code_r0x004034f3:
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    *(byte *)puVar61 = (byte)*puVar61 + (char)piVar16;
    pbVar59 = pbVar59 + 1;
    pcVar17 = (char *)((int)((uint)piVar16 | 8) + *(int *)((uint)piVar16 | 8));
    *pcVar17 = *pcVar17 + (char)pcVar17;
    piVar16 = (int *)(pcVar17 + 0x53000000);
    bVar30 = (byte)piVar16;
    *(byte *)piVar16 = (char)*piVar16 + bVar30;
    *unaff_EBX = *unaff_EBX + (char)puVar32;
    *(byte *)piVar16 = (char)*piVar16 + bVar30;
    *pbVar59 = *pbVar59 - (char)unaff_EBX;
    uVar21 = *puVar61;
    *(byte *)puVar61 = (byte)*puVar61 + bVar30;
    if (CARRY1((byte)uVar21,bVar30)) goto code_r0x0040349e;
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    pcVar17[0x5300006f] = pcVar17[0x5300006f] + (char)((uint)puVar32 >> 8);
    pcVar17 = pcVar17 + 0x53000001;
    bVar10 = (byte)pcVar17;
    bRam7e060000 = bVar30;
    *pcVar17 = *pcVar17 + bVar10;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar10 + 0x2d);
    puVar61[(int)puVar64 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar10) + puVar61[(int)puVar64 * 2]);
    puVar65 = puVar61;
code_r0x00403529:
    puVar61 = puVar65 + 1;
    out(*puVar65,(short)puVar32);
    bVar30 = *pbVar15;
    bVar10 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar10;
  } while (!CARRY1(bVar30,bVar10));
  *pbVar15 = *pbVar15 + bVar10;
  uVar27 = (undefined3)((uint)pbVar15 >> 8);
  bVar10 = bVar10 | pbVar15[0x4000040];
  pcVar17 = (char *)CONCAT31(uVar27,bVar10);
  uVar66 = in_ES;
  if ((char)bVar10 < '\x01') goto code_r0x00403579;
  *pcVar17 = *pcVar17 + bVar10;
  cVar8 = bVar10 + 10;
  pcVar17 = (char *)CONCAT31(uVar27,cVar8);
  puVar65 = puVar61;
  if (cVar8 == '\0' || SCARRY1(bVar10,'\n') != cVar8 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar30 = (byte)pcVar17;
  *pcVar17 = *pcVar17 + bVar30;
  piVar16 = (int *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar30 + 0x2d);
  puVar61[(int)puVar64 * 2] =
       (uint)((int)puVar32 + (uint)(0xd2 < bVar30) + puVar61[(int)puVar64 * 2]);
  pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
code_r0x00403549:
  uVar21 = *puVar61;
  bVar30 = (byte)piVar16;
  *(byte *)puVar61 = (byte)*puVar61 + bVar30;
  if (!CARRY1((byte)uVar21,bVar30)) goto code_r0x004034f3;
  *(byte *)piVar16 = (char)*piVar16 + bVar30;
  uVar27 = (undefined3)((uint)piVar16 >> 8);
  bVar30 = bVar30 | *(byte *)((int)piVar16 + 0x4000041);
  if ((char)bVar30 < '\x01') {
    *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar23;
    *(byte *)puVar32 = (byte)*puVar32;
    pcVar17 = (char *)CONCAT31(uVar27,bVar30 + 0x7e);
    puVar32 = (uint *)((int)puVar32 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
  piVar16 = (int *)CONCAT31(uVar27,bVar30 + 0xb);
  puVar65 = puVar61;
code_r0x0040355b:
  pbVar59 = pbVar59 + -*(int *)((int)puVar65 + 2);
  *pbVar59 = *pbVar59 - (char)unaff_EBX;
  uVar21 = *puVar65;
  bVar30 = (byte)piVar16;
  *(byte *)puVar65 = (byte)*puVar65 + bVar30;
  if (CARRY1((byte)uVar21,bVar30)) goto code_r0x00403548;
code_r0x00403565:
  piVar16 = piVar16 + 0x1ec09c00;
  pbVar15 = (byte *)((int)puVar64 + (int)pbVar59 * 2);
  *pbVar15 = *pbVar15 + (char)piVar16;
  *(byte *)puVar65 = (byte)*puVar65 + (char)piVar16 + (char)*piVar16;
  puVar61 = puVar65 + 1;
  out(*puVar65,(short)puVar32);
  pcVar17 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar23 = *pbVar23 + (char)pcVar17;
  *(byte *)puVar32 = (byte)*puVar32 - (char)((uint)pcVar17 >> 8);
  puVar65 = puVar61;
code_r0x00403580:
  *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar23;
  puVar61 = puVar65 + 1;
  out(*puVar65,(short)puVar32);
  bVar30 = (byte)pcVar17;
  puVar32 = (uint *)((int)puVar32 + 1);
  bRam7e060000 = bVar30;
  *pcVar17 = *pcVar17 + bVar30;
  uVar27 = (undefined3)((uint)pcVar17 >> 8);
  bVar10 = bVar30 + 0x2d;
  pcVar17 = (char *)CONCAT31(uVar27,bVar10);
  puVar61[(int)puVar64 * 2] =
       (uint)((int)puVar32 + (uint)(0xd2 < bVar30) + puVar61[(int)puVar64 * 2]);
  pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
  uVar21 = *puVar61;
  *(byte *)puVar61 = (byte)*puVar61 + bVar10;
  if (!CARRY1((byte)uVar21,bVar10)) {
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar65 + 0x45),(char)unaff_EBX));
    goto code_r0x0040353f;
  }
  *pcVar17 = *pcVar17 + bVar10;
  bVar10 = bVar10 | pcVar17[0x4000042];
  pcVar17 = (char *)CONCAT31(uVar27,bVar10);
  if ('\0' < (char)bVar10) {
code_r0x004035a1:
    bVar10 = (byte)pcVar17;
    *pcVar17 = *pcVar17 + bVar10;
    uVar27 = (undefined3)((uint)pcVar17 >> 8);
    bVar30 = bVar10 + 10;
    if (bVar30 == 0 || SCARRY1(bVar10,'\n') != (char)bVar30 < '\0') {
      pcVar17 = (char *)CONCAT31(uVar27,bVar10 + 8 + (0xf5 < bVar10));
code_r0x004035e5:
      bVar10 = (byte)pcVar17;
      *pcVar17 = *pcVar17 + bVar10;
      uVar27 = (undefined3)((uint)pcVar17 >> 8);
      bVar30 = bVar10 + 0x2d;
      pcVar17 = (char *)CONCAT31(uVar27,bVar30);
      puVar61[(int)puVar64 * 2] =
           (uint)((int)puVar32 + (uint)(0xd2 < bVar10) + puVar61[(int)puVar64 * 2]);
      uVar21 = *puVar61;
      *(byte *)puVar61 = (byte)*puVar61 + bVar30;
      if (CARRY1((byte)uVar21,bVar30)) {
        *pcVar17 = *pcVar17 + bVar30;
        bVar30 = bVar30 | pcVar17[0x4000044];
        pbVar15 = (byte *)CONCAT31(uVar27,bVar30);
        if ('\0' < (char)bVar30) {
          *pbVar15 = *pbVar15 + bVar30;
          pbVar15 = (byte *)(CONCAT31(uVar27,bVar30 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar30));
          pbRam2a060000 = pbVar15;
          *unaff_EBX = *unaff_EBX + (char)unaff_EBX;
          *(byte *)puVar32 = (byte)*puVar32 ^ (byte)pbVar15;
          *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
          *pbVar15 = *pbVar15 + (byte)pbVar15;
          puVar65 = puVar64;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),
                                 (byte)pbVar23 |
                                 *(byte *)((int)(puVar32 + 0xa004000) + (int)puVar64));
      puVar65 = puVar61;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
    bVar10 = bVar10 + 0x37;
    piVar16 = (int *)CONCAT31(uVar27,bVar10);
    puVar61[(int)puVar64 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar30) + puVar61[(int)puVar64 * 2]);
    pbStack_2c = (byte *)CONCAT22(pbStack_2c._2_2_,in_ES);
    uVar21 = *puVar61;
    *(byte *)puVar61 = (byte)*puVar61 + bVar10;
    puVar65 = puVar61;
    if (!CARRY1((byte)uVar21,bVar10)) goto code_r0x0040355b;
    *(byte *)piVar16 = (char)*piVar16 + bVar10;
    bVar10 = bVar10 | *(byte *)((int)piVar16 + 0x4000043);
    pbVar15 = (byte *)CONCAT31(uVar27,bVar10);
    if ((char)bVar10 < '\x01') {
      *pbVar15 = *pbVar15 + bVar10;
      pbVar59 = pbVar59 + -*(int *)((int)puVar64 + -0x5d);
      *pbVar15 = *pbVar15 + bVar10;
      uStack_34 = (undefined4 *)((uint)uStack_34._2_2_ << 0x10);
      piVar16 = (int *)CONCAT31(uVar27,bVar10 - *pbVar15);
      puVar61 = (uint *)((int)puVar61 + (-(uint)(bVar10 < *pbVar15) - *piVar16));
      pbVar15 = (byte *)CONCAT31(uVar27,(bVar10 - *pbVar15) + (char)*piVar16);
      pbStack_2c = (byte *)0x17000000;
      puVar65 = puVar64;
code_r0x00403615:
      bVar30 = *pbVar15;
      bVar10 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar10;
      *puVar32 = (uint)(pbVar15 + (uint)CARRY1(bVar30,bVar10) + *puVar32);
      puVar64 = puVar65;
      if ((POPCOUNT(*puVar32 & 0xff) & 1U) == 0) {
        *pbVar15 = *pbVar15 + bVar10;
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar10 + 0x28);
        puVar64 = puVar65 + 1;
        uVar21 = in((short)puVar32);
        *puVar65 = uVar21;
        *pcVar17 = *pcVar17 + bVar10 + 0x28;
        pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar23 >> 8) | unaff_EBX[(int)pbVar23],
                                            (char)pbVar23));
        pcVar17[0x28] = pcVar17[0x28] + (char)((uint)puVar32 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar15 = *pbVar15 + bVar10;
    uVar21 = CONCAT31(uVar27,bVar10 + 0xb);
    piVar16 = (int *)(uVar21 - *puVar61);
    if (uVar21 < *puVar61) {
      cVar8 = (char)piVar16;
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      uVar67 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar9 = (char)unaff_EBX;
      bVar30 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar32 + 2);
      *pbVar59 = *pbVar59 - cVar9;
      *(byte *)puVar61 = (byte)*puVar61 + cVar8;
      uStack_34 = (undefined4 *)CONCAT22(uStack_34._2_2_,in_ES);
      unaff_EBX = (byte *)CONCAT22(uVar67,CONCAT11(bVar30 + *(char *)(CONCAT22(uVar67,CONCAT11(
                                                  bVar30,cVar9)) + 0x38),cVar9));
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      pcVar17 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),cVar8 + 'o');
      *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar23;
      *pcVar17 = *pcVar17 - cVar9;
      *pcVar17 = *pcVar17 + cVar8 + 'o';
      puVar64 = (uint *)((int)puVar64 - puVar61[0x11]);
      goto code_r0x004035e5;
    }
    puVar65 = puVar61 + 1;
    out(*puVar61,(short)puVar32);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar10) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_2c & 0x4000) != 0;
  bVar69 = ((uint)pbStack_2c & 0x400) != 0;
  in_IF = ((uint)pbStack_2c & 0x200) != 0;
  in_TF = ((uint)pbStack_2c & 0x100) != 0;
  in_AF = ((uint)pbStack_2c & 0x10) != 0;
  in_ID = ((uint)pbStack_2c & 0x200000) != 0;
  in_AC = ((uint)pbStack_2c & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar8 = (char)pcVar17;
  *pcVar17 = *pcVar17 + cVar8;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((byte)((uint)pbVar23 >> 8) | (byte)*puVar32,(char)pbVar23));
  unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3e],
                                        (char)unaff_EBX));
  *pcVar17 = *pcVar17 + cVar8;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar8 + '(');
  cVar8 = (char)((uint)puVar32 >> 8);
  *(byte *)((int)puVar32 + 0x21) = *(byte *)((int)puVar32 + 0x21) + cVar8;
  pbVar63 = pbVar15 + 2;
  *pbVar63 = *pbVar63 + cVar8;
  bVar30 = *pbVar63;
code_r0x00403643:
  cVar8 = (char)pbVar15;
  if ((POPCOUNT(bVar30) & 1U) == 0) {
    *pbVar15 = *pbVar15 + cVar8;
    uVar27 = (undefined3)((uint)pbVar15 >> 8);
    cVar9 = cVar8 + '(';
    pcVar17 = (char *)CONCAT31(uVar27,cVar9);
    in_AF = ((uint)pbVar15 & 0x1000) != 0;
    *pcVar17 = *pcVar17 + cVar9;
    puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(byte)puVar32 | (byte)*puVar61);
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                          *(byte *)((int)puVar61 + 0x3f),(char)unaff_EBX));
    *pcVar17 = *pcVar17 + cVar9;
    pbVar15 = (byte *)CONCAT31(uVar27,cVar8 + 'M');
    puVar32 = (uint *)((uint)puVar32 | *puVar32);
    *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
code_r0x00403659:
    puVar65 = (uint *)((int)puVar64 + (uint)bVar69 * -2 + 1);
    bVar30 = (byte)pbVar15;
    *(byte *)puVar64 = bVar30;
    *pbVar15 = *pbVar15 + bVar30;
    uVar27 = (undefined3)((uint)pbVar15 >> 8);
    bVar30 = bVar30 | (byte)*puVar32;
    pcVar17 = (char *)CONCAT31(uVar27,bVar30);
    puVar64 = puVar65;
    if ((POPCOUNT(bVar30) & 1U) != 0) goto code_r0x0040369e;
    *pcVar17 = *pcVar17 + bVar30;
    bVar30 = bVar30 + 2;
    *pbVar59 = *pbVar59 - (char)unaff_EBX;
    *(byte *)puVar61 = (byte)*puVar61 + bVar30;
    puVar62 = puVar61 + (uint)bVar69 * -2 + 1;
    out(*puVar61,(short)puVar32);
    puVar64 = (uint *)((int)puVar65 + (uint)bVar69 * -2 + 1);
    puVar61 = (uint *)((int)puVar62 + (uint)bVar69 * -2 + 1);
    *(byte *)puVar65 = (byte)*puVar62;
    *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
    cVar9 = (char)((uint)pbVar23 >> 8);
    unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar9;
    cVar8 = (bVar30 | (byte)*puVar61) - 6;
    piVar16 = (int *)CONCAT31(uVar27,cVar8);
    pcVar17 = (char *)((int)piVar16 * 2 + 0x2adc0a00);
    *pcVar17 = *pcVar17 - cVar9;
    *piVar16 = (int)(*piVar16 + (int)puVar32);
    *(char *)piVar16 = (char)*piVar16 + cVar8;
    bVar30 = cVar8 + (char)*piVar16;
    in_AF = 9 < (bVar30 & 0xf) | in_AF;
    uVar21 = CONCAT31(uVar27,bVar30 + in_AF * '\x06') & 0xffffff0f;
    pbVar15 = (byte *)CONCAT22((short)(uVar21 >> 0x10),
                               CONCAT11((char)((uint)pbVar15 >> 8) + in_AF,(char)uVar21));
    pbVar63 = pbVar23;
  }
  else {
    *(byte *)puVar32 = (byte)*puVar32 + cVar8;
    *(byte *)puVar64 = (byte)*puVar64 + (char)((uint)puVar32 >> 8);
    pbVar63 = pbVar23;
  }
  *(byte *)puVar61 = (byte)*puVar61 + (char)((uint)pbVar15 >> 8);
  *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar63;
  bVar10 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  bVar30 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  pbVar23 = pbVar63;
  pbVar59 = pbStack_2c;
  if (!CARRY1(bVar30,bVar10)) goto code_r0x004036a6;
  *pbVar15 = *pbVar15 + bVar10;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar10 | pbVar15[0x400003f]);
  pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar63 >> 8),
                             (char)pbVar63 - *(byte *)((int)puVar32 + 0x5040302));
  *(char *)((int)pbVar15 * 2) = *(char *)((int)pbVar15 * 2) - (char)((uint)pbVar63 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(char)pbVar23 + (byte)*puVar61);
    pbVar15 = (byte *)(CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + '%') + 0x1ebd9f3);
    uStack_34 = (undefined4 *)CONCAT22(uStack_34._2_2_,in_ES);
    bVar30 = (byte)pbVar15;
    bVar68 = CARRY1(*pbVar15,bVar30);
    *pbVar15 = *pbVar15 + bVar30;
    puVar39 = uStack_34 + -1;
    *(undefined2 *)(uStack_34 + -1) = in_ES;
    cVar8 = (char)puVar32;
    if (bVar68) {
      *pbVar15 = *pbVar15 + bVar30;
      uVar67 = (undefined2)((uint)unaff_EBX >> 0x10);
      bVar11 = (byte)((uint)unaff_EBX >> 8) | pbVar59[0x47];
      pcVar17 = (char *)CONCAT22(uVar67,CONCAT11(bVar11,(char)unaff_EBX));
      *pbVar15 = *pbVar15 + bVar30;
      uVar27 = (undefined3)((uint)pbVar15 >> 8);
      bVar30 = bVar30 + 0x2a;
      *pcVar17 = *pcVar17 + cVar8;
      pbVar15 = (byte *)((int)CONCAT31(uVar27,bVar30) * 2);
      *pbVar15 = *pbVar15 ^ bVar30;
      bVar30 = bVar30 ^ *(byte *)CONCAT31(uVar27,bVar30);
      pbVar15 = (byte *)CONCAT31(uVar27,bVar30);
      bVar10 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar30;
      *pbVar15 = (*pbVar15 - bVar30) - CARRY1(bVar10,bVar30);
      *pbVar23 = *pbVar23 + cVar8;
      unaff_EBX = (byte *)CONCAT22(uVar67,CONCAT11(bVar11 + pcVar17[0x38],(char)unaff_EBX));
      *pbVar15 = *pbVar15 + bVar30;
      cVar9 = bVar30 + 2;
      if ((POPCOUNT(cVar9) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar71 = (*pcVar2)();
        pbVar15 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar27,cVar9) = *(char *)CONCAT31(uVar27,cVar9) + cVar9;
      bVar30 = bVar30 + 0x71;
      pbVar15 = (byte *)CONCAT31(uVar27,bVar30);
      uVar66 = *(undefined2 *)(uStack_34 + -1);
      *pbVar15 = *pbVar15 + bVar30;
      iVar18 = (int)pbVar23 - *puVar32;
      pbVar23 = (byte *)CONCAT22((short)((uint)iVar18 >> 0x10),
                                 CONCAT11((char)((uint)iVar18 >> 8) + *pbVar15,(char)iVar18));
      pbVar59 = (byte *)*uStack_34;
      bVar68 = CARRY1(*pbVar15,bVar30);
      *pbVar15 = *pbVar15 + bVar30;
      *(undefined2 *)uStack_34 = in_ES;
      *(undefined2 *)(uStack_34 + -1) = in_ES;
    }
    bVar30 = (byte)pbVar15;
    uVar27 = (undefined3)((uint)pbVar15 >> 8);
    if (bVar68) break;
    *(byte *)puVar32 = (byte)*puVar32 + (byte)pbVar23;
    *(byte *)((int)puVar32 + (int)pbVar59) = *(byte *)((int)puVar32 + (int)pbVar59) + bVar30;
    pcVar17 = (char *)CONCAT31(uVar27,(byte)*puVar32);
code_r0x0040369e:
    pbVar15 = (byte *)(pcVar17 + *(int *)(pcVar17 + 0x6c28));
  }
  *pbVar15 = *pbVar15 + bVar30;
  uVar28 = (uint3)((uint)pbVar23 >> 8);
  pbVar63 = (byte *)CONCAT31(uVar28,(byte)pbVar23 | *unaff_EBX);
  uVar66 = *(undefined2 *)uStack_34;
  puVar39 = uStack_34 + 1;
  puVar65 = puVar61 + (uint)bVar69 * -2 + 1;
  out(*puVar61,(short)puVar32);
  puVar64 = (uint *)((int)puVar64 + (uint)bVar69 * -2 + 1);
  *pbVar15 = *pbVar15 + bVar30;
  bVar30 = bVar30 | (byte)*puVar64;
  pbVar15 = (byte *)CONCAT31(uVar27,bVar30);
  *(byte *)(puVar64 + 0x1bc28000) = (byte)puVar64[0x1bc28000] - (char)((uint)pbVar23 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar30);
  *(undefined2 *)uStack_34 = pbStack_2c._0_2_;
  cVar9 = (char)unaff_EBX;
  cVar35 = cVar9 - (byte)*puVar32;
  unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar35);
  if (cVar35 != '\0' && (char)(byte)*puVar32 <= cVar9) {
    *pbVar15 = *pbVar15 + bVar30;
    iVar18 = CONCAT31(uVar27,bVar30 + 0x2a);
    puVar61 = (uint *)((int)puVar65 + 1);
    cVar9 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + -0x7b);
    uVar71 = CONCAT44(CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(cVar9,cVar8)),iVar18);
    in_ES = *(undefined2 *)uStack_34;
    pcVar17 = (char *)(iVar18 + 0x6f);
    *pcVar17 = *pcVar17 + cVar9;
    pbVar63 = (byte *)((uint)uVar28 << 8);
    do {
      piVar16 = (int *)((ulonglong)uVar71 >> 0x20);
      pcVar17 = (char *)uVar71;
      *(char *)piVar16 = (char)*piVar16;
      if ((char)*piVar16 == '\0') {
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        pbStack_2c._0_2_ = in_ES;
_ctor:
        puVar32 = (uint *)((ulonglong)uVar71 >> 0x20);
        pbVar63 = (byte *)((uint)CONCAT21((short)((uint)pbVar63 >> 0x10),
                                          (char)((uint)pbVar63 >> 8) + *(char *)uVar71) << 8);
        unaff_EBX = (byte *)((uint)unaff_EBX & 0xffffff00);
        *(byte *)puVar32 = (byte)*puVar32;
        uVar27 = (undefined3)((ulonglong)uVar71 >> 8);
        bVar10 = (char)uVar71 - *(char *)uVar71;
        pbVar15 = (byte *)CONCAT31(uVar27,bVar10);
        bVar30 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar10;
        puVar65 = (uint *)((int)puVar61 + (uint)CARRY1(bVar30,bVar10) + *(int *)pbVar15);
        pbVar15 = (byte *)CONCAT31(uVar27,bVar10);
        uStack_34 = puVar39;
        break;
      }
      *pcVar17 = *pcVar17 + (char)uVar71;
      *piVar16 = (int)(pbVar59 + *piVar16);
      puVar61 = (uint *)((int)puVar61 + 1);
      uVar71 = CONCAT44(CONCAT22((short)((ulonglong)uVar71 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar71 >> 0x28) +
                                          *(char *)((int)piVar16 + -0x33),
                                          (char)((ulonglong)uVar71 >> 0x20))),pcVar17);
      in_ES = *(undefined2 *)puVar39;
      puVar39 = (undefined4 *)((int)puVar39 + 4);
      pbVar15 = pbVar63;
code_r0x0040371e:
      puVar32 = (uint *)((ulonglong)uVar71 >> 0x20);
      pbVar23 = (byte *)uVar71;
      bVar10 = (byte)((ulonglong)uVar71 >> 0x28);
      pbVar23[0x6f] = pbVar23[0x6f] + bVar10;
      pbVar63 = (byte *)((uint)pbVar15 & 0xffffff00);
      *(char *)puVar32 = (char)*puVar32;
      bVar30 = (byte)uVar71;
      if ((char)*puVar32 != '\0') {
        *pbVar23 = *pbVar23 + bVar30;
        uVar21 = *puVar32;
        *puVar32 = (uint)(pbVar59 + *puVar32);
        piVar41 = (int *)((int)puVar39 + -4);
        *(uint **)((int)puVar39 + -4) = puVar61;
        if (CARRY4(uVar21,(uint)pbVar59)) {
          *pbVar23 = *pbVar23 + bVar30;
          *(undefined2 *)((int)puVar39 + -8) = in_ES;
          puVar65 = puVar32 + 0x1d028000;
          uVar21 = *puVar65;
          *(byte *)puVar65 = (byte)*puVar65 - bVar10;
          *(uint *)pbVar23 = (*(int *)pbVar23 - (int)pbVar23) - (uint)((byte)uVar21 < bVar10);
          *(byte *)puVar32 = (char)*puVar32 + bVar30;
          *pbVar59 = *pbVar59;
          uVar71 = CONCAT44(puVar32,CONCAT31((int3)((ulonglong)uVar71 >> 8),bVar30 + 0x2a));
          puVar40 = (undefined2 *)((int)puVar39 + -0xc);
          puVar39 = (undefined4 *)((int)puVar39 + -0xc);
          *puVar40 = in_DS;
          pbStack_2c._0_2_ = in_ES;
          goto _ctor;
        }
        bVar68 = false;
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),*pbVar23);
        goto code_r0x004037a7;
      }
      bVar10 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar30;
      *(uint *)pbVar23 = (*(int *)pbVar23 - (int)pbVar23) - (uint)CARRY1(bVar10,bVar30);
      bVar30 = *pbVar63;
      bVar10 = (byte)((ulonglong)uVar71 >> 0x20);
      *pbVar63 = *pbVar63 + bVar10;
      if (CARRY1(bVar30,bVar10)) goto code_r0x0040375a;
    } while( true );
  }
  uVar71 = CONCAT44(puVar32,pbVar15);
  puVar61 = puVar65 + (uint)bVar69 * -2 + 1;
  out(*puVar65,(short)puVar32);
  bVar10 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  *pbVar63 = *pbVar63 + (char)unaff_EBX;
  bVar30 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar10;
  *(byte **)(unaff_EBX + -0x49) =
       (byte *)((int)puVar61 + (uint)CARRY1(bVar30,bVar10) + *(int *)(unaff_EBX + -0x49));
  puVar39 = uStack_34;
  in_ES = pbStack_2c._0_2_;
code_r0x0040375a:
  pbVar15 = (byte *)uVar71;
  *pbVar15 = *pbVar15 + (char)uVar71;
  bVar68 = CARRY1((byte)((uint)pbVar63 >> 8),*pbVar15);
  *(undefined2 *)((int)puVar39 + -4) = uVar66;
  iVar18 = CONCAT31(0x1f0a00,bVar68 + 'o') + *(int *)(unaff_EBX + (int)pbVar59) +
           (uint)(0x90 < bVar68) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar71 >> 0x20);
  pcVar22 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + -0x66) | *puVar64);
  bVar30 = *(byte *)((int)puVar64 + -0x46);
  pcVar17 = (char *)CONCAT22(0xd0a,(ushort)bVar30 << 8);
  *pcVar22 = *pcVar22 + (char)pcVar22;
  bVar10 = (byte)((ulonglong)uVar71 >> 0x20);
  puVar33 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar71 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar71 >> 0x28) | unaff_EBX[(int)pbVar59],bVar10));
  *pcVar17 = *pcVar17 + (char)pcVar22;
  *pbVar59 = *pbVar59 - bVar30;
  *puVar33 = *puVar33;
  pbVar15 = (byte *)(((uint)pcVar22 | 8) + 0x4490f9d8);
  bVar30 = (byte)pbVar15;
  *pbVar15 = *pbVar15 + bVar30;
  uVar21 = *puVar61;
  *(uint *)((int)puVar61 + (int)pbVar15) = *(uint *)((int)puVar61 + (int)pbVar15) ^ (uint)pcVar17;
  *pbVar15 = *pbVar15 | bVar30;
  piVar41 = (int *)0x2609fffc;
  bVar68 = false;
  uRam2609fffc = in_ES;
  *pbVar15 = *pbVar15 | bVar30;
  uVar71 = CONCAT44(CONCAT31((int3)((uint)puVar33 >> 8),bVar10 | (byte)uVar21),pbVar15);
code_r0x004037a7:
  while( true ) {
    pbVar15 = (byte *)((ulonglong)uVar71 >> 0x20);
    uVar66 = (undefined2)((ulonglong)uVar71 >> 0x20);
    out(*puVar61,uVar66);
    out(puVar61[(uint)bVar69 * -2 + 1],uVar66);
    puVar32 = (uint *)((int)puVar64 + (int)pbVar15);
    uVar21 = *puVar32;
    uVar5 = (uint)uVar71 + *puVar32;
    *puVar32 = uVar5 + bVar68;
    iVar18 = *piVar41 + *(int *)(pcVar17 + (int)pbVar15) +
             (uint)(CARRY4(uVar21,(uint)uVar71) || CARRY4(uVar5,(uint)bVar68));
    cVar8 = (char)iVar18 + '\t';
    pbVar23 = (byte *)CONCAT31((int3)((uint)iVar18 >> 8),cVar8);
    pcVar22 = (char *)((uint)bVar69 * -8 + 0x260a0004);
    out(uRam260a0000,uVar66);
    uVar66 = (undefined2)piVar41[1];
    *pbVar23 = *pbVar23 + cVar8;
    bVar10 = (byte)((uint)pcVar17 >> 8) | *pbVar15;
    *(undefined2 *)(piVar41 + 1) = in_DS;
    bVar30 = *pbVar23;
    pbVar23 = pbVar23 + (uint)CARRY1(bVar10,*pbVar23) + *(int *)pbVar23;
    *pbVar15 = *pbVar15 + 6;
    cVar9 = (char)unaff_EBX - *pcVar22;
    pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),CONCAT11(bVar10 + bVar30 + *pbVar23,6)
                              );
    *pbVar23 = *pbVar23;
    *(undefined2 *)piVar41 = in_ES;
    uVar27 = (undefined3)((uint)pbVar23 >> 8);
    cVar8 = (char)pbVar23 - *pbVar23;
    piVar16 = (int *)CONCAT31(uVar27,cVar8);
    puVar61 = (uint *)(pcVar22 + *piVar16);
    bVar30 = cVar8 + (char)*piVar16;
    pcVar22 = (char *)CONCAT31(uVar27,bVar30);
    piVar42 = piVar41 + -1;
    piVar41[-1] = (int)pcVar17;
    *pcVar22 = *pcVar22 + bVar30;
    *pcVar22 = *pcVar22 + bVar30;
    *pcVar22 = *pcVar22 + bVar30;
    bVar68 = CARRY1(*pbVar15,bVar30);
    *pbVar15 = *pbVar15 + bVar30;
    if (bVar68) break;
    in_ES = (undefined2)piVar41[-1];
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar9);
    uVar71 = CONCAT44(pbVar15,pcVar22);
  }
  *pcVar22 = *pcVar22 + bVar30;
  pbVar60 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam080a0056,cVar9));
  *pcVar22 = *pcVar22 + bVar30;
  bVar11 = bVar30 + 2;
  *pbVar60 = *pbVar60 - (char)((ulonglong)uVar71 >> 0x20);
  *(char *)CONCAT31(uVar27,bVar11) = *(char *)CONCAT31(uVar27,bVar11) + bVar11;
  uVar21 = *puVar61;
  uVar31 = (undefined3)((uint)pcVar17 >> 8);
  pbVar23 = (byte *)(CONCAT31(uVar31,(byte)uVar21) | 6);
  bVar10 = 9 < (bVar30 + 0x74 & 0xf) | in_AF;
  bVar12 = bVar30 + 0x74 + bVar10 * '\x06';
  bVar12 = bVar12 + (0x90 < (bVar12 & 0xf0) | 0x8d < bVar11 | bVar10 * (0xf9 < bVar12)) * '`';
  pbVar63 = (byte *)CONCAT31(uVar27,bVar12);
  bVar30 = *pbVar63;
  *pbVar63 = *pbVar63 + bVar12;
  if (!SCARRY1(bVar30,bVar12)) {
    *(byte *)puVar61 = (byte)*puVar61 + bVar12;
    puVar61 = (uint *)((int)puVar61 + *(int *)(pbVar15 + 0x33));
    *pbVar63 = *pbVar63 | bVar12;
    *(byte *)puVar61 = (byte)*puVar61 + bVar12;
    bVar30 = bVar12 + 0x72;
    piVar41[-2] = (int)pbVar60;
    *(byte *)CONCAT31(uVar27,bVar30) = *(byte *)CONCAT31(uVar27,bVar30) | bVar30;
    *(byte *)puVar61 = (byte)*puVar61 + bVar30;
    pbVar23 = (byte *)CONCAT31(uVar31,((byte)uVar21 | 6) + (byte)*puVar61);
    pcVar17 = (char *)CONCAT31(uVar27,bVar12 - 0x11);
    piVar42 = piVar41 + -3;
    piVar41[-3] = (int)pbVar23;
    *pcVar17 = *pcVar17 + (bVar12 - 0x11);
    pbVar63 = (byte *)CONCAT31(uVar27,bVar12 - 0xf);
    puVar64 = (uint *)((int)puVar64 + iRam080a0052);
    *pbVar63 = *pbVar63 + (bVar12 - 0xf);
  }
code_r0x00403825:
  pbVar59 = (byte *)0x80a0000;
  uVar27 = (undefined3)((uint)pbVar63 >> 8);
  cVar8 = (char)pbVar63 + '\x7f';
  pcVar17 = (char *)CONCAT31(uVar27,cVar8);
  *(byte **)((int)piVar42 + -4) = pbVar60;
  *pcVar17 = *pcVar17 + cVar8;
  iVar18 = CONCAT31(uVar27,(char)pbVar63 + -0x7f) + 0x547d;
  cVar9 = (char)iVar18;
  uVar27 = (undefined3)((uint)iVar18 >> 8);
  cVar8 = cVar9 + '*';
  pcVar17 = (char *)CONCAT31(uVar27,cVar8);
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 | (byte)*puVar61);
  cVar35 = (char)pbVar60 - (byte)*puVar61;
  uVar67 = (undefined2)((uint)pbVar60 >> 0x10);
  cVar29 = (char)((uint)pbVar60 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar60 >> 8),cVar35) + 0x57);
  *pcVar17 = *pcVar17 + cVar8;
  bVar30 = cVar9 + 0x54U & *pbVar15;
  iVar18 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
  pcVar17 = (char *)CONCAT31(uVar27,bVar30 + 0x2a);
  *(undefined2 *)((int)piVar42 + -8) = in_DS;
  cVar29 = cVar29 + *(char *)(CONCAT22(uVar67,CONCAT11(cVar29,cVar35)) + 0x58);
  *pcVar17 = *pcVar17 + bVar30 + 0x2a;
  bVar11 = bVar30 + 0x54 & *pbVar15;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar27,bVar11) = *(char *)CONCAT31(uVar27,bVar11) + bVar11;
  pcVar17 = (char *)CONCAT31(uVar27,bVar11 + 0x2a);
  pbVar63 = *(byte **)((int)piVar42 + -8);
  cVar29 = cVar29 + *(char *)(CONCAT22(uVar67,CONCAT11(cVar29,cVar35)) + 0x55);
  *pcVar17 = *pcVar17 + bVar11 + 0x2a;
  pcVar17 = (char *)CONCAT31(uVar27,bVar11 + 0x57);
  pbVar15 = pbVar15 + *(int *)pbVar63;
  *(undefined4 *)((int)piVar42 + -8) = 0x2a;
  cVar29 = cVar29 + *(char *)(CONCAT22(uVar67,CONCAT11(cVar29,cVar35)) + 0x55);
  *pcVar17 = *pcVar17 + bVar11 + 0x57;
  cVar8 = bVar11 - 0x3a;
  pcVar17 = (char *)CONCAT31(uVar27,cVar8);
  *(undefined2 *)((int)piVar42 + -0xc) = uVar66;
  *pcVar17 = *pcVar17 + cVar8;
  bVar30 = *pbVar15;
  cVar9 = (char)pbVar23;
  *(undefined2 *)((int)piVar42 + -0x10) = in_DS;
  pbVar60 = (byte *)CONCAT22(uVar67,CONCAT11(cVar29 + *(char *)(CONCAT22(uVar67,CONCAT11(cVar29,
                                                  cVar35)) + 0x59),cVar35));
  *pcVar17 = *pcVar17 + cVar8;
  bVar13 = bVar11 - 0x10 & *pbVar15;
  puVar64 = (uint *)((int)puVar64 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar18);
  *(char *)CONCAT31(uVar27,bVar13) = *(char *)CONCAT31(uVar27,bVar13) + bVar13;
  bVar13 = bVar13 + 0x2a;
  pbVar25 = (byte *)CONCAT31(uVar27,bVar13);
  puVar39 = (undefined4 *)((int)piVar42 + -0x14);
  *(undefined2 *)((int)piVar42 + -0x14) = in_DS;
  bVar11 = *(byte *)((int)puVar64 + 0x17);
  *pbVar25 = *pbVar25 + bVar13;
  bVar12 = *pbVar15;
  puVar44 = (undefined4 *)((int)piVar42 + -0x18);
  *(undefined2 *)((int)piVar42 + -0x18) = in_DS;
  bVar14 = *(byte *)((int)puVar64 + 0x1a);
  *pbVar25 = *pbVar25 + bVar13;
  pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar23 >> 8) | bVar30) + bVar11 | bVar12) +
                                      bVar14 | *pbVar15,cVar9));
  *pbVar60 = *pbVar60 + cVar35;
  *(byte *)((int)pbVar25 * 2) = *(byte *)((int)pbVar25 * 2) ^ bVar13;
  bVar30 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar13;
  bVar11 = *pbVar25;
  *pbVar23 = *pbVar23 + (char)pbVar15;
  bVar30 = ((bVar13 - bVar11) - CARRY1(bVar30,bVar13)) + *pbVar15;
  pbVar25 = (byte *)CONCAT31(uVar27,bVar30);
  if ((POPCOUNT(bVar30) & 1U) != 0) {
    pbVar15 = *(byte **)((int)piVar42 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar25 = *pbVar25 + bVar30;
  cVar8 = (bVar30 + 0x6f) - (0x90 < bVar30);
  pbVar24 = (byte *)CONCAT31(uVar27,cVar8);
  bVar30 = *pbVar15;
  *pbVar15 = *pbVar15 + cVar9;
  if (SCARRY1(bVar30,cVar9) == (char)*pbVar15 < '\0') {
    cRam33100000 = cRam33100000 - cVar8;
    cVar8 = cVar8 + *pbVar15;
    pbVar25 = (byte *)CONCAT31(uVar27,cVar8);
    puVar39 = (undefined4 *)((int)piVar42 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar24 = *pbVar24 + (char)pbVar24;
code_r0x004038b0:
    uVar27 = (undefined3)((uint)pbVar24 >> 8);
    cVar8 = (char)pbVar24 + '\x02';
    pbVar25 = (byte *)CONCAT31(uVar27,cVar8);
    puVar39 = puVar44;
    if ((POPCOUNT(cVar8) & 1U) != 0) {
code_r0x00403908:
      puVar64 = (uint *)((int)puVar64 - *(int *)pbVar63);
      cVar8 = (char)pbVar25 + *pbVar15;
      pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
code_r0x0040390c:
      cVar9 = (char)pbVar25;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040390e;
      *pbVar63 = *pbVar63 + cVar9;
      goto code_r0x00403962;
    }
    *pbVar25 = *pbVar25 + cVar8;
    puVar39 = (undefined4 *)((int)puVar44 + -4);
    piVar42 = (int *)((int)puVar44 + -4);
    *(byte **)((int)puVar44 + -4) = pbVar23;
    cVar8 = (char)pbVar24 + '.' + *pbVar15;
    pbVar25 = (byte *)CONCAT31(uVar27,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar24 = pbVar15 + (int)pbVar25;
      *pbVar24 = *pbVar24 + cVar8;
      bVar30 = *pbVar24;
      goto code_r0x00403912;
    }
    *pbVar25 = *pbVar25 + cVar8;
    bVar30 = cVar8 + 2;
    pbVar25 = (byte *)CONCAT31(uVar27,bVar30);
    puVar39 = (undefined4 *)((int)puVar44 + -4);
    if ((POPCOUNT(bVar30) & 1U) != 0) goto code_r0x00403916;
    *pbVar25 = *pbVar25 + bVar30;
    cVar9 = cVar8 + 'q';
    piVar16 = (int *)CONCAT31(uVar27,cVar9);
    *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0x90 < bVar30);
    bVar30 = *pbVar60;
    bVar11 = (byte)((uint)pbVar23 >> 8);
    *pbVar60 = *pbVar60 + bVar11;
    if (!CARRY1(bVar30,bVar11)) {
      out(*(undefined4 *)pbVar63,(short)pbVar15);
      bVar30 = (cVar9 - (char)*piVar16) - CARRY1(bVar30,bVar11);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      cVar8 = bVar30 - *(byte *)CONCAT31(uVar27,bVar30);
      puVar61 = (uint *)(pbVar63 +
                        ((((uint)bVar69 * -8 + 4) - *(int *)CONCAT31(uVar27,cVar8)) -
                        (uint)(bVar30 < *(byte *)CONCAT31(uVar27,bVar30))));
      pbVar63 = (byte *)CONCAT31(uVar27,cVar8);
      goto code_r0x00403825;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    uVar67 = (undefined2)((uint)pbVar60 >> 0x10);
    bVar30 = (byte)((uint)pbVar60 >> 8) | bRam080a0056;
    *(char *)piVar16 = (char)*piVar16 + cVar9;
    pcVar17 = (char *)CONCAT31(uVar27,cVar8 + 's');
    pbVar60 = (byte *)CONCAT22(uVar67,CONCAT11(bVar30 + *(char *)(CONCAT22(uVar67,CONCAT11(bVar30,(
                                                  char)pbVar60)) + 0x56),(char)pbVar60));
    *pcVar17 = *pcVar17 + cVar8 + 's';
    bVar30 = cVar8 - 0xf;
    pbVar15 = *(byte **)((int)puVar44 + -4);
    *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
    bVar11 = cVar8 + 0x1e;
    pbVar24 = (byte *)CONCAT31(uVar27,bVar11);
    *(byte **)(pbVar63 + (int)puVar64 * 8) =
         pbVar15 + (uint)(0xd2 < bVar30) + *(int *)(pbVar63 + (int)puVar64 * 8);
    puVar39 = (undefined4 *)((int)puVar44 + -4);
    puVar46 = (undefined4 *)((int)puVar44 + -4);
    *(undefined2 *)((int)puVar44 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar24;
    bVar30 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar11;
    if (CARRY1(bVar30,bVar11)) {
      *pbVar24 = *pbVar24 + bVar11;
      pbVar25 = (byte *)CONCAT31(uVar27,bVar11 | pbVar24[0x400005a]);
      if ('\0' < (char)(bVar11 | pbVar24[0x400005a])) {
code_r0x004038f6:
        bVar30 = (byte)pbVar25;
        *pbVar25 = *pbVar25 + bVar30;
        uVar27 = (undefined3)((uint)pbVar25 >> 8);
        cVar8 = ((bVar30 + 0x28) - *(char *)CONCAT31(uVar27,bVar30 + 0x28)) - (0xd7 < bVar30);
        pbVar25 = (byte *)CONCAT31(uVar27,cVar8);
        bVar30 = *pbVar60;
        bVar11 = (byte)((uint)pbVar23 >> 8);
        *pbVar60 = *pbVar60 + bVar11;
        if (CARRY1(bVar30,bVar11)) {
          *pbVar25 = *pbVar25 + cVar8;
          pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                     CONCAT11(bVar11 | *pbVar25,(char)pbVar23));
          *pbVar63 = *pbVar63 + cVar8;
          goto code_r0x00403908;
        }
        pbVar24 = pbVar25 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar27 = (undefined3)((uint)pbVar25 >> 8);
      bVar11 = (char)pbVar25 + 0x6f;
      bVar30 = *(byte *)CONCAT31(uVar27,bVar11);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      pbVar25 = (byte *)CONCAT31(uVar27,(bVar11 & bVar30) + *pbVar63);
      *pbVar23 = *pbVar23 - (char)((uint)pbVar15 >> 8);
      puVar51 = puVar46;
      goto code_r0x0040395a;
    }
    puVar43 = (undefined4 *)((int)puVar44 + -8);
    puVar44 = (undefined4 *)((int)puVar44 + -8);
    *puVar43 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar16 = (char)*piVar16 + bVar30;
  puVar61 = puVar65;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar25 = *pbVar25 + cVar9;
  bVar30 = cVar9 + 2;
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar30);
code_r0x00403912:
  bVar68 = (POPCOUNT(bVar30) & 1U) == 0;
  puVar51 = puVar39;
  if (!bVar68) goto code_r0x00403967;
  *pbVar25 = *pbVar25 + (char)pbVar25;
code_r0x00403916:
  bVar14 = (char)pbVar25 + 0x6f;
  pbVar24 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar25 >> 8),bVar14);
  bVar30 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar14;
  bVar11 = *pbVar24;
  bVar12 = *pbVar24;
  puVar51 = (undefined4 *)((int)puVar39 + -4);
  *(undefined2 *)((int)puVar39 + -4) = in_ES;
  if (bVar12 == 0 || SCARRY1(bVar30,bVar14) != (char)bVar11 < '\0') goto code_r0x00403979;
  *pbVar24 = *pbVar24 + bVar14;
  pbVar24 = (byte *)CONCAT31((int3)(char)((uint)pbVar25 >> 8),(char)pbVar25 + -100);
  *(byte **)(pbVar63 + (int)puVar64 * 8) =
       pbVar15 + (uint)(0xd2 < bVar14) + *(int *)(pbVar63 + (int)puVar64 * 8);
  puVar45 = (undefined2 *)((int)puVar39 + -8);
  puVar39 = (undefined4 *)((int)puVar39 + -8);
  *puVar45 = in_ES;
code_r0x00403926:
  puVar44 = puVar39 + 1;
  puVar51 = puVar39 + 1;
  puVar46 = puVar39 + 1;
  *(undefined4 *)pbVar24 = *puVar39;
  bVar30 = *pbVar63;
  bVar11 = (byte)pbVar24;
  *pbVar63 = *pbVar63 + bVar11;
  if (CARRY1(bVar30,bVar11)) {
    *pbVar24 = *pbVar24 + bVar11;
    uVar27 = (undefined3)((uint)pbVar24 >> 8);
    bVar11 = bVar11 | pbVar24[0x400005b];
    pbVar25 = (byte *)CONCAT31(uVar27,bVar11);
    pbVar24 = pbVar63;
    if ((char)bVar11 < '\x01') goto code_r0x00403991;
    *pbVar25 = *pbVar25 + bVar11;
    cVar8 = bVar11 + 0x28;
    pbVar25 = (byte *)CONCAT31(uVar27,cVar8);
    *(byte **)pbVar25 = pbVar25 + (uint)(0xd7 < bVar11) + *(int *)pbVar25;
    bVar30 = *pbVar60;
    bVar11 = (byte)((uint)pbVar23 >> 8);
    *pbVar60 = *pbVar60 + bVar11;
    if (CARRY1(bVar30,bVar11)) {
      *pbVar25 = *pbVar25 + cVar8;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(bVar11 | *pbVar25,(char)pbVar23));
      *pbVar63 = *pbVar63 + cVar8;
      pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                 CONCAT11((char)((uint)pbVar60 >> 8) + pbVar60[0x55],(char)pbVar60))
      ;
      *pbVar25 = *pbVar25 + cVar8;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar39 = in_ES;
code_r0x00403962:
    puVar51 = (undefined4 *)((int)puVar39 + -4);
    *(undefined2 *)((int)puVar39 + -4) = uVar66;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar25 = *pbVar25 + (char)pbVar25;
  puVar47 = (undefined2 *)((int)puVar51 + -4);
  puVar51 = (undefined4 *)((int)puVar51 + -4);
  *puVar47 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar23;
  pbVar60 = (byte *)((uint)pbVar60 | (uint)pbVar63);
  cVar8 = (char)pbVar25 + '\x02';
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
  bVar68 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar68) goto code_r0x004039be;
  *pbVar25 = *pbVar25 + (char)pbVar25;
  uVar27 = (undefined3)((uint)pbVar25 >> 8);
  bVar30 = (char)pbVar25 + 0x6f;
  bVar30 = bVar30 & *(byte *)CONCAT31(uVar27,bVar30);
  pbVar24 = (byte *)CONCAT31(uVar27,bVar30);
  *pbVar15 = *pbVar15 + (char)pbVar23;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar64);
  *(byte *)(puVar64 + 0x5c18000) = (byte)puVar64[0x5c18000] - bVar30;
code_r0x00403979:
  do {
    bVar30 = (char)pbVar24 - (byte)*puVar64;
    bVar68 = bVar30 < *pbVar23;
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar30 - *pbVar23);
    do {
      cVar8 = (char)pbVar25;
      *pbVar25 = *pbVar25 + cVar8 + bVar68;
      *pbVar25 = *pbVar25 + cVar8;
      *pbVar23 = *pbVar23 + (char)pbVar15;
      pbVar23[0x101c00aa] = pbVar23[0x101c00aa] + (char)pbVar60;
      *pbVar25 = *pbVar25 + cVar8;
      *(byte **)pbVar63 = pbVar60 + *(int *)pbVar63;
      bVar30 = (byte)((uint)pbVar23 >> 8);
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11(bVar30 + *pbVar25,(char)pbVar23));
      pbVar25 = pbVar25 + (uint)CARRY1(bVar30,*pbVar25) + *(int *)pbVar25;
      pbVar24 = pbVar63;
code_r0x00403991:
      cVar8 = (char)pbVar23;
      *pbVar15 = *pbVar15 + cVar8;
      cVar9 = (char)pbVar60 - pbVar24[2];
      pbVar60 = (byte *)CONCAT31((int3)((uint)pbVar60 >> 8),cVar9);
      pbVar63 = pbVar24;
      if ((POPCOUNT(cVar9) & 1U) != 0) goto code_r0x0040395a;
      *pbVar25 = *pbVar25 + (byte)pbVar25;
      uVar28 = (uint3)((uint)pbVar25 >> 8);
      bVar30 = (byte)pbVar25 | *pbVar60;
      piVar16 = (int *)CONCAT31(uVar28,bVar30);
      bVar11 = (byte)((uint)pbVar23 >> 8);
      bVar12 = (byte)pbVar15;
      if (bVar30 == 0) {
        *(char *)piVar16 = (char)*piVar16;
        puVar51 = (undefined4 *)((int)puVar51 + -*(int *)(pbVar59 + 0x1b000007));
        pbVar63 = pbVar24 + (uint)bVar69 * -8 + 4;
        out(*(undefined4 *)pbVar24,(short)pbVar15);
        pbVar25 = (byte *)((uint)uVar28 << 8);
        *pbVar15 = *pbVar15 + cVar8;
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar12 - *pbVar60);
        *pbVar60 = *pbVar60;
        *pbVar15 = *pbVar15 + bVar11;
        *pbVar25 = *pbVar25;
        *pbVar60 = *pbVar60 + cVar9;
        *pbVar25 = *pbVar25;
        *(byte **)(pbVar60 + -0x3d) = pbVar63 + *(int *)(pbVar60 + -0x3d);
        break;
      }
      pbVar59 = pbVar59 + -puVar64[9];
      *(byte *)piVar16 = (char)*piVar16 + bVar30;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar11 | *pbVar15,cVar8));
      pbVar63 = pbVar24 + *piVar16;
      pcVar17 = (char *)((int)piVar16 + *piVar16);
      bVar11 = (char)pcVar17 - *pcVar17;
      pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar11);
      bVar30 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar11;
      pbVar25 = pbVar25 + (-(uint)CARRY1(bVar30,bVar11) - *(int *)pbVar25);
      bVar68 = CARRY1(*pbVar23,bVar12);
      *pbVar23 = *pbVar23 + bVar12;
    } while (!bVar68);
    *pbVar25 = *pbVar25 + (char)pbVar25;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | *pbVar15);
code_r0x004039be:
    puVar39 = (undefined4 *)((int)puVar51 + -4);
    puVar48 = (undefined1 *)((int)puVar51 + -4);
    *(undefined2 *)((int)puVar51 + -4) = in_ES;
    puVar64 = (uint *)((int)puVar64 + *(int *)(pbVar59 + -0x3c));
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    uVar27 = (undefined3)((uint)pbVar25 >> 8);
    bVar30 = (byte)pbVar25 | *pbVar15;
    pcVar17 = (char *)CONCAT31(uVar27,bVar30);
    if ((POPCOUNT(bVar30) & 1U) != 0) {
      cVar8 = *pcVar17;
      *pcVar17 = *pcVar17 + bVar30;
      cVar9 = *pcVar17;
      puVar33 = (undefined1 *)((int)puVar51 + -4);
      if (!SCARRY1(cVar8,bVar30)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar39 = (undefined4 *)puVar33;
      cVar8 = (char)pcVar17;
      *pcVar17 = *pcVar17 + cVar8;
      uVar27 = (undefined3)((uint)pcVar17 >> 8);
      bVar30 = cVar8 + 2;
      if ((POPCOUNT(bVar30) & 1U) != 0) {
        pcVar17 = (char *)CONCAT31(uVar27,bVar30 + *pbVar15);
        pbVar25 = pbVar63;
        if ((POPCOUNT(bVar30 + *pbVar15) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar63 + (int)puVar64 * 8) =
             pbVar15 + (uint)(0xd2 < (byte)pcVar17) + *(int *)(pbVar63 + (int)puVar64 * 8);
        puVar50 = (undefined2 *)((int)puVar39 + -4);
        puVar39 = (undefined4 *)((int)puVar39 + -4);
        *puVar50 = in_ES;
        pbVar24 = pbVar59;
        pbVar26 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 + 0x2d);
code_r0x00403ad8:
        pbVar59 = pbVar26;
        bVar30 = *pbVar24;
        bVar11 = (byte)pbVar24;
        *pbVar24 = *pbVar24 + bVar11;
        puVar51 = (undefined4 *)((int)puVar39 + -4);
        *(undefined2 *)((int)puVar39 + -4) = in_ES;
        puVar33 = (undefined1 *)((int)puVar39 + -4);
        if (CARRY1(bVar30,bVar11)) {
          *pbVar24 = *pbVar24 + bVar11;
          bVar11 = bVar11 | pbVar24[0x400005d];
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar11);
          pbVar25 = pbVar63;
          if ((char)bVar11 < '\x01') {
            *pbVar24 = *pbVar24 + bVar11;
            pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar15,(char)pbVar23)
                                      );
            pbVar25 = *(byte **)((int)puVar39 + -4);
            pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                       CONCAT11((char)((uint)pbVar60 >> 8) + pbVar60[-0x39],
                                                (char)pbVar60));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar24 = *pbVar24 + (char)pbVar24;
          cVar8 = (char)pbVar24 + '(';
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar8);
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          bVar30 = *pbVar60;
          bVar11 = (byte)((uint)pbVar23 >> 8);
          *pbVar60 = *pbVar60 + bVar11;
          pbVar63 = pbVar25;
          if (!CARRY1(bVar30,bVar11)) {
            puVar39 = (undefined4 *)((int)puVar51 + -4);
            *(undefined2 *)((int)puVar51 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar24 = *pbVar24 + cVar8;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
      piVar16 = (int *)CONCAT31(uVar27,cVar8 + '*');
      *piVar16 = (*piVar16 - (int)piVar16) - (uint)(0xd7 < bVar30);
      bVar30 = *pbVar15;
      bVar14 = (byte)pbVar23;
      *pbVar15 = *pbVar15 + bVar14;
      out(*(undefined4 *)pbVar63,(short)pbVar15);
      bVar12 = ((cVar8 + '*') - (char)*piVar16) - CARRY1(bVar30,bVar14);
      pbVar25 = (byte *)CONCAT31(uVar27,bVar12);
      *pbVar15 = *pbVar15 + bVar14;
      uVar67 = (undefined2)((uint)pbVar60 >> 0x10);
      uVar34 = SUB41(pbVar60,0);
      cVar8 = (char)((uint)pbVar60 >> 8) - pbVar63[(uint)bVar69 * -8 + 0x1f];
      pbVar60 = (byte *)CONCAT22(uVar67,CONCAT11(cVar8,uVar34));
      *pbVar25 = *pbVar25 + bVar12;
      bVar11 = *pbVar15;
      bVar30 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar12;
      pbVar63 = pbVar63 + ((((uint)bVar69 * -8 + 4) - *(int *)pbVar25) - (uint)CARRY1(bVar30,bVar12)
                          );
      pbVar25 = (byte *)CONCAT31(uVar27,bVar12);
      pbVar23 = (byte *)(CONCAT22((short)((uint)pbVar23 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar23 >> 8) | bVar11,bVar14)) + -1);
      bVar30 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar12;
      bVar30 = (bVar12 - *pbVar25) - CARRY1(bVar30,bVar12);
      *pbVar23 = *pbVar23 + (char)pbVar15;
      bVar68 = CARRY1(bVar30,*pbVar15);
      bVar30 = bVar30 + *pbVar15;
      pbVar25 = (byte *)CONCAT31(uVar27,bVar30);
      if ((POPCOUNT(bVar30) & 1U) == 0) {
        *pbVar25 = *pbVar25 + bVar30;
        cVar9 = (bVar30 + 0x6f) - (0x90 < bVar30);
        pbVar24 = (byte *)CONCAT31(uVar27,cVar9);
        bVar30 = *pbVar15;
        *pbVar15 = *pbVar15 + (char)pbVar23;
        if (SCARRY1(bVar30,(char)pbVar23) == (char)*pbVar15 < '\0') {
code_r0x00403aaf:
          cVar8 = (char)pbVar24 + '(';
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar8);
          *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
          bVar30 = *pbVar60;
          bVar11 = (byte)((uint)pbVar23 >> 8);
          *pbVar60 = *pbVar60 + bVar11;
          pbVar26 = pbVar59;
          if (!CARRY1(bVar30,bVar11)) goto code_r0x00403ad8;
          *pbVar24 = *pbVar24 + cVar8;
          pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                     CONCAT11(bVar11 | *pbVar60,(char)pbVar23));
          if ((POPCOUNT(*pbVar15 - cVar8) & 1U) != 0) {
            *pbVar63 = *pbVar63 + cVar8;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar24 = *pbVar24 + cVar9;
          pcVar17 = (char *)CONCAT31(uVar27,cVar9 + '\x02');
          bVar11 = cVar8 + pbVar60[0x52];
          pbVar60 = (byte *)CONCAT22(uVar67,CONCAT11(bVar11,uVar34));
          *pcVar17 = *pcVar17 + cVar9 + '\x02';
          bVar30 = cVar9 + 4;
          pbVar24 = (byte *)CONCAT31(uVar27,bVar30);
          if ((POPCOUNT(bVar30) & 1U) == 0) {
            *pbVar24 = *pbVar24 + bVar30;
            cVar8 = (cVar9 + 's') - (0x90 < bVar30);
            pcVar17 = (char *)CONCAT31(uVar27,cVar8);
            bVar30 = (byte)((uint)pbVar23 >> 8);
            bVar68 = CARRY1(*pbVar60,bVar30);
            *pbVar60 = *pbVar60 + bVar30;
            pbVar25 = pbVar63;
            if (bVar68) {
              *pcVar17 = *pcVar17 + cVar8;
              pbVar60 = (byte *)CONCAT22(uVar67,CONCAT11(bVar11 | pbVar59[0x5c],uVar34));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar64 = (uint *)((int)puVar64 - *(int *)pbVar24);
          pbVar60 = (byte *)CONCAT22(uVar67,CONCAT11(bVar11 + pbVar60[0x52],uVar34));
        }
        *pbVar24 = *pbVar24 + (char)pbVar24;
        cVar8 = (char)pbVar24 + '\x02';
        pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar8);
        bVar68 = (POPCOUNT(cVar8) & 1U) == 0;
        if (!bVar68) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar30 = (byte)pbVar25;
        *pbVar25 = *pbVar25 + bVar30;
        cVar8 = (bVar30 + 0x6f) - (0x90 < bVar30);
        pcVar17 = (char *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
        bVar30 = *pbVar60;
        cVar9 = (char)((uint)pbVar23 >> 8);
        *pbVar60 = *pbVar60 + cVar9;
        if (*pbVar60 == 0 || SCARRY1(bVar30,cVar9) != (char)*pbVar60 < '\0') goto code_r0x00403b2c;
        *pcVar17 = *pcVar17 + cVar8;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar68) {
        pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                   CONCAT11((char)((uint)pbVar60 >> 8) + pbVar60[0x53],(char)pbVar60
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar25 = *pbVar25 + (byte)pbVar25;
      bVar30 = (byte)pbVar25 | pbVar25[0x400005e];
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar30);
      if ('\0' < (char)bVar30) {
        *pbVar24 = *pbVar24 + bVar30;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar17 = *pcVar17 + bVar30;
    *pbVar63 = *pbVar63 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar27,bVar30 + 6);
    pbVar24 = (byte *)uVar3;
    bVar30 = *pbVar15;
    bVar11 = (byte)pbVar23;
    *pbVar15 = *pbVar15 + bVar11;
    if (CARRY1(bVar30,bVar11)) {
      *pbVar24 = *pbVar24 + (char)uVar3;
      bVar12 = (byte)((uint)pbVar23 >> 8) | *pbVar24;
      uVar67 = CONCAT11(bVar12,bVar11);
      pbVar24 = pbVar24 + -*(int *)pbVar24;
      bVar30 = *pbVar60;
      *pbVar60 = *pbVar60 + bVar12;
      if (CARRY1(bVar30,bVar12)) {
        cVar9 = (char)pbVar24;
        *pbVar24 = *pbVar24 + cVar9;
        bVar30 = *pbVar15;
        pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                   CONCAT11((char)((uint)pbVar15 >> 8) - pbVar60[-0x3a],
                                            (char)pbVar15));
        *pbVar24 = *pbVar24 + cVar9;
        uVar38 = (undefined2)((uint)pbVar60 >> 0x10);
        bVar37 = (byte)((uint)pbVar60 >> 8) | pbVar15[0x32];
        pcVar17 = (char *)CONCAT22(uVar38,CONCAT11(bVar37,(char)pbVar60));
        cVar8 = *pcVar17;
        puVar48 = (undefined1 *)((int)puVar51 + -8);
        *(undefined2 *)((int)puVar51 + -8) = in_CS;
        cVar8 = cVar9 + cVar8 + '-';
        pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar8);
        *pbVar24 = *pbVar24;
        *(undefined2 *)((int)puVar51 + -0xc) = in_ES;
        bVar14 = *pbVar15;
        uVar66 = *(undefined2 *)((int)puVar51 + -0xc);
        cVar9 = (char)pbVar60 - *pbVar63;
        bVar13 = *(byte *)((int)puVar64 + 0x17);
        *pbVar24 = *pbVar24 + cVar8;
        uVar67 = CONCAT11((bVar12 | bVar30) + bVar13 | *pbVar15,bVar11 - bVar14);
        pbVar60 = (byte *)CONCAT22(uVar38,CONCAT11(bVar37 + *(char *)(CONCAT31((int3)((uint)pcVar17
                                                                                     >> 8),cVar9) +
                                                                     0x4e),cVar9));
        *pbVar24 = *pbVar24 + cVar8;
      }
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),uVar67);
      bVar30 = (byte)pbVar24;
      uVar27 = (undefined3)((uint)pbVar24 >> 8);
      pcVar17 = (char *)CONCAT31(uVar27,bVar30 + 0x28);
      *pcVar17 = (*pcVar17 - (bVar30 + 0x28)) - (0xd7 < bVar30);
      *pbVar15 = *pbVar15 + (char)uVar67;
      bVar11 = bVar30 + 0x1b;
      pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                 CONCAT11((char)((uint)pbVar60 >> 8) + pbVar60[0x4f],(char)pbVar60))
      ;
      *(char *)CONCAT31(uVar27,bVar11) = *(char *)CONCAT31(uVar27,bVar11) + bVar11;
      pcVar22 = (char *)CONCAT31(uVar27,bVar30 + 0x43);
      *pcVar22 = (*pcVar22 - (bVar30 + 0x43)) - (0xd7 < bVar11);
      *pbVar15 = *pbVar15 + (char)uVar67;
      pcVar17 = pcVar22 + -0x6b721c;
      pcVar22 = pcVar22 + -0x6b721a;
      *pcVar22 = *pcVar22 + (char)((uint)pbVar15 >> 8);
      cVar9 = *pcVar22;
      puVar39 = (undefined4 *)puVar48;
code_r0x00403a22:
      puVar33 = (undefined1 *)puVar39;
      if ((POPCOUNT(cVar9) & 1U) == 0) goto code_r0x00403a24;
      bVar30 = *pbVar15;
      *pbVar15 = *pbVar15 + (char)pbVar23;
      if (SCARRY1(bVar30,(char)pbVar23) == (char)*pbVar15 < '\0') {
        pbVar24 = pbVar59;
        pbVar26 = (byte *)(pcVar17 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar17 = *pcVar17 + (char)pcVar17;
      pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + '\x02');
      pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                 CONCAT11((char)((uint)pbVar60 >> 8) + pbVar60[0x54],(char)pbVar60))
      ;
      pbVar25 = pbVar63;
code_r0x00403a7d:
      cVar8 = (char)pcVar17;
      *pcVar17 = *pcVar17 + cVar8;
      uVar27 = (undefined3)((uint)pcVar17 >> 8);
      cVar9 = cVar8 + '-';
      pbVar26 = (byte *)CONCAT31(uVar27,cVar9);
      pbVar24 = pbVar59;
      pbVar63 = pbVar25;
      if ((POPCOUNT(cVar9 - *pbVar15) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar26 = *pbVar26 + cVar9;
      bVar30 = cVar8 + 0x2f;
      if ((POPCOUNT(bVar30) & 1U) != 0) {
        bVar30 = *pbVar15;
        *pbVar15 = *pbVar15 + (byte)pbVar23;
        *pbVar59 = *pbVar59 - CARRY1(bVar30,(byte)pbVar23);
        pbVar24 = (byte *)CONCAT31(uVar27,cVar8 + -0x53);
        pbVar59 = (byte *)*puVar39;
        puVar51 = puVar39 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
      bVar68 = 0x90 < bVar30;
      pcVar17 = (char *)CONCAT31(uVar27,cVar8 + -0x62);
code_r0x00403a8f:
      uVar27 = (undefined3)((uint)pcVar17 >> 8);
      bVar11 = (char)pcVar17 - bVar68;
      pbVar24 = (byte *)CONCAT31(uVar27,bVar11);
      bVar30 = *pbVar60;
      cVar8 = (char)((uint)pbVar23 >> 8);
      *pbVar60 = *pbVar60 + cVar8;
      puVar51 = puVar39;
      pbVar63 = pbVar25;
      if (*pbVar60 != 0 && SCARRY1(bVar30,cVar8) == (char)*pbVar60 < '\0') {
        *pbVar24 = *pbVar24 + bVar11;
        pbVar63 = (byte *)CONCAT31(uVar27,bVar11 + 0x2d);
        *(byte **)(pbVar25 + (int)puVar64 * 8) =
             pbVar15 + (uint)(0xd2 < bVar11) + *(int *)(pbVar25 + (int)puVar64 * 8);
        *(undefined2 *)((int)puVar39 + -4) = in_ES;
        bVar68 = CARRY1(*pbVar25,(byte)pbVar25);
        *pbVar25 = *pbVar25 + (byte)pbVar25;
        puVar49 = (undefined2 *)((int)puVar39 + -8);
        puVar39 = (undefined4 *)((int)puVar39 + -8);
        *puVar49 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar24,(char)pbVar23));
      *pbVar63 = *pbVar63 + (char)pbVar24;
      puVar33 = (undefined1 *)puVar51;
code_r0x00403afc:
      puVar39 = (undefined4 *)puVar33;
      pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                 CONCAT11((char)((uint)pbVar60 >> 8) + pbVar60[0x55],(char)pbVar60))
      ;
      *pbVar24 = *pbVar24 + (char)pbVar24;
      uVar27 = (undefined3)((uint)pbVar24 >> 8);
      bVar11 = (char)pbVar24 + 0x6f;
      bVar30 = *(byte *)CONCAT31(uVar27,bVar11);
      *pbVar15 = *pbVar15 + (char)pbVar23;
      pbVar24 = (byte *)CONCAT31(uVar27,(bVar11 & bVar30) + *pbVar63);
      *pbVar23 = *pbVar23 - (char)((uint)pbVar15 >> 8);
      break;
    }
    uVar66 = *(undefined2 *)((int)puVar51 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar24 = *pbVar24 + (char)pbVar24;
  puVar52 = (undefined2 *)((int)puVar39 + -4);
  puVar39 = (undefined4 *)((int)puVar39 + -4);
  *puVar52 = in_ES;
  pbVar15[0x16060000] = pbVar15[0x16060000] - (char)pbVar23;
  pbVar60 = (byte *)((uint)pbVar60 | (uint)pbVar63);
  cVar8 = (char)pbVar24 + '\x02';
  pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar8);
  bVar68 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
  bVar30 = (byte)pbVar25;
  uVar27 = (undefined3)((uint)pbVar25 >> 8);
  if (!bVar68) {
    *pbVar15 = *pbVar15 + (char)pbVar23;
    pbVar24 = (byte *)CONCAT31(uVar27,bVar30 | *pbVar63);
code_r0x00403b73:
    pbVar25 = (byte *)((int)puVar64 + *(int *)(pbVar59 + -0x37));
    *pbVar24 = *pbVar24 + (byte)pbVar24;
    uVar27 = (undefined3)((uint)pbVar24 >> 8);
    bVar30 = (byte)pbVar24 | *pbVar15;
    pcVar17 = (char *)CONCAT31(uVar27,bVar30);
    uVar71 = CONCAT44(pbVar15,pcVar17);
    if ((POPCOUNT(bVar30) & 1U) == 0) {
      *pcVar17 = *pcVar17 + bVar30;
      *pbVar63 = *pbVar63 + 1;
      return (byte *)CONCAT31(uVar27,bVar30 + 6);
    }
    bVar30 = *pbVar63;
    *pbVar63 = *pbVar63 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar30,'\x01')) {
      uVar71 = (*pcVar2)();
      pbVar23 = extraout_ECX_00;
    }
    pbVar15 = (byte *)uVar71;
    *pbVar15 = *pbVar15 + (char)uVar71;
    cVar9 = (char)((ulonglong)uVar71 >> 0x20);
    puVar64 = (uint *)CONCAT22((short)((ulonglong)uVar71 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar71 >> 0x28) | pbVar60[0x2f],cVar9));
    *pbVar15 = *pbVar15 + (char)uVar71;
    cVar8 = (char)pbVar23;
    bVar12 = (byte)((uint)pbVar23 >> 8) | *pbVar15;
    pbVar15 = pbVar15 + *(int *)pbVar15;
    bVar30 = *pbVar60;
    *pbVar60 = *pbVar60 + bVar12;
    bVar11 = (byte)pbVar15;
    if (CARRY1(bVar30,bVar12)) {
      *pbVar15 = *pbVar15 + bVar11;
      bVar12 = bVar12 | (byte)*puVar64;
      *pbVar60 = *pbVar60 - cVar9;
      *pbVar15 = *pbVar15 + bVar11;
      uVar27 = (undefined3)((uint)pbVar15 >> 8);
      bVar11 = bVar11 | (byte)*puVar64;
      puVar32 = (uint *)CONCAT31(uVar27,bVar11);
      bVar68 = CARRY4((uint)pbVar59,*puVar32);
      bVar70 = SCARRY4((int)pbVar59,*puVar32);
      pbVar59 = pbVar59 + *puVar32;
      *(uint *)((int)puVar39 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar70 * 0x800 | (uint)bVar69 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar59 < 0) * 0x80 |
           (uint)(pbVar59 == (byte *)0x0) * 0x40 | (uint)(bVar10 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar59 & 0xff) & 1U) == 0) * 4 | (uint)bVar68 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar32 = (char)*puVar32 + bVar11;
      *(undefined2 *)((int)puVar39 + -8) = in_ES;
      cVar9 = (char)pbVar60 - *pbVar63;
      pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                 CONCAT11((char)((uint)pbVar60 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar60 >> 8),cVar9) +
                                                   0x5f),cVar9));
      *(byte *)puVar32 = (char)*puVar32 + bVar11;
      bVar30 = bVar11 + 0x2a & (byte)*puVar64;
      pbVar25 = pbVar25 + *(int *)(pbVar59 + 0x5f);
      *(char *)CONCAT31(uVar27,bVar30) = *(char *)CONCAT31(uVar27,bVar30) + bVar30;
      pbVar15 = (byte *)CONCAT31(uVar27,bVar30 + 0x2a);
      *(byte *)puVar64 = (byte)*puVar64 + 0x28;
      *pbVar15 = *pbVar15 + bVar30 + 0x2a;
      puVar55 = (undefined2 *)((int)puVar39 + -0xc);
      puVar39 = (undefined4 *)((int)puVar39 + -0xc);
      *puVar55 = in_ES;
    }
    else {
      *pbVar63 = *pbVar63 + bVar11;
    }
    pcVar17 = (char *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar12,cVar8));
    *pbVar59 = *pbVar59 - bVar12;
    *(byte *)puVar64 = (byte)*puVar64 + cVar8;
    bVar30 = (byte)pbVar15 - 0xb;
    pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar30);
    if (10 < (byte)pbVar15) {
      *pbVar23 = *pbVar23 | bVar30;
      return pbVar23;
    }
    *(byte *)puVar64 = (byte)*puVar64 + cVar8;
    do {
      *(undefined2 *)((int)puVar39 + -4) = in_ES;
      bVar30 = pbVar60[-0x23];
      bVar11 = (byte)pbVar23;
      *pbVar23 = *pbVar23 + bVar11;
      bVar10 = pbVar59[-0x22];
      *pbVar23 = *pbVar23 + bVar11;
      uVar27 = (undefined3)((uint)pbVar23 >> 8);
      bVar11 = bVar11 | *pbVar63;
      pbVar15 = (byte *)CONCAT31(uVar27,bVar11);
      cVar9 = (char)pbVar60 - *pbVar63;
      pbVar60 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar60 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar60 >> 8) + bVar30 |
                                                          bVar10,(char)pbVar60)) >> 8),cVar9);
      cVar8 = (char)pcVar17;
      pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                 CONCAT11((char)((uint)pcVar17 >> 8) + *pbVar15,cVar8));
      *(byte *)puVar64 = (byte)*puVar64 + cVar8;
      bVar10 = bVar11 - *pbVar15;
      pbVar23 = (byte *)CONCAT31(uVar27,bVar10);
      pbVar63 = pbVar63 + (-(uint)(bVar11 < *pbVar15) - *(int *)pbVar23);
      in_ES = *(undefined2 *)((int)puVar39 + -4);
      puVar64 = (uint *)CONCAT31((int3)((uint)puVar64 >> 8),(char)puVar64 * '\x02');
      *(byte **)pbVar23 = pbVar23 + *(int *)pbVar23;
      *pbVar25 = *pbVar25 + cVar9;
      bVar30 = *pbVar23;
      *pbVar23 = *pbVar23 + bVar10;
      *puVar64 = (uint)(pbVar23 + (uint)CARRY1(bVar30,bVar10) + *puVar64);
    } while ((POPCOUNT(*puVar64 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar23 = *pbVar23 + (char)pbVar23;
    pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),(byte)pcVar17 | pbVar23[(int)pcVar17]);
    puVar57 = (undefined2 *)((int)puVar39 + -4);
    *(undefined2 *)((int)puVar39 + -4) = uVar66;
    bVar68 = false;
    pbVar23 = (byte *)((uint)pbVar23 & 0xffffff00);
    do {
      pbVar25 = pbVar25 + (-(uint)bVar68 - *(int *)pbVar60);
      pcVar22 = (char *)CONCAT31((int3)((uint)pbVar23 >> 8),*pcVar17);
      *pcVar22 = *pcVar22 + *pcVar17;
      pbVar23 = (byte *)CONCAT31((int3)((uint)(pcVar22 +
                                              (pbVar63[0x2000001] < (byte)((uint)pcVar17 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar22 +
                                        (pbVar63[0x2000001] < (byte)((uint)pcVar17 >> 8)) + 0xda7d)
                                 | (byte)*puVar64) + 0x7d);
      pcVar17 = pcVar17 + -1;
      *(byte *)puVar64 = (byte)*puVar64 + (char)pcVar17;
      while( true ) {
        uVar31 = (undefined3)((uint)puVar64 >> 8);
        cVar8 = (char)puVar64 + *(char *)((int)pbVar25 * 2 + 0xa0000e1);
        puVar64 = (uint *)CONCAT31(uVar31,cVar8);
        bVar68 = CARRY1((byte)pbVar23,(byte)*puVar64);
        uVar27 = (undefined3)((uint)pbVar23 >> 8);
        bVar30 = (byte)pbVar23 + (byte)*puVar64;
        pbVar23 = (byte *)CONCAT31(uVar27,bVar30);
        if ((POPCOUNT(bVar30) & 1U) != 0) break;
        *pbVar23 = *pbVar23 + bVar30;
        cVar9 = (char)pcVar17;
        pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar17 >> 8) | pbVar25[-0x65],cVar9));
        bVar10 = *pbVar23;
        *pbVar23 = *pbVar23 + bVar30;
        *(undefined2 *)((int)puVar57 + -4) = in_ES;
        if (CARRY1(bVar10,bVar30)) {
          *pbVar23 = *pbVar23 + bVar30;
          pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar60 >> 8) | pbVar59[-0x1d],
                                              (char)pbVar60));
          *pbVar23 = *pbVar23 + bVar30;
          bVar68 = false;
          bVar30 = bVar30 | (byte)*puVar64;
          pcVar22 = (char *)CONCAT31(uVar27,bVar30);
          uVar66 = *(undefined2 *)((int)puVar57 + -4);
          puVar39 = (undefined4 *)puVar57;
          while( true ) {
            bVar10 = (byte)pcVar22;
            uVar27 = (undefined3)((uint)pcVar22 >> 8);
            if (bVar68 == (char)bVar30 < '\0') break;
            *pcVar22 = *pcVar22 + bVar10;
            bVar10 = bVar10 | (byte)*puVar64;
            puVar32 = (uint *)CONCAT31(uVar27,bVar10);
            *pbVar25 = *pbVar25 << 1 | (char)*pbVar25 < '\0';
            uVar21 = *puVar32;
            *(byte *)puVar32 = (byte)*puVar32 + bVar10;
            pbVar59 = pbVar59 + (-(uint)CARRY1((byte)uVar21,bVar10) - *puVar32);
            *puVar32 = *puVar32 << 1 | (uint)((int)*puVar32 < 0);
            while( true ) {
              uVar21 = *puVar64;
              *(byte *)puVar64 = (byte)*puVar64 + (byte)pcVar17;
              uVar67 = *(undefined2 *)puVar39;
              cVar8 = (char)puVar32 + 'o' + CARRY1((byte)uVar21,(byte)pcVar17);
              pcVar22 = (char *)CONCAT31((int3)((uint)puVar32 >> 8),cVar8);
              pcVar17 = (char *)0x20a0000;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *pcVar22 = *pcVar22 + cVar8;
              bVar30 = bRamfe140212;
              pcVar17 = (char *)0x0;
              *(undefined2 *)puVar39 = in_ES;
              uVar27 = (undefined3)((uint)(pcVar22 + -0x732b0000) >> 8);
              bVar10 = in(0);
              puVar32 = (uint *)CONCAT31(uVar27,bVar10);
              uVar21 = *puVar64;
              *(byte *)puVar64 = (byte)*puVar64;
              if (SCARRY1((byte)uVar21,'\0') != (char)(byte)*puVar64 < '\0') {
                *(byte *)puVar32 = (byte)*puVar32 + bVar10;
                bVar10 = bVar10 | (byte)*puVar64;
                puVar32 = (uint *)CONCAT31(uVar27,bVar10);
                if ((POPCOUNT(bVar10) & 1U) == 0) {
                  *(byte *)puVar32 = (byte)*puVar32 + bVar10;
                  pcVar17 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar30 | (byte)*puVar32) << 8);
                  puVar57 = (undefined2 *)((int)puVar39 + -4);
                  *(undefined2 *)((int)puVar39 + -4) = uVar67;
                  *(byte *)puVar32 = (byte)*puVar32 + bVar10;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar32 = (byte)*puVar32 + bVar10;
                puVar32 = (uint *)CONCAT31(uVar27,bVar10 | (byte)*puVar64);
              }
            }
            *(byte *)puVar64 = (byte)*puVar64;
            bVar68 = SCARRY1((char)puVar64,*pbVar25);
            bVar30 = (char)puVar64 + *pbVar25;
            puVar64 = (uint *)CONCAT31((int3)((uint)puVar64 >> 8),bVar30);
            puVar39 = (undefined4 *)((int)puVar39 + 4);
          }
          if (bVar68 == (char)bVar30 < '\0') {
            *(byte *)puVar64 = (byte)*puVar64 + (char)pcVar17;
            pbVar23 = (byte *)((uint)pcVar22 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar22 = *pcVar22 + bVar10;
          pbVar23 = (byte *)CONCAT31(uVar27,(bVar10 | (byte)*puVar64) + 0x7d);
          pcVar17 = pcVar17 + -1;
          *(byte *)puVar64 = (byte)*puVar64 + (char)pcVar17;
          puVar57 = (undefined2 *)puVar39;
        }
        else {
          *(byte *)puVar64 = (byte)*puVar64 + cVar9;
          puVar64 = (uint *)CONCAT31(uVar31,cVar8 + *(char *)((int)pbVar25 * 2 + 0xa0000e0));
          puVar57 = (undefined2 *)((int)puVar57 + -4);
        }
      }
    } while( true );
  }
  *pbVar25 = *pbVar25 + bVar30;
  bVar30 = bVar30 + 0x6f & *(byte *)CONCAT31(uVar27,bVar30 + 0x6f);
  *pbVar15 = *pbVar15 + (char)pbVar23;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(char)pbVar15 + (byte)*puVar64);
  *(byte *)(puVar64 + 0x5c18000) = (byte)puVar64[0x5c18000] - bVar30;
  pcVar17 = (char *)CONCAT31(uVar27,bVar30 - (byte)*puVar64);
code_r0x00403b2c:
  bVar30 = (char)pcVar17 - *pcVar17;
  pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar30);
  *pbVar24 = *pbVar24 + bVar30;
  *(byte **)pbVar24 = pbVar15 + *(int *)pbVar24;
  *pbVar24 = *pbVar24 + bVar30;
  bVar68 = CARRY1(*pbVar24,bVar30);
  *pbVar24 = *pbVar24 + bVar30;
  puVar33 = (undefined1 *)puVar39;
  pbVar25 = pbVar63;
  while( true ) {
    puVar39 = (undefined4 *)puVar33;
    *(byte **)pbVar24 = pbVar24 + (uint)bVar68 + *(int *)pbVar24;
    bVar10 = ((uint)pbVar24 & 0x1000) != 0;
    puVar64 = puVar64 + (uint)bVar69 * -2 + 1;
    pbVar24[(int)pbVar15] = pbVar24[(int)pbVar15] + (char)pbVar60;
    *pbVar24 = *pbVar24 + (char)pbVar24;
    *(byte **)pbVar25 = pbVar60 + *(int *)pbVar25;
    bVar30 = (byte)((uint)pbVar23 >> 8);
    cVar8 = (char)pbVar23;
    pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),CONCAT11(bVar30 + *pbVar24,cVar8));
    pbVar24 = pbVar24 + (uint)CARRY1(bVar30,*pbVar24) + *(int *)pbVar24;
    *pbVar15 = *pbVar15 + cVar8;
    cVar8 = (char)pbVar60 - pbVar25[2];
    pbVar60 = (byte *)CONCAT31((int3)((uint)pbVar60 >> 8),cVar8);
    pbVar63 = pbVar25;
    if ((POPCOUNT(cVar8) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar24 = *pbVar24 + (byte)pbVar24;
    bVar30 = (byte)pbVar24 | *pbVar60;
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar30);
    if (bVar30 != 0) {
      pbVar59 = pbVar59 + -puVar64[9];
      *pbVar26 = *pbVar26 + bVar30;
      pbVar23 = (byte *)CONCAT22((short)((uint)pbVar23 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar23 >> 8) | *pbVar15,(char)pbVar23));
      pbVar25 = pbVar25 + *(int *)pbVar26;
      pbVar26 = pbVar26 + *(int *)pbVar26;
      uVar27 = (undefined3)((uint)pbVar26 >> 8);
      bVar11 = (char)pbVar26 - *pbVar26;
      pbVar63 = (byte *)CONCAT31(uVar27,bVar11);
      bVar30 = *pbVar63;
      *pbVar63 = *pbVar63 + bVar11;
      pbVar26 = (byte *)CONCAT31(uVar27,bVar11 - CARRY1(bVar30,bVar11));
    }
    bVar30 = *pbVar26;
    *pbVar26 = *pbVar26 + (byte)pbVar26;
    iVar18 = *(int *)(pbVar59 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar30,(byte)pbVar26);
    pbVar63 = pbVar25 + (uint)bVar69 * -8 + 4;
    out(*(undefined4 *)pbVar25,(short)pbVar15);
    pbVar24 = (byte *)(((uint)pbVar26 >> 8) * 0x100);
    *pbVar15 = *pbVar15 + (byte)pbVar23;
    bVar30 = (char)pbVar15 - *pbVar60;
    pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar30);
    *pbVar60 = *pbVar60;
    *pbVar15 = *pbVar15 + (char)((uint)pbVar23 >> 8);
    *pbVar24 = *pbVar24;
    pcVar17 = (char *)(((uint)pbVar26 >> 8) * 0x200);
    *pcVar17 = *pcVar17 + (char)pbVar60;
    bVar68 = CARRY1(*pbVar23,bVar30);
    *pbVar23 = *pbVar23 + bVar30;
    puVar33 = (undefined1 *)((int)puVar39 + (iVar4 - iVar18));
    pbVar25 = pbVar63;
    if (bVar68) {
      *pbVar24 = *pbVar24;
      pbVar23 = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),(byte)pbVar23 | *pbVar15);
      puVar54 = (undefined2 *)((int)puVar39 + (iVar4 - iVar18) + -4);
      puVar39 = (undefined4 *)((int)puVar39 + (iVar4 - iVar18) + -4);
      *puVar54 = in_ES;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar53 = (undefined2 *)((int)puVar39 + -4);
  puVar39 = (undefined4 *)((int)puVar39 + -4);
  *puVar53 = uVar66;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar59 = pbVar59 + -*puVar32;
  puVar56 = (undefined1 *)((int)puVar57 + 4);
  do {
    bVar30 = (byte)puVar32;
    *(byte *)puVar32 = (byte)*puVar32 + bVar30;
    pbVar25 = pbVar25 + -*(int *)(pbVar59 + -0x1a);
    *(byte *)puVar32 = (byte)*puVar32 + bVar30;
    bVar30 = bVar30 | (byte)*puVar64;
    puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar30);
    *(byte *)puVar32 = (byte)*puVar32 | bVar30;
    bVar30 = (byte)*puVar32;
    pbVar59 = (byte *)0x2700001;
    while (puVar57 = (undefined2 *)puVar56, (POPCOUNT(bVar30) & 1U) == 0) {
      do {
        *(byte *)puVar32 = (byte)*puVar32 + (byte)puVar32;
        bVar30 = (byte)puVar32 | (byte)*puVar64;
        puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar30);
        puVar33 = (undefined1 *)puVar57;
        if ((POPCOUNT(bVar30) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
        uVar28 = CONCAT21((short)((uint)pcVar17 >> 0x10),(byte)((uint)pcVar17 >> 8) | bRamfe140212);
        puVar7 = puVar33;
        while( true ) {
          puVar58 = puVar7;
          pcVar17 = (char *)((uint)uVar28 << 8);
          puVar56 = puVar58 + -4;
          puVar57 = (undefined2 *)(puVar58 + -4);
          puVar33 = puVar58 + -4;
          *(undefined2 *)(puVar58 + -4) = in_ES;
          bVar12 = (byte)puVar32;
          *(byte *)puVar32 = (byte)*puVar32 & bVar12;
          bVar11 = *pbVar60;
          bVar14 = (byte)uVar28;
          bVar10 = *pbVar60;
          *pbVar60 = *pbVar60 + bVar14;
          bVar30 = *pbVar60;
          if (!CARRY1(bVar11,bVar14)) break;
          *(byte *)puVar32 = (byte)*puVar32 + bVar12;
          pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar60 >> 8) | bRam026fffe2,
                                              (char)pbVar60));
          *(byte *)puVar32 = (byte)*puVar32 + bVar12;
          bVar12 = bVar12 | (byte)*puVar64;
          puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar12);
          bVar68 = (POPCOUNT(bVar12) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar60 >> 8);
            uVar66 = (undefined2)((uint)pbVar60 >> 0x10);
            if (!bVar68) {
              *(byte *)puVar64 = (byte)*puVar64;
              pbVar60 = (byte *)CONCAT22(uVar66,CONCAT11(cVar8 + pbVar60[-0x1f],(char)pbVar60));
              goto code_r0x00403d52;
            }
            *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
            uVar67 = (undefined2)((uint)pcVar17 >> 0x10);
            bVar10 = (byte)((uint)pcVar17 >> 8) | (byte)*puVar32;
            uVar28 = CONCAT21(uVar67,bVar10);
            *puVar32 = *puVar32 & (uint)puVar32;
            *pbVar60 = *pbVar60 + bVar10;
            uVar27 = (undefined3)((uint)puVar32 >> 8);
            bVar30 = (char)puVar32 - bVar10;
            pcVar17 = (char *)CONCAT31(uVar27,bVar30);
            *pcVar17 = *pcVar17 + bVar30;
            bVar30 = bVar30 | (byte)*puVar64;
            puVar32 = (uint *)CONCAT31(uVar27,bVar30);
            puVar7 = puVar58 + -4;
            if ((POPCOUNT(bVar30) & 1U) != 0) break;
            *(byte *)puVar32 = (byte)*puVar32 + bVar30;
            pcVar17 = (char *)((uint)CONCAT21(uVar67,bVar10 | (byte)*puVar32) << 8);
            *puVar32 = *puVar32 - (int)puVar32;
            *(byte *)puVar64 = (byte)*puVar64;
            pbVar60 = (byte *)CONCAT22(uVar66,CONCAT11(cVar8 + pbVar60[-0x1d],(char)pbVar60));
            do {
              *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
              uVar66 = (undefined2)((uint)puVar64 >> 0x10);
              cVar8 = (char)puVar64;
              bVar30 = (byte)((uint)puVar64 >> 8) | pbVar60[-0x17];
              puVar64 = (uint *)CONCAT22(uVar66,CONCAT11(bVar30,cVar8));
              *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
              pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar60 >> 8) | bRam026fffeb,
                                                  (char)pbVar60));
              do {
                *(byte *)puVar32 = (byte)*puVar32 + (byte)puVar32;
                uVar27 = (undefined3)((uint)puVar32 >> 8);
                bVar11 = (byte)puVar32 | (byte)*puVar64;
                pcVar22 = (char *)CONCAT31(uVar27,bVar11);
                bVar10 = pbVar60[-0x16];
                *pcVar22 = *pcVar22 + bVar11;
                pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                           CONCAT11((char)((uint)pbVar60 >> 8) + bVar10 |
                                                    bRam026fffec,(char)pbVar60));
                *pcVar22 = *pcVar22 + bVar11;
                pbVar15 = (byte *)CONCAT31(uVar27,bVar11 | (byte)*puVar64);
                while( true ) {
                  *pbVar15 = *pbVar15 + (byte)pbVar15;
                  uVar27 = (undefined3)((uint)pbVar15 >> 8);
                  bVar10 = (byte)pbVar15 | (byte)*puVar64;
                  puVar32 = (uint *)CONCAT31(uVar27,bVar10);
                  if ((POPCOUNT(bVar10) & 1U) != 0) break;
                  *(byte *)puVar32 = (byte)*puVar32 + bVar10;
                  bVar11 = pbVar25[-0x14];
                  *(byte *)puVar32 = (byte)*puVar32 + bVar10;
                  bVar10 = bVar10 | (byte)*puVar64;
                  pcVar22 = (char *)CONCAT31(uVar27,bVar10);
                  bVar12 = pbVar60[-0x15];
                  *pcVar22 = *pcVar22 + bVar10;
                  pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),
                                                    (byte)((uint)pcVar17 >> 8) | bVar11 |
                                                    pbVar25[-0x13]) << 8);
                  *pcVar22 = *pcVar22 + bVar10;
                  pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                             CONCAT11((char)((uint)pbVar60 >> 8) + bVar12 |
                                                      bRam026fffef,(char)pbVar60));
                  *pcVar22 = *pcVar22 + bVar10;
                  pbVar15 = (byte *)CONCAT31(uVar27,bVar10 | (byte)*puVar64);
                  do {
                    do {
                      bVar11 = (byte)pbVar15;
                      *pbVar15 = *pbVar15 + bVar11;
                      cVar35 = (char)pbVar60;
                      pbVar60 = (byte *)CONCAT22((short)((uint)pbVar60 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar60 >> 8) | *pbVar15,
                                                          cVar35));
                      *pbVar15 = bVar11;
                      *pbVar15 = *pbVar15 + bVar11;
                      cVar9 = (char)((uint)pcVar17 >> 8) + *pbVar15;
                      pcVar17 = (char *)((uint)CONCAT21((short)((uint)pcVar17 >> 0x10),cVar9) << 8);
                      uVar27 = (undefined3)((uint)pbVar15 >> 8);
                      bVar11 = bVar11 & *pbVar15;
                      pbVar15 = (byte *)CONCAT31(uVar27,bVar11);
                      bVar10 = *pbVar60;
                      *pbVar60 = *pbVar60 + cVar9;
                    } while (SCARRY1(bVar10,cVar9) == (char)*pbVar60 < '\0');
                    *pbVar15 = *pbVar15 + bVar11;
                    bVar11 = bVar11 | (byte)*puVar64;
                    pbVar15 = (byte *)CONCAT31(uVar27,bVar11);
                    if ((POPCOUNT(bVar11) & 1U) == 0) {
                      *pbVar15 = *pbVar15 + bVar11;
                      *pbVar15 = *pbVar15 + bVar11;
                      cVar8 = cVar8 - bVar30;
                      pbVar23 = (byte *)CONCAT31((int3)((uint)puVar64 >> 8),cVar8);
                      *pbVar15 = *pbVar15 + bVar11;
                      bRam0312382b = bRam0312382b | *pbVar23;
                      *(undefined2 *)(puVar58 + -8) = in_ES;
                      while( true ) {
                        bVar10 = (byte)pbVar15;
                        *pbVar15 = *pbVar15 + bVar10;
                        bRam0312382b = bRam0312382b | (pbVar25 + 0x21b0000)[(int)pbVar15];
                        uVar27 = (undefined3)((uint)pbVar15 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar23 = *pbVar23 + bRam0312382b;
                        pbVar15 = (byte *)CONCAT31(uVar27,bVar10 | *pbVar63);
                      }
                      *pbVar15 = *pbVar15 + bVar10;
                      bVar10 = bVar10 | *pbVar63;
                      pcVar17 = (char *)CONCAT31(uVar27,bVar10);
                      out(*(undefined4 *)pbVar63,(short)pbVar23);
                      *pcVar17 = *pcVar17 + bVar10;
                      uVar67 = CONCAT11(bVar30 | bRam6f0a002b,cVar8);
                      pcVar22 = (char *)CONCAT22(uVar66,uVar67);
                      *pcVar17 = *pcVar17 + bVar10;
                      *pcVar22 = *pcVar22 + bRam0312382b;
                      out(*(undefined4 *)(pbVar63 + (uint)bVar69 * -8 + 4),uVar67);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar60 = (byte *)CONCAT31((int3)((uint)pbVar60 >> 8),cVar35 + *pcVar17);
                  } while (SCARRY1(cVar35,*pcVar17) != (char)(cVar35 + *pcVar17) < '\0');
                }
                uVar21 = *puVar64;
                *(byte *)puVar64 = (byte)*puVar64;
              } while (SCARRY1((byte)uVar21,'\0') != (char)(byte)*puVar64 < '\0');
              *(byte *)puVar64 = (byte)*puVar64;
              *pcVar17 = *pcVar17 - (char)pbVar60;
              *(byte *)puVar32 = (byte)*puVar32 + bVar10;
              bVar10 = bVar10 | (byte)*puVar64;
              puVar32 = (uint *)CONCAT31(uVar27,bVar10);
              bVar68 = (POPCOUNT(bVar10) & 1U) == 0;
            } while (bVar68);
          }
        }
      } while (SCARRY1(bVar10,bVar14));
    }
    *pbVar60 = *pbVar60 + (char)((uint)pcVar17 >> 8);
    *pbVar25 = *pbVar25 - (char)pbVar60;
  } while( true );
}


