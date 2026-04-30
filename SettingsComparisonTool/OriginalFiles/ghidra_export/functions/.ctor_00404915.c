/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404915
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : int .ctor(undefined4 param_1, uint * param_2, byte * param_3, byte * param_4, uint * param_5, uint * param_6, uint * param_7, char * param_8, uint * param_9)
 * Local Vars  : param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, uStack_67, uStack_68, uStack_64, uStack_66, puStack_24, uStack_28, puStack_10, uStack_18, pbStack_8, pbStack_c, uVar1, iStack_4, uVar3, uVar2, cVar5, bVar4, bVar7, bVar6, in_EAX, uVar8, pcVar10, puVar9, uVar12, puVar11, iVar14, puVar13, piVar16, pbVar15, pbVar18, puVar17, uVar20, pcVar19, iVar22, uVar21, bVar24, cVar23, uVar26, uVar25, puVar28, bVar27, bVar30, iVar29, cVar32, cVar31, pbVar33, unaff_EBX, uVar35, puVar34, cVar37, cVar36, unaff_EBP, ppbVar38, pbVar40, ppbVar39, pbVar42, ppbVar41, pbVar43, unaff_ESI, puVar44, unaff_EDI, in_SS, in_ES, bVar45, in_DS, unaff_retaddr, in_AF, ppbVar46
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
_ctor(undefined4 param_1,uint *param_2,byte *param_3,byte *param_4,uint *param_5,uint *param_6,
     uint *param_7,char *param_8,uint *param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined6 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  byte *in_EAX;
  undefined3 uVar20;
  ushort *puVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  byte *pbVar15;
  int *piVar16;
  uint *puVar17;
  byte *pbVar18;
  undefined3 uVar21;
  char *pcVar19;
  char cVar23;
  byte bVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  int iVar22;
  byte bVar27;
  byte bVar30;
  uint *puVar28;
  int iVar29;
  char cVar31;
  char cVar32;
  char cVar36;
  int unaff_EBX;
  byte *pbVar33;
  uint *puVar34;
  char cVar37;
  uint uVar35;
  byte **ppbVar38;
  byte *unaff_EBP;
  byte **ppbVar39;
  byte *pbVar40;
  byte **ppbVar41;
  byte *pbVar42;
  byte *unaff_ESI;
  byte *pbVar43;
  uint *unaff_EDI;
  uint *puVar44;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar45;
  byte in_AF;
  byte **unaff_retaddr;
  byte **ppbVar46;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_28;
  uint *puStack_24;
  undefined2 uStack_18;
  uint *puStack_10;
  byte *pbStack_c;
  byte *pbStack_8;
  int iStack_4;
  
  do {
                    /* .NET CLR Managed Code */
    bVar4 = *in_EAX;
    bVar6 = (byte)((uint)param_1 >> 8);
    uVar25 = (undefined2)((uint)param_1 >> 0x10);
    cVar5 = (char)param_1;
    cVar23 = bVar6 + *in_EAX;
    pcVar19 = (char *)CONCAT22(uVar25,CONCAT11(cVar23,cVar5));
    iVar14 = *(int *)in_EAX;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    uVar20 = (undefined3)((uint)(in_EAX + (uint)CARRY1(bVar6,bVar4) + iVar14) >> 8);
    bVar4 = (char)(in_EAX + (uint)CARRY1(bVar6,bVar4) + iVar14) - *(byte *)((int)param_2 + 3);
    pcVar10 = (char *)CONCAT31(uVar20,bVar4);
    puVar44 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x3a),
                                        (char)unaff_EBX));
    *pcVar10 = *pcVar10 + bVar4;
    pcVar10 = (char *)CONCAT31(uVar20,bVar4 + 0x6f);
    *pcVar19 = (*pcVar19 - (bVar4 + 0x6f)) - (0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
    *pcVar19 = *pcVar19 + '\x01';
    cVar23 = cVar23 - unaff_ESI[2];
    puVar28 = (uint *)CONCAT22(uVar25,CONCAT11(cVar23,cVar5));
    if ((POPCOUNT(cVar23) & 1U) != 0) {
      pcVar10 = pcVar10 + -0x1b7e2606;
      *pcVar10 = *pcVar10 + (char)pcVar10;
      pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                 CONCAT11((byte)((uint)pcVar10 >> 8) | (byte)param_2[0x30dbc2],
                                          (char)pcVar10));
      cVar5 = cRam00c36f08;
      goto code_r0x00404903;
    }
code_r0x00404931:
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar5 = (char)pcVar10 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5);
    pbVar40 = unaff_ESI;
    if ((POPCOUNT(cVar5) & 1U) == 0) goto code_r0x00404937;
code_r0x00404903:
    cRam00c36f08 = cVar5;
    bVar4 = *unaff_ESI;
    cVar5 = (char)pcVar10;
    *unaff_ESI = *unaff_ESI + cVar5;
    uVar25 = (undefined2)((uint)unaff_retaddr >> 0x10);
    unaff_retaddr = (byte **)CONCAT22(uVar25,in_ES);
    if (SCARRY1(bVar4,cVar5) == (char)*unaff_ESI < '\0') {
      pcVar10[(int)unaff_EBP] = pcVar10[(int)unaff_EBP] + cVar5;
      do {
        *(char *)param_9 = (char)*param_9 + (char)param_9;
        puVar28 = (uint *)CONCAT22((short)((uint)param_8 >> 0x10),
                                   CONCAT11((byte)((uint)param_8 >> 8) | param_8[(int)param_3],
                                            (char)param_8));
        unaff_EDI = (uint *)((int)unaff_retaddr + *(int *)((int)param_6 + 0x71));
        puVar11 = param_9;
        param_2 = param_7;
        puVar44 = param_6;
        pbVar40 = param_3;
        while( true ) {
          cVar5 = (char)puVar11;
          *(byte *)puVar11 = (byte)*puVar11 + cVar5;
          uVar20 = (undefined3)((uint)puVar11 >> 8);
          cVar23 = cVar5 + '\x02';
          puVar9 = (ushort *)CONCAT31(uVar20,cVar23);
          unaff_EBP = param_4;
          pbVar43 = pbVar40;
          if ((POPCOUNT(cVar23) & 1U) != 0) goto code_r0x0040495b;
          *(char *)puVar9 = (char)*puVar9 + cVar23;
          bVar6 = cVar5 + 0x7d;
          iVar14 = CONCAT31(uVar20,bVar6);
          pbVar43 = param_4 + iVar14;
          bVar4 = *pbVar43;
          *pbVar43 = *pbVar43 + bVar6;
          uVar35 = *puVar28;
          *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
          pcVar10 = (char *)(((iVar14 - uVar35) - (uint)CARRY1(bVar4,bVar6)) + -0x727b0317);
          cVar5 = (char)pcVar10;
          *pcVar10 = *pcVar10 + cVar5;
          uVar20 = (undefined3)((uint)pcVar10 >> 8);
          cVar23 = cVar5 + '\x02';
          pcVar10 = (char *)CONCAT31(uVar20,cVar23);
          if ((POPCOUNT(cVar23) & 1U) != 0) break;
          *pcVar10 = *pcVar10 + cVar23;
          bVar6 = cVar5 + 0x7d;
          iVar14 = CONCAT31(uVar20,bVar6);
          pbVar43 = param_4 + iVar14;
          bVar4 = *pbVar43;
          *pbVar43 = *pbVar43 + bVar6;
          puVar11 = (uint *)((iVar14 - *puVar28) - (uint)CARRY1(bVar4,bVar6));
          puVar34 = param_2;
          pbVar43 = pbVar40;
code_r0x004049b4:
          pbVar40 = pbVar43;
          *(byte *)puVar34 = (byte)*puVar34 + (char)puVar28;
          param_2 = (uint *)CONCAT31((int3)((uint)puVar34 >> 8),
                                     ((char)puVar34 - (byte)*unaff_EDI) - *pbVar40);
          bVar6 = pbVar40[0x72];
          *puVar11 = *puVar11 & (uint)puVar28;
          pbVar43 = (byte *)((int)puVar11 + 2);
          *pbVar43 = *pbVar43 + (char)((uint)puVar34 >> 8);
          bVar4 = *pbVar43;
          puVar17 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 - bVar6);
          while (puVar44 = puVar17, (POPCOUNT(bVar4) & 1U) == 0) {
            cVar5 = (char)puVar11;
            *(byte *)puVar11 = (byte)*puVar11 + cVar5;
            uVar20 = (undefined3)((uint)puVar11 >> 8);
            cVar23 = cVar5 + '\x03';
            pbVar15 = (byte *)CONCAT31(uVar20,cVar23);
            pbVar43 = pbVar40 + 4;
            out(*(undefined4 *)pbVar40,(short)param_2);
            in_SS = SUB42(unaff_retaddr,0);
            *pbVar15 = *pbVar15 + cVar23;
            cVar31 = (char)puVar28;
            puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                       CONCAT11((byte)((uint)puVar28 >> 8) | *pbVar15,cVar31));
            *(int *)pbVar15 = *(int *)pbVar15 - (int)pbVar15;
            *(byte *)param_2 = (byte)*param_2 + cVar31;
            cVar31 = (char)puVar17 - pbVar40[6];
            puVar44 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),cVar31);
            if ((POPCOUNT(cVar31) & 1U) != 0) {
              pbVar40 = (byte *)((int)unaff_EDI + (int)param_4 * 2);
              *pbVar40 = *pbVar40 + cVar23;
              ppbVar41 = (byte **)param_4;
              goto code_r0x00404a51;
            }
            *pbVar15 = *pbVar15 + cVar23;
            puVar11 = (uint *)CONCAT31(uVar20,cVar5 + 'r');
            *(byte *)puVar11 = (byte)*puVar11;
            pbVar40 = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
            do {
              unaff_EDI = (uint *)((int)unaff_EDI + puVar44[0x1c]);
              bVar4 = (byte)puVar11;
              *(byte *)puVar11 = (byte)*puVar11 + bVar4;
              uVar20 = (undefined3)((uint)puVar11 >> 8);
              bVar4 = (bVar4 + 0x6e) - (0x90 < bVar4);
              puVar11 = (uint *)CONCAT31(uVar20,bVar4);
              cVar5 = (char)puVar28;
              *(byte *)param_2 = (byte)*param_2 + cVar5;
              bVar6 = (char)((uint)puVar28 >> 8) - pbVar43[2];
              puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar6,cVar5));
              puVar34 = param_2;
              unaff_retaddr = (byte **)pbVar40;
              if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x004049b4;
              *(byte *)puVar11 = (byte)*puVar11 + bVar4;
              bVar7 = bVar4 + 2;
              puVar11 = (uint *)CONCAT31(uVar20,bVar7);
              ppbVar39 = (byte **)param_4;
              if ((POPCOUNT(bVar7) & 1U) == 0) goto code_r0x004049f5;
              pbVar43 = pbVar40;
            } while (0xfd < bVar4);
            *(byte *)puVar11 = (byte)*puVar11 | bVar7;
            puVar17 = puVar44;
            bVar4 = (byte)*puVar11;
          }
        }
        while( true ) {
          cVar5 = (char)pcVar10;
          *pcVar10 = *pcVar10 + cVar5;
          uVar20 = (undefined3)((uint)pcVar10 >> 8);
          cVar23 = cVar5 + '\x02';
          pcVar10 = (char *)CONCAT31(uVar20,cVar23);
          if ((POPCOUNT(cVar23) & 1U) == 0) break;
          *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
          iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
code_r0x00404937:
          bVar4 = (byte)pcVar10;
          *pcVar10 = *pcVar10 + bVar4;
          uVar20 = (undefined3)((uint)pcVar10 >> 8);
          piVar16 = (int *)CONCAT31(uVar20,bVar4 + 0x6f);
          *puVar28 = (*puVar28 - (int)piVar16) - (uint)(0x90 < bVar4);
          *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
          iVar14 = *(int *)((int)unaff_EDI + 0x1a);
          *piVar16 = *piVar16 + (int)piVar16;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *pbVar40);
          *(byte *)puVar28 = (byte)*puVar28 + 1;
          bVar4 = (bVar4 + 0x6f) - (char)*piVar16;
          pbVar43 = (byte *)CONCAT31(uVar20,bVar4);
          *pbVar43 = *pbVar43 + bVar4;
          iVar22 = *(int *)pbVar43;
          cVar5 = bVar4 + *pbVar43;
          puVar9 = (ushort *)CONCAT31(uVar20,cVar5);
          *puVar9 = *puVar9 + (ushort)CARRY1(bVar4,*pbVar43) *
                              (((ushort)puVar9 & 3) - (*puVar9 & 3));
          *(char *)puVar9 = (char)*puVar9 + cVar5;
          *(char *)puVar9 = (char)*puVar9 + cVar5;
          *(char *)puVar9 = (char)*puVar9 + cVar5;
          unaff_EDI = (uint *)((int)unaff_EDI + puVar44[0x1c]);
          unaff_EBP = unaff_EBP + iVar14;
          pbVar43 = pbVar40 + iVar22;
