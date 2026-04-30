/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403134
 * Raw Name    : ConvertToUnified
 * Demangled   : ConvertToUnified
 * Prototype   : byte * ConvertToUnified(byte * arg, byte param_2, undefined2 param_3)
 * Local Vars  : bVar38, uVar39, puVar40, puVar41, piVar42, piVar43, puVar44, puVar45, puVar46, puVar47, puVar48, puVar49, puVar50, puVar51, puVar52, puVar53, puVar54, puVar55, puVar56, puVar57, puVar58, pbVar59, unaff_ESI, pbVar60, pbVar61, pbVar62, pbVar63, pbVar64, puVar65, puVar66, unaff_EDI, puVar67, puVar68, puVar69, in_ES, in_CS, uVar70, in_DS, uVar71, unaff_FS_OFFSET, in_GS_OFFSET, in_CF, bVar72, bVar73, in_TF, in_IF, bVar74, bVar75, in_NT, in_AC, in_VIF, in_VIP, in_ID, uVar76, uVar77, param_2, param_3, arg, uStack_48, pbStack_40, auStack_38, uStack_34, uStack_30, uStack_2c, pbStack_28, uStack_24, uStack_20, pcStack_1c, uStack_18, uStack_14, uStack_10, pbStack_8, uStack_4, pcVar1, uVar2, iVar3, uVar4, uVar5, uVar6, puVar7, cVar8, bVar9, bVar10, cVar11, cVar12, in_EAX, pcVar13, pcVar14, piVar15, iVar16, ppbVar17, ppbVar18, uVar19, pbVar20, uVar21, iVar22, uVar23, extraout_ECX, pcVar24, extraout_ECX_00, extraout_ECX_01, bVar25, bVar26, uVar27, bVar28, pcVar29, pcVar30, uVar31, puVar32, puVar33, uVar34, unaff_EBX, pbVar35, cVar36, cVar37
 */

#include "../_pdb_types.h"


/* WARNING: Instruction at (ram,0x00403ded) overlaps instruction at (ram,0x00403dec)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00403830) */
/* WARNING: Removing unreachable block (ram,0x004037b2) */
/* WARNING: Removing unreachable block (ram,0x004037c4) */
/* WARNING: Removing unreachable block (ram,0x004035f0) */
/* WARNING: Removing unreachable block (ram,0x0040383b) */
/* WARNING: Removing unreachable block (ram,0x00403db7) */
/* WARNING: Type propagation algorithm not settling */

byte * __fastcall ConvertToUnified(byte *arg,byte param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined6 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort uVar6;
  undefined1 *puVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  undefined3 uVar21;
  char *in_EAX;
  char *pcVar13;
  int3 iVar22;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  uint uVar19;
  uint3 uVar23;
  byte *pbVar20;
  byte bVar25;
  char *extraout_ECX;
  char *pcVar24;
  byte bVar26;
  byte *extraout_ECX_00;
  undefined3 uVar27;
  byte *extraout_ECX_01;
  byte bVar28;
  char *pcVar29;
  char *pcVar30;
  undefined4 uVar31;
  uint *puVar32;
  undefined1 *puVar33;
  undefined1 uVar34;
  char cVar36;
  byte bVar38;
  byte *unaff_EBX;
  char cVar37;
  byte *pbVar35;
  undefined2 uVar39;
  undefined4 *puVar40;
  undefined2 *puVar41;
  int *piVar42;
  int *piVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined2 *puVar46;
  undefined4 *puVar47;
  undefined2 *puVar48;
  undefined1 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  undefined2 *puVar54;
  undefined2 *puVar55;
  undefined1 *puVar56;
  undefined2 *puVar57;
  undefined1 *puVar58;
  byte *pbVar59;
  int unaff_ESI;
  byte *pbVar60;
  byte *pbVar61;
  byte *pbVar62;
  byte *pbVar63;
  byte *pbVar64;
  uint *puVar65;
  uint *puVar66;
  int unaff_EDI;
  undefined4 *puVar67;
  uint *puVar68;
  uint *puVar69;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 uVar70;
  undefined2 in_DS;
  undefined2 uVar71;
  int unaff_FS_OFFSET;
  int in_GS_OFFSET;
  undefined1 in_CF;
  bool bVar72;
  byte bVar73;
  byte in_TF;
  byte in_IF;
  bool bVar74;
  bool bVar75;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar76;
  undefined8 uVar77;
  undefined4 uStack_48;
  byte *pbStack_40;
  undefined2 auStack_38 [2];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  byte *pbStack_28;
  undefined2 uStack_24;
  undefined2 uStack_20;
  char *pcStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined4 uStack_10;
  byte *pbStack_8;
  undefined4 uStack_4;
  
  bVar74 = false;
  while( true ) {
    cVar12 = (char)in_EAX;
    cVar37 = (char)unaff_EBX;
                    /* .NET CLR Managed Code */
    if ((bool)in_CF) break;
    *in_EAX = *in_EAX + cVar12;
    uVar21 = (undefined3)((uint)in_EAX >> 8);
    bVar25 = cVar12 + 6;
    pbVar62 = (byte *)CONCAT31(uVar21,bVar25);
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar37 - *unaff_EBX);
    *(byte *)((int)pbVar62 * 2) = *(byte *)((int)pbVar62 * 2) ^ bVar25;
    *(byte **)arg = pbVar62 + *(int *)arg;
    bVar9 = *pbVar62;
    *pbVar62 = *pbVar62 + bVar25;
    in_EAX = (char *)CONCAT31(uVar21,bVar25 + *pbVar62 + CARRY1(bVar9,bVar25));
    in_CF = CARRY1(*arg,param_2);
    *arg = *arg + param_2;
  }
  *in_EAX = *in_EAX + cVar12;
  uStack_4 = CONCAT22(uStack_4._2_2_,in_ES);
  pcVar13 = (char *)((uint)in_EAX | 0xa77d0209);
  cVar12 = (char)pcVar13;
  *pcVar13 = *pcVar13 + cVar12;
  uVar21 = (undefined3)((uint)pcVar13 >> 8);
  cVar8 = cVar12 + '\t';
  pcVar13 = (char *)CONCAT31(uVar21,cVar8);
  if ((POPCOUNT(cVar8) & 1U) != 0) {
    *pcVar13 = *pcVar13 + cVar8;
    pcVar13 = (char *)CONCAT31(uVar21,cVar12 + -0x7c);
    *pcVar13 = *pcVar13 + cVar12 + -0x7c;
    pcVar13 = (char *)(unaff_ESI + -1 + CONCAT31(uVar21,cVar12 + '\x01'));
    *pcVar13 = *pcVar13 + cVar12 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar13 = *pcVar13 + cVar8;
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + -0x7c);
  *pcVar13 = *pcVar13 + cVar12 + -0x7c;
  pcVar13 = pcRam6f700004;
  pcVar29 = (char *)((int)pcRam6f700004 >> 0x1f);
  cVar12 = (char)pcRam6f700004;
  *pcRam6f700004 = *pcRam6f700004 + cVar12;
  bVar25 = (byte)((uint)arg >> 8) | unaff_EBX[(int)pcVar29];
  *(uint *)(unaff_EBX + -0x59) = *(uint *)(unaff_EBX + -0x59) | unaff_EDI - 1U;
  *pcVar13 = *pcVar13 + cVar12;
  iVar22 = (int3)((uint)pcVar13 >> 8);
  bVar9 = cVar12 + 0x7b;
  *(char *)CONCAT31(iVar22,bVar9) = *(char *)CONCAT31(iVar22,bVar9) + bVar9;
  piVar15 = (int *)CONCAT31(iVar22,cVar12 + -0x5d);
  pcVar14 = (char *)((int)piVar15 + (uint)(0xd7 < bVar9) + *piVar15);
  *unaff_EBX = *unaff_EBX + bVar25;
  pcVar24 = (char *)CONCAT22((short)((uint)arg >> 0x10),CONCAT11(bVar25 | *unaff_EBX,(char)arg));
  *pcVar14 = *pcVar14 + (char)pcVar14;
  pcVar30 = (char *)CONCAT31(iVar22 >> 0x17,(char)((int)pcVar13 >> 0x1f) + *unaff_EBX);
  pcVar14 = pcVar14 + 0x73160511;
  *(uint *)(unaff_EBX + -0x59) = *(uint *)(unaff_EBX + -0x59) | 0xb060000;
  cVar12 = (char)pcVar14;
  *pcVar14 = *pcVar14 + cVar12;
  uVar21 = (undefined3)((uint)pcVar14 >> 8);
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + '{');
  *pcVar13 = *pcVar13 + cVar12 + '{';
  cVar8 = cVar12 + -8;
  pcVar13 = (char *)CONCAT31(uVar21,cVar8);
  pcVar13[0xb060000] = pcVar13[0xb060000] + cVar8;
  *(uint *)(unaff_EBX + -0x59) = *(uint *)(unaff_EBX + -0x59) | 0xb060000;
  *pcVar13 = *pcVar13 + cVar8;
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + 's');
  *pcVar13 = *pcVar13 + cVar12 + 's';
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + -0x10);
  pbVar62 = (byte *)(unaff_ESI + 2);
  out(*(undefined4 *)(unaff_ESI + -2),(short)pcVar30);
  *pcVar13 = *pcVar13 + cVar12 + -0x10;
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + -9);
  *(uint *)(unaff_EBX + -0x59) = *(uint *)(unaff_EBX + -0x59) | 0xb060000;
  *pcVar13 = *pcVar13 + cVar12 + -9;
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + 'r');
  *pcVar13 = *pcVar13 + cVar12 + 'r';
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + -0x11);
  puVar40 = (undefined4 *)0xb05ffff;
code_r0x004031ad:
  cVar12 = (char)pcVar13;
  *(char *)((int)puVar40 + (int)pcVar13) = *(char *)((int)puVar40 + (int)pcVar13) + cVar12;
  *(uint *)(unaff_EBX + -0x59) = *(uint *)(unaff_EBX + -0x59) | (uint)puVar40;
  *pcVar13 = *pcVar13 + cVar12;
  uVar21 = (undefined3)((uint)pcVar13 >> 8);
  pcVar13 = (char *)CONCAT31(uVar21,cVar12 + '{');
  *pcVar13 = *pcVar13 + cVar12 + '{';
  bVar9 = cVar12 - 8;
  pcVar13 = (char *)((int)puVar40 + CONCAT31(uVar21,bVar9));
  *pcVar13 = *pcVar13 + bVar9;
  puVar67 = puVar40 + (uint)bVar74 * -2 + 1;
  pbVar60 = pbVar62 + (uint)bVar74 * -8 + 4;
  bRam04130511 = bVar9;
  *puVar40 = *(undefined4 *)pbVar62;
  uVar76 = CONCAT44(pcVar30,CONCAT31(uVar21,bVar9)) | 0x72;
  pcVar13 = pcVar24;
  pbVar61 = pbVar60;
  if (!SCARRY1(bVar9 | 0x72,'\0')) {
    pbVar61 = pbVar60 + (uint)bVar74 * -8 + 4;
    out(*(undefined4 *)pbVar60,(short)pcVar30);
    in_CS = 0x3a;
    uStack_4 = 0x4031d9;
    uVar76 = func_0x8c0a0000();
    pcVar13 = extraout_ECX;
  }
  do {
    pcVar30 = (char *)(uVar76 >> 0x20);
    pbVar60 = (byte *)uVar76;
    bVar25 = (byte)uVar76;
    *pcVar13 = *pcVar13 + bVar25;
    bVar26 = (byte)((uint)pcVar13 >> 8);
    *(byte *)((int)puVar67 + -0x65) = *(byte *)((int)puVar67 + -0x65) | bVar26;
    *pbVar60 = *pbVar60 + bVar25;
    bVar9 = (pcVar30 + 0x28010000)[(int)puVar67];
    uVar21 = (undefined3)((uint)pcVar13 >> 8);
    *pbVar60 = *pbVar60 + bVar25;
    bVar9 = (byte)pcVar13 | bVar9 | *pbVar60;
    pbVar62 = pbVar61 + (uint)bVar74 * -8 + 4;
    out(*(undefined4 *)pbVar61,(short)(uVar76 >> 0x20));
    *pbVar60 = bVar25;
    *pcVar30 = *pcVar30 + bVar9;
    pcVar29[0x720a0000] = pcVar29[0x720a0000] - cVar37;
    pbRam9d287000 = pbRam9d287000 + (int)pbVar60;
    *pbVar60 = *pbVar60 + bVar25;
    bVar9 = bVar9 | *(byte *)CONCAT31(uVar21,bVar9);
    pcVar24 = (char *)CONCAT31(uVar21,bVar9);
    uVar21 = (undefined3)(uVar76 >> 8);
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *pbVar60 = *pbVar60 + bVar25;
      pcVar29 = (char *)CONCAT31(uVar21,bVar25 + 0x7b);
      *pcVar29 = *pcVar29 + bVar25 + 0x7b;
      pcVar29 = (char *)CONCAT31(uVar21,bVar25 + 0xa3);
      in_NT = (in_NT & 1) != 0;
      bVar74 = bVar74 != false;
      in_IF = (in_IF & 1) != 0;
      in_TF = (in_TF & 1) != 0;
      in_ID = (in_ID & 1) != 0;
      in_AC = (in_AC & 1) != 0;
      in_VIP = 0;
      in_VIF = 0;
      *pcVar29 = *pcVar29 + bVar25 + 0xa3;
      bVar25 = pcVar30[0x41];
      pcVar29 = pcVar29 + 0x7b097000;
      puVar67 = (undefined4 *)((int)puVar67 + (uint)bVar74 * -8 + 3);
      *pcVar29 = *pcVar29 + (char)pcVar29;
      pbVar62 = pbVar62 + (uint)bVar74 * -8 + 3;
      uVar4 = CONCAT44(CONCAT22((short)(uVar76 >> 0x30),
                                CONCAT11((byte)(uVar76 >> 0x28) | bVar25,(char)(uVar76 >> 0x20))),
                       CONCAT31((int3)((uint)pcVar29 >> 8),(char)pcVar29 + '{'));
    }
    else {
      uVar4 = uVar76;
      if ((char)bVar9 < '\0') break;
    }
    cVar12 = (char)uVar4;
    *(char *)uVar4 = *(char *)uVar4 + cVar12;
    uVar21 = (undefined3)(uVar4 >> 8);
    bVar25 = cVar12 + 0x28;
    pcVar14 = (char *)CONCAT31(uVar21,bVar25);
    bVar73 = (uVar4 & 0x1000) != 0;
    *pcVar14 = *pcVar14 + bVar25;
    uVar27 = (undefined3)(uVar4 >> 0x28);
    bVar28 = (byte)(uVar4 >> 0x20) | *pbVar62;
    pcVar29 = (char *)CONCAT31(uVar27,bVar28);
    *pcVar14 = *pcVar14 + bVar25;
    cVar8 = bVar28 + *unaff_EBX;
    uVar31 = CONCAT31(uVar27,cVar8);
    pbVar61 = (byte *)(CONCAT31(uVar21,cVar12 + '\x06') + *(int *)pbVar62 + (uint)(0x21 < bVar25));
    uVar76 = CONCAT44(uVar31,pbVar61);
    pbVar62 = (byte *)((uint)pbVar62 | (uint)puVar67);
    bVar28 = (byte)pbVar61;
    uVar70 = (undefined2)uVar31;
    out(uVar70,bVar28);
    bVar25 = *pbVar61;
    *pbVar61 = *pbVar61 + bVar28;
    if (CARRY1(bVar25,bVar28)) {
      *pbVar61 = *pbVar61 + bVar28;
      uVar70 = (undefined2)((uint)pcVar13 >> 0x10);
      bVar26 = bVar26 | *pbVar61;
      pbStack_8 = (byte *)CONCAT22(uVar70,CONCAT11(bVar26,bVar9));
      uVar21 = (undefined3)((uint)pbVar61 >> 8);
      *unaff_EBX = *unaff_EBX + bVar26;
      cVar8 = cVar8 - *pbStack_8;
      pbVar60 = (byte *)CONCAT31(uVar27,cVar8);
      bVar10 = bVar28 + 0x2a;
      pcVar13 = (char *)CONCAT31(uVar21,bVar10);
      *pcVar13 = *pcVar13 + bVar10;
      bVar25 = *pbStack_8;
      *pbStack_8 = *pbStack_8 + bVar10;
      *pcVar13 = *pcVar13 + bVar10 + CARRY1(bVar25,bVar10);
      *pcVar13 = *pcVar13 + bVar10;
      cRam00968900 = cRam00968900 + bVar9;
      *pcVar13 = *pcVar13 + bVar10;
      *(byte **)pbVar62 = unaff_EBX + *(int *)pbVar62;
      uVar71 = (undefined2)((uint)unaff_EBX >> 0x10);
      cVar36 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x39];
      *pcVar13 = *pcVar13 + bVar10;
      bVar25 = bVar28 + 0x54 & *pbVar60;
      iVar16 = *(int *)(pcVar29 + 0x39);
      *(char *)CONCAT31(uVar21,bVar25) = *(char *)CONCAT31(uVar21,bVar25) + bVar25;
      pcVar13 = (char *)CONCAT31(uVar21,bVar25 + 0x2a);
      cVar36 = cVar36 + *(char *)(CONCAT22(uVar71,CONCAT11(cVar36,cVar37)) + 0x3a);
      pcVar14 = (char *)CONCAT22(uVar71,CONCAT11(cVar36,cVar37));
      *pcVar13 = *pcVar13 + bVar25 + 0x2a;
      bVar25 = bVar25 + 0x54 & *pbVar60;
      puVar67 = (undefined4 *)((int)puVar67 + *(int *)(pcVar29 + 0x3a) + iVar16);
      *(char *)CONCAT31(uVar21,bVar25) = *(char *)CONCAT31(uVar21,bVar25) + bVar25;
      pbVar61 = (byte *)CONCAT31(uVar21,bVar25 + 0x2a);
      bVar25 = *pbVar61;
      bVar28 = bVar26 + *pbVar61;
      iVar16 = *(int *)pbVar61;
      *pbVar60 = *pbVar60 + bVar9;
      cVar12 = (char)(pbVar61 + (uint)CARRY1(bVar26,bVar25) + iVar16);
      uVar21 = (undefined3)((uint)(pbVar61 + (uint)CARRY1(bVar26,bVar25) + iVar16) >> 8);
      cVar11 = cVar12 + *pcVar14;
      pcVar13 = (char *)CONCAT31(uVar21,cVar11);
      if (SCARRY1(cVar12,*pcVar14) == cVar11 < '\0') {
        *(char **)pbVar60 = pcVar29 + *(int *)pbVar60;
        pcVar14 = (char *)CONCAT22(uVar71,CONCAT11(cVar36 + pcVar14[0x38],cVar37));
        *pcVar13 = *pcVar13 + cVar11;
        pbVar61 = (byte *)CONCAT31(uVar21,cVar11 + 'o');
        uStack_10 = pbVar62;
      }
      else {
        *pcVar13 = *pcVar13 + cVar11;
        cVar11 = cVar11 + '*';
        pcVar13 = (char *)CONCAT31(uVar21,cVar11);
        *pcVar13 = *pcVar13 + cVar11;
        uStack_10._2_2_ = (undefined2)((uint)pbVar62 >> 0x10);
        uStack_10 = (byte *)CONCAT22(uStack_10._2_2_,param_3);
        iVar16 = (int)uStack_10;
        pbVar60 = (byte *)CONCAT22((short)(uVar4 >> 0x30),
                                   CONCAT11((char)(uVar4 >> 0x28) - *pbVar62,cVar8));
        bVar28 = bVar28 + *pcVar13;
        *pcVar13 = *pcVar13 + cVar11;
        uStack_10 = (byte *)CONCAT22(uStack_10._2_2_,param_3);
        pcVar29 = (char *)(iVar16 + *(int *)((int)puVar67 + -0x5e));
        *pcVar13 = *pcVar13 + cVar11;
        cVar12 = *pcVar13;
        pbVar61 = (byte *)CONCAT31(uVar21,cVar11 - cVar12);
        *pcVar14 = *pcVar14 + cVar8;
        *(byte *)((int)pbVar61 * 2) = *(byte *)((int)pbVar61 * 2) ^ cVar11 - cVar12;
        uStack_14 = param_3;
      }
      pcVar13 = (char *)CONCAT22(uVar70,CONCAT11(bVar28,bVar9));
      bVar25 = *pbVar61;
      *pbVar61 = *pbVar61 + (byte)pbVar61;
      pbVar61 = pbVar61 + (uint)CARRY1(bVar25,(byte)pbVar61) + *(int *)pbVar61;
      *pcVar13 = *pcVar13 + (char)pbVar60;
      pbVar35 = (byte *)CONCAT22((short)((uint)pcVar14 >> 0x10),
                                 CONCAT11((char)((uint)pcVar14 >> 8) + pcVar14[0x38],(char)pcVar14))
      ;
      *pbVar61 = *pbVar61 + (char)pbVar61;
      piVar15 = (int *)(CONCAT31((int3)((uint)pbVar61 >> 8),(char)pbVar61 + 'o') + 0x28060000);
      puVar68 = puVar67 + (uint)bVar74 * -2 + 1;
      uVar71 = SUB42(pbVar60,0);
      uVar31 = in(uVar71);
      *puVar67 = uVar31;
      *(char *)piVar15 = *(char *)piVar15 + (char)piVar15;
      bVar28 = bVar28 | bRam7b022a01;
      pbVar61 = (byte *)((int)puVar68 + (int)pcVar29 * 2);
      *pbVar61 = *pbVar61 + (char)piVar15;
      iVar16 = *piVar15;
      *pbVar62 = *pbVar62 + (char)(char *)((int)piVar15 + iVar16);
      pcVar13 = (char *)((int)piVar15 + iVar16) + -0x387b020d;
      *pcVar13 = *pcVar13 + (char)pcVar13;
      cVar12 = (char)pcVar13 + 'o';
      pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar12);
      *pcVar13 = *pcVar13 + cVar12;
      iVar16 = (int)pcVar13 - *(int *)CONCAT22(uVar70,CONCAT11(bVar28,bVar9));
      uVar21 = (undefined3)((uint)iVar16 >> 8);
      cVar12 = (((byte)iVar16 | *pbVar62) - 0xe) + *pbVar35;
      pcVar13 = (char *)CONCAT31(uVar21,cVar12);
      pbVar61 = pbVar62 + (uint)bVar74 * -8 + 4;
      out(*(int *)pbVar62,uVar71);
      pcVar13[unaff_FS_OFFSET] = pcVar13[unaff_FS_OFFSET] + cVar12;
      pcStack_1c = (char *)CONCAT22(pcStack_1c._2_2_,param_3);
      pbVar62 = (byte *)CONCAT22(uVar70,CONCAT11(bVar28 + *(byte *)((int)puVar68 + 0x66),bVar9));
      *pcVar13 = *pcVar13 + cVar12;
      bVar25 = cVar12 - *pbVar60;
      puVar32 = (uint *)CONCAT31(uVar21,bVar25);
      *pcVar29 = *pcVar29 - (char)pcVar14;
      bVar9 = *pbVar61;
      *pbVar61 = *pbVar61 + bVar25;
      bVar26 = (byte)((uint)pbVar60 >> 8);
      if (CARRY1(bVar9,bVar25)) goto code_r0x00403365;
      pbVar63 = (byte *)((int)puVar68 + (int)pcVar29 * 2);
      *pbVar63 = *pbVar63 + bVar25;
      ppbVar18 = (byte **)(puVar32 + 0x1f421c00);
      cVar12 = (char)ppbVar18;
      if ((POPCOUNT((uint)ppbVar18 & 0xff) & 1U) != 0) {
        pbVar63 = (byte *)((int)puVar32 + 0x7d087002);
        bVar9 = *pbVar63;
        *pbVar63 = *pbVar63 + bVar26;
        uVar21 = (undefined3)((uint)ppbVar18 >> 8);
        if ((POPCOUNT(*pbVar63) & 1U) == 0) {
          *(char *)ppbVar18 = (char)*ppbVar18 + cVar12;
          ppbVar17 = (byte **)CONCAT31(uVar21,cVar12 + 'o');
          goto code_r0x0040333c;
        }
        pbVar63 = (byte *)CONCAT31(uVar21,cVar12 + -2 + CARRY1(bVar9,bVar26));
        goto code_r0x00403375;
      }
      *(char *)ppbVar18 = (char)*ppbVar18 + cVar12;
      goto code_r0x00403307;
    }
    *pbVar61 = *pbVar61 + bVar28;
    *(char **)pbVar61 = pcVar24 + *(int *)pbVar61;
    pbVar61 = pbVar62 + (uint)bVar74 * -8 + 4;
    out(*(int *)pbVar62,uVar70);
    pcVar13 = pcVar24;
  } while( true );
  *pbVar60 = *pbVar60 + bVar25;
  pcVar13 = (char *)CONCAT31(uVar21,bVar25 + 7);
  puVar40 = puVar67;
  goto code_r0x004031ad;
