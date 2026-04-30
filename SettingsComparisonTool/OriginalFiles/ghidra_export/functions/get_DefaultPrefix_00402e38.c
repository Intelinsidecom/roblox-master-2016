/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402e38
 * Raw Name    : get_DefaultPrefix
 * Demangled   : get_DefaultPrefix
 * Prototype   : char * get_DefaultPrefix(char * param_1, byte * param_2, uint * param_3)
 * Local Vars  : pcStack_50, uStack_18, uVar1, bVar2, bVar3, bVar4, in_EAX, piVar5, pbVar6, pbVar7, iVar8, puVar9, puVar10, pcVar11, param_1, piVar12, param_2, pbVar13, param_3, uVar14, uVar15, bVar16, cVar17, bVar18, uVar19, bVar20, cVar21, uVar22, cVar23, unaff_EBX, pcVar24, cVar25, uVar26, unaff_EBP, unaff_ESI, pbVar27, unaff_EDI, puVar28, in_ES, in_SS, in_DS, bVar29, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall get_DefaultPrefix(char *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar15;
  byte *in_EAX;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined3 uVar14;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  int *piVar12;
  byte *pbVar13;
  byte bVar16;
  char cVar17;
  byte bVar18;
  byte bVar20;
  undefined2 uVar22;
  char cVar21;
  undefined4 uVar19;
  char cVar23;
  char cVar25;
  byte *unaff_EBX;
  undefined2 uVar26;
  char *pcVar24;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar27;
  uint *unaff_EDI;
  uint *puVar28;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar29;
  undefined2 unaff_retaddr;
  char *pcStack_50;
  uint uStack_18;
  int iVar8;
  
  do {
                    /* .NET CLR Managed Code */
    pbVar13 = param_2 + 0xa0a0000;
    bVar16 = *pbVar13;
    bVar4 = (byte)param_1;
    *pbVar13 = *pbVar13 - bVar4;
    bVar3 = (byte)in_EAX + *in_EAX;
    bVar2 = bVar3 + (bVar16 < bVar4);
    piVar5 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
    cVar25 = (char)unaff_EBX;
    pbVar13 = unaff_ESI;
    uVar26 = unaff_retaddr;
    if (!CARRY1((byte)in_EAX,*in_EAX) && !CARRY1(bVar3,bVar16 < bVar4)) {
code_r0x00402e42:
      puVar28 = unaff_EDI;
      if (SCARRY4((int)piVar5,*piVar5)) goto code_r0x00402e6e;
      iVar8 = *(int *)((int)piVar5 + *piVar5);
      *param_2 = *param_2 + (char)param_1;
      piVar5 = (int *)(iVar8 + -0x8c6f);
      param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11((byte)((uint)param_2 >> 8) | param_2[-0x3f],(char)param_2)
                                );
      pbVar6 = (byte *)((int)piVar5 + *piVar5);
      pbVar7 = pbVar6;
      puVar28 = param_3;
      if (SCARRY4((int)piVar5,*piVar5)) goto code_r0x00402e81;
code_r0x00402e5a:
      *pbVar6 = *pbVar6 + (char)pbVar6;
      param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | *param_2,(char)param_1));
      pbVar7 = pbVar13 + 4;
      out(*(undefined4 *)pbVar13,(short)param_2);
      param_2 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*puVar28);
      pbVar13 = pbVar13 + 8;
      out(*(undefined4 *)pbVar7,(short)param_2);
      in_DS = unaff_retaddr;
      uVar26 = in_ES;
code_r0x00402e6e:
      unaff_retaddr = in_DS;
      uVar14 = (undefined3)((uint)param_2 >> 8);
      cVar23 = (char)param_2 + (char)*puVar28;
      pbVar7 = pbVar13 + 4;
      out(*(undefined4 *)pbVar13,(short)CONCAT31(uVar14,cVar23));
      param_2 = (byte *)CONCAT31(uVar14,cVar23 + (char)*puVar28);
      pbVar13 = pbVar13 + 8;
      out(*(undefined4 *)pbVar7,(short)param_2);
      pbVar7 = (byte *)0x0;
      unaff_EDI = puVar28;
