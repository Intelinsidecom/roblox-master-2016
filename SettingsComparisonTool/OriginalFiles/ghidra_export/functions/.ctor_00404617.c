/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404617
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(char * param_1, uint * param_2, char * param_3)
 * Local Vars  : uStack_bb, uStack_bc, uStack_b8, uStack_ba, puStack_78, uStack_7c, pbStack_70, iStack_74, uStack_68, puStack_6c, puStack_60, puStack_64, puStack_58, pbStack_5c, pbStack_50, pbStack_54, pcStack_48, puStack_4c, puStack_40, puStack_44, pcStack_38, iStack_3c, uStack_30, uStack_34, uStack_28, uStack_2c, uStack_20, uStack_24, uStack_18, uStack_1c, uStack_10, puStack_14, pcStack_8, uStack_c, uVar1, uStack_4, uVar3, uVar2, bVar5, bVar4, cVar7, cVar6, in_EAX, uVar8, pcVar10, pbVar9, pcVar12, pbVar11, uVar14, puVar13, iVar16, puVar15, puVar18, piVar17, cVar20, puVar19, uVar22, uVar21, pcVar24, uVar23, iVar26, puVar25, uVar28, bVar27, uVar30, bVar29, pbVar32, puVar31, bVar34, iVar33, cVar36, uVar35, pbVar37, unaff_EBX, puVar39, uVar38, bVar41, cVar40, ppbVar43, cVar42, ppbVar45, puVar44, unaff_ESI, ppbVar46, unaff_EDI, pbVar47, in_ES, puVar48, in_SS, in_CS, bVar49, in_DS, uVar50, in_AF, param_1, param_2, param_3
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
/* WARNING: Removing unreachable block (ram,0x004045f7) */
/* WARNING: Removing unreachable block (ram,0x00404606) */
/* WARNING: Removing unreachable block (ram,0x00404607) */
/* WARNING: Removing unreachable block (ram,0x0040460b) */
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

int __fastcall _ctor(char *param_1,uint *param_2,char *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  char *in_EAX;
  char cVar20;
  undefined2 uVar23;
  undefined3 uVar21;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  ushort *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  uint *puVar19;
  undefined3 uVar22;
  byte bVar27;
  char *pcVar24;
  uint *puVar25;
  undefined2 uVar28;
  int iVar26;
  byte bVar29;
  byte bVar34;
  undefined2 uVar30;
  uint *puVar31;
  byte *pbVar32;
  int iVar33;
  undefined1 uVar35;
  char cVar36;
  char cVar40;
  uint *unaff_EBX;
  byte bVar41;
  byte *pbVar37;
  char cVar42;
  uint uVar38;
  uint *puVar39;
  byte **ppbVar43;
  uint *puVar44;
  byte **ppbVar45;
  byte **ppbVar46;
  byte *unaff_ESI;
  byte *pbVar47;
  uint *unaff_EDI;
  uint *puVar48;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar49;
  byte in_AF;
  undefined8 uVar50;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_7c;
  uint *puStack_78;
  int iStack_74;
  byte *pbStack_70;
  uint *puStack_6c;
  undefined2 uStack_68;
  uint *puStack_64;
  uint *puStack_60;
  byte *pbStack_5c;
  uint *puStack_58;
  byte *pbStack_54;
  byte *pbStack_50;
  uint *puStack_4c;
  char *pcStack_48;
  uint *puStack_44;
  uint *puStack_40;
  int iStack_3c;
  char *pcStack_38;
  undefined2 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined *puStack_14;
  undefined2 uStack_10;
  undefined2 uStack_c;
  char *pcStack_8;
  undefined2 uStack_4;
  
                    /* .NET CLR Managed Code */
  pcVar24 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((char)((uint)param_1 >> 8) + *in_EAX,(char)param_1));
  *in_EAX = *in_EAX;
  uVar23 = (undefined2)((uint)in_EAX >> 0x10);
  bVar4 = (byte)in_EAX;
  cVar20 = (char)((uint)in_EAX >> 8) - unaff_ESI[2];
  pcVar12 = (char *)CONCAT22(uVar23,CONCAT11(cVar20,bVar4));
  *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)param_2;
  *pcVar12 = *pcVar12 + bVar4;
  uVar21 = (undefined3)((uint)pcVar12 >> 8);
  bVar4 = bVar4 | (byte)*unaff_EBX;
  cVar7 = (char)unaff_EBX;
  bVar4 = bVar4 | *(byte *)CONCAT31(uVar21,bVar4);
  *unaff_ESI = *unaff_ESI + bVar4;
  bVar5 = bVar4 + (byte)*unaff_EBX;
  pcVar12 = (char *)CONCAT31(uVar21,bVar5);
  if (SCARRY1(bVar4,(byte)*unaff_EBX) == (char)bVar5 < '\0') {
    bVar4 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar5;
    if (CARRY1(bVar4,bVar5)) goto code_r0x004046a4;
code_r0x00404710:
    pbVar9 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    pcStack_8 = pcVar24;
    *pcVar12 = *pcVar12 + (byte)pcVar12;
    uStack_c = in_ES;
    uStack_10 = in_SS;
    *pcVar24 = *pcVar24 + '\x01';
    puStack_14 = (undefined *)CONCAT22(puStack_14._2_2_,in_SS);
    *pcVar24 = *pcVar24 + '\x01';
    bVar4 = (byte)pcVar12 | (byte)*param_2;
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar4);
    unaff_ESI = unaff_ESI + 8;
    out(*(undefined4 *)pbVar9,(short)param_2);
    puVar48 = (uint *)((int)unaff_EDI + -1);
    *pcVar12 = *pcVar12 + bVar4;
    uStack_18 = in_ES;
    pbVar9 = (byte *)((int)((uint)pcVar12 | *puVar48) + *(int *)((uint)pcVar12 | *puVar48));
    *pbVar9 = *pbVar9 + (char)pbVar9;
    puVar44 = unaff_EBX;
  }
  else {
    *pcVar12 = *pcVar12 + bVar5;
    cVar6 = bVar5 + 0x2a;
    pcStack_8 = (char *)CONCAT22(pcStack_8._2_2_,in_DS);
    *(char *)CONCAT31(uVar21,cVar6) = *(char *)CONCAT31(uVar21,cVar6) + cVar6;
    pcVar12 = (char *)CONCAT22(uVar23,CONCAT11(cVar20 - unaff_ESI[3],cVar6));
    cVar40 = (char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[0x1b];
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar40,cVar7));
    *pcVar12 = *pcVar12 + cVar6;
    *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar5 + 0x2e;
    in_CS = 0x2a06;
    puStack_14 = &UNK_0040465a;
    uVar50 = func_0x0000b828();
    param_2 = (uint *)((ulonglong)uVar50 >> 0x20);
    pbVar9 = (byte *)uVar50;
    bVar4 = *pbVar9;
    bVar5 = (byte)uVar50;
    *pbVar9 = *pbVar9 + bVar5;
    pbVar47 = unaff_ESI + (uint)CARRY1(bVar4,bVar5) + *(int *)pbVar9;
    uVar21 = (undefined3)((ulonglong)uVar50 >> 8);
    *pbVar9 = *pbVar9 + bVar5;
    cVar6 = (char)((uint)param_3 >> 8);
    *param_3 = *param_3 + cVar6;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar5;
    *param_2 = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar5) + *param_2);
    bVar5 = bVar5 | *pbVar47;
    pcVar12 = (char *)CONCAT31(uVar21,bVar5);
    *pcVar12 = *pcVar12 + bVar5;
    cVar20 = bVar5 + *pcVar12;
    pcVar12 = (char *)CONCAT31(uVar21,cVar20);
    *pcVar12 = *pcVar12 + cVar20;
    *pcVar12 = *pcVar12 + cVar20;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
    *pcVar12 = *pcVar12 + cVar20;
    *pcVar12 = *pcVar12 + cVar6;
    *pcVar12 = *pcVar12 + cVar20;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
    pcVar12 = (char *)(CONCAT31(uVar21,cVar20) ^ 3);
    param_3[0x73060000] = param_3[0x73060000] - cVar40;
    pbVar9 = (byte *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = (byte)pcVar12;
    *pcVar12 = *pcVar12 + (byte)pcVar12;
    unaff_ESI = pbVar47 + 1;
    bVar4 = *pbVar47;
    *(char *)CONCAT31(uVar21,bVar4) = *(char *)CONCAT31(uVar21,bVar4) + bVar4;
    uStack_4 = in_ES;
    pcVar12 = (char *)CONCAT31(uVar21,(bVar4 - (byte)*unaff_EBX) + '(');
    unaff_EDI = (uint *)((int)unaff_EDI + 2);
    bVar4 = in((short)((ulonglong)uVar50 >> 0x20));
    *pbVar9 = bVar4;
code_r0x004046a4:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    uStack_18 = in_ES;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    bVar4 = (char)pcVar12 - (byte)*unaff_EBX;
    bVar5 = bVar4 + 0x28;
    pbVar9 = (byte *)CONCAT31(uVar21,bVar5);
    pcVar24 = &cRam14060000;
    puVar44 = unaff_EBX;
    puVar48 = unaff_EDI;
    if (0xd7 < bVar4) {
      *pbVar9 = *pbVar9 + bVar5;
      uStack_4 = in_ES;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((char)((uint)param_2 >> 8) -
                                          *(byte *)((int)param_2 + -0x3a),(char)param_2));
      bVar4 = (bVar5 | *pbVar9) + cRam14060000;
      pcVar12 = (char *)CONCAT31(uVar21,bVar4);
      uVar38 = *param_2;
      *(byte *)param_2 = (byte)*param_2;
      if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
        pcVar24 = &cRam14060000;
        if ((byte)*param_2 == 0 || SCARRY1((byte)uVar38,'\0') != (char)(byte)*param_2 < '\0')
        goto code_r0x0040475f;
        *pcVar12 = *pcVar12 + bVar4;
        piVar17 = (int *)CONCAT31(uVar21,bVar4 + 0x2d);
        *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
             (byte *)((int)param_2 + (uint)(0xd2 < bVar4) + *(int *)(unaff_ESI + (int)unaff_EDI * 8)
                     );
        uStack_34 = in_ES;
        uRam7305fffc = in_CS;
        *piVar17 = *piVar17 + (int)piVar17;
        bVar4 = bVar4 + 0x2d | *(byte *)((int)piVar17 + 0x400006d);
        pcVar12 = (char *)CONCAT31(uVar21,bVar4);
        if ((char)bVar4 < '\x01') goto code_r0x00404777;
        *pcVar12 = *pcVar12 + bVar4;
        pcVar12 = (char *)CONCAT31(uVar21,bVar4 + 0x10);
        *param_2 = (uint)(pcVar12 + *param_2);
      }
      goto code_r0x00404710;
    }
  }
  cVar20 = (char)pbVar9 + *pbVar9;
  puVar25 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar20);
  *(char *)puVar25 = (char)*puVar25 + cVar20;
  *puVar25 = *puVar25 & (uint)puVar25;
  *(char *)puVar25 = (char)*puVar25 + cVar20;
  pbVar47 = (byte *)((int)puVar25 + 1);
  cVar20 = (char)pbVar47;
  *pbVar47 = *pbVar47 + cVar20;
  uVar38 = *puVar44;
  bVar4 = (byte)((uint)pcVar24 >> 8);
  *(byte *)puVar44 = (byte)*puVar44 + bVar4;
  pbVar9 = unaff_ESI;
  if (CARRY1((byte)uVar38,bVar4)) {
    pbVar9 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    puVar48 = (uint *)((int)puVar48 + -1);
  }
  *pbVar47 = *pbVar47 + cVar20;
  uStack_1c = in_ES;
  puVar25 = (uint *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                             CONCAT11(bVar4 + *(byte *)((int)puVar48 + 0x49),(char)pcVar24));
  *pbVar47 = *pbVar47 + cVar20;
  uStack_20 = in_ES;
  *(byte *)(puVar44 + 0x818000) = (byte)puVar44[0x818000] - (char)((uint)puVar44 >> 8);
  out(*(undefined4 *)pbVar9,(short)param_2);
  unaff_EBX = (uint *)((int)puVar44 + -1);
  *pbVar47 = *pbVar47 + cVar20;
  uStack_24 = in_ES;
  pbVar9 = pbVar9 + *(int *)((int)puVar44 + -0x7f) + 4;
  *pbVar47 = *pbVar47 + cVar20;
  do {
    uStack_2c = in_ES;
    cVar20 = (char)pbVar47 - (byte)*param_2;
    pcVar12 = (char *)CONCAT31((int3)((uint)pbVar47 >> 8),cVar20);
    unaff_ESI = pbVar9 + 4;
    out(*(undefined4 *)pbVar9,(short)param_2);
    unaff_EDI = (uint *)((int)puVar48 + -1);
    *pcVar12 = *pcVar12 + cVar20;
    uStack_30 = in_ES;
    pcVar24 = (char *)CONCAT22((short)((uint)puVar25 >> 0x10),
                               CONCAT11((char)((uint)puVar25 >> 8) + (byte)puVar48[0x12],
                                        (char)puVar25));
code_r0x0040475f:
    cVar20 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar20;
    uStack_34 = in_ES;
    *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    pbVar9 = (byte *)((int)unaff_EBX + -1);
    *pcVar12 = *pcVar12 + cVar20;
    pcStack_38 = (char *)CONCAT22(pcStack_38._2_2_,in_ES);
    iStack_3c = CONCAT22(iStack_3c._2_2_,in_ES);
    unaff_ESI = unaff_ESI + *(int *)((int)unaff_EBX + -0x71) + 4;
    *pcVar12 = *pcVar12 + cVar20;
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                 CONCAT11((char)((uint)pbVar9 >> 8) - unaff_ESI[0x6e],(char)pbVar9))
    ;
    puVar48 = unaff_EDI;
