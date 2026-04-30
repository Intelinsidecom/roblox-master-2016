/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402f29
 * Raw Name    : DefaultOptionsFormatter
 * Demangled   : DefaultOptionsFormatter
 * Prototype   : char * DefaultOptionsFormatter(char * option, byte * value, undefined4 param_3)
 * Local Vars  : option, param_3, value, pcStack_38, uStack_10, puStack_4, uVar1, bVar2, cVar3, in_EAX, piVar4, iVar5, pbVar6, puVar7, pcVar8, piVar9, pbVar10, uVar11, uVar12, bVar13, uVar14, bVar15, cVar16, bVar17, bVar18, uVar19, cVar20, unaff_EBX, pcVar21, bVar22, cVar23, unaff_EBP, unaff_ESI, pbVar24, unaff_EDI, in_ES, in_SS, in_DS, in_CF, bVar25, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall DefaultOptionsFormatter(char *option,byte *value,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar12;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  undefined3 uVar11;
  uint *in_EAX;
  uint *puVar7;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  byte bVar13;
  byte bVar15;
  undefined2 uVar19;
  char cVar16;
  byte bVar17;
  undefined4 uVar14;
  char cVar20;
  byte bVar22;
  byte *unaff_EBX;
  char cVar23;
  char *pcVar21;
  uint *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar24;
  uint *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined1 in_CF;
  bool bVar25;
  uint unaff_retaddr;
  char *pcStack_38;
  undefined4 uStack_10;
  uint *puStack_4;
  byte bVar18;
  
  do {
    cVar23 = (char)unaff_EBX;
    bVar22 = (byte)((uint)unaff_EBX >> 8);
                    /* .NET CLR Managed Code */
    if ((bool)in_CF) {
      uVar11 = (undefined3)((uint)in_EAX >> 8);
      bVar18 = (char)in_EAX - in_CF;
      pbVar10 = unaff_ESI + (int)unaff_EDI * 2;
      bVar25 = CARRY1(*pbVar10,bVar18);
      *pbVar10 = *pbVar10 + bVar18;
code_r0x00402ef9:
      bVar18 = bVar18 - bVar25;
      puVar7 = (uint *)CONCAT31(uVar11,bVar18);
      pcVar8 = (char *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pcVar8 = *pcVar8 + bVar18;
      *puVar7 = unaff_retaddr;
      bVar17 = *value;
      *value = *value + (byte)option;
      *(uint *)(unaff_ESI + 0x1d) =
           (*(int *)(unaff_ESI + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar17,(byte)option);
      *(byte *)puVar7 = (char)*puVar7 + bVar18;
      bVar17 = bVar18 + 0x2d;
      pbVar24 = (byte *)CONCAT31(uVar11,bVar17);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           value + (uint)(0xd2 < bVar18) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
      bVar18 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar17;
      pbVar10 = unaff_ESI;
      if (!CARRY1(bVar18,bVar17)) {
        while( true ) {
          bVar18 = *pbVar10;
          bVar17 = (byte)pbVar24;
          *pbVar10 = *pbVar10 + bVar17;
          if (!CARRY1(bVar18,bVar17)) break;
          *pbVar24 = *pbVar24 + bVar17;
          bVar17 = bVar17 | pbVar24[0x400001a];
          pbVar24 = (byte *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar17);
          unaff_ESI = pbVar10;
          if ((char)bVar17 < '\x01') goto code_r0x00402ecc;
          *pbVar24 = *pbVar24 + bVar17;
          pbVar6 = pbVar24;
          do {
            uVar11 = (undefined3)((uint)pbVar6 >> 8);
            bVar17 = (char)pbVar6 + 0x6f;
            pcVar8 = (char *)CONCAT31(uVar11,bVar17);
            *(undefined4 *)pcVar8 = uStack_10;
            bVar18 = *value;
            *value = *value + (char)option;
            uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
            in_SS = in_ES;
            if (*value == 0 || SCARRY1(bVar18,(char)option) != (char)*value < '\0') {
              unaff_ESI = pbVar10 + 4;
              out(*(undefined4 *)pbVar10,(short)value);
code_r0x00402ed6:
              cVar3 = (char)pcVar8;
              *pcVar8 = *pcVar8 + cVar3;
              uVar11 = (undefined3)((uint)pcVar8 >> 8);
              bVar17 = cVar3 + 0x6f;
              pcVar8 = (char *)CONCAT31(uVar11,bVar17);
              *(undefined4 *)pcVar8 = param_3;
              bVar18 = *value;
              *value = *value + (byte)option;
              param_3 = CONCAT22(param_3._2_2_,in_ES);
              unaff_ESI[0x1c] = (unaff_ESI[0x1c] - bVar22) - CARRY1(bVar18,(byte)option);
              *pcVar8 = *pcVar8 + bVar17;
              bVar18 = cVar3 + 0x9c;
              pbVar24 = (byte *)CONCAT31(uVar11,bVar18);
              *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
                   value + (uint)(0xd2 < bVar17) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
              unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
              bVar17 = *unaff_ESI;
              *unaff_ESI = *unaff_ESI + bVar18;
              if (CARRY1(bVar17,bVar18)) {
                *pbVar24 = *pbVar24 + bVar18;
                bVar18 = bVar18 | pbVar24[0x400001c];
                pbVar24 = (byte *)CONCAT31(uVar11,bVar18);
                if ((char)bVar18 < '\x01') goto code_r0x00402f16;
                *pbVar24 = *pbVar24 + bVar18;
                bVar25 = 0x90 < bVar18;
                bVar18 = bVar18 + 0x6f;
                goto code_r0x00402ef9;
              }
              *pbVar24 = *pbVar24 + bVar18;
              pbVar10 = unaff_ESI;
            }
            else {
              *pcVar8 = *pcVar8 + bVar17;
              bVar2 = (char)pbVar6 + 0x9c;
              pbVar24 = (byte *)CONCAT31(uVar11,bVar2);
              *(byte **)(pbVar10 + (int)unaff_EDI * 8) =
                   value + (uint)(0xd2 < bVar17) + *(int *)(pbVar10 + (int)unaff_EDI * 8);
              uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
              bVar18 = *pbVar10;
              *pbVar10 = *pbVar10 + bVar2;
              unaff_ESI = pbVar10;
              puVar7 = unaff_EDI;
              if (CARRY1(bVar18,bVar2)) {
code_r0x00402ecc:
                *pbVar24 = *pbVar24 + (byte)pbVar24;
                uVar11 = (undefined3)((uint)pbVar24 >> 8);
                bVar18 = (byte)pbVar24 | pbVar24[0x400001b];
                pcVar8 = (char *)CONCAT31(uVar11,bVar18);
                if ('\0' < (char)bVar18) goto code_r0x00402ed6;
                bVar17 = *value;
                *value = *value + (byte)option;
                *(char *)((int)pcVar8 * 2) =
                     *(char *)((int)pcVar8 * 2) - CARRY1(bVar17,(byte)option);
                bVar25 = 0x81 < bVar18;
                bVar18 = bVar18 + 0x7e;
                goto code_r0x00402ef9;
              }
code_r0x00402e5a:
              *pbVar24 = *pbVar24 + (char)pbVar24;
              option = (char *)CONCAT22((short)((uint)option >> 0x10),
                                        CONCAT11((byte)((uint)option >> 8) | *value,(char)option));
              pbVar24 = pbVar10 + 4;
              out(*(undefined4 *)pbVar10,(short)value);
              pbVar6 = (byte *)CONCAT31((int3)((uint)value >> 8),(char)value + (char)*puVar7);
              pbVar10 = pbVar10 + 8;
              out(*(undefined4 *)pbVar24,(short)pbVar6);
              unaff_EDI = puVar7;
code_r0x00402e6e:
              uVar11 = (undefined3)((uint)pbVar6 >> 8);
              cVar3 = (char)pbVar6 + (char)*unaff_EDI;
              pbVar24 = pbVar10 + 4;
              out(*(undefined4 *)pbVar10,(short)CONCAT31(uVar11,cVar3));
              unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
              value = (byte *)CONCAT31(uVar11,cVar3 + (char)*unaff_EDI);
              pbVar10 = pbVar10 + 8;
              out(*(undefined4 *)pbVar24,(short)value);
              pbVar24 = (byte *)0x0;
            }
            puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
code_r0x00402e81:
            bVar17 = (char)pbVar24 - *pbVar24;
            iVar5 = CONCAT31((int3)((uint)pbVar24 >> 8),bVar17);
            *unaff_EBX = *unaff_EBX + (char)value;
            pbVar6 = (byte *)(iVar5 * 2);
            *pbVar6 = *pbVar6 ^ bVar17;
            pbVar6 = (byte *)(int)(short)iVar5;
            *pbVar6 = *pbVar6 + bVar17;
            *(byte *)unaff_EDI = (char)*unaff_EDI + (byte)option;
            bVar18 = *pbVar6;
            *pbVar6 = *pbVar6 + bVar17;
            *(byte **)(unaff_EBX + -0x73) =
                 pbVar10 + (uint)CARRY1(bVar18,bVar17) + *(int *)(unaff_EBX + -0x73);
            *pbVar6 = *pbVar6 + bVar17;
            bVar18 = (byte)option | *value;
            option = (char *)CONCAT31((int3)((uint)option >> 8),bVar18);
          } while ((char)bVar18 < '\x01');
          *pbVar6 = *pbVar6 + bVar17;
          pbVar24 = (byte *)CONCAT31((int3)(char)((uint)pbVar24 >> 8),bVar17 + 0x2d);
          *(byte **)(pbVar10 + (int)unaff_EDI * 8) =
               value + (uint)(0xd2 < bVar17) + *(int *)(pbVar10 + (int)unaff_EDI * 8);
          uStack_10 = CONCAT22(uStack_10._2_2_,in_ES);
        }
        break;
      }
      *pbVar24 = *pbVar24 + bVar17;
code_r0x00402f16:
      uVar11 = (undefined3)((uint)pbVar24 >> 8);
      bVar18 = (byte)pbVar24 | pbVar24[0x400001d];
      puVar7 = (uint *)CONCAT31(uVar11,bVar18);
      if ((char)bVar18 < '\x01') goto code_r0x00402f3b;
      *(byte *)puVar7 = (byte)*puVar7 + bVar18;
      in_EAX = (uint *)CONCAT31(uVar11,bVar18 + 0x6f);
      puVar7 = unaff_EBP;
    }
    else {
      bVar25 = CARRY4((uint)in_EAX,*in_EAX);
      puVar7 = (uint *)((int)in_EAX + *in_EAX);
      if (!SCARRY4((int)in_EAX,*in_EAX)) {
        bVar25 = CARRY4((uint)unaff_EBP,*puVar7);
        unaff_EBP = (uint *)((int)unaff_EBP + *puVar7);
      }
      *puVar7 = (*puVar7 - (int)puVar7) - (uint)bVar25;
      *value = *value + (char)option;
      option = (char *)CONCAT22((short)((uint)option >> 0x10),
                                CONCAT11((char)((uint)option >> 8) + *value,(char)option - *value));
      *(byte *)puVar7 = (byte)*puVar7 + (char)puVar7;
code_r0x00402f3b:
      cVar20 = (char)value;
      *unaff_EBX = *unaff_EBX + cVar20;
      bVar18 = (byte)puVar7;
      *(byte *)((int)puVar7 * 2) = *(byte *)((int)puVar7 * 2) ^ bVar18;
      *(byte *)puVar7 = (byte)*puVar7 + bVar18;
      *(byte *)puVar7 = (byte)*puVar7 + cVar20;
      uVar1 = *puVar7;
      *(byte *)puVar7 = (byte)*puVar7 + bVar18;
      *(byte **)value = (byte *)((int)puVar7 + (uint)CARRY1((byte)uVar1,bVar18) + *(int *)value);
      pcVar8 = (char *)((uint)puVar7 | *unaff_EDI);
      uVar11 = (undefined3)((uint)pcVar8 >> 8);
      cVar3 = (char)pcVar8 + *pcVar8;
      pcVar8 = (char *)CONCAT31(uVar11,cVar3);
      *pcVar8 = *pcVar8 + cVar3;
      cVar3 = cVar3 + *pcVar8;
      piVar4 = (int *)CONCAT31(uVar11,cVar3);
      *(char *)piVar4 = (char)*piVar4 + cVar3;
      iVar5 = LocalDescriptorTableRegister();
      *piVar4 = iVar5;
      bVar18 = *unaff_EBX;
      bVar15 = (byte)((uint)option >> 8);
      *unaff_EBX = *unaff_EBX + bVar15;
      iVar5 = *piVar4;
      uVar12 = (undefined2)((uint)option >> 0x10);
      bVar13 = (byte)option;
      *unaff_ESI = *unaff_ESI + cVar3;
      pbVar10 = unaff_ESI + 4;
      out(*(undefined4 *)unaff_ESI,(short)value);
      *pbVar10 = *pbVar10 + cVar3;
      bVar17 = *unaff_EBX;
      *value = *value - bVar22;
      *pbVar10 = *pbVar10 + cVar3;
      pbVar24 = unaff_ESI + 8;
      out(*(undefined4 *)pbVar10,(short)value);
      *pbVar24 = *pbVar24 + cVar3;
      bVar2 = *unaff_EBX;
      *(uint *)(value + -0x23) = *(uint *)(value + -0x23) & (uint)pbVar24;
      piVar9 = (int *)((int)piVar4 + *piVar4);
      if (!SCARRY4((int)piVar4,*piVar4)) {
        *(undefined2 *)piVar9 = in_SS;
      }
      *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
      uVar19 = CONCAT11((char)((uint)value >> 8) + value[-0x15],cVar20);
      value = (byte *)CONCAT22((short)((uint)value >> 0x10),uVar19);
      in_EAX = (uint *)((int)piVar9 + *piVar9);
      if (!SCARRY4((int)piVar9,*piVar9)) {
        *(undefined2 *)in_EAX = in_SS;
      }
      cVar3 = (char)in_EAX;
      *(byte *)in_EAX = (byte)*in_EAX + cVar3;
      cVar16 = ((bVar15 - (char)iVar5) - CARRY1(bVar18,bVar15) | bVar17 | bVar2) + (byte)*in_EAX;
      option = (char *)CONCAT22(uVar12,CONCAT11(cVar16,bVar13));
      bVar18 = *value;
      *value = *value + bVar13;
      if (CARRY1(bVar18,bVar13)) goto code_r0x00402f91;
      unaff_ESI = unaff_ESI + 0xc;
      out(*(undefined4 *)pbVar24,uVar19);
      puVar7 = (uint *)((int)unaff_EBP + 1);
      puStack_4 = unaff_EBP;
    }
    *in_EAX = unaff_retaddr;
    *value = *value + (char)option;
    unaff_retaddr = CONCAT22((short)(unaff_retaddr >> 0x10),in_ES);
    bVar22 = (byte)((uint)value >> 8);
    in_CF = bVar22 < *unaff_ESI;
    value = (byte *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar22 - *unaff_ESI,(char)value))
    ;
    unaff_EBP = puVar7;
  } while( true );
  while( true ) {
    uVar12 = (undefined2)((uint)pbVar24 >> 0x10);
    bVar18 = (byte)((uint)pbVar24 >> 8) | value[0x2170411];
    pbVar24 = (byte *)CONCAT22(uVar12,CONCAT11(bVar18,bVar2));
    pbVar6 = pbVar10 + 4;
    out(*(undefined4 *)pbVar10,(short)value);
    *pbVar24 = bVar2;
    *value = *value + bVar13;
    bRam06180411 = bVar2;
    *pbVar24 = *pbVar24 - cVar23;
    *pbVar24 = *pbVar24 + bVar2;
    uVar19 = (undefined2)((uint)option >> 0x10);
    bVar17 = (byte)((uint)option >> 8) | bRam052b0603;
    option = (char *)CONCAT22(uVar19,CONCAT11(bVar17,bVar13));
    pbVar10 = pbVar6;
    if ('\0' < (char)bVar17) break;
    *option = *option + (byte)value;
    pbVar6 = value + 0xa0a0000;
    bVar18 = *pbVar6;
    bVar13 = (byte)option;
    *pbVar6 = *pbVar6 - bVar13;
    bVar17 = (byte)pbVar24 + *pbVar24;
    bVar2 = bVar17 + (bVar18 < bVar13);
    piVar4 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),bVar2);
    pbVar6 = value;
    if (!CARRY1((byte)pbVar24,*pbVar24) && !CARRY1(bVar17,bVar18 < bVar13)) goto code_r0x00402e42;
  }
  *pbVar24 = *pbVar24 + bVar2;
  piVar4 = (int *)CONCAT22(uVar12,CONCAT11(bVar18 | value[0x7190411],bVar2));
  bRam89280411 = bVar2;
  *(byte *)piVar4 = (char)*piVar4 + bVar2;
  option = (char *)CONCAT22(uVar19,CONCAT11(bVar17 | *value,bVar13));
  pbVar10 = pbVar6 + *piVar4;
  pbVar24 = (byte *)((int)piVar4 + *piVar4);
  bVar17 = (byte)pbVar24;
  *pbVar24 = *pbVar24 + bVar17;
  *pbVar10 = *pbVar10 + bVar13;
  bVar18 = *pbVar24;
  *pbVar24 = *pbVar24 + bVar17;
  *(char **)pbVar24 = (char *)((int)unaff_EBP + (uint)CARRY1(bVar18,bVar17) + *(int *)pbVar24);
  piVar4 = (int *)CONCAT31((int3)((uint)pbVar24 >> 8),*pbVar24);
  *value = *value + bVar13;
  pbVar6 = (byte *)CONCAT31((int3)((uint)value >> 8),(byte)value | *value);
  pbVar6[-0x43] = pbVar6[-0x43] + (char)((uint)value >> 8);
