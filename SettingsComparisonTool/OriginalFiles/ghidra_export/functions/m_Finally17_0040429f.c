/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 0040429f
 * Raw Name    : <>m__Finally17
 * Demangled   : <>m__Finally17
 * Prototype   : int <>m__Finally17(byte * param_1, uint * param_2)
 * Local Vars  : bVar18, cVar17, uVar20, uVar19, pbVar22, uVar21, cVar24, puVar23, pcVar25, unaff_EBX, cVar27, pbVar26, unaff_EBP, bVar28, pbVar29, unaff_ESI, pbVar31, puVar30, unaff_EDI, pbVar32, puVar34, puVar33, in_DS, in_ES, in_AF, bVar35, bVar37, bVar36, in_stack_fffffffc, unaff_retaddr, param_1, param_2, puStack_24, pcStack_1c, iStack_20, pbStack_10, puStack_14, uVar1, pbStack_8, cVar3, iVar2, bVar5, bVar4, cVar7, bVar6, piVar8, in_EAX, pbVar10, pcVar9, puVar12, pcVar11, uVar14, uVar13, uVar16, uVar15
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

int __fastcall <>m__Finally17(byte *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined3 uVar14;
  int *piVar8;
  char *in_EAX;
  char *pcVar9;
  char *pcVar11;
  uint3 uVar15;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 uVar16;
  char cVar17;
  byte bVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  byte *pbVar22;
  uint *puVar23;
  char cVar24;
  char cVar27;
  byte bVar28;
  char *unaff_EBX;
  byte *pbVar26;
  char *unaff_EBP;
  char *unaff_ESI;
  byte *pbVar29;
  undefined4 *puVar30;
  byte *pbVar31;
  byte *pbVar32;
  char *unaff_EDI;
  uint *puVar33;
  uint *puVar34;
  ushort in_ES;
  ushort in_DS;
  bool bVar35;
  byte in_AF;
  bool bVar36;
  bool bVar37;
  undefined2 unaff_retaddr;
  undefined1 *puStack_24;
  int iStack_20;
  char *pcStack_1c;
  uint *puStack_14;
  byte *pbStack_10;
  byte *pbStack_8;
  char *in_stack_fffffffc;
  byte *pbVar10;
  char *pcVar25;
  
  bVar36 = false;
  while( true ) {
                    /* .NET CLR Managed Code */
    cVar24 = (char)unaff_EBX + *in_EAX;
    pcVar25 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar24);
    pcVar11 = unaff_ESI;
    if (SCARRY1((char)unaff_EBX,*in_EAX) == cVar24 < '\0') goto code_r0x0040425d;
    cVar7 = (char)in_EAX;
    *in_EAX = *in_EAX + cVar7;
    uVar14 = (undefined3)((uint)in_EAX >> 8);
    cVar3 = cVar7 + '\x02';
    pcVar9 = (char *)CONCAT31(uVar14,cVar3);
    bVar35 = (POPCOUNT(cVar3) & 1U) == 0;
    if (!bVar35) {
      param_2 = (uint *)0x2040000;
      goto code_r0x0040426f;
    }
    *pcVar9 = *pcVar9 + cVar3;
    pcVar9 = (char *)(CONCAT31(uVar14,cVar7 + '.') | *param_2);
    if ((POPCOUNT((uint)pcVar9 & 0xff) & 1U) == 0) break;
code_r0x00404272:
    unaff_EBP[(int)&stack0x00000000] = unaff_EBP[(int)&stack0x00000000] + (char)pcVar9;
    pcVar9 = (char *)((uint)pcVar9 | *param_2);
    pcVar11 = unaff_ESI;
    if ((POPCOUNT((uint)pcVar9 & 0xff) & 1U) != 0) goto code_r0x00404238;
    cVar24 = (char)pcVar9;
    *pcVar9 = *pcVar9 + cVar24;
    uVar14 = (undefined3)((uint)pcVar9 >> 8);
    cVar7 = cVar24 + 'o';
    pbVar29 = (byte *)CONCAT31(uVar14,cVar7);
    pbVar31 = (byte *)((int)param_2 + 1);
    *pbVar29 = *pbVar29 + cVar7;
    uVar19 = (undefined2)((uint)param_1 >> 0x10);
    uVar16 = SUB41(param_1,0);
    bVar6 = (byte)((uint)param_1 >> 8) | *pbVar31;
    param_1 = (byte *)CONCAT22(uVar19,CONCAT11(bVar6,uVar16));
    pcVar11 = unaff_ESI + 1;
    out(*unaff_ESI,(short)pbVar31);
    cVar3 = (char)pbVar31 + *unaff_EDI;
    param_2 = (uint *)CONCAT31((int3)((uint)pbVar31 >> 8),cVar3);
    if (SCARRY1((char)pbVar31,*unaff_EDI) == cVar3 < '\0') {
      *pbVar29 = *pbVar29 + cVar7;
      *pcVar11 = *pcVar11 + (char)pcVar25;
      goto System_Collections_IEnumerator_get_Current;
    }
    *pbVar29 = *pbVar29 + cVar7;
    cVar7 = cVar24 + 'q';
    pbVar29 = (byte *)CONCAT31(uVar14,cVar7);
    if ((POPCOUNT(cVar7) & 1U) != 0) {
      param_1 = (byte *)CONCAT22(uVar19,CONCAT11(bVar6 + *pbVar29,uVar16));
      goto System_Collections_IEnumerator_get_Current;
    }
    *pbVar29 = *pbVar29 + cVar7;
    bVar37 = false;
    piVar8 = (int *)(CONCAT31(uVar14,cVar24 + -99) | *param_2);
    bVar35 = (int)piVar8 < 0;
    if ((POPCOUNT((uint)piVar8 & 0xff) & 1U) != 0) {
      do {
        bVar6 = (byte)piVar8;
        if (bVar37 == bVar35) {
          param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),
                                     CONCAT11((char)((uint)param_1 >> 8) + (char)*piVar8,
                                              (char)param_1));
          *param_1 = *param_1 | bVar6;
          *pcVar11 = *pcVar11 + bVar6;
          *(byte *)piVar8 = (char)*piVar8 + bVar6;
          *piVar8 = (int)(unaff_EBP + *piVar8);
          *(byte *)piVar8 = (char)*piVar8 + bVar6;
          *(byte *)param_2 = (byte)*param_2 + bVar6 + (char)*piVar8;
          cVar24 = (char)pcVar11;
          *unaff_EDI = *unaff_EDI + cVar24;
          *pcVar11 = *pcVar11 + cVar24;
          *pcVar11 = *pcVar11 + cVar24;
          pcVar9 = (char *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar24 + *pcVar11);
        }
        else {
          *(byte *)piVar8 = (char)*piVar8 + bVar6;
          in_EAX = (char *)CONCAT31((int3)((uint)piVar8 >> 8),(bVar6 + 2) - (char)pcVar25);
code_r0x0040425d:
          cVar24 = (char)in_EAX;
          *in_EAX = *in_EAX + cVar24;
          pcVar25 = (char *)CONCAT22((short)((uint)pcVar25 >> 0x10),
                                     CONCAT11((byte)((uint)pcVar25 >> 8) | unaff_EBP[-0x45],
                                              (char)pcVar25));
          *in_EAX = *in_EAX + cVar24;
          out(*pcVar11,(short)param_2);
          param_2 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cRam0000ba7d);
          pcVar9 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar24 + ',');
          bVar35 = (POPCOUNT(cVar24 + ',') & 1U) == 0;
          pcVar11 = pcVar11 + 1;
