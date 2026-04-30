/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004049bc
 * Raw Name    : <Execute>b__4
 * Demangled   : <Execute>b__4
 * Prototype   : int <Execute>b__4(uint * o, uint * param_2, uint * param_3, undefined4 * param_4, char * param_5, byte * param_6, uint * param_7, int param_8, uint * param_9)
 * Local Vars  : o, uStack_67, uStack_68, uStack_64, uStack_66, puStack_24, uStack_28, puStack_10, uStack_18, puStack_8, puStack_c, uVar1, uStack_4, uVar3, uVar2, bVar5, cVar4, cVar7, bVar6, uVar9, bVar8, param_2, param_3, puVar10, in_EAX, param_4, param_5, puVar12, param_6, uVar11, param_7, pbVar14, iVar13, param_8, param_9, piVar16, pbVar15, pcVar18, pcVar17, uVar20, pcVar19, puVar22, uVar21, pcVar24, puVar23, bVar26, iVar25, uVar28, bVar27, bVar30, uVar29, pbVar32, puVar31, cVar34, iVar33, unaff_EBX, cVar35, uVar37, puVar36, cVar39, puVar38, ppuVar41, cVar40, puVar42, unaff_EBP, ppuVar44, ppuVar43, puVar45, unaff_ESI, unaff_EDI, puVar46, in_ES, puVar47, in_DS, in_SS, bVar48, in_CF, unaff_retaddr, in_AF, ppuVar49
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
<Execute>b__4(uint *o,uint *param_2,uint *param_3,undefined4 *param_4,char *param_5,byte *param_6,
             uint *param_7,int param_8,uint *param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  undefined3 uVar20;
  ushort *puVar10;
  uint *in_EAX;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  char *pcVar17;
  char *pcVar18;
  undefined3 uVar21;
  char *pcVar19;
  byte bVar26;
  undefined2 uVar28;
  uint *puVar22;
  byte bVar27;
  undefined2 uVar29;
  uint *puVar23;
  char *pcVar24;
  int iVar25;
  byte bVar30;
  uint *puVar31;
  byte *pbVar32;
  int iVar33;
  char cVar34;
  char cVar35;
  char cVar39;
  byte *unaff_EBX;
  uint *puVar36;
  char cVar40;
  uint uVar37;
  uint *puVar38;
  undefined4 **ppuVar41;
  undefined4 **unaff_EBP;
  undefined4 *puVar42;
  undefined4 **ppuVar43;
  undefined4 **ppuVar44;
  undefined4 **unaff_ESI;
  uint *puVar45;
  uint *puVar46;
  uint *unaff_EDI;
  uint *puVar47;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined1 in_CF;
  bool bVar48;
  byte in_AF;
  uint *unaff_retaddr;
  undefined4 **ppuVar49;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_28;
  uint *puStack_24;
  undefined2 uStack_18;
  uint *puStack_10;
  uint *puStack_c;
  undefined4 *puStack_8;
  undefined2 uStack_4;
  
code_r0x004049bc:
  puVar31 = param_2;
  puVar45 = (uint *)unaff_ESI;
                    /* .NET CLR Managed Code */
  if ((bool)in_CF) goto code_r0x004049df;
  *(byte *)in_EAX = (byte)*in_EAX | (byte)in_EAX;
  bVar5 = (byte)*in_EAX;
  ppuVar43 = unaff_EBP;
  puVar23 = (uint *)unaff_ESI;
  unaff_ESI = (undefined4 **)unaff_retaddr;
  do {
    puVar31 = param_2;
    unaff_EBP = ppuVar43;
    puVar45 = puVar23;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      cVar7 = (char)in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + cVar7;
      uVar20 = (undefined3)((uint)in_EAX >> 8);
      cVar4 = cVar7 + '\x03';
      pbVar15 = (byte *)CONCAT31(uVar20,cVar4);
      puVar45 = puVar23 + 1;
      out(*puVar23,(short)param_2);
      in_SS = SUB42(unaff_ESI,0);
      *pbVar15 = *pbVar15 + cVar4;
      cVar34 = (char)o;
      o = (uint *)CONCAT22((short)((uint)o >> 0x10),CONCAT11((byte)((uint)o >> 8) | *pbVar15,cVar34)
                          );
      *(int *)pbVar15 = *(int *)pbVar15 - (int)pbVar15;
      *(byte *)param_2 = (byte)*param_2 + cVar34;
      cVar34 = (char)unaff_EBX - *(byte *)((int)puVar23 + 6);
      unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar34);
      if ((POPCOUNT(cVar34) & 1U) != 0) {
        pbVar14 = (byte *)((int)unaff_EDI + (int)ppuVar43 * 2);
        *pbVar14 = *pbVar14 + cVar4;
        goto code_r0x00404a51;
      }
      *pbVar15 = *pbVar15 + cVar4;
      in_EAX = (uint *)CONCAT31(uVar20,cVar7 + 'r');
      *(byte *)in_EAX = (byte)*in_EAX;
      unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_ESI >> 0x10),in_ES);
code_r0x004049df:
      unaff_ESI = (undefined4 **)unaff_retaddr;
      unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBX + 0x70));
      bVar5 = (byte)in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + bVar5;
      uVar20 = (undefined3)((uint)in_EAX >> 8);
      bVar5 = (bVar5 + 0x6e) - (0x90 < bVar5);
      in_EAX = (uint *)CONCAT31(uVar20,bVar5);
      cVar7 = (char)o;
      *(byte *)puVar31 = (byte)*puVar31 + cVar7;
      bVar26 = (char)((uint)o >> 8) - *(byte *)((int)puVar45 + 2);
      o = (uint *)CONCAT22((short)((uint)o >> 0x10),CONCAT11(bVar26,cVar7));
      if ((POPCOUNT(bVar26) & 1U) == 0) break;
    }
    else {
      while( true ) {
        cVar7 = (char)in_EAX;
        *(byte *)in_EAX = (byte)*in_EAX + cVar7;
        uVar20 = (undefined3)((uint)in_EAX >> 8);
        cVar4 = cVar7 + '\x02';
        puVar10 = (ushort *)CONCAT31(uVar20,cVar4);
        bVar5 = (byte)((uint)param_8 >> 8);
        uVar29 = (undefined2)((uint)param_8 >> 0x10);
        if ((POPCOUNT(cVar4) & 1U) != 0) goto code_r0x0040495b;
        *(char *)puVar10 = (char)*puVar10 + cVar4;
        bVar6 = cVar7 + 0x7d;
        iVar13 = CONCAT31(uVar20,bVar6);
        pbVar15 = (byte *)(iVar13 + (int)unaff_EBP);
        bVar26 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar6;
        uVar37 = *o;
        *(byte *)puVar31 = (byte)*puVar31 + (char)o;
        pcVar17 = (char *)(((iVar13 - uVar37) - (uint)CARRY1(bVar26,bVar6)) + -0x727b0317);
        cVar7 = (char)pcVar17;
        *pcVar17 = *pcVar17 + cVar7;
        uVar20 = (undefined3)((uint)pcVar17 >> 8);
        cVar4 = cVar7 + '\x02';
        puVar47 = (uint *)CONCAT31(uVar20,cVar4);
        puVar23 = puVar45;
        if ((POPCOUNT(cVar4) & 1U) == 0) break;
        while( true ) {
          cVar7 = (char)puVar47;
          *(char *)puVar47 = (char)*puVar47 + cVar7;
          uVar20 = (undefined3)((uint)puVar47 >> 8);
          cVar4 = cVar7 + '\x02';
          piVar16 = (int *)CONCAT31(uVar20,cVar4);
          if ((POPCOUNT(cVar4) & 1U) == 0) break;
          *(byte *)puVar31 = (byte)*puVar31 + (char)o;
          uStack_4 = in_SS;
          while( true ) {
            *(byte *)o = (byte)*o + 1;
            uVar20 = (undefined3)((uint)piVar16 >> 8);
            bVar26 = (char)piVar16 - (char)*piVar16;
            pbVar15 = (byte *)CONCAT31(uVar20,bVar26);
            *pbVar15 = *pbVar15 + bVar26;
            puVar45 = (uint *)((int)puVar23 + *(int *)pbVar15);
            cVar7 = bVar26 + *pbVar15;
            puVar10 = (ushort *)CONCAT31(uVar20,cVar7);
            *puVar10 = *puVar10 +
                       (ushort)CARRY1(bVar26,*pbVar15) * (((ushort)puVar10 & 3) - (*puVar10 & 3));
            *(char *)puVar10 = (char)*puVar10 + cVar7;
            *(char *)puVar10 = (char)*puVar10 + cVar7;
            *(char *)puVar10 = (char)*puVar10 + cVar7;
            unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBX + 0x70));
code_r0x0040495b:
            cVar7 = (char)puVar10;
            *(char *)puVar10 = (char)*puVar10 + cVar7;
            uVar20 = (undefined3)((uint)puVar10 >> 8);
            cVar4 = cVar7 + '\x02';
            pcVar17 = (char *)CONCAT31(uVar20,cVar4);
            if ((POPCOUNT(cVar4) & 1U) == 0) break;
            *puVar31 = (uint)(*puVar31 + (int)unaff_EBP);
            puVar23 = (uint *)((int)puVar45 + 1);
            out((byte)*puVar45,(short)puVar31);
            unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x3b],
                                                  (char)unaff_EBX));
            while( true ) {
              cVar7 = (char)pcVar17;
              *pcVar17 = *pcVar17 + cVar7;
              uVar20 = (undefined3)((uint)pcVar17 >> 8);
              bVar26 = cVar7 + 2;
              pcVar17 = (char *)CONCAT31(uVar20,bVar26);
              if ((POPCOUNT(bVar26) & 1U) == 0) break;
              while( true ) {
                bRam00c36f08 = bVar26;
                bVar26 = *(byte *)puVar23;
                cVar7 = (char)pcVar17;
                *(byte *)puVar23 = *(byte *)puVar23 + cVar7;
                unaff_ESI = (undefined4 **)CONCAT22((short)((uint)unaff_ESI >> 0x10),in_ES);
                if (SCARRY1(bVar26,cVar7) == (char)*(byte *)puVar23 < '\0') {
                  pcVar17[(int)unaff_EBP] = pcVar17[(int)unaff_EBP] + cVar7;
                  goto code_r0x00404982;
                }
                *pcVar17 = *pcVar17 + cVar7;
                pbVar15 = (byte *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar7 + '*');
                bVar26 = (byte)((uint)o >> 8);
                uVar28 = (undefined2)((uint)o >> 0x10);
                cVar7 = (char)o;
                bVar6 = bVar26 + *pbVar15;
                pbVar15 = pbVar15 + (uint)CARRY1(bVar26,*pbVar15) + *(int *)pbVar15;
                *(byte *)puVar31 = (byte)*puVar31 + cVar7;
                cVar34 = (char)unaff_EBX - *(byte *)puVar23;
                bVar26 = *pbVar15;
                cVar4 = bVar6 + *pbVar15;
                pcVar18 = (char *)CONCAT22(uVar28,CONCAT11(cVar4,cVar7));
                iVar13 = *(int *)pbVar15;
                *(byte *)puVar31 = (byte)*puVar31 + cVar7;
                uVar20 = (undefined3)((uint)(pbVar15 + (uint)CARRY1(bVar6,bVar26) + iVar13) >> 8);
                bVar26 = (char)(pbVar15 + (uint)CARRY1(bVar6,bVar26) + iVar13) -
                         *(byte *)((int)puVar31 + 3);
                pcVar17 = (char *)CONCAT31(uVar20,bVar26);
                unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8
                                                                               ),cVar34) + -0x3a),
                                                      cVar34));
                *pcVar17 = *pcVar17 + bVar26;
                pcVar17 = (char *)CONCAT31(uVar20,bVar26 + 0x6f);
                *pcVar18 = (*pcVar18 - (bVar26 + 0x6f)) - (0x90 < bVar26);
                *(byte *)puVar31 = (byte)*puVar31 + cVar7;
                param_3 = (uint *)CONCAT22(param_3._2_2_,in_SS);
                *pcVar18 = *pcVar18 + '\x01';
                cVar4 = cVar4 - *(byte *)((int)puVar45 + 3);
                o = (uint *)CONCAT22(uVar28,CONCAT11(cVar4,cVar7));
                if ((POPCOUNT(cVar4) & 1U) == 0) break;
                pcVar17 = pcVar17 + -0x1b7e2606;
                *pcVar17 = *pcVar17 + (char)pcVar17;
                pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),
                                           CONCAT11((byte)((uint)pcVar17 >> 8) |
                                                    (byte)puVar31[0x30dbc2],(char)pcVar17));
                bVar26 = bRam00c36f08;
              }
            }
            *pcVar17 = *pcVar17 + bVar26;
            piVar16 = (int *)CONCAT31(uVar20,cVar7 + 'q');
            *o = (*o - (int)piVar16) - (uint)(0x90 < bVar26);
            *(byte *)puVar31 = (byte)*puVar31 + (char)o;
            unaff_EBP = (undefined4 **)((int)unaff_EBP + *(int *)((int)unaff_EDI + 0x1a));
            *piVar16 = (int)(*piVar16 + (int)piVar16);
            puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | *(byte *)puVar23);
          }
          *pcVar17 = *pcVar17 + cVar4;
          pcVar17 = (char *)(CONCAT31(uVar20,cVar7 + '}') + (int)unaff_EBP);
          *pcVar17 = *pcVar17 + cVar7 + '}';
          *(char *)param_9 = (char)*param_9 + (char)param_9;
          o = (uint *)CONCAT22(uVar29,CONCAT11(bVar5 | *(byte *)(param_8 * 3),(char)param_8));
          unaff_EDI = (uint *)((int)unaff_ESI + *(int *)(param_6 + 0x6f));
          puVar47 = param_9;
          puVar31 = param_7;
          unaff_EBX = param_6;
          unaff_EBP = (undefined4 **)param_4;
          puVar23 = param_3;
        }
        *(char *)piVar16 = (char)*piVar16 + cVar4;
        pcVar17 = (char *)CONCAT31(uVar20,cVar7 + '}');
        out(*puVar23,(short)puVar31);
        *pcVar17 = *pcVar17 + cVar7 + '}';
