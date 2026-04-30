/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403261
 * Raw Name    : set_ReportBuffer
 * Demangled   : set_ReportBuffer
 * Prototype   : byte * set_ReportBuffer(char * value, byte * param_2)
 * Local Vars  : uStack_38, pbStack_30, auStack_28, uStack_24, uStack_20, apbStack_18, pcStack_c, param_2, uVar1, pcVar2, uVar3, iVar4, uVar5, uVar6, puVar7, cVar8, bVar9, cVar10, bVar11, bVar12, bVar13, bVar14, bVar15, in_EAX, pbVar16, piVar17, pcVar18, iVar19, ppbVar20, ppbVar21, uVar22, pcVar23, pbVar24, pbVar25, pbVar26, uVar27, uVar28, extraout_ECX, extraout_ECX_00, uVar29, puVar30, puVar31, uVar32, unaff_EBX, pbVar33, cVar34, cVar35, bVar36, uVar37, puVar38, puVar39, piVar40, piVar41, puVar42, puVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, puVar57, unaff_EBP, pbVar58, unaff_ESI, pbVar59, puVar60, puVar61, pbVar62, unaff_EDI, puVar63, puVar64, in_ES, in_CS, uVar65, in_DS, uVar66, unaff_FS_OFFSET, in_GS_OFFSET, bVar67, in_AF, in_TF, in_IF, bVar68, bVar69, in_NT, in_AC, value, in_VIF, in_VIP, in_ID, uVar70, unaff_retaddr
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

byte * __fastcall set_ReportBuffer(char *value,byte *param_2)

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
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined4 in_EAX;
  undefined3 uVar27;
  byte *pbVar16;
  int *piVar17;
  char *pcVar18;
  int iVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  uint uVar22;
  char *pcVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint3 uVar28;
  byte *pbVar26;
  byte *extraout_ECX;
  undefined3 uVar29;
  byte *extraout_ECX_00;
  uint *puVar30;
  undefined1 *puVar31;
  undefined1 uVar32;
  char cVar34;
  byte bVar36;
  char *unaff_EBX;
  char cVar35;
  byte *pbVar33;
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
  undefined4 uStack_38;
  byte *pbStack_30;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  byte *apbStack_18 [3];
  char *pcStack_c;
  
  bVar68 = false;
                    /* .NET CLR Managed Code */
  uVar27 = (undefined3)((uint)in_EAX >> 8);
  cVar8 = (char)in_EAX + *unaff_EBX;
  pcVar18 = (char *)CONCAT31(uVar27,cVar8);
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar8 < '\0') {
    *pcVar18 = *pcVar18 + cVar8;
    pcVar18 = (char *)CONCAT31(uVar27,cVar8);
  }
  else {
    *pcVar18 = *pcVar18 + cVar8;
    pcVar18 = (char *)CONCAT31(uVar27,cVar8 + '*');
    uVar65 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar32 = SUB41(unaff_EBX,0);
    cVar34 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x3a];
    unaff_EBX = (char *)CONCAT22(uVar65,CONCAT11(cVar34,uVar32));
    *pcVar18 = *pcVar18 + cVar8 + '*';
    bVar9 = cVar8 + 0x54U & *param_2;
    unaff_EDI = (undefined4 *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x3a));
    *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
    pbVar16 = (byte *)CONCAT31(uVar27,bVar9 + 0x2a);
    bVar9 = *pbVar16;
    bVar11 = (byte)((uint)value >> 8);
    cVar8 = (char)value;
    value = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar11 + *pbVar16,cVar8));
    iVar19 = *(int *)pbVar16;
    *param_2 = *param_2 + cVar8;
    cVar10 = (char)(pbVar16 + (uint)CARRY1(bVar11,bVar9) + iVar19);
    uVar27 = (undefined3)((uint)(pbVar16 + (uint)CARRY1(bVar11,bVar9) + iVar19) >> 8);
    cVar8 = cVar10 + *unaff_EBX;
    pcVar18 = (char *)CONCAT31(uVar27,cVar8);
    if (SCARRY1(cVar10,*unaff_EBX) == cVar8 < '\0') {
      *(char **)param_2 = unaff_EBP + *(int *)param_2;
      unaff_EBX = (char *)CONCAT22(uVar65,CONCAT11(cVar34 + unaff_EBX[0x38],uVar32));
      *pcVar18 = *pcVar18 + cVar8;
      pbVar16 = (byte *)CONCAT31(uVar27,cVar8 + 'o');
      goto code_r0x004032a6;
    }
  }
  *pcVar18 = *pcVar18 + (char)pcVar18;
  uVar27 = (undefined3)((uint)pcVar18 >> 8);
  cVar10 = (char)pcVar18 + '*';
  pcVar18 = (char *)CONCAT31(uVar27,cVar10);
  *pcVar18 = *pcVar18 + cVar10;
  cVar34 = (char)param_2;
  param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((char)((uint)param_2 >> 8) - *unaff_retaddr,cVar34));
  value = (char *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((char)((uint)value >> 8) + *pcVar18,(char)value));
  *pcVar18 = *pcVar18 + cVar10;
  unaff_EBP = (char *)(CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES) +
                      *(int *)((int)unaff_EDI + -0x5e));
  *pcVar18 = *pcVar18 + cVar10;
  cVar8 = *pcVar18;
  pbVar16 = (byte *)CONCAT31(uVar27,cVar10 - cVar8);
  *unaff_EBX = *unaff_EBX + cVar34;
  *(byte *)((int)pbVar16 * 2) = *(byte *)((int)pbVar16 * 2) ^ cVar10 - cVar8;
  unaff_ESI = unaff_retaddr;
code_r0x004032a6:
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + (byte)pbVar16;
  pbVar16 = pbVar16 + (uint)CARRY1(bVar9,(byte)pbVar16) + *(int *)pbVar16;
  *value = *value + (char)param_2;
  pbVar62 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[0x38],(char)unaff_EBX
                                     ));
  *pbVar16 = *pbVar16 + (char)pbVar16;
  piVar17 = (int *)(CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + 'o') + 0x28060000);
  puVar63 = unaff_EDI + 1;
  uVar66 = SUB42(param_2,0);
  uVar1 = in(uVar66);
  *unaff_EDI = uVar1;
  *(char *)piVar17 = *(char *)piVar17 + (char)piVar17;
  uVar65 = (undefined2)((uint)value >> 0x10);
  bVar9 = (byte)((uint)value >> 8) | bRam7b022a01;
  pbVar16 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar16 = *pbVar16 + (char)piVar17;
  iVar19 = *piVar17;
  *unaff_ESI = *unaff_ESI + (char)(char *)((int)piVar17 + iVar19);
  pcVar18 = (char *)((int)piVar17 + iVar19) + -0x387b020d;
  *pcVar18 = *pcVar18 + (char)pcVar18;
  cVar8 = (char)pcVar18 + 'o';
  pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar8);
  *pcVar18 = *pcVar18 + cVar8;
  iVar19 = (int)pcVar18 - *(int *)CONCAT22(uVar65,CONCAT11(bVar9,(char)value));
  uVar27 = (undefined3)((uint)iVar19 >> 8);
  cVar8 = (((byte)iVar19 | *unaff_ESI) - 0xe) + *pbVar62;
  pcVar18 = (char *)CONCAT31(uVar27,cVar8);
  pbVar16 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,uVar66);
  pcVar18[unaff_FS_OFFSET] = pcVar18[unaff_FS_OFFSET] + cVar8;
  pcStack_c = (char *)CONCAT22(pcStack_c._2_2_,in_ES);
  pbVar24 = (byte *)CONCAT22(uVar65,CONCAT11(bVar9 + *(char *)((int)unaff_EDI + 0x6a),(char)value));
  *pcVar18 = *pcVar18 + cVar8;
  bVar11 = cVar8 - *param_2;
  puVar30 = (uint *)CONCAT31(uVar27,bVar11);
  *unaff_EBP = *unaff_EBP - (char)unaff_EBX;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar11;
  bVar12 = (byte)((uint)param_2 >> 8);
  if (CARRY1(bVar9,bVar11)) goto code_r0x00403365;
  pbVar33 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
  *pbVar33 = *pbVar33 + bVar11;
  ppbVar21 = (byte **)(puVar30 + 0x1f421c00);
  cVar8 = (char)ppbVar21;
  if ((POPCOUNT((uint)ppbVar21 & 0xff) & 1U) != 0) {
    pbVar33 = (byte *)((int)puVar30 + 0x7d087002);
    bVar9 = *pbVar33;
    *pbVar33 = *pbVar33 + bVar12;
    uVar27 = (undefined3)((uint)ppbVar21 >> 8);
    if ((POPCOUNT(*pbVar33) & 1U) == 0) {
      *(char *)ppbVar21 = (char)*ppbVar21 + cVar8;
      ppbVar20 = (byte **)CONCAT31(uVar27,cVar8 + 'o');
      goto code_r0x0040333c;
    }
    pbVar33 = (byte *)CONCAT31(uVar27,cVar8 + -2 + CARRY1(bVar9,bVar12));
    goto code_r0x00403375;
  }
  *(char *)ppbVar21 = (char)*ppbVar21 + cVar8;
  do {
    while( true ) {
      cVar8 = (char)ppbVar21 + 'o';
      piVar17 = (int *)CONCAT31((int3)((uint)ppbVar21 >> 8),cVar8);
      *pbVar16 = *pbVar16 + cVar8;
      *(undefined2 *)pbVar62 = in_ES;
      *pbVar24 = *pbVar24 + cVar8;
      *pbVar24 = *pbVar24 - (char)pbVar62;
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      bVar9 = *(byte *)((int)puVar63 + -0x5e);
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      iVar19 = *piVar17;
      *(char *)(in_GS_OFFSET + (int)piVar17) = *(char *)(in_GS_OFFSET + (int)piVar17) + cVar8;
      ppbVar21 = apbStack_18;
      ppbVar20 = apbStack_18;
      apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
      pbVar33 = apbStack_18[0];
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar24 >> 8) | bVar9) + (char)iVar19 +
                                          *param_2,(char)pbVar24 - *param_2));
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      pbVar16 = pbVar16 + *piVar17;
      apbStack_18[0]._0_1_ = (char)in_ES;
      bVar11 = (byte)apbStack_18;
      apbStack_18[0]._1_3_ = SUB43(pbVar33,1);
      apbStack_18[0] = (byte *)CONCAT31(apbStack_18[0]._1_3_,(char)apbStack_18[0] + bVar11 * '\x03')
      ;
      *param_2 = *param_2 + bVar11;
      *unaff_EBP = *unaff_EBP - (char)pbVar62;
      bVar9 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar11;
      if (!CARRY1(bVar9,bVar11)) break;
      apbStack_18[0] = (byte *)((uint)apbStack_18[0]._1_3_ << 8);
    }
code_r0x0040333c:
    pcVar18 = (char *)((int)ppbVar20 + 0x7b027000);
    pbVar33 = (byte *)((int)puVar63 + (int)unaff_EBP * 2);
    *pbVar33 = *pbVar33 + (char)pcVar18;
    *pbVar16 = *pbVar16 + (char)pcVar18 + *pcVar18;
    cRam03060000 = cRam8c0a0000;
    pbVar33 = pbVar16 + 4;
    out(*(undefined4 *)pbVar16,uVar66);
    puVar30 = (uint *)CONCAT31((int3)((uint)pcVar18 >> 8),cRam8c0a0000);
    *pbVar24 = *pbVar24 + cRam8c0a0000;
    *param_2 = *param_2 - (char)((uint)pcVar18 >> 8);
    *param_2 = *param_2 + (char)pbVar24;
    pbVar16 = pbVar16 + 8;
    out(*(undefined4 *)pbVar33,uVar66);
    puVar63 = (uint *)((uint)puVar63 ^ *puVar30);
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11((char)((uint)pbVar24 >> 8) + (char)*puVar30,(char)pbVar24));
    unaff_EBP = pcStack_c;
code_r0x00403365:
    cVar8 = (char)puVar30;
    *(char *)puVar30 = (char)*puVar30 + cVar8;
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x38],(char)pbVar62));
    *(char *)puVar30 = (char)*puVar30 + cVar8;
    uVar27 = (undefined3)((uint)puVar30 >> 8);
    cVar8 = cVar8 + 'o' + *(char *)CONCAT31(uVar27,cVar8 + 'o');
    pbVar33 = (byte *)CONCAT31(uVar27,cVar8);
    bVar9 = *pbVar16;
    *pbVar16 = *pbVar16 + cVar8;
    pbVar59 = pbVar16;
    if (*pbVar16 == 0 || SCARRY1(bVar9,cVar8) != (char)*pbVar16 < '\0') goto code_r0x004033b0;
code_r0x00403375:
    bVar9 = (byte)pbVar33;
    *pbVar33 = *pbVar33 + bVar9;
    uVar27 = (undefined3)((uint)pbVar33 >> 8);
    bVar11 = bVar9 + 0x2d;
    ppbVar21 = (byte **)CONCAT31(uVar27,bVar11);
    *(byte **)(pbVar16 + (int)puVar63 * 8) =
         param_2 + (uint)(0xd2 < bVar9) + *(int *)(pbVar16 + (int)puVar63 * 8);
    pbVar33 = (byte *)segment(in_DS,(short)pbVar62 + (short)pbVar16);
    bVar9 = *pbVar33;
    *pbVar33 = *pbVar33 + bVar11;
    apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
    pbVar58 = apbStack_18[0];
  } while (!CARRY1(bVar9,bVar11));
  *(byte *)ppbVar21 = (char)*ppbVar21 + bVar11;
  bVar67 = false;
  bVar11 = bVar11 | *(byte *)((int)ppbVar21 + 0x400003b);
  pbVar25 = (byte *)CONCAT31(uVar27,bVar11);
  if ('\0' < (char)bVar11) {
    *pbVar25 = *pbVar25 + bVar11;
    iVar19 = CONCAT31(uVar27,bVar11 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar11);
    iRam02060000 = iVar19;
    *(byte *)puVar63 = (byte)*puVar63 - (char)pbVar62;
    *pbVar16 = *pbVar16 + (char)iVar19;
    bVar11 = (char)iVar19 - 0x25;
    pbVar33 = (byte *)CONCAT31((int3)((uint)iVar19 >> 8),bVar11);
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11((char)((uint)pbVar24 >> 8) + *pbVar33,(char)pbVar24));
    bVar9 = *pbVar33;
    *pbVar33 = *pbVar33 + bVar11;
    apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
    if (CARRY1(bVar9,bVar11)) goto code_r0x004033e7;
    pbVar25 = pbVar33 + 2;
    *pbVar25 = *pbVar25 + bVar12;
    pbVar59 = pbVar16;
    if ((POPCOUNT(*pbVar25) & 1U) != 0) goto _ctor;
code_r0x004033b0:
    *pbVar33 = *pbVar33 + (char)pbVar33;
    cVar8 = (char)pbVar33 + 'o';
    pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar8);
    *pbVar59 = *pbVar59 + cVar8;
    *(undefined2 *)pbVar62 = in_ES;
    *pbVar24 = *pbVar24 + cVar8;
    *param_2 = *param_2 - (char)((uint)pbVar33 >> 8);
    bVar67 = CARRY1(*param_2,(byte)pbVar24);
    *param_2 = *param_2 + (byte)pbVar24;
    pbVar16 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,uVar66);
    pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar8);
  }
  pbVar59 = pbVar16 + (uint)bVar67 + *(int *)pbVar25;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar25 >> 8),(byte)pbVar25 + *pbVar25);
  pbVar16 = (byte *)((int)piVar17 + (uint)CARRY1((byte)pbVar25,*pbVar25) + *piVar17);
  bVar9 = *pbVar16;
  bVar11 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar11;
  pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar11 + CARRY1(bVar9,bVar11));
  do {
    *pbVar24 = *pbVar24 + (char)param_2;
    param_2[0xa0a0000] = param_2[0xa0a0000] - (char)((uint)pbVar33 >> 8);
    uStack_24 = (byte *)CONCAT22(uStack_24._2_2_,in_ES);
    pbVar58 = uStack_24;
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11((char)((uint)pbVar24 >> 8) + *pbVar33,(char)pbVar24));
    *pbVar33 = *pbVar33 + (char)pbVar33;
    uStack_24 = (byte *)((uint)uStack_24._2_2_ << 0x10);
    pbVar16 = pbVar59 + 4;
    out(*(undefined4 *)pbVar59,(short)param_2);
    pbRam2a0a0000 = pbVar33;
