/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404084
 * Raw Name    : MoveNext
 * Demangled   : MoveNext
 * Prototype   : bool MoveNext(char * param_1, uint * param_2)
 * Local Vars  : cVar2, cVar1, bVar4, bVar3, in_EAX, bVar5, uVar7, pbVar6, puVar9, piVar8, pcVar11, uVar10, puVar12, param_1, unaff_EBX, param_2, uVar14, cVar13, unaff_ESI, unaff_EBP, bVar15, unaff_EDI, unaff_retaddr, uVar16
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00404085) overlaps instruction at (ram,0x00404084)
    */

bool __fastcall MoveNext(char *param_1,uint *param_2)

{
  char cVar1;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined3 uVar10;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  byte *in_EAX;
  undefined1 *puVar9;
  char *pcVar11;
  char cVar13;
  undefined2 uVar14;
  uint *puVar12;
  int unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int *unaff_EDI;
  bool bVar15;
  undefined2 uVar16;
  int *unaff_retaddr;
  char cVar2;
  
                    /* .NET CLR Managed Code */
  puVar12 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *(char *)(unaff_EBX + -0x46),
                                      (char)unaff_EBX));
  do {
    *in_EAX = *in_EAX + (char)in_EAX;
    uVar16 = SUB42(unaff_retaddr,0);
    unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
    in_EAX = (byte *)((uint)in_EAX & 0xffffff00);
    puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                               CONCAT11((char)((uint)puVar12 >> 8) - (byte)*puVar12,(char)puVar12));
