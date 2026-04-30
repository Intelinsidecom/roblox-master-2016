/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004028b8
 * Raw Name    : GetServerUrl
 * Demangled   : GetServerUrl
 * Prototype   : char * GetServerUrl(uint * envShortName, byte * param_2)
 * Local Vars  : pcStack_7c, pcStack_44, uStack_28, envShortName, puStack_14, puStack_10, pcStack_c, uStack_8, uVar1, uVar2, uVar3, uVar4, uVar5, cVar6, bVar7, cVar8, bVar9, cVar10, in_EAX, pcVar11, pbVar12, uVar13, uVar14, puVar15, pbVar16, piVar17, iVar18, pcVar19, pcVar20, piVar21, pbVar22, puVar23, uVar24, extraout_ECX, extraout_ECX_00, param_2, uVar25, cVar26, bVar27, bVar28, cVar29, uVar30, uVar31, uVar32, puVar33, bVar34, uVar35, unaff_EBX, puVar36, pcVar37, bVar38, unaff_EBP, unaff_ESI, puVar39, unaff_EDI, puVar40, in_ES, uVar41, uVar42, in_CS, in_SS, in_DS, uVar43, in_GS_OFFSET, in_CF, bVar44, in_AF, in_TF, in_IF, bVar45, bVar46, in_NT, uVar47
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

char * __fastcall GetServerUrl(uint *envShortName,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  undefined3 uVar24;
  byte *in_EAX;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  byte *pbVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  int *piVar21;
  byte *pbVar22;
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
  undefined2 uVar32;
  byte bVar34;
  uint *puVar33;
  undefined1 uVar35;
  byte bVar38;
  char *unaff_EBX;
  uint *puVar36;
  char *pcVar37;
  char *unaff_EBP;
  uint *unaff_ESI;
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
  byte in_CF;
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
  do {
    bVar9 = (byte)in_EAX;
                    /* .NET CLR Managed Code */
    bVar7 = bVar9 + 10;
    cVar6 = bVar7 + in_CF;
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),cVar6);
    if (0xf5 < bVar9 || CARRY1(bVar7,in_CF)) {
      *in_EAX = *in_EAX + cVar6;
      pcVar11 = (char *)((uint)in_EAX | *unaff_EDI);
      puVar36 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBP[-100],
                                          (char)unaff_EBX));
      *pcVar11 = *pcVar11 + (char)pcVar11;
      bVar7 = (char)pcVar11 + 7;
      uVar47 = CONCAT44(param_2,CONCAT31((int3)((uint)pcVar11 >> 8),bVar7));
code_r0x004028c8:
      puVar33 = (uint *)((ulonglong)uVar47 >> 0x20);
      pcVar11 = (char *)uVar47;
      uVar24 = (undefined3)((ulonglong)uVar47 >> 8);
      cVar6 = (char)uVar47;
      if ((POPCOUNT(bVar7) & 1U) == 0) {
        *pcVar11 = *pcVar11 + cVar6;
        puVar15 = (uint *)CONCAT31(uVar24,cVar6 + '-');
        unaff_ESI = (uint *)((uint)unaff_ESI | *(uint *)((int)puVar33 + 0x3b));
        bVar44 = CARRY4(*puVar15,(uint)puVar15);
        uVar13 = *puVar15;
        *puVar15 = (uint)(*puVar15 + (int)puVar15);
        if (SCARRY4(uVar13,(int)puVar15)) {
          bVar44 = CARRY4(*puVar15,(uint)puVar15);
          bVar46 = SCARRY4(*puVar15,(int)puVar15);
          *puVar15 = (uint)(*puVar15 + (int)puVar15);
          bVar7 = POPCOUNT(*puVar15 & 0xff);
          if (bVar46) goto code_r0x004029be;
          goto code_r0x0040294c;
        }
        do {
          puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + bVar44);
          *(byte *)puVar33 = (byte)*puVar33 + (char)envShortName;
          bVar44 = (POPCOUNT((byte)*puVar33) & 1U) == 0;
          if (bVar44) goto code_r0x004028e2;
code_r0x004028db:
          if (!bVar44) goto code_r0x00402879;
          *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
          puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + 'r');
          pcStack_c = unaff_EBP;
code_r0x004028e2:
          uVar13 = *puVar15;
          *puVar15 = (uint)(*puVar15 + (int)puVar15);
          if (SCARRY4(uVar13,(int)puVar15)) {
            if (*puVar15 == 0 || SCARRY4(uVar13,(int)puVar15) != (int)*puVar15 < 0)
            goto code_r0x0040296d;
            goto code_r0x00402957;
          }
          puVar36 = (uint *)((int)puVar36 + -1);
          cVar6 = (char)puVar15;
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                          CONCAT11((byte)((uint)envShortName >> 8) |
                                                   *(byte *)((int)envShortName + 0x16d7207),
                                                   (char)envShortName));
          pbVar12 = (byte *)((int)puVar15 + 0x7d);
          bVar7 = *pbVar12;
          bVar34 = (byte)((uint)puVar33 >> 8);
          bVar9 = *pbVar12;
          *pbVar12 = *pbVar12 + bVar34;
          pcStack_c = (char *)((uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar9,bVar34) * 0x800 |
                               (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                               (uint)((char)*pbVar12 < '\0') * 0x80 | (uint)(*pbVar12 == 0) * 0x40 |
                               (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar12) & 1U) == 0) * 4
                              | (uint)CARRY1(bVar7,bVar34));
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          pbVar12 = (byte *)(CONCAT31((int3)((uint)puVar15 >> 8),cVar6 + '+') ^ *unaff_EDI);
          if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) goto code_r0x00402898;
          bVar7 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar7;
          puVar15 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7 + 0x72);
          if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
            if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
          }
          else {
            *(byte *)((int)puVar15 + 0x6f) = *(byte *)((int)puVar15 + 0x6f) + bVar34;
          }
code_r0x00402905:
          uVar47 = CONCAT44(puVar33,puVar15);
          puVar36 = (uint *)((int)puVar36 + -1);
          cVar6 = (char)puVar15;
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          bVar7 = (byte)((uint)envShortName >> 8) | (byte)*envShortName;
          envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                          CONCAT11(bVar7,(char)envShortName));
          in_ES = (ushort)pcStack_c;
          if ((char)bVar7 < '\x01') {
            *(byte *)puVar15 = (byte)*puVar15 + cVar6;
            unaff_EDI = (uint *)((int)unaff_EDI - *(int *)(unaff_EBP + -100));
            goto code_r0x00402929;
          }
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          pcStack_c = "S";
          uVar47 = func_0x7346291c();
          *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
          envShortName = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                                          (byte)extraout_ECX | *(byte *)((ulonglong)uVar47 >> 0x20))
          ;
          while( true ) {
            pcVar11 = (char *)((int)uVar47 * 2);
            *pcVar11 = *pcVar11 - (char)envShortName;
            uVar13 = *puVar36;
            cVar6 = (char)((uint)envShortName >> 8);
            *(byte *)puVar36 = (byte)*puVar36 + cVar6;
            if (SCARRY1((byte)uVar13,cVar6) == (char)(byte)*puVar36 < '\0') {
              pbVar12 = (byte *)((int)unaff_EDI + (int)uVar47);
              *pbVar12 = *pbVar12 + (char)uVar47;
              bVar7 = *pbVar12;
              goto code_r0x004028c8;
            }
code_r0x00402929:
            puVar33 = (uint *)((ulonglong)uVar47 >> 0x20);
            cVar6 = (char)uVar47;
            *(char *)uVar47 = *(char *)uVar47 + cVar6;
            uVar24 = (undefined3)((ulonglong)uVar47 >> 8);
            bVar7 = cVar6 + 7;
            puVar15 = (uint *)CONCAT31(uVar24,bVar7);
            bVar9 = (byte)((ulonglong)uVar47 >> 0x28);
            if ((POPCOUNT(bVar7) & 1U) != 0) break;
            *(byte *)puVar15 = (byte)*puVar15 + bVar7;
            pcVar11 = (char *)CONCAT31(uVar24,cVar6 + '3');
            uVar30 = (undefined2)((uint)puVar36 >> 0x10);
            uVar35 = SUB41(puVar36,0);
            bVar7 = (char)((uint)puVar36 >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar7);
            puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(bVar7,uVar35));
            *pcVar11 = *pcVar11 + cVar6 + '3';
            cVar8 = cVar6 + ':';
            puVar15 = (uint *)CONCAT31(uVar24,cVar8);
            if ((POPCOUNT(cVar8) & 1U) != 0) {
              bVar7 = bVar7 | *(byte *)((int)puVar33 + 7);
              puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(bVar7,uVar35));
              bVar44 = (POPCOUNT(bVar7) & 1U) == 0;
              goto code_r0x004028db;
            }
            *(byte *)puVar15 = (byte)*puVar15 + cVar8;
            puVar15 = (uint *)(CONCAT31(uVar24,cVar6 + 'b') & 0xffffff72 | 0x2d2b0000);
            pbVar12 = (byte *)((int)puVar15 + 0x72);
            bVar46 = SCARRY1(*pbVar12,bVar9);
            *pbVar12 = *pbVar12 + bVar9;
            bVar7 = POPCOUNT(*pbVar12);
code_r0x0040294c:
            if ((bVar7 & 1) == 0) {
              *(byte *)((int)puVar15 + 0x72) =
                   *(byte *)((int)puVar15 + 0x72) + (char)((uint)puVar33 >> 8);
            }
            else if (bVar46) {
              unaff_EBP = *(char **)unaff_EBP;
              cVar6 = cRamc9721806;
              goto code_r0x004029c4;
            }
            unaff_EBP = (char *)0x7e700001;
            puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,in_SS);
code_r0x00402957:
            *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
            cVar6 = (char)puVar15 + '(';
            puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),cVar6);
            *(byte *)puVar15 = (byte)*puVar15 + cVar6;
            envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                            CONCAT11((byte)((uint)envShortName >> 8) |
                                                     (byte)*puVar15,(char)envShortName));
            *(byte *)puVar15 = (byte)*puVar15 + cVar6;
            puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                       CONCAT11((byte)((uint)puVar33 >> 8) | (byte)puVar36[0x18],
                                                (char)puVar33));
            unaff_ESI = puStack_14;
            unaff_EDI = puStack_10;
code_r0x00402966:
            *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
            bVar7 = (byte)((uint)puVar36 >> 8) | *(byte *)((int)puVar33 + 7);
            puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),CONCAT11(bVar7,(char)puVar36))
            ;
            if ((POPCOUNT(bVar7) & 1U) != 0) {
              puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + -0x21);
              goto code_r0x00402905;
            }
