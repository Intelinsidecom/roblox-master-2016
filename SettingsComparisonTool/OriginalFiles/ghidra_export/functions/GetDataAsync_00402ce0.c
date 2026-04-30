/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402ce0
 * Raw Name    : GetDataAsync
 * Demangled   : GetDataAsync
 * Prototype   : pointer GetDataAsync(byte * endpoint, byte * param_2)
 * Local Vars  : pcStack_58, uStack_20, uStack_8, puStack_4, uVar1, uVar2, cVar3, cVar4, bVar5, cVar6, bVar7, in_EAX, pbVar8, pcVar9, piVar10, pbVar11, puVar12, puVar13, puVar14, uVar15, iVar16, uVar17, cVar18, bVar19, param_2, bVar20, cVar21, uVar22, bVar23, uVar24, pbVar25, unaff_EBX, pbVar26, pcVar27, cVar28, bVar29, uVar30, unaff_EBP, unaff_ESI, pbVar31, pbVar32, unaff_EDI, in_ES, in_SS, in_DS, in_CF, bVar33, bVar34, unaff_retaddr, endpoint
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

undefined * __fastcall GetDataAsync(byte *endpoint,byte *param_2)

{
  undefined6 uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined3 uVar15;
  char *in_EAX;
  byte *pbVar8;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;
  uint *puVar12;
  uint *puVar13;
  ushort *puVar14;
  char cVar18;
  byte bVar19;
  int iVar16;
  byte bVar20;
  char cVar21;
  undefined2 uVar22;
  undefined4 uVar17;
  byte bVar23;
  undefined2 uVar24;
  byte *pbVar25;
  char cVar28;
  char *unaff_EBX;
  undefined2 uVar30;
  byte *pbVar26;
  byte bVar29;
  char *pcVar27;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar31;
  byte *pbVar32;
  uint *unaff_EDI;
  ushort in_ES;
  ushort in_SS;
  ushort in_DS;
  char in_CF;
  bool bVar33;
  bool bVar34;
  ushort unaff_retaddr;
  char *pcStack_58;
  uint uStack_20;
  ushort uStack_8;
  uint *puStack_4;
  
  bVar33 = false;
  do {
                    /* .NET CLR Managed Code */
    uVar15 = (undefined3)((uint)in_EAX >> 8);
    cVar3 = (char)in_EAX + *in_EAX + in_CF;
    uVar30 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar28 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBP - 0x61);
    pcVar9 = (char *)CONCAT22(uVar30,CONCAT11(cVar28,(char)unaff_EBX));
    *(char *)CONCAT31(uVar15,cVar3) = *(char *)CONCAT31(uVar15,cVar3) + cVar3;
    cVar4 = cVar3 + '\x12';
    pbVar8 = (byte *)CONCAT31(uVar15,cVar4);
    cVar6 = *pcVar9;
    *pcVar9 = *pcVar9 + cVar4;
    cVar18 = (char)((uint)endpoint >> 8);
    cVar21 = (char)endpoint;
    if (SCARRY1(cVar6,cVar4) == *pcVar9 < '\0') {
      *pbVar8 = *pbVar8 + cVar4;
      *pbVar8 = *pbVar8 + cVar4;
      *pbVar8 = *pbVar8 + cVar4;
      *param_2 = *param_2 + cVar4;
      *pbVar8 = *pbVar8 + cVar4;
    }
    else {
      *pbVar8 = *pbVar8 + cVar4;
      pbVar8 = (byte *)CONCAT31(uVar15,cVar3 + '$');
      *pbVar8 = *pbVar8 + cVar18;
      bVar7 = *param_2;
      *param_2 = *param_2 + cVar21;
      if (SCARRY1(bVar7,cVar21) != (char)*param_2 < '\0') {
        do {
          cVar6 = (char)pbVar8;
          *pbVar8 = *pbVar8 + cVar6;
          uVar15 = (undefined3)((uint)pbVar8 >> 8);
          cRam00009d7d = cRam00009d7d + (char)param_2;
          bVar5 = cVar6 + 0x24;
          cVar4 = (char)((uint)pcVar9 >> 8);
          pcVar9[-0x62] = pcVar9[-0x62] + cVar4;
          *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
          bVar7 = cVar6 + 0x2fU + *endpoint;
          cVar3 = bVar7 + (0xf4 < bVar5);
          cVar6 = cVar3 + *(char *)CONCAT31(uVar15,cVar3) +
                  (CARRY1(cVar6 + 0x2fU,*endpoint) || CARRY1(bVar7,0xf4 < bVar5));
          pcVar27 = (char *)CONCAT31(uVar15,cVar6);
          *pcVar27 = *pcVar27 - (char)param_2;
          *pcVar27 = *pcVar27 + cVar6;
          pbVar25 = param_2 + -*(int *)param_2;
          unaff_ESI[(int)pcVar9 * 4] = unaff_ESI[(int)pcVar9 * 4] + cVar4;
          pcVar27[unaff_EBP] = pcVar27[unaff_EBP] + cVar6;
          *pbVar25 = *pbVar25 + (char)endpoint;
          pcVar27 = (char *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                                     CONCAT11((char)((uint)pbVar8 >> 8) - *pbVar25,cVar6));
          uVar2 = *unaff_EDI;
          *pcVar27 = *pcVar27 - (char)((uint)pbVar25 >> 8);
          *pcVar27 = *pcVar27 + cVar6;
          puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
          pbVar26 = (byte *)CONCAT22((short)((uint)pcVar9 >> 0x10),
                                     CONCAT11(cVar4 - *unaff_ESI,(char)pcVar9));
          unaff_EBP = unaff_EBP + *(int *)(pbVar26 + (int)endpoint);
          pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar25 >> 8),(char)pbVar25 + (byte)uVar2);
          while( true ) {
            param_2 = pbVar8;
            uVar30 = (undefined2)((uint)pbVar26 >> 0x10);
            bVar29 = (char)((uint)pbVar26 >> 8) + pbVar26[0x18];
            *pcVar27 = *pcVar27 + (char)pcVar27;
            pbVar8 = (byte *)CONCAT31((int3)((uint)pcVar27 >> 8),(char)pcVar27 + 'o');
            cVar6 = (char)endpoint;
            *param_2 = *param_2 + cVar6;
            bVar7 = *unaff_ESI;
            bVar23 = (byte)((uint)endpoint >> 8);
            bVar5 = *pbVar8;
            pbVar8 = pbVar8 + (uint)CARRY1(bVar23,*pbVar8) + *(int *)pbVar8;
            *param_2 = *param_2 + cVar6;
            cVar3 = ((char)pbVar26 - bVar7) - *unaff_ESI;
            bVar7 = *(byte *)((int)unaff_EDI + 0x1a);
            *pbVar8 = *pbVar8 + (char)pbVar8;
            endpoint = (byte *)CONCAT22((short)((uint)endpoint >> 0x10),
                                        CONCAT11(bVar23 + bVar5 + bVar7 | *param_2,cVar6));
            pbVar8 = pbVar8 + *(int *)param_2;
            if ((POPCOUNT((uint)pbVar8 & 0xff) & 1U) != 0) break;
            *pbVar8 = *pbVar8 + (char)pbVar8;
            bVar7 = (char)pbVar8 + 0x6f;
            pcVar9 = (char *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar7);
            pcVar27 = (char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar29,(char)pbVar26)) >> 8)
                                        ,cVar3) + -1);
            *pcVar9 = *pcVar9 + bVar7;
            *pcVar9 = *pcVar9 + bVar7;
            *pcVar27 = *pcVar27 + (byte)param_2;
            *(byte *)((int)pcVar9 * 2) = *(byte *)((int)pcVar9 * 2) ^ bVar7;
            uVar1 = *(undefined6 *)pcVar9;
            in_ES = (ushort)((uint6)uVar1 >> 0x20);
            pcVar9 = (char *)uVar1;
            *pcVar9 = *pcVar9 + (char)uVar1;
            *unaff_ESI = *unaff_ESI + (char)uVar1;
            pcVar9 = (char *)((uint)pcVar9 | 0x73110008);
            bVar29 = (byte)((uint)pcVar27 >> 8);
            *(byte *)unaff_EDI = (byte)*unaff_EDI - bVar29;
            *param_2 = *param_2 + cVar6;
            pbVar8 = unaff_ESI + (uint)bVar33 * -8 + 4;
            out(*(undefined4 *)unaff_ESI,(short)param_2);
            *pcVar9 = *pcVar9;
            cVar6 = (char)pcVar9;
            *pcVar9 = *pcVar9 + cVar6;
            bVar7 = *(byte *)(unaff_EBP - 0x5a);
            uVar30 = (undefined2)((uint)pcVar27 >> 0x10);
            cVar3 = (char)pcVar27;
            *pcVar9 = *pcVar9 + cVar6;
            cVar6 = cVar6 + '\x02';
            uVar2 = CONCAT31((int3)((uint6)uVar1 >> 8),cVar6);
            endpoint = (byte *)(uVar2 | 0x73110000);
            unaff_ESI = pbVar8 + (uint)bVar33 * -8 + 4;
            out(*(undefined4 *)pbVar8,(short)param_2);
            *endpoint = *endpoint;
            bVar23 = (byte)param_2 | (byte)*unaff_EDI;
            pbVar8 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),bVar23);
            *endpoint = *endpoint + cVar6;
            pcVar9 = (char *)(uVar2 | 0x7b1f1609);
            bVar33 = (unaff_retaddr & 0x400) != 0;
            *(uint *)((int)unaff_EDI + -0x7d) = *(uint *)((int)unaff_EDI + -0x7d) | unaff_EBP;
            bVar5 = (byte)pcVar9;
            *pcVar9 = *pcVar9 + bVar5;
            bVar29 = bVar29 | bVar7 | unaff_ESI[0x19];
            pbVar26 = (byte *)CONCAT22(uVar30,CONCAT11(bVar29,cVar3));
            *pcVar9 = *pcVar9 + bVar5;
            uVar15 = (undefined3)((uint)pcVar9 >> 8);
            *(byte **)(unaff_ESI + (int)unaff_EDI * 8) =
                 pbVar8 + (uint)(0xd2 < bVar5) + *(int *)(unaff_ESI + (int)unaff_EDI * 8);
            bVar5 = bVar5 + 0x2d ^ *(byte *)CONCAT31(uVar15,bVar5 + 0x2d);
            pcVar27 = (char *)CONCAT31(uVar15,bVar5);
            bVar7 = *unaff_ESI;
            *unaff_ESI = *unaff_ESI + bVar5;
            unaff_retaddr = in_ES;
            if (CARRY1(bVar7,bVar5)) {
              *pcVar27 = *pcVar27 + bVar5;
              bVar5 = bVar5 | pcVar27[0x4000019];
              pcVar9 = (char *)CONCAT31(uVar15,bVar5);
              if ('\0' < (char)bVar5) {
                *pcVar9 = *pcVar9 + bVar5;
                piVar10 = (int *)CONCAT31(uVar15,bVar5 + 0x28);
                *piVar10 = (int)piVar10 + (uint)(0xd7 < bVar5) + *piVar10;
                bVar19 = (byte)((uint6)uVar1 >> 8);
                *pbVar26 = *pbVar26 + bVar19;
                uVar22 = CONCAT11((byte)((uint)param_2 >> 8) | bVar29,bVar23);
                pbVar8 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),uVar22);
                puStack_4 = (uint *)CONCAT22(puStack_4._2_2_,in_ES);
                bVar23 = in(uVar22);
                pbVar11 = (byte *)CONCAT31(uVar15,bVar23);
                bVar7 = *pbVar11;
                bVar34 = SCARRY1(*pbVar11,bVar23);
                *pbVar11 = *pbVar11 + bVar23;
                bVar5 = *pbVar11;
                pbVar25 = unaff_ESI;
                uStack_8 = in_ES;
                if (!CARRY1(bVar7,bVar23)) goto code_r0x00402e19;
                *pbVar11 = *pbVar11 + bVar23;
                bVar19 = bVar19 | *pbVar11;
                endpoint = (byte *)CONCAT22((short)((uint)endpoint >> 0x10),CONCAT11(bVar19,cVar6));
                pcVar9 = (char *)CONCAT31(uVar15,bVar23 + *pbVar11);
                *pbVar26 = *pbVar26 + bVar19;
              }
              uVar15 = (undefined3)((uint)pcVar9 >> 8);
              bVar5 = (byte)pcVar9 | *pbVar8;
              pbVar11 = (byte *)CONCAT31(uVar15,bVar5);
              pbVar25 = unaff_ESI + (uint)bVar33 * -8 + 4;
              out(*(undefined4 *)unaff_ESI,(short)pbVar8);
              LOCK();
              bVar7 = *pbVar11;
              *pbVar11 = bVar5;
              UNLOCK();
              *pbVar8 = *pbVar8 + (char)endpoint;
              piVar10 = (int *)(CONCAT31(uVar15,bVar7) + -0x1b7e07);
              *pbVar8 = *pbVar8 + (char)endpoint;
              iVar16 = (int)endpoint - *(int *)pbVar26;
              bVar7 = *(byte *)((int)unaff_EDI + -0x7a);
              uVar22 = (undefined2)((uint)iVar16 >> 0x10);
              *(char *)piVar10 = *(char *)piVar10 + (char)piVar10;
              bVar5 = (char)((uint)iVar16 >> 8) + bVar7 | *(byte *)((int)unaff_EDI + 0x17);
              *(char *)piVar10 = *(char *)piVar10 + (char)piVar10;
              uVar15 = (undefined3)(CONCAT22(uVar22,CONCAT11(bVar5,(byte)iVar16)) >> 8);
              bVar7 = (byte)iVar16 | *pbVar26;
              endpoint = (byte *)CONCAT31(uVar15,bVar7);
              pbVar11 = (byte *)((int)piVar10 + *piVar10);
              pbVar31 = pbVar25;
              if (SCARRY4((int)piVar10,*piVar10)) goto code_r0x00402e0a;
              *endpoint = *endpoint + bVar7;
              *(byte **)pbVar26 = pbVar8 + *(int *)pbVar26;
              piVar10 = (int *)CONCAT31(uVar15,bVar7 + 0x27);
              endpoint = (byte *)CONCAT22(uVar22,CONCAT11(bVar5 + *(byte *)((int)unaff_EDI + -0x79),
                                                          bVar7));
              *(byte *)piVar10 = (char)*piVar10 + bVar7 + 0x27;
              goto code_r0x00402dff;
            }
          }
          pcVar9 = (char *)CONCAT22(uVar30,CONCAT11(bVar29 | *(byte *)(unaff_EBP - 0x62),cVar3));
        } while( true );
      }
    }
    endpoint = (byte *)CONCAT22((short)((uint)endpoint >> 0x10),
                                CONCAT11(cVar18 + (char)((uint)pbVar8 >> 8),cVar21));
    cVar6 = (char)pbVar8;
    *pbVar8 = *pbVar8 + cVar6;
    pcVar27 = (char *)((int)pbVar8 * 2 + 0x1a10000);
    *pcVar27 = *pcVar27 + cVar28;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + cVar6;
    pbVar8[-0x47ffffff] = pbVar8[-0x47ffffff] + cVar28;
    *(byte **)pbVar8 = pbVar8 + *(int *)pbVar8;
    bVar5 = (byte)param_2;
    *(byte *)unaff_EDI = (byte)*unaff_EDI + bVar5;
    *pbVar8 = *pbVar8 + cVar6;
    *pbVar8 = *pbVar8 + bVar5;
    *pbVar8 = *pbVar8 + cVar6;
    *(byte **)unaff_ESI = unaff_ESI + *(int *)unaff_ESI;
    bVar7 = unaff_ESI[(int)pcVar9 * 4];
    unaff_EBX = (char *)CONCAT22(uVar30,CONCAT11(cVar28 + bVar7,(char)unaff_EBX));
    unaff_EBX[(int)pbVar8] = unaff_EBX[(int)pbVar8] + cVar6;
    *param_2 = *param_2 - (cVar28 + bVar7);
    *param_2 = *param_2 + cVar21;
    uVar15 = (undefined3)((uint)pbVar8 >> 8);
    bVar7 = cVar6 - *pbVar8;
    pcVar9 = (char *)CONCAT31(uVar15,bVar7);
    *unaff_EBX = *unaff_EBX + bVar5;
    *param_2 = *param_2 ^ bVar7;
    *param_2 = *param_2 + bVar7;
    *pcVar9 = *pcVar9 + bVar7;
    in_EAX = (char *)CONCAT31(uVar15,bVar7);
    in_CF = CARRY1(*endpoint,bVar5);
    *endpoint = *endpoint + bVar5;
    in_SS = unaff_retaddr;
  } while( true );
