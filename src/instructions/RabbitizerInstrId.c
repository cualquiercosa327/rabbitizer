/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#include "instructions/RabbitizerInstrId.h"

#include "instructions/RabbitizerInstr.h"


#define RABBITIZER_DEF_INSTR_ID(prefix, name, ...) \
    [RABBITIZER_INSTR_##prefix##_##name] = #name

#define RABBITIZER_DEF_INSTR_ID_ALTNAME(prefix, name, altname, ...) \
    [RABBITIZER_INSTR_##prefix##_##name] = #altname



const char *RabbitizerInstrId_Names[] = {
    #include "instructions/RabbitizerInstrId_cpu.inc"

    // RSP instructions
    RABBITIZER_DEF_INSTR_ID(RSP_ID, INVALID, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmulf, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmulu, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrndp, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmulq, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmudl, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmudm, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmudn, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmudh, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmacf, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmacu, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrndn, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmacq, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmadl, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmadm, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmadn, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmadh, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vadd, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vsub, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vabs, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vaddc, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vsubc, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vsar, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vand, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vnand, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vor, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vnor, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vxor, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vnxor, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, vlt, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, veq, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vne, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vge, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vcl, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vch, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vcr, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmrg, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrcp, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrcpl, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrcph, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vmov, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrsq, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrsql, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vrsqh, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, vnop, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, mfc2, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, mtc2, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, cfc2, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, ctc2, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, sbv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, ssv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, slv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, sdv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, sqv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, srv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, spv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, suv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, swv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, shv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, sfv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, stv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, lbv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, lsv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, llv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, ldv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, lqv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, lrv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, lpv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, luv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, lhv, ),

    RABBITIZER_DEF_INSTR_ID(RSP_ID, lfv, ),
    RABBITIZER_DEF_INSTR_ID(RSP_ID, ltv, ),
};


const char *RabbitizerInstr_GetOpcodeName(const RabbitizerInstr *self) {
    return RabbitizerInstrId_Names[self->uniqueId.cpuId];
}
