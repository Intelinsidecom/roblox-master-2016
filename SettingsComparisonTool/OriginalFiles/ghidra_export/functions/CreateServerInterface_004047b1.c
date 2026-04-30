/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004047b1
 * Raw Name    : CreateServerInterface
 * Demangled   : CreateServerInterface
 * Prototype   : int CreateServerInterface(uint * connectionFormat, uint * server, uint * * param_3, uint * param_4, uint * param_5, char * param_6, uint * param_7, uint * param_8, int param_9, char * param_10)
 * Local Vars  : uVar29, bVar28, bVar31, uVar30, pbVar33, ppuVar32, bVar35, iVar34, unaff_EBX, cVar36, uVar38, ppuVar37, cVar40, cVar39, puVar41, unaff_EBP, unaff_ESI, ppuVar42, unaff_EDI, ppuVar43, ppuVar45, ppuVar44, in_SS, in_ES, bVar46, in_DS, unaff_retaddr, in_AF, connectionFormat, server, uStack_64, uStack_62, uStack_63, uStack_24, uStack_60, iStack_1c, ppuStack_20, uStack_14, ppuStack_18, ppuStack_c, uStack_10, puStack_4, param_3, uStack_8, param_4, uVar2, param_5, uVar1, bVar4, param_6, param_7, uVar3, cVar6, param_8, cVar5, param_9, bVar8, param_10, bVar7, in_EAX, uVar9, pbVar11, pbVar10, puVar13, pcVar12, uVar15, puVar14, iVar17, puVar16, puVar19, piVar18, puVar21, pcVar20, uVar23, pcVar22, cVar25, uVar24, iVar27, pcVar26
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
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __fastcall
CreateServerInterface
          (uint *connectionFormat,uint *server,uint **param_3,uint *param_4,uint *param_5,
          char *param_6,uint *param_7,uint *param_8,int param_9,char *param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  char *in_EAX;
  undefined3 uVar23;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  ushort *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  uint *puVar19;
  char *pcVar20;
  uint *puVar21;
  undefined3 uVar24;
  char *pcVar22;
  char cVar25;
  byte bVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  char *pcVar26;
  int iVar27;
  byte bVar31;
  byte bVar35;
  uint **ppuVar32;
  byte *pbVar33;
  int iVar34;
  char cVar36;
  char cVar39;
  uint **unaff_EBX;
  uint **ppuVar37;
  char cVar40;
  uint uVar38;
  uint **unaff_EBP;
  uint *puVar41;
  uint **ppuVar42;
  uint **unaff_ESI;
  uint **ppuVar43;
  uint *unaff_EDI;
  uint **ppuVar44;
  uint **ppuVar45;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar46;
  byte in_AF;
  uint *unaff_retaddr;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_24;
  uint **ppuStack_20;
  int iStack_1c;
  uint **ppuStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  uint **ppuStack_c;
  undefined4 uStack_8;
  uint *puStack_4;
  
  while( true ) {
                    /* .NET CLR Managed Code */
    uVar23 = (undefined3)((uint)in_EAX >> 8);
    bVar4 = (char)in_EAX + *(byte *)unaff_EBX;
    pbVar11 = (byte *)CONCAT31(uVar23,bVar4);
    cVar25 = (char)((uint)server >> 8);
    *(char *)unaff_EDI = (char)*unaff_EDI - cVar25;
    bVar7 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
    cVar6 = (char)connectionFormat;
    bVar8 = (byte)((uint)unaff_EBX >> 8);
    if (CARRY1(bVar7,bVar4)) break;
    uStack_8 = (uint **)((uint)uStack_8._2_2_ << 0x10);
    bVar4 = bVar4 - *(byte *)server;
    pcVar12 = (char *)CONCAT31(uVar23,bVar4);
    uVar30 = SUB42(server,0);
    out(*unaff_ESI,uVar30);
    puVar14 = (uint *)((int)unaff_EDI + -1);
    *pcVar12 = *pcVar12 + bVar4;
    ppuStack_c = (uint **)CONCAT22(ppuStack_c._2_2_,in_ES);
    uVar15 = unaff_EDI[0x12];
    *pcVar12 = *pcVar12 + bVar4;
    *(byte *)(unaff_EBX + 0x818000) = *(byte *)(unaff_EBX + 0x818000) - bVar8;
    out(unaff_ESI[1],uVar30);
    pbVar11 = (byte *)((int)unaff_EBX + -1);
    *pcVar12 = *pcVar12 + bVar4;
    uStack_14 = (uint **)CONCAT22(uStack_14._2_2_,in_ES);
    ppuStack_18 = (uint **)CONCAT22(ppuStack_18._2_2_,in_ES);
    pbVar10 = (byte *)((int)unaff_ESI + *(int *)((int)unaff_EBX + -0x71) + 8);
    *pcVar12 = *pcVar12 + bVar4;
    iStack_1c = CONCAT22(iStack_1c._2_2_,in_ES);
    uVar29 = (undefined2)((uint)pbVar11 >> 0x10);
    bVar7 = (char)((uint)pbVar11 >> 8) - pbVar10[0x6e];
    iVar17 = CONCAT22(uVar29,CONCAT11(bVar7,(char)pbVar11));
    *pcVar12 = *pcVar12 + bVar4;
    puVar21 = (uint *)(pbVar10 + (int)puVar14 * 8);
    uVar2 = *puVar21;
    uVar38 = *puVar21;
    *puVar21 = (uint)((byte *)(uVar38 + (int)server) + (0xd2 < bVar4));
    ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,in_ES);
    unaff_EBP = (uint **)0x73060000;
    cVar39 = bVar4 + 0x2e +
             (CARRY4(uVar2,(uint)server) || CARRY4(uVar38 + (int)server,(uint)(0xd2 < bVar4)));
    *(byte *)server = *(byte *)server + cVar6;
    *pbVar10 = *pbVar10;
    cVar5 = cVar39 + '~';
    pcVar12 = (char *)CONCAT31(uVar23,cVar5);
    out(*pbVar10,uVar30);
    *pcVar12 = *pcVar12 + cVar5;
    cVar39 = cVar39 + -0x80;
    pcVar12 = (char *)CONCAT31(uVar23,cVar39);
    out(*(undefined4 *)(pbVar10 + 1),uVar30);
    connectionFormat =
         (uint *)(CONCAT22((short)((uint)connectionFormat >> 0x10),
                           CONCAT11((char)((uint)connectionFormat >> 8) + (char)uVar15,cVar6)) + -1)
    ;
    *pcVar12 = *pcVar12 + cVar39;
    *(char *)puVar14 = *(char *)puVar14 - (char)((uint)in_EAX >> 8);
    *pcVar12 = *pcVar12 + cVar39;
    *pcVar12 = *pcVar12 - (char)((uint)connectionFormat >> 8);
    *pcVar12 = *pcVar12 + cVar39;
    unaff_ESI = (uint **)(pbVar10 + *(int *)(iVar17 + 9) + 5);
    *pcVar12 = *pcVar12 + cVar39;
    unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
    server = (uint *)CONCAT22((short)((uint)server >> 0x10),
                              CONCAT11(cVar25 - *(char *)(iVar17 + -0x59),(char)server));
    *pcVar12 = *pcVar12 + cVar39;
    unaff_EBX = (uint **)CONCAT22(uVar29,CONCAT11(bVar7 | *(byte *)((int)server + 0x36),
                                                  (char)pbVar11));
    in_EAX = pcVar12;
    unaff_EDI = puVar14;
    uStack_24 = in_ES;
    uStack_10 = in_ES;
  }
  *pbVar11 = *pbVar11 + bVar4;
  bVar4 = bVar4 - *pbVar11;
  pbVar11 = (byte *)CONCAT31(uVar23,bVar4);
  *(byte *)unaff_EBX = *(byte *)unaff_EBX + (char)server;
  *(byte *)server = *(byte *)server ^ bVar4;
  *(byte *)(connectionFormat + 0xac00000) = (byte)connectionFormat[0xac00000] + bVar4;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  *unaff_EBX = (uint *)((byte *)((int)*unaff_EBX + (int)pbVar11) + CARRY1(bVar7,bVar4));
  pbVar10 = pbVar11 + -0x32a1702;
  if (pbVar10 == (byte *)0x0) {
    cRam00000000 = cRam00000000 + (char)pbVar10;
    puVar21 = (uint *)CONCAT31((int3)((uint)connectionFormat >> 8),cVar6 + *(byte *)server);
    ppuStack_c = (uint **)CONCAT22(ppuStack_c._2_2_,in_ES);
    pbVar11[-0xe0c891b] = pbVar11[-0xe0c891b] + cVar25;
    pbVar10 = pbVar11 + 0x19fd76e3;
    bVar7 = *pbVar10;
    *pbVar10 = *pbVar10 - bVar8;
    piVar18 = (int *)((uint)(pbVar11 + (bVar7 < bVar8) + 0x63fd76e4) ^ 0xb);
    *(char *)((int)piVar18 + 0x73) = *(char *)((int)piVar18 + 0x73) + cVar25;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar4 = bVar8 | *(byte *)((int)server + 2);
    unaff_EBX = (uint **)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar4,(char)unaff_EBX));
    cVar6 = (char)piVar18;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      *(char *)piVar18 = (char)*piVar18 + cVar6;
      uVar23 = (undefined3)((uint)(pbVar11 + (bVar7 < bVar8) + 0x63fd76e4) >> 8);
      cVar5 = cVar6 + '\x06';
      if ((POPCOUNT(cVar5) & 1U) == 0) {
        *(char *)CONCAT31(uVar23,cVar5) = *(char *)CONCAT31(uVar23,cVar5) + cVar5;
        pbVar10 = (byte *)CONCAT31(uVar23,cVar6 + '.');
        connectionFormat = puVar21;
        uStack_10 = in_SS;
        goto code_r0x00404803;
      }
      pcVar12 = (char *)CONCAT31(uVar23,cVar5 + *(byte *)unaff_EBX);
      if (SCARRY1(cVar5,*(byte *)unaff_EBX) == (char)(cVar5 + *(byte *)unaff_EBX) < '\0') {
code_r0x004048e7:
        pcVar12 = (char *)((uint)pcVar12 | 8);
        uStack_10 = in_ES;
        goto code_r0x004048de;
      }
    }
    else {
      *(byte *)((int)server + (int)unaff_EBP) = *(byte *)((int)server + (int)unaff_EBP) + cVar6;
code_r0x0040486e:
      pcVar12 = (char *)CONCAT31((int3)((uint)piVar18 >> 8),(byte)piVar18 & *(byte *)server);
      unaff_EDI = (uint *)((int)unaff_EDI + (int)unaff_EBP[0x1d]);
    }
    *pcVar12 = *pcVar12 + (char)pcVar12;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + '*');
    ppuStack_c = (uint **)CONCAT22(ppuStack_c._2_2_,in_DS);
    bVar7 = (byte)((uint)puVar21 >> 8);
    cVar6 = (char)puVar21;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar7 + *pbVar11,cVar6));
    pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
    *(byte *)server = *(byte *)server + cVar6;
    bVar46 = (byte)pbVar11 < *pbVar11;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 - *pbVar11);
code_r0x00404880:
    unaff_ESI = (uint **)((int)unaff_ESI + (uint)bVar46 + *(int *)pbVar11);
    uStack_10 = in_ES;
    while( true ) {
      bVar4 = (byte)pbVar11;
      pbVar11[0x2c000000] = pbVar11[0x2c000000] + bVar4;
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar4;
      *server = (uint)((byte *)((int)*server + (int)pbVar11) + CARRY1(bVar7,bVar4));
      *(byte *)unaff_EBX = *(byte *)unaff_EBX - (char)server;
      *pbVar11 = *pbVar11 + bVar4;
      puVar14 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar4 | *(byte *)unaff_EBX);
code_r0x00404895:
      pcVar12 = (char *)((uint)puVar14 | *puVar14);