code_r0x00402dff:
  pbVar11 = (byte *)CONCAT22((short)((uint)piVar10 >> 0x10),
                             CONCAT11((byte)((uint)piVar10 >> 8) | pbVar8[0x2170411],(byte)piVar10))
  ;
  pbVar31 = pbVar25 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar25,(short)pbVar8);
  *pbVar11 = (byte)piVar10;
  *pbVar8 = *pbVar8 + (char)endpoint;
code_r0x00402e0a:
  cRam06180411 = (char)pbVar11;
  *pbVar11 = *pbVar11 - cVar3;
  *pbVar11 = *pbVar11 + (char)pbVar11;
  bVar34 = false;
  bVar5 = (byte)((uint)endpoint >> 8) | bRam052b0603;
  endpoint = (byte *)CONCAT22((short)((uint)endpoint >> 0x10),CONCAT11(bVar5,(char)endpoint));
  pbVar25 = pbVar31;
code_r0x00402e19:
  if (bVar5 == 0 || bVar34 != (char)bVar5 < '\0') goto code_r0x00402e36;
  cRam89280411 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cRam89280411;
  piVar10 = (int *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                            CONCAT11((byte)((uint)pbVar11 >> 8) | pbVar8[0x7190411],cRam89280411));
  *(char *)piVar10 = (char)*piVar10 + cRam89280411;
  cVar6 = (char)endpoint;
  endpoint = (byte *)CONCAT22((short)((uint)endpoint >> 0x10),
                              CONCAT11((byte)((uint)endpoint >> 8) | *pbVar8,cVar6));
  pbVar25 = pbVar25 + *piVar10;
  pbVar11 = (byte *)((int)piVar10 + *piVar10);
  bVar5 = (byte)pbVar11;
  *pbVar11 = *pbVar11 + bVar5;
  *pbVar25 = *pbVar25 + cVar6;
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar5;
  *(uint *)pbVar11 = *(int *)pbVar11 + unaff_EBP + (uint)CARRY1(bVar7,bVar5);
  piVar10 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),*pbVar11);
  *pbVar8 = *pbVar8 + cVar6;
  pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),(byte)pbVar8 | *pbVar8);
  pbVar11 = pbVar31 + -0x43;
  *pbVar11 = *pbVar11 + (char)((uint)pbVar8 >> 8);
  pbVar8 = pbVar31;
  puVar13 = unaff_EDI;