code_r0x00404982:
        *(char *)param_9 = (char)*param_9 + (char)param_9;
        o = (uint *)CONCAT22(uVar29,CONCAT11(bVar5 | *(byte *)(param_8 + (int)param_3),(char)param_8
                                            ));
        unaff_EDI = (uint *)((int)unaff_ESI + *(int *)(param_6 + 0x71));
        in_EAX = param_9;
        puVar31 = param_7;
        unaff_EBX = param_6;
        unaff_EBP = (undefined4 **)param_4;
        puVar45 = param_3;
      }
      *(char *)puVar47 = (char)*puVar47 + cVar4;
      bVar26 = cVar7 + 0x7d;
      iVar13 = CONCAT31(uVar20,bVar26);
      pbVar15 = (byte *)(iVar13 + (int)unaff_EBP);
      bVar5 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar26;
      in_EAX = (uint *)((iVar13 - *o) - (uint)CARRY1(bVar5,bVar26));
    }
    *(byte *)puVar31 = (byte)*puVar31 + (char)o;
    param_2 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),
                               ((char)puVar31 - (byte)*unaff_EDI) - (byte)*puVar45);
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                 (char)unaff_EBX - *(byte *)((int)puVar45 + 0x72));
    *in_EAX = *in_EAX & (uint)o;
    pbVar15 = (byte *)((int)in_EAX + 2);
    *pbVar15 = *pbVar15 + (char)((uint)puVar31 >> 8);
    bVar5 = *pbVar15;
    ppuVar43 = unaff_EBP;
    puVar23 = puVar45;
  } while( true );
  *(byte *)in_EAX = (byte)*in_EAX + bVar5;
  in_CF = 0xfd < bVar5;
  in_EAX = (uint *)CONCAT31(uVar20,bVar5 + 2);
  param_2 = puVar31;
  unaff_retaddr = (uint *)unaff_ESI;
  if ((POPCOUNT(bVar5 + 2) & 1U) == 0) {
    do {
      bVar5 = (byte)in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + bVar5;
      uVar20 = (undefined3)((uint)in_EAX >> 8);
      bVar6 = bVar5 + 0x6f;
      pbVar15 = (byte *)CONCAT31(uVar20,bVar6);
      *o = (*o - (int)pbVar15) - (uint)(0x90 < bVar5);
      *(byte *)puVar31 = (byte)*puVar31 + cVar7;
      puVar42 = (undefined4 *)((int)unaff_EBP + *(int *)((int)unaff_EDI + 0x1a));
      *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      uVar21 = (undefined3)((uint)puVar31 >> 8);
      bVar5 = (byte)puVar31 | (byte)*puVar45;
      puVar31 = (uint *)CONCAT31(uVar21,bVar5);
      *(byte *)o = (byte)*o + 1;
      cVar4 = bVar6 - *pbVar15;
      puVar45 = (uint *)((int)puVar45 + (-(uint)(bVar6 < *pbVar15) - *(int *)CONCAT31(uVar20,cVar4))
                        );
      uVar11 = CONCAT31(uVar20,cVar4 + *(char *)CONCAT31(uVar20,cVar4));
      bVar48 = CARRY1(bRam14110000,bVar26);
      bRam14110000 = bRam14110000 + bVar26;
      uVar37 = *(uint *)(unaff_EBX + (int)puVar45 * 2);
      uVar2 = uVar11 + *(uint *)(unaff_EBX + (int)puVar45 * 2);
      puVar12 = (undefined4 *)(uVar2 + bVar48);
      uVar1 = GlobalDescriptorTableRegister();
      *puVar12 = uVar1;
      uVar37 = (uint)(CARRY4(uVar11,uVar37) || CARRY4(uVar2,(uint)bVar48));
      in_EAX = (uint *)((int)puVar12 + uRam7d020511 + uVar37);
      unaff_ESI = &puStack_8;
      ppuVar49 = &puStack_8;
      ppuVar41 = &puStack_8;
      ppuVar43 = &puStack_8;
      ppuVar44 = &puStack_8;
      unaff_EBP = &puStack_8;
      puStack_8 = puVar42;
      cVar4 = '\x03';
      do {
        puVar42 = puVar42 + -1;
        ppuVar41 = ppuVar41 + -1;
        *ppuVar41 = (undefined4 *)*puVar42;
        cVar4 = cVar4 + -1;
      } while ('\0' < cVar4);
      pbRam00c82802 =
           (byte *)((int)in_EAX +
                   (int)(pbRam00c82802 +
                        (CARRY4((uint)puVar12,uRam7d020511) ||
                        CARRY4((int)puVar12 + uRam7d020511,uVar37))));
      uVar37 = *puVar45;
      cVar4 = (char)in_EAX;
      *(byte *)puVar45 = (byte)*puVar45 + cVar4;
    } while (SCARRY1((byte)uVar37,cVar4) == (char)(byte)*puVar45 < '\0');
    *(byte *)in_EAX = (byte)*in_EAX + cVar4;
    iVar13 = CONCAT31((int3)((uint)in_EAX >> 8),cVar4 + '\x11') + 0xc57b;
    bVar26 = (byte)iVar13;
    *puVar31 = *puVar31 ^ (uint)unaff_EBX;
    param_2 = (uint *)CONCAT31(uVar21,bVar5 + (byte)*o);
    iVar13 = (CONCAT31((int3)((uint)iVar13 >> 8),bVar26 + 0x6f) - (uint)(0x90 < bVar26)) +
             -0x18093a86;
    cVar4 = (char)iVar13;
    uVar20 = (undefined3)((uint)iVar13 >> 8);
    cVar7 = cVar4 + '\x02';
    pbVar15 = (byte *)CONCAT31(uVar20,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00404ab4;
    *pbVar15 = *pbVar15 + cVar7;
    pbVar15 = (byte *)CONCAT31(uVar20,cVar4 + 'q');
code_r0x00404a51:
    pbVar14 = pbVar15 + 1;
    cVar7 = (char)pbVar14;
    *pbVar14 = *pbVar14 + cVar7;
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) - cVar7,(char)unaff_EBX));
    *pbVar14 = *pbVar14 + cVar7;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*o);
    pbVar15 = pbVar15 + 0x757b03;
    pbVar14 = (byte *)((int)unaff_EDI + (int)ppuVar43 * 2);
    cVar7 = (char)pbVar15;
    *pbVar14 = *pbVar14 + cVar7;
    *pbVar15 = *pbVar15 + cVar7;
    *(byte *)puVar45 = (byte)*puVar45 - (char)((uint)pbVar15 >> 8);
    *pbVar15 = *pbVar15 + cVar7;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar43 + -0x3a));
    *pbVar15 = *pbVar15 + cVar7;
    pbVar15 = (byte *)(CONCAT31((int3)((uint)pbVar15 >> 8),cVar7 + '\x11') + 0x757b02);
    pbVar14 = (byte *)((int)unaff_EDI + (int)ppuVar43 * 2);
    bVar26 = (byte)pbVar15;
    *pbVar14 = *pbVar14 + bVar26;
    bVar5 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar26;
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    pbRam011006fe = pbVar15 + (int)(pbRam011006fe + CARRY1(bVar5,bVar26));
    uVar37 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar26;
    ppuVar44 = ppuVar43;
    ppuVar49 = unaff_ESI;
    if (!CARRY1((byte)uVar37,bVar26)) goto code_r0x00404add;
    do {
      bVar5 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar5;
      bVar6 = (byte)o;
      o = (uint *)CONCAT22((short)((uint)o >> 0x10),CONCAT11((byte)((uint)o >> 8) | *pbVar15,bVar6))
      ;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar20 = (undefined3)((uint)pbVar15 >> 8);
      bVar5 = bVar5 + in_AF * '\x06';
      cVar7 = bVar5 + (0x90 < (bVar5 & 0xf0) | in_AF * (0xf9 < bVar5)) * '`';
      pcVar17 = (char *)CONCAT31(uVar20,cVar7);
      *pcVar17 = *pcVar17 + cVar7;
      unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppuVar44 + -0x39));
      *pcVar17 = *pcVar17 + cVar7;
      iVar13 = CONCAT31(uVar20,cVar7 + '\x11') + 0xc57b;
      iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x11') + 0xc67b;
      bVar5 = (byte)iVar13;
      bVar26 = bVar5 + 0x6f;
      pbVar15 = (byte *)CONCAT31((int3)((uint)iVar13 >> 8),bVar26);
      *o = (*o - (int)pbVar15) - (uint)(0x90 < bVar5);
      uVar37 = *param_2;
      *(byte *)param_2 = (byte)*param_2 + bVar6;
      pbRam011106fe = pbVar15 + (int)(pbRam011106fe + CARRY1((byte)uVar37,bVar6));
      uVar37 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + bVar26;
      if (!CARRY1((byte)uVar37,bVar26)) goto code_r0x00404ad4;
code_r0x00404ab4:
      *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      bVar5 = (byte)o;
      bVar26 = (byte)((uint)o >> 8) | *pbVar15;
      o = (uint *)CONCAT22((short)((uint)o >> 0x10),CONCAT11(bVar26,bVar5));
      *pbVar15 = *pbVar15 - (char)pbVar15;
      *unaff_EBX = *unaff_EBX + bVar26;
      out(*puVar45,(short)param_2);
      *o = *o & (uint)pbVar15;
      uVar37 = *param_2;
      *(byte *)param_2 = (byte)*param_2 + bVar5;
      pbVar15 = pbVar15 + (uint)CARRY1((byte)uVar37,bVar5) + puVar45[1];
      *pbVar15 = *pbVar15 + (char)pbVar15;
      *(byte *)o = (byte)*o + (char)param_2;
      puVar45 = puVar45 + 1;
      while( true ) {
        out(*puVar45,(short)param_2);
        pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar15 >> 8),(byte)pbVar15 & (byte)*o);
        *(byte *)param_2 = (byte)*param_2 + (char)o;
        param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0x14],
                                            (char)param_2));
        *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
        puVar45 = puVar45 + 1;
code_r0x00404ad4:
        puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
        pbVar15 = (byte *)((uint)pbVar15 | 8);
        pbRam0000c97d = pbRam0000c97d + (int)pbVar15;
