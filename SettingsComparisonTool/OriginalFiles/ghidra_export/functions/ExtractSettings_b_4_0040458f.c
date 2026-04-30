/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040458f
 * Raw Name    : <ExtractSettings>b__4
 * Demangled   : <ExtractSettings>b__4
 * Prototype   : int <ExtractSettings>b__4(char * _, uint * param_2)
 * Local Vars  : uStack_c0, uStack_be, uStack_bf, uStack_80, uStack_bc, iStack_78, puStack_7c, puStack_70, pbStack_74, puStack_68, uStack_6c, pbStack_60, puStack_64, pbStack_58, puStack_5c, puStack_50, pbStack_54, puStack_48, pcStack_4c, iStack_40, puStack_44, uStack_38, pcStack_3c, uStack_30, uStack_34, uStack_28, uStack_2c, uStack_20, uStack_24, puStack_18, uStack_1c, uStack_10, uStack_14, uStack_8, pcStack_c, uVar1, uStack_4, uVar3, uVar2, bVar5, uVar4, cVar7, bVar6, uVar9, cVar8, pcVar10, in_EAX, puVar12, pcVar11, puVar14, uVar13, piVar16, iVar15, uVar18, puVar17, puVar20, uVar19, bVar22, iVar21, uVar24, uVar23, puVar26, bVar25, cVar28, iVar27, uVar30, bVar29, unaff_EBX, cVar31, pbVar33, puVar32, uVar35, pbVar34, bVar37, cVar36, ppbVar39, cVar38, puVar40, unaff_EBP, ppbVar42, ppbVar41, puVar43, unaff_ESI, pbVar45, pbVar44, unaff_EDI, puVar46, puVar48, pbVar47, in_CS, in_ES, in_DS, in_SS, in_AF, bVar49, uVar51, bVar50, uStack_6, unaff_retaddr, _, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404654) */
/* WARNING: Removing unreachable block (ram,0x004045de) */
/* WARNING: Removing unreachable block (ram,0x004046c4) */
/* WARNING: Removing unreachable block (ram,0x004046d0) */
/* WARNING: Removing unreachable block (ram,0x004046e3) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __fastcall <ExtractSettings>b__4(char *_,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  char *in_EAX;
  undefined3 uVar18;
  char *pcVar10;
  char *pcVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  undefined3 uVar19;
  byte bVar22;
  uint *puVar20;
  undefined2 uVar23;
  undefined2 uVar24;
  int iVar21;
  byte bVar25;
  char cVar28;
  byte bVar29;
  uint *puVar26;
  int iVar27;
  undefined1 uVar30;
  char cVar31;
  char cVar36;
  int unaff_EBX;
  uint *puVar32;
  byte bVar37;
  byte *pbVar33;
  byte *pbVar34;
  char cVar38;
  uint uVar35;
  byte **ppbVar39;
  int unaff_EBP;
  uint *puVar40;
  byte **ppbVar41;
  byte **ppbVar42;
  int unaff_ESI;
  undefined1 *puVar43;
  byte *pbVar44;
  byte *pbVar45;
  uint *puVar46;
  uint *unaff_EDI;
  byte *pbVar47;
  uint *puVar48;
  ushort in_ES;
  undefined2 in_CS;
  ushort in_SS;
  ushort in_DS;
  bool bVar49;
  byte in_AF;
  bool bVar50;
  undefined8 uVar51;
  char *unaff_retaddr;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined2 uStack_be;
  ushort uStack_bc;
  ushort uStack_80;
  uint *puStack_7c;
  int iStack_78;
  byte *pbStack_74;
  uint *puStack_70;
  ushort uStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  byte *pbStack_60;
  uint *puStack_5c;
  byte *pbStack_58;
  byte *pbStack_54;
  uint *puStack_50;
  char *pcStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  int iStack_40;
  char *pcStack_3c;
  ushort uStack_38;
  ushort uStack_34;
  ushort uStack_30;
  ushort uStack_2c;
  ushort uStack_28;
  ushort uStack_24;
  ushort uStack_20;
  ushort uStack_1c;
  undefined *puStack_18;
  ushort uStack_14;
  ushort uStack_10;
  char *pcStack_c;
  ushort uStack_8;
  undefined2 uStack_6;
  ushort uStack_4;
  
  bVar50 = false;
                    /* .NET CLR Managed Code */
  puVar32 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x3c),
                                      (char)unaff_EBX));
  *in_EAX = *in_EAX + (char)in_EAX;
  uVar18 = (undefined3)((uint)in_EAX >> 8);
  bVar5 = *(byte *)((int)puVar32 + (uint)(byte)((char)in_EAX + 0x6f));
  pbVar45 = (byte *)CONCAT31(uVar18,bVar5);
  *pbVar45 = *pbVar45 + bVar5;
  bVar6 = bVar5 - *pbVar45;
  puVar43 = (undefined1 *)(unaff_ESI + *(int *)CONCAT31(uVar18,bVar6) + (uint)(bVar5 < *pbVar45));
  pbVar47 = (byte *)CONCAT31(uVar18,bVar6);
  pbVar45 = puVar43 + 1;
  out(*puVar43,(short)param_2);
  *pbVar47 = *pbVar47 + bVar6;
  *pbVar47 = *pbVar47 + (char)((uint)_ >> 8);
  bVar5 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar6;
  puVar40 = (uint *)((int)puVar32 + (int)_);
  uVar35 = *puVar40;
  uVar1 = *puVar40;
  *puVar40 = uVar1 + (int)param_2 + (uint)CARRY1(bVar5,bVar6);
  if (CARRY4(uVar35,(uint)param_2) || CARRY4(uVar1 + (int)param_2,(uint)CARRY1(bVar5,bVar6))) {
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    _uStack_8 = CONCAT22(uStack_6,in_ES);
    pcVar11 = (char *)(CONCAT31(uVar18,bVar6) | 8);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x3c));
    cVar8 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar8;
    cVar7 = cVar8 + '\x02';
    pbVar47 = (byte *)CONCAT31(uVar18,cVar7);
    if (cVar7 != '\0' && SCARRY1(cVar8,'\x02') == cVar7 < '\0') {
      *pbVar47 = *pbVar47 + cVar7;
      goto code_r0x004045bc;
    }
code_r0x00404620:
    *(byte *)puVar32 = (byte)*puVar32 - (char)param_2;
    *pbVar47 = *pbVar47 + (byte)pbVar47;
    uVar18 = (undefined3)((uint)pbVar47 >> 8);
    bVar5 = (byte)pbVar47 | (byte)*puVar32;
    bVar5 = bVar5 | *(byte *)CONCAT31(uVar18,bVar5);
    *pbVar45 = *pbVar45 + bVar5;
    bVar6 = bVar5 + (byte)*puVar32;
    pcVar11 = (char *)CONCAT31(uVar18,bVar6);
    if (SCARRY1(bVar5,(byte)*puVar32) != (char)bVar6 < '\0') {
      *pcVar11 = *pcVar11 + bVar6;
      pcVar11 = (char *)CONCAT31(uVar18,bVar6 + 0x2a);
      goto code_r0x00404638;
    }
    bVar5 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar6;
    if (CARRY1(bVar5,bVar6)) goto code_r0x004046a4;
code_r0x00404710:
    pbVar47 = pbVar45 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar45,(short)param_2);
    pcStack_c = _;
    *pcVar11 = *pcVar11 + (byte)pcVar11;
    uStack_10 = in_ES;
    uStack_14 = in_SS;
    *_ = *_ + '\x01';
    puStack_18 = (undefined *)CONCAT22(puStack_18._2_2_,in_SS);
    *_ = *_ + '\x01';
    bVar5 = (byte)pcVar11 | (byte)*param_2;
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar5);
    pbVar45 = pbVar47 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar47,(short)param_2);
    puVar48 = (uint *)((int)unaff_EDI + -1);
    *pcVar11 = *pcVar11 + bVar5;
    uStack_1c = in_ES;
    pbVar47 = (byte *)((int)((uint)pcVar11 | *puVar48) + *(int *)((uint)pcVar11 | *puVar48));
    *pbVar47 = *pbVar47 + (char)pbVar47;
    puVar40 = puVar32;
  }
  else {
    *pbVar47 = *pbVar47 + bVar6;
code_r0x004045bc:
    uVar18 = (undefined3)((uint)pbVar47 >> 8);
    bVar6 = (byte)pbVar47 + 0x2d;
    pbVar44 = (byte *)CONCAT31(uVar18,bVar6);
    *(uint *)(pbVar45 + (int)unaff_EDI * 8) =
         (int)param_2 + (uint)(0xd2 < (byte)pbVar47) + *(int *)(pbVar45 + (int)unaff_EDI * 8);
    _uStack_8 = CONCAT22(uStack_6,in_ES);
    uVar35 = (uint)param_2 & 0xffffff00;
    bVar5 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar6;
    if (!CARRY1(bVar5,bVar6)) {
      *pbVar44 = *pbVar44 + bVar6;
      bVar5 = *(byte *)(uVar35 - 0x66);
      uVar9 = (ushort)(uVar35 >> 0x10);
      bVar6 = bVar6 | *pbVar44;
      bVar50 = (in_ES & 0x400) != 0;
      in_AF = (in_ES & 0x10) != 0;
      *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
      bVar6 = bVar6 | *pbVar45;
      puVar40 = (uint *)CONCAT31(uVar18,bVar6);
      pbVar47 = puVar43 + (uint)bVar50 * -8 + 5;
      out(*(undefined4 *)pbVar45,(short)CONCAT21(uVar9,(byte)(uVar35 >> 8) | bVar5) << 8);
      bVar37 = (byte)_;
      *puVar40 = *puVar40 << (bVar37 & 0x1f) | *puVar40 >> 0x20 - (bVar37 & 0x1f);
      *pbVar47 = *pbVar47 + bVar6;
      bVar6 = (bVar6 - 0x2a) + (bVar6 < 0x28);
      piVar16 = (int *)CONCAT31(uVar18,bVar6);
      pcStack_c = (char *)CONCAT22(pcStack_c._2_2_,in_ES);
      param_2 = (uint *)((uint)uVar9 << 0x10);
      bVar5 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar6;
      if (CARRY1(bVar5,bVar6)) {
        *piVar16 = *piVar16 + (int)piVar16;
        puVar40 = (uint *)(CONCAT31(uVar18,bVar6 | (byte)*unaff_EDI) + -0x6fe080d);
        uVar35 = *puVar40;
        *puVar40 = (uint)(*puVar40 + (int)puVar40);
        pbVar45 = pbVar47;
        if (CARRY4(uVar35,(uint)puVar40)) {
          *puVar40 = *puVar40 + (int)puVar40;
          _ = (char *)CONCAT31((int3)((uint)_ >> 8),bVar37 | (byte)*puVar32);
          goto code_r0x0040460b;
        }
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + bVar37;
        puVar40 = (uint *)((uint)piVar16 | *unaff_EDI);
code_r0x0040460b:
        *(undefined1 *)((int)puVar40 * 2) = *(undefined1 *)((int)puVar40 * 2);
        bVar5 = (byte)puVar40;
        *pbVar47 = *pbVar47 + bVar5;
        pbVar45 = pbVar47 + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)pbVar47,0);
        puVar40 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar40 >> 0x10),
                                                   CONCAT11(bVar5 / 0,bVar5)) >> 8),bVar5 % 0);
        *pbVar45 = *pbVar45 + bVar5 % 0;
        puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(char)unaff_EBX - *pbVar45);
      }
      _ = (char *)CONCAT22((short)((uint)_ >> 0x10),
                           CONCAT11((char)((uint)_ >> 8) + (char)*puVar40,(char)_));
      *(char *)puVar40 = (char)*puVar40;
      _uStack_8 = CONCAT22(uStack_6,in_ES);
      pbVar47 = (byte *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                 CONCAT11((char)((uint)puVar40 >> 8) - pbVar45[2],(char)puVar40));
      goto code_r0x00404620;
    }
    *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
    bVar6 = bVar6 | pbVar44[0x4000066];
    pcVar11 = (char *)CONCAT31(uVar18,bVar6);
    if ('\0' < (char)bVar6) {
      *pcVar11 = *pcVar11 + bVar6;
      return CONCAT31(uVar18,bVar6 + 0x73);
    }
code_r0x00404638:
    pcStack_c = (char *)CONCAT22(pcStack_c._2_2_,in_DS);
    cVar8 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar8;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11((char)((uint)pcVar11 >> 8) - pbVar45[3],cVar8));
    cVar28 = (char)puVar32;
    cVar36 = (char)((uint)puVar32 >> 8) + (byte)puVar32[0x1b];
    puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(cVar36,cVar28));
    *pcVar11 = *pcVar11 + cVar8;
    *(byte *)puVar32 = (byte)*puVar32 ^ cVar8 + 4U;
    in_CS = 0x2a06;
    puStack_18 = &UNK_0040465a;
    uVar51 = func_0x0000b828();
    param_2 = (uint *)((ulonglong)uVar51 >> 0x20);
    pbVar47 = (byte *)uVar51;
    bVar5 = *pbVar47;
    bVar6 = (byte)uVar51;
    *pbVar47 = *pbVar47 + bVar6;
    pbVar44 = pbVar45 + (uint)CARRY1(bVar5,bVar6) + *(int *)pbVar47;
    uVar18 = (undefined3)((ulonglong)uVar51 >> 8);
    *pbVar47 = *pbVar47 + bVar6;
    cVar7 = (char)((uint)unaff_retaddr >> 8);
    *unaff_retaddr = *unaff_retaddr + cVar7;
    bVar5 = *pbVar47;
    *pbVar47 = *pbVar47 + bVar6;
    *param_2 = (uint)(pbVar47 + (uint)CARRY1(bVar5,bVar6) + *param_2);
    bVar6 = bVar6 | *pbVar44;
    pcVar11 = (char *)CONCAT31(uVar18,bVar6);
    *pcVar11 = *pcVar11 + bVar6;
    cVar8 = bVar6 + *pcVar11;
    pcVar11 = (char *)CONCAT31(uVar18,cVar8);
    *pcVar11 = *pcVar11 + cVar8;
    *pcVar11 = *pcVar11 + cVar8;
    *(byte *)puVar32 = (byte)*puVar32 + cVar28;
    *pcVar11 = *pcVar11 + cVar8;
    *pcVar11 = *pcVar11 + cVar7;
    *pcVar11 = *pcVar11 + cVar8;
    *(byte *)puVar32 = (byte)*puVar32 + cVar7;
    pcVar11 = (char *)(CONCAT31(uVar18,cVar8) ^ 3);
    unaff_retaddr[0x73060000] = unaff_retaddr[0x73060000] - cVar36;
    pbVar47 = (byte *)((int)unaff_EDI + (uint)bVar50 * -2 + 1);
    *(byte *)unaff_EDI = (byte)pcVar11;
    *pcVar11 = *pcVar11 + (byte)pcVar11;
    uStack_4 = in_ES;
    pbVar45 = pbVar44 + (uint)bVar50 * -2 + 1;
    bVar5 = *pbVar44;
    *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
    _uStack_8 = CONCAT22(uStack_6,in_ES);
    pcVar11 = (char *)CONCAT31(uVar18,(bVar5 - (byte)*puVar32) + '(');
    unaff_EDI = (uint *)(pbVar47 + (uint)bVar50 * -2 + 1);
    bVar5 = in((short)((ulonglong)uVar51 >> 0x20));
    *pbVar47 = bVar5;