code_r0x00403375:
  while( true ) {
    bVar9 = (byte)pbVar63;
    *pbVar63 = *pbVar63 + bVar9;
    uVar21 = (undefined3)((uint)pbVar63 >> 8);
    bVar25 = bVar9 + 0x2d;
    ppbVar18 = (byte **)CONCAT31(uVar21,bVar25);
    *(byte **)(pbVar61 + (int)puVar68 * 8) =
         pbVar60 + (uint)(0xd2 < bVar9) + *(int *)(pbVar61 + (int)puVar68 * 8);
    pbVar63 = (byte *)segment(in_DS,(short)pbVar35 + (short)pbVar61);
    bVar9 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar25;
    pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,param_3);
    pbVar59 = pbStack_28;
    if (CARRY1(bVar9,bVar25)) break;
code_r0x00403307:
    while( true ) {
      cVar12 = (char)ppbVar18 + 'o';
      piVar15 = (int *)CONCAT31((int3)((uint)ppbVar18 >> 8),cVar12);
      *pbVar61 = *pbVar61 + cVar12;
      *(undefined2 *)pbVar35 = param_3;
      *pbVar62 = *pbVar62 + cVar12;
      *pbVar62 = *pbVar62 - (char)pbVar35;
      *(char *)piVar15 = (char)*piVar15 + cVar12;
      bVar9 = *(byte *)((int)puVar68 + -0x5e);
      *(char *)piVar15 = (char)*piVar15 + cVar12;
      iVar16 = *piVar15;
      *(char *)(in_GS_OFFSET + (int)piVar15) = *(char *)(in_GS_OFFSET + (int)piVar15) + cVar12;
      ppbVar18 = &pbStack_28;
      ppbVar17 = &pbStack_28;
      pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,param_3);
      pbVar63 = pbStack_28;
      pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                                 CONCAT11(((byte)((uint)pbVar62 >> 8) | bVar9) + (char)iVar16 +
                                          *pbVar60,(char)pbVar62 - *pbVar60));
      *(char *)piVar15 = (char)*piVar15 + cVar12;
      pbVar61 = pbVar61 + *piVar15;
      pbStack_28._0_1_ = (char)param_3;
      bVar25 = (byte)&pbStack_28;
      pbStack_28._1_3_ = SUB43(pbVar63,1);
      pbStack_28 = (byte *)CONCAT31(pbStack_28._1_3_,(char)pbStack_28 + bVar25 * '\x03');
      *pbVar60 = *pbVar60 + bVar25;
      *pcVar29 = *pcVar29 - (char)pbVar35;
      bVar9 = *pbVar61;
      *pbVar61 = *pbVar61 + bVar25;
      uStack_24 = param_3;
      if (!CARRY1(bVar9,bVar25)) break;
      pbStack_28 = (byte *)((uint)pbStack_28._1_3_ << 8);
    }
code_r0x0040333c:
    pcVar13 = (char *)((int)ppbVar17 + 0x7b027000);
    pbVar63 = (byte *)((int)puVar68 + (int)pcVar29 * 2);
    *pbVar63 = *pbVar63 + (char)pcVar13;
    *pbVar61 = *pbVar61 + (char)pcVar13 + *pcVar13;
    cRam03060000 = cRam8c0a0000;
    pbVar63 = pbVar61 + (uint)bVar74 * -8 + 4;
    out(*(undefined4 *)pbVar61,uVar71);
    puVar32 = (uint *)CONCAT31((int3)((uint)pcVar13 >> 8),cRam8c0a0000);
    *pbVar62 = *pbVar62 + cRam8c0a0000;
    *pbVar60 = *pbVar60 - (char)((uint)pcVar13 >> 8);
    *pbVar60 = *pbVar60 + (char)pbVar62;
    pbVar61 = pbVar63 + (uint)bVar74 * -8 + 4;
    out(*(undefined4 *)pbVar63,uVar71);
    puVar68 = (uint *)((uint)puVar68 ^ *puVar32);
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + (char)*puVar32,(char)pbVar62));
    pcVar29 = pcStack_1c;
code_r0x00403365:
    cVar12 = (char)puVar32;
    *(char *)puVar32 = (char)*puVar32 + cVar12;
    pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                               CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x38],(char)pbVar35));
    *(char *)puVar32 = (char)*puVar32 + cVar12;
    uVar21 = (undefined3)((uint)puVar32 >> 8);
    cVar12 = cVar12 + 'o' + *(char *)CONCAT31(uVar21,cVar12 + 'o');
    pbVar63 = (byte *)CONCAT31(uVar21,cVar12);
    bVar9 = *pbVar61;
    *pbVar61 = *pbVar61 + cVar12;
    pbVar64 = pbVar61;
    if (*pbVar61 == 0 || SCARRY1(bVar9,cVar12) != (char)*pbVar61 < '\0') goto code_r0x004033b0;
  }
  *(byte *)ppbVar18 = (char)*ppbVar18 + bVar25;
  bVar72 = false;
  bVar25 = bVar25 | *(byte *)((int)ppbVar18 + 0x400003b);
  pbVar20 = (byte *)CONCAT31(uVar21,bVar25);
  uStack_24 = param_3;
  if ('\0' < (char)bVar25) {
    *pbVar20 = *pbVar20 + bVar25;
    iVar16 = CONCAT31(uVar21,bVar25 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar25);
    iRam02060000 = iVar16;
    *(byte *)puVar68 = (byte)*puVar68 - (char)pbVar35;
    *pbVar61 = *pbVar61 + (char)iVar16;
    bVar25 = (char)iVar16 - 0x25;
    pbVar63 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar25);
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + *pbVar63,(char)pbVar62));
    bVar9 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar25;
    pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,param_3);
    if (CARRY1(bVar9,bVar25)) goto code_r0x004033e7;
    pbVar20 = pbVar63 + 2;
    *pbVar20 = *pbVar20 + bVar26;
    pbVar64 = pbVar61;
    uStack_2c = param_3;
    if ((POPCOUNT(*pbVar20) & 1U) != 0) goto _ctor;
code_r0x004033b0:
    *pbVar63 = *pbVar63 + (char)pbVar63;
    cVar12 = (char)pbVar63 + 'o';
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar63 >> 8),cVar12);
    *pbVar64 = *pbVar64 + cVar12;
    *(undefined2 *)pbVar35 = param_3;
    *pbVar62 = *pbVar62 + cVar12;
    *pbVar60 = *pbVar60 - (char)((uint)pbVar63 >> 8);
    bVar72 = CARRY1(*pbVar60,(byte)pbVar62);
    *pbVar60 = *pbVar60 + (byte)pbVar62;
    pbVar61 = pbVar64 + (uint)bVar74 * -8 + 4;
    out(*(undefined4 *)pbVar64,uVar71);
    pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,cVar12);
  }
  pbVar64 = pbVar61 + (uint)bVar72 + *(int *)pbVar20;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar20 >> 8),(byte)pbVar20 + *pbVar20);
  pbVar61 = (byte *)((int)piVar15 + (uint)CARRY1((byte)pbVar20,*pbVar20) + *piVar15);
  bVar9 = *pbVar61;
  bVar25 = (byte)pbVar61;
  *pbVar61 = *pbVar61 + bVar25;
  pbVar63 = (byte *)CONCAT31((int3)((uint)pbVar61 >> 8),bVar25 + CARRY1(bVar9,bVar25));
  do {
    *pbVar62 = *pbVar62 + (char)pbVar60;
    pbVar60[0xa0a0000] = pbVar60[0xa0a0000] - (char)((uint)pbVar63 >> 8);
    uStack_34 = (byte *)CONCAT22(uStack_34._2_2_,param_3);
    pbVar59 = uStack_34;
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + *pbVar63,(char)pbVar62));
    *pbVar63 = *pbVar63 + (char)pbVar63;
    uStack_34 = (byte *)((uint)uStack_34._2_2_ << 0x10);
    pbVar61 = pbVar64 + (uint)bVar74 * -8 + 4;
    out(*(undefined4 *)pbVar64,(short)pbVar60);
    pbRam2a0a0000 = pbVar63;
code_r0x004033e7:
    pbVar60 = pbVar60 + 1;
    pbVar64 = pbVar61;
_ctor:
    uVar6 = uStack_30._2_2_;
    iVar16 = CONCAT31((int3)((uint)pbVar63 >> 8),(char)pbVar63 + *pbVar35) + 0x6128;
    uStack_30 = (byte *)((uint)uStack_30._2_2_ << 0x10);
    bVar25 = (char)iVar16 + *(char *)((int)puVar68 * 2 + 0x400003e);
    pbVar63 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar25);
    cVar12 = (char)pbVar60 - *pbVar35;
    puVar32 = (uint *)CONCAT31((int3)((uint)pbVar60 >> 8),cVar12);
    *(byte *)puVar32 = (byte)*puVar32 ^ bVar25;
    *pbVar63 = *pbVar63 + (char)((uint)pbVar35 >> 8);
    *pbVar63 = *pbVar63 + bVar25;
    *pbVar62 = *pbVar62 + cVar12;
    bVar9 = *pbVar63;
    *pbVar63 = *pbVar63 + bVar25;
    *(byte **)(pbVar35 + -0x41) = pbVar64 + (uint)CARRY1(bVar9,bVar25) + *(int *)(pbVar35 + -0x41);
    do {
      *pbVar63 = *pbVar63 + (byte)pbVar63;
      uVar21 = (undefined3)((uint)pbVar63 >> 8);
      bVar9 = (byte)pbVar63 | *pbVar64;
      uVar70 = (undefined2)((uint)pbVar35 >> 0x10);
      uVar34 = SUB41(pbVar35,0);
      cVar37 = (char)((uint)pbVar35 >> 8) + pbVar35[0x69];
      *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
      cVar12 = bVar9 + 0x7d;
      pcVar13 = (char *)CONCAT31(uVar21,cVar12);
      pbVar64[(int)pcVar13] = pbVar64[(int)pcVar13] + cVar12;
      cVar37 = cVar37 + *(char *)(CONCAT22(uVar70,CONCAT11(cVar37,uVar34)) + 0x67);
      *pcVar13 = *pcVar13 + cVar12;
      pcVar13 = (char *)CONCAT31(uVar21,bVar9 - 6);
      puVar65 = (uint *)(pbVar64 + (uint)bVar74 * -8 + 4);
      out(*(undefined4 *)pbVar64,(short)puVar32);
      *pcVar13 = *pcVar13 + (bVar9 - 6);
      cVar37 = cVar37 + *(char *)(CONCAT22(uVar70,CONCAT11(cVar37,uVar34)) + 0x6b);
      *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
      pcVar13 = (char *)CONCAT31(uVar21,bVar9 + 0x7d);
      pbVar61 = (byte *)((int)puVar65 + (int)pcVar13);
      *pbVar61 = *pbVar61 + bVar9 + 0x7d;
      cVar37 = cVar37 + *(char *)(CONCAT22(uVar70,CONCAT11(cVar37,uVar34)) + 0x6a);
      pbVar35 = (byte *)CONCAT22(uVar70,CONCAT11(cVar37,uVar34));
      puVar69 = puVar32;
      do {
        cVar12 = (char)pcVar13;
        *pcVar13 = *pcVar13 + cVar12;
        uVar21 = (undefined3)((uint)pcVar13 >> 8);
        bVar9 = cVar12 + 0x7d;
        pcVar29 = (char *)CONCAT31(uVar21,bVar9);
        *(byte *)((int)puVar65 + (int)pcVar29) = *(byte *)((int)puVar65 + (int)pcVar29) + bVar9;
        uVar27 = (undefined3)((uint)puVar69 >> 8);
        bVar25 = (char)puVar69 - *(byte *)((int)puVar69 + 0x457e02);
        puVar32 = (uint *)CONCAT31(uVar27,bVar25);
        pbVar59[0x6fe1411] = pbVar59[0x6fe1411] + bVar9;
        uVar19 = *puVar65;
        uVar5 = *puVar65;
        *(byte *)puVar65 = (byte)*puVar65 + bVar9;
        if (CARRY1((byte)uVar19,bVar9)) {
          *pcVar29 = *pcVar29 + bVar9;
          bVar9 = bVar9 | pcVar29[0x4000045];
          piVar15 = (int *)CONCAT31(uVar21,bVar9);
          if ((char)bVar9 < '\x01') {
            *(byte *)puVar32 = (byte)*puVar32 + bVar9;
            uStack_30._2_2_ = uVar6;
            goto code_r0x004034a0;
          }
          *(byte *)piVar15 = (char)*piVar15 + bVar9;
          bVar9 = bVar9 + 0x6f;
          pcVar29 = (char *)CONCAT31(uVar21,bVar9);
          *pcVar29 = *pcVar29 + bVar9;
          pbVar59 = pbVar59 + -*puVar32;
          *pcVar29 = *pcVar29 + bVar9;
          *pbVar35 = *pbVar35 + bVar25;
          *(byte *)((int)pcVar29 * 2) = *(byte *)((int)pcVar29 * 2) ^ bVar9;
          bVar73 = 9 < (bVar9 & 0xf) || (bool)bVar73;
          uVar19 = CONCAT31(uVar21,bVar9 + bVar73 * '\x06') & 0xffffff0f;
          cVar12 = (char)uVar19;
          pcVar13 = (char *)CONCAT22((short)(uVar19 >> 0x10),
                                     CONCAT11((char)((uint)pcVar13 >> 8) + bVar73,cVar12));
          *pcVar13 = *pcVar13 + cVar12;
          cRam72110000 = cRam72110000 + bVar25;
          puVar57 = (undefined2 *)segment(param_3,(short)auStack_38 + -2);
          *puVar57 = param_3;
          pcVar13[0x1a] = pcVar13[0x1a] + (char)((uint)puVar69 >> 8);
          cVar12 = (char)pbVar62;
          *pbVar62 = *pbVar62 + cVar12;
          *puVar32 = (uint)(pbVar62 + *puVar32);
          pbStack_28 = (byte *)CONCAT22(pbStack_28._2_2_,param_3);
          cVar37 = cVar37 + pbVar35[0x70];
          *pbVar62 = *pbVar62 + cVar12;
          uVar21 = (undefined3)((uint)pbVar62 >> 8);
          bVar9 = cVar12 + 0xa2;
          cVar37 = cVar37 + *(char *)(CONCAT22(uVar70,CONCAT11(cVar37,uVar34)) + 0x6f);
          pbVar35 = (byte *)CONCAT22(uVar70,CONCAT11(cVar37,uVar34));
          *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
          bVar26 = cVar12 + 0x44;
          piVar15 = (int *)CONCAT31(uVar21,bVar26);
          *(byte *)puVar32 = ((byte)*puVar32 - bVar26) - (0x5d < bVar9);
          if ((POPCOUNT((byte)*puVar32) & 1U) != 0) {
            *(byte *)piVar15 = (char)*piVar15 + bVar26;
            *(byte *)piVar15 = (char)*piVar15 + bVar26;
            *(char *)piVar15 = (char)*piVar15 + cVar37;
            puVar32 = (uint *)CONCAT22((short)((uint)puVar69 >> 0x10),(ushort)bVar25);
            *(byte *)piVar15 = (char)*piVar15 + bVar26;
            pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                                       CONCAT11((char)((uint)pbVar62 >> 8) + (char)*piVar15,cVar12))
            ;
            uStack_30 = pbVar35;
            uStack_2c = param_3;
            uStack_24 = param_3;
            goto code_r0x00403511;
          }
          *(byte *)piVar15 = (char)*piVar15 + bVar26;
          cVar12 = cVar12 + -0x1a;
          piVar15 = (int *)CONCAT31(uVar21,cVar12);
          uStack_30 = (byte *)CONCAT22(uVar6,param_3);
          *puVar32 = (*puVar32 - (int)piVar15) - (uint)(0x5d < bVar26);
          if ((POPCOUNT(*puVar32 & 0xff) & 1U) != 0) {
            *(byte *)puVar32 = (byte)*puVar32 + cVar12;
            uStack_2c = param_3;
            uStack_24 = param_3;
            goto code_r0x004034f3;
          }
          *(char *)piVar15 = (char)*piVar15 + cVar12;
          uStack_2c = param_3;
          uStack_24 = param_3;
          goto code_r0x0040349e;
        }
        pcVar13 = pcVar29;
        puVar69 = puVar32;
      } while (SCARRY1((byte)uVar5,bVar9) == (char)(byte)*puVar65 < '\0');
      *pcVar29 = *pcVar29 + bVar9;
      piVar15 = (int *)CONCAT31(uVar21,cVar12 + -0x59);
      pbVar64 = (byte *)((int)puVar65 + (uint)(0xd5 < bVar9) + *piVar15);
      bVar26 = cVar12 + -0x59 + (char)*piVar15;
      pbVar63 = (byte *)CONCAT31(uVar21,bVar26);
      bVar9 = *pbVar63;
      *pbVar63 = *pbVar63 + bVar26;
      *(byte **)pbVar63 = pbVar63 + (uint)CARRY1(bVar9,bVar26) + *(int *)pbVar63;
      bVar9 = *pbVar62;
      *pbVar62 = *pbVar62 + bVar25;
    } while (CARRY1(bVar9,bVar25));
    *pbVar64 = *pbVar64 + bVar26;
    cVar12 = bVar25 - *pbVar35;
    pbVar60 = (byte *)CONCAT31(uVar27,cVar12);
    *pbVar60 = *pbVar60 ^ bVar26;
    *pbVar35 = *pbVar35 + cVar12;
    *pbVar63 = *pbVar63 + bVar26;
    *(char *)((int)pbVar63 * 2) = *(char *)((int)pbVar63 * 2) + cVar12;
  } while( true );
