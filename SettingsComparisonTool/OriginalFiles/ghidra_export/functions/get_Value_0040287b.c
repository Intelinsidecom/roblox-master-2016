/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040287b
 * Raw Name    : get_Value
 * Demangled   : get_Value
 * Prototype   : char * get_Value(uint * param_1, uint * param_2)
 * Local Vars  : pcStackY_80, puStackY_48, uStackY_2c, puStack_c, uVar1, uVar2, uVar3, uVar4, uVar5, bVar6, cVar7, cVar8, bVar9, cVar10, in_EAX, pbVar11, pcVar12, uVar13, uVar14, pbVar15, piVar16, puVar17, iVar18, pcVar19, piVar20, pbVar21, puVar22, puVar23, uVar24, extraout_ECX, extraout_ECX_00, uVar25, cVar26, bVar27, bVar28, cVar29, uVar30, uVar31, uVar32, bVar33, uVar34, unaff_EBX, pcVar35, puVar36, bVar37, unaff_EBP, unaff_ESI, puVar38, unaff_EDI, puVar39, in_ES, uVar40, in_CS, uVar41, in_SS, in_DS, in_GS_OFFSET, bVar42, in_AF, in_TF, in_IF, bVar43, bVar44, in_NT, puVar45, uVar46, in_stack_fffffff8, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

char * __fastcall get_Value(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  uint *in_EAX;
  undefined3 uVar24;
  byte *pbVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int *piVar16;
  uint *puVar17;
  int iVar18;
  char *pcVar19;
  int *piVar20;
  byte *pbVar21;
  uint *puVar22;
  ushort *puVar23;
  char cVar26;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  byte bVar27;
  byte bVar28;
  char cVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined4 uVar25;
  byte bVar33;
  undefined2 uVar32;
  undefined1 uVar34;
  byte bVar37;
  int unaff_EBX;
  char *pcVar35;
  uint *puVar36;
  uint *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar38;
  uint *unaff_EDI;
  uint *puVar39;
  ushort in_ES;
  ushort uVar40;
  ushort in_CS;
  ushort uVar41;
  ushort in_SS;
  ushort in_DS;
  int in_GS_OFFSET;
  bool bVar42;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar43;
  bool bVar44;
  byte in_NT;
  uint *puVar45;
  undefined8 uVar46;
  char *pcStackY_80;
  uint *puStackY_48;
  undefined4 uStackY_2c;
  uint *puStack_c;
  uint *in_stack_fffffff8;
  
  bVar43 = false;
code_r0x0040287b:
  do {
                    /* .NET CLR Managed Code */
    cVar7 = *(char *)(unaff_EBX + 0x13);
    *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
    uVar24 = (undefined3)((uint)in_EAX >> 8);
    bVar6 = (char)in_EAX + 0x2aU & (byte)*param_2;
    pcVar35 = (char *)CONCAT31(uVar24,bVar6);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x13));
    *pcVar35 = *pcVar35 + bVar6;
    pbVar11 = (byte *)CONCAT31(uVar24,bVar6 + 0x2a);
    puVar45 = (uint *)(uint)in_DS;
    bVar9 = (byte)((uint)param_1 >> 8);
    bVar6 = bVar9 + *pbVar11;
    pbVar11 = pbVar11 + (uint)CARRY1(bVar9,*pbVar11) + *(int *)pbVar11;
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((char)((uint)unaff_EBX >> 8) + cVar7,
                                                        (char)unaff_EBX)) >> 8),
                               (char)unaff_EBX - (byte)*unaff_ESI);
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11(bVar6 + *pbVar11,(char)param_1));
    pbVar11 = pbVar11 + (uint)CARRY1(bVar6,*pbVar11) + *(int *)pbVar11;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    bVar6 = (byte)param_2;
    uVar30 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar6);
    pbVar15 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
    pcVar35 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) + (byte)puVar36[-0x19],
                                        (char)puVar36));
    *pbVar11 = *pbVar11 + (char)pbVar11;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),(char)pbVar11 + '\x03');
    puVar36 = unaff_ESI;
    do {
      unaff_ESI = puVar36 + 1;
      out(*puVar36,uVar30);
      pcVar35 = pcVar35 + -1;
      bVar9 = (byte)pbVar11;
      *pbVar11 = *pbVar11 + bVar9;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *pbVar15,(char)param_1));
      *pbVar11 = *pbVar11 + bVar9;
      *pcVar35 = *pcVar35 + bVar6;
      *(byte *)((int)pbVar11 * 2) = *(byte *)((int)pbVar11 * 2) ^ bVar9;
      *pbVar11 = *pbVar11 + bVar9;
      *pbVar11 = *pbVar11 | bVar9;
      bVar42 = CARRY1((byte)*param_1,bVar6);
      *(byte *)param_1 = (byte)*param_1 + bVar6;
      cVar7 = bVar9 + 10 + bVar42;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),cVar7);
      puVar36 = unaff_ESI;
    } while (bVar9 < 0xf6 && !CARRY1(bVar9 + 10,bVar42));
    *pbVar11 = *pbVar11 + cVar7;
    in_stack_fffffff8 = (uint *)CONCAT22((short)((uint)in_stack_fffffff8 >> 0x10),in_ES);
    pcVar12 = (char *)((uint)pbVar11 | *unaff_EDI);
    puVar36 = (uint *)CONCAT22((short)((uint)pcVar35 >> 0x10),
                               CONCAT11((char)((uint)pcVar35 >> 8) + (byte)unaff_EBP[-0x19],
                                        (char)pcVar35));
    *pcVar12 = *pcVar12 + (char)pcVar12;
    bVar6 = (char)pcVar12 + 7;
    uVar46 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar12 >> 8),bVar6));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
    pcVar35 = (char *)uVar46;
    uVar24 = (undefined3)((ulonglong)uVar46 >> 8);
    cVar7 = (char)uVar46;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *pcVar35 = *pcVar35 + cVar7;
      in_EAX = (uint *)CONCAT31(uVar24,cVar7 + '-');
      unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
      bVar42 = CARRY4(*in_EAX,(uint)in_EAX);
      uVar13 = *in_EAX;
      *in_EAX = (uint)(*in_EAX + (int)in_EAX);
      if (SCARRY4(uVar13,(int)in_EAX)) {
        bVar42 = CARRY4(*in_EAX,(uint)in_EAX);
        bVar44 = SCARRY4(*in_EAX,(int)in_EAX);
        *in_EAX = (uint)(*in_EAX + (int)in_EAX);
        bVar6 = POPCOUNT(*in_EAX & 0xff);
        if (bVar44) goto code_r0x004029be;
        goto code_r0x0040294c;
      }
      do {
        in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + bVar42);
        *(byte *)param_2 = (byte)*param_2 + (char)param_1;
        bVar42 = (POPCOUNT((byte)*param_2) & 1U) == 0;
        if (bVar42) goto code_r0x004028e2;
code_r0x004028db:
        if (!bVar42) {
          unaff_EBX = CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 - (byte)*unaff_ESI);
          goto code_r0x0040287b;
        }
        *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
        in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'r');
        puStack_c = unaff_EBP;
code_r0x004028e2:
        uVar13 = *in_EAX;
        *in_EAX = (uint)(*in_EAX + (int)in_EAX);
        if (SCARRY4(uVar13,(int)in_EAX)) {
          if (*in_EAX == 0 || SCARRY4(uVar13,(int)in_EAX) != (int)*in_EAX < 0)
          goto code_r0x0040296d;
          goto code_r0x00402957;
        }
        puVar36 = (uint *)((int)puVar36 + -1);
        cVar7 = (char)in_EAX;
        *(byte *)in_EAX = (byte)*in_EAX + cVar7;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) |
                                            *(byte *)((int)param_1 + 0x16d7207),(char)param_1));
        pbVar11 = (byte *)((int)in_EAX + 0x7d);
        bVar6 = *pbVar11;
        bVar33 = (byte)((uint)param_2 >> 8);
        bVar9 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar33;
        puVar45 = (uint *)((uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar9,bVar33) * 0x800 |
                           (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                           (uint)((char)*pbVar11 < '\0') * 0x80 | (uint)(*pbVar11 == 0) * 0x40 |
                           (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar11) & 1U) == 0) * 4 |
                          (uint)CARRY1(bVar6,bVar33));
        *(byte *)in_EAX = (byte)*in_EAX + cVar7;
        pbVar11 = (byte *)(CONCAT31((int3)((uint)in_EAX >> 8),cVar7 + '+') ^ *unaff_EDI);
        if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) != 0) goto code_r0x00402898;
        bVar6 = (byte)pbVar11;
        *pbVar11 = *pbVar11 + bVar6;
        in_EAX = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6 + 0x72);
        if (bVar6 < 0x8e && (byte)(bVar6 + 0x72) != '\0') {
          uVar41 = in_CS;
          if (SCARRY1(bVar6,'r')) goto code_r0x00402974;
        }
        else {
          *(byte *)((int)in_EAX + 0x6f) = *(byte *)((int)in_EAX + 0x6f) + bVar33;
        }
code_r0x00402905:
        uVar46 = CONCAT44(param_2,in_EAX);
        puVar36 = (uint *)((int)puVar36 + -1);
        cVar7 = (char)in_EAX;
        *(byte *)in_EAX = (byte)*in_EAX + cVar7;
        bVar6 = (byte)((uint)param_1 >> 8) | (byte)*param_1;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
        in_ES = (ushort)puStack_c;
        if ((char)bVar6 < '\x01') {
          *(byte *)in_EAX = (byte)*in_EAX + cVar7;
          unaff_EDI = (uint *)((int)unaff_EDI - unaff_EBP[-0x19]);
          goto code_r0x00402929;
        }
        *(byte *)in_EAX = (byte)*in_EAX + cVar7;
        puStack_c = (uint *)0x40291c;
        uVar46 = func_0x7346291c(in_stack_fffffff8,puVar45);
        *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
        param_1 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                                   (byte)extraout_ECX | *(byte *)((ulonglong)uVar46 >> 0x20));
        in_stack_fffffff8 = (uint *)CONCAT22((short)((uint)in_stack_fffffff8 >> 0x10),in_ES);
        puVar45 = puVar36;
        while( true ) {
          pcVar35 = (char *)((int)uVar46 * 2);
          *pcVar35 = *pcVar35 - (char)param_1;
          uVar13 = *puVar36;
          cVar7 = (char)((uint)param_1 >> 8);
          *(byte *)puVar36 = (byte)*puVar36 + cVar7;
          if (SCARRY1((byte)uVar13,cVar7) == (char)(byte)*puVar36 < '\0') {
            pbVar11 = (byte *)((int)unaff_EDI + (int)uVar46);
            *pbVar11 = *pbVar11 + (char)uVar46;
            bVar6 = *pbVar11;
            goto code_r0x004028c8;
          }
code_r0x00402929:
          param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
          cVar7 = (char)uVar46;
          *(char *)uVar46 = *(char *)uVar46 + cVar7;
          uVar24 = (undefined3)((ulonglong)uVar46 >> 8);
          bVar6 = cVar7 + 7;
          in_EAX = (uint *)CONCAT31(uVar24,bVar6);
          bVar9 = (byte)((ulonglong)uVar46 >> 0x28);
          if ((POPCOUNT(bVar6) & 1U) != 0) break;
          *(byte *)in_EAX = (byte)*in_EAX + bVar6;
          pcVar35 = (char *)CONCAT31(uVar24,cVar7 + '3');
          uVar30 = (undefined2)((uint)puVar36 >> 0x10);
          uVar34 = SUB41(puVar36,0);
          bVar6 = (char)((uint)puVar36 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar6);
          puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar34));
          *pcVar35 = *pcVar35 + cVar7 + '3';
          cVar8 = cVar7 + ':';
          in_EAX = (uint *)CONCAT31(uVar24,cVar8);
          if ((POPCOUNT(cVar8) & 1U) != 0) {
            bVar6 = bVar6 | *(byte *)((int)param_2 + 7);
            puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(bVar6,uVar34));
            bVar42 = (POPCOUNT(bVar6) & 1U) == 0;
            goto code_r0x004028db;
          }
          *(byte *)in_EAX = (byte)*in_EAX + cVar8;
          in_EAX = (uint *)(CONCAT31(uVar24,cVar7 + 'b') & 0xffffff72 | 0x2d2b0000);
          pbVar11 = (byte *)((int)in_EAX + 0x72);
          bVar44 = SCARRY1(*pbVar11,bVar9);
          *pbVar11 = *pbVar11 + bVar9;
          bVar6 = POPCOUNT(*pbVar11);
