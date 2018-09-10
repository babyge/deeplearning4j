/*******************************************************************************
 * Copyright (c) 2015-2018 Skymind, Inc.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License, Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 ******************************************************************************/

//
// Created by raver on 6/12/2018.
//

#ifndef LIBND4J_TYPE_BOILERPLATE_H
#define LIBND4J_TYPE_BOILERPLATE_H

#define EXPAND(...) __VA_ARGS__
#define EXTRACT(...) EXTRACT __VA_ARGS__
#define NOTHING_EXTRACT
#define PASTE(x, ...) x ## __VA_ARGS__
#define PASTE2(x, ...) x ## __VA_ARGS__
#define PASTE3(x, ...) x ## __VA_ARGS__
#define EVALUATING_PASTE(x, ...) PASTE(x, __VA_ARGS__)
#define EVALUATING_PASTE2(x, ...) PASTE2(x, __VA_ARGS__)
#define EVALUATING_PASTE3(x, ...) PASTE3(x, __VA_ARGS__)
#define UNPAREN(x) EVALUATING_PASTE(NOTHING_, EXTRACT x)
#define UNPAREN3(x) EVALUATING_PASTE3(NOTHING_, EXTRACT x)
#define EVAL( x ) x
#define EVALX( x ) x
#define EVAL0(...)  EVAL1(EVAL1(EVAL1(__VA_ARGS__)))
#define EVAL1(...) EVAL2(EVAL2(EVAL2(__VA_ARGS__)))
#define EVAL2(...) EVAL3(EVAL3(EVAL3(__VA_ARGS__)))
#define EVAL3(...) EVAL4(EVAL4(EVAL4(__VA_ARGS__)))
#define EVAL4(...) EVAL5(EVAL5(EVAL5(__VA_ARGS__)))
#define EVAL5(...) __VA_ARGS__


#define SEL_T_1(WHAT, NAME, SIGNATURE, TYPE_A) WHAT(NAME, SIGNATURE, TYPE_A)
#define SEL_T_2(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_1(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_3(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_2(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_4(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_3(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_5(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_4(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_6(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_5(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_7(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_6(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_8(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_7(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_9(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_8(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_10(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_9(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_11(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_10(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_12(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_11(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_13(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_12(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_14(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_13(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_15(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_14(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_16(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_15(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_17(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_16(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_18(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_17(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_19(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_18(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define SEL_T_20(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(SEL_T_19(WHAT, NAME, SIGNATURE, __VA_ARGS__))


#define SEL_TT1_1(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)
#define SEL_TT1_2(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_1(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_3(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_2(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_4(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_3(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_5(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_4(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_6(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_5(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_7(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_6(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_8(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_7(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_9(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_8(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_10(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_9(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_11(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_10(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_12(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_11(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_13(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_12(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_14(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_13(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_15(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_14(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_16(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_15(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_17(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_16(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_18(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_17(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_19(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_18(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT1_20(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(YTYPE, NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT1_19(WHAT, YTYPE, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))


#define SEL_TT2_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)
#define SEL_TT2_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_1(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_2(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_3(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_4(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_5(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_6(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_7(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_8(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_9(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_10(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_11(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_12(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_13(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_14(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_15(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_16(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_17(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_18(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define SEL_TT2_20(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(SEL_TT2_19(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))


#define DS_1(WHAT, NAME, SIGNATURE, TYPE_A) WHAT(NAME, SIGNATURE, TYPE_A)
#define DS_2(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_1(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_3(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_2(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_4(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_3(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_5(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_4(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_6(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_5(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_7(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_6(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_8(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_7(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_9(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_8(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_10(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_9(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_11(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_10(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_12(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_11(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_13(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_12(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_14(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_13(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_15(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_14(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_16(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_15(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_17(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_16(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_18(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_17(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_19(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_18(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define DS_20(WHAT, NAME, SIGNATURE, TYPE_A, ...) WHAT(NAME, SIGNATURE, TYPE_A)EVAL(DS_19(WHAT, NAME, SIGNATURE, __VA_ARGS__))


#define DT_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)
#define DT_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_1(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_2(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_3(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_4(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_5(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_6(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_7(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_8(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_9(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_10(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_11(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_12(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_13(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_14(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_15(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_16(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_17(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_18(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT_20(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT_19(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))

