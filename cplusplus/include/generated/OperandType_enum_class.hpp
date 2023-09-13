/* SPDX-FileCopyrightText: © 2022-2023 Decompollaborate */
/* SPDX-License-Identifier: MIT */

/* Automatically generated. DO NOT MODIFY */

#ifndef OperandType_enum_class_hpp_automatic
#define OperandType_enum_class_hpp_automatic

enum class OperandType {
    ALL_INVALID,
    cpu_rs,
    cpu_rt,
    cpu_rd,
    cpu_sa,
    cpu_zero,
    cpu_cop0d,
    cpu_fs,
    cpu_ft,
    cpu_fd,
    cpu_cop1cs,
    cpu_cop2t,
    cpu_cop2cd,
    cpu_op,
    cpu_code,
    cpu_code_lower,
    cpu_copraw,
    cpu_label,
    cpu_immediate,
    cpu_branch_target_label,
    cpu_immediate_base,
    cpu_maybe_rd_rs,
    rsp_rs,
    rsp_rt,
    rsp_rd,
    rsp_cop0d,
    rsp_cop2t,
    rsp_cop2cd,
    rsp_vs,
    rsp_vt,
    rsp_vd,
    rsp_vt_elementhigh,
    rsp_vt_elementlow,
    rsp_vd_de,
    rsp_vs_index,
    rsp_offset_rs,
    rsp_immediate_base,
    rsp_maybe_rd_rs,
    r3000gte_sf,
    r3000gte_mx,
    r3000gte_v,
    r3000gte_cv,
    r3000gte_lm,
    r5900_I,
    r5900_Q,
    r5900_R,
    r5900_ACC,
    r5900_ACCxyzw,
    r5900_vfs,
    r5900_vft,
    r5900_vfd,
    r5900_vfsxyzw,
    r5900_vftxyzw,
    r5900_vfdxyzw,
    r5900_vfsn,
    r5900_vftn,
    r5900_vfdn,
    r5900_vfsl,
    r5900_vftl,
    r5900_vfdl,
    r5900_vfsm,
    r5900_vftm,
    r5900_vfdm,
    r5900_vis,
    r5900_vit,
    r5900_vid,
    r5900_vis_predecr,
    r5900_vit_predecr,
    r5900_vid_predecr,
    r5900_vis_postincr,
    r5900_vit_postincr,
    r5900_vid_postincr,
    r5900_immediate5,
    r5900_immediate15,
    ALL_MAX,
};

#endif