code_r0x0040294c:
          if ((bVar6 & 1) == 0) {
            *(byte *)((int)in_EAX + 0x72) =
                 *(byte *)((int)in_EAX + 0x72) + (char)((uint)param_2 >> 8);
          }
          else if (bVar44) {
            unaff_EBP = (uint *)*unaff_EBP;
            cVar7 = cRamc9721806;
            goto code_r0x004029c4;
          }
          unaff_EBP = (uint *)0x7e700001;
          puStack_c = (uint *)CONCAT22(puStack_c._2_2_,in_SS);
code_r0x00402957:
          unaff_EDI = in_stack_fffffff8;
          *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
          cVar7 = (char)in_EAX + '(';
          in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),cVar7);
          *(byte *)in_EAX = (byte)*in_EAX + cVar7;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | (byte)*in_EAX,
                                              (char)param_1));
          *(byte *)in_EAX = (byte)*in_EAX + cVar7;
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                     CONCAT11((byte)((uint)param_2 >> 8) | (byte)puVar36[0x18],
                                              (char)param_2));
          unaff_ESI = puStack_c;
          in_stack_fffffff8 = unaff_EDI;
code_r0x00402966:
          *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
          bVar6 = (byte)((uint)puVar36 >> 8) | *(byte *)((int)param_2 + 7);
          puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar6,(char)puVar36));
          if ((POPCOUNT(bVar6) & 1U) != 0) {
            in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + -0x21);
            goto code_r0x00402905;
          }
code_r0x0040296d:
          *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
          in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '~');
code_r0x00402972:
          *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
          uVar41 = in_CS;
code_r0x00402974:
          bVar6 = 0xe9 < (byte)in_EAX;
          in_CS = 0x2d0a;
          uVar46 = func_0x00006128(uVar41);
          puVar39 = (uint *)uVar46;
          piVar20 = (int *)((int)((ulonglong)uVar46 >> 0x20) + -0x3d);
          *piVar20 = (int)((int)unaff_ESI + (uint)bVar6 + *piVar20);
          bVar42 = SCARRY4(*puVar39,(int)puVar39);
          *puVar39 = *puVar39 + (int)puVar39;
          uVar13 = *puVar39;
          param_1 = extraout_ECX_00;
code_r0x00402982:
          bVar6 = POPCOUNT(uVar13 & 0xff);
          if (bVar42) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                       CONCAT11((byte)((uint)param_1 >> 8) |
                                                *(byte *)((ulonglong)uVar46 >> 0x20),(char)param_1))
            ;
            goto code_r0x00402991;
          }
code_r0x00402984:
          pcVar35 = (char *)((ulonglong)uVar46 >> 0x20);
          if ((bVar6 & 1) == 0) {
            *(char *)uVar46 = *(char *)uVar46 + (char)uVar46;
            *pcVar35 = *pcVar35 + (char)param_1;
            uVar46 = CONCAT44(CONCAT22((short)((ulonglong)uVar46 >> 0x30),
                                       CONCAT11((char)((ulonglong)uVar46 >> 0x28) - pcVar35[0x1f],
                                                (char)((ulonglong)uVar46 >> 0x20))),
                              CONCAT31((int3)((ulonglong)uVar46 >> 8),(char)uVar46 + '('));
code_r0x00402991:
            param_2 = (uint *)((ulonglong)uVar46 >> 0x20);
            pbVar11 = (byte *)uVar46;
            bVar6 = (byte)uVar46;
            bVar42 = CARRY1(bVar6,*pbVar11);
            in_EAX = (uint *)CONCAT31((int3)((ulonglong)uVar46 >> 8),bVar6 + *pbVar11);
            cVar7 = bVar6 + *pbVar11;
            if (SCARRY1(bVar6,*pbVar11)) goto code_r0x004029c4;
code_r0x00402995:
            param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                       CONCAT11(((char)((uint)param_2 >> 8) -
                                                *(byte *)((int)param_2 + 0x6b)) - bVar42,
                                                (char)param_2));
            bVar6 = (byte)in_EAX;
            bVar42 = CARRY1(bVar6,(byte)*in_EAX);
            bVar44 = SCARRY1(bVar6,(byte)*in_EAX);
            in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + (byte)*in_EAX);
            do {
              if (!bVar44) {
                unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar42 + *in_EAX);
                pbVar11 = (byte *)((int)in_EAX + *in_EAX);
                bVar9 = (byte)pbVar11;
                *pbVar11 = *pbVar11 + bVar9;
                *(byte *)param_1 = (byte)*param_1 + (char)param_1;
                bVar6 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar9;
                *unaff_EDI = (uint)((int)puVar36 + (uint)CARRY1(bVar6,bVar9) + *unaff_EDI);
                *(uint *)((int)unaff_EBP + 0x100002b) =
                     *(uint *)((int)unaff_EBP + 0x100002b) | (uint)param_1;
                uVar24 = (undefined3)((uint)pbVar11 >> 8);
                bVar9 = bVar9 | (byte)*unaff_ESI;
                in_EAX = (uint *)CONCAT31(uVar24,bVar9);
                in_stack_fffffff8 = (uint *)CONCAT22((short)((uint)in_stack_fffffff8 >> 0x10),in_SS)
                ;
                uVar13 = *in_EAX;
                uVar1 = *in_EAX;
                *in_EAX = (uint)(*in_EAX + (int)in_EAX);
                if (SCARRY4(uVar1,(int)in_EAX)) {
                  *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar36;
                  *(byte *)param_2 = (byte)*param_2 + (char)param_1;
                  *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)puVar36;
                }
                else {
                  in_SS = in_ES;
                  if (CARRY4(uVar13,(uint)in_EAX)) goto code_r0x00402972;
                  bVar42 = CARRY1(bVar9,(byte)*in_EAX);
                  bVar44 = SCARRY1(bVar9,(byte)*in_EAX);
                  in_EAX = (uint *)CONCAT31(uVar24,bVar9 + (byte)*in_EAX);
code_r0x004029be:
                  if (!bVar44) {
                    puStack_c = (uint *)CONCAT22(puStack_c._2_2_,in_ES);
                    *(byte *)((int)param_2 + -0x37) =
                         (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar42;
                    cVar7 = cRamc9721806;
code_r0x004029c4:
                    cRamc9721806 = cVar7;
                    bVar6 = (byte)in_EAX;
                    bVar42 = CARRY1(bVar6,(byte)*in_EAX);
                    bVar44 = SCARRY1(bVar6,(byte)*in_EAX);
                    in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + (byte)*in_EAX);
                    goto code_r0x004029c6;
                  }
                }
                bVar6 = (byte)param_1;
                bVar42 = CARRY1((byte)*param_2,bVar6);
                bVar44 = SCARRY1((byte)*param_2,bVar6);
                *(byte *)param_2 = (byte)*param_2 + bVar6;
                if (bVar42) goto code_r0x00402966;
              }