code_r0x00402e81:
      puVar28 = unaff_EDI;
      bVar3 = (char)pbVar7 - *pbVar7;
      iVar8 = CONCAT31((int3)((uint)pbVar7 >> 8),bVar3);
      *unaff_EBX = *unaff_EBX + (char)param_2;
      pbVar6 = (byte *)(iVar8 * 2);
      *pbVar6 = *pbVar6 ^ bVar3;
      pbVar6 = (byte *)(int)(short)iVar8;
      *pbVar6 = *pbVar6 + bVar3;
      *(byte *)puVar28 = (char)*puVar28 + (byte)param_1;
      bVar16 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar3;
      *(byte **)(unaff_EBX + -0x73) =
           pbVar13 + (uint)CARRY1(bVar16,bVar3) + *(int *)(unaff_EBX + -0x73);
      *pbVar6 = *pbVar6 + bVar3;
      bVar16 = (byte)param_1 | *param_2;
      param_1 = (char *)CONCAT31((int3)((uint)param_1 >> 8),bVar16);
      bVar2 = (byte)((uint)unaff_EBX >> 8);
      pbVar27 = pbVar13;
      in_DS = unaff_retaddr;
      if ((char)bVar16 < '\x01') goto code_r0x00402eb4;
      *pbVar6 = *pbVar6 + bVar3;
      in_EAX = (byte *)CONCAT31((int3)(char)((uint)pbVar7 >> 8),bVar3 + 0x2d);
      *(byte **)(pbVar13 + (int)puVar28 * 8) =
           param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar13 + (int)puVar28 * 8);
      uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
      do {
        bVar16 = *pbVar13;
        bVar3 = (byte)in_EAX;
        *pbVar13 = *pbVar13 + bVar3;
        unaff_EDI = puVar28;
        if (!CARRY1(bVar16,bVar3)) goto code_r0x00402e36;
        *in_EAX = *in_EAX + bVar3;
        bVar3 = bVar3 | in_EAX[0x400001a];
        pbVar6 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
        if ((char)bVar3 < '\x01') {
code_r0x00402ecc:
          *pbVar6 = *pbVar6 + (byte)pbVar6;
          uVar14 = (undefined3)((uint)pbVar6 >> 8);
          bVar16 = (byte)pbVar6 | pbVar6[0x400001b];
          puVar10 = (uint *)CONCAT31(uVar14,bVar16);
          if ((char)bVar16 < '\x01') {
            bVar3 = *param_2;
            *param_2 = *param_2 + (byte)param_1;
            *(char *)((int)puVar10 * 2) = *(char *)((int)puVar10 * 2) - CARRY1(bVar3,(byte)param_1);
            bVar29 = 0x81 < bVar16;
            bVar16 = bVar16 + 0x7e;
            goto code_r0x00402ef9;
          }
        }
        else {
          *pbVar6 = *pbVar6 + bVar3;
          pbVar27 = pbVar13;
code_r0x00402eb4:
          uVar14 = (undefined3)((uint)pbVar6 >> 8);
          bVar3 = (char)pbVar6 + 0x6f;
          puVar10 = (uint *)CONCAT31(uVar14,bVar3);
          *puVar10 = uStack_18;
          bVar16 = *param_2;
          *param_2 = *param_2 + (char)param_1;
          uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
          in_SS = in_ES;
          if (*param_2 != 0 && SCARRY1(bVar16,(char)param_1) == (char)*param_2 < '\0') {
            *(byte *)puVar10 = (char)*puVar10 + bVar3;
            bVar4 = (char)pbVar6 + 0x9c;
            pbVar6 = (byte *)CONCAT31(uVar14,bVar4);
            *(byte **)(pbVar27 + (int)puVar28 * 8) =
                 param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar27 + (int)puVar28 * 8);
            uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
            bVar16 = *pbVar27;
            *pbVar27 = *pbVar27 + bVar4;
            pbVar13 = pbVar27;
            if (CARRY1(bVar16,bVar4)) goto code_r0x00402ecc;
            goto code_r0x00402e5a;
          }
          pbVar13 = pbVar27 + 4;
          out(*(undefined4 *)pbVar27,(short)param_2);
        }
        cVar23 = (char)puVar10;
        *(char *)puVar10 = (char)*puVar10 + cVar23;
        uVar14 = (undefined3)((uint)puVar10 >> 8);
        bVar3 = cVar23 + 0x6f;
        puVar10 = (uint *)CONCAT31(uVar14,bVar3);
        *puVar10 = uStack_18;
        bVar16 = *param_2;
        *param_2 = *param_2 + (byte)param_1;
        uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
        pbVar13[0x1c] = (pbVar13[0x1c] - bVar2) - CARRY1(bVar16,(byte)param_1);
        *(byte *)puVar10 = (char)*puVar10 + bVar3;
        bVar4 = cVar23 + 0x9c;
        pcVar11 = (char *)CONCAT31(uVar14,bVar4);
        *(byte **)(pbVar13 + (int)puVar28 * 8) =
             param_2 + (uint)(0xd2 < bVar3) + *(int *)(pbVar13 + (int)puVar28 * 8);
        bVar16 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar4;
        if (!CARRY1(bVar16,bVar4)) goto code_r0x00402e7e;
        *pcVar11 = *pcVar11 + bVar4;
        bVar4 = bVar4 | pcVar11[0x400001c];
        in_EAX = (byte *)CONCAT31(uVar14,bVar4);
        uVar26 = in_ES;
        if ((char)bVar4 < '\x01') goto code_r0x00402f16;
        *in_EAX = *in_EAX + bVar4;
        puVar10 = (uint *)CONCAT31(uVar14,bVar4 + 0x6f);
        while( true ) {
          *puVar10 = uStack_18;
          bVar16 = *param_2;
          *param_2 = *param_2 + (byte)param_1;
          *(uint *)(pbVar13 + 0x1d) =
               (*(int *)(pbVar13 + 0x1d) - (int)puVar28) - (uint)CARRY1(bVar16,(byte)param_1);
          bVar16 = (byte)puVar10;
          *(byte *)puVar10 = (char)*puVar10 + bVar16;
          bVar3 = bVar16 + 0x2d;
          in_EAX = (byte *)CONCAT31((int3)((uint)puVar10 >> 8),bVar3);
          *(byte **)(pbVar13 + (int)puVar28 * 8) =
               param_2 + (uint)(0xd2 < bVar16) + *(int *)(pbVar13 + (int)puVar28 * 8);
          uStack_18 = CONCAT22((short)(uStack_18 >> 0x10),in_ES);
          bVar16 = *pbVar13;
          *pbVar13 = *pbVar13 + bVar3;
          if (!CARRY1(bVar16,bVar3)) break;
          *in_EAX = *in_EAX + bVar3;
code_r0x00402f16:
          bVar16 = (byte)in_EAX | in_EAX[0x400001d];
          puVar10 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar16);
          uVar1 = unaff_EBP;
          if ((char)bVar16 < '\x01') goto code_r0x00402f3b;
          while( true ) {
            unaff_EBP = uVar1;
            *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
            uVar14 = (undefined3)((uint)puVar10 >> 8);
            cVar23 = (char)puVar10 + 'o';
            puVar9 = (uint *)CONCAT31(uVar14,cVar23);
            *puVar9 = uStack_18;
            cVar17 = (char)param_1;
            *param_2 = *param_2 + cVar17;
            uStack_18 = CONCAT22(uStack_18._2_2_,in_ES);
            bVar16 = (byte)((uint)param_2 >> 8);
            param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                       CONCAT11(bVar16 - *pbVar13,(char)param_2));
            if (bVar16 < *pbVar13) break;
            bVar29 = CARRY4((uint)puVar9,*puVar9);
            puVar10 = (uint *)((int)puVar9 + *puVar9);
            if (!SCARRY4((int)puVar9,*puVar9)) {
              bVar29 = CARRY4(unaff_EBP,*puVar10);
              unaff_EBP = unaff_EBP + *puVar10;
            }
            *puVar10 = (*puVar10 - (int)puVar10) - (uint)bVar29;
            *param_2 = *param_2 + cVar17;
            param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                       CONCAT11((char)((uint)param_1 >> 8) + *param_2,
                                                cVar17 - *param_2));
            *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