code_r0x00404899:
      cVar6 = (char)pcVar12;
      *(byte *)unaff_ESI = *(byte *)unaff_ESI + cVar6;
      uVar23 = (undefined3)((uint)pcVar12 >> 8);
      bVar7 = cVar6 + *(byte *)unaff_EBX;
      pcVar12 = (char *)CONCAT31(uVar23,bVar7);
      bVar4 = (byte)((uint)puVar21 >> 8);
      uVar30 = (undefined2)((uint)puVar21 >> 0x10);
      cVar25 = (char)server;
      if (SCARRY1(cVar6,*(byte *)unaff_EBX) == (char)bVar7 < '\0') {
        *(byte *)unaff_EBX = *(byte *)unaff_EBX - cVar25;
        *pcVar12 = *pcVar12 + bVar7;
        puVar21 = (uint *)CONCAT22(uVar30,CONCAT11(bVar4 | *(byte *)server,(char)puVar21));
        server = (uint *)((int)server + 1);
        pcVar12 = pcVar12 + (int)*server;
        uStack_10 = in_ES;
        if ((POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0) goto code_r0x00404921;
        goto code_r0x004048e7;
      }
      *pcVar12 = *pcVar12 + bVar7;
      bVar8 = bVar7 + 2;
      pcVar12 = (char *)CONCAT31(uVar23,bVar8);
      if (bVar7 < 0xfe) {
        *(byte *)unaff_ESI = *(byte *)unaff_ESI + bVar8;
        ppuVar43 = unaff_EBX;
        uStack_10 = in_ES;
        goto code_r0x004048f5;
      }
      *pcVar12 = *pcVar12 + bVar8;
      server = (uint *)CONCAT22((short)((uint)server >> 0x10),
                                CONCAT11((byte)((uint)server >> 8) |
                                         *(byte *)((int)unaff_EBX + -0x5b),cVar25));
      cVar6 = *pcVar12;
      *pcVar12 = *pcVar12 + bVar8;
      ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,in_ES);
      uVar29 = in_ES;
      if (SCARRY1(cVar6,bVar8) == *pcVar12 < '\0') goto code_r0x00404927;
      *pcVar12 = *pcVar12 + bVar8;
      bVar7 = bVar7 + 4;
      pbVar11 = (byte *)CONCAT31(uVar23,bVar7);
      if (0xfd < bVar8) break;
      *pbVar11 = *pbVar11 + bVar7;
      puVar21 = (uint *)CONCAT22(uVar30,CONCAT11(bVar4 | *(byte *)server,(char)puVar21));
      *(byte *)unaff_EBX = *(byte *)unaff_EBX + cVar25;
      *(byte *)unaff_ESI = *(byte *)unaff_ESI ^ bVar7;
    }
    *pbVar11 = *pbVar11 + bVar7;
    uStack_14 = (uint **)((uint)uStack_14._2_2_ << 0x10);
  }
  else {
    pbVar10[(int)unaff_EBP] = pbVar10[(int)unaff_EBP] + (char)pbVar10;
code_r0x00404803:
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    uVar24 = (undefined3)((uint)connectionFormat >> 8);
    bVar4 = (byte)connectionFormat | *(byte *)unaff_EBX;
    puVar21 = (uint *)CONCAT31(uVar24,bVar4);
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar5 = (char)unaff_EBX;
    cVar39 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + 0x6f);
    unaff_EBX = (uint **)CONCAT22(uVar30,CONCAT11(cVar39,cVar5));
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    bVar46 = 0xf9 < bVar7;
    uVar23 = (undefined3)((uint)pbVar10 >> 8);
    cVar6 = bVar7 + 6;
    pbVar11 = (byte *)CONCAT31(uVar23,cVar6);
    in_SS = uStack_10;
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00404880;
    *pbVar11 = *pbVar11 + cVar6;
    piVar18 = (int *)CONCAT31(uVar23,bVar7 + 0x2e);
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar4 = bVar4 | *(byte *)((int)server + (int)piVar18);
    puVar21 = (uint *)CONCAT31(uVar24,bVar4);
    in_SS = ppuStack_c._0_2_;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      puVar14 = (uint *)((int)piVar18 + *piVar18);
      *(byte *)server = *(byte *)server + bVar4;
      unaff_ESI = (uint **)((int)unaff_ESI + (int)((uint **)server)[0xf]);
      goto code_r0x00404895;
    }
    *(byte *)piVar18 = (char)*piVar18 + bVar7 + 0x2e;
    cVar6 = bVar7 + 0x34;
    pcVar12 = (char *)CONCAT31(uVar23,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      pcVar12[0x28] = pcVar12[0x28] + cVar25;
      goto code_r0x00404899;
    }
    *pcVar12 = *pcVar12 + cVar6;
    piVar18 = (int *)CONCAT31(uVar23,bVar7 + 0x5c);
    *piVar18 = *piVar18 + (int)piVar18;
    cVar25 = (bVar4 | bRam07022c07) - (char)*piVar18;
    puVar21 = (uint *)CONCAT31(uVar24,cVar25);
    pcVar12 = (char *)CONCAT31(uVar23,bVar7 + 0x5a);
    bVar4 = (byte)((uint)connectionFormat >> 8);
    *(byte *)server = *(byte *)server | bVar4;
    *(uint *)((int)server + (int)pcVar12) = *(uint *)((int)server + (int)pcVar12) | (uint)unaff_EBP;
    *server = (uint)((uint)*server | (uint)unaff_EBP);
    cVar39 = cVar39 + *(byte *)((int)unaff_EBX + 0x72);
    unaff_EBX = (uint **)CONCAT22(uVar30,CONCAT11(cVar39,cVar5));
    *pcVar12 = *pcVar12 + bVar7 + 0x5a;
    cVar6 = bVar7 + 0x60;
    pcVar12 = (char *)CONCAT31(uVar23,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *pcVar12 = *pcVar12 + cVar6;
      piVar18 = (int *)CONCAT31(uVar23,bVar7 + 0x88);
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_DS);
      puVar21 = (uint *)CONCAT22((short)((uint)connectionFormat >> 0x10),
                                 CONCAT11((bVar4 | *(byte *)server) + (char)*piVar18,cVar25));
      *(char *)piVar18 = (char)*piVar18;
      cVar5 = cVar5 - *(byte *)unaff_ESI;
      cVar39 = cVar39 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar5) + 0x73);
      *(byte *)piVar18 = (char)*piVar18 + bVar7 + 0x88;
      bVar7 = bVar7 + 0xb2 & *(byte *)server;
      unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x73));
      *(char *)CONCAT31(uVar23,bVar7) = *(char *)CONCAT31(uVar23,bVar7) + bVar7;
      pcVar12 = (char *)CONCAT31(uVar23,bVar7 + 0x2a);
      unaff_EBX = (uint **)CONCAT22(uVar30,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar39,cVar5)) + 0x74),cVar5));
      *pcVar12 = *pcVar12 + bVar7 + 0x2a;
      piVar18 = (int *)CONCAT31(uVar23,bVar7 + 0x54);
      in_SS = (undefined2)uStack_14;
      goto code_r0x0040486e;
    }
    pbVar11 = (byte *)*(undefined6 *)pcVar12;
    *(byte *)unaff_ESI = *(byte *)unaff_ESI + (char)*(undefined6 *)pcVar12;
  }
  uVar23 = (undefined3)((uint)pbVar11 >> 8);
  bVar7 = (byte)pbVar11 | *(byte *)unaff_ESI;
  pcVar12 = (char *)CONCAT31(uVar23,bVar7);
  *pcVar12 = *pcVar12 + bVar7;
  *unaff_EBX = (uint *)((int)*unaff_EBX + (int)puVar21);
  unaff_EBX = (uint **)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                CONCAT11((char)((uint)unaff_EBX >> 8) +
                                         *(byte *)((int)unaff_EBX + 0x75),(char)unaff_EBX));
  *pcVar12 = *pcVar12 + bVar7;
  pcVar12 = (char *)CONCAT31(uVar23,bVar7 + 0x6f);
  *pcVar12 = *pcVar12 + bVar7 + 0x6f;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)server = *(byte *)server + (char)puVar21;
  uRam00c16f07 = SUB41(pcVar12,0);
code_r0x004048de:
  cVar6 = (char)pcVar12;
  *(byte *)unaff_ESI = *(byte *)unaff_ESI + cVar6;
  *pcVar12 = *pcVar12 + cVar6;
  *(byte **)(pcVar12 + (int)puVar21) = (byte *)(*(int *)(pcVar12 + (int)puVar21) + (int)puVar21);
  uStack_14 = (uint **)CONCAT22(uStack_14._2_2_,uStack_10);
  bVar7 = *(byte *)((int)unaff_EBX + 0x75);
  *pcVar12 = *pcVar12 + cVar6;
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6 + 'o');
  unaff_ESI = (uint **)((int)unaff_ESI + 1);
  *pcVar12 = *pcVar12 + cVar6 + 'o';
  ppuStack_18 = (uint **)CONCAT22(ppuStack_18._2_2_,uStack_10);
  ppuVar43 = (uint **)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + bVar7,(char)unaff_EBX));
  unaff_EBP = unaff_EBX;
  in_SS = uStack_10;
code_r0x004048f5:
  unaff_EBX = ppuVar43;
  pcVar12 = (char *)((int)((uint)pcVar12 & 0x7e26062d) - *(int *)((uint)pcVar12 & 0x7e26062d));
  *(byte *)server = *(byte *)server + (char)puVar21;
  do {
    uRam00c36f08 = SUB41(pcVar12,0);
    while( true ) {
      bVar7 = *(byte *)unaff_ESI;
      cVar6 = (char)pcVar12;
      *(byte *)unaff_ESI = *(byte *)unaff_ESI + cVar6;
      iStack_1c = CONCAT22(iStack_1c._2_2_,uStack_10);
      if (SCARRY1(bVar7,cVar6) == (char)*(byte *)unaff_ESI < '\0') {
        pcVar12[(int)unaff_EBP] = pcVar12[(int)unaff_EBP] + cVar6;
        goto code_r0x00404982;
      }
      *pcVar12 = *pcVar12 + cVar6;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6 + '*');
      ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,in_DS);
      bVar7 = (byte)((uint)puVar21 >> 8);
      cVar6 = (char)puVar21;
      bVar4 = bVar7 + *pbVar11;
      pbVar11 = pbVar11 + (uint)CARRY1(bVar7,*pbVar11) + *(int *)pbVar11;
      *(byte *)server = *(byte *)server + cVar6;
      cVar25 = (char)unaff_EBX - *(byte *)unaff_ESI;
      bVar7 = *pbVar11;
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar4 + *pbVar11,cVar6));
      iVar17 = *(int *)pbVar11;
      *(byte *)server = *(byte *)server + cVar6;
      pcVar12 = (char *)CONCAT31((int3)((uint)(pbVar11 + (uint)CARRY1(bVar4,bVar7) + iVar17) >> 8),
                                 (char)(pbVar11 + (uint)CARRY1(bVar4,bVar7) + iVar17) -
                                 *(byte *)((int)server + 3));
      unaff_EBX = (uint **)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                    CONCAT11((char)((uint)unaff_EBX >> 8) +
                                             *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar25)
                                                      + -0x3a),cVar25));
code_r0x00404921:
      bVar7 = (byte)pcVar12;
      *pcVar12 = *pcVar12 + bVar7;
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7 + 0x6f);
      *(byte *)puVar21 = ((byte)*puVar21 - (bVar7 + 0x6f)) - (0x90 < bVar7);
      uVar29 = uStack_10;
code_r0x00404927:
      uStack_10 = uVar29;
      *(byte *)server = *(byte *)server + (char)puVar21;
      ppuStack_18 = (uint **)CONCAT22(ppuStack_18._2_2_,in_SS);
      *(byte *)puVar21 = (byte)*puVar21 + 1;
      cVar6 = (char)((uint)puVar21 >> 8) - *(byte *)((int)unaff_ESI + 2);
      puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(cVar6,(char)puVar21));
      if ((POPCOUNT(cVar6) & 1U) == 0) break;
      pcVar12 = pcVar12 + -0x1b7e2606;
      *pcVar12 = *pcVar12 + (char)pcVar12;
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar12 >> 8) |
                                          *(byte *)((uint **)server + 0x30dbc2),(char)pcVar12));
    }
code_r0x00404931:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    cVar6 = (char)pcVar12 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6);
    ppuVar43 = unaff_ESI;
  } while ((POPCOUNT(cVar6) & 1U) != 0);
  do {
    bVar7 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar7;
    uVar23 = (undefined3)((uint)pcVar12 >> 8);
    piVar18 = (int *)CONCAT31(uVar23,bVar7 + 0x6f);
    *puVar21 = (*puVar21 - (int)piVar18) - (uint)(0x90 < bVar7);
    *(byte *)server = *(byte *)server + (char)puVar21;
    iVar17 = *(int *)((int)unaff_EDI + 0x1a);
    *piVar18 = *piVar18 + (int)piVar18;
    server = (uint *)CONCAT31((int3)((uint)server >> 8),(byte)server | *(byte *)ppuVar43);
    *(byte *)puVar21 = (byte)*puVar21 + 1;
    bVar7 = (bVar7 + 0x6f) - (char)*piVar18;
    pbVar11 = (byte *)CONCAT31(uVar23,bVar7);
    *pbVar11 = *pbVar11 + bVar7;
    ppuVar43 = (uint **)((int)ppuVar43 + *(int *)pbVar11);
    cVar6 = bVar7 + *pbVar11;
    puVar13 = (ushort *)CONCAT31(uVar23,cVar6);
    *puVar13 = *puVar13 + (ushort)CARRY1(bVar7,*pbVar11) * (((ushort)puVar13 & 3) - (*puVar13 & 3));
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    unaff_EDI = (uint *)((int)unaff_EDI + (int)unaff_EBX[0x1c]);
    unaff_EBP = (uint **)((int)unaff_EBP + iVar17);
code_r0x0040495b:
    cVar6 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    uVar23 = (undefined3)((uint)puVar13 >> 8);
    cVar25 = cVar6 + '\x02';
    pcVar12 = (char *)CONCAT31(uVar23,cVar25);
    if ((POPCOUNT(cVar25) & 1U) != 0) {
      *server = (uint)((int)*server + (int)unaff_EBP);
      unaff_ESI = (uint **)((int)ppuVar43 + 1);
      out(*(byte *)ppuVar43,(short)server);
      unaff_EBX = (uint **)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                    CONCAT11((char)((uint)unaff_EBX >> 8) +
                                             *(byte *)((int)unaff_EBX + -0x3b),(char)unaff_EBX));
      goto code_r0x00404931;
    }
    *pcVar12 = *pcVar12 + cVar25;
    pbVar11 = (byte *)(CONCAT31(uVar23,cVar6 + '}') + (int)unaff_EBP);
    *pbVar11 = *pbVar11 + cVar6 + '}';
    *param_10 = *param_10 + (char)param_10;
    puVar21 = (uint *)CONCAT22((short)((uint)param_9 >> 0x10),
                               CONCAT11((byte)((uint)param_9 >> 8) | *(byte *)(param_9 * 3),
                                        (char)param_9));
    unaff_EDI = (uint *)((int)param_3 + *(int *)((int)param_7 + 0x6f));
    pcVar12 = param_10;
    server = param_8;
    unaff_EBX = (uint **)param_7;
    unaff_EBP = (uint **)param_5;
    ppuVar43 = (uint **)param_4;
    while( true ) {
      cVar6 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar6;
      uVar23 = (undefined3)((uint)pcVar12 >> 8);
      cVar25 = cVar6 + '\x02';
      pcVar12 = (char *)CONCAT31(uVar23,cVar25);
      if ((POPCOUNT(cVar25) & 1U) != 0) break;
      *pcVar12 = *pcVar12 + cVar25;
      pcVar12 = (char *)CONCAT31(uVar23,cVar6 + '}');
      out(*ppuVar43,(short)server);
      *pcVar12 = *pcVar12 + cVar6 + '}';
code_r0x00404982:
      uStack_8 = (uint **)CONCAT22(uStack_8._2_2_,in_ES);
      *(byte *)unaff_retaddr = (byte)*unaff_retaddr + (char)unaff_retaddr;
      puVar21 = (uint *)CONCAT22((short)((uint)puStack_4 >> 0x10),
                                 CONCAT11((byte)((uint)puStack_4 >> 8) |
                                          *(byte *)((int)puStack_4 + (int)ppuStack_18),
                                          (char)puStack_4));
      unaff_EDI = (uint *)(iStack_1c + *(int *)((int)ppuStack_c + 0x71));
      puVar14 = unaff_retaddr;
      server = (uint *)uStack_8;
      unaff_EBX = ppuStack_c;
      ppuVar43 = ppuStack_18;
      while( true ) {
        cVar6 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        uVar23 = (undefined3)((uint)puVar14 >> 8);
        cVar25 = cVar6 + '\x02';
        puVar13 = (ushort *)CONCAT31(uVar23,cVar25);
        unaff_EBP = uStack_14;
        if ((POPCOUNT(cVar25) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar13 = (char)*puVar13 + cVar25;
        bVar4 = cVar6 + 0x7d;
        iVar17 = CONCAT31(uVar23,bVar4);
        pbVar11 = (byte *)(iVar17 + (int)uStack_14);
        bVar7 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar4;
        uVar38 = *puVar21;
        *(byte *)server = *(byte *)server + (char)puVar21;
        pcVar12 = (char *)(((iVar17 - uVar38) - (uint)CARRY1(bVar7,bVar4)) + -0x727b0317);
        cVar6 = (char)pcVar12;
        *pcVar12 = *pcVar12 + cVar6;
        uVar23 = (undefined3)((uint)pcVar12 >> 8);
        cVar25 = cVar6 + '\x02';
        pcVar12 = (char *)CONCAT31(uVar23,cVar25);
        if ((POPCOUNT(cVar25) & 1U) != 0) break;
        *pcVar12 = *pcVar12 + cVar25;
        bVar4 = cVar6 + 0x7d;
        iVar17 = CONCAT31(uVar23,bVar4);
        pbVar11 = (byte *)(iVar17 + (int)uStack_14);
        bVar7 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar4;
        puVar14 = (uint *)((iVar17 - *puVar21) - (uint)CARRY1(bVar7,bVar4));
        ppuVar42 = (uint **)server;
code_r0x004049b4:
        *(byte *)ppuVar42 = *(byte *)ppuVar42 + (char)puVar21;
        server = (uint *)CONCAT31((int3)((uint)ppuVar42 >> 8),
                                  ((char)ppuVar42 - (char)*unaff_EDI) - *(byte *)ppuVar43);
        bVar4 = *(byte *)((int)ppuVar43 + 0x72);
        *puVar14 = *puVar14 & (uint)puVar21;
        pbVar11 = (byte *)((int)puVar14 + 2);
        *pbVar11 = *pbVar11 + (char)((uint)ppuVar42 >> 8);
        bVar7 = *pbVar11;
        ppuVar32 = (uint **)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - bVar4);
        ppuVar42 = ppuVar43;
        while (unaff_EBX = ppuVar32, ppuVar43 = ppuVar42, (POPCOUNT(bVar7) & 1U) == 0) {
          cVar6 = (char)puVar14;
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          uVar23 = (undefined3)((uint)puVar14 >> 8);
          cVar25 = cVar6 + '\x03';
          pbVar11 = (byte *)CONCAT31(uVar23,cVar25);
          ppuVar43 = ppuVar42 + 1;
          out(*ppuVar42,(short)server);
          in_SS = param_3._0_2_;
          *pbVar11 = *pbVar11 + cVar25;
          cVar5 = (char)puVar21;
          puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                     CONCAT11((byte)((uint)puVar21 >> 8) | *pbVar11,cVar5));
          *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
          *(byte *)server = *(byte *)server + cVar5;
          cVar5 = (char)ppuVar32 - *(byte *)((int)ppuVar42 + 6);
          unaff_EBX = (uint **)CONCAT31((int3)((uint)ppuVar32 >> 8),cVar5);
          if ((POPCOUNT(cVar5) & 1U) != 0) {
            pcVar12 = (char *)((int)unaff_EDI + (int)uStack_14 * 2);
            *pcVar12 = *pcVar12 + cVar25;
            ppuVar42 = uStack_14;
            goto code_r0x00404a51;
          }
          *pbVar11 = *pbVar11 + cVar25;
          puVar14 = (uint *)CONCAT31(uVar23,cVar6 + 'r');
          *(byte *)puVar14 = (byte)*puVar14;
          param_3 = (uint **)CONCAT22(param_3._2_2_,uStack_10);
          do {
            unaff_EDI = (uint *)((int)unaff_EDI + (int)unaff_EBX[0x1c]);
            bVar7 = (byte)puVar14;
            *(byte *)puVar14 = (byte)*puVar14 + bVar7;
            uVar23 = (undefined3)((uint)puVar14 >> 8);
            bVar7 = (bVar7 + 0x6e) - (0x90 < bVar7);
            puVar14 = (uint *)CONCAT31(uVar23,bVar7);
            cVar6 = (char)puVar21;
            *(byte *)server = *(byte *)server + cVar6;
            bVar4 = (char)((uint)puVar21 >> 8) - *(byte *)((int)ppuVar43 + 2);
            puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar4,cVar6));
            ppuVar42 = (uint **)server;
            if ((POPCOUNT(bVar4) & 1U) != 0) goto code_r0x004049b4;
            *(byte *)puVar14 = (byte)*puVar14 + bVar7;
            bVar8 = bVar7 + 2;
            puVar14 = (uint *)CONCAT31(uVar23,bVar8);
            ppuVar45 = uStack_14;
            if ((POPCOUNT(bVar8) & 1U) == 0) goto code_r0x004049f5;
            ppuVar43 = param_3;
          } while (0xfd < bVar7);
          *(byte *)puVar14 = (byte)*puVar14 | bVar8;
          ppuVar32 = unaff_EBX;
          ppuVar42 = param_3;
          bVar7 = (byte)*puVar14;
        }
      }
    }
    *(byte *)server = *(byte *)server + (char)puVar21;
    param_3 = (uint **)CONCAT22(param_3._2_2_,in_SS);
  } while( true );
