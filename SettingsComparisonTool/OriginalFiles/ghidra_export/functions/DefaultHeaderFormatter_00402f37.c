/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402f37
 * Raw Name    : DefaultHeaderFormatter
 * Demangled   : DefaultHeaderFormatter
 * Prototype   : char * DefaultHeaderFormatter(undefined4 arg, byte * param_2, undefined4 param_3, uint * param_4)
 * Local Vars  : param_2, param_3, param_4, pcStack_38, uVar1, cVar2, bVar3, in_EAX, piVar4, iVar5, pbVar6, pcVar7, piVar8, puVar9, pbVar10, pcVar11, arg, uVar12, uVar13, bVar14, uVar15, bVar16, cVar17, bVar18, uVar19, cVar20, cVar21, unaff_EBX, bVar22, bVar23, unaff_EBP, unaff_ESI, pbVar24, unaff_EDI, in_ES, in_SS, in_DS, bVar25, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall
DefaultHeaderFormatter(undefined4 arg,byte *param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar13;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  undefined3 uVar12;
  uint *in_EAX;
  char *pcVar7;
  int *piVar8;
  uint *puVar9;
  byte *pbVar10;
  char *pcVar11;
  byte bVar14;
  byte bVar16;
  undefined2 uVar19;
  char cVar17;
  byte bVar18;
  undefined4 uVar15;
  char cVar20;
  char cVar21;
  byte bVar22;
  byte bVar23;
  byte *unaff_EBX;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar24;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar25;
  uint unaff_retaddr;
  char *pcStack_38;
  
code_r0x00402f37:
                    /* .NET CLR Managed Code */
  pcVar11 = (char *)CONCAT22((short)((uint)arg >> 0x10),
                             CONCAT11((char)((uint)arg >> 8) + *param_2,(char)arg));
  *(byte *)in_EAX = (byte)*in_EAX + (char)in_EAX;
code_r0x00402f3b:
  cVar20 = (char)param_2;
  *unaff_EBX = *unaff_EBX + cVar20;
  bVar23 = (byte)in_EAX;
  *(byte *)((int)in_EAX * 2) = *(byte *)((int)in_EAX * 2) ^ bVar23;
  *(byte *)in_EAX = (byte)*in_EAX + bVar23;
  *(byte *)in_EAX = (byte)*in_EAX + cVar20;
  uVar1 = *in_EAX;
  *(byte *)in_EAX = (byte)*in_EAX + bVar23;
  *(byte **)param_2 = (byte *)((int)in_EAX + (uint)CARRY1((byte)uVar1,bVar23) + *(int *)param_2);
  pcVar7 = (char *)((uint)in_EAX | *unaff_EDI);
  unaff_EBP = unaff_EBP + 1;
  uVar12 = (undefined3)((uint)pcVar7 >> 8);
  cVar2 = (char)pcVar7 + *pcVar7;
  pcVar7 = (char *)CONCAT31(uVar12,cVar2);
  *pcVar7 = *pcVar7 + cVar2;
  cVar2 = cVar2 + *pcVar7;
  piVar4 = (int *)CONCAT31(uVar12,cVar2);
  *(char *)piVar4 = (char)*piVar4 + cVar2;
  iVar5 = LocalDescriptorTableRegister();
  *piVar4 = iVar5;
  bVar23 = *unaff_EBX;
  bVar16 = (byte)((uint)pcVar11 >> 8);
  *unaff_EBX = *unaff_EBX + bVar16;
  iVar5 = *piVar4;
  uVar13 = (undefined2)((uint)pcVar11 >> 0x10);
  bVar14 = (byte)pcVar11;
  *unaff_ESI = *unaff_ESI + cVar2;
  pbVar10 = unaff_ESI + 4;
  out(*(undefined4 *)unaff_ESI,(short)param_2);
  *pbVar10 = *pbVar10 + cVar2;
  bVar18 = *unaff_EBX;
  bVar22 = (byte)((uint)unaff_EBX >> 8);
  *param_2 = *param_2 - bVar22;
  *pbVar10 = *pbVar10 + cVar2;
  pbVar24 = unaff_ESI + 8;
  out(*(undefined4 *)pbVar10,(short)param_2);
  *pbVar24 = *pbVar24 + cVar2;
  bVar3 = *unaff_EBX;
  *(uint *)(param_2 + -0x23) = *(uint *)(param_2 + -0x23) & (uint)pbVar24;
  piVar8 = (int *)((int)piVar4 + *piVar4);
  if (!SCARRY4((int)piVar4,*piVar4)) {
    *(undefined2 *)piVar8 = in_SS;
  }
  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
  uVar19 = CONCAT11((char)((uint)param_2 >> 8) + param_2[-0x15],cVar20);
  param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar19);
  puVar9 = (uint *)((int)piVar8 + *piVar8);
  if (!SCARRY4((int)piVar8,*piVar8)) {
    *(undefined2 *)puVar9 = in_SS;
  }
  cVar2 = (char)puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + cVar2;
  cVar17 = ((bVar16 - (char)iVar5) - CARRY1(bVar23,bVar16) | bVar18 | bVar3) + (byte)*puVar9;
  pcVar11 = (char *)CONCAT22(uVar13,CONCAT11(cVar17,bVar14));
  bVar23 = *param_2;
  *param_2 = *param_2 + bVar14;
  cVar21 = (char)unaff_EBX;
  if (!CARRY1(bVar23,bVar14)) {
    unaff_ESI = unaff_ESI + 0xc;
    out(*(undefined4 *)pbVar24,uVar19);
    do {
      *puVar9 = unaff_retaddr;
      cVar2 = (char)pcVar11;
      *param_2 = *param_2 + cVar2;
      unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
      bVar23 = (byte)((uint)param_2 >> 8);
      param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11(bVar23 - *unaff_ESI,(char)param_2));
      if (bVar23 >= *unaff_ESI) {
        bVar25 = CARRY4((uint)puVar9,*puVar9);
        in_EAX = (uint *)((int)puVar9 + *puVar9);
        if (!SCARRY4((int)puVar9,*puVar9)) {
          bVar25 = CARRY4(unaff_EBP,*in_EAX);
          unaff_EBP = unaff_EBP + *in_EAX;
        }
        *in_EAX = (*in_EAX - (int)in_EAX) - (uint)bVar25;
        *param_2 = *param_2 + cVar2;
        arg = CONCAT31((int3)((uint)pcVar11 >> 8),cVar2 - *param_2);
        goto code_r0x00402f37;
      }
      uVar12 = (undefined3)((uint)puVar9 >> 8);
      bVar23 = (char)puVar9 - (bVar23 < *unaff_ESI);
      pbVar10 = unaff_ESI + (int)unaff_EDI * 2;
      bVar25 = CARRY1(*pbVar10,bVar23);
      *pbVar10 = *pbVar10 + bVar23;
code_r0x00402ef9:
      bVar23 = bVar23 - bVar25;
      puVar9 = (uint *)CONCAT31(uVar12,bVar23);
      pcVar7 = (char *)((int)unaff_EDI + unaff_EBP * 2);
      *pcVar7 = *pcVar7 + bVar23;
      *puVar9 = unaff_retaddr;
      bVar18 = *param_2;
      *param_2 = *param_2 + (byte)pcVar11;
      *(uint *)(unaff_ESI + 0x1d) =
           (*(int *)(unaff_ESI + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar18,(byte)pcVar11);
      *(byte *)puVar9 = (char)*puVar9 + bVar23;
      bVar18 = bVar23 + 0x2d;
      pbVar24 = (byte *)CONCAT31(uVar12,bVar18);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           param_2 + (uint)(0xd2 < bVar23) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
      bVar23 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar18;
      pbVar10 = unaff_ESI;
      if (!CARRY1(bVar23,bVar18)) {
        while( true ) {
          bVar23 = *pbVar10;
          bVar18 = (byte)pbVar24;
          *pbVar10 = *pbVar10 + bVar18;
          if (!CARRY1(bVar23,bVar18)) break;
          *pbVar24 = *pbVar24 + bVar18;
          bVar18 = bVar18 | pbVar24[0x400001a];
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar18);
          unaff_ESI = pbVar10;
          if ((char)bVar18 < '\x01') goto code_r0x00402ecc;
          *pbVar24 = *pbVar24 + bVar18;
          pbVar6 = pbVar24;
          do {
            uVar12 = (undefined3)((uint)pbVar6 >> 8);
            bVar18 = (char)pbVar6 + 0x6f;
            puVar9 = (uint *)CONCAT31(uVar12,bVar18);
            *puVar9 = unaff_retaddr;
            bVar23 = *param_2;
            *param_2 = *param_2 + (char)pcVar11;
            uVar13 = (undefined2)(unaff_retaddr >> 0x10);
            unaff_retaddr = CONCAT22(uVar13,in_ES);
            in_SS = in_ES;
            if (*param_2 == 0 || SCARRY1(bVar23,(char)pcVar11) != (char)*param_2 < '\0') {
              unaff_ESI = pbVar10 + 4;
              out(*(undefined4 *)pbVar10,(short)param_2);
code_r0x00402ed6:
              cVar2 = (char)puVar9;
              *(char *)puVar9 = (char)*puVar9 + cVar2;
              uVar12 = (undefined3)((uint)puVar9 >> 8);
              bVar18 = cVar2 + 0x6f;
              pcVar7 = (char *)CONCAT31(uVar12,bVar18);
              *(undefined4 *)pcVar7 = param_3;
              bVar23 = *param_2;
              *param_2 = *param_2 + (byte)pcVar11;
              param_3 = CONCAT22(param_3._2_2_,in_ES);
              unaff_ESI[0x1c] = (unaff_ESI[0x1c] - bVar22) - CARRY1(bVar23,(byte)pcVar11);
              *pcVar7 = *pcVar7 + bVar18;
              bVar23 = cVar2 + 0x9c;
              pbVar24 = (byte *)CONCAT31(uVar12,bVar23);
              *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
                   param_2 + (uint)(0xd2 < bVar18) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
              unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
              bVar18 = *unaff_ESI;
              *unaff_ESI = *unaff_ESI + bVar23;
              if (CARRY1(bVar18,bVar23)) {
                *pbVar24 = *pbVar24 + bVar23;
                bVar23 = bVar23 | pbVar24[0x400001c];
                pbVar24 = (byte *)CONCAT31(uVar12,bVar23);
                if ((char)bVar23 < '\x01') goto code_r0x00402f16;
                *pbVar24 = *pbVar24 + bVar23;
                bVar25 = 0x90 < bVar23;
                bVar23 = bVar23 + 0x6f;
                goto code_r0x00402ef9;
              }
              *pbVar24 = *pbVar24 + bVar23;
              pbVar10 = unaff_ESI;
            }
            else {
              *(byte *)puVar9 = (char)*puVar9 + bVar18;
              bVar3 = (char)pbVar6 + 0x9c;
              pbVar24 = (byte *)CONCAT31(uVar12,bVar3);
              *(byte **)(pbVar10 + (int)unaff_EDI * 8) =
                   param_2 + (uint)(0xd2 < bVar18) + *(int *)(pbVar10 + (int)unaff_EDI * 8);
              unaff_retaddr = CONCAT22(uVar13,in_ES);
              bVar23 = *pbVar10;
              *pbVar10 = *pbVar10 + bVar3;
              unaff_ESI = pbVar10;
              puVar9 = unaff_EDI;
              if (CARRY1(bVar23,bVar3)) {
code_r0x00402ecc:
                *pbVar24 = *pbVar24 + (byte)pbVar24;
                uVar12 = (undefined3)((uint)pbVar24 >> 8);
                bVar23 = (byte)pbVar24 | pbVar24[0x400001b];
                puVar9 = (uint *)CONCAT31(uVar12,bVar23);
                if ('\0' < (char)bVar23) goto code_r0x00402ed6;
                bVar18 = *param_2;
                *param_2 = *param_2 + (byte)pcVar11;
                *(char *)((int)puVar9 * 2) =
                     *(char *)((int)puVar9 * 2) - CARRY1(bVar18,(byte)pcVar11);
                bVar25 = 0x81 < bVar23;
                bVar23 = bVar23 + 0x7e;
                goto code_r0x00402ef9;
              }
code_r0x00402e5a:
              *pbVar24 = *pbVar24 + (char)pbVar24;
              pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                         CONCAT11((byte)((uint)pcVar11 >> 8) | *param_2,
                                                  (char)pcVar11));
              pbVar24 = pbVar10 + 4;
              out(*(undefined4 *)pbVar10,(short)param_2);
              pbVar6 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*puVar9);
              pbVar10 = pbVar10 + 8;
              out(*(undefined4 *)pbVar24,(short)pbVar6);
              unaff_EDI = puVar9;
code_r0x00402e6e:
              uVar12 = (undefined3)((uint)pbVar6 >> 8);
              cVar2 = (char)pbVar6 + (char)*unaff_EDI;
              pbVar24 = pbVar10 + 4;
              out(*(undefined4 *)pbVar10,(short)CONCAT31(uVar12,cVar2));
              param_2 = (byte *)CONCAT31(uVar12,cVar2 + (char)*unaff_EDI);
              pbVar10 = pbVar10 + 8;
              out(*(undefined4 *)pbVar24,(short)param_2);
              pbVar24 = (byte *)0x0;
            }
            param_4 = (uint *)CONCAT22(param_4._2_2_,in_ES);
code_r0x00402e81:
            bVar18 = (char)pbVar24 - *pbVar24;
            iVar5 = CONCAT31((int3)((uint)pbVar24 >> 8),bVar18);
            *unaff_EBX = *unaff_EBX + (char)param_2;
            pbVar6 = (byte *)(iVar5 * 2);
            *pbVar6 = *pbVar6 ^ bVar18;
            pbVar6 = (byte *)(int)(short)iVar5;
            *pbVar6 = *pbVar6 + bVar18;
            *(byte *)unaff_EDI = (char)*unaff_EDI + (byte)pcVar11;
            bVar23 = *pbVar6;
            *pbVar6 = *pbVar6 + bVar18;
            *(byte **)(unaff_EBX + -0x73) =
                 pbVar10 + (uint)CARRY1(bVar23,bVar18) + *(int *)(unaff_EBX + -0x73);
            *pbVar6 = *pbVar6 + bVar18;
            bVar23 = (byte)pcVar11 | *param_2;
            pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar23);
            param_3 = CONCAT22(param_3._2_2_,in_ES);
            unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_SS);
          } while ((char)bVar23 < '\x01');
          *pbVar6 = *pbVar6 + bVar18;
          pbVar24 = (byte *)CONCAT31((int3)(char)((uint)pbVar24 >> 8),bVar18 + 0x2d);
          *(byte **)(pbVar10 + (int)unaff_EDI * 8) =
               param_2 + (uint)(0xd2 < bVar18) + *(int *)(pbVar10 + (int)unaff_EDI * 8);
        }
        goto code_r0x00402e36;
      }
      *pbVar24 = *pbVar24 + bVar18;