code_r0x004033e7:
    param_2 = param_2 + 1;
    pbVar59 = pbVar16;
_ctor:
    uVar6 = uStack_20._2_2_;
    iVar19 = CONCAT31((int3)((uint)pbVar33 >> 8),(char)pbVar33 + *pbVar62) + 0x6128;
    uStack_20 = (byte *)((uint)uStack_20._2_2_ << 0x10);
    bVar11 = (char)iVar19 + *(char *)((int)puVar63 * 2 + 0x400003e);
    pbVar33 = (byte *)CONCAT31((int3)((uint)iVar19 >> 8),bVar11);
    cVar8 = (char)param_2 - *pbVar62;
    puVar30 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar8);
    *(byte *)puVar30 = (byte)*puVar30 ^ bVar11;
    *pbVar33 = *pbVar33 + (char)((uint)pbVar62 >> 8);
    *pbVar33 = *pbVar33 + bVar11;
    *pbVar24 = *pbVar24 + cVar8;
    bVar9 = *pbVar33;
    *pbVar33 = *pbVar33 + bVar11;
    *(byte **)(pbVar62 + -0x41) = pbVar59 + (uint)CARRY1(bVar9,bVar11) + *(int *)(pbVar62 + -0x41);
    do {
      *pbVar33 = *pbVar33 + (byte)pbVar33;
      uVar27 = (undefined3)((uint)pbVar33 >> 8);
      bVar9 = (byte)pbVar33 | *pbVar59;
      uVar65 = (undefined2)((uint)pbVar62 >> 0x10);
      uVar32 = SUB41(pbVar62,0);
      cVar10 = (char)((uint)pbVar62 >> 8) + pbVar62[0x69];
      *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
      cVar8 = bVar9 + 0x7d;
      pcVar18 = (char *)CONCAT31(uVar27,cVar8);
      pbVar59[(int)pcVar18] = pbVar59[(int)pcVar18] + cVar8;
      cVar10 = cVar10 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar10,uVar32)) + 0x67);
      *pcVar18 = *pcVar18 + cVar8;
      pcVar18 = (char *)CONCAT31(uVar27,bVar9 - 6);
      puVar60 = (uint *)(pbVar59 + 4);
      out(*(undefined4 *)pbVar59,(short)puVar30);
      *pcVar18 = *pcVar18 + (bVar9 - 6);
      cVar10 = cVar10 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar10,uVar32)) + 0x6b);
      *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
      pcVar18 = (char *)CONCAT31(uVar27,bVar9 + 0x7d);
      pbVar16 = (byte *)((int)puVar60 + (int)pcVar18);
      *pbVar16 = *pbVar16 + bVar9 + 0x7d;
      cVar10 = cVar10 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar10,uVar32)) + 0x6a);
      pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar10,uVar32));
      puVar64 = puVar30;
      do {
        cVar8 = (char)pcVar18;
        *pcVar18 = *pcVar18 + cVar8;
        uVar27 = (undefined3)((uint)pcVar18 >> 8);
        bVar9 = cVar8 + 0x7d;
        pcVar23 = (char *)CONCAT31(uVar27,bVar9);
        *(byte *)((int)puVar60 + (int)pcVar23) = *(byte *)((int)puVar60 + (int)pcVar23) + bVar9;
        uVar29 = (undefined3)((uint)puVar64 >> 8);
        bVar11 = (char)puVar64 - *(byte *)((int)puVar64 + 0x457e02);
        puVar30 = (uint *)CONCAT31(uVar29,bVar11);
        pbVar58[0x6fe1411] = pbVar58[0x6fe1411] + bVar9;
        uVar22 = *puVar60;
        uVar5 = *puVar60;
        *(byte *)puVar60 = (byte)*puVar60 + bVar9;
        if (CARRY1((byte)uVar22,bVar9)) {
          *pcVar23 = *pcVar23 + bVar9;
          bVar9 = bVar9 | pcVar23[0x4000045];
          piVar17 = (int *)CONCAT31(uVar27,bVar9);
          if ((char)bVar9 < '\x01') {
            *(byte *)puVar30 = (byte)*puVar30 + bVar9;
            uStack_20._2_2_ = uVar6;
            goto code_r0x004034a0;
          }
          *(byte *)piVar17 = (char)*piVar17 + bVar9;
          bVar9 = bVar9 + 0x6f;
          pcVar23 = (char *)CONCAT31(uVar27,bVar9);
          *pcVar23 = *pcVar23 + bVar9;
          pbVar58 = pbVar58 + -*puVar30;
          *pcVar23 = *pcVar23 + bVar9;
          *pbVar62 = *pbVar62 + bVar11;
          *(byte *)((int)pcVar23 * 2) = *(byte *)((int)pcVar23 * 2) ^ bVar9;
          in_AF = 9 < (bVar9 & 0xf) | in_AF;
          uVar22 = CONCAT31(uVar27,bVar9 + in_AF * '\x06') & 0xffffff0f;
          cVar8 = (char)uVar22;
          pcVar18 = (char *)CONCAT22((short)(uVar22 >> 0x10),
                                     CONCAT11((char)((uint)pcVar18 >> 8) + in_AF,cVar8));
          *pcVar18 = *pcVar18 + cVar8;
          cRam72110000 = cRam72110000 + bVar11;
          puVar56 = (undefined2 *)segment(in_ES,(short)auStack_28 + -2);
          *puVar56 = in_ES;
          pcVar18[0x1a] = pcVar18[0x1a] + (char)((uint)puVar64 >> 8);
          cVar8 = (char)pbVar24;
          *pbVar24 = *pbVar24 + cVar8;
          *puVar30 = (uint)(pbVar24 + *puVar30);
          apbStack_18[0] = (byte *)CONCAT22(apbStack_18[0]._2_2_,in_ES);
          cVar10 = cVar10 + pbVar62[0x70];
          *pbVar24 = *pbVar24 + cVar8;
          uVar27 = (undefined3)((uint)pbVar24 >> 8);
          bVar9 = cVar8 + 0xa2;
          cVar10 = cVar10 + *(char *)(CONCAT22(uVar65,CONCAT11(cVar10,uVar32)) + 0x6f);
          pbVar62 = (byte *)CONCAT22(uVar65,CONCAT11(cVar10,uVar32));
          *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
          bVar12 = cVar8 + 0x44;
          piVar17 = (int *)CONCAT31(uVar27,bVar12);
          *(byte *)puVar30 = ((byte)*puVar30 - bVar12) - (0x5d < bVar9);
          if ((POPCOUNT((byte)*puVar30) & 1U) != 0) {
            *(byte *)piVar17 = (char)*piVar17 + bVar12;
            *(byte *)piVar17 = (char)*piVar17 + bVar12;
            *(char *)piVar17 = (char)*piVar17 + cVar10;
            puVar30 = (uint *)CONCAT22((short)((uint)puVar64 >> 0x10),(ushort)bVar11);
            *(byte *)piVar17 = (char)*piVar17 + bVar12;
            pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                       CONCAT11((char)((uint)pbVar24 >> 8) + (char)*piVar17,cVar8));
            uStack_20 = pbVar62;
            goto code_r0x00403511;
          }
          *(byte *)piVar17 = (char)*piVar17 + bVar12;
          cVar8 = cVar8 + -0x1a;
          piVar17 = (int *)CONCAT31(uVar27,cVar8);
          uStack_20 = (byte *)CONCAT22(uVar6,in_ES);
          *puVar30 = (*puVar30 - (int)piVar17) - (uint)(0x5d < bVar12);
          if ((POPCOUNT(*puVar30 & 0xff) & 1U) != 0) {
            *(byte *)puVar30 = (byte)*puVar30 + cVar8;
            goto code_r0x004034f3;
          }
          *(char *)piVar17 = (char)*piVar17 + cVar8;
          goto code_r0x0040349e;
        }
        pcVar18 = pcVar23;
        puVar64 = puVar30;
      } while (SCARRY1((byte)uVar5,bVar9) == (char)(byte)*puVar60 < '\0');
      *pcVar23 = *pcVar23 + bVar9;
      piVar17 = (int *)CONCAT31(uVar27,cVar8 + -0x59);
      pbVar59 = (byte *)((int)puVar60 + (uint)(0xd5 < bVar9) + *piVar17);
      bVar12 = cVar8 + -0x59 + (char)*piVar17;
      pbVar33 = (byte *)CONCAT31(uVar27,bVar12);
      bVar9 = *pbVar33;
      *pbVar33 = *pbVar33 + bVar12;
      *(byte **)pbVar33 = pbVar33 + (uint)CARRY1(bVar9,bVar12) + *(int *)pbVar33;
      bVar9 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar11;
    } while (CARRY1(bVar9,bVar11));
    *pbVar59 = *pbVar59 + bVar12;
    cVar8 = bVar11 - *pbVar62;
    param_2 = (byte *)CONCAT31(uVar29,cVar8);
    *param_2 = *param_2 ^ bVar12;
    *pbVar62 = *pbVar62 + cVar8;
    *pbVar33 = *pbVar33 + bVar12;
    *(char *)((int)pbVar33 * 2) = *(char *)((int)pbVar33 * 2) + cVar8;
  } while( true );
code_r0x0040349e:
  piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + -0x5e);
code_r0x004034a0:
  uStack_24 = (byte *)((uint)uStack_24._2_2_ << 0x10);
  pbVar24[0x2a0a0000] = pbVar24[0x2a0a0000] - (char)pbVar24;
  pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                             CONCAT11((char)((uint)pbVar24 >> 8) + (char)*piVar17,(char)pbVar24));
  bVar9 = (byte)piVar17;
  *(byte *)piVar17 = (char)*piVar17 + bVar9;
  uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
  puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),
                             (char)puVar30 - *(byte *)((int)puVar30 + 0x467e02));
  pbVar58[0x6fe1411] = pbVar58[0x6fe1411] + bVar9;
  uVar22 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar9;
  if (!CARRY1((byte)uVar22,bVar9)) {
    pbVar16 = (byte *)((int)puVar63 + (int)pbVar58 * 2);
    *pbVar16 = *pbVar16 + bVar9;
    goto code_r0x004034f3;
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar9;
  uVar27 = (undefined3)((uint)piVar17 >> 8);
  bVar9 = bVar9 | *(byte *)((int)piVar17 + 0x4000046);
  piVar17 = (int *)CONCAT31(uVar27,bVar9);
  if ((char)bVar9 < '\x01') {
code_r0x00403511:
    pbVar58 = uStack_20;
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    uStack_20 = (byte *)CONCAT22(uStack_20._2_2_,in_ES);
    goto code_r0x004034f3;
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar9;
  pbVar16 = (byte *)CONCAT31(uVar27,bVar9 + 0x6f);
  *pbVar16 = *pbVar16 + bVar9 + 0x6f;
  pbVar58 = pbVar58 + -*puVar30;
  do {
    uStack_24 = (byte *)CONCAT22(uStack_24._2_2_,in_DS);
    bVar9 = *(byte *)((int)puVar63 + 0x17);
    *pbVar16 = *pbVar16 + (byte)pbVar16;
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11((char)((uint)pbVar24 >> 8) + bVar9 | (byte)*puVar30,
                                        (char)pbVar24));
    uVar27 = (undefined3)((uint)pbVar16 >> 8);
    bVar9 = (byte)pbVar16 | (byte)*puVar30;
    bVar11 = bVar9 - *(byte *)CONCAT31(uVar27,bVar9);
    puVar60 = (uint *)((int)puVar60 +
                      (uint)(bVar9 < *(byte *)CONCAT31(uVar27,bVar9)) +
                      *(int *)CONCAT31(uVar27,bVar11));
    pbVar16 = (byte *)CONCAT31(uVar27,bVar11);
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    *(byte *)puVar60 = (byte)*puVar60 + (char)puVar30;
    bVar9 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar11;
    *puVar30 = (uint)(pbVar16 + (uint)CARRY1(bVar9,bVar11) + *puVar30);
    if ((POPCOUNT(*puVar30 & 0xff) & 1U) != 0) {
      *(byte *)puVar60 = (byte)*puVar60 + 1;
      puVar64 = puVar60;
      goto code_r0x00403529;
    }
    *pbVar16 = *pbVar16 + bVar11;
    piVar17 = (int *)CONCAT31(uVar27,bVar11 + 0x6f);
code_r0x004034f3:
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    *(byte *)puVar60 = (byte)*puVar60 + (char)piVar17;
    pbVar58 = pbVar58 + 1;
    pcVar18 = (char *)((int)((uint)piVar17 | 8) + *(int *)((uint)piVar17 | 8));
    *pcVar18 = *pcVar18 + (char)pcVar18;
    piVar17 = (int *)(pcVar18 + 0x53000000);
    bVar9 = (byte)piVar17;
    *(byte *)piVar17 = (char)*piVar17 + bVar9;
    *pbVar62 = *pbVar62 + (char)puVar30;
    *(byte *)piVar17 = (char)*piVar17 + bVar9;
    *pbVar58 = *pbVar58 - (char)pbVar62;
    uVar22 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar9;
    if (CARRY1((byte)uVar22,bVar9)) goto code_r0x0040349e;
    uStack_24 = (byte *)CONCAT22(uStack_24._2_2_,in_ES);
    pcVar18[0x5300006f] = pcVar18[0x5300006f] + (char)((uint)puVar30 >> 8);
    pcVar18 = pcVar18 + 0x53000001;
    bVar11 = (byte)pcVar18;
    bRam7e060000 = bVar9;
    *pcVar18 = *pcVar18 + bVar11;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar11 + 0x2d);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar30 + (uint)(0xd2 < bVar11) + puVar60[(int)puVar63 * 2]);
    puVar64 = puVar60;
code_r0x00403529:
    puVar60 = puVar64 + 1;
    out(*puVar64,(short)puVar30);
    bVar9 = *pbVar16;
    bVar11 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar11;
  } while (!CARRY1(bVar9,bVar11));
  *pbVar16 = *pbVar16 + bVar11;
  uVar27 = (undefined3)((uint)pbVar16 >> 8);
  bVar11 = bVar11 | pbVar16[0x4000040];
  pcVar18 = (char *)CONCAT31(uVar27,bVar11);
  uVar65 = in_ES;
  if ((char)bVar11 < '\x01') goto code_r0x00403579;
  *pcVar18 = *pcVar18 + bVar11;
  cVar8 = bVar11 + 10;
  pcVar18 = (char *)CONCAT31(uVar27,cVar8);
  puVar64 = puVar60;
  if (cVar8 == '\0' || SCARRY1(bVar11,'\n') != cVar8 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar9 = (byte)pcVar18;
  *pcVar18 = *pcVar18 + bVar9;
  piVar17 = (int *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar9 + 0x2d);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar30 + (uint)(0xd2 < bVar9) + puVar60[(int)puVar63 * 2]);
  pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
