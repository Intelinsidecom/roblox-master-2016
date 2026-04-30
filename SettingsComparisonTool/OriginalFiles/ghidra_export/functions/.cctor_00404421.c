/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404421
 * Raw Name    : .cctor
 * Demangled   : .cctor
 * Prototype   : int .cctor(int * param_1, byte * param_2, ushort * param_3)
 * Local Vars  : cVar2, param_1, iVar1, param_2, bVar4, param_3, cVar3, bVar6, bVar5, piVar7, in_EAX, pcVar9, uVar8, pbVar11, puVar10, pbVar13, pbVar12, cVar15, uVar14, uVar17, uVar16, unaff_EBP, unaff_EBX, pbVar18, unaff_ESI, unaff_EDI, pbVar19, in_CF, in_ES, bVar20, in_AF, unaff_retaddr, bVar21
 */

#include "../_pdb_types.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004052f8) overlaps instruction at (ram,0x004052f6)
    */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x00405237) */
/* WARNING: Removing unreachable block (ram,0x004048d1) */
/* WARNING: Removing unreachable block (ram,0x00404654) */
/* WARNING: Removing unreachable block (ram,0x004045de) */
/* WARNING: Removing unreachable block (ram,0x00404576) */
/* WARNING: Removing unreachable block (ram,0x004046c4) */
/* WARNING: Removing unreachable block (ram,0x004046d0) */
/* WARNING: Removing unreachable block (ram,0x004046e3) */
/* WARNING: Removing unreachable block (ram,0x00404c9a) */
/* WARNING: Removing unreachable block (ram,0x00405138) */
/* WARNING: Removing unreachable block (ram,0x00404bb1) */
/* WARNING: Removing unreachable block (ram,0x00405230) */
/* WARNING: Removing unreachable block (ram,0x004052b0) */
/* WARNING: Removing unreachable block (ram,0x00405198) */
/* WARNING: Removing unreachable block (ram,0x0040455f) */
/* WARNING: Removing unreachable block (ram,0x00404580) */
/* WARNING: Removing unreachable block (ram,0x00404585) */
/* WARNING: Removing unreachable block (ram,0x00404592) */
/* WARNING: Removing unreachable block (ram,0x004045b9) */
/* WARNING: Removing unreachable block (ram,0x004045ac) */
/* WARNING: Removing unreachable block (ram,0x004045ba) */
/* WARNING: Removing unreachable block (ram,0x004045bc) */
/* WARNING: Removing unreachable block (ram,0x004045d7) */
/* WARNING: Removing unreachable block (ram,0x00404607) */
/* WARNING: Removing unreachable block (ram,0x004045f7) */
/* WARNING: Removing unreachable block (ram,0x00404606) */
/* WARNING: Removing unreachable block (ram,0x0040460b) */
/* WARNING: Removing unreachable block (ram,0x00404617) */
/* WARNING: Removing unreachable block (ram,0x004045c8) */
/* WARNING: Removing unreachable block (ram,0x004045d2) */
/* WARNING: Removing unreachable block (ram,0x00404620) */
/* WARNING: Removing unreachable block (ram,0x00404634) */
/* WARNING: Removing unreachable block (ram,0x00404638) */
/* WARNING: Removing unreachable block (ram,0x004046a0) */
/* WARNING: Removing unreachable block (ram,0x004046a4) */
/* WARNING: Removing unreachable block (ram,0x004046b2) */
/* WARNING: Removing unreachable block (ram,0x004046c2) */
/* WARNING: Removing unreachable block (ram,0x004046f0) */
/* WARNING: Removing unreachable block (ram,0x004046f2) */
/* WARNING: Removing unreachable block (ram,0x0040470a) */
/* WARNING: Removing unreachable block (ram,0x00404710) */
/* WARNING: Removing unreachable block (ram,0x00404729) */
/* WARNING: Removing unreachable block (ram,0x00404738) */
/* WARNING: Removing unreachable block (ram,0x0040473a) */
/* WARNING: Removing unreachable block (ram,0x00404754) */
/* WARNING: Removing unreachable block (ram,0x0040475f) */
/* WARNING: Removing unreachable block (ram,0x00404777) */
/* WARNING: Removing unreachable block (ram,0x004047ba) */
/* WARNING: Removing unreachable block (ram,0x004047fe) */
/* WARNING: Removing unreachable block (ram,0x004047d4) */
/* WARNING: Removing unreachable block (ram,0x00404869) */
/* WARNING: Removing unreachable block (ram,0x004047f9) */
/* WARNING: Removing unreachable block (ram,0x004047ff) */
/* WARNING: Removing unreachable block (ram,0x00404803) */
/* WARNING: Removing unreachable block (ram,0x00404811) */
/* WARNING: Removing unreachable block (ram,0x0040488e) */
/* WARNING: Removing unreachable block (ram,0x0040481d) */
/* WARNING: Removing unreachable block (ram,0x00404894) */
/* WARNING: Removing unreachable block (ram,0x00404823) */
/* WARNING: Removing unreachable block (ram,0x00404844) */
/* WARNING: Removing unreachable block (ram,0x0040486e) */
/* WARNING: Removing unreachable block (ram,0x004048b6) */
/* WARNING: Removing unreachable block (ram,0x0040486f) */
/* WARNING: Removing unreachable block (ram,0x00404873) */
/* WARNING: Removing unreachable block (ram,0x00404880) */
/* WARNING: Removing unreachable block (ram,0x00404883) */
/* WARNING: Removing unreachable block (ram,0x00404895) */
/* WARNING: Removing unreachable block (ram,0x00404899) */
/* WARNING: Removing unreachable block (ram,0x00404916) */
/* WARNING: Removing unreachable block (ram,0x004048a1) */
/* WARNING: Removing unreachable block (ram,0x004048f3) */
/* WARNING: Removing unreachable block (ram,0x004048a7) */
/* WARNING: Removing unreachable block (ram,0x004048b1) */
/* WARNING: Removing unreachable block (ram,0x004048b7) */
/* WARNING: Removing unreachable block (ram,0x004048ba) */
/* WARNING: Removing unreachable block (ram,0x0040487b) */
/* WARNING: Removing unreachable block (ram,0x004048e7) */
/* WARNING: Removing unreachable block (ram,0x004048de) */
/* WARNING: Removing unreachable block (ram,0x004048f5) */
/* WARNING: Removing unreachable block (ram,0x004048fe) */
/* WARNING: Removing unreachable block (ram,0x00404903) */
/* WARNING: Removing unreachable block (ram,0x0040497f) */
/* WARNING: Removing unreachable block (ram,0x00404908) */
/* WARNING: Removing unreachable block (ram,0x00404921) */
/* WARNING: Removing unreachable block (ram,0x00404927) */
/* WARNING: Removing unreachable block (ram,0x00404931) */
/* WARNING: Removing unreachable block (ram,0x00404937) */
/* WARNING: Removing unreachable block (ram,0x0040495b) */
/* WARNING: Removing unreachable block (ram,0x0040492b) */
/* WARNING: Removing unreachable block (ram,0x00404961) */
/* WARNING: Removing unreachable block (ram,0x00404973) */
/* WARNING: Removing unreachable block (ram,0x00404943) */
/* WARNING: Removing unreachable block (ram,0x00404979) */
/* WARNING: Removing unreachable block (ram,0x00404982) */
/* WARNING: Removing unreachable block (ram,0x0040498b) */
/* WARNING: Removing unreachable block (ram,0x00404991) */
/* WARNING: Removing unreachable block (ram,0x004049a9) */
/* WARNING: Removing unreachable block (ram,0x004049b4) */
/* WARNING: Removing unreachable block (ram,0x004049c2) */
/* WARNING: Removing unreachable block (ram,0x004049c4) */
/* WARNING: Removing unreachable block (ram,0x00404a4e) */
/* WARNING: Removing unreachable block (ram,0x004049d7) */
/* WARNING: Removing unreachable block (ram,0x004049df) */
/* WARNING: Removing unreachable block (ram,0x004049ef) */
/* WARNING: Removing unreachable block (ram,0x004049f5) */
/* WARNING: Removing unreachable block (ram,0x00404a22) */
/* WARNING: Removing unreachable block (ram,0x00404a30) */
/* WARNING: Removing unreachable block (ram,0x00404ac2) */
/* WARNING: Removing unreachable block (ram,0x00404a4d) */
/* WARNING: Removing unreachable block (ram,0x00404a51) */
/* WARNING: Removing unreachable block (ram,0x00404a8a) */
/* WARNING: Removing unreachable block (ram,0x00404ab4) */
/* WARNING: Removing unreachable block (ram,0x00404aca) */
/* WARNING: Removing unreachable block (ram,0x00404ad4) */
/* WARNING: Removing unreachable block (ram,0x00404add) */
/* WARNING: Removing unreachable block (ram,0x00404aac) */
/* WARNING: Removing unreachable block (ram,0x00404ae2) */
/* WARNING: Removing unreachable block (ram,0x00404b5e) */
/* WARNING: Removing unreachable block (ram,0x00404ae8) */
/* WARNING: Removing unreachable block (ram,0x00404afa) */
/* WARNING: Removing unreachable block (ram,0x00404b0f) */
/* WARNING: Removing unreachable block (ram,0x00404b18) */
/* WARNING: Removing unreachable block (ram,0x00404b63) */
/* WARNING: Removing unreachable block (ram,0x00404b79) */
/* WARNING: Removing unreachable block (ram,0x00404bef) */
/* WARNING: Removing unreachable block (ram,0x00404b09) */
/* WARNING: Removing unreachable block (ram,0x00404b85) */
/* WARNING: Removing unreachable block (ram,0x00404b89) */
/* WARNING: Removing unreachable block (ram,0x00404b9e) */
/* WARNING: Removing unreachable block (ram,0x00404ac4) */
/* WARNING: Removing unreachable block (ram,0x004049bb) */
/* WARNING: Removing unreachable block (ram,0x004049be) */
/* WARNING: Removing unreachable block (ram,0x004048f6) */
/* WARNING: Removing unreachable block (ram,0x00404c0d) */
/* WARNING: Removing unreachable block (ram,0x00404c0f) */
/* WARNING: Removing unreachable block (ram,0x00404c32) */
/* WARNING: Removing unreachable block (ram,0x00404c54) */
/* WARNING: Removing unreachable block (ram,0x00404c79) */
/* WARNING: Removing unreachable block (ram,0x00404c99) */
/* WARNING: Removing unreachable block (ram,0x00404d13) */
/* WARNING: Removing unreachable block (ram,0x00404cd4) */
/* WARNING: Removing unreachable block (ram,0x00404ca4) */
/* WARNING: Removing unreachable block (ram,0x00404ca8) */
/* WARNING: Removing unreachable block (ram,0x00404caa) */
/* WARNING: Removing unreachable block (ram,0x00404cca) */
/* WARNING: Removing unreachable block (ram,0x00404cce) */
/* WARNING: Removing unreachable block (ram,0x00404cfa) */
/* WARNING: Removing unreachable block (ram,0x00404d15) */
/* WARNING: Removing unreachable block (ram,0x00404d1a) */
/* WARNING: Removing unreachable block (ram,0x00404d32) */
/* WARNING: Removing unreachable block (ram,0x00404d3e) */
/* WARNING: Removing unreachable block (ram,0x00404da6) */
/* WARNING: Removing unreachable block (ram,0x00404da8) */
/* WARNING: Removing unreachable block (ram,0x00404d9a) */
/* WARNING: Removing unreachable block (ram,0x00404dce) */
/* WARNING: Removing unreachable block (ram,0x00404de7) */
/* WARNING: Removing unreachable block (ram,0x00404e73) */
/* WARNING: Removing unreachable block (ram,0x00404ea6) */
/* WARNING: Removing unreachable block (ram,0x00404e78) */
/* WARNING: Removing unreachable block (ram,0x00404dfc) */
/* WARNING: Removing unreachable block (ram,0x00404e60) */
/* WARNING: Removing unreachable block (ram,0x00404e0d) */
/* WARNING: Removing unreachable block (ram,0x00404e1a) */
/* WARNING: Removing unreachable block (ram,0x00404e48) */
/* WARNING: Removing unreachable block (ram,0x00404ebf) */
/* WARNING: Removing unreachable block (ram,0x00404ec1) */
/* WARNING: Removing unreachable block (ram,0x00404f39) */
/* WARNING: Removing unreachable block (ram,0x00404f6e) */
/* WARNING: Removing unreachable block (ram,0x00404fa0) */
/* WARNING: Removing unreachable block (ram,0x00404fa4) */
/* WARNING: Removing unreachable block (ram,0x00404ff0) */
/* WARNING: Removing unreachable block (ram,0x0040500e) */
/* WARNING: Removing unreachable block (ram,0x00405016) */
/* WARNING: Removing unreachable block (ram,0x00405018) */
/* WARNING: Removing unreachable block (ram,0x0040501a) */
/* WARNING: Removing unreachable block (ram,0x00405036) */
/* WARNING: Removing unreachable block (ram,0x00405090) */
/* WARNING: Removing unreachable block (ram,0x004050d0) */
/* WARNING: Removing unreachable block (ram,0x004050a8) */
/* WARNING: Removing unreachable block (ram,0x004050d3) */
/* WARNING: Removing unreachable block (ram,0x0040510a) */
/* WARNING: Removing unreachable block (ram,0x004050e2) */
/* WARNING: Removing unreachable block (ram,0x004050e8) */
/* WARNING: Removing unreachable block (ram,0x00405172) */
/* WARNING: Removing unreachable block (ram,0x00405212) */
/* WARNING: Removing unreachable block (ram,0x004050f8) */
/* WARNING: Removing unreachable block (ram,0x00405117) */
/* WARNING: Removing unreachable block (ram,0x004050df) */
/* WARNING: Removing unreachable block (ram,0x004050c9) */
/* WARNING: Removing unreachable block (ram,0x00404c75) */
/* WARNING: Removing unreachable block (ram,0x00405225) */
/* WARNING: Removing unreachable block (ram,0x00405227) */
/* WARNING: Removing unreachable block (ram,0x00405232) */
/* WARNING: Removing unreachable block (ram,0x0040523b) */
/* WARNING: Removing unreachable block (ram,0x004051c8) */
/* WARNING: Removing unreachable block (ram,0x004051c3) */
/* WARNING: Removing unreachable block (ram,0x004051d6) */
/* WARNING: Removing unreachable block (ram,0x00405244) */
/* WARNING: Removing unreachable block (ram,0x00405251) */
/* WARNING: Removing unreachable block (ram,0x004051ef) */
/* WARNING: Removing unreachable block (ram,0x004051f9) */
/* WARNING: Removing unreachable block (ram,0x004051fd) */
/* WARNING: Removing unreachable block (ram,0x00405208) */
/* WARNING: Removing unreachable block (ram,0x00405213) */
/* WARNING: Removing unreachable block (ram,0x00405215) */
/* WARNING: Removing unreachable block (ram,0x0040521b) */
/* WARNING: Removing unreachable block (ram,0x0040525f) */
/* WARNING: Removing unreachable block (ram,0x00405270) */
/* WARNING: Removing unreachable block (ram,0x00405298) */
/* WARNING: Removing unreachable block (ram,0x0040529a) */
/* WARNING: Removing unreachable block (ram,0x0040532c) */
/* WARNING: Removing unreachable block (ram,0x004052e4) */
/* WARNING: Removing unreachable block (ram,0x004052ee) */
/* WARNING: Removing unreachable block (ram,0x0040538f) */
/* WARNING: Removing unreachable block (ram,0x00405312) */
/* WARNING: Removing unreachable block (ram,0x00405368) */
/* WARNING: Removing unreachable block (ram,0x00405357) */
/* WARNING: Removing unreachable block (ram,0x004053bb) */
/* WARNING: Removing unreachable block (ram,0x0040540a) */
/* WARNING: Removing unreachable block (ram,0x00405416) */
/* WARNING: Removing unreachable block (ram,0x00405422) */
/* WARNING: Removing unreachable block (ram,0x004053b2) */
/* WARNING: Removing unreachable block (ram,0x0040536d) */
/* WARNING: Removing unreachable block (ram,0x00405377) */
/* WARNING: Removing unreachable block (ram,0x00405396) */
/* WARNING: Removing unreachable block (ram,0x004052f8) */
/* WARNING: Removing unreachable block (ram,0x0040526e) */
/* WARNING: Removing unreachable block (ram,0x0040542e) */
/* WARNING: Removing unreachable block (ram,0x0040547e) */
/* WARNING: Removing unreachable block (ram,0x0040544a) */
/* WARNING: Removing unreachable block (ram,0x00405483) */