code_r0x00402f16:
      uVar12 = (undefined3)((uint)pbVar24 >> 8);
      bVar23 = (byte)pbVar24 | pbVar24[0x400001d];
      in_EAX = (uint *)CONCAT31(uVar12,bVar23);
      if ((char)bVar23 < '\x01') goto code_r0x00402f3b;
      *(byte *)in_EAX = (byte)*in_EAX + bVar23;
      puVar9 = (uint *)CONCAT31(uVar12,bVar23 + 0x6f);
    } while( true );
  }
  *(byte *)puVar9 = (byte)*puVar9 + cVar2;
  bVar23 = param_2[6];
  uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
  *param_2 = *param_2 + bVar14;
  bVar18 = (cVar17 - *pbVar24) + cRam14730307;
  *(byte *)puVar9 = (byte)*puVar9 + cVar2;
  bVar23 = bVar22 | bVar23 | param_2[0x2a];
  uVar1 = *puVar9;
  pbVar10 = (byte *)((int)puVar9 + (uint)CARRY1(bVar18,(byte)*puVar9) + *puVar9);
  *param_2 = *param_2 + bVar14;
  cVar2 = cVar21 - *pbVar24;
  cVar17 = bVar23 + *(char *)(CONCAT31((int3)(CONCAT22(uVar19,CONCAT11(bVar23,cVar21)) >> 8),cVar2)
                             + 0x1e);
  *pbVar10 = *pbVar10 + (char)pbVar10;
  uVar12 = (undefined3)((uint)pbVar10 >> 8);
  bVar23 = (char)pbVar10 + 0x2aU & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x2a);
  cVar17 = cVar17 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar17,cVar2)) + 0x1f);
  *pcVar11 = *pcVar11 + bVar23 + 0x2a;
  bVar23 = bVar23 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x2a);
  cVar17 = cVar17 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar17,cVar2)) + 0x20);
  *pcVar11 = *pcVar11 + bVar23 + 0x2a;
  bVar23 = bVar23 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x2a);
  cVar17 = cVar17 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar17,cVar2)) + 0x21);
  *pcVar11 = *pcVar11 + bVar23 + 0x2a;
  bVar23 = bVar23 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x2a);
  cVar17 = cVar17 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar17,cVar2)) + 0x22);
  *pcVar11 = *pcVar11 + bVar23 + 0x2a;
  bVar23 = bVar23 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x2a);
  bVar18 = bVar18 + (byte)uVar1 + *pcVar11;
  uVar15 = CONCAT22(uVar13,CONCAT11(bVar18,bVar14));
  cVar17 = cVar17 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar17,cVar2)) + 0x25);
  *pcVar11 = *pcVar11 + bVar23 + 0x2a;
  bVar23 = bVar23 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x2a);
  pcVar7 = (char *)CONCAT22(uVar19,CONCAT11(cVar17 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar17,cVar2
                                                                                       )) + 0x26),
                                            cVar2));
  *pcVar11 = *pcVar11 + bVar23 + 0x2a;
  bVar23 = bVar23 + 0x54 & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  cVar2 = bVar23 + 0x2a;
  pcVar11 = (char *)CONCAT31(uVar12,cVar2);
  if ((POPCOUNT(cVar2) & 1U) == 0) {
    *pcVar11 = *pcVar11 + cVar2;
    pbVar10 = (byte *)(CONCAT31(uVar12,bVar23 + 0x4f) + -0x33282610);
    bVar23 = *pbVar10;
    bVar3 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar3;
    uVar12 = (undefined3)((uint)pbVar10 >> 8);
    if (!CARRY1(bVar23,bVar3)) {
      if (!SCARRY1(bVar3,'\0')) {
        *pbVar10 = *pbVar10 + bVar3;
        uVar15 = CONCAT22(uVar13,CONCAT11(bVar18 | *param_2,bVar14));
        bVar3 = bVar3 & *param_2;
        *(char *)CONCAT31(uVar12,bVar3) = *(char *)CONCAT31(uVar12,bVar3) + bVar3;
        pcVar11 = (char *)CONCAT31(uVar12,bVar3 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar11 = (char *)CONCAT31(uVar12,bVar3 + *pcVar7);
      if (SCARRY1(bVar3,*pcVar7) != (char)(bVar3 + *pcVar7) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar23 = bVar3 + *pcVar7;
    pbVar10 = (byte *)CONCAT31(uVar12,bVar23);
    if (SCARRY1(bVar3,*pcVar7) == (char)bVar23 < '\0') {
      pcVar11 = (char *)CONCAT22(uVar13,CONCAT11(bVar18 | *param_2,bVar14));
      *pcVar7 = *pcVar7 + cVar20;
      *param_2 = *param_2 ^ bVar23;
      *(char *)((int)pbVar10 * 2) = *(char *)((int)pbVar10 * 2) + bVar23;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar11 = *pcVar11 + (char)pcVar11;
    uVar12 = (undefined3)((uint)pcVar11 >> 8);
    bVar23 = (char)pcVar11 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
    pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x2a);
    *pcVar11 = *pcVar11 + bVar23 + 0x2a;
    pcVar11 = (char *)CONCAT31(uVar12,bVar23 + 0x54 & *param_2);
code_r0x00403072:
    cVar2 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar2;
    uVar12 = (undefined3)((uint)pcVar11 >> 8);
    pcVar11 = (char *)CONCAT31(uVar12,cVar2 + '*');
    *pcVar11 = *pcVar11 + cVar2 + '*';
    bVar23 = cVar2 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
    pcStack_38 = (char *)CONCAT22(pcStack_38._2_2_,in_DS);
    uVar15 = CONCAT22((short)((uint)uVar15 >> 0x10),
                      CONCAT11((char)((uint)uVar15 >> 8) + *(char *)CONCAT31(uVar12,bVar23 + 0x2a),
                               (char)uVar15));
    unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar20;
    pcVar11 = pcStack_38;
code_r0x0040309a:
    cVar2 = (char)pcVar11;
    *pcVar11 = *pcVar11 + cVar2;
    pcStack_38 = (char *)CONCAT22(pcStack_38._2_2_,in_ES);
    *pcVar11 = *pcVar11 + cVar2;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar2 + 0x2aU & *param_2);
  }
  cVar2 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar2;
  uVar12 = (undefined3)((uint)pbVar10 >> 8);
  cVar17 = cVar2 + '*';
  pcVar11 = (char *)CONCAT31(uVar12,cVar17);
  unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar20;
  *pcVar11 = *pcVar11 + cVar17;
  cVar21 = (char)pcStack_38 - *pbVar24;
  pcVar7 = (char *)CONCAT22((short)((uint)pcStack_38 >> 0x10),
                            CONCAT11((char)((uint)pcStack_38 >> 8) +
                                     *(char *)(CONCAT31((int3)((uint)pcStack_38 >> 8),cVar21) + 0x34
                                              ),cVar21));
  *pcVar11 = *pcVar11 + cVar17;
  bVar23 = cVar2 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar12,bVar23) = *(char *)CONCAT31(uVar12,bVar23) + bVar23;
  pbVar10 = (byte *)CONCAT31(uVar12,bVar23 + 0x2a);
  bVar23 = (byte)((uint)uVar15 >> 8);
  pcVar11 = (char *)CONCAT22((short)((uint)uVar15 >> 0x10),CONCAT11(bVar23 + *pbVar10,(char)uVar15))
  ;
  pbVar10 = pbVar10 + (uint)CARRY1(bVar23,*pbVar10) + *(int *)pbVar10;
  *param_2 = *param_2 + (char)uVar15;
  uVar12 = (undefined3)((uint)pbVar10 >> 8);
  cVar2 = (byte)pbVar10 - *pbVar10;
  piVar4 = (int *)CONCAT31(uVar12,cVar2);
  pbVar24 = pbVar24 + (uint)((byte)pbVar10 < *pbVar10) + *piVar4;
  cVar2 = cVar2 + (char)*piVar4;
  pbVar10 = (byte *)CONCAT31(uVar12,cVar2);
  *pbVar10 = *pbVar10 + cVar2;
code_r0x004030df:
  *pcVar11 = *pcVar11 + cVar20;
  bVar23 = *pbVar10;
  bVar18 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar18;
  *(byte **)(pcVar7 + -0x41) = pbVar24 + (uint)CARRY1(bVar23,bVar18) + *(int *)(pcVar7 + -0x41);
  *pbVar10 = *pbVar10 + bVar18;
  uVar12 = (undefined3)((uint)pbVar10 >> 8);
  bVar18 = bVar18 | *pbVar24;
  *(char *)CONCAT31(uVar12,bVar18) = *(char *)CONCAT31(uVar12,bVar18) + bVar18;
  pcVar11 = (char *)CONCAT31(uVar12,bVar18 + 0x7b);
  *pcVar11 = *pcVar11 + bVar18 + 0x7b;
  pbVar24[CONCAT31(uVar12,bVar18 - 8) + -1] =
       pbVar24[CONCAT31(uVar12,bVar18 - 8) + -1] + (bVar18 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
  while( true ) {
    uVar13 = (undefined2)((uint)pbVar24 >> 0x10);
    bVar23 = (byte)((uint)pbVar24 >> 8) | param_2[0x2170411];
    pbVar24 = (byte *)CONCAT22(uVar13,CONCAT11(bVar23,bVar3));
    pbVar6 = pbVar10 + 4;
    out(*(undefined4 *)pbVar10,(short)param_2);
    *pbVar24 = bVar3;
    *param_2 = *param_2 + bVar14;
    bRam06180411 = bVar3;
    *pbVar24 = *pbVar24 - cVar21;
    *pbVar24 = *pbVar24 + bVar3;
    uVar19 = (undefined2)((uint)pcVar11 >> 0x10);
    bVar18 = (byte)((uint)pcVar11 >> 8) | bRam052b0603;
    pcVar11 = (char *)CONCAT22(uVar19,CONCAT11(bVar18,bVar14));
    pbVar10 = pbVar6;
    if ('\0' < (char)bVar18) break;
code_r0x00402e36:
    *pcVar11 = *pcVar11 + (byte)param_2;
    pbVar6 = param_2 + 0xa0a0000;
    bVar23 = *pbVar6;
    bVar14 = (byte)pcVar11;
    *pbVar6 = *pbVar6 - bVar14;
    bVar18 = (byte)pbVar24 + *pbVar24;
    bVar3 = bVar18 + (bVar23 < bVar14);
    piVar4 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar3);
    pbVar6 = param_2;
    if (!CARRY1((byte)pbVar24,*pbVar24) && !CARRY1(bVar18,bVar23 < bVar14)) goto code_r0x00402e42;
  }
  *pbVar24 = *pbVar24 + bVar3;
  piVar4 = (int *)CONCAT22(uVar13,CONCAT11(bVar23 | param_2[0x7190411],bVar3));
  bRam89280411 = bVar3;
  *(byte *)piVar4 = (char)*piVar4 + bVar3;
  pcVar11 = (char *)CONCAT22(uVar19,CONCAT11(bVar18 | *param_2,bVar14));
  pbVar10 = pbVar6 + *piVar4;
  pbVar24 = (byte *)((int)piVar4 + *piVar4);
  bVar18 = (byte)pbVar24;
  *pbVar24 = *pbVar24 + bVar18;
  *pbVar10 = *pbVar10 + bVar14;
  bVar23 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar18;
  *(uint *)pbVar24 = *(int *)pbVar24 + unaff_EBP + (uint)CARRY1(bVar23,bVar18);
  piVar4 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),*pbVar24);
  *param_2 = *param_2 + bVar14;
  pbVar6 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),(byte)param_2 | *param_2);
  pbVar6[-0x43] = pbVar6[-0x43] + (char)((uint)param_2 >> 8);
code_r0x00402e42:
  if (SCARRY4((int)piVar4,*piVar4)) goto code_r0x00402e6e;
  iVar5 = *(int *)((int)piVar4 + *piVar4);
  *pbVar6 = *pbVar6 + (char)pcVar11;
  in_DS = (undefined2)unaff_retaddr;
  piVar4 = (int *)(iVar5 + -0x8c6f);
  param_2 = (byte *)CONCAT22((short)((uint)pbVar6 >> 0x10),
                             CONCAT11((byte)((uint)pbVar6 >> 8) | pbVar6[-0x3f],(char)pbVar6));
  pbVar24 = (byte *)((int)piVar4 + *piVar4);
  puVar9 = param_4;
  if (SCARRY4((int)piVar4,*piVar4)) goto code_r0x00402e81;
  goto code_r0x00402e5a;
}