code_r0x0040349e:
  piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + -0x5e);
code_r0x004034a0:
  uStack_34 = (byte *)((uint)uStack_34._2_2_ << 0x10);
  pbVar62[0x2a0a0000] = pbVar62[0x2a0a0000] - (char)pbVar62;
  pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((char)((uint)pbVar62 >> 8) + (char)*piVar15,(char)pbVar62));
  bVar9 = (byte)piVar15;
  *(byte *)piVar15 = (char)*piVar15 + bVar9;
  uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,param_3);
  puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),
                             (char)puVar32 - *(byte *)((int)puVar32 + 0x467e02));
  pbVar59[0x6fe1411] = pbVar59[0x6fe1411] + bVar9;
  uVar19 = *puVar65;
  *(byte *)puVar65 = (byte)*puVar65 + bVar9;
  if (!CARRY1((byte)uVar19,bVar9)) {
    pbVar61 = (byte *)((int)puVar68 + (int)pbVar59 * 2);
    *pbVar61 = *pbVar61 + bVar9;
    goto code_r0x004034f3;
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar9;
  uVar21 = (undefined3)((uint)piVar15 >> 8);
  bVar9 = bVar9 | *(byte *)((int)piVar15 + 0x4000046);
  piVar15 = (int *)CONCAT31(uVar21,bVar9);
  if ((char)bVar9 < '\x01') {
code_r0x00403511:
    pbVar59 = uStack_30;
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,param_3);
    goto code_r0x004034f3;
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar9;
  pbVar61 = (byte *)CONCAT31(uVar21,bVar9 + 0x6f);
  *pbVar61 = *pbVar61 + bVar9 + 0x6f;
  pbVar59 = pbVar59 + -*puVar32;
  auStack_38[0] = in_DS;
  do {
    uStack_34 = (byte *)CONCAT22(uStack_34._2_2_,in_DS);
    bVar9 = *(byte *)((int)puVar68 + 0x17);
    *pbVar61 = *pbVar61 + (byte)pbVar61;
    pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                               CONCAT11((char)((uint)pbVar62 >> 8) + bVar9 | (byte)*puVar32,
                                        (char)pbVar62));
    uVar21 = (undefined3)((uint)pbVar61 >> 8);
    bVar9 = (byte)pbVar61 | (byte)*puVar32;
    bVar25 = bVar9 - *(byte *)CONCAT31(uVar21,bVar9);
    puVar65 = (uint *)((int)puVar65 +
                      (uint)(bVar9 < *(byte *)CONCAT31(uVar21,bVar9)) +
                      *(int *)CONCAT31(uVar21,bVar25));
    pbVar61 = (byte *)CONCAT31(uVar21,bVar25);
    *(byte **)pbVar61 = pbVar61 + *(int *)pbVar61;
    *(byte *)puVar65 = (byte)*puVar65 + (char)puVar32;
    bVar9 = *pbVar61;
    *pbVar61 = *pbVar61 + bVar25;
    *puVar32 = (uint)(pbVar61 + (uint)CARRY1(bVar9,bVar25) + *puVar32);
    if ((POPCOUNT(*puVar32 & 0xff) & 1U) != 0) {
      *(byte *)puVar65 = (byte)*puVar65 + 1;
      puVar69 = puVar65;
      goto code_r0x00403529;
    }
    *pbVar61 = *pbVar61 + bVar25;
    piVar15 = (int *)CONCAT31(uVar21,bVar25 + 0x6f);
code_r0x004034f3:
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    *(byte *)puVar65 = (byte)*puVar65 + (char)piVar15;
    pbVar59 = pbVar59 + 1;
    pcVar13 = (char *)((int)((uint)piVar15 | 8) + *(int *)((uint)piVar15 | 8));
    *pcVar13 = *pcVar13 + (char)pcVar13;
    piVar15 = (int *)(pcVar13 + 0x53000000);
    bVar9 = (byte)piVar15;
    *(byte *)piVar15 = (char)*piVar15 + bVar9;
    *pbVar35 = *pbVar35 + (char)puVar32;
    *(byte *)piVar15 = (char)*piVar15 + bVar9;
    *pbVar59 = *pbVar59 - (char)pbVar35;
    uVar19 = *puVar65;
    *(byte *)puVar65 = (byte)*puVar65 + bVar9;
    if (CARRY1((byte)uVar19,bVar9)) goto code_r0x0040349e;
    uStack_34 = (byte *)CONCAT22(uStack_34._2_2_,param_3);
    pcVar13[0x5300006f] = pcVar13[0x5300006f] + (char)((uint)puVar32 >> 8);
    pcVar13 = pcVar13 + 0x53000001;
    bVar25 = (byte)pcVar13;
    bRam7e060000 = bVar9;
    *pcVar13 = *pcVar13 + bVar25;
    pbVar61 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar25 + 0x2d);
    puVar65[(int)puVar68 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar25) + puVar65[(int)puVar68 * 2]);
    puVar69 = puVar65;
    auStack_38[0] = param_3;
code_r0x00403529:
    puVar65 = puVar69 + (uint)bVar74 * -2 + 1;
    out(*puVar69,(short)puVar32);
    bVar9 = *pbVar61;
    bVar25 = (byte)pbVar61;
    *pbVar61 = *pbVar61 + bVar25;
  } while (!CARRY1(bVar9,bVar25));
  *pbVar61 = *pbVar61 + bVar25;
  uVar21 = (undefined3)((uint)pbVar61 >> 8);
  bVar25 = bVar25 | pbVar61[0x4000040];
  pcVar13 = (char *)CONCAT31(uVar21,bVar25);
  uVar70 = param_3;
  if ((char)bVar25 < '\x01') goto code_r0x00403579;
  *pcVar13 = *pcVar13 + bVar25;
  cVar12 = bVar25 + 10;
  pcVar13 = (char *)CONCAT31(uVar21,cVar12);
  puVar69 = puVar65;
  if (cVar12 == '\0' || SCARRY1(bVar25,'\n') != cVar12 < '\0') goto code_r0x00403580;
code_r0x0040353f:
  bVar9 = (byte)pcVar13;
  *pcVar13 = *pcVar13 + bVar9;
  piVar15 = (int *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar9 + 0x2d);
  puVar65[(int)puVar68 * 2] =
       (uint)((int)puVar32 + (uint)(0xd2 < bVar9) + puVar65[(int)puVar68 * 2]);
  pbStack_40 = (byte *)CONCAT22(pbStack_40._2_2_,param_3);
code_r0x00403549:
  uVar19 = *puVar65;
  bVar9 = (byte)piVar15;
  *(byte *)puVar65 = (byte)*puVar65 + bVar9;
  if (!CARRY1((byte)uVar19,bVar9)) goto code_r0x004034f3;
  *(byte *)piVar15 = (char)*piVar15 + bVar9;
  uVar21 = (undefined3)((uint)piVar15 >> 8);
  bVar9 = bVar9 | *(byte *)((int)piVar15 + 0x4000041);
  if ((char)bVar9 < '\x01') {
    *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar62;
    *(byte *)puVar32 = (byte)*puVar32;
    pcVar13 = (char *)CONCAT31(uVar21,bVar9 + 0x7e);
    puVar32 = (uint *)((int)puVar32 + 1);
    goto code_r0x004035a1;
  }
  *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
  piVar15 = (int *)CONCAT31(uVar21,bVar9 + 0xb);
  puVar69 = puVar65;
code_r0x0040355b:
  pbVar59 = pbVar59 + -*(int *)((int)puVar69 + 2);
  *pbVar59 = *pbVar59 - (char)pbVar35;
  uVar19 = *puVar69;
  bVar9 = (byte)piVar15;
  *(byte *)puVar69 = (byte)*puVar69 + bVar9;
  if (CARRY1((byte)uVar19,bVar9)) goto code_r0x00403548;
code_r0x00403565:
  piVar15 = piVar15 + 0x1ec09c00;
  pbVar61 = (byte *)((int)puVar68 + (int)pbVar59 * 2);
  *pbVar61 = *pbVar61 + (char)piVar15;
  *(byte *)puVar69 = (byte)*puVar69 + (char)piVar15 + (char)*piVar15;
  puVar65 = puVar69 + (uint)bVar74 * -2 + 1;
  out(*puVar69,(short)puVar32);
  pcVar13 = (char *)CONCAT31((int3)((uint)piVar15 >> 8),cRam8c0a0000);
code_r0x00403579:
  *pbVar62 = *pbVar62 + (char)pcVar13;
  *(byte *)puVar32 = (byte)*puVar32 - (char)((uint)pcVar13 >> 8);
  puVar69 = puVar65;
code_r0x00403580:
  *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar62;
  puVar65 = puVar69 + (uint)bVar74 * -2 + 1;
  out(*puVar69,(short)puVar32);
  bVar9 = (byte)pcVar13;
  puVar32 = (uint *)((int)puVar32 + 1);
  bRam7e060000 = bVar9;
  *pcVar13 = *pcVar13 + bVar9;
  uVar21 = (undefined3)((uint)pcVar13 >> 8);
  bVar25 = bVar9 + 0x2d;
  pcVar13 = (char *)CONCAT31(uVar21,bVar25);
  puVar65[(int)puVar68 * 2] =
       (uint)((int)puVar32 + (uint)(0xd2 < bVar9) + puVar65[(int)puVar68 * 2]);
  pbStack_40 = (byte *)CONCAT22(pbStack_40._2_2_,param_3);
  uVar19 = *puVar65;
  *(byte *)puVar65 = (byte)*puVar65 + bVar25;
  if (!CARRY1((byte)uVar19,bVar25)) {
    pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                               CONCAT11((byte)((uint)pbVar35 >> 8) | *(byte *)((int)puVar65 + 0x41),
                                        (char)pbVar35));
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
    bVar9 = bVar25 + 10;
    if (bVar9 == 0 || SCARRY1(bVar25,'\n') != (char)bVar9 < '\0') {
      pcVar13 = (char *)CONCAT31(uVar21,bVar25 + 8 + (0xf5 < bVar25));
code_r0x004035e5:
      bVar25 = (byte)pcVar13;
      *pcVar13 = *pcVar13 + bVar25;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar9 = bVar25 + 0x2d;
      pcVar13 = (char *)CONCAT31(uVar21,bVar9);
      puVar65[(int)puVar68 * 2] =
           (uint)((int)puVar32 + (uint)(0xd2 < bVar25) + puVar65[(int)puVar68 * 2]);
      uVar19 = *puVar65;
      *(byte *)puVar65 = (byte)*puVar65 + bVar9;
      if (CARRY1((byte)uVar19,bVar9)) {
        *pcVar13 = *pcVar13 + bVar9;
        bVar9 = bVar9 | pcVar13[0x4000044];
        pbVar61 = (byte *)CONCAT31(uVar21,bVar9);
        if ('\0' < (char)bVar9) {
          *pbVar61 = *pbVar61 + bVar9;
          pbVar61 = (byte *)(CONCAT31(uVar21,bVar9 + 0x28) + 0x6f2b0000 + (uint)(0xd7 < bVar9));
          pbRam2a060000 = pbVar61;
          *pbVar35 = *pbVar35 + (char)pbVar35;
          *(byte *)puVar32 = (byte)*puVar32 ^ (byte)pbVar61;
          *pbVar61 = *pbVar61 + (char)((uint)pbVar62 >> 8);
          *pbVar61 = *pbVar61 + (byte)pbVar61;
          puVar69 = puVar68;
          goto code_r0x00403615;
        }
        goto code_r0x00403643;
      }
      pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),
                                 (byte)pbVar62 |
                                 *(byte *)((int)(puVar32 + 0xa004000) + (int)puVar68));
      puVar69 = puVar65;
      goto code_r0x00403580;
    }
    *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
    bVar25 = bVar25 + 0x37;
    piVar15 = (int *)CONCAT31(uVar21,bVar25);
    puVar65[(int)puVar68 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar9) + puVar65[(int)puVar68 * 2]);
    pbStack_40 = (byte *)CONCAT22(pbStack_40._2_2_,param_3);
    uVar19 = *puVar65;
    *(byte *)puVar65 = (byte)*puVar65 + bVar25;
    puVar69 = puVar65;
    if (!CARRY1((byte)uVar19,bVar25)) goto code_r0x0040355b;
    *(byte *)piVar15 = (char)*piVar15 + bVar25;
    bVar25 = bVar25 | *(byte *)((int)piVar15 + 0x4000043);
    pbVar61 = (byte *)CONCAT31(uVar21,bVar25);
    if ((char)bVar25 < '\x01') {
      *pbVar61 = *pbVar61 + bVar25;
      pbVar59 = pbVar59 + -*(int *)((int)puVar68 + -0x5d);
      *pbVar61 = *pbVar61 + bVar25;
      uStack_48 = (undefined4 *)((uint)uStack_48._2_2_ << 0x10);
      piVar15 = (int *)CONCAT31(uVar21,bVar25 - *pbVar61);
      puVar65 = (uint *)((int)puVar65 + (-(uint)(bVar25 < *pbVar61) - *piVar15));
      pbVar61 = (byte *)CONCAT31(uVar21,(bVar25 - *pbVar61) + (char)*piVar15);
      pbStack_40 = (byte *)0x17000000;
      puVar69 = puVar68;
code_r0x00403615:
      bVar9 = *pbVar61;
      bVar25 = (byte)pbVar61;
      *pbVar61 = *pbVar61 + bVar25;
      *puVar32 = (uint)(pbVar61 + (uint)CARRY1(bVar9,bVar25) + *puVar32);
      puVar68 = puVar69;
      if ((POPCOUNT(*puVar32 & 0xff) & 1U) == 0) {
        *pbVar61 = *pbVar61 + bVar25;
        pcVar13 = (char *)CONCAT31((int3)((uint)pbVar61 >> 8),bVar25 + 0x28);
        puVar68 = puVar69 + (uint)bVar74 * -2 + 1;
        uVar19 = in((short)puVar32);
        *puVar69 = uVar19;
        *pcVar13 = *pcVar13 + bVar25 + 0x28;
        pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                                   CONCAT11((byte)((uint)pbVar62 >> 8) | pbVar35[(int)pbVar62],
                                            (char)pbVar62));
        pcVar13[0x28] = pcVar13[0x28] + (char)((uint)puVar32 >> 8);
        goto code_r0x0040362b;
      }
      goto code_r0x00403659;
    }
    *pbVar61 = *pbVar61 + bVar25;
    uVar19 = CONCAT31(uVar21,bVar25 + 0xb);
    piVar15 = (int *)(uVar19 - *puVar65);
    if (uVar19 < *puVar65) {
      cVar12 = (char)piVar15;
      *(char *)piVar15 = (char)*piVar15 + cVar12;
      uVar71 = (undefined2)((uint)pbVar35 >> 0x10);
      cVar37 = (char)pbVar35;
      bVar9 = (byte)((uint)pbVar35 >> 8) | *(byte *)((int)puVar32 + 2);
      *pbVar59 = *pbVar59 - cVar37;
      *(byte *)puVar65 = (byte)*puVar65 + cVar12;
      uStack_48 = (undefined4 *)CONCAT22(uStack_48._2_2_,param_3);
      pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(bVar9 + *(char *)(CONCAT22(uVar71,CONCAT11(bVar9,
                                                  cVar37)) + 0x38),cVar37));
      *(char *)piVar15 = (char)*piVar15 + cVar12;
      pcVar13 = (char *)CONCAT31((int3)((uint)piVar15 >> 8),cVar12 + 'o');
      *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar62;
      *pcVar13 = *pcVar13 - cVar37;
      *pcVar13 = *pcVar13 + cVar12 + 'o';
      puVar68 = (uint *)((int)puVar68 - puVar65[0x11]);
      goto code_r0x004035e5;
    }
    puVar69 = puVar65 + (uint)bVar74 * -2 + 1;
    out(*puVar65,(short)puVar32);
    goto code_r0x00403565;
  }
  if ('\0' < (char)bVar25) goto code_r0x004035e5;