code_r0x00404777:
    bVar4 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar4;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    puVar44 = (uint *)(unaff_ESI + (int)puVar48 * 8);
    uVar38 = *puVar44;
    uVar1 = *puVar44;
    *puVar44 = (uint)((byte *)(uVar1 + (int)param_2) + (0xd2 < bVar4));
    puStack_44 = (uint *)CONCAT22(puStack_44._2_2_,in_ES);
    puVar44 = (uint *)0x73060000;
    cVar7 = bVar4 + 0x2e +
            (CARRY4(uVar38,(uint)param_2) || CARRY4(uVar1 + (int)param_2,(uint)(0xd2 < bVar4)));
    *(byte *)param_2 = (byte)*param_2 + (char)pcVar24;
    *unaff_ESI = *unaff_ESI;
    cVar20 = cVar7 + '~';
    pcVar10 = (char *)CONCAT31(uVar21,cVar20);
    out(*unaff_ESI,(short)param_2);
    *pcVar10 = *pcVar10 + cVar20;
    cVar7 = cVar7 + -0x80;
    pcVar10 = (char *)CONCAT31(uVar21,cVar7);
    out(*(undefined4 *)(unaff_ESI + 1),(short)param_2);
    puVar25 = (uint *)(pcVar24 + -1);
    *pcVar10 = *pcVar10 + cVar7;
    pcStack_48 = (char *)CONCAT22(pcStack_48._2_2_,in_ES);
    *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)pcVar12 >> 8);
    *pcVar10 = *pcVar10 + cVar7;
    puStack_4c = (uint *)CONCAT22(puStack_4c._2_2_,in_ES);
    *pcVar10 = *pcVar10 - (char)((uint)puVar25 >> 8);
    *pcVar10 = *pcVar10 + cVar7;
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_ES);
    pbStack_54 = (byte *)CONCAT22(pbStack_54._2_2_,in_ES);
    pbVar9 = unaff_ESI + *(int *)((int)unaff_EBX + 9) + 5;
    *pcVar10 = *pcVar10 + cVar7;
    puStack_58 = (uint *)CONCAT22(puStack_58._2_2_,in_ES);
    cVar20 = (char)param_2;
    cVar6 = (char)((uint)param_2 >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar6,cVar20));
    *pcVar10 = *pcVar10 + cVar7;
    uVar23 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar35 = SUB41(unaff_EBX,0);
    bVar41 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 0x36);
    unaff_EBX = (uint *)CONCAT22(uVar23,CONCAT11(bVar41,uVar35));
    bVar5 = cVar7 + (byte)*unaff_EBX;
    pbVar47 = (byte *)CONCAT31(uVar21,bVar5);
    *(byte *)puVar48 = (byte)*puVar48 - cVar6;
    bVar4 = *pbVar47;
    *pbVar47 = *pbVar47 + bVar5;
    uStack_28 = in_ES;
  } while (!CARRY1(bVar4,bVar5));
  *pbVar47 = *pbVar47 + bVar5;
  bVar5 = bVar5 - *pbVar47;
  pbVar47 = (byte *)CONCAT31(uVar21,bVar5);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar20;
  *(byte *)param_2 = (byte)*param_2 ^ bVar5;
  pcVar24[0x2affffff] = pcVar24[0x2affffff] + bVar5;
  bVar4 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar5;
  *unaff_EBX = (uint)(pbVar47 + (uint)CARRY1(bVar4,bVar5) + *unaff_EBX);
  pbVar11 = pbVar47 + -0x32a1702;
  if (pbVar11 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar11;
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),(char)puVar25 + (byte)*param_2);
    puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,in_ES);
    pbVar47[-0xe0c891b] = pbVar47[-0xe0c891b] + cVar6;
    pbVar11 = pbVar47 + 0x19fd76e3;
    bVar4 = *pbVar11;
    *pbVar11 = *pbVar11 - bVar41;
    piVar17 = (int *)((uint)(pbVar47 + (bVar4 < bVar41) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar17 + 0x73) = *(char *)((int)piVar17 + 0x73) + cVar6;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar5 = bVar41 | *(byte *)((int)param_2 + 2);
    unaff_EBX = (uint *)CONCAT22(uVar23,CONCAT11(bVar5,uVar35));
    cVar20 = (char)piVar17;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar20;
      uVar21 = (undefined3)((uint)(pbVar47 + (bVar4 < bVar41) + 0x63fd76e4) >> 8);
      cVar7 = cVar20 + '\x06';
      if ((POPCOUNT(cVar7) & 1U) == 0) {
        *(char *)CONCAT31(uVar21,cVar7) = *(char *)CONCAT31(uVar21,cVar7) + cVar7;
        pbVar11 = (byte *)CONCAT31(uVar21,cVar20 + '.');
        puVar25 = puVar19;
        uStack_68 = in_SS;
        goto code_r0x00404803;
      }
      cVar20 = cVar7 + (byte)*unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar21,cVar20);
      if (SCARRY1(cVar7,(byte)*unaff_EBX) == cVar20 < '\0') {
code_r0x004048e7:
        pcVar12 = (char *)((uint)pcVar12 | 8);
        in_SS = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(param_2 + 0x1cc18000) = (byte)param_2[0x1cc18000] + cVar20;
code_r0x0040486e:
      pcVar12 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),(byte)piVar17 & (byte)*param_2);
      puVar48 = (uint *)((int)puVar48 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar12 = *pcVar12 + (char)pcVar12;
    pbVar47 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '*');
    puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,in_DS);
    bVar4 = (byte)((uint)puVar19 >> 8);
    cVar20 = (char)puVar19;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar4 + *pbVar47,cVar20));
    pbVar47 = pbVar47 + (uint)CARRY1(bVar4,*pbVar47) + *(int *)pbVar47;
    *(byte *)param_2 = (byte)*param_2 + cVar20;
    bVar49 = (byte)pbVar47 < *pbVar47;
    pbVar47 = (byte *)CONCAT31((int3)((uint)pbVar47 >> 8),(byte)pbVar47 - *pbVar47);
code_r0x00404880:
    pbVar9 = pbVar9 + (uint)bVar49 + *(int *)pbVar47;
    uStack_68 = in_ES;
    while( true ) {
      bVar5 = (byte)pbVar47;
      pbVar47[0x2c000000] = pbVar47[0x2c000000] + bVar5;
      bVar4 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar5;
      *param_2 = (uint)(pbVar47 + (uint)CARRY1(bVar4,bVar5) + *param_2);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)param_2;
      *pbVar47 = *pbVar47 + bVar5;
      puVar25 = (uint *)CONCAT31((int3)((uint)pbVar47 >> 8),bVar5 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar12 = (char *)((uint)puVar25 | *puVar25);
code_r0x00404899:
      cVar20 = (char)pcVar12;
      *pbVar9 = *pbVar9 + cVar20;
      uVar21 = (undefined3)((uint)pcVar12 >> 8);
      bVar4 = cVar20 + (byte)*unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar21,bVar4);
      bVar5 = (byte)((uint)puVar19 >> 8);
      uVar30 = (undefined2)((uint)puVar19 >> 0x10);
      cVar7 = (char)param_2;
      uVar23 = in_ES;
      if (SCARRY1(cVar20,(byte)*unaff_EBX) == (char)bVar4 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar7;
        *pcVar12 = *pcVar12 + bVar4;
        puVar19 = (uint *)CONCAT22(uVar30,CONCAT11(bVar5 | (byte)*param_2,(char)puVar19));
        param_2 = (uint *)((int)param_2 + 1);
        pcVar12 = pcVar12 + *param_2;
        if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar12 = *pcVar12 + bVar4;
      bVar41 = bVar4 + 2;
      pcVar12 = (char *)CONCAT31(uVar21,bVar41);
      if (bVar4 < 0xfe) {
        *pbVar9 = *pbVar9 + bVar41;
        puVar25 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar12 = *pcVar12 + bVar41;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar7));
      cVar20 = *pcVar12;
      *pcVar12 = *pcVar12 + bVar41;
      puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,in_ES);
      if (SCARRY1(cVar20,bVar41) == *pcVar12 < '\0') goto code_r0x00404927;
      *pcVar12 = *pcVar12 + bVar41;
      bVar4 = bVar4 + 4;
      pbVar47 = (byte *)CONCAT31(uVar21,bVar4);
      if (0xfd < bVar41) break;
      *pbVar47 = *pbVar47 + bVar4;
      puVar19 = (uint *)CONCAT22(uVar30,CONCAT11(bVar5 | (byte)*param_2,(char)puVar19));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
      *pbVar9 = *pbVar9 ^ bVar4;
    }
    *pbVar47 = *pbVar47 + bVar4;
    puStack_6c = (uint *)((uint)puStack_6c & 0xffff0000);
  }
  else {
    pbVar47[0x6fdbe8fe] = pbVar47[0x6fdbe8fe] + (char)pbVar11;
code_r0x00404803:
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar22 = (undefined3)((uint)puVar25 >> 8);
    bVar5 = (byte)puVar25 | (byte)*unaff_EBX;
    puVar19 = (uint *)CONCAT31(uVar22,bVar5);
    uVar23 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar7 = (char)unaff_EBX;
    cVar40 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar23,CONCAT11(cVar40,cVar7));
    bVar4 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    bVar49 = 0xf9 < bVar4;
    uVar21 = (undefined3)((uint)pbVar11 >> 8);
    cVar20 = bVar4 + 6;
    pbVar47 = (byte *)CONCAT31(uVar21,cVar20);
    in_SS = uStack_68;
    if ((POPCOUNT(cVar20) & 1U) != 0) goto code_r0x00404880;
    *pbVar47 = *pbVar47 + cVar20;
    piVar17 = (int *)CONCAT31(uVar21,bVar4 + 0x2e);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar5 = bVar5 | *(byte *)((int)param_2 + (int)piVar17);
    puVar19 = (uint *)CONCAT31(uVar22,bVar5);
    in_SS = puStack_64._0_2_;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      puVar25 = (uint *)((int)piVar17 + *piVar17);
      *(byte *)param_2 = (byte)*param_2 + bVar5;
      pbVar9 = pbVar9 + param_2[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar17 = (char)*piVar17 + bVar4 + 0x2e;
    cVar20 = bVar4 + 0x34;
    pcVar12 = (char *)CONCAT31(uVar21,cVar20);
    if ((POPCOUNT(cVar20) & 1U) != 0) {
      pcVar12[0x28] = pcVar12[0x28] + cVar6;
      goto code_r0x00404899;
    }
    *pcVar12 = *pcVar12 + cVar20;
    piVar17 = (int *)CONCAT31(uVar21,bVar4 + 0x5c);
    *piVar17 = *piVar17 + (int)piVar17;
    cVar6 = (bVar5 | bRam07022c07) - (char)*piVar17;
    puVar19 = (uint *)CONCAT31(uVar22,cVar6);
    pcVar12 = (char *)CONCAT31(uVar21,bVar4 + 0x5a);
    bVar5 = (byte)((uint)puVar25 >> 8);
    *(byte *)param_2 = (byte)*param_2 | bVar5;
    *(uint *)((int)param_2 + (int)pcVar12) = *(uint *)((int)param_2 + (int)pcVar12) | 0x73060000;
    *param_2 = *param_2 | 0x73060000;
    cVar40 = cVar40 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar23,CONCAT11(cVar40,cVar7));
    *pcVar12 = *pcVar12 + bVar4 + 0x5a;
    cVar20 = bVar4 + 0x60;
    pcVar12 = (char *)CONCAT31(uVar21,cVar20);
    if ((POPCOUNT(cVar20) & 1U) == 0) {
      *pcVar12 = *pcVar12 + cVar20;
      piVar17 = (int *)CONCAT31(uVar21,bVar4 + 0x88);
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      pbStack_5c = (byte *)CONCAT22(pbStack_5c._2_2_,in_DS);
      puVar19 = (uint *)CONCAT22((short)((uint)puVar25 >> 0x10),
                                 CONCAT11((bVar5 | (byte)*param_2) + (char)*piVar17,cVar6));
      *(char *)piVar17 = (char)*piVar17;
      cVar7 = cVar7 - *pbVar9;
      cVar40 = cVar40 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) + 0x73);
      *(byte *)piVar17 = (char)*piVar17 + bVar4 + 0x88;
      bVar4 = bVar4 + 0xb2 & (byte)*param_2;
      puVar48 = (uint *)((int)puVar48 + iRam73060073);
      *(char *)CONCAT31(uVar21,bVar4) = *(char *)CONCAT31(uVar21,bVar4) + bVar4;
      pcVar12 = (char *)CONCAT31(uVar21,bVar4 + 0x2a);
      unaff_EBX = (uint *)CONCAT22(uVar23,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar23,CONCAT11(
                                                  cVar40,cVar7)) + 0x74),cVar7));
      *pcVar12 = *pcVar12 + bVar4 + 0x2a;
      piVar17 = (int *)CONCAT31(uVar21,bVar4 + 0x54);
      in_SS = puStack_6c._0_2_;
      goto code_r0x0040486e;
    }
    pbVar47 = (byte *)*(undefined6 *)pcVar12;
    *pbVar9 = *pbVar9 + (char)*(undefined6 *)pcVar12;
  }
  uVar21 = (undefined3)((uint)pbVar47 >> 8);
  bVar4 = (byte)pbVar47 | *pbVar9;
  pcVar12 = (char *)CONCAT31(uVar21,bVar4);
  *pcVar12 = *pcVar12 + bVar4;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar19);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar12 = *pcVar12 + bVar4;
  pcVar12 = (char *)CONCAT31(uVar21,bVar4 + 0x6f);
  *pcVar12 = *pcVar12 + bVar4 + 0x6f;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
  uRam00c16f07 = SUB41(pcVar12,0);
  in_SS = uStack_68;
code_r0x004048de:
  cVar20 = (char)pcVar12;
  *pbVar9 = *pbVar9 + cVar20;
  *pcVar12 = *pcVar12 + cVar20;
  *(byte **)(pcVar12 + (int)puVar19) = (byte *)(*(int *)(pcVar12 + (int)puVar19) + (int)puVar19);
  puStack_6c = (uint *)CONCAT22(puStack_6c._2_2_,in_SS);
  bVar4 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar12 = *pcVar12 + cVar20;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar20 + 'o');
  pbVar9 = pbVar9 + 1;
  *pcVar12 = *pcVar12 + cVar20 + 'o';
  pbStack_70 = (byte *)CONCAT22(pbStack_70._2_2_,in_SS);
  puVar25 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4,(char)unaff_EBX));
  puVar44 = unaff_EBX;
  uVar23 = in_SS;