code_r0x0040495b:
          pbVar40 = (byte *)unaff_retaddr;
          cVar5 = (char)puVar9;
          *(char *)puVar9 = (char)*puVar9 + cVar5;
          uVar20 = (undefined3)((uint)puVar9 >> 8);
          cVar23 = cVar5 + '\x02';
          pcVar10 = (char *)CONCAT31(uVar20,cVar23);
          unaff_retaddr = (byte **)pbVar40;
          if ((POPCOUNT(cVar23) & 1U) != 0) {
            *param_2 = (uint)(unaff_EBP + *param_2);
            unaff_ESI = pbVar43 + 1;
            out(*pbVar43,(short)param_2);
            puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                       CONCAT11((char)((uint)puVar44 >> 8) +
                                                *(char *)((int)puVar44 + -0x3b),(char)puVar44));
            goto code_r0x00404931;
          }
          *pcVar10 = *pcVar10 + cVar23;
          unaff_EBP[CONCAT31(uVar20,cVar5 + '}')] =
               unaff_EBP[CONCAT31(uVar20,cVar5 + '}')] + cVar5 + '}';
          *param_8 = *param_8 + (char)param_8;
          puVar28 = (uint *)CONCAT22((short)((uint)param_7 >> 0x10),
                                     CONCAT11((byte)((uint)param_7 >> 8) |
                                              *(byte *)((int)param_7 * 3),(char)param_7));
          unaff_EDI = (uint *)(iStack_4 + *(int *)((int)param_5 + 0x6f));
          pcVar10 = param_8;
          param_2 = param_6;
          puVar44 = param_5;
          unaff_EBP = param_3;
        }
        *pcVar10 = *pcVar10 + cVar23;
        pcVar10 = (char *)CONCAT31(uVar20,cVar5 + '}');
        out(*(undefined4 *)pbVar40,(short)param_2);
        *pcVar10 = *pcVar10 + cVar5 + '}';
      } while( true );
    }
    *pcVar10 = *pcVar10 + cVar5;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5 + '*');
    unaff_retaddr = (byte **)CONCAT22(uVar25,in_DS);
    bVar4 = (byte)((uint)puVar28 >> 8);
    param_1 = CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar4 + *pbVar40,(char)puVar28));
    in_EAX = pbVar40 + (uint)CARRY1(bVar4,*pbVar40) + *(int *)pbVar40;
    *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
    unaff_EBX = CONCAT31((int3)((uint)puVar44 >> 8),(char)puVar44 - *unaff_ESI);
  } while( true );
code_r0x004049f5:
  do {
    bVar4 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    uVar20 = (undefined3)((uint)puVar11 >> 8);
    bVar7 = bVar4 + 0x6f;
    pbVar15 = (byte *)CONCAT31(uVar20,bVar7);
    *puVar28 = (*puVar28 - (int)pbVar15) - (uint)(0x90 < bVar4);
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    pbVar40 = (byte *)((int)ppbVar39 + *(int *)((int)unaff_EDI + 0x1a));
    *(byte **)pbVar15 = pbVar15 + *(int *)pbVar15;
    uVar21 = (undefined3)((uint)param_2 >> 8);
    bVar4 = (byte)param_2 | *pbVar43;
    param_2 = (uint *)CONCAT31(uVar21,bVar4);
    *(byte *)puVar28 = (byte)*puVar28 + 1;
    cVar23 = bVar7 - *pbVar15;
    pbVar43 = pbVar43 + (-(uint)(bVar7 < *pbVar15) - *(int *)CONCAT31(uVar20,cVar23));
    uVar12 = CONCAT31(uVar20,cVar23 + *(char *)CONCAT31(uVar20,cVar23));
    bVar45 = CARRY1(bRam14110000,bVar6);
    bRam14110000 = bRam14110000 + bVar6;
    puVar11 = (uint *)((int)puVar44 + (int)pbVar43 * 2);
    uVar35 = *puVar11;
    uVar2 = uVar12 + *puVar11;
    puVar13 = (undefined4 *)(uVar2 + bVar45);
    uVar1 = GlobalDescriptorTableRegister();
    *puVar13 = uVar1;
    iStack_4 = CONCAT22(iStack_4._2_2_,in_ES);
    uVar35 = (uint)(CARRY4(uVar12,uVar35) || CARRY4(uVar2,(uint)bVar45));
    puVar11 = (uint *)((int)puVar13 + uRam7d020511 + uVar35);
    unaff_retaddr = &pbStack_8;
    ppbVar46 = &pbStack_8;
    ppbVar38 = &pbStack_8;
    ppbVar41 = &pbStack_8;
    ppbVar39 = &pbStack_8;
    pbStack_8 = pbVar40;
    cVar23 = '\x03';
    do {
      pbVar40 = pbVar40 + -4;
      ppbVar38 = ppbVar38 + -1;
      *ppbVar38 = (byte *)*(undefined4 *)pbVar40;
      cVar23 = cVar23 + -1;
    } while ('\0' < cVar23);
    pbRam00c82802 =
         (byte *)((int)puVar11 +
                 (int)(pbRam00c82802 +
                      (CARRY4((uint)puVar13,uRam7d020511) ||
                      CARRY4((int)puVar13 + uRam7d020511,uVar35))));
    bVar7 = *pbVar43;
    cVar23 = (char)puVar11;
    *pbVar43 = *pbVar43 + cVar23;
  } while (SCARRY1(bVar7,cVar23) == (char)*pbVar43 < '\0');
  *(byte *)puVar11 = (byte)*puVar11 + cVar23;
  iVar14 = CONCAT31((int3)((uint)puVar11 >> 8),cVar23 + '\x11') + 0xc57b;
  bVar6 = (byte)iVar14;
  *param_2 = *param_2 ^ (uint)puVar44;
  param_2 = (uint *)CONCAT31(uVar21,bVar4 + (byte)*puVar28);
  iVar14 = (CONCAT31((int3)((uint)iVar14 >> 8),bVar6 + 0x6f) - (uint)(0x90 < bVar6)) + -0x18093a86;
  cVar5 = (char)iVar14;
  uVar20 = (undefined3)((uint)iVar14 >> 8);
  cVar23 = cVar5 + '\x02';
  pbVar40 = (byte *)CONCAT31(uVar20,cVar23);
  if ((POPCOUNT(cVar23) & 1U) != 0) goto code_r0x00404ab4;
  *pbVar40 = *pbVar40 + cVar23;
  pbVar15 = (byte *)CONCAT31(uVar20,cVar5 + 'q');
  ppbVar41 = &pbStack_8;
code_r0x00404a51:
  pbVar40 = pbVar15 + 1;
  cVar5 = (char)pbVar40;
  *pbVar40 = *pbVar40 + cVar5;
  puVar44 = (uint *)CONCAT22((short)((uint)puVar17 >> 0x10),
                             CONCAT11((char)((uint)puVar17 >> 8) - cVar5,cVar31));
  *pbVar40 = *pbVar40 + cVar5;
  param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 - (byte)*puVar28);
  pbVar15 = pbVar15 + 0x757b03;
  pbVar40 = (byte *)((int)unaff_EDI + (int)ppbVar41 * 2);
  cVar5 = (char)pbVar15;
  *pbVar40 = *pbVar40 + cVar5;
  *pbVar15 = *pbVar15 + cVar5;
  *pbVar43 = *pbVar43 - (char)((uint)pbVar15 >> 8);
  *pbVar15 = *pbVar15 + cVar5;
  unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppbVar41 + -0x3a));
  *pbVar15 = *pbVar15 + cVar5;
  pbVar40 = (byte *)(CONCAT31((int3)((uint)pbVar15 >> 8),cVar5 + '\x11') + 0x757b02);
  pbVar15 = (byte *)((int)unaff_EDI + (int)ppbVar41 * 2);
  bVar6 = (byte)pbVar40;
  *pbVar15 = *pbVar15 + bVar6;
  bVar4 = *pbVar40;
  *pbVar40 = *pbVar40 + bVar6;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
  pbRam011006fe = pbVar40 + (int)(pbRam011006fe + CARRY1(bVar4,bVar6));
  bVar4 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar6;
  ppbVar46 = unaff_retaddr;
  if (!CARRY1(bVar4,bVar6)) goto code_r0x00404add;
  do {
    bVar4 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar4;
    bVar7 = (byte)puVar28;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                               CONCAT11((byte)((uint)puVar28 >> 8) | *pbVar40,bVar7));
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    uVar20 = (undefined3)((uint)pbVar40 >> 8);
    bVar4 = bVar4 + in_AF * '\x06';
    cVar5 = bVar4 + (0x90 < (bVar4 & 0xf0) | in_AF * (0xf9 < bVar4)) * '`';
    pcVar10 = (char *)CONCAT31(uVar20,cVar5);
    *pcVar10 = *pcVar10 + cVar5;
    unaff_EDI = (uint *)((int)unaff_EDI - *(int *)((int)ppbVar41 + -0x39));
    *pcVar10 = *pcVar10 + cVar5;
    iVar14 = CONCAT31(uVar20,cVar5 + '\x11') + 0xc57b;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x11') + 0xc67b;
    bVar4 = (byte)iVar14;
    bVar6 = bVar4 + 0x6f;
    pbVar40 = (byte *)CONCAT31((int3)((uint)iVar14 >> 8),bVar6);
    *puVar28 = (*puVar28 - (int)pbVar40) - (uint)(0x90 < bVar4);
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar7;
    pbRam011106fe = pbVar40 + (int)(pbRam011106fe + CARRY1((byte)uVar35,bVar7));
    bVar4 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar6;
    if (!CARRY1(bVar4,bVar6)) goto code_r0x00404ad4;
code_r0x00404ab4:
    *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
    bVar4 = (byte)puVar28;
    bVar6 = (byte)((uint)puVar28 >> 8) | *pbVar40;
    puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11(bVar6,bVar4));
    *pbVar40 = *pbVar40 - (char)pbVar40;
    *(byte *)puVar44 = (char)*puVar44 + bVar6;
    out(*(undefined4 *)pbVar43,(short)param_2);
    *puVar28 = *puVar28 & (uint)pbVar40;
    uVar35 = *param_2;
    *(byte *)param_2 = (byte)*param_2 + bVar4;
    pbVar40 = pbVar40 + (uint)CARRY1((byte)uVar35,bVar4) + *(int *)(pbVar43 + 4);
    *pbVar40 = *pbVar40 + (char)pbVar40;
    *(byte *)puVar28 = (byte)*puVar28 + (char)param_2;
    pbVar43 = pbVar43 + 4;
    while( true ) {
      out(*(undefined4 *)pbVar43,(short)param_2);
      pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(byte)pbVar40 & (byte)*puVar28);
      *(byte *)param_2 = (byte)*param_2 + (char)puVar28;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar44[5],
                                          (char)param_2));
      *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
      pbVar43 = pbVar43 + 4;
code_r0x00404ad4:
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
      pbVar40 = (byte *)((uint)pbVar40 | 8);
      pbRam0000c97d = pbRam0000c97d + (int)pbVar40;
code_r0x00404add:
      bVar4 = (byte)pbVar40;
      uVar20 = (undefined3)((uint)pbVar40 >> 8);
      cVar5 = bVar4 + 8;
      pbVar40 = (byte *)CONCAT31(uVar20,cVar5);
      if (SCARRY1(bVar4,'\b') == cVar5 < '\0') break;
      *pbVar40 = *pbVar40 + cVar5;
      cVar5 = bVar4 + 10;
      piVar16 = (int *)CONCAT31(uVar20,cVar5);
      if ((POPCOUNT(cVar5) & 1U) != 0) {
        *piVar16 = (int)(*piVar16 + (int)piVar16);
        goto code_r0x00404b18;
      }
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      puVar11 = (uint *)CONCAT31(uVar20,bVar4 + 0x7c);
      *puVar11 = *puVar11 & (uint)puVar28;
      *(char *)((int)puVar11 + 0x11) = *(char *)((int)puVar11 + 0x11) + (char)((uint)param_2 >> 8);
      cVar5 = (char)((int)puVar11 + 0xc67b);
      uVar20 = (undefined3)((uint)((int)puVar11 + 0xc67b) >> 8);
      bVar4 = cVar5 + 8;
      pbVar40 = (byte *)CONCAT31(uVar20,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        *pbVar40 = *pbVar40 + bVar4;
        cRam02060000 = cVar5 + 'w';
        puVar11 = (uint *)CONCAT31(uVar20,cRam02060000);
        *(byte *)puVar11 = (byte)*puVar11 + cRam02060000;
        cVar5 = (char)puVar28;
        puVar28 = (uint *)CONCAT22((short)((uint)puVar28 >> 0x10),
                                   CONCAT11((byte)((uint)puVar28 >> 8) | (byte)*puVar11,cVar5));
        *puVar11 = *puVar11 - (int)puVar11;
        *(byte *)param_2 = (byte)*param_2 + cVar5;
        pbVar40 = pbVar43 + 4;
        out(*(undefined4 *)pbVar43,(short)param_2);
        pbVar43 = pbVar40;
        if ((POPCOUNT((byte)*param_2) & 1U) == 0) goto code_r0x00404b0f;
        pcVar10 = (char *)((uint)puVar11 | *puVar11);
        goto code_r0x00404b89;
      }
      bVar6 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar4;
      *(byte **)pbVar43 = pbVar40 + (uint)CARRY1(bVar6,bVar4) + *(int *)pbVar43;
    }
    *pbVar43 = *pbVar43 + 1;
    *puVar28 = (uint)(pbVar40 + (uint)(0xf7 < bVar4) + *puVar28);
  } while( true );
