/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040461f
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(undefined4 aquirer, uint * param_2, undefined4 param_3, char * param_4)
 * Local Vars  : puStack_40, pcStack_44, iStack_38, puStack_3c, uStack_30, pcStack_34, uStack_28, uStack_2c, uStack_20, uStack_24, uStack_18, uStack_1c, puStack_10, uStack_14, uStack_8, uStack_c, uVar1, pcStack_4, uVar3, uVar2, bVar5, bVar4, cVar7, cVar6, in_EAX, uVar8, pcVar10, pbVar9, puVar12, pcVar11, aquirer, puVar14, uVar13, piVar16, iVar15, puVar18, puVar17, uVar20, uVar19, puVar22, pcVar21, bVar24, iVar23, uVar26, uVar25, uVar28, bVar27, pbVar30, puVar29, cVar32, iVar31, uVar34, bVar33, unaff_EBX, cVar35, uVar37, pbVar36, cVar39, puVar38, cVar41, bVar40, puVar43, ppbVar42, ppbVar45, ppbVar44, pbVar46, unaff_ESI, unaff_EDI, pbVar47, in_ES, puVar48, in_SS, in_CS, bVar49, in_DS, uVar50, in_AF, param_2, param_3, param_4, uStack_b8, uStack_b6, uStack_b7, uStack_78, uStack_b4, iStack_70, puStack_74, puStack_68, pbStack_6c, puStack_60, uStack_64, pbStack_58, puStack_5c, pbStack_50, puStack_54, puStack_48, pbStack_4c
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404654) */
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

int __fastcall _ctor(undefined4 aquirer,uint *param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  byte *in_EAX;
  byte *pbVar9;
  undefined3 uVar19;
  char *pcVar10;
  char *pcVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  uint *puVar18;
  undefined3 uVar20;
  byte bVar24;
  char *pcVar21;
  uint *puVar22;
  undefined2 uVar25;
  undefined2 uVar26;
  int iVar23;
  byte bVar27;
  char cVar32;
  byte bVar33;
  undefined2 uVar28;
  uint *puVar29;
  byte *pbVar30;
  int iVar31;
  undefined1 uVar34;
  char cVar35;
  char cVar39;
  uint *unaff_EBX;
  byte bVar40;
  byte *pbVar36;
  char cVar41;
  uint uVar37;
  uint *puVar38;
  byte **ppbVar42;
  uint *puVar43;
  byte **ppbVar44;
  byte **ppbVar45;
  int unaff_ESI;
  byte *pbVar46;
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
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_78;
  uint *puStack_74;
  int iStack_70;
  byte *pbStack_6c;
  uint *puStack_68;
  undefined2 uStack_64;
  uint *puStack_60;
  uint *puStack_5c;
  byte *pbStack_58;
  uint *puStack_54;
  byte *pbStack_50;
  byte *pbStack_4c;
  uint *puStack_48;
  char *pcStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  int iStack_38;
  char *pcStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined *puStack_10;
  undefined2 uStack_c;
  undefined2 uStack_8;
  char *pcStack_4;
  
                    /* .NET CLR Managed Code */
  bVar4 = (byte)((uint)aquirer >> 8);
  pcVar21 = (char *)CONCAT22((short)((uint)aquirer >> 0x10),CONCAT11(bVar4 + *in_EAX,(char)aquirer))
  ;
  pbVar9 = in_EAX + (uint)CARRY1(bVar4,*in_EAX) + *(int *)in_EAX;
  *(char *)param_2 = (char)*param_2 + (char)aquirer;
  pbVar46 = (byte *)(unaff_ESI + *(int *)((int)param_2 + -0x4a));
  uVar19 = (undefined3)((uint)pbVar9 >> 8);
  bVar4 = (byte)pbVar9 | *pbVar9;
  *pbVar46 = *pbVar46 + bVar4;
  bVar5 = bVar4 + (byte)*unaff_EBX;
  pcVar11 = (char *)CONCAT31(uVar19,bVar5);
  if (SCARRY1(bVar4,(byte)*unaff_EBX) == (char)bVar5 < '\0') {
    bVar4 = *pbVar46;
    *pbVar46 = *pbVar46 + bVar5;
    if (CARRY1(bVar4,bVar5)) goto code_r0x004046a4;
code_r0x00404710:
    pbVar9 = pbVar46 + 4;
    out(*(undefined4 *)pbVar46,(short)param_2);
    pcStack_4 = pcVar21;
    *pcVar11 = *pcVar11 + (byte)pcVar11;
    uStack_8 = in_ES;
    uStack_c = in_SS;
    *pcVar21 = *pcVar21 + '\x01';
    puStack_10 = (undefined *)CONCAT22(puStack_10._2_2_,in_SS);
    *pcVar21 = *pcVar21 + '\x01';
    bVar4 = (byte)pcVar11 | (byte)*param_2;
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4);
    pbVar46 = pbVar46 + 8;
    out(*(undefined4 *)pbVar9,(short)param_2);
    puVar48 = (uint *)((int)unaff_EDI + -1);
    *pcVar11 = *pcVar11 + bVar4;
    uStack_14 = in_ES;
    pbVar9 = (byte *)((int)((uint)pcVar11 | *puVar48) + *(int *)((uint)pcVar11 | *puVar48));
    *pbVar9 = *pbVar9 + (char)pbVar9;
    puVar43 = unaff_EBX;
  }
  else {
    *pcVar11 = *pcVar11 + bVar5;
    cVar6 = bVar5 + 0x2a;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    pcStack_4 = (char *)CONCAT22(pcStack_4._2_2_,in_DS);
    *pcVar11 = *pcVar11 + cVar6;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                               CONCAT11((char)((uint)pbVar9 >> 8) - pbVar46[3],cVar6));
    cVar32 = (char)unaff_EBX;
    cVar39 = (char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[0x1b];
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar39,cVar32));
    *pcVar11 = *pcVar11 + cVar6;
    *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar5 + 0x2e;
    in_CS = 0x2a06;
    puStack_10 = &UNK_0040465a;
    uVar50 = func_0x0000b828();
    param_2 = (uint *)((ulonglong)uVar50 >> 0x20);
    pbVar9 = (byte *)uVar50;
    bVar4 = *pbVar9;
    bVar5 = (byte)uVar50;
    *pbVar9 = *pbVar9 + bVar5;
    pbVar47 = pbVar46 + (uint)CARRY1(bVar4,bVar5) + *(int *)pbVar9;
    uVar19 = (undefined3)((ulonglong)uVar50 >> 8);
    *pbVar9 = *pbVar9 + bVar5;
    cVar7 = (char)((uint)param_4 >> 8);
    *param_4 = *param_4 + cVar7;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar5;
    *param_2 = (uint)(pbVar9 + (uint)CARRY1(bVar4,bVar5) + *param_2);
    bVar5 = bVar5 | *pbVar47;
    pcVar11 = (char *)CONCAT31(uVar19,bVar5);
    *pcVar11 = *pcVar11 + bVar5;
    cVar6 = bVar5 + *pcVar11;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    *pcVar11 = *pcVar11 + cVar6;
    *pcVar11 = *pcVar11 + cVar6;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar32;
    *pcVar11 = *pcVar11 + cVar6;
    *pcVar11 = *pcVar11 + cVar7;
    *pcVar11 = *pcVar11 + cVar6;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
    pcVar11 = (char *)(CONCAT31(uVar19,cVar6) ^ 3);
    param_4[0x73060000] = param_4[0x73060000] - cVar39;
    pbVar9 = (byte *)((int)unaff_EDI + 1);
    *(byte *)unaff_EDI = (byte)pcVar11;
    *pcVar11 = *pcVar11 + (byte)pcVar11;
    pbVar46 = pbVar47 + 1;
    bVar4 = *pbVar47;
    *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4;
    pcVar11 = (char *)CONCAT31(uVar19,(bVar4 - (byte)*unaff_EBX) + '(');
    unaff_EDI = (uint *)((int)unaff_EDI + 2);
    bVar4 = in((short)((ulonglong)uVar50 >> 0x20));
    *pbVar9 = bVar4;
code_r0x004046a4:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    uStack_14 = in_ES;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    bVar4 = (char)pcVar11 - (byte)*unaff_EBX;
    bVar5 = bVar4 + 0x28;
    pbVar9 = (byte *)CONCAT31(uVar19,bVar5);
    pcVar21 = &cRam14060000;
    puVar43 = unaff_EBX;
    puVar48 = unaff_EDI;
    if (0xd7 < bVar4) {
      *pbVar9 = *pbVar9 + bVar5;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((char)((uint)param_2 >> 8) -
                                          *(byte *)((int)param_2 + -0x3a),(char)param_2));
      bVar4 = (bVar5 | *pbVar9) + cRam14060000;
      pcVar11 = (char *)CONCAT31(uVar19,bVar4);
      uVar37 = *param_2;
      *(byte *)param_2 = (byte)*param_2;
      if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
        pcVar21 = &cRam14060000;
        if ((byte)*param_2 == 0 || SCARRY1((byte)uVar37,'\0') != (char)(byte)*param_2 < '\0')
        goto code_r0x0040475f;
        *pcVar11 = *pcVar11 + bVar4;
        piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x2d);
        *(byte **)(pbVar46 + (int)unaff_EDI * 8) =
             (byte *)((int)param_2 + (uint)(0xd2 < bVar4) + *(int *)(pbVar46 + (int)unaff_EDI * 8));
        uStack_30 = in_ES;
        uRam7305fffc = in_CS;
        *piVar16 = *piVar16 + (int)piVar16;
        bVar4 = bVar4 + 0x2d | *(byte *)((int)piVar16 + 0x400006d);
        pcVar11 = (char *)CONCAT31(uVar19,bVar4);
        if ((char)bVar4 < '\x01') goto code_r0x00404777;
        *pcVar11 = *pcVar11 + bVar4;
        pcVar11 = (char *)CONCAT31(uVar19,bVar4 + 0x10);
        *param_2 = (uint)(pcVar11 + *param_2);
      }
      goto code_r0x00404710;
    }
  }
  cVar6 = (char)pbVar9 + *pbVar9;
  puVar22 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar6);
  *(char *)puVar22 = (char)*puVar22 + cVar6;
  *puVar22 = *puVar22 & (uint)puVar22;
  *(char *)puVar22 = (char)*puVar22 + cVar6;
  pbVar47 = (byte *)((int)puVar22 + 1);
  cVar6 = (char)pbVar47;
  *pbVar47 = *pbVar47 + cVar6;
  uVar37 = *puVar43;
  bVar4 = (byte)((uint)pcVar21 >> 8);
  *(byte *)puVar43 = (byte)*puVar43 + bVar4;
  pbVar9 = pbVar46;
  if (CARRY1((byte)uVar37,bVar4)) {
    pbVar9 = pbVar46 + 4;
    out(*(undefined4 *)pbVar46,(short)param_2);
    puVar48 = (uint *)((int)puVar48 + -1);
  }
  *pbVar47 = *pbVar47 + cVar6;
  uStack_18 = in_ES;
  puVar22 = (uint *)CONCAT22((short)((uint)pcVar21 >> 0x10),
                             CONCAT11(bVar4 + *(byte *)((int)puVar48 + 0x49),(char)pcVar21));
  *pbVar47 = *pbVar47 + cVar6;
  uStack_1c = in_ES;
  *(byte *)(puVar43 + 0x818000) = (byte)puVar43[0x818000] - (char)((uint)puVar43 >> 8);
  out(*(undefined4 *)pbVar9,(short)param_2);
  unaff_EBX = (uint *)((int)puVar43 + -1);
  *pbVar47 = *pbVar47 + cVar6;
  uStack_20 = in_ES;
  pbVar9 = pbVar9 + *(int *)((int)puVar43 + -0x7f) + 4;
  *pbVar47 = *pbVar47 + cVar6;
  do {
    uStack_28 = in_ES;
    cVar6 = (char)pbVar47 - (byte)*param_2;
    pcVar11 = (char *)CONCAT31((int3)((uint)pbVar47 >> 8),cVar6);
    pbVar46 = pbVar9 + 4;
    out(*(undefined4 *)pbVar9,(short)param_2);
    unaff_EDI = (uint *)((int)puVar48 + -1);
    *pcVar11 = *pcVar11 + cVar6;
    uStack_2c = in_ES;
    pcVar21 = (char *)CONCAT22((short)((uint)puVar22 >> 0x10),
                               CONCAT11((char)((uint)puVar22 >> 8) + (byte)puVar48[0x12],
                                        (char)puVar22));
code_r0x0040475f:
    cVar6 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar6;
    uStack_30 = in_ES;
    *(byte *)(unaff_EBX + 0x818000) = (byte)unaff_EBX[0x818000] - (char)((uint)unaff_EBX >> 8);
    out(*(undefined4 *)pbVar46,(short)param_2);
    pbVar9 = (byte *)((int)unaff_EBX + -1);
    *pcVar11 = *pcVar11 + cVar6;
    pcStack_34 = (char *)CONCAT22(pcStack_34._2_2_,in_ES);
    iStack_38 = CONCAT22(iStack_38._2_2_,in_ES);
    pbVar46 = pbVar46 + *(int *)((int)unaff_EBX + -0x71) + 4;
    *pcVar11 = *pcVar11 + cVar6;
    puStack_3c = (uint *)CONCAT22(puStack_3c._2_2_,in_ES);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                 CONCAT11((char)((uint)pbVar9 >> 8) - pbVar46[0x6e],(char)pbVar9));
    puVar48 = unaff_EDI;