code_r0x00402e42:
  unaff_EDI = puVar13;
  if (SCARRY4((int)piVar10,*piVar10)) goto code_r0x00402e6e;
  iVar16 = *(int *)((int)piVar10 + *piVar10);
  *pbVar8 = *pbVar8 + (char)endpoint;
  piVar10 = (int *)(iVar16 + -0x8c6f);
  pbVar8 = (byte *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                            CONCAT11((byte)((uint)pbVar8 >> 8) | pbVar8[-0x3f],(char)pbVar8));
  pbVar31 = (byte *)((int)piVar10 + *piVar10);
  pbVar11 = pbVar31;
  unaff_EDI = puStack_4;
  in_DS = uStack_8;
  if (SCARRY4((int)piVar10,*piVar10)) goto code_r0x00402e81;
code_r0x00402e5a:
  *pbVar31 = *pbVar31 + (char)pbVar31;
  endpoint = (byte *)CONCAT22((short)((uint)endpoint >> 0x10),
                              CONCAT11((byte)((uint)endpoint >> 8) | *pbVar8,(char)endpoint));
  pbVar11 = pbVar25 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar25,(short)pbVar8);
  pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),(char)pbVar8 + (byte)*unaff_EDI);
  pbVar25 = pbVar11 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar11,(short)pbVar8);
  uStack_8 = in_ES;
