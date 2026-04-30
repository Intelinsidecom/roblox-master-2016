/*
 * Ghidra Decompiled Function
 * ============================================================
 * Address     : 00404508
 * Raw Name    : CompareSettings
 * Demangled   : CompareSettings
 * Prototype   : int CompareSettings(undefined4 compareOptions, uint * param_2)
 * Local Vars  : uVar1, auStack_8, bVar3, uVar2, in_EAX, bVar4, puVar6, pcVar5, cVar8, uVar7, pcVar10, iVar9, bVar12, cVar11, bVar14, puVar13, compareOptions, unaff_EBP, unaff_EBX, pbVar15, unaff_ESI, in_ES, param_2, unaff_EDI, in_AF, bVar16
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

int __fastcall CompareSettings(undefined4 compareOptions,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *in_EAX;
  undefined3 uVar7;
  uint *puVar6;
  char cVar8;
  char cVar11;
  int iVar9;
  char *pcVar10;
  byte bVar12;
  byte bVar14;
  char *unaff_EBX;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar15;
  int unaff_EDI;
  ushort in_ES;
  bool bVar16;
  byte in_AF;
  undefined1 auStack_8 [8];
  char *pcVar5;
  uint *puVar13;
  
                    /* .NET CLR Managed Code */
  iVar9 = CONCAT22((short)((uint)compareOptions >> 0x10),
                   CONCAT11((char)((uint)compareOptions >> 8) + *(char *)(unaff_EDI + 0x3e),
                            (char)compareOptions));
  *in_EAX = *in_EAX + (char)in_EAX;
  do {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    bVar3 = (char)in_EAX - 0xe;
    pcVar5 = (char *)CONCAT31(uVar7,bVar3);
    pcVar10 = (char *)CONCAT22((short)((uint)iVar9 >> 0x10),
                               CONCAT11((char)((uint)iVar9 >> 8) + *(char *)(unaff_EDI + 0x3e),
                                        (char)iVar9));
    *pcVar5 = *pcVar5 + bVar3;
    auStack_8._0_3_ = ZEXT23(in_ES);
    bVar4 = (byte)((uint)in_EAX >> 8);
    bVar16 = bRam182b0000 < bVar4;
    bRam182b0000 = bRam182b0000 - bVar4;
    bVar4 = 9 < (bVar3 & 0xf) | in_AF;
    bVar3 = bVar3 + bVar4 * -6;
    bVar4 = 0x9f < bVar3 | bVar16 | bVar4 * (bVar3 < 6);
    puVar6 = (uint *)CONCAT31(uVar7,bVar3 + bVar4 * -0x60);
    *(byte *)((int)param_2 + 0x5d) =
         *(byte *)((int)param_2 + 0x5d) + (char)((uint)param_2 >> 8) + bVar4;
    *puVar6 = *puVar6 | (uint)puVar6;
    while( true ) {
      bVar16 = (auStack_8._0_3_ & 0x400) != 0;
      uVar1 = auStack_8._0_3_ & 0x10;
      *(byte *)puVar6 = (char)*puVar6 + (byte)puVar6;
      bVar12 = (byte)param_2 | *unaff_ESI;
      puVar13 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar12);
      cVar8 = (char)pcVar10;
      *pcVar10 = *pcVar10 - cVar8;
      *puVar6 = (uint)(*puVar6 + (int)puVar6);
      uVar7 = (undefined3)((uint)puVar6 >> 8);
      bVar3 = (byte)puVar6 | (byte)*puVar13;
      pbVar15 = unaff_ESI + (uint)bVar16 * -8 + 4;
      out(*(undefined4 *)unaff_ESI,(short)puVar13);
      *(char *)CONCAT31(uVar7,bVar3) = *(char *)CONCAT31(uVar7,bVar3) + bVar3;
      auStack_8._1_2_ = in_ES;
      cVar11 = (char)((uint)pcVar10 >> 8);
      *unaff_EBP = *unaff_EBP - cVar11;
      *(byte *)puVar13 = (byte)*puVar13 + cVar8;
      bVar4 = bVar3 - 0x17;
      cVar11 = cVar11 + *(char *)(unaff_EDI + 0x46);
      pcVar10 = (char *)CONCAT22((short)((uint)pcVar10 >> 0x10),CONCAT11(cVar11,cVar8));
      *(char *)CONCAT31(uVar7,bVar4) = *(char *)CONCAT31(uVar7,bVar4) + bVar4;
      *unaff_EBP = *unaff_EBP - cVar11;
      *(byte *)puVar13 = (byte)*puVar13 + cVar8;
      bVar3 = bVar3 - 0x21;
      puVar6 = (uint *)CONCAT31(uVar7,bVar3);
      bVar14 = (byte)((uint)param_2 >> 8);
      if (bVar4 < 10) break;
      *puVar6 = *puVar6 | (uint)puVar6;
      *(byte *)puVar6 = (byte)*puVar6 + bVar3;
      param_2 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                                 CONCAT11(bVar14 | *(byte *)((int)puVar13 + 0x6e),bVar12));
      bVar3 = bVar3 | (byte)*puVar6;
      *(char *)CONCAT31(uVar7,bVar3) = *(char *)CONCAT31(uVar7,bVar3) + bVar3;
      puVar6 = (uint *)CONCAT31(uVar7,bVar3 | (byte)*param_2);
      unaff_ESI = pbVar15;
    }
    *(byte *)puVar6 = (byte)*puVar6 + bVar3;
    iVar9 = CONCAT31((int3)((uint)pcVar10 >> 8),cVar8 + (byte)*puVar6);
    *(char *)(iVar9 + 0x2a060000) = *(char *)(iVar9 + 0x2a060000) - bVar14;
    *unaff_EBX = *unaff_EBX + bVar12;
    *(byte *)puVar13 = (byte)*puVar13 ^ bVar3;
    *(byte *)puVar13 = (byte)*puVar13 + cVar11;
    uVar2 = *puVar6;
    *(byte *)puVar6 = (byte)*puVar6 + bVar3;
    in_AF = 9 < (bVar3 & 0xf) || uVar1 != 0;
    bVar12 = bVar3 + in_AF * '\x06';
    bVar12 = bVar12 + (0x90 < (bVar12 & 0xf0) | CARRY1((byte)uVar2,bVar3) | in_AF * (0xf9 < bVar12))
                      * '`';
    in_EAX = (byte *)CONCAT31(uVar7,bVar12);
    bVar4 = *in_EAX;
    *in_EAX = *in_EAX + bVar12;
    *puVar13 = (uint)(in_EAX + (uint)CARRY1(bVar4,bVar12) + *puVar13);
    unaff_ESI = pbVar15 + (uint)bVar16 * -8 + 4;
    out(*(undefined4 *)pbVar15,(short)puVar13);
    *in_EAX = *in_EAX + bVar12;
    param_2 = puVar13;
  } while( true );
}


