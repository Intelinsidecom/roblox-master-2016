/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402e7a
 * Raw Name    : <get_PresenterActionsMap>b__4
 * Demangled   : <get_PresenterActionsMap>b__4
 * Prototype   : void <get_PresenterActionsMap>b__4(char * jPresenter, byte * param_2)
 * Local Vars  : param_2, pcStack_48, uStack_10, puStack_4, uVar1, bVar2, bVar3, cVar4, bVar5, piVar6, pbVar7, iVar8, pbVar9, puVar10, puVar11, jPresenter, pcVar12, piVar13, pbVar14, uVar15, uVar16, bVar17, cVar18, bVar19, uVar20, bVar21, cVar22, uVar23, unaff_EBX, pcVar24, cVar25, unaff_EBP, unaff_ESI, unaff_EDI, in_ES, in_SS, in_DS, bVar26
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall <get_PresenterActionsMap>b__4(char *jPresenter,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar16;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar9;
  undefined3 uVar15;
  uint *puVar11;
  char *pcVar12;
  int *piVar13;
  byte *pbVar14;
  byte bVar17;
  char cVar18;
  byte bVar19;
  byte bVar21;
  undefined2 uVar23;
  char cVar22;
  undefined4 uVar20;
  char cVar25;
  byte *unaff_EBX;
  char *pcVar24;
  uint unaff_EBP;
  byte *unaff_ESI;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar26;
  char *pcStack_48;
  uint uStack_10;
  uint *puStack_4;
  int iVar8;
  uint *puVar10;
  
code_r0x00402e7a:
  do {
                    /* .NET CLR Managed Code */
    param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*unaff_EDI);
    pbVar14 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    pbVar7 = (byte *)0x0;
    puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
    do {
      bVar2 = (char)pbVar7 - *pbVar7;
      iVar8 = CONCAT31((int3)((uint)pbVar7 >> 8),bVar2);
      *unaff_EBX = *unaff_EBX + (char)param_2;
      pbVar9 = (byte *)(iVar8 * 2);
      *pbVar9 = *pbVar9 ^ bVar2;
      pbVar9 = (byte *)(int)(short)iVar8;
      *pbVar9 = *pbVar9 + bVar2;
      *(byte *)unaff_EDI = (char)*unaff_EDI + (byte)jPresenter;
      bVar17 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar2;
      *(byte **)(unaff_EBX + -0x73) =
           pbVar14 + (uint)CARRY1(bVar17,bVar2) + *(int *)(unaff_EBX + -0x73);
      *pbVar9 = *pbVar9 + bVar2;
      bVar17 = (byte)jPresenter | *param_2;
      jPresenter = (char *)CONCAT31((int3)((uint)jPresenter >> 8),bVar17);
      cVar25 = (char)unaff_EBX;
      bVar5 = (byte)((uint)unaff_EBX >> 8);
      if ((char)bVar17 < '\x01') goto code_r0x00402eb4;
      *pbVar9 = *pbVar9 + bVar2;
      pbVar7 = (byte *)CONCAT31((int3)(char)((uint)pbVar7 >> 8),bVar2 + 0x2d);
      *(byte **)(pbVar14 + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar2) + *(int *)(pbVar14 + (int)unaff_EDI * 8);
      uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
      unaff_ESI = pbVar14;
      while( true ) {
        bVar17 = *unaff_ESI;
        bVar2 = (byte)pbVar7;
        *unaff_ESI = *unaff_ESI + bVar2;
        pbVar14 = unaff_ESI;
        if (!CARRY1(bVar17,bVar2)) break;
        *pbVar7 = *pbVar7 + bVar2;
        bVar2 = bVar2 | pbVar7[0x400001a];
        pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar2);
        if ((char)bVar2 < '\x01') {
code_r0x00402ecc:
          *pbVar7 = *pbVar7 + (byte)pbVar7;
          uVar15 = (undefined3)((uint)pbVar7 >> 8);
          bVar17 = (byte)pbVar7 | pbVar7[0x400001b];
          puVar11 = (uint *)CONCAT31(uVar15,bVar17);
          if ((char)bVar17 < '\x01') {
            bVar2 = *param_2;
            *param_2 = *param_2 + (byte)jPresenter;
            *(char *)((int)puVar11 * 2) =
                 *(char *)((int)puVar11 * 2) - CARRY1(bVar2,(byte)jPresenter);
            bVar26 = 0x81 < bVar17;
            bVar17 = bVar17 + 0x7e;
            goto code_r0x00402ef9;
          }
        }
        else {
          *pbVar7 = *pbVar7 + bVar2;
          pbVar9 = pbVar7;
code_r0x00402eb4:
          uVar15 = (undefined3)((uint)pbVar9 >> 8);
          bVar2 = (char)pbVar9 + 0x6f;
          puVar11 = (uint *)CONCAT31(uVar15,bVar2);
          *puVar11 = uStack_10;
          bVar17 = *param_2;
          *param_2 = *param_2 + (char)jPresenter;
          uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
          in_SS = in_ES;
          if (*param_2 != 0 && SCARRY1(bVar17,(char)jPresenter) == (char)*param_2 < '\0') {
            *(byte *)puVar11 = (char)*puVar11 + bVar2;
            bVar3 = (char)pbVar9 + 0x9c;
            pbVar7 = (byte *)CONCAT31(uVar15,bVar3);
            *(byte **)(pbVar14 + (int)unaff_EDI * 8) =
                 param_2 + (uint)(0xd2 < bVar2) + *(int *)(pbVar14 + (int)unaff_EDI * 8);
            uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
            bVar17 = *pbVar14;
            *pbVar14 = *pbVar14 + bVar3;
            unaff_ESI = pbVar14;
            puVar11 = unaff_EDI;
            if (CARRY1(bVar17,bVar3)) goto code_r0x00402ecc;
            goto code_r0x00402e5a;
          }
          unaff_ESI = pbVar14 + 4;
          out(*(undefined4 *)pbVar14,(short)param_2);
        }
        cVar4 = (char)puVar11;
        *(char *)puVar11 = (char)*puVar11 + cVar4;
        uVar15 = (undefined3)((uint)puVar11 >> 8);
        bVar2 = cVar4 + 0x6f;
        puVar11 = (uint *)CONCAT31(uVar15,bVar2);
        *puVar11 = uStack_10;
        bVar17 = *param_2;
        *param_2 = *param_2 + (byte)jPresenter;
        uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
        unaff_ESI[0x1c] = (unaff_ESI[0x1c] - bVar5) - CARRY1(bVar17,(byte)jPresenter);
        *(byte *)puVar11 = (char)*puVar11 + bVar2;
        bVar3 = cVar4 + 0x9c;
        pcVar12 = (char *)CONCAT31(uVar15,bVar3);
        *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
             param_2 + (uint)(0xd2 < bVar2) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
        bVar17 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + bVar3;
        if (!CARRY1(bVar17,bVar3)) {
          *pcVar12 = *pcVar12 + bVar3;
          goto code_r0x00402e7a;
        }
        *pcVar12 = *pcVar12 + bVar3;
        bVar3 = bVar3 | pcVar12[0x400001c];
        pbVar7 = (byte *)CONCAT31(uVar15,bVar3);
        if ((char)bVar3 < '\x01') goto code_r0x00402f16;
        *pbVar7 = *pbVar7 + bVar3;
        puVar11 = (uint *)CONCAT31(uVar15,bVar3 + 0x6f);
        while( true ) {
          *puVar11 = uStack_10;
          bVar17 = *param_2;
          *param_2 = *param_2 + (byte)jPresenter;
          *(uint *)(unaff_ESI + 0x1d) =
               (*(int *)(unaff_ESI + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar17,(byte)jPresenter)
          ;
          bVar17 = (byte)puVar11;
          *(byte *)puVar11 = (char)*puVar11 + bVar17;
          bVar2 = bVar17 + 0x2d;
          pbVar7 = (byte *)CONCAT31((int3)((uint)puVar11 >> 8),bVar2);
          *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
               param_2 + (uint)(0xd2 < bVar17) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
          uStack_10 = CONCAT22((short)(uStack_10 >> 0x10),in_ES);
          bVar17 = *unaff_ESI;
          *unaff_ESI = *unaff_ESI + bVar2;
          if (!CARRY1(bVar17,bVar2)) break;
          *pbVar7 = *pbVar7 + bVar2;
code_r0x00402f16:
          bVar17 = (byte)pbVar7 | pbVar7[0x400001d];
          puVar11 = (uint *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar17);
          uVar1 = unaff_EBP;
          if ((char)bVar17 < '\x01') goto code_r0x00402f3b;
          while( true ) {
            unaff_EBP = uVar1;
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
            uVar15 = (undefined3)((uint)puVar11 >> 8);
            cVar4 = (char)puVar11 + 'o';
            puVar10 = (uint *)CONCAT31(uVar15,cVar4);
            *puVar10 = uStack_10;
            cVar18 = (char)jPresenter;
            *param_2 = *param_2 + cVar18;
            uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
            bVar17 = (byte)((uint)param_2 >> 8);
            param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                       CONCAT11(bVar17 - *unaff_ESI,(char)param_2));
            if (bVar17 < *unaff_ESI) break;
            bVar26 = CARRY4((uint)puVar10,*puVar10);
            puVar11 = (uint *)((int)puVar10 + *puVar10);
            if (!SCARRY4((int)puVar10,*puVar10)) {
              bVar26 = CARRY4(unaff_EBP,*puVar11);
              unaff_EBP = unaff_EBP + *puVar11;
            }
            *puVar11 = (*puVar11 - (int)puVar11) - (uint)bVar26;
            *param_2 = *param_2 + cVar18;
            jPresenter = (char *)CONCAT22((short)((uint)jPresenter >> 0x10),
                                          CONCAT11((char)((uint)jPresenter >> 8) + *param_2,
                                                   cVar18 - *param_2));
            *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
code_r0x00402f3b:
            cVar18 = (char)param_2;
            *unaff_EBX = *unaff_EBX + cVar18;
            bVar17 = (byte)puVar11;
            *(byte *)((int)puVar11 * 2) = *(byte *)((int)puVar11 * 2) ^ bVar17;
            *(byte *)puVar11 = (byte)*puVar11 + bVar17;
            *(byte *)puVar11 = (byte)*puVar11 + cVar18;
            uVar1 = *puVar11;
            *(byte *)puVar11 = (byte)*puVar11 + bVar17;
            *(byte **)param_2 =
                 (byte *)((int)puVar11 + (uint)CARRY1((byte)uVar1,bVar17) + *(int *)param_2);
            pcVar12 = (char *)((uint)puVar11 | *unaff_EDI);
            uVar15 = (undefined3)((uint)pcVar12 >> 8);
            cVar4 = (char)pcVar12 + *pcVar12;
            pcVar12 = (char *)CONCAT31(uVar15,cVar4);
            *pcVar12 = *pcVar12 + cVar4;
            cVar4 = cVar4 + *pcVar12;
            piVar6 = (int *)CONCAT31(uVar15,cVar4);
            *(char *)piVar6 = (char)*piVar6 + cVar4;
            iVar8 = LocalDescriptorTableRegister();
            *piVar6 = iVar8;
            bVar17 = *unaff_EBX;
            bVar21 = (byte)((uint)jPresenter >> 8);
            *unaff_EBX = *unaff_EBX + bVar21;
            iVar8 = *piVar6;
            uVar16 = (undefined2)((uint)jPresenter >> 0x10);
            bVar19 = (byte)jPresenter;
            *unaff_ESI = *unaff_ESI + cVar4;
            pbVar14 = unaff_ESI + 4;
            out(*(undefined4 *)unaff_ESI,(short)param_2);
            *pbVar14 = *pbVar14 + cVar4;
            bVar2 = *unaff_EBX;
            *param_2 = *param_2 - bVar5;
            *pbVar14 = *pbVar14 + cVar4;
            pbVar7 = unaff_ESI + 8;
            out(*(undefined4 *)pbVar14,(short)param_2);
            *pbVar7 = *pbVar7 + cVar4;
            bVar3 = *unaff_EBX;
            *(uint *)(param_2 + -0x23) = *(uint *)(param_2 + -0x23) & (uint)pbVar7;
            piVar13 = (int *)((int)piVar6 + *piVar6);
            if (!SCARRY4((int)piVar6,*piVar6)) {
              *(undefined2 *)piVar13 = in_SS;
            }
            *(char *)piVar13 = (char)*piVar13 + (char)piVar13;
            uVar23 = CONCAT11((char)((uint)param_2 >> 8) + param_2[-0x15],cVar18);
            param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar23);
            puVar11 = (uint *)((int)piVar13 + *piVar13);
            if (!SCARRY4((int)piVar13,*piVar13)) {
              *(undefined2 *)puVar11 = in_SS;
            }
            cVar4 = (char)puVar11;
            *(byte *)puVar11 = (byte)*puVar11 + cVar4;
            cVar22 = ((bVar21 - (char)iVar8) - CARRY1(bVar17,bVar21) | bVar2 | bVar3) +
                     (byte)*puVar11;
            jPresenter = (char *)CONCAT22(uVar16,CONCAT11(cVar22,bVar19));
            bVar17 = *param_2;
            *param_2 = *param_2 + bVar19;
            if (CARRY1(bVar17,bVar19)) {
              *(byte *)puVar11 = (byte)*puVar11 + cVar4;
              bVar17 = param_2[6];
              uVar23 = (undefined2)((uint)unaff_EBX >> 0x10);
              *param_2 = *param_2 + bVar19;
              bVar2 = (cVar22 - *pbVar7) + cRam14730307;
              *(byte *)puVar11 = (byte)*puVar11 + cVar4;
              bVar17 = bVar5 | bVar17 | param_2[0x2a];
              uVar1 = *puVar11;
              pbVar14 = (byte *)((int)puVar11 + (uint)CARRY1(bVar2,(byte)*puVar11) + *puVar11);
              *param_2 = *param_2 + bVar19;
              cVar4 = cVar25 - *pbVar7;
              cVar25 = bVar17 + *(char *)(CONCAT31((int3)(CONCAT22(uVar23,CONCAT11(bVar17,cVar25))
                                                         >> 8),cVar4) + 0x1e);
              *pbVar14 = *pbVar14 + (char)pbVar14;
              uVar15 = (undefined3)((uint)pbVar14 >> 8);
              bVar17 = (char)pbVar14 + 0x2aU & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar25,cVar4)) + 0x1f);
              *pcVar12 = *pcVar12 + bVar17 + 0x2a;
              bVar17 = bVar17 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar25,cVar4)) + 0x20);
              *pcVar12 = *pcVar12 + bVar17 + 0x2a;
              bVar17 = bVar17 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar25,cVar4)) + 0x21);
              *pcVar12 = *pcVar12 + bVar17 + 0x2a;
              bVar17 = bVar17 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar25,cVar4)) + 0x22);
              *pcVar12 = *pcVar12 + bVar17 + 0x2a;
              bVar17 = bVar17 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
              bVar2 = bVar2 + (byte)uVar1 + *pcVar12;
              uVar20 = CONCAT22(uVar16,CONCAT11(bVar2,bVar19));
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar23,CONCAT11(cVar25,cVar4)) + 0x25);
              *pcVar12 = *pcVar12 + bVar17 + 0x2a;
              bVar17 = bVar17 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
              pcVar24 = (char *)CONCAT22(uVar23,CONCAT11(cVar25 + *(char *)(CONCAT22(uVar23,CONCAT11
                                                  (cVar25,cVar4)) + 0x26),cVar4));
              *pcVar12 = *pcVar12 + bVar17 + 0x2a;
              bVar17 = bVar17 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              cVar25 = bVar17 + 0x2a;
              pcVar12 = (char *)CONCAT31(uVar15,cVar25);
              if ((POPCOUNT(cVar25) & 1U) == 0) {
                *pcVar12 = *pcVar12 + cVar25;
                pbVar14 = (byte *)(CONCAT31(uVar15,bVar17 + 0x4f) + -0x33282610);
                bVar17 = *pbVar14;
                bVar5 = (byte)pbVar14;
                *pbVar14 = *pbVar14 + bVar5;
                uVar15 = (undefined3)((uint)pbVar14 >> 8);
                if (!CARRY1(bVar17,bVar5)) {
                  if (!SCARRY1(bVar5,'\0')) {
                    *pbVar14 = *pbVar14 + bVar5;
                    uVar20 = CONCAT22(uVar16,CONCAT11(bVar2 | *param_2,bVar19));
                    bVar5 = bVar5 & *param_2;
                    *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
                    pcVar12 = (char *)CONCAT31(uVar15,bVar5 + 0x2a);
                    goto code_r0x00403058;
                  }
                  pcVar12 = (char *)CONCAT31(uVar15,bVar5 + *pcVar24);
                  if (SCARRY1(bVar5,*pcVar24) != (char)(bVar5 + *pcVar24) < '\0')
                  goto code_r0x00403072;
                  goto code_r0x0040309a;
                }
                bVar17 = bVar5 + *pcVar24;
                pbVar14 = (byte *)CONCAT31(uVar15,bVar17);
                if (SCARRY1(bVar5,*pcVar24) == (char)bVar17 < '\0') {
                  pcVar12 = (char *)CONCAT22(uVar16,CONCAT11(bVar2 | *param_2,bVar19));
                  *pcVar24 = *pcVar24 + cVar18;
                  *param_2 = *param_2 ^ bVar17;
                  *(char *)((int)pbVar14 * 2) = *(char *)((int)pbVar14 * 2) + bVar17;
                  goto code_r0x004030df;
                }
              }
              else {
code_r0x00403058:
                *pcVar12 = *pcVar12 + (char)pcVar12;
                uVar15 = (undefined3)((uint)pcVar12 >> 8);
                bVar17 = (char)pcVar12 + 0x2aU & *param_2;
                *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
                pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x2a);
                *pcVar12 = *pcVar12 + bVar17 + 0x2a;
                pcVar12 = (char *)CONCAT31(uVar15,bVar17 + 0x54 & *param_2);
