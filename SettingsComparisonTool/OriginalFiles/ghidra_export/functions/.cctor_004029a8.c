/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004029a8
 * Raw Name    : .cctor
 * Demangled   : .cctor
 * Prototype   : void .cctor(uint * param_1, undefined4 param_2, uint * param_3)
 * Local Vars  : pcStack_54, puStack_1c, puStack_4, uVar1, uVar2, uVar3, uVar4, uVar5, bVar6, cVar7, cVar8, in_EAX, uVar9, uVar10, puVar11, pbVar12, piVar13, iVar14, pcVar15, pcVar16, piVar17, pbVar18, puVar19, puVar20, puVar21, uVar22, uVar23, extraout_ECX, extraout_ECX_00, pbVar24, uVar25, cVar26, bVar27, bVar28, cVar29, uVar30, uVar31, bVar32, bVar33, unaff_EBX, pcVar34, cVar35, bVar36, uVar37, unaff_EBP, unaff_ESI, puVar38, puVar39, unaff_EDI, puVar40, in_ES, uVar41, uVar42, uVar43, uVar44, in_CS, in_SS, in_GS_OFFSET, param_1, bVar45, param_2, in_AF, param_3, in_TF, in_IF, bVar46, bVar47, in_NT, uVar48, unaff_retaddr, in_stack_0000001c
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall _cctor(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined3 uVar22;
  byte *in_EAX;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  int *piVar17;
  byte *pbVar18;
  uint *puVar19;
  uint *puVar20;
  ushort *puVar21;
  undefined1 uVar23;
  char cVar26;
  undefined2 uVar30;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  byte *pbVar24;
  byte bVar27;
  byte bVar28;
  char cVar29;
  undefined4 uVar25;
  byte bVar32;
  undefined2 uVar31;
  byte bVar33;
  char cVar35;
  uint *unaff_EBX;
  byte bVar36;
  undefined2 uVar37;
  char *pcVar34;
  uint *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar38;
  uint *puVar39;
  uint *unaff_EDI;
  uint *puVar40;
  ushort in_ES;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort in_CS;
  ushort in_SS;
  int in_GS_OFFSET;
  bool bVar45;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar46;
  bool bVar47;
  byte in_NT;
  undefined8 uVar48;
  uint *unaff_retaddr;
  ushort in_stack_0000001c;
  char *pcStack_54;
  uint *puStack_1c;
  uint *puStack_4;
  
                    /* .NET CLR Managed Code */
  bVar46 = false;
  uVar44 = (ushort)unaff_retaddr;
code_r0x004029a9:
  *(uint *)((int)unaff_EBP + 0x100002b) = *(uint *)((int)unaff_EBP + 0x100002b) | (uint)param_1;
  uVar22 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = (byte)in_EAX | (byte)*unaff_ESI;
  puVar11 = (uint *)CONCAT31(uVar22,bVar6);
  unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
  uVar9 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = (uint)(*puVar11 + (int)puVar11);
  if (SCARRY4(uVar1,(int)puVar11)) {
    *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
    uVar41 = in_ES;
    goto code_r0x00402962;
  }
  puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
  in_SS = in_ES;
  if (CARRY4(uVar9,(uint)puVar11)) goto code_r0x00402971;
  bVar45 = CARRY1(bVar6,(byte)*puVar11);
  bVar47 = SCARRY1(bVar6,(byte)*puVar11);
  puVar11 = (uint *)CONCAT31(uVar22,bVar6 + (byte)*puVar11);
code_r0x004029be:
  uVar41 = in_ES;
  if (!bVar47) {
    unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
    *(byte *)((int)param_2 + -0x37) =
         (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar45;
    cVar7 = cRamc9721806;
    goto code_r0x004029c4;
  }
code_r0x00402962:
  bVar6 = (byte)param_1;
  bVar45 = CARRY1((byte)*param_2,bVar6);
  bVar47 = SCARRY1((byte)*param_2,bVar6);
  *(byte *)param_2 = (byte)*param_2 + bVar6;
  in_ES = uVar41;
  if (!bVar45) goto code_r0x004029c6;
code_r0x00402966:
  cVar7 = (char)puVar11;
  *(byte *)puVar11 = (byte)*puVar11 + cVar7;
  bVar6 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 7);
  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar6,(char)unaff_EBX));
  puVar38 = unaff_EBX;
  if ((POPCOUNT(bVar6) & 1U) != 0) {
    bVar45 = SBORROW1(cVar7,'!');
    bVar6 = cVar7 - 0x21;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6);
    goto code_r0x0040290b;
  }
code_r0x0040296d:
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
  puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(char)puVar11 + '~');
  unaff_EBX = puVar38;
code_r0x00402971:
  param_3 = (uint *)(uint)in_SS;
code_r0x00402972:
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
code_r0x00402974:
  bVar6 = 0xe9 < (byte)puVar11;
  unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_CS);
  in_CS = 0x2d0a;
  puStack_4 = (uint *)0x40297d;
  uVar48 = func_0x00006128();
  puVar11 = (uint *)uVar48;
  piVar17 = (int *)((int)((ulonglong)uVar48 >> 0x20) + -0x3d);
  *piVar17 = (int)((int)unaff_ESI + (uint)bVar6 + *piVar17);
  bVar45 = SCARRY4(*puVar11,(int)puVar11);
  *puVar11 = *puVar11 + (int)puVar11;
  uVar9 = *puVar11;
  param_1 = extraout_ECX_00;
  uVar41 = in_ES;
code_r0x00402982:
  bVar6 = POPCOUNT(uVar9 & 0xff);
  if (!bVar45) goto code_r0x00402984;
  *(char *)uVar48 = *(char *)uVar48 + (char)uVar48;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) |
                                      *(byte *)((ulonglong)uVar48 >> 0x20),(char)param_1));
  in_ES = uVar41;
code_r0x00402991:
  param_2 = (uint *)((ulonglong)uVar48 >> 0x20);
  pbVar24 = (byte *)uVar48;
  bVar6 = (byte)uVar48;
  bVar45 = CARRY1(bVar6,*pbVar24);
  puVar11 = (uint *)CONCAT31((int3)((ulonglong)uVar48 >> 8),bVar6 + *pbVar24);
  cVar7 = bVar6 + *pbVar24;
  if (SCARRY1(bVar6,*pbVar24)) goto code_r0x004029c4;
code_r0x00402995:
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11(((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + 0x6b))
                                      - bVar45,(char)param_2));
  bVar6 = (byte)puVar11;
  bVar45 = CARRY1(bVar6,(byte)*puVar11);
  bVar47 = SCARRY1(bVar6,(byte)*puVar11);
  puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6 + (byte)*puVar11);
  uVar41 = in_ES;
  do {
    if (!bVar47) {
      unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar45 + *puVar11);
      in_EAX = (byte *)((int)puVar11 + *puVar11);
      bVar33 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar33;
      *(byte *)param_1 = (byte)*param_1 + (char)param_1;
      bVar6 = *in_EAX;
      *in_EAX = *in_EAX + bVar33;
      *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar6,bVar33) + *unaff_EDI);
      in_ES = uVar41;
      param_3 = unaff_EDI;
      goto code_r0x004029a9;
    }
code_r0x004029c6:
    while( true ) {
      in_ES = in_stack_0000001c;
      if (bVar47) goto code_r0x00402966;
      param_3 = (uint *)(uint)uVar41;
      *(uint *)((int)param_2 + -0x23) =
           (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar45;
      uVar9 = *puVar11;
      bVar33 = (byte)puVar11;
      uVar1 = *puVar11;
      uVar22 = (undefined3)((uint)puVar11 >> 8);
      bVar6 = bVar33 + (byte)*puVar11;
      puVar11 = (uint *)CONCAT31(uVar22,bVar6);
      in_ES = uVar41;
      if (SCARRY1(bVar33,(byte)uVar1)) goto code_r0x00402972;
      uVar30 = (undefined2)((uint)unaff_retaddr >> 0x10);
      unaff_retaddr = (uint *)CONCAT22(uVar30,uVar41);
      cVar7 = (char)param_2;
      bVar32 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
               CARRY1(bVar33,(byte)uVar9);
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar32,cVar7));
      puVar38 = (uint *)CONCAT31(uVar22,bVar6 + (byte)*puVar11);
      bVar33 = (byte)param_1;
      if (!SCARRY1(bVar6,(byte)*puVar11)) break;
      *(byte *)param_2 = (byte)*param_2 + bVar33;
      uVar48 = CONCAT44(param_2,(int)puVar38 + -0x1c37211);
      pcVar15 = (char *)((int)puVar38 + -0x1c3720a);
      *pcVar15 = *pcVar15 + bVar32;
      bVar6 = POPCOUNT(*pcVar15);
code_r0x00402984:
      pcVar15 = (char *)((ulonglong)uVar48 >> 0x20);
      in_ES = uVar41;
      if ((bVar6 & 1) == 0) {
        *(char *)uVar48 = *(char *)uVar48 + (char)uVar48;
        *pcVar15 = *pcVar15 + (char)param_1;
        uVar48 = CONCAT44(CONCAT22((short)((ulonglong)uVar48 >> 0x30),
                                   CONCAT11((char)((ulonglong)uVar48 >> 0x28) - pcVar15[0x1f],
                                            (char)((ulonglong)uVar48 >> 0x20))),
                          CONCAT31((int3)((ulonglong)uVar48 >> 8),(char)uVar48 + '('));
        goto code_r0x00402991;
      }
code_r0x00402922:
      pcVar15 = (char *)((int)uVar48 * 2);
      *pcVar15 = *pcVar15 - (char)param_1;
      uVar9 = *unaff_EBX;
      cVar7 = (char)((uint)param_1 >> 8);
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
      if (SCARRY1((byte)uVar9,cVar7) == (char)(byte)*unaff_EBX < '\0') {
        pbVar24 = (byte *)((int)unaff_EDI + (int)uVar48);
        *pbVar24 = *pbVar24 + (char)uVar48;
        bVar6 = *pbVar24;
        goto code_r0x004028c8;
      }
      while( true ) {
        param_2 = (uint *)((ulonglong)uVar48 >> 0x20);
        cVar7 = (char)uVar48;
        *(char *)uVar48 = *(char *)uVar48 + cVar7;
        uVar22 = (undefined3)((ulonglong)uVar48 >> 8);
        bVar6 = cVar7 + 7;
        puVar11 = (uint *)CONCAT31(uVar22,bVar6);
        bVar33 = (byte)((ulonglong)uVar48 >> 0x28);
        if ((POPCOUNT(bVar6) & 1U) != 0) {
          *(byte *)((int)unaff_EBP + 0x13b720b) = *(byte *)((int)unaff_EBP + 0x13b720b) + bVar6;
          pbVar24 = (byte *)((int)puVar11 + 0x73);
          bVar45 = CARRY1(*pbVar24,bVar33);
          *pbVar24 = *pbVar24 + bVar33;
          goto code_r0x004028d5;
        }
        *(byte *)puVar11 = (byte)*puVar11 + bVar6;
        pcVar15 = (char *)CONCAT31(uVar22,cVar7 + '3');
        uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
        uVar23 = SUB41(unaff_EBX,0);
        bVar6 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar6);
        unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar23));
        *pcVar15 = *pcVar15 + cVar7 + '3';
        cVar35 = cVar7 + ':';
        puVar11 = (uint *)CONCAT31(uVar22,cVar35);
        if ((POPCOUNT(cVar35) & 1U) == 0) break;
        bVar6 = bVar6 | *(byte *)((int)param_2 + 7);
        unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar23));
        bVar45 = (POPCOUNT(bVar6) & 1U) == 0;
