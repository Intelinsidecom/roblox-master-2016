/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404008
 * Raw Name    : GetTableData
 * Demangled   : GetTableData
 * Prototype   : pointer GetTableData(char * tableName, uint * param_2)
 * Local Vars  : piStack_4, puVar1, bVar2, bVar3, cVar4, in_EAX, param_2, pbVar5, uVar6, piVar7, puVar8, pcVar9, uVar10, bVar11, pcVar12, cVar13, unaff_EBX, cVar14, uVar15, unaff_EBP, unaff_ESI, unaff_EDI, in_SS, bVar16, bVar17, tableName
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404041) overlaps instruction at (ram,0x00404040)
    */

undefined * __fastcall GetTableData(char *tableName,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *in_EAX;
  undefined3 uVar10;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  byte bVar11;
  char *pcVar12;
  char cVar13;
  char cVar14;
  uint *unaff_EBX;
  undefined2 uVar15;
  int unaff_EBP;
  uint *unaff_ESI;
  int *unaff_EDI;
  undefined2 in_SS;
  bool bVar16;
  bool bVar17;
  int *piStack_4;
  char *pcVar9;
  
                    /* .NET CLR Managed Code */
  do {
    *(byte *)((int)unaff_EBX + -3) = *(byte *)((int)unaff_EBX + -3) + 1;
    bVar2 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar2;
    bVar11 = (byte)tableName | (byte)*param_2;
    pcVar12 = (char *)CONCAT31((int3)((uint)tableName >> 8),bVar11);
    uVar15 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar4 = (char)unaff_EBX;
    cVar14 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBP + -2);
    unaff_EBX = (uint *)CONCAT22(uVar15,CONCAT11(cVar14,cVar4));
    *in_EAX = *in_EAX + bVar2;
    uVar10 = (undefined3)((uint)in_EAX >> 8);
    bVar2 = bVar2 | (byte)*unaff_ESI;
    unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
    *(char *)CONCAT31(uVar10,bVar2) = *(char *)CONCAT31(uVar10,bVar2) + bVar2;
    bVar2 = bVar2 | (byte)*unaff_ESI;
    pbVar5 = (byte *)CONCAT31(uVar10,bVar2);
    cVar13 = (char)param_2 - (byte)*unaff_EBX;
    param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar13);
    *(byte *)param_2 = (byte)*param_2 ^ bVar2;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar2;
    *pbVar5 = *pbVar5 + bVar2;
    bVar3 = *pbVar5;
    *pcVar12 = *pcVar12 + cVar13;
    bVar3 = (bVar2 & bVar3) - cVar4;
    *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
    bVar3 = bVar3 | (byte)*param_2;
    in_EAX = (byte *)CONCAT31(uVar10,bVar3);
    if ((POPCOUNT(bVar3) & 1U) == 0) {
      *in_EAX = *in_EAX + bVar3;
      uVar6 = CONCAT31(uVar10,bVar3 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar3);
      *(byte *)((int)unaff_EDI + (int)unaff_EBX) =
           *(byte *)((int)unaff_EDI + (int)unaff_EBX) + (char)uVar6;
      *(byte *)unaff_EBX = (byte)*unaff_EBX + 1;
      in_EAX = (byte *)(uVar6 | *param_2);
      bVar16 = (int)in_EAX < 0;
      piStack_4 = (int *)CONCAT22(piStack_4._2_2_,in_SS);
      bVar17 = false;
      while (bVar17 != bVar16) {
        *in_EAX = *in_EAX + (char)in_EAX;
        uVar10 = (undefined3)((uint)in_EAX >> 8);
        bVar3 = (char)in_EAX + 2;
        piVar7 = (int *)CONCAT31(uVar10,bVar3);
        uVar6 = *unaff_EBX;
        puVar1 = (uint *)((int)param_2 + *unaff_ESI);
        if (CARRY4((uint)param_2,*unaff_ESI)) {
          *piVar7 = (int)(*piVar7 + (int)piVar7);
          bVar3 = bVar3 | (byte)*unaff_ESI;
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                (byte)unaff_EBX[-0x11],(char)unaff_EBX));
          *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
          piVar7 = (int *)CONCAT31(uVar10,bVar3 + 0x7d);
        }
        bVar3 = *(byte *)((int)unaff_EBX + -0x42);
        *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
        cVar13 = (char)piVar7 + '}';
        pbVar5 = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),cVar13);
        unaff_EBP = 0x6040000;
        unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                     CONCAT11((char)((uint)unaff_EBX >> 8) + bVar3,
                                                              (char)unaff_EBX)) >> 8),
                                     (char)unaff_EBX - (byte)*unaff_ESI);
        pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                   CONCAT11(((byte)((uint)pcVar12 >> 8) | (byte)uVar6) + *pbVar5,
                                            (char)pcVar12));
        *pcVar12 = *pcVar12 + cVar13;
        *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar13;
