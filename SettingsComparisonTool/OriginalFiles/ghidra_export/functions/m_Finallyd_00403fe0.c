/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403fe0
 * Raw Name    : <>m__Finallyd
 * Demangled   : <>m__Finallyd
 * Prototype   : void <>m__Finallyd(int param_1, uint * param_2)
 * Local Vars  : bVar2, bVar1, bVar4, bVar3, pbVar5, in_EAX, piVar7, uVar6, pcVar9, puVar8, iVar11, uVar10, uVar13, pcVar12, cVar15, cVar14, unaff_EBX, cVar16, unaff_EBP, uVar17, puVar18, unaff_ESI, in_ES, unaff_EDI, bVar20, bVar19, unaff_retaddr, param_1, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

void __fastcall <>m__Finallyd(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined3 uVar10;
  byte *in_EAX;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar11;
  undefined2 uVar13;
  char *pcVar12;
  char cVar14;
  char cVar16;
  undefined2 uVar17;
  uint *unaff_EBX;
  int unaff_EBP;
  uint *puVar18;
  uint *unaff_ESI;
  int *unaff_EDI;
  undefined2 in_ES;
  bool bVar19;
  bool bVar20;
  int *unaff_retaddr;
  char cVar15;
  
  do {
                    /* .NET CLR Managed Code */
    cVar14 = (char)unaff_EBX;
    cVar16 = cVar14 + *in_EAX;
    unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar16);
    if (SCARRY1(cVar14,*in_EAX) == cVar16 < '\0') {
      while( true ) {
        param_2 = (uint *)((int)param_2 + 1);
        while( true ) {
          bVar2 = (byte)in_EAX;
          *in_EAX = *in_EAX + bVar2;
          uVar13 = (undefined2)((uint)param_1 >> 0x10);
          cVar16 = (char)param_1;
          bVar3 = (byte)((uint)param_1 >> 8) | (byte)*param_2;
          param_1 = CONCAT22(uVar13,CONCAT11(bVar3,cVar16));
          puVar18 = (uint *)((int)unaff_ESI + 1);
          out((byte)*unaff_ESI,(short)param_2);
          cVar15 = (char)param_2;
          cVar14 = cVar15 + (char)*unaff_EDI;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar14);
          if (SCARRY1(cVar15,(char)*unaff_EDI) != cVar14 < '\0') break;
          *(byte *)param_2 = (byte)*param_2 + cVar16;
          iVar11 = CONCAT22(uVar13,CONCAT11(bVar3 - *(byte *)((int)unaff_ESI + 3),cVar16));
          pbVar5 = in_EAX + (bVar3 < *(byte *)((int)unaff_ESI + 3)) + 0xda7d;
          unaff_ESI = puVar18;
          while( true ) {
            uVar10 = (undefined3)((uint)pbVar5 >> 8);
            bVar2 = (byte)pbVar5 | (byte)*param_2;
            in_EAX = (byte *)CONCAT31(uVar10,bVar2);
            bVar4 = (byte)((uint)unaff_EBX >> 8);
            uVar17 = (undefined2)((uint)unaff_EBX >> 0x10);
            bVar3 = (byte)((uint)iVar11 >> 8);
            uVar13 = (undefined2)((uint)iVar11 >> 0x10);
            cVar16 = (char)unaff_EBX;
            if ((POPCOUNT(bVar2) & 1U) == 0) break;
            unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x26));
            *in_EAX = *in_EAX + bVar2;
            cVar14 = (bVar2 | (byte)*param_2) - cVar16;
            pbVar5 = (byte *)CONCAT31(uVar10,cVar14);
            *pbVar5 = *pbVar5 + cVar14;
            unaff_EBX = (uint *)CONCAT22(uVar17,CONCAT11(bVar4 | *(byte *)(unaff_EBP + -0x27),cVar16
                                                        ));
            *pbVar5 = *pbVar5 + cVar14;
            iVar11 = CONCAT22(uVar13,CONCAT11(bVar3 | (byte)*param_2,(char)iVar11));
            out((byte)*unaff_ESI,(short)param_2);
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000da7d);
            unaff_ESI = (uint *)((int)unaff_ESI + 1);
          }
          *in_EAX = *in_EAX + bVar2;
          bVar1 = *(byte *)((int)unaff_EBX + iVar11);
          unaff_EBX = (uint *)CONCAT22(uVar17,CONCAT11(bVar4 + *(byte *)((int)unaff_EBX + -0x1d),
                                                       cVar16));
          *in_EAX = *in_EAX + bVar2;
          param_1 = CONCAT22(uVar13,CONCAT11(bVar3 | bVar1 | *(byte *)((int)unaff_EDI + 0x42),
                                             (char)iVar11));
        }
        *in_EAX = *in_EAX + bVar2;
        bVar2 = bVar2 | (byte)*param_2;
        in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
        if ((POPCOUNT(bVar2) & 1U) == 0) break;
        *(byte *)param_2 = (byte)*param_2 + cVar16;
        unaff_ESI = (uint *)((int)unaff_ESI + 5);
        out(*puVar18,(short)param_2);
      }
      *in_EAX = *in_EAX + bVar2;
      param_1 = CONCAT22(uVar13,CONCAT11(bVar3 | *(byte *)((int)unaff_EBX + param_1),cVar16));
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x15),(char)unaff_EBX));
      *in_EAX = *in_EAX + bVar2;
    }
    else {
      *in_EAX = *in_EAX + (byte)in_EAX;
      bVar2 = (byte)in_EAX | (byte)*param_2;
      in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
      puVar18 = unaff_ESI;
      if ((POPCOUNT(bVar2) & 1U) == 0) {
        *in_EAX = *in_EAX + bVar2;
        pcVar12 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11((byte)((uint)param_1 >> 8) |
                                            *(byte *)((int)unaff_EBX + param_1),(char)param_1));
        do {
          cVar16 = (char)unaff_EBX;
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                *(byte *)((int)unaff_EBX + -0x12),cVar16));
          bVar3 = (byte)in_EAX;
          *in_EAX = *in_EAX + bVar3;
          bVar2 = *(byte *)((int)unaff_EDI + 0x42);
          *in_EAX = *in_EAX + bVar3;
          pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar12 >> 8) | bVar2 | (byte)*param_2,
                                              (char)pcVar12));
          *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_2;
          *(byte *)param_2 = (byte)*param_2 ^ bVar3;
          *in_EAX = *in_EAX + cVar16;
          while( true ) {
            bVar3 = (byte)in_EAX;
            *in_EAX = *in_EAX + bVar3;
            *pcVar12 = *pcVar12 + (char)((uint)in_EAX >> 8);
            bVar2 = *in_EAX;
            *in_EAX = *in_EAX + bVar3;
            *unaff_EDI = (int)((int)unaff_EBX + (uint)CARRY1(bVar2,bVar3) + *unaff_EDI);
            *(byte *)((int)unaff_EBX + -3) = *(byte *)((int)unaff_EBX + -3) + 1;
            *in_EAX = *in_EAX + bVar3;
            pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),(byte)pcVar12 | (byte)*param_2);
            unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
            cVar14 = (char)unaff_EBX;
            unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                  *(char *)(unaff_EBP + -2),cVar14));
            *in_EAX = *in_EAX + bVar3;
            uVar10 = (undefined3)((uint)in_EAX >> 8);
            bVar3 = bVar3 | (byte)*unaff_ESI;
            unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
            *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
            bVar3 = bVar3 | (byte)*unaff_ESI;
            pbVar5 = (byte *)CONCAT31(uVar10,bVar3);
            cVar16 = (char)param_2 - (byte)*unaff_EBX;
            param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar16);
            *(byte *)param_2 = (byte)*param_2 ^ bVar3;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar3;
            *pbVar5 = *pbVar5 + bVar3;
            bVar2 = *pbVar5;
            *pcVar12 = *pcVar12 + cVar16;
            bVar2 = (bVar3 & bVar2) - cVar14;
            *(char *)CONCAT31(uVar10,bVar2) = *(char *)CONCAT31(uVar10,bVar2) + bVar2;
            bVar2 = bVar2 | (byte)*param_2;
            in_EAX = (byte *)CONCAT31(uVar10,bVar2);
            if ((POPCOUNT(bVar2) & 1U) != 0) break;
            *in_EAX = *in_EAX + bVar2;
            uVar6 = CONCAT31(uVar10,bVar2 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar2);
            *(byte *)((int)unaff_EDI + (int)unaff_EBX) =
                 *(byte *)((int)unaff_EDI + (int)unaff_EBX) + (char)uVar6;
            *(byte *)unaff_EBX = (byte)*unaff_EBX + 1;
            in_EAX = (byte *)(uVar6 | *param_2);
            bVar19 = (int)in_EAX < 0;
            bVar20 = false;
            while (bVar20 != bVar19) {
              *in_EAX = *in_EAX + (char)in_EAX;
              uVar10 = (undefined3)((uint)in_EAX >> 8);
              bVar2 = (char)in_EAX + 2;
              piVar7 = (int *)CONCAT31(uVar10,bVar2);
              uVar6 = *unaff_EBX;
              puVar18 = (uint *)((int)param_2 + *unaff_ESI);
              if (CARRY4((uint)param_2,*unaff_ESI)) {
                *piVar7 = (int)(*piVar7 + (int)piVar7);
                bVar2 = bVar2 | (byte)*unaff_ESI;
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                *(char *)CONCAT31(uVar10,bVar2) = *(char *)CONCAT31(uVar10,bVar2) + bVar2;
                piVar7 = (int *)CONCAT31(uVar10,bVar2 + 0x7d);
              }
              bVar2 = *(byte *)((int)unaff_EBX + -0x42);
              *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
              cVar16 = (char)piVar7 + '}';
              pbVar5 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),cVar16);
              unaff_EBP = 0x6040000;
              unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                                    bVar2,(char)unaff_EBX)) >> 8),
                                           (char)unaff_EBX - (byte)*unaff_ESI);
              pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                         CONCAT11(((byte)((uint)pcVar12 >> 8) | (byte)uVar6) +
                                                  *pbVar5,(char)pcVar12));
              *pcVar12 = *pcVar12 + cVar16;
              *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar16;