code_r0x00403072:
                cVar25 = (char)pcVar12;
                *pcVar12 = *pcVar12 + cVar25;
                uVar15 = (undefined3)((uint)pcVar12 >> 8);
                pcVar12 = (char *)CONCAT31(uVar15,cVar25 + '*');
                *pcVar12 = *pcVar12 + cVar25 + '*';
                bVar17 = cVar25 + 0x54U & *param_2;
                *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
                pcStack_48 = (char *)CONCAT22(pcStack_48._2_2_,in_DS);
                uVar20 = CONCAT22((short)((uint)uVar20 >> 0x10),
                                  CONCAT11((char)((uint)uVar20 >> 8) +
                                           *(char *)CONCAT31(uVar15,bVar17 + 0x2a),(char)uVar20));
                unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar18;
                pcVar12 = pcStack_48;
code_r0x0040309a:
                cVar25 = (char)pcVar12;
                *pcVar12 = *pcVar12 + cVar25;
                pcStack_48 = (char *)CONCAT22(pcStack_48._2_2_,in_ES);
                *pcVar12 = *pcVar12 + cVar25;
                pbVar14 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar25 + 0x2aU & *param_2);
              }
              cVar25 = (char)pbVar14;
              *pbVar14 = *pbVar14 + cVar25;
              uVar15 = (undefined3)((uint)pbVar14 >> 8);
              cVar4 = cVar25 + '*';
              pcVar12 = (char *)CONCAT31(uVar15,cVar4);
              unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar18;
              *pcVar12 = *pcVar12 + cVar4;
              cVar22 = (char)pcStack_48 - *pbVar7;
              pcVar24 = (char *)CONCAT22((short)((uint)pcStack_48 >> 0x10),
                                         CONCAT11((char)((uint)pcStack_48 >> 8) +
                                                  *(char *)(CONCAT31((int3)((uint)pcStack_48 >> 8),
                                                                     cVar22) + 0x34),cVar22));
              *pcVar12 = *pcVar12 + cVar4;
              bVar17 = cVar25 + 0x54U & *param_2;
              *(char *)CONCAT31(uVar15,bVar17) = *(char *)CONCAT31(uVar15,bVar17) + bVar17;
              pbVar14 = (byte *)CONCAT31(uVar15,bVar17 + 0x2a);
              bVar17 = (byte)((uint)uVar20 >> 8);
              pcVar12 = (char *)CONCAT22((short)((uint)uVar20 >> 0x10),
                                         CONCAT11(bVar17 + *pbVar14,(char)uVar20));
              pbVar14 = pbVar14 + (uint)CARRY1(bVar17,*pbVar14) + *(int *)pbVar14;
              *param_2 = *param_2 + (char)uVar20;
              uVar15 = (undefined3)((uint)pbVar14 >> 8);
              cVar25 = (byte)pbVar14 - *pbVar14;
              piVar6 = (int *)CONCAT31(uVar15,cVar25);
              pbVar7 = pbVar7 + (uint)((byte)pbVar14 < *pbVar14) + *piVar6;
              cVar25 = cVar25 + (char)*piVar6;
              pbVar14 = (byte *)CONCAT31(uVar15,cVar25);
              *pbVar14 = *pbVar14 + cVar25;