code_r0x00404b0f:
  while( true ) {
    *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(char)puVar11 + 'r');
    piVar16 = (int *)((uint)puVar11 | *puVar11);
    param_2 = puStack_24;
code_r0x00404b18:
    bRam11060000 = (byte)piVar16;
    iVar14 = CONCAT31((int3)((uint)((int)piVar16 + 0xc57b) >> 8),
                      (char)(char *)((int)piVar16 + 0xc57b) + '\x11') + 0xc77b;
    bVar4 = (byte)iVar14;
    iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),bVar4 + 0x6f);
    *puVar28 = (*puVar28 - iVar14) - (uint)(0x90 < bVar4);
    cVar5 = (char)puVar28;
    *(byte *)param_2 = (byte)*param_2 + cVar5;
    bVar6 = (byte)((uint)puVar44 >> 8);
    bVar30 = (byte)((uint)param_2 >> 8) | bVar6;
    pcVar19 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar30,(byte)param_2));
    piVar16 = (int *)(iVar14 + 0x73060001);
    *(byte *)puVar28 = (byte)*puVar28 & (byte)piVar16;
    *pcVar19 = *pcVar19 + cVar5;
    bVar7 = (byte)((uint)puVar28 >> 8);
    *(byte *)piVar16 = *(char *)piVar16 - bVar7;
    *(byte *)piVar16 = *(char *)piVar16 + (byte)piVar16;
    iVar14 = *piVar16;
    *piVar16 = *piVar16 - (int)piVar16;
    *(byte *)puVar44 = (char)*puVar44 + bVar7;
    pcVar10 = (char *)((uint)piVar16 | *unaff_EDI);
    *pcVar19 = *pcVar19 - bVar7;
    bVar4 = (byte)pcVar10;
    *pcVar10 = *pcVar10 + bVar4;
    ppbVar41 = (byte **)(((int)ppbVar41 - iVar14) - *(int *)(pcVar10 + ((int)ppbVar41 - iVar14)));
    uVar25 = (undefined2)((uint)puVar44 >> 0x10);
    bVar24 = (byte)puVar44;
    cVar23 = bVar6 + *(char *)((int)puVar44 + 0x76);
    pbVar15 = (byte *)CONCAT22(uVar25,CONCAT11(cVar23,bVar24));
    *pcVar10 = *pcVar10 + bVar4;
    uVar20 = (undefined3)((uint)pcVar10 >> 8);
    uVar12 = CONCAT31(uVar20,bVar4 + 7);
    puVar44 = (uint *)((int)ppbVar41 + -0x1faeef1);
    uVar35 = *puVar44;
    uVar2 = *puVar44 + uVar12;
    *puVar44 = uVar2 + (0xf8 < bVar4);
    puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_ES);
    puVar44 = puStack_24;
    bVar6 = bVar4 + 7 + (byte)*puVar28 +
            (CARRY4(uVar35,uVar12) || CARRY4(uVar2,(uint)(0xf8 < bVar4)));
    puVar11 = (uint *)CONCAT31(uVar20,bVar6);
    bVar4 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar6;
    if (CARRY1(bVar4,bVar6)) break;
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    puVar44 = (uint *)CONCAT22(uVar25,CONCAT11(cVar23 + pbVar15[0x76],bVar24));
    uStack_28 = in_ES;
  }
  *(byte *)puVar11 = (byte)*puVar11 + bVar6;
  uVar21 = (undefined3)((uint)pcVar19 >> 8);
  bVar27 = (byte)param_2 | *pbVar15;
  param_2 = (uint *)CONCAT31(uVar21,bVar27);
  pcRam2b060000 = (char *)CONCAT31(uVar20,bVar6 + 0x39);
  *pcRam2b060000 = (*pcRam2b060000 - (bVar6 + 0x39)) - (0xd7 < (byte)(bVar6 + 0x11));
  bVar4 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar7;
  pbVar40 = pbVar43 + 4;
  out(*(undefined4 *)pbVar43,(short)param_2);
  bVar4 = (bVar6 + 0x37) - CARRY1(bVar4,bVar7);
  piVar16 = (int *)CONCAT31(uVar20,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    iVar14 = CONCAT31(uVar20,bVar4 + 0x11) + 0xc77b;
    pcVar10 = (char *)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + 'r');
    pcVar10[0x28] = pcVar10[0x28] + bVar30;
code_r0x00404b89:
    cVar5 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar5;
    *pcVar10 = *pcVar10 + cVar5;
    *pcVar10 = *pcVar10 + cVar5;
    puVar9 = (ushort *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5 + 'r');
    uVar8 = (ushort)puVar9 | *puVar9;
    pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),uVar8);
    bRam11060000 = (byte)uVar8;
    out(*(undefined4 *)pbVar40,(short)param_2);
    *pcVar10 = *pcVar10 + bRam11060000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar16 = (char)*piVar16 + bVar4;
  pbVar18 = (byte *)((int)ppbVar41 + -*(int *)((int)unaff_EDI + 0x21));
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pcVar10 = (char *)CONCAT31(uVar21,bVar27 | *pbVar15);
  pbVar42 = pbVar43 + 8;
  out(*(undefined4 *)pbVar40,(short)pcVar10);
  uVar35 = *puVar28;
  *pcVar10 = *pcVar10 + cVar5;
  uVar35 = CONCAT31(uVar20,bVar4 & (byte)uVar35) | 0x767b02;
  *(byte *)((int)puVar28 + (int)pcVar10) = *(byte *)((int)puVar28 + (int)pcVar10) + (char)uVar35;
  iVar14 = uVar35 + 0xc67b;
  cVar37 = (char)iVar14;
  uVar20 = (undefined3)((uint)iVar14 >> 8);
  cVar31 = cVar37 + 'r';
  pcVar10 = (char *)CONCAT31(uVar20,cVar31);
  pcVar10[0x28] = pcVar10[0x28] + bVar30;
  *pcVar10 = *pcVar10 + cVar31;
  uVar26 = (undefined2)((uint)puVar28 >> 0x10);
  bVar7 = bVar7 | *(byte *)((int)puStack_24 + -0x5e);
  puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(bVar7,cVar5));
  *pcVar10 = *pcVar10 + cVar31;
  puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,uStack_28);
  pbVar40 = (byte *)CONCAT22(uVar25,CONCAT11(cVar23 + pbVar15[0x76],bVar24));
  *pcVar10 = *pcVar10 + cVar31;
  puVar28 = (uint *)CONCAT31(uVar20,cVar37 + -0x1c);
  pcVar10 = (char *)((uint)puVar28 | *puVar28);
  bVar45 = (POPCOUNT((uint)pcVar10 & 0xff) & 1U) == 0;
  cRam02060000 = (char)pcVar10;
  puVar28 = puStack_24;
  pbVar15 = pbVar18;
  puVar11 = puVar44;
  uVar25 = uStack_28;
  if (!bVar45) goto code_r0x00404ca8;
  *pcVar10 = *pcVar10 + cRam02060000;
  puVar11 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cRam02060000 + 'r');
  *puVar11 = *puVar11 & (uint)puVar34;
  *(char *)((int)puVar11 + 0x11) = *(char *)((int)puVar11 + 0x11) + (char)((ushort)uStack_28 >> 8);
  iVar14 = (int)puVar11 + 0xc77b;
  uVar20 = (undefined3)((uint)iVar14 >> 8);
  cRam02060000 = (char)iVar14 + '\t';
  pbVar15 = (byte *)CONCAT31(uVar20,cRam02060000);
  out(*(undefined4 *)pbVar42,uStack_28);
  *pbVar15 = *pbVar15 + cRam02060000;
  puVar11 = (uint *)CONCAT22(uVar26,CONCAT11(bVar7 | *pbVar15,cVar5));
  *(int *)pbVar15 = *(int *)pbVar15 - (int)pbVar15;
  *(byte *)puStack_24 = (byte)*puStack_24 + cVar5;
  out(*(undefined4 *)(pbVar43 + 0xc),uStack_28);
  pbVar42 = pbVar43 + 0x10;
  uVar25 = uStack_28;
  if ((POPCOUNT((byte)*puStack_24) & 1U) != 0) goto code_r0x00404cca;
  *pbVar15 = *pbVar15 + cRam02060000;
  puVar9 = (ushort *)CONCAT31(uVar20,(char)iVar14 + '{');
  uVar8 = (ushort)puVar9 | *puVar9;
  pcVar10 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),uVar8);
  bVar4 = (byte)uVar8;
  out(*(undefined4 *)(pbVar43 + 0x10),uStack_28);
  pbVar15 = (byte *)((int)puVar11 + 1);
  bRam11060000 = bVar4;
  *pcVar10 = *pcVar10 + bVar4;
  puVar34 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                             CONCAT11((byte)((uint)pbVar15 >> 8) | bRam110cde91,(char)pbVar15));
  pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),bVar4 - 7);
  *puVar44 = (uint)(pcVar10 + (uint)(bVar4 < 7) + *puVar44);
  pbVar42 = pbVar43 + 0x18;
  out(*(undefined4 *)(pbVar43 + 0x14),uStack_28);
  puVar28 = (uint *)((int)puStack_24 + 1);
  *pcVar10 = *pcVar10 + (bVar4 - 7);
  pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),bVar24 | (byte)(uVar8 >> 8));
  do {
    bVar4 = (char)pcVar10 - *pcVar10;
    uVar35 = *puVar34;
    *(byte *)puVar34 = (byte)*puVar34 + bVar4;
    cVar5 = bVar4 - CARRY1((byte)uVar35,bVar4);
    *(byte *)puVar28 = (byte)*puVar28 + cVar5;
    cVar23 = (char)((uint)puVar34 >> 8);
    *(byte *)(puVar44 + 0x673b40) = (byte)puVar44[0x673b40] + cVar23;
    puVar17 = (uint *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5);
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    *(byte *)puVar28 = (byte)*puVar28 + cVar5;
    *(byte **)(pbVar40 + 0x58) = pbVar42 + *(int *)(pbVar40 + 0x58);
    puVar11 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar34 >> 0x10),
                                               CONCAT11(cVar23 + (char)((uint)pcVar10 >> 8),
                                                        (char)puVar34)) >> 8),
                               (char)puVar34 + *(char *)((int)puVar17 * 2));
    *(byte *)puVar17 = (byte)*puVar17 + cVar5;
    *pbVar42 = *pbVar42 + (char)pbVar40;
_ctor:
    bVar6 = (byte)((uint)puVar11 >> 8);
    uVar35 = *puVar17;
    bVar4 = (byte)puVar11;
    puVar17 = (uint *)((int)puVar17 + (uint)CARRY1(bVar6,(byte)*puVar17) + *puVar17);
    *(byte *)puVar28 = (byte)*puVar28 + bVar4;
    cVar5 = bVar4 - *(byte *)((int)puVar28 + 3);
    puVar34 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar11 >> 0x10),
                                               CONCAT11(bVar6 + (byte)uVar35,bVar4)) >> 8),cVar5);
    if ((POPCOUNT(cVar5) & 1U) != 0) {
      if (*(byte *)((int)puVar28 + 3) <= bVar4) {
        *puVar17 = (uint)(*puVar17 + (int)puVar17);
        puVar28 = (uint *)CONCAT31((int3)((uint)puVar28 >> 8),(byte)puVar28 | *pbVar40);
        puVar17 = puVar17 + 0x230e;
        puVar11 = puVar34;
        goto code_r0x00404cce;
      }
      goto code_r0x00404d15;
    }
    *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
    cVar5 = (char)puVar17 + '\x02';
    pcVar10 = (char *)CONCAT31((int3)((uint)puVar17 >> 8),cVar5);
    bVar45 = (POPCOUNT(cVar5) & 1U) == 0;
    pbVar15 = pbVar18;
    puVar11 = puVar44;
    uVar25 = uStack_18;