code_r0x00402e42:
  if (SCARRY4((int)piVar4,*piVar4)) goto code_r0x00402e6e;
  iVar5 = *(int *)((int)piVar4 + *piVar4);
  *pbVar6 = *pbVar6 + (char)option;
  piVar4 = (int *)(iVar5 + -0x8c6f);
  value = (byte *)CONCAT22((short)((uint)pbVar6 >> 0x10),
                           CONCAT11((byte)((uint)pbVar6 >> 8) | pbVar6[-0x3f],(char)pbVar6));
  pbVar24 = (byte *)((int)piVar4 + *piVar4);
  puVar7 = puStack_4;
  in_DS = (undefined2)uStack_10;
  if (SCARRY4((int)piVar4,*piVar4)) goto code_r0x00402e81;
  goto code_r0x00402e5a;
code_r0x00402f91:
  *(byte *)in_EAX = (byte)*in_EAX + cVar3;
  bVar18 = value[6];
  uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
  *value = *value + bVar13;
  bVar17 = (cVar16 - *pbVar24) + cRam14730307;
  *(byte *)in_EAX = (byte)*in_EAX + cVar3;
  bVar22 = bVar22 | bVar18 | value[0x2a];
  uVar1 = *in_EAX;
  pbVar10 = (byte *)((int)in_EAX + (uint)CARRY1(bVar17,(byte)*in_EAX) + *in_EAX);
  *value = *value + bVar13;
  cVar3 = cVar23 - *pbVar24;
  cVar23 = bVar22 + *(char *)(CONCAT31((int3)(CONCAT22(uVar19,CONCAT11(bVar22,cVar23)) >> 8),cVar3)
                             + 0x1e);
  *pbVar10 = *pbVar10 + (char)pbVar10;
  uVar11 = (undefined3)((uint)pbVar10 >> 8);
  bVar22 = (char)pbVar10 + 0x2aU & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x2a);
  cVar23 = cVar23 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar23,cVar3)) + 0x1f);
  *pcVar8 = *pcVar8 + bVar22 + 0x2a;
  bVar22 = bVar22 + 0x54 & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x2a);
  cVar23 = cVar23 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar23,cVar3)) + 0x20);
  *pcVar8 = *pcVar8 + bVar22 + 0x2a;
  bVar22 = bVar22 + 0x54 & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x2a);
  cVar23 = cVar23 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar23,cVar3)) + 0x21);
  *pcVar8 = *pcVar8 + bVar22 + 0x2a;
  bVar22 = bVar22 + 0x54 & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x2a);
  cVar23 = cVar23 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar23,cVar3)) + 0x22);
  *pcVar8 = *pcVar8 + bVar22 + 0x2a;
  bVar22 = bVar22 + 0x54 & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x2a);
  bVar18 = bVar17 + (byte)uVar1 + *pcVar8;
  uVar14 = CONCAT22(uVar12,CONCAT11(bVar18,bVar13));
  cVar23 = cVar23 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar23,cVar3)) + 0x25);
  *pcVar8 = *pcVar8 + bVar22 + 0x2a;
  bVar22 = bVar22 + 0x54 & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x2a);
  pcVar21 = (char *)CONCAT22(uVar19,CONCAT11(cVar23 + *(char *)(CONCAT22(uVar19,CONCAT11(cVar23,
                                                  cVar3)) + 0x26),cVar3));
  *pcVar8 = *pcVar8 + bVar22 + 0x2a;
  bVar22 = bVar22 + 0x54 & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  cVar23 = bVar22 + 0x2a;
  pcVar8 = (char *)CONCAT31(uVar11,cVar23);
  if ((POPCOUNT(cVar23) & 1U) == 0) {
    *pcVar8 = *pcVar8 + cVar23;
    pbVar10 = (byte *)(CONCAT31(uVar11,bVar22 + 0x4f) + -0x33282610);
    bVar22 = *pbVar10;
    bVar17 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar17;
    uVar11 = (undefined3)((uint)pbVar10 >> 8);
    if (!CARRY1(bVar22,bVar17)) {
      if (!SCARRY1(bVar17,'\0')) {
        *pbVar10 = *pbVar10 + bVar17;
        uVar14 = CONCAT22(uVar12,CONCAT11(bVar18 | *value,bVar13));
        bVar17 = bVar17 & *value;
        *(char *)CONCAT31(uVar11,bVar17) = *(char *)CONCAT31(uVar11,bVar17) + bVar17;
        pcVar8 = (char *)CONCAT31(uVar11,bVar17 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar8 = (char *)CONCAT31(uVar11,bVar17 + *pcVar21);
      if (SCARRY1(bVar17,*pcVar21) != (char)(bVar17 + *pcVar21) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar22 = bVar17 + *pcVar21;
    pbVar10 = (byte *)CONCAT31(uVar11,bVar22);
    if (SCARRY1(bVar17,*pcVar21) == (char)bVar22 < '\0') {
      pcVar8 = (char *)CONCAT22(uVar12,CONCAT11(bVar18 | *value,bVar13));
      *pcVar21 = *pcVar21 + cVar20;
      *value = *value ^ bVar22;
      *(char *)((int)pbVar10 * 2) = *(char *)((int)pbVar10 * 2) + bVar22;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar8 = *pcVar8 + (char)pcVar8;
    uVar11 = (undefined3)((uint)pcVar8 >> 8);
    bVar22 = (char)pcVar8 + 0x2aU & *value;
    *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
    pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x2a);
    *pcVar8 = *pcVar8 + bVar22 + 0x2a;
    pcVar8 = (char *)CONCAT31(uVar11,bVar22 + 0x54 & *value);
code_r0x00403072:
    cVar23 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar23;
    uVar11 = (undefined3)((uint)pcVar8 >> 8);
    pcVar8 = (char *)CONCAT31(uVar11,cVar23 + '*');
    *pcVar8 = *pcVar8 + cVar23 + '*';
    bVar22 = cVar23 + 0x54U & *value;
    *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
    pcStack_38 = (char *)CONCAT22(pcStack_38._2_2_,in_DS);
    uVar14 = CONCAT22((short)((uint)uVar14 >> 0x10),
                      CONCAT11((char)((uint)uVar14 >> 8) + *(char *)CONCAT31(uVar11,bVar22 + 0x2a),
                               (char)uVar14));
    unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar20;
    pcVar8 = pcStack_38;
code_r0x0040309a:
    cVar23 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar23;
    pcStack_38 = (char *)CONCAT22(pcStack_38._2_2_,in_ES);
    *pcVar8 = *pcVar8 + cVar23;
    pbVar10 = (byte *)CONCAT31((int3)((uint)pcVar8 >> 8),cVar23 + 0x2aU & *value);
  }
  cVar23 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar23;
  uVar11 = (undefined3)((uint)pbVar10 >> 8);
  cVar3 = cVar23 + '*';
  pcVar8 = (char *)CONCAT31(uVar11,cVar3);
  unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar20;
  *pcVar8 = *pcVar8 + cVar3;
  cVar16 = (char)pcStack_38 - *pbVar24;
  pcVar21 = (char *)CONCAT22((short)((uint)pcStack_38 >> 0x10),
                             CONCAT11((char)((uint)pcStack_38 >> 8) +
                                      *(char *)(CONCAT31((int3)((uint)pcStack_38 >> 8),cVar16) +
                                               0x34),cVar16));
  *pcVar8 = *pcVar8 + cVar3;
  bVar22 = cVar23 + 0x54U & *value;
  *(char *)CONCAT31(uVar11,bVar22) = *(char *)CONCAT31(uVar11,bVar22) + bVar22;
  pbVar10 = (byte *)CONCAT31(uVar11,bVar22 + 0x2a);
  bVar22 = (byte)((uint)uVar14 >> 8);
  pcVar8 = (char *)CONCAT22((short)((uint)uVar14 >> 0x10),CONCAT11(bVar22 + *pbVar10,(char)uVar14));
  pbVar10 = pbVar10 + (uint)CARRY1(bVar22,*pbVar10) + *(int *)pbVar10;
  *value = *value + (char)uVar14;
  uVar11 = (undefined3)((uint)pbVar10 >> 8);
  cVar23 = (byte)pbVar10 - *pbVar10;
  piVar4 = (int *)CONCAT31(uVar11,cVar23);
  pbVar24 = pbVar24 + (uint)((byte)pbVar10 < *pbVar10) + *piVar4;
  cVar23 = cVar23 + (char)*piVar4;
  pbVar10 = (byte *)CONCAT31(uVar11,cVar23);
  *pbVar10 = *pbVar10 + cVar23;
code_r0x004030df:
  *pcVar8 = *pcVar8 + cVar20;
  bVar22 = *pbVar10;
  bVar18 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar18;
  *(byte **)(pcVar21 + -0x41) = pbVar24 + (uint)CARRY1(bVar22,bVar18) + *(int *)(pcVar21 + -0x41);
  *pbVar10 = *pbVar10 + bVar18;
  uVar11 = (undefined3)((uint)pbVar10 >> 8);
  bVar18 = bVar18 | *pbVar24;
  *(char *)CONCAT31(uVar11,bVar18) = *(char *)CONCAT31(uVar11,bVar18) + bVar18;
  pcVar8 = (char *)CONCAT31(uVar11,bVar18 + 0x7b);
  *pcVar8 = *pcVar8 + bVar18 + 0x7b;
  pbVar24[CONCAT31(uVar11,bVar18 - 8) + -1] =
       pbVar24[CONCAT31(uVar11,bVar18 - 8) + -1] + (bVar18 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


