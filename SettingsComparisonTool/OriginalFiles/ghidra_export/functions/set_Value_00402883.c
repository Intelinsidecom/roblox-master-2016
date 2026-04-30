/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402883
 * Raw Name    : set_Value
 * Demangled   : set_Value
 * Prototype   : void set_Value(uint * value, uint * param_2)
 * Local Vars  : pcStack_7c, value, pcStack_44, uStack_28, puStack_14, puStack_10, pcStack_c, uStack_8, uVar1, uVar2, uVar3, uVar4, uVar5, cVar6, cVar7, bVar8, cVar9, in_EAX, pbVar10, pcVar11, uVar12, uVar13, puVar14, pbVar15, param_2, piVar16, iVar17, pcVar18, pcVar19, piVar20, pbVar21, puVar22, puVar23, uVar24, extraout_ECX, extraout_ECX_00, uVar25, bVar26, cVar27, bVar28, bVar29, cVar30, uVar31, uVar32, uVar33, bVar34, uVar35, unaff_EBX, pcVar36, bVar37, unaff_EBP, unaff_ESI, puVar38, puVar39, unaff_EDI, puVar40, in_ES, uVar41, uVar42, in_CS, in_SS, in_DS, uVar43, in_GS_OFFSET, bVar44, in_AF, in_TF, in_IF, bVar45, bVar46, in_NT, uVar47
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

void __fastcall set_Value(uint *value,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  undefined4 in_EAX;
  byte *pbVar10;
  char *pcVar11;
  undefined3 uVar24;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  int *piVar20;
  byte *pbVar21;
  uint *puVar22;
  ushort *puVar23;
  byte bVar26;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  char cVar27;
  byte bVar28;
  byte bVar29;
  char cVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined4 uVar25;
  byte bVar34;
  undefined2 uVar33;
  undefined1 uVar35;
  byte bVar37;
  uint *unaff_EBX;
  char *pcVar36;
  char *unaff_EBP;
  uint *unaff_ESI;
  uint *puVar38;
  uint *puVar39;
  uint *unaff_EDI;
  uint *puVar40;
  ushort in_ES;
  ushort uVar41;
  ushort uVar42;
  ushort in_CS;
  ushort in_SS;
  ushort in_DS;
  ushort uVar43;
  int in_GS_OFFSET;
  bool bVar44;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar45;
  bool bVar46;
  byte in_NT;
  undefined8 uVar47;
  char *pcStack_7c;
  char *pcStack_44;
  undefined4 uStack_28;
  uint *puStack_14;
  uint *puStack_10;
  char *pcStack_c;
  ushort uStack_8;
  
  bVar45 = false;
                    /* .NET CLR Managed Code */
  cVar6 = (char)in_EAX + (byte)*unaff_EBX;
  pbVar10 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),cVar6);
  if (SCARRY1((char)in_EAX,(byte)*unaff_EBX) == cVar6 < '\0') goto code_r0x0040289a;
  do {
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + '*');
    bVar8 = (byte)((uint)value >> 8);
    bVar26 = bVar8 + *pbVar10;
    pbVar10 = pbVar10 + (uint)CARRY1(bVar8,*pbVar10) + *(int *)pbVar10;
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (byte)*unaff_ESI);
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar26 + *pbVar10,(char)value));
    pbVar10 = pbVar10 + (uint)CARRY1(bVar26,*pbVar10) + *(int *)pbVar10;
code_r0x00402898:
    *(byte *)param_2 = (byte)*param_2 + (char)value;
code_r0x0040289a:
    bVar26 = (byte)param_2;
    uVar31 = CONCAT11((char)((uint)param_2 >> 8) - (byte)*unaff_ESI,bVar26);
    pbVar15 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
    pcVar36 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x19],
                                        (char)unaff_EBX));
    *pbVar10 = *pbVar10 + (char)pbVar10;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),(char)pbVar10 + '\x03');
    puVar14 = unaff_ESI;
    do {
      unaff_ESI = puVar14 + 1;
      out(*puVar14,uVar31);
      pcVar36 = pcVar36 + -1;
      bVar8 = (byte)pbVar10;
      *pbVar10 = *pbVar10 + bVar8;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | *pbVar15,(char)value));
      *pbVar10 = *pbVar10 + bVar8;
      *pcVar36 = *pcVar36 + bVar26;
      *(byte *)((int)pbVar10 * 2) = *(byte *)((int)pbVar10 * 2) ^ bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 | bVar8;
      bVar44 = CARRY1((byte)*value,bVar26);
      *(byte *)value = (byte)*value + bVar26;
      cVar6 = bVar8 + 10 + bVar44;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),cVar6);
      puVar14 = unaff_ESI;
    } while (bVar8 < 0xf6 && !CARRY1(bVar8 + 10,bVar44));
    *pbVar10 = *pbVar10 + cVar6;
    pcVar11 = (char *)((uint)pbVar10 | *unaff_EDI);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar36 >> 0x10),
                                 CONCAT11((char)((uint)pcVar36 >> 8) + unaff_EBP[-100],(char)pcVar36
                                         ));
    *pcVar11 = *pcVar11 + (char)pcVar11;
    bVar26 = (char)pcVar11 + 7;
    uVar47 = CONCAT44(pbVar15,CONCAT31((int3)((uint)pcVar11 >> 8),bVar26));
code_r0x004028c8:
    param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
    pcVar36 = (char *)uVar47;
    uVar24 = (undefined3)((ulonglong)uVar47 >> 8);
    cVar6 = (char)uVar47;
    if ((POPCOUNT(bVar26) & 1U) == 0) {
      *pcVar36 = *pcVar36 + cVar6;
      puVar14 = (uint *)CONCAT31(uVar24,cVar6 + '-');
      unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)param_2 + 0x3b));
      bVar44 = CARRY4(*puVar14,(uint)puVar14);
      uVar12 = *puVar14;
      *puVar14 = (uint)(*puVar14 + (int)puVar14);
      if (SCARRY4(uVar12,(int)puVar14)) {
        bVar44 = CARRY4(*puVar14,(uint)puVar14);
        bVar46 = SCARRY4(*puVar14,(int)puVar14);
        *puVar14 = (uint)(*puVar14 + (int)puVar14);
        bVar26 = POPCOUNT(*puVar14 & 0xff);
        if (bVar46) goto code_r0x004029be;
        goto code_r0x0040294c;
      }
      do {
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + bVar44);
        *(byte *)param_2 = (byte)*param_2 + (char)value;
        bVar44 = (POPCOUNT((byte)*param_2) & 1U) == 0;
        if (bVar44) goto code_r0x004028e2;
code_r0x004028db:
        if (!bVar44) goto code_r0x00402879;
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'r');
        pcStack_c = unaff_EBP;
code_r0x004028e2:
        uVar12 = *puVar14;
        *puVar14 = (uint)(*puVar14 + (int)puVar14);
        if (SCARRY4(uVar12,(int)puVar14)) {
          if (*puVar14 == 0 || SCARRY4(uVar12,(int)puVar14) != (int)*puVar14 < 0)
          goto code_r0x0040296d;
          goto code_r0x00402957;
        }
        unaff_EBX = (uint *)((int)unaff_EBX + -1);
        cVar6 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11((byte)((uint)value >> 8) |
                                          *(byte *)((int)value + 0x16d7207),(char)value));
        pbVar10 = (byte *)((int)puVar14 + 0x7d);
        bVar26 = *pbVar10;
        bVar34 = (byte)((uint)param_2 >> 8);
        bVar8 = *pbVar10;
        *pbVar10 = *pbVar10 + bVar34;
        pcStack_c = (char *)((uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar8,bVar34) * 0x800 |
                             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                             (uint)((char)*pbVar10 < '\0') * 0x80 | (uint)(*pbVar10 == 0) * 0x40 |
                             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar10) & 1U) == 0) * 4 |
                            (uint)CARRY1(bVar26,bVar34));
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        pbVar10 = (byte *)(CONCAT31((int3)((uint)puVar14 >> 8),cVar6 + '+') ^ *unaff_EDI);
        if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) goto code_r0x00402898;
        bVar26 = (byte)pbVar10;
        *pbVar10 = *pbVar10 + bVar26;
        puVar14 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar26 + 0x72);
        if (bVar26 < 0x8e && (byte)(bVar26 + 0x72) != '\0') {
          if (SCARRY1(bVar26,'r')) goto code_r0x00402974;
        }
        else {
          *(byte *)((int)puVar14 + 0x6f) = *(byte *)((int)puVar14 + 0x6f) + bVar34;
        }
code_r0x00402905:
        uVar47 = CONCAT44(param_2,puVar14);
        unaff_EBX = (uint *)((int)unaff_EBX + -1);
        cVar6 = (char)puVar14;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        bVar26 = (byte)((uint)value >> 8) | (byte)*value;
        value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar26,(char)value));
        in_ES = (ushort)pcStack_c;
        if ((char)bVar26 < '\x01') {
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          unaff_EDI = (uint *)((int)unaff_EDI - *(int *)(unaff_EBP + -100));
          goto code_r0x00402929;
        }
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        pcStack_c = "S";
        uVar47 = func_0x7346291c();
        *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
        value = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                                 (byte)extraout_ECX | *(byte *)((ulonglong)uVar47 >> 0x20));
        while( true ) {
          pcVar36 = (char *)((int)uVar47 * 2);
          *pcVar36 = *pcVar36 - (char)value;
          uVar12 = *unaff_EBX;
          cVar6 = (char)((uint)value >> 8);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
          if (SCARRY1((byte)uVar12,cVar6) == (char)(byte)*unaff_EBX < '\0') {
            pbVar10 = (byte *)((int)unaff_EDI + (int)uVar47);
            *pbVar10 = *pbVar10 + (char)uVar47;
            bVar26 = *pbVar10;
            goto code_r0x004028c8;
          }
code_r0x00402929:
          param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
          cVar6 = (char)uVar47;
          *(char *)uVar47 = *(char *)uVar47 + cVar6;
          uVar24 = (undefined3)((ulonglong)uVar47 >> 8);
          bVar26 = cVar6 + 7;
          puVar14 = (uint *)CONCAT31(uVar24,bVar26);
          bVar8 = (byte)((ulonglong)uVar47 >> 0x28);
          if ((POPCOUNT(bVar26) & 1U) != 0) break;
          *(byte *)puVar14 = (byte)*puVar14 + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '3');
          uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
          uVar35 = SUB41(unaff_EBX,0);
          bVar26 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar26)
          ;
          unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(bVar26,uVar35));
          *pcVar36 = *pcVar36 + cVar6 + '3';
          cVar7 = cVar6 + ':';
          puVar14 = (uint *)CONCAT31(uVar24,cVar7);
          if ((POPCOUNT(cVar7) & 1U) != 0) {
            bVar26 = bVar26 | *(byte *)((int)param_2 + 7);
            unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(bVar26,uVar35));
            bVar44 = (POPCOUNT(bVar26) & 1U) == 0;
            goto code_r0x004028db;
          }
          *(byte *)puVar14 = (byte)*puVar14 + cVar7;
          puVar14 = (uint *)(CONCAT31(uVar24,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
          pbVar10 = (byte *)((int)puVar14 + 0x72);
          bVar46 = SCARRY1(*pbVar10,bVar8);
          *pbVar10 = *pbVar10 + bVar8;
          bVar26 = POPCOUNT(*pbVar10);
code_r0x0040294c:
          if ((bVar26 & 1) == 0) {
            *(byte *)((int)puVar14 + 0x72) =
                 *(byte *)((int)puVar14 + 0x72) + (char)((uint)param_2 >> 8);
          }
          else if (bVar46) {
            unaff_EBP = *(char **)unaff_EBP;
            cVar6 = cRamc9721806;
            goto code_r0x004029c4;
          }
          unaff_EBP = (char *)0x7e700001;
          puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_SS);
code_r0x00402957:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          cVar6 = (char)puVar14 + '(';
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),cVar6);
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11((byte)((uint)value >> 8) | (byte)*puVar14,(char)value));
          *(byte *)puVar14 = (byte)*puVar14 + cVar6;
          param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                     CONCAT11((byte)((uint)param_2 >> 8) | (byte)unaff_EBX[0x18],
                                              (char)param_2));
          unaff_ESI = puStack_14;
          unaff_EDI = puStack_10;
