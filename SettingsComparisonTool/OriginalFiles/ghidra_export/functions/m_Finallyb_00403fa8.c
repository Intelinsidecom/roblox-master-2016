/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403fa8
 * Raw Name    : <>m__Finallyb
 * Demangled   : <>m__Finallyb
 * Prototype   : void <>m__Finallyb(int param_1, uint * param_2)
 * Local Vars  : bVar2, bVar1, in_EAX, bVar3, pbVar5, uVar4, puVar7, piVar6, uVar9, pcVar8, pcVar11, uVar10, cVar13, uVar12, cVar15, cVar14, cVar16, unaff_EBX, unaff_EBP, uVar17, puVar18, unaff_ESI, in_ES, unaff_EDI, bVar20, param_1, bVar19, param_2, unaff_retaddr
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

void __fastcall <>m__Finallyb(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *in_EAX;
  undefined3 uVar9;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 uVar10;
  undefined2 uVar12;
  char *pcVar11;
  char cVar13;
  char cVar15;
  char cVar16;
  uint *unaff_EBX;
  undefined2 uVar17;
  int unaff_EBP;
  uint *unaff_ESI;
  uint *puVar18;
  int *unaff_EDI;
  undefined2 in_ES;
  bool bVar19;
  bool bVar20;
  int *unaff_retaddr;
  char cVar14;
  
  do {
    while( true ) {
                    /* .NET CLR Managed Code */
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000da7d);
      uVar9 = (undefined3)((uint)in_EAX >> 8);
      bVar1 = (byte)in_EAX | (byte)*param_2;
      pbVar5 = (byte *)CONCAT31(uVar9,bVar1);
      if ((POPCOUNT(bVar1) & 1U) == 0) break;
      unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x26));
      *pbVar5 = *pbVar5 + bVar1;
      cVar15 = (bVar1 | (byte)*param_2) - (char)unaff_EBX;
      in_EAX = (byte *)CONCAT31(uVar9,cVar15);
      *in_EAX = *in_EAX + cVar15;
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                            *(byte *)(unaff_EBP + -0x27),(char)unaff_EBX));
      *in_EAX = *in_EAX + cVar15;
      param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                         CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
      param_2._0_2_ = SUB42(param_2,0);
      out((byte)*unaff_ESI,param_2._0_2_);
      unaff_ESI = (uint *)((int)unaff_ESI + 1);
    }
    while( true ) {
      bVar2 = (byte)pbVar5;
      *pbVar5 = *pbVar5 + bVar2;
      bVar1 = *(byte *)((int)unaff_EBX + param_1);
      uVar12 = (undefined2)((uint)param_1 >> 0x10);
      cVar15 = (char)param_1;
      uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar10 = SUB41(unaff_EBX,0);
      cVar16 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x1d);
      unaff_EBX = (uint *)CONCAT22(uVar17,CONCAT11(cVar16,uVar10));
      *pbVar5 = *pbVar5 + bVar2;
      bVar3 = *(byte *)((int)unaff_EDI + 0x42);
      *pbVar5 = *pbVar5 + bVar2;
      bVar1 = (byte)((uint)param_1 >> 8) | bVar1 | bVar3 | (byte)*param_2;
      param_1 = CONCAT22(uVar12,CONCAT11(bVar1,cVar15));
      puVar18 = (uint *)((int)unaff_ESI + 1);
      out((byte)*unaff_ESI,(short)param_2);
      cVar14 = (char)param_2;
      cVar13 = cVar14 + (char)*unaff_EDI;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar13);
      if (SCARRY1(cVar14,(char)*unaff_EDI) == cVar13 < '\0') break;
      *pbVar5 = *pbVar5 + bVar2;
      bVar2 = bVar2 | (byte)*param_2;
      pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar2);
      if ((POPCOUNT(bVar2) & 1U) == 0) {
        *pbVar5 = *pbVar5 + bVar2;
        param_1 = CONCAT22(uVar12,CONCAT11(bVar1 | *(byte *)((int)unaff_EBX + param_1),cVar15));
        unaff_EBX = (uint *)CONCAT22(uVar17,CONCAT11(cVar16 + *(byte *)((int)unaff_EBX + -0x15),
                                                     uVar10));
        *pbVar5 = *pbVar5 + bVar2;
        while( true ) {
          bVar1 = *(byte *)((int)unaff_EDI + 0x42);
          uVar12 = (undefined2)((uint)param_1 >> 0x10);
          uVar10 = (undefined1)param_1;
          bVar3 = (byte)pbVar5;
          *pbVar5 = *pbVar5 + bVar3;
          bVar1 = (byte)((uint)param_1 >> 8) | bVar1 | (byte)*param_2;
          param_1 = CONCAT22(uVar12,CONCAT11(bVar1,uVar10));
          unaff_ESI = (uint *)((int)puVar18 + 1);
          out((byte)*puVar18,(short)param_2);
          cVar13 = (char)unaff_EBX;
          cVar15 = cVar13 + *pbVar5;
          unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar15);
          if (SCARRY1(cVar13,*pbVar5) == cVar15 < '\0') break;
          *pbVar5 = *pbVar5 + bVar3;
          bVar3 = bVar3 | (byte)*param_2;
          pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar5 >> 8),bVar3);
          puVar18 = unaff_ESI;
          if ((POPCOUNT(bVar3) & 1U) == 0) {
            *pbVar5 = *pbVar5 + bVar3;
            pcVar11 = (char *)CONCAT22(uVar12,CONCAT11(bVar1 | *(byte *)((int)unaff_EBX + param_1),
                                                       uVar10));
            do {
              cVar15 = (char)unaff_EBX;
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -0x12),cVar15));
              bVar3 = (byte)pbVar5;
              *pbVar5 = *pbVar5 + bVar3;
              bVar1 = *(byte *)((int)unaff_EDI + 0x42);
              *pbVar5 = *pbVar5 + bVar3;
              pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                         CONCAT11((byte)((uint)pcVar11 >> 8) | bVar1 |
                                                  (byte)*param_2,(char)pcVar11));
              *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_2;
              *(byte *)param_2 = (byte)*param_2 ^ bVar3;
              *pbVar5 = *pbVar5 + cVar15;
              while( true ) {
                bVar3 = (byte)pbVar5;
                *pbVar5 = *pbVar5 + bVar3;
                *pcVar11 = *pcVar11 + (char)((uint)pbVar5 >> 8);
                bVar1 = *pbVar5;
                *pbVar5 = *pbVar5 + bVar3;
                *unaff_EDI = (int)((int)unaff_EBX + (uint)CARRY1(bVar1,bVar3) + *unaff_EDI);
                *(byte *)((int)unaff_EBX + -3) = *(byte *)((int)unaff_EBX + -3) + 1;
                *pbVar5 = *pbVar5 + bVar3;
                pcVar11 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),(byte)pcVar11 | (byte)*param_2
                                          );
                unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                cVar13 = (char)unaff_EBX;
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(char *)(unaff_EBP + -2),cVar13));
                *pbVar5 = *pbVar5 + bVar3;
                uVar9 = (undefined3)((uint)pbVar5 >> 8);
                bVar3 = bVar3 | (byte)*unaff_ESI;
                unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
                *(char *)CONCAT31(uVar9,bVar3) = *(char *)CONCAT31(uVar9,bVar3) + bVar3;
                bVar3 = bVar3 | (byte)*unaff_ESI;
                pbVar5 = (byte *)CONCAT31(uVar9,bVar3);
                cVar15 = (char)param_2 - (byte)*unaff_EBX;
                param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar15);
                *(byte *)param_2 = (byte)*param_2 ^ bVar3;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar3;
                *pbVar5 = *pbVar5 + bVar3;
                bVar1 = *pbVar5;
                *pcVar11 = *pcVar11 + cVar15;
                bVar1 = (bVar3 & bVar1) - cVar13;
                *(char *)CONCAT31(uVar9,bVar1) = *(char *)CONCAT31(uVar9,bVar1) + bVar1;
                bVar1 = bVar1 | (byte)*param_2;
                pbVar5 = (byte *)CONCAT31(uVar9,bVar1);
                if ((POPCOUNT(bVar1) & 1U) != 0) break;
                *pbVar5 = *pbVar5 + bVar1;
                uVar4 = CONCAT31(uVar9,bVar1 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar1);
                *(byte *)((int)unaff_EDI + (int)unaff_EBX) =
                     *(byte *)((int)unaff_EDI + (int)unaff_EBX) + (char)uVar4;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + 1;
                pbVar5 = (byte *)(uVar4 | *param_2);
                bVar19 = (int)pbVar5 < 0;
                bVar20 = false;
                while (bVar20 != bVar19) {
                  *pbVar5 = *pbVar5 + (char)pbVar5;
                  uVar9 = (undefined3)((uint)pbVar5 >> 8);
                  bVar1 = (char)pbVar5 + 2;
                  piVar6 = (int *)CONCAT31(uVar9,bVar1);
                  uVar4 = *unaff_EBX;
                  puVar18 = (uint *)((int)param_2 + *unaff_ESI);
                  if (CARRY4((uint)param_2,*unaff_ESI)) {
                    *piVar6 = (int)(*piVar6 + (int)piVar6);
                    bVar1 = bVar1 | (byte)*unaff_ESI;
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                          (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                    *(char *)CONCAT31(uVar9,bVar1) = *(char *)CONCAT31(uVar9,bVar1) + bVar1;
                    piVar6 = (int *)CONCAT31(uVar9,bVar1 + 0x7d);
                  }
                  bVar1 = *(byte *)((int)unaff_EBX + -0x42);
                  *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
                  cVar15 = (char)piVar6 + '}';
                  pbVar5 = (byte *)CONCAT31((int3)((uint)piVar6 >> 8),cVar15);
                  unaff_EBP = 0x6040000;
                  unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                               CONCAT11((char)((uint)unaff_EBX >> 8)
                                                                        + bVar1,(char)unaff_EBX)) >>
                                                     8),(char)unaff_EBX - (byte)*unaff_ESI);
                  pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                             CONCAT11(((byte)((uint)pcVar11 >> 8) | (byte)uVar4) +
                                                      *pbVar5,(char)pcVar11));
                  *pcVar11 = *pcVar11 + cVar15;
                  *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar15;