code_r0x00404ca8:
    uStack_18 = uVar25;
    pbVar18 = pbStack_8;
    puVar44 = puStack_10;
    if (bVar45) break;
    *(byte *)puVar28 = (byte)*puVar28 + (char)puVar34;
    pbVar18 = pbVar15;
    puVar44 = puVar11;
  } while( true );
  *pcVar10 = *pcVar10 + (char)pcVar10;
  *(byte *)param_5 = (char)*param_5 + (byte)param_5;
  puVar11 = (uint *)CONCAT22((short)((uint)param_4 >> 0x10),
                             CONCAT11((byte)((uint)param_4 >> 8) | *param_3,(char)param_4));
  *(byte *)ppbVar46 = *(byte *)ppbVar46 + (char)ppbVar46;
  *(byte *)((int)param_5 * 2) = *(byte *)((int)param_5 * 2) ^ (byte)param_5;
  uVar3 = *(undefined6 *)param_5;
  in_DS = (undefined2)((uint6)uVar3 >> 0x20);
  pbVar15 = (byte *)uVar3;
  bVar6 = (byte)uVar3;
  *pbVar15 = *pbVar15 + bVar6;
  bVar4 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar6;
  puVar28 = (uint *)((int)puVar11 + 0x11673);
  uVar35 = *puVar28;
  uVar2 = *puVar28;
  *puVar28 = (uint)(param_3 + uVar2 + CARRY1(bVar4,bVar6));
  puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uStack_18);
  pbVar15 = pbVar15 + (uint)(CARRY4(uVar35,(uint)param_3) ||
                            CARRY4((uint)(param_3 + uVar2),(uint)CARRY1(bVar4,bVar6))) +
                      *(int *)((int)puVar11 + (int)param_3);
  puVar28 = (uint *)param_3;
  pbVar40 = (byte *)ppbVar46;
  pbVar42 = pbStack_c;
  uVar25 = uStack_18;
code_r0x00404cca:
  uStack_18 = uVar25;
  cVar5 = (char)pbVar15 + '\x04';
  puVar17 = (uint *)CONCAT31((int3)((uint)pbVar15 >> 8),cVar5);
  if (SCARRY1((char)pbVar15,'\x04') == cVar5 < '\0') goto _ctor;
code_r0x00404cce:
  *(byte *)puVar17 = (byte)*puVar17 + (char)puVar17;
  pbVar43 = pbVar42 + 4;
  out(*(undefined4 *)pbVar42,(short)puVar28);
  uVar35 = *puVar11;
  uVar2 = *puVar28;
  bVar4 = (byte)puVar11;
  *(byte *)puVar28 = (byte)*puVar28 + bVar4;
  iVar14 = (CONCAT31((int3)((uint)puVar17 >> 8),(char)puVar17 + '\x03') & uVar35) + iRam00008c38;
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar28;
  pcVar10 = (char *)(iVar14 + (uint)CARRY1((byte)uVar2,bVar4) + 0x1246f);
  uVar20 = (undefined3)((uint)puVar11 >> 8);
  bVar4 = bVar4 | (byte)*puVar28;
  puVar34 = (uint *)CONCAT31(uVar20,bVar4);
  cRam090a0001 = cRam090a0001 - (char)((uint)pcVar10 >> 8);
  puVar17 = (uint *)(CONCAT31((int3)((uint)pcVar10 >> 8),(char)pcVar10 + *pcVar10) + 0x1fbeef2);
  uVar35 = *puVar17;
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  if (CARRY4(uVar35,(uint)puVar17)) {
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    pcVar10 = (char *)CONCAT31(uVar20,bVar4 | bRam00282809);
    cVar5 = (char)((uint)puVar11 >> 8);
    *pbVar40 = *pbVar40 + cVar5;
    *pcVar10 = *pcVar10 - cVar5;
    *(byte *)puVar17 = *(byte *)puVar17 + (char)puVar17;
    iVar14 = (int)pcVar10 - *(int *)pbVar40;
    pbVar42 = pbVar42 + 8;
    out(*(undefined4 *)pbVar43,(short)puVar28);
    *puVar17 = (uint)(*puVar17 + (int)puVar17);
    puVar34 = (uint *)CONCAT22((short)((uint)iVar14 >> 0x10),
                               CONCAT11((byte)((uint)iVar14 >> 8) | bRambf73070b,(char)iVar14));
code_r0x00404d15:
    uVar35 = *puVar17;
    bVar4 = (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + bVar4;
    pbVar43 = pbVar42 + 4;
    out(*(undefined4 *)pbVar42,(short)puVar28);
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar6 = bVar4 + in_AF * '\x06';
    puVar17 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),
                               bVar6 + (0x90 < (bVar6 & 0xf0) |
                                       CARRY1((byte)uVar35,bVar4) | in_AF * (0xf9 < bVar6)) * '`');
  }
  *puVar17 = (uint)(*puVar17 + (int)puVar17);
  bVar4 = (byte)puVar17 | (byte)*puVar44;
  pbVar15 = pbVar43 + 4;
  uVar26 = SUB42(puVar28,0);
  out(*(undefined4 *)pbVar43,uVar26);
  *(byte *)puVar34 = (byte)*puVar34 - bVar4;
  uVar35 = *puVar28;
  bVar6 = (byte)puVar34;
  *(byte *)puVar28 = (byte)*puVar28 + bVar6;
  iVar14 = CONCAT31((int3)((uint)puVar17 >> 8),bVar4) + *(int *)pbVar15 +
           (uint)CARRY1((byte)uVar35,bVar6);
  pbVar42 = pbVar18 + -*puVar28;
  uVar20 = (undefined3)((uint)iVar14 >> 8);
  cVar5 = (char)iVar14 + *pbVar15 + (pbVar18 < (byte *)*puVar28);
  puVar11 = (uint *)CONCAT31(uVar20,cVar5);
  bVar4 = (byte)((uint)puVar34 >> 8);
  *(byte *)puVar34 = (byte)*puVar34 - bVar4;
  *puVar11 = (uint)(*puVar11 + (int)puVar11);
  bVar6 = bVar6 | *(byte *)((int)puVar28 + (int)puVar11);
  uVar25 = (undefined2)((uint)puVar34 >> 0x10);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    pcVar10 = (char *)CONCAT31(uVar20,cVar5 + '\x12');
    *pcVar10 = *pcVar10 + bVar4;
    puVar11 = (uint *)CONCAT31(uVar20,(cVar5 + '\x12') -
                                      *(char *)CONCAT31((int3)((uint)puVar34 >> 8),bVar6));
    uVar35 = *puVar28;
    *(byte *)puVar28 = (byte)*puVar28 + bVar6;
    if (!CARRY1((byte)uVar35,bVar6)) {
      pbVar18 = (byte *)((uint)puVar11 | *puVar11);
      out(*(undefined4 *)pbVar15,uVar26);
      *pbVar18 = *pbVar18 + (char)pbVar18;
      bVar7 = *pbVar18;
      piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar4 | bVar7,bVar6));
      iVar14 = (int)pbVar18 - *piVar16;
      *(byte *)puVar28 = (byte)*puVar28 + bVar6;
      pbVar18 = pbVar43 + 0xc;
      out(*(undefined4 *)(pbVar43 + 8),uVar26);
      uRam12060000 = (undefined1)iVar14;
      *(char *)((int)piVar16 + iVar14) = *(char *)((int)piVar16 + iVar14) - (bVar4 | bVar7);
      *(byte *)puVar28 = (byte)*puVar28 + bVar6;
      pbVar15 = (byte *)(iVar14 + -0x120edecd);
      *pbVar18 = *pbVar18 + 1;
      bVar4 = *pbVar15;
      bVar7 = (byte)pbVar15;
      *pbVar15 = *pbVar15 + bVar7;
      pbVar42 = pbVar42 + ((-1 - *(int *)((int)puVar44 + 0x42)) - (uint)CARRY1(bVar4,bVar7));
      *pbVar15 = *pbVar15 + bVar7;
      bVar4 = (byte)pbVar40 | (byte)((uint)pbVar15 >> 8);
      pbRam0000416f = pbRam0000416f + (int)pbVar15;
      uVar35 = *puVar28;
      pcVar10 = (char *)(((uint)pbVar15 | 0x11) + 0x511072c);
      pbVar15 = pbVar43 + 0x10;
      out(*(undefined4 *)pbVar18,uVar26);
      puVar28 = (uint *)((int)puVar28 + 1);
      *pcVar10 = *pcVar10 + (char)pcVar10;
      bVar7 = (byte)((uint)pcVar10 >> 8);
      pbVar40 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)pbVar40 >> 0x10),
                                                 CONCAT11((byte)((uint)pbVar40 >> 8) | (byte)uVar35,
                                                          bVar4)) >> 8),bVar4 | bVar7);
      uVar20 = (undefined3)((uint)pcVar10 >> 8);
      bVar4 = (char)pcVar10 - *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar20,bVar4);
      *pcVar10 = *pcVar10 + bVar4;
      *(int *)((int)pcVar10 * 2) = (int)(pbVar40 + *(int *)((int)pcVar10 * 2));
      *(byte *)puVar28 = *(byte *)puVar28 + bVar4;
      *pbVar42 = *pbVar42 + bVar7;
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar20,bVar4 + in_AF * '\x06') & 0xffffff0f;
      bVar4 = (byte)uVar35;
      pbVar43 = (byte *)CONCAT22((short)(uVar35 >> 0x10),CONCAT11(bVar7 + in_AF,bVar4));
      *pbVar15 = *pbVar15 + bVar6;
      *pbVar43 = *pbVar43 + bVar4;
      *pbVar43 = *pbVar43 + bVar4;
      bVar45 = CARRY1(bVar4,*pbVar43);
      puVar11 = (uint *)CONCAT31((int3)((uint)pbVar43 >> 8),bVar4 + *pbVar43);
      goto code_r0x00404d9a;
    }
    *pbVar40 = *pbVar40 - (char)puVar28;
  }
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
  bVar45 = false;
  piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar4 | (byte)*puVar28,bVar6));
