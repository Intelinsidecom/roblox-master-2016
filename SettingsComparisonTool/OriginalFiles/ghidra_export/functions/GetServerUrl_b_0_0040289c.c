/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040289c
 * Raw Name    : <GetServerUrl>b__0
 * Demangled   : <GetServerUrl>b__0
 * Prototype   : bool <GetServerUrl>b__0(uint * envId, byte * param_2)
 * Local Vars  : param_2, pcStack_7c, uStack_28, pcStack_44, puStack_10, puStack_14, uStack_8, pcStack_c, uVar2, uVar1, uVar4, uVar3, cVar6, uVar5, cVar8, bVar7, cVar10, bVar9, pcVar11, in_EAX, uVar13, pbVar12, puVar15, uVar14, piVar17, pbVar16, pcVar19, iVar18, piVar21, pcVar20, puVar23, pbVar22, extraout_ECX, uVar24, uVar25, extraout_ECX_00, bVar27, cVar26, cVar29, bVar28, uVar31, uVar30, puVar33, uVar32, uVar35, bVar34, pcVar36, unaff_EBX, unaff_EBP, bVar37, puVar38, unaff_ESI, unaff_EDI, puVar39, in_ES, puVar40, uVar42, uVar41, in_SS, in_CS, uVar43, in_DS, bVar44, in_GS_OFFSET, in_TF, in_AF, bVar45, in_IF, envId, in_NT, bVar46, uVar47
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */
/* WARNING: Removing unreachable block (ram,0x004029b0) */

bool __fastcall <GetServerUrl>b__0(uint *envId,byte *param_2)

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
  do {
                    /* .NET CLR Managed Code */
    pcVar36 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                               CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x19],
                                        (char)unaff_EBX));
    *in_EAX = *in_EAX + (char)in_EAX;
    pbVar12 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\x03');
    puVar33 = unaff_ESI;
    do {
      unaff_ESI = puVar33 + 1;
      out(*puVar33,(short)param_2);
      pcVar36 = pcVar36 + -1;
      bVar7 = (byte)pbVar12;
      *pbVar12 = *pbVar12 + bVar7;
      envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                               CONCAT11((byte)((uint)envId >> 8) | *param_2,(char)envId));
      *pbVar12 = *pbVar12 + bVar7;
      bVar9 = (byte)param_2;
      *pcVar36 = *pcVar36 + bVar9;
      *(byte *)((int)pbVar12 * 2) = *(byte *)((int)pbVar12 * 2) ^ bVar7;
      *pbVar12 = *pbVar12 + bVar7;
      *pbVar12 = *pbVar12 | bVar7;
      bVar44 = CARRY1((byte)*envId,bVar9);
      *(byte *)envId = (byte)*envId + bVar9;
      cVar6 = bVar7 + 10 + bVar44;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),cVar6);
      puVar33 = unaff_ESI;
    } while (bVar7 < 0xf6 && !CARRY1(bVar7 + 10,bVar44));
    *pbVar12 = *pbVar12 + cVar6;
    pcVar11 = (char *)((uint)pbVar12 | *unaff_EDI);
    unaff_EBX = (uint *)CONCAT22((short)((uint)pcVar36 >> 0x10),
                                 CONCAT11((char)((uint)pcVar36 >> 8) + unaff_EBP[-100],(char)pcVar36
                                         ));
    *pcVar11 = *pcVar11 + (char)pcVar11;
    bVar7 = (char)pcVar11 + 7;
    uVar47 = CONCAT44(param_2,CONCAT31((int3)((uint)pcVar11 >> 8),bVar7));
code_r0x004028c8:
    puVar33 = (uint *)((ulonglong)uVar47 >> 0x20);
    pcVar36 = (char *)uVar47;
    uVar24 = (undefined3)((ulonglong)uVar47 >> 8);
    cVar6 = (char)uVar47;
    if ((POPCOUNT(bVar7) & 1U) == 0) {
      *pcVar36 = *pcVar36 + cVar6;
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
        *(byte *)puVar33 = (byte)*puVar33 + (char)envId;
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
        unaff_EBX = (uint *)((int)unaff_EBX + -1);
        cVar6 = (char)puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                                 CONCAT11((byte)((uint)envId >> 8) |
                                          *(byte *)((int)envId + 0x16d7207),(char)envId));
        pbVar12 = (byte *)((int)puVar15 + 0x7d);
        bVar7 = *pbVar12;
        bVar34 = (byte)((uint)puVar33 >> 8);
        bVar9 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar34;
        pcStack_c = (char *)((uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar9,bVar34) * 0x800 |
                             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                             (uint)((char)*pbVar12 < '\0') * 0x80 | (uint)(*pbVar12 == 0) * 0x40 |
                             (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(*pbVar12) & 1U) == 0) * 4 |
                            (uint)CARRY1(bVar7,bVar34));
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        in_EAX = (byte *)(CONCAT31((int3)((uint)puVar15 >> 8),cVar6 + '+') ^ *unaff_EDI);
        if ((POPCOUNT((uint)in_EAX & 0xff) & 1U) != 0) goto code_r0x00402898;
        bVar7 = (byte)in_EAX;
        *in_EAX = *in_EAX + bVar7;
        puVar15 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar7 + 0x72);
        if (bVar7 < 0x8e && (byte)(bVar7 + 0x72) != '\0') {
          if (SCARRY1(bVar7,'r')) goto code_r0x00402974;
        }
        else {
          *(byte *)((int)puVar15 + 0x6f) = *(byte *)((int)puVar15 + 0x6f) + bVar34;
        }
code_r0x00402905:
        uVar47 = CONCAT44(puVar33,puVar15);
        unaff_EBX = (uint *)((int)unaff_EBX + -1);
        cVar6 = (char)puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + cVar6;
        bVar7 = (byte)((uint)envId >> 8) | (byte)*envId;
        envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),CONCAT11(bVar7,(char)envId));
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
        envId = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),
                                 (byte)extraout_ECX | *(byte *)((ulonglong)uVar47 >> 0x20));
        while( true ) {
          pcVar36 = (char *)((int)uVar47 * 2);
          *pcVar36 = *pcVar36 - (char)envId;
          uVar13 = *unaff_EBX;
          cVar6 = (char)((uint)envId >> 8);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
          if (SCARRY1((byte)uVar13,cVar6) == (char)(byte)*unaff_EBX < '\0') {
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
          pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '3');
          uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
          uVar35 = SUB41(unaff_EBX,0);
          bVar7 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_ESI + 0x16) + (0xd3 < bVar7);
          unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(bVar7,uVar35));
          *pcVar36 = *pcVar36 + cVar6 + '3';
          cVar8 = cVar6 + ':';
          puVar15 = (uint *)CONCAT31(uVar24,cVar8);
          if ((POPCOUNT(cVar8) & 1U) != 0) {
            bVar7 = bVar7 | *(byte *)((int)puVar33 + 7);
            unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(bVar7,uVar35));
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
          envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                                   CONCAT11((byte)((uint)envId >> 8) | (byte)*puVar15,(char)envId));
          *(byte *)puVar15 = (byte)*puVar15 + cVar6;
          puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),
                                     CONCAT11((byte)((uint)puVar33 >> 8) | (byte)unaff_EBX[0x18],
                                              (char)puVar33));
          unaff_ESI = puStack_14;
          unaff_EDI = puStack_10;
code_r0x00402966:
          *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
          bVar7 = (byte)((uint)unaff_EBX >> 8) | *(byte *)((int)puVar33 + 7);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11(bVar7,(char)unaff_EBX));
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
          envId = extraout_ECX_00;
          uVar41 = in_ES;
code_r0x00402982:
          bVar7 = POPCOUNT(uVar13 & 0xff);
          in_ES = uVar41;
          if (bVar44) {
            *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
            envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                                     CONCAT11((byte)((uint)envId >> 8) |
                                              *(byte *)((ulonglong)uVar47 >> 0x20),(char)envId));
            goto code_r0x00402991;
          }