code_r0x004029c6:
              if (bVar44) {
                in_ES = (ushort)puStack_c;
                goto code_r0x00402966;
              }
              *(uint *)((int)param_2 + -0x23) =
                   (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar42;
              uVar13 = *in_EAX;
              bVar9 = (byte)in_EAX;
              uVar1 = *in_EAX;
              uVar24 = (undefined3)((uint)in_EAX >> 8);
              bVar6 = bVar9 + (byte)*in_EAX;
              in_EAX = (uint *)CONCAT31(uVar24,bVar6);
              if (SCARRY1(bVar9,(byte)uVar1)) goto code_r0x00402972;
              cVar7 = (char)param_2;
              bVar33 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                       CARRY1(bVar9,(byte)uVar13);
              param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar33,cVar7));
              puVar39 = (uint *)CONCAT31(uVar24,bVar6 + (byte)*in_EAX);
              bVar9 = (byte)param_1;
              if (SCARRY1(bVar6,(byte)*in_EAX)) {
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                uVar46 = CONCAT44(param_2,(int)puVar39 + -0x1c37211);
                pcVar35 = (char *)((int)puVar39 + -0x1c3720a);
                *pcVar35 = *pcVar35 + bVar33;
                bVar6 = POPCOUNT(*pcVar35);
                goto code_r0x00402984;
              }
              unaff_ESI = (uint *)((int)unaff_ESI +
                                  (-(uint)CARRY1(bVar6,(byte)*in_EAX) - *(int *)((int)param_2 + 5)))
              ;
              bVar42 = SCARRY4((int)puVar39,*puVar39);
              uVar13 = (int)puVar39 + *puVar39;
              uVar46 = CONCAT44(param_2,uVar13);
              if (bVar42) goto code_r0x00402982;
              bVar6 = (byte)uVar13 + 0x8e;
              uVar14 = CONCAT31((int3)(uVar13 >> 8),bVar6 - CARRY4((uint)puVar39,*puVar39));
              *puVar36 = (*puVar36 - uVar14) -
                         (uint)((byte)uVar13 < 0x72 || bVar6 < CARRY4((uint)puVar39,*puVar39));
              pbVar11 = (byte *)(uVar14 - 0x5e);
              bVar6 = *pbVar11;
              *pbVar11 = *pbVar11 + bVar33;
              uVar13 = (uint)CARRY1(bVar6,bVar33);
              uVar1 = uVar14 - 0x32d72;
              in_EAX = (uint *)(uVar1 - uVar13);
              if (SBORROW4(uVar14,0x32d72) != SBORROW4(uVar1,uVar13)) goto code_r0x00402992;
              uVar41 = in_DS;
              if (uVar14 < 0x32d72 || uVar1 < uVar13) {
                *(byte *)unaff_EBP = (byte)*unaff_EBP - (char)((uint)in_EAX >> 8);
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                puVar45 = unaff_ESI + 1;
                out(*unaff_ESI,CONCAT11(bVar33,cVar7));
                *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
                goto code_r0x00402a3e;
              }
              bVar42 = CARRY4((uint)in_EAX,*in_EAX);
              bVar44 = SCARRY4((int)in_EAX,*in_EAX);
              in_EAX = (uint *)((int)in_EAX + *in_EAX);
              if (!bVar44) {
                uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,in_ES);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar42;
                bVar6 = (byte)in_EAX;
                *(byte *)((int)param_2 + (int)unaff_EBP) =
                     *(byte *)((int)param_2 + (int)unaff_EBP) + bVar6;
                *(byte *)puVar36 = (byte)*puVar36 + cVar7;
                *(byte *)puVar36 = (byte)*puVar36 ^ bVar6;
                bVar27 = (byte)((uint)param_1 >> 8);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar27;
                *(byte *)in_EAX = (byte)*in_EAX + bVar6;
                pbVar15 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6 | (byte)*in_EAX);
                *(byte *)param_1 = (byte)*param_1 + cVar7;
                bVar37 = *pbVar15;
                uVar30 = (undefined2)((uint)param_1 >> 0x10);
                param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar37,bVar9));
                pbVar15 = pbVar15 + (uint)CARRY1(bVar27,*pbVar15) + *(int *)pbVar15;
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                unaff_EBP = (uint *)((int)unaff_EBP + iRam0355720b);
                pbVar11 = pbVar15 + 0x73;
                bVar6 = *pbVar11;
                *pbVar11 = *pbVar11 + bVar33;
                uVar24 = (undefined3)((uint)pbVar15 >> 8);
                bVar6 = (char)pbVar15 + CARRY1(bVar6,bVar33);
                pcVar35 = (char *)CONCAT31(uVar24,bVar6);
                *(byte *)param_2 = (byte)*param_2 + bVar9;
                if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
                  in_SS = in_ES;
                }
                puVar39 = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x17));
                *pcVar35 = *pcVar35 + bVar6;
                cVar7 = bVar6 + 2;
                in_EAX = (uint *)CONCAT31(uVar24,cVar7);
                if (bVar6 < 0xfe) {
                  *in_EAX = (uint)(*in_EAX + (int)in_EAX);
                  goto code_r0x00402a8f;
                }
                *(byte *)in_EAX = (byte)*in_EAX + cVar7;
                uVar13 = *param_2;
                puVar45 = (uint *)((int)unaff_ESI + puVar36[0x19]);
                *(byte *)in_EAX = (byte)*in_EAX + cVar7;
                param_1 = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar37 | (byte)*in_EAX,
                                                           bVar9 | (byte)uVar13));
                unaff_EDI = puVar39;
                goto code_r0x00402a36;
              }
            } while( true );
          }
        }
        *(byte *)((int)unaff_EBP + 0x13b720b) = *(byte *)((int)unaff_EBP + 0x13b720b) + bVar6;
        pbVar11 = (byte *)((int)in_EAX + 0x73);
        bVar42 = CARRY1(*pbVar11,bVar9);
        *pbVar11 = *pbVar11 + bVar9;
      } while( true );
    }
    *(byte *)param_2 = (byte)*param_2 + (char)param_1;
    cVar8 = (char)puVar36 - (byte)*unaff_ESI;
    unaff_EBX = CONCAT22((short)((uint)puVar36 >> 0x10),
                         CONCAT11((char)((uint)puVar36 >> 8) +
                                  *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar8) + 0x12),cVar8
                                 ));
    *pcVar35 = *pcVar35 + cVar7;
    bVar6 = cVar7 + 0x2aU & (byte)*param_2;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)((int)unaff_EBP + 0x12));
    *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
    in_EAX = (uint *)CONCAT31(uVar24,bVar6 + 0x2a);
  } while( true );
code_r0x00402992:
  pbVar11 = (byte *)((int)in_EAX + 0x2a);
  bVar42 = CARRY1(*pbVar11,bVar33);
  *pbVar11 = *pbVar11 + bVar33;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)in_EAX) = *(byte *)(in_GS_OFFSET + (int)in_EAX) + (char)in_EAX;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                      (char)param_1));
  *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
code_r0x00402a3e:
  uVar24 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = (byte)in_EAX | (byte)*puVar45;
  pcVar35 = (char *)CONCAT31(uVar24,bVar6);
  if ((char)bVar6 < '\0') {
    *pcVar35 = *pcVar35 + bVar6;
    cVar7 = bVar6 + 2;
    piVar20 = (int *)CONCAT31(uVar24,cVar7);
    if ((POPCOUNT(cVar7) & 1U) == 0) {
      *(char *)piVar20 = (char)*piVar20 + cVar7;
      bVar6 = bVar6 + 0x71;
      pcVar12 = (char *)CONCAT31(uVar24,bVar6);
      pcVar35 = (char *)segment(uVar41,(short)puVar36 + (short)puVar45);
      *pcVar35 = *pcVar35 + bVar6;
      uVar13 = unaff_EDI[0x1a];
      *pcVar12 = *pcVar12 + bVar6;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | (byte)uVar13 |
                                          *(byte *)((int)unaff_EDI + 0x69),(char)param_1));
      *pcVar12 = *pcVar12 + bVar6;
      bVar6 = bVar6 | (byte)*param_2;
      pcVar35 = (char *)CONCAT31(uVar24,bVar6);
      if ((POPCOUNT(bVar6) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
    out(*puVar45,(short)param_2);
  }
  else {
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) + (byte)puVar36[6],(char)puVar36)
                              );
code_r0x00402a5d:
    *pcVar35 = *pcVar35 + (char)pcVar35;
    piVar20 = (int *)CONCAT31((int3)((uint)pcVar35 >> 8),(char)pcVar35 + 'o');
    unaff_ESI = puVar45;
  }
code_r0x00402a61:
  pcVar35 = (char *)segment(uVar41,(short)puVar36 + (short)unaff_ESI);
  *pcVar35 = *pcVar35 + (char)piVar20;
  cVar7 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)unaff_EDI[0x1a],cVar7));
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  uVar30 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar30);
  piVar16 = (int *)((int)piVar20 + *piVar20);
  puVar45 = unaff_ESI;
  puVar39 = unaff_EDI;
  uVar40 = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar7;
  puVar45 = unaff_ESI + (uint)bVar43 * -2 + 1;
  out(*unaff_ESI,uVar30);
code_r0x00402a75:
  bVar6 = (byte)((uint)param_1 >> 8) | (byte)*param_2;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
  piVar20 = (int *)(uint)(byte)*puVar36;
  *(byte *)puVar45 = (byte)*puVar45 - bVar6;
  puVar39 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  out(*puVar45,(short)param_2);
  bVar6 = in((short)param_2);
  *(byte *)puVar39 = bVar6;
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
  iVar18 = *piVar20;
  cVar7 = in(1);
  puVar17 = (uint *)CONCAT31((int3)((uint)((int)piVar20 + *piVar20) >> 8),cVar7);
  *(char *)puVar17 = (char)*puVar17 + cVar7;
  in_EAX = (uint *)((uint)puVar17 | *puVar17);
  *(byte *)param_1 = (byte)*param_1 + (char)param_2;
  puVar45 = (uint *)((int)puVar45 + (((uint)bVar43 * -8 + 4) - iVar18));
  puVar39 = (uint *)((int)puVar39 + (uint)bVar43 * -2 + 1);
  in_SS = in_ES;
  while( true ) {
    bVar6 = (byte)in_EAX | (byte)*param_2;
    in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar6);
    unaff_EDI = puVar39;
    if ((POPCOUNT(bVar6) & 1U) != 0) break;
    *(byte *)in_EAX = (byte)*in_EAX + bVar6;
code_r0x00402a9b:
    uVar24 = (undefined3)((uint)in_EAX >> 8);
    cVar7 = (char)in_EAX + '\r';
    piVar16 = (int *)CONCAT31(uVar24,cVar7);
    *(uint *)((int)unaff_EBP + 2) = *(uint *)((int)unaff_EBP + 2) | (uint)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    *(byte *)(puVar45 + -0xc800000) = (byte)puVar45[-0xc800000] + (char)param_2;
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    cVar8 = (char)param_1;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar8;
      unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
      out(*puVar45,(short)param_2);
      piVar20 = (int *)((longlong)*piVar16 * 0x7b020a00);
      *(char *)piVar20 =
           (char)*piVar20 - ((longlong)(int)piVar20 != (longlong)*piVar16 * 0x7b020a00);
      pbVar11 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar11 = *pbVar11;
      goto code_r0x00402a61;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    puVar39 = (uint *)CONCAT31(uVar24,(char)in_EAX + ':');
    unaff_ESI = (uint *)((uint)puVar45 | *(uint *)((int)param_2 + -0x79));
    iVar18 = (int)puVar39 + *puVar39;
    if (SCARRY4((int)puVar39,*puVar39)) {
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) + (byte)unaff_ESI[(int)puVar36]
                                          ,(char)puVar36));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar18;
      puVar39 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar24 = (undefined3)((uint)iVar18 >> 8);
    cVar7 = (char)iVar18 + CARRY4((uint)puVar39,*puVar39);
    piVar20 = (int *)CONCAT31(uVar24,cVar7);
    *(byte *)param_2 = (byte)*param_2 + cVar8;
    bVar42 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar42) && (bVar42)) goto code_r0x00402a61;
    *(char *)piVar20 = (char)*piVar20 + cVar7;
    cVar10 = cVar7 + '(';
    pcVar35 = (char *)CONCAT31(uVar24,cVar10);
    puVar39 = unaff_EDI + (uint)bVar43 * -2 + 1;
    uVar13 = in((short)param_2);
    *unaff_EDI = uVar13;
    *pcVar35 = *pcVar35 + cVar10;
    param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | bRama07b0222,cVar8));
    *pcVar35 = *pcVar35 + cVar10;
    pcVar35 = (char *)CONCAT31(uVar24,cVar7 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar45 = (uint *)((int)(unaff_ESI + (uint)bVar43 * -2 + 1) + (uint)bVar43 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar43 * -2 + 1],(short)param_2);
    bVar6 = (byte)pcVar35;
    *pcVar35 = *pcVar35 + bVar6;
    puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(byte)puVar36 | (byte)*puVar39);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pcVar35 >> 8);
    bVar6 = bVar6 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar7 = bVar6 + (0x9f < bVar6 | in_AF * (bVar6 < 6)) * -0x60 + (byte)*param_2;
    piVar20 = (int *)CONCAT31(uVar24,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar20 = (char)*piVar20 + cVar7;
    piVar16 = (int *)CONCAT31(uVar24,cVar7 + '\x17');
    uVar40 = in_ES;
code_r0x00402ae3:
    out(*puVar45,(short)param_2);
    unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1 + (uint)bVar43 * -2 + 1;
    out(puVar45[(uint)bVar43 * -2 + 1],(short)param_2);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
code_r0x00402ae7:
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((byte)((uint)puVar36 >> 8) | (byte)unaff_EBP[-0x18],
                                        (char)puVar36));
    cVar7 = (char)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar7;
    uVar24 = (undefined3)((uint)piVar16 >> 8);
    bVar6 = cVar7 + 2;
    in_EAX = (uint *)CONCAT31(uVar24,bVar6);
    in_ES = uVar40;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      *(byte *)in_EAX = (byte)*in_EAX + bVar6;
      cVar7 = cVar7 + '}';
      in_EAX = (uint *)CONCAT31(uVar24,cVar7);
      *(byte *)in_EAX = ((byte)*in_EAX - cVar7) - (0x84 < bVar6);
      pbVar11 = (byte *)((int)param_2 + (int)in_EAX);
      *pbVar11 = *pbVar11 + cVar7;
      bVar6 = POPCOUNT(*pbVar11);
      puVar45 = unaff_ESI;