code_r0x004049f5:
  do {
    bVar7 = (byte)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar7;
    uVar23 = (undefined3)((uint)puVar14 >> 8);
    bVar8 = bVar7 + 0x6f;
    pbVar11 = (byte *)CONCAT31(uVar23,bVar8);
    *puVar21 = (*puVar21 - (int)pbVar11) - (uint)(0x90 < bVar7);
    *(byte *)server = *(byte *)server + cVar6;
    puVar41 = (uint *)((int)ppuVar45 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar24 = (undefined3)((uint)server >> 8);
    bVar7 = (byte)server | *(byte *)ppuVar43;
    server = (uint *)CONCAT31(uVar24,bVar7);
    *(byte *)puVar21 = (byte)*puVar21 + 1;
    cVar25 = bVar8 - *pbVar11;
    ppuVar43 = (uint **)((int)ppuVar43 +
                        (-(uint)(bVar8 < *pbVar11) - *(int *)CONCAT31(uVar23,cVar25)));
    uVar15 = CONCAT31(uVar23,cVar25 + *(char *)CONCAT31(uVar23,cVar25));
    bVar46 = CARRY1(bRam14110000,bVar4);
    bRam14110000 = bRam14110000 + bVar4;
    puVar14 = (uint *)((int)unaff_EBX + (int)ppuVar43 * 2);
    uVar38 = *puVar14;
    uVar2 = uVar15 + *puVar14;
    puVar16 = (undefined4 *)(uVar2 + bVar46);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar16 = uVar1;
    uVar38 = (uint)(CARRY4(uVar15,uVar38) || CARRY4(uVar2,(uint)bVar46));
    puVar14 = (uint *)((int)puVar16 + uRam7d020511 + uVar38);
    param_3 = &puStack_4;
    ppuVar37 = &puStack_4;
    ppuVar42 = &puStack_4;
    ppuVar45 = &puStack_4;
    puStack_4 = puVar41;
    cVar25 = '\x03';
    do {
      puVar41 = puVar41 + -1;
      ppuVar37 = ppuVar37 + -1;
      *ppuVar37 = (uint *)*puVar41;
      cVar25 = cVar25 + -1;
    } while ('\0' < cVar25);
    pbRam00c82802 =
         (byte *)((int)puVar14 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar16,uRam7d020511) ||
                      CARRY4((int)puVar16 + uRam7d020511,uVar38))));
    bVar8 = *(byte *)ppuVar43;
    cVar25 = (char)puVar14;
    *(byte *)ppuVar43 = *(byte *)ppuVar43 + cVar25;
  } while (SCARRY1(bVar8,cVar25) == (char)*(byte *)ppuVar43 < '\0');
  *(byte *)puVar14 = (byte)*puVar14 + cVar25;
  iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),cVar25 + '\x11') + 0xc57b;
  bVar4 = (byte)iVar17;
  *server = (uint)((uint)*server ^ (uint)unaff_EBX);
  server = (uint *)CONCAT31(uVar24,bVar7 + (byte)*puVar21);
  iVar17 = (CONCAT31((int3)((uint)iVar17 >> 8),bVar4 + 0x6f) - (uint)(0x90 < bVar4)) + -0x18093a86;
  cVar6 = (char)iVar17;
  uVar23 = (undefined3)((uint)iVar17 >> 8);
  cVar25 = cVar6 + '\x02';
  pbVar11 = (byte *)CONCAT31(uVar23,cVar25);
  if ((POPCOUNT(cVar25) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar11 = *pbVar11 + cVar25;
  pbVar11 = (byte *)CONCAT31(uVar23,cVar6 + 'q');
  ppuVar42 = &puStack_4;
  param_3 = &puStack_4;
code_r0x00404a51:
  pbVar10 = pbVar11 + 1;
  cVar6 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar6;
  unaff_EBX = (uint **)CONCAT22((short)((uint)ppuVar32 >> 0x10),
                                CONCAT11((char)((uint)ppuVar32 >> 8) - cVar6,cVar5));
  *pbVar10 = *pbVar10 + cVar6;
  server = (uint *)CONCAT31((int3)((uint)server >> 8),(char)server - (byte)*puVar21);
  pbVar11 = pbVar11 + 0x757b03;
  pcVar12 = (char *)((int)unaff_EDI + (int)ppuVar42 * 2);
  cVar6 = (char)pbVar11;
  *pcVar12 = *pcVar12 + cVar6;
  *pbVar11 = *pbVar11 + cVar6;
  *(byte *)ppuVar43 = *(byte *)ppuVar43 - (char)((uint)pbVar11 >> 8);
  *pbVar11 = *pbVar11 + cVar6;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar42 + -0x3a));
  *pbVar11 = *pbVar11 + cVar6;
  pbVar11 = (byte *)(CONCAT31((int3)((uint)pbVar11 >> 8),cVar6 + '\x11') + 0x757b02);
  pcVar12 = (char *)((int)unaff_EDI + (int)ppuVar42 * 2);
  bVar4 = (byte)pbVar11;
  *pcVar12 = *pcVar12 + bVar4;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,uStack_10);
  pbRam011006fe = pbVar11 + (int)(pbRam011006fe + CARRY1(bVar7,bVar4));
  bVar7 = *(byte *)ppuVar43;
  *(byte *)ppuVar43 = *(byte *)ppuVar43 + bVar4;
  if (!CARRY1(bVar7,bVar4)) goto code_r0x00404add;
  do {
    bVar7 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar7;
    bVar8 = (byte)puVar21;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11((byte)((uint)puVar21 >> 8) | *pbVar11,bVar8));
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar23 = (undefined3)((uint)pbVar11 >> 8);
    bVar7 = bVar7 + in_AF * '\x06';
    cVar6 = bVar7 + (0x90 < (bVar7 & 0xf0) | in_AF * (0xf9 < bVar7)) * '`';
    pcVar12 = (char *)CONCAT31(uVar23,cVar6);
    *pcVar12 = *pcVar12 + cVar6;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar42 + -0x39));
    *pcVar12 = *pcVar12 + cVar6;
    iVar17 = CONCAT31(uVar23,cVar6 + '\x11') + 0xc57b;
    iVar17 = CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x11') + 0xc67b;
    bVar7 = (byte)iVar17;
    bVar4 = bVar7 + 0x6f;
    pbVar11 = (byte *)CONCAT31((int3)((uint)iVar17 >> 8),bVar4);
    *puVar21 = (*puVar21 - (int)pbVar11) - (uint)(0x90 < bVar7);
    bVar7 = *(byte *)server;
    *(byte *)server = *(byte *)server + bVar8;
    pbRam011106fe = pbVar11 + (int)(pbRam011106fe + CARRY1(bVar7,bVar8));
    bVar7 = *(byte *)ppuVar43;
    *(byte *)ppuVar43 = *(byte *)ppuVar43 + bVar4;
    if (!CARRY1(bVar7,bVar4)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    bVar4 = (byte)puVar21;
    bVar7 = (byte)((uint)puVar21 >> 8) | *pbVar11;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar7,bVar4));
    *pbVar11 = *pbVar11 - (char)pbVar11;
    *(byte *)unaff_EBX = *(byte *)unaff_EBX + bVar7;
    out(*ppuVar43,(short)server);
    *puVar21 = *puVar21 & (uint)pbVar11;
    bVar7 = *(byte *)server;
    *(byte *)server = *(byte *)server + bVar4;
    pbVar11 = pbVar11 + (int)ppuVar43[1] + CARRY1(bVar7,bVar4);
    *pbVar11 = *pbVar11 + (char)pbVar11;
    *(byte *)puVar21 = (byte)*puVar21 + (char)server;
    ppuVar43 = ppuVar43 + 1;
    while( true ) {
      out(*ppuVar43,(short)server);
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 & (byte)*puVar21);
      *(byte *)server = *(byte *)server + (char)puVar21;
      server = (uint *)CONCAT22((short)((uint)server >> 0x10),
                                CONCAT11((byte)((uint)server >> 8) | *(byte *)(unaff_EBX + 5),
                                         (char)server));
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      ppuVar43 = ppuVar43 + 1;
code_r0x00404ad4:
      ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,uStack_10);
      pbVar11 = (byte *)((uint)pbVar11 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar11;
code_r0x00404add:
      bVar7 = (byte)pbVar11;
      uVar23 = (undefined3)((uint)pbVar11 >> 8);
      cVar6 = bVar7 + 8;
      pbVar11 = (byte *)CONCAT31(uVar23,cVar6);
      if (SCARRY1(bVar7,'\b') == cVar6 < '\0') break;
      *pbVar11 = *pbVar11 + cVar6;
      cVar6 = bVar7 + 10;
      piVar18 = (int *)CONCAT31(uVar23,cVar6);
      if ((POPCOUNT(cVar6) & 1U) != 0) {
        *piVar18 = (int)(*piVar18 + (int)piVar18);
        goto code_r0x00404b18;
      }
      *(char *)piVar18 = (char)*piVar18 + cVar6;
      puVar14 = (uint *)CONCAT31(uVar23,bVar7 + 0x7c);
      *puVar14 = *puVar14 & (uint)puVar21;
      *(char *)((int)puVar14 + 0x11) = *(char *)((int)puVar14 + 0x11) + (char)((uint)server >> 8);
      cVar6 = (char)((int)puVar14 + 0xc67b);
      uVar23 = (undefined3)((uint)((int)puVar14 + 0xc67b) >> 8);
      bVar7 = cVar6 + 8;
      pbVar11 = (byte *)CONCAT31(uVar23,bVar7);
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pbVar11 = *pbVar11 + bVar7;
        cRam02060000 = cVar6 + 'w';
        puVar14 = (uint *)CONCAT31(uVar23,cRam02060000);
        *(byte *)puVar14 = (byte)*puVar14 + cRam02060000;
        cVar6 = (char)puVar21;
        puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                   CONCAT11((byte)((uint)puVar21 >> 8) | (byte)*puVar14,cVar6));
        *puVar14 = *puVar14 - (int)puVar14;
        *(byte *)server = *(byte *)server + cVar6;
        ppuVar32 = ppuVar43 + 1;
        out(*ppuVar43,(short)server);
        ppuVar43 = ppuVar32;
        if ((POPCOUNT(*(byte *)server) & 1U) == 0) goto code_r0x00404b0f;
        pcVar12 = (char *)((uint)puVar14 | *puVar14);
        goto code_r0x00404b89;
      }
      bVar4 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar7;
      *ppuVar43 = (uint *)((byte *)((int)*ppuVar43 + (int)pbVar11) + CARRY1(bVar4,bVar7));
    }
    *(byte *)ppuVar43 = *(byte *)ppuVar43 + 1;
    *puVar21 = (uint)(pbVar11 + (uint)(0xf7 < bVar7) + *puVar21);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'r');
    piVar18 = (int *)((uint)puVar14 | *puVar14);
    server = (uint *)ppuStack_20;
