/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004047cc
 * Raw Name    : CompareTo
 * Demangled   : CompareTo
 * Prototype   : int CompareTo(uint * obj, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8, char * param_9, uint * param_10, uint * param_11, int param_12, char * param_13)
 * Local Vars  : param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12, param_13, uStack_58, uStack_56, uStack_57, uStack_18, uStack_54, uStack_10, puStack_14, puStack_8, puStack_c, uVar2, uVar1, cVar4, uVar3, cVar6, cVar5, bVar8, bVar7, in_EAX, uVar9, pbVar11, pcVar10, uVar13, obj, puVar12, iVar15, puVar14, piVar17, pbVar16, pcVar19, pcVar18, uVar21, uVar20, puVar23, puVar22, iVar25, pcVar24, bVar27, bVar26, uVar29, uVar28, puVar31, bVar30, pbVar33, puVar32, cVar35, iVar34, puVar36, unaff_EBX, uVar38, puVar37, cVar40, bVar39, ppuVar42, cVar41, puVar43, unaff_EBP, puVar45, ppuVar44, unaff_ESI, ppuVar46, unaff_EDI, puVar47, puVar49, puVar48, in_SS, in_ES, bVar50, in_DS, unaff_retaddr, in_AF
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

int __fastcall
CompareTo(uint *obj,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
         uint *param_7,uint *param_8,char *param_9,uint *param_10,uint *param_11,int param_12,
         char *param_13)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int *in_EAX;
  char *pcVar10;
  undefined3 uVar20;
  byte *pbVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  byte *pbVar16;
  int *piVar17;
  char *pcVar18;
  undefined3 uVar21;
  char *pcVar19;
  byte bVar26;
  undefined2 uVar28;
  uint *puVar22;
  uint *puVar23;
  byte bVar27;
  undefined2 uVar29;
  char *pcVar24;
  int iVar25;
  byte bVar30;
  uint *puVar31;
  uint *puVar32;
  byte *pbVar33;
  int iVar34;
  char cVar35;
  byte bVar39;
  uint *unaff_EBX;
  char cVar40;
  uint *puVar36;
  uint *puVar37;
  char cVar41;
  uint uVar38;
  uint **ppuVar42;
  int unaff_EBP;
  uint *puVar43;
  uint **ppuVar44;
  uint *puVar45;
  uint **ppuVar46;
  uint *unaff_ESI;
  uint *puVar47;
  uint *unaff_EDI;
  uint *puVar48;
  uint *puVar49;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar50;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_18;
  uint *puStack_14;
  uint uStack_10;
  uint *puStack_c;
  uint *puStack_8;
  
                    /* .NET CLR Managed Code */
  puVar43 = (uint *)(unaff_EBP + iRam032a1702);
  cVar6 = (char)((uint)param_2 >> 8);
  if (puVar43 == (uint *)0x0) {
    *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
    puVar31 = (uint *)CONCAT31((int3)((uint)obj >> 8),(char)obj + (char)*param_2);
    *(char *)((int)in_EAX + -0xae27219) = *(char *)((int)in_EAX + -0xae27219) + cVar6;
    pbVar11 = (byte *)((int)in_EAX + 0x1d278de5);
    bVar7 = *pbVar11;
    bVar39 = (byte)((uint)unaff_EBX >> 8);
    *pbVar11 = *pbVar11 - bVar39;
    pcVar10 = (char *)((int)in_EAX + (bVar7 < bVar39) + 0x67278de6);
    piVar17 = (int *)((uint)pcVar10 ^ 0xb);
    *(char *)((int)piVar17 + 0x73) = *(char *)((int)piVar17 + 0x73) + cVar6;
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_SS);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar39 = bVar39 | *(byte *)((int)param_2 + 2);
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar39,(char)unaff_EBX));
    cVar5 = (char)piVar17;
    if ((POPCOUNT(bVar39) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar5;
      uVar20 = (undefined3)((uint)pcVar10 >> 8);
      cVar4 = cVar5 + '\x06';
      if ((POPCOUNT(cVar4) & 1U) == 0) {
        *(char *)CONCAT31(uVar20,cVar4) = *(char *)CONCAT31(uVar20,cVar4) + cVar4;
        in_EAX = (int *)CONCAT31(uVar20,cVar5 + '.');
        obj = puVar31;
        goto code_r0x00404803;
      }
      cVar6 = cVar4 + (byte)*unaff_EBX;
      pcVar10 = (char *)CONCAT31(uVar20,cVar6);
      if (SCARRY1(cVar4,(byte)*unaff_EBX) == cVar6 < '\0') {
code_r0x004048e7:
        pcVar10 = (char *)((uint)pcVar10 | 8);
        goto code_r0x004048de;
      }
    }
    else {
      *(char *)param_2 = (char)*param_2 + cVar5;
code_r0x0040486e:
      pcVar10 = (char *)CONCAT31((int3)((uint)piVar17 >> 8),(byte)piVar17 & (byte)*param_2);
      unaff_EDI = (uint *)((int)unaff_EDI + puVar43[0x1d]);
    }
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + '*');
    unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_DS);
    bVar7 = (byte)((uint)puVar31 >> 8);
    cVar6 = (char)puVar31;
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar7 + *pbVar11,cVar6));
    pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
    *(char *)param_2 = (char)*param_2 + cVar6;
    bVar50 = (byte)pbVar11 < *pbVar11;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 - *pbVar11);
code_r0x00404880:
    unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar50 + *(int *)pbVar11);
    while( true ) {
      bVar39 = (byte)pbVar11;
      pbVar11[0x2c000000] = pbVar11[0x2c000000] + bVar39;
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar39;
      *param_2 = (uint)(pbVar11 + (uint)CARRY1(bVar7,bVar39) + *param_2);
      *(byte *)unaff_EBX = (byte)*unaff_EBX - (char)param_2;
      *pbVar11 = *pbVar11 + bVar39;
      puVar47 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar39 | (byte)*unaff_EBX);
code_r0x00404895:
      pcVar10 = (char *)((uint)puVar47 | *puVar47);
code_r0x00404899:
      cVar6 = (char)pcVar10;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar6;
      uVar20 = (undefined3)((uint)pcVar10 >> 8);
      bVar7 = cVar6 + (byte)*unaff_EBX;
      pcVar10 = (char *)CONCAT31(uVar20,bVar7);
      bVar39 = (byte)((uint)puVar31 >> 8);
      uVar29 = (undefined2)((uint)puVar31 >> 0x10);
      cVar5 = (char)param_2;
      if (SCARRY1(cVar6,(byte)*unaff_EBX) == (char)bVar7 < '\0') {
        *(byte *)unaff_EBX = (byte)*unaff_EBX - cVar5;
        *pcVar10 = *pcVar10 + bVar7;
        puVar31 = (uint *)CONCAT22(uVar29,CONCAT11(bVar39 | (byte)*param_2,(char)puVar31));
        param_2 = (uint *)((int)param_2 + 1);
        pcVar10 = pcVar10 + *param_2;
        if ((POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar10 = *pcVar10 + bVar7;
      bVar8 = bVar7 + 2;
      pcVar10 = (char *)CONCAT31(uVar20,bVar8);
      if (bVar7 < 0xfe) {
        *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar8;
        puVar47 = unaff_EBX;
        goto code_r0x004048f5;
      }
      *pcVar10 = *pcVar10 + bVar8;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) |
                                          *(byte *)((int)unaff_EBX + -0x5b),cVar5));
      cVar6 = *pcVar10;
      *pcVar10 = *pcVar10 + bVar8;
      if (SCARRY1(cVar6,bVar8) == *pcVar10 < '\0') goto code_r0x00404927;
      *pcVar10 = *pcVar10 + bVar8;
      bVar7 = bVar7 + 4;
      pbVar11 = (byte *)CONCAT31(uVar20,bVar7);
      if (0xfd < bVar8) break;
      *pbVar11 = *pbVar11 + bVar7;
      puVar31 = (uint *)CONCAT22(uVar29,CONCAT11(bVar39 | (byte)*param_2,(char)puVar31));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar5;
      *(byte *)unaff_ESI = (byte)*unaff_ESI ^ bVar7;
    }
    *pbVar11 = *pbVar11 + bVar7;
    puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_ES);
  }
  else {
    *(byte *)((int)in_EAX + (int)puVar43) = *(byte *)((int)in_EAX + (int)puVar43) + (char)in_EAX;
code_r0x00404803:
    in_SS = SUB42(unaff_retaddr,0);
    *in_EAX = (int)(*in_EAX + (int)in_EAX);
    uVar21 = (undefined3)((uint)obj >> 8);
    bVar39 = (byte)obj | (byte)*unaff_EBX;
    puVar31 = (uint *)CONCAT31(uVar21,bVar39);
    uVar29 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar4 = (char)unaff_EBX;
    cVar40 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint *)CONCAT22(uVar29,CONCAT11(cVar40,cVar4));
    bVar7 = (byte)in_EAX;
    *(byte *)in_EAX = (char)*in_EAX + bVar7;
    bVar50 = 0xf9 < bVar7;
    uVar20 = (undefined3)((uint)in_EAX >> 8);
    cVar5 = bVar7 + 6;
    pbVar11 = (byte *)CONCAT31(uVar20,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404880;
    *pbVar11 = *pbVar11 + cVar5;
    piVar17 = (int *)CONCAT31(uVar20,bVar7 + 0x2e);
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar39 = bVar39 | *(byte *)((int)param_2 + (int)piVar17);
    puVar31 = (uint *)CONCAT31(uVar21,bVar39);
    in_SS = param_3._0_2_;
    if ((POPCOUNT(bVar39) & 1U) != 0) {
      puVar47 = (uint *)((int)piVar17 + *piVar17);
      *(byte *)param_2 = (char)*param_2 + bVar39;
      unaff_ESI = (uint *)((int)unaff_ESI + param_2[0xf]);
      goto code_r0x00404895;
    }
    *(byte *)piVar17 = (char)*piVar17 + bVar7 + 0x2e;
    cVar5 = bVar7 + 0x34;
    pcVar10 = (char *)CONCAT31(uVar20,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      pcVar10[0x28] = pcVar10[0x28] + cVar6;
      goto code_r0x00404899;
    }
    *pcVar10 = *pcVar10 + cVar5;
    piVar17 = (int *)CONCAT31(uVar20,bVar7 + 0x5c);
    *piVar17 = *piVar17 + (int)piVar17;
    cVar5 = (bVar39 | bRam07022c07) - (char)*piVar17;
    puVar31 = (uint *)CONCAT31(uVar21,cVar5);
    pcVar10 = (char *)CONCAT31(uVar20,bVar7 + 0x5a);
    bVar39 = (byte)((uint)obj >> 8);
    *(byte *)param_2 = (byte)*param_2 | bVar39;
    *(uint *)((int)param_2 + (int)pcVar10) = *(uint *)((int)param_2 + (int)pcVar10) | (uint)puVar43;
    *param_2 = *param_2 | (uint)puVar43;
    cVar40 = cVar40 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint *)CONCAT22(uVar29,CONCAT11(cVar40,cVar4));
    *pcVar10 = *pcVar10 + bVar7 + 0x5a;
    cVar6 = bVar7 + 0x60;
    pcVar10 = (char *)CONCAT31(uVar20,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *pcVar10 = *pcVar10 + cVar6;
      piVar17 = (int *)CONCAT31(uVar20,bVar7 + 0x88);
      in_SS = param_5._0_2_;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      param_5 = (uint *)CONCAT22(param_5._2_2_,in_DS);
      puVar31 = (uint *)CONCAT22((short)((uint)obj >> 0x10),
                                 CONCAT11((bVar39 | (byte)*param_2) + (char)*piVar17,cVar5));
      *(char *)piVar17 = (char)*piVar17;
      param_4 = (uint *)CONCAT22(param_4._2_2_,in_ES);
      cVar4 = cVar4 - (byte)*unaff_ESI;
      cVar40 = cVar40 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar4) + 0x73);
      *(byte *)piVar17 = (char)*piVar17 + bVar7 + 0x88;
      bVar7 = bVar7 + 0xb2 & (byte)*param_2;
      unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)puVar43 + 0x73));
      *(char *)CONCAT31(uVar20,bVar7) = *(char *)CONCAT31(uVar20,bVar7) + bVar7;
      pcVar10 = (char *)CONCAT31(uVar20,bVar7 + 0x2a);
      param_3 = (uint *)CONCAT22(param_3._2_2_,in_DS);
      unaff_EBX = (uint *)CONCAT22(uVar29,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar29,CONCAT11(
                                                  cVar40,cVar4)) + 0x74),cVar4));
      *pcVar10 = *pcVar10 + bVar7 + 0x2a;
      piVar17 = (int *)CONCAT31(uVar20,bVar7 + 0x54);
      goto code_r0x0040486e;
    }
    pbVar11 = (byte *)*(undefined6 *)pcVar10;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)*(undefined6 *)pcVar10;
  }
  uVar20 = (undefined3)((uint)pbVar11 >> 8);
  bVar7 = (byte)pbVar11 | (byte)*unaff_ESI;
  pcVar10 = (char *)CONCAT31(uVar20,bVar7);
  *pcVar10 = *pcVar10 + bVar7;
  *unaff_EBX = (uint)(*unaff_EBX + (int)puVar31);
  in_ES = (undefined2)uStack_10;
  uStack_10 = uStack_10 & 0xffff0000;
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar10 = *pcVar10 + bVar7;
  pcVar10 = (char *)CONCAT31(uVar20,bVar7 + 0x6f);
  *pcVar10 = *pcVar10 + bVar7 + 0x6f;
  pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar31;
  uRam00c16f07 = SUB41(pcVar10,0);
