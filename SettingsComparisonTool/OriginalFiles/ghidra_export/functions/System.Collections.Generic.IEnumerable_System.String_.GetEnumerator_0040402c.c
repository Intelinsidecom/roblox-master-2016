/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040402c
 * Raw Name    : System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
 * Demangled   : System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
 * Prototype   : pointer System.Collections.Generic.IEnumerable<System.String>.GetEnumerator(char * param_1, uint * param_2)
 * Local Vars  : piStack_4, bVar2, puVar1, cVar4, cVar3, bVar6, bVar5, uVar7, in_EAX, param_1, param_2, piVar9, pbVar8, pcVar11, puVar10, pcVar13, uVar12, unaff_EBP, unaff_EBX, unaff_EDI, unaff_ESI, bVar14, in_SS, bVar15
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

undefined * __fastcall
System_Collections_Generic_IEnumerable<System_String>_GetEnumerator(char *param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined3 uVar12;
  undefined4 in_EAX;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined1 *puVar10;
  char *pcVar13;
  uint *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int *unaff_EDI;
  undefined2 in_SS;
  bool bVar14;
  bool bVar15;
  int *piStack_4;
  char *pcVar11;
  
  do {
    uVar12 = (undefined3)((uint)in_EAX >> 8);
    cVar3 = (char)unaff_EBX;
                    /* .NET CLR Managed Code */
    bVar2 = (char)in_EAX - cVar3;
    *(char *)CONCAT31(uVar12,bVar2) = *(char *)CONCAT31(uVar12,bVar2) + bVar2;
    bVar2 = bVar2 | (byte)*param_2;
    pbVar8 = (byte *)CONCAT31(uVar12,bVar2);
    if ((POPCOUNT(bVar2) & 1U) == 0) {
      *pbVar8 = *pbVar8 + bVar2;
      uVar7 = CONCAT31(uVar12,bVar2 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar2);
      *(byte *)((int)unaff_EDI + (int)unaff_EBX) =
           *(byte *)((int)unaff_EDI + (int)unaff_EBX) + (char)uVar7;
      *(byte *)unaff_EBX = (byte)*unaff_EBX + 1;
      pbVar8 = (byte *)(uVar7 | *param_2);
      bVar14 = (int)pbVar8 < 0;
      piStack_4 = (int *)CONCAT22(piStack_4._2_2_,in_SS);
      bVar15 = false;
      while (bVar15 != bVar14) {
        *pbVar8 = *pbVar8 + (char)pbVar8;
        uVar12 = (undefined3)((uint)pbVar8 >> 8);
        bVar2 = (char)pbVar8 + 2;
        piVar9 = (int *)CONCAT31(uVar12,bVar2);
        uVar7 = *unaff_EBX;
        puVar1 = (uint *)((int)param_2 + *unaff_ESI);
        if (CARRY4((uint)param_2,*unaff_ESI)) {
          *piVar9 = (int)(*piVar9 + (int)piVar9);
          bVar2 = bVar2 | (byte)*unaff_ESI;
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                (byte)unaff_EBX[-0x11],(char)unaff_EBX));
          *(char *)CONCAT31(uVar12,bVar2) = *(char *)CONCAT31(uVar12,bVar2) + bVar2;
          piVar9 = (int *)CONCAT31(uVar12,bVar2 + 0x7d);
        }
        bVar2 = *(byte *)((int)unaff_EBX + -0x42);
        *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
        cVar3 = (char)piVar9 + '}';
        pbVar8 = (byte *)CONCAT31((int3)((uint)piVar9 >> 8),cVar3);
        unaff_EBP = 0x6040000;
        unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                     CONCAT11((char)((uint)unaff_EBX >> 8) + bVar2,
                                                              (char)unaff_EBX)) >> 8),
                                     (char)unaff_EBX - (byte)*unaff_ESI);
        pcVar13 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                   CONCAT11(((byte)((uint)param_1 >> 8) | (byte)uVar7) + *pbVar8,
                                            (char)param_1));
        *pcVar13 = *pcVar13 + cVar3;
        *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar3;
code_r0x00404076:
        piVar9 = (int *)CONCAT31((int3)((uint)pbVar8 >> 8),(byte)pbVar8 - *pbVar8);
        unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)((byte)pbVar8 < *pbVar8) - *piVar9));
        pbVar8 = (byte *)((int)piVar9 + *piVar9);
        bVar6 = (byte)pbVar8;
        *pbVar8 = *pbVar8 + bVar6;
        *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)pbVar8 >> 8);
        bVar2 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar6;
        *puVar1 = (uint)(pbVar8 + (uint)CARRY1(bVar2,bVar6) + *puVar1);
        bVar14 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
        while (bVar14) {
          *pbVar8 = *pbVar8 + (char)pbVar8;
          in_SS = piStack_4._0_2_;
          piStack_4 = (int *)((uint)piStack_4 & 0xffff0000);
          pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) - (byte)*unaff_EBX,
                                                (char)unaff_EBX));