code_r0x004028db:
        if (!bVar45) {
          iVar14 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
          goto get_Value;
        }
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(char)puVar11 + 'r');
        puVar38 = unaff_EBX;
        puStack_4 = unaff_EBP;
        while( true ) {
          uVar9 = *puVar11;
          *puVar11 = (uint)(*puVar11 + (int)puVar11);
          if (SCARRY4(uVar9,(int)puVar11)) {
            unaff_EBX = puVar38;
            if (*puVar11 != 0 && SCARRY4(uVar9,(int)puVar11) == (int)*puVar11 < 0)
            goto code_r0x00402957;
            goto code_r0x0040296d;
          }
          unaff_EBX = (uint *)((int)puVar38 + -1);
          cVar7 = (char)puVar11;
          *(byte *)puVar11 = (byte)*puVar11 + cVar7;
          uVar30 = (undefined2)((uint)param_1 >> 0x10);
          uVar23 = SUB41(param_1,0);
          bVar6 = (byte)((uint)param_1 >> 8) | *(byte *)((int)param_1 + 0x16d7207);
          param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar23));
          pbVar24 = (byte *)((int)puVar11 + 0x7d);
          bVar33 = *pbVar24;
          bVar36 = (byte)((uint)param_2 >> 8);
          bVar32 = *pbVar24;
          *pbVar24 = *pbVar24 + bVar36;
          param_3 = (uint *)((uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar32,bVar36) * 0x800 |
                             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                             (uint)((char)*pbVar24 < '\0') * 0x80 | (uint)(*pbVar24 == 0) * 0x40 |
                             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar24) & 1U) == 0) * 4 |
                            (uint)CARRY1(bVar33,bVar36));
          *(byte *)puVar11 = (byte)*puVar11 + cVar7;
          pbVar24 = (byte *)(CONCAT31((int3)((uint)puVar11 >> 8),cVar7 + '+') ^ *unaff_EDI);
          if ((POPCOUNT((uint)pbVar24 & 0xff) & 1U) == 0) break;
          while( true ) {
            *(byte *)param_2 = (byte)*param_2 + (char)param_1;
            bVar6 = (byte)param_2;
            uVar30 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar6);
            pbVar12 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
            pcVar15 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                (byte)unaff_EBX[-0x19],(char)unaff_EBX));
            *pbVar24 = *pbVar24 + (char)pbVar24;
            pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(char)pbVar24 + '\x03');
            puVar11 = unaff_ESI;
            do {
              unaff_ESI = puVar11 + 1;
              out(*puVar11,uVar30);
              pcVar15 = pcVar15 + -1;
              bVar33 = (byte)pbVar24;
              *pbVar24 = *pbVar24 + bVar33;
              param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                         CONCAT11((byte)((uint)param_1 >> 8) | *pbVar12,
                                                  (char)param_1));
              *pbVar24 = *pbVar24 + bVar33;
              *pcVar15 = *pcVar15 + bVar6;
              *(byte *)((int)pbVar24 * 2) = *(byte *)((int)pbVar24 * 2) ^ bVar33;
              *pbVar24 = *pbVar24 + bVar33;
              *pbVar24 = *pbVar24 | bVar33;
              bVar45 = CARRY1((byte)*param_1,bVar6);
              *(byte *)param_1 = (byte)*param_1 + bVar6;
              cVar7 = bVar33 + 10 + bVar45;
              pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar7);
              puVar11 = unaff_ESI;
            } while (bVar33 < 0xf6 && !CARRY1(bVar33 + 10,bVar45));
            *pbVar24 = *pbVar24 + cVar7;
            unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
            pcVar34 = (char *)((uint)pbVar24 | *unaff_EDI);
            unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                         CONCAT11((char)((uint)pcVar15 >> 8) +
                                                  (byte)unaff_EBP[-0x19],(char)pcVar15));
            *pcVar34 = *pcVar34 + (char)pcVar34;
            bVar6 = (char)pcVar34 + 7;
            uVar48 = CONCAT44(pbVar12,CONCAT31((int3)((uint)pcVar34 >> 8),bVar6));
code_r0x004028c8:
            param_2 = (uint *)((ulonglong)uVar48 >> 0x20);
            pcVar15 = (char *)uVar48;
            uVar22 = (undefined3)((ulonglong)uVar48 >> 8);
            cVar7 = (char)uVar48;
            if ((POPCOUNT(bVar6) & 1U) == 0) break;
            *(byte *)param_2 = (byte)*param_2 + (char)param_1;
            cVar35 = (char)unaff_EBX - (byte)*unaff_ESI;
            iVar14 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                              CONCAT11((char)((uint)unaff_EBX >> 8) +
                                       *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar35) +
                                                0x12),cVar35));
            *pcVar15 = *pcVar15 + cVar7;
            bVar6 = cVar7 + 0x2aU & (byte)*param_2;
            unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x12));
            *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
            puVar11 = (uint *)CONCAT31(uVar22,bVar6 + 0x2a);
get_Value:
            cVar7 = *(char *)(iVar14 + 0x13);
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
            uVar22 = (undefined3)((uint)puVar11 >> 8);
            bVar6 = (char)puVar11 + 0x2aU & (byte)*param_2;
            pcVar15 = (char *)CONCAT31(uVar22,bVar6);
            unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x13));
            *pcVar15 = *pcVar15 + bVar6;
            pbVar24 = (byte *)CONCAT31(uVar22,bVar6 + 0x2a);
            param_3 = (uint *)(uint)uVar44;
            bVar6 = (byte)((uint)param_1 >> 8);
            bVar33 = bVar6 + *pbVar24;
            pbVar24 = pbVar24 + (uint)CARRY1(bVar6,*pbVar24) + *(int *)pbVar24;
            *(byte *)param_2 = (byte)*param_2 + (char)param_1;
            unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)iVar14 >> 0x10),
                                                         CONCAT11((char)((uint)iVar14 >> 8) + cVar7,
                                                                  (char)iVar14)) >> 8),
                                         (char)iVar14 - (byte)*unaff_ESI);
            param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                       CONCAT11(bVar33 + *pbVar24,(char)param_1));
            pbVar24 = pbVar24 + (uint)CARRY1(bVar33,*pbVar24) + *(int *)pbVar24;
          }
          *pcVar15 = *pcVar15 + cVar7;
          puVar11 = (uint *)CONCAT31(uVar22,cVar7 + '-');
          unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
          bVar45 = CARRY4(*puVar11,(uint)puVar11);
          uVar9 = *puVar11;
          *puVar11 = (uint)(*puVar11 + (int)puVar11);
          if (SCARRY4(uVar9,(int)puVar11)) {
            bVar45 = CARRY4(*puVar11,(uint)puVar11);
            bVar47 = SCARRY4(*puVar11,(int)puVar11);
            *puVar11 = (uint)(*puVar11 + (int)puVar11);
            bVar6 = POPCOUNT(*puVar11 & 0xff);
            if (!bVar47) goto code_r0x0040294c;
            goto code_r0x004029be;
          }
code_r0x004028d5:
          puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(char)puVar11 + bVar45);
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          bVar45 = (POPCOUNT((byte)*param_2) & 1U) == 0;
          puVar38 = unaff_EBX;
          if (!bVar45) goto code_r0x004028db;
        }
        bVar33 = (byte)pbVar24;
        *pbVar24 = *pbVar24 + bVar33;
        cVar7 = bVar33 + 0x72;
        puVar11 = (uint *)CONCAT31((int3)((uint)pbVar24 >> 8),cVar7);
        if (bVar33 < 0x8e && cVar7 != '\0') {
          if (SCARRY1(bVar33,'r')) goto code_r0x00402974;
        }
        else {
          *(byte *)((int)puVar11 + 0x6f) = *(byte *)((int)puVar11 + 0x6f) + bVar36;
        }
        unaff_EBX = (uint *)((int)puVar38 + -2);
        *(byte *)puVar11 = (byte)*puVar11 + cVar7;
        bVar45 = false;
        bVar6 = bVar6 | (byte)*param_1;
        param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar23));
code_r0x0040290b:
        uVar48 = CONCAT44(param_2,puVar11);
        if (bVar6 != 0 && bVar45 == (char)bVar6 < '\0') goto code_r0x0040290e;
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        unaff_EDI = (uint *)((int)unaff_EDI - unaff_EBP[-0x19]);
        in_ES = (ushort)param_3;
      }
      *(byte *)puVar11 = (byte)*puVar11 + cVar35;
      puVar11 = (uint *)(CONCAT31(uVar22,cVar7 + 'b') & 0xffffff72 | 0x2d2b0000);
      pbVar24 = (byte *)((int)puVar11 + 0x72);
      bVar47 = SCARRY1(*pbVar24,bVar33);
      *pbVar24 = *pbVar24 + bVar33;
      bVar6 = POPCOUNT(*pbVar24);
code_r0x0040294c:
      if ((bVar6 & 1) == 0) {
        *(byte *)((int)puVar11 + 0x72) = *(byte *)((int)puVar11 + 0x72) + (char)((uint)param_2 >> 8)
        ;
code_r0x00402951:
        unaff_EBP = (uint *)0x7e700001;
        puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_SS);
code_r0x00402957:
        unaff_EDI = unaff_retaddr;
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        cVar7 = (char)puVar11 + '(';
        puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),cVar7);
        *(byte *)puVar11 = (byte)*puVar11 + cVar7;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar11,
                                            (char)param_1));
        *(byte *)puVar11 = (byte)*puVar11 + cVar7;
        param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[0x18],
                                            (char)param_2));
        unaff_ESI = puStack_4;
        unaff_retaddr = unaff_EDI;
        goto code_r0x00402966;
      }
      if (!bVar47) goto code_r0x00402951;
      unaff_EBP = (uint *)*unaff_EBP;
      cVar7 = cRamc9721806;