code_r0x00402984:
          pcVar36 = (char *)((ulonglong)uVar47 >> 0x20);
          if ((bVar7 & 1) == 0) {
            *(char *)uVar47 = *(char *)uVar47 + (char)uVar47;
            *pcVar36 = *pcVar36 + (char)envId;
            uVar47 = CONCAT44(CONCAT22((short)((ulonglong)uVar47 >> 0x30),
                                       CONCAT11((char)((ulonglong)uVar47 >> 0x28) - pcVar36[0x1f],
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
                *(byte *)envId = (byte)*envId + (char)envId;
                bVar7 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar9;
                *unaff_EDI = (uint)((int)unaff_EBX + (uint)CARRY1(bVar7,bVar9) + *unaff_EDI);
                *(uint *)(unaff_EBP + 0x100002b) = *(uint *)(unaff_EBP + 0x100002b) | (uint)envId;
                uVar24 = (undefined3)((uint)pbVar12 >> 8);
                bVar9 = bVar9 | (byte)*unaff_ESI;
                puVar15 = (uint *)CONCAT31(uVar24,bVar9);
                uVar13 = *puVar15;
                uVar1 = *puVar15;
                *puVar15 = (uint)(*puVar15 + (int)puVar15);
                if (SCARRY4(uVar1,(int)puVar15)) {
                  *(byte *)unaff_ESI = (byte)*unaff_ESI - (char)unaff_EBX;
                  *(byte *)puVar33 = (byte)*puVar33 + (char)envId;
                  *(byte *)unaff_EDI = (byte)*unaff_EDI - (char)unaff_EBX;
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
                bVar7 = (byte)envId;
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
              puVar38 = (uint *)CONCAT31(uVar24,bVar9 + (byte)*puVar15);
              bVar7 = (byte)envId;
              in_ES = uVar41;
              if (SCARRY1(bVar9,(byte)*puVar15)) {
                *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                uVar47 = CONCAT44(puVar33,(int)puVar38 + -0x1c37211);
                pcVar36 = (char *)((int)puVar38 + -0x1c3720a);
                *pcVar36 = *pcVar36 + bVar34;
                bVar7 = POPCOUNT(*pcVar36);
                goto code_r0x00402984;
              }
              puStack_14 = (uint *)CONCAT22(puStack_14._2_2_,uVar41);
              unaff_ESI = (uint *)((int)unaff_ESI +
                                  (-(uint)CARRY1(bVar9,(byte)*puVar15) - *(int *)((int)puVar33 + 5))
                                  );
              bVar44 = SCARRY4((int)puVar38,*puVar38);
              uVar13 = (int)puVar38 + *puVar38;
              uVar47 = CONCAT44(puVar33,uVar13);
              if (bVar44) goto code_r0x00402982;
              bVar9 = (byte)uVar13 + 0x8e;
              uVar14 = CONCAT31((int3)(uVar13 >> 8),bVar9 - CARRY4((uint)puVar38,*puVar38));
              *unaff_EBX = (*unaff_EBX - uVar14) -
                           (uint)((byte)uVar13 < 0x72 || bVar9 < CARRY4((uint)puVar38,*puVar38));
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
                puVar38 = unaff_ESI + 1;
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
                *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar6;
                *(byte *)unaff_EBX = (byte)*unaff_EBX ^ bVar9;
                bVar27 = (byte)((uint)envId >> 8);
                *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar27;
                *(byte *)puVar15 = (byte)*puVar15 + bVar9;
                pbVar16 = (byte *)CONCAT31((int3)((uint)puVar15 >> 8),bVar9 | (byte)*puVar15);
                *(byte *)envId = (byte)*envId + cVar6;
                bVar37 = *pbVar16;
                uVar30 = (undefined2)((uint)envId >> 0x10);
                envId = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar37,bVar7));
                pbVar16 = pbVar16 + (uint)CARRY1(bVar27,*pbVar16) + *(int *)pbVar16;
                *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                unaff_EBP = unaff_EBP + iRam0355720b;
                pbVar12 = pbVar16 + 0x73;
                bVar9 = *pbVar12;
                *pbVar12 = *pbVar12 + bVar34;
                uVar24 = (undefined3)((uint)pbVar16 >> 8);
                bVar9 = (char)pbVar16 + CARRY1(bVar9,bVar34);
                pcVar36 = (char *)CONCAT31(uVar24,bVar9);
                *(byte *)puVar33 = (byte)*puVar33 + bVar7;
                if ((POPCOUNT((byte)*puVar33) & 1U) == 0) {
                  in_SS = uVar41;
                }
                puVar40 = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x17));
                *pcVar36 = *pcVar36 + bVar9;
                cVar6 = bVar9 + 2;
                puVar15 = (uint *)CONCAT31(uVar24,cVar6);
                if (bVar9 < 0xfe) {
                  *puVar15 = (uint)(*puVar15 + (int)puVar15);
                  goto code_r0x00402a8f;
                }
                *(byte *)puVar15 = (byte)*puVar15 + cVar6;
                uVar13 = *puVar33;
                puVar38 = (uint *)((int)unaff_ESI + unaff_EBX[0x19]);
                *(byte *)puVar15 = (byte)*puVar15 + cVar6;
                envId = (uint *)CONCAT22(uVar30,CONCAT11(bVar27 + bVar37 | (byte)*puVar15,
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
    *(byte *)puVar33 = (byte)*puVar33 + (char)envId;
    cVar8 = (char)unaff_EBX - (byte)*unaff_ESI;
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                          *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8) +
                                                   0x12),cVar8));
    *pcVar36 = *pcVar36 + cVar6;
    bVar7 = cVar6 + 0x2aU & (byte)*puVar33;
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x12));
    *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
    puVar15 = (uint *)CONCAT31(uVar24,bVar7 + 0x2a);
    uStack_8 = in_DS;
code_r0x00402879:
    cVar8 = (char)unaff_EBX - (byte)*unaff_ESI;
    cVar6 = *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8) + 0x13);
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
    uVar24 = (undefined3)((uint)puVar15 >> 8);
    bVar7 = (char)puVar15 + 0x2aU & (byte)*puVar33;
    pcVar36 = (char *)CONCAT31(uVar24,bVar7);
    unaff_EDI = (uint *)((int)unaff_EDI + *(int *)(unaff_EBP + 0x13));
    *pcVar36 = *pcVar36 + bVar7;
    pbVar12 = (byte *)CONCAT31(uVar24,bVar7 + 0x2a);
    pcStack_c = (char *)(uint)in_DS;
    bVar7 = (byte)((uint)envId >> 8);
    bVar9 = bVar7 + *pbVar12;
    pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
    *(byte *)puVar33 = (byte)*puVar33 + (char)envId;
    unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + cVar6,cVar8
                                                         )) >> 8),cVar8 - (byte)*unaff_ESI);
    envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),CONCAT11(bVar9 + *pbVar12,(char)envId));
    in_EAX = pbVar12 + (uint)CARRY1(bVar9,*pbVar12) + *(int *)pbVar12;
code_r0x00402898:
    *(byte *)puVar33 = (byte)*puVar33 + (char)envId;
    param_2 = (byte *)CONCAT22((short)((uint)puVar33 >> 0x10),
                               CONCAT11((char)((uint)puVar33 >> 8) - (byte)*unaff_ESI,(char)puVar33)
                              );
  } while( true );
code_r0x00402992:
  pbVar12 = (byte *)((int)puVar15 + 0x2a);
  bVar44 = CARRY1(*pbVar12,bVar34);
  *pbVar12 = *pbVar12 + bVar34;
  goto code_r0x00402995;
code_r0x00402a36:
  *(byte *)(in_GS_OFFSET + (int)puVar15) = *(byte *)(in_GS_OFFSET + (int)puVar15) + (char)puVar15;
  envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                           CONCAT11((byte)((uint)envId >> 8) | *(byte *)((int)unaff_EDI + 0x66),
                                    (char)envId));
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
code_r0x00402a3e:
  uVar24 = (undefined3)((uint)puVar15 >> 8);
  bVar7 = (byte)puVar15 | (byte)*puVar38;
  pcVar36 = (char *)CONCAT31(uVar24,bVar7);
  if ((char)bVar7 < '\0') {
    *pcVar36 = *pcVar36 + bVar7;
    cVar6 = bVar7 + 2;
    piVar21 = (int *)CONCAT31(uVar24,cVar6);
    if ((POPCOUNT(cVar6) & 1U) == 0) {
      *(char *)piVar21 = (char)*piVar21 + cVar6;
      bVar7 = bVar7 + 0x71;
      pcVar11 = (char *)CONCAT31(uVar24,bVar7);
      pcVar36 = (char *)segment(uVar43,(short)unaff_EBX + (short)puVar38);
      *pcVar36 = *pcVar36 + bVar7;
      uVar13 = unaff_EDI[0x1a];
      *pcVar11 = *pcVar11 + bVar7;
      envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                               CONCAT11((byte)((uint)envId >> 8) | (byte)uVar13 |
                                        *(byte *)((int)unaff_EDI + 0x69),(char)envId));
      *pcVar11 = *pcVar11 + bVar7;
      bVar7 = bVar7 | (byte)*puVar33;
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      if ((POPCOUNT(bVar7) & 1U) != 0) goto code_r0x00402a75;
      goto code_r0x00402a5d;
    }
    unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1;
    out(*puVar38,(short)puVar33);
  }
  else {
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[6],
                                          (char)unaff_EBX));
code_r0x00402a5d:
    *pcVar36 = *pcVar36 + (char)pcVar36;
    piVar21 = (int *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
    unaff_ESI = puVar38;
  }
code_r0x00402a61:
  pcVar36 = (char *)segment(uVar43,(short)unaff_EBX + (short)unaff_ESI);
  *pcVar36 = *pcVar36 + (char)piVar21;
  cVar6 = (char)envId;
  envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                           CONCAT11((byte)((uint)envId >> 8) | (byte)unaff_EDI[0x1a],cVar6));
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  uVar30 = CONCAT11((byte)((uint)puVar33 >> 8) | *(byte *)((int)puVar33 + 0x65),(char)puVar33);
  puVar33 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),uVar30);
  piVar17 = (int *)((int)piVar21 + *piVar21);
  puVar38 = unaff_ESI;
  puVar40 = unaff_EDI;
  uVar42 = uVar41;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402ae3;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  puVar38 = unaff_ESI + (uint)bVar45 * -2 + 1;
  out(*unaff_ESI,uVar30);