code_r0x00402f3b:
            cVar17 = (char)param_2;
            *unaff_EBX = *unaff_EBX + cVar17;
            bVar16 = (byte)puVar10;
            *(byte *)((int)puVar10 * 2) = *(byte *)((int)puVar10 * 2) ^ bVar16;
            *(byte *)puVar10 = (byte)*puVar10 + bVar16;
            *(byte *)puVar10 = (byte)*puVar10 + cVar17;
            uVar1 = *puVar10;
            *(byte *)puVar10 = (byte)*puVar10 + bVar16;
            *(byte **)param_2 =
                 (byte *)((int)puVar10 + (uint)CARRY1((byte)uVar1,bVar16) + *(int *)param_2);
            pcVar11 = (char *)((uint)puVar10 | *puVar28);
            uVar14 = (undefined3)((uint)pcVar11 >> 8);
            cVar23 = (char)pcVar11 + *pcVar11;
            pcVar11 = (char *)CONCAT31(uVar14,cVar23);
            *pcVar11 = *pcVar11 + cVar23;
            cVar23 = cVar23 + *pcVar11;
            piVar5 = (int *)CONCAT31(uVar14,cVar23);
            *(char *)piVar5 = (char)*piVar5 + cVar23;
            iVar8 = LocalDescriptorTableRegister();
            *piVar5 = iVar8;
            bVar16 = *unaff_EBX;
            bVar20 = (byte)((uint)param_1 >> 8);
            *unaff_EBX = *unaff_EBX + bVar20;
            iVar8 = *piVar5;
            uVar15 = (undefined2)((uint)param_1 >> 0x10);
            bVar18 = (byte)param_1;
            *pbVar13 = *pbVar13 + cVar23;
            pbVar7 = pbVar13 + 4;
            out(*(undefined4 *)pbVar13,(short)param_2);
            *pbVar7 = *pbVar7 + cVar23;
            bVar3 = *unaff_EBX;
            *param_2 = *param_2 - bVar2;
            *pbVar7 = *pbVar7 + cVar23;
            pbVar6 = pbVar13 + 8;
            out(*(undefined4 *)pbVar7,(short)param_2);
            *pbVar6 = *pbVar6 + cVar23;
            bVar4 = *unaff_EBX;
            *(uint *)(param_2 + -0x23) = *(uint *)(param_2 + -0x23) & (uint)pbVar6;
            piVar12 = (int *)((int)piVar5 + *piVar5);
            if (!SCARRY4((int)piVar5,*piVar5)) {
              *(undefined2 *)piVar12 = in_SS;
            }
            *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
            uVar22 = CONCAT11((char)((uint)param_2 >> 8) + param_2[-0x15],cVar17);
            param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar22);
            puVar10 = (uint *)((int)piVar12 + *piVar12);
            if (!SCARRY4((int)piVar12,*piVar12)) {
              *(undefined2 *)puVar10 = in_SS;
            }
            cVar23 = (char)puVar10;
            *(byte *)puVar10 = (byte)*puVar10 + cVar23;
            cVar21 = ((bVar20 - (char)iVar8) - CARRY1(bVar16,bVar20) | bVar3 | bVar4) +
                     (byte)*puVar10;
            param_1 = (char *)CONCAT22(uVar15,CONCAT11(cVar21,bVar18));
            bVar16 = *param_2;
            *param_2 = *param_2 + bVar18;
            if (CARRY1(bVar16,bVar18)) {
              *(byte *)puVar10 = (byte)*puVar10 + cVar23;
              bVar16 = param_2[6];
              uVar26 = (undefined2)((uint)unaff_EBX >> 0x10);
              *param_2 = *param_2 + bVar18;
              bVar3 = (cVar21 - *pbVar6) + cRam14730307;
              *(byte *)puVar10 = (byte)*puVar10 + cVar23;
              bVar16 = bVar2 | bVar16 | param_2[0x2a];
              uVar1 = *puVar10;
              pbVar7 = (byte *)((int)puVar10 + (uint)CARRY1(bVar3,(byte)*puVar10) + *puVar10);
              *param_2 = *param_2 + bVar18;
              cVar23 = cVar25 - *pbVar6;
              cVar25 = bVar16 + *(char *)(CONCAT31((int3)(CONCAT22(uVar26,CONCAT11(bVar16,cVar25))
                                                         >> 8),cVar23) + 0x1e);
              *pbVar7 = *pbVar7 + (char)pbVar7;
              uVar14 = (undefined3)((uint)pbVar7 >> 8);
              bVar16 = (char)pbVar7 + 0x2aU & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar23)) + 0x1f);
              *pcVar11 = *pcVar11 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar23)) + 0x20);
              *pcVar11 = *pcVar11 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar23)) + 0x21);
              *pcVar11 = *pcVar11 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar23)) + 0x22);
              *pcVar11 = *pcVar11 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              bVar3 = bVar3 + (byte)uVar1 + *pcVar11;
              uVar19 = CONCAT22(uVar15,CONCAT11(bVar3,bVar18));
              cVar25 = cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11(cVar25,cVar23)) + 0x25);
              *pcVar11 = *pcVar11 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
              pcVar24 = (char *)CONCAT22(uVar26,CONCAT11(cVar25 + *(char *)(CONCAT22(uVar26,CONCAT11
                                                  (cVar25,cVar23)) + 0x26),cVar23));
              *pcVar11 = *pcVar11 + bVar16 + 0x2a;
              bVar16 = bVar16 + 0x54 & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              cVar25 = bVar16 + 0x2a;
              pcVar11 = (char *)CONCAT31(uVar14,cVar25);
              if ((POPCOUNT(cVar25) & 1U) == 0) {
                *pcVar11 = *pcVar11 + cVar25;
                pbVar7 = (byte *)(CONCAT31(uVar14,bVar16 + 0x4f) + -0x33282610);
                bVar16 = *pbVar7;
                bVar2 = (byte)pbVar7;
                *pbVar7 = *pbVar7 + bVar2;
                uVar14 = (undefined3)((uint)pbVar7 >> 8);
                if (!CARRY1(bVar16,bVar2)) {
                  if (!SCARRY1(bVar2,'\0')) {
                    *pbVar7 = *pbVar7 + bVar2;
                    uVar19 = CONCAT22(uVar15,CONCAT11(bVar3 | *param_2,bVar18));
                    bVar2 = bVar2 & *param_2;
                    *(char *)CONCAT31(uVar14,bVar2) = *(char *)CONCAT31(uVar14,bVar2) + bVar2;
                    pcVar11 = (char *)CONCAT31(uVar14,bVar2 + 0x2a);
                    goto code_r0x00403058;
                  }
                  pcVar11 = (char *)CONCAT31(uVar14,bVar2 + *pcVar24);
                  if (SCARRY1(bVar2,*pcVar24) != (char)(bVar2 + *pcVar24) < '\0')
                  goto code_r0x00403072;
                  goto code_r0x0040309a;
                }
                bVar16 = bVar2 + *pcVar24;
                pbVar7 = (byte *)CONCAT31(uVar14,bVar16);
                if (SCARRY1(bVar2,*pcVar24) == (char)bVar16 < '\0') {
                  pcVar11 = (char *)CONCAT22(uVar15,CONCAT11(bVar3 | *param_2,bVar18));
                  *pcVar24 = *pcVar24 + cVar17;
                  *param_2 = *param_2 ^ bVar16;
                  *(char *)((int)pbVar7 * 2) = *(char *)((int)pbVar7 * 2) + bVar16;
                  goto code_r0x004030df;
                }
              }
              else {
code_r0x00403058:
                *pcVar11 = *pcVar11 + (char)pcVar11;
                uVar14 = (undefined3)((uint)pcVar11 >> 8);
                bVar16 = (char)pcVar11 + 0x2aU & *param_2;
                *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
                pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x2a);
                *pcVar11 = *pcVar11 + bVar16 + 0x2a;
                pcVar11 = (char *)CONCAT31(uVar14,bVar16 + 0x54 & *param_2);