code_r0x00403549:
  uVar22 = *puVar60;
  bVar9 = (byte)piVar17;
  *(byte *)puVar60 = (byte)*puVar60 + bVar9;
  if (!CARRY1((byte)uVar22,bVar9)) goto code_r0x004034f3;
  *(byte *)piVar17 = (char)*piVar17 + bVar9;
  uVar27 = (undefined3)((uint)piVar17 >> 8);
  bVar9 = bVar9 | *(byte *)((int)piVar17 + 0x4000041);
  if ((char)bVar9 < '\x01') {
    *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar24;
    *(byte *)puVar30 = (byte)*puVar30;
    pcVar18 = (char *)CONCAT31(uVar27,bVar9 + 0x7e);
    puVar30 = (uint *)((int)puVar30 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
  piVar17 = (int *)CONCAT31(uVar27,bVar9 + 0xb);
  puVar64 = puVar60;
code_r0x0040355b:
  pbVar58 = pbVar58 + -*(int *)((int)puVar64 + 2);
  *pbVar58 = *pbVar58 - (char)pbVar62;
  uVar22 = *puVar64;
  bVar9 = (byte)piVar17;
  *(byte *)puVar64 = (byte)*puVar64 + bVar9;
  if (CARRY1((byte)uVar22,bVar9)) goto code_r0x00403548;
code_r0x00403565:
  piVar17 = piVar17 + 0x1ec09c00;
  pbVar16 = (byte *)((int)puVar63 + (int)pbVar58 * 2);
  *pbVar16 = *pbVar16 + (char)piVar17;
  *(byte *)puVar64 = (byte)*puVar64 + (char)piVar17 + (char)*piVar17;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar30);
  pcVar18 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar24 = *pbVar24 + (char)pcVar18;
  *(byte *)puVar30 = (byte)*puVar30 - (char)((uint)pcVar18 >> 8);
  puVar64 = puVar60;
code_r0x00403580:
  *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar24;
  puVar60 = puVar64 + 1;
  out(*puVar64,(short)puVar30);
  bVar9 = (byte)pcVar18;
  puVar30 = (uint *)((int)puVar30 + 1);
  bRam7e060000 = bVar9;
  *pcVar18 = *pcVar18 + bVar9;
  uVar27 = (undefined3)((uint)pcVar18 >> 8);
  bVar11 = bVar9 + 0x2d;
  pcVar18 = (char *)CONCAT31(uVar27,bVar11);
  puVar60[(int)puVar63 * 2] =
       (uint)((int)puVar30 + (uint)(0xd2 < bVar9) + puVar60[(int)puVar63 * 2]);
  pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
  uVar22 = *puVar60;
  *(byte *)puVar60 = (byte)*puVar60 + bVar11;
  if (!CARRY1((byte)uVar22,bVar11)) {
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar64 + 0x45),
                                        (char)pbVar62));
    goto code_r0x0040353f;
  }
  *pcVar18 = *pcVar18 + bVar11;
  bVar11 = bVar11 | pcVar18[0x4000042];
  pcVar18 = (char *)CONCAT31(uVar27,bVar11);
  if ('\0' < (char)bVar11) {
code_r0x004035a1:
    bVar11 = (byte)pcVar18;
    *pcVar18 = *pcVar18 + bVar11;
    uVar27 = (undefined3)((uint)pcVar18 >> 8);
    bVar9 = bVar11 + 10;
    if (bVar9 == 0 || SCARRY1(bVar11,'\n') != (char)bVar9 < '\0') {
      pcVar18 = (char *)CONCAT31(uVar27,bVar11 + 8 + (0xf5 < bVar11));
code_r0x004035e5:
      bVar11 = (byte)pcVar18;
      *pcVar18 = *pcVar18 + bVar11;
      uVar27 = (undefined3)((uint)pcVar18 >> 8);
      bVar9 = bVar11 + 0x2d;
      pcVar18 = (char *)CONCAT31(uVar27,bVar9);
      puVar60[(int)puVar63 * 2] =
           (uint)((int)puVar30 + (uint)(0xd2 < bVar11) + puVar60[(int)puVar63 * 2]);
      uVar22 = *puVar60;
      *(byte *)puVar60 = (byte)*puVar60 + bVar9;
      if (CARRY1((byte)uVar22,bVar9)) {
        *pcVar18 = *pcVar18 + bVar9;
        bVar9 = bVar9 | pcVar18[0x4000044];
        pbVar16 = (byte *)CONCAT31(uVar27,bVar9);
        if ('\0' < (char)bVar9) {
          *pbVar16 = *pbVar16 + bVar9;
          pbVar16 = (byte *)(CONCAT31(uVar27,bVar9 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar9));
          pbRam2a060000 = pbVar16;
          *pbVar62 = *pbVar62 + (char)pbVar62;
          *(byte *)puVar30 = (byte)*puVar30 ^ (byte)pbVar16;
          *pbVar16 = *pbVar16 + (char)((uint)pbVar24 >> 8);
          *pbVar16 = *pbVar16 + (byte)pbVar16;
          puVar64 = puVar63;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),
                                 (byte)pbVar24 |
                                 *(byte *)((int)(puVar30 + 0xa004000) + (int)puVar63));
      puVar64 = puVar60;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
    bVar11 = bVar11 + 0x37;
    piVar17 = (int *)CONCAT31(uVar27,bVar11);
    puVar60[(int)puVar63 * 2] =
         (uint)((int)puVar30 + (uint)(0xd2 < bVar9) + puVar60[(int)puVar63 * 2]);
    pbStack_30 = (byte *)CONCAT22(pbStack_30._2_2_,in_ES);
    uVar22 = *puVar60;
    *(byte *)puVar60 = (byte)*puVar60 + bVar11;
    puVar64 = puVar60;
    if (!CARRY1((byte)uVar22,bVar11)) goto code_r0x0040355b;
    *(byte *)piVar17 = (char)*piVar17 + bVar11;
    bVar11 = bVar11 | *(byte *)((int)piVar17 + 0x4000043);
    pbVar16 = (byte *)CONCAT31(uVar27,bVar11);
    if ((char)bVar11 < '\x01') {
      *pbVar16 = *pbVar16 + bVar11;
      pbVar58 = pbVar58 + -*(int *)((int)puVar63 + -0x5d);
      *pbVar16 = *pbVar16 + bVar11;
      uStack_38 = (undefined4 *)((uint)uStack_38._2_2_ << 0x10);
      piVar17 = (int *)CONCAT31(uVar27,bVar11 - *pbVar16);
      puVar60 = (uint *)((int)puVar60 + (-(uint)(bVar11 < *pbVar16) - *piVar17));
      pbVar16 = (byte *)CONCAT31(uVar27,(bVar11 - *pbVar16) + (char)*piVar17);
      pbStack_30 = (byte *)0x17000000;
      puVar64 = puVar63;
code_r0x00403615:
      bVar9 = *pbVar16;
      bVar11 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar11;
      *puVar30 = (uint)(pbVar16 + (uint)CARRY1(bVar9,bVar11) + *puVar30);
      puVar63 = puVar64;
      if ((POPCOUNT(*puVar30 & 0xff) & 1U) == 0) {
        *pbVar16 = *pbVar16 + bVar11;
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar11 + 0x28);
        puVar63 = puVar64 + 1;
        uVar22 = in((short)puVar30);
        *puVar64 = uVar22;
        *pcVar18 = *pcVar18 + bVar11 + 0x28;
        pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar24 >> 8) | pbVar62[(int)pbVar24],
                                            (char)pbVar24));
        pcVar18[0x28] = pcVar18[0x28] + (char)((uint)puVar30 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar16 = *pbVar16 + bVar11;
    uVar22 = CONCAT31(uVar27,bVar11 + 0xb);
    piVar17 = (int *)(uVar22 - *puVar60);
    if (uVar22 < *puVar60) {
      cVar8 = (char)piVar17;
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      cVar10 = (char)pbVar62;
      bVar9 = (byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar30 + 2);
      *pbVar58 = *pbVar58 - cVar10;
      *(byte *)puVar60 = (byte)*puVar60 + cVar8;
      uStack_38 = (undefined4 *)CONCAT22(uStack_38._2_2_,in_ES);
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar9 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar9,
                                                  cVar10)) + 0x38),cVar10));
      *(char *)piVar17 = (char)*piVar17 + cVar8;
      pcVar18 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),cVar8 + 'o');
      *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar24;
      *pcVar18 = *pcVar18 - cVar10;
      *pcVar18 = *pcVar18 + cVar8 + 'o';
      puVar63 = (uint *)((int)puVar63 - puVar60[0x11]);
      goto code_r0x004035e5;
    }
    puVar64 = puVar60 + 1;
    out(*puVar60,(short)puVar30);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar11) goto code_r0x004035e5;
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
  cVar8 = (char)pcVar18;
  *pcVar18 = *pcVar18 + cVar8;
  pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                             CONCAT11((byte)((uint)pbVar24 >> 8) | (byte)*puVar30,(char)pbVar24));
  pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((char)((uint)pbVar62 >> 8) + pbVar62[0x3e],(char)pbVar62));
  *pcVar18 = *pcVar18 + cVar8;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar8 + '(');
  cVar8 = (char)((uint)puVar30 >> 8);
  *(byte *)((int)puVar30 + 0x21) = *(byte *)((int)puVar30 + 0x21) + cVar8;
  pbVar33 = pbVar16 + 2;
  *pbVar33 = *pbVar33 + cVar8;
  bVar9 = *pbVar33;
code_r0x00403643:
  cVar8 = (char)pbVar16;
  if ((POPCOUNT(bVar9) & 1U) == 0) {
    *pbVar16 = *pbVar16 + cVar8;
    uVar27 = (undefined3)((uint)pbVar16 >> 8);
    cVar10 = cVar8 + '(';
    pcVar18 = (char *)CONCAT31(uVar27,cVar10);
    in_AF = ((uint)pbVar16 & 0x1000) != 0;
    *pcVar18 = *pcVar18 + cVar10;
    puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),(byte)puVar30 | (byte)*puVar60);
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((byte)((uint)pbVar62 >> 8) | *(byte *)((int)puVar60 + 0x3f),
                                        (char)pbVar62));
    *pcVar18 = *pcVar18 + cVar10;
    pbVar16 = (byte *)CONCAT31(uVar27,cVar8 + 'M');
    puVar30 = (uint *)((uint)puVar30 | *puVar30);
    *pbVar16 = *pbVar16 + (char)((uint)pbVar24 >> 8);
code_r0x00403659:
    puVar64 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
    bVar9 = (byte)pbVar16;
    *(byte *)puVar63 = bVar9;
    *pbVar16 = *pbVar16 + bVar9;
    uVar27 = (undefined3)((uint)pbVar16 >> 8);
    bVar9 = bVar9 | (byte)*puVar30;
    pcVar18 = (char *)CONCAT31(uVar27,bVar9);
    puVar63 = puVar64;
    if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x0040369e;
    *pcVar18 = *pcVar18 + bVar9;
    bVar9 = bVar9 + 2;
    *pbVar58 = *pbVar58 - (char)pbVar62;
    *(byte *)puVar60 = (byte)*puVar60 + bVar9;
    puVar61 = puVar60 + (uint)bVar68 * -2 + 1;
    out(*puVar60,(short)puVar30);
    puVar63 = (uint *)((int)puVar64 + (uint)bVar68 * -2 + 1);
    puVar60 = (uint *)((int)puVar61 + (uint)bVar68 * -2 + 1);
    *(byte *)puVar64 = (byte)*puVar61;
    *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
    cVar10 = (char)((uint)pbVar24 >> 8);
    pbVar62[-0x21f60000] = pbVar62[-0x21f60000] - cVar10;
    cVar8 = (bVar9 | (byte)*puVar60) - 6;
    piVar17 = (int *)CONCAT31(uVar27,cVar8);
    pcVar18 = (char *)((int)piVar17 * 2 + 0x2adc0a00);
    *pcVar18 = *pcVar18 - cVar10;
    *piVar17 = (int)(*piVar17 + (int)puVar30);
    *(char *)piVar17 = (char)*piVar17 + cVar8;
    bVar9 = cVar8 + (char)*piVar17;
    in_AF = 9 < (bVar9 & 0xf) | in_AF;
    uVar22 = CONCAT31(uVar27,bVar9 + in_AF * '\x06') & 0xffffff0f;
    pbVar16 = (byte *)CONCAT22((short)(uVar22 >> 0x10),
                               CONCAT11((char)((uint)pbVar16 >> 8) + in_AF,(char)uVar22));
    pbVar33 = pbVar24;
  }
  else {
    *(byte *)puVar30 = (byte)*puVar30 + cVar8;
    *(byte *)puVar63 = (byte)*puVar63 + (char)((uint)puVar30 >> 8);
    pbVar33 = pbVar24;
  }
  *(byte *)puVar60 = (byte)*puVar60 + (char)((uint)pbVar16 >> 8);
  *(byte *)puVar30 = (byte)*puVar30 + (char)pbVar33;
  bVar11 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar11;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar11;
  pbVar24 = pbVar33;
  pbVar58 = pbStack_30;
  if (!CARRY1(bVar9,bVar11)) goto code_r0x004036a6;
  *pbVar16 = *pbVar16 + bVar11;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar11 | pbVar16[0x400003f]);
  pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),
                             (char)pbVar33 - *(byte *)((int)puVar30 + 0x5040302));
  *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) - (char)((uint)pbVar33 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(char)pbVar24 + (byte)*puVar60);
    pbVar16 = (byte *)(CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + '%') + 0x1ebd9f3);
    uStack_38 = (undefined4 *)CONCAT22(uStack_38._2_2_,in_ES);
    bVar9 = (byte)pbVar16;
    bVar67 = CARRY1(*pbVar16,bVar9);
    *pbVar16 = *pbVar16 + bVar9;
    puVar38 = uStack_38 + -1;
    *(undefined2 *)(uStack_38 + -1) = in_ES;
    cVar8 = (char)puVar30;
    if (bVar67) {
      *pbVar16 = *pbVar16 + bVar9;
      uVar66 = (undefined2)((uint)pbVar62 >> 0x10);
      bVar12 = (byte)((uint)pbVar62 >> 8) | pbVar58[0x47];
      pcVar18 = (char *)CONCAT22(uVar66,CONCAT11(bVar12,(char)pbVar62));
      *pbVar16 = *pbVar16 + bVar9;
      uVar27 = (undefined3)((uint)pbVar16 >> 8);
      bVar9 = bVar9 + 0x2a;
      *pcVar18 = *pcVar18 + cVar8;
      pbVar16 = (byte *)((int)CONCAT31(uVar27,bVar9) * 2);
      *pbVar16 = *pbVar16 ^ bVar9;
      bVar9 = bVar9 ^ *(byte *)CONCAT31(uVar27,bVar9);
      pbVar16 = (byte *)CONCAT31(uVar27,bVar9);
      bVar11 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar9;
      *pbVar16 = (*pbVar16 - bVar9) - CARRY1(bVar11,bVar9);
      *pbVar24 = *pbVar24 + cVar8;
      pbVar62 = (byte *)CONCAT22(uVar66,CONCAT11(bVar12 + pcVar18[0x38],(char)pbVar62));
      *pbVar16 = *pbVar16 + bVar9;
      cVar10 = bVar9 + 2;
      if ((POPCOUNT(cVar10) & 1U) != 0) {
        pcVar2 = (code *)swi(7);
        uVar70 = (*pcVar2)();
        pbVar16 = extraout_ECX;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar27,cVar10) = *(char *)CONCAT31(uVar27,cVar10) + cVar10;
      bVar9 = bVar9 + 0x71;
      pbVar16 = (byte *)CONCAT31(uVar27,bVar9);
      uVar65 = *(undefined2 *)(uStack_38 + -1);
      *pbVar16 = *pbVar16 + bVar9;
      iVar19 = (int)pbVar24 - *puVar30;
      pbVar24 = (byte *)CONCAT22((short)((uint)iVar19 >> 0x10),
                                 CONCAT11((char)((uint)iVar19 >> 8) + *pbVar16,(char)iVar19));
      pbVar58 = (byte *)*uStack_38;
      bVar67 = CARRY1(*pbVar16,bVar9);
      *pbVar16 = *pbVar16 + bVar9;
      *(undefined2 *)uStack_38 = in_ES;
      *(undefined2 *)(uStack_38 + -1) = in_ES;
    }
    bVar9 = (byte)pbVar16;
    uVar27 = (undefined3)((uint)pbVar16 >> 8);
    if (bVar67) break;
    *(byte *)puVar30 = (byte)*puVar30 + (byte)pbVar24;
    *(byte *)((int)puVar30 + (int)pbVar58) = *(byte *)((int)puVar30 + (int)pbVar58) + bVar9;
    pcVar18 = (char *)CONCAT31(uVar27,(byte)*puVar30);