code_r0x00404076:
              piVar7 = (int *)CONCAT31((int3)((uint)pbVar5 >> 8),(byte)pbVar5 - *pbVar5);
              unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)((byte)pbVar5 < *pbVar5) - *piVar7));
              in_EAX = (byte *)((int)piVar7 + *piVar7);
              bVar3 = (byte)in_EAX;
              *in_EAX = *in_EAX + bVar3;
              *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)in_EAX >> 8);
              bVar2 = *in_EAX;
              *in_EAX = *in_EAX + bVar3;
              *puVar18 = (uint)(in_EAX + (uint)CARRY1(bVar2,bVar3) + *puVar18);
              bVar19 = (POPCOUNT(*puVar18 & 0xff) & 1U) == 0;
              while (bVar19) {
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
                *(byte *)puVar18 = (byte)*puVar18;
                cVar14 = (char)(puVar8 + 0xba7d);
                uVar10 = (undefined3)((uint)(puVar8 + 0xba7d) >> 8);
                cVar16 = cVar14 + '\x02';
                pcVar9 = (char *)CONCAT31(uVar10,cVar16);
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                *pcVar9 = *pcVar9 + cVar16;
                in_EAX = (byte *)CONCAT31(uVar10,cVar14 + 'q');
                do {
                  bVar2 = *in_EAX;
                  bVar3 = (byte)in_EAX;
                  *in_EAX = *in_EAX + bVar3;
                  unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                  if (!CARRY1(bVar2,bVar3)) goto code_r0x00404092;
                  *in_EAX = *in_EAX + bVar3;
                  unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                               CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam0603ffbf,
                                                        (char)unaff_EBX));
                  *in_EAX = *in_EAX + bVar3;
                  uVar10 = (undefined3)((uint)in_EAX >> 8);
                  bVar2 = bVar3 + 2;
                  pbVar5 = (byte *)CONCAT31(uVar10,bVar2);
                  if (SCARRY1(bVar3,'\x02') == (char)bVar2 < '\0') goto code_r0x00404076;
                  *pbVar5 = *pbVar5 + bVar2;
                  bVar4 = bVar3 + 4;
                  in_EAX = (byte *)CONCAT31(uVar10,bVar4);
                } while (0xfd < bVar2);
                *in_EAX = *in_EAX | bVar4;
                bVar19 = (POPCOUNT(*in_EAX) & 1U) == 0;
                if (bVar19) {
                  *in_EAX = *in_EAX + bVar4;
                  bVar3 = bVar3 + 0x2c;
                  *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
                  bVar3 = bVar3 | (byte)*puVar18;
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
              pcVar12 = (char *)((uint)pcVar12 ^ *unaff_EBX);
              cVar16 = (char)puVar18 + (byte)*unaff_ESI;
              param_2 = (uint *)CONCAT31((int3)((uint)puVar18 >> 8),cVar16);
              bVar19 = cVar16 < '\0';
              bVar20 = SCARRY1((char)puVar18,(byte)*unaff_ESI);
            }
          }
        } while( true );
      }
    }
    bVar2 = *(byte *)((int)unaff_EDI + 0x42);
    *in_EAX = *in_EAX + (char)in_EAX;
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                       CONCAT11((byte)((uint)param_1 >> 8) | bVar2 | (byte)*param_2,(char)param_1));
    unaff_ESI = (uint *)((int)puVar18 + 1);
    param_2._0_2_ = SUB42(param_2,0);
    out((byte)*puVar18,param_2._0_2_);
  } while( true );
}