code_r0x004030df:
              *pcVar12 = *pcVar12 + cVar18;
              bVar17 = *pbVar14;
              bVar2 = (byte)pbVar14;
              *pbVar14 = *pbVar14 + bVar2;
              *(byte **)(pcVar24 + -0x41) =
                   pbVar7 + (uint)CARRY1(bVar17,bVar2) + *(int *)(pcVar24 + -0x41);
              *pbVar14 = *pbVar14 + bVar2;
              uVar15 = (undefined3)((uint)pbVar14 >> 8);
              bVar2 = bVar2 | *pbVar7;
              *(char *)CONCAT31(uVar15,bVar2) = *(char *)CONCAT31(uVar15,bVar2) + bVar2;
              pcVar12 = (char *)CONCAT31(uVar15,bVar2 + 0x7b);
              *pcVar12 = *pcVar12 + bVar2 + 0x7b;
              pbVar7[CONCAT31(uVar15,bVar2 - 8) + -1] =
                   pbVar7[CONCAT31(uVar15,bVar2 - 8) + -1] + (bVar2 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            unaff_ESI = unaff_ESI + 0xc;
            out(*(undefined4 *)pbVar7,uVar23);
            uVar1 = unaff_EBP + 1;
            uStack_10 = unaff_EBP;
          }
          bVar17 = cVar4 - (bVar17 < *unaff_ESI);
          pbVar14 = unaff_ESI + (int)unaff_EDI * 2;
          bVar26 = CARRY1(*pbVar14,bVar17);
          *pbVar14 = *pbVar14 + bVar17;