code_r0x004029c4:
      cRamc9721806 = cVar7;
      bVar6 = (byte)puVar11;
      bVar45 = CARRY1(bVar6,(byte)*puVar11);
      bVar47 = SCARRY1(bVar6,(byte)*puVar11);
      puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6 + (byte)*puVar11);
      uVar41 = in_ES;
    }
    unaff_retaddr = (uint *)CONCAT22(uVar30,uVar41);
    unaff_ESI = (uint *)((int)unaff_ESI +
                        (-(uint)CARRY1(bVar6,(byte)*puVar11) - *(int *)((int)param_2 + 5)));
    bVar45 = SCARRY4((int)puVar38,*puVar38);
    uVar9 = (int)puVar38 + *puVar38;
    uVar48 = CONCAT44(param_2,uVar9);
    if (bVar45) goto code_r0x00402982;
    bVar6 = (byte)uVar9 + 0x8e;
    uVar10 = CONCAT31((int3)(uVar9 >> 8),bVar6 - CARRY4((uint)puVar38,*puVar38));
    *unaff_EBX = (*unaff_EBX - uVar10) -
                 (uint)((byte)uVar9 < 0x72 || bVar6 < CARRY4((uint)puVar38,*puVar38));
    pbVar24 = (byte *)(uVar10 - 0x5e);
    bVar6 = *pbVar24;
    *pbVar24 = *pbVar24 + bVar32;
    unaff_retaddr = (uint *)CONCAT22(uVar30,uVar41);
    uVar9 = (uint)CARRY1(bVar6,bVar32);
    uVar1 = uVar10 - 0x32d72;
    puVar11 = (uint *)(uVar1 - uVar9);
    if (SBORROW4(uVar10,0x32d72) != SBORROW4(uVar1,uVar9)) break;
    param_3 = (uint *)(uint)uVar41;
    unaff_retaddr = (uint *)CONCAT22(uVar30,uVar44);
    uVar42 = uVar41;
    if (uVar10 < 0x32d72 || uVar1 < uVar9) {
      *(byte *)unaff_EBP = (byte)*unaff_EBP - (char)((uint)puVar11 >> 8);
      *(byte *)param_2 = (byte)*param_2 + bVar33;
      puVar38 = unaff_ESI + 1;
      out(*unaff_ESI,CONCAT11(bVar32,cVar7));
      *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
      goto code_r0x00402a3e;
    }
    bVar45 = CARRY4((uint)puVar11,*puVar11);
    bVar47 = SCARRY4((int)puVar11,*puVar11);
    puVar11 = (uint *)((int)puVar11 + *puVar11);
    if (!bVar47) {
      unaff_retaddr = (uint *)CONCAT22(uVar30,uVar41);
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar45;
      bVar6 = (byte)puVar11;
      *(byte *)((int)param_2 + (int)unaff_EBP) = *(byte *)((int)param_2 + (int)unaff_EBP) + bVar6;
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar7;
      *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar6;
      bVar27 = (byte)((uint)param_1 >> 8);
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar27;
      *(byte *)puVar11 = (byte)*puVar11 + bVar6;
      pbVar12 = (byte *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6 | (byte)*puVar11);
      *(byte *)param_1 = (byte)*param_1 + cVar7;
      bVar36 = *pbVar12;
      uVar30 = (undefined2)((uint)param_1 >> 0x10);
      param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar36,bVar33));
      pbVar12 = pbVar12 + (uint)CARRY1(bVar27,*pbVar12) + *(int *)pbVar12;
      *(byte *)param_2 = (byte)*param_2 + bVar33;
      unaff_EBP = (uint *)((int)unaff_EBP + iRam0355720b);
      pbVar24 = pbVar12 + 0x73;
      bVar6 = *pbVar24;
      *pbVar24 = *pbVar24 + bVar32;
      uVar22 = (undefined3)((uint)pbVar12 >> 8);
      bVar6 = (char)pbVar12 + CARRY1(bVar6,bVar32);
      pcVar15 = (char *)CONCAT31(uVar22,bVar6);
      *(byte *)param_2 = (byte)*param_2 + bVar33;
      if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
        in_SS = uVar41;
      }
      puVar40 = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x17));
      *pcVar15 = *pcVar15 + bVar6;
      cVar7 = bVar6 + 2;
      puVar11 = (uint *)CONCAT31(uVar22,cVar7);
      if (bVar6 < 0xfe) {
        *puVar11 = (uint)(*puVar11 + (int)puVar11);
        goto code_r0x00402a8f;
      }
      *(byte *)puVar11 = (byte)*puVar11 + cVar7;
      uVar9 = *param_2;
      puVar38 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
      *(byte *)puVar11 = (byte)*puVar11 + cVar7;
      param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar36 | (byte)*puVar11,
                                                 bVar33 | (byte)uVar9));
      unaff_EDI = puVar40;
      goto code_r0x00402a36;
    }
  } while( true );
  pbVar24 = (byte *)((int)puVar11 + 0x2a);
  bVar45 = CARRY1(*pbVar24,bVar32);
  *pbVar24 = *pbVar24 + bVar32;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar11) = *(byte *)(in_GS_OFFSET + (int)puVar11) + (char)puVar11;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                      (char)param_1));
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
code_r0x00402a3e:
  uVar22 = (undefined3)((uint)puVar11 >> 8);
  bVar6 = (byte)puVar11 | (byte)*puVar38;
  pcVar15 = (char *)CONCAT31(uVar22,bVar6);
  if ((char)bVar6 < '\0') {
    *pcVar15 = *pcVar15 + bVar6;
    cVar7 = bVar6 + 2;
    piVar17 = (int *)CONCAT31(uVar22,cVar7);
    if ((POPCOUNT(cVar7) & 1U) == 0) {
      *(char *)piVar17 = (char)*piVar17 + cVar7;
      bVar6 = bVar6 + 0x71;
      pcVar34 = (char *)CONCAT31(uVar22,bVar6);
      pcVar15 = (char *)segment(uVar44,(short)unaff_EBX + (short)puVar38);
      *pcVar15 = *pcVar15 + bVar6;
      uVar9 = unaff_EDI[0x1a];
      *pcVar34 = *pcVar34 + bVar6;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | (byte)uVar9 |
                                          *(byte *)((int)unaff_EDI + 0x69),(char)param_1));
      *pcVar34 = *pcVar34 + bVar6;
      bVar6 = bVar6 | (byte)*param_2;
      pcVar15 = (char *)CONCAT31(uVar22,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar38 + (uint)bVar46 * -2 + 1;
    out(*puVar38,(short)param_2);
  }
  else {
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                          (char)unaff_EBX));
code_r0x00402a5d:
    *pcVar15 = *pcVar15 + (char)pcVar15;
    piVar17 = (int *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + 'o');
    unaff_ESI = puVar38;
  }
code_r0x00402a61:
  pcVar15 = (char *)segment(uVar44,(short)unaff_EBX + (short)unaff_ESI);
  *pcVar15 = *pcVar15 + (char)piVar17;
  cVar7 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)unaff_EDI[0x1a],cVar7));
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  uVar30 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
  piVar13 = (int *)((int)piVar17 + *piVar17);
  puVar38 = unaff_ESI;
  puVar40 = unaff_EDI;
  uVar43 = uVar42;
  if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar7;
  puVar38 = unaff_ESI + (uint)bVar46 * -2 + 1;
  out(*unaff_ESI,uVar30);
code_r0x00402a75:
  bVar6 = (byte)((uint)param_1 >> 8) | (byte)*param_2;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
  piVar17 = (int *)(uint)(byte)*unaff_EBX;
  *(byte *)puVar38 = (byte)*puVar38 - bVar6;
  puVar40 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  out(*puVar38,(short)param_2);
  bVar6 = in((short)param_2);
  *(byte *)puVar40 = bVar6;
  *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
  iVar14 = *piVar17;
  cVar7 = in(1);
  puVar11 = (uint *)CONCAT31((int3)((uint)((int)piVar17 + *piVar17) >> 8),cVar7);
  *(char *)puVar11 = (char)*puVar11 + cVar7;
  puVar11 = (uint *)((uint)puVar11 | *puVar11);
  *(byte *)param_1 = (byte)*param_1 + (char)param_2;
  puVar38 = (uint *)((int)puVar38 + (((uint)bVar46 * -8 + 4) - iVar14));
  puVar40 = (uint *)((int)puVar40 + (uint)bVar46 * -2 + 1);
  in_SS = uVar42;
  while( true ) {
    bVar6 = (byte)puVar11 | (byte)*param_2;
    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar6);
    unaff_EDI = puVar40;
    if ((POPCOUNT(bVar6) & 1U) != 0) break;
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
code_r0x00402a9b:
    uVar22 = (undefined3)((uint)puVar11 >> 8);
    cVar7 = (char)puVar11 + '\r';
    piVar13 = (int *)CONCAT31(uVar22,cVar7);
    *(uint *)((int)unaff_EBP + 2) = *(uint *)((int)unaff_EBP + 2) | (uint)piVar13;
    *(char *)piVar13 = (char)*piVar13 + cVar7;
    *(byte *)(puVar38 + -0xc800000) = (byte)puVar38[-0xc800000] + (char)param_2;
    *(char *)piVar13 = (char)*piVar13 + cVar7;
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    cVar35 = (char)param_1;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar35;
      unaff_ESI = puVar38 + (uint)bVar46 * -2 + 1;
      out(*puVar38,(short)param_2);
      piVar17 = (int *)((longlong)*piVar13 * 0x7b020a00);
      *(char *)piVar17 =
           (char)*piVar17 - ((longlong)(int)piVar17 != (longlong)*piVar13 * 0x7b020a00);
      pbVar24 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar24 = *pbVar24;
      goto code_r0x00402a61;
    }
    *(char *)piVar13 = (char)*piVar13 + cVar7;
    puVar11 = (uint *)CONCAT31(uVar22,(char)puVar11 + ':');
    unaff_ESI = (uint *)((uint)puVar38 | *(uint *)((int)param_2 + -0x79));
    iVar14 = (int)puVar11 + *puVar11;
    if (SCARRY4((int)puVar11,*puVar11)) {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar14;
      puVar40 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar22 = (undefined3)((uint)iVar14 >> 8);
    cVar7 = (char)iVar14 + CARRY4((uint)puVar11,*puVar11);
    piVar17 = (int *)CONCAT31(uVar22,cVar7);
    *(byte *)param_2 = (byte)*param_2 + cVar35;
    bVar45 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar45) && (bVar45)) goto code_r0x00402a61;
    *(char *)piVar17 = (char)*piVar17 + cVar7;
    cVar8 = cVar7 + '(';
    pcVar15 = (char *)CONCAT31(uVar22,cVar8);
    puVar40 = unaff_EDI + (uint)bVar46 * -2 + 1;
    uVar9 = in((short)param_2);
    *unaff_EDI = uVar9;
    *pcVar15 = *pcVar15 + cVar8;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | bRama07b0222,cVar35));
    *pcVar15 = *pcVar15 + cVar8;
    pcVar15 = (char *)CONCAT31(uVar22,cVar7 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar38 = (uint *)((int)(unaff_ESI + (uint)bVar46 * -2 + 1) + (uint)bVar46 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar46 * -2 + 1],(short)param_2);
    bVar6 = (byte)pcVar15;
    *pcVar15 = *pcVar15 + bVar6;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar40);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar22 = (undefined3)((uint)pcVar15 >> 8);
    bVar6 = bVar6 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar7 = bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) * -0x60 + (byte)*param_2;
    piVar17 = (int *)CONCAT31(uVar22,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar17 = (char)*piVar17 + cVar7;
    piVar13 = (int *)CONCAT31(uVar22,cVar7 + '\x17');
    uVar43 = uVar42;
code_r0x00402ae3:
    out(*puVar38,(short)param_2);
    unaff_ESI = puVar38 + (uint)bVar46 * -2 + 1 + (uint)bVar46 * -2 + 1;
    out(puVar38[(uint)bVar46 * -2 + 1],(short)param_2);
    *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
code_r0x00402ae7:
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) | (byte)unaff_EBP[-0x18],
                                          (char)unaff_EBX));
    cVar7 = (char)piVar13;
    *(char *)piVar13 = (char)*piVar13 + cVar7;
    uVar22 = (undefined3)((uint)piVar13 >> 8);
    bVar6 = cVar7 + 2;
    puVar11 = (uint *)CONCAT31(uVar22,bVar6);
    uVar42 = uVar43;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(byte *)puVar11 = (byte)*puVar11 + bVar6;
      cVar7 = cVar7 + '}';
      puVar11 = (uint *)CONCAT31(uVar22,cVar7);
      *(byte *)puVar11 = ((byte)*puVar11 - cVar7) - (0x84 < bVar6);
      pbVar24 = (byte *)((int)param_2 + (int)puVar11);
      *pbVar24 = *pbVar24 + cVar7;
      bVar6 = POPCOUNT(*pbVar24);
      puVar38 = unaff_ESI;