code_r0x00404777:
    bVar4 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar4;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    puVar43 = (uint *)(pbVar46 + (int)puVar48 * 8);
    uVar37 = *puVar43;
    uVar1 = *puVar43;
    *puVar43 = (uint)((byte *)(uVar1 + (int)param_2) + (0xd2 < bVar4));
    puStack_40 = (uint *)CONCAT22(puStack_40._2_2_,in_ES);
    puVar43 = (uint *)0x73060000;
    cVar7 = bVar4 + 0x2e +
            (CARRY4(uVar37,(uint)param_2) || CARRY4(uVar1 + (int)param_2,(uint)(0xd2 < bVar4)));
    *(byte *)param_2 = (byte)*param_2 + (char)pcVar21;
    *pbVar46 = *pbVar46;
    cVar6 = cVar7 + '~';
    pcVar10 = (char *)CONCAT31(uVar19,cVar6);
    out(*pbVar46,(short)param_2);
    *pcVar10 = *pcVar10 + cVar6;
    cVar7 = cVar7 + -0x80;
    pcVar10 = (char *)CONCAT31(uVar19,cVar7);
    out(*(undefined4 *)(pbVar46 + 1),(short)param_2);
    puVar22 = (uint *)(pcVar21 + -1);
    *pcVar10 = *pcVar10 + cVar7;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,in_ES);
    *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)pcVar11 >> 8);
    *pcVar10 = *pcVar10 + cVar7;
    puStack_48 = (uint *)CONCAT22(puStack_48._2_2_,in_ES);
    *pcVar10 = *pcVar10 - (char)((uint)puVar22 >> 8);
    *pcVar10 = *pcVar10 + cVar7;
    pbStack_4c = (byte *)CONCAT22(pbStack_4c._2_2_,in_ES);
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_ES);
    pbVar9 = pbVar46 + *(int *)((int)unaff_EBX + 9) + 5;
    *pcVar10 = *pcVar10 + cVar7;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,in_ES);
    cVar6 = (char)param_2;
    cVar32 = (char)((uint)param_2 >> 8) - *(byte *)((int)unaff_EBX + -0x59);
    param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar32,cVar6));
    *pcVar10 = *pcVar10 + cVar7;
    uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
    uVar34 = SUB41(unaff_EBX,0);
    bVar40 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 0x36);
    unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(bVar40,uVar34));
    bVar5 = cVar7 + (byte)*unaff_EBX;
    pbVar47 = (byte *)CONCAT31(uVar19,bVar5);
    *(byte *)puVar48 = (byte)*puVar48 - cVar32;
    bVar4 = *pbVar47;
    *pbVar47 = *pbVar47 + bVar5;
    uStack_24 = in_ES;
  } while (!CARRY1(bVar4,bVar5));
  *pbVar47 = *pbVar47 + bVar5;
  bVar5 = bVar5 - *pbVar47;
  pbVar46 = (byte *)CONCAT31(uVar19,bVar5);
  *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
  *(byte *)param_2 = (byte)*param_2 ^ bVar5;
  pcVar21[0x2affffff] = pcVar21[0x2affffff] + bVar5;
  bVar4 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar5;
  *unaff_EBX = (uint)(pbVar46 + (uint)CARRY1(bVar4,bVar5) + *unaff_EBX);
  pbVar47 = pbVar46 + -0x32a1702;
  if (pbVar47 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar47;
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),(char)puVar22 + (byte)*param_2);
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_ES);
    pbVar46[-0xe0c891b] = pbVar46[-0xe0c891b] + cVar32;
    pbVar47 = pbVar46 + 0x19fd76e3;
    bVar4 = *pbVar47;
    *pbVar47 = *pbVar47 - bVar40;
    piVar16 = (int *)((uint)(pbVar46 + (bVar4 < bVar40) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar16 + 0x73) = *(char *)((int)piVar16 + 0x73) + cVar32;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar5 = bVar40 | *(byte *)((int)param_2 + 2);
    unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(bVar5,uVar34));
    cVar6 = (char)piVar16;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      *(char *)piVar16 = (char)*piVar16 + cVar6;
      uVar19 = (undefined3)((uint)(pbVar46 + (bVar4 < bVar40) + 0x63fd76e4) >> 8);
      cVar7 = cVar6 + '\x06';
      if ((POPCOUNT(cVar7) & 1U) == 0) {
        *(char *)CONCAT31(uVar19,cVar7) = *(char *)CONCAT31(uVar19,cVar7) + cVar7;
        pbVar47 = (byte *)CONCAT31(uVar19,cVar6 + '.');
        puVar22 = puVar18;
        uStack_64 = in_SS;
        goto code_r0x00404803;
      }
      cVar6 = cVar7 + (byte)*unaff_EBX;
      pcVar11 = (char *)CONCAT31(uVar19,cVar6);
      if (SCARRY1(cVar7,(byte)*unaff_EBX) == cVar6 < '\0') {
code_r0x004048e7:
        pcVar11 = (char *)((uint)pcVar11 | 8);
        in_SS = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)(param_2 + 0x1cc18000) = (byte)param_2[0x1cc18000] + cVar6;
code_r0x0040486e:
      pcVar11 = (char *)CONCAT31((int3)((uint)piVar16 >> 8),(byte)piVar16 & (byte)*param_2);
      puVar48 = (uint *)((int)puVar48 + CONCAT13(uRam73060077,iRam73060073._1_3_));
    }
    *pcVar11 = *pcVar11 + (char)pcVar11;
    pbVar46 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + '*');
    puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,in_DS);
    bVar4 = (byte)((uint)puVar18 >> 8);
    cVar6 = (char)puVar18;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar4 + *pbVar46,cVar6));
    pbVar46 = pbVar46 + (uint)CARRY1(bVar4,*pbVar46) + *(int *)pbVar46;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    bVar49 = (byte)pbVar46 < *pbVar46;
    pbVar46 = (byte *)CONCAT31((int3)((uint)pbVar46 >> 8),(byte)pbVar46 - *pbVar46);
code_r0x00404880:
    pbVar9 = pbVar9 + (uint)bVar49 + *(int *)pbVar46;
    uStack_64 = in_ES;
    while( true ) {
      bVar5 = (byte)pbVar46;
      pbVar46[0x2c000000] = pbVar46[0x2c000000] + bVar5;
      bVar4 = *pbVar46;
      *pbVar46 = *pbVar46 + bVar5;
      *param_2 = (uint)(pbVar46 + (uint)CARRY1(bVar4,bVar5) + *param_2);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)param_2;
      *pbVar46 = *pbVar46 + bVar5;
      puVar22 = (uint *)CONCAT31((int3)((uint)pbVar46 >> 8),bVar5 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar11 = (char *)((uint)puVar22 | *puVar22);
code_r0x00404899:
      cVar6 = (char)pcVar11;
      *pbVar9 = *pbVar9 + cVar6;
      uVar19 = (undefined3)((uint)pcVar11 >> 8);
      bVar4 = cVar6 + (byte)*unaff_EBX;
      pcVar11 = (char *)CONCAT31(uVar19,bVar4);
      bVar5 = (byte)((uint)puVar18 >> 8);
      uVar28 = (undefined2)((uint)puVar18 >> 0x10);
      cVar7 = (char)param_2;
      uVar26 = in_ES;
      if (SCARRY1(cVar6,(byte)*unaff_EBX) == (char)bVar4 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar7;
        *pcVar11 = *pcVar11 + bVar4;
        puVar18 = (uint *)CONCAT22(uVar28,CONCAT11(bVar5 | (byte)*param_2,(char)puVar18));
        param_2 = (uint *)((int)param_2 + 1);
        pcVar11 = pcVar11 + *param_2;
        if ((POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar11 = *pcVar11 + bVar4;
      bVar40 = bVar4 + 2;
      pcVar11 = (char *)CONCAT31(uVar19,bVar40);
      if (bVar4 < 0xfe) {
        *pbVar9 = *pbVar9 + bVar40;
        puVar22 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar11 = *pcVar11 + bVar40;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar7));
      cVar6 = *pcVar11;
      *pcVar11 = *pcVar11 + bVar40;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_ES);
      if (SCARRY1(cVar6,bVar40) == *pcVar11 < '\0') goto code_r0x00404927;
      *pcVar11 = *pcVar11 + bVar40;
      bVar4 = bVar4 + 4;
      pbVar46 = (byte *)CONCAT31(uVar19,bVar4);
      if (0xfd < bVar40) break;
      *pbVar46 = *pbVar46 + bVar4;
      puVar18 = (uint *)CONCAT22(uVar28,CONCAT11(bVar5 | (byte)*param_2,(char)puVar18));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
      *pbVar9 = *pbVar9 ^ bVar4;
    }
    *pbVar46 = *pbVar46 + bVar4;
    puStack_68 = (uint *)((uint)puStack_68 & 0xffff0000);
  }
  else {
    pbVar46[0x6fdbe8fe] = pbVar46[0x6fdbe8fe] + (char)pbVar47;
code_r0x00404803:
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    uVar20 = (undefined3)((uint)puVar22 >> 8);
    bVar5 = (byte)puVar22 | (byte)*unaff_EBX;
    puVar18 = (uint *)CONCAT31(uVar20,bVar5);
    uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar7 = (char)unaff_EBX;
    cVar39 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar39,cVar7));
    bVar4 = (byte)pbVar47;
    *pbVar47 = *pbVar47 + bVar4;
    bVar49 = 0xf9 < bVar4;
    uVar19 = (undefined3)((uint)pbVar47 >> 8);
    cVar6 = bVar4 + 6;
    pbVar46 = (byte *)CONCAT31(uVar19,cVar6);
    in_SS = uStack_64;
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00404880;
    *pbVar46 = *pbVar46 + cVar6;
    piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x2e);
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar5 = bVar5 | *(byte *)((int)param_2 + (int)piVar16);
    puVar18 = (uint *)CONCAT31(uVar20,bVar5);
    in_SS = puStack_60._0_2_;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      puVar22 = (uint *)((int)piVar16 + *piVar16);
      *(byte *)param_2 = (byte)*param_2 + bVar5;
      pbVar9 = pbVar9 + param_2[0xf];
      goto code_r0x00404895;
    }
    *(byte *)piVar16 = (char)*piVar16 + bVar4 + 0x2e;
    cVar6 = bVar4 + 0x34;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      pcVar11[0x28] = pcVar11[0x28] + cVar32;
      goto code_r0x00404899;
    }
    *pcVar11 = *pcVar11 + cVar6;
    piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x5c);
    *piVar16 = *piVar16 + (int)piVar16;
    cVar32 = (bVar5 | bRam07022c07) - (char)*piVar16;
    puVar18 = (uint *)CONCAT31(uVar20,cVar32);
    pcVar11 = (char *)CONCAT31(uVar19,bVar4 + 0x5a);
    bVar5 = (byte)((uint)puVar22 >> 8);
    *(byte *)param_2 = (byte)*param_2 | bVar5;
    *(uint *)((int)param_2 + (int)pcVar11) = *(uint *)((int)param_2 + (int)pcVar11) | 0x73060000;
    *param_2 = *param_2 | 0x73060000;
    cVar39 = cVar39 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar39,cVar7));
    *pcVar11 = *pcVar11 + bVar4 + 0x5a;
    cVar6 = bVar4 + 0x60;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *pcVar11 = *pcVar11 + cVar6;
      piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x88);
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      pbStack_58 = (byte *)CONCAT22(pbStack_58._2_2_,in_DS);
      puVar18 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),
                                 CONCAT11((bVar5 | (byte)*param_2) + (char)*piVar16,cVar32));
      *(char *)piVar16 = (char)*piVar16;
      cVar7 = cVar7 - *pbVar9;
      cVar39 = cVar39 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) + 0x73);
      *(byte *)piVar16 = (char)*piVar16 + bVar4 + 0x88;
      bVar4 = bVar4 + 0xb2 & (byte)*param_2;
      puVar48 = (uint *)((int)puVar48 + iRam73060073);
      *(char *)CONCAT31(uVar19,bVar4) = *(char *)CONCAT31(uVar19,bVar4) + bVar4;
      pcVar11 = (char *)CONCAT31(uVar19,bVar4 + 0x2a);
      unaff_EBX = (uint *)CONCAT22(uVar26,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar26,CONCAT11(
                                                  cVar39,cVar7)) + 0x74),cVar7));
      *pcVar11 = *pcVar11 + bVar4 + 0x2a;
      piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x54);
      in_SS = puStack_68._0_2_;
      goto code_r0x0040486e;
    }
    pbVar46 = (byte *)*(undefined6 *)pcVar11;
    *pbVar9 = *pbVar9 + (char)*(undefined6 *)pcVar11;
  }
  uVar19 = (undefined3)((uint)pbVar46 >> 8);
  bVar4 = (byte)pbVar46 | *pbVar9;
  pcVar11 = (char *)CONCAT31(uVar19,bVar4);
  *pcVar11 = *pcVar11 + bVar4;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar18);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar11 = *pcVar11 + bVar4;
  pcVar11 = (char *)CONCAT31(uVar19,bVar4 + 0x6f);
  *pcVar11 = *pcVar11 + bVar4 + 0x6f;
  pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar18;
  uRam00c16f07 = SUB41(pcVar11,0);
  in_SS = uStack_64;
code_r0x004048de:
  cVar6 = (char)pcVar11;
  *pbVar9 = *pbVar9 + cVar6;
  *pcVar11 = *pcVar11 + cVar6;
  *(byte **)(pcVar11 + (int)puVar18) = (byte *)(*(int *)(pcVar11 + (int)puVar18) + (int)puVar18);
  puStack_68 = (uint *)CONCAT22(puStack_68._2_2_,in_SS);
  bVar4 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar11 = *pcVar11 + cVar6;
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6 + 'o');
  pbVar9 = pbVar9 + 1;
  *pcVar11 = *pcVar11 + cVar6 + 'o';
  pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,in_SS);
  puVar22 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar4,(char)unaff_EBX));
  puVar43 = unaff_EBX;
  uVar26 = in_SS;
code_r0x004048f5:
  unaff_EBX = puVar22;
  pcVar11 = (char *)((int)((uint)pcVar11 & 0x7e26062d) - *(int *)((uint)pcVar11 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar18;
  do {
    uRam00c36f08 = SUB41(pcVar11,0);
    while( true ) {
      bVar4 = *pbVar9;
      cVar6 = (char)pcVar11;
      *pbVar9 = *pbVar9 + cVar6;
      iStack_70 = CONCAT22(iStack_70._2_2_,uVar26);
      if (SCARRY1(bVar4,cVar6) == (char)*pbVar9 < '\0') {
        pcVar11[(int)puVar43] = pcVar11[(int)puVar43] + cVar6;
        goto code_r0x00404982;
      }
      *pcVar11 = *pcVar11 + cVar6;
      pbVar46 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6 + '*');
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      bVar4 = (byte)((uint)puVar18 >> 8);
      cVar6 = (char)puVar18;
      bVar5 = bVar4 + *pbVar46;
      pbVar46 = pbVar46 + (uint)CARRY1(bVar4,*pbVar46) + *(int *)pbVar46;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      cVar7 = (char)unaff_EBX - *pbVar9;
      bVar4 = *pbVar46;
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar5 + *pbVar46,cVar6));
      iVar15 = *(int *)pbVar46;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      pcVar11 = (char *)CONCAT31((int3)((uint)(pbVar46 + (uint)CARRY1(bVar5,bVar4) + iVar15) >> 8),
                                 (char)(pbVar46 + (uint)CARRY1(bVar5,bVar4) + iVar15) -
                                 *(byte *)((int)param_2 + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) +
                                                     -0x3a),cVar7));
code_r0x00404921:
      bVar4 = (byte)pcVar11;
      *pcVar11 = *pcVar11 + bVar4;
      pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4 + 0x6f);
      *(byte *)puVar18 = ((byte)*puVar18 - (bVar4 + 0x6f)) - (0x90 < bVar4);
