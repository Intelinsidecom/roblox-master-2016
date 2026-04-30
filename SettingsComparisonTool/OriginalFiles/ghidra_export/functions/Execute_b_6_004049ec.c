/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004049ec
 * Raw Name    : <Execute>b__6
 * Demangled   : <Execute>b__6
 * Prototype   : int <Execute>b__6(uint * setting, uint * param_2, byte * param_3, undefined4 param_4, char * param_5)
 * Local Vars  : cVar39, puVar38, cVar41, cVar40, unaff_EBP, ppuVar42, puVar44, ppuVar43, unaff_ESI, ppuVar45, puVar47, puVar46, puVar48, unaff_EDI, in_SS, in_ES, bVar49, in_DS, unaff_retaddr, in_AF, ppuVar50, param_2, param_3, param_4, param_5, setting, uStack_67, uStack_68, uStack_64, uStack_66, puStack_24, uStack_28, puStack_18, iStack_1c, puStack_10, puStack_14, puStack_8, puStack_c, uVar1, iStack_4, uVar3, uVar2, cVar5, bVar4, cVar7, bVar6, in_EAX, uVar8, uVar10, puVar9, iVar12, puVar11, pbVar14, pbVar13, pcVar16, piVar15, puVar18, uVar17, pcVar20, pcVar19, uVar22, uVar21, pcVar24, puVar23, bVar26, iVar25, uVar28, uVar27, bVar30, bVar29, iVar32, puVar31, cVar34, bVar33, pbVar35, unaff_EBX, uVar37, puVar36
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
<Execute>b__6(uint *setting,uint *param_2,byte *param_3,undefined4 param_4,char *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  undefined3 uVar21;
  ushort *puVar9;
  uint *in_EAX;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int *piVar15;
  char *pcVar16;
  uint uVar17;
  uint *puVar18;
  char *pcVar19;
  undefined3 uVar22;
  char *pcVar20;
  byte bVar26;
  undefined2 uVar27;
  uint *puVar23;
  undefined2 uVar28;
  char *pcVar24;
  int iVar25;
  byte bVar29;
  byte bVar30;
  uint *puVar31;
  int iVar32;
  byte bVar33;
  char cVar34;
  char cVar39;
  int unaff_EBX;
  byte *pbVar35;
  uint *puVar36;
  char cVar40;
  char cVar41;
  uint uVar37;
  uint *puVar38;
  uint **ppuVar42;
  uint **ppuVar43;
  uint **unaff_EBP;
  uint *puVar44;
  uint **ppuVar45;
  uint *unaff_ESI;
  uint *puVar46;
  uint *puVar47;
  uint *unaff_EDI;
  uint *puVar48;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar49;
  byte in_AF;
  uint **unaff_retaddr;
  uint **ppuVar50;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_28;
  uint *puStack_24;
  int iStack_1c;
  uint *puStack_18;
  undefined1 *puStack_14;
  uint *puStack_10;
  uint *puStack_c;
  uint *puStack_8;
  int iStack_4;
  
                    /* .NET CLR Managed Code */
  puVar48 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x3b),
                                      (char)unaff_EBX));
code_r0x004049ef:
  bVar6 = (byte)in_EAX;
  *(byte *)in_EAX = (byte)*in_EAX + bVar6;
  bVar4 = bVar6 + 2;
  in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
  puVar46 = unaff_ESI;
  if ((POPCOUNT(bVar4) & 1U) != 0) {
    puVar31 = param_2;
    ppuVar43 = unaff_EBP;
    unaff_ESI = (uint *)unaff_retaddr;
    if (0xfd < bVar6) goto code_r0x004049df;
    *(byte *)in_EAX = (byte)*in_EAX | bVar4;
    bVar6 = (byte)*in_EAX;
    do {
      puVar31 = param_2;
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        cVar5 = (char)in_EAX;
        *(byte *)in_EAX = (byte)*in_EAX + cVar5;
        uVar21 = (undefined3)((uint)in_EAX >> 8);
        cVar39 = cVar5 + '\x03';
        pbVar14 = (byte *)CONCAT31(uVar21,cVar39);
        puVar46 = unaff_ESI + 1;
        out(*unaff_ESI,(short)param_2);
        in_SS = (undefined2)iStack_1c;
        *pbVar14 = *pbVar14 + cVar39;
        cVar7 = (char)setting;
        setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),
                                   CONCAT11((byte)((uint)setting >> 8) | *pbVar14,cVar7));
        *(int *)pbVar14 = *(int *)pbVar14 - (int)pbVar14;
        *(byte *)param_2 = (byte)*param_2 + cVar7;
        cVar7 = (char)puVar48 - *(byte *)((int)unaff_ESI + 6);
        puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) {
          pcVar16 = (char *)((int)unaff_EDI + (int)ppuVar43 * 2);
          *pcVar16 = *pcVar16 + cVar39;
          goto code_r0x00404a51;
        }
        *pbVar14 = *pbVar14 + cVar39;
        in_EAX = (uint *)CONCAT31(uVar21,cVar5 + 'r');
        *(byte *)in_EAX = (byte)*in_EAX;
        iStack_1c = CONCAT22(iStack_1c._2_2_,in_ES);
        unaff_ESI = puVar46;
code_r0x004049df:
        unaff_EDI = (uint *)((int)unaff_EDI + puVar48[0x1c]);
        bVar6 = (byte)in_EAX;
        *(byte *)in_EAX = (byte)*in_EAX + bVar6;
        in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(bVar6 + 0x6e) - (0x90 < bVar6));
        *(byte *)puVar31 = (byte)*puVar31 + (char)setting;
        cVar5 = (char)((uint)setting >> 8) - *(byte *)((int)unaff_ESI + 2);
        setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),CONCAT11(cVar5,(char)setting));
        param_2 = puVar31;
        unaff_EBP = ppuVar43;
        if ((POPCOUNT(cVar5) & 1U) == 0) goto code_r0x004049ef;
      }
      else {
        while( true ) {
          cVar5 = (char)in_EAX;
          *(byte *)in_EAX = (byte)*in_EAX + cVar5;
          uVar21 = (undefined3)((uint)in_EAX >> 8);
          cVar39 = cVar5 + '\x02';
          puVar9 = (ushort *)CONCAT31(uVar21,cVar39);
          uVar28 = (undefined2)((uint)iStack_4 >> 0x10);
          bVar6 = (byte)((uint)iStack_4 >> 8);
          if ((POPCOUNT(cVar39) & 1U) != 0) goto code_r0x0040495b;
          *(char *)puVar9 = (char)*puVar9 + cVar39;
          bVar29 = cVar5 + 0x7d;
          iVar12 = CONCAT31(uVar21,bVar29);
          pbVar14 = (byte *)((int)ppuVar43 + iVar12);
          bVar4 = *pbVar14;
          *pbVar14 = *pbVar14 + bVar29;
          uVar37 = *setting;
          *(byte *)puVar31 = (byte)*puVar31 + (char)setting;
          pcVar16 = (char *)(((iVar12 - uVar37) - (uint)CARRY1(bVar4,bVar29)) + -0x727b0317);
          cVar5 = (char)pcVar16;
          *pcVar16 = *pcVar16 + cVar5;
          uVar21 = (undefined3)((uint)pcVar16 >> 8);
          cVar39 = cVar5 + '\x02';
          puVar44 = (uint *)CONCAT31(uVar21,cVar39);
          puVar46 = unaff_ESI;
          if ((POPCOUNT(cVar39) & 1U) == 0) break;
          while( true ) {
            cVar5 = (char)puVar44;
            *(byte *)puVar44 = (byte)*puVar44 + cVar5;
            uVar21 = (undefined3)((uint)puVar44 >> 8);
            cVar39 = cVar5 + '\x02';
            piVar15 = (int *)CONCAT31(uVar21,cVar39);
            if ((POPCOUNT(cVar39) & 1U) == 0) break;
            *(byte *)puVar31 = (byte)*puVar31 + (char)setting;
            while( true ) {
              *(byte *)setting = (byte)*setting + 1;
              uVar21 = (undefined3)((uint)piVar15 >> 8);
              bVar4 = (char)piVar15 - (char)*piVar15;
              pbVar14 = (byte *)CONCAT31(uVar21,bVar4);
              *pbVar14 = *pbVar14 + bVar4;
              unaff_ESI = (uint *)((int)puVar46 + *(int *)pbVar14);
              cVar5 = bVar4 + *pbVar14;
              puVar9 = (ushort *)CONCAT31(uVar21,cVar5);
              *puVar9 = *puVar9 + (ushort)CARRY1(bVar4,*pbVar14) *
                                  (((ushort)puVar9 & 3) - (*puVar9 & 3));
              *(char *)puVar9 = (char)*puVar9 + cVar5;
              *(char *)puVar9 = (char)*puVar9 + cVar5;
              *(char *)puVar9 = (char)*puVar9 + cVar5;
              unaff_EDI = (uint *)((int)unaff_EDI + puVar48[0x1c]);
code_r0x0040495b:
              cVar5 = (char)puVar9;
              *(char *)puVar9 = (char)*puVar9 + cVar5;
              uVar21 = (undefined3)((uint)puVar9 >> 8);
              cVar39 = cVar5 + '\x02';
              pcVar16 = (char *)CONCAT31(uVar21,cVar39);
              if ((POPCOUNT(cVar39) & 1U) == 0) break;
              *puVar31 = (uint)((int)ppuVar43 + *puVar31);
              puVar46 = (uint *)((int)unaff_ESI + 1);
              out((byte)*unaff_ESI,(short)puVar31);
              puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                         CONCAT11((char)((uint)puVar48 >> 8) +
                                                  *(byte *)((int)puVar48 + -0x3b),(char)puVar48));
              while( true ) {
                cVar5 = (char)pcVar16;
                *pcVar16 = *pcVar16 + cVar5;
                uVar21 = (undefined3)((uint)pcVar16 >> 8);
                bVar4 = cVar5 + 2;
                pcVar16 = (char *)CONCAT31(uVar21,bVar4);
                if ((POPCOUNT(bVar4) & 1U) == 0) break;
                while( true ) {
                  bRam00c36f08 = bVar4;
                  bVar4 = *(byte *)puVar46;
                  cVar5 = (char)pcVar16;
                  *(byte *)puVar46 = *(byte *)puVar46 + cVar5;
                  iStack_1c = CONCAT22(iStack_1c._2_2_,in_ES);
                  if (SCARRY1(bVar4,cVar5) == (char)*(byte *)puVar46 < '\0') {
                    pcVar16[(int)ppuVar43] = pcVar16[(int)ppuVar43] + cVar5;
                    goto code_r0x00404982;
                  }
                  *pcVar16 = *pcVar16 + cVar5;
                  pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar5 + '*');
                  bVar4 = (byte)((uint)setting >> 8);
                  uVar27 = (undefined2)((uint)setting >> 0x10);
                  cVar5 = (char)setting;
                  bVar29 = bVar4 + *pbVar14;
                  pbVar14 = pbVar14 + (uint)CARRY1(bVar4,*pbVar14) + *(int *)pbVar14;
                  *(byte *)puVar31 = (byte)*puVar31 + cVar5;
                  cVar7 = (char)puVar48 - *(byte *)puVar46;
                  bVar4 = *pbVar14;
                  cVar39 = bVar29 + *pbVar14;
                  pcVar19 = (char *)CONCAT22(uVar27,CONCAT11(cVar39,cVar5));
                  iVar12 = *(int *)pbVar14;
                  *(byte *)puVar31 = (byte)*puVar31 + cVar5;
                  uVar21 = (undefined3)((uint)(pbVar14 + (uint)CARRY1(bVar29,bVar4) + iVar12) >> 8);
                  bVar4 = (char)(pbVar14 + (uint)CARRY1(bVar29,bVar4) + iVar12) -
                          *(byte *)((int)puVar31 + 3);
                  pcVar16 = (char *)CONCAT31(uVar21,bVar4);
                  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                                             CONCAT11((char)((uint)puVar48 >> 8) +
                                                      *(char *)(CONCAT31((int3)((uint)puVar48 >> 8),
                                                                         cVar7) + -0x3a),cVar7));
                  *pcVar16 = *pcVar16 + bVar4;
                  pcVar16 = (char *)CONCAT31(uVar21,bVar4 + 0x6f);
                  *pcVar19 = (*pcVar19 - (bVar4 + 0x6f)) - (0x90 < bVar4);
                  *(byte *)puVar31 = (byte)*puVar31 + cVar5;
                  puStack_18 = (uint *)CONCAT22(puStack_18._2_2_,in_SS);
                  *pcVar19 = *pcVar19 + '\x01';
                  cVar39 = cVar39 - *(byte *)((int)unaff_ESI + 3);
                  setting = (uint *)CONCAT22(uVar27,CONCAT11(cVar39,cVar5));
                  if ((POPCOUNT(cVar39) & 1U) == 0) break;
                  pcVar16 = pcVar16 + -0x1b7e2606;
                  *pcVar16 = *pcVar16 + (char)pcVar16;
                  pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),
                                             CONCAT11((byte)((uint)pcVar16 >> 8) |
                                                      (byte)puVar31[0x30dbc2],(char)pcVar16));
                  bVar4 = bRam00c36f08;
                }
              }
              *pcVar16 = *pcVar16 + bVar4;
              piVar15 = (int *)CONCAT31(uVar21,cVar5 + 'q');
              *setting = (*setting - (int)piVar15) - (uint)(0x90 < bVar4);
              *(byte *)puVar31 = (byte)*puVar31 + (char)setting;
              ppuVar43 = (uint **)((int)ppuVar43 + *(int *)((int)unaff_EDI + 0x1a));
              *piVar15 = (int)(*piVar15 + (int)piVar15);
              puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *(byte *)puVar46
                                        );
            }
            *pcVar16 = *pcVar16 + cVar39;
            *(char *)((int)ppuVar43 + CONCAT31(uVar21,cVar5 + '}')) =
                 *(char *)((int)ppuVar43 + CONCAT31(uVar21,cVar5 + '}')) + cVar5 + '}';
            *(byte *)unaff_retaddr = (byte)*unaff_retaddr + (char)unaff_retaddr;
            setting = (uint *)CONCAT22(uVar28,CONCAT11(bVar6 | *(byte *)(iStack_4 * 3),
                                                       (char)iStack_4));
            unaff_EDI = (uint *)(iStack_1c + *(int *)((int)puStack_c + 0x6f));
            puVar44 = (uint *)unaff_retaddr;
            puVar31 = puStack_8;
            puVar48 = puStack_c;
            ppuVar43 = (uint **)puStack_14;
            puVar46 = puStack_18;
          }
          *(char *)piVar15 = (char)*piVar15 + cVar39;
          pcVar16 = (char *)CONCAT31(uVar21,cVar5 + '}');
          out(*puVar46,(short)puVar31);
          *pcVar16 = *pcVar16 + cVar5 + '}';