code_r0x00404add:
        bVar5 = (byte)pbVar15;
        uVar20 = (undefined3)((uint)pbVar15 >> 8);
        cVar7 = bVar5 + 8;
        pbVar15 = (byte *)CONCAT31(uVar20,cVar7);
        if (SCARRY1(bVar5,'\b') == cVar7 < '\0') break;
        *pbVar15 = *pbVar15 + cVar7;
        cVar7 = bVar5 + 10;
        piVar16 = (int *)CONCAT31(uVar20,cVar7);
        if ((POPCOUNT(cVar7) & 1U) != 0) {
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          goto code_r0x00404b18;
        }
        *(char *)piVar16 = (char)*piVar16 + cVar7;
        puVar31 = (uint *)CONCAT31(uVar20,bVar5 + 0x7c);
        *puVar31 = *puVar31 & (uint)o;
        *(char *)((int)puVar31 + 0x11) = *(char *)((int)puVar31 + 0x11) + (char)((uint)param_2 >> 8)
        ;
        cVar7 = (char)((int)puVar31 + 0xc67b);
        uVar20 = (undefined3)((uint)((int)puVar31 + 0xc67b) >> 8);
        bVar5 = cVar7 + 8;
        pbVar15 = (byte *)CONCAT31(uVar20,bVar5);
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar15 = *pbVar15 + bVar5;
          cRam02060000 = cVar7 + 'w';
          puVar23 = (uint *)CONCAT31(uVar20,cRam02060000);
          *(byte *)puVar23 = (byte)*puVar23 + cRam02060000;
          cVar7 = (char)o;
          o = (uint *)CONCAT22((short)((uint)o >> 0x10),
                               CONCAT11((byte)((uint)o >> 8) | (byte)*puVar23,cVar7));
          *puVar23 = *puVar23 - (int)puVar23;
          *(byte *)param_2 = (byte)*param_2 + cVar7;
          puVar31 = puVar45 + 1;
          out(*puVar45,(short)param_2);
          puVar45 = puVar31;
          if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
          pcVar17 = (char *)((uint)puVar23 | *puVar23);
          goto code_r0x00404b89;
        }
        bVar26 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar5;
        *puVar45 = (uint)(pbVar15 + (uint)CARRY1(bVar26,bVar5) + *puVar45);
      }
      *(byte *)puVar45 = (byte)*puVar45 + 1;
      *o = (uint)(pbVar15 + (uint)(0xf7 < bVar5) + *o);
    } while( true );
  }
  goto code_r0x004049bc;
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar23 = (byte)*puVar23 + (char)puVar23;
    puVar31 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(char)puVar23 + 'r');
    piVar16 = (int *)((uint)puVar31 | *puVar31);
    param_2 = puStack_24;
code_r0x00404b18:
    bRam11060000 = (byte)piVar16;
    iVar13 = CONCAT31((int3)((uint)((int)piVar16 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar16 + 0xc57b) + '\x11') + 0xc77b;
    bVar5 = (byte)iVar13;
    iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),bVar5 + 0x6f);
    *o = (*o - iVar13) - (uint)(0x90 < bVar5);
    cVar7 = (char)o;
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    bVar27 = (byte)((uint)unaff_EBX >> 8);
    bVar6 = (byte)((uint)param_2 >> 8) | bVar27;
    pcVar18 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar6,(byte)param_2));
    piVar16 = (int *)(iVar13 + 0x73060001);
    *(byte *)o = (byte)*o & (byte)piVar16;
    *pcVar18 = *pcVar18 + cVar7;
    bVar26 = (byte)((uint)o >> 8);
    *(byte *)piVar16 = *(char *)piVar16 - bVar26;
    *(byte *)piVar16 = *(char *)piVar16 + (byte)piVar16;
    iVar13 = *piVar16;
    *piVar16 = *piVar16 - (int)piVar16;
    *unaff_EBX = *unaff_EBX + bVar26;
    pcVar17 = (char *)((uint)piVar16 | *unaff_EDI);
    *pcVar18 = *pcVar18 - bVar26;
    bVar5 = (byte)pcVar17;
    *pcVar17 = *pcVar17 + bVar5;
    ppuVar44 = (undefined4 **)
               (((int)ppuVar44 - iVar13) - *(int *)(pcVar17 + ((int)ppuVar44 - iVar13)));
    uVar29 = (undefined2)((uint)unaff_EBX >> 0x10);
    bVar8 = (byte)unaff_EBX;
    cVar4 = bVar27 + unaff_EBX[0x76];
    pbVar15 = (byte *)CONCAT22(uVar29,CONCAT11(cVar4,bVar8));
    *pcVar17 = *pcVar17 + bVar5;
    uVar20 = (undefined3)((uint)pcVar17 >> 8);
    uVar11 = CONCAT31(uVar20,bVar5 + 7);
    puVar31 = (uint *)((int)ppuVar44 + -0x1faeef1);
    uVar37 = *puVar31;
    uVar2 = *puVar31 + uVar11;
    *puVar31 = uVar2 + (0xf8 < bVar5);
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    puVar47 = puStack_24;
    bVar5 = bVar5 + 7 + (byte)*o + (CARRY4(uVar37,uVar11) || CARRY4(uVar2,(uint)(0xf8 < bVar5)));
    puVar23 = (uint *)CONCAT31(uVar20,bVar5);
    uVar37 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar5;
    if (CARRY1((byte)uVar37,bVar5)) break;
    *(byte *)puVar23 = (byte)*puVar23 + bVar5;
    unaff_EBX = (byte *)CONCAT22(uVar29,CONCAT11(cVar4 + pbVar15[0x76],bVar8));
    uStack_28 = in_ES;
  }
  *(byte *)puVar23 = (byte)*puVar23 + bVar5;
  uVar21 = (undefined3)((uint)pcVar18 >> 8);
  bVar30 = (byte)param_2 | *pbVar15;
  param_2 = (uint *)CONCAT31(uVar21,bVar30);
  pcRam2b060000 = (char *)CONCAT31(uVar20,bVar5 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar5 + 0x39)) - (0xd7 < (byte)(bVar5 + 0x11));
  bVar27 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar26;
  puVar31 = puVar45 + 1;
  out(*puVar45,(short)param_2);
  bVar5 = (bVar5 + 0x37) - CARRY1(bVar27,bVar26);
  piVar16 = (int *)CONCAT31(uVar20,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    iVar13 = CONCAT31(uVar20,bVar5 + 0x11) + 0xc77b;
    pcVar17 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + 'r');
    pcVar17[0x28] = pcVar17[0x28] + bVar6;
code_r0x00404b89:
    cVar7 = (char)pcVar17;
    *pcVar17 = *pcVar17 + cVar7;
    *pcVar17 = *pcVar17 + cVar7;
    *pcVar17 = *pcVar17 + cVar7;
    puVar10 = (ushort *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar7 + 'r');
    uVar9 = (ushort)puVar10 | *puVar10;
    pcVar17 = (char *)CONCAT22((short)((uint)pcVar17 >> 0x10),uVar9);
    bRam11060000 = (byte)uVar9;
    out(*puVar31,(short)param_2);
    *pcVar17 = *pcVar17 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar5;
  puVar42 = (undefined4 *)((int)ppuVar44 - *(int *)((int)unaff_EDI + 0x21));
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar17 = (char *)CONCAT31(uVar21,bVar30 | *pbVar15);
  puVar23 = puVar45 + 2;
  out(*puVar31,(short)pcVar17);
  uVar37 = *o;
  *pcVar17 = *pcVar17 + cVar7;
  uVar37 = CONCAT31(uVar20,bVar5 & (byte)uVar37) | 0x767b02;
  *(byte *)((int)o + (int)pcVar17) = *(byte *)((int)o + (int)pcVar17) + (char)uVar37;
  iVar13 = uVar37 + 0xc67b;
  cVar40 = (char)iVar13;
  uVar20 = (undefined3)((uint)iVar13 >> 8);
  cVar34 = cVar40 + 'r';
  pcVar17 = (char *)CONCAT31(uVar20,cVar34);
  pcVar17[0x28] = pcVar17[0x28] + bVar6;
  *pcVar17 = *pcVar17 + cVar34;
  uVar28 = (undefined2)((uint)o >> 0x10);
  bVar26 = bVar26 | *(byte *)((int)puStack_24 + -0x5e);
  puVar22 = (uint *)CONCAT22(uVar28,CONCAT11(bVar26,cVar7));
  *pcVar17 = *pcVar17 + cVar34;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,uStack_28);
  puVar38 = (uint *)CONCAT22(uVar29,CONCAT11(cVar4 + pbVar15[0x76],bVar8));
  *pcVar17 = *pcVar17 + cVar34;
  puVar31 = (uint *)CONCAT31(uVar20,cVar40 + -0x1c);
  pcVar17 = (char *)((uint)puVar31 | *puVar31);
  bVar48 = (POPCOUNT((uint)pcVar17 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar17;
  puVar31 = puStack_24;
  puVar12 = puVar42;
  puVar36 = puVar47;
  uVar29 = uStack_28;
  if (!bVar48) goto code_r0x00404ca8;
  *pcVar17 = *pcVar17 + cRam02060000;
  puVar36 = (uint *)CONCAT31((int3)((uint)pcVar17 >> 8),cRam02060000 + 'r');
  *puVar36 = *puVar36 & (uint)puVar22;
  *(char *)((int)puVar36 + 0x11) = *(char *)((int)puVar36 + 0x11) + (char)((ushort)uStack_28 >> 8);
  iVar13 = (int)puVar36 + 0xc77b;
  uVar20 = (undefined3)((uint)iVar13 >> 8);
  cRam02060000 = (char)iVar13 + '\t';
  pbVar15 = (byte *)CONCAT31(uVar20,cRam02060000);
  out(*puVar23,uStack_28);
  *pbVar15 = *pbVar15 + cRam02060000;
  puVar36 = (uint *)CONCAT22(uVar28,CONCAT11(bVar26 | *pbVar15,cVar7));
  *(int *)pbVar15 = *(int *)pbVar15 - (int)pbVar15;
  *(byte *)puStack_24 = (byte)*puStack_24 + cVar7;
  out(puVar45[3],uStack_28);
  puVar23 = puVar45 + 4;
  uVar29 = uStack_28;
  if ((POPCOUNT((byte)*puStack_24) & 1U) != 0) goto code_r0x00404cca;
  *pbVar15 = *pbVar15 + cRam02060000;
  puVar10 = (ushort *)CONCAT31(uVar20,(char)iVar13 + '{');
  uVar9 = (ushort)puVar10 | *puVar10;
  pcVar17 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),uVar9);
  bVar5 = (byte)uVar9;
  out(puVar45[4],uStack_28);
  pbVar15 = (byte *)((int)puVar36 + 1);
  bRam11060000 = bVar5;
  *pcVar17 = *pcVar17 + bVar5;
  puVar22 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                             CONCAT11((byte)((uint)pbVar15 >> 8) | bRam110cde91,(char)pbVar15));
  pcVar17 = (char *)CONCAT31((int3)((uint)pcVar17 >> 8),bVar5 - 7);
  *puVar47 = (uint)(pcVar17 + (uint)(bVar5 < 7) + *puVar47);
  puVar23 = puVar45 + 6;
  out(puVar45[5],uStack_28);
  puVar31 = (uint *)((int)puStack_24 + 1);
  *pcVar17 = *pcVar17 + (bVar5 - 7);
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar8 | (byte)(uVar9 >> 8));
  do {
    bVar5 = (char)pcVar17 - *pcVar17;
    uVar37 = *puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + bVar5;
    cVar7 = bVar5 - CARRY1((byte)uVar37,bVar5);
    *(byte *)puVar31 = (byte)*puVar31 + cVar7;
    cVar4 = (char)((uint)puVar22 >> 8);
    *(byte *)(puVar47 + 0x673b40) = (byte)puVar47[0x673b40] + cVar4;
    puVar45 = (uint *)CONCAT31((int3)((uint)pcVar17 >> 8),cVar7);
    *(byte *)puVar45 = (byte)*puVar45 + cVar7;
    *(byte *)puVar31 = (byte)*puVar31 + cVar7;
    puVar38[0x16] = (uint)(puVar38[0x16] + (int)puVar23);
    puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar22 >> 0x10),
                                               CONCAT11(cVar4 + (char)((uint)pcVar17 >> 8),
                                                        (char)puVar22)) >> 8),
                               (char)puVar22 + *(char *)((int)puVar45 * 2));
    *(byte *)puVar45 = (byte)*puVar45 + cVar7;
    *(byte *)puVar23 = (byte)*puVar23 + (char)puVar38;
_ctor:
    bVar26 = (byte)((uint)puVar36 >> 8);
    uVar37 = *puVar45;
    bVar5 = (byte)puVar36;
    puVar45 = (uint *)((int)puVar45 + (uint)CARRY1(bVar26,(byte)*puVar45) + *puVar45);
    *(byte *)puVar31 = (byte)*puVar31 + bVar5;
    cVar7 = bVar5 - *(byte *)((int)puVar31 + 3);
    puVar22 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar36 >> 0x10),
                                               CONCAT11(bVar26 + (byte)uVar37,bVar5)) >> 8),cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      if (*(byte *)((int)puVar31 + 3) <= bVar5) {
        *puVar45 = (uint)(*puVar45 + (int)puVar45);
        puVar31 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),(byte)puVar31 | (byte)*puVar38);
        puVar45 = puVar45 + 0x230e;
        puVar36 = puVar22;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
    cVar7 = (char)puVar45 + '\x02';
    pcVar17 = (char *)CONCAT31((int3)((uint)puVar45 >> 8),cVar7);
    bVar48 = (POPCOUNT(cVar7) & 1U) == 0;
    puVar12 = puVar42;
    puVar36 = puVar47;
    uVar29 = uStack_18;