code_r0x00404076:
        piVar7 = (int *)CONCAT31((int3)((uint)pbVar5 >> 8),(byte)pbVar5 - *pbVar5);
        unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)((byte)pbVar5 < *pbVar5) - *piVar7));
        in_EAX = (byte *)((int)piVar7 + *piVar7);
        bVar2 = (byte)in_EAX;
        *in_EAX = *in_EAX + bVar2;
        *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)in_EAX >> 8);
        bVar3 = *in_EAX;
        *in_EAX = *in_EAX + bVar2;
        *puVar1 = (uint)(in_EAX + (uint)CARRY1(bVar3,bVar2) + *puVar1);
        bVar16 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
        while (bVar16) {
          *in_EAX = *in_EAX + (char)in_EAX;
          in_SS = piStack_4._0_2_;
          piStack_4 = (int *)((uint)piStack_4 & 0xffff0000);
          in_EAX = (byte *)((uint)in_EAX & 0xffffff00);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) - (byte)*unaff_EBX,
                                                (char)unaff_EBX));
code_r0x00404092:
          puVar8 = (undefined1 *)((uint)in_EAX & 0xffffff00);
          *puVar8 = *puVar8;
          *puVar8 = *puVar8;
          *(byte *)puVar1 = (byte)*puVar1;
          cVar4 = (char)(puVar8 + 0xba7d);
          uVar10 = (undefined3)((uint)(puVar8 + 0xba7d) >> 8);
          cVar13 = cVar4 + '\x02';
          pcVar9 = (char *)CONCAT31(uVar10,cVar13);
          unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                       CONCAT11((char)((uint)unaff_EBX >> 8) +
                                                (byte)unaff_EBX[-0x11],(char)unaff_EBX));
          *pcVar9 = *pcVar9 + cVar13;
          in_EAX = (byte *)CONCAT31(uVar10,cVar4 + 'q');
          do {
            bVar3 = *in_EAX;
            bVar2 = (byte)in_EAX;
            *in_EAX = *in_EAX + bVar2;
            piStack_4 = (int *)CONCAT22(piStack_4._2_2_,in_SS);
            if (!CARRY1(bVar3,bVar2)) goto code_r0x00404092;
            *in_EAX = *in_EAX + bVar2;
            unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11((byte)((uint)unaff_EBX >> 8) | bRam0603ffbf,
                                                  (char)unaff_EBX));
            *in_EAX = *in_EAX + bVar2;
            uVar10 = (undefined3)((uint)in_EAX >> 8);
            bVar3 = bVar2 + 2;
            pbVar5 = (byte *)CONCAT31(uVar10,bVar3);
            if (SCARRY1(bVar2,'\x02') == (char)bVar3 < '\0') goto code_r0x00404076;
            *pbVar5 = *pbVar5 + bVar3;
            bVar11 = bVar2 + 4;
            in_EAX = (byte *)CONCAT31(uVar10,bVar11);
          } while (0xfd < bVar3);
          *in_EAX = *in_EAX | bVar11;
          bVar16 = (POPCOUNT(*in_EAX) & 1U) == 0;
          if (bVar16) {
            *in_EAX = *in_EAX + bVar11;
            bVar2 = bVar2 + 0x2c;
            *(char *)CONCAT31(uVar10,bVar2) = *(char *)CONCAT31(uVar10,bVar2) + bVar2;
            bVar2 = bVar2 | (byte)*puVar1;
            in_EAX = (byte *)CONCAT31(uVar10,bVar2);
            unaff_EDI = piStack_4;
            if ((POPCOUNT(bVar2) & 1U) == 0) {
              *in_EAX = *in_EAX + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto code_r0x00404092;
          }
        }
        pcVar12 = (char *)((uint)pcVar12 ^ *unaff_EBX);
        cVar13 = (char)puVar1 + (byte)*unaff_ESI;
        param_2 = (uint *)CONCAT31((int3)((uint)puVar1 >> 8),cVar13);
        bVar16 = cVar13 < '\0';
        bVar17 = SCARRY1((char)puVar1,(byte)*unaff_ESI);
      }
    }
    else {
      unaff_EBX = (uint *)CONCAT22(uVar15,CONCAT11(cVar14 + *(byte *)((int)unaff_EBX + -0x12),cVar4)
                                  );
      *in_EAX = *in_EAX + bVar3;
      bVar2 = *(byte *)((int)unaff_EDI + 0x42);
      *in_EAX = *in_EAX + bVar3;
      pcVar12 = (char *)CONCAT22((short)((uint)tableName >> 0x10),
                                 CONCAT11((byte)((uint)tableName >> 8) | bVar2 | (byte)*param_2,
                                          bVar11));
      *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar13;
      *(byte *)param_2 = (byte)*param_2 ^ bVar3;
      *in_EAX = *in_EAX + cVar4;
    }
    bVar2 = (byte)in_EAX;
    *in_EAX = *in_EAX + bVar2;
    *pcVar12 = *pcVar12 + (char)((uint)in_EAX >> 8);
    bVar3 = *in_EAX;
    *in_EAX = *in_EAX + bVar2;
    *unaff_EDI = (int)((int)unaff_EBX + (uint)CARRY1(bVar3,bVar2) + *unaff_EDI);
    tableName = pcVar12;
  } while( true );
}


