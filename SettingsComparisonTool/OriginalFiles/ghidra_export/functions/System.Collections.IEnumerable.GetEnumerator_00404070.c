/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404070
 * Raw Name    : System.Collections.IEnumerable.GetEnumerator
 * Demangled   : System.Collections.IEnumerable.GetEnumerator
 * Prototype   : pointer System.Collections.IEnumerable.GetEnumerator(undefined4 param_1, uint * param_2)
 * Local Vars  : cVar2, cVar1, bVar4, bVar3, in_EAX, bVar5, piVar7, uVar6, puVar9, pbVar8, pcVar11, uVar10, unaff_EBX, pcVar12, param_1, uVar14, cVar13, param_2, unaff_ESI, unaff_EBP, in_SS, unaff_EDI, unaff_retaddr, bVar15
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404058) overlaps instruction at (ram,0x00404056)
    */

undefined * __fastcall
System_Collections_IEnumerable_GetEnumerator(undefined4 param_1,uint *param_2)

{
  char cVar1;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined3 uVar10;
  uint uVar6;
  int *piVar7;
  byte *in_EAX;
  byte *pbVar8;
  undefined1 *puVar9;
  char *pcVar11;
  char *pcVar12;
  char cVar13;
  undefined2 uVar14;
  uint *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int *unaff_EDI;
  undefined2 in_SS;
  bool bVar15;
  int *unaff_retaddr;
  char cVar2;
  
  do {
                    /* .NET CLR Managed Code */
    pcVar11 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),
                               CONCAT11((char)((uint)param_1 >> 8) + *in_EAX,(char)param_1));
    *pcVar11 = *pcVar11 + (char)in_EAX;
    *(byte *)unaff_ESI = (byte)*unaff_ESI + (char)in_EAX;
code_r0x00404076:
    piVar7 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX - *in_EAX);
    unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)((byte)in_EAX < *in_EAX) - *piVar7));
    pbVar8 = (byte *)((int)piVar7 + *piVar7);
    bVar5 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    *(byte *)unaff_EBX = (byte)*unaff_EBX + (char)((uint)pbVar8 >> 8);
    bVar3 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    *param_2 = (uint)(pbVar8 + (uint)CARRY1(bVar3,bVar5) + *param_2);
    bVar15 = (POPCOUNT(*param_2 & 0xff) & 1U) == 0;
    while (bVar15) {
      *pbVar8 = *pbVar8 + (char)pbVar8;
      in_SS = SUB42(unaff_retaddr,0);
      unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
      pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) - (byte)*unaff_EBX,
                                            (char)unaff_EBX));