code_r0x00404b18:
    bRam11060000 = (byte)piVar18;
    iVar17 = CONCAT31((int3)((uint)((int)piVar18 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar18 + 0xc57b) + '\x11') + 0xc77b;
    bVar7 = (byte)iVar17;
    iVar17 = CONCAT31((int3)((uint)iVar17 >> 8),bVar7 + 0x6f);
    *puVar21 = (*puVar21 - iVar17) - (uint)(0x90 < bVar7);
    cVar6 = (char)puVar21;
    *(byte *)server = *(byte *)server + cVar6;
    bVar4 = (byte)((uint)unaff_EBX >> 8);
    bVar35 = (byte)((uint)server >> 8) | bVar4;
    pcVar20 = (char *)CONCAT22((short)((uint)server >> 0x10),CONCAT11(bVar35,(byte)server));
    piVar18 = (int *)(iVar17 + 0x73060001);
    *(byte *)puVar21 = (byte)*puVar21 & (byte)piVar18;
    *pcVar20 = *pcVar20 + cVar6;
    bVar8 = (byte)((uint)puVar21 >> 8);
    *(byte *)piVar18 = *(char *)piVar18 - bVar8;
    *(byte *)piVar18 = *(char *)piVar18 + (byte)piVar18;
    iVar17 = *piVar18;
    *piVar18 = *piVar18 - (int)piVar18;
    *(byte *)unaff_EBX = *(byte *)unaff_EBX + bVar8;
    pcVar12 = (char *)((uint)piVar18 | *unaff_EDI);
    *pcVar20 = *pcVar20 - bVar8;
    bVar7 = (byte)pcVar12;
    *pcVar12 = *pcVar12 + bVar7;
    ppuVar42 = (uint **)(((int)ppuVar42 - iVar17) - *(int *)(pcVar12 + ((int)ppuVar42 - iVar17)));
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar28 = (byte)unaff_EBX;
    cVar25 = bVar4 + *(byte *)((int)unaff_EBX + 0x76);
    pbVar11 = (byte *)CONCAT22(uVar30,CONCAT11(cVar25,bVar28));
    *pcVar12 = *pcVar12 + bVar7;
    uVar23 = (undefined3)((uint)pcVar12 >> 8);
    uVar15 = CONCAT31(uVar23,bVar7 + 7);
    puVar14 = (uint *)((int)ppuVar42 + -0x1faeef1);
    uVar38 = *puVar14;
    uVar2 = *puVar14 + uVar15;
    *puVar14 = uVar2 + (0xf8 < bVar7);
    ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,uStack_10);
    ppuVar45 = ppuStack_20;
    bVar4 = bVar7 + 7 + (byte)*puVar21 +
            (CARRY4(uVar38,uVar15) || CARRY4(uVar2,(uint)(0xf8 < bVar7)));
    puVar14 = (uint *)CONCAT31(uVar23,bVar4);
    bVar7 = *(byte *)ppuVar43;
    *(byte *)ppuVar43 = *(byte *)ppuVar43 + bVar4;
    if (CARRY1(bVar7,bVar4)) break;
    *(byte *)puVar14 = (byte)*puVar14 + bVar4;
    unaff_EBX = (uint **)CONCAT22(uVar30,CONCAT11(cVar25 + pbVar11[0x76],bVar28));
    uStack_24 = uStack_10;
  }
  *(byte *)puVar14 = (byte)*puVar14 + bVar4;
  uVar24 = (undefined3)((uint)pcVar20 >> 8);
  bVar31 = (byte)server | *pbVar11;
  server = (uint *)CONCAT31(uVar24,bVar31);
  pcRam2b060000 = (char *)CONCAT31(uVar23,bVar4 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar4 + 0x39)) - (0xd7 < (byte)(bVar4 + 0x11));
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar8;
  ppuVar32 = ppuVar43 + 1;
  out(*ppuVar43,(short)server);
  bVar7 = (bVar4 + 0x37) - CARRY1(bVar7,bVar8);
  piVar18 = (int *)CONCAT31(uVar23,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar7;
    iVar17 = CONCAT31(uVar23,bVar7 + 0x11) + 0xc77b;
    pcVar12 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + 'r');
    pcVar12[0x28] = pcVar12[0x28] + bVar35;
code_r0x00404b89:
    cVar6 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar6;
    *pcVar12 = *pcVar12 + cVar6;
    *pcVar12 = *pcVar12 + cVar6;
    puVar13 = (ushort *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6 + 'r');
    uVar9 = (ushort)puVar13 | *puVar13;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*ppuVar32,(short)server);
    *pcVar12 = *pcVar12 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar18 = (char)*piVar18 + bVar7;
  puVar14 = (uint *)((int)ppuVar42 - *(int *)((int)unaff_EDI + 0x21));
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pcVar12 = (char *)CONCAT31(uVar24,bVar31 | *pbVar11);
  ppuVar42 = ppuVar43 + 2;
  out(*ppuVar32,(short)pcVar12);
  uVar38 = *puVar21;
  *pcVar12 = *pcVar12 + cVar6;
  uVar38 = CONCAT31(uVar23,bVar7 & (byte)uVar38) | 0x767b02;
  *(byte *)((int)puVar21 + (int)pcVar12) = *(byte *)((int)puVar21 + (int)pcVar12) + (char)uVar38;
  iVar17 = uVar38 + 0xc67b;
  cVar39 = (char)iVar17;
  uVar23 = (undefined3)((uint)iVar17 >> 8);
  cVar5 = cVar39 + 'r';
  pcVar12 = (char *)CONCAT31(uVar23,cVar5);
  pcVar12[0x28] = pcVar12[0x28] + bVar35;
  *pcVar12 = *pcVar12 + cVar5;
  uVar29 = (undefined2)((uint)puVar21 >> 0x10);
  bVar8 = bVar8 | *(byte *)((int)ppuStack_20 + -0x5e);
  puVar41 = (uint *)CONCAT22(uVar29,CONCAT11(bVar8,cVar6));
  *pcVar12 = *pcVar12 + cVar5;
  ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,uStack_24);
  ppuVar37 = (uint **)CONCAT22(uVar30,CONCAT11(cVar25 + pbVar11[0x76],bVar28));
  *pcVar12 = *pcVar12 + cVar5;
  puVar21 = (uint *)CONCAT31(uVar23,cVar39 + -0x1c);
  pcVar12 = (char *)((uint)puVar21 | *puVar21);
  bVar46 = (POPCOUNT((uint)pcVar12 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar12;
  ppuVar32 = ppuStack_20;
  puVar21 = puVar14;
  ppuVar44 = ppuVar45;
  uVar30 = uStack_24;
  if (!bVar46) goto code_r0x00404ca8;
  *pcVar12 = *pcVar12 + cRam02060000;
  puVar21 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cRam02060000 + 'r');
  *puVar21 = *puVar21 & (uint)puVar41;
  *(char *)((int)puVar21 + 0x11) = *(char *)((int)puVar21 + 0x11) + (char)((ushort)uStack_24 >> 8);
  iVar17 = (int)puVar21 + 0xc77b;
  uVar23 = (undefined3)((uint)iVar17 >> 8);
  cRam02060000 = (char)iVar17 + '\t';
  pbVar11 = (byte *)CONCAT31(uVar23,cRam02060000);
  out(*ppuVar42,uStack_24);
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar21 = (uint *)CONCAT22(uVar29,CONCAT11(bVar8 | *pbVar11,cVar6));
  *(int *)pbVar11 = *(int *)pbVar11 - (int)pbVar11;
  *(byte *)ppuStack_20 = *(byte *)ppuStack_20 + cVar6;
  out(ppuVar43[3],uStack_24);
  ppuVar42 = ppuVar43 + 4;
  uVar30 = uStack_24;
  if ((POPCOUNT(*(byte *)ppuStack_20) & 1U) != 0) goto code_r0x00404cca;
  *pbVar11 = *pbVar11 + cRam02060000;
  puVar13 = (ushort *)CONCAT31(uVar23,(char)iVar17 + '{');
  uVar9 = (ushort)puVar13 | *puVar13;
  pcVar12 = (char *)CONCAT22((short)((uint)iVar17 >> 0x10),uVar9);
  bVar7 = (byte)uVar9;
  out(ppuVar43[4],uStack_24);
  pbVar11 = (byte *)((int)puVar21 + 1);
  bRam11060000 = bVar7;
  *pcVar12 = *pcVar12 + bVar7;
  puVar41 = (uint *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                             CONCAT11((byte)((uint)pbVar11 >> 8) | bRam110cde91,(char)pbVar11));
  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7 - 7);
  *ppuVar45 = (uint *)((char *)((int)*ppuVar45 + (int)pcVar12) + (bVar7 < 7));
  ppuVar42 = ppuVar43 + 6;
  out(ppuVar43[5],uStack_24);
  ppuVar32 = (uint **)((int)ppuStack_20 + 1);
  *pcVar12 = *pcVar12 + (bVar7 - 7);
  ppuVar37 = (uint **)CONCAT31((int3)((uint)ppuVar37 >> 8),bVar28 | (byte)(uVar9 >> 8));
  do {
    bVar7 = (char)pcVar12 - *pcVar12;
    uVar38 = *puVar41;
    *(byte *)puVar41 = (byte)*puVar41 + bVar7;
    cVar6 = bVar7 - CARRY1((byte)uVar38,bVar7);
    *(byte *)ppuVar32 = (byte)*ppuVar32 + cVar6;
    cVar25 = (char)((uint)puVar41 >> 8);
    *(byte *)(ppuVar45 + 0x673b40) = *(byte *)(ppuVar45 + 0x673b40) + cVar25;
    puVar19 = (uint *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar6);
    *(byte *)puVar19 = (byte)*puVar19 + cVar6;
    *(byte *)ppuVar32 = (byte)*ppuVar32 + cVar6;
    ppuVar37[0x16] = (uint *)((int)ppuVar37[0x16] + (int)ppuVar42);
    puVar21 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar41 >> 0x10),
                                               CONCAT11(cVar25 + (char)((uint)pcVar12 >> 8),
                                                        (char)puVar41)) >> 8),
                               (char)puVar41 + *(char *)((int)puVar19 * 2));
    *(byte *)puVar19 = (byte)*puVar19 + cVar6;
    *(byte *)ppuVar42 = *(byte *)ppuVar42 + (char)ppuVar37;
_ctor:
    bVar4 = (byte)((uint)puVar21 >> 8);
    uVar38 = *puVar19;
    bVar7 = (byte)puVar21;
    puVar19 = (uint *)((int)puVar19 + (uint)CARRY1(bVar4,(byte)*puVar19) + *puVar19);
    *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar7;
    cVar6 = bVar7 - *(byte *)((int)ppuVar32 + 3);
    puVar41 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar21 >> 0x10),
                                               CONCAT11(bVar4 + (byte)uVar38,bVar7)) >> 8),cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) {
      if (*(byte *)((int)ppuVar32 + 3) <= bVar7) {
        *puVar19 = (uint)(*puVar19 + (int)puVar19);
        ppuVar32 = (uint **)CONCAT31((int3)((uint)ppuVar32 >> 8),(byte)ppuVar32 | *(byte *)ppuVar37)
        ;
        puVar19 = puVar19 + 0x230e;
        puVar21 = puVar41;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
    cVar6 = (char)puVar19 + '\x02';
    pcVar12 = (char *)CONCAT31((int3)((uint)puVar19 >> 8),cVar6);
    bVar46 = (POPCOUNT(cVar6) & 1U) == 0;
    puVar21 = puVar14;
    ppuVar44 = ppuVar45;
    uVar30 = (undefined2)uStack_14;
code_r0x00404ca8:
    uStack_14._0_2_ = uVar30;
    puVar14 = puStack_4;
    ppuVar45 = ppuStack_c;
    if (bVar46) break;
    *(byte *)ppuVar32 = (byte)*ppuVar32 + (char)puVar41;
    puVar14 = puVar21;
    ppuVar45 = ppuVar44;
  } while( true );
  *pcVar12 = *pcVar12 + (char)pcVar12;
  *param_6 = *param_6 + (byte)param_6;
  puVar21 = (uint *)CONCAT22((short)((uint)param_5 >> 0x10),
                             CONCAT11((byte)((uint)param_5 >> 8) | (byte)*param_4,(char)param_5));
  *(char *)param_3 = *(char *)param_3 + (char)param_3;
  *(byte *)((int)param_6 * 2) = *(byte *)((int)param_6 * 2) ^ (byte)param_6;
  uVar3 = *(undefined6 *)param_6;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar11 = (byte *)uVar3;
  bVar4 = (byte)uVar3;
  *pbVar11 = *pbVar11 + bVar4;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  puVar41 = (uint *)((int)puVar21 + 0x11673);
  uVar38 = *puVar41;
  uVar2 = *puVar41;
  *puVar41 = uVar2 + (int)param_4 + (uint)CARRY1(bVar7,bVar4);
  ppuStack_c = (uint **)CONCAT22(ppuStack_c._2_2_,(undefined2)uStack_14);
  pbVar11 = pbVar11 + (uint)(CARRY4(uVar38,(uint)param_4) ||
                            CARRY4(uVar2 + (int)param_4,(uint)CARRY1(bVar7,bVar4))) +
                      *(int *)((int)puVar21 + (int)param_4);
  ppuVar32 = (uint **)param_4;
  ppuVar37 = param_3;
  ppuVar42 = uStack_8;
  uVar30 = (undefined2)uStack_14;
code_r0x00404cca:
  uStack_14._0_2_ = uVar30;
  cVar6 = (char)pbVar11 + '\x04';
  puVar19 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
  if (SCARRY1((char)pbVar11,'\x04') == cVar6 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar19 = (byte)*puVar19 + (char)puVar19;
  ppuVar43 = ppuVar42 + 1;
  out(*ppuVar42,(short)ppuVar32);
  uVar38 = *puVar21;
  uVar2 = (uint)*ppuVar32;
  bVar7 = (byte)puVar21;
  *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar7;
  iVar17 = (CONCAT31((int3)((uint)puVar19 >> 8),(char)puVar19 + '\x03') & uVar38) + iRam00008c38;
  *(byte *)puVar21 = (byte)*puVar21 + (char)ppuVar32;
  pcVar12 = (char *)(iVar17 + (uint)CARRY1((byte)uVar2,bVar7) + 0x1246f);
  uVar23 = (undefined3)((uint)puVar21 >> 8);
  bVar7 = bVar7 | (byte)*ppuVar32;
  puVar41 = (uint *)CONCAT31(uVar23,bVar7);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar12 >> 8);
  puVar19 = (uint *)(CONCAT31((int3)((uint)pcVar12 >> 8),(char)pcVar12 + *pcVar12) + 0x1fbeef2);
  uVar38 = *puVar19;
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  if (CARRY4(uVar38,(uint)puVar19)) {
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    pcVar12 = (char *)CONCAT31(uVar23,bVar7 | bRam00282809);
    cVar6 = (char)((uint)puVar21 >> 8);
    *(byte *)ppuVar37 = *(byte *)ppuVar37 + cVar6;
    *pcVar12 = *pcVar12 - cVar6;
    *(byte *)puVar19 = *(byte *)puVar19 + (char)puVar19;
    iVar17 = (int)pcVar12 - (int)*ppuVar37;
    ppuVar42 = ppuVar42 + 2;
    out(*ppuVar43,(short)ppuVar32);
    *puVar19 = (uint)(*puVar19 + (int)puVar19);
    puVar41 = (uint *)CONCAT22((short)((uint)iVar17 >> 0x10),
                               CONCAT11((byte)((uint)iVar17 >> 8) | bRambf73070b,(char)iVar17));
code_r0x00404d15:
    uVar38 = *puVar19;
    bVar7 = (byte)puVar19;
    *(byte *)puVar19 = (byte)*puVar19 + bVar7;
    ppuVar43 = ppuVar42 + 1;
    out(*ppuVar42,(short)ppuVar32);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar4 = bVar7 + in_AF * '\x06';
    puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),
                               bVar4 + (0x90 < (bVar4 & 0xf0) |
                                       CARRY1((byte)uVar38,bVar7) | in_AF * (0xf9 < bVar4)) * '`');
  }
  *puVar19 = (uint)(*puVar19 + (int)puVar19);
  bVar7 = (byte)puVar19 | *(byte *)ppuVar45;
  ppuVar42 = ppuVar43 + 1;
  uVar29 = SUB42(ppuVar32,0);
  out(*ppuVar43,uVar29);
  *(byte *)puVar41 = (byte)*puVar41 - bVar7;
  uVar38 = (uint)*ppuVar32;
  bVar4 = (byte)puVar41;
  *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar4;
  iVar17 = (int)*ppuVar42 +
           (uint)CARRY1((byte)uVar38,bVar4) + CONCAT31((int3)((uint)puVar19 >> 8),bVar7);
  pcVar12 = (char *)((int)puVar14 - (int)*ppuVar32);
  uVar23 = (undefined3)((uint)iVar17 >> 8);
  cVar6 = (char)iVar17 + *(byte *)ppuVar42 + (puVar14 < *ppuVar32);
  puVar21 = (uint *)CONCAT31(uVar23,cVar6);
  bVar7 = (byte)((uint)puVar41 >> 8);
  *(byte *)puVar41 = (byte)*puVar41 - bVar7;
  *puVar21 = (uint)(*puVar21 + (int)puVar21);
  bVar4 = bVar4 | *(byte *)((int)ppuVar32 + (int)puVar21);
  uVar30 = (undefined2)((uint)puVar41 >> 0x10);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)puVar21 = (byte)*puVar21 + cVar6;
    pcVar20 = (char *)CONCAT31(uVar23,cVar6 + '\x12');
    *pcVar20 = *pcVar20 + bVar7;
    puVar21 = (uint *)CONCAT31(uVar23,(cVar6 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar41 >> 8),bVar4));
    uVar38 = (uint)*ppuVar32;
    *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar4;
    if (!CARRY1((byte)uVar38,bVar4)) {
      pbVar11 = (byte *)((uint)puVar21 | *puVar21);
      out(*ppuVar42,uVar29);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar8 = *pbVar11;
      piVar18 = (int *)CONCAT22(uVar30,CONCAT11(bVar7 | bVar8,bVar4));
      iVar17 = (int)pbVar11 - *piVar18;
      *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar4;
      ppuVar44 = ppuVar43 + 3;
      out(ppuVar43[2],uVar29);
      uRam12060000 = (undefined1)iVar17;
      *(char *)((int)piVar18 + iVar17) = *(char *)((int)piVar18 + iVar17) - (bVar7 | bVar8);
      *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar4;
      pbVar11 = (byte *)(iVar17 + -0x120edecd);
      *(byte *)ppuVar44 = *(byte *)ppuVar44 + 1;
      bVar7 = *pbVar11;
      bVar8 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      pcVar12 = pcVar12 + ((-1 - *(int *)((int)ppuVar45 + 0x42)) - (uint)CARRY1(bVar7,bVar8));
      *pbVar11 = *pbVar11 + bVar8;
      bVar7 = (byte)ppuVar37 | (byte)((uint)pbVar11 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar11;
      uVar38 = (uint)*ppuVar32;
      pcVar20 = (char *)(((uint)pbVar11 | 0x11) + 0x511072c);
      ppuVar42 = ppuVar43 + 4;
      out(*ppuVar44,uVar29);
      ppuVar32 = (uint **)((int)ppuVar32 + 1);
      *pcVar20 = *pcVar20 + (char)pcVar20;
      bVar8 = (byte)((uint)pcVar20 >> 8);
      ppuVar37 = (uint **)CONCAT31((int3)(CONCAT22((short)((uint)ppuVar37 >> 0x10),
                                                   CONCAT11((byte)((uint)ppuVar37 >> 8) |
                                                            (byte)uVar38,bVar7)) >> 8),bVar7 | bVar8
                                  );
      uVar23 = (undefined3)((uint)pcVar20 >> 8);
      bVar7 = (char)pcVar20 - *pcVar20;
      pcVar20 = (char *)CONCAT31(uVar23,bVar7);
      *pcVar20 = *pcVar20 + bVar7;
      *(int *)((int)pcVar20 * 2) = (int)(*(int *)((int)pcVar20 * 2) + (int)ppuVar37);
      *(byte *)ppuVar32 = *(byte *)ppuVar32 + bVar7;
      *pcVar12 = *pcVar12 + bVar8;
      in_AF = 9 < (bVar7 & 0xf) | in_AF;
      uVar38 = CONCAT31(uVar23,bVar7 + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar38;
      pbVar11 = (byte *)CONCAT22((short)(uVar38 >> 0x10),CONCAT11(bVar8 + in_AF,bVar7));
      *(byte *)ppuVar42 = *(byte *)ppuVar42 + bVar4;
      *pbVar11 = *pbVar11 + bVar7;
      *pbVar11 = *pbVar11 + bVar7;
      bVar46 = CARRY1(bVar7,*pbVar11);
      puVar21 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7 + *pbVar11);
      goto code_r0x00404d9a;
    }
    *(byte *)ppuVar37 = *(byte *)ppuVar37 - (char)ppuVar32;
  }
  *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
  bVar46 = false;
  piVar18 = (int *)CONCAT22(uVar30,CONCAT11(bVar7 | (byte)*ppuVar32,bVar4));