code_r0x004048de:
  cVar6 = (char)pcVar10;
  *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar6;
  *pcVar10 = *pcVar10 + cVar6;
  *(byte **)(pcVar10 + (int)puVar31) = (byte *)(*(int *)(pcVar10 + (int)puVar31) + (int)puVar31);
  puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
  bVar7 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar10 = *pcVar10 + cVar6;
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6 + 'o');
  unaff_ESI = (uint *)((int)unaff_ESI + 1);
  *pcVar10 = *pcVar10 + cVar6 + 'o';
  puStack_c = (uint *)CONCAT22(puStack_c._2_2_,in_ES);
  puVar47 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7,(char)unaff_EBX));
  puVar43 = unaff_EBX;
  in_SS = in_ES;
code_r0x004048f5:
  unaff_EBX = puVar47;
  pcVar10 = (char *)((int)((uint)pcVar10 & 0x7e26062d) - *(int *)((uint)pcVar10 & 0x7e26062d));
  *(byte *)param_2 = (byte)*param_2 + (char)puVar31;
  do {
    uRam00c36f08 = SUB41(pcVar10,0);
    while( true ) {
      uVar38 = *unaff_ESI;
      cVar6 = (char)pcVar10;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar6;
      uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
      if (SCARRY1((byte)uVar38,cVar6) == (char)(byte)*unaff_ESI < '\0') {
        pcVar10[(int)puVar43] = pcVar10[(int)puVar43] + cVar6;
        goto code_r0x00404982;
      }
      *pcVar10 = *pcVar10 + cVar6;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6 + '*');
      puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_DS);
      bVar7 = (byte)((uint)puVar31 >> 8);
      cVar6 = (char)puVar31;
      bVar39 = bVar7 + *pbVar11;
      pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      cVar5 = (char)unaff_EBX - (byte)*unaff_ESI;
      bVar7 = *pbVar11;
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar39 + *pbVar11,cVar6));
      iVar15 = *(int *)pbVar11;
      *(byte *)param_2 = (byte)*param_2 + cVar6;
      pcVar10 = (char *)CONCAT31((int3)((uint)(pbVar11 + (uint)CARRY1(bVar39,bVar7) + iVar15) >> 8),
                                 (char)(pbVar11 + (uint)CARRY1(bVar39,bVar7) + iVar15) -
                                 *(byte *)((int)param_2 + 3));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5) +
                                                     -0x3a),cVar5));
code_r0x00404921:
      bVar7 = (byte)pcVar10;
      *pcVar10 = *pcVar10 + bVar7;
      pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar7 + 0x6f);
      *(byte *)puVar31 = ((byte)*puVar31 - (bVar7 + 0x6f)) - (0x90 < bVar7);
code_r0x00404927:
      *(byte *)param_2 = (byte)*param_2 + (char)puVar31;
      puStack_c = (uint *)CONCAT22(puStack_c._2_2_,in_SS);
      *(byte *)puVar31 = (byte)*puVar31 + 1;
      cVar6 = (char)((uint)puVar31 >> 8) - *(byte *)((int)unaff_ESI + 2);
      puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(cVar6,(char)puVar31));
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
      pcVar10 = pcVar10 + -0x1b7e2606;
      *pcVar10 = *pcVar10 + (char)pcVar10;
      pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar10 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar10));
    }
code_r0x00404931:
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar6 = (char)pcVar10 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6);
    puVar47 = unaff_ESI;
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  do {
    bVar7 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar7;
    uVar20 = (undefined3)((uint)pcVar10 >> 8);
    piVar17 = (int *)CONCAT31(uVar20,bVar7 + 0x6f);
    *puVar31 = (*puVar31 - (int)piVar17) - (uint)(0x90 < bVar7);
    *(byte *)param_2 = (byte)*param_2 + (char)puVar31;
    iVar15 = *(int *)((int)unaff_EDI + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | (byte)*puVar47);
    *(byte *)puVar31 = (byte)*puVar31 + 1;
    bVar7 = (bVar7 + 0x6f) - (char)*piVar17;
    pbVar11 = (byte *)CONCAT31(uVar20,bVar7);
    *pbVar11 = *pbVar11 + bVar7;
    puVar47 = (uint *)((int)puVar47 + *(int *)pbVar11);
    cVar6 = bVar7 + *pbVar11;
    puVar12 = (ushort *)CONCAT31(uVar20,cVar6);
    *puVar12 = *puVar12 + (ushort)CARRY1(bVar7,*pbVar11) * (((ushort)puVar12 & 3) - (*puVar12 & 3));
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
    puVar43 = (uint *)((int)puVar43 + iVar15);
code_r0x0040495b:
    cVar6 = (char)puVar12;
    *(char *)puVar12 = (char)*puVar12 + cVar6;
    uVar20 = (undefined3)((uint)puVar12 >> 8);
    cVar5 = cVar6 + '\x02';
    pcVar10 = (char *)CONCAT31(uVar20,cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      *param_2 = (uint)(*param_2 + (int)puVar43);
      unaff_ESI = (uint *)((int)puVar47 + 1);
      out((byte)*puVar47,(short)param_2);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar10 = *pcVar10 + cVar5;
    pbVar11 = (byte *)(CONCAT31(uVar20,cVar6 + '}') + (int)puVar43);
    *pbVar11 = *pbVar11 + cVar6 + '}';
    *param_13 = *param_13 + (char)param_13;
    puVar31 = (uint *)CONCAT22((short)((uint)param_12 >> 0x10),
                               CONCAT11((byte)((uint)param_12 >> 8) | *(byte *)(param_12 * 3),
                                        (char)param_12));
    unaff_EDI = (uint *)((int)param_6 + *(int *)((int)param_10 + 0x6f));
    pcVar10 = param_13;
    param_2 = param_11;
    unaff_EBX = param_10;
    puVar43 = param_8;
    puVar47 = param_7;
    while( true ) {
      cVar6 = (char)pcVar10;
      *pcVar10 = *pcVar10 + cVar6;
      uVar20 = (undefined3)((uint)pcVar10 >> 8);
      cVar5 = cVar6 + '\x02';
      pcVar10 = (char *)CONCAT31(uVar20,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) break;
      *pcVar10 = *pcVar10 + cVar5;
      pcVar10 = (char *)CONCAT31(uVar20,cVar6 + '}');
      out(*puVar47,(short)param_2);
      *pcVar10 = *pcVar10 + cVar6 + '}';
code_r0x00404982:
      *(char *)param_5 = (char)*param_5 + (char)param_5;
      puVar31 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                                 CONCAT11((byte)((uint)param_4 >> 8) |
                                          *(byte *)((int)param_4 + (int)puStack_c),(char)param_4));
      unaff_EDI = (uint *)(uStack_10 + *(int *)((int)unaff_retaddr + 0x71));
      puVar43 = param_5;
      param_2 = param_3;
      unaff_EBX = unaff_retaddr;
      puVar47 = puStack_c;
      while( true ) {
        cVar6 = (char)puVar43;
        *(byte *)puVar43 = (byte)*puVar43 + cVar6;
        uVar20 = (undefined3)((uint)puVar43 >> 8);
        cVar5 = cVar6 + '\x02';
        puVar12 = (ushort *)CONCAT31(uVar20,cVar5);
        puVar43 = puStack_8;
        if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar12 = (char)*puVar12 + cVar5;
        bVar39 = cVar6 + 0x7d;
        iVar15 = CONCAT31(uVar20,bVar39);
        pbVar11 = (byte *)(iVar15 + (int)puStack_8);
        bVar7 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar39;
        uVar38 = *puVar31;
        *(byte *)param_2 = (byte)*param_2 + (char)puVar31;
        pcVar10 = (char *)(((iVar15 - uVar38) - (uint)CARRY1(bVar7,bVar39)) + -0x727b0317);
        cVar6 = (char)pcVar10;
        *pcVar10 = *pcVar10 + cVar6;
        uVar20 = (undefined3)((uint)pcVar10 >> 8);
        cVar5 = cVar6 + '\x02';
        pcVar10 = (char *)CONCAT31(uVar20,cVar5);
        if ((POPCOUNT(cVar5) & 1U) != 0) break;
        *pcVar10 = *pcVar10 + cVar5;
        bVar39 = cVar6 + 0x7d;
        iVar15 = CONCAT31(uVar20,bVar39);
        pbVar11 = (byte *)(iVar15 + (int)puStack_8);
        bVar7 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar39;
        puVar43 = (uint *)((iVar15 - *puVar31) - (uint)CARRY1(bVar7,bVar39));
        puVar45 = param_2;
code_r0x004049b4:
        *(byte *)puVar45 = (byte)*puVar45 + (char)puVar31;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                                   ((char)puVar45 - (char)*unaff_EDI) - (byte)*puVar47);
        bVar39 = *(byte *)((int)puVar47 + 0x72);
        *puVar43 = *puVar43 & (uint)puVar31;
        pbVar11 = (byte *)((int)puVar43 + 2);
        *pbVar11 = *pbVar11 + (char)((uint)puVar45 >> 8);
        bVar7 = *pbVar11;
        puVar49 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar39);
        puVar45 = puVar47;
        while (unaff_EBX = puVar49, puVar47 = puVar45, (POPCOUNT(bVar7) & 1U) == 0) {
          cVar6 = (char)puVar43;
          *(byte *)puVar43 = (byte)*puVar43 + cVar6;
          uVar20 = (undefined3)((uint)puVar43 >> 8);
          cVar5 = cVar6 + '\x03';
          pbVar11 = (byte *)CONCAT31(uVar20,cVar5);
          puVar47 = puVar45 + 1;
          out(*puVar45,(short)param_2);
          in_SS = param_6._0_2_;
          *pbVar11 = *pbVar11 + cVar5;
          cVar4 = (char)puVar31;
          puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                     CONCAT11((byte)((uint)puVar31 >> 8) | *pbVar11,cVar4));
          *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
          *(byte *)param_2 = (byte)*param_2 + cVar4;
          cVar4 = (char)puVar49 - *(byte *)((int)puVar45 + 6);
          unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar49 >> 8),cVar4);
          if ((POPCOUNT(cVar4) & 1U) != 0) {
            pcVar10 = (char *)((int)unaff_EDI + (int)puStack_8 * 2);
            *pcVar10 = *pcVar10 + cVar5;
            ppuVar46 = (uint **)puStack_8;
            goto code_r0x00404a51;
          }
          *pbVar11 = *pbVar11 + cVar5;
          puVar43 = (uint *)CONCAT31(uVar20,cVar6 + 'r');
          *(byte *)puVar43 = (byte)*puVar43;
          param_6 = (uint *)CONCAT22(param_6._2_2_,in_ES);
          do {
            unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
            bVar7 = (byte)puVar43;
            *(byte *)puVar43 = (byte)*puVar43 + bVar7;
            uVar20 = (undefined3)((uint)puVar43 >> 8);
            bVar7 = (bVar7 + 0x6e) - (0x90 < bVar7);
            puVar43 = (uint *)CONCAT31(uVar20,bVar7);
            cVar6 = (char)puVar31;
            *(byte *)param_2 = (byte)*param_2 + cVar6;
            bVar39 = (char)((uint)puVar31 >> 8) - *(byte *)((int)puVar47 + 2);
            puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar39,cVar6));
            puVar45 = param_2;
            if ((POPCOUNT(bVar39) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar43 = (byte)*puVar43 + bVar7;
            bVar8 = bVar7 + 2;
            puVar43 = (uint *)CONCAT31(uVar20,bVar8);
            ppuVar44 = (uint **)puStack_8;
            if ((POPCOUNT(bVar8) & 1U) == 0) goto code_r0x004049f5;
            puVar47 = param_6;
          } while (0xfd < bVar7);
          *(byte *)puVar43 = (byte)*puVar43 | bVar8;
          puVar49 = unaff_EBX;
          puVar45 = param_6;
          bVar7 = (byte)*puVar43;
        }
      }
    }
    *(byte *)param_2 = (byte)*param_2 + (char)puVar31;
    param_6 = (uint *)CONCAT22(param_6._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar7 = (byte)puVar43;
    *(byte *)puVar43 = (byte)*puVar43 + bVar7;
    uVar20 = (undefined3)((uint)puVar43 >> 8);
    bVar8 = bVar7 + 0x6f;
    pbVar11 = (byte *)CONCAT31(uVar20,bVar8);
    *puVar31 = (*puVar31 - (int)pbVar11) - (uint)(0x90 < bVar7);
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    puVar45 = (uint *)((int)ppuVar44 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar21 = (undefined3)((uint)param_2 >> 8);
    bVar7 = (byte)param_2 | (byte)*puVar47;
    param_2 = (uint *)CONCAT31(uVar21,bVar7);
    *(byte *)puVar31 = (byte)*puVar31 + 1;
    cVar5 = bVar8 - *pbVar11;
    puVar47 = (uint *)((int)puVar47 + (-(uint)(bVar8 < *pbVar11) - *(int *)CONCAT31(uVar20,cVar5)));
    uVar13 = CONCAT31(uVar20,cVar5 + *(char *)CONCAT31(uVar20,cVar5));
    bVar50 = CARRY1(bRam14110000,bVar39);
    bRam14110000 = bRam14110000 + bVar39;
    puVar43 = (uint *)((int)unaff_EBX + (int)puVar47 * 2);
    uVar38 = *puVar43;
    uVar2 = uVar13 + *puVar43;
    puVar14 = (undefined4 *)(uVar2 + bVar50);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar14 = uVar1;
    param_5 = (uint *)CONCAT22(param_5._2_2_,in_ES);
    uVar38 = (uint)(CARRY4(uVar13,uVar38) || CARRY4(uVar2,(uint)bVar50));
    puVar43 = (uint *)((int)puVar14 + uRam7d020511 + uVar38);
    ppuVar42 = &param_4;
    ppuVar46 = &param_4;
    ppuVar44 = &param_4;
    param_4 = puVar45;
    cVar5 = '\x03';
    do {
      puVar45 = puVar45 + -1;
      ppuVar42 = ppuVar42 + -1;
      *ppuVar42 = (uint *)*puVar45;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    param_6 = (uint *)&param_4;
    pbRam00c82802 =
         (byte *)((int)puVar43 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar14,uRam7d020511) ||
                      CARRY4((int)puVar14 + uRam7d020511,uVar38))));
    uVar38 = *puVar47;
    cVar5 = (char)puVar43;
    *(byte *)puVar47 = (byte)*puVar47 + cVar5;
  } while (SCARRY1((byte)uVar38,cVar5) == (char)(byte)*puVar47 < '\0');
  *(byte *)puVar43 = (byte)*puVar43 + cVar5;
  iVar15 = CONCAT31((int3)((uint)puVar43 >> 8),cVar5 + '\x11') + 0xc57b;
  bVar39 = (byte)iVar15;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar21,bVar7 + (byte)*puVar31);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar39 + 0x6f) - (uint)(0x90 < bVar39)) + -0x18093a86
  ;
  cVar5 = (char)iVar15;
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cVar6 = cVar5 + '\x02';
  pbVar11 = (byte *)CONCAT31(uVar20,cVar6);
  if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar11 = *pbVar11 + cVar6;
  pbVar11 = (byte *)CONCAT31(uVar20,cVar5 + 'q');
  ppuVar46 = &param_4;