code_r0x00404092:
      puVar9 = (undefined1 *)((uint)pbVar8 & 0xffffff00);
      *puVar9 = *puVar9;
      *puVar9 = *puVar9;
      *(byte *)param_2 = (byte)*param_2;
      cVar2 = (char)(puVar9 + 0xba7d);
      uVar10 = (undefined3)((uint)(puVar9 + 0xba7d) >> 8);
      cVar1 = cVar2 + '\x02';
      pcVar12 = (char *)CONCAT31(uVar10,cVar1);
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x11],
                                            (char)unaff_EBX));
      *pcVar12 = *pcVar12 + cVar1;
      pbVar8 = (byte *)CONCAT31(uVar10,cVar2 + 'q');
      do {
        bVar3 = *pbVar8;
        bVar5 = (byte)pbVar8;
        *pbVar8 = *pbVar8 + bVar5;
        unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
        if (!CARRY1(bVar3,bVar5)) goto code_r0x00404092;
        *pbVar8 = *pbVar8 + bVar5;
        unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                     CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                              *(byte *)(unaff_EBP + -0x41),(char)unaff_EBX));
        *pbVar8 = *pbVar8 + bVar5;
        uVar10 = (undefined3)((uint)pbVar8 >> 8);
        bVar3 = bVar5 + 2;
        in_EAX = (byte *)CONCAT31(uVar10,bVar3);
        if (SCARRY1(bVar5,'\x02') == (char)bVar3 < '\0') goto code_r0x00404076;
        *in_EAX = *in_EAX + bVar3;
        bVar4 = bVar5 + 4;
        pbVar8 = (byte *)CONCAT31(uVar10,bVar4);
      } while (0xfd < bVar3);
      *pbVar8 = *pbVar8 | bVar4;
      bVar15 = (POPCOUNT(*pbVar8) & 1U) == 0;
      if (bVar15) {
        *pbVar8 = *pbVar8 + bVar4;
        bVar5 = bVar5 + 0x2c;
        *(char *)CONCAT31(uVar10,bVar5) = *(char *)CONCAT31(uVar10,bVar5) + bVar5;
        bVar5 = bVar5 | (byte)*param_2;
        pbVar8 = (byte *)CONCAT31(uVar10,bVar5);
        unaff_EDI = unaff_retaddr;
        if ((POPCOUNT(bVar5) & 1U) == 0) {
          *pbVar8 = *pbVar8 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x00404092;
      }
    }
    while( true ) {
      pcVar12 = (char *)((uint)pcVar11 ^ *unaff_EBX);
      cVar2 = (char)param_2;
      cVar1 = cVar2 + (byte)*unaff_ESI;
      param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar1);
      if (SCARRY1(cVar2,(byte)*unaff_ESI) != cVar1 < '\0') break;
      while( true ) {
        bVar5 = (byte)pbVar8;
        *pbVar8 = *pbVar8 + bVar5;
        *pcVar12 = *pcVar12 + (char)((uint)pbVar8 >> 8);
        bVar3 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar5;
        *unaff_EDI = (int)((int)unaff_EBX + (uint)CARRY1(bVar3,bVar5) + *unaff_EDI);
        *(byte *)((int)unaff_EBX + -3) = *(byte *)((int)unaff_EBX + -3) + 1;
        *pbVar8 = *pbVar8 + bVar5;
        bVar4 = (byte)pcVar12 | (byte)*param_2;
        pcVar11 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar4);
        uVar14 = (undefined2)((uint)unaff_EBX >> 0x10);
        cVar2 = (char)unaff_EBX;
        cVar13 = (char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBP + -2);
        unaff_EBX = (uint *)CONCAT22(uVar14,CONCAT11(cVar13,cVar2));
        *pbVar8 = *pbVar8 + bVar5;
        uVar10 = (undefined3)((uint)pbVar8 >> 8);
        bVar5 = bVar5 | (byte)*unaff_ESI;
        unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
        *(char *)CONCAT31(uVar10,bVar5) = *(char *)CONCAT31(uVar10,bVar5) + bVar5;
        bVar5 = bVar5 | (byte)*unaff_ESI;
        pbVar8 = (byte *)CONCAT31(uVar10,bVar5);
        cVar1 = (char)param_2 - (byte)*unaff_EBX;
        param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar1);
        *(byte *)param_2 = (byte)*param_2 ^ bVar5;
        *(byte *)unaff_EBX = (byte)*unaff_EBX + bVar5;
        *pbVar8 = *pbVar8 + bVar5;
        bVar3 = *pbVar8;
        *pcVar11 = *pcVar11 + cVar1;
        bVar3 = (bVar5 & bVar3) - cVar2;
        *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
        bVar3 = bVar3 | (byte)*param_2;
        pbVar8 = (byte *)CONCAT31(uVar10,bVar3);
        if ((POPCOUNT(bVar3) & 1U) == 0) break;
        unaff_EBX = (uint *)CONCAT22(uVar14,CONCAT11(cVar13 + *(byte *)((int)unaff_EBX + -0x12),
                                                     cVar2));
        *pbVar8 = *pbVar8 + bVar3;
        bVar5 = *(byte *)((int)unaff_EDI + 0x42);
        *pbVar8 = *pbVar8 + bVar3;
        pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),
                                   CONCAT11((byte)((uint)pcVar12 >> 8) | bVar5 | (byte)*param_2,
                                            bVar4));
        *(byte *)unaff_EBX = (byte)*unaff_EBX + cVar1;
        *(byte *)param_2 = (byte)*param_2 ^ bVar3;
        *pbVar8 = *pbVar8 + cVar2;
        unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
      }
      *pbVar8 = *pbVar8 + bVar3;
      uVar6 = CONCAT31(uVar10,bVar3 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar3);
      *(byte *)((int)unaff_EDI + (int)unaff_EBX) =
           *(byte *)((int)unaff_EDI + (int)unaff_EBX) + (char)uVar6;
      *(byte *)unaff_EBX = (byte)*unaff_EBX + 1;
      pbVar8 = (byte *)(uVar6 | *param_2);
      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_SS);
    }
    *pbVar8 = *pbVar8 + (char)pbVar8;
    uVar10 = (undefined3)((uint)pbVar8 >> 8);
    bVar3 = (char)pbVar8 + 2;
    piVar7 = (int *)CONCAT31(uVar10,bVar3);
    param_1 = CONCAT22((short)((uint)pcVar12 >> 0x10),
                       CONCAT11((byte)((uint)pcVar12 >> 8) | (byte)*unaff_EBX,(char)pcVar12));
    bVar15 = CARRY4((uint)param_2,*unaff_ESI);
    param_2 = (uint *)((int)param_2 + *unaff_ESI);
    if (bVar15) {
      *piVar7 = (int)(*piVar7 + (int)piVar7);
      bVar3 = bVar3 | (byte)*unaff_ESI;
      unaff_EBX = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((char)((uint)unaff_EBX >> 8) + (byte)unaff_EBX[-0x11],
                                            (char)unaff_EBX));
      *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
      piVar7 = (int *)CONCAT31(uVar10,bVar3 + 0x7d);
    }
    bVar3 = *(byte *)((int)unaff_EBX + -0x42);
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    in_EAX = (byte *)CONCAT31((int3)((uint)piVar7 >> 8),(char)piVar7 + '}');
    unaff_EBP = 0x6040000;
    unaff_EBX = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                                 CONCAT11((char)((uint)unaff_EBX >> 8) + bVar3,
                                                          (char)unaff_EBX)) >> 8),
                                 (char)unaff_EBX - (byte)*unaff_ESI);
  } while( true );
}