code_r0x00404076:
                  piVar6 = (int *)CONCAT31((int3)((uint)pbVar5 >> 8),(byte)pbVar5 - *pbVar5);
                  unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)((byte)pbVar5 < *pbVar5) - *piVar6))
                  ;
                  pbVar5 = (byte *)((int)piVar6 + *piVar6);
                  bVar3 = (byte)pbVar5;
                  *pbVar5 = *pbVar5 + bVar3;
                  *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)pbVar5 >> 8);
                  bVar1 = *pbVar5;
                  *pbVar5 = *pbVar5 + bVar3;
                  *puVar18 = (uint)(pbVar5 + (uint)CARRY1(bVar1,bVar3) + *puVar18);
                  bVar19 = (POPCOUNT(*puVar18 & 0xff) & 1U) == 0;
                  while (bVar19) {
                    *pbVar5 = *pbVar5 + (char)pbVar5;
                    in_ES = SUB42(unaff_retaddr,0);
                    unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
                    pbVar5 = (byte *)((uint)pbVar5 & 0xffffff00);
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) -
                                                          (byte)*unaff_EBX,(char)unaff_EBX));
code_r0x00404092:
                    puVar7 = (undefined1 *)((uint)pbVar5 & 0xffffff00);
                    *puVar7 = *puVar7;
                    *puVar7 = *puVar7;
                    *(byte *)puVar18 = (byte)*puVar18;
                    cVar13 = (char)(puVar7 + 0xba7d);
                    uVar9 = (undefined3)((uint)(puVar7 + 0xba7d) >> 8);
                    cVar15 = cVar13 + '\x02';
                    pcVar8 = (char *)CONCAT31(uVar9,cVar15);
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                          (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                    *pcVar8 = *pcVar8 + cVar15;
                    pbVar5 = (byte *)CONCAT31(uVar9,cVar13 + 'q');
                    do {
                      bVar1 = *pbVar5;
                      bVar3 = (byte)pbVar5;
                      *pbVar5 = *pbVar5 + bVar3;
                      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                      if (!CARRY1(bVar1,bVar3)) goto code_r0x00404092;
                      *pbVar5 = *pbVar5 + bVar3;
                      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                            bRam0603ffbf,(char)unaff_EBX));
                      *pbVar5 = *pbVar5 + bVar3;
                      uVar9 = (undefined3)((uint)pbVar5 >> 8);
                      bVar1 = bVar3 + 2;
                      pbVar5 = (byte *)CONCAT31(uVar9,bVar1);
                      if (SCARRY1(bVar3,'\x02') == (char)bVar1 < '\0') goto code_r0x00404076;
                      *pbVar5 = *pbVar5 + bVar1;
                      bVar2 = bVar3 + 4;
                      pbVar5 = (byte *)CONCAT31(uVar9,bVar2);
                    } while (0xfd < bVar1);
                    *pbVar5 = *pbVar5 | bVar2;
                    bVar19 = (POPCOUNT(*pbVar5) & 1U) == 0;
                    if (bVar19) {
                      *pbVar5 = *pbVar5 + bVar2;
                      bVar3 = bVar3 + 0x2c;
                      *(char *)CONCAT31(uVar9,bVar3) = *(char *)CONCAT31(uVar9,bVar3) + bVar3;
                      bVar3 = bVar3 | (byte)*puVar18;
                      pbVar5 = (byte *)CONCAT31(uVar9,bVar3);
                      unaff_EDI = unaff_retaddr;
                      if ((POPCOUNT(bVar3) & 1U) == 0) {
                        *pbVar5 = *pbVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      goto code_r0x00404092;
                    }
                  }
                  pcVar11 = (char *)((uint)pcVar11 ^ *unaff_EBX);
                  cVar15 = (char)puVar18 + (byte)*unaff_ESI;
                  param_2 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),cVar15);
                  bVar19 = cVar15 < '\0';
                  bVar20 = SCARRY1((char)puVar18,(byte)*unaff_ESI);
                }
              }
            } while( true );
          }
        }
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar15;
        unaff_ESI = (uint *)((int)unaff_ESI + 5);
        out(*puVar18,(short)param_2);
      }
      param_2 = (uint *)((int)param_2 + 1);
    }
    *(byte *)param_2 = (byte)*param_2 + cVar15;
    param_1 = CONCAT22(uVar12,CONCAT11(bVar1 - *(byte *)((int)unaff_ESI + 3),cVar15));
    in_EAX = pbVar5 + (bVar1 < *(byte *)((int)unaff_ESI + 3)) + 0xda7d;
    unaff_ESI = puVar18;
  } while( true );
}


