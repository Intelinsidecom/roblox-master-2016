/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402e90
 * Raw Name    : get_PresenterActionsMap
 * Demangled   : get_PresenterActionsMap
 * Prototype   : pointer get_PresenterActionsMap(char * param_1, byte * param_2)
 * Local Vars  : param_1, param_2, pcStack_44, uStack_c, puStack_8, uVar1, bVar2, bVar3, cVar4, bVar5, in_EAX, pbVar6, piVar7, iVar8, puVar9, puVar10, pcVar11, piVar12, pbVar13, uVar14, bVar15, cVar16, bVar17, uVar18, bVar19, cVar20, uVar21, uVar22, unaff_EBX, pcVar23, cVar24, unaff_EBP, unaff_ESI, pbVar25, unaff_EDI, in_ES, in_SS, in_DS, in_CF, bVar26, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

undefined * __fastcall get_PresenterActionsMap(char *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  byte *in_EAX;
  undefined3 uVar14;
  uint *puVar10;
  char *pcVar11;
  int *piVar12;
  byte *pbVar13;
  byte bVar15;
  char cVar16;
  byte bVar17;
  byte bVar19;
  char cVar20;
  undefined2 uVar21;
  undefined4 uVar18;
  undefined2 uVar22;
  char cVar24;
  byte *unaff_EBX;
  char *pcVar23;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar25;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool in_CF;
  bool bVar26;
  undefined2 unaff_retaddr;
  char *pcStack_44;
  uint uStack_c;
  uint *puStack_8;
  uint *puVar9;
  
                    /* .NET CLR Managed Code */
  pbVar6 = param_2;
  if (!in_CF) {
    *(byte **)(param_1 + (int)unaff_EBX) = in_EAX + (uint)in_CF + *(int *)(param_1 + (int)unaff_EBX)
    ;
    goto code_r0x00402e1b;
  }
  do {
    unaff_retaddr = in_ES;
    bVar3 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar3;
    bVar15 = (byte)param_1 | *pbVar6;
    param_1 = (char *)CONCAT31((int3)((uint)param_1 >> 8),bVar15);
    puStack_8 = (uint *)CONCAT22(puStack_8._2_2_,in_SS);
    cVar24 = (char)unaff_EBX;
    bVar5 = (byte)((uint)unaff_EBX >> 8);
    pbVar13 = unaff_ESI;
    if ((char)bVar15 < '\x01') goto code_r0x00402eb4;
    *in_EAX = *in_EAX + bVar3;
    in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3 + 0x2d);
    *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
         pbVar6 + (uint)(0xd2 < bVar3) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
    uStack_c = CONCAT22(uStack_c._2_2_,unaff_retaddr);
    while( true ) {
      bVar3 = *unaff_ESI;
      bVar15 = (byte)in_EAX;
      *unaff_ESI = *unaff_ESI + bVar15;
      pbVar13 = unaff_ESI;
      if (!CARRY1(bVar3,bVar15)) break;
      *in_EAX = *in_EAX + bVar15;
      bVar15 = bVar15 | in_EAX[0x400001a];
      in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar15);
      if ((char)bVar15 < '\x01') {
code_r0x00402ecc:
        *in_EAX = *in_EAX + (byte)in_EAX;
        uVar14 = (undefined3)((uint)in_EAX >> 8);
        bVar3 = (byte)in_EAX | in_EAX[0x400001b];
        puVar10 = (uint *)CONCAT31(uVar14,bVar3);
        if ((char)bVar3 < '\x01') {
          bVar15 = *pbVar6;
          *pbVar6 = *pbVar6 + (byte)param_1;
          *(char *)((int)puVar10 * 2) = *(char *)((int)puVar10 * 2) - CARRY1(bVar15,(byte)param_1);
          bVar26 = 0x81 < bVar3;
          bVar3 = bVar3 + 0x7e;
          goto code_r0x00402ef9;
        }
      }
      else {
        *in_EAX = *in_EAX + bVar15;
code_r0x00402eb4:
        uVar14 = (undefined3)((uint)in_EAX >> 8);
        bVar15 = (char)in_EAX + 0x6f;
        puVar10 = (uint *)CONCAT31(uVar14,bVar15);
        *puVar10 = uStack_c;
        bVar3 = *pbVar6;
        *pbVar6 = *pbVar6 + (char)param_1;
        uStack_c = CONCAT22(uStack_c._2_2_,unaff_retaddr);
        in_SS = unaff_retaddr;
        if (*pbVar6 != 0 && SCARRY1(bVar3,(char)param_1) == (char)*pbVar6 < '\0') {
          *(byte *)puVar10 = (char)*puVar10 + bVar15;
          bVar2 = (char)in_EAX + 0x9c;
          in_EAX = (byte *)CONCAT31(uVar14,bVar2);
          *(byte **)(pbVar13 + (int)unaff_EDI * 8) =
               pbVar6 + (uint)(0xd2 < bVar15) + *(int *)(pbVar13 + (int)unaff_EDI * 8);
          uStack_c = CONCAT22(uStack_c._2_2_,unaff_retaddr);
          bVar3 = *pbVar13;
          *pbVar13 = *pbVar13 + bVar2;
          unaff_ESI = pbVar13;
          puVar10 = unaff_EDI;
          if (CARRY1(bVar3,bVar2)) goto code_r0x00402ecc;
          goto code_r0x00402e5a;
        }
        unaff_ESI = pbVar13 + 4;
        out(*(undefined4 *)pbVar13,(short)pbVar6);
      }
      cVar4 = (char)puVar10;
      *(char *)puVar10 = (char)*puVar10 + cVar4;
      uVar14 = (undefined3)((uint)puVar10 >> 8);
      bVar15 = cVar4 + 0x6f;
      puVar10 = (uint *)CONCAT31(uVar14,bVar15);
      *puVar10 = uStack_c;
      bVar3 = *pbVar6;
      *pbVar6 = *pbVar6 + (byte)param_1;
      unaff_ESI[0x1c] = (unaff_ESI[0x1c] - bVar5) - CARRY1(bVar3,(byte)param_1);
      *(byte *)puVar10 = (char)*puVar10 + bVar15;
      bVar2 = cVar4 + 0x9c;
      in_EAX = (byte *)CONCAT31(uVar14,bVar2);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           pbVar6 + (uint)(0xd2 < bVar15) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      uStack_c = CONCAT22((short)(uStack_c >> 0x10),unaff_retaddr);
      bVar3 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar2;
      if (!CARRY1(bVar3,bVar2)) {
        *in_EAX = *in_EAX + bVar2;
        goto code_r0x00402e81;
      }
      *in_EAX = *in_EAX + bVar2;
      bVar2 = bVar2 | in_EAX[0x400001c];
      in_EAX = (byte *)CONCAT31(uVar14,bVar2);
      if ((char)bVar2 < '\x01') goto code_r0x00402f16;
      *in_EAX = *in_EAX + bVar2;
      puVar10 = (uint *)CONCAT31(uVar14,bVar2 + 0x6f);
      while( true ) {
        *puVar10 = uStack_c;
        bVar3 = *pbVar6;
        *pbVar6 = *pbVar6 + (byte)param_1;
        *(uint *)(unaff_ESI + 0x1d) =
             (*(int *)(unaff_ESI + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar3,(byte)param_1);
        bVar3 = (byte)puVar10;
        *(byte *)puVar10 = (char)*puVar10 + bVar3;
        bVar15 = bVar3 + 0x2d;
        in_EAX = (byte *)CONCAT31((int3)((uint)puVar10 >> 8),bVar15);
        *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
             pbVar6 + (uint)(0xd2 < bVar3) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
        uStack_c = CONCAT22((short)(uStack_c >> 0x10),unaff_retaddr);
        bVar3 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + bVar15;
        if (!CARRY1(bVar3,bVar15)) break;
        *in_EAX = *in_EAX + bVar15;
code_r0x00402f16:
        bVar3 = (byte)in_EAX | in_EAX[0x400001d];
        puVar10 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
        if ((char)bVar3 < '\x01') goto code_r0x00402f3b;
        while( true ) {
          *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
          uVar14 = (undefined3)((uint)puVar10 >> 8);
          cVar4 = (char)puVar10 + 'o';
          puVar9 = (uint *)CONCAT31(uVar14,cVar4);
          *puVar9 = uStack_c;
          cVar16 = (char)param_1;
          *pbVar6 = *pbVar6 + cVar16;
          uStack_c = CONCAT22(uStack_c._2_2_,unaff_retaddr);
          bVar3 = (byte)((uint)pbVar6 >> 8);
          pbVar6 = (byte *)CONCAT22((short)((uint)pbVar6 >> 0x10),
                                    CONCAT11(bVar3 - *unaff_ESI,(char)pbVar6));
          if (bVar3 < *unaff_ESI) break;
          bVar26 = CARRY4((uint)puVar9,*puVar9);
          puVar10 = (uint *)((int)puVar9 + *puVar9);
          if (!SCARRY4((int)puVar9,*puVar9)) {
            bVar26 = CARRY4(unaff_EBP,*puVar10);
            unaff_EBP = unaff_EBP + *puVar10;
          }
          *puVar10 = (*puVar10 - (int)puVar10) - (uint)bVar26;
          *pbVar6 = *pbVar6 + cVar16;
          param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((char)((uint)param_1 >> 8) + *pbVar6,cVar16 - *pbVar6)
                                    );
          *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
code_r0x00402f3b:
          cVar16 = (char)pbVar6;
          *unaff_EBX = *unaff_EBX + cVar16;
          bVar3 = (byte)puVar10;
          *(byte *)((int)puVar10 * 2) = *(byte *)((int)puVar10 * 2) ^ bVar3;
          *(byte *)puVar10 = (byte)*puVar10 + bVar3;
          *(byte *)puVar10 = (byte)*puVar10 + cVar16;
          uVar1 = *puVar10;
          *(byte *)puVar10 = (byte)*puVar10 + bVar3;
          *(byte **)pbVar6 =
               (byte *)((int)puVar10 + (uint)CARRY1((byte)uVar1,bVar3) + *(int *)pbVar6);
          pcVar11 = (char *)((uint)puVar10 | *unaff_EDI);
          unaff_EBP = unaff_EBP + 1;
          uVar14 = (undefined3)((uint)pcVar11 >> 8);
          cVar4 = (char)pcVar11 + *pcVar11;
          pcVar11 = (char *)CONCAT31(uVar14,cVar4);
          *pcVar11 = *pcVar11 + cVar4;
          cVar4 = cVar4 + *pcVar11;
          piVar7 = (int *)CONCAT31(uVar14,cVar4);
          *(char *)piVar7 = (char)*piVar7 + cVar4;
          iVar8 = LocalDescriptorTableRegister();
          *piVar7 = iVar8;
          bVar3 = *unaff_EBX;
          bVar19 = (byte)((uint)param_1 >> 8);
          *unaff_EBX = *unaff_EBX + bVar19;
          iVar8 = *piVar7;
          uVar21 = (undefined2)((uint)param_1 >> 0x10);
          bVar17 = (byte)param_1;
          *unaff_ESI = *unaff_ESI + cVar4;
          pbVar13 = unaff_ESI + 4;
          out(*(undefined4 *)unaff_ESI,(short)pbVar6);
          *pbVar13 = *pbVar13 + cVar4;
          bVar15 = *unaff_EBX;
          *pbVar6 = *pbVar6 - bVar5;
          *pbVar13 = *pbVar13 + cVar4;
          pbVar25 = unaff_ESI + 8;
          out(*(undefined4 *)pbVar13,(short)pbVar6);
          *pbVar25 = *pbVar25 + cVar4;
          bVar2 = *unaff_EBX;
          *(uint *)(pbVar6 + -0x23) = *(uint *)(pbVar6 + -0x23) & (uint)pbVar25;
          piVar12 = (int *)((int)piVar7 + *piVar7);
          if (!SCARRY4((int)piVar7,*piVar7)) {
            *(undefined2 *)piVar12 = in_SS;
          }
          *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
          uVar22 = CONCAT11((char)((uint)pbVar6 >> 8) + pbVar6[-0x15],cVar16);
          pbVar6 = (byte *)CONCAT22((short)((uint)pbVar6 >> 0x10),uVar22);
          puVar10 = (uint *)((int)piVar12 + *piVar12);
          if (!SCARRY4((int)piVar12,*piVar12)) {
            *(undefined2 *)puVar10 = in_SS;
          }
          cVar4 = (char)puVar10;
          *(byte *)puVar10 = (byte)*puVar10 + cVar4;
          cVar20 = ((bVar19 - (char)iVar8) - CARRY1(bVar3,bVar19) | bVar15 | bVar2) + (byte)*puVar10
          ;
          param_1 = (char *)CONCAT22(uVar21,CONCAT11(cVar20,bVar17));
          bVar3 = *pbVar6;
          *pbVar6 = *pbVar6 + bVar17;
          if (CARRY1(bVar3,bVar17)) {
            *(byte *)puVar10 = (byte)*puVar10 + cVar4;
            bVar3 = pbVar6[6];
            uVar22 = (undefined2)((uint)unaff_EBX >> 0x10);
            *pbVar6 = *pbVar6 + bVar17;
            bVar15 = (cVar20 - *pbVar25) + cRam14730307;
            *(byte *)puVar10 = (byte)*puVar10 + cVar4;
            bVar3 = bVar5 | bVar3 | pbVar6[0x2a];
            uVar1 = *puVar10;
            pbVar13 = (byte *)((int)puVar10 + (uint)CARRY1(bVar15,(byte)*puVar10) + *puVar10);
            *pbVar6 = *pbVar6 + bVar17;
            cVar4 = cVar24 - *pbVar25;
            cVar24 = bVar3 + *(char *)(CONCAT31((int3)(CONCAT22(uVar22,CONCAT11(bVar3,cVar24)) >> 8)
                                                ,cVar4) + 0x1e);
            *pbVar13 = *pbVar13 + (char)pbVar13;
            uVar14 = (undefined3)((uint)pbVar13 >> 8);
            bVar3 = (char)pbVar13 + 0x2aU & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar24,cVar4)) + 0x1f);
            *pcVar11 = *pcVar11 + bVar3 + 0x2a;
            bVar3 = bVar3 + 0x54 & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar24,cVar4)) + 0x20);
            *pcVar11 = *pcVar11 + bVar3 + 0x2a;
            bVar3 = bVar3 + 0x54 & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar24,cVar4)) + 0x21);
            *pcVar11 = *pcVar11 + bVar3 + 0x2a;
            bVar3 = bVar3 + 0x54 & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x2a);
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar24,cVar4)) + 0x22);
            *pcVar11 = *pcVar11 + bVar3 + 0x2a;
            bVar3 = bVar3 + 0x54 & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x2a);
            bVar15 = bVar15 + (byte)uVar1 + *pcVar11;
            uVar18 = CONCAT22(uVar21,CONCAT11(bVar15,bVar17));
            cVar24 = cVar24 + *(char *)(CONCAT22(uVar22,CONCAT11(cVar24,cVar4)) + 0x25);
            *pcVar11 = *pcVar11 + bVar3 + 0x2a;
            bVar3 = bVar3 + 0x54 & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x2a);
            pcVar23 = (char *)CONCAT22(uVar22,CONCAT11(cVar24 + *(char *)(CONCAT22(uVar22,CONCAT11(
                                                  cVar24,cVar4)) + 0x26),cVar4));
            *pcVar11 = *pcVar11 + bVar3 + 0x2a;
            bVar3 = bVar3 + 0x54 & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            cVar24 = bVar3 + 0x2a;
            pcVar11 = (char *)CONCAT31(uVar14,cVar24);
            if ((POPCOUNT(cVar24) & 1U) == 0) {
              *pcVar11 = *pcVar11 + cVar24;
              pbVar13 = (byte *)(CONCAT31(uVar14,bVar3 + 0x4f) + -0x33282610);
              bVar3 = *pbVar13;
              bVar5 = (byte)pbVar13;
              *pbVar13 = *pbVar13 + bVar5;
              uVar14 = (undefined3)((uint)pbVar13 >> 8);
              if (!CARRY1(bVar3,bVar5)) {
                if (!SCARRY1(bVar5,'\0')) {
                  *pbVar13 = *pbVar13 + bVar5;
                  uVar18 = CONCAT22(uVar21,CONCAT11(bVar15 | *pbVar6,bVar17));
                  bVar5 = bVar5 & *pbVar6;
                  *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
                  pcVar11 = (char *)CONCAT31(uVar14,bVar5 + 0x2a);
                  goto code_r0x00403058;
                }
                pcVar11 = (char *)CONCAT31(uVar14,bVar5 + *pcVar23);
                if (SCARRY1(bVar5,*pcVar23) != (char)(bVar5 + *pcVar23) < '\0')
                goto code_r0x00403072;
                goto code_r0x0040309a;
              }
              bVar3 = bVar5 + *pcVar23;
              pbVar13 = (byte *)CONCAT31(uVar14,bVar3);
              if (SCARRY1(bVar5,*pcVar23) == (char)bVar3 < '\0') {
                pcVar11 = (char *)CONCAT22(uVar21,CONCAT11(bVar15 | *pbVar6,bVar17));
                *pcVar23 = *pcVar23 + cVar16;
                *pbVar6 = *pbVar6 ^ bVar3;
                *(char *)((int)pbVar13 * 2) = *(char *)((int)pbVar13 * 2) + bVar3;
                goto code_r0x004030df;
              }
            }
            else {
code_r0x00403058:
              *pcVar11 = *pcVar11 + (char)pcVar11;
              uVar14 = (undefined3)((uint)pcVar11 >> 8);
              bVar3 = (char)pcVar11 + 0x2aU & *pbVar6;
              *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
              pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x2a);
              *pcVar11 = *pcVar11 + bVar3 + 0x2a;
              pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x54 & *pbVar6);