code_r0x00404d9a:
  do {
    puVar34 = puVar28;
    *puVar11 = (*puVar11 - (int)puVar11) - (uint)bVar45;
    bVar4 = (byte)((uint)piVar16 >> 8);
    uVar25 = (undefined2)((uint)piVar16 >> 0x10);
    bVar6 = (byte)piVar16;
    bVar7 = bVar4 + (byte)iRam00000c00;
    pbVar43 = (byte *)(iRam00000c00 + 0xc00 + (uint)CARRY1(bVar4,(byte)iRam00000c00));
    *(byte *)puVar34 = (byte)*puVar34 + bVar6;
    pbVar40 = (byte *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 - *pbVar15);
    bVar4 = *pbVar43;
    puVar11 = (uint *)(pbVar43 + (uint)CARRY1(bVar7,*pbVar43) + *(int *)pbVar43);
    *(byte *)puVar34 = (byte)*puVar34 + bVar6;
    cVar23 = ((bVar7 + bVar4) - (byte)*puVar34) + (byte)*puVar11;
    pcVar10 = (char *)CONCAT22(uVar25,CONCAT11(cVar23,bVar6));
    puVar28 = puVar44 + 1;
    uVar35 = in((short)puVar34);
    *puVar44 = uVar35;
    cVar5 = (char)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    uVar20 = (undefined3)((uint)puVar34 >> 8);
    bVar7 = (byte)puVar34 | *pbVar15;
    pcVar19 = (char *)CONCAT31(uVar20,bVar7);
    *pcVar10 = *pcVar10 + '\x01';
    bVar4 = (cVar23 - *pcVar19) + (byte)*puVar11;
    pcVar10 = (char *)CONCAT22(uVar25,CONCAT11(bVar4,bVar6));
    puVar44 = puVar44 + 2;
    uVar35 = in((short)pcVar19);
    *puVar28 = uVar35;
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    bVar7 = bVar7 | *pbVar15;
    puVar28 = (uint *)CONCAT31(uVar20,bVar7);
    *pcVar10 = *pcVar10 + '\x01';
    bVar45 = bVar6 < *(byte *)((int)puVar28 + 2);
    cVar23 = bVar6 - *(byte *)((int)puVar28 + 2);
    piVar16 = (int *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar23);
  } while ((POPCOUNT(cVar23) & 1U) != 0);
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  bVar6 = cVar5 + 0x7b;
  pbVar18 = (byte *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6);
  pbVar40[(int)pbVar18] = pbVar40[(int)pbVar18] + bVar6;
  pbVar43 = pbVar15 + 4;
  uVar26 = SUB42(puVar28,0);
  out(*(undefined4 *)pbVar15,uVar26);
  pbVar33 = pbVar40 + -1;
  *pbVar18 = *pbVar18 + bVar6;
  bVar4 = bVar4 | (byte)*puVar28;
  piVar16 = (int *)CONCAT22(uVar25,CONCAT11(bVar4,cVar23));
  *pbVar18 = *pbVar18 + bVar6;
  *pbVar33 = *pbVar33 + bVar7;
  *pbVar33 = *pbVar33 ^ bVar6;
  *(byte *)puVar28 = (byte)*puVar28 + bVar4;
  *pbVar18 = *pbVar18 + bVar6;
  do {
    bVar24 = (byte)((uint)piVar16 >> 8);
    *(byte *)puVar44 = (byte)*puVar44 + bVar24;
    bVar4 = *pbVar18;
    bVar6 = (byte)pbVar18;
    *pbVar18 = *pbVar18 + bVar6;
    *(byte **)(pbVar40 + 0x17) = pbVar43 + (uint)CARRY1(bVar4,bVar6) + *(int *)(pbVar40 + 0x17);
    *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
    uVar21 = (undefined3)((uint)pbVar18 >> 8);
    bVar6 = bVar6 | *pbVar43;
    puVar44 = (uint *)((int)puVar44 + *(int *)(pbVar42 + -0x34));
    *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
    bVar4 = bVar6 + 2;
    cVar5 = (char)((uint)puVar34 >> 8);
    bVar30 = (byte)piVar16;
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      pbVar18 = (byte *)CONCAT31(uVar21,bVar6 + 0x15 + (0xfd < bVar6));
      if (0xec < bVar4 || CARRY1(bVar6 + 0x15,0xfd < bVar6)) {
        *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
      }
code_r0x00404e60:
      pbVar42 = pbVar42 + -*puVar28;
      bVar4 = *pbVar18;
      *pbVar18 = *pbVar18 + (byte)pbVar18;
      pbVar43 = pbVar43 + (-(uint)CARRY1(bVar4,(byte)pbVar18) - *(int *)pbVar18);
      pbVar18 = pbVar18 + *(int *)pbVar18;
      puStack_24 = (uint *)CONCAT22(puStack_24._2_2_,in_DS);
      *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
      *(char *)piVar16 = (char)*piVar16 + cVar5;
      bVar4 = *pbVar18;
      *pbVar18 = *pbVar18 + (byte)pbVar18;
      *(byte **)(pbVar33 + (int)puVar28) =
           (byte *)((int)puVar28 +
                   (uint)CARRY1(bVar4,(byte)pbVar18) + *(int *)(pbVar33 + (int)puVar28));
      pbVar18 = pbVar18 + 0x73061314;
      *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
      uVar21 = (undefined3)((uint)piVar16 >> 8);
      bVar30 = bVar30 | (byte)*puVar28;
      pcVar19 = (char *)CONCAT31(uVar21,bVar30);
      *pbVar18 = *pbVar18 + (char)pbVar18;
      cVar5 = (char)pbVar18 + 'o';
      pcVar10 = (char *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar5);
      *pcVar10 = *pcVar10 + cVar5;
      out(*(undefined4 *)pbVar43,uVar26);
      uVar35 = *puVar28;
      *(byte *)puVar28 = (byte)*puVar28 + bVar30;
      pcVar10 = pcVar10 + (uint)CARRY1((byte)uVar35,bVar30) + *puVar44;
      *pcVar10 = *pcVar10 + (char)pcVar10;
      *pcVar19 = *pcVar19 + bVar7;
      pbVar18 = pbVar43 + 8;
      out(*(undefined4 *)(pbVar43 + 4),uVar26);
      *(byte *)puVar28 = (byte)*puVar28 + bVar30;
      piVar16 = (int *)((uint)pcVar10 | *puVar44);
      pcVar19[0x390a0000] = pcVar19[0x390a0000] - bVar24;
      pbVar43 = (byte *)0x7000000;
      *(byte *)puVar44 = (byte)*puVar44 - bVar24;
      *piVar16 = *piVar16 + (int)piVar16;
      puVar11 = (uint *)CONCAT31(uVar21,bVar30 | *(byte *)((int)piVar16 + (int)pcVar19));
      *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) - bVar24;
      cRam07000000 = cRam07000000 + bVar24;
      piVar16 = (int *)((uint)piVar16 | 0x777b02);
      pbVar40 = (byte *)((int)puVar44 + (int)pbVar42 * 2);
      bVar45 = SCARRY1(*pbVar40,(char)piVar16);
      *pbVar40 = *pbVar40 + (char)piVar16;
      bVar4 = *pbVar40;
      *(char *)piVar16 = (char)*piVar16;
      goto code_r0x00404ebf;
    }
    *(char *)CONCAT31(uVar21,bVar4) = *(char *)CONCAT31(uVar21,bVar4) + bVar4;
    bVar6 = bVar6 + 0x71;
    pbVar18 = (byte *)CONCAT31(uVar21,bVar6);
    *pbVar18 = *pbVar18;
    *pbVar43 = *pbVar43 + 1;
    *piVar16 = (*piVar16 - (int)pbVar18) - (uint)(0x90 < bVar4);
    bVar4 = *pbVar43;
    *pbVar43 = *pbVar43 + bVar6;
    if (!CARRY1(bVar4,bVar6)) goto code_r0x00404e60;
    *pbVar18 = *pbVar18 + bVar6;
    uVar25 = (undefined2)((uint)piVar16 >> 0x10);
    bVar24 = bVar24 | *pbVar18;
    pbVar18 = pbVar18 + -*(int *)pbVar18;
    *pbVar33 = *pbVar33 + bVar24;
    cVar23 = bVar30 - *(byte *)((int)puVar28 + 2);
    piVar16 = (int *)CONCAT31((int3)(CONCAT22(uVar25,CONCAT11(bVar24,bVar30)) >> 8),cVar23);
  } while ((POPCOUNT(cVar23) & 1U) != 0);
  cVar31 = (char)pbVar18;
  *pbVar18 = *pbVar18 + cVar31;
  uVar21 = (undefined3)((uint)pbVar18 >> 8);
  pcVar10 = (char *)CONCAT31(uVar21,cVar31 + '{');
  out(*(undefined4 *)pbVar43,uVar26);
  *pcVar10 = *pcVar10 + cVar31 + '{';
  bVar6 = cVar31 + 0x7e;
  pbVar33 = (byte *)CONCAT31(uVar21,bVar6);
  pbVar18 = pbVar15 + 0xc;
  out(*(undefined4 *)(pbVar15 + 8),uVar26);
  pbVar43 = pbVar40 + -2;
  *pbVar33 = *pbVar33 + bVar6;
  bVar24 = bVar24 | (byte)*puVar28;
  puVar11 = (uint *)CONCAT22(uVar25,CONCAT11(bVar24,cVar23));
  *pbVar33 = *pbVar33 + bVar6;
  *pbVar43 = *pbVar43 + bVar7;
  *pbVar43 = *pbVar43 ^ bVar6;
  *(byte *)puVar28 = (byte)*puVar28 + bVar24;
  *pbVar33 = *pbVar33 + bVar6;
  *pbVar33 = *pbVar33 + cVar5;
  bVar4 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar6;
  *(byte **)(pbVar40 + 0x18) = pbVar18 + (uint)CARRY1(bVar4,bVar6) + *(int *)(pbVar40 + 0x18);
  *(byte **)pbVar33 = pbVar33 + *(int *)pbVar33;
  bVar6 = bVar6 | *pbVar18;
  puVar44 = (uint *)((int)puVar44 + *(int *)(pbVar42 + -0x33));
  *(char *)CONCAT31(uVar21,bVar6) = *(char *)CONCAT31(uVar21,bVar6) + bVar6;
  bVar45 = SCARRY1(bVar6,'\x02');
  bVar4 = bVar6 + 2;
  piVar16 = (int *)CONCAT31(uVar21,bVar4);
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    *(byte *)piVar16 = (char)*piVar16 + bVar4;
    return CONCAT31(uVar21,bVar6 + 0x71);
  }
code_r0x00404ebf:
  bVar6 = (byte)piVar16;
  uVar21 = (undefined3)((uint)piVar16 >> 8);
  if (bVar4 != 0 && bVar45 == (char)bVar4 < '\0') {
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    *(byte **)(pbVar18 + (int)puVar44 * 8) =
         (byte *)((int)puVar28 + (uint)(0xd2 < bVar6) + *(int *)(pbVar18 + (int)puVar44 * 8));
    return CONCAT31(uVar21,bVar6 + 0x2d);
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar4 = *pbVar43;
  *(char **)pbVar18 = (char *)(*(int *)pbVar18 + (int)piVar16);
  bVar30 = (byte)((uint)puVar11 >> 8);
  *(byte *)piVar16 = (char)*piVar16 - bVar30;
  *(byte *)piVar16 = (char)*piVar16 + bVar6;
  pbVar15 = (byte *)(CONCAT31(uVar20,bVar7 | bVar4) - *(int *)pbVar43);
  puVar28 = (uint *)CONCAT31(uVar21,bVar6 + 6);
  *(uint *)(pbVar43 + (int)pbVar18 * 2) =
       (int)puVar28 + (uint)(0xf9 < bVar6) + *(int *)(pbVar43 + (int)pbVar18 * 2);
  *(byte *)puVar11 = (byte)*puVar11 ^ bVar6 + 6;
  bVar6 = (byte)puVar11;
  *pbVar15 = *pbVar15 + bVar6;
  pbVar40 = pbVar18 + 4;
  uVar25 = SUB42(pbVar15,0);
  out(*(undefined4 *)pbVar18,uVar25);
  *puVar11 = *puVar11 ^ (uint)puVar28;
  *pbVar15 = *pbVar15 + bVar6;
  puVar34 = (uint *)(pbVar43 + -*(int *)pbVar43);
  *(uint *)((int)puVar44 + 0x31) = *(uint *)((int)puVar44 + 0x31) | (uint)pbVar42;
  *puVar28 = *puVar28 + (int)puVar28;
  puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),CONCAT11(bVar30 | (byte)*puVar34,bVar6))
  ;
  *(byte **)(pbVar15 + 0x6e) = pbVar40 + *(int *)(pbVar15 + 0x6e);
  piVar16 = (int *)((uint)puVar28 | *puVar28);
  bVar7 = (byte)puVar34;
  *(byte *)puVar44 = (byte)*puVar44 - bVar7;
  bVar4 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar6;
  if (CARRY1(bVar4,bVar6)) {
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    bVar4 = pbVar15[0x11];
    uVar26 = (undefined2)((uint)puVar34 >> 0x10);
    out(*(undefined4 *)pbVar40,uVar25);
    puVar11 = (uint *)((int)puVar11 + 1);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    bVar27 = (byte)((uint)puVar34 >> 8) | bVar4 | *pbVar15;
    pcVar10 = (char *)((int)piVar16 + -0x21000001);
    bVar4 = (byte)pcVar10 | 0x11;
    uVar20 = (undefined3)((uint)pcVar10 >> 8);
    cVar5 = bVar4 - 7;
    pcVar19 = (char *)CONCAT31(uVar20,cVar5);
    *puVar44 = (uint)(pcVar19 + (uint)(bVar4 < 7) + *puVar44);
    pbVar40 = pbVar18 + 0xc;
    out(*(undefined4 *)(pbVar18 + 8),uVar25);
    pbVar15 = pbVar15 + 1;
    *pcVar19 = *pcVar19 + cVar5;
    bVar30 = (byte)((uint)pcVar10 >> 8);
    bVar24 = bVar7 | bVar30;
    bVar6 = cVar5 - *pcVar19;
    bVar4 = *(byte *)puVar11;
    *(byte *)puVar11 = *(byte *)puVar11 + bVar6;
    *(char *)CONCAT31(uVar20,bVar6) = *(char *)CONCAT31(uVar20,bVar6) + bVar6 + CARRY1(bVar4,bVar6);
    *pbVar15 = *pbVar15 + bVar6;
    *pbVar40 = *pbVar40 + bVar24;
    bVar4 = (byte)((uint)pbVar15 >> 8);
    *(byte *)puVar11 = *(byte *)puVar11 + bVar6 + CARRY1((byte)pbVar15,bVar4);
    piVar16 = (int *)CONCAT31(uVar20,bVar6);
    *(byte *)piVar16 = (char)*piVar16 + bVar6;
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                               CONCAT11(bVar4 + bVar30,(byte)pbVar15 + bVar4));
    puVar34 = (uint *)CONCAT22(uVar26,CONCAT11(bVar27 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,
                                                  CONCAT11(bVar27,bVar7)) >> 8),bVar24) + 0x76),
                                               bVar24));
    uStack_18 = puStack_24._0_2_;