code_r0x00404ca8:
    uStack_18 = uVar29;
    puVar42 = puStack_8;
    puVar47 = puStack_10;
    if (bVar48) break;
    *(byte *)puVar31 = (byte)*puVar31 + (char)puVar22;
    puVar42 = puVar12;
    puVar47 = puVar36;
  } while( true );
  *pcVar17 = *pcVar17 + (char)pcVar17;
  *param_5 = *param_5 + (byte)param_5;
  puVar36 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                             CONCAT11((byte)((uint)param_4 >> 8) | (byte)*param_3,(char)param_4));
  *(byte *)ppuVar49 = (byte)*ppuVar49 + (char)ppuVar49;
  *(byte *)((int)param_5 * 2) = *(byte *)((int)param_5 * 2) ^ (byte)param_5;
  uVar3 = *(undefined6 *)param_5;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar15 = (byte *)uVar3;
  bVar26 = (byte)uVar3;
  *pbVar15 = *pbVar15 + bVar26;
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar26;
  puVar45 = (uint *)((int)puVar36 + 0x11673);
  uVar37 = *puVar45;
  uVar2 = *puVar45;
  *puVar45 = uVar2 + (int)param_3 + (uint)CARRY1(bVar5,bVar26);
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_18);
  pbVar15 = pbVar15 + (uint)(CARRY4(uVar37,(uint)param_3) ||
                            CARRY4(uVar2 + (int)param_3,(uint)CARRY1(bVar5,bVar26))) +
                      *(int *)((int)puVar36 + (int)param_3);
  puVar31 = param_3;
  puVar38 = (uint *)ppuVar49;
  puVar23 = puStack_c;
  uVar29 = uStack_18;
code_r0x00404cca:
  uStack_18 = uVar29;
  cVar7 = (char)pbVar15 + '\x04';
  puVar45 = (uint *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar7);
  if (SCARRY1((char)pbVar15,'\x04') == cVar7 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
  puVar46 = puVar23 + 1;
  out(*puVar23,(short)puVar31);
  uVar37 = *puVar36;
  uVar2 = *puVar31;
  bVar5 = (byte)puVar36;
  *(byte *)puVar31 = (byte)*puVar31 + bVar5;
  iVar13 = (CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + '\x03') & uVar37) + iRam00008c38;
  *(byte *)puVar36 = (byte)*puVar36 + (char)puVar31;
  pcVar17 = (char *)(iVar13 + (uint)CARRY1((byte)uVar2,bVar5) + 0x1246f);
  uVar20 = (undefined3)((uint)puVar36 >> 8);
  bVar5 = bVar5 | (byte)*puVar31;
  puVar22 = (uint *)CONCAT31(uVar20,bVar5);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar17 >> 8);
  puVar45 = (uint *)(CONCAT31((int3)((uint)pcVar17 >> 8),(char)pcVar17 + *pcVar17) + 0x1fbeef2);
  uVar37 = *puVar45;
  *puVar45 = (uint)(*puVar45 + (int)puVar45);
  if (CARRY4(uVar37,(uint)puVar45)) {
    *puVar45 = (uint)(*puVar45 + (int)puVar45);
    pcVar17 = (char *)CONCAT31(uVar20,bVar5 | bRam00282809);
    cVar7 = (char)((uint)puVar36 >> 8);
    *(byte *)puVar38 = (byte)*puVar38 + cVar7;
    *pcVar17 = *pcVar17 - cVar7;
    *(byte *)puVar45 = *(byte *)puVar45 + (char)puVar45;
    iVar13 = (int)pcVar17 - *puVar38;
    puVar23 = puVar23 + 2;
    out(*puVar46,(short)puVar31);
    *puVar45 = (uint)(*puVar45 + (int)puVar45);
    puVar22 = (uint *)CONCAT22((short)((uint)iVar13 >> 0x10),
                               CONCAT11((byte)((uint)iVar13 >> 8) | bRambf73070b,(char)iVar13));
code_r0x00404d15:
    uVar37 = *puVar45;
    bVar5 = (byte)puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar5;
    puVar46 = puVar23 + 1;
    out(*puVar23,(short)puVar31);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar26 = bVar5 + in_AF * '\x06';
    puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                               bVar26 + (0x90 < (bVar26 & 0xf0) |
                                        CARRY1((byte)uVar37,bVar5) | in_AF * (0xf9 < bVar26)) * '`')
    ;
  }
  *puVar45 = (uint)(*puVar45 + (int)puVar45);
  bVar5 = (byte)puVar45 | (byte)*puVar47;
  puVar23 = puVar46 + 1;
  uVar28 = SUB42(puVar31,0);
  out(*puVar46,uVar28);
  *(byte *)puVar22 = (byte)*puVar22 - bVar5;
  uVar37 = *puVar31;
  bVar26 = (byte)puVar22;
  *(byte *)puVar31 = (byte)*puVar31 + bVar26;
  iVar13 = CONCAT31((int3)((uint)puVar45 >> 8),bVar5) + *puVar23 + (uint)CARRY1((byte)uVar37,bVar26)
  ;
  pcVar17 = (char *)((int)puVar42 - *puVar31);
  uVar20 = (undefined3)((uint)iVar13 >> 8);
  cVar7 = (char)iVar13 + (byte)*puVar23 + (puVar42 < (undefined4 *)*puVar31);
  puVar45 = (uint *)CONCAT31(uVar20,cVar7);
  bVar5 = (byte)((uint)puVar22 >> 8);
  *(byte *)puVar22 = (byte)*puVar22 - bVar5;
  *puVar45 = (uint)(*puVar45 + (int)puVar45);
  bVar26 = bVar26 | *(byte *)((int)puVar31 + (int)puVar45);
  uVar29 = (undefined2)((uint)puVar22 >> 0x10);
  if ((POPCOUNT(bVar26) & 1U) == 0) {
    *(byte *)puVar45 = (byte)*puVar45 + cVar7;
    pcVar18 = (char *)CONCAT31(uVar20,cVar7 + '\x12');
    *pcVar18 = *pcVar18 + bVar5;
    puVar45 = (uint *)CONCAT31(uVar20,(cVar7 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar22 >> 8),bVar26));
    uVar37 = *puVar31;
    *(byte *)puVar31 = (byte)*puVar31 + bVar26;
    if (!CARRY1((byte)uVar37,bVar26)) {
      pbVar15 = (byte *)((uint)puVar45 | *puVar45);
      out(*puVar23,uVar28);
      *pbVar15 = *pbVar15 + (char)pbVar15;
      bVar6 = *pbVar15;
      piVar16 = (int *)CONCAT22(uVar29,CONCAT11(bVar5 | bVar6,bVar26));
      iVar13 = (int)pbVar15 - *piVar16;
      *(byte *)puVar31 = (byte)*puVar31 + bVar26;
      puVar45 = puVar46 + 3;
      out(puVar46[2],uVar28);
      uRam12060000 = (undefined1)iVar13;
      *(char *)((int)piVar16 + iVar13) = *(char *)((int)piVar16 + iVar13) - (bVar5 | bVar6);
      *(byte *)puVar31 = (byte)*puVar31 + bVar26;
      pbVar15 = (byte *)(iVar13 + -0x120edecd);
      *(byte *)puVar45 = (byte)*puVar45 + 1;
      bVar5 = *pbVar15;
      bVar6 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar6;
      pcVar17 = pcVar17 + ((-1 - *(int *)((int)puVar47 + 0x42)) - (uint)CARRY1(bVar5,bVar6));
      *pbVar15 = *pbVar15 + bVar6;
      bVar5 = (byte)puVar38 | (byte)((uint)pbVar15 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar15;
      uVar37 = *puVar31;
      pcVar18 = (char *)(((uint)pbVar15 | 0x11) + 0x511072c);
      puVar23 = puVar46 + 4;
      out(*puVar45,uVar28);
      puVar31 = (uint *)((int)puVar31 + 1);
      *pcVar18 = *pcVar18 + (char)pcVar18;
      bVar6 = (byte)((uint)pcVar18 >> 8);
      puVar38 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar38 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar38 >> 8) | (byte)uVar37,
                                                          bVar5)) >> 8),bVar5 | bVar6);
      uVar20 = (undefined3)((uint)pcVar18 >> 8);
      bVar5 = (char)pcVar18 - *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar20,bVar5);
      *pcVar18 = *pcVar18 + bVar5;
      *(int *)((int)pcVar18 * 2) = (int)(*(int *)((int)pcVar18 * 2) + (int)puVar38);
      *(byte *)puVar31 = *(byte *)puVar31 + bVar5;
      *pcVar17 = *pcVar17 + bVar6;
      in_AF = 9 < (bVar5 & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar20,bVar5 + in_AF * '\x06') & 0xffffff0f;
      bVar5 = (byte)uVar37;
      pbVar15 = (byte *)CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar6 + in_AF,bVar5));
      *(byte *)puVar23 = (byte)*puVar23 + bVar26;
      *pbVar15 = *pbVar15 + bVar5;
      *pbVar15 = *pbVar15 + bVar5;
      bVar48 = CARRY1(bVar5,*pbVar15);
      puVar45 = (uint *)CONCAT31((int3)((uint)pbVar15 >> 8),bVar5 + *pbVar15);
      goto code_r0x00404d9a;
    }
    *(byte *)puVar38 = (byte)*puVar38 - (char)puVar31;
  }
  *(byte *)puVar45 = (byte)*puVar45 + (char)puVar45;
  bVar48 = false;
  piVar16 = (int *)CONCAT22(uVar29,CONCAT11(bVar5 | (byte)*puVar31,bVar26));
