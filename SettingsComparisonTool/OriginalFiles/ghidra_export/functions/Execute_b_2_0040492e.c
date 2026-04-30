/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040492e
 * Raw Name    : <Execute>b__2
 * Demangled   : <Execute>b__2
 * Prototype   : int <Execute>b__2(uint * setting, uint * param_2, byte * * param_3, byte * param_4, byte * param_5, uint * param_6, uint * param_7, uint * param_8, char * param_9, uint * param_10)
 * Local Vars  : uStack_63, uStack_64, uStack_60, uStack_62, puStack_20, setting, uStack_24, puStack_c, uStack_14, pbStack_4, ppbStack_8, uVar2, uVar1, cVar4, uVar3, cVar6, bVar5, bVar8, bVar7, in_EAX, uVar9, pcVar11, puVar10, uVar13, puVar12, iVar15, puVar14, piVar17, pbVar16, puVar19, puVar18, uVar21, pcVar20, iVar23, uVar22, uVar25, bVar24, bVar27, param_2, uVar26, iVar29, param_3, param_4, pbVar28, cVar31, param_5, bVar30, param_6, param_7, unaff_EBX, cVar32, param_8, param_9, pbVar34, param_10, ppbVar33, uVar36, puVar35, cVar38, cVar37, unaff_EBP, ppbVar39, ppbVar41, pbVar40, ppbVar42, unaff_ESI, puVar43, unaff_EDI, in_SS, in_ES, bVar44, in_DS, unaff_retaddr, in_AF
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */
/* WARNING: Type propagation algorithm not settling */

int __fastcall
<Execute>b__2(uint *setting,uint *param_2,byte **param_3,byte *param_4,byte *param_5,uint *param_6,
             uint *param_7,uint *param_8,char *param_9,uint *param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  undefined3 uVar21;
  char *in_EAX;
  ushort *puVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  byte *pbVar16;
  int *piVar17;
  uint *puVar18;
  uint *puVar19;
  undefined3 uVar22;
  char *pcVar20;
  byte bVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  int iVar23;
  byte bVar27;
  byte bVar30;
  byte *pbVar28;
  int iVar29;
  char cVar31;
  char cVar32;
  char cVar37;
  uint *unaff_EBX;
  byte **ppbVar33;
  byte *pbVar34;
  uint *puVar35;
  char cVar38;
  uint uVar36;
  byte **ppbVar39;
  byte *unaff_EBP;
  byte *pbVar40;
  byte **ppbVar41;
  byte **unaff_ESI;
  byte **ppbVar42;
  uint *unaff_EDI;
  uint *puVar43;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar44;
  byte in_AF;
  int unaff_retaddr;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_24;
  uint *puStack_20;
  undefined2 uStack_14;
  uint *puStack_c;
  byte **ppbStack_8;
  byte *pbStack_4;
  
code_r0x0040492e:
                    /* .NET CLR Managed Code */
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) +
                                        *(char *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
  do {
    *in_EAX = *in_EAX + (char)in_EAX;
    cVar4 = (char)in_EAX + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar4);
    ppbVar42 = unaff_ESI;
    if ((POPCOUNT(cVar4) & 1U) == 0) goto code_r0x00404937;
    while( true ) {
      cRam00c36f08 = cVar4;
      bVar5 = *(byte *)unaff_ESI;
      cVar4 = (char)pcVar11;
      *(byte *)unaff_ESI = *(byte *)unaff_ESI + cVar4;
      param_3 = (byte **)CONCAT22(param_3._2_2_,in_ES);
      if (SCARRY1(bVar5,cVar4) == (char)*(byte *)unaff_ESI < '\0') {
        pcVar11[(int)unaff_EBP] = pcVar11[(int)unaff_EBP] + cVar4;
        goto code_r0x00404982;
      }
      *pcVar11 = *pcVar11 + cVar4;
      pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4 + '*');
      ppbStack_8 = (byte **)CONCAT22(ppbStack_8._2_2_,in_DS);
      bVar5 = (byte)((uint)setting >> 8);
      uVar25 = (undefined2)((uint)setting >> 0x10);
      cVar4 = (char)setting;
      bVar7 = bVar5 + *pbVar40;
      pbVar40 = pbVar40 + (uint)CARRY1(bVar5,*pbVar40) + *(int *)pbVar40;
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      cVar31 = (char)unaff_EBX - *(byte *)unaff_ESI;
      bVar5 = *pbVar40;
      cVar6 = bVar7 + *pbVar40;
      pcVar20 = (char *)CONCAT22(uVar25,CONCAT11(cVar6,cVar4));
      iVar15 = *(int *)pbVar40;
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      uVar21 = (undefined3)((uint)(pbVar40 + (uint)CARRY1(bVar7,bVar5) + iVar15) >> 8);
      bVar5 = (char)(pbVar40 + (uint)CARRY1(bVar7,bVar5) + iVar15) - *(byte *)((int)param_2 + 3);
      pcVar11 = (char *)CONCAT31(uVar21,bVar5);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar31)
                                                     + -0x3a),cVar31));
      *pcVar11 = *pcVar11 + bVar5;
      in_EAX = (char *)CONCAT31(uVar21,bVar5 + 0x6f);
      *pcVar20 = (*pcVar20 - (bVar5 + 0x6f)) - (0x90 < bVar5);
      *(byte *)param_2 = (byte)*param_2 + cVar4;
      unaff_retaddr = CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
      *pcVar20 = *pcVar20 + '\x01';
      cVar6 = cVar6 - *(byte *)((int)unaff_ESI + 2);
      setting = (uint *)CONCAT22(uVar25,CONCAT11(cVar6,cVar4));
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
      pcVar11 = in_EAX + -0x1b7e2606;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar11 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar11));
      cVar4 = cRam00c36f08;
    }
  } while( true );
code_r0x00404982:
  *(char *)param_10 = (char)*param_10 + (char)param_10;
  setting = (uint *)CONCAT22((short)((uint)param_9 >> 0x10),
                             CONCAT11((byte)((uint)param_9 >> 8) | param_9[(int)param_4],
                                      (char)param_9));
  unaff_EDI = (uint *)((int)param_3 + *(int *)((int)param_7 + 0x71));
  puVar12 = param_10;
  param_2 = param_8;
  unaff_EBX = param_7;
  ppbVar42 = (byte **)param_4;
  while( true ) {
    cVar4 = (char)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + cVar4;
    uVar21 = (undefined3)((uint)puVar12 >> 8);
    cVar6 = cVar4 + '\x02';
    puVar10 = (ushort *)CONCAT31(uVar21,cVar6);
    unaff_EBP = param_5;
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x0040495b;
    *(char *)puVar10 = (char)*puVar10 + cVar6;
    bVar7 = cVar4 + 0x7d;
    iVar15 = CONCAT31(uVar21,bVar7);
    pbVar40 = param_5 + iVar15;
    bVar5 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    uVar36 = *setting;
    *(byte *)param_2 = (byte)*param_2 + (char)setting;
    pcVar11 = (char *)(((iVar15 - uVar36) - (uint)CARRY1(bVar5,bVar7)) + -0x727b0317);
    cVar4 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar4;
    uVar21 = (undefined3)((uint)pcVar11 >> 8);
    cVar6 = cVar4 + '\x02';
    pcVar11 = (char *)CONCAT31(uVar21,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) break;
    *pcVar11 = *pcVar11 + cVar6;
    bVar7 = cVar4 + 0x7d;
    iVar15 = CONCAT31(uVar21,bVar7);
    pbVar40 = param_5 + iVar15;
    bVar5 = *pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    puVar12 = (uint *)((iVar15 - *setting) - (uint)CARRY1(bVar5,bVar7));
    puVar43 = param_2;
code_r0x004049b4:
    *(byte *)puVar43 = (byte)*puVar43 + (char)setting;
    param_2 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                               ((char)puVar43 - (char)*unaff_EDI) - *(byte *)ppbVar42);
    bVar7 = *(byte *)((int)ppbVar42 + 0x72);
    *puVar12 = *puVar12 & (uint)setting;
    pbVar40 = (byte *)((int)puVar12 + 2);
    *pbVar40 = *pbVar40 + (char)((uint)puVar43 >> 8);
    bVar5 = *pbVar40;
    puVar19 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar7);
    ppbVar41 = ppbVar42;
    while (unaff_EBX = puVar19, ppbVar42 = ppbVar41, (POPCOUNT(bVar5) & 1U) == 0) {
      cVar4 = (char)puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + cVar4;
      uVar21 = (undefined3)((uint)puVar12 >> 8);
      cVar6 = cVar4 + '\x03';
      pbVar40 = (byte *)CONCAT31(uVar21,cVar6);
      ppbVar42 = ppbVar41 + 1;
      out(*ppbVar41,(short)param_2);
      in_SS = param_3._0_2_;
      *pbVar40 = *pbVar40 + cVar6;
      cVar31 = (char)setting;
      setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),
                                 CONCAT11((byte)((uint)setting >> 8) | *pbVar40,cVar31));
      *(int *)pbVar40 = *(int *)pbVar40 - (int)pbVar40;
      *(byte *)param_2 = (byte)*param_2 + cVar31;
      cVar31 = (char)puVar19 - *(byte *)((int)ppbVar41 + 6);
      unaff_EBX = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar31);
      if ((POPCOUNT(cVar31) & 1U) != 0) {
        pcVar11 = (char *)((int)unaff_EDI + (int)param_5 * 2);
        *pcVar11 = *pcVar11 + cVar6;
        ppbVar41 = (byte **)param_5;
        goto code_r0x00404a51;
      }
      *pbVar40 = *pbVar40 + cVar6;
      puVar12 = (uint *)CONCAT31(uVar21,cVar4 + 'r');
      *(byte *)puVar12 = (byte)*puVar12;
      param_3 = (byte **)CONCAT22(param_3._2_2_,in_ES);
      do {
        unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
        bVar5 = (byte)puVar12;
        *(byte *)puVar12 = (byte)*puVar12 + bVar5;
        uVar21 = (undefined3)((uint)puVar12 >> 8);
        bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
        puVar12 = (uint *)CONCAT31(uVar21,bVar5);
        cVar4 = (char)setting;
        *(byte *)param_2 = (byte)*param_2 + cVar4;
        bVar7 = (char)((uint)setting >> 8) - *(byte *)((int)ppbVar42 + 2);
        setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),CONCAT11(bVar7,cVar4));
        puVar43 = param_2;
        if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x004049b4;
        *(byte *)puVar12 = (byte)*puVar12 + bVar5;
        bVar8 = bVar5 + 2;
        puVar12 = (uint *)CONCAT31(uVar21,bVar8);
        ppbVar33 = (byte **)param_5;
        if ((POPCOUNT(bVar8) & 1U) == 0) goto code_r0x004049f5;
        ppbVar42 = param_3;
      } while (0xfd < bVar5);
      *(byte *)puVar12 = (byte)*puVar12 | bVar8;
      puVar19 = unaff_EBX;
      ppbVar41 = param_3;
      bVar5 = (byte)*puVar12;
    }
  }
  while( true ) {
    cVar4 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar4;
    uVar21 = (undefined3)((uint)pcVar11 >> 8);
    cVar6 = cVar4 + '\x02';
    pcVar11 = (char *)CONCAT31(uVar21,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) break;
    *(byte *)param_2 = (byte)*param_2 + (char)setting;
    unaff_retaddr = CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
code_r0x00404937:
    bVar5 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    uVar21 = (undefined3)((uint)pcVar11 >> 8);
    piVar17 = (int *)CONCAT31(uVar21,bVar5 + 0x6f);
    *setting = (*setting - (int)piVar17) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + (char)setting;
    iVar15 = *(int *)((int)unaff_EDI + 0x1a);
    *piVar17 = *piVar17 + (int)piVar17;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *(byte *)ppbVar42);
    *(byte *)setting = (byte)*setting + 1;
    bVar5 = (bVar5 + 0x6f) - (char)*piVar17;
    pbVar40 = (byte *)CONCAT31(uVar21,bVar5);
    *pbVar40 = *pbVar40 + bVar5;
    ppbVar42 = (byte **)((int)ppbVar42 + *(int *)pbVar40);
    cVar4 = bVar5 + *pbVar40;
    puVar10 = (ushort *)CONCAT31(uVar21,cVar4);
    *puVar10 = *puVar10 + (ushort)CARRY1(bVar5,*pbVar40) * (((ushort)puVar10 & 3) - (*puVar10 & 3));
    *(char *)puVar10 = (char)*puVar10 + cVar4;
    *(char *)puVar10 = (char)*puVar10 + cVar4;
    *(char *)puVar10 = (char)*puVar10 + cVar4;
    unaff_EDI = (uint *)((int)unaff_EDI + unaff_EBX[0x1c]);
    unaff_EBP = unaff_EBP + iVar15;