code_r0x00402e6e:
  uVar15 = (undefined3)((uint)pbVar8 >> 8);
  cVar6 = (char)pbVar8 + (byte)*unaff_EDI;
  pbVar11 = pbVar25 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar25,(short)CONCAT31(uVar15,cVar6));
  pbVar8 = (byte *)CONCAT31(uVar15,cVar6 + (byte)*unaff_EDI);
  pbVar25 = pbVar11 + (uint)bVar33 * -8 + 4;
  out(*(undefined4 *)pbVar11,(short)pbVar8);
  pbVar11 = (byte *)0x0;
  puVar13 = unaff_EDI;
code_r0x00402e81:
  unaff_EDI = puVar13;
  bVar5 = (char)pbVar11 - *pbVar11;
  iVar16 = CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
  *pbVar26 = *pbVar26 + (char)pbVar8;
  pbVar31 = (byte *)(iVar16 * 2);
  *pbVar31 = *pbVar31 ^ bVar5;
  pbVar31 = (byte *)(int)(short)iVar16;
  *pbVar31 = *pbVar31 + bVar5;
  *(byte *)unaff_EDI = (byte)*unaff_EDI + (byte)endpoint;
  bVar7 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar5;
  *(byte **)(pbVar26 + -0x73) = pbVar25 + (uint)CARRY1(bVar7,bVar5) + *(int *)(pbVar26 + -0x73);
  *pbVar31 = *pbVar31 + bVar5;
  bVar7 = (byte)endpoint | *pbVar8;
  endpoint = (byte *)CONCAT31((int3)((uint)endpoint >> 8),bVar7);
  pbVar32 = pbVar25;
  if ((char)bVar7 < '\x01') goto code_r0x00402eb4;
  *pbVar31 = *pbVar31 + bVar5;
  pbVar11 = (byte *)CONCAT31((int3)(char)((uint)pbVar11 >> 8),bVar5 + 0x2d);
  *(byte **)(pbVar25 + (int)unaff_EDI * 8) =
       pbVar8 + (uint)(0xd2 < bVar5) + *(int *)(pbVar25 + (int)unaff_EDI * 8);
  uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
  do {
    bVar7 = *pbVar25;
    bVar5 = (byte)pbVar11;
    *pbVar25 = *pbVar25 + bVar5;
    if (!CARRY1(bVar7,bVar5)) break;
    *pbVar11 = *pbVar11 + bVar5;
    bVar5 = bVar5 | pbVar11[0x400001a];
    pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5);
    if ((char)bVar5 < '\x01') {
code_r0x00402ecc:
      *pbVar31 = *pbVar31 + (byte)pbVar31;
      uVar15 = (undefined3)((uint)pbVar31 >> 8);
      bVar7 = (byte)pbVar31 | pbVar31[0x400001b];
      puVar13 = (uint *)CONCAT31(uVar15,bVar7);
      if ((char)bVar7 < '\x01') {
        bVar5 = *pbVar8;
        *pbVar8 = *pbVar8 + (byte)endpoint;
        *(char *)((int)puVar13 * 2) = *(char *)((int)puVar13 * 2) - CARRY1(bVar5,(byte)endpoint);
        bVar34 = 0x81 < bVar7;
        bVar7 = bVar7 + 0x7e;
        goto code_r0x00402ef9;
      }
    }
    else {
      *pbVar31 = *pbVar31 + bVar5;
      pbVar32 = pbVar25;
code_r0x00402eb4:
      uVar15 = (undefined3)((uint)pbVar31 >> 8);
      bVar5 = (char)pbVar31 + 0x6f;
      puVar13 = (uint *)CONCAT31(uVar15,bVar5);
      *puVar13 = uStack_20;
      bVar7 = *pbVar8;
      *pbVar8 = *pbVar8 + (char)endpoint;
      uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
      in_SS = in_ES;
      if (*pbVar8 != 0 && SCARRY1(bVar7,(char)endpoint) == (char)*pbVar8 < '\0') {
        *(byte *)puVar13 = (char)*puVar13 + bVar5;
        bVar23 = (char)pbVar31 + 0x9c;
        pbVar31 = (byte *)CONCAT31(uVar15,bVar23);
        *(byte **)(pbVar32 + (int)unaff_EDI * 8) =
             pbVar8 + (uint)(0xd2 < bVar5) + *(int *)(pbVar32 + (int)unaff_EDI * 8);
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        bVar7 = *pbVar32;
        *pbVar32 = *pbVar32 + bVar23;
        pbVar25 = pbVar32;
        if (CARRY1(bVar7,bVar23)) goto code_r0x00402ecc;
        goto code_r0x00402e5a;
      }
      pbVar25 = pbVar32 + (uint)bVar33 * -8 + 4;
      out(*(undefined4 *)pbVar32,(short)pbVar8);
    }
    cVar6 = (char)puVar13;
    *(char *)puVar13 = (char)*puVar13 + cVar6;
    uVar15 = (undefined3)((uint)puVar13 >> 8);
    bVar5 = cVar6 + 0x6f;
    puVar13 = (uint *)CONCAT31(uVar15,bVar5);
    *puVar13 = uStack_20;
    bVar7 = *pbVar8;
    *pbVar8 = *pbVar8 + (byte)endpoint;
    uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
    pbVar25[0x1c] = (pbVar25[0x1c] - bVar29) - CARRY1(bVar7,(byte)endpoint);
    *(byte *)puVar13 = (char)*puVar13 + bVar5;
    bVar23 = cVar6 + 0x9c;
    pcVar9 = (char *)CONCAT31(uVar15,bVar23);
    *(byte **)(pbVar25 + (int)unaff_EDI * 8) =
         pbVar8 + (uint)(0xd2 < bVar5) + *(int *)(pbVar25 + (int)unaff_EDI * 8);
    bVar7 = *pbVar25;
    *pbVar25 = *pbVar25 + bVar23;
    if (!CARRY1(bVar7,bVar23)) goto code_r0x00402e7e;
    *pcVar9 = *pcVar9 + bVar23;
    bVar23 = bVar23 | pcVar9[0x400001c];
    pbVar11 = (byte *)CONCAT31(uVar15,bVar23);
    uStack_8 = in_ES;
    if ((char)bVar23 < '\x01') goto code_r0x00402f16;
    *pbVar11 = *pbVar11 + bVar23;
    puVar13 = (uint *)CONCAT31(uVar15,bVar23 + 0x6f);
    while( true ) {
      *puVar13 = uStack_20;
      bVar7 = *pbVar8;
      *pbVar8 = *pbVar8 + (byte)endpoint;
      *(uint *)(pbVar25 + 0x1d) =
           (*(int *)(pbVar25 + 0x1d) - (int)unaff_EDI) - (uint)CARRY1(bVar7,(byte)endpoint);
      bVar7 = (byte)puVar13;
      *(byte *)puVar13 = (char)*puVar13 + bVar7;
      bVar5 = bVar7 + 0x2d;
      pbVar11 = (byte *)CONCAT31((int3)((uint)puVar13 >> 8),bVar5);
      *(byte **)(pbVar25 + (int)unaff_EDI * 8) =
           pbVar8 + (uint)(0xd2 < bVar7) + *(int *)(pbVar25 + (int)unaff_EDI * 8);
      uStack_20 = CONCAT22((short)(uStack_20 >> 0x10),in_ES);
      bVar7 = *pbVar25;
      *pbVar25 = *pbVar25 + bVar5;
      if (!CARRY1(bVar7,bVar5)) break;
      *pbVar11 = *pbVar11 + bVar5;
code_r0x00402f16:
      bVar7 = (byte)pbVar11 | pbVar11[0x400001d];
      puVar13 = (uint *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar7);
      uVar2 = unaff_EBP;
      if ((char)bVar7 < '\x01') goto code_r0x00402f3b;
      while( true ) {
        unaff_EBP = uVar2;
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        uVar15 = (undefined3)((uint)puVar13 >> 8);
        cVar6 = (char)puVar13 + 'o';
        puVar12 = (uint *)CONCAT31(uVar15,cVar6);
        *puVar12 = uStack_20;
        cVar4 = (char)endpoint;
        *pbVar8 = *pbVar8 + cVar4;
        uStack_20 = CONCAT22(uStack_20._2_2_,in_ES);
        bVar7 = (byte)((uint)pbVar8 >> 8);
        pbVar8 = (byte *)CONCAT22((short)((uint)pbVar8 >> 0x10),
                                  CONCAT11(bVar7 - *pbVar25,(char)pbVar8));
        if (bVar7 < *pbVar25) break;
        bVar34 = CARRY4((uint)puVar12,*puVar12);
        puVar13 = (uint *)((int)puVar12 + *puVar12);
        if (!SCARRY4((int)puVar12,*puVar12)) {
          bVar34 = CARRY4(unaff_EBP,*puVar13);
          unaff_EBP = unaff_EBP + *puVar13;
        }
        *puVar13 = (*puVar13 - (int)puVar13) - (uint)bVar34;
        *pbVar8 = *pbVar8 + cVar4;
        endpoint = (byte *)CONCAT22((short)((uint)endpoint >> 0x10),
                                    CONCAT11((char)((uint)endpoint >> 8) + *pbVar8,cVar4 - *pbVar8))
        ;
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
code_r0x00402f3b:
        cVar4 = (char)pbVar8;
        *pbVar26 = *pbVar26 + cVar4;
        bVar7 = (byte)puVar13;
        *(byte *)((int)puVar13 * 2) = *(byte *)((int)puVar13 * 2) ^ bVar7;
        *(byte *)puVar13 = (byte)*puVar13 + bVar7;
        *(byte *)puVar13 = (byte)*puVar13 + cVar4;
        uVar2 = *puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + bVar7;
        *(byte **)pbVar8 = (byte *)((int)puVar13 + (uint)CARRY1((byte)uVar2,bVar7) + *(int *)pbVar8)
        ;
        pcVar9 = (char *)((uint)puVar13 | *unaff_EDI);
        uVar15 = (undefined3)((uint)pcVar9 >> 8);
        cVar6 = (char)pcVar9 + *pcVar9;
        pcVar9 = (char *)CONCAT31(uVar15,cVar6);
        *pcVar9 = *pcVar9 + cVar6;
        cVar6 = cVar6 + *pcVar9;
        piVar10 = (int *)CONCAT31(uVar15,cVar6);
        *(char *)piVar10 = (char)*piVar10 + cVar6;
        iVar16 = LocalDescriptorTableRegister();
        *piVar10 = iVar16;
        bVar7 = *pbVar26;
        bVar20 = (byte)((uint)endpoint >> 8);
        *pbVar26 = *pbVar26 + bVar20;
        iVar16 = *piVar10;
        uVar22 = (undefined2)((uint)endpoint >> 0x10);
        bVar19 = (byte)endpoint;
        *pbVar25 = *pbVar25 + cVar6;
        pbVar11 = pbVar25 + (uint)bVar33 * -8 + 4;
        out(*(undefined4 *)pbVar25,(short)pbVar8);
        *pbVar11 = *pbVar11 + cVar6;
        bVar5 = *pbVar26;
        *pbVar8 = *pbVar8 - bVar29;
        *pbVar11 = *pbVar11 + cVar6;
        pbVar31 = pbVar11 + (uint)bVar33 * -8 + 4;
        out(*(undefined4 *)pbVar11,(short)pbVar8);
        *pbVar31 = *pbVar31 + cVar6;
        bVar23 = *pbVar26;
        *(uint *)(pbVar8 + -0x23) = *(uint *)(pbVar8 + -0x23) & (uint)pbVar31;
        puVar14 = (ushort *)((int)piVar10 + *piVar10);
        if (!SCARRY4((int)piVar10,*piVar10)) {
          *puVar14 = in_SS;
        }
        *(char *)puVar14 = (char)*puVar14 + (char)puVar14;
        uVar24 = CONCAT11((char)((uint)pbVar8 >> 8) + pbVar8[-0x15],cVar4);
        pbVar8 = (byte *)CONCAT22((short)((uint)pbVar8 >> 0x10),uVar24);
        puVar13 = (uint *)((int)puVar14 + *(int *)puVar14);
        if (!SCARRY4((int)puVar14,*(int *)puVar14)) {
          *(ushort *)puVar13 = in_SS;
        }
        cVar6 = (char)puVar13;
        *(byte *)puVar13 = (byte)*puVar13 + cVar6;
        cVar21 = ((bVar20 - (char)iVar16) - CARRY1(bVar7,bVar20) | bVar5 | bVar23) + (byte)*puVar13;
        endpoint = (byte *)CONCAT22(uVar22,CONCAT11(cVar21,bVar19));
        bVar7 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar19;
        if (CARRY1(bVar7,bVar19)) {
          *(byte *)puVar13 = (byte)*puVar13 + cVar6;
          bVar7 = pbVar8[6];
          *pbVar8 = *pbVar8 + bVar19;
          bVar5 = (cVar21 - *pbVar31) + cRam14730307;
          *(byte *)puVar13 = (byte)*puVar13 + cVar6;
          bVar7 = bVar29 | bVar7 | pbVar8[0x2a];
          uVar2 = *puVar13;
          pbVar25 = (byte *)((int)puVar13 + (uint)CARRY1(bVar5,(byte)*puVar13) + *puVar13);
          *pbVar8 = *pbVar8 + bVar19;
          cVar6 = cVar3 - *pbVar31;
          cVar3 = bVar7 + *(char *)(CONCAT31((int3)(CONCAT22(uVar30,CONCAT11(bVar7,cVar3)) >> 8),
                                             cVar6) + 0x1e);
          *pbVar25 = *pbVar25 + (char)pbVar25;
          uVar15 = (undefined3)((uint)pbVar25 >> 8);
          bVar7 = (char)pbVar25 + 0x2aU & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar3 = cVar3 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar3,cVar6)) + 0x1f);
          *pcVar9 = *pcVar9 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar3 = cVar3 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar3,cVar6)) + 0x20);
          *pcVar9 = *pcVar9 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar3 = cVar3 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar3,cVar6)) + 0x21);
          *pcVar9 = *pcVar9 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          cVar3 = cVar3 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar3,cVar6)) + 0x22);
          *pcVar9 = *pcVar9 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          bVar5 = bVar5 + (byte)uVar2 + *pcVar9;
          uVar17 = CONCAT22(uVar22,CONCAT11(bVar5,bVar19));
          cVar3 = cVar3 + *(char *)(CONCAT22(uVar30,CONCAT11(cVar3,cVar6)) + 0x25);
          *pcVar9 = *pcVar9 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
          pcVar27 = (char *)CONCAT22(uVar30,CONCAT11(cVar3 + *(char *)(CONCAT22(uVar30,CONCAT11(
                                                  cVar3,cVar6)) + 0x26),cVar6));
          *pcVar9 = *pcVar9 + bVar7 + 0x2a;
          bVar7 = bVar7 + 0x54 & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          cVar6 = bVar7 + 0x2a;
          pcVar9 = (char *)CONCAT31(uVar15,cVar6);
          if ((POPCOUNT(cVar6) & 1U) == 0) {
            *pcVar9 = *pcVar9 + cVar6;
            pbVar25 = (byte *)(CONCAT31(uVar15,bVar7 + 0x4f) + -0x33282610);
            bVar7 = *pbVar25;
            bVar23 = (byte)pbVar25;
            *pbVar25 = *pbVar25 + bVar23;
            uVar15 = (undefined3)((uint)pbVar25 >> 8);
            if (!CARRY1(bVar7,bVar23)) {
              if (!SCARRY1(bVar23,'\0')) {
                *pbVar25 = *pbVar25 + bVar23;
                uVar17 = CONCAT22(uVar22,CONCAT11(bVar5 | *pbVar8,bVar19));
                bVar23 = bVar23 & *pbVar8;
                *(char *)CONCAT31(uVar15,bVar23) = *(char *)CONCAT31(uVar15,bVar23) + bVar23;
                pcVar9 = (char *)CONCAT31(uVar15,bVar23 + 0x2a);
                goto code_r0x00403058;
              }
              pcVar9 = (char *)CONCAT31(uVar15,bVar23 + *pcVar27);
              if (SCARRY1(bVar23,*pcVar27) != (char)(bVar23 + *pcVar27) < '\0')
              goto code_r0x00403072;
              goto code_r0x0040309a;
            }
            bVar7 = bVar23 + *pcVar27;
            pbVar25 = (byte *)CONCAT31(uVar15,bVar7);
            if (SCARRY1(bVar23,*pcVar27) == (char)bVar7 < '\0') {
              pcVar9 = (char *)CONCAT22(uVar22,CONCAT11(bVar5 | *pbVar8,bVar19));
              *pcVar27 = *pcVar27 + cVar4;
              *pbVar8 = *pbVar8 ^ bVar7;
              *(char *)((int)pbVar25 * 2) = *(char *)((int)pbVar25 * 2) + bVar7;
              goto code_r0x004030df;
            }
          }
          else {
code_r0x00403058:
            *pcVar9 = *pcVar9 + (char)pcVar9;
            uVar15 = (undefined3)((uint)pcVar9 >> 8);
            bVar7 = (char)pcVar9 + 0x2aU & *pbVar8;
            *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
            pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x2a);
            *pcVar9 = *pcVar9 + bVar7 + 0x2a;
            pcVar9 = (char *)CONCAT31(uVar15,bVar7 + 0x54 & *pbVar8);