code_r0x00402af9:
      uVar42 = uVar43;
      unaff_EDI = puVar40;
      if ((bVar6 & 1) == 0) {
        *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
        bVar6 = (byte)param_1;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
        unaff_ESI = puVar38 + (uint)bVar46 * -2 + 1;
        out(*puVar38,(short)param_2);
        uVar9 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        iVar14 = CONCAT31((int3)((uint)puVar11 >> 8),(char)puVar11 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar9,bVar6);
        pcVar15 = (char *)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '(');
        while( true ) {
          uVar9 = *param_2;
          bVar33 = (byte)param_1;
          *(byte *)param_2 = (byte)*param_2 + bVar33;
          pcVar15 = pcVar15 + (uint)CARRY1((byte)uVar9,bVar33) + iRam73280512;
          bVar6 = (byte)pcVar15;
          *pcVar15 = *pcVar15 + bVar6;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | bRam7d160243,bVar33));
          bVar46 = ((uint)unaff_retaddr & 0x400) != 0;
          in_AF = ((uint)unaff_retaddr & 0x10) != 0;
          *pcVar15 = *pcVar15 + bVar6;
          uVar22 = (undefined3)((uint)pcVar15 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar22,bVar6 + 2) + (uint)(0xfd < bVar6);
          cVar7 = bVar6 + 4;
          if (SCARRY1(bVar6 + 2,'\x02') != cVar7 < '\0') break;
          *(char *)CONCAT31(uVar22,cVar7) = *(char *)CONCAT31(uVar22,cVar7) + cVar7;
          iVar14 = CONCAT31(uVar22,bVar6 + 0x16);
code_r0x00402b33:
          piVar13 = (int *)(iVar14 + 0xe2802);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)param_1 >> 8);
          uVar43 = uVar42;
          uVar42 = in_SS;
          while( true ) {
            bVar33 = (byte)unaff_EBX | (byte)((uint)param_1 >> 8);
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar33);
            *piVar13 = (int)(*piVar13 + (int)piVar13);
            cVar7 = (char)piVar13;
            *(byte *)param_2 = (byte)*param_2 + cVar7;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar13 = (char)*piVar13 + cVar7;
            uVar9 = CONCAT31((int3)((uint)piVar13 >> 8),cVar7 + '\x13');
            puVar11 = (uint *)(uVar9 + 0x19061224 + (uint)(0x1f9edfd < uVar9));
            uVar10 = (uint)(0xe4ffffdd < uVar9 + 0xfe061202 ||
                           CARRY4(uVar9 + 0x19061224,(uint)(0x1f9edfd < uVar9)));
            uVar1 = *unaff_ESI;
            uVar9 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar9 + (int)puVar11) + uVar10);
            bVar6 = POPCOUNT(*unaff_ESI & 0xff);
            puVar38 = unaff_ESI;
            if ((SCARRY4(uVar1,(int)puVar11) != SCARRY4((int)(uVar9 + (int)puVar11),uVar10)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar6 = (byte)puVar11;
            *(byte *)puVar11 = (byte)*puVar11 + bVar6;
            iVar14 = CONCAT31((int3)((uint)puVar11 >> 8),bVar6 + 2) + 0x9d7d + (uint)(0xfd < bVar6);
            bVar6 = (byte)param_2 | (byte)*param_2;
            uVar9 = *unaff_EBX;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar33;
            pcVar15 = (char *)(CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + '\x12') + 0x228b26
                               + *puVar40 + (uint)CARRY1((byte)uVar9,bVar33));
            cVar7 = bVar6 + (byte)*param_1;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar7);
            if (SCARRY1(bVar6,(byte)*param_1) == cVar7 < '\0') break;
            *pcVar15 = *pcVar15 + (char)pcVar15;
            cVar7 = (char)pcVar15 + '\x02';
            pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar7);
            bVar6 = POPCOUNT(cVar7);
            uVar43 = uVar42;
code_r0x00402b7a:
            puVar11 = unaff_ESI;
            if ((bVar6 & 1) != 0) break;
            while( true ) {
              cVar7 = (char)pcVar15;
              *pcVar15 = *pcVar15 + cVar7;
              uVar22 = (undefined3)((uint)pcVar15 >> 8);
              pcVar15 = (char *)CONCAT31(uVar22,cVar7 + '\x13');
              *(byte *)param_1 = (byte)*param_1 | (byte)param_2;
              *(byte *)puVar40 = (byte)*puVar40 | (byte)param_2;
              *param_2 = (uint)(pcVar15 + *param_2);
              uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
              uVar23 = SUB41(unaff_EBX,0);
              cVar35 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
              unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar35,uVar23));
              *pcVar15 = *pcVar15 + cVar7 + '\x13';
              piVar13 = (int *)CONCAT31(uVar22,cVar7 + -0x7a);
              uVar9 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)param_1;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar9,(char)param_1) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar13 = (char)*piVar13 + cVar7 + -0x7a;
              cVar8 = cVar7 + -0x78;
              piVar13 = (int *)CONCAT31(uVar22,cVar8);
              uVar4 = uVar43;
              if ((POPCOUNT(cVar8) & 1U) != 0) break;
              *(char *)piVar13 = (char)*piVar13 + cVar8;
              pcVar15 = (char *)CONCAT31(uVar22,cVar7 + -0x65);
              *param_1 = *param_1 | (uint)param_2;
              *puVar40 = *puVar40 | (uint)param_2;
              pbVar24 = (byte *)((int)param_1 + -1);
              cVar35 = cVar35 + *(byte *)((int)unaff_EBX + -0x5e);
              unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar35,uVar23));
              *pcVar15 = *pcVar15 + cVar7 + -0x65;
              bVar6 = cVar7 + 10;
              puVar38 = (uint *)CONCAT31(uVar22,bVar6);
              bVar33 = (byte)pbVar24;
              *(byte *)param_2 = (byte)*param_2 + bVar33;
              unaff_ESI = puVar11 + (uint)bVar46 * -2 + 1;
              out(*puVar11,(short)param_2);
              uVar9 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar33;
              uVar2 = (uint)CARRY1((byte)uVar9,bVar33);
              uVar9 = *param_2;
              uVar1 = *param_2;
              pbVar12 = pbVar24 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar35;
              uVar10 = *param_2;
              unaff_EBP = (uint *)((uint)unaff_EBP | *puVar38);
              *(byte *)puVar38 = (char)*puVar38 + bVar6;
              param_1 = (uint *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar12 >> 8) | bRam7d170243,
                                                  (char)pbVar12 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar24,uVar9) ||
                                                  CARRY4((uint)(pbVar24 + uVar1),uVar2))));
              bVar46 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar38 = (char)*puVar38 + bVar6;
              bVar45 = 0xfd < bVar6;
              pcVar15 = (char *)CONCAT31(uVar22,cVar7 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar10);