code_r0x00404d9a:
  do {
    puVar41 = (uint *)ppuVar32;
    *puVar21 = (*puVar21 - (int)puVar21) - (uint)bVar46;
    bVar7 = (byte)((uint)piVar18 >> 8);
    uVar30 = (undefined2)((uint)piVar18 >> 0x10);
    bVar4 = (byte)piVar18;
    bVar8 = bVar7 + (byte)iRam00000c00;
    pbVar11 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar7,(byte)iRam00000c00));
    *(byte *)puVar41 = (byte)*puVar41 + bVar4;
    ppuVar37 = (uint **)CONCAT31((int3)((uint)ppuVar37 >> 8),(char)ppuVar37 - *(byte *)ppuVar42);
    bVar7 = *pbVar11;
    puVar21 = (uint *)(pbVar11 + (uint)CARRY1(bVar8,*pbVar11) + *(int *)pbVar11);
    *(byte *)puVar41 = (byte)*puVar41 + bVar4;
    cVar25 = ((bVar8 + bVar7) - (byte)*puVar41) + (byte)*puVar21;
    pcVar20 = (char *)CONCAT22(uVar30,CONCAT11(cVar25,bVar4));
    ppuVar43 = ppuVar45 + 1;
    puVar14 = (uint *)in((short)puVar41);
    *ppuVar45 = puVar14;
    cVar6 = (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + cVar6;
    uVar23 = (undefined3)((uint)puVar41 >> 8);
    bVar8 = (byte)puVar41 | *(byte *)ppuVar42;
    pcVar26 = (char *)CONCAT31(uVar23,bVar8);
    *pcVar20 = *pcVar20 + '\x01';
    bVar7 = (cVar25 - *pcVar26) + (byte)*puVar21;
    pcVar20 = (char *)CONCAT22(uVar30,CONCAT11(bVar7,bVar4));
    ppuVar45 = ppuVar45 + 2;
    puVar14 = (uint *)in((short)pcVar26);
    *ppuVar43 = puVar14;
    *(byte *)puVar21 = (byte)*puVar21 + cVar6;
    bVar8 = bVar8 | *(byte *)ppuVar42;
    ppuVar32 = (uint **)CONCAT31(uVar23,bVar8);
    *pcVar20 = *pcVar20 + '\x01';
    bVar46 = bVar4 < *(byte *)((int)ppuVar32 + 2);
    cVar25 = bVar4 - *(byte *)((int)ppuVar32 + 2);
    piVar18 = (int *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar25);
  } while ((POPCOUNT(cVar25) & 1U) != 0);
  *(byte *)puVar21 = (byte)*puVar21 + cVar6;
  bVar4 = cVar6 + 0x7b;
  pbVar11 = (byte *)CONCAT31((int3)((uint)puVar21 >> 8),bVar4);
  *(byte *)((int)ppuVar37 + (int)pbVar11) = *(byte *)((int)ppuVar37 + (int)pbVar11) + bVar4;
  ppuVar43 = ppuVar42 + 1;
  uVar29 = SUB42(ppuVar32,0);
  out(*ppuVar42,uVar29);
  pbVar10 = (byte *)((int)ppuVar37 + -1);
  *pbVar11 = *pbVar11 + bVar4;
  bVar7 = bVar7 | (byte)*ppuVar32;
  piVar18 = (int *)CONCAT22(uVar30,CONCAT11(bVar7,cVar25));
  *pbVar11 = *pbVar11 + bVar4;
  *pbVar10 = *pbVar10 + bVar8;
  *pbVar10 = *pbVar10 ^ bVar4;
  *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar7;
  *pbVar11 = *pbVar11 + bVar4;
  do {
    bVar28 = (byte)((uint)piVar18 >> 8);
    *(byte *)ppuVar45 = *(byte *)ppuVar45 + bVar28;
    bVar7 = *pbVar11;
    bVar4 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    *(byte **)((int)ppuVar37 + 0x17) =
         (byte *)((int)ppuVar43 + (uint)CARRY1(bVar7,bVar4) + *(int *)((int)ppuVar37 + 0x17));
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    uVar24 = (undefined3)((uint)pbVar11 >> 8);
    bVar4 = bVar4 | *(byte *)ppuVar43;
    ppuVar45 = (uint **)((int)ppuVar45 + *(int *)(pcVar12 + -0x34));
    *(char *)CONCAT31(uVar24,bVar4) = *(char *)CONCAT31(uVar24,bVar4) + bVar4;
    bVar7 = bVar4 + 2;
    cVar6 = (char)((uint)puVar41 >> 8);
    bVar35 = (byte)piVar18;
    if ((POPCOUNT(bVar7) & 1U) != 0) {
      pbVar11 = (byte *)CONCAT31(uVar24,bVar4 + 0x15 + (0xfd < bVar4));
      if (0xec < bVar7 || CARRY1(bVar4 + 0x15,0xfd < bVar4)) {
        *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      }
code_r0x00404e60:
      pcVar12 = pcVar12 + -(int)*ppuVar32;
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      pbVar33 = (byte *)((int)ppuVar43 + (-(uint)CARRY1(bVar7,(byte)pbVar11) - *(int *)pbVar11));
      pbVar11 = pbVar11 + *(int *)pbVar11;
      ppuStack_20 = (uint **)CONCAT22(ppuStack_20._2_2_,in_DS);
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      *(char *)piVar18 = (char)*piVar18 + cVar6;
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + (byte)pbVar11;
      *(byte **)(pbVar10 + (int)ppuVar32) =
           (byte *)((int)ppuVar32 +
                   (uint)CARRY1(bVar7,(byte)pbVar11) + *(int *)(pbVar10 + (int)ppuVar32));
      pbVar11 = pbVar11 + 0x73061314;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      uVar24 = (undefined3)((uint)piVar18 >> 8);
      bVar35 = bVar35 | (byte)*ppuVar32;
      pcVar26 = (char *)CONCAT31(uVar24,bVar35);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      cVar6 = (char)pbVar11 + 'o';
      pcVar20 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar6);
      *pcVar20 = *pcVar20 + cVar6;
      out(*(undefined4 *)pbVar33,uVar29);
      uVar38 = (uint)*ppuVar32;
      *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar35;
      pcVar20 = pcVar20 + (int)*ppuVar45 + CARRY1((byte)uVar38,bVar35);
      *pcVar20 = *pcVar20 + (char)pcVar20;
      *pcVar26 = *pcVar26 + bVar8;
      ppuVar43 = (uint **)(pbVar33 + 8);
      out(*(undefined4 *)(pbVar33 + 4),uVar29);
      *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar35;
      piVar18 = (int *)((uint)pcVar20 | (uint)*ppuVar45);
      pcVar26[0x390a0000] = pcVar26[0x390a0000] - bVar28;
      pbVar10 = (byte *)&cRam07000000;
      *(byte *)ppuVar45 = *(byte *)ppuVar45 - bVar28;
      *piVar18 = *piVar18 + (int)piVar18;
      puVar21 = (uint *)CONCAT31(uVar24,bVar35 | *(byte *)((int)piVar18 + (int)pcVar26));
      *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) - bVar28;
      cRam07000000 = cRam07000000 + bVar28;
      piVar18 = (int *)((uint)piVar18 | 0x777b02);
      pbVar11 = (byte *)((int)ppuVar45 + (int)pcVar12 * 2);
      bVar46 = SCARRY1(*pbVar11,(char)piVar18);
      *pbVar11 = *pbVar11 + (char)piVar18;
      bVar7 = *pbVar11;
      *(char *)piVar18 = (char)*piVar18;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
    bVar4 = bVar4 + 0x71;
    pbVar11 = (byte *)CONCAT31(uVar24,bVar4);
    *pbVar11 = *pbVar11;
    *(byte *)ppuVar43 = *(byte *)ppuVar43 + 1;
    *piVar18 = (*piVar18 - (int)pbVar11) - (uint)(0x90 < bVar7);
    bVar7 = *(byte *)ppuVar43;
    *(byte *)ppuVar43 = *(byte *)ppuVar43 + bVar4;
    if (!CARRY1(bVar7,bVar4)) goto code_r0x00404e60;
    *pbVar11 = *pbVar11 + bVar4;
    uVar30 = (undefined2)((uint)piVar18 >> 0x10);
    bVar28 = bVar28 | *pbVar11;
    pbVar11 = pbVar11 + -*(int *)pbVar11;
    *pbVar10 = *pbVar10 + bVar28;
    cVar25 = bVar35 - *(byte *)((int)ppuVar32 + 2);
    piVar18 = (int *)CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar28,bVar35)) >> 8),cVar25);
  } while ((POPCOUNT(cVar25) & 1U) != 0);
  cVar5 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar5;
  uVar24 = (undefined3)((uint)pbVar11 >> 8);
  pcVar20 = (char *)CONCAT31(uVar24,cVar5 + '{');
  out(*ppuVar43,uVar29);
  *pcVar20 = *pcVar20 + cVar5 + '{';
  bVar4 = cVar5 + 0x7e;
  pbVar11 = (byte *)CONCAT31(uVar24,bVar4);
  ppuVar43 = ppuVar42 + 3;
  out(ppuVar42[2],uVar29);
  pbVar10 = (byte *)((int)ppuVar37 + -2);
  *pbVar11 = *pbVar11 + bVar4;
  bVar28 = bVar28 | (byte)*ppuVar32;
  puVar21 = (uint *)CONCAT22(uVar30,CONCAT11(bVar28,cVar25));
  *pbVar11 = *pbVar11 + bVar4;
  *pbVar10 = *pbVar10 + bVar8;
  *pbVar10 = *pbVar10 ^ bVar4;
  *(byte *)ppuVar32 = (byte)*ppuVar32 + bVar28;
  *pbVar11 = *pbVar11 + bVar4;
  *pbVar11 = *pbVar11 + cVar6;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  ppuVar37[6] = (uint *)((byte *)((int)ppuVar37[6] + (int)ppuVar43) + CARRY1(bVar7,bVar4));
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  bVar4 = bVar4 | *(byte *)ppuVar43;
  ppuVar45 = (uint **)((int)ppuVar45 + *(int *)(pcVar12 + -0x33));
  *(char *)CONCAT31(uVar24,bVar4) = *(char *)CONCAT31(uVar24,bVar4) + bVar4;
  bVar46 = SCARRY1(bVar4,'\x02');
  bVar7 = bVar4 + 2;
  piVar18 = (int *)CONCAT31(uVar24,bVar7);
  if ((POPCOUNT(bVar7) & 1U) == 0) {
    *(byte *)piVar18 = (char)*piVar18 + bVar7;
    return CONCAT31(uVar24,bVar4 + 0x71);
  }