code_r0x004046a4:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    uStack_1c = in_ES;
    uVar18 = (undefined3)((uint)pcVar11 >> 8);
    bVar5 = (char)pcVar11 - (byte)*puVar32;
    bVar6 = bVar5 + 0x28;
    pbVar47 = (byte *)CONCAT31(uVar18,bVar6);
    _ = &cRam14060000;
    puVar40 = puVar32;
    puVar48 = unaff_EDI;
    if (0xd7 < bVar5) {
      *pbVar47 = *pbVar47 + bVar6;
      _uStack_8 = CONCAT22(uStack_6,in_ES);
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((char)((uint)param_2 >> 8) -
                                          *(byte *)((int)param_2 + -0x3a),(char)param_2));
      bVar5 = (bVar6 | *pbVar47) + cRam14060000;
      pcVar11 = (char *)CONCAT31(uVar18,bVar5);
      uVar35 = *param_2;
      *(byte *)param_2 = (byte)*param_2;
      if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
        _ = &cRam14060000;
        if ((byte)*param_2 == 0 || SCARRY1((byte)uVar35,'\0') != (char)(byte)*param_2 < '\0')
        goto code_r0x0040475f;
        *pcVar11 = *pcVar11 + bVar5;
        piVar16 = (int *)CONCAT31(uVar18,bVar5 + 0x2d);
        *(byte **)(pbVar45 + (int)unaff_EDI * 8) =
             (byte *)((int)param_2 + (uint)(0xd2 < bVar5) + *(int *)(pbVar45 + (int)unaff_EDI * 8));
        uStack_38 = in_ES;
        uRam7305fffc = in_CS;
        *piVar16 = *piVar16 + (int)piVar16;
        bVar5 = bVar5 + 0x2d | *(byte *)((int)piVar16 + 0x400006d);
        pcVar11 = (char *)CONCAT31(uVar18,bVar5);
        if ((char)bVar5 < '\x01') goto code_r0x00404777;
        *pcVar11 = *pcVar11 + bVar5;
        pcVar11 = (char *)CONCAT31(uVar18,bVar5 + 0x10);
        *param_2 = (uint)(pcVar11 + *param_2);
      }
      goto code_r0x00404710;
    }
  }
  cVar8 = (char)pbVar47 + *pbVar47;
  puVar32 = (uint *)CONCAT31((int3)((uint)pbVar47 >> 8),cVar8);
  *(char *)puVar32 = (char)*puVar32 + cVar8;
  *puVar32 = *puVar32 & (uint)puVar32;
  *(char *)puVar32 = (char)*puVar32 + cVar8;
  pbVar44 = (byte *)((int)puVar32 + 1);
  cVar8 = (char)pbVar44;
  *pbVar44 = *pbVar44 + cVar8;
  uVar35 = *puVar40;
  bVar5 = (byte)((uint)_ >> 8);
  *(byte *)puVar40 = (byte)*puVar40 + bVar5;
  pbVar47 = pbVar45;
  if (CARRY1((byte)uVar35,bVar5)) {
    pbVar47 = pbVar45 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar45,(short)param_2);
    puVar48 = (uint *)((int)puVar48 + -1);
  }
  *pbVar44 = *pbVar44 + cVar8;
  uStack_20 = in_ES;
  puVar20 = (uint *)CONCAT22((short)((uint)_ >> 0x10),
                             CONCAT11(bVar5 + *(byte *)((int)puVar48 + 0x49),(char)_));
  *pbVar44 = *pbVar44 + cVar8;
  uStack_24 = in_ES;
  *(byte *)(puVar40 + 0x818000) = (byte)puVar40[0x818000] - (char)((uint)puVar40 >> 8);
  out(*(undefined4 *)pbVar47,(short)param_2);
  puVar32 = (uint *)((int)puVar40 + -1);
  *pbVar44 = *pbVar44 + cVar8;
  uStack_28 = in_ES;
  pbVar47 = pbVar47 + *(int *)((int)puVar40 + -0x7f) + (uint)bVar50 * -8 + 4;
  *pbVar44 = *pbVar44 + cVar8;
  do {
    uStack_30 = in_ES;
    cVar8 = (char)pbVar44 - (byte)*param_2;
    pcVar11 = (char *)CONCAT31((int3)((uint)pbVar44 >> 8),cVar8);
    pbVar45 = pbVar47 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar47,(short)param_2);
    unaff_EDI = (uint *)((int)puVar48 + -1);
    *pcVar11 = *pcVar11 + cVar8;
    uStack_34 = in_ES;
    _ = (char *)CONCAT22((short)((uint)puVar20 >> 0x10),
                         CONCAT11((char)((uint)puVar20 >> 8) + (byte)puVar48[0x12],(char)puVar20));
code_r0x0040475f:
    cVar8 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar8;
    uStack_38 = in_ES;
    *(byte *)(puVar32 + 0x818000) = (byte)puVar32[0x818000] - (char)((uint)puVar32 >> 8);
    out(*(undefined4 *)pbVar45,(short)param_2);
    pbVar47 = (byte *)((int)puVar32 + -1);
    *pcVar11 = *pcVar11 + cVar8;
    pcStack_3c = (char *)CONCAT22(pcStack_3c._2_2_,in_ES);
    iStack_40 = CONCAT22(iStack_40._2_2_,in_ES);
    pbVar45 = pbVar45 + *(int *)((int)puVar32 + -0x71) + (uint)bVar50 * -8 + 4;
    *pcVar11 = *pcVar11 + cVar8;
    puStack_44 = (uint *)CONCAT22(puStack_44._2_2_,in_ES);
    puVar32 = (uint *)CONCAT22((short)((uint)pbVar47 >> 0x10),
                               CONCAT11((char)((uint)pbVar47 >> 8) - pbVar45[0x6e],(char)pbVar47));
    puVar48 = unaff_EDI;
code_r0x00404777:
    bVar5 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    uVar18 = (undefined3)((uint)pcVar11 >> 8);
    puVar40 = (uint *)(pbVar45 + (int)puVar48 * 8);
    uVar35 = *puVar40;
    uVar1 = *puVar40;
    *puVar40 = (uint)((byte *)(uVar1 + (int)param_2) + (0xd2 < bVar5));
    puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,in_ES);
    puVar40 = (uint *)0x73060000;
    cVar7 = bVar5 + 0x2e +
            (CARRY4(uVar35,(uint)param_2) || CARRY4(uVar1 + (int)param_2,(uint)(0xd2 < bVar5)));
    *(byte *)param_2 = (byte)*param_2 + (char)_;
    *pbVar45 = *pbVar45;
    cVar8 = cVar7 + '~';
    pcVar10 = (char *)CONCAT31(uVar18,cVar8);
    out(*pbVar45,(short)param_2);
    *pcVar10 = *pcVar10 + cVar8;
    cVar7 = cVar7 + -0x80;
    pcVar10 = (char *)CONCAT31(uVar18,cVar7);
    out(*(undefined4 *)(pbVar45 + (uint)bVar50 * -2 + 1),(short)param_2);
    puVar20 = (uint *)(_ + -1);
    *pcVar10 = *pcVar10 + cVar7;
    pcStack_4c = (char *)CONCAT22(pcStack_4c._2_2_,in_ES);
    *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)pcVar11 >> 8);
    *pcVar10 = *pcVar10 + cVar7;
    puStack_50 = (uint *)CONCAT22(puStack_50._2_2_,in_ES);
    *pcVar10 = *pcVar10 - (char)((uint)puVar20 >> 8);
    *pcVar10 = *pcVar10 + cVar7;
    pbStack_54 = (byte *)CONCAT22(pbStack_54._2_2_,in_ES);
    pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_ES);
    pbVar47 = pbVar45 + (uint)bVar50 * -2 + 1 + *(int *)((int)puVar32 + 9) + (uint)bVar50 * -8 + 4;
    *pcVar10 = *pcVar10 + cVar7;
    puStack_5c = (uint *)CONCAT22(puStack_5c._2_2_,in_ES);
    cVar8 = (char)param_2;
    cVar28 = (char)((uint)param_2 >> 8) - *(byte *)((int)puVar32 + -0x59);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar28,cVar8));
    *pcVar10 = *pcVar10 + cVar7;
    uVar24 = (undefined2)((uint)puVar32 >> 0x10);
    uVar30 = SUB41(puVar32,0);
    bVar37 = (byte)((uint)puVar32 >> 8) | *(byte *)((int)param_2 + 0x36);
    puVar32 = (uint *)CONCAT22(uVar24,CONCAT11(bVar37,uVar30));
    bVar6 = cVar7 + (byte)*puVar32;
    pbVar44 = (byte *)CONCAT31(uVar18,bVar6);
    *(byte *)puVar48 = (byte)*puVar48 - cVar28;
    bVar5 = *pbVar44;
    *pbVar44 = *pbVar44 + bVar6;
    uStack_2c = in_ES;
  } while (!CARRY1(bVar5,bVar6));
  *pbVar44 = *pbVar44 + bVar6;
  bVar6 = bVar6 - *pbVar44;
  pbVar45 = (byte *)CONCAT31(uVar18,bVar6);
  *(byte *)puVar32 = (byte)*puVar32 + cVar8;
  *(byte *)param_2 = (byte)*param_2 ^ bVar6;
  _[0x2affffff] = _[0x2affffff] + bVar6;
  bVar5 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar6;
  *puVar32 = (uint)(pbVar45 + (uint)CARRY1(bVar5,bVar6) + *puVar32);
  pbVar44 = pbVar45 + -0x32a1702;
  if (pbVar44 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar44;
    puVar46 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),(char)puVar20 + (byte)*param_2);
    puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,in_ES);
    pbVar45[-0xe0c891b] = pbVar45[-0xe0c891b] + cVar28;
    pbVar44 = pbVar45 + 0x19fd76e3;
    bVar5 = *pbVar44;
    *pbVar44 = *pbVar44 - bVar37;
    piVar16 = (int *)((uint)(pbVar45 + (bVar5 < bVar37) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar16 + 0x73) = *(char *)((int)piVar16 + 0x73) + cVar28;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar6 = bVar37 | *(byte *)((int)param_2 + 2);
    puVar32 = (uint *)CONCAT22(uVar24,CONCAT11(bVar6,uVar30));
    cVar8 = (char)piVar16;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      uVar18 = (undefined3)((uint)(pbVar45 + (bVar5 < bVar37) + 0x63fd76e4) >> 8);
      cVar7 = cVar8 + '\x06';
      if ((POPCOUNT(cVar7) & 1U) == 0) {
        *(char *)CONCAT31(uVar18,cVar7) = *(char *)CONCAT31(uVar18,cVar7) + cVar7;
        pbVar44 = (byte *)CONCAT31(uVar18,cVar8 + '.');
        puVar20 = puVar46;
        uStack_6c = in_SS;
        goto code_r0x00404803;
      }
      cVar8 = cVar7 + (byte)*puVar32;
      pcVar11 = (char *)CONCAT31(uVar18,cVar8);
      if (SCARRY1(cVar7,(byte)*puVar32) == cVar8 < '\0') {
code_r0x004048e7:
        pcVar11 = (char *)((uint)pcVar11 | 8);
        in_SS = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(param_2 + 0x1cc18000) = (byte)param_2[0x1cc18000] + cVar8;
code_r0x0040486e:
      pcVar11 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),(byte)piVar16 & (byte)*param_2);
      puVar48 = (uint *)((int)puVar48 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar11 = *pcVar11 + (char)pcVar11;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + '*');
    puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,in_DS);
    bVar5 = (byte)((uint)puVar46 >> 8);
    cVar8 = (char)puVar46;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar5 + *pbVar45,cVar8));
    pbVar45 = pbVar45 + (uint)CARRY1(bVar5,*pbVar45) + *(int *)pbVar45;
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar49 = (byte)pbVar45 < *pbVar45;
    pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar45 >> 8),(byte)pbVar45 - *pbVar45);
code_r0x00404880:
    pbVar47 = pbVar47 + (uint)bVar49 + *(int *)pbVar45;
    uStack_6c = in_ES;
    while( true ) {
      bVar6 = (byte)pbVar45;
      pbVar45[0x2c000000] = pbVar45[0x2c000000] + bVar6;
      bVar5 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar6;
      *param_2 = (uint)(pbVar45 + (uint)CARRY1(bVar5,bVar6) + *param_2);
      *(byte *)puVar32 = (byte)*puVar32 - (char)param_2;
      *pbVar45 = *pbVar45 + bVar6;
      puVar20 = (uint *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar6 | (byte)*puVar32);
code_r0x00404895:
      pcVar11 = (char *)((uint)puVar20 | *puVar20);
code_r0x00404899:
      cVar8 = (char)pcVar11;
      *pbVar47 = *pbVar47 + cVar8;
      uVar18 = (undefined3)((uint)pcVar11 >> 8);
      bVar5 = cVar8 + (byte)*puVar32;
      pcVar11 = (char *)CONCAT31(uVar18,bVar5);
      bVar6 = (byte)((uint)puVar46 >> 8);
      uVar24 = (undefined2)((uint)puVar46 >> 0x10);
      cVar7 = (char)param_2;
      uVar9 = in_ES;
      if (SCARRY1(cVar8,(byte)*puVar32) == (char)bVar5 < '\0') {
        *(byte *)puVar32 = (byte)*puVar32 - cVar7;
        *pcVar11 = *pcVar11 + bVar5;
        puVar46 = (uint *)CONCAT22(uVar24,CONCAT11(bVar6 | (byte)*param_2,(char)puVar46));
        param_2 = (uint *)((int)param_2 + 1);
        pcVar11 = pcVar11 + *param_2;
        if ((POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar11 = *pcVar11 + bVar5;
      bVar37 = bVar5 + 2;
      pcVar11 = (char *)CONCAT31(uVar18,bVar37);
      if (bVar5 < 0xfe) {
        *pbVar47 = *pbVar47 + bVar37;
        puVar20 = puVar32;
        goto code_r0x004048f5;
      }
      *pcVar11 = *pcVar11 + bVar37;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)puVar32 + -0x5b),cVar7));
      cVar8 = *pcVar11;
      *pcVar11 = *pcVar11 + bVar37;
      puStack_7c = (uint *)CONCAT22(puStack_7c._2_2_,in_ES);
      if (SCARRY1(cVar8,bVar37) == *pcVar11 < '\0') goto code_r0x00404927;
      *pcVar11 = *pcVar11 + bVar37;
      bVar5 = bVar5 + 4;
      pbVar45 = (byte *)CONCAT31(uVar18,bVar5);
      if (0xfd < bVar37) break;
      *pbVar45 = *pbVar45 + bVar5;
      puVar46 = (uint *)CONCAT22(uVar24,CONCAT11(bVar6 | (byte)*param_2,(char)puVar46));
      *(byte *)puVar32 = (byte)*puVar32 + cVar7;
      *pbVar47 = *pbVar47 ^ bVar5;
    }
    *pbVar45 = *pbVar45 + bVar5;
    puStack_70 = (uint *)((uint)puStack_70 & 0xffff0000);
  }
  else {
    pbVar45[0x6fdbe8fe] = pbVar45[0x6fdbe8fe] + (char)pbVar44;
code_r0x00404803:
    *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
    uVar19 = (undefined3)((uint)puVar20 >> 8);
    bVar6 = (byte)puVar20 | (byte)*puVar32;
    puVar46 = (uint *)CONCAT31(uVar19,bVar6);
    uVar24 = (undefined2)((uint)puVar32 >> 0x10);
    cVar7 = (char)puVar32;
    cVar36 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x6f);
    puVar32 = (uint *)CONCAT22(uVar24,CONCAT11(cVar36,cVar7));
    bVar5 = (byte)pbVar44;
    *pbVar44 = *pbVar44 + bVar5;
    bVar49 = 0xf9 < bVar5;
    uVar18 = (undefined3)((uint)pbVar44 >> 8);
    cVar8 = bVar5 + 6;
    pbVar45 = (byte *)CONCAT31(uVar18,cVar8);
    in_SS = uStack_6c;
    if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00404880;
    *pbVar45 = *pbVar45 + cVar8;
    piVar16 = (int *)CONCAT31(uVar18,bVar5 + 0x2e);
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar6 = bVar6 | *(byte *)((int)param_2 + (int)piVar16);
    puVar46 = (uint *)CONCAT31(uVar19,bVar6);
    in_SS = (ushort)puStack_68;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      puVar20 = (uint *)((int)piVar16 + *piVar16);
      *(byte *)param_2 = (byte)*param_2 + bVar6;
      pbVar47 = pbVar47 + param_2[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar16 = (char)*piVar16 + bVar5 + 0x2e;
    cVar8 = bVar5 + 0x34;
    pcVar11 = (char *)CONCAT31(uVar18,cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      pcVar11[0x28] = pcVar11[0x28] + cVar28;
      goto code_r0x00404899;
    }
    *pcVar11 = *pcVar11 + cVar8;
    piVar16 = (int *)CONCAT31(uVar18,bVar5 + 0x5c);
    *piVar16 = *piVar16 + (int)piVar16;
    cVar28 = (bVar6 | bRam07022c07) - (char)*piVar16;
    puVar46 = (uint *)CONCAT31(uVar19,cVar28);
    pcVar11 = (char *)CONCAT31(uVar18,bVar5 + 0x5a);
    bVar6 = (byte)((uint)puVar20 >> 8);
    *(byte *)param_2 = (byte)*param_2 | bVar6;
    *(uint *)((int)param_2 + (int)pcVar11) = *(uint *)((int)param_2 + (int)pcVar11) | 0x73060000;
    *param_2 = *param_2 | 0x73060000;
    cVar36 = cVar36 + *(byte *)((int)puVar32 + 0x72);
    puVar32 = (uint *)CONCAT22(uVar24,CONCAT11(cVar36,cVar7));
    *pcVar11 = *pcVar11 + bVar5 + 0x5a;
    cVar8 = bVar5 + 0x60;
    pcVar11 = (char *)CONCAT31(uVar18,cVar8);
    if ((POPCOUNT(cVar8) & 1U) == 0) {
      *pcVar11 = *pcVar11 + cVar8;
      piVar16 = (int *)CONCAT31(uVar18,bVar5 + 0x88);
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      pbStack_60 = (byte *)CONCAT22(pbStack_60._2_2_,in_DS);
      puVar46 = (uint *)CONCAT22((short)((uint)puVar20 >> 0x10),
                                 CONCAT11((bVar6 | (byte)*param_2) + (char)*piVar16,cVar28));
      *(char *)piVar16 = (char)*piVar16;
      cVar7 = cVar7 - *pbVar47;
      cVar36 = cVar36 + *(char *)(CONCAT31((int3)((uint)puVar32 >> 8),cVar7) + 0x73);
      *(byte *)piVar16 = (char)*piVar16 + bVar5 + 0x88;
      bVar5 = bVar5 + 0xb2 & (byte)*param_2;
      puVar48 = (uint *)((int)puVar48 + iRam73060073);
      *(char *)CONCAT31(uVar18,bVar5) = *(char *)CONCAT31(uVar18,bVar5) + bVar5;
      pcVar11 = (char *)CONCAT31(uVar18,bVar5 + 0x2a);
      puVar32 = (uint *)CONCAT22(uVar24,CONCAT11(cVar36 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar36,
                                                  cVar7)) + 0x74),cVar7));
      *pcVar11 = *pcVar11 + bVar5 + 0x2a;
      piVar16 = (int *)CONCAT31(uVar18,bVar5 + 0x54);
      in_SS = (ushort)puStack_70;
      goto code_r0x0040486e;
    }
    pbVar45 = (byte *)*(undefined6 *)pcVar11;
    *pbVar47 = *pbVar47 + (char)*(undefined6 *)pcVar11;
  }
  uVar18 = (undefined3)((uint)pbVar45 >> 8);
  bVar5 = (byte)pbVar45 | *pbVar47;
  pcVar11 = (char *)CONCAT31(uVar18,bVar5);
  *pcVar11 = *pcVar11 + bVar5;
  *puVar32 = (uint)(*puVar32 + (int)puVar46);
  puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                             CONCAT11((char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x75),
                                      (char)puVar32));
  *pcVar11 = *pcVar11 + bVar5;
  pcVar11 = (char *)CONCAT31(uVar18,bVar5 + 0x6f);
  *pcVar11 = *pcVar11 + bVar5 + 0x6f;
  pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar46;
  uRam00c16f07 = SUB41(pcVar11,0);
  in_SS = uStack_6c;