code_r0x00404982:
          *(byte *)unaff_retaddr = (byte)*unaff_retaddr + (char)unaff_retaddr;
          setting = (uint *)CONCAT22(uVar28,CONCAT11(bVar6 | *(byte *)(iStack_4 + (int)puStack_18),
                                                     (char)iStack_4));
          unaff_EDI = (uint *)(iStack_1c + *(int *)((int)puStack_c + 0x71));
          in_EAX = (uint *)unaff_retaddr;
          puVar31 = puStack_8;
          puVar48 = puStack_c;
          ppuVar43 = (uint **)puStack_14;
          unaff_ESI = puStack_18;
        }
        *(byte *)puVar44 = (byte)*puVar44 + cVar39;
        bVar4 = cVar5 + 0x7d;
        iVar12 = CONCAT31(uVar21,bVar4);
        pbVar14 = (byte *)((int)ppuVar43 + iVar12);
        bVar6 = *pbVar14;
        *pbVar14 = *pbVar14 + bVar4;
        in_EAX = (uint *)((iVar12 - *setting) - (uint)CARRY1(bVar6,bVar4));
      }
      *(byte *)puVar31 = (byte)*puVar31 + (char)setting;
      param_2 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),
                                 ((char)puVar31 - (char)*unaff_EDI) - (byte)*unaff_ESI);
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar48 >> 8),
                                 (char)puVar48 - *(byte *)((int)unaff_ESI + 0x72));
      *in_EAX = *in_EAX & (uint)setting;
      pbVar14 = (byte *)((int)in_EAX + 2);
      *pbVar14 = *pbVar14 + (char)((uint)puVar31 >> 8);
      bVar6 = *pbVar14;
    } while( true );
  }
  do {
    bVar6 = (byte)in_EAX;
    *(byte *)in_EAX = (byte)*in_EAX + bVar6;
    uVar21 = (undefined3)((uint)in_EAX >> 8);
    bVar4 = bVar6 + 0x6f;
    pbVar14 = (byte *)CONCAT31(uVar21,bVar4);
    *setting = (*setting - (int)pbVar14) - (uint)(0x90 < bVar6);
    *(byte *)param_2 = (byte)*param_2 + (char)setting;
    puVar44 = (uint *)((int)unaff_EBP + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    uVar22 = (undefined3)((uint)param_2 >> 8);
    bVar29 = (byte)param_2 | (byte)*puVar46;
    param_2 = (uint *)CONCAT31(uVar22,bVar29);
    *(byte *)setting = (byte)*setting + 1;
    cVar5 = bVar4 - *pbVar14;
    puVar46 = (uint *)((int)puVar46 + (-(uint)(bVar4 < *pbVar14) - *(int *)CONCAT31(uVar21,cVar5)));
    uVar10 = CONCAT31(uVar21,cVar5 + *(char *)CONCAT31(uVar21,cVar5));
    bVar6 = (byte)((uint)setting >> 8);
    bVar49 = CARRY1(bRam14110000,bVar6);
    bRam14110000 = bRam14110000 + bVar6;
    puVar31 = (uint *)((int)puVar48 + (int)puVar46 * 2);
    uVar2 = (uint)bVar49;
    uVar37 = *puVar31;
    uVar17 = uVar10 + *puVar31;
    puVar11 = (undefined4 *)(uVar17 + uVar2);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar11 = uVar1;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_ES);
    uVar37 = (uint)(CARRY4(uVar10,uVar37) || CARRY4(uVar17,uVar2));
    in_EAX = (uint *)((int)puVar11 + uRam7d020511 + uVar37);
    unaff_retaddr = &puStack_8;
    ppuVar50 = &puStack_8;
    ppuVar42 = &puStack_8;
    ppuVar43 = &puStack_8;
    ppuVar45 = &puStack_8;
    unaff_EBP = &puStack_8;
    puStack_8 = puVar44;
    cVar5 = '\x03';
    do {
      puVar44 = puVar44 + -1;
      ppuVar42 = ppuVar42 + -1;
      *ppuVar42 = (uint *)*puVar44;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    pbRam00c82802 =
         (byte *)((int)in_EAX +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar11,uRam7d020511) ||
                      CARRY4((int)puVar11 + uRam7d020511,uVar37))));
    uVar37 = *puVar46;
    cVar5 = (char)in_EAX;
    *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  } while (SCARRY1((byte)uVar37,cVar5) == (char)(byte)*puVar46 < '\0');
  *(byte *)in_EAX = (byte)*in_EAX + cVar5;
  iVar12 = CONCAT31((int3)((uint)in_EAX >> 8),cVar5 + '\x11') + 0xc57b;
  bVar6 = (byte)iVar12;
  *param_2 = *param_2 ^ (uint)puVar48;
  param_2 = (uint *)CONCAT31(uVar22,bVar29 + (byte)*setting);
  iVar12 = (CONCAT31((int3)((uint)iVar12 >> 8),bVar6 + 0x6f) - (uint)(0x90 < bVar6)) + -0x18093a86;
  cVar39 = (char)iVar12;
  uVar21 = (undefined3)((uint)iVar12 >> 8);
  cVar5 = cVar39 + '\x02';
  pbVar14 = (byte *)CONCAT31(uVar21,cVar5);
  puVar31 = puVar46;
  if ((POPCOUNT(cVar5) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar14 = *pbVar14 + cVar5;
  pbVar14 = (byte *)CONCAT31(uVar21,cVar39 + 'q');
code_r0x00404a51:
  pbVar13 = pbVar14 + 1;
  cVar5 = (char)pbVar13;
  *pbVar13 = *pbVar13 + cVar5;
  puVar48 = (uint *)CONCAT22((short)((uint)puVar48 >> 0x10),
                             CONCAT11((char)((uint)puVar48 >> 8) - cVar5,(char)puVar48));
  *pbVar13 = *pbVar13 + cVar5;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*setting);
  pbVar14 = pbVar14 + 0x757b03;
  pcVar16 = (char *)((int)unaff_EDI + (int)ppuVar43 * 2);
  cVar5 = (char)pbVar14;
  *pcVar16 = *pcVar16 + cVar5;
  *pbVar14 = *pbVar14 + cVar5;
  *(byte *)puVar46 = (byte)*puVar46 - (char)((uint)pbVar14 >> 8);
  *pbVar14 = *pbVar14 + cVar5;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar43 + -0x3a));
  *pbVar14 = *pbVar14 + cVar5;
  pbVar14 = (byte *)(CONCAT31((int3)((uint)pbVar14 >> 8),cVar5 + '\x11') + 0x757b02);
  pcVar16 = (char *)((int)unaff_EDI + (int)ppuVar43 * 2);
  bVar4 = (byte)pbVar14;
  *pcVar16 = *pcVar16 + bVar4;
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar4;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
  pbRam011006fe = pbVar14 + (int)(pbRam011006fe + CARRY1(bVar6,bVar4));
  uVar37 = *puVar46;
  *(byte *)puVar46 = (byte)*puVar46 + bVar4;
  ppuVar45 = ppuVar43;
  ppuVar50 = unaff_retaddr;
  if (!CARRY1((byte)uVar37,bVar4)) goto code_r0x00404add;
  do {
    bVar6 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar6;
    bVar29 = (byte)setting;
    setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),
                               CONCAT11((byte)((uint)setting >> 8) | *pbVar14,bVar29));
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar21 = (undefined3)((uint)pbVar14 >> 8);
    bVar6 = bVar6 + in_AF * '\x06';
    cVar5 = bVar6 + (0x90 < (bVar6 & 0xf0) | in_AF * (0xf9 < bVar6)) * '`';
    pcVar16 = (char *)CONCAT31(uVar21,cVar5);
    *pcVar16 = *pcVar16 + cVar5;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar45 + -0x39));
    *pcVar16 = *pcVar16 + cVar5;
    iVar12 = CONCAT31(uVar21,cVar5 + '\x11') + 0xc57b;
    iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),(char)iVar12 + '\x11') + 0xc67b;
    bVar6 = (byte)iVar12;
    bVar4 = bVar6 + 0x6f;
    pbVar14 = (byte *)CONCAT31((int3)((uint)iVar12 >> 8),bVar4);
    *setting = (*setting - (int)pbVar14) - (uint)(0x90 < bVar6);
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar29;
    pbRam011106fe = pbVar14 + (int)(pbRam011106fe + CARRY1((byte)uVar37,bVar29));
    uVar37 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar4;
    puVar31 = puVar46;
    if (!CARRY1((byte)uVar37,bVar4)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    bVar6 = (byte)setting;
    bVar4 = (byte)((uint)setting >> 8) | *pbVar14;
    setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),CONCAT11(bVar4,bVar6));
    *pbVar14 = *pbVar14 - (char)pbVar14;
    *(byte *)puVar48 = (byte)*puVar48 + bVar4;
    puVar46 = puVar31 + 1;
    out(*puVar31,(short)param_2);
    *setting = *setting & (uint)pbVar14;
    uVar37 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    pbVar14 = pbVar14 + (uint)CARRY1((byte)uVar37,bVar6) + *puVar46;
    *pbVar14 = *pbVar14 + (char)pbVar14;
    *(byte *)setting = (byte)*setting + (char)param_2;
    while( true ) {
      out(*puVar46,(short)param_2);
      pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 & (byte)*setting);
      *(byte *)param_2 = (byte)*param_2 + (char)setting;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar48[5],
                                          (char)param_2));
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      puVar46 = puVar46 + 1;
code_r0x00404ad4:
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
      pbVar14 = (byte *)((uint)pbVar14 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar14;
code_r0x00404add:
      bVar6 = (byte)pbVar14;
      uVar21 = (undefined3)((uint)pbVar14 >> 8);
      cVar5 = bVar6 + 8;
      pbVar14 = (byte *)CONCAT31(uVar21,cVar5);
      if (SCARRY1(bVar6,'\b') == cVar5 < '\0') break;
      *pbVar14 = *pbVar14 + cVar5;
      cVar5 = bVar6 + 10;
      piVar15 = (int *)CONCAT31(uVar21,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar15 = (int)(*piVar15 + (int)piVar15);
        goto code_r0x00404b18;
      }
      *(char *)piVar15 = (char)*piVar15 + cVar5;
      puVar31 = (uint *)CONCAT31(uVar21,bVar6 + 0x7c);
      *puVar31 = *puVar31 & (uint)setting;
      *(char *)((int)puVar31 + 0x11) = *(char *)((int)puVar31 + 0x11) + (char)((uint)param_2 >> 8);
      cVar5 = (char)((int)puVar31 + 0xc67b);
      uVar21 = (undefined3)((uint)((int)puVar31 + 0xc67b) >> 8);
      bVar6 = cVar5 + 8;
      pbVar14 = (byte *)CONCAT31(uVar21,bVar6);
      if ((POPCOUNT(bVar6) & 1U) == 0) {
        *pbVar14 = *pbVar14 + bVar6;
        cRam02060000 = cVar5 + 'w';
        puVar44 = (uint *)CONCAT31(uVar21,cRam02060000);
        *(byte *)puVar44 = (byte)*puVar44 + cRam02060000;
        cVar5 = (char)setting;
        setting = (uint *)CONCAT22((short)((uint)setting >> 0x10),
                                   CONCAT11((byte)((uint)setting >> 8) | (byte)*puVar44,cVar5));
        *puVar44 = *puVar44 - (int)puVar44;
        *(byte *)param_2 = (byte)*param_2 + cVar5;
        puVar31 = puVar46 + 1;
        out(*puVar46,(short)param_2);
        puVar46 = puVar31;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar16 = (char *)((uint)puVar44 | *puVar44);
        goto code_r0x00404b89;
      }
      bVar4 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar6;
      *puVar46 = (uint)(pbVar14 + (uint)CARRY1(bVar4,bVar6) + *puVar46);
    }
    *(byte *)puVar46 = (byte)*puVar46 + 1;
    *setting = (uint)(pbVar14 + (uint)(0xf7 < bVar6) + *setting);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 + 'r');
    piVar15 = (int *)((uint)puVar31 | *puVar31);
    param_2 = puStack_24;