code_r0x00402bd1:
              uVar9 = *unaff_EBX;
              uVar1 = *unaff_EBX;
              *unaff_EBX = (uint)((byte *)(uVar1 + (int)param_1) + bVar45);
              bVar6 = POPCOUNT(*unaff_EBX & 0xff);
              uVar43 = in_SS;
              if ((SCARRY4(uVar9,(int)param_1) != SCARRY4((int)(uVar1 + (int)param_1),(uint)bVar45))
                  == (int)*unaff_EBX < 0) goto code_r0x00402b7a;
              cVar7 = (char)pcVar15;
              *pcVar15 = *pcVar15 + cVar7;
              pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar7 + '\x02');
              if (SCARRY1(cVar7,'\x02') == (char)(cVar7 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar15 = *pcVar15 + (char)pcVar15;
                pcVar15 = (char *)(CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x12') |
                                  *param_2);
                *(byte *)puVar40 = (byte)*puVar40 - (char)param_1;
                *pcVar15 = *pcVar15 + (char)pcVar15;
                puVar11 = (uint *)((int)param_2 - *unaff_ESI);
                bVar6 = (byte)unaff_EBX | (byte)((uint)param_1 >> 8);
                cVar7 = *pcVar15;
                uVar22 = (undefined3)((uint)pcVar15 >> 8);
                pcVar15 = (char *)CONCAT31(uVar22,cVar7);
                *pcVar15 = *pcVar15 + cVar7;
                pcVar34 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar6) + -0x5b),bVar6));
                *pcVar15 = *pcVar15 + cVar7;
                bVar45 = false;
                pcVar15 = (char *)(CONCAT31(uVar22,cVar7 + '\x13') | *puVar11);
                do {
                  bVar33 = (byte)param_1;
                  bVar6 = bVar33 + (byte)unaff_ESI[(int)puVar40 * 2];
                  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6 + bVar45);
                  uVar9 = (uint)(CARRY1(bVar33,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                CARRY1(bVar6,bVar45));
                  pcVar16 = pcVar15 + 0x1b000019 + uVar9;
                  piVar17 = (int *)((int)puVar40 * 2 + 0x40000a5);
                  *piVar17 = (int)((int)param_1 +
                                  (uint)((char *)0xe4ffffe6 < pcVar15 ||
                                        CARRY4((uint)(pcVar15 + 0x1b000019),uVar9)) + *piVar17);
                  puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),(char)puVar11 + cRam00009d7d
                                            );
                  uVar22 = (undefined3)((uint)pcVar16 >> 8);
                  bVar6 = (char)pcVar16 + 0x12;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  uVar9 = CONCAT31(uVar22,bVar6 + in_AF * -6) & 0xffffff0f;
                  pcVar15 = (char *)CONCAT22((short)(uVar9 >> 0x10),
                                             CONCAT11((char)((uint)pcVar16 >> 8) - in_AF,(char)uVar9
                                                     ));
                  puVar38 = (uint *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar22,bVar6));
                  while( true ) {
                    *pcVar15 = *pcVar15 + (char)pcVar15;
                    puVar11 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),
                                               (byte)puVar11 | (byte)*puVar11);
                    puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                    uVar9 = (uint)pcVar34 | (uint)unaff_ESI;
                    unaff_EBP = (uint *)((int)puVar38 + 1);
                    uVar43 = (ushort)((uint)unaff_retaddr >> 0x10);
                    unaff_retaddr = (uint *)CONCAT22(uVar43,uVar42);
                    cVar35 = (char)(pcVar15 + 0x1b000019);
                    uVar22 = (undefined3)((uint)(pcVar15 + 0x1b000019) >> 8);
                    cVar7 = cVar35 + -0x13;
                    pcVar15 = (char *)CONCAT31(uVar22,cVar7);
                    uVar30 = (undefined2)(uVar9 >> 0x10);
                    cVar8 = (char)(uVar9 >> 8) + *(char *)(uVar9 - 0x5e);
                    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,(byte)uVar9));
                    *pcVar15 = *pcVar15 + cVar7;
                    pcVar15 = (char *)(CONCAT31(uVar22,cVar35 + '\x19') | *puVar11);
                    bVar6 = (byte)pcVar15;
                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                      pbVar24 = (byte *)((int)puVar11 + (int)pcVar15);
                      bVar45 = CARRY1(*pbVar24,bVar6);
                      *pbVar24 = *pbVar24 + bVar6;
                      param_2 = puVar11;
                      goto code_r0x00402bd1;
                    }
                    *pcVar15 = *pcVar15 + bVar6;
                    uVar22 = (undefined3)((uint)pcVar15 >> 8);
                    pcVar34 = (char *)CONCAT31(uVar22,bVar6 + 0x6f);
                    param_2 = (uint *)((int)puVar11 + 1);
                    *pcVar34 = *pcVar34 + bVar6 + 0x6f;
                    bVar33 = (byte)uVar9 | (byte)((uint)pcVar15 >> 8);
                    pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x5c);
                    cVar8 = cVar8 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar33) + -0x5f)
                    ;
                    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,bVar33));
                    *pcVar15 = *pcVar15 + bVar6 + 0x5c;
                    pcVar15 = (char *)(CONCAT31(uVar22,bVar6 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar15 & 0xff) & 1U) != 0) {
                      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)param_1 >> 8);
                      unaff_retaddr = (uint *)((uint)uVar43 << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar15 = *pcVar15 + (char)pcVar15;
                    uVar22 = (undefined3)((uint)pcVar15 >> 8);
                    cVar7 = (char)pcVar15 + 'o';
                    puVar11 = (uint *)((int)puVar11 + 2);
                    *(char *)CONCAT31(uVar22,cVar7) = *(char *)CONCAT31(uVar22,cVar7) + cVar7;
                    pcVar34 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                               bVar33 | (byte)((uint)pcVar15 >> 8));
                    pcVar15 = (char *)(CONCAT31(uVar22,cVar7) | 2);
                    *(byte *)((int)puVar38 + -0x62) = *(byte *)((int)puVar38 + -0x62) + 1;
                    bVar6 = (byte)pcVar15;
                    *pcVar15 = *pcVar15 + bVar6;
                    bVar45 = 0xfd < bVar6;
                    cVar7 = bVar6 + 2;
                    pcVar15 = (char *)CONCAT31(uVar22,cVar7);
                    uVar44 = uVar42;
                    if (SCARRY1(bVar6,'\x02') != cVar7 < '\0') break;
                    *pcVar15 = *pcVar15 + cVar7;
                    bVar33 = bVar6 + 10;
                    pcVar15 = (char *)CONCAT31(uVar22,bVar33);
                    *pcVar15 = *pcVar15 - cVar8;
                    cVar35 = (char)param_1;
                    *(byte *)puVar11 = *(byte *)puVar11 + cVar35;
                    *(byte *)((int)puVar38 + -0x62) = *(byte *)((int)puVar38 + -0x62) + 1;
                    *pcVar15 = *pcVar15 + bVar33;
                    cVar7 = bVar6 + 0xc;
                    pcVar15 = (char *)CONCAT31(uVar22,cVar7);
                    if (SCARRY1(bVar33,'\x02') == cVar7 < '\0') {
                      *pcVar15 = *pcVar15 + cVar7;
                      *(byte *)param_1 = (byte)*param_1 - cVar8;
                      *(byte *)puVar11 = *(byte *)puVar11 + cVar35;
                      cVar7 = (bVar6 + 0x13) - (byte)param_1[0x13];
                      pcVar15 = (char *)CONCAT31(uVar22,cVar7);
                      *pcVar15 = *pcVar15 + cVar7;
                      pcVar16 = (char *)CONCAT31(uVar22,cVar7 + *pcVar15);
                      *pcVar16 = *pcVar16 + cVar7 + *pcVar15;
                      pcVar16 = pcVar16 + *param_1;
                      *pcVar16 = *pcVar16 + (char)pcVar16;
                      LOCK();
                      pcVar15 = *(char **)pcVar16;
                      *(char **)pcVar16 = pcVar16;
                      UNLOCK();
                      *pcVar15 = *pcVar15 + (char)pcVar15;
                      pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)*param_1);
                      *pbVar24 = *pbVar24 + (byte)*param_1;
                      goto code_r0x00402c8d;
                    }
                    param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),
                                               cVar35 + *pcVar34 + (0xfd < bVar33));
                    *(byte *)puVar40 = (byte)*puVar40 - cVar8;
                    puVar38 = unaff_EBP;
                  }
                } while( true );
              }
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -99),(char)unaff_EBX)
                                          );
              puVar11 = unaff_ESI;
            }
            *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
            param_2 = (uint *)((int)param_2 - *puVar11);
            unaff_ESI = puVar11;
            uVar43 = uVar42;
            uVar42 = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          pcVar15 = pcVar15 + -0x7d160243;
        }
        pcVar15 = (char *)CONCAT31(uVar22,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_1;
    uVar9 = *puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + (byte)puVar11;
    *puVar40 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar9,(byte)puVar11) + *puVar40);
    puVar38 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar29 = (char)param_1;
      cVar26 = (char)((uint)param_1 >> 8) + (char)((uint)pbVar24 >> 8);
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar26,cVar29));
      cVar7 = (char)pbVar24;
      *pbVar24 = *pbVar24 + cVar7;
      pcVar15 = (char *)((int)pbVar24 * 2 + 0x1a10000);
      cVar8 = (char)((uint)pcVar34 >> 8);
      *pcVar15 = *pcVar15 + cVar8;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      pbVar24[-0x47ffffff] = pbVar24[-0x47ffffff] + cVar8;
      *(byte **)pbVar24 = pbVar24 + *(int *)pbVar24;
      bVar33 = (byte)puVar11;
      *(byte *)puVar40 = (byte)*puVar40 + bVar33;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + bVar33;
      *pbVar24 = *pbVar24 + cVar7;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar34 >> 0x10);
      cVar8 = cVar8 + (byte)unaff_ESI[(int)pcVar34];
      pcVar15 = (char *)CONCAT22(uVar30,CONCAT11(cVar8,(char)pcVar34));
      pcVar15[(int)pbVar24] = pcVar15[(int)pbVar24] + cVar7;
      *(byte *)puVar11 = *(byte *)puVar11 - cVar8;
      *(byte *)puVar11 = *(byte *)puVar11 + cVar29;
      uVar22 = (undefined3)((uint)pbVar24 >> 8);
      bVar6 = cVar7 - *pbVar24;
      *pcVar15 = *pcVar15 + bVar33;
      *(byte *)puVar11 = *(byte *)puVar11 ^ bVar6;
      *(byte *)puVar11 = *(byte *)puVar11 + bVar6;
      *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
      uVar9 = *param_1;
      *(byte *)param_1 = (byte)*param_1 + bVar33;
      cVar35 = bVar6 + *(char *)CONCAT31(uVar22,bVar6) + CARRY1((byte)uVar9,bVar33);
      pcVar34 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + (byte)puVar38[-0x18],(char)pcVar34));
      *(char *)CONCAT31(uVar22,cVar35) = *(char *)CONCAT31(uVar22,cVar35) + cVar35;
      cVar8 = cVar35 + '\x12';
      pbVar24 = (byte *)CONCAT31(uVar22,cVar8);
      cVar7 = *pcVar34;
      *pcVar34 = *pcVar34 + cVar8;
      if (SCARRY1(cVar7,cVar8) != *pcVar34 < '\0') break;