code_r0x004048de:
  cVar8 = (char)pcVar11;
  *pbVar47 = *pbVar47 + cVar8;
  *pcVar11 = *pcVar11 + cVar8;
  *(byte **)(pcVar11 + (int)puVar46) = (byte *)(*(int *)(pcVar11 + (int)puVar46) + (int)puVar46);
  puStack_70 = (uint *)CONCAT22(puStack_70._2_2_,in_SS);
  bVar5 = *(byte *)((int)puVar32 + 0x75);
  *pcVar11 = *pcVar11 + cVar8;
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar8 + 'o');
  pbVar47 = pbVar47 + 1;
  *pcVar11 = *pcVar11 + cVar8 + 'o';
  pbStack_74 = (byte *)CONCAT22(pbStack_74._2_2_,in_SS);
  puVar20 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                             CONCAT11((char)((uint)puVar32 >> 8) + bVar5,(char)puVar32));
  puVar40 = puVar32;
  uVar9 = in_SS;
code_r0x004048f5:
  puVar32 = puVar20;
  pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar46;
  do {
    uRam00c36f08 = SUB41(pcVar11,0);
    while( true ) {
      bVar5 = *pbVar47;
      cVar8 = (char)pcVar11;
      *pbVar47 = *pbVar47 + cVar8;
      iStack_78 = CONCAT22(iStack_78._2_2_,uVar9);
      if (SCARRY1(bVar5,cVar8) == (char)*pbVar47 < '\0') {
        pcVar11[(int)puVar40] = pcVar11[(int)puVar40] + cVar8;
        goto code_r0x00404982;
      }
      *pcVar11 = *pcVar11 + cVar8;
      pbVar45 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar8 + '*');
      puStack_7c = (uint *)CONCAT22(puStack_7c._2_2_,in_DS);
      bVar5 = (byte)((uint)puVar46 >> 8);
      cVar8 = (char)puVar46;
      bVar6 = bVar5 + *pbVar45;
      pbVar45 = pbVar45 + (uint)CARRY1(bVar5,*pbVar45) + *(int *)pbVar45;
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      cVar7 = (char)puVar32 - *pbVar47;
      bVar5 = *pbVar45;
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar6 + *pbVar45,cVar8));
      iVar15 = *(int *)pbVar45;
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      pcVar11 = (char *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar6,bVar5) + iVar15) >> 8),
                                 (char)(pbVar45 + (uint)CARRY1(bVar6,bVar5) + iVar15) -
                                 *(byte *)((int)param_2 + 3));
      puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                 CONCAT11((char)((uint)puVar32 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)puVar32 >> 8),cVar7) +
                                                   -0x3a),cVar7));
code_r0x00404921:
      bVar5 = (byte)pcVar11;
      *pcVar11 = *pcVar11 + bVar5;
      pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar5 + 0x6f);
      *(byte *)puVar46 = ((byte)*puVar46 - (bVar5 + 0x6f)) - (0x90 < bVar5);
code_r0x00404927:
      *(byte *)param_2 = (byte)*param_2 + (char)puVar46;
      pbStack_74 = (byte *)CONCAT22(pbStack_74._2_2_,in_SS);
      *(byte *)puVar46 = (byte)*puVar46 + 1;
      cVar8 = (char)((uint)puVar46 >> 8) - pbVar47[2];
      puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(cVar8,(char)puVar46));
      if ((POPCOUNT(cVar8) & 1U) == 0) break;
      pcVar11 = pcVar11 + -0x1b7e2606;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar11 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar11));
    }
code_r0x00404931:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar8 = (char)pcVar11 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar8);
    pbVar45 = pbVar47;
  } while ((POPCOUNT(cVar8) & 1U) != 0);
  do {
    bVar5 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    uVar18 = (undefined3)((uint)pcVar11 >> 8);
    piVar16 = (int *)CONCAT31(uVar18,bVar5 + 0x6f);
    *puVar46 = (*puVar46 - (int)piVar16) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar46;
    iVar15 = *(int *)((int)puVar48 + 0x1a);
    *piVar16 = *piVar16 + (int)piVar16;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar45);
    *(byte *)puVar46 = (byte)*puVar46 + 1;
    bVar5 = (bVar5 + 0x6f) - (char)*piVar16;
    pbVar47 = (byte *)CONCAT31(uVar18,bVar5);
    *pbVar47 = *pbVar47 + bVar5;
    pbVar45 = pbVar45 + *(int *)pbVar47;
    cVar8 = bVar5 + *pbVar47;
    puVar12 = (ushort *)CONCAT31(uVar18,cVar8);
    *puVar12 = *puVar12 + (ushort)CARRY1(bVar5,*pbVar47) * (((ushort)puVar12 & 3) - (*puVar12 & 3));
    *(char *)puVar12 = (char)*puVar12 + cVar8;
    *(char *)puVar12 = (char)*puVar12 + cVar8;
    *(char *)puVar12 = (char)*puVar12 + cVar8;
    puVar48 = (uint *)((int)puVar48 + puVar32[0x1c]);
    puVar40 = (uint *)((int)puVar40 + iVar15);
code_r0x0040495b:
    cVar8 = (char)puVar12;
    *(char *)puVar12 = (char)*puVar12 + cVar8;
    uVar18 = (undefined3)((uint)puVar12 >> 8);
    cVar7 = cVar8 + '\x02';
    pcVar11 = (char *)CONCAT31(uVar18,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)puVar40);
      pbVar47 = pbVar45 + (uint)bVar50 * -2 + 1;
      out(*pbVar45,(short)param_2);
      puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                 CONCAT11((char)((uint)puVar32 >> 8) +
                                          *(byte *)((int)puVar32 + -0x3b),(char)puVar32));
      goto code_r0x00404931;
    }
    *pcVar11 = *pcVar11 + cVar7;
    pbVar45 = (byte *)(CONCAT31(uVar18,cVar8 + '}') + (int)puVar40);
    *pbVar45 = *pbVar45 + cVar8 + '}';
    *pcStack_3c = *pcStack_3c + (char)pcStack_3c;
    puVar46 = (uint *)CONCAT22((short)((uint)iStack_40 >> 0x10),
                               CONCAT11((byte)((uint)iStack_40 >> 8) | *(byte *)(iStack_40 * 3),
                                        (char)iStack_40));
    puVar48 = (uint *)(pbStack_58 + *(int *)((int)puStack_48 + 0x6f));
    pcVar11 = pcStack_3c;
    param_2 = puStack_44;
    puVar32 = puStack_48;
    puVar40 = puStack_50;
    pbVar45 = pbStack_54;
    while( true ) {
      cVar8 = (char)pcVar11;
      *pcVar11 = *pcVar11 + cVar8;
      uVar18 = (undefined3)((uint)pcVar11 >> 8);
      cVar7 = cVar8 + '\x02';
      pcVar11 = (char *)CONCAT31(uVar18,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) break;
      *pcVar11 = *pcVar11 + cVar7;
      pcVar11 = (char *)CONCAT31(uVar18,cVar8 + '}');
      out(*(undefined4 *)pbVar45,(short)param_2);
      *pcVar11 = *pcVar11 + cVar8 + '}';
code_r0x00404982:
      puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,in_ES);
      *(byte *)puStack_5c = (byte)*puStack_5c + (char)in_ES;
      puVar46 = (uint *)CONCAT22((short)((uint)pbStack_60 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_60 >> 8) |
                                          pbStack_60[(int)pbStack_74],(char)pbStack_60));
      puVar48 = (uint *)(iStack_78 + *(int *)((int)puStack_68 + 0x71));
      puVar40 = puStack_5c;
      param_2 = puStack_64;
      puVar32 = puStack_68;
      pbVar45 = pbStack_74;
      while( true ) {
        cVar8 = (char)puVar40;
        *(byte *)puVar40 = (byte)*puVar40 + cVar8;
        uVar18 = (undefined3)((uint)puVar40 >> 8);
        cVar7 = cVar8 + '\x02';
        puVar12 = (ushort *)CONCAT31(uVar18,cVar7);
        puVar40 = puStack_70;
        if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar12 = (char)*puVar12 + cVar7;
        bVar6 = cVar8 + 0x7d;
        iVar15 = CONCAT31(uVar18,bVar6);
        pbVar47 = (byte *)(iVar15 + (int)puStack_70);
        bVar5 = *pbVar47;
        *pbVar47 = *pbVar47 + bVar6;
        uVar35 = *puVar46;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar46;
        pcVar11 = (char *)(((iVar15 - uVar35) - (uint)CARRY1(bVar5,bVar6)) + -0x727b0317);
        cVar8 = (char)pcVar11;
        *pcVar11 = *pcVar11 + cVar8;
        uVar18 = (undefined3)((uint)pcVar11 >> 8);
        cVar7 = cVar8 + '\x02';
        pcVar11 = (char *)CONCAT31(uVar18,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) break;
        *pcVar11 = *pcVar11 + cVar7;
        bVar6 = cVar8 + 0x7d;
        iVar15 = CONCAT31(uVar18,bVar6);
        pbVar47 = (byte *)(iVar15 + (int)puStack_70);
        bVar5 = *pbVar47;
        *pbVar47 = *pbVar47 + bVar6;
        puVar40 = (uint *)((iVar15 - *puVar46) - (uint)CARRY1(bVar5,bVar6));
        puVar20 = param_2;
code_r0x004049b4:
        *(byte *)puVar20 = (byte)*puVar20 + (char)puVar46;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar20 >> 8),
                                   ((char)puVar20 - (byte)*puVar48) - *pbVar45);
        bVar6 = pbVar45[0x72];
        *puVar40 = *puVar40 & (uint)puVar46;
        pbVar47 = (byte *)((int)puVar40 + 2);
        *pbVar47 = *pbVar47 + (char)((uint)puVar20 >> 8);
        bVar5 = *pbVar47;
        puVar26 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(char)puVar32 - bVar6);
        pbVar47 = pbVar45;
        while (puVar32 = puVar26, pbVar45 = pbVar47, (POPCOUNT(bVar5) & 1U) == 0) {
          cVar8 = (char)puVar40;
          *(byte *)puVar40 = (byte)*puVar40 + cVar8;
          uVar18 = (undefined3)((uint)puVar40 >> 8);
          cVar7 = cVar8 + '\x03';
          pbVar44 = (byte *)CONCAT31(uVar18,cVar7);
          pbVar45 = pbVar47 + (uint)bVar50 * -8 + 4;
          out(*(undefined4 *)pbVar47,(short)param_2);
          in_SS = (ushort)pbStack_58;
          *pbVar44 = *pbVar44 + cVar7;
          cVar28 = (char)puVar46;
          puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                     CONCAT11((byte)((uint)puVar46 >> 8) | *pbVar44,cVar28));
          *(int *)pbVar44 = *(int *)pbVar44 - (int)pbVar44;
          *(byte *)param_2 = (byte)*param_2 + cVar28;
          cVar28 = (char)puVar26 - pbVar45[2];
          puVar32 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),cVar28);
          if ((POPCOUNT(cVar28) & 1U) != 0) {
            pbVar47 = (byte *)((int)puVar48 + (int)puStack_70 * 2);
            *pbVar47 = *pbVar47 + cVar7;
            ppbVar42 = (byte **)puStack_70;
            goto code_r0x00404a51;
          }
          *pbVar44 = *pbVar44 + cVar7;
          puVar40 = (uint *)CONCAT31(uVar18,cVar8 + 'r');
          *(byte *)puVar40 = (byte)*puVar40;
          pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,uVar9);
          do {
            puVar48 = (uint *)((int)puVar48 + puVar32[0x1c]);
            bVar5 = (byte)puVar40;
            *(byte *)puVar40 = (byte)*puVar40 + bVar5;
            uVar18 = (undefined3)((uint)puVar40 >> 8);
            bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
            puVar40 = (uint *)CONCAT31(uVar18,bVar5);
            cVar8 = (char)puVar46;
            *(byte *)param_2 = (byte)*param_2 + cVar8;
            bVar6 = (char)((uint)puVar46 >> 8) - pbVar45[2];
            puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar6,cVar8));
            puVar20 = param_2;
            if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar40 = (byte)*puVar40 + bVar5;
            bVar37 = bVar5 + 2;
            puVar40 = (uint *)CONCAT31(uVar18,bVar37);
            ppbVar41 = (byte **)puStack_70;
            if ((POPCOUNT(bVar37) & 1U) == 0) goto code_r0x004049f5;
            pbVar45 = pbStack_58;
          } while (0xfd < bVar5);
          *(byte *)puVar40 = (byte)*puVar40 | bVar37;
          puVar26 = puVar32;
          pbVar47 = pbStack_58;
          bVar5 = (byte)*puVar40;
        }
      }
    }
    *(byte *)param_2 = (byte)*param_2 + (char)puVar46;
    pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar5 = (byte)puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + bVar5;
    uVar18 = (undefined3)((uint)puVar40 >> 8);
    bVar37 = bVar5 + 0x6f;
    pbVar44 = (byte *)CONCAT31(uVar18,bVar37);
    *puVar46 = (*puVar46 - (int)pbVar44) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    pbVar47 = (byte *)((int)ppbVar41 + *(int *)((int)puVar48 + 0x1a));
    *(byte **)pbVar44 = pbVar44 + *(int *)pbVar44;
    uVar19 = (undefined3)((uint)param_2 >> 8);
    bVar5 = (byte)param_2 | *pbVar45;
    param_2 = (uint *)CONCAT31(uVar19,bVar5);
    *(byte *)puVar46 = (byte)*puVar46 + 1;
    cVar7 = bVar37 - *pbVar44;
    pbVar45 = pbVar45 + (-(uint)(bVar37 < *pbVar44) - *(int *)CONCAT31(uVar18,cVar7));
    uVar13 = CONCAT31(uVar18,cVar7 + *(char *)CONCAT31(uVar18,cVar7));
    bVar49 = CARRY1(bRam14110000,bVar6);
    bRam14110000 = bRam14110000 + bVar6;
    puVar40 = (uint *)((int)puVar32 + (int)pbVar45 * 2);
    uVar35 = *puVar40;
    uVar1 = uVar13 + *puVar40;
    puVar14 = (undefined4 *)(uVar1 + bVar49);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar14 = uVar2;
    puStack_5c = (uint *)CONCAT22(puStack_5c._2_2_,uVar9);
    uVar35 = (uint)(CARRY4(uVar13,uVar35) || CARRY4(uVar1,(uint)bVar49));
    puVar40 = (uint *)((int)puVar14 + uRam7d020511 + uVar35);
    ppbVar39 = &pbStack_60;
    ppbVar42 = &pbStack_60;
    ppbVar41 = &pbStack_60;
    pbStack_60 = pbVar47;
    cVar7 = '\x03';
    do {
      pbVar47 = pbVar47 + -4;
      ppbVar39 = ppbVar39 + -1;
      *ppbVar39 = (byte *)*(undefined4 *)pbVar47;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    pbStack_58 = (byte *)&pbStack_60;
    pbRam00c82802 =
         (byte *)((int)puVar40 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar14,uRam7d020511) ||
                      CARRY4((int)puVar14 + uRam7d020511,uVar35))));
    bVar37 = *pbVar45;
    cVar7 = (char)puVar40;
    *pbVar45 = *pbVar45 + cVar7;
  } while (SCARRY1(bVar37,cVar7) == (char)*pbVar45 < '\0');
  *(byte *)puVar40 = (byte)*puVar40 + cVar7;
  iVar15 = CONCAT31((int3)((uint)puVar40 >> 8),cVar7 + '\x11') + 0xc57b;
  bVar6 = (byte)iVar15;
  *param_2 = *param_2 ^ (uint)puVar32;
  param_2 = (uint *)CONCAT31(uVar19,bVar5 + (byte)*puVar46);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar6 + 0x6f) - (uint)(0x90 < bVar6)) + -0x18093a86;
  cVar7 = (char)iVar15;
  uVar18 = (undefined3)((uint)iVar15 >> 8);
  cVar8 = cVar7 + '\x02';
  pbVar47 = (byte *)CONCAT31(uVar18,cVar8);
  if ((POPCOUNT(cVar8) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar47 = *pbVar47 + cVar8;
  pbVar44 = (byte *)CONCAT31(uVar18,cVar7 + 'q');
  ppbVar42 = &pbStack_60;
code_r0x00404a51:
  pbVar47 = pbVar44 + 1;
  cVar8 = (char)pbVar47;
  *pbVar47 = *pbVar47 + cVar8;
  puVar32 = (uint *)CONCAT22((short)((uint)puVar26 >> 0x10),
                             CONCAT11((char)((uint)puVar26 >> 8) - cVar8,cVar28));
  *pbVar47 = *pbVar47 + cVar8;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar46);
  pbVar44 = pbVar44 + 0x757b03;
  pbVar47 = (byte *)((int)puVar48 + (int)ppbVar42 * 2);
  cVar8 = (char)pbVar44;
  *pbVar47 = *pbVar47 + cVar8;
  *pbVar44 = *pbVar44 + cVar8;
  *pbVar45 = *pbVar45 - (char)((uint)pbVar44 >> 8);
  *pbVar44 = *pbVar44 + cVar8;
  puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar42 + -0x3a));
  *pbVar44 = *pbVar44 + cVar8;
  pbVar47 = (byte *)(CONCAT31((int3)((uint)pbVar44 >> 8),cVar8 + '\x11') + 0x757b02);
  pbVar44 = (byte *)((int)puVar48 + (int)ppbVar42 * 2);
  bVar6 = (byte)pbVar47;
  *pbVar44 = *pbVar44 + bVar6;
  bVar5 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar6;
  puStack_7c = (uint *)CONCAT22(puStack_7c._2_2_,uVar9);
  pbRam011006fe = pbVar47 + (int)(pbRam011006fe + CARRY1(bVar5,bVar6));
  bVar5 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar6;
  if (!CARRY1(bVar5,bVar6)) goto code_r0x00404add;
  do {
    bVar5 = (byte)pbVar47;
    *pbVar47 = *pbVar47 + bVar5;
    bVar37 = (byte)puVar46;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                               CONCAT11((byte)((uint)puVar46 >> 8) | *pbVar47,bVar37));
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    uVar18 = (undefined3)((uint)pbVar47 >> 8);
    bVar5 = bVar5 + in_AF * '\x06';
    cVar8 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
    pcVar11 = (char *)CONCAT31(uVar18,cVar8);
    *pcVar11 = *pcVar11 + cVar8;
    puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar42 + -0x39));
    *pcVar11 = *pcVar11 + cVar8;
    iVar15 = CONCAT31(uVar18,cVar8 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar5 = (byte)iVar15;
    bVar6 = bVar5 + 0x6f;
    pbVar47 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar6);
    *puVar46 = (*puVar46 - (int)pbVar47) - (uint)(0x90 < bVar5);
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar37;
    pbRam011106fe = pbVar47 + (int)(pbRam011106fe + CARRY1((byte)uVar35,bVar37));
    bVar5 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar6;
    if (!CARRY1(bVar5,bVar6)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    bVar5 = (byte)puVar46;
    bVar6 = (byte)((uint)puVar46 >> 8) | *pbVar47;
    puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),CONCAT11(bVar6,bVar5));
    *pbVar47 = *pbVar47 - (char)pbVar47;
    *(byte *)puVar32 = (byte)*puVar32 + bVar6;
    out(*(undefined4 *)pbVar45,(short)param_2);
    *puVar46 = *puVar46 & (uint)pbVar47;
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbVar47 = pbVar47 + (uint)CARRY1((byte)uVar35,bVar5) + *(int *)(pbVar45 + (uint)bVar50 * -8 + 4)
    ;
    *pbVar47 = *pbVar47 + (char)pbVar47;
    *(byte *)puVar46 = (byte)*puVar46 + (char)param_2;
    pbVar45 = pbVar45 + (uint)bVar50 * -8 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar45,(short)param_2);
      pbVar47 = (byte *)CONCAT31((int3)((uint)pbVar47 >> 8),(byte)pbVar47 & (byte)*puVar46);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar46;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar32[5],
                                          (char)param_2));
      *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
      pbVar45 = pbVar45 + (uint)bVar50 * -8 + 4;