code_r0x00404b18:
    bRam11060000 = (byte)piVar15;
    iVar12 = CONCAT31((int3)((uint)((int)piVar15 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar15 + 0xc57b) + '\x11') + 0xc77b;
    bVar6 = (byte)iVar12;
    iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),bVar6 + 0x6f);
    *setting = (*setting - iVar12) - (uint)(0x90 < bVar6);
    cVar5 = (char)setting;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    bVar26 = (byte)((uint)puVar48 >> 8);
    bVar29 = (byte)((uint)param_2 >> 8) | bVar26;
    pcVar19 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar29,(byte)param_2));
    piVar15 = (int *)(iVar12 + 0x73060001);
    *(byte *)setting = (byte)*setting & (byte)piVar15;
    *pcVar19 = *pcVar19 + cVar5;
    bVar4 = (byte)((uint)setting >> 8);
    *(byte *)piVar15 = *(char *)piVar15 - bVar4;
    *(byte *)piVar15 = *(char *)piVar15 + (byte)piVar15;
    iVar12 = *piVar15;
    *piVar15 = *piVar15 - (int)piVar15;
    *(byte *)puVar48 = (byte)*puVar48 + bVar4;
    pcVar16 = (char *)((uint)piVar15 | *unaff_EDI);
    *pcVar19 = *pcVar19 - bVar4;
    bVar6 = (byte)pcVar16;
    *pcVar16 = *pcVar16 + bVar6;
    ppuVar45 = (uint **)(((int)ppuVar45 - iVar12) - *(int *)(pcVar16 + ((int)ppuVar45 - iVar12)));
    uVar28 = (undefined2)((uint)puVar48 >> 0x10);
    bVar33 = (byte)puVar48;
    cVar39 = bVar26 + *(byte *)((int)puVar48 + 0x76);
    pbVar14 = (byte *)CONCAT22(uVar28,CONCAT11(cVar39,bVar33));
    *pcVar16 = *pcVar16 + bVar6;
    uVar21 = (undefined3)((uint)pcVar16 >> 8);
    uVar17 = CONCAT31(uVar21,bVar6 + 7);
    puVar48 = (uint *)((int)ppuVar45 + -0x1faeef1);
    uVar37 = *puVar48;
    uVar2 = *puVar48 + uVar17;
    *puVar48 = uVar2 + (0xf8 < bVar6);
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    puVar48 = puStack_24;
    bVar6 = bVar6 + 7 + (byte)*setting +
            (CARRY4(uVar37,uVar17) || CARRY4(uVar2,(uint)(0xf8 < bVar6)));
    puVar44 = (uint *)CONCAT31(uVar21,bVar6);
    uVar37 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar6;
    if (CARRY1((byte)uVar37,bVar6)) break;
    *(byte *)puVar44 = (byte)*puVar44 + bVar6;
    puVar48 = (uint *)CONCAT22(uVar28,CONCAT11(cVar39 + pbVar14[0x76],bVar33));
    uStack_28 = in_ES;
  }
  *(byte *)puVar44 = (byte)*puVar44 + bVar6;
  uVar22 = (undefined3)((uint)pcVar19 >> 8);
  bVar30 = (byte)param_2 | *pbVar14;
  param_2 = (uint *)CONCAT31(uVar22,bVar30);
  pcRam2b060000 = (char *)CONCAT31(uVar21,bVar6 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar6 + 0x39)) - (0xd7 < (byte)(bVar6 + 0x11));
  bVar26 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar4;
  puVar31 = puVar46 + 1;
  out(*puVar46,(short)param_2);
  bVar6 = (bVar6 + 0x37) - CARRY1(bVar26,bVar4);
  piVar15 = (int *)CONCAT31(uVar21,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    iVar12 = CONCAT31(uVar21,bVar6 + 0x11) + 0xc77b;
    pcVar16 = (char *)CONCAT31((int3)((uint)iVar12 >> 8),(char)iVar12 + 'r');
    pcVar16[0x28] = pcVar16[0x28] + bVar29;
code_r0x00404b89:
    cVar5 = (char)pcVar16;
    *pcVar16 = *pcVar16 + cVar5;
    *pcVar16 = *pcVar16 + cVar5;
    *pcVar16 = *pcVar16 + cVar5;
    puVar9 = (ushort *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar5 + 'r');
    uVar8 = (ushort)puVar9 | *puVar9;
    pcVar16 = (char *)CONCAT22((short)((uint)pcVar16 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*puVar31,(short)param_2);
    *pcVar16 = *pcVar16 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar15 = (char)*piVar15 + bVar6;
  puVar38 = (uint *)((int)ppuVar45 + -*(int *)((int)unaff_EDI + 0x21));
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pcVar16 = (char *)CONCAT31(uVar22,bVar30 | *pbVar14);
  puVar44 = puVar46 + 2;
  out(*puVar31,(short)pcVar16);
  uVar37 = *setting;
  *pcVar16 = *pcVar16 + cVar5;
  uVar37 = CONCAT31(uVar21,bVar6 & (byte)uVar37) | 0x767b02;
  *(byte *)((int)setting + (int)pcVar16) = *(byte *)((int)setting + (int)pcVar16) + (char)uVar37;
  iVar12 = uVar37 + 0xc67b;
  cVar41 = (char)iVar12;
  uVar21 = (undefined3)((uint)iVar12 >> 8);
  cVar7 = cVar41 + 'r';
  pcVar16 = (char *)CONCAT31(uVar21,cVar7);
  pcVar16[0x28] = pcVar16[0x28] + bVar29;
  *pcVar16 = *pcVar16 + cVar7;
  uVar27 = (undefined2)((uint)setting >> 0x10);
  bVar4 = bVar4 | *(byte *)((int)puStack_24 + -0x5e);
  puVar23 = (uint *)CONCAT22(uVar27,CONCAT11(bVar4,cVar5));
  *pcVar16 = *pcVar16 + cVar7;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,uStack_28);
  puVar36 = (uint *)CONCAT22(uVar28,CONCAT11(cVar39 + pbVar14[0x76],bVar33));
  *pcVar16 = *pcVar16 + cVar7;
  puVar31 = (uint *)CONCAT31(uVar21,cVar41 + -0x1c);
  pcVar16 = (char *)((uint)puVar31 | *puVar31);
  bVar49 = (POPCOUNT((uint)pcVar16 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar16;
  puVar31 = puStack_24;
  puVar18 = puVar38;
  puVar47 = puVar48;
  uVar28 = uStack_28;
  if (!bVar49) goto code_r0x00404ca8;
  *pcVar16 = *pcVar16 + cRam02060000;
  puVar18 = (uint *)CONCAT31((int3)((uint)pcVar16 >> 8),cRam02060000 + 'r');
  *puVar18 = *puVar18 & (uint)puVar23;
  *(char *)((int)puVar18 + 0x11) = *(char *)((int)puVar18 + 0x11) + (char)((ushort)uStack_28 >> 8);
  iVar12 = (int)puVar18 + 0xc77b;
  uVar21 = (undefined3)((uint)iVar12 >> 8);
  cRam02060000 = (char)iVar12 + '\t';
  pbVar14 = (byte *)CONCAT31(uVar21,cRam02060000);
  out(*puVar44,uStack_28);
  *pbVar14 = *pbVar14 + cRam02060000;
  puVar18 = (uint *)CONCAT22(uVar27,CONCAT11(bVar4 | *pbVar14,cVar5));
  *(int *)pbVar14 = *(int *)pbVar14 - (int)pbVar14;
  *(byte *)puStack_24 = (byte)*puStack_24 + cVar5;
  out(puVar46[3],uStack_28);
  puVar44 = puVar46 + 4;
  uVar28 = uStack_28;
  if ((POPCOUNT((byte)*puStack_24) & 1U) != 0) goto code_r0x00404cca;
  *pbVar14 = *pbVar14 + cRam02060000;
  puVar9 = (ushort *)CONCAT31(uVar21,(char)iVar12 + '{');
  uVar8 = (ushort)puVar9 | *puVar9;
  pcVar16 = (char *)CONCAT22((short)((uint)iVar12 >> 0x10),uVar8);
  bVar6 = (byte)uVar8;
  out(puVar46[4],uStack_28);
  pbVar14 = (byte *)((int)puVar18 + 1);
  bRam11060000 = bVar6;
  *pcVar16 = *pcVar16 + bVar6;
  puVar23 = (uint *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                             CONCAT11((byte)((uint)pbVar14 >> 8) | bRam110cde91,(char)pbVar14));
  pcVar16 = (char *)CONCAT31((int3)((uint)pcVar16 >> 8),bVar6 - 7);
  *puVar48 = (uint)(pcVar16 + (uint)(bVar6 < 7) + *puVar48);
  puVar44 = puVar46 + 6;
  out(puVar46[5],uStack_28);
  puVar31 = (uint *)((int)puStack_24 + 1);
  *pcVar16 = *pcVar16 + (bVar6 - 7);
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar33 | (byte)(uVar8 >> 8));
  do {
    bVar6 = (char)pcVar16 - *pcVar16;
    uVar37 = *puVar23;
    *(byte *)puVar23 = (byte)*puVar23 + bVar6;
    cVar5 = bVar6 - CARRY1((byte)uVar37,bVar6);
    *(byte *)puVar31 = *(byte *)puVar31 + cVar5;
    cVar39 = (char)((uint)puVar23 >> 8);
    *(byte *)(puVar48 + 0x673b40) = (byte)puVar48[0x673b40] + cVar39;
    puVar46 = (uint *)CONCAT31((int3)((uint)pcVar16 >> 8),cVar5);
    *(byte *)puVar46 = (byte)*puVar46 + cVar5;
    *(byte *)puVar31 = *(byte *)puVar31 + cVar5;
    puVar36[0x16] = (uint)(puVar36[0x16] + (int)puVar44);
    puVar18 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar23 >> 0x10),
                                               CONCAT11(cVar39 + (char)((uint)pcVar16 >> 8),
                                                        (char)puVar23)) >> 8),
                               (char)puVar23 + *(char *)((int)puVar46 * 2));
    *(byte *)puVar46 = (byte)*puVar46 + cVar5;
    *(byte *)puVar44 = (byte)*puVar44 + (char)puVar36;
_ctor:
    bVar4 = (byte)((uint)puVar18 >> 8);
    uVar37 = *puVar46;
    bVar6 = (byte)puVar18;
    puVar46 = (uint *)((int)puVar46 + (uint)CARRY1(bVar4,(byte)*puVar46) + *puVar46);
    *(byte *)puVar31 = *(byte *)puVar31 + bVar6;
    cVar5 = bVar6 - *(byte *)((int)puVar31 + 3);
    puVar23 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar18 >> 0x10),
                                               CONCAT11(bVar4 + (byte)uVar37,bVar6)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar31 + 3) <= bVar6) {
        *puVar46 = (uint)(*puVar46 + (int)puVar46);
        puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | (byte)*puVar36);
        puVar46 = puVar46 + 0x230e;
        puVar18 = puVar23;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
    cVar5 = (char)puVar46 + '\x02';
    pcVar16 = (char *)CONCAT31((int3)((uint)puVar46 >> 8),cVar5);
    bVar49 = (POPCOUNT(cVar5) & 1U) == 0;
    puVar18 = puVar38;
    puVar47 = puVar48;
    uVar28 = puStack_18._0_2_;