code_r0x00404fa4:
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
    pcVar10 = (char *)(CONCAT31((int3)((uint)piVar16 >> 8),(char)piVar16 + '(') ^ *puVar11);
    cVar31 = (char)puVar11;
    *pbVar15 = *pbVar15 + cVar31;
    uVar25 = (undefined2)((uint)puVar34 >> 0x10);
    cVar32 = (char)puVar34;
    cVar36 = (char)((uint)puVar34 >> 8) + *(byte *)((int)puVar34 + 0x75);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar5 = (char)pcVar10 + 'o';
    pcVar10 = (char *)CONCAT31((int3)((uint)pcVar10 >> 8),cVar5);
    *pcVar10 = *pcVar10 + cVar5;
    cVar37 = (char)((uint)puVar11 >> 8);
    *pbVar42 = *pbVar42 - cVar37;
    pbVar15[1] = pbVar15[1] + cVar31;
    pcVar10 = pcVar10 + -0x757b021b;
    cVar5 = (char)pcVar10;
    *pcVar10 = *pcVar10 + cVar5;
    uVar20 = (undefined3)((uint)pcVar10 >> 8);
    cVar23 = cVar5 + 'o';
    pcVar10 = (char *)CONCAT31(uVar20,cVar23);
    pbVar18 = pbVar15 + 2;
    *pcVar10 = *pcVar10 + cVar23;
    iVar14 = CONCAT22(uVar25,CONCAT11(cVar36 + *(char *)(CONCAT22(uVar25,CONCAT11(cVar36,cVar32)) +
                                                        0x76),cVar32));
    *pcVar10 = *pcVar10 + cVar23;
    pcVar10 = (char *)CONCAT31(uVar20,cVar5 + -0x22);
    puVar28 = (uint *)((int)puVar44 + 1);
    *(byte *)puVar44 = *pbVar40;
    *pcVar10 = *pcVar10 + cVar5 + -0x22;
    *(byte *)((int)puVar11 + (int)pcVar10) =
         *(byte *)((int)puVar11 + (int)pcVar10) - (char)((uint)pbVar18 >> 8);
    *pbVar18 = *pbVar18 + cVar31;
    bVar6 = cVar37 - pbVar15[4];
    pbVar43 = pbVar40 + 5;
    out(*(undefined4 *)(pbVar40 + 1),(short)pbVar18);
    puVar44 = (uint *)((uint)(pcVar10 + *(int *)(pcVar10 + iVar14)) ^ 0x280a0001);
    *(byte *)puVar44 = (byte)*puVar44 << 1 | (char)(byte)*puVar44 < '\0';
    *pbVar43 = *pbVar43 + (char)puVar44;
    pbVar43 = pbVar43 + *(int *)(pbVar15 + -0x5c);
    pbVar40 = (byte *)((uint)puVar44 | *puVar44);
    *pbVar43 = *pbVar43 + (char)pbVar40;
    puVar34 = (uint *)CONCAT31((int3)((uint)iVar14 >> 8),cVar32 - (char)pbVar18);
    bVar4 = *pbVar40;
    puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),CONCAT11(bVar6 + *pbVar40,cVar31));
    iVar14 = *(int *)pbVar40;
    *pbVar18 = *pbVar18 + cVar31;
    cVar5 = (char)(pbVar40 + (uint)CARRY1(bVar6,bVar4) + iVar14) + 'r';
    puVar44 = (uint *)CONCAT31((int3)((uint)(pbVar40 + (uint)CARRY1(bVar6,bVar4) + iVar14) >> 8),
                               cVar5);
    pbVar15 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),CONCAT11(10,(char)pbVar18));
    *(char *)(puVar44 + 10) = (char)puVar44[10] + '\n';
    *pbVar43 = *pbVar43 + cVar5;
    pbVar40 = pbVar43 + *(int *)(pbVar15 + -0x5e);
    uVar35 = *puVar44;
    cVar5 = (char)((uint)puVar44 | uVar35);
    *pbVar40 = *pbVar40 + cVar5;
    uVar20 = (undefined3)(((uint)puVar44 | uVar35) >> 8);
    cVar23 = cVar5 + (byte)*puVar34;
    puVar44 = (uint *)CONCAT31(uVar20,cVar23);
    if (SCARRY1(cVar5,(byte)*puVar34) == cVar23 < '\0') goto code_r0x00405090;
    *(byte *)puVar44 = (byte)*puVar44 + cVar23;
    piVar16 = (int *)CONCAT31(uVar20,cVar23 + '\x02');
    puVar44 = puVar28;
  }
  else {
    out(2,(char)piVar16);
    if ((POPCOUNT(*pbVar15) & 1U) == 0) goto code_r0x00404fa4;
  }
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  cVar5 = (char)piVar16 + '}';
  pbVar43 = (byte *)CONCAT31(uVar20,cVar5);
  pbVar15[(int)pbVar43] = pbVar15[(int)pbVar43] + cVar5;
  pbVar15[0x280a0000] = pbVar15[0x280a0000] - (char)((uint)piVar16 >> 8);
  bVar4 = (byte)puVar11 & 7;
  *pbVar43 = *pbVar43 << bVar4 | *pbVar43 >> 8 - bVar4;
  *pbVar40 = *pbVar40 + cVar5;
  cVar31 = (char)puVar34 - *pbVar40;
  uVar25 = (undefined2)((uint)puVar34 >> 0x10);
  cVar37 = (char)((uint)puVar34 >> 8) +
           *(char *)(CONCAT31((int3)((uint)puVar34 >> 8),cVar31) + 0x7c);
  pcVar10 = (char *)CONCAT22(uVar25,CONCAT11(cVar37,cVar31));
  *pbVar43 = *pbVar43 + cVar5;
  bVar6 = (char)piVar16 + 0xa7U & *pbVar15;
  puVar28 = (uint *)((int)puVar44 + *(int *)(pbVar42 + 0x7c));
  *(char *)CONCAT31(uVar20,bVar6) = *(char *)CONCAT31(uVar20,bVar6) + bVar6;
  bVar6 = bVar6 + 0x2a;
  pbVar43 = (byte *)CONCAT31(uVar20,bVar6);
  *pbVar43 = *pbVar43 + bVar6;
  *pcVar10 = *pcVar10 + cVar31;
  *pbVar15 = *pbVar15 ^ bVar6;
  *pcVar10 = *pcVar10 + bVar6;
  bVar4 = *pbVar43;
  *pbVar43 = *pbVar43 + bVar6;
  cVar5 = (bVar6 - *pbVar43) - CARRY1(bVar4,bVar6);
  *(byte *)puVar11 = (byte)*puVar11 + (byte)pbVar15;
  cVar37 = cVar37 + pcVar10[0x7b];
  *(char *)CONCAT31(uVar20,cVar5) = *(char *)CONCAT31(uVar20,cVar5) + cVar5;
  pcVar10 = (char *)CONCAT31(uVar20,cVar5 + 'o');
  *pcVar10 = *pcVar10 + cVar5 + 'o';
  pcVar10 = pcVar10 + 0x2ed7fde6;
  cVar23 = (char)pcVar10;
  *pcVar10 = *pcVar10 + cVar23;
  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar37,cVar31)) + 0x7b);
  *pcVar10 = *pcVar10 + cVar23;
  piVar16 = (int *)(CONCAT31((int3)((uint)pcVar10 >> 8),cVar23 + 'o') + 0x6f060000);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar21 = (undefined3)((uint)pbVar15 >> 8);
  bVar6 = (byte)pbVar15 | *pbVar40;
  pbVar33 = (byte *)CONCAT31(uVar21,bVar6);
  uVar35 = CONCAT22(uVar25,CONCAT11(cVar37 + cVar5,cVar31)) | (uint)pbVar40;
  uVar20 = (undefined3)((uint)piVar16 >> 8);
  bVar4 = (byte)piVar16 | *pbVar33;
  pbVar18 = (byte *)CONCAT31(uVar20,bVar4);
  cVar5 = (byte)puVar11 - bVar6;
  puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),cVar5);
  *pbVar18 = *pbVar18 + bVar4;
  pbVar43 = pbVar40 + 4;
  out(*(undefined4 *)pbVar40,(short)pbVar33);
  *pbVar18 = bVar4;
  *pbVar33 = *pbVar33 + cVar5;
  pbVar40 = pbVar40 + 8;
  out(*(undefined4 *)pbVar43,(short)pbVar33);
  *(byte **)pbVar18 = pbVar18 + *(int *)pbVar18;
  puVar34 = (uint *)(CONCAT31((int3)(uVar35 >> 8),(char)uVar35 - (char)((uint)pbVar15 >> 8)) |
                    (uint)pbVar40);
  pbVar15 = (byte *)CONCAT31(uVar21,(bVar6 | *pbVar40) + (byte)*puVar28);
  cVar5 = bVar4 - (byte)*puVar28;
  puVar44 = (uint *)CONCAT31(uVar20,cVar5 - *(char *)CONCAT31(uVar20,cVar5));