code_r0x00403072:
              cVar24 = (char)pcVar11;
              *pcVar11 = *pcVar11 + cVar24;
              uVar14 = (undefined3)((uint)pcVar11 >> 8);
              pcVar11 = (char *)CONCAT31(uVar14,cVar24 + '*');
              *pcVar11 = *pcVar11 + cVar24 + '*';
              bVar3 = cVar24 + 0x54U & *pbVar6;
              *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
              pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,in_DS);
              uVar18 = CONCAT22((short)((uint)uVar18 >> 0x10),
                                CONCAT11((char)((uint)uVar18 >> 8) +
                                         *(char *)CONCAT31(uVar14,bVar3 + 0x2a),(char)uVar18));
              unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar16;
              pcVar11 = pcStack_44;
code_r0x0040309a:
              cVar24 = (char)pcVar11;
              *pcVar11 = *pcVar11 + cVar24;
              pcStack_44 = (char *)CONCAT22(pcStack_44._2_2_,unaff_retaddr);
              *pcVar11 = *pcVar11 + cVar24;
              pbVar13 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar24 + 0x2aU & *pbVar6);
            }
            cVar24 = (char)pbVar13;
            *pbVar13 = *pbVar13 + cVar24;
            uVar14 = (undefined3)((uint)pbVar13 >> 8);
            cVar4 = cVar24 + '*';
            pcVar11 = (char *)CONCAT31(uVar14,cVar4);
            unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar16;
            *pcVar11 = *pcVar11 + cVar4;
            cVar20 = (char)pcStack_44 - *pbVar25;
            pcVar23 = (char *)CONCAT22((short)((uint)pcStack_44 >> 0x10),
                                       CONCAT11((char)((uint)pcStack_44 >> 8) +
                                                *(char *)(CONCAT31((int3)((uint)pcStack_44 >> 8),
                                                                   cVar20) + 0x34),cVar20));
            *pcVar11 = *pcVar11 + cVar4;
            bVar3 = cVar24 + 0x54U & *pbVar6;
            *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
            pbVar13 = (byte *)CONCAT31(uVar14,bVar3 + 0x2a);
            bVar3 = (byte)((uint)uVar18 >> 8);
            pcVar11 = (char *)CONCAT22((short)((uint)uVar18 >> 0x10),
                                       CONCAT11(bVar3 + *pbVar13,(char)uVar18));
            pbVar13 = pbVar13 + (uint)CARRY1(bVar3,*pbVar13) + *(int *)pbVar13;
            *pbVar6 = *pbVar6 + (char)uVar18;
            uVar14 = (undefined3)((uint)pbVar13 >> 8);
            cVar24 = (byte)pbVar13 - *pbVar13;
            piVar7 = (int *)CONCAT31(uVar14,cVar24);
            pbVar25 = pbVar25 + (uint)((byte)pbVar13 < *pbVar13) + *piVar7;
            cVar24 = cVar24 + (char)*piVar7;
            pbVar13 = (byte *)CONCAT31(uVar14,cVar24);
            *pbVar13 = *pbVar13 + cVar24;