code_r0x00404ca8:
    puStack_18._0_2_ = uVar28;
    puVar38 = puStack_8;
    puVar48 = puStack_10;
    if (bVar49) break;
    *(byte *)puVar31 = *(byte *)puVar31 + (char)puVar23;
    puVar38 = puVar18;
    puVar48 = puVar47;
  } while( true );
  *pcVar16 = *pcVar16 + (char)pcVar16;
  *param_5 = *param_5 + (byte)param_5;
  puVar18 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                             CONCAT11((byte)((uint)param_4 >> 8) | *param_3,(char)param_4));
  *(byte *)ppuVar50 = (byte)*ppuVar50 + (char)ppuVar50;
  *(byte *)((int)param_5 * 2) = *(byte *)((int)param_5 * 2) ^ (byte)param_5;
  uVar3 = *(undefined6 *)param_5;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar14 = (byte *)uVar3;
  bVar4 = (byte)uVar3;
  *pbVar14 = *pbVar14 + bVar4;
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar4;
  puVar46 = (uint *)((int)puVar18 + 0x11673);
  uVar37 = *puVar46;
  uVar2 = *puVar46;
  *puVar46 = (uint)(param_3 + uVar2 + CARRY1(bVar6,bVar4));
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,puStack_18._0_2_);
  pbVar14 = pbVar14 + (uint)(CARRY4(uVar37,(uint)param_3) ||
                            CARRY4((uint)(param_3 + uVar2),(uint)CARRY1(bVar6,bVar4))) +
                      *(int *)((int)puVar18 + (int)param_3);
  puVar31 = (uint *)param_3;
  puVar36 = (uint *)ppuVar50;
  puVar44 = puStack_c;
  uVar28 = puStack_18._0_2_;
code_r0x00404cca:
  puStack_18._0_2_ = uVar28;
  cVar5 = (char)pbVar14 + '\x04';
  puVar46 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar5);
  if (SCARRY1((char)pbVar14,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
  puVar47 = puVar44 + 1;
  out(*puVar44,(short)puVar31);
  uVar37 = *puVar18;
  bVar6 = *(byte *)puVar31;
  bVar4 = (byte)puVar18;
  *(byte *)puVar31 = *(byte *)puVar31 + bVar4;
  iVar12 = (CONCAT31((int3)((uint)puVar46 >> 8),(char)puVar46 + '\x03') & uVar37) + iRam00008c38;
  *(byte *)puVar18 = (byte)*puVar18 + (char)puVar31;
  pcVar16 = (char *)(iVar12 + (uint)CARRY1(bVar6,bVar4) + 0x1246f);
  bVar6 = *(byte *)puVar31;
  uVar21 = (undefined3)((uint)puVar18 >> 8);
  puVar23 = (uint *)CONCAT31(uVar21,bVar4 | bVar6);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar16 >> 8);
  puVar46 = (uint *)(CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + *pcVar16) + 0x1fbeef2);
  uVar37 = *puVar46;
  *puVar46 = (uint)(*puVar46 + (int)puVar46);
  if (CARRY4(uVar37,(uint)puVar46)) {
    *puVar46 = (uint)(*puVar46 + (int)puVar46);
    pcVar16 = (char *)CONCAT31(uVar21,bVar4 | bVar6 | bRam00282809);
    cVar5 = (char)((uint)puVar18 >> 8);
    *(byte *)puVar36 = (byte)*puVar36 + cVar5;
    *pcVar16 = *pcVar16 - cVar5;
    *(byte *)puVar46 = *(byte *)puVar46 + (char)puVar46;
    iVar12 = (int)pcVar16 - *puVar36;
    puVar44 = puVar44 + 2;
    out(*puVar47,(short)puVar31);
    *puVar46 = (uint)(*puVar46 + (int)puVar46);
    puVar23 = (uint *)CONCAT22((short)((uint)iVar12 >> 0x10),
                               CONCAT11((byte)((uint)iVar12 >> 8) | bRambf73070b,(char)iVar12));
code_r0x00404d15:
    uVar37 = *puVar46;
    bVar6 = (byte)puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar6;
    puVar47 = puVar44 + 1;
    out(*puVar44,(short)puVar31);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar4 = bVar6 + in_AF * '\x06';
    puVar46 = (uint *)CONCAT31((int3)((uint)puVar46 >> 8),
                               bVar4 + (0x90 < (bVar4 & 0xf0) |
                                       CARRY1((byte)uVar37,bVar6) | in_AF * (0xf9 < bVar4)) * '`');
  }
  *puVar46 = (uint)(*puVar46 + (int)puVar46);
  bVar4 = (byte)puVar46 | (byte)*puVar48;
  puVar44 = puVar47 + 1;
  uVar27 = SUB42(puVar31,0);
  out(*puVar47,uVar27);
  *(byte *)puVar23 = (byte)*puVar23 - bVar4;
  bVar6 = *(byte *)puVar31;
  bVar29 = (byte)puVar23;
  *(byte *)puVar31 = *(byte *)puVar31 + bVar29;
  iVar12 = CONCAT31((int3)((uint)puVar46 >> 8),bVar4) + *puVar44 + (uint)CARRY1(bVar6,bVar29);
  pcVar16 = (char *)((int)puVar38 - *puVar31);
  uVar21 = (undefined3)((uint)iVar12 >> 8);
  cVar5 = (char)iVar12 + (byte)*puVar44 + (puVar38 < (uint *)*puVar31);
  puVar46 = (uint *)CONCAT31(uVar21,cVar5);
  bVar6 = (byte)((uint)puVar23 >> 8);
  *(byte *)puVar23 = (byte)*puVar23 - bVar6;
  *puVar46 = (uint)(*puVar46 + (int)puVar46);
  bVar29 = bVar29 | *(byte *)((int)puVar31 + (int)puVar46);
  uVar28 = (undefined2)((uint)puVar23 >> 0x10);
  if ((POPCOUNT(bVar29) & 1U) == 0) {
    *(byte *)puVar46 = (byte)*puVar46 + cVar5;
    pcVar19 = (char *)CONCAT31(uVar21,cVar5 + '\x12');
    *pcVar19 = *pcVar19 + bVar6;
    puVar46 = (uint *)CONCAT31(uVar21,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar23 >> 8),bVar29));
    bVar4 = *(byte *)puVar31;
    *(byte *)puVar31 = *(byte *)puVar31 + bVar29;
    if (!CARRY1(bVar4,bVar29)) {
      pbVar14 = (byte *)((uint)puVar46 | *puVar46);
      out(*puVar44,uVar27);
      *pbVar14 = *pbVar14 + (char)pbVar14;
      bVar4 = *pbVar14;
      piVar15 = (int *)CONCAT22(uVar28,CONCAT11(bVar6 | bVar4,bVar29));
      iVar12 = (int)pbVar14 - *piVar15;
      *(byte *)puVar31 = *(byte *)puVar31 + bVar29;
      puVar46 = puVar47 + 3;
      out(puVar47[2],uVar27);
      uRam12060000 = (undefined1)iVar12;
      *(char *)((int)piVar15 + iVar12) = *(char *)((int)piVar15 + iVar12) - (bVar6 | bVar4);
      *(byte *)puVar31 = *(byte *)puVar31 + bVar29;
      pbVar14 = (byte *)(iVar12 + -0x120edecd);
      *(byte *)puVar46 = (byte)*puVar46 + 1;
      bVar6 = *pbVar14;
      bVar4 = (byte)pbVar14;
      *pbVar14 = *pbVar14 + bVar4;
      pcVar16 = pcVar16 + ((-1 - *(int *)((int)puVar48 + 0x42)) - (uint)CARRY1(bVar6,bVar4));
      *pbVar14 = *pbVar14 + bVar4;
      bVar33 = (byte)puVar36 | (byte)((uint)pbVar14 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar14;
      bVar6 = *(byte *)puVar31;
      pcVar19 = (char *)(((uint)pbVar14 | 0x11) + 0x511072c);
      puVar44 = puVar47 + 4;
      out(*puVar46,uVar27);
      puVar31 = (uint *)((int)puVar31 + 1);
      *pcVar19 = *pcVar19 + (char)pcVar19;
      bVar4 = (byte)((uint)pcVar19 >> 8);
      puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar36 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar36 >> 8) | bVar6,bVar33)
                                                ) >> 8),bVar33 | bVar4);
      uVar21 = (undefined3)((uint)pcVar19 >> 8);
      bVar6 = (char)pcVar19 - *pcVar19;
      pcVar19 = (char *)CONCAT31(uVar21,bVar6);
      *pcVar19 = *pcVar19 + bVar6;
      *(int *)((int)pcVar19 * 2) = (int)(*(int *)((int)pcVar19 * 2) + (int)puVar36);
      *(byte *)puVar31 = *(byte *)puVar31 + bVar6;
      *pcVar16 = *pcVar16 + bVar4;
      in_AF = 9 < (bVar6 & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar21,bVar6 + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar37;
      pbVar14 = (byte *)CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar4 + in_AF,bVar6));
      *(byte *)puVar44 = (byte)*puVar44 + bVar29;
      *pbVar14 = *pbVar14 + bVar6;
      *pbVar14 = *pbVar14 + bVar6;
      bVar49 = CARRY1(bVar6,*pbVar14);
      puVar46 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar6 + *pbVar14);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar36 = (byte)*puVar36 - (char)puVar31;
  }
  *(byte *)puVar46 = (byte)*puVar46 + (char)puVar46;
  bVar49 = false;
  piVar15 = (int *)CONCAT22(uVar28,CONCAT11(bVar6 | *(byte *)puVar31,bVar29));