code_r0x00402ef9:
          puVar11 = (uint *)CONCAT31(uVar15,bVar17 - bVar26);
          pcVar12 = (char *)((int)unaff_EDI + unaff_EBP * 2);
          *pcVar12 = *pcVar12 + (bVar17 - bVar26);
        }
      }
      do {
        *jPresenter = *jPresenter + (byte)param_2;
        pbVar9 = param_2 + 0xa0a0000;
        bVar17 = *pbVar9;
        bVar3 = (byte)jPresenter;
        *pbVar9 = *pbVar9 - bVar3;
        bVar2 = (byte)pbVar7 + *pbVar7;
        bVar5 = bVar2 + (bVar17 < bVar3);
        piVar6 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar5);
        pbVar9 = param_2;
        if (!CARRY1((byte)pbVar7,*pbVar7) && !CARRY1(bVar2,bVar17 < bVar3)) goto code_r0x00402e42;
        uVar16 = (undefined2)((uint)pbVar7 >> 0x10);
        bVar17 = (byte)((uint)pbVar7 >> 8) | param_2[0x2170411];
        pbVar7 = (byte *)CONCAT22(uVar16,CONCAT11(bVar17,bVar5));
        pbVar9 = pbVar14 + 4;
        out(*(undefined4 *)pbVar14,(short)param_2);
        *pbVar7 = bVar5;
        *param_2 = *param_2 + bVar3;
        bRam06180411 = bVar5;
        *pbVar7 = *pbVar7 - cVar25;
        *pbVar7 = *pbVar7 + bVar5;
        uVar23 = (undefined2)((uint)jPresenter >> 0x10);
        bVar2 = (byte)((uint)jPresenter >> 8) | bRam052b0603;
        jPresenter = (char *)CONCAT22(uVar23,CONCAT11(bVar2,bVar3));
        pbVar14 = pbVar9;
      } while ((char)bVar2 < '\x01');
      *pbVar7 = *pbVar7 + bVar5;
      piVar6 = (int *)CONCAT22(uVar16,CONCAT11(bVar17 | param_2[0x7190411],bVar5));
      bRam89280411 = bVar5;
      *(byte *)piVar6 = (char)*piVar6 + bVar5;
      jPresenter = (char *)CONCAT22(uVar23,CONCAT11(bVar2 | *param_2,bVar3));
      pbVar14 = pbVar9 + *piVar6;
      pbVar7 = (byte *)((int)piVar6 + *piVar6);
      bVar2 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar2;
      *pbVar14 = *pbVar14 + bVar3;
      bVar17 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar2;
      *(uint *)pbVar7 = *(int *)pbVar7 + unaff_EBP + (uint)CARRY1(bVar17,bVar2);
      piVar6 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),*pbVar7);
      *param_2 = *param_2 + bVar3;
      pbVar9 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *param_2);
      pbVar9[-0x43] = pbVar9[-0x43] + (char)((uint)param_2 >> 8);