code_r0x00404d9a:
  do {
    puVar36 = puVar31;
    *puVar45 = (*puVar45 - (int)puVar45) - (uint)bVar48;
    bVar5 = (byte)((uint)piVar16 >> 8);
    uVar29 = (undefined2)((uint)piVar16 >> 0x10);
    bVar26 = (byte)piVar16;
    bVar6 = bVar5 + (byte)iRam00000c00;
    pbVar15 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar5,(byte)iRam00000c00));
    *(byte *)puVar36 = (byte)*puVar36 + bVar26;
    puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 - (byte)*puVar23);
    bVar5 = *pbVar15;
    puVar45 = (uint *)(pbVar15 + (uint)CARRY1(bVar6,*pbVar15) + *(int *)pbVar15);
    *(byte *)puVar36 = (byte)*puVar36 + bVar26;
    cVar4 = ((bVar6 + bVar5) - (byte)*puVar36) + (byte)*puVar45;
    pcVar18 = (char *)CONCAT22(uVar29,CONCAT11(cVar4,bVar26));
    puVar31 = puVar47 + 1;
    uVar37 = in((short)puVar36);
    *puVar47 = uVar37;
    cVar7 = (char)puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + cVar7;
    uVar20 = (undefined3)((uint)puVar36 >> 8);
    bVar6 = (byte)puVar36 | (byte)*puVar23;
    pcVar24 = (char *)CONCAT31(uVar20,bVar6);
    *pcVar18 = *pcVar18 + '\x01';
    bVar5 = (cVar4 - *pcVar24) + (byte)*puVar45;
    pcVar18 = (char *)CONCAT22(uVar29,CONCAT11(bVar5,bVar26));
    puVar47 = puVar47 + 2;
    uVar37 = in((short)pcVar24);
    *puVar31 = uVar37;
    *(byte *)puVar45 = (byte)*puVar45 + cVar7;
    bVar6 = bVar6 | (byte)*puVar23;
    puVar31 = (uint *)CONCAT31(uVar20,bVar6);
    *pcVar18 = *pcVar18 + '\x01';
    bVar48 = bVar26 < *(byte *)((int)puVar31 + 2);
    cVar4 = bVar26 - *(byte *)((int)puVar31 + 2);
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar4);
  } while ((POPCOUNT(cVar4) & 1U) != 0);
  *(byte *)puVar45 = (byte)*puVar45 + cVar7;
  bVar26 = cVar7 + 0x7b;
  pbVar15 = (byte *)CONCAT31((int3)((uint)puVar45 >> 8),bVar26);
  *(byte *)((int)puVar38 + (int)pbVar15) = *(byte *)((int)puVar38 + (int)pbVar15) + bVar26;
  puVar45 = puVar23 + 1;
  uVar28 = SUB42(puVar31,0);
  out(*puVar23,uVar28);
  pbVar14 = (byte *)((int)puVar38 + -1);
  *pbVar15 = *pbVar15 + bVar26;
  bVar5 = bVar5 | (byte)*puVar31;
  piVar16 = (int *)CONCAT22(uVar29,CONCAT11(bVar5,cVar4));
  *pbVar15 = *pbVar15 + bVar26;
  *pbVar14 = *pbVar14 + bVar6;
  *pbVar14 = *pbVar14 ^ bVar26;
  *(byte *)puVar31 = (byte)*puVar31 + bVar5;
  *pbVar15 = *pbVar15 + bVar26;
  do {
    bVar27 = (byte)((uint)piVar16 >> 8);
    *(byte *)puVar47 = (byte)*puVar47 + bVar27;
    bVar5 = *pbVar15;
    bVar26 = (byte)pbVar15;
    *pbVar15 = *pbVar15 + bVar26;
    *(byte **)((int)puVar38 + 0x17) =
         (byte *)((int)puVar45 + (uint)CARRY1(bVar5,bVar26) + *(int *)((int)puVar38 + 0x17));
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    uVar21 = (undefined3)((uint)pbVar15 >> 8);
    bVar26 = bVar26 | (byte)*puVar45;
    puVar47 = (uint *)((int)puVar47 + *(int *)(pcVar17 + -0x34));
    *(char *)CONCAT31(uVar21,bVar26) = *(char *)CONCAT31(uVar21,bVar26) + bVar26;
    bVar5 = bVar26 + 2;
    cVar7 = (char)((uint)puVar36 >> 8);
    bVar8 = (byte)piVar16;
    if ((POPCOUNT(bVar5) & 1U) != 0) {
      pbVar15 = (byte *)CONCAT31(uVar21,bVar26 + 0x15 + (0xfd < bVar26));
      if (0xec < bVar5 || CARRY1(bVar26 + 0x15,0xfd < bVar26)) {
        *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      }
code_r0x00404e60:
      pcVar17 = pcVar17 + -*puVar31;
      bVar5 = *pbVar15;
      *pbVar15 = *pbVar15 + (byte)pbVar15;
      pbVar32 = (byte *)((int)puVar45 + (-(uint)CARRY1(bVar5,(byte)pbVar15) - *(int *)pbVar15));
      pbVar15 = pbVar15 + *(int *)pbVar15;
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
      *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      *(char *)piVar16 = (char)*piVar16 + cVar7;
      bVar5 = *pbVar15;
      *pbVar15 = *pbVar15 + (byte)pbVar15;
      *(byte **)(pbVar14 + (int)puVar31) =
           (byte *)((int)puVar31 +
                   (uint)CARRY1(bVar5,(byte)pbVar15) + *(int *)(pbVar14 + (int)puVar31));
      pbVar15 = pbVar15 + 0x73061314;
      *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
      uVar21 = (undefined3)((uint)piVar16 >> 8);
      bVar8 = bVar8 | (byte)*puVar31;
      pcVar24 = (char *)CONCAT31(uVar21,bVar8);
      *pbVar15 = *pbVar15 + (char)pbVar15;
      cVar7 = (char)pbVar15 + 'o';
      pcVar18 = (char *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar7);
      *pcVar18 = *pcVar18 + cVar7;
      out(*(undefined4 *)pbVar32,uVar28);
      uVar37 = *puVar31;
      *(byte *)puVar31 = (byte)*puVar31 + bVar8;
      pcVar18 = pcVar18 + (uint)CARRY1((byte)uVar37,bVar8) + *puVar47;
      *pcVar18 = *pcVar18 + (char)pcVar18;
      *pcVar24 = *pcVar24 + bVar6;
      puVar45 = (uint *)(pbVar32 + 8);
      out(*(undefined4 *)(pbVar32 + 4),uVar28);
      *(byte *)puVar31 = (byte)*puVar31 + bVar8;
      piVar16 = (int *)((uint)pcVar18 | *puVar47);
      pcVar24[0x390a0000] = pcVar24[0x390a0000] - bVar27;
      pbVar14 = (byte *)0x7000000;
      *(byte *)puVar47 = (byte)*puVar47 - bVar27;
      *piVar16 = *piVar16 + (int)piVar16;
      puVar23 = (uint *)CONCAT31(uVar21,bVar8 | *(byte *)((int)piVar16 + (int)pcVar24));
      *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) - bVar27;
      cRam07000000 = cRam07000000 + bVar27;
      piVar16 = (int *)((uint)piVar16 | 0x777b02);
      pbVar15 = (byte *)((int)puVar47 + (int)pcVar17 * 2);
      bVar48 = SCARRY1(*pbVar15,(char)piVar16);
      *pbVar15 = *pbVar15 + (char)piVar16;
      bVar5 = *pbVar15;
      *(char *)piVar16 = (char)*piVar16;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar21,bVar5) = *(char *)CONCAT31(uVar21,bVar5) + bVar5;
    bVar26 = bVar26 + 0x71;
    pbVar15 = (byte *)CONCAT31(uVar21,bVar26);
    *pbVar15 = *pbVar15;
    *(byte *)puVar45 = (byte)*puVar45 + 1;
    *piVar16 = (*piVar16 - (int)pbVar15) - (uint)(0x90 < bVar5);
    uVar37 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar26;
    if (!CARRY1((byte)uVar37,bVar26)) goto code_r0x00404e60;
    *pbVar15 = *pbVar15 + bVar26;
    uVar29 = (undefined2)((uint)piVar16 >> 0x10);
    bVar27 = bVar27 | *pbVar15;
    pbVar15 = pbVar15 + -*(int *)pbVar15;
    *pbVar14 = *pbVar14 + bVar27;
    cVar4 = bVar8 - *(byte *)((int)puVar31 + 2);
    piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar29,CONCAT11(bVar27,bVar8)) >> 8),cVar4);
  } while ((POPCOUNT(cVar4) & 1U) != 0);
  cVar34 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar34;
  uVar21 = (undefined3)((uint)pbVar15 >> 8);
  pcVar18 = (char *)CONCAT31(uVar21,cVar34 + '{');
  out(*puVar45,uVar28);
  *pcVar18 = *pcVar18 + cVar34 + '{';
  bVar26 = cVar34 + 0x7e;
  pbVar15 = (byte *)CONCAT31(uVar21,bVar26);
  puVar45 = puVar23 + 3;
  out(puVar23[2],uVar28);
  pbVar14 = (byte *)((int)puVar38 + -2);
  *pbVar15 = *pbVar15 + bVar26;
  bVar27 = bVar27 | (byte)*puVar31;
  puVar23 = (uint *)CONCAT22(uVar29,CONCAT11(bVar27,cVar4));
  *pbVar15 = *pbVar15 + bVar26;
  *pbVar14 = *pbVar14 + bVar6;
  *pbVar14 = *pbVar14 ^ bVar26;
  *(byte *)puVar31 = (byte)*puVar31 + bVar27;
  *pbVar15 = *pbVar15 + bVar26;
  *pbVar15 = *pbVar15 + cVar7;
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar26;
  puVar38[6] = (uint)((int)puVar45 + (uint)CARRY1(bVar5,bVar26) + puVar38[6]);
  *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
  bVar26 = bVar26 | (byte)*puVar45;
  puVar47 = (uint *)((int)puVar47 + *(int *)(pcVar17 + -0x33));
  *(char *)CONCAT31(uVar21,bVar26) = *(char *)CONCAT31(uVar21,bVar26) + bVar26;
  bVar48 = SCARRY1(bVar26,'\x02');
  bVar5 = bVar26 + 2;
  piVar16 = (int *)CONCAT31(uVar21,bVar5);
  if ((POPCOUNT(bVar5) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    return CONCAT31(uVar21,bVar26 + 0x71);
  }
code_r0x00404ebf:
  bVar26 = (byte)piVar16;
  uVar21 = (undefined3)((uint)piVar16 >> 8);
  if (bVar5 != 0 && bVar48 == (char)bVar5 < '\0') {
    *(byte *)piVar16 = (char)*piVar16 + bVar26;
    puVar45[(int)puVar47 * 2] =
         (uint)((int)puVar31 + (uint)(0xd2 < bVar26) + puVar45[(int)puVar47 * 2]);
    return CONCAT31(uVar21,bVar26 + 0x2d);
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar5 = *pbVar14;
  *puVar45 = (uint)(*puVar45 + (int)piVar16);
  bVar8 = (byte)((uint)puVar23 >> 8);
  *(byte *)piVar16 = (char)*piVar16 - bVar8;
  *(byte *)piVar16 = (char)*piVar16 + bVar26;
  pbVar15 = (byte *)(CONCAT31(uVar20,bVar6 | bVar5) - *(int *)pbVar14);
  puVar38 = (uint *)CONCAT31(uVar21,bVar26 + 6);
  *(uint *)(pbVar14 + (int)puVar45 * 2) =
       (int)puVar38 + (uint)(0xf9 < bVar26) + *(int *)(pbVar14 + (int)puVar45 * 2);
  *(byte *)puVar23 = (byte)*puVar23 ^ bVar26 + 6;
  bVar26 = (byte)puVar23;
  *pbVar15 = *pbVar15 + bVar26;
  puVar31 = puVar45 + 1;
  uVar29 = SUB42(pbVar15,0);
  out(*puVar45,uVar29);
  *puVar23 = *puVar23 ^ (uint)puVar38;
  *pbVar15 = *pbVar15 + bVar26;
  puVar36 = (uint *)(pbVar14 + -*(int *)pbVar14);
  *(uint *)((int)puVar47 + 0x31) = *(uint *)((int)puVar47 + 0x31) | (uint)pcVar17;
  *puVar38 = *puVar38 + (int)puVar38;
  puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),CONCAT11(bVar8 | (byte)*puVar36,bVar26))
  ;
  *(byte **)(pbVar15 + 0x6e) = (byte *)(*(int *)(pbVar15 + 0x6e) + (int)puVar31);
  piVar16 = (int *)((uint)puVar38 | *puVar38);
  bVar6 = (byte)puVar36;
  *(byte *)puVar47 = (byte)*puVar47 - bVar6;
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar26;
  if (CARRY1(bVar5,bVar26)) {
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar5 = pbVar15[0x11];
    uVar28 = (undefined2)((uint)puVar36 >> 0x10);
    out(*puVar31,uVar29);
    puVar23 = (uint *)((int)puVar23 + 1);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar30 = (byte)((uint)puVar36 >> 8) | bVar5 | *pbVar15;
    pcVar18 = (char *)((int)piVar16 + -0x21000001);
    bVar5 = (byte)pcVar18 | 0x11;
    uVar20 = (undefined3)((uint)pcVar18 >> 8);
    cVar7 = bVar5 - 7;
    pcVar24 = (char *)CONCAT31(uVar20,cVar7);
    *puVar47 = (uint)(pcVar24 + (uint)(bVar5 < 7) + *puVar47);
    puVar31 = puVar45 + 3;
    out(puVar45[2],uVar29);
    pbVar15 = pbVar15 + 1;
    *pcVar24 = *pcVar24 + cVar7;
    bVar8 = (byte)((uint)pcVar18 >> 8);
    bVar27 = bVar6 | bVar8;
    bVar26 = cVar7 - *pcVar24;
    bVar5 = *(byte *)puVar23;
    *(byte *)puVar23 = *(byte *)puVar23 + bVar26;
    *(char *)CONCAT31(uVar20,bVar26) =
         *(char *)CONCAT31(uVar20,bVar26) + bVar26 + CARRY1(bVar5,bVar26);
    *pbVar15 = *pbVar15 + bVar26;
    *(byte *)puVar31 = (byte)*puVar31 + bVar27;
    bVar5 = (byte)((uint)pbVar15 >> 8);
    *(byte *)puVar23 = *(byte *)puVar23 + bVar26 + CARRY1((byte)pbVar15,bVar5);
    piVar16 = (int *)CONCAT31(uVar20,bVar26);
    *(byte *)piVar16 = (char)*piVar16 + bVar26;
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11(bVar5 + bVar8,(byte)pbVar15 + bVar5));
    puVar36 = (uint *)CONCAT22(uVar28,CONCAT11(bVar30 + *(char *)(CONCAT31((int3)(CONCAT22(uVar28,
                                                  CONCAT11(bVar30,bVar6)) >> 8),bVar27) + 0x76),
                                               bVar27));
    uStack_18 = puStack_24._0_2_;