code_r0x0040426f:
          if (bVar35) goto code_r0x00404271;
        }
        pcVar9 = (char *)((uint)pcVar9 & 0xffffff61);
        cVar24 = (char)pcVar9;
        *unaff_EDI = *unaff_EDI + cVar24;
        *pcVar9 = *pcVar9 + cVar24;
        *pcVar9 = *pcVar9 + cVar24;
code_r0x00404238:
        bVar6 = (char)pcVar9 + *pcVar9;
        pbVar29 = (byte *)CONCAT31((int3)((uint)pcVar9 >> 8),bVar6);
        *pbVar29 = *pbVar29 & bVar6;
        param_2 = (uint *)((int)param_2 + -1);
        in_ES = 0;
        *pbVar29 = *pbVar29 + bVar6;
        *pbVar29 = *pbVar29 + bVar6;
        in_stack_fffffffc = (char *)(uint)in_DS;
System_Collections_IEnumerator_get_Current:
        pcVar25 = (char *)CONCAT22((short)((uint)pcVar25 >> 0x10),
                                   CONCAT11((char)((uint)pcVar25 >> 8) + pcVar25[-0x47],
                                            (char)pcVar25));
        *pbVar29 = *pbVar29 + (char)pbVar29;
        pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + '*');
        bVar6 = *pbVar29;
        bVar4 = (byte)((uint)param_1 >> 8);
        cVar24 = (char)param_1;
        param_1 = (byte *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar4 + *pbVar29,cVar24))
        ;
        iVar2 = *(int *)pbVar29;
        *(byte *)param_2 = (byte)*param_2 + cVar24;
        cVar24 = (char)(pbVar29 + (uint)CARRY1(bVar4,bVar6) + iVar2);
        bVar37 = SCARRY1(cVar24,*pcVar25);
        cVar24 = cVar24 + *pcVar25;
        piVar8 = (int *)CONCAT31((int3)((uint)(pbVar29 + (uint)CARRY1(bVar4,bVar6) + iVar2) >> 8),
                                 cVar24);
        bVar35 = cVar24 < '\0';
      } while( true );
    }
    *(char *)piVar8 = (char)*piVar8 + (char)piVar8;
    cVar24 = (char)piVar8 + 'o';
    in_EAX = (char *)CONCAT31((int3)((uint)piVar8 >> 8),cVar24);
    param_2 = (uint *)((int)param_2 + 1);
    *in_EAX = *in_EAX + cVar24;
    param_1 = (byte *)CONCAT22(uVar19,CONCAT11(bVar6 | *(byte *)param_2,uVar16));
    unaff_ESI = unaff_ESI + 2;
    param_2._0_2_ = SUB42(param_2,0);
    out(*pcVar11,param_2._0_2_);
    unaff_EBX = pcVar25;
  }
  *pcVar9 = *pcVar9 + (char)pcVar9;
  uVar14 = (undefined3)((uint)pcVar9 >> 8);
  bVar4 = (char)pcVar9 + 0x6f;
  pbVar31 = (byte *)CONCAT31(uVar14,bVar4);
  pbVar22 = (byte *)((int)param_2 + 1);
  *pbVar31 = *pbVar31 + bVar4;
  uVar19 = (undefined2)((uint)param_1 >> 0x10);
  cVar17 = (char)param_1;
  bVar18 = (byte)((uint)param_1 >> 8) | *pbVar22;
  pcVar11 = (char *)CONCAT22(uVar19,CONCAT11(bVar18,cVar17));
  bVar6 = *pbVar31;
  *pbVar31 = *pbVar31 + bVar4;
  pbVar29 = (byte *)(unaff_ESI + (uint)CARRY1(bVar6,bVar4) + *(int *)pbVar31);
  bVar5 = bVar4 + *pbVar31;
  pbVar10 = (byte *)CONCAT31(uVar14,bVar5);
  *pbVar10 = (*pbVar10 - bVar5) - CARRY1(bVar4,*pbVar31);
  *pbVar10 = *pbVar10 + bVar5;
  bVar6 = *pbVar10;
  piVar8 = (int *)CONCAT31(uVar14,bVar5 & bVar6);
  *pcVar11 = *pcVar11 + (char)pbVar22;
  pcVar25[7] = pcVar25[7] + '\x01';
  *piVar8 = *piVar8 + (int)piVar8;
  bVar6 = bVar5 & bVar6 | *pbVar29;
  cVar7 = unaff_EBP[-0x44];
  uVar21 = (undefined2)((uint)unaff_EBX >> 0x10);
  *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
  pcVar11 = (char *)CONCAT31(uVar14,bVar6 + 6);
  puVar33 = (uint *)(unaff_EDI + *(int *)(unaff_EBP + -0x42));
  *pcVar11 = *pcVar11 + bVar6 + 6;
  pbVar31 = (byte *)CONCAT31(uVar14,bVar6 + 0xc);
  cVar27 = ((char)((uint)unaff_EBX >> 8) + cVar7) - *pbVar22;
  pcVar25 = (char *)CONCAT22(uVar21,CONCAT11(cVar27,cVar24));
  bVar6 = *pbVar31;
  bVar4 = *pbVar31;
  pcVar11 = (char *)CONCAT22(uVar19,CONCAT11(bVar18 + bVar4,cVar17));
  iVar2 = *(int *)pbVar31;
  *pbVar22 = *pbVar22 + cVar17;
  cVar3 = (char)(pbVar31 + (uint)CARRY1(bVar18,bVar6) + iVar2);
  uVar14 = (undefined3)((uint)(pbVar31 + (uint)CARRY1(bVar18,bVar6) + iVar2) >> 8);
  cVar7 = cVar3 + *pcVar25;
  puVar23 = (uint *)CONCAT31(uVar14,cVar7);
  if (SCARRY1(cVar3,*pcVar25) != cVar7 < '\0') {
    *(char *)puVar23 = (char)*puVar23 + cVar7;
    pcVar9 = (char *)CONCAT31(uVar14,cVar7 + '*');
    cVar27 = cVar27 + pcVar25[0x60];
    *pcVar9 = *pcVar9 + cVar7 + '*';
    cVar3 = cVar7 + '-';
    out(*(undefined4 *)pbVar29,(short)pbVar22);
    *pcVar11 = *pcVar11 + cVar3;
    *pbVar22 = *pbVar22 + cVar17;
    uVar20 = CONCAT11((char)((uint)pbVar22 >> 8) - pbVar29[4],(char)pbVar22);
    pbVar31 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),uVar20);
    cVar27 = cVar27 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar27,cVar24)) + 0x60);
    *(char *)CONCAT31(uVar14,cVar3) = *(char *)CONCAT31(uVar14,cVar3) + cVar3;
    bVar6 = cVar7 + 0x30;
    pcVar11 = (char *)CONCAT31(uVar14,bVar6);
    out(*(undefined4 *)(pbVar29 + 4),uVar20);
    *pcVar11 = *pcVar11 + bVar6;
    pbVar10 = (byte *)CONCAT22(uVar19,CONCAT11(bVar18 + bVar4 | *pbVar31,cVar17));
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,unaff_retaddr);
    puVar34 = (uint *)CONCAT22(uVar21,CONCAT11(cVar27 + *(char *)(CONCAT22(uVar21,CONCAT11(cVar27,
                                                  cVar24)) + 0x60),cVar24));
    *pcVar11 = *pcVar11 + bVar6;
    bVar4 = cVar7 + 0x5a;
    puVar23 = (uint *)CONCAT31(uVar14,bVar4);
    pbVar29 = pbVar29 + 9;
    in_stack_fffffffc = unaff_EBP;
    if (0xd5 < bVar6) goto code_r0x0040436f;
    *puVar23 = *puVar23 | (uint)puVar23;
    if ((POPCOUNT(*puVar23 & 0xff) & 1U) != 0) {
      uVar13 = *puVar23;
      puVar23 = (uint *)CONCAT31(uVar14,bVar4 + (char)*puVar23);
      *puVar23 = (uint)((int)puVar23 + (uint)CARRY1(bVar4,(byte)uVar13) + *puVar23);
      goto code_r0x0040436f;
    }
  }
  *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
  func_0x2a4a4325();
  bVar4 = (byte)pbStack_8;
  *pbStack_8 = *pbStack_8 + bVar4;
  bVar6 = *pbStack_8;
  uVar15 = (uint3)((uint)pbStack_8 >> 8);
  piVar8 = (int *)CONCAT31(uVar15,bVar4 - bVar6);
  puVar30 = (undefined4 *)((iStack_20 - *piVar8) - (uint)(bVar4 < *pbStack_8));
  *piVar8 = (int)(*piVar8 + (int)piVar8);
  *(byte *)piVar8 = (char)*piVar8 + (bVar4 - bVar6);
  puVar12 = (undefined1 *)((uint)(uVar15 & 0x21100) << 8);
  *pcStack_1c = *pcStack_1c - (char)puStack_14;
  *(undefined1 *)puVar30 = *(undefined1 *)puVar30;
  uVar19 = SUB42(pbStack_10,0);
  out(*puVar30,uVar19);
  puVar33 = (uint *)(puStack_24 + 1);
  *puStack_24 = *(undefined1 *)(puVar30 + 1);
  *puVar12 = *puVar12;
  out(*(undefined4 *)((int)puVar30 + 5),uVar19);
  *pbStack_10 = *pbStack_10 + 0x25;
  unaff_EBP = (char *)((uint)pcStack_1c | *puStack_14);
  uVar13 = *puVar33;
  out(*(undefined4 *)((int)puVar30 + 9),uVar19);
  *pbStack_10 = *pbStack_10 + 0x25;
  bVar6 = (byte)uVar13 | *(byte *)((int)puVar30 + 0xd);
  out(*(undefined4 *)((int)puVar30 + 0xd),uVar19);
  cVar24 = bVar6 - *(char *)(CONCAT31(uVar15,bVar6) & 0x21100ff);
  pcVar11 = (char *)(CONCAT31(uVar15,cVar24) & 0x21100ff);
  *pbStack_10 = *pbStack_10 + 0x25;
  unaff_EBP[0x70a0000] = unaff_EBP[0x70a0000] - (char)puStack_14;
  pbVar29 = (byte *)((int)puVar30 + 0x15);
  out(*(undefined4 *)((int)puVar30 + 0x11),uVar19);
  *pcVar11 = *pcVar11 + cVar24;
  pbVar10 = (byte *)CONCAT22(0x40,CONCAT11(bRam070adee6 | 0x43,0x26));
  puVar23 = (uint *)(CONCAT31(uVar15,cVar24 + -6) & 0x21100ff);
  pbVar31 = pbStack_10;
  puVar34 = puStack_14;