code_r0x00404a51:
  pbVar16 = pbVar11 + 1;
  cVar6 = (char)pbVar16;
  *pbVar16 = *pbVar16 + cVar6;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar49 >> 0x10),
                               CONCAT11((char)((uint)puVar49 >> 8) - cVar6,cVar4));
  *pbVar16 = *pbVar16 + cVar6;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar31);
  pbVar11 = pbVar11 + 0x757b03;
  pcVar10 = (char *)((int)unaff_EDI + (int)ppuVar46 * 2);
  cVar6 = (char)pbVar11;
  *pcVar10 = *pcVar10 + cVar6;
  *pbVar11 = *pbVar11 + cVar6;
  *(byte *)puVar47 = (byte)*puVar47 - (char)((uint)pbVar11 >> 8);
  *pbVar11 = *pbVar11 + cVar6;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar46 + -0x3a));
  *pbVar11 = *pbVar11 + cVar6;
  pbVar11 = (byte *)(CONCAT31((int3)((uint)pbVar11 >> 8),cVar6 + '\x11') + 0x757b02);
  pcVar10 = (char *)((int)unaff_EDI + (int)ppuVar46 * 2);
  bVar39 = (byte)pbVar11;
  *pcVar10 = *pcVar10 + bVar39;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar39;
  puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_ES);
  pbRam011006fe = pbVar11 + (int)(pbRam011006fe + CARRY1(bVar7,bVar39));
  uVar38 = *puVar47;
  *(byte *)puVar47 = (byte)*puVar47 + bVar39;
  if (!CARRY1((byte)uVar38,bVar39)) goto code_r0x00404add;
  do {
    bVar7 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar7;
    bVar8 = (byte)puVar31;
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                               CONCAT11((byte)((uint)puVar31 >> 8) | *pbVar11,bVar8));
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar20 = (undefined3)((uint)pbVar11 >> 8);
    bVar7 = bVar7 + in_AF * '\x06';
    cVar6 = bVar7 + (0x90 < (bVar7 & 0xf0) | in_AF * (0xf9 < bVar7)) * '`';
    pcVar10 = (char *)CONCAT31(uVar20,cVar6);
    *pcVar10 = *pcVar10 + cVar6;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar46 + -0x39));
    *pcVar10 = *pcVar10 + cVar6;
    iVar15 = CONCAT31(uVar20,cVar6 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar39 = (byte)iVar15;
    bVar7 = bVar39 + 0x6f;
    pbVar11 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar7);
    *puVar31 = (*puVar31 - (int)pbVar11) - (uint)(0x90 < bVar39);
    uVar38 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar8;
    pbRam011106fe = pbVar11 + (int)(pbRam011106fe + CARRY1((byte)uVar38,bVar8));
    uVar38 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar7;
    if (!CARRY1((byte)uVar38,bVar7)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    bVar7 = (byte)puVar31;
    bVar39 = (byte)((uint)puVar31 >> 8) | *pbVar11;
    puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),CONCAT11(bVar39,bVar7));
    *pbVar11 = *pbVar11 - (char)pbVar11;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar39;
    out(*puVar47,(short)param_2);
    *puVar31 = *puVar31 & (uint)pbVar11;
    uVar38 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar7;
    pbVar11 = pbVar11 + (uint)CARRY1((byte)uVar38,bVar7) + puVar47[1];
    *pbVar11 = *pbVar11 + (char)pbVar11;
    *(byte *)puVar31 = (byte)*puVar31 + (char)param_2;
    puVar47 = puVar47 + 1;
    while( true ) {
      out(*puVar47,(short)param_2);
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 & (byte)*puVar31);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar31;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      puVar47 = puVar47 + 1;
code_r0x00404ad4:
      puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_ES);
      pbVar11 = (byte *)((uint)pbVar11 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar11;
code_r0x00404add:
      bVar7 = (byte)pbVar11;
      uVar20 = (undefined3)((uint)pbVar11 >> 8);
      cVar6 = bVar7 + 8;
      pbVar11 = (byte *)CONCAT31(uVar20,cVar6);
      if (SCARRY1(bVar7,'\b') == cVar6 < '\0') break;
      *pbVar11 = *pbVar11 + cVar6;
      cVar6 = bVar7 + 10;
      piVar17 = (int *)CONCAT31(uVar20,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      puVar43 = (uint *)CONCAT31(uVar20,bVar7 + 0x7c);
      *puVar43 = *puVar43 & (uint)puVar31;
      *(char *)((int)puVar43 + 0x11) = *(char *)((int)puVar43 + 0x11) + (char)((uint)param_2 >> 8);
      cVar6 = (char)((int)puVar43 + 0xc67b);
      uVar20 = (undefined3)((uint)((int)puVar43 + 0xc67b) >> 8);
      bVar7 = cVar6 + 8;
      pbVar11 = (byte *)CONCAT31(uVar20,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar7;
        cRam02060000 = cVar6 + 'w';
        puVar45 = (uint *)CONCAT31(uVar20,cRam02060000);
        *(byte *)puVar45 = (byte)*puVar45 + cRam02060000;
        cVar6 = (char)puVar31;
        puVar31 = (uint *)CONCAT22((short)((uint)puVar31 >> 0x10),
                                   CONCAT11((byte)((uint)puVar31 >> 8) | (byte)*puVar45,cVar6));
        *puVar45 = *puVar45 - (int)puVar45;
        *(byte *)param_2 = (byte)*param_2 + cVar6;
        puVar43 = puVar47 + 1;
        out(*puVar47,(short)param_2);
        puVar47 = puVar43;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar10 = (char *)((uint)puVar45 | *puVar45);
        goto code_r0x00404b89;
      }
      bVar39 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      *puVar47 = (uint)(pbVar11 + (uint)CARRY1(bVar39,bVar7) + *puVar47);
    }
    *(byte *)puVar47 = (byte)*puVar47 + 1;
    *puVar31 = (uint)(pbVar11 + (uint)(0xf7 < bVar7) + *puVar31);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + 'r');
    piVar17 = (int *)((uint)puVar43 | *puVar43);
    param_2 = puStack_14;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar15 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar7 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar7 + 0x6f);
    *puVar31 = (*puVar31 - iVar15) - (uint)(0x90 < bVar7);
    cVar6 = (char)puVar31;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    bVar26 = (byte)((uint)unaff_EBX >> 8);
    bVar8 = (byte)((uint)param_2 >> 8) | bVar26;
    pcVar18 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar8,(byte)param_2));
    piVar17 = (int *)(iVar15 + 0x73060001);
    *(byte *)puVar31 = (byte)*puVar31 & (byte)piVar17;
    *pcVar18 = *pcVar18 + cVar6;
    bVar39 = (byte)((uint)puVar31 >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar39;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar15 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar39;
    pcVar10 = (char *)((uint)piVar17 | *unaff_EDI);
    *pcVar18 = *pcVar18 - bVar39;
    bVar7 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar7;
    ppuVar46 = (uint **)(((int)ppuVar46 - iVar15) - *(int *)(pcVar10 + ((int)ppuVar46 - iVar15)));
    uVar29 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar27 = (byte)unaff_EBX;
    cVar5 = bVar26 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar11 = (byte *)CONCAT22(uVar29,CONCAT11(cVar5,bVar27));
    *pcVar10 = *pcVar10 + bVar7;
    uVar20 = (undefined3)((uint)pcVar10 >> 8);
    uVar13 = CONCAT31(uVar20,bVar7 + 7);
    puVar43 = (uint *)((int)ppuVar46 + -0x1faeef1);
    uVar38 = *puVar43;
    uVar2 = *puVar43 + uVar13;
    *puVar43 = uVar2 + (0xf8 < bVar7);
    puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_ES);
    puVar49 = puStack_14;
    bVar7 = bVar7 + 7 + (byte)*puVar31 +
            (CARRY4(uVar38,uVar13) || CARRY4(uVar2,(uint)(0xf8 < bVar7)));
    puVar45 = (uint *)CONCAT31(uVar20,bVar7);
    uVar38 = *puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar7;
    if (CARRY1((byte)uVar38,bVar7)) break;
    *(byte *)puVar45 = (byte)*puVar45 + bVar7;
    unaff_EBX = (uint *)CONCAT22(uVar29,CONCAT11(cVar5 + pbVar11[0x76],bVar27));
    uStack_18 = in_ES;
  }
  *(byte *)puVar45 = (byte)*puVar45 + bVar7;
  uVar21 = (undefined3)((uint)pcVar18 >> 8);
  bVar30 = (byte)param_2 | *pbVar11;
  param_2 = (uint *)CONCAT31(uVar21,bVar30);
  pcRam2b060000 = (char *)CONCAT31(uVar20,bVar7 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar7 + 0x39)) - (0xd7 < (byte)(bVar7 + 0x11));
  bVar26 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar39;
  puVar43 = puVar47 + 1;
  out(*puVar47,(short)param_2);
  bVar7 = (bVar7 + 0x37) - CARRY1(bVar26,bVar39);
  piVar17 = (int *)CONCAT31(uVar20,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    iVar15 = CONCAT31(uVar20,bVar7 + 0x11) + 0xc77b;
    pcVar10 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar10[0x28] = pcVar10[0x28] + bVar8;
code_r0x00404b89:
    cVar6 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar6;
    *pcVar10 = *pcVar10 + cVar6;
    *pcVar10 = *pcVar10 + cVar6;
    puVar12 = (ushort *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6 + 'r');
    uVar9 = (ushort)puVar12 | *puVar12;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*puVar43,(short)param_2);
    *pcVar10 = *pcVar10 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar7;
  puVar37 = (uint *)((int)ppuVar46 - *(int *)((int)unaff_EDI + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar10 = (char *)CONCAT31(uVar21,bVar30 | *pbVar11);
  puVar45 = puVar47 + 2;
  out(*puVar43,(short)pcVar10);
  uVar38 = *puVar31;
  *pcVar10 = *pcVar10 + cVar6;
  uVar38 = CONCAT31(uVar20,bVar7 & (byte)uVar38) | 0x767b02;
  *(byte *)((int)puVar31 + (int)pcVar10) = *(byte *)((int)puVar31 + (int)pcVar10) + (char)uVar38;
  iVar15 = uVar38 + 0xc67b;
  cVar40 = (char)iVar15;
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cVar4 = cVar40 + 'r';
  pcVar10 = (char *)CONCAT31(uVar20,cVar4);
  pcVar10[0x28] = pcVar10[0x28] + bVar8;
  *pcVar10 = *pcVar10 + cVar4;
  uVar28 = (undefined2)((uint)puVar31 >> 0x10);
  bVar39 = bVar39 | *(byte *)((int)puStack_14 + -0x5e);
  puVar23 = (uint *)CONCAT22(uVar28,CONCAT11(bVar39,cVar6));
  *pcVar10 = *pcVar10 + cVar4;
  puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,uStack_18);
  puVar43 = (uint *)CONCAT22(uVar29,CONCAT11(cVar5 + pbVar11[0x76],bVar27));
  *pcVar10 = *pcVar10 + cVar4;
  puVar31 = (uint *)CONCAT31(uVar20,cVar40 + -0x1c);
  pcVar10 = (char *)((uint)puVar31 | *puVar31);
  bVar50 = (POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar10;
  puVar31 = puStack_14;
  puVar36 = puVar43;
  puVar22 = puVar37;
  puVar48 = puVar49;
  uVar29 = uStack_18;
  if (!bVar50) goto code_r0x00404ca8;
  *pcVar10 = *pcVar10 + cRam02060000;
  puVar31 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cRam02060000 + 'r');
  *puVar31 = *puVar31 & (uint)puVar23;
  *(char *)((int)puVar31 + 0x11) = *(char *)((int)puVar31 + 0x11) + (char)((ushort)uStack_18 >> 8);
  iVar15 = (int)puVar31 + 0xc77b;
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar11 = (byte *)CONCAT31(uVar20,cRam02060000);
  out(*puVar45,uStack_18);
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar22 = (uint *)CONCAT22(uVar28,CONCAT11(bVar39 | *pbVar11,cVar6));
  *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
  *(byte *)puStack_14 = (byte)*puStack_14 + cVar6;
  out(puVar47[3],uStack_18);
  puVar32 = puStack_14;
  puVar45 = puVar47 + 4;
  uVar29 = uStack_18;
  if ((POPCOUNT((byte)*puStack_14) & 1U) != 0) goto code_r0x00404cca;
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar12 = (ushort *)CONCAT31(uVar20,(char)iVar15 + '{');
  uVar9 = (ushort)puVar12 | *puVar12;
  pcVar10 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar9);
  bVar7 = (byte)uVar9;
  out(puVar47[4],uStack_18);
  pbVar11 = (byte *)((int)puVar22 + 1);
  bRam11060000 = bVar7;
  *pcVar10 = *pcVar10 + bVar7;
  puVar23 = (uint *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                             CONCAT11((byte)((uint)pbVar11 >> 8) | bRam110cde91,(char)pbVar11));
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar7 - 7);
  *puVar49 = (uint)(pcVar10 + (uint)(bVar7 < 7) + *puVar49);
  puVar45 = puVar47 + 6;
  out(puVar47[5],uStack_18);
  puVar31 = (uint *)((int)puStack_14 + 1);
  *pcVar10 = *pcVar10 + (bVar7 - 7);
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar27 | (byte)(uVar9 >> 8));
  do {
    puVar49 = puVar48;
    bVar7 = (char)pcVar10 - *pcVar10;
    uVar38 = *puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + bVar7;
    cVar6 = bVar7 - CARRY1((byte)uVar38,bVar7);
    *(byte *)puVar31 = (byte)*puVar31 + cVar6;
    cVar5 = (char)((uint)puVar23 >> 8);
    *(byte *)(puVar49 + 0x673b40) = (byte)puVar49[0x673b40] + cVar5;
    puVar47 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar6);
    *(byte *)puVar47 = (byte)*puVar47 + cVar6;
    *(byte *)puVar31 = (byte)*puVar31 + cVar6;
    puVar36[0x16] = (uint)(puVar36[0x16] + (int)puVar45);
    puVar22 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar23 >> 0x10),
                                               CONCAT11(cVar5 + (char)((uint)pcVar10 >> 8),
                                                        (char)puVar23)) >> 8),
                               (char)puVar23 + *(char *)((int)puVar47 * 2));
    *(byte *)puVar47 = (byte)*puVar47 + cVar6;
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar36;
    puVar32 = puVar31;
    puVar43 = puVar36;