code_r0x00404927:
      *(byte *)param_2 = (byte)*param_2 + (char)puVar18;
      pbStack_6c = (byte *)CONCAT22(pbStack_6c._2_2_,in_SS);
      *(byte *)puVar18 = (byte)*puVar18 + 1;
      cVar6 = (char)((uint)puVar18 >> 8) - pbVar9[2];
      puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(cVar6,(char)puVar18));
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
      pcVar11 = pcVar11 + -0x1b7e2606;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar11 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar11));
    }
code_r0x00404931:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar6 = (char)pcVar11 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6);
    pbVar46 = pbVar9;
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  do {
    bVar4 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar4;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    piVar16 = (int *)CONCAT31(uVar19,bVar4 + 0x6f);
    *puVar18 = (*puVar18 - (int)piVar16) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar18;
    iVar15 = *(int *)((int)puVar48 + 0x1a);
    *piVar16 = *piVar16 + (int)piVar16;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar46);
    *(byte *)puVar18 = (byte)*puVar18 + 1;
    bVar4 = (bVar4 + 0x6f) - (char)*piVar16;
    pbVar9 = (byte *)CONCAT31(uVar19,bVar4);
    *pbVar9 = *pbVar9 + bVar4;
    pbVar46 = pbVar46 + *(int *)pbVar9;
    cVar6 = bVar4 + *pbVar9;
    puVar12 = (ushort *)CONCAT31(uVar19,cVar6);
    *puVar12 = *puVar12 + (ushort)CARRY1(bVar4,*pbVar9) * (((ushort)puVar12 & 3) - (*puVar12 & 3));
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
    puVar43 = (uint *)((int)puVar43 + iVar15);
code_r0x0040495b:
    cVar6 = (char)puVar12;
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    uVar19 = (undefined3)((uint)puVar12 >> 8);
    cVar7 = cVar6 + '\x02';
    pcVar11 = (char *)CONCAT31(uVar19,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)puVar43);
      pbVar9 = pbVar46 + 1;
      out(*pbVar46,(short)param_2);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar11 = *pcVar11 + cVar7;
    pbVar46 = (byte *)(CONCAT31(uVar19,cVar6 + '}') + (int)puVar43);
    *pbVar46 = *pbVar46 + cVar6 + '}';
    *pcStack_34 = *pcStack_34 + (char)pcStack_34;
    puVar18 = (uint *)CONCAT22((short)((uint)iStack_38 >> 0x10),
                               CONCAT11((byte)((uint)iStack_38 >> 8) | *(byte *)(iStack_38 * 3),
                                        (char)iStack_38));
    puVar48 = (uint *)(pbStack_50 + *(int *)((int)puStack_40 + 0x6f));
    pcVar11 = pcStack_34;
    param_2 = puStack_3c;
    unaff_EBX = puStack_40;
    puVar43 = puStack_48;
    pbVar46 = pbStack_4c;
    while( true ) {
      cVar6 = (char)pcVar11;
      *pcVar11 = *pcVar11 + cVar6;
      uVar19 = (undefined3)((uint)pcVar11 >> 8);
      cVar7 = cVar6 + '\x02';
      pcVar11 = (char *)CONCAT31(uVar19,cVar7);
      if ((POPCOUNT(cVar7) & 1U) != 0) break;
      *pcVar11 = *pcVar11 + cVar7;
      pcVar11 = (char *)CONCAT31(uVar19,cVar6 + '}');
      out(*(undefined4 *)pbVar46,(short)param_2);
      *pcVar11 = *pcVar11 + cVar6 + '}';
code_r0x00404982:
      puStack_5c = (uint *)CONCAT22(puStack_5c._2_2_,in_ES);
      *(byte *)puStack_54 = (byte)*puStack_54 + (char)in_ES;
      puVar18 = (uint *)CONCAT22((short)((uint)pbStack_58 >> 0x10),
                                 CONCAT11((byte)((uint)pbStack_58 >> 8) |
                                          pbStack_58[(int)pbStack_6c],(char)pbStack_58));
      puVar48 = (uint *)(iStack_70 + *(int *)((int)puStack_60 + 0x71));
      puVar43 = puStack_54;
      param_2 = puStack_5c;
      unaff_EBX = puStack_60;
      pbVar46 = pbStack_6c;
      while( true ) {
        cVar6 = (char)puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + cVar6;
        uVar19 = (undefined3)((uint)puVar43 >> 8);
        cVar7 = cVar6 + '\x02';
        puVar12 = (ushort *)CONCAT31(uVar19,cVar7);
        puVar43 = puStack_68;
        if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar12 = (char)*puVar12 + cVar7;
        bVar5 = cVar6 + 0x7d;
        iVar15 = CONCAT31(uVar19,bVar5);
        pbVar9 = (byte *)(iVar15 + (int)puStack_68);
        bVar4 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar5;
        uVar37 = *puVar18;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar18;
        pcVar11 = (char *)(((iVar15 - uVar37) - (uint)CARRY1(bVar4,bVar5)) + -0x727b0317);
        cVar6 = (char)pcVar11;
        *pcVar11 = *pcVar11 + cVar6;
        uVar19 = (undefined3)((uint)pcVar11 >> 8);
        cVar7 = cVar6 + '\x02';
        pcVar11 = (char *)CONCAT31(uVar19,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) break;
        *pcVar11 = *pcVar11 + cVar7;
        bVar5 = cVar6 + 0x7d;
        iVar15 = CONCAT31(uVar19,bVar5);
        pbVar9 = (byte *)(iVar15 + (int)puStack_68);
        bVar4 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar5;
        puVar43 = (uint *)((iVar15 - *puVar18) - (uint)CARRY1(bVar4,bVar5));
        puVar22 = param_2;
code_r0x004049b4:
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar18;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar22 >> 8),
                                   ((char)puVar22 - (byte)*puVar48) - *pbVar46);
        bVar5 = pbVar46[0x72];
        *puVar43 = *puVar43 & (uint)puVar18;
        pbVar9 = (byte *)((int)puVar43 + 2);
        *pbVar9 = *pbVar9 + (char)((uint)puVar22 >> 8);
        bVar4 = *pbVar9;
        puVar38 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar5);
        pbVar9 = pbVar46;
        while (unaff_EBX = puVar38, pbVar46 = pbVar9, (POPCOUNT(bVar4) & 1U) == 0) {
          cVar6 = (char)puVar43;
          *(byte *)puVar43 = (byte)*puVar43 + cVar6;
          uVar19 = (undefined3)((uint)puVar43 >> 8);
          cVar7 = cVar6 + '\x03';
          pbVar47 = (byte *)CONCAT31(uVar19,cVar7);
          pbVar46 = pbVar9 + 4;
          out(*(undefined4 *)pbVar9,(short)param_2);
          in_SS = pbStack_50._0_2_;
          *pbVar47 = *pbVar47 + cVar7;
          cVar32 = (char)puVar18;
          puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                     CONCAT11((byte)((uint)puVar18 >> 8) | *pbVar47,cVar32));
          *(int *)pbVar47 = *(int *)pbVar47 - (int)pbVar47;
          *(byte *)param_2 = (byte)*param_2 + cVar32;
          cVar32 = (char)puVar38 - pbVar9[6];
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),cVar32);
          if ((POPCOUNT(cVar32) & 1U) != 0) {
            pbVar9 = (byte *)((int)puVar48 + (int)puStack_68 * 2);
            *pbVar9 = *pbVar9 + cVar7;
            ppbVar45 = (byte **)puStack_68;
            goto code_r0x00404a51;
          }
          *pbVar47 = *pbVar47 + cVar7;
          puVar43 = (uint *)CONCAT31(uVar19,cVar6 + 'r');
          *(byte *)puVar43 = (byte)*puVar43;
          pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,uVar26);
          do {
            puVar48 = (uint *)((int)puVar48 + unaff_EBX[0x1c]);
            bVar4 = (byte)puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + bVar4;
            uVar19 = (undefined3)((uint)puVar43 >> 8);
            bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
            puVar43 = (uint *)CONCAT31(uVar19,bVar4);
            cVar6 = (char)puVar18;
            *(byte *)param_2 = (byte)*param_2 + cVar6;
            bVar5 = (char)((uint)puVar18 >> 8) - pbVar46[2];
            puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar5,cVar6));
            puVar22 = param_2;
            if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar43 = (byte)*puVar43 + bVar4;
            bVar40 = bVar4 + 2;
            puVar43 = (uint *)CONCAT31(uVar19,bVar40);
            ppbVar44 = (byte **)puStack_68;
            if ((POPCOUNT(bVar40) & 1U) == 0) goto code_r0x004049f5;
            pbVar46 = pbStack_50;
          } while (0xfd < bVar4);
          *(byte *)puVar43 = (byte)*puVar43 | bVar40;
          puVar38 = unaff_EBX;
          pbVar9 = pbStack_50;
          bVar4 = (byte)*puVar43;
        }
      }
    }
    *(byte *)param_2 = (byte)*param_2 + (char)puVar18;
    pbStack_50 = (byte *)CONCAT22(pbStack_50._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar4;
    uVar19 = (undefined3)((uint)puVar43 >> 8);
    bVar40 = bVar4 + 0x6f;
    pbVar47 = (byte *)CONCAT31(uVar19,bVar40);
    *puVar18 = (*puVar18 - (int)pbVar47) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    pbVar9 = (byte *)((int)ppbVar44 + *(int *)((int)puVar48 + 0x1a));
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    uVar20 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | *pbVar46;
    param_2 = (uint *)CONCAT31(uVar20,bVar4);
    *(byte *)puVar18 = (byte)*puVar18 + 1;
    cVar7 = bVar40 - *pbVar47;
    pbVar46 = pbVar46 + (-(uint)(bVar40 < *pbVar47) - *(int *)CONCAT31(uVar19,cVar7));
    uVar13 = CONCAT31(uVar19,cVar7 + *(char *)CONCAT31(uVar19,cVar7));
    bVar49 = CARRY1(bRam14110000,bVar5);
    bRam14110000 = bRam14110000 + bVar5;
    puVar43 = (uint *)((int)unaff_EBX + (int)pbVar46 * 2);
    uVar37 = *puVar43;
    uVar1 = uVar13 + *puVar43;
    puVar14 = (undefined4 *)(uVar1 + bVar49);
    uVar2 = GlobalDescriptorTableRegister();
    *puVar14 = uVar2;
    puStack_54 = (uint *)CONCAT22(puStack_54._2_2_,uVar26);
    uVar37 = (uint)(CARRY4(uVar13,uVar37) || CARRY4(uVar1,(uint)bVar49));
    puVar43 = (uint *)((int)puVar14 + uRam7d020511 + uVar37);
    ppbVar42 = &pbStack_58;
    ppbVar45 = &pbStack_58;
    ppbVar44 = &pbStack_58;
    pbStack_58 = pbVar9;
    cVar7 = '\x03';
    do {
      pbVar9 = pbVar9 + -4;
      ppbVar42 = ppbVar42 + -1;
      *ppbVar42 = (byte *)*(undefined4 *)pbVar9;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    pbStack_50 = (byte *)&pbStack_58;
    pbRam00c82802 =
         (byte *)((int)puVar43 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar14,uRam7d020511) ||
                      CARRY4((int)puVar14 + uRam7d020511,uVar37))));
    bVar40 = *pbVar46;
    cVar7 = (char)puVar43;
    *pbVar46 = *pbVar46 + cVar7;
  } while (SCARRY1(bVar40,cVar7) == (char)*pbVar46 < '\0');
  *(byte *)puVar43 = (byte)*puVar43 + cVar7;
  iVar15 = CONCAT31((int3)((uint)puVar43 >> 8),cVar7 + '\x11') + 0xc57b;
  bVar5 = (byte)iVar15;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar20,bVar4 + (byte)*puVar18);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar5 + 0x6f) - (uint)(0x90 < bVar5)) + -0x18093a86;
  cVar6 = (char)iVar15;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cVar7 = cVar6 + '\x02';
  pbVar9 = (byte *)CONCAT31(uVar19,cVar7);
  if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar9 = *pbVar9 + cVar7;
  pbVar47 = (byte *)CONCAT31(uVar19,cVar6 + 'q');
  ppbVar45 = &pbStack_58;
code_r0x00404a51:
  pbVar9 = pbVar47 + 1;
  cVar6 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar6;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) - cVar6,cVar32));
  *pbVar9 = *pbVar9 + cVar6;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar18);
  pbVar47 = pbVar47 + 0x757b03;
  pbVar9 = (byte *)((int)puVar48 + (int)ppbVar45 * 2);
  cVar6 = (char)pbVar47;
  *pbVar9 = *pbVar9 + cVar6;
  *pbVar47 = *pbVar47 + cVar6;
  *pbVar46 = *pbVar46 - (char)((uint)pbVar47 >> 8);
  *pbVar47 = *pbVar47 + cVar6;
  puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar45 + -0x3a));
  *pbVar47 = *pbVar47 + cVar6;
  pbVar9 = (byte *)(CONCAT31((int3)((uint)pbVar47 >> 8),cVar6 + '\x11') + 0x757b02);
  pbVar47 = (byte *)((int)puVar48 + (int)ppbVar45 * 2);
  bVar5 = (byte)pbVar9;
  *pbVar47 = *pbVar47 + bVar5;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uVar26);
  pbRam011006fe = pbVar9 + (int)(pbRam011006fe + CARRY1(bVar4,bVar5));
  bVar4 = *pbVar46;
  *pbVar46 = *pbVar46 + bVar5;
  if (!CARRY1(bVar4,bVar5)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    bVar40 = (byte)puVar18;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                               CONCAT11((byte)((uint)puVar18 >> 8) | *pbVar9,bVar40));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar19 = (undefined3)((uint)pbVar9 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar6 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar11 = (char *)CONCAT31(uVar19,cVar6);
    *pcVar11 = *pcVar11 + cVar6;
    puVar48 = (uint *)((int)puVar48 - *(int *)((int)ppbVar45 + -0x39));
    *pcVar11 = *pcVar11 + cVar6;
    iVar15 = CONCAT31(uVar19,cVar6 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar15;
    bVar5 = bVar4 + 0x6f;
    pbVar9 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar5);
    *puVar18 = (*puVar18 - (int)pbVar9) - (uint)(0x90 < bVar4);
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar40;
    pbRam011106fe = pbVar9 + (int)(pbRam011106fe + CARRY1((byte)uVar37,bVar40));
    bVar4 = *pbVar46;
    *pbVar46 = *pbVar46 + bVar5;
    if (!CARRY1(bVar4,bVar5)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
    bVar4 = (byte)puVar18;
    bVar5 = (byte)((uint)puVar18 >> 8) | *pbVar9;
    puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),CONCAT11(bVar5,bVar4));
    *pbVar9 = *pbVar9 - (char)pbVar9;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar5;
    out(*(undefined4 *)pbVar46,(short)param_2);
    *puVar18 = *puVar18 & (uint)pbVar9;
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar9 = pbVar9 + (uint)CARRY1((byte)uVar37,bVar4) + *(int *)(pbVar46 + 4);
    *pbVar9 = *pbVar9 + (char)pbVar9;
    *(byte *)puVar18 = (byte)*puVar18 + (char)param_2;
    pbVar46 = pbVar46 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar46,(short)param_2);
      pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 & (byte)*puVar18);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar18;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar9 = pbVar9 + *(int *)pbVar9;
      pbVar46 = pbVar46 + 4;