code_r0x00402af9:
      in_ES = uVar40;
      unaff_EDI = puVar39;
      if ((bVar6 & 1) == 0) {
        *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
        bVar6 = (byte)param_1;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,in_SS);
        unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
        out(*puVar45,(short)param_2);
        uVar13 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar6;
        iVar18 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'o') + *(int *)((int)param_2 * 2)
                 + (uint)CARRY1((byte)uVar13,bVar6);
        pcVar35 = (char *)CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '(');
        while( true ) {
          uVar13 = *param_2;
          bVar9 = (byte)param_1;
          *(byte *)param_2 = (byte)*param_2 + bVar9;
          pcVar35 = pcVar35 + (uint)CARRY1((byte)uVar13,bVar9) + iRam73280512;
          bVar6 = (byte)pcVar35;
          *pcVar35 = *pcVar35 + bVar6;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((byte)((uint)param_1 >> 8) | bRam7d160243,bVar9));
          bVar43 = ((uint)uStackY_2c & 0x400) != 0;
          in_AF = ((uint)uStackY_2c & 0x10) != 0;
          *pcVar35 = *pcVar35 + bVar6;
          uVar24 = (undefined3)((uint)pcVar35 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar24,bVar6 + 2) + (uint)(0xfd < bVar6);
          cVar7 = bVar6 + 4;
          if (SCARRY1(bVar6 + 2,'\x02') != cVar7 < '\0') break;
          *(char *)CONCAT31(uVar24,cVar7) = *(char *)CONCAT31(uVar24,cVar7) + cVar7;
          iVar18 = CONCAT31(uVar24,bVar6 + 0x16);
code_r0x00402b33:
          piVar16 = (int *)(iVar18 + 0xe2802);
          *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)param_1 >> 8);
          uVar40 = in_ES;
          in_ES = in_SS;
          while( true ) {
            bVar9 = (byte)puVar36 | (byte)((uint)param_1 >> 8);
            puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar9);
            *piVar16 = (int)(*piVar16 + (int)piVar16);
            cVar7 = (char)piVar16;
            *(byte *)param_2 = (byte)*param_2 + cVar7;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar16 = (char)*piVar16 + cVar7;
            uVar13 = CONCAT31((int3)((uint)piVar16 >> 8),cVar7 + '\x13');
            in_EAX = (uint *)(uVar13 + 0x19061224 + (uint)(0x1f9edfd < uVar13));
            uVar14 = (uint)(0xe4ffffdd < uVar13 + 0xfe061202 ||
                           CARRY4(uVar13 + 0x19061224,(uint)(0x1f9edfd < uVar13)));
            uVar13 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)in_EAX) + uVar14);
            bVar6 = POPCOUNT(*unaff_ESI & 0xff);
            puVar45 = unaff_ESI;
            if ((SCARRY4(uVar13,(int)in_EAX) != SCARRY4((int)(uVar1 + (int)in_EAX),uVar14)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar6 = (byte)in_EAX;
            *(byte *)in_EAX = (byte)*in_EAX + bVar6;
            iVar18 = CONCAT31((int3)((uint)in_EAX >> 8),bVar6 + 2) + 0x9d7d + (uint)(0xfd < bVar6);
            bVar6 = (byte)param_2 | (byte)*param_2;
            uVar13 = *puVar36;
            *(byte *)puVar36 = (byte)*puVar36 + bVar9;
            pcVar35 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '\x12') + 0x228b26
                               + *puVar39 + (uint)CARRY1((byte)uVar13,bVar9));
            cVar7 = bVar6 + (byte)*param_1;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar7);
            if (SCARRY1(bVar6,(byte)*param_1) == cVar7 < '\0') break;
            *pcVar35 = *pcVar35 + (char)pcVar35;
            cVar7 = (char)pcVar35 + '\x02';
            pcVar35 = (char *)CONCAT31((int3)((uint)pcVar35 >> 8),cVar7);
            bVar6 = POPCOUNT(cVar7);
            uVar40 = in_ES;
code_r0x00402b7a:
            puVar45 = unaff_ESI;
            if ((bVar6 & 1) != 0) break;
            while( true ) {
              cVar7 = (char)pcVar35;
              *pcVar35 = *pcVar35 + cVar7;
              uVar24 = (undefined3)((uint)pcVar35 >> 8);
              pcVar35 = (char *)CONCAT31(uVar24,cVar7 + '\x13');
              *(byte *)param_1 = (byte)*param_1 | (byte)param_2;
              *(byte *)puVar39 = (byte)*puVar39 | (byte)param_2;
              *param_2 = (uint)(pcVar35 + *param_2);
              uVar30 = (undefined2)((uint)puVar36 >> 0x10);
              uVar34 = SUB41(puVar36,0);
              cVar8 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + -0x5f);
              puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar34));
              *pcVar35 = *pcVar35 + cVar7 + '\x13';
              piVar16 = (int *)CONCAT31(uVar24,cVar7 + -0x7a);
              uVar13 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)param_1;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar13,(char)param_1) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar16 = (char)*piVar16 + cVar7 + -0x7a;
              cVar10 = cVar7 + -0x78;
              piVar16 = (int *)CONCAT31(uVar24,cVar10);
              uVar4 = uVar40;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *(char *)piVar16 = (char)*piVar16 + cVar10;
              pcVar35 = (char *)CONCAT31(uVar24,cVar7 + -0x65);
              *param_1 = *param_1 | (uint)param_2;
              *puVar39 = *puVar39 | (uint)param_2;
              pbVar11 = (byte *)((int)param_1 + -1);
              cVar8 = cVar8 + *(byte *)((int)puVar36 + -0x5e);
              puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar34));
              *pcVar35 = *pcVar35 + cVar7 + -0x65;
              bVar6 = cVar7 + 10;
              puVar17 = (uint *)CONCAT31(uVar24,bVar6);
              bVar9 = (byte)pbVar11;
              *(byte *)param_2 = (byte)*param_2 + bVar9;
              unaff_ESI = puVar45 + (uint)bVar43 * -2 + 1;
              out(*puVar45,(short)param_2);
              uVar13 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar9;
              uVar2 = (uint)CARRY1((byte)uVar13,bVar9);
              uVar13 = *param_2;
              uVar1 = *param_2;
              pbVar15 = pbVar11 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar8;
              uVar14 = *param_2;
              unaff_EBP = (uint *)((uint)unaff_EBP | *puVar17);
              *(byte *)puVar17 = (char)*puVar17 + bVar6;
              param_1 = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                  (char)pbVar15 + (byte)uVar5 +
                                                  (CARRY4((uint)pbVar11,uVar13) ||
                                                  CARRY4((uint)(pbVar11 + uVar1),uVar2))));
              bVar43 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar17 = (char)*puVar17 + bVar6;
              bVar42 = 0xfd < bVar6;
              pcVar35 = (char *)CONCAT31(uVar24,cVar7 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar14);
