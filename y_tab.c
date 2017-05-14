
/*  A Bison parser, made from nasl_grammar.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	FUNCTION	258
#define	EQ	259
#define	NE	260
#define	LT	261
#define	GT	262
#define	LE	263
#define	GE	264
#define	SEARCH_SUBSTR	265
#define	NOT_SEARCH_SUBSTR	266
#define	POWER	267
#define	ADD	268
#define	SUB	269
#define	MUL	270
#define	DIV	271
#define	MOD	272
#define	XOR	273
#define	OR	274
#define	OR_OP	275
#define	IF	276
#define	ELSE	277
#define	FOR	278
#define	FOREACH	279
#define	WHILE	280
#define	REPEAT	281
#define	UNTIL	282
#define	BREAK	283
#define	CONTINUE	284
#define	RETURN	285
#define	INCLUDE	286
#define	STR_FIRST	287
#define	ASSIGN	288
#define	RIGHT_ASSIGN	289
#define	RIGHT_RIGHT_ASSIGN	290
#define	LEFT_ASSIGN	291
#define	ADD_ASSIGN	292
#define	SUB_ASSIGN	293
#define	MUL_ASSIGN	294
#define	DIV_ASSIGN	295
#define	MOD_ASSIGN	296
#define	AND_ASSIGN	297
#define	XOR_ASSIGN	298
#define	OR_ASSIGN	299
#define	RIGHT_OP	300
#define	RIGHT_OP_3	301
#define	LEFT_OP	302
#define	INC_OP	303
#define	DEC_OP	304
#define	AND_OP	305
#define	AND	306
#define	SEMICOLON	307
#define	LEFT_BRACE	308
#define	RIGHT_BRACE	309
#define	COMMA	310
#define	COLON	311
#define	LEFT_PARENTHESIS	312
#define	RIGHT_PARENTHESIS	313
#define	LEFT_SQ_BRACKET	314
#define	RIGHT_SQ_BRACKET	315
#define	NOT	316
#define	BIT	317
#define	NOT_BIT	318
#define	ARROW	319
#define	ASSIGN_BIT	320
#define	INTEGER	321
#define	IF_1	322
#define	IDENTIFIER	323
#define	POINT	324
#define	LOCAL	325
#define	GLOBAL	326
#define	COMMENT	327

#line 1 "nasl_grammar.y"


#define YYERROR_VERBOSE 1
#define YYDEBUG 1
extern int yylineno;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		254
#define	YYFLAG		-32768
#define	YYNTBASE	73

#define YYTRANSLATE(x) ((unsigned)(x) <= 327 ? yytranslate[x] : 119)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    10,    12,    19,    20,    22,
    24,    28,    32,    35,    38,    42,    46,    47,    49,    53,
    54,    56,    60,    64,    68,    71,    73,    75,    77,    79,
    81,    84,    86,    88,    90,    92,    95,    98,   100,   103,
   106,   109,   112,   115,   118,   121,   123,   129,   137,   139,
   141,   143,   145,   155,   164,   170,   176,   183,   184,   186,
   188,   190,   195,   197,   199,   204,   205,   207,   209,   213,
   215,   219,   223,   227,   231,   235,   239,   243,   247,   251,
   255,   257,   259,   261,   266,   268,   271,   274,   277,   280,
   284,   288,   291,   295,   299,   303,   306,   310,   314,   318,
   322,   326,   330,   334,   338,   340,   344,   348,   352,   356,
   360,   364,   368,   372,   376,   380,   384,   388,   390,   392,
   394,   396,   398,   400,   404,   406,   410,   412,   416,   418,
   420,   422,   424,   426,   428,   430,   438,   441
};

static const short yyrhs[] = {    -1,
    74,     0,    75,     0,    75,    74,     0,    87,     0,    76,
     0,     3,    68,    57,    77,    58,    79,     0,     0,    78,
     0,   104,     0,   104,    55,    78,     0,    53,    86,    54,
     0,    53,    54,     0,    87,    22,     0,    53,    82,    54,
     0,    59,    81,    60,     0,     0,    84,     0,    81,    55,
    84,     0,     0,    83,     0,    82,    55,    83,     0,    85,
    56,    85,     0,    85,    56,    98,     0,    59,    60,     0,
    98,     0,    66,     0,    32,     0,   104,     0,    87,     0,
    86,    87,     0,    88,     0,    79,     0,    72,     0,    52,
     0,   102,    52,     0,   107,    52,     0,    98,     0,    89,
    52,     0,    97,    52,     0,   117,    52,     0,   118,    52,
     0,    28,    52,     0,    29,    52,     0,    30,   108,     0,
    30,     0,    21,    57,   108,    58,    87,     0,    21,    57,
   108,    58,    87,    22,    87,     0,    92,     0,    93,     0,
    94,     0,    95,     0,    23,    57,    96,    52,   108,    52,
    96,    58,    87,     0,    23,    57,    96,    52,    52,    96,
    58,    87,     0,    25,    57,   108,    58,    87,     0,    26,
    87,    27,   108,    52,     0,    24,   104,    57,   108,    58,
    87,     0,     0,   102,     0,   107,     0,    98,     0,    31,
    57,    32,    58,     0,    90,     0,    91,     0,    68,    57,
    99,    58,     0,     0,   100,     0,   101,     0,   100,    55,
   101,     0,   108,     0,   104,    56,   108,     0,   103,    33,
   108,     0,   103,    37,   108,     0,   103,    38,   108,     0,
   103,    39,   108,     0,   103,    40,   108,     0,   103,    41,
   108,     0,   103,    34,   108,     0,   103,    35,   108,     0,
   103,    36,   108,     0,   104,     0,   105,     0,    68,     0,
   104,    59,   106,    60,     0,   108,     0,    48,   103,     0,
    49,   103,     0,   103,    48,     0,   103,    49,     0,    57,
   108,    58,     0,   108,    50,   108,     0,    61,   108,     0,
   108,    20,   108,     0,   108,    13,   108,     0,   108,    14,
   108,     0,    62,   108,     0,   108,    16,   108,     0,   108,
    17,   108,     0,   108,    51,   108,     0,   108,    18,   108,
     0,   108,    19,   108,     0,   108,    45,   108,     0,   108,
    46,   108,     0,   108,    47,   108,     0,   107,     0,   108,
    15,   108,     0,   108,    12,   108,     0,   108,     5,   108,
     0,   108,     4,   108,     0,   108,     6,   108,     0,   108,
     7,   108,     0,   108,     8,   108,     0,   108,     9,   108,
     0,   108,    65,   108,     0,   108,    63,   108,     0,   108,
    10,   108,     0,   108,    11,   108,     0,   114,     0,   102,
     0,   116,     0,   112,     0,   109,     0,    80,     0,    59,
   110,    60,     0,   111,     0,   111,    55,   110,     0,   113,
     0,    32,    64,   113,     0,    32,     0,    66,     0,   112,
     0,   115,     0,   105,     0,    98,     0,   104,     0,    66,
    69,    66,    69,    66,    69,    66,     0,    70,    77,     0,
    71,    77,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    80,    81,    84,    86,    89,    91,    94,    98,    99,   102,
   104,   107,   109,   110,   113,   115,   117,   118,   119,   122,
   123,   124,   127,   129,   131,   133,   136,   137,   138,   141,
   143,   146,   148,   149,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   164,   166,   169,   171,   174,   176,
   177,   178,   181,   183,   186,   190,   194,   198,   199,   200,
   201,   204,   208,   210,   211,   214,   215,   217,   219,   222,
   224,   227,   229,   230,   231,   232,   233,   234,   235,   236,
   239,   241,   244,   248,   252,   256,   258,   259,   260,   263,
   264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
   274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
   284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
   294,   295,   296,   299,   303,   305,   308,   310,   315,   317,
   321,   325,   327,   328,   331,   335,   339,   343
};

static const char * const yytname[] = {   "$","error","$undefined.","FUNCTION",
"EQ","NE","LT","GT","LE","GE","SEARCH_SUBSTR","NOT_SEARCH_SUBSTR","POWER","ADD",
"SUB","MUL","DIV","MOD","XOR","OR","OR_OP","IF","ELSE","FOR","FOREACH","WHILE",
"REPEAT","UNTIL","BREAK","CONTINUE","RETURN","INCLUDE","STR_FIRST","ASSIGN",
"RIGHT_ASSIGN","RIGHT_RIGHT_ASSIGN","LEFT_ASSIGN","ADD_ASSIGN","SUB_ASSIGN",
"MUL_ASSIGN","DIV_ASSIGN","MOD_ASSIGN","AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN",
"RIGHT_OP","RIGHT_OP_3","LEFT_OP","INC_OP","DEC_OP","AND_OP","AND","SEMICOLON",
"LEFT_BRACE","RIGHT_BRACE","COMMA","COLON","LEFT_PARENTHESIS","RIGHT_PARENTHESIS",
"LEFT_SQ_BRACKET","RIGHT_SQ_BRACKET","NOT","BIT","NOT_BIT","ARROW","ASSIGN_BIT",
"INTEGER","IF_1","IDENTIFIER","POINT","LOCAL","GLOBAL","COMMENT","start","command_declaration_list",
"command_declaration","function_declaration","argument_declaration","first_argument_declaration",
"body","body_arg","first_argument_list_bracket","first_argument_list_brace",
"argument_brace","argument_bracket","brace_ident","command_list","command","simple_command",
"ret","if_body","loop","for_loop","while_loop","repeat_loop","foreach_loop",
"aff_func","inc","function_call","argument_list","first_argument_list","argument",
"aff","lvalue","identifier","array_elem","array_index","post_pre_command","expression",
"const_array","list_array_data","array_data","atom","simple_array_data","var",
"var_name","ipaddr","loc","glob",""
};
#endif

static const short yyr1[] = {     0,
    73,    73,    74,    74,    75,    75,    76,    77,    77,    78,
    78,    79,    79,    79,    80,    80,    81,    81,    81,    82,
    82,    82,    83,    83,    84,    84,    85,    85,    85,    86,
    86,    87,    87,    87,    88,    88,    88,    88,    88,    88,
    88,    88,    88,    88,    89,    89,    90,    90,    91,    91,
    91,    91,    92,    92,    93,    94,    95,    96,    96,    96,
    96,    97,    98,    98,    98,    99,    99,   100,   100,   101,
   101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
   103,   103,   104,   105,   106,   107,   107,   107,   107,   108,
   108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
   108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
   108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
   108,   108,   108,   109,   110,   110,   111,   111,   112,   112,
   113,   114,   114,   114,   115,   116,   117,   118
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     1,     1,     6,     0,     1,     1,
     3,     3,     2,     2,     3,     3,     0,     1,     3,     0,
     1,     3,     3,     3,     2,     1,     1,     1,     1,     1,
     2,     1,     1,     1,     1,     2,     2,     1,     2,     2,
     2,     2,     2,     2,     2,     1,     5,     7,     1,     1,
     1,     1,     9,     8,     5,     5,     6,     0,     1,     1,
     1,     4,     1,     1,     4,     0,     1,     1,     3,     1,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     1,     1,     1,     4,     1,     2,     2,     2,     2,     3,
     3,     2,     3,     3,     3,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
     1,     1,     1,     3,     1,     3,     1,     3,     1,     1,
     1,     1,     1,     1,     1,     7,     2,     2
};

static const short yydefact[] = {     1,
     0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
     0,     0,    35,     0,    83,     8,     8,    34,     2,     3,
     6,    33,     5,    32,     0,    63,    64,    49,    50,    51,
    52,     0,    38,     0,     0,    81,    82,     0,     0,     0,
     0,     0,    58,    83,     0,     0,     0,    43,    44,   129,
    20,     0,    17,     0,     0,   130,   123,   134,   119,   135,
   133,   105,    45,   122,   121,   118,   132,   120,     0,    86,
    87,    13,     0,    30,    66,   137,     9,    10,   138,     4,
    14,    39,    40,    36,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    88,    89,     0,    37,    41,    42,     8,
     0,     0,    61,    59,    60,     0,     0,     0,    28,    27,
     0,    21,     0,    29,     0,   129,     0,   130,     0,     0,
    18,    26,     0,   125,   131,   127,    92,    96,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    12,    31,     0,    67,    68,   135,
    70,     0,    72,    78,    79,    80,    73,    74,    75,    76,
    77,     0,    85,     0,     0,     0,     0,     0,     0,    15,
     0,     0,    90,     0,    25,     0,    16,   124,     0,     0,
   109,   108,   110,   111,   112,   113,   116,   117,   107,    94,
    95,   106,    97,    98,   100,   101,    93,   102,   103,   104,
    91,    99,   115,   114,    62,    65,     0,     0,    11,    84,
     0,    47,    58,     0,     0,    55,    56,    22,    23,    24,
   128,    19,   126,     0,    69,    71,     7,     0,    14,     0,
    58,    57,     0,    48,     0,     0,     0,    54,     0,   136,
    53,     0,     0,     0
};

static const short yydefgoto[] = {   252,
    19,    20,    21,    76,    77,    22,    57,   120,   111,   112,
   121,   113,    73,    23,    24,    25,    26,    27,    28,    29,
    30,    31,   102,    32,    58,   157,   158,   159,    59,    35,
    60,    61,   172,    62,   161,    64,   123,   124,    65,   126,
    66,    67,    68,    39,    40
};

static const short yypact[] = {    93,
   -65,   -48,   -39,   -46,   -11,   713,   -20,     3,   746,    -4,
   -46,   -46,-32768,   649,     7,   -46,   -46,-32768,-32768,    93,
-32768,-32768,    43,-32768,    17,-32768,-32768,-32768,-32768,-32768,
-32768,    19,-32768,    25,   809,    20,-32768,    26,    28,    29,
    27,   746,    14,-32768,    30,   746,     4,-32768,-32768,-32768,
     2,   746,   263,   746,   746,    21,-32768,-32768,-32768,   715,
   826,-32768,   618,-32768,-32768,-32768,-32768,-32768,    44,-32768,
-32768,-32768,   661,    43,   746,-32768,-32768,    34,-32768,-32768,
-32768,-32768,-32768,-32768,   746,   746,   746,   746,   746,   746,
   746,   746,   746,-32768,-32768,   746,-32768,-32768,-32768,   -46,
   366,    41,-32768,-32768,-32768,   746,   431,   746,-32768,-32768,
   -25,-32768,    38,-32768,   452,    33,    42,-32768,     7,   -19,
-32768,-32768,    50,    46,-32768,-32768,   618,   618,    32,   746,
   746,   746,   746,   746,   746,   746,   746,   746,   746,   746,
   746,   746,   746,   746,   746,   746,   746,   746,   746,   746,
   746,   746,   746,    45,-32768,    43,    54,    56,-32768,   782,
   618,   -46,   618,   618,   618,   618,   618,   618,   618,   618,
   618,    60,   618,    55,   713,   145,   514,   713,   535,-32768,
     2,    83,-32768,   -24,-32768,    24,-32768,-32768,    -9,    58,
   618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
   618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
   618,   618,   618,   618,-32768,-32768,   746,   746,-32768,-32768,
   713,   107,    14,   597,   713,    43,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    64,-32768,   618,   109,    43,   713,    74,
    14,    43,    65,    43,   713,    77,    70,    43,   713,-32768,
    43,   137,   139,-32768
};

static const short yypgoto[] = {-32768,
   120,-32768,-32768,   -12,   -18,   -78,-32768,-32768,-32768,   -34,
   -38,   -32,-32768,    53,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -213,-32768,     1,-32768,-32768,   -64,    52,    49,
     0,    13,-32768,    85,   257,-32768,   -37,-32768,   -51,   -30,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		875


static const short yytable[] = {    36,
    33,   125,    41,    45,    79,    36,    33,    50,    42,   240,
    36,    36,    37,    36,    33,    78,    78,    43,    37,    36,
    33,    44,   116,    37,    37,    81,    37,   246,   180,   181,
   108,    48,    37,   109,     2,   186,     3,     4,     5,     6,
   187,   118,    36,   103,     2,    46,     3,     4,     5,     6,
   114,    34,    69,   122,    49,    37,   118,    34,    47,    70,
    71,    11,    12,    75,    81,    34,    74,   110,    82,    44,
    83,    34,    36,    33,   160,   154,    84,    97,    96,    98,
    99,    15,   117,   100,    38,    37,   106,   174,   162,   129,
    38,   119,   176,   182,   104,     1,   184,   190,    38,    78,
   189,   185,   215,     2,    38,     3,     4,     5,     6,   188,
   217,   216,   221,     2,   109,     3,     4,     5,     6,   220,
     7,     8,     9,    10,    34,   156,   234,   105,   239,   243,
   -33,   245,   125,   247,   249,   250,   253,   125,   254,    80,
    11,    12,   237,   219,    13,    14,   228,   232,   110,   229,
    15,   233,   235,   231,     0,     0,     0,    38,     0,     0,
    15,    78,    16,    17,    18,     2,     0,     3,     4,     5,
     6,     0,     0,     0,    36,    33,    50,    36,    33,     0,
   114,   114,   230,     0,     0,     0,   122,    37,     0,     0,
    37,     0,    11,    12,     0,     0,   223,    51,     0,     0,
     0,    52,     0,    53,     0,    54,    55,     0,     0,     0,
    56,     0,    15,     0,     0,     0,   160,     0,     0,     0,
    36,    33,    36,   103,    36,    33,    34,   222,     0,    34,
   226,     0,     0,    37,     0,    37,     0,    37,    36,    33,
    36,   103,     0,     0,    36,    33,     0,     0,    36,    33,
     0,    37,     0,    37,     0,     0,     0,    37,     0,    38,
     0,    37,    38,     0,     0,    63,     0,     0,     0,     0,
     0,     0,    34,   238,   104,     0,    34,   242,     0,     0,
     0,     0,     0,     2,     0,     3,     4,     5,     6,     0,
    34,   244,   104,     0,   116,     0,    34,   248,   101,     0,
    34,   251,   107,     0,     0,    38,     0,   105,   115,    38,
   127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   117,     0,    38,     0,   105,     0,     0,   118,    38,
   119,     0,     0,    38,     0,     0,     0,     0,     0,     0,
     0,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     0,     0,   173,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   177,     0,   179,     0,     0,     0,     0,   130,
   131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   191,   192,   193,   194,
   195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
   205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
   147,   148,   149,     0,     0,   150,   151,     0,     0,     0,
     0,     0,     0,   175,     0,     0,     0,     0,   152,     0,
   153,     0,   224,     0,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,     0,     0,     0,     0,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,     0,     0,   236,   147,   148,   149,     0,     0,
   150,   151,     0,     0,     0,     0,     0,     0,   178,     0,
     0,     0,     0,   152,     0,   153,   147,   148,   149,     0,
     0,   150,   151,     0,     0,     0,     0,     0,     0,   183,
     0,     0,     0,     0,   152,     0,   153,   130,   131,   132,
   133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,     0,     0,     0,     0,   130,   131,
   132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,     0,     0,     0,   147,   148,
   149,     0,     0,   150,   151,     0,     0,     0,     0,     0,
     0,   225,     0,     0,     0,     0,   152,     0,   153,   147,
   148,   149,     0,     0,   150,   151,   227,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   152,     0,   153,
   130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,     0,     0,     0,
     0,   130,   131,   132,   133,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,     0,     0,
     0,   147,   148,   149,     0,     0,   150,   151,   241,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     0,   153,   147,   148,   149,     0,     0,   150,   151,     2,
     0,     3,     4,     5,     6,     0,     7,     8,     9,    10,
   152,     2,   153,     3,     4,     5,     6,     0,     7,     8,
     9,    10,     0,     0,     0,     0,    11,    12,     0,     0,
    13,    14,    72,     0,     0,     0,     0,     0,    11,    12,
     0,     0,    13,    14,   155,     0,    15,     0,    16,    17,
    18,     0,     0,     0,     0,     0,     0,     0,    15,     0,
    16,    17,    18,     2,     0,     3,     4,     5,     6,     0,
     7,     8,     9,    10,     0,     0,     0,   -81,   -81,   -81,
   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
    11,    12,   -81,   -81,    13,    14,     2,     0,     3,     4,
     5,     6,     0,    96,     0,     0,     0,    50,     0,     0,
    15,     0,    16,    17,    18,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,     0,     0,     0,    51,     0,
     0,     0,    52,     0,    53,     0,    54,    55,     0,     0,
     0,    56,     0,    15,   -81,   -81,   -81,   -81,   -81,   -81,
   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,   -81,
   -81,     0,     0,     0,     0,     0,     0,   218,     0,     0,
    96,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     0,     0,     0,     0,     0,     0,    94,    95,   -82,   -82,
   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
     0,     0,     0,   -82,   -82
};

static const short yycheck[] = {     0,
     0,    53,    68,     4,    17,     6,     6,    32,    57,   223,
    11,    12,     0,    14,    14,    16,    17,    57,     6,    20,
    20,    68,    32,    11,    12,    22,    14,   241,    54,    55,
    27,    52,    20,    32,    21,    55,    23,    24,    25,    26,
    60,    66,    43,    43,    21,    57,    23,    24,    25,    26,
    51,     0,    57,    53,    52,    43,    66,     6,     6,    11,
    12,    48,    49,    57,    22,    14,    14,    66,    52,    68,
    52,    20,    73,    73,    75,    32,    52,    52,    59,    52,
    52,    68,    59,    57,     0,    73,    57,   100,    55,    69,
     6,    68,    52,    56,    43,     3,    64,    66,    14,   100,
    55,    60,    58,    21,    20,    23,    24,    25,    26,    60,
    55,    58,    58,    21,    32,    23,    24,    25,    26,    60,
    28,    29,    30,    31,    73,    73,    69,    43,    22,    66,
    22,    58,   184,    69,    58,    66,     0,   189,     0,    20,
    48,    49,   221,   162,    52,    53,   181,   186,    66,   182,
    68,   189,   217,   184,    -1,    -1,    -1,    73,    -1,    -1,
    68,   162,    70,    71,    72,    21,    -1,    23,    24,    25,
    26,    -1,    -1,    -1,   175,   175,    32,   178,   178,    -1,
   181,   182,   182,    -1,    -1,    -1,   186,   175,    -1,    -1,
   178,    -1,    48,    49,    -1,    -1,    52,    53,    -1,    -1,
    -1,    57,    -1,    59,    -1,    61,    62,    -1,    -1,    -1,
    66,    -1,    68,    -1,    -1,    -1,   217,    -1,    -1,    -1,
   221,   221,   223,   223,   225,   225,   175,   175,    -1,   178,
   178,    -1,    -1,   221,    -1,   223,    -1,   225,   239,   239,
   241,   241,    -1,    -1,   245,   245,    -1,    -1,   249,   249,
    -1,   239,    -1,   241,    -1,    -1,    -1,   245,    -1,   175,
    -1,   249,   178,    -1,    -1,     9,    -1,    -1,    -1,    -1,
    -1,    -1,   221,   221,   223,    -1,   225,   225,    -1,    -1,
    -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,    -1,
   239,   239,   241,    -1,    32,    -1,   245,   245,    42,    -1,
   249,   249,    46,    -1,    -1,   221,    -1,   223,    52,   225,
    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    59,    -1,   239,    -1,   241,    -1,    -1,    66,   245,
    68,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,   130,   131,   132,   133,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,
    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
    65,    -1,   176,    -1,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,   218,    45,    46,    47,    -1,    -1,
    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
    -1,    -1,    -1,    63,    -1,    65,    45,    46,    47,    -1,
    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
    -1,    -1,    -1,    -1,    63,    -1,    65,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    -1,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    45,    46,
    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    45,
    46,    47,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    -1,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    45,    46,    47,    -1,    -1,    50,    51,    52,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
    -1,    65,    45,    46,    47,    -1,    -1,    50,    51,    21,
    -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    63,    21,    65,    23,    24,    25,    26,    -1,    28,    29,
    30,    31,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    48,    49,
    -1,    -1,    52,    53,    54,    -1,    68,    -1,    70,    71,
    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
    70,    71,    72,    21,    -1,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    -1,    -1,    -1,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
    48,    49,    48,    49,    52,    53,    21,    -1,    23,    24,
    25,    26,    -1,    59,    -1,    -1,    -1,    32,    -1,    -1,
    68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    -1,
    -1,    -1,    57,    -1,    59,    -1,    61,    62,    -1,    -1,
    -1,    66,    -1,    68,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,
    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
    59,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
    -1,    -1,    -1,    48,    49
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */
   
#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 348 "nasl_grammar.y"

#include <stdio.h>
extern char yytext[];
extern int column;
yyerror(char const *s)
{
	
	//printf("\n%d\n", yylineno);
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

lex()
{
	printf("\n%s\n", stdin);
}
int main()
{
	return(yyparse());
}