_ctor:
    bVar39 = (byte)((uint)puVar22 >> 8);
    uVar38 = *puVar47;
    bVar7 = (byte)puVar22;
    puVar47 = (uint *)((int)puVar47 + (uint)CARRY1(bVar39,(byte)*puVar47) + *puVar47);
    *(byte *)puVar32 = (byte)*puVar32 + bVar7;
    cVar6 = bVar7 - *(byte *)((int)puVar32 + 3);
    puVar23 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar22 >> 0x10),
                                               CONCAT11(bVar39 + (byte)uVar38,bVar7)) >> 8),cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      if (*(byte *)((int)puVar32 + 3) <= bVar7) {
        *puVar47 = (uint)(*puVar47 + (int)puVar47);
        puVar32 = (uint *)CONCAT31((int3)((uint)puVar32 >> 8),(byte)puVar32 | (byte)*puVar43);
        puVar47 = puVar47 + 0x230e;
        puVar22 = puVar23;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
    cVar6 = (char)puVar47 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)puVar47 >> 8),cVar6);
    bVar50 = (POPCOUNT(cVar6) & 1U) == 0;
    puVar31 = puVar32;
    puVar36 = puVar43;
    puVar22 = puVar37;
    puVar48 = puVar49;
    uVar29 = puStack_8._0_2_;
code_r0x00404ca8:
    puVar49 = unaff_retaddr;
    puStack_8._0_2_ = uVar29;
    pcVar18 = param_9;
    puVar32 = param_7;
    puVar43 = param_6;
    puVar37 = param_4;
    if (bVar50) break;
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar23;
    puVar37 = puVar22;
    unaff_retaddr = puVar49;
  } while( true );
  *pcVar10 = *pcVar10 + (char)pcVar10;
  bVar7 = (byte)param_9;
  *param_9 = *param_9 + bVar7;
  puVar22 = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                             CONCAT11((byte)((uint)param_8 >> 8) | (byte)*param_7,(char)param_8));
  *(char *)param_6 = (char)*param_6 + (char)param_6;
  pbVar11 = (byte *)((int)pcVar18 * 2);
  *pbVar11 = *pbVar11 ^ bVar7;
  uVar3 = *(undefined6 *)pcVar18;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar11 = (byte *)uVar3;
  bVar39 = (byte)uVar3;
  *pbVar11 = *pbVar11 + bVar39;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar39;
  puVar31 = (uint *)((int)puVar22 + 0x11673);
  uVar38 = *puVar31;
  uVar2 = *puVar31;
  *puVar31 = uVar2 + (int)puVar32 + (uint)CARRY1(bVar7,bVar39);
  unaff_retaddr = (uint *)CONCAT22((short)((uint)puVar49 >> 0x10),puStack_8._0_2_);
  pbVar11 = pbVar11 + (uint)(CARRY4(uVar38,(uint)puVar32) ||
                            CARRY4(uVar2 + (int)puVar32,(uint)CARRY1(bVar7,bVar39))) +
                      *(int *)((int)puVar22 + (int)puVar32);
  puVar45 = param_3;
  uVar29 = puStack_8._0_2_;
code_r0x00404cca:
  puStack_8._0_2_ = uVar29;
  cVar6 = (char)pbVar11 + '\x04';
  puVar47 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
  if (SCARRY1((char)pbVar11,'\x04') == cVar6 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
  puVar31 = puVar45 + 1;
  out(*puVar45,(short)puVar32);
  uVar38 = *puVar22;
  uVar2 = *puVar32;
  bVar7 = (byte)puVar22;
  *(byte *)puVar32 = (byte)*puVar32 + bVar7;
  iVar15 = (CONCAT31((int3)((uint)puVar47 >> 8),(char)puVar47 + '\x03') & uVar38) + iRam00008c38;
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar32;
  pcVar10 = (char *)(iVar15 + (uint)CARRY1((byte)uVar2,bVar7) + 0x1246f);
  uVar20 = (undefined3)((uint)puVar22 >> 8);
  bVar7 = bVar7 | (byte)*puVar32;
  puVar23 = (uint *)CONCAT31(uVar20,bVar7);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar10 >> 8);
  puVar47 = (uint *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + *pcVar10) + 0x1fbeef2);
  uVar38 = *puVar47;
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  if (CARRY4(uVar38,(uint)puVar47)) {
    *puVar47 = (uint)(*puVar47 + (int)puVar47);
    pcVar10 = (char *)CONCAT31(uVar20,bVar7 | bRam00282809);
    cVar6 = (char)((uint)puVar22 >> 8);
    *(byte *)puVar43 = (byte)*puVar43 + cVar6;
    *pcVar10 = *pcVar10 - cVar6;
    *(byte *)puVar47 = *(byte *)puVar47 + (char)puVar47;
    iVar15 = (int)pcVar10 - *puVar43;
    puVar45 = puVar45 + 2;
    out(*puVar31,(short)puVar32);
    *puVar47 = (uint)(*puVar47 + (int)puVar47);
    puVar23 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar38 = *puVar47;
    bVar7 = (byte)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + bVar7;
    puVar31 = puVar45 + 1;
    out(*puVar45,(short)puVar32);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar39 = bVar7 + in_AF * '\x06';
    puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),
                               bVar39 + (0x90 < (bVar39 & 0xf0) |
                                        CARRY1((byte)uVar38,bVar7) | in_AF * (0xf9 < bVar39)) * '`')
    ;
  }
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  bVar7 = (byte)puVar47 | (byte)*puVar49;
  puVar45 = puVar31 + 1;
  uVar28 = SUB42(puVar32,0);
  out(*puVar31,uVar28);
  *(byte *)puVar23 = (byte)*puVar23 - bVar7;
  uVar38 = *puVar32;
  bVar39 = (byte)puVar23;
  *(byte *)puVar32 = (byte)*puVar32 + bVar39;
  iVar15 = CONCAT31((int3)((uint)puVar47 >> 8),bVar7) + *puVar45 + (uint)CARRY1((byte)uVar38,bVar39)
  ;
  pcVar10 = (char *)((int)puVar37 - *puVar32);
  uVar20 = (undefined3)((uint)iVar15 >> 8);
  cVar6 = (char)iVar15 + (byte)*puVar45 + (puVar37 < (uint *)*puVar32);
  puVar47 = (uint *)CONCAT31(uVar20,cVar6);
  bVar7 = (byte)((uint)puVar23 >> 8);
  *(byte *)puVar23 = (byte)*puVar23 - bVar7;
  *puVar47 = (uint)(*puVar47 + (int)puVar47);
  bVar39 = bVar39 | *(byte *)((int)puVar32 + (int)puVar47);
  uVar29 = (undefined2)((uint)puVar23 >> 0x10);
  if ((POPCOUNT(bVar39) & 1U) == 0) {
    *(byte *)puVar47 = (byte)*puVar47 + cVar6;
    pcVar18 = (char *)CONCAT31(uVar20,cVar6 + '\x12');
    *pcVar18 = *pcVar18 + bVar7;
    puVar47 = (uint *)CONCAT31(uVar20,(cVar6 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar23 >> 8),bVar39));
    uVar38 = *puVar32;
    *(byte *)puVar32 = (byte)*puVar32 + bVar39;
    if (!CARRY1((byte)uVar38,bVar39)) {
      pbVar11 = (byte *)((uint)puVar47 | *puVar47);
      out(*puVar45,uVar28);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar8 = *pbVar11;
      piVar17 = (int *)CONCAT22(uVar29,CONCAT11(bVar7 | bVar8,bVar39));
      iVar15 = (int)pbVar11 - *piVar17;
      *(byte *)puVar32 = (byte)*puVar32 + bVar39;
      puVar47 = puVar31 + 3;
      out(puVar31[2],uVar28);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar17 + iVar15) = *(char *)((int)piVar17 + iVar15) - (bVar7 | bVar8);
      *(byte *)puVar32 = (byte)*puVar32 + bVar39;
      pbVar11 = (byte *)(iVar15 + -0x120edecd);
      *(byte *)puVar47 = (byte)*puVar47 + 1;
      bVar7 = *pbVar11;
      bVar8 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      pcVar10 = pcVar10 + ((-1 - *(int *)((int)puVar49 + 0x42)) - (uint)CARRY1(bVar7,bVar8));
      *pbVar11 = *pbVar11 + bVar8;
      bVar7 = (byte)puVar43 | (byte)((uint)pbVar11 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar11;
      uVar38 = *puVar32;
      pcVar18 = (char *)(((uint)pbVar11 | 0x11) + 0x511072c);
      puVar45 = puVar31 + 4;
      out(*puVar47,uVar28);
      puVar32 = (uint *)((int)puVar32 + 1);
      *pcVar18 = *pcVar18 + (char)pcVar18;
      bVar8 = (byte)((uint)pcVar18 >> 8);
      puVar43 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar43 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar43 >> 8) | (byte)uVar38,
                                                          bVar7)) >> 8),bVar7 | bVar8);
      uVar20 = (undefined3)((uint)pcVar18 >> 8);
      bVar7 = (char)pcVar18 - *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar20,bVar7);
      *pcVar18 = *pcVar18 + bVar7;
      *(int *)((int)pcVar18 * 2) = (int)(*(int *)((int)pcVar18 * 2) + (int)puVar43);
      *(byte *)puVar32 = *(byte *)puVar32 + bVar7;
      *pcVar10 = *pcVar10 + bVar8;
      in_AF = 9 < (bVar7 & 0xf) | in_AF;
      uVar38 = CONCAT31(uVar20,bVar7 + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar38;
      pbVar11 = (byte *)CONCAT22((short)(uVar38 >> 0x10),CONCAT11(bVar8 + in_AF,bVar7));
      *(byte *)puVar45 = (byte)*puVar45 + bVar39;
      *pbVar11 = *pbVar11 + bVar7;
      *pbVar11 = *pbVar11 + bVar7;
      bVar50 = CARRY1(bVar7,*pbVar11);
      puVar47 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 + *pbVar11);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar43 = (byte)*puVar43 - (char)puVar32;
  }
  *(byte *)puVar47 = (byte)*puVar47 + (char)puVar47;
  bVar50 = false;
  piVar17 = (int *)CONCAT22(uVar29,CONCAT11(bVar7 | (byte)*puVar32,bVar39));