code_r0x00402bd1:
              uVar13 = *puVar36;
              uVar1 = *puVar36;
              *puVar36 = (uint)((byte *)(uVar1 + (int)param_1) + bVar42);
              bVar6 = POPCOUNT(*puVar36 & 0xff);
              uVar40 = in_SS;
              if ((SCARRY4(uVar13,(int)param_1) != SCARRY4((int)(uVar1 + (int)param_1),(uint)bVar42)
                  ) == (int)*puVar36 < 0) goto code_r0x00402b7a;
              cVar7 = (char)pcVar35;
              *pcVar35 = *pcVar35 + cVar7;
              pcVar35 = (char *)CONCAT31((int3)((uint)pcVar35 >> 8),cVar7 + '\x02');
              if (SCARRY1(cVar7,'\x02') == (char)(cVar7 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar35 = *pcVar35 + (char)pcVar35;
                pcVar35 = (char *)(CONCAT31((int3)((uint)pcVar35 >> 8),(char)pcVar35 + '\x12') |
                                  *param_2);
                *(byte *)puVar39 = (byte)*puVar39 - (char)param_1;
                *pcVar35 = *pcVar35 + (char)pcVar35;
                puVar45 = (uint *)((int)param_2 - *unaff_ESI);
                bVar6 = (byte)puVar36 | (byte)((uint)param_1 >> 8);
                cVar7 = *pcVar35;
                uVar24 = (undefined3)((uint)pcVar35 >> 8);
                pcVar35 = (char *)CONCAT31(uVar24,cVar7);
                *pcVar35 = *pcVar35 + cVar7;
                pcVar12 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                           CONCAT11((char)((uint)puVar36 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),
                                                                       bVar6) + -0x5b),bVar6));
                *pcVar35 = *pcVar35 + cVar7;
                bVar42 = false;
                pcVar35 = (char *)(CONCAT31(uVar24,cVar7 + '\x13') | *puVar45);
                do {
                  bVar9 = (byte)param_1;
                  bVar6 = bVar9 + (byte)unaff_ESI[(int)puVar39 * 2];
                  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6 + bVar42);
                  uVar13 = (uint)(CARRY1(bVar9,(byte)unaff_ESI[(int)puVar39 * 2]) ||
                                 CARRY1(bVar6,bVar42));
                  pcVar19 = pcVar35 + 0x1b000019 + uVar13;
                  piVar20 = (int *)((int)puVar39 * 2 + 0x40000a5);
                  *piVar20 = (int)((int)param_1 +
                                  (uint)((char *)0xe4ffffe6 < pcVar35 ||
                                        CARRY4((uint)(pcVar35 + 0x1b000019),uVar13)) + *piVar20);
                  puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),(char)puVar45 + cRam00009d7d
                                            );
                  uVar24 = (undefined3)((uint)pcVar19 >> 8);
                  bVar6 = (char)pcVar19 + 0x12;
                  in_AF = 9 < (bVar6 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar24,bVar6 + in_AF * -6) & 0xffffff0f;
                  pcVar35 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar19 >> 8) - in_AF,
                                                      (char)uVar13));
                  puVar17 = (uint *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar24,bVar6));
                  while( true ) {
                    *pcVar35 = *pcVar35 + (char)pcVar35;
                    puVar45 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),
                                               (byte)puVar45 | (byte)*puVar45);
                    puVar39 = (uint *)((uint)puVar39 | (uint)unaff_ESI);
                    uVar13 = (uint)pcVar12 | (uint)unaff_ESI;
                    unaff_EBP = (uint *)((int)puVar17 + 1);
                    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,in_ES);
                    cVar7 = (char)(pcVar35 + 0x1b000019);
                    uVar24 = (undefined3)((uint)(pcVar35 + 0x1b000019) >> 8);
                    cVar8 = cVar7 + -0x13;
                    pcVar35 = (char *)CONCAT31(uVar24,cVar8);
                    uVar30 = (undefined2)(uVar13 >> 0x10);
                    cVar10 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar10,(byte)uVar13));
                    *pcVar35 = *pcVar35 + cVar8;
                    pcVar35 = (char *)(CONCAT31(uVar24,cVar7 + '\x19') | *puVar45);
                    bVar6 = (byte)pcVar35;
                    if ((POPCOUNT((uint)pcVar35 & 0xff) & 1U) != 0) {
                      pbVar11 = (byte *)((int)puVar45 + (int)pcVar35);
                      bVar42 = CARRY1(*pbVar11,bVar6);
                      *pbVar11 = *pbVar11 + bVar6;
                      param_2 = puVar45;
                      goto code_r0x00402bd1;
                    }
                    *pcVar35 = *pcVar35 + bVar6;
                    uVar24 = (undefined3)((uint)pcVar35 >> 8);
                    pcVar12 = (char *)CONCAT31(uVar24,bVar6 + 0x6f);
                    param_2 = (uint *)((int)puVar45 + 1);
                    *pcVar12 = *pcVar12 + bVar6 + 0x6f;
                    bVar9 = (byte)uVar13 | (byte)((uint)pcVar35 >> 8);
                    pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x5c);
                    cVar10 = cVar10 + *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),bVar9) + -0x5f);
                    puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar10,bVar9));
                    *pcVar35 = *pcVar35 + bVar6 + 0x5c;
                    pcVar35 = (char *)(CONCAT31(uVar24,bVar6 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar35 & 0xff) & 1U) != 0) {
                      *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)param_1 >> 8);
                      uStackY_2c = (uint *)((uint)uStackY_2c._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar35 = *pcVar35 + (char)pcVar35;
                    uVar24 = (undefined3)((uint)pcVar35 >> 8);
                    cVar7 = (char)pcVar35 + 'o';
                    puVar45 = (uint *)((int)puVar45 + 2);
                    *(char *)CONCAT31(uVar24,cVar7) = *(char *)CONCAT31(uVar24,cVar7) + cVar7;
                    pcVar12 = (char *)CONCAT31((int3)((uint)puVar36 >> 8),
                                               bVar9 | (byte)((uint)pcVar35 >> 8));
                    pcVar35 = (char *)(CONCAT31(uVar24,cVar7) | 2);
                    *(byte *)((int)puVar17 + -0x62) = *(byte *)((int)puVar17 + -0x62) + 1;
                    bVar6 = (byte)pcVar35;
                    *pcVar35 = *pcVar35 + bVar6;
                    bVar42 = 0xfd < bVar6;
                    cVar7 = bVar6 + 2;
                    pcVar35 = (char *)CONCAT31(uVar24,cVar7);
                    uVar41 = in_ES;
                    if (SCARRY1(bVar6,'\x02') != cVar7 < '\0') break;
                    *pcVar35 = *pcVar35 + cVar7;
                    bVar9 = bVar6 + 10;
                    pcVar35 = (char *)CONCAT31(uVar24,bVar9);
                    *pcVar35 = *pcVar35 - cVar10;
                    cVar8 = (char)param_1;
                    *(byte *)puVar45 = *(byte *)puVar45 + cVar8;
                    *(byte *)((int)puVar17 + -0x62) = *(byte *)((int)puVar17 + -0x62) + 1;
                    *pcVar35 = *pcVar35 + bVar9;
                    cVar7 = bVar6 + 0xc;
                    pcVar35 = (char *)CONCAT31(uVar24,cVar7);
                    if (SCARRY1(bVar9,'\x02') == cVar7 < '\0') {
                      *pcVar35 = *pcVar35 + cVar7;
                      *(byte *)param_1 = (byte)*param_1 - cVar10;
                      *(byte *)puVar45 = *(byte *)puVar45 + cVar8;
                      cVar7 = (bVar6 + 0x13) - (byte)param_1[0x13];
                      pcVar35 = (char *)CONCAT31(uVar24,cVar7);
                      *pcVar35 = *pcVar35 + cVar7;
                      pcVar19 = (char *)CONCAT31(uVar24,cVar7 + *pcVar35);
                      *pcVar19 = *pcVar19 + cVar7 + *pcVar35;
                      pcVar19 = pcVar19 + *param_1;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar35 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar35 = *pcVar35 + (char)pcVar35;
                      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),(byte)*param_1);
                      *pbVar11 = *pbVar11 + (byte)*param_1;
                      goto code_r0x00402c8d;
                    }
                    param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),
                                               cVar8 + *pcVar12 + (0xfd < bVar9));
                    *(byte *)puVar39 = (byte)*puVar39 - cVar10;
                    puVar17 = unaff_EBP;
                  }
                } while( true );
              }
              puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                         CONCAT11((char)((uint)puVar36 >> 8) +
                                                  *(byte *)((int)puVar36 + -99),(char)puVar36));
              puVar45 = unaff_ESI;
            }
            *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
            param_2 = (uint *)((int)param_2 - *puVar45);
            unaff_ESI = puVar45;
            uVar40 = in_ES;
            in_ES = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)param_1;
          pcVar35 = pcVar35 + -0x7d160243;
        }
        pcVar35 = (char *)CONCAT31(uVar24,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
    uVar13 = *in_EAX;
    *(byte *)in_EAX = (byte)*in_EAX + (byte)in_EAX;
    *puVar39 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar13,(byte)in_EAX) + *puVar39);
    puVar45 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar29 = (char)param_1;
      cVar26 = (char)((uint)param_1 >> 8) + (char)((uint)pbVar11 >> 8);
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar26,cVar29));
      cVar7 = (char)pbVar11;
      *pbVar11 = *pbVar11 + cVar7;
      pcVar35 = (char *)((int)pbVar11 * 2 + 0x1a10000);
      cVar10 = (char)((uint)pcVar12 >> 8);
      *pcVar35 = *pcVar35 + cVar10;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      pbVar11[-0x47ffffff] = pbVar11[-0x47ffffff] + cVar10;
      *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
      bVar9 = (byte)puVar45;
      *(byte *)puVar39 = (byte)*puVar39 + bVar9;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + bVar9;
      *pbVar11 = *pbVar11 + cVar7;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar10 = cVar10 + (byte)unaff_ESI[(int)pcVar12];
      pcVar35 = (char *)CONCAT22(uVar30,CONCAT11(cVar10,(char)pcVar12));
      pcVar35[(int)pbVar11] = pcVar35[(int)pbVar11] + cVar7;
      *(byte *)puVar45 = *(byte *)puVar45 - cVar10;
      *(byte *)puVar45 = *(byte *)puVar45 + cVar29;
      uVar24 = (undefined3)((uint)pbVar11 >> 8);
      bVar6 = cVar7 - *pbVar11;
      *pcVar35 = *pcVar35 + bVar9;
      *(byte *)puVar45 = *(byte *)puVar45 ^ bVar6;
      *(byte *)puVar45 = *(byte *)puVar45 + bVar6;
      *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
      uVar13 = *param_1;
      *(byte *)param_1 = (byte)*param_1 + bVar9;
      cVar8 = bVar6 + *(char *)CONCAT31(uVar24,bVar6) + CARRY1((byte)uVar13,bVar9);
      pcVar12 = (char *)CONCAT22(uVar30,CONCAT11(cVar10 + (byte)puVar17[-0x18],(char)pcVar12));
      *(char *)CONCAT31(uVar24,cVar8) = *(char *)CONCAT31(uVar24,cVar8) + cVar8;
      cVar10 = cVar8 + '\x12';
      pbVar11 = (byte *)CONCAT31(uVar24,cVar10);
      cVar7 = *pcVar12;
      *pcVar12 = *pcVar12 + cVar10;
      if (SCARRY1(cVar7,cVar10) != *pcVar12 < '\0') break;
