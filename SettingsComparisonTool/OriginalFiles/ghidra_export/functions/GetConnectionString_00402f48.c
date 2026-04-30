/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402f48
 * Raw Name    : GetConnectionString
 * Demangled   : GetConnectionString
 * Prototype   : char * GetConnectionString(undefined4 format, byte * serverName, uint * param_3)
 * Local Vars  : pcStack_30, uVar1, cVar2, bVar3, in_EAX, piVar4, iVar5, pcVar6, pcVar7, puVar8, piVar9, puVar10, pbVar11, pcVar12, uVar13, format, uVar14, bVar15, serverName, uVar16, bVar17, cVar18, bVar19, uVar20, cVar21, cVar22, unaff_EBX, bVar23, bVar24, unaff_EBP, unaff_ESI, pbVar25, unaff_EDI, in_SS, in_DS, bVar26, uVar27, unaff_retaddr, uVar28, param_3
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

char * __fastcall GetConnectionString(undefined4 format,byte *serverName,uint *param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar14;
  int *piVar4;
  int iVar5;
  undefined3 uVar13;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  char *in_EAX;
  int *piVar9;
  uint *puVar10;
  byte *pbVar11;
  char *pcVar12;
  byte bVar15;
  byte bVar17;
  undefined2 uVar20;
  char cVar18;
  byte bVar19;
  undefined4 uVar16;
  char cVar21;
  char cVar22;
  byte bVar23;
  byte bVar24;
  byte *unaff_EBX;
  uint *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar25;
  uint *unaff_EDI;
  undefined2 in_SS;
  undefined2 in_DS;
  bool bVar26;
  undefined2 uVar27;
  ushort uVar28;
  int unaff_retaddr;
  char *pcStack_30;
  
                    /* .NET CLR Managed Code */
  pcVar12 = (char *)CONCAT31((int3)((uint)format >> 8),(char)format + *unaff_EBX);
  uVar27 = (undefined2)unaff_retaddr;
  while( true ) {
    unaff_EBP = (uint *)((int)unaff_EBP + 1);
    uVar13 = (undefined3)((uint)in_EAX >> 8);
    cVar2 = (char)in_EAX + *in_EAX;
    pcVar6 = (char *)CONCAT31(uVar13,cVar2);
    *pcVar6 = *pcVar6 + cVar2;
    cVar2 = cVar2 + *pcVar6;
    piVar4 = (int *)CONCAT31(uVar13,cVar2);
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    iVar5 = LocalDescriptorTableRegister();
    *piVar4 = iVar5;
    bVar24 = *unaff_EBX;
    bVar17 = (byte)((uint)pcVar12 >> 8);
    *unaff_EBX = *unaff_EBX + bVar17;
    iVar5 = *piVar4;
    uVar14 = (undefined2)((uint)pcVar12 >> 0x10);
    bVar15 = (byte)pcVar12;
    *unaff_ESI = *unaff_ESI + cVar2;
    pbVar11 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)serverName);
    *pbVar11 = *pbVar11 + cVar2;
    bVar19 = *unaff_EBX;
    bVar23 = (byte)((uint)unaff_EBX >> 8);
    *serverName = *serverName - bVar23;
    *pbVar11 = *pbVar11 + cVar2;
    pbVar25 = unaff_ESI + 8;
    out(*(undefined4 *)pbVar11,(short)serverName);
    *pbVar25 = *pbVar25 + cVar2;
    bVar3 = *unaff_EBX;
    *(uint *)(serverName + -0x23) = *(uint *)(serverName + -0x23) & (uint)pbVar25;
    piVar9 = (int *)((int)piVar4 + *piVar4);
    if (!SCARRY4((int)piVar4,*piVar4)) {
      *(undefined2 *)piVar9 = in_SS;
    }
    *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
    cVar2 = (char)serverName;
    uVar20 = CONCAT11((char)((uint)serverName >> 8) + serverName[-0x15],cVar2);
    serverName = (byte *)CONCAT22((short)((uint)serverName >> 0x10),uVar20);
    puVar10 = (uint *)((int)piVar9 + *piVar9);
    if (!SCARRY4((int)piVar9,*piVar9)) {
      *(undefined2 *)puVar10 = in_SS;
    }
    cVar21 = (char)puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + cVar21;
    cVar18 = ((bVar17 - (char)iVar5) - CARRY1(bVar24,bVar17) | bVar19 | bVar3) + (byte)*puVar10;
    pcVar12 = (char *)CONCAT22(uVar14,CONCAT11(cVar18,bVar15));
    bVar24 = *serverName;
    *serverName = *serverName + bVar15;
    cVar22 = (char)unaff_EBX;
    if (CARRY1(bVar24,bVar15)) break;
    unaff_ESI = unaff_ESI + 0xc;
    out(*(undefined4 *)pbVar25,uVar20);
    while( true ) {
      *puVar10 = (uint)param_3;
      cVar2 = (char)pcVar12;
      *serverName = *serverName + cVar2;
      param_3 = (uint *)CONCAT22(param_3._2_2_,uVar27);
      bVar24 = (byte)((uint)serverName >> 8);
      serverName = (byte *)CONCAT22((short)((uint)serverName >> 0x10),
                                    CONCAT11(bVar24 - *unaff_ESI,(char)serverName));
      if (bVar24 >= *unaff_ESI) break;
      uVar13 = (undefined3)((uint)puVar10 >> 8);
      bVar24 = (char)puVar10 - (bVar24 < *unaff_ESI);
      pbVar11 = unaff_ESI + (int)unaff_EDI * 2;
      bVar26 = CARRY1(*pbVar11,bVar24);
      *pbVar11 = *pbVar11 + bVar24;
code_r0x00402ef9:
      bVar24 = bVar24 - bVar26;
      pcVar7 = (char *)CONCAT31(uVar13,bVar24);
      pcVar6 = (char *)((int)unaff_EDI + (int)unaff_EBP * 2);
      *pcVar6 = *pcVar6 + bVar24;
      *(uint **)pcVar7 = param_3;
      bVar19 = *serverName;
      *serverName = *serverName + (byte)pcVar12;
      param_3 = (uint *)CONCAT22(param_3._2_2_,uVar27);
      *(uint *)(unaff_ESI + 0x1d) =
           (*(int *)(unaff_ESI + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar19,(byte)pcVar12);
      *pcVar7 = *pcVar7 + bVar24;
      bVar19 = bVar24 + 0x2d;
      pbVar11 = (byte *)CONCAT31(uVar13,bVar19);
      *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
           serverName + (uint)(0xd2 < bVar24) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
      unaff_retaddr = CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar27);
      bVar24 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + bVar19;
      if (!CARRY1(bVar24,bVar19)) {
        while( true ) {
          bVar24 = *unaff_ESI;
          bVar19 = (byte)pbVar11;
          *unaff_ESI = *unaff_ESI + bVar19;
          if (!CARRY1(bVar24,bVar19)) break;
          *pbVar11 = *pbVar11 + bVar19;
          bVar19 = bVar19 | pbVar11[0x400001a];
          pbVar11 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar19);
          if ((char)bVar19 < '\x01') goto code_r0x00402ecc;
          *pbVar11 = *pbVar11 + bVar19;
          pbVar25 = pbVar11;
          do {
            uVar13 = (undefined3)((uint)pbVar25 >> 8);
            bVar19 = (char)pbVar25 + 0x6f;
            piVar4 = (int *)CONCAT31(uVar13,bVar19);
            *piVar4 = unaff_retaddr;
            bVar24 = *serverName;
            *serverName = *serverName + (char)pcVar12;
            uVar28 = (ushort)((uint)unaff_retaddr >> 0x10);
            unaff_retaddr = CONCAT22(uVar28,uVar27);
            in_SS = uVar27;
            if (*serverName == 0 || SCARRY1(bVar24,(char)pcVar12) != (char)*serverName < '\0') {
              out(*(undefined4 *)unaff_ESI,(short)serverName);
              unaff_ESI = unaff_ESI + 4;
code_r0x00402ed6:
              cVar2 = (char)piVar4;
              *(char *)piVar4 = (char)*piVar4 + cVar2;
              uVar13 = (undefined3)((uint)piVar4 >> 8);
              bVar19 = cVar2 + 0x6f;
              pcVar6 = (char *)CONCAT31(uVar13,bVar19);
              *(uint **)pcVar6 = param_3;
              bVar24 = *serverName;
              *serverName = *serverName + (byte)pcVar12;
              unaff_ESI[0x1c] = (unaff_ESI[0x1c] - bVar23) - CARRY1(bVar24,(byte)pcVar12);
              *pcVar6 = *pcVar6 + bVar19;
              bVar24 = cVar2 + 0x9c;
              pbVar11 = (byte *)CONCAT31(uVar13,bVar24);
              *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
                   serverName + (uint)(0xd2 < bVar19) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
              param_3 = (uint *)CONCAT22((short)((uint)param_3 >> 0x10),uVar27);
              bVar19 = *unaff_ESI;
              *unaff_ESI = *unaff_ESI + bVar24;
              if (CARRY1(bVar19,bVar24)) {
                *pbVar11 = *pbVar11 + bVar24;
                bVar24 = bVar24 | pbVar11[0x400001c];
                pbVar11 = (byte *)CONCAT31(uVar13,bVar24);
                if ((char)bVar24 < '\x01') goto code_r0x00402f16;
                *pbVar11 = *pbVar11 + bVar24;
                bVar26 = 0x90 < bVar24;
                bVar24 = bVar24 + 0x6f;
                goto code_r0x00402ef9;
              }
              *pbVar11 = *pbVar11 + bVar24;
            }
            else {
              *(byte *)piVar4 = (char)*piVar4 + bVar19;
              bVar3 = (char)pbVar25 + 0x9c;
              pbVar11 = (byte *)CONCAT31(uVar13,bVar3);
              *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
                   serverName + (uint)(0xd2 < bVar19) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
              unaff_retaddr = (uint)uVar28 << 0x10;
              bVar24 = *unaff_ESI;
              *unaff_ESI = *unaff_ESI + bVar3;
              puVar10 = unaff_EDI;
              if (CARRY1(bVar24,bVar3)) {
code_r0x00402ecc:
                *pbVar11 = *pbVar11 + (byte)pbVar11;
                uVar13 = (undefined3)((uint)pbVar11 >> 8);
                bVar24 = (byte)pbVar11 | pbVar11[0x400001b];
                piVar4 = (int *)CONCAT31(uVar13,bVar24);
                if ('\0' < (char)bVar24) goto code_r0x00402ed6;
                bVar19 = *serverName;
                *serverName = *serverName + (byte)pcVar12;
                *(char *)((int)piVar4 * 2) =
                     *(char *)((int)piVar4 * 2) - CARRY1(bVar19,(byte)pcVar12);
                bVar26 = 0x81 < bVar24;
                bVar24 = bVar24 + 0x7e;
                goto code_r0x00402ef9;
              }
code_r0x00402e5a:
              *pbVar11 = *pbVar11 + (char)pbVar11;
              pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                         CONCAT11((byte)((uint)pcVar12 >> 8) | *serverName,
                                                  (char)pcVar12));
              pbVar11 = unaff_ESI + 4;
              out(*(undefined4 *)unaff_ESI,(short)serverName);
              pbVar25 = (byte *)CONCAT31((int3)((uint)serverName >> 8),
                                         (char)serverName + (char)*puVar10);
              unaff_ESI = unaff_ESI + 8;
              out(*(undefined4 *)pbVar11,(short)pbVar25);
              unaff_EDI = puVar10;
code_r0x00402e6e:
              uVar13 = (undefined3)((uint)pbVar25 >> 8);
              cVar2 = (char)pbVar25 + (char)*unaff_EDI;
              pbVar11 = unaff_ESI + 4;
              out(*(undefined4 *)unaff_ESI,(short)CONCAT31(uVar13,cVar2));
              serverName = (byte *)CONCAT31(uVar13,cVar2 + (char)*unaff_EDI);
              unaff_ESI = unaff_ESI + 8;
              out(*(undefined4 *)pbVar11,(short)serverName);
              pbVar11 = (byte *)0x0;
            }
code_r0x00402e81:
            bVar19 = (char)pbVar11 - *pbVar11;
            iVar5 = CONCAT31((int3)((uint)pbVar11 >> 8),bVar19);
            *unaff_EBX = *unaff_EBX + (char)serverName;
            pbVar25 = (byte *)(iVar5 * 2);
            *pbVar25 = *pbVar25 ^ bVar19;
            pbVar25 = (byte *)(int)(short)iVar5;
            *pbVar25 = *pbVar25 + bVar19;
            *(byte *)unaff_EDI = (char)*unaff_EDI + (byte)pcVar12;
            bVar24 = *pbVar25;
            *pbVar25 = *pbVar25 + bVar19;
            *(byte **)(unaff_EBX + -0x73) =
                 unaff_ESI + (uint)CARRY1(bVar24,bVar19) + *(int *)(unaff_EBX + -0x73);
            *pbVar25 = *pbVar25 + bVar19;
            bVar24 = (byte)pcVar12 | *serverName;
            pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar24);
            param_3 = (uint *)CONCAT22(param_3._2_2_,uVar27);
            uVar14 = (undefined2)((uint)unaff_retaddr >> 0x10);
            unaff_retaddr = CONCAT22(uVar14,in_SS);
          } while ((char)bVar24 < '\x01');
          *pbVar25 = *pbVar25 + bVar19;
          pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),bVar19 + 0x2d);
          *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
               serverName + (uint)(0xd2 < bVar19) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
          unaff_retaddr = CONCAT22(uVar14,uVar27);
        }
        goto code_r0x00402e36;
      }
      *pbVar11 = *pbVar11 + bVar19;