code_r0x00404d9a:
  do {
    puVar37 = puVar32;
    *puVar47 = (*puVar47 - (int)puVar47) - (uint)bVar50;
    bVar7 = (byte)((uint)piVar17 >> 8);
    uVar29 = (undefined2)((uint)piVar17 >> 0x10);
    bVar39 = (byte)piVar17;
    bVar8 = bVar7 + (byte)iRam00000c00;
    pbVar11 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar7,(byte)iRam00000c00));
    *(byte *)puVar37 = (byte)*puVar37 + bVar39;
    puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),(char)puVar43 - (byte)*puVar45);
    bVar7 = *pbVar11;
    puVar47 = (uint *)(pbVar11 + (uint)CARRY1(bVar8,*pbVar11) + *(int *)pbVar11);
    *(byte *)puVar37 = (byte)*puVar37 + bVar39;
    cVar5 = ((bVar8 + bVar7) - (byte)*puVar37) + (byte)*puVar47;
    pcVar18 = (char *)CONCAT22(uVar29,CONCAT11(cVar5,bVar39));
    puVar31 = puVar49 + 1;
    uVar38 = in((short)puVar37);
    *puVar49 = uVar38;
    cVar6 = (char)puVar47;
    *(byte *)puVar47 = (byte)*puVar47 + cVar6;
    uVar20 = (undefined3)((uint)puVar37 >> 8);
    bVar8 = (byte)puVar37 | (byte)*puVar45;
    pcVar24 = (char *)CONCAT31(uVar20,bVar8);
    *pcVar18 = *pcVar18 + '\x01';
    bVar7 = (cVar5 - *pcVar24) + (byte)*puVar47;
    pcVar18 = (char *)CONCAT22(uVar29,CONCAT11(bVar7,bVar39));
    puVar49 = puVar49 + 2;
    uVar38 = in((short)pcVar24);
    *puVar31 = uVar38;
    *(byte *)puVar47 = (byte)*puVar47 + cVar6;
    bVar8 = bVar8 | (byte)*puVar45;
    puVar32 = (uint *)CONCAT31(uVar20,bVar8);
    *pcVar18 = *pcVar18 + '\x01';
    bVar50 = bVar39 < *(byte *)((int)puVar32 + 2);
    cVar5 = bVar39 - *(byte *)((int)puVar32 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar5);
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  *(byte *)puVar47 = (byte)*puVar47 + cVar6;
  bVar39 = cVar6 + 0x7b;
  pbVar11 = (byte *)CONCAT31((int3)((uint)puVar47 >> 8),bVar39);
  *(byte *)((int)puVar43 + (int)pbVar11) = *(byte *)((int)puVar43 + (int)pbVar11) + bVar39;
  puVar31 = puVar45 + 1;
  uVar28 = SUB42(puVar32,0);
  out(*puVar45,uVar28);
  pbVar16 = (byte *)((int)puVar43 + -1);
  *pbVar11 = *pbVar11 + bVar39;
  bVar7 = bVar7 | (byte)*puVar32;
  piVar17 = (int *)CONCAT22(uVar29,CONCAT11(bVar7,cVar5));
  *pbVar11 = *pbVar11 + bVar39;
  *pbVar16 = *pbVar16 + bVar8;
  *pbVar16 = *pbVar16 ^ bVar39;
  *(byte *)puVar32 = (byte)*puVar32 + bVar7;
  *pbVar11 = *pbVar11 + bVar39;
  do {
    bVar26 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar49 = (byte)*puVar49 + bVar26;
    bVar7 = *pbVar11;
    bVar39 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar39;
    *(byte **)((int)puVar43 + 0x17) =
         (byte *)((int)puVar31 + (uint)CARRY1(bVar7,bVar39) + *(int *)((int)puVar43 + 0x17));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar21 = (undefined3)((uint)pbVar11 >> 8);
    bVar39 = bVar39 | (byte)*puVar31;
    puVar49 = (uint *)((int)puVar49 + *(int *)(pcVar10 + -0x34));
    *(char *)CONCAT31(uVar21,bVar39) = *(char *)CONCAT31(uVar21,bVar39) + bVar39;
    bVar7 = bVar39 + 2;
    cVar6 = (char)((uint)puVar37 >> 8);
    bVar27 = (byte)piVar17;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      pbVar11 = (byte *)CONCAT31(uVar21,bVar39 + 0x15 + (0xfd < bVar39));
      if (0xec < bVar7 || CARRY1(bVar39 + 0x15,0xfd < bVar39)) {
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      }
code_r0x00404e60:
      pcVar10 = pcVar10 + -*puVar32;
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      pbVar33 = (byte *)((int)puVar31 + (-(uint)CARRY1(bVar7,(byte)pbVar11) - *(int *)pbVar11));
      pbVar11 = pbVar11 + *(int *)pbVar11;
      puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_DS);
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      *(char *)piVar17 = (char)*piVar17 + cVar6;
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      *(byte **)(pbVar16 + (int)puVar32) =
           (byte *)((int)puVar32 +
                   (uint)CARRY1(bVar7,(byte)pbVar11) + *(int *)(pbVar16 + (int)puVar32));
      pbVar11 = pbVar11 + 0x73061314;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      uVar21 = (undefined3)((uint)piVar17 >> 8);
      bVar27 = bVar27 | (byte)*puVar32;
      pcVar24 = (char *)CONCAT31(uVar21,bVar27);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      cVar6 = (char)pbVar11 + 'o';
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
      *pcVar18 = *pcVar18 + cVar6;
      out(*(undefined4 *)pbVar33,uVar28);
      uVar38 = *puVar32;
      *(byte *)puVar32 = (byte)*puVar32 + bVar27;
      pcVar18 = pcVar18 + (uint)CARRY1((byte)uVar38,bVar27) + *puVar49;
      *pcVar18 = *pcVar18 + (char)pcVar18;
      *pcVar24 = *pcVar24 + bVar8;
      puVar31 = (uint *)(pbVar33 + 8);
      out(*(undefined4 *)(pbVar33 + 4),uVar28);
      *(byte *)puVar32 = (byte)*puVar32 + bVar27;
      piVar17 = (int *)((uint)pcVar18 | *puVar49);
      pcVar24[0x390a0000] = pcVar24[0x390a0000] - bVar26;
      pbVar16 = (byte *)0x7000000;
      *(byte *)puVar49 = (byte)*puVar49 - bVar26;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar47 = (uint *)CONCAT31(uVar21,bVar27 | *(byte *)((int)piVar17 + (int)pcVar24));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar26;
      cRam07000000 = cRam07000000 + bVar26;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar11 = (byte *)((int)puVar49 + (int)pcVar10 * 2);
      bVar50 = SCARRY1(*pbVar11,(char)piVar17);
      *pbVar11 = *pbVar11 + (char)piVar17;
      bVar7 = *pbVar11;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7;
    bVar39 = bVar39 + 0x71;
    pbVar11 = (byte *)CONCAT31(uVar21,bVar39);
    *pbVar11 = *pbVar11;
    *(byte *)puVar31 = (byte)*puVar31 + 1;
    *piVar17 = (*piVar17 - (int)pbVar11) - (uint)(0x90 < bVar7);
    uVar38 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar39;
    if (!CARRY1((byte)uVar38,bVar39)) goto code_r0x00404e60;
    *pbVar11 = *pbVar11 + bVar39;
    uVar29 = (undefined2)((uint)piVar17 >> 0x10);
    bVar26 = bVar26 | *pbVar11;
    pbVar11 = pbVar11 + -*(int *)pbVar11;
    *pbVar16 = *pbVar16 + bVar26;
    cVar5 = bVar27 - *(byte *)((int)puVar32 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar29,CONCAT11(bVar26,bVar27)) >> 8),cVar5);
  } while ((POPCOUNT(cVar5) & 1U) != 0);
  cVar4 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar4;
  uVar21 = (undefined3)((uint)pbVar11 >> 8);
  pcVar18 = (char *)CONCAT31(uVar21,cVar4 + '{');
  out(*puVar31,uVar28);
  *pcVar18 = *pcVar18 + cVar4 + '{';
  bVar39 = cVar4 + 0x7e;
  pbVar11 = (byte *)CONCAT31(uVar21,bVar39);
  puVar31 = puVar45 + 3;
  out(puVar45[2],uVar28);
  pbVar16 = (byte *)((int)puVar43 + -2);
  *pbVar11 = *pbVar11 + bVar39;
  bVar26 = bVar26 | (byte)*puVar32;
  puVar47 = (uint *)CONCAT22(uVar29,CONCAT11(bVar26,cVar5));
  *pbVar11 = *pbVar11 + bVar39;
  *pbVar16 = *pbVar16 + bVar8;
  *pbVar16 = *pbVar16 ^ bVar39;
  *(byte *)puVar32 = (byte)*puVar32 + bVar26;
  *pbVar11 = *pbVar11 + bVar39;
  *pbVar11 = *pbVar11 + cVar6;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar39;
  puVar43[6] = (uint)((int)puVar31 + (uint)CARRY1(bVar7,bVar39) + puVar43[6]);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  bVar39 = bVar39 | (byte)*puVar31;
  puVar49 = (uint *)((int)puVar49 + *(int *)(pcVar10 + -0x33));
  *(char *)CONCAT31(uVar21,bVar39) = *(char *)CONCAT31(uVar21,bVar39) + bVar39;
  bVar50 = SCARRY1(bVar39,'\x02');
  bVar7 = bVar39 + 2;
  piVar17 = (int *)CONCAT31(uVar21,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    return CONCAT31(uVar21,bVar39 + 0x71);
  }