code_r0x0040495b:
    cVar4 = (char)puVar10;
    *(char *)puVar10 = (char)*puVar10 + cVar4;
    uVar21 = (undefined3)((uint)puVar10 >> 8);
    cVar6 = cVar4 + '\x02';
    in_EAX = (char *)CONCAT31(uVar21,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      *param_2 = (uint)(unaff_EBP + *param_2);
      unaff_ESI = (byte **)((int)ppbVar42 + 1);
      param_2._0_2_ = SUB42(param_2,0);
      out(*(byte *)ppbVar42,param_2._0_2_);
      goto code_r0x0040492e;
    }
    *in_EAX = *in_EAX + cVar6;
    unaff_EBP[CONCAT31(uVar21,cVar4 + '}')] = unaff_EBP[CONCAT31(uVar21,cVar4 + '}')] + cVar4 + '}';
    *param_9 = *param_9 + (char)param_9;
    setting = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                               CONCAT11((byte)((uint)param_8 >> 8) | *(byte *)((int)param_8 * 3),
                                        (char)param_8));
    unaff_EDI = (uint *)(unaff_retaddr + *(int *)((int)param_6 + 0x6f));
    pcVar11 = param_9;
    param_2 = param_7;
    unaff_EBX = param_6;
    unaff_EBP = param_4;
    ppbVar42 = param_3;
  }
  *pcVar11 = *pcVar11 + cVar6;
  pcVar11 = (char *)CONCAT31(uVar21,cVar4 + '}');
  out(*ppbVar42,(short)param_2);
  *pcVar11 = *pcVar11 + cVar4 + '}';
  goto code_r0x00404982;
code_r0x004049f5:
  do {
    bVar5 = (byte)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    uVar21 = (undefined3)((uint)puVar12 >> 8);
    bVar8 = bVar5 + 0x6f;
    pbVar16 = (byte *)CONCAT31(uVar21,bVar8);
    *setting = (*setting - (int)pbVar16) - (uint)(0x90 < bVar5);
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    pbVar40 = (byte *)((int)ppbVar33 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    uVar22 = (undefined3)((uint)param_2 >> 8);
    bVar5 = (byte)param_2 | *(byte *)ppbVar42;
    param_2 = (uint *)CONCAT31(uVar22,bVar5);
    *(byte *)setting = (byte)*setting + 1;
    cVar6 = bVar8 - *pbVar16;
    ppbVar42 = (byte **)((int)ppbVar42 +
                        (-(uint)(bVar8 < *pbVar16) - *(int *)CONCAT31(uVar21,cVar6)));
    uVar13 = CONCAT31(uVar21,cVar6 + *(char *)CONCAT31(uVar21,cVar6));
    bVar44 = CARRY1(bRam14110000,bVar7);
    bRam14110000 = bRam14110000 + bVar7;
    puVar12 = (uint *)((int)unaff_EBX + (int)ppbVar42 * 2);
    uVar36 = *puVar12;
    uVar2 = uVar13 + *puVar12;
    puVar14 = (undefined4 *)(uVar2 + bVar44);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar14 = uVar1;
    uVar36 = (uint)(CARRY4(uVar13,uVar36) || CARRY4(uVar2,(uint)bVar44));
    puVar12 = (uint *)((int)puVar14 + uRam7d020511 + uVar36);
    param_3 = &pbStack_4;
    ppbVar39 = &pbStack_4;
    ppbVar41 = &pbStack_4;
    ppbVar33 = &pbStack_4;
    pbStack_4 = pbVar40;
    cVar6 = '\x03';
    do {
      pbVar40 = pbVar40 + -4;
      ppbVar39 = ppbVar39 + -1;
      *ppbVar39 = (byte *)*(undefined4 *)pbVar40;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    pbRam00c82802 =
         (byte *)((int)puVar12 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar14,uRam7d020511) ||
                      CARRY4((int)puVar14 + uRam7d020511,uVar36))));
    bVar8 = *(byte *)ppbVar42;
    cVar6 = (char)puVar12;
    *(byte *)ppbVar42 = *(byte *)ppbVar42 + cVar6;
  } while (SCARRY1(bVar8,cVar6) == (char)*(byte *)ppbVar42 < '\0');
  *(byte *)puVar12 = (byte)*puVar12 + cVar6;
  iVar15 = CONCAT31((int3)((uint)puVar12 >> 8),cVar6 + '\x11') + 0xc57b;
  bVar7 = (byte)iVar15;
  *param_2 = *param_2 ^ (uint)unaff_EBX;
  param_2 = (uint *)CONCAT31(uVar22,bVar5 + (byte)*setting);
  iVar15 = (CONCAT31((int3)((uint)iVar15 >> 8),bVar7 + 0x6f) - (uint)(0x90 < bVar7)) + -0x18093a86;
  cVar6 = (char)iVar15;
  uVar21 = (undefined3)((uint)iVar15 >> 8);
  cVar4 = cVar6 + '\x02';
  pbVar40 = (byte *)CONCAT31(uVar21,cVar4);
  if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar40 = *pbVar40 + cVar4;
  pbVar40 = (byte *)CONCAT31(uVar21,cVar6 + 'q');
  ppbVar41 = &pbStack_4;
  param_3 = &pbStack_4;
code_r0x00404a51:
  pbVar16 = pbVar40 + 1;
  cVar4 = (char)pbVar16;
  *pbVar16 = *pbVar16 + cVar4;
  unaff_EBX = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11((char)((uint)puVar19 >> 8) - cVar4,cVar31));
  *pbVar16 = *pbVar16 + cVar4;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*setting);
  pbVar40 = pbVar40 + 0x757b03;
  pcVar11 = (char *)((int)unaff_EDI + (int)ppbVar41 * 2);
  cVar4 = (char)pbVar40;
  *pcVar11 = *pcVar11 + cVar4;
  *pbVar40 = *pbVar40 + cVar4;
  *(byte *)ppbVar42 = *(byte *)ppbVar42 - (char)((uint)pbVar40 >> 8);
  *pbVar40 = *pbVar40 + cVar4;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppbVar41 + -0x3a));
  *pbVar40 = *pbVar40 + cVar4;
  pbVar40 = (byte *)(CONCAT31((int3)((uint)pbVar40 >> 8),cVar4 + '\x11') + 0x757b02);
  pcVar11 = (char *)((int)unaff_EDI + (int)ppbVar41 * 2);
  bVar7 = (byte)pbVar40;
  *pcVar11 = *pcVar11 + bVar7;
  bVar5 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar7;
  puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_ES);
  pbRam011006fe = pbVar40 + (int)(pbRam011006fe + CARRY1(bVar5,bVar7));
  bVar5 = *(byte *)ppbVar42;
  *(byte *)ppbVar42 = *(byte *)ppbVar42 + bVar7;
  if (!CARRY1(bVar5,bVar7)) goto code_r0x00404add;
  do {
    bVar5 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar5;
    bVar8 = (byte)setting;
    setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),
                               CONCAT11((byte)((uint)setting >> 8) | *pbVar40,bVar8));
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    uVar21 = (undefined3)((uint)pbVar40 >> 8);
    bVar5 = bVar5 + in_AF * '\x06';
    cVar4 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
    pcVar11 = (char *)CONCAT31(uVar21,cVar4);
    *pcVar11 = *pcVar11 + cVar4;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppbVar41 + -0x39));
    *pcVar11 = *pcVar11 + cVar4;
    iVar15 = CONCAT31(uVar21,cVar4 + '\x11') + 0xc57b;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + '\x11') + 0xc67b;
    bVar5 = (byte)iVar15;
    bVar7 = bVar5 + 0x6f;
    pbVar40 = (byte *)CONCAT31((int3)((uint)iVar15 >> 8),bVar7);
    *setting = (*setting - (int)pbVar40) - (uint)(0x90 < bVar5);
    uVar36 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar8;
    pbRam011106fe = pbVar40 + (int)(pbRam011106fe + CARRY1((byte)uVar36,bVar8));
    bVar5 = *(byte *)ppbVar42;
    *(byte *)ppbVar42 = *(byte *)ppbVar42 + bVar7;
    if (!CARRY1(bVar5,bVar7)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
    bVar5 = (byte)setting;
    bVar7 = (byte)((uint)setting >> 8) | *pbVar40;
    setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),CONCAT11(bVar7,bVar5));
    *pbVar40 = *pbVar40 - (char)pbVar40;
    *(byte *)unaff_EBX = (char)*unaff_EBX + bVar7;
    out(*ppbVar42,(short)param_2);
    *setting = *setting & (uint)pbVar40;
    uVar36 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar5;
    pbVar40 = pbVar40 + (int)ppbVar42[1] + CARRY1((byte)uVar36,bVar5);
    *pbVar40 = *pbVar40 + (char)pbVar40;
    *(byte *)setting = (byte)*setting + (char)param_2;
    ppbVar42 = ppbVar42 + 1;
    while( true ) {
      out(*ppbVar42,(short)param_2);
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(byte)pbVar40 & (byte)*setting);
      *(byte *)param_2 = (byte)*param_2 + (char)setting;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[5],
                                          (char)param_2));
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      ppbVar42 = ppbVar42 + 1;
code_r0x00404ad4:
      puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_ES);
      pbVar40 = (byte *)((uint)pbVar40 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar40;
code_r0x00404add:
      bVar5 = (byte)pbVar40;
      uVar21 = (undefined3)((uint)pbVar40 >> 8);
      cVar4 = bVar5 + 8;
      pbVar40 = (byte *)CONCAT31(uVar21,cVar4);
      if (SCARRY1(bVar5,'\b') == cVar4 < '\0') break;
      *pbVar40 = *pbVar40 + cVar4;
      cVar4 = bVar5 + 10;
      piVar17 = (int *)CONCAT31(uVar21,cVar4);
      if ((POPCOUNT(cVar4) & 1U) != 0) {
        *piVar17 = (int)(*piVar17 + (int)piVar17);
        goto code_r0x00404b18;
      }
      *(char *)piVar17 = (char)*piVar17 + cVar4;
      puVar12 = (uint *)CONCAT31(uVar21,bVar5 + 0x7c);
      *puVar12 = *puVar12 & (uint)setting;
      *(char *)((int)puVar12 + 0x11) = *(char *)((int)puVar12 + 0x11) + (char)((uint)param_2 >> 8);
      cVar4 = (char)((int)puVar12 + 0xc67b);
      uVar21 = (undefined3)((uint)((int)puVar12 + 0xc67b) >> 8);
      bVar5 = cVar4 + 8;
      pbVar40 = (byte *)CONCAT31(uVar21,bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar40 = *pbVar40 + bVar5;
        cRam02060000 = cVar4 + 'w';
        puVar12 = (uint *)CONCAT31(uVar21,cRam02060000);
        *(byte *)puVar12 = (byte)*puVar12 + cRam02060000;
        cVar4 = (char)setting;
        setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),
                                   CONCAT11((byte)((uint)setting >> 8) | (byte)*puVar12,cVar4));
        *puVar12 = *puVar12 - (int)puVar12;
        *(byte *)param_2 = (byte)*param_2 + cVar4;
        ppbVar33 = ppbVar42 + 1;
        out(*ppbVar42,(short)param_2);
        ppbVar42 = ppbVar33;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar11 = (char *)((uint)puVar12 | *puVar12);
        goto code_r0x00404b89;
      }
      bVar7 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar5;
      *ppbVar42 = *ppbVar42 + (int)pbVar40 + CARRY1(bVar7,bVar5);
    }
    *(byte *)ppbVar42 = *(byte *)ppbVar42 + 1;
    *setting = (uint)(pbVar40 + (uint)(0xf7 < bVar5) + *setting);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(char)puVar12 + 'r');
    piVar17 = (int *)((uint)puVar12 | *puVar12);
    param_2 = puStack_20;