code_r0x0040296d:
            *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
            puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + '~');
code_r0x00402971:
            pcStack_c = (char *)(uint)in_SS;
            uVar41 = in_ES;
code_r0x00402972:
            *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
            in_ES = uVar41;
code_r0x00402974:
            bVar7 = 0xe9 < (byte)puVar15;
            puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,in_CS);
            in_CS = 0x2d0a;
            puStack_14 = (uint *)0x40297d;
            uVar47 = func_0x00006128();
            puVar33 = (uint *)uVar47;
            piVar21 = (int *)((int)((ulonglong)uVar47 >> 0x20) + -0x3d);
            *piVar21 = (int)((int)unaff_ESI + (uint)bVar7 + *piVar21);
            bVar44 = SCARRY4(*puVar33,(int)puVar33);
            *puVar33 = *puVar33 + (int)puVar33;
            uVar13 = *puVar33;
            envShortName = extraout_ECX_00;
            uVar41 = in_ES;
code_r0x00402982:
            bVar7 = POPCOUNT(uVar13 & 0xff);
            in_ES = uVar41;
            if (bVar44) {
              *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
              envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                              CONCAT11((byte)((uint)envShortName >> 8) |
                                                       *(byte *)((ulonglong)uVar47 >> 0x20),
                                                       (char)envShortName));
              goto code_r0x00402991;
            }
code_r0x00402984:
            pcVar11 = (char *)((ulonglong)uVar47 >> 0x20);
            if ((bVar7 & 1) == 0) {
              *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
              *pcVar11 = *pcVar11 + (char)envShortName;
              uVar47 = CONCAT44(CONCAT22((short)((ulonglong)uVar47 >> 0x30),
                                         CONCAT11((char)((ulonglong)uVar47 >> 0x28) - pcVar11[0x1f],
                                                  (char)((ulonglong)uVar47 >> 0x20))),
                                CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + '('));
code_r0x00402991:
              puVar33 = (uint *)((ulonglong)uVar47 >> 0x20);
              pbVar12 = (byte *)uVar47;
              bVar7 = (byte)uVar47;
              bVar44 = CARRY1(bVar7,*pbVar12);
              puVar15 = (uint *)CONCAT31((int3)((ulonglong)uVar47 >> 8),bVar7 + *pbVar12);
              uVar41 = in_ES;
              cVar6 = bVar7 + *pbVar12;
              if (SCARRY1(bVar7,*pbVar12)) goto code_r0x004029c4;
code_r0x00402995:
              puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                         CONCAT11(((char)((uint)puVar33 >> 8) -
                                                  *(byte *)((int)puVar33 + 0x6b)) - bVar44,
                                                  (char)puVar33));
              bVar7 = (byte)puVar15;
              bVar44 = CARRY1(bVar7,(byte)*puVar15);
              bVar46 = SCARRY1(bVar7,(byte)*puVar15);
              puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + (byte)*puVar15);
              in_ES = uVar41;
              do {
                uVar41 = in_ES;
                if (!bVar46) {
                  unaff_ESI = (uint *)((int)unaff_ESI + (uint)bVar44 + *puVar15);
                  pbVar12 = (byte *)((int)puVar15 + *puVar15);
                  bVar9 = (byte)pbVar12;
                  *pbVar12 = *pbVar12 + bVar9;
                  *(byte *)envShortName = (byte)*envShortName + (char)envShortName;
                  bVar7 = *pbVar12;
                  *pbVar12 = *pbVar12 + bVar9;
                  *unaff_EDI = (uint)((int)puVar36 + (uint)CARRY1(bVar7,bVar9) + *unaff_EDI);
                  *(uint *)(unaff_EBP + 0x100002b) =
                       *(uint *)(unaff_EBP + 0x100002b) | (uint)envShortName;
                  uVar24 = (undefined3)((uint)pbVar12 >> 8);
                  bVar9 = bVar9 | (byte)*unaff_ESI;
                  puVar15 = (uint *)CONCAT31(uVar24,bVar9);
                  uVar13 = *puVar15;
                  uVar1 = *puVar15;
                  *puVar15 = (uint)(*puVar15 + (int)puVar15);
                  if (SCARRY4(uVar1,(int)puVar15)) {
                    *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)puVar36;
                    *(byte *)puVar33 = (byte)*puVar33 + (char)envShortName;
                    *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)puVar36;
                  }
                  else {
                    in_SS = in_ES;
                    if (CARRY4(uVar13,(uint)puVar15)) goto code_r0x00402971;
                    bVar44 = CARRY1(bVar9,(byte)*puVar15);
                    bVar46 = SCARRY1(bVar9,(byte)*puVar15);
                    puVar15 = (uint *)CONCAT31(uVar24,bVar9 + (byte)*puVar15);
code_r0x004029be:
                    uVar41 = in_ES;
                    if (!bVar46) {
                      *(byte *)((int)puVar33 + -0x37) =
                           (*(byte *)((int)puVar33 + -0x37) - (char)((uint)puVar33 >> 8)) - bVar44;
                      cVar6 = cRamc9721806;
                      uStack_8 = in_ES;
code_r0x004029c4:
                      cRamc9721806 = cVar6;
                      bVar7 = (byte)puVar15;
                      bVar44 = CARRY1(bVar7,(byte)*puVar15);
                      bVar46 = SCARRY1(bVar7,(byte)*puVar15);
                      puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + (byte)*puVar15);
                      uVar41 = in_ES;
                      goto code_r0x004029c6;
                    }
                  }
                  bVar7 = (byte)envShortName;
                  bVar44 = CARRY1((byte)*puVar33,bVar7);
                  bVar46 = SCARRY1((byte)*puVar33,bVar7);
                  *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                  in_ES = uVar41;
                  if (bVar44) goto code_r0x00402966;
                }
code_r0x004029c6:
                in_ES = uStack_8;
                if (bVar46) goto code_r0x00402966;
                pcStack_c = (char *)(uint)uVar41;
                *(uint *)((int)puVar33 + -0x23) =
                     (*(int *)((int)puVar33 + -0x23) - (int)unaff_ESI) - (uint)bVar44;
                uVar13 = *puVar15;
                bVar7 = (byte)puVar15;
                uVar1 = *puVar15;
                uVar24 = (undefined3)((uint)puVar15 >> 8);
                bVar9 = bVar7 + (byte)*puVar15;
                puVar15 = (uint *)CONCAT31(uVar24,bVar9);
                if (SCARRY1(bVar7,(byte)uVar1)) goto code_r0x00402972;
                puStack_10 = (uint *)CONCAT22(puStack_10._2_2_,uVar41);
                cVar6 = (char)puVar33;
                bVar34 = ((char)((uint)puVar33 >> 8) - *(byte *)((int)puVar33 + -0xf)) -
                         CARRY1(bVar7,(byte)uVar13);
                puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),CONCAT11(bVar34,cVar6));
                puVar39 = (uint *)CONCAT31(uVar24,bVar9 + (byte)*puVar15);
                bVar7 = (byte)envShortName;
                in_ES = uVar41;
                if (SCARRY1(bVar9,(byte)*puVar15)) {
                  *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                  uVar47 = CONCAT44(puVar33,(int)puVar39 + -0x1c37211);
                  pcVar11 = (char *)((int)puVar39 + -0x1c3720a);
                  *pcVar11 = *pcVar11 + bVar34;
                  bVar7 = POPCOUNT(*pcVar11);
                  goto code_r0x00402984;
                }
                puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,uVar41);
                unaff_ESI = (uint *)((int)unaff_ESI +
                                    (-(uint)CARRY1(bVar9,(byte)*puVar15) -
                                    *(int *)((int)puVar33 + 5)));
                bVar44 = SCARRY4((int)puVar39,*puVar39);
                uVar13 = (int)puVar39 + *puVar39;
                uVar47 = CONCAT44(puVar33,uVar13);
                if (bVar44) goto code_r0x00402982;
                bVar9 = (byte)uVar13 + 0x8e;
                uVar14 = CONCAT31((int3)(uVar13 >> 8),bVar9 - CARRY4((uint)puVar39,*puVar39));
                *puVar36 = (*puVar36 - uVar14) -
                           (uint)((byte)uVar13 < 0x72 || bVar9 < CARRY4((uint)puVar39,*puVar39));
                pbVar12 = (byte *)(uVar14 - 0x5e);
                bVar9 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar34;
                uVar13 = (uint)CARRY1(bVar9,bVar34);
                uVar1 = uVar14 - 0x32d72;
                puVar15 = (uint *)(uVar1 - uVar13);
                if (SBORROW4(uVar14,0x32d72) != SBORROW4(uVar1,uVar13)) goto code_r0x00402992;
                uVar43 = in_DS;
                if (uVar14 < 0x32d72 || uVar1 < uVar13) {
                  *unaff_EBP = *unaff_EBP - (char)((uint)puVar15 >> 8);
                  *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                  puVar39 = unaff_ESI + 1;
                  out(*unaff_ESI,CONCAT11(bVar34,cVar6));
                  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
                  goto code_r0x00402a3e;
                }
                bVar44 = CARRY4((uint)puVar15,*puVar15);
                bVar46 = SCARRY4((int)puVar15,*puVar15);
                puVar15 = (uint *)((int)puVar15 + *puVar15);
                if (!bVar46) {
                  uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar41);
                  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar44;
                  bVar9 = (byte)puVar15;
                  *(byte *)((int)puVar33 + (int)unaff_EBP) =
                       *(byte *)((int)puVar33 + (int)unaff_EBP) + bVar9;
                  *(byte *)puVar36 = (byte)*puVar36 + cVar6;
                  *(byte *)puVar36 = (byte)*puVar36 ^ bVar9;
                  bVar27 = (byte)((uint)envShortName >> 8);
                  *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar27;
                  *(byte *)puVar15 = (byte)*puVar15 + bVar9;
                  pbVar16 = (byte *)CONCAT31((int3)((uint)puVar15 >> 8),bVar9 | (byte)*puVar15);
                  *(byte *)envShortName = (byte)*envShortName + cVar6;
                  bVar38 = *pbVar16;
                  uVar30 = (undefined2)((uint)envShortName >> 0x10);
                  envShortName = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar38,bVar7));
                  pbVar16 = pbVar16 + (uint)CARRY1(bVar27,*pbVar16) + *(int *)pbVar16;
                  *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                  unaff_EBP = unaff_EBP + iRam0355720b;
                  pbVar12 = pbVar16 + 0x73;
                  bVar9 = *pbVar12;
                  *pbVar12 = *pbVar12 + bVar34;
                  uVar24 = (undefined3)((uint)pbVar16 >> 8);
                  bVar9 = (char)pbVar16 + CARRY1(bVar9,bVar34);
                  pcVar11 = (char *)CONCAT31(uVar24,bVar9);
                  *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                  if ((POPCOUNT((byte)*puVar33) & 1U) == 0) {
                    in_SS = uVar41;
                  }
                  puVar40 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x17));
                  *pcVar11 = *pcVar11 + bVar9;
                  cVar6 = bVar9 + 2;
                  puVar15 = (uint *)CONCAT31(uVar24,cVar6);
                  if (bVar9 < 0xfe) {
                    *puVar15 = (uint)(*puVar15 + (int)puVar15);
                    goto code_r0x00402a8f;
                  }
                  *(byte *)puVar15 = (byte)*puVar15 + cVar6;
                  uVar13 = *puVar33;
                  puVar39 = (uint *)((int)unaff_ESI + puVar36[0x19]);
                  *(byte *)puVar15 = (byte)*puVar15 + cVar6;
                  envShortName = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar38 | (byte)*puVar15,
                                                                  bVar7 | (byte)uVar13));
                  unaff_EDI = puVar40;
                  goto code_r0x00402a36;
                }
              } while( true );
            }
          }
          unaff_EBP[0x13b720b] = unaff_EBP[0x13b720b] + bVar7;
          pbVar12 = (byte *)((int)puVar15 + 0x73);
          bVar44 = CARRY1(*pbVar12,bVar9);
          *pbVar12 = *pbVar12 + bVar9;
        } while( true );
      }
      *(byte *)puVar33 = (byte)*puVar33 + (char)envShortName;
      cVar8 = (char)puVar36 - (byte)*unaff_ESI;
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar8) +
                                                   0x12),cVar8));
      *pcVar11 = *pcVar11 + cVar6;
      bVar7 = cVar6 + 0x2aU & (byte)*puVar33;
      unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x12));
      *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
      puVar15 = (uint *)CONCAT31(uVar24,bVar7 + 0x2a);
      uStack_8 = in_DS;
