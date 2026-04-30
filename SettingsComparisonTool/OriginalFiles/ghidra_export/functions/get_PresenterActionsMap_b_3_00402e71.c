/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402e71
 * Raw Name    : <get_PresenterActionsMap>b__3
 * Demangled   : <get_PresenterActionsMap>b__3
 * Prototype   : void <get_PresenterActionsMap>b__3(char * uPresenter, byte * param_2)
 * Local Vars  : param_2, pcStack_4c, uStack_14, puStack_8, uVar1, bVar2, bVar3, cVar4, bVar5, piVar6, pbVar7, iVar8, pbVar9, puVar10, uPresenter, puVar11, pcVar12, piVar13, uVar14, uVar15, bVar16, cVar17, bVar18, uVar19, bVar20, cVar21, uVar22, cVar23, pbVar24, unaff_EBX, pcVar25, unaff_EBP, unaff_ESI, pbVar26, unaff_EDI, in_ES, in_SS, in_DS, bVar27
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall <get_PresenterActionsMap>b__3(char *uPresenter,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar15;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar9;
  undefined3 uVar14;
  uint *puVar11;
  char *pcVar12;
  int *piVar13;
  byte bVar16;
  char cVar17;
  byte bVar18;
  byte bVar20;
  undefined2 uVar22;
  char cVar21;
  undefined4 uVar19;
  char cVar23;
  byte *pbVar24;
  byte *unaff_EBX;
  char *pcVar25;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar26;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar27;
  char *pcStack_4c;
  uint uStack_14;
  uint *puStack_8;
  int iVar8;
  uint *puVar10;
  
code_r0x00402e71:
  do {
                    /* .NET CLR Managed Code */
    uVar14 = (undefined3)((uint)param_2 >> 8);
    cVar23 = (char)param_2 + (char)*unaff_EDI;
    pbVar7 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)CONCAT31(uVar14,cVar23));
    pbVar24 = (byte *)CONCAT31(uVar14,cVar23 + (char)*unaff_EDI);
    unaff_ESI = unaff_ESI + 8;
    out(*(undefined4 *)pbVar7,(short)pbVar24);
    pbVar7 = (byte *)0x0;
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_ES);
    do {
      bVar2 = (char)pbVar7 - *pbVar7;
      iVar8 = CONCAT31((int3)((uint)pbVar7 >> 8),bVar2);
      *unaff_EBX = *unaff_EBX + (char)pbVar24;
      pbVar9 = (byte *)(iVar8 * 2);
      *pbVar9 = *pbVar9 ^ bVar2;
      pbVar9 = (byte *)(int)(short)iVar8;
      *pbVar9 = *pbVar9 + bVar2;
      *(byte *)unaff_EDI = (char)*unaff_EDI + (byte)uPresenter;
      bVar16 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar2;
      *(byte **)(unaff_EBX + -0x73) =
           unaff_ESI + (uint)CARRY1(bVar16,bVar2) + *(int *)(unaff_EBX + -0x73);
      *pbVar9 = *pbVar9 + bVar2;
      bVar16 = (byte)uPresenter | *pbVar24;
      uPresenter = (char *)CONCAT31((int3)((uint)uPresenter >> 8),bVar16);
      cVar23 = (char)unaff_EBX;
      bVar5 = (byte)((uint)unaff_EBX >> 8);
      if ((char)bVar16 < '\x01') goto code_r0x00402eb4;
      *pbVar9 = *pbVar9 + bVar2;
      pbVar7 = (byte *)CONCAT31((int3)(char)((uint)pbVar7 >> 8),bVar2 + 0x2d);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           pbVar24 + (uint)(0xd2 < bVar2) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
      pbVar9 = unaff_ESI;
      while( true ) {
        bVar16 = *pbVar9;
        bVar2 = (byte)pbVar7;
        *pbVar9 = *pbVar9 + bVar2;
        unaff_ESI = pbVar9;
        if (!CARRY1(bVar16,bVar2)) break;
        *pbVar7 = *pbVar7 + bVar2;
        bVar2 = bVar2 | pbVar7[0x400001a];
        pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar2);
        if ((char)bVar2 < '\x01') {
code_r0x00402ecc:
          *pbVar7 = *pbVar7 + (byte)pbVar7;
          uVar14 = (undefined3)((uint)pbVar7 >> 8);
          bVar16 = (byte)pbVar7 | pbVar7[0x400001b];
          puVar11 = (uint *)CONCAT31(uVar14,bVar16);
          if ((char)bVar16 < '\x01') {
            bVar2 = *pbVar24;
            *pbVar24 = *pbVar24 + (byte)uPresenter;
            *(char *)((int)puVar11 * 2) =
                 *(char *)((int)puVar11 * 2) - CARRY1(bVar2,(byte)uPresenter);
            bVar27 = 0x81 < bVar16;
            bVar16 = bVar16 + 0x7e;
            goto code_r0x00402ef9;
          }
        }
        else {
          *pbVar7 = *pbVar7 + bVar2;
          pbVar9 = pbVar7;
code_r0x00402eb4:
          uVar14 = (undefined3)((uint)pbVar9 >> 8);
          bVar2 = (char)pbVar9 + 0x6f;
          puVar11 = (uint *)CONCAT31(uVar14,bVar2);
          *puVar11 = uStack_14;
          bVar16 = *pbVar24;
          *pbVar24 = *pbVar24 + (char)uPresenter;
          uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
          in_SS = in_ES;
          if (*pbVar24 != 0 && SCARRY1(bVar16,(char)uPresenter) == (char)*pbVar24 < '\0') {
            *(byte *)puVar11 = (char)*puVar11 + bVar2;
            bVar3 = (char)pbVar9 + 0x9c;
            pbVar7 = (byte *)CONCAT31(uVar14,bVar3);
            *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
                 pbVar24 + (uint)(0xd2 < bVar2) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
            uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
            bVar16 = *unaff_ESI;
            *unaff_ESI = *unaff_ESI + bVar3;
            pbVar9 = unaff_ESI;
            puVar11 = unaff_EDI;
            if (CARRY1(bVar16,bVar3)) goto code_r0x00402ecc;
            goto code_r0x00402e5a;
          }
          pbVar9 = unaff_ESI + 4;
          out(*(undefined4 *)unaff_ESI,(short)pbVar24);
        }
        cVar4 = (char)puVar11;
        *(char *)puVar11 = (char)*puVar11 + cVar4;
        uVar14 = (undefined3)((uint)puVar11 >> 8);
        bVar2 = cVar4 + 0x6f;
        puVar11 = (uint *)CONCAT31(uVar14,bVar2);
        *puVar11 = uStack_14;
        bVar16 = *pbVar24;
        *pbVar24 = *pbVar24 + (byte)uPresenter;
        uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
        pbVar9[0x1c] = (pbVar9[0x1c] - bVar5) - CARRY1(bVar16,(byte)uPresenter);
        *(byte *)puVar11 = (char)*puVar11 + bVar2;
        bVar3 = cVar4 + 0x9c;
        pcVar12 = (char *)CONCAT31(uVar14,bVar3);
        *(byte **)(pbVar9 + (int)unaff_EDI * 8) =
             pbVar24 + (uint)(0xd2 < bVar2) + *(int *)(pbVar9 + (int)unaff_EDI * 8);
        bVar16 = *pbVar9;
        *pbVar9 = *pbVar9 + bVar3;
        if (!CARRY1(bVar16,bVar3)) {
          *pcVar12 = *pcVar12 + bVar3;
          param_2 = pbVar24;
          unaff_ESI = pbVar9;
          goto code_r0x00402e71;
        }
        *pcVar12 = *pcVar12 + bVar3;
        bVar3 = bVar3 | pcVar12[0x400001c];
        pbVar7 = (byte *)CONCAT31(uVar14,bVar3);
        if ((char)bVar3 < '\x01') goto code_r0x00402f16;
        *pbVar7 = *pbVar7 + bVar3;
        puVar11 = (uint *)CONCAT31(uVar14,bVar3 + 0x6f);
        while( true ) {
          *puVar11 = uStack_14;
          bVar16 = *pbVar24;
          *pbVar24 = *pbVar24 + (byte)uPresenter;
          *(uint *)(pbVar9 + 0x1d) =
               (*(int *)(pbVar9 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar16,(byte)uPresenter);
          bVar16 = (byte)puVar11;
          *(byte *)puVar11 = (char)*puVar11 + bVar16;
          bVar2 = bVar16 + 0x2d;
          pbVar7 = (byte *)CONCAT31((int3)((uint)puVar11 >> 8),bVar2);
          *(byte **)(pbVar9 + (int)unaff_EDI * 8) =
               pbVar24 + (uint)(0xd2 < bVar16) + *(int *)(pbVar9 + (int)unaff_EDI * 8);
          uStack_14 = CONCAT22((short)(uStack_14 >> 0x10),in_ES);
          bVar16 = *pbVar9;
          *pbVar9 = *pbVar9 + bVar2;
          if (!CARRY1(bVar16,bVar2)) break;
          *pbVar7 = *pbVar7 + bVar2;
code_r0x00402f16:
          bVar16 = (byte)pbVar7 | pbVar7[0x400001d];
          puVar11 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar16);
          uVar1 = unaff_EBP;
          if ((char)bVar16 < '\x01') goto code_r0x00402f3b;
          while( true ) {
            unaff_EBP = uVar1;
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
            uVar14 = (undefined3)((uint)puVar11 >> 8);
            cVar4 = (char)puVar11 + 'o';
            puVar10 = (uint *)CONCAT31(uVar14,cVar4);
            *puVar10 = uStack_14;
            cVar17 = (char)uPresenter;
            *pbVar24 = *pbVar24 + cVar17;
            uStack_14 = CONCAT22(uStack_14._2_2_,in_ES);
            bVar16 = (byte)((uint)pbVar24 >> 8);
            pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),
                                       CONCAT11(bVar16 - *pbVar9,(char)pbVar24));
            if (bVar16 < *pbVar9) break;
            bVar27 = CARRY4((uint)puVar10,*puVar10);
            puVar11 = (uint *)((int)puVar10 + *puVar10);
            if (!SCARRY4((int)puVar10,*puVar10)) {
              bVar27 = CARRY4(unaff_EBP,*puVar11);
              unaff_EBP = unaff_EBP + *puVar11;
            }
            *puVar11 = (*puVar11 - (int)puVar11) - (uint)bVar27;
            *pbVar24 = *pbVar24 + cVar17;
            uPresenter = (char *)CONCAT22((short)((uint)uPresenter >> 0x10),
                                          CONCAT11((char)((uint)uPresenter >> 8) + *pbVar24,
                                                   cVar17 - *pbVar24));
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
code_r0x00402f3b:
            cVar17 = (char)pbVar24;
            *unaff_EBX = *unaff_EBX + cVar17;
            bVar16 = (byte)puVar11;
            *(byte *)((int)puVar11 * 2) = *(byte *)((int)puVar11 * 2) ^ bVar16;
            *(byte *)puVar11 = (byte)*puVar11 + bVar16;
            *(byte *)puVar11 = (byte)*puVar11 + cVar17;
            uVar1 = *puVar11;
            *(byte *)puVar11 = (byte)*puVar11 + bVar16;
            *(byte **)pbVar24 =
                 (byte *)((int)puVar11 + (uint)CARRY1((byte)uVar1,bVar16) + *(int *)pbVar24);
            pcVar12 = (char *)((uint)puVar11 | *unaff_EDI);
            uVar14 = (undefined3)((uint)pcVar12 >> 8);
            cVar4 = (char)pcVar12 + *pcVar12;
            pcVar12 = (char *)CONCAT31(uVar14,cVar4);
            *pcVar12 = *pcVar12 + cVar4;
            cVar4 = cVar4 + *pcVar12;
            piVar6 = (int *)CONCAT31(uVar14,cVar4);
            *(char *)piVar6 = (char)*piVar6 + cVar4;
            iVar8 = LocalDescriptorTableRegister();
            *piVar6 = iVar8;
            bVar16 = *unaff_EBX;
            bVar20 = (byte)((uint)uPresenter >> 8);
            *unaff_EBX = *unaff_EBX + bVar20;
            iVar8 = *piVar6;
            uVar15 = (undefined2)((uint)uPresenter >> 0x10);
            bVar18 = (byte)uPresenter;
            *pbVar9 = *pbVar9 + cVar4;
            pbVar7 = pbVar9 + 4;
            out(*(undefined4 *)pbVar9,(short)pbVar24);
            *pbVar7 = *pbVar7 + cVar4;
            bVar2 = *unaff_EBX;
            *pbVar24 = *pbVar24 - bVar5;
            *pbVar7 = *pbVar7 + cVar4;
            pbVar26 = pbVar9 + 8;
            out(*(undefined4 *)pbVar7,(short)pbVar24);
            *pbVar26 = *pbVar26 + cVar4;
            bVar3 = *unaff_EBX;
            *(uint *)(pbVar24 + -0x23) = *(uint *)(pbVar24 + -0x23) & (uint)pbVar26;
            piVar13 = (int *)((int)piVar6 + *piVar6);
            if (!SCARRY4((int)piVar6,*piVar6)) {
              *(undefined2 *)piVar13 = in_SS;
            }
            *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
            uVar22 = CONCAT11((char)((uint)pbVar24 >> 8) + pbVar24[-0x15],cVar17);
            pbVar24 = (byte *)CONCAT22((short)((uint)pbVar24 >> 0x10),uVar22);
            puVar11 = (uint *)((int)piVar13 + *piVar13);
            if (!SCARRY4((int)piVar13,*piVar13)) {
              *(undefined2 *)puVar11 = in_SS;
            }
            cVar4 = (char)puVar11;
            *(byte *)puVar11 = (byte)*puVar11 + cVar4;
            cVar21 = ((bVar20 - (char)iVar8) - CARRY1(bVar16,bVar20) | bVar2 | bVar3) +
                     (byte)*puVar11;
            uPresenter = (char *)CONCAT22(uVar15,CONCAT11(cVar21,bVar18));
            bVar16 = *pbVar24;
            *pbVar24 = *pbVar24 + bVar18;
            if (CARRY1(bVar16,bVar18)) {
              *(byte *)puVar11 = (byte)*puVar11 + cVar4;
              bVar16 = pbVar24[6];
              uVar22 = (undefined2)((uint)unaff_EBX >> 0x10);
              *pbVar24 = *pbVar24 + bVar18;
              bVar2 = (cVar21 - *pbVar26) + cRam14730307;
              *(byte *)puVar11 = (byte)*puVar11 + cVar4;
              bVar16 = bVar5 | bVar16 | pbVar24[0x2a];
              uVar1 = *puVar11;
              pbVar7 = (byte *)((int)puVar11 + (uint)CARRY1(bVar2,(byte)*puVar11) + *puVar11);
              *pbVar24 = *pbVar24 + bVar18;
              cVar4 = cVar23 - *pbVar26;
              cVar23 = bVar16 + *(char *)(CONCAT31((int3)(CONCAT22(uVar22,CONCAT11(bVar16,cVar23))
                                                         >> 8),cVar4) + 0x1e);
              *pbVar7 = *pbVar7 + (char)pbVar7;
              uVar14 = (undefined3)((uint)pbVar7 >> 8);
              bVar16 = (char)pbVar7 + 0x2aU & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar23 = cVar23 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar23,cVar4)) + 0x1f);
              *pcVar12 = *pcVar12 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar23 = cVar23 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar23,cVar4)) + 0x20);
              *pcVar12 = *pcVar12 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar23 = cVar23 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar23,cVar4)) + 0x21);
              *pcVar12 = *pcVar12 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar23 = cVar23 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar23,cVar4)) + 0x22);
              *pcVar12 = *pcVar12 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              bVar2 = bVar2 + (byte)uVar1 + *pcVar12;
              uVar19 = CONCAT22(uVar15,CONCAT11(bVar2,bVar18));
              cVar23 = cVar23 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar23,cVar4)) + 0x25);
              *pcVar12 = *pcVar12 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              pcVar25 = (char *)CONCAT22(uVar22,CONCAT11(cVar23 + *(char *)(CONCAT22(uVar22,CONCAT11
                                                  (cVar23,cVar4)) + 0x26),cVar4));
              *pcVar12 = *pcVar12 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              cVar23 = bVar16 + 0x2a;
              pcVar12 = (char *)CONCAT31(uVar14,cVar23);
              if ((POPCOUNT(cVar23) & 1U) == 0) {
                *pcVar12 = *pcVar12 + cVar23;
                pbVar7 = (byte *)(CONCAT31(uVar14,bVar16 + 0x4f) + -0x33282610);
                bVar16 = *pbVar7;
                bVar5 = (byte)pbVar7;
                *pbVar7 = *pbVar7 + bVar5;
                uVar14 = (undefined3)((uint)pbVar7 >> 8);
                if (!CARRY1(bVar16,bVar5)) {
                  if (!SCARRY1(bVar5,'\0')) {
                    *pbVar7 = *pbVar7 + bVar5;
                    uVar19 = CONCAT22(uVar15,CONCAT11(bVar2 | *pbVar24,bVar18));
                    bVar5 = bVar5 & *pbVar24;
                    *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
                    pcVar12 = (char *)CONCAT31(uVar14,bVar5 + 0x2a);
                    goto code_r0x00403058;
                  }
                  pcVar12 = (char *)CONCAT31(uVar14,bVar5 + *pcVar25);
                  if (SCARRY1(bVar5,*pcVar25) != (char)(bVar5 + *pcVar25) < '\0')
                  goto code_r0x00403072;
                  goto code_r0x0040309a;
                }
                bVar16 = bVar5 + *pcVar25;
                pbVar7 = (byte *)CONCAT31(uVar14,bVar16);
                if (SCARRY1(bVar5,*pcVar25) == (char)bVar16 < '\0') {
                  pcVar12 = (char *)CONCAT22(uVar15,CONCAT11(bVar2 | *pbVar24,bVar18));
                  *pcVar25 = *pcVar25 + cVar17;
                  *pbVar24 = *pbVar24 ^ bVar16;
                  *(char *)((int)pbVar7 * 2) = *(char *)((int)pbVar7 * 2) + bVar16;
                  goto code_r0x004030df;
                }
              }
              else {
code_r0x00403058:
                *pcVar12 = *pcVar12 + (char)pcVar12;
                uVar14 = (undefined3)((uint)pcVar12 >> 8);
                bVar16 = (char)pcVar12 + 0x2aU & *pbVar24;
                *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
                pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
                *pcVar12 = *pcVar12 + bVar16 + 0x2a;
                pcVar12 = (char *)CONCAT31(uVar14,bVar16 + 0x54 & *pbVar24);
code_r0x00403072:
                cVar23 = (char)pcVar12;
                *pcVar12 = *pcVar12 + cVar23;
                uVar14 = (undefined3)((uint)pcVar12 >> 8);
                pcVar12 = (char *)CONCAT31(uVar14,cVar23 + '*');
                *pcVar12 = *pcVar12 + cVar23 + '*';
                bVar16 = cVar23 + 0x54U & *pbVar24;
                *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
                pcStack_4c = (char *)CONCAT22(pcStack_4c._2_2_,in_DS);
                uVar19 = CONCAT22((short)((uint)uVar19 >> 0x10),
                                  CONCAT11((char)((uint)uVar19 >> 8) +
                                           *(char *)CONCAT31(uVar14,bVar16 + 0x2a),(char)uVar19));
                pbVar9[0x20a0008] = pbVar9[0x20a0008] - cVar17;
                pcVar12 = pcStack_4c;
code_r0x0040309a:
                cVar23 = (char)pcVar12;
                *pcVar12 = *pcVar12 + cVar23;
                pcStack_4c = (char *)CONCAT22(pcStack_4c._2_2_,in_ES);
                *pcVar12 = *pcVar12 + cVar23;
                pbVar7 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar23 + 0x2aU & *pbVar24);
              }
              cVar23 = (char)pbVar7;
              *pbVar7 = *pbVar7 + cVar23;
              uVar14 = (undefined3)((uint)pbVar7 >> 8);
              cVar4 = cVar23 + '*';
              pcVar12 = (char *)CONCAT31(uVar14,cVar4);
              pbVar9[0x20a0008] = pbVar9[0x20a0008] - cVar17;
              *pcVar12 = *pcVar12 + cVar4;
              cVar21 = (char)pcStack_4c - *pbVar26;
              pcVar25 = (char *)CONCAT22((short)((uint)pcStack_4c >> 0x10),
                                         CONCAT11((char)((uint)pcStack_4c >> 8) +
                                                  *(char *)(CONCAT31((int3)((uint)pcStack_4c >> 8),
                                                                     cVar21) + 0x34),cVar21));
              *pcVar12 = *pcVar12 + cVar4;
              bVar16 = cVar23 + 0x54U & *pbVar24;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pbVar7 = (byte *)CONCAT31(uVar14,bVar16 + 0x2a);
              bVar16 = (byte)((uint)uVar19 >> 8);
              pcVar12 = (char *)CONCAT22((short)((uint)uVar19 >> 0x10),
                                         CONCAT11(bVar16 + *pbVar7,(char)uVar19));
              pbVar7 = pbVar7 + (uint)CARRY1(bVar16,*pbVar7) + *(int *)pbVar7;
              *pbVar24 = *pbVar24 + (char)uVar19;
              uVar14 = (undefined3)((uint)pbVar7 >> 8);
              cVar23 = (byte)pbVar7 - *pbVar7;
              piVar6 = (int *)CONCAT31(uVar14,cVar23);
              pbVar26 = pbVar26 + (uint)((byte)pbVar7 < *pbVar7) + *piVar6;
              cVar23 = cVar23 + (char)*piVar6;
              pbVar7 = (byte *)CONCAT31(uVar14,cVar23);
              *pbVar7 = *pbVar7 + cVar23;