code_r0x0040369e:
    pbVar16 = (byte *)(pcVar18 + *(int *)(pcVar18 + 0x6c28));
  }
  *pbVar16 = *pbVar16 + bVar9;
  uVar28 = (uint3)((uint)pbVar24 >> 8);
  pbVar33 = (byte *)CONCAT31(uVar28,(byte)pbVar24 | *pbVar62);
  uVar65 = *(undefined2 *)uStack_38;
  puVar38 = uStack_38 + 1;
  puVar64 = puVar60 + (uint)bVar68 * -2 + 1;
  out(*puVar60,(short)puVar30);
  puVar63 = (uint *)((int)puVar63 + (uint)bVar68 * -2 + 1);
  *pbVar16 = *pbVar16 + bVar9;
  bVar9 = bVar9 | (byte)*puVar63;
  pbVar16 = (byte *)CONCAT31(uVar27,bVar9);
  *(byte *)(puVar63 + 0x1bc28000) = (byte)puVar63[0x1bc28000] - (char)((uint)pbVar24 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar9);
  *(undefined2 *)uStack_38 = pbStack_30._0_2_;
  cVar34 = (char)pbVar62;
  cVar10 = cVar34 - (byte)*puVar30;
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar10);
  if (cVar10 != '\0' && (char)(byte)*puVar30 <= cVar34) {
    *pbVar16 = *pbVar16 + bVar9;
    iVar19 = CONCAT31(uVar27,bVar9 + 0x2a);
    puVar60 = (uint *)((int)puVar64 + 1);
    cVar10 = (char)((uint)puVar30 >> 8) + *(byte *)((int)puVar30 + -0x7b);
    uVar70 = CONCAT44(CONCAT22((short)((uint)puVar30 >> 0x10),CONCAT11(cVar10,cVar8)),iVar19);
    in_ES = *(undefined2 *)uStack_38;
    pcVar18 = (char *)(iVar19 + 0x6f);
    *pcVar18 = *pcVar18 + cVar10;
    pbVar33 = (byte *)((uint)uVar28 << 8);
    do {
      piVar17 = (int *)((ulonglong)uVar70 >> 0x20);
      pcVar18 = (char *)uVar70;
      *(char *)piVar17 = (char)*piVar17;
      if ((char)*piVar17 == '\0') {
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        pbStack_30._0_2_ = in_ES;
_ctor:
        puVar30 = (uint *)((ulonglong)uVar70 >> 0x20);
        pbVar33 = (byte *)((uint)CONCAT21((short)((uint)pbVar33 >> 0x10),
                                          (char)((uint)pbVar33 >> 8) + *(char *)uVar70) << 8);
        pbVar62 = (byte *)((uint)pbVar62 & 0xffffff00);
        *(byte *)puVar30 = (byte)*puVar30;
        uVar27 = (undefined3)((ulonglong)uVar70 >> 8);
        bVar11 = (char)uVar70 - *(char *)uVar70;
        pbVar16 = (byte *)CONCAT31(uVar27,bVar11);
        bVar9 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar11;
        puVar64 = (uint *)((int)puVar60 + (uint)CARRY1(bVar9,bVar11) + *(int *)pbVar16);
        pbVar16 = (byte *)CONCAT31(uVar27,bVar11);
        uStack_38 = puVar38;
        break;
      }
      *pcVar18 = *pcVar18 + (char)uVar70;
      *piVar17 = (int)(pbVar58 + *piVar17);
      puVar60 = (uint *)((int)puVar60 + 1);
      uVar70 = CONCAT44(CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar70 >> 0x28) +
                                          *(char *)((int)piVar17 + -0x33),
                                          (char)((ulonglong)uVar70 >> 0x20))),pcVar18);
      in_ES = *(undefined2 *)puVar38;
      puVar38 = (undefined4 *)((int)puVar38 + 4);
      pbVar16 = pbVar33;
code_r0x0040371e:
      puVar30 = (uint *)((ulonglong)uVar70 >> 0x20);
      pbVar24 = (byte *)uVar70;
      bVar11 = (byte)((ulonglong)uVar70 >> 0x28);
      pbVar24[0x6f] = pbVar24[0x6f] + bVar11;
      pbVar33 = (byte *)((uint)pbVar16 & 0xffffff00);
      *(char *)puVar30 = (char)*puVar30;
      bVar9 = (byte)uVar70;
      if ((char)*puVar30 != '\0') {
        *pbVar24 = *pbVar24 + bVar9;
        uVar22 = *puVar30;
        *puVar30 = (uint)(pbVar58 + *puVar30);
        piVar40 = (int *)((int)puVar38 + -4);
        *(uint **)((int)puVar38 + -4) = puVar60;
        if (CARRY4(uVar22,(uint)pbVar58)) {
          *pbVar24 = *pbVar24 + bVar9;
          *(undefined2 *)((int)puVar38 + -8) = in_ES;
          puVar64 = puVar30 + 0x1d028000;
          uVar22 = *puVar64;
          *(byte *)puVar64 = (byte)*puVar64 - bVar11;
          *(uint *)pbVar24 = (*(int *)pbVar24 - (int)pbVar24) - (uint)((byte)uVar22 < bVar11);
          *(byte *)puVar30 = (char)*puVar30 + bVar9;
          *pbVar58 = *pbVar58;
          uVar70 = CONCAT44(puVar30,CONCAT31((int3)((ulonglong)uVar70 >> 8),bVar9 + 0x2a));
          puVar39 = (undefined2 *)((int)puVar38 + -0xc);
          puVar38 = (undefined4 *)((int)puVar38 + -0xc);
          *puVar39 = in_DS;
          pbStack_30._0_2_ = in_ES;
          goto _ctor;
        }
        bVar67 = false;
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),*pbVar24);
        goto code_r0x004037a7;
      }
      bVar11 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar9;
      *(uint *)pbVar24 = (*(int *)pbVar24 - (int)pbVar24) - (uint)CARRY1(bVar11,bVar9);
      bVar9 = *pbVar33;
      bVar11 = (byte)((ulonglong)uVar70 >> 0x20);
      *pbVar33 = *pbVar33 + bVar11;
      if (CARRY1(bVar9,bVar11)) goto code_r0x0040375a;
    } while( true );
  }
  uVar70 = CONCAT44(puVar30,pbVar16);
  puVar60 = puVar64 + (uint)bVar68 * -2 + 1;
  out(*puVar64,(short)puVar30);
  bVar11 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar11;
  *pbVar33 = *pbVar33 + (char)pbVar62;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar11;
  *(byte **)(pbVar62 + -0x49) =
       (byte *)((int)puVar60 + (uint)CARRY1(bVar9,bVar11) + *(int *)(pbVar62 + -0x49));
  puVar38 = uStack_38;
  in_ES = pbStack_30._0_2_;
code_r0x0040375a:
  pbVar16 = (byte *)uVar70;
  *pbVar16 = *pbVar16 + (char)uVar70;
  bVar67 = CARRY1((byte)((uint)pbVar33 >> 8),*pbVar16);
  *(undefined2 *)((int)puVar38 + -4) = uVar65;
  iVar19 = CONCAT31(0x1f0a00,bVar67 + 'o') + *(int *)(pbVar62 + (int)pbVar58) +
           (uint)(0x90 < bVar67) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar70 >> 0x20);
  pcVar23 = (char *)(CONCAT31((int3)((uint)iVar19 >> 8),(char)iVar19 + -0x66) | *puVar63);
  bVar9 = *(byte *)((int)puVar63 + -0x46);
  pcVar18 = (char *)CONCAT22(0xd0a,(ushort)bVar9 << 8);
  *pcVar23 = *pcVar23 + (char)pcVar23;
  bVar11 = (byte)((ulonglong)uVar70 >> 0x20);
  puVar31 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar62[(int)pbVar58],bVar11));
  *pcVar18 = *pcVar18 + (char)pcVar23;
  *pbVar58 = *pbVar58 - bVar9;
  *puVar31 = *puVar31;
  pbVar16 = (byte *)(((uint)pcVar23 | 8) + 0x4490f9d8);
  bVar9 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  uVar22 = *puVar60;
  *(uint *)((int)puVar60 + (int)pbVar16) = *(uint *)((int)puVar60 + (int)pbVar16) ^ (uint)pcVar18;
  *pbVar16 = *pbVar16 | bVar9;
  piVar40 = (int *)0x2609fffc;
  bVar67 = false;
  uRam2609fffc = in_ES;
  *pbVar16 = *pbVar16 | bVar9;
  uVar70 = CONCAT44(CONCAT31((int3)((uint)puVar31 >> 8),bVar11 | (byte)uVar22),pbVar16);
code_r0x004037a7:
  while( true ) {
    pbVar16 = (byte *)((ulonglong)uVar70 >> 0x20);
    uVar65 = (undefined2)((ulonglong)uVar70 >> 0x20);
    out(*puVar60,uVar65);
    out(puVar60[(uint)bVar68 * -2 + 1],uVar65);
    puVar30 = (uint *)((int)puVar63 + (int)pbVar16);
    uVar22 = *puVar30;
    uVar5 = (uint)uVar70 + *puVar30;
    *puVar30 = uVar5 + bVar67;
    iVar19 = *piVar40 + *(int *)(pcVar18 + (int)pbVar16) +
             (uint)(CARRY4(uVar22,(uint)uVar70) || CARRY4(uVar5,(uint)bVar67));
    cVar8 = (char)iVar19 + '\t';
    pbVar24 = (byte *)CONCAT31((int3)((uint)iVar19 >> 8),cVar8);
    pcVar23 = (char *)((uint)bVar68 * -8 + 0x260a0004);
    out(uRam260a0000,uVar65);
    uVar65 = (undefined2)piVar40[1];
    *pbVar24 = *pbVar24 + cVar8;
    bVar11 = (byte)((uint)pcVar18 >> 8) | *pbVar16;
    *(undefined2 *)(piVar40 + 1) = in_DS;
    bVar9 = *pbVar24;
    pbVar24 = pbVar24 + (uint)CARRY1(bVar11,*pbVar24) + *(int *)pbVar24;
    *pbVar16 = *pbVar16 + 6;
    cVar10 = (char)pbVar62 - *pcVar23;
    pcVar18 = (char *)CONCAT22((short)((uint)pcVar18 >> 0x10),CONCAT11(bVar11 + bVar9 + *pbVar24,6))
    ;
    *pbVar24 = *pbVar24;
    *(undefined2 *)piVar40 = in_ES;
    uVar27 = (undefined3)((uint)pbVar24 >> 8);
    cVar8 = (char)pbVar24 - *pbVar24;
    piVar17 = (int *)CONCAT31(uVar27,cVar8);
    puVar60 = (uint *)(pcVar23 + *piVar17);
    bVar9 = cVar8 + (char)*piVar17;
    pcVar23 = (char *)CONCAT31(uVar27,bVar9);
    piVar41 = piVar40 + -1;
    piVar40[-1] = (int)pcVar18;
    *pcVar23 = *pcVar23 + bVar9;
    *pcVar23 = *pcVar23 + bVar9;
    *pcVar23 = *pcVar23 + bVar9;
    bVar67 = CARRY1(*pbVar16,bVar9);
    *pbVar16 = *pbVar16 + bVar9;
    if (bVar67) break;
    in_ES = (undefined2)piVar40[-1];
    pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),cVar10);
    uVar70 = CONCAT44(pbVar16,pcVar23);
  }
  *pcVar23 = *pcVar23 + bVar9;
  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((byte)((uint)pbVar62 >> 8) | bRam080a0056,cVar10));
  *pcVar23 = *pcVar23 + bVar9;
  bVar12 = bVar9 + 2;
  *pbVar33 = *pbVar33 - (char)((ulonglong)uVar70 >> 0x20);
  *(char *)CONCAT31(uVar27,bVar12) = *(char *)CONCAT31(uVar27,bVar12) + bVar12;
  uVar22 = *puVar60;
  uVar29 = (undefined3)((uint)pcVar18 >> 8);
  pbVar24 = (byte *)(CONCAT31(uVar29,(byte)uVar22) | 6);
  bVar11 = 9 < (bVar9 + 0x74 & 0xf) | in_AF;
  bVar13 = bVar9 + 0x74 + bVar11 * '\x06';
  bVar13 = bVar13 + (0x90 < (bVar13 & 0xf0) | 0x8d < bVar12 | bVar11 * (0xf9 < bVar13)) * '`';
  pbVar62 = (byte *)CONCAT31(uVar27,bVar13);
  bVar9 = *pbVar62;
  *pbVar62 = *pbVar62 + bVar13;
  if (!SCARRY1(bVar9,bVar13)) {
    *(byte *)puVar60 = (byte)*puVar60 + bVar13;
    puVar60 = (uint *)((int)puVar60 + *(int *)(pbVar16 + 0x33));
    *pbVar62 = *pbVar62 | bVar13;
    *(byte *)puVar60 = (byte)*puVar60 + bVar13;
    bVar9 = bVar13 + 0x72;
    piVar40[-2] = (int)pbVar33;
    *(byte *)CONCAT31(uVar27,bVar9) = *(byte *)CONCAT31(uVar27,bVar9) | bVar9;
    *(byte *)puVar60 = (byte)*puVar60 + bVar9;
    pbVar24 = (byte *)CONCAT31(uVar29,((byte)uVar22 | 6) + (byte)*puVar60);
    pcVar18 = (char *)CONCAT31(uVar27,bVar13 - 0x11);
    piVar41 = piVar40 + -3;
    piVar40[-3] = (int)pbVar24;
    *pcVar18 = *pcVar18 + (bVar13 - 0x11);
    pbVar62 = (byte *)CONCAT31(uVar27,bVar13 - 0xf);
    puVar63 = (uint *)((int)puVar63 + iRam080a0052);
    *pbVar62 = *pbVar62 + (bVar13 - 0xf);
  }