code_r0x00402c8d:
      cVar7 = (char)pbVar11;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
      *(byte *)puVar45 = *(byte *)puVar45 + cVar7;
      *pbVar11 = *pbVar11 + cVar7;
    }
    *pbVar11 = *pbVar11 + cVar10;
    pbVar11 = (byte *)CONCAT31(uVar24,cVar8 + '$');
    *pbVar11 = *pbVar11 + cVar26;
    bVar6 = *(byte *)puVar45;
    *(byte *)puVar45 = *(byte *)puVar45 + cVar29;
    uVar40 = in_ES;
    uVar41 = in_DS;
  } while (SCARRY1(bVar6,cVar29) == (char)*(byte *)puVar45 < '\0');
  do {
    cVar7 = (char)pbVar11;
    *pbVar11 = *pbVar11 + cVar7;
    uVar24 = (undefined3)((uint)pbVar11 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar45;
    bVar9 = cVar7 + 0x24;
    cVar10 = (char)((uint)pcVar12 >> 8);
    pcVar12[-0x62] = pcVar12[-0x62] + cVar10;
    *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
    bVar6 = cVar7 + 0x2fU + (byte)*param_1;
    cVar8 = bVar6 + (0xf4 < bVar9);
    cVar7 = cVar8 + *(char *)CONCAT31(uVar24,cVar8) +
            (CARRY1(cVar7 + 0x2fU,(byte)*param_1) || CARRY1(bVar6,0xf4 < bVar9));
    pcVar35 = (char *)CONCAT31(uVar24,cVar7);
    *pcVar35 = *pcVar35 - (char)puVar45;
    *pcVar35 = *pcVar35 + cVar7;
    pcVar19 = (char *)((int)puVar45 - *puVar45);
    *(byte *)(unaff_ESI + (int)pcVar12) = (byte)unaff_ESI[(int)pcVar12] + cVar10;
    pcVar35[(int)unaff_EBP] = pcVar35[(int)unaff_EBP] + cVar7;
    *pcVar19 = *pcVar19 + (char)param_1;
    pcVar35 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                               CONCAT11((char)((uint)pbVar11 >> 8) - *pcVar19,cVar7));
    uVar13 = *puVar39;
    *pcVar35 = *pcVar35 - (char)((uint)pcVar19 >> 8);
    *pcVar35 = *pcVar35 + cVar7;
    uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar40);
    pbVar15 = (byte *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11(cVar10 - (byte)*unaff_ESI,(char)pcVar12));
    unaff_EBP = (uint *)((int)unaff_EBP + *(int *)(pbVar15 + (int)param_1));
    puVar36 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),(char)pcVar19 + (byte)uVar13);
    while( true ) {
      puVar45 = puVar36;
      uVar30 = (undefined2)((uint)pbVar15 >> 0x10);
      bVar37 = (char)((uint)pbVar15 >> 8) + pbVar15[0x18];
      *pcVar35 = *pcVar35 + (char)pcVar35;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),(char)pcVar35 + 'o');
      cVar7 = (char)param_1;
      *(byte *)puVar45 = (byte)*puVar45 + cVar7;
      uVar13 = *unaff_ESI;
      bVar33 = (byte)((uint)param_1 >> 8);
      bVar6 = *pbVar11;
      pbVar11 = pbVar11 + (uint)CARRY1(bVar33,*pbVar11) + *(int *)pbVar11;
      *(byte *)puVar45 = (byte)*puVar45 + cVar7;
      cVar8 = ((char)pbVar15 - (byte)uVar13) - (byte)*unaff_ESI;
      bVar9 = *(byte *)((int)puVar39 + 0x1a);
      *pbVar11 = *pbVar11 + (char)pbVar11;
      param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11(bVar33 + bVar6 + bVar9 | (byte)*puVar45,cVar7));
      pbVar11 = pbVar11 + *puVar45;
      if ((POPCOUNT((uint)pbVar11 & 0xff) & 1U) != 0) break;
      *pbVar11 = *pbVar11 + (char)pbVar11;
      bVar6 = (char)pbVar11 + 0x6f;
      pcVar35 = (char *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6);
      pcVar12 = (char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar37,(char)pbVar15)) >> 8),cVar8
                                 ) + -1);
      *pcVar35 = *pcVar35 + bVar6;
      *pcVar35 = *pcVar35 + bVar6;
      *pcVar12 = *pcVar12 + (byte)puVar45;
      *(byte *)((int)pcVar35 * 2) = *(byte *)((int)pcVar35 * 2) ^ bVar6;
      uVar3 = *(undefined6 *)pcVar35;
      uVar40 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar35 = (char *)uVar3;
      *pcVar35 = *pcVar35 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar35 = (char *)((uint)pcVar35 | 0x73110008);
      bVar37 = (byte)((uint)pcVar12 >> 8);
      *(byte *)puVar39 = (byte)*puVar39 - bVar37;
      *(byte *)puVar45 = (byte)*puVar45 + cVar7;
      puVar36 = unaff_ESI + (uint)bVar43 * -2 + 1;
      out(*unaff_ESI,(short)puVar45);
      *pcVar35 = *pcVar35;
      cVar7 = (char)pcVar35;
      *pcVar35 = *pcVar35 + cVar7;
      bVar6 = *(byte *)((int)unaff_EBP + -0x5a);
      uVar30 = (undefined2)((uint)pcVar12 >> 0x10);
      cVar8 = (char)pcVar12;
      *pcVar35 = *pcVar35 + cVar7;
      cVar7 = cVar7 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar7);
      param_1 = (uint *)(uVar13 | 0x73110000);
      unaff_ESI = puVar36 + (uint)bVar43 * -2 + 1;
      out(*puVar36,(short)puVar45);
      *(byte *)param_1 = (byte)*param_1;
      bVar33 = (byte)puVar45 | (byte)*puVar39;
      puVar36 = (uint *)CONCAT31((int3)((uint)puVar45 >> 8),bVar33);
      *(byte *)param_1 = (byte)*param_1 + cVar7;
      pcVar35 = (char *)(uVar13 | 0x7b1f1609);
      bVar43 = (uVar41 & 0x400) != 0;
      *(uint *)((int)puVar39 + -0x7d) = *(uint *)((int)puVar39 + -0x7d) | (uint)unaff_EBP;
      bVar9 = (byte)pcVar35;
      *pcVar35 = *pcVar35 + bVar9;
      bVar37 = bVar37 | bVar6 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar15 = (byte *)CONCAT22(uVar30,CONCAT11(bVar37,cVar8));
      *pcVar35 = *pcVar35 + bVar9;
      uVar24 = (undefined3)((uint)pcVar35 >> 8);
      unaff_ESI[(int)puVar39 * 2] =
           (uint)((int)puVar36 + (uint)(0xd2 < bVar9) + unaff_ESI[(int)puVar39 * 2]);
      bVar6 = bVar9 + 0x2d ^ *(byte *)CONCAT31(uVar24,bVar9 + 0x2d);
      pcVar35 = (char *)CONCAT31(uVar24,bVar6);
      uVar13 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar6;
      uVar41 = uVar40;
      if (CARRY1((byte)uVar13,bVar6)) {
        *pcVar35 = *pcVar35 + bVar6;
        bVar6 = bVar6 | pcVar35[0x4000019];
        pcVar35 = (char *)CONCAT31(uVar24,bVar6);
        if ('\0' < (char)bVar6) {
          *pcVar35 = *pcVar35 + bVar6;
          piVar20 = (int *)CONCAT31(uVar24,bVar6 + 0x28);
          *piVar20 = (int)piVar20 + (uint)(0xd7 < bVar6) + *piVar20;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar15 = *pbVar15 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar45 >> 8) | bVar37,bVar33);
          puVar36 = (uint *)CONCAT22((short)((uint)puVar45 >> 0x10),uVar31);
          uStackY_2c = (uint *)CONCAT22(uStackY_2c._2_2_,uVar40);
          bVar33 = in(uVar31);
          pbVar11 = (byte *)CONCAT31(uVar24,bVar33);
          bVar6 = *pbVar11;
          bVar42 = SCARRY1(*pbVar11,bVar33);
          *pbVar11 = *pbVar11 + bVar33;
          bVar9 = *pbVar11;
          puVar45 = unaff_ESI;
          in_SS = uVar40;
          if (!CARRY1(bVar6,bVar33)) goto code_r0x00402e19;
          *pbVar11 = *pbVar11 + bVar33;
          bVar27 = bVar27 | *pbVar11;
          param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar27,cVar7));
          pcVar35 = (char *)CONCAT31(uVar24,bVar33 + *pbVar11);
          *pbVar15 = *pbVar15 + bVar27;
        }
        uVar24 = (undefined3)((uint)pcVar35 >> 8);
        bVar9 = (byte)pcVar35 | (byte)*puVar36;
        pbVar11 = (byte *)CONCAT31(uVar24,bVar9);
        puVar45 = unaff_ESI + (uint)bVar43 * -2 + 1;
        out(*unaff_ESI,(short)puVar36);
        LOCK();
        bVar6 = *pbVar11;
        *pbVar11 = bVar9;
        UNLOCK();
        *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
        piVar20 = (int *)(CONCAT31(uVar24,bVar6) + -0x1b7e07);
        *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
        iVar18 = (int)param_1 - *(int *)pbVar15;
        bVar6 = *(byte *)((int)puVar39 + -0x7a);
        uVar31 = (undefined2)((uint)iVar18 >> 0x10);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        bVar9 = (char)((uint)iVar18 >> 8) + bVar6 | *(byte *)((int)puVar39 + 0x17);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        uVar24 = (undefined3)(CONCAT22(uVar31,CONCAT11(bVar9,(byte)iVar18)) >> 8);
        bVar6 = (byte)iVar18 | *pbVar15;
        param_1 = (uint *)CONCAT31(uVar24,bVar6);
        pbVar11 = (byte *)((int)piVar20 + *piVar20);
        puVar17 = puVar45;
        if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e0a;
        *(byte *)param_1 = (byte)*param_1 + bVar6;
        *(byte **)pbVar15 = (byte *)(*(int *)pbVar15 + (int)puVar36);
        piVar20 = (int *)CONCAT31(uVar24,bVar6 + 0x27);
        param_1 = (uint *)CONCAT22(uVar31,CONCAT11(bVar9 + *(byte *)((int)puVar39 + -0x79),bVar6));
        *(byte *)piVar20 = (char)*piVar20 + bVar6 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar12 = (char *)CONCAT22(uVar30,CONCAT11(bVar37 | *(byte *)((int)unaff_EBP + -0x62),cVar8));
  } while( true );
code_r0x00402dff:
  pbVar11 = (byte *)CONCAT22((short)((uint)piVar20 >> 0x10),
                             CONCAT11((byte)((uint)piVar20 >> 8) |
                                      *(byte *)((int)puVar36 + 0x2170411),(byte)piVar20));
  puVar17 = puVar45 + (uint)bVar43 * -2 + 1;
  out(*puVar45,(short)puVar36);
  *pbVar11 = (byte)piVar20;
  *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar11;
  *pbVar11 = *pbVar11 - cVar8;
  *pbVar11 = *pbVar11 + (char)pbVar11;
  bVar42 = false;
  bVar9 = (byte)((uint)param_1 >> 8) | bRam052b0603;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar9,(char)param_1));
  puVar45 = puVar17;
code_r0x00402e19:
  if (bVar9 == 0 || bVar42 != (char)bVar9 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cRam89280411;
  piVar20 = (int *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                            CONCAT11((byte)((uint)pbVar11 >> 8) |
                                     *(byte *)((int)puVar36 + 0x7190411),cRam89280411));
  *(char *)piVar20 = (char)*piVar20 + cRam89280411;
  cVar7 = (char)param_1;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar36,cVar7));
  puVar45 = (uint *)((int)puVar45 + *piVar20);
  pbVar11 = (byte *)((int)piVar20 + *piVar20);
  bVar9 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar9;
  *(byte *)puVar45 = (byte)*puVar45 + cVar7;
  bVar6 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar9;
  *(byte **)pbVar11 = (byte *)((int)unaff_EBP + (uint)CARRY1(bVar6,bVar9) + *(int *)pbVar11);
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),*pbVar11);
  *(byte *)puVar36 = (byte)*puVar36 + cVar7;
  puVar17 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(byte)puVar36 | (byte)*puVar36);
  pbVar11 = (byte *)((int)puVar17 + -0x43);
  *pbVar11 = *pbVar11 + (char)((uint)puVar36 >> 8);
  puVar36 = puVar17;
  puVar17 = puVar39;
  uVar41 = in_ES;