code_r0x00404ad4:
      puStack_7c = (uint *)CONCAT22(puStack_7c._2_2_,uVar9);
      pbVar47 = (byte *)((uint)pbVar47 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar47;
code_r0x00404add:
      bVar5 = (byte)pbVar47;
      uVar18 = (undefined3)((uint)pbVar47 >> 8);
      cVar8 = bVar5 + 8;
      pbVar47 = (byte *)CONCAT31(uVar18,cVar8);
      if (SCARRY1(bVar5,'\b') == cVar8 < '\0') break;
      *pbVar47 = *pbVar47 + cVar8;
      cVar8 = bVar5 + 10;
      piVar16 = (int *)CONCAT31(uVar18,cVar8);
      if ((POPCOUNT(cVar8) & 1U) != 0) {
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        goto code_r0x00404b18;
      }
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      puVar40 = (uint *)CONCAT31(uVar18,bVar5 + 0x7c);
      *puVar40 = *puVar40 & (uint)puVar46;
      *(char *)((int)puVar40 + 0x11) = *(char *)((int)puVar40 + 0x11) + (char)((uint)param_2 >> 8);
      cVar8 = (char)((int)puVar40 + 0xc67b);
      uVar18 = (undefined3)((uint)((int)puVar40 + 0xc67b) >> 8);
      bVar5 = cVar8 + 8;
      pbVar47 = (byte *)CONCAT31(uVar18,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar47 = *pbVar47 + bVar5;
        cRam02060000 = cVar8 + 'w';
        puVar40 = (uint *)CONCAT31(uVar18,cRam02060000);
        *(byte *)puVar40 = (byte)*puVar40 + cRam02060000;
        cVar8 = (char)puVar46;
        puVar46 = (uint *)CONCAT22((short)((uint)puVar46 >> 0x10),
                                   CONCAT11((byte)((uint)puVar46 >> 8) | (byte)*puVar40,cVar8));
        *puVar40 = *puVar40 - (int)puVar40;
        *(byte *)param_2 = (byte)*param_2 + cVar8;
        pbVar47 = pbVar45 + (uint)bVar50 * -8 + 4;
        out(*(undefined4 *)pbVar45,(short)param_2);
        pbVar45 = pbVar47;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar11 = (char *)((uint)puVar40 | *puVar40);
        goto code_r0x00404b89;
      }
      bVar6 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar5;
      *(byte **)pbVar45 = pbVar47 + (uint)CARRY1(bVar6,bVar5) + *(int *)pbVar45;
    }
    *pbVar45 = *pbVar45 + 1;
    *puVar46 = (uint)(pbVar47 + (uint)(0xf7 < bVar5) + *puVar46);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar40 = (byte)*puVar40 + (char)puVar40;
    puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),(char)puVar40 + 'r');
    piVar16 = (int *)((uint)puVar40 | *puVar40);
    param_2 = puStack_7c;
code_r0x00404b18:
    bRam11060000 = (byte)piVar16;
    iVar15 = CONCAT31((int3)((uint)((int)piVar16 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar16 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar5 + 0x6f);
    *puVar46 = (*puVar46 - iVar15) - (uint)(0x90 < bVar5);
    cVar8 = (char)puVar46;
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar6 = (byte)((uint)puVar32 >> 8);
    bVar29 = (byte)((uint)param_2 >> 8) | bVar6;
    pcVar10 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar29,(byte)param_2));
    piVar16 = (int *)(iVar15 + 0x73060001);
    *(byte *)puVar46 = (byte)*puVar46 & (byte)piVar16;
    *pcVar10 = *pcVar10 + cVar8;
    bVar37 = (byte)((uint)puVar46 >> 8);
    *(byte *)piVar16 = *(char *)piVar16 - bVar37;
    *(byte *)piVar16 = *(char *)piVar16 + (byte)piVar16;
    iVar15 = *piVar16;
    *piVar16 = *piVar16 - (int)piVar16;
    *(byte *)puVar32 = (byte)*puVar32 + bVar37;
    pcVar11 = (char *)((uint)piVar16 | *puVar48);
    *pcVar10 = *pcVar10 - bVar37;
    bVar5 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    ppbVar42 = (byte **)(((int)ppbVar42 - iVar15) - *(int *)(pcVar11 + ((int)ppbVar42 - iVar15)));
    uVar24 = (undefined2)((uint)puVar32 >> 0x10);
    bVar22 = (byte)puVar32;
    cVar7 = bVar6 + *(byte *)((int)puVar32 + 0x76);
    pbVar44 = (byte *)CONCAT22(uVar24,CONCAT11(cVar7,bVar22));
    *pcVar11 = *pcVar11 + bVar5;
    uVar18 = (undefined3)((uint)pcVar11 >> 8);
    uVar13 = CONCAT31(uVar18,bVar5 + 7);
    puVar40 = (uint *)((int)ppbVar42 + -0x1faeef1);
    uVar35 = *puVar40;
    uVar1 = *puVar40 + uVar13;
    *puVar40 = uVar1 + (0xf8 < bVar5);
    puStack_7c = (uint *)CONCAT22(puStack_7c._2_2_,uVar9);
    puVar32 = puStack_7c;
    bVar6 = bVar5 + 7 + (byte)*puVar46 +
            (CARRY4(uVar35,uVar13) || CARRY4(uVar1,(uint)(0xf8 < bVar5)));
    puVar40 = (uint *)CONCAT31(uVar18,bVar6);
    bVar5 = *pbVar45;
    *pbVar45 = *pbVar45 + bVar6;
    if (CARRY1(bVar5,bVar6)) break;
    *(byte *)puVar40 = (byte)*puVar40 + bVar6;
    puVar32 = (uint *)CONCAT22(uVar24,CONCAT11(cVar7 + pbVar44[0x76],bVar22));
    uStack_80 = uVar9;
  }
  *(byte *)puVar40 = (byte)*puVar40 + bVar6;
  uVar19 = (undefined3)((uint)pcVar10 >> 8);
  bVar25 = (byte)param_2 | *pbVar44;
  param_2 = (uint *)CONCAT31(uVar19,bVar25);
  pcRam2b060000 = (char *)CONCAT31(uVar18,bVar6 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar6 + 0x39)) - (0xd7 < (byte)(bVar6 + 0x11));
  bVar5 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar37;
  pbVar47 = pbVar45 + (uint)bVar50 * -8 + 4;
  out(*(undefined4 *)pbVar45,(short)param_2);
  bVar5 = (bVar6 + 0x37) - CARRY1(bVar5,bVar37);
  piVar16 = (int *)CONCAT31(uVar18,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    iVar15 = CONCAT31(uVar18,bVar5 + 0x11) + 0xc77b;
    pcVar11 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar11[0x28] = pcVar11[0x28] + bVar29;
code_r0x00404b89:
    cVar8 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar8;
    *pcVar11 = *pcVar11 + cVar8;
    *pcVar11 = *pcVar11 + cVar8;
    puVar12 = (ushort *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar8 + 'r');
    uVar9 = (ushort)puVar12 | *puVar12;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*(undefined4 *)pbVar47,(short)param_2);
    *pcVar11 = *pcVar11 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar5;
  pbVar45 = (byte *)((int)ppbVar42 - *(int *)((int)puVar48 + 0x21));
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar11 = (char *)CONCAT31(uVar19,bVar25 | *pbVar44);
  puVar48 = (uint *)(pbVar47 + (uint)bVar50 * -8 + 4);
  out(*(undefined4 *)pbVar47,(short)pcVar11);
  uVar35 = *puVar46;
  *pcVar11 = *pcVar11 + cVar8;
  uVar35 = CONCAT31(uVar18,bVar5 & (byte)uVar35) | 0x767b02;
  *(byte *)((int)puVar46 + (int)pcVar11) = *(byte *)((int)puVar46 + (int)pcVar11) + (char)uVar35;
  iVar15 = uVar35 + 0xc67b;
  cVar28 = (char)iVar15;
  uVar18 = (undefined3)((uint)iVar15 >> 8);
  cVar36 = cVar28 + 'r';
  pcVar11 = (char *)CONCAT31(uVar18,cVar36);
  pcVar11[0x28] = pcVar11[0x28] + bVar29;
  *pcVar11 = *pcVar11 + cVar36;
  uVar23 = (undefined2)((uint)puVar46 >> 0x10);
  bVar37 = bVar37 | *(byte *)((int)puStack_7c + -0x5e);
  puVar46 = (uint *)CONCAT22(uVar23,CONCAT11(bVar37,cVar8));
  *pcVar11 = *pcVar11 + cVar36;
  puStack_7c = (uint *)CONCAT22(puStack_7c._2_2_,uStack_80);
  pbVar47 = (byte *)CONCAT22(uVar24,CONCAT11(cVar7 + pbVar44[0x76],bVar22));
  *pcVar11 = *pcVar11 + cVar36;
  puVar40 = (uint *)CONCAT31(uVar18,cVar28 + -0x1c);
  pcVar11 = (char *)((uint)puVar40 | *puVar40);
  bVar49 = (POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar11;
  puVar40 = puStack_7c;
  pbVar44 = pbVar47;
  pbVar34 = pbVar45;
  puVar20 = puVar32;
  uVar9 = uStack_80;
  if (!bVar49) goto code_r0x00404ca8;
  *pcVar11 = *pcVar11 + cRam02060000;
  puVar40 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cRam02060000 + 'r');
  *puVar40 = *puVar40 & (uint)puVar46;
  *(char *)((int)puVar40 + 0x11) = *(char *)((int)puVar40 + 0x11) + (char)(uStack_80 >> 8);
  iVar15 = (int)puVar40 + 0xc77b;
  uVar18 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar44 = (byte *)CONCAT31(uVar18,cRam02060000);
  out(*puVar48,uStack_80);
  *pbVar44 = *pbVar44 + cRam02060000;
  puVar20 = (uint *)CONCAT22(uVar23,CONCAT11(bVar37 | *pbVar44,cVar8));
  *(int *)pbVar44 = *(int *)pbVar44 - (int)pbVar44;
  *(byte *)puStack_7c = (byte)*puStack_7c + cVar8;
  puVar40 = puVar48 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar48[(uint)bVar50 * -2 + 1],uStack_80);
  puVar26 = puStack_7c;
  puVar48 = puVar40;
  uVar9 = uStack_80;
  if ((POPCOUNT((byte)*puStack_7c) & 1U) != 0) goto code_r0x00404cca;
  *pbVar44 = *pbVar44 + cRam02060000;
  puVar12 = (ushort *)CONCAT31(uVar18,(char)iVar15 + '{');
  uVar9 = (ushort)puVar12 | *puVar12;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar9);
  bVar5 = (byte)uVar9;
  out(*puVar40,uStack_80);
  pbVar44 = (byte *)((int)puVar20 + 1);
  bRam11060000 = bVar5;
  *pcVar11 = *pcVar11 + bVar5;
  puVar46 = (uint *)CONCAT22((short)((uint)pbVar44 >> 0x10),
                             CONCAT11((byte)((uint)pbVar44 >> 8) | bRam110cde91,(char)pbVar44));
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar5 - 7);
  *puVar32 = (uint)(pcVar11 + (uint)(bVar5 < 7) + *puVar32);
  puVar48 = puVar40 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar40[(uint)bVar50 * -2 + 1],uStack_80);
  puVar40 = (uint *)((int)puStack_7c + 1);
  *pcVar11 = *pcVar11 + (bVar5 - 7);
  pbVar44 = (byte *)CONCAT31((int3)((uint)pbVar47 >> 8),bVar22 | (byte)(uVar9 >> 8));
  do {
    bVar5 = (char)pcVar11 - *pcVar11;
    uVar35 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar5;
    cVar8 = bVar5 - CARRY1((byte)uVar35,bVar5);
    *(byte *)puVar40 = *(byte *)puVar40 + cVar8;
    cVar7 = (char)((uint)puVar46 >> 8);
    *(byte *)(puVar32 + 0x673b40) = (byte)puVar32[0x673b40] + cVar7;
    puVar17 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar8);
    *(byte *)puVar17 = (byte)*puVar17 + cVar8;
    *(byte *)puVar40 = *(byte *)puVar40 + cVar8;
    *(byte **)(pbVar44 + 0x58) = (byte *)(*(int *)(pbVar44 + 0x58) + (int)puVar48);
    puVar20 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar46 >> 0x10),
                                               CONCAT11(cVar7 + (char)((uint)pcVar11 >> 8),
                                                        (char)puVar46)) >> 8),
                               (char)puVar46 + *(char *)((int)puVar17 * 2));
    *(byte *)puVar17 = (byte)*puVar17 + cVar8;
    *(byte *)puVar48 = (byte)*puVar48 + (char)pbVar44;
    puVar26 = puVar40;
    pbVar47 = pbVar44;