code_r0x004048f5:
  unaff_EBX = puVar25;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
  do {
    uRam00c36f08 = SUB41(pcVar12,0);
    while( true ) {
      bVar4 = *pbVar9;
      cVar20 = (char)pcVar12;
      *pbVar9 = *pbVar9 + cVar20;
      iStack_74 = CONCAT22(iStack_74._2_2_,uVar23);
      if (SCARRY1(bVar4,cVar20) == (char)*pbVar9 < '\0') {
        pcVar12[(int)puVar44] = pcVar12[(int)puVar44] + cVar20;
        goto code_r0x00404982;
      }
      *pcVar12 = *pcVar12 + cVar20;
      pbVar47 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar20 + '*');
      puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,in_DS);
      bVar4 = (byte)((uint)puVar19 >> 8);
      cVar20 = (char)puVar19;
      bVar5 = bVar4 + *pbVar47;
      pbVar47 = pbVar47 + (uint)CARRY1(bVar4,*pbVar47) + *(int *)pbVar47;
      *(byte *)param_2 = (byte)*param_2 + cVar20;
      cVar7 = (char)unaff_EBX - *pbVar9;
      bVar4 = *pbVar47;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar5 + *pbVar47,cVar20));
      iVar16 = *(int *)pbVar47;
      *(byte *)param_2 = (byte)*param_2 + cVar20;
      pcVar12 = (char *)CONCAT31((int3)((uint)(pbVar47 + (uint)CARRY1(bVar5,bVar4) + iVar16) >> 8),
                                 (char)(pbVar47 + (uint)CARRY1(bVar5,bVar4) + iVar16) -
                                 *(byte *)((int)param_2 + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) +
                                                     -0x3a),cVar7));
code_r0x00404921:
      bVar4 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar4;
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar4 + 0x6f);
      *(byte *)puVar19 = ((byte)*puVar19 - (bVar4 + 0x6f)) - (0x90 < bVar4);
code_r0x00404927:
      *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
      pbStack_70 = (byte *)CONCAT22(pbStack_70._2_2_,in_SS);
      *(byte *)puVar19 = (byte)*puVar19 + 1;
      cVar20 = (char)((uint)puVar19 >> 8) - pbVar9[2];
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(cVar20,(char)puVar19));
      if ((POPCOUNT(cVar20) & 1U) == 0) break;
      pcVar12 = pcVar12 + -0x1b7e2606;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar12 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar12));
    }
code_r0x00404931:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar20 = (char)pcVar12 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar20);
    pbVar47 = pbVar9;
  } while ((POPCOUNT(cVar20) & 1U) != 0);
  do {
    bVar4 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar4;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    piVar17 = (int *)CONCAT31(uVar21,bVar4 + 0x6f);
    *puVar19 = (*puVar19 - (int)piVar17) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    iVar16 = *(int *)((int)puVar48 + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar47);
    *(byte *)puVar19 = (byte)*puVar19 + 1;
    bVar4 = (bVar4 + 0x6f) - (char)*piVar17;
    pbVar9 = (byte *)CONCAT31(uVar21,bVar4);
    *pbVar9 = *pbVar9 + bVar4;
    pbVar47 = pbVar47 + *(int *)pbVar9;
    cVar20 = bVar4 + *pbVar9;
    puVar13 = (ushort *)CONCAT31(uVar21,cVar20);
    *puVar13 = *puVar13 + (ushort)CARRY1(bVar4,*pbVar9) * (((ushort)puVar13 & 3) - (*puVar13 & 3));
    *(char *)puVar13 = (char)*puVar13 + cVar20;
    *(char *)puVar13 = (char)*puVar13 + cVar20;
    *(char *)puVar13 = (char)*puVar13 + cVar20;
    puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
    puVar44 = (uint *)((int)puVar44 + iVar16);
code_r0x0040495b:
    cVar20 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar20;
    uVar21 = (undefined3)((uint)puVar13 >> 8);
    cVar7 = cVar20 + '\x02';
    pcVar12 = (char *)CONCAT31(uVar21,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)puVar44);
      pbVar9 = pbVar47 + 1;
      out(*pbVar47,(short)param_2);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar12 = *pcVar12 + cVar7;
    pbVar9 = (byte *)(CONCAT31(uVar21,cVar20 + '}') + (int)puVar44);
    *pbVar9 = *pbVar9 + cVar20 + '}';
    *pcStack_38 = *pcStack_38 + (char)pcStack_38;
    puVar19 = (uint *)CONCAT22((short)((uint)iStack_3c >> 0x10),
                               CONCAT11((byte)((uint)iStack_3c >> 8) | *(byte *)(iStack_3c * 3),
                                        (char)iStack_3c));
    puVar48 = (uint *)(pbStack_54 + *(int *)((int)puStack_44 + 0x6f));
    pcVar12 = pcStack_38;
    param_2 = puStack_40;
    unaff_EBX = puStack_44;
    puVar44 = puStack_4c;
    pbVar47 = pbStack_50;
    while( true ) {
      cVar20 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar20;
      uVar21 = (undefined3)((uint)pcVar12 >> 8);
      cVar7 = cVar20 + '\x02';
      pcVar12 = (char *)CONCAT31(uVar21,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) break;
      *pcVar12 = *pcVar12 + cVar7;
      pcVar12 = (char *)CONCAT31(uVar21,cVar20 + '}');
      out(*(undefined4 *)pbVar47,(short)param_2);
      *pcVar12 = *pcVar12 + cVar20 + '}';
code_r0x00404982:
      puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_ES);
      *(byte *)puStack_58 = (byte)*puStack_58 + (char)in_ES;
      puVar19 = (uint *)CONCAT22((short)((uint)pbStack_5c >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_5c >> 8) |
                                          pbStack_5c[(int)pbStack_70],(char)pbStack_5c));
      puVar48 = (uint *)(iStack_74 + *(int *)((int)puStack_64 + 0x71));
      puVar44 = puStack_58;
      param_2 = puStack_60;
      unaff_EBX = puStack_64;
      pbVar47 = pbStack_70;
      while( true ) {
        cVar20 = (char)puVar44;
        *(byte *)puVar44 = (byte)*puVar44 + cVar20;
        uVar21 = (undefined3)((uint)puVar44 >> 8);
        cVar7 = cVar20 + '\x02';
        puVar13 = (ushort *)CONCAT31(uVar21,cVar7);
        puVar44 = puStack_6c;
        if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar13 = (char)*puVar13 + cVar7;
        bVar5 = cVar20 + 0x7d;
        iVar16 = CONCAT31(uVar21,bVar5);
        pbVar9 = (byte *)(iVar16 + (int)puStack_6c);
        bVar4 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar5;
        uVar38 = *puVar19;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
        pcVar12 = (char *)(((iVar16 - uVar38) - (uint)CARRY1(bVar4,bVar5)) + -0x727b0317);
        cVar20 = (char)pcVar12;
        *pcVar12 = *pcVar12 + cVar20;
        uVar21 = (undefined3)((uint)pcVar12 >> 8);
        cVar7 = cVar20 + '\x02';
        pcVar12 = (char *)CONCAT31(uVar21,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) break;
        *pcVar12 = *pcVar12 + cVar7;
        bVar5 = cVar20 + 0x7d;
        iVar16 = CONCAT31(uVar21,bVar5);
        pbVar9 = (byte *)(iVar16 + (int)puStack_6c);
        bVar4 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar5;
        puVar44 = (uint *)((iVar16 - *puVar19) - (uint)CARRY1(bVar4,bVar5));
        puVar25 = param_2;
code_r0x004049b4:
        *(byte *)puVar25 = (byte)*puVar25 + (char)puVar19;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar25 >> 8),
                                   ((char)puVar25 - (byte)*puVar48) - *pbVar47);
        bVar5 = pbVar47[0x72];
        *puVar44 = *puVar44 & (uint)puVar19;
        pbVar9 = (byte *)((int)puVar44 + 2);
        *pbVar9 = *pbVar9 + (char)((uint)puVar25 >> 8);
        bVar4 = *pbVar9;
        puVar39 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar5);
        pbVar9 = pbVar47;
        while (unaff_EBX = puVar39, pbVar47 = pbVar9, (POPCOUNT(bVar4) & 1U) == 0) {
          cVar20 = (char)puVar44;
          *(byte *)puVar44 = (byte)*puVar44 + cVar20;
          uVar21 = (undefined3)((uint)puVar44 >> 8);
          cVar7 = cVar20 + '\x03';
          pbVar11 = (byte *)CONCAT31(uVar21,cVar7);
          pbVar47 = pbVar9 + 4;
          out(*(undefined4 *)pbVar9,(short)param_2);
          in_SS = pbStack_54._0_2_;
          *pbVar11 = *pbVar11 + cVar7;
          cVar6 = (char)puVar19;
          puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                     CONCAT11((byte)((uint)puVar19 >> 8) | *pbVar11,cVar6));
          *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
          *(byte *)param_2 = (byte)*param_2 + cVar6;
          cVar6 = (char)puVar39 - pbVar9[6];
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),cVar6);
          if ((POPCOUNT(cVar6) & 1U) != 0) {
            pbVar9 = (byte *)((int)puVar48 + (int)puStack_6c * 2);
            *pbVar9 = *pbVar9 + cVar7;
            ppbVar46 = (byte **)puStack_6c;
            goto code_r0x00404a51;
          }
          *pbVar11 = *pbVar11 + cVar7;
          puVar44 = (uint *)CONCAT31(uVar21,cVar20 + 'r');
          *(byte *)puVar44 = (byte)*puVar44;
          pbStack_54 = (byte *)CONCAT22(pbStack_54._2_2_,uVar23);
          do {
            puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
            bVar4 = (byte)puVar44;
            *(byte *)puVar44 = (byte)*puVar44 + bVar4;
            uVar21 = (undefined3)((uint)puVar44 >> 8);
            bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
            puVar44 = (uint *)CONCAT31(uVar21,bVar4);
            cVar20 = (char)puVar19;
            *(byte *)param_2 = (byte)*param_2 + cVar20;
            bVar5 = (char)((uint)puVar19 >> 8) - pbVar47[2];
            puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar5,cVar20));
            puVar25 = param_2;
            if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar44 = (byte)*puVar44 + bVar4;
            bVar41 = bVar4 + 2;
            puVar44 = (uint *)CONCAT31(uVar21,bVar41);
            ppbVar45 = (byte **)puStack_6c;
            if ((POPCOUNT(bVar41) & 1U) == 0) goto code_r0x004049f5;
            pbVar47 = pbStack_54;
          } while (0xfd < bVar4);
          *(byte *)puVar44 = (byte)*puVar44 | bVar41;
          puVar39 = unaff_EBX;
          pbVar9 = pbStack_54;
          bVar4 = (byte)*puVar44;
        }
      }
    }
    *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
    pbStack_54 = (byte *)CONCAT22(pbStack_54._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar44;
    *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    uVar21 = (undefined3)((uint)puVar44 >> 8);
    bVar41 = bVar4 + 0x6f;
    pbVar11 = (byte *)CONCAT31(uVar21,bVar41);
    *puVar19 = (*puVar19 - (int)pbVar11) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar20;
    pbVar9 = (byte *)((int)ppbVar45 + *(int *)((int)puVar48 + 0x1a));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar22 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | *pbVar47;
    param_2 = (uint *)CONCAT31(uVar22,bVar4);
    *(byte *)puVar19 = (byte)*puVar19 + 1;
    cVar7 = bVar41 - *pbVar11;
    pbVar47 = pbVar47 + (-(uint)(bVar41 < *pbVar11) - *(int *)CONCAT31(uVar21,cVar7));
    uVar14 = CONCAT31(uVar21,cVar7 + *(char *)CONCAT31(uVar21,cVar7));
    bVar49 = CARRY1(bRam14110000,bVar5);
    bRam14110000 = bRam14110000 + bVar5;
    puVar44 = (uint *)((int)unaff_EBX + (int)pbVar47 * 2);
    uVar38 = *puVar44;
    uVar1 = uVar14 + *puVar44;
    puVar15 = (undefined4 *)(uVar1 + bVar49);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar15 = uVar2;
    puStack_58 = (uint *)CONCAT22(puStack_58._2_2_,uVar23);
    uVar38 = (uint)(CARRY4(uVar14,uVar38) || CARRY4(uVar1,(uint)bVar49));
    puVar44 = (uint *)((int)puVar15 + uRam7d020511 + uVar38);
    ppbVar43 = &pbStack_5c;
    ppbVar46 = &pbStack_5c;
    ppbVar45 = &pbStack_5c;
    pbStack_5c = pbVar9;
    cVar7 = '\x03';
    do {
      pbVar9 = pbVar9 + -4;
      ppbVar43 = ppbVar43 + -1;
      *ppbVar43 = (byte *)*(undefined4 *)pbVar9;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    pbStack_54 = (byte *)&pbStack_5c;
    pbRam00c82802 =
         (byte *)((int)puVar44 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar15,uRam7d020511) ||
                      CARRY4((int)puVar15 + uRam7d020511,uVar38))));
    bVar41 = *pbVar47;
    cVar7 = (char)puVar44;
    *pbVar47 = *pbVar47 + cVar7;
  } while (SCARRY1(bVar41,cVar7) == (char)*pbVar47 < '\0');
  *(byte *)puVar44 = (byte)*puVar44 + cVar7;
  iVar16 = CONCAT31((int3)((uint)puVar44 >> 8),cVar7 + '\x11') + 0xc57b;
  bVar5 = (byte)iVar16;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar22,bVar4 + (byte)*puVar19);
  iVar16 = (CONCAT31((int3)((uint)iVar16 >> 8),bVar5 + 0x6f) - (uint)(0x90 < bVar5)) + -0x18093a86;
  cVar20 = (char)iVar16;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cVar7 = cVar20 + '\x02';
  pbVar9 = (byte *)CONCAT31(uVar21,cVar7);
  if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar9 = *pbVar9 + cVar7;
  pbVar11 = (byte *)CONCAT31(uVar21,cVar20 + 'q');
  ppbVar46 = &pbStack_5c;