code_r0x00402966:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          bVar26 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)param_2 + 7);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11(bVar26,(char)unaff_EBX));
          if ((POPCOUNT(bVar26) & 1U) != 0) {
            puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + -0x21);
            goto code_r0x00402905;
          }
code_r0x0040296d:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + '~');
code_r0x00402971:
          pcStack_c = (char *)(uint)in_SS;
          uVar41 = in_ES;
code_r0x00402972:
          *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
          in_ES = uVar41;
code_r0x00402974:
          bVar26 = 0xe9 < (byte)puVar14;
          puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_CS);
          in_CS = 0x2d0a;
          puStack_14 = (uint *)0x40297d;
          uVar47 = func_0x00006128();
          puVar14 = (uint *)uVar47;
          piVar20 = (int *)((int)((ulonglong)uVar47 >> 0x20) + -0x3d);
          *piVar20 = (int)((int)unaff_ESI + (uint)bVar26 + *piVar20);
          bVar44 = SCARRY4(*puVar14,(int)puVar14);
          *puVar14 = *puVar14 + (int)puVar14;
          uVar12 = *puVar14;
          value = extraout_ECX_00;
          uVar41 = in_ES;
code_r0x00402982:
          bVar26 = POPCOUNT(uVar12 & 0xff);
          in_ES = uVar41;
          if (bVar44) {
            *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
            value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                     CONCAT11((byte)((uint)value >> 8) |
                                              *(byte *)((ulonglong)uVar47 >> 0x20),(char)value));
            goto code_r0x00402991;
          }
code_r0x00402984:
          pcVar36 = (char *)((ulonglong)uVar47 >> 0x20);
          if ((bVar26 & 1) == 0) {
            *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
            *pcVar36 = *pcVar36 + (char)value;
            uVar47 = CONCAT44(CONCAT22((short)((ulonglong)uVar47 >> 0x30),
                                       CONCAT11((char)((ulonglong)uVar47 >> 0x28) - pcVar36[0x1f],
                                                (char)((ulonglong)uVar47 >> 0x20))),
                              CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + '('));
code_r0x00402991:
            param_2 = (uint *)((ulonglong)uVar47 >> 0x20);
            pbVar10 = (byte *)uVar47;
            bVar26 = (byte)uVar47;
            bVar44 = CARRY1(bVar26,*pbVar10);
            puVar14 = (uint *)CONCAT31((int3)((ulonglong)uVar47 >> 8),bVar26 + *pbVar10);
            uVar41 = in_ES;
            cVar6 = bVar26 + *pbVar10;
            if (SCARRY1(bVar26,*pbVar10)) goto code_r0x004029c4;
code_r0x00402995:
            param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                       CONCAT11(((char)((uint)param_2 >> 8) -
                                                *(byte *)((int)param_2 + 0x6b)) - bVar44,
                                                (char)param_2));
            bVar26 = (byte)puVar14;
            bVar44 = CARRY1(bVar26,(byte)*puVar14);
            bVar46 = SCARRY1(bVar26,(byte)*puVar14);
            puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar26 + (byte)*puVar14);
            in_ES = uVar41;
            do {
              uVar41 = in_ES;
              if (!bVar46) {
                unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar44 + *puVar14);
                pbVar10 = (byte *)((int)puVar14 + *puVar14);
                bVar8 = (byte)pbVar10;
                *pbVar10 = *pbVar10 + bVar8;
                *(byte *)value = (byte)*value + (char)value;
                bVar26 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar8;
                *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar26,bVar8) + *unaff_EDI);
                *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)value;
                uVar24 = (undefined3)((uint)pbVar10 >> 8);
                bVar8 = bVar8 | (byte)*unaff_ESI;
                puVar14 = (uint *)CONCAT31(uVar24,bVar8);
                uVar12 = *puVar14;
                uVar1 = *puVar14;
                *puVar14 = (uint)(*puVar14 + (int)puVar14);
                if (SCARRY4(uVar1,(int)puVar14)) {
                  *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
                  *(byte *)param_2 = (byte)*param_2 + (char)value;
                  *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
                }
                else {
                  in_SS = in_ES;
                  if (CARRY4(uVar12,(uint)puVar14)) goto code_r0x00402971;
                  bVar44 = CARRY1(bVar8,(byte)*puVar14);
                  bVar46 = SCARRY1(bVar8,(byte)*puVar14);
                  puVar14 = (uint *)CONCAT31(uVar24,bVar8 + (byte)*puVar14);
code_r0x004029be:
                  uVar41 = in_ES;
                  if (!bVar46) {
                    *(byte *)((int)param_2 + -0x37) =
                         (*(byte *)((int)param_2 + -0x37) - (char)((uint)param_2 >> 8)) - bVar44;
                    cVar6 = cRamc9721806;
                    uStack_8 = in_ES;
code_r0x004029c4:
                    cRamc9721806 = cVar6;
                    bVar26 = (byte)puVar14;
                    bVar44 = CARRY1(bVar26,(byte)*puVar14);
                    bVar46 = SCARRY1(bVar26,(byte)*puVar14);
                    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar26 + (byte)*puVar14);
                    uVar41 = in_ES;
                    goto code_r0x004029c6;
                  }
                }
                bVar26 = (byte)value;
                bVar44 = CARRY1((byte)*param_2,bVar26);
                bVar46 = SCARRY1((byte)*param_2,bVar26);
                *(byte *)param_2 = (byte)*param_2 + bVar26;
                in_ES = uVar41;
                if (bVar44) goto code_r0x00402966;
              }
code_r0x004029c6:
              in_ES = uStack_8;
              if (bVar46) goto code_r0x00402966;
              pcStack_c = (char *)(uint)uVar41;
              *(uint *)((int)param_2 + -0x23) =
                   (*(int *)((int)param_2 + -0x23) - (int)unaff_ESI) - (uint)bVar44;
              uVar12 = *puVar14;
              bVar8 = (byte)puVar14;
              uVar1 = *puVar14;
              uVar24 = (undefined3)((uint)puVar14 >> 8);
              bVar26 = bVar8 + (byte)*puVar14;
              puVar14 = (uint *)CONCAT31(uVar24,bVar26);
              if (SCARRY1(bVar8,(byte)uVar1)) goto code_r0x00402972;
              puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uVar41);
              cVar6 = (char)param_2;
              bVar34 = ((char)((uint)param_2 >> 8) - *(byte *)((int)param_2 + -0xf)) -
                       CARRY1(bVar8,(byte)uVar12);
              param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar34,cVar6));
              puVar38 = (uint *)CONCAT31(uVar24,bVar26 + (byte)*puVar14);
              bVar8 = (byte)value;
              in_ES = uVar41;
              if (SCARRY1(bVar26,(byte)*puVar14)) {
                *(byte *)param_2 = (byte)*param_2 + bVar8;
                uVar47 = CONCAT44(param_2,(int)puVar38 + -0x1c37211);
                pcVar36 = (char *)((int)puVar38 + -0x1c3720a);
                *pcVar36 = *pcVar36 + bVar34;
                bVar26 = POPCOUNT(*pcVar36);
                goto code_r0x00402984;
              }
              puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,uVar41);
              unaff_ESI = (uint *)((int)unaff_ESI +
                                  (-(uint)CARRY1(bVar26,(byte)*puVar14) - *(int *)((int)param_2 + 5)
                                  ));
              bVar44 = SCARRY4((int)puVar38,*puVar38);
              uVar12 = (int)puVar38 + *puVar38;
              uVar47 = CONCAT44(param_2,uVar12);
              if (bVar44) goto code_r0x00402982;
              bVar26 = (byte)uVar12 + 0x8e;
              uVar13 = CONCAT31((int3)(uVar12 >> 8),bVar26 - CARRY4((uint)puVar38,*puVar38));
              *unaff_EBX = (*unaff_EBX - uVar13) -
                           (uint)((byte)uVar12 < 0x72 || bVar26 < CARRY4((uint)puVar38,*puVar38));
              pbVar10 = (byte *)(uVar13 - 0x5e);
              bVar26 = *pbVar10;
              *pbVar10 = *pbVar10 + bVar34;
              uVar12 = (uint)CARRY1(bVar26,bVar34);
              uVar1 = uVar13 - 0x32d72;
              puVar14 = (uint *)(uVar1 - uVar12);
              if (SBORROW4(uVar13,0x32d72) != SBORROW4(uVar1,uVar12)) goto code_r0x00402992;
              uVar43 = in_DS;
              if (uVar13 < 0x32d72 || uVar1 < uVar12) {
                *unaff_EBP = *unaff_EBP - (char)((uint)puVar14 >> 8);
                *(byte *)param_2 = (byte)*param_2 + bVar8;
                puVar38 = unaff_ESI + 1;
                out(*unaff_ESI,CONCAT11(bVar34,cVar6));
                *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
                goto code_r0x00402a3e;
              }
              bVar44 = CARRY4((uint)puVar14,*puVar14);
              bVar46 = SCARRY4((int)puVar14,*puVar14);
              puVar14 = (uint *)((int)puVar14 + *puVar14);
              if (!bVar46) {
                uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar41);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar44;
                bVar26 = (byte)puVar14;
                *(byte *)((int)param_2 + (int)unaff_EBP) =
                     *(byte *)((int)param_2 + (int)unaff_EBP) + bVar26;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
                *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar26;
                bVar28 = (byte)((uint)value >> 8);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar28;
                *(byte *)puVar14 = (byte)*puVar14 + bVar26;
                pbVar15 = (byte *)CONCAT31((int3)((uint)puVar14 >> 8),bVar26 | (byte)*puVar14);
                *(byte *)value = (byte)*value + cVar6;
                bVar37 = *pbVar15;
                uVar31 = (undefined2)((uint)value >> 0x10);
                value = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar37,bVar8));
                pbVar15 = pbVar15 + (uint)CARRY1(bVar28,*pbVar15) + *(int *)pbVar15;
                *(byte *)param_2 = (byte)*param_2 + bVar8;
                unaff_EBP = unaff_EBP + iRam0355720b;
                pbVar10 = pbVar15 + 0x73;
                bVar26 = *pbVar10;
                *pbVar10 = *pbVar10 + bVar34;
                uVar24 = (undefined3)((uint)pbVar15 >> 8);
                bVar26 = (char)pbVar15 + CARRY1(bVar26,bVar34);
                pcVar36 = (char *)CONCAT31(uVar24,bVar26);
                *(byte *)param_2 = (byte)*param_2 + bVar8;
                if ((POPCOUNT((byte)*param_2) & 1U) == 0) {
                  in_SS = uVar41;
                }
                puVar40 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x17));
                *pcVar36 = *pcVar36 + bVar26;
                cVar6 = bVar26 + 2;
                puVar14 = (uint *)CONCAT31(uVar24,cVar6);
                if (bVar26 < 0xfe) {
                  *puVar14 = (uint)(*puVar14 + (int)puVar14);
                  goto code_r0x00402a8f;
                }
                *(byte *)puVar14 = (byte)*puVar14 + cVar6;
                uVar12 = *param_2;
                puVar38 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
                *(byte *)puVar14 = (byte)*puVar14 + cVar6;
                value = (uint *)CONCAT22(uVar31,CONCAT11(bVar28 + bVar37 | (byte)*puVar14,
                                                         bVar8 | (byte)uVar12));
                unaff_EDI = puVar40;
                goto code_r0x00402a36;
              }
            } while( true );
          }
        }
        unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar26;
        pbVar10 = (byte *)((int)puVar14 + 0x73);
        bVar44 = CARRY1(*pbVar10,bVar8);
        *pbVar10 = *pbVar10 + bVar8;
      } while( true );
    }
    *(byte *)param_2 = (byte)*param_2 + (char)value;
    cVar7 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar7) +
                                                   0x12),cVar7));
    *pcVar36 = *pcVar36 + cVar6;
    bVar26 = cVar6 + 0x2aU & (byte)*param_2;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x12));
    *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
    puVar14 = (uint *)CONCAT31(uVar24,bVar26 + 0x2a);
    uStack_8 = in_DS;