code_r0x0040362b:
  in_NT = ((uint)pbStack_40 & 0x4000) != 0;
  bVar74 = ((uint)pbStack_40 & 0x400) != 0;
  in_IF = ((uint)pbStack_40 & 0x200) != 0;
  in_TF = ((uint)pbStack_40 & 0x100) != 0;
  bVar73 = ((uint)pbStack_40 & 0x10) != 0;
  in_ID = ((uint)pbStack_40 & 0x200000) != 0;
  in_AC = ((uint)pbStack_40 & 0x40000) != 0;
  in_VIP = 0;
  in_VIF = 0;
  cVar12 = (char)pcVar13;
  *pcVar13 = *pcVar13 + cVar12;
  pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                             CONCAT11((byte)((uint)pbVar62 >> 8) | (byte)*puVar32,(char)pbVar62));
  pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                             CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x3e],(char)pbVar35));
  *pcVar13 = *pcVar13 + cVar12;
  pbVar61 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar12 + '(');
  cVar12 = (char)((uint)puVar32 >> 8);
  *(byte *)((int)puVar32 + 0x21) = *(byte *)((int)puVar32 + 0x21) + cVar12;
  pbVar60 = pbVar61 + 2;
  *pbVar60 = *pbVar60 + cVar12;
  bVar9 = *pbVar60;
code_r0x00403643:
  cVar12 = (char)pbVar61;
  if ((POPCOUNT(bVar9) & 1U) == 0) {
    *pbVar61 = *pbVar61 + cVar12;
    uVar21 = (undefined3)((uint)pbVar61 >> 8);
    cVar37 = cVar12 + '(';
    pcVar13 = (char *)CONCAT31(uVar21,cVar37);
    bVar73 = ((uint)pbVar61 & 0x1000) != 0;
    *pcVar13 = *pcVar13 + cVar37;
    puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(byte)puVar32 | (byte)*puVar65);
    pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                               CONCAT11((byte)((uint)pbVar35 >> 8) | *(byte *)((int)puVar65 + 0x3f),
                                        (char)pbVar35));
    *pcVar13 = *pcVar13 + cVar37;
    pbVar61 = (byte *)CONCAT31(uVar21,cVar12 + 'M');
    puVar32 = (uint *)((uint)puVar32 | *puVar32);
    *pbVar61 = *pbVar61 + (char)((uint)pbVar62 >> 8);
code_r0x00403659:
    puVar69 = (uint *)((int)puVar68 + (uint)bVar74 * -2 + 1);
    bVar9 = (byte)pbVar61;
    *(byte *)puVar68 = bVar9;
    *pbVar61 = *pbVar61 + bVar9;
    uVar21 = (undefined3)((uint)pbVar61 >> 8);
    bVar9 = bVar9 | (byte)*puVar32;
    pcVar13 = (char *)CONCAT31(uVar21,bVar9);
    puVar68 = puVar69;
    if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x0040369e;
    *pcVar13 = *pcVar13 + bVar9;
    bVar9 = bVar9 + 2;
    *pbVar59 = *pbVar59 - (char)pbVar35;
    *(byte *)puVar65 = (byte)*puVar65 + bVar9;
    puVar66 = puVar65 + (uint)bVar74 * -2 + 1;
    out(*puVar65,(short)puVar32);
    puVar68 = (uint *)((int)puVar69 + (uint)bVar74 * -2 + 1);
    puVar65 = (uint *)((int)puVar66 + (uint)bVar74 * -2 + 1);
    *(byte *)puVar69 = (byte)*puVar66;
    *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
    cVar37 = (char)((uint)pbVar62 >> 8);
    pbVar35[-0x21f60000] = pbVar35[-0x21f60000] - cVar37;
    cVar12 = (bVar9 | (byte)*puVar65) - 6;
    piVar15 = (int *)CONCAT31(uVar21,cVar12);
    pcVar13 = (char *)((int)piVar15 * 2 + 0x2adc0a00);
    *pcVar13 = *pcVar13 - cVar37;
    *piVar15 = (int)(*piVar15 + (int)puVar32);
    *(char *)piVar15 = (char)*piVar15 + cVar12;
    bVar9 = cVar12 + (char)*piVar15;
    bVar73 = 9 < (bVar9 & 0xf) | bVar73;
    uVar19 = CONCAT31(uVar21,bVar9 + bVar73 * '\x06') & 0xffffff0f;
    pbVar61 = (byte *)CONCAT22((short)(uVar19 >> 0x10),
                               CONCAT11((char)((uint)pbVar61 >> 8) + bVar73,(char)uVar19));
    pbVar60 = pbVar62;
  }
  else {
    *(byte *)puVar32 = (byte)*puVar32 + cVar12;
    *(byte *)puVar68 = (byte)*puVar68 + (char)((uint)puVar32 >> 8);
    pbVar60 = pbVar62;
  }
  *(byte *)puVar65 = (byte)*puVar65 + (char)((uint)pbVar61 >> 8);
  *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar60;
  bVar25 = (byte)pbVar61;
  *pbVar61 = *pbVar61 + bVar25;
  bVar9 = *pbVar61;
  *pbVar61 = *pbVar61 + bVar25;
  pbVar62 = pbVar60;
  pbVar59 = pbStack_40;
  if (!CARRY1(bVar9,bVar25)) goto code_r0x004036a6;
  *pbVar61 = *pbVar61 + bVar25;
  pbVar61 = (byte *)CONCAT31((int3)((uint)pbVar61 >> 8),bVar25 | pbVar61[0x400003f]);
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar60 >> 8),
                             (char)pbVar60 - *(byte *)((int)puVar32 + 0x5040302));
  *(char *)((int)pbVar61 * 2) = *(char *)((int)pbVar61 * 2) - (char)((uint)pbVar60 >> 8);
  while( true ) {
code_r0x004036a6:
    pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),(char)pbVar62 + (byte)*puVar65);
    pbVar61 = (byte *)(CONCAT31((int3)((uint)pbVar61 >> 8),(char)pbVar61 + '%') + 0x1ebd9f3);
    uStack_48 = (undefined4 *)CONCAT22(uStack_48._2_2_,param_3);
    bVar9 = (byte)pbVar61;
    bVar72 = CARRY1(*pbVar61,bVar9);
    *pbVar61 = *pbVar61 + bVar9;
    puVar40 = uStack_48 + -1;
    *(undefined2 *)(uStack_48 + -1) = param_3;
    cVar12 = (char)puVar32;
    uStack_20 = param_3;
    uStack_18 = param_3;
    if (bVar72) {
      *pbVar61 = *pbVar61 + bVar9;
      uVar71 = (undefined2)((uint)pbVar35 >> 0x10);
      bVar26 = (byte)((uint)pbVar35 >> 8) | pbVar59[0x47];
      pcVar13 = (char *)CONCAT22(uVar71,CONCAT11(bVar26,(char)pbVar35));
      *pbVar61 = *pbVar61 + bVar9;
      uVar21 = (undefined3)((uint)pbVar61 >> 8);
      bVar9 = bVar9 + 0x2a;
      *pcVar13 = *pcVar13 + cVar12;
      pbVar61 = (byte *)((int)CONCAT31(uVar21,bVar9) * 2);
      *pbVar61 = *pbVar61 ^ bVar9;
      bVar9 = bVar9 ^ *(byte *)CONCAT31(uVar21,bVar9);
      pbVar61 = (byte *)CONCAT31(uVar21,bVar9);
      bVar25 = *pbVar61;
      *pbVar61 = *pbVar61 + bVar9;
      *pbVar61 = (*pbVar61 - bVar9) - CARRY1(bVar25,bVar9);
      *pbVar62 = *pbVar62 + cVar12;
      pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(bVar26 + pcVar13[0x38],(char)pbVar35));
      *pbVar61 = *pbVar61 + bVar9;
      cVar37 = bVar9 + 2;
      if ((POPCOUNT(cVar37) & 1U) != 0) {
        pcVar1 = (code *)swi(7);
        uVar77 = (*pcVar1)();
        pbVar62 = extraout_ECX_00;
        pbStack_40._0_2_ = param_3;
        goto code_r0x0040371e;
      }
      *(char *)CONCAT31(uVar21,cVar37) = *(char *)CONCAT31(uVar21,cVar37) + cVar37;
      bVar9 = bVar9 + 0x71;
      pbVar61 = (byte *)CONCAT31(uVar21,bVar9);
      uVar70 = *(undefined2 *)(uStack_48 + -1);
      *pbVar61 = *pbVar61 + bVar9;
      iVar16 = (int)pbVar62 - *puVar32;
      pbVar62 = (byte *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                 CONCAT11((char)((uint)iVar16 >> 8) + *pbVar61,(char)iVar16));
      pbVar59 = (byte *)*uStack_48;
      bVar72 = CARRY1(*pbVar61,bVar9);
      *pbVar61 = *pbVar61 + bVar9;
      *(undefined2 *)uStack_48 = param_3;
      *(undefined2 *)(uStack_48 + -1) = param_3;
    }
    bVar9 = (byte)pbVar61;
    uVar21 = (undefined3)((uint)pbVar61 >> 8);
    if (bVar72) break;
    *(byte *)puVar32 = (byte)*puVar32 + (byte)pbVar62;
    *(byte *)((int)puVar32 + (int)pbVar59) = *(byte *)((int)puVar32 + (int)pbVar59) + bVar9;
    pcVar13 = (char *)CONCAT31(uVar21,(byte)*puVar32);
code_r0x0040369e:
    pbVar61 = (byte *)(pcVar13 + *(int *)(pcVar13 + 0x6c28));
  }
  *pbVar61 = *pbVar61 + bVar9;
  uVar23 = (uint3)((uint)pbVar62 >> 8);
  pbVar60 = (byte *)CONCAT31(uVar23,(byte)pbVar62 | *pbVar35);
  uVar70 = *(undefined2 *)uStack_48;
  puVar40 = uStack_48 + 1;
  puVar69 = puVar65 + (uint)bVar74 * -2 + 1;
  out(*puVar65,(short)puVar32);
  puVar68 = (uint *)((int)puVar68 + (uint)bVar74 * -2 + 1);
  *pbVar61 = *pbVar61 + bVar9;
  bVar9 = bVar9 | (byte)*puVar68;
  pbVar61 = (byte *)CONCAT31(uVar21,bVar9);
  *(byte *)(puVar68 + 0x1bc28000) = (byte)puVar68[0x1bc28000] - (char)((uint)pbVar62 >> 8);
  pbRam2a060000 = (byte *)CONCAT31(pbRam2a060000._1_3_,bVar9);
  *(undefined2 *)uStack_48 = pbStack_40._0_2_;
  cVar37 = (char)pbVar35;
  cVar8 = cVar37 - (byte)*puVar32;
  pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar8);
  if (cVar8 != '\0' && (char)(byte)*puVar32 <= cVar37) {
    *pbVar61 = *pbVar61 + bVar9;
    iVar16 = CONCAT31(uVar21,bVar9 + 0x2a);
    puVar65 = (uint *)((int)puVar69 + 1);
    cVar37 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + -0x7b);
    uVar77 = CONCAT44(CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(cVar37,cVar12)),iVar16);
    pbStack_40._0_2_ = *(undefined2 *)uStack_48;
    pcVar13 = (char *)(iVar16 + 0x6f);
    *pcVar13 = *pcVar13 + cVar37;
    pbVar60 = (byte *)((uint)uVar23 << 8);
    do {
      piVar15 = (int *)((ulonglong)uVar77 >> 0x20);
      pcVar13 = (char *)uVar77;
      *(char *)piVar15 = (char)*piVar15;
      if ((char)*piVar15 == '\0') {
        pbVar35 = (byte *)((uint)pbVar35 & 0xffffff00);
_ctor:
        puVar32 = (uint *)((ulonglong)uVar77 >> 0x20);
        pbVar60 = (byte *)((uint)CONCAT21((short)((uint)pbVar60 >> 0x10),
                                          (char)((uint)pbVar60 >> 8) + *(char *)uVar77) << 8);
        pbVar35 = (byte *)((uint)pbVar35 & 0xffffff00);
        *(byte *)puVar32 = (byte)*puVar32;
        uVar21 = (undefined3)((ulonglong)uVar77 >> 8);
        bVar25 = (char)uVar77 - *(char *)uVar77;
        pbVar62 = (byte *)CONCAT31(uVar21,bVar25);
        bVar9 = *pbVar62;
        *pbVar62 = *pbVar62 + bVar25;
        puVar69 = (uint *)((int)puVar65 + (uint)CARRY1(bVar9,bVar25) + *(int *)pbVar62);
        pbVar61 = (byte *)CONCAT31(uVar21,bVar25);
        uStack_48 = puVar40;
        break;
      }
      *pcVar13 = *pcVar13 + (char)uVar77;
      *piVar15 = (int)(pbVar59 + *piVar15);
      puVar65 = (uint *)((int)puVar65 + 1);
      uVar77 = CONCAT44(CONCAT22((short)((ulonglong)uVar77 >> 0x30),
                                 CONCAT11((char)((ulonglong)uVar77 >> 0x28) +
                                          *(char *)((int)piVar15 + -0x33),
                                          (char)((ulonglong)uVar77 >> 0x20))),pcVar13);
      pbStack_40._0_2_ = *(undefined2 *)puVar40;
      puVar40 = (undefined4 *)((int)puVar40 + 4);
      pbVar62 = pbVar60;
code_r0x0040371e:
      puVar32 = (uint *)((ulonglong)uVar77 >> 0x20);
      pbVar61 = (byte *)uVar77;
      bVar25 = (byte)((ulonglong)uVar77 >> 0x28);
      pbVar61[0x6f] = pbVar61[0x6f] + bVar25;
      pbVar60 = (byte *)((uint)pbVar62 & 0xffffff00);
      *(char *)puVar32 = (char)*puVar32;
      bVar9 = (byte)uVar77;
      if ((char)*puVar32 != '\0') {
        *pbVar61 = *pbVar61 + bVar9;
        uVar19 = *puVar32;
        *puVar32 = (uint)(pbVar59 + *puVar32);
        piVar42 = (int *)((int)puVar40 + -4);
        *(uint **)((int)puVar40 + -4) = puVar65;
        if (CARRY4(uVar19,(uint)pbVar59)) {
          *pbVar61 = *pbVar61 + bVar9;
          *(undefined2 *)((int)puVar40 + -8) = pbStack_40._0_2_;
          puVar69 = puVar32 + 0x1d028000;
          uVar19 = *puVar69;
          *(byte *)puVar69 = (byte)*puVar69 - bVar25;
          *(uint *)pbVar61 = (*(int *)pbVar61 - (int)pbVar61) - (uint)((byte)uVar19 < bVar25);
          *(byte *)puVar32 = (char)*puVar32 + bVar9;
          *pbVar59 = *pbVar59;
          uVar77 = CONCAT44(puVar32,CONCAT31((int3)((ulonglong)uVar77 >> 8),bVar9 + 0x2a));
          puVar41 = (undefined2 *)((int)puVar40 + -0xc);
          puVar40 = (undefined4 *)((int)puVar40 + -0xc);
          *puVar41 = in_DS;
          goto _ctor;
        }
        bVar72 = false;
        pcVar13 = (char *)CONCAT31((int3)((uint)pbVar62 >> 8),*pbVar61);
        goto code_r0x004037a7;
      }
      bVar25 = *pbVar61;
      *pbVar61 = *pbVar61 + bVar9;
      *(uint *)pbVar61 = (*(int *)pbVar61 - (int)pbVar61) - (uint)CARRY1(bVar25,bVar9);
      bVar9 = *pbVar60;
      bVar25 = (byte)((ulonglong)uVar77 >> 0x20);
      *pbVar60 = *pbVar60 + bVar25;
      if (CARRY1(bVar9,bVar25)) goto code_r0x0040375a;
    } while( true );
  }
  uVar77 = CONCAT44(puVar32,pbVar61);
  puVar65 = puVar69 + (uint)bVar74 * -2 + 1;
  out(*puVar69,(short)puVar32);
  bVar25 = (byte)pbVar61;
  *pbVar61 = *pbVar61 + bVar25;
  *pbVar60 = *pbVar60 + (char)pbVar35;
  bVar9 = *pbVar61;
  *pbVar61 = *pbVar61 + bVar25;
  *(byte **)(pbVar35 + -0x49) =
       (byte *)((int)puVar65 + (uint)CARRY1(bVar9,bVar25) + *(int *)(pbVar35 + -0x49));
  puVar40 = uStack_48;
code_r0x0040375a:
  pbVar62 = (byte *)uVar77;
  *pbVar62 = *pbVar62 + (char)uVar77;
  bVar72 = CARRY1((byte)((uint)pbVar60 >> 8),*pbVar62);
  *(undefined2 *)((int)puVar40 + -4) = uVar70;
  iVar16 = CONCAT31(0x1f0a00,bVar72 + 'o') + *(int *)(pbVar35 + (int)pbVar59) +
           (uint)(0x90 < bVar72) + -1;
  uRam0d0a0000 = uRam0d0a0000 | (uint)((ulonglong)uVar77 >> 0x20);
  pcVar29 = (char *)(CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + -0x66) | *puVar68);
  bVar9 = *(byte *)((int)puVar68 + -0x46);
  pcVar13 = (char *)CONCAT22(0xd0a,(ushort)bVar9 << 8);
  *pcVar29 = *pcVar29 + (char)pcVar29;
  bVar25 = (byte)((ulonglong)uVar77 >> 0x20);
  puVar33 = (undefined1 *)
            CONCAT22((short)((ulonglong)uVar77 >> 0x30),
                     CONCAT11((byte)((ulonglong)uVar77 >> 0x28) | pbVar35[(int)pbVar59],bVar25));
  *pcVar13 = *pcVar13 + (char)pcVar29;
  *pbVar59 = *pbVar59 - bVar9;
  *puVar33 = *puVar33;
  pbVar62 = (byte *)(((uint)pcVar29 | 8) + 0x4490f9d8);
  bVar9 = (byte)pbVar62;
  *pbVar62 = *pbVar62 + bVar9;
  uVar19 = *puVar65;
  *(uint *)((int)puVar65 + (int)pbVar62) = *(uint *)((int)puVar65 + (int)pbVar62) ^ (uint)pcVar13;
  *pbVar62 = *pbVar62 | bVar9;
  piVar42 = (int *)0x2609fffc;
  bVar72 = false;
  uRam2609fffc = pbStack_40._0_2_;
  *pbVar62 = *pbVar62 | bVar9;
  uVar77 = CONCAT44(CONCAT31((int3)((uint)puVar33 >> 8),bVar25 | (byte)uVar19),pbVar62);