code_r0x00403072:
                cVar25 = (char)pcVar11;
                *pcVar11 = *pcVar11 + cVar25;
                uVar14 = (undefined3)((uint)pcVar11 >> 8);
                pcVar11 = (char *)CONCAT31(uVar14,cVar25 + '*');
                *pcVar11 = *pcVar11 + cVar25 + '*';
                bVar16 = cVar25 + 0x54U & *param_2;
                *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
                pcStack_50 = (char *)CONCAT22(pcStack_50._2_2_,unaff_retaddr);
                uVar19 = CONCAT22((short)((uint)uVar19 >> 0x10),
                                  CONCAT11((char)((uint)uVar19 >> 8) +
                                           *(char *)CONCAT31(uVar14,bVar16 + 0x2a),(char)uVar19));
                pbVar13[0x20a0008] = pbVar13[0x20a0008] - cVar17;
                pcVar11 = pcStack_50;
code_r0x0040309a:
                cVar25 = (char)pcVar11;
                *pcVar11 = *pcVar11 + cVar25;
                pcStack_50 = (char *)CONCAT22(pcStack_50._2_2_,in_ES);
                *pcVar11 = *pcVar11 + cVar25;
                pbVar7 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar25 + 0x2aU & *param_2);
              }
              cVar25 = (char)pbVar7;
              *pbVar7 = *pbVar7 + cVar25;
              uVar14 = (undefined3)((uint)pbVar7 >> 8);
              cVar23 = cVar25 + '*';
              pcVar11 = (char *)CONCAT31(uVar14,cVar23);
              pbVar13[0x20a0008] = pbVar13[0x20a0008] - cVar17;
              *pcVar11 = *pcVar11 + cVar23;
              cVar21 = (char)pcStack_50 - *pbVar6;
              pcVar24 = (char *)CONCAT22((short)((uint)pcStack_50 >> 0x10),
                                         CONCAT11((char)((uint)pcStack_50 >> 8) +
                                                  *(char *)(CONCAT31((int3)((uint)pcStack_50 >> 8),
                                                                     cVar21) + 0x34),cVar21));
              *pcVar11 = *pcVar11 + cVar23;
              bVar16 = cVar25 + 0x54U & *param_2;
              *(char *)CONCAT31(uVar14,bVar16) = *(char *)CONCAT31(uVar14,bVar16) + bVar16;
              pbVar13 = (byte *)CONCAT31(uVar14,bVar16 + 0x2a);
              bVar16 = (byte)((uint)uVar19 >> 8);
              pcVar11 = (char *)CONCAT22((short)((uint)uVar19 >> 0x10),
                                         CONCAT11(bVar16 + *pbVar13,(char)uVar19));
              pbVar13 = pbVar13 + (uint)CARRY1(bVar16,*pbVar13) + *(int *)pbVar13;
              *param_2 = *param_2 + (char)uVar19;
              uVar14 = (undefined3)((uint)pbVar13 >> 8);
              cVar25 = (byte)pbVar13 - *pbVar13;
              piVar5 = (int *)CONCAT31(uVar14,cVar25);
              pbVar6 = pbVar6 + (uint)((byte)pbVar13 < *pbVar13) + *piVar5;
              cVar25 = cVar25 + (char)*piVar5;
              pbVar7 = (byte *)CONCAT31(uVar14,cVar25);
              *pbVar7 = *pbVar7 + cVar25;
