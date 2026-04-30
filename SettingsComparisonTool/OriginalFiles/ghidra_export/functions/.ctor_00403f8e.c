/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00403f8e
 * Raw Name    : .ctor
 * Demangled   : .ctor
 * Prototype   : void .ctor(undefined4 <>1__state, uint * param_2)
 * Local Vars  : uStack_4, puVar2, iVar1, bVar4, cVar3, bVar6, bVar5, uVar7, in_EAX, piVar9, pbVar8, pcVar11, puVar10, uVar13, uVar12, pcVar15, uVar14, cVar17, <>1__state, uVar16, unaff_EBX, cVar18, uVar20, cVar19, unaff_ESI, unaff_EBP, unaff_EDI, puVar21, bVar22, in_ES, unaff_retaddr, bVar23, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

void __fastcall _ctor(int <>1__state,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *in_EAX;
  uint3 uVar12;
  undefined3 uVar13;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 uVar14;
  undefined2 uVar16;
  char *pcVar15;
  char cVar17;
  char cVar19;
  uint *unaff_EBX;
  undefined2 uVar20;
  int unaff_EBP;
  uint *unaff_ESI;
  uint *puVar21;
  int *unaff_EDI;
  undefined2 in_ES;
  bool bVar22;
  bool bVar23;
  int *unaff_retaddr;
  undefined2 uStack_4;
  char cVar18;
  
                    /* .NET CLR Managed Code */
  bVar4 = (byte)((uint)<>1__state >> 8);
  bVar22 = CARRY1(bVar4,*in_EAX);
  <>1__state = CONCAT22((short)((uint)<>1__state >> 0x10),CONCAT11(bVar4 + *in_EAX,(char)<>1__state)
                       );
  while( true ) {
    iVar1 = *(int *)in_EAX;
    *(byte *)param_2 = (char)*param_2 + (byte)<>1__state;
    cVar17 = (char)(in_EAX + (uint)bVar22 + iVar1);
    uVar12 = (uint3)((uint)(in_EAX + (uint)bVar22 + iVar1) >> 8);
    cVar3 = cVar17 + (byte)*unaff_EBX;
    pbVar8 = (byte *)CONCAT31(uVar12,cVar3);
    if (SCARRY1(cVar17,(byte)*unaff_EBX) != cVar3 < '\0') break;
    *pbVar8 = *pbVar8 + cVar3;
    in_EAX = (byte *)((uint)uVar12 << 8);
    uStack_4 = SUB42(param_2,0);
    while( true ) {
      bVar4 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar4;
      *in_EAX = *in_EAX + bVar4;
      bVar4 = bVar4 ^ (byte)*param_2;
      in_EAX = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) break;
      *(byte *)unaff_EDI = (char)*unaff_EDI + bVar4;
    }
    *in_EAX = *in_EAX + bVar4;
    <>1__state._1_1_ = (byte)((uint)<>1__state >> 8);
    bVar22 = CARRY1(<>1__state._1_1_,*in_EAX);
    <>1__state._2_2_ = (undefined2)((uint)<>1__state >> 0x10);
    <>1__state._1_1_ = <>1__state._1_1_ + *in_EAX;
    <>1__state._0_2_ =
         CONCAT11(<>1__state._1_1_,
                  (byte)<>1__state | *(byte *)((int)(unaff_EDI + 0xa86c000) + (int)in_EAX));
    <>1__state = CONCAT22(<>1__state._2_2_,(undefined2)<>1__state);
    in_ES = uStack_4;
  }
  do {
    while( true ) {
      *pbVar8 = *pbVar8 + (byte)pbVar8;
      uVar13 = (undefined3)((uint)pbVar8 >> 8);
      bVar4 = ((byte)pbVar8 | (byte)*param_2) - (char)unaff_EBX;
      pcVar15 = (char *)CONCAT31(uVar13,bVar4);
      *pcVar15 = *pcVar15 + bVar4;
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                            *(byte *)(unaff_EBP + -0x27),(char)unaff_EBX));
      *pcVar15 = *pcVar15 + bVar4;
      <>1__state = CONCAT22((short)((uint)<>1__state >> 0x10),
                            CONCAT11((byte)((uint)<>1__state >> 8) | (byte)*param_2,(char)<>1__state
                                    ));
      puVar21 = (uint *)((int)unaff_ESI + 1);
      out((byte)*unaff_ESI,(short)param_2);
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000da7d);
      bVar4 = bVar4 | (byte)*param_2;
      pbVar8 = (byte *)CONCAT31(uVar13,bVar4);
      if ((POPCOUNT(bVar4) & 1U) == 0) break;
      unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -0x26));
      unaff_ESI = puVar21;
    }
    while( true ) {
      bVar5 = (byte)pbVar8;
      *pbVar8 = *pbVar8 + bVar5;
      bVar4 = *(byte *)((int)unaff_EBX + <>1__state);
      uVar16 = (undefined2)((uint)<>1__state >> 0x10);
      cVar3 = (char)<>1__state;
      uVar20 = (undefined2)((uint)unaff_EBX >> 0x10);
      uVar14 = SUB41(unaff_EBX,0);
      cVar19 = (char)((uint)unaff_EBX >> 8) + *(byte *)((int)unaff_EBX + -0x1d);
      unaff_EBX = (uint *)CONCAT22(uVar20,CONCAT11(cVar19,uVar14));
      *pbVar8 = *pbVar8 + bVar5;
      bVar6 = *(byte *)((int)unaff_EDI + 0x42);
      *pbVar8 = *pbVar8 + bVar5;
      bVar4 = (byte)((uint)<>1__state >> 8) | bVar4 | bVar6 | (byte)*param_2;
      <>1__state = CONCAT22(uVar16,CONCAT11(bVar4,cVar3));
      unaff_ESI = (uint *)((int)puVar21 + 1);
      out((byte)*puVar21,(short)param_2);
      cVar18 = (char)param_2;
      cVar17 = cVar18 + (char)*unaff_EDI;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar17);
      if (SCARRY1(cVar18,(char)*unaff_EDI) == cVar17 < '\0') break;
      *pbVar8 = *pbVar8 + bVar5;
      bVar5 = bVar5 | (byte)*param_2;
      pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar5);
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *pbVar8 = *pbVar8 + bVar5;
        <>1__state = CONCAT22(uVar16,CONCAT11(bVar4 | *(byte *)((int)unaff_EBX + <>1__state),cVar3))
        ;
        unaff_EBX = (uint *)CONCAT22(uVar20,CONCAT11(cVar19 + *(byte *)((int)unaff_EBX + -0x15),
                                                     uVar14));
        *pbVar8 = *pbVar8 + bVar5;
        while( true ) {
          bVar4 = *(byte *)((int)unaff_EDI + 0x42);
          uVar16 = (undefined2)((uint)<>1__state >> 0x10);
          uVar14 = (undefined1)<>1__state;
          bVar6 = (byte)pbVar8;
          *pbVar8 = *pbVar8 + bVar6;
          bVar4 = (byte)((uint)<>1__state >> 8) | bVar4 | (byte)*param_2;
          <>1__state = CONCAT22(uVar16,CONCAT11(bVar4,uVar14));
          puVar21 = (uint *)((int)unaff_ESI + 1);
          out((byte)*unaff_ESI,(short)param_2);
          cVar17 = (char)unaff_EBX;
          cVar3 = cVar17 + *pbVar8;
          unaff_EBX = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar3);
          if (SCARRY1(cVar17,*pbVar8) == cVar3 < '\0') break;
          *pbVar8 = *pbVar8 + bVar6;
          bVar6 = bVar6 | (byte)*param_2;
          pbVar8 = (byte *)CONCAT31((int3)((uint)pbVar8 >> 8),bVar6);
          unaff_ESI = puVar21;
          if ((POPCOUNT(bVar6) & 1U) == 0) {
            *pbVar8 = *pbVar8 + bVar6;
            pcVar15 = (char *)CONCAT22(uVar16,CONCAT11(bVar4 | *(byte *)((int)unaff_EBX + <>1__state
                                                                        ),uVar14));
            do {
              cVar3 = (char)unaff_EBX;
              unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                           CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                    *(byte *)((int)unaff_EBX + -0x12),cVar3));
              bVar6 = (byte)pbVar8;
              *pbVar8 = *pbVar8 + bVar6;
              bVar4 = *(byte *)((int)unaff_EDI + 0x42);
              *pbVar8 = *pbVar8 + bVar6;
              pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                         CONCAT11((byte)((uint)pcVar15 >> 8) | bVar4 |
                                                  (byte)*param_2,(char)pcVar15));
              *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_2;
              *(byte *)param_2 = (byte)*param_2 ^ bVar6;
              *pbVar8 = *pbVar8 + cVar3;
              while( true ) {
                bVar6 = (byte)pbVar8;
                *pbVar8 = *pbVar8 + bVar6;
                *pcVar15 = *pcVar15 + (char)((uint)pbVar8 >> 8);
                bVar4 = *pbVar8;
                *pbVar8 = *pbVar8 + bVar6;
                *unaff_EDI = (int)((int)unaff_EBX + (uint)CARRY1(bVar4,bVar6) + *unaff_EDI);
                *(byte *)((int)unaff_EBX + -3) = *(byte *)((int)unaff_EBX + -3) + 1;
                *pbVar8 = *pbVar8 + bVar6;
                pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),(byte)pcVar15 | (byte)*param_2
                                          );
                unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                cVar17 = (char)unaff_EBX;
                unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                             CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                      *(char *)(unaff_EBP + -2),cVar17));
                *pbVar8 = *pbVar8 + bVar6;
                uVar13 = (undefined3)((uint)pbVar8 >> 8);
                bVar6 = bVar6 | (byte)*puVar21;
                unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
                *(char *)CONCAT31(uVar13,bVar6) = *(char *)CONCAT31(uVar13,bVar6) + bVar6;
                bVar6 = bVar6 | (byte)*puVar21;
                pbVar8 = (byte *)CONCAT31(uVar13,bVar6);
                cVar3 = (char)param_2 - (byte)*unaff_EBX;
                param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar3);
                *(byte *)param_2 = (byte)*param_2 ^ bVar6;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar6;
                *pbVar8 = *pbVar8 + bVar6;
                bVar4 = *pbVar8;
                *pcVar15 = *pcVar15 + cVar3;
                bVar4 = (bVar6 & bVar4) - cVar17;
                *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
                bVar4 = bVar4 | (byte)*param_2;
                pbVar8 = (byte *)CONCAT31(uVar13,bVar4);
                if ((POPCOUNT(bVar4) & 1U) != 0) break;
                *pbVar8 = *pbVar8 + bVar4;
                uVar7 = CONCAT31(uVar13,bVar4 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar4);
                *(byte *)((int)unaff_EDI + (int)unaff_EBX) =
                     *(byte *)((int)unaff_EDI + (int)unaff_EBX) + (char)uVar7;
                *(byte *)unaff_EBX = (byte)*unaff_EBX + 1;
                pbVar8 = (byte *)(uVar7 | *param_2);
                bVar22 = (int)pbVar8 < 0;
                bVar23 = false;
                while (bVar23 != bVar22) {
                  *pbVar8 = *pbVar8 + (char)pbVar8;
                  uVar13 = (undefined3)((uint)pbVar8 >> 8);
                  bVar4 = (char)pbVar8 + 2;
                  piVar9 = (int *)CONCAT31(uVar13,bVar4);
                  uVar7 = *unaff_EBX;
                  puVar2 = (uint *)((int)param_2 + *puVar21);
                  if (CARRY4((uint)param_2,*puVar21)) {
                    *piVar9 = (int)(*piVar9 + (int)piVar9);
                    bVar4 = bVar4 | (byte)*puVar21;
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                          (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                    *(char *)CONCAT31(uVar13,bVar4) = *(char *)CONCAT31(uVar13,bVar4) + bVar4;
                    piVar9 = (int *)CONCAT31(uVar13,bVar4 + 0x7d);
                  }
                  bVar4 = *(byte *)((int)unaff_EBX + -0x42);
                  *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
                  cVar3 = (char)piVar9 + '}';
                  pbVar8 = (byte *)CONCAT31((int3)((uint)piVar9 >> 8),cVar3);
                  unaff_EBP = 0x6040000;
                  unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                               CONCAT11((char)((uint)unaff_EBX >> 8)
                                                                        + bVar4,(char)unaff_EBX)) >>
                                                     8),(char)unaff_EBX - (byte)*puVar21);
                  pcVar15 = (char *)CONCAT22((short)((uint)pcVar15 >> 0x10),
                                             CONCAT11(((byte)((uint)pcVar15 >> 8) | (byte)uVar7) +
                                                      *pbVar8,(char)pcVar15));
                  *pcVar15 = *pcVar15 + cVar3;
                  *(byte *)puVar21 = (byte)*puVar21 + cVar3;