code_r0x004030df:
            *pcVar11 = *pcVar11 + cVar16;
            bVar3 = *pbVar13;
            bVar15 = (byte)pbVar13;
            *pbVar13 = *pbVar13 + bVar15;
            *(byte **)(pcVar23 + -0x41) =
                 pbVar25 + (uint)CARRY1(bVar3,bVar15) + *(int *)(pcVar23 + -0x41);
            *pbVar13 = *pbVar13 + bVar15;
            uVar14 = (undefined3)((uint)pbVar13 >> 8);
            bVar15 = bVar15 | *pbVar25;
            *(char *)CONCAT31(uVar14,bVar15) = *(char *)CONCAT31(uVar14,bVar15) + bVar15;
            pcVar11 = (char *)CONCAT31(uVar14,bVar15 + 0x7b);
            *pcVar11 = *pcVar11 + bVar15 + 0x7b;
            pbVar25[CONCAT31(uVar14,bVar15 - 8) + -1] =
                 pbVar25[CONCAT31(uVar14,bVar15 - 8) + -1] + (bVar15 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_ESI = unaff_ESI + 0xc;
          out(*(undefined4 *)pbVar25,uVar22);
        }
        bVar3 = cVar4 - (bVar3 < *unaff_ESI);
        pbVar13 = unaff_ESI + (int)unaff_EDI * 2;
        bVar26 = CARRY1(*pbVar13,bVar3);
        *pbVar13 = *pbVar13 + bVar3;