code_r0x00404d9a:
  do {
    pbVar13 = (byte *)puVar31;
    *puVar46 = (*puVar46 - (int)puVar46) - (uint)bVar49;
    bVar6 = (byte)((uint)piVar15 >> 8);
    uVar28 = (undefined2)((uint)piVar15 >> 0x10);
    bVar4 = (byte)piVar15;
    bVar29 = bVar6 + (byte)iRam00000c00;
    pbVar14 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar6,(byte)iRam00000c00));
    *pbVar13 = *pbVar13 + bVar4;
    puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 - (byte)*puVar44);
    bVar6 = *pbVar14;
    puVar46 = (uint *)(pbVar14 + (uint)CARRY1(bVar29,*pbVar14) + *(int *)pbVar14);
    *pbVar13 = *pbVar13 + bVar4;
    cVar39 = ((bVar29 + bVar6) - *pbVar13) + (byte)*puVar46;
    pcVar19 = (char *)CONCAT22(uVar28,CONCAT11(cVar39,bVar4));
    puVar31 = puVar48 + 1;
    uVar37 = in((short)pbVar13);
    *puVar48 = uVar37;
    cVar5 = (char)puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + cVar5;
    uVar21 = (undefined3)((uint)pbVar13 >> 8);
    bVar29 = (byte)pbVar13 | (byte)*puVar44;
    pcVar24 = (char *)CONCAT31(uVar21,bVar29);
    *pcVar19 = *pcVar19 + '\x01';
    bVar6 = (cVar39 - *pcVar24) + (byte)*puVar46;
    pcVar19 = (char *)CONCAT22(uVar28,CONCAT11(bVar6,bVar4));
    puVar48 = puVar48 + 2;
    uVar37 = in((short)pcVar24);
    *puVar31 = uVar37;
    *(byte *)puVar46 = (byte)*puVar46 + cVar5;
    bVar29 = bVar29 | (byte)*puVar44;
    puVar31 = (uint *)CONCAT31(uVar21,bVar29);
    *pcVar19 = *pcVar19 + '\x01';
    bVar49 = bVar4 < *(byte *)((int)puVar31 + 2);
    cVar39 = bVar4 - *(byte *)((int)puVar31 + 2);
    piVar15 = (int *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar39);
  } while ((POPCOUNT(cVar39) & 1U) != 0);
  *(byte *)puVar46 = (byte)*puVar46 + cVar5;
  bVar4 = cVar5 + 0x7b;
  pbVar14 = (byte *)CONCAT31((int3)((uint)puVar46 >> 8),bVar4);
  *(byte *)((int)puVar36 + (int)pbVar14) = *(byte *)((int)puVar36 + (int)pbVar14) + bVar4;
  puVar46 = puVar44 + 1;
  uVar27 = SUB42(puVar31,0);
  out(*puVar44,uVar27);
  pbVar35 = (byte *)((int)puVar36 + -1);
  *pbVar14 = *pbVar14 + bVar4;
  bVar6 = bVar6 | *(byte *)puVar31;
  piVar15 = (int *)CONCAT22(uVar28,CONCAT11(bVar6,cVar39));
  *pbVar14 = *pbVar14 + bVar4;
  *pbVar35 = *pbVar35 + bVar29;
  *pbVar35 = *pbVar35 ^ bVar4;
  *(byte *)puVar31 = *(byte *)puVar31 + bVar6;
  *pbVar14 = *pbVar14 + bVar4;
  do {
    bVar26 = (byte)((uint)piVar15 >> 8);
    *(byte *)puVar48 = (byte)*puVar48 + bVar26;
    bVar6 = *pbVar14;
    bVar4 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar4;
    *(byte **)((int)puVar36 + 0x17) =
         (byte *)((int)puVar46 + (uint)CARRY1(bVar6,bVar4) + *(int *)((int)puVar36 + 0x17));
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    uVar22 = (undefined3)((uint)pbVar14 >> 8);
    bVar4 = bVar4 | (byte)*puVar46;
    puVar48 = (uint *)((int)puVar48 + *(int *)(pcVar16 + -0x34));
    *(char *)CONCAT31(uVar22,bVar4) = *(char *)CONCAT31(uVar22,bVar4) + bVar4;
    bVar6 = bVar4 + 2;
    cVar5 = (char)((uint)pbVar13 >> 8);
    bVar33 = (byte)piVar15;
    if ((POPCOUNT(bVar6) & 1U) != 0) {
      pbVar14 = (byte *)CONCAT31(uVar22,bVar4 + 0x15 + (0xfd < bVar4));
      if (0xec < bVar6 || CARRY1(bVar4 + 0x15,0xfd < bVar4)) {
        *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      }
code_r0x00404e60:
      pcVar16 = pcVar16 + -*puVar31;
      bVar6 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      pbVar13 = (byte *)((int)puVar46 + (-(uint)CARRY1(bVar6,(byte)pbVar14) - *(int *)pbVar14));
      pbVar14 = pbVar14 + *(int *)pbVar14;
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      *(char *)piVar15 = (char)*piVar15 + cVar5;
      bVar6 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)pbVar14;
      *(byte **)(pbVar35 + (int)puVar31) =
           (byte *)((int)puVar31 +
                   (uint)CARRY1(bVar6,(byte)pbVar14) + *(int *)(pbVar35 + (int)puVar31));
      pbVar14 = pbVar14 + 0x73061314;
      *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
      uVar22 = (undefined3)((uint)piVar15 >> 8);
      bVar33 = bVar33 | *(byte *)puVar31;
      pcVar24 = (char *)CONCAT31(uVar22,bVar33);
      *pbVar14 = *pbVar14 + (char)pbVar14;
      cVar5 = (char)pbVar14 + 'o';
      pcVar19 = (char *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar5);
      *pcVar19 = *pcVar19 + cVar5;
      out(*(undefined4 *)pbVar13,uVar27);
      bVar6 = *(byte *)puVar31;
      *(byte *)puVar31 = *(byte *)puVar31 + bVar33;
      pcVar19 = pcVar19 + (uint)CARRY1(bVar6,bVar33) + *puVar48;
      *pcVar19 = *pcVar19 + (char)pcVar19;
      *pcVar24 = *pcVar24 + bVar29;
      puVar46 = (uint *)(pbVar13 + 8);
      out(*(undefined4 *)(pbVar13 + 4),uVar27);
      *(byte *)puVar31 = *(byte *)puVar31 + bVar33;
      piVar15 = (int *)((uint)pcVar19 | *puVar48);
      pcVar24[0x390a0000] = pcVar24[0x390a0000] - bVar26;
      pbVar13 = (byte *)0x7000000;
      *(byte *)puVar48 = (byte)*puVar48 - bVar26;
      *piVar15 = *piVar15 + (int)piVar15;
      puVar44 = (uint *)CONCAT31(uVar22,bVar33 | *(byte *)((int)piVar15 + (int)pcVar24));
      *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) - bVar26;
      cRam07000000 = cRam07000000 + bVar26;
      piVar15 = (int *)((uint)piVar15 | 0x777b02);
      pbVar14 = (byte *)((int)puVar48 + (int)pcVar16 * 2);
      bVar49 = SCARRY1(*pbVar14,(char)piVar15);
      *pbVar14 = *pbVar14 + (char)piVar15;
      bVar6 = *pbVar14;
      *(char *)piVar15 = (char)*piVar15;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
    bVar4 = bVar4 + 0x71;
    pbVar14 = (byte *)CONCAT31(uVar22,bVar4);
    *pbVar14 = *pbVar14;
    *(byte *)puVar46 = (byte)*puVar46 + 1;
    *piVar15 = (*piVar15 - (int)pbVar14) - (uint)(0x90 < bVar6);
    uVar37 = *puVar46;
    *(byte *)puVar46 = (byte)*puVar46 + bVar4;
    if (!CARRY1((byte)uVar37,bVar4)) goto code_r0x00404e60;
    *pbVar14 = *pbVar14 + bVar4;
    uVar28 = (undefined2)((uint)piVar15 >> 0x10);
    bVar26 = bVar26 | *pbVar14;
    pbVar14 = pbVar14 + -*(int *)pbVar14;
    *pbVar35 = *pbVar35 + bVar26;
    cVar39 = bVar33 - *(byte *)((int)puVar31 + 2);
    piVar15 = (int *)CONCAT31((int3)(CONCAT22(uVar28,CONCAT11(bVar26,bVar33)) >> 8),cVar39);
  } while ((POPCOUNT(cVar39) & 1U) != 0);
  cVar7 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar7;
  uVar22 = (undefined3)((uint)pbVar14 >> 8);
  pcVar19 = (char *)CONCAT31(uVar22,cVar7 + '{');
  out(*puVar46,uVar27);
  *pcVar19 = *pcVar19 + cVar7 + '{';
  bVar4 = cVar7 + 0x7e;
  pbVar14 = (byte *)CONCAT31(uVar22,bVar4);
  puVar46 = puVar44 + 3;
  out(puVar44[2],uVar27);
  pbVar13 = (byte *)((int)puVar36 + -2);
  *pbVar14 = *pbVar14 + bVar4;
  bVar6 = *(byte *)puVar31;
  puVar44 = (uint *)CONCAT22(uVar28,CONCAT11(bVar26 | bVar6,cVar39));
  *pbVar14 = *pbVar14 + bVar4;
  *pbVar13 = *pbVar13 + bVar29;
  *pbVar13 = *pbVar13 ^ bVar4;
  *(byte *)puVar31 = *(byte *)puVar31 + (bVar26 | bVar6);
  *pbVar14 = *pbVar14 + bVar4;
  *pbVar14 = *pbVar14 + cVar5;
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar4;
  puVar36[6] = (uint)((int)puVar46 + (uint)CARRY1(bVar6,bVar4) + puVar36[6]);
  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
  bVar4 = bVar4 | (byte)*puVar46;
  puVar48 = (uint *)((int)puVar48 + *(int *)(pcVar16 + -0x33));
  *(char *)CONCAT31(uVar22,bVar4) = *(char *)CONCAT31(uVar22,bVar4) + bVar4;
  bVar49 = SCARRY1(bVar4,'\x02');
  bVar6 = bVar4 + 2;
  piVar15 = (int *)CONCAT31(uVar22,bVar6);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    return CONCAT31(uVar22,bVar4 + 0x71);
  }
code_r0x00404ebf:
  bVar4 = (byte)piVar15;
  uVar22 = (undefined3)((uint)piVar15 >> 8);
  if (bVar6 != 0 && bVar49 == (char)bVar6 < '\0') {
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    puVar46[(int)puVar48 * 2] =
         (uint)((int)puVar31 + (uint)(0xd2 < bVar4) + puVar46[(int)puVar48 * 2]);
    return CONCAT31(uVar22,bVar4 + 0x2d);
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar6 = *pbVar13;
  *puVar46 = (uint)(*puVar46 + (int)piVar15);
  bVar33 = (byte)((uint)puVar44 >> 8);
  *(byte *)piVar15 = (char)*piVar15 - bVar33;
  *(byte *)piVar15 = (char)*piVar15 + bVar4;
  pbVar14 = (byte *)(CONCAT31(uVar21,bVar29 | bVar6) - *(int *)pbVar13);
  puVar38 = (uint *)CONCAT31(uVar22,bVar4 + 6);
  *(uint *)(pbVar13 + (int)puVar46 * 2) =
       (int)puVar38 + (uint)(0xf9 < bVar4) + *(int *)(pbVar13 + (int)puVar46 * 2);
  *(byte *)puVar44 = (byte)*puVar44 ^ bVar4 + 6;
  bVar4 = (byte)puVar44;
  *pbVar14 = *pbVar14 + bVar4;
  puVar31 = puVar46 + 1;
  uVar28 = SUB42(pbVar14,0);
  out(*puVar46,uVar28);
  *puVar44 = *puVar44 ^ (uint)puVar38;
  *pbVar14 = *pbVar14 + bVar4;
  puVar36 = (uint *)(pbVar13 + -*(int *)pbVar13);
  *(uint *)((int)puVar48 + 0x31) = *(uint *)((int)puVar48 + 0x31) | (uint)pcVar16;
  *puVar38 = *puVar38 + (int)puVar38;
  puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar33 | (byte)*puVar36,bVar4))
  ;
  *(byte **)(pbVar14 + 0x6e) = (byte *)(*(int *)(pbVar14 + 0x6e) + (int)puVar31);
  piVar15 = (int *)((uint)puVar38 | *puVar38);
  bVar29 = (byte)puVar36;
  *(byte *)puVar48 = (byte)*puVar48 - bVar29;
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar4;
  if (CARRY1(bVar6,bVar4)) {
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    bVar6 = pbVar14[0x11];
    uVar27 = (undefined2)((uint)puVar36 >> 0x10);
    out(*puVar31,uVar28);
    puVar44 = (uint *)((int)puVar44 + 1);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    bVar30 = (byte)((uint)puVar36 >> 8) | bVar6 | *pbVar14;
    pcVar19 = (char *)((int)piVar15 + -0x21000001);
    bVar6 = (byte)pcVar19 | 0x11;
    uVar21 = (undefined3)((uint)pcVar19 >> 8);
    cVar5 = bVar6 - 7;
    pcVar24 = (char *)CONCAT31(uVar21,cVar5);
    *puVar48 = (uint)(pcVar24 + (uint)(bVar6 < 7) + *puVar48);
    puVar31 = puVar46 + 3;
    out(puVar46[2],uVar28);
    pbVar14 = pbVar14 + 1;
    *pcVar24 = *pcVar24 + cVar5;
    bVar33 = (byte)((uint)pcVar19 >> 8);
    bVar26 = bVar29 | bVar33;
    bVar4 = cVar5 - *pcVar24;
    bVar6 = *(byte *)puVar44;
    *(byte *)puVar44 = *(byte *)puVar44 + bVar4;
    *(char *)CONCAT31(uVar21,bVar4) = *(char *)CONCAT31(uVar21,bVar4) + bVar4 + CARRY1(bVar6,bVar4);
    *pbVar14 = *pbVar14 + bVar4;
    *(byte *)puVar31 = (byte)*puVar31 + bVar26;
    bVar6 = (byte)((uint)pbVar14 >> 8);
    *(byte *)puVar44 = *(byte *)puVar44 + bVar4 + CARRY1((byte)pbVar14,bVar6);
    piVar15 = (int *)CONCAT31(uVar21,bVar4);
    *(byte *)piVar15 = (char)*piVar15 + bVar4;
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                               CONCAT11(bVar6 + bVar33,(byte)pbVar14 + bVar6));
    puVar36 = (uint *)CONCAT22(uVar27,CONCAT11(bVar30 + *(char *)(CONCAT31((int3)(CONCAT22(uVar27,
                                                  CONCAT11(bVar30,bVar29)) >> 8),bVar26) + 0x76),
                                               bVar26));
    puStack_18._0_2_ = puStack_24._0_2_;