code_r0x00403825:
  pbVar59 = (byte *)0x80a0000;
  uVar27 = (undefined3)((uint)pbVar62 >> 8);
  cVar8 = (char)pbVar62 + '\x7f';
  pcVar18 = (char *)CONCAT31(uVar27,cVar8);
  *(byte **)((int)piVar41 + -4) = pbVar33;
  *pcVar18 = *pcVar18 + cVar8;
  iVar19 = CONCAT31(uVar27,(char)pbVar62 + -0x7f) + 0x547d;
  cVar8 = (char)iVar19;
  uVar27 = (undefined3)((uint)iVar19 >> 8);
  cVar10 = cVar8 + '*';
  pcVar18 = (char *)CONCAT31(uVar27,cVar10);
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | (byte)*puVar60);
  cVar34 = (char)pbVar33 - (byte)*puVar60;
  uVar66 = (undefined2)((uint)pbVar33 >> 0x10);
  cVar35 = (char)((uint)pbVar33 >> 8) +
           *(char *)(CONCAT31((int3)((uint)pbVar33 >> 8),cVar34) + 0x57);
  *pcVar18 = *pcVar18 + cVar10;
  bVar9 = cVar8 + 0x54U & *pbVar16;
  iVar19 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
  pcVar18 = (char *)CONCAT31(uVar27,bVar9 + 0x2a);
  *(undefined2 *)((int)piVar41 + -8) = in_DS;
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar34)) + 0x58);
  *pcVar18 = *pcVar18 + bVar9 + 0x2a;
  bVar12 = bVar9 + 0x54 & *pbVar16;
  iVar4 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar27,bVar12) = *(char *)CONCAT31(uVar27,bVar12) + bVar12;
  pcVar18 = (char *)CONCAT31(uVar27,bVar12 + 0x2a);
  pbVar62 = *(byte **)((int)piVar41 + -8);
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar34)) + 0x55);
  *pcVar18 = *pcVar18 + bVar12 + 0x2a;
  pcVar18 = (char *)CONCAT31(uVar27,bVar12 + 0x57);
  pbVar16 = pbVar16 + *(int *)pbVar62;
  *(undefined4 *)((int)piVar41 + -8) = 0x2a;
  cVar35 = cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,cVar34)) + 0x55);
  *pcVar18 = *pcVar18 + bVar12 + 0x57;
  cVar8 = bVar12 - 0x3a;
  pcVar18 = (char *)CONCAT31(uVar27,cVar8);
  *(undefined2 *)((int)piVar41 + -0xc) = uVar65;
  *pcVar18 = *pcVar18 + cVar8;
  bVar9 = *pbVar16;
  cVar10 = (char)pbVar24;
  *(undefined2 *)((int)piVar41 + -0x10) = in_DS;
  pbVar33 = (byte *)CONCAT22(uVar66,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar66,CONCAT11(cVar35,
                                                  cVar34)) + 0x59),cVar34));
  *pcVar18 = *pcVar18 + cVar8;
  bVar14 = bVar12 - 0x10 & *pbVar16;
  puVar63 = (uint *)((int)puVar63 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar4 + iVar19);
  *(char *)CONCAT31(uVar27,bVar14) = *(char *)CONCAT31(uVar27,bVar14) + bVar14;
  bVar14 = bVar14 + 0x2a;
  pbVar58 = (byte *)CONCAT31(uVar27,bVar14);
  puVar38 = (undefined4 *)((int)piVar41 + -0x14);
  *(undefined2 *)((int)piVar41 + -0x14) = in_DS;
  bVar12 = *(byte *)((int)puVar63 + 0x17);
  *pbVar58 = *pbVar58 + bVar14;
  bVar13 = *pbVar16;
  puVar43 = (undefined4 *)((int)piVar41 + -0x18);
  *(undefined2 *)((int)piVar41 + -0x18) = in_DS;
  bVar15 = *(byte *)((int)puVar63 + 0x1a);
  *pbVar58 = *pbVar58 + bVar14;
  pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar24 >> 8) | bVar9) + bVar12 | bVar13) +
                                      bVar15 | *pbVar16,cVar10));
  *pbVar33 = *pbVar33 + cVar34;
  *(byte *)((int)pbVar58 * 2) = *(byte *)((int)pbVar58 * 2) ^ bVar14;
  bVar9 = *pbVar58;
  *pbVar58 = *pbVar58 + bVar14;
  bVar12 = *pbVar58;
  *pbVar24 = *pbVar24 + (char)pbVar16;
  bVar9 = ((bVar14 - bVar12) - CARRY1(bVar9,bVar14)) + *pbVar16;
  pbVar58 = (byte *)CONCAT31(uVar27,bVar9);
  if ((POPCOUNT(bVar9) & 1U) != 0) {
    pbVar16 = *(byte **)((int)piVar41 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar58 = *pbVar58 + bVar9;
  cVar8 = (bVar9 + 0x6f) - (0x90 < bVar9);
  pbVar25 = (byte *)CONCAT31(uVar27,cVar8);
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + cVar10;
  if (SCARRY1(bVar9,cVar10) == (char)*pbVar16 < '\0') {
    cRam33100000 = cRam33100000 - cVar8;
    cVar8 = cVar8 + *pbVar16;
    pbVar58 = (byte *)CONCAT31(uVar27,cVar8);
    puVar38 = (undefined4 *)((int)piVar41 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar25 = *pbVar25 + (char)pbVar25;
code_r0x004038b0:
    uVar27 = (undefined3)((uint)pbVar25 >> 8);
    cVar8 = (char)pbVar25 + '\x02';
    pbVar58 = (byte *)CONCAT31(uVar27,cVar8);
    puVar38 = puVar43;
    if ((POPCOUNT(cVar8) & 1U) != 0) {
code_r0x00403908:
      puVar63 = (uint *)((int)puVar63 - *(int *)pbVar62);
      cVar8 = (char)pbVar58 + *pbVar16;
      pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar8);
code_r0x0040390c:
      cVar10 = (char)pbVar58;
      if ((POPCOUNT(cVar8) & 1U) == 0) goto code_r0x0040390e;
      *pbVar62 = *pbVar62 + cVar10;
      goto code_r0x00403962;
    }
    *pbVar58 = *pbVar58 + cVar8;
    puVar38 = (undefined4 *)((int)puVar43 + -4);
    piVar41 = (int *)((int)puVar43 + -4);
    *(byte **)((int)puVar43 + -4) = pbVar24;
    cVar8 = (char)pbVar25 + '.' + *pbVar16;
    pbVar58 = (byte *)CONCAT31(uVar27,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pbVar25 = pbVar16 + (int)pbVar58;
      *pbVar25 = *pbVar25 + cVar8;
      bVar9 = *pbVar25;
      goto code_r0x00403912;
    }
    *pbVar58 = *pbVar58 + cVar8;
    bVar9 = cVar8 + 2;
    pbVar58 = (byte *)CONCAT31(uVar27,bVar9);
    puVar38 = (undefined4 *)((int)puVar43 + -4);
    if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403916;
    *pbVar58 = *pbVar58 + bVar9;
    cVar10 = cVar8 + 'q';
    piVar17 = (int *)CONCAT31(uVar27,cVar10);
    *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0x90 < bVar9);
    bVar9 = *pbVar33;
    bVar12 = (byte)((uint)pbVar24 >> 8);
    *pbVar33 = *pbVar33 + bVar12;
    if (!CARRY1(bVar9,bVar12)) {
      out(*(undefined4 *)pbVar62,(short)pbVar16);
      bVar9 = (cVar10 - (char)*piVar17) - CARRY1(bVar9,bVar12);
      *pbVar16 = *pbVar16 + (char)pbVar24;
      cVar8 = bVar9 - *(byte *)CONCAT31(uVar27,bVar9);
      puVar60 = (uint *)(pbVar62 +
                        ((((uint)bVar68 * -8 + 4) - *(int *)CONCAT31(uVar27,cVar8)) -
                        (uint)(bVar9 < *(byte *)CONCAT31(uVar27,bVar9))));
      pbVar62 = (byte *)CONCAT31(uVar27,cVar8);
      goto code_r0x00403825;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar10;
    uVar66 = (undefined2)((uint)pbVar33 >> 0x10);
    bVar9 = (byte)((uint)pbVar33 >> 8) | bRam080a0056;
    *(char *)piVar17 = (char)*piVar17 + cVar10;
    pcVar18 = (char *)CONCAT31(uVar27,cVar8 + 's');
    pbVar33 = (byte *)CONCAT22(uVar66,CONCAT11(bVar9 + *(char *)(CONCAT22(uVar66,CONCAT11(bVar9,(
                                                  char)pbVar33)) + 0x56),(char)pbVar33));
    *pcVar18 = *pcVar18 + cVar8 + 's';
    bVar9 = cVar8 - 0xf;
    pbVar16 = *(byte **)((int)puVar43 + -4);
    *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
    bVar12 = cVar8 + 0x1e;
    pbVar25 = (byte *)CONCAT31(uVar27,bVar12);
    *(byte **)(pbVar62 + (int)puVar63 * 8) =
         pbVar16 + (uint)(0xd2 < bVar9) + *(int *)(pbVar62 + (int)puVar63 * 8);
    puVar38 = (undefined4 *)((int)puVar43 + -4);
    puVar45 = (undefined4 *)((int)puVar43 + -4);
    *(undefined2 *)((int)puVar43 + -4) = in_ES;
    in_ES = *(undefined2 *)pbVar25;
    bVar9 = *pbVar62;
    *pbVar62 = *pbVar62 + bVar12;
    if (CARRY1(bVar9,bVar12)) {
      *pbVar25 = *pbVar25 + bVar12;
      pbVar58 = (byte *)CONCAT31(uVar27,bVar12 | pbVar25[0x400005a]);
      if ('\0' < (char)(bVar12 | pbVar25[0x400005a])) {
code_r0x004038f6:
        bVar9 = (byte)pbVar58;
        *pbVar58 = *pbVar58 + bVar9;
        uVar27 = (undefined3)((uint)pbVar58 >> 8);
        cVar8 = ((bVar9 + 0x28) - *(char *)CONCAT31(uVar27,bVar9 + 0x28)) - (0xd7 < bVar9);
        pbVar58 = (byte *)CONCAT31(uVar27,cVar8);
        bVar9 = *pbVar33;
        bVar12 = (byte)((uint)pbVar24 >> 8);
        *pbVar33 = *pbVar33 + bVar12;
        if (CARRY1(bVar9,bVar12)) {
          *pbVar58 = *pbVar58 + cVar8;
          pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                     CONCAT11(bVar12 | *pbVar58,(char)pbVar24));
          *pbVar62 = *pbVar62 + cVar8;
          goto code_r0x00403908;
        }
        pbVar25 = pbVar58 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar27 = (undefined3)((uint)pbVar58 >> 8);
      bVar12 = (char)pbVar58 + 0x6f;
      bVar9 = *(byte *)CONCAT31(uVar27,bVar12);
      *pbVar16 = *pbVar16 + (char)pbVar24;
      pbVar58 = (byte *)CONCAT31(uVar27,(bVar12 & bVar9) + *pbVar62);
      *pbVar24 = *pbVar24 - (char)((uint)pbVar16 >> 8);
      puVar50 = puVar45;
      goto code_r0x0040395a;
    }
    puVar42 = (undefined4 *)((int)puVar43 + -8);
    puVar43 = (undefined4 *)((int)puVar43 + -8);
    *puVar42 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar17 = (char)*piVar17 + bVar9;
  puVar60 = puVar64;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar58 = *pbVar58 + cVar10;
  bVar9 = cVar10 + 2;
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar9);
code_r0x00403912:
  bVar67 = (POPCOUNT(bVar9) & 1U) == 0;
  puVar50 = puVar38;
  if (!bVar67) goto code_r0x00403967;
  *pbVar58 = *pbVar58 + (char)pbVar58;
code_r0x00403916:
  bVar15 = (char)pbVar58 + 0x6f;
  pbVar25 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar58 >> 8),bVar15);
  bVar9 = *pbVar25;
  *pbVar25 = *pbVar25 + bVar15;
  bVar12 = *pbVar25;
  bVar13 = *pbVar25;
  puVar50 = (undefined4 *)((int)puVar38 + -4);
  *(undefined2 *)((int)puVar38 + -4) = in_ES;
  if (bVar13 == 0 || SCARRY1(bVar9,bVar15) != (char)bVar12 < '\0') goto code_r0x00403979;
  *pbVar25 = *pbVar25 + bVar15;
  pbVar25 = (byte *)CONCAT31((int3)(char)((uint)pbVar58 >> 8),(char)pbVar58 + -100);
  *(byte **)(pbVar62 + (int)puVar63 * 8) =
       pbVar16 + (uint)(0xd2 < bVar15) + *(int *)(pbVar62 + (int)puVar63 * 8);
  puVar44 = (undefined2 *)((int)puVar38 + -8);
  puVar38 = (undefined4 *)((int)puVar38 + -8);
  *puVar44 = in_ES;
code_r0x00403926:
  puVar43 = puVar38 + 1;
  puVar50 = puVar38 + 1;
  puVar45 = puVar38 + 1;
  *(undefined4 *)pbVar25 = *puVar38;
  bVar9 = *pbVar62;
  bVar12 = (byte)pbVar25;
  *pbVar62 = *pbVar62 + bVar12;
  if (CARRY1(bVar9,bVar12)) {
    *pbVar25 = *pbVar25 + bVar12;
    uVar27 = (undefined3)((uint)pbVar25 >> 8);
    bVar12 = bVar12 | pbVar25[0x400005b];
    pbVar58 = (byte *)CONCAT31(uVar27,bVar12);
    pbVar25 = pbVar62;
    if ((char)bVar12 < '\x01') goto code_r0x00403991;
    *pbVar58 = *pbVar58 + bVar12;
    cVar8 = bVar12 + 0x28;
    pbVar58 = (byte *)CONCAT31(uVar27,cVar8);
    *(byte **)pbVar58 = pbVar58 + (uint)(0xd7 < bVar12) + *(int *)pbVar58;
    bVar9 = *pbVar33;
    bVar12 = (byte)((uint)pbVar24 >> 8);
    *pbVar33 = *pbVar33 + bVar12;
    if (CARRY1(bVar9,bVar12)) {
      *pbVar58 = *pbVar58 + cVar8;
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11(bVar12 | *pbVar58,(char)pbVar24));
      *pbVar62 = *pbVar62 + cVar8;
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                 CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x55],(char)pbVar33))
      ;
      *pbVar58 = *pbVar58 + cVar8;
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
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar24;
  pbVar33 = (byte *)((uint)pbVar33 | (uint)pbVar62);
  cVar8 = (char)pbVar58 + '\x02';
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar8);
  bVar67 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403967:
  if (!bVar67) goto code_r0x004039be;
  *pbVar58 = *pbVar58 + (char)pbVar58;
  uVar27 = (undefined3)((uint)pbVar58 >> 8);
  bVar9 = (char)pbVar58 + 0x6f;
  bVar9 = bVar9 & *(byte *)CONCAT31(uVar27,bVar9);
  pbVar25 = (byte *)CONCAT31(uVar27,bVar9);
  *pbVar16 = *pbVar16 + (char)pbVar24;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar9;
code_r0x00403979:
  do {
    bVar9 = (char)pbVar25 - (byte)*puVar63;
    bVar67 = bVar9 < *pbVar24;
    pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar9 - *pbVar24);
    do {
      cVar8 = (char)pbVar58;
      *pbVar58 = *pbVar58 + cVar8 + bVar67;
      *pbVar58 = *pbVar58 + cVar8;
      *pbVar24 = *pbVar24 + (char)pbVar16;
      pbVar24[0x101c00aa] = pbVar24[0x101c00aa] + (char)pbVar33;
      *pbVar58 = *pbVar58 + cVar8;
      *(byte **)pbVar62 = pbVar33 + *(int *)pbVar62;
      bVar9 = (byte)((uint)pbVar24 >> 8);
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11(bVar9 + *pbVar58,(char)pbVar24));
      pbVar58 = pbVar58 + (uint)CARRY1(bVar9,*pbVar58) + *(int *)pbVar58;
      pbVar25 = pbVar62;
