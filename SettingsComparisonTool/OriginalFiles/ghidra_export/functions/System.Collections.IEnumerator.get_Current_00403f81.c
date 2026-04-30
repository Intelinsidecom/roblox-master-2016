/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403f81
 * Raw Name    : System.Collections.IEnumerator.get_Current
 * Demangled   : System.Collections.IEnumerator.get_Current
 * Prototype   : pointer System.Collections.IEnumerator.get_Current(int param_1, uint * param_2)
 * Local Vars  : uStack_4, puVar2, iVar1, bVar4, cVar3, in_EAX, bVar5, pbVar7, uVar6, puVar9, piVar8, uVar11, pcVar10, bVar13, uVar12, pcVar15, uVar14, cVar17, uVar16, unaff_EBX, cVar18, cVar20, puVar19, unaff_EBP, uVar21, puVar22, unaff_ESI, in_ES, unaff_EDI, bVar24, bVar23, unaff_retaddr, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

undefined * __fastcall System_Collections_IEnumerator_get_Current(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte *in_EAX;
  uint3 uVar11;
  undefined3 uVar12;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  undefined1 *puVar9;
  char *pcVar10;
  byte bVar13;
  undefined1 uVar14;
  undefined2 uVar16;
  char *pcVar15;
  char cVar17;
  char cVar20;
  int unaff_EBX;
  undefined2 uVar21;
  uint *puVar19;
  int unaff_EBP;
  uint *unaff_ESI;
  uint *puVar22;
  int *unaff_EDI;
  undefined2 in_ES;
  bool bVar23;
  bool bVar24;
  int *unaff_retaddr;
  undefined2 uStack_4;
  char cVar18;
  
                    /* .NET CLR Managed Code */
  puVar19 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -10),
                                      (char)unaff_EBX));
  while( true ) {
    *in_EAX = *in_EAX + (char)in_EAX;
    bVar13 = (byte)param_1 | *(byte *)((int)(unaff_EDI + 0xa86c000) + (int)in_EAX);
    bVar4 = *in_EAX;
    bVar5 = (byte)((uint)param_1 >> 8);
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar5 + *in_EAX,bVar13));
    iVar1 = *(int *)in_EAX;
    *(byte *)param_2 = (char)*param_2 + bVar13;
    cVar17 = (char)(in_EAX + (uint)CARRY1(bVar5,bVar4) + iVar1);
    uVar11 = (uint3)((uint)(in_EAX + (uint)CARRY1(bVar5,bVar4) + iVar1) >> 8);
    cVar3 = cVar17 + (byte)*puVar19;
    pbVar7 = (byte *)CONCAT31(uVar11,cVar3);
    if (SCARRY1(cVar17,(byte)*puVar19) != cVar3 < '\0') break;
    *pbVar7 = *pbVar7 + cVar3;
    in_EAX = (byte *)((uint)uVar11 << 8);
    uStack_4 = SUB42(param_2,0);
    while( true ) {
      bVar4 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar4;
      *in_EAX = *in_EAX + bVar4;
      bVar4 = bVar4 ^ (byte)*param_2;
      in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
      in_ES = uStack_4;
      if ((POPCOUNT(bVar4) & 1U) == 0) break;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar4;
    }
  }
  do {
    while( true ) {
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      uVar12 = (undefined3)((uint)pbVar7 >> 8);
      bVar4 = ((byte)pbVar7 | (byte)*param_2) - (char)puVar19;
      pcVar15 = (char *)CONCAT31(uVar12,bVar4);
      *pcVar15 = *pcVar15 + bVar4;
      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                 CONCAT11((byte)((uint)puVar19 >> 8) | *(byte *)(unaff_EBP + -0x27),
                                          (char)puVar19));
      *pcVar15 = *pcVar15 + bVar4;
      param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                         CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
      puVar22 = (uint *)((int)unaff_ESI + 1);
      out((byte)*unaff_ESI,(short)param_2);
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000da7d);
      bVar4 = bVar4 | (byte)*param_2;
      pbVar7 = (byte *)CONCAT31(uVar12,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) break;
      unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x26));
      unaff_ESI = puVar22;
    }
    while( true ) {
      bVar5 = (byte)pbVar7;
      *pbVar7 = *pbVar7 + bVar5;
      bVar4 = *(byte *)((int)puVar19 + param_1);
      uVar16 = (undefined2)((uint)param_1 >> 0x10);
      cVar3 = (char)param_1;
      uVar21 = (undefined2)((uint)puVar19 >> 0x10);
      uVar14 = SUB41(puVar19,0);
      cVar20 = (char)((uint)puVar19 >> 8) + *(byte *)((int)puVar19 + -0x1d);
      puVar19 = (uint *)CONCAT22(uVar21,CONCAT11(cVar20,uVar14));
      *pbVar7 = *pbVar7 + bVar5;
      bVar13 = *(byte *)((int)unaff_EDI + 0x42);
      *pbVar7 = *pbVar7 + bVar5;
      bVar4 = (byte)((uint)param_1 >> 8) | bVar4 | bVar13 | (byte)*param_2;
      param_1 = CONCAT22(uVar16,CONCAT11(bVar4,cVar3));
      unaff_ESI = (uint *)((int)puVar22 + 1);
      out((byte)*puVar22,(short)param_2);
      cVar18 = (char)param_2;
      cVar17 = cVar18 + (char)*unaff_EDI;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar17);
      if (SCARRY1(cVar18,(char)*unaff_EDI) == cVar17 < '\0') break;
      *pbVar7 = *pbVar7 + bVar5;
      bVar5 = bVar5 | (byte)*param_2;
      pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar7 = *pbVar7 + bVar5;
        param_1 = CONCAT22(uVar16,CONCAT11(bVar4 | *(byte *)((int)puVar19 + param_1),cVar3));
        puVar19 = (uint *)CONCAT22(uVar21,CONCAT11(cVar20 + *(byte *)((int)puVar19 + -0x15),uVar14))
        ;
        *pbVar7 = *pbVar7 + bVar5;
        while( true ) {
          bVar4 = *(byte *)((int)unaff_EDI + 0x42);
          uVar16 = (undefined2)((uint)param_1 >> 0x10);
          uVar14 = (undefined1)param_1;
          bVar13 = (byte)pbVar7;
          *pbVar7 = *pbVar7 + bVar13;
          bVar4 = (byte)((uint)param_1 >> 8) | bVar4 | (byte)*param_2;
          param_1 = CONCAT22(uVar16,CONCAT11(bVar4,uVar14));
          puVar22 = (uint *)((int)unaff_ESI + 1);
          out((byte)*unaff_ESI,(short)param_2);
          cVar17 = (char)puVar19;
          cVar3 = cVar17 + *pbVar7;
          puVar19 = (uint *)CONCAT31((int3)((uint)puVar19 >> 8),cVar3);
          if (SCARRY1(cVar17,*pbVar7) == cVar3 < '\0') break;
          *pbVar7 = *pbVar7 + bVar13;
          bVar13 = bVar13 | (byte)*param_2;
          pbVar7 = (byte *)CONCAT31((int3)((uint)pbVar7 >> 8),bVar13);
          unaff_ESI = puVar22;
          if ((POPCOUNT(bVar13) & 1U) == 0) {
            *pbVar7 = *pbVar7 + bVar13;
            pcVar15 = (char *)CONCAT22(uVar16,CONCAT11(bVar4 | *(byte *)((int)puVar19 + param_1),
                                                       uVar14));
            do {
              cVar3 = (char)puVar19;
              puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                         CONCAT11((char)((uint)puVar19 >> 8) +
                                                  *(byte *)((int)puVar19 + -0x12),cVar3));
              bVar13 = (byte)pbVar7;
              *pbVar7 = *pbVar7 + bVar13;
              bVar4 = *(byte *)((int)unaff_EDI + 0x42);
              *pbVar7 = *pbVar7 + bVar13;
              pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pcVar15 >> 8) | bVar4 |
                                                  (byte)*param_2,(char)pcVar15));
              *(byte *)puVar19 = (byte)*puVar19 + (char)param_2;
              *(byte *)param_2 = (byte)*param_2 ^ bVar13;
              *pbVar7 = *pbVar7 + cVar3;
              while( true ) {
                bVar13 = (byte)pbVar7;
                *pbVar7 = *pbVar7 + bVar13;
                *pcVar15 = *pcVar15 + (char)((uint)pbVar7 >> 8);
                bVar4 = *pbVar7;
                *pbVar7 = *pbVar7 + bVar13;
                *unaff_EDI = (int)((int)puVar19 + (uint)CARRY1(bVar4,bVar13) + *unaff_EDI);
                *(byte *)((int)puVar19 + -3) = *(byte *)((int)puVar19 + -3) + 1;
                *pbVar7 = *pbVar7 + bVar13;
                pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | (byte)*param_2
                                          );
                unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                cVar17 = (char)puVar19;
                puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                           CONCAT11((char)((uint)puVar19 >> 8) +
                                                    *(char *)(unaff_EBP + -2),cVar17));
                *pbVar7 = *pbVar7 + bVar13;
                uVar12 = (undefined3)((uint)pbVar7 >> 8);
                bVar13 = bVar13 | (byte)*puVar22;
                unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
                *(char *)CONCAT31(uVar12,bVar13) = *(char *)CONCAT31(uVar12,bVar13) + bVar13;
                bVar13 = bVar13 | (byte)*puVar22;
                pbVar7 = (byte *)CONCAT31(uVar12,bVar13);
                cVar3 = (char)param_2 - (byte)*puVar19;
                param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar3);
                *(byte *)param_2 = (byte)*param_2 ^ bVar13;
                *(byte *)puVar19 = (byte)*puVar19 + bVar13;
                *pbVar7 = *pbVar7 + bVar13;
                bVar4 = *pbVar7;
                *pcVar15 = *pcVar15 + cVar3;
                bVar4 = (bVar13 & bVar4) - cVar17;
                *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
                bVar4 = bVar4 | (byte)*param_2;
                pbVar7 = (byte *)CONCAT31(uVar12,bVar4);
                if ((POPCOUNT(bVar4) & 1U) != 0) break;
                *pbVar7 = *pbVar7 + bVar4;
                uVar6 = CONCAT31(uVar12,bVar4 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar4);
                *(byte *)((int)unaff_EDI + (int)puVar19) =
                     *(byte *)((int)unaff_EDI + (int)puVar19) + (char)uVar6;
                *(byte *)puVar19 = (byte)*puVar19 + 1;
                pbVar7 = (byte *)(uVar6 | *param_2);
                bVar23 = (int)pbVar7 < 0;
                bVar24 = false;
                while (bVar24 != bVar23) {
                  *pbVar7 = *pbVar7 + (char)pbVar7;
                  uVar12 = (undefined3)((uint)pbVar7 >> 8);
                  bVar4 = (char)pbVar7 + 2;
                  piVar8 = (int *)CONCAT31(uVar12,bVar4);
                  uVar6 = *puVar19;
                  puVar2 = (uint *)((int)param_2 + *puVar22);
                  if (CARRY4((uint)param_2,*puVar22)) {
                    *piVar8 = (int)(*piVar8 + (int)piVar8);
                    bVar4 = bVar4 | (byte)*puVar22;
                    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11((char)((uint)puVar19 >> 8) +
                                                        (byte)puVar19[-0x11],(char)puVar19));
                    *(char *)CONCAT31(uVar12,bVar4) = *(char *)CONCAT31(uVar12,bVar4) + bVar4;
                    piVar8 = (int *)CONCAT31(uVar12,bVar4 + 0x7d);
                  }
                  bVar4 = *(byte *)((int)puVar19 + -0x42);
                  *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
                  cVar3 = (char)piVar8 + '}';
                  pbVar7 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar3);
                  unaff_EBP = 0x6040000;
                  puVar19 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar19 >> 0x10),
                                                             CONCAT11((char)((uint)puVar19 >> 8) +
                                                                      bVar4,(char)puVar19)) >> 8),
                                             (char)puVar19 - (byte)*puVar22);
                  pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                             CONCAT11(((byte)((uint)pcVar15 >> 8) | (byte)uVar6) +
                                                      *pbVar7,(char)pcVar15));
                  *pcVar15 = *pcVar15 + cVar3;
                  *(byte *)puVar22 = (byte)*puVar22 + cVar3;