code_r0x00404b18:
    bRam11060000 = (byte)piVar17;
    iVar15 = CONCAT31((int3)((uint)((int)piVar17 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar17 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar15;
    iVar15 = CONCAT31((int3)((uint)iVar15 >> 8),bVar5 + 0x6f);
    *setting = (*setting - iVar15) - (uint)(0x90 < bVar5);
    cVar4 = (char)setting;
    *(byte *)param_2 = (byte)*param_2 + cVar4;
    bVar7 = (byte)((uint)unaff_EBX >> 8);
    bVar30 = (byte)((uint)param_2 >> 8) | bVar7;
    pcVar20 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar30,(byte)param_2));
    piVar17 = (int *)(iVar15 + 0x73060001);
    *(byte *)setting = (byte)*setting & (byte)piVar17;
    *pcVar20 = *pcVar20 + cVar4;
    bVar8 = (byte)((uint)setting >> 8);
    *(byte *)piVar17 = *(char *)piVar17 - bVar8;
    *(byte *)piVar17 = *(char *)piVar17 + (byte)piVar17;
    iVar15 = *piVar17;
    *piVar17 = *piVar17 - (int)piVar17;
    *(byte *)unaff_EBX = (char)*unaff_EBX + bVar8;
    pcVar11 = (char *)((uint)piVar17 | *unaff_EDI);
    *pcVar20 = *pcVar20 - bVar8;
    bVar5 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar5;
    ppbVar41 = (byte **)(((int)ppbVar41 - iVar15) - *(int *)(pcVar11 + ((int)ppbVar41 - iVar15)));
    uVar25 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar24 = (byte)unaff_EBX;
    cVar6 = bVar7 + *(char *)((int)unaff_EBX + 0x76);
    pbVar40 = (byte *)CONCAT22(uVar25,CONCAT11(cVar6,bVar24));
    *pcVar11 = *pcVar11 + bVar5;
    uVar21 = (undefined3)((uint)pcVar11 >> 8);
    uVar13 = CONCAT31(uVar21,bVar5 + 7);
    puVar12 = (uint *)((int)ppbVar41 + -0x1faeef1);
    uVar36 = *puVar12;
    uVar2 = *puVar12 + uVar13;
    *puVar12 = uVar2 + (0xf8 < bVar5);
    puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_ES);
    puVar43 = puStack_20;
    bVar7 = bVar5 + 7 + (byte)*setting +
            (CARRY4(uVar36,uVar13) || CARRY4(uVar2,(uint)(0xf8 < bVar5)));
    puVar12 = (uint *)CONCAT31(uVar21,bVar7);
    bVar5 = *(byte *)ppbVar42;
    *(byte *)ppbVar42 = *(byte *)ppbVar42 + bVar7;
    if (CARRY1(bVar5,bVar7)) break;
    *(byte *)puVar12 = (byte)*puVar12 + bVar7;
    unaff_EBX = (uint *)CONCAT22(uVar25,CONCAT11(cVar6 + pbVar40[0x76],bVar24));
    uStack_24 = in_ES;
  }
  *(byte *)puVar12 = (byte)*puVar12 + bVar7;
  uVar22 = (undefined3)((uint)pcVar20 >> 8);
  bVar27 = (byte)param_2 | *pbVar40;
  param_2 = (uint *)CONCAT31(uVar22,bVar27);
  pcRam2b060000 = (char *)CONCAT31(uVar21,bVar7 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar7 + 0x39)) - (0xd7 < (byte)(bVar7 + 0x11));
  bVar5 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar8;
  ppbVar33 = ppbVar42 + 1;
  out(*ppbVar42,(short)param_2);
  bVar5 = (bVar7 + 0x37) - CARRY1(bVar5,bVar8);
  piVar17 = (int *)CONCAT31(uVar21,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    iVar15 = CONCAT31(uVar21,bVar5 + 0x11) + 0xc77b;
    pcVar11 = (char *)CONCAT31((int3)((uint)iVar15 >> 8),(char)iVar15 + 'r');
    pcVar11[0x28] = pcVar11[0x28] + bVar30;
code_r0x00404b89:
    cVar4 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    *pcVar11 = *pcVar11 + cVar4;
    puVar10 = (ushort *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4 + 'r');
    uVar9 = (ushort)puVar10 | *puVar10;
    pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*ppbVar33,(short)param_2);
    *pcVar11 = *pcVar11 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar17 = (char)*piVar17 + bVar5;
  pbVar16 = (byte *)((int)ppbVar41 + -*(int *)((int)unaff_EDI + 0x21));
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pcVar11 = (char *)CONCAT31(uVar22,bVar27 | *pbVar40);
  ppbVar41 = ppbVar42 + 2;
  out(*ppbVar33,(short)pcVar11);
  uVar36 = *setting;
  *pcVar11 = *pcVar11 + cVar4;
  uVar36 = CONCAT31(uVar21,bVar5 & (byte)uVar36) | 0x767b02;
  *(byte *)((int)setting + (int)pcVar11) = *(byte *)((int)setting + (int)pcVar11) + (char)uVar36;
  iVar15 = uVar36 + 0xc67b;
  cVar38 = (char)iVar15;
  uVar21 = (undefined3)((uint)iVar15 >> 8);
  cVar31 = cVar38 + 'r';
  pcVar11 = (char *)CONCAT31(uVar21,cVar31);
  pcVar11[0x28] = pcVar11[0x28] + bVar30;
  *pcVar11 = *pcVar11 + cVar31;
  uVar26 = (undefined2)((uint)setting >> 0x10);
  bVar8 = bVar8 | *(byte *)((int)puStack_20 + -0x5e);
  puVar35 = (uint *)CONCAT22(uVar26,CONCAT11(bVar8,cVar4));
  *pcVar11 = *pcVar11 + cVar31;
  puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,uStack_24);
  ppbVar33 = (byte **)CONCAT22(uVar25,CONCAT11(cVar6 + pbVar40[0x76],bVar24));
  *pcVar11 = *pcVar11 + cVar31;
  puVar12 = (uint *)CONCAT31(uVar21,cVar38 + -0x1c);
  pcVar11 = (char *)((uint)puVar12 | *puVar12);
  bVar44 = (POPCOUNT((uint)pcVar11 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar11;
  puVar12 = puStack_20;
  pbVar40 = pbVar16;
  puVar19 = puVar43;
  uVar25 = uStack_24;
  if (!bVar44) goto code_r0x00404ca8;
  *pcVar11 = *pcVar11 + cRam02060000;
  puVar19 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cRam02060000 + 'r');
  *puVar19 = *puVar19 & (uint)puVar35;
  *(char *)((int)puVar19 + 0x11) = *(char *)((int)puVar19 + 0x11) + (char)((ushort)uStack_24 >> 8);
  iVar15 = (int)puVar19 + 0xc77b;
  uVar21 = (undefined3)((uint)iVar15 >> 8);
  cRam02060000 = (char)iVar15 + '\t';
  pbVar40 = (byte *)CONCAT31(uVar21,cRam02060000);
  out(*ppbVar41,uStack_24);
  *pbVar40 = *pbVar40 + cRam02060000;
  puVar19 = (uint *)CONCAT22(uVar26,CONCAT11(bVar8 | *pbVar40,cVar4));
  *(int *)pbVar40 = *(int *)pbVar40 - (int)pbVar40;
  *(byte *)puStack_20 = (byte)*puStack_20 + cVar4;
  out(ppbVar42[3],uStack_24);
  ppbVar41 = ppbVar42 + 4;
  uVar25 = uStack_24;
  if ((POPCOUNT((byte)*puStack_20) & 1U) != 0) goto code_r0x00404cca;
  *pbVar40 = *pbVar40 + cRam02060000;
  puVar10 = (ushort *)CONCAT31(uVar21,(char)iVar15 + '{');
  uVar9 = (ushort)puVar10 | *puVar10;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),uVar9);
  bVar5 = (byte)uVar9;
  out(ppbVar42[4],uStack_24);
  pbVar40 = (byte *)((int)puVar19 + 1);
  bRam11060000 = bVar5;
  *pcVar11 = *pcVar11 + bVar5;
  puVar35 = (uint *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                             CONCAT11((byte)((uint)pbVar40 >> 8) | bRam110cde91,(char)pbVar40));
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar5 - 7);
  *puVar43 = (uint)(pcVar11 + (uint)(bVar5 < 7) + *puVar43);
  ppbVar41 = ppbVar42 + 6;
  out(ppbVar42[5],uStack_24);
  puVar12 = (uint *)((int)puStack_20 + 1);
  *pcVar11 = *pcVar11 + (bVar5 - 7);
  ppbVar33 = (byte **)CONCAT31((int3)((uint)ppbVar33 >> 8),bVar24 | (byte)(uVar9 >> 8));
  do {
    bVar5 = (char)pcVar11 - *pcVar11;
    uVar36 = *puVar35;
    *(byte *)puVar35 = (byte)*puVar35 + bVar5;
    cVar4 = bVar5 - CARRY1((byte)uVar36,bVar5);
    *(byte *)puVar12 = (byte)*puVar12 + cVar4;
    cVar6 = (char)((uint)puVar35 >> 8);
    *(byte *)(puVar43 + 0x673b40) = (byte)puVar43[0x673b40] + cVar6;
    puVar18 = (uint *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4);
    *(byte *)puVar18 = (byte)*puVar18 + cVar4;
    *(byte *)puVar12 = (byte)*puVar12 + cVar4;
    ppbVar33[0x16] = ppbVar33[0x16] + (int)ppbVar41;
    puVar19 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar35 >> 0x10),
                                               CONCAT11(cVar6 + (char)((uint)pcVar11 >> 8),
                                                        (char)puVar35)) >> 8),
                               (char)puVar35 + *(char *)((int)puVar18 * 2));
    *(byte *)puVar18 = (byte)*puVar18 + cVar4;
    *(byte *)ppbVar41 = *(byte *)ppbVar41 + (char)ppbVar33;
_ctor:
    bVar7 = (byte)((uint)puVar19 >> 8);
    uVar36 = *puVar18;
    bVar5 = (byte)puVar19;
    puVar18 = (uint *)((int)puVar18 + (uint)CARRY1(bVar7,(byte)*puVar18) + *puVar18);
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    cVar4 = bVar5 - *(byte *)((int)puVar12 + 3);
    puVar35 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11(bVar7 + (byte)uVar36,bVar5)) >> 8),cVar4);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      if (*(byte *)((int)puVar12 + 3) <= bVar5) {
        *puVar18 = (uint)(*puVar18 + (int)puVar18);
        puVar12 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),(byte)puVar12 | *(byte *)ppbVar33);
        puVar18 = puVar18 + 0x230e;
        puVar19 = puVar35;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
    cVar4 = (char)puVar18 + '\x02';
    pcVar11 = (char *)CONCAT31((int3)((uint)puVar18 >> 8),cVar4);
    bVar44 = (POPCOUNT(cVar4) & 1U) == 0;
    pbVar40 = pbVar16;
    puVar19 = puVar43;
    uVar25 = uStack_14;
code_r0x00404ca8:
    uStack_14 = uVar25;
    pbVar16 = pbStack_4;
    puVar43 = puStack_c;
    if (bVar44) break;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar35;
    pbVar16 = pbVar40;
    puVar43 = puVar19;
  } while( true );
  *pcVar11 = *pcVar11 + (char)pcVar11;
  *(byte *)param_6 = (char)*param_6 + (byte)param_6;
  puVar19 = (uint *)CONCAT22((short)((uint)param_5 >> 0x10),
                             CONCAT11((byte)((uint)param_5 >> 8) | *param_4,(char)param_5));
  *(char *)param_3 = *(char *)param_3 + (char)param_3;
  *(byte *)((int)param_6 * 2) = *(byte *)((int)param_6 * 2) ^ (byte)param_6;
  uVar3 = *(undefined6 *)param_6;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar40 = (byte *)uVar3;
  bVar7 = (byte)uVar3;
  *pbVar40 = *pbVar40 + bVar7;
  bVar5 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar7;
  puVar12 = (uint *)((int)puVar19 + 0x11673);
  uVar36 = *puVar12;
  uVar2 = *puVar12;
  *puVar12 = (uint)(param_4 + uVar2 + CARRY1(bVar5,bVar7));
  puStack_c = (uint *)CONCAT22(puStack_c._2_2_,uStack_14);
  pbVar40 = pbVar40 + (uint)(CARRY4(uVar36,(uint)param_4) ||
                            CARRY4((uint)(param_4 + uVar2),(uint)CARRY1(bVar5,bVar7))) +
                      *(int *)((int)puVar19 + (int)param_4);
  puVar12 = (uint *)param_4;
  ppbVar33 = param_3;
  ppbVar41 = ppbStack_8;
  uVar25 = uStack_14;