code_r0x00402879:
    cVar6 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar6) +
                                                   0x13),cVar6));
    *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
    pbVar10 = (byte *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 0x2aU & (byte)*param_2);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x13));
  } while( true );
code_r0x00402992:
  pbVar10 = (byte *)((int)puVar14 + 0x2a);
  bVar44 = CARRY1(*pbVar10,bVar34);
  *pbVar10 = *pbVar10 + bVar34;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar14) = *(byte *)(in_GS_OFFSET + (int)puVar14) + (char)puVar14;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                    (char)value));
  *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
code_r0x00402a3e:
  uVar24 = (undefined3)((uint)puVar14 >> 8);
  bVar26 = (byte)puVar14 | (byte)*puVar38;
  pcVar36 = (char *)CONCAT31(uVar24,bVar26);
  if ((char)bVar26 < '\0') {
    *pcVar36 = *pcVar36 + bVar26;
    cVar6 = bVar26 + 2;
    piVar20 = (int *)CONCAT31(uVar24,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar20 = (char)*piVar20 + cVar6;
      bVar26 = bVar26 + 0x71;
      pcVar11 = (char *)CONCAT31(uVar24,bVar26);
      pcVar36 = (char *)segment(uVar43,(short)unaff_EBX + (short)puVar38);
      *pcVar36 = *pcVar36 + bVar26;
      uVar12 = unaff_EDI[0x1a];
      *pcVar11 = *pcVar11 + bVar26;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11((byte)((uint)value >> 8) | (byte)uVar12 |
                                        *(byte *)((int)unaff_EDI + 0x69),(char)value));
      *pcVar11 = *pcVar11 + bVar26;
      bVar26 = bVar26 | (byte)*param_2;
      pcVar36 = (char *)CONCAT31(uVar24,bVar26);
      if ((POPCOUNT(bVar26) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1;
    out(*puVar38,(short)param_2);
  }
  else {
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                          (char)unaff_EBX));
code_r0x00402a5d:
    *pcVar36 = *pcVar36 + (char)pcVar36;
    piVar20 = (int *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
    unaff_ESI = puVar38;
  }
code_r0x00402a61:
  pcVar36 = (char *)segment(uVar43,(short)unaff_EBX + (short)unaff_ESI);
  *pcVar36 = *pcVar36 + (char)piVar20;
  cVar6 = (char)value;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)unaff_EDI[0x1a],cVar6));
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  uVar31 = CONCAT11((byte)((uint)param_2 >> 8) | *(byte *)((int)param_2 + 0x65),(char)param_2);
  param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),uVar31);
  piVar16 = (int *)((int)piVar20 + *piVar20);
  puVar38 = unaff_ESI;
  puVar40 = unaff_EDI;
  uVar42 = uVar41;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402ae3;
  *(byte *)param_2 = (byte)*param_2 + cVar6;
  puVar38 = unaff_ESI + (uint)bVar45 * -2 + 1;
  out(*unaff_ESI,uVar31);
code_r0x00402a75:
  bVar26 = (byte)((uint)value >> 8) | (byte)*param_2;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar26,(char)value));
  piVar20 = (int *)(uint)(byte)*unaff_EBX;
  *(byte *)puVar38 = (byte)*puVar38 - bVar26;
  puVar40 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  out(*puVar38,(short)param_2);
  bVar26 = in((short)param_2);
  *(byte *)puVar40 = bVar26;
  *(char *)piVar20 = (char)*piVar20 + (char)piVar20;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)*param_2,(char)value));
  iVar17 = *piVar20;
  cVar6 = in(1);
  puVar14 = (uint *)CONCAT31((int3)((uint)((int)piVar20 + *piVar20) >> 8),cVar6);
  *(char *)puVar14 = (char)*puVar14 + cVar6;
  puVar14 = (uint *)((uint)puVar14 | *puVar14);
  *(byte *)value = (byte)*value + (char)param_2;
  puVar38 = (uint *)((int)puVar38 + (((uint)bVar45 * -8 + 4) - iVar17));
  puVar40 = (uint *)((int)puVar40 + (uint)bVar45 * -2 + 1);
  in_SS = uVar41;
  while( true ) {
    bVar26 = (byte)puVar14 | (byte)*param_2;
    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar26);
    unaff_EDI = puVar40;
    if ((POPCOUNT(bVar26) & 1U) != 0) break;
    *(byte *)puVar14 = (byte)*puVar14 + bVar26;