code_r0x00404ad4:
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uVar26);
      pbVar9 = (byte *)((uint)pbVar9 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar9;
code_r0x00404add:
      bVar4 = (byte)pbVar9;
      uVar19 = (undefined3)((uint)pbVar9 >> 8);
      cVar6 = bVar4 + 8;
      pbVar9 = (byte *)CONCAT31(uVar19,cVar6);
      if (SCARRY1(bVar4,'\b') == cVar6 < '\0') break;
      *pbVar9 = *pbVar9 + cVar6;
      cVar6 = bVar4 + 10;
      piVar16 = (int *)CONCAT31(uVar19,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        goto code_r0x00404b18;
      }
      *(char *)piVar16 = (char)*piVar16 + cVar6;
      puVar43 = (uint *)CONCAT31(uVar19,bVar4 + 0x7c);
      *puVar43 = *puVar43 & (uint)puVar18;
      *(char *)((int)puVar43 + 0x11) = *(char *)((int)puVar43 + 0x11) + (char)((uint)param_2 >> 8);
      cVar6 = (char)((int)puVar43 + 0xc67b);
      uVar19 = (undefined3)((uint)((int)puVar43 + 0xc67b) >> 8);
      bVar4 = cVar6 + 8;
      pbVar9 = (byte *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar9 = *pbVar9 + bVar4;
        cRam02060000 = cVar6 + 'w';
        puVar43 = (uint *)CONCAT31(uVar19,cRam02060000);
        *(byte *)puVar43 = (byte)*puVar43 + cRam02060000;
        cVar6 = (char)puVar18;
        puVar18 = (uint *)CONCAT22((short)((uint)puVar18 >> 0x10),
                                   CONCAT11((byte)((uint)puVar18 >> 8) | (byte)*puVar43,cVar6));
        *puVar43 = *puVar43 - (int)puVar43;
        *(byte *)param_2 = (byte)*param_2 + cVar6;
        pbVar9 = pbVar46 + 4;
        out(*(undefined4 *)pbVar46,(short)param_2);
        pbVar46 = pbVar9;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar11 = (char *)((uint)puVar43 | *puVar43);
        goto code_r0x00404b89;
      }
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar4;
      *(byte **)pbVar46 = pbVar9 + (uint)CARRY1(bVar5,bVar4) + *(int *)pbVar46;
    }
    *pbVar46 = *pbVar46 + 1;
    *puVar18 = (uint)(pbVar9 + (uint)(0xf7 < bVar4) + *puVar18);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 + 'r');
    piVar16 = (int *)((uint)puVar43 | *puVar43);
    param_2 = puStack_74;
code_r0x00404b18:
    bRam11060000 = (byte)piVar16;
    iVar15 = CONCAT31((int3)((uint)((int)piVar16 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar16 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar4 + 0x6f);
    *puVar18 = (*puVar18 - iVar15) - (uint)(0x90 < bVar4);
    cVar6 = (char)puVar18;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    bVar5 = (byte)((uint)unaff_EBX >> 8);
    bVar33 = (byte)((uint)param_2 >> 8) | bVar5;
    pcVar21 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar33,(byte)param_2));
    piVar16 = (int *)(iVar15 + 0x73060001);
    *(byte *)puVar18 = (byte)*puVar18 & (byte)piVar16;
    *pcVar21 = *pcVar21 + cVar6;
    bVar40 = (byte)((uint)puVar18 >> 8);
    *(byte *)piVar16 = *(char *)piVar16 - bVar40;
    *(byte *)piVar16 = *(char *)piVar16 + (byte)piVar16;
    iVar15 = *piVar16;
    *piVar16 = *piVar16 - (int)piVar16;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar40;
    pcVar11 = (char *)((uint)piVar16 | *puVar48);
    *pcVar21 = *pcVar21 - bVar40;
    bVar4 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar4;
    ppbVar45 = (byte **)(((int)ppbVar45 - iVar15) - *(int *)(pcVar11 + ((int)ppbVar45 - iVar15)));
    uVar28 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar24 = (byte)unaff_EBX;
    cVar7 = bVar5 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar47 = (byte *)CONCAT22(uVar28,CONCAT11(cVar7,bVar24));
    *pcVar11 = *pcVar11 + bVar4;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    uVar13 = CONCAT31(uVar19,bVar4 + 7);
    puVar43 = (uint *)((int)ppbVar45 + -0x1faeef1);
    uVar37 = *puVar43;
    uVar1 = *puVar43 + uVar13;
    *puVar43 = uVar1 + (0xf8 < bVar4);
    puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uVar26);
    puVar22 = puStack_74;
    bVar5 = bVar4 + 7 + (byte)*puVar18 +
            (CARRY4(uVar37,uVar13) || CARRY4(uVar1,(uint)(0xf8 < bVar4)));
    puVar43 = (uint *)CONCAT31(uVar19,bVar5);
    bVar4 = *pbVar46;
    *pbVar46 = *pbVar46 + bVar5;
    if (CARRY1(bVar4,bVar5)) break;
    *(byte *)puVar43 = (byte)*puVar43 + bVar5;
    unaff_EBX = (uint *)CONCAT22(uVar28,CONCAT11(cVar7 + pbVar47[0x76],bVar24));
    uStack_78 = uVar26;
  }
  *(byte *)puVar43 = (byte)*puVar43 + bVar5;
  uVar20 = (undefined3)((uint)pcVar21 >> 8);
  bVar27 = (byte)param_2 | *pbVar47;
  param_2 = (uint *)CONCAT31(uVar20,bVar27);
  pcRam2b060000 = (char *)CONCAT31(uVar19,bVar5 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar5 + 0x39)) - (0xd7 < (byte)(bVar5 + 0x11));
  bVar4 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar40;
  pbVar9 = pbVar46 + 4;
  out(*(undefined4 *)pbVar46,(short)param_2);
  bVar4 = (bVar5 + 0x37) - CARRY1(bVar4,bVar40);
  piVar16 = (int *)CONCAT31(uVar19,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    iVar15 = CONCAT31(uVar19,bVar4 + 0x11) + 0xc77b;
    pcVar11 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar11[0x28] = pcVar11[0x28] + bVar33;
code_r0x00404b89:
    cVar6 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar6;
    *pcVar11 = *pcVar11 + cVar6;
    *pcVar11 = *pcVar11 + cVar6;
    puVar12 = (ushort *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6 + 'r');
    uVar8 = (ushort)puVar12 | *puVar12;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar9,(short)param_2);
    *pcVar11 = *pcVar11 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar4;
  pbVar30 = (byte *)((int)ppbVar45 - *(int *)((int)puVar48 + 0x21));
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar11 = (char *)CONCAT31(uVar20,bVar27 | *pbVar47);
  puVar43 = (uint *)(pbVar46 + 8);
  out(*(undefined4 *)pbVar9,(short)pcVar11);
  uVar37 = *puVar18;
  *pcVar11 = *pcVar11 + cVar6;
  uVar37 = CONCAT31(uVar19,bVar4 & (byte)uVar37) | 0x767b02;
  *(byte *)((int)puVar18 + (int)pcVar11) = *(byte *)((int)puVar18 + (int)pcVar11) + (char)uVar37;
  iVar15 = uVar37 + 0xc67b;
  cVar39 = (char)iVar15;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cVar32 = cVar39 + 'r';
  pcVar11 = (char *)CONCAT31(uVar19,cVar32);
  pcVar11[0x28] = pcVar11[0x28] + bVar33;
  *pcVar11 = *pcVar11 + cVar32;
  uVar25 = (undefined2)((uint)puVar18 >> 0x10);
  bVar40 = bVar40 | *(byte *)((int)puStack_74 + -0x5e);
  puVar38 = (uint *)CONCAT22(uVar25,CONCAT11(bVar40,cVar6));
  *pcVar11 = *pcVar11 + cVar32;
  puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,uStack_78);
  pbVar9 = (byte *)CONCAT22(uVar28,CONCAT11(cVar7 + pbVar47[0x76],bVar24));
  *pcVar11 = *pcVar11 + cVar32;
  puVar48 = (uint *)CONCAT31(uVar19,cVar39 + -0x1c);
  pcVar11 = (char *)((uint)puVar48 | *puVar48);
  bVar49 = (POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar11;
  puVar48 = puStack_74;
  pbVar47 = pbVar9;
  pbVar36 = pbVar30;
  puVar18 = puVar22;
  uVar26 = uStack_78;
  if (!bVar49) goto code_r0x00404ca8;
  *pcVar11 = *pcVar11 + cRam02060000;
  puVar48 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cRam02060000 + 'r');
  *puVar48 = *puVar48 & (uint)puVar38;
  *(char *)((int)puVar48 + 0x11) = *(char *)((int)puVar48 + 0x11) + (char)((ushort)uStack_78 >> 8);
  iVar15 = (int)puVar48 + 0xc77b;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar47 = (byte *)CONCAT31(uVar19,cRam02060000);
  out(*puVar43,uStack_78);
  *pbVar47 = *pbVar47 + cRam02060000;
  puVar18 = (uint *)CONCAT22(uVar25,CONCAT11(bVar40 | *pbVar47,cVar6));
  *(int *)pbVar47 = *(int *)pbVar47 - (int)pbVar47;
  *(byte *)puStack_74 = (byte)*puStack_74 + cVar6;
  out(*(undefined4 *)(pbVar46 + 0xc),uStack_78);
  puVar29 = puStack_74;
  puVar43 = (uint *)(pbVar46 + 0x10);
  uVar26 = uStack_78;
  if ((POPCOUNT((byte)*puStack_74) & 1U) != 0) goto code_r0x00404cca;
  *pbVar47 = *pbVar47 + cRam02060000;
  puVar12 = (ushort *)CONCAT31(uVar19,(char)iVar15 + '{');
  uVar8 = (ushort)puVar12 | *puVar12;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar8);
  bVar4 = (byte)uVar8;
  out(*(uint *)(pbVar46 + 0x10),uStack_78);
  pbVar47 = (byte *)((int)puVar18 + 1);
  bRam11060000 = bVar4;
  *pcVar11 = *pcVar11 + bVar4;
  puVar38 = (uint *)CONCAT22((short)((uint)pbVar47 >> 0x10),
                             CONCAT11((byte)((uint)pbVar47 >> 8) | bRam110cde91,(char)pbVar47));
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4 - 7);
  *puVar22 = (uint)(pcVar11 + (uint)(bVar4 < 7) + *puVar22);
  puVar43 = (uint *)(pbVar46 + 0x18);
  out(*(undefined4 *)(pbVar46 + 0x14),uStack_78);
  puVar48 = (uint *)((int)puStack_74 + 1);
  *pcVar11 = *pcVar11 + (bVar4 - 7);
  pbVar47 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar24 | (byte)(uVar8 >> 8));
  do {
    bVar4 = (char)pcVar11 - *pcVar11;
    uVar37 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + bVar4;
    cVar6 = bVar4 - CARRY1((byte)uVar37,bVar4);
    *(byte *)puVar48 = *(byte *)puVar48 + cVar6;
    cVar7 = (char)((uint)puVar38 >> 8);
    *(byte *)(puVar22 + 0x673b40) = (byte)puVar22[0x673b40] + cVar7;
    puVar17 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6);
    *(byte *)puVar17 = (byte)*puVar17 + cVar6;
    *(byte *)puVar48 = *(byte *)puVar48 + cVar6;
    *(byte **)(pbVar47 + 0x58) = (byte *)(*(int *)(pbVar47 + 0x58) + (int)puVar43);
    puVar18 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar38 >> 0x10),
                                               CONCAT11(cVar7 + (char)((uint)pcVar11 >> 8),
                                                        (char)puVar38)) >> 8),
                               (char)puVar38 + *(char *)((int)puVar17 * 2));
    *(byte *)puVar17 = (byte)*puVar17 + cVar6;
    *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar47;
    puVar29 = puVar48;
    pbVar9 = pbVar47;
_ctor:
    bVar5 = (byte)((uint)puVar18 >> 8);
    uVar37 = *puVar17;
    bVar4 = (byte)puVar18;
    puVar17 = (uint *)((int)puVar17 + (uint)CARRY1(bVar5,(byte)*puVar17) + *puVar17);
    *(byte *)puVar29 = *(byte *)puVar29 + bVar4;
    cVar6 = bVar4 - *(byte *)((int)puVar29 + 3);
    puVar38 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar18 >> 0x10),
                                               CONCAT11(bVar5 + (byte)uVar37,bVar4)) >> 8),cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      if (*(byte *)((int)puVar29 + 3) <= bVar4) {
        *puVar17 = (uint)(*puVar17 + (int)puVar17);
        puVar29 = (uint *)CONCAT31((int3)((uint)puVar29 >> 8),(byte)puVar29 | *pbVar9);
        puVar17 = puVar17 + 0x230e;
        puVar18 = puVar38;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
    cVar6 = (char)puVar17 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar6);
    bVar49 = (POPCOUNT(cVar6) & 1U) == 0;
    puVar48 = puVar29;
    pbVar47 = pbVar9;
    pbVar36 = pbVar30;
    puVar18 = puVar22;
    uVar26 = puStack_68._0_2_;
code_r0x00404ca8:
    puStack_68._0_2_ = uVar26;
    pcVar21 = pcStack_44;
    puVar29 = (uint *)pbStack_4c;
    pbVar9 = pbStack_50;
    pbVar30 = pbStack_58;
    puVar22 = puStack_60;
    if (bVar49) break;
    *(byte *)puVar48 = *(byte *)puVar48 + (char)puVar38;
    pbVar30 = pbVar36;
    puVar22 = puVar18;
  } while( true );
  *pcVar11 = *pcVar11 + (char)pcVar11;
  bVar4 = (byte)pcStack_44;
  *pcStack_44 = *pcStack_44 + bVar4;
  puVar18 = (uint *)CONCAT22((short)((uint)puStack_48 >> 0x10),
                             CONCAT11((byte)((uint)puStack_48 >> 8) | *pbStack_4c,(char)puStack_48))
  ;
  *pbStack_50 = *pbStack_50 + (char)pbStack_50;
  pbVar46 = (byte *)((int)pcVar21 * 2);
  *pbVar46 = *pbVar46 ^ bVar4;
  uVar3 = *(undefined6 *)pcVar21;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar47 = (byte *)uVar3;
  bVar5 = (byte)uVar3;
  *pbVar47 = *pbVar47 + bVar5;
  bVar4 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar5;
  puVar43 = (uint *)((int)puVar18 + 0x11673);
  uVar37 = *puVar43;
  uVar1 = *puVar43;
  *puVar43 = (uint)((byte *)((int)puVar29 + uVar1) + CARRY1(bVar4,bVar5));
  puStack_60 = (uint *)CONCAT22(puStack_60._2_2_,puStack_68._0_2_);
  pbVar47 = pbVar47 + (uint)(CARRY4(uVar37,(uint)puVar29) ||
                            CARRY4((int)puVar29 + uVar1,(uint)CARRY1(bVar4,bVar5))) +
                      *(int *)((int)puVar18 + (int)puVar29);
  puVar43 = puStack_5c;
  uVar26 = puStack_68._0_2_;