code_r0x00402c8d:
      cVar7 = (char)pbVar24;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
      *(byte *)puVar11 = *(byte *)puVar11 + cVar7;
      *pbVar24 = *pbVar24 + cVar7;
    }
    *pbVar24 = *pbVar24 + cVar8;
    pbVar24 = (byte *)CONCAT31(uVar22,cVar35 + '$');
    *pbVar24 = *pbVar24 + cVar26;
    bVar6 = *(byte *)puVar11;
    *(byte *)puVar11 = *(byte *)puVar11 + cVar29;
  } while (SCARRY1(bVar6,cVar29) == (char)*(byte *)puVar11 < '\0');
  do {
    cVar7 = (char)pbVar24;
    *pbVar24 = *pbVar24 + cVar7;
    uVar22 = (undefined3)((uint)pbVar24 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar11;
    bVar33 = cVar7 + 0x24;
    cVar8 = (char)((uint)pcVar34 >> 8);
    pcVar34[-0x62] = pcVar34[-0x62] + cVar8;
    *(char *)CONCAT31(uVar22,bVar33) = *(char *)CONCAT31(uVar22,bVar33) + bVar33;
    bVar6 = cVar7 + 0x2fU + (byte)*param_1;
    cVar35 = bVar6 + (0xf4 < bVar33);
    cVar7 = cVar35 + *(char *)CONCAT31(uVar22,cVar35) +
            (CARRY1(cVar7 + 0x2fU,(byte)*param_1) || CARRY1(bVar6,0xf4 < bVar33));
    pcVar15 = (char *)CONCAT31(uVar22,cVar7);
    *pcVar15 = *pcVar15 - (char)puVar11;
    *pcVar15 = *pcVar15 + cVar7;
    pcVar16 = (char *)((int)puVar11 - *puVar11);
    *(byte *)(unaff_ESI + (int)pcVar34) = (byte)unaff_ESI[(int)pcVar34] + cVar8;
    pcVar15[(int)unaff_EBP] = pcVar15[(int)unaff_EBP] + cVar7;
    *pcVar16 = *pcVar16 + (char)param_1;
    pcVar15 = (char *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                               CONCAT11((char)((uint)pbVar24 >> 8) - *pcVar16,cVar7));
    uVar9 = *puVar40;
    *pcVar15 = *pcVar15 - (char)((uint)pcVar16 >> 8);
    *pcVar15 = *pcVar15 + cVar7;
    uVar30 = (undefined2)((uint)unaff_retaddr >> 0x10);
    unaff_retaddr = (uint *)CONCAT22(uVar30,uVar44);
    pbVar12 = (byte *)CONCAT22((short)((uint)pcVar34 >> 0x10),
                               CONCAT11(cVar8 - (byte)*unaff_ESI,(char)pcVar34));
    unaff_EBP = (uint *)((int)unaff_EBP + *(int *)(pbVar12 + (int)param_1));
    puVar38 = (uint *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + (byte)uVar9);
    while( true ) {
      puVar11 = puVar38;
      uVar37 = (undefined2)((uint)pbVar12 >> 0x10);
      bVar36 = (char)((uint)pbVar12 >> 8) + pbVar12[0x18];
      *pcVar15 = *pcVar15 + (char)pcVar15;
      pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + 'o');
      cVar7 = (char)param_1;
      *(byte *)puVar11 = (byte)*puVar11 + cVar7;
      uVar9 = *unaff_ESI;
      bVar32 = (byte)((uint)param_1 >> 8);
      bVar6 = *pbVar24;
      pbVar24 = pbVar24 + (uint)CARRY1(bVar32,*pbVar24) + *(int *)pbVar24;
      *(byte *)puVar11 = (byte)*puVar11 + cVar7;
      cVar35 = ((char)pbVar12 - (byte)uVar9) - (byte)*unaff_ESI;
      bVar33 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar24 = *pbVar24 + (char)pbVar24;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(bVar32 + bVar6 + bVar33 | (byte)*puVar11,cVar7));
      pbVar24 = pbVar24 + *puVar11;
      if ((POPCOUNT((uint)pbVar24 & 0xff) & 1U) != 0) break;
      *pbVar24 = *pbVar24 + (char)pbVar24;
      bVar6 = (char)pbVar24 + 0x6f;
      pcVar15 = (char *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar6);
      pcVar34 = (char *)(CONCAT31((int3)(CONCAT22(uVar37,CONCAT11(bVar36,(char)pbVar12)) >> 8),
                                  cVar35) + -1);
      *pcVar15 = *pcVar15 + bVar6;
      *pcVar15 = *pcVar15 + bVar6;
      *pcVar34 = *pcVar34 + (byte)puVar11;
      *(byte *)((int)pcVar15 * 2) = *(byte *)((int)pcVar15 * 2) ^ bVar6;
      uVar3 = *(undefined6 *)pcVar15;
      uVar44 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar15 = (char *)uVar3;
      *pcVar15 = *pcVar15 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar15 = (char *)((uint)pcVar15 | 0x73110008);
      bVar36 = (byte)((uint)pcVar34 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar36;
      *(byte *)puVar11 = (byte)*puVar11 + cVar7;
      puVar38 = unaff_ESI + (uint)bVar46 * -2 + 1;
      out(*unaff_ESI,(short)puVar11);
      *pcVar15 = *pcVar15;
      cVar7 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar7;
      bVar6 = *(byte *)((int)unaff_EBP + -0x5a);
      uVar37 = (undefined2)((uint)pcVar34 >> 0x10);
      cVar35 = (char)pcVar34;
      *pcVar15 = *pcVar15 + cVar7;
      cVar7 = cVar7 + '\x02';
      uVar9 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar7);
      param_1 = (uint *)(uVar9 | 0x73110000);
      unaff_ESI = puVar38 + (uint)bVar46 * -2 + 1;
      out(*puVar38,(short)puVar11);
      *(byte *)param_1 = (byte)*param_1;
      bVar32 = (byte)puVar11 | (byte)*puVar40;
      puVar38 = (uint *)CONCAT31((int3)((uint)puVar11 >> 8),bVar32);
      *(byte *)param_1 = (byte)*param_1 + cVar7;
      pcVar15 = (char *)(uVar9 | 0x7b1f1609);
      bVar46 = ((uint)param_3 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | (uint)unaff_EBP;
      bVar33 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar33;
      bVar36 = bVar36 | bVar6 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar12 = (byte *)CONCAT22(uVar37,CONCAT11(bVar36,cVar35));
      *pcVar15 = *pcVar15 + bVar33;
      uVar22 = (undefined3)((uint)pcVar15 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar38 + (uint)(0xd2 < bVar33) + unaff_ESI[(int)puVar40 * 2]);
      param_3 = (uint *)(uint)uVar44;
      bVar6 = bVar33 + 0x2d ^ *(byte *)CONCAT31(uVar22,bVar33 + 0x2d);
      pcVar15 = (char *)CONCAT31(uVar22,bVar6);
      uVar9 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      if (CARRY1((byte)uVar9,bVar6)) {
        *pcVar15 = *pcVar15 + bVar6;
        bVar6 = bVar6 | pcVar15[0x4000019];
        pcVar15 = (char *)CONCAT31(uVar22,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar15 = *pcVar15 + bVar6;
          piVar17 = (int *)CONCAT31(uVar22,bVar6 + 0x28);
          *piVar17 = (int)piVar17 + (uint)(0xd7 < bVar6) + *piVar17;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar12 = *pbVar12 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar11 >> 8) | bVar36,bVar32);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar11 >> 0x10),uVar31);
          unaff_retaddr = (uint *)CONCAT22(uVar30,uVar44);
          bVar32 = in(uVar31);
          pbVar24 = (byte *)CONCAT31(uVar22,bVar32);
          bVar33 = *pbVar24;
          bVar45 = SCARRY1(*pbVar24,bVar32);
          *pbVar24 = *pbVar24 + bVar32;
          bVar6 = *pbVar24;
          puVar11 = unaff_ESI;
          in_SS = uVar44;
          if (!CARRY1(bVar33,bVar32)) goto code_r0x00402e19;
          *pbVar24 = *pbVar24 + bVar32;
          bVar27 = bVar27 | *pbVar24;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar27,cVar7));
          pcVar15 = (char *)CONCAT31(uVar22,bVar32 + *pbVar24);
          *pbVar12 = *pbVar12 + bVar27;
        }
        uVar22 = (undefined3)((uint)pcVar15 >> 8);
        bVar33 = (byte)pcVar15 | (byte)*puVar38;
        pbVar24 = (byte *)CONCAT31(uVar22,bVar33);
        puVar11 = unaff_ESI + (uint)bVar46 * -2 + 1;
        out(*unaff_ESI,(short)puVar38);
        LOCK();
        bVar6 = *pbVar24;
        *pbVar24 = bVar33;
        UNLOCK();
        *(byte *)puVar38 = (byte)*puVar38 + (char)param_1;
        piVar17 = (int *)(CONCAT31(uVar22,bVar6) + -0x1b7e07);
        *(byte *)puVar38 = (byte)*puVar38 + (char)param_1;
        iVar14 = (int)param_1 - *(int *)pbVar12;
        bVar6 = *(byte *)((int)puVar40 + -0x7a);
        uVar30 = (undefined2)((uint)iVar14 >> 0x10);
        *(char *)piVar17 = *(char *)piVar17 + (char)piVar17;
        bVar33 = (char)((uint)iVar14 >> 8) + bVar6 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar17 = *(char *)piVar17 + (char)piVar17;
        uVar22 = (undefined3)(CONCAT22(uVar30,CONCAT11(bVar33,(byte)iVar14)) >> 8);
        bVar6 = (byte)iVar14 | *pbVar12;
        param_1 = (uint *)CONCAT31(uVar22,bVar6);
        pbVar24 = (byte *)((int)piVar17 + *piVar17);
        puVar19 = puVar11;
        if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402e0a;
        *(byte *)param_1 = (byte)*param_1 + bVar6;
        *(byte **)pbVar12 = (byte *)(*(int *)pbVar12 + (int)puVar38);
        piVar17 = (int *)CONCAT31(uVar22,bVar6 + 0x27);
        param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar33 + *(byte *)((int)puVar40 + -0x79),bVar6));
        *(byte *)piVar17 = (char)*piVar17 + bVar6 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar34 = (char *)CONCAT22(uVar37,CONCAT11(bVar36 | *(byte *)((int)unaff_EBP + -0x62),cVar35));
  } while( true );
code_r0x00402dff:
  pbVar24 = (byte *)CONCAT22((short)((uint)piVar17 >> 0x10),
                             CONCAT11((byte)((uint)piVar17 >> 8) |
                                      *(byte *)((int)puVar38 + 0x2170411),(byte)piVar17));
  puVar19 = puVar11 + (uint)bVar46 * -2 + 1;
  out(*puVar11,(short)puVar38);
  *pbVar24 = (byte)piVar17;
  *(byte *)puVar38 = (byte)*puVar38 + (char)param_1;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar24;
  *pbVar24 = *pbVar24 - cVar35;
  *pbVar24 = *pbVar24 + (char)pbVar24;
  bVar45 = false;
  bVar6 = (byte)((uint)param_1 >> 8) | bRam052b0603;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
  puVar11 = puVar19;
code_r0x00402e19:
  if (bVar6 == 0 || bVar45 != (char)bVar6 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar24;
  *pbVar24 = *pbVar24 + cRam89280411;
  piVar17 = (int *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                            CONCAT11((byte)((uint)pbVar24 >> 8) |
                                     *(byte *)((int)puVar38 + 0x7190411),cRam89280411));
  *(char *)piVar17 = (char)*piVar17 + cRam89280411;
  cVar7 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar38,cVar7));
  puVar11 = (uint *)((int)puVar11 + *piVar17);
  pbVar24 = (byte *)((int)piVar17 + *piVar17);
  bVar33 = (byte)pbVar24;
  *pbVar24 = *pbVar24 + bVar33;
  *(byte *)puVar11 = (byte)*puVar11 + cVar7;
  bVar6 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar33;
  *(byte **)pbVar24 = (byte *)((int)unaff_EBP + (uint)CARRY1(bVar6,bVar33) + *(int *)pbVar24);
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),*pbVar24);
  *(byte *)puVar38 = (byte)*puVar38 + cVar7;
  puVar19 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(byte)puVar38 | (byte)*puVar38);
  pbVar24 = (byte *)((int)puVar19 + -0x43);
  *pbVar24 = *pbVar24 + (char)((uint)puVar38 >> 8);
  puVar38 = puVar19;
  puVar19 = puVar40;
  uVar43 = uVar42;
code_r0x00402e42:
  uVar42 = in_SS;
  puVar40 = puVar19;
  in_SS = uVar42;
  if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402e6e;
  iVar14 = *(int *)((int)piVar17 + *piVar17);
  *(byte *)puVar38 = (byte)*puVar38 + (char)param_1;
  piVar17 = (int *)(iVar14 + -0x8c6f);
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | *(byte *)((int)puVar38 + -0x3f),
                                      (char)puVar38));
  pbVar18 = (byte *)((int)piVar17 + *piVar17);
  pbVar24 = pbVar18;
  puVar40 = unaff_retaddr;
  if (SCARRY4((int)piVar17,*piVar17)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar18 = *pbVar18 + (char)pbVar18;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar38,(char)param_1));
  puVar19 = puVar11 + (uint)bVar46 * -2 + 1;
  out(*puVar11,(short)puVar38);
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 + (byte)*puVar40);
  puVar11 = puVar19 + (uint)bVar46 * -2 + 1;
  out(*puVar19,(short)puVar38);
  uVar43 = uVar42;
  in_SS = uVar44;