code_r0x00402a9b:
    uVar24 = (undefined3)((uint)puVar14 >> 8);
    cVar6 = (char)puVar14 + '\r';
    piVar16 = (int *)CONCAT31(uVar24,cVar6);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    *(byte *)(puVar38 + -0xc800000) = (byte)puVar38[-0xc800000] + (char)param_2;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    *(byte *)param_2 = (byte)*param_2 + cVar6;
    cVar7 = (char)value;
    if ((POPCOUNT((byte)*param_2) & 1U) != 0) {
      *(byte *)param_2 = (byte)*param_2 + cVar7;
      unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1;
      out(*puVar38,(short)param_2);
      piVar20 = (int *)((longlong)*piVar16 * 0x7b020a00);
      *(char *)piVar20 =
           (char)*piVar20 - ((longlong)(int)piVar20 != (longlong)*piVar16 * 0x7b020a00);
      pbVar10 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10;
      goto code_r0x00402a61;
    }
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    puVar14 = (uint *)CONCAT31(uVar24,(char)puVar14 + ':');
    unaff_ESI = (uint *)((uint)puVar38 | *(uint *)((int)param_2 + -0x79));
    iVar17 = (int)puVar14 + *puVar14;
    if (SCARRY4((int)puVar14,*puVar14)) {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
      *(char *)((int)param_2 * 2) = *(char *)((int)param_2 * 2) + (char)iVar17;
      puVar40 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar24 = (undefined3)((uint)iVar17 >> 8);
    cVar6 = (char)iVar17 + CARRY4((uint)puVar14,*puVar14);
    piVar20 = (int *)CONCAT31(uVar24,cVar6);
    *(byte *)param_2 = (byte)*param_2 + cVar7;
    bVar44 = (POPCOUNT((byte)*param_2) & 1U) != 0;
    if ((bVar44) && (bVar44)) goto code_r0x00402a61;
    *(char *)piVar20 = (char)*piVar20 + cVar6;
    cVar9 = cVar6 + '(';
    pcVar36 = (char *)CONCAT31(uVar24,cVar9);
    puVar40 = unaff_EDI + (uint)bVar45 * -2 + 1;
    uVar12 = in((short)param_2);
    *unaff_EDI = uVar12;
    *pcVar36 = *pcVar36 + cVar9;
    value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                             CONCAT11((byte)((uint)value >> 8) | bRama07b0222,cVar7));
    *pcVar36 = *pcVar36 + cVar9;
    pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)param_2);
    puVar38 = (uint *)((int)(unaff_ESI + (uint)bVar45 * -2 + 1) + (uint)bVar45 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar45 * -2 + 1],(short)param_2);
    bVar26 = (byte)pcVar36;
    *pcVar36 = *pcVar36 + bVar26;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar40);
    in_AF = 9 < (bVar26 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pcVar36 >> 8);
    bVar26 = bVar26 + in_AF * -6;
    param_2 = (uint *)((uint)param_2 ^ *param_2);
    cVar6 = bVar26 + (0x9f < bVar26 | in_AF * (bVar26 < 6)) * -0x60 + (byte)*param_2;
    piVar20 = (int *)CONCAT31(uVar24,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar20 = (char)*piVar20 + cVar6;
    piVar16 = (int *)CONCAT31(uVar24,cVar6 + '\x17');
    uVar42 = uVar41;
code_r0x00402ae3:
    out(*puVar38,(short)param_2);
    unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1 + (uint)bVar45 * -2 + 1;
    out(puVar38[(uint)bVar45 * -2 + 1],(short)param_2);
    *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
code_r0x00402ae7:
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x60],
                                          (char)unaff_EBX));
    cVar6 = (char)piVar16;
    *(char *)piVar16 = (char)*piVar16 + cVar6;
    uVar24 = (undefined3)((uint)piVar16 >> 8);
    bVar26 = cVar6 + 2;
    puVar14 = (uint *)CONCAT31(uVar24,bVar26);
    uVar41 = uVar42;
    if ((POPCOUNT(bVar26) & 1U) == 0) {
      *(byte *)puVar14 = (byte)*puVar14 + bVar26;
      cVar6 = cVar6 + '}';
      puVar14 = (uint *)CONCAT31(uVar24,cVar6);
      *(byte *)puVar14 = ((byte)*puVar14 - cVar6) - (0x84 < bVar26);
      pbVar10 = (byte *)((int)param_2 + (int)puVar14);
      *pbVar10 = *pbVar10 + cVar6;
      bVar26 = POPCOUNT(*pbVar10);
      puVar38 = unaff_ESI;
code_r0x00402af9:
      uVar41 = uVar42;
      unaff_EDI = puVar40;
      if ((bVar26 & 1) == 0) {
        *(byte *)puVar14 = (byte)*puVar14 + (char)puVar14;
        bVar26 = (byte)value;
        *(byte *)param_2 = (byte)*param_2 + bVar26;
        uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,in_SS);
        unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1;
        out(*puVar38,(short)param_2);
        uVar12 = *param_2;
        *(byte *)param_2 = (byte)*param_2 + bVar26;
        iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + 'o') +
                 *(int *)((int)param_2 * 2) + (uint)CARRY1((byte)uVar12,bVar26);
        pcVar36 = (char *)CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '(');
        while( true ) {
          uVar12 = *param_2;
          bVar8 = (byte)value;
          *(byte *)param_2 = (byte)*param_2 + bVar8;
          pcVar36 = pcVar36 + (uint)CARRY1((byte)uVar12,bVar8) + iRam73280512;
          bVar26 = (byte)pcVar36;
          *pcVar36 = *pcVar36 + bVar26;
          value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                   CONCAT11((byte)((uint)value >> 8) | bRam7d160243,bVar8));
          bVar45 = ((uint)uStack_28 & 0x400) != 0;
          in_AF = ((uint)uStack_28 & 0x10) != 0;
          *pcVar36 = *pcVar36 + bVar26;
          uVar24 = (undefined3)((uint)pcVar36 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar24,bVar26 + 2) + (uint)(0xfd < bVar26);
          cVar6 = bVar26 + 4;
          if (SCARRY1(bVar26 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar24,cVar6) = *(char *)CONCAT31(uVar24,cVar6) + cVar6;
          iVar17 = CONCAT31(uVar24,bVar26 + 0x16);
code_r0x00402b33:
          piVar16 = (int *)(iVar17 + 0xe2802);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)value >> 8);
          uVar42 = uVar41;
          uVar41 = in_SS;
          while( true ) {
            bVar8 = (byte)unaff_EBX | (byte)((uint)value >> 8);
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar8);
            *piVar16 = (int)(*piVar16 + (int)piVar16);
            cVar6 = (char)piVar16;
            *(byte *)param_2 = (byte)*param_2 + cVar6;
            if ((POPCOUNT((byte)*param_2) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar16 = (char)*piVar16 + cVar6;
            uVar12 = CONCAT31((int3)((uint)piVar16 >> 8),cVar6 + '\x13');
            puVar14 = (uint *)(uVar12 + 0x19061224 + (uint)(0x1f9edfd < uVar12));
            uVar13 = (uint)(0xe4ffffdd < uVar12 + 0xfe061202 ||
                           CARRY4(uVar12 + 0x19061224,(uint)(0x1f9edfd < uVar12)));
            uVar12 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)puVar14) + uVar13);
            bVar26 = POPCOUNT(*unaff_ESI & 0xff);
            puVar38 = unaff_ESI;
            if ((SCARRY4(uVar12,(int)puVar14) != SCARRY4((int)(uVar1 + (int)puVar14),uVar13)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar26 = (byte)puVar14;
            *(byte *)puVar14 = (byte)*puVar14 + bVar26;
            iVar17 = CONCAT31((int3)((uint)puVar14 >> 8),bVar26 + 2) + 0x9d7d +
                     (uint)(0xfd < bVar26);
            bVar26 = (byte)param_2 | (byte)*param_2;
            uVar12 = *unaff_EBX;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar8;
            pcVar36 = (char *)(CONCAT31((int3)((uint)iVar17 >> 8),(char)iVar17 + '\x12') + 0x228b26
                               + *puVar40 + (uint)CARRY1((byte)uVar12,bVar8));
            cVar6 = bVar26 + (byte)*value;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar6);
            if (SCARRY1(bVar26,(byte)*value) == cVar6 < '\0') break;
            *pcVar36 = *pcVar36 + (char)pcVar36;
            cVar6 = (char)pcVar36 + '\x02';
            pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6);
            bVar26 = POPCOUNT(cVar6);
            uVar42 = uVar41;
code_r0x00402b7a:
            puVar14 = unaff_ESI;
            if ((bVar26 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              uVar24 = (undefined3)((uint)pcVar36 >> 8);
              pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '\x13');
              *(byte *)value = (byte)*value | (byte)param_2;
              *(byte *)puVar40 = (byte)*puVar40 | (byte)param_2;
              *param_2 = (uint)(pcVar36 + *param_2);
              uVar31 = (undefined2)((uint)unaff_EBX >> 0x10);
              uVar35 = SUB41(unaff_EBX,0);
              cVar7 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
              unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar7,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + '\x13';
              piVar16 = (int *)CONCAT31(uVar24,cVar6 + -0x7a);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + (char)value;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar12,(char)value) == (char)(byte)*param_2 < '\0') break;
              *(char *)piVar16 = (char)*piVar16 + cVar6 + -0x7a;
              cVar9 = cVar6 + -0x78;
              piVar16 = (int *)CONCAT31(uVar24,cVar9);
              uVar4 = uVar42;
              if ((POPCOUNT(cVar9) & 1U) != 0) break;
              *(char *)piVar16 = (char)*piVar16 + cVar9;
              pcVar36 = (char *)CONCAT31(uVar24,cVar6 + -0x65);
              *value = *value | (uint)param_2;
              *puVar40 = *puVar40 | (uint)param_2;
              pbVar10 = (byte *)((int)value + -1);
              cVar7 = cVar7 + *(byte *)((int)unaff_EBX + -0x5e);
              unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar7,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + -0x65;
              bVar26 = cVar6 + 10;
              puVar38 = (uint *)CONCAT31(uVar24,bVar26);
              bVar8 = (byte)pbVar10;
              *(byte *)param_2 = (byte)*param_2 + bVar8;
              unaff_ESI = puVar14 + (uint)bVar45 * -2 + 1;
              out(*puVar14,(short)param_2);
              uVar12 = *param_2;
              *(byte *)param_2 = (byte)*param_2 + bVar8;
              uVar2 = (uint)CARRY1((byte)uVar12,bVar8);
              uVar12 = *param_2;
              uVar1 = *param_2;
              pbVar15 = pbVar10 + uVar1 + uVar2;
              uVar5 = *param_2;
              cRam130a0000 = cRam130a0000 - cVar7;
              uVar13 = *param_2;
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar38);
              *(byte *)puVar38 = (char)*puVar38 + bVar26;
              value = (uint *)CONCAT22((short)((uint)pbVar15 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar15 >> 8) | bRam7d170243,
                                                (char)pbVar15 + (byte)uVar5 +
                                                (CARRY4((uint)pbVar10,uVar12) ||
                                                CARRY4((uint)(pbVar10 + uVar1),uVar2))));
              bVar45 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar38 = (char)*puVar38 + bVar26;
              bVar44 = 0xfd < bVar26;
              pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '\f');
              param_2 = (uint *)((uint)param_2 | uVar13);