code_r0x00404cca:
  puStack_68._0_2_ = uVar26;
  cVar6 = (char)pbVar47 + '\x04';
  puVar17 = (uint *)CONCAT31((int3)((uint)pbVar47 >> 8),cVar6);
  if (SCARRY1((char)pbVar47,'\x04') == cVar6 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
  puVar48 = puVar43 + 1;
  out(*puVar43,(short)puVar29);
  uVar37 = *puVar18;
  bVar4 = *(byte *)puVar29;
  bVar5 = (byte)puVar18;
  *(byte *)puVar29 = *(byte *)puVar29 + bVar5;
  iVar15 = (CONCAT31((int3)((uint)puVar17 >> 8),(char)puVar17 + '\x03') & uVar37) + iRam00008c38;
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar29;
  pcVar11 = (char *)(iVar15 + (uint)CARRY1(bVar4,bVar5) + 0x1246f);
  bVar4 = *(byte *)puVar29;
  uVar19 = (undefined3)((uint)puVar18 >> 8);
  puVar38 = (uint *)CONCAT31(uVar19,bVar5 | bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar11 >> 8);
  puVar17 = (uint *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + *pcVar11) + 0x1fbeef2);
  uVar37 = *puVar17;
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  if (CARRY4(uVar37,(uint)puVar17)) {
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    pcVar11 = (char *)CONCAT31(uVar19,bVar5 | bVar4 | bRam00282809);
    cVar6 = (char)((uint)puVar18 >> 8);
    *pbVar9 = *pbVar9 + cVar6;
    *pcVar11 = *pcVar11 - cVar6;
    *(byte *)puVar17 = *(byte *)puVar17 + (char)puVar17;
    iVar15 = (int)pcVar11 - *(int *)pbVar9;
    puVar43 = puVar43 + 2;
    out(*puVar48,(short)puVar29);
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    puVar38 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar37 = *puVar17;
    bVar4 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar4;
    puVar48 = puVar43 + 1;
    out(*puVar43,(short)puVar29);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar5 = bVar4 + in_AF * '\x06';
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),
                               bVar5 + (0x90 < (bVar5 & 0xf0) |
                                       CARRY1((byte)uVar37,bVar4) | in_AF * (0xf9 < bVar5)) * '`');
  }
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  bVar5 = (byte)puVar17 | (byte)*puVar22;
  puVar43 = puVar48 + 1;
  uVar28 = SUB42(puVar29,0);
  out(*puVar48,uVar28);
  *(byte *)puVar38 = (byte)*puVar38 - bVar5;
  bVar4 = *(byte *)puVar29;
  bVar40 = (byte)puVar38;
  *(byte *)puVar29 = *(byte *)puVar29 + bVar40;
  iVar15 = CONCAT31((int3)((uint)puVar17 >> 8),bVar5) + *puVar43 + (uint)CARRY1(bVar4,bVar40);
  pbVar46 = pbVar30 + -*puVar29;
  uVar19 = (undefined3)((uint)iVar15 >> 8);
  cVar6 = (char)iVar15 + (byte)*puVar43 + (pbVar30 < (byte *)*puVar29);
  puVar18 = (uint *)CONCAT31(uVar19,cVar6);
  bVar4 = (byte)((uint)puVar38 >> 8);
  *(byte *)puVar38 = (byte)*puVar38 - bVar4;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar40 = bVar40 | *(byte *)((int)puVar29 + (int)puVar18);
  uVar26 = (undefined2)((uint)puVar38 >> 0x10);
  if ((POPCOUNT(bVar40) & 1U) == 0) {
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6 + '\x12');
    *pcVar11 = *pcVar11 + bVar4;
    puVar18 = (uint *)CONCAT31(uVar19,(cVar6 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar38 >> 8),bVar40));
    bVar5 = *(byte *)puVar29;
    *(byte *)puVar29 = *(byte *)puVar29 + bVar40;
    if (!CARRY1(bVar5,bVar40)) {
      pbVar47 = (byte *)((uint)puVar18 | *puVar18);
      out(*puVar43,uVar28);
      *pbVar47 = *pbVar47 + (char)pbVar47;
      bVar5 = *pbVar47;
      piVar16 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | bVar5,bVar40));
      iVar15 = (int)pbVar47 - *piVar16;
      *(byte *)puVar29 = *(byte *)puVar29 + bVar40;
      puVar18 = puVar48 + 3;
      out(puVar48[2],uVar28);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar16 + iVar15) = *(char *)((int)piVar16 + iVar15) - (bVar4 | bVar5);
      *(byte *)puVar29 = *(byte *)puVar29 + bVar40;
      pbVar47 = (byte *)(iVar15 + -0x120edecd);
      *(byte *)puVar18 = (byte)*puVar18 + 1;
      bVar4 = *pbVar47;
      bVar5 = (byte)pbVar47;
      *pbVar47 = *pbVar47 + bVar5;
      pbVar46 = pbVar46 + ((-1 - *(int *)((int)puVar22 + 0x42)) - (uint)CARRY1(bVar4,bVar5));
      *pbVar47 = *pbVar47 + bVar5;
      bVar33 = (byte)pbVar9 | (byte)((uint)pbVar47 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar47;
      bVar4 = *(byte *)puVar29;
      pcVar11 = (char *)(((uint)pbVar47 | 0x11) + 0x511072c);
      puVar43 = puVar48 + 4;
      out(*puVar18,uVar28);
      puVar29 = (uint *)((int)puVar29 + 1);
      *pcVar11 = *pcVar11 + (char)pcVar11;
      bVar5 = (byte)((uint)pcVar11 >> 8);
      pbVar9 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar9 >> 0x10),
                                                CONCAT11((byte)((uint)pbVar9 >> 8) | bVar4,bVar33))
                                      >> 8),bVar33 | bVar5);
      uVar19 = (undefined3)((uint)pcVar11 >> 8);
      bVar4 = (char)pcVar11 - *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar19,bVar4);
      *pcVar11 = *pcVar11 + bVar4;
      *(int *)((int)pcVar11 * 2) = (int)(pbVar9 + *(int *)((int)pcVar11 * 2));
      *(byte *)puVar29 = *(byte *)puVar29 + bVar4;
      *pbVar46 = *pbVar46 + bVar5;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar19,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar37;
      pbVar47 = (byte *)CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar5 + in_AF,bVar4));
      *(byte *)puVar43 = (byte)*puVar43 + bVar40;
      *pbVar47 = *pbVar47 + bVar4;
      *pbVar47 = *pbVar47 + bVar4;
      bVar49 = CARRY1(bVar4,*pbVar47);
      puVar18 = (uint *)CONCAT31((int3)((uint)pbVar47 >> 8),bVar4 + *pbVar47);
      goto code_r0x00404d9a;
    }
    *pbVar9 = *pbVar9 - (char)puVar29;
  }
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  bVar49 = false;
  piVar16 = (int *)CONCAT22(uVar26,CONCAT11(bVar4 | *(byte *)puVar29,bVar40));
code_r0x00404d9a:
  do {
    pbVar30 = (byte *)puVar29;
    *puVar18 = (*puVar18 - (int)puVar18) - (uint)bVar49;
    bVar4 = (byte)((uint)piVar16 >> 8);
    uVar26 = (undefined2)((uint)piVar16 >> 0x10);
    bVar5 = (byte)piVar16;
    bVar40 = bVar4 + (byte)iRam00000c00;
    pbVar47 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *pbVar30 = *pbVar30 + bVar5;
    pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 - (byte)*puVar43);
    bVar4 = *pbVar47;
    puVar18 = (uint *)(pbVar47 + (uint)CARRY1(bVar40,*pbVar47) + *(int *)pbVar47);
    *pbVar30 = *pbVar30 + bVar5;
    cVar7 = ((bVar40 + bVar4) - *pbVar30) + (byte)*puVar18;
    pcVar11 = (char *)CONCAT22(uVar26,CONCAT11(cVar7,bVar5));
    puVar48 = puVar22 + 1;
    uVar37 = in((short)pbVar30);
    *puVar22 = uVar37;
    cVar6 = (char)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    uVar19 = (undefined3)((uint)pbVar30 >> 8);
    bVar40 = (byte)pbVar30 | (byte)*puVar43;
    pcVar21 = (char *)CONCAT31(uVar19,bVar40);
    *pcVar11 = *pcVar11 + '\x01';
    bVar4 = (cVar7 - *pcVar21) + (byte)*puVar18;
    pcVar11 = (char *)CONCAT22(uVar26,CONCAT11(bVar4,bVar5));
    puVar22 = puVar22 + 2;
    uVar37 = in((short)pcVar21);
    *puVar48 = uVar37;
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    bVar40 = bVar40 | (byte)*puVar43;
    puVar29 = (uint *)CONCAT31(uVar19,bVar40);
    *pcVar11 = *pcVar11 + '\x01';
    bVar49 = bVar5 < *(byte *)((int)puVar29 + 2);
    cVar7 = bVar5 - *(byte *)((int)puVar29 + 2);
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  *(byte *)puVar18 = (byte)*puVar18 + cVar6;
  bVar5 = cVar6 + 0x7b;
  pbVar47 = (byte *)CONCAT31((int3)((uint)puVar18 >> 8),bVar5);
  pbVar9[(int)pbVar47] = pbVar9[(int)pbVar47] + bVar5;
  puVar48 = puVar43 + 1;
  uVar28 = SUB42(puVar29,0);
  out(*puVar43,uVar28);
  pbVar36 = pbVar9 + -1;
  *pbVar47 = *pbVar47 + bVar5;
  bVar4 = bVar4 | *(byte *)puVar29;
  piVar16 = (int *)CONCAT22(uVar26,CONCAT11(bVar4,cVar7));
  *pbVar47 = *pbVar47 + bVar5;
  *pbVar36 = *pbVar36 + bVar40;
  *pbVar36 = *pbVar36 ^ bVar5;
  *(byte *)puVar29 = *(byte *)puVar29 + bVar4;
  *pbVar47 = *pbVar47 + bVar5;
  do {
    bVar24 = (byte)((uint)piVar16 >> 8);
    *(byte *)puVar22 = (byte)*puVar22 + bVar24;
    bVar4 = *pbVar47;
    bVar5 = (byte)pbVar47;
    *pbVar47 = *pbVar47 + bVar5;
    *(byte **)(pbVar9 + 0x17) =
         (byte *)((int)puVar48 + (uint)CARRY1(bVar4,bVar5) + *(int *)(pbVar9 + 0x17));
    *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
    uVar20 = (undefined3)((uint)pbVar47 >> 8);
    bVar5 = bVar5 | (byte)*puVar48;
    puVar22 = (uint *)((int)puVar22 + *(int *)(pbVar46 + -0x34));
    *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
    bVar4 = bVar5 + 2;
    cVar6 = (char)((uint)pbVar30 >> 8);
    bVar33 = (byte)piVar16;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar47 = (byte *)CONCAT31(uVar20,bVar5 + 0x15 + (0xfd < bVar5));
      if (0xec < bVar4 || CARRY1(bVar5 + 0x15,0xfd < bVar5)) {
        *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
      }
code_r0x00404e60:
      pbVar46 = pbVar46 + -*puVar29;
      bVar4 = *pbVar47;
      *pbVar47 = *pbVar47 + (byte)pbVar47;
      pbVar9 = (byte *)((int)puVar48 + (-(uint)CARRY1(bVar4,(byte)pbVar47) - *(int *)pbVar47));
      pbVar47 = pbVar47 + *(int *)pbVar47;
      puStack_74 = (uint *)CONCAT22(puStack_74._2_2_,in_DS);
      *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
      *(char *)piVar16 = (char)*piVar16 + cVar6;
      bVar4 = *pbVar47;
      *pbVar47 = *pbVar47 + (byte)pbVar47;
      *(byte **)(pbVar36 + (int)puVar29) =
           (byte *)((int)puVar29 +
                   (uint)CARRY1(bVar4,(byte)pbVar47) + *(int *)(pbVar36 + (int)puVar29));
      pbVar47 = pbVar47 + 0x73061314;
      *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar33 = bVar33 | *(byte *)puVar29;
      pcVar21 = (char *)CONCAT31(uVar20,bVar33);
      *pbVar47 = *pbVar47 + (char)pbVar47;
      cVar6 = (char)pbVar47 + 'o';
      pcVar11 = (char *)CONCAT31((int3)((uint)pbVar47 >> 8),cVar6);
      *pcVar11 = *pcVar11 + cVar6;
      out(*(undefined4 *)pbVar9,uVar28);
      bVar4 = *(byte *)puVar29;
      *(byte *)puVar29 = *(byte *)puVar29 + bVar33;
      pcVar11 = pcVar11 + (uint)CARRY1(bVar4,bVar33) + *puVar22;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      *pcVar21 = *pcVar21 + bVar40;
      puVar48 = (uint *)(pbVar9 + 8);
      out(*(undefined4 *)(pbVar9 + 4),uVar28);
      *(byte *)puVar29 = *(byte *)puVar29 + bVar33;
      piVar16 = (int *)((uint)pcVar11 | *puVar22);
      pcVar21[0x390a0000] = pcVar21[0x390a0000] - bVar24;
      pbVar47 = (byte *)&cRam07000000;
      *(byte *)puVar22 = (byte)*puVar22 - bVar24;
      *piVar16 = *piVar16 + (int)piVar16;
      puVar43 = (uint *)CONCAT31(uVar20,bVar33 | *(byte *)((int)piVar16 + (int)pcVar21));
      *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) - bVar24;
      cRam07000000 = cRam07000000 + bVar24;
      piVar16 = (int *)((uint)piVar16 | 0x777b02);
      pbVar9 = (byte *)((int)puVar22 + (int)pbVar46 * 2);
      bVar49 = SCARRY1(*pbVar9,(char)piVar16);
      *pbVar9 = *pbVar9 + (char)piVar16;
      bVar4 = *pbVar9;
      *(char *)piVar16 = (char)*piVar16;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar20,bVar4) = *(char *)CONCAT31(uVar20,bVar4) + bVar4;
    bVar5 = bVar5 + 0x71;
    pbVar47 = (byte *)CONCAT31(uVar20,bVar5);
    *pbVar47 = *pbVar47;
    *(byte *)puVar48 = (byte)*puVar48 + 1;
    *piVar16 = (*piVar16 - (int)pbVar47) - (uint)(0x90 < bVar4);
    uVar37 = *puVar48;
    *(byte *)puVar48 = (byte)*puVar48 + bVar5;
    if (!CARRY1((byte)uVar37,bVar5)) goto code_r0x00404e60;
    *pbVar47 = *pbVar47 + bVar5;
    uVar26 = (undefined2)((uint)piVar16 >> 0x10);
    bVar24 = bVar24 | *pbVar47;
    pbVar47 = pbVar47 + -*(int *)pbVar47;
    *pbVar36 = *pbVar36 + bVar24;
    cVar7 = bVar33 - *(byte *)((int)puVar29 + 2);
    piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar24,bVar33)) >> 8),cVar7);
  } while ((POPCOUNT(cVar7) & 1U) != 0);
  cVar32 = (char)pbVar47;
  *pbVar47 = *pbVar47 + cVar32;
  uVar20 = (undefined3)((uint)pbVar47 >> 8);
  pcVar11 = (char *)CONCAT31(uVar20,cVar32 + '{');
  out(*puVar48,uVar28);
  *pcVar11 = *pcVar11 + cVar32 + '{';
  bVar5 = cVar32 + 0x7e;
  pbVar30 = (byte *)CONCAT31(uVar20,bVar5);
  puVar48 = puVar43 + 3;
  out(puVar43[2],uVar28);
  pbVar47 = pbVar9 + -2;
  *pbVar30 = *pbVar30 + bVar5;
  bVar4 = *(byte *)puVar29;
  puVar43 = (uint *)CONCAT22(uVar26,CONCAT11(bVar24 | bVar4,cVar7));
  *pbVar30 = *pbVar30 + bVar5;
  *pbVar47 = *pbVar47 + bVar40;
  *pbVar47 = *pbVar47 ^ bVar5;
  *(byte *)puVar29 = *(byte *)puVar29 + (bVar24 | bVar4);
  *pbVar30 = *pbVar30 + bVar5;
  *pbVar30 = *pbVar30 + cVar6;
  bVar4 = *pbVar30;
  *pbVar30 = *pbVar30 + bVar5;
  *(byte **)(pbVar9 + 0x18) =
       (byte *)((int)puVar48 + (uint)CARRY1(bVar4,bVar5) + *(int *)(pbVar9 + 0x18));
  *(byte **)pbVar30 = pbVar30 + *(int *)pbVar30;
  bVar5 = bVar5 | (byte)*puVar48;
  puVar22 = (uint *)((int)puVar22 + *(int *)(pbVar46 + -0x33));
  *(char *)CONCAT31(uVar20,bVar5) = *(char *)CONCAT31(uVar20,bVar5) + bVar5;
  bVar49 = SCARRY1(bVar5,'\x02');
  bVar4 = bVar5 + 2;
  piVar16 = (int *)CONCAT31(uVar20,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    return CONCAT31(uVar20,bVar5 + 0x71);
  }