code_r0x00402a75:
  bVar7 = (byte)((uint)envId >> 8) | (byte)*puVar33;
  envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),CONCAT11(bVar7,(char)envId));
  piVar21 = (int *)(uint)(byte)*unaff_EBX;
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  puVar40 = unaff_EDI;
code_r0x00402a7f:
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  out(*puVar38,(short)puVar33);
  bVar7 = in((short)puVar33);
  *(byte *)puVar40 = bVar7;
  *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
  envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                           CONCAT11((byte)((uint)envId >> 8) | (byte)*puVar33,(char)envId));
  iVar18 = *piVar21;
  cVar6 = in(1);
  puVar15 = (uint *)CONCAT31((int3)((uint)((int)piVar21 + *piVar21) >> 8),cVar6);
  *(char *)puVar15 = (char)*puVar15 + cVar6;
  puVar15 = (uint *)((uint)puVar15 | *puVar15);
  *(byte *)envId = (byte)*envId + (char)puVar33;
  puVar38 = (uint *)((int)puVar38 + (((uint)bVar45 * -8 + 4) - iVar18));
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
    *(byte *)(puVar38 + -0xc800000) = (byte)puVar38[-0xc800000] + (char)puVar33;
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    *(byte *)puVar33 = (byte)*puVar33 + cVar6;
    cVar8 = (char)envId;
    if ((POPCOUNT((byte)*puVar33) & 1U) != 0) {
      *(byte *)puVar33 = (byte)*puVar33 + cVar8;
      unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1;
      out(*puVar38,(short)puVar33);
      piVar21 = (int *)((longlong)*piVar17 * 0x7b020a00);
      *(char *)piVar21 =
           (char)*piVar21 - ((longlong)(int)piVar21 != (longlong)*piVar17 * 0x7b020a00);
      pbVar12 = (byte *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12;
      goto code_r0x00402a61;
    }
    *(char *)piVar17 = (char)*piVar17 + cVar6;
    puVar15 = (uint *)CONCAT31(uVar24,(char)puVar15 + ':');
    unaff_ESI = (uint *)((uint)puVar38 | *(uint *)((int)puVar33 + -0x79));
    iVar18 = (int)puVar15 + *puVar15;
    if (SCARRY4((int)puVar15,*puVar15)) {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            (byte)unaff_ESI[(int)unaff_EBX],(char)unaff_EBX));
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
    pcVar36 = (char *)CONCAT31(uVar24,cVar10);
    puVar40 = unaff_EDI + (uint)bVar45 * -2 + 1;
    uVar13 = in((short)puVar33);
    *unaff_EDI = uVar13;
    *pcVar36 = *pcVar36 + cVar10;
    envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                             CONCAT11((byte)((uint)envId >> 8) | bRama07b0222,cVar8));
    *pcVar36 = *pcVar36 + cVar10;
    pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '>');
code_r0x00402ad2:
    out(*unaff_ESI,(short)puVar33);
    puVar38 = (uint *)((int)(unaff_ESI + (uint)bVar45 * -2 + 1) + (uint)bVar45 * -2 + 1);
    out((byte)unaff_ESI[(uint)bVar45 * -2 + 1],(short)puVar33);
    bVar7 = (byte)pcVar36;
    *pcVar36 = *pcVar36 + bVar7;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | (byte)*puVar40);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    uVar24 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = bVar7 + in_AF * -6;
    puVar33 = (uint *)((uint)puVar33 ^ *puVar33);
    cVar6 = bVar7 + (0x9f < bVar7 | in_AF * (bVar7 < 6)) * -0x60 + (byte)*puVar33;
    piVar21 = (int *)CONCAT31(uVar24,cVar6);
    if ((POPCOUNT(cVar6) & 1U) != 0) goto code_r0x00402a7f;
    *(char *)piVar21 = (char)*piVar21 + cVar6;
    piVar17 = (int *)CONCAT31(uVar24,cVar6 + '\x17');
    uVar42 = uVar41;
code_r0x00402ae3:
    out(*puVar38,(short)puVar33);
    unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1 + (uint)bVar45 * -2 + 1;
    out(puVar38[(uint)bVar45 * -2 + 1],(short)puVar33);
    *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
code_r0x00402ae7:
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((byte)((uint)unaff_EBX >> 8) | unaff_EBP[-0x60],
                                          (char)unaff_EBX));
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
      puVar38 = unaff_ESI;
code_r0x00402af9:
      uVar41 = uVar42;
      unaff_EDI = puVar40;
      if ((bVar7 & 1) == 0) {
        *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
        bVar7 = (byte)envId;
        *(byte *)puVar33 = (byte)*puVar33 + bVar7;
        uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,in_SS);
        unaff_ESI = puVar38 + (uint)bVar45 * -2 + 1;
        out(*puVar38,(short)puVar33);
        uVar13 = *puVar33;
        *(byte *)puVar33 = (byte)*puVar33 + bVar7;
        iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + 'o') +
                 *(int *)((int)puVar33 * 2) + (uint)CARRY1((byte)uVar13,bVar7);
        pcVar36 = (char *)CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '(');
        while( true ) {
          uVar13 = *puVar33;
          bVar9 = (byte)envId;
          *(byte *)puVar33 = (byte)*puVar33 + bVar9;
          pcVar36 = pcVar36 + (uint)CARRY1((byte)uVar13,bVar9) + iRam73280512;
          bVar7 = (byte)pcVar36;
          *pcVar36 = *pcVar36 + bVar7;
          envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                                   CONCAT11((byte)((uint)envId >> 8) | bRam7d160243,bVar9));
          bVar45 = ((uint)uStack_28 & 0x400) != 0;
          in_AF = ((uint)uStack_28 & 0x10) != 0;
          *pcVar36 = *pcVar36 + bVar7;
          uVar24 = (undefined3)((uint)pcVar36 >> 8);
          iRam0000a37d = iRam0000a37d + CONCAT31(uVar24,bVar7 + 2) + (uint)(0xfd < bVar7);
          cVar6 = bVar7 + 4;
          if (SCARRY1(bVar7 + 2,'\x02') != cVar6 < '\0') break;
          *(char *)CONCAT31(uVar24,cVar6) = *(char *)CONCAT31(uVar24,cVar6) + cVar6;
          iVar18 = CONCAT31(uVar24,bVar7 + 0x16);
code_r0x00402b33:
          piVar17 = (int *)(iVar18 + 0xe2802);
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)envId >> 8);
          uVar42 = uVar41;
          uVar41 = in_SS;
          while( true ) {
            bVar9 = (byte)unaff_EBX | (byte)((uint)envId >> 8);
            unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar9);
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
            puVar38 = unaff_ESI;
            if ((SCARRY4(uVar13,(int)puVar15) != SCARRY4((int)(uVar1 + (int)puVar15),uVar14)) ==
                (int)*unaff_ESI < 0) goto code_r0x00402af9;
            bVar7 = (byte)puVar15;
            *(byte *)puVar15 = (byte)*puVar15 + bVar7;
            iVar18 = CONCAT31((int3)((uint)puVar15 >> 8),bVar7 + 2) + 0x9d7d + (uint)(0xfd < bVar7);
            bVar7 = (byte)puVar33 | (byte)*puVar33;
            uVar13 = *unaff_EBX;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar9;
            pcVar36 = (char *)(CONCAT31((int3)((uint)iVar18 >> 8),(char)iVar18 + '\x12') + 0x228b26
                               + *puVar40 + (uint)CARRY1((byte)uVar13,bVar9));
            cVar6 = bVar7 + (byte)*envId;
            puVar33 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),cVar6);
            if (SCARRY1(bVar7,(byte)*envId) == cVar6 < '\0') break;
            *pcVar36 = *pcVar36 + (char)pcVar36;
            cVar6 = (char)pcVar36 + '\x02';
            pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6);
            bVar7 = POPCOUNT(cVar6);
            uVar42 = uVar41;
code_r0x00402b7a:
            puVar15 = unaff_ESI;
            if ((bVar7 & 1) != 0) break;
            while( true ) {
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              uVar24 = (undefined3)((uint)pcVar36 >> 8);
              pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '\x13');
              *(byte *)envId = (byte)*envId | (byte)puVar33;
              *(byte *)puVar40 = (byte)*puVar40 | (byte)puVar33;
              *puVar33 = (uint)(pcVar36 + *puVar33);
              uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
              uVar35 = SUB41(unaff_EBX,0);
              cVar8 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x5f);
              unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + '\x13';
              piVar17 = (int *)CONCAT31(uVar24,cVar6 + -0x7a);
              uVar13 = *puVar33;
              *(byte *)puVar33 = (byte)*puVar33 + (char)envId;
              uVar4 = in_CS;
              if (SCARRY1((byte)uVar13,(char)envId) == (char)(byte)*puVar33 < '\0') break;
              *(char *)piVar17 = (char)*piVar17 + cVar6 + -0x7a;
              cVar10 = cVar6 + -0x78;
              piVar17 = (int *)CONCAT31(uVar24,cVar10);
              uVar4 = uVar42;
              if ((POPCOUNT(cVar10) & 1U) != 0) break;
              *(char *)piVar17 = (char)*piVar17 + cVar10;
              pcVar36 = (char *)CONCAT31(uVar24,cVar6 + -0x65);
              *envId = *envId | (uint)puVar33;
              *puVar40 = *puVar40 | (uint)puVar33;
              pbVar12 = (byte *)((int)envId + -1);
              cVar8 = cVar8 + *(byte *)((int)unaff_EBX + -0x5e);
              unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar8,uVar35));
              *pcVar36 = *pcVar36 + cVar6 + -0x65;
              bVar7 = cVar6 + 10;
              puVar38 = (uint *)CONCAT31(uVar24,bVar7);
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
              unaff_EBP = (char *)((uint)unaff_EBP | *puVar38);
              *(byte *)puVar38 = (char)*puVar38 + bVar7;
              envId = (uint *)CONCAT22((short)((uint)pbVar16 >> 0x10),
                                       CONCAT11((byte)((uint)pbVar16 >> 8) | bRam7d170243,
                                                (char)pbVar16 + (byte)uVar5 +
                                                (CARRY4((uint)pbVar12,uVar13) ||
                                                CARRY4((uint)(pbVar12 + uVar1),uVar2))));
              bVar45 = (in_SS & 0x400) != 0;
              in_AF = (in_SS & 0x10) != 0;
              *(byte *)puVar38 = (char)*puVar38 + bVar7;
              bVar44 = 0xfd < bVar7;
              pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '\f');
              puVar33 = (uint *)((uint)puVar33 | uVar14);