code_r0x00402bd1:
              uVar12 = *unaff_EBX;
              uVar1 = *unaff_EBX;
              *unaff_EBX = (uint)((byte *)(uVar1 + (int)value) + bVar44);
              bVar26 = POPCOUNT(*unaff_EBX & 0xff);
              uVar42 = in_SS;
              if ((SCARRY4(uVar12,(int)value) != SCARRY4((int)(uVar1 + (int)value),(uint)bVar44)) ==
                  (int)*unaff_EBX < 0) goto code_r0x00402b7a;
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar36 = *pcVar36 + (char)pcVar36;
                pcVar36 = (char *)(CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + '\x12') |
                                  *param_2);
                *(byte *)puVar40 = (byte)*puVar40 - (char)value;
                *pcVar36 = *pcVar36 + (char)pcVar36;
                puVar14 = (uint *)((int)param_2 - *unaff_ESI);
                bVar26 = (byte)unaff_EBX | (byte)((uint)value >> 8);
                cVar6 = *pcVar36;
                uVar24 = (undefined3)((uint)pcVar36 >> 8);
                pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                *pcVar36 = *pcVar36 + cVar6;
                pcVar11 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar26) + -0x5b),bVar26));
                *pcVar36 = *pcVar36 + cVar6;
                bVar44 = false;
                pcVar36 = (char *)(CONCAT31(uVar24,cVar6 + '\x13') | *puVar14);
                do {
                  bVar8 = (byte)value;
                  bVar26 = bVar8 + (byte)unaff_ESI[(int)puVar40 * 2];
                  value = (uint *)CONCAT31((int3)((uint)value >> 8),bVar26 + bVar44);
                  uVar12 = (uint)(CARRY1(bVar8,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                 CARRY1(bVar26,bVar44));
                  pcVar18 = pcVar36 + 0x1b000019 + uVar12;
                  piVar20 = (int *)((int)puVar40 * 2 + 0x40000a5);
                  *piVar20 = (int)((int)value +
                                  (uint)((char *)0xe4ffffe6 < pcVar36 ||
                                        CARRY4((uint)(pcVar36 + 0x1b000019),uVar12)) + *piVar20);
                  puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),(char)puVar14 + cRam00009d7d
                                            );
                  uVar24 = (undefined3)((uint)pcVar18 >> 8);
                  bVar26 = (char)pcVar18 + 0x12;
                  in_AF = 9 < (bVar26 & 0xf) | in_AF;
                  uVar12 = CONCAT31(uVar24,bVar26 + in_AF * -6) & 0xffffff0f;
                  pcVar36 = (char *)CONCAT22((short)(uVar12 >> 0x10),
                                             CONCAT11((char)((uint)pcVar18 >> 8) - in_AF,
                                                      (char)uVar12));
                  pcVar18 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar24,bVar26));
                  while( true ) {
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    puVar14 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),
                                               (byte)puVar14 | (byte)*puVar14);
                    puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                    uVar12 = (uint)pcVar11 | (uint)unaff_ESI;
                    unaff_EBP = pcVar18 + 1;
                    uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar41);
                    cVar7 = (char)(pcVar36 + 0x1b000019);
                    uVar24 = (undefined3)((uint)(pcVar36 + 0x1b000019) >> 8);
                    cVar6 = cVar7 + -0x13;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                    uVar31 = (undefined2)(uVar12 >> 0x10);
                    cVar9 = (char)(uVar12 >> 8) + *(char *)(uVar12 - 0x5e);
                    unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar9,(byte)uVar12));
                    *pcVar36 = *pcVar36 + cVar6;
                    pcVar36 = (char *)(CONCAT31(uVar24,cVar7 + '\x19') | *puVar14);
                    bVar26 = (byte)pcVar36;
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      pbVar10 = (byte *)((int)puVar14 + (int)pcVar36);
                      bVar44 = CARRY1(*pbVar10,bVar26);
                      *pbVar10 = *pbVar10 + bVar26;
                      param_2 = puVar14;
                      goto code_r0x00402bd1;
                    }
                    *pcVar36 = *pcVar36 + bVar26;
                    uVar24 = (undefined3)((uint)pcVar36 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar24,bVar26 + 0x6f);
                    param_2 = (uint *)((int)puVar14 + 1);
                    *pcVar11 = *pcVar11 + bVar26 + 0x6f;
                    bVar8 = (byte)uVar12 | (byte)((uint)pcVar36 >> 8);
                    pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x5c);
                    cVar9 = cVar9 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar8) + -0x5f);
                    unaff_EBX = (uint *)CONCAT22(uVar31,CONCAT11(cVar9,bVar8));
                    *pcVar36 = *pcVar36 + bVar26 + 0x5c;
                    pcVar36 = (char *)(CONCAT31(uVar24,bVar26 + 0x88) | *param_2);
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)value >> 8);
                      uStack_28 = (uint *)((uint)uStack_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    uVar24 = (undefined3)((uint)pcVar36 >> 8);
                    cVar6 = (char)pcVar36 + 'o';
                    puVar14 = (uint *)((int)puVar14 + 2);
                    *(char *)CONCAT31(uVar24,cVar6) = *(char *)CONCAT31(uVar24,cVar6) + cVar6;
                    pcVar11 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                               bVar8 | (byte)((uint)pcVar36 >> 8));
                    pcVar36 = (char *)(CONCAT31(uVar24,cVar6) | 2);
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    bVar26 = (byte)pcVar36;
                    *pcVar36 = *pcVar36 + bVar26;
                    bVar44 = 0xfd < bVar26;
                    cVar6 = bVar26 + 2;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                    uVar43 = uVar41;
                    if (SCARRY1(bVar26,'\x02') != cVar6 < '\0') break;
                    *pcVar36 = *pcVar36 + cVar6;
                    bVar8 = bVar26 + 10;
                    pcVar36 = (char *)CONCAT31(uVar24,bVar8);
                    *pcVar36 = *pcVar36 - cVar9;
                    cVar7 = (char)value;
                    *(byte *)puVar14 = *(byte *)puVar14 + cVar7;
                    pcVar18[-0x62] = pcVar18[-0x62] + '\x01';
                    *pcVar36 = *pcVar36 + bVar8;
                    cVar6 = bVar26 + 0xc;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                    if (SCARRY1(bVar8,'\x02') == cVar6 < '\0') {
                      *pcVar36 = *pcVar36 + cVar6;
                      *(byte *)value = (byte)*value - cVar9;
                      *(byte *)puVar14 = *(byte *)puVar14 + cVar7;
                      cVar6 = (bVar26 + 0x13) - (byte)value[0x13];
                      pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                      *pcVar36 = *pcVar36 + cVar6;
                      pcVar19 = (char *)CONCAT31(uVar24,cVar6 + *pcVar36);
                      *pcVar19 = *pcVar19 + cVar6 + *pcVar36;
                      pcVar19 = pcVar19 + *value;
                      *pcVar19 = *pcVar19 + (char)pcVar19;
                      LOCK();
                      pcVar36 = *(char **)pcVar19;
                      *(char **)pcVar19 = pcVar19;
                      UNLOCK();
                      *pcVar36 = *pcVar36 + (char)pcVar36;
                      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(byte)*value);
                      *pbVar10 = *pbVar10 + (byte)*value;
                      goto code_r0x00402c8d;
                    }
                    value = (uint *)CONCAT31((int3)((uint)value >> 8),
                                             cVar7 + *pcVar11 + (0xfd < bVar8));
                    *(byte *)puVar40 = (byte)*puVar40 - cVar9;
                    pcVar18 = unaff_EBP;
                  }
                } while( true );
              }
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -99),(char)unaff_EBX)
                                          );
              puVar14 = unaff_ESI;
            }
            *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
            param_2 = (uint *)((int)param_2 - *puVar14);
            unaff_ESI = puVar14;
            uVar42 = uVar41;
            uVar41 = uVar4;
          }
          *(byte *)param_2 = (byte)*param_2 + (char)value;
          pcVar36 = pcVar36 + -0x7d160243;
        }
        pcVar36 = (char *)CONCAT31(uVar24,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)value;
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + (byte)puVar14;
    *puVar40 = (uint)((int)param_2 + (uint)CARRY1((byte)uVar12,(byte)puVar14) + *puVar40);
    puVar38 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar30 = (char)value;
      cVar27 = (char)((uint)value >> 8) + (char)((uint)pbVar10 >> 8);
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(cVar27,cVar30));
      cVar6 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar6;
      pcVar36 = (char *)((int)pbVar10 * 2 + 0x1a10000);
      cVar9 = (char)((uint)pcVar11 >> 8);
      *pcVar36 = *pcVar36 + cVar9;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      pbVar10[-0x47ffffff] = pbVar10[-0x47ffffff] + cVar9;
      *(byte **)pbVar10 = pbVar10 + *(int *)pbVar10;
      bVar8 = (byte)puVar14;
      *(byte *)puVar40 = (byte)*puVar40 + bVar8;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + cVar6;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar31 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar9 = cVar9 + (byte)unaff_ESI[(int)pcVar11];
      pcVar36 = (char *)CONCAT22(uVar31,CONCAT11(cVar9,(char)pcVar11));
      pcVar36[(int)pbVar10] = pcVar36[(int)pbVar10] + cVar6;
      *(byte *)puVar14 = *(byte *)puVar14 - cVar9;
      *(byte *)puVar14 = *(byte *)puVar14 + cVar30;
      uVar24 = (undefined3)((uint)pbVar10 >> 8);
      bVar26 = cVar6 - *pbVar10;
      *pcVar36 = *pcVar36 + bVar8;
      *(byte *)puVar14 = *(byte *)puVar14 ^ bVar26;
      *(byte *)puVar14 = *(byte *)puVar14 + bVar26;
      *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
      uVar12 = *value;
      *(byte *)value = (byte)*value + bVar8;
      cVar7 = bVar26 + *(char *)CONCAT31(uVar24,bVar26) + CARRY1((byte)uVar12,bVar8);
      pcVar11 = (char *)CONCAT22(uVar31,CONCAT11(cVar9 + pcVar18[-0x60],(char)pcVar11));
      *(char *)CONCAT31(uVar24,cVar7) = *(char *)CONCAT31(uVar24,cVar7) + cVar7;
      cVar9 = cVar7 + '\x12';
      pbVar10 = (byte *)CONCAT31(uVar24,cVar9);
      cVar6 = *pcVar11;
      *pcVar11 = *pcVar11 + cVar9;
      if (SCARRY1(cVar6,cVar9) != *pcVar11 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar10;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
      *(byte *)puVar14 = *(byte *)puVar14 + cVar6;
      *pbVar10 = *pbVar10 + cVar6;
    }
    *pbVar10 = *pbVar10 + cVar9;
    pbVar10 = (byte *)CONCAT31(uVar24,cVar7 + '$');
    *pbVar10 = *pbVar10 + cVar27;
    bVar26 = *(byte *)puVar14;
    *(byte *)puVar14 = *(byte *)puVar14 + cVar30;
    uVar42 = uVar41;
    uVar43 = in_DS;
  } while (SCARRY1(bVar26,cVar30) == (char)*(byte *)puVar14 < '\0');
  do {
    cVar6 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar6;
    uVar24 = (undefined3)((uint)pbVar10 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar14;
    bVar8 = cVar6 + 0x24;
    cVar9 = (char)((uint)pcVar11 >> 8);
    pcVar11[-0x62] = pcVar11[-0x62] + cVar9;
    *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
    bVar26 = cVar6 + 0x2fU + (byte)*value;
    cVar7 = bVar26 + (0xf4 < bVar8);
    cVar6 = cVar7 + *(char *)CONCAT31(uVar24,cVar7) +
            (CARRY1(cVar6 + 0x2fU,(byte)*value) || CARRY1(bVar26,0xf4 < bVar8));
    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
    *pcVar36 = *pcVar36 - (char)puVar14;
    *pcVar36 = *pcVar36 + cVar6;
    pcVar18 = (char *)((int)puVar14 - *puVar14);
    *(byte *)(unaff_ESI + (int)pcVar11) = (byte)unaff_ESI[(int)pcVar11] + cVar9;
    pcVar36[(int)unaff_EBP] = pcVar36[(int)unaff_EBP] + cVar6;
    *pcVar18 = *pcVar18 + (char)value;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                               CONCAT11((char)((uint)pbVar10 >> 8) - *pcVar18,cVar6));
    uVar12 = *puVar40;
    *pcVar36 = *pcVar36 - (char)((uint)pcVar18 >> 8);
    *pcVar36 = *pcVar36 + cVar6;
    uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar42);
    pbVar15 = (byte *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11(cVar9 - (byte)*unaff_ESI,(char)pcVar11));
    unaff_EBP = unaff_EBP + *(int *)(pbVar15 + (int)value);
    puVar38 = (uint *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + (byte)uVar12);
    while( true ) {
      puVar14 = puVar38;
      uVar31 = (undefined2)((uint)pbVar15 >> 0x10);
      bVar37 = (char)((uint)pbVar15 >> 8) + pbVar15[0x18];
      *pcVar36 = *pcVar36 + (char)pcVar36;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
      cVar6 = (char)value;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      uVar12 = *unaff_ESI;
      bVar34 = (byte)((uint)value >> 8);
      bVar26 = *pbVar10;
      pbVar10 = pbVar10 + (uint)CARRY1(bVar34,*pbVar10) + *(int *)pbVar10;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      cVar7 = ((char)pbVar15 - (byte)uVar12) - (byte)*unaff_ESI;
      bVar8 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar10 = *pbVar10 + (char)pbVar10;
      value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                               CONCAT11(bVar34 + bVar26 + bVar8 | (byte)*puVar14,cVar6));
      pbVar10 = pbVar10 + *puVar14;
      if ((POPCOUNT((uint)pbVar10 & 0xff) & 1U) != 0) break;
      *pbVar10 = *pbVar10 + (char)pbVar10;
      bVar26 = (char)pbVar10 + 0x6f;
      pcVar36 = (char *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar26);
      pcVar11 = (char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar37,(char)pbVar15)) >> 8),cVar7
                                 ) + -1);
      *pcVar36 = *pcVar36 + bVar26;
      *pcVar36 = *pcVar36 + bVar26;
      *pcVar11 = *pcVar11 + (byte)puVar14;
      *(byte *)((int)pcVar36 * 2) = *(byte *)((int)pcVar36 * 2) ^ bVar26;
      uVar3 = *(undefined6 *)pcVar36;
      uVar42 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar36 = (char *)uVar3;
      *pcVar36 = *pcVar36 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar36 = (char *)((uint)pcVar36 | 0x73110008);
      bVar37 = (byte)((uint)pcVar11 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar37;
      *(byte *)puVar14 = (byte)*puVar14 + cVar6;
      puVar38 = unaff_ESI + (uint)bVar45 * -2 + 1;
      out(*unaff_ESI,(short)puVar14);
      *pcVar36 = *pcVar36;
      cVar6 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar6;
      bVar26 = unaff_EBP[-0x5a];
      uVar31 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar7 = (char)pcVar11;
      *pcVar36 = *pcVar36 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar12 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      value = (uint *)(uVar12 | 0x73110000);
      unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1;
      out(*puVar38,(short)puVar14);
      *(byte *)value = (byte)*value;
      bVar34 = (byte)puVar14 | (byte)*puVar40;
      puVar38 = (uint *)CONCAT31((int3)((uint)puVar14 >> 8),bVar34);
      *(byte *)value = (byte)*value + cVar6;
      pcVar36 = (char *)(uVar12 | 0x7b1f1609);
      bVar45 = (uVar43 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | (uint)unaff_EBP;
      bVar8 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar8;
      bVar37 = bVar37 | bVar26 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar15 = (byte *)CONCAT22(uVar31,CONCAT11(bVar37,cVar7));
      *pcVar36 = *pcVar36 + bVar8;
      uVar24 = (undefined3)((uint)pcVar36 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar38 + (uint)(0xd2 < bVar8) + unaff_ESI[(int)puVar40 * 2]);
      bVar26 = bVar8 + 0x2d ^ *(byte *)CONCAT31(uVar24,bVar8 + 0x2d);
      pcVar36 = (char *)CONCAT31(uVar24,bVar26);
      uVar12 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar26;
      uVar43 = uVar42;
      if (CARRY1((byte)uVar12,bVar26)) {
        *pcVar36 = *pcVar36 + bVar26;
        bVar26 = bVar26 | pcVar36[0x4000019];
        pcVar36 = (char *)CONCAT31(uVar24,bVar26);
        if ('\0' < (char)bVar26) {
          *pcVar36 = *pcVar36 + bVar26;
          piVar20 = (int *)CONCAT31(uVar24,bVar26 + 0x28);
          *piVar20 = (int)piVar20 + (uint)(0xd7 < bVar26) + *piVar20;
          bVar28 = (byte)((uint6)uVar3 >> 8);
          *pbVar15 = *pbVar15 + bVar28;
          uVar32 = CONCAT11((byte)((uint)puVar14 >> 8) | bVar37,bVar34);
          puVar38 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),uVar32);
          uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar42);
          bVar34 = in(uVar32);
          pbVar10 = (byte *)CONCAT31(uVar24,bVar34);
          bVar8 = *pbVar10;
          bVar44 = SCARRY1(*pbVar10,bVar34);
          *pbVar10 = *pbVar10 + bVar34;
          bVar26 = *pbVar10;
          puVar14 = unaff_ESI;
          in_SS = uVar42;
          if (!CARRY1(bVar8,bVar34)) goto code_r0x00402e19;
          *pbVar10 = *pbVar10 + bVar34;
          bVar28 = bVar28 | *pbVar10;
          value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar28,cVar6));
          pcVar36 = (char *)CONCAT31(uVar24,bVar34 + *pbVar10);
          *pbVar15 = *pbVar15 + bVar28;
        }
        uVar24 = (undefined3)((uint)pcVar36 >> 8);
        bVar8 = (byte)pcVar36 | (byte)*puVar38;
        pbVar10 = (byte *)CONCAT31(uVar24,bVar8);
        puVar14 = unaff_ESI + (uint)bVar45 * -2 + 1;
        out(*unaff_ESI,(short)puVar38);
        LOCK();
        bVar26 = *pbVar10;
        *pbVar10 = bVar8;
        UNLOCK();
        *(byte *)puVar38 = (byte)*puVar38 + (char)value;
        piVar20 = (int *)(CONCAT31(uVar24,bVar26) + -0x1b7e07);
        *(byte *)puVar38 = (byte)*puVar38 + (char)value;
        iVar17 = (int)value - *(int *)pbVar15;
        bVar26 = *(byte *)((int)puVar40 + -0x7a);
        uVar32 = (undefined2)((uint)iVar17 >> 0x10);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        bVar8 = (char)((uint)iVar17 >> 8) + bVar26 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar20 = *(char *)piVar20 + (char)piVar20;
        uVar24 = (undefined3)(CONCAT22(uVar32,CONCAT11(bVar8,(byte)iVar17)) >> 8);
        bVar26 = (byte)iVar17 | *pbVar15;
        value = (uint *)CONCAT31(uVar24,bVar26);
        pbVar10 = (byte *)((int)piVar20 + *piVar20);
        puVar22 = puVar14;
        if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e0a;
        *(byte *)value = (byte)*value + bVar26;
        *(byte **)pbVar15 = (byte *)(*(int *)pbVar15 + (int)puVar38);
        piVar20 = (int *)CONCAT31(uVar24,bVar26 + 0x27);
        value = (uint *)CONCAT22(uVar32,CONCAT11(bVar8 + *(byte *)((int)puVar40 + -0x79),bVar26));
        *(byte *)piVar20 = (char)*piVar20 + bVar26 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar11 = (char *)CONCAT22(uVar31,CONCAT11(bVar37 | unaff_EBP[-0x62],cVar7));
  } while( true );