code_r0x00402e42:
  in_ES = in_SS;
  puVar39 = puVar17;
  in_SS = in_ES;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e6e;
  iVar18 = *(int *)((int)piVar20 + *piVar20);
  *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
  piVar20 = (int *)(iVar18 + -0x8c6f);
  puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                             CONCAT11((byte)((uint)puVar36 >> 8) | *(byte *)((int)puVar36 + -0x3f),
                                      (char)puVar36));
  pbVar21 = (byte *)((int)piVar20 + *piVar20);
  pbVar11 = pbVar21;
  puVar39 = uStackY_2c;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                             CONCAT11((byte)((uint)param_1 >> 8) | (byte)*puVar36,(char)param_1));
  puVar17 = puVar45 + (uint)bVar43 * -2 + 1;
  out(*puVar45,(short)puVar36);
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 + (byte)*puVar39);
  puVar45 = puVar17 + (uint)bVar43 * -2 + 1;
  out(*puVar17,(short)puVar36);
  uVar41 = in_ES;
  in_SS = uVar40;
code_r0x00402e6e:
  in_ES = uVar41;
  uVar24 = (undefined3)((uint)puVar36 >> 8);
  cVar7 = (char)puVar36 + (byte)*puVar39;
  puVar17 = puVar45 + (uint)bVar43 * -2 + 1;
  out(*puVar45,(short)CONCAT31(uVar24,cVar7));
  puVar36 = (uint *)CONCAT31(uVar24,cVar7 + (byte)*puVar39);
  puVar45 = puVar17 + (uint)bVar43 * -2 + 1;
  out(*puVar17,(short)puVar36);
  pbVar11 = (byte *)0x0;
  puVar17 = puVar39;
code_r0x00402e81:
  puVar39 = puVar17;
  bVar9 = (char)pbVar11 - *pbVar11;
  iVar18 = CONCAT31((int3)((uint)pbVar11 >> 8),bVar9);
  *pbVar15 = *pbVar15 + (char)puVar36;
  pbVar21 = (byte *)(iVar18 * 2);
  *pbVar21 = *pbVar21 ^ bVar9;
  pbVar21 = (byte *)(int)(short)iVar18;
  *pbVar21 = *pbVar21 + bVar9;
  *(byte *)puVar39 = (byte)*puVar39 + (byte)param_1;
  bVar6 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar9;
  *(byte **)(pbVar15 + -0x73) =
       (byte *)((int)puVar45 + (uint)CARRY1(bVar6,bVar9) + *(int *)(pbVar15 + -0x73));
  *pbVar21 = *pbVar21 + bVar9;
  bVar6 = (byte)param_1 | (byte)*puVar36;
  param_1 = (uint *)CONCAT31((int3)((uint)param_1 >> 8),bVar6);
  puVar17 = puVar45;
  if ((char)bVar6 < '\x01') goto code_r0x00402eb4;
  *pbVar21 = *pbVar21 + bVar9;
  pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),bVar9 + 0x2d);
  puVar45[(int)puVar39 * 2] =
       (uint)((int)puVar36 + (uint)(0xd2 < bVar9) + puVar45[(int)puVar39 * 2]);
  puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar40);
  do {
    uVar13 = *puVar45;
    bVar6 = (byte)pbVar11;
    *(byte *)puVar45 = (byte)*puVar45 + bVar6;
    if (!CARRY1((byte)uVar13,bVar6)) break;
    *pbVar11 = *pbVar11 + bVar6;
    bVar6 = bVar6 | pbVar11[0x400001a];
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6);
    if ((char)bVar6 < '\x01') {
code_r0x00402ecc:
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (byte)pbVar21 | pbVar21[0x400001b];
      pcVar35 = (char *)CONCAT31(uVar24,bVar6);
      if ((char)bVar6 < '\x01') {
        uVar13 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + (byte)param_1;
        *(char *)((int)pcVar35 * 2) =
             *(char *)((int)pcVar35 * 2) - CARRY1((byte)uVar13,(byte)param_1);
        bVar42 = 0x81 < bVar6;
        bVar6 = bVar6 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar21 = *pbVar21 + bVar6;
      puVar17 = puVar45;
code_r0x00402eb4:
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar6 = (char)pbVar21 + 0x6f;
      pcVar35 = (char *)CONCAT31(uVar24,bVar6);
      *(uint **)pcVar35 = puStackY_48;
      uVar13 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + (char)param_1;
      puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar40);
      in_DS = uVar40;
      if ((byte)*puVar36 != 0 && SCARRY1((byte)uVar13,(char)param_1) == (char)(byte)*puVar36 < '\0')
      {
        *pcVar35 = *pcVar35 + bVar6;
        bVar9 = (char)pbVar21 + 0x9c;
        pbVar21 = (byte *)CONCAT31(uVar24,bVar9);
        puVar17[(int)puVar39 * 2] =
             (uint)((int)puVar36 + (uint)(0xd2 < bVar6) + puVar17[(int)puVar39 * 2]);
        puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar40);
        uVar13 = *puVar17;
        *(byte *)puVar17 = (byte)*puVar17 + bVar9;
        puVar45 = puVar17;
        if (CARRY1((byte)uVar13,bVar9)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar45 = puVar17 + (uint)bVar43 * -2 + 1;
      out(*puVar17,(short)puVar36);
    }
    cVar7 = (char)pcVar35;
    *pcVar35 = *pcVar35 + cVar7;
    uVar24 = (undefined3)((uint)pcVar35 >> 8);
    bVar6 = cVar7 + 0x6f;
    pcVar35 = (char *)CONCAT31(uVar24,bVar6);
    *(uint **)pcVar35 = puStackY_48;
    uVar13 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + (byte)param_1;
    puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar40);
    *(byte *)(puVar45 + 7) = ((byte)puVar45[7] - bVar37) - CARRY1((byte)uVar13,(byte)param_1);
    *pcVar35 = *pcVar35 + bVar6;
    bVar9 = cVar7 + 0x9c;
    pcVar35 = (char *)CONCAT31(uVar24,bVar9);
    puVar45[(int)puVar39 * 2] =
         (uint)((int)puVar36 + (uint)(0xd2 < bVar6) + puVar45[(int)puVar39 * 2]);
    uVar13 = *puVar45;
    *(byte *)puVar45 = (byte)*puVar45 + bVar9;
    if (!CARRY1((byte)uVar13,bVar9)) goto code_r0x00402e7e;
    *pcVar35 = *pcVar35 + bVar9;
    bVar9 = bVar9 | pcVar35[0x400001c];
    pbVar11 = (byte *)CONCAT31(uVar24,bVar9);
    in_SS = uVar40;
    if ((char)bVar9 < '\x01') goto code_r0x00402f16;
    *pbVar11 = *pbVar11 + bVar9;
    pcVar35 = (char *)CONCAT31(uVar24,bVar9 + 0x6f);
    while( true ) {
      *(uint **)pcVar35 = puStackY_48;
      uVar13 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + (byte)param_1;
      *(uint *)((int)puVar45 + 0x1d) =
           (*(int *)((int)puVar45 + 0x1d) - (int)puVar39) - (uint)CARRY1((byte)uVar13,(byte)param_1)
      ;
      bVar6 = (byte)pcVar35;
      *pcVar35 = *pcVar35 + bVar6;
      bVar9 = bVar6 + 0x2d;
      pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),bVar9);
      puVar45[(int)puVar39 * 2] =
           (uint)((int)puVar36 + (uint)(0xd2 < bVar6) + puVar45[(int)puVar39 * 2]);
      puStackY_48 = (uint *)CONCAT22((short)((uint)puStackY_48 >> 0x10),uVar40);
      uVar13 = *puVar45;
      *(byte *)puVar45 = (byte)*puVar45 + bVar9;
      if (!CARRY1((byte)uVar13,bVar9)) break;
      *pbVar11 = *pbVar11 + bVar9;
