/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00402fba
 * Raw Name    : set_SetsToCompare
 * Demangled   : set_SetsToCompare
 * Prototype   : void set_SetsToCompare(undefined4 value, byte * param_2)
 * Local Vars  : value, pcStack_14, cVar1, bVar2, bVar3, cVar4, in_EAX, pcVar5, pbVar6, piVar7, uVar8, bVar9, cVar10, unaff_EBX, cVar11, uVar12, unaff_EBP, unaff_ESI, in_ES, in_DS, param_2
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0040306e) overlaps instruction at (ram,0x0040306d)
    */

void __fastcall set_SetsToCompare(undefined4 value,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  char *pcVar5;
  byte *pbVar6;
  int *piVar7;
  byte bVar9;
  char cVar10;
  char cVar11;
  char *unaff_EBX;
  undefined2 uVar12;
  int unaff_EBP;
  byte *unaff_ESI;
  undefined2 in_ES;
  undefined2 in_DS;
  char *pcStack_14;
  
                    /* .NET CLR Managed Code */
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + *unaff_EBX;
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar1 < '\0') {
    cVar11 = cVar1 + *unaff_EBX;
    pcVar5 = (char *)CONCAT31(uVar8,cVar11);
    if (SCARRY1(cVar1,*unaff_EBX) != cVar11 < '\0') goto code_r0x00402fe0;
    if (SCARRY1(cVar1,*unaff_EBX) != cVar11 < '\0') goto code_r0x00403002;
    param_2[unaff_EBP] = param_2[unaff_EBP] + cVar11;
  }
  else {
    *(char *)CONCAT31(uVar8,cVar1) = *(char *)CONCAT31(uVar8,cVar1) + cVar1;
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    uVar12 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar11 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x1f];
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
    unaff_EBX = (char *)CONCAT22(uVar12,CONCAT11(cVar11 + *(char *)(CONCAT22(uVar12,CONCAT11(cVar11,
                                                  (char)unaff_EBX)) + 0x20),(char)unaff_EBX));
    *pcVar5 = *pcVar5 + bVar2 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x54 & *param_2);
code_r0x00402fe0:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    uVar12 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar11 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x21];
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
    unaff_EBX = (char *)CONCAT22(uVar12,CONCAT11(cVar11 + *(char *)(CONCAT22(uVar12,CONCAT11(cVar11,
                                                  (char)unaff_EBX)) + 0x22),(char)unaff_EBX));
    *pcVar5 = *pcVar5 + bVar2 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x54 & *param_2);
code_r0x00403002:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    value = CONCAT22((short)((uint)value >> 0x10),
                     CONCAT11((char)((uint)value >> 8) + *pcVar5,(char)value));
    uVar12 = (undefined2)((uint)unaff_EBX >> 0x10);
    cVar11 = (char)((uint)unaff_EBX >> 8) + unaff_EBX[0x25];
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
    unaff_EBX = (char *)CONCAT22(uVar12,CONCAT11(cVar11 + *(char *)(CONCAT22(uVar12,CONCAT11(cVar11,
                                                  (char)unaff_EBX)) + 0x26),(char)unaff_EBX));
    *pcVar5 = *pcVar5 + bVar2 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x54);
  }
  uVar8 = (undefined3)((uint)pcVar5 >> 8);
  bVar2 = (byte)pcVar5 & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  cVar1 = bVar2 + 0x2a;
  pcVar5 = (char *)CONCAT31(uVar8,cVar1);
  cVar11 = (char)param_2;
  if ((POPCOUNT(cVar1) & 1U) == 0) {
    *pcVar5 = *pcVar5 + cVar1;
    pbVar6 = (byte *)(CONCAT31(uVar8,bVar2 + 0x4f) + -0x33282610);
    bVar2 = *pbVar6;
    bVar3 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar3;
    uVar8 = (undefined3)((uint)pbVar6 >> 8);
    bVar9 = (byte)((uint)value >> 8);
    uVar12 = (undefined2)((uint)value >> 0x10);
    if (!CARRY1(bVar2,bVar3)) {
      if (!SCARRY1(bVar3,'\0')) {
        *pbVar6 = *pbVar6 + bVar3;
        value = CONCAT22(uVar12,CONCAT11(bVar9 | *param_2,(char)value));
        bVar3 = bVar3 & *param_2;
        *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
        pcVar5 = (char *)CONCAT31(uVar8,bVar3 + 0x2a);
        goto code_r0x00403058;
      }
      pcVar5 = (char *)CONCAT31(uVar8,bVar3 + *unaff_EBX);
      if (SCARRY1(bVar3,*unaff_EBX) != (char)(bVar3 + *unaff_EBX) < '\0') goto code_r0x00403072;
      goto code_r0x0040309a;
    }
    bVar2 = bVar3 + *unaff_EBX;
    pbVar6 = (byte *)CONCAT31(uVar8,bVar2);
    if (SCARRY1(bVar3,*unaff_EBX) == (char)bVar2 < '\0') {
      pcVar5 = (char *)CONCAT22(uVar12,CONCAT11(bVar9 | *param_2,(char)value));
      *unaff_EBX = *unaff_EBX + cVar11;
      *param_2 = *param_2 ^ bVar2;
      *(char *)((int)pbVar6 * 2) = *(char *)((int)pbVar6 * 2) + bVar2;
      goto code_r0x004030df;
    }
  }
  else {
code_r0x00403058:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    bVar2 = (char)pcVar5 + 0x2aU & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x2a);
    *pcVar5 = *pcVar5 + bVar2 + 0x2a;
    pcVar5 = (char *)CONCAT31(uVar8,bVar2 + 0x54 & *param_2);