code_r0x00402e6e:
  uVar42 = uVar43;
  uVar22 = (undefined3)((uint)puVar38 >> 8);
  cVar7 = (char)puVar38 + (byte)*puVar40;
  puVar19 = puVar11 + (uint)bVar46 * -2 + 1;
  out(*puVar11,(short)CONCAT31(uVar22,cVar7));
  puVar38 = (uint *)CONCAT31(uVar22,cVar7 + (byte)*puVar40);
  puVar11 = puVar19 + (uint)bVar46 * -2 + 1;
  out(*puVar19,(short)puVar38);
  pbVar24 = (byte *)0x0;
  puVar19 = puVar40;
code_r0x00402e81:
  puVar40 = puVar19;
  bVar33 = (char)pbVar24 - *pbVar24;
  iVar14 = CONCAT31((int3)((uint)pbVar24 >> 8),bVar33);
  *pbVar12 = *pbVar12 + (char)puVar38;
  pbVar18 = (byte *)(iVar14 * 2);
  *pbVar18 = *pbVar18 ^ bVar33;
  pbVar18 = (byte *)(int)(short)iVar14;
  *pbVar18 = *pbVar18 + bVar33;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)param_1;
  bVar6 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar33;
  *(byte **)(pbVar12 + -0x73) =
       (byte *)((int)puVar11 + (uint)CARRY1(bVar6,bVar33) + *(int *)(pbVar12 + -0x73));
  *pbVar18 = *pbVar18 + bVar33;
  bVar6 = (byte)param_1 | (byte)*puVar38;
  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6);
  puVar19 = puVar11;
  if ((char)bVar6 < '\x01') goto code_r0x00402eb4;
  *pbVar18 = *pbVar18 + bVar33;
  pbVar24 = (byte *)CONCAT31((int3)(char)((uint)pbVar24 >> 8),bVar33 + 0x2d);
  puVar11[(int)puVar40 * 2] =
       (uint)((int)puVar38 + (uint)(0xd2 < bVar33) + puVar11[(int)puVar40 * 2]);
  puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar44);
  do {
    uVar9 = *puVar11;
    bVar6 = (byte)pbVar24;
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    if (!CARRY1((byte)uVar9,bVar6)) break;
    *pbVar24 = *pbVar24 + bVar6;
    bVar6 = bVar6 | pbVar24[0x400001a];
    pbVar18 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar6);
    if ((char)bVar6 < '\x01') {
code_r0x00402ecc:
      *pbVar18 = *pbVar18 + (byte)pbVar18;
      uVar22 = (undefined3)((uint)pbVar18 >> 8);
      bVar6 = (byte)pbVar18 | pbVar18[0x400001b];
      pcVar15 = (char *)CONCAT31(uVar22,bVar6);
      if ((char)bVar6 < '\x01') {
        uVar9 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + (byte)param_1;
        *(char *)((int)pcVar15 * 2) =
             *(char *)((int)pcVar15 * 2) - CARRY1((byte)uVar9,(byte)param_1);
        bVar45 = 0x81 < bVar6;
        bVar6 = bVar6 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar18 = *pbVar18 + bVar6;
      puVar19 = puVar11;
code_r0x00402eb4:
      uVar22 = (undefined3)((uint)pbVar18 >> 8);
      bVar6 = (char)pbVar18 + 0x6f;
      pcVar15 = (char *)CONCAT31(uVar22,bVar6);
      *(uint **)pcVar15 = puStack_1c;
      uVar9 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + (char)param_1;
      puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar44);
      uVar41 = uVar44;
      if ((byte)*puVar38 != 0 && SCARRY1((byte)uVar9,(char)param_1) == (char)(byte)*puVar38 < '\0')
      {
        *pcVar15 = *pcVar15 + bVar6;
        bVar33 = (char)pbVar18 + 0x9c;
        pbVar18 = (byte *)CONCAT31(uVar22,bVar33);
        puVar19[(int)puVar40 * 2] =
             (uint)((int)puVar38 + (uint)(0xd2 < bVar6) + puVar19[(int)puVar40 * 2]);
        puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar44);
        uVar9 = *puVar19;
        *(byte *)puVar19 = (byte)*puVar19 + bVar33;
        puVar11 = puVar19;
        if (CARRY1((byte)uVar9,bVar33)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar11 = puVar19 + (uint)bVar46 * -2 + 1;
      out(*puVar19,(short)puVar38);
    }
    cVar7 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar7;
    uVar22 = (undefined3)((uint)pcVar15 >> 8);
    bVar6 = cVar7 + 0x6f;
    pcVar15 = (char *)CONCAT31(uVar22,bVar6);
    *(uint **)pcVar15 = puStack_1c;
    uVar9 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + (byte)param_1;
    puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar44);
    *(byte *)(puVar11 + 7) = ((byte)puVar11[7] - bVar36) - CARRY1((byte)uVar9,(byte)param_1);
    *pcVar15 = *pcVar15 + bVar6;
    bVar33 = cVar7 + 0x9c;
    pcVar15 = (char *)CONCAT31(uVar22,bVar33);
    puVar11[(int)puVar40 * 2] =
         (uint)((int)puVar38 + (uint)(0xd2 < bVar6) + puVar11[(int)puVar40 * 2]);
    uVar9 = *puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar33;
    if (!CARRY1((byte)uVar9,bVar33)) goto code_r0x00402e7e;
    *pcVar15 = *pcVar15 + bVar33;
    bVar33 = bVar33 | pcVar15[0x400001c];
    pbVar24 = (byte *)CONCAT31(uVar22,bVar33);
    in_SS = uVar44;
    if ((char)bVar33 < '\x01') goto code_r0x00402f16;
    *pbVar24 = *pbVar24 + bVar33;
    pcVar15 = (char *)CONCAT31(uVar22,bVar33 + 0x6f);
    while( true ) {
      *(uint **)pcVar15 = puStack_1c;
      uVar9 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + (byte)param_1;
      *(uint *)((int)puVar11 + 0x1d) =
           (*(int *)((int)puVar11 + 0x1d) - (int)puVar40) - (uint)CARRY1((byte)uVar9,(byte)param_1);
      bVar6 = (byte)pcVar15;
      *pcVar15 = *pcVar15 + bVar6;
      bVar33 = bVar6 + 0x2d;
      pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),bVar33);
      puVar11[(int)puVar40 * 2] =
           (uint)((int)puVar38 + (uint)(0xd2 < bVar6) + puVar11[(int)puVar40 * 2]);
      puStack_1c = (uint *)CONCAT22((short)((uint)puStack_1c >> 0x10),uVar44);
      uVar9 = *puVar11;
      *(byte *)puVar11 = (byte)*puVar11 + bVar33;
      if (!CARRY1((byte)uVar9,bVar33)) break;
      *pbVar24 = *pbVar24 + bVar33;
code_r0x00402f16:
      bVar6 = (byte)pbVar24 | pbVar24[0x400001d];
      puVar20 = (uint *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar6);
      puVar19 = unaff_EBP;
      if ((char)bVar6 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = puVar19;
        *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
        uVar22 = (undefined3)((uint)puVar20 >> 8);
        cVar7 = (char)puVar20 + 'o';
        puVar19 = (uint *)CONCAT31(uVar22,cVar7);
        *puVar19 = (uint)puStack_1c;
        cVar8 = (char)param_1;
        *(byte *)puVar38 = (byte)*puVar38 + cVar8;
        puStack_1c = (uint *)CONCAT22(puStack_1c._2_2_,uVar44);
        bVar6 = (byte)((uint)puVar38 >> 8);
        bVar45 = bVar6 < (byte)*puVar11;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11(bVar6 - (byte)*puVar11,(char)puVar38));
        if (bVar45) break;
        bVar45 = CARRY4((uint)puVar19,*puVar19);
        puVar20 = (uint *)((int)puVar19 + *puVar19);
        if (!SCARRY4((int)puVar19,*puVar19)) {
          bVar45 = CARRY4((uint)unaff_EBP,*puVar20);
          unaff_EBP = (uint *)((int)unaff_EBP + *puVar20);
        }
        *puVar20 = (*puVar20 - (int)puVar20) - (uint)bVar45;
        *(byte *)puVar38 = (byte)*puVar38 + cVar8;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((char)((uint)param_1 >> 8) + (byte)*puVar38,
                                            cVar8 - (byte)*puVar38));
        *(byte *)puVar20 = (byte)*puVar20 + (char)puVar20;