code_r0x004037a7:
  while( true ) {
    pbVar62 = (byte *)((ulonglong)uVar77 >> 0x20);
    uVar70 = (undefined2)((ulonglong)uVar77 >> 0x20);
    out(*puVar65,uVar70);
    out(puVar65[(uint)bVar74 * -2 + 1],uVar70);
    puVar32 = (uint *)((int)puVar68 + (int)pbVar62);
    uVar19 = *puVar32;
    uVar5 = (uint)uVar77 + *puVar32;
    *puVar32 = uVar5 + bVar72;
    iVar16 = *piVar42 + *(int *)(pcVar13 + (int)pbVar62) +
             (uint)(CARRY4(uVar19,(uint)uVar77) || CARRY4(uVar5,(uint)bVar72));
    cVar12 = (char)iVar16 + '\t';
    pbVar61 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),cVar12);
    pcVar29 = (char *)((uint)bVar74 * -8 + 0x260a0004);
    out(uRam260a0000,uVar70);
    uVar70 = (undefined2)piVar42[1];
    *pbVar61 = *pbVar61 + cVar12;
    bVar25 = (byte)((uint)pcVar13 >> 8) | *pbVar62;
    *(undefined2 *)(piVar42 + 1) = in_DS;
    bVar9 = *pbVar61;
    pbVar61 = pbVar61 + (uint)CARRY1(bVar25,*pbVar61) + *(int *)pbVar61;
    *pbVar62 = *pbVar62 + 6;
    cVar37 = (char)pbVar35 - *pcVar29;
    pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),CONCAT11(bVar25 + bVar9 + *pbVar61,6))
    ;
    *pbVar61 = *pbVar61;
    *(undefined2 *)piVar42 = pbStack_40._0_2_;
    uVar21 = (undefined3)((uint)pbVar61 >> 8);
    cVar12 = (char)pbVar61 - *pbVar61;
    piVar15 = (int *)CONCAT31(uVar21,cVar12);
    puVar65 = (uint *)(pcVar29 + *piVar15);
    bVar9 = cVar12 + (char)*piVar15;
    pcVar29 = (char *)CONCAT31(uVar21,bVar9);
    piVar43 = piVar42 + -1;
    piVar42[-1] = (int)pcVar13;
    *pcVar29 = *pcVar29 + bVar9;
    *pcVar29 = *pcVar29 + bVar9;
    *pcVar29 = *pcVar29 + bVar9;
    bVar72 = CARRY1(*pbVar62,bVar9);
    *pbVar62 = *pbVar62 + bVar9;
    if (bVar72) break;
    pbStack_40._0_2_ = (undefined2)piVar42[-1];
    pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar37);
    uVar77 = CONCAT44(pbVar62,pcVar29);
  }
  *pcVar29 = *pcVar29 + bVar9;
  pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                             CONCAT11((byte)((uint)pbVar35 >> 8) | bRam080a0056,cVar37));
  *pcVar29 = *pcVar29 + bVar9;
  bVar25 = bVar9 + 2;
  *pbVar35 = *pbVar35 - (char)((ulonglong)uVar77 >> 0x20);
  *(char *)CONCAT31(uVar21,bVar25) = *(char *)CONCAT31(uVar21,bVar25) + bVar25;
  uVar19 = *puVar65;
  uVar27 = (undefined3)((uint)pcVar13 >> 8);
  pbVar61 = (byte *)(CONCAT31(uVar27,(byte)uVar19) | 6);
  bVar73 = 9 < (bVar9 + 0x74 & 0xf) | bVar73;
  bVar26 = bVar9 + 0x74 + bVar73 * '\x06';
  bVar26 = bVar26 + (0x90 < (bVar26 & 0xf0) | 0x8d < bVar25 | bVar73 * (0xf9 < bVar26)) * '`';
  pbVar60 = (byte *)CONCAT31(uVar21,bVar26);
  bVar9 = *pbVar60;
  *pbVar60 = *pbVar60 + bVar26;
  if (!SCARRY1(bVar9,bVar26)) {
    *(byte *)puVar65 = (byte)*puVar65 + bVar26;
    puVar65 = (uint *)((int)puVar65 + *(int *)(pbVar62 + 0x33));
    *pbVar60 = *pbVar60 | bVar26;
    *(byte *)puVar65 = (byte)*puVar65 + bVar26;
    bVar9 = bVar26 + 0x72;
    piVar42[-2] = (int)pbVar35;
    *(byte *)CONCAT31(uVar21,bVar9) = *(byte *)CONCAT31(uVar21,bVar9) | bVar9;
    *(byte *)puVar65 = (byte)*puVar65 + bVar9;
    pbVar61 = (byte *)CONCAT31(uVar27,((byte)uVar19 | 6) + (byte)*puVar65);
    pcVar13 = (char *)CONCAT31(uVar21,bVar26 - 0x11);
    piVar43 = piVar42 + -3;
    piVar42[-3] = (int)pbVar61;
    *pcVar13 = *pcVar13 + (bVar26 - 0x11);
    pbVar60 = (byte *)CONCAT31(uVar21,bVar26 - 0xf);
    puVar68 = (uint *)((int)puVar68 + iRam080a0052);
    *pbVar60 = *pbVar60 + (bVar26 - 0xf);
  }
code_r0x00403825:
  pbVar63 = (byte *)0x80a0000;
  uVar21 = (undefined3)((uint)pbVar60 >> 8);
  cVar12 = (char)pbVar60 + '\x7f';
  pcVar13 = (char *)CONCAT31(uVar21,cVar12);
  *(byte **)((int)piVar43 + -4) = pbVar35;
  *pcVar13 = *pcVar13 + cVar12;
  iVar16 = CONCAT31(uVar21,(char)pbVar60 + -0x7f) + 0x547d;
  cVar37 = (char)iVar16;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cVar12 = cVar37 + '*';
  pcVar13 = (char *)CONCAT31(uVar21,cVar12);
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),(byte)pbVar62 | (byte)*puVar65);
  cVar8 = (char)pbVar35 - (byte)*puVar65;
  uVar71 = (undefined2)((uint)pbVar35 >> 0x10);
  cVar11 = (char)((uint)pbVar35 >> 8) + *(char *)(CONCAT31((int3)((uint)pbVar35 >> 8),cVar8) + 0x57)
  ;
  *pcVar13 = *pcVar13 + cVar12;
  bVar9 = cVar37 + 0x54U & *pbVar62;
  iVar16 = CONCAT22(uRam080a0059,CONCAT11(uRam080a0058,uRam080a0057));
  *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
  pcVar13 = (char *)CONCAT31(uVar21,bVar9 + 0x2a);
  *(undefined2 *)((int)piVar43 + -8) = in_DS;
  cVar11 = cVar11 + *(char *)(CONCAT22(uVar71,CONCAT11(cVar11,cVar8)) + 0x58);
  *pcVar13 = *pcVar13 + bVar9 + 0x2a;
  bVar25 = bVar9 + 0x54 & *pbVar62;
  iVar3 = CONCAT13(uRam080a005b,CONCAT21(uRam080a0059,uRam080a0058));
  *(char *)CONCAT31(uVar21,bVar25) = *(char *)CONCAT31(uVar21,bVar25) + bVar25;
  pcVar13 = (char *)CONCAT31(uVar21,bVar25 + 0x2a);
  pbVar60 = *(byte **)((int)piVar43 + -8);
  cVar11 = cVar11 + *(char *)(CONCAT22(uVar71,CONCAT11(cVar11,cVar8)) + 0x55);
  *pcVar13 = *pcVar13 + bVar25 + 0x2a;
  pcVar13 = (char *)CONCAT31(uVar21,bVar25 + 0x57);
  pbVar62 = pbVar62 + *(int *)pbVar60;
  *(undefined4 *)((int)piVar43 + -8) = 0x2a;
  cVar11 = cVar11 + *(char *)(CONCAT22(uVar71,CONCAT11(cVar11,cVar8)) + 0x55);
  *pcVar13 = *pcVar13 + bVar25 + 0x57;
  cVar12 = bVar25 - 0x3a;
  pcVar13 = (char *)CONCAT31(uVar21,cVar12);
  *(undefined2 *)((int)piVar43 + -0xc) = uVar70;
  *pcVar13 = *pcVar13 + cVar12;
  bVar9 = *pbVar62;
  cVar37 = (char)pbVar61;
  *(undefined2 *)((int)piVar43 + -0x10) = in_DS;
  pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(cVar11 + *(char *)(CONCAT22(uVar71,CONCAT11(cVar11,
                                                  cVar8)) + 0x59),cVar8));
  *pcVar13 = *pcVar13 + cVar12;
  bVar10 = bVar25 - 0x10 & *pbVar62;
  puVar68 = (uint *)((int)puVar68 +
                    CONCAT13(uRam080a005c,CONCAT12(uRam080a005b,uRam080a0059)) + iVar3 + iVar16);
  *(char *)CONCAT31(uVar21,bVar10) = *(char *)CONCAT31(uVar21,bVar10) + bVar10;
  bVar10 = bVar10 + 0x2a;
  pbVar64 = (byte *)CONCAT31(uVar21,bVar10);
  puVar40 = (undefined4 *)((int)piVar43 + -0x14);
  *(undefined2 *)((int)piVar43 + -0x14) = in_DS;
  bVar25 = *(byte *)((int)puVar68 + 0x17);
  *pbVar64 = *pbVar64 + bVar10;
  bVar26 = *pbVar62;
  puVar45 = (undefined4 *)((int)piVar43 + -0x18);
  *(undefined2 *)((int)piVar43 + -0x18) = in_DS;
  bVar28 = *(byte *)((int)puVar68 + 0x1a);
  *pbVar64 = *pbVar64 + bVar10;
  pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                             CONCAT11((((byte)((uint)pbVar61 >> 8) | bVar9) + bVar25 | bVar26) +
                                      bVar28 | *pbVar62,cVar37));
  *pbVar35 = *pbVar35 + cVar8;
  *(byte *)((int)pbVar64 * 2) = *(byte *)((int)pbVar64 * 2) ^ bVar10;
  bVar9 = *pbVar64;
  *pbVar64 = *pbVar64 + bVar10;
  bVar25 = *pbVar64;
  *pbVar61 = *pbVar61 + (char)pbVar62;
  bVar9 = ((bVar10 - bVar25) - CARRY1(bVar9,bVar10)) + *pbVar62;
  pbVar64 = (byte *)CONCAT31(uVar21,bVar9);
  if ((POPCOUNT(bVar9) & 1U) != 0) {
    pbVar62 = *(byte **)((int)piVar43 + -0x18);
    goto code_r0x004038f6;
  }
  *pbVar64 = *pbVar64 + bVar9;
  cVar12 = (bVar9 + 0x6f) - (0x90 < bVar9);
  pbVar59 = (byte *)CONCAT31(uVar21,cVar12);
  bVar9 = *pbVar62;
  *pbVar62 = *pbVar62 + cVar37;
  if (SCARRY1(bVar9,cVar37) == (char)*pbVar62 < '\0') {
    cRam33100000 = cRam33100000 - cVar12;
    cVar12 = cVar12 + *pbVar62;
    pbVar64 = (byte *)CONCAT31(uVar21,cVar12);
    puVar40 = (undefined4 *)((int)piVar43 + -0x18);
    goto code_r0x0040390c;
  }
  do {
    *pbVar59 = *pbVar59 + (char)pbVar59;
code_r0x004038b0:
    uVar21 = (undefined3)((uint)pbVar59 >> 8);
    cVar12 = (char)pbVar59 + '\x02';
    pbVar64 = (byte *)CONCAT31(uVar21,cVar12);
    puVar40 = puVar45;
    if ((POPCOUNT(cVar12) & 1U) != 0) {
code_r0x00403908:
      puVar68 = (uint *)((int)puVar68 - *(int *)pbVar60);
      cVar12 = (char)pbVar64 + *pbVar62;
      pbVar64 = (byte *)CONCAT31((int3)((uint)pbVar64 >> 8),cVar12);
code_r0x0040390c:
      cVar37 = (char)pbVar64;
      if ((POPCOUNT(cVar12) & 1U) == 0) goto code_r0x0040390e;
      *pbVar60 = *pbVar60 + cVar37;
      goto code_r0x00403962;
    }
    *pbVar64 = *pbVar64 + cVar12;
    puVar40 = (undefined4 *)((int)puVar45 + -4);
    piVar43 = (int *)((int)puVar45 + -4);
    *(byte **)((int)puVar45 + -4) = pbVar61;
    cVar12 = (char)pbVar59 + '.' + *pbVar62;
    pbVar64 = (byte *)CONCAT31(uVar21,cVar12);
    if ((POPCOUNT(cVar12) & 1U) != 0) {
      pbVar59 = pbVar62 + (int)pbVar64;
      *pbVar59 = *pbVar59 + cVar12;
      bVar9 = *pbVar59;
      goto code_r0x00403912;
    }
    *pbVar64 = *pbVar64 + cVar12;
    bVar9 = cVar12 + 2;
    pbVar64 = (byte *)CONCAT31(uVar21,bVar9);
    puVar40 = (undefined4 *)((int)puVar45 + -4);
    if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403916;
    *pbVar64 = *pbVar64 + bVar9;
    cVar37 = cVar12 + 'q';
    piVar15 = (int *)CONCAT31(uVar21,cVar37);
    *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0x90 < bVar9);
    bVar9 = *pbVar35;
    bVar25 = (byte)((uint)pbVar61 >> 8);
    *pbVar35 = *pbVar35 + bVar25;
    if (!CARRY1(bVar9,bVar25)) {
      out(*(undefined4 *)pbVar60,(short)pbVar62);
      bVar9 = (cVar37 - (char)*piVar15) - CARRY1(bVar9,bVar25);
      *pbVar62 = *pbVar62 + (char)pbVar61;
      cVar12 = bVar9 - *(byte *)CONCAT31(uVar21,bVar9);
      puVar65 = (uint *)(pbVar60 +
                        ((((uint)bVar74 * -8 + 4) - *(int *)CONCAT31(uVar21,cVar12)) -
                        (uint)(bVar9 < *(byte *)CONCAT31(uVar21,bVar9))));
      pbVar60 = (byte *)CONCAT31(uVar21,cVar12);
      goto code_r0x00403825;
    }
    *(char *)piVar15 = (char)*piVar15 + cVar37;
    uVar71 = (undefined2)((uint)pbVar35 >> 0x10);
    bVar9 = (byte)((uint)pbVar35 >> 8) | bRam080a0056;
    *(char *)piVar15 = (char)*piVar15 + cVar37;
    pcVar13 = (char *)CONCAT31(uVar21,cVar12 + 's');
    pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(bVar9 + *(char *)(CONCAT22(uVar71,CONCAT11(bVar9,(
                                                  char)pbVar35)) + 0x56),(char)pbVar35));
    *pcVar13 = *pcVar13 + cVar12 + 's';
    bVar9 = cVar12 - 0xf;
    pbVar62 = *(byte **)((int)puVar45 + -4);
    *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
    bVar25 = cVar12 + 0x1e;
    pbVar59 = (byte *)CONCAT31(uVar21,bVar25);
    *(byte **)(pbVar60 + (int)puVar68 * 8) =
         pbVar62 + (uint)(0xd2 < bVar9) + *(int *)(pbVar60 + (int)puVar68 * 8);
    puVar40 = (undefined4 *)((int)puVar45 + -4);
    puVar47 = (undefined4 *)((int)puVar45 + -4);
    *(undefined2 *)((int)puVar45 + -4) = pbStack_40._0_2_;
    pbStack_40._0_2_ = *(undefined2 *)pbVar59;
    bVar9 = *pbVar60;
    *pbVar60 = *pbVar60 + bVar25;
    if (CARRY1(bVar9,bVar25)) {
      *pbVar59 = *pbVar59 + bVar25;
      pbVar64 = (byte *)CONCAT31(uVar21,bVar25 | pbVar59[0x400005a]);
      if ('\0' < (char)(bVar25 | pbVar59[0x400005a])) {
code_r0x004038f6:
        bVar9 = (byte)pbVar64;
        *pbVar64 = *pbVar64 + bVar9;
        uVar21 = (undefined3)((uint)pbVar64 >> 8);
        cVar12 = ((bVar9 + 0x28) - *(char *)CONCAT31(uVar21,bVar9 + 0x28)) - (0xd7 < bVar9);
        pbVar64 = (byte *)CONCAT31(uVar21,cVar12);
        bVar9 = *pbVar35;
        bVar25 = (byte)((uint)pbVar61 >> 8);
        *pbVar35 = *pbVar35 + bVar25;
        if (CARRY1(bVar9,bVar25)) {
          *pbVar64 = *pbVar64 + cVar12;
          pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                                     CONCAT11(bVar25 | *pbVar64,(char)pbVar61));
          *pbVar60 = *pbVar60 + cVar12;
          goto code_r0x00403908;
        }
        pbVar59 = pbVar64 + -0x6fe1411;
        goto code_r0x00403926;
      }
code_r0x00403950:
      uVar21 = (undefined3)((uint)pbVar64 >> 8);
      bVar25 = (char)pbVar64 + 0x6f;
      bVar9 = *(byte *)CONCAT31(uVar21,bVar25);
      *pbVar62 = *pbVar62 + (char)pbVar61;
      pbVar64 = (byte *)CONCAT31(uVar21,(bVar25 & bVar9) + *pbVar60);
      *pbVar61 = *pbVar61 - (char)((uint)pbVar62 >> 8);
      puVar67 = puVar47;
      goto code_r0x0040395a;
    }
    puVar44 = (undefined4 *)((int)puVar45 + -8);
    puVar45 = (undefined4 *)((int)puVar45 + -8);
    *puVar44 = 0x80a0000;
  } while( true );
code_r0x00403548:
  *(byte *)piVar15 = (char)*piVar15 + bVar9;
  puVar65 = puVar69;
  goto code_r0x00403549;
code_r0x0040390e:
  *pbVar64 = *pbVar64 + cVar37;
  bVar9 = cVar37 + 2;
  pbVar64 = (byte *)CONCAT31((int3)((uint)pbVar64 >> 8),bVar9);