_ctor:
    bVar6 = (byte)((uint)puVar20 >> 8);
    uVar35 = *puVar17;
    bVar5 = (byte)puVar20;
    puVar17 = (uint *)((int)puVar17 + (uint)CARRY1(bVar6,(byte)*puVar17) + *puVar17);
    *(byte *)puVar26 = *(byte *)puVar26 + bVar5;
    cVar8 = bVar5 - *(byte *)((int)puVar26 + 3);
    puVar46 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar20 >> 0x10),
                                               CONCAT11(bVar6 + (byte)uVar35,bVar5)) >> 8),cVar8);
    if ((POPCOUNT(cVar8) & 1U) != 0) {
      if (*(byte *)((int)puVar26 + 3) <= bVar5) {
        *puVar17 = (uint)(*puVar17 + (int)puVar17);
        puVar26 = (uint *)CONCAT31((int3)((uint)puVar26 >> 8),(byte)puVar26 | *pbVar47);
        puVar17 = puVar17 + 0x230e;
        puVar20 = puVar46;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
    cVar8 = (char)puVar17 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar8);
    bVar49 = (POPCOUNT(cVar8) & 1U) == 0;
    puVar40 = puVar26;
    pbVar44 = pbVar47;
    pbVar34 = pbVar45;
    puVar20 = puVar32;
    uVar9 = (ushort)puStack_70;
code_r0x00404ca8:
    puStack_70._0_2_ = uVar9;
    pcVar10 = pcStack_4c;
    puVar26 = (uint *)pbStack_54;
    pbVar47 = pbStack_58;
    pbVar45 = pbStack_60;
    puVar32 = puStack_68;
    if (bVar49) break;
    *(byte *)puVar40 = *(byte *)puVar40 + (char)puVar46;
    pbVar45 = pbVar34;
    puVar32 = puVar20;
  } while( true );
  *pcVar11 = *pcVar11 + (char)pcVar11;
  bVar5 = (byte)pcStack_4c;
  *pcStack_4c = *pcStack_4c + bVar5;
  puVar20 = (uint *)CONCAT22((short)((uint)puStack_50 >> 0x10),
                             CONCAT11((byte)((uint)puStack_50 >> 8) | *pbStack_54,(char)puStack_50))
  ;
  *pbStack_58 = *pbStack_58 + (char)pbStack_58;
  pbVar44 = (byte *)((int)pcVar10 * 2);
  *pbVar44 = *pbVar44 ^ bVar5;
  uVar3 = *(undefined6 *)pcVar10;
  in_DS = (ushort)((uint6)uVar3 >> 0x20);
  pbVar44 = (byte *)uVar3;
  bVar6 = (byte)uVar3;
  *pbVar44 = *pbVar44 + bVar6;
  bVar5 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar6;
  puVar40 = (uint *)((int)puVar20 + 0x11673);
  uVar35 = *puVar40;
  uVar1 = *puVar40;
  *puVar40 = (uint)((byte *)((int)puVar26 + uVar1) + CARRY1(bVar5,bVar6));
  puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,(ushort)puStack_70);
  pbVar44 = pbVar44 + (uint)(CARRY4(uVar35,(uint)puVar26) ||
                            CARRY4((int)puVar26 + uVar1,(uint)CARRY1(bVar5,bVar6))) +
                      *(int *)((int)puVar20 + (int)puVar26);
  puVar48 = puStack_64;
  uVar9 = (ushort)puStack_70;
code_r0x00404cca:
  puStack_70._0_2_ = uVar9;
  cVar8 = (char)pbVar44 + '\x04';
  puVar17 = (uint *)CONCAT31((int3)((uint)pbVar44 >> 8),cVar8);
  if (SCARRY1((char)pbVar44,'\x04') == cVar8 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
  puVar40 = puVar48 + (uint)bVar50 * -2 + 1;
  out(*puVar48,(short)puVar26);
  uVar35 = *puVar20;
  bVar5 = *(byte *)puVar26;
  bVar6 = (byte)puVar20;
  *(byte *)puVar26 = *(byte *)puVar26 + bVar6;
  iVar15 = (CONCAT31((int3)((uint)puVar17 >> 8),(char)puVar17 + '\x03') & uVar35) + iRam00008c38;
  *(byte *)puVar20 = (byte)*puVar20 + (char)puVar26;
  pcVar11 = (char *)(iVar15 + (uint)CARRY1(bVar5,bVar6) + 0x1246f);
  bVar5 = *(byte *)puVar26;
  uVar18 = (undefined3)((uint)puVar20 >> 8);
  puVar46 = (uint *)CONCAT31(uVar18,bVar6 | bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar11 >> 8);
  puVar17 = (uint *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + *pcVar11) + 0x1fbeef2);
  uVar35 = *puVar17;
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  if (CARRY4(uVar35,(uint)puVar17)) {
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    pcVar11 = (char *)CONCAT31(uVar18,bVar6 | bVar5 | bRam00282809);
    cVar8 = (char)((uint)puVar20 >> 8);
    *pbVar47 = *pbVar47 + cVar8;
    *pcVar11 = *pcVar11 - cVar8;
    *(byte *)puVar17 = *(byte *)puVar17 + (char)puVar17;
    iVar15 = (int)pcVar11 - *(int *)pbVar47;
    puVar48 = puVar40 + (uint)bVar50 * -2 + 1;
    out(*puVar40,(short)puVar26);
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    puVar46 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar35 = *puVar17;
    bVar5 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar5;
    puVar40 = puVar48 + (uint)bVar50 * -2 + 1;
    out(*puVar48,(short)puVar26);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar6 = bVar5 + in_AF * '\x06';
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),
                               bVar6 + (0x90 < (bVar6 & 0xf0) |
                                       CARRY1((byte)uVar35,bVar5) | in_AF * (0xf9 < bVar6)) * '`');
  }
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  bVar6 = (byte)puVar17 | (byte)*puVar32;
  puVar48 = puVar40 + (uint)bVar50 * -2 + 1;
  uVar23 = SUB42(puVar26,0);
  out(*puVar40,uVar23);
  *(byte *)puVar46 = (byte)*puVar46 - bVar6;
  bVar5 = *(byte *)puVar26;
  bVar37 = (byte)puVar46;
  *(byte *)puVar26 = *(byte *)puVar26 + bVar37;
  iVar15 = CONCAT31((int3)((uint)puVar17 >> 8),bVar6) + *puVar48 + (uint)CARRY1(bVar5,bVar37);
  pbVar44 = pbVar45 + -*puVar26;
  uVar18 = (undefined3)((uint)iVar15 >> 8);
  cVar8 = (char)iVar15 + (byte)*puVar48 + (pbVar45 < (byte *)*puVar26);
  puVar40 = (uint *)CONCAT31(uVar18,cVar8);
  bVar5 = (byte)((uint)puVar46 >> 8);
  *(byte *)puVar46 = (byte)*puVar46 - bVar5;
  *puVar40 = (uint)(*puVar40 + (int)puVar40);
  bVar37 = bVar37 | *(byte *)((int)puVar26 + (int)puVar40);
  uVar24 = (undefined2)((uint)puVar46 >> 0x10);
  if ((POPCOUNT(bVar37) & 1U) == 0) {
    *(byte *)puVar40 = (byte)*puVar40 + cVar8;
    pcVar11 = (char *)CONCAT31(uVar18,cVar8 + '\x12');
    *pcVar11 = *pcVar11 + bVar5;
    puVar40 = (uint *)CONCAT31(uVar18,(cVar8 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar46 >> 8),bVar37));
    bVar6 = *(byte *)puVar26;
    *(byte *)puVar26 = *(byte *)puVar26 + bVar37;
    if (!CARRY1(bVar6,bVar37)) {
      pbVar45 = (byte *)((uint)puVar40 | *puVar40);
      out(*puVar48,uVar23);
      *pbVar45 = *pbVar45 + (char)pbVar45;
      bVar6 = *pbVar45;
      piVar16 = (int *)CONCAT22(uVar24,CONCAT11(bVar5 | bVar6,bVar37));
      iVar15 = (int)pbVar45 - *piVar16;
      *(byte *)puVar26 = *(byte *)puVar26 + bVar37;
      puVar40 = puVar48 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
      out(puVar48[(uint)bVar50 * -2 + 1],uVar23);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar16 + iVar15) = *(char *)((int)piVar16 + iVar15) - (bVar5 | bVar6);
      *(byte *)puVar26 = *(byte *)puVar26 + bVar37;
      pbVar45 = (byte *)(iVar15 + -0x120edecd);
      *(byte *)puVar40 = (byte)*puVar40 + 1;
      bVar5 = *pbVar45;
      bVar6 = (byte)pbVar45;
      *pbVar45 = *pbVar45 + bVar6;
      pbVar44 = pbVar44 + ((-1 - *(int *)((int)puVar32 + 0x42)) - (uint)CARRY1(bVar5,bVar6));
      *pbVar45 = *pbVar45 + bVar6;
      bVar29 = (byte)pbVar47 | (byte)((uint)pbVar45 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar45;
      bVar5 = *(byte *)puVar26;
      pcVar11 = (char *)(((uint)pbVar45 | 0x11) + 0x511072c);
      puVar48 = puVar40 + (uint)bVar50 * -2 + 1;
      out(*puVar40,uVar23);
      puVar26 = (uint *)((int)puVar26 + 1);
      *pcVar11 = *pcVar11 + (char)pcVar11;
      bVar6 = (byte)((uint)pcVar11 >> 8);
      pbVar47 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar47 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar47 >> 8) | bVar5,bVar29)
                                                ) >> 8),bVar29 | bVar6);
      uVar18 = (undefined3)((uint)pcVar11 >> 8);
      bVar5 = (char)pcVar11 - *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar18,bVar5);
      *pcVar11 = *pcVar11 + bVar5;
      *(int *)((int)pcVar11 * 2) = (int)(pbVar47 + *(int *)((int)pcVar11 * 2));
      *(byte *)puVar26 = *(byte *)puVar26 + bVar5;
      *pbVar44 = *pbVar44 + bVar6;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar18,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar35;
      pbVar45 = (byte *)CONCAT22((short)(uVar35 >> 0x10),CONCAT11(bVar6 + in_AF,bVar5));
      *(byte *)puVar48 = (byte)*puVar48 + bVar37;
      *pbVar45 = *pbVar45 + bVar5;
      *pbVar45 = *pbVar45 + bVar5;
      bVar49 = CARRY1(bVar5,*pbVar45);
      puVar40 = (uint *)CONCAT31((int3)((uint)pbVar45 >> 8),bVar5 + *pbVar45);
      goto code_r0x00404d9a;
    }
    *pbVar47 = *pbVar47 - (char)puVar26;
  }
  *(byte *)puVar40 = (byte)*puVar40 + (char)puVar40;
  bVar49 = false;
  piVar16 = (int *)CONCAT22(uVar24,CONCAT11(bVar5 | *(byte *)puVar26,bVar37));