code_r0x00404ebf:
  bVar4 = (byte)piVar18;
  uVar24 = (undefined3)((uint)piVar18 >> 8);
  if (bVar7 != 0 && bVar46 == (char)bVar7 < '\0') {
    *(byte *)piVar18 = (char)*piVar18 + bVar4;
    ppuVar43[(int)ppuVar45 * 2] =
         (uint *)((byte *)((int)ppuVar43[(int)ppuVar45 * 2] + (int)ppuVar32) + (0xd2 < bVar4));
    return CONCAT31(uVar24,bVar4 + 0x2d);
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar7 = *pbVar10;
  *ppuVar43 = (uint *)((int)*ppuVar43 + (int)piVar18);
  bVar35 = (byte)((uint)puVar21 >> 8);
  *(byte *)piVar18 = (char)*piVar18 - bVar35;
  *(byte *)piVar18 = (char)*piVar18 + bVar4;
  pbVar11 = (byte *)(CONCAT31(uVar23,bVar8 | bVar7) - *(int *)pbVar10);
  puVar14 = (uint *)CONCAT31(uVar24,bVar4 + 6);
  *(uint *)(pbVar10 + (int)ppuVar43 * 2) =
       (int)puVar14 + (uint)(0xf9 < bVar4) + *(int *)(pbVar10 + (int)ppuVar43 * 2);
  *(byte *)puVar21 = (byte)*puVar21 ^ bVar4 + 6;
  bVar4 = (byte)puVar21;
  *pbVar11 = *pbVar11 + bVar4;
  ppuVar42 = ppuVar43 + 1;
  uVar30 = SUB42(pbVar11,0);
  out(*ppuVar43,uVar30);
  *puVar21 = *puVar21 ^ (uint)puVar14;
  *pbVar11 = *pbVar11 + bVar4;
  puVar41 = (uint *)(pbVar10 + -*(int *)pbVar10);
  *(uint *)((int)ppuVar45 + 0x31) = *(uint *)((int)ppuVar45 + 0x31) | (uint)pcVar12;
  *puVar14 = *puVar14 + (int)puVar14;
  puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar35 | (byte)*puVar41,bVar4))
  ;
  *(byte **)(pbVar11 + 0x6e) = (byte *)(*(int *)(pbVar11 + 0x6e) + (int)ppuVar42);
  piVar18 = (int *)((uint)puVar14 | *puVar14);
  bVar8 = (byte)puVar41;
  *(byte *)ppuVar45 = *(byte *)ppuVar45 - bVar8;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  if (CARRY1(bVar7,bVar4)) {
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    bVar7 = pbVar11[0x11];
    uVar29 = (undefined2)((uint)puVar41 >> 0x10);
    out(*ppuVar42,uVar30);
    puVar21 = (uint *)((int)puVar21 + 1);
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    bVar31 = (byte)((uint)puVar41 >> 8) | bVar7 | *pbVar11;
    pcVar20 = (char *)((int)piVar18 + -0x21000001);
    bVar7 = (byte)pcVar20 | 0x11;
    uVar23 = (undefined3)((uint)pcVar20 >> 8);
    cVar6 = bVar7 - 7;
    pcVar26 = (char *)CONCAT31(uVar23,cVar6);
    *ppuVar45 = (uint *)((char *)((int)*ppuVar45 + (int)pcVar26) + (bVar7 < 7));
    ppuVar42 = ppuVar43 + 3;
    out(ppuVar43[2],uVar30);
    pbVar11 = pbVar11 + 1;
    *pcVar26 = *pcVar26 + cVar6;
    bVar35 = (byte)((uint)pcVar20 >> 8);
    bVar28 = bVar8 | bVar35;
    bVar4 = cVar6 - *pcVar26;
    bVar7 = *(byte *)puVar21;
    *(byte *)puVar21 = *(byte *)puVar21 + bVar4;
    *(char *)CONCAT31(uVar23,bVar4) = *(char *)CONCAT31(uVar23,bVar4) + bVar4 + CARRY1(bVar7,bVar4);
    *pbVar11 = *pbVar11 + bVar4;
    *(byte *)ppuVar42 = *(byte *)ppuVar42 + bVar28;
    bVar7 = (byte)((uint)pbVar11 >> 8);
    *(byte *)puVar21 = *(byte *)puVar21 + bVar4 + CARRY1((byte)pbVar11,bVar7);
    piVar18 = (int *)CONCAT31(uVar23,bVar4);
    *(byte *)piVar18 = (char)*piVar18 + bVar4;
    pbVar11 = (byte *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                               CONCAT11(bVar7 + bVar35,(byte)pbVar11 + bVar7));
    puVar41 = (uint *)CONCAT22(uVar29,CONCAT11(bVar31 + *(char *)(CONCAT31((int3)(CONCAT22(uVar29,
                                                  CONCAT11(bVar31,bVar8)) >> 8),bVar28) + 0x76),
                                               bVar28));
    uStack_14._0_2_ = ppuStack_20._0_2_;
code_r0x00404fa4:
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    pcVar20 = (char *)(CONCAT31((int3)((uint)piVar18 >> 8),(char)piVar18 + '(') ^ *puVar21);
    cVar5 = (char)puVar21;
    *pbVar11 = *pbVar11 + cVar5;
    uVar30 = (undefined2)((uint)puVar41 >> 0x10);
    cVar36 = (char)puVar41;
    cVar40 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar41 + 0x75);
    *pcVar20 = *pcVar20 + (char)pcVar20;
    cVar6 = (char)pcVar20 + 'o';
    pcVar20 = (char *)CONCAT31((int3)((uint)pcVar20 >> 8),cVar6);
    *pcVar20 = *pcVar20 + cVar6;
    cVar39 = (char)((uint)puVar21 >> 8);
    *pcVar12 = *pcVar12 - cVar39;
    pbVar11[1] = pbVar11[1] + cVar5;
    pcVar20 = pcVar20 + -0x757b021b;
    cVar6 = (char)pcVar20;
    *pcVar20 = *pcVar20 + cVar6;
    uVar23 = (undefined3)((uint)pcVar20 >> 8);
    cVar25 = cVar6 + 'o';
    pcVar20 = (char *)CONCAT31(uVar23,cVar25);
    pbVar33 = pbVar11 + 2;
    *pcVar20 = *pcVar20 + cVar25;
    iVar17 = CONCAT22(uVar30,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar40,cVar36)) +
                                                        0x76),cVar36));
    *pcVar20 = *pcVar20 + cVar25;
    pcVar20 = (char *)CONCAT31(uVar23,cVar6 + -0x22);
    ppuVar43 = (uint **)((int)ppuVar45 + 1);
    *(byte *)ppuVar45 = *(byte *)ppuVar42;
    *pcVar20 = *pcVar20 + cVar6 + -0x22;
    *(byte *)((int)puVar21 + (int)pcVar20) =
         *(byte *)((int)puVar21 + (int)pcVar20) - (char)((uint)pbVar33 >> 8);
    *pbVar33 = *pbVar33 + cVar5;
    bVar4 = cVar39 - pbVar11[4];
    pbVar10 = (byte *)((int)ppuVar42 + 5);
    out(*(undefined4 *)((int)ppuVar42 + 1),(short)pbVar33);
    puVar14 = (uint *)((uint)(pcVar20 + *(int *)(pcVar20 + iVar17)) ^ 0x280a0001);
    *(byte *)puVar14 = (byte)*puVar14 << 1 | (char)(byte)*puVar14 < '\0';
    *pbVar10 = *pbVar10 + (char)puVar14;
    pbVar10 = pbVar10 + *(int *)(pbVar11 + -0x5c);
    pbVar11 = (byte *)((uint)puVar14 | *puVar14);
    *pbVar10 = *pbVar10 + (char)pbVar11;
    puVar41 = (uint *)CONCAT31((int3)((uint)iVar17 >> 8),cVar36 - (char)pbVar33);
    bVar7 = *pbVar11;
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),CONCAT11(bVar4 + *pbVar11,cVar5));
    iVar17 = *(int *)pbVar11;
    *pbVar33 = *pbVar33 + cVar5;
    cVar6 = (char)(pbVar11 + (uint)CARRY1(bVar4,bVar7) + iVar17) + 'r';
    puVar14 = (uint *)CONCAT31((int3)((uint)(pbVar11 + (uint)CARRY1(bVar4,bVar7) + iVar17) >> 8),
                               cVar6);
    pbVar11 = (byte *)CONCAT22((short)((uint)pbVar33 >> 0x10),CONCAT11(10,(char)pbVar33));
    *(char *)(puVar14 + 10) = (char)puVar14[10] + '\n';
    *pbVar10 = *pbVar10 + cVar6;
    ppuVar42 = (uint **)(pbVar10 + *(int *)(pbVar11 + -0x5e));
    uVar38 = *puVar14;
    cVar6 = (char)((uint)puVar14 | uVar38);
    *(byte *)ppuVar42 = *(byte *)ppuVar42 + cVar6;
    uVar23 = (undefined3)(((uint)puVar14 | uVar38) >> 8);
    cVar25 = cVar6 + (byte)*puVar41;
    puVar14 = (uint *)CONCAT31(uVar23,cVar25);
    if (SCARRY1(cVar6,(byte)*puVar41) == cVar25 < '\0') goto code_r0x00405090;
    *(byte *)puVar14 = (byte)*puVar14 + cVar25;
    piVar18 = (int *)CONCAT31(uVar23,cVar25 + '\x02');
    ppuVar45 = ppuVar43;
  }
  else {
    out(2,(char)piVar18);
    if ((POPCOUNT(*pbVar11) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar23 = (undefined3)((uint)piVar18 >> 8);
  cVar6 = (char)piVar18 + '}';
  pbVar10 = (byte *)CONCAT31(uVar23,cVar6);
  pbVar11[(int)pbVar10] = pbVar11[(int)pbVar10] + cVar6;
  pbVar11[0x280a0000] = pbVar11[0x280a0000] - (char)((uint)piVar18 >> 8);
  bVar7 = (byte)puVar21 & 7;
  *pbVar10 = *pbVar10 << bVar7 | *pbVar10 >> 8 - bVar7;
  *(byte *)ppuVar42 = *(byte *)ppuVar42 + cVar6;
  cVar5 = (char)puVar41 - *(byte *)ppuVar42;
  uVar30 = (undefined2)((uint)puVar41 >> 0x10);
  cVar39 = (char)((uint)puVar41 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar41 >> 8),cVar5) + 0x7c)
  ;
  pcVar20 = (char *)CONCAT22(uVar30,CONCAT11(cVar39,cVar5));
  *pbVar10 = *pbVar10 + cVar6;
  bVar4 = (char)piVar18 + 0xa7U & *pbVar11;
  ppuVar43 = (uint **)((int)ppuVar45 + *(int *)(pcVar12 + 0x7c));
  *(char *)CONCAT31(uVar23,bVar4) = *(char *)CONCAT31(uVar23,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar10 = (byte *)CONCAT31(uVar23,bVar4);
  *pbVar10 = *pbVar10 + bVar4;
  *pcVar20 = *pcVar20 + cVar5;
  *pbVar11 = *pbVar11 ^ bVar4;
  *pcVar20 = *pcVar20 + bVar4;
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  cVar6 = (bVar4 - *pbVar10) - CARRY1(bVar7,bVar4);
  *(byte *)puVar21 = (byte)*puVar21 + (byte)pbVar11;
  cVar39 = cVar39 + pcVar20[0x7b];
  *(char *)CONCAT31(uVar23,cVar6) = *(char *)CONCAT31(uVar23,cVar6) + cVar6;
  pcVar20 = (char *)CONCAT31(uVar23,cVar6 + 'o');
  *pcVar20 = *pcVar20 + cVar6 + 'o';
  pcVar20 = pcVar20 + 0x2ed7fde6;
  cVar25 = (char)pcVar20;
  *pcVar20 = *pcVar20 + cVar25;
  cVar6 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar39,cVar5)) + 0x7b);
  *pcVar20 = *pcVar20 + cVar25;
  piVar18 = (int *)(CONCAT31((int3)((uint)pcVar20 >> 8),cVar25 + 'o') + 0x6f060000);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar24 = (undefined3)((uint)pbVar11 >> 8);
  bVar4 = (byte)pbVar11 | *(byte *)ppuVar42;
  pbVar33 = (byte *)CONCAT31(uVar24,bVar4);
  uVar38 = CONCAT22(uVar30,CONCAT11(cVar39 + cVar6,cVar5)) | (uint)ppuVar42;
  uVar23 = (undefined3)((uint)piVar18 >> 8);
  bVar7 = (byte)piVar18 | *pbVar33;
  pbVar10 = (byte *)CONCAT31(uVar23,bVar7);
  cVar6 = (byte)puVar21 - bVar4;
  puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),cVar6);
  *pbVar10 = *pbVar10 + bVar7;
  ppuVar32 = ppuVar42 + 1;
  out(*ppuVar42,(short)pbVar33);
  *pbVar10 = bVar7;
  *pbVar33 = *pbVar33 + cVar6;
  ppuVar42 = ppuVar42 + 2;
  out(*ppuVar32,(short)pbVar33);
  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
  puVar41 = (uint *)(CONCAT31((int3)(uVar38 >> 8),(char)uVar38 - (char)((uint)pbVar11 >> 8)) |
                    (uint)ppuVar42);
  pbVar11 = (byte *)CONCAT31(uVar24,(bVar4 | *(byte *)ppuVar42) + *(byte *)ppuVar43);
  puVar14 = (uint *)CONCAT31(uVar23,(bVar7 - *(byte *)ppuVar43) -
                                    *(char *)CONCAT31(uVar23,bVar7 - *(byte *)ppuVar43));
