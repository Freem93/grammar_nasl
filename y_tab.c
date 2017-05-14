
/*  A Bison parser, made from nasl_grammar.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	EQ	258
#define	NE	259
#define	LT	260
#define	GT	261
#define	LE	262
#define	GE	263
#define	SEARCH_SUBSTR	264
#define	NOT_SEARCH_SUBSTR	265
#define	POWER	266
#define	ADD	267
#define	SUB	268
#define	MUL	269
#define	DIV	270
#define	MOD	271
#define	XOR	272
#define	OR	273
#define	OR_OP	274
#define	IF	275
#define	ELSE	276
#define	FOR	277
#define	FOREACH	278
#define	WHILE	279
#define	REPEAT	280
#define	UNTIL	281
#define	BREAK	282
#define	CONTINUE	283
#define	RETURN	284
#define	INCLUDE	285
#define	STR_FIRST	286
#define	FUNCTION	287
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
#define YYPRINT(file, type, value) fprintf(file, "%d", value);
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



#define	YYFINAL		224
#define	YYFLAG		-32768
#define	YYNTBASE	74

#define YYTRANSLATE(x) ((unsigned)(x) <= 327 ? yytranslate[x] : 114)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    73,     2,     2,     2,     2,     2,     2,
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
     0,     1,     3,     5,     8,    10,    12,    18,    19,    21,
    23,    27,    31,    34,    36,    39,    41,    43,    45,    47,
    50,    52,    54,    57,    60,    63,    66,    69,    72,    75,
    77,    83,    91,    93,    95,    97,    99,   109,   115,   121,
   128,   129,   131,   133,   135,   140,   142,   144,   149,   150,
   152,   154,   158,   160,   164,   168,   172,   176,   180,   184,
   188,   192,   196,   200,   202,   204,   206,   208,   213,   215,
   218,   221,   224,   227,   231,   235,   238,   242,   246,   250,
   253,   257,   261,   265,   269,   273,   277,   281,   285,   287,
   291,   295,   299,   303,   307,   311,   315,   319,   323,   327,
   331,   335,   337,   339,   341,   343,   345,   349,   351,   355,
   357,   361,   363,   365,   367,   369,   371,   373,   375,   383,
   386
};

static const short yyrhs[] = {    -1,
    75,     0,    76,     0,    76,    75,     0,    82,     0,    77,
     0,    32,    57,    78,    58,    80,     0,     0,    79,     0,
    99,     0,    99,    73,    79,     0,    53,    81,    54,     0,
    53,    54,     0,    82,     0,    81,    82,     0,    83,     0,
    80,     0,    72,     0,    52,     0,    97,    52,     0,   102,
     0,    93,     0,    84,    52,     0,    92,    52,     0,   112,
    52,     0,   113,    52,     0,    27,    52,     0,    28,    52,
     0,    29,   103,     0,    29,     0,    20,    57,   103,    58,
    82,     0,    20,    57,   103,    58,    82,    21,    82,     0,
    87,     0,    88,     0,    89,     0,    90,     0,    22,    57,
    91,    52,   103,    52,    91,    58,    82,     0,    24,    57,
   103,    58,    82,     0,    25,    82,    26,   103,    52,     0,
    23,    99,    57,   103,    58,    82,     0,     0,    97,     0,
   102,     0,    93,     0,    30,    57,    31,    58,     0,    85,
     0,    86,     0,    68,    57,    94,    58,     0,     0,    95,
     0,    96,     0,    95,    55,    96,     0,   103,     0,    99,
    56,   103,     0,    98,    33,   103,     0,    98,    37,   103,
     0,    98,    38,   103,     0,    98,    39,   103,     0,    98,
    40,   103,     0,    98,    41,   103,     0,    98,    34,   103,
     0,    98,    35,   103,     0,    98,    36,   103,     0,    99,
     0,   100,     0,    67,     0,    68,     0,    99,    59,   101,
    60,     0,   103,     0,    48,    98,     0,    49,    98,     0,
    98,    48,     0,    98,    49,     0,    57,   103,    58,     0,
   103,    50,   103,     0,    61,   103,     0,   103,    19,   103,
     0,   103,    12,   103,     0,   103,    13,   103,     0,    62,
   103,     0,   103,    15,   103,     0,   103,    16,   103,     0,
   103,    51,   103,     0,   103,    17,   103,     0,   103,    18,
   103,     0,   103,    45,   103,     0,   103,    46,   103,     0,
   103,    47,   103,     0,   102,     0,   103,    14,   103,     0,
   103,    11,   103,     0,   103,     4,   103,     0,   103,     3,
   103,     0,   103,     5,   103,     0,   103,     6,   103,     0,
   103,     7,   103,     0,   103,     8,   103,     0,   103,    65,
   103,     0,   103,    63,   103,     0,   103,     9,   103,     0,
   103,    10,   103,     0,   109,     0,    97,     0,   111,     0,
   107,     0,   104,     0,    59,   105,    60,     0,   106,     0,
   106,    55,   105,     0,   108,     0,    31,    64,   108,     0,
    31,     0,    66,     0,   107,     0,   110,     0,   100,     0,
    93,     0,    99,     0,    66,    69,    66,    69,    66,    69,
    66,     0,    70,    78,     0,    71,    78,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    80,    81,    84,    86,    89,    91,    94,    98,    99,   102,
   104,   107,   109,   112,   114,   117,   119,   120,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   135,   137,
   140,   142,   145,   147,   148,   149,   152,   156,   160,   164,
   168,   169,   170,   171,   174,   178,   180,   181,   184,   185,
   187,   189,   192,   194,   197,   199,   200,   201,   202,   203,
   204,   205,   206,   209,   211,   214,   216,   219,   223,   227,
   229,   230,   231,   234,   236,   237,   238,   239,   240,   241,
   242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
   252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
   262,   263,   264,   265,   266,   267,   270,   274,   276,   279,
   281,   286,   288,   292,   296,   298,   299,   302,   306,   310,
   314
};

static const char * const yytname[] = {   "$","error","$undefined.","EQ","NE",
"LT","GT","LE","GE","SEARCH_SUBSTR","NOT_SEARCH_SUBSTR","POWER","ADD","SUB",
"MUL","DIV","MOD","XOR","OR","OR_OP","IF","ELSE","FOR","FOREACH","WHILE","REPEAT",
"UNTIL","BREAK","CONTINUE","RETURN","INCLUDE","STR_FIRST","FUNCTION","ASSIGN",
"RIGHT_ASSIGN","RIGHT_RIGHT_ASSIGN","LEFT_ASSIGN","ADD_ASSIGN","SUB_ASSIGN",
"MUL_ASSIGN","DIV_ASSIGN","MOD_ASSIGN","AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN",
"RIGHT_OP","RIGHT_OP_3","LEFT_OP","INC_OP","DEC_OP","AND_OP","AND","SEMICOLON",
"LEFT_BRACE","RIGHT_BRACE","COMMA","COLON","LEFT_PARENTHESIS","RIGHT_PARENTHESIS",
"LEFT_SQ_BRACKET","RIGHT_SQ_BRACKET","NOT","BIT","NOT_BIT","ARROW","ASSIGN_BIT",
"INTEGER","IF_1","IDENTIFIER","POINT","LOCAL","GLOBAL","COMMENT","','","start",
"command_declaration_list","command_declaration","function_declaration","argument_declaration",
"first_argument_declaration","body","command_list","command","simple_command",
"ret","if_body","loop","for_loop","while_loop","repeat_loop","foreach_loop",
"aff_func","inc","function_call","argument_list","first_argument_list","argument",
"aff","lvalue","identifier","array_elem","array_index","post_pre_command","expression",
"const_array","list_array_data","array_data","atom","simple_array_data","var",
"var_name","ipaddr","loc","glob",""
};
#endif

static const short yyr1[] = {     0,
    74,    74,    75,    75,    76,    76,    77,    78,    78,    79,
    79,    80,    80,    81,    81,    82,    82,    82,    83,    83,
    83,    83,    83,    83,    83,    83,    83,    83,    84,    84,
    85,    85,    86,    86,    86,    86,    87,    88,    89,    90,
    91,    91,    91,    91,    92,    93,    93,    93,    94,    94,
    95,    95,    96,    96,    97,    97,    97,    97,    97,    97,
    97,    97,    97,    98,    98,    99,    99,   100,   101,   102,
   102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
   103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
   103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
   103,   103,   103,   103,   103,   103,   104,   105,   105,   106,
   106,   107,   107,   108,   109,   109,   109,   110,   111,   112,
   113
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     1,     1,     5,     0,     1,     1,
     3,     3,     2,     1,     2,     1,     1,     1,     1,     2,
     1,     1,     2,     2,     2,     2,     2,     2,     2,     1,
     5,     7,     1,     1,     1,     1,     9,     5,     5,     6,
     0,     1,     1,     1,     4,     1,     1,     4,     0,     1,
     1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     1,     1,     1,     1,     4,     1,     2,
     2,     2,     2,     3,     3,     2,     3,     3,     3,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     1,     1,     1,     1,     1,     3,     1,     3,     1,
     3,     1,     1,     1,     1,     1,     1,     1,     7,     2,
     2
};

static const short yydefact[] = {     1,
     0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
     0,     0,    19,     0,    66,    67,     8,     8,    18,     2,
     3,     6,    17,     5,    16,     0,    46,    47,    33,    34,
    35,    36,     0,    22,     0,     0,    64,    65,    21,     0,
     0,     0,    41,    67,     0,     0,     0,    27,    28,   112,
     0,     0,     0,     0,   113,   117,   103,   118,   116,    89,
    29,   106,   105,   102,   115,   104,     0,     8,    70,    71,
    13,     0,    14,    49,   120,     9,    10,   121,     4,    23,
    24,    20,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    72,    73,     0,    25,    26,     0,     0,    44,    42,
    43,     0,     0,     0,     0,   112,   113,     0,   108,   114,
   110,    76,    80,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    12,    15,     0,    50,    51,   118,    53,     0,    55,    61,
    62,    63,    56,    57,    58,    59,    60,     0,    69,     0,
     0,     0,     0,     0,    74,     0,   107,     0,     0,    93,
    92,    94,    95,    96,    97,   100,   101,    91,    78,    79,
    90,    81,    82,    84,    85,    77,    86,    87,    88,    75,
    83,    99,    98,    45,     0,    48,     0,     0,    11,    68,
    31,     0,     0,    38,    39,   111,   109,     0,     7,    52,
    54,     0,    41,    40,     0,    32,     0,     0,     0,   119,
    37,     0,     0,     0
};

static const short yydefgoto[] = {   222,
    20,    21,    22,    75,    76,    23,    72,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    98,    33,    56,   143,
   144,   145,    57,    36,    58,    59,   158,    60,   147,    62,
   108,   109,    63,   111,    64,    65,    66,    40,    41
};

static const short yypact[] = {   558,
   -53,   -48,   -52,   -31,   662,   -46,   -19,   243,   -26,   -23,
   -52,   -52,-32768,   592,-32768,   -11,   -52,   -52,-32768,-32768,
   558,-32768,-32768,-32768,-32768,   -14,-32768,-32768,-32768,-32768,
-32768,-32768,    -5,-32768,    -2,   106,    -6,-32768,-32768,     2,
     3,   243,    37,-32768,     1,   243,    10,-32768,-32768,-32768,
   243,   -24,   243,   243,    -4,-32768,-32768,   702,   560,-32768,
   526,-32768,-32768,-32768,-32768,-32768,    32,   -52,-32768,-32768,
-32768,   627,-32768,   243,-32768,-32768,    -9,-32768,-32768,-32768,
-32768,-32768,   243,   243,   243,   243,   243,   243,   243,   243,
   243,-32768,-32768,   243,-32768,-32768,   119,    15,-32768,-32768,
-32768,   243,   335,   243,   358,     5,-32768,    11,    18,-32768,
-32768,   526,   526,     9,   243,   243,   243,   243,   243,   243,
   243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
   243,   243,   243,   243,   243,   243,   243,   243,    19,    21,
-32768,-32768,    24,    26,-32768,   668,   526,   -52,   526,   526,
   526,   526,   526,   526,   526,   526,   526,    16,   526,   662,
   243,   421,   662,   442,-32768,   -21,-32768,   -24,    14,   526,
   526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
   526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
   526,   526,   526,-32768,    31,-32768,   243,   243,-32768,-32768,
    66,   505,   662,-32768,-32768,-32768,-32768,    22,-32768,-32768,
   526,   662,    37,-32768,    20,-32768,    33,    28,   662,-32768,
-32768,    90,    92,-32768
};

static const short yypgoto[] = {-32768,
    72,-32768,-32768,   -16,   -50,   -99,-32768,    25,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -113,-32768,    23,-32768,
-32768,   -96,    27,    13,     0,     8,-32768,    35,   199,-32768,
   -66,-32768,   -51,   -63,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		761


static const short yytable[] = {    37,
   110,    78,    45,    42,    37,    48,   106,    38,    43,    50,
    37,    37,    38,    37,    15,    44,    77,    77,    38,    38,
    37,    38,    34,    69,    70,    46,    35,    34,    38,    47,
    67,    35,    49,    68,    39,   104,    34,    80,    73,    39,
    35,   107,    37,    34,   107,    74,    81,    35,    39,    82,
    38,   140,    94,    95,    96,    39,     1,   102,     2,     3,
     4,     5,   139,   148,   114,    99,   161,    77,   166,   100,
   167,    37,   168,   146,   169,   200,   194,   101,   195,    38,
   197,   196,   208,    14,    11,    12,   212,   215,   218,   223,
   219,   224,    79,   220,    34,   209,   142,   199,    35,   217,
   210,   207,   206,    15,    16,     0,    39,     0,     0,     0,
     0,     0,     0,     0,   110,     0,   110,     0,     0,     0,
     0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
   124,   125,   126,   127,   128,   129,   130,   131,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    77,     0,     0,
     0,     0,     0,    92,    93,     0,     0,     0,     0,    37,
     0,     0,    37,   132,   133,   134,     0,    38,   135,   136,
    38,     0,     0,     0,     0,     0,   160,     0,     0,     0,
     0,   137,    34,   138,   201,    34,    35,   204,     0,    35,
     0,     0,     0,     0,    39,     0,   146,    39,     0,     0,
     0,     0,    37,     0,     0,     0,    61,     0,     0,     0,
    38,    37,    37,     0,     0,     0,     0,     0,    37,    38,
    38,     0,     0,     0,     0,    34,    38,   214,     0,    35,
     0,     0,     0,     0,    34,    99,   216,    39,    35,   100,
    97,    34,     0,   221,   103,    35,    39,   101,     0,   105,
     0,   112,   113,    39,     0,     0,     0,     0,     0,     0,
     0,     0,     1,     0,     2,     3,     4,     5,     0,     0,
     0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
     0,   149,   150,   151,   152,   153,   154,   155,   156,   157,
    11,    12,   159,     0,     0,     0,     0,     0,     0,    51,
   162,    52,   164,    53,    54,     0,     0,     0,    55,    15,
    16,     0,     0,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,   115,   116,   117,
   118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
   128,   129,   130,   131,     0,     0,     0,     0,     0,   202,
   115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
   125,   126,   127,   128,   129,   130,   131,     0,     0,   132,
   133,   134,     0,     0,   135,   136,     0,     0,     0,     0,
     0,     0,   163,     0,     0,     0,   211,   137,     0,   138,
     0,     0,   132,   133,   134,     0,     0,   135,   136,     0,
     0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
   137,     0,   138,   115,   116,   117,   118,   119,   120,   121,
   122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     0,     0,     0,     0,   115,   116,   117,   118,   119,   120,
   121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
   131,     0,     0,     0,     0,   132,   133,   134,     0,     0,
   135,   136,     0,     0,     0,     0,     0,     0,   203,     0,
     0,     0,     0,   137,     0,   138,   132,   133,   134,     0,
     0,   135,   136,   205,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   137,     0,   138,   115,   116,   117,
   118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
   128,   129,   130,   131,     0,     0,     0,     0,   115,   116,
   117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
   127,   128,   129,   130,   131,     0,     0,     0,     0,   132,
   133,   134,     0,     0,   135,   136,   213,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   137,     0,   138,
   132,   133,   134,     0,     0,   135,   136,     1,     0,     2,
     3,     4,     5,     0,     6,     7,     8,     9,   137,    10,
   138,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
   -65,     0,     0,     0,     0,    11,    12,   -65,   -65,    13,
    14,     1,     0,     2,     3,     4,     5,     0,     6,     7,
     8,     9,     0,     0,    15,    16,     0,    17,    18,    19,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,     0,     0,    13,    14,    71,     1,     0,     2,     3,
     4,     5,     0,     6,     7,     8,     9,     0,    15,    16,
     0,    17,    18,    19,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    11,    12,     0,     0,    13,    14,
   141,     1,     0,     2,     3,     4,     5,     0,     6,     7,
     8,     9,     0,    15,    16,     0,    17,    18,    19,     0,
   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,    11,
    12,     0,     0,    13,    14,   -64,   -64,     0,     0,     0,
     0,     0,     0,   198,     0,     0,    94,     0,    15,    16,
     0,    17,    18,    19,   -64,   -64,   -64,   -64,   -64,   -64,
   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -64,
   -64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    94
};

static const short yycheck[] = {     0,
    52,    18,     3,    57,     5,    52,    31,     0,    57,    31,
    11,    12,     5,    14,    67,    68,    17,    18,    11,    12,
    21,    14,     0,    11,    12,    57,     0,     5,    21,     5,
    57,     5,    52,    57,     0,    26,    14,    52,    14,     5,
    14,    66,    43,    21,    66,    57,    52,    21,    14,    52,
    43,    68,    59,    52,    52,    21,    20,    57,    22,    23,
    24,    25,    31,    73,    69,    43,    52,    68,    64,    43,
    60,    72,    55,    74,    66,    60,    58,    43,    58,    72,
    55,    58,    69,    53,    48,    49,    21,    66,    69,     0,
    58,     0,    21,    66,    72,   195,    72,   148,    72,   213,
   197,   168,   166,    67,    68,    -1,    72,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   166,    -1,   168,    -1,    -1,    -1,
    -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    33,    34,
    35,    36,    37,    38,    39,    40,    41,   148,    -1,    -1,
    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,   160,
    -1,    -1,   163,    45,    46,    47,    -1,   160,    50,    51,
   163,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
    -1,    63,   160,    65,   160,   163,   160,   163,    -1,   163,
    -1,    -1,    -1,    -1,   160,    -1,   197,   163,    -1,    -1,
    -1,    -1,   203,    -1,    -1,    -1,     8,    -1,    -1,    -1,
   203,   212,   213,    -1,    -1,    -1,    -1,    -1,   219,   212,
   213,    -1,    -1,    -1,    -1,   203,   219,   203,    -1,   203,
    -1,    -1,    -1,    -1,   212,   213,   212,   203,   212,   213,
    42,   219,    -1,   219,    46,   219,   212,   213,    -1,    51,
    -1,    53,    54,   219,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    20,    -1,    22,    23,    24,    25,    -1,    -1,
    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    48,    49,    94,    -1,    -1,    -1,    -1,    -1,    -1,    57,
   102,    59,   104,    61,    62,    -1,    -1,    -1,    66,    67,
    68,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
   122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,   138,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,   161,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    45,
    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
    -1,    -1,    58,    -1,    -1,    -1,   198,    63,    -1,    65,
    -1,    -1,    45,    46,    47,    -1,    -1,    50,    51,    -1,
    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
    63,    -1,    65,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
    -1,    -1,    -1,    63,    -1,    65,    45,    46,    47,    -1,
    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    63,    -1,    65,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    -1,    -1,    -1,    -1,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    45,
    46,    47,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
    45,    46,    47,    -1,    -1,    50,    51,    20,    -1,    22,
    23,    24,    25,    -1,    27,    28,    29,    30,    63,    32,
    65,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    -1,    -1,    -1,    -1,    48,    49,    48,    49,    52,
    53,    20,    -1,    22,    23,    24,    25,    -1,    27,    28,
    29,    30,    -1,    -1,    67,    68,    -1,    70,    71,    72,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
    49,    -1,    -1,    52,    53,    54,    20,    -1,    22,    23,
    24,    25,    -1,    27,    28,    29,    30,    -1,    67,    68,
    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    53,
    54,    20,    -1,    22,    23,    24,    25,    -1,    27,    28,
    29,    30,    -1,    67,    68,    -1,    70,    71,    72,    -1,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    48,
    49,    -1,    -1,    52,    53,    48,    49,    -1,    -1,    -1,
    -1,    -1,    -1,    56,    -1,    -1,    59,    -1,    67,    68,
    -1,    70,    71,    72,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,
    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    59
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
#line 319 "nasl_grammar.y"

#include <stdio.h>
extern char yytext[];
extern int column;
yyerror(char const *s)
{
	
	printf("\n%d\n", yylineno);
	fflush(stdout);
	fprintf(stderr, "%s", s);
}
lex()
{
	printf("\n%s\n", stdin);
}
int main()
{
	return(yyparse());
}