#define DT2_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)
#define DT2_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_1(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_2(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_3(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_4(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_5(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_6(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_7(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_8(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_9(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_10(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_11(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_12(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_13(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_14(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_15(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_16(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_17(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_18(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define DT2_20(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B)EVAL(DT2_19(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))

#define TT1_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)
#define TT1_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT1_20(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT1_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))

#define TT2_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)
#define TT2_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT2_20(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT2_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))

#define TT3_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)
#define TT3_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_1(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_2(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_3(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_4(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_5(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_6(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_7(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_8(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_9(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_10(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_11(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_12(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_13(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_14(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_15(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_16(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_17(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_18(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))
#define TT3_20(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C, ...) WHAT(NAME, SIGNATURE, TYPE_A, TYPE_B, TYPE_C)EVAL(TT3_19(WHAT, NAME, SIGNATURE, TYPE_A, TYPE_B, __VA_ARGS__))


#define GET_MACRO_SEL_T(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME
#define GET_MACRO_SEL_TT1(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME
#define GET_MACRO_SEL_TT2(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME
#define GET_MACRO_DS(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME
#define GET_MACRO_DT(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME
#define GET_MACRO_DT2(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME

#define GET_MACRO_TT1(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME
#define GET_MACRO_TT2(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME
#define GET_MACRO_TT3(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, NAME,...) NAME

#define FOR_EACH_S1(WHAT, NAME, SIGNATURE, ...) EXPAND(GET_MACRO_SEL_T(__VA_ARGS__, SEL_T_20, SEL_T_19, SEL_T_18, SEL_T_17, SEL_T_16, SEL_T_15, SEL_T_14, SEL_T_13, SEL_T_12, SEL_T_11, SEL_T_10, SEL_T_9, SEL_T_8, SEL_T_7, SEL_T_6, SEL_T_5, SEL_T_4, SEL_T_3, SEL_T_2, SEL_T_1)(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define FOR_EACH_S2(WHAT, YTYPE, NAME, SIGNATURE, TYPES_A, ...) EXPAND(GET_MACRO_SEL_TT1(__VA_ARGS__, SEL_TT1_20, SEL_TT1_19, SEL_TT1_18, SEL_TT1_17, SEL_TT1_16, SEL_TT1_15, SEL_TT1_14, SEL_TT1_13, SEL_TT1_12, SEL_TT1_11, SEL_TT1_10, SEL_TT1_9, SEL_TT1_8, SEL_TT1_7, SEL_TT1_6, SEL_TT1_5, SEL_TT1_4, SEL_TT1_3, SEL_TT1_2, SEL_TT1_1)(WHAT, YTYPE, NAME, SIGNATURE, TYPES_A, __VA_ARGS__))
#define FOR_EACH_S3(WHAT, NAME, SIGNATURE, TYPE_A, ...) EXPAND(GET_MACRO_SEL_TT2(__VA_ARGS__, SEL_TT2_20, SEL_TT2_19, SEL_TT2_18, SEL_TT2_17, SEL_TT2_16, SEL_TT2_15, SEL_TT2_14, SEL_TT2_13, SEL_TT2_12, SEL_TT2_11, SEL_TT2_10, SEL_TT2_9, SEL_TT2_8, SEL_TT2_7, SEL_TT2_6, SEL_TT2_5, SEL_TT2_4, SEL_TT2_3, SEL_TT2_2, SEL_TT2_1)(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define FOR_EACH_DS(WHAT, NAME, SIGNATURE, ...) EXPAND(GET_MACRO_DS(__VA_ARGS__, DS_20, DS_19, DS_18, DS_17, DS_16, DS_15, DS_14, DS_13, DS_12, DS_11, DS_10, DS_9, DS_8, DS_7, DS_6, DS_5, DS_4, DS_3, DS_2, DS_1)(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define FOR_EACH_DT(WHAT, NAME, SIGNATURE, TYPES_A, ...) EXPAND(GET_MACRO_DT(__VA_ARGS__, DT_20, DT_19, DT_18, DT_17, DT_16, DT_15, DT_14, DT_13, DT_12, DT_11, DT_10, DT_9, DT_8, DT_7, DT_6, DT_5, DT_4, DT_3, DT_2, DT_1)(WHAT, NAME, SIGNATURE, TYPES_A, __VA_ARGS__))
#define FOR_EACH_DT2(WHAT, NAME, SIGNATURE, TYPE_A, ...) EXPAND(GET_MACRO_DT2(__VA_ARGS__, DT2_20, DT2_19, DT2_18, DT2_17, DT2_16, DT2_15, DT2_14, DT2_13, DT2_12, DT2_11, DT2_10, DT2_9, DT2_8, DT2_7, DT2_6, DT2_5, DT2_4, DT2_3, DT2_2, DT2_1)(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))