code_r0x00402bd1:
              uVar13 = *unaff_EBX;
              uVar1 = *unaff_EBX;
              *unaff_EBX = (uint)((byte *)(uVar1 + (int)envId) + bVar44);
              bVar7 = POPCOUNT(*unaff_EBX & 0xff);
              uVar42 = in_SS;
              if ((SCARRY4(uVar13,(int)envId) != SCARRY4((int)(uVar1 + (int)envId),(uint)bVar44)) ==
                  (int)*unaff_EBX < 0) goto code_r0x00402b7a;
              cVar6 = (char)pcVar36;
              *pcVar36 = *pcVar36 + cVar6;
              pcVar36 = (char *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + '\x02');
              if (SCARRY1(cVar6,'\x02') == (char)(cVar6 + '\x02') < '\0') {
code_r0x00402bdb:
                *pcVar36 = *pcVar36 + (char)pcVar36;
                pcVar36 = (char *)(CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + '\x12') |
                                  *puVar33);
                *(byte *)puVar40 = (byte)*puVar40 - (char)envId;
                *pcVar36 = *pcVar36 + (char)pcVar36;
                puVar33 = (uint *)((int)puVar33 - *unaff_ESI);
                bVar7 = (byte)unaff_EBX | (byte)((uint)envId >> 8);
                cVar6 = *pcVar36;
                uVar24 = (undefined3)((uint)pcVar36 >> 8);
                pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                *pcVar36 = *pcVar36 + cVar6;
                pcVar11 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                                                                       bVar7) + -0x5b),bVar7));
                *pcVar36 = *pcVar36 + cVar6;
                bVar44 = false;
                pcVar36 = (char *)(CONCAT31(uVar24,cVar6 + '\x13') | *puVar33);
                do {
                  bVar9 = (byte)envId;
                  bVar7 = bVar9 + (byte)unaff_ESI[(int)puVar40 * 2];
                  envId = (uint *)CONCAT31((int3)((uint)envId >> 8),bVar7 + bVar44);
                  uVar13 = (uint)(CARRY1(bVar9,(byte)unaff_ESI[(int)puVar40 * 2]) ||
                                 CARRY1(bVar7,bVar44));
                  pcVar19 = pcVar36 + 0x1b000019 + uVar13;
                  piVar21 = (int *)((int)puVar40 * 2 + 0x40000a5);
                  *piVar21 = (int)((int)envId +
                                  (uint)((char *)0xe4ffffe6 < pcVar36 ||
                                        CARRY4((uint)(pcVar36 + 0x1b000019),uVar13)) + *piVar21);
                  puVar33 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),(char)puVar33 + cRam00009d7d
                                            );
                  uVar24 = (undefined3)((uint)pcVar19 >> 8);
                  bVar7 = (char)pcVar19 + 0x12;
                  in_AF = 9 < (bVar7 & 0xf) | in_AF;
                  uVar13 = CONCAT31(uVar24,bVar7 + in_AF * -6) & 0xffffff0f;
                  pcVar36 = (char *)CONCAT22((short)(uVar13 >> 0x10),
                                             CONCAT11((char)((uint)pcVar19 >> 8) - in_AF,
                                                      (char)uVar13));
                  pcVar19 = (char *)((uint)unaff_EBP | *(uint *)CONCAT31(uVar24,bVar7));
                  while( true ) {
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    puVar15 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),
                                               (byte)puVar33 | (byte)*puVar33);
                    puVar40 = (uint *)((uint)puVar40 | (uint)unaff_ESI);
                    uVar13 = (uint)pcVar11 | (uint)unaff_ESI;
                    unaff_EBP = pcVar19 + 1;
                    uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar41);
                    cVar8 = (char)(pcVar36 + 0x1b000019);
                    uVar24 = (undefined3)((uint)(pcVar36 + 0x1b000019) >> 8);
                    cVar6 = cVar8 + -0x13;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                    uVar30 = (undefined2)(uVar13 >> 0x10);
                    cVar10 = (char)(uVar13 >> 8) + *(char *)(uVar13 - 0x5e);
                    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar10,(byte)uVar13));
                    *pcVar36 = *pcVar36 + cVar6;
                    pcVar36 = (char *)(CONCAT31(uVar24,cVar8 + '\x19') | *puVar15);
                    bVar7 = (byte)pcVar36;
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      pbVar12 = (byte *)((int)puVar15 + (int)pcVar36);
                      bVar44 = CARRY1(*pbVar12,bVar7);
                      *pbVar12 = *pbVar12 + bVar7;
                      puVar33 = puVar15;
                      goto code_r0x00402bd1;
                    }
                    *pcVar36 = *pcVar36 + bVar7;
                    uVar24 = (undefined3)((uint)pcVar36 >> 8);
                    pcVar11 = (char *)CONCAT31(uVar24,bVar7 + 0x6f);
                    puVar33 = (uint *)((int)puVar15 + 1);
                    *pcVar11 = *pcVar11 + bVar7 + 0x6f;
                    bVar9 = (byte)uVar13 | (byte)((uint)pcVar36 >> 8);
                    pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x5c);
                    cVar10 = cVar10 + *(char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar9) + -0x5f
                                               );
                    unaff_EBX = (uint *)CONCAT22(uVar30,CONCAT11(cVar10,bVar9));
                    *pcVar36 = *pcVar36 + bVar7 + 0x5c;
                    pcVar36 = (char *)(CONCAT31(uVar24,bVar7 + 0x88) | *puVar33);
                    if ((POPCOUNT((uint)pcVar36 & 0xff) & 1U) != 0) {
                      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)envId >> 8);
                      uStack_28 = (uint *)((uint)uStack_28._2_2_ << 0x10);
                      goto code_r0x00402bdb;
                    }
                    *pcVar36 = *pcVar36 + (char)pcVar36;
                    uVar24 = (undefined3)((uint)pcVar36 >> 8);
                    cVar6 = (char)pcVar36 + 'o';
                    puVar33 = (uint *)((int)puVar15 + 2);
                    *(char *)CONCAT31(uVar24,cVar6) = *(char *)CONCAT31(uVar24,cVar6) + cVar6;
                    pcVar11 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                               bVar9 | (byte)((uint)pcVar36 >> 8));
                    pcVar36 = (char *)(CONCAT31(uVar24,cVar6) | 2);
                    pcVar19[-0x62] = pcVar19[-0x62] + '\x01';
                    bVar7 = (byte)pcVar36;
                    *pcVar36 = *pcVar36 + bVar7;
                    bVar44 = 0xfd < bVar7;
                    cVar6 = bVar7 + 2;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                    uVar43 = uVar41;
                    if (SCARRY1(bVar7,'\x02') != cVar6 < '\0') break;
                    *pcVar36 = *pcVar36 + cVar6;
                    bVar9 = bVar7 + 10;
                    pcVar36 = (char *)CONCAT31(uVar24,bVar9);
                    *pcVar36 = *pcVar36 - cVar10;
                    cVar8 = (char)envId;
                    *(byte *)puVar33 = *(byte *)puVar33 + cVar8;
                    pcVar19[-0x62] = pcVar19[-0x62] + '\x01';
                    *pcVar36 = *pcVar36 + bVar9;
                    cVar6 = bVar7 + 0xc;
                    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                    if (SCARRY1(bVar9,'\x02') == cVar6 < '\0') {
                      *pcVar36 = *pcVar36 + cVar6;
                      *(byte *)envId = (byte)*envId - cVar10;
                      *(byte *)puVar33 = *(byte *)puVar33 + cVar8;
                      cVar6 = (bVar7 + 0x13) - (byte)envId[0x13];
                      pcVar36 = (char *)CONCAT31(uVar24,cVar6);
                      *pcVar36 = *pcVar36 + cVar6;
                      pcVar20 = (char *)CONCAT31(uVar24,cVar6 + *pcVar36);
                      *pcVar20 = *pcVar20 + cVar6 + *pcVar36;
                      pcVar20 = pcVar20 + *envId;
                      *pcVar20 = *pcVar20 + (char)pcVar20;
                      LOCK();
                      pcVar36 = *(char **)pcVar20;
                      *(char **)pcVar20 = pcVar20;
                      UNLOCK();
                      *pcVar36 = *pcVar36 + (char)pcVar36;
                      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(byte)*envId);
                      *pbVar12 = *pbVar12 + (byte)*envId;
                      goto code_r0x00402c8d;
                    }
                    envId = (uint *)CONCAT31((int3)((uint)envId >> 8),
                                             cVar8 + *pcVar11 + (0xfd < bVar9));
                    *(byte *)puVar40 = (byte)*puVar40 - cVar10;
                    pcVar19 = unaff_EBP;
                  }
                } while( true );
              }
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -99),(char)unaff_EBX)
                                          );
              puVar15 = unaff_ESI;
            }
            *(char *)piVar17 = (char)*piVar17 + (char)piVar17;
            puVar33 = (uint *)((int)puVar33 - *puVar15);
            unaff_ESI = puVar15;
            uVar42 = uVar41;
            uVar41 = uVar4;
          }
          *(byte *)puVar33 = (byte)*puVar33 + (char)envId;
          pcVar36 = pcVar36 + -0x7d160243;
        }
        pcVar36 = (char *)CONCAT31(uVar24,uRam16040000);
        goto code_r0x00402ad2;
      }
      goto code_r0x00402a9b;
    }