code_r0x00403072:
            cVar6 = (char)pcVar9;
            *pcVar9 = *pcVar9 + cVar6;
            uVar15 = (undefined3)((uint)pcVar9 >> 8);
            pcVar9 = (char *)CONCAT31(uVar15,cVar6 + '*');
            *pcVar9 = *pcVar9 + cVar6 + '*';
            bVar7 = cVar6 + 0x54U & *pbVar8;
            *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
            pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_DS);
            uVar17 = CONCAT22((short)((uint)uVar17 >> 0x10),
                              CONCAT11((char)((uint)uVar17 >> 8) +
                                       *(char *)CONCAT31(uVar15,bVar7 + 0x2a),(char)uVar17));
            pbVar31[0x20a0000] = pbVar31[0x20a0000] - cVar4;
            pcVar9 = pcStack_58;
code_r0x0040309a:
            cVar6 = (char)pcVar9;
            *pcVar9 = *pcVar9 + cVar6;
            pcStack_58 = (char *)CONCAT22(pcStack_58._2_2_,in_ES);
            *pcVar9 = *pcVar9 + cVar6;
            pbVar25 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + 0x2aU & *pbVar8);
          }
          cVar6 = (char)pbVar25;
          *pbVar25 = *pbVar25 + cVar6;
          uVar15 = (undefined3)((uint)pbVar25 >> 8);
          cVar3 = cVar6 + '*';
          pcVar9 = (char *)CONCAT31(uVar15,cVar3);
          pbVar31[0x20a0000] = pbVar31[0x20a0000] - cVar4;
          *pcVar9 = *pcVar9 + cVar3;
          cVar21 = (char)pcStack_58 - *pbVar31;
          pcVar27 = (char *)CONCAT22((short)((uint)pcStack_58 >> 0x10),
                                     CONCAT11((char)((uint)pcStack_58 >> 8) +
                                              *(char *)(CONCAT31((int3)((uint)pcStack_58 >> 8),
                                                                 cVar21) + 0x34),cVar21));
          *pcVar9 = *pcVar9 + cVar3;
          bVar7 = cVar6 + 0x54U & *pbVar8;
          *(char *)CONCAT31(uVar15,bVar7) = *(char *)CONCAT31(uVar15,bVar7) + bVar7;
          pbVar25 = (byte *)CONCAT31(uVar15,bVar7 + 0x2a);
          bVar7 = (byte)((uint)uVar17 >> 8);
          pcVar9 = (char *)CONCAT22((short)((uint)uVar17 >> 0x10),
                                    CONCAT11(bVar7 + *pbVar25,(char)uVar17));
          pbVar25 = pbVar25 + (uint)CARRY1(bVar7,*pbVar25) + *(int *)pbVar25;
          *pbVar8 = *pbVar8 + (char)uVar17;
          uVar15 = (undefined3)((uint)pbVar25 >> 8);
          cVar6 = (byte)pbVar25 - *pbVar25;
          piVar10 = (int *)CONCAT31(uVar15,cVar6);
          pbVar31 = pbVar31 + (uint)((byte)pbVar25 < *pbVar25) + *piVar10;
          cVar6 = cVar6 + (char)*piVar10;
          pbVar25 = (byte *)CONCAT31(uVar15,cVar6);
          *pbVar25 = *pbVar25 + cVar6;