code_r0x00404d9a:
  do {
    pbVar34 = (byte *)puVar26;
    *puVar40 = (*puVar40 - (int)puVar40) - (uint)bVar49;
    bVar5 = (byte)((uint)piVar16 >> 8);
    uVar24 = (undefined2)((uint)piVar16 >> 0x10);
    bVar6 = (byte)piVar16;
    bVar37 = bVar5 + (byte)iRam00000c00;
    pbVar45 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *pbVar34 = *pbVar34 + bVar6;
    pbVar47 = (byte *)CONCAT31((int3)((uint)pbVar47 >> 8),(char)pbVar47 - (byte)*puVar48);
    bVar5 = *pbVar45;
    puVar40 = (uint *)(pbVar45 + (uint)CARRY1(bVar37,*pbVar45) + *(int *)pbVar45);
    *pbVar34 = *pbVar34 + bVar6;
    cVar7 = ((bVar37 + bVar5) - *pbVar34) + (byte)*puVar40;
    pcVar11 = (char *)CONCAT22(uVar24,CONCAT11(cVar7,bVar6));
    puVar20 = puVar32 + (uint)bVar50 * -2 + 1;
    uVar35 = in((short)pbVar34);
    *puVar32 = uVar35;
    cVar8 = (char)puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + cVar8;
    uVar18 = (undefined3)((uint)pbVar34 >> 8);
    bVar37 = (byte)pbVar34 | (byte)*puVar48;
    pcVar10 = (char *)CONCAT31(uVar18,bVar37);
    *pcVar11 = *pcVar11 + '\x01';
    bVar5 = (cVar7 - *pcVar10) + (byte)*puVar40;
    pcVar11 = (char *)CONCAT22(uVar24,CONCAT11(bVar5,bVar6));
    puVar32 = puVar20 + (uint)bVar50 * -2 + 1;
    uVar35 = in((short)pcVar10);
    *puVar20 = uVar35;
    *(byte *)puVar40 = (byte)*puVar40 + cVar8;
    bVar37 = bVar37 | (byte)*puVar48;
    puVar26 = (uint *)CONCAT31(uVar18,bVar37);
    *pcVar11 = *pcVar11 + '\x01';
    bVar49 = bVar6 < *(byte *)((int)puVar26 + 2);
    cVar7 = bVar6 - *(byte *)((int)puVar26 + 2);
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  *(byte *)puVar40 = (byte)*puVar40 + cVar8;
  bVar6 = cVar8 + 0x7b;
  pbVar45 = (byte *)CONCAT31((int3)((uint)puVar40 >> 8),bVar6);
  pbVar47[(int)pbVar45] = pbVar47[(int)pbVar45] + bVar6;
  puVar40 = puVar48 + (uint)bVar50 * -2 + 1;
  uVar23 = SUB42(puVar26,0);
  out(*puVar48,uVar23);
  pbVar33 = pbVar47 + -1;
  *pbVar45 = *pbVar45 + bVar6;
  bVar5 = bVar5 | *(byte *)puVar26;
  piVar16 = (int *)CONCAT22(uVar24,CONCAT11(bVar5,cVar7));
  *pbVar45 = *pbVar45 + bVar6;
  *pbVar33 = *pbVar33 + bVar37;
  *pbVar33 = *pbVar33 ^ bVar6;
  *(byte *)puVar26 = *(byte *)puVar26 + bVar5;
  *pbVar45 = *pbVar45 + bVar6;
  do {
    bVar22 = (byte)((uint)piVar16 >> 8);
    *(byte *)puVar32 = (byte)*puVar32 + bVar22;
    bVar5 = *pbVar45;
    bVar6 = (byte)pbVar45;
    *pbVar45 = *pbVar45 + bVar6;
    *(byte **)(pbVar47 + 0x17) =
         (byte *)((int)puVar40 + (uint)CARRY1(bVar5,bVar6) + *(int *)(pbVar47 + 0x17));
    *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
    uVar19 = (undefined3)((uint)pbVar45 >> 8);
    bVar6 = bVar6 | (byte)*puVar40;
    puVar32 = (uint *)((int)puVar32 + *(int *)(pbVar44 + -0x34));
    *(char *)CONCAT31(uVar19,bVar6) = *(char *)CONCAT31(uVar19,bVar6) + bVar6;
    bVar5 = bVar6 + 2;
    cVar8 = (char)((uint)pbVar34 >> 8);
    bVar29 = (byte)piVar16;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar45 = (byte *)CONCAT31(uVar19,bVar6 + 0x15 + (0xfd < bVar6));
      if (0xec < bVar5 || CARRY1(bVar6 + 0x15,0xfd < bVar6)) {
        *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
      }
code_r0x00404e60:
      pbVar44 = pbVar44 + -*puVar26;
      bVar5 = *pbVar45;
      *pbVar45 = *pbVar45 + (byte)pbVar45;
      pbVar47 = (byte *)((int)puVar40 + (-(uint)CARRY1(bVar5,(byte)pbVar45) - *(int *)pbVar45));
      pbVar45 = pbVar45 + *(int *)pbVar45;
      puStack_7c = (uint *)CONCAT22(puStack_7c._2_2_,in_DS);
      *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
      *(char *)piVar16 = (char)*piVar16 + cVar8;
      bVar5 = *pbVar45;
      *pbVar45 = *pbVar45 + (byte)pbVar45;
      *(byte **)(pbVar33 + (int)puVar26) =
           (byte *)((int)puVar26 +
                   (uint)CARRY1(bVar5,(byte)pbVar45) + *(int *)(pbVar33 + (int)puVar26));
      pbVar45 = pbVar45 + 0x73061314;
      *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
      uVar19 = (undefined3)((uint)piVar16 >> 8);
      bVar29 = bVar29 | *(byte *)puVar26;
      pcVar10 = (char *)CONCAT31(uVar19,bVar29);
      *pbVar45 = *pbVar45 + (char)pbVar45;
      cVar8 = (char)pbVar45 + 'o';
      pcVar11 = (char *)CONCAT31((int3)((uint)pbVar45 >> 8),cVar8);
      *pcVar11 = *pcVar11 + cVar8;
      pbVar45 = pbVar47 + ((uint)bVar50 * -2 + 1) * 4;
      out(*(undefined4 *)pbVar47,uVar23);
      bVar5 = *(byte *)puVar26;
      *(byte *)puVar26 = *(byte *)puVar26 + bVar29;
      pcVar11 = pcVar11 + (uint)CARRY1(bVar5,bVar29) + *puVar32;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      *pcVar10 = *pcVar10 + bVar37;
      puVar48 = (uint *)(pbVar45 + ((uint)bVar50 * -2 + 1) * 4);
      out(*(undefined4 *)pbVar45,uVar23);
      *(byte *)puVar26 = *(byte *)puVar26 + bVar29;
      piVar16 = (int *)((uint)pcVar11 | *puVar32);
      pcVar10[0x390a0000] = pcVar10[0x390a0000] - bVar22;
      pbVar34 = (byte *)&cRam07000000;
      *(byte *)puVar32 = (byte)*puVar32 - bVar22;
      *piVar16 = *piVar16 + (int)piVar16;
      puVar40 = (uint *)CONCAT31(uVar19,bVar29 | *(byte *)((int)piVar16 + (int)pcVar10));
      *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) - bVar22;
      cRam07000000 = cRam07000000 + bVar22;
      piVar16 = (int *)((uint)piVar16 | 0x777b02);
      pbVar45 = (byte *)((int)puVar32 + (int)pbVar44 * 2);
      bVar49 = SCARRY1(*pbVar45,(char)piVar16);
      *pbVar45 = *pbVar45 + (char)piVar16;
      bVar5 = *pbVar45;
      *(char *)piVar16 = (char)*piVar16;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
    bVar6 = bVar6 + 0x71;
    pbVar45 = (byte *)CONCAT31(uVar19,bVar6);
    *pbVar45 = *pbVar45;
    *(byte *)puVar40 = (byte)*puVar40 + 1;
    *piVar16 = (*piVar16 - (int)pbVar45) - (uint)(0x90 < bVar5);
    uVar35 = *puVar40;
    *(byte *)puVar40 = (byte)*puVar40 + bVar6;
    if (!CARRY1((byte)uVar35,bVar6)) goto code_r0x00404e60;
    *pbVar45 = *pbVar45 + bVar6;
    uVar24 = (undefined2)((uint)piVar16 >> 0x10);
    bVar22 = bVar22 | *pbVar45;
    pbVar45 = pbVar45 + -*(int *)pbVar45;
    *pbVar33 = *pbVar33 + bVar22;
    cVar7 = bVar29 - *(byte *)((int)puVar26 + 2);
    piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar24,CONCAT11(bVar22,bVar29)) >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  cVar28 = (char)pbVar45;
  *pbVar45 = *pbVar45 + cVar28;
  uVar19 = (undefined3)((uint)pbVar45 >> 8);
  pcVar11 = (char *)CONCAT31(uVar19,cVar28 + '{');
  out(*puVar40,uVar23);
  *pcVar11 = *pcVar11 + cVar28 + '{';
  bVar6 = cVar28 + 0x7e;
  pbVar45 = (byte *)CONCAT31(uVar19,bVar6);
  puVar48 = puVar40 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
  out(puVar40[(uint)bVar50 * -2 + 1],uVar23);
  pbVar34 = pbVar47 + -2;
  *pbVar45 = *pbVar45 + bVar6;
  bVar5 = *(byte *)puVar26;
  puVar40 = (uint *)CONCAT22(uVar24,CONCAT11(bVar22 | bVar5,cVar7));
  *pbVar45 = *pbVar45 + bVar6;
  *pbVar34 = *pbVar34 + bVar37;
  *pbVar34 = *pbVar34 ^ bVar6;
  *(byte *)puVar26 = *(byte *)puVar26 + (bVar22 | bVar5);
  *pbVar45 = *pbVar45 + bVar6;
  *pbVar45 = *pbVar45 + cVar8;
  bVar5 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar6;
  *(byte **)(pbVar47 + 0x18) =
       (byte *)((int)puVar48 + (uint)CARRY1(bVar5,bVar6) + *(int *)(pbVar47 + 0x18));
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  bVar6 = bVar6 | (byte)*puVar48;
  puVar32 = (uint *)((int)puVar32 + *(int *)(pbVar44 + -0x33));
  *(char *)CONCAT31(uVar19,bVar6) = *(char *)CONCAT31(uVar19,bVar6) + bVar6;
  bVar49 = SCARRY1(bVar6,'\x02');
  bVar5 = bVar6 + 2;
  piVar16 = (int *)CONCAT31(uVar19,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    return CONCAT31(uVar19,bVar6 + 0x71);
  }
code_r0x00404ebf:
  bVar6 = (byte)piVar16;
  uVar19 = (undefined3)((uint)piVar16 >> 8);
  if (bVar5 != 0 && bVar49 == (char)bVar5 < '\0') {
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    puVar48[(int)puVar32 * 2] =
         (uint)((int)puVar26 + (uint)(0xd2 < bVar6) + puVar48[(int)puVar32 * 2]);
    return CONCAT31(uVar19,bVar6 + 0x2d);
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar5 = *pbVar34;
  *puVar48 = (uint)(*puVar48 + (int)piVar16);
  bVar29 = (byte)((uint)puVar40 >> 8);
  *(byte *)piVar16 = (char)*piVar16 - bVar29;
  *(byte *)piVar16 = (char)*piVar16 + bVar6;
  pbVar45 = (byte *)(CONCAT31(uVar18,bVar37 | bVar5) - *(int *)pbVar34);
  puVar20 = (uint *)CONCAT31(uVar19,bVar6 + 6);
  *(uint *)(pbVar34 + (int)puVar48 * 2) =
       (int)puVar20 + (uint)(0xf9 < bVar6) + *(int *)(pbVar34 + (int)puVar48 * 2);
  *(byte *)puVar40 = (byte)*puVar40 ^ bVar6 + 6;
  bVar6 = (byte)puVar40;
  *pbVar45 = *pbVar45 + bVar6;
  puVar46 = puVar48 + (uint)bVar50 * -2 + 1;
  uVar24 = SUB42(pbVar45,0);
  out(*puVar48,uVar24);
  *puVar40 = *puVar40 ^ (uint)puVar20;
  *pbVar45 = *pbVar45 + bVar6;
  puVar48 = (uint *)(pbVar34 + -*(int *)pbVar34);
  *(uint *)((int)puVar32 + 0x31) = *(uint *)((int)puVar32 + 0x31) | (uint)pbVar44;
  *puVar20 = *puVar20 + (int)puVar20;
  puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar29 | (byte)*puVar48,bVar6))
  ;
  *(byte **)(pbVar45 + 0x6e) = (byte *)(*(int *)(pbVar45 + 0x6e) + (int)puVar46);
  piVar16 = (int *)((uint)puVar20 | *puVar20);
  bVar37 = (byte)puVar48;
  *(byte *)puVar32 = (byte)*puVar32 - bVar37;
  bVar5 = *pbVar45;
  *pbVar45 = *pbVar45 + bVar6;
  if (CARRY1(bVar5,bVar6)) {
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar5 = pbVar45[0x11];
    uVar23 = (undefined2)((uint)puVar48 >> 0x10);
    puVar20 = puVar46 + (uint)bVar50 * -2 + 1;
    out(*puVar46,uVar24);
    puVar40 = (uint *)((int)puVar40 + 1);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar25 = (byte)((uint)puVar48 >> 8) | bVar5 | *pbVar45;
    pcVar11 = (char *)((int)piVar16 + -0x21000001);
    bVar5 = (byte)pcVar11 | 0x11;
    uVar18 = (undefined3)((uint)pcVar11 >> 8);
    cVar8 = bVar5 - 7;
    pcVar10 = (char *)CONCAT31(uVar18,cVar8);
    *puVar32 = (uint)(pcVar10 + (uint)(bVar5 < 7) + *puVar32);
    puVar46 = puVar20 + (uint)bVar50 * -2 + 1;
    out(*puVar20,uVar24);
    pbVar45 = pbVar45 + 1;
    *pcVar10 = *pcVar10 + cVar8;
    bVar29 = (byte)((uint)pcVar11 >> 8);
    bVar22 = bVar37 | bVar29;
    bVar6 = cVar8 - *pcVar10;
    bVar5 = *(byte *)puVar40;
    *(byte *)puVar40 = *(byte *)puVar40 + bVar6;
    *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6 + CARRY1(bVar5,bVar6);
    *pbVar45 = *pbVar45 + bVar6;
    *(byte *)puVar46 = (byte)*puVar46 + bVar22;
    bVar5 = (byte)((uint)pbVar45 >> 8);
    *(byte *)puVar40 = *(byte *)puVar40 + bVar6 + CARRY1((byte)pbVar45,bVar5);
    piVar16 = (int *)CONCAT31(uVar18,bVar6);
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar45 >> 0x10),
                               CONCAT11(bVar5 + bVar29,(byte)pbVar45 + bVar5));
    puVar48 = (uint *)CONCAT22(uVar23,CONCAT11(bVar25 + *(char *)(CONCAT31((int3)(CONCAT22(uVar23,
                                                  CONCAT11(bVar25,bVar37)) >> 8),bVar22) + 0x76),
                                               bVar22));
    puStack_70._0_2_ = (ushort)puStack_7c;