code_r0x00404ebf:
  bVar5 = (byte)piVar16;
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  if (bVar4 != 0 && bVar49 == (char)bVar4 < '\0') {
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    puVar48[(int)puVar22 * 2] =
         (uint)((int)puVar29 + (uint)(0xd2 < bVar5) + puVar48[(int)puVar22 * 2]);
    return CONCAT31(uVar20,bVar5 + 0x2d);
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar4 = *pbVar47;
  *puVar48 = (uint)(*puVar48 + (int)piVar16);
  bVar33 = (byte)((uint)puVar43 >> 8);
  *(byte *)piVar16 = (char)*piVar16 - bVar33;
  *(byte *)piVar16 = (char)*piVar16 + bVar5;
  pbVar9 = (byte *)(CONCAT31(uVar19,bVar40 | bVar4) - *(int *)pbVar47);
  puVar38 = (uint *)CONCAT31(uVar20,bVar5 + 6);
  *(uint *)(pbVar47 + (int)puVar48 * 2) =
       (int)puVar38 + (uint)(0xf9 < bVar5) + *(int *)(pbVar47 + (int)puVar48 * 2);
  *(byte *)puVar43 = (byte)*puVar43 ^ bVar5 + 6;
  bVar5 = (byte)puVar43;
  *pbVar9 = *pbVar9 + bVar5;
  puVar18 = puVar48 + 1;
  uVar26 = SUB42(pbVar9,0);
  out(*puVar48,uVar26);
  *puVar43 = *puVar43 ^ (uint)puVar38;
  *pbVar9 = *pbVar9 + bVar5;
  puVar29 = (uint *)(pbVar47 + -*(int *)pbVar47);
  *(uint *)((int)puVar22 + 0x31) = *(uint *)((int)puVar22 + 0x31) | (uint)pbVar46;
  *puVar38 = *puVar38 + (int)puVar38;
  puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar33 | (byte)*puVar29,bVar5))
  ;
  *(byte **)(pbVar9 + 0x6e) = (byte *)(*(int *)(pbVar9 + 0x6e) + (int)puVar18);
  piVar16 = (int *)((uint)puVar38 | *puVar38);
  bVar40 = (byte)puVar29;
  *(byte *)puVar22 = (byte)*puVar22 - bVar40;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  if (CARRY1(bVar4,bVar5)) {
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar4 = pbVar9[0x11];
    uVar28 = (undefined2)((uint)puVar29 >> 0x10);
    out(*puVar18,uVar26);
    puVar43 = (uint *)((int)puVar43 + 1);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar27 = (byte)((uint)puVar29 >> 8) | bVar4 | *pbVar9;
    pcVar11 = (char *)((int)piVar16 + -0x21000001);
    bVar4 = (byte)pcVar11 | 0x11;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    cVar6 = bVar4 - 7;
    pcVar21 = (char *)CONCAT31(uVar19,cVar6);
    *puVar22 = (uint)(pcVar21 + (uint)(bVar4 < 7) + *puVar22);
    puVar18 = puVar48 + 3;
    out(puVar48[2],uVar26);
    pbVar9 = pbVar9 + 1;
    *pcVar21 = *pcVar21 + cVar6;
    bVar33 = (byte)((uint)pcVar11 >> 8);
    bVar24 = bVar40 | bVar33;
    bVar5 = cVar6 - *pcVar21;
    bVar4 = *(byte *)puVar43;
    *(byte *)puVar43 = *(byte *)puVar43 + bVar5;
    *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5 + CARRY1(bVar4,bVar5);
    *pbVar9 = *pbVar9 + bVar5;
    *(byte *)puVar18 = (byte)*puVar18 + bVar24;
    bVar4 = (byte)((uint)pbVar9 >> 8);
    *(byte *)puVar43 = *(byte *)puVar43 + bVar5 + CARRY1((byte)pbVar9,bVar4);
    piVar16 = (int *)CONCAT31(uVar19,bVar5);
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                              CONCAT11(bVar4 + bVar33,(byte)pbVar9 + bVar4));
    puVar29 = (uint *)CONCAT22(uVar28,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)(CONCAT22(uVar28,
                                                  CONCAT11(bVar27,bVar40)) >> 8),bVar24) + 0x76),
                                               bVar24));
    puStack_68._0_2_ = puStack_74._0_2_;
code_r0x00404fa4:
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pcVar11 = (char *)(CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '(') ^ *puVar43);
    cVar32 = (char)puVar43;
    *pbVar9 = *pbVar9 + cVar32;
    uVar26 = (undefined2)((uint)puVar29 >> 0x10);
    cVar35 = (char)puVar29;
    cVar41 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x75);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar6 = (char)pcVar11 + 'o';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6);
    *pcVar11 = *pcVar11 + cVar6;
    cVar39 = (char)((uint)puVar43 >> 8);
    *pbVar46 = *pbVar46 - cVar39;
    pbVar9[1] = pbVar9[1] + cVar32;
    pcVar11 = pcVar11 + -0x757b021b;
    cVar6 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar6;
    uVar19 = (undefined3)((uint)pcVar11 >> 8);
    cVar7 = cVar6 + 'o';
    pcVar11 = (char *)CONCAT31(uVar19,cVar7);
    pbVar30 = pbVar9 + 2;
    *pcVar11 = *pcVar11 + cVar7;
    iVar15 = CONCAT22(uVar26,CONCAT11(cVar41 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar41,cVar35)) +
                                                        0x76),cVar35));
    *pcVar11 = *pcVar11 + cVar7;
    pcVar11 = (char *)CONCAT31(uVar19,cVar6 + -0x22);
    puVar48 = (uint *)((int)puVar22 + 1);
    *(byte *)puVar22 = (byte)*puVar18;
    *pcVar11 = *pcVar11 + cVar6 + -0x22;
    *(byte *)((int)puVar43 + (int)pcVar11) =
         *(byte *)((int)puVar43 + (int)pcVar11) - (char)((uint)pbVar30 >> 8);
    *pbVar30 = *pbVar30 + cVar32;
    bVar5 = cVar39 - pbVar9[4];
    pbVar47 = (byte *)((int)puVar18 + 5);
    out(*(undefined4 *)((int)puVar18 + 1),(short)pbVar30);
    puVar22 = (uint *)((uint)(pcVar11 + *(int *)(pcVar11 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar22 = (byte)*puVar22 << 1 | (char)(byte)*puVar22 < '\0';
    *pbVar47 = *pbVar47 + (char)puVar22;
    pbVar47 = pbVar47 + *(int *)(pbVar9 + -0x5c);
    pbVar9 = (byte *)((uint)puVar22 | *puVar22);
    *pbVar47 = *pbVar47 + (char)pbVar9;
    puVar29 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar35 - (char)pbVar30);
    bVar4 = *pbVar9;
    puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar5 + *pbVar9,cVar32));
    iVar15 = *(int *)pbVar9;
    *pbVar30 = *pbVar30 + cVar32;
    cVar6 = (char)(pbVar9 + (uint)CARRY1(bVar5,bVar4) + iVar15) + 'r';
    puVar22 = (uint *)CONCAT31((int3)((uint)(pbVar9 + (uint)CARRY1(bVar5,bVar4) + iVar15) >> 8),
                               cVar6);
    pbVar9 = (byte *)CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(10,(char)pbVar30));
    *(char *)(puVar22 + 10) = (char)puVar22[10] + '\n';
    *pbVar47 = *pbVar47 + cVar6;
    puVar18 = (uint *)(pbVar47 + *(int *)(pbVar9 + -0x5e));
    uVar37 = *puVar22;
    cVar6 = (char)((uint)puVar22 | uVar37);
    *(byte *)puVar18 = (byte)*puVar18 + cVar6;
    uVar19 = (undefined3)(((uint)puVar22 | uVar37) >> 8);
    cVar7 = cVar6 + (byte)*puVar29;
    puVar22 = (uint *)CONCAT31(uVar19,cVar7);
    if (SCARRY1(cVar6,(byte)*puVar29) == cVar7 < '\0') goto code_r0x00405090;
    *(byte *)puVar22 = (byte)*puVar22 + cVar7;
    piVar16 = (int *)CONCAT31(uVar19,cVar7 + '\x02');
    puVar22 = puVar48;
  }
  else {
    out(2,(char)piVar16);
    if ((POPCOUNT(*pbVar9) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar19 = (undefined3)((uint)piVar16 >> 8);
  cVar6 = (char)piVar16 + '}';
  pbVar47 = (byte *)CONCAT31(uVar19,cVar6);
  pbVar9[(int)pbVar47] = pbVar9[(int)pbVar47] + cVar6;
  pbVar9[0x280a0000] = pbVar9[0x280a0000] - (char)((uint)piVar16 >> 8);
  bVar4 = (byte)puVar43 & 7;
  *pbVar47 = *pbVar47 << bVar4 | *pbVar47 >> 8 - bVar4;
  *(byte *)puVar18 = (byte)*puVar18 + cVar6;
  cVar32 = (char)puVar29 - (byte)*puVar18;
  uVar26 = (undefined2)((uint)puVar29 >> 0x10);
  cVar39 = (char)((uint)puVar29 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar29 >> 8),cVar32) + 0x7c);
  pcVar11 = (char *)CONCAT22(uVar26,CONCAT11(cVar39,cVar32));
  *pbVar47 = *pbVar47 + cVar6;
  bVar5 = (char)piVar16 + 0xa7U & *pbVar9;
  puVar48 = (uint *)((int)puVar22 + *(int *)(pbVar46 + 0x7c));
  *(char *)CONCAT31(uVar19,bVar5) = *(char *)CONCAT31(uVar19,bVar5) + bVar5;
  bVar5 = bVar5 + 0x2a;
  pbVar47 = (byte *)CONCAT31(uVar19,bVar5);
  *pbVar47 = *pbVar47 + bVar5;
  *pcVar11 = *pcVar11 + cVar32;
  *pbVar9 = *pbVar9 ^ bVar5;
  *pcVar11 = *pcVar11 + bVar5;
  bVar4 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar5;
  cVar6 = (bVar5 - *pbVar47) - CARRY1(bVar4,bVar5);
  *(byte *)puVar43 = (byte)*puVar43 + (byte)pbVar9;
  cVar39 = cVar39 + pcVar11[0x7b];
  *(char *)CONCAT31(uVar19,cVar6) = *(char *)CONCAT31(uVar19,cVar6) + cVar6;
  pcVar11 = (char *)CONCAT31(uVar19,cVar6 + 'o');
  *pcVar11 = *pcVar11 + cVar6 + 'o';
  pcVar11 = pcVar11 + 0x2ed7fde6;
  cVar7 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar7;
  cVar6 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar39,cVar32)) + 0x7b);
  *pcVar11 = *pcVar11 + cVar7;
  piVar16 = (int *)(CONCAT31((int3)((uint)pcVar11 >> 8),cVar7 + 'o') + 0x6f060000);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar20 = (undefined3)((uint)pbVar9 >> 8);
  bVar5 = (byte)pbVar9 | (byte)*puVar18;
  pbVar30 = (byte *)CONCAT31(uVar20,bVar5);
  uVar37 = CONCAT22(uVar26,CONCAT11(cVar39 + cVar6,cVar32)) | (uint)puVar18;
  uVar19 = (undefined3)((uint)piVar16 >> 8);
  bVar4 = (byte)piVar16 | *pbVar30;
  pbVar47 = (byte *)CONCAT31(uVar19,bVar4);
  cVar6 = (byte)puVar43 - bVar5;
  puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),cVar6);
  *pbVar47 = *pbVar47 + bVar4;
  puVar22 = puVar18 + 1;
  out(*puVar18,(short)pbVar30);
  *pbVar47 = bVar4;
  *pbVar30 = *pbVar30 + cVar6;
  puVar18 = puVar18 + 2;
  out(*puVar22,(short)pbVar30);
  *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
  puVar29 = (uint *)(CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - (char)((uint)pbVar9 >> 8)) |
                    (uint)puVar18);
  pbVar9 = (byte *)CONCAT31(uVar20,(bVar5 | (byte)*puVar18) + (byte)*puVar48);
  cVar6 = bVar4 - (byte)*puVar48;
  puVar22 = (uint *)CONCAT31(uVar19,cVar6 - *(char *)CONCAT31(uVar19,cVar6));