int __fastcall _cctor(int *param_1,byte *param_2,ushort *param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined3 uVar14;
  uint uVar8;
  byte *in_EAX;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  char cVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  byte *unaff_EBX;
  ushort *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar18;
  byte *pbVar19;
  uint *unaff_EDI;
  ushort in_ES;
  undefined1 in_CF;
  byte in_AF;
  bool bVar20;
  bool bVar21;
  ushort unaff_retaddr;
  int *piVar7;
  char *pcVar9;
  byte *pbVar13;
  
  do {
                    /* .NET CLR Managed Code */
    if ((bool)in_CF) {
      do {
        *in_EAX = *in_EAX + (byte)in_EAX;
        pbVar11 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX | in_EAX[0x4000065]);
        unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - *unaff_ESI);
        bVar5 = *pbVar11;
        bVar4 = (byte)((uint)param_1 >> 8);
        cVar3 = (char)param_1;
        cVar15 = bVar4 + *pbVar11;
        param_1 = (int *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar15,cVar3));
        iVar1 = *(int *)pbVar11;
        *param_2 = *param_2 + cVar3;
        param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                                   CONCAT11((char)((uint)param_2 >> 8) - *unaff_ESI,(char)param_2));
        in_EAX = pbVar11 + *(int *)param_2 + (uint)CARRY1(bVar4,bVar5) + iVar1;
        if ((POPCOUNT((uint)in_EAX & 0xff) & 1U) == 0) goto code_r0x00404439;
        *unaff_ESI = *unaff_ESI + (byte)in_EAX;
        unaff_EBX[-0x21f60000] = unaff_EBX[-0x21f60000] - cVar15;
        uVar14 = (undefined3)((uint)in_EAX >> 8);
        cVar2 = ((byte)in_EAX | *unaff_ESI) - 6;
        piVar7 = (int *)CONCAT31(uVar14,cVar2);
        pcVar9 = (char *)((int)piVar7 * 2 + 0x2adc0a00);
        *pcVar9 = *pcVar9 - cVar15;
        *piVar7 = (int)(param_2 + *piVar7);
        *(char *)piVar7 = (char)*piVar7 + cVar2;
        bVar5 = cVar2 + (char)*piVar7;
        in_AF = 9 < (bVar5 & 0xf) | in_AF;
        uVar8 = CONCAT31(uVar14,bVar5 + in_AF * '\x06') & 0xffffff0f;
        bVar4 = (byte)uVar8;
        cVar15 = (char)((uint)in_EAX >> 8) + in_AF;
        in_EAX = (byte *)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(cVar15,bVar4));
        *unaff_ESI = *unaff_ESI + cVar15;
        *param_2 = *param_2 + cVar3;
        *in_EAX = *in_EAX + bVar4;
        bVar5 = *in_EAX;
        *in_EAX = *in_EAX + bVar4;
        unaff_EBP = param_3;
        in_ES = unaff_retaddr;
      } while (CARRY1(bVar5,bVar4));
    }
    unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + unaff_EBX[-0x3d],
                                          (char)unaff_EBX));