code_r0x00402879:
      cVar8 = (char)puVar36 - (byte)*unaff_ESI;
      cVar6 = *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),cVar8) + 0x13);
      *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
      uVar24 = (undefined3)((uint)puVar15 >> 8);
      bVar7 = (char)puVar15 + 0x2aU & (byte)*puVar33;
      pcVar11 = (char *)CONCAT31(uVar24,bVar7);
      unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x13));
      *pcVar11 = *pcVar11 + bVar7;
      pbVar12 = (byte *)CONCAT31(uVar24,bVar7 + 0x2a);
      pcStack_c = (char *)(uint)in_DS;
      bVar7 = (byte)((uint)envShortName >> 8);
      bVar9 = bVar7 + *pbVar12;
      pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
      *(byte *)puVar33 = (byte)*puVar33 + (char)envShortName;
      puVar36 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar36 >> 0x10),
                                                 CONCAT11((char)((uint)puVar36 >> 8) + cVar6,cVar8))
                                       >> 8),cVar8 - (byte)*unaff_ESI);
      envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                      CONCAT11(bVar9 + *pbVar12,(char)envShortName));
      pbVar12 = pbVar12 + (uint)CARRY1(bVar9,*pbVar12) + *(int *)pbVar12;
code_r0x00402898:
      *(byte *)puVar33 = (byte)*puVar33 + (char)envShortName;
      param_2 = (byte *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                 CONCAT11((char)((uint)puVar33 >> 8) - (byte)*unaff_ESI,
                                          (char)puVar33));
      unaff_EBX = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                   CONCAT11((char)((uint)puVar36 >> 8) + (byte)puVar36[-0x19],
                                            (char)puVar36));
      *pbVar12 = *pbVar12 + (char)pbVar12;
      in_EAX = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + '\x03');
    }
    out(*unaff_ESI,(short)param_2);
    unaff_EBX = unaff_EBX + -1;
    bVar7 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar7;
    envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                    CONCAT11((byte)((uint)envShortName >> 8) | *param_2,
                                             (char)envShortName));
    *in_EAX = *in_EAX + bVar7;
    bVar9 = (byte)param_2;
    *unaff_EBX = *unaff_EBX + bVar9;
    *(byte *)((int)in_EAX * 2) = *(byte *)((int)in_EAX * 2) ^ bVar7;
    *in_EAX = *in_EAX + bVar7;
    *in_EAX = *in_EAX | bVar7;
    in_CF = CARRY1((byte)*envShortName,bVar9);
    *(byte *)envShortName = (byte)*envShortName + bVar9;
    unaff_ESI = unaff_ESI + 1;
  } while( true );
code_r0x00402992:
  pbVar12 = (byte *)((int)puVar15 + 0x2a);
  bVar44 = CARRY1(*pbVar12,bVar34);
  *pbVar12 = *pbVar12 + bVar34;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar15) = *(byte *)(in_GS_OFFSET + (int)puVar15) + (char)puVar15;
  envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                  CONCAT11((byte)((uint)envShortName >> 8) |
                                           *(byte *)((int)unaff_EDI + 0x66),(char)envShortName));
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
code_r0x00402a3e:
  uVar24 = (undefined3)((uint)puVar15 >> 8);
  bVar7 = (byte)puVar15 | (byte)*puVar39;
  pcVar11 = (char *)CONCAT31(uVar24,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar11 = *pcVar11 + bVar7;
    cVar6 = bVar7 + 2;
    piVar21 = (int *)CONCAT31(uVar24,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar21 = (char)*piVar21 + cVar6;
      bVar7 = bVar7 + 0x71;
      pcVar37 = (char *)CONCAT31(uVar24,bVar7);
      pcVar11 = (char *)segment(uVar43,(short)puVar36 + (short)puVar39);
      *pcVar11 = *pcVar11 + bVar7;
      uVar13 = unaff_EDI[0x1a];
      *pcVar37 = *pcVar37 + bVar7;
      envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                      CONCAT11((byte)((uint)envShortName >> 8) | (byte)uVar13 |
                                               *(byte *)((int)unaff_EDI + 0x69),(char)envShortName))
      ;
      *pcVar37 = *pcVar37 + bVar7;
      bVar7 = bVar7 | (byte)*puVar33;
      pcVar11 = (char *)CONCAT31(uVar24,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
    out(*puVar39,(short)puVar33);
  }
  else {
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((char)((uint)puVar36 >> 8) + (byte)puVar36[6],(char)puVar36)
                              );
code_r0x00402a5d:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    piVar21 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + 'o');
    unaff_ESI = puVar39;
  }
code_r0x00402a61:
  pcVar11 = (char *)segment(uVar43,(short)puVar36 + (short)unaff_ESI);
  *pcVar11 = *pcVar11 + (char)piVar21;
  cVar6 = (char)envShortName;
  envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                  CONCAT11((byte)((uint)envShortName >> 8) | (byte)unaff_EDI[0x1a],
                                           cVar6));
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  uVar30 = CONCAT11((byte)((uint)puVar33 >> 8) | *(byte *)((int)puVar33 + 0x65),(char)puVar33);
  puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),uVar30);
  piVar17 = (int *)((int)piVar21 + *piVar21);
  puVar39 = unaff_ESI;
  puVar40 = unaff_EDI;
  uVar42 = uVar41;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402ae3;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  puVar39 = unaff_ESI + (uint)bVar45 * -2 + 1;
  out(*unaff_ESI,uVar30);
code_r0x00402a75:
  bVar7 = (byte)((uint)envShortName >> 8) | (byte)*puVar33;
  envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                  CONCAT11(bVar7,(char)envShortName));
  piVar21 = (int *)(uint)(byte)*puVar36;
  *(byte *)puVar39 = (byte)*puVar39 - bVar7;
  puVar40 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  out(*puVar39,(short)puVar33);
  bVar7 = in((short)puVar33);
  *(byte *)puVar40 = bVar7;
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                  CONCAT11((byte)((uint)envShortName >> 8) | (byte)*puVar33,
                                           (char)envShortName));
  iVar18 = *piVar21;
  cVar6 = in(1);
  puVar15 = (uint *)CONCAT31((int3)((uint)((int)piVar21 + *piVar21) >> 8),cVar6);
  *(char *)puVar15 = (char)*puVar15 + cVar6;
  puVar15 = (uint *)((uint)puVar15 | *puVar15);
  *(byte *)envShortName = (byte)*envShortName + (char)puVar33;
  puVar39 = (uint *)((int)puVar39 + (((uint)bVar45 * -8 + 4) - iVar18));
  puVar40 = (uint *)((int)puVar40 + (uint)bVar45 * -2 + 1);
  in_SS = uVar41;
  while( true ) {
    bVar7 = (byte)puVar15 | (byte)*puVar33;
    puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),bVar7);
    unaff_EDI = puVar40;
    if ((POPCOUNT(bVar7) & 1U) != 0) break;
    *(byte *)puVar15 = (byte)*puVar15 + bVar7;