code_r0x00402dff:
  pbVar10 = (byte *)CONCAT22((short)((uint)piVar20 >> 0x10),
                             CONCAT11((byte)((uint)piVar20 >> 8) |
                                      *(byte *)((int)puVar38 + 0x2170411),(byte)piVar20));
  puVar22 = puVar14 + (uint)bVar45 * -2 + 1;
  out(*puVar14,(short)puVar38);
  *pbVar10 = (byte)piVar20;
  *(byte *)puVar38 = (byte)*puVar38 + (char)value;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar10;
  *pbVar10 = *pbVar10 - cVar7;
  *pbVar10 = *pbVar10 + (char)pbVar10;
  bVar44 = false;
  bVar26 = (byte)((uint)value >> 8) | bRam052b0603;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar26,(char)value));
  puVar14 = puVar22;
code_r0x00402e19:
  if (bVar26 == 0 || bVar44 != (char)bVar26 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cRam89280411;
  piVar20 = (int *)CONCAT22((short)((uint)pbVar10 >> 0x10),
                            CONCAT11((byte)((uint)pbVar10 >> 8) |
                                     *(byte *)((int)puVar38 + 0x7190411),cRam89280411));
  *(char *)piVar20 = (char)*piVar20 + cRam89280411;
  cVar6 = (char)value;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)*puVar38,cVar6));
  puVar14 = (uint *)((int)puVar14 + *piVar20);
  pbVar10 = (byte *)((int)piVar20 + *piVar20);
  bVar8 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar8;
  *(byte *)puVar14 = (byte)*puVar14 + cVar6;
  bVar26 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar8;
  *(char **)pbVar10 = unaff_EBP + (uint)CARRY1(bVar26,bVar8) + *(int *)pbVar10;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),*pbVar10);
  *(byte *)puVar38 = (byte)*puVar38 + cVar6;
  puVar22 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(byte)puVar38 | (byte)*puVar38);
  pbVar10 = (byte *)((int)puVar22 + -0x43);
  *pbVar10 = *pbVar10 + (char)((uint)puVar38 >> 8);
  puVar38 = puVar22;
  puVar22 = puVar40;
  uVar43 = uVar41;
code_r0x00402e42:
  uVar41 = in_SS;
  puVar40 = puVar22;
  in_SS = uVar41;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e6e;
  iVar17 = *(int *)((int)piVar20 + *piVar20);
  *(byte *)puVar38 = (byte)*puVar38 + (char)value;
  piVar20 = (int *)(iVar17 + -0x8c6f);
  puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                             CONCAT11((byte)((uint)puVar38 >> 8) | *(byte *)((int)puVar38 + -0x3f),
                                      (char)puVar38));
  pbVar21 = (byte *)((int)piVar20 + *piVar20);
  pbVar10 = pbVar21;
  puVar40 = uStack_28;
  if (SCARRY4((int)piVar20,*piVar20)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar21 = *pbVar21 + (char)pbVar21;
  value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                           CONCAT11((byte)((uint)value >> 8) | (byte)*puVar38,(char)value));
  puVar22 = puVar14 + (uint)bVar45 * -2 + 1;
  out(*puVar14,(short)puVar38);
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar38 >> 8),(char)puVar38 + (byte)*puVar40);
  puVar14 = puVar22 + (uint)bVar45 * -2 + 1;
  out(*puVar22,(short)puVar38);
  uVar43 = uVar41;
  in_SS = uVar42;