code_r0x00404076:
                  piVar8 = (int *)CONCAT31((int3)((uint)pbVar7 >> 8),(byte)pbVar7 - *pbVar7);
                  puVar22 = (uint *)((int)puVar22 + (-(uint)((byte)pbVar7 < *pbVar7) - *piVar8));
                  pbVar7 = (byte *)((int)piVar8 + *piVar8);
                  bVar13 = (byte)pbVar7;
                  *pbVar7 = *pbVar7 + bVar13;
                  *(byte *)puVar19 = (byte)*puVar19 + (char)((uint)pbVar7 >> 8);
                  bVar4 = *pbVar7;
                  *pbVar7 = *pbVar7 + bVar13;
                  *puVar2 = (uint)(pbVar7 + (uint)CARRY1(bVar4,bVar13) + *puVar2);
                  bVar23 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
                  while (bVar23) {
                    *pbVar7 = *pbVar7 + (char)pbVar7;
                    in_ES = SUB42(unaff_retaddr,0);
                    unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
                    pbVar7 = (byte *)((uint)pbVar7 & 0xffffff00);
                    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11((char)((uint)puVar19 >> 8) - (byte)*puVar19,
                                                        (char)puVar19));
code_r0x00404092:
                    puVar9 = (undefined1 *)((uint)pbVar7 & 0xffffff00);
                    *puVar9 = *puVar9;
                    *puVar9 = *puVar9;
                    *(byte *)puVar2 = (byte)*puVar2;
                    cVar17 = (char)(puVar9 + 0xba7d);
                    uVar12 = (undefined3)((uint)(puVar9 + 0xba7d) >> 8);
                    cVar3 = cVar17 + '\x02';
                    pcVar10 = (char *)CONCAT31(uVar12,cVar3);
                    puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                               CONCAT11((char)((uint)puVar19 >> 8) +
                                                        (byte)puVar19[-0x11],(char)puVar19));
                    *pcVar10 = *pcVar10 + cVar3;
                    pbVar7 = (byte *)CONCAT31(uVar12,cVar17 + 'q');
                    do {
                      bVar4 = *pbVar7;
                      bVar13 = (byte)pbVar7;
                      *pbVar7 = *pbVar7 + bVar13;
                      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                      if (!CARRY1(bVar4,bVar13)) goto code_r0x00404092;
                      *pbVar7 = *pbVar7 + bVar13;
                      puVar19 = (uint *)CONCAT22((short)((uint)puVar19 >> 0x10),
                                                 CONCAT11((byte)((uint)puVar19 >> 8) | bRam0603ffbf,
                                                          (char)puVar19));
                      *pbVar7 = *pbVar7 + bVar13;
                      uVar12 = (undefined3)((uint)pbVar7 >> 8);
                      bVar4 = bVar13 + 2;
                      pbVar7 = (byte *)CONCAT31(uVar12,bVar4);
                      if (SCARRY1(bVar13,'\x02') == (char)bVar4 < '\0') goto code_r0x00404076;
                      *pbVar7 = *pbVar7 + bVar4;
                      bVar5 = bVar13 + 4;
                      pbVar7 = (byte *)CONCAT31(uVar12,bVar5);
                    } while (0xfd < bVar4);
                    *pbVar7 = *pbVar7 | bVar5;
                    bVar23 = (POPCOUNT(*pbVar7) & 1U) == 0;
                    if (bVar23) {
                      *pbVar7 = *pbVar7 + bVar5;
                      bVar13 = bVar13 + 0x2c;
                      *(char *)CONCAT31(uVar12,bVar13) = *(char *)CONCAT31(uVar12,bVar13) + bVar13;
                      bVar13 = bVar13 | (byte)*puVar2;
                      pbVar7 = (byte *)CONCAT31(uVar12,bVar13);
                      unaff_EDI = unaff_retaddr;
                      if ((POPCOUNT(bVar13) & 1U) == 0) {
                        *pbVar7 = *pbVar7 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      goto code_r0x00404092;
                    }
                  }
                  pcVar15 = (char *)((uint)pcVar15 ^ *puVar19);
                  cVar3 = (char)puVar2 + (byte)*puVar22;
                  param_2 = (uint *)CONCAT31((int3)((uint)puVar2 >> 8),cVar3);
                  bVar23 = cVar3 < '\0';
                  bVar24 = SCARRY1((char)puVar2,(byte)*puVar22);
                }
              }
            } while( true );
          }
        }
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar3;
        puVar22 = (uint *)((int)puVar22 + 5);
        out(*unaff_ESI,(short)param_2);
      }
      param_2 = (uint *)((int)param_2 + 1);
    }
    *(byte *)param_2 = (byte)*param_2 + cVar3;
    param_1 = CONCAT22(uVar16,CONCAT11(bVar4 - *(byte *)((int)puVar22 + 3),cVar3));
    pbVar7 = pbVar7 + (bVar4 < *(byte *)((int)puVar22 + 3)) + 0xda7d;
  } while( true );
}