code_r0x00402a9b:
    uVar24 = (undefined3)((uint)puVar15 >> 8);
    cVar6 = (char)puVar15 + '\r';
    piVar17 = (int *)CONCAT31(uVar24,cVar6);
    *(uint *)(unaff_EBP + 2) = *(uint *)(unaff_EBP + 2) | (uint)piVar17;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    *(byte *)(puVar39 + -0xc800000) = (byte)puVar39[-0xc800000] + (char)puVar33;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    *(byte *)puVar33 = (byte)*puVar33 + cVar6;
    cVar8 = (char)envShortName;
    if ((POPCOUNT((byte)*puVar33) & 1U) != 0) {
      *(byte *)puVar33 = (byte)*puVar33 + cVar8;
      unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
      out(*puVar39,(short)puVar33);
      piVar21 = (int *)((longlong)*piVar17 * 0x7b020a00);
      *(char *)piVar21 =
           (char)*piVar21 - ((longlong)(int)piVar21 != (longlong)*piVar17 * 0x7b020a00);
      pbVar12 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12;
      goto code_r0x00402a61;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    puVar15 = (uint *)CONCAT31(uVar24,(char)puVar15 + ':');
    unaff_ESI = (uint *)((uint)puVar39 | *(uint *)((int)puVar33 + -0x79));
    iVar18 = (int)puVar15 + *puVar15;
    if (SCARRY4((int)puVar15,*puVar15)) {
      puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                 CONCAT11((char)((uint)puVar36 >> 8) + (byte)unaff_ESI[(int)puVar36]
                                          ,(char)puVar36));
      *(char *)((int)puVar33 * 2) = *(char *)((int)puVar33 * 2) + (char)iVar18;
      puVar40 = unaff_EDI;
      goto code_r0x00402b33;
    }
    uVar24 = (undefined3)((uint)iVar18 >> 8);
    cVar6 = (char)iVar18 + CARRY4((uint)puVar15,*puVar15);
    piVar21 = (int *)CONCAT31(uVar24,cVar6);
    *(byte *)puVar33 = (byte)*puVar33 + cVar8;
    bVar44 = (POPCOUNT((byte)*puVar33) & 1U) != 0;
    if ((bVar44) && (bVar44)) goto code_r0x00402a61;
    *(char *)piVar21 = (char)*piVar21 + cVar6;
    cVar10 = cVar6 + '(';
    pcVar11 = (char *)CONCAT31(uVar24,cVar10);
    puVar40 = unaff_EDI + (uint)bVar45 * -2 + 1;
    uVar13 = in((short)puVar33);
    *unaff_EDI = uVar13;
    *pcVar11 = *pcVar11 + cVar10;
    envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                    CONCAT11((byte)((uint)envShortName >> 8) | bRama07b0222,cVar8));
    *pcVar11 = *pcVar11 + cVar10;
    pcVar11 = (char *)CONCAT31(uVar24,cVar6 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)puVar33);
    puVar39 = (uint *)((int)(unaff_ESI + (uint)bVar45 * -2 + 1) + (uint)bVar45 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar45 * -2 + 1],(short)puVar33);
    bVar7 = (byte)pcVar11;
    *pcVar11 = *pcVar11 + bVar7;
    puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(byte)puVar36 | (byte)*puVar40);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pcVar11 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    puVar33 = (uint *)((uint)puVar33 ^ *puVar33);
    cVar6 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*puVar33;
    piVar21 = (int *)CONCAT31(uVar24,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar21 = (char)*piVar21 + cVar6;
    piVar17 = (int *)CONCAT31(uVar24,cVar6 + '\x17');
    uVar42 = uVar41;
code_r0x00402ae3:
    out(*puVar39,(short)puVar33);
    unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1 + (uint)bVar45 * -2 + 1;
    out(puVar39[(uint)bVar45 * -2 + 1],(short)puVar33);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
code_r0x00402ae7:
    puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                               CONCAT11((byte)((uint)puVar36 >> 8) | unaff_EBP[-0x60],(char)puVar36)
                              );
    cVar6 = (char)piVar17;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    uVar24 = (undefined3)((uint)piVar17 >> 8);
    bVar7 = cVar6 + 2;
    puVar15 = (uint *)CONCAT31(uVar24,bVar7);
    uVar41 = uVar42;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *(byte *)puVar15 = (byte)*puVar15 + bVar7;
      cVar6 = cVar6 + '}';
      puVar15 = (uint *)CONCAT31(uVar24,cVar6);
      *(byte *)puVar15 = ((byte)*puVar15 - cVar6) - (0x84 < bVar7);
      pbVar12 = (byte *)((int)puVar33 + (int)puVar15);
      *pbVar12 = *pbVar12 + cVar6;
      bVar7 = POPCOUNT(*pbVar12);
      puVar39 = unaff_ESI;
code_r0x00402af9:
      uVar41 = uVar42;
      unaff_EDI = puVar40;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        bVar7 = (byte)envShortName;
        *(byte *)puVar33 = (byte)*puVar33 + bVar7;
        uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,in_SS);
        unaff_ESI = puVar39 + (uint)bVar45 * -2 + 1;
        out(*puVar39,(short)puVar33);
        uVar13 = *puVar33;
        *(byte *)puVar33 = (byte)*puVar33 + bVar7;
        iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + 'o') +
                 *(int *)((int)puVar33 * 2) + (uint)CARRY1((byte)uVar13,bVar7);
        pcVar11 = (char *)CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '(');
        while( true ) {
          uVar13 = *puVar33;
          bVar9 = (byte)envShortName;
          *(byte *)puVar33 = (byte)*puVar33 + bVar9;
          pcVar11 = pcVar11 + (uint)CARRY1((byte)uVar13,bVar9) + iRam73280512;
          bVar7 = (byte)pcVar11;
          *pcVar11 = *pcVar11 + bVar7;
          envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                          CONCAT11((byte)((uint)envShortName >> 8) | bRam7d160243,
                                                   bVar9));
          bVar45 = ((uint)uStack_28 & 0x400) != 0;
          in_AF = ((uint)uStack_28 & 0x10) != 0;
          *pcVar11 = *pcVar11 + bVar7;
          uVar24 = (undefined3)((uint)pcVar11 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar24,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar6 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar24,cVar6) = *(char *)CONCAT31(uVar24,cVar6) + cVar6;
          iVar18 = CONCAT31(uVar24,bVar7 + 0x16);
code_r0x00402b33:
          piVar17 = (int *)(iVar18 + 0xe2802);
          *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)envShortName >> 8);
          uVar42 = uVar41;
          uVar41 = in_SS;
          while( true ) {
            bVar9 = (byte)puVar36 | (byte)((uint)envShortName >> 8);
            puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),bVar9);
            *piVar17 = (int)(*piVar17 + (int)piVar17);
            cVar6 = (char)piVar17;
            *(byte *)puVar33 = (byte)*puVar33 + cVar6;
            if ((POPCOUNT((byte)*puVar33) & 1U) != 0) goto code_r0x00402ae7;
            *(char *)piVar17 = (char)*piVar17 + cVar6;
            uVar13 = CONCAT31((int3)((uint)piVar17 >> 8),cVar6 + '\x13');
            puVar15 = (uint *)(uVar13 + 0x19061224 + (uint)(0x1f9edfd < uVar13));
            uVar14 = (uint)(0xe4ffffdd < uVar13 + 0xfe061202 ||
                           CARRY4(uVar13 + 0x19061224,(uint)(0x1f9edfd < uVar13)));
            uVar13 = *unaff_ESI;
            uVar1 = *unaff_ESI;
            *unaff_ESI = (uint)((byte *)(uVar1 + (int)puVar15) + uVar14);
            bVar7 = POPCOUNT(*unaff_ESI & 0xff);
            puVar39 = unaff_ESI;
            if ((SCARRY4(uVar13,(int)puVar15) != SCARRY4((int)(uVar1 + (int)puVar15),uVar14)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar15;
            *(byte *)puVar15 = (byte)*puVar15 + bVar7;
            iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar33 | (byte)*puVar33;
            uVar13 = *puVar36;
            *(byte *)puVar36 = (byte)*puVar36 + bVar9;
            pcVar11 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '\x12') + 0x228b26
                               + *puVar40 + (uint)CARRY1((byte)uVar13,bVar9));
            cVar6 = bVar7 + (byte)*envShortName;
            puVar33 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),cVar6);
            if (SCARRY1(bVar7,(byte)*envShortName) == cVar6 < '\0') break;
            *pcVar11 = *pcVar11 + (char)pcVar11;
            cVar6 = (char)pcVar11 + '\x02';
            pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6);
            bVar7 = POPCOUNT(cVar6);
            uVar42 = uVar41;
code_r0x00402b7a:
            puVar15 = unaff_ESI;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar11;
              *pcVar11 = *pcVar11 + cVar6;
              uVar24 = (undefined3)((uint)pcVar11 >> 8);
              pcVar11 = (char *)CONCAT31(uVar24,cVar6 + '\x13');
              *(byte *)envShortName = (byte)*envShortName | (byte)puVar33;
              *(byte *)puVar40 = (byte)*puVar40 | (byte)puVar33;
              *puVar33 = (uint)(pcVar11 + *puVar33);
              uVar30 = (undefined2)((uint)puVar36 >> 0x10);
              uVar35 = SUB41(puVar36,0);
              cVar8 = (char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + -0x5f);
              puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar35));
              *pcVar11 = *pcVar11 + cVar6 + '\x13';
              piVar17 = (int *)CONCAT31(uVar24,cVar6 + -0x7a);
              uVar13 = *puVar33;
              *(byte *)puVar33 = (byte)*puVar33 + (char)envShortName;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar13,(char)envShortName) == (char)(byte)*puVar33 < '\0') break;
              *(char *)piVar17 = (char)*piVar17 + cVar6 + -0x7a;
              cVar10 = cVar6 + -0x78;
              piVar17 = (int *)CONCAT31(uVar24,cVar10);
              uVar4 = uVar42;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *(char *)piVar17 = (char)*piVar17 + cVar10;
              pcVar11 = (char *)CONCAT31(uVar24,cVar6 + -0x65);
              *envShortName = *envShortName | (uint)puVar33;
              *puVar40 = *puVar40 | (uint)puVar33;
              pbVar12 = (byte *)((int)envShortName + -1);
              cVar8 = cVar8 + *(byte *)((int)puVar36 + -0x5e);
              puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar35));
              *pcVar11 = *pcVar11 + cVar6 + -0x65;
              bVar7 = cVar6 + 10;
              puVar39 = (uint *)CONCAT31(uVar24,bVar7);
              bVar9 = (byte)pbVar12;
              *(byte *)puVar33 = (byte)*puVar33 + bVar9;
              unaff_ESI = puVar15 + (uint)bVar45 * -2 + 1;
              out(*puVar15,(short)puVar33);
              uVar13 = *puVar33;
              *(byte *)puVar33 = (byte)*puVar33 + bVar9;
              uVar2 = (uint)CARRY1((byte)uVar13,bVar9);
              uVar13 = *puVar33;
              uVar1 = *puVar33;
              pbVar16 = pbVar12 + uVar1 + uVar2;
              uVar5 = *puVar33;
              cRam130a0000 = cRam130a0000 - cVar8;
              uVar14 = *puVar33;
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar39);
              *(byte *)puVar39 = (char)*puVar39 + bVar7;
              envShortName = (uint *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                              CONCAT11((byte)((uint)pbVar16 >> 8) | bRam7d170243,
                                                       (char)pbVar16 + (byte)uVar5 +
                                                       (CARRY4((uint)pbVar12,uVar13) ||
                                                       CARRY4((uint)(pbVar12 + uVar1),uVar2))));
              bVar45 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar39 = (char)*puVar39 + bVar7;
              bVar44 = 0xfd < bVar7;
              pcVar11 = (char *)CONCAT31(uVar24,cVar6 + '\f');
              puVar33 = (uint *)((uint)puVar33 | uVar14);