code_r0x00405090:
  *puVar44 = (uint)(pbVar15 + *puVar44);
  cVar5 = (char)puVar44;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5;
  *puVar11 = *puVar11 - (int)pbVar42;
  bVar4 = *pbVar40;
  bVar6 = (byte)pbVar15;
  *pbVar40 = *pbVar40 + bVar6;
  *(byte *)puVar44 = (byte)*puVar44 + cVar5 + CARRY1(bVar4,bVar6);
  *(byte *)puVar11 = (byte)*puVar11 + cVar5;
  uVar35 = *puVar34;
  *(byte *)puVar34 = (byte)*puVar34 + 0x72;
  *(byte *)puVar34 = (byte)*puVar34;
  cVar5 = (char)((uint)pbVar15 >> 8);
  if (SCARRY1((byte)uVar35,'r')) {
    pbVar40 = pbVar40 + *(int *)(pbVar15 + -10);
  }
  else {
    while( true ) {
      *pbVar40 = *pbVar40 + (char)puVar44;
      uVar20 = (undefined3)((uint)puVar44 >> 8);
      cVar23 = (char)puVar44 + (byte)*puVar34;
      pcVar10 = (char *)CONCAT31(uVar20,cVar23);
      puVar34 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),
                                 CONCAT11((char)((uint)puVar34 >> 8) +
                                          *(byte *)((int)puVar34 + 0x7b),(char)puVar34));
      *pcVar10 = *pcVar10 + cVar23;
      in_AF = 9 < (cVar23 + 0x6fU & 0xf) | in_AF;
      uVar35 = CONCAT31(uVar20,cVar23 + 0x6fU + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar35;
      piVar16 = (int *)CONCAT22((short)(uVar35 >> 0x10),
                                CONCAT11((char)((uint)puVar44 >> 8) + in_AF,bVar7));
      *piVar16 = *piVar16 + (int)piVar16;
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar7 = bVar7 | *(byte *)(piVar16 + 0x354a);
      bVar7 = bVar7 - *(char *)CONCAT31(uVar20,bVar7);
      pbVar43 = (byte *)CONCAT31(uVar20,bVar7);
      bVar4 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar7;
      pbVar40 = pbVar40 + (-(uint)CARRY1(bVar4,bVar7) - *(int *)pbVar43);
      puVar44 = (uint *)(pbVar43 + 0xfc00);
      *pbVar15 = *pbVar15 + cVar5;
      uVar35 = *puVar44;
      bVar4 = (byte)puVar44;
      *(byte *)puVar44 = (byte)*puVar44 + bVar4;
      uVar12 = (uint)CARRY1((byte)uVar35,bVar4);
      uVar35 = *puVar34;
      uVar2 = *puVar34;
      *puVar34 = (uint)((byte *)(uVar2 + (int)puVar44) + uVar12);
      if (!CARRY4(uVar35,(uint)puVar44) && !CARRY4(uVar2 + (int)puVar44,uVar12)) break;
      *(byte *)puVar44 = (byte)*puVar44 + bVar4;
    }
  }
  uVar35 = (uint)puVar44 | *puVar44;
  uVar25 = SUB42(pbVar15,0);
  *pbVar40 = *pbVar40 + (char)uVar35;
  piVar16 = (int *)(uVar35 + 0xc1872);
  if (SCARRY4(uVar35,0xc1872)) {
    cVar23 = (char)piVar16;
    *(char *)piVar16 = *(char *)piVar16 + cVar23;
    *pbVar15 = *pbVar15 + cVar23;
    *(char *)piVar16 = *(char *)piVar16 + cVar23;
    *(byte *)puVar34 = (byte)*puVar34 + (char)puVar11;
    *(char *)piVar16 = *(char *)piVar16 + cVar23;
    *(char *)((int)piVar16 * 2) = *(char *)((int)piVar16 * 2) + bVar6;
    pbVar43 = pbVar40;
    goto code_r0x00405117;
  }
  do {
    bVar4 = *pbVar40;
    bVar6 = (byte)piVar16;
    *pbVar40 = *pbVar40 + bVar6;
    if (CARRY1(bVar4,bVar6)) {
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      uVar20 = (undefined3)((uint)puVar11 >> 8);
      bVar4 = (byte)puVar11 | bRam396f1609;
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      puVar11 = (uint *)CONCAT31(uVar20,bVar4 | *(byte *)CONCAT31(uVar20,bVar4));
      uVar20 = (undefined3)((uint)piVar16 >> 8);
      bVar6 = bVar6 | *pbVar15;
      pcVar10 = (char *)CONCAT31(uVar20,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        pbVar43 = pbVar40 + 4;
        out(*(undefined4 *)pbVar40,uVar25);
        uVar35 = CONCAT22((short)((uint)piVar16 >> 0x10),(ushort)bVar6);
        *pbVar43 = *pbVar43 + bVar6;
        pcVar10 = (char *)(uVar35 | 8);
        cVar23 = (char)((uint)puVar34 >> 8) + *(byte *)((int)puVar34 + 0x7a);
        puVar44 = (uint *)CONCAT22((short)((uint)puVar34 >> 0x10),CONCAT11(cVar23,(char)puVar34));
        *pcVar10 = *pcVar10 + (char)pcVar10;
        cVar5 = (char)pcVar10 + 'o';
        piVar16 = (int *)CONCAT31((int3)(uVar35 >> 8),cVar5);
        *(char *)piVar16 = (char)*piVar16 + cVar5;
        *(byte *)puVar11 = (byte)*puVar11 + 1;
        pbVar40 = pbVar40 + 8;
        out(*(undefined4 *)pbVar43,uVar25);
        pbVar15 = (byte *)((uint)pbVar15 ^ uRam08122c04);
        iVar14 = CONCAT31((int3)((uint)(*piVar16 * 0x17070600) >> 8),2);
        *(char *)(iVar14 * 2) = *(char *)(iVar14 * 2) - cVar23;
        do {
          bVar4 = (byte)iVar14;
          *pbVar40 = *pbVar40 + bVar4;
          bVar45 = CARRY1(bVar4,(byte)*puVar44);
          uVar20 = (undefined3)((uint)iVar14 >> 8);
          cVar5 = bVar4 + (byte)*puVar44;
          pbVar43 = (byte *)CONCAT31(uVar20,cVar5);
          uVar25 = in_DS;
          uVar26 = uStack_64;
          if (SCARRY1(bVar4,(byte)*puVar44) == cVar5 < '\0') goto GenerateStatusText;
          *pbVar43 = *pbVar43 + cVar5;
          uVar35 = CONCAT31(uVar20,cVar5 + '\'') + 0x1ebd9f3;
          uStack_68 = (undefined1)uStack_18;
          uStack_67 = (undefined1)((ushort)uStack_18 >> 8);
          piVar16 = (int *)(uVar35 ^ 0x73060000);
          puVar11 = (uint *)((int)puVar11 + 1);
          *piVar16 = (int)(*piVar16 + (int)piVar16);
          puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                     CONCAT11((byte)((uint)puVar44 >> 8) | pbVar42[0x7e],
                                              (char)puVar44));
          cVar5 = (char)uVar35;
          *(char *)piVar16 = (char)*piVar16 + cVar5;
          uVar35 = CONCAT31((int3)((uint)piVar16 >> 8),cVar5 + '\x02');
          bVar45 = 0xd9f2d2da < uVar35;
          iVar14 = uVar35 + 0x260d2d25;
          pbVar18 = pbVar42;
          do {
            uVar20 = (undefined3)((uint)iVar14 >> 8);
            bVar6 = (char)iVar14 + -2 + bVar45;
            pbVar43 = (byte *)CONCAT31(uVar20,bVar6);
            bVar4 = *pbVar43;
            *pbVar43 = *pbVar43 + bVar6;
            bVar7 = (byte)puVar44;
            uStack_64 = uStack_18;
            if (CARRY1(bVar4,bVar6)) {
              *pbVar43 = *pbVar43 + bVar6;
              puVar44 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),
                                         CONCAT11((byte)((uint)puVar44 >> 8) | pbVar18[0x7f],bVar7))
              ;
              *pbVar43 = *pbVar43 + bVar6;
              pbVar43 = (byte *)CONCAT31(uVar20,bVar6 + 0x2a);
              *pbVar43 = *pbVar43 + bVar6 + 0x2a;
              *(byte *)puVar44 = (byte)*puVar44 + (char)pbVar15;
              uVar25 = in_DS;
              while( true ) {
                in_DS = uVar25;
                bVar6 = (byte)pbVar43;
                *pbVar15 = *pbVar15 ^ bVar6;
                *pbVar15 = *pbVar15 + (char)puVar44;
                *pbVar43 = *pbVar43 + bVar6;
                *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)pbVar15 >> 8);
                bVar4 = *pbVar43;
                *pbVar43 = *pbVar43 + bVar6;
                uVar35 = *puVar44;
                uVar2 = *puVar44;
                *puVar44 = (uint)(pbVar43 + uVar2 + CARRY1(bVar4,bVar6));
                uVar20 = (undefined3)((uint)pbVar43 >> 8);
                if (CARRY4(uVar35,(uint)pbVar43) ||
                    CARRY4((uint)(pbVar43 + uVar2),(uint)CARRY1(bVar4,bVar6))) break;
                *pbVar40 = *pbVar40 + bVar6;
                pcVar10 = (char *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                           CONCAT11((char)((uint)puVar11 >> 8) + *pbVar43,
                                                    (char)puVar11));
                *pbVar40 = *pbVar40 + bVar6;
                piVar16 = (int *)CONCAT31(uVar20,bVar6 | (byte)*puVar44);
                pbVar43 = pbVar40;
                while( true ) {
                  pbVar40 = pbVar43 + 4;
                  out(*(undefined4 *)pbVar43,(short)pbVar15);
                  pbVar15 = pbVar15 + 1;
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  bVar7 = (byte)((uint)pcVar10 >> 8) | *pbVar15;
                  uVar20 = (undefined3)((uint)piVar16 >> 8);
                  bVar6 = (byte)piVar16 ^ *pbVar15;
                  pcVar19 = (char *)CONCAT31(uVar20,bVar6);
                  cRam282b0000 = cRam282b0000 - bVar7;
                  *pcVar19 = *pcVar19 + bVar6;
                  pbVar42 = pbVar18 + -*(int *)pbVar15;
                  uStack_68 = (undefined1)in_DS;
                  uStack_67 = (undefined1)((ushort)in_DS >> 8);
                  bVar4 = *(byte *)((int)puVar28 + 0x17);
                  *pcVar19 = *pcVar19 + bVar6;
                  puVar11 = (uint *)CONCAT22((short)((uint)pcVar10 >> 0x10),
                                             CONCAT11(bVar7 + bVar4 | *pbVar15,(char)pcVar10));
                  *(byte *)puVar44 = (byte)*puVar44 + (char)puVar44;
                  *(byte *)((int)pcVar19 * 2) = *(byte *)((int)pcVar19 * 2) ^ bVar6;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  bVar6 = bVar6 + in_AF * -6;
                  pbVar43 = (byte *)CONCAT31(uVar20,bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) *
                                                            -0x60);
                  *(byte **)pbVar43 = pbVar43 + *(int *)pbVar43;
                  *(char *)((int)pbVar43 * 2) =
                       *(char *)((int)pbVar43 * 2) + (char)((uint)pbVar15 >> 8);
                  bVar45 = CARRY1((byte)*puVar11,(byte)pbVar15);
                  *(byte *)puVar11 = (byte)*puVar11 + (byte)pbVar15;
                  uVar25 = in_DS;
                  uVar26 = uStack_18;
GenerateStatusText:
                  in_DS = uVar26;
                  pbVar18 = pbVar42;
                  uStack_64 = in_DS;
                  if (!bVar45) break;
                  *pbVar43 = *pbVar43 + (char)pbVar43;
                  iVar14 = CONCAT31((int3)((uint)puVar11 >> 8),(byte)puVar11 | *pbVar15);
                  uVar25 = (undefined2)((uint)puVar44 >> 0x10);
                  cVar31 = (char)((uint)puVar44 >> 8) + *(byte *)((int)puVar44 + 0x7d);
                  *pbVar43 = *pbVar43 + (char)pbVar43;
                  *(byte *)puVar28 = (byte)*puVar28 - (char)((uint)puVar11 >> 8);
                  iVar14 = iVar14 - *(int *)(iVar14 + 0xb0a0000);
                  cVar5 = *(char *)(CONCAT22(uVar25,CONCAT11(cVar31,(char)puVar44)) + 0x7f);
                  cRam0b0a00e8 = cRam0b0a00e8 + -0x18;
                  out(*(undefined4 *)pbVar40,(short)pbVar15);
                  pbVar15 = (byte *)CONCAT22(uStack_66,CONCAT11(uStack_67,uStack_68));
                  iRam0b0a00f0 = CONCAT31(iRam0b0a00f0._1_3_,(char)iRam0b0a00f0 + -0x10);
                  pbVar43 = pbVar40 + 8;
                  out(*(undefined4 *)(pbVar40 + 4),CONCAT11(uStack_67,uStack_68));
                  pbVar18 = pbVar42 + 1;
                  cVar23 = (char)iVar14;
                  pcVar10 = (char *)CONCAT22((short)((uint)iVar14 >> 0x10),
                                             CONCAT11((byte)((uint)iVar14 >> 8) |
                                                      *(byte *)((int)puVar28 + 0x46),cVar23));
                  iRam0b0a00f0 = iRam0b0a00f0 + 0x161401e0;
                  uStack_18 = CONCAT11(uStack_67,uStack_68);
                  uVar20 = (undefined3)(CONCAT22(0xb0a,CONCAT11(*pbVar43,0xf0)) >> 8);
                  piVar16 = (int *)CONCAT31(uVar20,0x5f);
                  puVar28 = (uint *)((int)puVar28 + 1);
                  *piVar16 = (int)(*piVar16 + (int)piVar16);
                  puVar44 = (uint *)CONCAT22(uVar25,CONCAT11(cVar31 + cVar5 | pbVar40[-0x78],
                                                             (char)puVar44));
                  *(char *)piVar16 = (char)*piVar16 + '_';
                  puVar11 = (uint *)CONCAT31(uVar20,0x8c);
                  *(byte **)(pbVar43 + (int)puVar28 * 8) =
                       pbVar15 + *(int *)(pbVar43 + (int)puVar28 * 8);
                  bVar4 = *pbVar43;
                  *pbVar43 = *pbVar43 + 0x8c;
                  if (bVar4 < 0x74) {
                    *pbVar15 = *pbVar15 + cVar23;
                    *(byte *)puVar44 = (byte)*puVar44 >> 1;
                    *(char *)puVar11 = (char)*puVar11 + -0x74;
                    *puVar11 = (uint)(pbVar18 + *puVar11);
                    *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
                    *pbVar15 = *pbVar15 + cVar23;
                    pbVar42[2] = pbVar42[2] - cVar23;
                    *pbVar15 = *pbVar15 + cVar23;
                    pbVar40 = (byte *)CONCAT31(uVar20,0x83);
                    puVar11 = puVar44;
                    goto code_r0x00405312;
                  }
                  *puVar11 = (uint)(*puVar11 + (int)puVar11);
                  piVar16 = (int *)(CONCAT31(uVar20,(byte)puVar11[0x1000020]) | 0x8c);
                  if ('\0' < (char)((byte)puVar11[0x1000020] | 0x8c)) goto code_r0x004052ee;
                  piVar16 = (int *)((int)piVar16 + *(int *)pbVar43);
                }
              }
              *pbVar15 = *pbVar15 + bVar6;
              *(byte *)puVar44 = (byte)*puVar44 - (char)pbVar15;
              *pbVar43 = *pbVar43 + bVar6;
              pbVar43 = (byte *)CONCAT31(uVar20,bVar6 | (byte)*puVar44);
            }
            else {
              cVar5 = (char)puVar11;
              *pbVar15 = *pbVar15 + cVar5;
              *(byte **)pbVar43 = pbVar15 + *(int *)pbVar43;
              *pbVar43 = *pbVar43 + bVar6;
              bVar6 = bVar6 + *pbVar43;
              pbVar43 = (byte *)CONCAT31(uVar20,bVar6);
              if (-1 < (char)bVar6) {
                *(byte *)puVar44 = (byte)*puVar44 + bVar7;
                out(*(undefined4 *)pbVar40,(short)pbVar15);
                pbVar15 = pbVar15 + 1;
                *pbVar43 = *pbVar43 + bVar6;
                puVar44 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),
                                           bVar7 | (byte)((uint)iVar14 >> 8));
                cVar23 = bVar6 - (byte)*puVar11;
                pcVar10 = (char *)CONCAT31(uVar20,cVar23);
                *pcVar10 = *pcVar10 + cVar23 + (bVar6 < (byte)*puVar11);
                *pbVar15 = *pbVar15 + cVar23;
                pcVar10 = (char *)((int)pcVar10 * 2 + 0x79);
                *pcVar10 = *pcVar10 + (char)((uint)pbVar15 >> 8);
                pbVar43 = (byte *)in((short)pbVar15);
                pbVar40 = pbVar40 + 4;
              }
              *pbVar40 = *pbVar40 + cVar5;
              *pbVar43 = *pbVar43 + (char)pbVar43;
              *pbVar43 = *pbVar43 + (char)pbVar43;
              uStack_68 = (undefined1)in_DS;
              uStack_67 = (undefined1)((ushort)in_DS >> 8);
              bVar4 = *pbVar43;
              bVar7 = (byte)((uint)puVar11 >> 8);
              bVar30 = bVar7 + *pbVar43;
              iVar14 = *(int *)pbVar43;
              *pbVar15 = *pbVar15 + cVar5;
              bVar6 = (char)(pbVar43 + (uint)CARRY1(bVar7,bVar4) + iVar14) - (byte)*puVar44;
              pbVar43 = (byte *)CONCAT31((int3)((uint)(pbVar43 + (uint)CARRY1(bVar7,bVar4) + iVar14)
                                               >> 8),bVar6);
              *(byte *)puVar44 = (byte)*puVar44 ^ bVar6;
              *pbVar18 = *pbVar18 + (char)puVar44;
              *pbVar43 = *pbVar43 + bVar6;
              *pbVar43 = *pbVar43 + bVar6;
              *pbVar43 = *pbVar43 + bVar6;
              puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                                         CONCAT11(bVar30 + *pbVar43,cVar5));
              pbVar43 = pbVar43 + (uint)CARRY1(bVar30,*pbVar43) + *(int *)pbVar43;
              *pbVar15 = *pbVar15 + cVar5;
              pbVar40 = pbVar40 + *(int *)(pbVar15 + 0x3e);
            }
            *pbVar40 = *pbVar40 + (char)pbVar43;
            cVar5 = (char)pbVar43 + 'r';
            pbVar40 = pbVar40 + -1;
            uVar35 = CONCAT31((int3)((uint)pbVar43 >> 8),cVar5);
            *pbVar40 = *pbVar40 + cVar5;
            bVar45 = 0xfff38f8d < uVar35;
            iVar14 = uVar35 + 0xc7072;
            pbVar42 = pbVar18;
          } while (SCARRY4(uVar35,0xc7072));
        } while( true );
      }
      *pcVar10 = *pcVar10 + bVar6;
      bVar6 = bVar6 + 0x6f;
      pbVar43 = (byte *)CONCAT31(uVar20,bVar6);
      bVar4 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar6;
      uVar20 = (undefined3)
               ((uint)(pbVar43 + (uint)CARRY1(bVar4,bVar6) + *(int *)((int)puVar11 + (int)pbVar15))
               >> 8);
      cVar23 = (char)(pbVar43 + (uint)CARRY1(bVar4,bVar6) + *(int *)((int)puVar11 + (int)pbVar15)) +
               'E';
      pcVar10 = (char *)CONCAT31(uVar20,cVar23);
      *pcVar10 = *pcVar10 + cVar23;
      cVar23 = cVar23 + *pcVar10;
      pcVar10 = (char *)CONCAT31(uVar20,cVar23);
      *pcVar10 = *pcVar10 + cVar23;
      puVar44 = (uint *)CONCAT31(uVar20,cVar23 + *pcVar10);
      *(char *)puVar44 = (char)*puVar44 + cVar23 + *pcVar10;
      pbVar43 = (byte *)((uint)puVar44 | *puVar44);
      bVar4 = *pbVar43;
      bVar6 = (byte)pbVar43;
      *pbVar43 = *pbVar43 + bVar6;
      piVar16 = (int *)CONCAT31((int3)((uint)pbVar43 >> 8),bVar6 + CARRY1(bVar4,bVar6));
      pbVar43 = pbVar40;
