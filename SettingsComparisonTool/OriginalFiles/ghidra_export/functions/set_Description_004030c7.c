/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 004030c7
 * Raw Name    : set_Description
 * Demangled   : set_Description
 * Prototype   : void set_Description(undefined4 value, char * param_2)
 * Local Vars  : cVar1, bVar2, in_EAX, pcVar3, pbVar4, piVar5, uVar6, bVar7, unaff_EBX, param_2, unaff_ESI, pbVar8, unaff_EDI, value
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall set_Description(undefined4 value,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined3 uVar6;
  byte *pbVar4;
  int *piVar5;
  byte bVar7;
  char *unaff_EBX;
  int unaff_ESI;
  byte *pbVar8;
  char *unaff_EDI;
  char *pcVar3;
  
                    /* .NET CLR Managed Code */
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + *unaff_EBX;
  pcVar3 = (char *)CONCAT31(uVar6,cVar1);
  if (SCARRY1((char)in_EAX,*unaff_EBX) == cVar1 < '\0') {
    *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
    *unaff_EDI = *unaff_EDI + (char)unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + cVar1;
  pbVar4 = (byte *)CONCAT31(uVar6,cVar1 + '*');
  bVar7 = (byte)((uint)value >> 8);
  pcVar3 = (char *)CONCAT22((short)((uint)value >> 0x10),CONCAT11(bVar7 + *pbVar4,(char)value));
  pbVar4 = pbVar4 + (uint)CARRY1(bVar7,*pbVar4) + *(int *)pbVar4;
  *param_2 = *param_2 + (char)value;
  uVar6 = (undefined3)((uint)pbVar4 >> 8);
  cVar1 = (byte)pbVar4 - *pbVar4;
  piVar5 = (int *)CONCAT31(uVar6,cVar1);
  pbVar8 = (byte *)(unaff_ESI + *piVar5 + (uint)((byte)pbVar4 < *pbVar4));
  bVar2 = cVar1 + (char)*piVar5;
  pbVar4 = (byte *)CONCAT31(uVar6,bVar2);
  *pbVar4 = *pbVar4 + bVar2;
  *pcVar3 = *pcVar3 + (char)param_2;
  bVar7 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  *(byte **)(unaff_EBX + -0x41) = pbVar8 + (uint)CARRY1(bVar7,bVar2) + *(int *)(unaff_EBX + -0x41);
  *pbVar4 = *pbVar4 + bVar2;
  bVar2 = bVar2 | *pbVar8;
  *(char *)CONCAT31(uVar6,bVar2) = *(char *)CONCAT31(uVar6,bVar2) + bVar2;
  pcVar3 = (char *)CONCAT31(uVar6,bVar2 + 0x7b);
  *pcVar3 = *pcVar3 + bVar2 + 0x7b;
  pbVar8[CONCAT31(uVar6,bVar2 - 8) + -1] = pbVar8[CONCAT31(uVar6,bVar2 - 8) + -1] + (bVar2 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