code_r0x00402bd1:
              uVar13 = *puVar36;
              uVar1 = *puVar36;
              *puVar36 = (uint)((byte *)(uVar1 + (int)envShortName) + bVar44);
              bVar7 = POPCOUNT(*puVar36 & 0xff);
              uVar42 = in_SS;
              if ((SCARRY4(uVar13,(int)envShortName) !=
                  SCARRY4((int)(uVar1 + (int)envShortName),(uint)bVar44)) == (int)*puVar36 < 0)
              goto code_r0x00402b7a;
              cVar6 = (char)pcVar11;
              *pcVar11 = *pcVar11 + cVar6;
              pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar11 = *pcVar11 + (char)pcVar11;
                pcVar11 = (char *)(CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + '\x12') |
                                  *puVar33);
                *(byte *)puVar40 = (byte)*puVar40 - (char)envShortName;
                *pcVar11 = *pcVar11 + (char)pcVar11;
                puVar33 = (uint *)((int)puVar33 - *unaff_ESI);
                bVar7 = (byte)puVar36 | (byte)((uint)envShortName >> 8);
                cVar6 = *pcVar11;
                uVar24 = (undefined3)((uint)pcVar11 >> 8);
                pcVar11 = (char *)CONCAT31(uVar24,cVar6);
                *pcVar11 = *pcVar11 + cVar6;
                pcVar37 = (char *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                           CONCAT11((char)((uint)puVar36 >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar11 = *pcVar11 + cVar6;
                bVar44 = false;
                pcVar11 = (char *)(CONCAT31(uVar24,cVar6 + '\x13') | *puVar33);
                do {
                  bVar9 = (byte)envShortName;
                  bVar7 = bVar9 + (byte)unaff_ESI[(int)puVar40 * 2];
                  envShortName = (uint *)CONCAT31((int3)((uint)envShortName >> 8),bVar7 + bVar44);
                  uVar13 = (uint)(CARRY1(bVar9,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                 CARRY1(bVar7,bVar44));
                  pcVar19 = pcVar11 + 0x1b000019 + uVar13;
                  piVar21 = (int *)((int)puVar40 * 2 + 0x40000a5);
                  *piVar21 = (int)((int)envShortName +
                                  (uint)((char *)0xe4ffffe6 < pcVar11 ||
                                        CARRY4((uint)(pcVar11 + 0x1b000019),uVar13)) + *piVar21);
                  puVar33 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),(char)puVar33 + cRam00009d7d
                                            );
                  uVar24 = (undefined3)((uint)pcVar19 >> 8);
                  bVar7 = (char)pcVar19 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar24,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar11 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar19 >> 8) - in_AF,
                                                      (char)uVar13));
                  pcVar19 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar24,bVar7));
                  while( true ) {
                    *pcVar11 = *pcVar11 + (char)pcVar11;
                    puVar15 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),
                                               (byte)puVar33 | (byte)*puVar33);
                    puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                    uVar13 = (uint)pcVar37 | (uint)unaff_ESI;
                    unaff_EBP = pcVar19 + 1;
                    uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar41);
                    cVar8 = (char)(pcVar11 + 0x1b000019);
                    uVar24 = (undefined3)((uint)(pcVar11 + 0x1b000019) >> 8);
                    cVar6 = cVar8 + -0x13;
                    pcVar11 = (char *)CONCAT31(uVar24,cVar6);
                    uVar30 = (undefined2)(uVar13 >> 0x10);
                    cVar10 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar10,(byte)uVar13));
                    *pcVar11 = *pcVar11 + cVar6;
                    pcVar11 = (char *)(CONCAT31(uVar24,cVar8 + '\x19') | *puVar15);
                    bVar7 = (byte)pcVar11;
                    if ((POPCOUNT((uint)pcVar11 & 0xff) & 1U) != 0) {
                      pbVar12 = (byte *)((int)puVar15 + (int)pcVar11);
                      bVar44 = CARRY1(*pbVar12,bVar7);
                      *pbVar12 = *pbVar12 + bVar7;
                      puVar33 = puVar15;
                      goto code_r0x00402bd1;
                    }
                    *pcVar11 = *pcVar11 + bVar7;
                    uVar24 = (undefined3)((uint)pcVar11 >> 8);
                    pcVar37 = (char *)CONCAT31(uVar24,bVar7 + 0x6f);
                    puVar33 = (uint *)((int)puVar15 + 1);
                    *pcVar37 = *pcVar37 + bVar7 + 0x6f;
                    bVar9 = (byte)uVar13 | (byte)((uint)pcVar11 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x5c);
                    cVar10 = cVar10 + *(char *)(CONCAT31((int3)((uint)puVar36 >> 8),bVar9) + -0x5f);
                    puVar36 = (uint *)CONCAT22(uVar30,CONCAT11(cVar10,bVar9));
                    *pcVar11 = *pcVar11 + bVar7 + 0x5c;
                    pcVar11 = (char *)(CONCAT31(uVar24,bVar7 + 0x88) | *puVar33);
                    if ((POPCOUNT((uint)pcVar11 & 0xff) & 1U) != 0) {
                      *(byte *)puVar36 = (byte)*puVar36 + (char)((uint)envShortName >> 8);
                      uStack_28 = (uint *)((uint)uStack_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar11 = *pcVar11 + (char)pcVar11;
                    uVar24 = (undefined3)((uint)pcVar11 >> 8);
                    cVar6 = (char)pcVar11 + 'o';
                    puVar33 = (uint *)((int)puVar15 + 2);
                    *(char *)CONCAT31(uVar24,cVar6) = *(char *)CONCAT31(uVar24,cVar6) + cVar6;
                    pcVar37 = (char *)CONCAT31((int3)((uint)puVar36 >> 8),
                                               bVar9 | (byte)((uint)pcVar11 >> 8));
                    pcVar11 = (char *)(CONCAT31(uVar24,cVar6) | 2);
                    pcVar19[-0x62] = pcVar19[-0x62] + '\x01';
                    bVar7 = (byte)pcVar11;
                    *pcVar11 = *pcVar11 + bVar7;
                    bVar44 = 0xfd < bVar7;
                    cVar6 = bVar7 + 2;
                    pcVar11 = (char *)CONCAT31(uVar24,cVar6);
                    uVar43 = uVar41;
                    if (SCARRY1(bVar7,'\x02') != cVar6 < '\0') break;
                    *pcVar11 = *pcVar11 + cVar6;
                    bVar9 = bVar7 + 10;
                    pcVar11 = (char *)CONCAT31(uVar24,bVar9);
                    *pcVar11 = *pcVar11 - cVar10;
                    cVar8 = (char)envShortName;
                    *(byte *)puVar33 = *(byte *)puVar33 + cVar8;
                    pcVar19[-0x62] = pcVar19[-0x62] + '\x01';
                    *pcVar11 = *pcVar11 + bVar9;
                    cVar6 = bVar7 + 0xc;
                    pcVar11 = (char *)CONCAT31(uVar24,cVar6);
                    if (SCARRY1(bVar9,'\x02') == cVar6 < '\0') {
                      *pcVar11 = *pcVar11 + cVar6;
                      *(byte *)envShortName = (byte)*envShortName - cVar10;
                      *(byte *)puVar33 = *(byte *)puVar33 + cVar8;
                      cVar6 = (bVar7 + 0x13) - (byte)envShortName[0x13];
                      pcVar11 = (char *)CONCAT31(uVar24,cVar6);
                      *pcVar11 = *pcVar11 + cVar6;
                      pcVar20 = (char *)CONCAT31(uVar24,cVar6 + *pcVar11);
                      *pcVar20 = *pcVar20 + cVar6 + *pcVar11;
                      pcVar20 = pcVar20 + *envShortName;
                      *pcVar20 = *pcVar20 + (char)pcVar20;
                      LOCK();
                      pcVar11 = *(char **)pcVar20;
                      *(char **)pcVar20 = pcVar20;
                      UNLOCK();
                      *pcVar11 = *pcVar11 + (char)pcVar11;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(byte)*envShortName);
                      *pbVar12 = *pbVar12 + (byte)*envShortName;
                      goto code_r0x00402c8d;
                    }
                    envShortName = (uint *)CONCAT31((int3)((uint)envShortName >> 8),
                                                    cVar8 + *pcVar37 + (0xfd < bVar9));
                    *(byte *)puVar40 = (byte)*puVar40 - cVar10;
                    pcVar19 = unaff_EBP;
                  }
                } while( true );
              }
              puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                         CONCAT11((char)((uint)puVar36 >> 8) +
                                                  *(byte *)((int)puVar36 + -99),(char)puVar36));
              puVar15 = unaff_ESI;
            }
            *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
            puVar33 = (uint *)((int)puVar33 - *puVar15);
            unaff_ESI = puVar15;
            uVar42 = uVar41;
            uVar41 = uVar4;
          }
          *(byte *)puVar33 = (byte)*puVar33 + (char)envShortName;
          pcVar11 = pcVar11 + -0x7d160243;
        }
        pcVar11 = (char *)CONCAT31(uVar24,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)puVar36 = (byte)*puVar36 + (char)envShortName;
    uVar13 = *puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
    *puVar40 = (uint)((int)puVar33 + (uint)CARRY1((byte)uVar13,(byte)puVar15) + *puVar40);
    puVar39 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar29 = (char)envShortName;
      cVar26 = (char)((uint)envShortName >> 8) + (char)((uint)pbVar12 >> 8);
      envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),CONCAT11(cVar26,cVar29));
      cVar6 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar6;
      pcVar11 = (char *)((int)pbVar12 * 2 + 0x1a10000);
      cVar10 = (char)((uint)pcVar37 >> 8);
      *pcVar11 = *pcVar11 + cVar10;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      pbVar12[-0x47ffffff] = pbVar12[-0x47ffffff] + cVar10;
      *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
      bVar9 = (byte)puVar33;
      *(byte *)puVar40 = (byte)*puVar40 + bVar9;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + bVar9;
      *pbVar12 = *pbVar12 + cVar6;
      *unaff_ESI = (uint)(*unaff_ESI + (int)unaff_ESI);
      uVar30 = (undefined2)((uint)pcVar37 >> 0x10);
      cVar10 = cVar10 + (byte)unaff_ESI[(int)pcVar37];
      pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(cVar10,(char)pcVar37));
      pcVar11[(int)pbVar12] = pcVar11[(int)pbVar12] + cVar6;
      *(byte *)puVar33 = *(byte *)puVar33 - cVar10;
      *(byte *)puVar33 = *(byte *)puVar33 + cVar29;
      uVar24 = (undefined3)((uint)pbVar12 >> 8);
      bVar7 = cVar6 - *pbVar12;
      *pcVar11 = *pcVar11 + bVar9;
      *(byte *)puVar33 = *(byte *)puVar33 ^ bVar7;
      *(byte *)puVar33 = *(byte *)puVar33 + bVar7;
      *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
      uVar13 = *envShortName;
      *(byte *)envShortName = (byte)*envShortName + bVar9;
      cVar8 = bVar7 + *(char *)CONCAT31(uVar24,bVar7) + CARRY1((byte)uVar13,bVar9);
      pcVar37 = (char *)CONCAT22(uVar30,CONCAT11(cVar10 + pcVar19[-0x60],(char)pcVar37));
      *(char *)CONCAT31(uVar24,cVar8) = *(char *)CONCAT31(uVar24,cVar8) + cVar8;
      cVar10 = cVar8 + '\x12';
      pbVar12 = (byte *)CONCAT31(uVar24,cVar10);
      cVar6 = *pcVar37;
      *pcVar37 = *pcVar37 + cVar10;
      if (SCARRY1(cVar6,cVar10) != *pcVar37 < '\0') break;