code_r0x00404cca:
  uStack_14 = uVar25;
  cVar4 = (char)pbVar40 + '\x04';
  puVar18 = (uint *)CONCAT31((int3)((uint)pbVar40 >> 8),cVar4);
  if (SCARRY1((char)pbVar40,'\x04') == cVar4 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar18;
  ppbVar42 = ppbVar41 + 1;
  out(*ppbVar41,(short)puVar12);
  uVar36 = *puVar19;
  uVar2 = *puVar12;
  bVar5 = (byte)puVar19;
  *(byte *)puVar12 = (byte)*puVar12 + bVar5;
  iVar15 = (CONCAT31((int3)((uint)puVar18 >> 8),(char)puVar18 + '\x03') & uVar36) + iRam00008c38;
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar12;
  pcVar11 = (char *)(iVar15 + (uint)CARRY1((byte)uVar2,bVar5) + 0x1246f);
  uVar21 = (undefined3)((uint)puVar19 >> 8);
  bVar5 = bVar5 | (byte)*puVar12;
  puVar35 = (uint *)CONCAT31(uVar21,bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar11 >> 8);
  puVar18 = (uint *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + *pcVar11) + 0x1fbeef2);
  uVar36 = *puVar18;
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  if (CARRY4(uVar36,(uint)puVar18)) {
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    pcVar11 = (char *)CONCAT31(uVar21,bVar5 | bRam00282809);
    cVar4 = (char)((uint)puVar19 >> 8);
    *(byte *)ppbVar33 = *(byte *)ppbVar33 + cVar4;
    *pcVar11 = *pcVar11 - cVar4;
    *(byte *)puVar18 = *(byte *)puVar18 + (char)puVar18;
    iVar15 = (int)pcVar11 - (int)*ppbVar33;
    ppbVar41 = ppbVar41 + 2;
    out(*ppbVar42,(short)puVar12);
    *puVar18 = (uint)(*puVar18 + (int)puVar18);
    puVar35 = (uint *)CONCAT22((short)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar15 >> 8) | bRambf73070b,(char)iVar15));
code_r0x00404d15:
    uVar36 = *puVar18;
    bVar5 = (byte)puVar18;
    *(byte *)puVar18 = (byte)*puVar18 + bVar5;
    ppbVar42 = ppbVar41 + 1;
    out(*ppbVar41,(short)puVar12);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar7 = bVar5 + in_AF * '\x06';
    puVar18 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),
                               bVar7 + (0x90 < (bVar7 & 0xf0) |
                                       CARRY1((byte)uVar36,bVar5) | in_AF * (0xf9 < bVar7)) * '`');
  }
  *puVar18 = (uint)(*puVar18 + (int)puVar18);
  bVar5 = (byte)puVar18 | (byte)*puVar43;
  ppbVar41 = ppbVar42 + 1;
  uVar26 = SUB42(puVar12,0);
  out(*ppbVar42,uVar26);
  *(byte *)puVar35 = (byte)*puVar35 - bVar5;
  uVar36 = *puVar12;
  bVar7 = (byte)puVar35;
  *(byte *)puVar12 = (byte)*puVar12 + bVar7;
  pbVar40 = pbVar16 + -*puVar12;
  uVar21 = (undefined3)
           ((uint)(*ppbVar41 +
                  (uint)CARRY1((byte)uVar36,bVar7) + CONCAT31((int3)((uint)puVar18 >> 8),bVar5)) >>
           8);
  cVar4 = (char)(*ppbVar41 +
                (uint)CARRY1((byte)uVar36,bVar7) + CONCAT31((int3)((uint)puVar18 >> 8),bVar5)) +
          *(byte *)ppbVar41 + (pbVar16 < (byte *)*puVar12);
  puVar19 = (uint *)CONCAT31(uVar21,cVar4);
  bVar5 = (byte)((uint)puVar35 >> 8);
  *(byte *)puVar35 = (byte)*puVar35 - bVar5;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  bVar7 = bVar7 | *(byte *)((int)puVar12 + (int)puVar19);
  uVar25 = (undefined2)((uint)puVar35 >> 0x10);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)puVar19 = (byte)*puVar19 + cVar4;
    pcVar11 = (char *)CONCAT31(uVar21,cVar4 + '\x12');
    *pcVar11 = *pcVar11 + bVar5;
    puVar19 = (uint *)CONCAT31(uVar21,(cVar4 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar35 >> 8),bVar7));
    uVar36 = *puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar7;
    if (!CARRY1((byte)uVar36,bVar7)) {
      pbVar16 = (byte *)((uint)puVar19 | *puVar19);
      out(*ppbVar41,uVar26);
      *pbVar16 = *pbVar16 + (char)pbVar16;
      bVar8 = *pbVar16;
      piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar5 | bVar8,bVar7));
      iVar15 = (int)pbVar16 - *piVar17;
      *(byte *)puVar12 = (byte)*puVar12 + bVar7;
      ppbVar39 = ppbVar42 + 3;
      out(ppbVar42[2],uVar26);
      uRam12060000 = (undefined1)iVar15;
      *(char *)((int)piVar17 + iVar15) = *(char *)((int)piVar17 + iVar15) - (bVar5 | bVar8);
      *(byte *)puVar12 = (byte)*puVar12 + bVar7;
      pbVar16 = (byte *)(iVar15 + -0x120edecd);
      *(byte *)ppbVar39 = *(byte *)ppbVar39 + 1;
      bVar5 = *pbVar16;
      bVar8 = (byte)pbVar16;
      *pbVar16 = *pbVar16 + bVar8;
      pbVar40 = pbVar40 + ((-1 - *(int *)((int)puVar43 + 0x42)) - (uint)CARRY1(bVar5,bVar8));
      *pbVar16 = *pbVar16 + bVar8;
      bVar5 = (byte)ppbVar33 | (byte)((uint)pbVar16 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar16;
      uVar36 = *puVar12;
      pcVar11 = (char *)(((uint)pbVar16 | 0x11) + 0x511072c);
      ppbVar41 = ppbVar42 + 4;
      out(*ppbVar39,uVar26);
      puVar12 = (uint *)((int)puVar12 + 1);
      *pcVar11 = *pcVar11 + (char)pcVar11;
      bVar8 = (byte)((uint)pcVar11 >> 8);
      ppbVar33 = (byte **)CONCAT31((int3)(CONCAT22((short)((uint)ppbVar33 >> 0x10),
                                                   CONCAT11((byte)((uint)ppbVar33 >> 8) |
                                                            (byte)uVar36,bVar5)) >> 8),bVar5 | bVar8
                                  );
      uVar21 = (undefined3)((uint)pcVar11 >> 8);
      bVar5 = (char)pcVar11 - *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar21,bVar5);
      *pcVar11 = *pcVar11 + bVar5;
      *(int *)((int)pcVar11 * 2) = (int)(*(int *)((int)pcVar11 * 2) + (int)ppbVar33);
      *(byte *)puVar12 = *(byte *)puVar12 + bVar5;
      *pbVar40 = *pbVar40 + bVar8;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar21,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar36;
      pbVar16 = (byte *)CONCAT22((short)(uVar36 >> 0x10),CONCAT11(bVar8 + in_AF,bVar5));
      *(byte *)ppbVar41 = *(byte *)ppbVar41 + bVar7;
      *pbVar16 = *pbVar16 + bVar5;
      *pbVar16 = *pbVar16 + bVar5;
      bVar44 = CARRY1(bVar5,*pbVar16);
      puVar19 = (uint *)CONCAT31((int3)((uint)pbVar16 >> 8),bVar5 + *pbVar16);
      goto code_r0x00404d9a;
    }
    *(byte *)ppbVar33 = *(byte *)ppbVar33 - (char)puVar12;
  }
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  bVar44 = false;
  piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar5 | (byte)*puVar12,bVar7));
code_r0x00404d9a:
  do {
    puVar35 = puVar12;
    *puVar19 = (*puVar19 - (int)puVar19) - (uint)bVar44;
    bVar5 = (byte)((uint)piVar17 >> 8);
    uVar25 = (undefined2)((uint)piVar17 >> 0x10);
    bVar7 = (byte)piVar17;
    bVar8 = bVar5 + (byte)iRam00000c00;
    pbVar16 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *(byte *)puVar35 = (byte)*puVar35 + bVar7;
    ppbVar33 = (byte **)CONCAT31((int3)((uint)ppbVar33 >> 8),(char)ppbVar33 - *(byte *)ppbVar41);
    bVar5 = *pbVar16;
    puVar19 = (uint *)(pbVar16 + (uint)CARRY1(bVar8,*pbVar16) + *(int *)pbVar16);
    *(byte *)puVar35 = (byte)*puVar35 + bVar7;
    cVar6 = ((bVar8 + bVar5) - (byte)*puVar35) + (byte)*puVar19;
    pcVar11 = (char *)CONCAT22(uVar25,CONCAT11(cVar6,bVar7));
    puVar12 = puVar43 + 1;
    uVar36 = in((short)puVar35);
    *puVar43 = uVar36;
    cVar4 = (char)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + cVar4;
    uVar21 = (undefined3)((uint)puVar35 >> 8);
    bVar8 = (byte)puVar35 | *(byte *)ppbVar41;
    pcVar20 = (char *)CONCAT31(uVar21,bVar8);
    *pcVar11 = *pcVar11 + '\x01';
    bVar5 = (cVar6 - *pcVar20) + (byte)*puVar19;
    pcVar11 = (char *)CONCAT22(uVar25,CONCAT11(bVar5,bVar7));
    puVar43 = puVar43 + 2;
    uVar36 = in((short)pcVar20);
    *puVar12 = uVar36;
    *(byte *)puVar19 = (byte)*puVar19 + cVar4;
    bVar8 = bVar8 | *(byte *)ppbVar41;
    puVar12 = (uint *)CONCAT31(uVar21,bVar8);
    *pcVar11 = *pcVar11 + '\x01';
    bVar44 = bVar7 < *(byte *)((int)puVar12 + 2);
    cVar6 = bVar7 - *(byte *)((int)puVar12 + 2);
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  *(byte *)puVar19 = (byte)*puVar19 + cVar4;
  bVar7 = cVar4 + 0x7b;
  pbVar16 = (byte *)CONCAT31((int3)((uint)puVar19 >> 8),bVar7);
  *(byte *)((int)ppbVar33 + (int)pbVar16) = *(byte *)((int)ppbVar33 + (int)pbVar16) + bVar7;
  ppbVar42 = ppbVar41 + 1;
  uVar26 = SUB42(puVar12,0);
  out(*ppbVar41,uVar26);
  pbVar34 = (byte *)((int)ppbVar33 + -1);
  *pbVar16 = *pbVar16 + bVar7;
  bVar5 = bVar5 | (byte)*puVar12;
  piVar17 = (int *)CONCAT22(uVar25,CONCAT11(bVar5,cVar6));
  *pbVar16 = *pbVar16 + bVar7;
  *pbVar34 = *pbVar34 + bVar8;
  *pbVar34 = *pbVar34 ^ bVar7;
  *(byte *)puVar12 = (byte)*puVar12 + bVar5;
  *pbVar16 = *pbVar16 + bVar7;
  do {
    bVar24 = (byte)((uint)piVar17 >> 8);
    *(byte *)puVar43 = (byte)*puVar43 + bVar24;
    bVar5 = *pbVar16;
    bVar7 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar7;
    *(byte **)((int)ppbVar33 + 0x17) =
         (byte *)((int)ppbVar42 + (uint)CARRY1(bVar5,bVar7) + *(int *)((int)ppbVar33 + 0x17));
    *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
    uVar22 = (undefined3)((uint)pbVar16 >> 8);
    bVar7 = bVar7 | *(byte *)ppbVar42;
    puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar40 + -0x34));
    *(char *)CONCAT31(uVar22,bVar7) = *(char *)CONCAT31(uVar22,bVar7) + bVar7;
    bVar5 = bVar7 + 2;
    cVar4 = (char)((uint)puVar35 >> 8);
    bVar30 = (byte)piVar17;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar16 = (byte *)CONCAT31(uVar22,bVar7 + 0x15 + (0xfd < bVar7));
      if (0xec < bVar5 || CARRY1(bVar7 + 0x15,0xfd < bVar7)) {
        *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      }