code_r0x00403991:
      cVar8 = (char)pbVar24;
      *pbVar16 = *pbVar16 + cVar8;
      cVar10 = (char)pbVar33 - pbVar25[2];
      pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar10);
      pbVar62 = pbVar25;
      if ((POPCOUNT(cVar10) & 1U) != 0) goto code_r0x0040395a;
      *pbVar58 = *pbVar58 + (byte)pbVar58;
      uVar28 = (uint3)((uint)pbVar58 >> 8);
      bVar9 = (byte)pbVar58 | *pbVar33;
      piVar17 = (int *)CONCAT31(uVar28,bVar9);
      bVar12 = (byte)((uint)pbVar24 >> 8);
      bVar13 = (byte)pbVar16;
      if (bVar9 == 0) {
        *(char *)piVar17 = (char)*piVar17;
        puVar50 = (undefined4 *)((int)puVar50 + -*(int *)(pbVar59 + 0x1b000007));
        pbVar62 = pbVar25 + (uint)bVar68 * -8 + 4;
        out(*(undefined4 *)pbVar25,(short)pbVar16);
        pbVar58 = (byte *)((uint)uVar28 << 8);
        *pbVar16 = *pbVar16 + cVar8;
        pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar13 - *pbVar33);
        *pbVar33 = *pbVar33;
        *pbVar16 = *pbVar16 + bVar12;
        *pbVar58 = *pbVar58;
        *pbVar33 = *pbVar33 + cVar10;
        *pbVar58 = *pbVar58;
        *(byte **)(pbVar33 + -0x3d) = pbVar62 + *(int *)(pbVar33 + -0x3d);
        break;
      }
      pbVar59 = pbVar59 + -puVar63[9];
      *(byte *)piVar17 = (char)*piVar17 + bVar9;
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),CONCAT11(bVar12 | *pbVar16,cVar8));
      pbVar62 = pbVar25 + *piVar17;
      pcVar18 = (char *)((int)piVar17 + *piVar17);
      bVar12 = (char)pcVar18 - *pcVar18;
      pbVar58 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar12);
      bVar9 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar12;
      pbVar58 = pbVar58 + (-(uint)CARRY1(bVar9,bVar12) - *(int *)pbVar58);
      bVar67 = CARRY1(*pbVar24,bVar13);
      *pbVar24 = *pbVar24 + bVar13;
    } while (!bVar67);
    *pbVar58 = *pbVar58 + (char)pbVar58;
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | *pbVar16);
code_r0x004039be:
    puVar38 = (undefined4 *)((int)puVar50 + -4);
    puVar47 = (undefined1 *)((int)puVar50 + -4);
    *(undefined2 *)((int)puVar50 + -4) = in_ES;
    puVar63 = (uint *)((int)puVar63 + *(int *)(pbVar59 + -0x3c));
    *pbVar58 = *pbVar58 + (byte)pbVar58;
    uVar27 = (undefined3)((uint)pbVar58 >> 8);
    bVar9 = (byte)pbVar58 | *pbVar16;
    pcVar18 = (char *)CONCAT31(uVar27,bVar9);
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      cVar8 = *pcVar18;
      *pcVar18 = *pcVar18 + bVar9;
      cVar10 = *pcVar18;
      puVar31 = (undefined1 *)((int)puVar50 + -4);
      if (!SCARRY1(cVar8,bVar9)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar38 = (undefined4 *)puVar31;
      cVar8 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar8;
      uVar27 = (undefined3)((uint)pcVar18 >> 8);
      bVar9 = cVar8 + 2;
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        pcVar18 = (char *)CONCAT31(uVar27,bVar9 + *pbVar16);
        pbVar58 = pbVar62;
        if ((POPCOUNT(bVar9 + *pbVar16) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar62 + (int)puVar63 * 8) =
             pbVar16 + (uint)(0xd2 < (byte)pcVar18) + *(int *)(pbVar62 + (int)puVar63 * 8);
        puVar49 = (undefined2 *)((int)puVar38 + -4);
        puVar38 = (undefined4 *)((int)puVar38 + -4);
        *puVar49 = in_ES;
        pbVar25 = pbVar59;
        pbVar26 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),(byte)pcVar18 + 0x2d);
code_r0x00403ad8:
        pbVar59 = pbVar26;
        bVar9 = *pbVar25;
        bVar12 = (byte)pbVar25;
        *pbVar25 = *pbVar25 + bVar12;
        puVar50 = (undefined4 *)((int)puVar38 + -4);
        *(undefined2 *)((int)puVar38 + -4) = in_ES;
        puVar31 = (undefined1 *)((int)puVar38 + -4);
        if (CARRY1(bVar9,bVar12)) {
          *pbVar25 = *pbVar25 + bVar12;
          bVar12 = bVar12 | pbVar25[0x400005d];
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar12);
          pbVar58 = pbVar62;
          if ((char)bVar12 < '\x01') {
            *pbVar25 = *pbVar25 + bVar12;
            pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar24 >> 8) | *pbVar16,(char)pbVar24)
                                      );
            pbVar58 = *(byte **)((int)puVar38 + -4);
            pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                       CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[-0x39],
                                                (char)pbVar33));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar25 = *pbVar25 + (char)pbVar25;
          cVar8 = (char)pbVar25 + '(';
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
          *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
          bVar9 = *pbVar33;
          bVar12 = (byte)((uint)pbVar24 >> 8);
          *pbVar33 = *pbVar33 + bVar12;
          pbVar62 = pbVar58;
          if (!CARRY1(bVar9,bVar12)) {
            puVar38 = (undefined4 *)((int)puVar50 + -4);
            *(undefined2 *)((int)puVar50 + -4) = in_ES;
            goto code_r0x00403b13;
          }
          *pbVar25 = *pbVar25 + cVar8;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
      piVar17 = (int *)CONCAT31(uVar27,cVar8 + '*');
      *piVar17 = (*piVar17 - (int)piVar17) - (uint)(0xd7 < bVar9);
      bVar9 = *pbVar16;
      bVar15 = (byte)pbVar24;
      *pbVar16 = *pbVar16 + bVar15;
      out(*(undefined4 *)pbVar62,(short)pbVar16);
      bVar13 = ((cVar8 + '*') - (char)*piVar17) - CARRY1(bVar9,bVar15);
      pbVar58 = (byte *)CONCAT31(uVar27,bVar13);
      *pbVar16 = *pbVar16 + bVar15;
      uVar66 = (undefined2)((uint)pbVar33 >> 0x10);
      uVar32 = SUB41(pbVar33,0);
      cVar8 = (char)((uint)pbVar33 >> 8) - pbVar62[(uint)bVar68 * -8 + 0x1f];
      pbVar33 = (byte *)CONCAT22(uVar66,CONCAT11(cVar8,uVar32));
      *pbVar58 = *pbVar58 + bVar13;
      bVar12 = *pbVar16;
      bVar9 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar13;
      pbVar62 = pbVar62 + ((((uint)bVar68 * -8 + 4) - *(int *)pbVar58) - (uint)CARRY1(bVar9,bVar13))
      ;
      pbVar58 = (byte *)CONCAT31(uVar27,bVar13);
      pbVar24 = (byte *)(CONCAT22((short)((uint)pbVar24 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar24 >> 8) | bVar12,bVar15)) + -1);
      bVar9 = *pbVar58;
      *pbVar58 = *pbVar58 + bVar13;
      bVar9 = (bVar13 - *pbVar58) - CARRY1(bVar9,bVar13);
      *pbVar24 = *pbVar24 + (char)pbVar16;
      bVar67 = CARRY1(bVar9,*pbVar16);
      bVar9 = bVar9 + *pbVar16;
      pbVar58 = (byte *)CONCAT31(uVar27,bVar9);
      if ((POPCOUNT(bVar9) & 1U) == 0) {
        *pbVar58 = *pbVar58 + bVar9;
        cVar10 = (bVar9 + 0x6f) - (0x90 < bVar9);
        pbVar25 = (byte *)CONCAT31(uVar27,cVar10);
        bVar9 = *pbVar16;
        *pbVar16 = *pbVar16 + (char)pbVar24;
        if (SCARRY1(bVar9,(char)pbVar24) == (char)*pbVar16 < '\0') {
code_r0x00403aaf:
          cVar8 = (char)pbVar25 + '(';
          pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
          *(byte **)pbVar25 = pbVar25 + *(int *)pbVar25;
          bVar9 = *pbVar33;
          bVar12 = (byte)((uint)pbVar24 >> 8);
          *pbVar33 = *pbVar33 + bVar12;
          pbVar26 = pbVar59;
          if (!CARRY1(bVar9,bVar12)) goto code_r0x00403ad8;
          *pbVar25 = *pbVar25 + cVar8;
          pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                     CONCAT11(bVar12 | *pbVar33,(char)pbVar24));
          if ((POPCOUNT(*pbVar16 - cVar8) & 1U) != 0) {
            *pbVar62 = *pbVar62 + cVar8;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar25 = *pbVar25 + cVar10;
          pcVar18 = (char *)CONCAT31(uVar27,cVar10 + '\x02');
          bVar12 = cVar8 + pbVar33[0x52];
          pbVar33 = (byte *)CONCAT22(uVar66,CONCAT11(bVar12,uVar32));
          *pcVar18 = *pcVar18 + cVar10 + '\x02';
          bVar9 = cVar10 + 4;
          pbVar25 = (byte *)CONCAT31(uVar27,bVar9);
          if ((POPCOUNT(bVar9) & 1U) == 0) {
            *pbVar25 = *pbVar25 + bVar9;
            cVar8 = (cVar10 + 's') - (0x90 < bVar9);
            pcVar18 = (char *)CONCAT31(uVar27,cVar8);
            bVar9 = (byte)((uint)pbVar24 >> 8);
            bVar67 = CARRY1(*pbVar33,bVar9);
            *pbVar33 = *pbVar33 + bVar9;
            pbVar58 = pbVar62;
            if (bVar67) {
              *pcVar18 = *pcVar18 + cVar8;
              pbVar33 = (byte *)CONCAT22(uVar66,CONCAT11(bVar12 | pbVar59[0x5c],uVar32));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar63 = (uint *)((int)puVar63 - *(int *)pbVar25);
          pbVar33 = (byte *)CONCAT22(uVar66,CONCAT11(bVar12 + pbVar33[0x52],uVar32));
        }
        *pbVar25 = *pbVar25 + (char)pbVar25;
        cVar8 = (char)pbVar25 + '\x02';
        pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
        bVar67 = (POPCOUNT(cVar8) & 1U) == 0;
        if (!bVar67) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar9 = (byte)pbVar58;
        *pbVar58 = *pbVar58 + bVar9;
        cVar8 = (bVar9 + 0x6f) - (0x90 < bVar9);
        pcVar18 = (char *)CONCAT31((int3)((uint)pbVar58 >> 8),cVar8);
        bVar9 = *pbVar33;
        cVar10 = (char)((uint)pbVar24 >> 8);
        *pbVar33 = *pbVar33 + cVar10;
        if (*pbVar33 == 0 || SCARRY1(bVar9,cVar10) != (char)*pbVar33 < '\0') goto code_r0x00403b2c;
        *pcVar18 = *pcVar18 + cVar8;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar67) {
        pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                   CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x53],(char)pbVar33
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar58 = *pbVar58 + (byte)pbVar58;
      bVar9 = (byte)pbVar58 | pbVar58[0x400005e];
      pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar58 >> 8),bVar9);
      if ('\0' < (char)bVar9) {
        *pbVar25 = *pbVar25 + bVar9;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar18 = *pcVar18 + bVar9;
    *pbVar62 = *pbVar62 + 1;
    uVar3 = *(undefined6 *)CONCAT31(uVar27,bVar9 + 6);
    pbVar25 = (byte *)uVar3;
    bVar9 = *pbVar16;
    bVar12 = (byte)pbVar24;
    *pbVar16 = *pbVar16 + bVar12;
    if (CARRY1(bVar9,bVar12)) {
      *pbVar25 = *pbVar25 + (char)uVar3;
      bVar13 = (byte)((uint)pbVar24 >> 8) | *pbVar25;
      uVar66 = CONCAT11(bVar13,bVar12);
      pbVar25 = pbVar25 + -*(int *)pbVar25;
      bVar9 = *pbVar33;
      *pbVar33 = *pbVar33 + bVar13;
      if (CARRY1(bVar9,bVar13)) {
        cVar10 = (char)pbVar25;
        *pbVar25 = *pbVar25 + cVar10;
        bVar9 = *pbVar16;
        pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                   CONCAT11((char)((uint)pbVar16 >> 8) - pbVar33[-0x3a],
                                            (char)pbVar16));
        *pbVar25 = *pbVar25 + cVar10;
        uVar37 = (undefined2)((uint)pbVar33 >> 0x10);
        bVar36 = (byte)((uint)pbVar33 >> 8) | pbVar16[0x32];
        pcVar18 = (char *)CONCAT22(uVar37,CONCAT11(bVar36,(char)pbVar33));
        cVar8 = *pcVar18;
        puVar47 = (undefined1 *)((int)puVar50 + -8);
        *(undefined2 *)((int)puVar50 + -8) = in_CS;
        cVar8 = cVar10 + cVar8 + '-';
        pbVar25 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
        *pbVar25 = *pbVar25;
        *(undefined2 *)((int)puVar50 + -0xc) = in_ES;
        bVar15 = *pbVar16;
        uVar65 = *(undefined2 *)((int)puVar50 + -0xc);
        cVar10 = (char)pbVar33 - *pbVar62;
        bVar14 = *(byte *)((int)puVar63 + 0x17);
        *pbVar25 = *pbVar25 + cVar8;
        uVar66 = CONCAT11((bVar13 | bVar9) + bVar14 | *pbVar16,bVar12 - bVar15);
        pbVar33 = (byte *)CONCAT22(uVar37,CONCAT11(bVar36 + *(char *)(CONCAT31((int3)((uint)pcVar18
                                                                                     >> 8),cVar10) +
                                                                     0x4e),cVar10));
        *pbVar25 = *pbVar25 + cVar8;
      }
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),uVar66);
      bVar9 = (byte)pbVar25;
      uVar27 = (undefined3)((uint)pbVar25 >> 8);
      pcVar18 = (char *)CONCAT31(uVar27,bVar9 + 0x28);
      *pcVar18 = (*pcVar18 - (bVar9 + 0x28)) - (0xd7 < bVar9);
      *pbVar16 = *pbVar16 + (char)uVar66;
      bVar12 = bVar9 + 0x1b;
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                 CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x4f],(char)pbVar33))
      ;
      *(char *)CONCAT31(uVar27,bVar12) = *(char *)CONCAT31(uVar27,bVar12) + bVar12;
      pcVar23 = (char *)CONCAT31(uVar27,bVar9 + 0x43);
      *pcVar23 = (*pcVar23 - (bVar9 + 0x43)) - (0xd7 < bVar12);
      *pbVar16 = *pbVar16 + (char)uVar66;
      pcVar18 = pcVar23 + -0x6b721c;
      pcVar23 = pcVar23 + -0x6b721a;
      *pcVar23 = *pcVar23 + (char)((uint)pbVar16 >> 8);
      cVar10 = *pcVar23;
      puVar38 = (undefined4 *)puVar47;
code_r0x00403a22:
      puVar31 = (undefined1 *)puVar38;
      if ((POPCOUNT(cVar10) & 1U) == 0) goto code_r0x00403a24;
      bVar9 = *pbVar16;
      *pbVar16 = *pbVar16 + (char)pbVar24;
      if (SCARRY1(bVar9,(char)pbVar24) == (char)*pbVar16 < '\0') {
        pbVar25 = pbVar59;
        pbVar26 = (byte *)(pcVar18 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar18 = *pcVar18 + (char)pcVar18;
      pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x02');
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                 CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x54],(char)pbVar33))
      ;
      pbVar58 = pbVar62;