code_r0x00404a51:
  pbVar9 = pbVar11 + 1;
  cVar20 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar20;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                               CONCAT11((char)((uint)puVar39 >> 8) - cVar20,cVar6));
  *pbVar9 = *pbVar9 + cVar20;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar19);
  pbVar11 = pbVar11 + 0x757b03;
  pbVar9 = (byte *)((int)puVar48 + (int)ppbVar46 * 2);
  cVar20 = (char)pbVar11;
  *pbVar9 = *pbVar9 + cVar20;
  *pbVar11 = *pbVar11 + cVar20;
  *pbVar47 = *pbVar47 - (char)((uint)pbVar11 >> 8);
  *pbVar11 = *pbVar11 + cVar20;
  puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar46 + -0x3a));
  *pbVar11 = *pbVar11 + cVar20;
  pbVar9 = (byte *)(CONCAT31((int3)((uint)pbVar11 >> 8),cVar20 + '\x11') + 0x757b02);
  pbVar11 = (byte *)((int)puVar48 + (int)ppbVar46 * 2);
  bVar5 = (byte)pbVar9;
  *pbVar11 = *pbVar11 + bVar5;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,uVar23);
  pbRam011006fe = pbVar9 + (int)(pbRam011006fe + CARRY1(bVar4,bVar5));
  bVar4 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar5;
  if (!CARRY1(bVar4,bVar5)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar41 = (byte)puVar19;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((byte)((uint)puVar19 >> 8) | *pbVar9,bVar41));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar21 = (undefined3)((uint)pbVar9 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar20 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar12 = (char *)CONCAT31(uVar21,cVar20);
    *pcVar12 = *pcVar12 + cVar20;
    puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar46 + -0x39));
    *pcVar12 = *pcVar12 + cVar20;
    iVar16 = CONCAT31(uVar21,cVar20 + '\x11') + 0xc57b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar16;
    bVar5 = bVar4 + 0x6f;
    pbVar9 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),bVar5);
    *puVar19 = (*puVar19 - (int)pbVar9) - (uint)(0x90 < bVar4);
    uVar38 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar41;
    pbRam011106fe = pbVar9 + (int)(pbRam011106fe + CARRY1((byte)uVar38,bVar41));
    bVar4 = *pbVar47;
    *pbVar47 = *pbVar47 + bVar5;
    if (!CARRY1(bVar4,bVar5)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    bVar4 = (byte)puVar19;
    bVar5 = (byte)((uint)puVar19 >> 8) | *pbVar9;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar5,bVar4));
    *pbVar9 = *pbVar9 - (char)pbVar9;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar5;
    out(*(undefined4 *)pbVar47,(short)param_2);
    *puVar19 = *puVar19 & (uint)pbVar9;
    uVar38 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar9 = pbVar9 + (uint)CARRY1((byte)uVar38,bVar4) + *(int *)(pbVar47 + 4);
    *pbVar9 = *pbVar9 + (char)pbVar9;
    *(byte *)puVar19 = (byte)*puVar19 + (char)param_2;
    pbVar47 = pbVar47 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar47,(short)param_2);
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 & (byte)*puVar19);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar19;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      pbVar47 = pbVar47 + 4;
code_r0x00404ad4:
      puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,uVar23);
      pbVar9 = (byte *)((uint)pbVar9 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar9;
code_r0x00404add:
      bVar4 = (byte)pbVar9;
      uVar21 = (undefined3)((uint)pbVar9 >> 8);
      cVar20 = bVar4 + 8;
      pbVar9 = (byte *)CONCAT31(uVar21,cVar20);
      if (SCARRY1(bVar4,'\b') == cVar20 < '\0') break;
      *pbVar9 = *pbVar9 + cVar20;
      cVar20 = bVar4 + 10;
      piVar17 = (int *)CONCAT31(uVar21,cVar20);
      if ((POPCOUNT(cVar20) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar20;
      puVar44 = (uint *)CONCAT31(uVar21,bVar4 + 0x7c);
      *puVar44 = *puVar44 & (uint)puVar19;
      *(char *)((int)puVar44 + 0x11) = *(char *)((int)puVar44 + 0x11) + (char)((uint)param_2 >> 8);
      cVar20 = (char)((int)puVar44 + 0xc67b);
      uVar21 = (undefined3)((uint)((int)puVar44 + 0xc67b) >> 8);
      bVar4 = cVar20 + 8;
      pbVar9 = (byte *)CONCAT31(uVar21,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar9 = *pbVar9 + bVar4;
        cRam02060000 = cVar20 + 'w';
        puVar44 = (uint *)CONCAT31(uVar21,cRam02060000);
        *(byte *)puVar44 = (byte)*puVar44 + cRam02060000;
        cVar20 = (char)puVar19;
        puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                   CONCAT11((byte)((uint)puVar19 >> 8) | (byte)*puVar44,cVar20));
        *puVar44 = *puVar44 - (int)puVar44;
        *(byte *)param_2 = (byte)*param_2 + cVar20;
        pbVar9 = pbVar47 + 4;
        out(*(undefined4 *)pbVar47,(short)param_2);
        pbVar47 = pbVar9;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar12 = (char *)((uint)puVar44 | *puVar44);
        goto code_r0x00404b89;
      }
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      *(byte **)pbVar47 = pbVar9 + (uint)CARRY1(bVar5,bVar4) + *(int *)pbVar47;
    }
    *pbVar47 = *pbVar47 + 1;
    *puVar19 = (uint)(pbVar9 + (uint)(0xf7 < bVar4) + *puVar19);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
    puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + 'r');
    piVar17 = (int *)((uint)puVar44 | *puVar44);
    param_2 = puStack_78;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar16 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar16;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),bVar4 + 0x6f);
    *puVar19 = (*puVar19 - iVar16) - (uint)(0x90 < bVar4);
    cVar20 = (char)puVar19;
    *(byte *)param_2 = (byte)*param_2 + cVar20;
    bVar5 = (byte)((uint)unaff_EBX >> 8);
    bVar34 = (byte)((uint)param_2 >> 8) | bVar5;
    pcVar24 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar34,(byte)param_2));
    piVar17 = (int *)(iVar16 + 0x73060001);
    *(byte *)puVar19 = (byte)*puVar19 & (byte)piVar17;
    *pcVar24 = *pcVar24 + cVar20;
    bVar41 = (byte)((uint)puVar19 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar41;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar16 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar41;
    pcVar12 = (char *)((uint)piVar17 | *puVar48);
    *pcVar24 = *pcVar24 - bVar41;
    bVar4 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar4;
    ppbVar46 = (byte **)(((int)ppbVar46 - iVar16) - *(int *)(pcVar12 + ((int)ppbVar46 - iVar16)));
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar27 = (byte)unaff_EBX;
    cVar7 = bVar5 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar11 = (byte *)CONCAT22(uVar30,CONCAT11(cVar7,bVar27));
    *pcVar12 = *pcVar12 + bVar4;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    uVar14 = CONCAT31(uVar21,bVar4 + 7);
    puVar44 = (uint *)((int)ppbVar46 + -0x1faeef1);
    uVar38 = *puVar44;
    uVar1 = *puVar44 + uVar14;
    *puVar44 = uVar1 + (0xf8 < bVar4);
    puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,uVar23);
    puVar25 = puStack_78;
    bVar5 = bVar4 + 7 + (byte)*puVar19 +
            (CARRY4(uVar38,uVar14) || CARRY4(uVar1,(uint)(0xf8 < bVar4)));
    puVar44 = (uint *)CONCAT31(uVar21,bVar5);
    bVar4 = *pbVar47;
    *pbVar47 = *pbVar47 + bVar5;
    if (CARRY1(bVar4,bVar5)) break;
    *(byte *)puVar44 = (byte)*puVar44 + bVar5;
    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar7 + pbVar11[0x76],bVar27));
    uStack_7c = uVar23;
  }
  *(byte *)puVar44 = (byte)*puVar44 + bVar5;
  uVar22 = (undefined3)((uint)pcVar24 >> 8);
  bVar29 = (byte)param_2 | *pbVar11;
  param_2 = (uint *)CONCAT31(uVar22,bVar29);
  pcRam2b060000 = (char *)CONCAT31(uVar21,bVar5 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar5 + 0x39)) - (0xd7 < (byte)(bVar5 + 0x11));
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar41;
  pbVar9 = pbVar47 + 4;
  out(*(undefined4 *)pbVar47,(short)param_2);
  bVar4 = (bVar5 + 0x37) - CARRY1(bVar4,bVar41);
  piVar17 = (int *)CONCAT31(uVar21,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    iVar16 = CONCAT31(uVar21,bVar4 + 0x11) + 0xc77b;
    pcVar12 = (char *)CONCAT31((int3)((uint)iVar16 >> 8),(char)iVar16 + 'r');
    pcVar12[0x28] = pcVar12[0x28] + bVar34;
code_r0x00404b89:
    cVar20 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar20;
    *pcVar12 = *pcVar12 + cVar20;
    *pcVar12 = *pcVar12 + cVar20;
    puVar13 = (ushort *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar20 + 'r');
    uVar8 = (ushort)puVar13 | *puVar13;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar9,(short)param_2);
    *pcVar12 = *pcVar12 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar4;
  pbVar32 = (byte *)((int)ppbVar46 - *(int *)((int)puVar48 + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar12 = (char *)CONCAT31(uVar22,bVar29 | *pbVar11);
  puVar44 = (uint *)(pbVar47 + 8);
  out(*(undefined4 *)pbVar9,(short)pcVar12);
  uVar38 = *puVar19;
  *pcVar12 = *pcVar12 + cVar20;
  uVar38 = CONCAT31(uVar21,bVar4 & (byte)uVar38) | 0x767b02;
  *(byte *)((int)puVar19 + (int)pcVar12) = *(byte *)((int)puVar19 + (int)pcVar12) + (char)uVar38;
  iVar16 = uVar38 + 0xc67b;
  cVar40 = (char)iVar16;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cVar6 = cVar40 + 'r';
  pcVar12 = (char *)CONCAT31(uVar21,cVar6);
  pcVar12[0x28] = pcVar12[0x28] + bVar34;
  *pcVar12 = *pcVar12 + cVar6;
  uVar28 = (undefined2)((uint)puVar19 >> 0x10);
  bVar41 = bVar41 | *(byte *)((int)puStack_78 + -0x5e);
  puVar39 = (uint *)CONCAT22(uVar28,CONCAT11(bVar41,cVar20));
  *pcVar12 = *pcVar12 + cVar6;
  puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,uStack_7c);
  pbVar9 = (byte *)CONCAT22(uVar30,CONCAT11(cVar7 + pbVar11[0x76],bVar27));
  *pcVar12 = *pcVar12 + cVar6;
  puVar48 = (uint *)CONCAT31(uVar21,cVar40 + -0x1c);
  pcVar12 = (char *)((uint)puVar48 | *puVar48);
  bVar49 = (POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar12;
  puVar48 = puStack_78;
  pbVar11 = pbVar9;
  pbVar37 = pbVar32;
  puVar19 = puVar25;
  uVar23 = uStack_7c;
  if (!bVar49) goto code_r0x00404ca8;
  *pcVar12 = *pcVar12 + cRam02060000;
  puVar48 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cRam02060000 + 'r');
  *puVar48 = *puVar48 & (uint)puVar39;
  *(char *)((int)puVar48 + 0x11) = *(char *)((int)puVar48 + 0x11) + (char)((ushort)uStack_7c >> 8);
  iVar16 = (int)puVar48 + 0xc77b;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cRam02060000 = (char)iVar16 + '\t';
  pbVar11 = (byte *)CONCAT31(uVar21,cRam02060000);
  out(*puVar44,uStack_7c);
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar19 = (uint *)CONCAT22(uVar28,CONCAT11(bVar41 | *pbVar11,cVar20));
  *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
  *(byte *)puStack_78 = (byte)*puStack_78 + cVar20;
  out(*(undefined4 *)(pbVar47 + 0xc),uStack_7c);
  puVar31 = puStack_78;
  puVar44 = (uint *)(pbVar47 + 0x10);
  uVar23 = uStack_7c;
  if ((POPCOUNT((byte)*puStack_78) & 1U) != 0) goto code_r0x00404cca;
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar13 = (ushort *)CONCAT31(uVar21,(char)iVar16 + '{');
  uVar8 = (ushort)puVar13 | *puVar13;
  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),uVar8);
  bVar4 = (byte)uVar8;
  out(*(uint *)(pbVar47 + 0x10),uStack_7c);
  pbVar11 = (byte *)((int)puVar19 + 1);
  bRam11060000 = bVar4;
  *pcVar12 = *pcVar12 + bVar4;
  puVar39 = (uint *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                             CONCAT11((byte)((uint)pbVar11 >> 8) | bRam110cde91,(char)pbVar11));
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar4 - 7);
  *puVar25 = (uint)(pcVar12 + (uint)(bVar4 < 7) + *puVar25);
  puVar44 = (uint *)(pbVar47 + 0x18);
  out(*(undefined4 *)(pbVar47 + 0x14),uStack_7c);
  puVar48 = (uint *)((int)puStack_78 + 1);
  *pcVar12 = *pcVar12 + (bVar4 - 7);
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar27 | (byte)(uVar8 >> 8));
  do {
    bVar4 = (char)pcVar12 - *pcVar12;
    uVar38 = *puVar39;
    *(byte *)puVar39 = (byte)*puVar39 + bVar4;
    cVar20 = bVar4 - CARRY1((byte)uVar38,bVar4);
    *(byte *)puVar48 = *(byte *)puVar48 + cVar20;
    cVar7 = (char)((uint)puVar39 >> 8);
    *(byte *)(puVar25 + 0x673b40) = (byte)puVar25[0x673b40] + cVar7;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar20);
    *(byte *)puVar18 = (byte)*puVar18 + cVar20;
    *(byte *)puVar48 = *(byte *)puVar48 + cVar20;
    *(byte **)(pbVar11 + 0x58) = (byte *)(*(int *)(pbVar11 + 0x58) + (int)puVar44);
    puVar19 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar39 >> 0x10),
                                               CONCAT11(cVar7 + (char)((uint)pcVar12 >> 8),
                                                        (char)puVar39)) >> 8),
                               (char)puVar39 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar20;
    *(byte *)puVar44 = (byte)*puVar44 + (char)pbVar11;
    puVar31 = puVar48;
    pbVar9 = pbVar11;
_ctor:
    bVar5 = (byte)((uint)puVar19 >> 8);
    uVar38 = *puVar18;
    bVar4 = (byte)puVar19;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar5,(byte)*puVar18) + *puVar18);
    *(byte *)puVar31 = *(byte *)puVar31 + bVar4;
    cVar20 = bVar4 - *(byte *)((int)puVar31 + 3);
    puVar39 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11(bVar5 + (byte)uVar38,bVar4)) >> 8),cVar20);
    if ((POPCOUNT(cVar20) & 1U) != 0) {
      if (*(byte *)((int)puVar31 + 3) <= bVar4) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *pbVar9);
        puVar18 = puVar18 + 0x230e;
        puVar19 = puVar39;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar20 = (char)puVar18 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar20);
    bVar49 = (POPCOUNT(cVar20) & 1U) == 0;
    puVar48 = puVar31;
    pbVar11 = pbVar9;
    pbVar37 = pbVar32;
    puVar19 = puVar25;
    uVar23 = puStack_6c._0_2_;