code_r0x00404fa4:
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    pcVar19 = (char *)(CONCAT31((int3)((uint)piVar15 >> 8),(char)piVar15 + '(') ^ *puVar44);
    cVar7 = (char)puVar44;
    *pbVar14 = *pbVar14 + cVar7;
    uVar28 = (undefined2)((uint)puVar36 >> 0x10);
    cVar34 = (char)puVar36;
    cVar40 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x75);
    *pcVar19 = *pcVar19 + (char)pcVar19;
    cVar5 = (char)pcVar19 + 'o';
    pcVar19 = (char *)CONCAT31((int3)((uint)pcVar19 >> 8),cVar5);
    *pcVar19 = *pcVar19 + cVar5;
    cVar41 = (char)((uint)puVar44 >> 8);
    *pcVar16 = *pcVar16 - cVar41;
    pbVar14[1] = pbVar14[1] + cVar7;
    pcVar19 = pcVar19 + -0x757b021b;
    cVar5 = (char)pcVar19;
    *pcVar19 = *pcVar19 + cVar5;
    uVar21 = (undefined3)((uint)pcVar19 >> 8);
    cVar39 = cVar5 + 'o';
    pcVar19 = (char *)CONCAT31(uVar21,cVar39);
    pbVar35 = pbVar14 + 2;
    *pcVar19 = *pcVar19 + cVar39;
    iVar12 = CONCAT22(uVar28,CONCAT11(cVar40 + *(char *)(CONCAT22(uVar28,CONCAT11(cVar40,cVar34)) +
                                                        0x76),cVar34));
    *pcVar19 = *pcVar19 + cVar39;
    pcVar19 = (char *)CONCAT31(uVar21,cVar5 + -0x22);
    puVar46 = (uint *)((int)puVar48 + 1);
    *(byte *)puVar48 = (byte)*puVar31;
    *pcVar19 = *pcVar19 + cVar5 + -0x22;
    *(byte *)((int)puVar44 + (int)pcVar19) =
         *(byte *)((int)puVar44 + (int)pcVar19) - (char)((uint)pbVar35 >> 8);
    *pbVar35 = *pbVar35 + cVar7;
    bVar4 = cVar41 - pbVar14[4];
    pbVar13 = (byte *)((int)puVar31 + 5);
    out(*(undefined4 *)((int)puVar31 + 1),(short)pbVar35);
    puVar48 = (uint *)((uint)(pcVar19 + *(int *)(pcVar19 + iVar12)) ^ 0x280a0001);
    *(byte *)puVar48 = (byte)*puVar48 << 1 | (char)(byte)*puVar48 < '\0';
    *pbVar13 = *pbVar13 + (char)puVar48;
    pbVar13 = pbVar13 + *(int *)(pbVar14 + -0x5c);
    pbVar14 = (byte *)((uint)puVar48 | *puVar48);
    *pbVar13 = *pbVar13 + (char)pbVar14;
    puVar36 = (uint *)CONCAT31((int3)((uint)iVar12 >> 8),cVar34 - (char)pbVar35);
    bVar6 = *pbVar14;
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar4 + *pbVar14,cVar7));
    iVar12 = *(int *)pbVar14;
    *pbVar35 = *pbVar35 + cVar7;
    cVar5 = (char)(pbVar14 + (uint)CARRY1(bVar4,bVar6) + iVar12) + 'r';
    puVar48 = (uint *)CONCAT31((int3)((uint)(pbVar14 + (uint)CARRY1(bVar4,bVar6) + iVar12) >> 8),
                               cVar5);
    pbVar14 = (byte *)CONCAT22((short)((uint)pbVar35 >> 0x10),CONCAT11(10,(char)pbVar35));
    *(char *)(puVar48 + 10) = (char)puVar48[10] + '\n';
    *pbVar13 = *pbVar13 + cVar5;
    puVar31 = (uint *)(pbVar13 + *(int *)(pbVar14 + -0x5e));
    uVar37 = *puVar48;
    cVar5 = (char)((uint)puVar48 | uVar37);
    *(byte *)puVar31 = (byte)*puVar31 + cVar5;
    uVar21 = (undefined3)(((uint)puVar48 | uVar37) >> 8);
    cVar39 = cVar5 + (byte)*puVar36;
    puVar48 = (uint *)CONCAT31(uVar21,cVar39);
    if (SCARRY1(cVar5,(byte)*puVar36) == cVar39 < '\0') goto code_r0x00405090;
    *(byte *)puVar48 = (byte)*puVar48 + cVar39;
    piVar15 = (int *)CONCAT31(uVar21,cVar39 + '\x02');
    puVar48 = puVar46;
  }
  else {
    out(2,(char)piVar15);
    if ((POPCOUNT(*pbVar14) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar21 = (undefined3)((uint)piVar15 >> 8);
  cVar5 = (char)piVar15 + '}';
  pbVar13 = (byte *)CONCAT31(uVar21,cVar5);
  pbVar14[(int)pbVar13] = pbVar14[(int)pbVar13] + cVar5;
  pbVar14[0x280a0000] = pbVar14[0x280a0000] - (char)((uint)piVar15 >> 8);
  bVar6 = (byte)puVar44 & 7;
  *pbVar13 = *pbVar13 << bVar6 | *pbVar13 >> 8 - bVar6;
  *(byte *)puVar31 = (byte)*puVar31 + cVar5;
  cVar7 = (char)puVar36 - (byte)*puVar31;
  uVar28 = (undefined2)((uint)puVar36 >> 0x10);
  cVar41 = (char)((uint)puVar36 >> 8) + *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar7) + 0x7c)
  ;
  pcVar19 = (char *)CONCAT22(uVar28,CONCAT11(cVar41,cVar7));
  *pbVar13 = *pbVar13 + cVar5;
  bVar4 = (char)piVar15 + 0xa7U & *pbVar14;
  puVar46 = (uint *)((int)puVar48 + *(int *)(pcVar16 + 0x7c));
  *(char *)CONCAT31(uVar21,bVar4) = *(char *)CONCAT31(uVar21,bVar4) + bVar4;
  bVar4 = bVar4 + 0x2a;
  pbVar13 = (byte *)CONCAT31(uVar21,bVar4);
  *pbVar13 = *pbVar13 + bVar4;
  *pcVar19 = *pcVar19 + cVar7;
  *pbVar14 = *pbVar14 ^ bVar4;
  *pcVar19 = *pcVar19 + bVar4;
  bVar6 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar4;
  cVar5 = (bVar4 - *pbVar13) - CARRY1(bVar6,bVar4);
  *(byte *)puVar44 = (byte)*puVar44 + (byte)pbVar14;
  cVar41 = cVar41 + pcVar19[0x7b];
  *(char *)CONCAT31(uVar21,cVar5) = *(char *)CONCAT31(uVar21,cVar5) + cVar5;
  pcVar19 = (char *)CONCAT31(uVar21,cVar5 + 'o');
  *pcVar19 = *pcVar19 + cVar5 + 'o';
  pcVar19 = pcVar19 + 0x2ed7fde6;
  cVar39 = (char)pcVar19;
  *pcVar19 = *pcVar19 + cVar39;
  cVar5 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar41,cVar7)) + 0x7b);
  *pcVar19 = *pcVar19 + cVar39;
  piVar15 = (int *)(CONCAT31((int3)((uint)pcVar19 >> 8),cVar39 + 'o') + 0x6f060000);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar22 = (undefined3)((uint)pbVar14 >> 8);
  bVar4 = (byte)pbVar14 | (byte)*puVar31;
  pbVar35 = (byte *)CONCAT31(uVar22,bVar4);
  uVar37 = CONCAT22(uVar28,CONCAT11(cVar41 + cVar5,cVar7)) | (uint)puVar31;
  uVar21 = (undefined3)((uint)piVar15 >> 8);
  bVar6 = (byte)piVar15 | *pbVar35;
  pbVar13 = (byte *)CONCAT31(uVar21,bVar6);
  cVar5 = (byte)puVar44 - bVar4;
  puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),cVar5);
  *pbVar13 = *pbVar13 + bVar6;
  puVar48 = puVar31 + 1;
  out(*puVar31,(short)pbVar35);
  *pbVar13 = bVar6;
  *pbVar35 = *pbVar35 + cVar5;
  puVar31 = puVar31 + 2;
  out(*puVar48,(short)pbVar35);
  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
  puVar36 = (uint *)(CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - (char)((uint)pbVar14 >> 8)) |
                    (uint)puVar31);
  pbVar14 = (byte *)CONCAT31(uVar22,(bVar4 | (byte)*puVar31) + (byte)*puVar46);
  cVar5 = bVar6 - (byte)*puVar46;
  puVar48 = (uint *)CONCAT31(uVar21,cVar5 - *(char *)CONCAT31(uVar21,cVar5));