code_r0x00404e60:
      pbVar40 = pbVar40 + -*puVar12;
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + (byte)pbVar16;
      pbVar28 = (byte *)((int)ppbVar42 + (-(uint)CARRY1(bVar5,(byte)pbVar16) - *(int *)pbVar16));
      pbVar16 = pbVar16 + *(int *)pbVar16;
      puStack_20 = (uint *)CONCAT22(puStack_20._2_2_,in_DS);
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      *(char *)piVar17 = (char)*piVar17 + cVar4;
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + (byte)pbVar16;
      *(byte **)(pbVar34 + (int)puVar12) =
           (byte *)((int)puVar12 +
                   (uint)CARRY1(bVar5,(byte)pbVar16) + *(int *)(pbVar34 + (int)puVar12));
      pbVar16 = pbVar16 + 0x73061314;
      *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
      uVar22 = (undefined3)((uint)piVar17 >> 8);
      bVar30 = bVar30 | (byte)*puVar12;
      pcVar20 = (char *)CONCAT31(uVar22,bVar30);
      *pbVar16 = *pbVar16 + (char)pbVar16;
      cVar4 = (char)pbVar16 + 'o';
      pcVar11 = (char *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar4);
      *pcVar11 = *pcVar11 + cVar4;
      out(*(undefined4 *)pbVar28,uVar26);
      uVar36 = *puVar12;
      *(byte *)puVar12 = (byte)*puVar12 + bVar30;
      pcVar11 = pcVar11 + (uint)CARRY1((byte)uVar36,bVar30) + *puVar43;
      *pcVar11 = *pcVar11 + (char)pcVar11;
      *pcVar20 = *pcVar20 + bVar8;
      ppbVar42 = (byte **)(pbVar28 + 8);
      out(*(undefined4 *)(pbVar28 + 4),uVar26);
      *(byte *)puVar12 = (byte)*puVar12 + bVar30;
      piVar17 = (int *)((uint)pcVar11 | *puVar43);
      pcVar20[0x390a0000] = pcVar20[0x390a0000] - bVar24;
      pbVar34 = (byte *)0x7000000;
      *(byte *)puVar43 = (byte)*puVar43 - bVar24;
      *piVar17 = *piVar17 + (int)piVar17;
      puVar19 = (uint *)CONCAT31(uVar22,bVar30 | *(byte *)((int)piVar17 + (int)pcVar20));
      *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) - bVar24;
      cRam07000000 = cRam07000000 + bVar24;
      piVar17 = (int *)((uint)piVar17 | 0x777b02);
      pbVar16 = (byte *)((int)puVar43 + (int)pbVar40 * 2);
      bVar44 = SCARRY1(*pbVar16,(char)piVar17);
      *pbVar16 = *pbVar16 + (char)piVar17;
      bVar5 = *pbVar16;
      *(char *)piVar17 = (char)*piVar17;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar22,bVar5) = *(char *)CONCAT31(uVar22,bVar5) + bVar5;
    bVar7 = bVar7 + 0x71;
    pbVar16 = (byte *)CONCAT31(uVar22,bVar7);
    *pbVar16 = *pbVar16;
    *(byte *)ppbVar42 = *(byte *)ppbVar42 + 1;
    *piVar17 = (*piVar17 - (int)pbVar16) - (uint)(0x90 < bVar5);
    bVar5 = *(byte *)ppbVar42;
    *(byte *)ppbVar42 = *(byte *)ppbVar42 + bVar7;
    if (!CARRY1(bVar5,bVar7)) goto code_r0x00404e60;
    *pbVar16 = *pbVar16 + bVar7;
    uVar25 = (undefined2)((uint)piVar17 >> 0x10);
    bVar24 = bVar24 | *pbVar16;
    pbVar16 = pbVar16 + -*(int *)pbVar16;
    *pbVar34 = *pbVar34 + bVar24;
    cVar6 = bVar30 - *(byte *)((int)puVar12 + 2);
    piVar17 = (int *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar24,bVar30)) >> 8),cVar6);
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  cVar31 = (char)pbVar16;
  *pbVar16 = *pbVar16 + cVar31;
  uVar22 = (undefined3)((uint)pbVar16 >> 8);
  pcVar11 = (char *)CONCAT31(uVar22,cVar31 + '{');
  out(*ppbVar42,uVar26);
  *pcVar11 = *pcVar11 + cVar31 + '{';
  bVar7 = cVar31 + 0x7e;
  pbVar16 = (byte *)CONCAT31(uVar22,bVar7);
  ppbVar42 = ppbVar41 + 3;
  out(ppbVar41[2],uVar26);
  pbVar34 = (byte *)((int)ppbVar33 + -2);
  *pbVar16 = *pbVar16 + bVar7;
  bVar24 = bVar24 | (byte)*puVar12;
  puVar19 = (uint *)CONCAT22(uVar25,CONCAT11(bVar24,cVar6));
  *pbVar16 = *pbVar16 + bVar7;
  *pbVar34 = *pbVar34 + bVar8;
  *pbVar34 = *pbVar34 ^ bVar7;
  *(byte *)puVar12 = (byte)*puVar12 + bVar24;
  *pbVar16 = *pbVar16 + bVar7;
  *pbVar16 = *pbVar16 + cVar4;
  bVar5 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  ppbVar33[6] = ppbVar33[6] + (int)ppbVar42 + CARRY1(bVar5,bVar7);
  *(byte **)pbVar16 = pbVar16 + *(int *)pbVar16;
  bVar7 = bVar7 | *(byte *)ppbVar42;
  puVar43 = (uint *)((int)puVar43 + *(int *)(pbVar40 + -0x33));
  *(char *)CONCAT31(uVar22,bVar7) = *(char *)CONCAT31(uVar22,bVar7) + bVar7;
  bVar44 = SCARRY1(bVar7,'\x02');
  bVar5 = bVar7 + 2;
  piVar17 = (int *)CONCAT31(uVar22,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar17 = (char)*piVar17 + bVar5;
    return CONCAT31(uVar22,bVar7 + 0x71);
  }
code_r0x00404ebf:
  bVar7 = (byte)piVar17;
  uVar22 = (undefined3)((uint)piVar17 >> 8);
  if (bVar5 != 0 && bVar44 == (char)bVar5 < '\0') {
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    ppbVar42[(int)puVar43 * 2] = ppbVar42[(int)puVar43 * 2] + (int)puVar12 + (0xd2 < bVar7);
    return CONCAT31(uVar22,bVar7 + 0x2d);
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar5 = *pbVar34;
  *ppbVar42 = *ppbVar42 + (int)piVar17;
  bVar30 = (byte)((uint)puVar19 >> 8);
  *(byte *)piVar17 = (char)*piVar17 - bVar30;
  *(byte *)piVar17 = (char)*piVar17 + bVar7;
  pbVar16 = (byte *)(CONCAT31(uVar21,bVar8 | bVar5) - *(int *)pbVar34);
  puVar12 = (uint *)CONCAT31(uVar22,bVar7 + 6);
  *(uint *)(pbVar34 + (int)ppbVar42 * 2) =
       (int)puVar12 + (uint)(0xf9 < bVar7) + *(int *)(pbVar34 + (int)ppbVar42 * 2);
  *(byte *)puVar19 = (byte)*puVar19 ^ bVar7 + 6;
  bVar7 = (byte)puVar19;
  *pbVar16 = *pbVar16 + bVar7;
  ppbVar41 = ppbVar42 + 1;
  uVar25 = SUB42(pbVar16,0);
  out(*ppbVar42,uVar25);
  *puVar19 = *puVar19 ^ (uint)puVar12;
  *pbVar16 = *pbVar16 + bVar7;
  puVar35 = (uint *)(pbVar34 + -*(int *)pbVar34);
  *(uint *)((int)puVar43 + 0x31) = *(uint *)((int)puVar43 + 0x31) | (uint)pbVar40;
  *puVar12 = *puVar12 + (int)puVar12;
  puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar30 | (byte)*puVar35,bVar7))
  ;
  *(byte **)(pbVar16 + 0x6e) = (byte *)(*(int *)(pbVar16 + 0x6e) + (int)ppbVar41);
  piVar17 = (int *)((uint)puVar12 | *puVar12);
  bVar8 = (byte)puVar35;
  *(byte *)puVar43 = (byte)*puVar43 - bVar8;
  bVar5 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  if (CARRY1(bVar5,bVar7)) {
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    bVar5 = pbVar16[0x11];
    uVar26 = (undefined2)((uint)puVar35 >> 0x10);
    out(*ppbVar41,uVar25);
    puVar19 = (uint *)((int)puVar19 + 1);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    bVar27 = (byte)((uint)puVar35 >> 8) | bVar5 | *pbVar16;
    pcVar11 = (char *)((int)piVar17 + -0x21000001);
    bVar5 = (byte)pcVar11 | 0x11;
    uVar21 = (undefined3)((uint)pcVar11 >> 8);
    cVar4 = bVar5 - 7;
    pcVar20 = (char *)CONCAT31(uVar21,cVar4);
    *puVar43 = (uint)(pcVar20 + (uint)(bVar5 < 7) + *puVar43);
    ppbVar41 = ppbVar42 + 3;
    out(ppbVar42[2],uVar25);
    pbVar16 = pbVar16 + 1;
    *pcVar20 = *pcVar20 + cVar4;
    bVar30 = (byte)((uint)pcVar11 >> 8);
    bVar24 = bVar8 | bVar30;
    bVar7 = cVar4 - *pcVar20;
    bVar5 = *(byte *)puVar19;
    *(byte *)puVar19 = *(byte *)puVar19 + bVar7;
    *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7 + CARRY1(bVar5,bVar7);
    *pbVar16 = *pbVar16 + bVar7;
    *(byte *)ppbVar41 = *(byte *)ppbVar41 + bVar24;
    bVar5 = (byte)((uint)pbVar16 >> 8);
    *(byte *)puVar19 = *(byte *)puVar19 + bVar7 + CARRY1((byte)pbVar16,bVar5);
    piVar17 = (int *)CONCAT31(uVar21,bVar7);
    *(byte *)piVar17 = (char)*piVar17 + bVar7;
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                               CONCAT11(bVar5 + bVar30,(byte)pbVar16 + bVar5));
    puVar35 = (uint *)CONCAT22(uVar26,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,
                                                  CONCAT11(bVar27,bVar8)) >> 8),bVar24) + 0x76),
                                               bVar24));
    uStack_14 = puStack_20._0_2_;