code_r0x00404439:
    *in_EAX = *in_EAX + (char)in_EAX;
    uVar14 = (undefined3)((uint)in_EAX >> 8);
    cVar3 = (char)in_EAX + 'o';
    pcVar9 = (char *)CONCAT31(uVar14,cVar3);
    *param_1 = (int)(pcVar9 + *param_1);
    bVar6 = (byte)param_1;
    *param_2 = *param_2 + bVar6;
    bVar4 = cVar3 - *pcVar9;
    pbVar11 = (byte *)CONCAT31(uVar14,bVar4);
    *unaff_EBX = *unaff_EBX + (char)param_2;
    *unaff_EBX = *unaff_EBX ^ bVar4;
    unaff_EBX[0x26000000] = unaff_EBX[0x26000000] + (char)((uint)param_1 >> 8);
    bVar5 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    *(byte **)(unaff_EBX + 0xb) = unaff_ESI + (uint)CARRY1(bVar5,bVar4) + *(int *)(unaff_EBX + 0xb);
    *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
    in_EAX = (byte *)((uint)pbVar11 | 0x1027309);
    in_CF = CARRY1(*param_2,bVar6);
    bVar5 = *param_2;
    *param_2 = *param_2 + bVar6;
    unaff_retaddr = in_ES;
  } while (SCARRY1(bVar5,bVar6) == (char)*param_2 < '\0');
  *in_EAX = *in_EAX + (char)in_EAX;
  *unaff_ESI = *unaff_ESI + 1;
  puVar10 = (uint *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\t') | 1);
  bVar5 = *unaff_ESI;
  bVar4 = (byte)puVar10;
  *unaff_ESI = *unaff_ESI + bVar4;
  if (CARRY1(bVar5,bVar4)) {
    *puVar10 = *puVar10 + (int)puVar10;
    param_2 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                               CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[4],(char)param_2));
  }
  else if (!CARRY1(bVar5,bVar4)) goto code_r0x00404473;
  *puVar10 = *puVar10 + (int)puVar10;
  param_1 = (int *)CONCAT31((int3)((uint)param_1 >> 8),bVar6 | *param_2);