code_r0x00404fa4:
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pcVar18 = (char *)(CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '(') ^ *puVar23);
    cVar34 = (char)puVar23;
    *pbVar15 = *pbVar15 + cVar34;
    uVar29 = (undefined2)((uint)puVar36 >> 0x10);
    cVar35 = (char)puVar36;
    cVar39 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x75);
    *pcVar18 = *pcVar18 + (char)pcVar18;
    cVar7 = (char)pcVar18 + 'o';
    pcVar18 = (char *)CONCAT31((int3)((uint)pcVar18 >> 8),cVar7);
    *pcVar18 = *pcVar18 + cVar7;
    cVar40 = (char)((uint)puVar23 >> 8);
    *pcVar17 = *pcVar17 - cVar40;
    pbVar15[1] = pbVar15[1] + cVar34;
    pcVar18 = pcVar18 + -0x757b021b;
    cVar7 = (char)pcVar18;
    *pcVar18 = *pcVar18 + cVar7;
    uVar20 = (undefined3)((uint)pcVar18 >> 8);
    cVar4 = cVar7 + 'o';
    pcVar18 = (char *)CONCAT31(uVar20,cVar4);
    pbVar32 = pbVar15 + 2;
    *pcVar18 = *pcVar18 + cVar4;
    iVar13 = CONCAT22(uVar29,CONCAT11(cVar39 + *(char *)(CONCAT22(uVar29,CONCAT11(cVar39,cVar35)) +
                                                        0x76),cVar35));
    *pcVar18 = *pcVar18 + cVar4;
    pcVar18 = (char *)CONCAT31(uVar20,cVar7 + -0x22);
    puVar45 = (uint *)((int)puVar47 + 1);
    *(byte *)puVar47 = (byte)*puVar31;
    *pcVar18 = *pcVar18 + cVar7 + -0x22;
    *(byte *)((int)puVar23 + (int)pcVar18) =
         *(byte *)((int)puVar23 + (int)pcVar18) - (char)((uint)pbVar32 >> 8);
    *pbVar32 = *pbVar32 + cVar34;
    bVar26 = cVar40 - pbVar15[4];
    pbVar14 = (byte *)((int)puVar31 + 5);
    out(*(undefined4 *)((int)puVar31 + 1),(short)pbVar32);
    puVar31 = (uint *)((uint)(pcVar18 + *(int *)(pcVar18 + iVar13)) ^ 0x280a0001);
    *(byte *)puVar31 = (byte)*puVar31 << 1 | (char)(byte)*puVar31 < '\0';
    *pbVar14 = *pbVar14 + (char)puVar31;
    pbVar14 = pbVar14 + *(int *)(pbVar15 + -0x5c);
    pbVar15 = (byte *)((uint)puVar31 | *puVar31);
    *pbVar14 = *pbVar14 + (char)pbVar15;
    puVar36 = (uint *)CONCAT31((int3)((uint)iVar13 >> 8),cVar35 - (char)pbVar32);
    bVar5 = *pbVar15;
    puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),CONCAT11(bVar26 + *pbVar15,cVar34));
    iVar13 = *(int *)pbVar15;
    *pbVar32 = *pbVar32 + cVar34;
    cVar7 = (char)(pbVar15 + (uint)CARRY1(bVar26,bVar5) + iVar13) + 'r';
    puVar47 = (uint *)CONCAT31((int3)((uint)(pbVar15 + (uint)CARRY1(bVar26,bVar5) + iVar13) >> 8),
                               cVar7);
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar32 >> 0x10),CONCAT11(10,(char)pbVar32));
    *(char *)(puVar47 + 10) = (char)puVar47[10] + '\n';
    *pbVar14 = *pbVar14 + cVar7;
    puVar31 = (uint *)(pbVar14 + *(int *)(pbVar15 + -0x5e));
    uVar37 = *puVar47;
    cVar7 = (char)((uint)puVar47 | uVar37);
    *(byte *)puVar31 = (byte)*puVar31 + cVar7;
    uVar20 = (undefined3)(((uint)puVar47 | uVar37) >> 8);
    cVar4 = cVar7 + (byte)*puVar36;
    puVar47 = (uint *)CONCAT31(uVar20,cVar4);
    if (SCARRY1(cVar7,(byte)*puVar36) == cVar4 < '\0') goto code_r0x00405090;
    *(byte *)puVar47 = (byte)*puVar47 + cVar4;
    piVar16 = (int *)CONCAT31(uVar20,cVar4 + '\x02');
    puVar47 = puVar45;
  }
  else {
    out(2,(char)piVar16);
    if ((POPCOUNT(*pbVar15) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  cVar7 = (char)piVar16 + '}';
  pbVar14 = (byte *)CONCAT31(uVar20,cVar7);
  pbVar15[(int)pbVar14] = pbVar15[(int)pbVar14] + cVar7;
  pbVar15[0x280a0000] = pbVar15[0x280a0000] - (char)((uint)piVar16 >> 8);
  bVar5 = (byte)puVar23 & 7;
  *pbVar14 = *pbVar14 << bVar5 | *pbVar14 >> 8 - bVar5;
  *(byte *)puVar31 = (byte)*puVar31 + cVar7;
  cVar34 = (char)puVar36 - (byte)*puVar31;
  uVar29 = (undefined2)((uint)puVar36 >> 0x10);
  cVar40 = (char)((uint)puVar36 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar34) + 0x7c);
  pcVar18 = (char *)CONCAT22(uVar29,CONCAT11(cVar40,cVar34));
  *pbVar14 = *pbVar14 + cVar7;
  bVar26 = (char)piVar16 + 0xa7U & *pbVar15;
  puVar45 = (uint *)((int)puVar47 + *(int *)(pcVar17 + 0x7c));
  *(char *)CONCAT31(uVar20,bVar26) = *(char *)CONCAT31(uVar20,bVar26) + bVar26;
  bVar26 = bVar26 + 0x2a;
  pbVar14 = (byte *)CONCAT31(uVar20,bVar26);
  *pbVar14 = *pbVar14 + bVar26;
  *pcVar18 = *pcVar18 + cVar34;
  *pbVar15 = *pbVar15 ^ bVar26;
  *pcVar18 = *pcVar18 + bVar26;
  bVar5 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar26;
  cVar7 = (bVar26 - *pbVar14) - CARRY1(bVar5,bVar26);
  *(byte *)puVar23 = (byte)*puVar23 + (byte)pbVar15;
  cVar40 = cVar40 + pcVar18[0x7b];
  *(char *)CONCAT31(uVar20,cVar7) = *(char *)CONCAT31(uVar20,cVar7) + cVar7;
  pcVar18 = (char *)CONCAT31(uVar20,cVar7 + 'o');
  *pcVar18 = *pcVar18 + cVar7 + 'o';
  pcVar18 = pcVar18 + 0x2ed7fde6;
  cVar4 = (char)pcVar18;
  *pcVar18 = *pcVar18 + cVar4;
  cVar7 = *(char *)(CONCAT22(uVar29,CONCAT11(cVar40,cVar34)) + 0x7b);
  *pcVar18 = *pcVar18 + cVar4;
  piVar16 = (int *)(CONCAT31((int3)((uint)pcVar18 >> 8),cVar4 + 'o') + 0x6f060000);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar21 = (undefined3)((uint)pbVar15 >> 8);
  bVar26 = (byte)pbVar15 | (byte)*puVar31;
  pbVar32 = (byte *)CONCAT31(uVar21,bVar26);
  uVar37 = CONCAT22(uVar29,CONCAT11(cVar40 + cVar7,cVar34)) | (uint)puVar31;
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  bVar5 = (byte)piVar16 | *pbVar32;
  pbVar14 = (byte *)CONCAT31(uVar20,bVar5);
  cVar7 = (byte)puVar23 - bVar26;
  puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),cVar7);
  *pbVar14 = *pbVar14 + bVar5;
  puVar47 = puVar31 + 1;
  out(*puVar31,(short)pbVar32);
  *pbVar14 = bVar5;
  *pbVar32 = *pbVar32 + cVar7;
  puVar31 = puVar31 + 2;
  out(*puVar47,(short)pbVar32);
  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
  puVar36 = (uint *)(CONCAT31((int3)(uVar37 >> 8),(char)uVar37 - (char)((uint)pbVar15 >> 8)) |
                    (uint)puVar31);
  pbVar15 = (byte *)CONCAT31(uVar21,(bVar26 | (byte)*puVar31) + (byte)*puVar45);
  cVar7 = bVar5 - (byte)*puVar45;
  puVar47 = (uint *)CONCAT31(uVar20,cVar7 - *(char *)CONCAT31(uVar20,cVar7));