code_r0x00404092:
    puVar9 = (undefined1 *)((uint)in_EAX & 0xffffff00);
    *puVar9 = *puVar9;
    *puVar9 = *puVar9;
    *(byte *)param_2 = (byte)*param_2;
    cVar2 = (char)(puVar9 + 0xba7d);
    uVar10 = (undefined3)((uint)(puVar9 + 0xba7d) >> 8);
    cVar1 = cVar2 + '\x02';
    pcVar11 = (char *)CONCAT31(uVar10,cVar1);
    puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                               CONCAT11((char)((uint)puVar12 >> 8) + (byte)puVar12[-0x11],
                                        (char)puVar12));
    *pcVar11 = *pcVar11 + cVar1;
    in_EAX = (byte *)CONCAT31(uVar10,cVar2 + 'q');
    do {
      bVar3 = *in_EAX;
      bVar5 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar5;
      unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar16);
      if (!CARRY1(bVar3,bVar5)) goto code_r0x00404092;
      *in_EAX = *in_EAX + bVar5;
      puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                 CONCAT11((byte)((uint)puVar12 >> 8) | *(byte *)(unaff_EBP + -0x41),
                                          (char)puVar12));
      *in_EAX = *in_EAX + bVar5;
      uVar10 = (undefined3)((uint)in_EAX >> 8);
      bVar3 = bVar5 + 2;
      pbVar6 = (byte *)CONCAT31(uVar10,bVar3);
      if (SCARRY1(bVar5,'\x02') == (char)bVar3 < '\0') goto code_r0x00404076;
      *pbVar6 = *pbVar6 + bVar3;
      bVar4 = bVar5 + 4;
      in_EAX = (byte *)CONCAT31(uVar10,bVar4);
    } while (0xfd < bVar3);
    *in_EAX = *in_EAX | bVar4;
    bVar15 = (POPCOUNT(*in_EAX) & 1U) == 0;
    if (bVar15) {
      *in_EAX = *in_EAX + bVar4;
      bVar5 = bVar5 + 0x2c;
      *(char *)CONCAT31(uVar10,bVar5) = *(char *)CONCAT31(uVar10,bVar5) + bVar5;
      bVar5 = bVar5 | (byte)*param_2;
      in_EAX = (byte *)CONCAT31(uVar10,bVar5);
      unaff_EDI = unaff_retaddr;
      if ((POPCOUNT(bVar5) & 1U) == 0) {
        *in_EAX = *in_EAX + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x00404092;
    }
    while (!bVar15) {
      while( true ) {
        pcVar11 = (char *)((uint)param_1 ^ *puVar12);
        cVar2 = (char)param_2;
        cVar1 = cVar2 + (byte)*unaff_ESI;
        param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar1);
        if (SCARRY1(cVar2,(byte)*unaff_ESI) != cVar1 < '\0') break;
        while( true ) {
          bVar5 = (byte)in_EAX;
          *in_EAX = *in_EAX + bVar5;
          *pcVar11 = *pcVar11 + (char)((uint)in_EAX >> 8);
          bVar3 = *in_EAX;
          *in_EAX = *in_EAX + bVar5;
          *unaff_EDI = (int)((int)puVar12 + (uint)CARRY1(bVar3,bVar5) + *unaff_EDI);
          *(byte *)((int)puVar12 + -3) = *(byte *)((int)puVar12 + -3) + 1;
          *in_EAX = *in_EAX + bVar5;
          bVar4 = (byte)pcVar11 | (byte)*param_2;
          param_1 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),bVar4);
          uVar14 = (undefined2)((uint)puVar12 >> 0x10);
          cVar2 = (char)puVar12;
          cVar13 = (char)((uint)puVar12 >> 8) + *(char *)(unaff_EBP + -2);
          puVar12 = (uint *)CONCAT22(uVar14,CONCAT11(cVar13,cVar2));
          *in_EAX = *in_EAX + bVar5;
          uVar10 = (undefined3)((uint)in_EAX >> 8);
          bVar5 = bVar5 | (byte)*unaff_ESI;
          unaff_EDI = (int *)((int)unaff_EDI + *(int *)(unaff_EBP + -1));
          *(char *)CONCAT31(uVar10,bVar5) = *(char *)CONCAT31(uVar10,bVar5) + bVar5;
          bVar5 = bVar5 | (byte)*unaff_ESI;
          pbVar6 = (byte *)CONCAT31(uVar10,bVar5);
          cVar1 = (char)param_2 - (byte)*puVar12;
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar1);
          *(byte *)param_2 = (byte)*param_2 ^ bVar5;
          *(byte *)puVar12 = (byte)*puVar12 + bVar5;
          *pbVar6 = *pbVar6 + bVar5;
          bVar3 = *pbVar6;
          *param_1 = *param_1 + cVar1;
          bVar3 = (bVar5 & bVar3) - cVar2;
          *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
          bVar3 = bVar3 | (byte)*param_2;
          in_EAX = (byte *)CONCAT31(uVar10,bVar3);
          if ((POPCOUNT(bVar3) & 1U) == 0) break;
          puVar12 = (uint *)CONCAT22(uVar14,CONCAT11(cVar13 + *(byte *)((int)puVar12 + -0x12),cVar2)
                                    );
          *in_EAX = *in_EAX + bVar3;
          bVar5 = *(byte *)((int)unaff_EDI + 0x42);
          *in_EAX = *in_EAX + bVar3;
          pcVar11 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar11 >> 8) | bVar5 | (byte)*param_2,
                                              bVar4));
          *(byte *)puVar12 = (byte)*puVar12 + cVar1;
          *(byte *)param_2 = (byte)*param_2 ^ bVar3;
          *in_EAX = *in_EAX + cVar2;
          unaff_retaddr = (int *)((uint)unaff_retaddr & 0xffff0000);
        }
        *in_EAX = *in_EAX + bVar3;
        uVar7 = CONCAT31(uVar10,bVar3 + 0x33) + 0xba7b02 + (uint)(0xcc < bVar3);
        *(byte *)((int)unaff_EDI + (int)puVar12) =
             *(byte *)((int)unaff_EDI + (int)puVar12) + (char)uVar7;
        *(byte *)puVar12 = (byte)*puVar12 + 1;
        in_EAX = (byte *)(uVar7 | *param_2);
        unaff_retaddr = (int *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),uVar16);
      }
      *in_EAX = *in_EAX + (char)in_EAX;
      uVar10 = (undefined3)((uint)in_EAX >> 8);
      bVar3 = (char)in_EAX + 2;
      piVar8 = (int *)CONCAT31(uVar10,bVar3);
      uVar7 = *puVar12;
      bVar15 = CARRY4((uint)param_2,*unaff_ESI);
      param_2 = (uint *)((int)param_2 + *unaff_ESI);
      if (bVar15) {
        *piVar8 = (int)(*piVar8 + (int)piVar8);
        bVar3 = bVar3 | (byte)*unaff_ESI;
        puVar12 = (uint *)CONCAT22((short)((uint)puVar12 >> 0x10),
                                   CONCAT11((char)((uint)puVar12 >> 8) + (byte)puVar12[-0x11],
                                            (char)puVar12));
        *(char *)CONCAT31(uVar10,bVar3) = *(char *)CONCAT31(uVar10,bVar3) + bVar3;
        piVar8 = (int *)CONCAT31(uVar10,bVar3 + 0x7d);
      }
      bVar3 = *(byte *)((int)puVar12 + -0x42);
      *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
      cVar1 = (char)piVar8 + '}';
      pbVar6 = (byte *)CONCAT31((int3)((uint)piVar8 >> 8),cVar1);
      unaff_EBP = 0x6040000;
      puVar12 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar12 >> 0x10),
                                                 CONCAT11((char)((uint)puVar12 >> 8) + bVar3,
                                                          (char)puVar12)) >> 8),
                                 (char)puVar12 - (byte)*unaff_ESI);
      param_1 = (char *)CONCAT22((short)((uint)pcVar11 >> 0x10),
                                 CONCAT11(((byte)((uint)pcVar11 >> 8) | (byte)uVar7) + *pbVar6,
                                          (char)pcVar11));
      *param_1 = *param_1 + cVar1;
      *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar1;
code_r0x00404076:
      piVar8 = (int *)CONCAT31((int3)((uint)pbVar6 >> 8),(byte)pbVar6 - *pbVar6);
      unaff_ESI = (uint *)((int)unaff_ESI + (-(uint)((byte)pbVar6 < *pbVar6) - *piVar8));
      in_EAX = (byte *)((int)piVar8 + *piVar8);
      bVar5 = (byte)in_EAX;
      *in_EAX = *in_EAX + bVar5;
      *(byte *)puVar12 = (byte)*puVar12 + (char)((uint)in_EAX >> 8);
      bVar3 = *in_EAX;
      *in_EAX = *in_EAX + bVar5;
      *param_2 = (uint)(in_EAX + (uint)CARRY1(bVar3,bVar5) + *param_2);
      bVar15 = (POPCOUNT(*param_2 & 0xff) & 1U) == 0;
    }
  } while( true );
}