code_r0x00405090:
  *puVar14 = (uint)(pbVar11 + *puVar14);
  cVar6 = (char)puVar14;
  *(byte *)puVar14 = (byte)*puVar14 + cVar6;
  *(byte *)puVar14 = (byte)*puVar14 + cVar6;
  *(byte *)puVar14 = (byte)*puVar14 + cVar6;
  *puVar21 = *puVar21 - (int)pcVar12;
  bVar7 = *(byte *)ppuVar42;
  bVar4 = (byte)pbVar11;
  *(byte *)ppuVar42 = *(byte *)ppuVar42 + bVar4;
  *(byte *)puVar14 = (byte)*puVar14 + cVar6 + CARRY1(bVar7,bVar4);
  *(byte *)puVar21 = (byte)*puVar21 + cVar6;
  uVar38 = *puVar41;
  *(byte *)puVar41 = (byte)*puVar41 + 0x72;
  *(byte *)puVar41 = (byte)*puVar41;
  cVar6 = (char)((uint)pbVar11 >> 8);
  if (SCARRY1((byte)uVar38,'r')) {
    ppuVar42 = (uint **)((int)ppuVar42 + *(int *)(pbVar11 + -10));
  }
  else {
    while( true ) {
      *(byte *)ppuVar42 = *(byte *)ppuVar42 + (char)puVar14;
      uVar23 = (undefined3)((uint)puVar14 >> 8);
      cVar25 = (char)puVar14 + (byte)*puVar41;
      pcVar20 = (char *)CONCAT31(uVar23,cVar25);
      puVar41 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),
                                 CONCAT11((char)((uint)puVar41 >> 8) +
                                          *(byte *)((int)puVar41 + 0x7b),(char)puVar41));
      *pcVar20 = *pcVar20 + cVar25;
      in_AF = 9 < (cVar25 + 0x6fU & 0xf) | in_AF;
      uVar38 = CONCAT31(uVar23,cVar25 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar8 = (byte)uVar38;
      piVar18 = (int *)CONCAT22((short)(uVar38 >> 0x10),
                                CONCAT11((char)((uint)puVar14 >> 8) + in_AF,bVar8));
      *piVar18 = *piVar18 + (int)piVar18;
      uVar23 = (undefined3)((uint)piVar18 >> 8);
      bVar8 = bVar8 | *(byte *)(piVar18 + 0x354a);
      bVar8 = bVar8 - *(char *)CONCAT31(uVar23,bVar8);
      pbVar10 = (byte *)CONCAT31(uVar23,bVar8);
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar8;
      ppuVar42 = (uint **)((int)ppuVar42 + (-(uint)CARRY1(bVar7,bVar8) - *(int *)pbVar10));
      puVar14 = (uint *)(pbVar10 + 0xfc00);
      *pbVar11 = *pbVar11 + cVar6;
      uVar38 = *puVar14;
      bVar7 = (byte)puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
      uVar15 = (uint)CARRY1((byte)uVar38,bVar7);
      uVar38 = *puVar41;
      uVar2 = *puVar41;
      *puVar41 = (uint)((byte *)(uVar2 + (int)puVar14) + uVar15);
      if (!CARRY4(uVar38,(uint)puVar14) && !CARRY4(uVar2 + (int)puVar14,uVar15)) break;
      *(byte *)puVar14 = (byte)*puVar14 + bVar7;
    }
  }
  uVar38 = (uint)puVar14 | *puVar14;
  uVar30 = SUB42(pbVar11,0);
  *(byte *)ppuVar42 = *(byte *)ppuVar42 + (char)uVar38;
  piVar18 = (int *)(uVar38 + 0xc1872);
  if (SCARRY4(uVar38,0xc1872)) {
    cVar25 = (char)piVar18;
    *(char *)piVar18 = *(char *)piVar18 + cVar25;
    *pbVar11 = *pbVar11 + cVar25;
    *(char *)piVar18 = *(char *)piVar18 + cVar25;
    *(byte *)puVar41 = (byte)*puVar41 + (char)puVar21;
    *(char *)piVar18 = *(char *)piVar18 + cVar25;
    *(char *)((int)piVar18 * 2) = *(char *)((int)piVar18 * 2) + bVar4;
    ppuVar32 = ppuVar42;
    goto code_r0x00405117;
  }
  do {
    bVar7 = *(byte *)ppuVar42;
    bVar4 = (byte)piVar18;
    *(byte *)ppuVar42 = *(byte *)ppuVar42 + bVar4;
    if (CARRY1(bVar7,bVar4)) {
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      uVar23 = (undefined3)((uint)puVar21 >> 8);
      bVar7 = (byte)puVar21 | bRam396f1609;
      *piVar18 = (int)(*piVar18 + (int)piVar18);
      puVar21 = (uint *)CONCAT31(uVar23,bVar7 | *(byte *)CONCAT31(uVar23,bVar7));
      uVar23 = (undefined3)((uint)piVar18 >> 8);
      bVar4 = bVar4 | *pbVar11;
      pcVar20 = (char *)CONCAT31(uVar23,bVar4);
      if ((POPCOUNT(bVar4) & 1U) != 0) {
        ppuVar32 = ppuVar42 + 1;
        out(*ppuVar42,uVar30);
        uVar38 = CONCAT22((short)((uint)piVar18 >> 0x10),(ushort)bVar4);
        *(byte *)ppuVar32 = *(byte *)ppuVar32 + bVar4;
        pcVar20 = (char *)(uVar38 | 8);
        cVar25 = (char)((uint)puVar41 >> 8) + *(byte *)((int)puVar41 + 0x7a);
        puVar14 = (uint *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(cVar25,(char)puVar41));
        *pcVar20 = *pcVar20 + (char)pcVar20;
        cVar6 = (char)pcVar20 + 'o';
        piVar18 = (int *)CONCAT31((int3)(uVar38 >> 8),cVar6);
        *(char *)piVar18 = (char)*piVar18 + cVar6;
        *(byte *)puVar21 = (byte)*puVar21 + 1;
        ppuVar42 = ppuVar42 + 2;
        out(*ppuVar32,uVar30);
        pbVar11 = (byte *)((uint)pbVar11 ^ uRam08122c04);
        iVar17 = CONCAT31((int3)((uint)(*piVar18 * 0x17070600) >> 8),2);
        *(char *)(iVar17 * 2) = *(char *)(iVar17 * 2) - cVar25;
        do {
          bVar7 = (byte)iVar17;
          *(byte *)ppuVar42 = *(byte *)ppuVar42 + bVar7;
          bVar46 = CARRY1(bVar7,(byte)*puVar14);
          uVar23 = (undefined3)((uint)iVar17 >> 8);
          cVar6 = bVar7 + (byte)*puVar14;
          pbVar10 = (byte *)CONCAT31(uVar23,cVar6);
          uVar30 = in_DS;
          uVar29 = uStack_60;
          if (SCARRY1(bVar7,(byte)*puVar14) == cVar6 < '\0') goto GenerateStatusText;
          *pbVar10 = *pbVar10 + cVar6;
          uVar38 = CONCAT31(uVar23,cVar6 + '\'') + 0x1ebd9f3;
          uStack_64 = (undefined1)(undefined2)uStack_14;
          uStack_63 = (undefined1)((ushort)(undefined2)uStack_14 >> 8);
          piVar18 = (int *)(uVar38 ^ 0x73060000);
          puVar21 = (uint *)((int)puVar21 + 1);
          *piVar18 = (int)(*piVar18 + (int)piVar18);
          puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                     CONCAT11((byte)((uint)puVar14 >> 8) | pcVar12[0x7e],
                                              (char)puVar14));
          cVar6 = (char)uVar38;
          *(char *)piVar18 = (char)*piVar18 + cVar6;
          uVar38 = CONCAT31((int3)((uint)piVar18 >> 8),cVar6 + '\x02');
          bVar46 = 0xd9f2d2da < uVar38;
          iVar17 = uVar38 + 0x260d2d25;
          pcVar20 = pcVar12;
          do {
            uVar23 = (undefined3)((uint)iVar17 >> 8);
            bVar4 = (char)iVar17 + -2 + bVar46;
            pbVar10 = (byte *)CONCAT31(uVar23,bVar4);
            bVar7 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar4;
            bVar8 = (byte)puVar14;
            uStack_60 = (undefined2)uStack_14;
            if (CARRY1(bVar7,bVar4)) {
              *pbVar10 = *pbVar10 + bVar4;
              puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),
                                         CONCAT11((byte)((uint)puVar14 >> 8) | pcVar20[0x7f],bVar8))
              ;
              *pbVar10 = *pbVar10 + bVar4;
              pbVar10 = (byte *)CONCAT31(uVar23,bVar4 + 0x2a);
              *pbVar10 = *pbVar10 + bVar4 + 0x2a;
              *(byte *)puVar14 = (byte)*puVar14 + (char)pbVar11;
              uVar30 = in_DS;
              while( true ) {
                in_DS = uVar30;
                bVar4 = (byte)pbVar10;
                *pbVar11 = *pbVar11 ^ bVar4;
                *pbVar11 = *pbVar11 + (char)puVar14;
                *pbVar10 = *pbVar10 + bVar4;
                *(byte *)puVar14 = (byte)*puVar14 + (char)((uint)pbVar11 >> 8);
                bVar7 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar4;
                uVar38 = *puVar14;
                uVar2 = *puVar14;
                *puVar14 = (uint)(pbVar10 + uVar2 + CARRY1(bVar7,bVar4));
                uVar23 = (undefined3)((uint)pbVar10 >> 8);
                if (CARRY4(uVar38,(uint)pbVar10) ||
                    CARRY4((uint)(pbVar10 + uVar2),(uint)CARRY1(bVar7,bVar4))) break;
                *(byte *)ppuVar42 = *(byte *)ppuVar42 + bVar4;
                pcVar26 = (char *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                           CONCAT11((char)((uint)puVar21 >> 8) + *pbVar10,
                                                    (char)puVar21));
                *(byte *)ppuVar42 = *(byte *)ppuVar42 + bVar4;
                piVar18 = (int *)CONCAT31(uVar23,bVar4 | (byte)*puVar14);
                ppuVar32 = ppuVar42;
                while( true ) {
                  ppuVar42 = ppuVar32 + 1;
                  out(*ppuVar32,(short)pbVar11);
                  pbVar11 = pbVar11 + 1;
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  bVar8 = (byte)((uint)pcVar26 >> 8) | *pbVar11;
                  uVar23 = (undefined3)((uint)piVar18 >> 8);
                  bVar4 = (byte)piVar18 ^ *pbVar11;
                  pcVar22 = (char *)CONCAT31(uVar23,bVar4);
                  cRam282b0000 = cRam282b0000 - bVar8;
                  *pcVar22 = *pcVar22 + bVar4;
                  pcVar12 = pcVar20 + -*(int *)pbVar11;
                  uStack_64 = (undefined1)in_DS;
                  uStack_63 = (undefined1)((ushort)in_DS >> 8);
                  bVar7 = *(byte *)((int)ppuVar43 + 0x17);
                  *pcVar22 = *pcVar22 + bVar4;
                  puVar21 = (uint *)CONCAT22((short)((uint)pcVar26 >> 0x10),
                                             CONCAT11(bVar8 + bVar7 | *pbVar11,(char)pcVar26));
                  *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
                  *(byte *)((int)pcVar22 * 2) = *(byte *)((int)pcVar22 * 2) ^ bVar4;
                  in_AF = 9 < (bVar4 & 0xf) | in_AF;
                  bVar4 = bVar4 + in_AF * -6;
                  pbVar10 = (byte *)CONCAT31(uVar23,bVar4 + (0x9f < bVar4 | in_AF * (bVar4 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
                  *(char *)((int)pbVar10 * 2) =
                       *(char *)((int)pbVar10 * 2) + (char)((uint)pbVar11 >> 8);
                  bVar46 = CARRY1((byte)*puVar21,(byte)pbVar11);
                  *(byte *)puVar21 = (byte)*puVar21 + (byte)pbVar11;
                  uVar30 = in_DS;
                  uVar29 = (undefined2)uStack_14;
GenerateStatusText:
                  in_DS = uVar29;
                  pcVar20 = pcVar12;
                  uStack_60 = in_DS;
                  if (!bVar46) break;
                  *pbVar10 = *pbVar10 + (char)pbVar10;
                  iVar17 = CONCAT31((int3)((uint)puVar21 >> 8),(byte)puVar21 | *pbVar11);
                  uVar30 = (undefined2)((uint)puVar14 >> 0x10);
                  cVar5 = (char)((uint)puVar14 >> 8) + *(byte *)((int)puVar14 + 0x7d);
                  *pbVar10 = *pbVar10 + (char)pbVar10;
                  *(byte *)ppuVar43 = *(byte *)ppuVar43 - (char)((uint)puVar21 >> 8);
                  iVar17 = iVar17 - *(int *)(&uRam0b0a0000 + iVar17);
                  cVar6 = *(char *)(CONCAT22(uVar30,CONCAT11(cVar5,(char)puVar14)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*ppuVar42,(short)pbVar11);
                  pbVar11 = (byte *)CONCAT22(uStack_62,CONCAT11(uStack_63,uStack_64));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  ppuVar32 = ppuVar42 + 2;
                  out(ppuVar42[1],CONCAT11(uStack_63,uStack_64));
                  pcVar20 = pcVar12 + 1;
                  cVar25 = (char)iVar17;
                  pcVar26 = (char *)CONCAT22((short)((uint)iVar17 >> 0x10),
                                             CONCAT11((byte)((uint)iVar17 >> 8) |
                                                      *(byte *)((int)ppuVar43 + 0x46),cVar25));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_14._0_2_ = CONCAT11(uStack_63,uStack_64);
                  uVar23 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*(byte *)ppuVar32,0xf0)) >> 8);
                  piVar18 = (int *)CONCAT31(uVar23,0x5f);
                  ppuVar43 = (uint **)((int)ppuVar43 + 1);
                  *piVar18 = (int)(*piVar18 + (int)piVar18);
                  puVar14 = (uint *)CONCAT22(uVar30,CONCAT11(cVar5 + cVar6 |
                                                             *(byte *)(ppuVar42 + -0x1e),
                                                             (char)puVar14));
                  *(char *)piVar18 = (char)*piVar18 + '_';
                  puVar21 = (uint *)CONCAT31(uVar23,0x8c);
                  ppuVar32[(int)ppuVar43 * 2] =
                       (uint *)((int)ppuVar32[(int)ppuVar43 * 2] + (int)pbVar11);
                  bVar7 = *(byte *)ppuVar32;
                  *(byte *)ppuVar32 = *(byte *)ppuVar32 + 0x8c;
                  if (bVar7 < 0x74) {
                    *pbVar11 = *pbVar11 + cVar25;
                    *(byte *)puVar14 = (byte)*puVar14 >> 1;
                    *(char *)puVar21 = (char)*puVar21 + -0x74;
                    *puVar21 = (uint)(pcVar20 + *puVar21);
                    *puVar21 = *puVar21 << 1 | (uint)((int)*puVar21 < 0);
                    *pbVar11 = *pbVar11 + cVar25;
                    pcVar12[2] = pcVar12[2] - cVar25;
                    *pbVar11 = *pbVar11 + cVar25;
                    pbVar10 = (byte *)CONCAT31(uVar23,0x83);
                    puVar21 = puVar14;
                    goto code_r0x00405312;
                  }
                  *puVar21 = (uint)(*puVar21 + (int)puVar21);
                  piVar18 = (int *)(CONCAT31(uVar23,(byte)puVar21[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar21[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar18 = (int *)((int)piVar18 + (int)*ppuVar32);
                }
              }
              *pbVar11 = *pbVar11 + bVar4;
              *(byte *)puVar14 = (byte)*puVar14 - (char)pbVar11;
              *pbVar10 = *pbVar10 + bVar4;
              pbVar10 = (byte *)CONCAT31(uVar23,bVar4 | (byte)*puVar14);
            }
            else {
              cVar6 = (char)puVar21;
              *pbVar11 = *pbVar11 + cVar6;
              *(byte **)pbVar10 = pbVar11 + *(int *)pbVar10;
              *pbVar10 = *pbVar10 + bVar4;
              bVar4 = bVar4 + *pbVar10;
              pbVar10 = (byte *)CONCAT31(uVar23,bVar4);
              if (-1 < (char)bVar4) {
                *(byte *)puVar14 = (byte)*puVar14 + bVar8;
                out(*ppuVar42,(short)pbVar11);
                pbVar11 = pbVar11 + 1;
                *pbVar10 = *pbVar10 + bVar4;
                puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),
                                           bVar8 | (byte)((uint)iVar17 >> 8));
                cVar25 = bVar4 - (byte)*puVar21;
                pcVar12 = (char *)CONCAT31(uVar23,cVar25);
                *pcVar12 = *pcVar12 + cVar25 + (bVar4 < (byte)*puVar21);
                *pbVar11 = *pbVar11 + cVar25;
                pcVar12 = (char *)((int)pcVar12 * 2 + 0x79);
                *pcVar12 = *pcVar12 + (char)((uint)pbVar11 >> 8);
                pbVar10 = (byte *)in((short)pbVar11);
                ppuVar42 = ppuVar42 + 1;
              }
              *(byte *)ppuVar42 = *(byte *)ppuVar42 + cVar6;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              *pbVar10 = *pbVar10 + (char)pbVar10;
              uStack_64 = (undefined1)in_DS;
              uStack_63 = (undefined1)((ushort)in_DS >> 8);
              bVar7 = *pbVar10;
              bVar35 = (byte)((uint)puVar21 >> 8);
              bVar8 = bVar35 + *pbVar10;
              iVar17 = *(int *)pbVar10;
              *pbVar11 = *pbVar11 + cVar6;
              bVar4 = (char)(pbVar10 + (uint)CARRY1(bVar35,bVar7) + iVar17) - (byte)*puVar14;
              pbVar10 = (byte *)CONCAT31((int3)((uint)(pbVar10 + (uint)CARRY1(bVar35,bVar7) + iVar17
                                                      ) >> 8),bVar4);
              *(byte *)puVar14 = (byte)*puVar14 ^ bVar4;
              *pcVar20 = *pcVar20 + (char)puVar14;
              *pbVar10 = *pbVar10 + bVar4;
              *pbVar10 = *pbVar10 + bVar4;
              *pbVar10 = *pbVar10 + bVar4;
              puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                                         CONCAT11(bVar8 + *pbVar10,cVar6));
              pbVar10 = pbVar10 + (uint)CARRY1(bVar8,*pbVar10) + *(int *)pbVar10;
              *pbVar11 = *pbVar11 + cVar6;
              ppuVar42 = (uint **)((int)ppuVar42 + *(int *)(pbVar11 + 0x3e));
            }
            *(byte *)ppuVar42 = *(byte *)ppuVar42 + (char)pbVar10;
            cVar6 = (char)pbVar10 + 'r';
            ppuVar42 = (uint **)((int)ppuVar42 + -1);
            uVar38 = CONCAT31((int3)((uint)pbVar10 >> 8),cVar6);
            *(byte *)ppuVar42 = *(byte *)ppuVar42 + cVar6;
            bVar46 = 0xfff38f8d < uVar38;
            iVar17 = uVar38 + 0xc7072;
            pcVar12 = pcVar20;
          } while (SCARRY4(uVar38,0xc7072));
        } while( true );
      }
      *pcVar20 = *pcVar20 + bVar4;
      bVar4 = bVar4 + 0x6f;
      pbVar10 = (byte *)CONCAT31(uVar23,bVar4);
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      uVar23 = (undefined3)
               ((uint)(pbVar10 + (uint)CARRY1(bVar7,bVar4) + *(int *)((int)puVar21 + (int)pbVar11))
               >> 8);
      cVar25 = (char)(pbVar10 + (uint)CARRY1(bVar7,bVar4) + *(int *)((int)puVar21 + (int)pbVar11)) +
               'E';
      pcVar20 = (char *)CONCAT31(uVar23,cVar25);
      *pcVar20 = *pcVar20 + cVar25;
      cVar25 = cVar25 + *pcVar20;
      pcVar20 = (char *)CONCAT31(uVar23,cVar25);
      *pcVar20 = *pcVar20 + cVar25;
      puVar14 = (uint *)CONCAT31(uVar23,cVar25 + *pcVar20);
      *(char *)puVar14 = (char)*puVar14 + cVar25 + *pcVar20;
      pbVar10 = (byte *)((uint)puVar14 | *puVar14);
      bVar7 = *pbVar10;
      bVar4 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      piVar18 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar4 + CARRY1(bVar7,bVar4));
      ppuVar32 = ppuVar42;