code_r0x00403072:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    uVar8 = (undefined3)((uint)pcVar5 >> 8);
    pcVar5 = (char *)CONCAT31(uVar8,cVar1 + '*');
    *pcVar5 = *pcVar5 + cVar1 + '*';
    bVar2 = cVar1 + 0x54U & *param_2;
    *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_DS);
    value = CONCAT22((short)((uint)value >> 0x10),
                     CONCAT11((char)((uint)value >> 8) + *(char *)CONCAT31(uVar8,bVar2 + 0x2a),
                              (char)value));
    unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
    pcVar5 = pcStack_14;
code_r0x0040309a:
    cVar1 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar1;
    pcStack_14 = (char *)CONCAT22(pcStack_14._2_2_,in_ES);
    *pcVar5 = *pcVar5 + cVar1;
    pbVar6 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),cVar1 + 0x2aU & *param_2);
  }
  cVar1 = (char)pbVar6;
  *pbVar6 = *pbVar6 + cVar1;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar4 = cVar1 + '*';
  pcVar5 = (char *)CONCAT31(uVar8,cVar4);
  unaff_ESI[0x20a0000] = unaff_ESI[0x20a0000] - cVar11;
  *pcVar5 = *pcVar5 + cVar4;
  cVar10 = (char)pcStack_14 - *unaff_ESI;
  unaff_EBX = (char *)CONCAT22((short)((uint)pcStack_14 >> 0x10),
                               CONCAT11((char)((uint)pcStack_14 >> 8) +
                                        *(char *)(CONCAT31((int3)((uint)pcStack_14 >> 8),cVar10) +
                                                 0x34),cVar10));
  *pcVar5 = *pcVar5 + cVar4;
  bVar2 = cVar1 + 0x54U & *param_2;
  *(char *)CONCAT31(uVar8,bVar2) = *(char *)CONCAT31(uVar8,bVar2) + bVar2;
  pbVar6 = (byte *)CONCAT31(uVar8,bVar2 + 0x2a);
  bVar2 = (byte)((uint)value >> 8);
  pcVar5 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar2 + *pbVar6,(char)value));
  pbVar6 = pbVar6 + (uint)CARRY1(bVar2,*pbVar6) + *(int *)pbVar6;
  *param_2 = *param_2 + (char)value;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  cVar1 = (byte)pbVar6 - *pbVar6;
  piVar7 = (int *)CONCAT31(uVar8,cVar1);
  unaff_ESI = unaff_ESI + (uint)((byte)pbVar6 < *pbVar6) + *piVar7;
  cVar1 = cVar1 + (char)*piVar7;
  pbVar6 = (byte *)CONCAT31(uVar8,cVar1);
  *pbVar6 = *pbVar6 + cVar1;
code_r0x004030df:
  *pcVar5 = *pcVar5 + cVar11;
  bVar2 = *pbVar6;
  bVar3 = (byte)pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  *(byte **)(unaff_EBX + -0x41) =
       unaff_ESI + (uint)CARRY1(bVar2,bVar3) + *(int *)(unaff_EBX + -0x41);
  *pbVar6 = *pbVar6 + bVar3;
  uVar8 = (undefined3)((uint)pbVar6 >> 8);
  bVar3 = bVar3 | *unaff_ESI;
  *(char *)CONCAT31(uVar8,bVar3) = *(char *)CONCAT31(uVar8,bVar3) + bVar3;
  pcVar5 = (char *)CONCAT31(uVar8,bVar3 + 0x7b);
  *pcVar5 = *pcVar5 + bVar3 + 0x7b;
  unaff_ESI[CONCAT31(uVar8,bVar3 - 8) + -1] =
       unaff_ESI[CONCAT31(uVar8,bVar3 - 8) + -1] + (bVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


