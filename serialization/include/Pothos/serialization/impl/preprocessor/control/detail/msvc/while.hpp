# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef POTHOS_PREPROCESSOR_CONTROL_DETAIL_MSVC_WHILE_HPP
# define POTHOS_PREPROCESSOR_CONTROL_DETAIL_MSVC_WHILE_HPP
#
# include <Pothos/serialization/impl/preprocessor/control/if.hpp>
# include <Pothos/serialization/impl/preprocessor/tuple/eat.hpp>
#
# define POTHOS_PP_WHILE_1(p, o, s) POTHOS_PP_IF(p(2, s), POTHOS_PP_WHILE_2, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(2, s))
# define POTHOS_PP_WHILE_2(p, o, s) POTHOS_PP_IF(p(3, s), POTHOS_PP_WHILE_3, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(3, s))
# define POTHOS_PP_WHILE_3(p, o, s) POTHOS_PP_IF(p(4, s), POTHOS_PP_WHILE_4, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(4, s))
# define POTHOS_PP_WHILE_4(p, o, s) POTHOS_PP_IF(p(5, s), POTHOS_PP_WHILE_5, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(5, s))
# define POTHOS_PP_WHILE_5(p, o, s) POTHOS_PP_IF(p(6, s), POTHOS_PP_WHILE_6, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(6, s))
# define POTHOS_PP_WHILE_6(p, o, s) POTHOS_PP_IF(p(7, s), POTHOS_PP_WHILE_7, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(7, s))
# define POTHOS_PP_WHILE_7(p, o, s) POTHOS_PP_IF(p(8, s), POTHOS_PP_WHILE_8, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(8, s))
# define POTHOS_PP_WHILE_8(p, o, s) POTHOS_PP_IF(p(9, s), POTHOS_PP_WHILE_9, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(9, s))
# define POTHOS_PP_WHILE_9(p, o, s) POTHOS_PP_IF(p(10, s), POTHOS_PP_WHILE_10, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(10, s))
# define POTHOS_PP_WHILE_10(p, o, s) POTHOS_PP_IF(p(11, s), POTHOS_PP_WHILE_11, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(11, s))
# define POTHOS_PP_WHILE_11(p, o, s) POTHOS_PP_IF(p(12, s), POTHOS_PP_WHILE_12, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(12, s))
# define POTHOS_PP_WHILE_12(p, o, s) POTHOS_PP_IF(p(13, s), POTHOS_PP_WHILE_13, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(13, s))
# define POTHOS_PP_WHILE_13(p, o, s) POTHOS_PP_IF(p(14, s), POTHOS_PP_WHILE_14, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(14, s))
# define POTHOS_PP_WHILE_14(p, o, s) POTHOS_PP_IF(p(15, s), POTHOS_PP_WHILE_15, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(15, s))
# define POTHOS_PP_WHILE_15(p, o, s) POTHOS_PP_IF(p(16, s), POTHOS_PP_WHILE_16, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(16, s))
# define POTHOS_PP_WHILE_16(p, o, s) POTHOS_PP_IF(p(17, s), POTHOS_PP_WHILE_17, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(17, s))
# define POTHOS_PP_WHILE_17(p, o, s) POTHOS_PP_IF(p(18, s), POTHOS_PP_WHILE_18, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(18, s))
# define POTHOS_PP_WHILE_18(p, o, s) POTHOS_PP_IF(p(19, s), POTHOS_PP_WHILE_19, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(19, s))
# define POTHOS_PP_WHILE_19(p, o, s) POTHOS_PP_IF(p(20, s), POTHOS_PP_WHILE_20, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(20, s))
# define POTHOS_PP_WHILE_20(p, o, s) POTHOS_PP_IF(p(21, s), POTHOS_PP_WHILE_21, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(21, s))
# define POTHOS_PP_WHILE_21(p, o, s) POTHOS_PP_IF(p(22, s), POTHOS_PP_WHILE_22, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(22, s))
# define POTHOS_PP_WHILE_22(p, o, s) POTHOS_PP_IF(p(23, s), POTHOS_PP_WHILE_23, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(23, s))
# define POTHOS_PP_WHILE_23(p, o, s) POTHOS_PP_IF(p(24, s), POTHOS_PP_WHILE_24, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(24, s))
# define POTHOS_PP_WHILE_24(p, o, s) POTHOS_PP_IF(p(25, s), POTHOS_PP_WHILE_25, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(25, s))
# define POTHOS_PP_WHILE_25(p, o, s) POTHOS_PP_IF(p(26, s), POTHOS_PP_WHILE_26, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(26, s))
# define POTHOS_PP_WHILE_26(p, o, s) POTHOS_PP_IF(p(27, s), POTHOS_PP_WHILE_27, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(27, s))
# define POTHOS_PP_WHILE_27(p, o, s) POTHOS_PP_IF(p(28, s), POTHOS_PP_WHILE_28, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(28, s))
# define POTHOS_PP_WHILE_28(p, o, s) POTHOS_PP_IF(p(29, s), POTHOS_PP_WHILE_29, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(29, s))
# define POTHOS_PP_WHILE_29(p, o, s) POTHOS_PP_IF(p(30, s), POTHOS_PP_WHILE_30, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(30, s))
# define POTHOS_PP_WHILE_30(p, o, s) POTHOS_PP_IF(p(31, s), POTHOS_PP_WHILE_31, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(31, s))
# define POTHOS_PP_WHILE_31(p, o, s) POTHOS_PP_IF(p(32, s), POTHOS_PP_WHILE_32, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(32, s))
# define POTHOS_PP_WHILE_32(p, o, s) POTHOS_PP_IF(p(33, s), POTHOS_PP_WHILE_33, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(33, s))
# define POTHOS_PP_WHILE_33(p, o, s) POTHOS_PP_IF(p(34, s), POTHOS_PP_WHILE_34, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(34, s))
# define POTHOS_PP_WHILE_34(p, o, s) POTHOS_PP_IF(p(35, s), POTHOS_PP_WHILE_35, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(35, s))
# define POTHOS_PP_WHILE_35(p, o, s) POTHOS_PP_IF(p(36, s), POTHOS_PP_WHILE_36, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(36, s))
# define POTHOS_PP_WHILE_36(p, o, s) POTHOS_PP_IF(p(37, s), POTHOS_PP_WHILE_37, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(37, s))
# define POTHOS_PP_WHILE_37(p, o, s) POTHOS_PP_IF(p(38, s), POTHOS_PP_WHILE_38, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(38, s))
# define POTHOS_PP_WHILE_38(p, o, s) POTHOS_PP_IF(p(39, s), POTHOS_PP_WHILE_39, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(39, s))
# define POTHOS_PP_WHILE_39(p, o, s) POTHOS_PP_IF(p(40, s), POTHOS_PP_WHILE_40, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(40, s))
# define POTHOS_PP_WHILE_40(p, o, s) POTHOS_PP_IF(p(41, s), POTHOS_PP_WHILE_41, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(41, s))
# define POTHOS_PP_WHILE_41(p, o, s) POTHOS_PP_IF(p(42, s), POTHOS_PP_WHILE_42, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(42, s))
# define POTHOS_PP_WHILE_42(p, o, s) POTHOS_PP_IF(p(43, s), POTHOS_PP_WHILE_43, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(43, s))
# define POTHOS_PP_WHILE_43(p, o, s) POTHOS_PP_IF(p(44, s), POTHOS_PP_WHILE_44, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(44, s))
# define POTHOS_PP_WHILE_44(p, o, s) POTHOS_PP_IF(p(45, s), POTHOS_PP_WHILE_45, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(45, s))
# define POTHOS_PP_WHILE_45(p, o, s) POTHOS_PP_IF(p(46, s), POTHOS_PP_WHILE_46, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(46, s))
# define POTHOS_PP_WHILE_46(p, o, s) POTHOS_PP_IF(p(47, s), POTHOS_PP_WHILE_47, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(47, s))
# define POTHOS_PP_WHILE_47(p, o, s) POTHOS_PP_IF(p(48, s), POTHOS_PP_WHILE_48, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(48, s))
# define POTHOS_PP_WHILE_48(p, o, s) POTHOS_PP_IF(p(49, s), POTHOS_PP_WHILE_49, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(49, s))
# define POTHOS_PP_WHILE_49(p, o, s) POTHOS_PP_IF(p(50, s), POTHOS_PP_WHILE_50, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(50, s))
# define POTHOS_PP_WHILE_50(p, o, s) POTHOS_PP_IF(p(51, s), POTHOS_PP_WHILE_51, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(51, s))
# define POTHOS_PP_WHILE_51(p, o, s) POTHOS_PP_IF(p(52, s), POTHOS_PP_WHILE_52, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(52, s))
# define POTHOS_PP_WHILE_52(p, o, s) POTHOS_PP_IF(p(53, s), POTHOS_PP_WHILE_53, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(53, s))
# define POTHOS_PP_WHILE_53(p, o, s) POTHOS_PP_IF(p(54, s), POTHOS_PP_WHILE_54, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(54, s))
# define POTHOS_PP_WHILE_54(p, o, s) POTHOS_PP_IF(p(55, s), POTHOS_PP_WHILE_55, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(55, s))
# define POTHOS_PP_WHILE_55(p, o, s) POTHOS_PP_IF(p(56, s), POTHOS_PP_WHILE_56, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(56, s))
# define POTHOS_PP_WHILE_56(p, o, s) POTHOS_PP_IF(p(57, s), POTHOS_PP_WHILE_57, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(57, s))
# define POTHOS_PP_WHILE_57(p, o, s) POTHOS_PP_IF(p(58, s), POTHOS_PP_WHILE_58, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(58, s))
# define POTHOS_PP_WHILE_58(p, o, s) POTHOS_PP_IF(p(59, s), POTHOS_PP_WHILE_59, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(59, s))
# define POTHOS_PP_WHILE_59(p, o, s) POTHOS_PP_IF(p(60, s), POTHOS_PP_WHILE_60, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(60, s))
# define POTHOS_PP_WHILE_60(p, o, s) POTHOS_PP_IF(p(61, s), POTHOS_PP_WHILE_61, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(61, s))
# define POTHOS_PP_WHILE_61(p, o, s) POTHOS_PP_IF(p(62, s), POTHOS_PP_WHILE_62, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(62, s))
# define POTHOS_PP_WHILE_62(p, o, s) POTHOS_PP_IF(p(63, s), POTHOS_PP_WHILE_63, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(63, s))
# define POTHOS_PP_WHILE_63(p, o, s) POTHOS_PP_IF(p(64, s), POTHOS_PP_WHILE_64, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(64, s))
# define POTHOS_PP_WHILE_64(p, o, s) POTHOS_PP_IF(p(65, s), POTHOS_PP_WHILE_65, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(65, s))
# define POTHOS_PP_WHILE_65(p, o, s) POTHOS_PP_IF(p(66, s), POTHOS_PP_WHILE_66, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(66, s))
# define POTHOS_PP_WHILE_66(p, o, s) POTHOS_PP_IF(p(67, s), POTHOS_PP_WHILE_67, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(67, s))
# define POTHOS_PP_WHILE_67(p, o, s) POTHOS_PP_IF(p(68, s), POTHOS_PP_WHILE_68, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(68, s))
# define POTHOS_PP_WHILE_68(p, o, s) POTHOS_PP_IF(p(69, s), POTHOS_PP_WHILE_69, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(69, s))
# define POTHOS_PP_WHILE_69(p, o, s) POTHOS_PP_IF(p(70, s), POTHOS_PP_WHILE_70, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(70, s))
# define POTHOS_PP_WHILE_70(p, o, s) POTHOS_PP_IF(p(71, s), POTHOS_PP_WHILE_71, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(71, s))
# define POTHOS_PP_WHILE_71(p, o, s) POTHOS_PP_IF(p(72, s), POTHOS_PP_WHILE_72, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(72, s))
# define POTHOS_PP_WHILE_72(p, o, s) POTHOS_PP_IF(p(73, s), POTHOS_PP_WHILE_73, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(73, s))
# define POTHOS_PP_WHILE_73(p, o, s) POTHOS_PP_IF(p(74, s), POTHOS_PP_WHILE_74, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(74, s))
# define POTHOS_PP_WHILE_74(p, o, s) POTHOS_PP_IF(p(75, s), POTHOS_PP_WHILE_75, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(75, s))
# define POTHOS_PP_WHILE_75(p, o, s) POTHOS_PP_IF(p(76, s), POTHOS_PP_WHILE_76, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(76, s))
# define POTHOS_PP_WHILE_76(p, o, s) POTHOS_PP_IF(p(77, s), POTHOS_PP_WHILE_77, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(77, s))
# define POTHOS_PP_WHILE_77(p, o, s) POTHOS_PP_IF(p(78, s), POTHOS_PP_WHILE_78, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(78, s))
# define POTHOS_PP_WHILE_78(p, o, s) POTHOS_PP_IF(p(79, s), POTHOS_PP_WHILE_79, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(79, s))
# define POTHOS_PP_WHILE_79(p, o, s) POTHOS_PP_IF(p(80, s), POTHOS_PP_WHILE_80, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(80, s))
# define POTHOS_PP_WHILE_80(p, o, s) POTHOS_PP_IF(p(81, s), POTHOS_PP_WHILE_81, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(81, s))
# define POTHOS_PP_WHILE_81(p, o, s) POTHOS_PP_IF(p(82, s), POTHOS_PP_WHILE_82, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(82, s))
# define POTHOS_PP_WHILE_82(p, o, s) POTHOS_PP_IF(p(83, s), POTHOS_PP_WHILE_83, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(83, s))
# define POTHOS_PP_WHILE_83(p, o, s) POTHOS_PP_IF(p(84, s), POTHOS_PP_WHILE_84, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(84, s))
# define POTHOS_PP_WHILE_84(p, o, s) POTHOS_PP_IF(p(85, s), POTHOS_PP_WHILE_85, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(85, s))
# define POTHOS_PP_WHILE_85(p, o, s) POTHOS_PP_IF(p(86, s), POTHOS_PP_WHILE_86, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(86, s))
# define POTHOS_PP_WHILE_86(p, o, s) POTHOS_PP_IF(p(87, s), POTHOS_PP_WHILE_87, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(87, s))
# define POTHOS_PP_WHILE_87(p, o, s) POTHOS_PP_IF(p(88, s), POTHOS_PP_WHILE_88, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(88, s))
# define POTHOS_PP_WHILE_88(p, o, s) POTHOS_PP_IF(p(89, s), POTHOS_PP_WHILE_89, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(89, s))
# define POTHOS_PP_WHILE_89(p, o, s) POTHOS_PP_IF(p(90, s), POTHOS_PP_WHILE_90, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(90, s))
# define POTHOS_PP_WHILE_90(p, o, s) POTHOS_PP_IF(p(91, s), POTHOS_PP_WHILE_91, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(91, s))
# define POTHOS_PP_WHILE_91(p, o, s) POTHOS_PP_IF(p(92, s), POTHOS_PP_WHILE_92, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(92, s))
# define POTHOS_PP_WHILE_92(p, o, s) POTHOS_PP_IF(p(93, s), POTHOS_PP_WHILE_93, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(93, s))
# define POTHOS_PP_WHILE_93(p, o, s) POTHOS_PP_IF(p(94, s), POTHOS_PP_WHILE_94, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(94, s))
# define POTHOS_PP_WHILE_94(p, o, s) POTHOS_PP_IF(p(95, s), POTHOS_PP_WHILE_95, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(95, s))
# define POTHOS_PP_WHILE_95(p, o, s) POTHOS_PP_IF(p(96, s), POTHOS_PP_WHILE_96, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(96, s))
# define POTHOS_PP_WHILE_96(p, o, s) POTHOS_PP_IF(p(97, s), POTHOS_PP_WHILE_97, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(97, s))
# define POTHOS_PP_WHILE_97(p, o, s) POTHOS_PP_IF(p(98, s), POTHOS_PP_WHILE_98, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(98, s))
# define POTHOS_PP_WHILE_98(p, o, s) POTHOS_PP_IF(p(99, s), POTHOS_PP_WHILE_99, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(99, s))
# define POTHOS_PP_WHILE_99(p, o, s) POTHOS_PP_IF(p(100, s), POTHOS_PP_WHILE_100, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(100, s))
# define POTHOS_PP_WHILE_100(p, o, s) POTHOS_PP_IF(p(101, s), POTHOS_PP_WHILE_101, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(101, s))
# define POTHOS_PP_WHILE_101(p, o, s) POTHOS_PP_IF(p(102, s), POTHOS_PP_WHILE_102, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(102, s))
# define POTHOS_PP_WHILE_102(p, o, s) POTHOS_PP_IF(p(103, s), POTHOS_PP_WHILE_103, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(103, s))
# define POTHOS_PP_WHILE_103(p, o, s) POTHOS_PP_IF(p(104, s), POTHOS_PP_WHILE_104, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(104, s))
# define POTHOS_PP_WHILE_104(p, o, s) POTHOS_PP_IF(p(105, s), POTHOS_PP_WHILE_105, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(105, s))
# define POTHOS_PP_WHILE_105(p, o, s) POTHOS_PP_IF(p(106, s), POTHOS_PP_WHILE_106, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(106, s))
# define POTHOS_PP_WHILE_106(p, o, s) POTHOS_PP_IF(p(107, s), POTHOS_PP_WHILE_107, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(107, s))
# define POTHOS_PP_WHILE_107(p, o, s) POTHOS_PP_IF(p(108, s), POTHOS_PP_WHILE_108, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(108, s))
# define POTHOS_PP_WHILE_108(p, o, s) POTHOS_PP_IF(p(109, s), POTHOS_PP_WHILE_109, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(109, s))
# define POTHOS_PP_WHILE_109(p, o, s) POTHOS_PP_IF(p(110, s), POTHOS_PP_WHILE_110, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(110, s))
# define POTHOS_PP_WHILE_110(p, o, s) POTHOS_PP_IF(p(111, s), POTHOS_PP_WHILE_111, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(111, s))
# define POTHOS_PP_WHILE_111(p, o, s) POTHOS_PP_IF(p(112, s), POTHOS_PP_WHILE_112, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(112, s))
# define POTHOS_PP_WHILE_112(p, o, s) POTHOS_PP_IF(p(113, s), POTHOS_PP_WHILE_113, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(113, s))
# define POTHOS_PP_WHILE_113(p, o, s) POTHOS_PP_IF(p(114, s), POTHOS_PP_WHILE_114, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(114, s))
# define POTHOS_PP_WHILE_114(p, o, s) POTHOS_PP_IF(p(115, s), POTHOS_PP_WHILE_115, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(115, s))
# define POTHOS_PP_WHILE_115(p, o, s) POTHOS_PP_IF(p(116, s), POTHOS_PP_WHILE_116, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(116, s))
# define POTHOS_PP_WHILE_116(p, o, s) POTHOS_PP_IF(p(117, s), POTHOS_PP_WHILE_117, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(117, s))
# define POTHOS_PP_WHILE_117(p, o, s) POTHOS_PP_IF(p(118, s), POTHOS_PP_WHILE_118, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(118, s))
# define POTHOS_PP_WHILE_118(p, o, s) POTHOS_PP_IF(p(119, s), POTHOS_PP_WHILE_119, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(119, s))
# define POTHOS_PP_WHILE_119(p, o, s) POTHOS_PP_IF(p(120, s), POTHOS_PP_WHILE_120, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(120, s))
# define POTHOS_PP_WHILE_120(p, o, s) POTHOS_PP_IF(p(121, s), POTHOS_PP_WHILE_121, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(121, s))
# define POTHOS_PP_WHILE_121(p, o, s) POTHOS_PP_IF(p(122, s), POTHOS_PP_WHILE_122, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(122, s))
# define POTHOS_PP_WHILE_122(p, o, s) POTHOS_PP_IF(p(123, s), POTHOS_PP_WHILE_123, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(123, s))
# define POTHOS_PP_WHILE_123(p, o, s) POTHOS_PP_IF(p(124, s), POTHOS_PP_WHILE_124, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(124, s))
# define POTHOS_PP_WHILE_124(p, o, s) POTHOS_PP_IF(p(125, s), POTHOS_PP_WHILE_125, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(125, s))
# define POTHOS_PP_WHILE_125(p, o, s) POTHOS_PP_IF(p(126, s), POTHOS_PP_WHILE_126, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(126, s))
# define POTHOS_PP_WHILE_126(p, o, s) POTHOS_PP_IF(p(127, s), POTHOS_PP_WHILE_127, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(127, s))
# define POTHOS_PP_WHILE_127(p, o, s) POTHOS_PP_IF(p(128, s), POTHOS_PP_WHILE_128, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(128, s))
# define POTHOS_PP_WHILE_128(p, o, s) POTHOS_PP_IF(p(129, s), POTHOS_PP_WHILE_129, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(129, s))
# define POTHOS_PP_WHILE_129(p, o, s) POTHOS_PP_IF(p(130, s), POTHOS_PP_WHILE_130, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(130, s))
# define POTHOS_PP_WHILE_130(p, o, s) POTHOS_PP_IF(p(131, s), POTHOS_PP_WHILE_131, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(131, s))
# define POTHOS_PP_WHILE_131(p, o, s) POTHOS_PP_IF(p(132, s), POTHOS_PP_WHILE_132, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(132, s))
# define POTHOS_PP_WHILE_132(p, o, s) POTHOS_PP_IF(p(133, s), POTHOS_PP_WHILE_133, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(133, s))
# define POTHOS_PP_WHILE_133(p, o, s) POTHOS_PP_IF(p(134, s), POTHOS_PP_WHILE_134, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(134, s))
# define POTHOS_PP_WHILE_134(p, o, s) POTHOS_PP_IF(p(135, s), POTHOS_PP_WHILE_135, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(135, s))
# define POTHOS_PP_WHILE_135(p, o, s) POTHOS_PP_IF(p(136, s), POTHOS_PP_WHILE_136, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(136, s))
# define POTHOS_PP_WHILE_136(p, o, s) POTHOS_PP_IF(p(137, s), POTHOS_PP_WHILE_137, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(137, s))
# define POTHOS_PP_WHILE_137(p, o, s) POTHOS_PP_IF(p(138, s), POTHOS_PP_WHILE_138, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(138, s))
# define POTHOS_PP_WHILE_138(p, o, s) POTHOS_PP_IF(p(139, s), POTHOS_PP_WHILE_139, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(139, s))
# define POTHOS_PP_WHILE_139(p, o, s) POTHOS_PP_IF(p(140, s), POTHOS_PP_WHILE_140, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(140, s))
# define POTHOS_PP_WHILE_140(p, o, s) POTHOS_PP_IF(p(141, s), POTHOS_PP_WHILE_141, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(141, s))
# define POTHOS_PP_WHILE_141(p, o, s) POTHOS_PP_IF(p(142, s), POTHOS_PP_WHILE_142, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(142, s))
# define POTHOS_PP_WHILE_142(p, o, s) POTHOS_PP_IF(p(143, s), POTHOS_PP_WHILE_143, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(143, s))
# define POTHOS_PP_WHILE_143(p, o, s) POTHOS_PP_IF(p(144, s), POTHOS_PP_WHILE_144, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(144, s))
# define POTHOS_PP_WHILE_144(p, o, s) POTHOS_PP_IF(p(145, s), POTHOS_PP_WHILE_145, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(145, s))
# define POTHOS_PP_WHILE_145(p, o, s) POTHOS_PP_IF(p(146, s), POTHOS_PP_WHILE_146, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(146, s))
# define POTHOS_PP_WHILE_146(p, o, s) POTHOS_PP_IF(p(147, s), POTHOS_PP_WHILE_147, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(147, s))
# define POTHOS_PP_WHILE_147(p, o, s) POTHOS_PP_IF(p(148, s), POTHOS_PP_WHILE_148, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(148, s))
# define POTHOS_PP_WHILE_148(p, o, s) POTHOS_PP_IF(p(149, s), POTHOS_PP_WHILE_149, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(149, s))
# define POTHOS_PP_WHILE_149(p, o, s) POTHOS_PP_IF(p(150, s), POTHOS_PP_WHILE_150, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(150, s))
# define POTHOS_PP_WHILE_150(p, o, s) POTHOS_PP_IF(p(151, s), POTHOS_PP_WHILE_151, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(151, s))
# define POTHOS_PP_WHILE_151(p, o, s) POTHOS_PP_IF(p(152, s), POTHOS_PP_WHILE_152, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(152, s))
# define POTHOS_PP_WHILE_152(p, o, s) POTHOS_PP_IF(p(153, s), POTHOS_PP_WHILE_153, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(153, s))
# define POTHOS_PP_WHILE_153(p, o, s) POTHOS_PP_IF(p(154, s), POTHOS_PP_WHILE_154, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(154, s))
# define POTHOS_PP_WHILE_154(p, o, s) POTHOS_PP_IF(p(155, s), POTHOS_PP_WHILE_155, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(155, s))
# define POTHOS_PP_WHILE_155(p, o, s) POTHOS_PP_IF(p(156, s), POTHOS_PP_WHILE_156, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(156, s))
# define POTHOS_PP_WHILE_156(p, o, s) POTHOS_PP_IF(p(157, s), POTHOS_PP_WHILE_157, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(157, s))
# define POTHOS_PP_WHILE_157(p, o, s) POTHOS_PP_IF(p(158, s), POTHOS_PP_WHILE_158, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(158, s))
# define POTHOS_PP_WHILE_158(p, o, s) POTHOS_PP_IF(p(159, s), POTHOS_PP_WHILE_159, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(159, s))
# define POTHOS_PP_WHILE_159(p, o, s) POTHOS_PP_IF(p(160, s), POTHOS_PP_WHILE_160, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(160, s))
# define POTHOS_PP_WHILE_160(p, o, s) POTHOS_PP_IF(p(161, s), POTHOS_PP_WHILE_161, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(161, s))
# define POTHOS_PP_WHILE_161(p, o, s) POTHOS_PP_IF(p(162, s), POTHOS_PP_WHILE_162, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(162, s))
# define POTHOS_PP_WHILE_162(p, o, s) POTHOS_PP_IF(p(163, s), POTHOS_PP_WHILE_163, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(163, s))
# define POTHOS_PP_WHILE_163(p, o, s) POTHOS_PP_IF(p(164, s), POTHOS_PP_WHILE_164, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(164, s))
# define POTHOS_PP_WHILE_164(p, o, s) POTHOS_PP_IF(p(165, s), POTHOS_PP_WHILE_165, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(165, s))
# define POTHOS_PP_WHILE_165(p, o, s) POTHOS_PP_IF(p(166, s), POTHOS_PP_WHILE_166, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(166, s))
# define POTHOS_PP_WHILE_166(p, o, s) POTHOS_PP_IF(p(167, s), POTHOS_PP_WHILE_167, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(167, s))
# define POTHOS_PP_WHILE_167(p, o, s) POTHOS_PP_IF(p(168, s), POTHOS_PP_WHILE_168, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(168, s))
# define POTHOS_PP_WHILE_168(p, o, s) POTHOS_PP_IF(p(169, s), POTHOS_PP_WHILE_169, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(169, s))
# define POTHOS_PP_WHILE_169(p, o, s) POTHOS_PP_IF(p(170, s), POTHOS_PP_WHILE_170, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(170, s))
# define POTHOS_PP_WHILE_170(p, o, s) POTHOS_PP_IF(p(171, s), POTHOS_PP_WHILE_171, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(171, s))
# define POTHOS_PP_WHILE_171(p, o, s) POTHOS_PP_IF(p(172, s), POTHOS_PP_WHILE_172, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(172, s))
# define POTHOS_PP_WHILE_172(p, o, s) POTHOS_PP_IF(p(173, s), POTHOS_PP_WHILE_173, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(173, s))
# define POTHOS_PP_WHILE_173(p, o, s) POTHOS_PP_IF(p(174, s), POTHOS_PP_WHILE_174, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(174, s))
# define POTHOS_PP_WHILE_174(p, o, s) POTHOS_PP_IF(p(175, s), POTHOS_PP_WHILE_175, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(175, s))
# define POTHOS_PP_WHILE_175(p, o, s) POTHOS_PP_IF(p(176, s), POTHOS_PP_WHILE_176, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(176, s))
# define POTHOS_PP_WHILE_176(p, o, s) POTHOS_PP_IF(p(177, s), POTHOS_PP_WHILE_177, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(177, s))
# define POTHOS_PP_WHILE_177(p, o, s) POTHOS_PP_IF(p(178, s), POTHOS_PP_WHILE_178, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(178, s))
# define POTHOS_PP_WHILE_178(p, o, s) POTHOS_PP_IF(p(179, s), POTHOS_PP_WHILE_179, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(179, s))
# define POTHOS_PP_WHILE_179(p, o, s) POTHOS_PP_IF(p(180, s), POTHOS_PP_WHILE_180, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(180, s))
# define POTHOS_PP_WHILE_180(p, o, s) POTHOS_PP_IF(p(181, s), POTHOS_PP_WHILE_181, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(181, s))
# define POTHOS_PP_WHILE_181(p, o, s) POTHOS_PP_IF(p(182, s), POTHOS_PP_WHILE_182, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(182, s))
# define POTHOS_PP_WHILE_182(p, o, s) POTHOS_PP_IF(p(183, s), POTHOS_PP_WHILE_183, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(183, s))
# define POTHOS_PP_WHILE_183(p, o, s) POTHOS_PP_IF(p(184, s), POTHOS_PP_WHILE_184, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(184, s))
# define POTHOS_PP_WHILE_184(p, o, s) POTHOS_PP_IF(p(185, s), POTHOS_PP_WHILE_185, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(185, s))
# define POTHOS_PP_WHILE_185(p, o, s) POTHOS_PP_IF(p(186, s), POTHOS_PP_WHILE_186, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(186, s))
# define POTHOS_PP_WHILE_186(p, o, s) POTHOS_PP_IF(p(187, s), POTHOS_PP_WHILE_187, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(187, s))
# define POTHOS_PP_WHILE_187(p, o, s) POTHOS_PP_IF(p(188, s), POTHOS_PP_WHILE_188, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(188, s))
# define POTHOS_PP_WHILE_188(p, o, s) POTHOS_PP_IF(p(189, s), POTHOS_PP_WHILE_189, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(189, s))
# define POTHOS_PP_WHILE_189(p, o, s) POTHOS_PP_IF(p(190, s), POTHOS_PP_WHILE_190, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(190, s))
# define POTHOS_PP_WHILE_190(p, o, s) POTHOS_PP_IF(p(191, s), POTHOS_PP_WHILE_191, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(191, s))
# define POTHOS_PP_WHILE_191(p, o, s) POTHOS_PP_IF(p(192, s), POTHOS_PP_WHILE_192, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(192, s))
# define POTHOS_PP_WHILE_192(p, o, s) POTHOS_PP_IF(p(193, s), POTHOS_PP_WHILE_193, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(193, s))
# define POTHOS_PP_WHILE_193(p, o, s) POTHOS_PP_IF(p(194, s), POTHOS_PP_WHILE_194, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(194, s))
# define POTHOS_PP_WHILE_194(p, o, s) POTHOS_PP_IF(p(195, s), POTHOS_PP_WHILE_195, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(195, s))
# define POTHOS_PP_WHILE_195(p, o, s) POTHOS_PP_IF(p(196, s), POTHOS_PP_WHILE_196, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(196, s))
# define POTHOS_PP_WHILE_196(p, o, s) POTHOS_PP_IF(p(197, s), POTHOS_PP_WHILE_197, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(197, s))
# define POTHOS_PP_WHILE_197(p, o, s) POTHOS_PP_IF(p(198, s), POTHOS_PP_WHILE_198, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(198, s))
# define POTHOS_PP_WHILE_198(p, o, s) POTHOS_PP_IF(p(199, s), POTHOS_PP_WHILE_199, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(199, s))
# define POTHOS_PP_WHILE_199(p, o, s) POTHOS_PP_IF(p(200, s), POTHOS_PP_WHILE_200, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(200, s))
# define POTHOS_PP_WHILE_200(p, o, s) POTHOS_PP_IF(p(201, s), POTHOS_PP_WHILE_201, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(201, s))
# define POTHOS_PP_WHILE_201(p, o, s) POTHOS_PP_IF(p(202, s), POTHOS_PP_WHILE_202, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(202, s))
# define POTHOS_PP_WHILE_202(p, o, s) POTHOS_PP_IF(p(203, s), POTHOS_PP_WHILE_203, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(203, s))
# define POTHOS_PP_WHILE_203(p, o, s) POTHOS_PP_IF(p(204, s), POTHOS_PP_WHILE_204, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(204, s))
# define POTHOS_PP_WHILE_204(p, o, s) POTHOS_PP_IF(p(205, s), POTHOS_PP_WHILE_205, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(205, s))
# define POTHOS_PP_WHILE_205(p, o, s) POTHOS_PP_IF(p(206, s), POTHOS_PP_WHILE_206, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(206, s))
# define POTHOS_PP_WHILE_206(p, o, s) POTHOS_PP_IF(p(207, s), POTHOS_PP_WHILE_207, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(207, s))
# define POTHOS_PP_WHILE_207(p, o, s) POTHOS_PP_IF(p(208, s), POTHOS_PP_WHILE_208, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(208, s))
# define POTHOS_PP_WHILE_208(p, o, s) POTHOS_PP_IF(p(209, s), POTHOS_PP_WHILE_209, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(209, s))
# define POTHOS_PP_WHILE_209(p, o, s) POTHOS_PP_IF(p(210, s), POTHOS_PP_WHILE_210, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(210, s))
# define POTHOS_PP_WHILE_210(p, o, s) POTHOS_PP_IF(p(211, s), POTHOS_PP_WHILE_211, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(211, s))
# define POTHOS_PP_WHILE_211(p, o, s) POTHOS_PP_IF(p(212, s), POTHOS_PP_WHILE_212, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(212, s))
# define POTHOS_PP_WHILE_212(p, o, s) POTHOS_PP_IF(p(213, s), POTHOS_PP_WHILE_213, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(213, s))
# define POTHOS_PP_WHILE_213(p, o, s) POTHOS_PP_IF(p(214, s), POTHOS_PP_WHILE_214, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(214, s))
# define POTHOS_PP_WHILE_214(p, o, s) POTHOS_PP_IF(p(215, s), POTHOS_PP_WHILE_215, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(215, s))
# define POTHOS_PP_WHILE_215(p, o, s) POTHOS_PP_IF(p(216, s), POTHOS_PP_WHILE_216, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(216, s))
# define POTHOS_PP_WHILE_216(p, o, s) POTHOS_PP_IF(p(217, s), POTHOS_PP_WHILE_217, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(217, s))
# define POTHOS_PP_WHILE_217(p, o, s) POTHOS_PP_IF(p(218, s), POTHOS_PP_WHILE_218, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(218, s))
# define POTHOS_PP_WHILE_218(p, o, s) POTHOS_PP_IF(p(219, s), POTHOS_PP_WHILE_219, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(219, s))
# define POTHOS_PP_WHILE_219(p, o, s) POTHOS_PP_IF(p(220, s), POTHOS_PP_WHILE_220, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(220, s))
# define POTHOS_PP_WHILE_220(p, o, s) POTHOS_PP_IF(p(221, s), POTHOS_PP_WHILE_221, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(221, s))
# define POTHOS_PP_WHILE_221(p, o, s) POTHOS_PP_IF(p(222, s), POTHOS_PP_WHILE_222, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(222, s))
# define POTHOS_PP_WHILE_222(p, o, s) POTHOS_PP_IF(p(223, s), POTHOS_PP_WHILE_223, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(223, s))
# define POTHOS_PP_WHILE_223(p, o, s) POTHOS_PP_IF(p(224, s), POTHOS_PP_WHILE_224, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(224, s))
# define POTHOS_PP_WHILE_224(p, o, s) POTHOS_PP_IF(p(225, s), POTHOS_PP_WHILE_225, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(225, s))
# define POTHOS_PP_WHILE_225(p, o, s) POTHOS_PP_IF(p(226, s), POTHOS_PP_WHILE_226, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(226, s))
# define POTHOS_PP_WHILE_226(p, o, s) POTHOS_PP_IF(p(227, s), POTHOS_PP_WHILE_227, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(227, s))
# define POTHOS_PP_WHILE_227(p, o, s) POTHOS_PP_IF(p(228, s), POTHOS_PP_WHILE_228, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(228, s))
# define POTHOS_PP_WHILE_228(p, o, s) POTHOS_PP_IF(p(229, s), POTHOS_PP_WHILE_229, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(229, s))
# define POTHOS_PP_WHILE_229(p, o, s) POTHOS_PP_IF(p(230, s), POTHOS_PP_WHILE_230, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(230, s))
# define POTHOS_PP_WHILE_230(p, o, s) POTHOS_PP_IF(p(231, s), POTHOS_PP_WHILE_231, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(231, s))
# define POTHOS_PP_WHILE_231(p, o, s) POTHOS_PP_IF(p(232, s), POTHOS_PP_WHILE_232, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(232, s))
# define POTHOS_PP_WHILE_232(p, o, s) POTHOS_PP_IF(p(233, s), POTHOS_PP_WHILE_233, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(233, s))
# define POTHOS_PP_WHILE_233(p, o, s) POTHOS_PP_IF(p(234, s), POTHOS_PP_WHILE_234, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(234, s))
# define POTHOS_PP_WHILE_234(p, o, s) POTHOS_PP_IF(p(235, s), POTHOS_PP_WHILE_235, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(235, s))
# define POTHOS_PP_WHILE_235(p, o, s) POTHOS_PP_IF(p(236, s), POTHOS_PP_WHILE_236, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(236, s))
# define POTHOS_PP_WHILE_236(p, o, s) POTHOS_PP_IF(p(237, s), POTHOS_PP_WHILE_237, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(237, s))
# define POTHOS_PP_WHILE_237(p, o, s) POTHOS_PP_IF(p(238, s), POTHOS_PP_WHILE_238, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(238, s))
# define POTHOS_PP_WHILE_238(p, o, s) POTHOS_PP_IF(p(239, s), POTHOS_PP_WHILE_239, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(239, s))
# define POTHOS_PP_WHILE_239(p, o, s) POTHOS_PP_IF(p(240, s), POTHOS_PP_WHILE_240, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(240, s))
# define POTHOS_PP_WHILE_240(p, o, s) POTHOS_PP_IF(p(241, s), POTHOS_PP_WHILE_241, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(241, s))
# define POTHOS_PP_WHILE_241(p, o, s) POTHOS_PP_IF(p(242, s), POTHOS_PP_WHILE_242, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(242, s))
# define POTHOS_PP_WHILE_242(p, o, s) POTHOS_PP_IF(p(243, s), POTHOS_PP_WHILE_243, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(243, s))
# define POTHOS_PP_WHILE_243(p, o, s) POTHOS_PP_IF(p(244, s), POTHOS_PP_WHILE_244, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(244, s))
# define POTHOS_PP_WHILE_244(p, o, s) POTHOS_PP_IF(p(245, s), POTHOS_PP_WHILE_245, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(245, s))
# define POTHOS_PP_WHILE_245(p, o, s) POTHOS_PP_IF(p(246, s), POTHOS_PP_WHILE_246, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(246, s))
# define POTHOS_PP_WHILE_246(p, o, s) POTHOS_PP_IF(p(247, s), POTHOS_PP_WHILE_247, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(247, s))
# define POTHOS_PP_WHILE_247(p, o, s) POTHOS_PP_IF(p(248, s), POTHOS_PP_WHILE_248, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(248, s))
# define POTHOS_PP_WHILE_248(p, o, s) POTHOS_PP_IF(p(249, s), POTHOS_PP_WHILE_249, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(249, s))
# define POTHOS_PP_WHILE_249(p, o, s) POTHOS_PP_IF(p(250, s), POTHOS_PP_WHILE_250, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(250, s))
# define POTHOS_PP_WHILE_250(p, o, s) POTHOS_PP_IF(p(251, s), POTHOS_PP_WHILE_251, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(251, s))
# define POTHOS_PP_WHILE_251(p, o, s) POTHOS_PP_IF(p(252, s), POTHOS_PP_WHILE_252, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(252, s))
# define POTHOS_PP_WHILE_252(p, o, s) POTHOS_PP_IF(p(253, s), POTHOS_PP_WHILE_253, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(253, s))
# define POTHOS_PP_WHILE_253(p, o, s) POTHOS_PP_IF(p(254, s), POTHOS_PP_WHILE_254, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(254, s))
# define POTHOS_PP_WHILE_254(p, o, s) POTHOS_PP_IF(p(255, s), POTHOS_PP_WHILE_255, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(255, s))
# define POTHOS_PP_WHILE_255(p, o, s) POTHOS_PP_IF(p(256, s), POTHOS_PP_WHILE_256, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(256, s))
# define POTHOS_PP_WHILE_256(p, o, s) POTHOS_PP_IF(p(257, s), POTHOS_PP_WHILE_257, s POTHOS_PP_TUPLE_EAT_3)(p, o, o(257, s))
#
# endif