code_r0x00404ca8:
    puStack_6c._0_2_ = uVar23;
    pcVar24 = pcStack_48;
    puVar31 = (uint *)pbStack_50;
    pbVar9 = pbStack_54;
    pbVar32 = pbStack_5c;
    puVar25 = puStack_64;
    if (bVar49) break;
    *(byte *)puVar48 = *(byte *)puVar48 + (char)puVar39;
    pbVar32 = pbVar37;
    puVar25 = puVar19;
  } while( true );
  *pcVar12 = *pcVar12 + (char)pcVar12;
  bVar4 = (byte)pcStack_48;
  *pcStack_48 = *pcStack_48 + bVar4;
  puVar19 = (uint *)CONCAT22((short)((uint)puStack_4c >> 0x10),
                             CONCAT11((byte)((uint)puStack_4c >> 8) | *pbStack_50,(char)puStack_4c))
  ;
  *pbStack_54 = *pbStack_54 + (char)pbStack_54;
  pbVar47 = (byte *)((int)pcVar24 * 2);
  *pbVar47 = *pbVar47 ^ bVar4;
  uVar3 = *(undefined6 *)pcVar24;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar11 = (byte *)uVar3;
  bVar5 = (byte)uVar3;
  *pbVar11 = *pbVar11 + bVar5;
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar5;
  puVar44 = (uint *)((int)puVar19 + 0x11673);
  uVar38 = *puVar44;
  uVar1 = *puVar44;
  *puVar44 = (uint)((byte *)((int)puVar31 + uVar1) + CARRY1(bVar4,bVar5));
  puStack_64 = (uint *)CONCAT22(puStack_64._2_2_,puStack_6c._0_2_);
  pbVar11 = pbVar11 + (uint)(CARRY4(uVar38,(uint)puVar31) ||
                            CARRY4((int)puVar31 + uVar1,(uint)CARRY1(bVar4,bVar5))) +
                      *(int *)((int)puVar19 + (int)puVar31);
  puVar44 = puStack_60;
  uVar23 = puStack_6c._0_2_;
code_r0x00404cca:
  puStack_6c._0_2_ = uVar23;
  cVar20 = (char)pbVar11 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar20);
  if (SCARRY1((char)pbVar11,'\x04') == cVar20 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  puVar48 = puVar44 + 1;
  out(*puVar44,(short)puVar31);
  uVar38 = *puVar19;
  bVar4 = *(byte *)puVar31;
  bVar5 = (byte)puVar19;
  *(byte *)puVar31 = *(byte *)puVar31 + bVar5;
  iVar16 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar38) + iRam00008c38;
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar31;
  pcVar12 = (char *)(iVar16 + (uint)CARRY1(bVar4,bVar5) + 0x1246f);
  bVar4 = *(byte *)puVar31;
  uVar21 = (undefined3)((uint)puVar19 >> 8);
  puVar39 = (uint *)CONCAT31(uVar21,bVar5 | bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar12 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + *pcVar12) + 0x1fbeef2);
  uVar38 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar38,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar12 = (char *)CONCAT31(uVar21,bVar5 | bVar4 | bRam00282809);
    cVar20 = (char)((uint)puVar19 >> 8);
    *pbVar9 = *pbVar9 + cVar20;
    *pcVar12 = *pcVar12 - cVar20;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar16 = (int)pcVar12 - *(int *)pbVar9;
    puVar44 = puVar44 + 2;
    out(*puVar48,(short)puVar31);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar39 = (uint *)CONCAT22((short)((uint)iVar16 >> 0x10),
                               CONCAT11((byte)((uint)iVar16 >> 8) | bRambf73070b,(char)iVar16));
code_r0x00404d15:
    uVar38 = *puVar18;
    bVar4 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar4;
    puVar48 = puVar44 + 1;
    out(*puVar44,(short)puVar31);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar5 = bVar4 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar5 + (0x90 < (bVar5 & 0xf0) |
                                       CARRY1((byte)uVar38,bVar4) | in_AF * (0xf9 < bVar5)) * '`');
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar5 = (byte)puVar18 | (byte)*puVar25;
  puVar44 = puVar48 + 1;
  uVar30 = SUB42(puVar31,0);
  out(*puVar48,uVar30);
  *(byte *)puVar39 = (byte)*puVar39 - bVar5;
  bVar4 = *(byte *)puVar31;
  bVar41 = (byte)puVar39;
  *(byte *)puVar31 = *(byte *)puVar31 + bVar41;
  iVar16 = CONCAT31((int3)((uint)puVar18 >> 8),bVar5) + *puVar44 + (uint)CARRY1(bVar4,bVar41);
  pbVar47 = pbVar32 + -*puVar31;
  uVar21 = (undefined3)((uint)iVar16 >> 8);
  cVar20 = (char)iVar16 + (byte)*puVar44 + (pbVar32 < (byte *)*puVar31);
  puVar19 = (uint *)CONCAT31(uVar21,cVar20);
  bVar4 = (byte)((uint)puVar39 >> 8);
  *(byte *)puVar39 = (byte)*puVar39 - bVar4;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  bVar41 = bVar41 | *(byte *)((int)puVar31 + (int)puVar19);
  uVar23 = (undefined2)((uint)puVar39 >> 0x10);
  if ((POPCOUNT(bVar41) & 1U) == 0) {
    *(byte *)puVar19 = (byte)*puVar19 + cVar20;
    pcVar12 = (char *)CONCAT31(uVar21,cVar20 + '\x12');
    *pcVar12 = *pcVar12 + bVar4;
    puVar19 = (uint *)CONCAT31(uVar21,(cVar20 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar39 >> 8),bVar41));
    bVar5 = *(byte *)puVar31;
    *(byte *)puVar31 = *(byte *)puVar31 + bVar41;
    if (!CARRY1(bVar5,bVar41)) {
      pbVar11 = (byte *)((uint)puVar19 | *puVar19);
      out(*puVar44,uVar30);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar5 = *pbVar11;
      piVar17 = (int *)CONCAT22(uVar23,CONCAT11(bVar4 | bVar5,bVar41));
      iVar16 = (int)pbVar11 - *piVar17;
      *(byte *)puVar31 = *(byte *)puVar31 + bVar41;
      puVar19 = puVar48 + 3;
      out(puVar48[2],uVar30);
      uRam12060000 = (undefined1)iVar16;
      *(char *)((int)piVar17 + iVar16) = *(char *)((int)piVar17 + iVar16) - (bVar4 | bVar5);
      *(byte *)puVar31 = *(byte *)puVar31 + bVar41;
      pbVar11 = (byte *)(iVar16 + -0x120edecd);
      *(byte *)puVar19 = (byte)*puVar19 + 1;
      bVar4 = *pbVar11;
      bVar5 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      pbVar47 = pbVar47 + ((-1 - *(int *)((int)puVar25 + 0x42)) - (uint)CARRY1(bVar4,bVar5));
      *pbVar11 = *pbVar11 + bVar5;
      bVar34 = (byte)pbVar9 | (byte)((uint)pbVar11 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar11;
      bVar4 = *(byte *)puVar31;
      pcVar12 = (char *)(((uint)pbVar11 | 0x11) + 0x511072c);
      puVar44 = puVar48 + 4;
      out(*puVar19,uVar30);
      puVar31 = (uint *)((int)puVar31 + 1);
      *pcVar12 = *pcVar12 + (char)pcVar12;
      bVar5 = (byte)((uint)pcVar12 >> 8);
      pbVar9 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar9 >> 0x10),
                                                CONCAT11((byte)((uint)pbVar9 >> 8) | bVar4,bVar34))
                                      >> 8),bVar34 | bVar5);
      uVar21 = (undefined3)((uint)pcVar12 >> 8);
      bVar4 = (char)pcVar12 - *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar21,bVar4);
      *pcVar12 = *pcVar12 + bVar4;
      *(int *)((int)pcVar12 * 2) = (int)(pbVar9 + *(int *)((int)pcVar12 * 2));
      *(byte *)puVar31 = *(byte *)puVar31 + bVar4;
      *pbVar47 = *pbVar47 + bVar5;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar38 = CONCAT31(uVar21,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar38;
      pbVar11 = (byte *)CONCAT22((short)(uVar38 >> 0x10),CONCAT11(bVar5 + in_AF,bVar4));
      *(byte *)puVar44 = (byte)*puVar44 + bVar41;
      *pbVar11 = *pbVar11 + bVar4;
      *pbVar11 = *pbVar11 + bVar4;
      bVar49 = CARRY1(bVar4,*pbVar11);
      puVar19 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar4 + *pbVar11);
      goto code_r0x00404d9a;
    }
    *pbVar9 = *pbVar9 - (char)puVar31;
  }
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  bVar49 = false;
  piVar17 = (int *)CONCAT22(uVar23,CONCAT11(bVar4 | *(byte *)puVar31,bVar41));
code_r0x00404d9a:
  do {
    pbVar32 = (byte *)puVar31;
    *puVar19 = (*puVar19 - (int)puVar19) - (uint)bVar49;
    bVar4 = (byte)((uint)piVar17 >> 8);
    uVar23 = (undefined2)((uint)piVar17 >> 0x10);
    bVar5 = (byte)piVar17;
    bVar41 = bVar4 + (byte)iRam00000c00;
    pbVar11 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *pbVar32 = *pbVar32 + bVar5;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 - (byte)*puVar44);
    bVar4 = *pbVar11;
    puVar19 = (uint *)(pbVar11 + (uint)CARRY1(bVar41,*pbVar11) + *(int *)pbVar11);
    *pbVar32 = *pbVar32 + bVar5;
    cVar7 = ((bVar41 + bVar4) - *pbVar32) + (byte)*puVar19;
    pcVar12 = (char *)CONCAT22(uVar23,CONCAT11(cVar7,bVar5));
    puVar48 = puVar25 + 1;
    uVar38 = in((short)pbVar32);
    *puVar25 = uVar38;
    cVar20 = (char)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + cVar20;
    uVar21 = (undefined3)((uint)pbVar32 >> 8);
    bVar41 = (byte)pbVar32 | (byte)*puVar44;
    pcVar24 = (char *)CONCAT31(uVar21,bVar41);
    *pcVar12 = *pcVar12 + '\x01';
    bVar4 = (cVar7 - *pcVar24) + (byte)*puVar19;
    pcVar12 = (char *)CONCAT22(uVar23,CONCAT11(bVar4,bVar5));
    puVar25 = puVar25 + 2;
    uVar38 = in((short)pcVar24);
    *puVar48 = uVar38;
    *(byte *)puVar19 = (byte)*puVar19 + cVar20;
    bVar41 = bVar41 | (byte)*puVar44;
    puVar31 = (uint *)CONCAT31(uVar21,bVar41);
    *pcVar12 = *pcVar12 + '\x01';
    bVar49 = bVar5 < *(byte *)((int)puVar31 + 2);
    cVar7 = bVar5 - *(byte *)((int)puVar31 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  *(byte *)puVar19 = (byte)*puVar19 + cVar20;
  bVar5 = cVar20 + 0x7b;
  pbVar11 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),bVar5);
  pbVar9[(int)pbVar11] = pbVar9[(int)pbVar11] + bVar5;
  puVar48 = puVar44 + 1;
  uVar30 = SUB42(puVar31,0);
  out(*puVar44,uVar30);
  pbVar37 = pbVar9 + -1;
  *pbVar11 = *pbVar11 + bVar5;
  bVar4 = bVar4 | *(byte *)puVar31;
  piVar17 = (int *)CONCAT22(uVar23,CONCAT11(bVar4,cVar7));
  *pbVar11 = *pbVar11 + bVar5;
  *pbVar37 = *pbVar37 + bVar41;
  *pbVar37 = *pbVar37 ^ bVar5;
  *(byte *)puVar31 = *(byte *)puVar31 + bVar4;
  *pbVar11 = *pbVar11 + bVar5;
  do {
    bVar27 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar25 = (byte)*puVar25 + bVar27;
    bVar4 = *pbVar11;
    bVar5 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar5;
    *(byte **)(pbVar9 + 0x17) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar4,bVar5) + *(int *)(pbVar9 + 0x17));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar22 = (undefined3)((uint)pbVar11 >> 8);
    bVar5 = bVar5 | (byte)*puVar48;
    puVar25 = (uint *)((int)puVar25 + *(int *)(pbVar47 + -0x34));
    *(char *)CONCAT31(uVar22,bVar5) = *(char *)CONCAT31(uVar22,bVar5) + bVar5;
    bVar4 = bVar5 + 2;
    cVar20 = (char)((uint)pbVar32 >> 8);
    bVar34 = (byte)piVar17;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar11 = (byte *)CONCAT31(uVar22,bVar5 + 0x15 + (0xfd < bVar5));
      if (0xec < bVar4 || CARRY1(bVar5 + 0x15,0xfd < bVar5)) {
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      }
code_r0x00404e60:
      pbVar47 = pbVar47 + -*puVar31;
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      pbVar9 = (byte *)((int)puVar48 + (-(uint)CARRY1(bVar4,(byte)pbVar11) - *(int *)pbVar11));
      pbVar11 = pbVar11 + *(int *)pbVar11;
      puStack_78 = (uint *)CONCAT22(puStack_78._2_2_,in_DS);
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      *(char *)piVar17 = (char)*piVar17 + cVar20;
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      *(byte **)(pbVar37 + (int)puVar31) =
           (byte *)((int)puVar31 +
                   (uint)CARRY1(bVar4,(byte)pbVar11) + *(int *)(pbVar37 + (int)puVar31));
      pbVar11 = pbVar11 + 0x73061314;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      uVar22 = (undefined3)((uint)piVar17 >> 8);
      bVar34 = bVar34 | *(byte *)puVar31;
      pcVar24 = (char *)CONCAT31(uVar22,bVar34);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      cVar20 = (char)pbVar11 + 'o';
      pcVar12 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar20);
      *pcVar12 = *pcVar12 + cVar20;
      out(*(undefined4 *)pbVar9,uVar30);
      bVar4 = *(byte *)puVar31;
      *(byte *)puVar31 = *(byte *)puVar31 + bVar34;
      pcVar12 = pcVar12 + (uint)CARRY1(bVar4,bVar34) + *puVar25;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      *pcVar24 = *pcVar24 + bVar41;
      puVar48 = (uint *)(pbVar9 + 8);
      out(*(undefined4 *)(pbVar9 + 4),uVar30);
      *(byte *)puVar31 = *(byte *)puVar31 + bVar34;
      piVar17 = (int *)((uint)pcVar12 | *puVar25);
      pcVar24[0x390a0000] = pcVar24[0x390a0000] - bVar27;
      pbVar11 = (byte *)&cRam07000000;
      *(byte *)puVar25 = (byte)*puVar25 - bVar27;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar44 = (uint *)CONCAT31(uVar22,bVar34 | *(byte *)((int)piVar17 + (int)pcVar24));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar27;
      cRam07000000 = cRam07000000 + bVar27;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar9 = (byte *)((int)puVar25 + (int)pbVar47 * 2);
      bVar49 = SCARRY1(*pbVar9,(char)piVar17);
      *pbVar9 = *pbVar9 + (char)piVar17;
      bVar4 = *pbVar9;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar22,bVar4) = *(char *)CONCAT31(uVar22,bVar4) + bVar4;
    bVar5 = bVar5 + 0x71;
    pbVar11 = (byte *)CONCAT31(uVar22,bVar5);
    *pbVar11 = *pbVar11;
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *piVar17 = (*piVar17 - (int)pbVar11) - (uint)(0x90 < bVar4);
    uVar38 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + bVar5;
    if (!CARRY1((byte)uVar38,bVar5)) goto code_r0x00404e60;
    *pbVar11 = *pbVar11 + bVar5;
    uVar23 = (undefined2)((uint)piVar17 >> 0x10);
    bVar27 = bVar27 | *pbVar11;
    pbVar11 = pbVar11 + -*(int *)pbVar11;
    *pbVar37 = *pbVar37 + bVar27;
    cVar7 = bVar34 - *(byte *)((int)puVar31 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar23,CONCAT11(bVar27,bVar34)) >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  cVar6 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar6;
  uVar22 = (undefined3)((uint)pbVar11 >> 8);
  pcVar12 = (char *)CONCAT31(uVar22,cVar6 + '{');
  out(*puVar48,uVar30);
  *pcVar12 = *pcVar12 + cVar6 + '{';
  bVar5 = cVar6 + 0x7e;
  pbVar32 = (byte *)CONCAT31(uVar22,bVar5);
  puVar48 = puVar44 + 3;
  out(puVar44[2],uVar30);
  pbVar11 = pbVar9 + -2;
  *pbVar32 = *pbVar32 + bVar5;
  bVar4 = *(byte *)puVar31;
  puVar44 = (uint *)CONCAT22(uVar23,CONCAT11(bVar27 | bVar4,cVar7));
  *pbVar32 = *pbVar32 + bVar5;
  *pbVar11 = *pbVar11 + bVar41;
  *pbVar11 = *pbVar11 ^ bVar5;
  *(byte *)puVar31 = *(byte *)puVar31 + (bVar27 | bVar4);
  *pbVar32 = *pbVar32 + bVar5;
  *pbVar32 = *pbVar32 + cVar20;
  bVar4 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar5;
  *(byte **)(pbVar9 + 0x18) =
       (byte *)((int)puVar48 + (uint)CARRY1(bVar4,bVar5) + *(int *)(pbVar9 + 0x18));
  *(byte **)pbVar32 = pbVar32 + *(int *)pbVar32;
  bVar5 = bVar5 | (byte)*puVar48;
  puVar25 = (uint *)((int)puVar25 + *(int *)(pbVar47 + -0x33));
  *(char *)CONCAT31(uVar22,bVar5) = *(char *)CONCAT31(uVar22,bVar5) + bVar5;
  bVar49 = SCARRY1(bVar5,'\x02');
  bVar4 = bVar5 + 2;
  piVar17 = (int *)CONCAT31(uVar22,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar4;
    return CONCAT31(uVar22,bVar5 + 0x71);
  }