code_r0x00402a8f:
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)envId;
    uVar13 = *puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + (byte)puVar15;
    *puVar40 = (uint)((int)puVar33 + (uint)CARRY1((byte)uVar13,(byte)puVar15) + *puVar40);
    puVar38 = unaff_ESI;
  }
  goto code_r0x00402a36;
  do {
    while( true ) {
      cVar29 = (char)envId;
      cVar26 = (char)((uint)envId >> 8) + (char)((uint)pbVar12 >> 8);
      envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),CONCAT11(cVar26,cVar29));
      cVar6 = (char)pbVar12;
      *pbVar12 = *pbVar12 + cVar6;
      pcVar36 = (char *)((int)pbVar12 * 2 + 0x1a10000);
      cVar10 = (char)((uint)pcVar11 >> 8);
      *pcVar36 = *pcVar36 + cVar10;
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
      uVar30 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar10 = cVar10 + (byte)unaff_ESI[(int)pcVar11];
      pcVar36 = (char *)CONCAT22(uVar30,CONCAT11(cVar10,(char)pcVar11));
      pcVar36[(int)pbVar12] = pcVar36[(int)pbVar12] + cVar6;
      *(byte *)puVar33 = *(byte *)puVar33 - cVar10;
      *(byte *)puVar33 = *(byte *)puVar33 + cVar29;
      uVar24 = (undefined3)((uint)pbVar12 >> 8);
      bVar7 = cVar6 - *pbVar12;
      *pcVar36 = *pcVar36 + bVar9;
      *(byte *)puVar33 = *(byte *)puVar33 ^ bVar7;
      *(byte *)puVar33 = *(byte *)puVar33 + bVar7;
      *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
      uVar13 = *envId;
      *(byte *)envId = (byte)*envId + bVar9;
      cVar8 = bVar7 + *(char *)CONCAT31(uVar24,bVar7) + CARRY1((byte)uVar13,bVar9);
      pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(cVar10 + pcVar19[-0x60],(char)pcVar11));
      *(char *)CONCAT31(uVar24,cVar8) = *(char *)CONCAT31(uVar24,cVar8) + cVar8;
      cVar10 = cVar8 + '\x12';
      pbVar12 = (byte *)CONCAT31(uVar24,cVar10);
      cVar6 = *pcVar11;
      *pcVar11 = *pcVar11 + cVar10;
      if (SCARRY1(cVar6,cVar10) != *pcVar11 < '\0') break;
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
    cVar10 = (char)((uint)pcVar11 >> 8);
    pcVar11[-0x62] = pcVar11[-0x62] + cVar10;
    *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
    bVar7 = cVar6 + 0x2fU + (byte)*envId;
    cVar8 = bVar7 + (0xf4 < bVar9);
    cVar6 = cVar8 + *(char *)CONCAT31(uVar24,cVar8) +
            (CARRY1(cVar6 + 0x2fU,(byte)*envId) || CARRY1(bVar7,0xf4 < bVar9));
    pcVar36 = (char *)CONCAT31(uVar24,cVar6);
    *pcVar36 = *pcVar36 - (char)puVar33;
    *pcVar36 = *pcVar36 + cVar6;
    pcVar19 = (char *)((int)puVar33 - *puVar33);
    *(byte *)(unaff_ESI + (int)pcVar11) = (byte)unaff_ESI[(int)pcVar11] + cVar10;
    pcVar36[(int)unaff_EBP] = pcVar36[(int)unaff_EBP] + cVar6;
    *pcVar19 = *pcVar19 + (char)envId;
    pcVar36 = (char *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11((char)((uint)pbVar12 >> 8) - *pcVar19,cVar6));
    uVar13 = *puVar40;
    *pcVar36 = *pcVar36 - (char)((uint)pcVar19 >> 8);
    *pcVar36 = *pcVar36 + cVar6;
    uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar42);
    pbVar16 = (byte *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                               CONCAT11(cVar10 - (byte)*unaff_ESI,(char)pcVar11));
    unaff_EBP = unaff_EBP + *(int *)(pbVar16 + (int)envId);
    puVar15 = (uint *)CONCAT31((int3)((uint)pcVar19 >> 8),(char)pcVar19 + (byte)uVar13);
    while( true ) {
      puVar33 = puVar15;
      uVar30 = (undefined2)((uint)pbVar16 >> 0x10);
      bVar37 = (char)((uint)pbVar16 >> 8) + pbVar16[0x18];
      *pcVar36 = *pcVar36 + (char)pcVar36;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),(char)pcVar36 + 'o');
      cVar6 = (char)envId;
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      uVar13 = *unaff_ESI;
      bVar34 = (byte)((uint)envId >> 8);
      bVar7 = *pbVar12;
      pbVar12 = pbVar12 + (uint)CARRY1(bVar34,*pbVar12) + *(int *)pbVar12;
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      cVar8 = ((char)pbVar16 - (byte)uVar13) - (byte)*unaff_ESI;
      bVar9 = *(byte *)((int)puVar40 + 0x1a);
      *pbVar12 = *pbVar12 + (char)pbVar12;
      envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                               CONCAT11(bVar34 + bVar7 + bVar9 | (byte)*puVar33,cVar6));
      pbVar12 = pbVar12 + *puVar33;
      if ((POPCOUNT((uint)pbVar12 & 0xff) & 1U) != 0) break;
      *pbVar12 = *pbVar12 + (char)pbVar12;
      bVar7 = (char)pbVar12 + 0x6f;
      pcVar36 = (char *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
      pcVar11 = (char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar37,(char)pbVar16)) >> 8),cVar8
                                 ) + -1);
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar36 = *pcVar36 + bVar7;
      *pcVar11 = *pcVar11 + (byte)puVar33;
      *(byte *)((int)pcVar36 * 2) = *(byte *)((int)pcVar36 * 2) ^ bVar7;
      uVar3 = *(undefined6 *)pcVar36;
      uVar42 = (ushort)((uint6)uVar3 >> 0x20);
      pcVar36 = (char *)uVar3;
      *pcVar36 = *pcVar36 + (char)uVar3;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)uVar3;
      pcVar36 = (char *)((uint)pcVar36 | 0x73110008);
      bVar37 = (byte)((uint)pcVar11 >> 8);
      *(byte *)puVar40 = (byte)*puVar40 - bVar37;
      *(byte *)puVar33 = (byte)*puVar33 + cVar6;
      puVar15 = unaff_ESI + (uint)bVar45 * -2 + 1;
      out(*unaff_ESI,(short)puVar33);
      *pcVar36 = *pcVar36;
      cVar6 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar6;
      bVar7 = unaff_EBP[-0x5a];
      uVar30 = (undefined2)((uint)pcVar11 >> 0x10);
      cVar8 = (char)pcVar11;
      *pcVar36 = *pcVar36 + cVar6;
      cVar6 = cVar6 + '\x02';
      uVar13 = CONCAT31((int3)((uint6)uVar3 >> 8),cVar6);
      envId = (uint *)(uVar13 | 0x73110000);
      unaff_ESI = puVar15 + (uint)bVar45 * -2 + 1;
      out(*puVar15,(short)puVar33);
      *(byte *)envId = (byte)*envId;
      bVar34 = (byte)puVar33 | (byte)*puVar40;
      puVar15 = (uint *)CONCAT31((int3)((uint)puVar33 >> 8),bVar34);
      *(byte *)envId = (byte)*envId + cVar6;
      pcVar36 = (char *)(uVar13 | 0x7b1f1609);
      bVar45 = (uVar43 & 0x400) != 0;
      *(uint *)((int)puVar40 + -0x7d) = *(uint *)((int)puVar40 + -0x7d) | (uint)unaff_EBP;
      bVar9 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar9;
      bVar37 = bVar37 | bVar7 | *(byte *)((int)unaff_ESI + 0x19);
      pbVar16 = (byte *)CONCAT22(uVar30,CONCAT11(bVar37,cVar8));
      *pcVar36 = *pcVar36 + bVar9;
      uVar24 = (undefined3)((uint)pcVar36 >> 8);
      unaff_ESI[(int)puVar40 * 2] =
           (uint)((int)puVar15 + (uint)(0xd2 < bVar9) + unaff_ESI[(int)puVar40 * 2]);
      bVar7 = bVar9 + 0x2d ^ *(byte *)CONCAT31(uVar24,bVar9 + 0x2d);
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      uVar13 = *unaff_ESI;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + bVar7;
      uVar43 = uVar42;
      if (CARRY1((byte)uVar13,bVar7)) {
        *pcVar36 = *pcVar36 + bVar7;
        bVar7 = bVar7 | pcVar36[0x4000019];
        pcVar36 = (char *)CONCAT31(uVar24,bVar7);
        if ('\0' < (char)bVar7) {
          *pcVar36 = *pcVar36 + bVar7;
          piVar21 = (int *)CONCAT31(uVar24,bVar7 + 0x28);
          *piVar21 = (int)piVar21 + (uint)(0xd7 < bVar7) + *piVar21;
          bVar27 = (byte)((uint6)uVar3 >> 8);
          *pbVar16 = *pbVar16 + bVar27;
          uVar31 = CONCAT11((byte)((uint)puVar33 >> 8) | bVar37,bVar34);
          puVar15 = (uint *)CONCAT22((short)((uint)puVar33 >> 0x10),uVar31);
          uStack_28 = (uint *)CONCAT22(uStack_28._2_2_,uVar42);
          bVar34 = in(uVar31);
          pbVar12 = (byte *)CONCAT31(uVar24,bVar34);
          bVar7 = *pbVar12;
          bVar44 = SCARRY1(*pbVar12,bVar34);
          *pbVar12 = *pbVar12 + bVar34;
          bVar9 = *pbVar12;
          puVar33 = unaff_ESI;
          in_SS = uVar42;
          if (!CARRY1(bVar7,bVar34)) goto code_r0x00402e19;
          *pbVar12 = *pbVar12 + bVar34;
          bVar27 = bVar27 | *pbVar12;
          envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),CONCAT11(bVar27,cVar6));
          pcVar36 = (char *)CONCAT31(uVar24,bVar34 + *pbVar12);
          *pbVar16 = *pbVar16 + bVar27;
        }
        uVar24 = (undefined3)((uint)pcVar36 >> 8);
        bVar9 = (byte)pcVar36 | (byte)*puVar15;
        pbVar12 = (byte *)CONCAT31(uVar24,bVar9);
        puVar33 = unaff_ESI + (uint)bVar45 * -2 + 1;
        out(*unaff_ESI,(short)puVar15);
        LOCK();
        bVar7 = *pbVar12;
        *pbVar12 = bVar9;
        UNLOCK();
        *(byte *)puVar15 = (byte)*puVar15 + (char)envId;
        piVar21 = (int *)(CONCAT31(uVar24,bVar7) + -0x1b7e07);
        *(byte *)puVar15 = (byte)*puVar15 + (char)envId;
        iVar18 = (int)envId - *(int *)pbVar16;
        bVar7 = *(byte *)((int)puVar40 + -0x7a);
        uVar31 = (undefined2)((uint)iVar18 >> 0x10);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        bVar9 = (char)((uint)iVar18 >> 8) + bVar7 | *(byte *)((int)puVar40 + 0x17);
        *(char *)piVar21 = *(char *)piVar21 + (char)piVar21;
        uVar24 = (undefined3)(CONCAT22(uVar31,CONCAT11(bVar9,(byte)iVar18)) >> 8);
        bVar7 = (byte)iVar18 | *pbVar16;
        envId = (uint *)CONCAT31(uVar24,bVar7);
        pbVar12 = (byte *)((int)piVar21 + *piVar21);
        puVar38 = puVar33;
        if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e0a;
        *(byte *)envId = (byte)*envId + bVar7;
        *(byte **)pbVar16 = (byte *)(*(int *)pbVar16 + (int)puVar15);
        piVar21 = (int *)CONCAT31(uVar24,bVar7 + 0x27);
        envId = (uint *)CONCAT22(uVar31,CONCAT11(bVar9 + *(byte *)((int)puVar40 + -0x79),bVar7));
        *(byte *)piVar21 = (char)*piVar21 + bVar7 + 0x27;
        goto code_r0x00402dff;
      }
    }
    pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(bVar37 | unaff_EBP[-0x62],cVar8));
  } while( true );