code_r0x00404fa4:
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
    pcVar11 = (char *)(CONCAT31((int3)((uint)piVar17 >> 8),(char)piVar17 + '(') ^ *puVar19);
    cVar31 = (char)puVar19;
    *pbVar16 = *pbVar16 + cVar31;
    uVar25 = (undefined2)((uint)puVar35 >> 0x10);
    cVar32 = (char)puVar35;
    cVar37 = (char)((uint)puVar35 >> 8) + *(byte *)((int)puVar35 + 0x75);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar4 = (char)pcVar11 + 'o';
    pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar4);
    *pcVar11 = *pcVar11 + cVar4;
    cVar38 = (char)((uint)puVar19 >> 8);
    *pbVar40 = *pbVar40 - cVar38;
    pbVar16[1] = pbVar16[1] + cVar31;
    pcVar11 = pcVar11 + -0x757b021b;
    cVar4 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar4;
    uVar21 = (undefined3)((uint)pcVar11 >> 8);
    cVar6 = cVar4 + 'o';
    pcVar11 = (char *)CONCAT31(uVar21,cVar6);
    pbVar28 = pbVar16 + 2;
    *pcVar11 = *pcVar11 + cVar6;
    iVar15 = CONCAT22(uVar25,CONCAT11(cVar37 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar37,cVar32)) +
                                                        0x76),cVar32));
    *pcVar11 = *pcVar11 + cVar6;
    pcVar11 = (char *)CONCAT31(uVar21,cVar4 + -0x22);
    puVar12 = (uint *)((int)puVar43 + 1);
    *(byte *)puVar43 = *(byte *)ppbVar41;
    *pcVar11 = *pcVar11 + cVar4 + -0x22;
    *(byte *)((int)puVar19 + (int)pcVar11) =
         *(byte *)((int)puVar19 + (int)pcVar11) - (char)((uint)pbVar28 >> 8);
    *pbVar28 = *pbVar28 + cVar31;
    bVar7 = cVar38 - pbVar16[4];
    pbVar34 = (byte *)((int)ppbVar41 + 5);
    out(*(undefined4 *)((int)ppbVar41 + 1),(short)pbVar28);
    puVar43 = (uint *)((uint)(pcVar11 + *(int *)(pcVar11 + iVar15)) ^ 0x280a0001);
    *(byte *)puVar43 = (byte)*puVar43 << 1 | (char)(byte)*puVar43 < '\0';
    *pbVar34 = *pbVar34 + (char)puVar43;
    pbVar34 = pbVar34 + *(int *)(pbVar16 + -0x5c);
    pbVar16 = (byte *)((uint)puVar43 | *puVar43);
    *pbVar34 = *pbVar34 + (char)pbVar16;
    puVar35 = (uint *)CONCAT31((int3)((uint)iVar15 >> 8),cVar32 - (char)pbVar28);
    bVar5 = *pbVar16;
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),CONCAT11(bVar7 + *pbVar16,cVar31));
    iVar15 = *(int *)pbVar16;
    *pbVar28 = *pbVar28 + cVar31;
    cVar4 = (char)(pbVar16 + (uint)CARRY1(bVar7,bVar5) + iVar15) + 'r';
    puVar43 = (uint *)CONCAT31((int3)((uint)(pbVar16 + (uint)CARRY1(bVar7,bVar5) + iVar15) >> 8),
                               cVar4);
    pbVar16 = (byte *)CONCAT22((short)((uint)pbVar28 >> 0x10),CONCAT11(10,(char)pbVar28));
    *(char *)(puVar43 + 10) = (char)puVar43[10] + '\n';
    *pbVar34 = *pbVar34 + cVar4;
    ppbVar41 = (byte **)(pbVar34 + *(int *)(pbVar16 + -0x5e));
    uVar36 = *puVar43;
    cVar4 = (char)((uint)puVar43 | uVar36);
    *(byte *)ppbVar41 = *(byte *)ppbVar41 + cVar4;
    uVar21 = (undefined3)(((uint)puVar43 | uVar36) >> 8);
    cVar6 = cVar4 + (byte)*puVar35;
    puVar43 = (uint *)CONCAT31(uVar21,cVar6);
    if (SCARRY1(cVar4,(byte)*puVar35) == cVar6 < '\0') goto code_r0x00405090;
    *(byte *)puVar43 = (byte)*puVar43 + cVar6;
    piVar17 = (int *)CONCAT31(uVar21,cVar6 + '\x02');
    puVar43 = puVar12;
  }
  else {
    out(2,(char)piVar17);
    if ((POPCOUNT(*pbVar16) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar21 = (undefined3)((uint)piVar17 >> 8);
  cVar4 = (char)piVar17 + '}';
  pbVar34 = (byte *)CONCAT31(uVar21,cVar4);
  pbVar16[(int)pbVar34] = pbVar16[(int)pbVar34] + cVar4;
  pbVar16[0x280a0000] = pbVar16[0x280a0000] - (char)((uint)piVar17 >> 8);
  bVar5 = (byte)puVar19 & 7;
  *pbVar34 = *pbVar34 << bVar5 | *pbVar34 >> 8 - bVar5;
  *(byte *)ppbVar41 = *(byte *)ppbVar41 + cVar4;
  cVar31 = (char)puVar35 - *(byte *)ppbVar41;
  uVar25 = (undefined2)((uint)puVar35 >> 0x10);
  cVar38 = (char)((uint)puVar35 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar35 >> 8),cVar31) + 0x7c);
  pcVar11 = (char *)CONCAT22(uVar25,CONCAT11(cVar38,cVar31));
  *pbVar34 = *pbVar34 + cVar4;
  bVar7 = (char)piVar17 + 0xa7U & *pbVar16;
  puVar12 = (uint *)((int)puVar43 + *(int *)(pbVar40 + 0x7c));
  *(char *)CONCAT31(uVar21,bVar7) = *(char *)CONCAT31(uVar21,bVar7) + bVar7;
  bVar7 = bVar7 + 0x2a;
  pbVar34 = (byte *)CONCAT31(uVar21,bVar7);
  *pbVar34 = *pbVar34 + bVar7;
  *pcVar11 = *pcVar11 + cVar31;
  *pbVar16 = *pbVar16 ^ bVar7;
  *pcVar11 = *pcVar11 + bVar7;
  bVar5 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar7;
  cVar4 = (bVar7 - *pbVar34) - CARRY1(bVar5,bVar7);
  *(byte *)puVar19 = (byte)*puVar19 + (byte)pbVar16;
  cVar38 = cVar38 + pcVar11[0x7b];
  *(char *)CONCAT31(uVar21,cVar4) = *(char *)CONCAT31(uVar21,cVar4) + cVar4;
  pcVar11 = (char *)CONCAT31(uVar21,cVar4 + 'o');
  *pcVar11 = *pcVar11 + cVar4 + 'o';
  pcVar11 = pcVar11 + 0x2ed7fde6;
  cVar6 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar6;
  cVar4 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar38,cVar31)) + 0x7b);
  *pcVar11 = *pcVar11 + cVar6;
  piVar17 = (int *)(CONCAT31((int3)((uint)pcVar11 >> 8),cVar6 + 'o') + 0x6f060000);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar22 = (undefined3)((uint)pbVar16 >> 8);
  bVar7 = (byte)pbVar16 | *(byte *)ppbVar41;
  pbVar28 = (byte *)CONCAT31(uVar22,bVar7);
  uVar36 = CONCAT22(uVar25,CONCAT11(cVar38 + cVar4,cVar31)) | (uint)ppbVar41;
  uVar21 = (undefined3)((uint)piVar17 >> 8);
  bVar5 = (byte)piVar17 | *pbVar28;
  pbVar34 = (byte *)CONCAT31(uVar21,bVar5);
  cVar4 = (byte)puVar19 - bVar7;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar4);
  *pbVar34 = *pbVar34 + bVar5;
  ppbVar42 = ppbVar41 + 1;
  out(*ppbVar41,(short)pbVar28);
  *pbVar34 = bVar5;
  *pbVar28 = *pbVar28 + cVar4;
  ppbVar41 = ppbVar41 + 2;
  out(*ppbVar42,(short)pbVar28);
  *(byte **)pbVar34 = pbVar34 + *(int *)pbVar34;
  puVar35 = (uint *)(CONCAT31((int3)(uVar36 >> 8),(char)uVar36 - (char)((uint)pbVar16 >> 8)) |
                    (uint)ppbVar41);
  pbVar16 = (byte *)CONCAT31(uVar22,(bVar7 | *(byte *)ppbVar41) + (byte)*puVar12);
  cVar4 = bVar5 - (byte)*puVar12;
  puVar43 = (uint *)CONCAT31(uVar21,cVar4 - *(char *)CONCAT31(uVar21,cVar4));