#define FOR_EACH_TT1(WHAT, NAME, SIGNATURE, TYPES_X, TYPES_Y, ...) EXPAND(GET_MACRO_TT1(__VA_ARGS__, TT1_20, TT1_19, TT1_18, TT1_17, TT1_16, TT1_15, TT1_14, TT1_13, TT1_12, TT1_11, TT1_10, TT1_9, TT1_8, TT1_7, TT1_6, TT1_5, TT1_4, TT1_3, TT1_2, TT1_1)(WHAT, NAME, SIGNATURE, TYPES_X, TYPES_Y, __VA_ARGS__))
#define FOR_EACH_TT2(WHAT, NAME, SIGNATURE, TYPE_Z, TYPES_X,  ...) EXPAND(GET_MACRO_TT2(__VA_ARGS__, TT2_20, TT2_19, TT2_18, TT2_17, TT2_16, TT2_15, TT2_14, TT2_13, TT2_12, TT2_11, TT2_10, TT2_9, TT2_8, TT2_7, TT2_6, TT2_5, TT2_4, TT2_3, TT2_2, TT2_1)(WHAT, NAME, SIGNATURE, TYPE_Z, TYPES_X, __VA_ARGS__))
#define FOR_EACH_TT3(WHAT, NAME, SIGNATURE, TYPE_Z, TYPE_Y, ...) EXPAND(GET_MACRO_TT3(__VA_ARGS__, TT3_20, TT3_19, TT3_18, TT3_17, TT3_16, TT3_15, TT3_14, TT3_13, TT3_12, TT3_11, TT3_10, TT3_9, TT3_8, TT3_7, TT3_6, TT3_5, TT3_4, TT3_3, TT3_2, TT3_1)(WHAT, NAME, SIGNATURE, TYPE_Z, TYPE_Y, __VA_ARGS__))

#define _EXEC_SELECTOR_T(WHAT, NAME, SIGNATURE, ...) EVAL(FOR_EACH_S1(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define _EXEC_SELECTOR_TT_1(WHAT, YTYPE, NAME, SIGNATURE, TYPES_A, ...) EVAL(FOR_EACH_S2(WHAT, YTYPE, NAME, SIGNATURE, TYPES_A, __VA_ARGS__))
#define _EXEC_SELECTOR_TT_2(WHAT, NAME, SIGNATURE, TYPE_A, ...) EVAL(FOR_EACH_S3(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))
#define _EXEC_SINGLE_T(WHAT, NAME, SIGNATURE, ...) EVAL(FOR_EACH_DS(WHAT, NAME, SIGNATURE, __VA_ARGS__))
#define _EXEC_DOUBLE_T(WHAT, NAME, SIGNATURE, TYPES_A, ...) EVAL(FOR_EACH_DT(WHAT, NAME, SIGNATURE, LIST(TYPES_A), __VA_ARGS__))
#define _EXEC_DOUBLE_T2(WHAT, NAME, SIGNATURE, TYPE_A, ...) EVAL(FOR_EACH_DT2(WHAT, NAME, SIGNATURE, TYPE_A, __VA_ARGS__))

#define _EXEC_TRIPLE_T3(WHAT, NAME, SIGNATURE, TYPE_Z, TYPE_Y, ...) EVAL(FOR_EACH_TT3(WHAT, NAME, SIGNATURE, TYPE_Z, TYPE_Y, __VA_ARGS__))
#define _EXEC_TRIPLE_T2(WHAT, NAME, SIGNATURE, TYPE_Z, TYPES_X, ...) EVAL(FOR_EACH_TT2(WHAT, NAME, SIGNATURE, TYPE_Z, LIST(TYPES_X), __VA_ARGS__))
#define _EXEC_TRIPLE_T1(WHAT, NAME, SIGNATURE, TYPES_X, TYPES_Y, ...) EVAL(FOR_EACH_TT1(WHAT, NAME, SIGNATURE, LIST(TYPES_X), LIST(TYPES_Y), __VA_ARGS__))