code_r0x00403a7d:
      cVar8 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar8;
      uVar27 = (undefined3)((uint)pcVar18 >> 8);
      cVar10 = cVar8 + '-';
      pbVar26 = (byte *)CONCAT31(uVar27,cVar10);
      pbVar25 = pbVar59;
      pbVar62 = pbVar58;
      if ((POPCOUNT(cVar10 - *pbVar16) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar26 = *pbVar26 + cVar10;
      bVar9 = cVar8 + 0x2f;
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        bVar9 = *pbVar16;
        *pbVar16 = *pbVar16 + (byte)pbVar24;
        *pbVar59 = *pbVar59 - CARRY1(bVar9,(byte)pbVar24);
        pbVar25 = (byte *)CONCAT31(uVar27,cVar8 + -0x53);
        pbVar59 = (byte *)*puVar38;
        puVar50 = puVar38 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
      bVar67 = 0x90 < bVar9;
      pcVar18 = (char *)CONCAT31(uVar27,cVar8 + -0x62);
code_r0x00403a8f:
      uVar27 = (undefined3)((uint)pcVar18 >> 8);
      bVar12 = (char)pcVar18 - bVar67;
      pbVar25 = (byte *)CONCAT31(uVar27,bVar12);
      bVar9 = *pbVar33;
      cVar8 = (char)((uint)pbVar24 >> 8);
      *pbVar33 = *pbVar33 + cVar8;
      puVar50 = puVar38;
      pbVar62 = pbVar58;
      if (*pbVar33 != 0 && SCARRY1(bVar9,cVar8) == (char)*pbVar33 < '\0') {
        *pbVar25 = *pbVar25 + bVar12;
        pbVar62 = (byte *)CONCAT31(uVar27,bVar12 + 0x2d);
        *(byte **)(pbVar58 + (int)puVar63 * 8) =
             pbVar16 + (uint)(0xd2 < bVar12) + *(int *)(pbVar58 + (int)puVar63 * 8);
        *(undefined2 *)((int)puVar38 + -4) = in_ES;
        bVar67 = CARRY1(*pbVar58,(byte)pbVar58);
        *pbVar58 = *pbVar58 + (byte)pbVar58;
        puVar48 = (undefined2 *)((int)puVar38 + -8);
        puVar38 = (undefined4 *)((int)puVar38 + -8);
        *puVar48 = in_ES;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar24 >> 8) | *pbVar25,(char)pbVar24));
      *pbVar62 = *pbVar62 + (char)pbVar25;
      puVar31 = (undefined1 *)puVar50;
code_r0x00403afc:
      puVar38 = (undefined4 *)puVar31;
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                 CONCAT11((char)((uint)pbVar33 >> 8) + pbVar33[0x55],(char)pbVar33))
      ;
      *pbVar25 = *pbVar25 + (char)pbVar25;
      uVar27 = (undefined3)((uint)pbVar25 >> 8);
      bVar12 = (char)pbVar25 + 0x6f;
      bVar9 = *(byte *)CONCAT31(uVar27,bVar12);
      *pbVar16 = *pbVar16 + (char)pbVar24;
      pbVar25 = (byte *)CONCAT31(uVar27,(bVar12 & bVar9) + *pbVar62);
      *pbVar24 = *pbVar24 - (char)((uint)pbVar16 >> 8);
      break;
    }
    uVar65 = *(undefined2 *)((int)puVar50 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar25 = *pbVar25 + (char)pbVar25;
  puVar51 = (undefined2 *)((int)puVar38 + -4);
  puVar38 = (undefined4 *)((int)puVar38 + -4);
  *puVar51 = in_ES;
  pbVar16[0x16060000] = pbVar16[0x16060000] - (char)pbVar24;
  pbVar33 = (byte *)((uint)pbVar33 | (uint)pbVar62);
  cVar8 = (char)pbVar25 + '\x02';
  pbVar58 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),cVar8);
  bVar67 = (POPCOUNT(cVar8) & 1U) == 0;
code_r0x00403b18:
  bVar9 = (byte)pbVar58;
  uVar27 = (undefined3)((uint)pbVar58 >> 8);
  if (!bVar67) {
    *pbVar16 = *pbVar16 + (char)pbVar24;
    pbVar25 = (byte *)CONCAT31(uVar27,bVar9 | *pbVar62);
code_r0x00403b73:
    pbVar58 = (byte *)((int)puVar63 + *(int *)(pbVar59 + -0x37));
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    uVar27 = (undefined3)((uint)pbVar25 >> 8);
    bVar9 = (byte)pbVar25 | *pbVar16;
    pcVar18 = (char *)CONCAT31(uVar27,bVar9);
    uVar70 = CONCAT44(pbVar16,pcVar18);
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *pcVar18 = *pcVar18 + bVar9;
      *pbVar62 = *pbVar62 + 1;
      return (byte *)CONCAT31(uVar27,bVar9 + 6);
    }
    bVar9 = *pbVar62;
    *pbVar62 = *pbVar62 + 1;
    pcVar2 = (code *)swi(4);
    if (SCARRY1(bVar9,'\x01')) {
      uVar70 = (*pcVar2)();
      pbVar24 = extraout_ECX_00;
    }
    pbVar16 = (byte *)uVar70;
    *pbVar16 = *pbVar16 + (char)uVar70;
    cVar10 = (char)((ulonglong)uVar70 >> 0x20);
    puVar63 = (uint *)CONCAT22((short)((ulonglong)uVar70 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar70 >> 0x28) | pbVar33[0x2f],cVar10));
    *pbVar16 = *pbVar16 + (char)uVar70;
    cVar8 = (char)pbVar24;
    bVar13 = (byte)((uint)pbVar24 >> 8) | *pbVar16;
    pbVar16 = pbVar16 + *(int *)pbVar16;
    bVar9 = *pbVar33;
    *pbVar33 = *pbVar33 + bVar13;
    bVar12 = (byte)pbVar16;
    if (CARRY1(bVar9,bVar13)) {
      *pbVar16 = *pbVar16 + bVar12;
      bVar13 = bVar13 | (byte)*puVar63;
      *pbVar33 = *pbVar33 - cVar10;
      *pbVar16 = *pbVar16 + bVar12;
      uVar27 = (undefined3)((uint)pbVar16 >> 8);
      bVar12 = bVar12 | (byte)*puVar63;
      puVar30 = (uint *)CONCAT31(uVar27,bVar12);
      bVar67 = CARRY4((uint)pbVar59,*puVar30);
      bVar69 = SCARRY4((int)pbVar59,*puVar30);
      pbVar59 = pbVar59 + *puVar30;
      *(uint *)((int)puVar38 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar69 * 0x800 | (uint)bVar68 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar59 < 0) * 0x80 |
           (uint)(pbVar59 == (byte *)0x0) * 0x40 | (uint)(bVar11 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar59 & 0xff) & 1U) == 0) * 4 | (uint)bVar67 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar30 = (char)*puVar30 + bVar12;
      *(undefined2 *)((int)puVar38 + -8) = in_ES;
      cVar10 = (char)pbVar33 - *pbVar62;
      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                 CONCAT11((char)((uint)pbVar33 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar33 >> 8),cVar10) +
                                                   0x5f),cVar10));
      *(byte *)puVar30 = (char)*puVar30 + bVar12;
      bVar9 = bVar12 + 0x2a & (byte)*puVar63;
      pbVar58 = pbVar58 + *(int *)(pbVar59 + 0x5f);
      *(char *)CONCAT31(uVar27,bVar9) = *(char *)CONCAT31(uVar27,bVar9) + bVar9;
      pbVar16 = (byte *)CONCAT31(uVar27,bVar9 + 0x2a);
      *(byte *)puVar63 = (byte)*puVar63 + 0x28;
      *pbVar16 = *pbVar16 + bVar9 + 0x2a;
      puVar54 = (undefined2 *)((int)puVar38 + -0xc);
      puVar38 = (undefined4 *)((int)puVar38 + -0xc);
      *puVar54 = in_ES;
    }
    else {
      *pbVar62 = *pbVar62 + bVar12;
    }
    pcVar18 = (char *)CONCAT22((short)((uint)pbVar24 >> 0x10),CONCAT11(bVar13,cVar8));
    *pbVar59 = *pbVar59 - bVar13;
    *(byte *)puVar63 = (byte)*puVar63 + cVar8;
    bVar9 = (byte)pbVar16 - 0xb;
    pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar9);
    if (10 < (byte)pbVar16) {
      *pbVar24 = *pbVar24 | bVar9;
      return pbVar24;
    }
    *(byte *)puVar63 = (byte)*puVar63 + cVar8;
    do {
      *(undefined2 *)((int)puVar38 + -4) = in_ES;
      bVar9 = pbVar33[-0x23];
      bVar12 = (byte)pbVar24;
      *pbVar24 = *pbVar24 + bVar12;
      bVar11 = pbVar59[-0x22];
      *pbVar24 = *pbVar24 + bVar12;
      uVar27 = (undefined3)((uint)pbVar24 >> 8);
      bVar12 = bVar12 | *pbVar62;
      pbVar16 = (byte *)CONCAT31(uVar27,bVar12);
      cVar10 = (char)pbVar33 - *pbVar62;
      pbVar33 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar33 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar33 >> 8) + bVar9 |
                                                          bVar11,(char)pbVar33)) >> 8),cVar10);
      cVar8 = (char)pcVar18;
      pcVar18 = (char *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                                 CONCAT11((char)((uint)pcVar18 >> 8) + *pbVar16,cVar8));
      *(byte *)puVar63 = (byte)*puVar63 + cVar8;
      bVar11 = bVar12 - *pbVar16;
      pbVar24 = (byte *)CONCAT31(uVar27,bVar11);
      pbVar62 = pbVar62 + (-(uint)(bVar12 < *pbVar16) - *(int *)pbVar24);
      in_ES = *(undefined2 *)((int)puVar38 + -4);
      puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),(char)puVar63 * '\x02');
      *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
      *pbVar58 = *pbVar58 + cVar10;
      bVar9 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar11;
      *puVar63 = (uint)(pbVar24 + (uint)CARRY1(bVar9,bVar11) + *puVar63);
    } while ((POPCOUNT(*puVar63 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar24 = *pbVar24 + (char)pbVar24;
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),(byte)pcVar18 | pbVar24[(int)pcVar18]);
    puVar56 = (undefined2 *)((int)puVar38 + -4);
    *(undefined2 *)((int)puVar38 + -4) = uVar65;
    bVar67 = false;
    pbVar24 = (byte *)((uint)pbVar24 & 0xffffff00);
    do {
      pbVar58 = pbVar58 + (-(uint)bVar67 - *(int *)pbVar33);
      pcVar23 = (char *)CONCAT31((int3)((uint)pbVar24 >> 8),*pcVar18);
      *pcVar23 = *pcVar23 + *pcVar18;
      pbVar24 = (byte *)CONCAT31((int3)((uint)(pcVar23 +
                                              (pbVar62[0x2000001] < (byte)((uint)pcVar18 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar23 +
                                        (pbVar62[0x2000001] < (byte)((uint)pcVar18 >> 8)) + 0xda7d)
                                 | (byte)*puVar63) + 0x7d);
      pcVar18 = pcVar18 + -1;
      *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar18;
      while( true ) {
        uVar29 = (undefined3)((uint)puVar63 >> 8);
        cVar8 = (char)puVar63 + *(char *)((int)pbVar58 * 2 + 0xa0000e1);
        puVar63 = (uint *)CONCAT31(uVar29,cVar8);
        bVar67 = CARRY1((byte)pbVar24,(byte)*puVar63);
        uVar27 = (undefined3)((uint)pbVar24 >> 8);
        bVar9 = (byte)pbVar24 + (byte)*puVar63;
        pbVar24 = (byte *)CONCAT31(uVar27,bVar9);
        if ((POPCOUNT(bVar9) & 1U) != 0) break;
        *pbVar24 = *pbVar24 + bVar9;
        cVar10 = (char)pcVar18;
        pcVar18 = (char *)CONCAT22((short)((uint)pcVar18 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar18 >> 8) | pbVar58[-0x65],cVar10));
        bVar11 = *pbVar24;
        *pbVar24 = *pbVar24 + bVar9;
        *(undefined2 *)((int)puVar56 + -4) = in_ES;
        if (CARRY1(bVar11,bVar9)) {
          *pbVar24 = *pbVar24 + bVar9;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar33 >> 8) | pbVar59[-0x1d],
                                              (char)pbVar33));
          *pbVar24 = *pbVar24 + bVar9;
          bVar67 = false;
          bVar9 = bVar9 | (byte)*puVar63;
          pcVar23 = (char *)CONCAT31(uVar27,bVar9);
          uVar65 = *(undefined2 *)((int)puVar56 + -4);
          puVar38 = (undefined4 *)puVar56;
          while( true ) {
            bVar11 = (byte)pcVar23;
            uVar27 = (undefined3)((uint)pcVar23 >> 8);
            if (bVar67 == (char)bVar9 < '\0') break;
            *pcVar23 = *pcVar23 + bVar11;
            bVar11 = bVar11 | (byte)*puVar63;
            puVar30 = (uint *)CONCAT31(uVar27,bVar11);
            *pbVar58 = *pbVar58 << 1 | (char)*pbVar58 < '\0';
            uVar22 = *puVar30;
            *(byte *)puVar30 = (byte)*puVar30 + bVar11;
            pbVar59 = pbVar59 + (-(uint)CARRY1((byte)uVar22,bVar11) - *puVar30);
            *puVar30 = *puVar30 << 1 | (uint)((int)*puVar30 < 0);
            while( true ) {
              uVar22 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63 + (byte)pcVar18;
              uVar66 = *(undefined2 *)puVar38;
              cVar8 = (char)puVar30 + 'o' + CARRY1((byte)uVar22,(byte)pcVar18);
              pcVar23 = (char *)CONCAT31((int3)((uint)puVar30 >> 8),cVar8);
              pcVar18 = (char *)0x20a0000;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *pcVar23 = *pcVar23 + cVar8;
              bVar9 = bRamfe140212;
              pcVar18 = (char *)0x0;
              *(undefined2 *)puVar38 = in_ES;
              uVar27 = (undefined3)((uint)(pcVar23 + -0x732b0000) >> 8);
              bVar11 = in(0);
              puVar30 = (uint *)CONCAT31(uVar27,bVar11);
              uVar22 = *puVar63;
              *(byte *)puVar63 = (byte)*puVar63;
              if (SCARRY1((byte)uVar22,'\0') != (char)(byte)*puVar63 < '\0') {
                *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                bVar11 = bVar11 | (byte)*puVar63;
                puVar30 = (uint *)CONCAT31(uVar27,bVar11);
                if ((POPCOUNT(bVar11) & 1U) == 0) {
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  pcVar18 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar9 | (byte)*puVar30) << 8);
                  puVar56 = (undefined2 *)((int)puVar38 + -4);
                  *(undefined2 *)((int)puVar38 + -4) = uVar66;
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                puVar30 = (uint *)CONCAT31(uVar27,bVar11 | (byte)*puVar63);
              }
            }
            *(byte *)puVar63 = (byte)*puVar63;
            bVar67 = SCARRY1((char)puVar63,*pbVar58);
            bVar9 = (char)puVar63 + *pbVar58;
            puVar63 = (uint *)CONCAT31((int3)((uint)puVar63 >> 8),bVar9);
            puVar38 = (undefined4 *)((int)puVar38 + 4);
          }
          if (bVar67 == (char)bVar9 < '\0') {
            *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar18;
            pbVar24 = (byte *)((uint)pcVar23 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar23 = *pcVar23 + bVar11;
          pbVar24 = (byte *)CONCAT31(uVar27,(bVar11 | (byte)*puVar63) + 0x7d);
          pcVar18 = pcVar18 + -1;
          *(byte *)puVar63 = (byte)*puVar63 + (char)pcVar18;
          puVar56 = (undefined2 *)puVar38;
        }
        else {
          *(byte *)puVar63 = (byte)*puVar63 + cVar10;
          puVar63 = (uint *)CONCAT31(uVar29,cVar8 + *(char *)((int)pbVar58 * 2 + 0xa0000e0));
          puVar56 = (undefined2 *)((int)puVar56 + -4);
        }
      }
    } while( true );
  }
  *pbVar58 = *pbVar58 + bVar9;
  bVar9 = bVar9 + 0x6f & *(byte *)CONCAT31(uVar27,bVar9 + 0x6f);
  *pbVar16 = *pbVar16 + (char)pbVar24;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + (byte)*puVar63);
  *(byte *)(puVar63 + 0x5c18000) = (byte)puVar63[0x5c18000] - bVar9;
  pcVar18 = (char *)CONCAT31(uVar27,bVar9 - (byte)*puVar63);