code_r0x00405090:
  *puVar22 = (uint)(pbVar9 + *puVar22);
  cVar6 = (char)puVar22;
  *(byte *)puVar22 = (byte)*puVar22 + cVar6;
  *(byte *)puVar22 = (byte)*puVar22 + cVar6;
  *(byte *)puVar22 = (byte)*puVar22 + cVar6;
  *puVar43 = *puVar43 - (int)pbVar46;
  uVar37 = *puVar18;
  bVar4 = (byte)pbVar9;
  *(byte *)puVar18 = (byte)*puVar18 + bVar4;
  *(byte *)puVar22 = (byte)*puVar22 + cVar6 + CARRY1((byte)uVar37,bVar4);
  *(byte *)puVar43 = (byte)*puVar43 + cVar6;
  uVar37 = *puVar29;
  *(byte *)puVar29 = (byte)*puVar29 + 0x72;
  *(byte *)puVar29 = (byte)*puVar29;
  cVar6 = (char)((uint)pbVar9 >> 8);
  if (SCARRY1((byte)uVar37,'r')) {
    puVar18 = (uint *)((int)puVar18 + *(int *)(pbVar9 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar18 = (byte)*puVar18 + (char)puVar22;
      uVar19 = (undefined3)((uint)puVar22 >> 8);
      cVar7 = (char)puVar22 + (byte)*puVar29;
      pcVar11 = (char *)CONCAT31(uVar19,cVar7);
      puVar29 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),
                                 CONCAT11((char)((uint)puVar29 >> 8) +
                                          *(byte *)((int)puVar29 + 0x7b),(char)puVar29));
      *pcVar11 = *pcVar11 + cVar7;
      in_AF = 9 < (cVar7 + 0x6fU & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar19,cVar7 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar40 = (byte)uVar37;
      piVar16 = (int *)CONCAT22((short)(uVar37 >> 0x10),
                                CONCAT11((char)((uint)puVar22 >> 8) + in_AF,bVar40));
      *piVar16 = *piVar16 + (int)piVar16;
      uVar19 = (undefined3)((uint)piVar16 >> 8);
      bVar40 = bVar40 | *(byte *)(piVar16 + 0x354a);
      bVar40 = bVar40 - *(char *)CONCAT31(uVar19,bVar40);
      pbVar47 = (byte *)CONCAT31(uVar19,bVar40);
      bVar5 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar40;
      puVar18 = (uint *)((int)puVar18 + (-(uint)CARRY1(bVar5,bVar40) - *(int *)pbVar47));
      puVar22 = (uint *)(pbVar47 + 0xfc00);
      *pbVar9 = *pbVar9 + cVar6;
      uVar37 = *puVar22;
      bVar5 = (byte)puVar22;
      *(byte *)puVar22 = (byte)*puVar22 + bVar5;
      uVar13 = (uint)CARRY1((byte)uVar37,bVar5);
      uVar1 = *puVar29;
      uVar37 = *puVar29;
      *puVar29 = (uint)((byte *)(uVar37 + (int)puVar22) + uVar13);
      if (!CARRY4(uVar1,(uint)puVar22) && !CARRY4(uVar37 + (int)puVar22,uVar13)) break;
      *(byte *)puVar22 = (byte)*puVar22 + bVar5;
    }
  }
  uVar37 = (uint)puVar22 | *puVar22;
  uVar26 = SUB42(pbVar9,0);
  *(byte *)puVar18 = (byte)*puVar18 + (char)uVar37;
  piVar16 = (int *)(uVar37 + 0xc1872);
  if (SCARRY4(uVar37,0xc1872)) {
    cVar7 = (char)piVar16;
    *(char *)piVar16 = *(char *)piVar16 + cVar7;
    *pbVar9 = *pbVar9 + cVar7;
    *(char *)piVar16 = *(char *)piVar16 + cVar7;
    *(byte *)puVar29 = (byte)*puVar29 + (char)puVar43;
    *(char *)piVar16 = *(char *)piVar16 + cVar7;
    *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) + bVar4;
    puVar22 = puVar18;
    goto code_r0x00405117;
  }
  do {
    uVar37 = *puVar18;
    bVar4 = (byte)piVar16;
    *(byte *)puVar18 = (byte)*puVar18 + bVar4;
    if (CARRY1((byte)uVar37,bVar4)) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      uVar19 = (undefined3)((uint)puVar43 >> 8);
      bVar5 = (byte)puVar43 | bRam396f1609;
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      puVar43 = (uint *)CONCAT31(uVar19,bVar5 | *(byte *)CONCAT31(uVar19,bVar5));
      uVar19 = (undefined3)((uint)piVar16 >> 8);
      bVar4 = bVar4 | *pbVar9;
      pcVar11 = (char *)CONCAT31(uVar19,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        puVar22 = puVar18 + 1;
        out(*puVar18,uVar26);
        uVar37 = CONCAT22((short)((uint)piVar16 >> 0x10),(ushort)bVar4);
        *(byte *)puVar22 = (byte)*puVar22 + bVar4;
        pcVar11 = (char *)(uVar37 | 8);
        cVar7 = (char)((uint)puVar29 >> 8) + *(byte *)((int)puVar29 + 0x7a);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(cVar7,(char)puVar29));
        *pcVar11 = *pcVar11 + (char)pcVar11;
        cVar6 = (char)pcVar11 + 'o';
        piVar16 = (int *)CONCAT31((int3)(uVar37 >> 8),cVar6);
        *(char *)piVar16 = (char)*piVar16 + cVar6;
        *(byte *)puVar43 = (byte)*puVar43 + 1;
        puVar18 = puVar18 + 2;
        out(*puVar22,uVar26);
        pbVar9 = (byte *)((uint)pbVar9 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar16 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar7;
        do {
          bVar4 = (byte)iVar15;
          *(byte *)puVar18 = (byte)*puVar18 + bVar4;
          bVar49 = CARRY1(bVar4,(byte)*puVar38);
          uVar19 = (undefined3)((uint)iVar15 >> 8);
          cVar6 = bVar4 + (byte)*puVar38;
          pbVar47 = (byte *)CONCAT31(uVar19,cVar6);
          uVar26 = in_DS;
          uVar28 = uStack_b4;
          if (SCARRY1(bVar4,(byte)*puVar38) == cVar6 < '\0') goto GenerateStatusText;
          *pbVar47 = *pbVar47 + cVar6;
          uVar37 = CONCAT31(uVar19,cVar6 + '\'') + 0x1ebd9f3;
          uStack_b8 = (undefined1)puStack_68._0_2_;
          uStack_b7 = (undefined1)((ushort)puStack_68._0_2_ >> 8);
          piVar16 = (int *)(uVar37 ^ 0x73060000);
          puVar43 = (uint *)((int)puVar43 + 1);
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | pbVar46[0x7e],
                                              (char)puVar38));
          cVar6 = (char)uVar37;
          *(char *)piVar16 = (char)*piVar16 + cVar6;
          uVar37 = CONCAT31((int3)((uint)piVar16 >> 8),cVar6 + '\x02');
          bVar49 = 0xd9f2d2da < uVar37;
          iVar15 = uVar37 + 0x260d2d25;
          pbVar30 = pbVar46;
          do {
            uVar19 = (undefined3)((uint)iVar15 >> 8);
            bVar5 = (char)iVar15 + -2 + bVar49;
            pbVar46 = (byte *)CONCAT31(uVar19,bVar5);
            bVar4 = *pbVar46;
            *pbVar46 = *pbVar46 + bVar5;
            bVar40 = (byte)puVar38;
            uStack_b4 = puStack_68._0_2_;
            if (CARRY1(bVar4,bVar5)) {
              *pbVar46 = *pbVar46 + bVar5;
              puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                         CONCAT11((byte)((uint)puVar38 >> 8) | pbVar30[0x7f],bVar40)
                                        );
              *pbVar46 = *pbVar46 + bVar5;
              pbVar47 = (byte *)CONCAT31(uVar19,bVar5 + 0x2a);
              *pbVar47 = *pbVar47 + bVar5 + 0x2a;
              *(byte *)puVar38 = (byte)*puVar38 + (char)pbVar9;
              uVar26 = in_DS;
              while( true ) {
                in_DS = uVar26;
                bVar5 = (byte)pbVar47;
                *pbVar9 = *pbVar9 ^ bVar5;
                *pbVar9 = *pbVar9 + (char)puVar38;
                *pbVar47 = *pbVar47 + bVar5;
                *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pbVar9 >> 8);
                bVar4 = *pbVar47;
                *pbVar47 = *pbVar47 + bVar5;
                uVar37 = *puVar38;
                uVar1 = *puVar38;
                *puVar38 = (uint)(pbVar47 + uVar1 + CARRY1(bVar4,bVar5));
                uVar19 = (undefined3)((uint)pbVar47 >> 8);
                if (CARRY4(uVar37,(uint)pbVar47) ||
                    CARRY4((uint)(pbVar47 + uVar1),(uint)CARRY1(bVar4,bVar5))) break;
                *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                           CONCAT11((char)((uint)puVar43 >> 8) + *pbVar47,
                                                    (char)puVar43));
                *(byte *)puVar18 = (byte)*puVar18 + bVar5;
                piVar16 = (int *)CONCAT31(uVar19,bVar5 | (byte)*puVar38);
                puVar43 = puVar18;
                while( true ) {
                  puVar18 = puVar43 + 1;
                  out(*puVar43,(short)pbVar9);
                  pbVar9 = pbVar9 + 1;
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  bVar40 = (byte)((uint)pcVar11 >> 8) | *pbVar9;
                  uVar19 = (undefined3)((uint)piVar16 >> 8);
                  bVar5 = (byte)piVar16 ^ *pbVar9;
                  pcVar21 = (char *)CONCAT31(uVar19,bVar5);
                  cRam282b0000 = cRam282b0000 - bVar40;
                  *pcVar21 = *pcVar21 + bVar5;
                  pbVar46 = pbVar30 + -*(int *)pbVar9;
                  uStack_b8 = (undefined1)in_DS;
                  uStack_b7 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar48 + 0x17);
                  *pcVar21 = *pcVar21 + bVar5;
                  puVar43 = (uint *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                             CONCAT11(bVar40 + bVar4 | *pbVar9,(char)pcVar11));
                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
                  *(byte *)((int)pcVar21 * 2) = *(byte *)((int)pcVar21 * 2) ^ bVar5;
                  in_AF = 9 < (bVar5 & 0xf) | in_AF;
                  bVar5 = bVar5 + in_AF * -6;
                  pbVar47 = (byte *)CONCAT31(uVar19,bVar5 + (0x9f < bVar5 | in_AF * (bVar5 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar47 = pbVar47 + *(int *)pbVar47;
                  *(char *)((int)pbVar47 * 2) =
                       *(char *)((int)pbVar47 * 2) + (char)((uint)pbVar9 >> 8);
                  bVar49 = CARRY1((byte)*puVar43,(byte)pbVar9);
                  *(byte *)puVar43 = (byte)*puVar43 + (byte)pbVar9;
                  uVar26 = in_DS;
                  uVar28 = puStack_68._0_2_;
GenerateStatusText:
                  in_DS = uVar28;
                  pbVar30 = pbVar46;
                  uStack_b4 = in_DS;
                  if (!bVar49) break;
                  *pbVar47 = *pbVar47 + (char)pbVar47;
                  iVar15 = CONCAT31((int3)((uint)puVar43 >> 8),(byte)puVar43 | *pbVar9);
                  uVar26 = (undefined2)((uint)puVar38 >> 0x10);
                  cVar32 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7d);
                  *pbVar47 = *pbVar47 + (char)pbVar47;
                  *(byte *)puVar48 = (byte)*puVar48 - (char)((uint)puVar43 >> 8);
                  iVar15 = iVar15 - *(int *)(&uRam0b0a0000 + iVar15);
                  cVar6 = *(char *)(CONCAT22(uVar26,CONCAT11(cVar32,(char)puVar38)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar18,(short)pbVar9);
                  pbVar9 = (byte *)CONCAT22(uStack_b6,CONCAT11(uStack_b7,uStack_b8));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar43 = puVar18 + 2;
                  out(puVar18[1],CONCAT11(uStack_b7,uStack_b8));
                  pbVar30 = pbVar46 + 1;
                  cVar7 = (char)iVar15;
                  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                             CONCAT11((byte)((uint)iVar15 >> 8) |
                                                      *(byte *)((int)puVar48 + 0x46),cVar7));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_68._0_2_ = CONCAT11(uStack_b7,uStack_b8);
                  uVar19 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar43,0xf0)) >> 8);
                  piVar16 = (int *)CONCAT31(uVar19,0x5f);
                  puVar48 = (uint *)((int)puVar48 + 1);
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  puVar38 = (uint *)CONCAT22(uVar26,CONCAT11(cVar32 + cVar6 | (byte)puVar18[-0x1e],
                                                             (char)puVar38));
                  *(char *)piVar16 = (char)*piVar16 + '_';
                  puVar22 = (uint *)CONCAT31(uVar19,0x8c);
                  puVar43[(int)puVar48 * 2] = (uint)(pbVar9 + puVar43[(int)puVar48 * 2]);
                  uVar37 = *puVar43;
                  *(byte *)puVar43 = (byte)*puVar43 + 0x8c;
                  if ((byte)uVar37 < 0x74) {
                    *pbVar9 = *pbVar9 + cVar7;
                    *(byte *)puVar38 = (byte)*puVar38 >> 1;
                    *(char *)puVar22 = (char)*puVar22 + -0x74;
                    *puVar22 = (uint)(pbVar30 + *puVar22);
                    *puVar22 = *puVar22 << 1 | (uint)((int)*puVar22 < 0);
                    *pbVar9 = *pbVar9 + cVar7;
                    pbVar46[2] = pbVar46[2] - cVar7;
                    *pbVar9 = *pbVar9 + cVar7;
                    pbVar46 = (byte *)CONCAT31(uVar19,0x83);
                    puVar22 = puVar38;
                    goto code_r0x00405312;
                  }
                  *puVar22 = (uint)(*puVar22 + (int)puVar22);
                  piVar16 = (int *)(CONCAT31(uVar19,(byte)puVar22[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar22[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar16 = (int *)((int)piVar16 + *puVar43);
                }
              }
              *pbVar9 = *pbVar9 + bVar5;
              *(byte *)puVar38 = (byte)*puVar38 - (char)pbVar9;
              *pbVar47 = *pbVar47 + bVar5;
              pbVar46 = (byte *)CONCAT31(uVar19,bVar5 | (byte)*puVar38);
            }
            else {
              cVar6 = (char)puVar43;
              *pbVar9 = *pbVar9 + cVar6;
              *(byte **)pbVar46 = pbVar9 + *(int *)pbVar46;
              *pbVar46 = *pbVar46 + bVar5;
              bVar5 = bVar5 + *pbVar46;
              pbVar46 = (byte *)CONCAT31(uVar19,bVar5);
              if (-1 < (char)bVar5) {
                *(byte *)puVar38 = (byte)*puVar38 + bVar40;
                out(*puVar18,(short)pbVar9);
                pbVar9 = pbVar9 + 1;
                *pbVar46 = *pbVar46 + bVar5;
                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                           bVar40 | (byte)((uint)iVar15 >> 8));
                cVar7 = bVar5 - (byte)*puVar43;
                pcVar11 = (char *)CONCAT31(uVar19,cVar7);
                *pcVar11 = *pcVar11 + cVar7 + (bVar5 < (byte)*puVar43);
                *pbVar9 = *pbVar9 + cVar7;
                pcVar11 = (char *)((int)pcVar11 * 2 + 0x79);
                *pcVar11 = *pcVar11 + (char)((uint)pbVar9 >> 8);
                pbVar46 = (byte *)in((short)pbVar9);
                puVar18 = puVar18 + 1;
              }
              *(byte *)puVar18 = (byte)*puVar18 + cVar6;
              *pbVar46 = *pbVar46 + (char)pbVar46;
              *pbVar46 = *pbVar46 + (char)pbVar46;
              uStack_b8 = (undefined1)in_DS;
              uStack_b7 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar46;
              bVar40 = (byte)((uint)puVar43 >> 8);
              bVar33 = bVar40 + *pbVar46;
              iVar15 = *(int *)pbVar46;
              *pbVar9 = *pbVar9 + cVar6;
              bVar5 = (char)(pbVar46 + (uint)CARRY1(bVar40,bVar4) + iVar15) - (byte)*puVar38;
              pbVar46 = (byte *)CONCAT31((int3)((uint)(pbVar46 + (uint)CARRY1(bVar40,bVar4) + iVar15
                                                      ) >> 8),bVar5);
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar5;
              *pbVar30 = *pbVar30 + (char)puVar38;
              *pbVar46 = *pbVar46 + bVar5;
              *pbVar46 = *pbVar46 + bVar5;
              *pbVar46 = *pbVar46 + bVar5;
              puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                         CONCAT11(bVar33 + *pbVar46,cVar6));
              pbVar46 = pbVar46 + (uint)CARRY1(bVar33,*pbVar46) + *(int *)pbVar46;
              *pbVar9 = *pbVar9 + cVar6;
              puVar18 = (uint *)((int)puVar18 + *(int *)(pbVar9 + 0x3e));
            }
            *(byte *)puVar18 = (byte)*puVar18 + (char)pbVar46;
            cVar6 = (char)pbVar46 + 'r';
            puVar18 = (uint *)((int)puVar18 + -1);
            uVar37 = CONCAT31((int3)((uint)pbVar46 >> 8),cVar6);
            *(byte *)puVar18 = *(byte *)puVar18 + cVar6;
            bVar49 = 0xfff38f8d < uVar37;
            iVar15 = uVar37 + 0xc7072;
            pbVar46 = pbVar30;
          } while (SCARRY4(uVar37,0xc7072));
        } while( true );
      }
      *pcVar11 = *pcVar11 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar47 = (byte *)CONCAT31(uVar19,bVar4);
      bVar5 = *pbVar47;
      *pbVar47 = *pbVar47 + bVar4;
      uVar19 = (undefined3)
               ((uint)(pbVar47 + (uint)CARRY1(bVar5,bVar4) + *(int *)((int)puVar43 + (int)pbVar9))
               >> 8);
      cVar7 = (char)(pbVar47 + (uint)CARRY1(bVar5,bVar4) + *(int *)((int)puVar43 + (int)pbVar9)) +
              'E';
      pcVar11 = (char *)CONCAT31(uVar19,cVar7);
      *pcVar11 = *pcVar11 + cVar7;
      cVar7 = cVar7 + *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar19,cVar7);
      *pcVar11 = *pcVar11 + cVar7;
      puVar22 = (uint *)CONCAT31(uVar19,cVar7 + *pcVar11);
      *(char *)puVar22 = (char)*puVar22 + cVar7 + *pcVar11;
      pbVar47 = (byte *)((uint)puVar22 | *puVar22);
      bVar4 = *pbVar47;
      bVar5 = (byte)pbVar47;
      *pbVar47 = *pbVar47 + bVar5;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar47 >> 8),bVar5 + CARRY1(bVar4,bVar5));
      puVar22 = puVar18;