code_r0x00402c8d:
      cVar6 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
      *(byte *)puVar33 = *(byte *)puVar33 + cVar6;
      *pbVar12 = *pbVar12 + cVar6;
    }
    *pbVar12 = *pbVar12 + cVar10;
    pbVar12 = (byte *)CONCAT31(uVar24,cVar8 + '$');
    *pbVar12 = *pbVar12 + cVar26;
    bVar7 = *(byte *)puVar33;
    *(byte *)puVar33 = *(byte *)puVar33 + cVar29;
    uVar42 = uVar41;
    uVar43 = in_DS;
  } while (SCARRY1(bVar7,cVar29) == (char)*(byte *)puVar33 < '\0');
  do {
    cVar6 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar6;
    uVar24 = (undefined3)((uint)pbVar12 >> 8);
    cRam00009d7d = cRam00009d7d + (char)puVar33;
    bVar9 = cVar6 + 0x24;
    cVar10 = (char)((uint)pcVar37 >> 8);
    pcVar37[-0x62] = pcVar37[-0x62] + cVar10;
    *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
    bVar7 = cVar6 + 0x2fU + (byte)*envShortName;
    cVar8 = bVar7 + (0xf4 < bVar9);
    cVar6 = cVar8 + *(char *)CONCAT31(uVar24,cVar8) +
            (CARRY1(cVar6 + 0x2fU,(byte)*envShortName) || CARRY1(bVar7,0xf4 < bVar9));
    pcVar11 = (char *)CONCAT31(uVar24,cVar6);
    *pcVar11 = *pcVar11 - (char)puVar33;
    *pcVar11 = *pcVar11 + cVar6;
    pcVar19 = (char *)((int)puVar33 - *puVar33);
    *(byte *)(unaff_ESI + (int)pcVar37) = (byte)unaff_ESI[(int)pcVar37] + cVar10;
    pcVar11[(int)unaff_EBP] = pcVar11[(int)unaff_EBP] + cVar6;
    *pcVar19 = *pcVar19 + (char)envShortName;
    pcVar11 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar12 >> 8) - *pcVar19,cVar6));
    uVar13 = *puVar40;
    *pcVar11 = *pcVar11 - (char)((uint)pcVar19 >> 8);
    *pcVar11 = *pcVar11 + cVar6;
    uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar42);
    pbVar16 = (byte *)CONCAT22((short)((uint)pcVar37 >> 0x10),
                               CONCAT11(cVar10 - (byte)*unaff_ESI,(char)pcVar37));
    unaff_EBP = unaff_EBP + *(int *)(pbVar16 + (int)envShortName);
    puVar36 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),(char)pcVar19 + (byte)uVar13);
    while( true ) {
      puVar33 = puVar36;
      uVar30 = (undefined2)((uint)pbVar16 >> 0x10);
      bVar38 = (char)((uint)pbVar16 >> 8) + pbVar16[0x18];
      *pcVar11 = *pcVar11 + (char)pcVar11;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),(char)pcVar11 + 'o');
      cVar6 = (char)envShortName;
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      uVar13 = *unaff_ESI;
      bVar34 = (byte)((uint)envShortName >> 8);
      bVar7 = *pbVar12;
      pbVar12 = pbVar12 + (uint)CARRY1(bVar34,*pbVar12) + *(int *)pbVar12;
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      cVar8 = ((char)pbVar16 - (byte)uVar13) - (byte)*unaff_ESI;
      bVar9 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                      CONCAT11(bVar34 + bVar7 + bVar9 | (byte)*puVar33,cVar6));
      pbVar12 = pbVar12 + *puVar33;
      if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      bVar7 = (char)pbVar12 + 0x6f;
      pcVar11 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
      pcVar37 = (char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar38,(char)pbVar16)) >> 8),cVar8
                                 ) + -1);
      *pcVar11 = *pcVar11 + bVar7;
      *pcVar11 = *pcVar11 + bVar7;
      *pcVar37 = *pcVar37 + (byte)puVar33;
      *(byte *)((int)pcVar11 * 2) = *(byte *)((int)pcVar11 * 2) ^ bVar7;
      uVar3 = *(undefined6 *)pcVar11;
      uVar42 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar11 = (char *)uVar3;
      *pcVar11 = *pcVar11 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar11 = (char *)((uint)pcVar11 | 0x73110008);
      bVar38 = (byte)((uint)pcVar37 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar38;
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      puVar36 = unaff_ESI + (uint)bVar45 * -2 + 1;
      out(*unaff_ESI,(short)puVar33);
      *pcVar11 = *pcVar11;
      cVar6 = (char)pcVar11;
      *pcVar11 = *pcVar11 + cVar6;
      bVar7 = unaff_EBP[-0x5a];
      uVar30 = (undefined2)((uint)pcVar37 >> 0x10);
      cVar8 = (char)pcVar37;
      *pcVar11 = *pcVar11 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      envShortName = (uint *)(uVar13 | 0x73110000);
      unaff_ESI = puVar36 + (uint)bVar45 * -2 + 1;
      out(*puVar36,(short)puVar33);
      *(byte *)envShortName = (byte)*envShortName;
      bVar34 = (byte)puVar33 | (byte)*puVar40;
      puVar36 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),bVar34);
      *(byte *)envShortName = (byte)*envShortName + cVar6;
      pcVar11 = (char *)(uVar13 | 0x7b1f1609);
      bVar45 = (uVar43 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | (uint)unaff_EBP;
      bVar9 = (byte)pcVar11;
      *pcVar11 = *pcVar11 + bVar9;
      bVar38 = bVar38 | bVar7 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar16 = (byte *)CONCAT22(uVar30,CONCAT11(bVar38,cVar8));
      *pcVar11 = *pcVar11 + bVar9;
      uVar24 = (undefined3)((uint)pcVar11 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar36 + (uint)(0xd2 < bVar9) + unaff_ESI[(int)puVar40 * 2]);
      bVar7 = bVar9 + 0x2d ^ *(byte *)CONCAT31(uVar24,bVar9 + 0x2d);
      pcVar11 = (char *)CONCAT31(uVar24,bVar7);
      uVar13 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
      uVar43 = uVar42;
      if (CARRY1((byte)uVar13,bVar7)) {
        *pcVar11 = *pcVar11 + bVar7;
        bVar7 = bVar7 | pcVar11[0x4000019];
        pcVar11 = (char *)CONCAT31(uVar24,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar11 = *pcVar11 + bVar7;
          piVar21 = (int *)CONCAT31(uVar24,bVar7 + 0x28);
          *piVar21 = (int)piVar21 + (uint)(0xd7 < bVar7) + *piVar21;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar16 = *pbVar16 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar33 >> 8) | bVar38,bVar34);
          puVar36 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),uVar31);
          uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar42);
          bVar34 = in(uVar31);
          pbVar12 = (byte *)CONCAT31(uVar24,bVar34);
          bVar9 = *pbVar12;
          bVar44 = SCARRY1(*pbVar12,bVar34);
          *pbVar12 = *pbVar12 + bVar34;
          bVar7 = *pbVar12;
          puVar33 = unaff_ESI;
          in_SS = uVar42;
          if (!CARRY1(bVar9,bVar34)) goto code_r0x00402e19;
          *pbVar12 = *pbVar12 + bVar34;
          bVar27 = bVar27 | *pbVar12;
          envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),CONCAT11(bVar27,cVar6)
                                         );
          pcVar11 = (char *)CONCAT31(uVar24,bVar34 + *pbVar12);
          *pbVar16 = *pbVar16 + bVar27;
        }
        uVar24 = (undefined3)((uint)pcVar11 >> 8);
        bVar9 = (byte)pcVar11 | (byte)*puVar36;
        pbVar12 = (byte *)CONCAT31(uVar24,bVar9);
        puVar33 = unaff_ESI + (uint)bVar45 * -2 + 1;
        out(*unaff_ESI,(short)puVar36);
        LOCK();
        bVar7 = *pbVar12;
        *pbVar12 = bVar9;
        UNLOCK();
        *(byte *)puVar36 = (byte)*puVar36 + (char)envShortName;
        piVar21 = (int *)(CONCAT31(uVar24,bVar7) + -0x1b7e07);
        *(byte *)puVar36 = (byte)*puVar36 + (char)envShortName;
        iVar18 = (int)envShortName - *(int *)pbVar16;
        bVar7 = *(byte *)((int)puVar40 + -0x7a);
        uVar31 = (undefined2)((uint)iVar18 >> 0x10);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        bVar9 = (char)((uint)iVar18 >> 8) + bVar7 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        uVar24 = (undefined3)(CONCAT22(uVar31,CONCAT11(bVar9,(byte)iVar18)) >> 8);
        bVar7 = (byte)iVar18 | *pbVar16;
        envShortName = (uint *)CONCAT31(uVar24,bVar7);
        pbVar12 = (byte *)((int)piVar21 + *piVar21);
        puVar15 = puVar33;
        if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e0a;
        *(byte *)envShortName = (byte)*envShortName + bVar7;
        *(byte **)pbVar16 = (byte *)(*(int *)pbVar16 + (int)puVar36);
        piVar21 = (int *)CONCAT31(uVar24,bVar7 + 0x27);
        envShortName = (uint *)CONCAT22(uVar31,CONCAT11(bVar9 + *(byte *)((int)puVar40 + -0x79),
                                                        bVar7));
        *(byte *)piVar21 = (char)*piVar21 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar37 = (char *)CONCAT22(uVar30,CONCAT11(bVar38 | unaff_EBP[-0x62],cVar8));
  } while( true );
code_r0x00402dff:
  pbVar12 = (byte *)CONCAT22((short)((uint)piVar21 >> 0x10),
                             CONCAT11((byte)((uint)piVar21 >> 8) |
                                      *(byte *)((int)puVar36 + 0x2170411),(byte)piVar21));
  puVar15 = puVar33 + (uint)bVar45 * -2 + 1;
  out(*puVar33,(short)puVar36);
  *pbVar12 = (byte)piVar21;
  *(byte *)puVar36 = (byte)*puVar36 + (char)envShortName;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar12;
  *pbVar12 = *pbVar12 - cVar8;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  bVar44 = false;
  bVar7 = (byte)((uint)envShortName >> 8) | bRam052b0603;
  envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                  CONCAT11(bVar7,(char)envShortName));
  puVar33 = puVar15;