code_r0x00402ef9:
        puVar10 = (uint *)CONCAT31(uVar14,bVar3 - bVar26);
        pcVar11 = (char *)((int)unaff_EDI + unaff_EBP * 2);
        *pcVar11 = *pcVar11 + (bVar3 - bVar26);
      }
    }
    do {
      *param_1 = *param_1 + (char)pbVar6;
      pbVar25 = pbVar6 + 0xa0a0000;
      bVar3 = *pbVar25;
      bVar2 = (byte)param_1;
      *pbVar25 = *pbVar25 - bVar2;
      bVar15 = (byte)in_EAX + *in_EAX;
      bVar5 = bVar15 + (bVar3 < bVar2);
      piVar7 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),bVar5);
      if (!CARRY1((byte)in_EAX,*in_EAX) && !CARRY1(bVar15,bVar3 < bVar2)) goto code_r0x00402e42;
      in_EAX = (byte *)CONCAT22((short)((uint)in_EAX >> 0x10),
                                CONCAT11((byte)((uint)in_EAX >> 8) | pbVar6[0x2170411],bVar5));
      unaff_ESI = pbVar13 + 4;
      out(*(undefined4 *)pbVar13,(short)pbVar6);
      *in_EAX = bVar5;
      *pbVar6 = *pbVar6 + bVar2;
      bRam06180411 = bVar5;
      *in_EAX = *in_EAX - cVar24;
      *in_EAX = *in_EAX + bVar5;
      bVar3 = (byte)((uint)param_1 >> 8) | bRam052b0603;
      param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar3,bVar2));
      param_2 = pbVar6;
      pbVar13 = unaff_ESI;
    } while ((char)bVar3 < '\x01');