code_r0x00402dff:
  pbVar12 = (byte *)CONCAT22((short)((uint)piVar21 >> 0x10),
                             CONCAT11((byte)((uint)piVar21 >> 8) |
                                      *(byte *)((int)puVar15 + 0x2170411),(byte)piVar21));
  puVar38 = puVar33 + (uint)bVar45 * -2 + 1;
  out(*puVar33,(short)puVar15);
  *pbVar12 = (byte)piVar21;
  *(byte *)puVar15 = (byte)*puVar15 + (char)envId;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar12;
  *pbVar12 = *pbVar12 - cVar8;
  *pbVar12 = *pbVar12 + (char)pbVar12;
  bVar44 = false;
  bVar9 = (byte)((uint)envId >> 8) | bRam052b0603;
  envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),CONCAT11(bVar9,(char)envId));
  puVar33 = puVar38;
code_r0x00402e19:
  if (bVar9 == 0 || bVar44 != (char)bVar9 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cRam89280411;
  piVar21 = (int *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                            CONCAT11((byte)((uint)pbVar12 >> 8) |
                                     *(byte *)((int)puVar15 + 0x7190411),cRam89280411));
  *(char *)piVar21 = (char)*piVar21 + cRam89280411;
  cVar6 = (char)envId;
  envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                           CONCAT11((byte)((uint)envId >> 8) | (byte)*puVar15,cVar6));
  puVar33 = (uint *)((int)puVar33 + *piVar21);
  pbVar12 = (byte *)((int)piVar21 + *piVar21);
  bVar9 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  *(byte *)puVar33 = (byte)*puVar33 + cVar6;
  bVar7 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  *(char **)pbVar12 = unaff_EBP + (uint)CARRY1(bVar7,bVar9) + *(int *)pbVar12;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),*pbVar12);
  *(byte *)puVar15 = (byte)*puVar15 + cVar6;
  puVar38 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(byte)puVar15 | (byte)*puVar15);
  pbVar12 = (byte *)((int)puVar38 + -0x43);
  *pbVar12 = *pbVar12 + (char)((uint)puVar15 >> 8);
  puVar15 = puVar38;
  puVar38 = puVar40;
  uVar43 = uVar41;
code_r0x00402e42:
  uVar41 = in_SS;
  puVar40 = puVar38;
  in_SS = uVar41;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e6e;
  iVar18 = *(int *)((int)piVar21 + *piVar21);
  *(byte *)puVar15 = (byte)*puVar15 + (char)envId;
  piVar21 = (int *)(iVar18 + -0x8c6f);
  puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                             CONCAT11((byte)((uint)puVar15 >> 8) | *(byte *)((int)puVar15 + -0x3f),
                                      (char)puVar15));
  pbVar22 = (byte *)((int)piVar21 + *piVar21);
  pbVar12 = pbVar22;
  puVar40 = uStack_28;
  if (SCARRY4((int)piVar21,*piVar21)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar22 = *pbVar22 + (char)pbVar22;
  envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                           CONCAT11((byte)((uint)envId >> 8) | (byte)*puVar15,(char)envId));
  puVar38 = puVar33 + (uint)bVar45 * -2 + 1;
  out(*puVar33,(short)puVar15);
  puVar15 = (uint *)CONCAT31((int3)((uint)puVar15 >> 8),(char)puVar15 + (byte)*puVar40);
  puVar33 = puVar38 + (uint)bVar45 * -2 + 1;
  out(*puVar38,(short)puVar15);
  uVar43 = uVar41;
  in_SS = uVar42;
code_r0x00402e6e:
  uVar41 = uVar43;
  uVar24 = (undefined3)((uint)puVar15 >> 8);
  cVar6 = (char)puVar15 + (byte)*puVar40;
  puVar38 = puVar33 + (uint)bVar45 * -2 + 1;
  out(*puVar33,(short)CONCAT31(uVar24,cVar6));
  puVar15 = (uint *)CONCAT31(uVar24,cVar6 + (byte)*puVar40);
  puVar33 = puVar38 + (uint)bVar45 * -2 + 1;
  out(*puVar38,(short)puVar15);
  pbVar12 = (byte *)0x0;
  puVar38 = puVar40;