code_r0x00404092:
          puVar10 = (undefined1 *)((uint)pbVar8 & 0xffffff00);
          *puVar10 = *puVar10;
          *puVar10 = *puVar10;
          *(byte *)puVar1 = (byte)*puVar1;
          cVar4 = (char)(puVar10 + 0xba7d);
          uVar12 = (undefined3)((uint)(puVar10 + 0xba7d) >> 8);
          cVar3 = cVar4 + '\x02';
          pcVar11 = (char *)CONCAT31(uVar12,cVar3);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                (byte)unaff_EBX[-0x11],(char)unaff_EBX));
          *pcVar11 = *pcVar11 + cVar3;
          pbVar8 = (byte *)CONCAT31(uVar12,cVar4 + 'q');
          do {
            bVar2 = *pbVar8;
            bVar6 = (byte)pbVar8;
            *pbVar8 = *pbVar8 + bVar6;
            piStack_4 = (int *)CONCAT22(piStack_4._2_2_,in_SS);
            if (!CARRY1(bVar2,bVar6)) goto code_r0x00404092;
            *pbVar8 = *pbVar8 + bVar6;
            unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam0603ffbf,
                                                  (char)unaff_EBX));
            *pbVar8 = *pbVar8 + bVar6;
            uVar12 = (undefined3)((uint)pbVar8 >> 8);
            bVar2 = bVar6 + 2;
            pbVar8 = (byte *)CONCAT31(uVar12,bVar2);
            if (SCARRY1(bVar6,'\x02') == (char)bVar2 < '\0') goto code_r0x00404076;
            *pbVar8 = *pbVar8 + bVar2;
            bVar5 = bVar6 + 4;
            pbVar8 = (byte *)CONCAT31(uVar12,bVar5);
          } while (0xfd < bVar2);
          *pbVar8 = *pbVar8 | bVar5;
          bVar14 = (POPCOUNT(*pbVar8) & 1U) == 0;
          if (bVar14) {
            *pbVar8 = *pbVar8 + bVar5;
            bVar6 = bVar6 + 0x2c;
            *(char *)CONCAT31(uVar12,bVar6) = *(char *)CONCAT31(uVar12,bVar6) + bVar6;
            bVar6 = bVar6 | (byte)*puVar1;
            pbVar8 = (byte *)CONCAT31(uVar12,bVar6);
            unaff_EDI = piStack_4;
            if ((POPCOUNT(bVar6) & 1U) == 0) {
              *pbVar8 = *pbVar8 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto code_r0x00404092;
          }
        }
        param_1 = (char *)((uint)pcVar13 ^ *unaff_EBX);
        cVar3 = (char)puVar1 + (byte)*unaff_ESI;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar1 >> 8),cVar3);
        bVar14 = cVar3 < '\0';
        bVar15 = SCARRY1((char)puVar1,(byte)*unaff_ESI);
      }
    }
    else {
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) +
                                            *(byte *)((int)unaff_EBX + -0x12),cVar3));
      *pbVar8 = *pbVar8 + bVar2;
      bVar6 = *(byte *)((int)unaff_EDI + 0x42);
      *pbVar8 = *pbVar8 + bVar2;
      param_1 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                                 CONCAT11((byte)((uint)param_1 >> 8) | bVar6 | (byte)*param_2,
                                          (char)param_1));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)param_2;
      *(byte *)param_2 = (byte)*param_2 ^ bVar2;
      *pbVar8 = *pbVar8 + cVar3;
    }
    bVar6 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar6;
    *param_1 = *param_1 + (char)((uint)pbVar8 >> 8);
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar6;
    *unaff_EDI = (int)((int)unaff_EBX + (uint)CARRY1(bVar2,bVar6) + *unaff_EDI);
    *(byte *)((int)unaff_EBX + -3) = *(byte *)((int)unaff_EBX + -3) + 1;
    *pbVar8 = *pbVar8 + bVar6;
    param_1 = (char *)CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | (byte)*param_2);
    unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBP + -2),
                                          (char)unaff_EBX));
    *pbVar8 = *pbVar8 + bVar6;
    uVar12 = (undefined3)((uint)pbVar8 >> 8);
    bVar6 = bVar6 | (byte)*unaff_ESI;
    unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
    *(char *)CONCAT31(uVar12,bVar6) = *(char *)CONCAT31(uVar12,bVar6) + bVar6;
    bVar6 = bVar6 | (byte)*unaff_ESI;
    pbVar8 = (byte *)CONCAT31(uVar12,bVar6);
    cVar3 = (char)param_2 - (byte)*unaff_EBX;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar3);
    *(byte *)param_2 = (byte)*param_2 ^ bVar6;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar6;
    *pbVar8 = *pbVar8 + bVar6;
    in_EAX = CONCAT31(uVar12,bVar6 & *pbVar8);
    *param_1 = *param_1 + cVar3;
  } while( true );
}