code_r0x00403912:
  bVar72 = (POPCOUNT(bVar9) & 1U) == 0;
  puVar67 = puVar40;
  if (!bVar72) goto code_r0x00403967;
  *pbVar64 = *pbVar64 + (char)pbVar64;
code_r0x00403916:
  bVar28 = (char)pbVar64 + 0x6f;
  pbVar59 = (byte *)(int)(short)CONCAT31((int3)((uint)pbVar64 >> 8),bVar28);
  bVar9 = *pbVar59;
  *pbVar59 = *pbVar59 + bVar28;
  bVar26 = *pbVar59;
  bVar25 = *pbVar59;
  puVar67 = (undefined4 *)((int)puVar40 + -4);
  *(undefined2 *)((int)puVar40 + -4) = pbStack_40._0_2_;
  if (bVar25 == 0 || SCARRY1(bVar9,bVar28) != (char)bVar26 < '\0') goto code_r0x00403979;
  *pbVar59 = *pbVar59 + bVar28;
  pbVar59 = (byte *)CONCAT31((int3)(char)((uint)pbVar64 >> 8),(char)pbVar64 + -100);
  *(byte **)(pbVar60 + (int)puVar68 * 8) =
       pbVar62 + (uint)(0xd2 < bVar28) + *(int *)(pbVar60 + (int)puVar68 * 8);
  puVar46 = (undefined2 *)((int)puVar40 + -8);
  puVar40 = (undefined4 *)((int)puVar40 + -8);
  *puVar46 = pbStack_40._0_2_;
code_r0x00403926:
  puVar45 = puVar40 + 1;
  puVar67 = puVar40 + 1;
  puVar47 = puVar40 + 1;
  *(undefined4 *)pbVar59 = *puVar40;
  bVar9 = *pbVar60;
  bVar25 = (byte)pbVar59;
  *pbVar60 = *pbVar60 + bVar25;
  if (CARRY1(bVar9,bVar25)) {
    *pbVar59 = *pbVar59 + bVar25;
    uVar21 = (undefined3)((uint)pbVar59 >> 8);
    bVar25 = bVar25 | pbVar59[0x400005b];
    pbVar64 = (byte *)CONCAT31(uVar21,bVar25);
    pbVar59 = pbVar60;
    if ((char)bVar25 < '\x01') goto code_r0x00403991;
    *pbVar64 = *pbVar64 + bVar25;
    cVar12 = bVar25 + 0x28;
    pbVar64 = (byte *)CONCAT31(uVar21,cVar12);
    *(byte **)pbVar64 = pbVar64 + (uint)(0xd7 < bVar25) + *(int *)pbVar64;
    bVar9 = *pbVar35;
    bVar25 = (byte)((uint)pbVar61 >> 8);
    *pbVar35 = *pbVar35 + bVar25;
    if (CARRY1(bVar9,bVar25)) {
      *pbVar64 = *pbVar64 + cVar12;
      pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                                 CONCAT11(bVar25 | *pbVar64,(char)pbVar61));
      *pbVar60 = *pbVar60 + cVar12;
      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                 CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x55],(char)pbVar35))
      ;
      *pbVar64 = *pbVar64 + cVar12;
      goto code_r0x00403950;
    }
    *(undefined2 *)puVar40 = pbStack_40._0_2_;
code_r0x00403962:
    puVar67 = (undefined4 *)((int)puVar40 + -4);
    *(undefined2 *)((int)puVar40 + -4) = uVar70;
    goto code_r0x0040395a;
  }
  goto code_r0x004038b0;
code_r0x0040395a:
  *pbVar64 = *pbVar64 + (char)pbVar64;
  puVar48 = (undefined2 *)((int)puVar67 + -4);
  puVar67 = (undefined4 *)((int)puVar67 + -4);
  *puVar48 = pbStack_40._0_2_;
  pbVar62[0x16060000] = pbVar62[0x16060000] - (char)pbVar61;
  pbVar35 = (byte *)((uint)pbVar35 | (uint)pbVar60);
  cVar12 = (char)pbVar64 + '\x02';
  pbVar64 = (byte *)CONCAT31((int3)((uint)pbVar64 >> 8),cVar12);
  bVar72 = (POPCOUNT(cVar12) & 1U) == 0;
code_r0x00403967:
  if (!bVar72) goto code_r0x004039be;
  *pbVar64 = *pbVar64 + (char)pbVar64;
  uVar21 = (undefined3)((uint)pbVar64 >> 8);
  bVar9 = (char)pbVar64 + 0x6f;
  bVar9 = bVar9 & *(byte *)CONCAT31(uVar21,bVar9);
  pbVar59 = (byte *)CONCAT31(uVar21,bVar9);
  *pbVar62 = *pbVar62 + (char)pbVar61;
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),(char)pbVar62 + (byte)*puVar68);
  *(byte *)(puVar68 + 0x5c18000) = (byte)puVar68[0x5c18000] - bVar9;
code_r0x00403979:
  do {
    bVar9 = (char)pbVar59 - (byte)*puVar68;
    bVar72 = bVar9 < *pbVar61;
    pbVar64 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),bVar9 - *pbVar61);
    do {
      cVar12 = (char)pbVar64;
      *pbVar64 = *pbVar64 + cVar12 + bVar72;
      *pbVar64 = *pbVar64 + cVar12;
      *pbVar61 = *pbVar61 + (char)pbVar62;
      pbVar61[0x101c00aa] = pbVar61[0x101c00aa] + (char)pbVar35;
      *pbVar64 = *pbVar64 + cVar12;
      *(byte **)pbVar60 = pbVar35 + *(int *)pbVar60;
      bVar9 = (byte)((uint)pbVar61 >> 8);
      pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                                 CONCAT11(bVar9 + *pbVar64,(char)pbVar61));
      pbVar64 = pbVar64 + (uint)CARRY1(bVar9,*pbVar64) + *(int *)pbVar64;
      pbVar59 = pbVar60;
code_r0x00403991:
      cVar12 = (char)pbVar61;
      *pbVar62 = *pbVar62 + cVar12;
      cVar37 = (char)pbVar35 - pbVar59[2];
      pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar37);
      pbVar60 = pbVar59;
      if ((POPCOUNT(cVar37) & 1U) != 0) goto code_r0x0040395a;
      *pbVar64 = *pbVar64 + (byte)pbVar64;
      uVar23 = (uint3)((uint)pbVar64 >> 8);
      bVar9 = (byte)pbVar64 | *pbVar35;
      piVar15 = (int *)CONCAT31(uVar23,bVar9);
      bVar25 = (byte)((uint)pbVar61 >> 8);
      bVar26 = (byte)pbVar62;
      if (bVar9 == 0) {
        *(char *)piVar15 = (char)*piVar15;
        puVar67 = (undefined4 *)((int)puVar67 + -*(int *)(pbVar63 + 0x1b000007));
        pbVar60 = pbVar59 + (uint)bVar74 * -8 + 4;
        out(*(undefined4 *)pbVar59,(short)pbVar62);
        pbVar64 = (byte *)((uint)uVar23 << 8);
        *pbVar62 = *pbVar62 + cVar12;
        pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),bVar26 - *pbVar35);
        *pbVar35 = *pbVar35;
        *pbVar62 = *pbVar62 + bVar25;
        *pbVar64 = *pbVar64;
        *pbVar35 = *pbVar35 + cVar37;
        *pbVar64 = *pbVar64;
        *(byte **)(pbVar35 + -0x3d) = pbVar60 + *(int *)(pbVar35 + -0x3d);
        break;
      }
      pbVar63 = pbVar63 + -puVar68[9];
      *(byte *)piVar15 = (char)*piVar15 + bVar9;
      pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),CONCAT11(bVar25 | *pbVar62,cVar12));
      pbVar60 = pbVar59 + *piVar15;
      pcVar13 = (char *)((int)piVar15 + *piVar15);
      bVar25 = (char)pcVar13 - *pcVar13;
      pbVar64 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar25);
      bVar9 = *pbVar64;
      *pbVar64 = *pbVar64 + bVar25;
      pbVar64 = pbVar64 + (-(uint)CARRY1(bVar9,bVar25) - *(int *)pbVar64);
      bVar72 = CARRY1(*pbVar61,bVar26);
      *pbVar61 = *pbVar61 + bVar26;
    } while (!bVar72);
    *pbVar64 = *pbVar64 + (char)pbVar64;
    pbVar61 = (byte *)CONCAT31((int3)((uint)pbVar61 >> 8),(byte)pbVar61 | *pbVar62);
code_r0x004039be:
    puVar40 = (undefined4 *)((int)puVar67 + -4);
    puVar49 = (undefined1 *)((int)puVar67 + -4);
    *(undefined2 *)((int)puVar67 + -4) = pbStack_40._0_2_;
    puVar68 = (uint *)((int)puVar68 + *(int *)(pbVar63 + -0x3c));
    *pbVar64 = *pbVar64 + (byte)pbVar64;
    uVar21 = (undefined3)((uint)pbVar64 >> 8);
    bVar9 = (byte)pbVar64 | *pbVar62;
    pcVar13 = (char *)CONCAT31(uVar21,bVar9);
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      cVar12 = *pcVar13;
      *pcVar13 = *pcVar13 + bVar9;
      cVar37 = *pcVar13;
      puVar33 = (undefined1 *)((int)puVar67 + -4);
      if (!SCARRY1(cVar12,bVar9)) goto code_r0x00403a22;
code_r0x00403a24:
      puVar40 = (undefined4 *)puVar33;
      cVar12 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar12;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar9 = cVar12 + 2;
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        pcVar13 = (char *)CONCAT31(uVar21,bVar9 + *pbVar62);
        pbVar64 = pbVar60;
        if ((POPCOUNT(bVar9 + *pbVar62) & 1U) == 0) goto code_r0x00403a7d;
code_r0x00403ad1:
        *(byte **)(pbVar60 + (int)puVar68 * 8) =
             pbVar62 + (uint)(0xd2 < (byte)pcVar13) + *(int *)(pbVar60 + (int)puVar68 * 8);
        puVar51 = (undefined2 *)((int)puVar40 + -4);
        puVar40 = (undefined4 *)((int)puVar40 + -4);
        *puVar51 = pbStack_40._0_2_;
        pbVar59 = pbVar63;
        pbVar20 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 + 0x2d);
code_r0x00403ad8:
        pbVar63 = pbVar20;
        bVar9 = *pbVar59;
        bVar25 = (byte)pbVar59;
        *pbVar59 = *pbVar59 + bVar25;
        puVar67 = (undefined4 *)((int)puVar40 + -4);
        *(undefined2 *)((int)puVar40 + -4) = pbStack_40._0_2_;
        puVar33 = (undefined1 *)((int)puVar40 + -4);
        if (CARRY1(bVar9,bVar25)) {
          *pbVar59 = *pbVar59 + bVar25;
          bVar25 = bVar25 | pbVar59[0x400005d];
          pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),bVar25);
          pbVar64 = pbVar60;
          if ((char)bVar25 < '\x01') {
            *pbVar59 = *pbVar59 + bVar25;
            pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar61 >> 8) | *pbVar62,(char)pbVar61)
                                      );
            pbVar64 = *(byte **)((int)puVar40 + -4);
            pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                       CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[-0x39],
                                                (char)pbVar35));
            goto code_r0x00403b4c;
          }
code_r0x00403ae7:
          *pbVar59 = *pbVar59 + (char)pbVar59;
          cVar12 = (char)pbVar59 + '(';
          pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),cVar12);
          *(byte **)pbVar59 = pbVar59 + *(int *)pbVar59;
          bVar9 = *pbVar35;
          bVar25 = (byte)((uint)pbVar61 >> 8);
          *pbVar35 = *pbVar35 + bVar25;
          pbVar60 = pbVar64;
          if (!CARRY1(bVar9,bVar25)) {
            puVar40 = (undefined4 *)((int)puVar67 + -4);
            *(undefined2 *)((int)puVar67 + -4) = pbStack_40._0_2_;
            goto code_r0x00403b13;
          }
          *pbVar59 = *pbVar59 + cVar12;
          goto code_r0x00403af3;
        }
        goto code_r0x00403afc;
      }
      *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
      piVar15 = (int *)CONCAT31(uVar21,cVar12 + '*');
      *piVar15 = (*piVar15 - (int)piVar15) - (uint)(0xd7 < bVar9);
      bVar9 = *pbVar62;
      bVar28 = (byte)pbVar61;
      *pbVar62 = *pbVar62 + bVar28;
      out(*(undefined4 *)pbVar60,(short)pbVar62);
      bVar26 = ((cVar12 + '*') - (char)*piVar15) - CARRY1(bVar9,bVar28);
      pbVar64 = (byte *)CONCAT31(uVar21,bVar26);
      *pbVar62 = *pbVar62 + bVar28;
      uVar71 = (undefined2)((uint)pbVar35 >> 0x10);
      uVar34 = SUB41(pbVar35,0);
      cVar12 = (char)((uint)pbVar35 >> 8) - pbVar60[(uint)bVar74 * -8 + 0x1f];
      pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(cVar12,uVar34));
      *pbVar64 = *pbVar64 + bVar26;
      bVar25 = *pbVar62;
      bVar9 = *pbVar64;
      *pbVar64 = *pbVar64 + bVar26;
      pbVar60 = pbVar60 + ((((uint)bVar74 * -8 + 4) - *(int *)pbVar64) - (uint)CARRY1(bVar9,bVar26))
      ;
      pbVar64 = (byte *)CONCAT31(uVar21,bVar26);
      pbVar61 = (byte *)(CONCAT22((short)((uint)pbVar61 >> 0x10),
                                  CONCAT11((byte)((uint)pbVar61 >> 8) | bVar25,bVar28)) + -1);
      bVar9 = *pbVar64;
      *pbVar64 = *pbVar64 + bVar26;
      bVar9 = (bVar26 - *pbVar64) - CARRY1(bVar9,bVar26);
      *pbVar61 = *pbVar61 + (char)pbVar62;
      bVar72 = CARRY1(bVar9,*pbVar62);
      bVar9 = bVar9 + *pbVar62;
      pbVar64 = (byte *)CONCAT31(uVar21,bVar9);
      if ((POPCOUNT(bVar9) & 1U) == 0) {
        *pbVar64 = *pbVar64 + bVar9;
        cVar37 = (bVar9 + 0x6f) - (0x90 < bVar9);
        pbVar59 = (byte *)CONCAT31(uVar21,cVar37);
        bVar9 = *pbVar62;
        *pbVar62 = *pbVar62 + (char)pbVar61;
        if (SCARRY1(bVar9,(char)pbVar61) == (char)*pbVar62 < '\0') {
code_r0x00403aaf:
          cVar12 = (char)pbVar59 + '(';
          pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),cVar12);
          *(byte **)pbVar59 = pbVar59 + *(int *)pbVar59;
          bVar9 = *pbVar35;
          bVar25 = (byte)((uint)pbVar61 >> 8);
          *pbVar35 = *pbVar35 + bVar25;
          pbVar20 = pbVar63;
          if (!CARRY1(bVar9,bVar25)) goto code_r0x00403ad8;
          *pbVar59 = *pbVar59 + cVar12;
          pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                                     CONCAT11(bVar25 | *pbVar35,(char)pbVar61));
          if ((POPCOUNT(*pbVar62 - cVar12) & 1U) != 0) {
            *pbVar60 = *pbVar60 + cVar12;
            goto code_r0x00403b13;
          }
        }
        else {
          *pbVar59 = *pbVar59 + cVar37;
          pcVar13 = (char *)CONCAT31(uVar21,cVar37 + '\x02');
          bVar25 = cVar12 + pbVar35[0x52];
          pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(bVar25,uVar34));
          *pcVar13 = *pcVar13 + cVar37 + '\x02';
          bVar9 = cVar37 + 4;
          pbVar59 = (byte *)CONCAT31(uVar21,bVar9);
          if ((POPCOUNT(bVar9) & 1U) == 0) {
            *pbVar59 = *pbVar59 + bVar9;
            cVar12 = (cVar37 + 's') - (0x90 < bVar9);
            pcVar13 = (char *)CONCAT31(uVar21,cVar12);
            bVar9 = (byte)((uint)pbVar61 >> 8);
            bVar72 = CARRY1(*pbVar35,bVar9);
            *pbVar35 = *pbVar35 + bVar9;
            pbVar64 = pbVar60;
            if (bVar72) {
              *pcVar13 = *pcVar13 + cVar12;
              pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(bVar25 | pbVar63[0x5c],uVar34));
              goto code_r0x00403a76;
            }
            goto code_r0x00403a8f;
          }
          puVar68 = (uint *)((int)puVar68 - *(int *)pbVar59);
          pbVar35 = (byte *)CONCAT22(uVar71,CONCAT11(bVar25 + pbVar35[0x52],uVar34));
        }
        *pbVar59 = *pbVar59 + (char)pbVar59;
        cVar12 = (char)pbVar59 + '\x02';
        pbVar64 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),cVar12);
        bVar72 = (POPCOUNT(cVar12) & 1U) == 0;
        if (!bVar72) goto code_r0x00403b18;
code_r0x00403ac5:
        bVar9 = (byte)pbVar64;
        *pbVar64 = *pbVar64 + bVar9;
        cVar12 = (bVar9 + 0x6f) - (0x90 < bVar9);
        pcVar13 = (char *)CONCAT31((int3)((uint)pbVar64 >> 8),cVar12);
        bVar9 = *pbVar35;
        cVar37 = (char)((uint)pbVar61 >> 8);
        *pbVar35 = *pbVar35 + cVar37;
        if (*pbVar35 == 0 || SCARRY1(bVar9,cVar37) != (char)*pbVar35 < '\0') goto code_r0x00403b2c;
        *pcVar13 = *pcVar13 + cVar12;
        goto code_r0x00403ad1;
      }