code_r0x00404ebf:
  bVar5 = (byte)piVar17;
  uVar22 = (undefined3)((uint)piVar17 >> 8);
  if (bVar4 != 0 && bVar49 == (char)bVar4 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    puVar48[(int)puVar25 * 2] =
         (uint)((int)puVar31 + (uint)(0xd2 < bVar5) + puVar48[(int)puVar25 * 2]);
    return CONCAT31(uVar22,bVar5 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar4 = *pbVar11;
  *puVar48 = (uint)(*puVar48 + (int)piVar17);
  bVar34 = (byte)((uint)puVar44 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar34;
  *(byte *)piVar17 = (char)*piVar17 + bVar5;
  pbVar9 = (byte *)(CONCAT31(uVar21,bVar41 | bVar4) - *(int *)pbVar11);
  puVar39 = (uint *)CONCAT31(uVar22,bVar5 + 6);
  *(uint *)(pbVar11 + (int)puVar48 * 2) =
       (int)puVar39 + (uint)(0xf9 < bVar5) + *(int *)(pbVar11 + (int)puVar48 * 2);
  *(byte *)puVar44 = (byte)*puVar44 ^ bVar5 + 6;
  bVar5 = (byte)puVar44;
  *pbVar9 = *pbVar9 + bVar5;
  puVar19 = puVar48 + 1;
  uVar23 = SUB42(pbVar9,0);
  out(*puVar48,uVar23);
  *puVar44 = *puVar44 ^ (uint)puVar39;
  *pbVar9 = *pbVar9 + bVar5;
  puVar31 = (uint *)(pbVar11 + -*(int *)pbVar11);
  *(uint *)((int)puVar25 + 0x31) = *(uint *)((int)puVar25 + 0x31) | (uint)pbVar47;
  *puVar39 = *puVar39 + (int)puVar39;
  puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar34 | (byte)*puVar31,bVar5))
  ;
  *(byte **)(pbVar9 + 0x6e) = (byte *)(*(int *)(pbVar9 + 0x6e) + (int)puVar19);
  piVar17 = (int *)((uint)puVar39 | *puVar39);
  bVar41 = (byte)puVar31;
  *(byte *)puVar25 = (byte)*puVar25 - bVar41;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  if (CARRY1(bVar4,bVar5)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar4 = pbVar9[0x11];
    uVar30 = (undefined2)((uint)puVar31 >> 0x10);
    out(*puVar19,uVar23);
    puVar44 = (uint *)((int)puVar44 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar29 = (byte)((uint)puVar31 >> 8) | bVar4 | *pbVar9;
    pcVar12 = (char *)((int)piVar17 + -0x21000001);
    bVar4 = (byte)pcVar12 | 0x11;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    cVar20 = bVar4 - 7;
    pcVar24 = (char *)CONCAT31(uVar21,cVar20);
    *puVar25 = (uint)(pcVar24 + (uint)(bVar4 < 7) + *puVar25);
    puVar19 = puVar48 + 3;
    out(puVar48[2],uVar23);
    pbVar9 = pbVar9 + 1;
    *pcVar24 = *pcVar24 + cVar20;
    bVar34 = (byte)((uint)pcVar12 >> 8);
    bVar27 = bVar41 | bVar34;
    bVar5 = cVar20 - *pcVar24;
    bVar4 = *(byte *)puVar44;
    *(byte *)puVar44 = *(byte *)puVar44 + bVar5;
    *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5 + CARRY1(bVar4,bVar5);
    *pbVar9 = *pbVar9 + bVar5;
    *(byte *)puVar19 = (byte)*puVar19 + bVar27;
    bVar4 = (byte)((uint)pbVar9 >> 8);
    *(byte *)puVar44 = *(byte *)puVar44 + bVar5 + CARRY1((byte)pbVar9,bVar4);
    piVar17 = (int *)CONCAT31(uVar21,bVar5);
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                              CONCAT11(bVar4 + bVar34,(byte)pbVar9 + bVar4));
    puVar31 = (uint *)CONCAT22(uVar30,CONCAT11(bVar29 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,
                                                  CONCAT11(bVar29,bVar41)) >> 8),bVar27) + 0x76),
                                               bVar27));
    puStack_6c._0_2_ = puStack_78._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar12 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar44);
    cVar6 = (char)puVar44;
    *pbVar9 = *pbVar9 + cVar6;
    uVar23 = (undefined2)((uint)puVar31 >> 0x10);
    cVar36 = (char)puVar31;
    cVar42 = (char)((uint)puVar31 >> 8) + *(byte *)((int)puVar31 + 0x75);
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar20 = (char)pcVar12 + 'o';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar20);
    *pcVar12 = *pcVar12 + cVar20;
    cVar40 = (char)((uint)puVar44 >> 8);
    *pbVar47 = *pbVar47 - cVar40;
    pbVar9[1] = pbVar9[1] + cVar6;
    pcVar12 = pcVar12 + -0x757b021b;
    cVar20 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar20;
    uVar21 = (undefined3)((uint)pcVar12 >> 8);
    cVar7 = cVar20 + 'o';
    pcVar12 = (char *)CONCAT31(uVar21,cVar7);
    pbVar32 = pbVar9 + 2;
    *pcVar12 = *pcVar12 + cVar7;
    iVar16 = CONCAT22(uVar23,CONCAT11(cVar42 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar42,cVar36)) +
                                                        0x76),cVar36));
    *pcVar12 = *pcVar12 + cVar7;
    pcVar12 = (char *)CONCAT31(uVar21,cVar20 + -0x22);
    puVar48 = (uint *)((int)puVar25 + 1);
    *(byte *)puVar25 = (byte)*puVar19;
    *pcVar12 = *pcVar12 + cVar20 + -0x22;
    *(byte *)((int)puVar44 + (int)pcVar12) =
         *(byte *)((int)puVar44 + (int)pcVar12) - (char)((uint)pbVar32 >> 8);
    *pbVar32 = *pbVar32 + cVar6;
    bVar5 = cVar40 - pbVar9[4];
    pbVar11 = (byte *)((int)puVar19 + 5);
    out(*(undefined4 *)((int)puVar19 + 1),(short)pbVar32);
    puVar25 = (uint *)((uint)(pcVar12 + *(int *)(pcVar12 + iVar16)) ^ 0x280a0001);
    *(byte *)puVar25 = (byte)*puVar25 << 1 | (char)(byte)*puVar25 < '\0';
    *pbVar11 = *pbVar11 + (char)puVar25;
    pbVar11 = pbVar11 + *(int *)(pbVar9 + -0x5c);
    pbVar9 = (byte *)((uint)puVar25 | *puVar25);
    *pbVar11 = *pbVar11 + (char)pbVar9;
    puVar31 = (uint *)CONCAT31((int3)((uint)iVar16 >> 8),cVar36 - (char)pbVar32);
    bVar4 = *pbVar9;
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar5 + *pbVar9,cVar6));
    iVar16 = *(int *)pbVar9;
    *pbVar32 = *pbVar32 + cVar6;
    cVar20 = (char)(pbVar9 + (uint)CARRY1(bVar5,bVar4) + iVar16) + 'r';
    puVar25 = (uint *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar5,bVar4) + iVar16) >> 8),
                               cVar20);
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),CONCAT11(10,(char)pbVar32));
    *(char *)(puVar25 + 10) = (char)puVar25[10] + '\n';
    *pbVar11 = *pbVar11 + cVar20;
    puVar19 = (uint *)(pbVar11 + *(int *)(pbVar9 + -0x5e));
    uVar38 = *puVar25;
    cVar20 = (char)((uint)puVar25 | uVar38);
    *(byte *)puVar19 = (byte)*puVar19 + cVar20;
    uVar21 = (undefined3)(((uint)puVar25 | uVar38) >> 8);
    cVar7 = cVar20 + (byte)*puVar31;
    puVar25 = (uint *)CONCAT31(uVar21,cVar7);
    if (SCARRY1(cVar20,(byte)*puVar31) == cVar7 < '\0') goto code_r0x00405090;
    *(byte *)puVar25 = (byte)*puVar25 + cVar7;
    piVar17 = (int *)CONCAT31(uVar21,cVar7 + '\x02');
    puVar25 = puVar48;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar9) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar21 = (undefined3)((uint)piVar17 >> 8);
  cVar20 = (char)piVar17 + '}';
  pbVar11 = (byte *)CONCAT31(uVar21,cVar20);
  pbVar9[(int)pbVar11] = pbVar9[(int)pbVar11] + cVar20;
  pbVar9[0x280a0000] = pbVar9[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar4 = (byte)puVar44 & 7;
  *pbVar11 = *pbVar11 << bVar4 | *pbVar11 >> 8 - bVar4;
  *(byte *)puVar19 = (byte)*puVar19 + cVar20;
  cVar6 = (char)puVar31 - (byte)*puVar19;
  uVar23 = (undefined2)((uint)puVar31 >> 0x10);
  cVar40 = (char)((uint)puVar31 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar31 >> 8),cVar6) + 0x7c)
  ;
  pcVar12 = (char *)CONCAT22(uVar23,CONCAT11(cVar40,cVar6));
  *pbVar11 = *pbVar11 + cVar20;
  bVar5 = (char)piVar17 + 0xa7U & *pbVar9;
  puVar48 = (uint *)((int)puVar25 + *(int *)(pbVar47 + 0x7c));
  *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
  bVar5 = bVar5 + 0x2a;
  pbVar11 = (byte *)CONCAT31(uVar21,bVar5);
  *pbVar11 = *pbVar11 + bVar5;
  *pcVar12 = *pcVar12 + cVar6;
  *pbVar9 = *pbVar9 ^ bVar5;
  *pcVar12 = *pcVar12 + bVar5;
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar5;
  cVar20 = (bVar5 - *pbVar11) - CARRY1(bVar4,bVar5);
  *(byte *)puVar44 = (byte)*puVar44 + (byte)pbVar9;
  cVar40 = cVar40 + pcVar12[0x7b];
  *(char *)CONCAT31(uVar21,cVar20) = *(char *)CONCAT31(uVar21,cVar20) + cVar20;
  pcVar12 = (char *)CONCAT31(uVar21,cVar20 + 'o');
  *pcVar12 = *pcVar12 + cVar20 + 'o';
  pcVar12 = pcVar12 + 0x2ed7fde6;
  cVar7 = (char)pcVar12;
  *pcVar12 = *pcVar12 + cVar7;
  cVar20 = *(char *)(CONCAT22(uVar23,CONCAT11(cVar40,cVar6)) + 0x7b);
  *pcVar12 = *pcVar12 + cVar7;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar12 >> 8),cVar7 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar22 = (undefined3)((uint)pbVar9 >> 8);
  bVar5 = (byte)pbVar9 | (byte)*puVar19;
  pbVar32 = (byte *)CONCAT31(uVar22,bVar5);
  uVar38 = CONCAT22(uVar23,CONCAT11(cVar40 + cVar20,cVar6)) | (uint)puVar19;
  uVar21 = (undefined3)((uint)piVar17 >> 8);
  bVar4 = (byte)piVar17 | *pbVar32;
  pbVar11 = (byte *)CONCAT31(uVar21,bVar4);
  cVar20 = (byte)puVar44 - bVar5;
  puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),cVar20);
  *pbVar11 = *pbVar11 + bVar4;
  puVar25 = puVar19 + 1;
  out(*puVar19,(short)pbVar32);
  *pbVar11 = bVar4;
  *pbVar32 = *pbVar32 + cVar20;
  puVar19 = puVar19 + 2;
  out(*puVar25,(short)pbVar32);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  puVar31 = (uint *)(CONCAT31((int3)(uVar38 >> 8),(char)uVar38 - (char)((uint)pbVar9 >> 8)) |
                    (uint)puVar19);
  pbVar9 = (byte *)CONCAT31(uVar22,(bVar5 | (byte)*puVar19) + (byte)*puVar48);
  cVar20 = bVar4 - (byte)*puVar48;
  puVar25 = (uint *)CONCAT31(uVar21,cVar20 - *(char *)CONCAT31(uVar21,cVar20));