code_r0x00403b2c:
  bVar9 = (char)pcVar18 - *pcVar18;
  pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar18 >> 8),bVar9);
  *pbVar25 = *pbVar25 + bVar9;
  *(byte **)pbVar25 = pbVar16 + *(int *)pbVar25;
  *pbVar25 = *pbVar25 + bVar9;
  bVar67 = CARRY1(*pbVar25,bVar9);
  *pbVar25 = *pbVar25 + bVar9;
  puVar31 = (undefined1 *)puVar38;
  pbVar58 = pbVar62;
  while( true ) {
    puVar38 = (undefined4 *)puVar31;
    *(byte **)pbVar25 = pbVar25 + (uint)bVar67 + *(int *)pbVar25;
    bVar11 = ((uint)pbVar25 & 0x1000) != 0;
    puVar63 = puVar63 + (uint)bVar68 * -2 + 1;
    pbVar25[(int)pbVar16] = pbVar25[(int)pbVar16] + (char)pbVar33;
    *pbVar25 = *pbVar25 + (char)pbVar25;
    *(byte **)pbVar58 = pbVar33 + *(int *)pbVar58;
    bVar9 = (byte)((uint)pbVar24 >> 8);
    cVar8 = (char)pbVar24;
    pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),CONCAT11(bVar9 + *pbVar25,cVar8));
    pbVar25 = pbVar25 + (uint)CARRY1(bVar9,*pbVar25) + *(int *)pbVar25;
    *pbVar16 = *pbVar16 + cVar8;
    cVar8 = (char)pbVar33 - pbVar58[2];
    pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar8);
    pbVar62 = pbVar58;
    if ((POPCOUNT(cVar8) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar25 = *pbVar25 + (byte)pbVar25;
    bVar9 = (byte)pbVar25 | *pbVar33;
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),bVar9);
    if (bVar9 != 0) {
      pbVar59 = pbVar59 + -puVar63[9];
      *pbVar26 = *pbVar26 + bVar9;
      pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar24 >> 8) | *pbVar16,(char)pbVar24));
      pbVar58 = pbVar58 + *(int *)pbVar26;
      pbVar26 = pbVar26 + *(int *)pbVar26;
      uVar27 = (undefined3)((uint)pbVar26 >> 8);
      bVar12 = (char)pbVar26 - *pbVar26;
      pbVar62 = (byte *)CONCAT31(uVar27,bVar12);
      bVar9 = *pbVar62;
      *pbVar62 = *pbVar62 + bVar12;
      pbVar26 = (byte *)CONCAT31(uVar27,bVar12 - CARRY1(bVar9,bVar12));
    }
    bVar9 = *pbVar26;
    *pbVar26 = *pbVar26 + (byte)pbVar26;
    iVar19 = *(int *)(pbVar59 + 0x1b000007);
    iVar4 = -(uint)CARRY1(bVar9,(byte)pbVar26);
    pbVar62 = pbVar58 + (uint)bVar68 * -8 + 4;
    out(*(undefined4 *)pbVar58,(short)pbVar16);
    pbVar25 = (byte *)(((uint)pbVar26 >> 8) * 0x100);
    *pbVar16 = *pbVar16 + (byte)pbVar24;
    bVar9 = (char)pbVar16 - *pbVar33;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar9);
    *pbVar33 = *pbVar33;
    *pbVar16 = *pbVar16 + (char)((uint)pbVar24 >> 8);
    *pbVar25 = *pbVar25;
    pcVar18 = (char *)(((uint)pbVar26 >> 8) * 0x200);
    *pcVar18 = *pcVar18 + (char)pbVar33;
    bVar67 = CARRY1(*pbVar24,bVar9);
    *pbVar24 = *pbVar24 + bVar9;
    puVar31 = (undefined1 *)((int)puVar38 + (iVar4 - iVar19));
    pbVar58 = pbVar62;
    if (bVar67) {
      *pbVar25 = *pbVar25;
      pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | *pbVar16);
      puVar53 = (undefined2 *)((int)puVar38 + (iVar4 - iVar19) + -4);
      puVar38 = (undefined4 *)((int)puVar38 + (iVar4 - iVar19) + -4);
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
    bVar9 = (byte)puVar30;
    *(byte *)puVar30 = (byte)*puVar30 + bVar9;
    pbVar58 = pbVar58 + -*(int *)(pbVar59 + -0x1a);
    *(byte *)puVar30 = (byte)*puVar30 + bVar9;
    bVar9 = bVar9 | (byte)*puVar63;
    puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar9);
    *(byte *)puVar30 = (byte)*puVar30 | bVar9;
    bVar9 = (byte)*puVar30;
    pbVar59 = (byte *)0x2700001;
    while (puVar56 = (undefined2 *)puVar55, (POPCOUNT(bVar9) & 1U) == 0) {
      do {
        *(byte *)puVar30 = (byte)*puVar30 + (byte)puVar30;
        bVar9 = (byte)puVar30 | (byte)*puVar63;
        puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar9);
        puVar31 = (undefined1 *)puVar56;
        if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
        uVar28 = CONCAT21((short)((uint)pcVar18 >> 0x10),(byte)((uint)pcVar18 >> 8) | bRamfe140212);
        puVar7 = puVar31;
        while( true ) {
          puVar57 = puVar7;
          pcVar18 = (char *)((uint)uVar28 << 8);
          puVar55 = puVar57 + -4;
          puVar56 = (undefined2 *)(puVar57 + -4);
          puVar31 = puVar57 + -4;
          *(undefined2 *)(puVar57 + -4) = in_ES;
          bVar13 = (byte)puVar30;
          *(byte *)puVar30 = (byte)*puVar30 & bVar13;
          bVar12 = *pbVar33;
          bVar15 = (byte)uVar28;
          bVar11 = *pbVar33;
          *pbVar33 = *pbVar33 + bVar15;
          bVar9 = *pbVar33;
          if (!CARRY1(bVar12,bVar15)) break;
          *(byte *)puVar30 = (byte)*puVar30 + bVar13;
          pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar33 >> 8) | bRam026fffe2,
                                              (char)pbVar33));
          *(byte *)puVar30 = (byte)*puVar30 + bVar13;
          bVar13 = bVar13 | (byte)*puVar63;
          puVar30 = (uint *)CONCAT31((int3)((uint)puVar30 >> 8),bVar13);
          bVar67 = (POPCOUNT(bVar13) & 1U) == 0;
          while( true ) {
            cVar8 = (char)((uint)pbVar33 >> 8);
            uVar65 = (undefined2)((uint)pbVar33 >> 0x10);
            if (!bVar67) {
              *(byte *)puVar63 = (byte)*puVar63;
              pbVar33 = (byte *)CONCAT22(uVar65,CONCAT11(cVar8 + pbVar33[-0x1f],(char)pbVar33));
              goto code_r0x00403d52;
            }
            *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
            uVar66 = (undefined2)((uint)pcVar18 >> 0x10);
            bVar11 = (byte)((uint)pcVar18 >> 8) | (byte)*puVar30;
            uVar28 = CONCAT21(uVar66,bVar11);
            *puVar30 = *puVar30 & (uint)puVar30;
            *pbVar33 = *pbVar33 + bVar11;
            uVar27 = (undefined3)((uint)puVar30 >> 8);
            bVar9 = (char)puVar30 - bVar11;
            pcVar18 = (char *)CONCAT31(uVar27,bVar9);
            *pcVar18 = *pcVar18 + bVar9;
            bVar9 = bVar9 | (byte)*puVar63;
            puVar30 = (uint *)CONCAT31(uVar27,bVar9);
            puVar7 = puVar57 + -4;
            if ((POPCOUNT(bVar9) & 1U) != 0) break;
            *(byte *)puVar30 = (byte)*puVar30 + bVar9;
            pcVar18 = (char *)((uint)CONCAT21(uVar66,bVar11 | (byte)*puVar30) << 8);
            *puVar30 = *puVar30 - (int)puVar30;
            *(byte *)puVar63 = (byte)*puVar63;
            pbVar33 = (byte *)CONCAT22(uVar65,CONCAT11(cVar8 + pbVar33[-0x1d],(char)pbVar33));
            do {
              *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
              uVar65 = (undefined2)((uint)puVar63 >> 0x10);
              cVar8 = (char)puVar63;
              bVar9 = (byte)((uint)puVar63 >> 8) | pbVar33[-0x17];
              puVar63 = (uint *)CONCAT22(uVar65,CONCAT11(bVar9,cVar8));
              *(byte *)puVar30 = (byte)*puVar30 + (char)puVar30;
              pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar33 >> 8) | bRam026fffeb,
                                                  (char)pbVar33));
              do {
                *(byte *)puVar30 = (byte)*puVar30 + (byte)puVar30;
                uVar27 = (undefined3)((uint)puVar30 >> 8);
                bVar12 = (byte)puVar30 | (byte)*puVar63;
                pcVar23 = (char *)CONCAT31(uVar27,bVar12);
                bVar11 = pbVar33[-0x16];
                *pcVar23 = *pcVar23 + bVar12;
                pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                           CONCAT11((char)((uint)pbVar33 >> 8) + bVar11 |
                                                    bRam026fffec,(char)pbVar33));
                *pcVar23 = *pcVar23 + bVar12;
                pbVar16 = (byte *)CONCAT31(uVar27,bVar12 | (byte)*puVar63);
                while( true ) {
                  *pbVar16 = *pbVar16 + (byte)pbVar16;
                  uVar27 = (undefined3)((uint)pbVar16 >> 8);
                  bVar11 = (byte)pbVar16 | (byte)*puVar63;
                  puVar30 = (uint *)CONCAT31(uVar27,bVar11);
                  if ((POPCOUNT(bVar11) & 1U) != 0) break;
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  bVar12 = pbVar58[-0x14];
                  *(byte *)puVar30 = (byte)*puVar30 + bVar11;
                  bVar11 = bVar11 | (byte)*puVar63;
                  pcVar23 = (char *)CONCAT31(uVar27,bVar11);
                  bVar13 = pbVar33[-0x15];
                  *pcVar23 = *pcVar23 + bVar11;
                  pcVar18 = (char *)((uint)CONCAT21((short)((uint)pcVar18 >> 0x10),
                                                    (byte)((uint)pcVar18 >> 8) | bVar12 |
                                                    pbVar58[-0x13]) << 8);
                  *pcVar23 = *pcVar23 + bVar11;
                  pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                             CONCAT11((char)((uint)pbVar33 >> 8) + bVar13 |
                                                      bRam026fffef,(char)pbVar33));
                  *pcVar23 = *pcVar23 + bVar11;
                  pbVar16 = (byte *)CONCAT31(uVar27,bVar11 | (byte)*puVar63);
                  do {
                    do {
                      bVar12 = (byte)pbVar16;
                      *pbVar16 = *pbVar16 + bVar12;
                      cVar34 = (char)pbVar33;
                      pbVar33 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar33 >> 8) | *pbVar16,
                                                          cVar34));
                      *pbVar16 = bVar12;
                      *pbVar16 = *pbVar16 + bVar12;
                      cVar10 = (char)((uint)pcVar18 >> 8) + *pbVar16;
                      pcVar18 = (char *)((uint)CONCAT21((short)((uint)pcVar18 >> 0x10),cVar10) << 8)
                      ;
                      uVar27 = (undefined3)((uint)pbVar16 >> 8);
                      bVar12 = bVar12 & *pbVar16;
                      pbVar16 = (byte *)CONCAT31(uVar27,bVar12);
                      bVar11 = *pbVar33;
                      *pbVar33 = *pbVar33 + cVar10;
                    } while (SCARRY1(bVar11,cVar10) == (char)*pbVar33 < '\0');
                    *pbVar16 = *pbVar16 + bVar12;
                    bVar12 = bVar12 | (byte)*puVar63;
                    pbVar16 = (byte *)CONCAT31(uVar27,bVar12);
                    if ((POPCOUNT(bVar12) & 1U) == 0) {
                      *pbVar16 = *pbVar16 + bVar12;
                      *pbVar16 = *pbVar16 + bVar12;
                      cVar8 = cVar8 - bVar9;
                      pbVar24 = (byte *)CONCAT31((int3)((uint)puVar63 >> 8),cVar8);
                      *pbVar16 = *pbVar16 + bVar12;
                      bRam0312382b = bRam0312382b | *pbVar24;
                      *(undefined2 *)(puVar57 + -8) = in_ES;
                      while( true ) {
                        bVar11 = (byte)pbVar16;
                        *pbVar16 = *pbVar16 + bVar11;
                        bRam0312382b = bRam0312382b | (pbVar58 + 0x21b0000)[(int)pbVar16];
                        uVar27 = (undefined3)((uint)pbVar16 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar24 = *pbVar24 + bRam0312382b;
                        pbVar16 = (byte *)CONCAT31(uVar27,bVar11 | *pbVar62);
                      }
                      *pbVar16 = *pbVar16 + bVar11;
                      bVar11 = bVar11 | *pbVar62;
                      pcVar18 = (char *)CONCAT31(uVar27,bVar11);
                      out(*(undefined4 *)pbVar62,(short)pbVar24);
                      *pcVar18 = *pcVar18 + bVar11;
                      uVar66 = CONCAT11(bVar9 | bRam6f0a002b,cVar8);
                      pcVar23 = (char *)CONCAT22(uVar65,uVar66);
                      *pcVar18 = *pcVar18 + bVar11;
                      *pcVar23 = *pcVar23 + bRam0312382b;
                      out(*(undefined4 *)(pbVar62 + (uint)bVar68 * -8 + 4),uVar66);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar33 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),cVar34 + *pcVar18);
                  } while (SCARRY1(cVar34,*pcVar18) != (char)(cVar34 + *pcVar18) < '\0');
                }
                uVar22 = *puVar63;
                *(byte *)puVar63 = (byte)*puVar63;
              } while (SCARRY1((byte)uVar22,'\0') != (char)(byte)*puVar63 < '\0');
              *(byte *)puVar63 = (byte)*puVar63;
              *pcVar18 = *pcVar18 - (char)pbVar33;
              *(byte *)puVar30 = (byte)*puVar30 + bVar11;
              bVar11 = bVar11 | (byte)*puVar63;
              puVar30 = (uint *)CONCAT31(uVar27,bVar11);
              bVar67 = (POPCOUNT(bVar11) & 1U) == 0;
            } while (bVar67);
          }
        }
      } while (SCARRY1(bVar11,bVar15));
    }
    *pbVar33 = *pbVar33 + (char)((uint)pcVar18 >> 8);
    *pbVar58 = *pbVar58 - (char)pbVar33;
  } while( true );
}