code_r0x00404fa4:
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pcVar11 = (char *)(CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '(') ^ *puVar40);
    cVar28 = (char)puVar40;
    *pbVar45 = *pbVar45 + cVar28;
    uVar24 = (undefined2)((uint)puVar48 >> 0x10);
    cVar31 = (char)puVar48;
    cVar38 = (char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + 0x75);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar8 = (char)pcVar11 + 'o';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar8);
    *pcVar11 = *pcVar11 + cVar8;
    cVar36 = (char)((uint)puVar40 >> 8);
    *pbVar44 = *pbVar44 - cVar36;
    pbVar45[1] = pbVar45[1] + cVar28;
    pcVar11 = pcVar11 + -0x757b021b;
    cVar8 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar8;
    uVar18 = (undefined3)((uint)pcVar11 >> 8);
    cVar7 = cVar8 + 'o';
    pcVar11 = (char *)CONCAT31(uVar18,cVar7);
    pbVar47 = pbVar45 + 2;
    *pcVar11 = *pcVar11 + cVar7;
    iVar15 = CONCAT22(uVar24,CONCAT11(cVar38 + *(char *)(CONCAT22(uVar24,CONCAT11(cVar38,cVar31)) +
                                                        0x76),cVar31));
    *pcVar11 = *pcVar11 + cVar7;
    pcVar11 = (char *)CONCAT31(uVar18,cVar8 + -0x22);
    puVar20 = (uint *)((int)puVar32 + (uint)bVar50 * -2 + 1);
    pbVar34 = (byte *)((int)puVar46 + (uint)bVar50 * -2 + 1);
    *(byte *)puVar32 = (byte)*puVar46;
    *pcVar11 = *pcVar11 + cVar8 + -0x22;
    *(byte *)((int)puVar40 + (int)pcVar11) =
         *(byte *)((int)puVar40 + (int)pcVar11) - (char)((uint)pbVar47 >> 8);
    *pbVar47 = *pbVar47 + cVar28;
    bVar6 = cVar36 - pbVar45[4];
    pbVar33 = pbVar34 + (uint)bVar50 * -8 + 4;
    out(*(undefined4 *)pbVar34,(short)pbVar47);
    puVar32 = (uint *)((uint)(pcVar11 + *(int *)(pcVar11 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar32 = (byte)*puVar32 << 1 | (char)(byte)*puVar32 < '\0';
    *pbVar33 = *pbVar33 + (char)puVar32;
    pbVar33 = pbVar33 + *(int *)(pbVar45 + -0x5c);
    pbVar45 = (byte *)((uint)puVar32 | *puVar32);
    *pbVar33 = *pbVar33 + (char)pbVar45;
    puVar48 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar31 - (char)pbVar47);
    bVar5 = *pbVar45;
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),CONCAT11(bVar6 + *pbVar45,cVar28));
    iVar15 = *(int *)pbVar45;
    *pbVar47 = *pbVar47 + cVar28;
    cVar8 = (char)(pbVar45 + (uint)CARRY1(bVar6,bVar5) + iVar15) + 'r';
    puVar32 = (uint *)CONCAT31((int3)((uint)(pbVar45 + (uint)CARRY1(bVar6,bVar5) + iVar15) >> 8),
                               cVar8);
    pbVar45 = (byte *)CONCAT22((short)((uint)pbVar47 >> 0x10),CONCAT11(10,(char)pbVar47));
    *(char *)(puVar32 + 10) = (char)puVar32[10] + '\n';
    *pbVar33 = *pbVar33 + cVar8;
    puVar46 = (uint *)(pbVar33 + *(int *)(pbVar45 + -0x5e));
    uVar35 = *puVar32;
    cVar8 = (char)((uint)puVar32 | uVar35);
    *(byte *)puVar46 = (byte)*puVar46 + cVar8;
    uVar18 = (undefined3)(((uint)puVar32 | uVar35) >> 8);
    cVar7 = cVar8 + (byte)*puVar48;
    puVar32 = (uint *)CONCAT31(uVar18,cVar7);
    if (SCARRY1(cVar8,(byte)*puVar48) == cVar7 < '\0') goto code_r0x00405090;
    *(byte *)puVar32 = (byte)*puVar32 + cVar7;
    piVar16 = (int *)CONCAT31(uVar18,cVar7 + '\x02');
    puVar32 = puVar20;
  }
  else {
    out(2,(char)piVar16);
    if ((POPCOUNT(*pbVar45) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar18 = (undefined3)((uint)piVar16 >> 8);
  cVar8 = (char)piVar16 + '}';
  pbVar47 = (byte *)CONCAT31(uVar18,cVar8);
  pbVar45[(int)pbVar47] = pbVar45[(int)pbVar47] + cVar8;
  pbVar45[0x280a0000] = pbVar45[0x280a0000] - (char)((uint)piVar16 >> 8);
  bVar5 = (byte)puVar40 & 7;
  *pbVar47 = *pbVar47 << bVar5 | *pbVar47 >> 8 - bVar5;
  *(byte *)puVar46 = (byte)*puVar46 + cVar8;
  cVar28 = (char)puVar48 - (byte)*puVar46;
  uVar24 = (undefined2)((uint)puVar48 >> 0x10);
  cVar36 = (char)((uint)puVar48 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar48 >> 8),cVar28) + 0x7c);
  pcVar11 = (char *)CONCAT22(uVar24,CONCAT11(cVar36,cVar28));
  *pbVar47 = *pbVar47 + cVar8;
  bVar6 = (char)piVar16 + 0xa7U & *pbVar45;
  puVar20 = (uint *)((int)puVar32 + *(int *)(pbVar44 + 0x7c));
  *(char *)CONCAT31(uVar18,bVar6) = *(char *)CONCAT31(uVar18,bVar6) + bVar6;
  bVar6 = bVar6 + 0x2a;
  pbVar47 = (byte *)CONCAT31(uVar18,bVar6);
  *pbVar47 = *pbVar47 + bVar6;
  *pcVar11 = *pcVar11 + cVar28;
  *pbVar45 = *pbVar45 ^ bVar6;
  *pcVar11 = *pcVar11 + bVar6;
  bVar5 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar6;
  cVar8 = (bVar6 - *pbVar47) - CARRY1(bVar5,bVar6);
  *(byte *)puVar40 = (byte)*puVar40 + (byte)pbVar45;
  cVar36 = cVar36 + pcVar11[0x7b];
  *(char *)CONCAT31(uVar18,cVar8) = *(char *)CONCAT31(uVar18,cVar8) + cVar8;
  pcVar11 = (char *)CONCAT31(uVar18,cVar8 + 'o');
  *pcVar11 = *pcVar11 + cVar8 + 'o';
  pcVar11 = pcVar11 + 0x2ed7fde6;
  cVar7 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar7;
  cVar8 = *(char *)(CONCAT22(uVar24,CONCAT11(cVar36,cVar28)) + 0x7b);
  *pcVar11 = *pcVar11 + cVar7;
  piVar16 = (int *)(CONCAT31((int3)((uint)pcVar11 >> 8),cVar7 + 'o') + 0x6f060000);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar19 = (undefined3)((uint)pbVar45 >> 8);
  bVar6 = (byte)pbVar45 | (byte)*puVar46;
  pbVar34 = (byte *)CONCAT31(uVar19,bVar6);
  uVar35 = CONCAT22(uVar24,CONCAT11(cVar36 + cVar8,cVar28)) | (uint)puVar46;
  uVar18 = (undefined3)((uint)piVar16 >> 8);
  bVar5 = (byte)piVar16 | *pbVar34;
  pbVar47 = (byte *)CONCAT31(uVar18,bVar5);
  cVar8 = (byte)puVar40 - bVar6;
  puVar40 = (uint *)CONCAT31((int3)((uint)puVar40 >> 8),cVar8);
  *pbVar47 = *pbVar47 + bVar5;
  puVar32 = puVar46 + (uint)bVar50 * -2 + 1;
  out(*puVar46,(short)pbVar34);
  *pbVar47 = bVar5;
  *pbVar34 = *pbVar34 + cVar8;
  puVar46 = puVar32 + (uint)bVar50 * -2 + 1;
  out(*puVar32,(short)pbVar34);
  *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
  puVar48 = (uint *)(CONCAT31((int3)(uVar35 >> 8),(char)uVar35 - (char)((uint)pbVar45 >> 8)) |
                    (uint)puVar46);
  pbVar45 = (byte *)CONCAT31(uVar19,(bVar6 | (byte)*puVar46) + (byte)*puVar20);
  cVar8 = bVar5 - (byte)*puVar20;
  puVar32 = (uint *)CONCAT31(uVar18,cVar8 - *(char *)CONCAT31(uVar18,cVar8));
code_r0x00405090:
  *puVar32 = (uint)(pbVar45 + *puVar32);
  cVar8 = (char)puVar32;
  *(byte *)puVar32 = (byte)*puVar32 + cVar8;
  *(byte *)puVar32 = (byte)*puVar32 + cVar8;
  *(byte *)puVar32 = (byte)*puVar32 + cVar8;
  *puVar40 = *puVar40 - (int)pbVar44;
  uVar35 = *puVar46;
  bVar5 = (byte)pbVar45;
  *(byte *)puVar46 = (byte)*puVar46 + bVar5;
  *(byte *)puVar32 = (byte)*puVar32 + cVar8 + CARRY1((byte)uVar35,bVar5);
  *(byte *)puVar40 = (byte)*puVar40 + cVar8;
  uVar35 = *puVar48;
  *(byte *)puVar48 = (byte)*puVar48 + 0x72;
  *(byte *)puVar48 = (byte)*puVar48;
  cVar8 = (char)((uint)pbVar45 >> 8);
  if (SCARRY1((byte)uVar35,'r')) {
    puVar46 = (uint *)((int)puVar46 + *(int *)(pbVar45 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar46 = (byte)*puVar46 + (char)puVar32;
      uVar18 = (undefined3)((uint)puVar32 >> 8);
      cVar7 = (char)puVar32 + (byte)*puVar48;
      pcVar11 = (char *)CONCAT31(uVar18,cVar7);
      puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                 CONCAT11((char)((uint)puVar48 >> 8) +
                                          *(byte *)((int)puVar48 + 0x7b),(char)puVar48));
      *pcVar11 = *pcVar11 + cVar7;
      in_AF = 9 < (cVar7 + 0x6fU & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar18,cVar7 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar37 = (byte)uVar35;
      piVar16 = (int *)CONCAT22((short)(uVar35 >> 0x10),
                                CONCAT11((char)((uint)puVar32 >> 8) + in_AF,bVar37));
      *piVar16 = *piVar16 + (int)piVar16;
      uVar18 = (undefined3)((uint)piVar16 >> 8);
      bVar37 = bVar37 | *(byte *)(piVar16 + 0x354a);
      bVar37 = bVar37 - *(char *)CONCAT31(uVar18,bVar37);
      pbVar47 = (byte *)CONCAT31(uVar18,bVar37);
      bVar6 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar37;
      puVar46 = (uint *)((int)puVar46 + (-(uint)CARRY1(bVar6,bVar37) - *(int *)pbVar47));
      puVar32 = (uint *)(pbVar47 + 0xfc00);
      *pbVar45 = *pbVar45 + cVar8;
      uVar35 = *puVar32;
      bVar6 = (byte)puVar32;
      *(byte *)puVar32 = (byte)*puVar32 + bVar6;
      uVar13 = (uint)CARRY1((byte)uVar35,bVar6);
      uVar1 = *puVar48;
      uVar35 = *puVar48;
      *puVar48 = (uint)((byte *)(uVar35 + (int)puVar32) + uVar13);
      if (!CARRY4(uVar1,(uint)puVar32) && !CARRY4(uVar35 + (int)puVar32,uVar13)) break;
      *(byte *)puVar32 = (byte)*puVar32 + bVar6;
    }
  }
  uVar35 = (uint)puVar32 | *puVar32;
  uVar24 = SUB42(pbVar45,0);
  *(byte *)puVar46 = (byte)*puVar46 + (char)uVar35;
  piVar16 = (int *)(uVar35 + 0xc1872);
  if (SCARRY4(uVar35,0xc1872)) {
    cVar7 = (char)piVar16;
    *(char *)piVar16 = *(char *)piVar16 + cVar7;
    *pbVar45 = *pbVar45 + cVar7;
    *(char *)piVar16 = *(char *)piVar16 + cVar7;
    *(byte *)puVar48 = (byte)*puVar48 + (char)puVar40;
    *(char *)piVar16 = *(char *)piVar16 + cVar7;
    *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) + bVar5;
    puVar32 = puVar46;
    goto code_r0x00405117;
  }
  do {
    uVar35 = *puVar46;
    bVar5 = (byte)piVar16;
    *(byte *)puVar46 = (byte)*puVar46 + bVar5;
    if (CARRY1((byte)uVar35,bVar5)) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      uVar18 = (undefined3)((uint)puVar40 >> 8);
      bVar6 = (byte)puVar40 | bRam396f1609;
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      puVar40 = (uint *)CONCAT31(uVar18,bVar6 | *(byte *)CONCAT31(uVar18,bVar6));
      uVar18 = (undefined3)((uint)piVar16 >> 8);
      bVar5 = bVar5 | *pbVar45;
      pcVar11 = (char *)CONCAT31(uVar18,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        puVar26 = puVar46 + (uint)bVar50 * -2 + 1;
        out(*puVar46,uVar24);
        uVar35 = CONCAT22((short)((uint)piVar16 >> 0x10),(ushort)bVar5);
        *(byte *)puVar26 = (byte)*puVar26 + bVar5;
        pcVar11 = (char *)(uVar35 | 8);
        cVar7 = (char)((uint)puVar48 >> 8) + *(byte *)((int)puVar48 + 0x7a);
        puVar32 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),CONCAT11(cVar7,(char)puVar48));
        *pcVar11 = *pcVar11 + (char)pcVar11;
        cVar8 = (char)pcVar11 + 'o';
        piVar16 = (int *)CONCAT31((int3)(uVar35 >> 8),cVar8);
        *(char *)piVar16 = (char)*piVar16 + cVar8;
        *(byte *)puVar40 = (byte)*puVar40 + 1;
        puVar48 = puVar26 + (uint)bVar50 * -2 + 1;
        out(*puVar26,uVar24);
        pbVar45 = (byte *)((uint)pbVar45 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar16 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar7;
        do {
          bVar5 = (byte)iVar15;
          *(byte *)puVar48 = (byte)*puVar48 + bVar5;
          bVar49 = CARRY1(bVar5,(byte)*puVar32);
          uVar18 = (undefined3)((uint)iVar15 >> 8);
          cVar8 = bVar5 + (byte)*puVar32;
          pbVar47 = (byte *)CONCAT31(uVar18,cVar8);
          uVar9 = in_DS;
          uVar4 = uStack_bc;
          if (SCARRY1(bVar5,(byte)*puVar32) == cVar8 < '\0') goto GenerateStatusText;
          *pbVar47 = *pbVar47 + cVar8;
          uVar35 = CONCAT31(uVar18,cVar8 + '\'') + 0x1ebd9f3;
          uStack_c0 = (undefined1)(ushort)puStack_70;
          uStack_bf = (undefined1)((ushort)puStack_70 >> 8);
          piVar16 = (int *)(uVar35 ^ 0x73060000);
          puVar40 = (uint *)((int)puVar40 + 1);
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                     CONCAT11((byte)((uint)puVar32 >> 8) | pbVar44[0x7e],
                                              (char)puVar32));
          cVar8 = (char)uVar35;
          *(char *)piVar16 = (char)*piVar16 + cVar8;
          uVar35 = CONCAT31((int3)((uint)piVar16 >> 8),cVar8 + '\x02');
          bVar49 = 0xd9f2d2da < uVar35;
          iVar15 = uVar35 + 0x260d2d25;
          pbVar34 = pbVar44;
          do {
            uVar18 = (undefined3)((uint)iVar15 >> 8);
            bVar6 = (char)iVar15 + -2 + bVar49;
            pbVar47 = (byte *)CONCAT31(uVar18,bVar6);
            bVar5 = *pbVar47;
            *pbVar47 = *pbVar47 + bVar6;
            bVar37 = (byte)puVar32;
            uStack_bc = (ushort)puStack_70;
            if (CARRY1(bVar5,bVar6)) {
              *pbVar47 = *pbVar47 + bVar6;
              puVar32 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),
                                         CONCAT11((byte)((uint)puVar32 >> 8) | pbVar34[0x7f],bVar37)
                                        );
              *pbVar47 = *pbVar47 + bVar6;
              pbVar47 = (byte *)CONCAT31(uVar18,bVar6 + 0x2a);
              *pbVar47 = *pbVar47 + bVar6 + 0x2a;
              *(byte *)puVar32 = (byte)*puVar32 + (char)pbVar45;
              uVar9 = in_DS;
              while( true ) {
                in_DS = uVar9;
                bVar6 = (byte)pbVar47;
                *pbVar45 = *pbVar45 ^ bVar6;
                *pbVar45 = *pbVar45 + (char)puVar32;
                *pbVar47 = *pbVar47 + bVar6;
                *(byte *)puVar32 = (byte)*puVar32 + (char)((uint)pbVar45 >> 8);
                bVar5 = *pbVar47;
                *pbVar47 = *pbVar47 + bVar6;
                uVar35 = *puVar32;
                uVar1 = *puVar32;
                *puVar32 = (uint)(pbVar47 + uVar1 + CARRY1(bVar5,bVar6));
                uVar18 = (undefined3)((uint)pbVar47 >> 8);
                if (CARRY4(uVar35,(uint)pbVar47) ||
                    CARRY4((uint)(pbVar47 + uVar1),(uint)CARRY1(bVar5,bVar6))) break;
                *(byte *)puVar48 = (byte)*puVar48 + bVar6;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                           CONCAT11((char)((uint)puVar40 >> 8) + *pbVar47,
                                                    (char)puVar40));
                *(byte *)puVar48 = (byte)*puVar48 + bVar6;
                piVar16 = (int *)CONCAT31(uVar18,bVar6 | (byte)*puVar32);
                puVar40 = puVar48;
                while( true ) {
                  puVar48 = puVar40 + (uint)bVar50 * -2 + 1;
                  out(*puVar40,(short)pbVar45);
                  pbVar45 = pbVar45 + 1;
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  bVar37 = (byte)((uint)pcVar11 >> 8) | *pbVar45;
                  uVar18 = (undefined3)((uint)piVar16 >> 8);
                  bVar6 = (byte)piVar16 ^ *pbVar45;
                  pcVar10 = (char *)CONCAT31(uVar18,bVar6);
                  cRam282b0000 = cRam282b0000 - bVar37;
                  *pcVar10 = *pcVar10 + bVar6;
                  pbVar44 = pbVar34 + -*(int *)pbVar45;
                  uStack_c0 = (undefined1)in_DS;
                  uStack_bf = (undefined1)(in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar20 + 0x17);
                  *pcVar10 = *pcVar10 + bVar6;
                  puVar40 = (uint *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                             CONCAT11(bVar37 + bVar5 | *pbVar45,(char)pcVar11));
                  *(byte *)puVar32 = (byte)*puVar32 + (char)puVar32;
                  *(byte *)((int)pcVar10 * 2) = *(byte *)((int)pcVar10 * 2) ^ bVar6;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  bVar6 = bVar6 + in_AF * -6;
                  pbVar47 = (byte *)CONCAT31(uVar18,bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
                  *(char *)((int)pbVar47 * 2) =
                       *(char *)((int)pbVar47 * 2) + (char)((uint)pbVar45 >> 8);
                  bVar49 = CARRY1((byte)*puVar40,(byte)pbVar45);
                  *(byte *)puVar40 = (byte)*puVar40 + (byte)pbVar45;
                  uVar9 = in_DS;
                  uVar4 = (ushort)puStack_70;
GenerateStatusText:
                  in_DS = uVar4;
                  pbVar34 = pbVar44;
                  uStack_bc = in_DS;
                  if (!bVar49) break;
                  *pbVar47 = *pbVar47 + (char)pbVar47;
                  iVar15 = CONCAT31((int3)((uint)puVar40 >> 8),(byte)puVar40 | *pbVar45);
                  uVar24 = (undefined2)((uint)puVar32 >> 0x10);
                  cVar28 = (char)((uint)puVar32 >> 8) + *(byte *)((int)puVar32 + 0x7d);
                  *pbVar47 = *pbVar47 + (char)pbVar47;
                  *(byte *)puVar20 = (byte)*puVar20 - (char)((uint)puVar40 >> 8);
                  iVar15 = iVar15 - *(int *)(&uRam0b0a0000 + iVar15);
                  cVar8 = *(char *)(CONCAT22(uVar24,CONCAT11(cVar28,(char)puVar32)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar48,(short)pbVar45);
                  pbVar45 = (byte *)CONCAT22(uStack_be,CONCAT11(uStack_bf,uStack_c0));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar40 = puVar48 + (uint)bVar50 * -2 + 1 + (uint)bVar50 * -2 + 1;
                  out(puVar48[(uint)bVar50 * -2 + 1],CONCAT11(uStack_bf,uStack_c0));
                  pbVar34 = pbVar44 + 1;
                  cVar7 = (char)iVar15;
                  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                             CONCAT11((byte)((uint)iVar15 >> 8) |
                                                      *(byte *)((int)puVar20 + 0x46),cVar7));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_70._0_2_ = CONCAT11(uStack_bf,uStack_c0);
                  uVar18 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar40,0xf0)) >> 8);
                  piVar16 = (int *)CONCAT31(uVar18,0x5f);
                  puVar20 = (uint *)((int)puVar20 + 1);
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  puVar32 = (uint *)CONCAT22(uVar24,CONCAT11(cVar28 + cVar8 | (byte)puVar40[-0x20],
                                                             (char)puVar32));
                  *(char *)piVar16 = (char)*piVar16 + '_';
                  puVar48 = (uint *)CONCAT31(uVar18,0x8c);
                  puVar40[(int)puVar20 * 2] = (uint)(pbVar45 + puVar40[(int)puVar20 * 2]);
                  uVar35 = *puVar40;
                  *(byte *)puVar40 = (byte)*puVar40 + 0x8c;
                  if ((byte)uVar35 < 0x74) {
                    *pbVar45 = *pbVar45 + cVar7;
                    *(byte *)puVar32 = (byte)*puVar32 >> 1;
                    *(char *)puVar48 = (char)*puVar48 + -0x74;
                    *puVar48 = (uint)(pbVar34 + *puVar48);
                    *puVar48 = *puVar48 << 1 | (uint)((int)*puVar48 < 0);
                    *pbVar45 = *pbVar45 + cVar7;
                    pbVar44[2] = pbVar44[2] - cVar7;
                    *pbVar45 = *pbVar45 + cVar7;
                    pbVar47 = (byte *)CONCAT31(uVar18,0x83);
                    puVar48 = puVar32;
                    goto code_r0x00405312;
                  }
                  *puVar48 = (uint)(*puVar48 + (int)puVar48);
                  piVar16 = (int *)(CONCAT31(uVar18,(byte)puVar48[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar48[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar16 = (int *)((int)piVar16 + *puVar40);
                }
              }
              *pbVar45 = *pbVar45 + bVar6;
              *(byte *)puVar32 = (byte)*puVar32 - (char)pbVar45;
              *pbVar47 = *pbVar47 + bVar6;
              pbVar47 = (byte *)CONCAT31(uVar18,bVar6 | (byte)*puVar32);
            }
            else {
              cVar8 = (char)puVar40;
              *pbVar45 = *pbVar45 + cVar8;
              *(byte **)pbVar47 = pbVar45 + *(int *)pbVar47;
              *pbVar47 = *pbVar47 + bVar6;
              bVar6 = bVar6 + *pbVar47;
              pbVar47 = (byte *)CONCAT31(uVar18,bVar6);
              if (-1 < (char)bVar6) {
                *(byte *)puVar32 = (byte)*puVar32 + bVar37;
                out(*puVar48,(short)pbVar45);
                pbVar45 = pbVar45 + 1;
                *pbVar47 = *pbVar47 + bVar6;
                puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),
                                           bVar37 | (byte)((uint)iVar15 >> 8));
                cVar7 = bVar6 - (byte)*puVar40;
                pcVar11 = (char *)CONCAT31(uVar18,cVar7);
                *pcVar11 = *pcVar11 + cVar7 + (bVar6 < (byte)*puVar40);
                *pbVar45 = *pbVar45 + cVar7;
                pcVar11 = (char *)((int)pcVar11 * 2 + 0x79);
                *pcVar11 = *pcVar11 + (char)((uint)pbVar45 >> 8);
                pbVar47 = (byte *)in((short)pbVar45);
                puVar48 = puVar48 + (uint)bVar50 * -2 + 1;
              }
              *(byte *)puVar48 = (byte)*puVar48 + cVar8;
              *pbVar47 = *pbVar47 + (char)pbVar47;
              *pbVar47 = *pbVar47 + (char)pbVar47;
              uStack_c0 = (undefined1)in_DS;
              uStack_bf = (undefined1)(in_DS >> 8);
              bVar5 = *pbVar47;
              bVar29 = (byte)((uint)puVar40 >> 8);
              bVar37 = bVar29 + *pbVar47;
              iVar15 = *(int *)pbVar47;
              *pbVar45 = *pbVar45 + cVar8;
              bVar6 = (char)(pbVar47 + (uint)CARRY1(bVar29,bVar5) + iVar15) - (byte)*puVar32;
              pbVar47 = (byte *)CONCAT31((int3)((uint)(pbVar47 + (uint)CARRY1(bVar29,bVar5) + iVar15
                                                      ) >> 8),bVar6);
              *(byte *)puVar32 = (byte)*puVar32 ^ bVar6;
              *pbVar34 = *pbVar34 + (char)puVar32;
              *pbVar47 = *pbVar47 + bVar6;
              *pbVar47 = *pbVar47 + bVar6;
              *pbVar47 = *pbVar47 + bVar6;
              puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                                         CONCAT11(bVar37 + *pbVar47,cVar8));
              pbVar47 = pbVar47 + (uint)CARRY1(bVar37,*pbVar47) + *(int *)pbVar47;
              *pbVar45 = *pbVar45 + cVar8;
              puVar48 = (uint *)((int)puVar48 + *(int *)(pbVar45 + 0x3e));
            }
            *(byte *)puVar48 = (byte)*puVar48 + (char)pbVar47;
            cVar8 = (char)pbVar47 + 'r';
            puVar48 = (uint *)((int)puVar48 + -1);
            uVar35 = CONCAT31((int3)((uint)pbVar47 >> 8),cVar8);
            *(byte *)puVar48 = *(byte *)puVar48 + cVar8;
            bVar49 = 0xfff38f8d < uVar35;
            iVar15 = uVar35 + 0xc7072;
            pbVar44 = pbVar34;
          } while (SCARRY4(uVar35,0xc7072));
        } while( true );
      }
      *pcVar11 = *pcVar11 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar47 = (byte *)CONCAT31(uVar18,bVar5);
      bVar6 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar5;
      uVar18 = (undefined3)
               ((uint)(pbVar47 + (uint)CARRY1(bVar6,bVar5) + *(int *)((int)puVar40 + (int)pbVar45))
               >> 8);
      cVar7 = (char)(pbVar47 + (uint)CARRY1(bVar6,bVar5) + *(int *)((int)puVar40 + (int)pbVar45)) +
              'E';
      pcVar11 = (char *)CONCAT31(uVar18,cVar7);
      *pcVar11 = *pcVar11 + cVar7;
      cVar7 = cVar7 + *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar18,cVar7);
      *pcVar11 = *pcVar11 + cVar7;
      puVar32 = (uint *)CONCAT31(uVar18,cVar7 + *pcVar11);
      *(char *)puVar32 = (char)*puVar32 + cVar7 + *pcVar11;
      pbVar47 = (byte *)((uint)puVar32 | *puVar32);
      bVar5 = *pbVar47;
      bVar6 = (byte)pbVar47;
      *pbVar47 = *pbVar47 + bVar6;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar47 >> 8),bVar6 + CARRY1(bVar5,bVar6));
      puVar32 = puVar46;