code_r0x00404ebf:
  bVar39 = (byte)piVar17;
  uVar21 = (undefined3)((uint)piVar17 >> 8);
  if (bVar7 != 0 && bVar50 == (char)bVar7 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar39;
    puVar31[(int)puVar49 * 2] =
         (uint)((int)puVar32 + (uint)(0xd2 < bVar39) + puVar31[(int)puVar49 * 2]);
    return CONCAT31(uVar21,bVar39 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar7 = *pbVar16;
  *puVar31 = (uint)(*puVar31 + (int)piVar17);
  bVar27 = (byte)((uint)puVar47 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar27;
  *(byte *)piVar17 = (char)*piVar17 + bVar39;
  pbVar11 = (byte *)(CONCAT31(uVar20,bVar8 | bVar7) - *(int *)pbVar16);
  puVar45 = (uint *)CONCAT31(uVar21,bVar39 + 6);
  *(uint *)(pbVar16 + (int)puVar31 * 2) =
       (int)puVar45 + (uint)(0xf9 < bVar39) + *(int *)(pbVar16 + (int)puVar31 * 2);
  *(byte *)puVar47 = (byte)*puVar47 ^ bVar39 + 6;
  bVar39 = (byte)puVar47;
  *pbVar11 = *pbVar11 + bVar39;
  puVar43 = puVar31 + 1;
  uVar29 = SUB42(pbVar11,0);
  out(*puVar31,uVar29);
  *puVar47 = *puVar47 ^ (uint)puVar45;
  *pbVar11 = *pbVar11 + bVar39;
  puVar37 = (uint *)(pbVar16 + -*(int *)pbVar16);
  *(uint *)((int)puVar49 + 0x31) = *(uint *)((int)puVar49 + 0x31) | (uint)pcVar10;
  *puVar45 = *puVar45 + (int)puVar45;
  puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar27 | (byte)*puVar37,bVar39)
                            );
  *(byte **)(pbVar11 + 0x6e) = (byte *)(*(int *)(pbVar11 + 0x6e) + (int)puVar43);
  piVar17 = (int *)((uint)puVar45 | *puVar45);
  bVar8 = (byte)puVar37;
  *(byte *)puVar49 = (byte)*puVar49 - bVar8;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar39;
  if (CARRY1(bVar7,bVar39)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar7 = pbVar11[0x11];
    uVar28 = (undefined2)((uint)puVar37 >> 0x10);
    out(*puVar43,uVar29);
    puVar47 = (uint *)((int)puVar47 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar30 = (byte)((uint)puVar37 >> 8) | bVar7 | *pbVar11;
    pcVar18 = (char *)((int)piVar17 + -0x21000001);
    bVar7 = (byte)pcVar18 | 0x11;
    uVar20 = (undefined3)((uint)pcVar18 >> 8);
    cVar6 = bVar7 - 7;
    pcVar24 = (char *)CONCAT31(uVar20,cVar6);
    *puVar49 = (uint)(pcVar24 + (uint)(bVar7 < 7) + *puVar49);
    puVar43 = puVar31 + 3;
    out(puVar31[2],uVar29);
    pbVar11 = pbVar11 + 1;
    *pcVar24 = *pcVar24 + cVar6;
    bVar27 = (byte)((uint)pcVar18 >> 8);
    bVar26 = bVar8 | bVar27;
    bVar39 = cVar6 - *pcVar24;
    bVar7 = *(byte *)puVar47;
    *(byte *)puVar47 = *(byte *)puVar47 + bVar39;
    *(char *)CONCAT31(uVar20,bVar39) =
         *(char *)CONCAT31(uVar20,bVar39) + bVar39 + CARRY1(bVar7,bVar39);
    *pbVar11 = *pbVar11 + bVar39;
    *(byte *)puVar43 = (byte)*puVar43 + bVar26;
    bVar7 = (byte)((uint)pbVar11 >> 8);
    *(byte *)puVar47 = *(byte *)puVar47 + bVar39 + CARRY1((byte)pbVar11,bVar7);
    piVar17 = (int *)CONCAT31(uVar20,bVar39);
    *(byte *)piVar17 = (char)*piVar17 + bVar39;
    pbVar11 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                               CONCAT11(bVar7 + bVar27,(byte)pbVar11 + bVar7));
    puVar37 = (uint *)CONCAT22(uVar28,CONCAT11(bVar30 + *(char *)(CONCAT31((int3)(CONCAT22(uVar28,
                                                  CONCAT11(bVar30,bVar8)) >> 8),bVar26) + 0x76),
                                               bVar26));
    puStack_8._0_2_ = puStack_14._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar18 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar47);
    cVar4 = (char)puVar47;
    *pbVar11 = *pbVar11 + cVar4;
    uVar29 = (undefined2)((uint)puVar37 >> 0x10);
    cVar35 = (char)puVar37;
    cVar41 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + 0x75);
    *pcVar18 = *pcVar18 + (char)pcVar18;
    cVar6 = (char)pcVar18 + 'o';
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar6);
    *pcVar18 = *pcVar18 + cVar6;
    cVar40 = (char)((uint)puVar47 >> 8);
    *pcVar10 = *pcVar10 - cVar40;
    pbVar11[1] = pbVar11[1] + cVar4;
    pcVar18 = pcVar18 + -0x757b021b;
    cVar6 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar6;
    uVar20 = (undefined3)((uint)pcVar18 >> 8);
    cVar5 = cVar6 + 'o';
    pcVar18 = (char *)CONCAT31(uVar20,cVar5);
    pbVar33 = pbVar11 + 2;
    *pcVar18 = *pcVar18 + cVar5;
    iVar15 = CONCAT22(uVar29,CONCAT11(cVar41 + *(char *)(CONCAT22(uVar29,CONCAT11(cVar41,cVar35)) +
                                                        0x76),cVar35));
    *pcVar18 = *pcVar18 + cVar5;
    pcVar18 = (char *)CONCAT31(uVar20,cVar6 + -0x22);
    puVar31 = (uint *)((int)puVar49 + 1);
    *(byte *)puVar49 = (byte)*puVar43;
    *pcVar18 = *pcVar18 + cVar6 + -0x22;
    *(byte *)((int)puVar47 + (int)pcVar18) =
         *(byte *)((int)puVar47 + (int)pcVar18) - (char)((uint)pbVar33 >> 8);
    *pbVar33 = *pbVar33 + cVar4;
    bVar39 = cVar40 - pbVar11[4];
    pbVar16 = (byte *)((int)puVar43 + 5);
    out(*(undefined4 *)((int)puVar43 + 1),(short)pbVar33);
    puVar43 = (uint *)((uint)(pcVar18 + *(int *)(pcVar18 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar43 = (byte)*puVar43 << 1 | (char)(byte)*puVar43 < '\0';
    *pbVar16 = *pbVar16 + (char)puVar43;
    pbVar16 = pbVar16 + *(int *)(pbVar11 + -0x5c);
    pbVar11 = (byte *)((uint)puVar43 | *puVar43);
    *pbVar16 = *pbVar16 + (char)pbVar11;
    puVar37 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar35 - (char)pbVar33);
    bVar7 = *pbVar11;
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),CONCAT11(bVar39 + *pbVar11,cVar4));
    iVar15 = *(int *)pbVar11;
    *pbVar33 = *pbVar33 + cVar4;
    cVar6 = (char)(pbVar11 + (uint)CARRY1(bVar39,bVar7) + iVar15) + 'r';
    puVar45 = (uint *)CONCAT31((int3)((uint)(pbVar11 + (uint)CARRY1(bVar39,bVar7) + iVar15) >> 8),
                               cVar6);
    pbVar11 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),CONCAT11(10,(char)pbVar33));
    *(char *)(puVar45 + 10) = (char)puVar45[10] + '\n';
    *pbVar16 = *pbVar16 + cVar6;
    puVar43 = (uint *)(pbVar16 + *(int *)(pbVar11 + -0x5e));
    uVar38 = *puVar45;
    cVar6 = (char)((uint)puVar45 | uVar38);
    *(byte *)puVar43 = (byte)*puVar43 + cVar6;
    uVar20 = (undefined3)(((uint)puVar45 | uVar38) >> 8);
    cVar5 = cVar6 + (byte)*puVar37;
    puVar45 = (uint *)CONCAT31(uVar20,cVar5);
    if (SCARRY1(cVar6,(byte)*puVar37) == cVar5 < '\0') goto code_r0x00405090;
    *(byte *)puVar45 = (byte)*puVar45 + cVar5;
    piVar17 = (int *)CONCAT31(uVar20,cVar5 + '\x02');
    puVar49 = puVar31;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar11) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar20 = (undefined3)((uint)piVar17 >> 8);
  cVar6 = (char)piVar17 + '}';
  pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
  pbVar11[(int)pbVar16] = pbVar11[(int)pbVar16] + cVar6;
  pbVar11[0x280a0000] = pbVar11[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar7 = (byte)puVar47 & 7;
  *pbVar16 = *pbVar16 << bVar7 | *pbVar16 >> 8 - bVar7;
  *(byte *)puVar43 = (byte)*puVar43 + cVar6;
  cVar4 = (char)puVar37 - (byte)*puVar43;
  uVar29 = (undefined2)((uint)puVar37 >> 0x10);
  cVar40 = (char)((uint)puVar37 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar37 >> 8),cVar4) + 0x7c)
  ;
  pcVar18 = (char *)CONCAT22(uVar29,CONCAT11(cVar40,cVar4));
  *pbVar16 = *pbVar16 + cVar6;
  bVar39 = (char)piVar17 + 0xa7U & *pbVar11;
  puVar31 = (uint *)((int)puVar49 + *(int *)(pcVar10 + 0x7c));
  *(char *)CONCAT31(uVar20,bVar39) = *(char *)CONCAT31(uVar20,bVar39) + bVar39;
  bVar39 = bVar39 + 0x2a;
  pbVar16 = (byte *)CONCAT31(uVar20,bVar39);
  *pbVar16 = *pbVar16 + bVar39;
  *pcVar18 = *pcVar18 + cVar4;
  *pbVar11 = *pbVar11 ^ bVar39;
  *pcVar18 = *pcVar18 + bVar39;
  bVar7 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar39;
  cVar6 = (bVar39 - *pbVar16) - CARRY1(bVar7,bVar39);
  *(byte *)puVar47 = (byte)*puVar47 + (byte)pbVar11;
  cVar40 = cVar40 + pcVar18[0x7b];
  *(char *)CONCAT31(uVar20,cVar6) = *(char *)CONCAT31(uVar20,cVar6) + cVar6;
  pcVar18 = (char *)CONCAT31(uVar20,cVar6 + 'o');
  *pcVar18 = *pcVar18 + cVar6 + 'o';
  pcVar18 = pcVar18 + 0x2ed7fde6;
  cVar5 = (char)pcVar18;
  *pcVar18 = *pcVar18 + cVar5;
  cVar6 = *(char *)(CONCAT22(uVar29,CONCAT11(cVar40,cVar4)) + 0x7b);
  *pcVar18 = *pcVar18 + cVar5;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar18 >> 8),cVar5 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar21 = (undefined3)((uint)pbVar11 >> 8);
  bVar39 = (byte)pbVar11 | (byte)*puVar43;
  pbVar33 = (byte *)CONCAT31(uVar21,bVar39);
  uVar38 = CONCAT22(uVar29,CONCAT11(cVar40 + cVar6,cVar4)) | (uint)puVar43;
  uVar20 = (undefined3)((uint)piVar17 >> 8);
  bVar7 = (byte)piVar17 | *pbVar33;
  pbVar16 = (byte *)CONCAT31(uVar20,bVar7);
  cVar6 = (byte)puVar47 - bVar39;
  puVar47 = (uint *)CONCAT31((int3)((uint)puVar47 >> 8),cVar6);
  *pbVar16 = *pbVar16 + bVar7;
  puVar45 = puVar43 + 1;
  out(*puVar43,(short)pbVar33);
  *pbVar16 = bVar7;
  *pbVar33 = *pbVar33 + cVar6;
  puVar43 = puVar43 + 2;
  out(*puVar45,(short)pbVar33);
  *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
  puVar37 = (uint *)(CONCAT31((int3)(uVar38 >> 8),(char)uVar38 - (char)((uint)pbVar11 >> 8)) |
                    (uint)puVar43);
  pbVar11 = (byte *)CONCAT31(uVar21,(bVar39 | (byte)*puVar43) + (byte)*puVar31);
  cVar6 = bVar7 - (byte)*puVar31;
  puVar45 = (uint *)CONCAT31(uVar20,cVar6 - *(char *)CONCAT31(uVar20,cVar6));