code_r0x00405090:
  *puVar47 = (uint)(pbVar15 + *puVar47);
  cVar7 = (char)puVar47;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7;
  *puVar23 = *puVar23 - (int)pcVar17;
  uVar37 = *puVar31;
  bVar5 = (byte)pbVar15;
  *(byte *)puVar31 = (byte)*puVar31 + bVar5;
  *(byte *)puVar47 = (byte)*puVar47 + cVar7 + CARRY1((byte)uVar37,bVar5);
  *(byte *)puVar23 = (byte)*puVar23 + cVar7;
  uVar37 = *puVar36;
  *(byte *)puVar36 = (byte)*puVar36 + 0x72;
  *(byte *)puVar36 = (byte)*puVar36;
  cVar7 = (char)((uint)pbVar15 >> 8);
  if (SCARRY1((byte)uVar37,'r')) {
    puVar31 = (uint *)((int)puVar31 + *(int *)(pbVar15 + -10));
  }
  else {
    while( true ) {
      *(byte *)puVar31 = (byte)*puVar31 + (char)puVar47;
      uVar20 = (undefined3)((uint)puVar47 >> 8);
      cVar4 = (char)puVar47 + (byte)*puVar36;
      pcVar18 = (char *)CONCAT31(uVar20,cVar4);
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) +
                                          *(byte *)((int)puVar36 + 0x7b),(char)puVar36));
      *pcVar18 = *pcVar18 + cVar4;
      in_AF = 9 < (cVar4 + 0x6fU & 0xf) | in_AF;
      uVar37 = CONCAT31(uVar20,cVar4 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar6 = (byte)uVar37;
      piVar16 = (int *)CONCAT22((short)(uVar37 >> 0x10),
                                CONCAT11((char)((uint)puVar47 >> 8) + in_AF,bVar6));
      *piVar16 = *piVar16 + (int)piVar16;
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar6 = bVar6 | *(byte *)(piVar16 + 0x354a);
      bVar6 = bVar6 - *(char *)CONCAT31(uVar20,bVar6);
      pbVar14 = (byte *)CONCAT31(uVar20,bVar6);
      bVar26 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar6;
      puVar31 = (uint *)((int)puVar31 + (-(uint)CARRY1(bVar26,bVar6) - *(int *)pbVar14));
      puVar47 = (uint *)(pbVar14 + 0xfc00);
      *pbVar15 = *pbVar15 + cVar7;
      uVar37 = *puVar47;
      bVar26 = (byte)puVar47;
      *(byte *)puVar47 = (byte)*puVar47 + bVar26;
      uVar11 = (uint)CARRY1((byte)uVar37,bVar26);
      uVar37 = *puVar36;
      uVar2 = *puVar36;
      *puVar36 = (uint)((byte *)(uVar2 + (int)puVar47) + uVar11);
      if (!CARRY4(uVar37,(uint)puVar47) && !CARRY4(uVar2 + (int)puVar47,uVar11)) break;
      *(byte *)puVar47 = (byte)*puVar47 + bVar26;
    }
  }
  uVar37 = (uint)puVar47 | *puVar47;
  uVar29 = SUB42(pbVar15,0);
  *(byte *)puVar31 = (byte)*puVar31 + (char)uVar37;
  piVar16 = (int *)(uVar37 + 0xc1872);
  if (SCARRY4(uVar37,0xc1872)) {
    cVar4 = (char)piVar16;
    *(char *)piVar16 = *(char *)piVar16 + cVar4;
    *pbVar15 = *pbVar15 + cVar4;
    *(char *)piVar16 = *(char *)piVar16 + cVar4;
    *(byte *)puVar36 = (byte)*puVar36 + (char)puVar23;
    *(char *)piVar16 = *(char *)piVar16 + cVar4;
    *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) + bVar5;
    puVar47 = puVar31;
    goto code_r0x00405117;
  }
  do {
    uVar37 = *puVar31;
    bVar5 = (byte)piVar16;
    *(byte *)puVar31 = (byte)*puVar31 + bVar5;
    if (CARRY1((byte)uVar37,bVar5)) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      uVar20 = (undefined3)((uint)puVar23 >> 8);
      bVar26 = (byte)puVar23 | bRam396f1609;
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      puVar23 = (uint *)CONCAT31(uVar20,bVar26 | *(byte *)CONCAT31(uVar20,bVar26));
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar5 = bVar5 | *pbVar15;
      pcVar18 = (char *)CONCAT31(uVar20,bVar5);
      if ((POPCOUNT(bVar5) & 1U) != 0) {
        puVar47 = puVar31 + 1;
        out(*puVar31,uVar29);
        uVar37 = CONCAT22((short)((uint)piVar16 >> 0x10),(ushort)bVar5);
        *(byte *)puVar47 = (byte)*puVar47 + bVar5;
        pcVar18 = (char *)(uVar37 | 8);
        cVar4 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + 0x7a);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(cVar4,(char)puVar36));
        *pcVar18 = *pcVar18 + (char)pcVar18;
        cVar7 = (char)pcVar18 + 'o';
        piVar16 = (int *)CONCAT31((int3)(uVar37 >> 8),cVar7);
        *(char *)piVar16 = (char)*piVar16 + cVar7;
        *(byte *)puVar23 = (byte)*puVar23 + 1;
        puVar31 = puVar31 + 2;
        out(*puVar47,uVar29);
        pbVar15 = (byte *)((uint)pbVar15 ^ uRam08122c04);
        iVar13 = CONCAT31((int3)((uint)(*piVar16 * 0x17070600) >> 8),2);
        *(char *)(iVar13 * 2) = *(char *)(iVar13 * 2) - cVar4;
        do {
          bVar5 = (byte)iVar13;
          *(byte *)puVar31 = (byte)*puVar31 + bVar5;
          bVar48 = CARRY1(bVar5,(byte)*puVar38);
          uVar20 = (undefined3)((uint)iVar13 >> 8);
          cVar7 = bVar5 + (byte)*puVar38;
          pbVar14 = (byte *)CONCAT31(uVar20,cVar7);
          uVar29 = in_DS;
          uVar28 = uStack_64;
          if (SCARRY1(bVar5,(byte)*puVar38) == cVar7 < '\0') goto GenerateStatusText;
          *pbVar14 = *pbVar14 + cVar7;
          uVar37 = CONCAT31(uVar20,cVar7 + '\'') + 0x1ebd9f3;
          uStack_68 = (undefined1)uStack_18;
          uStack_67 = (undefined1)((ushort)uStack_18 >> 8);
          piVar16 = (int *)(uVar37 ^ 0x73060000);
          puVar23 = (uint *)((int)puVar23 + 1);
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                     CONCAT11((byte)((uint)puVar38 >> 8) | pcVar17[0x7e],
                                              (char)puVar38));
          cVar7 = (char)uVar37;
          *(char *)piVar16 = (char)*piVar16 + cVar7;
          uVar37 = CONCAT31((int3)((uint)piVar16 >> 8),cVar7 + '\x02');
          bVar48 = 0xd9f2d2da < uVar37;
          iVar13 = uVar37 + 0x260d2d25;
          pcVar18 = pcVar17;
          do {
            uVar20 = (undefined3)((uint)iVar13 >> 8);
            bVar26 = (char)iVar13 + -2 + bVar48;
            pbVar14 = (byte *)CONCAT31(uVar20,bVar26);
            bVar5 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar26;
            bVar6 = (byte)puVar38;
            uStack_64 = uStack_18;
            if (CARRY1(bVar5,bVar26)) {
              *pbVar14 = *pbVar14 + bVar26;
              puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                         CONCAT11((byte)((uint)puVar38 >> 8) | pcVar18[0x7f],bVar6))
              ;
              *pbVar14 = *pbVar14 + bVar26;
              pbVar14 = (byte *)CONCAT31(uVar20,bVar26 + 0x2a);
              *pbVar14 = *pbVar14 + bVar26 + 0x2a;
              *(byte *)puVar38 = (byte)*puVar38 + (char)pbVar15;
              uVar29 = in_DS;
              while( true ) {
                in_DS = uVar29;
                bVar26 = (byte)pbVar14;
                *pbVar15 = *pbVar15 ^ bVar26;
                *pbVar15 = *pbVar15 + (char)puVar38;
                *pbVar14 = *pbVar14 + bVar26;
                *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pbVar15 >> 8);
                bVar5 = *pbVar14;
                *pbVar14 = *pbVar14 + bVar26;
                uVar2 = *puVar38;
                uVar37 = *puVar38;
                *puVar38 = (uint)(pbVar14 + uVar37 + CARRY1(bVar5,bVar26));
                uVar20 = (undefined3)((uint)pbVar14 >> 8);
                if (CARRY4(uVar2,(uint)pbVar14) ||
                    CARRY4((uint)(pbVar14 + uVar37),(uint)CARRY1(bVar5,bVar26))) break;
                *(byte *)puVar31 = (byte)*puVar31 + bVar26;
                pcVar24 = (char *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                           CONCAT11((char)((uint)puVar23 >> 8) + *pbVar14,
                                                    (char)puVar23));
                *(byte *)puVar31 = (byte)*puVar31 + bVar26;
                piVar16 = (int *)CONCAT31(uVar20,bVar26 | (byte)*puVar38);
                puVar23 = puVar31;
                while( true ) {
                  puVar31 = puVar23 + 1;
                  out(*puVar23,(short)pbVar15);
                  pbVar15 = pbVar15 + 1;
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  bVar6 = (byte)((uint)pcVar24 >> 8) | *pbVar15;
                  uVar20 = (undefined3)((uint)piVar16 >> 8);
                  bVar26 = (byte)piVar16 ^ *pbVar15;
                  pcVar19 = (char *)CONCAT31(uVar20,bVar26);
                  cRam282b0000 = cRam282b0000 - bVar6;
                  *pcVar19 = *pcVar19 + bVar26;
                  pcVar17 = pcVar18 + -*(int *)pbVar15;
                  uStack_68 = (undefined1)in_DS;
                  uStack_67 = (undefined1)((ushort)in_DS >> 8);
                  bVar5 = *(byte *)((int)puVar45 + 0x17);
                  *pcVar19 = *pcVar19 + bVar26;
                  puVar23 = (uint *)CONCAT22((short)((uint)pcVar24 >> 0x10),
                                             CONCAT11(bVar6 + bVar5 | *pbVar15,(char)pcVar24));
                  *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
                  *(byte *)((int)pcVar19 * 2) = *(byte *)((int)pcVar19 * 2) ^ bVar26;
                  in_AF = 9 < (bVar26 & 0xf) | in_AF;
                  bVar26 = bVar26 + in_AF * -6;
                  pbVar14 = (byte *)CONCAT31(uVar20,bVar26 + (0x9f < bVar26 | in_AF * (bVar26 < 6))
                                                             * -0x60);
                  *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
                  *(char *)((int)pbVar14 * 2) =
                       *(char *)((int)pbVar14 * 2) + (char)((uint)pbVar15 >> 8);
                  bVar48 = CARRY1((byte)*puVar23,(byte)pbVar15);
                  *(byte *)puVar23 = (byte)*puVar23 + (byte)pbVar15;
                  uVar29 = in_DS;
                  uVar28 = uStack_18;
GenerateStatusText:
                  in_DS = uVar28;
                  pcVar18 = pcVar17;
                  uStack_64 = in_DS;
                  if (!bVar48) break;
                  *pbVar14 = *pbVar14 + (char)pbVar14;
                  iVar13 = CONCAT31((int3)((uint)puVar23 >> 8),(byte)puVar23 | *pbVar15);
                  uVar29 = (undefined2)((uint)puVar38 >> 0x10);
                  cVar34 = (char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + 0x7d);
                  *pbVar14 = *pbVar14 + (char)pbVar14;
                  *(byte *)puVar45 = (byte)*puVar45 - (char)((uint)puVar23 >> 8);
                  iVar13 = iVar13 - *(int *)(iVar13 + 0xb0a0000);
                  cVar7 = *(char *)(CONCAT22(uVar29,CONCAT11(cVar34,(char)puVar38)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*puVar31,(short)pbVar15);
                  pbVar15 = (byte *)CONCAT22(uStack_66,CONCAT11(uStack_67,uStack_68));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  puVar23 = puVar31 + 2;
                  out(puVar31[1],CONCAT11(uStack_67,uStack_68));
                  pcVar18 = pcVar17 + 1;
                  cVar4 = (char)iVar13;
                  pcVar24 = (char *)CONCAT22((short)((uint)iVar13 >> 0x10),
                                             CONCAT11((byte)((uint)iVar13 >> 8) |
                                                      *(byte *)((int)puVar45 + 0x46),cVar4));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_18 = CONCAT11(uStack_67,uStack_68);
                  uVar20 = (undefined3)(CONCAT22(0xb0a,CONCAT11((byte)*puVar23,0xf0)) >> 8);
                  piVar16 = (int *)CONCAT31(uVar20,0x5f);
                  puVar45 = (uint *)((int)puVar45 + 1);
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  puVar38 = (uint *)CONCAT22(uVar29,CONCAT11(cVar34 + cVar7 | (byte)puVar31[-0x1e],
                                                             (char)puVar38));
                  *(char *)piVar16 = (char)*piVar16 + '_';
                  puVar31 = (uint *)CONCAT31(uVar20,0x8c);
                  puVar23[(int)puVar45 * 2] = (uint)(pbVar15 + puVar23[(int)puVar45 * 2]);
                  uVar37 = *puVar23;
                  *(byte *)puVar23 = (byte)*puVar23 + 0x8c;
                  if ((byte)uVar37 < 0x74) {
                    *pbVar15 = *pbVar15 + cVar4;
                    *(byte *)puVar38 = (byte)*puVar38 >> 1;
                    *(char *)puVar31 = (char)*puVar31 + -0x74;
                    *puVar31 = (uint)(pcVar18 + *puVar31);
                    *puVar31 = *puVar31 << 1 | (uint)((int)*puVar31 < 0);
                    *pbVar15 = *pbVar15 + cVar4;
                    pcVar17[2] = pcVar17[2] - cVar4;
                    *pbVar15 = *pbVar15 + cVar4;
                    pbVar14 = (byte *)CONCAT31(uVar20,0x83);
                    puVar31 = puVar38;
                    goto code_r0x00405312;
                  }
                  *puVar31 = (uint)(*puVar31 + (int)puVar31);
                  piVar16 = (int *)(CONCAT31(uVar20,(byte)puVar31[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar31[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar16 = (int *)((int)piVar16 + *puVar23);
                }
              }
              *pbVar15 = *pbVar15 + bVar26;
              *(byte *)puVar38 = (byte)*puVar38 - (char)pbVar15;
              *pbVar14 = *pbVar14 + bVar26;
              pbVar14 = (byte *)CONCAT31(uVar20,bVar26 | (byte)*puVar38);
            }
            else {
              cVar7 = (char)puVar23;
              *pbVar15 = *pbVar15 + cVar7;
              *(byte **)pbVar14 = pbVar15 + *(int *)pbVar14;
              *pbVar14 = *pbVar14 + bVar26;
              bVar26 = bVar26 + *pbVar14;
              pbVar14 = (byte *)CONCAT31(uVar20,bVar26);
              if (-1 < (char)bVar26) {
                *(byte *)puVar38 = (byte)*puVar38 + bVar6;
                out(*puVar31,(short)pbVar15);
                pbVar15 = pbVar15 + 1;
                *pbVar14 = *pbVar14 + bVar26;
                puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),
                                           bVar6 | (byte)((uint)iVar13 >> 8));
                cVar4 = bVar26 - (byte)*puVar23;
                pcVar17 = (char *)CONCAT31(uVar20,cVar4);
                *pcVar17 = *pcVar17 + cVar4 + (bVar26 < (byte)*puVar23);
                *pbVar15 = *pbVar15 + cVar4;
                pcVar17 = (char *)((int)pcVar17 * 2 + 0x79);
                *pcVar17 = *pcVar17 + (char)((uint)pbVar15 >> 8);
                pbVar14 = (byte *)in((short)pbVar15);
                puVar31 = puVar31 + 1;
              }
              *(byte *)puVar31 = (byte)*puVar31 + cVar7;
              *pbVar14 = *pbVar14 + (char)pbVar14;
              *pbVar14 = *pbVar14 + (char)pbVar14;
              uStack_68 = (undefined1)in_DS;
              uStack_67 = (undefined1)((ushort)in_DS >> 8);
              bVar5 = *pbVar14;
              bVar8 = (byte)((uint)puVar23 >> 8);
              bVar6 = bVar8 + *pbVar14;
              iVar13 = *(int *)pbVar14;
              *pbVar15 = *pbVar15 + cVar7;
              bVar26 = (char)(pbVar14 + (uint)CARRY1(bVar8,bVar5) + iVar13) - (byte)*puVar38;
              pbVar14 = (byte *)CONCAT31((int3)((uint)(pbVar14 + (uint)CARRY1(bVar8,bVar5) + iVar13)
                                               >> 8),bVar26);
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar26;
              *pcVar18 = *pcVar18 + (char)puVar38;
              *pbVar14 = *pbVar14 + bVar26;
              *pbVar14 = *pbVar14 + bVar26;
              *pbVar14 = *pbVar14 + bVar26;
              puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                         CONCAT11(bVar6 + *pbVar14,cVar7));
              pbVar14 = pbVar14 + (uint)CARRY1(bVar6,*pbVar14) + *(int *)pbVar14;
              *pbVar15 = *pbVar15 + cVar7;
              puVar31 = (uint *)((int)puVar31 + *(int *)(pbVar15 + 0x3e));
            }
            *(byte *)puVar31 = (byte)*puVar31 + (char)pbVar14;
            cVar7 = (char)pbVar14 + 'r';
            puVar31 = (uint *)((int)puVar31 + -1);
            uVar37 = CONCAT31((int3)((uint)pbVar14 >> 8),cVar7);
            *(byte *)puVar31 = *(byte *)puVar31 + cVar7;
            bVar48 = 0xfff38f8d < uVar37;
            iVar13 = uVar37 + 0xc7072;
            pcVar17 = pcVar18;
          } while (SCARRY4(uVar37,0xc7072));
        } while( true );
      }
      *pcVar18 = *pcVar18 + bVar5;
      bVar5 = bVar5 + 0x6f;
      pbVar14 = (byte *)CONCAT31(uVar20,bVar5);
      bVar26 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar5;
      uVar20 = (undefined3)
               ((uint)(pbVar14 + (uint)CARRY1(bVar26,bVar5) + *(int *)((int)puVar23 + (int)pbVar15))
               >> 8);
      cVar4 = (char)(pbVar14 + (uint)CARRY1(bVar26,bVar5) + *(int *)((int)puVar23 + (int)pbVar15)) +
              'E';
      pcVar18 = (char *)CONCAT31(uVar20,cVar4);
      *pcVar18 = *pcVar18 + cVar4;
      cVar4 = cVar4 + *pcVar18;
      pcVar18 = (char *)CONCAT31(uVar20,cVar4);
      *pcVar18 = *pcVar18 + cVar4;
      puVar47 = (uint *)CONCAT31(uVar20,cVar4 + *pcVar18);
      *(char *)puVar47 = (char)*puVar47 + cVar4 + *pcVar18;
      pbVar14 = (byte *)((uint)puVar47 | *puVar47);
      bVar5 = *pbVar14;
      bVar26 = (byte)pbVar14;
      *pbVar14 = *pbVar14 + bVar26;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar26 + CARRY1(bVar5,bVar26));
      puVar47 = puVar31;