code_r0x004030df:
              *pcVar12 = *pcVar12 + cVar17;
              bVar16 = *pbVar7;
              bVar2 = (byte)pbVar7;
              *pbVar7 = *pbVar7 + bVar2;
              *(byte **)(pcVar25 + -0x41) =
                   pbVar26 + (uint)CARRY1(bVar16,bVar2) + *(int *)(pcVar25 + -0x41);
              *pbVar7 = *pbVar7 + bVar2;
              uVar14 = (undefined3)((uint)pbVar7 >> 8);
              bVar2 = bVar2 | *pbVar26;
              *(char *)CONCAT31(uVar14,bVar2) = *(char *)CONCAT31(uVar14,bVar2) + bVar2;
              pcVar12 = (char *)CONCAT31(uVar14,bVar2 + 0x7b);
              *pcVar12 = *pcVar12 + bVar2 + 0x7b;
              pbVar26[CONCAT31(uVar14,bVar2 - 8) + -1] =
                   pbVar26[CONCAT31(uVar14,bVar2 - 8) + -1] + (bVar2 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            pbVar9 = pbVar9 + 0xc;
            out(*(undefined4 *)pbVar26,uVar22);
            uVar1 = unaff_EBP + 1;
            uStack_14 = unaff_EBP;
          }
          bVar16 = cVar4 - (bVar16 < *pbVar9);
          pbVar7 = pbVar9 + (int)unaff_EDI * 2;
          bVar27 = CARRY1(*pbVar7,bVar16);
          *pbVar7 = *pbVar7 + bVar16;