code_r0x00405090:
  *puVar45 = (uint)(pbVar11 + *puVar45);
  cVar6 = (char)puVar45;
  *(byte *)puVar45 = (byte)*puVar45 + cVar6;
  *(byte *)puVar45 = (byte)*puVar45 + cVar6;
  *(byte *)puVar45 = (byte)*puVar45 + cVar6;
  *puVar47 = *puVar47 - (int)pcVar10;
  uVar38 = *puVar43;
  bVar7 = (byte)pbVar11;
  *(byte *)puVar43 = (byte)*puVar43 + bVar7;
  *(byte *)puVar45 = (byte)*puVar45 + cVar6 + CARRY1((byte)uVar38,bVar7);
  *(byte *)puVar47 = (byte)*puVar47 + cVar6;
  uVar38 = *puVar37;
  *(byte *)puVar37 = (byte)*puVar37 + 0x72;
  *(byte *)puVar37 = (byte)*puVar37;
  cVar6 = (char)((uint)pbVar11 >> 8);
  if (SCARRY1((byte)uVar38,'r')) {
    puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar11 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar43 = (byte)*puVar43 + (char)puVar45;
      uVar20 = (undefined3)((uint)puVar45 >> 8);
      cVar5 = (char)puVar45 + (byte)*puVar37;
      pcVar18 = (char *)CONCAT31(uVar20,cVar5);
      puVar37 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),
                                 CONCAT11((char)((uint)puVar37 >> 8) +
                                          *(byte *)((int)puVar37 + 0x7b),(char)puVar37));
      *pcVar18 = *pcVar18 + cVar5;
      in_AF = 9 < (cVar5 + 0x6fU & 0xf) | in_AF;
      uVar38 = CONCAT31(uVar20,cVar5 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar8 = (byte)uVar38;
      piVar17 = (int *)CONCAT22((short)(uVar38 >> 0x10),
                                CONCAT11((char)((uint)puVar45 >> 8) + in_AF,bVar8));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar20 = (undefined3)((uint)piVar17 >> 8);
      bVar8 = bVar8 | *(byte *)(piVar17 + 0x354a);
      bVar8 = bVar8 - *(char *)CONCAT31(uVar20,bVar8);
      pbVar16 = (byte *)CONCAT31(uVar20,bVar8);
      bVar39 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar8;
      puVar43 = (uint *)((int)puVar43 + (-(uint)CARRY1(bVar39,bVar8) - *(int *)pbVar16));
      puVar45 = (uint *)(pbVar16 + 0xfc00);
      *pbVar11 = *pbVar11 + cVar6;
      uVar38 = *puVar45;
      bVar39 = (byte)puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + bVar39;
      uVar13 = (uint)CARRY1((byte)uVar38,bVar39);
      uVar38 = *puVar37;
      uVar2 = *puVar37;
      *puVar37 = (uint)((byte *)(uVar2 + (int)puVar45) + uVar13);
      if (!CARRY4(uVar38,(uint)puVar45) && !CARRY4(uVar2 + (int)puVar45,uVar13)) break;
      *(byte *)puVar45 = (byte)*puVar45 + bVar39;
    }
  }
  uVar38 = (uint)puVar45 | *puVar45;
  uVar29 = SUB42(pbVar11,0);
  *(byte *)puVar43 = (byte)*puVar43 + (char)uVar38;
  piVar17 = (int *)(uVar38 + 0xc1872);
  if (SCARRY4(uVar38,0xc1872)) {
    cVar5 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar5;
    *pbVar11 = *pbVar11 + cVar5;
    *(char *)piVar17 = *(char *)piVar17 + cVar5;
    *(byte *)puVar37 = (byte)*puVar37 + (char)puVar47;
    *(char *)piVar17 = *(char *)piVar17 + cVar5;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar7;
    puVar45 = puVar43;
    goto code_r0x00405117;
  }
  do {
    uVar38 = *puVar43;
    bVar7 = (byte)piVar17;
    *(byte *)puVar43 = (byte)*puVar43 + bVar7;
    if (CARRY1((byte)uVar38,bVar7)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar20 = (undefined3)((uint)puVar47 >> 8);
      bVar39 = (byte)puVar47 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar47 = (uint *)CONCAT31(uVar20,bVar39 | *(byte *)CONCAT31(uVar20,bVar39));
      uVar20 = (undefined3)((uint)piVar17 >> 8);
      bVar7 = bVar7 | *pbVar11;
      pcVar18 = (char *)CONCAT31(uVar20,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        puVar45 = puVar43 + 1;
        out(*puVar43,uVar29);
        uVar38 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar7);
        *(byte *)puVar45 = (byte)*puVar45 + bVar7;
        pcVar18 = (char *)(uVar38 | 8);
        cVar5 = (char)((uint)puVar37 >> 8) + *(byte *)((int)puVar37 + 0x7a);
        puVar49 = (uint *)CONCAT22((short)((uint)puVar37 >> 0x10),CONCAT11(cVar5,(char)puVar37));
        *pcVar18 = *pcVar18 + (char)pcVar18;
        cVar6 = (char)pcVar18 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar38 >> 8),cVar6);
        *(char *)piVar17 = (char)*piVar17 + cVar6;
        *(byte *)puVar47 = (byte)*puVar47 + 1;
        puVar43 = puVar43 + 2;
        out(*puVar45,uVar29);
        pbVar11 = (byte *)((uint)pbVar11 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar5;
        do {
          bVar7 = (byte)iVar15;
          *(byte *)puVar43 = (byte)*puVar43 + bVar7;
          bVar50 = CARRY1(bVar7,(byte)*puVar49);
          uVar20 = (undefined3)((uint)iVar15 >> 8);
          cVar6 = bVar7 + (byte)*puVar49;
          pbVar16 = (byte *)CONCAT31(uVar20,cVar6);
          uVar29 = in_DS;
          uVar28 = uStack_54;
          if (SCARRY1(bVar7,(byte)*puVar49) == cVar6 < '\0') goto GenerateStatusText;
          *pbVar16 = *pbVar16 + cVar6;
          uVar38 = CONCAT31(uVar20,cVar6 + '\'') + 0x1ebd9f3;
          uStack_58 = (undefined1)puStack_8._0_2_;
          uStack_57 = (undefined1)((ushort)puStack_8._0_2_ >> 8);
          piVar17 = (int *)(uVar38 ^ 0x73060000);
          puVar47 = (uint *)((int)puVar47 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar49 = (uint *)CONCAT22((short)((uint)puVar49 >> 0x10),
                                     CONCAT11((byte)((uint)puVar49 >> 8) | pcVar10[0x7e],
                                              (char)puVar49));
          cVar6 = (char)uVar38;
          *(char *)piVar17 = (char)*piVar17 + cVar6;
          uVar38 = CONCAT31((int3)((uint)piVar17 >> 8),cVar6 + '\x02');
          bVar50 = 0xd9f2d2da < uVar38;
          iVar15 = uVar38 + 0x260d2d25;
          pcVar18 = pcVar10;
          do {
            uVar20 = (undefined3)((uint)iVar15 >> 8);
            bVar39 = (char)iVar15 + -2 + bVar50;
            pbVar16 = (byte *)CONCAT31(uVar20,bVar39);
            bVar7 = *pbVar16;
            *pbVar16 = *pbVar16 + bVar39;
            bVar8 = (byte)puVar49;
            uStack_54 = puStack_8._0_2_;
            if (CARRY1(bVar7,bVar39)) {
              *pbVar16 = *pbVar16 + bVar39;
              puVar49 = (uint *)CONCAT22((short)((uint)puVar49 >> 0x10),
                                         CONCAT11((byte)((uint)puVar49 >> 8) | pcVar18[0x7f],bVar8))
              ;
              *pbVar16 = *pbVar16 + bVar39;
              pbVar16 = (byte *)CONCAT31(uVar20,bVar39 + 0x2a);
              *pbVar16 = *pbVar16 + bVar39 + 0x2a;
              *(byte *)puVar49 = (byte)*puVar49 + (char)pbVar11;
              uVar29 = in_DS;
              while( true ) {
                in_DS = uVar29;
                bVar39 = (byte)pbVar16;
                *pbVar11 = *pbVar11 ^ bVar39;
                *pbVar11 = *pbVar11 + (char)puVar49;
                *pbVar16 = *pbVar16 + bVar39;
                *(byte *)puVar49 = (byte)*puVar49 + (char)((uint)pbVar11 >> 8);
                bVar7 = *pbVar16;
                *pbVar16 = *pbVar16 + bVar39;
                uVar38 = *puVar49;
                uVar2 = *puVar49;
                *puVar49 = (uint)(pbVar16 + uVar2 + CARRY1(bVar7,bVar39));
                uVar20 = (undefined3)((uint)pbVar16 >> 8);
                if (CARRY4(uVar38,(uint)pbVar16) ||
                    CARRY4((uint)(pbVar16 + uVar2),(uint)CARRY1(bVar7,bVar39))) break;
                *(byte *)puVar43 = (byte)*puVar43 + bVar39;
                pcVar24 = (char *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                           CONCAT11((char)((uint)puVar47 >> 8) + *pbVar16,
                                                    (char)puVar47));
                *(byte *)puVar43 = (byte)*puVar43 + bVar39;
                piVar17 = (int *)CONCAT31(uVar20,bVar39 | (byte)*puVar49);
                puVar47 = puVar43;
                while( true ) {
                  puVar43 = puVar47 + 1;
                  out(*puVar47,(short)pbVar11);
                  pbVar11 = pbVar11 + 1;
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  bVar8 = (byte)((uint)pcVar24 >> 8) | *pbVar11;
                  uVar20 = (undefined3)((uint)piVar17 >> 8);
                  bVar39 = (byte)piVar17 ^ *pbVar11;
                  pcVar19 = (char *)CONCAT31(uVar20,bVar39);
                  cRam282b0000 = cRam282b0000 - bVar8;
                  *pcVar19 = *pcVar19 + bVar39;
                  pcVar10 = pcVar18 + -*(int *)pbVar11;
                  uStack_58 = (undefined1)in_DS;
                  uStack_57 = (undefined1)((ushort)in_DS >> 8);
                  bVar7 = *(byte *)((int)puVar31 + 0x17);
                  *pcVar19 = *pcVar19 + bVar39;
                  puVar47 = (uint *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                                             CONCAT11(bVar8 + bVar7 | *pbVar11,(char)pcVar24));
                  *(byte *)puVar49 = (byte)*puVar49 + (char)puVar49;
                  *(byte *)((int)pcVar19 * 2) = *(byte *)((int)pcVar19 * 2) ^ bVar39;
                  in_AF = 9 < (bVar39 & 0xf) | in_AF;
                  bVar39 = bVar39 + in_AF * -6;
                  pbVar16 = (byte *)CONCAT31(uVar20,bVar39 + (0x9f < bVar39 | in_AF * (bVar39 < 6))
                                                             * -0x60);
                  *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
                  *(char *)((int)pbVar16 * 2) =
                       *(char *)((int)pbVar16 * 2) + (char)((uint)pbVar11 >> 8);
                  bVar50 = CARRY1((byte)*puVar47,(byte)pbVar11);
                  *(byte *)puVar47 = (byte)*puVar47 + (byte)pbVar11;
                  uVar29 = in_DS;
                  uVar28 = puStack_8._0_2_;
GenerateStatusText:
                  in_DS = uVar28;
                  pcVar18 = pcVar10;
                  uStack_54 = in_DS;
                  if (!bVar50) break;
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  iVar15 = CONCAT31((int3)((uint)puVar47 >> 8),(byte)puVar47 | *pbVar11);
                  uVar29 = (undefined2)((uint)puVar49 >> 0x10);
                  cVar4 = (char)((uint)puVar49 >> 8) + *(byte *)((int)puVar49 + 0x7d);
                  *pbVar16 = *pbVar16 + (char)pbVar16;
                  *(byte *)puVar31 = (byte)*puVar31 - (char)((uint)puVar47 >> 8);
                  iVar15 = iVar15 - *(int *)(iVar15 + 0xb0a0000);
                  cVar6 = *(char *)(CONCAT22(uVar29,CONCAT11(cVar4,(char)puVar49)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar43,(short)pbVar11);
                  pbVar11 = (byte *)CONCAT22(uStack_56,CONCAT11(uStack_57,uStack_58));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar47 = puVar43 + 2;
                  out(puVar43[1],CONCAT11(uStack_57,uStack_58));
                  pcVar18 = pcVar10 + 1;
                  cVar5 = (char)iVar15;
                  pcVar24 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                             CONCAT11((byte)((uint)iVar15 >> 8) |
                                                      *(byte *)((int)puVar31 + 0x46),cVar5));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_8._0_2_ = CONCAT11(uStack_57,uStack_58);
                  uVar20 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar47,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar20,0x5f);
                  puVar31 = (uint *)((int)puVar31 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar49 = (uint *)CONCAT22(uVar29,CONCAT11(cVar4 + cVar6 | (byte)puVar43[-0x1e],
                                                             (char)puVar49));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar43 = (uint *)CONCAT31(uVar20,0x8c);
                  puVar47[(int)puVar31 * 2] = (uint)(pbVar11 + puVar47[(int)puVar31 * 2]);
                  uVar38 = *puVar47;
                  *(byte *)puVar47 = (byte)*puVar47 + 0x8c;
                  if ((byte)uVar38 < 0x74) {
                    *pbVar11 = *pbVar11 + cVar5;
                    *(byte *)puVar49 = (byte)*puVar49 >> 1;
                    *(char *)puVar43 = (char)*puVar43 + -0x74;
                    *puVar43 = (uint)(pcVar18 + *puVar43);
                    *puVar43 = *puVar43 << 1 | (uint)((int)*puVar43 < 0);
                    *pbVar11 = *pbVar11 + cVar5;
                    pcVar10[2] = pcVar10[2] - cVar5;
                    *pbVar11 = *pbVar11 + cVar5;
                    pbVar16 = (byte *)CONCAT31(uVar20,0x83);
                    puVar43 = puVar49;
                    goto code_r0x00405312;
                  }
                  *puVar43 = (uint)(*puVar43 + (int)puVar43);
                  piVar17 = (int *)(CONCAT31(uVar20,(byte)puVar43[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar43[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar17 = (int *)((int)piVar17 + *puVar47);
                }
              }
              *pbVar11 = *pbVar11 + bVar39;
              *(byte *)puVar49 = (byte)*puVar49 - (char)pbVar11;
              *pbVar16 = *pbVar16 + bVar39;
              pbVar16 = (byte *)CONCAT31(uVar20,bVar39 | (byte)*puVar49);
            }
            else {
              cVar6 = (char)puVar47;
              *pbVar11 = *pbVar11 + cVar6;
              *(byte **)pbVar16 = pbVar11 + *(int *)pbVar16;
              *pbVar16 = *pbVar16 + bVar39;
              bVar39 = bVar39 + *pbVar16;
              pbVar16 = (byte *)CONCAT31(uVar20,bVar39);
              if (-1 < (char)bVar39) {
                *(byte *)puVar49 = (byte)*puVar49 + bVar8;
                out(*puVar43,(short)pbVar11);
                pbVar11 = pbVar11 + 1;
                *pbVar16 = *pbVar16 + bVar39;
                puVar49 = (uint *)CONCAT31((int3)((uint)puVar49 >> 8),
                                           bVar8 | (byte)((uint)iVar15 >> 8));
                cVar5 = bVar39 - (byte)*puVar47;
                pcVar10 = (char *)CONCAT31(uVar20,cVar5);
                *pcVar10 = *pcVar10 + cVar5 + (bVar39 < (byte)*puVar47);
                *pbVar11 = *pbVar11 + cVar5;
                pcVar10 = (char *)((int)pcVar10 * 2 + 0x79);
                *pcVar10 = *pcVar10 + (char)((uint)pbVar11 >> 8);
                pbVar16 = (byte *)in((short)pbVar11);
                puVar43 = puVar43 + 1;
              }
              *(byte *)puVar43 = (byte)*puVar43 + cVar6;
              *pbVar16 = *pbVar16 + (char)pbVar16;
              *pbVar16 = *pbVar16 + (char)pbVar16;
              uStack_58 = (undefined1)in_DS;
              uStack_57 = (undefined1)((ushort)in_DS >> 8);
              bVar7 = *pbVar16;
              bVar8 = (byte)((uint)puVar47 >> 8);
              bVar27 = bVar8 + *pbVar16;
              iVar15 = *(int *)pbVar16;
              *pbVar11 = *pbVar11 + cVar6;
              bVar39 = (char)(pbVar16 + (uint)CARRY1(bVar8,bVar7) + iVar15) - (byte)*puVar49;
              pbVar16 = (byte *)CONCAT31((int3)((uint)(pbVar16 + (uint)CARRY1(bVar8,bVar7) + iVar15)
                                               >> 8),bVar39);
              *(byte *)puVar49 = (byte)*puVar49 ^ bVar39;
              *pcVar18 = *pcVar18 + (char)puVar49;
              *pbVar16 = *pbVar16 + bVar39;
              *pbVar16 = *pbVar16 + bVar39;
              *pbVar16 = *pbVar16 + bVar39;
              puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                                         CONCAT11(bVar27 + *pbVar16,cVar6));
              pbVar16 = pbVar16 + (uint)CARRY1(bVar27,*pbVar16) + *(int *)pbVar16;
              *pbVar11 = *pbVar11 + cVar6;
              puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar11 + 0x3e));
            }
            *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar16;
            cVar6 = (char)pbVar16 + 'r';
            puVar43 = (uint *)((int)puVar43 + -1);
            uVar38 = CONCAT31((int3)((uint)pbVar16 >> 8),cVar6);
            *(byte *)puVar43 = *(byte *)puVar43 + cVar6;
            bVar50 = 0xfff38f8d < uVar38;
            iVar15 = uVar38 + 0xc7072;
            pcVar10 = pcVar18;
          } while (SCARRY4(uVar38,0xc7072));
        } while( true );
      }
      *pcVar18 = *pcVar18 + bVar7;
      bVar7 = bVar7 + 0x6f;
      pbVar16 = (byte *)CONCAT31(uVar20,bVar7);
      bVar39 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      uVar20 = (undefined3)
               ((uint)(pbVar16 + (uint)CARRY1(bVar39,bVar7) + *(int *)((int)puVar47 + (int)pbVar11))
               >> 8);
      cVar5 = (char)(pbVar16 + (uint)CARRY1(bVar39,bVar7) + *(int *)((int)puVar47 + (int)pbVar11)) +
              'E';
      pcVar18 = (char *)CONCAT31(uVar20,cVar5);
      *pcVar18 = *pcVar18 + cVar5;
      cVar5 = cVar5 + *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar20,cVar5);
      *pcVar18 = *pcVar18 + cVar5;
      puVar45 = (uint *)CONCAT31(uVar20,cVar5 + *pcVar18);
      *(char *)puVar45 = (char)*puVar45 + cVar5 + *pcVar18;
      pbVar16 = (byte *)((uint)puVar45 | *puVar45);
      bVar7 = *pbVar16;
      bVar39 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar39;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar39 + CARRY1(bVar7,bVar39));
      puVar45 = puVar43;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar37 = (uint *)((int)puVar37 - *puVar37);
      puVar43 = puVar45 + 1;
      out(*puVar45,uVar29);
    }
    *pbVar11 = *pbVar11 + (char)puVar47;
    bVar50 = puVar37 < (uint *)*piVar17;
    puVar37 = (uint *)((int)puVar37 - *piVar17);
    bVar7 = (byte)((uint)puVar47 >> 8);
    *(byte *)((int)puVar31 + 0x39) = (*(byte *)((int)puVar31 + 0x39) - bVar7) - bVar50;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar38 = *puVar37;
    *(int *)((int)puVar31 + 0x39) = *(int *)((int)puVar31 + 0x39) - (int)pcVar10;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar47 = (uint *)CONCAT22((short)((uint)puVar47 >> 0x10),
                               CONCAT11(bVar7 | (byte)uVar38 | (byte)*puVar37,(char)puVar47));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar6;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar7 = (char)piVar17 + 0x28;
  pbVar16 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar7);
  *pbVar16 = *pbVar16 ^ bVar7;
  *(byte *)puVar49 = (byte)*puVar49 + (char)((uint)pcVar24 >> 8);
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + (byte)pcVar24;
  piVar17 = (int *)(((uint)pbVar16 | 0x1496f09) + *puVar31 + (uint)CARRY1(bVar7,(byte)pcVar24));
  puVar45 = puVar47 + 1;
  out(*puVar47,(short)pbVar11);
  pbVar33 = pbVar11 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),(byte)pbVar33 | (byte)*puVar49);
  cVar6 = (char)piVar17 + '\x13';
  pbVar16 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar6);
  puVar43 = puVar49;
  puVar47 = puVar45;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    *pbVar11 = *pbVar11 - (char)((uint)pbVar33 >> 8);
    *pbVar16 = *pbVar16 + cVar6;