code_r0x00405090:
  *puVar48 = (uint)(pbVar14 + *puVar48);
  cVar5 = (char)puVar48;
  *(byte *)puVar48 = (byte)*puVar48 + cVar5;
  *(byte *)puVar48 = (byte)*puVar48 + cVar5;
  *(byte *)puVar48 = (byte)*puVar48 + cVar5;
  *puVar44 = *puVar44 - (int)pcVar16;
  uVar37 = *puVar31;
  bVar6 = (byte)pbVar14;
  *(byte *)puVar31 = (byte)*puVar31 + bVar6;
  *(byte *)puVar48 = (byte)*puVar48 + cVar5 + CARRY1((byte)uVar37,bVar6);
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  uVar37 = *puVar36;
  *(byte *)puVar36 = (byte)*puVar36 + 0x72;
  *(byte *)puVar36 = (byte)*puVar36;
  cVar5 = (char)((uint)pbVar14 >> 8);
  if (SCARRY1((byte)uVar37,'r')) {
    puVar31 = (uint *)((int)puVar31 + *(int *)(pbVar14 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar31 = (byte)*puVar31 + (char)puVar48;
      uVar21 = (undefined3)((uint)puVar48 >> 8);
      cVar39 = (char)puVar48 + (byte)*puVar36;
      pcVar19 = (char *)CONCAT31(uVar21,cVar39);
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) +
                                          *(byte *)((int)puVar36 + 0x7b),(char)puVar36));
      *pcVar19 = *pcVar19 + cVar39;
      in_AF = 9 < (cVar39 + 0x6fU & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar21,cVar39 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar29 = (byte)uVar37;
      piVar15 = (int *)CONCAT22((short)(uVar37 >> 0x10),
                                CONCAT11((char)((uint)puVar48 >> 8) + in_AF,bVar29));
      *piVar15 = *piVar15 + (int)piVar15;
      uVar21 = (undefined3)((uint)piVar15 >> 8);
      bVar29 = bVar29 | *(byte *)(piVar15 + 0x354a);
      bVar29 = bVar29 - *(char *)CONCAT31(uVar21,bVar29);
      pbVar13 = (byte *)CONCAT31(uVar21,bVar29);
      bVar4 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar29;
      puVar31 = (uint *)((int)puVar31 + (-(uint)CARRY1(bVar4,bVar29) - *(int *)pbVar13));
      puVar48 = (uint *)(pbVar13 + 0xfc00);
      *pbVar14 = *pbVar14 + cVar5;
      uVar37 = *puVar48;
      bVar4 = (byte)puVar48;
      *(byte *)puVar48 = (byte)*puVar48 + bVar4;
      uVar17 = (uint)CARRY1((byte)uVar37,bVar4);
      uVar2 = *puVar36;
      uVar37 = *puVar36;
      *puVar36 = (uint)((byte *)(uVar37 + (int)puVar48) + uVar17);
      if (!CARRY4(uVar2,(uint)puVar48) && !CARRY4(uVar37 + (int)puVar48,uVar17)) break;
      *(byte *)puVar48 = (byte)*puVar48 + bVar4;
    }
  }
  uVar37 = (uint)puVar48 | *puVar48;
  uVar28 = SUB42(pbVar14,0);
  *(byte *)puVar31 = (byte)*puVar31 + (char)uVar37;
  piVar15 = (int *)(uVar37 + 0xc1872);
  if (SCARRY4(uVar37,0xc1872)) {
    cVar39 = (char)piVar15;
    *(char *)piVar15 = *(char *)piVar15 + cVar39;
    *pbVar14 = *pbVar14 + cVar39;
    *(char *)piVar15 = *(char *)piVar15 + cVar39;
    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar44;
    *(char *)piVar15 = *(char *)piVar15 + cVar39;
    *(char *)((int)piVar15 * 2) = *(char *)((int)piVar15 * 2) + bVar6;
    puVar48 = puVar31;
    goto code_r0x00405117;
  }
  do {
    uVar37 = *puVar31;
    bVar6 = (byte)piVar15;
    *(byte *)puVar31 = (byte)*puVar31 + bVar6;
    if (CARRY1((byte)uVar37,bVar6)) {
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      uVar21 = (undefined3)((uint)puVar44 >> 8);
      bVar4 = (byte)puVar44 | bRam396f1609;
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      puVar44 = (uint *)CONCAT31(uVar21,bVar4 | *(byte *)CONCAT31(uVar21,bVar4));
      uVar21 = (undefined3)((uint)piVar15 >> 8);
      bVar6 = bVar6 | *pbVar14;
      pcVar19 = (char *)CONCAT31(uVar21,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        puVar48 = puVar31 + 1;
        out(*puVar31,uVar28);
        uVar37 = CONCAT22((short)((uint)piVar15 >> 0x10),(ushort)bVar6);
        *(byte *)puVar48 = (byte)*puVar48 + bVar6;
        pcVar19 = (char *)(uVar37 | 8);
        cVar39 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x7a);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(cVar39,(char)puVar36));
        *pcVar19 = *pcVar19 + (char)pcVar19;
        cVar5 = (char)pcVar19 + 'o';
        piVar15 = (int *)CONCAT31((int3)(uVar37 >> 8),cVar5);
        *(char *)piVar15 = (char)*piVar15 + cVar5;
        *(byte *)puVar44 = (byte)*puVar44 + 1;
        puVar31 = puVar31 + 2;
        out(*puVar48,uVar28);
        pbVar14 = (byte *)((uint)pbVar14 ^ uRam08122c04);
        iVar12 = CONCAT31((int3)((uint)(*piVar15 * 0x17070600) >> 8),2);
        *(char *)(iVar12 * 2) = *(char *)(iVar12 * 2) - cVar39;
        do {
          bVar6 = (byte)iVar12;
          *(byte *)puVar31 = (byte)*puVar31 + bVar6;
          bVar49 = CARRY1(bVar6,(byte)*puVar38);
          uVar21 = (undefined3)((uint)iVar12 >> 8);
          cVar5 = bVar6 + (byte)*puVar38;
          pbVar13 = (byte *)CONCAT31(uVar21,cVar5);
          uVar28 = in_DS;
          uVar27 = uStack_64;
          if (SCARRY1(bVar6,(byte)*puVar38) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar13 = *pbVar13 + cVar5;
          uVar37 = CONCAT31(uVar21,cVar5 + '\'') + 0x1ebd9f3;
          uStack_68 = (undefined1)puStack_18._0_2_;
          uStack_67 = (undefined1)((ushort)puStack_18._0_2_ >> 8);
          piVar15 = (int *)(uVar37 ^ 0x73060000);
          puVar44 = (uint *)((int)puVar44 + 1);
          *piVar15 = (int)(*piVar15 + (int)piVar15);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | pcVar16[0x7e],
                                              (char)puVar38));
          cVar5 = (char)uVar37;
          *(char *)piVar15 = (char)*piVar15 + cVar5;
          uVar37 = CONCAT31((int3)((uint)piVar15 >> 8),cVar5 + '\x02');
          bVar49 = 0xd9f2d2da < uVar37;
          iVar12 = uVar37 + 0x260d2d25;
          pcVar19 = pcVar16;
          do {
            uVar21 = (undefined3)((uint)iVar12 >> 8);
            bVar4 = (char)iVar12 + -2 + bVar49;
            pbVar13 = (byte *)CONCAT31(uVar21,bVar4);
            bVar6 = *pbVar13;
            *pbVar13 = *pbVar13 + bVar4;
            bVar29 = (byte)puVar38;
            uStack_64 = puStack_18._0_2_;
            if (CARRY1(bVar6,bVar4)) {
              *pbVar13 = *pbVar13 + bVar4;
              puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                         CONCAT11((byte)((uint)puVar38 >> 8) | pcVar19[0x7f],bVar29)
                                        );
              *pbVar13 = *pbVar13 + bVar4;
              pbVar13 = (byte *)CONCAT31(uVar21,bVar4 + 0x2a);
              *pbVar13 = *pbVar13 + bVar4 + 0x2a;
              *(byte *)puVar38 = (byte)*puVar38 + (char)pbVar14;
              uVar28 = in_DS;
              while( true ) {
                in_DS = uVar28;
                bVar4 = (byte)pbVar13;
                *pbVar14 = *pbVar14 ^ bVar4;
                *pbVar14 = *pbVar14 + (char)puVar38;
                *pbVar13 = *pbVar13 + bVar4;
                *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pbVar14 >> 8);
                bVar6 = *pbVar13;
                *pbVar13 = *pbVar13 + bVar4;
                uVar37 = *puVar38;
                uVar2 = *puVar38;
                *puVar38 = (uint)(pbVar13 + uVar2 + CARRY1(bVar6,bVar4));
                uVar21 = (undefined3)((uint)pbVar13 >> 8);
                if (CARRY4(uVar37,(uint)pbVar13) ||
                    CARRY4((uint)(pbVar13 + uVar2),(uint)CARRY1(bVar6,bVar4))) break;
                *(byte *)puVar31 = (byte)*puVar31 + bVar4;
                pcVar24 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                           CONCAT11((char)((uint)puVar44 >> 8) + *pbVar13,
                                                    (char)puVar44));
                *(byte *)puVar31 = (byte)*puVar31 + bVar4;
                piVar15 = (int *)CONCAT31(uVar21,bVar4 | (byte)*puVar38);
                puVar48 = puVar31;
                while( true ) {
                  puVar31 = puVar48 + 1;
                  out(*puVar48,(short)pbVar14);
                  pbVar14 = pbVar14 + 1;
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  bVar29 = (byte)((uint)pcVar24 >> 8) | *pbVar14;
                  uVar21 = (undefined3)((uint)piVar15 >> 8);
                  bVar4 = (byte)piVar15 ^ *pbVar14;
                  pcVar20 = (char *)CONCAT31(uVar21,bVar4);
                  cRam282b0000 = cRam282b0000 - bVar29;
                  *pcVar20 = *pcVar20 + bVar4;
                  pcVar16 = pcVar19 + -*(int *)pbVar14;
                  uStack_68 = (undefined1)in_DS;
                  uStack_67 = (undefined1)((ushort)in_DS >> 8);
                  bVar6 = *(byte *)((int)puVar46 + 0x17);
                  *pcVar20 = *pcVar20 + bVar4;
                  puVar44 = (uint *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                                             CONCAT11(bVar29 + bVar6 | *pbVar14,(char)pcVar24));
                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
                  *(byte *)((int)pcVar20 * 2) = *(byte *)((int)pcVar20 * 2) ^ bVar4;
                  in_AF = 9 < (bVar4 & 0xf) | in_AF;
                  bVar4 = bVar4 + in_AF * -6;
                  pbVar13 = (byte *)CONCAT31(uVar21,bVar4 + (0x9f < bVar4 | in_AF * (bVar4 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
                  *(char *)((int)pbVar13 * 2) =
                       *(char *)((int)pbVar13 * 2) + (char)((uint)pbVar14 >> 8);
                  bVar49 = CARRY1((byte)*puVar44,(byte)pbVar14);
                  *(byte *)puVar44 = (byte)*puVar44 + (byte)pbVar14;
                  uVar28 = in_DS;
                  uVar27 = puStack_18._0_2_;
GenerateStatusText:
                  in_DS = uVar27;
                  pcVar19 = pcVar16;
                  uStack_64 = in_DS;
                  if (!bVar49) break;
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  iVar12 = CONCAT31((int3)((uint)puVar44 >> 8),(byte)puVar44 | *pbVar14);
                  uVar28 = (undefined2)((uint)puVar38 >> 0x10);
                  cVar7 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7d);
                  *pbVar13 = *pbVar13 + (char)pbVar13;
                  *(byte *)puVar46 = (byte)*puVar46 - (char)((uint)puVar44 >> 8);
                  iVar12 = iVar12 - *(int *)(iVar12 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar28,CONCAT11(cVar7,(char)puVar38)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar31,(short)pbVar14);
                  pbVar14 = (byte *)CONCAT22(uStack_66,CONCAT11(uStack_67,uStack_68));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar48 = puVar31 + 2;
                  out(puVar31[1],CONCAT11(uStack_67,uStack_68));
                  pcVar19 = pcVar16 + 1;
                  cVar39 = (char)iVar12;
                  pcVar24 = (char *)CONCAT22((short)((uint)iVar12 >> 0x10),
                                             CONCAT11((byte)((uint)iVar12 >> 8) |
                                                      *(byte *)((int)puVar46 + 0x46),cVar39));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  puStack_18._0_2_ = CONCAT11(uStack_67,uStack_68);
                  uVar21 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar48,0xf0)) >> 8);
                  piVar15 = (int *)CONCAT31(uVar21,0x5f);
                  puVar46 = (uint *)((int)puVar46 + 1);
                  *piVar15 = (int)(*piVar15 + (int)piVar15);
                  puVar38 = (uint *)CONCAT22(uVar28,CONCAT11(cVar7 + cVar5 | (byte)puVar31[-0x1e],
                                                             (char)puVar38));
                  *(char *)piVar15 = (char)*piVar15 + '_';
                  puVar31 = (uint *)CONCAT31(uVar21,0x8c);
                  puVar48[(int)puVar46 * 2] = (uint)(pbVar14 + puVar48[(int)puVar46 * 2]);
                  uVar37 = *puVar48;
                  *(byte *)puVar48 = (byte)*puVar48 + 0x8c;
                  if ((byte)uVar37 < 0x74) {
                    *pbVar14 = *pbVar14 + cVar39;
                    *(byte *)puVar38 = (byte)*puVar38 >> 1;
                    *(char *)puVar31 = (char)*puVar31 + -0x74;
                    *puVar31 = (uint)(pcVar19 + *puVar31);
                    *puVar31 = *puVar31 << 1 | (uint)((int)*puVar31 < 0);
                    *pbVar14 = *pbVar14 + cVar39;
                    pcVar16[2] = pcVar16[2] - cVar39;
                    *pbVar14 = *pbVar14 + cVar39;
                    pbVar13 = (byte *)CONCAT31(uVar21,0x83);
                    puVar31 = puVar38;
                    goto code_r0x00405312;
                  }
                  *puVar31 = (uint)(*puVar31 + (int)puVar31);
                  piVar15 = (int *)(CONCAT31(uVar21,(byte)puVar31[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar31[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar15 = (int *)((int)piVar15 + *puVar48);
                }
              }
              *pbVar14 = *pbVar14 + bVar4;
              *(byte *)puVar38 = (byte)*puVar38 - (char)pbVar14;
              *pbVar13 = *pbVar13 + bVar4;
              pbVar13 = (byte *)CONCAT31(uVar21,bVar4 | (byte)*puVar38);
            }
            else {
              cVar5 = (char)puVar44;
              *pbVar14 = *pbVar14 + cVar5;
              *(byte **)pbVar13 = pbVar14 + *(int *)pbVar13;
              *pbVar13 = *pbVar13 + bVar4;
              bVar4 = bVar4 + *pbVar13;
              pbVar13 = (byte *)CONCAT31(uVar21,bVar4);
              if (-1 < (char)bVar4) {
                *(byte *)puVar38 = (byte)*puVar38 + bVar29;
                out(*puVar31,(short)pbVar14);
                pbVar14 = pbVar14 + 1;
                *pbVar13 = *pbVar13 + bVar4;
                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                           bVar29 | (byte)((uint)iVar12 >> 8));
                cVar39 = bVar4 - (byte)*puVar44;
                pcVar16 = (char *)CONCAT31(uVar21,cVar39);
                *pcVar16 = *pcVar16 + cVar39 + (bVar4 < (byte)*puVar44);
                *pbVar14 = *pbVar14 + cVar39;
                pcVar16 = (char *)((int)pcVar16 * 2 + 0x79);
                *pcVar16 = *pcVar16 + (char)((uint)pbVar14 >> 8);
                pbVar13 = (byte *)in((short)pbVar14);
                puVar31 = puVar31 + 1;
              }
              *(byte *)puVar31 = (byte)*puVar31 + cVar5;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              *pbVar13 = *pbVar13 + (char)pbVar13;
              uStack_68 = (undefined1)in_DS;
              uStack_67 = (undefined1)((ushort)in_DS >> 8);
              bVar6 = *pbVar13;
              bVar33 = (byte)((uint)puVar44 >> 8);
              bVar29 = bVar33 + *pbVar13;
              iVar12 = *(int *)pbVar13;
              *pbVar14 = *pbVar14 + cVar5;
              bVar4 = (char)(pbVar13 + (uint)CARRY1(bVar33,bVar6) + iVar12) - (byte)*puVar38;
              pbVar13 = (byte *)CONCAT31((int3)((uint)(pbVar13 + (uint)CARRY1(bVar33,bVar6) + iVar12
                                                      ) >> 8),bVar4);
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar4;
              *pcVar19 = *pcVar19 + (char)puVar38;
              *pbVar13 = *pbVar13 + bVar4;
              *pbVar13 = *pbVar13 + bVar4;
              *pbVar13 = *pbVar13 + bVar4;
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11(bVar29 + *pbVar13,cVar5));
              pbVar13 = pbVar13 + (uint)CARRY1(bVar29,*pbVar13) + *(int *)pbVar13;
              *pbVar14 = *pbVar14 + cVar5;
              puVar31 = (uint *)((int)puVar31 + *(int *)(pbVar14 + 0x3e));
            }
            *(byte *)puVar31 = (byte)*puVar31 + (char)pbVar13;
            cVar5 = (char)pbVar13 + 'r';
            puVar31 = (uint *)((int)puVar31 + -1);
            uVar37 = CONCAT31((int3)((uint)pbVar13 >> 8),cVar5);
            *(byte *)puVar31 = *(byte *)puVar31 + cVar5;
            bVar49 = 0xfff38f8d < uVar37;
            iVar12 = uVar37 + 0xc7072;
            pcVar16 = pcVar19;
          } while (SCARRY4(uVar37,0xc7072));
        } while( true );
      }
      *pcVar19 = *pcVar19 + bVar6;
      bVar6 = bVar6 + 0x6f;
      pbVar13 = (byte *)CONCAT31(uVar21,bVar6);
      bVar4 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar6;
      uVar21 = (undefined3)
               ((uint)(pbVar13 + (uint)CARRY1(bVar4,bVar6) + *(int *)((int)puVar44 + (int)pbVar14))
               >> 8);
      cVar39 = (char)(pbVar13 + (uint)CARRY1(bVar4,bVar6) + *(int *)((int)puVar44 + (int)pbVar14)) +
               'E';
      pcVar19 = (char *)CONCAT31(uVar21,cVar39);
      *pcVar19 = *pcVar19 + cVar39;
      cVar39 = cVar39 + *pcVar19;
      pcVar19 = (char *)CONCAT31(uVar21,cVar39);
      *pcVar19 = *pcVar19 + cVar39;
      puVar48 = (uint *)CONCAT31(uVar21,cVar39 + *pcVar19);
      *(char *)puVar48 = (char)*puVar48 + cVar39 + *pcVar19;
      pbVar13 = (byte *)((uint)puVar48 | *puVar48);
      bVar6 = *pbVar13;
      bVar4 = (byte)pbVar13;
      *pbVar13 = *pbVar13 + bVar4;
      piVar15 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar4 + CARRY1(bVar6,bVar4));
      puVar48 = puVar31;