code_r0x00402ef9:
          puVar11 = (uint *)CONCAT31(uVar14,bVar16 - bVar27);
          pcVar12 = (char *)((int)unaff_EDI + unaff_EBP * 2);
          *pcVar12 = *pcVar12 + (bVar16 - bVar27);
        }
      }
      do {
        *uPresenter = *uPresenter + (byte)pbVar24;
        pbVar9 = pbVar24 + 0xa0a0000;
        bVar16 = *pbVar9;
        bVar3 = (byte)uPresenter;
        *pbVar9 = *pbVar9 - bVar3;
        bVar2 = (byte)pbVar7 + *pbVar7;
        bVar5 = bVar2 + (bVar16 < bVar3);
        piVar6 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar5);
        param_2 = pbVar24;
        if (!CARRY1((byte)pbVar7,*pbVar7) && !CARRY1(bVar2,bVar16 < bVar3)) goto code_r0x00402e42;
        uVar15 = (undefined2)((uint)pbVar7 >> 0x10);
        bVar16 = (byte)((uint)pbVar7 >> 8) | pbVar24[0x2170411];
        pbVar7 = (byte *)CONCAT22(uVar15,CONCAT11(bVar16,bVar5));
        pbVar9 = unaff_ESI + 4;
        out(*(undefined4 *)unaff_ESI,(short)pbVar24);
        *pbVar7 = bVar5;
        *pbVar24 = *pbVar24 + bVar3;
        bRam06180411 = bVar5;
        *pbVar7 = *pbVar7 - cVar23;
        *pbVar7 = *pbVar7 + bVar5;
        uVar22 = (undefined2)((uint)uPresenter >> 0x10);
        bVar2 = (byte)((uint)uPresenter >> 8) | bRam052b0603;
        uPresenter = (char *)CONCAT22(uVar22,CONCAT11(bVar2,bVar3));
        unaff_ESI = pbVar9;
      } while ((char)bVar2 < '\x01');
      *pbVar7 = *pbVar7 + bVar5;
      piVar6 = (int *)CONCAT22(uVar15,CONCAT11(bVar16 | pbVar24[0x7190411],bVar5));
      bRam89280411 = bVar5;
      *(byte *)piVar6 = (char)*piVar6 + bVar5;
      uPresenter = (char *)CONCAT22(uVar22,CONCAT11(bVar2 | *pbVar24,bVar3));
      unaff_ESI = pbVar9 + *piVar6;
      pbVar7 = (byte *)((int)piVar6 + *piVar6);
      bVar2 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar2;
      *unaff_ESI = *unaff_ESI + bVar3;
      bVar16 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar2;
      *(uint *)pbVar7 = *(int *)pbVar7 + unaff_EBP + (uint)CARRY1(bVar16,bVar2);
      piVar6 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),*pbVar7);
      *pbVar24 = *pbVar24 + bVar3;
      param_2 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(byte)pbVar24 | *pbVar24);
      param_2[-0x43] = param_2[-0x43] + (char)((uint)pbVar24 >> 8);
code_r0x00402e42:
      if (SCARRY4((int)piVar6,*piVar6)) goto code_r0x00402e71;
      iVar8 = *(int *)((int)piVar6 + *piVar6);
      *param_2 = *param_2 + (char)uPresenter;
      piVar6 = (int *)(iVar8 + -0x8c6f);
      pbVar24 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | param_2[-0x3f],(char)param_2)
                                );
      pbVar7 = (byte *)((int)piVar6 + *piVar6);
      puVar11 = puStack_8;
      in_DS = (undefined2)uStack_14;
    } while (SCARRY4((int)piVar6,*piVar6));
code_r0x00402e5a:
    *pbVar7 = *pbVar7 + (char)pbVar7;
    uPresenter = (char *)CONCAT22((short)((uint)uPresenter >> 0x10),
                                  CONCAT11((byte)((uint)uPresenter >> 8) | *pbVar24,(char)uPresenter
                                          ));
    pbVar7 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)pbVar24);
    param_2 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),(char)pbVar24 + (char)*puVar11);
    unaff_ESI = unaff_ESI + 8;
    out(*(undefined4 *)pbVar7,(short)param_2);
    unaff_EDI = puVar11;
  } while( true );
}