code_r0x00405117:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      puVar29 = (uint *)((int)puVar29 - *puVar29);
      puVar18 = puVar22 + 1;
      out(*puVar22,uVar26);
    }
    *pbVar9 = *pbVar9 + (char)puVar43;
    bVar49 = puVar29 < (uint *)*piVar16;
    puVar29 = (uint *)((int)puVar29 - *piVar16);
    bVar4 = (byte)((uint)puVar43 >> 8);
    *(byte *)((int)puVar48 + 0x39) = (*(byte *)((int)puVar48 + 0x39) - bVar4) - bVar49;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    uVar37 = *puVar29;
    *(int *)((int)puVar48 + 0x39) = *(int *)((int)puVar48 + 0x39) - (int)pbVar46;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar37 | (byte)*puVar29,(char)puVar43));
    *(char *)(piVar16 + 10) = (char)piVar16[10] + cVar6;
  } while( true );
code_r0x004052ee:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  bVar4 = (char)piVar16 + 0x28;
  pbVar46 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),bVar4);
  *pbVar46 = *pbVar46 ^ bVar4;
  *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pcVar11 >> 8);
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + (byte)pcVar11;
  piVar16 = (int *)(((uint)pbVar46 | 0x1496f09) + *puVar48 + (uint)CARRY1(bVar4,(byte)pcVar11));
  puVar18 = puVar43 + 1;
  out(*puVar43,(short)pbVar9);
  pbVar47 = pbVar9 + -1;
  *piVar16 = *piVar16 + (int)piVar16;
  pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar47 >> 8),(byte)pbVar47 | (byte)*puVar38);
  cVar6 = (char)piVar16 + '\x13';
  pbVar46 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),cVar6);
  puVar22 = puVar38;
  puVar43 = puVar18;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    *pbVar9 = *pbVar9 - (char)((uint)pbVar47 >> 8);
    *pbVar46 = *pbVar46 + cVar6;
code_r0x00405396:
    bVar4 = *pbVar46;
    bVar5 = (byte)pbVar46;
    *pbVar46 = *pbVar46 + bVar5;
    *puVar18 = (uint)(pbVar46 + (uint)CARRY1(bVar4,bVar5) + *puVar18);
    out(*puVar18,(short)pbVar9);
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar46 >> 0x10),
                               CONCAT11((byte)((uint)pbVar46 >> 8) | (byte)puVar18[1],bVar5));
    *(char **)((int)puVar48 + -1) = pcVar11 + *(int *)((int)puVar48 + -1);
    out(puVar18[1],(short)pbVar9);
    *pcVar11 = *pcVar11 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar46 = *pbVar46 + (char)pbVar46;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar46 >> 8),(char)pbVar46 + 'o');
  puVar38 = (uint *)((int)puVar22 + -1);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar19 = (undefined3)((uint)pbVar9 >> 8);
  piVar16 = (int *)((int)piVar16 + 0x1b7e);
  bVar40 = (byte)pbVar9 | *(byte *)puVar38 | *(byte *)puVar38;
  iRam04115f2c = iRam04115f2c + (int)piVar16;
  out(*puVar43,(short)CONCAT31(uVar19,bVar40));
  *piVar16 = *piVar16 + (int)piVar16;
  bVar40 = bVar40 | (byte)piVar16;
  iVar31 = CONCAT31(uVar19,bVar40);
  pbVar46 = (byte *)((int)piVar16 - *piVar16);
  cVar6 = (char)pbVar46;
  *pcVar11 = *pcVar11 + cVar6;
  cVar7 = (char)pcVar11 - bVar40;
  *pbVar46 = *pbVar46 + cVar6;
  uVar26 = (undefined2)((uint)pcVar11 >> 0x10);
  bVar5 = (byte)((uint)pcVar11 >> 8) | *pbVar46;
  pbVar30 = pbVar30 + -1;
  *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
  bVar4 = *(byte *)(CONCAT22(uVar26,CONCAT11(bVar5,cVar7)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar46;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar30;
  *pbVar46 = *pbVar46 + cVar6;
  bVar4 = bVar5 | bVar4 | *(byte *)puVar38;
  iVar23 = CONCAT22(uVar26,CONCAT11(bVar4,cVar7));
  pbVar47 = (byte *)((uint)(puVar43 + 1) ^ *(uint *)(iVar31 + -0x43));
  iVar15 = *(int *)pbVar46;
  *(byte **)pbVar46 = pbVar46 + *(int *)pbVar46;
  if (SCARRY4(iVar15,(int)pbVar46)) {
    *pbVar46 = *pbVar46 + cVar6;
  }
  pbVar9 = pbVar46 + 0x5674;
  puVar48 = (uint *)((int)puVar48 +
                    (-(uint)((byte *)0xffffa98b < pbVar46) - *(int *)(pbVar47 + -0x7f)));
  bVar5 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  uVar20 = (undefined3)((uint)pbVar9 >> 8);
  bVar33 = bVar5 + 0x2d;
  piVar16 = (int *)CONCAT31(uVar20,bVar33);
  *(uint *)(pbVar47 + (int)puVar48 * 8) =
       *(int *)(pbVar47 + (int)puVar48 * 8) + iVar31 + (uint)(0xd2 < bVar5);
  bVar5 = *pbVar47;
  *pbVar47 = *pbVar47 + bVar33;
  if (!CARRY1(bVar5,bVar33)) {
    do {
      pbVar9 = (byte *)(iVar31 + 1);
      bVar5 = (byte)piVar16;
      *(byte *)piVar16 = (char)*piVar16 + bVar5;
      bVar40 = (byte)((uint)piVar16 >> 8);
      bVar33 = (byte)puVar38 | bVar40;
      puVar43 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar33);
      out(*(undefined4 *)pbVar47,(short)pbVar9);
      *(byte *)piVar16 = (char)*piVar16 + bVar5;
      uVar26 = (undefined2)((uint)iVar23 >> 0x10);
      cVar6 = (char)iVar23;
      pbVar46 = (byte *)CONCAT22(uVar26,CONCAT11((byte)((uint)iVar23 >> 8) | *pbVar9,cVar6));
      bVar4 = *pbVar46;
      *pbVar46 = *pbVar46 + bVar5;
      *(byte *)piVar16 = (char)*piVar16 + bVar5 + CARRY1(bVar4,bVar5);
      *pbVar9 = *pbVar9 + bVar5;
      *(byte *)puVar48 = (byte)*puVar48 + bVar40;
      *(int *)((int)piVar16 * 2) =
           *(int *)((int)piVar16 * 2) + CONCAT22(uVar26,CONCAT11(0x1c,cVar6));
      *(byte *)piVar16 = (char)*piVar16 + bVar5;
      cVar7 = (char)pbVar9;
      *(byte *)puVar43 = (byte)*puVar43 + cVar7;
      *(byte *)((int)piVar16 * 2) = *(byte *)((int)piVar16 * 2) ^ bVar5;
      *(byte *)piVar16 = (char)*piVar16 + bVar5;
      pbVar46 = pbVar47 + 8;
      out(*(undefined4 *)(pbVar47 + 4),(short)pbVar9);
      piVar16 = &uRam0a0a0000;
      *pbVar9 = *pbVar9;
      bVar5 = cVar6 - cVar7;
      iVar23 = CONCAT22(uVar26,CONCAT11((byte)puVar48[0x14] | 0x1c | bRam0ca87216,bVar5));
      *pbVar9 = *pbVar9;
      bVar4 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar5;
      if (!CARRY1(bVar4,bVar5)) {
        piVar16 = &uRam1e7b7000;
        bVar4 = (byte)((uint)puVar38 >> 8) | *(byte *)(iVar31 + 3);
        puVar43 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar4,bVar33));
        if (bVar4 != 0) {
          pbVar9 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),cVar7 + pbVar46[(int)puVar48 * 8]);
          piVar16 = (int *)0x6d7d7000;
          iVar23 = iVar23 + 1;
        }
      }
      *piVar16 = *piVar16 + (int)piVar16;
      iVar31 = CONCAT31((int3)((uint)pbVar9 >> 8),(byte)pbVar9 | pbVar46[(int)puVar48 * 8]);
      *(char *)piVar16 = (char)*piVar16;
      piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),0xf9);
      *puVar48 = (uint)((int)piVar16 + *puVar48 + 1);
      pbVar47 = pbVar47 + 0xc;
      out(*(undefined4 *)pbVar46,(short)iVar31);
      puVar38 = puVar43;
    } while( true );
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar33 = bVar33 | *(byte *)((int)piVar16 + 0x4000081);
  piVar16 = (int *)CONCAT31(uVar20,bVar33);
  if ('\0' < (char)bVar33) {
    *(byte *)piVar16 = (char)*piVar16 + bVar33;
    puVar43 = (uint *)CONCAT31(uVar20,bVar33 + 0x28);
    *puVar43 = *puVar43 ^ (uint)puVar43;
    *(byte *)puVar38 = *(byte *)puVar38 + bVar4;
    cVar6 = (bVar33 + 0x28) - bVar4;
    pcVar11 = (char *)CONCAT31(uVar20,cVar6);
    *pcVar11 = *pcVar11 + cVar6;
    pbVar9 = (byte *)CONCAT31(uVar19,bVar40 | *(byte *)puVar38);
    pcVar21 = (char *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar22 + 0x7d),
                                        (char)puVar38));
    *pcVar11 = *pcVar11 + cVar6;
    pbVar46 = (byte *)CONCAT31(uVar20,cVar6 + 0x39U ^ *(byte *)CONCAT31(uVar20,cVar6 + 0x39U));
    *pcVar21 = *pcVar21 + bVar4;
    puVar18 = (uint *)(pbVar47 + 4);
    out(*(undefined4 *)pbVar47,(short)pbVar9);
    goto code_r0x00405396;
  }
  puVar43 = (uint *)(pbVar47 + 4);
  out(*(undefined4 *)pbVar47,(short)iVar31);
  pcVar11 = (char *)(iVar23 + -1);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pbVar9 = (byte *)CONCAT31(uVar19,bVar40 | *(byte *)puVar38);
  goto code_r0x004052ee;
}