code_r0x00405117:
      *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
      puVar36 = (uint *)((int)puVar36 - *puVar36);
      puVar31 = puVar48 + 1;
      out(*puVar48,uVar28);
    }
    *pbVar14 = *pbVar14 + (char)puVar44;
    bVar49 = puVar36 < (uint *)*piVar15;
    puVar36 = (uint *)((int)puVar36 - *piVar15);
    bVar6 = (byte)((uint)puVar44 >> 8);
    *(byte *)((int)puVar46 + 0x39) = (*(byte *)((int)puVar46 + 0x39) - bVar6) - bVar49;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    uVar37 = *puVar36;
    *(int *)((int)puVar46 + 0x39) = *(int *)((int)puVar46 + 0x39) - (int)pcVar16;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11(bVar6 | (byte)uVar37 | (byte)*puVar36,(char)puVar44));
    *(char *)(piVar15 + 10) = (char)piVar15[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
  bVar6 = (char)piVar15 + 0x28;
  pbVar13 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),bVar6);
  *pbVar13 = *pbVar13 ^ bVar6;
  *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pcVar24 >> 8);
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + (byte)pcVar24;
  piVar15 = (int *)(((uint)pbVar13 | 0x1496f09) + *puVar46 + (uint)CARRY1(bVar6,(byte)pcVar24));
  puVar44 = puVar48 + 1;
  out(*puVar48,(short)pbVar14);
  pbVar35 = pbVar14 + -1;
  *piVar15 = *piVar15 + (int)piVar15;
  pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar35 >> 8),(byte)pbVar35 | (byte)*puVar38);
  cVar5 = (char)piVar15 + '\x13';
  pbVar13 = (byte *)CONCAT31((int3)((uint)piVar15 >> 8),cVar5);
  puVar31 = puVar38;
  puVar48 = puVar44;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar14 = *pbVar14 - (char)((uint)pbVar35 >> 8);
    *pbVar13 = *pbVar13 + cVar5;
code_r0x00405396:
    bVar6 = *pbVar13;
    bVar4 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar4;
    *puVar44 = (uint)(pbVar13 + (uint)CARRY1(bVar6,bVar4) + *puVar44);
    out(*puVar44,(short)pbVar14);
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    pcVar16 = (char *)CONCAT22((short)((uint)pbVar13 >> 0x10),
                               CONCAT11((byte)((uint)pbVar13 >> 8) | (byte)puVar44[1],bVar4));
    *(char **)((int)puVar46 + -1) = pcVar16 + *(int *)((int)puVar46 + -1);
    out(puVar44[1],(short)pbVar14);
    *pcVar16 = *pcVar16 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar13 = *pbVar13 + (char)pbVar13;
  piVar15 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),(char)pbVar13 + 'o');
  puVar38 = (uint *)((int)puVar31 + -1);
  *piVar15 = *piVar15 + (int)piVar15;
  uVar21 = (undefined3)((uint)pbVar14 >> 8);
  piVar15 = (int *)((int)piVar15 + 0x1b7e);
  bVar29 = (byte)pbVar14 | *(byte *)puVar38 | *(byte *)puVar38;
  iRam04115f2c = iRam04115f2c + (int)piVar15;
  out(*puVar48,(short)CONCAT31(uVar21,bVar29));
  *piVar15 = *piVar15 + (int)piVar15;
  bVar29 = bVar29 | (byte)piVar15;
  iVar32 = CONCAT31(uVar21,bVar29);
  pbVar14 = (byte *)((int)piVar15 - *piVar15);
  cVar5 = (char)pbVar14;
  *pcVar24 = *pcVar24 + cVar5;
  cVar39 = (char)pcVar24 - bVar29;
  *pbVar14 = *pbVar14 + cVar5;
  uVar28 = (undefined2)((uint)pcVar24 >> 0x10);
  bVar4 = (byte)((uint)pcVar24 >> 8) | *pbVar14;
  pcVar19 = pcVar19 + -1;
  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
  bVar6 = *(byte *)(CONCAT22(uVar28,CONCAT11(bVar4,cVar39)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar14;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar19;
  *pbVar14 = *pbVar14 + cVar5;
  bVar6 = bVar4 | bVar6 | *(byte *)puVar38;
  iVar25 = CONCAT22(uVar28,CONCAT11(bVar6,cVar39));
  pbVar35 = (byte *)((uint)(puVar48 + 1) ^ *(uint *)(iVar32 + -0x43));
  iVar12 = *(int *)pbVar14;
  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
  if (SCARRY4(iVar12,(int)pbVar14)) {
    *pbVar14 = *pbVar14 + cVar5;
  }
  pbVar13 = pbVar14 + 0x5674;
  puVar46 = (uint *)((int)puVar46 +
                    (-(uint)((byte *)0xffffa98b < pbVar14) - *(int *)(pbVar35 + -0x7f)));
  bVar4 = (byte)pbVar13;
  *pbVar13 = *pbVar13 + bVar4;
  uVar22 = (undefined3)((uint)pbVar13 >> 8);
  bVar33 = bVar4 + 0x2d;
  piVar15 = (int *)CONCAT31(uVar22,bVar33);
  *(uint *)(pbVar35 + (int)puVar46 * 8) =
       *(int *)(pbVar35 + (int)puVar46 * 8) + iVar32 + (uint)(0xd2 < bVar4);
  bVar4 = *pbVar35;
  *pbVar35 = *pbVar35 + bVar33;
  if (!CARRY1(bVar4,bVar33)) {
    do {
      pbVar13 = (byte *)(iVar32 + 1);
      bVar4 = (byte)piVar15;
      *(byte *)piVar15 = (char)*piVar15 + bVar4;
      bVar29 = (byte)((uint)piVar15 >> 8);
      bVar33 = (byte)puVar38 | bVar29;
      puVar48 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar33);
      out(*(undefined4 *)pbVar35,(short)pbVar13);
      *(byte *)piVar15 = (char)*piVar15 + bVar4;
      uVar28 = (undefined2)((uint)iVar25 >> 0x10);
      cVar5 = (char)iVar25;
      pbVar14 = (byte *)CONCAT22(uVar28,CONCAT11((byte)((uint)iVar25 >> 8) | *pbVar13,cVar5));
      bVar6 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar4;
      *(byte *)piVar15 = (char)*piVar15 + bVar4 + CARRY1(bVar6,bVar4);
      *pbVar13 = *pbVar13 + bVar4;
      *(byte *)puVar46 = (byte)*puVar46 + bVar29;
      *(int *)((int)piVar15 * 2) =
           *(int *)((int)piVar15 * 2) + CONCAT22(uVar28,CONCAT11(0x1c,cVar5));
      *(byte *)piVar15 = (char)*piVar15 + bVar4;
      cVar39 = (char)pbVar13;
      *(byte *)puVar48 = (byte)*puVar48 + cVar39;
      *(byte *)((int)piVar15 * 2) = *(byte *)((int)piVar15 * 2) ^ bVar4;
      *(byte *)piVar15 = (char)*piVar15 + bVar4;
      pbVar14 = pbVar35 + 8;
      out(*(undefined4 *)(pbVar35 + 4),(short)pbVar13);
      piVar15 = (int *)0xa0a0000;
      *pbVar13 = *pbVar13;
      bVar4 = cVar5 - cVar39;
      iVar25 = CONCAT22(uVar28,CONCAT11((byte)puVar46[0x14] | 0x1c | bRam0ca87216,bVar4));
      *pbVar13 = *pbVar13;
      bVar6 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar4;
      if (!CARRY1(bVar6,bVar4)) {
        piVar15 = (int *)0x1e7b7000;
        bVar6 = (byte)((uint)puVar38 >> 8) | *(byte *)(iVar32 + 3);
        puVar48 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar6,bVar33));
        if (bVar6 != 0) {
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar39 + pbVar14[(int)puVar46 * 8]);
          piVar15 = (int *)0x6d7d7000;
          iVar25 = iVar25 + 1;
        }
      }
      *piVar15 = (int)(*piVar15 + (int)piVar15);
      iVar32 = CONCAT31((int3)((uint)pbVar13 >> 8),(byte)pbVar13 | pbVar14[(int)puVar46 * 8]);
      *(char *)piVar15 = (char)*piVar15;
      piVar15 = (int *)CONCAT31((int3)((uint)piVar15 >> 8),0xf9);
      *puVar46 = (uint)((int)piVar15 + *puVar46 + 1);
      pbVar35 = pbVar35 + 0xc;
      out(*(undefined4 *)pbVar14,(short)iVar32);
      puVar38 = puVar48;
    } while( true );
  }
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  bVar33 = bVar33 | *(byte *)((int)piVar15 + 0x4000081);
  piVar15 = (int *)CONCAT31(uVar22,bVar33);
  if ('\0' < (char)bVar33) {
    *(byte *)piVar15 = (char)*piVar15 + bVar33;
    puVar48 = (uint *)CONCAT31(uVar22,bVar33 + 0x28);
    *puVar48 = *puVar48 ^ (uint)puVar48;
    *(byte *)puVar38 = *(byte *)puVar38 + bVar6;
    cVar5 = (bVar33 + 0x28) - bVar6;
    pcVar16 = (char *)CONCAT31(uVar22,cVar5);
    *pcVar16 = *pcVar16 + cVar5;
    pbVar14 = (byte *)CONCAT31(uVar21,bVar29 | *(byte *)puVar38);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar31 + 0x7d),
                                        (char)puVar38));
    *pcVar16 = *pcVar16 + cVar5;
    pbVar13 = (byte *)CONCAT31(uVar22,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar22,cVar5 + 0x39U));
    *pcVar19 = *pcVar19 + bVar6;
    puVar44 = (uint *)(pbVar35 + 4);
    out(*(undefined4 *)pbVar35,(short)pbVar14);
    goto code_r0x00405396;
  }
  puVar48 = (uint *)(pbVar35 + 4);
  out(*(undefined4 *)pbVar35,(short)iVar32);
  pcVar24 = (char *)(iVar25 + -1);
  *piVar15 = (int)(*piVar15 + (int)piVar15);
  pbVar14 = (byte *)CONCAT31(uVar21,bVar29 | *(byte *)puVar38);
  goto code_r0x004052ee;
}