code_r0x00405117:
      *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
      puVar34 = (uint *)((int)puVar34 - *puVar34);
      pbVar40 = pbVar43 + 4;
      out(*(undefined4 *)pbVar43,uVar25);
    }
    *pbVar15 = *pbVar15 + (char)puVar11;
    bVar45 = puVar34 < (uint *)*piVar16;
    puVar34 = (uint *)((int)puVar34 - *piVar16);
    bVar4 = (byte)((uint)puVar11 >> 8);
    *(byte *)((int)puVar28 + 0x39) = (*(byte *)((int)puVar28 + 0x39) - bVar4) - bVar45;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    uVar35 = *puVar34;
    *(int *)((int)puVar28 + 0x39) = *(int *)((int)puVar28 + 0x39) - (int)pbVar42;
    *piVar16 = (int)(*piVar16 + (int)piVar16);
    puVar11 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),
                               CONCAT11(bVar4 | (byte)uVar35 | (byte)*puVar34,(char)puVar11));
    *(char *)(piVar16 + 10) = (char)piVar16[10] + cVar5;
  } while( true );
code_r0x004052ee:
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
  bVar4 = (char)piVar16 + 0x28;
  pbVar40 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),bVar4);
  *pbVar40 = *pbVar40 ^ bVar4;
  *(byte *)puVar44 = (byte)*puVar44 + (char)((uint)pcVar10 >> 8);
  bVar4 = *pbVar15;
  *pbVar15 = *pbVar15 + (byte)pcVar10;
  piVar16 = (int *)(((uint)pbVar40 | 0x1496f09) + *puVar28 + (uint)CARRY1(bVar4,(byte)pcVar10));
  pbVar42 = pbVar43 + 4;
  out(*(undefined4 *)pbVar43,(short)pbVar15);
  pbVar33 = pbVar15 + -1;
  *piVar16 = *piVar16 + (int)piVar16;
  pbVar15 = (byte *)CONCAT31((int3)((uint)pbVar33 >> 8),(byte)pbVar33 | (byte)*puVar44);
  cVar5 = (char)piVar16 + '\x13';
  pbVar40 = (byte *)CONCAT31((int3)((uint)piVar16 >> 8),cVar5);
  puVar11 = puVar44;
  pbVar43 = pbVar42;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *pbVar15 = *pbVar15 - (char)((uint)pbVar33 >> 8);
    *pbVar40 = *pbVar40 + cVar5;
code_r0x00405396:
    bVar4 = *pbVar40;
    bVar6 = (byte)pbVar40;
    *pbVar40 = *pbVar40 + bVar6;
    *(byte **)pbVar42 = pbVar40 + (uint)CARRY1(bVar4,bVar6) + *(int *)pbVar42;
    out(*(undefined4 *)pbVar42,(short)pbVar15);
    *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
    *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
    pcVar10 = (char *)CONCAT22((short)((uint)pbVar40 >> 0x10),
                               CONCAT11((byte)((uint)pbVar40 >> 8) | pbVar42[4],bVar6));
    *(char **)((int)puVar28 + -1) = pcVar10 + *(int *)((int)puVar28 + -1);
    out(*(undefined4 *)(pbVar42 + 4),(short)pbVar15);
    *pcVar10 = *pcVar10 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00405312:
  *pbVar40 = *pbVar40 + (char)pbVar40;
  piVar16 = (int *)CONCAT31((int3)((uint)pbVar40 >> 8),(char)pbVar40 + 'o');
  puVar44 = (uint *)((int)puVar11 + -1);
  *piVar16 = *piVar16 + (int)piVar16;
  uVar20 = (undefined3)((uint)pbVar15 >> 8);
  piVar16 = (int *)((int)piVar16 + 0x1b7e);
  bVar7 = (byte)pbVar15 | *(byte *)puVar44 | *(byte *)puVar44;
  iRam04115f2c = iRam04115f2c + (int)piVar16;
  out(*(undefined4 *)pbVar43,(short)CONCAT31(uVar20,bVar7));
  *piVar16 = *piVar16 + (int)piVar16;
  bVar7 = bVar7 | (byte)piVar16;
  iVar29 = CONCAT31(uVar20,bVar7);
  pbVar40 = (byte *)((int)piVar16 - *piVar16);
  cVar5 = (char)pbVar40;
  *pcVar10 = *pcVar10 + cVar5;
  cVar23 = (char)pcVar10 - bVar7;
  *pbVar40 = *pbVar40 + cVar5;
  uVar25 = (undefined2)((uint)pcVar10 >> 0x10);
  bVar6 = (byte)((uint)pcVar10 >> 8) | *pbVar40;
  pbVar18 = pbVar18 + -1;
  *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
  bVar4 = *(byte *)(CONCAT22(uVar25,CONCAT11(bVar6,cVar23)) * 2);
  pbRam00006675 = pbRam00006675 + (int)pbVar40;
  pbRam6f051109 = pbRam6f051109 + (int)pbVar18;
  *pbVar40 = *pbVar40 + cVar5;
  bVar4 = bVar6 | bVar4 | *(byte *)puVar44;
  iVar22 = CONCAT22(uVar25,CONCAT11(bVar4,cVar23));
  pbVar33 = (byte *)((uint)(pbVar43 + 4) ^ *(uint *)(iVar29 + -0x43));
  iVar14 = *(int *)pbVar40;
  *(byte **)pbVar40 = pbVar40 + *(int *)pbVar40;
  if (SCARRY4(iVar14,(int)pbVar40)) {
    *pbVar40 = *pbVar40 + cVar5;
  }
  pbVar43 = pbVar40 + 0x5674;
  puVar28 = (uint *)((int)puVar28 +
                    (-(uint)((byte *)0xffffa98b < pbVar40) - *(int *)(pbVar33 + -0x7f)));
  bVar6 = (byte)pbVar43;
  *pbVar43 = *pbVar43 + bVar6;
  uVar21 = (undefined3)((uint)pbVar43 >> 8);
  bVar30 = bVar6 + 0x2d;
  piVar16 = (int *)CONCAT31(uVar21,bVar30);
  *(uint *)(pbVar33 + (int)puVar28 * 8) =
       *(int *)(pbVar33 + (int)puVar28 * 8) + iVar29 + (uint)(0xd2 < bVar6);
  bVar6 = *pbVar33;
  *pbVar33 = *pbVar33 + bVar30;
  if (!CARRY1(bVar6,bVar30)) {
    do {
      pbVar43 = (byte *)(iVar29 + 1);
      bVar6 = (byte)piVar16;
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      bVar7 = (byte)((uint)piVar16 >> 8);
      bVar30 = (byte)puVar44 | bVar7;
      puVar11 = (uint *)CONCAT31((int3)((uint)puVar44 >> 8),bVar30);
      out(*(undefined4 *)pbVar33,(short)pbVar43);
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      uVar25 = (undefined2)((uint)iVar22 >> 0x10);
      cVar5 = (char)iVar22;
      pbVar40 = (byte *)CONCAT22(uVar25,CONCAT11((byte)((uint)iVar22 >> 8) | *pbVar43,cVar5));
      bVar4 = *pbVar40;
      *pbVar40 = *pbVar40 + bVar6;
      *(byte *)piVar16 = (char)*piVar16 + bVar6 + CARRY1(bVar4,bVar6);
      *pbVar43 = *pbVar43 + bVar6;
      *(byte *)puVar28 = (byte)*puVar28 + bVar7;
      *(int *)((int)piVar16 * 2) =
           *(int *)((int)piVar16 * 2) + CONCAT22(uVar25,CONCAT11(0x1c,cVar5));
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      cVar23 = (char)pbVar43;
      *(byte *)puVar11 = (byte)*puVar11 + cVar23;
      *(byte *)((int)piVar16 * 2) = *(byte *)((int)piVar16 * 2) ^ bVar6;
      *(byte *)piVar16 = (char)*piVar16 + bVar6;
      pbVar40 = pbVar33 + 8;
      out(*(undefined4 *)(pbVar33 + 4),(short)pbVar43);
      piVar16 = (int *)0xa0a0000;
      *pbVar43 = *pbVar43;
      bVar6 = cVar5 - cVar23;
      iVar22 = CONCAT22(uVar25,CONCAT11((byte)puVar28[0x14] | 0x1c | bRam0ca87216,bVar6));
      *pbVar43 = *pbVar43;
      bVar4 = *pbVar43;
      *pbVar43 = *pbVar43 + bVar6;
      if (!CARRY1(bVar4,bVar6)) {
        piVar16 = (int *)0x1e7b7000;
        bVar4 = (byte)((uint)puVar44 >> 8) | *(byte *)(iVar29 + 3);
        puVar11 = (uint *)CONCAT22((short)((uint)puVar44 >> 0x10),CONCAT11(bVar4,bVar30));
        if (bVar4 != 0) {
          pbVar43 = (byte *)CONCAT31((int3)((uint)pbVar43 >> 8),cVar23 + pbVar40[(int)puVar28 * 8]);
          piVar16 = (int *)0x6d7d7000;
          iVar22 = iVar22 + 1;
        }
      }
      *piVar16 = (int)(*piVar16 + (int)piVar16);
      iVar29 = CONCAT31((int3)((uint)pbVar43 >> 8),(byte)pbVar43 | pbVar40[(int)puVar28 * 8]);
      *(char *)piVar16 = (char)*piVar16;
      piVar16 = (int *)CONCAT31((int3)((uint)piVar16 >> 8),0xf9);
      *puVar28 = (uint)((int)piVar16 + *puVar28 + 1);
      pbVar33 = pbVar33 + 0xc;
      out(*(undefined4 *)pbVar40,(short)iVar29);
      puVar44 = puVar11;
    } while( true );
  }
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  bVar30 = bVar30 | *(byte *)((int)piVar16 + 0x4000081);
  piVar16 = (int *)CONCAT31(uVar21,bVar30);
  if ('\0' < (char)bVar30) {
    *(byte *)piVar16 = (char)*piVar16 + bVar30;
    puVar34 = (uint *)CONCAT31(uVar21,bVar30 + 0x28);
    *puVar34 = *puVar34 ^ (uint)puVar34;
    *(byte *)puVar44 = *(byte *)puVar44 + bVar4;
    cVar5 = (bVar30 + 0x28) - bVar4;
    pcVar10 = (char *)CONCAT31(uVar21,cVar5);
    *pcVar10 = *pcVar10 + cVar5;
    pbVar15 = (byte *)CONCAT31(uVar20,bVar7 | *(byte *)puVar44);
    pcVar19 = (char *)CONCAT22((short)((uint)puVar44 >> 0x10),
                               CONCAT11((char)((uint)puVar44 >> 8) + *(byte *)((int)puVar11 + 0x7d),
                                        (char)puVar44));
    *pcVar10 = *pcVar10 + cVar5;
    pbVar40 = (byte *)CONCAT31(uVar21,cVar5 + 0x39U ^ *(byte *)CONCAT31(uVar21,cVar5 + 0x39U));
    *pcVar19 = *pcVar19 + bVar4;
    pbVar42 = pbVar33 + 4;
    out(*(undefined4 *)pbVar33,(short)pbVar15);
    goto code_r0x00405396;
  }
  pbVar43 = pbVar33 + 4;
  out(*(undefined4 *)pbVar33,(short)iVar29);
  pcVar10 = (char *)(iVar22 + -1);
  *piVar16 = (int)(*piVar16 + (int)piVar16);
  pbVar15 = (byte *)CONCAT31(uVar20,bVar7 | *(byte *)puVar44);
  goto code_r0x004052ee;
}