code_r0x00405090:
  *puVar43 = (uint)(pbVar16 + *puVar43);
  cVar4 = (char)puVar43;
  *(byte *)puVar43 = (byte)*puVar43 + cVar4;
  *(byte *)puVar43 = (byte)*puVar43 + cVar4;
  *(byte *)puVar43 = (byte)*puVar43 + cVar4;
  *puVar19 = *puVar19 - (int)pbVar40;
  bVar5 = *(byte *)ppbVar41;
  bVar7 = (byte)pbVar16;
  *(byte *)ppbVar41 = *(byte *)ppbVar41 + bVar7;
  *(byte *)puVar43 = (byte)*puVar43 + cVar4 + CARRY1(bVar5,bVar7);
  *(byte *)puVar19 = (byte)*puVar19 + cVar4;
  uVar36 = *puVar35;
  *(byte *)puVar35 = (byte)*puVar35 + 0x72;
  *(byte *)puVar35 = (byte)*puVar35;
  cVar4 = (char)((uint)pbVar16 >> 8);
  if (SCARRY1((byte)uVar36,'r')) {
    ppbVar41 = (byte **)((int)ppbVar41 + *(int *)(pbVar16 + -10));
  }
  else {
    while( true ) {
      *(byte *)ppbVar41 = *(byte *)ppbVar41 + (char)puVar43;
      uVar21 = (undefined3)((uint)puVar43 >> 8);
      cVar6 = (char)puVar43 + (byte)*puVar35;
      pcVar11 = (char *)CONCAT31(uVar21,cVar6);
      puVar35 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),
                                 CONCAT11((char)((uint)puVar35 >> 8) +
                                          *(byte *)((int)puVar35 + 0x7b),(char)puVar35));
      *pcVar11 = *pcVar11 + cVar6;
      in_AF = 9 < (cVar6 + 0x6fU & 0xf) | in_AF;
      uVar36 = CONCAT31(uVar21,cVar6 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar8 = (byte)uVar36;
      piVar17 = (int *)CONCAT22((short)(uVar36 >> 0x10),
                                CONCAT11((char)((uint)puVar43 >> 8) + in_AF,bVar8));
      *piVar17 = *piVar17 + (int)piVar17;
      uVar21 = (undefined3)((uint)piVar17 >> 8);
      bVar8 = bVar8 | *(byte *)(piVar17 + 0x354a);
      bVar8 = bVar8 - *(char *)CONCAT31(uVar21,bVar8);
      pbVar34 = (byte *)CONCAT31(uVar21,bVar8);
      bVar5 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar8;
      ppbVar41 = (byte **)((int)ppbVar41 + (-(uint)CARRY1(bVar5,bVar8) - *(int *)pbVar34));
      puVar43 = (uint *)(pbVar34 + 0xfc00);
      *pbVar16 = *pbVar16 + cVar4;
      uVar36 = *puVar43;
      bVar5 = (byte)puVar43;
      *(byte *)puVar43 = (byte)*puVar43 + bVar5;
      uVar13 = (uint)CARRY1((byte)uVar36,bVar5);
      uVar36 = *puVar35;
      uVar2 = *puVar35;
      *puVar35 = (uint)((byte *)(uVar2 + (int)puVar43) + uVar13);
      if (!CARRY4(uVar36,(uint)puVar43) && !CARRY4(uVar2 + (int)puVar43,uVar13)) break;
      *(byte *)puVar43 = (byte)*puVar43 + bVar5;
    }
  }
  uVar36 = (uint)puVar43 | *puVar43;
  uVar25 = SUB42(pbVar16,0);
  *(byte *)ppbVar41 = *(byte *)ppbVar41 + (char)uVar36;
  piVar17 = (int *)(uVar36 + 0xc1872);
  if (SCARRY4(uVar36,0xc1872)) {
    cVar6 = (char)piVar17;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *pbVar16 = *pbVar16 + cVar6;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(byte *)puVar35 = (byte)*puVar35 + (char)puVar19;
    *(char *)piVar17 = *(char *)piVar17 + cVar6;
    *(char *)((int)piVar17 * 2) = *(char *)((int)piVar17 * 2) + bVar7;
    ppbVar42 = ppbVar41;
    goto code_r0x00405117;
  }
  do {
    bVar5 = *(byte *)ppbVar41;
    bVar7 = (byte)piVar17;
    *(byte *)ppbVar41 = *(byte *)ppbVar41 + bVar7;
    if (CARRY1(bVar5,bVar7)) {
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      uVar21 = (undefined3)((uint)puVar19 >> 8);
      bVar5 = (byte)puVar19 | bRam396f1609;
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      puVar19 = (uint *)CONCAT31(uVar21,bVar5 | *(byte *)CONCAT31(uVar21,bVar5));
      uVar21 = (undefined3)((uint)piVar17 >> 8);
      bVar7 = bVar7 | *pbVar16;
      pcVar11 = (char *)CONCAT31(uVar21,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) {
        ppbVar42 = ppbVar41 + 1;
        out(*ppbVar41,uVar25);
        uVar36 = CONCAT22((short)((uint)piVar17 >> 0x10),(ushort)bVar7);
        *(byte *)ppbVar42 = *(byte *)ppbVar42 + bVar7;
        pcVar11 = (char *)(uVar36 | 8);
        cVar6 = (char)((uint)puVar35 >> 8) + *(byte *)((int)puVar35 + 0x7a);
        puVar43 = (uint *)CONCAT22((short)((uint)puVar35 >> 0x10),CONCAT11(cVar6,(char)puVar35));
        *pcVar11 = *pcVar11 + (char)pcVar11;
        cVar4 = (char)pcVar11 + 'o';
        piVar17 = (int *)CONCAT31((int3)(uVar36 >> 8),cVar4);
        *(char *)piVar17 = (char)*piVar17 + cVar4;
        *(byte *)puVar19 = (byte)*puVar19 + 1;
        ppbVar41 = ppbVar41 + 2;
        out(*ppbVar42,uVar25);
        pbVar16 = (byte *)((uint)pbVar16 ^ uRam08122c04);
        iVar15 = CONCAT31((int3)((uint)(*piVar17 * 0x17070600) >> 8),2);
        *(char *)(iVar15 * 2) = *(char *)(iVar15 * 2) - cVar6;
        do {
          bVar5 = (byte)iVar15;
          *(byte *)ppbVar41 = *(byte *)ppbVar41 + bVar5;
          bVar44 = CARRY1(bVar5,(byte)*puVar43);
          uVar21 = (undefined3)((uint)iVar15 >> 8);
          cVar4 = bVar5 + (byte)*puVar43;
          pbVar34 = (byte *)CONCAT31(uVar21,cVar4);
          uVar25 = in_DS;
          uVar26 = uStack_60;
          if (SCARRY1(bVar5,(byte)*puVar43) == cVar4 < '\0') goto GenerateStatusText;
          *pbVar34 = *pbVar34 + cVar4;
          uVar36 = CONCAT31(uVar21,cVar4 + '\'') + 0x1ebd9f3;
          uStack_64 = (undefined1)uStack_14;
          uStack_63 = (undefined1)((ushort)uStack_14 >> 8);
          piVar17 = (int *)(uVar36 ^ 0x73060000);
          puVar19 = (uint *)((int)puVar19 + 1);
          *piVar17 = (int)(*piVar17 + (int)piVar17);
          puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                     CONCAT11((byte)((uint)puVar43 >> 8) | pbVar40[0x7e],
                                              (char)puVar43));
          cVar4 = (char)uVar36;
          *(char *)piVar17 = (char)*piVar17 + cVar4;
          uVar36 = CONCAT31((int3)((uint)piVar17 >> 8),cVar4 + '\x02');
          bVar44 = 0xd9f2d2da < uVar36;
          iVar15 = uVar36 + 0x260d2d25;
          pbVar28 = pbVar40;
          do {
            uVar21 = (undefined3)((uint)iVar15 >> 8);
            bVar7 = (char)iVar15 + -2 + bVar44;
            pbVar40 = (byte *)CONCAT31(uVar21,bVar7);
            bVar5 = *pbVar40;
            *pbVar40 = *pbVar40 + bVar7;
            bVar8 = (byte)puVar43;
            uStack_60 = uStack_14;
            if (CARRY1(bVar5,bVar7)) {
              *pbVar40 = *pbVar40 + bVar7;
              puVar43 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),
                                         CONCAT11((byte)((uint)puVar43 >> 8) | pbVar28[0x7f],bVar8))
              ;
              *pbVar40 = *pbVar40 + bVar7;
              pbVar34 = (byte *)CONCAT31(uVar21,bVar7 + 0x2a);
              *pbVar34 = *pbVar34 + bVar7 + 0x2a;
              *(byte *)puVar43 = (byte)*puVar43 + (char)pbVar16;
              uVar25 = in_DS;
              while( true ) {
                in_DS = uVar25;
                bVar7 = (byte)pbVar34;
                *pbVar16 = *pbVar16 ^ bVar7;
                *pbVar16 = *pbVar16 + (char)puVar43;
                *pbVar34 = *pbVar34 + bVar7;
                *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)pbVar16 >> 8);
                bVar5 = *pbVar34;
                *pbVar34 = *pbVar34 + bVar7;
                uVar36 = *puVar43;
                uVar2 = *puVar43;
                *puVar43 = (uint)(pbVar34 + uVar2 + CARRY1(bVar5,bVar7));
                uVar21 = (undefined3)((uint)pbVar34 >> 8);
                if (CARRY4(uVar36,(uint)pbVar34) ||
                    CARRY4((uint)(pbVar34 + uVar2),(uint)CARRY1(bVar5,bVar7))) break;
                *(byte *)ppbVar41 = *(byte *)ppbVar41 + bVar7;
                pcVar11 = (char *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                           CONCAT11((char)((uint)puVar19 >> 8) + *pbVar34,
                                                    (char)puVar19));
                *(byte *)ppbVar41 = *(byte *)ppbVar41 + bVar7;
                pbVar40 = (byte *)CONCAT31(uVar21,bVar7 | (byte)*puVar43);
                ppbVar42 = ppbVar41;
                while( true ) {
                  ppbVar41 = ppbVar42 + 1;
                  out(*ppbVar42,(short)pbVar16);
                  pbVar16 = pbVar16 + 1;
                  *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
                  bVar8 = (byte)((uint)pcVar11 >> 8) | *pbVar16;
                  uVar21 = (undefined3)((uint)pbVar40 >> 8);
                  bVar7 = (byte)pbVar40 ^ *pbVar16;
                  pcVar20 = (char *)CONCAT31(uVar21,bVar7);
                  cRam282b0000 = cRam282b0000 - bVar8;
                  *pcVar20 = *pcVar20 + bVar7;
                  pbVar40 = pbVar28 + -*(int *)pbVar16;
                  uStack_64 = (undefined1)in_DS;
                  uStack_63 = (undefined1)((ushort)in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar12 + 0x17);
                  *pcVar20 = *pcVar20 + bVar7;
                  puVar19 = (uint *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                             CONCAT11(bVar8 + bVar5 | *pbVar16,(char)pcVar11));
                  *(byte *)puVar43 = (byte)*puVar43 + (char)puVar43;
                  *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar7;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  bVar7 = bVar7 + in_AF * -6;
                  pbVar34 = (byte *)CONCAT31(uVar21,bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar34 = pbVar34 + *(int *)pbVar34;
                  *(char *)((int)pbVar34 * 2) =
                       *(char *)((int)pbVar34 * 2) + (char)((uint)pbVar16 >> 8);
                  bVar44 = CARRY1((byte)*puVar19,(byte)pbVar16);
                  *(byte *)puVar19 = (byte)*puVar19 + (byte)pbVar16;
                  uVar25 = in_DS;
                  uVar26 = uStack_14;
GenerateStatusText:
                  in_DS = uVar26;
                  pbVar28 = pbVar40;
                  uStack_60 = in_DS;
                  if (!bVar44) break;
                  *pbVar34 = *pbVar34 + (char)pbVar34;
                  iVar15 = CONCAT31((int3)((uint)puVar19 >> 8),(byte)puVar19 | *pbVar16);
                  uVar25 = (undefined2)((uint)puVar43 >> 0x10);
                  cVar31 = (char)((uint)puVar43 >> 8) + *(byte *)((int)puVar43 + 0x7d);
                  *pbVar34 = *pbVar34 + (char)pbVar34;
                  *(byte *)puVar12 = (byte)*puVar12 - (char)((uint)puVar19 >> 8);
                  iVar15 = iVar15 - *(int *)(iVar15 + 0xb0a0000);
                  cVar4 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar31,(char)puVar43)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*ppbVar41,(short)pbVar16);
                  pbVar16 = (byte *)CONCAT22(uStack_62,CONCAT11(uStack_63,uStack_64));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  ppbVar42 = ppbVar41 + 2;
                  out(ppbVar41[1],CONCAT11(uStack_63,uStack_64));
                  pbVar28 = pbVar40 + 1;
                  cVar6 = (char)iVar15;
                  pcVar11 = (char *)CONCAT22((short)((uint)iVar15 >> 0x10),
                                             CONCAT11((byte)((uint)iVar15 >> 8) |
                                                      *(byte *)((int)puVar12 + 0x46),cVar6));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_14 = CONCAT11(uStack_63,uStack_64);
                  uVar21 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*(byte *)ppbVar42,0xf0)) >> 8);
                  piVar17 = (int *)CONCAT31(uVar21,0x5f);
                  puVar12 = (uint *)((int)puVar12 + 1);
                  *piVar17 = (int)(*piVar17 + (int)piVar17);
                  puVar43 = (uint *)CONCAT22(uVar25,CONCAT11(cVar31 + cVar4 |
                                                             *(byte *)(ppbVar41 + -0x1e),
                                                             (char)puVar43));
                  *(char *)piVar17 = (char)*piVar17 + '_';
                  puVar19 = (uint *)CONCAT31(uVar21,0x8c);
                  ppbVar42[(int)puVar12 * 2] = ppbVar42[(int)puVar12 * 2] + (int)pbVar16;
                  bVar5 = *(byte *)ppbVar42;
                  *(byte *)ppbVar42 = *(byte *)ppbVar42 + 0x8c;
                  if (bVar5 < 0x74) {
                    *pbVar16 = *pbVar16 + cVar6;
                    *(byte *)puVar43 = (byte)*puVar43 >> 1;
                    *(char *)puVar19 = (char)*puVar19 + -0x74;
                    *puVar19 = (uint)(pbVar28 + *puVar19);
                    *puVar19 = *puVar19 << 1 | (uint)((int)*puVar19 < 0);
                    *pbVar16 = *pbVar16 + cVar6;
                    pbVar40[2] = pbVar40[2] - cVar6;
                    *pbVar16 = *pbVar16 + cVar6;
                    pbVar40 = (byte *)CONCAT31(uVar21,0x83);
                    puVar19 = puVar43;
                    goto code_r0x00405312;
                  }
                  *puVar19 = (uint)(*puVar19 + (int)puVar19);
                  piVar17 = (int *)(CONCAT31(uVar21,(byte)puVar19[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar19[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  pbVar40 = (byte *)((int)piVar17 + (int)*ppbVar42);
                }
              }
              *pbVar16 = *pbVar16 + bVar7;
              *(byte *)puVar43 = (byte)*puVar43 - (char)pbVar16;
              *pbVar34 = *pbVar34 + bVar7;
              pbVar40 = (byte *)CONCAT31(uVar21,bVar7 | (byte)*puVar43);
            }
            else {
              cVar4 = (char)puVar19;
              *pbVar16 = *pbVar16 + cVar4;
              *(byte **)pbVar40 = pbVar16 + *(int *)pbVar40;
              *pbVar40 = *pbVar40 + bVar7;
              bVar7 = bVar7 + *pbVar40;
              pbVar40 = (byte *)CONCAT31(uVar21,bVar7);
              if (-1 < (char)bVar7) {
                *(byte *)puVar43 = (byte)*puVar43 + bVar8;
                out(*ppbVar41,(short)pbVar16);
                pbVar16 = pbVar16 + 1;
                *pbVar40 = *pbVar40 + bVar7;
                puVar43 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),
                                           bVar8 | (byte)((uint)iVar15 >> 8));
                cVar6 = bVar7 - (byte)*puVar19;
                pcVar11 = (char *)CONCAT31(uVar21,cVar6);
                *pcVar11 = *pcVar11 + cVar6 + (bVar7 < (byte)*puVar19);
                *pbVar16 = *pbVar16 + cVar6;
                pcVar11 = (char *)((int)pcVar11 * 2 + 0x79);
                *pcVar11 = *pcVar11 + (char)((uint)pbVar16 >> 8);
                pbVar40 = (byte *)in((short)pbVar16);
                ppbVar41 = ppbVar41 + 1;
              }
              *(byte *)ppbVar41 = *(byte *)ppbVar41 + cVar4;
              *pbVar40 = *pbVar40 + (char)pbVar40;
              *pbVar40 = *pbVar40 + (char)pbVar40;
              uStack_64 = (undefined1)in_DS;
              uStack_63 = (undefined1)((ushort)in_DS >> 8);
              bVar5 = *pbVar40;
              bVar8 = (byte)((uint)puVar19 >> 8);
              bVar30 = bVar8 + *pbVar40;
              iVar15 = *(int *)pbVar40;
              *pbVar16 = *pbVar16 + cVar4;
              bVar7 = (char)(pbVar40 + (uint)CARRY1(bVar8,bVar5) + iVar15) - (byte)*puVar43;
              pbVar40 = (byte *)CONCAT31((int3)((uint)(pbVar40 + (uint)CARRY1(bVar8,bVar5) + iVar15)
                                               >> 8),bVar7);
              *(byte *)puVar43 = (byte)*puVar43 ^ bVar7;
              *pbVar28 = *pbVar28 + (char)puVar43;
              *pbVar40 = *pbVar40 + bVar7;
              *pbVar40 = *pbVar40 + bVar7;
              *pbVar40 = *pbVar40 + bVar7;
              puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                         CONCAT11(bVar30 + *pbVar40,cVar4));
              pbVar40 = pbVar40 + (uint)CARRY1(bVar30,*pbVar40) + *(int *)pbVar40;
              *pbVar16 = *pbVar16 + cVar4;
              ppbVar41 = (byte **)((int)ppbVar41 + *(int *)(pbVar16 + 0x3e));
            }
            *(byte *)ppbVar41 = *(byte *)ppbVar41 + (char)pbVar40;
            cVar4 = (char)pbVar40 + 'r';
            ppbVar41 = (byte **)((int)ppbVar41 + -1);
            uVar36 = CONCAT31((int3)((uint)pbVar40 >> 8),cVar4);
            *(byte *)ppbVar41 = *(byte *)ppbVar41 + cVar4;
            bVar44 = 0xfff38f8d < uVar36;
            iVar15 = uVar36 + 0xc7072;
            pbVar40 = pbVar28;
          } while (SCARRY4(uVar36,0xc7072));
        } while( true );
      }
      *pcVar11 = *pcVar11 + bVar7;
      bVar7 = bVar7 + 0x6f;
      pbVar34 = (byte *)CONCAT31(uVar21,bVar7);
      bVar5 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar7;
      uVar21 = (undefined3)
               ((uint)(pbVar34 + (uint)CARRY1(bVar5,bVar7) + *(int *)((int)puVar19 + (int)pbVar16))
               >> 8);
      cVar6 = (char)(pbVar34 + (uint)CARRY1(bVar5,bVar7) + *(int *)((int)puVar19 + (int)pbVar16)) +
              'E';
      pcVar11 = (char *)CONCAT31(uVar21,cVar6);
      *pcVar11 = *pcVar11 + cVar6;
      cVar6 = cVar6 + *pcVar11;
      pcVar11 = (char *)CONCAT31(uVar21,cVar6);
      *pcVar11 = *pcVar11 + cVar6;
      puVar43 = (uint *)CONCAT31(uVar21,cVar6 + *pcVar11);
      *(char *)puVar43 = (char)*puVar43 + cVar6 + *pcVar11;
      pbVar34 = (byte *)((uint)puVar43 | *puVar43);
      bVar5 = *pbVar34;
      bVar7 = (byte)pbVar34;
      *pbVar34 = *pbVar34 + bVar7;
      piVar17 = (int *)CONCAT31((int3)((uint)pbVar34 >> 8),bVar7 + CARRY1(bVar5,bVar7));
      ppbVar42 = ppbVar41;