code_r0x004030df:
          *pcVar9 = *pcVar9 + cVar4;
          bVar7 = *pbVar25;
          bVar5 = (byte)pbVar25;
          *pbVar25 = *pbVar25 + bVar5;
          *(byte **)(pcVar27 + -0x41) =
               pbVar31 + (uint)CARRY1(bVar7,bVar5) + *(int *)(pcVar27 + -0x41);
          *pbVar25 = *pbVar25 + bVar5;
          uVar15 = (undefined3)((uint)pbVar25 >> 8);
          bVar5 = bVar5 | *pbVar31;
          *(char *)CONCAT31(uVar15,bVar5) = *(char *)CONCAT31(uVar15,bVar5) + bVar5;
          pcVar9 = (char *)CONCAT31(uVar15,bVar5 + 0x7b);
          *pcVar9 = *pcVar9 + bVar5 + 0x7b;
          pbVar31[CONCAT31(uVar15,bVar5 - 8) + -1] =
               pbVar31[CONCAT31(uVar15,bVar5 - 8) + -1] + (bVar5 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar25 = pbVar31 + (uint)bVar33 * -8 + 4;
        out(*(undefined4 *)pbVar31,uVar24);
        uVar2 = unaff_EBP + 1;
        uStack_20 = unaff_EBP;
      }
      bVar7 = cVar6 - (bVar7 < *pbVar25);
      pbVar11 = pbVar25 + (int)unaff_EDI * 2;
      bVar34 = CARRY1(*pbVar11,bVar7);
      *pbVar11 = *pbVar11 + bVar7;
code_r0x00402ef9:
      puVar13 = (uint *)CONCAT31(uVar15,bVar7 - bVar34);
      pbVar11 = (byte *)((int)unaff_EDI + unaff_EBP * 2);
      *pbVar11 = *pbVar11 + (bVar7 - bVar34);
    }
  } while( true );
code_r0x00402e36:
  *endpoint = *endpoint + (char)pbVar8;
  pbVar31 = pbVar8 + 0xa0a0000;
  bVar7 = *pbVar31;
  bVar23 = (byte)endpoint;
  *pbVar31 = *pbVar31 - bVar23;
  bVar5 = (byte)pbVar11 + *pbVar11;
  piVar10 = (int *)CONCAT31((int3)((uint)pbVar11 >> 8),bVar5 + (bVar7 < bVar23));
  puVar13 = unaff_EDI;
  if (CARRY1((byte)pbVar11,*pbVar11) || CARRY1(bVar5,bVar7 < bVar23)) goto code_r0x00402dff;
  goto code_r0x00402e42;
code_r0x00402e7e:
  *pcVar9 = *pcVar9 + bVar23;
  uStack_8 = in_ES;
  goto code_r0x00402e6e;
}