code_r0x00402e1b:
    cRam89280411 = (char)in_EAX;
    *in_EAX = *in_EAX + cRam89280411;
    piVar7 = (int *)CONCAT22((short)((uint)in_EAX >> 0x10),
                             CONCAT11((byte)((uint)in_EAX >> 8) | param_2[0x7190411],cRam89280411));
    *(char *)piVar7 = (char)*piVar7 + cRam89280411;
    cVar24 = (char)param_1;
    param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((byte)((uint)param_1 >> 8) | *param_2,cVar24));
    pbVar13 = unaff_ESI + *piVar7;
    pbVar6 = (byte *)((int)piVar7 + *piVar7);
    bVar15 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar15;
    *pbVar13 = *pbVar13 + cVar24;
    bVar3 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar15;
    *(uint *)pbVar6 = *(int *)pbVar6 + unaff_EBP + (uint)CARRY1(bVar3,bVar15);
    piVar7 = (int *)CONCAT31((int3)((uint)pbVar6 >> 8),*pbVar6);
    *param_2 = *param_2 + cVar24;
    pbVar6 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *param_2);
    pbVar6[-0x43] = pbVar6[-0x43] + (char)((uint)param_2 >> 8);
code_r0x00402e42:
    if (SCARRY4((int)piVar7,*piVar7)) {
code_r0x00402e6e:
      puStack_8 = (uint *)((uint)puStack_8 & 0xffff0000);
      uVar14 = (undefined3)((uint)pbVar6 >> 8);
      cVar24 = (char)pbVar6 + (char)*unaff_EDI;
      out(*(undefined4 *)pbVar13,(short)CONCAT31(uVar14,cVar24));
      uStack_c = CONCAT22(uStack_c._2_2_,unaff_retaddr);
      pbVar6 = (byte *)CONCAT31(uVar14,cVar24 + (char)*unaff_EDI);
      unaff_ESI = pbVar13 + 8;
      out(*(undefined4 *)(pbVar13 + 4),(short)pbVar6);
      in_EAX = (byte *)0x0;
    }
    else {
      iVar8 = *(int *)((int)piVar7 + *piVar7);
      *pbVar6 = *pbVar6 + (char)param_1;
      piVar7 = (int *)(iVar8 + -0x8c6f);
      pbVar6 = (byte *)CONCAT22((short)((uint)pbVar6 >> 0x10),
                                CONCAT11((byte)((uint)pbVar6 >> 8) | pbVar6[-0x3f],(char)pbVar6));
      in_EAX = (byte *)((int)piVar7 + *piVar7);
      unaff_ESI = pbVar13;
      puVar10 = puStack_8;
      in_DS = (undefined2)uStack_c;
      if (!SCARRY4((int)piVar7,*piVar7)) {
code_r0x00402e5a:
        *in_EAX = *in_EAX + (char)in_EAX;
        param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) | *pbVar6,(char)param_1));
        pbVar25 = pbVar13 + 4;
        out(*(undefined4 *)pbVar13,(short)pbVar6);
        pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),(char)pbVar6 + (char)*puVar10);
        pbVar13 = pbVar13 + 8;
        out(*(undefined4 *)pbVar25,(short)pbVar6);
        unaff_EDI = puVar10;
        goto code_r0x00402e6e;
      }
    }
code_r0x00402e81:
    bVar15 = (char)in_EAX - *in_EAX;
    iVar8 = CONCAT31((int3)((uint)in_EAX >> 8),bVar15);
    *unaff_EBX = *unaff_EBX + (char)pbVar6;
    pbVar13 = (byte *)(iVar8 * 2);
    *pbVar13 = *pbVar13 ^ bVar15;
    in_EAX = (byte *)(int)(short)iVar8;
    *in_EAX = *in_EAX + bVar15;
    *(char *)unaff_EDI = (char)*unaff_EDI + (char)param_1;
    bVar3 = *in_EAX;
    *in_EAX = *in_EAX + bVar15;
    *(byte **)(unaff_EBX + -0x73) =
         unaff_ESI + (uint)CARRY1(bVar3,bVar15) + *(int *)(unaff_EBX + -0x73);
    in_ES = unaff_retaddr;
  } while( true );
}