code_r0x00405117:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      puVar36 = (uint *)((int)puVar36 - *puVar36);
      puVar31 = puVar47 + 1;
      out(*puVar47,uVar29);
    }
    *pbVar15 = *pbVar15 + (char)puVar23;
    bVar48 = puVar36 < (uint *)*piVar16;
    puVar36 = (uint *)((int)puVar36 - *piVar16);
    bVar5 = (byte)((uint)puVar23 >> 8);
    *(byte *)((int)puVar45 + 0x39) = (*(byte *)((int)puVar45 + 0x39) - bVar5) - bVar48;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    uVar37 = *puVar36;
    *(int *)((int)puVar45 + 0x39) = *(int *)((int)puVar45 + 0x39) - (int)pcVar17;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                               CONCAT11(bVar5 | (byte)uVar37 | (byte)*puVar36,(char)puVar23));
    *(char *)(piVar16 + 10) = (char)piVar16[10] + cVar7;
  } while( true );
code_r0x004052ee:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  bVar5 = (char)piVar16 + 0x28;
  pbVar14 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),bVar5);
  *pbVar14 = *pbVar14 ^ bVar5;
  *(byte *)puVar38 = (byte)*puVar38 + (char)((uint)pcVar24 >> 8);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + (byte)pcVar24;
  piVar16 = (int *)(((uint)pbVar14 | 0x1496f09) + *puVar45 + (uint)CARRY1(bVar5,(byte)pcVar24));
  puVar47 = puVar23 + 1;
  out(*puVar23,(short)pbVar15);
  pbVar32 = pbVar15 + -1;
  *piVar16 = *piVar16 + (int)piVar16;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar32 >> 8),(byte)pbVar32 | (byte)*puVar38);
  cVar7 = (char)piVar16 + '\x13';
  pbVar14 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),cVar7);
  puVar31 = puVar38;
  puVar23 = puVar47;
  if ((POPCOUNT(cVar7) & 1U) != 0) {
    *pbVar15 = *pbVar15 - (char)((uint)pbVar32 >> 8);
    *pbVar14 = *pbVar14 + cVar7;
code_r0x00405396:
    bVar5 = *pbVar14;
    bVar26 = (byte)pbVar14;
    *pbVar14 = *pbVar14 + bVar26;
    *puVar47 = (uint)(pbVar14 + (uint)CARRY1(bVar5,bVar26) + *puVar47);
    out(*puVar47,(short)pbVar15);
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    *(byte **)pbVar14 = pbVar14 + *(int *)pbVar14;
    pcVar17 = (char *)CONCAT22((short)((uint)pbVar14 >> 0x10),
                               CONCAT11((byte)((uint)pbVar14 >> 8) | (byte)puVar47[1],bVar26));
    *(char **)((int)puVar45 + -1) = pcVar17 + *(int *)((int)puVar45 + -1);
    out(puVar47[1],(short)pbVar15);
    *pcVar17 = *pcVar17 + bVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar14 = *pbVar14 + (char)pbVar14;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar14 >> 8),(char)pbVar14 + 'o');
  puVar38 = (uint *)((int)puVar31 + -1);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar20 = (undefined3)((uint)pbVar15 >> 8);
  piVar16 = (int *)((int)piVar16 + 0x1b7e);
  bVar6 = (byte)pbVar15 | *(byte *)puVar38 | *(byte *)puVar38;
  iRam04115f2c = iRam04115f2c + (int)piVar16;
  out(*puVar23,(short)CONCAT31(uVar20,bVar6));
  *piVar16 = *piVar16 + (int)piVar16;
  bVar6 = bVar6 | (byte)piVar16;
  iVar33 = CONCAT31(uVar20,bVar6);
  pbVar15 = (byte *)((int)piVar16 - *piVar16);
  cVar7 = (char)pbVar15;
  *pcVar24 = *pcVar24 + cVar7;
  cVar4 = (char)pcVar24 - bVar6;
  *pbVar15 = *pbVar15 + cVar7;
  uVar29 = (undefined2)((uint)pcVar24 >> 0x10);
  bVar26 = (byte)((uint)pcVar24 >> 8) | *pbVar15;
  pcVar18 = pcVar18 + -1;
  *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
  bVar5 = *(byte *)(CONCAT22(uVar29,CONCAT11(bVar26,cVar4)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar15;
  pcRam6f051109 = pcRam6f051109 + (int)pcVar18;
  *pbVar15 = *pbVar15 + cVar7;
  bVar5 = bVar26 | bVar5 | *(byte *)puVar38;
  iVar25 = CONCAT22(uVar29,CONCAT11(bVar5,cVar4));
  pbVar32 = (byte *)((uint)(puVar23 + 1) ^ *(uint *)(iVar33 + -0x43));
  iVar13 = *(int *)pbVar15;
  *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
  if (SCARRY4(iVar13,(int)pbVar15)) {
    *pbVar15 = *pbVar15 + cVar7;
  }
  pbVar14 = pbVar15 + 0x5674;
  puVar45 = (uint *)((int)puVar45 +
                    (-(uint)((byte *)0xffffa98b < pbVar15) - *(int *)(pbVar32 + -0x7f)));
  bVar26 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar26;
  uVar21 = (undefined3)((uint)pbVar14 >> 8);
  bVar8 = bVar26 + 0x2d;
  piVar16 = (int *)CONCAT31(uVar21,bVar8);
  *(uint *)(pbVar32 + (int)puVar45 * 8) =
       *(int *)(pbVar32 + (int)puVar45 * 8) + iVar33 + (uint)(0xd2 < bVar26);
  bVar26 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar8;
  if (!CARRY1(bVar26,bVar8)) {
    do {
      pbVar14 = (byte *)(iVar33 + 1);
      bVar26 = (byte)piVar16;
      *(byte *)piVar16 = (char)*piVar16 + bVar26;
      bVar6 = (byte)((uint)piVar16 >> 8);
      bVar8 = (byte)puVar38 | bVar6;
      puVar31 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),bVar8);
      out(*(undefined4 *)pbVar32,(short)pbVar14);
      *(byte *)piVar16 = (char)*piVar16 + bVar26;
      uVar29 = (undefined2)((uint)iVar25 >> 0x10);
      cVar7 = (char)iVar25;
      pbVar15 = (byte *)CONCAT22(uVar29,CONCAT11((byte)((uint)iVar25 >> 8) | *pbVar14,cVar7));
      bVar5 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar26;
      *(byte *)piVar16 = (char)*piVar16 + bVar26 + CARRY1(bVar5,bVar26);
      *pbVar14 = *pbVar14 + bVar26;
      *(byte *)puVar45 = (byte)*puVar45 + bVar6;
      *(int *)((int)piVar16 * 2) =
           *(int *)((int)piVar16 * 2) + CONCAT22(uVar29,CONCAT11(0x1c,cVar7));
      *(byte *)piVar16 = (char)*piVar16 + bVar26;
      cVar4 = (char)pbVar14;
      *(byte *)puVar31 = (byte)*puVar31 + cVar4;
      *(byte *)((int)piVar16 * 2) = *(byte *)((int)piVar16 * 2) ^ bVar26;
      *(byte *)piVar16 = (char)*piVar16 + bVar26;
      pbVar15 = pbVar32 + 8;
      out(*(undefined4 *)(pbVar32 + 4),(short)pbVar14);
      piVar16 = (int *)0xa0a0000;
      *pbVar14 = *pbVar14;
      bVar26 = cVar7 - cVar4;
      iVar25 = CONCAT22(uVar29,CONCAT11((byte)puVar45[0x14] | 0x1c | bRam0ca87216,bVar26));
      *pbVar14 = *pbVar14;
      bVar5 = *pbVar14;
      *pbVar14 = *pbVar14 + bVar26;
      if (!CARRY1(bVar5,bVar26)) {
        piVar16 = (int *)0x1e7b7000;
        bVar5 = (byte)((uint)puVar38 >> 8) | *(byte *)(iVar33 + 3);
        puVar31 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),CONCAT11(bVar5,bVar8));
        if (bVar5 != 0) {
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar4 + pbVar15[(int)puVar45 * 8]);
          piVar16 = (int *)0x6d7d7000;
          iVar25 = iVar25 + 1;
        }
      }
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      iVar33 = CONCAT31((int3)((uint)pbVar14 >> 8),(byte)pbVar14 | pbVar15[(int)puVar45 * 8]);
      *(char *)piVar16 = (char)*piVar16;
      piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),0xf9);
      *puVar45 = (uint)((int)piVar16 + *puVar45 + 1);
      pbVar32 = pbVar32 + 0xc;
      out(*(undefined4 *)pbVar15,(short)iVar33);
      puVar38 = puVar31;
    } while( true );
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar8 = bVar8 | *(byte *)((int)piVar16 + 0x4000081);
  piVar16 = (int *)CONCAT31(uVar21,bVar8);
  if ('\0' < (char)bVar8) {
    *(byte *)piVar16 = (char)*piVar16 + bVar8;
    puVar23 = (uint *)CONCAT31(uVar21,bVar8 + 0x28);
    *puVar23 = *puVar23 ^ (uint)puVar23;
    *(byte *)puVar38 = *(byte *)puVar38 + bVar5;
    cVar7 = (bVar8 + 0x28) - bVar5;
    pcVar17 = (char *)CONCAT31(uVar21,cVar7);
    *pcVar17 = *pcVar17 + cVar7;
    pbVar15 = (byte *)CONCAT31(uVar20,bVar6 | *(byte *)puVar38);
    pcVar18 = (char *)CONCAT22((short)((uint)puVar38 >> 0x10),
                               CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar31 + 0x7d),
                                        (char)puVar38));
    *pcVar17 = *pcVar17 + cVar7;
    pbVar14 = (byte *)CONCAT31(uVar21,cVar7 + 0x39U ^ *(byte *)CONCAT31(uVar21,cVar7 + 0x39U));
    *pcVar18 = *pcVar18 + bVar5;
    puVar47 = (uint *)(pbVar32 + 4);
    out(*(undefined4 *)pbVar32,(short)pbVar15);
    goto code_r0x00405396;
  }
  puVar23 = (uint *)(pbVar32 + 4);
  out(*(undefined4 *)pbVar32,(short)iVar33);
  pcVar24 = (char *)(iVar25 + -1);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pbVar15 = (byte *)CONCAT31(uVar20,bVar6 | *(byte *)puVar38);
  goto code_r0x004052ee;
}