code_r0x00402e6e:
  uVar41 = uVar43;
  uVar24 = (undefined3)((uint)puVar38 >> 8);
  cVar6 = (char)puVar38 + (byte)*puVar40;
  puVar22 = puVar14 + (uint)bVar45 * -2 + 1;
  out(*puVar14,(short)CONCAT31(uVar24,cVar6));
  puVar38 = (uint *)CONCAT31(uVar24,cVar6 + (byte)*puVar40);
  puVar14 = puVar22 + (uint)bVar45 * -2 + 1;
  out(*puVar22,(short)puVar38);
  pbVar10 = (byte *)0x0;
  puVar22 = puVar40;
code_r0x00402e81:
  puVar40 = puVar22;
  bVar8 = (char)pbVar10 - *pbVar10;
  iVar17 = CONCAT31((int3)((uint)pbVar10 >> 8),bVar8);
  *pbVar15 = *pbVar15 + (char)puVar38;
  pbVar21 = (byte *)(iVar17 * 2);
  *pbVar21 = *pbVar21 ^ bVar8;
  pbVar21 = (byte *)(int)(short)iVar17;
  *pbVar21 = *pbVar21 + bVar8;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)value;
  bVar26 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar8;
  *(byte **)(pbVar15 + -0x73) =
       (byte *)((int)puVar14 + (uint)CARRY1(bVar26,bVar8) + *(int *)(pbVar15 + -0x73));
  *pbVar21 = *pbVar21 + bVar8;
  bVar26 = (byte)value | (byte)*puVar38;
  value = (uint *)CONCAT31((int3)((uint)value >> 8),bVar26);
  puVar22 = puVar14;
  if ((char)bVar26 < '\x01') goto code_r0x00402eb4;
  *pbVar21 = *pbVar21 + bVar8;
  pbVar10 = (byte *)CONCAT31((int3)(char)((uint)pbVar10 >> 8),bVar8 + 0x2d);
  puVar14[(int)puVar40 * 2] =
       (uint)((int)puVar38 + (uint)(0xd2 < bVar8) + puVar14[(int)puVar40 * 2]);
  pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
  do {
    uVar12 = *puVar14;
    bVar26 = (byte)pbVar10;
    *(byte *)puVar14 = (byte)*puVar14 + bVar26;
    if (!CARRY1((byte)uVar12,bVar26)) break;
    *pbVar10 = *pbVar10 + bVar26;
    bVar26 = bVar26 | pbVar10[0x400001a];
    pbVar21 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar26);
    if ((char)bVar26 < '\x01') {
code_r0x00402ecc:
      *pbVar21 = *pbVar21 + (byte)pbVar21;
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar26 = (byte)pbVar21 | pbVar21[0x400001b];
      pcVar36 = (char *)CONCAT31(uVar24,bVar26);
      if ((char)bVar26 < '\x01') {
        uVar12 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + (byte)value;
        *(char *)((int)pcVar36 * 2) = *(char *)((int)pcVar36 * 2) - CARRY1((byte)uVar12,(byte)value)
        ;
        bVar44 = 0x81 < bVar26;
        bVar26 = bVar26 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar21 = *pbVar21 + bVar26;
      puVar22 = puVar14;
code_r0x00402eb4:
      uVar24 = (undefined3)((uint)pbVar21 >> 8);
      bVar26 = (char)pbVar21 + 0x6f;
      pcVar36 = (char *)CONCAT31(uVar24,bVar26);
      *(char **)pcVar36 = pcStack_44;
      uVar12 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + (char)value;
      pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
      in_DS = uVar42;
      if ((byte)*puVar38 != 0 && SCARRY1((byte)uVar12,(char)value) == (char)(byte)*puVar38 < '\0') {
        *pcVar36 = *pcVar36 + bVar26;
        bVar8 = (char)pbVar21 + 0x9c;
        pbVar21 = (byte *)CONCAT31(uVar24,bVar8);
        puVar22[(int)puVar40 * 2] =
             (uint)((int)puVar38 + (uint)(0xd2 < bVar26) + puVar22[(int)puVar40 * 2]);
        pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
        uVar12 = *puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + bVar8;
        puVar14 = puVar22;
        if (CARRY1((byte)uVar12,bVar8)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar14 = puVar22 + (uint)bVar45 * -2 + 1;
      out(*puVar22,(short)puVar38);
    }
    cVar6 = (char)pcVar36;
    *pcVar36 = *pcVar36 + cVar6;
    uVar24 = (undefined3)((uint)pcVar36 >> 8);
    bVar26 = cVar6 + 0x6f;
    pcVar36 = (char *)CONCAT31(uVar24,bVar26);
    *(char **)pcVar36 = pcStack_44;
    uVar12 = *puVar38;
    *(byte *)puVar38 = (byte)*puVar38 + (byte)value;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
    *(byte *)(puVar14 + 7) = ((byte)puVar14[7] - bVar37) - CARRY1((byte)uVar12,(byte)value);
    *pcVar36 = *pcVar36 + bVar26;
    bVar8 = cVar6 + 0x9c;
    pcVar36 = (char *)CONCAT31(uVar24,bVar8);
    puVar14[(int)puVar40 * 2] =
         (uint)((int)puVar38 + (uint)(0xd2 < bVar26) + puVar14[(int)puVar40 * 2]);
    uVar12 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar8;
    if (!CARRY1((byte)uVar12,bVar8)) goto code_r0x00402e7e;
    *pcVar36 = *pcVar36 + bVar8;
    bVar8 = bVar8 | pcVar36[0x400001c];
    pbVar10 = (byte *)CONCAT31(uVar24,bVar8);
    in_SS = uVar42;
    if ((char)bVar8 < '\x01') goto code_r0x00402f16;
    *pbVar10 = *pbVar10 + bVar8;
    pcVar36 = (char *)CONCAT31(uVar24,bVar8 + 0x6f);
    while( true ) {
      *(char **)pcVar36 = pcStack_44;
      uVar12 = *puVar38;
      *(byte *)puVar38 = (byte)*puVar38 + (byte)value;
      *(uint *)((int)puVar14 + 0x1d) =
           (*(int *)((int)puVar14 + 0x1d) - (int)puVar40) - (uint)CARRY1((byte)uVar12,(byte)value);
      bVar26 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar26;
      bVar8 = bVar26 + 0x2d;
      pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),bVar8);
      puVar14[(int)puVar40 * 2] =
           (uint)((int)puVar38 + (uint)(0xd2 < bVar26) + puVar14[(int)puVar40 * 2]);
      pcStack_44 = (char *)CONCAT22((short)((uint)pcStack_44 >> 0x10),uVar42);
      uVar12 = *puVar14;
      *(byte *)puVar14 = (byte)*puVar14 + bVar8;
      if (!CARRY1((byte)uVar12,bVar8)) break;
      *pbVar10 = *pbVar10 + bVar8;
code_r0x00402f16:
      bVar26 = (byte)pbVar10 | pbVar10[0x400001d];
      puVar22 = (uint *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar26);
      pcVar36 = unaff_EBP;
      if ((char)bVar26 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar36;
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
        uVar24 = (undefined3)((uint)puVar22 >> 8);
        cVar6 = (char)puVar22 + 'o';
        puVar39 = (uint *)CONCAT31(uVar24,cVar6);
        *puVar39 = (uint)pcStack_44;
        cVar9 = (char)value;
        *(byte *)puVar38 = (byte)*puVar38 + cVar9;
        pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
        bVar26 = (byte)((uint)puVar38 >> 8);
        bVar44 = bVar26 < (byte)*puVar14;
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),
                                   CONCAT11(bVar26 - (byte)*puVar14,(char)puVar38));
        if (bVar44) break;
        bVar44 = CARRY4((uint)puVar39,*puVar39);
        puVar22 = (uint *)((int)puVar39 + *puVar39);
        if (!SCARRY4((int)puVar39,*puVar39)) {
          bVar44 = CARRY4((uint)unaff_EBP,*puVar22);
          unaff_EBP = unaff_EBP + *puVar22;
        }
        *puVar22 = (*puVar22 - (int)puVar22) - (uint)bVar44;
        *(byte *)puVar38 = (byte)*puVar38 + cVar9;
        value = (uint *)CONCAT22((short)((uint)value >> 0x10),
                                 CONCAT11((char)((uint)value >> 8) + (byte)*puVar38,
                                          cVar9 - (byte)*puVar38));
        *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x00402f3b:
        cVar9 = (char)puVar38;
        *pbVar15 = *pbVar15 + cVar9;
        bVar26 = (byte)puVar22;
        *(byte *)((int)puVar22 * 2) = *(byte *)((int)puVar22 * 2) ^ bVar26;
        *(byte *)puVar22 = (byte)*puVar22 + bVar26;
        *(byte *)puVar22 = (byte)*puVar22 + cVar9;
        uVar12 = *puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + bVar26;
        *puVar38 = (uint)((int)puVar22 + (uint)CARRY1((byte)uVar12,bVar26) + *puVar38);
        pcVar36 = (char *)((uint)puVar22 | *puVar40);
        uVar24 = (undefined3)((uint)pcVar36 >> 8);
        cVar6 = (char)pcVar36 + *pcVar36;
        pcVar36 = (char *)CONCAT31(uVar24,cVar6);
        *pcVar36 = *pcVar36 + cVar6;
        cVar6 = cVar6 + *pcVar36;
        piVar20 = (int *)CONCAT31(uVar24,cVar6);
        *(char *)piVar20 = (char)*piVar20 + cVar6;
        iVar17 = LocalDescriptorTableRegister();
        *piVar20 = iVar17;
        bVar26 = *pbVar15;
        bVar29 = (byte)((uint)value >> 8);
        *pbVar15 = *pbVar15 + bVar29;
        iVar17 = *piVar20;
        uVar32 = (undefined2)((uint)value >> 0x10);
        bVar28 = (byte)value;
        *(byte *)puVar14 = (byte)*puVar14 + cVar6;
        puVar22 = puVar14 + (uint)bVar45 * -2 + 1;
        out(*puVar14,(short)puVar38);
        *(byte *)puVar22 = (byte)*puVar22 + cVar6;
        bVar8 = *pbVar15;
        *(byte *)puVar38 = (byte)*puVar38 - bVar37;
        *(byte *)puVar22 = (byte)*puVar22 + cVar6;
        puVar39 = puVar22 + (uint)bVar45 * -2 + 1;
        out(*puVar22,(short)puVar38);
        *(byte *)puVar39 = (byte)*puVar39 + cVar6;
        bVar34 = *pbVar15;
        *(uint *)((int)puVar38 + -0x23) = *(uint *)((int)puVar38 + -0x23) & (uint)puVar39;
        puVar23 = (ushort *)((int)piVar20 + *piVar20);
        if (!SCARRY4((int)piVar20,*piVar20)) {
          *puVar23 = in_DS;
        }
        *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
        uVar33 = CONCAT11((char)((uint)puVar38 >> 8) + *(byte *)((int)puVar38 + -0x15),cVar9);
        puVar38 = (uint *)CONCAT22((short)((uint)puVar38 >> 0x10),uVar33);
        puVar22 = (uint *)((int)puVar23 + *(int *)puVar23);
        if (!SCARRY4((int)puVar23,*(int *)puVar23)) {
          *(ushort *)puVar22 = in_DS;
        }
        cVar6 = (char)puVar22;
        *(byte *)puVar22 = (byte)*puVar22 + cVar6;
        cVar30 = ((bVar29 - (char)iVar17) - CARRY1(bVar26,bVar29) | bVar8 | bVar34) + (byte)*puVar22
        ;
        value = (uint *)CONCAT22(uVar32,CONCAT11(cVar30,bVar28));
        uVar12 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar28;
        if (CARRY1((byte)uVar12,bVar28)) {
          *(byte *)puVar22 = (byte)*puVar22 + cVar6;
          bVar26 = *(byte *)((int)puVar38 + 6);
          *(byte *)puVar38 = (byte)*puVar38 + bVar28;
          bVar8 = (cVar30 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar22 = (byte)*puVar22 + cVar6;
          bVar26 = bVar37 | bVar26 | *(byte *)((int)puVar38 + 0x2a);
          uVar12 = *puVar22;
          pbVar10 = (byte *)((int)puVar22 + (uint)CARRY1(bVar8,(byte)*puVar22) + *puVar22);
          *(byte *)puVar38 = (byte)*puVar38 + bVar28;
          cVar6 = cVar7 - (byte)*puVar39;
          cVar7 = bVar26 + *(char *)(CONCAT31((int3)(CONCAT22(uVar31,CONCAT11(bVar26,cVar7)) >> 8),
                                              cVar6) + 0x1e);
          *pbVar10 = *pbVar10 + (char)pbVar10;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          bVar26 = (char)pbVar10 + 0x2aU & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar6)) + 0x1f);
          *pcVar36 = *pcVar36 + bVar26 + 0x2a;
          bVar26 = bVar26 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar6)) + 0x20);
          *pcVar36 = *pcVar36 + bVar26 + 0x2a;
          bVar26 = bVar26 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar6)) + 0x21);
          *pcVar36 = *pcVar36 + bVar26 + 0x2a;
          bVar26 = bVar26 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar6)) + 0x22);
          *pcVar36 = *pcVar36 + bVar26 + 0x2a;
          bVar26 = bVar26 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
          bVar8 = bVar8 + (byte)uVar12 + *pcVar36;
          uVar25 = CONCAT22(uVar32,CONCAT11(bVar8,bVar28));
          cVar7 = cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(cVar7,cVar6)) + 0x25);
          *pcVar36 = *pcVar36 + bVar26 + 0x2a;
          bVar26 = bVar26 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
          pcVar11 = (char *)CONCAT22(uVar31,CONCAT11(cVar7 + *(char *)(CONCAT22(uVar31,CONCAT11(
                                                  cVar7,cVar6)) + 0x26),cVar6));
          *pcVar36 = *pcVar36 + bVar26 + 0x2a;
          bVar26 = bVar26 + 0x54 & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          cVar6 = bVar26 + 0x2a;
          pcVar36 = (char *)CONCAT31(uVar24,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar36 = *pcVar36 + cVar6;
            pbVar10 = (byte *)(CONCAT31(uVar24,bVar26 + 0x4f) + -0x33282610);
            bVar26 = *pbVar10;
            bVar34 = (byte)pbVar10;
            *pbVar10 = *pbVar10 + bVar34;
            uVar24 = (undefined3)((uint)pbVar10 >> 8);
            if (!CARRY1(bVar26,bVar34)) {
              if (!SCARRY1(bVar34,'\0')) {
                *pbVar10 = *pbVar10 + bVar34;
                uVar25 = CONCAT22(uVar32,CONCAT11(bVar8 | (byte)*puVar38,bVar28));
                bVar34 = bVar34 & (byte)*puVar38;
                *(char *)CONCAT31(uVar24,bVar34) = *(char *)CONCAT31(uVar24,bVar34) + bVar34;
                pcVar36 = (char *)CONCAT31(uVar24,bVar34 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar36 = (char *)CONCAT31(uVar24,bVar34 + *pcVar11);
              if (SCARRY1(bVar34,*pcVar11) != (char)(bVar34 + *pcVar11) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar26 = bVar34 + *pcVar11;
            pbVar10 = (byte *)CONCAT31(uVar24,bVar26);
            if (SCARRY1(bVar34,*pcVar11) == (char)bVar26 < '\0') {
              pcVar36 = (char *)CONCAT22(uVar32,CONCAT11(bVar8 | (byte)*puVar38,bVar28));
              *pcVar11 = *pcVar11 + cVar9;
              *(byte *)puVar38 = (byte)*puVar38 ^ bVar26;
              *(char *)((int)pbVar10 * 2) = *(char *)((int)pbVar10 * 2) + bVar26;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar36 = *pcVar36 + (char)pcVar36;
            uVar24 = (undefined3)((uint)pcVar36 >> 8);
            bVar26 = (char)pcVar36 + 0x2aU & (byte)*puVar38;
            *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
            pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x2a);
            *pcVar36 = *pcVar36 + bVar26 + 0x2a;
            pcVar36 = (char *)CONCAT31(uVar24,bVar26 + 0x54 & (byte)*puVar38);
code_r0x00403072:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            uVar24 = (undefined3)((uint)pcVar36 >> 8);
            pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '*');
            *pcVar36 = *pcVar36 + cVar6 + '*';
            bVar26 = cVar6 + 0x54U & (byte)*puVar38;
            *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
            pcStack_7c = (char *)CONCAT22(pcStack_7c._2_2_,uVar41);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar24,bVar26 + 0x2a),(char)uVar25));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar9;
            pcVar36 = pcStack_7c;
code_r0x0040309a:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            pcStack_7c = (char *)CONCAT22(pcStack_7c._2_2_,uVar42);
            *pcVar36 = *pcVar36 + cVar6;
            pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + 0x2aU & (byte)*puVar38);
          }
          cVar6 = (char)pbVar10;
          *pbVar10 = *pbVar10 + cVar6;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          cVar7 = cVar6 + '*';
          pcVar36 = (char *)CONCAT31(uVar24,cVar7);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar9;
          *pcVar36 = *pcVar36 + cVar7;
          cVar30 = (char)pcStack_7c - (byte)*puVar39;
          pcVar11 = (char *)CONCAT22((short)((uint)pcStack_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStack_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_7c >> 8),
                                                                 cVar30) + 0x34),cVar30));
          *pcVar36 = *pcVar36 + cVar7;
          bVar26 = cVar6 + 0x54U & (byte)*puVar38;
          *(char *)CONCAT31(uVar24,bVar26) = *(char *)CONCAT31(uVar24,bVar26) + bVar26;
          pbVar10 = (byte *)CONCAT31(uVar24,bVar26 + 0x2a);
          bVar26 = (byte)((uint)uVar25 >> 8);
          pcVar36 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar26 + *pbVar10,(char)uVar25));
          pbVar10 = pbVar10 + (uint)CARRY1(bVar26,*pbVar10) + *(int *)pbVar10;
          *(byte *)puVar38 = (byte)*puVar38 + (char)uVar25;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          cVar6 = (byte)pbVar10 - *pbVar10;
          piVar20 = (int *)CONCAT31(uVar24,cVar6);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar10 < *pbVar10) + *piVar20);
          cVar6 = cVar6 + (char)*piVar20;
          pbVar10 = (byte *)CONCAT31(uVar24,cVar6);
          *pbVar10 = *pbVar10 + cVar6;