code_r0x00402f16:
      bVar6 = (byte)pbVar11 | pbVar11[0x400001d];
      puVar22 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6);
      puVar17 = unaff_EBP;
      if ((char)bVar6 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = puVar17;
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        uVar24 = (undefined3)((uint)puVar22 >> 8);
        cVar7 = (char)puVar22 + 'o';
        puVar17 = (uint *)CONCAT31(uVar24,cVar7);
        *puVar17 = (uint)puStackY_48;
        cVar10 = (char)param_1;
        *(byte *)puVar36 = (byte)*puVar36 + cVar10;
        puStackY_48 = (uint *)CONCAT22(puStackY_48._2_2_,uVar40);
        bVar6 = (byte)((uint)puVar36 >> 8);
        bVar42 = bVar6 < (byte)*puVar45;
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                   CONCAT11(bVar6 - (byte)*puVar45,(char)puVar36));
        if (bVar42) break;
        bVar42 = CARRY4((uint)puVar17,*puVar17);
        puVar22 = (uint *)((int)puVar17 + *puVar17);
        if (!SCARRY4((int)puVar17,*puVar17)) {
          bVar42 = CARRY4((uint)unaff_EBP,*puVar22);
          unaff_EBP = (uint *)((int)unaff_EBP + *puVar22);
        }
        *puVar22 = (*puVar22 - (int)puVar22) - (uint)bVar42;
        *(byte *)puVar36 = (byte)*puVar36 + cVar10;
        param_1 = (uint *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((char)((uint)param_1 >> 8) + (byte)*puVar36,
                                            cVar10 - (byte)*puVar36));
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402f3b:
        cVar10 = (char)puVar36;
        *pbVar15 = *pbVar15 + cVar10;
        bVar6 = (byte)puVar22;
        *(byte *)((int)puVar22 * 2) = *(byte *)((int)puVar22 * 2) ^ bVar6;
        *(byte *)puVar22 = (byte)*puVar22 + bVar6;
        *(byte *)puVar22 = (byte)*puVar22 + cVar10;
        uVar13 = *puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + bVar6;
        *puVar36 = (uint)((int)puVar22 + (uint)CARRY1((byte)uVar13,bVar6) + *puVar36);
        pcVar35 = (char *)((uint)puVar22 | *puVar39);
        uVar24 = (undefined3)((uint)pcVar35 >> 8);
        cVar7 = (char)pcVar35 + *pcVar35;
        pcVar35 = (char *)CONCAT31(uVar24,cVar7);
        *pcVar35 = *pcVar35 + cVar7;
        cVar7 = cVar7 + *pcVar35;
        piVar20 = (int *)CONCAT31(uVar24,cVar7);
        *(char *)piVar20 = (char)*piVar20 + cVar7;
        iVar18 = LocalDescriptorTableRegister();
        *piVar20 = iVar18;
        bVar6 = *pbVar15;
        bVar28 = (byte)((uint)param_1 >> 8);
        *pbVar15 = *pbVar15 + bVar28;
        iVar18 = *piVar20;
        uVar31 = (undefined2)((uint)param_1 >> 0x10);
        bVar27 = (byte)param_1;
        *(byte *)puVar45 = (byte)*puVar45 + cVar7;
        puVar17 = puVar45 + (uint)bVar43 * -2 + 1;
        out(*puVar45,(short)puVar36);
        *(byte *)puVar17 = (byte)*puVar17 + cVar7;
        bVar9 = *pbVar15;
        *(byte *)puVar36 = (byte)*puVar36 - bVar37;
        *(byte *)puVar17 = (byte)*puVar17 + cVar7;
        puVar38 = puVar17 + (uint)bVar43 * -2 + 1;
        out(*puVar17,(short)puVar36);
        *(byte *)puVar38 = (byte)*puVar38 + cVar7;
        bVar33 = *pbVar15;
        *(uint *)((int)puVar36 + -0x23) = *(uint *)((int)puVar36 + -0x23) & (uint)puVar38;
        puVar23 = (ushort *)((int)piVar20 + *piVar20);
        if (!SCARRY4((int)piVar20,*piVar20)) {
          *puVar23 = in_DS;
        }
        *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
        uVar32 = CONCAT11((char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + -0x15),cVar10);
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),uVar32);
        puVar22 = (uint *)((int)puVar23 + *(int *)puVar23);
        if (!SCARRY4((int)puVar23,*(int *)puVar23)) {
          *(ushort *)puVar22 = in_DS;
        }
        cVar7 = (char)puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + cVar7;
        cVar29 = ((bVar28 - (char)iVar18) - CARRY1(bVar6,bVar28) | bVar9 | bVar33) + (byte)*puVar22;
        param_1 = (uint *)CONCAT22(uVar31,CONCAT11(cVar29,bVar27));
        uVar13 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar27;
        if (CARRY1((byte)uVar13,bVar27)) {
          *(byte *)puVar22 = (byte)*puVar22 + cVar7;
          bVar6 = *(byte *)((int)puVar36 + 6);
          *(byte *)puVar36 = (byte)*puVar36 + bVar27;
          bVar9 = (cVar29 - (byte)*puVar38) + cRam14730307;
          *(byte *)puVar22 = (byte)*puVar22 + cVar7;
          bVar6 = bVar37 | bVar6 | *(byte *)((int)puVar36 + 0x2a);
          uVar13 = *puVar22;
          pbVar11 = (byte *)((int)puVar22 + (uint)CARRY1(bVar9,(byte)*puVar22) + *puVar22);
          *(byte *)puVar36 = (byte)*puVar36 + bVar27;
          cVar7 = cVar8 - (byte)*puVar38;
          cVar8 = bVar6 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar6,cVar8)) >> 8),
                                             cVar7) + 0x1e);
          *pbVar11 = *pbVar11 + (char)pbVar11;
          uVar24 = (undefined3)((uint)pbVar11 >> 8);
          bVar6 = (char)pbVar11 + 0x2aU & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x1f);
          *pcVar35 = *pcVar35 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x20);
          *pcVar35 = *pcVar35 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x21);
          *pcVar35 = *pcVar35 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x22);
          *pcVar35 = *pcVar35 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          bVar9 = bVar9 + (byte)uVar13 + *pcVar35;
          uVar25 = CONCAT22(uVar31,CONCAT11(bVar9,bVar27));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar7)) + 0x25);
          *pcVar35 = *pcVar35 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
          pcVar12 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar8,cVar7)) + 0x26),cVar7));
          *pcVar35 = *pcVar35 + bVar6 + 0x2a;
          bVar6 = bVar6 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          cVar7 = bVar6 + 0x2a;
          pcVar35 = (char *)CONCAT31(uVar24,cVar7);
          if ((POPCOUNT(cVar7) & 1U) == 0) {
            *pcVar35 = *pcVar35 + cVar7;
            pbVar11 = (byte *)(CONCAT31(uVar24,bVar6 + 0x4f) + -0x33282610);
            bVar6 = *pbVar11;
            bVar33 = (byte)pbVar11;
            *pbVar11 = *pbVar11 + bVar33;
            uVar24 = (undefined3)((uint)pbVar11 >> 8);
            if (!CARRY1(bVar6,bVar33)) {
              if (!SCARRY1(bVar33,'\0')) {
                *pbVar11 = *pbVar11 + bVar33;
                uVar25 = CONCAT22(uVar31,CONCAT11(bVar9 | (byte)*puVar36,bVar27));
                bVar33 = bVar33 & (byte)*puVar36;
                *(char *)CONCAT31(uVar24,bVar33) = *(char *)CONCAT31(uVar24,bVar33) + bVar33;
                pcVar35 = (char *)CONCAT31(uVar24,bVar33 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar35 = (char *)CONCAT31(uVar24,bVar33 + *pcVar12);
              if (SCARRY1(bVar33,*pcVar12) != (char)(bVar33 + *pcVar12) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar6 = bVar33 + *pcVar12;
            pbVar11 = (byte *)CONCAT31(uVar24,bVar6);
            if (SCARRY1(bVar33,*pcVar12) == (char)bVar6 < '\0') {
              pcVar35 = (char *)CONCAT22(uVar31,CONCAT11(bVar9 | (byte)*puVar36,bVar27));
              *pcVar12 = *pcVar12 + cVar10;
              *(byte *)puVar36 = (byte)*puVar36 ^ bVar6;
              *(char *)((int)pbVar11 * 2) = *(char *)((int)pbVar11 * 2) + bVar6;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar35 = *pcVar35 + (char)pcVar35;
            uVar24 = (undefined3)((uint)pcVar35 >> 8);
            bVar6 = (char)pcVar35 + 0x2aU & (byte)*puVar36;
            *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
            pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x2a);
            *pcVar35 = *pcVar35 + bVar6 + 0x2a;
            pcVar35 = (char *)CONCAT31(uVar24,bVar6 + 0x54 & (byte)*puVar36);
code_r0x00403072:
            cVar7 = (char)pcVar35;
            *pcVar35 = *pcVar35 + cVar7;
            uVar24 = (undefined3)((uint)pcVar35 >> 8);
            pcVar35 = (char *)CONCAT31(uVar24,cVar7 + '*');
            *pcVar35 = *pcVar35 + cVar7 + '*';
            bVar6 = cVar7 + 0x54U & (byte)*puVar36;
            *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,in_ES);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar24,bVar6 + 0x2a),(char)uVar25));
            *(byte *)(puVar38 + 0x828000) = (byte)puVar38[0x828000] - cVar10;
            pcVar35 = pcStackY_80;
code_r0x0040309a:
            cVar7 = (char)pcVar35;
            *pcVar35 = *pcVar35 + cVar7;
            pcStackY_80 = (char *)CONCAT22(pcStackY_80._2_2_,uVar40);
            *pcVar35 = *pcVar35 + cVar7;
            pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar35 >> 8),cVar7 + 0x2aU & (byte)*puVar36);
          }
          cVar7 = (char)pbVar11;
          *pbVar11 = *pbVar11 + cVar7;
          uVar24 = (undefined3)((uint)pbVar11 >> 8);
          cVar8 = cVar7 + '*';
          pcVar35 = (char *)CONCAT31(uVar24,cVar8);
          *(byte *)(puVar38 + 0x828000) = (byte)puVar38[0x828000] - cVar10;
          *pcVar35 = *pcVar35 + cVar8;
          cVar29 = (char)pcStackY_80 - (byte)*puVar38;
          pcVar12 = (char *)CONCAT22((short)((uint)pcStackY_80 >> 0x10),
                                     CONCAT11((char)((uint)pcStackY_80 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStackY_80 >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar35 = *pcVar35 + cVar8;
          bVar6 = cVar7 + 0x54U & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar6) = *(char *)CONCAT31(uVar24,bVar6) + bVar6;
          pbVar11 = (byte *)CONCAT31(uVar24,bVar6 + 0x2a);
          bVar6 = (byte)((uint)uVar25 >> 8);
          pcVar35 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar6 + *pbVar11,(char)uVar25));
          pbVar11 = pbVar11 + (uint)CARRY1(bVar6,*pbVar11) + *(int *)pbVar11;
          *(byte *)puVar36 = (byte)*puVar36 + (char)uVar25;
          uVar24 = (undefined3)((uint)pbVar11 >> 8);
          cVar7 = (byte)pbVar11 - *pbVar11;
          piVar20 = (int *)CONCAT31(uVar24,cVar7);
          puVar38 = (uint *)((int)puVar38 + (uint)((byte)pbVar11 < *pbVar11) + *piVar20);
          cVar7 = cVar7 + (char)*piVar20;
          pbVar11 = (byte *)CONCAT31(uVar24,cVar7);
          *pbVar11 = *pbVar11 + cVar7;
code_r0x004030df:
          *pcVar35 = *pcVar35 + cVar10;
          bVar6 = *pbVar11;
          bVar9 = (byte)pbVar11;
          *pbVar11 = *pbVar11 + bVar9;
          *(byte **)(pcVar12 + -0x41) =
               (byte *)((int)puVar38 + (uint)CARRY1(bVar6,bVar9) + *(int *)(pcVar12 + -0x41));
          *pbVar11 = *pbVar11 + bVar9;
          uVar24 = (undefined3)((uint)pbVar11 >> 8);
          bVar9 = bVar9 | (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar35 = (char *)CONCAT31(uVar24,bVar9 + 0x7b);
          *pcVar35 = *pcVar35 + bVar9 + 0x7b;
          pbVar11 = (byte *)((int)puVar38 + CONCAT31(uVar24,bVar9 - 8) + -1);
          *pbVar11 = *pbVar11 + (bVar9 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar45 = puVar38 + (uint)bVar43 * -2 + 1;
        out(*puVar38,uVar32);
        puVar17 = (uint *)((int)unaff_EBP + 1);
        puStackY_48 = unaff_EBP;
      }
      bVar6 = cVar7 - bVar42;
      pbVar11 = (byte *)((int)puVar45 + (int)puVar39 * 2);
      bVar42 = CARRY1(*pbVar11,bVar6);
      *pbVar11 = *pbVar11 + bVar6;
code_r0x00402ef9:
      pcVar35 = (char *)CONCAT31(uVar24,bVar6 - bVar42);
      pbVar11 = (byte *)((int)puVar39 + (int)unaff_EBP * 2);
      *pbVar11 = *pbVar11 + (bVar6 - bVar42);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)param_1 = (byte)*param_1 + (char)puVar36;
  puVar17 = puVar36 + 0x2828000;
  bVar6 = (byte)param_1;
  bVar42 = (byte)*puVar17 < bVar6;
  *(byte *)puVar17 = (byte)*puVar17 - bVar6;
  bVar6 = (byte)pbVar11 + *pbVar11;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar6 + bVar42);
  puVar17 = puVar39;
  uVar41 = in_ES;
  if (CARRY1((byte)pbVar11,*pbVar11) || CARRY1(bVar6,bVar42)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar35 = *pcVar35 + bVar9;
  uVar41 = in_ES;
  in_SS = uVar40;
  goto code_r0x00402e6e;
}