code_r0x00402f16:
      uVar13 = (undefined3)((uint)pbVar11 >> 8);
      bVar24 = (byte)pbVar11 | pbVar11[0x400001d];
      puVar8 = (uint *)CONCAT31(uVar13,bVar24);
      if ((char)bVar24 < '\x01') goto code_r0x00402f3b;
      *(byte *)puVar8 = (byte)*puVar8 + bVar24;
      puVar10 = (uint *)CONCAT31(uVar13,bVar24 + 0x6f);
    }
    bVar26 = CARRY4((uint)puVar10,*puVar10);
    puVar8 = (uint *)((int)puVar10 + *puVar10);
    if (!SCARRY4((int)puVar10,*puVar10)) {
      bVar26 = CARRY4((uint)unaff_EBP,*puVar8);
      unaff_EBP = (uint *)((int)unaff_EBP + *puVar8);
    }
    *puVar8 = (*puVar8 - (int)puVar8) - (uint)bVar26;
    *serverName = *serverName + cVar2;
    pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                               CONCAT11((char)((uint)pcVar12 >> 8) + *serverName,cVar2 - *serverName
                                       ));
    *(byte *)puVar8 = (byte)*puVar8 + (char)puVar8;
code_r0x00402f3b:
    *unaff_EBX = *unaff_EBX + (char)serverName;
    bVar24 = (byte)puVar8;
    *(byte *)((int)puVar8 * 2) = *(byte *)((int)puVar8 * 2) ^ bVar24;
    *(byte *)puVar8 = (byte)*puVar8 + bVar24;
    *(byte *)puVar8 = (byte)*puVar8 + (char)serverName;
    uVar1 = *puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar24;
    *(byte **)serverName =
         (byte *)((int)puVar8 + (uint)CARRY1((byte)uVar1,bVar24) + *(int *)serverName);
    in_EAX = (char *)((uint)puVar8 | *unaff_EDI);
    param_3 = unaff_EBP;
  }
  *(byte *)puVar10 = (byte)*puVar10 + cVar21;
  bVar24 = serverName[6];
  uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
  *serverName = *serverName + bVar15;
  bVar19 = (cVar18 - *pbVar25) + cRam14730307;
  *(byte *)puVar10 = (byte)*puVar10 + cVar21;
  bVar24 = bVar23 | bVar24 | serverName[0x2a];
  uVar1 = *puVar10;
  pbVar11 = (byte *)((int)puVar10 + (uint)CARRY1(bVar19,(byte)*puVar10) + *puVar10);
  *serverName = *serverName + bVar15;
  cVar21 = cVar22 - *pbVar25;
  cVar18 = bVar24 + *(char *)(CONCAT31((int3)(CONCAT22(uVar20,CONCAT11(bVar24,cVar22)) >> 8),cVar21)
                             + 0x1e);
  *pbVar11 = *pbVar11 + (char)pbVar11;
  uVar13 = (undefined3)((uint)pbVar11 >> 8);
  bVar24 = (char)pbVar11 + 0x2aU & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x2a);
  cVar18 = cVar18 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar18,cVar21)) + 0x1f);
  *pcVar12 = *pcVar12 + bVar24 + 0x2a;
  bVar24 = bVar24 + 0x54 & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x2a);
  cVar18 = cVar18 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar18,cVar21)) + 0x20);
  *pcVar12 = *pcVar12 + bVar24 + 0x2a;
  bVar24 = bVar24 + 0x54 & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x2a);
  cVar18 = cVar18 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar18,cVar21)) + 0x21);
  *pcVar12 = *pcVar12 + bVar24 + 0x2a;
  bVar24 = bVar24 + 0x54 & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x2a);
  cVar18 = cVar18 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar18,cVar21)) + 0x22);
  *pcVar12 = *pcVar12 + bVar24 + 0x2a;
  bVar24 = bVar24 + 0x54 & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x2a);
  bVar19 = bVar19 + (byte)uVar1 + *pcVar12;
  uVar16 = CONCAT22(uVar14,CONCAT11(bVar19,bVar15));
  cVar18 = cVar18 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar18,cVar21)) + 0x25);
  *pcVar12 = *pcVar12 + bVar24 + 0x2a;
  bVar24 = bVar24 + 0x54 & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x2a);
  pcVar6 = (char *)CONCAT22(uVar20,CONCAT11(cVar18 + *(char *)(CONCAT22(uVar20,CONCAT11(cVar18,
                                                  cVar21)) + 0x26),cVar21));
  *pcVar12 = *pcVar12 + bVar24 + 0x2a;
  bVar24 = bVar24 + 0x54 & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  cVar21 = bVar24 + 0x2a;
  pcVar12 = (char *)CONCAT31(uVar13,cVar21);
  if ((POPCOUNT(cVar21) & 1U) == 0) {
    *pcVar12 = *pcVar12 + cVar21;
    pbVar11 = (byte *)(CONCAT31(uVar13,bVar24 + 0x4f) + -0x33282610);
    bVar24 = *pbVar11;
    bVar3 = (byte)pbVar11;
    *pbVar11 = *pbVar11 + bVar3;
    uVar13 = (undefined3)((uint)pbVar11 >> 8);
    if (!CARRY1(bVar24,bVar3)) {
      if (!SCARRY1(bVar3,'\0')) {
        *pbVar11 = *pbVar11 + bVar3;
        uVar16 = CONCAT22(uVar14,CONCAT11(bVar19 | *serverName,bVar15));
        bVar3 = bVar3 & *serverName;
        *(char *)CONCAT31(uVar13,bVar3) = *(char *)CONCAT31(uVar13,bVar3) + bVar3;
        pcVar12 = (char *)CONCAT31(uVar13,bVar3 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar12 = (char *)CONCAT31(uVar13,bVar3 + *pcVar6);
      if (SCARRY1(bVar3,*pcVar6) != (char)(bVar3 + *pcVar6) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar24 = bVar3 + *pcVar6;
    pbVar11 = (byte *)CONCAT31(uVar13,bVar24);
    if (SCARRY1(bVar3,*pcVar6) == (char)bVar24 < '\0') {
      pcVar12 = (char *)CONCAT22(uVar14,CONCAT11(bVar19 | *serverName,bVar15));
      *pcVar6 = *pcVar6 + cVar2;
      *serverName = *serverName ^ bVar24;
      *(char *)((int)pbVar11 * 2) = *(char *)((int)pbVar11 * 2) + bVar24;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    uVar13 = (undefined3)((uint)pcVar12 >> 8);
    bVar24 = (char)pcVar12 + 0x2aU & *serverName;
    *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
    pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x2a);
    *pcVar12 = *pcVar12 + bVar24 + 0x2a;
    pcVar12 = (char *)CONCAT31(uVar13,bVar24 + 0x54 & *serverName);
code_r0x00403072:
    cVar21 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar21;
    uVar13 = (undefined3)((uint)pcVar12 >> 8);
    pcVar12 = (char *)CONCAT31(uVar13,cVar21 + '*');
    *pcVar12 = *pcVar12 + cVar21 + '*';
    bVar24 = cVar21 + 0x54U & *serverName;
    *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
    pcStack_30 = (char *)CONCAT22(pcStack_30._2_2_,in_DS);
    uVar16 = CONCAT22((short)((uint)uVar16 >> 0x10),
                      CONCAT11((char)((uint)uVar16 >> 8) + *(char *)CONCAT31(uVar13,bVar24 + 0x2a),
                               (char)uVar16));
    unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar2;
    pcVar12 = pcStack_30;
code_r0x0040309a:
    cVar21 = (char)pcVar12;
    *pcVar12 = *pcVar12 + cVar21;
    pcStack_30 = (char *)CONCAT22(pcStack_30._2_2_,uVar27);
    *pcVar12 = *pcVar12 + cVar21;
    pbVar11 = (byte *)CONCAT31((int3)((uint)pcVar12 >> 8),cVar21 + 0x2aU & *serverName);
  }
  cVar21 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar21;
  uVar13 = (undefined3)((uint)pbVar11 >> 8);
  cVar18 = cVar21 + '*';
  pcVar12 = (char *)CONCAT31(uVar13,cVar18);
  unaff_ESI[0x20a0008] = unaff_ESI[0x20a0008] - cVar2;
  *pcVar12 = *pcVar12 + cVar18;
  cVar22 = (char)pcStack_30 - *pbVar25;
  pcVar6 = (char *)CONCAT22((short)((uint)pcStack_30 >> 0x10),
                            CONCAT11((char)((uint)pcStack_30 >> 8) +
                                     *(char *)(CONCAT31((int3)((uint)pcStack_30 >> 8),cVar22) + 0x34
                                              ),cVar22));
  *pcVar12 = *pcVar12 + cVar18;
  bVar24 = cVar21 + 0x54U & *serverName;
  *(char *)CONCAT31(uVar13,bVar24) = *(char *)CONCAT31(uVar13,bVar24) + bVar24;
  pbVar11 = (byte *)CONCAT31(uVar13,bVar24 + 0x2a);
  bVar24 = (byte)((uint)uVar16 >> 8);
  pcVar12 = (char *)CONCAT22((short)((uint)uVar16 >> 0x10),CONCAT11(bVar24 + *pbVar11,(char)uVar16))
  ;
  pbVar11 = pbVar11 + (uint)CARRY1(bVar24,*pbVar11) + *(int *)pbVar11;
  *serverName = *serverName + (char)uVar16;
  uVar13 = (undefined3)((uint)pbVar11 >> 8);
  cVar21 = (byte)pbVar11 - *pbVar11;
  piVar4 = (int *)CONCAT31(uVar13,cVar21);
  pbVar25 = pbVar25 + (uint)((byte)pbVar11 < *pbVar11) + *piVar4;
  cVar21 = cVar21 + (char)*piVar4;
  pbVar11 = (byte *)CONCAT31(uVar13,cVar21);
  *pbVar11 = *pbVar11 + cVar21;
code_r0x004030df:
  *pcVar12 = *pcVar12 + cVar2;
  bVar24 = *pbVar11;
  bVar19 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar19;
  *(byte **)(pcVar6 + -0x41) = pbVar25 + (uint)CARRY1(bVar24,bVar19) + *(int *)(pcVar6 + -0x41);
  *pbVar11 = *pbVar11 + bVar19;
  uVar13 = (undefined3)((uint)pbVar11 >> 8);
  bVar19 = bVar19 | *pbVar25;
  *(char *)CONCAT31(uVar13,bVar19) = *(char *)CONCAT31(uVar13,bVar19) + bVar19;
  pcVar12 = (char *)CONCAT31(uVar13,bVar19 + 0x7b);
  *pcVar12 = *pcVar12 + bVar19 + 0x7b;
  pbVar25[CONCAT31(uVar13,bVar19 - 8) + -1] =
       pbVar25[CONCAT31(uVar13,bVar19 - 8) + -1] + (bVar19 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
  while( true ) {
    uVar14 = (undefined2)((uint)pbVar11 >> 0x10);
    bVar24 = (byte)((uint)pbVar11 >> 8) | serverName[0x2170411];
    pbVar11 = (byte *)CONCAT22(uVar14,CONCAT11(bVar24,bVar3));
    pbVar25 = unaff_ESI + 4;
    out(*(undefined4 *)unaff_ESI,(short)serverName);
    *pbVar11 = bVar3;
    *serverName = *serverName + bVar15;
    bRam06180411 = bVar3;
    *pbVar11 = *pbVar11 - cVar22;
    *pbVar11 = *pbVar11 + bVar3;
    uVar20 = (undefined2)((uint)pcVar12 >> 0x10);
    bVar19 = (byte)((uint)pcVar12 >> 8) | bRam052b0603;
    pcVar12 = (char *)CONCAT22(uVar20,CONCAT11(bVar19,bVar15));
    unaff_ESI = pbVar25;
    if ('\0' < (char)bVar19) break;
code_r0x00402e36:
    *pcVar12 = *pcVar12 + (byte)serverName;
    pbVar25 = serverName + 0xa0a0000;
    bVar24 = *pbVar25;
    bVar15 = (byte)pcVar12;
    *pbVar25 = *pbVar25 - bVar15;
    bVar19 = (byte)pbVar11 + *pbVar11;
    bVar3 = bVar19 + (bVar24 < bVar15);
    piVar4 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar3);
    pbVar25 = serverName;
    if (!CARRY1((byte)pbVar11,*pbVar11) && !CARRY1(bVar19,bVar24 < bVar15)) goto code_r0x00402e42;
  }
  *pbVar11 = *pbVar11 + bVar3;
  piVar4 = (int *)CONCAT22(uVar14,CONCAT11(bVar24 | serverName[0x7190411],bVar3));
  bRam89280411 = bVar3;
  *(byte *)piVar4 = (char)*piVar4 + bVar3;
  pcVar12 = (char *)CONCAT22(uVar20,CONCAT11(bVar19 | *serverName,bVar15));
  unaff_ESI = pbVar25 + *piVar4;
  pbVar11 = (byte *)((int)piVar4 + *piVar4);
  bVar19 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar19;
  *unaff_ESI = *unaff_ESI + bVar15;
  bVar24 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar19;
  *(uint *)pbVar11 = (int)unaff_EBP + (uint)CARRY1(bVar24,bVar19) + *(int *)pbVar11;
  piVar4 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),*pbVar11);
  *serverName = *serverName + bVar15;
  pbVar25 = (byte *)CONCAT31((int3)((uint)serverName >> 8),(byte)serverName | *serverName);
  pbVar25[-0x43] = pbVar25[-0x43] + (char)((uint)serverName >> 8);
code_r0x00402e42:
  if (SCARRY4((int)piVar4,*piVar4)) goto code_r0x00402e6e;
  iVar5 = *(int *)((int)piVar4 + *piVar4);
  *pbVar25 = *pbVar25 + (char)pcVar12;
  in_DS = (undefined2)unaff_retaddr;
  piVar4 = (int *)(iVar5 + -0x8c6f);
  serverName = (byte *)CONCAT22((short)((uint)pbVar25 >> 0x10),
                                CONCAT11((byte)((uint)pbVar25 >> 8) | pbVar25[-0x3f],(char)pbVar25))
  ;
  pbVar11 = (byte *)((int)piVar4 + *piVar4);
  puVar10 = param_3;
  if (SCARRY4((int)piVar4,*piVar4)) goto code_r0x00402e81;
  goto code_r0x00402e5a;
}