code_r0x00402f3b:
        cVar8 = (char)puVar38;
        *pbVar12 = *pbVar12 + cVar8;
        bVar6 = (byte)puVar20;
        *(byte *)((int)puVar20 * 2) = *(byte *)((int)puVar20 * 2) ^ bVar6;
        *(byte *)puVar20 = (byte)*puVar20 + bVar6;
        *(byte *)puVar20 = (byte)*puVar20 + cVar8;
        uVar9 = *puVar20;
        *(byte *)puVar20 = (byte)*puVar20 + bVar6;
        *puVar38 = (uint)((int)puVar20 + (uint)CARRY1((byte)uVar9,bVar6) + *puVar38);
        pcVar15 = (char *)((uint)puVar20 | *puVar40);
        uVar22 = (undefined3)((uint)pcVar15 >> 8);
        cVar7 = (char)pcVar15 + *pcVar15;
        pcVar15 = (char *)CONCAT31(uVar22,cVar7);
        *pcVar15 = *pcVar15 + cVar7;
        cVar7 = cVar7 + *pcVar15;
        piVar17 = (int *)CONCAT31(uVar22,cVar7);
        *(char *)piVar17 = (char)*piVar17 + cVar7;
        iVar14 = LocalDescriptorTableRegister();
        *piVar17 = iVar14;
        bVar6 = *pbVar12;
        bVar28 = (byte)((uint)param_1 >> 8);
        *pbVar12 = *pbVar12 + bVar28;
        iVar14 = *piVar17;
        uVar30 = (undefined2)((uint)param_1 >> 0x10);
        bVar27 = (byte)param_1;
        *(byte *)puVar11 = (byte)*puVar11 + cVar7;
        puVar19 = puVar11 + (uint)bVar46 * -2 + 1;
        out(*puVar11,(short)puVar38);
        *(byte *)puVar19 = (byte)*puVar19 + cVar7;
        bVar33 = *pbVar12;
        *(byte *)puVar38 = (byte)*puVar38 - bVar36;
        *(byte *)puVar19 = (byte)*puVar19 + cVar7;
        puVar39 = puVar19 + (uint)bVar46 * -2 + 1;
        out(*puVar19,(short)puVar38);
        *(byte *)puVar39 = (byte)*puVar39 + cVar7;
        bVar32 = *pbVar12;
        *(uint *)((int)puVar38 + -0x23) = *(uint *)((int)puVar38 + -0x23) & (uint)puVar39;
        puVar21 = (ushort *)((int)piVar17 + *piVar17);
        if (!SCARRY4((int)piVar17,*piVar17)) {
          *puVar21 = uVar41;
        }
        *(char *)puVar21 = (char)*puVar21 + (char)puVar21;
        uVar31 = CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + -0x15),cVar8);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar31);
        puVar20 = (uint *)((int)puVar21 + *(int *)puVar21);
        if (!SCARRY4((int)puVar21,*(int *)puVar21)) {
          *(ushort *)puVar20 = uVar41;
        }
        cVar7 = (char)puVar20;
        *(byte *)puVar20 = (byte)*puVar20 + cVar7;
        cVar29 = ((bVar28 - (char)iVar14) - CARRY1(bVar6,bVar28) | bVar33 | bVar32) + (byte)*puVar20
        ;
        param_1 = (uint *)CONCAT22(uVar30,CONCAT11(cVar29,bVar27));
        uVar9 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar27;
        if (CARRY1((byte)uVar9,bVar27)) {
          *(byte *)puVar20 = (byte)*puVar20 + cVar7;
          bVar6 = *(byte *)((int)puVar38 + 6);
          *(byte *)puVar38 = (byte)*puVar38 + bVar27;
          bVar33 = (cVar29 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar20 = (byte)*puVar20 + cVar7;
          bVar6 = bVar36 | bVar6 | *(byte *)((int)puVar38 + 0x2a);
          uVar9 = *puVar20;
          pbVar24 = (byte *)((int)puVar20 + (uint)CARRY1(bVar33,(byte)*puVar20) + *puVar20);
          *(byte *)puVar38 = (byte)*puVar38 + bVar27;
          cVar7 = cVar35 - (byte)*puVar39;
          cVar35 = bVar6 + *(char *)(CONCAT31((int3)(CONCAT22(uVar37,CONCAT11(bVar6,cVar35)) >> 8),
                                              cVar7) + 0x1e);
          *pbVar24 = *pbVar24 + (char)pbVar24;
          uVar22 = (undefined3)((uint)pbVar24 >> 8);
          bVar6 = (char)pbVar24 + 0x2aU & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x2a);
          cVar35 = cVar35 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar35,cVar7)) + 0x1f);
          *pcVar15 = *pcVar15 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x2a);
          cVar35 = cVar35 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar35,cVar7)) + 0x20);
          *pcVar15 = *pcVar15 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x2a);
          cVar35 = cVar35 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar35,cVar7)) + 0x21);
          *pcVar15 = *pcVar15 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x2a);
          cVar35 = cVar35 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar35,cVar7)) + 0x22);
          *pcVar15 = *pcVar15 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x2a);
          bVar33 = bVar33 + (byte)uVar9 + *pcVar15;
          uVar25 = CONCAT22(uVar30,CONCAT11(bVar33,bVar27));
          cVar35 = cVar35 + *(char *)(CONCAT22(uVar37,CONCAT11(cVar35,cVar7)) + 0x25);
          *pcVar15 = *pcVar15 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x2a);
          pcVar34 = (char *)CONCAT22(uVar37,CONCAT11(cVar35 + *(char *)(CONCAT22(uVar37,CONCAT11(
                                                  cVar35,cVar7)) + 0x26),cVar7));
          *pcVar15 = *pcVar15 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          cVar7 = bVar6 + 0x2a;
          pcVar15 = (char *)CONCAT31(uVar22,cVar7);
          if ((POPCOUNT(cVar7) & 1U) == 0) {
            *pcVar15 = *pcVar15 + cVar7;
            pbVar24 = (byte *)(CONCAT31(uVar22,bVar6 + 0x4f) + -0x33282610);
            bVar6 = *pbVar24;
            bVar32 = (byte)pbVar24;
            *pbVar24 = *pbVar24 + bVar32;
            uVar22 = (undefined3)((uint)pbVar24 >> 8);
            if (!CARRY1(bVar6,bVar32)) {
              if (!SCARRY1(bVar32,'\0')) {
                *pbVar24 = *pbVar24 + bVar32;
                uVar25 = CONCAT22(uVar30,CONCAT11(bVar33 | (byte)*puVar38,bVar27));
                bVar32 = bVar32 & (byte)*puVar38;
                *(char *)CONCAT31(uVar22,bVar32) = *(char *)CONCAT31(uVar22,bVar32) + bVar32;
                pcVar15 = (char *)CONCAT31(uVar22,bVar32 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar15 = (char *)CONCAT31(uVar22,bVar32 + *pcVar34);
              if (SCARRY1(bVar32,*pcVar34) != (char)(bVar32 + *pcVar34) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar6 = bVar32 + *pcVar34;
            pbVar24 = (byte *)CONCAT31(uVar22,bVar6);
            if (SCARRY1(bVar32,*pcVar34) == (char)bVar6 < '\0') {
              pcVar15 = (char *)CONCAT22(uVar30,CONCAT11(bVar33 | (byte)*puVar38,bVar27));
              *pcVar34 = *pcVar34 + cVar8;
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar6;
              *(char *)((int)pbVar24 * 2) = *(char *)((int)pbVar24 * 2) + bVar6;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar15 = *pcVar15 + (char)pcVar15;
            uVar22 = (undefined3)((uint)pcVar15 >> 8);
            bVar6 = (char)pcVar15 + 0x2aU & (byte)*puVar38;
            *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
            pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x2a);
            *pcVar15 = *pcVar15 + bVar6 + 0x2a;
            pcVar15 = (char *)CONCAT31(uVar22,bVar6 + 0x54 & (byte)*puVar38);
code_r0x00403072:
            cVar7 = (char)pcVar15;
            *pcVar15 = *pcVar15 + cVar7;
            uVar22 = (undefined3)((uint)pcVar15 >> 8);
            pcVar15 = (char *)CONCAT31(uVar22,cVar7 + '*');
            *pcVar15 = *pcVar15 + cVar7 + '*';
            bVar6 = cVar7 + 0x54U & (byte)*puVar38;
            *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,uVar42);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar22,bVar6 + 0x2a),(char)uVar25));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar8;
            pcVar15 = pcStack_54;
code_r0x0040309a:
            cVar7 = (char)pcVar15;
            *pcVar15 = *pcVar15 + cVar7;
            pcStack_54 = (char *)CONCAT22(pcStack_54._2_2_,uVar44);
            *pcVar15 = *pcVar15 + cVar7;
            pbVar24 = (byte *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar7 + 0x2aU & (byte)*puVar38);
          }
          cVar7 = (char)pbVar24;
          *pbVar24 = *pbVar24 + cVar7;
          uVar22 = (undefined3)((uint)pbVar24 >> 8);
          cVar35 = cVar7 + '*';
          pcVar15 = (char *)CONCAT31(uVar22,cVar35);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar8;
          *pcVar15 = *pcVar15 + cVar35;
          cVar29 = (char)pcStack_54 - (byte)*puVar39;
          pcVar34 = (char *)CONCAT22((short)((uint)pcStack_54 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_54 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_54 >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar15 = *pcVar15 + cVar35;
          bVar6 = cVar7 + 0x54U & (byte)*puVar38;
          *(char *)CONCAT31(uVar22,bVar6) = *(char *)CONCAT31(uVar22,bVar6) + bVar6;
          pbVar24 = (byte *)CONCAT31(uVar22,bVar6 + 0x2a);
          bVar6 = (byte)((uint)uVar25 >> 8);
          pcVar15 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar24,(char)uVar25));
          pbVar24 = pbVar24 + (uint)CARRY1(bVar6,*pbVar24) + *(int *)pbVar24;
          *(byte *)puVar38 = (byte)*puVar38 + (char)uVar25;
          uVar22 = (undefined3)((uint)pbVar24 >> 8);
          cVar7 = (byte)pbVar24 - *pbVar24;
          piVar17 = (int *)CONCAT31(uVar22,cVar7);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar24 < *pbVar24) + *piVar17);
          cVar7 = cVar7 + (char)*piVar17;
          pbVar24 = (byte *)CONCAT31(uVar22,cVar7);
          *pbVar24 = *pbVar24 + cVar7;
code_r0x004030df:
          *pcVar15 = *pcVar15 + cVar8;
          bVar6 = *pbVar24;
          bVar33 = (byte)pbVar24;
          *pbVar24 = *pbVar24 + bVar33;
          *(byte **)(pcVar34 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar6,bVar33) + *(int *)(pcVar34 + -0x41));
          *pbVar24 = *pbVar24 + bVar33;
          uVar22 = (undefined3)((uint)pbVar24 >> 8);
          bVar33 = bVar33 | (byte)*puVar39;
          *(char *)CONCAT31(uVar22,bVar33) = *(char *)CONCAT31(uVar22,bVar33) + bVar33;
          pcVar15 = (char *)CONCAT31(uVar22,bVar33 + 0x7b);
          *pcVar15 = *pcVar15 + bVar33 + 0x7b;
          pbVar24 = (byte *)((int)puVar39 + CONCAT31(uVar22,bVar33 - 8) + -1);
          *pbVar24 = *pbVar24 + (bVar33 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = puVar39 + (uint)bVar46 * -2 + 1;
        out(*puVar39,uVar31);
        puVar19 = (uint *)((int)unaff_EBP + 1);
        puStack_1c = unaff_EBP;
      }
      bVar6 = cVar7 - bVar45;
      pbVar24 = (byte *)((int)puVar11 + (int)puVar40 * 2);
      bVar45 = CARRY1(*pbVar24,bVar6);
      *pbVar24 = *pbVar24 + bVar6;
code_r0x00402ef9:
      pcVar15 = (char *)CONCAT31(uVar22,bVar6 - bVar45);
      pbVar24 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar24 = *pbVar24 + (bVar6 - bVar45);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)param_1 = (byte)*param_1 + (char)puVar38;
  puVar19 = puVar38 + 0x2828000;
  bVar6 = (byte)param_1;
  bVar45 = (byte)*puVar19 < bVar6;
  *(byte *)puVar19 = (byte)*puVar19 - bVar6;
  bVar6 = (byte)pbVar24 + *pbVar24;
  piVar17 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar6 + bVar45);
  puVar19 = puVar40;
  uVar43 = uVar42;
  if (CARRY1((byte)pbVar24,*pbVar24) || CARRY1(bVar6,bVar45)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar15 = *pcVar15 + bVar33;
  uVar43 = uVar42;
  in_SS = uVar44;
  goto code_r0x00402e6e;
code_r0x0040290e:
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
  uVar48 = func_0x7346291c();
  *(char *)uVar48 = *(char *)uVar48 + (char)uVar48;
  param_1 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                             (byte)extraout_ECX | *(byte *)((ulonglong)uVar48 >> 0x20));
  unaff_retaddr = (uint *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),(ushort)param_3);
  in_ES = (ushort)param_3;
  param_3 = unaff_EBX;
  goto code_r0x00402922;
}


