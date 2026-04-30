/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403fc4
 * Raw Name    : <>m__Finallyc
 * Demangled   : <>m__Finallyc
 * Prototype   : void <>m__Finallyc(int param_1, uint * param_2)
 * Local Vars  : puVar2, bVar1, bVar4, bVar3, pbVar5, in_EAX, piVar7, uVar6, pcVar9, puVar8, uVar11, uVar10, pcVar13, iVar12, uVar15, bVar14, cVar17, cVar16, unaff_EBX, cVar18, unaff_EBP, uVar19, puVar20, unaff_ESI, in_ES, unaff_EDI, bVar22, bVar21, unaff_retaddr, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

void __fastcall <>m__Finallyc(int param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined3 uVar10;
  byte *in_EAX;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 uVar11;
  byte bVar14;
  int iVar12;
  undefined2 uVar15;
  char *pcVar13;
  char cVar16;
  char cVar18;
  undefined2 uVar19;
  uint *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  uint *puVar20;
  int *unaff_EDI;
  undefined2 in_ES;
  bool bVar21;
  bool bVar22;
  int *unaff_retaddr;
  char cVar17;
  
  do {
                    /* .NET CLR Managed Code */
    cVar17 = (char)param_2;
    cVar16 = cVar17 + (char)*unaff_EDI;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar16);
    uVar15 = (undefined2)((uint)param_1 >> 0x10);
    cVar18 = (char)param_1;
    bVar14 = (byte)((uint)param_1 >> 8);
    if (SCARRY1(cVar17,(char)*unaff_EDI) == cVar16 < '\0') {
      *(byte *)param_2 = (byte)*param_2 + cVar18;
      iVar12 = CONCAT22(uVar15,CONCAT11(bVar14 - *(byte *)((int)unaff_ESI + 2),cVar18));
      pbVar5 = in_EAX + (bVar14 < *(byte *)((int)unaff_ESI + 2)) + 0xda7d;
      puVar20 = unaff_ESI;
      while( true ) {
        uVar10 = (undefined3)((uint)pbVar5 >> 8);
        bVar14 = (byte)pbVar5 | (byte)*param_2;
        in_EAX = (byte *)CONCAT31(uVar10,bVar14);
        bVar4 = (byte)((uint)unaff_EBX >> 8);
        uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
        bVar3 = (byte)((uint)iVar12 >> 8);
        uVar15 = (undefined2)((uint)iVar12 >> 0x10);
        cVar18 = (char)unaff_EBX;
        if ((POPCOUNT(bVar14) & 1U) == 0) break;
        unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x26));
        *in_EAX = *in_EAX + bVar14;
        cVar16 = (bVar14 | (byte)*param_2) - cVar18;
        pbVar5 = (byte *)CONCAT31(uVar10,cVar16);
        *pbVar5 = *pbVar5 + cVar16;
        unaff_EBX = (uint *)CONCAT22(uVar19,CONCAT11(bVar4 | *(byte *)(unaff_EBP + -0x27),cVar18));
        *pbVar5 = *pbVar5 + cVar16;
        iVar12 = CONCAT22(uVar15,CONCAT11(bVar3 | (byte)*param_2,(char)iVar12));
        out((byte)*puVar20,(short)param_2);
        param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000da7d);
        puVar20 = (uint *)((int)puVar20 + 1);
      }
      *in_EAX = *in_EAX + bVar14;
      bVar1 = *(byte *)((int)unaff_EBX + iVar12);
      unaff_EBX = (uint *)CONCAT22(uVar19,CONCAT11(bVar4 + *(byte *)((int)unaff_EBX + -0x1d),cVar18)
                                  );
      *in_EAX = *in_EAX + bVar14;
      param_1 = CONCAT22(uVar15,CONCAT11(bVar3 | bVar1 | *(byte *)((int)unaff_EDI + 0x42),
                                         (char)iVar12));
    }
    else {
      *in_EAX = *in_EAX + (byte)in_EAX;
      bVar3 = (byte)in_EAX | (byte)*param_2;
      in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
      if ((POPCOUNT(bVar3) & 1U) == 0) {
        *in_EAX = *in_EAX + bVar3;
        param_1 = CONCAT22(uVar15,CONCAT11(bVar14 | *(byte *)((int)unaff_EBX + param_1),cVar18));
        unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((char)((uint)unaff_EBX >> 8) +
                                              *(byte *)((int)unaff_EBX + -0x15),(char)unaff_EBX));
        *in_EAX = *in_EAX + bVar3;
        while( true ) {
          bVar14 = *(byte *)((int)unaff_EDI + 0x42);
          uVar15 = (undefined2)((uint)param_1 >> 0x10);
          uVar11 = (undefined1)param_1;
          bVar3 = (byte)in_EAX;
          *in_EAX = *in_EAX + bVar3;
          bVar14 = (byte)((uint)param_1 >> 8) | bVar14 | (byte)*param_2;
          param_1 = CONCAT22(uVar15,CONCAT11(bVar14,uVar11));
          puVar20 = (uint *)((int)unaff_ESI + 1);
          out((byte)*unaff_ESI,(short)param_2);
          cVar16 = (char)unaff_EBX;
          cVar18 = cVar16 + *in_EAX;
          unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar18);
          if (SCARRY1(cVar16,*in_EAX) == cVar18 < '\0') break;
          *in_EAX = *in_EAX + bVar3;
          bVar3 = bVar3 | (byte)*param_2;
          in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
          unaff_ESI = puVar20;
          if ((POPCOUNT(bVar3) & 1U) == 0) {
            *in_EAX = *in_EAX + bVar3;
            pcVar13 = (char *)CONCAT22(uVar15,CONCAT11(bVar14 | *(byte *)((int)unaff_EBX + param_1),
                                                       uVar11));
            do {
              cVar18 = (char)unaff_EBX;
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -0x12),cVar18));
              bVar3 = (byte)in_EAX;
              *in_EAX = *in_EAX + bVar3;
              bVar14 = *(byte *)((int)unaff_EDI + 0x42);
              *in_EAX = *in_EAX + bVar3;
              pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                         CONCAT11((byte)((uint)pcVar13 >> 8) | bVar14 |
                                                  (byte)*param_2,(char)pcVar13));
              *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_2;
              *(byte *)param_2 = (byte)*param_2 ^ bVar3;
              *in_EAX = *in_EAX + cVar18;
              while( true ) {
                bVar3 = (byte)in_EAX;
                *in_EAX = *in_EAX + bVar3;
                *pcVar13 = *pcVar13 + (char)((uint)in_EAX >> 8);
                bVar14 = *in_EAX;
                *in_EAX = *in_EAX + bVar3;
                *unaff_EDI = (int)((int)unaff_EBX + (uint)CARRY1(bVar14,bVar3) + *unaff_EDI);
                *(byte *)((int)unaff_EBX + -3) = *(byte *)((int)unaff_EBX + -3) + 1;
                *in_EAX = *in_EAX + bVar3;
                pcVar13 = (char *)CONCAT31((int3)((uint)pcVar13 >> 8),(byte)pcVar13 | (byte)*param_2
                                          );
                unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                cVar16 = (char)unaff_EBX;
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(char *)(unaff_EBP + -2),cVar16));
                *in_EAX = *in_EAX + bVar3;
                uVar10 = (undefined3)((uint)in_EAX >> 8);
                bVar3 = bVar3 | (byte)*puVar20;
                unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
                *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
                bVar3 = bVar3 | (byte)*puVar20;
                pbVar5 = (byte *)CONCAT31(uVar10,bVar3);
                cVar18 = (char)param_2 - (byte)*unaff_EBX;
                param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar18);
                *(byte *)param_2 = (byte)*param_2 ^ bVar3;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar3;
                *pbVar5 = *pbVar5 + bVar3;
                bVar14 = *pbVar5;
                *pcVar13 = *pcVar13 + cVar18;
                bVar14 = (bVar3 & bVar14) - cVar16;
                *(char *)CONCAT31(uVar10,bVar14) = *(char *)CONCAT31(uVar10,bVar14) + bVar14;
                bVar14 = bVar14 | (byte)*param_2;
                in_EAX = (byte *)CONCAT31(uVar10,bVar14);
                if ((POPCOUNT(bVar14) & 1U) != 0) break;
                *in_EAX = *in_EAX + bVar14;
                uVar6 = CONCAT31(uVar10,bVar14 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar14);
                *(byte *)((int)unaff_EDI + (int)unaff_EBX) =
                     *(byte *)((int)unaff_EDI + (int)unaff_EBX) + (char)uVar6;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + 1;
                in_EAX = (byte *)(uVar6 | *param_2);
                bVar21 = (int)in_EAX < 0;
                bVar22 = false;
                while (bVar22 != bVar21) {
                  *in_EAX = *in_EAX + (char)in_EAX;
                  uVar10 = (undefined3)((uint)in_EAX >> 8);
                  bVar14 = (char)in_EAX + 2;
                  piVar7 = (int *)CONCAT31(uVar10,bVar14);
                  uVar6 = *unaff_EBX;
                  puVar2 = (uint *)((int)param_2 + *puVar20);
                  if (CARRY4((uint)param_2,*puVar20)) {
                    *piVar7 = (int)(*piVar7 + (int)piVar7);
                    bVar14 = bVar14 | (byte)*puVar20;
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                          (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                    *(char *)CONCAT31(uVar10,bVar14) = *(char *)CONCAT31(uVar10,bVar14) + bVar14;
                    piVar7 = (int *)CONCAT31(uVar10,bVar14 + 0x7d);
                  }
                  bVar14 = *(byte *)((int)unaff_EBX + -0x42);
                  *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
                  cVar18 = (char)piVar7 + '}';
                  pbVar5 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),cVar18);
                  unaff_EBP = 0x6040000;
                  unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                               CONCAT11((char)((uint)unaff_EBX >> 8)
                                                                        + bVar14,(char)unaff_EBX))
                                                     >> 8),(char)unaff_EBX - (byte)*puVar20);
                  pcVar13 = (char *)CONCAT22((short)((uint)pcVar13 >> 0x10),
                                             CONCAT11(((byte)((uint)pcVar13 >> 8) | (byte)uVar6) +
                                                      *pbVar5,(char)pcVar13));
                  *pcVar13 = *pcVar13 + cVar18;
                  *(byte *)puVar20 = (byte)*puVar20 + cVar18;