code_r0x0040436f:
  pbStack_8._0_2_ = in_ES;
  pbVar22 = pbVar29 + 4;
  out(*(undefined4 *)pbVar29,(short)pbVar31);
  pbVar29 = pbVar31 + 1;
  *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
  bVar18 = (byte)puVar34 | (byte)((uint)puVar23 >> 8);
  pbVar26 = (byte *)CONCAT31((int3)((uint)puVar34 >> 8),bVar18);
  uVar14 = (undefined3)((uint)puVar23 >> 8);
  bVar5 = (char)puVar23 - (char)*puVar23;
  bVar6 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar5;
  *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5 + CARRY1(bVar6,bVar5);
  *pbVar29 = *pbVar29 + bVar5;
  *pbVar10 = *pbVar10 + (char)pbVar29;
  bVar6 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar18;
  bVar4 = 9 < (bVar5 & 0xf) | in_AF;
  bVar5 = bVar5 + bVar4 * -6;
  cVar24 = bVar5 + (0x9f < bVar5 | CARRY1(bVar6,bVar18) | bVar4 * (bVar5 < 6)) * -0x60;
  pcVar11 = (char *)CONCAT31(uVar14,cVar24);
  *pbVar29 = *pbVar29 + (char)pbVar10;
  *pcVar11 = *pcVar11 + cVar24;
  *pcVar11 = *pcVar11 + cVar24;
  puVar23 = (uint *)(pbVar31 + 2);
  uVar13 = CONCAT31(uVar14,cVar24 + *pbVar26) + 0x6128;
  uVar14 = (undefined3)(uVar13 >> 8);
  cVar24 = (char)uVar13 + *(char *)((int)puVar33 * 2 + 0x4000064);
  bVar5 = cVar24 - *(char *)CONCAT31(uVar14,cVar24);
  pbVar29 = (byte *)CONCAT31(uVar14,bVar5);
  bVar6 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar5;
  pbVar22 = pbVar22 + (-(uint)CARRY1(bVar6,bVar5) - *(int *)pbVar29);
  bVar5 = bVar5 + *pbVar29;
  pbVar29 = (byte *)CONCAT31(uVar14,bVar5);
  bVar6 = *pbVar29;
  *pbVar29 = *pbVar29 + bVar5;
  *puVar23 = (uint)(pbVar29 + (uint)CARRY1(bVar6,bVar5) + *puVar23);
  cVar24 = (char)((uint)puVar23 >> 8);
  if ((POPCOUNT(*puVar23 & 0xff) & 1U) != 0) {
    cVar7 = bVar5 - *pbVar10;
    pbVar29 = (byte *)CONCAT31(uVar14,cVar7);
    *pbVar29 = *pbVar29 + cVar7 + (bVar5 < *pbVar10);
    *(byte *)puVar23 = (byte)*puVar23 + cVar7;
    *(byte *)puVar33 = (byte)*puVar33 + cVar24;
    puVar34 = puVar33;
    goto code_r0x00404417;
  }
  *pbVar29 = *pbVar29 + bVar5;
  cVar7 = bVar5 + 0x28;
  pcVar11 = (char *)CONCAT31(uVar14,cVar7);
  uVar1 = in((short)puVar23);
  *puVar33 = uVar1;
  *pcVar11 = *pcVar11 + cVar7;
  bVar6 = pbVar26[(int)pbVar10];
  pcVar11[0x28] = pcVar11[0x28] + cVar24;
  bVar36 = ((ushort)pbStack_8 & 0x400) != 0;
  bVar4 = ((ushort)pbStack_8 & 0x10) != 0;
  *pcVar11 = *pcVar11 + cVar7;
  bVar6 = (byte)((uint)pbVar10 >> 8) | bVar6 | (byte)*puVar23;
  pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(bVar6,(char)pbVar10));
  uVar19 = (undefined2)((uint)puVar34 >> 0x10);
  bVar28 = (char)((uint)puVar34 >> 8) + pbVar26[100];
  pbVar26 = (byte *)CONCAT22(uVar19,CONCAT11(bVar28,bVar18));
  *pcVar11 = *pcVar11 + cVar7;
  pbVar29 = (byte *)CONCAT31(uVar14,bVar5 + 0x50);
  pbVar31[0x23] = pbVar31[0x23] + cVar24;
  pbStack_8._0_2_ = 0;
  pbVar31 = pbVar29 + 2;
  *pbVar31 = *pbVar31 + cVar24;
  puVar34 = puVar33 + 1;
  if ((POPCOUNT(*pbVar31) & 1U) != 0) goto code_r0x00404439;
  *pbVar29 = *pbVar29 + bVar5 + 0x50;
  cVar24 = bVar5 + 0x78;
  pcVar11 = (char *)CONCAT31(uVar14,cVar24);
  bVar4 = (uVar13 & 0x1000) != 0;
  *pcVar11 = *pcVar11 + cVar24;
  puVar23 = (uint *)CONCAT31((int3)((uint)puVar23 >> 8),(byte)puVar23 | *pbVar22);
  pbVar26 = (byte *)CONCAT22(uVar19,CONCAT11(bVar28 | pbVar22[0x65],bVar18));
  *pcVar11 = *pcVar11 + cVar24;
  bVar5 = bVar5 + 0x9d;
  pcVar11 = (char *)CONCAT31(uVar14,bVar5);
  puVar23 = (uint *)((uint)puVar23 | *puVar23);
  *pcVar11 = *pcVar11 + bVar6;
  puVar34 = (uint *)((int)puVar33 + (uint)bVar36 * -2 + 5);
  *(byte *)(puVar33 + 1) = bVar5;
  *pcVar11 = *pcVar11 + bVar5;
  bVar5 = bVar5 | (byte)*puVar23;
  pbVar29 = (byte *)CONCAT31(uVar14,bVar5);
  if ((POPCOUNT(bVar5) & 1U) != 0) goto code_r0x00404454;
  *pbVar29 = *pbVar29 + bVar5;
  cVar24 = bVar5 + 2;
  pbVar29 = (byte *)CONCAT31(uVar14,cVar24);
  *unaff_EBP = *unaff_EBP - bVar18;
  *pbVar22 = *pbVar22 + cVar24;
  pbVar31 = pbVar22 + (uint)bVar36 * -8 + 4;
  out(*(undefined4 *)pbVar22,(short)puVar23);
  puVar33 = (uint *)((int)puVar34 + (uint)bVar36 * -2 + 1);
  pbVar22 = pbVar31 + (uint)bVar36 * -2 + 1;
  *(byte *)puVar34 = *pbVar31;
  *pbVar29 = *pbVar29 + cVar24;
  in_stack_fffffffc = (char *)0x0;
  do {
    cVar7 = (char)((uint)pbVar10 >> 8);
    pbVar26[-0x21f60000] = pbVar26[-0x21f60000] - cVar7;
    uVar14 = (undefined3)((uint)pbVar29 >> 8);
    cVar24 = ((byte)pbVar29 | *pbVar22) - 6;
    piVar8 = (int *)CONCAT31(uVar14,cVar24);
    pbStack_8._0_2_ = (ushort)in_stack_fffffffc;
    pcVar11 = (char *)((int)piVar8 * 2 + 0x2adc0a00);
    *pcVar11 = *pcVar11 - cVar7;
    *piVar8 = (int)(*piVar8 + (int)puVar23);
    *(char *)piVar8 = (char)*piVar8 + cVar24;
    bVar6 = cVar24 + (char)*piVar8;
    bVar4 = 9 < (bVar6 & 0xf) | bVar4;
    uVar13 = CONCAT31(uVar14,bVar6 + bVar4 * '\x06') & 0xffffff0f;
    pbVar29 = (byte *)CONCAT22((short)(uVar13 >> 0x10),
                               CONCAT11((char)((uint)pbVar29 >> 8) + bVar4,(char)uVar13));
    puVar34 = puVar33;
code_r0x00404417:
    *pbVar22 = *pbVar22 + (char)((uint)pbVar29 >> 8);
    unaff_EBP = (char *)0x17000000;
    *(byte *)puVar23 = (byte)*puVar23 + (char)pbVar10;
    bVar5 = (byte)pbVar29;
    *pbVar29 = *pbVar29 + bVar5;
    bVar6 = *pbVar29;
    *pbVar29 = *pbVar29 + bVar5;
    puVar33 = puVar34;
    if (!CARRY1(bVar6,bVar5)) goto code_r0x00404436;
code_r0x00404423:
    *pbVar29 = *pbVar29 + (byte)pbVar29;
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar29 >> 8),(byte)pbVar29 | pbVar29[0x4000065]);
    pbVar26 = (byte *)CONCAT31((int3)((uint)pbVar26 >> 8),(char)pbVar26 - *pbVar22);
    bVar6 = *pbVar29;
    bVar5 = (byte)((uint)pbVar10 >> 8);
    cVar24 = (char)pbVar10;
    pbVar10 = (byte *)CONCAT22((short)((uint)pbVar10 >> 0x10),CONCAT11(bVar5 + *pbVar29,cVar24));
    iVar2 = *(int *)pbVar29;
    *(byte *)puVar23 = (byte)*puVar23 + cVar24;
    puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                               CONCAT11((char)((uint)puVar23 >> 8) - *pbVar22,(char)puVar23));
    pbVar29 = pbVar29 + *puVar23 + (uint)CARRY1(bVar5,bVar6) + iVar2;
    puVar34 = puVar33;
    if ((POPCOUNT((uint)pbVar29 & 0xff) & 1U) == 0) {
code_r0x00404439:
      do {
        *pbVar29 = *pbVar29 + (char)pbVar29;
        uVar14 = (undefined3)((uint)pbVar29 >> 8);
        cVar24 = (char)pbVar29 + 'o';
        pcVar11 = (char *)CONCAT31(uVar14,cVar24);
        *(char **)pbVar10 = pcVar11 + *(int *)pbVar10;
        *(byte *)puVar23 = (byte)*puVar23 + (char)pbVar10;
        bVar5 = cVar24 - *pcVar11;
        pbVar29 = (byte *)CONCAT31(uVar14,bVar5);
        *pbVar26 = *pbVar26 + (char)puVar23;
        *pbVar26 = *pbVar26 ^ bVar5;
        pbVar26[0x26000000] = pbVar26[0x26000000] + (char)((uint)pbVar10 >> 8);
        bVar6 = *pbVar29;
        *pbVar29 = *pbVar29 + bVar5;
        *(byte **)(pbVar26 + 0xb) = pbVar22 + (uint)CARRY1(bVar6,bVar5) + *(int *)(pbVar26 + 0xb);
        *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
code_r0x00404454:
        in_stack_fffffffc = (char *)(uint)(ushort)pbStack_8;
        pbVar29 = (byte *)((uint)pbVar29 | 0x1027309);
        uVar13 = *puVar23;
        bVar6 = (byte)pbVar10;
        uVar1 = *puVar23;
        *(byte *)puVar23 = (byte)*puVar23 + bVar6;
        if (SCARRY1((byte)uVar1,bVar6) != (char)(byte)*puVar23 < '\0') {
          *pbVar29 = *pbVar29 + (char)pbVar29;
          *pbVar22 = *pbVar22 + 1;
          puVar33 = (uint *)(CONCAT31((int3)((uint)pbVar29 >> 8),(char)pbVar29 + '\t') | 1);
          bVar4 = *pbVar22;
          bVar5 = (byte)puVar33;
          *pbVar22 = *pbVar22 + bVar5;
          if (CARRY1(bVar4,bVar5)) {
            *puVar33 = *puVar33 + (int)puVar33;
            puVar23 = (uint *)CONCAT22((short)((uint)puVar23 >> 0x10),
                                       CONCAT11((byte)((uint)puVar23 >> 8) | pbVar26[4],
                                                (char)puVar23));
          }
          else if (!CARRY1(bVar4,bVar5)) goto code_r0x00404473;
          *puVar33 = *puVar33 + (int)puVar33;
          pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar10 >> 8),bVar6 | (byte)*puVar23);
code_r0x00404473:
          uVar19 = (undefined2)((uint)pbVar10 >> 0x10);
          cVar7 = (char)pbVar10;
          bVar4 = (char)((uint)pbVar10 >> 8) + (char)*puVar33;
          uVar13 = *puVar33;
          *pbVar26 = *pbVar26 + bVar4;
          pbVar29 = (byte *)((uint)puVar33 & uVar13 | *puVar34);
          pbVar32 = pbVar22 + (uint)bVar36 * -8 + 4;
          out(*(undefined4 *)pbVar22,(short)puVar23);
          *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
          bVar4 = bVar4 | *pbVar29;
          *pbVar26 = *pbVar26 + bVar4;
          uVar14 = (undefined3)((uint)pbVar29 >> 8);
          pcVar11 = (char *)CONCAT31(uVar14,0xea);
          *(uint *)(pbVar26 + -0x3d) = *(uint *)(pbVar26 + -0x3d) | (uint)puVar34;
          *pcVar11 = *pcVar11 + -0x16;
          pbVar31 = (byte *)CONCAT31(uVar14,0x59);
          *pbVar31 = *pbVar31 + 0x59;
          bVar4 = bVar4 | *pbVar31;
          pbVar10 = (byte *)CONCAT22(uVar19,CONCAT11(bVar4,cVar7));
          *pbVar10 = *pbVar10 | 0x59;
          *(byte *)puVar23 = (byte)*puVar23 + cVar7;
          *pbVar10 = *pbVar10 - cVar7;
          *(byte **)pbVar31 = pbVar31 + *(int *)pbVar31;
          pbVar31 = pbVar32 + (uint)bVar36 * -8 + 4;
          out(*(undefined4 *)pbVar32,(short)puVar23);
          bVar6 = (byte)*puVar34 | 0x59 | *pbVar10;
          *(byte *)puVar23 = (byte)*puVar23 + cVar7;
          pcVar11 = (char *)CONCAT22((short)((uint)pbVar29 >> 0x10),
                                     CONCAT11((char)((uint)pbVar29 >> 8) - (char)pbVar26,bVar6));
          *pcVar11 = *pcVar11 + bVar6;
          cVar24 = (bVar6 | 8) - 2;
          piVar8 = (int *)CONCAT31((int3)((uint)pcVar11 >> 8),cVar24);
          bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
          bVar36 = ((ushort)pbStack_8 & 0x10) != 0;
          *(char *)piVar8 = (char)*piVar8 + cVar24;
          uVar21 = CONCAT11((byte)((uint)puVar23 >> 8) | pbVar26[0xb],(char)puVar23);
          pcVar11 = (char *)CONCAT22((short)((uint)puVar23 >> 0x10),uVar21);
          *piVar8 = (int)(*piVar8 + (int)piVar8);
          bVar4 = bVar4 | *(byte *)((int)puVar34 + -0x2a);
          *(char *)piVar8 = (char)*piVar8 + cVar24;
          pbVar29 = pbVar31 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)pbVar31,uVar21);
          *pcVar11 = *pcVar11 + cVar7;
          out(*(undefined4 *)pbVar29,uVar21);
          *pcVar11 = *pcVar11 + cVar7;
          pbVar10 = (byte *)((uint)pcVar11 & 0xffffff00);
          bVar4 = bVar4 | pbVar10[CONCAT22(uVar19,CONCAT11(bVar4,cVar7))];
          pbVar31 = (byte *)CONCAT22(uVar19,CONCAT11(bVar4,cVar7));
          pbVar22 = pbVar29 + (uint)bVar35 * -8 + 4 + (uint)bVar35 * -8 + 4;
          out(*(undefined4 *)(pbVar29 + (uint)bVar35 * -8 + 4),(short)pbVar10);
          bVar6 = *pbVar31;
          puVar33 = (uint *)CONCAT31(0xf80a00,bVar6);
          *pbVar10 = *pbVar10 + cVar7;
          pbVar29 = pbVar22;
          if (*pbVar10 != 0) {
            *(byte *)puVar33 = (byte)*puVar33 + bVar6;
            pbVar31 = (byte *)CONCAT22(uVar19,CONCAT11(bVar4 + (byte)*puVar33,cVar7));
            *pbVar22 = *pbVar22;
            pbVar29 = pbVar22 + (uint)bVar35 * -8 + 4;
            out(*(undefined4 *)pbVar22,(short)pbVar10);
            puVar33 = (uint *)CONCAT31(0xf80a00,-(byte)*puVar34 | *pbVar31);
          }
          *pbVar10 = *pbVar10 + (char)pbVar31;
          pbVar22 = pbVar10;
          if (*pbVar10 == 0) goto code_r0x004044ff;
          do {
            *(byte *)puVar33 = (byte)*puVar33 + (byte)puVar33;
            pbVar31 = (byte *)CONCAT31((int3)((uint)pbVar31 >> 8),(char)pbVar31 + (byte)*puVar33);
            pbVar31[0x2a060000] = pbVar31[0x2a060000] - (char)((uint)pbVar10 >> 8);
            *pbVar26 = *pbVar26 + (char)pbVar10;
            *pbVar10 = *pbVar10 ^ (byte)puVar33;
            pbVar22 = pbVar10;
code_r0x004044ff:
            cVar24 = (char)((uint)pbVar31 >> 8);
            *pbVar22 = *pbVar22 + cVar24;
            uVar13 = *puVar33;
            bVar6 = (byte)puVar33;
            *(byte *)puVar33 = (byte)*puVar33 + bVar6;
            bVar4 = 9 < (bVar6 & 0xf) | bVar36;
            uVar14 = (undefined3)((uint)puVar33 >> 8);
            bVar5 = bVar6 + bVar4 * '\x06';
            bVar5 = bVar5 + (0x90 < (bVar5 & 0xf0) |
                            CARRY1((byte)uVar13,bVar6) | bVar4 * (0xf9 < bVar5)) * '`';
            pbVar10 = (byte *)CONCAT31(uVar14,bVar5);
            bVar6 = *pbVar10;
            *pbVar10 = *pbVar10 + bVar5;
            *(byte **)pbVar22 = pbVar10 + (uint)CARRY1(bVar6,bVar5) + *(int *)pbVar22;
            out(*(undefined4 *)pbVar29,(short)pbVar22);
            *pbVar10 = *pbVar10 + bVar5;
            bVar5 = bVar5 - 0xe;
            pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),
                                       CONCAT11(cVar24 + *(byte *)((int)puVar34 + 0x3e),
                                                (char)pbVar31));
            *(char *)CONCAT31(uVar14,bVar5) = *(char *)CONCAT31(uVar14,bVar5) + bVar5;
            bVar4 = 9 < (bVar5 & 0xf) | bVar4;
            bVar5 = bVar5 + bVar4 * -6;
            bVar6 = 0x9f < bVar5 | bVar4 * (bVar5 < 6);
            puVar33 = (uint *)CONCAT31(uVar14,bVar5 + bVar6 * -0x60);
            pbVar22[0x5d] = pbVar22[0x5d] + (char)((uint)pbVar22 >> 8) + bVar6;
            *puVar33 = *puVar33 | (uint)puVar33;
            pbVar32 = pbVar29 + (uint)bVar35 * -8 + 4;
            while( true ) {
              bVar35 = ((ushort)pbStack_8 & 0x400) != 0;
              bVar36 = ((ushort)pbStack_8 & 0x10) != 0;
              *(byte *)puVar33 = (char)*puVar33 + (byte)puVar33;
              bVar5 = (byte)pbVar22 | *pbVar32;
              pbVar10 = (byte *)CONCAT31((int3)((uint)pbVar22 >> 8),bVar5);
              cVar24 = (char)pbVar31;
              *pbVar31 = *pbVar31 - cVar24;
              *puVar33 = (uint)(*puVar33 + (int)puVar33);
              uVar14 = (undefined3)((uint)puVar33 >> 8);
              bVar4 = (byte)puVar33 | *pbVar10;
              pbVar29 = pbVar32 + (uint)bVar35 * -8 + 4;
              out(*(undefined4 *)pbVar32,(short)pbVar10);
              *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
              cVar7 = (char)((uint)pbVar31 >> 8);
              *unaff_EBP = *unaff_EBP - cVar7;
              *pbVar10 = *pbVar10 + cVar24;
              bVar6 = bVar4 - 0x17;
              cVar7 = cVar7 + *(byte *)((int)puVar34 + 0x46);
              pbVar31 = (byte *)CONCAT22((short)((uint)pbVar31 >> 0x10),CONCAT11(cVar7,cVar24));
              *(char *)CONCAT31(uVar14,bVar6) = *(char *)CONCAT31(uVar14,bVar6) + bVar6;
              *unaff_EBP = *unaff_EBP - cVar7;
              *pbVar10 = *pbVar10 + cVar24;
              bVar4 = bVar4 - 0x21;
              puVar33 = (uint *)CONCAT31(uVar14,bVar4);
              if (bVar6 < 10) break;
              *puVar33 = *puVar33 | (uint)puVar33;
              *(byte *)puVar33 = (byte)*puVar33 + bVar4;
              pbVar22 = (byte *)CONCAT22((short)((uint)pbVar22 >> 0x10),
                                         CONCAT11((byte)((uint)pbVar22 >> 8) | pbVar10[0x6e],bVar5))
              ;
              bVar4 = bVar4 | (byte)*puVar33;
              *(char *)CONCAT31(uVar14,bVar4) = *(char *)CONCAT31(uVar14,bVar4) + bVar4;
              puVar33 = (uint *)CONCAT31(uVar14,bVar4 | *pbVar22);
              pbVar32 = pbVar29;
            }
          } while( true );
        }
        puVar33 = puVar34;
        if (CARRY1((byte)uVar13,bVar6)) goto code_r0x00404423;
code_r0x00404436:
        pbVar26 = (byte *)CONCAT22((short)((uint)pbVar26 >> 0x10),
                                   CONCAT11((char)((uint)pbVar26 >> 8) + pbVar26[-0x3d],
                                            (char)pbVar26));
      } while( true );
    }
    *pbVar22 = *pbVar22 + (char)pbVar29;
  } while( true );
code_r0x00404271:
  *pcVar9 = *pcVar9 + (char)pcVar9;
  pcVar9 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),(char)pcVar9 + ',');
  unaff_ESI = pcVar11;
  goto code_r0x00404272;
}