code_r0x00403aa1:
      if (!bVar72) {
        pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                   CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x53],(char)pbVar35
                                           ));
        goto code_r0x00403ac5;
      }
      *pbVar64 = *pbVar64 + (byte)pbVar64;
      bVar9 = (byte)pbVar64 | pbVar64[0x400005e];
      pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar64 >> 8),bVar9);
      if ('\0' < (char)bVar9) {
        *pbVar59 = *pbVar59 + bVar9;
        goto code_r0x00403aaf;
      }
      break;
    }
    *pcVar13 = *pcVar13 + bVar9;
    *pbVar60 = *pbVar60 + 1;
    uVar2 = *(undefined6 *)CONCAT31(uVar21,bVar9 + 6);
    pbVar59 = (byte *)uVar2;
    bVar9 = *pbVar62;
    bVar25 = (byte)pbVar61;
    *pbVar62 = *pbVar62 + bVar25;
    if (CARRY1(bVar9,bVar25)) {
      *pbVar59 = *pbVar59 + (char)uVar2;
      bVar26 = (byte)((uint)pbVar61 >> 8) | *pbVar59;
      uVar71 = CONCAT11(bVar26,bVar25);
      pbVar59 = pbVar59 + -*(int *)pbVar59;
      bVar9 = *pbVar35;
      *pbVar35 = *pbVar35 + bVar26;
      if (CARRY1(bVar9,bVar26)) {
        cVar37 = (char)pbVar59;
        *pbVar59 = *pbVar59 + cVar37;
        bVar9 = *pbVar62;
        pbVar62 = (byte *)CONCAT22((short)((uint)pbVar62 >> 0x10),
                                   CONCAT11((char)((uint)pbVar62 >> 8) - pbVar35[-0x3a],
                                            (char)pbVar62));
        *pbVar59 = *pbVar59 + cVar37;
        uVar39 = (undefined2)((uint)pbVar35 >> 0x10);
        bVar38 = (byte)((uint)pbVar35 >> 8) | pbVar62[0x32];
        pcVar13 = (char *)CONCAT22(uVar39,CONCAT11(bVar38,(char)pbVar35));
        cVar12 = *pcVar13;
        puVar49 = (undefined1 *)((int)puVar67 + -8);
        *(undefined2 *)((int)puVar67 + -8) = in_CS;
        cVar12 = cVar37 + cVar12 + '-';
        pbVar59 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),cVar12);
        *pbVar59 = *pbVar59;
        *(undefined2 *)((int)puVar67 + -0xc) = pbStack_40._0_2_;
        bVar28 = *pbVar62;
        uVar70 = *(undefined2 *)((int)puVar67 + -0xc);
        cVar37 = (char)pbVar35 - *pbVar60;
        bVar10 = *(byte *)((int)puVar68 + 0x17);
        *pbVar59 = *pbVar59 + cVar12;
        uVar71 = CONCAT11((bVar26 | bVar9) + bVar10 | *pbVar62,bVar25 - bVar28);
        pbVar35 = (byte *)CONCAT22(uVar39,CONCAT11(bVar38 + *(char *)(CONCAT31((int3)((uint)pcVar13
                                                                                     >> 8),cVar37) +
                                                                     0x4e),cVar37));
        *pbVar59 = *pbVar59 + cVar12;
      }
      pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),uVar71);
      bVar9 = (byte)pbVar59;
      uVar21 = (undefined3)((uint)pbVar59 >> 8);
      pcVar13 = (char *)CONCAT31(uVar21,bVar9 + 0x28);
      *pcVar13 = (*pcVar13 - (bVar9 + 0x28)) - (0xd7 < bVar9);
      *pbVar62 = *pbVar62 + (char)uVar71;
      bVar25 = bVar9 + 0x1b;
      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                 CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x4f],(char)pbVar35))
      ;
      *(char *)CONCAT31(uVar21,bVar25) = *(char *)CONCAT31(uVar21,bVar25) + bVar25;
      pcVar29 = (char *)CONCAT31(uVar21,bVar9 + 0x43);
      *pcVar29 = (*pcVar29 - (bVar9 + 0x43)) - (0xd7 < bVar25);
      *pbVar62 = *pbVar62 + (char)uVar71;
      pcVar13 = pcVar29 + -0x6b721c;
      pcVar29 = pcVar29 + -0x6b721a;
      *pcVar29 = *pcVar29 + (char)((uint)pbVar62 >> 8);
      cVar37 = *pcVar29;
      puVar40 = (undefined4 *)puVar49;
code_r0x00403a22:
      puVar33 = (undefined1 *)puVar40;
      if ((POPCOUNT(cVar37) & 1U) == 0) goto code_r0x00403a24;
      bVar9 = *pbVar62;
      *pbVar62 = *pbVar62 + (char)pbVar61;
      if (SCARRY1(bVar9,(char)pbVar61) == (char)*pbVar62 < '\0') {
        pbVar59 = pbVar63;
        pbVar20 = (byte *)(pcVar13 + -0x6fe1411);
        goto code_r0x00403ad8;
      }
code_r0x00403a76:
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(char)pcVar13 + '\x02');
      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                 CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x54],(char)pbVar35))
      ;
      pbVar64 = pbVar60;
code_r0x00403a7d:
      cVar12 = (char)pcVar13;
      *pcVar13 = *pcVar13 + cVar12;
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      cVar37 = cVar12 + '-';
      pbVar20 = (byte *)CONCAT31(uVar21,cVar37);
      pbVar59 = pbVar63;
      pbVar60 = pbVar64;
      if ((POPCOUNT(cVar37 - *pbVar62) & 1U) != 0) goto code_r0x00403ad8;
      *pbVar20 = *pbVar20 + cVar37;
      bVar9 = cVar12 + 0x2f;
      if ((POPCOUNT(bVar9) & 1U) != 0) {
        bVar9 = *pbVar62;
        *pbVar62 = *pbVar62 + (byte)pbVar61;
        *pbVar63 = *pbVar63 - CARRY1(bVar9,(byte)pbVar61);
        pbVar59 = (byte *)CONCAT31(uVar21,cVar12 + -0x53);
        pbVar63 = (byte *)*puVar40;
        puVar67 = puVar40 + 1;
        goto code_r0x00403ae7;
      }
      *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
      bVar72 = 0x90 < bVar9;
      pcVar13 = (char *)CONCAT31(uVar21,cVar12 + -0x62);
code_r0x00403a8f:
      uVar21 = (undefined3)((uint)pcVar13 >> 8);
      bVar25 = (char)pcVar13 - bVar72;
      pbVar59 = (byte *)CONCAT31(uVar21,bVar25);
      bVar9 = *pbVar35;
      cVar12 = (char)((uint)pbVar61 >> 8);
      *pbVar35 = *pbVar35 + cVar12;
      puVar67 = puVar40;
      pbVar60 = pbVar64;
      if (*pbVar35 != 0 && SCARRY1(bVar9,cVar12) == (char)*pbVar35 < '\0') {
        *pbVar59 = *pbVar59 + bVar25;
        pbVar60 = (byte *)CONCAT31(uVar21,bVar25 + 0x2d);
        *(byte **)(pbVar64 + (int)puVar68 * 8) =
             pbVar62 + (uint)(0xd2 < bVar25) + *(int *)(pbVar64 + (int)puVar68 * 8);
        *(undefined2 *)((int)puVar40 + -4) = pbStack_40._0_2_;
        bVar72 = CARRY1(*pbVar64,(byte)pbVar64);
        *pbVar64 = *pbVar64 + (byte)pbVar64;
        puVar50 = (undefined2 *)((int)puVar40 + -8);
        puVar40 = (undefined4 *)((int)puVar40 + -8);
        *puVar50 = pbStack_40._0_2_;
        goto code_r0x00403aa1;
      }
code_r0x00403af3:
      pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar61 >> 8) | *pbVar59,(char)pbVar61));
      *pbVar60 = *pbVar60 + (char)pbVar59;
      puVar33 = (undefined1 *)puVar67;
code_r0x00403afc:
      puVar40 = (undefined4 *)puVar33;
      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                 CONCAT11((char)((uint)pbVar35 >> 8) + pbVar35[0x55],(char)pbVar35))
      ;
      *pbVar59 = *pbVar59 + (char)pbVar59;
      uVar21 = (undefined3)((uint)pbVar59 >> 8);
      bVar25 = (char)pbVar59 + 0x6f;
      bVar9 = *(byte *)CONCAT31(uVar21,bVar25);
      *pbVar62 = *pbVar62 + (char)pbVar61;
      pbVar59 = (byte *)CONCAT31(uVar21,(bVar25 & bVar9) + *pbVar60);
      *pbVar61 = *pbVar61 - (char)((uint)pbVar62 >> 8);
      break;
    }
    uVar70 = *(undefined2 *)((int)puVar67 + -4);
  } while( true );
code_r0x00403b0b:
  *pbVar59 = *pbVar59 + (char)pbVar59;
  puVar52 = (undefined2 *)((int)puVar40 + -4);
  puVar40 = (undefined4 *)((int)puVar40 + -4);
  *puVar52 = pbStack_40._0_2_;
  pbVar62[0x16060000] = pbVar62[0x16060000] - (char)pbVar61;
  pbVar35 = (byte *)((uint)pbVar35 | (uint)pbVar60);
  cVar12 = (char)pbVar59 + '\x02';
  pbVar64 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),cVar12);
  bVar72 = (POPCOUNT(cVar12) & 1U) == 0;
code_r0x00403b18:
  bVar9 = (byte)pbVar64;
  uVar21 = (undefined3)((uint)pbVar64 >> 8);
  if (!bVar72) {
    *pbVar62 = *pbVar62 + (char)pbVar61;
    pbVar59 = (byte *)CONCAT31(uVar21,bVar9 | *pbVar60);
code_r0x00403b73:
    pbVar64 = (byte *)((int)puVar68 + *(int *)(pbVar63 + -0x37));
    *pbVar59 = *pbVar59 + (byte)pbVar59;
    uVar21 = (undefined3)((uint)pbVar59 >> 8);
    bVar9 = (byte)pbVar59 | *pbVar62;
    pcVar13 = (char *)CONCAT31(uVar21,bVar9);
    uVar77 = CONCAT44(pbVar62,pcVar13);
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      *pcVar13 = *pcVar13 + bVar9;
      *pbVar60 = *pbVar60 + 1;
      return (byte *)CONCAT31(uVar21,bVar9 + 6);
    }
    bVar9 = *pbVar60;
    *pbVar60 = *pbVar60 + 1;
    pcVar1 = (code *)swi(4);
    if (SCARRY1(bVar9,'\x01')) {
      uVar77 = (*pcVar1)();
      pbVar61 = extraout_ECX_01;
    }
    pbVar62 = (byte *)uVar77;
    *pbVar62 = *pbVar62 + (char)uVar77;
    cVar37 = (char)((ulonglong)uVar77 >> 0x20);
    puVar68 = (uint *)CONCAT22((short)((ulonglong)uVar77 >> 0x30),
                               CONCAT11((byte)((ulonglong)uVar77 >> 0x28) | pbVar35[0x2f],cVar37));
    *pbVar62 = *pbVar62 + (char)uVar77;
    cVar12 = (char)pbVar61;
    bVar26 = (byte)((uint)pbVar61 >> 8) | *pbVar62;
    pbVar62 = pbVar62 + *(int *)pbVar62;
    bVar9 = *pbVar35;
    *pbVar35 = *pbVar35 + bVar26;
    bVar25 = (byte)pbVar62;
    if (CARRY1(bVar9,bVar26)) {
      *pbVar62 = *pbVar62 + bVar25;
      bVar26 = bVar26 | (byte)*puVar68;
      *pbVar35 = *pbVar35 - cVar37;
      *pbVar62 = *pbVar62 + bVar25;
      uVar21 = (undefined3)((uint)pbVar62 >> 8);
      bVar25 = bVar25 | (byte)*puVar68;
      puVar32 = (uint *)CONCAT31(uVar21,bVar25);
      bVar72 = CARRY4((uint)pbVar63,*puVar32);
      bVar75 = SCARRY4((int)pbVar63,*puVar32);
      pbVar63 = pbVar63 + *puVar32;
      *(uint *)((int)puVar40 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar75 * 0x800 | (uint)bVar74 * 0x400 |
           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)pbVar63 < 0) * 0x80 |
           (uint)(pbVar63 == (byte *)0x0) * 0x40 | (uint)(bVar73 & 1) * 0x10 |
           (uint)((POPCOUNT((uint)pbVar63 & 0xff) & 1U) == 0) * 4 | (uint)bVar72 |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      *(byte *)puVar32 = (char)*puVar32 + bVar25;
      *(undefined2 *)((int)puVar40 + -8) = pbStack_40._0_2_;
      cVar37 = (char)pbVar35 - *pbVar60;
      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                 CONCAT11((char)((uint)pbVar35 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)pbVar35 >> 8),cVar37) +
                                                   0x5f),cVar37));
      *(byte *)puVar32 = (char)*puVar32 + bVar25;
      bVar9 = bVar25 + 0x2a & (byte)*puVar68;
      pbVar64 = pbVar64 + *(int *)(pbVar63 + 0x5f);
      *(char *)CONCAT31(uVar21,bVar9) = *(char *)CONCAT31(uVar21,bVar9) + bVar9;
      pbVar62 = (byte *)CONCAT31(uVar21,bVar9 + 0x2a);
      *(byte *)puVar68 = (byte)*puVar68 + 0x28;
      *pbVar62 = *pbVar62 + bVar9 + 0x2a;
      puVar55 = (undefined2 *)((int)puVar40 + -0xc);
      puVar40 = (undefined4 *)((int)puVar40 + -0xc);
      *puVar55 = pbStack_40._0_2_;
    }
    else {
      *pbVar60 = *pbVar60 + bVar25;
    }
    pcVar13 = (char *)CONCAT22((short)((uint)pbVar61 >> 0x10),CONCAT11(bVar26,cVar12));
    *pbVar63 = *pbVar63 - bVar26;
    *(byte *)puVar68 = (byte)*puVar68 + cVar12;
    bVar9 = (byte)pbVar62 - 0xb;
    pbVar61 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),bVar9);
    if (10 < (byte)pbVar62) {
      *pbVar61 = *pbVar61 | bVar9;
      return pbVar61;
    }
    *(byte *)puVar68 = (byte)*puVar68 + cVar12;
    do {
      *(undefined2 *)((int)puVar40 + -4) = pbStack_40._0_2_;
      bVar9 = pbVar35[-0x23];
      bVar26 = (byte)pbVar61;
      *pbVar61 = *pbVar61 + bVar26;
      bVar25 = pbVar63[-0x22];
      *pbVar61 = *pbVar61 + bVar26;
      uVar21 = (undefined3)((uint)pbVar61 >> 8);
      bVar26 = bVar26 | *pbVar60;
      pbVar62 = (byte *)CONCAT31(uVar21,bVar26);
      cVar37 = (char)pbVar35 - *pbVar60;
      pbVar35 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar35 >> 0x10),
                                                 CONCAT11((char)((uint)pbVar35 >> 8) + bVar9 |
                                                          bVar25,(char)pbVar35)) >> 8),cVar37);
      cVar12 = (char)pcVar13;
      pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                 CONCAT11((char)((uint)pcVar13 >> 8) + *pbVar62,cVar12));
      *(byte *)puVar68 = (byte)*puVar68 + cVar12;
      bVar25 = bVar26 - *pbVar62;
      pbVar61 = (byte *)CONCAT31(uVar21,bVar25);
      pbVar60 = pbVar60 + (-(uint)(bVar26 < *pbVar62) - *(int *)pbVar61);
      pbStack_40._0_2_ = *(undefined2 *)((int)puVar40 + -4);
      puVar68 = (uint *)CONCAT31((int3)((uint)puVar68 >> 8),(char)puVar68 * '\x02');
      *(byte **)pbVar61 = pbVar61 + *(int *)pbVar61;
      *pbVar64 = *pbVar64 + cVar37;
      bVar9 = *pbVar61;
      *pbVar61 = *pbVar61 + bVar25;
      *puVar68 = (uint)(pbVar61 + (uint)CARRY1(bVar9,bVar25) + *puVar68);
    } while ((POPCOUNT(*puVar68 & 0xff) & 1U) != 0);
code_r0x00403cb7:
    *pbVar61 = *pbVar61 + (char)pbVar61;
    pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | pbVar61[(int)pcVar13]);
    puVar57 = (undefined2 *)((int)puVar40 + -4);
    *(undefined2 *)((int)puVar40 + -4) = uVar70;
    bVar72 = false;
    pbVar61 = (byte *)((uint)pbVar61 & 0xffffff00);
    do {
      pbVar64 = pbVar64 + (-(uint)bVar72 - *(int *)pbVar35);
      pcVar29 = (char *)CONCAT31((int3)((uint)pbVar61 >> 8),*pcVar13);
      *pcVar29 = *pcVar29 + *pcVar13;
      pbVar61 = (byte *)CONCAT31((int3)((uint)(pcVar29 +
                                              (pbVar60[0x2000001] < (byte)((uint)pcVar13 >> 8)) +
                                              0xda7d) >> 8),
                                 ((byte)(pcVar29 +
                                        (pbVar60[0x2000001] < (byte)((uint)pcVar13 >> 8)) + 0xda7d)
                                 | (byte)*puVar68) + 0x7d);
      pcVar13 = pcVar13 + -1;
      *(byte *)puVar68 = (byte)*puVar68 + (char)pcVar13;
      while( true ) {
        uVar27 = (undefined3)((uint)puVar68 >> 8);
        cVar12 = (char)puVar68 + *(char *)((int)pbVar64 * 2 + 0xa0000e1);
        puVar68 = (uint *)CONCAT31(uVar27,cVar12);
        bVar72 = CARRY1((byte)pbVar61,(byte)*puVar68);
        uVar21 = (undefined3)((uint)pbVar61 >> 8);
        bVar9 = (byte)pbVar61 + (byte)*puVar68;
        pbVar61 = (byte *)CONCAT31(uVar21,bVar9);
        if ((POPCOUNT(bVar9) & 1U) != 0) break;
        *pbVar61 = *pbVar61 + bVar9;
        cVar37 = (char)pcVar13;
        pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar13 >> 8) | pbVar64[-0x65],cVar37));
        bVar25 = *pbVar61;
        *pbVar61 = *pbVar61 + bVar9;
        *(undefined2 *)((int)puVar57 + -4) = pbStack_40._0_2_;
        if (CARRY1(bVar25,bVar9)) {
          *pbVar61 = *pbVar61 + bVar9;
          pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar35 >> 8) | pbVar63[-0x1d],
                                              (char)pbVar35));
          *pbVar61 = *pbVar61 + bVar9;
          bVar72 = false;
          bVar9 = bVar9 | (byte)*puVar68;
          pcVar29 = (char *)CONCAT31(uVar21,bVar9);
          uVar70 = *(undefined2 *)((int)puVar57 + -4);
          puVar40 = (undefined4 *)puVar57;
          while( true ) {
            bVar25 = (byte)pcVar29;
            uVar21 = (undefined3)((uint)pcVar29 >> 8);
            if (bVar72 == (char)bVar9 < '\0') break;
            *pcVar29 = *pcVar29 + bVar25;
            bVar25 = bVar25 | (byte)*puVar68;
            puVar32 = (uint *)CONCAT31(uVar21,bVar25);
            *pbVar64 = *pbVar64 << 1 | (char)*pbVar64 < '\0';
            uVar19 = *puVar32;
            *(byte *)puVar32 = (byte)*puVar32 + bVar25;
            pbVar63 = pbVar63 + (-(uint)CARRY1((byte)uVar19,bVar25) - *puVar32);
            *puVar32 = *puVar32 << 1 | (uint)((int)*puVar32 < 0);
            while( true ) {
              uVar19 = *puVar68;
              *(byte *)puVar68 = (byte)*puVar68 + (byte)pcVar13;
              uVar71 = *(undefined2 *)puVar40;
              cVar12 = (char)puVar32 + 'o' + CARRY1((byte)uVar19,(byte)pcVar13);
              pcVar29 = (char *)CONCAT31((int3)((uint)puVar32 >> 8),cVar12);
              pcVar13 = (char *)0x20a0000;
              if ((POPCOUNT(cVar12) & 1U) != 0) break;
              *pcVar29 = *pcVar29 + cVar12;
              bVar9 = bRamfe140212;
              pcVar13 = (char *)0x0;
              *(undefined2 *)puVar40 = pbStack_40._0_2_;
              uVar21 = (undefined3)((uint)(pcVar29 + -0x732b0000) >> 8);
              bVar25 = in(0);
              puVar32 = (uint *)CONCAT31(uVar21,bVar25);
              uVar19 = *puVar68;
              *(byte *)puVar68 = (byte)*puVar68;
              if (SCARRY1((byte)uVar19,'\0') != (char)(byte)*puVar68 < '\0') {
                *(byte *)puVar32 = (byte)*puVar32 + bVar25;
                bVar25 = bVar25 | (byte)*puVar68;
                puVar32 = (uint *)CONCAT31(uVar21,bVar25);
                if ((POPCOUNT(bVar25) & 1U) == 0) {
                  *(byte *)puVar32 = (byte)*puVar32 + bVar25;
                  pcVar13 = (char *)CONCAT22(0x20a,(ushort)(byte)(bVar9 | (byte)*puVar32) << 8);
                  puVar57 = (undefined2 *)((int)puVar40 + -4);
                  *(undefined2 *)((int)puVar40 + -4) = uVar71;
                  *(byte *)puVar32 = (byte)*puVar32 + bVar25;
                  goto code_r0x00403d33;
                }
                *(byte *)puVar32 = (byte)*puVar32 + bVar25;
                puVar32 = (uint *)CONCAT31(uVar21,bVar25 | (byte)*puVar68);
              }
            }
            *(byte *)puVar68 = (byte)*puVar68;
            bVar72 = SCARRY1((char)puVar68,*pbVar64);
            bVar9 = (char)puVar68 + *pbVar64;
            puVar68 = (uint *)CONCAT31((int3)((uint)puVar68 >> 8),bVar9);
            puVar40 = (undefined4 *)((int)puVar40 + 4);
          }
          if (bVar72 == (char)bVar9 < '\0') {
            *(byte *)puVar68 = (byte)*puVar68 + (char)pcVar13;
            pbVar61 = (byte *)((uint)pcVar29 | 8);
            goto code_r0x00403cb7;
          }
          *pcVar29 = *pcVar29 + bVar25;
          pbVar61 = (byte *)CONCAT31(uVar21,(bVar25 | (byte)*puVar68) + 0x7d);
          pcVar13 = pcVar13 + -1;
          *(byte *)puVar68 = (byte)*puVar68 + (char)pcVar13;
          puVar57 = (undefined2 *)puVar40;
        }
        else {
          *(byte *)puVar68 = (byte)*puVar68 + cVar37;
          puVar68 = (uint *)CONCAT31(uVar27,cVar12 + *(char *)((int)pbVar64 * 2 + 0xa0000e0));
          puVar57 = (undefined2 *)((int)puVar57 + -4);
        }
      }
    } while( true );
  }
  *pbVar64 = *pbVar64 + bVar9;
  bVar9 = bVar9 + 0x6f & *(byte *)CONCAT31(uVar21,bVar9 + 0x6f);
  *pbVar62 = *pbVar62 + (char)pbVar61;
  pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),(char)pbVar62 + (byte)*puVar68);
  *(byte *)(puVar68 + 0x5c18000) = (byte)puVar68[0x5c18000] - bVar9;
  pcVar13 = (char *)CONCAT31(uVar21,bVar9 - (byte)*puVar68);