code_r0x00404473:
  uVar16 = (undefined2)((uint)param_1 >> 0x10);
  cVar15 = (char)param_1;
  bVar4 = (char)((uint)param_1 >> 8) + (char)*puVar10;
  uVar8 = *puVar10;
  *unaff_EBX = *unaff_EBX + bVar4;
  pbVar11 = (byte *)((uint)puVar10 & uVar8 | *unaff_EDI);
  out(*(undefined4 *)unaff_ESI,(short)param_2);
  *(byte **)pbVar11 = pbVar11 + *(int *)pbVar11;
  bVar4 = bVar4 | *pbVar11;
  *unaff_EBX = *unaff_EBX + bVar4;
  uVar14 = (undefined3)((uint)pbVar11 >> 8);
  pcVar9 = (char *)CONCAT31(uVar14,0xea);
  *(uint *)(unaff_EBX + -0x3d) = *(uint *)(unaff_EBX + -0x3d) | (uint)unaff_EDI;
  *pcVar9 = *pcVar9 + -0x16;
  pbVar12 = (byte *)CONCAT31(uVar14,0x59);
  *pbVar12 = *pbVar12 + 0x59;
  bVar4 = bVar4 | *pbVar12;
  pbVar13 = (byte *)CONCAT22(uVar16,CONCAT11(bVar4,cVar15));
  *pbVar13 = *pbVar13 | 0x59;
  *param_2 = *param_2 + cVar15;
  *pbVar13 = *pbVar13 - cVar15;
  *(byte **)pbVar12 = pbVar12 + *(int *)pbVar12;
  out(*(undefined4 *)(unaff_ESI + 4),(short)param_2);
  bVar5 = (byte)*unaff_EDI | 0x59 | *pbVar13;
  *param_2 = *param_2 + cVar15;
  pcVar9 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                            CONCAT11((char)((uint)pbVar11 >> 8) - (char)unaff_EBX,bVar5));
  *pcVar9 = *pcVar9 + bVar5;
  cVar3 = (bVar5 | 8) - 2;
  piVar7 = (int *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar3);
  bVar21 = (in_ES & 0x400) != 0;
  bVar20 = (in_ES & 0x10) != 0;
  *(char *)piVar7 = (char)*piVar7 + cVar3;
  uVar17 = CONCAT11((byte)((uint)param_2 >> 8) | unaff_EBX[0xb],(char)param_2);
  pcVar9 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),uVar17);
  *piVar7 = (int)(*piVar7 + (int)piVar7);
  bVar4 = bVar4 | *(byte *)((int)unaff_EDI + -0x2a);
  *(char *)piVar7 = (char)*piVar7 + cVar3;
  pbVar11 = unaff_ESI + (uint)bVar21 * -8 + 0xc;
  out(*(undefined4 *)(unaff_ESI + 8),uVar17);
  *pcVar9 = *pcVar9 + cVar15;
  out(*(undefined4 *)pbVar11,uVar17);
  *pcVar9 = *pcVar9 + cVar15;
  pbVar13 = (byte *)((uint)pcVar9 & 0xffffff00);
  bVar4 = bVar4 | pbVar13[CONCAT22(uVar16,CONCAT11(bVar4,cVar15))];
  pbVar12 = (byte *)CONCAT22(uVar16,CONCAT11(bVar4,cVar15));
  pbVar18 = pbVar11 + (uint)bVar21 * -8 + 4 + (uint)bVar21 * -8 + 4;
  out(*(undefined4 *)(pbVar11 + (uint)bVar21 * -8 + 4),(short)pbVar13);
  bVar5 = *pbVar12;
  puVar10 = (uint *)CONCAT31(0xf80a00,bVar5);
  *pbVar13 = *pbVar13 + cVar15;
  pbVar11 = pbVar18;
  if (*pbVar13 != 0) {
    *(byte *)puVar10 = (byte)*puVar10 + bVar5;
    pbVar12 = (byte *)CONCAT22(uVar16,CONCAT11(bVar4 + (byte)*puVar10,cVar15));
    *pbVar18 = *pbVar18;
    pbVar11 = pbVar18 + (uint)bVar21 * -8 + 4;
    out(*(undefined4 *)pbVar18,(short)pbVar13);
    puVar10 = (uint *)CONCAT31(0xf80a00,-(byte)*unaff_EDI | *pbVar12);
  }
  *pbVar13 = *pbVar13 + (char)pbVar12;
  pbVar18 = pbVar13;
  if (*pbVar13 == 0) goto code_r0x004044ff;
  do {
    *(byte *)puVar10 = (byte)*puVar10 + (byte)puVar10;
    pbVar12 = (byte *)CONCAT31((int3)((uint)pbVar12 >> 8),(char)pbVar12 + (byte)*puVar10);
    pbVar12[0x2a060000] = pbVar12[0x2a060000] - (char)((uint)pbVar13 >> 8);
    *unaff_EBX = *unaff_EBX + (char)pbVar13;
    *pbVar13 = *pbVar13 ^ (byte)puVar10;
    pbVar18 = pbVar13;
code_r0x004044ff:
    cVar3 = (char)((uint)pbVar12 >> 8);
    *pbVar18 = *pbVar18 + cVar3;
    uVar8 = *puVar10;
    bVar5 = (byte)puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + bVar5;
    bVar4 = 9 < (bVar5 & 0xf) | bVar20;
    uVar14 = (undefined3)((uint)puVar10 >> 8);
    bVar6 = bVar5 + bVar4 * '\x06';
    bVar6 = bVar6 + (0x90 < (bVar6 & 0xf0) | CARRY1((byte)uVar8,bVar5) | bVar4 * (0xf9 < bVar6)) *
                    '`';
    pbVar13 = (byte *)CONCAT31(uVar14,bVar6);
    bVar5 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    *(byte **)pbVar18 = pbVar13 + (uint)CARRY1(bVar5,bVar6) + *(int *)pbVar18;
    out(*(undefined4 *)pbVar11,(short)pbVar18);
    *pbVar13 = *pbVar13 + bVar6;
    bVar6 = bVar6 - 0xe;
    pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),
                               CONCAT11(cVar3 + *(byte *)((int)unaff_EDI + 0x3e),(char)pbVar12));
    *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
    bVar4 = 9 < (bVar6 & 0xf) | bVar4;
    bVar6 = bVar6 + bVar4 * -6;
    bVar5 = 0x9f < bVar6 | bVar4 * (bVar6 < 6);
    puVar10 = (uint *)CONCAT31(uVar14,bVar6 + bVar5 * -0x60);
    pbVar18[0x5d] = pbVar18[0x5d] + (char)((uint)pbVar18 >> 8) + bVar5;
    *puVar10 = *puVar10 | (uint)puVar10;
    pbVar19 = pbVar11 + (uint)bVar21 * -8 + 4;
    while( true ) {
      bVar21 = (in_ES & 0x400) != 0;
      bVar20 = (in_ES & 0x10) != 0;
      *(byte *)puVar10 = (char)*puVar10 + (byte)puVar10;
      bVar6 = (byte)pbVar18 | *pbVar19;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),bVar6);
      cVar3 = (char)pbVar12;
      *pbVar12 = *pbVar12 - cVar3;
      *puVar10 = (uint)(*puVar10 + (int)puVar10);
      uVar14 = (undefined3)((uint)puVar10 >> 8);
      bVar4 = (byte)puVar10 | *pbVar13;
      pbVar11 = pbVar19 + (uint)bVar21 * -8 + 4;
      out(*(undefined4 *)pbVar19,(short)pbVar13);
      *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
      cVar15 = (char)((uint)pbVar12 >> 8);
      *(char *)unaff_EBP = (char)*unaff_EBP - cVar15;
      *pbVar13 = *pbVar13 + cVar3;
      bVar5 = bVar4 - 0x17;
      cVar15 = cVar15 + *(byte *)((int)unaff_EDI + 0x46);
      pbVar12 = (byte *)CONCAT22((short)((uint)pbVar12 >> 0x10),CONCAT11(cVar15,cVar3));
      *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
      *(char *)unaff_EBP = (char)*unaff_EBP - cVar15;
      *pbVar13 = *pbVar13 + cVar3;
      bVar4 = bVar4 - 0x21;
      puVar10 = (uint *)CONCAT31(uVar14,bVar4);
      if (bVar5 < 10) break;
      *puVar10 = *puVar10 | (uint)puVar10;
      *(byte *)puVar10 = (byte)*puVar10 + bVar4;
      pbVar18 = (byte *)CONCAT22((short)((uint)pbVar18 >> 0x10),
                                 CONCAT11((byte)((uint)pbVar18 >> 8) | pbVar13[0x6e],bVar6));
      bVar4 = bVar4 | (byte)*puVar10;
      *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
      puVar10 = (uint *)CONCAT31(uVar14,bVar4 | *pbVar18);
      pbVar19 = pbVar11;
    }
  } while( true );
}