code_r0x00404076:
                  piVar9 = (int *)CONCAT31((int3)((uint)pbVar8 >> 8),(byte)pbVar8 - *pbVar8);
                  puVar21 = (uint *)((int)puVar21 + (-(uint)((byte)pbVar8 < *pbVar8) - *piVar9));
                  pbVar8 = (byte *)((int)piVar9 + *piVar9);
                  bVar6 = (byte)pbVar8;
                  *pbVar8 = *pbVar8 + bVar6;
                  *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)pbVar8 >> 8);
                  bVar4 = *pbVar8;
                  *pbVar8 = *pbVar8 + bVar6;
                  *puVar2 = (uint)(pbVar8 + (uint)CARRY1(bVar4,bVar6) + *puVar2);
                  bVar22 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
                  while (bVar22) {
                    *pbVar8 = *pbVar8 + (char)pbVar8;
                    in_ES = SUB42(unaff_retaddr,0);
                    unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
                    pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) -
                                                          (byte)*unaff_EBX,(char)unaff_EBX));
code_r0x00404092:
                    puVar10 = (undefined1 *)((uint)pbVar8 & 0xffffff00);
                    *puVar10 = *puVar10;
                    *puVar10 = *puVar10;
                    *(byte *)puVar2 = (byte)*puVar2;
                    cVar17 = (char)(puVar10 + 0xba7d);
                    uVar13 = (undefined3)((uint)(puVar10 + 0xba7d) >> 8);
                    cVar3 = cVar17 + '\x02';
                    pcVar11 = (char *)CONCAT31(uVar13,cVar3);
                    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                          (byte)unaff_EBX[-0x11],(char)unaff_EBX));
                    *pcVar11 = *pcVar11 + cVar3;
                    pbVar8 = (byte *)CONCAT31(uVar13,cVar17 + 'q');
                    do {
                      bVar4 = *pbVar8;
                      bVar6 = (byte)pbVar8;
                      *pbVar8 = *pbVar8 + bVar6;
                      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_ES);
                      if (!CARRY1(bVar4,bVar6)) goto code_r0x00404092;
                      *pbVar8 = *pbVar8 + bVar6;
                      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                   CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                                            bRam0603ffbf,(char)unaff_EBX));
                      *pbVar8 = *pbVar8 + bVar6;
                      uVar13 = (undefined3)((uint)pbVar8 >> 8);
                      bVar4 = bVar6 + 2;
                      pbVar8 = (byte *)CONCAT31(uVar13,bVar4);
                      if (SCARRY1(bVar6,'\x02') == (char)bVar4 < '\0') goto code_r0x00404076;
                      *pbVar8 = *pbVar8 + bVar4;
                      bVar5 = bVar6 + 4;
                      pbVar8 = (byte *)CONCAT31(uVar13,bVar5);
                    } while (0xfd < bVar4);
                    *pbVar8 = *pbVar8 | bVar5;
                    bVar22 = (POPCOUNT(*pbVar8) & 1U) == 0;
                    if (bVar22) {
                      *pbVar8 = *pbVar8 + bVar5;
                      bVar6 = bVar6 + 0x2c;
                      *(char *)CONCAT31(uVar13,bVar6) = *(char *)CONCAT31(uVar13,bVar6) + bVar6;
                      bVar6 = bVar6 | (byte)*puVar2;
                      pbVar8 = (byte *)CONCAT31(uVar13,bVar6);
                      unaff_EDI = unaff_retaddr;
                      if ((POPCOUNT(bVar6) & 1U) == 0) {
                        *pbVar8 = *pbVar8 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      goto code_r0x00404092;
                    }
                  }
                  pcVar15 = (char *)((uint)pcVar15 ^ *unaff_EBX);
                  cVar3 = (char)puVar2 + (byte)*puVar21;
                  param_2 = (uint *)CONCAT31((int3)((uint)puVar2 >> 8),cVar3);
                  bVar22 = cVar3 < '\0';
                  bVar23 = SCARRY1((char)puVar2,(byte)*puVar21);
                }
              }
            } while( true );
          }
        }
      }
      else {
        *(byte *)param_2 = (byte)*param_2 + cVar3;
        puVar21 = (uint *)((int)puVar21 + 5);
        out(*unaff_ESI,(short)param_2);
      }
      param_2 = (uint *)((int)param_2 + 1);
    }
    *(byte *)param_2 = (byte)*param_2 + cVar3;
    <>1__state = CONCAT22(uVar16,CONCAT11(bVar4 - *(byte *)((int)puVar21 + 3),cVar3));
    pbVar8 = pbVar8 + (bVar4 < *(byte *)((int)puVar21 + 3)) + 0xda7d;
  } while( true );
}