code_r0x00403b2c:
  bVar9 = (char)pcVar13 - *pcVar13;
  pbVar59 = (byte *)CONCAT31((int3)((uint)pcVar13 >> 8),bVar9);
  *pbVar59 = *pbVar59 + bVar9;
  *(byte **)pbVar59 = pbVar62 + *(int *)pbVar59;
  *pbVar59 = *pbVar59 + bVar9;
  bVar72 = CARRY1(*pbVar59,bVar9);
  *pbVar59 = *pbVar59 + bVar9;
  puVar33 = (undefined1 *)puVar40;
  pbVar64 = pbVar60;
  while( true ) {
    puVar40 = (undefined4 *)puVar33;
    *(byte **)pbVar59 = pbVar59 + (uint)bVar72 + *(int *)pbVar59;
    bVar73 = ((uint)pbVar59 & 0x1000) != 0;
    puVar68 = puVar68 + (uint)bVar74 * -2 + 1;
    pbVar59[(int)pbVar62] = pbVar59[(int)pbVar62] + (char)pbVar35;
    *pbVar59 = *pbVar59 + (char)pbVar59;
    *(byte **)pbVar64 = pbVar35 + *(int *)pbVar64;
    bVar9 = (byte)((uint)pbVar61 >> 8);
    cVar12 = (char)pbVar61;
    pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),CONCAT11(bVar9 + *pbVar59,cVar12));
    pbVar59 = pbVar59 + (uint)CARRY1(bVar9,*pbVar59) + *(int *)pbVar59;
    *pbVar62 = *pbVar62 + cVar12;
    cVar12 = (char)pbVar35 - pbVar64[2];
    pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar12);
    pbVar60 = pbVar64;
    if ((POPCOUNT(cVar12) & 1U) != 0) break;
code_r0x00403b4c:
    *pbVar59 = *pbVar59 + (byte)pbVar59;
    bVar9 = (byte)pbVar59 | *pbVar35;
    pbVar20 = (byte *)CONCAT31((int3)((uint)pbVar59 >> 8),bVar9);
    if (bVar9 != 0) {
      pbVar63 = pbVar63 + -puVar68[9];
      *pbVar20 = *pbVar20 + bVar9;
      pbVar61 = (byte *)CONCAT22((short)((uint)pbVar61 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar61 >> 8) | *pbVar62,(char)pbVar61));
      pbVar64 = pbVar64 + *(int *)pbVar20;
      pbVar20 = pbVar20 + *(int *)pbVar20;
      uVar21 = (undefined3)((uint)pbVar20 >> 8);
      bVar25 = (char)pbVar20 - *pbVar20;
      pbVar60 = (byte *)CONCAT31(uVar21,bVar25);
      bVar9 = *pbVar60;
      *pbVar60 = *pbVar60 + bVar25;
      pbVar20 = (byte *)CONCAT31(uVar21,bVar25 - CARRY1(bVar9,bVar25));
    }
    bVar9 = *pbVar20;
    *pbVar20 = *pbVar20 + (byte)pbVar20;
    iVar16 = *(int *)(pbVar63 + 0x1b000007);
    iVar3 = -(uint)CARRY1(bVar9,(byte)pbVar20);
    pbVar60 = pbVar64 + (uint)bVar74 * -8 + 4;
    out(*(undefined4 *)pbVar64,(short)pbVar62);
    pbVar59 = (byte *)(((uint)pbVar20 >> 8) * 0x100);
    *pbVar62 = *pbVar62 + (byte)pbVar61;
    bVar9 = (char)pbVar62 - *pbVar35;
    pbVar62 = (byte *)CONCAT31((int3)((uint)pbVar62 >> 8),bVar9);
    *pbVar35 = *pbVar35;
    *pbVar62 = *pbVar62 + (char)((uint)pbVar61 >> 8);
    *pbVar59 = *pbVar59;
    pcVar13 = (char *)(((uint)pbVar20 >> 8) * 0x200);
    *pcVar13 = *pcVar13 + (char)pbVar35;
    bVar72 = CARRY1(*pbVar61,bVar9);
    *pbVar61 = *pbVar61 + bVar9;
    puVar33 = (undefined1 *)((int)puVar40 + (iVar3 - iVar16));
    pbVar64 = pbVar60;
    if (bVar72) {
      *pbVar59 = *pbVar59;
      pbVar61 = (byte *)CONCAT31((int3)((uint)pbVar61 >> 8),(byte)pbVar61 | *pbVar62);
      puVar54 = (undefined2 *)((int)puVar40 + (iVar3 - iVar16) + -4);
      puVar40 = (undefined4 *)((int)puVar40 + (iVar3 - iVar16) + -4);
      *puVar54 = pbStack_40._0_2_;
      goto code_r0x00403b73;
    }
  }
code_r0x00403b13:
  puVar53 = (undefined2 *)((int)puVar40 + -4);
  puVar40 = (undefined4 *)((int)puVar40 + -4);
  *puVar53 = uVar70;
  goto code_r0x00403b0b;
code_r0x00403d33:
  pbVar63 = pbVar63 + -*puVar32;
  puVar56 = (undefined1 *)((int)puVar57 + 4);
  do {
    bVar9 = (byte)puVar32;
    *(byte *)puVar32 = (byte)*puVar32 + bVar9;
    pbVar64 = pbVar64 + -*(int *)(pbVar63 + -0x1a);
    *(byte *)puVar32 = (byte)*puVar32 + bVar9;
    bVar9 = bVar9 | (byte)*puVar68;
    puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar9);
    *(byte *)puVar32 = (byte)*puVar32 | bVar9;
    bVar9 = (byte)*puVar32;
    pbVar63 = (byte *)0x2700001;
    while (puVar57 = (undefined2 *)puVar56, (POPCOUNT(bVar9) & 1U) == 0) {
      do {
        *(byte *)puVar32 = (byte)*puVar32 + (byte)puVar32;
        bVar9 = (byte)puVar32 | (byte)*puVar68;
        puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar9);
        puVar33 = (undefined1 *)puVar57;
        if ((POPCOUNT(bVar9) & 1U) != 0) goto code_r0x00403d33;
code_r0x00403d52:
        *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
        uVar23 = CONCAT21((short)((uint)pcVar13 >> 0x10),(byte)((uint)pcVar13 >> 8) | bRamfe140212);
        puVar7 = puVar33;
        while( true ) {
          puVar58 = puVar7;
          pcVar13 = (char *)((uint)uVar23 << 8);
          puVar56 = puVar58 + -4;
          puVar57 = (undefined2 *)(puVar58 + -4);
          puVar33 = puVar58 + -4;
          *(undefined2 *)(puVar58 + -4) = pbStack_40._0_2_;
          bVar73 = (byte)puVar32;
          *(byte *)puVar32 = (byte)*puVar32 & bVar73;
          bVar25 = *pbVar35;
          bVar28 = (byte)uVar23;
          bVar26 = *pbVar35;
          *pbVar35 = *pbVar35 + bVar28;
          bVar9 = *pbVar35;
          if (!CARRY1(bVar25,bVar28)) break;
          *(byte *)puVar32 = (byte)*puVar32 + bVar73;
          pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                     CONCAT11((byte)((uint)pbVar35 >> 8) | bRam026fffe2,
                                              (char)pbVar35));
          *(byte *)puVar32 = (byte)*puVar32 + bVar73;
          bVar73 = bVar73 | (byte)*puVar68;
          puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar73);
          bVar72 = (POPCOUNT(bVar73) & 1U) == 0;
          while( true ) {
            cVar12 = (char)((uint)pbVar35 >> 8);
            uVar70 = (undefined2)((uint)pbVar35 >> 0x10);
            if (!bVar72) {
              *(byte *)puVar68 = (byte)*puVar68;
              pbVar35 = (byte *)CONCAT22(uVar70,CONCAT11(cVar12 + pbVar35[-0x1f],(char)pbVar35));
              goto code_r0x00403d52;
            }
            *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
            uVar71 = (undefined2)((uint)pcVar13 >> 0x10);
            bVar25 = (byte)((uint)pcVar13 >> 8) | (byte)*puVar32;
            uVar23 = CONCAT21(uVar71,bVar25);
            *puVar32 = *puVar32 & (uint)puVar32;
            *pbVar35 = *pbVar35 + bVar25;
            uVar21 = (undefined3)((uint)puVar32 >> 8);
            bVar9 = (char)puVar32 - bVar25;
            pcVar13 = (char *)CONCAT31(uVar21,bVar9);
            *pcVar13 = *pcVar13 + bVar9;
            bVar9 = bVar9 | (byte)*puVar68;
            puVar32 = (uint *)CONCAT31(uVar21,bVar9);
            puVar7 = puVar58 + -4;
            if ((POPCOUNT(bVar9) & 1U) != 0) break;
            *(byte *)puVar32 = (byte)*puVar32 + bVar9;
            pcVar13 = (char *)((uint)CONCAT21(uVar71,bVar25 | (byte)*puVar32) << 8);
            *puVar32 = *puVar32 - (int)puVar32;
            *(byte *)puVar68 = (byte)*puVar68;
            pbVar35 = (byte *)CONCAT22(uVar70,CONCAT11(cVar12 + pbVar35[-0x1d],(char)pbVar35));
            do {
              *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
              uVar70 = (undefined2)((uint)puVar68 >> 0x10);
              cVar12 = (char)puVar68;
              bVar9 = (byte)((uint)puVar68 >> 8) | pbVar35[-0x17];
              puVar68 = (uint *)CONCAT22(uVar70,CONCAT11(bVar9,cVar12));
              *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
              pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar35 >> 8) | bRam026fffeb,
                                                  (char)pbVar35));
              do {
                *(byte *)puVar32 = (byte)*puVar32 + (byte)puVar32;
                uVar21 = (undefined3)((uint)puVar32 >> 8);
                bVar26 = (byte)puVar32 | (byte)*puVar68;
                pcVar29 = (char *)CONCAT31(uVar21,bVar26);
                bVar25 = pbVar35[-0x16];
                *pcVar29 = *pcVar29 + bVar26;
                pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                           CONCAT11((char)((uint)pbVar35 >> 8) + bVar25 |
                                                    bRam026fffec,(char)pbVar35));
                *pcVar29 = *pcVar29 + bVar26;
                pbVar62 = (byte *)CONCAT31(uVar21,bVar26 | (byte)*puVar68);
                while( true ) {
                  *pbVar62 = *pbVar62 + (byte)pbVar62;
                  uVar21 = (undefined3)((uint)pbVar62 >> 8);
                  bVar25 = (byte)pbVar62 | (byte)*puVar68;
                  puVar32 = (uint *)CONCAT31(uVar21,bVar25);
                  if ((POPCOUNT(bVar25) & 1U) != 0) break;
                  *(byte *)puVar32 = (byte)*puVar32 + bVar25;
                  bVar26 = pbVar64[-0x14];
                  *(byte *)puVar32 = (byte)*puVar32 + bVar25;
                  bVar25 = bVar25 | (byte)*puVar68;
                  pcVar29 = (char *)CONCAT31(uVar21,bVar25);
                  bVar73 = pbVar35[-0x15];
                  *pcVar29 = *pcVar29 + bVar25;
                  pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),
                                                    (byte)((uint)pcVar13 >> 8) | bVar26 |
                                                    pbVar64[-0x13]) << 8);
                  *pcVar29 = *pcVar29 + bVar25;
                  pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                             CONCAT11((char)((uint)pbVar35 >> 8) + bVar73 |
                                                      bRam026fffef,(char)pbVar35));
                  *pcVar29 = *pcVar29 + bVar25;
                  pbVar62 = (byte *)CONCAT31(uVar21,bVar25 | (byte)*puVar68);
                  do {
                    do {
                      bVar26 = (byte)pbVar62;
                      *pbVar62 = *pbVar62 + bVar26;
                      cVar8 = (char)pbVar35;
                      pbVar35 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar35 >> 8) | *pbVar62,
                                                          cVar8));
                      *pbVar62 = bVar26;
                      *pbVar62 = *pbVar62 + bVar26;
                      cVar37 = (char)((uint)pcVar13 >> 8) + *pbVar62;
                      pcVar13 = (char *)((uint)CONCAT21((short)((uint)pcVar13 >> 0x10),cVar37) << 8)
                      ;
                      uVar21 = (undefined3)((uint)pbVar62 >> 8);
                      bVar26 = bVar26 & *pbVar62;
                      pbVar62 = (byte *)CONCAT31(uVar21,bVar26);
                      bVar25 = *pbVar35;
                      *pbVar35 = *pbVar35 + cVar37;
                    } while (SCARRY1(bVar25,cVar37) == (char)*pbVar35 < '\0');
                    *pbVar62 = *pbVar62 + bVar26;
                    bVar26 = bVar26 | (byte)*puVar68;
                    pbVar62 = (byte *)CONCAT31(uVar21,bVar26);
                    if ((POPCOUNT(bVar26) & 1U) == 0) {
                      *pbVar62 = *pbVar62 + bVar26;
                      *pbVar62 = *pbVar62 + bVar26;
                      cVar12 = cVar12 - bVar9;
                      pbVar61 = (byte *)CONCAT31((int3)((uint)puVar68 >> 8),cVar12);
                      *pbVar62 = *pbVar62 + bVar26;
                      bRam0312382b = bRam0312382b | *pbVar61;
                      *(undefined2 *)(puVar58 + -8) = pbStack_40._0_2_;
                      while( true ) {
                        bVar25 = (byte)pbVar62;
                        *pbVar62 = *pbVar62 + bVar25;
                        bRam0312382b = bRam0312382b | (pbVar64 + 0x21b0000)[(int)pbVar62];
                        uVar21 = (undefined3)((uint)pbVar62 >> 8);
                        if ((POPCOUNT(bRam0312382b) & 1U) == 0) break;
                        *pbVar61 = *pbVar61 + bRam0312382b;
                        pbVar62 = (byte *)CONCAT31(uVar21,bVar25 | *pbVar60);
                      }
                      *pbVar62 = *pbVar62 + bVar25;
                      bVar25 = bVar25 | *pbVar60;
                      pcVar13 = (char *)CONCAT31(uVar21,bVar25);
                      out(*(undefined4 *)pbVar60,(short)pbVar61);
                      *pcVar13 = *pcVar13 + bVar25;
                      uVar71 = CONCAT11(bVar9 | bRam6f0a002b,cVar12);
                      pcVar29 = (char *)CONCAT22(uVar70,uVar71);
                      *pcVar13 = *pcVar13 + bVar25;
                      *pcVar29 = *pcVar29 + bRam0312382b;
                      out(*(undefined4 *)(pbVar60 + (uint)bVar74 * -8 + 4),uVar71);
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    pbVar35 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),cVar8 + *pcVar13);
                  } while (SCARRY1(cVar8,*pcVar13) != (char)(cVar8 + *pcVar13) < '\0');
                }
                uVar19 = *puVar68;
                *(byte *)puVar68 = (byte)*puVar68;
              } while (SCARRY1((byte)uVar19,'\0') != (char)(byte)*puVar68 < '\0');
              *(byte *)puVar68 = (byte)*puVar68;
              *pcVar13 = *pcVar13 - (char)pbVar35;
              *(byte *)puVar32 = (byte)*puVar32 + bVar25;
              bVar25 = bVar25 | (byte)*puVar68;
              puVar32 = (uint *)CONCAT31(uVar21,bVar25);
              bVar72 = (POPCOUNT(bVar25) & 1U) == 0;
            } while (bVar72);
          }
        }
      } while (SCARRY1(bVar26,bVar28));
    }
    *pbVar35 = *pbVar35 + (char)((uint)pcVar13 >> 8);
    *pbVar64 = *pbVar64 - (char)pbVar35;
  } while( true );
}