code_r0x00405117:
      *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
      puVar35 = (uint *)((int)puVar35 - *puVar35);
      ppbVar41 = ppbVar42 + 1;
      out(*ppbVar42,uVar25);
    }
    *pbVar16 = *pbVar16 + (char)puVar19;
    bVar44 = puVar35 < (uint *)*piVar17;
    puVar35 = (uint *)((int)puVar35 - *piVar17);
    bVar5 = (byte)((uint)puVar19 >> 8);
    *(byte *)((int)puVar12 + 0x39) = (*(byte *)((int)puVar12 + 0x39) - bVar5) - bVar44;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    uVar36 = *puVar35;
    *(int *)((int)puVar12 + 0x39) = *(int *)((int)puVar12 + 0x39) - (int)pbVar40;
    *piVar17 = (int)(*piVar17 + (int)piVar17);
    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar36 | (byte)*puVar35,(char)puVar19));
    *(char *)(piVar17 + 10) = (char)piVar17[10] + cVar4;
  } while( true );
code_r0x004052ee:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  bVar5 = (char)piVar17 + 0x28;
  pbVar40 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),bVar5);
  *pbVar40 = *pbVar40 ^ bVar5;
  *(byte *)puVar43 = (byte)*puVar43 + (char)((uint)pcVar11 >> 8);
  bVar5 = *pbVar16;
  *pbVar16 = *pbVar16 + (byte)pcVar11;
  piVar17 = (int *)(((uint)pbVar40 | 0x1496f09) + *puVar12 + (uint)CARRY1(bVar5,(byte)pcVar11));
  ppbVar41 = ppbVar42 + 1;
  out(*ppbVar42,(short)pbVar16);
  pbVar34 = pbVar16 + -1;
  *piVar17 = *piVar17 + (int)piVar17;
  pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar34 >> 8),(byte)pbVar34 | (byte)*puVar43);
  cVar4 = (char)piVar17 + '\x13';
  pbVar40 = (byte *)CONCAT31((int3)((uint)piVar17 >> 8),cVar4);
  puVar19 = puVar43;
  ppbVar42 = ppbVar41;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *pbVar16 = *pbVar16 - (char)((uint)pbVar34 >> 8);
    *pbVar40 = *pbVar40 + cVar4;
code_r0x00405396:
    bVar5 = *pbVar40;
    bVar7 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar7;
    *ppbVar41 = *ppbVar41 + (int)pbVar40 + CARRY1(bVar5,bVar7);
    out(*ppbVar41,(short)pbVar16);
    *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
    *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((byte)((uint)pbVar40 >> 8) | *(byte *)(ppbVar41 + 1),bVar7))
    ;
    *(char **)((int)puVar12 + -1) = pcVar11 + *(int *)((int)puVar12 + -1);
    out(ppbVar41[1],(short)pbVar16);
    *pcVar11 = *pcVar11 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar40 = *pbVar40 + (char)pbVar40;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + 'o');
  puVar43 = (uint *)((int)puVar19 + -1);
  *piVar17 = *piVar17 + (int)piVar17;
  uVar21 = (undefined3)((uint)pbVar16 >> 8);
  piVar17 = (int *)((int)piVar17 + 0x1b7e);
  bVar8 = (byte)pbVar16 | *(byte *)puVar43 | *(byte *)puVar43;
  iRam04115f2c = iRam04115f2c + (int)piVar17;
  out(*ppbVar42,(short)CONCAT31(uVar21,bVar8));
  *piVar17 = *piVar17 + (int)piVar17;
  bVar8 = bVar8 | (byte)piVar17;
  iVar29 = CONCAT31(uVar21,bVar8);
  pbVar40 = (byte *)((int)piVar17 - *piVar17);
  cVar4 = (char)pbVar40;
  *pcVar11 = *pcVar11 + cVar4;
  cVar6 = (char)pcVar11 - bVar8;
  *pbVar40 = *pbVar40 + cVar4;
  uVar25 = (undefined2)((uint)pcVar11 >> 0x10);
  bVar7 = (byte)((uint)pcVar11 >> 8) | *pbVar40;
  pbVar28 = pbVar28 + -1;
  *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
  bVar5 = *(byte *)(CONCAT22(uVar25,CONCAT11(bVar7,cVar6)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar40;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar28;
  *pbVar40 = *pbVar40 + cVar4;
  bVar5 = bVar7 | bVar5 | *(byte *)puVar43;
  iVar23 = CONCAT22(uVar25,CONCAT11(bVar5,cVar6));
  pbVar34 = (byte *)((uint)(ppbVar42 + 1) ^ *(uint *)(iVar29 + -0x43));
  iVar15 = *(int *)pbVar40;
  *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
  if (SCARRY4(iVar15,(int)pbVar40)) {
    *pbVar40 = *pbVar40 + cVar4;
  }
  pbVar16 = pbVar40 + 0x5674;
  puVar12 = (uint *)((int)puVar12 +
                    (-(uint)((byte *)0xffffa98b < pbVar40) - *(int *)(pbVar34 + -0x7f)));
  bVar7 = (byte)pbVar16;
  *pbVar16 = *pbVar16 + bVar7;
  uVar22 = (undefined3)((uint)pbVar16 >> 8);
  bVar30 = bVar7 + 0x2d;
  piVar17 = (int *)CONCAT31(uVar22,bVar30);
  *(uint *)(pbVar34 + (int)puVar12 * 8) =
       *(int *)(pbVar34 + (int)puVar12 * 8) + iVar29 + (uint)(0xd2 < bVar7);
  bVar7 = *pbVar34;
  *pbVar34 = *pbVar34 + bVar30;
  if (!CARRY1(bVar7,bVar30)) {
    do {
      pbVar16 = (byte *)(iVar29 + 1);
      bVar7 = (byte)piVar17;
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      bVar8 = (byte)((uint)piVar17 >> 8);
      bVar30 = (byte)puVar43 | bVar8;
      puVar19 = (uint *)CONCAT31((int3)((uint)puVar43 >> 8),bVar30);
      out(*(undefined4 *)pbVar34,(short)pbVar16);
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      uVar25 = (undefined2)((uint)iVar23 >> 0x10);
      cVar4 = (char)iVar23;
      pbVar40 = (byte *)CONCAT22(uVar25,CONCAT11((byte)((uint)iVar23 >> 8) | *pbVar16,cVar4));
      bVar5 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar7;
      *(byte *)piVar17 = (char)*piVar17 + bVar7 + CARRY1(bVar5,bVar7);
      *pbVar16 = *pbVar16 + bVar7;
      *(byte *)puVar12 = (byte)*puVar12 + bVar8;
      *(int *)((int)piVar17 * 2) =
           *(int *)((int)piVar17 * 2) + CONCAT22(uVar25,CONCAT11(0x1c,cVar4));
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      cVar6 = (char)pbVar16;
      *(byte *)puVar19 = (byte)*puVar19 + cVar6;
      *(byte *)((int)piVar17 * 2) = *(byte *)((int)piVar17 * 2) ^ bVar7;
      *(byte *)piVar17 = (char)*piVar17 + bVar7;
      pbVar40 = pbVar34 + 8;
      out(*(undefined4 *)(pbVar34 + 4),(short)pbVar16);
      piVar17 = (int *)0xa0a0000;
      *pbVar16 = *pbVar16;
      bVar7 = cVar4 - cVar6;
      iVar23 = CONCAT22(uVar25,CONCAT11((byte)puVar12[0x14] | 0x1c | bRam0ca87216,bVar7));
      *pbVar16 = *pbVar16;
      bVar5 = *pbVar16;
      *pbVar16 = *pbVar16 + bVar7;
      if (!CARRY1(bVar5,bVar7)) {
        piVar17 = (int *)0x1e7b7000;
        bVar5 = (byte)((uint)puVar43 >> 8) | *(byte *)(iVar29 + 3);
        puVar19 = (uint *)CONCAT22((short)((uint)puVar43 >> 0x10),CONCAT11(bVar5,bVar30));
        if (bVar5 != 0) {
          pbVar16 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar6 + pbVar40[(int)puVar12 * 8]);
          piVar17 = (int *)0x6d7d7000;
          iVar23 = iVar23 + 1;
        }
      }
      *piVar17 = (int)(*piVar17 + (int)piVar17);
      iVar29 = CONCAT31((int3)((uint)pbVar16 >> 8),(byte)pbVar16 | pbVar40[(int)puVar12 * 8]);
      *(char *)piVar17 = (char)*piVar17;
      piVar17 = (int *)CONCAT31((int3)((uint)piVar17 >> 8),0xf9);
      *puVar12 = (uint)((int)piVar17 + *puVar12 + 1);
      pbVar34 = pbVar34 + 0xc;
      out(*(undefined4 *)pbVar40,(short)iVar29);
      puVar43 = puVar19;
    } while( true );
  }
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  bVar30 = bVar30 | *(byte *)((int)piVar17 + 0x4000081);
  piVar17 = (int *)CONCAT31(uVar22,bVar30);
  if ('\0' < (char)bVar30) {
    *(byte *)piVar17 = (char)*piVar17 + bVar30;
    puVar35 = (uint *)CONCAT31(uVar22,bVar30 + 0x28);
    *puVar35 = *puVar35 ^ (uint)puVar35;
    *(byte *)puVar43 = *(byte *)puVar43 + bVar5;
    cVar4 = (bVar30 + 0x28) - bVar5;
    pcVar11 = (char *)CONCAT31(uVar22,cVar4);
    *pcVar11 = *pcVar11 + cVar4;
    pbVar16 = (byte *)CONCAT31(uVar21,bVar8 | *(byte *)puVar43);
    pcVar20 = (char *)CONCAT22((short)((uint)puVar43 >> 0x10),
                               CONCAT11((char)((uint)puVar43 >> 8) + *(byte *)((int)puVar19 + 0x7d),
                                        (char)puVar43));
    *pcVar11 = *pcVar11 + cVar4;
    pbVar40 = (byte *)CONCAT31(uVar22,cVar4 + 0x39U ^ *(byte *)CONCAT31(uVar22,cVar4 + 0x39U));
    *pcVar20 = *pcVar20 + bVar5;
    ppbVar41 = (byte **)(pbVar34 + 4);
    out(*(undefined4 *)pbVar34,(short)pbVar16);
    goto code_r0x00405396;
  }
  ppbVar42 = (byte **)(pbVar34 + 4);
  out(*(undefined4 *)pbVar34,(short)iVar29);
  pcVar11 = (char *)(iVar23 + -1);
  *piVar17 = (int)(*piVar17 + (int)piVar17);
  pbVar16 = (byte *)CONCAT31(uVar21,bVar8 | *(byte *)puVar43);
  goto code_r0x004052ee;
}