code_r0x00405396:
    bVar7 = *pbVar16;
    bVar39 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar39;
    *puVar45 = (uint)(pbVar16 + (uint)CARRY1(bVar7,bVar39) + *puVar45);
    out(*puVar45,(short)pbVar11);
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11((byte)((uint)pbVar16 >> 8) | (byte)puVar45[1],bVar39));
    *(char **)((int)puVar31 + -1) = pcVar10 + *(int *)((int)puVar31 + -1);
    out(puVar45[1],(short)pbVar11);
    *pcVar10 = *pcVar10 + bVar39;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar16 = *pbVar16 + (char)pbVar16;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar16 >> 8),(char)pbVar16 + 'o');
  puVar49 = (uint *)((int)puVar43 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar20 = (undefined3)((uint)pbVar11 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar8 = (byte)pbVar11 | *(byte *)puVar49 | *(byte *)puVar49;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*puVar47,(short)CONCAT31(uVar20,bVar8));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar8 = bVar8 | (byte)piVar17;
  iVar34 = CONCAT31(uVar20,bVar8);
  pbVar11 = (byte *)((int)piVar17 - *piVar17);
  cVar6 = (char)pbVar11;
  *pcVar24 = *pcVar24 + cVar6;
  cVar5 = (char)pcVar24 - bVar8;
  *pbVar11 = *pbVar11 + cVar6;
  uVar29 = (undefined2)((uint)pcVar24 >> 0x10);
  bVar39 = (byte)((uint)pcVar24 >> 8) | *pbVar11;
  pcVar18 = pcVar18 + -1;
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  bVar7 = *(byte *)(CONCAT22(uVar29,CONCAT11(bVar39,cVar5)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar11;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar18;
  *pbVar11 = *pbVar11 + cVar6;
  bVar7 = bVar39 | bVar7 | *(byte *)puVar49;
  iVar25 = CONCAT22(uVar29,CONCAT11(bVar7,cVar5));
  pbVar33 = (byte *)((uint)(puVar47 + 1) ^ *(uint *)(iVar34 + -0x43));
  iVar15 = *(int *)pbVar11;
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  if (SCARRY4(iVar15,(int)pbVar11)) {
    *pbVar11 = *pbVar11 + cVar6;
  }
  pbVar16 = pbVar11 + 0x5674;
  puVar31 = (uint *)((int)puVar31 +
                    (-(uint)((byte *)0xffffa98b < pbVar11) - *(int *)(pbVar33 + -0x7f)));
  bVar39 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar39;
  uVar21 = (undefined3)((uint)pbVar16 >> 8);
  bVar27 = bVar39 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar21,bVar27);
  *(uint *)(pbVar33 + (int)puVar31 * 8) =
       *(int *)(pbVar33 + (int)puVar31 * 8) + iVar34 + (uint)(0xd2 < bVar39);
  bVar39 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar27;
  if (!CARRY1(bVar39,bVar27)) {
    do {
      pbVar16 = (byte *)(iVar34 + 1);
      bVar39 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar39;
      bVar8 = (byte)((uint)piVar17 >> 8);
      bVar27 = (byte)puVar49 | bVar8;
      puVar43 = (uint *)CONCAT31((int3)((uint)puVar49 >> 8),bVar27);
      out(*(undefined4 *)pbVar33,(short)pbVar16);
      *(byte *)piVar17 = (char)*piVar17 + bVar39;
      uVar29 = (undefined2)((uint)iVar25 >> 0x10);
      cVar6 = (char)iVar25;
      pbVar11 = (byte *)CONCAT22(uVar29,CONCAT11((byte)((uint)iVar25 >> 8) | *pbVar16,cVar6));
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar39;
      *(byte *)piVar17 = (char)*piVar17 + bVar39 + CARRY1(bVar7,bVar39);
      *pbVar16 = *pbVar16 + bVar39;
      *(byte *)puVar31 = (byte)*puVar31 + bVar8;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar29,CONCAT11(0x1c,cVar6));
      *(byte *)piVar17 = (char)*piVar17 + bVar39;
      cVar5 = (char)pbVar16;
      *(byte *)puVar43 = (byte)*puVar43 + cVar5;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar39;
      *(byte *)piVar17 = (char)*piVar17 + bVar39;
      pbVar11 = pbVar33 + 8;
      out(*(undefined4 *)(pbVar33 + 4),(short)pbVar16);
      piVar17 = (int *)0xa0a0000;
      *pbVar16 = *pbVar16;
      bVar39 = cVar6 - cVar5;
      iVar25 = CONCAT22(uVar29,CONCAT11((byte)puVar31[0x14] | 0x1c | bRam0ca87216,bVar39));
      *pbVar16 = *pbVar16;
      bVar7 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar39;
      if (!CARRY1(bVar7,bVar39)) {
        piVar17 = (int *)0x1e7b7000;
        bVar7 = (byte)((uint)puVar49 >> 8) | *(byte *)(iVar34 + 3);
        puVar43 = (uint *)CONCAT22((short)((uint)puVar49 >> 0x10),CONCAT11(bVar7,bVar27));
        if (bVar7 != 0) {
          pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar5 + pbVar11[(int)puVar31 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar25 = iVar25 + 1;
        }
      }
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      iVar34 = CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | pbVar11[(int)puVar31 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar31 = (uint)((int)piVar17 + *puVar31 + 1);
      pbVar33 = pbVar33 + 0xc;
      out(*(undefined4 *)pbVar11,(short)iVar34);
      puVar49 = puVar43;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar27 = bVar27 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar21,bVar27);
  if ('\0' < (char)bVar27) {
    *(byte *)piVar17 = (char)*piVar17 + bVar27;
    puVar47 = (uint *)CONCAT31(uVar21,bVar27 + 0x28);
    *puVar47 = *puVar47 ^ (uint)puVar47;
    *(byte *)puVar49 = *(byte *)puVar49 + bVar7;
    cVar6 = (bVar27 + 0x28) - bVar7;
    pcVar10 = (char *)CONCAT31(uVar21,cVar6);
    *pcVar10 = *pcVar10 + cVar6;
    pbVar11 = (byte *)CONCAT31(uVar20,bVar8 | *(byte *)puVar49);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar49 >> 0x10),
                               CONCAT11((char)((uint)puVar49 >> 8) + *(byte *)((int)puVar43 + 0x7d),
                                        (char)puVar49));
    *pcVar10 = *pcVar10 + cVar6;
    pbVar16 = (byte *)CONCAT31(uVar21,cVar6 + 0x39U ^ *(byte *)CONCAT31(uVar21,cVar6 + 0x39U));
    *pcVar18 = *pcVar18 + bVar7;
    puVar45 = (uint *)(pbVar33 + 4);
    out(*(undefined4 *)pbVar33,(short)pbVar11);
    goto code_r0x00405396;
  }
  puVar47 = (uint *)(pbVar33 + 4);
  out(*(undefined4 *)pbVar33,(short)iVar34);
  pcVar24 = (char *)(iVar25 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar11 = (byte *)CONCAT31(uVar20,bVar8 | *(byte *)puVar49);
  goto code_r0x004052ee;
}