code_r0x00405090:
  *puVar25 = (uint)(pbVar9 + *puVar25);
  cVar20 = (char)puVar25;
  *(byte *)puVar25 = (byte)*puVar25 + cVar20;
  *(byte *)puVar25 = (byte)*puVar25 + cVar20;
  *(byte *)puVar25 = (byte)*puVar25 + cVar20;
  *puVar44 = *puVar44 - (int)pbVar47;
  uVar38 = *puVar19;
  bVar4 = (byte)pbVar9;
  *(byte *)puVar19 = (byte)*puVar19 + bVar4;
  *(byte *)puVar25 = (byte)*puVar25 + cVar20 + CARRY1((byte)uVar38,bVar4);
  *(byte *)puVar44 = (byte)*puVar44 + cVar20;
  uVar38 = *puVar31;
  *(byte *)puVar31 = (byte)*puVar31 + 0x72;
  *(byte *)puVar31 = (byte)*puVar31;
  cVar20 = (char)((uint)pbVar9 >> 8);
  if (SCARRY1((byte)uVar38,'r')) {
    puVar19 = (uint *)((int)puVar19 + *(int *)(pbVar9 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar19 = (byte)*puVar19 + (char)puVar25;
      uVar21 = (undefined3)((uint)puVar25 >> 8);
      cVar7 = (char)puVar25 + (byte)*puVar31;
      pcVar12 = (char *)CONCAT31(uVar21,cVar7);
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                 CONCAT11((char)((uint)puVar31 >> 8) +
                                          *(byte *)((int)puVar31 + 0x7b),(char)puVar31));
      *pcVar12 = *pcVar12 + cVar7;
      in_AF = 9 < (cVar7 + 0x6fU & 0xf) | in_AF;
      uVar38 = CONCAT31(uVar21,cVar7 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar41 = (byte)uVar38;
      piVar17 = (int *)CONCAT22((short)(uVar38 >> 0x10),
                                CONCAT11((char)((uint)puVar25 >> 8) + in_AF,bVar41));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar21 = (undefined3)((uint)piVar17 >> 8);
      bVar41 = bVar41 | *(byte *)(piVar17 + 0x354a);
      bVar41 = bVar41 - *(char *)CONCAT31(uVar21,bVar41);
      pbVar11 = (byte *)CONCAT31(uVar21,bVar41);
      bVar5 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar41;
      puVar19 = (uint *)((int)puVar19 + (-(uint)CARRY1(bVar5,bVar41) - *(int *)pbVar11));
      puVar25 = (uint *)(pbVar11 + 0xfc00);
      *pbVar9 = *pbVar9 + cVar20;
      uVar38 = *puVar25;
      bVar5 = (byte)puVar25;
      *(byte *)puVar25 = (byte)*puVar25 + bVar5;
      uVar14 = (uint)CARRY1((byte)uVar38,bVar5);
      uVar1 = *puVar31;
      uVar38 = *puVar31;
      *puVar31 = (uint)((byte *)(uVar38 + (int)puVar25) + uVar14);
      if (!CARRY4(uVar1,(uint)puVar25) && !CARRY4(uVar38 + (int)puVar25,uVar14)) break;
      *(byte *)puVar25 = (byte)*puVar25 + bVar5;
    }
  }
  uVar38 = (uint)puVar25 | *puVar25;
  uVar23 = SUB42(pbVar9,0);
  *(byte *)puVar19 = (byte)*puVar19 + (char)uVar38;
  piVar17 = (int *)(uVar38 + 0xc1872);
  if (SCARRY4(uVar38,0xc1872)) {
    cVar7 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *pbVar9 = *pbVar9 + cVar7;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar44;
    *(char *)piVar17 = *(char *)piVar17 + cVar7;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar4;
    puVar25 = puVar19;
    goto code_r0x00405117;
  }
  do {
    uVar38 = *puVar19;
    bVar4 = (byte)piVar17;
    *(byte *)puVar19 = (byte)*puVar19 + bVar4;
    if (CARRY1((byte)uVar38,bVar4)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar21 = (undefined3)((uint)puVar44 >> 8);
      bVar5 = (byte)puVar44 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar44 = (uint *)CONCAT31(uVar21,bVar5 | *(byte *)CONCAT31(uVar21,bVar5));
      uVar21 = (undefined3)((uint)piVar17 >> 8);
      bVar4 = bVar4 | *pbVar9;
      pcVar12 = (char *)CONCAT31(uVar21,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar25 = puVar19 + 1;
        out(*puVar19,uVar23);
        uVar38 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar4);
        *(byte *)puVar25 = (byte)*puVar25 + bVar4;
        pcVar12 = (char *)(uVar38 | 8);
        cVar7 = (char)((uint)puVar31 >> 8) + *(byte *)((int)puVar31 + 0x7a);
        puVar39 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(cVar7,(char)puVar31));
        *pcVar12 = *pcVar12 + (char)pcVar12;
        cVar20 = (char)pcVar12 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar38 >> 8),cVar20);
        *(char *)piVar17 = (char)*piVar17 + cVar20;
        *(byte *)puVar44 = (byte)*puVar44 + 1;
        puVar19 = puVar19 + 2;
        out(*puVar25,uVar23);
        pbVar9 = (byte *)((uint)pbVar9 ^ uRam08122c04);
        iVar16 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar16 * 2) = *(char *)(iVar16 * 2) - cVar7;
        do {
          bVar4 = (byte)iVar16;
          *(byte *)puVar19 = (byte)*puVar19 + bVar4;
          bVar49 = CARRY1(bVar4,(byte)*puVar39);
          uVar21 = (undefined3)((uint)iVar16 >> 8);
          cVar20 = bVar4 + (byte)*puVar39;
          pbVar11 = (byte *)CONCAT31(uVar21,cVar20);
          uVar23 = in_DS;
          uVar30 = uStack_b8;
          if (SCARRY1(bVar4,(byte)*puVar39) == cVar20 < '\0') goto GenerateStatusText;
          *pbVar11 = *pbVar11 + cVar20;
          uVar38 = CONCAT31(uVar21,cVar20 + '\'') + 0x1ebd9f3;
          uStack_bc = (undefined1)puStack_6c._0_2_;
          uStack_bb = (undefined1)((ushort)puStack_6c._0_2_ >> 8);
          piVar17 = (int *)(uVar38 ^ 0x73060000);
          puVar44 = (uint *)((int)puVar44 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                                     CONCAT11((byte)((uint)puVar39 >> 8) | pbVar47[0x7e],
                                              (char)puVar39));
          cVar20 = (char)uVar38;
          *(char *)piVar17 = (char)*piVar17 + cVar20;
          uVar38 = CONCAT31((int3)((uint)piVar17 >> 8),cVar20 + '\x02');
          bVar49 = 0xd9f2d2da < uVar38;
          iVar16 = uVar38 + 0x260d2d25;
          pbVar32 = pbVar47;
          do {
            uVar21 = (undefined3)((uint)iVar16 >> 8);
            bVar5 = (char)iVar16 + -2 + bVar49;
            pbVar47 = (byte *)CONCAT31(uVar21,bVar5);
            bVar4 = *pbVar47;
            *pbVar47 = *pbVar47 + bVar5;
            bVar41 = (byte)puVar39;
            uStack_b8 = puStack_6c._0_2_;
            if (CARRY1(bVar4,bVar5)) {
              *pbVar47 = *pbVar47 + bVar5;
              puVar39 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),
                                         CONCAT11((byte)((uint)puVar39 >> 8) | pbVar32[0x7f],bVar41)
                                        );
              *pbVar47 = *pbVar47 + bVar5;
              pbVar11 = (byte *)CONCAT31(uVar21,bVar5 + 0x2a);
              *pbVar11 = *pbVar11 + bVar5 + 0x2a;
              *(byte *)puVar39 = (byte)*puVar39 + (char)pbVar9;
              uVar23 = in_DS;
              while( true ) {
                in_DS = uVar23;
                bVar5 = (byte)pbVar11;
                *pbVar9 = *pbVar9 ^ bVar5;
                *pbVar9 = *pbVar9 + (char)puVar39;
                *pbVar11 = *pbVar11 + bVar5;
                *(byte *)puVar39 = (byte)*puVar39 + (char)((uint)pbVar9 >> 8);
                bVar4 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar5;
                uVar38 = *puVar39;
                uVar1 = *puVar39;
                *puVar39 = (uint)(pbVar11 + uVar1 + CARRY1(bVar4,bVar5));
                uVar21 = (undefined3)((uint)pbVar11 >> 8);
                if (CARRY4(uVar38,(uint)pbVar11) ||
                    CARRY4((uint)(pbVar11 + uVar1),(uint)CARRY1(bVar4,bVar5))) break;
                *(byte *)puVar19 = (byte)*puVar19 + bVar5;
                pcVar12 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                           CONCAT11((char)((uint)puVar44 >> 8) + *pbVar11,
                                                    (char)puVar44));
                *(byte *)puVar19 = (byte)*puVar19 + bVar5;
                piVar17 = (int *)CONCAT31(uVar21,bVar5 | (byte)*puVar39);
                puVar44 = puVar19;
                while( true ) {
                  puVar19 = puVar44 + 1;
                  out(*puVar44,(short)pbVar9);
                  pbVar9 = pbVar9 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar41 = (byte)((uint)pcVar12 >> 8) | *pbVar9;
                  uVar21 = (undefined3)((uint)piVar17 >> 8);
                  bVar5 = (byte)piVar17 ^ *pbVar9;
                  pcVar24 = (char *)CONCAT31(uVar21,bVar5);
                  cRam282b0000 = cRam282b0000 - bVar41;
                  *pcVar24 = *pcVar24 + bVar5;
                  pbVar47 = pbVar32 + -*(int *)pbVar9;
                  uStack_bc = (undefined1)in_DS;
                  uStack_bb = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar48 + 0x17);
                  *pcVar24 = *pcVar24 + bVar5;
                  puVar44 = (uint *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                             CONCAT11(bVar41 + bVar4 | *pbVar9,(char)pcVar12));
                  *(byte *)puVar39 = (byte)*puVar39 + (char)puVar39;
                  *(byte *)((int)pcVar24 * 2) = *(byte *)((int)pcVar24 * 2) ^ bVar5;
                  in_AF = 9 < (bVar5 & 0xf) | in_AF;
                  bVar5 = bVar5 + in_AF * -6;
                  pbVar11 = (byte *)CONCAT31(uVar21,bVar5 + (0x9f < bVar5 | in_AF * (bVar5 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
                  *(char *)((int)pbVar11 * 2) =
                       *(char *)((int)pbVar11 * 2) + (char)((uint)pbVar9 >> 8);
                  bVar49 = CARRY1((byte)*puVar44,(byte)pbVar9);
                  *(byte *)puVar44 = (byte)*puVar44 + (byte)pbVar9;
                  uVar23 = in_DS;
                  uVar30 = puStack_6c._0_2_;
GenerateStatusText:
                  in_DS = uVar30;
                  pbVar32 = pbVar47;
                  uStack_b8 = in_DS;
                  if (!bVar49) break;
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  iVar16 = CONCAT31((int3)((uint)puVar44 >> 8),(byte)puVar44 | *pbVar9);
                  uVar23 = (undefined2)((uint)puVar39 >> 0x10);
                  cVar6 = (char)((uint)puVar39 >> 8) + *(byte *)((int)puVar39 + 0x7d);
                  *pbVar11 = *pbVar11 + (char)pbVar11;
                  *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)puVar44 >> 8);
                  iVar16 = iVar16 - *(int *)(&uRam0b0a0000 + iVar16);
                  cVar20 = *(char *)(CONCAT22(uVar23,CONCAT11(cVar6,(char)puVar39)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar19,(short)pbVar9);
                  pbVar9 = (byte *)CONCAT22(uStack_ba,CONCAT11(uStack_bb,uStack_bc));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar44 = puVar19 + 2;
                  out(puVar19[1],CONCAT11(uStack_bb,uStack_bc));
                  pbVar32 = pbVar47 + 1;
                  cVar7 = (char)iVar16;
                  pcVar12 = (char *)CONCAT22((short)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)iVar16 >> 8) |
                                                      *(byte *)((int)puVar48 + 0x46),cVar7));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_6c._0_2_ = CONCAT11(uStack_bb,uStack_bc);
                  uVar21 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar44,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar21,0x5f);
                  puVar48 = (uint *)((int)puVar48 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar39 = (uint *)CONCAT22(uVar23,CONCAT11(cVar6 + cVar20 | (byte)puVar19[-0x1e],
                                                             (char)puVar39));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar25 = (uint *)CONCAT31(uVar21,0x8c);
                  puVar44[(int)puVar48 * 2] = (uint)(pbVar9 + puVar44[(int)puVar48 * 2]);
                  uVar38 = *puVar44;
                  *(byte *)puVar44 = (byte)*puVar44 + 0x8c;
                  if ((byte)uVar38 < 0x74) {
                    *pbVar9 = *pbVar9 + cVar7;
                    *(byte *)puVar39 = (byte)*puVar39 >> 1;
                    *(char *)puVar25 = (char)*puVar25 + -0x74;
                    *puVar25 = (uint)(pbVar32 + *puVar25);
                    *puVar25 = *puVar25 << 1 | (uint)((int)*puVar25 < 0);
                    *pbVar9 = *pbVar9 + cVar7;
                    pbVar47[2] = pbVar47[2] - cVar7;
                    *pbVar9 = *pbVar9 + cVar7;
                    pbVar47 = (byte *)CONCAT31(uVar21,0x83);
                    puVar25 = puVar39;
                    goto code_r0x00405312;
                  }
                  *puVar25 = (uint)(*puVar25 + (int)puVar25);
                  piVar17 = (int *)(CONCAT31(uVar21,(byte)puVar25[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar25[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar44);
                }
              }
              *pbVar9 = *pbVar9 + bVar5;
              *(byte *)puVar39 = (byte)*puVar39 - (char)pbVar9;
              *pbVar11 = *pbVar11 + bVar5;
              pbVar47 = (byte *)CONCAT31(uVar21,bVar5 | (byte)*puVar39);
            }
            else {
              cVar20 = (char)puVar44;
              *pbVar9 = *pbVar9 + cVar20;
              *(byte **)pbVar47 = pbVar9 + *(int *)pbVar47;
              *pbVar47 = *pbVar47 + bVar5;
              bVar5 = bVar5 + *pbVar47;
              pbVar47 = (byte *)CONCAT31(uVar21,bVar5);
              if (-1 < (char)bVar5) {
                *(byte *)puVar39 = (byte)*puVar39 + bVar41;
                out(*puVar19,(short)pbVar9);
                pbVar9 = pbVar9 + 1;
                *pbVar47 = *pbVar47 + bVar5;
                puVar39 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),
                                           bVar41 | (byte)((uint)iVar16 >> 8));
                cVar7 = bVar5 - (byte)*puVar44;
                pcVar12 = (char *)CONCAT31(uVar21,cVar7);
                *pcVar12 = *pcVar12 + cVar7 + (bVar5 < (byte)*puVar44);
                *pbVar9 = *pbVar9 + cVar7;
                pcVar12 = (char *)((int)pcVar12 * 2 + 0x79);
                *pcVar12 = *pcVar12 + (char)((uint)pbVar9 >> 8);
                pbVar47 = (byte *)in((short)pbVar9);
                puVar19 = puVar19 + 1;
              }
              *(byte *)puVar19 = (byte)*puVar19 + cVar20;
              *pbVar47 = *pbVar47 + (char)pbVar47;
              *pbVar47 = *pbVar47 + (char)pbVar47;
              uStack_bc = (undefined1)in_DS;
              uStack_bb = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar47;
              bVar34 = (byte)((uint)puVar44 >> 8);
              bVar41 = bVar34 + *pbVar47;
              iVar16 = *(int *)pbVar47;
              *pbVar9 = *pbVar9 + cVar20;
              bVar5 = (char)(pbVar47 + (uint)CARRY1(bVar34,bVar4) + iVar16) - (byte)*puVar39;
              pbVar47 = (byte *)CONCAT31((int3)((uint)(pbVar47 + (uint)CARRY1(bVar34,bVar4) + iVar16
                                                      ) >> 8),bVar5);
              *(byte *)puVar39 = (byte)*puVar39 ^ bVar5;
              *pbVar32 = *pbVar32 + (char)puVar39;
              *pbVar47 = *pbVar47 + bVar5;
              *pbVar47 = *pbVar47 + bVar5;
              *pbVar47 = *pbVar47 + bVar5;
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11(bVar41 + *pbVar47,cVar20));
              pbVar47 = pbVar47 + (uint)CARRY1(bVar41,*pbVar47) + *(int *)pbVar47;
              *pbVar9 = *pbVar9 + cVar20;
              puVar19 = (uint *)((int)puVar19 + *(int *)(pbVar9 + 0x3e));
            }
            *(byte *)puVar19 = (byte)*puVar19 + (char)pbVar47;
            cVar20 = (char)pbVar47 + 'r';
            puVar19 = (uint *)((int)puVar19 + -1);
            uVar38 = CONCAT31((int3)((uint)pbVar47 >> 8),cVar20);
            *(byte *)puVar19 = *(byte *)puVar19 + cVar20;
            bVar49 = 0xfff38f8d < uVar38;
            iVar16 = uVar38 + 0xc7072;
            pbVar47 = pbVar32;
          } while (SCARRY4(uVar38,0xc7072));
        } while( true );
      }
      *pcVar12 = *pcVar12 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar11 = (byte *)CONCAT31(uVar21,bVar4);
      bVar5 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar4;
      uVar21 = (undefined3)
               ((uint)(pbVar11 + (uint)CARRY1(bVar5,bVar4) + *(int *)((int)puVar44 + (int)pbVar9))
               >> 8);
      cVar7 = (char)(pbVar11 + (uint)CARRY1(bVar5,bVar4) + *(int *)((int)puVar44 + (int)pbVar9)) +
              'E';
      pcVar12 = (char *)CONCAT31(uVar21,cVar7);
      *pcVar12 = *pcVar12 + cVar7;
      cVar7 = cVar7 + *pcVar12;
      pcVar12 = (char *)CONCAT31(uVar21,cVar7);
      *pcVar12 = *pcVar12 + cVar7;
      puVar25 = (uint *)CONCAT31(uVar21,cVar7 + *pcVar12);
      *(char *)puVar25 = (char)*puVar25 + cVar7 + *pcVar12;
      pbVar11 = (byte *)((uint)puVar25 | *puVar25);
      bVar4 = *pbVar11;
      bVar5 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar5;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5 + CARRY1(bVar4,bVar5));
      puVar25 = puVar19;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar31 = (uint *)((int)puVar31 - *puVar31);
      puVar19 = puVar25 + 1;
      out(*puVar25,uVar23);
    }
    *pbVar9 = *pbVar9 + (char)puVar44;
    bVar49 = puVar31 < (uint *)*piVar17;
    puVar31 = (uint *)((int)puVar31 - *piVar17);
    bVar4 = (byte)((uint)puVar44 >> 8);
    *(byte *)((int)puVar48 + 0x39) = (*(byte *)((int)puVar48 + 0x39) - bVar4) - bVar49;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar38 = *puVar31;
    *(int *)((int)puVar48 + 0x39) = *(int *)((int)puVar48 + 0x39) - (int)pbVar47;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar38 | (byte)*puVar31,(char)puVar44));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar20;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar4 = (char)piVar17 + 0x28;
  pbVar47 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar4);
  *pbVar47 = *pbVar47 ^ bVar4;
  *(byte *)puVar39 = (byte)*puVar39 + (char)((uint)pcVar12 >> 8);
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + (byte)pcVar12;
  piVar17 = (int *)(((uint)pbVar47 | 0x1496f09) + *puVar48 + (uint)CARRY1(bVar4,(byte)pcVar12));
  puVar19 = puVar44 + 1;
  out(*puVar44,(short)pbVar9);
  pbVar11 = pbVar9 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 | (byte)*puVar39);
  cVar20 = (char)piVar17 + '\x13';
  pbVar47 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar20);
  puVar25 = puVar39;
  puVar44 = puVar19;
  if ((POPCOUNT(cVar20) & 1U) != 0) {
    *pbVar9 = *pbVar9 - (char)((uint)pbVar11 >> 8);
    *pbVar47 = *pbVar47 + cVar20;
code_r0x00405396:
    bVar4 = *pbVar47;
    bVar5 = (byte)pbVar47;
    *pbVar47 = *pbVar47 + bVar5;
    *puVar19 = (uint)(pbVar47 + (uint)CARRY1(bVar4,bVar5) + *puVar19);
    out(*puVar19,(short)pbVar9);
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar47 >> 0x10),
                               CONCAT11((byte)((uint)pbVar47 >> 8) | (byte)puVar19[1],bVar5));
    *(char **)((int)puVar48 + -1) = pcVar12 + *(int *)((int)puVar48 + -1);
    out(puVar19[1],(short)pbVar9);
    *pcVar12 = *pcVar12 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar47 = *pbVar47 + (char)pbVar47;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar47 >> 8),(char)pbVar47 + 'o');
  puVar39 = (uint *)((int)puVar25 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar21 = (undefined3)((uint)pbVar9 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar41 = (byte)pbVar9 | *(byte *)puVar39 | *(byte *)puVar39;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar44,(short)CONCAT31(uVar21,bVar41));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar41 = bVar41 | (byte)piVar17;
  iVar33 = CONCAT31(uVar21,bVar41);
  pbVar9 = (byte *)((int)piVar17 - *piVar17);
  cVar20 = (char)pbVar9;
  *pcVar12 = *pcVar12 + cVar20;
  cVar7 = (char)pcVar12 - bVar41;
  *pbVar9 = *pbVar9 + cVar20;
  uVar23 = (undefined2)((uint)pcVar12 >> 0x10);
  bVar5 = (byte)((uint)pcVar12 >> 8) | *pbVar9;
  pbVar32 = pbVar32 + -1;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  bVar4 = *(byte *)(CONCAT22(uVar23,CONCAT11(bVar5,cVar7)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar9;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar32;
  *pbVar9 = *pbVar9 + cVar20;
  bVar4 = bVar5 | bVar4 | *(byte *)puVar39;
  iVar26 = CONCAT22(uVar23,CONCAT11(bVar4,cVar7));
  pbVar11 = (byte *)((uint)(puVar44 + 1) ^ *(uint *)(iVar33 + -0x43));
  iVar16 = *(int *)pbVar9;
  *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
  if (SCARRY4(iVar16,(int)pbVar9)) {
    *pbVar9 = *pbVar9 + cVar20;
  }
  pbVar47 = pbVar9 + 0x5674;
  puVar48 = (uint *)((int)puVar48 +
                    (-(uint)((byte *)0xffffa98b < pbVar9) - *(int *)(pbVar11 + -0x7f)));
  bVar5 = (byte)pbVar47;
  *pbVar47 = *pbVar47 + bVar5;
  uVar22 = (undefined3)((uint)pbVar47 >> 8);
  bVar34 = bVar5 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar22,bVar34);
  *(uint *)(pbVar11 + (int)puVar48 * 8) =
       *(int *)(pbVar11 + (int)puVar48 * 8) + iVar33 + (uint)(0xd2 < bVar5);
  bVar5 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar34;
  if (!CARRY1(bVar5,bVar34)) {
    do {
      pbVar47 = (byte *)(iVar33 + 1);
      bVar5 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      bVar41 = (byte)((uint)piVar17 >> 8);
      bVar34 = (byte)puVar39 | bVar41;
      puVar44 = (uint *)CONCAT31((int3)((uint)puVar39 >> 8),bVar34);
      out(*(undefined4 *)pbVar11,(short)pbVar47);
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      uVar23 = (undefined2)((uint)iVar26 >> 0x10);
      cVar20 = (char)iVar26;
      pbVar9 = (byte *)CONCAT22(uVar23,CONCAT11((byte)((uint)iVar26 >> 8) | *pbVar47,cVar20));
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      *(byte *)piVar17 = (char)*piVar17 + bVar5 + CARRY1(bVar4,bVar5);
      *pbVar47 = *pbVar47 + bVar5;
      *(byte *)puVar48 = (byte)*puVar48 + bVar41;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar23,CONCAT11(0x1c,cVar20));
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      cVar7 = (char)pbVar47;
      *(byte *)puVar44 = (byte)*puVar44 + cVar7;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar5;
      *(byte *)piVar17 = (char)*piVar17 + bVar5;
      pbVar9 = pbVar11 + 8;
      out(*(undefined4 *)(pbVar11 + 4),(short)pbVar47);
      piVar17 = &uRam0a0a0000;
      *pbVar47 = *pbVar47;
      bVar5 = cVar20 - cVar7;
      iVar26 = CONCAT22(uVar23,CONCAT11((byte)puVar48[0x14] | 0x1c | bRam0ca87216,bVar5));
      *pbVar47 = *pbVar47;
      bVar4 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar5;
      if (!CARRY1(bVar4,bVar5)) {
        piVar17 = &uRam1e7b7000;
        bVar4 = (byte)((uint)puVar39 >> 8) | *(byte *)(iVar33 + 3);
        puVar44 = (uint *)CONCAT22((short)((uint)puVar39 >> 0x10),CONCAT11(bVar4,bVar34));
        if (bVar4 != 0) {
          pbVar47 = (byte *)CONCAT31((int3)((uint)pbVar47 >> 8),cVar7 + pbVar9[(int)puVar48 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar26 = iVar26 + 1;
        }
      }
      *piVar17 = *piVar17 + (int)piVar17;
      iVar33 = CONCAT31((int3)((uint)pbVar47 >> 8),(byte)pbVar47 | pbVar9[(int)puVar48 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar48 = (uint)((int)piVar17 + *puVar48 + 1);
      pbVar11 = pbVar11 + 0xc;
      out(*(undefined4 *)pbVar9,(short)iVar33);
      puVar39 = puVar44;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar34 = bVar34 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar22,bVar34);
  if ('\0' < (char)bVar34) {
    *(byte *)piVar17 = (char)*piVar17 + bVar34;
    puVar44 = (uint *)CONCAT31(uVar22,bVar34 + 0x28);
    *puVar44 = *puVar44 ^ (uint)puVar44;
    *(byte *)puVar39 = *(byte *)puVar39 + bVar4;
    cVar20 = (bVar34 + 0x28) - bVar4;
    pcVar12 = (char *)CONCAT31(uVar22,cVar20);
    *pcVar12 = *pcVar12 + cVar20;
    pbVar9 = (byte *)CONCAT31(uVar21,bVar41 | *(byte *)puVar39);
    pcVar24 = (char *)CONCAT22((short)((uint)puVar39 >> 0x10),
                               CONCAT11((char)((uint)puVar39 >> 8) + *(byte *)((int)puVar25 + 0x7d),
                                        (char)puVar39));
    *pcVar12 = *pcVar12 + cVar20;
    pbVar47 = (byte *)CONCAT31(uVar22,cVar20 + 0x39U ^ *(byte *)CONCAT31(uVar22,cVar20 + 0x39U));
    *pcVar24 = *pcVar24 + bVar4;
    puVar19 = (uint *)(pbVar11 + 4);
    out(*(undefined4 *)pbVar11,(short)pbVar9);
    goto code_r0x00405396;
  }
  puVar44 = (uint *)(pbVar11 + 4);
  out(*(undefined4 *)pbVar11,(short)iVar33);
  pcVar12 = (char *)(iVar26 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar9 = (byte *)CONCAT31(uVar21,bVar41 | *(byte *)puVar39);
  goto code_r0x004052ee;
}