code_r0x00402e19:
  if (bVar7 == 0 || bVar44 != (char)bVar7 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cRam89280411;
  piVar21 = (int *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                            CONCAT11((byte)((uint)pbVar12 >> 8) |
                                     *(byte *)((int)puVar36 + 0x7190411),cRam89280411));
  *(char *)piVar21 = (char)*piVar21 + cRam89280411;
  cVar6 = (char)envShortName;
  envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                  CONCAT11((byte)((uint)envShortName >> 8) | (byte)*puVar36,cVar6));
  puVar33 = (uint *)((int)puVar33 + *piVar21);
  pbVar12 = (byte *)((int)piVar21 + *piVar21);
  bVar9 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  bVar7 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  *(char **)pbVar12 = unaff_EBP + (uint)CARRY1(bVar7,bVar9) + *(int *)pbVar12;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),*pbVar12);
  *(byte *)puVar36 = (byte)*puVar36 + cVar6;
  puVar15 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(byte)puVar36 | (byte)*puVar36);
  pbVar12 = (byte *)((int)puVar15 + -0x43);
  *pbVar12 = *pbVar12 + (char)((uint)puVar36 >> 8);
  puVar36 = puVar15;
  puVar15 = puVar40;
  uVar43 = uVar41;
code_r0x00402e42:
  uVar41 = in_SS;
  puVar40 = puVar15;
  in_SS = uVar41;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e6e;
  iVar18 = *(int *)((int)piVar21 + *piVar21);
  *(byte *)puVar36 = (byte)*puVar36 + (char)envShortName;
  piVar21 = (int *)(iVar18 + -0x8c6f);
  puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                             CONCAT11((byte)((uint)puVar36 >> 8) | *(byte *)((int)puVar36 + -0x3f),
                                      (char)puVar36));
  pbVar22 = (byte *)((int)piVar21 + *piVar21);
  pbVar12 = pbVar22;
  puVar40 = uStack_28;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                  CONCAT11((byte)((uint)envShortName >> 8) | (byte)*puVar36,
                                           (char)envShortName));
  puVar15 = puVar33 + (uint)bVar45 * -2 + 1;
  out(*puVar33,(short)puVar36);
  puVar36 = (uint *)CONCAT31((int3)((uint)puVar36 >> 8),(char)puVar36 + (byte)*puVar40);
  puVar33 = puVar15 + (uint)bVar45 * -2 + 1;
  out(*puVar15,(short)puVar36);
  uVar43 = uVar41;
  in_SS = uVar42;
code_r0x00402e6e:
  uVar41 = uVar43;
  uVar24 = (undefined3)((uint)puVar36 >> 8);
  cVar6 = (char)puVar36 + (byte)*puVar40;
  puVar15 = puVar33 + (uint)bVar45 * -2 + 1;
  out(*puVar33,(short)CONCAT31(uVar24,cVar6));
  puVar36 = (uint *)CONCAT31(uVar24,cVar6 + (byte)*puVar40);
  puVar33 = puVar15 + (uint)bVar45 * -2 + 1;
  out(*puVar15,(short)puVar36);
  pbVar12 = (byte *)0x0;
  puVar15 = puVar40;