#define DISPATCH_DTYPES(NAME, SIGNATURE, TYPE, TYPES_B) EVAL(_EXEC_DOUBLE_T2(RANDOMDOUBLE2, NAME, SIGNATURE, TYPE, TYPES_B))
#define DISPATCH_DTYPES2(NAME, SIGNATURE, TYPE, ...) EVAL(_EXEC_SELECTOR_TT_2(SELECTOR_DOUBLE_2, NAME, SIGNATURE, TYPE, __VA_ARGS__))


#ifndef __CLION_IDE__
#define BUILD_SINGLE_TEMPLATE(NAME, SIGNATURE, TYPES) EVAL(_EXEC_SINGLE_T(RANDOMSINGLE, NAME, (SIGNATURE), TYPES))
#define BUILD_DOUBLE_TEMPLATE(NAME, SIGNATURE, TYPES_A, TYPES_B) EVAL(_EXEC_DOUBLE_T(RANDOMDOUBLE, NAME, (SIGNATURE), (TYPES_A), TYPES_B))
#define BUILD_SINGLE_SELECTOR(XTYPE, NAME, SIGNATURE, TYPES) switch(XTYPE) { EVAL(_EXEC_SELECTOR_T(SELECTOR_SINGLE, NAME, SIGNATURE, TYPES)); default: {printf("[ERROR] Unknown dtypeX=%d on %s:%d", XTYPE, __FILE__, __LINE__); }}
#define BUILD_SINGLE_PARTIAL_SELECTOR(XTYPE, NAME, SIGNATURE, TYPES) switch(XTYPE) { EVAL(_EXEC_SELECTOR_T(SELECTOR_PARTIAL_SINGLE, NAME, SIGNATURE, TYPES)); default: {printf("[ERROR] Unknown dtypeX=%d on %s:%d", XTYPE, __FILE__, __LINE__); }}
#define BUILD_DOUBLE_SELECTOR(XTYPE, YTYPE, NAME, SIGNATURE, TYPES_A, TYPES_B) switch(XTYPE) { EVAL(_EXEC_SELECTOR_TT_1(SELECTOR_DOUBLE, YTYPE, NAME, (SIGNATURE), (TYPES_A), TYPES_B)); default: {printf("[ERROR] Unknown dtypeX=%d on %s:%d", XTYPE, __FILE__, __LINE__); }}
#define BUILD_TRIPLE_SELECTOR(XTYPE, YTYPE, ZTYPE, SIGNATURE, TYPES_X, TYPES_Y, TYPES_Z)
#define BUILD_TRIPLE_TEMPLATE(NAME, SIGNATURE, TYPES_X, TYPES_Y, TYPES_Z) EVAL(_EXEC_TRIPLE_T1(RANDOMTRIPLE, NAME, (SIGNATURE), (TYPES_X), (TYPES_Y), TYPES_Z))
#else
#define BUILD_SINGLE_TEMPLATE(NAME, SIGNATURE, TYPES)
#define BUILD_DOUBLE_TEMPLATE(NAME, SIGNATURE, TYPES_A, TYPES_B)
#define BUILD_SINGLE_SELECTOR(XTYPE, NAME, SIGNATURE, TYPES)
#define BUILD_SINGLE_PARTIAL_SELECTOR(XTYPE, NAME, SIGNATURE, TYPES)
#define BUILD_DOUBLE_SELECTOR(XTYPE, YTYPE, NAME, SIGNATURE, TYPES_A, TYPES_B)
#define BUILD_TRIPLE_SELECTOR(XTYPE, YTYPE, ZTYPE, SIGNATURE, TYPES_X, TYPES_Y, TYPES_Z)
#define BUILD_TRIPLE_TEMPLATE(NAME, SIGNATURE, TYPES_X, TYPES_Y, TYPES_Z)
#endif

#define LIST(...) __VA_ARGS__