code_r0x00405117:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      puVar48 = (uint *)((int)puVar48 - *puVar48);
      puVar46 = puVar32 + (uint)bVar50 * -2 + 1;
      out(*puVar32,uVar24);
    }
    *pbVar45 = *pbVar45 + (char)puVar40;
    bVar49 = puVar48 < (uint *)*piVar16;
    puVar48 = (uint *)((int)puVar48 - *piVar16);
    bVar5 = (byte)((uint)puVar40 >> 8);
    *(byte *)((int)puVar20 + 0x39) = (*(byte *)((int)puVar20 + 0x39) - bVar5) - bVar49;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    uVar35 = *puVar48;
    *(int *)((int)puVar20 + 0x39) = *(int *)((int)puVar20 + 0x39) - (int)pbVar44;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    puVar40 = (uint *)CONCAT22((short)((uint)puVar40 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar35 | (byte)*puVar48,(char)puVar40));
    *(char *)(piVar16 + 10) = (char)piVar16[10] + cVar8;
  } while( true );
code_r0x004052ee:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  bVar5 = (char)piVar16 + 0x28;
  pbVar47 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),bVar5);
  *pbVar47 = *pbVar47 ^ bVar5;
  *(byte *)puVar32 = (byte)*puVar32 + (char)((uint)pcVar11 >> 8);
  bVar5 = *pbVar45;
  *pbVar45 = *pbVar45 + (byte)pcVar11;
  piVar16 = (int *)(((uint)pbVar47 | 0x1496f09) + *puVar20 + (uint)CARRY1(bVar5,(byte)pcVar11));
  puVar46 = puVar40 + (uint)bVar50 * -2 + 1;
  out(*puVar40,(short)pbVar45);
  pbVar44 = pbVar45 + -1;
  *piVar16 = *piVar16 + (int)piVar16;
  pbVar45 = (byte *)CONCAT31((int3)((uint)pbVar44 >> 8),(byte)pbVar44 | (byte)*puVar32);
  cVar8 = (char)piVar16 + '\x13';
  pbVar47 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),cVar8);
  puVar48 = puVar32;
  puVar40 = puVar46;
  if ((POPCOUNT(cVar8) & 1U) != 0) {
    *pbVar45 = *pbVar45 - (char)((uint)pbVar44 >> 8);
    *pbVar47 = *pbVar47 + cVar8;
code_r0x00405396:
    bVar5 = *pbVar47;
    bVar6 = (byte)pbVar47;
    *pbVar47 = *pbVar47 + bVar6;
    *puVar46 = (uint)(pbVar47 + (uint)CARRY1(bVar5,bVar6) + *puVar46);
    out(*puVar46,(short)pbVar45);
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar47 >> 0x10),
                               CONCAT11((byte)((uint)pbVar47 >> 8) |
                                        (byte)puVar46[(uint)bVar50 * -2 + 1],bVar6));
    *(char **)((int)puVar20 + -1) = pcVar11 + *(int *)((int)puVar20 + -1);
    out(puVar46[(uint)bVar50 * -2 + 1],(short)pbVar45);
    *pcVar11 = *pcVar11 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar47 = *pbVar47 + (char)pbVar47;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar47 >> 8),(char)pbVar47 + 'o');
  puVar32 = (uint *)((int)puVar48 + -1);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar18 = (undefined3)((uint)pbVar45 >> 8);
  piVar16 = (int *)((int)piVar16 + 0x1b7e);
  bVar37 = (byte)pbVar45 | *(byte *)puVar32 | *(byte *)puVar32;
  iRam04115f2c = iRam04115f2c + (int)piVar16;
  out(*puVar40,(short)CONCAT31(uVar18,bVar37));
  *piVar16 = *piVar16 + (int)piVar16;
  bVar37 = bVar37 | (byte)piVar16;
  iVar27 = CONCAT31(uVar18,bVar37);
  pbVar45 = (byte *)((int)piVar16 - *piVar16);
  cVar8 = (char)pbVar45;
  *pcVar11 = *pcVar11 + cVar8;
  cVar7 = (char)pcVar11 - bVar37;
  *pbVar45 = *pbVar45 + cVar8;
  uVar24 = (undefined2)((uint)pcVar11 >> 0x10);
  bVar6 = (byte)((uint)pcVar11 >> 8) | *pbVar45;
  pbVar34 = pbVar34 + -1;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  bVar5 = *(byte *)(CONCAT22(uVar24,CONCAT11(bVar6,cVar7)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar45;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar34;
  *pbVar45 = *pbVar45 + cVar8;
  bVar5 = bVar6 | bVar5 | *(byte *)puVar32;
  iVar21 = CONCAT22(uVar24,CONCAT11(bVar5,cVar7));
  pbVar44 = (byte *)((uint)(puVar40 + (uint)bVar50 * -2 + 1) ^ *(uint *)(iVar27 + -0x43));
  iVar15 = *(int *)pbVar45;
  *(byte **)pbVar45 = pbVar45 + *(int *)pbVar45;
  if (SCARRY4(iVar15,(int)pbVar45)) {
    *pbVar45 = *pbVar45 + cVar8;
  }
  pbVar47 = pbVar45 + 0x5674;
  puVar20 = (uint *)((int)puVar20 +
                    (-(uint)((byte *)0xffffa98b < pbVar45) - *(int *)(pbVar44 + -0x7f)));
  bVar6 = (byte)pbVar47;
  *pbVar47 = *pbVar47 + bVar6;
  uVar19 = (undefined3)((uint)pbVar47 >> 8);
  bVar29 = bVar6 + 0x2d;
  piVar16 = (int *)CONCAT31(uVar19,bVar29);
  *(uint *)(pbVar44 + (int)puVar20 * 8) =
       *(int *)(pbVar44 + (int)puVar20 * 8) + iVar27 + (uint)(0xd2 < bVar6);
  bVar6 = *pbVar44;
  *pbVar44 = *pbVar44 + bVar29;
  if (!CARRY1(bVar6,bVar29)) {
    do {
      pbVar47 = (byte *)(iVar27 + 1);
      bVar6 = (byte)piVar16;
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      bVar37 = (byte)((uint)piVar16 >> 8);
      bVar29 = (byte)puVar32 | bVar37;
      puVar40 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),bVar29);
      out(*(undefined4 *)pbVar44,(short)pbVar47);
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      uVar24 = (undefined2)((uint)iVar21 >> 0x10);
      cVar8 = (char)iVar21;
      pbVar45 = (byte *)CONCAT22(uVar24,CONCAT11((byte)((uint)iVar21 >> 8) | *pbVar47,cVar8));
      bVar5 = *pbVar45;
      *pbVar45 = *pbVar45 + bVar6;
      *(byte *)piVar16 = (char)*piVar16 + bVar6 + CARRY1(bVar5,bVar6);
      *pbVar47 = *pbVar47 + bVar6;
      *(byte *)puVar20 = (byte)*puVar20 + bVar37;
      *(int *)((int)piVar16 * 2) =
           *(int *)((int)piVar16 * 2) + CONCAT22(uVar24,CONCAT11(0x1c,cVar8));
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      cVar7 = (char)pbVar47;
      *(byte *)puVar40 = (byte)*puVar40 + cVar7;
      *(byte *)((int)piVar16 * 2) = *(byte *)((int)piVar16 * 2) ^ bVar6;
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      pbVar45 = pbVar44 + (uint)bVar50 * -8 + 4 + (uint)bVar50 * -8 + 4;
      out(*(undefined4 *)(pbVar44 + (uint)bVar50 * -8 + 4),(short)pbVar47);
      piVar16 = &uRam0a0a0000;
      *pbVar47 = *pbVar47;
      bVar6 = cVar8 - cVar7;
      iVar21 = CONCAT22(uVar24,CONCAT11((byte)puVar20[0x14] | 0x1c | bRam0ca87216,bVar6));
      *pbVar47 = *pbVar47;
      bVar5 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar6;
      if (!CARRY1(bVar5,bVar6)) {
        piVar16 = &uRam1e7b7000;
        bVar5 = (byte)((uint)puVar32 >> 8) | *(byte *)(iVar27 + 3);
        puVar40 = (uint *)CONCAT22((short)((uint)puVar32 >> 0x10),CONCAT11(bVar5,bVar29));
        if (bVar5 != 0) {
          pbVar47 = (byte *)CONCAT31((int3)((uint)pbVar47 >> 8),cVar7 + pbVar45[(int)puVar20 * 8]);
          piVar16 = (int *)0x6d7d7000;
          iVar21 = iVar21 + 1;
        }
      }
      *piVar16 = *piVar16 + (int)piVar16;
      iVar27 = CONCAT31((int3)((uint)pbVar47 >> 8),(byte)pbVar47 | pbVar45[(int)puVar20 * 8]);
      *(char *)piVar16 = (char)*piVar16;
      piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),0xf9);
      *puVar20 = (uint)((int)piVar16 + *puVar20 + 1);
      pbVar44 = pbVar45 + (uint)bVar50 * -8 + 4;
      out(*(undefined4 *)pbVar45,(short)iVar27);
      puVar32 = puVar40;
    } while( true );
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar29 = bVar29 | *(byte *)((int)piVar16 + 0x4000081);
  piVar16 = (int *)CONCAT31(uVar19,bVar29);
  if ('\0' < (char)bVar29) {
    *(byte *)piVar16 = (char)*piVar16 + bVar29;
    puVar40 = (uint *)CONCAT31(uVar19,bVar29 + 0x28);
    *puVar40 = *puVar40 ^ (uint)puVar40;
    *(byte *)puVar32 = *(byte *)puVar32 + bVar5;
    cVar8 = (bVar29 + 0x28) - bVar5;
    pcVar11 = (char *)CONCAT31(uVar19,cVar8);
    *pcVar11 = *pcVar11 + cVar8;
    pbVar45 = (byte *)CONCAT31(uVar18,bVar37 | *(byte *)puVar32);
    pcVar10 = (char *)CONCAT22((short)((uint)puVar32 >> 0x10),
                               CONCAT11((char)((uint)puVar32 >> 8) + *(byte *)((int)puVar48 + 0x7d),
                                        (char)puVar32));
    *pcVar11 = *pcVar11 + cVar8;
    pbVar47 = (byte *)CONCAT31(uVar19,cVar8 + 0x39U ^ *(byte *)CONCAT31(uVar19,cVar8 + 0x39U));
    *pcVar10 = *pcVar10 + bVar5;
    puVar46 = (uint *)(pbVar44 + (uint)bVar50 * -8 + 4);
    out(*(undefined4 *)pbVar44,(short)pbVar45);
    goto code_r0x00405396;
  }
  puVar40 = (uint *)(pbVar44 + (uint)bVar50 * -8 + 4);
  out(*(undefined4 *)pbVar44,(short)iVar27);
  pcVar11 = (char *)(iVar21 + -1);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pbVar45 = (byte *)CONCAT31(uVar18,bVar37 | *(byte *)puVar32);
  goto code_r0x004052ee;
}