code_r0x004030df:
              *pcVar11 = *pcVar11 + cVar17;
              bVar16 = *pbVar7;
              bVar3 = (byte)pbVar7;
              *pbVar7 = *pbVar7 + bVar3;
              *(byte **)(pcVar24 + -0x41) =
                   pbVar6 + (uint)CARRY1(bVar16,bVar3) + *(int *)(pcVar24 + -0x41);
              *pbVar7 = *pbVar7 + bVar3;
              uVar14 = (undefined3)((uint)pbVar7 >> 8);
              bVar3 = bVar3 | *pbVar6;
              *(char *)CONCAT31(uVar14,bVar3) = *(char *)CONCAT31(uVar14,bVar3) + bVar3;
              pcVar11 = (char *)CONCAT31(uVar14,bVar3 + 0x7b);
              *pcVar11 = *pcVar11 + bVar3 + 0x7b;
              pbVar6[CONCAT31(uVar14,bVar3 - 8) + -1] =
                   pbVar6[CONCAT31(uVar14,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            pbVar13 = pbVar13 + 0xc;
            out(*(undefined4 *)pbVar6,uVar22);
            uVar1 = unaff_EBP + 1;
            uStack_18 = unaff_EBP;
          }
          bVar16 = cVar23 - (bVar16 < *pbVar13);
          pbVar7 = pbVar13 + (int)puVar28 * 2;
          bVar29 = CARRY1(*pbVar7,bVar16);
          *pbVar7 = *pbVar7 + bVar16;
code_r0x00402ef9:
          puVar10 = (uint *)CONCAT31(uVar14,bVar16 - bVar29);
          pcVar11 = (char *)((int)puVar28 + unaff_EBP * 2);
          *pcVar11 = *pcVar11 + (bVar16 - bVar29);
        }
      } while( true );
    }
    uVar15 = (undefined2)((uint)in_EAX >> 0x10);
    bVar16 = (byte)((uint)in_EAX >> 8) | param_2[0x2170411];
    in_EAX = (byte *)CONCAT22(uVar15,CONCAT11(bVar16,bVar2));
    pbVar13 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)param_2);
    *in_EAX = bVar2;
    *param_2 = *param_2 + bVar4;
    bRam06180411 = bVar2;
    *in_EAX = *in_EAX - cVar25;
    *in_EAX = *in_EAX + bVar2;
    uVar22 = (undefined2)((uint)param_1 >> 0x10);
    bVar3 = (byte)((uint)param_1 >> 8) | bRam052b0603;
    param_1 = (char *)CONCAT22(uVar22,CONCAT11(bVar3,bVar4));
    if ('\0' < (char)bVar3) {
      *in_EAX = *in_EAX + bVar2;
      piVar5 = (int *)CONCAT22(uVar15,CONCAT11(bVar16 | param_2[0x7190411],bVar2));
      bRam89280411 = bVar2;
      *(byte *)piVar5 = (char)*piVar5 + bVar2;
      param_1 = (char *)CONCAT22(uVar22,CONCAT11(bVar3 | *param_2,bVar4));
      pbVar13 = pbVar13 + *piVar5;
      pbVar7 = (byte *)((int)piVar5 + *piVar5);
      bVar3 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar3;
      *pbVar13 = *pbVar13 + bVar4;
      bVar16 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar3;
      *(uint *)pbVar7 = *(int *)pbVar7 + unaff_EBP + (uint)CARRY1(bVar16,bVar3);
      piVar5 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),*pbVar7);
      *param_2 = *param_2 + bVar4;
      pbVar6 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *param_2);
      pbVar7 = pbVar6 + -0x43;
      *pbVar7 = *pbVar7 + (char)((uint)param_2 >> 8);
      param_2 = pbVar6;
      goto code_r0x00402e42;
    }
code_r0x00402e36:
    *param_1 = *param_1 + (char)param_2;
    unaff_ESI = pbVar13;
    unaff_retaddr = uVar26;
  } while( true );
code_r0x00402e7e:
  *pcVar11 = *pcVar11 + bVar4;
  uVar26 = in_ES;
  goto code_r0x00402e6e;
}