code_r0x00402e42:
      if (SCARRY4((int)piVar6,*piVar6)) goto code_r0x00402e6e;
      iVar8 = *(int *)((int)piVar6 + *piVar6);
      *pbVar9 = *pbVar9 + (char)jPresenter;
      piVar6 = (int *)(iVar8 + -0x8c6f);
      param_2 = (byte *)CONCAT22((short)((uint)pbVar9 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar9 >> 8) | pbVar9[-0x3f],(char)pbVar9));
      pbVar7 = (byte *)((int)piVar6 + *piVar6);
      puVar11 = puStack_4;
      in_DS = (undefined2)uStack_10;
    } while (SCARRY4((int)piVar6,*piVar6));
code_r0x00402e5a:
    *pbVar7 = *pbVar7 + (char)pbVar7;
    jPresenter = (char *)CONCAT22((short)((uint)jPresenter >> 0x10),
                                  CONCAT11((byte)((uint)jPresenter >> 8) | *param_2,(char)jPresenter
                                          ));
    pbVar7 = pbVar14 + 4;
    out(*(undefined4 *)pbVar14,(short)param_2);
    pbVar9 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*puVar11);
    pbVar14 = pbVar14 + 8;
    out(*(undefined4 *)pbVar7,(short)pbVar9);
    unaff_EDI = puVar11;
code_r0x00402e6e:
    param_2 = (byte *)CONCAT31((int3)((uint)pbVar9 >> 8),(char)pbVar9 + (char)*unaff_EDI);
    unaff_ESI = pbVar14 + 4;
    out(*(undefined4 *)pbVar14,(short)param_2);
  } while( true );
}