code_r0x00405117:
      *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
      puVar41 = (uint *)((int)puVar41 - *puVar41);
      ppuVar42 = ppuVar32 + 1;
      out(*ppuVar32,uVar30);
    }
    *pbVar11 = *pbVar11 + (char)puVar21;
    bVar46 = puVar41 < (uint *)*piVar18;
    puVar41 = (uint *)((int)puVar41 - *piVar18);
    bVar7 = (byte)((uint)puVar21 >> 8);
    *(byte *)((int)ppuVar43 + 0x39) = (*(byte *)((int)ppuVar43 + 0x39) - bVar7) - bVar46;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    uVar38 = *puVar41;
    *(int *)((int)ppuVar43 + 0x39) = *(int *)((int)ppuVar43 + 0x39) - (int)pcVar12;
    *piVar18 = (int)(*piVar18 + (int)piVar18);
    puVar21 = (uint *)CONCAT22((short)((uint)puVar21 >> 0x10),
                               CONCAT11(bVar7 | (byte)uVar38 | (byte)*puVar41,(char)puVar21));
    *(char *)(piVar18 + 10) = (char)piVar18[10] + cVar6;
  } while( true );
code_r0x004052ee:
  *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
  bVar7 = (char)piVar18 + 0x28;
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),bVar7);
  *pbVar10 = *pbVar10 ^ bVar7;
  *(byte *)puVar14 = (byte)*puVar14 + (char)((uint)pcVar26 >> 8);
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + (byte)pcVar26;
  piVar18 = (int *)((int)*ppuVar43 + (uint)CARRY1(bVar7,(byte)pcVar26) + ((uint)pbVar10 | 0x1496f09)
                   );
  ppuVar42 = ppuVar32 + 1;
  out(*ppuVar32,(short)pbVar11);
  pbVar33 = pbVar11 + -1;
  *piVar18 = *piVar18 + (int)piVar18;
  pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),(byte)pbVar33 | (byte)*puVar14);
  cVar6 = (char)piVar18 + '\x13';
  pbVar10 = (byte *)CONCAT31((int3)((uint)piVar18 >> 8),cVar6);
  puVar21 = puVar14;
  ppuVar32 = ppuVar42;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    *pbVar11 = *pbVar11 - (char)((uint)pbVar33 >> 8);
    *pbVar10 = *pbVar10 + cVar6;
code_r0x00405396:
    bVar7 = *pbVar10;
    bVar4 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    *ppuVar42 = (uint *)((byte *)((int)*ppuVar42 + (int)pbVar10) + CARRY1(bVar7,bVar4));
    out(*ppuVar42,(short)pbVar11);
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
    pcVar12 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((byte)((uint)pbVar10 >> 8) | *(byte *)(ppuVar42 + 1),bVar4))
    ;
    *(char **)((int)ppuVar43 + -1) = pcVar12 + *(int *)((int)ppuVar43 + -1);
    out(ppuVar42[1],(short)pbVar11);
    *pcVar12 = *pcVar12 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar10 = *pbVar10 + (char)pbVar10;
  piVar18 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + 'o');
  puVar14 = (uint *)((int)puVar21 + -1);
  *piVar18 = *piVar18 + (int)piVar18;
  uVar23 = (undefined3)((uint)pbVar11 >> 8);
  piVar18 = (int *)((int)piVar18 + 0x1b7e);
  bVar8 = (byte)pbVar11 | *(byte *)puVar14 | *(byte *)puVar14;
  iRam04115f2c = iRam04115f2c + (int)piVar18;
  out(*ppuVar32,(short)CONCAT31(uVar23,bVar8));
  *piVar18 = *piVar18 + (int)piVar18;
  bVar8 = bVar8 | (byte)piVar18;
  iVar34 = CONCAT31(uVar23,bVar8);
  pbVar11 = (byte *)((int)piVar18 - *piVar18);
  cVar6 = (char)pbVar11;
  *pcVar26 = *pcVar26 + cVar6;
  cVar25 = (char)pcVar26 - bVar8;
  *pbVar11 = *pbVar11 + cVar6;
  uVar30 = (undefined2)((uint)pcVar26 >> 0x10);
  bVar4 = (byte)((uint)pcVar26 >> 8) | *pbVar11;
  pcVar20 = pcVar20 + -1;
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  bVar7 = *(byte *)(CONCAT22(uVar30,CONCAT11(bVar4,cVar25)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar11;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar20;
  *pbVar11 = *pbVar11 + cVar6;
  bVar7 = bVar4 | bVar7 | *(byte *)puVar14;
  iVar27 = CONCAT22(uVar30,CONCAT11(bVar7,cVar25));
  pbVar33 = (byte *)((uint)(ppuVar32 + 1) ^ *(uint *)(iVar34 + -0x43));
  iVar17 = *(int *)pbVar11;
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  if (SCARRY4(iVar17,(int)pbVar11)) {
    *pbVar11 = *pbVar11 + cVar6;
  }
  pbVar10 = pbVar11 + 0x5674;
  ppuVar43 = (uint **)((int)ppuVar43 +
                      (-(uint)((byte *)0xffffa98b < pbVar11) - *(int *)(pbVar33 + -0x7f)));
  bVar4 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  uVar24 = (undefined3)((uint)pbVar10 >> 8);
  bVar35 = bVar4 + 0x2d;
  piVar18 = (int *)CONCAT31(uVar24,bVar35);
  *(uint *)(pbVar33 + (int)ppuVar43 * 8) =
       *(int *)(pbVar33 + (int)ppuVar43 * 8) + iVar34 + (uint)(0xd2 < bVar4);
  bVar4 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar35;
  if (!CARRY1(bVar4,bVar35)) {
    do {
      pbVar10 = (byte *)(iVar34 + 1);
      bVar4 = (byte)piVar18;
      *(byte *)piVar18 = (char)*piVar18 + bVar4;
      bVar8 = (byte)((uint)piVar18 >> 8);
      bVar35 = (byte)puVar14 | bVar8;
      puVar21 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar35);
      out(*(undefined4 *)pbVar33,(short)pbVar10);
      *(byte *)piVar18 = (char)*piVar18 + bVar4;
      uVar30 = (undefined2)((uint)iVar27 >> 0x10);
      cVar6 = (char)iVar27;
      pbVar11 = (byte *)CONCAT22(uVar30,CONCAT11((byte)((uint)iVar27 >> 8) | *pbVar10,cVar6));
      bVar7 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar4;
      *(byte *)piVar18 = (char)*piVar18 + bVar4 + CARRY1(bVar7,bVar4);
      *pbVar10 = *pbVar10 + bVar4;
      *(byte *)ppuVar43 = *(byte *)ppuVar43 + bVar8;
      *(int *)((int)piVar18 * 2) =
           *(int *)((int)piVar18 * 2) + CONCAT22(uVar30,CONCAT11(0x1c,cVar6));
      *(byte *)piVar18 = (char)*piVar18 + bVar4;
      cVar25 = (char)pbVar10;
      *(byte *)puVar21 = (byte)*puVar21 + cVar25;
      *(byte *)((int)piVar18 * 2) = *(byte *)((int)piVar18 * 2) ^ bVar4;
      *(byte *)piVar18 = (char)*piVar18 + bVar4;
      pbVar11 = pbVar33 + 8;
      out(*(undefined4 *)(pbVar33 + 4),(short)pbVar10);
      piVar18 = &uRam0a0a0000;
      *pbVar10 = *pbVar10;
      bVar4 = cVar6 - cVar25;
      iVar27 = CONCAT22(uVar30,CONCAT11(*(byte *)(ppuVar43 + 0x14) | 0x1c | bRam0ca87216,bVar4));
      *pbVar10 = *pbVar10;
      bVar7 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar4;
      if (!CARRY1(bVar7,bVar4)) {
        piVar18 = &uRam1e7b7000;
        bVar7 = (byte)((uint)puVar14 >> 8) | *(byte *)(iVar34 + 3);
        puVar21 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),CONCAT11(bVar7,bVar35));
        if (bVar7 != 0) {
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar25 + pbVar11[(int)ppuVar43 * 8])
          ;
          piVar18 = (int *)0x6d7d7000;
          iVar27 = iVar27 + 1;
        }
      }
      *piVar18 = *piVar18 + (int)piVar18;
      iVar34 = CONCAT31((int3)((uint)pbVar10 >> 8),(byte)pbVar10 | pbVar11[(int)ppuVar43 * 8]);
      *(char *)piVar18 = (char)*piVar18;
      piVar18 = (int *)CONCAT31((int3)((uint)piVar18 >> 8),0xf9);
      *ppuVar43 = (uint *)((char *)((int)*ppuVar43 + (int)piVar18) + 1);
      pbVar33 = pbVar33 + 0xc;
      out(*(undefined4 *)pbVar11,(short)iVar34);
      puVar14 = puVar21;
    } while( true );
  }
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  bVar35 = bVar35 | *(byte *)((int)piVar18 + 0x4000081);
  piVar18 = (int *)CONCAT31(uVar24,bVar35);
  if ('\0' < (char)bVar35) {
    *(byte *)piVar18 = (char)*piVar18 + bVar35;
    puVar41 = (uint *)CONCAT31(uVar24,bVar35 + 0x28);
    *puVar41 = *puVar41 ^ (uint)puVar41;
    *(byte *)puVar14 = *(byte *)puVar14 + bVar7;
    cVar6 = (bVar35 + 0x28) - bVar7;
    pcVar12 = (char *)CONCAT31(uVar24,cVar6);
    *pcVar12 = *pcVar12 + cVar6;
    pbVar11 = (byte *)CONCAT31(uVar23,bVar8 | *(byte *)puVar14);
    pcVar20 = (char *)CONCAT22((short)((uint)puVar14 >> 0x10),
                               CONCAT11((char)((uint)puVar14 >> 8) + *(byte *)((int)puVar21 + 0x7d),
                                        (char)puVar14));
    *pcVar12 = *pcVar12 + cVar6;
    pbVar10 = (byte *)CONCAT31(uVar24,cVar6 + 0x39U ^ *(byte *)CONCAT31(uVar24,cVar6 + 0x39U));
    *pcVar20 = *pcVar20 + bVar7;
    ppuVar42 = (uint **)(pbVar33 + 4);
    out(*(undefined4 *)pbVar33,(short)pbVar11);
    goto code_r0x00405396;
  }
  ppuVar32 = (uint **)(pbVar33 + 4);
  out(*(undefined4 *)pbVar33,(short)iVar34);
  pcVar26 = (char *)(iVar27 + -1);
  *piVar18 = (int)(*piVar18 + (int)piVar18);
  pbVar11 = (byte *)CONCAT31(uVar23,bVar8 | *(byte *)puVar14);
  goto code_r0x004052ee;
}