code_r0x00402e81:
  puVar40 = puVar38;
  bVar9 = (char)pbVar12 - *pbVar12;
  iVar18 = CONCAT31((int3)((uint)pbVar12 >> 8),bVar9);
  *pbVar16 = *pbVar16 + (char)puVar15;
  pbVar22 = (byte *)(iVar18 * 2);
  *pbVar22 = *pbVar22 ^ bVar9;
  pbVar22 = (byte *)(int)(short)iVar18;
  *pbVar22 = *pbVar22 + bVar9;
  *(byte *)puVar40 = (byte)*puVar40 + (byte)envId;
  bVar7 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar9;
  *(byte **)(pbVar16 + -0x73) =
       (byte *)((int)puVar33 + (uint)CARRY1(bVar7,bVar9) + *(int *)(pbVar16 + -0x73));
  *pbVar22 = *pbVar22 + bVar9;
  bVar7 = (byte)envId | (byte)*puVar15;
  envId = (uint *)CONCAT31((int3)((uint)envId >> 8),bVar7);
  puVar38 = puVar33;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar22 = *pbVar22 + bVar9;
  pbVar12 = (byte *)CONCAT31((int3)(char)((uint)pbVar12 >> 8),bVar9 + 0x2d);
  puVar33[(int)puVar40 * 2] =
       (uint)((int)puVar15 + (uint)(0xd2 < bVar9) + puVar33[(int)puVar40 * 2]);
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
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      if ((char)bVar7 < '\x01') {
        uVar13 = *puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + (byte)envId;
        *(char *)((int)pcVar36 * 2) = *(char *)((int)pcVar36 * 2) - CARRY1((byte)uVar13,(byte)envId)
        ;
        bVar44 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar22 = *pbVar22 + bVar7;
      puVar38 = puVar33;
code_r0x00402eb4:
      uVar24 = (undefined3)((uint)pbVar22 >> 8);
      bVar7 = (char)pbVar22 + 0x6f;
      pcVar36 = (char *)CONCAT31(uVar24,bVar7);
      *(char **)pcVar36 = pcStack_44;
      uVar13 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + (char)envId;
      pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
      in_DS = uVar42;
      if ((byte)*puVar15 != 0 && SCARRY1((byte)uVar13,(char)envId) == (char)(byte)*puVar15 < '\0') {
        *pcVar36 = *pcVar36 + bVar7;
        bVar9 = (char)pbVar22 + 0x9c;
        pbVar22 = (byte *)CONCAT31(uVar24,bVar9);
        puVar38[(int)puVar40 * 2] =
             (uint)((int)puVar15 + (uint)(0xd2 < bVar7) + puVar38[(int)puVar40 * 2]);
        pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
        uVar13 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar9;
        puVar33 = puVar38;
        if (CARRY1((byte)uVar13,bVar9)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      puVar33 = puVar38 + (uint)bVar45 * -2 + 1;
      out(*puVar38,(short)puVar15);
    }
    cVar6 = (char)pcVar36;
    *pcVar36 = *pcVar36 + cVar6;
    uVar24 = (undefined3)((uint)pcVar36 >> 8);
    bVar7 = cVar6 + 0x6f;
    pcVar36 = (char *)CONCAT31(uVar24,bVar7);
    *(char **)pcVar36 = pcStack_44;
    uVar13 = *puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + (byte)envId;
    pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
    *(byte *)(puVar33 + 7) = ((byte)puVar33[7] - bVar37) - CARRY1((byte)uVar13,(byte)envId);
    *pcVar36 = *pcVar36 + bVar7;
    bVar9 = cVar6 + 0x9c;
    pcVar36 = (char *)CONCAT31(uVar24,bVar9);
    puVar33[(int)puVar40 * 2] =
         (uint)((int)puVar15 + (uint)(0xd2 < bVar7) + puVar33[(int)puVar40 * 2]);
    uVar13 = *puVar33;
    *(byte *)puVar33 = (byte)*puVar33 + bVar9;
    if (!CARRY1((byte)uVar13,bVar9)) goto code_r0x00402e7e;
    *pcVar36 = *pcVar36 + bVar9;
    bVar9 = bVar9 | pcVar36[0x400001c];
    pbVar12 = (byte *)CONCAT31(uVar24,bVar9);
    in_SS = uVar42;
    if ((char)bVar9 < '\x01') goto code_r0x00402f16;
    *pbVar12 = *pbVar12 + bVar9;
    pcVar36 = (char *)CONCAT31(uVar24,bVar9 + 0x6f);
    while( true ) {
      *(char **)pcVar36 = pcStack_44;
      uVar13 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + (byte)envId;
      *(uint *)((int)puVar33 + 0x1d) =
           (*(int *)((int)puVar33 + 0x1d) - (int)puVar40) - (uint)CARRY1((byte)uVar13,(byte)envId);
      bVar7 = (byte)pcVar36;
      *pcVar36 = *pcVar36 + bVar7;
      bVar9 = bVar7 + 0x2d;
      pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),bVar9);
      puVar33[(int)puVar40 * 2] =
           (uint)((int)puVar15 + (uint)(0xd2 < bVar7) + puVar33[(int)puVar40 * 2]);
      pcStack_44 = (char *)CONCAT22((short)((uint)pcStack_44 >> 0x10),uVar42);
      uVar13 = *puVar33;
      *(byte *)puVar33 = (byte)*puVar33 + bVar9;
      if (!CARRY1((byte)uVar13,bVar9)) break;
      *pbVar12 = *pbVar12 + bVar9;
code_r0x00402f16:
      bVar7 = (byte)pbVar12 | pbVar12[0x400001d];
      puVar38 = (uint *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7);
      pcVar36 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = pcVar36;
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
        uVar24 = (undefined3)((uint)puVar38 >> 8);
        cVar6 = (char)puVar38 + 'o';
        puVar39 = (uint *)CONCAT31(uVar24,cVar6);
        *puVar39 = (uint)pcStack_44;
        cVar10 = (char)envId;
        *(byte *)puVar15 = (byte)*puVar15 + cVar10;
        pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,uVar42);
        bVar7 = (byte)((uint)puVar15 >> 8);
        bVar44 = bVar7 < (byte)*puVar33;
        puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),
                                   CONCAT11(bVar7 - (byte)*puVar33,(char)puVar15));
        if (bVar44) break;
        bVar44 = CARRY4((uint)puVar39,*puVar39);
        puVar38 = (uint *)((int)puVar39 + *puVar39);
        if (!SCARRY4((int)puVar39,*puVar39)) {
          bVar44 = CARRY4((uint)unaff_EBP,*puVar38);
          unaff_EBP = unaff_EBP + *puVar38;
        }
        *puVar38 = (*puVar38 - (int)puVar38) - (uint)bVar44;
        *(byte *)puVar15 = (byte)*puVar15 + cVar10;
        envId = (uint *)CONCAT22((short)((uint)envId >> 0x10),
                                 CONCAT11((char)((uint)envId >> 8) + (byte)*puVar15,
                                          cVar10 - (byte)*puVar15));
        *(byte *)puVar38 = (byte)*puVar38 + (char)puVar38;