code_r0x00404076:
                  piVar7 = (int *)CONCAT31((int3)((uint)pbVar5 >> 8),(byte)pbVar5 - *pbVar5);
                  puVar20 = (uint *)((int)puVar20 + (-(uint)((byte)pbVar5 < *pbVar5) - *piVar7));
                  in_EAX = (byte *)((int)piVar7 + *piVar7);
                  bVar3 = (byte)in_EAX;
                  *in_EAX = *in_EAX + bVar3;
                  *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)in_EAX >> 8);
                  bVar14 = *in_EAX;
                  *in_EAX = *in_EAX + bVar3;
                  *puVar2 = (uint)(in_EAX + (uint)CARRY1(bVar14,bVar3) + *puVar2);
                  bVar21 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
                  while (bVar21) {
                    *in_EAX = *in_EAX + (char)in_EAX;
                    in_ES = SUB42(unaff_retaddr,0);
                    unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
                    in_EAX = (byte *)((uint)in_EAX & 0xffffff00);
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) -
                                                          (byte)*unaff_EBX,(char)unaff_EBX));
code_r0x00404092:
                    puVar8 = (undefined1 *)((uint)in_EAX & 0xffffff00);
                    *puVar8 = *puVar8;
                    *puVar8 = *puVar8;
                    *(byte *)puVar2 = (byte)*puVar2;
                    cVar16 = (char)(puVar8 + 0xba7d);
                    uVar10 = (undefined3)((uint)(puVar8 + 0xba7d) >> 8);
                    cVar18 = cVar16 + '\x02';
                    pcVar9 = (char *)CONCAT31(uVar10,cVar18);
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                          (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                    *pcVar9 = *pcVar9 + cVar18;
                    in_EAX = (byte *)CONCAT31(uVar10,cVar16 + 'q');
                    do {
                      bVar14 = *in_EAX;
                      bVar3 = (byte)in_EAX;
                      *in_EAX = *in_EAX + bVar3;
                      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                      if (!CARRY1(bVar14,bVar3)) goto code_r0x00404092;
                      *in_EAX = *in_EAX + bVar3;
                      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                            bRam0603ffbf,(char)unaff_EBX));
                      *in_EAX = *in_EAX + bVar3;
                      uVar10 = (undefined3)((uint)in_EAX >> 8);
                      bVar14 = bVar3 + 2;
                      pbVar5 = (byte *)CONCAT31(uVar10,bVar14);
                      if (SCARRY1(bVar3,'\x02') == (char)bVar14 < '\0') goto code_r0x00404076;
                      *pbVar5 = *pbVar5 + bVar14;
                      bVar4 = bVar3 + 4;
                      in_EAX = (byte *)CONCAT31(uVar10,bVar4);
                    } while (0xfd < bVar14);
                    *in_EAX = *in_EAX | bVar4;
                    bVar21 = (POPCOUNT(*in_EAX) & 1U) == 0;
                    if (bVar21) {
                      *in_EAX = *in_EAX + bVar4;
                      bVar3 = bVar3 + 0x2c;
                      *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
                      bVar3 = bVar3 | (byte)*puVar2;
                      in_EAX = (byte *)CONCAT31(uVar10,bVar3);
                      unaff_EDI = unaff_retaddr;
                      if ((POPCOUNT(bVar3) & 1U) == 0) {
                        *in_EAX = *in_EAX + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      goto code_r0x00404092;
                    }
                  }
                  pcVar13 = (char *)((uint)pcVar13 ^ *unaff_EBX);
                  cVar18 = (char)puVar2 + (byte)*puVar20;
                  param_2 = (uint *)CONCAT31((int3)((uint)puVar2 >> 8),cVar18);
                  bVar21 = cVar18 < '\0';
                  bVar22 = SCARRY1((char)puVar2,(byte)*puVar20);
                }
              }
            } while( true );
          }
        }
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar18;
        puVar20 = unaff_ESI + 1;
        out(*unaff_ESI,(short)param_2);
      }
      param_2 = (uint *)((int)param_2 + 1);
    }
    *in_EAX = *in_EAX + (char)in_EAX;
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                       CONCAT11((byte)((uint)param_1 >> 8) | (byte)*param_2,(char)param_1));
    unaff_ESI = (uint *)((int)puVar20 + 1);
    param_2._0_2_ = SUB42(param_2,0);
    out((byte)*puVar20,param_2._0_2_);
  } while( true );
}