#define _SELECTOR_DOUBLE_2(NAME, SIGNATURE, TYPE_A, ENUM, TYPE_B) case ENUM: { NAME<TYPE_A, TYPE_B> SIGNATURE; break; };
#define SELECTOR_DOUBLE_2(NAME, SIGNATURE, TYPE_A, TYPE_B) EVALUATING_PASTE2(_SELECT, OR_DOUBLE_2(NAME, UNPAREN3(SIGNATURE), TYPE_A, UNPAREN3(TYPE_B)))

#define _SELECTOR_DOUBLE(YTYPE, NAME, SIGNATURE, ENUM, TYPE_A, ...) case ENUM: { switch(YTYPE) { EXPAND(DISPATCH_DTYPES2(NAME, SIGNATURE, TYPE_A, __VA_ARGS__)); default: {printf("[ERROR] Unknown dtypeX=%d on %s:%d", YTYPE, __FILE__, __LINE__); }}; break; };
#define SELECTOR_DOUBLE(YTYPE, NAME, SIGNATURE, TYPES_B, TYPE_A)  EVALUATING_PASTE(_SELECTOR, _DOUBLE(YTYPE, NAME, SIGNATURE, UNPAREN(TYPE_A), UNPAREN(TYPES_B)))

#define _SELECTOR_SINGLE(A, B, C, D) case C: {A<D>B; break;};
#define SELECTOR_SINGLE(A, B, C) EVALUATING_PASTE(_SEL, ECTOR_SINGLE(A, B, UNPAREN(C)))

#define _SELECTOR_PARTIAL_SINGLE(A, B, C, D) case C: {A D, B; break;};
#define SELECTOR_PARTIAL_SINGLE(A, B, C) EVALUATING_PASTE(_SEL, ECTOR_PARTIAL_SINGLE(A, B, UNPAREN(C)))

#define _RANDOMSINGLE(A, B, C, D) A<D>B;
#define RANDOMSINGLE(A, B, C) EVALUATING_PASTE(_RAND, OMSINGLE(A, UNPAREN(B), UNPAREN(C)))
#define RANDOMDOUBLE(A, B, C, D) EXPAND(DISPATCH_DTYPES(A, UNPAREN(B), D, UNPAREN(C)))
#define _RANDOMDOUBLE2(A, B, C, D, E, F) A<D,F>B;
#define RANDOMDOUBLE2(A, B, C, D) EVALUATING_PASTE(_RAND, OMDOUBLE2(A, B, UNPAREN(C), UNPAREN(D)))

#define _RANDOMTRIPLE3(A, B, ZN, ZT, YN, YT, XN, XT) A<XT, YT, ZT>B;
#define RANDOMTRIPLE3(A, B, Z, Y, X) EVALUATING_PASTE(_RANDOM, TRIPLE3(A, B, UNPAREN(Z), UNPAREN(Y), UNPAREN(X)))

#define _RANDOMTRIPLE2(NAME, SIGNATURE, TYPE_Z, TYPE_Y, TYPES_X)  EVALX(_EXEC_TRIPLE_T3(RANDOMTRIPLE3, NAME, SIGNATURE, TYPE_Z, TYPE_Y, UNPAREN(TYPES_X)))
#define RANDOMTRIPLE2(NAME, SIGNATURE, TYPE_Z, TYPES_X, TYPE_Y) _RANDOMTRIPLE2(NAME, SIGNATURE, TYPE_Z, TYPE_Y, TYPES_X)
#define _RANDOMTRIPLE(NAME, SIGNATURE, TYPE_Z, TYPES_X, TYPES_Y) EVAL(_EXEC_TRIPLE_T2(RANDOMTRIPLE2, NAME, SIGNATURE, TYPE_Z, TYPES_X, UNPAREN(TYPES_Y)))
#define RANDOMTRIPLE(NAME, SIGNATURE, TYPES_X, TYPES_Y, TYPE_Z)  _RANDOMTRIPLE(NAME, SIGNATURE, TYPE_Z, TYPES_X, TYPES_Y)


#define BROADCAST(NAME) nd4j::BroadcastOpsTuple::CUSTOM(nd4j::scalar::NAME, nd4j::pairwise::NAME, nd4j::broadcast::NAME)

#endif //TESTS_CPU_TYPE_BOILERPLATE_H