code_r0x00402e81:
  puVar40 = puVar15;
  bVar9 = (char)pbVar12 - *pbVar12;
  iVar18 = CONCAT31((int3)((uint)pbVar12 >> 8),bVar9);
  *pbVar16 = *pbVar16 + (char)puVar36;
  pbVar22 = (byte *)(iVar18 * 2);
  *pbVar22 = *pbVar22 ^ bVar9;
  pbVar22 = (byte *)(int)(short)iVar18;
  *pbVar22 = *pbVar22 + bVar9;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)envShortName;
  bVar7 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar9;
  *(byte **)(pbVar16 + -0x73) =
       (byte *)((int)puVar33 + (uint)CARRY1(bVar7,bVar9) + *(int *)(pbVar16 + -0x73));
  *pbVar22 = *pbVar22 + bVar9;
  bVar7 = (byte)envShortName | (byte)*puVar36;
  envShortName = (uint *)CONCAT31((int3)((uint)envShortName >> 8),bVar7);
  puVar15 = puVar33;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar22 = *pbVar22 + bVar9;
  pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),bVar9 + 0x2d);
  puVar33[(int)puVar40 * 2] =
       (uint)((int)puVar36 + (uint)(0xd2 < bVar9) + puVar33[(int)puVar40 * 2]);
  pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
  do {
    uVar13 = *puVar33;
    bVar7 = (byte)pbVar12;
    *(byte *)puVar33 = (byte)*puVar33 + bVar7;
    if (!CARRY1((byte)uVar13,bVar7)) break;
    *pbVar12 = *pbVar12 + bVar7;
    bVar7 = bVar7 | pbVar12[0x400001a];
    pbVar22 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
    if ((char)bVar7 < '\x01') {
code_r0x00402ecc:
      *pbVar22 = *pbVar22 + (byte)pbVar22;
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (byte)pbVar22 | pbVar22[0x400001b];
      pcVar11 = (char *)CONCAT31(uVar24,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar13 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + (byte)envShortName;
        *(char *)((int)pcVar11 * 2) =
             *(char *)((int)pcVar11 * 2) - CARRY1((byte)uVar13,(byte)envShortName);
        bVar44 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar22 = *pbVar22 + bVar7;
      puVar15 = puVar33;
code_r0x00402eb4:
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (char)pbVar22 + 0x6f;
      pcVar11 = (char *)CONCAT31(uVar24,bVar7);
      *(char **)pcVar11 = pcStack_44;
      uVar13 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + (char)envShortName;
      pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
      in_DS = uVar42;
      if ((byte)*puVar36 != 0 &&
          SCARRY1((byte)uVar13,(char)envShortName) == (char)(byte)*puVar36 < '\0') {
        *pcVar11 = *pcVar11 + bVar7;
        bVar9 = (char)pbVar22 + 0x9c;
        pbVar22 = (byte *)CONCAT31(uVar24,bVar9);
        puVar15[(int)puVar40 * 2] =
             (uint)((int)puVar36 + (uint)(0xd2 < bVar7) + puVar15[(int)puVar40 * 2]);
        pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
        uVar13 = *puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + bVar9;
        puVar33 = puVar15;
        if (CARRY1((byte)uVar13,bVar9)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar33 = puVar15 + (uint)bVar45 * -2 + 1;
      out(*puVar15,(short)puVar36);
    }
    cVar6 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar6;
    uVar24 = (undefined3)((uint)pcVar11 >> 8);
    bVar7 = cVar6 + 0x6f;
    pcVar11 = (char *)CONCAT31(uVar24,bVar7);
    *(char **)pcVar11 = pcStack_44;
    uVar13 = *puVar36;
    *(byte *)puVar36 = (byte)*puVar36 + (byte)envShortName;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
    *(byte *)(puVar33 + 7) = ((byte)puVar33[7] - bVar38) - CARRY1((byte)uVar13,(byte)envShortName);
    *pcVar11 = *pcVar11 + bVar7;
    bVar9 = cVar6 + 0x9c;
    pcVar11 = (char *)CONCAT31(uVar24,bVar9);
    puVar33[(int)puVar40 * 2] =
         (uint)((int)puVar36 + (uint)(0xd2 < bVar7) + puVar33[(int)puVar40 * 2]);
    uVar13 = *puVar33;
    *(byte *)puVar33 = (byte)*puVar33 + bVar9;
    if (!CARRY1((byte)uVar13,bVar9)) goto code_r0x00402e7e;
    *pcVar11 = *pcVar11 + bVar9;
    bVar9 = bVar9 | pcVar11[0x400001c];
    pbVar12 = (byte *)CONCAT31(uVar24,bVar9);
    in_SS = uVar42;
    if ((char)bVar9 < '\x01') goto code_r0x00402f16;
    *pbVar12 = *pbVar12 + bVar9;
    pcVar11 = (char *)CONCAT31(uVar24,bVar9 + 0x6f);
    while( true ) {
      *(char **)pcVar11 = pcStack_44;
      uVar13 = *puVar36;
      *(byte *)puVar36 = (byte)*puVar36 + (byte)envShortName;
      *(uint *)((int)puVar33 + 0x1d) =
           (*(int *)((int)puVar33 + 0x1d) - (int)puVar40) -
           (uint)CARRY1((byte)uVar13,(byte)envShortName);
      bVar7 = (byte)pcVar11;
      *pcVar11 = *pcVar11 + bVar7;
      bVar9 = bVar7 + 0x2d;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar9);
      puVar33[(int)puVar40 * 2] =
           (uint)((int)puVar36 + (uint)(0xd2 < bVar7) + puVar33[(int)puVar40 * 2]);
      pcStack_44 = (char *)CONCAT22((short)((uint)pcStack_44 >> 0x10),uVar42);
      uVar13 = *puVar33;
      *(byte *)puVar33 = (byte)*puVar33 + bVar9;
      if (!CARRY1((byte)uVar13,bVar9)) break;
      *pbVar12 = *pbVar12 + bVar9;
code_r0x00402f16:
      bVar7 = (byte)pbVar12 | pbVar12[0x400001d];
      puVar15 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
      pcVar11 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar11;
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        uVar24 = (undefined3)((uint)puVar15 >> 8);
        cVar6 = (char)puVar15 + 'o';
        puVar39 = (uint *)CONCAT31(uVar24,cVar6);
        *puVar39 = (uint)pcStack_44;
        cVar10 = (char)envShortName;
        *(byte *)puVar36 = (byte)*puVar36 + cVar10;
        pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
        bVar7 = (byte)((uint)puVar36 >> 8);
        bVar44 = bVar7 < (byte)*puVar33;
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar33,(char)puVar36));
        if (bVar44) break;
        bVar44 = CARRY4((uint)puVar39,*puVar39);
        puVar15 = (uint *)((int)puVar39 + *puVar39);
        if (!SCARRY4((int)puVar39,*puVar39)) {
          bVar44 = CARRY4((uint)unaff_EBP,*puVar15);
          unaff_EBP = unaff_EBP + *puVar15;
        }
        *puVar15 = (*puVar15 - (int)puVar15) - (uint)bVar44;
        *(byte *)puVar36 = (byte)*puVar36 + cVar10;
        envShortName = (uint *)CONCAT22((short)((uint)envShortName >> 0x10),
                                        CONCAT11((char)((uint)envShortName >> 8) + (byte)*puVar36,
                                                 cVar10 - (byte)*puVar36));
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
code_r0x00402f3b:
        cVar10 = (char)puVar36;
        *pbVar16 = *pbVar16 + cVar10;
        bVar7 = (byte)puVar15;
        *(byte *)((int)puVar15 * 2) = *(byte *)((int)puVar15 * 2) ^ bVar7;
        *(byte *)puVar15 = (byte)*puVar15 + bVar7;
        *(byte *)puVar15 = (byte)*puVar15 + cVar10;
        uVar13 = *puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + bVar7;
        *puVar36 = (uint)((int)puVar15 + (uint)CARRY1((byte)uVar13,bVar7) + *puVar36);
        pcVar11 = (char *)((uint)puVar15 | *puVar40);
        uVar24 = (undefined3)((uint)pcVar11 >> 8);
        cVar6 = (char)pcVar11 + *pcVar11;
        pcVar11 = (char *)CONCAT31(uVar24,cVar6);
        *pcVar11 = *pcVar11 + cVar6;
        cVar6 = cVar6 + *pcVar11;
        piVar21 = (int *)CONCAT31(uVar24,cVar6);
        *(char *)piVar21 = (char)*piVar21 + cVar6;
        iVar18 = LocalDescriptorTableRegister();
        *piVar21 = iVar18;
        bVar7 = *pbVar16;
        bVar28 = (byte)((uint)envShortName >> 8);
        *pbVar16 = *pbVar16 + bVar28;
        iVar18 = *piVar21;
        uVar31 = (undefined2)((uint)envShortName >> 0x10);
        bVar27 = (byte)envShortName;
        *(byte *)puVar33 = (byte)*puVar33 + cVar6;
        puVar15 = puVar33 + (uint)bVar45 * -2 + 1;
        out(*puVar33,(short)puVar36);
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        bVar9 = *pbVar16;
        *(byte *)puVar36 = (byte)*puVar36 - bVar38;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        puVar39 = puVar15 + (uint)bVar45 * -2 + 1;
        out(*puVar15,(short)puVar36);
        *(byte *)puVar39 = (byte)*puVar39 + cVar6;
        bVar34 = *pbVar16;
        *(uint *)((int)puVar36 + -0x23) = *(uint *)((int)puVar36 + -0x23) & (uint)puVar39;
        puVar23 = (ushort *)((int)piVar21 + *piVar21);
        if (!SCARRY4((int)piVar21,*piVar21)) {
          *puVar23 = in_DS;
        }
        *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
        uVar32 = CONCAT11((char)((uint)puVar36 >> 8) + *(byte *)((int)puVar36 + -0x15),cVar10);
        puVar36 = (uint *)CONCAT22((short)((uint)puVar36 >> 0x10),uVar32);
        puVar15 = (uint *)((int)puVar23 + *(int *)puVar23);
        if (!SCARRY4((int)puVar23,*(int *)puVar23)) {
          *(ushort *)puVar15 = in_DS;
        }
        cVar6 = (char)puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        cVar29 = ((bVar28 - (char)iVar18) - CARRY1(bVar7,bVar28) | bVar9 | bVar34) + (byte)*puVar15;
        envShortName = (uint *)CONCAT22(uVar31,CONCAT11(cVar29,bVar27));
        uVar13 = *puVar36;
        *(byte *)puVar36 = (byte)*puVar36 + bVar27;
        if (CARRY1((byte)uVar13,bVar27)) {
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          bVar7 = *(byte *)((int)puVar36 + 6);
          *(byte *)puVar36 = (byte)*puVar36 + bVar27;
          bVar9 = (cVar29 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          bVar7 = bVar38 | bVar7 | *(byte *)((int)puVar36 + 0x2a);
          uVar13 = *puVar15;
          pbVar12 = (byte *)((int)puVar15 + (uint)CARRY1(bVar9,(byte)*puVar15) + *puVar15);
          *(byte *)puVar36 = (byte)*puVar36 + bVar27;
          cVar6 = cVar8 - (byte)*puVar39;
          cVar8 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar7,cVar8)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar12 = *pbVar12 + (char)pbVar12;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          bVar7 = (char)pbVar12 + 0x2aU & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x1f);
          *pcVar11 = *pcVar11 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x20);
          *pcVar11 = *pcVar11 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x21);
          *pcVar11 = *pcVar11 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x22);
          *pcVar11 = *pcVar11 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          bVar9 = bVar9 + (byte)uVar13 + *pcVar11;
          uVar25 = CONCAT22(uVar31,CONCAT11(bVar9,bVar27));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x25);
          *pcVar11 = *pcVar11 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          pcVar37 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar8,cVar6)) + 0x26),cVar6));
          *pcVar11 = *pcVar11 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar11 = (char *)CONCAT31(uVar24,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar11 = *pcVar11 + cVar6;
            pbVar12 = (byte *)(CONCAT31(uVar24,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar12;
            bVar34 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar34;
            uVar24 = (undefined3)((uint)pbVar12 >> 8);
            if (!CARRY1(bVar7,bVar34)) {
              if (!SCARRY1(bVar34,'\0')) {
                *pbVar12 = *pbVar12 + bVar34;
                uVar25 = CONCAT22(uVar31,CONCAT11(bVar9 | (byte)*puVar36,bVar27));
                bVar34 = bVar34 & (byte)*puVar36;
                *(char *)CONCAT31(uVar24,bVar34) = *(char *)CONCAT31(uVar24,bVar34) + bVar34;
                pcVar11 = (char *)CONCAT31(uVar24,bVar34 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar11 = (char *)CONCAT31(uVar24,bVar34 + *pcVar37);
              if (SCARRY1(bVar34,*pcVar37) != (char)(bVar34 + *pcVar37) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar34 + *pcVar37;
            pbVar12 = (byte *)CONCAT31(uVar24,bVar7);
            if (SCARRY1(bVar34,*pcVar37) == (char)bVar7 < '\0') {
              pcVar11 = (char *)CONCAT22(uVar31,CONCAT11(bVar9 | (byte)*puVar36,bVar27));
              *pcVar37 = *pcVar37 + cVar10;
              *(byte *)puVar36 = (byte)*puVar36 ^ bVar7;
              *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar11 = *pcVar11 + (char)pcVar11;
            uVar24 = (undefined3)((uint)pcVar11 >> 8);
            bVar7 = (char)pcVar11 + 0x2aU & (byte)*puVar36;
            *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
            pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
            *pcVar11 = *pcVar11 + bVar7 + 0x2a;
            pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x54 & (byte)*puVar36);
code_r0x00403072:
            cVar6 = (char)pcVar11;
            *pcVar11 = *pcVar11 + cVar6;
            uVar24 = (undefined3)((uint)pcVar11 >> 8);
            pcVar11 = (char *)CONCAT31(uVar24,cVar6 + '*');
            *pcVar11 = *pcVar11 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & (byte)*puVar36;
            *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
            pcStack_7c = (char *)CONCAT22(pcStack_7c._2_2_,uVar41);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar24,bVar7 + 0x2a),(char)uVar25));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar10;
            pcVar11 = pcStack_7c;
code_r0x0040309a:
            cVar6 = (char)pcVar11;
            *pcVar11 = *pcVar11 + cVar6;
            pcStack_7c = (char *)CONCAT22(pcStack_7c._2_2_,uVar42);
            *pcVar11 = *pcVar11 + cVar6;
            pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar6 + 0x2aU & (byte)*puVar36);
          }
          cVar6 = (char)pbVar12;
          *pbVar12 = *pbVar12 + cVar6;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          cVar8 = cVar6 + '*';
          pcVar11 = (char *)CONCAT31(uVar24,cVar8);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar10;
          *pcVar11 = *pcVar11 + cVar8;
          cVar29 = (char)pcStack_7c - (byte)*puVar39;
          pcVar37 = (char *)CONCAT22((short)((uint)pcStack_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStack_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_7c >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar11 = *pcVar11 + cVar8;
          bVar7 = cVar6 + 0x54U & (byte)*puVar36;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pbVar12 = (byte *)CONCAT31(uVar24,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar25 >> 8);
          pcVar11 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar12,(char)uVar25));
          pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
          *(byte *)puVar36 = (byte)*puVar36 + (char)uVar25;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          cVar6 = (byte)pbVar12 - *pbVar12;
          piVar21 = (int *)CONCAT31(uVar24,cVar6);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar12 < *pbVar12) + *piVar21);
          cVar6 = cVar6 + (char)*piVar21;
          pbVar12 = (byte *)CONCAT31(uVar24,cVar6);
          *pbVar12 = *pbVar12 + cVar6;
code_r0x004030df:
          *pcVar11 = *pcVar11 + cVar10;
          bVar7 = *pbVar12;
          bVar9 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar9;
          *(byte **)(pcVar37 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar7,bVar9) + *(int *)(pcVar37 + -0x41));
          *pbVar12 = *pbVar12 + bVar9;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          bVar9 = bVar9 | (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar11 = (char *)CONCAT31(uVar24,bVar9 + 0x7b);
          *pcVar11 = *pcVar11 + bVar9 + 0x7b;
          pbVar12 = (byte *)((int)puVar39 + CONCAT31(uVar24,bVar9 - 8) + -1);
          *pbVar12 = *pbVar12 + (bVar9 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar33 = puVar39 + (uint)bVar45 * -2 + 1;
        out(*puVar39,uVar32);
        pcVar11 = unaff_EBP + 1;
        pcStack_44 = unaff_EBP;
      }
      bVar7 = cVar6 - bVar44;
      pbVar12 = (byte *)((int)puVar33 + (int)puVar40 * 2);
      bVar44 = CARRY1(*pbVar12,bVar7);
      *pbVar12 = *pbVar12 + bVar7;
code_r0x00402ef9:
      pcVar11 = (char *)CONCAT31(uVar24,bVar7 - bVar44);
      pbVar12 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12 + (bVar7 - bVar44);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)envShortName = (byte)*envShortName + (char)puVar36;
  puVar15 = puVar36 + 0x2828000;
  bVar7 = (byte)envShortName;
  bVar44 = (byte)*puVar15 < bVar7;
  *(byte *)puVar15 = (byte)*puVar15 - bVar7;
  bVar7 = (byte)pbVar12 + *pbVar12;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7 + bVar44);
  puVar15 = puVar40;
  uVar43 = uVar41;
  if (CARRY1((byte)pbVar12,*pbVar12) || CARRY1(bVar7,bVar44)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar11 = *pcVar11 + bVar9;
  uVar43 = uVar41;
  in_SS = uVar42;
  goto code_r0x00402e6e;
}