code_r0x00402f3b:
        cVar10 = (char)puVar15;
        *pbVar16 = *pbVar16 + cVar10;
        bVar7 = (byte)puVar38;
        *(byte *)((int)puVar38 * 2) = *(byte *)((int)puVar38 * 2) ^ bVar7;
        *(byte *)puVar38 = (byte)*puVar38 + bVar7;
        *(byte *)puVar38 = (byte)*puVar38 + cVar10;
        uVar13 = *puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + bVar7;
        *puVar15 = (uint)((int)puVar38 + (uint)CARRY1((byte)uVar13,bVar7) + *puVar15);
        pcVar36 = (char *)((uint)puVar38 | *puVar40);
        uVar24 = (undefined3)((uint)pcVar36 >> 8);
        cVar6 = (char)pcVar36 + *pcVar36;
        pcVar36 = (char *)CONCAT31(uVar24,cVar6);
        *pcVar36 = *pcVar36 + cVar6;
        cVar6 = cVar6 + *pcVar36;
        piVar21 = (int *)CONCAT31(uVar24,cVar6);
        *(char *)piVar21 = (char)*piVar21 + cVar6;
        iVar18 = LocalDescriptorTableRegister();
        *piVar21 = iVar18;
        bVar7 = *pbVar16;
        bVar28 = (byte)((uint)envId >> 8);
        *pbVar16 = *pbVar16 + bVar28;
        iVar18 = *piVar21;
        uVar31 = (undefined2)((uint)envId >> 0x10);
        bVar27 = (byte)envId;
        *(byte *)puVar33 = (byte)*puVar33 + cVar6;
        puVar38 = puVar33 + (uint)bVar45 * -2 + 1;
        out(*puVar33,(short)puVar15);
        *(byte *)puVar38 = (byte)*puVar38 + cVar6;
        bVar9 = *pbVar16;
        *(byte *)puVar15 = (byte)*puVar15 - bVar37;
        *(byte *)puVar38 = (byte)*puVar38 + cVar6;
        puVar39 = puVar38 + (uint)bVar45 * -2 + 1;
        out(*puVar38,(short)puVar15);
        *(byte *)puVar39 = (byte)*puVar39 + cVar6;
        bVar34 = *pbVar16;
        *(uint *)((int)puVar15 + -0x23) = *(uint *)((int)puVar15 + -0x23) & (uint)puVar39;
        puVar23 = (ushort *)((int)piVar21 + *piVar21);
        if (!SCARRY4((int)piVar21,*piVar21)) {
          *puVar23 = in_DS;
        }
        *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
        uVar32 = CONCAT11((char)((uint)puVar15 >> 8) + *(byte *)((int)puVar15 + -0x15),cVar10);
        puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),uVar32);
        puVar38 = (uint *)((int)puVar23 + *(int *)puVar23);
        if (!SCARRY4((int)puVar23,*(int *)puVar23)) {
          *(ushort *)puVar38 = in_DS;
        }
        cVar6 = (char)puVar38;
        *(byte *)puVar38 = (byte)*puVar38 + cVar6;
        cVar29 = ((bVar28 - (char)iVar18) - CARRY1(bVar7,bVar28) | bVar9 | bVar34) + (byte)*puVar38;
        envId = (uint *)CONCAT22(uVar31,CONCAT11(cVar29,bVar27));
        uVar13 = *puVar15;
        *(byte *)puVar15 = (byte)*puVar15 + bVar27;
        if (CARRY1((byte)uVar13,bVar27)) {
          *(byte *)puVar38 = (byte)*puVar38 + cVar6;
          bVar7 = *(byte *)((int)puVar15 + 6);
          *(byte *)puVar15 = (byte)*puVar15 + bVar27;
          bVar9 = (cVar29 - (byte)*puVar39) + cRam14730307;
          *(byte *)puVar38 = (byte)*puVar38 + cVar6;
          bVar7 = bVar37 | bVar7 | *(byte *)((int)puVar15 + 0x2a);
          uVar13 = *puVar38;
          pbVar12 = (byte *)((int)puVar38 + (uint)CARRY1(bVar9,(byte)*puVar38) + *puVar38);
          *(byte *)puVar15 = (byte)*puVar15 + bVar27;
          cVar6 = cVar8 - (byte)*puVar39;
          cVar8 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar7,cVar8)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar12 = *pbVar12 + (char)pbVar12;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          bVar7 = (char)pbVar12 + 0x2aU & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x1f);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x20);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x21);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x22);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          bVar9 = bVar9 + (byte)uVar13 + *pcVar36;
          uVar25 = CONCAT22(uVar31,CONCAT11(bVar9,bVar27));
          cVar8 = cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar8,cVar6)) + 0x25);
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
          pcVar11 = (char *)CONCAT22(uVar30,CONCAT11(cVar8 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar8,cVar6)) + 0x26),cVar6));
          *pcVar36 = *pcVar36 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar36 = (char *)CONCAT31(uVar24,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar36 = *pcVar36 + cVar6;
            pbVar12 = (byte *)(CONCAT31(uVar24,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar12;
            bVar34 = (byte)pbVar12;
            *pbVar12 = *pbVar12 + bVar34;
            uVar24 = (undefined3)((uint)pbVar12 >> 8);
            if (!CARRY1(bVar7,bVar34)) {
              if (!SCARRY1(bVar34,'\0')) {
                *pbVar12 = *pbVar12 + bVar34;
                uVar25 = CONCAT22(uVar31,CONCAT11(bVar9 | (byte)*puVar15,bVar27));
                bVar34 = bVar34 & (byte)*puVar15;
                *(char *)CONCAT31(uVar24,bVar34) = *(char *)CONCAT31(uVar24,bVar34) + bVar34;
                pcVar36 = (char *)CONCAT31(uVar24,bVar34 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar36 = (char *)CONCAT31(uVar24,bVar34 + *pcVar11);
              if (SCARRY1(bVar34,*pcVar11) != (char)(bVar34 + *pcVar11) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar34 + *pcVar11;
            pbVar12 = (byte *)CONCAT31(uVar24,bVar7);
            if (SCARRY1(bVar34,*pcVar11) == (char)bVar7 < '\0') {
              pcVar36 = (char *)CONCAT22(uVar31,CONCAT11(bVar9 | (byte)*puVar15,bVar27));
              *pcVar11 = *pcVar11 + cVar10;
              *(byte *)puVar15 = (byte)*puVar15 ^ bVar7;
              *(char *)((int)pbVar12 * 2) = *(char *)((int)pbVar12 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar36 = *pcVar36 + (char)pcVar36;
            uVar24 = (undefined3)((uint)pcVar36 >> 8);
            bVar7 = (char)pcVar36 + 0x2aU & (byte)*puVar15;
            *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
            pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x2a);
            *pcVar36 = *pcVar36 + bVar7 + 0x2a;
            pcVar36 = (char *)CONCAT31(uVar24,bVar7 + 0x54 & (byte)*puVar15);
code_r0x00403072:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            uVar24 = (undefined3)((uint)pcVar36 >> 8);
            pcVar36 = (char *)CONCAT31(uVar24,cVar6 + '*');
            *pcVar36 = *pcVar36 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & (byte)*puVar15;
            *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
            pcStack_7c = (char *)CONCAT22(pcStack_7c._2_2_,uVar41);
            uVar25 = CONCAT22((short)((uint)uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar25 >> 8) +
                                       *(char *)CONCAT31(uVar24,bVar7 + 0x2a),(char)uVar25));
            *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar10;
            pcVar36 = pcStack_7c;
code_r0x0040309a:
            cVar6 = (char)pcVar36;
            *pcVar36 = *pcVar36 + cVar6;
            pcStack_7c = (char *)CONCAT22(pcStack_7c._2_2_,uVar42);
            *pcVar36 = *pcVar36 + cVar6;
            pbVar12 = (byte *)CONCAT31((int3)((uint)pcVar36 >> 8),cVar6 + 0x2aU & (byte)*puVar15);
          }
          cVar6 = (char)pbVar12;
          *pbVar12 = *pbVar12 + cVar6;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          cVar8 = cVar6 + '*';
          pcVar36 = (char *)CONCAT31(uVar24,cVar8);
          *(byte *)(puVar39 + 0x828000) = (byte)puVar39[0x828000] - cVar10;
          *pcVar36 = *pcVar36 + cVar8;
          cVar29 = (char)pcStack_7c - (byte)*puVar39;
          pcVar11 = (char *)CONCAT22((short)((uint)pcStack_7c >> 0x10),
                                     CONCAT11((char)((uint)pcStack_7c >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_7c >> 8),
                                                                 cVar29) + 0x34),cVar29));
          *pcVar36 = *pcVar36 + cVar8;
          bVar7 = cVar6 + 0x54U & (byte)*puVar15;
          *(char *)CONCAT31(uVar24,bVar7) = *(char *)CONCAT31(uVar24,bVar7) + bVar7;
          pbVar12 = (byte *)CONCAT31(uVar24,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar25 >> 8);
          pcVar36 = (char *)CONCAT22((short)((uint)uVar25 >> 0x10),
                                     CONCAT11(bVar7 + *pbVar12,(char)uVar25));
          pbVar12 = pbVar12 + (uint)CARRY1(bVar7,*pbVar12) + *(int *)pbVar12;
          *(byte *)puVar15 = (byte)*puVar15 + (char)uVar25;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          cVar6 = (byte)pbVar12 - *pbVar12;
          piVar21 = (int *)CONCAT31(uVar24,cVar6);
          puVar39 = (uint *)((int)puVar39 + (uint)((byte)pbVar12 < *pbVar12) + *piVar21);
          cVar6 = cVar6 + (char)*piVar21;
          pbVar12 = (byte *)CONCAT31(uVar24,cVar6);
          *pbVar12 = *pbVar12 + cVar6;
code_r0x004030df:
          *pcVar36 = *pcVar36 + cVar10;
          bVar7 = *pbVar12;
          bVar9 = (byte)pbVar12;
          *pbVar12 = *pbVar12 + bVar9;
          *(byte **)(pcVar11 + -0x41) =
               (byte *)((int)puVar39 + (uint)CARRY1(bVar7,bVar9) + *(int *)(pcVar11 + -0x41));
          *pbVar12 = *pbVar12 + bVar9;
          uVar24 = (undefined3)((uint)pbVar12 >> 8);
          bVar9 = bVar9 | (byte)*puVar39;
          *(char *)CONCAT31(uVar24,bVar9) = *(char *)CONCAT31(uVar24,bVar9) + bVar9;
          pcVar36 = (char *)CONCAT31(uVar24,bVar9 + 0x7b);
          *pcVar36 = *pcVar36 + bVar9 + 0x7b;
          pbVar12 = (byte *)((int)puVar39 + CONCAT31(uVar24,bVar9 - 8) + -1);
          *pbVar12 = *pbVar12 + (bVar9 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar33 = puVar39 + (uint)bVar45 * -2 + 1;
        out(*puVar39,uVar32);
        pcVar36 = unaff_EBP + 1;
        pcStack_44 = unaff_EBP;
      }
      bVar7 = cVar6 - bVar44;
      pbVar12 = (byte *)((int)puVar33 + (int)puVar40 * 2);
      bVar44 = CARRY1(*pbVar12,bVar7);
      *pbVar12 = *pbVar12 + bVar7;
code_r0x00402ef9:
      pcVar36 = (char *)CONCAT31(uVar24,bVar7 - bVar44);
      pbVar12 = (byte *)((int)puVar40 + (int)unaff_EBP * 2);
      *pbVar12 = *pbVar12 + (bVar7 - bVar44);
    }
  } while( true );
code_r0x00402e36:
  *(byte *)envId = (byte)*envId + (char)puVar15;
  puVar38 = puVar15 + 0x2828000;
  bVar7 = (byte)envId;
  bVar44 = (byte)*puVar38 < bVar7;
  *(byte *)puVar38 = (byte)*puVar38 - bVar7;
  bVar7 = (byte)pbVar12 + *pbVar12;
  piVar21 = (int *)CONCAT31((int3)((uint)pbVar12 >> 8),bVar7 + bVar44);
  puVar38 = puVar40;
  uVar43 = uVar41;
  if (CARRY1((byte)pbVar12,*pbVar12) || CARRY1(bVar7,bVar44)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar36 = *pcVar36 + bVar9;
  uVar43 = uVar41;
  in_SS = uVar42;
  goto code_r0x00402e6e;
}