code_r0x004030df:
          *pcVar36 = *pcVar36 + cVar9;
          bVar26 = *pbVar10;
          bVar8 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar8;
          *(byte **)(pcVar11 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar26,bVar8) + *(int *)(pcVar11 + -0x41));
          *pbVar10 = *pbVar10 + bVar8;
          uVar24 = (undefined3)((uint)pbVar10 >> 8);
          bVar8 = bVar8 | (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar8) = *(char *)CONCAT31(uVar24,bVar8) + bVar8;
          pcVar36 = (char *)CONCAT31(uVar24,bVar8 + 0x7b);
          *pcVar36 = *pcVar36 + bVar8 + 0x7b;
          pbVar10 = (byte *)((int)puVar39 + CONCAT31(uVar24,bVar8 - 8) + -1);
          *pbVar10 = *pbVar10 + (bVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar14 = puVar39 + (uint)bVar45 * -2 + 1;
        out(*puVar39,uVar33);
        pcVar36 = unaff_EBP + 1;
        pcStack_44 = unaff_EBP;
      }
      bVar26 = cVar6 - bVar44;
      pbVar10 = (byte *)((int)puVar14 + (int)puVar40 * 2);
      bVar44 = CARRY1(*pbVar10,bVar26);
      *pbVar10 = *pbVar10 + bVar26;
code_r0x00402ef9:
      pcVar36 = (char *)CONCAT31(uVar24,bVar26 - bVar44);
      pbVar10 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar10 = *pbVar10 + (bVar26 - bVar44);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)value = (byte)*value + (char)puVar38;
  puVar22 = puVar38 + 0x2828000;
  bVar26 = (byte)value;
  bVar44 = (byte)*puVar22 < bVar26;
  *(byte *)puVar22 = (byte)*puVar22 - bVar26;
  bVar26 = (byte)pbVar10 + *pbVar10;
  piVar20 = (int *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar26 + bVar44);
  puVar22 = puVar40;
  uVar43 = uVar41;
  if (CARRY1((byte)pbVar10,*pbVar10) || CARRY1(bVar26,bVar44)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar36 = *pcVar36 + bVar8;
  uVar43 = uVar41;
  in_SS = uVar42;
  goto code_r0x00402e6e;
}


