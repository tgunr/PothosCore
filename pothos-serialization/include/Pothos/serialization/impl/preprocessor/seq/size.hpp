# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef POTHOS_PREPROCESSOR_SEQ_SIZE_HPP
# define POTHOS_PREPROCESSOR_SEQ_SIZE_HPP
#
# include <Pothos/serialization/impl/preprocessor/cat.hpp>
# include <Pothos/serialization/impl/preprocessor/config/config.hpp>
#
# if POTHOS_PP_CONFIG_FLAGS() & POTHOS_PP_CONFIG_MWCC()
#    define POTHOS_PP_SEQ_SIZE(seq) POTHOS_PP_SEQ_SIZE_I((seq))
#    define POTHOS_PP_SEQ_SIZE_I(par) POTHOS_PP_SEQ_SIZE_II ## par
#    define POTHOS_PP_SEQ_SIZE_II(seq) POTHOS_PP_CAT(POTHOS_PP_SEQ_SIZE_, POTHOS_PP_SEQ_SIZE_0 ## seq)
# elif POTHOS_PP_CONFIG_FLAGS() & POTHOS_PP_CONFIG_EDG() || POTHOS_PP_CONFIG_FLAGS() & POTHOS_PP_CONFIG_MSVC()
#    define POTHOS_PP_SEQ_SIZE(seq) POTHOS_PP_SEQ_SIZE_I(seq)
#    define POTHOS_PP_SEQ_SIZE_I(seq) POTHOS_PP_CAT(POTHOS_PP_SEQ_SIZE_, POTHOS_PP_SEQ_SIZE_0 seq)
# elif defined(__IBMC__) || defined(__IBMCPP__)
#    define POTHOS_PP_SEQ_SIZE(seq) POTHOS_PP_CAT(POTHOS_PP_SEQ_SIZE_, POTHOS_PP_CAT(POTHOS_PP_SEQ_SIZE_0, seq))
# else
#    define POTHOS_PP_SEQ_SIZE(seq) POTHOS_PP_CAT(POTHOS_PP_SEQ_SIZE_, POTHOS_PP_SEQ_SIZE_0 seq)
# endif
#
# define POTHOS_PP_SEQ_SIZE_0(_) POTHOS_PP_SEQ_SIZE_1
# define POTHOS_PP_SEQ_SIZE_1(_) POTHOS_PP_SEQ_SIZE_2
# define POTHOS_PP_SEQ_SIZE_2(_) POTHOS_PP_SEQ_SIZE_3
# define POTHOS_PP_SEQ_SIZE_3(_) POTHOS_PP_SEQ_SIZE_4
# define POTHOS_PP_SEQ_SIZE_4(_) POTHOS_PP_SEQ_SIZE_5
# define POTHOS_PP_SEQ_SIZE_5(_) POTHOS_PP_SEQ_SIZE_6
# define POTHOS_PP_SEQ_SIZE_6(_) POTHOS_PP_SEQ_SIZE_7
# define POTHOS_PP_SEQ_SIZE_7(_) POTHOS_PP_SEQ_SIZE_8
# define POTHOS_PP_SEQ_SIZE_8(_) POTHOS_PP_SEQ_SIZE_9
# define POTHOS_PP_SEQ_SIZE_9(_) POTHOS_PP_SEQ_SIZE_10
# define POTHOS_PP_SEQ_SIZE_10(_) POTHOS_PP_SEQ_SIZE_11
# define POTHOS_PP_SEQ_SIZE_11(_) POTHOS_PP_SEQ_SIZE_12
# define POTHOS_PP_SEQ_SIZE_12(_) POTHOS_PP_SEQ_SIZE_13
# define POTHOS_PP_SEQ_SIZE_13(_) POTHOS_PP_SEQ_SIZE_14
# define POTHOS_PP_SEQ_SIZE_14(_) POTHOS_PP_SEQ_SIZE_15
# define POTHOS_PP_SEQ_SIZE_15(_) POTHOS_PP_SEQ_SIZE_16
# define POTHOS_PP_SEQ_SIZE_16(_) POTHOS_PP_SEQ_SIZE_17
# define POTHOS_PP_SEQ_SIZE_17(_) POTHOS_PP_SEQ_SIZE_18
# define POTHOS_PP_SEQ_SIZE_18(_) POTHOS_PP_SEQ_SIZE_19
# define POTHOS_PP_SEQ_SIZE_19(_) POTHOS_PP_SEQ_SIZE_20
# define POTHOS_PP_SEQ_SIZE_20(_) POTHOS_PP_SEQ_SIZE_21
# define POTHOS_PP_SEQ_SIZE_21(_) POTHOS_PP_SEQ_SIZE_22
# define POTHOS_PP_SEQ_SIZE_22(_) POTHOS_PP_SEQ_SIZE_23
# define POTHOS_PP_SEQ_SIZE_23(_) POTHOS_PP_SEQ_SIZE_24
# define POTHOS_PP_SEQ_SIZE_24(_) POTHOS_PP_SEQ_SIZE_25
# define POTHOS_PP_SEQ_SIZE_25(_) POTHOS_PP_SEQ_SIZE_26
# define POTHOS_PP_SEQ_SIZE_26(_) POTHOS_PP_SEQ_SIZE_27
# define POTHOS_PP_SEQ_SIZE_27(_) POTHOS_PP_SEQ_SIZE_28
# define POTHOS_PP_SEQ_SIZE_28(_) POTHOS_PP_SEQ_SIZE_29
# define POTHOS_PP_SEQ_SIZE_29(_) POTHOS_PP_SEQ_SIZE_30
# define POTHOS_PP_SEQ_SIZE_30(_) POTHOS_PP_SEQ_SIZE_31
# define POTHOS_PP_SEQ_SIZE_31(_) POTHOS_PP_SEQ_SIZE_32
# define POTHOS_PP_SEQ_SIZE_32(_) POTHOS_PP_SEQ_SIZE_33
# define POTHOS_PP_SEQ_SIZE_33(_) POTHOS_PP_SEQ_SIZE_34
# define POTHOS_PP_SEQ_SIZE_34(_) POTHOS_PP_SEQ_SIZE_35
# define POTHOS_PP_SEQ_SIZE_35(_) POTHOS_PP_SEQ_SIZE_36
# define POTHOS_PP_SEQ_SIZE_36(_) POTHOS_PP_SEQ_SIZE_37
# define POTHOS_PP_SEQ_SIZE_37(_) POTHOS_PP_SEQ_SIZE_38
# define POTHOS_PP_SEQ_SIZE_38(_) POTHOS_PP_SEQ_SIZE_39
# define POTHOS_PP_SEQ_SIZE_39(_) POTHOS_PP_SEQ_SIZE_40
# define POTHOS_PP_SEQ_SIZE_40(_) POTHOS_PP_SEQ_SIZE_41
# define POTHOS_PP_SEQ_SIZE_41(_) POTHOS_PP_SEQ_SIZE_42
# define POTHOS_PP_SEQ_SIZE_42(_) POTHOS_PP_SEQ_SIZE_43
# define POTHOS_PP_SEQ_SIZE_43(_) POTHOS_PP_SEQ_SIZE_44
# define POTHOS_PP_SEQ_SIZE_44(_) POTHOS_PP_SEQ_SIZE_45
# define POTHOS_PP_SEQ_SIZE_45(_) POTHOS_PP_SEQ_SIZE_46
# define POTHOS_PP_SEQ_SIZE_46(_) POTHOS_PP_SEQ_SIZE_47
# define POTHOS_PP_SEQ_SIZE_47(_) POTHOS_PP_SEQ_SIZE_48
# define POTHOS_PP_SEQ_SIZE_48(_) POTHOS_PP_SEQ_SIZE_49
# define POTHOS_PP_SEQ_SIZE_49(_) POTHOS_PP_SEQ_SIZE_50
# define POTHOS_PP_SEQ_SIZE_50(_) POTHOS_PP_SEQ_SIZE_51
# define POTHOS_PP_SEQ_SIZE_51(_) POTHOS_PP_SEQ_SIZE_52
# define POTHOS_PP_SEQ_SIZE_52(_) POTHOS_PP_SEQ_SIZE_53
# define POTHOS_PP_SEQ_SIZE_53(_) POTHOS_PP_SEQ_SIZE_54
# define POTHOS_PP_SEQ_SIZE_54(_) POTHOS_PP_SEQ_SIZE_55
# define POTHOS_PP_SEQ_SIZE_55(_) POTHOS_PP_SEQ_SIZE_56
# define POTHOS_PP_SEQ_SIZE_56(_) POTHOS_PP_SEQ_SIZE_57
# define POTHOS_PP_SEQ_SIZE_57(_) POTHOS_PP_SEQ_SIZE_58
# define POTHOS_PP_SEQ_SIZE_58(_) POTHOS_PP_SEQ_SIZE_59
# define POTHOS_PP_SEQ_SIZE_59(_) POTHOS_PP_SEQ_SIZE_60
# define POTHOS_PP_SEQ_SIZE_60(_) POTHOS_PP_SEQ_SIZE_61
# define POTHOS_PP_SEQ_SIZE_61(_) POTHOS_PP_SEQ_SIZE_62
# define POTHOS_PP_SEQ_SIZE_62(_) POTHOS_PP_SEQ_SIZE_63
# define POTHOS_PP_SEQ_SIZE_63(_) POTHOS_PP_SEQ_SIZE_64
# define POTHOS_PP_SEQ_SIZE_64(_) POTHOS_PP_SEQ_SIZE_65
# define POTHOS_PP_SEQ_SIZE_65(_) POTHOS_PP_SEQ_SIZE_66
# define POTHOS_PP_SEQ_SIZE_66(_) POTHOS_PP_SEQ_SIZE_67
# define POTHOS_PP_SEQ_SIZE_67(_) POTHOS_PP_SEQ_SIZE_68
# define POTHOS_PP_SEQ_SIZE_68(_) POTHOS_PP_SEQ_SIZE_69
# define POTHOS_PP_SEQ_SIZE_69(_) POTHOS_PP_SEQ_SIZE_70
# define POTHOS_PP_SEQ_SIZE_70(_) POTHOS_PP_SEQ_SIZE_71
# define POTHOS_PP_SEQ_SIZE_71(_) POTHOS_PP_SEQ_SIZE_72
# define POTHOS_PP_SEQ_SIZE_72(_) POTHOS_PP_SEQ_SIZE_73
# define POTHOS_PP_SEQ_SIZE_73(_) POTHOS_PP_SEQ_SIZE_74
# define POTHOS_PP_SEQ_SIZE_74(_) POTHOS_PP_SEQ_SIZE_75
# define POTHOS_PP_SEQ_SIZE_75(_) POTHOS_PP_SEQ_SIZE_76
# define POTHOS_PP_SEQ_SIZE_76(_) POTHOS_PP_SEQ_SIZE_77
# define POTHOS_PP_SEQ_SIZE_77(_) POTHOS_PP_SEQ_SIZE_78
# define POTHOS_PP_SEQ_SIZE_78(_) POTHOS_PP_SEQ_SIZE_79
# define POTHOS_PP_SEQ_SIZE_79(_) POTHOS_PP_SEQ_SIZE_80
# define POTHOS_PP_SEQ_SIZE_80(_) POTHOS_PP_SEQ_SIZE_81
# define POTHOS_PP_SEQ_SIZE_81(_) POTHOS_PP_SEQ_SIZE_82
# define POTHOS_PP_SEQ_SIZE_82(_) POTHOS_PP_SEQ_SIZE_83
# define POTHOS_PP_SEQ_SIZE_83(_) POTHOS_PP_SEQ_SIZE_84
# define POTHOS_PP_SEQ_SIZE_84(_) POTHOS_PP_SEQ_SIZE_85
# define POTHOS_PP_SEQ_SIZE_85(_) POTHOS_PP_SEQ_SIZE_86
# define POTHOS_PP_SEQ_SIZE_86(_) POTHOS_PP_SEQ_SIZE_87
# define POTHOS_PP_SEQ_SIZE_87(_) POTHOS_PP_SEQ_SIZE_88
# define POTHOS_PP_SEQ_SIZE_88(_) POTHOS_PP_SEQ_SIZE_89
# define POTHOS_PP_SEQ_SIZE_89(_) POTHOS_PP_SEQ_SIZE_90
# define POTHOS_PP_SEQ_SIZE_90(_) POTHOS_PP_SEQ_SIZE_91
# define POTHOS_PP_SEQ_SIZE_91(_) POTHOS_PP_SEQ_SIZE_92
# define POTHOS_PP_SEQ_SIZE_92(_) POTHOS_PP_SEQ_SIZE_93
# define POTHOS_PP_SEQ_SIZE_93(_) POTHOS_PP_SEQ_SIZE_94
# define POTHOS_PP_SEQ_SIZE_94(_) POTHOS_PP_SEQ_SIZE_95
# define POTHOS_PP_SEQ_SIZE_95(_) POTHOS_PP_SEQ_SIZE_96
# define POTHOS_PP_SEQ_SIZE_96(_) POTHOS_PP_SEQ_SIZE_97
# define POTHOS_PP_SEQ_SIZE_97(_) POTHOS_PP_SEQ_SIZE_98
# define POTHOS_PP_SEQ_SIZE_98(_) POTHOS_PP_SEQ_SIZE_99
# define POTHOS_PP_SEQ_SIZE_99(_) POTHOS_PP_SEQ_SIZE_100
# define POTHOS_PP_SEQ_SIZE_100(_) POTHOS_PP_SEQ_SIZE_101
# define POTHOS_PP_SEQ_SIZE_101(_) POTHOS_PP_SEQ_SIZE_102
# define POTHOS_PP_SEQ_SIZE_102(_) POTHOS_PP_SEQ_SIZE_103
# define POTHOS_PP_SEQ_SIZE_103(_) POTHOS_PP_SEQ_SIZE_104
# define POTHOS_PP_SEQ_SIZE_104(_) POTHOS_PP_SEQ_SIZE_105
# define POTHOS_PP_SEQ_SIZE_105(_) POTHOS_PP_SEQ_SIZE_106
# define POTHOS_PP_SEQ_SIZE_106(_) POTHOS_PP_SEQ_SIZE_107
# define POTHOS_PP_SEQ_SIZE_107(_) POTHOS_PP_SEQ_SIZE_108
# define POTHOS_PP_SEQ_SIZE_108(_) POTHOS_PP_SEQ_SIZE_109
# define POTHOS_PP_SEQ_SIZE_109(_) POTHOS_PP_SEQ_SIZE_110
# define POTHOS_PP_SEQ_SIZE_110(_) POTHOS_PP_SEQ_SIZE_111
# define POTHOS_PP_SEQ_SIZE_111(_) POTHOS_PP_SEQ_SIZE_112
# define POTHOS_PP_SEQ_SIZE_112(_) POTHOS_PP_SEQ_SIZE_113
# define POTHOS_PP_SEQ_SIZE_113(_) POTHOS_PP_SEQ_SIZE_114
# define POTHOS_PP_SEQ_SIZE_114(_) POTHOS_PP_SEQ_SIZE_115
# define POTHOS_PP_SEQ_SIZE_115(_) POTHOS_PP_SEQ_SIZE_116
# define POTHOS_PP_SEQ_SIZE_116(_) POTHOS_PP_SEQ_SIZE_117
# define POTHOS_PP_SEQ_SIZE_117(_) POTHOS_PP_SEQ_SIZE_118
# define POTHOS_PP_SEQ_SIZE_118(_) POTHOS_PP_SEQ_SIZE_119
# define POTHOS_PP_SEQ_SIZE_119(_) POTHOS_PP_SEQ_SIZE_120
# define POTHOS_PP_SEQ_SIZE_120(_) POTHOS_PP_SEQ_SIZE_121
# define POTHOS_PP_SEQ_SIZE_121(_) POTHOS_PP_SEQ_SIZE_122
# define POTHOS_PP_SEQ_SIZE_122(_) POTHOS_PP_SEQ_SIZE_123
# define POTHOS_PP_SEQ_SIZE_123(_) POTHOS_PP_SEQ_SIZE_124
# define POTHOS_PP_SEQ_SIZE_124(_) POTHOS_PP_SEQ_SIZE_125
# define POTHOS_PP_SEQ_SIZE_125(_) POTHOS_PP_SEQ_SIZE_126
# define POTHOS_PP_SEQ_SIZE_126(_) POTHOS_PP_SEQ_SIZE_127
# define POTHOS_PP_SEQ_SIZE_127(_) POTHOS_PP_SEQ_SIZE_128
# define POTHOS_PP_SEQ_SIZE_128(_) POTHOS_PP_SEQ_SIZE_129
# define POTHOS_PP_SEQ_SIZE_129(_) POTHOS_PP_SEQ_SIZE_130
# define POTHOS_PP_SEQ_SIZE_130(_) POTHOS_PP_SEQ_SIZE_131
# define POTHOS_PP_SEQ_SIZE_131(_) POTHOS_PP_SEQ_SIZE_132
# define POTHOS_PP_SEQ_SIZE_132(_) POTHOS_PP_SEQ_SIZE_133
# define POTHOS_PP_SEQ_SIZE_133(_) POTHOS_PP_SEQ_SIZE_134
# define POTHOS_PP_SEQ_SIZE_134(_) POTHOS_PP_SEQ_SIZE_135
# define POTHOS_PP_SEQ_SIZE_135(_) POTHOS_PP_SEQ_SIZE_136
# define POTHOS_PP_SEQ_SIZE_136(_) POTHOS_PP_SEQ_SIZE_137
# define POTHOS_PP_SEQ_SIZE_137(_) POTHOS_PP_SEQ_SIZE_138
# define POTHOS_PP_SEQ_SIZE_138(_) POTHOS_PP_SEQ_SIZE_139
# define POTHOS_PP_SEQ_SIZE_139(_) POTHOS_PP_SEQ_SIZE_140
# define POTHOS_PP_SEQ_SIZE_140(_) POTHOS_PP_SEQ_SIZE_141
# define POTHOS_PP_SEQ_SIZE_141(_) POTHOS_PP_SEQ_SIZE_142
# define POTHOS_PP_SEQ_SIZE_142(_) POTHOS_PP_SEQ_SIZE_143
# define POTHOS_PP_SEQ_SIZE_143(_) POTHOS_PP_SEQ_SIZE_144
# define POTHOS_PP_SEQ_SIZE_144(_) POTHOS_PP_SEQ_SIZE_145
# define POTHOS_PP_SEQ_SIZE_145(_) POTHOS_PP_SEQ_SIZE_146
# define POTHOS_PP_SEQ_SIZE_146(_) POTHOS_PP_SEQ_SIZE_147
# define POTHOS_PP_SEQ_SIZE_147(_) POTHOS_PP_SEQ_SIZE_148
# define POTHOS_PP_SEQ_SIZE_148(_) POTHOS_PP_SEQ_SIZE_149
# define POTHOS_PP_SEQ_SIZE_149(_) POTHOS_PP_SEQ_SIZE_150
# define POTHOS_PP_SEQ_SIZE_150(_) POTHOS_PP_SEQ_SIZE_151
# define POTHOS_PP_SEQ_SIZE_151(_) POTHOS_PP_SEQ_SIZE_152
# define POTHOS_PP_SEQ_SIZE_152(_) POTHOS_PP_SEQ_SIZE_153
# define POTHOS_PP_SEQ_SIZE_153(_) POTHOS_PP_SEQ_SIZE_154
# define POTHOS_PP_SEQ_SIZE_154(_) POTHOS_PP_SEQ_SIZE_155
# define POTHOS_PP_SEQ_SIZE_155(_) POTHOS_PP_SEQ_SIZE_156
# define POTHOS_PP_SEQ_SIZE_156(_) POTHOS_PP_SEQ_SIZE_157
# define POTHOS_PP_SEQ_SIZE_157(_) POTHOS_PP_SEQ_SIZE_158
# define POTHOS_PP_SEQ_SIZE_158(_) POTHOS_PP_SEQ_SIZE_159
# define POTHOS_PP_SEQ_SIZE_159(_) POTHOS_PP_SEQ_SIZE_160
# define POTHOS_PP_SEQ_SIZE_160(_) POTHOS_PP_SEQ_SIZE_161
# define POTHOS_PP_SEQ_SIZE_161(_) POTHOS_PP_SEQ_SIZE_162
# define POTHOS_PP_SEQ_SIZE_162(_) POTHOS_PP_SEQ_SIZE_163
# define POTHOS_PP_SEQ_SIZE_163(_) POTHOS_PP_SEQ_SIZE_164
# define POTHOS_PP_SEQ_SIZE_164(_) POTHOS_PP_SEQ_SIZE_165
# define POTHOS_PP_SEQ_SIZE_165(_) POTHOS_PP_SEQ_SIZE_166
# define POTHOS_PP_SEQ_SIZE_166(_) POTHOS_PP_SEQ_SIZE_167
# define POTHOS_PP_SEQ_SIZE_167(_) POTHOS_PP_SEQ_SIZE_168
# define POTHOS_PP_SEQ_SIZE_168(_) POTHOS_PP_SEQ_SIZE_169
# define POTHOS_PP_SEQ_SIZE_169(_) POTHOS_PP_SEQ_SIZE_170
# define POTHOS_PP_SEQ_SIZE_170(_) POTHOS_PP_SEQ_SIZE_171
# define POTHOS_PP_SEQ_SIZE_171(_) POTHOS_PP_SEQ_SIZE_172
# define POTHOS_PP_SEQ_SIZE_172(_) POTHOS_PP_SEQ_SIZE_173
# define POTHOS_PP_SEQ_SIZE_173(_) POTHOS_PP_SEQ_SIZE_174
# define POTHOS_PP_SEQ_SIZE_174(_) POTHOS_PP_SEQ_SIZE_175
# define POTHOS_PP_SEQ_SIZE_175(_) POTHOS_PP_SEQ_SIZE_176
# define POTHOS_PP_SEQ_SIZE_176(_) POTHOS_PP_SEQ_SIZE_177
# define POTHOS_PP_SEQ_SIZE_177(_) POTHOS_PP_SEQ_SIZE_178
# define POTHOS_PP_SEQ_SIZE_178(_) POTHOS_PP_SEQ_SIZE_179
# define POTHOS_PP_SEQ_SIZE_179(_) POTHOS_PP_SEQ_SIZE_180
# define POTHOS_PP_SEQ_SIZE_180(_) POTHOS_PP_SEQ_SIZE_181
# define POTHOS_PP_SEQ_SIZE_181(_) POTHOS_PP_SEQ_SIZE_182
# define POTHOS_PP_SEQ_SIZE_182(_) POTHOS_PP_SEQ_SIZE_183
# define POTHOS_PP_SEQ_SIZE_183(_) POTHOS_PP_SEQ_SIZE_184
# define POTHOS_PP_SEQ_SIZE_184(_) POTHOS_PP_SEQ_SIZE_185
# define POTHOS_PP_SEQ_SIZE_185(_) POTHOS_PP_SEQ_SIZE_186
# define POTHOS_PP_SEQ_SIZE_186(_) POTHOS_PP_SEQ_SIZE_187
# define POTHOS_PP_SEQ_SIZE_187(_) POTHOS_PP_SEQ_SIZE_188
# define POTHOS_PP_SEQ_SIZE_188(_) POTHOS_PP_SEQ_SIZE_189
# define POTHOS_PP_SEQ_SIZE_189(_) POTHOS_PP_SEQ_SIZE_190
# define POTHOS_PP_SEQ_SIZE_190(_) POTHOS_PP_SEQ_SIZE_191
# define POTHOS_PP_SEQ_SIZE_191(_) POTHOS_PP_SEQ_SIZE_192
# define POTHOS_PP_SEQ_SIZE_192(_) POTHOS_PP_SEQ_SIZE_193
# define POTHOS_PP_SEQ_SIZE_193(_) POTHOS_PP_SEQ_SIZE_194
# define POTHOS_PP_SEQ_SIZE_194(_) POTHOS_PP_SEQ_SIZE_195
# define POTHOS_PP_SEQ_SIZE_195(_) POTHOS_PP_SEQ_SIZE_196
# define POTHOS_PP_SEQ_SIZE_196(_) POTHOS_PP_SEQ_SIZE_197
# define POTHOS_PP_SEQ_SIZE_197(_) POTHOS_PP_SEQ_SIZE_198
# define POTHOS_PP_SEQ_SIZE_198(_) POTHOS_PP_SEQ_SIZE_199
# define POTHOS_PP_SEQ_SIZE_199(_) POTHOS_PP_SEQ_SIZE_200
# define POTHOS_PP_SEQ_SIZE_200(_) POTHOS_PP_SEQ_SIZE_201
# define POTHOS_PP_SEQ_SIZE_201(_) POTHOS_PP_SEQ_SIZE_202
# define POTHOS_PP_SEQ_SIZE_202(_) POTHOS_PP_SEQ_SIZE_203
# define POTHOS_PP_SEQ_SIZE_203(_) POTHOS_PP_SEQ_SIZE_204
# define POTHOS_PP_SEQ_SIZE_204(_) POTHOS_PP_SEQ_SIZE_205
# define POTHOS_PP_SEQ_SIZE_205(_) POTHOS_PP_SEQ_SIZE_206
# define POTHOS_PP_SEQ_SIZE_206(_) POTHOS_PP_SEQ_SIZE_207
# define POTHOS_PP_SEQ_SIZE_207(_) POTHOS_PP_SEQ_SIZE_208
# define POTHOS_PP_SEQ_SIZE_208(_) POTHOS_PP_SEQ_SIZE_209
# define POTHOS_PP_SEQ_SIZE_209(_) POTHOS_PP_SEQ_SIZE_210
# define POTHOS_PP_SEQ_SIZE_210(_) POTHOS_PP_SEQ_SIZE_211
# define POTHOS_PP_SEQ_SIZE_211(_) POTHOS_PP_SEQ_SIZE_212
# define POTHOS_PP_SEQ_SIZE_212(_) POTHOS_PP_SEQ_SIZE_213
# define POTHOS_PP_SEQ_SIZE_213(_) POTHOS_PP_SEQ_SIZE_214
# define POTHOS_PP_SEQ_SIZE_214(_) POTHOS_PP_SEQ_SIZE_215
# define POTHOS_PP_SEQ_SIZE_215(_) POTHOS_PP_SEQ_SIZE_216
# define POTHOS_PP_SEQ_SIZE_216(_) POTHOS_PP_SEQ_SIZE_217
# define POTHOS_PP_SEQ_SIZE_217(_) POTHOS_PP_SEQ_SIZE_218
# define POTHOS_PP_SEQ_SIZE_218(_) POTHOS_PP_SEQ_SIZE_219
# define POTHOS_PP_SEQ_SIZE_219(_) POTHOS_PP_SEQ_SIZE_220
# define POTHOS_PP_SEQ_SIZE_220(_) POTHOS_PP_SEQ_SIZE_221
# define POTHOS_PP_SEQ_SIZE_221(_) POTHOS_PP_SEQ_SIZE_222
# define POTHOS_PP_SEQ_SIZE_222(_) POTHOS_PP_SEQ_SIZE_223
# define POTHOS_PP_SEQ_SIZE_223(_) POTHOS_PP_SEQ_SIZE_224
# define POTHOS_PP_SEQ_SIZE_224(_) POTHOS_PP_SEQ_SIZE_225
# define POTHOS_PP_SEQ_SIZE_225(_) POTHOS_PP_SEQ_SIZE_226
# define POTHOS_PP_SEQ_SIZE_226(_) POTHOS_PP_SEQ_SIZE_227
# define POTHOS_PP_SEQ_SIZE_227(_) POTHOS_PP_SEQ_SIZE_228
# define POTHOS_PP_SEQ_SIZE_228(_) POTHOS_PP_SEQ_SIZE_229
# define POTHOS_PP_SEQ_SIZE_229(_) POTHOS_PP_SEQ_SIZE_230
# define POTHOS_PP_SEQ_SIZE_230(_) POTHOS_PP_SEQ_SIZE_231
# define POTHOS_PP_SEQ_SIZE_231(_) POTHOS_PP_SEQ_SIZE_232
# define POTHOS_PP_SEQ_SIZE_232(_) POTHOS_PP_SEQ_SIZE_233
# define POTHOS_PP_SEQ_SIZE_233(_) POTHOS_PP_SEQ_SIZE_234
# define POTHOS_PP_SEQ_SIZE_234(_) POTHOS_PP_SEQ_SIZE_235
# define POTHOS_PP_SEQ_SIZE_235(_) POTHOS_PP_SEQ_SIZE_236
# define POTHOS_PP_SEQ_SIZE_236(_) POTHOS_PP_SEQ_SIZE_237
# define POTHOS_PP_SEQ_SIZE_237(_) POTHOS_PP_SEQ_SIZE_238
# define POTHOS_PP_SEQ_SIZE_238(_) POTHOS_PP_SEQ_SIZE_239
# define POTHOS_PP_SEQ_SIZE_239(_) POTHOS_PP_SEQ_SIZE_240
# define POTHOS_PP_SEQ_SIZE_240(_) POTHOS_PP_SEQ_SIZE_241
# define POTHOS_PP_SEQ_SIZE_241(_) POTHOS_PP_SEQ_SIZE_242
# define POTHOS_PP_SEQ_SIZE_242(_) POTHOS_PP_SEQ_SIZE_243
# define POTHOS_PP_SEQ_SIZE_243(_) POTHOS_PP_SEQ_SIZE_244
# define POTHOS_PP_SEQ_SIZE_244(_) POTHOS_PP_SEQ_SIZE_245
# define POTHOS_PP_SEQ_SIZE_245(_) POTHOS_PP_SEQ_SIZE_246
# define POTHOS_PP_SEQ_SIZE_246(_) POTHOS_PP_SEQ_SIZE_247
# define POTHOS_PP_SEQ_SIZE_247(_) POTHOS_PP_SEQ_SIZE_248
# define POTHOS_PP_SEQ_SIZE_248(_) POTHOS_PP_SEQ_SIZE_249
# define POTHOS_PP_SEQ_SIZE_249(_) POTHOS_PP_SEQ_SIZE_250
# define POTHOS_PP_SEQ_SIZE_250(_) POTHOS_PP_SEQ_SIZE_251
# define POTHOS_PP_SEQ_SIZE_251(_) POTHOS_PP_SEQ_SIZE_252
# define POTHOS_PP_SEQ_SIZE_252(_) POTHOS_PP_SEQ_SIZE_253
# define POTHOS_PP_SEQ_SIZE_253(_) POTHOS_PP_SEQ_SIZE_254
# define POTHOS_PP_SEQ_SIZE_254(_) POTHOS_PP_SEQ_SIZE_255
# define POTHOS_PP_SEQ_SIZE_255(_) POTHOS_PP_SEQ_SIZE_256
# define POTHOS_PP_SEQ_SIZE_256(_) POTHOS_PP_SEQ_SIZE_257
#
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_0 0
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_1 1
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_2 2
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_3 3
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_4 4
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_5 5
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_6 6
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_7 7
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_8 8
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_9 9
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_10 10
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_11 11
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_12 12
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_13 13
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_14 14
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_15 15
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_16 16
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_17 17
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_18 18
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_19 19
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_20 20
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_21 21
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_22 22
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_23 23
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_24 24
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_25 25
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_26 26
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_27 27
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_28 28
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_29 29
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_30 30
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_31 31
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_32 32
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_33 33
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_34 34
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_35 35
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_36 36
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_37 37
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_38 38
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_39 39
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_40 40
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_41 41
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_42 42
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_43 43
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_44 44
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_45 45
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_46 46
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_47 47
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_48 48
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_49 49
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_50 50
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_51 51
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_52 52
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_53 53
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_54 54
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_55 55
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_56 56
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_57 57
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_58 58
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_59 59
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_60 60
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_61 61
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_62 62
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_63 63
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_64 64
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_65 65
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_66 66
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_67 67
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_68 68
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_69 69
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_70 70
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_71 71
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_72 72
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_73 73
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_74 74
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_75 75
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_76 76
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_77 77
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_78 78
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_79 79
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_80 80
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_81 81
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_82 82
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_83 83
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_84 84
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_85 85
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_86 86
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_87 87
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_88 88
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_89 89
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_90 90
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_91 91
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_92 92
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_93 93
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_94 94
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_95 95
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_96 96
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_97 97
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_98 98
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_99 99
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_100 100
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_101 101
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_102 102
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_103 103
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_104 104
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_105 105
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_106 106
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_107 107
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_108 108
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_109 109
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_110 110
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_111 111
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_112 112
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_113 113
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_114 114
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_115 115
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_116 116
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_117 117
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_118 118
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_119 119
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_120 120
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_121 121
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_122 122
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_123 123
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_124 124
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_125 125
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_126 126
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_127 127
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_128 128
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_129 129
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_130 130
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_131 131
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_132 132
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_133 133
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_134 134
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_135 135
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_136 136
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_137 137
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_138 138
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_139 139
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_140 140
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_141 141
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_142 142
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_143 143
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_144 144
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_145 145
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_146 146
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_147 147
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_148 148
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_149 149
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_150 150
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_151 151
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_152 152
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_153 153
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_154 154
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_155 155
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_156 156
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_157 157
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_158 158
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_159 159
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_160 160
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_161 161
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_162 162
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_163 163
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_164 164
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_165 165
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_166 166
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_167 167
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_168 168
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_169 169
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_170 170
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_171 171
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_172 172
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_173 173
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_174 174
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_175 175
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_176 176
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_177 177
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_178 178
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_179 179
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_180 180
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_181 181
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_182 182
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_183 183
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_184 184
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_185 185
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_186 186
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_187 187
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_188 188
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_189 189
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_190 190
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_191 191
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_192 192
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_193 193
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_194 194
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_195 195
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_196 196
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_197 197
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_198 198
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_199 199
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_200 200
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_201 201
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_202 202
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_203 203
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_204 204
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_205 205
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_206 206
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_207 207
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_208 208
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_209 209
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_210 210
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_211 211
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_212 212
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_213 213
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_214 214
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_215 215
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_216 216
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_217 217
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_218 218
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_219 219
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_220 220
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_221 221
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_222 222
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_223 223
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_224 224
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_225 225
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_226 226
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_227 227
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_228 228
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_229 229
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_230 230
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_231 231
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_232 232
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_233 233
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_234 234
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_235 235
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_236 236
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_237 237
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_238 238
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_239 239
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_240 240
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_241 241
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_242 242
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_243 243
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_244 244
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_245 245
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_246 246
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_247 247
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_248 248
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_249 249
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_250 250
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_251 251
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_252 252
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_253 253
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_254 254
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_255 255
# define POTHOS_PP_SEQ_SIZE_POTHOS_PP_SEQ_SIZE_256 256
#
# endif
